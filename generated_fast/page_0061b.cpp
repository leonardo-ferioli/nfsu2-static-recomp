#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_488(u8* __restrict R,Cpu& c);
u32 body_48e(u8* __restrict R,Cpu& c);
u32 body_4ff(u8* __restrict R,Cpu& c);
u32 body_502(u8* __restrict R,Cpu& c);
u32 body_50f(u8* __restrict R,Cpu& c);
u32 body_592(u8* __restrict R,Cpu& c);
u32 body_5ec(u8* __restrict R,Cpu& c);
u32 body_60d(u8* __restrict R,Cpu& c);
u32 body_60f(u8* __restrict R,Cpu& c);
u32 body_610(u8* __restrict R,Cpu& c);
u32 body_615(u8* __restrict R,Cpu& c);
u32 body_61a(u8* __restrict R,Cpu& c);
u32 body_61c(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x61b,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x61b,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_61b(u8* __restrict R,Cpu& c);
u32 page_61b(Cpu& c){return body_61b(c.regs.data(),c);}
__attribute__((noinline)) u32 body_61b(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x61b000:goto L61b000;
case 0x61b002:goto L61b002;
case 0x61b004:c.instructions+=1;goto B61b004;
case 0x61b009:goto L61b009;
case 0x61b00b:c.instructions+=1;goto B61b00b;
case 0x61b00d:goto L61b00d;
case 0x61b00f:c.instructions+=1;goto B61b00f;
case 0x61b014:goto L61b014;
case 0x61b01a:c.instructions+=2;goto B61b01a;
case 0x61b01e:c.instructions+=1;goto B61b01e;
case 0x61b020:goto L61b020;
case 0x61b028:goto L61b028;
case 0x61b02d:c.instructions+=3;goto B61b02d;
case 0x61b02f:c.instructions+=2;goto B61b02f;
case 0x61b032:c.instructions+=1;goto B61b032;
case 0x61b034:goto L61b034;
case 0x61b03a:c.instructions+=3;goto B61b03a;
case 0x61b03d:c.instructions+=2;goto B61b03d;
case 0x61b043:c.instructions+=1;goto B61b043;
case 0x61b045:goto L61b045;
case 0x61b048:c.instructions+=2;goto B61b048;
case 0x61b04a:c.instructions+=1;goto B61b04a;
case 0x61b04c:goto L61b04c;
case 0x61b04e:goto L61b04e;
case 0x61b054:c.instructions+=4;goto B61b054;
case 0x61b05a:c.instructions+=3;goto B61b05a;
case 0x61b05c:c.instructions+=2;goto B61b05c;
case 0x61b05f:c.instructions+=1;goto B61b05f;
case 0x61b065:goto L61b065;
case 0x61b067:c.instructions+=1;goto B61b067;
case 0x61b069:goto L61b069;
case 0x61b06f:c.instructions+=2;goto B61b06f;
case 0x61b076:c.instructions+=1;goto B61b076;
case 0x61b078:goto L61b078;
case 0x61b07c:c.instructions+=2;goto B61b07c;
case 0x61b07e:c.instructions+=1;goto B61b07e;
case 0x61b084:goto L61b084;
case 0x61b08c:c.instructions+=1;goto B61b08c;
case 0x61b090:goto L61b090;
case 0x61b094:c.instructions+=30;goto B61b094;
case 0x61b09a:c.instructions+=29;goto B61b09a;
case 0x61b09c:c.instructions+=28;goto B61b09c;
case 0x61b09f:c.instructions+=27;goto B61b09f;
case 0x61b0a0:c.instructions+=26;goto B61b0a0;
case 0x61b0a5:c.instructions+=25;goto B61b0a5;
case 0x61b0a7:c.instructions+=24;goto B61b0a7;
case 0x61b0aa:c.instructions+=23;goto B61b0aa;
case 0x61b0ac:c.instructions+=22;goto B61b0ac;
case 0x61b0ae:c.instructions+=21;goto B61b0ae;
case 0x61b0af:c.instructions+=20;goto B61b0af;
case 0x61b0b1:c.instructions+=19;goto B61b0b1;
case 0x61b0b7:c.instructions+=18;goto B61b0b7;
case 0x61b0bd:c.instructions+=17;goto B61b0bd;
case 0x61b0c0:c.instructions+=16;goto B61b0c0;
case 0x61b0c3:c.instructions+=15;goto B61b0c3;
case 0x61b0c5:c.instructions+=14;goto B61b0c5;
case 0x61b0cb:c.instructions+=13;goto B61b0cb;
case 0x61b0ce:c.instructions+=12;goto B61b0ce;
case 0x61b0d1:c.instructions+=11;goto B61b0d1;
case 0x61b0d3:c.instructions+=10;goto B61b0d3;
case 0x61b0d5:c.instructions+=9;goto B61b0d5;
case 0x61b0d7:c.instructions+=8;goto B61b0d7;
case 0x61b0db:c.instructions+=7;goto B61b0db;
case 0x61b0de:c.instructions+=6;goto B61b0de;
case 0x61b0e1:c.instructions+=5;goto B61b0e1;
case 0x61b0e5:c.instructions+=4;goto B61b0e5;
case 0x61b0e8:c.instructions+=3;goto B61b0e8;
case 0x61b0eb:c.instructions+=2;goto B61b0eb;
case 0x61b0ef:c.instructions+=1;goto B61b0ef;
case 0x61b0f5:goto L61b0f5;
case 0x61b0f6:c.instructions+=9;goto B61b0f6;
case 0x61b0fa:c.instructions+=8;goto B61b0fa;
case 0x61b0fe:c.instructions+=7;goto B61b0fe;
case 0x61b103:c.instructions+=6;goto B61b103;
case 0x61b109:c.instructions+=5;goto B61b109;
case 0x61b10c:c.instructions+=4;goto B61b10c;
case 0x61b10e:c.instructions+=3;goto B61b10e;
case 0x61b114:c.instructions+=2;goto B61b114;
case 0x61b118:c.instructions+=1;goto B61b118;
case 0x61b11a:goto L61b11a;
case 0x61b11f:c.instructions+=4;goto B61b11f;
case 0x61b122:c.instructions+=3;goto B61b122;
case 0x61b12c:c.instructions+=2;goto B61b12c;
case 0x61b131:c.instructions+=1;goto B61b131;
case 0x61b133:goto L61b133;
case 0x61b135:c.instructions+=2;goto B61b135;
case 0x61b13b:c.instructions+=1;goto B61b13b;
case 0x61b13d:goto L61b13d;
case 0x61b141:c.instructions+=35;goto B61b141;
case 0x61b145:c.instructions+=34;goto B61b145;
case 0x61b149:c.instructions+=33;goto B61b149;
case 0x61b14a:c.instructions+=32;goto B61b14a;
case 0x61b14c:c.instructions+=31;goto B61b14c;
case 0x61b14f:c.instructions+=30;goto B61b14f;
case 0x61b151:c.instructions+=29;goto B61b151;
case 0x61b155:c.instructions+=28;goto B61b155;
case 0x61b159:c.instructions+=27;goto B61b159;
case 0x61b15c:c.instructions+=26;goto B61b15c;
case 0x61b160:c.instructions+=25;goto B61b160;
case 0x61b164:c.instructions+=24;goto B61b164;
case 0x61b168:c.instructions+=23;goto B61b168;
case 0x61b16b:c.instructions+=22;goto B61b16b;
case 0x61b16e:c.instructions+=21;goto B61b16e;
case 0x61b171:c.instructions+=20;goto B61b171;
case 0x61b175:c.instructions+=19;goto B61b175;
case 0x61b178:c.instructions+=18;goto B61b178;
case 0x61b17a:c.instructions+=17;goto B61b17a;
case 0x61b17c:c.instructions+=16;goto B61b17c;
case 0x61b17d:c.instructions+=15;goto B61b17d;
case 0x61b17f:c.instructions+=14;goto B61b17f;
case 0x61b186:c.instructions+=13;goto B61b186;
case 0x61b189:c.instructions+=12;goto B61b189;
case 0x61b18b:c.instructions+=11;goto B61b18b;
case 0x61b18c:c.instructions+=10;goto B61b18c;
case 0x61b18e:c.instructions+=9;goto B61b18e;
case 0x61b18f:c.instructions+=8;goto B61b18f;
case 0x61b190:c.instructions+=7;goto B61b190;
case 0x61b192:c.instructions+=6;goto B61b192;
case 0x61b195:c.instructions+=5;goto B61b195;
case 0x61b197:c.instructions+=4;goto B61b197;
case 0x61b19b:c.instructions+=3;goto B61b19b;
case 0x61b19f:c.instructions+=2;goto B61b19f;
case 0x61b1a2:c.instructions+=1;goto B61b1a2;
case 0x61b1a7:goto L61b1a7;
case 0x61b1ab:c.instructions+=2;goto B61b1ab;
case 0x61b1b1:c.instructions+=1;goto B61b1b1;
case 0x61b1b7:goto L61b1b7;
case 0x61b1bb:c.instructions+=4;goto B61b1bb;
case 0x61b1bc:c.instructions+=3;goto B61b1bc;
case 0x61b1be:c.instructions+=2;goto B61b1be;
case 0x61b1c2:c.instructions+=1;goto B61b1c2;
case 0x61b1c8:goto L61b1c8;
case 0x61b1cc:goto L61b1cc;
case 0x61b1cf:c.instructions+=4;goto B61b1cf;
case 0x61b1d1:c.instructions+=3;goto B61b1d1;
case 0x61b1d7:c.instructions+=2;goto B61b1d7;
case 0x61b1db:c.instructions+=1;goto B61b1db;
case 0x61b1e1:goto L61b1e1;
case 0x61b1e2:c.instructions+=5;goto B61b1e2;
case 0x61b1e3:c.instructions+=4;goto B61b1e3;
case 0x61b1e4:c.instructions+=3;goto B61b1e4;
case 0x61b1e6:c.instructions+=2;goto B61b1e6;
case 0x61b1e7:c.instructions+=1;goto B61b1e7;
case 0x61b1f0:goto L61b1f0;
case 0x61b1f5:c.instructions+=6;goto B61b1f5;
case 0x61b1f7:c.instructions+=5;goto B61b1f7;
case 0x61b1f8:c.instructions+=4;goto B61b1f8;
case 0x61b1fc:c.instructions+=3;goto B61b1fc;
case 0x61b1fd:c.instructions+=2;goto B61b1fd;
case 0x61b200:c.instructions+=1;goto B61b200;
case 0x61b202:goto L61b202;
case 0x61b203:c.instructions+=3;goto B61b203;
case 0x61b205:c.instructions+=2;goto B61b205;
case 0x61b207:c.instructions+=1;goto B61b207;
case 0x61b209:goto L61b209;
case 0x61b20a:c.instructions+=1;goto B61b20a;
case 0x61b210:goto L61b210;
case 0x61b216:c.instructions+=1;goto B61b216;
case 0x61b218:goto L61b218;
case 0x61b21e:c.instructions+=2;goto B61b21e;
case 0x61b220:c.instructions+=1;goto B61b220;
case 0x61b222:goto L61b222;
case 0x61b223:c.instructions+=2;goto B61b223;
case 0x61b224:c.instructions+=1;goto B61b224;
case 0x61b229:goto L61b229;
case 0x61b22c:c.instructions+=2;goto B61b22c;
case 0x61b22e:c.instructions+=1;goto B61b22e;
case 0x61b230:goto L61b230;
case 0x61b233:c.instructions+=4;goto B61b233;
case 0x61b238:c.instructions+=3;goto B61b238;
case 0x61b23a:c.instructions+=2;goto B61b23a;
case 0x61b240:c.instructions+=1;goto B61b240;
case 0x61b242:goto L61b242;
case 0x61b248:c.instructions+=4;goto B61b248;
case 0x61b24a:c.instructions+=3;goto B61b24a;
case 0x61b250:c.instructions+=2;goto B61b250;
case 0x61b256:c.instructions+=1;goto B61b256;
case 0x61b258:goto L61b258;
case 0x61b25e:goto L61b25e;
case 0x61b260:c.instructions+=2;goto B61b260;
case 0x61b266:c.instructions+=1;goto B61b266;
case 0x61b268:goto L61b268;
case 0x61b26b:goto L61b26b;
case 0x61b26c:c.instructions+=3;goto B61b26c;
case 0x61b26d:c.instructions+=2;goto B61b26d;
case 0x61b26e:c.instructions+=1;goto B61b26e;
case 0x61b273:goto L61b273;
case 0x61b275:c.instructions+=2;goto B61b275;
case 0x61b27b:c.instructions+=1;goto B61b27b;
case 0x61b27d:goto L61b27d;
case 0x61b27e:goto L61b27e;
case 0x61b27f:goto L61b27f;
case 0x61b280:c.instructions+=2;goto B61b280;
case 0x61b281:c.instructions+=1;goto B61b281;
case 0x61b290:goto L61b290;
case 0x61b294:c.instructions+=6;goto B61b294;
case 0x61b295:c.instructions+=5;goto B61b295;
case 0x61b296:c.instructions+=4;goto B61b296;
case 0x61b29c:c.instructions+=3;goto B61b29c;
case 0x61b2a2:c.instructions+=2;goto B61b2a2;
case 0x61b2a3:c.instructions+=1;goto B61b2a3;
case 0x61b2a8:goto L61b2a8;
case 0x61b2ad:c.instructions+=4;goto B61b2ad;
case 0x61b2b0:c.instructions+=3;goto B61b2b0;
case 0x61b2b2:c.instructions+=2;goto B61b2b2;
case 0x61b2b4:c.instructions+=1;goto B61b2b4;
case 0x61b2b6:goto L61b2b6;
case 0x61b2bc:c.instructions+=1;goto B61b2bc;
case 0x61b2c0:goto L61b2c0;
case 0x61b2c2:c.instructions+=8;goto B61b2c2;
case 0x61b2c5:c.instructions+=7;goto B61b2c5;
case 0x61b2c7:c.instructions+=6;goto B61b2c7;
case 0x61b2ca:c.instructions+=5;goto B61b2ca;
case 0x61b2d0:c.instructions+=4;goto B61b2d0;
case 0x61b2d1:c.instructions+=3;goto B61b2d1;
case 0x61b2d4:c.instructions+=2;goto B61b2d4;
case 0x61b2d6:c.instructions+=1;goto B61b2d6;
case 0x61b2d8:goto L61b2d8;
case 0x61b2d9:c.instructions+=2;goto B61b2d9;
case 0x61b2da:c.instructions+=1;goto B61b2da;
case 0x61b2e0:goto L61b2e0;
case 0x61b2e3:c.instructions+=13;goto B61b2e3;
case 0x61b2e7:c.instructions+=12;goto B61b2e7;
case 0x61b2e8:c.instructions+=11;goto B61b2e8;
case 0x61b2e9:c.instructions+=10;goto B61b2e9;
case 0x61b2ef:c.instructions+=9;goto B61b2ef;
case 0x61b2f0:c.instructions+=8;goto B61b2f0;
case 0x61b2f1:c.instructions+=7;goto B61b2f1;
case 0x61b2f7:c.instructions+=6;goto B61b2f7;
case 0x61b2f9:c.instructions+=5;goto B61b2f9;
case 0x61b2fc:c.instructions+=4;goto B61b2fc;
case 0x61b301:c.instructions+=3;goto B61b301;
case 0x61b302:c.instructions+=2;goto B61b302;
case 0x61b306:c.instructions+=1;goto B61b306;
case 0x61b30b:goto L61b30b;
case 0x61b30d:c.instructions+=7;goto B61b30d;
case 0x61b310:c.instructions+=6;goto B61b310;
case 0x61b31a:c.instructions+=5;goto B61b31a;
case 0x61b31f:c.instructions+=4;goto B61b31f;
case 0x61b322:c.instructions+=3;goto B61b322;
case 0x61b324:c.instructions+=2;goto B61b324;
case 0x61b326:c.instructions+=1;goto B61b326;
case 0x61b32c:goto L61b32c;
case 0x61b330:c.instructions+=2;goto B61b330;
case 0x61b336:c.instructions+=1;goto B61b336;
case 0x61b33b:goto L61b33b;
case 0x61b33f:c.instructions+=2;goto B61b33f;
case 0x61b343:c.instructions+=1;goto B61b343;
case 0x61b348:goto L61b348;
case 0x61b34a:c.instructions+=15;goto B61b34a;
case 0x61b34d:c.instructions+=14;goto B61b34d;
case 0x61b34f:c.instructions+=13;goto B61b34f;
case 0x61b356:c.instructions+=12;goto B61b356;
case 0x61b359:c.instructions+=11;goto B61b359;
case 0x61b35b:c.instructions+=10;goto B61b35b;
case 0x61b35e:c.instructions+=9;goto B61b35e;
case 0x61b361:c.instructions+=8;goto B61b361;
case 0x61b363:c.instructions+=7;goto B61b363;
case 0x61b366:c.instructions+=6;goto B61b366;
case 0x61b36a:c.instructions+=5;goto B61b36a;
case 0x61b36e:c.instructions+=4;goto B61b36e;
case 0x61b371:c.instructions+=3;goto B61b371;
case 0x61b375:c.instructions+=2;goto B61b375;
case 0x61b378:c.instructions+=1;goto B61b378;
case 0x61b37a:goto L61b37a;
case 0x61b380:c.instructions+=1;goto B61b380;
case 0x61b382:goto L61b382;
case 0x61b389:goto L61b389;
case 0x61b38b:c.instructions+=4;goto B61b38b;
case 0x61b38e:c.instructions+=3;goto B61b38e;
case 0x61b395:c.instructions+=2;goto B61b395;
case 0x61b398:c.instructions+=1;goto B61b398;
case 0x61b39a:goto L61b39a;
case 0x61b3a0:c.instructions+=1;goto B61b3a0;
case 0x61b3a2:goto L61b3a2;
case 0x61b3a8:goto L61b3a8;
case 0x61b3aa:c.instructions+=4;goto B61b3aa;
case 0x61b3ae:c.instructions+=3;goto B61b3ae;
case 0x61b3b0:c.instructions+=2;goto B61b3b0;
case 0x61b3b3:c.instructions+=1;goto B61b3b3;
case 0x61b3b5:goto L61b3b5;
case 0x61b3bb:c.instructions+=1;goto B61b3bb;
case 0x61b3bd:goto L61b3bd;
case 0x61b3c3:goto L61b3c3;
case 0x61b3c5:c.instructions+=3;goto B61b3c5;
case 0x61b3c8:c.instructions+=2;goto B61b3c8;
case 0x61b3cb:c.instructions+=1;goto B61b3cb;
case 0x61b3cd:goto L61b3cd;
case 0x61b3d3:c.instructions+=1;goto B61b3d3;
case 0x61b3d5:goto L61b3d5;
case 0x61b3db:goto L61b3db;
case 0x61b3de:c.instructions+=24;goto B61b3de;
case 0x61b3df:c.instructions+=23;goto B61b3df;
case 0x61b3e2:c.instructions+=22;goto B61b3e2;
case 0x61b3e5:c.instructions+=21;goto B61b3e5;
case 0x61b3ec:c.instructions+=20;goto B61b3ec;
case 0x61b3ee:c.instructions+=19;goto B61b3ee;
case 0x61b3f1:c.instructions+=18;goto B61b3f1;
case 0x61b3f8:c.instructions+=17;goto B61b3f8;
case 0x61b3fb:c.instructions+=16;goto B61b3fb;
case 0x61b3fe:c.instructions+=15;goto B61b3fe;
case 0x61b401:c.instructions+=14;goto B61b401;
case 0x61b404:c.instructions+=13;goto B61b404;
case 0x61b40b:c.instructions+=12;goto B61b40b;
case 0x61b40e:c.instructions+=11;goto B61b40e;
case 0x61b411:c.instructions+=10;goto B61b411;
case 0x61b418:c.instructions+=9;goto B61b418;
case 0x61b41b:c.instructions+=8;goto B61b41b;
case 0x61b423:c.instructions+=7;goto B61b423;
case 0x61b427:c.instructions+=6;goto B61b427;
case 0x61b42b:c.instructions+=5;goto B61b42b;
case 0x61b42e:c.instructions+=4;goto B61b42e;
case 0x61b435:c.instructions+=3;goto B61b435;
case 0x61b438:c.instructions+=2;goto B61b438;
case 0x61b43e:c.instructions+=1;goto B61b43e;
case 0x61b444:goto L61b444;
case 0x61b448:goto L61b448;
case 0x61b449:c.instructions+=1;goto B61b449;
case 0x61b44e:goto L61b44e;
case 0x61b451:c.instructions+=6;goto B61b451;
case 0x61b452:c.instructions+=5;goto B61b452;
case 0x61b453:c.instructions+=4;goto B61b453;
case 0x61b454:c.instructions+=3;goto B61b454;
case 0x61b455:c.instructions+=2;goto B61b455;
case 0x61b458:c.instructions+=1;goto B61b458;
case 0x61b460:goto L61b460;
case 0x61b464:c.instructions+=3;goto B61b464;
case 0x61b466:c.instructions+=2;goto B61b466;
case 0x61b46c:c.instructions+=1;goto B61b46c;
case 0x61b46e:goto L61b46e;
case 0x61b478:c.instructions+=2;goto B61b478;
case 0x61b47d:c.instructions+=1;goto B61b47d;
case 0x61b47e:goto L61b47e;
case 0x61b484:c.instructions+=1;goto B61b484;
case 0x61b486:goto L61b486;
case 0x61b488:c.instructions+=4;goto B61b488;
case 0x61b48d:c.instructions+=3;goto B61b48d;
case 0x61b492:c.instructions+=2;goto B61b492;
case 0x61b497:c.instructions+=1;goto B61b497;
case 0x61b498:goto L61b498;
case 0x61b49e:c.instructions+=1;goto B61b49e;
case 0x61b4a0:goto L61b4a0;
case 0x61b4a3:c.instructions+=14;goto B61b4a3;
case 0x61b4a6:c.instructions+=13;goto B61b4a6;
case 0x61b4a8:c.instructions+=12;goto B61b4a8;
case 0x61b4ab:c.instructions+=11;goto B61b4ab;
case 0x61b4b1:c.instructions+=10;goto B61b4b1;
case 0x61b4b7:c.instructions+=9;goto B61b4b7;
case 0x61b4b8:c.instructions+=8;goto B61b4b8;
case 0x61b4be:c.instructions+=7;goto B61b4be;
case 0x61b4c1:c.instructions+=6;goto B61b4c1;
case 0x61b4c3:c.instructions+=5;goto B61b4c3;
case 0x61b4c9:c.instructions+=4;goto B61b4c9;
case 0x61b4cc:c.instructions+=3;goto B61b4cc;
case 0x61b4d2:c.instructions+=2;goto B61b4d2;
case 0x61b4d7:c.instructions+=1;goto B61b4d7;
case 0x61b4d8:goto L61b4d8;
case 0x61b4da:c.instructions+=1;goto B61b4da;
case 0x61b4e0:goto L61b4e0;
case 0x61b4e4:c.instructions+=3;goto B61b4e4;
case 0x61b4e6:c.instructions+=2;goto B61b4e6;
case 0x61b4e7:c.instructions+=1;goto B61b4e7;
case 0x61b4ec:goto L61b4ec;
case 0x61b4ee:c.instructions+=3;goto B61b4ee;
case 0x61b4f0:c.instructions+=2;goto B61b4f0;
case 0x61b4f2:c.instructions+=1;goto B61b4f2;
case 0x61b500:goto L61b500;
case 0x61b504:c.instructions+=3;goto B61b504;
case 0x61b506:c.instructions+=2;goto B61b506;
case 0x61b507:c.instructions+=1;goto B61b507;
case 0x61b50c:goto L61b50c;
case 0x61b50e:c.instructions+=1;goto B61b50e;
case 0x61b510:goto L61b510;
case 0x61b513:c.instructions+=1;goto B61b513;
case 0x61b516:goto L61b516;
case 0x61b51a:c.instructions+=1;goto B61b51a;
case 0x61b520:goto L61b520;
case 0x61b523:c.instructions+=7;goto B61b523;
case 0x61b524:c.instructions+=6;goto B61b524;
case 0x61b525:c.instructions+=5;goto B61b525;
case 0x61b526:c.instructions+=4;goto B61b526;
case 0x61b528:c.instructions+=3;goto B61b528;
case 0x61b529:c.instructions+=2;goto B61b529;
case 0x61b531:c.instructions+=1;goto B61b531;
case 0x61b536:goto L61b536;
case 0x61b538:c.instructions+=2;goto B61b538;
case 0x61b53c:c.instructions+=1;goto B61b53c;
case 0x61b53e:goto L61b53e;
case 0x61b542:c.instructions+=1;goto B61b542;
case 0x61b546:goto L61b546;
case 0x61b549:c.instructions+=5;goto B61b549;
case 0x61b54c:c.instructions+=4;goto B61b54c;
case 0x61b54f:c.instructions+=3;goto B61b54f;
case 0x61b551:c.instructions+=2;goto B61b551;
case 0x61b553:c.instructions+=1;goto B61b553;
case 0x61b555:goto L61b555;
case 0x61b559:c.instructions+=4;goto B61b559;
case 0x61b55a:c.instructions+=3;goto B61b55a;
case 0x61b55c:c.instructions+=2;goto B61b55c;
case 0x61b560:c.instructions+=1;goto B61b560;
case 0x61b562:goto L61b562;
case 0x61b566:c.instructions+=3;goto B61b566;
case 0x61b56c:c.instructions+=2;goto B61b56c;
case 0x61b570:c.instructions+=1;goto B61b570;
case 0x61b572:goto L61b572;
case 0x61b576:c.instructions+=2;goto B61b576;
case 0x61b579:c.instructions+=1;goto B61b579;
case 0x61b57b:goto L61b57b;
case 0x61b57f:c.instructions+=2;goto B61b57f;
case 0x61b581:c.instructions+=1;goto B61b581;
case 0x61b583:goto L61b583;
case 0x61b585:c.instructions+=1;goto B61b585;
case 0x61b587:goto L61b587;
case 0x61b58b:c.instructions+=5;goto B61b58b;
case 0x61b58e:c.instructions+=4;goto B61b58e;
case 0x61b591:c.instructions+=3;goto B61b591;
case 0x61b593:c.instructions+=2;goto B61b593;
case 0x61b595:c.instructions+=1;goto B61b595;
case 0x61b597:goto L61b597;
case 0x61b59a:c.instructions+=2;goto B61b59a;
case 0x61b59c:c.instructions+=1;goto B61b59c;
case 0x61b59e:goto L61b59e;
case 0x61b5a2:goto L61b5a2;
case 0x61b5a4:c.instructions+=2;goto B61b5a4;
case 0x61b5a6:c.instructions+=1;goto B61b5a6;
case 0x61b5a8:goto L61b5a8;
case 0x61b5a9:c.instructions+=6;goto B61b5a9;
case 0x61b5aa:c.instructions+=5;goto B61b5aa;
case 0x61b5ab:c.instructions+=4;goto B61b5ab;
case 0x61b5ae:c.instructions+=3;goto B61b5ae;
case 0x61b5af:c.instructions+=2;goto B61b5af;
case 0x61b5b2:c.instructions+=1;goto B61b5b2;
case 0x61b5b5:goto L61b5b5;
case 0x61b5b9:c.instructions+=6;goto B61b5b9;
case 0x61b5ba:c.instructions+=5;goto B61b5ba;
case 0x61b5bb:c.instructions+=4;goto B61b5bb;
case 0x61b5bc:c.instructions+=3;goto B61b5bc;
case 0x61b5bd:c.instructions+=2;goto B61b5bd;
case 0x61b5c0:c.instructions+=1;goto B61b5c0;
case 0x61b5d0:goto L61b5d0;
case 0x61b5d1:c.instructions+=6;goto B61b5d1;
case 0x61b5d2:c.instructions+=5;goto B61b5d2;
case 0x61b5d3:c.instructions+=4;goto B61b5d3;
case 0x61b5d5:c.instructions+=3;goto B61b5d5;
case 0x61b5d6:c.instructions+=2;goto B61b5d6;
case 0x61b5d8:c.instructions+=1;goto B61b5d8;
case 0x61b5dd:goto L61b5dd;
case 0x61b5df:c.instructions+=2;goto B61b5df;
case 0x61b5e1:c.instructions+=1;goto B61b5e1;
case 0x61b5e3:goto L61b5e3;
case 0x61b5e7:goto L61b5e7;
case 0x61b5ea:c.instructions+=10;goto B61b5ea;
case 0x61b5ec:c.instructions+=9;goto B61b5ec;
case 0x61b5ee:c.instructions+=8;goto B61b5ee;
case 0x61b5f3:c.instructions+=7;goto B61b5f3;
case 0x61b5f5:c.instructions+=6;goto B61b5f5;
case 0x61b5f7:c.instructions+=5;goto B61b5f7;
case 0x61b5fa:c.instructions+=4;goto B61b5fa;
case 0x61b5fc:c.instructions+=3;goto B61b5fc;
case 0x61b5ff:c.instructions+=2;goto B61b5ff;
case 0x61b601:c.instructions+=1;goto B61b601;
case 0x61b603:goto L61b603;
case 0x61b606:c.instructions+=1;goto B61b606;
case 0x61b608:goto L61b608;
case 0x61b60b:c.instructions+=4;goto B61b60b;
case 0x61b60d:c.instructions+=3;goto B61b60d;
case 0x61b60f:c.instructions+=2;goto B61b60f;
case 0x61b611:c.instructions+=1;goto B61b611;
case 0x61b613:goto L61b613;
case 0x61b614:c.instructions+=5;goto B61b614;
case 0x61b615:c.instructions+=4;goto B61b615;
case 0x61b616:c.instructions+=3;goto B61b616;
case 0x61b619:c.instructions+=2;goto B61b619;
case 0x61b61a:c.instructions+=1;goto B61b61a;
case 0x61b61d:goto L61b61d;
case 0x61b620:c.instructions+=5;goto B61b620;
case 0x61b621:c.instructions+=4;goto B61b621;
case 0x61b622:c.instructions+=3;goto B61b622;
case 0x61b623:c.instructions+=2;goto B61b623;
case 0x61b624:c.instructions+=1;goto B61b624;
case 0x61b630:goto L61b630;
case 0x61b631:c.instructions+=4;goto B61b631;
case 0x61b632:c.instructions+=3;goto B61b632;
case 0x61b636:c.instructions+=2;goto B61b636;
case 0x61b638:c.instructions+=1;goto B61b638;
case 0x61b63a:goto L61b63a;
case 0x61b63c:c.instructions+=1;goto B61b63c;
case 0x61b641:goto L61b641;
case 0x61b643:c.instructions+=1;goto B61b643;
case 0x61b645:goto L61b645;
case 0x61b648:c.instructions+=2;goto B61b648;
case 0x61b64a:c.instructions+=1;goto B61b64a;
case 0x61b64c:goto L61b64c;
case 0x61b64e:c.instructions+=3;goto B61b64e;
case 0x61b650:c.instructions+=2;goto B61b650;
case 0x61b652:c.instructions+=1;goto B61b652;
case 0x61b654:goto L61b654;
case 0x61b655:c.instructions+=3;goto B61b655;
case 0x61b657:c.instructions+=2;goto B61b657;
case 0x61b658:c.instructions+=1;goto B61b658;
case 0x61b65b:goto L61b65b;
case 0x61b65e:c.instructions+=6;goto B61b65e;
case 0x61b660:c.instructions+=5;goto B61b660;
case 0x61b663:c.instructions+=4;goto B61b663;
case 0x61b664:c.instructions+=3;goto B61b664;
case 0x61b666:c.instructions+=2;goto B61b666;
case 0x61b667:c.instructions+=1;goto B61b667;
case 0x61b670:goto L61b670;
case 0x61b673:c.instructions+=7;goto B61b673;
case 0x61b674:c.instructions+=6;goto B61b674;
case 0x61b675:c.instructions+=5;goto B61b675;
case 0x61b679:c.instructions+=4;goto B61b679;
case 0x61b67a:c.instructions+=3;goto B61b67a;
case 0x61b67b:c.instructions+=2;goto B61b67b;
case 0x61b67c:c.instructions+=1;goto B61b67c;
case 0x61b681:goto L61b681;
case 0x61b682:c.instructions+=2;goto B61b682;
case 0x61b686:c.instructions+=1;goto B61b686;
case 0x61b68b:goto L61b68b;
case 0x61b68e:c.instructions+=3;goto B61b68e;
case 0x61b694:c.instructions+=2;goto B61b694;
case 0x61b698:c.instructions+=1;goto B61b698;
case 0x61b69a:goto L61b69a;
case 0x61b6a0:c.instructions+=1;goto B61b6a0;
case 0x61b6a2:goto L61b6a2;
case 0x61b6a8:c.instructions+=2;goto B61b6a8;
case 0x61b6b0:c.instructions+=1;goto B61b6b0;
case 0x61b6b2:goto L61b6b2;
case 0x61b6ba:goto L61b6ba;
case 0x61b6bc:c.instructions+=2;goto B61b6bc;
case 0x61b6c0:c.instructions+=1;goto B61b6c0;
case 0x61b6c5:goto L61b6c5;
case 0x61b6c7:c.instructions+=2;goto B61b6c7;
case 0x61b6cb:c.instructions+=1;goto B61b6cb;
case 0x61b6d1:goto L61b6d1;
case 0x61b6d5:c.instructions+=9;goto B61b6d5;
case 0x61b6d8:c.instructions+=8;goto B61b6d8;
case 0x61b6db:c.instructions+=7;goto B61b6db;
case 0x61b6df:c.instructions+=6;goto B61b6df;
case 0x61b6e1:c.instructions+=5;goto B61b6e1;
case 0x61b6e4:c.instructions+=4;goto B61b6e4;
case 0x61b6e6:c.instructions+=3;goto B61b6e6;
case 0x61b6e8:c.instructions+=2;goto B61b6e8;
case 0x61b6ec:c.instructions+=1;goto B61b6ec;
case 0x61b6ee:goto L61b6ee;
case 0x61b6f0:c.instructions+=1;goto B61b6f0;
case 0x61b6f6:goto L61b6f6;
case 0x61b6f8:c.instructions+=1;goto B61b6f8;
case 0x61b6fe:goto L61b6fe;
case 0x61b701:c.instructions+=2;goto B61b701;
case 0x61b705:c.instructions+=1;goto B61b705;
case 0x61b707:goto L61b707;
case 0x61b70d:c.instructions+=3;goto B61b70d;
case 0x61b70f:c.instructions+=2;goto B61b70f;
case 0x61b711:c.instructions+=1;goto B61b711;
case 0x61b713:goto L61b713;
case 0x61b720:goto L61b720;
case 0x61b726:c.instructions+=2;goto B61b726;
case 0x61b729:c.instructions+=1;goto B61b729;
case 0x61b72f:goto L61b72f;
case 0x61b730:c.instructions+=2;goto B61b730;
case 0x61b732:c.instructions+=1;goto B61b732;
case 0x61b734:goto L61b734;
case 0x61b739:goto L61b739;
case 0x61b73d:c.instructions+=6;goto B61b73d;
case 0x61b73f:c.instructions+=5;goto B61b73f;
case 0x61b741:c.instructions+=4;goto B61b741;
case 0x61b742:c.instructions+=3;goto B61b742;
case 0x61b743:c.instructions+=2;goto B61b743;
case 0x61b744:c.instructions+=1;goto B61b744;
case 0x61b749:goto L61b749;
case 0x61b74c:c.instructions+=3;goto B61b74c;
case 0x61b74e:c.instructions+=2;goto B61b74e;
case 0x61b752:c.instructions+=1;goto B61b752;
case 0x61b758:goto L61b758;
case 0x61b75a:goto L61b75a;
case 0x61b75c:c.instructions+=1;goto B61b75c;
case 0x61b762:goto L61b762;
case 0x61b766:c.instructions+=3;goto B61b766;
case 0x61b76c:c.instructions+=2;goto B61b76c;
case 0x61b76f:c.instructions+=1;goto B61b76f;
case 0x61b775:goto L61b775;
case 0x61b779:c.instructions+=2;goto B61b779;
case 0x61b77d:c.instructions+=1;goto B61b77d;
case 0x61b783:goto L61b783;
case 0x61b787:c.instructions+=2;goto B61b787;
case 0x61b789:c.instructions+=1;goto B61b789;
case 0x61b78b:goto L61b78b;
case 0x61b78f:c.instructions+=5;goto B61b78f;
case 0x61b792:c.instructions+=4;goto B61b792;
case 0x61b795:c.instructions+=3;goto B61b795;
case 0x61b797:c.instructions+=2;goto B61b797;
case 0x61b799:c.instructions+=1;goto B61b799;
case 0x61b79f:goto L61b79f;
case 0x61b7a4:c.instructions+=1;goto B61b7a4;
case 0x61b7a9:goto L61b7a9;
case 0x61b7ad:c.instructions+=3;goto B61b7ad;
case 0x61b7b0:c.instructions+=2;goto B61b7b0;
case 0x61b7b5:c.instructions+=1;goto B61b7b5;
case 0x61b7b7:goto L61b7b7;
case 0x61b7bd:c.instructions+=7;goto B61b7bd;
case 0x61b7c0:c.instructions+=6;goto B61b7c0;
case 0x61b7c3:c.instructions+=5;goto B61b7c3;
case 0x61b7c7:c.instructions+=4;goto B61b7c7;
case 0x61b7ca:c.instructions+=3;goto B61b7ca;
case 0x61b7cc:c.instructions+=2;goto B61b7cc;
case 0x61b7ce:c.instructions+=1;goto B61b7ce;
case 0x61b7d0:goto L61b7d0;
case 0x61b7d3:c.instructions+=1;goto B61b7d3;
case 0x61b7d6:goto L61b7d6;
case 0x61b7d8:c.instructions+=3;goto B61b7d8;
case 0x61b7db:c.instructions+=2;goto B61b7db;
case 0x61b7df:c.instructions+=1;goto B61b7df;
case 0x61b7e5:goto L61b7e5;
case 0x61b7e7:c.instructions+=1;goto B61b7e7;
case 0x61b7ed:goto L61b7ed;
case 0x61b7ee:c.instructions+=3;goto B61b7ee;
case 0x61b7f1:c.instructions+=2;goto B61b7f1;
case 0x61b7f3:c.instructions+=1;goto B61b7f3;
case 0x61b7f5:goto L61b7f5;
case 0x61b7fd:goto L61b7fd;
case 0x61b802:c.instructions+=1;goto B61b802;
case 0x61b807:goto L61b807;
case 0x61b80b:c.instructions+=3;goto B61b80b;
case 0x61b80e:c.instructions+=2;goto B61b80e;
case 0x61b813:c.instructions+=1;goto B61b813;
case 0x61b815:goto L61b815;
case 0x61b81b:c.instructions+=7;goto B61b81b;
case 0x61b81e:c.instructions+=6;goto B61b81e;
case 0x61b821:c.instructions+=5;goto B61b821;
case 0x61b825:c.instructions+=4;goto B61b825;
case 0x61b828:c.instructions+=3;goto B61b828;
case 0x61b82a:c.instructions+=2;goto B61b82a;
case 0x61b82c:c.instructions+=1;goto B61b82c;
case 0x61b82e:goto L61b82e;
case 0x61b831:c.instructions+=1;goto B61b831;
case 0x61b834:goto L61b834;
case 0x61b836:c.instructions+=3;goto B61b836;
case 0x61b839:c.instructions+=2;goto B61b839;
case 0x61b83d:c.instructions+=1;goto B61b83d;
case 0x61b843:goto L61b843;
case 0x61b845:c.instructions+=1;goto B61b845;
case 0x61b84b:goto L61b84b;
case 0x61b84c:c.instructions+=3;goto B61b84c;
case 0x61b84f:c.instructions+=2;goto B61b84f;
case 0x61b851:c.instructions+=1;goto B61b851;
case 0x61b853:goto L61b853;
case 0x61b855:goto L61b855;
case 0x61b85a:c.instructions+=1;goto B61b85a;
case 0x61b85f:goto L61b85f;
case 0x61b863:c.instructions+=4;goto B61b863;
case 0x61b867:c.instructions+=3;goto B61b867;
case 0x61b86a:c.instructions+=2;goto B61b86a;
case 0x61b86f:c.instructions+=1;goto B61b86f;
case 0x61b871:goto L61b871;
case 0x61b877:c.instructions+=7;goto B61b877;
case 0x61b87a:c.instructions+=6;goto B61b87a;
case 0x61b87d:c.instructions+=5;goto B61b87d;
case 0x61b881:c.instructions+=4;goto B61b881;
case 0x61b884:c.instructions+=3;goto B61b884;
case 0x61b886:c.instructions+=2;goto B61b886;
case 0x61b888:c.instructions+=1;goto B61b888;
case 0x61b88a:goto L61b88a;
case 0x61b88d:c.instructions+=1;goto B61b88d;
case 0x61b890:goto L61b890;
case 0x61b892:c.instructions+=3;goto B61b892;
case 0x61b895:c.instructions+=2;goto B61b895;
case 0x61b899:c.instructions+=1;goto B61b899;
case 0x61b89f:goto L61b89f;
case 0x61b8a1:c.instructions+=1;goto B61b8a1;
case 0x61b8a7:goto L61b8a7;
case 0x61b8a8:c.instructions+=3;goto B61b8a8;
case 0x61b8ab:c.instructions+=2;goto B61b8ab;
case 0x61b8ad:c.instructions+=1;goto B61b8ad;
case 0x61b8af:goto L61b8af;
case 0x61b8b1:goto L61b8b1;
case 0x61b8b5:c.instructions+=2;goto B61b8b5;
case 0x61b8b7:c.instructions+=1;goto B61b8b7;
case 0x61b8b9:goto L61b8b9;
case 0x61b8bd:c.instructions+=2;goto B61b8bd;
case 0x61b8bf:c.instructions+=1;goto B61b8bf;
case 0x61b8c1:goto L61b8c1;
case 0x61b8c5:c.instructions+=2;goto B61b8c5;
case 0x61b8c7:c.instructions+=1;goto B61b8c7;
case 0x61b8c9:goto L61b8c9;
case 0x61b8cb:c.instructions+=1;goto B61b8cb;
case 0x61b8cd:goto L61b8cd;
case 0x61b8d1:c.instructions+=2;goto B61b8d1;
case 0x61b8d3:c.instructions+=1;goto B61b8d3;
case 0x61b8d5:goto L61b8d5;
case 0x61b8d7:c.instructions+=1;goto B61b8d7;
case 0x61b8d9:goto L61b8d9;
case 0x61b8dd:c.instructions+=6;goto B61b8dd;
case 0x61b8e0:c.instructions+=5;goto B61b8e0;
case 0x61b8e3:c.instructions+=4;goto B61b8e3;
case 0x61b8e6:c.instructions+=3;goto B61b8e6;
case 0x61b8ea:c.instructions+=2;goto B61b8ea;
case 0x61b8ec:c.instructions+=1;goto B61b8ec;
case 0x61b8ee:goto L61b8ee;
case 0x61b8f1:c.instructions+=1;goto B61b8f1;
case 0x61b8f3:goto L61b8f3;
case 0x61b8f7:c.instructions+=2;goto B61b8f7;
case 0x61b8fb:c.instructions+=1;goto B61b8fb;
case 0x61b8ff:goto L61b8ff;
case 0x61b902:c.instructions+=3;goto B61b902;
case 0x61b904:c.instructions+=2;goto B61b904;
case 0x61b908:c.instructions+=1;goto B61b908;
case 0x61b90e:goto L61b90e;
case 0x61b912:c.instructions+=4;goto B61b912;
case 0x61b914:c.instructions+=3;goto B61b914;
case 0x61b918:c.instructions+=2;goto B61b918;
case 0x61b91c:c.instructions+=1;goto B61b91c;
case 0x61b922:goto L61b922;
case 0x61b923:c.instructions+=6;goto B61b923;
case 0x61b924:c.instructions+=5;goto B61b924;
case 0x61b925:c.instructions+=4;goto B61b925;
case 0x61b927:c.instructions+=3;goto B61b927;
case 0x61b928:c.instructions+=2;goto B61b928;
case 0x61b92b:c.instructions+=1;goto B61b92b;
case 0x61b92e:goto L61b92e;
case 0x61b932:c.instructions+=1;goto B61b932;
case 0x61b937:goto L61b937;
case 0x61b939:c.instructions+=1;goto B61b939;
case 0x61b93f:goto L61b93f;
case 0x61b942:c.instructions+=2;goto B61b942;
case 0x61b946:c.instructions+=1;goto B61b946;
case 0x61b94b:goto L61b94b;
case 0x61b94d:c.instructions+=1;goto B61b94d;
case 0x61b953:goto L61b953;
case 0x61b956:c.instructions+=1;goto B61b956;
case 0x61b95b:goto L61b95b;
case 0x61b95d:c.instructions+=1;goto B61b95d;
case 0x61b963:goto L61b963;
case 0x61b966:c.instructions+=1;goto B61b966;
case 0x61b96b:goto L61b96b;
case 0x61b96c:c.instructions+=6;goto B61b96c;
case 0x61b96d:c.instructions+=5;goto B61b96d;
case 0x61b96e:c.instructions+=4;goto B61b96e;
case 0x61b970:c.instructions+=3;goto B61b970;
case 0x61b971:c.instructions+=2;goto B61b971;
case 0x61b974:c.instructions+=1;goto B61b974;
case 0x61b980:goto L61b980;
case 0x61b981:c.instructions+=8;goto B61b981;
case 0x61b985:c.instructions+=7;goto B61b985;
case 0x61b986:c.instructions+=6;goto B61b986;
case 0x61b98a:c.instructions+=5;goto B61b98a;
case 0x61b98b:c.instructions+=4;goto B61b98b;
case 0x61b98c:c.instructions+=3;goto B61b98c;
case 0x61b98d:c.instructions+=2;goto B61b98d;
case 0x61b991:c.instructions+=1;goto B61b991;
case 0x61b996:goto L61b996;
case 0x61b99d:c.instructions+=8;goto B61b99d;
case 0x61b9a1:c.instructions+=7;goto B61b9a1;
case 0x61b9a4:c.instructions+=6;goto B61b9a4;
case 0x61b9a6:c.instructions+=5;goto B61b9a6;
case 0x61b9a8:c.instructions+=4;goto B61b9a8;
case 0x61b9aa:c.instructions+=3;goto B61b9aa;
case 0x61b9ae:c.instructions+=2;goto B61b9ae;
case 0x61b9b2:c.instructions+=1;goto B61b9b2;
case 0x61b9b4:goto L61b9b4;
case 0x61b9b8:c.instructions+=2;goto B61b9b8;
case 0x61b9be:c.instructions+=1;goto B61b9be;
case 0x61b9c1:goto L61b9c1;
case 0x61b9c4:c.instructions+=1;goto B61b9c4;
case 0x61b9c6:goto L61b9c6;
case 0x61b9c7:c.instructions+=2;goto B61b9c7;
case 0x61b9ca:c.instructions+=1;goto B61b9ca;
case 0x61b9cc:goto L61b9cc;
case 0x61b9cf:c.instructions+=1;goto B61b9cf;
case 0x61b9d1:goto L61b9d1;
case 0x61b9d2:c.instructions+=4;goto B61b9d2;
case 0x61b9d4:c.instructions+=3;goto B61b9d4;
case 0x61b9d5:c.instructions+=2;goto B61b9d5;
case 0x61b9d6:c.instructions+=1;goto B61b9d6;
case 0x61b9d9:goto L61b9d9;
case 0x61b9db:goto L61b9db;
case 0x61b9de:c.instructions+=4;goto B61b9de;
case 0x61b9df:c.instructions+=3;goto B61b9df;
case 0x61b9e0:c.instructions+=2;goto B61b9e0;
case 0x61b9e2:c.instructions+=1;goto B61b9e2;
case 0x61b9e4:goto L61b9e4;
case 0x61b9e8:goto L61b9e8;
case 0x61b9eb:c.instructions+=2;goto B61b9eb;
case 0x61b9ed:c.instructions+=1;goto B61b9ed;
case 0x61b9ef:goto L61b9ef;
case 0x61b9f1:c.instructions+=1;goto B61b9f1;
case 0x61b9f3:goto L61b9f3;
case 0x61b9f5:goto L61b9f5;
case 0x61b9f9:c.instructions+=8;goto B61b9f9;
case 0x61b9fd:c.instructions+=7;goto B61b9fd;
case 0x61b9fe:c.instructions+=6;goto B61b9fe;
case 0x61b9ff:c.instructions+=5;goto B61b9ff;
case 0x61ba00:c.instructions+=4;goto B61ba00;
case 0x61ba04:c.instructions+=3;goto B61ba04;
case 0x61ba05:c.instructions+=2;goto B61ba05;
case 0x61ba06:c.instructions+=1;goto B61ba06;
case 0x61ba0b:goto L61ba0b;
case 0x61ba0d:c.instructions+=1;goto B61ba0d;
case 0x61ba0f:goto L61ba0f;
case 0x61ba13:goto L61ba13;
case 0x61ba14:c.instructions+=2;goto B61ba14;
case 0x61ba17:c.instructions+=1;goto B61ba17;
case 0x61ba19:goto L61ba19;
case 0x61ba1b:goto L61ba1b;
case 0x61ba1c:c.instructions+=5;goto B61ba1c;
case 0x61ba1d:c.instructions+=4;goto B61ba1d;
case 0x61ba1e:c.instructions+=3;goto B61ba1e;
case 0x61ba1f:c.instructions+=2;goto B61ba1f;
case 0x61ba20:c.instructions+=1;goto B61ba20;
case 0x61ba30:goto L61ba30;
case 0x61ba34:c.instructions+=9;goto B61ba34;
case 0x61ba38:c.instructions+=8;goto B61ba38;
case 0x61ba39:c.instructions+=7;goto B61ba39;
case 0x61ba3d:c.instructions+=6;goto B61ba3d;
case 0x61ba3f:c.instructions+=5;goto B61ba3f;
case 0x61ba40:c.instructions+=4;goto B61ba40;
case 0x61ba44:c.instructions+=3;goto B61ba44;
case 0x61ba45:c.instructions+=2;goto B61ba45;
case 0x61ba46:c.instructions+=1;goto B61ba46;
case 0x61ba4b:goto L61ba4b;
case 0x61ba50:goto L61ba50;
case 0x61ba54:c.instructions+=10;goto B61ba54;
case 0x61ba58:c.instructions+=9;goto B61ba58;
case 0x61ba59:c.instructions+=8;goto B61ba59;
case 0x61ba5d:c.instructions+=7;goto B61ba5d;
case 0x61ba5e:c.instructions+=6;goto B61ba5e;
case 0x61ba62:c.instructions+=5;goto B61ba62;
case 0x61ba63:c.instructions+=4;goto B61ba63;
case 0x61ba67:c.instructions+=3;goto B61ba67;
case 0x61ba68:c.instructions+=2;goto B61ba68;
case 0x61ba69:c.instructions+=1;goto B61ba69;
case 0x61ba6e:goto L61ba6e;
case 0x61ba80:goto L61ba80;
case 0x61ba84:c.instructions+=16;goto B61ba84;
case 0x61ba85:c.instructions+=15;goto B61ba85;
case 0x61ba89:c.instructions+=14;goto B61ba89;
case 0x61ba8a:c.instructions+=13;goto B61ba8a;
case 0x61ba8e:c.instructions+=12;goto B61ba8e;
case 0x61ba8f:c.instructions+=11;goto B61ba8f;
case 0x61ba90:c.instructions+=10;goto B61ba90;
case 0x61ba91:c.instructions+=9;goto B61ba91;
case 0x61ba93:c.instructions+=8;goto B61ba93;
case 0x61ba94:c.instructions+=7;goto B61ba94;
case 0x61ba95:c.instructions+=6;goto B61ba95;
case 0x61ba97:c.instructions+=5;goto B61ba97;
case 0x61ba9b:c.instructions+=4;goto B61ba9b;
case 0x61ba9c:c.instructions+=3;goto B61ba9c;
case 0x61ba9d:c.instructions+=2;goto B61ba9d;
case 0x61ba9f:c.instructions+=1;goto B61ba9f;
case 0x61baa4:goto L61baa4;
case 0x61baa6:c.instructions+=1;goto B61baa6;
case 0x61baa8:goto L61baa8;
case 0x61baac:c.instructions+=1;goto B61baac;
case 0x61baae:goto L61baae;
case 0x61bab2:c.instructions+=8;goto B61bab2;
case 0x61bab3:c.instructions+=7;goto B61bab3;
case 0x61bab4:c.instructions+=6;goto B61bab4;
case 0x61bab8:c.instructions+=5;goto B61bab8;
case 0x61bab9:c.instructions+=4;goto B61bab9;
case 0x61baba:c.instructions+=3;goto B61baba;
case 0x61babb:c.instructions+=2;goto B61babb;
case 0x61babd:c.instructions+=1;goto B61babd;
case 0x61bac2:goto L61bac2;
case 0x61bac3:c.instructions+=2;goto B61bac3;
case 0x61bac5:c.instructions+=1;goto B61bac5;
case 0x61bac7:goto L61bac7;
case 0x61bac9:c.instructions+=5;goto B61bac9;
case 0x61baca:c.instructions+=4;goto B61baca;
case 0x61bacb:c.instructions+=3;goto B61bacb;
case 0x61bacc:c.instructions+=2;goto B61bacc;
case 0x61bacd:c.instructions+=1;goto B61bacd;
case 0x61bad0:goto L61bad0;
case 0x61bad3:c.instructions+=7;goto B61bad3;
case 0x61bad4:c.instructions+=6;goto B61bad4;
case 0x61bad6:c.instructions+=5;goto B61bad6;
case 0x61bad7:c.instructions+=4;goto B61bad7;
case 0x61bad8:c.instructions+=3;goto B61bad8;
case 0x61bad9:c.instructions+=2;goto B61bad9;
case 0x61badd:c.instructions+=1;goto B61badd;
case 0x61bae2:goto L61bae2;
case 0x61bae4:c.instructions+=3;goto B61bae4;
case 0x61bae6:c.instructions+=2;goto B61bae6;
case 0x61baea:c.instructions+=1;goto B61baea;
case 0x61baf0:goto L61baf0;
case 0x61baf4:goto L61baf4;
case 0x61baf7:c.instructions+=7;goto B61baf7;
case 0x61bafa:c.instructions+=6;goto B61bafa;
case 0x61bafe:c.instructions+=5;goto B61bafe;
case 0x61bb00:c.instructions+=4;goto B61bb00;
case 0x61bb03:c.instructions+=3;goto B61bb03;
case 0x61bb05:c.instructions+=2;goto B61bb05;
case 0x61bb07:c.instructions+=1;goto B61bb07;
case 0x61bb09:goto L61bb09;
case 0x61bb0b:c.instructions+=1;goto B61bb0b;
case 0x61bb11:goto L61bb11;
case 0x61bb13:c.instructions+=1;goto B61bb13;
case 0x61bb19:goto L61bb19;
case 0x61bb1c:c.instructions+=1;goto B61bb1c;
case 0x61bb1e:goto L61bb1e;
case 0x61bb20:c.instructions+=1;goto B61bb20;
case 0x61bb22:goto L61bb22;
case 0x61bb28:c.instructions+=3;goto B61bb28;
case 0x61bb2a:c.instructions+=2;goto B61bb2a;
case 0x61bb2c:c.instructions+=1;goto B61bb2c;
case 0x61bb2e:goto L61bb2e;
case 0x61bb30:goto L61bb30;
case 0x61bb36:c.instructions+=2;goto B61bb36;
case 0x61bb39:c.instructions+=1;goto B61bb39;
case 0x61bb3f:goto L61bb3f;
case 0x61bb40:c.instructions+=2;goto B61bb40;
case 0x61bb42:c.instructions+=1;goto B61bb42;
case 0x61bb44:goto L61bb44;
case 0x61bb48:goto L61bb48;
case 0x61bb4d:goto L61bb4d;
case 0x61bb4f:c.instructions+=6;goto B61bb4f;
case 0x61bb51:c.instructions+=5;goto B61bb51;
case 0x61bb52:c.instructions+=4;goto B61bb52;
case 0x61bb53:c.instructions+=3;goto B61bb53;
case 0x61bb57:c.instructions+=2;goto B61bb57;
case 0x61bb58:c.instructions+=1;goto B61bb58;
case 0x61bb5d:goto L61bb5d;
case 0x61bb60:c.instructions+=2;goto B61bb60;
case 0x61bb62:c.instructions+=1;goto B61bb62;
case 0x61bb64:goto L61bb64;
case 0x61bb66:c.instructions+=1;goto B61bb66;
case 0x61bb68:goto L61bb68;
case 0x61bb6a:c.instructions+=1;goto B61bb6a;
case 0x61bb6c:goto L61bb6c;
case 0x61bb70:c.instructions+=3;goto B61bb70;
case 0x61bb76:c.instructions+=2;goto B61bb76;
case 0x61bb79:c.instructions+=1;goto B61bb79;
case 0x61bb7b:goto L61bb7b;
case 0x61bb7f:c.instructions+=2;goto B61bb7f;
case 0x61bb82:c.instructions+=1;goto B61bb82;
case 0x61bb84:goto L61bb84;
case 0x61bb88:c.instructions+=2;goto B61bb88;
case 0x61bb8a:c.instructions+=1;goto B61bb8a;
case 0x61bb8c:goto L61bb8c;
case 0x61bb90:c.instructions+=2;goto B61bb90;
case 0x61bb92:c.instructions+=1;goto B61bb92;
case 0x61bb94:goto L61bb94;
case 0x61bb98:c.instructions+=5;goto B61bb98;
case 0x61bb9b:c.instructions+=4;goto B61bb9b;
case 0x61bb9e:c.instructions+=3;goto B61bb9e;
case 0x61bba0:c.instructions+=2;goto B61bba0;
case 0x61bba2:c.instructions+=1;goto B61bba2;
case 0x61bba4:goto L61bba4;
case 0x61bba8:c.instructions+=2;goto B61bba8;
case 0x61bbab:c.instructions+=1;goto B61bbab;
case 0x61bbad:goto L61bbad;
case 0x61bbb0:c.instructions+=4;goto B61bbb0;
case 0x61bbb3:c.instructions+=3;goto B61bbb3;
case 0x61bbb6:c.instructions+=2;goto B61bbb6;
case 0x61bbb8:c.instructions+=1;goto B61bbb8;
case 0x61bbba:goto L61bbba;
case 0x61bbbd:c.instructions+=2;goto B61bbbd;
case 0x61bbbf:c.instructions+=1;goto B61bbbf;
case 0x61bbc1:goto L61bbc1;
case 0x61bbc5:goto L61bbc5;
case 0x61bbc7:c.instructions+=3;goto B61bbc7;
case 0x61bbc9:c.instructions+=2;goto B61bbc9;
case 0x61bbcd:c.instructions+=1;goto B61bbcd;
case 0x61bbd3:goto L61bbd3;
case 0x61bbd5:goto L61bbd5;
case 0x61bbd6:c.instructions+=5;goto B61bbd6;
case 0x61bbd7:c.instructions+=4;goto B61bbd7;
case 0x61bbd8:c.instructions+=3;goto B61bbd8;
case 0x61bbd9:c.instructions+=2;goto B61bbd9;
case 0x61bbdc:c.instructions+=1;goto B61bbdc;
case 0x61bbdf:goto L61bbdf;
case 0x61bbe3:c.instructions+=2;goto B61bbe3;
case 0x61bbe7:c.instructions+=1;goto B61bbe7;
case 0x61bbf0:goto L61bbf0;
case 0x61bbf4:c.instructions+=10;goto B61bbf4;
case 0x61bbf8:c.instructions+=9;goto B61bbf8;
case 0x61bbf9:c.instructions+=8;goto B61bbf9;
case 0x61bbfd:c.instructions+=7;goto B61bbfd;
case 0x61bbfe:c.instructions+=6;goto B61bbfe;
case 0x61bc02:c.instructions+=5;goto B61bc02;
case 0x61bc03:c.instructions+=4;goto B61bc03;
case 0x61bc07:c.instructions+=3;goto B61bc07;
case 0x61bc08:c.instructions+=2;goto B61bc08;
case 0x61bc09:c.instructions+=1;goto B61bc09;
case 0x61bc0e:goto L61bc0e;
case 0x61bc20:goto L61bc20;
case 0x61bc21:c.instructions+=4;goto B61bc21;
case 0x61bc23:c.instructions+=3;goto B61bc23;
case 0x61bc27:c.instructions+=2;goto B61bc27;
case 0x61bc29:c.instructions+=1;goto B61bc29;
case 0x61bc2b:goto L61bc2b;
case 0x61bc30:goto L61bc30;
case 0x61bc37:c.instructions+=1;goto B61bc37;
case 0x61bc39:goto L61bc39;
case 0x61bc3e:goto L61bc3e;
case 0x61bc40:c.instructions+=6;goto B61bc40;
case 0x61bc42:c.instructions+=5;goto B61bc42;
case 0x61bc45:c.instructions+=4;goto B61bc45;
case 0x61bc46:c.instructions+=3;goto B61bc46;
case 0x61bc47:c.instructions+=2;goto B61bc47;
case 0x61bc49:c.instructions+=1;goto B61bc49;
case 0x61bc4c:goto L61bc4c;
case 0x61bc52:c.instructions+=2;goto B61bc52;
case 0x61bc54:c.instructions+=1;goto B61bc54;
case 0x61bc56:goto L61bc56;
case 0x61bc58:c.instructions+=2;goto B61bc58;
case 0x61bc59:c.instructions+=1;goto B61bc59;
case 0x61bc5c:goto L61bc5c;
case 0x61bc5f:c.instructions+=3;goto B61bc5f;
case 0x61bc60:c.instructions+=2;goto B61bc60;
case 0x61bc61:c.instructions+=1;goto B61bc61;
case 0x61bc66:goto L61bc66;
case 0x61bc6e:c.instructions+=3;goto B61bc6e;
case 0x61bc71:c.instructions+=2;goto B61bc71;
case 0x61bc72:c.instructions+=1;goto B61bc72;
case 0x61bc80:goto L61bc80;
case 0x61bc81:c.instructions+=11;goto B61bc81;
case 0x61bc82:c.instructions+=10;goto B61bc82;
case 0x61bc86:c.instructions+=9;goto B61bc86;
case 0x61bc87:c.instructions+=8;goto B61bc87;
case 0x61bc8b:c.instructions+=7;goto B61bc8b;
case 0x61bc8d:c.instructions+=6;goto B61bc8d;
case 0x61bc8f:c.instructions+=5;goto B61bc8f;
case 0x61bc91:c.instructions+=4;goto B61bc91;
case 0x61bc92:c.instructions+=3;goto B61bc92;
case 0x61bc93:c.instructions+=2;goto B61bc93;
case 0x61bc98:c.instructions+=1;goto B61bc98;
case 0x61bc9d:goto L61bc9d;
case 0x61bc9f:c.instructions+=1;goto B61bc9f;
case 0x61bca1:goto L61bca1;
case 0x61bca5:goto L61bca5;
case 0x61bca8:c.instructions+=4;goto B61bca8;
case 0x61bcab:c.instructions+=3;goto B61bcab;
case 0x61bcae:c.instructions+=2;goto B61bcae;
case 0x61bcb0:c.instructions+=1;goto B61bcb0;
case 0x61bcb2:goto L61bcb2;
case 0x61bcb4:c.instructions+=6;goto B61bcb4;
case 0x61bcb5:c.instructions+=5;goto B61bcb5;
case 0x61bcb7:c.instructions+=4;goto B61bcb7;
case 0x61bcb8:c.instructions+=3;goto B61bcb8;
case 0x61bcb9:c.instructions+=2;goto B61bcb9;
case 0x61bcbe:c.instructions+=1;goto B61bcbe;
case 0x61bcc3:goto L61bcc3;
case 0x61bcc5:c.instructions+=1;goto B61bcc5;
case 0x61bcc7:goto L61bcc7;
case 0x61bcc9:goto L61bcc9;
case 0x61bcca:c.instructions+=3;goto B61bcca;
case 0x61bccb:c.instructions+=2;goto B61bccb;
case 0x61bccc:c.instructions+=1;goto B61bccc;
case 0x61bcd0:goto L61bcd0;
case 0x61bcd6:c.instructions+=8;goto B61bcd6;
case 0x61bcd7:c.instructions+=7;goto B61bcd7;
case 0x61bcd8:c.instructions+=6;goto B61bcd8;
case 0x61bcd9:c.instructions+=5;goto B61bcd9;
case 0x61bcdb:c.instructions+=4;goto B61bcdb;
case 0x61bcdc:c.instructions+=3;goto B61bcdc;
case 0x61bce1:c.instructions+=2;goto B61bce1;
case 0x61bce6:c.instructions+=1;goto B61bce6;
case 0x61bcec:goto L61bcec;
case 0x61bcee:goto L61bcee;
case 0x61bcf0:c.instructions+=3;goto B61bcf0;
case 0x61bcf2:c.instructions+=2;goto B61bcf2;
case 0x61bcf6:c.instructions+=1;goto B61bcf6;
case 0x61bd00:goto L61bd00;
case 0x61bd07:c.instructions+=3;goto B61bd07;
case 0x61bd09:c.instructions+=2;goto B61bd09;
case 0x61bd0d:c.instructions+=1;goto B61bd0d;
case 0x61bd13:goto L61bd13;
case 0x61bd17:c.instructions+=2;goto B61bd17;
case 0x61bd1c:c.instructions+=1;goto B61bd1c;
case 0x61bd22:goto L61bd22;
case 0x61bd28:c.instructions+=7;goto B61bd28;
case 0x61bd2b:c.instructions+=6;goto B61bd2b;
case 0x61bd2e:c.instructions+=5;goto B61bd2e;
case 0x61bd32:c.instructions+=4;goto B61bd32;
case 0x61bd35:c.instructions+=3;goto B61bd35;
case 0x61bd37:c.instructions+=2;goto B61bd37;
case 0x61bd39:c.instructions+=1;goto B61bd39;
case 0x61bd3f:goto L61bd3f;
case 0x61bd42:c.instructions+=2;goto B61bd42;
case 0x61bd45:c.instructions+=1;goto B61bd45;
case 0x61bd50:goto L61bd50;
case 0x61bd53:c.instructions+=3;goto B61bd53;
case 0x61bd5b:c.instructions+=2;goto B61bd5b;
case 0x61bd5f:c.instructions+=1;goto B61bd5f;
case 0x61bd61:goto L61bd61;
case 0x61bd62:c.instructions+=3;goto B61bd62;
case 0x61bd65:c.instructions+=2;goto B61bd65;
case 0x61bd67:c.instructions+=1;goto B61bd67;
case 0x61bd69:goto L61bd69;
case 0x61bd6e:goto L61bd6e;
case 0x61bd71:c.instructions+=3;goto B61bd71;
case 0x61bd73:c.instructions+=2;goto B61bd73;
case 0x61bd75:c.instructions+=1;goto B61bd75;
case 0x61bd77:goto L61bd77;
case 0x61bd7a:c.instructions+=1;goto B61bd7a;
case 0x61bd80:goto L61bd80;
case 0x61bd83:c.instructions+=4;goto B61bd83;
case 0x61bd87:c.instructions+=3;goto B61bd87;
case 0x61bd8d:c.instructions+=2;goto B61bd8d;
case 0x61bd91:c.instructions+=1;goto B61bd91;
case 0x61bd93:goto L61bd93;
case 0x61bd94:c.instructions+=3;goto B61bd94;
case 0x61bd97:c.instructions+=2;goto B61bd97;
case 0x61bd99:c.instructions+=1;goto B61bd99;
case 0x61bd9b:goto L61bd9b;
case 0x61bd9d:goto L61bd9d;
case 0x61bd9f:c.instructions+=2;goto B61bd9f;
case 0x61bda1:c.instructions+=1;goto B61bda1;
case 0x61bda3:goto L61bda3;
case 0x61bda6:c.instructions+=2;goto B61bda6;
case 0x61bda8:c.instructions+=1;goto B61bda8;
case 0x61bdb0:goto L61bdb0;
case 0x61bdb7:c.instructions+=2;goto B61bdb7;
case 0x61bdb8:c.instructions+=1;goto B61bdb8;
case 0x61bdbd:goto L61bdbd;
case 0x61bdc0:c.instructions+=2;goto B61bdc0;
case 0x61bdc2:c.instructions+=1;goto B61bdc2;
case 0x61bdc4:goto L61bdc4;
case 0x61bdc5:c.instructions+=2;goto B61bdc5;
case 0x61bdcb:c.instructions+=1;goto B61bdcb;
case 0x61bdcd:goto L61bdcd;
case 0x61bdd0:c.instructions+=1;goto B61bdd0;
case 0x61bdd2:goto L61bdd2;
case 0x61bdd9:c.instructions+=1;goto B61bdd9;
case 0x61bde1:goto L61bde1;
case 0x61bde5:c.instructions+=3;goto B61bde5;
case 0x61bde6:c.instructions+=2;goto B61bde6;
case 0x61bdeb:c.instructions+=1;goto B61bdeb;
case 0x61bdf0:goto L61bdf0;
case 0x61bdf2:c.instructions+=2;goto B61bdf2;
case 0x61bdf4:c.instructions+=1;goto B61bdf4;
case 0x61bdf6:goto L61bdf6;
case 0x61bdfa:goto L61bdfa;
case 0x61bdfe:c.instructions+=2;goto B61bdfe;
case 0x61be04:c.instructions+=1;goto B61be04;
case 0x61be06:goto L61be06;
case 0x61be08:c.instructions+=1;goto B61be08;
case 0x61be0e:goto L61be0e;
case 0x61be11:c.instructions+=3;goto B61be11;
case 0x61be14:c.instructions+=2;goto B61be14;
case 0x61be1a:c.instructions+=1;goto B61be1a;
case 0x61be1f:goto L61be1f;
case 0x61be22:c.instructions+=1;goto B61be22;
case 0x61be24:goto L61be24;
case 0x61be29:goto L61be29;
case 0x61be2b:c.instructions+=1;goto B61be2b;
case 0x61be31:goto L61be31;
case 0x61be38:c.instructions+=1;goto B61be38;
case 0x61be3d:goto L61be3d;
case 0x61be40:c.instructions+=1;goto B61be40;
case 0x61be46:goto L61be46;
case 0x61be4c:c.instructions+=2;goto B61be4c;
case 0x61be4e:c.instructions+=1;goto B61be4e;
case 0x61be54:goto L61be54;
case 0x61be59:c.instructions+=1;goto B61be59;
case 0x61be5e:goto L61be5e;
case 0x61be62:c.instructions+=3;goto B61be62;
case 0x61be65:c.instructions+=2;goto B61be65;
case 0x61be6a:c.instructions+=1;goto B61be6a;
case 0x61be6c:goto L61be6c;
case 0x61be72:c.instructions+=7;goto B61be72;
case 0x61be75:c.instructions+=6;goto B61be75;
case 0x61be78:c.instructions+=5;goto B61be78;
case 0x61be7c:c.instructions+=4;goto B61be7c;
case 0x61be7f:c.instructions+=3;goto B61be7f;
case 0x61be81:c.instructions+=2;goto B61be81;
case 0x61be83:c.instructions+=1;goto B61be83;
case 0x61be85:goto L61be85;
case 0x61be88:c.instructions+=2;goto B61be88;
case 0x61be8b:c.instructions+=1;goto B61be8b;
case 0x61be90:goto L61be90;
case 0x61be92:c.instructions+=3;goto B61be92;
case 0x61be95:c.instructions+=2;goto B61be95;
case 0x61be99:c.instructions+=1;goto B61be99;
case 0x61be9b:goto L61be9b;
case 0x61be9d:c.instructions+=1;goto B61be9d;
case 0x61be9f:goto L61be9f;
case 0x61bea0:c.instructions+=3;goto B61bea0;
case 0x61bea3:c.instructions+=2;goto B61bea3;
case 0x61bea5:c.instructions+=1;goto B61bea5;
case 0x61bea7:goto L61bea7;
case 0x61bea9:goto L61bea9;
case 0x61beab:c.instructions+=3;goto B61beab;
case 0x61bead:c.instructions+=2;goto B61bead;
case 0x61beaf:c.instructions+=1;goto B61beaf;
case 0x61beb1:goto L61beb1;
case 0x61beb3:c.instructions+=4;goto B61beb3;
case 0x61beb4:c.instructions+=3;goto B61beb4;
case 0x61beb6:c.instructions+=2;goto B61beb6;
case 0x61beb7:c.instructions+=1;goto B61beb7;
case 0x61beb9:goto L61beb9;
case 0x61bebb:c.instructions+=1;goto B61bebb;
case 0x61bebd:goto L61bebd;
case 0x61bec0:c.instructions+=1;goto B61bec0;
case 0x61bec2:goto L61bec2;
case 0x61bec4:c.instructions+=3;goto B61bec4;
case 0x61bec6:c.instructions+=2;goto B61bec6;
case 0x61bec8:c.instructions+=1;goto B61bec8;
case 0x61bec9:goto L61bec9;
case 0x61bece:c.instructions+=1;goto B61bece;
case 0x61bed3:goto L61bed3;
case 0x61bed9:c.instructions+=1;goto B61bed9;
case 0x61bede:goto L61bede;
case 0x61bee1:c.instructions+=1;goto B61bee1;
case 0x61bee3:goto L61bee3;
case 0x61bee5:c.instructions+=1;goto B61bee5;
case 0x61beeb:goto L61beeb;
case 0x61bef2:c.instructions+=1;goto B61bef2;
case 0x61bef8:goto L61bef8;
case 0x61beff:c.instructions+=4;goto B61beff;
case 0x61bf06:c.instructions+=3;goto B61bf06;
case 0x61bf0d:c.instructions+=2;goto B61bf0d;
case 0x61bf14:c.instructions+=1;goto B61bf14;
case 0x61bf19:goto L61bf19;
case 0x61bf1c:c.instructions+=1;goto B61bf1c;
case 0x61bf22:goto L61bf22;
case 0x61bf24:c.instructions+=1;goto B61bf24;
case 0x61bf2a:goto L61bf2a;
case 0x61bf2d:c.instructions+=4;goto B61bf2d;
case 0x61bf2f:c.instructions+=3;goto B61bf2f;
case 0x61bf32:c.instructions+=2;goto B61bf32;
case 0x61bf34:c.instructions+=1;goto B61bf34;
case 0x61bf3a:goto L61bf3a;
case 0x61bf3c:c.instructions+=11;goto B61bf3c;
case 0x61bf42:c.instructions+=10;goto B61bf42;
case 0x61bf48:c.instructions+=9;goto B61bf48;
case 0x61bf4b:c.instructions+=8;goto B61bf4b;
case 0x61bf4d:c.instructions+=7;goto B61bf4d;
case 0x61bf4e:c.instructions+=6;goto B61bf4e;
case 0x61bf50:c.instructions+=5;goto B61bf50;
case 0x61bf51:c.instructions+=4;goto B61bf51;
case 0x61bf55:c.instructions+=3;goto B61bf55;
case 0x61bf5a:c.instructions+=2;goto B61bf5a;
case 0x61bf5b:c.instructions+=1;goto B61bf5b;
case 0x61bf60:goto L61bf60;
case 0x61bf64:c.instructions+=2;goto B61bf64;
case 0x61bf65:c.instructions+=1;goto B61bf65;
case 0x61bf6a:goto L61bf6a;
case 0x61bf6d:c.instructions+=6;goto B61bf6d;
case 0x61bf6f:c.instructions+=5;goto B61bf6f;
case 0x61bf71:c.instructions+=4;goto B61bf71;
case 0x61bf73:c.instructions+=3;goto B61bf73;
case 0x61bf74:c.instructions+=2;goto B61bf74;
case 0x61bf79:c.instructions+=1;goto B61bf79;
case 0x61bf7e:goto L61bf7e;
case 0x61bf80:c.instructions+=6;goto B61bf80;
case 0x61bf83:c.instructions+=5;goto B61bf83;
case 0x61bf84:c.instructions+=4;goto B61bf84;
case 0x61bf86:c.instructions+=3;goto B61bf86;
case 0x61bf87:c.instructions+=2;goto B61bf87;
case 0x61bf8c:c.instructions+=1;goto B61bf8c;
case 0x61bf91:goto L61bf91;
case 0x61bf93:c.instructions+=5;goto B61bf93;
case 0x61bf95:c.instructions+=4;goto B61bf95;
case 0x61bf96:c.instructions+=3;goto B61bf96;
case 0x61bf9b:c.instructions+=2;goto B61bf9b;
case 0x61bfa1:c.instructions+=1;goto B61bfa1;
case 0x61bfa6:goto L61bfa6;
case 0x61bfa9:c.instructions+=6;goto B61bfa9;
case 0x61bfaa:c.instructions+=5;goto B61bfaa;
case 0x61bfac:c.instructions+=4;goto B61bfac;
case 0x61bfae:c.instructions+=3;goto B61bfae;
case 0x61bfaf:c.instructions+=2;goto B61bfaf;
case 0x61bfb4:c.instructions+=1;goto B61bfb4;
case 0x61bfb9:goto L61bfb9;
case 0x61bfbb:c.instructions+=5;goto B61bfbb;
case 0x61bfbd:c.instructions+=4;goto B61bfbd;
case 0x61bfbe:c.instructions+=3;goto B61bfbe;
case 0x61bfc3:c.instructions+=2;goto B61bfc3;
case 0x61bfc9:c.instructions+=1;goto B61bfc9;
case 0x61bfce:goto L61bfce;
case 0x61bfd0:c.instructions+=6;goto B61bfd0;
case 0x61bfd3:c.instructions+=5;goto B61bfd3;
case 0x61bfd4:c.instructions+=4;goto B61bfd4;
case 0x61bfd6:c.instructions+=3;goto B61bfd6;
case 0x61bfd7:c.instructions+=2;goto B61bfd7;
case 0x61bfdc:c.instructions+=1;goto B61bfdc;
case 0x61bfe1:goto L61bfe1;
case 0x61bfe3:c.instructions+=5;goto B61bfe3;
case 0x61bfe5:c.instructions+=4;goto B61bfe5;
case 0x61bfe6:c.instructions+=3;goto B61bfe6;
case 0x61bfeb:c.instructions+=2;goto B61bfeb;
case 0x61bff1:c.instructions+=1;goto B61bff1;
case 0x61bff6:goto L61bff6;
case 0x61bff8:c.instructions+=5;goto B61bff8;
case 0x61bffb:c.instructions+=4;goto B61bffb;
case 0x61bffc:c.instructions+=3;goto B61bffc;
case 0x61bffe:c.instructions+=2;goto B61bffe;
case 0x61bfff:c.instructions+=1;goto B61bfff;
default:missing_instruction(c.pc);}
B61b000:L61b000:{c.instructions+=1;NFSU2_TR(0x61b000);
if(r1(R+518)){{goto L61b028;}}
}
B61b002:L61b002:{c.instructions+=2;NFSU2_TR(0x61b002);
__builtin_memmove((R+4),(R+24),4);
}
B61b004:{NFSU2_TR(0x61b004);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61b009ull));
TAIL_STATIC(0x5ecdb0u,5ec);
}
B61b009:L61b009:{c.instructions+=2;NFSU2_TR(0x61b009);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61b00b:{NFSU2_TR(0x61b00b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L61b020;}}
}
B61b00d:L61b00d:{c.instructions+=2;NFSU2_TR(0x61b00d);
__builtin_memmove((R+4),(R+12),4);
}
B61b00f:{NFSU2_TR(0x61b00f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61b014ull));
TAIL_STATIC(0x5925b0u,592);
}
B61b014:L61b014:{c.instructions+=3;NFSU2_TR(0x61b014);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61b01a:{NFSU2_TR(0x61b01a);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61b01e:{NFSU2_TR(0x61b01e);
{goto L61b028;}
}
B61b020:L61b020:{c.instructions+=1;NFSU2_TR(0x61b020);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B61b028:L61b028:{c.instructions+=4;NFSU2_TR(0x61b028);
__builtin_memmove((R+0),gp(0x89e7b0),4);
}
B61b02d:{NFSU2_TR(0x61b02d);
w1(R+4,u8(u32(r1(R+4))^u32(r1(R+4))));
}
B61b02f:{NFSU2_TR(0x61b02f);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B61b032:{NFSU2_TR(0x61b032);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L61b04e;}}
}
B61b034:L61b034:{c.instructions+=4;NFSU2_TR(0x61b034);
__builtin_memmove((R+8),gp(0x890118),4);
}
B61b03a:{NFSU2_TR(0x61b03a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61b03d:{NFSU2_TR(0x61b03d);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xbd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B61b043:{NFSU2_TR(0x61b043);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L61b04e;}}
}
B61b045:L61b045:{c.instructions+=3;NFSU2_TR(0x61b045);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61b048:{NFSU2_TR(0x61b048);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61b04a:{NFSU2_TR(0x61b04a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L61b04e;}}
}
B61b04c:L61b04c:{c.instructions+=1;NFSU2_TR(0x61b04c);
w1(R+4,u8(0x1ull));
}
B61b04e:L61b04e:{c.instructions+=5;NFSU2_TR(0x61b04e);
{u32 ea_=u32(r4(R+24)+u32(1068u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61b054:{NFSU2_TR(0x61b054);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B61b05a:{NFSU2_TR(0x61b05a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B61b05c:{NFSU2_TR(0x61b05c);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B61b05f:{NFSU2_TR(0x61b05f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L61b1cc;}}
}
B61b065:L61b065:{c.instructions+=2;NFSU2_TR(0x61b065);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B61b067:{NFSU2_TR(0x61b067);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L61b084;}}
}
B61b069:L61b069:{c.instructions+=3;NFSU2_TR(0x61b069);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x554ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61b06f:{NFSU2_TR(0x61b06f);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x208cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B61b076:{NFSU2_TR(0x61b076);
if(r1(R+518)){{goto L61b084;}}
}
B61b078:L61b078:{c.instructions+=3;NFSU2_TR(0x61b078);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61b07c:{NFSU2_TR(0x61b07c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61b07e:{NFSU2_TR(0x61b07e);
if(r1(R+518)){{goto L61b1cc;}}
}
B61b084:L61b084:{c.instructions+=2;NFSU2_TR(0x61b084);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B61b08c:{NFSU2_TR(0x61b08c);
__builtin_memmove((R+16),(R+16),4);
}
B61b090:L61b090:{c.instructions+=31;NFSU2_TR(0x61b090);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B61b094:{NFSU2_TR(0x61b094);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2180ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B61b09a:{NFSU2_TR(0x61b09a);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B61b09c:{NFSU2_TR(0x61b09c);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ull))));
__builtin_memmove((R+0),(U+0),4);
}
B61b09f:{NFSU2_TR(0x61b09f);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B61b0a0:{NFSU2_TR(0x61b0a0);
w4(R+24,u32(0x3ull));
}
B61b0a5:{NFSU2_TR(0x61b0a5);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x61b0a5);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x61b0a5);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B61b0a7:{NFSU2_TR(0x61b0a7);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2ull))));
__builtin_memmove((R+0),(U+0),4);
}
B61b0aa:{NFSU2_TR(0x61b0aa);
__builtin_memmove((R+4),(R+24),4);
}
B61b0ac:{NFSU2_TR(0x61b0ac);
__builtin_memmove((R+12),(R+8),4);
}
B61b0ae:{NFSU2_TR(0x61b0ae);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B61b0af:{NFSU2_TR(0x61b0af);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x61b0af);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x61b0af);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B61b0b1:{NFSU2_TR(0x61b0b1);
__builtin_memmove((R+4),gp(0x802920),4);
}
B61b0b7:{NFSU2_TR(0x61b0b7);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x215ull))));
__builtin_memmove((R+0),(U+0),4);
}
B61b0bd:{NFSU2_TR(0x61b0bd);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B61b0c0:{NFSU2_TR(0x61b0c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B61b0c3:{NFSU2_TR(0x61b0c3);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B61b0c5:{NFSU2_TR(0x61b0c5);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x215ull))));
}
B61b0cb:{NFSU2_TR(0x61b0cb);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B61b0ce:{NFSU2_TR(0x61b0ce);
{u32 ea_=u32(r4(R+28)+r4(R+8));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61b0d1:{NFSU2_TR(0x61b0d1);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+28))));
}
B61b0d3:{NFSU2_TR(0x61b0d3);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61b0d5:{NFSU2_TR(0x61b0d5);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B61b0d7:{NFSU2_TR(0x61b0d7);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61b0db:{NFSU2_TR(0x61b0db);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61b0de:{NFSU2_TR(0x61b0de);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B61b0e1:{NFSU2_TR(0x61b0e1);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61b0e5:{NFSU2_TR(0x61b0e5);
{u32 ea_=u32(r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61b0e8:{NFSU2_TR(0x61b0e8);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B61b0eb:{NFSU2_TR(0x61b0eb);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61b0ef:{NFSU2_TR(0x61b0ef);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L61b1b7;}}
}
B61b0f5:L61b0f5:{c.instructions+=10;NFSU2_TR(0x61b0f5);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B61b0f6:{NFSU2_TR(0x61b0f6);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61b0fa:{NFSU2_TR(0x61b0fa);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B61b0fe:{NFSU2_TR(0x61b0fe);
__builtin_memmove((R+0),gp(0x82da5c),4);
}
B61b103:{NFSU2_TR(0x61b103);
__builtin_memmove((R+8),gp(0x82da60),4);
}
B61b109:{NFSU2_TR(0x61b109);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B61b10c:{NFSU2_TR(0x61b10c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
}
B61b10e:{NFSU2_TR(0x61b10e);
{u32 ea_=u32(u32(8399136u));__asm__ volatile(".byte 0xda,0x30"::"a"(ea_):"memory");}
}
B61b114:{NFSU2_TR(0x61b114);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61b118:{NFSU2_TR(0x61b118);
if(r1(R+512)){{goto L61b133;}}
}
B61b11a:L61b11a:{c.instructions+=5;NFSU2_TR(0x61b11a);
__builtin_memmove((R+0),gp(0x82da70),4);
}
B61b11f:{NFSU2_TR(0x61b11f);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
}
B61b122:{NFSU2_TR(0x61b122);
s4(0x82da6c,u32(0x1ull));
}
B61b12c:{NFSU2_TR(0x61b12c);
__builtin_memmove(gp(0x82da70),(R+0),4);
}
B61b131:{NFSU2_TR(0x61b131);
{goto L61b1a7;}
}
B61b133:L61b133:{c.instructions+=3;NFSU2_TR(0x61b133);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61b135:{NFSU2_TR(0x61b135);
__builtin_memmove(gp(0x82da5c),(R+4),4);
}
B61b13b:{NFSU2_TR(0x61b13b);
if(r1(R+518)){{goto L61b1a7;}}
}
B61b13d:L61b13d:{c.instructions+=36;NFSU2_TR(0x61b13d);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61b141:{NFSU2_TR(0x61b141);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B61b145:{NFSU2_TR(0x61b145);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61b149:{NFSU2_TR(0x61b149);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61b14a:{NFSU2_TR(0x61b14a);
__builtin_memmove((R+8),(R+12),4);
}
B61b14c:{NFSU2_TR(0x61b14c);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B61b14f:{NFSU2_TR(0x61b14f);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B61b151:{NFSU2_TR(0x61b151);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61b155:{NFSU2_TR(0x61b155);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61b159:{NFSU2_TR(0x61b159);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B61b15c:{NFSU2_TR(0x61b15c);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61b160:{NFSU2_TR(0x61b160);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61b164:{NFSU2_TR(0x61b164);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B61b168:{NFSU2_TR(0x61b168);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61b16b:{NFSU2_TR(0x61b16b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B61b16e:{NFSU2_TR(0x61b16e);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61b171:{NFSU2_TR(0x61b171);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61b175:{NFSU2_TR(0x61b175);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B61b178:{NFSU2_TR(0x61b178);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B61b17a:{NFSU2_TR(0x61b17a);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B61b17c:{NFSU2_TR(0x61b17c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61b17d:{NFSU2_TR(0x61b17d);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61b17f:{NFSU2_TR(0x61b17f);
u8 U[12];
w4(U+0,u32(u32(u32(0x2090ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B61b186:{NFSU2_TR(0x61b186);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B61b189:{NFSU2_TR(0x61b189);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61b18b:{NFSU2_TR(0x61b18b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61b18c:{NFSU2_TR(0x61b18c);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B61b18e:{NFSU2_TR(0x61b18e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61b18f:{NFSU2_TR(0x61b18f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61b190:{NFSU2_TR(0x61b190);
__builtin_memmove((R+4),(R+28),4);
}
B61b192:{NFSU2_TR(0x61b192);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61b195:{NFSU2_TR(0x61b195);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B61b197:{NFSU2_TR(0x61b197);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61b19b:{NFSU2_TR(0x61b19b);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B61b19f:{NFSU2_TR(0x61b19f);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61b1a2:{NFSU2_TR(0x61b1a2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61b1a7ull));
TAIL_STATIC(0x615630u,615);
}
B61b1a7:L61b1a7:{c.instructions+=3;NFSU2_TR(0x61b1a7);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61b1ab:{NFSU2_TR(0x61b1ab);
u8 U[8];
__builtin_memmove((U+0),gp(0x802920),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B61b1b1:{NFSU2_TR(0x61b1b1);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x61b0f5u);}goto L61b0f5;}}
}
B61b1b7:L61b1b7:{c.instructions+=5;NFSU2_TR(0x61b1b7);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61b1bb:{NFSU2_TR(0x61b1bb);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B61b1bc:{NFSU2_TR(0x61b1bc);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61b1be:{NFSU2_TR(0x61b1be);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61b1c2:{NFSU2_TR(0x61b1c2);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x61b090u);}goto L61b090;}}
}
B61b1c8:L61b1c8:{c.instructions+=1;NFSU2_TR(0x61b1c8);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B61b1cc:L61b1cc:{c.instructions+=5;NFSU2_TR(0x61b1cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B61b1cf:{NFSU2_TR(0x61b1cf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B61b1d1:{NFSU2_TR(0x61b1d1);
u8 U[14];
__builtin_memmove((U+6),gp(0x890080),4);
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
B61b1d7:{NFSU2_TR(0x61b1d7);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61b1db:{NFSU2_TR(0x61b1db);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x61af8cu,61a);}
}
B61b1e1:L61b1e1:{c.instructions+=6;NFSU2_TR(0x61b1e1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B61b1e2:{NFSU2_TR(0x61b1e2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B61b1e3:{NFSU2_TR(0x61b1e3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B61b1e4:{NFSU2_TR(0x61b1e4);
__builtin_memmove((R+16),(R+20),4);
}
B61b1e6:{NFSU2_TR(0x61b1e6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B61b1e7:{NFSU2_TR(0x61b1e7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B61b1f0:L61b1f0:{c.instructions+=7;NFSU2_TR(0x61b1f0);
__builtin_memmove((R+0),gp(0x890080),4);
}
B61b1f5:{NFSU2_TR(0x61b1f5);
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
B61b1f7:{NFSU2_TR(0x61b1f7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61b1f8:{NFSU2_TR(0x61b1f8);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B61b1fc:{NFSU2_TR(0x61b1fc);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61b1fd:{NFSU2_TR(0x61b1fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B61b200:{NFSU2_TR(0x61b200);
if(r1(R+518)){{goto L61b27f;}}
}
B61b202:L61b202:{c.instructions+=4;NFSU2_TR(0x61b202);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61b203:{NFSU2_TR(0x61b203);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+24),(U+0),4);
}
B61b205:{NFSU2_TR(0x61b205);
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
B61b207:{NFSU2_TR(0x61b207);
if(r1(R+518)){{goto L61b27e;}}
}
B61b209:L61b209:{c.instructions+=2;NFSU2_TR(0x61b209);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61b20a:{NFSU2_TR(0x61b20a);
__builtin_memmove((R+12),(R+12),4);
}
B61b210:L61b210:{c.instructions+=2;NFSU2_TR(0x61b210);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x280ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B61b216:{NFSU2_TR(0x61b216);
if(r1(R+518)){{goto L61b273;}}
}
B61b218:L61b218:{c.instructions+=3;NFSU2_TR(0x61b218);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x550ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B61b21e:{NFSU2_TR(0x61b21e);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B61b220:{NFSU2_TR(0x61b220);
if(r1(R+518)){{goto L61b273;}}
}
B61b222:L61b222:{c.instructions+=3;NFSU2_TR(0x61b222);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61b223:{NFSU2_TR(0x61b223);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61b224:{NFSU2_TR(0x61b224);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61b229ull));
TAIL_STATIC(0x60d4f0u,60d);
}
B61b229:L61b229:{c.instructions+=3;NFSU2_TR(0x61b229);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B61b22c:{NFSU2_TR(0x61b22c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61b22e:{NFSU2_TR(0x61b22e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L61b273;}}
}
B61b230:L61b230:{c.instructions+=5;NFSU2_TR(0x61b230);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B61b233:{NFSU2_TR(0x61b233);
w4(R+0,u32(0x1ull));
}
B61b238:{NFSU2_TR(0x61b238);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r1(U+0))));
}
B61b23a:{NFSU2_TR(0x61b23a);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5b4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+8,u32(u32(r4(U+4))&u32(r4(R+0))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B61b240:{NFSU2_TR(0x61b240);
if(r1(R+518)){{goto L61b273;}}
}
B61b242:L61b242:{c.instructions+=5;NFSU2_TR(0x61b242);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5b0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B61b248:{NFSU2_TR(0x61b248);
w4(R+8,u32(u32(r4(R+8))&u32(r4(R+0))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B61b24a:{NFSU2_TR(0x61b24a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x554ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B61b250:{NFSU2_TR(0x61b250);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x560ull))));
__builtin_memmove((R+28),(U+0),4);
}
B61b256:{NFSU2_TR(0x61b256);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L61b25e;}}
}
B61b258:L61b258:{c.instructions+=1;NFSU2_TR(0x61b258);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd0ull))));
__builtin_memmove((R+28),(U+0),4);
}
B61b25e:L61b25e:{c.instructions+=3;NFSU2_TR(0x61b25e);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61b260:{NFSU2_TR(0x61b260);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5a0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B61b266:{NFSU2_TR(0x61b266);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L61b26b;}}
}
B61b268:L61b268:{c.instructions+=1;NFSU2_TR(0x61b268);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((R+0),(U+0),4);
}
B61b26b:L61b26b:{c.instructions+=4;NFSU2_TR(0x61b26b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61b26c:{NFSU2_TR(0x61b26c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61b26d:{NFSU2_TR(0x61b26d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61b26e:{NFSU2_TR(0x61b26e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61b273ull));
TAIL_STATIC(0x615a10u,615);
}
B61b273:L61b273:{c.instructions+=3;NFSU2_TR(0x61b273);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B61b275:{NFSU2_TR(0x61b275);
u8 U[14];
__builtin_memmove((U+6),gp(0x890080),4);
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
B61b27b:{NFSU2_TR(0x61b27b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x61b210u);}goto L61b210;}}
}
B61b27d:L61b27d:{c.instructions+=1;NFSU2_TR(0x61b27d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B61b27e:L61b27e:{c.instructions+=1;NFSU2_TR(0x61b27e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B61b27f:L61b27f:{c.instructions+=3;NFSU2_TR(0x61b27f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B61b280:{NFSU2_TR(0x61b280);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B61b281:{NFSU2_TR(0x61b281);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B61b290:L61b290:{c.instructions+=7;NFSU2_TR(0x61b290);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61b294:{NFSU2_TR(0x61b294);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61b295:{NFSU2_TR(0x61b295);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61b296:{NFSU2_TR(0x61b296);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x554ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B61b29c:{NFSU2_TR(0x61b29c);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1f88ull))));
__builtin_memmove((R+4),(U+0),4);
}
B61b2a2:{NFSU2_TR(0x61b2a2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61b2a3:{NFSU2_TR(0x61b2a3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61b2a8ull));
TAIL_STATIC(0x48e3b0u,48e);
}
B61b2a8:L61b2a8:{c.instructions+=5;NFSU2_TR(0x61b2a8);
__builtin_memmove((R+0),gp(0x802948),4);
}
B61b2ad:{NFSU2_TR(0x61b2ad);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B61b2b0:{NFSU2_TR(0x61b2b0);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B61b2b2:{NFSU2_TR(0x61b2b2);
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
B61b2b4:{NFSU2_TR(0x61b2b4);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L61b2d8;}}
}
B61b2b6:L61b2b6:{c.instructions+=2;NFSU2_TR(0x61b2b6);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1fbcull))));
__builtin_memmove((R+0),(U+0),4);
}
B61b2bc:{NFSU2_TR(0x61b2bc);
__builtin_memmove((R+16),(R+16),4);
}
B61b2c0:L61b2c0:{c.instructions+=9;NFSU2_TR(0x61b2c0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B61b2c2:{NFSU2_TR(0x61b2c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B61b2c5:{NFSU2_TR(0x61b2c5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B61b2c7:{NFSU2_TR(0x61b2c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61b2ca:{NFSU2_TR(0x61b2ca);
__builtin_memmove((R+4),gp(0x802948),4);
}
B61b2d0:{NFSU2_TR(0x61b2d0);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B61b2d1:{NFSU2_TR(0x61b2d1);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x68ull))));
}
B61b2d4:{NFSU2_TR(0x61b2d4);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B61b2d6:{NFSU2_TR(0x61b2d6);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x61b2c0u);}goto L61b2c0;}}
}
B61b2d8:L61b2d8:{c.instructions+=3;NFSU2_TR(0x61b2d8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B61b2d9:{NFSU2_TR(0x61b2d9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B61b2da:{NFSU2_TR(0x61b2da);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B61b2e0:L61b2e0:{c.instructions+=14;NFSU2_TR(0x61b2e0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B61b2e3:{NFSU2_TR(0x61b2e3);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61b2e7:{NFSU2_TR(0x61b2e7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61b2e8:{NFSU2_TR(0x61b2e8);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61b2e9:{NFSU2_TR(0x61b2e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x554ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B61b2ef:{NFSU2_TR(0x61b2ef);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61b2f0:{NFSU2_TR(0x61b2f0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61b2f1:{NFSU2_TR(0x61b2f1);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1f88ull))));
__builtin_memmove((R+28),(U+0),4);
}
B61b2f7:{NFSU2_TR(0x61b2f7);
u8 U[4];
w4(U+0,u32(0x1full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61b2f9:{NFSU2_TR(0x61b2f9);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B61b2fc:{NFSU2_TR(0x61b2fc);
u8 U[4];
w4(U+0,u32(0x7a852cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61b301:{NFSU2_TR(0x61b301);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61b302:{NFSU2_TR(0x61b302);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61b306:{NFSU2_TR(0x61b306);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61b30bull));
TAIL_STATIC(0x43dc00u,43d);
}
B61b30b:L61b30b:{c.instructions+=8;NFSU2_TR(0x61b30b);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B61b30d:{NFSU2_TR(0x61b30d);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x27ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B61b310:{NFSU2_TR(0x61b310);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1fb0ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B61b31a:{NFSU2_TR(0x61b31a);
__builtin_memmove((R+0),gp(0x802948),4);
}
B61b31f:{NFSU2_TR(0x61b31f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B61b322:{NFSU2_TR(0x61b322);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B61b324:{NFSU2_TR(0x61b324);
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
B61b326:{NFSU2_TR(0x61b326);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L61b448;}}
}
B61b32c:L61b32c:{c.instructions+=3;NFSU2_TR(0x61b32c);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B61b330:{NFSU2_TR(0x61b330);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1fb4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B61b336:{NFSU2_TR(0x61b336);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61b33bull));
TAIL_STATIC(0x4018b0u,401);
}
B61b33b:L61b33b:{c.instructions+=3;NFSU2_TR(0x61b33b);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B61b33f:{NFSU2_TR(0x61b33f);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61b343:{NFSU2_TR(0x61b343);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61b348ull));
TAIL_STATIC(0x401890u,401);
}
B61b348:L61b348:{c.instructions+=16;NFSU2_TR(0x61b348);
__builtin_memmove((R+8),(R+24),4);
}
B61b34a:{NFSU2_TR(0x61b34a);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x68ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B61b34d:{NFSU2_TR(0x61b34d);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B61b34f:{NFSU2_TR(0x61b34f);
u8 U[12];
w4(U+0,u32(u32(u32(0x1fbcull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B61b356:{NFSU2_TR(0x61b356);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B61b359:{NFSU2_TR(0x61b359);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B61b35b:{NFSU2_TR(0x61b35b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61b35e:{NFSU2_TR(0x61b35e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61b361:{NFSU2_TR(0x61b361);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+4)),r4(U+0));
}
B61b363:{NFSU2_TR(0x61b363);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61b366:{NFSU2_TR(0x61b366);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
w1(U+4,u8(0x3ull));
s1(u32(r4(U+0)),r1(U+4));
}
B61b36a:{NFSU2_TR(0x61b36a);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xdull))));
w1(U+4,u8(0x2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B61b36e:{NFSU2_TR(0x61b36e);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xeull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B61b371:{NFSU2_TR(0x61b371);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B61b375:{NFSU2_TR(0x61b375);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61b378:{NFSU2_TR(0x61b378);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L61b382;}}
}
B61b37a:L61b37a:{c.instructions+=2;NFSU2_TR(0x61b37a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x380ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B61b380:{NFSU2_TR(0x61b380);
{goto L61b389;}
}
B61b382:L61b382:{c.instructions+=1;NFSU2_TR(0x61b382);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x80293cull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B61b389:L61b389:{c.instructions+=5;NFSU2_TR(0x61b389);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B61b38b:{NFSU2_TR(0x61b38b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61b38e:{NFSU2_TR(0x61b38e);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x802924ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B61b395:{NFSU2_TR(0x61b395);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61b398:{NFSU2_TR(0x61b398);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L61b3a2;}}
}
B61b39a:L61b39a:{c.instructions+=2;NFSU2_TR(0x61b39a);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61b3a0:{NFSU2_TR(0x61b3a0);
{goto L61b3a8;}
}
B61b3a2:L61b3a2:{c.instructions+=1;NFSU2_TR(0x61b3a2);
{u32 ea_=u32(u32(7881376u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61b3a8:L61b3a8:{c.instructions+=5;NFSU2_TR(0x61b3a8);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B61b3aa:{NFSU2_TR(0x61b3aa);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B61b3ae:{NFSU2_TR(0x61b3ae);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61b3b0:{NFSU2_TR(0x61b3b0);
{u32 ea_=u32(r4(R+4)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61b3b3:{NFSU2_TR(0x61b3b3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L61b3bd;}}
}
B61b3b5:L61b3b5:{c.instructions+=2;NFSU2_TR(0x61b3b5);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61b3bb:{NFSU2_TR(0x61b3bb);
{goto L61b3c3;}
}
B61b3bd:L61b3bd:{c.instructions+=1;NFSU2_TR(0x61b3bd);
{u32 ea_=u32(u32(7881376u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61b3c3:L61b3c3:{c.instructions+=4;NFSU2_TR(0x61b3c3);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B61b3c5:{NFSU2_TR(0x61b3c5);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61b3c8:{NFSU2_TR(0x61b3c8);
{u32 ea_=u32(r4(R+4)+u32(44u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61b3cb:{NFSU2_TR(0x61b3cb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L61b3d5;}}
}
B61b3cd:L61b3cd:{c.instructions+=2;NFSU2_TR(0x61b3cd);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61b3d3:{NFSU2_TR(0x61b3d3);
{goto L61b3db;}
}
B61b3d5:L61b3d5:{c.instructions+=1;NFSU2_TR(0x61b3d5);
{u32 ea_=u32(u32(7881376u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61b3db:L61b3db:{c.instructions+=25;NFSU2_TR(0x61b3db);
{u32 ea_=u32(r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61b3de:{NFSU2_TR(0x61b3de);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B61b3df:{NFSU2_TR(0x61b3df);
{u32 ea_=u32(r4(R+4)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61b3e2:{NFSU2_TR(0x61b3e2);
{u32 ea_=u32(r4(R+4)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61b3e5:{NFSU2_TR(0x61b3e5);
{u32 ea_=u32((r4(R+24)*4u)+u32(8399152u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61b3ec:{NFSU2_TR(0x61b3ec);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B61b3ee:{NFSU2_TR(0x61b3ee);
{u32 ea_=u32(r4(R+4)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61b3f1:{NFSU2_TR(0x61b3f1);
{u32 ea_=u32((r4(R+24)*4u)+u32(8399152u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61b3f8:{NFSU2_TR(0x61b3f8);
{u32 ea_=u32(r4(R+4)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61b3fb:{NFSU2_TR(0x61b3fb);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B61b3fe:{NFSU2_TR(0x61b3fe);
{u32 ea_=u32(r4(R+4)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61b401:{NFSU2_TR(0x61b401);
{u32 ea_=u32(r4(R+4)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61b404:{NFSU2_TR(0x61b404);
{u32 ea_=u32((r4(R+24)*4u)+u32(8399152u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61b40b:{NFSU2_TR(0x61b40b);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B61b40e:{NFSU2_TR(0x61b40e);
{u32 ea_=u32(r4(R+4)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61b411:{NFSU2_TR(0x61b411);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8a1c68ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B61b418:{NFSU2_TR(0x61b418);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61b41b:{NFSU2_TR(0x61b41b);
u8 U[10];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x2ull))));
w4(U+4,u32(u32(u32(0x802942ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+8,u32(r2(U+8)));
}
B61b423:{NFSU2_TR(0x61b423);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61b427:{NFSU2_TR(0x61b427);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B61b42b:{NFSU2_TR(0x61b42b);
{u32 ea_=u32(r4(R+4)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61b42e:{NFSU2_TR(0x61b42e);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x802928ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B61b435:{NFSU2_TR(0x61b435);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61b438:{NFSU2_TR(0x61b438);
u8 U[4];
__builtin_memmove((U+0),gp(0x802948),4);
w1(R+512,u8((r4(R+24))<(r4(U+0))));
}
B61b43e:{NFSU2_TR(0x61b43e);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x61b348u);}goto L61b348;}}
}
B61b444:L61b444:{c.instructions+=1;NFSU2_TR(0x61b444);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B61b448:L61b448:{c.instructions+=2;NFSU2_TR(0x61b448);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61b449:{NFSU2_TR(0x61b449);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61b44eull));
TAIL_STATIC(0x48e380u,48e);
}
B61b44e:L61b44e:{c.instructions+=7;NFSU2_TR(0x61b44e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B61b451:{NFSU2_TR(0x61b451);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B61b452:{NFSU2_TR(0x61b452);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B61b453:{NFSU2_TR(0x61b453);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B61b454:{NFSU2_TR(0x61b454);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B61b455:{NFSU2_TR(0x61b455);
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
B61b458:{NFSU2_TR(0x61b458);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B61b460:L61b460:{c.instructions+=4;NFSU2_TR(0x61b460);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61b464:{NFSU2_TR(0x61b464);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B61b466:{NFSU2_TR(0x61b466);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0x34600ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x34600ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x34600ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B61b46c:{NFSU2_TR(0x61b46c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L61b47e;}}
}
B61b46e:L61b46e:{c.instructions+=3;NFSU2_TR(0x61b46e);
s4(0x8a1ccc,u32(0x0ull));
}
B61b478:{NFSU2_TR(0x61b478);
w4(R+0,u32(0x1ull));
}
B61b47d:{NFSU2_TR(0x61b47d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B61b47e:L61b47e:{c.instructions+=2;NFSU2_TR(0x61b47e);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x34601ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B61b484:{NFSU2_TR(0x61b484);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L61b498;}}
}
B61b486:L61b486:{c.instructions+=5;NFSU2_TR(0x61b486);
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
B61b488:{NFSU2_TR(0x61b488);
__builtin_memmove(gp(0x8a1cd4),(R+0),4);
}
B61b48d:{NFSU2_TR(0x61b48d);
__builtin_memmove(gp(0x8a1cd8),(R+0),4);
}
B61b492:{NFSU2_TR(0x61b492);
w4(R+0,u32(0x1ull));
}
B61b497:{NFSU2_TR(0x61b497);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B61b498:L61b498:{c.instructions+=2;NFSU2_TR(0x61b498);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x80034602ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B61b49e:{NFSU2_TR(0x61b49e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L61b4d8;}}
}
B61b4a0:L61b4a0:{c.instructions+=15;NFSU2_TR(0x61b4a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B61b4a3:{NFSU2_TR(0x61b4a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B61b4a6:{NFSU2_TR(0x61b4a6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B61b4a8:{NFSU2_TR(0x61b4a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61b4ab:{NFSU2_TR(0x61b4ab);
__builtin_memmove((R+4),gp(0x8a2b70),4);
}
B61b4b1:{NFSU2_TR(0x61b4b1);
__builtin_memmove((R+8),gp(0x8a2b74),4);
}
B61b4b7:{NFSU2_TR(0x61b4b7);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B61b4b8:{NFSU2_TR(0x61b4b8);
__builtin_memmove(gp(0x8a2b70),(R+4),4);
}
B61b4be:{NFSU2_TR(0x61b4be);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B61b4c1:{NFSU2_TR(0x61b4c1);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+4))));
}
B61b4c3:{NFSU2_TR(0x61b4c3);
__builtin_memmove(gp(0x8a2b74),(R+8),4);
}
B61b4c9:{NFSU2_TR(0x61b4c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B61b4cc:{NFSU2_TR(0x61b4cc);
u8 U[6];
w1(R+512,u8((m4(0x8a2b78))<(r4(R+8))));
w1(R+523,sborrow<u32>(m4(0x8a2b78),r4(R+8)));
s4(0x8a2b78,u32(u32(m4(0x8a2b78))-u32(r4(R+8))));
w1(R+519,u8(s32(m4(0x8a2b78))<s32(u32(0x0ull))));
w1(R+518,u8((m4(0x8a2b78))==(u32(0x0ull))));
w4(U+0,u32(u32(m4(0x8a2b78))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B61b4d2:{NFSU2_TR(0x61b4d2);
w4(R+0,u32(0x1ull));
}
B61b4d7:{NFSU2_TR(0x61b4d7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B61b4d8:L61b4d8:{c.instructions+=2;NFSU2_TR(0x61b4d8);
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
B61b4da:{NFSU2_TR(0x61b4da);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B61b4e0:L61b4e0:{c.instructions+=4;NFSU2_TR(0x61b4e0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61b4e4:{NFSU2_TR(0x61b4e4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61b4e6:{NFSU2_TR(0x61b4e6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61b4e7:{NFSU2_TR(0x61b4e7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61b4ecull));
TAIL_STATIC(0x60fef0u,60f);
}
B61b4ec:L61b4ec:{c.instructions+=4;NFSU2_TR(0x61b4ec);
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w4(R+0,u32(0-u32(r4(R+0))));
}
B61b4ee:{NFSU2_TR(0x61b4ee);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B61b4f0:{NFSU2_TR(0x61b4f0);
u8 U[6];
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w1(R+523,sborrow<u32>(u32(0x0ull),r4(R+0)));
w4(R+0,u32(0-u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B61b4f2:{NFSU2_TR(0x61b4f2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B61b500:L61b500:{c.instructions+=4;NFSU2_TR(0x61b500);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61b504:{NFSU2_TR(0x61b504);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61b506:{NFSU2_TR(0x61b506);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61b507:{NFSU2_TR(0x61b507);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61b50cull));
TAIL_STATIC(0x60fef0u,60f);
}
B61b50c:L61b50c:{c.instructions+=2;NFSU2_TR(0x61b50c);
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
B61b50e:{NFSU2_TR(0x61b50e);
if(r1(R+518)){{goto L61b516;}}
}
B61b510:L61b510:{c.instructions+=2;NFSU2_TR(0x61b510);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61b513:{NFSU2_TR(0x61b513);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B61b516:L61b516:{c.instructions+=2;NFSU2_TR(0x61b516);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61b51a:{NFSU2_TR(0x61b51a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B61b520:L61b520:{c.instructions+=8;NFSU2_TR(0x61b520);
u8 U[6];
w1(R+512,u8((r4(R+16))<(u32(0x8ull))));
w1(R+523,sborrow<u32>(r4(R+16),u32(0x8ull)));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B61b523:{NFSU2_TR(0x61b523);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61b524:{NFSU2_TR(0x61b524);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61b525:{NFSU2_TR(0x61b525);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61b526:{NFSU2_TR(0x61b526);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+24),(U+0),4);
}
B61b528:{NFSU2_TR(0x61b528);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61b529:{NFSU2_TR(0x61b529);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B61b531:{NFSU2_TR(0x61b531);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61b536ull));
TAIL_STATIC(0x502fd0u,502);
}
B61b536:L61b536:{c.instructions+=3;NFSU2_TR(0x61b536);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B61b538:{NFSU2_TR(0x61b538);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61b53c:{NFSU2_TR(0x61b53c);
if(r1(R+518)){{goto L61b5a8;}}
}
B61b53e:L61b53e:{c.instructions+=2;NFSU2_TR(0x61b53e);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B61b542:{NFSU2_TR(0x61b542);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B61b546:L61b546:{c.instructions+=6;NFSU2_TR(0x61b546);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B61b549:{NFSU2_TR(0x61b549);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B61b54c:{NFSU2_TR(0x61b54c);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0xeull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B61b54f:{NFSU2_TR(0x61b54f);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B61b551:{NFSU2_TR(0x61b551);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
}
B61b553:{NFSU2_TR(0x61b553);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L61b5a2;}}
}
B61b555:L61b555:{c.instructions+=5;NFSU2_TR(0x61b555);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B61b559:{NFSU2_TR(0x61b559);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B61b55a:{NFSU2_TR(0x61b55a);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61b55c:{NFSU2_TR(0x61b55c);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61b560:{NFSU2_TR(0x61b560);
if(r1(R+518)){{goto L61b572;}}
}
B61b562:L61b562:{c.instructions+=4;NFSU2_TR(0x61b562);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x7ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B61b566:{NFSU2_TR(0x61b566);
__builtin_memmove((R+20),gp(0x8a1cb8),4);
}
B61b56c:{NFSU2_TR(0x61b56c);
u8 U[20];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(r4(R+28))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B61b570:{NFSU2_TR(0x61b570);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L61b597;}}
}
B61b572:L61b572:{c.instructions+=3;NFSU2_TR(0x61b572);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61b576:{NFSU2_TR(0x61b576);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B61b579:{NFSU2_TR(0x61b579);
if(r1(R+518)){{goto L61b583;}}
}
B61b57b:L61b57b:{c.instructions+=3;NFSU2_TR(0x61b57b);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+20,u32(s32(s8(r1(U+4)))));
}
B61b57f:{NFSU2_TR(0x61b57f);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B61b581:{NFSU2_TR(0x61b581);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L61b597;}}
}
B61b583:L61b583:{c.instructions+=2;NFSU2_TR(0x61b583);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61b585:{NFSU2_TR(0x61b585);
if(r1(R+518)){{goto L61b5b5;}}
}
B61b587:L61b587:{c.instructions+=6;NFSU2_TR(0x61b587);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B61b58b:{NFSU2_TR(0x61b58b);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
w4(R+20,u32(r2(U+0)));
}
B61b58e:{NFSU2_TR(0x61b58e);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B61b591:{NFSU2_TR(0x61b591);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+20))));
}
B61b593:{NFSU2_TR(0x61b593);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B61b595:{NFSU2_TR(0x61b595);
if(r1(R+518)){{goto L61b5b5;}}
}
B61b597:L61b597:{c.instructions+=3;NFSU2_TR(0x61b597);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xeull))));
}
B61b59a:{NFSU2_TR(0x61b59a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
}
B61b59c:{NFSU2_TR(0x61b59c);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x61b555u);}goto L61b555;}}
}
B61b59e:L61b59e:{c.instructions+=1;NFSU2_TR(0x61b59e);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61b5a2:L61b5a2:{c.instructions+=3;NFSU2_TR(0x61b5a2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B61b5a4:{NFSU2_TR(0x61b5a4);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B61b5a6:{NFSU2_TR(0x61b5a6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x61b546u);}goto L61b546;}}
}
B61b5a8:L61b5a8:{c.instructions+=7;NFSU2_TR(0x61b5a8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B61b5a9:{NFSU2_TR(0x61b5a9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B61b5aa:{NFSU2_TR(0x61b5aa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B61b5ab:{NFSU2_TR(0x61b5ab);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B61b5ae:{NFSU2_TR(0x61b5ae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B61b5af:{NFSU2_TR(0x61b5af);
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
B61b5b2:{NFSU2_TR(0x61b5b2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B61b5b5:L61b5b5:{c.instructions+=7;NFSU2_TR(0x61b5b5);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61b5b9:{NFSU2_TR(0x61b5b9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B61b5ba:{NFSU2_TR(0x61b5ba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B61b5bb:{NFSU2_TR(0x61b5bb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B61b5bc:{NFSU2_TR(0x61b5bc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B61b5bd:{NFSU2_TR(0x61b5bd);
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
B61b5c0:{NFSU2_TR(0x61b5c0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B61b5d0:L61b5d0:{c.instructions+=7;NFSU2_TR(0x61b5d0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61b5d1:{NFSU2_TR(0x61b5d1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61b5d2:{NFSU2_TR(0x61b5d2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61b5d3:{NFSU2_TR(0x61b5d3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+24),(U+0),4);
}
B61b5d5:{NFSU2_TR(0x61b5d5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61b5d6:{NFSU2_TR(0x61b5d6);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B61b5d8:{NFSU2_TR(0x61b5d8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61b5ddull));
TAIL_STATIC(0x502fd0u,502);
}
B61b5dd:L61b5dd:{c.instructions+=3;NFSU2_TR(0x61b5dd);
__builtin_memmove((R+20),(R+0),4);
}
B61b5df:{NFSU2_TR(0x61b5df);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B61b5e1:{NFSU2_TR(0x61b5e1);
if(r1(R+518)){{goto L61b613;}}
}
B61b5e3:L61b5e3:{c.instructions+=1;NFSU2_TR(0x61b5e3);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B61b5e7:L61b5e7:{c.instructions+=11;NFSU2_TR(0x61b5e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B61b5ea:{NFSU2_TR(0x61b5ea);
__builtin_memmove((R+4),(R+12),4);
}
B61b5ec:{NFSU2_TR(0x61b5ec);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+8))));
}
B61b5ee:{NFSU2_TR(0x61b5ee);
w4(R+0,u32(0x92492493ull));
}
B61b5f3:{NFSU2_TR(0x61b5f3);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(u64(r8(U+16))>>32));
w4(R+0,u32(r8(U+16)));
}
B61b5f5:{NFSU2_TR(0x61b5f5);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B61b5f7:{NFSU2_TR(0x61b5f7);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B61b5fa:{NFSU2_TR(0x61b5fa);
__builtin_memmove((R+0),(R+8),4);
}
B61b5fc:{NFSU2_TR(0x61b5fc);
u8 U[4];
w4(U+0,u32(u32(u32(0x1full))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B61b5ff:{NFSU2_TR(0x61b5ff);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
}
B61b601:{NFSU2_TR(0x61b601);
if(r1(R+519)){{goto L61b608;}}
}
B61b603:L61b603:{c.instructions+=2;NFSU2_TR(0x61b603);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
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
B61b606:{NFSU2_TR(0x61b606);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L61b61d;}}
}
B61b608:L61b608:{c.instructions+=5;NFSU2_TR(0x61b608);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B61b60b:{NFSU2_TR(0x61b60b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B61b60d:{NFSU2_TR(0x61b60d);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+4))));
}
B61b60f:{NFSU2_TR(0x61b60f);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B61b611:{NFSU2_TR(0x61b611);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x61b5e7u);}goto L61b5e7;}}
}
B61b613:L61b613:{c.instructions+=6;NFSU2_TR(0x61b613);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B61b614:{NFSU2_TR(0x61b614);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B61b615:{NFSU2_TR(0x61b615);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B61b616:{NFSU2_TR(0x61b616);
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
B61b619:{NFSU2_TR(0x61b619);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B61b61a:{NFSU2_TR(0x61b61a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B61b61d:L61b61d:{c.instructions+=6;NFSU2_TR(0x61b61d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B61b620:{NFSU2_TR(0x61b620);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B61b621:{NFSU2_TR(0x61b621);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B61b622:{NFSU2_TR(0x61b622);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B61b623:{NFSU2_TR(0x61b623);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B61b624:{NFSU2_TR(0x61b624);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B61b630:L61b630:{c.instructions+=5;NFSU2_TR(0x61b630);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61b631:{NFSU2_TR(0x61b631);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61b632:{NFSU2_TR(0x61b632);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B61b636:{NFSU2_TR(0x61b636);
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
B61b638:{NFSU2_TR(0x61b638);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L61b654;}}
}
B61b63a:L61b63a:{c.instructions+=2;NFSU2_TR(0x61b63a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+24),(U+0),4);
}
B61b63c:{NFSU2_TR(0x61b63c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61b641ull));
TAIL_STATIC(0x502fd0u,502);
}
B61b641:L61b641:{c.instructions+=2;NFSU2_TR(0x61b641);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B61b643:{NFSU2_TR(0x61b643);
if(r1(R+518)){{goto L61b654;}}
}
B61b645:L61b645:{c.instructions+=3;NFSU2_TR(0x61b645);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B61b648:{NFSU2_TR(0x61b648);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B61b64a:{NFSU2_TR(0x61b64a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L61b65b;}}
}
B61b64c:L61b64c:{c.instructions+=4;NFSU2_TR(0x61b64c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B61b64e:{NFSU2_TR(0x61b64e);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+4))));
}
B61b650:{NFSU2_TR(0x61b650);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B61b652:{NFSU2_TR(0x61b652);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x61b645u);}goto L61b645;}}
}
B61b654:L61b654:{c.instructions+=4;NFSU2_TR(0x61b654);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B61b655:{NFSU2_TR(0x61b655);
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
B61b657:{NFSU2_TR(0x61b657);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B61b658:{NFSU2_TR(0x61b658);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B61b65b:L61b65b:{c.instructions+=7;NFSU2_TR(0x61b65b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B61b65e:{NFSU2_TR(0x61b65e);
__builtin_memmove((R+0),(R+28),4);
}
B61b660:{NFSU2_TR(0x61b660);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0xeull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B61b663:{NFSU2_TR(0x61b663);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B61b664:{NFSU2_TR(0x61b664);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),r4(R+4)));
w1(R+523,scarry<u32>(r4(R+0),r4(R+4)));
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B61b666:{NFSU2_TR(0x61b666);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B61b667:{NFSU2_TR(0x61b667);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B61b670:L61b670:{c.instructions+=8;NFSU2_TR(0x61b670);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x24ull))));
}
B61b673:{NFSU2_TR(0x61b673);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61b674:{NFSU2_TR(0x61b674);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61b675:{NFSU2_TR(0x61b675);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B61b679:{NFSU2_TR(0x61b679);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61b67a:{NFSU2_TR(0x61b67a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61b67b:{NFSU2_TR(0x61b67b);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61b67c:{NFSU2_TR(0x61b67c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61b681ull));
TAIL_STATIC(0x610020u,610);
}
B61b681:L61b681:{c.instructions+=3;NFSU2_TR(0x61b681);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61b682:{NFSU2_TR(0x61b682);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61b686:{NFSU2_TR(0x61b686);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61b68bull));
TAIL_STATIC(0x6100a0u,610);
}
B61b68b:L61b68b:{c.instructions+=4;NFSU2_TR(0x61b68b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B61b68e:{NFSU2_TR(0x61b68e);
u8 U[14];
__builtin_memmove((U+6),(R+20),4);
w1(R+512,u8((r4(U+6))<(u32(0x219c94aull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x219c94aull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x219c94aull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B61b694:{NFSU2_TR(0x61b694);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61b698:{NFSU2_TR(0x61b698);
if(r1(R+518)){{goto L61b6b2;}}
}
B61b69a:L61b69a:{c.instructions+=2;NFSU2_TR(0x61b69a);
u8 U[14];
__builtin_memmove((U+6),(R+20),4);
w1(R+512,u8((r4(U+6))<(u32(0x6126dd4dull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x6126dd4dull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x6126dd4dull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B61b6a0:{NFSU2_TR(0x61b6a0);
if(r1(R+518)){{goto L61b6b2;}}
}
B61b6a2:L61b6a2:{c.instructions+=3;NFSU2_TR(0x61b6a2);
u8 U[14];
__builtin_memmove((U+6),(R+20),4);
w1(R+512,u8((r4(U+6))<(u32(0xcf704771ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xcf704771ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xcf704771ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B61b6a8:{NFSU2_TR(0x61b6a8);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B61b6b0:{NFSU2_TR(0x61b6b0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L61b6ba;}}
}
B61b6b2:L61b6b2:{c.instructions+=1;NFSU2_TR(0x61b6b2);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B61b6ba:L61b6ba:{c.instructions+=3;NFSU2_TR(0x61b6ba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+24),(U+0),4);
}
B61b6bc:{NFSU2_TR(0x61b6bc);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61b6c0:{NFSU2_TR(0x61b6c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61b6c5ull));
TAIL_STATIC(0x502fd0u,502);
}
B61b6c5:L61b6c5:{c.instructions+=3;NFSU2_TR(0x61b6c5);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B61b6c7:{NFSU2_TR(0x61b6c7);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61b6cb:{NFSU2_TR(0x61b6cb);
if(r1(R+518)){{goto L61b922;}}
}
B61b6d1:L61b6d1:{c.instructions+=10;NFSU2_TR(0x61b6d1);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61b6d5:{NFSU2_TR(0x61b6d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B61b6d8:{NFSU2_TR(0x61b6d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B61b6db:{NFSU2_TR(0x61b6db);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61b6df:{NFSU2_TR(0x61b6df);
__builtin_memmove((R+28),(R+8),4);
}
B61b6e1:{NFSU2_TR(0x61b6e1);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(s64(s32(u32(0xeull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+28,u32(r8(U+16)));
}
B61b6e4:{NFSU2_TR(0x61b6e4);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+4))));
}
B61b6e6:{NFSU2_TR(0x61b6e6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61b6e8:{NFSU2_TR(0x61b6e8);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61b6ec:{NFSU2_TR(0x61b6ec);
if(r1(R+518)){{goto L61b707;}}
}
B61b6ee:L61b6ee:{c.instructions+=2;NFSU2_TR(0x61b6ee);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B61b6f0:{NFSU2_TR(0x61b6f0);
if(r1(R+512)){{goto L61b90e;}}
}
B61b6f6:L61b6f6:{c.instructions+=2;NFSU2_TR(0x61b6f6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B61b6f8:{NFSU2_TR(0x61b6f8);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L61b90e;}}
}
B61b6fe:L61b6fe:{c.instructions+=3;NFSU2_TR(0x61b6fe);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xeull))));
__builtin_memmove((R+12),(U+0),4);
}
B61b701:{NFSU2_TR(0x61b701);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61b705:{NFSU2_TR(0x61b705);
{goto L61b75a;}
}
B61b707:L61b707:{c.instructions+=4;NFSU2_TR(0x61b707);
__builtin_memmove((R+24),gp(0x8a1cbc),4);
}
B61b70d:{NFSU2_TR(0x61b70d);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B61b70f:{NFSU2_TR(0x61b70f);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61b711:{NFSU2_TR(0x61b711);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L61b734;}}
}
B61b713:L61b713:{c.instructions+=1;NFSU2_TR(0x61b713);
{goto L61b720;}
}
B61b720:L61b720:{c.instructions+=3;NFSU2_TR(0x61b720);
__builtin_memmove((R+12),gp(0x8a1cb8),4);
}
B61b726:{NFSU2_TR(0x61b726);
u8 U[20];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(r4(R+20))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B61b729:{NFSU2_TR(0x61b729);
if(r1(R+518)){{goto L61b92e;}}
}
B61b72f:L61b72f:{c.instructions+=3;NFSU2_TR(0x61b72f);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B61b730:{NFSU2_TR(0x61b730);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B61b732:{NFSU2_TR(0x61b732);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x61b720u);}goto L61b720;}}
}
B61b734:L61b734:{c.instructions+=1;NFSU2_TR(0x61b734);
u8 U[5];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w1(U+4,u8(0xffull));
s1(u32(r4(U+0)),r1(U+4));
}
B61b739:L61b739:{c.instructions+=7;NFSU2_TR(0x61b739);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61b73d:{NFSU2_TR(0x61b73d);
u8 U[4];
w4(U+0,u32(0xeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61b73f:{NFSU2_TR(0x61b73f);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61b741:{NFSU2_TR(0x61b741);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61b742:{NFSU2_TR(0x61b742);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61b743:{NFSU2_TR(0x61b743);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61b744:{NFSU2_TR(0x61b744);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61b749ull));
TAIL_STATIC(0x488c50u,488);
}
B61b749:L61b749:{c.instructions+=4;NFSU2_TR(0x61b749);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B61b74c:{NFSU2_TR(0x61b74c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61b74e:{NFSU2_TR(0x61b74e);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61b752:{NFSU2_TR(0x61b752);
if(r1(R+518)){{goto L61b90e;}}
}
B61b758:L61b758:{c.instructions+=1;NFSU2_TR(0x61b758);
__builtin_memmove((R+12),(R+0),4);
}
B61b75a:L61b75a:{c.instructions+=2;NFSU2_TR(0x61b75a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+12))<(r4(U+0))));
}
B61b75c:{NFSU2_TR(0x61b75c);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L61b90e;}}
}
B61b762:L61b762:{c.instructions+=4;NFSU2_TR(0x61b762);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x7ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B61b766:{NFSU2_TR(0x61b766);
__builtin_memmove((R+8),gp(0x8a1cb8),4);
}
B61b76c:{NFSU2_TR(0x61b76c);
u8 U[20];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(r4(R+20))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B61b76f:{NFSU2_TR(0x61b76f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L61b8ff;}}
}
B61b775:L61b775:{c.instructions+=3;NFSU2_TR(0x61b775);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B61b779:{NFSU2_TR(0x61b779);
u8 U[16];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B61b77d:{NFSU2_TR(0x61b77d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L61b8ff;}}
}
B61b783:L61b783:{c.instructions+=3;NFSU2_TR(0x61b783);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61b787:{NFSU2_TR(0x61b787);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61b789:{NFSU2_TR(0x61b789);
if(r1(R+518)){{goto L61b79f;}}
}
B61b78b:L61b78b:{c.instructions+=6;NFSU2_TR(0x61b78b);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B61b78f:{NFSU2_TR(0x61b78f);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+12))),2);
w4(R+8,u32(r2(U+0)));
}
B61b792:{NFSU2_TR(0x61b792);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B61b795:{NFSU2_TR(0x61b795);
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+8))));
}
B61b797:{NFSU2_TR(0x61b797);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B61b799:{NFSU2_TR(0x61b799);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L61b8ff;}}
}
B61b79f:L61b79f:{c.instructions+=2;NFSU2_TR(0x61b79f);
u8 U[4];
w4(U+0,u32(0x7a8550ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61b7a4:{NFSU2_TR(0x61b7a4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61b7a9ull));
TAIL_STATIC(0x43db50u,43d);
}
B61b7a9:L61b7a9:{c.instructions+=4;NFSU2_TR(0x61b7a9);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B61b7ad:{NFSU2_TR(0x61b7ad);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B61b7b0:{NFSU2_TR(0x61b7b0);
u8 U[4];
__builtin_memmove((U+0),(R+4),2);
w2(U+2,u16(u32(r2(U+0))-u32(u16(0xffffull))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B61b7b5:{NFSU2_TR(0x61b7b5);
if(r1(R+518)){{goto L61b7f5;}}
}
B61b7b7:L61b7b7:{c.instructions+=8;NFSU2_TR(0x61b7b7);
__builtin_memmove((R+8),gp(0x8a1cc8),4);
}
B61b7bd:{NFSU2_TR(0x61b7bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B61b7c0:{NFSU2_TR(0x61b7c0);
w4(R+4,u32(r2(R+4)));
}
B61b7c3:{NFSU2_TR(0x61b7c3);
u8 U[10];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+28,u32(s32(s16(r2(U+8)))));
}
B61b7c7:{NFSU2_TR(0x61b7c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B61b7ca:{NFSU2_TR(0x61b7ca);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B61b7cc:{NFSU2_TR(0x61b7cc);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61b7ce:{NFSU2_TR(0x61b7ce);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L61b7f5;}}
}
B61b7d0:L61b7d0:{c.instructions+=2;NFSU2_TR(0x61b7d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B61b7d3:{NFSU2_TR(0x61b7d3);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x2ull))));
}
B61b7d6:L61b7d6:{c.instructions+=4;NFSU2_TR(0x61b7d6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61b7d8:{NFSU2_TR(0x61b7d8);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
w4(R+8,u32(s32(s16(r2(U+0)))));
}
B61b7db:{NFSU2_TR(0x61b7db);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B61b7df:{NFSU2_TR(0x61b7df);
if(r1(R+518)){{goto L61b937;}}
}
B61b7e5:L61b7e5:{c.instructions+=2;NFSU2_TR(0x61b7e5);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+0))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B61b7e7:{NFSU2_TR(0x61b7e7);
if(r1(R+518)){{goto L61b937;}}
}
B61b7ed:L61b7ed:{c.instructions+=4;NFSU2_TR(0x61b7ed);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B61b7ee:{NFSU2_TR(0x61b7ee);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x2ull))));
}
B61b7f1:{NFSU2_TR(0x61b7f1);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B61b7f3:{NFSU2_TR(0x61b7f3);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x61b7d6u);}goto L61b7d6;}}
}
B61b7f5:L61b7f5:{c.instructions+=1;NFSU2_TR(0x61b7f5);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B61b7fd:L61b7fd:{c.instructions+=2;NFSU2_TR(0x61b7fd);
u8 U[4];
w4(U+0,u32(0x7a8544ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61b802:{NFSU2_TR(0x61b802);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61b807ull));
TAIL_STATIC(0x43db50u,43d);
}
B61b807:L61b807:{c.instructions+=4;NFSU2_TR(0x61b807);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B61b80b:{NFSU2_TR(0x61b80b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B61b80e:{NFSU2_TR(0x61b80e);
u8 U[4];
__builtin_memmove((U+0),(R+4),2);
w2(U+2,u16(u32(r2(U+0))-u32(u16(0xffffull))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B61b813:{NFSU2_TR(0x61b813);
if(r1(R+518)){{goto L61b853;}}
}
B61b815:L61b815:{c.instructions+=8;NFSU2_TR(0x61b815);
__builtin_memmove((R+8),gp(0x8a1cc8),4);
}
B61b81b:{NFSU2_TR(0x61b81b);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B61b81e:{NFSU2_TR(0x61b81e);
w4(R+4,u32(r2(R+4)));
}
B61b821:{NFSU2_TR(0x61b821);
u8 U[10];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+28,u32(s32(s16(r2(U+8)))));
}
B61b825:{NFSU2_TR(0x61b825);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B61b828:{NFSU2_TR(0x61b828);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B61b82a:{NFSU2_TR(0x61b82a);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61b82c:{NFSU2_TR(0x61b82c);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L61b853;}}
}
B61b82e:L61b82e:{c.instructions+=2;NFSU2_TR(0x61b82e);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B61b831:{NFSU2_TR(0x61b831);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x2ull))));
}
B61b834:L61b834:{c.instructions+=4;NFSU2_TR(0x61b834);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61b836:{NFSU2_TR(0x61b836);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
w4(R+8,u32(s32(s16(r2(U+0)))));
}
B61b839:{NFSU2_TR(0x61b839);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B61b83d:{NFSU2_TR(0x61b83d);
if(r1(R+518)){{goto L61b94b;}}
}
B61b843:L61b843:{c.instructions+=2;NFSU2_TR(0x61b843);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+0))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B61b845:{NFSU2_TR(0x61b845);
if(r1(R+518)){{goto L61b94b;}}
}
B61b84b:L61b84b:{c.instructions+=4;NFSU2_TR(0x61b84b);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B61b84c:{NFSU2_TR(0x61b84c);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x2ull))));
}
B61b84f:{NFSU2_TR(0x61b84f);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B61b851:{NFSU2_TR(0x61b851);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x61b834u);}goto L61b834;}}
}
B61b853:L61b853:{c.instructions+=1;NFSU2_TR(0x61b853);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B61b855:L61b855:{c.instructions+=2;NFSU2_TR(0x61b855);
u8 U[4];
w4(U+0,u32(0x7a8538ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61b85a:{NFSU2_TR(0x61b85a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61b85full));
TAIL_STATIC(0x43db50u,43d);
}
B61b85f:L61b85f:{c.instructions+=5;NFSU2_TR(0x61b85f);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B61b863:{NFSU2_TR(0x61b863);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B61b867:{NFSU2_TR(0x61b867);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B61b86a:{NFSU2_TR(0x61b86a);
u8 U[4];
__builtin_memmove((U+0),(R+4),2);
w2(U+2,u16(u32(r2(U+0))-u32(u16(0xffffull))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B61b86f:{NFSU2_TR(0x61b86f);
if(r1(R+518)){{goto L61b8af;}}
}
B61b871:L61b871:{c.instructions+=8;NFSU2_TR(0x61b871);
__builtin_memmove((R+8),gp(0x8a1cc8),4);
}
B61b877:{NFSU2_TR(0x61b877);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B61b87a:{NFSU2_TR(0x61b87a);
w4(R+4,u32(r2(R+4)));
}
B61b87d:{NFSU2_TR(0x61b87d);
u8 U[10];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+28,u32(s32(s16(r2(U+8)))));
}
B61b881:{NFSU2_TR(0x61b881);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B61b884:{NFSU2_TR(0x61b884);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B61b886:{NFSU2_TR(0x61b886);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61b888:{NFSU2_TR(0x61b888);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L61b8af;}}
}
B61b88a:L61b88a:{c.instructions+=2;NFSU2_TR(0x61b88a);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B61b88d:{NFSU2_TR(0x61b88d);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x2ull))));
}
B61b890:L61b890:{c.instructions+=4;NFSU2_TR(0x61b890);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61b892:{NFSU2_TR(0x61b892);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
w4(R+8,u32(s32(s16(r2(U+0)))));
}
B61b895:{NFSU2_TR(0x61b895);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B61b899:{NFSU2_TR(0x61b899);
if(r1(R+518)){{goto L61b95b;}}
}
B61b89f:L61b89f:{c.instructions+=2;NFSU2_TR(0x61b89f);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+0))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B61b8a1:{NFSU2_TR(0x61b8a1);
if(r1(R+518)){{goto L61b95b;}}
}
B61b8a7:L61b8a7:{c.instructions+=4;NFSU2_TR(0x61b8a7);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B61b8a8:{NFSU2_TR(0x61b8a8);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x2ull))));
}
B61b8ab:{NFSU2_TR(0x61b8ab);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B61b8ad:{NFSU2_TR(0x61b8ad);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x61b890u);}goto L61b890;}}
}
B61b8af:L61b8af:{c.instructions+=1;NFSU2_TR(0x61b8af);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B61b8b1:L61b8b1:{c.instructions+=3;NFSU2_TR(0x61b8b1);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61b8b5:{NFSU2_TR(0x61b8b5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61b8b7:{NFSU2_TR(0x61b8b7);
if(r1(R+518)){{goto L61b8c1;}}
}
B61b8b9:L61b8b9:{c.instructions+=3;NFSU2_TR(0x61b8b9);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61b8bd:{NFSU2_TR(0x61b8bd);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61b8bf:{NFSU2_TR(0x61b8bf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L61b8f3;}}
}
B61b8c1:L61b8c1:{c.instructions+=3;NFSU2_TR(0x61b8c1);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61b8c5:{NFSU2_TR(0x61b8c5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61b8c7:{NFSU2_TR(0x61b8c7);
if(r1(R+518)){{goto L61b8cd;}}
}
B61b8c9:L61b8c9:{c.instructions+=2;NFSU2_TR(0x61b8c9);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61b8cb:{NFSU2_TR(0x61b8cb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L61b8f3;}}
}
B61b8cd:L61b8cd:{c.instructions+=3;NFSU2_TR(0x61b8cd);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61b8d1:{NFSU2_TR(0x61b8d1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61b8d3:{NFSU2_TR(0x61b8d3);
if(r1(R+518)){{goto L61b8d9;}}
}
B61b8d5:L61b8d5:{c.instructions+=2;NFSU2_TR(0x61b8d5);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61b8d7:{NFSU2_TR(0x61b8d7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L61b8f3;}}
}
B61b8d9:L61b8d9:{c.instructions+=7;NFSU2_TR(0x61b8d9);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B61b8dd:{NFSU2_TR(0x61b8dd);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B61b8e0:{NFSU2_TR(0x61b8e0);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w1(R+0,shr<u8>(r1(R+0),u64(r4(U+0))));
}
B61b8e3:{NFSU2_TR(0x61b8e3);
w4(R+8,u32(s32(s8(r1(R+0)))));
}
B61b8e6:{NFSU2_TR(0x61b8e6);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61b8ea:{NFSU2_TR(0x61b8ea);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B61b8ec:{NFSU2_TR(0x61b8ec);
if(r1(R+518)){{goto L61b96b;}}
}
B61b8ee:L61b8ee:{c.instructions+=2;NFSU2_TR(0x61b8ee);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B61b8f1:{NFSU2_TR(0x61b8f1);
if(r1(R+518)){{goto L61b96b;}}
}
B61b8f3:L61b8f3:{c.instructions+=3;NFSU2_TR(0x61b8f3);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B61b8f7:{NFSU2_TR(0x61b8f7);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B61b8fb:{NFSU2_TR(0x61b8fb);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B61b8ff:L61b8ff:{c.instructions+=4;NFSU2_TR(0x61b8ff);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0xeull))));
}
B61b902:{NFSU2_TR(0x61b902);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+12))<(r4(U+0))));
}
B61b904:{NFSU2_TR(0x61b904);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61b908:{NFSU2_TR(0x61b908);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x61b762u);}goto L61b762;}}
}
B61b90e:L61b90e:{c.instructions+=5;NFSU2_TR(0x61b90e);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61b912:{NFSU2_TR(0x61b912);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B61b914:{NFSU2_TR(0x61b914);
u8 U[16];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B61b918:{NFSU2_TR(0x61b918);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61b91c:{NFSU2_TR(0x61b91c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x61b6d1u);}goto L61b6d1;}}
}
B61b922:L61b922:{c.instructions+=7;NFSU2_TR(0x61b922);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B61b923:{NFSU2_TR(0x61b923);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B61b924:{NFSU2_TR(0x61b924);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B61b925:{NFSU2_TR(0x61b925);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B61b927:{NFSU2_TR(0x61b927);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B61b928:{NFSU2_TR(0x61b928);
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
B61b92b:{NFSU2_TR(0x61b92b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B61b92e:L61b92e:{c.instructions+=2;NFSU2_TR(0x61b92e);
u8 U[5];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B61b932:{NFSU2_TR(0x61b932);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x61b739u);}goto L61b739;}
}
B61b937:L61b937:{c.instructions+=2;NFSU2_TR(0x61b937);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61b939:{NFSU2_TR(0x61b939);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x61b7f5u);}goto L61b7f5;}}
}
B61b93f:L61b93f:{c.instructions+=3;NFSU2_TR(0x61b93f);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61b942:{NFSU2_TR(0x61b942);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61b946:{NFSU2_TR(0x61b946);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x61b7fdu);}goto L61b7fd;}
}
B61b94b:L61b94b:{c.instructions+=2;NFSU2_TR(0x61b94b);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61b94d:{NFSU2_TR(0x61b94d);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x61b853u);}goto L61b853;}}
}
B61b953:L61b953:{c.instructions+=2;NFSU2_TR(0x61b953);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B61b956:{NFSU2_TR(0x61b956);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x61b855u);}goto L61b855;}
}
B61b95b:L61b95b:{c.instructions+=2;NFSU2_TR(0x61b95b);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61b95d:{NFSU2_TR(0x61b95d);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x61b8afu);}goto L61b8af;}}
}
B61b963:L61b963:{c.instructions+=2;NFSU2_TR(0x61b963);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B61b966:{NFSU2_TR(0x61b966);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x61b8b1u);}goto L61b8b1;}
}
B61b96b:L61b96b:{c.instructions+=7;NFSU2_TR(0x61b96b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B61b96c:{NFSU2_TR(0x61b96c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B61b96d:{NFSU2_TR(0x61b96d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B61b96e:{NFSU2_TR(0x61b96e);
__builtin_memmove((R+0),(R+4),4);
}
B61b970:{NFSU2_TR(0x61b970);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B61b971:{NFSU2_TR(0x61b971);
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
B61b974:{NFSU2_TR(0x61b974);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B61b980:L61b980:{c.instructions+=9;NFSU2_TR(0x61b980);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61b981:{NFSU2_TR(0x61b981);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61b985:{NFSU2_TR(0x61b985);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61b986:{NFSU2_TR(0x61b986);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B61b98a:{NFSU2_TR(0x61b98a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61b98b:{NFSU2_TR(0x61b98b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61b98c:{NFSU2_TR(0x61b98c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61b98d:{NFSU2_TR(0x61b98d);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61b991:{NFSU2_TR(0x61b991);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61b996ull));
TAIL_STATIC(0x6101e0u,610);
}
B61b996:L61b996:{c.instructions+=9;NFSU2_TR(0x61b996);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x802960ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B61b99d:{NFSU2_TR(0x61b99d);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B61b9a1:{NFSU2_TR(0x61b9a1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B61b9a4:{NFSU2_TR(0x61b9a4);
__builtin_memmove((R+4),(R+0),4);
}
B61b9a6:{NFSU2_TR(0x61b9a6);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B61b9a8:{NFSU2_TR(0x61b9a8);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61b9aa:{NFSU2_TR(0x61b9aa);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61b9ae:{NFSU2_TR(0x61b9ae);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61b9b2:{NFSU2_TR(0x61b9b2);
if(r1(R+518)){{goto L61b9d9;}}
}
B61b9b4:L61b9b4:{c.instructions+=3;NFSU2_TR(0x61b9b4);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x7ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B61b9b8:{NFSU2_TR(0x61b9b8);
__builtin_memmove((R+8),gp(0x8a1cb8),4);
}
B61b9be:{NFSU2_TR(0x61b9be);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B61b9c1:L61b9c1:{c.instructions+=2;NFSU2_TR(0x61b9c1);
u8 U[20];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(R+0))-u32(r4(U+12))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B61b9c4:{NFSU2_TR(0x61b9c4);
if(r1(R+518)){{goto L61b9cc;}}
}
B61b9c6:L61b9c6:{c.instructions+=3;NFSU2_TR(0x61b9c6);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B61b9c7:{NFSU2_TR(0x61b9c7);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B61b9ca:{NFSU2_TR(0x61b9ca);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x61b9c1u);}goto L61b9c1;}}
}
B61b9cc:L61b9cc:{c.instructions+=2;NFSU2_TR(0x61b9cc);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B61b9cf:{NFSU2_TR(0x61b9cf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L61b9db;}}
}
B61b9d1:L61b9d1:{c.instructions+=5;NFSU2_TR(0x61b9d1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B61b9d2:{NFSU2_TR(0x61b9d2);
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
B61b9d4:{NFSU2_TR(0x61b9d4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B61b9d5:{NFSU2_TR(0x61b9d5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B61b9d6:{NFSU2_TR(0x61b9d6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B61b9d9:L61b9d9:{c.instructions+=1;NFSU2_TR(0x61b9d9);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B61b9db:L61b9db:{c.instructions+=5;NFSU2_TR(0x61b9db);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B61b9de:{NFSU2_TR(0x61b9de);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61b9df:{NFSU2_TR(0x61b9df);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61b9e0:{NFSU2_TR(0x61b9e0);
__builtin_memmove((R+12),(R+24),4);
}
B61b9e2:{NFSU2_TR(0x61b9e2);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L61ba19;}}
}
B61b9e4:L61b9e4:{c.instructions+=1;NFSU2_TR(0x61b9e4);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B61b9e8:L61b9e8:{c.instructions+=3;NFSU2_TR(0x61b9e8);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B61b9eb:{NFSU2_TR(0x61b9eb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61b9ed:{NFSU2_TR(0x61b9ed);
if(r1(R+518)){{goto L61ba13;}}
}
B61b9ef:L61b9ef:{c.instructions+=2;NFSU2_TR(0x61b9ef);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B61b9f1:{NFSU2_TR(0x61b9f1);
if(r1(R+518)){{goto L61b9f5;}}
}
B61b9f3:L61b9f3:{c.instructions+=1;NFSU2_TR(0x61b9f3);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B61b9f5:L61b9f5:{c.instructions+=9;NFSU2_TR(0x61b9f5);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B61b9f9:{NFSU2_TR(0x61b9f9);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B61b9fd:{NFSU2_TR(0x61b9fd);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61b9fe:{NFSU2_TR(0x61b9fe);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61b9ff:{NFSU2_TR(0x61b9ff);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61ba00:{NFSU2_TR(0x61ba00);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B61ba04:{NFSU2_TR(0x61ba04);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61ba05:{NFSU2_TR(0x61ba05);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61ba06:{NFSU2_TR(0x61ba06);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61ba0bull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x61b670u);}goto L61b670;}
}
B61ba0b:L61ba0b:{c.instructions+=2;NFSU2_TR(0x61ba0b);
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
B61ba0d:{NFSU2_TR(0x61ba0d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L61ba1b;}}
}
B61ba0f:L61ba0f:{c.instructions+=1;NFSU2_TR(0x61ba0f);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B61ba13:L61ba13:{c.instructions+=3;NFSU2_TR(0x61ba13);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B61ba14:{NFSU2_TR(0x61ba14);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B61ba17:{NFSU2_TR(0x61ba17);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x61b9e8u);}goto L61b9e8;}}
}
B61ba19:L61ba19:{c.instructions+=1;NFSU2_TR(0x61ba19);
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
B61ba1b:L61ba1b:{c.instructions+=6;NFSU2_TR(0x61ba1b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B61ba1c:{NFSU2_TR(0x61ba1c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B61ba1d:{NFSU2_TR(0x61ba1d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B61ba1e:{NFSU2_TR(0x61ba1e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B61ba1f:{NFSU2_TR(0x61ba1f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B61ba20:{NFSU2_TR(0x61ba20);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B61ba30:L61ba30:{c.instructions+=10;NFSU2_TR(0x61ba30);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61ba34:{NFSU2_TR(0x61ba34);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B61ba38:{NFSU2_TR(0x61ba38);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61ba39:{NFSU2_TR(0x61ba39);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61ba3d:{NFSU2_TR(0x61ba3d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61ba3f:{NFSU2_TR(0x61ba3f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61ba40:{NFSU2_TR(0x61ba40);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B61ba44:{NFSU2_TR(0x61ba44);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61ba45:{NFSU2_TR(0x61ba45);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61ba46:{NFSU2_TR(0x61ba46);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61ba4bull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x61b980u);}goto L61b980;}
}
B61ba4b:L61ba4b:{c.instructions+=1;NFSU2_TR(0x61ba4b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B61ba50:L61ba50:{c.instructions+=11;NFSU2_TR(0x61ba50);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61ba54:{NFSU2_TR(0x61ba54);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B61ba58:{NFSU2_TR(0x61ba58);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61ba59:{NFSU2_TR(0x61ba59);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61ba5d:{NFSU2_TR(0x61ba5d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61ba5e:{NFSU2_TR(0x61ba5e);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B61ba62:{NFSU2_TR(0x61ba62);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61ba63:{NFSU2_TR(0x61ba63);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61ba67:{NFSU2_TR(0x61ba67);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61ba68:{NFSU2_TR(0x61ba68);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61ba69:{NFSU2_TR(0x61ba69);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61ba6eull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x61b980u);}goto L61b980;}
}
B61ba6e:L61ba6e:{c.instructions+=1;NFSU2_TR(0x61ba6e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B61ba80:L61ba80:{c.instructions+=17;NFSU2_TR(0x61ba80);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61ba84:{NFSU2_TR(0x61ba84);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61ba85:{NFSU2_TR(0x61ba85);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B61ba89:{NFSU2_TR(0x61ba89);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61ba8a:{NFSU2_TR(0x61ba8a);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B61ba8e:{NFSU2_TR(0x61ba8e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61ba8f:{NFSU2_TR(0x61ba8f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61ba90:{NFSU2_TR(0x61ba90);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61ba91:{NFSU2_TR(0x61ba91);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B61ba93:{NFSU2_TR(0x61ba93);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61ba94:{NFSU2_TR(0x61ba94);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61ba95:{NFSU2_TR(0x61ba95);
__builtin_memmove((R+24),(R+4),4);
}
B61ba97:{NFSU2_TR(0x61ba97);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B61ba9b:{NFSU2_TR(0x61ba9b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61ba9c:{NFSU2_TR(0x61ba9c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61ba9d:{NFSU2_TR(0x61ba9d);
__builtin_memmove((R+4),(R+24),4);
}
B61ba9f:{NFSU2_TR(0x61ba9f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61baa4ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x61b980u);}goto L61b980;}
}
B61baa4:L61baa4:{c.instructions+=2;NFSU2_TR(0x61baa4);
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
B61baa6:{NFSU2_TR(0x61baa6);
if(r1(R+518)){{goto L61bac7;}}
}
B61baa8:L61baa8:{c.instructions+=2;NFSU2_TR(0x61baa8);
u8 U[22];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
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
B61baac:{NFSU2_TR(0x61baac);
if(r1(R+518)){{goto L61bac7;}}
}
B61baae:L61baae:{c.instructions+=9;NFSU2_TR(0x61baae);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B61bab2:{NFSU2_TR(0x61bab2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61bab3:{NFSU2_TR(0x61bab3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61bab4:{NFSU2_TR(0x61bab4);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61bab8:{NFSU2_TR(0x61bab8);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61bab9:{NFSU2_TR(0x61bab9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61baba:{NFSU2_TR(0x61baba);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61babb:{NFSU2_TR(0x61babb);
__builtin_memmove((R+4),(R+24),4);
}
B61babd:{NFSU2_TR(0x61babd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61bac2ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x61b980u);}goto L61b980;}
}
B61bac2:L61bac2:{c.instructions+=3;NFSU2_TR(0x61bac2);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B61bac3:{NFSU2_TR(0x61bac3);
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
B61bac5:{NFSU2_TR(0x61bac5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x61baa8u);}goto L61baa8;}}
}
B61bac7:L61bac7:{c.instructions+=6;NFSU2_TR(0x61bac7);
__builtin_memmove((R+0),(R+28),4);
}
B61bac9:{NFSU2_TR(0x61bac9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B61baca:{NFSU2_TR(0x61baca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B61bacb:{NFSU2_TR(0x61bacb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B61bacc:{NFSU2_TR(0x61bacc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B61bacd:{NFSU2_TR(0x61bacd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B61bad0:L61bad0:{c.instructions+=8;NFSU2_TR(0x61bad0);
u8 U[6];
w1(R+512,u8((r4(R+16))<(u32(0x8ull))));
w1(R+523,sborrow<u32>(r4(R+16),u32(0x8ull)));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B61bad3:{NFSU2_TR(0x61bad3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61bad4:{NFSU2_TR(0x61bad4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+12),(U+0),4);
}
B61bad6:{NFSU2_TR(0x61bad6);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61bad7:{NFSU2_TR(0x61bad7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61bad8:{NFSU2_TR(0x61bad8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61bad9:{NFSU2_TR(0x61bad9);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61badd:{NFSU2_TR(0x61badd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61bae2ull));
TAIL_STATIC(0x502fd0u,502);
}
B61bae2:L61bae2:{c.instructions+=4;NFSU2_TR(0x61bae2);
__builtin_memmove((R+28),(R+0),4);
}
B61bae4:{NFSU2_TR(0x61bae4);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B61bae6:{NFSU2_TR(0x61bae6);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61baea:{NFSU2_TR(0x61baea);
if(r1(R+518)){{goto L61bbd3;}}
}
B61baf0:L61baf0:{c.instructions+=1;NFSU2_TR(0x61baf0);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B61baf4:L61baf4:{c.instructions+=8;NFSU2_TR(0x61baf4);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B61baf7:{NFSU2_TR(0x61baf7);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61bafa:{NFSU2_TR(0x61bafa);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B61bafe:{NFSU2_TR(0x61bafe);
__builtin_memmove((R+24),(R+8),4);
}
B61bb00:{NFSU2_TR(0x61bb00);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(u32(0xeull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B61bb03:{NFSU2_TR(0x61bb03);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+0))));
}
B61bb05:{NFSU2_TR(0x61bb05);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61bb07:{NFSU2_TR(0x61bb07);
if(r1(R+518)){{goto L61bb1e;}}
}
B61bb09:L61bb09:{c.instructions+=2;NFSU2_TR(0x61bb09);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
}
B61bb0b:{NFSU2_TR(0x61bb0b);
if(r1(R+512)){{goto L61bbc5;}}
}
B61bb11:L61bb11:{c.instructions+=2;NFSU2_TR(0x61bb11);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
}
B61bb13:{NFSU2_TR(0x61bb13);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L61bbc5;}}
}
B61bb19:L61bb19:{c.instructions+=2;NFSU2_TR(0x61bb19);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xeull))));
__builtin_memmove((R+0),(U+0),4);
}
B61bb1c:{NFSU2_TR(0x61bb1c);
{goto L61bb64;}
}
B61bb1e:L61bb1e:{c.instructions+=2;NFSU2_TR(0x61bb1e);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61bb20:{NFSU2_TR(0x61bb20);
if(r1(R+518)){{goto L61bb64;}}
}
B61bb22:L61bb22:{c.instructions+=4;NFSU2_TR(0x61bb22);
__builtin_memmove((R+28),gp(0x8a1cbc),4);
}
B61bb28:{NFSU2_TR(0x61bb28);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B61bb2a:{NFSU2_TR(0x61bb2a);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61bb2c:{NFSU2_TR(0x61bb2c);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L61bb48;}}
}
B61bb2e:L61bb2e:{c.instructions+=1;NFSU2_TR(0x61bb2e);
__builtin_memmove((R+28),(R+28),4);
}
B61bb30:L61bb30:{c.instructions+=3;NFSU2_TR(0x61bb30);
__builtin_memmove((R+12),gp(0x8a1cb8),4);
}
B61bb36:{NFSU2_TR(0x61bb36);
u8 U[20];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(r4(R+20))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B61bb39:{NFSU2_TR(0x61bb39);
if(r1(R+518)){{goto L61bbdf;}}
}
B61bb3f:L61bb3f:{c.instructions+=3;NFSU2_TR(0x61bb3f);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B61bb40:{NFSU2_TR(0x61bb40);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
}
B61bb42:{NFSU2_TR(0x61bb42);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x61bb30u);}goto L61bb30;}}
}
B61bb44:L61bb44:{c.instructions+=1;NFSU2_TR(0x61bb44);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B61bb48:L61bb48:{c.instructions+=1;NFSU2_TR(0x61bb48);
u8 U[5];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w1(U+4,u8(0xffull));
s1(u32(r4(U+0)),r1(U+4));
}
B61bb4d:L61bb4d:{c.instructions+=7;NFSU2_TR(0x61bb4d);
u8 U[4];
w4(U+0,u32(0xeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61bb4f:{NFSU2_TR(0x61bb4f);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61bb51:{NFSU2_TR(0x61bb51);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61bb52:{NFSU2_TR(0x61bb52);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61bb53:{NFSU2_TR(0x61bb53);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61bb57:{NFSU2_TR(0x61bb57);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61bb58:{NFSU2_TR(0x61bb58);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61bb5dull));
TAIL_STATIC(0x488c50u,488);
}
B61bb5d:L61bb5d:{c.instructions+=3;NFSU2_TR(0x61bb5d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B61bb60:{NFSU2_TR(0x61bb60);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61bb62:{NFSU2_TR(0x61bb62);
if(r1(R+518)){{goto L61bbd3;}}
}
B61bb64:L61bb64:{c.instructions+=2;NFSU2_TR(0x61bb64);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B61bb66:{NFSU2_TR(0x61bb66);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L61bbc1;}}
}
B61bb68:L61bb68:{c.instructions+=2;NFSU2_TR(0x61bb68);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61bb6a:{NFSU2_TR(0x61bb6a);
if(r1(R+518)){{goto L61bb7b;}}
}
B61bb6c:L61bb6c:{c.instructions+=4;NFSU2_TR(0x61bb6c);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B61bb70:{NFSU2_TR(0x61bb70);
__builtin_memmove((R+8),gp(0x8a1cb8),4);
}
B61bb76:{NFSU2_TR(0x61bb76);
u8 U[20];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(r4(R+20))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B61bb79:{NFSU2_TR(0x61bb79);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L61bbd3;}}
}
B61bb7b:L61bb7b:{c.instructions+=3;NFSU2_TR(0x61bb7b);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B61bb7f:{NFSU2_TR(0x61bb7f);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B61bb82:{NFSU2_TR(0x61bb82);
if(r1(R+518)){{goto L61bb8c;}}
}
B61bb84:L61bb84:{c.instructions+=3;NFSU2_TR(0x61bb84);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(s32(s8(r1(U+4)))));
}
B61bb88:{NFSU2_TR(0x61bb88);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B61bb8a:{NFSU2_TR(0x61bb8a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L61bbba;}}
}
B61bb8c:L61bb8c:{c.instructions+=3;NFSU2_TR(0x61bb8c);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B61bb90:{NFSU2_TR(0x61bb90);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61bb92:{NFSU2_TR(0x61bb92);
if(r1(R+518)){{goto L61bba4;}}
}
B61bb94:L61bb94:{c.instructions+=6;NFSU2_TR(0x61bb94);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B61bb98:{NFSU2_TR(0x61bb98);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
w4(R+28,u32(r2(U+0)));
}
B61bb9b:{NFSU2_TR(0x61bb9b);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B61bb9e:{NFSU2_TR(0x61bb9e);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+28))));
}
B61bba0:{NFSU2_TR(0x61bba0);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B61bba2:{NFSU2_TR(0x61bba2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L61bbba;}}
}
B61bba4:L61bba4:{c.instructions+=3;NFSU2_TR(0x61bba4);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B61bba8:{NFSU2_TR(0x61bba8);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B61bbab:{NFSU2_TR(0x61bbab);
if(r1(R+518)){{goto L61bbd5;}}
}
B61bbad:L61bbad:{c.instructions+=5;NFSU2_TR(0x61bbad);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B61bbb0:{NFSU2_TR(0x61bbb0);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w1(R+4,shr<u8>(r1(R+4),u64(r4(U+0))));
}
B61bbb3:{NFSU2_TR(0x61bbb3);
w4(R+8,u32(s32(s8(r1(R+4)))));
}
B61bbb6:{NFSU2_TR(0x61bbb6);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B61bbb8:{NFSU2_TR(0x61bbb8);
if(r1(R+518)){{goto L61bbd5;}}
}
B61bbba:L61bbba:{c.instructions+=3;NFSU2_TR(0x61bbba);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xeull))));
}
B61bbbd:{NFSU2_TR(0x61bbbd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B61bbbf:{NFSU2_TR(0x61bbbf);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x61bb68u);}goto L61bb68;}}
}
B61bbc1:L61bbc1:{c.instructions+=1;NFSU2_TR(0x61bbc1);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B61bbc5:L61bbc5:{c.instructions+=4;NFSU2_TR(0x61bbc5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+12),(U+0),4);
}
B61bbc7:{NFSU2_TR(0x61bbc7);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B61bbc9:{NFSU2_TR(0x61bbc9);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61bbcd:{NFSU2_TR(0x61bbcd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x61baf4u);}goto L61baf4;}}
}
B61bbd3:L61bbd3:{c.instructions+=1;NFSU2_TR(0x61bbd3);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B61bbd5:L61bbd5:{c.instructions+=6;NFSU2_TR(0x61bbd5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B61bbd6:{NFSU2_TR(0x61bbd6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B61bbd7:{NFSU2_TR(0x61bbd7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B61bbd8:{NFSU2_TR(0x61bbd8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B61bbd9:{NFSU2_TR(0x61bbd9);
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
B61bbdc:{NFSU2_TR(0x61bbdc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B61bbdf:L61bbdf:{c.instructions+=3;NFSU2_TR(0x61bbdf);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B61bbe3:{NFSU2_TR(0x61bbe3);
u8 U[5];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B61bbe7:{NFSU2_TR(0x61bbe7);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x61bb4du);}goto L61bb4d;}
}
B61bbf0:L61bbf0:{c.instructions+=11;NFSU2_TR(0x61bbf0);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61bbf4:{NFSU2_TR(0x61bbf4);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B61bbf8:{NFSU2_TR(0x61bbf8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61bbf9:{NFSU2_TR(0x61bbf9);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61bbfd:{NFSU2_TR(0x61bbfd);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61bbfe:{NFSU2_TR(0x61bbfe);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B61bc02:{NFSU2_TR(0x61bc02);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61bc03:{NFSU2_TR(0x61bc03);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61bc07:{NFSU2_TR(0x61bc07);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61bc08:{NFSU2_TR(0x61bc08);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61bc09:{NFSU2_TR(0x61bc09);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61bc0eull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x61bad0u);}goto L61bad0;}
}
B61bc0e:L61bc0e:{c.instructions+=1;NFSU2_TR(0x61bc0e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B61bc20:L61bc20:{c.instructions+=5;NFSU2_TR(0x61bc20);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61bc21:{NFSU2_TR(0x61bc21);
__builtin_memmove((R+24),(R+4),4);
}
B61bc23:{NFSU2_TR(0x61bc23);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B61bc27:{NFSU2_TR(0x61bc27);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61bc29:{NFSU2_TR(0x61bc29);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L61bc30;}}
}
B61bc2b:L61bc2b:{c.instructions+=1;NFSU2_TR(0x61bc2b);
w4(R+4,u32(0x7ea624ull));
}
B61bc30:L61bc30:{c.instructions+=2;NFSU2_TR(0x61bc30);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x844ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x1ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x1ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B61bc37:{NFSU2_TR(0x61bc37);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L61bc4c;}}
}
B61bc39:L61bc39:{c.instructions+=1;NFSU2_TR(0x61bc39);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61bc3eull));
TAIL_STATIC(0x4ff970u,4ff);
}
B61bc3e:L61bc3e:{c.instructions+=7;NFSU2_TR(0x61bc3e);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B61bc40:{NFSU2_TR(0x61bc40);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61bc42:{NFSU2_TR(0x61bc42);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+4),(U+0),1);
}
B61bc45:{NFSU2_TR(0x61bc45);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B61bc46:{NFSU2_TR(0x61bc46);
u8 U[6];
w1(R+523,scarry<u32>(r4(R+4),u32(0x1ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B61bc47:{NFSU2_TR(0x61bc47);
__builtin_memmove((R+0),(R+4),4);
}
B61bc49:{NFSU2_TR(0x61bc49);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B61bc4c:L61bc4c:{c.instructions+=3;NFSU2_TR(0x61bc4c);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd9ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B61bc52:{NFSU2_TR(0x61bc52);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B61bc54:{NFSU2_TR(0x61bc54);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L61bc5c;}}
}
B61bc56:L61bc56:{c.instructions+=3;NFSU2_TR(0x61bc56);
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
B61bc58:{NFSU2_TR(0x61bc58);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B61bc59:{NFSU2_TR(0x61bc59);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B61bc5c:L61bc5c:{c.instructions+=4;NFSU2_TR(0x61bc5c);
w4(R+8,u32(s32(s8(r1(R+0)))));
}
B61bc5f:{NFSU2_TR(0x61bc5f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61bc60:{NFSU2_TR(0x61bc60);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61bc61:{NFSU2_TR(0x61bc61);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61bc66ull));
TAIL_STATIC(0x43c140u,43c);
}
B61bc66:L61bc66:{c.instructions+=4;NFSU2_TR(0x61bc66);
u8 U[13];
w4(U+0,u32(u32(u32(0x880ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+0,u32(s32(s8(r1(U+12)))));
}
B61bc6e:{NFSU2_TR(0x61bc6e);
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
B61bc71:{NFSU2_TR(0x61bc71);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B61bc72:{NFSU2_TR(0x61bc72);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B61bc80:L61bc80:{c.instructions+=12;NFSU2_TR(0x61bc80);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61bc81:{NFSU2_TR(0x61bc81);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61bc82:{NFSU2_TR(0x61bc82);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B61bc86:{NFSU2_TR(0x61bc86);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61bc87:{NFSU2_TR(0x61bc87);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B61bc8b:{NFSU2_TR(0x61bc8b);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61bc8d:{NFSU2_TR(0x61bc8d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61bc8f:{NFSU2_TR(0x61bc8f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61bc91:{NFSU2_TR(0x61bc91);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61bc92:{NFSU2_TR(0x61bc92);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61bc93:{NFSU2_TR(0x61bc93);
w4(R+4,u32(0x8a2b68ull));
}
B61bc98:{NFSU2_TR(0x61bc98);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61bc9dull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x61b980u);}goto L61b980;}
}
B61bc9d:L61bc9d:{c.instructions+=2;NFSU2_TR(0x61bc9d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61bc9f:{NFSU2_TR(0x61bc9f);
if(r1(R+518)){{goto L61bcc7;}}
}
B61bca1:L61bca1:{c.instructions+=1;NFSU2_TR(0x61bca1);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B61bca5:L61bca5:{c.instructions+=5;NFSU2_TR(0x61bca5);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B61bca8:{NFSU2_TR(0x61bca8);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w1(R+4,shr<u8>(r1(R+4),u64(r4(U+0))));
}
B61bcab:{NFSU2_TR(0x61bcab);
w4(R+8,u32(s32(s8(r1(R+4)))));
}
B61bcae:{NFSU2_TR(0x61bcae);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B61bcb0:{NFSU2_TR(0x61bcb0);
if(r1(R+518)){{goto L61bcc9;}}
}
B61bcb2:L61bcb2:{c.instructions+=7;NFSU2_TR(0x61bcb2);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61bcb4:{NFSU2_TR(0x61bcb4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61bcb5:{NFSU2_TR(0x61bcb5);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61bcb7:{NFSU2_TR(0x61bcb7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61bcb8:{NFSU2_TR(0x61bcb8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61bcb9:{NFSU2_TR(0x61bcb9);
w4(R+4,u32(0x8a2b68ull));
}
B61bcbe:{NFSU2_TR(0x61bcbe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61bcc3ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x61b980u);}goto L61b980;}
}
B61bcc3:L61bcc3:{c.instructions+=2;NFSU2_TR(0x61bcc3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61bcc5:{NFSU2_TR(0x61bcc5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x61bca5u);}goto L61bca5;}}
}
B61bcc7:L61bcc7:{c.instructions+=1;NFSU2_TR(0x61bcc7);
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
B61bcc9:L61bcc9:{c.instructions+=4;NFSU2_TR(0x61bcc9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B61bcca:{NFSU2_TR(0x61bcca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B61bccb:{NFSU2_TR(0x61bccb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B61bccc:{NFSU2_TR(0x61bccc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B61bcd0:L61bcd0:{c.instructions+=9;NFSU2_TR(0x61bcd0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x88ull))));
}
B61bcd6:{NFSU2_TR(0x61bcd6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61bcd7:{NFSU2_TR(0x61bcd7);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61bcd8:{NFSU2_TR(0x61bcd8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61bcd9:{NFSU2_TR(0x61bcd9);
__builtin_memmove((R+24),(R+4),4);
}
B61bcdb:{NFSU2_TR(0x61bcdb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61bcdc:{NFSU2_TR(0x61bcdc);
w4(R+4,u32(0x2aull));
}
B61bce1:{NFSU2_TR(0x61bce1);
w4(R+0,u32(0x1010101ull));
}
B61bce6:{NFSU2_TR(0x61bce6);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x838ull))));
__builtin_memmove((R+28),(U+0),4);
}
B61bcec:L61bcec:{c.instructions+=1;NFSU2_TR(0x61bcec);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L61bcee;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x61bcecu);}goto L61bcec;}
}
B61bcee:L61bcee:{c.instructions+=4;NFSU2_TR(0x61bcee);
u8 U[18];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x2ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x4ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),2);
s2(u32(r4(U+0)),r2(U+16));
}
B61bcf0:{NFSU2_TR(0x61bcf0);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B61bcf2:{NFSU2_TR(0x61bcf2);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61bcf6:{NFSU2_TR(0x61bcf6);
{goto L61bd00;}
}
B61bd00:L61bd00:{c.instructions+=4;NFSU2_TR(0x61bd00);
u8 U[16];
w4(U+0,u32(u32(u32(0x590ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B61bd07:{NFSU2_TR(0x61bd07);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61bd09:{NFSU2_TR(0x61bd09);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61bd0d:{NFSU2_TR(0x61bd0d);
if(r1(R+518)){{goto L61bdfa;}}
}
B61bd13:L61bd13:{c.instructions+=3;NFSU2_TR(0x61bd13);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B61bd17:{NFSU2_TR(0x61bd17);
u8 U[4];
__builtin_memmove((U+0),(R+4),2);
w2(U+2,u16(u32(r2(U+0))-u32(u16(0xffffull))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B61bd1c:{NFSU2_TR(0x61bd1c);
if(r1(R+518)){{goto L61bdfa;}}
}
B61bd22:L61bd22:{c.instructions+=8;NFSU2_TR(0x61bd22);
__builtin_memmove((R+8),gp(0x8a1cc8),4);
}
B61bd28:{NFSU2_TR(0x61bd28);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B61bd2b:{NFSU2_TR(0x61bd2b);
w4(R+4,u32(r2(R+4)));
}
B61bd2e:{NFSU2_TR(0x61bd2e);
u8 U[10];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+12,u32(s32(s16(r2(U+8)))));
}
B61bd32:{NFSU2_TR(0x61bd32);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B61bd35:{NFSU2_TR(0x61bd35);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B61bd37:{NFSU2_TR(0x61bd37);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61bd39:{NFSU2_TR(0x61bd39);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L61bdfa;}}
}
B61bd3f:L61bd3f:{c.instructions+=3;NFSU2_TR(0x61bd3f);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B61bd42:{NFSU2_TR(0x61bd42);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2ull))));
__builtin_memmove((R+0),(U+0),4);
}
B61bd45:{NFSU2_TR(0x61bd45);
{goto L61bd50;}
}
B61bd50:L61bd50:{c.instructions+=4;NFSU2_TR(0x61bd50);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
w4(R+8,u32(s32(s16(r2(U+0)))));
}
B61bd53:{NFSU2_TR(0x61bd53);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(u32(0xe80a3b62ull))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B61bd5b:{NFSU2_TR(0x61bd5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B61bd5f:{NFSU2_TR(0x61bd5f);
if(r1(R+518)){{goto L61bd6e;}}
}
B61bd61:L61bd61:{c.instructions+=4;NFSU2_TR(0x61bd61);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B61bd62:{NFSU2_TR(0x61bd62);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
}
B61bd65:{NFSU2_TR(0x61bd65);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B61bd67:{NFSU2_TR(0x61bd67);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x61bd50u);}goto L61bd50;}}
}
B61bd69:L61bd69:{c.instructions+=1;NFSU2_TR(0x61bd69);
{goto L61bdf6;}
}
B61bd6e:L61bd6e:{c.instructions+=4;NFSU2_TR(0x61bd6e);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+28))),2);
w4(R+12,u32(s32(s16(r2(U+0)))));
}
B61bd71:{NFSU2_TR(0x61bd71);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B61bd73:{NFSU2_TR(0x61bd73);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61bd75:{NFSU2_TR(0x61bd75);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L61bd9b;}}
}
B61bd77:L61bd77:{c.instructions+=2;NFSU2_TR(0x61bd77);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2ull))));
__builtin_memmove((R+0),(U+0),4);
}
B61bd7a:{NFSU2_TR(0x61bd7a);
__builtin_memmove((R+12),(R+12),4);
}
B61bd80:L61bd80:{c.instructions+=5;NFSU2_TR(0x61bd80);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
w4(R+4,u32(s32(s16(r2(U+0)))));
}
B61bd83:{NFSU2_TR(0x61bd83);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B61bd87:{NFSU2_TR(0x61bd87);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xe80a3b62ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B61bd8d:{NFSU2_TR(0x61bd8d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B61bd91:{NFSU2_TR(0x61bd91);
if(r1(R+518)){{goto L61bd9d;}}
}
B61bd93:L61bd93:{c.instructions+=4;NFSU2_TR(0x61bd93);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B61bd94:{NFSU2_TR(0x61bd94);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
}
B61bd97:{NFSU2_TR(0x61bd97);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B61bd99:{NFSU2_TR(0x61bd99);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x61bd80u);}goto L61bd80;}}
}
B61bd9b:L61bd9b:{c.instructions+=1;NFSU2_TR(0x61bd9b);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B61bd9d:L61bd9d:{c.instructions+=3;NFSU2_TR(0x61bd9d);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61bd9f:{NFSU2_TR(0x61bd9f);
__builtin_memmove((R+12),(R+4),4);
}
B61bda1:{NFSU2_TR(0x61bda1);
if(r1(R+518)){{goto L61bdf6;}}
}
B61bda3:L61bda3:{c.instructions+=3;NFSU2_TR(0x61bda3);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B61bda6:{NFSU2_TR(0x61bda6);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B61bda8:{NFSU2_TR(0x61bda8);
{goto L61bdb0;}
}
B61bdb0:L61bdb0:{c.instructions+=3;NFSU2_TR(0x61bdb0);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x80333cull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B61bdb7:{NFSU2_TR(0x61bdb7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61bdb8:{NFSU2_TR(0x61bdb8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61bdbdull));
TAIL_STATIC(0x43db50u,43d);
}
B61bdbd:L61bdbd:{c.instructions+=3;NFSU2_TR(0x61bdbd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B61bdc0:{NFSU2_TR(0x61bdc0);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B61bdc2:{NFSU2_TR(0x61bdc2);
if(r1(R+518)){{goto L61bdcd;}}
}
B61bdc4:L61bdc4:{c.instructions+=3;NFSU2_TR(0x61bdc4);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B61bdc5:{NFSU2_TR(0x61bdc5);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xaaull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xaaull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B61bdcb:{NFSU2_TR(0x61bdcb);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x61bdb0u);}goto L61bdb0;}}
}
B61bdcd:L61bdcd:{c.instructions+=2;NFSU2_TR(0x61bdcd);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x45ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B61bdd0:{NFSU2_TR(0x61bdd0);
if(r1(R+518)){{goto L61bde1;}}
}
B61bdd2:L61bdd2:{c.instructions+=2;NFSU2_TR(0x61bdd2);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x802de8ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B61bdd9:{NFSU2_TR(0x61bdd9);
u8 U[13];
w4(U+0,u32(u32(u32(0x838ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
w1(U+12,u8(0x0ull));
s1(u32(r4(U+8)),r1(U+12));
}
B61bde1:L61bde1:{c.instructions+=4;NFSU2_TR(0x61bde1);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B61bde5:{NFSU2_TR(0x61bde5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61bde6:{NFSU2_TR(0x61bde6);
u8 U[4];
w4(U+0,u32(0xe80a3b62ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61bdeb:{NFSU2_TR(0x61bdeb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61bdf0ull));
TAIL_STATIC(0x60fef0u,60f);
}
B61bdf0:L61bdf0:{c.instructions+=3;NFSU2_TR(0x61bdf0);
__builtin_memmove((R+12),(R+0),4);
}
B61bdf2:{NFSU2_TR(0x61bdf2);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61bdf4:{NFSU2_TR(0x61bdf4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x61bda3u);}goto L61bda3;}}
}
B61bdf6:L61bdf6:{c.instructions+=1;NFSU2_TR(0x61bdf6);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61bdfa:L61bdfa:{c.instructions+=3;NFSU2_TR(0x61bdfa);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B61bdfe:{NFSU2_TR(0x61bdfe);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xa1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B61be04:{NFSU2_TR(0x61be04);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L61be1f;}}
}
B61be06:L61be06:{c.instructions+=2;NFSU2_TR(0x61be06);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61be08:{NFSU2_TR(0x61be08);
if(r1(R+518)){TAIL_STATIC(0x61c25bu,61c);}
}
B61be0e:L61be0e:{c.instructions+=4;NFSU2_TR(0x61be0e);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B61be11:{NFSU2_TR(0x61be11);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w1(R+4,shr<u8>(r1(R+4),u64(r4(U+0))));
}
B61be14:{NFSU2_TR(0x61be14);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x581ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B61be1a:{NFSU2_TR(0x61be1a);
TAIL_STATIC(0x61c25bu,61c);
}
B61be1f:L61be1f:{c.instructions+=2;NFSU2_TR(0x61be1f);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0x1dull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x1dull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x1dull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B61be22:{NFSU2_TR(0x61be22);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L61be3d;}}
}
B61be24:L61be24:{c.instructions+=1;NFSU2_TR(0x61be24);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61be29ull));
TAIL_STATIC(0x50f1d0u,50f);
}
B61be29:L61be29:{c.instructions+=2;NFSU2_TR(0x61be29);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B61be2b:{NFSU2_TR(0x61be2b);
if(r1(R+518)){TAIL_STATIC(0x61c25bu,61c);}
}
B61be31:L61be31:{c.instructions+=2;NFSU2_TR(0x61be31);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x855ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B61be38:{NFSU2_TR(0x61be38);
TAIL_STATIC(0x61c25bu,61c);
}
B61be3d:L61be3d:{c.instructions+=2;NFSU2_TR(0x61be3d);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x9ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B61be40:{NFSU2_TR(0x61be40);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L61bede;}}
}
B61be46:L61be46:{c.instructions+=3;NFSU2_TR(0x61be46);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5b4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B61be4c:{NFSU2_TR(0x61be4c);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61be4e:{NFSU2_TR(0x61be4e);
if(r1(R+518)){TAIL_STATIC(0x61c25bu,61c);}
}
B61be54:L61be54:{c.instructions+=2;NFSU2_TR(0x61be54);
u8 U[4];
w4(U+0,u32(0x7a8638ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61be59:{NFSU2_TR(0x61be59);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61be5eull));
TAIL_STATIC(0x43db50u,43d);
}
B61be5e:L61be5e:{c.instructions+=4;NFSU2_TR(0x61be5e);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B61be62:{NFSU2_TR(0x61be62);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B61be65:{NFSU2_TR(0x61be65);
u8 U[4];
__builtin_memmove((U+0),(R+4),2);
w2(U+2,u16(u32(r2(U+0))-u32(u16(0xffffull))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B61be6a:{NFSU2_TR(0x61be6a);
if(r1(R+518)){{goto L61bea7;}}
}
B61be6c:L61be6c:{c.instructions+=8;NFSU2_TR(0x61be6c);
__builtin_memmove((R+8),gp(0x8a1cc8),4);
}
B61be72:{NFSU2_TR(0x61be72);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B61be75:{NFSU2_TR(0x61be75);
w4(R+4,u32(r2(R+4)));
}
B61be78:{NFSU2_TR(0x61be78);
u8 U[10];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+12,u32(s32(s16(r2(U+8)))));
}
B61be7c:{NFSU2_TR(0x61be7c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B61be7f:{NFSU2_TR(0x61be7f);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B61be81:{NFSU2_TR(0x61be81);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61be83:{NFSU2_TR(0x61be83);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L61bea7;}}
}
B61be85:L61be85:{c.instructions+=3;NFSU2_TR(0x61be85);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B61be88:{NFSU2_TR(0x61be88);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x2ull))));
}
B61be8b:{NFSU2_TR(0x61be8b);
{goto L61be90;}
}
B61be90:L61be90:{c.instructions+=4;NFSU2_TR(0x61be90);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61be92:{NFSU2_TR(0x61be92);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
w4(R+8,u32(s32(s16(r2(U+0)))));
}
B61be95:{NFSU2_TR(0x61be95);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B61be99:{NFSU2_TR(0x61be99);
if(r1(R+518)){{goto L61beb9;}}
}
B61be9b:L61be9b:{c.instructions+=2;NFSU2_TR(0x61be9b);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+0))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B61be9d:{NFSU2_TR(0x61be9d);
if(r1(R+518)){{goto L61beb9;}}
}
B61be9f:L61be9f:{c.instructions+=4;NFSU2_TR(0x61be9f);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B61bea0:{NFSU2_TR(0x61bea0);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x2ull))));
}
B61bea3:{NFSU2_TR(0x61bea3);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B61bea5:{NFSU2_TR(0x61bea5);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x61be90u);}goto L61be90;}}
}
B61bea7:L61bea7:{c.instructions+=1;NFSU2_TR(0x61bea7);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B61bea9:L61bea9:{c.instructions+=4;NFSU2_TR(0x61bea9);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61beab:{NFSU2_TR(0x61beab);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61bead:{NFSU2_TR(0x61bead);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61beaf:{NFSU2_TR(0x61beaf);
if(r1(R+518)){{goto L61bec2;}}
}
B61beb1:L61beb1:{c.instructions+=5;NFSU2_TR(0x61beb1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B61beb3:{NFSU2_TR(0x61beb3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61beb4:{NFSU2_TR(0x61beb4);
u8 U[4];
w4(U+0,u32(0x19ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61beb6:{NFSU2_TR(0x61beb6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61beb7:{NFSU2_TR(0x61beb7);
{goto L61bec9;}
}
B61beb9:L61beb9:{c.instructions+=2;NFSU2_TR(0x61beb9);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61bebb:{NFSU2_TR(0x61bebb);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x61bea7u);}goto L61bea7;}}
}
B61bebd:L61bebd:{c.instructions+=2;NFSU2_TR(0x61bebd);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B61bec0:{NFSU2_TR(0x61bec0);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x61bea9u);}goto L61bea9;}
}
B61bec2:L61bec2:{c.instructions+=4;NFSU2_TR(0x61bec2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B61bec4:{NFSU2_TR(0x61bec4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61bec6:{NFSU2_TR(0x61bec6);
u8 U[4];
w4(U+0,u32(0x19ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61bec8:{NFSU2_TR(0x61bec8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61bec9:L61bec9:{c.instructions+=2;NFSU2_TR(0x61bec9);
w4(R+4,u32(0x8a2b68ull));
}
B61bece:{NFSU2_TR(0x61bece);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61bed3ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x61b980u);}goto L61b980;}
}
B61bed3:L61bed3:{c.instructions+=2;NFSU2_TR(0x61bed3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5f4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61bed9:{NFSU2_TR(0x61bed9);
TAIL_STATIC(0x61c25bu,61c);
}
B61bede:L61bede:{c.instructions+=2;NFSU2_TR(0x61bede);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xdull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B61bee1:{NFSU2_TR(0x61bee1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L61bf19;}}
}
B61bee3:L61bee3:{c.instructions+=2;NFSU2_TR(0x61bee3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61bee5:{NFSU2_TR(0x61bee5);
if(r1(R+518)){TAIL_STATIC(0x61c25bu,61c);}
}
B61beeb:L61beeb:{c.instructions+=2;NFSU2_TR(0x61beeb);
u8 U[8];
__builtin_memmove((U+0),gp(0x8654a4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B61bef2:{NFSU2_TR(0x61bef2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x61c25bu,61c);}
}
B61bef8:L61bef8:{c.instructions+=5;NFSU2_TR(0x61bef8);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x841ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B61beff:{NFSU2_TR(0x61beff);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x851ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B61bf06:{NFSU2_TR(0x61bf06);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x86cull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B61bf0d:{NFSU2_TR(0x61bf0d);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x845ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B61bf14:{NFSU2_TR(0x61bf14);
TAIL_STATIC(0x61c25bu,61c);
}
B61bf19:L61bf19:{c.instructions+=2;NFSU2_TR(0x61bf19);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B61bf1c:{NFSU2_TR(0x61bf1c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x61c25bu,61c);}
}
B61bf22:L61bf22:{c.instructions+=2;NFSU2_TR(0x61bf22);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61bf24:{NFSU2_TR(0x61bf24);
if(r1(R+518)){TAIL_STATIC(0x61c170u,61c);}
}
B61bf2a:L61bf2a:{c.instructions+=5;NFSU2_TR(0x61bf2a);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B61bf2d:{NFSU2_TR(0x61bf2d);
__builtin_memmove((R+8),(R+0),1);
}
B61bf2f:{NFSU2_TR(0x61bf2f);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w1(R+8,shr<u8>(r1(R+8),u64(r4(U+0))));
}
B61bf32:{NFSU2_TR(0x61bf32);
u8 U[1];
w1(R+523,u8(0x0ull));
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B61bf34:{NFSU2_TR(0x61bf34);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){TAIL_STATIC(0x61c170u,61c);}
}
B61bf3a:L61bf3a:{c.instructions+=12;NFSU2_TR(0x61bf3a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+28),(U+0),4);
}
B61bf3c:{NFSU2_TR(0x61bf3c);
__builtin_memmove((R+8),gp(0x8a1ccc),4);
}
B61bf42:{NFSU2_TR(0x61bf42);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(s64(s32(u32(0x890ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+28,u32(r8(U+16)));
}
B61bf48:{NFSU2_TR(0x61bf48);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x1full))));
}
B61bf4b:{NFSU2_TR(0x61bf4b);
__builtin_memmove((R+12),(R+0),4);
}
B61bf4d:{NFSU2_TR(0x61bf4d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61bf4e:{NFSU2_TR(0x61bf4e);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+8))));
}
B61bf50:{NFSU2_TR(0x61bf50);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61bf51:{NFSU2_TR(0x61bf51);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B61bf55:{NFSU2_TR(0x61bf55);
u8 U[4];
w4(U+0,u32(0x7a862cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61bf5a:{NFSU2_TR(0x61bf5a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61bf5b:{NFSU2_TR(0x61bf5b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61bf60ull));
TAIL_STATIC(0x4400d0u,440);
}
B61bf60:L61bf60:{c.instructions+=3;NFSU2_TR(0x61bf60);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B61bf64:{NFSU2_TR(0x61bf64);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61bf65:{NFSU2_TR(0x61bf65);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61bf6aull));
TAIL_STATIC(0x43db50u,43d);
}
B61bf6a:L61bf6a:{c.instructions+=7;NFSU2_TR(0x61bf6a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B61bf6d:{NFSU2_TR(0x61bf6d);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61bf6f:{NFSU2_TR(0x61bf6f);
__builtin_memmove((R+20),(R+0),4);
}
B61bf71:{NFSU2_TR(0x61bf71);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61bf73:{NFSU2_TR(0x61bf73);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61bf74:{NFSU2_TR(0x61bf74);
u8 U[4];
w4(U+0,u32(0x7a8610ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61bf79:{NFSU2_TR(0x61bf79);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61bf7eull));
TAIL_STATIC(0x43db80u,43d);
}
B61bf7e:L61bf7e:{c.instructions+=7;NFSU2_TR(0x61bf7e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B61bf80:{NFSU2_TR(0x61bf80);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B61bf83:{NFSU2_TR(0x61bf83);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61bf84:{NFSU2_TR(0x61bf84);
u8 U[4];
w4(U+0,u32(0x3bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61bf86:{NFSU2_TR(0x61bf86);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61bf87:{NFSU2_TR(0x61bf87);
w4(R+4,u32(0x8a2b68ull));
}
B61bf8c:{NFSU2_TR(0x61bf8c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61bf91ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x61b980u);}goto L61b980;}
}
B61bf91:L61bf91:{c.instructions+=6;NFSU2_TR(0x61bf91);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61bf93:{NFSU2_TR(0x61bf93);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61bf95:{NFSU2_TR(0x61bf95);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61bf96:{NFSU2_TR(0x61bf96);
u8 U[4];
w4(U+0,u32(0x7a85f0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61bf9b:{NFSU2_TR(0x61bf9b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x67cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61bfa1:{NFSU2_TR(0x61bfa1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61bfa6ull));
TAIL_STATIC(0x43db80u,43d);
}
B61bfa6:L61bfa6:{c.instructions+=7;NFSU2_TR(0x61bfa6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B61bfa9:{NFSU2_TR(0x61bfa9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61bfaa:{NFSU2_TR(0x61bfaa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B61bfac:{NFSU2_TR(0x61bfac);
u8 U[4];
w4(U+0,u32(0x3cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61bfae:{NFSU2_TR(0x61bfae);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61bfaf:{NFSU2_TR(0x61bfaf);
w4(R+4,u32(0x8a2b68ull));
}
B61bfb4:{NFSU2_TR(0x61bfb4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61bfb9ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x61b980u);}goto L61b980;}
}
B61bfb9:L61bfb9:{c.instructions+=6;NFSU2_TR(0x61bfb9);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61bfbb:{NFSU2_TR(0x61bfbb);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61bfbd:{NFSU2_TR(0x61bfbd);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61bfbe:{NFSU2_TR(0x61bfbe);
u8 U[4];
w4(U+0,u32(0x7a85d0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61bfc3:{NFSU2_TR(0x61bfc3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x680ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61bfc9:{NFSU2_TR(0x61bfc9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61bfceull));
TAIL_STATIC(0x43db80u,43d);
}
B61bfce:L61bfce:{c.instructions+=7;NFSU2_TR(0x61bfce);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B61bfd0:{NFSU2_TR(0x61bfd0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B61bfd3:{NFSU2_TR(0x61bfd3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61bfd4:{NFSU2_TR(0x61bfd4);
u8 U[4];
w4(U+0,u32(0x3dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61bfd6:{NFSU2_TR(0x61bfd6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61bfd7:{NFSU2_TR(0x61bfd7);
w4(R+4,u32(0x8a2b68ull));
}
B61bfdc:{NFSU2_TR(0x61bfdc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61bfe1ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x61b980u);}goto L61b980;}
}
B61bfe1:L61bfe1:{c.instructions+=6;NFSU2_TR(0x61bfe1);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61bfe3:{NFSU2_TR(0x61bfe3);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61bfe5:{NFSU2_TR(0x61bfe5);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61bfe6:{NFSU2_TR(0x61bfe6);
u8 U[4];
w4(U+0,u32(0x7a85b0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61bfeb:{NFSU2_TR(0x61bfeb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x684ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61bff1:{NFSU2_TR(0x61bff1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61bff6ull));
TAIL_STATIC(0x43db80u,43d);
}
B61bff6:L61bff6:{c.instructions+=6;NFSU2_TR(0x61bff6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B61bff8:{NFSU2_TR(0x61bff8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B61bffb:{NFSU2_TR(0x61bffb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61bffc:{NFSU2_TR(0x61bffc);
u8 U[4];
w4(U+0,u32(0x3eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61bffe:{NFSU2_TR(0x61bffe);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61bfff:{NFSU2_TR(0x61bfff);
w4(R+4,u32(0x8a2b68ull));
TAIL_STATIC(0x61c004u,61c);
}
XIT:NFSU2_TR_EXIT(0x61b,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
