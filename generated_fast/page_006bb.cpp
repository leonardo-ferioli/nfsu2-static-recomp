#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_686(u8* __restrict R,Cpu& c);
u32 body_698(u8* __restrict R,Cpu& c);
u32 body_699(u8* __restrict R,Cpu& c);
u32 body_69a(u8* __restrict R,Cpu& c);
u32 body_69e(u8* __restrict R,Cpu& c);
u32 body_69f(u8* __restrict R,Cpu& c);
u32 body_6a0(u8* __restrict R,Cpu& c);
u32 body_6a8(u8* __restrict R,Cpu& c);
u32 body_6ba(u8* __restrict R,Cpu& c);
u32 body_6bc(u8* __restrict R,Cpu& c);
u32 body_6c2(u8* __restrict R,Cpu& c);
u32 body_6c3(u8* __restrict R,Cpu& c);
u32 body_6c6(u8* __restrict R,Cpu& c);
u32 body_6c9(u8* __restrict R,Cpu& c);
u32 body_6cc(u8* __restrict R,Cpu& c);
u32 body_6cf(u8* __restrict R,Cpu& c);
u32 body_6d0(u8* __restrict R,Cpu& c);
u32 body_6d1(u8* __restrict R,Cpu& c);
u32 body_75c(u8* __restrict R,Cpu& c);
u32 body_75e(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x6bb,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x6bb,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_6bb(u8* __restrict R,Cpu& c);
u32 page_6bb(Cpu& c){return body_6bb(c.regs.data(),c);}
__attribute__((noinline)) u32 body_6bb(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x6bb000:goto L6bb000;
case 0x6bb002:c.instructions+=3;goto B6bb002;
case 0x6bb007:c.instructions+=2;goto B6bb007;
case 0x6bb00c:c.instructions+=1;goto B6bb00c;
case 0x6bb00e:goto L6bb00e;
case 0x6bb010:c.instructions+=1;goto B6bb010;
case 0x6bb015:goto L6bb015;
case 0x6bb016:c.instructions+=2;goto B6bb016;
case 0x6bb019:c.instructions+=1;goto B6bb019;
case 0x6bb01b:goto L6bb01b;
case 0x6bb01d:c.instructions+=1;goto B6bb01d;
case 0x6bb022:goto L6bb022;
case 0x6bb024:c.instructions+=2;goto B6bb024;
case 0x6bb027:c.instructions+=1;goto B6bb027;
case 0x6bb029:goto L6bb029;
case 0x6bb02c:c.instructions+=7;goto B6bb02c;
case 0x6bb032:c.instructions+=6;goto B6bb032;
case 0x6bb035:c.instructions+=5;goto B6bb035;
case 0x6bb03b:c.instructions+=4;goto B6bb03b;
case 0x6bb03d:c.instructions+=3;goto B6bb03d;
case 0x6bb042:c.instructions+=2;goto B6bb042;
case 0x6bb047:c.instructions+=1;goto B6bb047;
case 0x6bb049:goto L6bb049;
case 0x6bb04e:c.instructions+=1;goto B6bb04e;
case 0x6bb050:goto L6bb050;
case 0x6bb055:c.instructions+=1;goto B6bb055;
case 0x6bb057:goto L6bb057;
case 0x6bb05c:c.instructions+=1;goto B6bb05c;
case 0x6bb05e:goto L6bb05e;
case 0x6bb063:c.instructions+=1;goto B6bb063;
case 0x6bb065:goto L6bb065;
case 0x6bb067:c.instructions+=1;goto B6bb067;
case 0x6bb06c:goto L6bb06c;
case 0x6bb06e:goto L6bb06e;
case 0x6bb070:c.instructions+=2;goto B6bb070;
case 0x6bb072:c.instructions+=1;goto B6bb072;
case 0x6bb077:goto L6bb077;
case 0x6bb079:c.instructions+=2;goto B6bb079;
case 0x6bb07b:c.instructions+=1;goto B6bb07b;
case 0x6bb07d:goto L6bb07d;
case 0x6bb07e:c.instructions+=2;goto B6bb07e;
case 0x6bb081:c.instructions+=1;goto B6bb081;
case 0x6bb083:goto L6bb083;
case 0x6bb085:c.instructions+=2;goto B6bb085;
case 0x6bb088:c.instructions+=1;goto B6bb088;
case 0x6bb08a:goto L6bb08a;
case 0x6bb08d:c.instructions+=7;goto B6bb08d;
case 0x6bb093:c.instructions+=6;goto B6bb093;
case 0x6bb096:c.instructions+=5;goto B6bb096;
case 0x6bb09c:c.instructions+=4;goto B6bb09c;
case 0x6bb09e:c.instructions+=3;goto B6bb09e;
case 0x6bb0a3:c.instructions+=2;goto B6bb0a3;
case 0x6bb0a8:c.instructions+=1;goto B6bb0a8;
case 0x6bb0aa:goto L6bb0aa;
case 0x6bb0ac:c.instructions+=1;goto B6bb0ac;
case 0x6bb0b1:goto L6bb0b1;
case 0x6bb0b3:c.instructions+=2;goto B6bb0b3;
case 0x6bb0b5:c.instructions+=1;goto B6bb0b5;
case 0x6bb0b7:goto L6bb0b7;
case 0x6bb0b8:c.instructions+=2;goto B6bb0b8;
case 0x6bb0bb:c.instructions+=1;goto B6bb0bb;
case 0x6bb0bd:goto L6bb0bd;
case 0x6bb0bf:c.instructions+=1;goto B6bb0bf;
case 0x6bb0c4:goto L6bb0c4;
case 0x6bb0c6:c.instructions+=2;goto B6bb0c6;
case 0x6bb0c8:c.instructions+=1;goto B6bb0c8;
case 0x6bb0ca:goto L6bb0ca;
case 0x6bb0cc:c.instructions+=1;goto B6bb0cc;
case 0x6bb0d1:goto L6bb0d1;
case 0x6bb0d3:c.instructions+=2;goto B6bb0d3;
case 0x6bb0d5:c.instructions+=1;goto B6bb0d5;
case 0x6bb0d7:goto L6bb0d7;
case 0x6bb0d9:c.instructions+=1;goto B6bb0d9;
case 0x6bb0de:goto L6bb0de;
case 0x6bb0e0:c.instructions+=2;goto B6bb0e0;
case 0x6bb0e2:c.instructions+=1;goto B6bb0e2;
case 0x6bb0e4:goto L6bb0e4;
case 0x6bb0e6:c.instructions+=1;goto B6bb0e6;
case 0x6bb0eb:goto L6bb0eb;
case 0x6bb0ed:c.instructions+=2;goto B6bb0ed;
case 0x6bb0ef:c.instructions+=1;goto B6bb0ef;
case 0x6bb0f1:goto L6bb0f1;
case 0x6bb0f3:c.instructions+=1;goto B6bb0f3;
case 0x6bb0f8:goto L6bb0f8;
case 0x6bb0fa:goto L6bb0fa;
case 0x6bb0fc:c.instructions+=5;goto B6bb0fc;
case 0x6bb0fd:c.instructions+=4;goto B6bb0fd;
case 0x6bb0fe:c.instructions+=3;goto B6bb0fe;
case 0x6bb0ff:c.instructions+=2;goto B6bb0ff;
case 0x6bb100:c.instructions+=1;goto B6bb100;
case 0x6bb101:goto L6bb101;
case 0x6bb103:c.instructions+=15;goto B6bb103;
case 0x6bb104:c.instructions+=14;goto B6bb104;
case 0x6bb106:c.instructions+=13;goto B6bb106;
case 0x6bb107:c.instructions+=12;goto B6bb107;
case 0x6bb108:c.instructions+=11;goto B6bb108;
case 0x6bb109:c.instructions+=10;goto B6bb109;
case 0x6bb10a:c.instructions+=9;goto B6bb10a;
case 0x6bb10c:c.instructions+=8;goto B6bb10c;
case 0x6bb113:c.instructions+=7;goto B6bb113;
case 0x6bb11a:c.instructions+=6;goto B6bb11a;
case 0x6bb11b:c.instructions+=5;goto B6bb11b;
case 0x6bb11d:c.instructions+=4;goto B6bb11d;
case 0x6bb120:c.instructions+=3;goto B6bb120;
case 0x6bb123:c.instructions+=2;goto B6bb123;
case 0x6bb128:c.instructions+=1;goto B6bb128;
case 0x6bb12e:goto L6bb12e;
case 0x6bb131:c.instructions+=11;goto B6bb131;
case 0x6bb134:c.instructions+=10;goto B6bb134;
case 0x6bb13a:c.instructions+=9;goto B6bb13a;
case 0x6bb13c:c.instructions+=8;goto B6bb13c;
case 0x6bb142:c.instructions+=7;goto B6bb142;
case 0x6bb148:c.instructions+=6;goto B6bb148;
case 0x6bb14a:c.instructions+=5;goto B6bb14a;
case 0x6bb150:c.instructions+=4;goto B6bb150;
case 0x6bb152:c.instructions+=3;goto B6bb152;
case 0x6bb154:c.instructions+=2;goto B6bb154;
case 0x6bb159:c.instructions+=1;goto B6bb159;
case 0x6bb15b:goto L6bb15b;
case 0x6bb160:c.instructions+=1;goto B6bb160;
case 0x6bb162:goto L6bb162;
case 0x6bb169:c.instructions+=1;goto B6bb169;
case 0x6bb16b:goto L6bb16b;
case 0x6bb16d:c.instructions+=5;goto B6bb16d;
case 0x6bb16f:c.instructions+=4;goto B6bb16f;
case 0x6bb174:c.instructions+=3;goto B6bb174;
case 0x6bb179:c.instructions+=2;goto B6bb179;
case 0x6bb17b:c.instructions+=1;goto B6bb17b;
case 0x6bb180:goto L6bb180;
case 0x6bb182:c.instructions+=9;goto B6bb182;
case 0x6bb183:c.instructions+=8;goto B6bb183;
case 0x6bb184:c.instructions+=7;goto B6bb184;
case 0x6bb187:c.instructions+=6;goto B6bb187;
case 0x6bb189:c.instructions+=5;goto B6bb189;
case 0x6bb18b:c.instructions+=4;goto B6bb18b;
case 0x6bb18c:c.instructions+=3;goto B6bb18c;
case 0x6bb18e:c.instructions+=2;goto B6bb18e;
case 0x6bb191:c.instructions+=1;goto B6bb191;
case 0x6bb196:goto L6bb196;
case 0x6bb198:c.instructions+=9;goto B6bb198;
case 0x6bb199:c.instructions+=8;goto B6bb199;
case 0x6bb19a:c.instructions+=7;goto B6bb19a;
case 0x6bb19d:c.instructions+=6;goto B6bb19d;
case 0x6bb19f:c.instructions+=5;goto B6bb19f;
case 0x6bb1a1:c.instructions+=4;goto B6bb1a1;
case 0x6bb1a4:c.instructions+=3;goto B6bb1a4;
case 0x6bb1a6:c.instructions+=2;goto B6bb1a6;
case 0x6bb1ac:c.instructions+=1;goto B6bb1ac;
case 0x6bb1b1:goto L6bb1b1;
case 0x6bb1b7:goto L6bb1b7;
case 0x6bb1b8:c.instructions+=2;goto B6bb1b8;
case 0x6bb1bb:c.instructions+=1;goto B6bb1bb;
case 0x6bb1c1:goto L6bb1c1;
case 0x6bb1c3:c.instructions+=1;goto B6bb1c3;
case 0x6bb1c8:goto L6bb1c8;
case 0x6bb1cf:c.instructions+=1;goto B6bb1cf;
case 0x6bb1d1:goto L6bb1d1;
case 0x6bb1d3:c.instructions+=2;goto B6bb1d3;
case 0x6bb1d6:c.instructions+=1;goto B6bb1d6;
case 0x6bb1d8:goto L6bb1d8;
case 0x6bb1db:c.instructions+=8;goto B6bb1db;
case 0x6bb1e1:c.instructions+=7;goto B6bb1e1;
case 0x6bb1e4:c.instructions+=6;goto B6bb1e4;
case 0x6bb1ea:c.instructions+=5;goto B6bb1ea;
case 0x6bb1ec:c.instructions+=4;goto B6bb1ec;
case 0x6bb1ee:c.instructions+=3;goto B6bb1ee;
case 0x6bb1f0:c.instructions+=2;goto B6bb1f0;
case 0x6bb1f6:c.instructions+=1;goto B6bb1f6;
case 0x6bb1f8:goto L6bb1f8;
case 0x6bb1fe:c.instructions+=1;goto B6bb1fe;
case 0x6bb200:goto L6bb200;
case 0x6bb206:c.instructions+=1;goto B6bb206;
case 0x6bb208:goto L6bb208;
case 0x6bb20e:c.instructions+=1;goto B6bb20e;
case 0x6bb210:goto L6bb210;
case 0x6bb216:c.instructions+=1;goto B6bb216;
case 0x6bb218:goto L6bb218;
case 0x6bb21f:c.instructions+=1;goto B6bb21f;
case 0x6bb221:goto L6bb221;
case 0x6bb226:c.instructions+=2;goto B6bb226;
case 0x6bb229:c.instructions+=1;goto B6bb229;
case 0x6bb22b:goto L6bb22b;
case 0x6bb22d:c.instructions+=1;goto B6bb22d;
case 0x6bb232:goto L6bb232;
case 0x6bb235:goto L6bb235;
case 0x6bb239:c.instructions+=1;goto B6bb239;
case 0x6bb23b:goto L6bb23b;
case 0x6bb23c:c.instructions+=2;goto B6bb23c;
case 0x6bb23f:c.instructions+=1;goto B6bb23f;
case 0x6bb241:goto L6bb241;
case 0x6bb243:c.instructions+=1;goto B6bb243;
case 0x6bb248:goto L6bb248;
case 0x6bb24a:c.instructions+=2;goto B6bb24a;
case 0x6bb24d:c.instructions+=1;goto B6bb24d;
case 0x6bb24f:goto L6bb24f;
case 0x6bb252:c.instructions+=3;goto B6bb252;
case 0x6bb255:c.instructions+=2;goto B6bb255;
case 0x6bb259:c.instructions+=1;goto B6bb259;
case 0x6bb25b:goto L6bb25b;
case 0x6bb25e:c.instructions+=4;goto B6bb25e;
case 0x6bb261:c.instructions+=3;goto B6bb261;
case 0x6bb264:c.instructions+=2;goto B6bb264;
case 0x6bb268:c.instructions+=1;goto B6bb268;
case 0x6bb26a:goto L6bb26a;
case 0x6bb270:c.instructions+=1;goto B6bb270;
case 0x6bb272:goto L6bb272;
case 0x6bb278:c.instructions+=1;goto B6bb278;
case 0x6bb27a:goto L6bb27a;
case 0x6bb27d:c.instructions+=1;goto B6bb27d;
case 0x6bb280:goto L6bb280;
case 0x6bb281:c.instructions+=2;goto B6bb281;
case 0x6bb284:c.instructions+=1;goto B6bb284;
case 0x6bb286:goto L6bb286;
case 0x6bb28a:goto L6bb28a;
case 0x6bb28d:c.instructions+=5;goto B6bb28d;
case 0x6bb28e:c.instructions+=4;goto B6bb28e;
case 0x6bb28f:c.instructions+=3;goto B6bb28f;
case 0x6bb290:c.instructions+=2;goto B6bb290;
case 0x6bb291:c.instructions+=1;goto B6bb291;
case 0x6bb292:goto L6bb292;
case 0x6bb294:c.instructions+=11;goto B6bb294;
case 0x6bb295:c.instructions+=10;goto B6bb295;
case 0x6bb297:c.instructions+=9;goto B6bb297;
case 0x6bb298:c.instructions+=8;goto B6bb298;
case 0x6bb299:c.instructions+=7;goto B6bb299;
case 0x6bb29a:c.instructions+=6;goto B6bb29a;
case 0x6bb29b:c.instructions+=5;goto B6bb29b;
case 0x6bb29d:c.instructions+=4;goto B6bb29d;
case 0x6bb2a0:c.instructions+=3;goto B6bb2a0;
case 0x6bb2a2:c.instructions+=2;goto B6bb2a2;
case 0x6bb2a5:c.instructions+=1;goto B6bb2a5;
case 0x6bb2a7:goto L6bb2a7;
case 0x6bb2ae:c.instructions+=1;goto B6bb2ae;
case 0x6bb2b3:goto L6bb2b3;
case 0x6bb2b6:c.instructions+=5;goto B6bb2b6;
case 0x6bb2b8:c.instructions+=4;goto B6bb2b8;
case 0x6bb2bb:c.instructions+=3;goto B6bb2bb;
case 0x6bb2be:c.instructions+=2;goto B6bb2be;
case 0x6bb2c2:c.instructions+=1;goto B6bb2c2;
case 0x6bb2c4:goto L6bb2c4;
case 0x6bb2cb:goto L6bb2cb;
case 0x6bb2ce:c.instructions+=1;goto B6bb2ce;
case 0x6bb2d0:goto L6bb2d0;
case 0x6bb2d3:c.instructions+=7;goto B6bb2d3;
case 0x6bb2d6:c.instructions+=6;goto B6bb2d6;
case 0x6bb2d9:c.instructions+=5;goto B6bb2d9;
case 0x6bb2dc:c.instructions+=4;goto B6bb2dc;
case 0x6bb2df:c.instructions+=3;goto B6bb2df;
case 0x6bb2e1:c.instructions+=2;goto B6bb2e1;
case 0x6bb2e3:c.instructions+=1;goto B6bb2e3;
case 0x6bb2e5:goto L6bb2e5;
case 0x6bb2e6:c.instructions+=1;goto B6bb2e6;
case 0x6bb2e8:goto L6bb2e8;
case 0x6bb2e9:c.instructions+=1;goto B6bb2e9;
case 0x6bb2eb:goto L6bb2eb;
case 0x6bb2ec:c.instructions+=1;goto B6bb2ec;
case 0x6bb2ee:goto L6bb2ee;
case 0x6bb2f3:c.instructions+=1;goto B6bb2f3;
case 0x6bb2f5:goto L6bb2f5;
case 0x6bb2fa:c.instructions+=1;goto B6bb2fa;
case 0x6bb2fc:goto L6bb2fc;
case 0x6bb301:c.instructions+=1;goto B6bb301;
case 0x6bb303:goto L6bb303;
case 0x6bb308:goto L6bb308;
case 0x6bb30b:c.instructions+=2;goto B6bb30b;
case 0x6bb30d:c.instructions+=1;goto B6bb30d;
case 0x6bb30f:goto L6bb30f;
case 0x6bb315:c.instructions+=5;goto B6bb315;
case 0x6bb31a:c.instructions+=4;goto B6bb31a;
case 0x6bb31f:c.instructions+=3;goto B6bb31f;
case 0x6bb322:c.instructions+=2;goto B6bb322;
case 0x6bb323:c.instructions+=1;goto B6bb323;
case 0x6bb328:goto L6bb328;
case 0x6bb32b:goto L6bb32b;
case 0x6bb32e:c.instructions+=3;goto B6bb32e;
case 0x6bb32f:c.instructions+=2;goto B6bb32f;
case 0x6bb332:c.instructions+=1;goto B6bb332;
case 0x6bb334:goto L6bb334;
case 0x6bb33a:c.instructions+=2;goto B6bb33a;
case 0x6bb33c:c.instructions+=1;goto B6bb33c;
case 0x6bb33e:goto L6bb33e;
case 0x6bb340:c.instructions+=2;goto B6bb340;
case 0x6bb343:c.instructions+=1;goto B6bb343;
case 0x6bb345:goto L6bb345;
case 0x6bb348:goto L6bb348;
case 0x6bb34b:c.instructions+=4;goto B6bb34b;
case 0x6bb34e:c.instructions+=3;goto B6bb34e;
case 0x6bb351:c.instructions+=2;goto B6bb351;
case 0x6bb355:c.instructions+=1;goto B6bb355;
case 0x6bb357:goto L6bb357;
case 0x6bb35a:c.instructions+=4;goto B6bb35a;
case 0x6bb35d:c.instructions+=3;goto B6bb35d;
case 0x6bb360:c.instructions+=2;goto B6bb360;
case 0x6bb364:c.instructions+=1;goto B6bb364;
case 0x6bb366:goto L6bb366;
case 0x6bb36a:c.instructions+=1;goto B6bb36a;
case 0x6bb36c:goto L6bb36c;
case 0x6bb370:c.instructions+=1;goto B6bb370;
case 0x6bb372:goto L6bb372;
case 0x6bb373:c.instructions+=2;goto B6bb373;
case 0x6bb376:c.instructions+=1;goto B6bb376;
case 0x6bb378:goto L6bb378;
case 0x6bb37b:goto L6bb37b;
case 0x6bb37d:goto L6bb37d;
case 0x6bb381:goto L6bb381;
case 0x6bb388:c.instructions+=1;goto B6bb388;
case 0x6bb38a:goto L6bb38a;
case 0x6bb38c:c.instructions+=2;goto B6bb38c;
case 0x6bb392:c.instructions+=1;goto B6bb392;
case 0x6bb394:goto L6bb394;
case 0x6bb397:c.instructions+=1;goto B6bb397;
case 0x6bb399:goto L6bb399;
case 0x6bb39f:c.instructions+=9;goto B6bb39f;
case 0x6bb3a2:c.instructions+=8;goto B6bb3a2;
case 0x6bb3a5:c.instructions+=7;goto B6bb3a5;
case 0x6bb3ab:c.instructions+=6;goto B6bb3ab;
case 0x6bb3ae:c.instructions+=5;goto B6bb3ae;
case 0x6bb3b1:c.instructions+=4;goto B6bb3b1;
case 0x6bb3b2:c.instructions+=3;goto B6bb3b2;
case 0x6bb3b5:c.instructions+=2;goto B6bb3b5;
case 0x6bb3b9:c.instructions+=1;goto B6bb3b9;
case 0x6bb3bb:goto L6bb3bb;
case 0x6bb3be:c.instructions+=8;goto B6bb3be;
case 0x6bb3c1:c.instructions+=7;goto B6bb3c1;
case 0x6bb3c2:c.instructions+=6;goto B6bb3c2;
case 0x6bb3c3:c.instructions+=5;goto B6bb3c3;
case 0x6bb3c5:c.instructions+=4;goto B6bb3c5;
case 0x6bb3c7:c.instructions+=3;goto B6bb3c7;
case 0x6bb3c8:c.instructions+=2;goto B6bb3c8;
case 0x6bb3c9:c.instructions+=1;goto B6bb3c9;
case 0x6bb3cc:goto L6bb3cc;
case 0x6bb3ce:c.instructions+=9;goto B6bb3ce;
case 0x6bb3cf:c.instructions+=8;goto B6bb3cf;
case 0x6bb3d1:c.instructions+=7;goto B6bb3d1;
case 0x6bb3d4:c.instructions+=6;goto B6bb3d4;
case 0x6bb3d5:c.instructions+=5;goto B6bb3d5;
case 0x6bb3d7:c.instructions+=4;goto B6bb3d7;
case 0x6bb3d9:c.instructions+=3;goto B6bb3d9;
case 0x6bb3db:c.instructions+=2;goto B6bb3db;
case 0x6bb3e1:c.instructions+=1;goto B6bb3e1;
case 0x6bb3e7:goto L6bb3e7;
case 0x6bb3e8:c.instructions+=4;goto B6bb3e8;
case 0x6bb3e9:c.instructions+=3;goto B6bb3e9;
case 0x6bb3eb:c.instructions+=2;goto B6bb3eb;
case 0x6bb3ec:c.instructions+=1;goto B6bb3ec;
case 0x6bb3ef:goto L6bb3ef;
case 0x6bb3f1:goto L6bb3f1;
case 0x6bb3f4:c.instructions+=12;goto B6bb3f4;
case 0x6bb3f5:c.instructions+=11;goto B6bb3f5;
case 0x6bb3f6:c.instructions+=10;goto B6bb3f6;
case 0x6bb3f7:c.instructions+=9;goto B6bb3f7;
case 0x6bb3f8:c.instructions+=8;goto B6bb3f8;
case 0x6bb3fa:c.instructions+=7;goto B6bb3fa;
case 0x6bb400:c.instructions+=6;goto B6bb400;
case 0x6bb401:c.instructions+=5;goto B6bb401;
case 0x6bb402:c.instructions+=4;goto B6bb402;
case 0x6bb404:c.instructions+=3;goto B6bb404;
case 0x6bb406:c.instructions+=2;goto B6bb406;
case 0x6bb407:c.instructions+=1;goto B6bb407;
case 0x6bb40d:goto L6bb40d;
case 0x6bb40f:goto L6bb40f;
case 0x6bb412:c.instructions+=4;goto B6bb412;
case 0x6bb415:c.instructions+=3;goto B6bb415;
case 0x6bb418:c.instructions+=2;goto B6bb418;
case 0x6bb41b:c.instructions+=1;goto B6bb41b;
case 0x6bb421:goto L6bb421;
case 0x6bb424:c.instructions+=8;goto B6bb424;
case 0x6bb427:c.instructions+=7;goto B6bb427;
case 0x6bb42a:c.instructions+=6;goto B6bb42a;
case 0x6bb42d:c.instructions+=5;goto B6bb42d;
case 0x6bb430:c.instructions+=4;goto B6bb430;
case 0x6bb433:c.instructions+=3;goto B6bb433;
case 0x6bb436:c.instructions+=2;goto B6bb436;
case 0x6bb438:c.instructions+=1;goto B6bb438;
case 0x6bb43a:goto L6bb43a;
case 0x6bb43d:c.instructions+=3;goto B6bb43d;
case 0x6bb43f:c.instructions+=2;goto B6bb43f;
case 0x6bb441:c.instructions+=1;goto B6bb441;
case 0x6bb444:goto L6bb444;
case 0x6bb447:c.instructions+=4;goto B6bb447;
case 0x6bb449:c.instructions+=3;goto B6bb449;
case 0x6bb44b:c.instructions+=2;goto B6bb44b;
case 0x6bb44d:c.instructions+=1;goto B6bb44d;
case 0x6bb450:goto L6bb450;
case 0x6bb452:c.instructions+=2;goto B6bb452;
case 0x6bb455:c.instructions+=1;goto B6bb455;
case 0x6bb457:goto L6bb457;
case 0x6bb458:c.instructions+=2;goto B6bb458;
case 0x6bb459:c.instructions+=1;goto B6bb459;
case 0x6bb45f:goto L6bb45f;
case 0x6bb461:c.instructions+=1;goto B6bb461;
case 0x6bb467:goto L6bb467;
case 0x6bb46a:c.instructions+=1;goto B6bb46a;
case 0x6bb470:goto L6bb470;
case 0x6bb473:c.instructions+=1;goto B6bb473;
case 0x6bb479:goto L6bb479;
case 0x6bb47e:c.instructions+=4;goto B6bb47e;
case 0x6bb483:c.instructions+=3;goto B6bb483;
case 0x6bb486:c.instructions+=2;goto B6bb486;
case 0x6bb487:c.instructions+=1;goto B6bb487;
case 0x6bb48c:goto L6bb48c;
case 0x6bb48e:c.instructions+=5;goto B6bb48e;
case 0x6bb491:c.instructions+=4;goto B6bb491;
case 0x6bb492:c.instructions+=3;goto B6bb492;
case 0x6bb495:c.instructions+=2;goto B6bb495;
case 0x6bb498:c.instructions+=1;goto B6bb498;
case 0x6bb49a:goto L6bb49a;
case 0x6bb49d:c.instructions+=1;goto B6bb49d;
case 0x6bb49f:goto L6bb49f;
case 0x6bb4a2:c.instructions+=6;goto B6bb4a2;
case 0x6bb4a5:c.instructions+=5;goto B6bb4a5;
case 0x6bb4a7:c.instructions+=4;goto B6bb4a7;
case 0x6bb4af:c.instructions+=3;goto B6bb4af;
case 0x6bb4b2:c.instructions+=2;goto B6bb4b2;
case 0x6bb4b6:c.instructions+=1;goto B6bb4b6;
case 0x6bb4b8:goto L6bb4b8;
case 0x6bb4ba:c.instructions+=1;goto B6bb4ba;
case 0x6bb4bc:goto L6bb4bc;
case 0x6bb4bf:c.instructions+=1;goto B6bb4bf;
case 0x6bb4c1:goto L6bb4c1;
case 0x6bb4c4:c.instructions+=3;goto B6bb4c4;
case 0x6bb4c6:c.instructions+=2;goto B6bb4c6;
case 0x6bb4c8:c.instructions+=1;goto B6bb4c8;
case 0x6bb4cb:goto L6bb4cb;
case 0x6bb4ce:c.instructions+=4;goto B6bb4ce;
case 0x6bb4d0:c.instructions+=3;goto B6bb4d0;
case 0x6bb4d2:c.instructions+=2;goto B6bb4d2;
case 0x6bb4d4:c.instructions+=1;goto B6bb4d4;
case 0x6bb4d7:goto L6bb4d7;
case 0x6bb4da:c.instructions+=1;goto B6bb4da;
case 0x6bb4dc:goto L6bb4dc;
case 0x6bb4df:c.instructions+=1;goto B6bb4df;
case 0x6bb4e1:goto L6bb4e1;
case 0x6bb4e4:c.instructions+=1;goto B6bb4e4;
case 0x6bb4e6:goto L6bb4e6;
case 0x6bb4ed:c.instructions+=1;goto B6bb4ed;
case 0x6bb4ef:goto L6bb4ef;
case 0x6bb4f2:c.instructions+=1;goto B6bb4f2;
case 0x6bb4f4:goto L6bb4f4;
case 0x6bb4fb:goto L6bb4fb;
case 0x6bb4fe:c.instructions+=3;goto B6bb4fe;
case 0x6bb501:c.instructions+=2;goto B6bb501;
case 0x6bb503:c.instructions+=1;goto B6bb503;
case 0x6bb505:goto L6bb505;
case 0x6bb507:goto L6bb507;
case 0x6bb50a:c.instructions+=3;goto B6bb50a;
case 0x6bb50d:c.instructions+=2;goto B6bb50d;
case 0x6bb510:c.instructions+=1;goto B6bb510;
case 0x6bb516:goto L6bb516;
case 0x6bb518:goto L6bb518;
case 0x6bb51a:c.instructions+=4;goto B6bb51a;
case 0x6bb51b:c.instructions+=3;goto B6bb51b;
case 0x6bb51e:c.instructions+=2;goto B6bb51e;
case 0x6bb521:c.instructions+=1;goto B6bb521;
case 0x6bb523:goto L6bb523;
case 0x6bb525:c.instructions+=4;goto B6bb525;
case 0x6bb527:c.instructions+=3;goto B6bb527;
case 0x6bb52a:c.instructions+=2;goto B6bb52a;
case 0x6bb52e:c.instructions+=1;goto B6bb52e;
case 0x6bb535:goto L6bb535;
case 0x6bb537:c.instructions+=6;goto B6bb537;
case 0x6bb539:c.instructions+=5;goto B6bb539;
case 0x6bb53c:c.instructions+=4;goto B6bb53c;
case 0x6bb53f:c.instructions+=3;goto B6bb53f;
case 0x6bb541:c.instructions+=2;goto B6bb541;
case 0x6bb544:c.instructions+=1;goto B6bb544;
case 0x6bb546:goto L6bb546;
case 0x6bb548:c.instructions+=1;goto B6bb548;
case 0x6bb54a:goto L6bb54a;
case 0x6bb54c:c.instructions+=1;goto B6bb54c;
case 0x6bb54e:goto L6bb54e;
case 0x6bb553:c.instructions+=4;goto B6bb553;
case 0x6bb558:c.instructions+=3;goto B6bb558;
case 0x6bb55b:c.instructions+=2;goto B6bb55b;
case 0x6bb55c:c.instructions+=1;goto B6bb55c;
case 0x6bb561:goto L6bb561;
case 0x6bb564:c.instructions+=1;goto B6bb564;
case 0x6bb567:goto L6bb567;
case 0x6bb56a:goto L6bb56a;
case 0x6bb56b:c.instructions+=2;goto B6bb56b;
case 0x6bb56e:c.instructions+=1;goto B6bb56e;
case 0x6bb570:goto L6bb570;
case 0x6bb574:c.instructions+=1;goto B6bb574;
case 0x6bb576:goto L6bb576;
case 0x6bb57b:c.instructions+=4;goto B6bb57b;
case 0x6bb580:c.instructions+=3;goto B6bb580;
case 0x6bb582:c.instructions+=2;goto B6bb582;
case 0x6bb583:c.instructions+=1;goto B6bb583;
case 0x6bb588:goto L6bb588;
case 0x6bb58b:c.instructions+=1;goto B6bb58b;
case 0x6bb58e:goto L6bb58e;
case 0x6bb591:c.instructions+=5;goto B6bb591;
case 0x6bb593:c.instructions+=4;goto B6bb593;
case 0x6bb595:c.instructions+=3;goto B6bb595;
case 0x6bb596:c.instructions+=2;goto B6bb596;
case 0x6bb59b:c.instructions+=1;goto B6bb59b;
case 0x6bb59c:goto L6bb59c;
case 0x6bb59d:c.instructions+=2;goto B6bb59d;
case 0x6bb59e:c.instructions+=1;goto B6bb59e;
case 0x6bb59f:goto L6bb59f;
case 0x6bb5a2:c.instructions+=1;goto B6bb5a2;
case 0x6bb5a4:goto L6bb5a4;
case 0x6bb5a5:c.instructions+=5;goto B6bb5a5;
case 0x6bb5aa:c.instructions+=4;goto B6bb5aa;
case 0x6bb5af:c.instructions+=3;goto B6bb5af;
case 0x6bb5b3:c.instructions+=2;goto B6bb5b3;
case 0x6bb5b4:c.instructions+=1;goto B6bb5b4;
case 0x6bb5b9:goto L6bb5b9;
case 0x6bb5bc:c.instructions+=1;goto B6bb5bc;
case 0x6bb5bf:goto L6bb5bf;
case 0x6bb5c3:c.instructions+=1;goto B6bb5c3;
case 0x6bb5c5:goto L6bb5c5;
case 0x6bb5c9:c.instructions+=1;goto B6bb5c9;
case 0x6bb5cb:goto L6bb5cb;
case 0x6bb5cd:c.instructions+=26;goto B6bb5cd;
case 0x6bb5ce:c.instructions+=25;goto B6bb5ce;
case 0x6bb5d0:c.instructions+=24;goto B6bb5d0;
case 0x6bb5d3:c.instructions+=23;goto B6bb5d3;
case 0x6bb5d4:c.instructions+=22;goto B6bb5d4;
case 0x6bb5d5:c.instructions+=21;goto B6bb5d5;
case 0x6bb5d7:c.instructions+=20;goto B6bb5d7;
case 0x6bb5dd:c.instructions+=19;goto B6bb5dd;
case 0x6bb5e0:c.instructions+=18;goto B6bb5e0;
case 0x6bb5e1:c.instructions+=17;goto B6bb5e1;
case 0x6bb5e3:c.instructions+=16;goto B6bb5e3;
case 0x6bb5e6:c.instructions+=15;goto B6bb5e6;
case 0x6bb5e9:c.instructions+=14;goto B6bb5e9;
case 0x6bb5ec:c.instructions+=13;goto B6bb5ec;
case 0x6bb5ee:c.instructions+=12;goto B6bb5ee;
case 0x6bb5ef:c.instructions+=11;goto B6bb5ef;
case 0x6bb5f0:c.instructions+=10;goto B6bb5f0;
case 0x6bb5f3:c.instructions+=9;goto B6bb5f3;
case 0x6bb5f5:c.instructions+=8;goto B6bb5f5;
case 0x6bb5f8:c.instructions+=7;goto B6bb5f8;
case 0x6bb5f9:c.instructions+=6;goto B6bb5f9;
case 0x6bb5ff:c.instructions+=5;goto B6bb5ff;
case 0x6bb602:c.instructions+=4;goto B6bb602;
case 0x6bb604:c.instructions+=3;goto B6bb604;
case 0x6bb606:c.instructions+=2;goto B6bb606;
case 0x6bb60c:c.instructions+=1;goto B6bb60c;
case 0x6bb612:goto L6bb612;
case 0x6bb614:c.instructions+=1;goto B6bb614;
case 0x6bb61a:goto L6bb61a;
case 0x6bb61d:goto L6bb61d;
case 0x6bb620:c.instructions+=8;goto B6bb620;
case 0x6bb626:c.instructions+=7;goto B6bb626;
case 0x6bb628:c.instructions+=6;goto B6bb628;
case 0x6bb62b:c.instructions+=5;goto B6bb62b;
case 0x6bb62e:c.instructions+=4;goto B6bb62e;
case 0x6bb632:c.instructions+=3;goto B6bb632;
case 0x6bb638:c.instructions+=2;goto B6bb638;
case 0x6bb63c:c.instructions+=1;goto B6bb63c;
case 0x6bb63e:goto L6bb63e;
case 0x6bb641:c.instructions+=6;goto B6bb641;
case 0x6bb644:c.instructions+=5;goto B6bb644;
case 0x6bb647:c.instructions+=4;goto B6bb647;
case 0x6bb64a:c.instructions+=3;goto B6bb64a;
case 0x6bb64d:c.instructions+=2;goto B6bb64d;
case 0x6bb651:c.instructions+=1;goto B6bb651;
case 0x6bb655:goto L6bb655;
case 0x6bb658:c.instructions+=2;goto B6bb658;
case 0x6bb65c:c.instructions+=1;goto B6bb65c;
case 0x6bb65e:goto L6bb65e;
case 0x6bb661:c.instructions+=15;goto B6bb661;
case 0x6bb662:c.instructions+=14;goto B6bb662;
case 0x6bb663:c.instructions+=13;goto B6bb663;
case 0x6bb668:c.instructions+=12;goto B6bb668;
case 0x6bb669:c.instructions+=11;goto B6bb669;
case 0x6bb66a:c.instructions+=10;goto B6bb66a;
case 0x6bb66b:c.instructions+=9;goto B6bb66b;
case 0x6bb66e:c.instructions+=8;goto B6bb66e;
case 0x6bb66f:c.instructions+=7;goto B6bb66f;
case 0x6bb672:c.instructions+=6;goto B6bb672;
case 0x6bb675:c.instructions+=5;goto B6bb675;
case 0x6bb678:c.instructions+=4;goto B6bb678;
case 0x6bb67a:c.instructions+=3;goto B6bb67a;
case 0x6bb67b:c.instructions+=2;goto B6bb67b;
case 0x6bb67d:c.instructions+=1;goto B6bb67d;
case 0x6bb682:goto L6bb682;
case 0x6bb683:c.instructions+=15;goto B6bb683;
case 0x6bb684:c.instructions+=14;goto B6bb684;
case 0x6bb685:c.instructions+=13;goto B6bb685;
case 0x6bb686:c.instructions+=12;goto B6bb686;
case 0x6bb687:c.instructions+=11;goto B6bb687;
case 0x6bb68a:c.instructions+=10;goto B6bb68a;
case 0x6bb68b:c.instructions+=9;goto B6bb68b;
case 0x6bb68e:c.instructions+=8;goto B6bb68e;
case 0x6bb68f:c.instructions+=7;goto B6bb68f;
case 0x6bb692:c.instructions+=6;goto B6bb692;
case 0x6bb693:c.instructions+=5;goto B6bb693;
case 0x6bb696:c.instructions+=4;goto B6bb696;
case 0x6bb698:c.instructions+=3;goto B6bb698;
case 0x6bb69b:c.instructions+=2;goto B6bb69b;
case 0x6bb69d:c.instructions+=1;goto B6bb69d;
case 0x6bb6a2:goto L6bb6a2;
case 0x6bb6a3:c.instructions+=4;goto B6bb6a3;
case 0x6bb6a4:c.instructions+=3;goto B6bb6a4;
case 0x6bb6a5:c.instructions+=2;goto B6bb6a5;
case 0x6bb6a6:c.instructions+=1;goto B6bb6a6;
case 0x6bb6a7:goto L6bb6a7;
case 0x6bb6a9:c.instructions+=26;goto B6bb6a9;
case 0x6bb6aa:c.instructions+=25;goto B6bb6aa;
case 0x6bb6ac:c.instructions+=24;goto B6bb6ac;
case 0x6bb6af:c.instructions+=23;goto B6bb6af;
case 0x6bb6b0:c.instructions+=22;goto B6bb6b0;
case 0x6bb6b1:c.instructions+=21;goto B6bb6b1;
case 0x6bb6b3:c.instructions+=20;goto B6bb6b3;
case 0x6bb6b9:c.instructions+=19;goto B6bb6b9;
case 0x6bb6bc:c.instructions+=18;goto B6bb6bc;
case 0x6bb6bd:c.instructions+=17;goto B6bb6bd;
case 0x6bb6bf:c.instructions+=16;goto B6bb6bf;
case 0x6bb6c2:c.instructions+=15;goto B6bb6c2;
case 0x6bb6c5:c.instructions+=14;goto B6bb6c5;
case 0x6bb6c8:c.instructions+=13;goto B6bb6c8;
case 0x6bb6ca:c.instructions+=12;goto B6bb6ca;
case 0x6bb6cb:c.instructions+=11;goto B6bb6cb;
case 0x6bb6cc:c.instructions+=10;goto B6bb6cc;
case 0x6bb6cf:c.instructions+=9;goto B6bb6cf;
case 0x6bb6d1:c.instructions+=8;goto B6bb6d1;
case 0x6bb6d4:c.instructions+=7;goto B6bb6d4;
case 0x6bb6d5:c.instructions+=6;goto B6bb6d5;
case 0x6bb6db:c.instructions+=5;goto B6bb6db;
case 0x6bb6de:c.instructions+=4;goto B6bb6de;
case 0x6bb6e0:c.instructions+=3;goto B6bb6e0;
case 0x6bb6e2:c.instructions+=2;goto B6bb6e2;
case 0x6bb6e8:c.instructions+=1;goto B6bb6e8;
case 0x6bb6ee:goto L6bb6ee;
case 0x6bb6f0:c.instructions+=1;goto B6bb6f0;
case 0x6bb6f6:goto L6bb6f6;
case 0x6bb6f9:goto L6bb6f9;
case 0x6bb6fc:c.instructions+=8;goto B6bb6fc;
case 0x6bb702:c.instructions+=7;goto B6bb702;
case 0x6bb704:c.instructions+=6;goto B6bb704;
case 0x6bb707:c.instructions+=5;goto B6bb707;
case 0x6bb70a:c.instructions+=4;goto B6bb70a;
case 0x6bb70e:c.instructions+=3;goto B6bb70e;
case 0x6bb714:c.instructions+=2;goto B6bb714;
case 0x6bb718:c.instructions+=1;goto B6bb718;
case 0x6bb71a:goto L6bb71a;
case 0x6bb71d:c.instructions+=6;goto B6bb71d;
case 0x6bb720:c.instructions+=5;goto B6bb720;
case 0x6bb723:c.instructions+=4;goto B6bb723;
case 0x6bb726:c.instructions+=3;goto B6bb726;
case 0x6bb729:c.instructions+=2;goto B6bb729;
case 0x6bb72d:c.instructions+=1;goto B6bb72d;
case 0x6bb731:goto L6bb731;
case 0x6bb734:c.instructions+=2;goto B6bb734;
case 0x6bb738:c.instructions+=1;goto B6bb738;
case 0x6bb73a:goto L6bb73a;
case 0x6bb73d:c.instructions+=15;goto B6bb73d;
case 0x6bb73e:c.instructions+=14;goto B6bb73e;
case 0x6bb73f:c.instructions+=13;goto B6bb73f;
case 0x6bb744:c.instructions+=12;goto B6bb744;
case 0x6bb745:c.instructions+=11;goto B6bb745;
case 0x6bb746:c.instructions+=10;goto B6bb746;
case 0x6bb747:c.instructions+=9;goto B6bb747;
case 0x6bb74a:c.instructions+=8;goto B6bb74a;
case 0x6bb74b:c.instructions+=7;goto B6bb74b;
case 0x6bb74e:c.instructions+=6;goto B6bb74e;
case 0x6bb751:c.instructions+=5;goto B6bb751;
case 0x6bb754:c.instructions+=4;goto B6bb754;
case 0x6bb756:c.instructions+=3;goto B6bb756;
case 0x6bb757:c.instructions+=2;goto B6bb757;
case 0x6bb759:c.instructions+=1;goto B6bb759;
case 0x6bb75e:goto L6bb75e;
case 0x6bb75f:c.instructions+=15;goto B6bb75f;
case 0x6bb760:c.instructions+=14;goto B6bb760;
case 0x6bb761:c.instructions+=13;goto B6bb761;
case 0x6bb762:c.instructions+=12;goto B6bb762;
case 0x6bb763:c.instructions+=11;goto B6bb763;
case 0x6bb766:c.instructions+=10;goto B6bb766;
case 0x6bb767:c.instructions+=9;goto B6bb767;
case 0x6bb76a:c.instructions+=8;goto B6bb76a;
case 0x6bb76b:c.instructions+=7;goto B6bb76b;
case 0x6bb76e:c.instructions+=6;goto B6bb76e;
case 0x6bb76f:c.instructions+=5;goto B6bb76f;
case 0x6bb772:c.instructions+=4;goto B6bb772;
case 0x6bb774:c.instructions+=3;goto B6bb774;
case 0x6bb777:c.instructions+=2;goto B6bb777;
case 0x6bb779:c.instructions+=1;goto B6bb779;
case 0x6bb77e:goto L6bb77e;
case 0x6bb77f:c.instructions+=4;goto B6bb77f;
case 0x6bb780:c.instructions+=3;goto B6bb780;
case 0x6bb781:c.instructions+=2;goto B6bb781;
case 0x6bb782:c.instructions+=1;goto B6bb782;
case 0x6bb783:goto L6bb783;
case 0x6bb785:c.instructions+=31;goto B6bb785;
case 0x6bb786:c.instructions+=30;goto B6bb786;
case 0x6bb788:c.instructions+=29;goto B6bb788;
case 0x6bb78b:c.instructions+=28;goto B6bb78b;
case 0x6bb78c:c.instructions+=27;goto B6bb78c;
case 0x6bb78d:c.instructions+=26;goto B6bb78d;
case 0x6bb78e:c.instructions+=25;goto B6bb78e;
case 0x6bb790:c.instructions+=24;goto B6bb790;
case 0x6bb796:c.instructions+=23;goto B6bb796;
case 0x6bb799:c.instructions+=22;goto B6bb799;
case 0x6bb79b:c.instructions+=21;goto B6bb79b;
case 0x6bb79e:c.instructions+=20;goto B6bb79e;
case 0x6bb7a0:c.instructions+=19;goto B6bb7a0;
case 0x6bb7a3:c.instructions+=18;goto B6bb7a3;
case 0x6bb7a6:c.instructions+=17;goto B6bb7a6;
case 0x6bb7ac:c.instructions+=16;goto B6bb7ac;
case 0x6bb7af:c.instructions+=15;goto B6bb7af;
case 0x6bb7b2:c.instructions+=14;goto B6bb7b2;
case 0x6bb7b5:c.instructions+=13;goto B6bb7b5;
case 0x6bb7b8:c.instructions+=12;goto B6bb7b8;
case 0x6bb7bb:c.instructions+=11;goto B6bb7bb;
case 0x6bb7be:c.instructions+=10;goto B6bb7be;
case 0x6bb7c0:c.instructions+=9;goto B6bb7c0;
case 0x6bb7c3:c.instructions+=8;goto B6bb7c3;
case 0x6bb7c5:c.instructions+=7;goto B6bb7c5;
case 0x6bb7c8:c.instructions+=6;goto B6bb7c8;
case 0x6bb7cb:c.instructions+=5;goto B6bb7cb;
case 0x6bb7ce:c.instructions+=4;goto B6bb7ce;
case 0x6bb7d1:c.instructions+=3;goto B6bb7d1;
case 0x6bb7d4:c.instructions+=2;goto B6bb7d4;
case 0x6bb7d7:c.instructions+=1;goto B6bb7d7;
case 0x6bb7d9:goto L6bb7d9;
case 0x6bb7dc:c.instructions+=2;goto B6bb7dc;
case 0x6bb7df:c.instructions+=1;goto B6bb7df;
case 0x6bb7e1:goto L6bb7e1;
case 0x6bb7e4:c.instructions+=3;goto B6bb7e4;
case 0x6bb7e7:c.instructions+=2;goto B6bb7e7;
case 0x6bb7ea:c.instructions+=1;goto B6bb7ea;
case 0x6bb7f0:goto L6bb7f0;
case 0x6bb7f3:c.instructions+=2;goto B6bb7f3;
case 0x6bb7f6:c.instructions+=1;goto B6bb7f6;
case 0x6bb7fc:goto L6bb7fc;
case 0x6bb7fe:c.instructions+=8;goto B6bb7fe;
case 0x6bb800:c.instructions+=7;goto B6bb800;
case 0x6bb802:c.instructions+=6;goto B6bb802;
case 0x6bb804:c.instructions+=5;goto B6bb804;
case 0x6bb807:c.instructions+=4;goto B6bb807;
case 0x6bb808:c.instructions+=3;goto B6bb808;
case 0x6bb80e:c.instructions+=2;goto B6bb80e;
case 0x6bb810:c.instructions+=1;goto B6bb810;
case 0x6bb816:goto L6bb816;
case 0x6bb818:c.instructions+=2;goto B6bb818;
case 0x6bb81a:c.instructions+=1;goto B6bb81a;
case 0x6bb820:goto L6bb820;
case 0x6bb823:c.instructions+=2;goto B6bb823;
case 0x6bb826:c.instructions+=1;goto B6bb826;
case 0x6bb828:goto L6bb828;
case 0x6bb82b:c.instructions+=5;goto B6bb82b;
case 0x6bb82e:c.instructions+=4;goto B6bb82e;
case 0x6bb831:c.instructions+=3;goto B6bb831;
case 0x6bb833:c.instructions+=2;goto B6bb833;
case 0x6bb836:c.instructions+=1;goto B6bb836;
case 0x6bb838:goto L6bb838;
case 0x6bb83b:goto L6bb83b;
case 0x6bb83e:c.instructions+=11;goto B6bb83e;
case 0x6bb841:c.instructions+=10;goto B6bb841;
case 0x6bb843:c.instructions+=9;goto B6bb843;
case 0x6bb847:c.instructions+=8;goto B6bb847;
case 0x6bb84a:c.instructions+=7;goto B6bb84a;
case 0x6bb84d:c.instructions+=6;goto B6bb84d;
case 0x6bb851:c.instructions+=5;goto B6bb851;
case 0x6bb854:c.instructions+=4;goto B6bb854;
case 0x6bb858:c.instructions+=3;goto B6bb858;
case 0x6bb85b:c.instructions+=2;goto B6bb85b;
case 0x6bb85e:c.instructions+=1;goto B6bb85e;
case 0x6bb860:goto L6bb860;
case 0x6bb862:goto L6bb862;
case 0x6bb863:c.instructions+=13;goto B6bb863;
case 0x6bb864:c.instructions+=12;goto B6bb864;
case 0x6bb869:c.instructions+=11;goto B6bb869;
case 0x6bb86a:c.instructions+=10;goto B6bb86a;
case 0x6bb86b:c.instructions+=9;goto B6bb86b;
case 0x6bb86c:c.instructions+=8;goto B6bb86c;
case 0x6bb86f:c.instructions+=7;goto B6bb86f;
case 0x6bb872:c.instructions+=6;goto B6bb872;
case 0x6bb873:c.instructions+=5;goto B6bb873;
case 0x6bb876:c.instructions+=4;goto B6bb876;
case 0x6bb878:c.instructions+=3;goto B6bb878;
case 0x6bb879:c.instructions+=2;goto B6bb879;
case 0x6bb87b:c.instructions+=1;goto B6bb87b;
case 0x6bb880:goto L6bb880;
case 0x6bb882:c.instructions+=13;goto B6bb882;
case 0x6bb883:c.instructions+=12;goto B6bb883;
case 0x6bb884:c.instructions+=11;goto B6bb884;
case 0x6bb885:c.instructions+=10;goto B6bb885;
case 0x6bb886:c.instructions+=9;goto B6bb886;
case 0x6bb887:c.instructions+=8;goto B6bb887;
case 0x6bb88a:c.instructions+=7;goto B6bb88a;
case 0x6bb88d:c.instructions+=6;goto B6bb88d;
case 0x6bb88e:c.instructions+=5;goto B6bb88e;
case 0x6bb88f:c.instructions+=4;goto B6bb88f;
case 0x6bb892:c.instructions+=3;goto B6bb892;
case 0x6bb895:c.instructions+=2;goto B6bb895;
case 0x6bb897:c.instructions+=1;goto B6bb897;
case 0x6bb899:goto L6bb899;
case 0x6bb89b:c.instructions+=11;goto B6bb89b;
case 0x6bb89c:c.instructions+=10;goto B6bb89c;
case 0x6bb89d:c.instructions+=9;goto B6bb89d;
case 0x6bb89e:c.instructions+=8;goto B6bb89e;
case 0x6bb89f:c.instructions+=7;goto B6bb89f;
case 0x6bb8a0:c.instructions+=6;goto B6bb8a0;
case 0x6bb8a1:c.instructions+=5;goto B6bb8a1;
case 0x6bb8a4:c.instructions+=4;goto B6bb8a4;
case 0x6bb8a5:c.instructions+=3;goto B6bb8a5;
case 0x6bb8a8:c.instructions+=2;goto B6bb8a8;
case 0x6bb8ab:c.instructions+=1;goto B6bb8ab;
case 0x6bb8ad:goto L6bb8ad;
case 0x6bb8af:c.instructions+=1;goto B6bb8af;
case 0x6bb8b4:goto L6bb8b4;
case 0x6bb8b5:c.instructions+=4;goto B6bb8b5;
case 0x6bb8b6:c.instructions+=3;goto B6bb8b6;
case 0x6bb8b7:c.instructions+=2;goto B6bb8b7;
case 0x6bb8b8:c.instructions+=1;goto B6bb8b8;
case 0x6bb8b9:goto L6bb8b9;
case 0x6bb8bb:c.instructions+=31;goto B6bb8bb;
case 0x6bb8bc:c.instructions+=30;goto B6bb8bc;
case 0x6bb8be:c.instructions+=29;goto B6bb8be;
case 0x6bb8c1:c.instructions+=28;goto B6bb8c1;
case 0x6bb8c2:c.instructions+=27;goto B6bb8c2;
case 0x6bb8c3:c.instructions+=26;goto B6bb8c3;
case 0x6bb8c4:c.instructions+=25;goto B6bb8c4;
case 0x6bb8c6:c.instructions+=24;goto B6bb8c6;
case 0x6bb8cc:c.instructions+=23;goto B6bb8cc;
case 0x6bb8cf:c.instructions+=22;goto B6bb8cf;
case 0x6bb8d1:c.instructions+=21;goto B6bb8d1;
case 0x6bb8d4:c.instructions+=20;goto B6bb8d4;
case 0x6bb8d6:c.instructions+=19;goto B6bb8d6;
case 0x6bb8d9:c.instructions+=18;goto B6bb8d9;
case 0x6bb8dc:c.instructions+=17;goto B6bb8dc;
case 0x6bb8e2:c.instructions+=16;goto B6bb8e2;
case 0x6bb8e5:c.instructions+=15;goto B6bb8e5;
case 0x6bb8e8:c.instructions+=14;goto B6bb8e8;
case 0x6bb8eb:c.instructions+=13;goto B6bb8eb;
case 0x6bb8ee:c.instructions+=12;goto B6bb8ee;
case 0x6bb8f1:c.instructions+=11;goto B6bb8f1;
case 0x6bb8f4:c.instructions+=10;goto B6bb8f4;
case 0x6bb8f6:c.instructions+=9;goto B6bb8f6;
case 0x6bb8f9:c.instructions+=8;goto B6bb8f9;
case 0x6bb8fb:c.instructions+=7;goto B6bb8fb;
case 0x6bb8fe:c.instructions+=6;goto B6bb8fe;
case 0x6bb901:c.instructions+=5;goto B6bb901;
case 0x6bb904:c.instructions+=4;goto B6bb904;
case 0x6bb907:c.instructions+=3;goto B6bb907;
case 0x6bb90a:c.instructions+=2;goto B6bb90a;
case 0x6bb90d:c.instructions+=1;goto B6bb90d;
case 0x6bb90f:goto L6bb90f;
case 0x6bb912:c.instructions+=2;goto B6bb912;
case 0x6bb915:c.instructions+=1;goto B6bb915;
case 0x6bb917:goto L6bb917;
case 0x6bb91a:c.instructions+=3;goto B6bb91a;
case 0x6bb91d:c.instructions+=2;goto B6bb91d;
case 0x6bb920:c.instructions+=1;goto B6bb920;
case 0x6bb926:goto L6bb926;
case 0x6bb929:c.instructions+=2;goto B6bb929;
case 0x6bb92c:c.instructions+=1;goto B6bb92c;
case 0x6bb932:goto L6bb932;
case 0x6bb934:c.instructions+=8;goto B6bb934;
case 0x6bb936:c.instructions+=7;goto B6bb936;
case 0x6bb938:c.instructions+=6;goto B6bb938;
case 0x6bb93a:c.instructions+=5;goto B6bb93a;
case 0x6bb93d:c.instructions+=4;goto B6bb93d;
case 0x6bb93e:c.instructions+=3;goto B6bb93e;
case 0x6bb944:c.instructions+=2;goto B6bb944;
case 0x6bb946:c.instructions+=1;goto B6bb946;
case 0x6bb94c:goto L6bb94c;
case 0x6bb94e:c.instructions+=2;goto B6bb94e;
case 0x6bb950:c.instructions+=1;goto B6bb950;
case 0x6bb956:goto L6bb956;
case 0x6bb959:c.instructions+=2;goto B6bb959;
case 0x6bb95c:c.instructions+=1;goto B6bb95c;
case 0x6bb95e:goto L6bb95e;
case 0x6bb961:c.instructions+=5;goto B6bb961;
case 0x6bb964:c.instructions+=4;goto B6bb964;
case 0x6bb967:c.instructions+=3;goto B6bb967;
case 0x6bb969:c.instructions+=2;goto B6bb969;
case 0x6bb96c:c.instructions+=1;goto B6bb96c;
case 0x6bb96e:goto L6bb96e;
case 0x6bb971:goto L6bb971;
case 0x6bb974:c.instructions+=11;goto B6bb974;
case 0x6bb977:c.instructions+=10;goto B6bb977;
case 0x6bb979:c.instructions+=9;goto B6bb979;
case 0x6bb97d:c.instructions+=8;goto B6bb97d;
case 0x6bb980:c.instructions+=7;goto B6bb980;
case 0x6bb983:c.instructions+=6;goto B6bb983;
case 0x6bb987:c.instructions+=5;goto B6bb987;
case 0x6bb98a:c.instructions+=4;goto B6bb98a;
case 0x6bb98e:c.instructions+=3;goto B6bb98e;
case 0x6bb991:c.instructions+=2;goto B6bb991;
case 0x6bb994:c.instructions+=1;goto B6bb994;
case 0x6bb996:goto L6bb996;
case 0x6bb998:goto L6bb998;
case 0x6bb999:c.instructions+=13;goto B6bb999;
case 0x6bb99a:c.instructions+=12;goto B6bb99a;
case 0x6bb99f:c.instructions+=11;goto B6bb99f;
case 0x6bb9a0:c.instructions+=10;goto B6bb9a0;
case 0x6bb9a1:c.instructions+=9;goto B6bb9a1;
case 0x6bb9a2:c.instructions+=8;goto B6bb9a2;
case 0x6bb9a5:c.instructions+=7;goto B6bb9a5;
case 0x6bb9a8:c.instructions+=6;goto B6bb9a8;
case 0x6bb9a9:c.instructions+=5;goto B6bb9a9;
case 0x6bb9ac:c.instructions+=4;goto B6bb9ac;
case 0x6bb9ae:c.instructions+=3;goto B6bb9ae;
case 0x6bb9af:c.instructions+=2;goto B6bb9af;
case 0x6bb9b1:c.instructions+=1;goto B6bb9b1;
case 0x6bb9b6:goto L6bb9b6;
case 0x6bb9b8:c.instructions+=13;goto B6bb9b8;
case 0x6bb9b9:c.instructions+=12;goto B6bb9b9;
case 0x6bb9ba:c.instructions+=11;goto B6bb9ba;
case 0x6bb9bb:c.instructions+=10;goto B6bb9bb;
case 0x6bb9bc:c.instructions+=9;goto B6bb9bc;
case 0x6bb9bd:c.instructions+=8;goto B6bb9bd;
case 0x6bb9be:c.instructions+=7;goto B6bb9be;
case 0x6bb9c1:c.instructions+=6;goto B6bb9c1;
case 0x6bb9c4:c.instructions+=5;goto B6bb9c4;
case 0x6bb9c5:c.instructions+=4;goto B6bb9c5;
case 0x6bb9c8:c.instructions+=3;goto B6bb9c8;
case 0x6bb9cb:c.instructions+=2;goto B6bb9cb;
case 0x6bb9cd:c.instructions+=1;goto B6bb9cd;
case 0x6bb9cf:goto L6bb9cf;
case 0x6bb9d1:c.instructions+=11;goto B6bb9d1;
case 0x6bb9d2:c.instructions+=10;goto B6bb9d2;
case 0x6bb9d3:c.instructions+=9;goto B6bb9d3;
case 0x6bb9d4:c.instructions+=8;goto B6bb9d4;
case 0x6bb9d5:c.instructions+=7;goto B6bb9d5;
case 0x6bb9d6:c.instructions+=6;goto B6bb9d6;
case 0x6bb9d7:c.instructions+=5;goto B6bb9d7;
case 0x6bb9da:c.instructions+=4;goto B6bb9da;
case 0x6bb9db:c.instructions+=3;goto B6bb9db;
case 0x6bb9de:c.instructions+=2;goto B6bb9de;
case 0x6bb9e1:c.instructions+=1;goto B6bb9e1;
case 0x6bb9e3:goto L6bb9e3;
case 0x6bb9e5:c.instructions+=1;goto B6bb9e5;
case 0x6bb9ea:goto L6bb9ea;
case 0x6bb9eb:c.instructions+=4;goto B6bb9eb;
case 0x6bb9ec:c.instructions+=3;goto B6bb9ec;
case 0x6bb9ed:c.instructions+=2;goto B6bb9ed;
case 0x6bb9ee:c.instructions+=1;goto B6bb9ee;
case 0x6bb9ef:goto L6bb9ef;
case 0x6bb9f1:c.instructions+=11;goto B6bb9f1;
case 0x6bb9f2:c.instructions+=10;goto B6bb9f2;
case 0x6bb9f4:c.instructions+=9;goto B6bb9f4;
case 0x6bb9f7:c.instructions+=8;goto B6bb9f7;
case 0x6bb9f8:c.instructions+=7;goto B6bb9f8;
case 0x6bb9fb:c.instructions+=6;goto B6bb9fb;
case 0x6bb9fc:c.instructions+=5;goto B6bb9fc;
case 0x6bb9fd:c.instructions+=4;goto B6bb9fd;
case 0x6bba00:c.instructions+=3;goto B6bba00;
case 0x6bba02:c.instructions+=2;goto B6bba02;
case 0x6bba04:c.instructions+=1;goto B6bba04;
case 0x6bba07:goto L6bba07;
case 0x6bba0a:c.instructions+=4;goto B6bba0a;
case 0x6bba0d:c.instructions+=3;goto B6bba0d;
case 0x6bba0f:c.instructions+=2;goto B6bba0f;
case 0x6bba11:c.instructions+=1;goto B6bba11;
case 0x6bba14:goto L6bba14;
case 0x6bba16:c.instructions+=4;goto B6bba16;
case 0x6bba1c:c.instructions+=3;goto B6bba1c;
case 0x6bba1e:c.instructions+=2;goto B6bba1e;
case 0x6bba21:c.instructions+=1;goto B6bba21;
case 0x6bba27:goto L6bba27;
case 0x6bba2b:c.instructions+=1;goto B6bba2b;
case 0x6bba31:goto L6bba31;
case 0x6bba38:c.instructions+=1;goto B6bba38;
case 0x6bba3e:goto L6bba3e;
case 0x6bba41:c.instructions+=2;goto B6bba41;
case 0x6bba43:c.instructions+=1;goto B6bba43;
case 0x6bba48:goto L6bba48;
case 0x6bba49:c.instructions+=6;goto B6bba49;
case 0x6bba4b:c.instructions+=5;goto B6bba4b;
case 0x6bba4e:c.instructions+=4;goto B6bba4e;
case 0x6bba53:c.instructions+=3;goto B6bba53;
case 0x6bba55:c.instructions+=2;goto B6bba55;
case 0x6bba56:c.instructions+=1;goto B6bba56;
case 0x6bba5b:goto L6bba5b;
case 0x6bba5e:c.instructions+=7;goto B6bba5e;
case 0x6bba60:c.instructions+=6;goto B6bba60;
case 0x6bba63:c.instructions+=5;goto B6bba63;
case 0x6bba66:c.instructions+=4;goto B6bba66;
case 0x6bba6c:c.instructions+=3;goto B6bba6c;
case 0x6bba6d:c.instructions+=2;goto B6bba6d;
case 0x6bba71:c.instructions+=1;goto B6bba71;
case 0x6bba76:goto L6bba76;
case 0x6bba78:c.instructions+=1;goto B6bba78;
case 0x6bba7e:goto L6bba7e;
case 0x6bba84:c.instructions+=2;goto B6bba84;
case 0x6bba8b:c.instructions+=1;goto B6bba8b;
case 0x6bba91:goto L6bba91;
case 0x6bba94:c.instructions+=2;goto B6bba94;
case 0x6bba96:c.instructions+=1;goto B6bba96;
case 0x6bba98:goto L6bba98;
case 0x6bba9c:c.instructions+=1;goto B6bba9c;
case 0x6bba9e:goto L6bba9e;
case 0x6bbaa1:c.instructions+=2;goto B6bbaa1;
case 0x6bbaa5:c.instructions+=1;goto B6bbaa5;
case 0x6bbaa7:goto L6bbaa7;
case 0x6bbaaa:c.instructions+=1;goto B6bbaaa;
case 0x6bbaad:goto L6bbaad;
case 0x6bbaaf:c.instructions+=3;goto B6bbaaf;
case 0x6bbab0:c.instructions+=2;goto B6bbab0;
case 0x6bbab2:c.instructions+=1;goto B6bbab2;
case 0x6bbab4:goto L6bbab4;
case 0x6bbab6:c.instructions+=3;goto B6bbab6;
case 0x6bbab9:c.instructions+=2;goto B6bbab9;
case 0x6bbaba:c.instructions+=1;goto B6bbaba;
case 0x6bbabf:goto L6bbabf;
case 0x6bbac1:c.instructions+=3;goto B6bbac1;
case 0x6bbac2:c.instructions+=2;goto B6bbac2;
case 0x6bbac5:c.instructions+=1;goto B6bbac5;
case 0x6bbac7:goto L6bbac7;
case 0x6bbacc:c.instructions+=1;goto B6bbacc;
case 0x6bbad1:goto L6bbad1;
case 0x6bbad4:c.instructions+=3;goto B6bbad4;
case 0x6bbad9:c.instructions+=2;goto B6bbad9;
case 0x6bbada:c.instructions+=1;goto B6bbada;
case 0x6bbadf:goto L6bbadf;
case 0x6bbae2:c.instructions+=5;goto B6bbae2;
case 0x6bbae4:c.instructions+=4;goto B6bbae4;
case 0x6bbae7:c.instructions+=3;goto B6bbae7;
case 0x6bbaed:c.instructions+=2;goto B6bbaed;
case 0x6bbaf0:c.instructions+=1;goto B6bbaf0;
case 0x6bbaf5:goto L6bbaf5;
case 0x6bbaf8:c.instructions+=2;goto B6bbaf8;
case 0x6bbafa:c.instructions+=1;goto B6bbafa;
case 0x6bbaff:goto L6bbaff;
case 0x6bbb01:c.instructions+=2;goto B6bbb01;
case 0x6bbb02:c.instructions+=1;goto B6bbb02;
case 0x6bbb04:goto L6bbb04;
case 0x6bbb06:c.instructions+=1;goto B6bbb06;
case 0x6bbb0b:goto L6bbb0b;
case 0x6bbb11:goto L6bbb11;
case 0x6bbb14:c.instructions+=2;goto B6bbb14;
case 0x6bbb16:c.instructions+=1;goto B6bbb16;
case 0x6bbb1c:goto L6bbb1c;
case 0x6bbb1f:c.instructions+=2;goto B6bbb1f;
case 0x6bbb21:c.instructions+=1;goto B6bbb21;
case 0x6bbb26:goto L6bbb26;
case 0x6bbb2a:c.instructions+=1;goto B6bbb2a;
case 0x6bbb2c:goto L6bbb2c;
case 0x6bbb2f:c.instructions+=1;goto B6bbb2f;
case 0x6bbb35:goto L6bbb35;
case 0x6bbb38:c.instructions+=4;goto B6bbb38;
case 0x6bbb3a:c.instructions+=3;goto B6bbb3a;
case 0x6bbb41:c.instructions+=2;goto B6bbb41;
case 0x6bbb48:c.instructions+=1;goto B6bbb48;
case 0x6bbb4a:goto L6bbb4a;
case 0x6bbb4e:c.instructions+=1;goto B6bbb4e;
case 0x6bbb54:goto L6bbb54;
case 0x6bbb57:c.instructions+=1;goto B6bbb57;
case 0x6bbb5d:goto L6bbb5d;
case 0x6bbb60:c.instructions+=4;goto B6bbb60;
case 0x6bbb63:c.instructions+=3;goto B6bbb63;
case 0x6bbb65:c.instructions+=2;goto B6bbb65;
case 0x6bbb6c:c.instructions+=1;goto B6bbb6c;
case 0x6bbb73:goto L6bbb73;
case 0x6bbb75:c.instructions+=2;goto B6bbb75;
case 0x6bbb78:c.instructions+=1;goto B6bbb78;
case 0x6bbb7a:goto L6bbb7a;
case 0x6bbb7c:c.instructions+=2;goto B6bbb7c;
case 0x6bbb7f:c.instructions+=1;goto B6bbb7f;
case 0x6bbb81:goto L6bbb81;
case 0x6bbb82:c.instructions+=1;goto B6bbb82;
case 0x6bbb84:goto L6bbb84;
case 0x6bbb85:c.instructions+=1;goto B6bbb85;
case 0x6bbb87:goto L6bbb87;
case 0x6bbb88:c.instructions+=1;goto B6bbb88;
case 0x6bbb8a:goto L6bbb8a;
case 0x6bbb8e:c.instructions+=1;goto B6bbb8e;
case 0x6bbb90:goto L6bbb90;
case 0x6bbb94:c.instructions+=1;goto B6bbb94;
case 0x6bbb96:goto L6bbb96;
case 0x6bbb9a:c.instructions+=1;goto B6bbb9a;
case 0x6bbb9c:goto L6bbb9c;
case 0x6bbba0:goto L6bbba0;
case 0x6bbba1:c.instructions+=2;goto B6bbba1;
case 0x6bbba3:c.instructions+=1;goto B6bbba3;
case 0x6bbba5:goto L6bbba5;
case 0x6bbba9:c.instructions+=1;goto B6bbba9;
case 0x6bbbab:goto L6bbbab;
case 0x6bbbb2:c.instructions+=1;goto B6bbbb2;
case 0x6bbbb4:goto L6bbbb4;
case 0x6bbbb8:c.instructions+=1;goto B6bbbb8;
case 0x6bbbba:goto L6bbbba;
case 0x6bbbbe:c.instructions+=1;goto B6bbbbe;
case 0x6bbbc0:goto L6bbbc0;
case 0x6bbbc4:goto L6bbbc4;
case 0x6bbbc8:c.instructions+=2;goto B6bbbc8;
case 0x6bbbcc:c.instructions+=1;goto B6bbbcc;
case 0x6bbbce:goto L6bbbce;
case 0x6bbbd5:goto L6bbbd5;
case 0x6bbbda:c.instructions+=2;goto B6bbbda;
case 0x6bbbdc:c.instructions+=1;goto B6bbbdc;
case 0x6bbbe1:goto L6bbbe1;
case 0x6bbbe3:c.instructions+=1;goto B6bbbe3;
case 0x6bbbe9:goto L6bbbe9;
case 0x6bbbee:c.instructions+=2;goto B6bbbee;
case 0x6bbbf0:c.instructions+=1;goto B6bbbf0;
case 0x6bbbf5:goto L6bbbf5;
case 0x6bbbf7:c.instructions+=1;goto B6bbbf7;
case 0x6bbbfd:goto L6bbbfd;
case 0x6bbc04:c.instructions+=1;goto B6bbc04;
case 0x6bbc06:goto L6bbc06;
case 0x6bbc0a:c.instructions+=9;goto B6bbc0a;
case 0x6bbc0e:c.instructions+=8;goto B6bbc0e;
case 0x6bbc11:c.instructions+=7;goto B6bbc11;
case 0x6bbc15:c.instructions+=6;goto B6bbc15;
case 0x6bbc18:c.instructions+=5;goto B6bbc18;
case 0x6bbc19:c.instructions+=4;goto B6bbc19;
case 0x6bbc1a:c.instructions+=3;goto B6bbc1a;
case 0x6bbc1b:c.instructions+=2;goto B6bbc1b;
case 0x6bbc1c:c.instructions+=1;goto B6bbc1c;
case 0x6bbc1e:goto L6bbc1e;
case 0x6bbc21:c.instructions+=1;goto B6bbc21;
case 0x6bbc24:goto L6bbc24;
case 0x6bbc26:c.instructions+=2;goto B6bbc26;
case 0x6bbc29:c.instructions+=1;goto B6bbc29;
case 0x6bbc2b:goto L6bbc2b;
case 0x6bbc2e:c.instructions+=2;goto B6bbc2e;
case 0x6bbc31:c.instructions+=1;goto B6bbc31;
case 0x6bbc33:goto L6bbc33;
case 0x6bbc36:c.instructions+=2;goto B6bbc36;
case 0x6bbc39:c.instructions+=1;goto B6bbc39;
case 0x6bbc3b:goto L6bbc3b;
case 0x6bbc3e:c.instructions+=2;goto B6bbc3e;
case 0x6bbc41:c.instructions+=1;goto B6bbc41;
case 0x6bbc45:goto L6bbc45;
case 0x6bbc48:c.instructions+=4;goto B6bbc48;
case 0x6bbc4b:c.instructions+=3;goto B6bbc4b;
case 0x6bbc4e:c.instructions+=2;goto B6bbc4e;
case 0x6bbc51:c.instructions+=1;goto B6bbc51;
case 0x6bbc53:goto L6bbc53;
case 0x6bbc56:c.instructions+=1;goto B6bbc56;
case 0x6bbc58:goto L6bbc58;
case 0x6bbc5c:c.instructions+=2;goto B6bbc5c;
case 0x6bbc5f:c.instructions+=1;goto B6bbc5f;
case 0x6bbc61:goto L6bbc61;
case 0x6bbc65:c.instructions+=1;goto B6bbc65;
case 0x6bbc66:goto L6bbc66;
case 0x6bbc67:c.instructions+=2;goto B6bbc67;
case 0x6bbc6a:c.instructions+=1;goto B6bbc6a;
case 0x6bbc6c:goto L6bbc6c;
case 0x6bbc6e:c.instructions+=8;goto B6bbc6e;
case 0x6bbc70:c.instructions+=7;goto B6bbc70;
case 0x6bbc73:c.instructions+=6;goto B6bbc73;
case 0x6bbc74:c.instructions+=5;goto B6bbc74;
case 0x6bbc75:c.instructions+=4;goto B6bbc75;
case 0x6bbc78:c.instructions+=3;goto B6bbc78;
case 0x6bbc79:c.instructions+=2;goto B6bbc79;
case 0x6bbc7b:c.instructions+=1;goto B6bbc7b;
case 0x6bbc7e:goto L6bbc7e;
case 0x6bbc80:c.instructions+=1;goto B6bbc80;
case 0x6bbc82:goto L6bbc82;
case 0x6bbc85:goto L6bbc85;
case 0x6bbc88:c.instructions+=15;goto B6bbc88;
case 0x6bbc8a:c.instructions+=14;goto B6bbc8a;
case 0x6bbc8c:c.instructions+=13;goto B6bbc8c;
case 0x6bbc8f:c.instructions+=12;goto B6bbc8f;
case 0x6bbc92:c.instructions+=11;goto B6bbc92;
case 0x6bbc95:c.instructions+=10;goto B6bbc95;
case 0x6bbc97:c.instructions+=9;goto B6bbc97;
case 0x6bbc9a:c.instructions+=8;goto B6bbc9a;
case 0x6bbc9c:c.instructions+=7;goto B6bbc9c;
case 0x6bbc9f:c.instructions+=6;goto B6bbc9f;
case 0x6bbca5:c.instructions+=5;goto B6bbca5;
case 0x6bbca7:c.instructions+=4;goto B6bbca7;
case 0x6bbcaa:c.instructions+=3;goto B6bbcaa;
case 0x6bbcab:c.instructions+=2;goto B6bbcab;
case 0x6bbcad:c.instructions+=1;goto B6bbcad;
case 0x6bbcb0:goto L6bbcb0;
case 0x6bbcb2:c.instructions+=1;goto B6bbcb2;
case 0x6bbcb4:goto L6bbcb4;
case 0x6bbcb6:c.instructions+=1;goto B6bbcb6;
case 0x6bbcbb:goto L6bbcbb;
case 0x6bbcbd:c.instructions+=1;goto B6bbcbd;
case 0x6bbcbf:goto L6bbcbf;
case 0x6bbcc1:c.instructions+=1;goto B6bbcc1;
case 0x6bbcc3:goto L6bbcc3;
case 0x6bbcc8:goto L6bbcc8;
case 0x6bbcc9:c.instructions+=4;goto B6bbcc9;
case 0x6bbcca:c.instructions+=3;goto B6bbcca;
case 0x6bbccb:c.instructions+=2;goto B6bbccb;
case 0x6bbccc:c.instructions+=1;goto B6bbccc;
case 0x6bbccf:goto L6bbccf;
case 0x6bbcd1:c.instructions+=10;goto B6bbcd1;
case 0x6bbcd2:c.instructions+=9;goto B6bbcd2;
case 0x6bbcd4:c.instructions+=8;goto B6bbcd4;
case 0x6bbcd5:c.instructions+=7;goto B6bbcd5;
case 0x6bbcd6:c.instructions+=6;goto B6bbcd6;
case 0x6bbcd7:c.instructions+=5;goto B6bbcd7;
case 0x6bbcda:c.instructions+=4;goto B6bbcda;
case 0x6bbcdd:c.instructions+=3;goto B6bbcdd;
case 0x6bbcdf:c.instructions+=2;goto B6bbcdf;
case 0x6bbce1:c.instructions+=1;goto B6bbce1;
case 0x6bbce4:goto L6bbce4;
case 0x6bbce7:c.instructions+=4;goto B6bbce7;
case 0x6bbce9:c.instructions+=3;goto B6bbce9;
case 0x6bbceb:c.instructions+=2;goto B6bbceb;
case 0x6bbced:c.instructions+=1;goto B6bbced;
case 0x6bbcf0:goto L6bbcf0;
case 0x6bbcf3:c.instructions+=3;goto B6bbcf3;
case 0x6bbcf6:c.instructions+=2;goto B6bbcf6;
case 0x6bbcf8:c.instructions+=1;goto B6bbcf8;
case 0x6bbcfa:goto L6bbcfa;
case 0x6bbcfd:c.instructions+=1;goto B6bbcfd;
case 0x6bbcff:goto L6bbcff;
case 0x6bbd02:c.instructions+=2;goto B6bbd02;
case 0x6bbd08:c.instructions+=1;goto B6bbd08;
case 0x6bbd0a:goto L6bbd0a;
case 0x6bbd0d:c.instructions+=1;goto B6bbd0d;
case 0x6bbd0f:goto L6bbd0f;
case 0x6bbd12:c.instructions+=1;goto B6bbd12;
case 0x6bbd14:goto L6bbd14;
case 0x6bbd17:c.instructions+=2;goto B6bbd17;
case 0x6bbd1d:c.instructions+=1;goto B6bbd1d;
case 0x6bbd1f:goto L6bbd1f;
case 0x6bbd25:c.instructions+=1;goto B6bbd25;
case 0x6bbd27:goto L6bbd27;
case 0x6bbd2a:c.instructions+=1;goto B6bbd2a;
case 0x6bbd2d:goto L6bbd2d;
case 0x6bbd2f:c.instructions+=1;goto B6bbd2f;
case 0x6bbd31:goto L6bbd31;
case 0x6bbd36:goto L6bbd36;
case 0x6bbd37:c.instructions+=4;goto B6bbd37;
case 0x6bbd38:c.instructions+=3;goto B6bbd38;
case 0x6bbd39:c.instructions+=2;goto B6bbd39;
case 0x6bbd3a:c.instructions+=1;goto B6bbd3a;
case 0x6bbd3d:goto L6bbd3d;
case 0x6bbd3f:c.instructions+=12;goto B6bbd3f;
case 0x6bbd40:c.instructions+=11;goto B6bbd40;
case 0x6bbd42:c.instructions+=10;goto B6bbd42;
case 0x6bbd43:c.instructions+=9;goto B6bbd43;
case 0x6bbd44:c.instructions+=8;goto B6bbd44;
case 0x6bbd45:c.instructions+=7;goto B6bbd45;
case 0x6bbd46:c.instructions+=6;goto B6bbd46;
case 0x6bbd49:c.instructions+=5;goto B6bbd49;
case 0x6bbd4c:c.instructions+=4;goto B6bbd4c;
case 0x6bbd4e:c.instructions+=3;goto B6bbd4e;
case 0x6bbd50:c.instructions+=2;goto B6bbd50;
case 0x6bbd57:c.instructions+=1;goto B6bbd57;
case 0x6bbd5a:goto L6bbd5a;
case 0x6bbd5d:c.instructions+=4;goto B6bbd5d;
case 0x6bbd5f:c.instructions+=3;goto B6bbd5f;
case 0x6bbd61:c.instructions+=2;goto B6bbd61;
case 0x6bbd63:c.instructions+=1;goto B6bbd63;
case 0x6bbd66:goto L6bbd66;
case 0x6bbd69:c.instructions+=3;goto B6bbd69;
case 0x6bbd6c:c.instructions+=2;goto B6bbd6c;
case 0x6bbd6e:c.instructions+=1;goto B6bbd6e;
case 0x6bbd70:goto L6bbd70;
case 0x6bbd73:c.instructions+=1;goto B6bbd73;
case 0x6bbd75:goto L6bbd75;
case 0x6bbd78:c.instructions+=2;goto B6bbd78;
case 0x6bbd7e:c.instructions+=1;goto B6bbd7e;
case 0x6bbd80:goto L6bbd80;
case 0x6bbd83:c.instructions+=1;goto B6bbd83;
case 0x6bbd85:goto L6bbd85;
case 0x6bbd87:c.instructions+=1;goto B6bbd87;
case 0x6bbd89:goto L6bbd89;
case 0x6bbd8c:c.instructions+=2;goto B6bbd8c;
case 0x6bbd92:c.instructions+=1;goto B6bbd92;
case 0x6bbd94:goto L6bbd94;
case 0x6bbd9a:c.instructions+=1;goto B6bbd9a;
case 0x6bbd9c:goto L6bbd9c;
case 0x6bbd9f:c.instructions+=2;goto B6bbd9f;
case 0x6bbda2:c.instructions+=1;goto B6bbda2;
case 0x6bbda6:goto L6bbda6;
case 0x6bbda9:c.instructions+=2;goto B6bbda9;
case 0x6bbdab:c.instructions+=1;goto B6bbdab;
case 0x6bbdad:goto L6bbdad;
case 0x6bbdb0:c.instructions+=1;goto B6bbdb0;
case 0x6bbdb2:goto L6bbdb2;
case 0x6bbdb4:c.instructions+=1;goto B6bbdb4;
case 0x6bbdb6:goto L6bbdb6;
case 0x6bbdbb:goto L6bbdbb;
case 0x6bbdbc:c.instructions+=4;goto B6bbdbc;
case 0x6bbdbd:c.instructions+=3;goto B6bbdbd;
case 0x6bbdbe:c.instructions+=2;goto B6bbdbe;
case 0x6bbdbf:c.instructions+=1;goto B6bbdbf;
case 0x6bbdc2:goto L6bbdc2;
case 0x6bbdc4:c.instructions+=7;goto B6bbdc4;
case 0x6bbdc5:c.instructions+=6;goto B6bbdc5;
case 0x6bbdc7:c.instructions+=5;goto B6bbdc7;
case 0x6bbdca:c.instructions+=4;goto B6bbdca;
case 0x6bbdcd:c.instructions+=3;goto B6bbdcd;
case 0x6bbdce:c.instructions+=2;goto B6bbdce;
case 0x6bbdd0:c.instructions+=1;goto B6bbdd0;
case 0x6bbdd2:goto L6bbdd2;
case 0x6bbdd4:c.instructions+=2;goto B6bbdd4;
case 0x6bbdd7:c.instructions+=1;goto B6bbdd7;
case 0x6bbdd9:goto L6bbdd9;
case 0x6bbddc:c.instructions+=1;goto B6bbddc;
case 0x6bbdde:goto L6bbdde;
case 0x6bbddf:c.instructions+=3;goto B6bbddf;
case 0x6bbde2:c.instructions+=2;goto B6bbde2;
case 0x6bbde5:c.instructions+=1;goto B6bbde5;
case 0x6bbde7:goto L6bbde7;
case 0x6bbde9:c.instructions+=1;goto B6bbde9;
case 0x6bbdea:goto L6bbdea;
case 0x6bbdeb:c.instructions+=2;goto B6bbdeb;
case 0x6bbdec:c.instructions+=1;goto B6bbdec;
case 0x6bbdef:goto L6bbdef;
case 0x6bbdf1:c.instructions+=1;goto B6bbdf1;
case 0x6bbdf3:goto L6bbdf3;
case 0x6bbdf5:c.instructions+=9;goto B6bbdf5;
case 0x6bbdf6:c.instructions+=8;goto B6bbdf6;
case 0x6bbdf8:c.instructions+=7;goto B6bbdf8;
case 0x6bbdfb:c.instructions+=6;goto B6bbdfb;
case 0x6bbdfe:c.instructions+=5;goto B6bbdfe;
case 0x6bbe02:c.instructions+=4;goto B6bbe02;
case 0x6bbe03:c.instructions+=3;goto B6bbe03;
case 0x6bbe04:c.instructions+=2;goto B6bbe04;
case 0x6bbe09:c.instructions+=1;goto B6bbe09;
case 0x6bbe0a:goto L6bbe0a;
case 0x6bbe0d:c.instructions+=4;goto B6bbe0d;
case 0x6bbe0f:c.instructions+=3;goto B6bbe0f;
case 0x6bbe11:c.instructions+=2;goto B6bbe11;
case 0x6bbe12:c.instructions+=1;goto B6bbe12;
case 0x6bbe13:goto L6bbe13;
case 0x6bbe16:c.instructions+=2;goto B6bbe16;
case 0x6bbe18:c.instructions+=1;goto B6bbe18;
case 0x6bbe1a:goto L6bbe1a;
case 0x6bbe1d:c.instructions+=1;goto B6bbe1d;
case 0x6bbe1f:goto L6bbe1f;
case 0x6bbe21:goto L6bbe21;
case 0x6bbe24:c.instructions+=3;goto B6bbe24;
case 0x6bbe27:c.instructions+=2;goto B6bbe27;
case 0x6bbe28:c.instructions+=1;goto B6bbe28;
case 0x6bbe2a:goto L6bbe2a;
case 0x6bbe2c:c.instructions+=1;goto B6bbe2c;
case 0x6bbe2e:goto L6bbe2e;
case 0x6bbe32:c.instructions+=2;goto B6bbe32;
case 0x6bbe39:c.instructions+=1;goto B6bbe39;
case 0x6bbe3b:goto L6bbe3b;
case 0x6bbe3d:goto L6bbe3d;
case 0x6bbe3e:c.instructions+=4;goto B6bbe3e;
case 0x6bbe3f:c.instructions+=3;goto B6bbe3f;
case 0x6bbe40:c.instructions+=2;goto B6bbe40;
case 0x6bbe41:c.instructions+=1;goto B6bbe41;
case 0x6bbe44:goto L6bbe44;
case 0x6bbe46:c.instructions+=2;goto B6bbe46;
case 0x6bbe47:c.instructions+=1;goto B6bbe47;
case 0x6bbe49:goto L6bbe49;
case 0x6bbe4b:c.instructions+=10;goto B6bbe4b;
case 0x6bbe4c:c.instructions+=9;goto B6bbe4c;
case 0x6bbe4e:c.instructions+=8;goto B6bbe4e;
case 0x6bbe51:c.instructions+=7;goto B6bbe51;
case 0x6bbe52:c.instructions+=6;goto B6bbe52;
case 0x6bbe53:c.instructions+=5;goto B6bbe53;
case 0x6bbe55:c.instructions+=4;goto B6bbe55;
case 0x6bbe57:c.instructions+=3;goto B6bbe57;
case 0x6bbe5a:c.instructions+=2;goto B6bbe5a;
case 0x6bbe5b:c.instructions+=1;goto B6bbe5b;
case 0x6bbe5d:goto L6bbe5d;
case 0x6bbe63:c.instructions+=9;goto B6bbe63;
case 0x6bbe66:c.instructions+=8;goto B6bbe66;
case 0x6bbe69:c.instructions+=7;goto B6bbe69;
case 0x6bbe6b:c.instructions+=6;goto B6bbe6b;
case 0x6bbe6e:c.instructions+=5;goto B6bbe6e;
case 0x6bbe71:c.instructions+=4;goto B6bbe71;
case 0x6bbe74:c.instructions+=3;goto B6bbe74;
case 0x6bbe77:c.instructions+=2;goto B6bbe77;
case 0x6bbe7a:c.instructions+=1;goto B6bbe7a;
case 0x6bbe7d:goto L6bbe7d;
case 0x6bbe80:c.instructions+=6;goto B6bbe80;
case 0x6bbe83:c.instructions+=5;goto B6bbe83;
case 0x6bbe86:c.instructions+=4;goto B6bbe86;
case 0x6bbe89:c.instructions+=3;goto B6bbe89;
case 0x6bbe8c:c.instructions+=2;goto B6bbe8c;
case 0x6bbe8f:c.instructions+=1;goto B6bbe8f;
case 0x6bbe91:goto L6bbe91;
case 0x6bbe97:c.instructions+=11;goto B6bbe97;
case 0x6bbe9a:c.instructions+=10;goto B6bbe9a;
case 0x6bbe9d:c.instructions+=9;goto B6bbe9d;
case 0x6bbea0:c.instructions+=8;goto B6bbea0;
case 0x6bbea3:c.instructions+=7;goto B6bbea3;
case 0x6bbea6:c.instructions+=6;goto B6bbea6;
case 0x6bbea8:c.instructions+=5;goto B6bbea8;
case 0x6bbeab:c.instructions+=4;goto B6bbeab;
case 0x6bbeae:c.instructions+=3;goto B6bbeae;
case 0x6bbeb1:c.instructions+=2;goto B6bbeb1;
case 0x6bbeb4:c.instructions+=1;goto B6bbeb4;
case 0x6bbeb6:goto L6bbeb6;
case 0x6bbeb9:c.instructions+=5;goto B6bbeb9;
case 0x6bbebc:c.instructions+=4;goto B6bbebc;
case 0x6bbebf:c.instructions+=3;goto B6bbebf;
case 0x6bbec0:c.instructions+=2;goto B6bbec0;
case 0x6bbec3:c.instructions+=1;goto B6bbec3;
case 0x6bbec5:goto L6bbec5;
case 0x6bbec8:goto L6bbec8;
case 0x6bbece:goto L6bbece;
case 0x6bbed2:c.instructions+=14;goto B6bbed2;
case 0x6bbed8:c.instructions+=13;goto B6bbed8;
case 0x6bbedb:c.instructions+=12;goto B6bbedb;
case 0x6bbede:c.instructions+=11;goto B6bbede;
case 0x6bbee1:c.instructions+=10;goto B6bbee1;
case 0x6bbee4:c.instructions+=9;goto B6bbee4;
case 0x6bbee5:c.instructions+=8;goto B6bbee5;
case 0x6bbee6:c.instructions+=7;goto B6bbee6;
case 0x6bbee7:c.instructions+=6;goto B6bbee7;
case 0x6bbee9:c.instructions+=5;goto B6bbee9;
case 0x6bbeeb:c.instructions+=4;goto B6bbeeb;
case 0x6bbeee:c.instructions+=3;goto B6bbeee;
case 0x6bbef1:c.instructions+=2;goto B6bbef1;
case 0x6bbef2:c.instructions+=1;goto B6bbef2;
case 0x6bbef4:goto L6bbef4;
case 0x6bbef7:c.instructions+=7;goto B6bbef7;
case 0x6bbefa:c.instructions+=6;goto B6bbefa;
case 0x6bbefd:c.instructions+=5;goto B6bbefd;
case 0x6bbf00:c.instructions+=4;goto B6bbf00;
case 0x6bbf01:c.instructions+=3;goto B6bbf01;
case 0x6bbf04:c.instructions+=2;goto B6bbf04;
case 0x6bbf08:c.instructions+=1;goto B6bbf08;
case 0x6bbf0a:goto L6bbf0a;
case 0x6bbf0c:goto L6bbf0c;
case 0x6bbf0e:c.instructions+=6;goto B6bbf0e;
case 0x6bbf13:c.instructions+=5;goto B6bbf13;
case 0x6bbf16:c.instructions+=4;goto B6bbf16;
case 0x6bbf18:c.instructions+=3;goto B6bbf18;
case 0x6bbf19:c.instructions+=2;goto B6bbf19;
case 0x6bbf1c:c.instructions+=1;goto B6bbf1c;
case 0x6bbf1e:goto L6bbf1e;
case 0x6bbf20:c.instructions+=8;goto B6bbf20;
case 0x6bbf22:c.instructions+=7;goto B6bbf22;
case 0x6bbf24:c.instructions+=6;goto B6bbf24;
case 0x6bbf26:c.instructions+=5;goto B6bbf26;
case 0x6bbf29:c.instructions+=4;goto B6bbf29;
case 0x6bbf2a:c.instructions+=3;goto B6bbf2a;
case 0x6bbf30:c.instructions+=2;goto B6bbf30;
case 0x6bbf32:c.instructions+=1;goto B6bbf32;
case 0x6bbf38:goto L6bbf38;
case 0x6bbf3a:c.instructions+=1;goto B6bbf3a;
case 0x6bbf40:goto L6bbf40;
case 0x6bbf42:c.instructions+=1;goto B6bbf42;
case 0x6bbf47:goto L6bbf47;
case 0x6bbf49:c.instructions+=1;goto B6bbf49;
case 0x6bbf4b:goto L6bbf4b;
case 0x6bbf4d:c.instructions+=1;goto B6bbf4d;
case 0x6bbf52:goto L6bbf52;
case 0x6bbf54:goto L6bbf54;
case 0x6bbf56:goto L6bbf56;
case 0x6bbf58:c.instructions+=3;goto B6bbf58;
case 0x6bbf5b:c.instructions+=2;goto B6bbf5b;
case 0x6bbf5d:c.instructions+=1;goto B6bbf5d;
case 0x6bbf5f:goto L6bbf5f;
case 0x6bbf64:c.instructions+=1;goto B6bbf64;
case 0x6bbf69:goto L6bbf69;
case 0x6bbf6b:c.instructions+=7;goto B6bbf6b;
case 0x6bbf6c:c.instructions+=6;goto B6bbf6c;
case 0x6bbf6d:c.instructions+=5;goto B6bbf6d;
case 0x6bbf73:c.instructions+=4;goto B6bbf73;
case 0x6bbf79:c.instructions+=3;goto B6bbf79;
case 0x6bbf7a:c.instructions+=2;goto B6bbf7a;
case 0x6bbf7c:c.instructions+=1;goto B6bbf7c;
case 0x6bbf81:goto L6bbf81;
case 0x6bbf83:c.instructions+=1;goto B6bbf83;
case 0x6bbf85:goto L6bbf85;
case 0x6bbf8b:c.instructions+=2;goto B6bbf8b;
case 0x6bbf8d:c.instructions+=1;goto B6bbf8d;
case 0x6bbf92:goto L6bbf92;
case 0x6bbf94:c.instructions+=1;goto B6bbf94;
case 0x6bbf96:goto L6bbf96;
case 0x6bbf98:c.instructions+=1;goto B6bbf98;
case 0x6bbf9a:goto L6bbf9a;
case 0x6bbf9f:c.instructions+=1;goto B6bbf9f;
case 0x6bbfa1:goto L6bbfa1;
case 0x6bbfa3:c.instructions+=8;goto B6bbfa3;
case 0x6bbfa6:c.instructions+=7;goto B6bbfa6;
case 0x6bbfaa:c.instructions+=6;goto B6bbfaa;
case 0x6bbfad:c.instructions+=5;goto B6bbfad;
case 0x6bbfaf:c.instructions+=4;goto B6bbfaf;
case 0x6bbfb2:c.instructions+=3;goto B6bbfb2;
case 0x6bbfb6:c.instructions+=2;goto B6bbfb6;
case 0x6bbfb9:c.instructions+=1;goto B6bbfb9;
case 0x6bbfbc:goto L6bbfbc;
case 0x6bbfbf:c.instructions+=2;goto B6bbfbf;
case 0x6bbfc2:c.instructions+=1;goto B6bbfc2;
case 0x6bbfc4:goto L6bbfc4;
case 0x6bbfc6:c.instructions+=2;goto B6bbfc6;
case 0x6bbfc9:c.instructions+=1;goto B6bbfc9;
case 0x6bbfcb:goto L6bbfcb;
case 0x6bbfce:c.instructions+=10;goto B6bbfce;
case 0x6bbfd1:c.instructions+=9;goto B6bbfd1;
case 0x6bbfd4:c.instructions+=8;goto B6bbfd4;
case 0x6bbfd6:c.instructions+=7;goto B6bbfd6;
case 0x6bbfd9:c.instructions+=6;goto B6bbfd9;
case 0x6bbfdc:c.instructions+=5;goto B6bbfdc;
case 0x6bbfe0:c.instructions+=4;goto B6bbfe0;
case 0x6bbfe1:c.instructions+=3;goto B6bbfe1;
case 0x6bbfe4:c.instructions+=2;goto B6bbfe4;
case 0x6bbfe6:c.instructions+=1;goto B6bbfe6;
case 0x6bbfe8:goto L6bbfe8;
case 0x6bbfea:goto L6bbfea;
case 0x6bbfeb:c.instructions+=4;goto B6bbfeb;
case 0x6bbfec:c.instructions+=3;goto B6bbfec;
case 0x6bbfed:c.instructions+=2;goto B6bbfed;
case 0x6bbfee:c.instructions+=1;goto B6bbfee;
case 0x6bbff1:goto L6bbff1;
case 0x6bbff3:c.instructions+=7;goto B6bbff3;
case 0x6bbff4:c.instructions+=6;goto B6bbff4;
case 0x6bbff6:c.instructions+=5;goto B6bbff6;
case 0x6bbff9:c.instructions+=4;goto B6bbff9;
case 0x6bbffa:c.instructions+=3;goto B6bbffa;
case 0x6bbffb:c.instructions+=2;goto B6bbffb;
case 0x6bbffd:c.instructions+=1;goto B6bbffd;
default:missing_instruction(c.pc);}
B6bb000:L6bb000:{c.instructions+=4;NFSU2_TR(0x6bb000);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6bb002:{NFSU2_TR(0x6bb002);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfff00000ull))));
}
B6bb007:{NFSU2_TR(0x6bb007);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x70300000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6bb00c:{NFSU2_TR(0x6bb00c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6bb015;}}
}
B6bb00e:L6bb00e:{c.instructions+=2;NFSU2_TR(0x6bb00e);
__builtin_memmove((R+4),(R+24),4);
}
B6bb010:{NFSU2_TR(0x6bb010);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bb015ull));
TAIL_STATIC(0x6cf6c6u,6cf);
}
B6bb015:L6bb015:{c.instructions+=3;NFSU2_TR(0x6bb015);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6bb016:{NFSU2_TR(0x6bb016);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B6bb019:{NFSU2_TR(0x6bb019);
if(r1(R+512)){TAIL_STATIC(0x6bafeeu,6ba);}
}
B6bb01b:L6bb01b:{c.instructions+=2;NFSU2_TR(0x6bb01b);
__builtin_memmove((R+4),(R+24),4);
}
B6bb01d:{NFSU2_TR(0x6bb01d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bb022ull));
TAIL_STATIC(0x6c29d2u,6c2);
}
B6bb022:L6bb022:{c.instructions+=3;NFSU2_TR(0x6bb022);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6bb024:{NFSU2_TR(0x6bb024);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6bb027:{NFSU2_TR(0x6bb027);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6bb083;}}
}
B6bb029:L6bb029:{c.instructions+=8;NFSU2_TR(0x6bb029);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bb02c:{NFSU2_TR(0x6bb02c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bb032:{NFSU2_TR(0x6bb032);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6bb035:{NFSU2_TR(0x6bb035);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bb03b:{NFSU2_TR(0x6bb03b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6bb03d:{NFSU2_TR(0x6bb03d);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfff00000ull))));
}
B6bb042:{NFSU2_TR(0x6bb042);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x70300000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6bb047:{NFSU2_TR(0x6bb047);
if(r1(R+518)){{goto L6bb06e;}}
}
B6bb049:L6bb049:{c.instructions+=2;NFSU2_TR(0x6bb049);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x73500000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6bb04e:{NFSU2_TR(0x6bb04e);
if(r1(R+518)){{goto L6bb065;}}
}
B6bb050:L6bb050:{c.instructions+=2;NFSU2_TR(0x6bb050);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x73600000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6bb055:{NFSU2_TR(0x6bb055);
if(r1(R+518)){{goto L6bb065;}}
}
B6bb057:L6bb057:{c.instructions+=2;NFSU2_TR(0x6bb057);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x73700000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6bb05c:{NFSU2_TR(0x6bb05c);
if(r1(R+518)){{goto L6bb065;}}
}
B6bb05e:L6bb05e:{c.instructions+=2;NFSU2_TR(0x6bb05e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x73800000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6bb063:{NFSU2_TR(0x6bb063);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6bb07d;}}
}
B6bb065:L6bb065:{c.instructions+=2;NFSU2_TR(0x6bb065);
__builtin_memmove((R+4),(R+24),4);
}
B6bb067:{NFSU2_TR(0x6bb067);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bb06cull));
TAIL_STATIC(0x6c6fb2u,6c6);
}
B6bb06c:L6bb06c:{c.instructions+=1;NFSU2_TR(0x6bb06c);
{goto L6bb077;}
}
B6bb06e:L6bb06e:{c.instructions+=3;NFSU2_TR(0x6bb06e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bb070:{NFSU2_TR(0x6bb070);
__builtin_memmove((R+4),(R+24),4);
}
B6bb072:{NFSU2_TR(0x6bb072);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bb077ull));
TAIL_STATIC(0x6c9b3du,6c9);
}
B6bb077:L6bb077:{c.instructions+=3;NFSU2_TR(0x6bb077);
__builtin_memmove((R+28),(R+0),4);
}
B6bb079:{NFSU2_TR(0x6bb079);
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
B6bb07b:{NFSU2_TR(0x6bb07b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6bb0fa;}}
}
B6bb07d:L6bb07d:{c.instructions+=3;NFSU2_TR(0x6bb07d);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B6bb07e:{NFSU2_TR(0x6bb07e);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+12))<(r4(U+8))));
}
B6bb081:{NFSU2_TR(0x6bb081);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6bb029u);}goto L6bb029;}}
}
B6bb083:L6bb083:{c.instructions+=3;NFSU2_TR(0x6bb083);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6bb085:{NFSU2_TR(0x6bb085);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6bb088:{NFSU2_TR(0x6bb088);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6bb0bd;}}
}
B6bb08a:L6bb08a:{c.instructions+=8;NFSU2_TR(0x6bb08a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bb08d:{NFSU2_TR(0x6bb08d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bb093:{NFSU2_TR(0x6bb093);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6bb096:{NFSU2_TR(0x6bb096);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bb09c:{NFSU2_TR(0x6bb09c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6bb09e:{NFSU2_TR(0x6bb09e);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfff00000ull))));
}
B6bb0a3:{NFSU2_TR(0x6bb0a3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x50300000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6bb0a8:{NFSU2_TR(0x6bb0a8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6bb0b7;}}
}
B6bb0aa:L6bb0aa:{c.instructions+=2;NFSU2_TR(0x6bb0aa);
__builtin_memmove((R+4),(R+24),4);
}
B6bb0ac:{NFSU2_TR(0x6bb0ac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bb0b1ull));
TAIL_STATIC(0x6c307au,6c3);
}
B6bb0b1:L6bb0b1:{c.instructions+=3;NFSU2_TR(0x6bb0b1);
__builtin_memmove((R+28),(R+0),4);
}
B6bb0b3:{NFSU2_TR(0x6bb0b3);
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
B6bb0b5:{NFSU2_TR(0x6bb0b5);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6bb0fa;}}
}
B6bb0b7:L6bb0b7:{c.instructions+=3;NFSU2_TR(0x6bb0b7);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B6bb0b8:{NFSU2_TR(0x6bb0b8);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+12))<(r4(U+8))));
}
B6bb0bb:{NFSU2_TR(0x6bb0bb);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6bb08au);}goto L6bb08a;}}
}
B6bb0bd:L6bb0bd:{c.instructions+=2;NFSU2_TR(0x6bb0bd);
__builtin_memmove((R+4),(R+24),4);
}
B6bb0bf:{NFSU2_TR(0x6bb0bf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bb0c4ull));
TAIL_STATIC(0x69f745u,69f);
}
B6bb0c4:L6bb0c4:{c.instructions+=3;NFSU2_TR(0x6bb0c4);
__builtin_memmove((R+28),(R+0),4);
}
B6bb0c6:{NFSU2_TR(0x6bb0c6);
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
B6bb0c8:{NFSU2_TR(0x6bb0c8);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6bb0fa;}}
}
B6bb0ca:L6bb0ca:{c.instructions+=2;NFSU2_TR(0x6bb0ca);
__builtin_memmove((R+4),(R+24),4);
}
B6bb0cc:{NFSU2_TR(0x6bb0cc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bb0d1ull));
TAIL_STATIC(0x6a806fu,6a8);
}
B6bb0d1:L6bb0d1:{c.instructions+=3;NFSU2_TR(0x6bb0d1);
__builtin_memmove((R+28),(R+0),4);
}
B6bb0d3:{NFSU2_TR(0x6bb0d3);
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
B6bb0d5:{NFSU2_TR(0x6bb0d5);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6bb0fa;}}
}
B6bb0d7:L6bb0d7:{c.instructions+=2;NFSU2_TR(0x6bb0d7);
__builtin_memmove((R+4),(R+24),4);
}
B6bb0d9:{NFSU2_TR(0x6bb0d9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bb0deull));
TAIL_STATIC(0x69a74eu,69a);
}
B6bb0de:L6bb0de:{c.instructions+=3;NFSU2_TR(0x6bb0de);
__builtin_memmove((R+28),(R+0),4);
}
B6bb0e0:{NFSU2_TR(0x6bb0e0);
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
B6bb0e2:{NFSU2_TR(0x6bb0e2);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6bb0fa;}}
}
B6bb0e4:L6bb0e4:{c.instructions+=2;NFSU2_TR(0x6bb0e4);
__builtin_memmove((R+4),(R+24),4);
}
B6bb0e6:{NFSU2_TR(0x6bb0e6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bb0ebull));
TAIL_STATIC(0x6a0d84u,6a0);
}
B6bb0eb:L6bb0eb:{c.instructions+=3;NFSU2_TR(0x6bb0eb);
__builtin_memmove((R+28),(R+0),4);
}
B6bb0ed:{NFSU2_TR(0x6bb0ed);
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
B6bb0ef:{NFSU2_TR(0x6bb0ef);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6bb0fa;}}
}
B6bb0f1:L6bb0f1:{c.instructions+=2;NFSU2_TR(0x6bb0f1);
__builtin_memmove((R+4),(R+24),4);
}
B6bb0f3:{NFSU2_TR(0x6bb0f3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bb0f8ull));
TAIL_STATIC(0x6c29d2u,6c2);
}
B6bb0f8:L6bb0f8:{c.instructions+=1;NFSU2_TR(0x6bb0f8);
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
B6bb0fa:L6bb0fa:{c.instructions+=6;NFSU2_TR(0x6bb0fa);
__builtin_memmove((R+0),(R+28),4);
}
B6bb0fc:{NFSU2_TR(0x6bb0fc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6bb0fd:{NFSU2_TR(0x6bb0fd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6bb0fe:{NFSU2_TR(0x6bb0fe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6bb0ff:{NFSU2_TR(0x6bb0ff);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6bb100:{NFSU2_TR(0x6bb100);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6bb101:L6bb101:{c.instructions+=16;NFSU2_TR(0x6bb101);
__builtin_memmove((R+28),(R+28),4);
}
B6bb103:{NFSU2_TR(0x6bb103);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bb104:{NFSU2_TR(0x6bb104);
__builtin_memmove((R+20),(R+16),4);
}
B6bb106:{NFSU2_TR(0x6bb106);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bb107:{NFSU2_TR(0x6bb107);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bb108:{NFSU2_TR(0x6bb108);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bb109:{NFSU2_TR(0x6bb109);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bb10a:{NFSU2_TR(0x6bb10a);
__builtin_memmove((R+24),(R+4),4);
}
B6bb10c:{NFSU2_TR(0x6bb10c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x220ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6bb113:{NFSU2_TR(0x6bb113);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x224ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6bb11a:{NFSU2_TR(0x6bb11a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bb11b:{NFSU2_TR(0x6bb11b);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6bb11d:{NFSU2_TR(0x6bb11d);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6bb120:{NFSU2_TR(0x6bb120);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bb123:{NFSU2_TR(0x6bb123);
w4(R+12,u32(0xfff00000ull));
}
B6bb128:{NFSU2_TR(0x6bb128);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6bb1c1;}}
}
B6bb12e:L6bb12e:{c.instructions+=12;NFSU2_TR(0x6bb12e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bb131:{NFSU2_TR(0x6bb131);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6bb134:{NFSU2_TR(0x6bb134);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bb13a:{NFSU2_TR(0x6bb13a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6bb13c:{NFSU2_TR(0x6bb13c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bb142:{NFSU2_TR(0x6bb142);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bb148:{NFSU2_TR(0x6bb148);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6bb14a:{NFSU2_TR(0x6bb14a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bb150:{NFSU2_TR(0x6bb150);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6bb152:{NFSU2_TR(0x6bb152);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+12))));
}
B6bb154:{NFSU2_TR(0x6bb154);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x20300000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6bb159:{NFSU2_TR(0x6bb159);
if(r1(R+518)){{goto L6bb162;}}
}
B6bb15b:L6bb15b:{c.instructions+=2;NFSU2_TR(0x6bb15b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x20200000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6bb160:{NFSU2_TR(0x6bb160);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6bb1b7;}}
}
B6bb162:L6bb162:{c.instructions+=2;NFSU2_TR(0x6bb162);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x220ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6bb169:{NFSU2_TR(0x6bb169);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6bb1b7;}}
}
B6bb16b:L6bb16b:{c.instructions+=6;NFSU2_TR(0x6bb16b);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bb16d:{NFSU2_TR(0x6bb16d);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bb16f:{NFSU2_TR(0x6bb16f);
u8 U[4];
w4(U+0,u32(0x311ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bb174:{NFSU2_TR(0x6bb174);
u8 U[4];
w4(U+0,u32(0x7b3a84ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bb179:{NFSU2_TR(0x6bb179);
__builtin_memmove((R+4),(R+24),4);
}
B6bb17b:{NFSU2_TR(0x6bb17b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bb180ull));
TAIL_STATIC(0x699be0u,699);
}
B6bb180:L6bb180:{c.instructions+=10;NFSU2_TR(0x6bb180);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B6bb182:{NFSU2_TR(0x6bb182);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bb183:{NFSU2_TR(0x6bb183);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bb184:{NFSU2_TR(0x6bb184);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6bb187:{NFSU2_TR(0x6bb187);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bb189:{NFSU2_TR(0x6bb189);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bb18b:{NFSU2_TR(0x6bb18b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bb18c:{NFSU2_TR(0x6bb18c);
__builtin_memmove((R+4),(R+24),4);
}
B6bb18e:{NFSU2_TR(0x6bb18e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bb191:{NFSU2_TR(0x6bb191);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bb196ull));
TAIL_STATIC(0x699c39u,699);
}
B6bb196:L6bb196:{c.instructions+=10;NFSU2_TR(0x6bb196);
__asm__ volatile(".byte 0xd9,0xe8":::"memory");
}
B6bb198:{NFSU2_TR(0x6bb198);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bb199:{NFSU2_TR(0x6bb199);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bb19a:{NFSU2_TR(0x6bb19a);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6bb19d:{NFSU2_TR(0x6bb19d);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bb19f:{NFSU2_TR(0x6bb19f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bb1a1:{NFSU2_TR(0x6bb1a1);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6bb1a4:{NFSU2_TR(0x6bb1a4);
__builtin_memmove((R+4),(R+24),4);
}
B6bb1a6:{NFSU2_TR(0x6bb1a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x220ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bb1ac:{NFSU2_TR(0x6bb1ac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bb1b1ull));
TAIL_STATIC(0x699c39u,699);
}
B6bb1b1:L6bb1b1:{c.instructions+=1;NFSU2_TR(0x6bb1b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x224ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bb1b7:L6bb1b7:{c.instructions+=3;NFSU2_TR(0x6bb1b7);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6bb1b8:{NFSU2_TR(0x6bb1b8);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B6bb1bb:{NFSU2_TR(0x6bb1bb);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6bb12eu);}goto L6bb12e;}}
}
B6bb1c1:L6bb1c1:{c.instructions+=2;NFSU2_TR(0x6bb1c1);
__builtin_memmove((R+4),(R+24),4);
}
B6bb1c3:{NFSU2_TR(0x6bb1c3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bb1c8ull));
TAIL_STATIC(0x6c29d2u,6c2);
}
B6bb1c8:L6bb1c8:{c.instructions+=2;NFSU2_TR(0x6bb1c8);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x4ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6bb1cf:{NFSU2_TR(0x6bb1cf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6bb241;}}
}
B6bb1d1:L6bb1d1:{c.instructions+=3;NFSU2_TR(0x6bb1d1);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6bb1d3:{NFSU2_TR(0x6bb1d3);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6bb1d6:{NFSU2_TR(0x6bb1d6);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6bb241;}}
}
B6bb1d8:L6bb1d8:{c.instructions+=9;NFSU2_TR(0x6bb1d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bb1db:{NFSU2_TR(0x6bb1db);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bb1e1:{NFSU2_TR(0x6bb1e1);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6bb1e4:{NFSU2_TR(0x6bb1e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bb1ea:{NFSU2_TR(0x6bb1ea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6bb1ec:{NFSU2_TR(0x6bb1ec);
__builtin_memmove((R+4),(R+0),4);
}
B6bb1ee:{NFSU2_TR(0x6bb1ee);
w4(R+4,u32(u32(r4(R+4))&u32(r4(R+12))));
}
B6bb1f0:{NFSU2_TR(0x6bb1f0);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10300000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6bb1f6:{NFSU2_TR(0x6bb1f6);
if(r1(R+518)){{goto L6bb22b;}}
}
B6bb1f8:L6bb1f8:{c.instructions+=2;NFSU2_TR(0x6bb1f8);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10500000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6bb1fe:{NFSU2_TR(0x6bb1fe);
if(r1(R+518)){{goto L6bb22b;}}
}
B6bb200:L6bb200:{c.instructions+=2;NFSU2_TR(0x6bb200);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10600000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6bb206:{NFSU2_TR(0x6bb206);
if(r1(R+518)){{goto L6bb22b;}}
}
B6bb208:L6bb208:{c.instructions+=2;NFSU2_TR(0x6bb208);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10700000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6bb20e:{NFSU2_TR(0x6bb20e);
if(r1(R+518)){{goto L6bb22b;}}
}
B6bb210:L6bb210:{c.instructions+=2;NFSU2_TR(0x6bb210);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x50000000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6bb216:{NFSU2_TR(0x6bb216);
if(r1(R+518)){{goto L6bb221;}}
}
B6bb218:L6bb218:{c.instructions+=2;NFSU2_TR(0x6bb218);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6bb21f:{NFSU2_TR(0x6bb21f);
{goto L6bb23b;}
}
B6bb221:L6bb221:{c.instructions+=3;NFSU2_TR(0x6bb221);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffull))));
}
B6bb226:{NFSU2_TR(0x6bb226);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(U+0))<(u32(0x2ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6bb229:{NFSU2_TR(0x6bb229);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6bb235;}}
}
B6bb22b:L6bb22b:{c.instructions+=2;NFSU2_TR(0x6bb22b);
__builtin_memmove((R+4),(R+24),4);
}
B6bb22d:{NFSU2_TR(0x6bb22d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bb232ull));
TAIL_STATIC(0x6c62ddu,6c6);
}
B6bb232:L6bb232:{c.instructions+=1;NFSU2_TR(0x6bb232);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bb235:L6bb235:{c.instructions+=2;NFSU2_TR(0x6bb235);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
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
B6bb239:{NFSU2_TR(0x6bb239);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6bb28a;}}
}
B6bb23b:L6bb23b:{c.instructions+=3;NFSU2_TR(0x6bb23b);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6bb23c:{NFSU2_TR(0x6bb23c);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B6bb23f:{NFSU2_TR(0x6bb23f);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6bb1d8u);}goto L6bb1d8;}}
}
B6bb241:L6bb241:{c.instructions+=2;NFSU2_TR(0x6bb241);
__builtin_memmove((R+4),(R+24),4);
}
B6bb243:{NFSU2_TR(0x6bb243);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bb248ull));
TAIL_STATIC(0x6c29d2u,6c2);
}
B6bb248:L6bb248:{c.instructions+=3;NFSU2_TR(0x6bb248);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6bb24a:{NFSU2_TR(0x6bb24a);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+4))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6bb24d:{NFSU2_TR(0x6bb24d);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6bb286;}}
}
B6bb24f:L6bb24f:{c.instructions+=4;NFSU2_TR(0x6bb24f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bb252:{NFSU2_TR(0x6bb252);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6bb255:{NFSU2_TR(0x6bb255);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6bb259:{NFSU2_TR(0x6bb259);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6bb280;}}
}
B6bb25b:L6bb25b:{c.instructions+=5;NFSU2_TR(0x6bb25b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6bb25e:{NFSU2_TR(0x6bb25e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6bb261:{NFSU2_TR(0x6bb261);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6bb264:{NFSU2_TR(0x6bb264);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6bb268:{NFSU2_TR(0x6bb268);
if(r1(R+518)){{goto L6bb280;}}
}
B6bb26a:L6bb26a:{c.instructions+=2;NFSU2_TR(0x6bb26a);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x224ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6bb270:{NFSU2_TR(0x6bb270);
if(r1(R+518)){{goto L6bb280;}}
}
B6bb272:L6bb272:{c.instructions+=2;NFSU2_TR(0x6bb272);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x220ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6bb278:{NFSU2_TR(0x6bb278);
if(r1(R+518)){{goto L6bb280;}}
}
B6bb27a:L6bb27a:{c.instructions+=2;NFSU2_TR(0x6bb27a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6bb27d:{NFSU2_TR(0x6bb27d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bb280:L6bb280:{c.instructions+=3;NFSU2_TR(0x6bb280);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6bb281:{NFSU2_TR(0x6bb281);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B6bb284:{NFSU2_TR(0x6bb284);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6bb24fu);}goto L6bb24f;}}
}
B6bb286:L6bb286:{c.instructions+=1;NFSU2_TR(0x6bb286);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
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
B6bb28a:L6bb28a:{c.instructions+=6;NFSU2_TR(0x6bb28a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bb28d:{NFSU2_TR(0x6bb28d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6bb28e:{NFSU2_TR(0x6bb28e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6bb28f:{NFSU2_TR(0x6bb28f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6bb290:{NFSU2_TR(0x6bb290);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6bb291:{NFSU2_TR(0x6bb291);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6bb292:L6bb292:{c.instructions+=12;NFSU2_TR(0x6bb292);
__builtin_memmove((R+28),(R+28),4);
}
B6bb294:{NFSU2_TR(0x6bb294);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bb295:{NFSU2_TR(0x6bb295);
__builtin_memmove((R+20),(R+16),4);
}
B6bb297:{NFSU2_TR(0x6bb297);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bb298:{NFSU2_TR(0x6bb298);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bb299:{NFSU2_TR(0x6bb299);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bb29a:{NFSU2_TR(0x6bb29a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bb29b:{NFSU2_TR(0x6bb29b);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6bb29d:{NFSU2_TR(0x6bb29d);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6bb2a0:{NFSU2_TR(0x6bb2a0);
__builtin_memmove((R+24),(R+4),4);
}
B6bb2a2:{NFSU2_TR(0x6bb2a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bb2a5:{NFSU2_TR(0x6bb2a5);
if(r1(R+518)){{goto L6bb2b3;}}
}
B6bb2a7:L6bb2a7:{c.instructions+=2;NFSU2_TR(0x6bb2a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0xf0000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6bb2ae:{NFSU2_TR(0x6bb2ae);
{goto L6bb334;}
}
B6bb2b3:L6bb2b3:{c.instructions+=6;NFSU2_TR(0x6bb2b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bb2b6:{NFSU2_TR(0x6bb2b6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6bb2b8:{NFSU2_TR(0x6bb2b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6bb2bb:{NFSU2_TR(0x6bb2bb);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6bb2be:{NFSU2_TR(0x6bb2be);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3dull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6bb2c2:{NFSU2_TR(0x6bb2c2);
if(r1(R+518)){{goto L6bb2cb;}}
}
B6bb2c4:L6bb2c4:{c.instructions+=1;NFSU2_TR(0x6bb2c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x100000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6bb2cb:L6bb2cb:{c.instructions+=2;NFSU2_TR(0x6bb2cb);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6bb2ce:{NFSU2_TR(0x6bb2ce);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6bb334;}}
}
B6bb2d0:L6bb2d0:{c.instructions+=8;NFSU2_TR(0x6bb2d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bb2d3:{NFSU2_TR(0x6bb2d3);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6bb2d6:{NFSU2_TR(0x6bb2d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6bb2d9:{NFSU2_TR(0x6bb2d9);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6bb2dc:{NFSU2_TR(0x6bb2dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bb2df:{NFSU2_TR(0x6bb2df);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6bb2e1:{NFSU2_TR(0x6bb2e1);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+12))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6bb2e3:{NFSU2_TR(0x6bb2e3);
if(r1(R+518)){{goto L6bb303;}}
}
B6bb2e5:L6bb2e5:{c.instructions+=2;NFSU2_TR(0x6bb2e5);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6bb2e6:{NFSU2_TR(0x6bb2e6);
if(r1(R+518)){{goto L6bb2fc;}}
}
B6bb2e8:L6bb2e8:{c.instructions+=2;NFSU2_TR(0x6bb2e8);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6bb2e9:{NFSU2_TR(0x6bb2e9);
if(r1(R+518)){{goto L6bb2f5;}}
}
B6bb2eb:L6bb2eb:{c.instructions+=2;NFSU2_TR(0x6bb2eb);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6bb2ec:{NFSU2_TR(0x6bb2ec);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6bb308;}}
}
B6bb2ee:L6bb2ee:{c.instructions+=2;NFSU2_TR(0x6bb2ee);
w4(R+12,u32(0x80000ull));
}
B6bb2f3:{NFSU2_TR(0x6bb2f3);
{goto L6bb308;}
}
B6bb2f5:L6bb2f5:{c.instructions+=2;NFSU2_TR(0x6bb2f5);
w4(R+12,u32(0x40000ull));
}
B6bb2fa:{NFSU2_TR(0x6bb2fa);
{goto L6bb308;}
}
B6bb2fc:L6bb2fc:{c.instructions+=2;NFSU2_TR(0x6bb2fc);
w4(R+12,u32(0x20000ull));
}
B6bb301:{NFSU2_TR(0x6bb301);
{goto L6bb308;}
}
B6bb303:L6bb303:{c.instructions+=1;NFSU2_TR(0x6bb303);
w4(R+12,u32(0x10000ull));
}
B6bb308:L6bb308:{c.instructions+=3;NFSU2_TR(0x6bb308);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bb30b:{NFSU2_TR(0x6bb30b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6bb30d:{NFSU2_TR(0x6bb30d);
if(r1(R+518)){{goto L6bb32b;}}
}
B6bb30f:L6bb30f:{c.instructions+=6;NFSU2_TR(0x6bb30f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bb315:{NFSU2_TR(0x6bb315);
u8 U[4];
w4(U+0,u32(0x7bb22cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bb31a:{NFSU2_TR(0x6bb31a);
u8 U[4];
w4(U+0,u32(0x12d5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bb31f:{NFSU2_TR(0x6bb31f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6bb322:{NFSU2_TR(0x6bb322);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bb323:{NFSU2_TR(0x6bb323);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bb328ull));
TAIL_STATIC(0x69e936u,69e);
}
B6bb328:L6bb328:{c.instructions+=1;NFSU2_TR(0x6bb328);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B6bb32b:L6bb32b:{c.instructions+=4;NFSU2_TR(0x6bb32b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(r4(R+12))));
s4(u32(r4(U+0)),r4(U+4));
}
B6bb32e:{NFSU2_TR(0x6bb32e);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6bb32f:{NFSU2_TR(0x6bb32f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B6bb332:{NFSU2_TR(0x6bb332);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6bb2d0u);}goto L6bb2d0;}}
}
B6bb334:L6bb334:{c.instructions+=3;NFSU2_TR(0x6bb334);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bb33a:{NFSU2_TR(0x6bb33a);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x20ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6bb33c:{NFSU2_TR(0x6bb33c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6bb37d;}}
}
B6bb33e:L6bb33e:{c.instructions+=3;NFSU2_TR(0x6bb33e);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6bb340:{NFSU2_TR(0x6bb340);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6bb343:{NFSU2_TR(0x6bb343);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6bb37b;}}
}
B6bb345:L6bb345:{c.instructions+=1;NFSU2_TR(0x6bb345);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6bb348:L6bb348:{c.instructions+=5;NFSU2_TR(0x6bb348);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bb34b:{NFSU2_TR(0x6bb34b);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6bb34e:{NFSU2_TR(0x6bb34e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6bb351:{NFSU2_TR(0x6bb351);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6bb355:{NFSU2_TR(0x6bb355);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6bb372;}}
}
B6bb357:L6bb357:{c.instructions+=5;NFSU2_TR(0x6bb357);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6bb35a:{NFSU2_TR(0x6bb35a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6bb35d:{NFSU2_TR(0x6bb35d);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6bb360:{NFSU2_TR(0x6bb360);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6bb364:{NFSU2_TR(0x6bb364);
if(r1(R+518)){{goto L6bb378;}}
}
B6bb366:L6bb366:{c.instructions+=2;NFSU2_TR(0x6bb366);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6bb36a:{NFSU2_TR(0x6bb36a);
if(r1(R+518)){{goto L6bb378;}}
}
B6bb36c:L6bb36c:{c.instructions+=2;NFSU2_TR(0x6bb36c);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6bb370:{NFSU2_TR(0x6bb370);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6bb378;}}
}
B6bb372:L6bb372:{c.instructions+=3;NFSU2_TR(0x6bb372);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6bb373:{NFSU2_TR(0x6bb373);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B6bb376:{NFSU2_TR(0x6bb376);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6bb348u);}goto L6bb348;}}
}
B6bb378:L6bb378:{c.instructions+=1;NFSU2_TR(0x6bb378);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6bb37b:L6bb37b:{c.instructions+=1;NFSU2_TR(0x6bb37b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6bb381;}}
}
B6bb37d:L6bb37d:{c.instructions+=1;NFSU2_TR(0x6bb37d);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))|u32(u8(0x20ull))));
s1(u32(r4(U+0)),r1(U+4));
}
B6bb381:L6bb381:{c.instructions+=2;NFSU2_TR(0x6bb381);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6bb388:{NFSU2_TR(0x6bb388);
if(r1(R+518)){{goto L6bb3bb;}}
}
B6bb38a:L6bb38a:{c.instructions+=3;NFSU2_TR(0x6bb38a);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6bb38c:{NFSU2_TR(0x6bb38c);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x124ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6bb392:{NFSU2_TR(0x6bb392);
if(r1(R+518)){{goto L6bb3bb;}}
}
B6bb394:L6bb394:{c.instructions+=2;NFSU2_TR(0x6bb394);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+4))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6bb397:{NFSU2_TR(0x6bb397);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6bb3bb;}}
}
B6bb399:L6bb399:{c.instructions+=10;NFSU2_TR(0x6bb399);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x128ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bb39f:{NFSU2_TR(0x6bb39f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6bb3a2:{NFSU2_TR(0x6bb3a2);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6bb3a5:{NFSU2_TR(0x6bb3a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x124ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6bb3ab:{NFSU2_TR(0x6bb3ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6bb3ae:{NFSU2_TR(0x6bb3ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6bb3b1:{NFSU2_TR(0x6bb3b1);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6bb3b2:{NFSU2_TR(0x6bb3b2);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B6bb3b5:{NFSU2_TR(0x6bb3b5);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffff0ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+28),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6bb3b9:{NFSU2_TR(0x6bb3b9);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6bb399u);}goto L6bb399;}}
}
B6bb3bb:L6bb3bb:{c.instructions+=9;NFSU2_TR(0x6bb3bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bb3be:{NFSU2_TR(0x6bb3be);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6bb3c1:{NFSU2_TR(0x6bb3c1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6bb3c2:{NFSU2_TR(0x6bb3c2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6bb3c3:{NFSU2_TR(0x6bb3c3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6bb3c5:{NFSU2_TR(0x6bb3c5);
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
B6bb3c7:{NFSU2_TR(0x6bb3c7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6bb3c8:{NFSU2_TR(0x6bb3c8);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6bb3c9:{NFSU2_TR(0x6bb3c9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6bb3cc:L6bb3cc:{c.instructions+=10;NFSU2_TR(0x6bb3cc);
__builtin_memmove((R+28),(R+28),4);
}
B6bb3ce:{NFSU2_TR(0x6bb3ce);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bb3cf:{NFSU2_TR(0x6bb3cf);
__builtin_memmove((R+20),(R+16),4);
}
B6bb3d1:{NFSU2_TR(0x6bb3d1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x60ull))));
}
B6bb3d4:{NFSU2_TR(0x6bb3d4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bb3d5:{NFSU2_TR(0x6bb3d5);
__builtin_memmove((R+24),(R+4),4);
}
B6bb3d7:{NFSU2_TR(0x6bb3d7);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6bb3d9:{NFSU2_TR(0x6bb3d9);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6bb3db:{NFSU2_TR(0x6bb3db);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x158ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+8))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+8)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6bb3e1:{NFSU2_TR(0x6bb3e1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6bb59c;}}
}
B6bb3e7:L6bb3e7:{c.instructions+=5;NFSU2_TR(0x6bb3e7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bb3e8:{NFSU2_TR(0x6bb3e8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bb3e9:{NFSU2_TR(0x6bb3e9);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bb3eb:{NFSU2_TR(0x6bb3eb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6bb3ec:{NFSU2_TR(0x6bb3ec);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6bb3ef:L6bb3ef:{c.instructions+=1;NFSU2_TR(0x6bb3ef);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L6bb3f1;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6bb3efu);}goto L6bb3ef;}
}
B6bb3f1:L6bb3f1:{c.instructions+=13;NFSU2_TR(0x6bb3f1);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6bb3f4:{NFSU2_TR(0x6bb3f4);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6bb3f5:{NFSU2_TR(0x6bb3f5);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6bb3f6:{NFSU2_TR(0x6bb3f6);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6bb3f7:{NFSU2_TR(0x6bb3f7);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6bb3f8:{NFSU2_TR(0x6bb3f8);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6bb3fa:{NFSU2_TR(0x6bb3fa);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x218ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6bb400:{NFSU2_TR(0x6bb400);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6bb401:{NFSU2_TR(0x6bb401);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6bb402:{NFSU2_TR(0x6bb402);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bb404:{NFSU2_TR(0x6bb404);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6bb406:{NFSU2_TR(0x6bb406);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6bb407:{NFSU2_TR(0x6bb407);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1f8ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6bb40d:L6bb40d:{c.instructions+=1;NFSU2_TR(0x6bb40d);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L6bb40f;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6bb40du);}goto L6bb40d;}
}
B6bb40f:L6bb40f:{c.instructions+=5;NFSU2_TR(0x6bb40f);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+8))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6bb412:{NFSU2_TR(0x6bb412);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bb415:{NFSU2_TR(0x6bb415);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bb418:{NFSU2_TR(0x6bb418);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bb41b:{NFSU2_TR(0x6bb41b);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6bb518;}}
}
B6bb421:L6bb421:{c.instructions+=9;NFSU2_TR(0x6bb421);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bb424:{NFSU2_TR(0x6bb424);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6bb427:{NFSU2_TR(0x6bb427);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6bb42a:{NFSU2_TR(0x6bb42a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bb42d:{NFSU2_TR(0x6bb42d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6bb430:{NFSU2_TR(0x6bb430);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6bb433:{NFSU2_TR(0x6bb433);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bb436:{NFSU2_TR(0x6bb436);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+0))&u32(u8(0x20ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6bb438:{NFSU2_TR(0x6bb438);
if(r1(R+518)){{goto L6bb4b8;}}
}
B6bb43a:L6bb43a:{c.instructions+=4;NFSU2_TR(0x6bb43a);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6bb43d:{NFSU2_TR(0x6bb43d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6bb43f:{NFSU2_TR(0x6bb43f);
__builtin_memmove((R+4),(R+24),4);
}
B6bb441:{NFSU2_TR(0x6bb441);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bb444ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6bb444:L6bb444:{c.instructions+=5;NFSU2_TR(0x6bb444);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6bb447:{NFSU2_TR(0x6bb447);
__builtin_memmove((R+12),(R+0),4);
}
B6bb449:{NFSU2_TR(0x6bb449);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6bb44b:{NFSU2_TR(0x6bb44b);
__builtin_memmove((R+4),(R+24),4);
}
B6bb44d:{NFSU2_TR(0x6bb44d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bb450ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6bb450:L6bb450:{c.instructions+=3;NFSU2_TR(0x6bb450);
__builtin_memmove((R+4),(R+12),4);
}
B6bb452:{NFSU2_TR(0x6bb452);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0xbull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B6bb455:{NFSU2_TR(0x6bb455);
if(r1(R+518)){{goto L6bb49a;}}
}
B6bb457:L6bb457:{c.instructions+=3;NFSU2_TR(0x6bb457);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B6bb458:{NFSU2_TR(0x6bb458);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B6bb459:{NFSU2_TR(0x6bb459);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6bb507;}}
}
B6bb45f:L6bb45f:{c.instructions+=2;NFSU2_TR(0x6bb45f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6bb461:{NFSU2_TR(0x6bb461);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6bb507;}}
}
B6bb467:L6bb467:{c.instructions+=2;NFSU2_TR(0x6bb467);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6bb46a:{NFSU2_TR(0x6bb46a);
if(r1(R+518)){{goto L6bb507;}}
}
B6bb470:L6bb470:{c.instructions+=2;NFSU2_TR(0x6bb470);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6bb473:{NFSU2_TR(0x6bb473);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6bb507;}}
}
B6bb479:L6bb479:{c.instructions+=5;NFSU2_TR(0x6bb479);
u8 U[4];
w4(U+0,u32(0x7bb108ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bb47e:{NFSU2_TR(0x6bb47e);
u8 U[4];
w4(U+0,u32(0x11b0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bb483:{NFSU2_TR(0x6bb483);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6bb486:{NFSU2_TR(0x6bb486);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bb487:{NFSU2_TR(0x6bb487);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bb48cull));
TAIL_STATIC(0x69e936u,69e);
}
B6bb48c:L6bb48c:{c.instructions+=6;NFSU2_TR(0x6bb48c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6bb48e:{NFSU2_TR(0x6bb48e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B6bb491:{NFSU2_TR(0x6bb491);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6bb492:{NFSU2_TR(0x6bb492);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bb495:{NFSU2_TR(0x6bb495);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bb498:{NFSU2_TR(0x6bb498);
{goto L6bb507;}
}
B6bb49a:L6bb49a:{c.instructions+=2;NFSU2_TR(0x6bb49a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(U+0))<(u32(0x4ull))));
}
B6bb49d:{NFSU2_TR(0x6bb49d);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6bb507;}}
}
B6bb49f:L6bb49f:{c.instructions+=7;NFSU2_TR(0x6bb49f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6bb4a2:{NFSU2_TR(0x6bb4a2);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6bb4a5:{NFSU2_TR(0x6bb4a5);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B6bb4a7:{NFSU2_TR(0x6bb4a7);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffa0ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
w4(U+12,u32(0x1ull));
s4(u32(r4(U+8)),r4(U+12));
}
B6bb4af:{NFSU2_TR(0x6bb4af);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6bb4b2:{NFSU2_TR(0x6bb4b2);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffe0ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6bb4b6:{NFSU2_TR(0x6bb4b6);
{goto L6bb507;}
}
B6bb4b8:L6bb4b8:{c.instructions+=2;NFSU2_TR(0x6bb4b8);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x10ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6bb4ba:{NFSU2_TR(0x6bb4ba);
if(r1(R+518)){{goto L6bb507;}}
}
B6bb4bc:L6bb4bc:{c.instructions+=2;NFSU2_TR(0x6bb4bc);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x2ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6bb4bf:{NFSU2_TR(0x6bb4bf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6bb507;}}
}
B6bb4c1:L6bb4c1:{c.instructions+=4;NFSU2_TR(0x6bb4c1);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6bb4c4:{NFSU2_TR(0x6bb4c4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6bb4c6:{NFSU2_TR(0x6bb4c6);
__builtin_memmove((R+4),(R+24),4);
}
B6bb4c8:{NFSU2_TR(0x6bb4c8);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bb4cbull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6bb4cb:L6bb4cb:{c.instructions+=5;NFSU2_TR(0x6bb4cb);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6bb4ce:{NFSU2_TR(0x6bb4ce);
__builtin_memmove((R+12),(R+0),4);
}
B6bb4d0:{NFSU2_TR(0x6bb4d0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6bb4d2:{NFSU2_TR(0x6bb4d2);
__builtin_memmove((R+4),(R+24),4);
}
B6bb4d4:{NFSU2_TR(0x6bb4d4);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bb4d7ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6bb4d7:L6bb4d7:{c.instructions+=2;NFSU2_TR(0x6bb4d7);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6bb4da:{NFSU2_TR(0x6bb4da);
if(r1(R+518)){{goto L6bb4ef;}}
}
B6bb4dc:L6bb4dc:{c.instructions+=2;NFSU2_TR(0x6bb4dc);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xbull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6bb4df:{NFSU2_TR(0x6bb4df);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6bb507;}}
}
B6bb4e1:L6bb4e1:{c.instructions+=2;NFSU2_TR(0x6bb4e1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(U+0))<(u32(0x2ull))));
}
B6bb4e4:{NFSU2_TR(0x6bb4e4);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6bb507;}}
}
B6bb4e6:L6bb4e6:{c.instructions+=2;NFSU2_TR(0x6bb4e6);
u8 U[12];
w4(U+0,u32(u32(u32(0x218ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B6bb4ed:{NFSU2_TR(0x6bb4ed);
{goto L6bb4fb;}
}
B6bb4ef:L6bb4ef:{c.instructions+=2;NFSU2_TR(0x6bb4ef);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(U+0))<(u32(0x8ull))));
}
B6bb4f2:{NFSU2_TR(0x6bb4f2);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6bb507;}}
}
B6bb4f4:L6bb4f4:{c.instructions+=1;NFSU2_TR(0x6bb4f4);
u8 U[12];
w4(U+0,u32(u32(u32(0x1f8ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B6bb4fb:L6bb4fb:{c.instructions+=4;NFSU2_TR(0x6bb4fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6bb4fe:{NFSU2_TR(0x6bb4fe);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6bb501:{NFSU2_TR(0x6bb501);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w1(R+512,u8((r4(U+4))<(r4(R+4))));
}
B6bb503:{NFSU2_TR(0x6bb503);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6bb507;}}
}
B6bb505:L6bb505:{c.instructions+=1;NFSU2_TR(0x6bb505);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6bb507:L6bb507:{c.instructions+=4;NFSU2_TR(0x6bb507);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6bb50a:{NFSU2_TR(0x6bb50a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bb50d:{NFSU2_TR(0x6bb50d);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6bb510:{NFSU2_TR(0x6bb510);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6bb421u);}goto L6bb421;}}
}
B6bb516:L6bb516:{c.instructions+=1;NFSU2_TR(0x6bb516);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6bb518:L6bb518:{c.instructions+=5;NFSU2_TR(0x6bb518);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6bb51a:{NFSU2_TR(0x6bb51a);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B6bb51b:{NFSU2_TR(0x6bb51b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bb51e:{NFSU2_TR(0x6bb51e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bb521:{NFSU2_TR(0x6bb521);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6bb523:L6bb523:{c.instructions+=5;NFSU2_TR(0x6bb523);
__builtin_memmove((R+0),(R+28),4);
}
B6bb525:{NFSU2_TR(0x6bb525);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6bb527:{NFSU2_TR(0x6bb527);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6bb52a:{NFSU2_TR(0x6bb52a);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffffa0ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B6bb52e:{NFSU2_TR(0x6bb52e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6bb535:L6bb535:{c.instructions+=7;NFSU2_TR(0x6bb535);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6bb537:{NFSU2_TR(0x6bb537);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+8))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6bb539:{NFSU2_TR(0x6bb539);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+8),(U+0),1);
}
B6bb53c:{NFSU2_TR(0x6bb53c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B6bb53f:{NFSU2_TR(0x6bb53f);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B6bb541:{NFSU2_TR(0x6bb541);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6bb544:{NFSU2_TR(0x6bb544);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6bb535u);}goto L6bb535;}}
}
B6bb546:L6bb546:{c.instructions+=2;NFSU2_TR(0x6bb546);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6bb548:{NFSU2_TR(0x6bb548);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6bb59f;}}
}
B6bb54a:L6bb54a:{c.instructions+=2;NFSU2_TR(0x6bb54a);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6bb54c:{NFSU2_TR(0x6bb54c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6bb567;}}
}
B6bb54e:L6bb54e:{c.instructions+=5;NFSU2_TR(0x6bb54e);
u8 U[4];
w4(U+0,u32(0x7bb0c8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bb553:{NFSU2_TR(0x6bb553);
u8 U[4];
w4(U+0,u32(0x11b2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bb558:{NFSU2_TR(0x6bb558);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6bb55b:{NFSU2_TR(0x6bb55b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bb55c:{NFSU2_TR(0x6bb55c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bb561ull));
TAIL_STATIC(0x69e936u,69e);
}
B6bb561:L6bb561:{c.instructions+=2;NFSU2_TR(0x6bb561);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B6bb564:{NFSU2_TR(0x6bb564);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bb567:L6bb567:{c.instructions+=1;NFSU2_TR(0x6bb567);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bb56a:L6bb56a:{c.instructions+=3;NFSU2_TR(0x6bb56a);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6bb56b:{NFSU2_TR(0x6bb56b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(U+0))<(u32(0x4ull))));
}
B6bb56e:{NFSU2_TR(0x6bb56e);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6bb523u);}goto L6bb523;}}
}
B6bb570:L6bb570:{c.instructions+=2;NFSU2_TR(0x6bb570);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6bb574:{NFSU2_TR(0x6bb574);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6bb58e;}}
}
B6bb576:L6bb576:{c.instructions+=5;NFSU2_TR(0x6bb576);
u8 U[4];
w4(U+0,u32(0x7bb090ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bb57b:{NFSU2_TR(0x6bb57b);
u8 U[4];
w4(U+0,u32(0x11baull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bb580:{NFSU2_TR(0x6bb580);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bb582:{NFSU2_TR(0x6bb582);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bb583:{NFSU2_TR(0x6bb583);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bb588ull));
TAIL_STATIC(0x69e936u,69e);
}
B6bb588:L6bb588:{c.instructions+=2;NFSU2_TR(0x6bb588);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B6bb58b:{NFSU2_TR(0x6bb58b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bb58e:L6bb58e:{c.instructions+=6;NFSU2_TR(0x6bb58e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bb591:{NFSU2_TR(0x6bb591);
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w4(R+0,u32(0-u32(r4(R+0))));
}
B6bb593:{NFSU2_TR(0x6bb593);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B6bb595:{NFSU2_TR(0x6bb595);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6bb596:{NFSU2_TR(0x6bb596);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x80004005ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6bb59b:{NFSU2_TR(0x6bb59b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6bb59c:L6bb59c:{c.instructions+=3;NFSU2_TR(0x6bb59c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6bb59d:{NFSU2_TR(0x6bb59d);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6bb59e:{NFSU2_TR(0x6bb59e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6bb59f:L6bb59f:{c.instructions+=2;NFSU2_TR(0x6bb59f);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6bb5a2:{NFSU2_TR(0x6bb5a2);
if(r1(R+518)){{goto L6bb5bf;}}
}
B6bb5a4:L6bb5a4:{c.instructions+=6;NFSU2_TR(0x6bb5a4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bb5a5:{NFSU2_TR(0x6bb5a5);
u8 U[4];
w4(U+0,u32(0x7bb068ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bb5aa:{NFSU2_TR(0x6bb5aa);
u8 U[4];
w4(U+0,u32(0x11b1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bb5af:{NFSU2_TR(0x6bb5af);
u8 U[20];
w4(U+0,u32(u32(u32(0xffffffe0ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+16));
}
B6bb5b3:{NFSU2_TR(0x6bb5b3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bb5b4:{NFSU2_TR(0x6bb5b4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bb5b9ull));
TAIL_STATIC(0x69e936u,69e);
}
B6bb5b9:L6bb5b9:{c.instructions+=2;NFSU2_TR(0x6bb5b9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B6bb5bc:{NFSU2_TR(0x6bb5bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bb5bf:L6bb5bf:{c.instructions+=2;NFSU2_TR(0x6bb5bf);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6bb5c3:{NFSU2_TR(0x6bb5c3);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6bb56au);}goto L6bb56a;}}
}
B6bb5c5:L6bb5c5:{c.instructions+=2;NFSU2_TR(0x6bb5c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6bb5c9:{NFSU2_TR(0x6bb5c9);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6bb56au);}goto L6bb56a;}
}
B6bb5cb:L6bb5cb:{c.instructions+=27;NFSU2_TR(0x6bb5cb);
__builtin_memmove((R+28),(R+28),4);
}
B6bb5cd:{NFSU2_TR(0x6bb5cd);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bb5ce:{NFSU2_TR(0x6bb5ce);
__builtin_memmove((R+20),(R+16),4);
}
B6bb5d0:{NFSU2_TR(0x6bb5d0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x50ull))));
}
B6bb5d3:{NFSU2_TR(0x6bb5d3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bb5d4:{NFSU2_TR(0x6bb5d4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bb5d5:{NFSU2_TR(0x6bb5d5);
__builtin_memmove((R+24),(R+4),4);
}
B6bb5d7:{NFSU2_TR(0x6bb5d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bb5dd:{NFSU2_TR(0x6bb5dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6bb5e0:{NFSU2_TR(0x6bb5e0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bb5e1:{NFSU2_TR(0x6bb5e1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+28),(U+0),4);
}
B6bb5e3:{NFSU2_TR(0x6bb5e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bb5e6:{NFSU2_TR(0x6bb5e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6bb5e9:{NFSU2_TR(0x6bb5e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bb5ec:{NFSU2_TR(0x6bb5ec);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6bb5ee:{NFSU2_TR(0x6bb5ee);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bb5ef:{NFSU2_TR(0x6bb5ef);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bb5f0:{NFSU2_TR(0x6bb5f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bb5f3:{NFSU2_TR(0x6bb5f3);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bb5f5:{NFSU2_TR(0x6bb5f5);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6bb5f8:{NFSU2_TR(0x6bb5f8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bb5f9:{NFSU2_TR(0x6bb5f9);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6bb5ff:{NFSU2_TR(0x6bb5ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bb602:{NFSU2_TR(0x6bb602);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6bb604:{NFSU2_TR(0x6bb604);
__builtin_memmove((R+4),(R+24),4);
}
B6bb606:{NFSU2_TR(0x6bb606);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+28,u32(u32(r4(R+28))&u32(u32(0xfffffull))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6bb60c:{NFSU2_TR(0x6bb60c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bb612ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6bb612:L6bb612:{c.instructions+=2;NFSU2_TR(0x6bb612);
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
B6bb614:{NFSU2_TR(0x6bb614);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6bb6a2;}}
}
B6bb61a:L6bb61a:{c.instructions+=1;NFSU2_TR(0x6bb61a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bb61d:L6bb61d:{c.instructions+=9;NFSU2_TR(0x6bb61d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6bb620:{NFSU2_TR(0x6bb620);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x220ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6bb626:{NFSU2_TR(0x6bb626);
__builtin_memmove((R+0),(R+8),4);
}
B6bb628:{NFSU2_TR(0x6bb628);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6bb62b:{NFSU2_TR(0x6bb62b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+8))));
}
B6bb62e:{NFSU2_TR(0x6bb62e);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffc0ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6bb632:{NFSU2_TR(0x6bb632);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x224ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6bb638:{NFSU2_TR(0x6bb638);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffb0ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6bb63c:{NFSU2_TR(0x6bb63c);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6bb655;}}
}
B6bb63e:L6bb63e:{c.instructions+=7;NFSU2_TR(0x6bb63e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6bb641:{NFSU2_TR(0x6bb641);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6bb644:{NFSU2_TR(0x6bb644);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6bb647:{NFSU2_TR(0x6bb647);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6bb64a:{NFSU2_TR(0x6bb64a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6bb64d:{NFSU2_TR(0x6bb64d);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffd0ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B6bb651:{NFSU2_TR(0x6bb651);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffe0ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6bb655:L6bb655:{c.instructions+=3;NFSU2_TR(0x6bb655);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6bb658:{NFSU2_TR(0x6bb658);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x4ull))));
}
B6bb65c:{NFSU2_TR(0x6bb65c);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6bb61du);}goto L6bb61d;}}
}
B6bb65e:L6bb65e:{c.instructions+=16;NFSU2_TR(0x6bb65e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bb661:{NFSU2_TR(0x6bb661);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bb662:{NFSU2_TR(0x6bb662);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bb663:{NFSU2_TR(0x6bb663);
u8 U[4];
w4(U+0,u32(0x1000000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bb668:{NFSU2_TR(0x6bb668);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bb669:{NFSU2_TR(0x6bb669);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bb66a:{NFSU2_TR(0x6bb66a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bb66b:{NFSU2_TR(0x6bb66b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6bb66e:{NFSU2_TR(0x6bb66e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bb66f:{NFSU2_TR(0x6bb66f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6bb672:{NFSU2_TR(0x6bb672);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6bb675:{NFSU2_TR(0x6bb675);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6bb678:{NFSU2_TR(0x6bb678);
__builtin_memmove((R+4),(R+24),4);
}
B6bb67a:{NFSU2_TR(0x6bb67a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bb67b:{NFSU2_TR(0x6bb67b);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bb67d:{NFSU2_TR(0x6bb67d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bb682ull));
TAIL_STATIC(0x6d1ab8u,6d1);
}
B6bb682:L6bb682:{c.instructions+=16;NFSU2_TR(0x6bb682);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bb683:{NFSU2_TR(0x6bb683);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bb684:{NFSU2_TR(0x6bb684);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bb685:{NFSU2_TR(0x6bb685);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bb686:{NFSU2_TR(0x6bb686);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bb687:{NFSU2_TR(0x6bb687);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6bb68a:{NFSU2_TR(0x6bb68a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bb68b:{NFSU2_TR(0x6bb68b);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6bb68e:{NFSU2_TR(0x6bb68e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bb68f:{NFSU2_TR(0x6bb68f);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6bb692:{NFSU2_TR(0x6bb692);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bb693:{NFSU2_TR(0x6bb693);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6bb696:{NFSU2_TR(0x6bb696);
__builtin_memmove((R+4),(R+24),4);
}
B6bb698:{NFSU2_TR(0x6bb698);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6bb69b:{NFSU2_TR(0x6bb69b);
u8 U[4];
w4(U+0,u32(0x58ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bb69d:{NFSU2_TR(0x6bb69d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bb6a2ull));
TAIL_STATIC(0x6d1ab8u,6d1);
}
B6bb6a2:L6bb6a2:{c.instructions+=5;NFSU2_TR(0x6bb6a2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6bb6a3:{NFSU2_TR(0x6bb6a3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6bb6a4:{NFSU2_TR(0x6bb6a4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6bb6a5:{NFSU2_TR(0x6bb6a5);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6bb6a6:{NFSU2_TR(0x6bb6a6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6bb6a7:L6bb6a7:{c.instructions+=27;NFSU2_TR(0x6bb6a7);
__builtin_memmove((R+28),(R+28),4);
}
B6bb6a9:{NFSU2_TR(0x6bb6a9);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bb6aa:{NFSU2_TR(0x6bb6aa);
__builtin_memmove((R+20),(R+16),4);
}
B6bb6ac:{NFSU2_TR(0x6bb6ac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x50ull))));
}
B6bb6af:{NFSU2_TR(0x6bb6af);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bb6b0:{NFSU2_TR(0x6bb6b0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bb6b1:{NFSU2_TR(0x6bb6b1);
__builtin_memmove((R+24),(R+4),4);
}
B6bb6b3:{NFSU2_TR(0x6bb6b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bb6b9:{NFSU2_TR(0x6bb6b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6bb6bc:{NFSU2_TR(0x6bb6bc);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bb6bd:{NFSU2_TR(0x6bb6bd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+28),(U+0),4);
}
B6bb6bf:{NFSU2_TR(0x6bb6bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bb6c2:{NFSU2_TR(0x6bb6c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6bb6c5:{NFSU2_TR(0x6bb6c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bb6c8:{NFSU2_TR(0x6bb6c8);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6bb6ca:{NFSU2_TR(0x6bb6ca);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bb6cb:{NFSU2_TR(0x6bb6cb);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bb6cc:{NFSU2_TR(0x6bb6cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bb6cf:{NFSU2_TR(0x6bb6cf);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bb6d1:{NFSU2_TR(0x6bb6d1);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6bb6d4:{NFSU2_TR(0x6bb6d4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bb6d5:{NFSU2_TR(0x6bb6d5);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6bb6db:{NFSU2_TR(0x6bb6db);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bb6de:{NFSU2_TR(0x6bb6de);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6bb6e0:{NFSU2_TR(0x6bb6e0);
__builtin_memmove((R+4),(R+24),4);
}
B6bb6e2:{NFSU2_TR(0x6bb6e2);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+28,u32(u32(r4(R+28))&u32(u32(0xfffffull))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6bb6e8:{NFSU2_TR(0x6bb6e8);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bb6eeull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6bb6ee:L6bb6ee:{c.instructions+=2;NFSU2_TR(0x6bb6ee);
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
B6bb6f0:{NFSU2_TR(0x6bb6f0);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6bb77e;}}
}
B6bb6f6:L6bb6f6:{c.instructions+=1;NFSU2_TR(0x6bb6f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bb6f9:L6bb6f9:{c.instructions+=9;NFSU2_TR(0x6bb6f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6bb6fc:{NFSU2_TR(0x6bb6fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x220ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6bb702:{NFSU2_TR(0x6bb702);
__builtin_memmove((R+0),(R+8),4);
}
B6bb704:{NFSU2_TR(0x6bb704);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6bb707:{NFSU2_TR(0x6bb707);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+8))));
}
B6bb70a:{NFSU2_TR(0x6bb70a);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffb0ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6bb70e:{NFSU2_TR(0x6bb70e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x224ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6bb714:{NFSU2_TR(0x6bb714);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffc0ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6bb718:{NFSU2_TR(0x6bb718);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6bb731;}}
}
B6bb71a:L6bb71a:{c.instructions+=7;NFSU2_TR(0x6bb71a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6bb71d:{NFSU2_TR(0x6bb71d);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6bb720:{NFSU2_TR(0x6bb720);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6bb723:{NFSU2_TR(0x6bb723);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6bb726:{NFSU2_TR(0x6bb726);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6bb729:{NFSU2_TR(0x6bb729);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffd0ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B6bb72d:{NFSU2_TR(0x6bb72d);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffe0ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6bb731:L6bb731:{c.instructions+=3;NFSU2_TR(0x6bb731);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6bb734:{NFSU2_TR(0x6bb734);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x4ull))));
}
B6bb738:{NFSU2_TR(0x6bb738);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6bb6f9u);}goto L6bb6f9;}}
}
B6bb73a:L6bb73a:{c.instructions+=16;NFSU2_TR(0x6bb73a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bb73d:{NFSU2_TR(0x6bb73d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bb73e:{NFSU2_TR(0x6bb73e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bb73f:{NFSU2_TR(0x6bb73f);
u8 U[4];
w4(U+0,u32(0x1000000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bb744:{NFSU2_TR(0x6bb744);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bb745:{NFSU2_TR(0x6bb745);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bb746:{NFSU2_TR(0x6bb746);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bb747:{NFSU2_TR(0x6bb747);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6bb74a:{NFSU2_TR(0x6bb74a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bb74b:{NFSU2_TR(0x6bb74b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6bb74e:{NFSU2_TR(0x6bb74e);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6bb751:{NFSU2_TR(0x6bb751);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6bb754:{NFSU2_TR(0x6bb754);
__builtin_memmove((R+4),(R+24),4);
}
B6bb756:{NFSU2_TR(0x6bb756);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bb757:{NFSU2_TR(0x6bb757);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bb759:{NFSU2_TR(0x6bb759);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bb75eull));
TAIL_STATIC(0x6d1ab8u,6d1);
}
B6bb75e:L6bb75e:{c.instructions+=16;NFSU2_TR(0x6bb75e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bb75f:{NFSU2_TR(0x6bb75f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bb760:{NFSU2_TR(0x6bb760);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bb761:{NFSU2_TR(0x6bb761);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bb762:{NFSU2_TR(0x6bb762);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bb763:{NFSU2_TR(0x6bb763);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6bb766:{NFSU2_TR(0x6bb766);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bb767:{NFSU2_TR(0x6bb767);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6bb76a:{NFSU2_TR(0x6bb76a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bb76b:{NFSU2_TR(0x6bb76b);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6bb76e:{NFSU2_TR(0x6bb76e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bb76f:{NFSU2_TR(0x6bb76f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6bb772:{NFSU2_TR(0x6bb772);
__builtin_memmove((R+4),(R+24),4);
}
B6bb774:{NFSU2_TR(0x6bb774);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6bb777:{NFSU2_TR(0x6bb777);
u8 U[4];
w4(U+0,u32(0x58ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bb779:{NFSU2_TR(0x6bb779);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bb77eull));
TAIL_STATIC(0x6d1ab8u,6d1);
}
B6bb77e:L6bb77e:{c.instructions+=5;NFSU2_TR(0x6bb77e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6bb77f:{NFSU2_TR(0x6bb77f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6bb780:{NFSU2_TR(0x6bb780);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6bb781:{NFSU2_TR(0x6bb781);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6bb782:{NFSU2_TR(0x6bb782);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6bb783:L6bb783:{c.instructions+=32;NFSU2_TR(0x6bb783);
__builtin_memmove((R+28),(R+28),4);
}
B6bb785:{NFSU2_TR(0x6bb785);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bb786:{NFSU2_TR(0x6bb786);
__builtin_memmove((R+20),(R+16),4);
}
B6bb788:{NFSU2_TR(0x6bb788);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x34ull))));
}
B6bb78b:{NFSU2_TR(0x6bb78b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bb78c:{NFSU2_TR(0x6bb78c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bb78d:{NFSU2_TR(0x6bb78d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bb78e:{NFSU2_TR(0x6bb78e);
__builtin_memmove((R+28),(R+4),4);
}
B6bb790:{NFSU2_TR(0x6bb790);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bb796:{NFSU2_TR(0x6bb796);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6bb799:{NFSU2_TR(0x6bb799);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+24),(U+0),4);
}
B6bb79b:{NFSU2_TR(0x6bb79b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6bb79e:{NFSU2_TR(0x6bb79e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6bb7a0:{NFSU2_TR(0x6bb7a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bb7a3:{NFSU2_TR(0x6bb7a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6bb7a6:{NFSU2_TR(0x6bb7a6);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0xfffffull))));
}
B6bb7ac:{NFSU2_TR(0x6bb7ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6bb7af:{NFSU2_TR(0x6bb7af);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bb7b2:{NFSU2_TR(0x6bb7b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bb7b5:{NFSU2_TR(0x6bb7b5);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6bb7b8:{NFSU2_TR(0x6bb7b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bb7bb:{NFSU2_TR(0x6bb7bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6bb7be:{NFSU2_TR(0x6bb7be);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6bb7c0:{NFSU2_TR(0x6bb7c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bb7c3:{NFSU2_TR(0x6bb7c3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6bb7c5:{NFSU2_TR(0x6bb7c5);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6bb7c8:{NFSU2_TR(0x6bb7c8);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6bb7cb:{NFSU2_TR(0x6bb7cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6bb7ce:{NFSU2_TR(0x6bb7ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bb7d1:{NFSU2_TR(0x6bb7d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bb7d4:{NFSU2_TR(0x6bb7d4);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6bb7d7:{NFSU2_TR(0x6bb7d7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6bb7e1;}}
}
B6bb7d9:L6bb7d9:{c.instructions+=3;NFSU2_TR(0x6bb7d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bb7dc:{NFSU2_TR(0x6bb7dc);
u8 U[22];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
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
B6bb7df:{NFSU2_TR(0x6bb7df);
if(r1(R+518)){{goto L6bb7fc;}}
}
B6bb7e1:L6bb7e1:{c.instructions+=4;NFSU2_TR(0x6bb7e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bb7e4:{NFSU2_TR(0x6bb7e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6bb7e7:{NFSU2_TR(0x6bb7e7);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6bb7ea:{NFSU2_TR(0x6bb7ea);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6bb899;}}
}
B6bb7f0:L6bb7f0:{c.instructions+=3;NFSU2_TR(0x6bb7f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bb7f3:{NFSU2_TR(0x6bb7f3);
u8 U[22];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
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
B6bb7f6:{NFSU2_TR(0x6bb7f6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6bb899;}}
}
B6bb7fc:L6bb7fc:{c.instructions+=9;NFSU2_TR(0x6bb7fc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6bb7fe:{NFSU2_TR(0x6bb7fe);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bb800:{NFSU2_TR(0x6bb800);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bb802:{NFSU2_TR(0x6bb802);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bb804:{NFSU2_TR(0x6bb804);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((R+4),(U+0),4);
}
B6bb807:{NFSU2_TR(0x6bb807);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bb808:{NFSU2_TR(0x6bb808);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6bb80e:{NFSU2_TR(0x6bb80e);
__builtin_memmove((R+4),(R+28),4);
}
B6bb810:{NFSU2_TR(0x6bb810);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bb816ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6bb816:L6bb816:{c.instructions+=3;NFSU2_TR(0x6bb816);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6bb818:{NFSU2_TR(0x6bb818);
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
B6bb81a:{NFSU2_TR(0x6bb81a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6bb8b4;}}
}
B6bb820:L6bb820:{c.instructions+=3;NFSU2_TR(0x6bb820);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+4))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6bb823:{NFSU2_TR(0x6bb823);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bb826:{NFSU2_TR(0x6bb826);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6bb862;}}
}
B6bb828:L6bb828:{c.instructions+=6;NFSU2_TR(0x6bb828);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6bb82b:{NFSU2_TR(0x6bb82b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bb82e:{NFSU2_TR(0x6bb82e);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((R+8),(U+0),4);
}
B6bb831:{NFSU2_TR(0x6bb831);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+8))));
}
B6bb833:{NFSU2_TR(0x6bb833);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bb836:{NFSU2_TR(0x6bb836);
{goto L6bb83b;}
}
B6bb838:L6bb838:{c.instructions+=1;NFSU2_TR(0x6bb838);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6bb83b:L6bb83b:{c.instructions+=12;NFSU2_TR(0x6bb83b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6bb83e:{NFSU2_TR(0x6bb83e);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B6bb841:{NFSU2_TR(0x6bb841);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B6bb843:{NFSU2_TR(0x6bb843);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffdcull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B6bb847:{NFSU2_TR(0x6bb847);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6bb84a:{NFSU2_TR(0x6bb84a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6bb84d:{NFSU2_TR(0x6bb84d);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffccull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B6bb851:{NFSU2_TR(0x6bb851);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6bb854:{NFSU2_TR(0x6bb854);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffdcull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6bb858:{NFSU2_TR(0x6bb858);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6bb85b:{NFSU2_TR(0x6bb85b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B6bb85e:{NFSU2_TR(0x6bb85e);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6bb838u);}goto L6bb838;}}
}
B6bb860:L6bb860:{c.instructions+=1;NFSU2_TR(0x6bb860);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6bb862:L6bb862:{c.instructions+=14;NFSU2_TR(0x6bb862);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bb863:{NFSU2_TR(0x6bb863);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bb864:{NFSU2_TR(0x6bb864);
u8 U[4];
w4(U+0,u32(0x1000000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bb869:{NFSU2_TR(0x6bb869);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bb86a:{NFSU2_TR(0x6bb86a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bb86b:{NFSU2_TR(0x6bb86b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bb86c:{NFSU2_TR(0x6bb86c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6bb86f:{NFSU2_TR(0x6bb86f);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((R+0),(U+0),4);
}
B6bb872:{NFSU2_TR(0x6bb872);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bb873:{NFSU2_TR(0x6bb873);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6bb876:{NFSU2_TR(0x6bb876);
__builtin_memmove((R+4),(R+28),4);
}
B6bb878:{NFSU2_TR(0x6bb878);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bb879:{NFSU2_TR(0x6bb879);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bb87b:{NFSU2_TR(0x6bb87b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bb880ull));
TAIL_STATIC(0x6d1ab8u,6d1);
}
B6bb880:L6bb880:{c.instructions+=14;NFSU2_TR(0x6bb880);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6bb882:{NFSU2_TR(0x6bb882);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bb883:{NFSU2_TR(0x6bb883);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bb884:{NFSU2_TR(0x6bb884);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bb885:{NFSU2_TR(0x6bb885);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bb886:{NFSU2_TR(0x6bb886);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bb887:{NFSU2_TR(0x6bb887);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6bb88a:{NFSU2_TR(0x6bb88a);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((R+0),(U+0),4);
}
B6bb88d:{NFSU2_TR(0x6bb88d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bb88e:{NFSU2_TR(0x6bb88e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bb88f:{NFSU2_TR(0x6bb88f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6bb892:{NFSU2_TR(0x6bb892);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6bb895:{NFSU2_TR(0x6bb895);
u8 U[4];
w4(U+0,u32(0x58ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bb897:{NFSU2_TR(0x6bb897);
{goto L6bb8ad;}
}
B6bb899:L6bb899:{c.instructions+=12;NFSU2_TR(0x6bb899);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6bb89b:{NFSU2_TR(0x6bb89b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bb89c:{NFSU2_TR(0x6bb89c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bb89d:{NFSU2_TR(0x6bb89d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bb89e:{NFSU2_TR(0x6bb89e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bb89f:{NFSU2_TR(0x6bb89f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bb8a0:{NFSU2_TR(0x6bb8a0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bb8a1:{NFSU2_TR(0x6bb8a1);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6bb8a4:{NFSU2_TR(0x6bb8a4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bb8a5:{NFSU2_TR(0x6bb8a5);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6bb8a8:{NFSU2_TR(0x6bb8a8);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6bb8ab:{NFSU2_TR(0x6bb8ab);
u8 U[4];
w4(U+0,u32(0xbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bb8ad:L6bb8ad:{c.instructions+=2;NFSU2_TR(0x6bb8ad);
__builtin_memmove((R+4),(R+28),4);
}
B6bb8af:{NFSU2_TR(0x6bb8af);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bb8b4ull));
TAIL_STATIC(0x6d1ab8u,6d1);
}
B6bb8b4:L6bb8b4:{c.instructions+=5;NFSU2_TR(0x6bb8b4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6bb8b5:{NFSU2_TR(0x6bb8b5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6bb8b6:{NFSU2_TR(0x6bb8b6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6bb8b7:{NFSU2_TR(0x6bb8b7);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6bb8b8:{NFSU2_TR(0x6bb8b8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6bb8b9:L6bb8b9:{c.instructions+=32;NFSU2_TR(0x6bb8b9);
__builtin_memmove((R+28),(R+28),4);
}
B6bb8bb:{NFSU2_TR(0x6bb8bb);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bb8bc:{NFSU2_TR(0x6bb8bc);
__builtin_memmove((R+20),(R+16),4);
}
B6bb8be:{NFSU2_TR(0x6bb8be);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x34ull))));
}
B6bb8c1:{NFSU2_TR(0x6bb8c1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bb8c2:{NFSU2_TR(0x6bb8c2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bb8c3:{NFSU2_TR(0x6bb8c3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bb8c4:{NFSU2_TR(0x6bb8c4);
__builtin_memmove((R+28),(R+4),4);
}
B6bb8c6:{NFSU2_TR(0x6bb8c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bb8cc:{NFSU2_TR(0x6bb8cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6bb8cf:{NFSU2_TR(0x6bb8cf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+24),(U+0),4);
}
B6bb8d1:{NFSU2_TR(0x6bb8d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6bb8d4:{NFSU2_TR(0x6bb8d4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6bb8d6:{NFSU2_TR(0x6bb8d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bb8d9:{NFSU2_TR(0x6bb8d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6bb8dc:{NFSU2_TR(0x6bb8dc);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0xfffffull))));
}
B6bb8e2:{NFSU2_TR(0x6bb8e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6bb8e5:{NFSU2_TR(0x6bb8e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bb8e8:{NFSU2_TR(0x6bb8e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bb8eb:{NFSU2_TR(0x6bb8eb);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6bb8ee:{NFSU2_TR(0x6bb8ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bb8f1:{NFSU2_TR(0x6bb8f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6bb8f4:{NFSU2_TR(0x6bb8f4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6bb8f6:{NFSU2_TR(0x6bb8f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bb8f9:{NFSU2_TR(0x6bb8f9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6bb8fb:{NFSU2_TR(0x6bb8fb);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6bb8fe:{NFSU2_TR(0x6bb8fe);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6bb901:{NFSU2_TR(0x6bb901);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6bb904:{NFSU2_TR(0x6bb904);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bb907:{NFSU2_TR(0x6bb907);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bb90a:{NFSU2_TR(0x6bb90a);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6bb90d:{NFSU2_TR(0x6bb90d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6bb917;}}
}
B6bb90f:L6bb90f:{c.instructions+=3;NFSU2_TR(0x6bb90f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bb912:{NFSU2_TR(0x6bb912);
u8 U[22];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
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
B6bb915:{NFSU2_TR(0x6bb915);
if(r1(R+518)){{goto L6bb932;}}
}
B6bb917:L6bb917:{c.instructions+=4;NFSU2_TR(0x6bb917);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bb91a:{NFSU2_TR(0x6bb91a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6bb91d:{NFSU2_TR(0x6bb91d);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6bb920:{NFSU2_TR(0x6bb920);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6bb9cf;}}
}
B6bb926:L6bb926:{c.instructions+=3;NFSU2_TR(0x6bb926);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bb929:{NFSU2_TR(0x6bb929);
u8 U[22];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
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
B6bb92c:{NFSU2_TR(0x6bb92c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6bb9cf;}}
}
B6bb932:L6bb932:{c.instructions+=9;NFSU2_TR(0x6bb932);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6bb934:{NFSU2_TR(0x6bb934);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bb936:{NFSU2_TR(0x6bb936);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bb938:{NFSU2_TR(0x6bb938);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bb93a:{NFSU2_TR(0x6bb93a);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((R+4),(U+0),4);
}
B6bb93d:{NFSU2_TR(0x6bb93d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bb93e:{NFSU2_TR(0x6bb93e);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6bb944:{NFSU2_TR(0x6bb944);
__builtin_memmove((R+4),(R+28),4);
}
B6bb946:{NFSU2_TR(0x6bb946);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bb94cull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6bb94c:L6bb94c:{c.instructions+=3;NFSU2_TR(0x6bb94c);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6bb94e:{NFSU2_TR(0x6bb94e);
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
B6bb950:{NFSU2_TR(0x6bb950);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6bb9ea;}}
}
B6bb956:L6bb956:{c.instructions+=3;NFSU2_TR(0x6bb956);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+4))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6bb959:{NFSU2_TR(0x6bb959);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bb95c:{NFSU2_TR(0x6bb95c);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6bb998;}}
}
B6bb95e:L6bb95e:{c.instructions+=6;NFSU2_TR(0x6bb95e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6bb961:{NFSU2_TR(0x6bb961);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bb964:{NFSU2_TR(0x6bb964);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((R+8),(U+0),4);
}
B6bb967:{NFSU2_TR(0x6bb967);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+8))));
}
B6bb969:{NFSU2_TR(0x6bb969);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bb96c:{NFSU2_TR(0x6bb96c);
{goto L6bb971;}
}
B6bb96e:L6bb96e:{c.instructions+=1;NFSU2_TR(0x6bb96e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6bb971:L6bb971:{c.instructions+=12;NFSU2_TR(0x6bb971);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6bb974:{NFSU2_TR(0x6bb974);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B6bb977:{NFSU2_TR(0x6bb977);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B6bb979:{NFSU2_TR(0x6bb979);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffdcull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B6bb97d:{NFSU2_TR(0x6bb97d);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6bb980:{NFSU2_TR(0x6bb980);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6bb983:{NFSU2_TR(0x6bb983);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffccull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B6bb987:{NFSU2_TR(0x6bb987);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6bb98a:{NFSU2_TR(0x6bb98a);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffdcull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6bb98e:{NFSU2_TR(0x6bb98e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6bb991:{NFSU2_TR(0x6bb991);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B6bb994:{NFSU2_TR(0x6bb994);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6bb96eu);}goto L6bb96e;}}
}
B6bb996:L6bb996:{c.instructions+=1;NFSU2_TR(0x6bb996);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6bb998:L6bb998:{c.instructions+=14;NFSU2_TR(0x6bb998);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bb999:{NFSU2_TR(0x6bb999);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bb99a:{NFSU2_TR(0x6bb99a);
u8 U[4];
w4(U+0,u32(0x1000000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bb99f:{NFSU2_TR(0x6bb99f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bb9a0:{NFSU2_TR(0x6bb9a0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bb9a1:{NFSU2_TR(0x6bb9a1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bb9a2:{NFSU2_TR(0x6bb9a2);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6bb9a5:{NFSU2_TR(0x6bb9a5);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((R+0),(U+0),4);
}
B6bb9a8:{NFSU2_TR(0x6bb9a8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bb9a9:{NFSU2_TR(0x6bb9a9);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6bb9ac:{NFSU2_TR(0x6bb9ac);
__builtin_memmove((R+4),(R+28),4);
}
B6bb9ae:{NFSU2_TR(0x6bb9ae);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bb9af:{NFSU2_TR(0x6bb9af);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bb9b1:{NFSU2_TR(0x6bb9b1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bb9b6ull));
TAIL_STATIC(0x6d1ab8u,6d1);
}
B6bb9b6:L6bb9b6:{c.instructions+=14;NFSU2_TR(0x6bb9b6);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6bb9b8:{NFSU2_TR(0x6bb9b8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bb9b9:{NFSU2_TR(0x6bb9b9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bb9ba:{NFSU2_TR(0x6bb9ba);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bb9bb:{NFSU2_TR(0x6bb9bb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bb9bc:{NFSU2_TR(0x6bb9bc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bb9bd:{NFSU2_TR(0x6bb9bd);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bb9be:{NFSU2_TR(0x6bb9be);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6bb9c1:{NFSU2_TR(0x6bb9c1);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((R+0),(U+0),4);
}
B6bb9c4:{NFSU2_TR(0x6bb9c4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bb9c5:{NFSU2_TR(0x6bb9c5);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6bb9c8:{NFSU2_TR(0x6bb9c8);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6bb9cb:{NFSU2_TR(0x6bb9cb);
u8 U[4];
w4(U+0,u32(0x58ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bb9cd:{NFSU2_TR(0x6bb9cd);
{goto L6bb9e3;}
}
B6bb9cf:L6bb9cf:{c.instructions+=12;NFSU2_TR(0x6bb9cf);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6bb9d1:{NFSU2_TR(0x6bb9d1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bb9d2:{NFSU2_TR(0x6bb9d2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bb9d3:{NFSU2_TR(0x6bb9d3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bb9d4:{NFSU2_TR(0x6bb9d4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bb9d5:{NFSU2_TR(0x6bb9d5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bb9d6:{NFSU2_TR(0x6bb9d6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bb9d7:{NFSU2_TR(0x6bb9d7);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6bb9da:{NFSU2_TR(0x6bb9da);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bb9db:{NFSU2_TR(0x6bb9db);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6bb9de:{NFSU2_TR(0x6bb9de);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6bb9e1:{NFSU2_TR(0x6bb9e1);
u8 U[4];
w4(U+0,u32(0xaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bb9e3:L6bb9e3:{c.instructions+=2;NFSU2_TR(0x6bb9e3);
__builtin_memmove((R+4),(R+28),4);
}
B6bb9e5:{NFSU2_TR(0x6bb9e5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bb9eaull));
TAIL_STATIC(0x6d1ab8u,6d1);
}
B6bb9ea:L6bb9ea:{c.instructions+=5;NFSU2_TR(0x6bb9ea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6bb9eb:{NFSU2_TR(0x6bb9eb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6bb9ec:{NFSU2_TR(0x6bb9ec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6bb9ed:{NFSU2_TR(0x6bb9ed);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6bb9ee:{NFSU2_TR(0x6bb9ee);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6bb9ef:L6bb9ef:{c.instructions+=12;NFSU2_TR(0x6bb9ef);
__builtin_memmove((R+28),(R+28),4);
}
B6bb9f1:{NFSU2_TR(0x6bb9f1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bb9f2:{NFSU2_TR(0x6bb9f2);
__builtin_memmove((R+20),(R+16),4);
}
B6bb9f4:{NFSU2_TR(0x6bb9f4);
u8 U[6];
w1(R+512,u8((r4(R+16))<(u32(0x30ull))));
w1(R+523,sborrow<u32>(r4(R+16),u32(0x30ull)));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x30ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6bb9f7:{NFSU2_TR(0x6bb9f7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bb9f8:{NFSU2_TR(0x6bb9f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6bb9fb:{NFSU2_TR(0x6bb9fb);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bb9fc:{NFSU2_TR(0x6bb9fc);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bb9fd:{NFSU2_TR(0x6bb9fd);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6bba00:{NFSU2_TR(0x6bba00);
__builtin_memmove((R+24),(R+4),4);
}
B6bba02:{NFSU2_TR(0x6bba02);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6bba04:{NFSU2_TR(0x6bba04);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bba07ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6bba07:L6bba07:{c.instructions+=5;NFSU2_TR(0x6bba07);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6bba0a:{NFSU2_TR(0x6bba0a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bba0d:{NFSU2_TR(0x6bba0d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6bba0f:{NFSU2_TR(0x6bba0f);
__builtin_memmove((R+4),(R+24),4);
}
B6bba11:{NFSU2_TR(0x6bba11);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bba14ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6bba14:L6bba14:{c.instructions+=5;NFSU2_TR(0x6bba14);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6bba16:{NFSU2_TR(0x6bba16);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x158ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6bba1c:{NFSU2_TR(0x6bba1c);
__builtin_memmove((R+28),(R+0),4);
}
B6bba1e:{NFSU2_TR(0x6bba1e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bba21:{NFSU2_TR(0x6bba21);
if(r1(R+518)){{goto L6bbb26;}}
}
B6bba27:L6bba27:{c.instructions+=2;NFSU2_TR(0x6bba27);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6bba2b:{NFSU2_TR(0x6bba2b);
if(r1(R+518)){{goto L6bbcbf;}}
}
B6bba31:L6bba31:{c.instructions+=2;NFSU2_TR(0x6bba31);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6bba38:{NFSU2_TR(0x6bba38);
if(r1(R+518)){{goto L6bbb11;}}
}
B6bba3e:L6bba3e:{c.instructions+=3;NFSU2_TR(0x6bba3e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6bba41:{NFSU2_TR(0x6bba41);
__builtin_memmove((R+4),(R+24),4);
}
B6bba43:{NFSU2_TR(0x6bba43);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bba48ull));
TAIL_STATIC(0x6d0cb9u,6d0);
}
B6bba48:L6bba48:{c.instructions+=7;NFSU2_TR(0x6bba48);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bba49:{NFSU2_TR(0x6bba49);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B6bba4b:{NFSU2_TR(0x6bba4b);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6bba4e:{NFSU2_TR(0x6bba4e);
u8 U[4];
w4(U+0,u32(0x7bb1e8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bba53:{NFSU2_TR(0x6bba53);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bba55:{NFSU2_TR(0x6bba55);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bba56:{NFSU2_TR(0x6bba56);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bba5bull));
TAIL_STATIC(0x75e081u,75e);
}
B6bba5b:L6bba5b:{c.instructions+=8;NFSU2_TR(0x6bba5b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B6bba5e:{NFSU2_TR(0x6bba5e);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bba60:{NFSU2_TR(0x6bba60);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6bba63:{NFSU2_TR(0x6bba63);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6bba66:{NFSU2_TR(0x6bba66);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1d4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6bba6c:{NFSU2_TR(0x6bba6c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bba6d:{NFSU2_TR(0x6bba6d);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffefull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B6bba71:{NFSU2_TR(0x6bba71);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bba76ull));
TAIL_STATIC(0x686b20u,686);
}
B6bba76:L6bba76:{c.instructions+=2;NFSU2_TR(0x6bba76);
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
B6bba78:{NFSU2_TR(0x6bba78);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6bbcc8;}}
}
B6bba7e:L6bba7e:{c.instructions+=3;NFSU2_TR(0x6bba7e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1f0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6bba84:{NFSU2_TR(0x6bba84);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6bba8b:{NFSU2_TR(0x6bba8b);
if(r1(R+518)){{goto L6bbb11;}}
}
B6bba91:L6bba91:{c.instructions+=3;NFSU2_TR(0x6bba91);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bba94:{NFSU2_TR(0x6bba94);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6bba96:{NFSU2_TR(0x6bba96);
if(r1(R+518)){{goto L6bbb11;}}
}
B6bba98:L6bba98:{c.instructions+=2;NFSU2_TR(0x6bba98);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6bba9c:{NFSU2_TR(0x6bba9c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6bbb11;}}
}
B6bba9e:L6bba9e:{c.instructions+=3;NFSU2_TR(0x6bba9e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6bbaa1:{NFSU2_TR(0x6bbaa1);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6bbaa5:{NFSU2_TR(0x6bbaa5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6bbb11;}}
}
B6bbaa7:L6bbaa7:{c.instructions+=2;NFSU2_TR(0x6bbaa7);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bbaaa:{NFSU2_TR(0x6bbaaa);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+8),(U+0),4);
}
B6bbaad:L6bbaad:{c.instructions+=4;NFSU2_TR(0x6bbaad);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B6bbaaf:{NFSU2_TR(0x6bbaaf);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6bbab0:{NFSU2_TR(0x6bbab0);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6bbab2:{NFSU2_TR(0x6bbab2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6bbaadu);}goto L6bbaad;}}
}
B6bbab4:L6bbab4:{c.instructions+=4;NFSU2_TR(0x6bbab4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B6bbab6:{NFSU2_TR(0x6bbab6);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x3ull))));
}
B6bbab9:{NFSU2_TR(0x6bbab9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bbaba:{NFSU2_TR(0x6bbaba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bbabfull));
TAIL_STATIC(0x575620u,575);
}
B6bbabf:L6bbabf:{c.instructions+=4;NFSU2_TR(0x6bbabf);
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
B6bbac1:{NFSU2_TR(0x6bbac1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6bbac2:{NFSU2_TR(0x6bbac2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bbac5:{NFSU2_TR(0x6bbac5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6bbad1;}}
}
B6bbac7:L6bbac7:{c.instructions+=2;NFSU2_TR(0x6bbac7);
w4(R+0,u32(0x8007000eull));
}
B6bbacc:{NFSU2_TR(0x6bbacc);
{goto L6bbcc8;}
}
B6bbad1:L6bbad1:{c.instructions+=4;NFSU2_TR(0x6bbad1);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6bbad4:{NFSU2_TR(0x6bbad4);
u8 U[4];
w4(U+0,u32(0x7bb1d8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bbad9:{NFSU2_TR(0x6bbad9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bbada:{NFSU2_TR(0x6bbada);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bbadfull));
TAIL_STATIC(0x75c784u,75c);
}
B6bbadf:L6bbadf:{c.instructions+=6;NFSU2_TR(0x6bbadf);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B6bbae2:{NFSU2_TR(0x6bbae2);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bbae4:{NFSU2_TR(0x6bbae4);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6bbae7:{NFSU2_TR(0x6bbae7);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1d4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6bbaed:{NFSU2_TR(0x6bbaed);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6bbaf0:{NFSU2_TR(0x6bbaf0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bbaf5ull));
TAIL_STATIC(0x686b20u,686);
}
B6bbaf5:L6bbaf5:{c.instructions+=3;NFSU2_TR(0x6bbaf5);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6bbaf8:{NFSU2_TR(0x6bbaf8);
__builtin_memmove((R+28),(R+0),4);
}
B6bbafa:{NFSU2_TR(0x6bbafa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bbaffull));
TAIL_STATIC(0x575630u,575);
}
B6bbaff:L6bbaff:{c.instructions+=3;NFSU2_TR(0x6bbaff);
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
B6bbb01:{NFSU2_TR(0x6bbb01);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6bbb02:{NFSU2_TR(0x6bbb02);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6bbb0b;}}
}
B6bbb04:L6bbb04:{c.instructions+=2;NFSU2_TR(0x6bbb04);
__builtin_memmove((R+0),(R+28),4);
}
B6bbb06:{NFSU2_TR(0x6bbb06);
{goto L6bbcc8;}
}
B6bbb0b:L6bbb0b:{c.instructions+=1;NFSU2_TR(0x6bbb0b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1f0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6bbb11:L6bbb11:{c.instructions+=3;NFSU2_TR(0x6bbb11);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bbb14:{NFSU2_TR(0x6bbb14);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6bbb16:{NFSU2_TR(0x6bbb16);
if(r1(R+518)){{goto L6bbcbf;}}
}
B6bbb1c:L6bbb1c:{c.instructions+=3;NFSU2_TR(0x6bbb1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6bbb1f:{NFSU2_TR(0x6bbb1f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6bbb21:{NFSU2_TR(0x6bbb21);
{goto L6bbcbf;}
}
B6bbb26:L6bbb26:{c.instructions+=2;NFSU2_TR(0x6bbb26);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xbull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6bbb2a:{NFSU2_TR(0x6bbb2a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6bbb4a;}}
}
B6bbb2c:L6bbb2c:{c.instructions+=2;NFSU2_TR(0x6bbb2c);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+28),r4(U+14)));
w4(U+18,u32(u32(r4(R+28))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6bbb2f:{NFSU2_TR(0x6bbb2f);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6bbcc3;}}
}
B6bbb35:L6bbb35:{c.instructions+=5;NFSU2_TR(0x6bbb35);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bbb38:{NFSU2_TR(0x6bbb38);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6bbb3a:{NFSU2_TR(0x6bbb3a);
u8 U[16];
w4(U+0,u32(u32(u32(0x218ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B6bbb41:{NFSU2_TR(0x6bbb41);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6bbb48:{NFSU2_TR(0x6bbb48);
{goto L6bbb73;}
}
B6bbb4a:L6bbb4a:{c.instructions+=2;NFSU2_TR(0x6bbb4a);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x6ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x6ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x6ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6bbb4e:{NFSU2_TR(0x6bbb4e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6bbcc3;}}
}
B6bbb54:L6bbb54:{c.instructions+=2;NFSU2_TR(0x6bbb54);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B6bbb57:{NFSU2_TR(0x6bbb57);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6bbcc3;}}
}
B6bbb5d:L6bbb5d:{c.instructions+=5;NFSU2_TR(0x6bbb5d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6bbb60:{NFSU2_TR(0x6bbb60);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6bbb63:{NFSU2_TR(0x6bbb63);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6bbb65:{NFSU2_TR(0x6bbb65);
u8 U[16];
w4(U+0,u32(u32(u32(0x1f8ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B6bbb6c:{NFSU2_TR(0x6bbb6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6bbb73:L6bbb73:{c.instructions+=3;NFSU2_TR(0x6bbb73);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6bbb75:{NFSU2_TR(0x6bbb75);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bbb78:{NFSU2_TR(0x6bbb78);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6bbba5;}}
}
B6bbb7a:L6bbb7a:{c.instructions+=3;NFSU2_TR(0x6bbb7a);
__builtin_memmove((R+4),(R+8),4);
}
B6bbb7c:{NFSU2_TR(0x6bbb7c);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B6bbb7f:{NFSU2_TR(0x6bbb7f);
if(r1(R+518)){{goto L6bbb9c;}}
}
B6bbb81:L6bbb81:{c.instructions+=2;NFSU2_TR(0x6bbb81);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B6bbb82:{NFSU2_TR(0x6bbb82);
if(r1(R+518)){{goto L6bbb96;}}
}
B6bbb84:L6bbb84:{c.instructions+=2;NFSU2_TR(0x6bbb84);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B6bbb85:{NFSU2_TR(0x6bbb85);
if(r1(R+518)){{goto L6bbb90;}}
}
B6bbb87:L6bbb87:{c.instructions+=2;NFSU2_TR(0x6bbb87);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B6bbb88:{NFSU2_TR(0x6bbb88);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6bbba0;}}
}
B6bbb8a:L6bbb8a:{c.instructions+=2;NFSU2_TR(0x6bbb8a);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))|u32(u8(0x8ull))));
s1(u32(r4(U+0)),r1(U+4));
}
B6bbb8e:{NFSU2_TR(0x6bbb8e);
{goto L6bbba0;}
}
B6bbb90:L6bbb90:{c.instructions+=2;NFSU2_TR(0x6bbb90);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))|u32(u8(0x4ull))));
s1(u32(r4(U+0)),r1(U+4));
}
B6bbb94:{NFSU2_TR(0x6bbb94);
{goto L6bbba0;}
}
B6bbb96:L6bbb96:{c.instructions+=2;NFSU2_TR(0x6bbb96);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))|u32(u8(0x2ull))));
s1(u32(r4(U+0)),r1(U+4));
}
B6bbb9a:{NFSU2_TR(0x6bbb9a);
{goto L6bbba0;}
}
B6bbb9c:L6bbb9c:{c.instructions+=1;NFSU2_TR(0x6bbb9c);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))|u32(u8(0x1ull))));
s1(u32(r4(U+0)),r1(U+4));
}
B6bbba0:L6bbba0:{c.instructions+=3;NFSU2_TR(0x6bbba0);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6bbba1:{NFSU2_TR(0x6bbba1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+8))<(r4(U+0))));
}
B6bbba3:{NFSU2_TR(0x6bbba3);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6bbb7au);}goto L6bbb7a;}}
}
B6bbba5:L6bbba5:{c.instructions+=2;NFSU2_TR(0x6bbba5);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6bbba9:{NFSU2_TR(0x6bbba9);
if(r1(R+518)){{goto L6bbbc4;}}
}
B6bbbab:L6bbbab:{c.instructions+=2;NFSU2_TR(0x6bbbab);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x20ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6bbbb2:{NFSU2_TR(0x6bbbb2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6bbbc0;}}
}
B6bbbb4:L6bbbb4:{c.instructions+=2;NFSU2_TR(0x6bbbb4);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6bbbb8:{NFSU2_TR(0x6bbbb8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6bbbc4;}}
}
B6bbbba:L6bbbba:{c.instructions+=2;NFSU2_TR(0x6bbbba);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6bbbbe:{NFSU2_TR(0x6bbbbe);
if(r1(R+518)){{goto L6bbbc4;}}
}
B6bbbc0:L6bbbc0:{c.instructions+=1;NFSU2_TR(0x6bbbc0);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))|u32(u8(0x20ull))));
s1(u32(r4(U+0)),r1(U+4));
}
B6bbbc4:L6bbbc4:{c.instructions+=3;NFSU2_TR(0x6bbbc4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6bbbc8:{NFSU2_TR(0x6bbbc8);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6bbbcc:{NFSU2_TR(0x6bbbcc);
if(r1(R+518)){{goto L6bbbd5;}}
}
B6bbbce:L6bbbce:{c.instructions+=1;NFSU2_TR(0x6bbbce);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w4(U+4,u32(0x400000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6bbbd5:L6bbbd5:{c.instructions+=3;NFSU2_TR(0x6bbbd5);
u8 U[4];
w4(U+0,u32(0x200001full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bbbda:{NFSU2_TR(0x6bbbda);
__builtin_memmove((R+4),(R+24),4);
}
B6bbbdc:{NFSU2_TR(0x6bbbdc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bbbe1ull));
TAIL_STATIC(0x6d18eau,6d1);
}
B6bbbe1:L6bbbe1:{c.instructions+=2;NFSU2_TR(0x6bbbe1);
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
B6bbbe3:{NFSU2_TR(0x6bbbe3);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6bbcc8;}}
}
B6bbbe9:L6bbbe9:{c.instructions+=3;NFSU2_TR(0x6bbbe9);
u8 U[4];
w4(U+0,u32(0x80000000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bbbee:{NFSU2_TR(0x6bbbee);
__builtin_memmove((R+4),(R+24),4);
}
B6bbbf0:{NFSU2_TR(0x6bbbf0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bbbf5ull));
TAIL_STATIC(0x6cfb73u,6cf);
}
B6bbbf5:L6bbbf5:{c.instructions+=2;NFSU2_TR(0x6bbbf5);
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
B6bbbf7:{NFSU2_TR(0x6bbbf7);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6bbcc8;}}
}
B6bbbfd:L6bbbfd:{c.instructions+=2;NFSU2_TR(0x6bbbfd);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6bbc04:{NFSU2_TR(0x6bbc04);
if(r1(R+518)){{goto L6bbc85;}}
}
B6bbc06:L6bbc06:{c.instructions+=10;NFSU2_TR(0x6bbc06);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6bbc0a:{NFSU2_TR(0x6bbc0a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6bbc0e:{NFSU2_TR(0x6bbc0e);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B6bbc11:{NFSU2_TR(0x6bbc11);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6bbc15:{NFSU2_TR(0x6bbc15);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6bbc18:{NFSU2_TR(0x6bbc18);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6bbc19:{NFSU2_TR(0x6bbc19);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6bbc1a:{NFSU2_TR(0x6bbc1a);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6bbc1b:{NFSU2_TR(0x6bbc1b);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6bbc1c:{NFSU2_TR(0x6bbc1c);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6bbc53;}}
}
B6bbc1e:L6bbc1e:{c.instructions+=2;NFSU2_TR(0x6bbc1e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6bbc21:{NFSU2_TR(0x6bbc21);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6bbc24:L6bbc24:{c.instructions+=3;NFSU2_TR(0x6bbc24);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6bbc26:{NFSU2_TR(0x6bbc26);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+28))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6bbc29:{NFSU2_TR(0x6bbc29);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6bbc45;}}
}
B6bbc2b:L6bbc2b:{c.instructions+=3;NFSU2_TR(0x6bbc2b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6bbc2e:{NFSU2_TR(0x6bbc2e);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6bbc31:{NFSU2_TR(0x6bbc31);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6bbc45;}}
}
B6bbc33:L6bbc33:{c.instructions+=3;NFSU2_TR(0x6bbc33);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6bbc36:{NFSU2_TR(0x6bbc36);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6bbc39:{NFSU2_TR(0x6bbc39);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6bbc45;}}
}
B6bbc3b:L6bbc3b:{c.instructions+=3;NFSU2_TR(0x6bbc3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bbc3e:{NFSU2_TR(0x6bbc3e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6bbc41:{NFSU2_TR(0x6bbc41);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffe0ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6bbc45:L6bbc45:{c.instructions+=5;NFSU2_TR(0x6bbc45);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6bbc48:{NFSU2_TR(0x6bbc48);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bbc4b:{NFSU2_TR(0x6bbc4b);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B6bbc4e:{NFSU2_TR(0x6bbc4e);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6bbc51:{NFSU2_TR(0x6bbc51);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6bbc24u);}goto L6bbc24;}}
}
B6bbc53:L6bbc53:{c.instructions+=2;NFSU2_TR(0x6bbc53);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6bbc56:{NFSU2_TR(0x6bbc56);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6bbc58:L6bbc58:{c.instructions+=3;NFSU2_TR(0x6bbc58);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffe0ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B6bbc5c:{NFSU2_TR(0x6bbc5c);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6bbc5f:{NFSU2_TR(0x6bbc5f);
if(r1(R+518)){{goto L6bbc66;}}
}
B6bbc61:L6bbc61:{c.instructions+=2;NFSU2_TR(0x6bbc61);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffe0ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6bbc65:{NFSU2_TR(0x6bbc65);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6bbc66:L6bbc66:{c.instructions+=3;NFSU2_TR(0x6bbc66);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6bbc67:{NFSU2_TR(0x6bbc67);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0x4ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x4ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6bbc6a:{NFSU2_TR(0x6bbc6a);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6bbc58u);}goto L6bbc58;}}
}
B6bbc6c:L6bbc6c:{c.instructions+=9;NFSU2_TR(0x6bbc6c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6bbc6e:{NFSU2_TR(0x6bbc6e);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bbc70:{NFSU2_TR(0x6bbc70);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6bbc73:{NFSU2_TR(0x6bbc73);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bbc74:{NFSU2_TR(0x6bbc74);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bbc75:{NFSU2_TR(0x6bbc75);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6bbc78:{NFSU2_TR(0x6bbc78);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bbc79:{NFSU2_TR(0x6bbc79);
__builtin_memmove((R+4),(R+24),4);
}
B6bbc7b:{NFSU2_TR(0x6bbc7b);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bbc7eull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6bbc7e:L6bbc7e:{c.instructions+=2;NFSU2_TR(0x6bbc7e);
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
B6bbc80:{NFSU2_TR(0x6bbc80);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6bbcc8;}}
}
B6bbc82:L6bbc82:{c.instructions+=1;NFSU2_TR(0x6bbc82);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6bbc85:L6bbc85:{c.instructions+=16;NFSU2_TR(0x6bbc85);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bbc88:{NFSU2_TR(0x6bbc88);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6bbc8a:{NFSU2_TR(0x6bbc8a);
__builtin_memmove((R+4),(R+0),4);
}
B6bbc8c:{NFSU2_TR(0x6bbc8c);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0xfffffff8ull))));
}
B6bbc8f:{NFSU2_TR(0x6bbc8f);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6bbc92:{NFSU2_TR(0x6bbc92);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x18ull))));
}
B6bbc95:{NFSU2_TR(0x6bbc95);
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+0))));
}
B6bbc97:{NFSU2_TR(0x6bbc97);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6bbc9a:{NFSU2_TR(0x6bbc9a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bbc9c:{NFSU2_TR(0x6bbc9c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6bbc9f:{NFSU2_TR(0x6bbc9f);
w4(R+28,u32(u32(r4(R+28))&u32(u32(0x7ffull))));
}
B6bbca5:{NFSU2_TR(0x6bbca5);
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+28))));
}
B6bbca7:{NFSU2_TR(0x6bbca7);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))|u32(r4(U+4))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6bbcaa:{NFSU2_TR(0x6bbcaa);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bbcab:{NFSU2_TR(0x6bbcab);
__builtin_memmove((R+4),(R+24),4);
}
B6bbcad:{NFSU2_TR(0x6bbcad);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bbcb0ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6bbcb0:L6bbcb0:{c.instructions+=2;NFSU2_TR(0x6bbcb0);
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
B6bbcb2:{NFSU2_TR(0x6bbcb2);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6bbcc8;}}
}
B6bbcb4:L6bbcb4:{c.instructions+=2;NFSU2_TR(0x6bbcb4);
__builtin_memmove((R+4),(R+24),4);
}
B6bbcb6:{NFSU2_TR(0x6bbcb6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bbcbbull));
TAIL_STATIC(0x6ccd02u,6cc);
}
B6bbcbb:L6bbcbb:{c.instructions+=2;NFSU2_TR(0x6bbcbb);
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
B6bbcbd:{NFSU2_TR(0x6bbcbd);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6bbcc8;}}
}
B6bbcbf:L6bbcbf:{c.instructions+=2;NFSU2_TR(0x6bbcbf);
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
B6bbcc1:{NFSU2_TR(0x6bbcc1);
{goto L6bbcc8;}
}
B6bbcc3:L6bbcc3:{c.instructions+=1;NFSU2_TR(0x6bbcc3);
w4(R+0,u32(0x80004005ull));
}
B6bbcc8:L6bbcc8:{c.instructions+=5;NFSU2_TR(0x6bbcc8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6bbcc9:{NFSU2_TR(0x6bbcc9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6bbcca:{NFSU2_TR(0x6bbcca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6bbccb:{NFSU2_TR(0x6bbccb);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6bbccc:{NFSU2_TR(0x6bbccc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6bbccf:L6bbccf:{c.instructions+=11;NFSU2_TR(0x6bbccf);
__builtin_memmove((R+28),(R+28),4);
}
B6bbcd1:{NFSU2_TR(0x6bbcd1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bbcd2:{NFSU2_TR(0x6bbcd2);
__builtin_memmove((R+20),(R+16),4);
}
B6bbcd4:{NFSU2_TR(0x6bbcd4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bbcd5:{NFSU2_TR(0x6bbcd5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bbcd6:{NFSU2_TR(0x6bbcd6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bbcd7:{NFSU2_TR(0x6bbcd7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6bbcda:{NFSU2_TR(0x6bbcda);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6bbcdd:{NFSU2_TR(0x6bbcdd);
__builtin_memmove((R+24),(R+4),4);
}
B6bbcdf:{NFSU2_TR(0x6bbcdf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6bbce1:{NFSU2_TR(0x6bbce1);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bbce4ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6bbce4:L6bbce4:{c.instructions+=5;NFSU2_TR(0x6bbce4);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6bbce7:{NFSU2_TR(0x6bbce7);
__builtin_memmove((R+12),(R+0),4);
}
B6bbce9:{NFSU2_TR(0x6bbce9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6bbceb:{NFSU2_TR(0x6bbceb);
__builtin_memmove((R+4),(R+24),4);
}
B6bbced:{NFSU2_TR(0x6bbced);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bbcf0ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6bbcf0:L6bbcf0:{c.instructions+=4;NFSU2_TR(0x6bbcf0);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xbull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6bbcf3:{NFSU2_TR(0x6bbcf3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6bbcf6:{NFSU2_TR(0x6bbcf6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6bbcf8:{NFSU2_TR(0x6bbcf8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6bbd0a;}}
}
B6bbcfa:L6bbcfa:{c.instructions+=2;NFSU2_TR(0x6bbcfa);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
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
B6bbcfd:{NFSU2_TR(0x6bbcfd);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6bbd31;}}
}
B6bbcff:L6bbcff:{c.instructions+=3;NFSU2_TR(0x6bbcff);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bbd02:{NFSU2_TR(0x6bbd02);
u8 U[4];
w4(U+0,u32(0x1ull));
s4(u32(r4(R+0)),r4(U+0));
}
B6bbd08:{NFSU2_TR(0x6bbd08);
{goto L6bbd2d;}
}
B6bbd0a:L6bbd0a:{c.instructions+=2;NFSU2_TR(0x6bbd0a);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6bbd0d:{NFSU2_TR(0x6bbd0d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6bbd1f;}}
}
B6bbd0f:L6bbd0f:{c.instructions+=2;NFSU2_TR(0x6bbd0f);
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
B6bbd12:{NFSU2_TR(0x6bbd12);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6bbd31;}}
}
B6bbd14:L6bbd14:{c.instructions+=3;NFSU2_TR(0x6bbd14);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bbd17:{NFSU2_TR(0x6bbd17);
u8 U[4];
w4(U+0,u32(0x3ull));
s4(u32(r4(R+0)),r4(U+0));
}
B6bbd1d:{NFSU2_TR(0x6bbd1d);
{goto L6bbd2d;}
}
B6bbd1f:L6bbd1f:{c.instructions+=2;NFSU2_TR(0x6bbd1f);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
w1(R+512,u8((r4(U+6))<(u32(0xffffull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xffffull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xffffull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6bbd25:{NFSU2_TR(0x6bbd25);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6bbd31;}}
}
B6bbd27:L6bbd27:{c.instructions+=2;NFSU2_TR(0x6bbd27);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bbd2a:{NFSU2_TR(0x6bbd2a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0x0ull))));
s4(u32(r4(R+0)),r4(U+0));
}
B6bbd2d:L6bbd2d:{c.instructions+=2;NFSU2_TR(0x6bbd2d);
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
B6bbd2f:{NFSU2_TR(0x6bbd2f);
{goto L6bbd36;}
}
B6bbd31:L6bbd31:{c.instructions+=1;NFSU2_TR(0x6bbd31);
w4(R+0,u32(0x80004005ull));
}
B6bbd36:L6bbd36:{c.instructions+=5;NFSU2_TR(0x6bbd36);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6bbd37:{NFSU2_TR(0x6bbd37);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6bbd38:{NFSU2_TR(0x6bbd38);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6bbd39:{NFSU2_TR(0x6bbd39);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6bbd3a:{NFSU2_TR(0x6bbd3a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6bbd3d:L6bbd3d:{c.instructions+=13;NFSU2_TR(0x6bbd3d);
__builtin_memmove((R+28),(R+28),4);
}
B6bbd3f:{NFSU2_TR(0x6bbd3f);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bbd40:{NFSU2_TR(0x6bbd40);
__builtin_memmove((R+20),(R+16),4);
}
B6bbd42:{NFSU2_TR(0x6bbd42);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bbd43:{NFSU2_TR(0x6bbd43);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bbd44:{NFSU2_TR(0x6bbd44);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bbd45:{NFSU2_TR(0x6bbd45);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bbd46:{NFSU2_TR(0x6bbd46);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6bbd49:{NFSU2_TR(0x6bbd49);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6bbd4c:{NFSU2_TR(0x6bbd4c);
__builtin_memmove((R+24),(R+4),4);
}
B6bbd4e:{NFSU2_TR(0x6bbd4e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6bbd50:{NFSU2_TR(0x6bbd50);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6bbd57:{NFSU2_TR(0x6bbd57);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bbd5aull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6bbd5a:L6bbd5a:{c.instructions+=5;NFSU2_TR(0x6bbd5a);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6bbd5d:{NFSU2_TR(0x6bbd5d);
__builtin_memmove((R+12),(R+0),4);
}
B6bbd5f:{NFSU2_TR(0x6bbd5f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6bbd61:{NFSU2_TR(0x6bbd61);
__builtin_memmove((R+4),(R+24),4);
}
B6bbd63:{NFSU2_TR(0x6bbd63);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bbd66ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6bbd66:L6bbd66:{c.instructions+=4;NFSU2_TR(0x6bbd66);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xbull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6bbd69:{NFSU2_TR(0x6bbd69);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6bbd6c:{NFSU2_TR(0x6bbd6c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6bbd6e:{NFSU2_TR(0x6bbd6e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6bbd80;}}
}
B6bbd70:L6bbd70:{c.instructions+=2;NFSU2_TR(0x6bbd70);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x4ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x4ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6bbd73:{NFSU2_TR(0x6bbd73);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6bbdb6;}}
}
B6bbd75:L6bbd75:{c.instructions+=3;NFSU2_TR(0x6bbd75);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bbd78:{NFSU2_TR(0x6bbd78);
u8 U[4];
w4(U+0,u32(0x8ull));
s4(u32(r4(R+0)),r4(U+0));
}
B6bbd7e:{NFSU2_TR(0x6bbd7e);
{goto L6bbda6;}
}
B6bbd80:L6bbd80:{c.instructions+=2;NFSU2_TR(0x6bbd80);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xdull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6bbd83:{NFSU2_TR(0x6bbd83);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6bbd94;}}
}
B6bbd85:L6bbd85:{c.instructions+=2;NFSU2_TR(0x6bbd85);
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
B6bbd87:{NFSU2_TR(0x6bbd87);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6bbdb6;}}
}
B6bbd89:L6bbd89:{c.instructions+=3;NFSU2_TR(0x6bbd89);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bbd8c:{NFSU2_TR(0x6bbd8c);
u8 U[4];
w4(U+0,u32(0x9ull));
s4(u32(r4(R+0)),r4(U+0));
}
B6bbd92:{NFSU2_TR(0x6bbd92);
{goto L6bbda6;}
}
B6bbd94:L6bbd94:{c.instructions+=2;NFSU2_TR(0x6bbd94);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
w1(R+512,u8((r4(U+6))<(u32(0xffffull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xffffull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xffffull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6bbd9a:{NFSU2_TR(0x6bbd9a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6bbdb6;}}
}
B6bbd9c:L6bbd9c:{c.instructions+=3;NFSU2_TR(0x6bbd9c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bbd9f:{NFSU2_TR(0x6bbd9f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0x0ull))));
s4(u32(r4(R+0)),r4(U+0));
}
B6bbda2:{NFSU2_TR(0x6bbda2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6bbda6:L6bbda6:{c.instructions+=3;NFSU2_TR(0x6bbda6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bbda9:{NFSU2_TR(0x6bbda9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6bbdab:{NFSU2_TR(0x6bbdab);
if(r1(R+518)){{goto L6bbdb2;}}
}
B6bbdad:L6bbdad:{c.instructions+=2;NFSU2_TR(0x6bbdad);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6bbdb0:{NFSU2_TR(0x6bbdb0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6bbdb2:L6bbdb2:{c.instructions+=2;NFSU2_TR(0x6bbdb2);
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
B6bbdb4:{NFSU2_TR(0x6bbdb4);
{goto L6bbdbb;}
}
B6bbdb6:L6bbdb6:{c.instructions+=1;NFSU2_TR(0x6bbdb6);
w4(R+0,u32(0x80004005ull));
}
B6bbdbb:L6bbdbb:{c.instructions+=5;NFSU2_TR(0x6bbdbb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6bbdbc:{NFSU2_TR(0x6bbdbc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6bbdbd:{NFSU2_TR(0x6bbdbd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6bbdbe:{NFSU2_TR(0x6bbdbe);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6bbdbf:{NFSU2_TR(0x6bbdbf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6bbdc2:L6bbdc2:{c.instructions+=8;NFSU2_TR(0x6bbdc2);
__builtin_memmove((R+28),(R+28),4);
}
B6bbdc4:{NFSU2_TR(0x6bbdc4);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bbdc5:{NFSU2_TR(0x6bbdc5);
__builtin_memmove((R+20),(R+16),4);
}
B6bbdc7:{NFSU2_TR(0x6bbdc7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bbdca:{NFSU2_TR(0x6bbdca);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6bbdcd:{NFSU2_TR(0x6bbdcd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bbdce:{NFSU2_TR(0x6bbdce);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6bbdd0:{NFSU2_TR(0x6bbdd0);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B6bbdd2:L6bbdd2:{c.instructions+=3;NFSU2_TR(0x6bbdd2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6bbdd4:{NFSU2_TR(0x6bbdd4);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6bbdd7:{NFSU2_TR(0x6bbdd7);
if(r1(R+518)){{goto L6bbdde;}}
}
B6bbdd9:L6bbdd9:{c.instructions+=2;NFSU2_TR(0x6bbdd9);
u8 U[20];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(R+8))-u32(r4(U+12))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B6bbddc:{NFSU2_TR(0x6bbddc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6bbdef;}}
}
B6bbdde:L6bbdde:{c.instructions+=4;NFSU2_TR(0x6bbdde);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6bbddf:{NFSU2_TR(0x6bbddf);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B6bbde2:{NFSU2_TR(0x6bbde2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(U+0))<(u32(0x4ull))));
}
B6bbde5:{NFSU2_TR(0x6bbde5);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6bbdd2u);}goto L6bbdd2;}}
}
B6bbde7:L6bbde7:{c.instructions+=2;NFSU2_TR(0x6bbde7);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6bbde9:{NFSU2_TR(0x6bbde9);
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
B6bbdea:L6bbdea:{c.instructions+=3;NFSU2_TR(0x6bbdea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6bbdeb:{NFSU2_TR(0x6bbdeb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6bbdec:{NFSU2_TR(0x6bbdec);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6bbdef:L6bbdef:{c.instructions+=2;NFSU2_TR(0x6bbdef);
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
B6bbdf1:{NFSU2_TR(0x6bbdf1);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6bbdeau);}goto L6bbdea;}
}
B6bbdf3:L6bbdf3:{c.instructions+=10;NFSU2_TR(0x6bbdf3);
__builtin_memmove((R+28),(R+28),4);
}
B6bbdf5:{NFSU2_TR(0x6bbdf5);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bbdf6:{NFSU2_TR(0x6bbdf6);
__builtin_memmove((R+20),(R+16),4);
}
B6bbdf8:{NFSU2_TR(0x6bbdf8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6bbdfb:{NFSU2_TR(0x6bbdfb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))-u32(r4(U+4))));
}
B6bbdfe:{NFSU2_TR(0x6bbdfe);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6bbe02:{NFSU2_TR(0x6bbe02);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bbe03:{NFSU2_TR(0x6bbe03);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bbe04:{NFSU2_TR(0x6bbe04);
w4(R+4,u32(0x80b7e0ull));
}
B6bbe09:{NFSU2_TR(0x6bbe09);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bbe0a:L6bbe0a:{c.instructions+=5;NFSU2_TR(0x6bbe0a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bbe0d:{NFSU2_TR(0x6bbe0d);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6bbe0f:{NFSU2_TR(0x6bbe0f);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bbe11:{NFSU2_TR(0x6bbe11);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6bbe12:{NFSU2_TR(0x6bbe12);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6bbe13:L6bbe13:{c.instructions+=3;NFSU2_TR(0x6bbe13);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B6bbe16:{NFSU2_TR(0x6bbe16);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(R+12))-u32(r4(U+4))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6bbe18:{NFSU2_TR(0x6bbe18);
if(r1(R+518)){{goto L6bbe21;}}
}
B6bbe1a:L6bbe1a:{c.instructions+=2;NFSU2_TR(0x6bbe1a);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6bbe1d:{NFSU2_TR(0x6bbe1d);
if(r1(R+518)){{goto L6bbe21;}}
}
B6bbe1f:L6bbe1f:{c.instructions+=1;NFSU2_TR(0x6bbe1f);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6bbe21:L6bbe21:{c.instructions+=4;NFSU2_TR(0x6bbe21);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B6bbe24:{NFSU2_TR(0x6bbe24);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B6bbe27:{NFSU2_TR(0x6bbe27);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B6bbe28:{NFSU2_TR(0x6bbe28);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6bbe13u);}goto L6bbe13;}}
}
B6bbe2a:L6bbe2a:{c.instructions+=2;NFSU2_TR(0x6bbe2a);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6bbe2c:{NFSU2_TR(0x6bbe2c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6bbe44;}}
}
B6bbe2e:L6bbe2e:{c.instructions+=3;NFSU2_TR(0x6bbe2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x10ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6bbe32:{NFSU2_TR(0x6bbe32);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x80ull))));
}
B6bbe39:{NFSU2_TR(0x6bbe39);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6bbe0au);}goto L6bbe0a;}}
}
B6bbe3b:L6bbe3b:{c.instructions+=1;NFSU2_TR(0x6bbe3b);
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
B6bbe3d:L6bbe3d:{c.instructions+=5;NFSU2_TR(0x6bbe3d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6bbe3e:{NFSU2_TR(0x6bbe3e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6bbe3f:{NFSU2_TR(0x6bbe3f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6bbe40:{NFSU2_TR(0x6bbe40);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6bbe41:{NFSU2_TR(0x6bbe41);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6bbe44:L6bbe44:{c.instructions+=3;NFSU2_TR(0x6bbe44);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6bbe46:{NFSU2_TR(0x6bbe46);
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
B6bbe47:{NFSU2_TR(0x6bbe47);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6bbe3du);}goto L6bbe3d;}
}
B6bbe49:L6bbe49:{c.instructions+=11;NFSU2_TR(0x6bbe49);
__builtin_memmove((R+28),(R+28),4);
}
B6bbe4b:{NFSU2_TR(0x6bbe4b);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bbe4c:{NFSU2_TR(0x6bbe4c);
__builtin_memmove((R+20),(R+16),4);
}
B6bbe4e:{NFSU2_TR(0x6bbe4e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x2cull))));
}
B6bbe51:{NFSU2_TR(0x6bbe51);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bbe52:{NFSU2_TR(0x6bbe52);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bbe53:{NFSU2_TR(0x6bbe53);
__builtin_memmove((R+24),(R+4),4);
}
B6bbe55:{NFSU2_TR(0x6bbe55);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6bbe57:{NFSU2_TR(0x6bbe57);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6bbe5a:{NFSU2_TR(0x6bbe5a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bbe5b:{NFSU2_TR(0x6bbe5b);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6bbec8;}}
}
B6bbe5d:L6bbe5d:{c.instructions+=10;NFSU2_TR(0x6bbe5d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bbe63:{NFSU2_TR(0x6bbe63);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6bbe66:{NFSU2_TR(0x6bbe66);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bbe69:{NFSU2_TR(0x6bbe69);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6bbe6b:{NFSU2_TR(0x6bbe6b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bbe6e:{NFSU2_TR(0x6bbe6e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6bbe71:{NFSU2_TR(0x6bbe71);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6bbe74:{NFSU2_TR(0x6bbe74);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bbe77:{NFSU2_TR(0x6bbe77);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bbe7a:{NFSU2_TR(0x6bbe7a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bbe7d:L6bbe7d:{c.instructions+=7;NFSU2_TR(0x6bbe7d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6bbe80:{NFSU2_TR(0x6bbe80);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bbe83:{NFSU2_TR(0x6bbe83);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6bbe86:{NFSU2_TR(0x6bbe86);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6bbe89:{NFSU2_TR(0x6bbe89);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6bbe8c:{NFSU2_TR(0x6bbe8c);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+28))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6bbe8f:{NFSU2_TR(0x6bbe8f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6bbeb6;}}
}
B6bbe91:L6bbe91:{c.instructions+=12;NFSU2_TR(0x6bbe91);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bbe97:{NFSU2_TR(0x6bbe97);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6bbe9a:{NFSU2_TR(0x6bbe9a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bbe9d:{NFSU2_TR(0x6bbe9d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6bbea0:{NFSU2_TR(0x6bbea0);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B6bbea3:{NFSU2_TR(0x6bbea3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6bbea6:{NFSU2_TR(0x6bbea6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6bbea8:{NFSU2_TR(0x6bbea8);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6bbeab:{NFSU2_TR(0x6bbeab);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B6bbeae:{NFSU2_TR(0x6bbeae);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bbeb1:{NFSU2_TR(0x6bbeb1);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6bbeb4:{NFSU2_TR(0x6bbeb4);
if(r1(R+518)){{goto L6bbec5;}}
}
B6bbeb6:L6bbeb6:{c.instructions+=6;NFSU2_TR(0x6bbeb6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bbeb9:{NFSU2_TR(0x6bbeb9);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6bbebc:{NFSU2_TR(0x6bbebc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B6bbebf:{NFSU2_TR(0x6bbebf);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6bbec0:{NFSU2_TR(0x6bbec0);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B6bbec3:{NFSU2_TR(0x6bbec3);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6bbe7du);}goto L6bbe7d;}}
}
B6bbec5:L6bbec5:{c.instructions+=1;NFSU2_TR(0x6bbec5);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6bbec8:L6bbec8:{c.instructions+=1;NFSU2_TR(0x6bbec8);
if(r1(R+518)){{goto L6bbfe8;}}
}
B6bbece:L6bbece:{c.instructions+=15;NFSU2_TR(0x6bbece);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
w8(U+8,u64(s64(s32(r4(R+4)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+4,u32(r8(U+24)));
}
B6bbed2:{NFSU2_TR(0x6bbed2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bbed8:{NFSU2_TR(0x6bbed8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6bbedb:{NFSU2_TR(0x6bbedb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B6bbede:{NFSU2_TR(0x6bbede);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B6bbee1:{NFSU2_TR(0x6bbee1);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6bbee4:{NFSU2_TR(0x6bbee4);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6bbee5:{NFSU2_TR(0x6bbee5);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6bbee6:{NFSU2_TR(0x6bbee6);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6bbee7:{NFSU2_TR(0x6bbee7);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6bbee9:{NFSU2_TR(0x6bbee9);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6bbeeb:{NFSU2_TR(0x6bbeeb);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+4))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6bbeee:{NFSU2_TR(0x6bbeee);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6bbef1:{NFSU2_TR(0x6bbef1);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6bbef2:{NFSU2_TR(0x6bbef2);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6bbf0a;}}
}
B6bbef4:L6bbef4:{c.instructions+=8;NFSU2_TR(0x6bbef4);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6bbef7:{NFSU2_TR(0x6bbef7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6bbefa:{NFSU2_TR(0x6bbefa);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6bbefd:{NFSU2_TR(0x6bbefd);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6bbf00:{NFSU2_TR(0x6bbf00);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6bbf01:{NFSU2_TR(0x6bbf01);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B6bbf04:{NFSU2_TR(0x6bbf04);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffe4ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6bbf08:{NFSU2_TR(0x6bbf08);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6bbef4u);}goto L6bbef4;}}
}
B6bbf0a:L6bbf0a:{c.instructions+=1;NFSU2_TR(0x6bbf0a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6bbf0c:L6bbf0c:{c.instructions+=7;NFSU2_TR(0x6bbf0c);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6bbf0e:{NFSU2_TR(0x6bbf0e);
u8 U[24];
w4(U+0,u32(u32(u32(0xffffffe4ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w4(U+20,u32(u32(r4(U+16))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+20))==(u32(0x0ull))));
}
B6bbf13:{NFSU2_TR(0x6bbf13);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+4),(U+0),1);
}
B6bbf16:{NFSU2_TR(0x6bbf16);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+4))));
}
B6bbf18:{NFSU2_TR(0x6bbf18);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6bbf19:{NFSU2_TR(0x6bbf19);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x4ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x4ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6bbf1c:{NFSU2_TR(0x6bbf1c);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6bbf0cu);}goto L6bbf0c;}}
}
B6bbf1e:L6bbf1e:{c.instructions+=9;NFSU2_TR(0x6bbf1e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6bbf20:{NFSU2_TR(0x6bbf20);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bbf22:{NFSU2_TR(0x6bbf22);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bbf24:{NFSU2_TR(0x6bbf24);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bbf26:{NFSU2_TR(0x6bbf26);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6bbf29:{NFSU2_TR(0x6bbf29);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bbf2a:{NFSU2_TR(0x6bbf2a);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6bbf30:{NFSU2_TR(0x6bbf30);
__builtin_memmove((R+4),(R+24),4);
}
B6bbf32:{NFSU2_TR(0x6bbf32);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bbf38ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6bbf38:L6bbf38:{c.instructions+=2;NFSU2_TR(0x6bbf38);
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
B6bbf3a:{NFSU2_TR(0x6bbf3a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6bbfea;}}
}
B6bbf40:L6bbf40:{c.instructions+=2;NFSU2_TR(0x6bbf40);
u8 U[4];
w4(U+0,u32(0x74ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bbf42:{NFSU2_TR(0x6bbf42);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bbf47ull));
TAIL_STATIC(0x699317u,699);
}
B6bbf47:L6bbf47:{c.instructions+=2;NFSU2_TR(0x6bbf47);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6bbf49:{NFSU2_TR(0x6bbf49);
if(r1(R+518)){{goto L6bbf54;}}
}
B6bbf4b:L6bbf4b:{c.instructions+=2;NFSU2_TR(0x6bbf4b);
__builtin_memmove((R+4),(R+0),4);
}
B6bbf4d:{NFSU2_TR(0x6bbf4d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bbf52ull));
TAIL_STATIC(0x698e7du,698);
}
B6bbf52:L6bbf52:{c.instructions+=1;NFSU2_TR(0x6bbf52);
{goto L6bbf56;}
}
B6bbf54:L6bbf54:{c.instructions+=1;NFSU2_TR(0x6bbf54);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6bbf56:L6bbf56:{c.instructions+=4;NFSU2_TR(0x6bbf56);
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
B6bbf58:{NFSU2_TR(0x6bbf58);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6bbf5b:{NFSU2_TR(0x6bbf5b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B6bbf5d:{NFSU2_TR(0x6bbf5d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6bbf69;}}
}
B6bbf5f:L6bbf5f:{c.instructions+=2;NFSU2_TR(0x6bbf5f);
w4(R+0,u32(0x8007000eull));
}
B6bbf64:{NFSU2_TR(0x6bbf64);
{goto L6bbfea;}
}
B6bbf69:L6bbf69:{c.instructions+=8;NFSU2_TR(0x6bbf69);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bbf6b:{NFSU2_TR(0x6bbf6b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bbf6c:{NFSU2_TR(0x6bbf6c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bbf6d:{NFSU2_TR(0x6bbf6d);
w4(R+12,u32(u32(r4(R+12))&u32(u32(0xfffffull))));
}
B6bbf73:{NFSU2_TR(0x6bbf73);
w4(R+12,u32(u32(r4(R+12))|u32(u32(0x10000000ull))));
}
B6bbf79:{NFSU2_TR(0x6bbf79);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bbf7a:{NFSU2_TR(0x6bbf7a);
__builtin_memmove((R+4),(R+0),4);
}
B6bbf7c:{NFSU2_TR(0x6bbf7c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bbf81ull));
TAIL_STATIC(0x699362u,699);
}
B6bbf81:L6bbf81:{c.instructions+=2;NFSU2_TR(0x6bbf81);
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
B6bbf83:{NFSU2_TR(0x6bbf83);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6bbfea;}}
}
B6bbf85:L6bbf85:{c.instructions+=3;NFSU2_TR(0x6bbf85);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6bbf8b:{NFSU2_TR(0x6bbf8b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6bbf8d:{NFSU2_TR(0x6bbf8d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6bbf92ull));
TAIL_STATIC(0x698eb3u,698);
}
B6bbf92:L6bbf92:{c.instructions+=2;NFSU2_TR(0x6bbf92);
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
B6bbf94:{NFSU2_TR(0x6bbf94);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6bbfea;}}
}
B6bbf96:L6bbf96:{c.instructions+=2;NFSU2_TR(0x6bbf96);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6bbf98:{NFSU2_TR(0x6bbf98);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6bbf9a:L6bbf9a:{c.instructions+=2;NFSU2_TR(0x6bbf9a);
u8 U[24];
w4(U+0,u32(u32(u32(0xffffffe4ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w4(U+20,u32(u32(r4(U+16))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+20))==(u32(0x0ull))));
}
B6bbf9f:{NFSU2_TR(0x6bbf9f);
if(r1(R+518)){{goto L6bbfbc;}}
}
B6bbfa1:L6bbfa1:{c.instructions+=9;NFSU2_TR(0x6bbfa1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6bbfa3:{NFSU2_TR(0x6bbfa3);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6bbfa6:{NFSU2_TR(0x6bbfa6);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffd4ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+12),(U+12),4);
}
B6bbfaa:{NFSU2_TR(0x6bbfaa);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+12),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6bbfad:{NFSU2_TR(0x6bbfad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6bbfaf:{NFSU2_TR(0x6bbfaf);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6bbfb2:{NFSU2_TR(0x6bbfb2);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffe4ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B6bbfb6:{NFSU2_TR(0x6bbfb6);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6bbfb9:{NFSU2_TR(0x6bbfb9);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B6bbfbc:L6bbfbc:{c.instructions+=3;NFSU2_TR(0x6bbfbc);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B6bbfbf:{NFSU2_TR(0x6bbfbf);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x10ull))));
}
B6bbfc2:{NFSU2_TR(0x6bbfc2);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6bbf9au);}goto L6bbf9a;}}
}
B6bbfc4:L6bbfc4:{c.instructions+=3;NFSU2_TR(0x6bbfc4);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6bbfc6:{NFSU2_TR(0x6bbfc6);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6bbfc9:{NFSU2_TR(0x6bbfc9);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6bbfe8;}}
}
B6bbfcb:L6bbfcb:{c.instructions+=11;NFSU2_TR(0x6bbfcb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6bbfce:{NFSU2_TR(0x6bbfce);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6bbfd1:{NFSU2_TR(0x6bbfd1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6bbfd4:{NFSU2_TR(0x6bbfd4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6bbfd6:{NFSU2_TR(0x6bbfd6);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6bbfd9:{NFSU2_TR(0x6bbfd9);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6bbfdc:{NFSU2_TR(0x6bbfdc);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffd4ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B6bbfe0:{NFSU2_TR(0x6bbfe0);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6bbfe1:{NFSU2_TR(0x6bbfe1);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6bbfe4:{NFSU2_TR(0x6bbfe4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6bbfe6:{NFSU2_TR(0x6bbfe6);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6bbfcbu);}goto L6bbfcb;}}
}
B6bbfe8:L6bbfe8:{c.instructions+=1;NFSU2_TR(0x6bbfe8);
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
B6bbfea:L6bbfea:{c.instructions+=5;NFSU2_TR(0x6bbfea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6bbfeb:{NFSU2_TR(0x6bbfeb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6bbfec:{NFSU2_TR(0x6bbfec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6bbfed:{NFSU2_TR(0x6bbfed);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6bbfee:{NFSU2_TR(0x6bbfee);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6bbff1:L6bbff1:{c.instructions+=8;NFSU2_TR(0x6bbff1);
__builtin_memmove((R+28),(R+28),4);
}
B6bbff3:{NFSU2_TR(0x6bbff3);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bbff4:{NFSU2_TR(0x6bbff4);
__builtin_memmove((R+20),(R+16),4);
}
B6bbff6:{NFSU2_TR(0x6bbff6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B6bbff9:{NFSU2_TR(0x6bbff9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bbffa:{NFSU2_TR(0x6bbffa);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6bbffb:{NFSU2_TR(0x6bbffb);
__builtin_memmove((R+24),(R+4),4);
}
B6bbffd:{NFSU2_TR(0x6bbffd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
TAIL_STATIC(0x6bc000u,6bc);
}
XIT:NFSU2_TR_EXIT(0x6bb,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
