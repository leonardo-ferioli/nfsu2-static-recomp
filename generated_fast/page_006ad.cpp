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
u32 body_6ae(u8* __restrict R,Cpu& c);
u32 body_6c2(u8* __restrict R,Cpu& c);
u32 body_6c3(u8* __restrict R,Cpu& c);
u32 body_6ca(u8* __restrict R,Cpu& c);
u32 body_6cc(u8* __restrict R,Cpu& c);
u32 body_6cd(u8* __restrict R,Cpu& c);
u32 body_6cf(u8* __restrict R,Cpu& c);
u32 body_6d0(u8* __restrict R,Cpu& c);
u32 body_6d1(u8* __restrict R,Cpu& c);
u32 body_75c(u8* __restrict R,Cpu& c);
u32 body_75e(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x6ad,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x6ad,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_6ad(u8* __restrict R,Cpu& c);
u32 page_6ad(Cpu& c){return body_6ad(c.regs.data(),c);}
__attribute__((noinline)) u32 body_6ad(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x6ad002:goto L6ad002;
case 0x6ad008:c.instructions+=3;goto B6ad008;
case 0x6ad00b:c.instructions+=2;goto B6ad00b;
case 0x6ad00d:c.instructions+=1;goto B6ad00d;
case 0x6ad00f:goto L6ad00f;
case 0x6ad011:c.instructions+=3;goto B6ad011;
case 0x6ad013:c.instructions+=2;goto B6ad013;
case 0x6ad016:c.instructions+=1;goto B6ad016;
case 0x6ad018:goto L6ad018;
case 0x6ad01b:c.instructions+=1;goto B6ad01b;
case 0x6ad01d:goto L6ad01d;
case 0x6ad020:c.instructions+=2;goto B6ad020;
case 0x6ad026:c.instructions+=1;goto B6ad026;
case 0x6ad028:goto L6ad028;
case 0x6ad02b:c.instructions+=1;goto B6ad02b;
case 0x6ad02d:goto L6ad02d;
case 0x6ad02f:c.instructions+=1;goto B6ad02f;
case 0x6ad031:goto L6ad031;
case 0x6ad034:c.instructions+=4;goto B6ad034;
case 0x6ad036:c.instructions+=3;goto B6ad036;
case 0x6ad037:c.instructions+=2;goto B6ad037;
case 0x6ad03d:c.instructions+=1;goto B6ad03d;
case 0x6ad03f:goto L6ad03f;
case 0x6ad041:c.instructions+=3;goto B6ad041;
case 0x6ad042:c.instructions+=2;goto B6ad042;
case 0x6ad044:c.instructions+=1;goto B6ad044;
case 0x6ad046:goto L6ad046;
case 0x6ad048:c.instructions+=1;goto B6ad048;
case 0x6ad04a:goto L6ad04a;
case 0x6ad04d:c.instructions+=3;goto B6ad04d;
case 0x6ad04f:c.instructions+=2;goto B6ad04f;
case 0x6ad055:c.instructions+=1;goto B6ad055;
case 0x6ad057:goto L6ad057;
case 0x6ad05a:c.instructions+=1;goto B6ad05a;
case 0x6ad05c:goto L6ad05c;
case 0x6ad05e:c.instructions+=1;goto B6ad05e;
case 0x6ad060:goto L6ad060;
case 0x6ad063:c.instructions+=3;goto B6ad063;
case 0x6ad065:c.instructions+=2;goto B6ad065;
case 0x6ad067:c.instructions+=1;goto B6ad067;
case 0x6ad069:goto L6ad069;
case 0x6ad06f:c.instructions+=1;goto B6ad06f;
case 0x6ad071:goto L6ad071;
case 0x6ad074:c.instructions+=2;goto B6ad074;
case 0x6ad076:c.instructions+=1;goto B6ad076;
case 0x6ad078:goto L6ad078;
case 0x6ad07b:c.instructions+=2;goto B6ad07b;
case 0x6ad07d:c.instructions+=1;goto B6ad07d;
case 0x6ad07f:goto L6ad07f;
case 0x6ad081:goto L6ad081;
case 0x6ad083:c.instructions+=1;goto B6ad083;
case 0x6ad085:goto L6ad085;
case 0x6ad08a:goto L6ad08a;
case 0x6ad08b:c.instructions+=4;goto B6ad08b;
case 0x6ad08c:c.instructions+=3;goto B6ad08c;
case 0x6ad08d:c.instructions+=2;goto B6ad08d;
case 0x6ad08e:c.instructions+=1;goto B6ad08e;
case 0x6ad091:goto L6ad091;
case 0x6ad093:c.instructions+=9;goto B6ad093;
case 0x6ad094:c.instructions+=8;goto B6ad094;
case 0x6ad096:c.instructions+=7;goto B6ad096;
case 0x6ad097:c.instructions+=6;goto B6ad097;
case 0x6ad098:c.instructions+=5;goto B6ad098;
case 0x6ad09b:c.instructions+=4;goto B6ad09b;
case 0x6ad09e:c.instructions+=3;goto B6ad09e;
case 0x6ad0a0:c.instructions+=2;goto B6ad0a0;
case 0x6ad0a2:c.instructions+=1;goto B6ad0a2;
case 0x6ad0a5:goto L6ad0a5;
case 0x6ad0aa:c.instructions+=1;goto B6ad0aa;
case 0x6ad0ac:goto L6ad0ac;
case 0x6ad0af:c.instructions+=5;goto B6ad0af;
case 0x6ad0b2:c.instructions+=4;goto B6ad0b2;
case 0x6ad0b5:c.instructions+=3;goto B6ad0b5;
case 0x6ad0b7:c.instructions+=2;goto B6ad0b7;
case 0x6ad0b9:c.instructions+=1;goto B6ad0b9;
case 0x6ad0bc:goto L6ad0bc;
case 0x6ad0be:goto L6ad0be;
case 0x6ad0c0:c.instructions+=3;goto B6ad0c0;
case 0x6ad0c1:c.instructions+=2;goto B6ad0c1;
case 0x6ad0c3:c.instructions+=1;goto B6ad0c3;
case 0x6ad0c5:goto L6ad0c5;
case 0x6ad0c8:c.instructions+=4;goto B6ad0c8;
case 0x6ad0ca:c.instructions+=3;goto B6ad0ca;
case 0x6ad0cd:c.instructions+=2;goto B6ad0cd;
case 0x6ad0d3:c.instructions+=1;goto B6ad0d3;
case 0x6ad0d5:goto L6ad0d5;
case 0x6ad0d8:c.instructions+=2;goto B6ad0d8;
case 0x6ad0db:c.instructions+=1;goto B6ad0db;
case 0x6ad0dd:goto L6ad0dd;
case 0x6ad0df:c.instructions+=3;goto B6ad0df;
case 0x6ad0e2:c.instructions+=2;goto B6ad0e2;
case 0x6ad0e5:c.instructions+=1;goto B6ad0e5;
case 0x6ad0e7:goto L6ad0e7;
case 0x6ad0ed:c.instructions+=1;goto B6ad0ed;
case 0x6ad0f0:goto L6ad0f0;
case 0x6ad0f3:c.instructions+=1;goto B6ad0f3;
case 0x6ad0f5:goto L6ad0f5;
case 0x6ad0f6:c.instructions+=4;goto B6ad0f6;
case 0x6ad0f8:c.instructions+=3;goto B6ad0f8;
case 0x6ad0f9:c.instructions+=2;goto B6ad0f9;
case 0x6ad0fa:c.instructions+=1;goto B6ad0fa;
case 0x6ad0fd:goto L6ad0fd;
case 0x6ad0ff:c.instructions+=4;goto B6ad0ff;
case 0x6ad100:c.instructions+=3;goto B6ad100;
case 0x6ad102:c.instructions+=2;goto B6ad102;
case 0x6ad103:c.instructions+=1;goto B6ad103;
case 0x6ad108:goto L6ad108;
case 0x6ad10a:c.instructions+=10;goto B6ad10a;
case 0x6ad10b:c.instructions+=9;goto B6ad10b;
case 0x6ad10d:c.instructions+=8;goto B6ad10d;
case 0x6ad110:c.instructions+=7;goto B6ad110;
case 0x6ad114:c.instructions+=6;goto B6ad114;
case 0x6ad118:c.instructions+=5;goto B6ad118;
case 0x6ad119:c.instructions+=4;goto B6ad119;
case 0x6ad11b:c.instructions+=3;goto B6ad11b;
case 0x6ad11e:c.instructions+=2;goto B6ad11e;
case 0x6ad121:c.instructions+=1;goto B6ad121;
case 0x6ad127:goto L6ad127;
case 0x6ad128:c.instructions+=1;goto B6ad128;
case 0x6ad129:goto L6ad129;
case 0x6ad12c:c.instructions+=8;goto B6ad12c;
case 0x6ad12f:c.instructions+=7;goto B6ad12f;
case 0x6ad131:c.instructions+=6;goto B6ad131;
case 0x6ad134:c.instructions+=5;goto B6ad134;
case 0x6ad137:c.instructions+=4;goto B6ad137;
case 0x6ad13a:c.instructions+=3;goto B6ad13a;
case 0x6ad13d:c.instructions+=2;goto B6ad13d;
case 0x6ad141:c.instructions+=1;goto B6ad141;
case 0x6ad147:goto L6ad147;
case 0x6ad14a:c.instructions+=2;goto B6ad14a;
case 0x6ad14d:c.instructions+=1;goto B6ad14d;
case 0x6ad14f:goto L6ad14f;
case 0x6ad152:c.instructions+=1;goto B6ad152;
case 0x6ad158:goto L6ad158;
case 0x6ad15b:c.instructions+=6;goto B6ad15b;
case 0x6ad15e:c.instructions+=5;goto B6ad15e;
case 0x6ad164:c.instructions+=4;goto B6ad164;
case 0x6ad167:c.instructions+=3;goto B6ad167;
case 0x6ad16a:c.instructions+=2;goto B6ad16a;
case 0x6ad16d:c.instructions+=1;goto B6ad16d;
case 0x6ad173:goto L6ad173;
case 0x6ad176:c.instructions+=4;goto B6ad176;
case 0x6ad179:c.instructions+=3;goto B6ad179;
case 0x6ad17c:c.instructions+=2;goto B6ad17c;
case 0x6ad17f:c.instructions+=1;goto B6ad17f;
case 0x6ad181:goto L6ad181;
case 0x6ad185:c.instructions+=1;goto B6ad185;
case 0x6ad187:goto L6ad187;
case 0x6ad18a:goto L6ad18a;
case 0x6ad18d:c.instructions+=1;goto B6ad18d;
case 0x6ad18f:goto L6ad18f;
case 0x6ad192:c.instructions+=2;goto B6ad192;
case 0x6ad195:c.instructions+=1;goto B6ad195;
case 0x6ad197:goto L6ad197;
case 0x6ad19a:c.instructions+=4;goto B6ad19a;
case 0x6ad19d:c.instructions+=3;goto B6ad19d;
case 0x6ad1a0:c.instructions+=2;goto B6ad1a0;
case 0x6ad1a3:c.instructions+=1;goto B6ad1a3;
case 0x6ad1a5:goto L6ad1a5;
case 0x6ad1a8:goto L6ad1a8;
case 0x6ad1ab:c.instructions+=5;goto B6ad1ab;
case 0x6ad1af:c.instructions+=4;goto B6ad1af;
case 0x6ad1b1:c.instructions+=3;goto B6ad1b1;
case 0x6ad1b4:c.instructions+=2;goto B6ad1b4;
case 0x6ad1b7:c.instructions+=1;goto B6ad1b7;
case 0x6ad1b9:goto L6ad1b9;
case 0x6ad1bc:c.instructions+=6;goto B6ad1bc;
case 0x6ad1bf:c.instructions+=5;goto B6ad1bf;
case 0x6ad1c2:c.instructions+=4;goto B6ad1c2;
case 0x6ad1c5:c.instructions+=3;goto B6ad1c5;
case 0x6ad1c8:c.instructions+=2;goto B6ad1c8;
case 0x6ad1cc:c.instructions+=1;goto B6ad1cc;
case 0x6ad1ce:goto L6ad1ce;
case 0x6ad1d1:c.instructions+=2;goto B6ad1d1;
case 0x6ad1d4:c.instructions+=1;goto B6ad1d4;
case 0x6ad1d6:goto L6ad1d6;
case 0x6ad1d9:c.instructions+=1;goto B6ad1d9;
case 0x6ad1db:goto L6ad1db;
case 0x6ad1de:goto L6ad1de;
case 0x6ad1e1:c.instructions+=2;goto B6ad1e1;
case 0x6ad1e4:c.instructions+=1;goto B6ad1e4;
case 0x6ad1e7:goto L6ad1e7;
case 0x6ad1e8:c.instructions+=2;goto B6ad1e8;
case 0x6ad1eb:c.instructions+=1;goto B6ad1eb;
case 0x6ad1ed:goto L6ad1ed;
case 0x6ad1f0:c.instructions+=2;goto B6ad1f0;
case 0x6ad1f3:c.instructions+=1;goto B6ad1f3;
case 0x6ad1f5:goto L6ad1f5;
case 0x6ad1f8:c.instructions+=1;goto B6ad1f8;
case 0x6ad1fb:goto L6ad1fb;
case 0x6ad1fe:goto L6ad1fe;
case 0x6ad201:c.instructions+=4;goto B6ad201;
case 0x6ad202:c.instructions+=3;goto B6ad202;
case 0x6ad205:c.instructions+=2;goto B6ad205;
case 0x6ad208:c.instructions+=1;goto B6ad208;
case 0x6ad20e:goto L6ad20e;
case 0x6ad20f:c.instructions+=1;goto B6ad20f;
case 0x6ad210:goto L6ad210;
case 0x6ad212:c.instructions+=3;goto B6ad212;
case 0x6ad213:c.instructions+=2;goto B6ad213;
case 0x6ad214:c.instructions+=1;goto B6ad214;
case 0x6ad215:goto L6ad215;
case 0x6ad217:c.instructions+=11;goto B6ad217;
case 0x6ad218:c.instructions+=10;goto B6ad218;
case 0x6ad21a:c.instructions+=9;goto B6ad21a;
case 0x6ad21b:c.instructions+=8;goto B6ad21b;
case 0x6ad21c:c.instructions+=7;goto B6ad21c;
case 0x6ad21d:c.instructions+=6;goto B6ad21d;
case 0x6ad21e:c.instructions+=5;goto B6ad21e;
case 0x6ad220:c.instructions+=4;goto B6ad220;
case 0x6ad222:c.instructions+=3;goto B6ad222;
case 0x6ad225:c.instructions+=2;goto B6ad225;
case 0x6ad226:c.instructions+=1;goto B6ad226;
case 0x6ad228:goto L6ad228;
case 0x6ad22a:c.instructions+=3;goto B6ad22a;
case 0x6ad22d:c.instructions+=2;goto B6ad22d;
case 0x6ad233:c.instructions+=1;goto B6ad233;
case 0x6ad235:goto L6ad235;
case 0x6ad23b:c.instructions+=7;goto B6ad23b;
case 0x6ad23e:c.instructions+=6;goto B6ad23e;
case 0x6ad241:c.instructions+=5;goto B6ad241;
case 0x6ad247:c.instructions+=4;goto B6ad247;
case 0x6ad249:c.instructions+=3;goto B6ad249;
case 0x6ad24e:c.instructions+=2;goto B6ad24e;
case 0x6ad253:c.instructions+=1;goto B6ad253;
case 0x6ad255:goto L6ad255;
case 0x6ad257:c.instructions+=1;goto B6ad257;
case 0x6ad25c:goto L6ad25c;
case 0x6ad25e:c.instructions+=1;goto B6ad25e;
case 0x6ad264:goto L6ad264;
case 0x6ad266:c.instructions+=3;goto B6ad266;
case 0x6ad268:c.instructions+=2;goto B6ad268;
case 0x6ad26b:c.instructions+=1;goto B6ad26b;
case 0x6ad26d:goto L6ad26d;
case 0x6ad273:c.instructions+=3;goto B6ad273;
case 0x6ad279:c.instructions+=2;goto B6ad279;
case 0x6ad27c:c.instructions+=1;goto B6ad27c;
case 0x6ad27e:goto L6ad27e;
case 0x6ad280:c.instructions+=1;goto B6ad280;
case 0x6ad282:goto L6ad282;
case 0x6ad284:c.instructions+=1;goto B6ad284;
case 0x6ad289:goto L6ad289;
case 0x6ad28c:c.instructions+=1;goto B6ad28c;
case 0x6ad292:goto L6ad292;
case 0x6ad295:goto L6ad295;
case 0x6ad299:c.instructions+=1;goto B6ad299;
case 0x6ad29b:goto L6ad29b;
case 0x6ad29e:c.instructions+=4;goto B6ad29e;
case 0x6ad2a0:c.instructions+=3;goto B6ad2a0;
case 0x6ad2a2:c.instructions+=2;goto B6ad2a2;
case 0x6ad2a9:c.instructions+=1;goto B6ad2a9;
case 0x6ad2ab:goto L6ad2ab;
case 0x6ad2ae:c.instructions+=4;goto B6ad2ae;
case 0x6ad2b1:c.instructions+=3;goto B6ad2b1;
case 0x6ad2b3:c.instructions+=2;goto B6ad2b3;
case 0x6ad2b9:c.instructions+=1;goto B6ad2b9;
case 0x6ad2be:goto L6ad2be;
case 0x6ad2c0:c.instructions+=1;goto B6ad2c0;
case 0x6ad2c6:goto L6ad2c6;
case 0x6ad2c8:goto L6ad2c8;
case 0x6ad2cc:goto L6ad2cc;
case 0x6ad2d2:c.instructions+=2;goto B6ad2d2;
case 0x6ad2d4:c.instructions+=1;goto B6ad2d4;
case 0x6ad2d9:goto L6ad2d9;
case 0x6ad2db:c.instructions+=1;goto B6ad2db;
case 0x6ad2e1:goto L6ad2e1;
case 0x6ad2e7:c.instructions+=4;goto B6ad2e7;
case 0x6ad2ea:c.instructions+=3;goto B6ad2ea;
case 0x6ad2eb:c.instructions+=2;goto B6ad2eb;
case 0x6ad2ed:c.instructions+=1;goto B6ad2ed;
case 0x6ad2ef:goto L6ad2ef;
case 0x6ad2f1:c.instructions+=1;goto B6ad2f1;
case 0x6ad2f6:goto L6ad2f6;
case 0x6ad2f8:c.instructions+=1;goto B6ad2f8;
case 0x6ad2fe:goto L6ad2fe;
case 0x6ad301:c.instructions+=2;goto B6ad301;
case 0x6ad305:c.instructions+=1;goto B6ad305;
case 0x6ad307:goto L6ad307;
case 0x6ad30b:c.instructions+=1;goto B6ad30b;
case 0x6ad311:goto L6ad311;
case 0x6ad314:c.instructions+=4;goto B6ad314;
case 0x6ad316:c.instructions+=3;goto B6ad316;
case 0x6ad318:c.instructions+=2;goto B6ad318;
case 0x6ad31f:c.instructions+=1;goto B6ad31f;
case 0x6ad321:goto L6ad321;
case 0x6ad324:c.instructions+=4;goto B6ad324;
case 0x6ad327:c.instructions+=3;goto B6ad327;
case 0x6ad329:c.instructions+=2;goto B6ad329;
case 0x6ad32f:c.instructions+=1;goto B6ad32f;
case 0x6ad334:goto L6ad334;
case 0x6ad336:c.instructions+=1;goto B6ad336;
case 0x6ad33c:goto L6ad33c;
case 0x6ad33e:goto L6ad33e;
case 0x6ad344:c.instructions+=5;goto B6ad344;
case 0x6ad349:c.instructions+=4;goto B6ad349;
case 0x6ad34e:c.instructions+=3;goto B6ad34e;
case 0x6ad351:c.instructions+=2;goto B6ad351;
case 0x6ad352:c.instructions+=1;goto B6ad352;
case 0x6ad357:goto L6ad357;
case 0x6ad35a:c.instructions+=1;goto B6ad35a;
case 0x6ad35e:goto L6ad35e;
case 0x6ad364:c.instructions+=2;goto B6ad364;
case 0x6ad366:c.instructions+=1;goto B6ad366;
case 0x6ad36b:goto L6ad36b;
case 0x6ad36d:c.instructions+=1;goto B6ad36d;
case 0x6ad36f:goto L6ad36f;
case 0x6ad375:c.instructions+=4;goto B6ad375;
case 0x6ad378:c.instructions+=3;goto B6ad378;
case 0x6ad379:c.instructions+=2;goto B6ad379;
case 0x6ad37b:c.instructions+=1;goto B6ad37b;
case 0x6ad37d:goto L6ad37d;
case 0x6ad37f:c.instructions+=1;goto B6ad37f;
case 0x6ad384:goto L6ad384;
case 0x6ad386:c.instructions+=1;goto B6ad386;
case 0x6ad388:goto L6ad388;
case 0x6ad38c:c.instructions+=1;goto B6ad38c;
case 0x6ad38e:goto L6ad38e;
case 0x6ad393:c.instructions+=1;goto B6ad393;
case 0x6ad395:goto L6ad395;
case 0x6ad397:goto L6ad397;
case 0x6ad39b:c.instructions+=1;goto B6ad39b;
case 0x6ad39d:goto L6ad39d;
case 0x6ad39f:c.instructions+=2;goto B6ad39f;
case 0x6ad3a1:c.instructions+=1;goto B6ad3a1;
case 0x6ad3a7:goto L6ad3a7;
case 0x6ad3a9:c.instructions+=1;goto B6ad3a9;
case 0x6ad3ab:goto L6ad3ab;
case 0x6ad3ae:c.instructions+=1;goto B6ad3ae;
case 0x6ad3b0:goto L6ad3b0;
case 0x6ad3b2:c.instructions+=1;goto B6ad3b2;
case 0x6ad3b7:goto L6ad3b7;
case 0x6ad3b9:c.instructions+=1;goto B6ad3b9;
case 0x6ad3bb:goto L6ad3bb;
case 0x6ad3bd:c.instructions+=1;goto B6ad3bd;
case 0x6ad3c2:goto L6ad3c2;
case 0x6ad3c4:c.instructions+=1;goto B6ad3c4;
case 0x6ad3c9:goto L6ad3c9;
case 0x6ad3cb:c.instructions+=1;goto B6ad3cb;
case 0x6ad3cd:goto L6ad3cd;
case 0x6ad3cf:c.instructions+=1;goto B6ad3cf;
case 0x6ad3d4:goto L6ad3d4;
case 0x6ad3d6:c.instructions+=1;goto B6ad3d6;
case 0x6ad3d8:goto L6ad3d8;
case 0x6ad3da:goto L6ad3da;
case 0x6ad3db:c.instructions+=4;goto B6ad3db;
case 0x6ad3dc:c.instructions+=3;goto B6ad3dc;
case 0x6ad3dd:c.instructions+=2;goto B6ad3dd;
case 0x6ad3de:c.instructions+=1;goto B6ad3de;
case 0x6ad3df:goto L6ad3df;
case 0x6ad3e1:c.instructions+=3;goto B6ad3e1;
case 0x6ad3e2:c.instructions+=2;goto B6ad3e2;
case 0x6ad3e4:c.instructions+=1;goto B6ad3e4;
case 0x6ad3e9:goto L6ad3e9;
case 0x6ad3eb:c.instructions+=1;goto B6ad3eb;
case 0x6ad3ed:goto L6ad3ed;
case 0x6ad3ef:c.instructions+=1;goto B6ad3ef;
case 0x6ad3f4:goto L6ad3f4;
case 0x6ad3f6:c.instructions+=1;goto B6ad3f6;
case 0x6ad3f8:goto L6ad3f8;
case 0x6ad3fa:c.instructions+=1;goto B6ad3fa;
case 0x6ad3ff:goto L6ad3ff;
case 0x6ad401:c.instructions+=1;goto B6ad401;
case 0x6ad403:goto L6ad403;
case 0x6ad405:c.instructions+=1;goto B6ad405;
case 0x6ad40a:goto L6ad40a;
case 0x6ad40c:c.instructions+=1;goto B6ad40c;
case 0x6ad40e:goto L6ad40e;
case 0x6ad410:c.instructions+=1;goto B6ad410;
case 0x6ad415:goto L6ad415;
case 0x6ad417:goto L6ad417;
case 0x6ad418:c.instructions+=1;goto B6ad418;
case 0x6ad419:goto L6ad419;
case 0x6ad41f:c.instructions+=9;goto B6ad41f;
case 0x6ad425:c.instructions+=8;goto B6ad425;
case 0x6ad42b:c.instructions+=7;goto B6ad42b;
case 0x6ad42d:c.instructions+=6;goto B6ad42d;
case 0x6ad42e:c.instructions+=5;goto B6ad42e;
case 0x6ad431:c.instructions+=4;goto B6ad431;
case 0x6ad434:c.instructions+=3;goto B6ad434;
case 0x6ad436:c.instructions+=2;goto B6ad436;
case 0x6ad438:c.instructions+=1;goto B6ad438;
case 0x6ad439:goto L6ad439;
case 0x6ad43b:c.instructions+=6;goto B6ad43b;
case 0x6ad43c:c.instructions+=5;goto B6ad43c;
case 0x6ad43e:c.instructions+=4;goto B6ad43e;
case 0x6ad43f:c.instructions+=3;goto B6ad43f;
case 0x6ad441:c.instructions+=2;goto B6ad441;
case 0x6ad448:c.instructions+=1;goto B6ad448;
case 0x6ad44a:goto L6ad44a;
case 0x6ad44c:c.instructions+=1;goto B6ad44c;
case 0x6ad451:goto L6ad451;
case 0x6ad456:c.instructions+=2;goto B6ad456;
case 0x6ad458:c.instructions+=1;goto B6ad458;
case 0x6ad45d:goto L6ad45d;
case 0x6ad45f:c.instructions+=1;goto B6ad45f;
case 0x6ad465:goto L6ad465;
case 0x6ad466:c.instructions+=4;goto B6ad466;
case 0x6ad469:c.instructions+=3;goto B6ad469;
case 0x6ad46c:c.instructions+=2;goto B6ad46c;
case 0x6ad471:c.instructions+=1;goto B6ad471;
case 0x6ad473:goto L6ad473;
case 0x6ad478:goto L6ad478;
case 0x6ad47a:c.instructions+=1;goto B6ad47a;
case 0x6ad47f:goto L6ad47f;
case 0x6ad481:c.instructions+=1;goto B6ad481;
case 0x6ad483:goto L6ad483;
case 0x6ad486:c.instructions+=8;goto B6ad486;
case 0x6ad488:c.instructions+=7;goto B6ad488;
case 0x6ad48a:c.instructions+=6;goto B6ad48a;
case 0x6ad490:c.instructions+=5;goto B6ad490;
case 0x6ad496:c.instructions+=4;goto B6ad496;
case 0x6ad49b:c.instructions+=3;goto B6ad49b;
case 0x6ad49c:c.instructions+=2;goto B6ad49c;
case 0x6ad49e:c.instructions+=1;goto B6ad49e;
case 0x6ad4a1:goto L6ad4a1;
case 0x6ad4a3:c.instructions+=1;goto B6ad4a3;
case 0x6ad4a5:goto L6ad4a5;
case 0x6ad4a7:c.instructions+=1;goto B6ad4a7;
case 0x6ad4ac:goto L6ad4ac;
case 0x6ad4ae:c.instructions+=1;goto B6ad4ae;
case 0x6ad4b0:goto L6ad4b0;
case 0x6ad4b2:c.instructions+=1;goto B6ad4b2;
case 0x6ad4b4:goto L6ad4b4;
case 0x6ad4b9:c.instructions+=1;goto B6ad4b9;
case 0x6ad4bb:goto L6ad4bb;
case 0x6ad4c0:c.instructions+=1;goto B6ad4c0;
case 0x6ad4c2:goto L6ad4c2;
case 0x6ad4c7:c.instructions+=1;goto B6ad4c7;
case 0x6ad4c9:goto L6ad4c9;
case 0x6ad4ce:c.instructions+=1;goto B6ad4ce;
case 0x6ad4d0:goto L6ad4d0;
case 0x6ad4d5:c.instructions+=4;goto B6ad4d5;
case 0x6ad4da:c.instructions+=3;goto B6ad4da;
case 0x6ad4dc:c.instructions+=2;goto B6ad4dc;
case 0x6ad4dd:c.instructions+=1;goto B6ad4dd;
case 0x6ad4e2:goto L6ad4e2;
case 0x6ad4e5:c.instructions+=1;goto B6ad4e5;
case 0x6ad4ea:goto L6ad4ea;
case 0x6ad4eb:goto L6ad4eb;
case 0x6ad4ec:c.instructions+=2;goto B6ad4ec;
case 0x6ad4ed:c.instructions+=1;goto B6ad4ed;
case 0x6ad4f0:goto L6ad4f0;
case 0x6ad4f2:c.instructions+=11;goto B6ad4f2;
case 0x6ad4f3:c.instructions+=10;goto B6ad4f3;
case 0x6ad4f5:c.instructions+=9;goto B6ad4f5;
case 0x6ad4f8:c.instructions+=8;goto B6ad4f8;
case 0x6ad4f9:c.instructions+=7;goto B6ad4f9;
case 0x6ad4fc:c.instructions+=6;goto B6ad4fc;
case 0x6ad4fd:c.instructions+=5;goto B6ad4fd;
case 0x6ad4fe:c.instructions+=4;goto B6ad4fe;
case 0x6ad501:c.instructions+=3;goto B6ad501;
case 0x6ad503:c.instructions+=2;goto B6ad503;
case 0x6ad505:c.instructions+=1;goto B6ad505;
case 0x6ad508:goto L6ad508;
case 0x6ad50b:c.instructions+=4;goto B6ad50b;
case 0x6ad50e:c.instructions+=3;goto B6ad50e;
case 0x6ad510:c.instructions+=2;goto B6ad510;
case 0x6ad512:c.instructions+=1;goto B6ad512;
case 0x6ad515:goto L6ad515;
case 0x6ad517:c.instructions+=3;goto B6ad517;
case 0x6ad51d:c.instructions+=2;goto B6ad51d;
case 0x6ad51f:c.instructions+=1;goto B6ad51f;
case 0x6ad525:goto L6ad525;
case 0x6ad529:c.instructions+=1;goto B6ad529;
case 0x6ad52f:goto L6ad52f;
case 0x6ad536:c.instructions+=1;goto B6ad536;
case 0x6ad53c:goto L6ad53c;
case 0x6ad53f:c.instructions+=6;goto B6ad53f;
case 0x6ad542:c.instructions+=5;goto B6ad542;
case 0x6ad545:c.instructions+=4;goto B6ad545;
case 0x6ad549:c.instructions+=3;goto B6ad549;
case 0x6ad54c:c.instructions+=2;goto B6ad54c;
case 0x6ad54e:c.instructions+=1;goto B6ad54e;
case 0x6ad550:goto L6ad550;
case 0x6ad555:goto L6ad555;
case 0x6ad556:c.instructions+=3;goto B6ad556;
case 0x6ad558:c.instructions+=2;goto B6ad558;
case 0x6ad55d:c.instructions+=1;goto B6ad55d;
case 0x6ad55f:goto L6ad55f;
case 0x6ad564:goto L6ad564;
case 0x6ad565:c.instructions+=2;goto B6ad565;
case 0x6ad567:c.instructions+=1;goto B6ad567;
case 0x6ad56c:goto L6ad56c;
case 0x6ad56f:c.instructions+=3;goto B6ad56f;
case 0x6ad571:c.instructions+=2;goto B6ad571;
case 0x6ad572:c.instructions+=1;goto B6ad572;
case 0x6ad577:goto L6ad577;
case 0x6ad57a:c.instructions+=7;goto B6ad57a;
case 0x6ad57c:c.instructions+=6;goto B6ad57c;
case 0x6ad57f:c.instructions+=5;goto B6ad57f;
case 0x6ad582:c.instructions+=4;goto B6ad582;
case 0x6ad588:c.instructions+=3;goto B6ad588;
case 0x6ad589:c.instructions+=2;goto B6ad589;
case 0x6ad58d:c.instructions+=1;goto B6ad58d;
case 0x6ad592:goto L6ad592;
case 0x6ad594:c.instructions+=1;goto B6ad594;
case 0x6ad59a:goto L6ad59a;
case 0x6ad5a0:c.instructions+=2;goto B6ad5a0;
case 0x6ad5a7:c.instructions+=1;goto B6ad5a7;
case 0x6ad5ad:goto L6ad5ad;
case 0x6ad5b0:c.instructions+=2;goto B6ad5b0;
case 0x6ad5b2:c.instructions+=1;goto B6ad5b2;
case 0x6ad5b4:goto L6ad5b4;
case 0x6ad5b8:c.instructions+=1;goto B6ad5b8;
case 0x6ad5ba:goto L6ad5ba;
case 0x6ad5bd:c.instructions+=2;goto B6ad5bd;
case 0x6ad5c1:c.instructions+=1;goto B6ad5c1;
case 0x6ad5c3:goto L6ad5c3;
case 0x6ad5c6:c.instructions+=1;goto B6ad5c6;
case 0x6ad5c9:goto L6ad5c9;
case 0x6ad5cb:c.instructions+=3;goto B6ad5cb;
case 0x6ad5cc:c.instructions+=2;goto B6ad5cc;
case 0x6ad5ce:c.instructions+=1;goto B6ad5ce;
case 0x6ad5d0:goto L6ad5d0;
case 0x6ad5d2:c.instructions+=3;goto B6ad5d2;
case 0x6ad5d5:c.instructions+=2;goto B6ad5d5;
case 0x6ad5d6:c.instructions+=1;goto B6ad5d6;
case 0x6ad5db:goto L6ad5db;
case 0x6ad5dd:c.instructions+=3;goto B6ad5dd;
case 0x6ad5de:c.instructions+=2;goto B6ad5de;
case 0x6ad5e1:c.instructions+=1;goto B6ad5e1;
case 0x6ad5e3:goto L6ad5e3;
case 0x6ad5e8:c.instructions+=1;goto B6ad5e8;
case 0x6ad5ed:goto L6ad5ed;
case 0x6ad5f0:c.instructions+=3;goto B6ad5f0;
case 0x6ad5f5:c.instructions+=2;goto B6ad5f5;
case 0x6ad5f6:c.instructions+=1;goto B6ad5f6;
case 0x6ad5fb:goto L6ad5fb;
case 0x6ad5fe:c.instructions+=5;goto B6ad5fe;
case 0x6ad600:c.instructions+=4;goto B6ad600;
case 0x6ad603:c.instructions+=3;goto B6ad603;
case 0x6ad609:c.instructions+=2;goto B6ad609;
case 0x6ad60c:c.instructions+=1;goto B6ad60c;
case 0x6ad611:goto L6ad611;
case 0x6ad614:c.instructions+=2;goto B6ad614;
case 0x6ad616:c.instructions+=1;goto B6ad616;
case 0x6ad61b:goto L6ad61b;
case 0x6ad61d:c.instructions+=2;goto B6ad61d;
case 0x6ad61e:c.instructions+=1;goto B6ad61e;
case 0x6ad620:goto L6ad620;
case 0x6ad622:c.instructions+=1;goto B6ad622;
case 0x6ad627:goto L6ad627;
case 0x6ad62d:goto L6ad62d;
case 0x6ad630:c.instructions+=2;goto B6ad630;
case 0x6ad632:c.instructions+=1;goto B6ad632;
case 0x6ad638:goto L6ad638;
case 0x6ad63b:c.instructions+=2;goto B6ad63b;
case 0x6ad63d:c.instructions+=1;goto B6ad63d;
case 0x6ad642:goto L6ad642;
case 0x6ad645:c.instructions+=3;goto B6ad645;
case 0x6ad648:c.instructions+=2;goto B6ad648;
case 0x6ad64b:c.instructions+=1;goto B6ad64b;
case 0x6ad651:goto L6ad651;
case 0x6ad658:goto L6ad658;
case 0x6ad65b:goto L6ad65b;
case 0x6ad65e:c.instructions+=1;goto B6ad65e;
case 0x6ad664:goto L6ad664;
case 0x6ad66a:c.instructions+=5;goto B6ad66a;
case 0x6ad66d:c.instructions+=4;goto B6ad66d;
case 0x6ad670:c.instructions+=3;goto B6ad670;
case 0x6ad674:c.instructions+=2;goto B6ad674;
case 0x6ad677:c.instructions+=1;goto B6ad677;
case 0x6ad679:goto L6ad679;
case 0x6ad680:goto L6ad680;
case 0x6ad682:c.instructions+=2;goto B6ad682;
case 0x6ad684:c.instructions+=1;goto B6ad684;
case 0x6ad689:goto L6ad689;
case 0x6ad68b:c.instructions+=1;goto B6ad68b;
case 0x6ad691:goto L6ad691;
case 0x6ad694:c.instructions+=2;goto B6ad694;
case 0x6ad696:c.instructions+=1;goto B6ad696;
case 0x6ad69b:goto L6ad69b;
case 0x6ad69d:c.instructions+=1;goto B6ad69d;
case 0x6ad6a3:goto L6ad6a3;
case 0x6ad6a6:c.instructions+=4;goto B6ad6a6;
case 0x6ad6a9:c.instructions+=3;goto B6ad6a9;
case 0x6ad6ac:c.instructions+=2;goto B6ad6ac;
case 0x6ad6b0:c.instructions+=1;goto B6ad6b0;
case 0x6ad6b6:goto L6ad6b6;
case 0x6ad6b9:c.instructions+=11;goto B6ad6b9;
case 0x6ad6bc:c.instructions+=10;goto B6ad6bc;
case 0x6ad6bd:c.instructions+=9;goto B6ad6bd;
case 0x6ad6c0:c.instructions+=8;goto B6ad6c0;
case 0x6ad6c3:c.instructions+=7;goto B6ad6c3;
case 0x6ad6c6:c.instructions+=6;goto B6ad6c6;
case 0x6ad6c8:c.instructions+=5;goto B6ad6c8;
case 0x6ad6cb:c.instructions+=4;goto B6ad6cb;
case 0x6ad6cc:c.instructions+=3;goto B6ad6cc;
case 0x6ad6cd:c.instructions+=2;goto B6ad6cd;
case 0x6ad6cf:c.instructions+=1;goto B6ad6cf;
case 0x6ad6d5:goto L6ad6d5;
case 0x6ad6d7:c.instructions+=1;goto B6ad6d7;
case 0x6ad6dd:goto L6ad6dd;
case 0x6ad6df:goto L6ad6df;
case 0x6ad6e6:c.instructions+=1;goto B6ad6e6;
case 0x6ad6eb:goto L6ad6eb;
case 0x6ad6f2:c.instructions+=1;goto B6ad6f2;
case 0x6ad6f7:goto L6ad6f7;
case 0x6ad6fe:c.instructions+=1;goto B6ad6fe;
case 0x6ad703:goto L6ad703;
case 0x6ad70a:c.instructions+=1;goto B6ad70a;
case 0x6ad70f:goto L6ad70f;
case 0x6ad716:c.instructions+=1;goto B6ad716;
case 0x6ad71b:goto L6ad71b;
case 0x6ad722:c.instructions+=1;goto B6ad722;
case 0x6ad727:goto L6ad727;
case 0x6ad72e:c.instructions+=1;goto B6ad72e;
case 0x6ad733:goto L6ad733;
case 0x6ad735:c.instructions+=2;goto B6ad735;
case 0x6ad73c:c.instructions+=1;goto B6ad73c;
case 0x6ad742:goto L6ad742;
case 0x6ad747:goto L6ad747;
case 0x6ad748:c.instructions+=4;goto B6ad748;
case 0x6ad749:c.instructions+=3;goto B6ad749;
case 0x6ad74a:c.instructions+=2;goto B6ad74a;
case 0x6ad74b:c.instructions+=1;goto B6ad74b;
case 0x6ad74e:goto L6ad74e;
case 0x6ad755:c.instructions+=1;goto B6ad755;
case 0x6ad75a:goto L6ad75a;
case 0x6ad761:c.instructions+=1;goto B6ad761;
case 0x6ad766:goto L6ad766;
case 0x6ad76d:c.instructions+=1;goto B6ad76d;
case 0x6ad772:goto L6ad772;
case 0x6ad779:c.instructions+=1;goto B6ad779;
case 0x6ad77e:goto L6ad77e;
case 0x6ad785:c.instructions+=1;goto B6ad785;
case 0x6ad78a:goto L6ad78a;
case 0x6ad791:c.instructions+=1;goto B6ad791;
case 0x6ad796:goto L6ad796;
case 0x6ad79d:c.instructions+=2;goto B6ad79d;
case 0x6ad7a4:c.instructions+=1;goto B6ad7a4;
case 0x6ad7a9:goto L6ad7a9;
case 0x6ad7ab:c.instructions+=9;goto B6ad7ab;
case 0x6ad7ae:c.instructions+=8;goto B6ad7ae;
case 0x6ad7af:c.instructions+=7;goto B6ad7af;
case 0x6ad7b2:c.instructions+=6;goto B6ad7b2;
case 0x6ad7b3:c.instructions+=5;goto B6ad7b3;
case 0x6ad7b6:c.instructions+=4;goto B6ad7b6;
case 0x6ad7b7:c.instructions+=3;goto B6ad7b7;
case 0x6ad7b8:c.instructions+=2;goto B6ad7b8;
case 0x6ad7ba:c.instructions+=1;goto B6ad7ba;
case 0x6ad7c0:goto L6ad7c0;
case 0x6ad7c2:c.instructions+=1;goto B6ad7c2;
case 0x6ad7c4:goto L6ad7c4;
case 0x6ad7c8:goto L6ad7c8;
case 0x6ad7cc:c.instructions+=9;goto B6ad7cc;
case 0x6ad7d0:c.instructions+=8;goto B6ad7d0;
case 0x6ad7d3:c.instructions+=7;goto B6ad7d3;
case 0x6ad7d7:c.instructions+=6;goto B6ad7d7;
case 0x6ad7da:c.instructions+=5;goto B6ad7da;
case 0x6ad7db:c.instructions+=4;goto B6ad7db;
case 0x6ad7dc:c.instructions+=3;goto B6ad7dc;
case 0x6ad7dd:c.instructions+=2;goto B6ad7dd;
case 0x6ad7de:c.instructions+=1;goto B6ad7de;
case 0x6ad7e0:goto L6ad7e0;
case 0x6ad7e3:c.instructions+=1;goto B6ad7e3;
case 0x6ad7e6:goto L6ad7e6;
case 0x6ad7e8:c.instructions+=2;goto B6ad7e8;
case 0x6ad7eb:c.instructions+=1;goto B6ad7eb;
case 0x6ad7ed:goto L6ad7ed;
case 0x6ad7f0:c.instructions+=2;goto B6ad7f0;
case 0x6ad7f3:c.instructions+=1;goto B6ad7f3;
case 0x6ad7f5:goto L6ad7f5;
case 0x6ad7f8:c.instructions+=2;goto B6ad7f8;
case 0x6ad7fb:c.instructions+=1;goto B6ad7fb;
case 0x6ad7fd:goto L6ad7fd;
case 0x6ad800:c.instructions+=2;goto B6ad800;
case 0x6ad803:c.instructions+=1;goto B6ad803;
case 0x6ad807:goto L6ad807;
case 0x6ad80a:c.instructions+=4;goto B6ad80a;
case 0x6ad80d:c.instructions+=3;goto B6ad80d;
case 0x6ad810:c.instructions+=2;goto B6ad810;
case 0x6ad813:c.instructions+=1;goto B6ad813;
case 0x6ad815:goto L6ad815;
case 0x6ad818:c.instructions+=1;goto B6ad818;
case 0x6ad81a:goto L6ad81a;
case 0x6ad81e:c.instructions+=2;goto B6ad81e;
case 0x6ad821:c.instructions+=1;goto B6ad821;
case 0x6ad823:goto L6ad823;
case 0x6ad827:c.instructions+=1;goto B6ad827;
case 0x6ad828:goto L6ad828;
case 0x6ad829:c.instructions+=2;goto B6ad829;
case 0x6ad82c:c.instructions+=1;goto B6ad82c;
case 0x6ad82e:goto L6ad82e;
case 0x6ad831:c.instructions+=8;goto B6ad831;
case 0x6ad833:c.instructions+=7;goto B6ad833;
case 0x6ad836:c.instructions+=6;goto B6ad836;
case 0x6ad837:c.instructions+=5;goto B6ad837;
case 0x6ad838:c.instructions+=4;goto B6ad838;
case 0x6ad83b:c.instructions+=3;goto B6ad83b;
case 0x6ad83c:c.instructions+=2;goto B6ad83c;
case 0x6ad83e:c.instructions+=1;goto B6ad83e;
case 0x6ad841:goto L6ad841;
case 0x6ad843:c.instructions+=1;goto B6ad843;
case 0x6ad849:goto L6ad849;
case 0x6ad84b:c.instructions+=4;goto B6ad84b;
case 0x6ad84d:c.instructions+=3;goto B6ad84d;
case 0x6ad84f:c.instructions+=2;goto B6ad84f;
case 0x6ad851:c.instructions+=1;goto B6ad851;
case 0x6ad854:goto L6ad854;
case 0x6ad857:c.instructions+=4;goto B6ad857;
case 0x6ad859:c.instructions+=3;goto B6ad859;
case 0x6ad85f:c.instructions+=2;goto B6ad85f;
case 0x6ad861:c.instructions+=1;goto B6ad861;
case 0x6ad863:goto L6ad863;
case 0x6ad867:goto L6ad867;
case 0x6ad86b:c.instructions+=2;goto B6ad86b;
case 0x6ad86f:c.instructions+=1;goto B6ad86f;
case 0x6ad871:goto L6ad871;
case 0x6ad878:c.instructions+=1;goto B6ad878;
case 0x6ad87a:goto L6ad87a;
case 0x6ad87e:c.instructions+=1;goto B6ad87e;
case 0x6ad880:goto L6ad880;
case 0x6ad884:goto L6ad884;
case 0x6ad887:c.instructions+=16;goto B6ad887;
case 0x6ad889:c.instructions+=15;goto B6ad889;
case 0x6ad88b:c.instructions+=14;goto B6ad88b;
case 0x6ad88e:c.instructions+=13;goto B6ad88e;
case 0x6ad891:c.instructions+=12;goto B6ad891;
case 0x6ad894:c.instructions+=11;goto B6ad894;
case 0x6ad896:c.instructions+=10;goto B6ad896;
case 0x6ad899:c.instructions+=9;goto B6ad899;
case 0x6ad89c:c.instructions+=8;goto B6ad89c;
case 0x6ad8a1:c.instructions+=7;goto B6ad8a1;
case 0x6ad8a3:c.instructions+=6;goto B6ad8a3;
case 0x6ad8a6:c.instructions+=5;goto B6ad8a6;
case 0x6ad8a8:c.instructions+=4;goto B6ad8a8;
case 0x6ad8ab:c.instructions+=3;goto B6ad8ab;
case 0x6ad8ac:c.instructions+=2;goto B6ad8ac;
case 0x6ad8ae:c.instructions+=1;goto B6ad8ae;
case 0x6ad8b1:goto L6ad8b1;
case 0x6ad8b3:c.instructions+=1;goto B6ad8b3;
case 0x6ad8b9:goto L6ad8b9;
case 0x6ad8bb:c.instructions+=2;goto B6ad8bb;
case 0x6ad8bd:c.instructions+=1;goto B6ad8bd;
case 0x6ad8c0:goto L6ad8c0;
case 0x6ad8c2:c.instructions+=1;goto B6ad8c2;
case 0x6ad8c8:goto L6ad8c8;
case 0x6ad8ca:c.instructions+=1;goto B6ad8ca;
case 0x6ad8cf:goto L6ad8cf;
case 0x6ad8d1:c.instructions+=1;goto B6ad8d1;
case 0x6ad8d7:goto L6ad8d7;
case 0x6ad8da:c.instructions+=2;goto B6ad8da;
case 0x6ad8dc:c.instructions+=1;goto B6ad8dc;
case 0x6ad8de:goto L6ad8de;
case 0x6ad8e0:goto L6ad8e0;
case 0x6ad8e2:c.instructions+=1;goto B6ad8e2;
case 0x6ad8e7:goto L6ad8e7;
case 0x6ad8e9:c.instructions+=2;goto B6ad8e9;
case 0x6ad8ea:c.instructions+=1;goto B6ad8ea;
case 0x6ad93b:goto L6ad93b;
case 0x6ad93d:c.instructions+=13;goto B6ad93d;
case 0x6ad93e:c.instructions+=12;goto B6ad93e;
case 0x6ad940:c.instructions+=11;goto B6ad940;
case 0x6ad943:c.instructions+=10;goto B6ad943;
case 0x6ad944:c.instructions+=9;goto B6ad944;
case 0x6ad945:c.instructions+=8;goto B6ad945;
case 0x6ad947:c.instructions+=7;goto B6ad947;
case 0x6ad94a:c.instructions+=6;goto B6ad94a;
case 0x6ad94d:c.instructions+=5;goto B6ad94d;
case 0x6ad950:c.instructions+=4;goto B6ad950;
case 0x6ad956:c.instructions+=3;goto B6ad956;
case 0x6ad95b:c.instructions+=2;goto B6ad95b;
case 0x6ad960:c.instructions+=1;goto B6ad960;
case 0x6ad962:goto L6ad962;
case 0x6ad968:c.instructions+=5;goto B6ad968;
case 0x6ad96d:c.instructions+=4;goto B6ad96d;
case 0x6ad972:c.instructions+=3;goto B6ad972;
case 0x6ad975:c.instructions+=2;goto B6ad975;
case 0x6ad976:c.instructions+=1;goto B6ad976;
case 0x6ad97b:goto L6ad97b;
case 0x6ad97e:c.instructions+=2;goto B6ad97e;
case 0x6ad983:c.instructions+=1;goto B6ad983;
case 0x6ad988:goto L6ad988;
case 0x6ad98b:c.instructions+=2;goto B6ad98b;
case 0x6ad98e:c.instructions+=1;goto B6ad98e;
case 0x6ad990:goto L6ad990;
case 0x6ad991:c.instructions+=2;goto B6ad991;
case 0x6ad993:c.instructions+=1;goto B6ad993;
case 0x6ad998:goto L6ad998;
case 0x6ad99a:c.instructions+=1;goto B6ad99a;
case 0x6ad9a0:goto L6ad9a0;
case 0x6ad9a3:c.instructions+=2;goto B6ad9a3;
case 0x6ad9a9:c.instructions+=1;goto B6ad9a9;
case 0x6ad9ab:goto L6ad9ab;
case 0x6ad9ad:c.instructions+=1;goto B6ad9ad;
case 0x6ad9b2:goto L6ad9b2;
case 0x6ad9b4:c.instructions+=2;goto B6ad9b4;
case 0x6ad9b6:c.instructions+=1;goto B6ad9b6;
case 0x6ad9bb:goto L6ad9bb;
case 0x6ad9bd:c.instructions+=1;goto B6ad9bd;
case 0x6ad9bf:goto L6ad9bf;
case 0x6ad9c1:c.instructions+=7;goto B6ad9c1;
case 0x6ad9c2:c.instructions+=6;goto B6ad9c2;
case 0x6ad9c4:c.instructions+=5;goto B6ad9c4;
case 0x6ad9c9:c.instructions+=4;goto B6ad9c9;
case 0x6ad9ca:c.instructions+=3;goto B6ad9ca;
case 0x6ad9cf:c.instructions+=2;goto B6ad9cf;
case 0x6ad9d1:c.instructions+=1;goto B6ad9d1;
case 0x6ad9d4:goto L6ad9d4;
case 0x6ad9d6:c.instructions+=1;goto B6ad9d6;
case 0x6ad9d8:goto L6ad9d8;
case 0x6ad9da:c.instructions+=7;goto B6ad9da;
case 0x6ad9dd:c.instructions+=6;goto B6ad9dd;
case 0x6ad9de:c.instructions+=5;goto B6ad9de;
case 0x6ad9e1:c.instructions+=4;goto B6ad9e1;
case 0x6ad9e2:c.instructions+=3;goto B6ad9e2;
case 0x6ad9e3:c.instructions+=2;goto B6ad9e3;
case 0x6ad9e5:c.instructions+=1;goto B6ad9e5;
case 0x6ad9e8:goto L6ad9e8;
case 0x6ad9ea:c.instructions+=1;goto B6ad9ea;
case 0x6ad9ec:goto L6ad9ec;
case 0x6ad9ee:c.instructions+=8;goto B6ad9ee;
case 0x6ad9f1:c.instructions+=7;goto B6ad9f1;
case 0x6ad9f2:c.instructions+=6;goto B6ad9f2;
case 0x6ad9f3:c.instructions+=5;goto B6ad9f3;
case 0x6ad9f5:c.instructions+=4;goto B6ad9f5;
case 0x6ad9f8:c.instructions+=3;goto B6ad9f8;
case 0x6ad9f9:c.instructions+=2;goto B6ad9f9;
case 0x6ad9fb:c.instructions+=1;goto B6ad9fb;
case 0x6ad9fe:goto L6ad9fe;
case 0x6ada00:c.instructions+=1;goto B6ada00;
case 0x6ada02:goto L6ada02;
case 0x6ada05:c.instructions+=5;goto B6ada05;
case 0x6ada07:c.instructions+=4;goto B6ada07;
case 0x6ada0a:c.instructions+=3;goto B6ada0a;
case 0x6ada0c:c.instructions+=2;goto B6ada0c;
case 0x6ada0f:c.instructions+=1;goto B6ada0f;
case 0x6ada12:goto L6ada12;
case 0x6ada14:c.instructions+=1;goto B6ada14;
case 0x6ada16:goto L6ada16;
case 0x6ada18:c.instructions+=2;goto B6ada18;
case 0x6ada1a:c.instructions+=1;goto B6ada1a;
case 0x6ada1d:goto L6ada1d;
case 0x6ada1f:c.instructions+=1;goto B6ada1f;
case 0x6ada21:goto L6ada21;
case 0x6ada23:c.instructions+=1;goto B6ada23;
case 0x6ada28:goto L6ada28;
case 0x6ada2a:c.instructions+=1;goto B6ada2a;
case 0x6ada2c:goto L6ada2c;
case 0x6ada2f:c.instructions+=2;goto B6ada2f;
case 0x6ada35:c.instructions+=1;goto B6ada35;
case 0x6ada37:goto L6ada37;
case 0x6ada38:goto L6ada38;
case 0x6ada39:c.instructions+=3;goto B6ada39;
case 0x6ada3a:c.instructions+=2;goto B6ada3a;
case 0x6ada3b:c.instructions+=1;goto B6ada3b;
case 0x6ada3e:goto L6ada3e;
case 0x6ada40:c.instructions+=9;goto B6ada40;
case 0x6ada41:c.instructions+=8;goto B6ada41;
case 0x6ada43:c.instructions+=7;goto B6ada43;
case 0x6ada44:c.instructions+=6;goto B6ada44;
case 0x6ada45:c.instructions+=5;goto B6ada45;
case 0x6ada48:c.instructions+=4;goto B6ada48;
case 0x6ada4b:c.instructions+=3;goto B6ada4b;
case 0x6ada4d:c.instructions+=2;goto B6ada4d;
case 0x6ada4e:c.instructions+=1;goto B6ada4e;
case 0x6ada53:goto L6ada53;
case 0x6ada55:c.instructions+=1;goto B6ada55;
case 0x6ada57:goto L6ada57;
case 0x6ada5d:c.instructions+=1;goto B6ada5d;
case 0x6ada5f:goto L6ada5f;
case 0x6ada65:c.instructions+=3;goto B6ada65;
case 0x6ada6a:c.instructions+=2;goto B6ada6a;
case 0x6ada6f:c.instructions+=1;goto B6ada6f;
case 0x6ada71:goto L6ada71;
case 0x6ada74:c.instructions+=8;goto B6ada74;
case 0x6ada77:c.instructions+=7;goto B6ada77;
case 0x6ada7a:c.instructions+=6;goto B6ada7a;
case 0x6ada7d:c.instructions+=5;goto B6ada7d;
case 0x6ada80:c.instructions+=4;goto B6ada80;
case 0x6ada83:c.instructions+=3;goto B6ada83;
case 0x6ada86:c.instructions+=2;goto B6ada86;
case 0x6ada8a:c.instructions+=1;goto B6ada8a;
case 0x6ada8c:goto L6ada8c;
case 0x6ada91:c.instructions+=1;goto B6ada91;
case 0x6ada93:goto L6ada93;
case 0x6ada96:c.instructions+=7;goto B6ada96;
case 0x6ada99:c.instructions+=6;goto B6ada99;
case 0x6ada9c:c.instructions+=5;goto B6ada9c;
case 0x6ada9f:c.instructions+=4;goto B6ada9f;
case 0x6adaa4:c.instructions+=3;goto B6adaa4;
case 0x6adaa9:c.instructions+=2;goto B6adaa9;
case 0x6adaac:c.instructions+=1;goto B6adaac;
case 0x6adaae:goto L6adaae;
case 0x6adaaf:c.instructions+=1;goto B6adaaf;
case 0x6adab1:goto L6adab1;
case 0x6adab2:c.instructions+=1;goto B6adab2;
case 0x6adab4:goto L6adab4;
case 0x6adab5:c.instructions+=1;goto B6adab5;
case 0x6adab7:goto L6adab7;
case 0x6adabc:c.instructions+=1;goto B6adabc;
case 0x6adabe:goto L6adabe;
case 0x6adac3:c.instructions+=1;goto B6adac3;
case 0x6adac5:goto L6adac5;
case 0x6adaca:goto L6adaca;
case 0x6adacb:c.instructions+=2;goto B6adacb;
case 0x6adacd:c.instructions+=1;goto B6adacd;
case 0x6adad2:goto L6adad2;
case 0x6adad4:goto L6adad4;
case 0x6adad5:c.instructions+=3;goto B6adad5;
case 0x6adad6:c.instructions+=2;goto B6adad6;
case 0x6adad7:c.instructions+=1;goto B6adad7;
case 0x6adada:goto L6adada;
case 0x6adadc:c.instructions+=13;goto B6adadc;
case 0x6adadd:c.instructions+=12;goto B6adadd;
case 0x6adadf:c.instructions+=11;goto B6adadf;
case 0x6adae0:c.instructions+=10;goto B6adae0;
case 0x6adae2:c.instructions+=9;goto B6adae2;
case 0x6adae5:c.instructions+=8;goto B6adae5;
case 0x6adae7:c.instructions+=7;goto B6adae7;
case 0x6adae8:c.instructions+=6;goto B6adae8;
case 0x6adaeb:c.instructions+=5;goto B6adaeb;
case 0x6adaed:c.instructions+=4;goto B6adaed;
case 0x6adaf0:c.instructions+=3;goto B6adaf0;
case 0x6adaf3:c.instructions+=2;goto B6adaf3;
case 0x6adaf5:c.instructions+=1;goto B6adaf5;
case 0x6adaf8:goto L6adaf8;
case 0x6adafb:c.instructions+=1;goto B6adafb;
case 0x6adafd:goto L6adafd;
case 0x6adb00:c.instructions+=3;goto B6adb00;
case 0x6adb06:c.instructions+=2;goto B6adb06;
case 0x6adb08:c.instructions+=1;goto B6adb08;
case 0x6adb0a:goto L6adb0a;
case 0x6adb0d:c.instructions+=5;goto B6adb0d;
case 0x6adb0f:c.instructions+=4;goto B6adb0f;
case 0x6adb12:c.instructions+=3;goto B6adb12;
case 0x6adb15:c.instructions+=2;goto B6adb15;
case 0x6adb16:c.instructions+=1;goto B6adb16;
case 0x6adb1b:goto L6adb1b;
case 0x6adb1c:c.instructions+=3;goto B6adb1c;
case 0x6adb1d:c.instructions+=2;goto B6adb1d;
case 0x6adb1e:c.instructions+=1;goto B6adb1e;
case 0x6adb21:goto L6adb21;
case 0x6adb23:c.instructions+=13;goto B6adb23;
case 0x6adb24:c.instructions+=12;goto B6adb24;
case 0x6adb26:c.instructions+=11;goto B6adb26;
case 0x6adb27:c.instructions+=10;goto B6adb27;
case 0x6adb2a:c.instructions+=9;goto B6adb2a;
case 0x6adb2b:c.instructions+=8;goto B6adb2b;
case 0x6adb2c:c.instructions+=7;goto B6adb2c;
case 0x6adb2f:c.instructions+=6;goto B6adb2f;
case 0x6adb30:c.instructions+=5;goto B6adb30;
case 0x6adb33:c.instructions+=4;goto B6adb33;
case 0x6adb35:c.instructions+=3;goto B6adb35;
case 0x6adb38:c.instructions+=2;goto B6adb38;
case 0x6adb39:c.instructions+=1;goto B6adb39;
case 0x6adb3e:goto L6adb3e;
case 0x6adb40:c.instructions+=1;goto B6adb40;
case 0x6adb42:goto L6adb42;
case 0x6adb45:c.instructions+=3;goto B6adb45;
case 0x6adb47:c.instructions+=2;goto B6adb47;
case 0x6adb49:c.instructions+=1;goto B6adb49;
case 0x6adb4c:goto L6adb4c;
case 0x6adb4f:c.instructions+=1;goto B6adb4f;
case 0x6adb51:goto L6adb51;
case 0x6adb57:goto L6adb57;
case 0x6adb59:goto L6adb59;
case 0x6adb5a:c.instructions+=4;goto B6adb5a;
case 0x6adb5b:c.instructions+=3;goto B6adb5b;
case 0x6adb5c:c.instructions+=2;goto B6adb5c;
case 0x6adb5d:c.instructions+=1;goto B6adb5d;
case 0x6adb60:goto L6adb60;
case 0x6adb62:c.instructions+=11;goto B6adb62;
case 0x6adb63:c.instructions+=10;goto B6adb63;
case 0x6adb65:c.instructions+=9;goto B6adb65;
case 0x6adb66:c.instructions+=8;goto B6adb66;
case 0x6adb67:c.instructions+=7;goto B6adb67;
case 0x6adb68:c.instructions+=6;goto B6adb68;
case 0x6adb69:c.instructions+=5;goto B6adb69;
case 0x6adb6b:c.instructions+=4;goto B6adb6b;
case 0x6adb6e:c.instructions+=3;goto B6adb6e;
case 0x6adb70:c.instructions+=2;goto B6adb70;
case 0x6adb73:c.instructions+=1;goto B6adb73;
case 0x6adb75:goto L6adb75;
case 0x6adb7c:c.instructions+=1;goto B6adb7c;
case 0x6adb81:goto L6adb81;
case 0x6adb84:c.instructions+=5;goto B6adb84;
case 0x6adb86:c.instructions+=4;goto B6adb86;
case 0x6adb89:c.instructions+=3;goto B6adb89;
case 0x6adb8c:c.instructions+=2;goto B6adb8c;
case 0x6adb90:c.instructions+=1;goto B6adb90;
case 0x6adb92:goto L6adb92;
case 0x6adb99:goto L6adb99;
case 0x6adb9c:c.instructions+=1;goto B6adb9c;
case 0x6adb9e:goto L6adb9e;
case 0x6adba1:c.instructions+=7;goto B6adba1;
case 0x6adba4:c.instructions+=6;goto B6adba4;
case 0x6adba7:c.instructions+=5;goto B6adba7;
case 0x6adbaa:c.instructions+=4;goto B6adbaa;
case 0x6adbad:c.instructions+=3;goto B6adbad;
case 0x6adbaf:c.instructions+=2;goto B6adbaf;
case 0x6adbb1:c.instructions+=1;goto B6adbb1;
case 0x6adbb3:goto L6adbb3;
case 0x6adbb4:c.instructions+=1;goto B6adbb4;
case 0x6adbb6:goto L6adbb6;
case 0x6adbb7:c.instructions+=1;goto B6adbb7;
case 0x6adbb9:goto L6adbb9;
case 0x6adbba:c.instructions+=1;goto B6adbba;
case 0x6adbbc:goto L6adbbc;
case 0x6adbc1:c.instructions+=1;goto B6adbc1;
case 0x6adbc3:goto L6adbc3;
case 0x6adbc8:c.instructions+=1;goto B6adbc8;
case 0x6adbca:goto L6adbca;
case 0x6adbcf:c.instructions+=1;goto B6adbcf;
case 0x6adbd1:goto L6adbd1;
case 0x6adbd6:goto L6adbd6;
case 0x6adbd9:c.instructions+=2;goto B6adbd9;
case 0x6adbdb:c.instructions+=1;goto B6adbdb;
case 0x6adbdd:goto L6adbdd;
case 0x6adbe3:c.instructions+=5;goto B6adbe3;
case 0x6adbe8:c.instructions+=4;goto B6adbe8;
case 0x6adbed:c.instructions+=3;goto B6adbed;
case 0x6adbf0:c.instructions+=2;goto B6adbf0;
case 0x6adbf1:c.instructions+=1;goto B6adbf1;
case 0x6adbf6:goto L6adbf6;
case 0x6adbf9:goto L6adbf9;
case 0x6adbfc:c.instructions+=3;goto B6adbfc;
case 0x6adbfd:c.instructions+=2;goto B6adbfd;
case 0x6adc00:c.instructions+=1;goto B6adc00;
case 0x6adc02:goto L6adc02;
case 0x6adc06:c.instructions+=1;goto B6adc06;
case 0x6adc08:goto L6adc08;
case 0x6adc0f:c.instructions+=1;goto B6adc0f;
case 0x6adc11:goto L6adc11;
case 0x6adc13:c.instructions+=2;goto B6adc13;
case 0x6adc16:c.instructions+=1;goto B6adc16;
case 0x6adc18:goto L6adc18;
case 0x6adc1b:goto L6adc1b;
case 0x6adc1e:c.instructions+=4;goto B6adc1e;
case 0x6adc21:c.instructions+=3;goto B6adc21;
case 0x6adc24:c.instructions+=2;goto B6adc24;
case 0x6adc28:c.instructions+=1;goto B6adc28;
case 0x6adc2a:goto L6adc2a;
case 0x6adc2d:c.instructions+=4;goto B6adc2d;
case 0x6adc30:c.instructions+=3;goto B6adc30;
case 0x6adc33:c.instructions+=2;goto B6adc33;
case 0x6adc37:c.instructions+=1;goto B6adc37;
case 0x6adc39:goto L6adc39;
case 0x6adc3d:c.instructions+=1;goto B6adc3d;
case 0x6adc3f:goto L6adc3f;
case 0x6adc43:c.instructions+=1;goto B6adc43;
case 0x6adc45:goto L6adc45;
case 0x6adc46:c.instructions+=2;goto B6adc46;
case 0x6adc49:c.instructions+=1;goto B6adc49;
case 0x6adc4b:goto L6adc4b;
case 0x6adc4e:goto L6adc4e;
case 0x6adc50:goto L6adc50;
case 0x6adc54:goto L6adc54;
case 0x6adc5b:c.instructions+=1;goto B6adc5b;
case 0x6adc5d:goto L6adc5d;
case 0x6adc5f:c.instructions+=2;goto B6adc5f;
case 0x6adc65:c.instructions+=1;goto B6adc65;
case 0x6adc67:goto L6adc67;
case 0x6adc6a:c.instructions+=1;goto B6adc6a;
case 0x6adc6c:goto L6adc6c;
case 0x6adc72:c.instructions+=9;goto B6adc72;
case 0x6adc75:c.instructions+=8;goto B6adc75;
case 0x6adc78:c.instructions+=7;goto B6adc78;
case 0x6adc7e:c.instructions+=6;goto B6adc7e;
case 0x6adc81:c.instructions+=5;goto B6adc81;
case 0x6adc84:c.instructions+=4;goto B6adc84;
case 0x6adc85:c.instructions+=3;goto B6adc85;
case 0x6adc88:c.instructions+=2;goto B6adc88;
case 0x6adc8c:c.instructions+=1;goto B6adc8c;
case 0x6adc8e:goto L6adc8e;
case 0x6adc91:c.instructions+=8;goto B6adc91;
case 0x6adc94:c.instructions+=7;goto B6adc94;
case 0x6adc95:c.instructions+=6;goto B6adc95;
case 0x6adc96:c.instructions+=5;goto B6adc96;
case 0x6adc98:c.instructions+=4;goto B6adc98;
case 0x6adc9a:c.instructions+=3;goto B6adc9a;
case 0x6adc9b:c.instructions+=2;goto B6adc9b;
case 0x6adc9c:c.instructions+=1;goto B6adc9c;
case 0x6adc9f:goto L6adc9f;
case 0x6adca1:c.instructions+=10;goto B6adca1;
case 0x6adca2:c.instructions+=9;goto B6adca2;
case 0x6adca4:c.instructions+=8;goto B6adca4;
case 0x6adca5:c.instructions+=7;goto B6adca5;
case 0x6adca6:c.instructions+=6;goto B6adca6;
case 0x6adca7:c.instructions+=5;goto B6adca7;
case 0x6adcaa:c.instructions+=4;goto B6adcaa;
case 0x6adcad:c.instructions+=3;goto B6adcad;
case 0x6adcaf:c.instructions+=2;goto B6adcaf;
case 0x6adcb5:c.instructions+=1;goto B6adcb5;
case 0x6adcb7:goto L6adcb7;
case 0x6adcbd:c.instructions+=1;goto B6adcbd;
case 0x6adcbf:goto L6adcbf;
case 0x6adcc2:c.instructions+=3;goto B6adcc2;
case 0x6adcc4:c.instructions+=2;goto B6adcc4;
case 0x6adcc6:c.instructions+=1;goto B6adcc6;
case 0x6adcc9:goto L6adcc9;
case 0x6adcca:c.instructions+=3;goto B6adcca;
case 0x6adccf:c.instructions+=2;goto B6adccf;
case 0x6adcd1:c.instructions+=1;goto B6adcd1;
case 0x6adcd6:goto L6adcd6;
case 0x6adcd8:c.instructions+=2;goto B6adcd8;
case 0x6adcdc:c.instructions+=1;goto B6adcdc;
case 0x6adcde:goto L6adcde;
case 0x6adce1:c.instructions+=4;goto B6adce1;
case 0x6adce3:c.instructions+=3;goto B6adce3;
case 0x6adce6:c.instructions+=2;goto B6adce6;
case 0x6adce7:c.instructions+=1;goto B6adce7;
case 0x6adcec:goto L6adcec;
case 0x6adcee:goto L6adcee;
case 0x6adcf1:c.instructions+=3;goto B6adcf1;
case 0x6adcf3:c.instructions+=2;goto B6adcf3;
case 0x6adcf5:c.instructions+=1;goto B6adcf5;
case 0x6adcf8:goto L6adcf8;
case 0x6adcfb:c.instructions+=11;goto B6adcfb;
case 0x6adcfe:c.instructions+=10;goto B6adcfe;
case 0x6adcff:c.instructions+=9;goto B6adcff;
case 0x6add01:c.instructions+=8;goto B6add01;
case 0x6add04:c.instructions+=7;goto B6add04;
case 0x6add07:c.instructions+=6;goto B6add07;
case 0x6add09:c.instructions+=5;goto B6add09;
case 0x6add0c:c.instructions+=4;goto B6add0c;
case 0x6add11:c.instructions+=3;goto B6add11;
case 0x6add12:c.instructions+=2;goto B6add12;
case 0x6add13:c.instructions+=1;goto B6add13;
case 0x6add18:goto L6add18;
case 0x6add1b:c.instructions+=1;goto B6add1b;
case 0x6add20:goto L6add20;
case 0x6add21:c.instructions+=4;goto B6add21;
case 0x6add22:c.instructions+=3;goto B6add22;
case 0x6add23:c.instructions+=2;goto B6add23;
case 0x6add24:c.instructions+=1;goto B6add24;
case 0x6add27:goto L6add27;
case 0x6add29:c.instructions+=16;goto B6add29;
case 0x6add2a:c.instructions+=15;goto B6add2a;
case 0x6add2c:c.instructions+=14;goto B6add2c;
case 0x6add2f:c.instructions+=13;goto B6add2f;
case 0x6add30:c.instructions+=12;goto B6add30;
case 0x6add33:c.instructions+=11;goto B6add33;
case 0x6add35:c.instructions+=10;goto B6add35;
case 0x6add38:c.instructions+=9;goto B6add38;
case 0x6add3a:c.instructions+=8;goto B6add3a;
case 0x6add3f:c.instructions+=7;goto B6add3f;
case 0x6add43:c.instructions+=6;goto B6add43;
case 0x6add46:c.instructions+=5;goto B6add46;
case 0x6add49:c.instructions+=4;goto B6add49;
case 0x6add4f:c.instructions+=3;goto B6add4f;
case 0x6add53:c.instructions+=2;goto B6add53;
case 0x6add54:c.instructions+=1;goto B6add54;
case 0x6add56:goto L6add56;
case 0x6add5c:c.instructions+=1;goto B6add5c;
case 0x6add5e:goto L6add5e;
case 0x6add62:c.instructions+=1;goto B6add62;
case 0x6add64:goto L6add64;
case 0x6add66:c.instructions+=1;goto B6add66;
case 0x6add67:goto L6add67;
case 0x6add68:c.instructions+=1;goto B6add68;
case 0x6add6b:goto L6add6b;
case 0x6add70:c.instructions+=2;goto B6add70;
case 0x6add72:c.instructions+=1;goto B6add72;
case 0x6add74:goto L6add74;
case 0x6add76:goto L6add76;
case 0x6add7c:c.instructions+=1;goto B6add7c;
case 0x6add7e:goto L6add7e;
case 0x6add84:c.instructions+=1;goto B6add84;
case 0x6add86:goto L6add86;
case 0x6add8c:c.instructions+=1;goto B6add8c;
case 0x6add8e:goto L6add8e;
case 0x6add94:c.instructions+=1;goto B6add94;
case 0x6add96:goto L6add96;
case 0x6add9c:c.instructions+=1;goto B6add9c;
case 0x6add9e:goto L6add9e;
case 0x6adda4:c.instructions+=1;goto B6adda4;
case 0x6adda6:goto L6adda6;
case 0x6addac:c.instructions+=1;goto B6addac;
case 0x6addae:goto L6addae;
case 0x6addb4:goto L6addb4;
case 0x6addb6:goto L6addb6;
case 0x6addb8:c.instructions+=1;goto B6addb8;
case 0x6addba:goto L6addba;
case 0x6addbc:c.instructions+=6;goto B6addbc;
case 0x6addbd:c.instructions+=5;goto B6addbd;
case 0x6addbf:c.instructions+=4;goto B6addbf;
case 0x6addc0:c.instructions+=3;goto B6addc0;
case 0x6addc2:c.instructions+=2;goto B6addc2;
case 0x6addc8:c.instructions+=1;goto B6addc8;
case 0x6addcd:goto L6addcd;
case 0x6addd1:c.instructions+=1;goto B6addd1;
case 0x6addd3:goto L6addd3;
case 0x6addd4:c.instructions+=1;goto B6addd4;
case 0x6addd9:goto L6addd9;
case 0x6addda:goto L6addda;
case 0x6adddc:c.instructions+=3;goto B6adddc;
case 0x6adddd:c.instructions+=2;goto B6adddd;
case 0x6addde:c.instructions+=1;goto B6addde;
case 0x6adde1:goto L6adde1;
case 0x6adde3:c.instructions+=3;goto B6adde3;
case 0x6adde4:c.instructions+=2;goto B6adde4;
case 0x6adde6:c.instructions+=1;goto B6adde6;
case 0x6addeb:goto L6addeb;
case 0x6added:c.instructions+=1;goto B6added;
case 0x6addef:goto L6addef;
case 0x6addf1:c.instructions+=2;goto B6addf1;
case 0x6addf2:c.instructions+=1;goto B6addf2;
case 0x6addf7:goto L6addf7;
case 0x6addf8:c.instructions+=1;goto B6addf8;
case 0x6addf9:goto L6addf9;
case 0x6addfb:c.instructions+=12;goto B6addfb;
case 0x6addfc:c.instructions+=11;goto B6addfc;
case 0x6addfe:c.instructions+=10;goto B6addfe;
case 0x6ade01:c.instructions+=9;goto B6ade01;
case 0x6ade02:c.instructions+=8;goto B6ade02;
case 0x6ade03:c.instructions+=7;goto B6ade03;
case 0x6ade04:c.instructions+=6;goto B6ade04;
case 0x6ade06:c.instructions+=5;goto B6ade06;
case 0x6ade08:c.instructions+=4;goto B6ade08;
case 0x6ade0b:c.instructions+=3;goto B6ade0b;
case 0x6ade0e:c.instructions+=2;goto B6ade0e;
case 0x6ade11:c.instructions+=1;goto B6ade11;
case 0x6ade17:goto L6ade17;
case 0x6ade1a:c.instructions+=5;goto B6ade1a;
case 0x6ade20:c.instructions+=4;goto B6ade20;
case 0x6ade23:c.instructions+=3;goto B6ade23;
case 0x6ade29:c.instructions+=2;goto B6ade29;
case 0x6ade2f:c.instructions+=1;goto B6ade2f;
case 0x6ade35:goto L6ade35;
case 0x6ade37:c.instructions+=8;goto B6ade37;
case 0x6ade3a:c.instructions+=7;goto B6ade3a;
case 0x6ade40:c.instructions+=6;goto B6ade40;
case 0x6ade42:c.instructions+=5;goto B6ade42;
case 0x6ade44:c.instructions+=4;goto B6ade44;
case 0x6ade48:c.instructions+=3;goto B6ade48;
case 0x6ade4a:c.instructions+=2;goto B6ade4a;
case 0x6ade4d:c.instructions+=1;goto B6ade4d;
case 0x6ade53:goto L6ade53;
case 0x6ade59:c.instructions+=4;goto B6ade59;
case 0x6ade5c:c.instructions+=3;goto B6ade5c;
case 0x6ade5d:c.instructions+=2;goto B6ade5d;
case 0x6ade60:c.instructions+=1;goto B6ade60;
case 0x6ade65:goto L6ade65;
case 0x6ade69:c.instructions+=3;goto B6ade69;
case 0x6ade6b:c.instructions+=2;goto B6ade6b;
case 0x6ade6e:c.instructions+=1;goto B6ade6e;
case 0x6ade74:goto L6ade74;
case 0x6ade77:c.instructions+=11;goto B6ade77;
case 0x6ade7a:c.instructions+=10;goto B6ade7a;
case 0x6ade7d:c.instructions+=9;goto B6ade7d;
case 0x6ade80:c.instructions+=8;goto B6ade80;
case 0x6ade83:c.instructions+=7;goto B6ade83;
case 0x6ade86:c.instructions+=6;goto B6ade86;
case 0x6ade89:c.instructions+=5;goto B6ade89;
case 0x6ade8c:c.instructions+=4;goto B6ade8c;
case 0x6ade8f:c.instructions+=3;goto B6ade8f;
case 0x6ade92:c.instructions+=2;goto B6ade92;
case 0x6ade95:c.instructions+=1;goto B6ade95;
case 0x6ade9b:goto L6ade9b;
case 0x6ade9e:c.instructions+=1;goto B6ade9e;
case 0x6adea4:goto L6adea4;
case 0x6adea7:c.instructions+=3;goto B6adea7;
case 0x6adea9:c.instructions+=2;goto B6adea9;
case 0x6adeab:c.instructions+=1;goto B6adeab;
case 0x6adeae:goto L6adeae;
case 0x6adeb1:c.instructions+=1;goto B6adeb1;
case 0x6adeb7:goto L6adeb7;
case 0x6adebb:c.instructions+=1;goto B6adebb;
case 0x6adebd:goto L6adebd;
case 0x6adec3:c.instructions+=4;goto B6adec3;
case 0x6adec5:c.instructions+=3;goto B6adec5;
case 0x6adeca:c.instructions+=2;goto B6adeca;
case 0x6adecf:c.instructions+=1;goto B6adecf;
case 0x6aded5:goto L6aded5;
case 0x6aded8:c.instructions+=1;goto B6aded8;
case 0x6adede:goto L6adede;
case 0x6adee2:c.instructions+=2;goto B6adee2;
case 0x6adee6:c.instructions+=1;goto B6adee6;
case 0x6adee8:goto L6adee8;
case 0x6adeee:c.instructions+=2;goto B6adeee;
case 0x6adef1:c.instructions+=1;goto B6adef1;
case 0x6adef4:goto L6adef4;
case 0x6adef6:c.instructions+=2;goto B6adef6;
case 0x6adef9:c.instructions+=1;goto B6adef9;
case 0x6adefb:goto L6adefb;
case 0x6adefe:c.instructions+=2;goto B6adefe;
case 0x6adf01:c.instructions+=1;goto B6adf01;
case 0x6adf03:goto L6adf03;
case 0x6adf04:c.instructions+=1;goto B6adf04;
case 0x6adf07:goto L6adf07;
case 0x6adf0a:c.instructions+=2;goto B6adf0a;
case 0x6adf0b:c.instructions+=1;goto B6adf0b;
case 0x6adf0d:goto L6adf0d;
case 0x6adf0e:c.instructions+=8;goto B6adf0e;
case 0x6adf10:c.instructions+=7;goto B6adf10;
case 0x6adf11:c.instructions+=6;goto B6adf11;
case 0x6adf14:c.instructions+=5;goto B6adf14;
case 0x6adf16:c.instructions+=4;goto B6adf16;
case 0x6adf19:c.instructions+=3;goto B6adf19;
case 0x6adf1b:c.instructions+=2;goto B6adf1b;
case 0x6adf21:c.instructions+=1;goto B6adf21;
case 0x6adf26:goto L6adf26;
case 0x6adf28:c.instructions+=2;goto B6adf28;
case 0x6adf2b:c.instructions+=1;goto B6adf2b;
case 0x6adf31:goto L6adf31;
case 0x6adf34:c.instructions+=5;goto B6adf34;
case 0x6adf37:c.instructions+=4;goto B6adf37;
case 0x6adf3a:c.instructions+=3;goto B6adf3a;
case 0x6adf3d:c.instructions+=2;goto B6adf3d;
case 0x6adf40:c.instructions+=1;goto B6adf40;
case 0x6adf45:goto L6adf45;
case 0x6adf48:c.instructions+=7;goto B6adf48;
case 0x6adf4b:c.instructions+=6;goto B6adf4b;
case 0x6adf4f:c.instructions+=5;goto B6adf4f;
case 0x6adf52:c.instructions+=4;goto B6adf52;
case 0x6adf55:c.instructions+=3;goto B6adf55;
case 0x6adf58:c.instructions+=2;goto B6adf58;
case 0x6adf5e:c.instructions+=1;goto B6adf5e;
case 0x6adf61:goto L6adf61;
case 0x6adf64:c.instructions+=5;goto B6adf64;
case 0x6adf67:c.instructions+=4;goto B6adf67;
case 0x6adf6a:c.instructions+=3;goto B6adf6a;
case 0x6adf6d:c.instructions+=2;goto B6adf6d;
case 0x6adf70:c.instructions+=1;goto B6adf70;
case 0x6adf76:goto L6adf76;
case 0x6adf79:goto L6adf79;
case 0x6adf7c:c.instructions+=3;goto B6adf7c;
case 0x6adf7f:c.instructions+=2;goto B6adf7f;
case 0x6adf82:c.instructions+=1;goto B6adf82;
case 0x6adf88:goto L6adf88;
case 0x6adf89:c.instructions+=3;goto B6adf89;
case 0x6adf8c:c.instructions+=2;goto B6adf8c;
case 0x6adf8f:c.instructions+=1;goto B6adf8f;
case 0x6adf95:goto L6adf95;
case 0x6adf98:c.instructions+=1;goto B6adf98;
case 0x6adf9e:goto L6adf9e;
case 0x6adfa0:c.instructions+=4;goto B6adfa0;
case 0x6adfa2:c.instructions+=3;goto B6adfa2;
case 0x6adfa7:c.instructions+=2;goto B6adfa7;
case 0x6adfa9:c.instructions+=1;goto B6adfa9;
case 0x6adfae:goto L6adfae;
case 0x6adfb1:c.instructions+=1;goto B6adfb1;
case 0x6adfb7:goto L6adfb7;
case 0x6adfba:c.instructions+=4;goto B6adfba;
case 0x6adfbd:c.instructions+=3;goto B6adfbd;
case 0x6adfc0:c.instructions+=2;goto B6adfc0;
case 0x6adfc2:c.instructions+=1;goto B6adfc2;
case 0x6adfc7:goto L6adfc7;
case 0x6adfc9:c.instructions+=14;goto B6adfc9;
case 0x6adfcc:c.instructions+=13;goto B6adfcc;
case 0x6adfcf:c.instructions+=12;goto B6adfcf;
case 0x6adfd0:c.instructions+=11;goto B6adfd0;
case 0x6adfd1:c.instructions+=10;goto B6adfd1;
case 0x6adfd3:c.instructions+=9;goto B6adfd3;
case 0x6adfd6:c.instructions+=8;goto B6adfd6;
case 0x6adfd9:c.instructions+=7;goto B6adfd9;
case 0x6adfdb:c.instructions+=6;goto B6adfdb;
case 0x6adfdc:c.instructions+=5;goto B6adfdc;
case 0x6adfde:c.instructions+=4;goto B6adfde;
case 0x6adfdf:c.instructions+=3;goto B6adfdf;
case 0x6adfe2:c.instructions+=2;goto B6adfe2;
case 0x6adfe4:c.instructions+=1;goto B6adfe4;
case 0x6adfe9:goto L6adfe9;
case 0x6adfef:c.instructions+=9;goto B6adfef;
case 0x6adff2:c.instructions+=8;goto B6adff2;
case 0x6adff3:c.instructions+=7;goto B6adff3;
case 0x6adff4:c.instructions+=6;goto B6adff4;
case 0x6adff7:c.instructions+=5;goto B6adff7;
case 0x6adff8:c.instructions+=4;goto B6adff8;
case 0x6adffb:c.instructions+=3;goto B6adffb;
case 0x6adffc:c.instructions+=2;goto B6adffc;
case 0x6adfff:c.instructions+=1;goto B6adfff;
default:missing_instruction(c.pc);}
B6ad002:L6ad002:{c.instructions+=4;NFSU2_TR(0x6ad002);
u8 U[4];
w4(U+0,u32(0x6ull));
s4(u32(r4(R+0)),r4(U+0));
}
B6ad008:{NFSU2_TR(0x6ad008);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ad00b:{NFSU2_TR(0x6ad00b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6ad00d:{NFSU2_TR(0x6ad00d);
{goto L6ad081;}
}
B6ad00f:L6ad00f:{c.instructions+=4;NFSU2_TR(0x6ad00f);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6ad011:{NFSU2_TR(0x6ad011);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6ad013:{NFSU2_TR(0x6ad013);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xbull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6ad016:{NFSU2_TR(0x6ad016);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ad028;}}
}
B6ad018:L6ad018:{c.instructions+=2;NFSU2_TR(0x6ad018);
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
B6ad01b:{NFSU2_TR(0x6ad01b);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6ad085;}}
}
B6ad01d:L6ad01d:{c.instructions+=3;NFSU2_TR(0x6ad01d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ad020:{NFSU2_TR(0x6ad020);
u8 U[4];
w4(U+0,u32(0x8ull));
s4(u32(r4(R+0)),r4(U+0));
}
B6ad026:{NFSU2_TR(0x6ad026);
{goto L6ad078;}
}
B6ad028:L6ad028:{c.instructions+=2;NFSU2_TR(0x6ad028);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xdull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6ad02b:{NFSU2_TR(0x6ad02b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ad03f;}}
}
B6ad02d:L6ad02d:{c.instructions+=2;NFSU2_TR(0x6ad02d);
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
B6ad02f:{NFSU2_TR(0x6ad02f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ad085;}}
}
B6ad031:L6ad031:{c.instructions+=5;NFSU2_TR(0x6ad031);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ad034:{NFSU2_TR(0x6ad034);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6ad036:{NFSU2_TR(0x6ad036);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6ad037:{NFSU2_TR(0x6ad037);
u8 U[4];
w4(U+0,u32(0x9ull));
s4(u32(r4(R+0)),r4(U+0));
}
B6ad03d:{NFSU2_TR(0x6ad03d);
{goto L6ad078;}
}
B6ad03f:L6ad03f:{c.instructions+=4;NFSU2_TR(0x6ad03f);
u8 U[4];
w4(U+0,u32(0x11ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ad041:{NFSU2_TR(0x6ad041);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B6ad042:{NFSU2_TR(0x6ad042);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6ad044:{NFSU2_TR(0x6ad044);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ad057;}}
}
B6ad046:L6ad046:{c.instructions+=2;NFSU2_TR(0x6ad046);
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
B6ad048:{NFSU2_TR(0x6ad048);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ad085;}}
}
B6ad04a:L6ad04a:{c.instructions+=4;NFSU2_TR(0x6ad04a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ad04d:{NFSU2_TR(0x6ad04d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6ad04f:{NFSU2_TR(0x6ad04f);
u8 U[4];
w4(U+0,u32(0x1ull));
s4(u32(r4(R+4)),r4(U+0));
}
B6ad055:{NFSU2_TR(0x6ad055);
{goto L6ad078;}
}
B6ad057:L6ad057:{c.instructions+=2;NFSU2_TR(0x6ad057);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x12ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6ad05a:{NFSU2_TR(0x6ad05a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ad069;}}
}
B6ad05c:L6ad05c:{c.instructions+=2;NFSU2_TR(0x6ad05c);
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
B6ad05e:{NFSU2_TR(0x6ad05e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ad085;}}
}
B6ad060:L6ad060:{c.instructions+=4;NFSU2_TR(0x6ad060);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ad063:{NFSU2_TR(0x6ad063);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6ad065:{NFSU2_TR(0x6ad065);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6ad067:{NFSU2_TR(0x6ad067);
{goto L6ad078;}
}
B6ad069:L6ad069:{c.instructions+=2;NFSU2_TR(0x6ad069);
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
B6ad06f:{NFSU2_TR(0x6ad06f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ad085;}}
}
B6ad071:L6ad071:{c.instructions+=3;NFSU2_TR(0x6ad071);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ad074:{NFSU2_TR(0x6ad074);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6ad076:{NFSU2_TR(0x6ad076);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6ad078:L6ad078:{c.instructions+=3;NFSU2_TR(0x6ad078);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ad07b:{NFSU2_TR(0x6ad07b);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6ad07d:{NFSU2_TR(0x6ad07d);
if(r1(R+518)){{goto L6ad081;}}
}
B6ad07f:L6ad07f:{c.instructions+=1;NFSU2_TR(0x6ad07f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6ad081:L6ad081:{c.instructions+=2;NFSU2_TR(0x6ad081);
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
B6ad083:{NFSU2_TR(0x6ad083);
{goto L6ad08a;}
}
B6ad085:L6ad085:{c.instructions+=1;NFSU2_TR(0x6ad085);
w4(R+0,u32(0x80004005ull));
}
B6ad08a:L6ad08a:{c.instructions+=5;NFSU2_TR(0x6ad08a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6ad08b:{NFSU2_TR(0x6ad08b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6ad08c:{NFSU2_TR(0x6ad08c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6ad08d:{NFSU2_TR(0x6ad08d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6ad08e:{NFSU2_TR(0x6ad08e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6ad091:L6ad091:{c.instructions+=10;NFSU2_TR(0x6ad091);
__builtin_memmove((R+28),(R+28),4);
}
B6ad093:{NFSU2_TR(0x6ad093);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ad094:{NFSU2_TR(0x6ad094);
__builtin_memmove((R+20),(R+16),4);
}
B6ad096:{NFSU2_TR(0x6ad096);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ad097:{NFSU2_TR(0x6ad097);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ad098:{NFSU2_TR(0x6ad098);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6ad09b:{NFSU2_TR(0x6ad09b);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6ad09e:{NFSU2_TR(0x6ad09e);
__builtin_memmove((R+24),(R+4),4);
}
B6ad0a0:{NFSU2_TR(0x6ad0a0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6ad0a2:{NFSU2_TR(0x6ad0a2);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ad0a5ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6ad0a5:L6ad0a5:{c.instructions+=2;NFSU2_TR(0x6ad0a5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xffffull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ad0aa:{NFSU2_TR(0x6ad0aa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ad0be;}}
}
B6ad0ac:L6ad0ac:{c.instructions+=6;NFSU2_TR(0x6ad0ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ad0af:{NFSU2_TR(0x6ad0af);
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
B6ad0b2:{NFSU2_TR(0x6ad0b2);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6ad0b5:{NFSU2_TR(0x6ad0b5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6ad0b7:{NFSU2_TR(0x6ad0b7);
__builtin_memmove((R+4),(R+24),4);
}
B6ad0b9:{NFSU2_TR(0x6ad0b9);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ad0bcull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6ad0bc:L6ad0bc:{c.instructions+=1;NFSU2_TR(0x6ad0bc);
{goto L6ad0f0;}
}
B6ad0be:L6ad0be:{c.instructions+=4;NFSU2_TR(0x6ad0be);
u8 U[4];
w4(U+0,u32(0x11ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ad0c0:{NFSU2_TR(0x6ad0c0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6ad0c1:{NFSU2_TR(0x6ad0c1);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6ad0c3:{NFSU2_TR(0x6ad0c3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ad0d5;}}
}
B6ad0c5:L6ad0c5:{c.instructions+=5;NFSU2_TR(0x6ad0c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ad0c8:{NFSU2_TR(0x6ad0c8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6ad0ca:{NFSU2_TR(0x6ad0ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ad0cd:{NFSU2_TR(0x6ad0cd);
u8 U[4];
w4(U+0,u32(0x1ull));
s4(u32(r4(R+0)),r4(U+0));
}
B6ad0d3:{NFSU2_TR(0x6ad0d3);
{goto L6ad0f5;}
}
B6ad0d5:L6ad0d5:{c.instructions+=3;NFSU2_TR(0x6ad0d5);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x12ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6ad0d8:{NFSU2_TR(0x6ad0d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ad0db:{NFSU2_TR(0x6ad0db);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ad0e7;}}
}
B6ad0dd:L6ad0dd:{c.instructions+=4;NFSU2_TR(0x6ad0dd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6ad0df:{NFSU2_TR(0x6ad0df);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ad0e2:{NFSU2_TR(0x6ad0e2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0x0ull))));
s4(u32(r4(R+0)),r4(U+0));
}
B6ad0e5:{NFSU2_TR(0x6ad0e5);
{goto L6ad0f5;}
}
B6ad0e7:L6ad0e7:{c.instructions+=2;NFSU2_TR(0x6ad0e7);
u8 U[4];
w4(U+0,u32(0x1ull));
s4(u32(r4(R+0)),r4(U+0));
}
B6ad0ed:{NFSU2_TR(0x6ad0ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ad0f0:L6ad0f0:{c.instructions+=2;NFSU2_TR(0x6ad0f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ad0f3:{NFSU2_TR(0x6ad0f3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6ad0f5:L6ad0f5:{c.instructions+=5;NFSU2_TR(0x6ad0f5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6ad0f6:{NFSU2_TR(0x6ad0f6);
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
B6ad0f8:{NFSU2_TR(0x6ad0f8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6ad0f9:{NFSU2_TR(0x6ad0f9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6ad0fa:{NFSU2_TR(0x6ad0fa);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6ad0fd:L6ad0fd:{c.instructions+=5;NFSU2_TR(0x6ad0fd);
__builtin_memmove((R+28),(R+28),4);
}
B6ad0ff:{NFSU2_TR(0x6ad0ff);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ad100:{NFSU2_TR(0x6ad100);
__builtin_memmove((R+20),(R+16),4);
}
B6ad102:{NFSU2_TR(0x6ad102);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6ad103:{NFSU2_TR(0x6ad103);
TAIL_STATIC(0x6d0d29u,6d0);
}
B6ad108:L6ad108:{c.instructions+=11;NFSU2_TR(0x6ad108);
__builtin_memmove((R+28),(R+28),4);
}
B6ad10a:{NFSU2_TR(0x6ad10a);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ad10b:{NFSU2_TR(0x6ad10b);
__builtin_memmove((R+20),(R+16),4);
}
B6ad10d:{NFSU2_TR(0x6ad10d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B6ad110:{NFSU2_TR(0x6ad110);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6ad114:{NFSU2_TR(0x6ad114);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6ad118:{NFSU2_TR(0x6ad118);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ad119:{NFSU2_TR(0x6ad119);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6ad11b:{NFSU2_TR(0x6ad11b);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ad11e:{NFSU2_TR(0x6ad11e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ad121:{NFSU2_TR(0x6ad121);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6ad210;}}
}
B6ad127:L6ad127:{c.instructions+=2;NFSU2_TR(0x6ad127);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ad128:{NFSU2_TR(0x6ad128);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ad129:L6ad129:{c.instructions+=9;NFSU2_TR(0x6ad129);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ad12c:{NFSU2_TR(0x6ad12c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6ad12f:{NFSU2_TR(0x6ad12f);
__builtin_memmove((R+0),(R+28),4);
}
B6ad131:{NFSU2_TR(0x6ad131);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6ad134:{NFSU2_TR(0x6ad134);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6ad137:{NFSU2_TR(0x6ad137);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6ad13a:{NFSU2_TR(0x6ad13a);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B6ad13d:{NFSU2_TR(0x6ad13d);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x10ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6ad141:{NFSU2_TR(0x6ad141);
if(r1(R+518)){{goto L6ad1fe;}}
}
B6ad147:L6ad147:{c.instructions+=3;NFSU2_TR(0x6ad147);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ad14a:{NFSU2_TR(0x6ad14a);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x11ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6ad14d:{NFSU2_TR(0x6ad14d);
if(r1(R+518)){{goto L6ad158;}}
}
B6ad14f:L6ad14f:{c.instructions+=2;NFSU2_TR(0x6ad14f);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x12ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6ad152:{NFSU2_TR(0x6ad152);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ad1fe;}}
}
B6ad158:L6ad158:{c.instructions+=7;NFSU2_TR(0x6ad158);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ad15b:{NFSU2_TR(0x6ad15b);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6ad15e:{NFSU2_TR(0x6ad15e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0x40000000ull))));
s4(u32(r4(R+8)),r4(U+0));
}
B6ad164:{NFSU2_TR(0x6ad164);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ad167:{NFSU2_TR(0x6ad167);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6ad16a:{NFSU2_TR(0x6ad16a);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6ad16d:{NFSU2_TR(0x6ad16d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ad1fe;}}
}
B6ad173:L6ad173:{c.instructions+=5;NFSU2_TR(0x6ad173);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ad176:{NFSU2_TR(0x6ad176);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6ad179:{NFSU2_TR(0x6ad179);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6ad17c:{NFSU2_TR(0x6ad17c);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x11ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6ad17f:{NFSU2_TR(0x6ad17f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ad18a;}}
}
B6ad181:L6ad181:{c.instructions+=2;NFSU2_TR(0x6ad181);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ad185:{NFSU2_TR(0x6ad185);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ad1fe;}}
}
B6ad187:L6ad187:{c.instructions+=1;NFSU2_TR(0x6ad187);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ad18a:L6ad18a:{c.instructions+=2;NFSU2_TR(0x6ad18a);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x12ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6ad18d:{NFSU2_TR(0x6ad18d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ad1a8;}}
}
B6ad18f:L6ad18f:{c.instructions+=3;NFSU2_TR(0x6ad18f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6ad192:{NFSU2_TR(0x6ad192);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6ad195:{NFSU2_TR(0x6ad195);
if(r1(R+518)){{goto L6ad1a5;}}
}
B6ad197:L6ad197:{c.instructions+=5;NFSU2_TR(0x6ad197);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ad19a:{NFSU2_TR(0x6ad19a);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B6ad19d:{NFSU2_TR(0x6ad19d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6ad1a0:{NFSU2_TR(0x6ad1a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ad1a3:{NFSU2_TR(0x6ad1a3);
{goto L6ad1fb;}
}
B6ad1a5:L6ad1a5:{c.instructions+=1;NFSU2_TR(0x6ad1a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ad1a8:L6ad1a8:{c.instructions+=6;NFSU2_TR(0x6ad1a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ad1ab:{NFSU2_TR(0x6ad1ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6ad1af:{NFSU2_TR(0x6ad1af);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6ad1b1:{NFSU2_TR(0x6ad1b1);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ad1b4:{NFSU2_TR(0x6ad1b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ad1b7:{NFSU2_TR(0x6ad1b7);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6ad1fe;}}
}
B6ad1b9:L6ad1b9:{c.instructions+=7;NFSU2_TR(0x6ad1b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ad1bc:{NFSU2_TR(0x6ad1bc);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B6ad1bf:{NFSU2_TR(0x6ad1bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ad1c2:{NFSU2_TR(0x6ad1c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6ad1c5:{NFSU2_TR(0x6ad1c5);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6ad1c8:{NFSU2_TR(0x6ad1c8);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x10ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6ad1cc:{NFSU2_TR(0x6ad1cc);
if(r1(R+518)){{goto L6ad1e7;}}
}
B6ad1ce:L6ad1ce:{c.instructions+=3;NFSU2_TR(0x6ad1ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6ad1d1:{NFSU2_TR(0x6ad1d1);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+24))<(r4(U+8))));
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ad1d4:{NFSU2_TR(0x6ad1d4);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6ad1e7;}}
}
B6ad1d6:L6ad1d6:{c.instructions+=2;NFSU2_TR(0x6ad1d6);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+24)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ad1d9:{NFSU2_TR(0x6ad1d9);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L6ad1de;}}
}
B6ad1db:L6ad1db:{c.instructions+=1;NFSU2_TR(0x6ad1db);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ad1de:L6ad1de:{c.instructions+=3;NFSU2_TR(0x6ad1de);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ad1e1:{NFSU2_TR(0x6ad1e1);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B6ad1e4:{NFSU2_TR(0x6ad1e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6ad1e7:L6ad1e7:{c.instructions+=3;NFSU2_TR(0x6ad1e7);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6ad1e8:{NFSU2_TR(0x6ad1e8);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B6ad1eb:{NFSU2_TR(0x6ad1eb);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ad1b9u);}goto L6ad1b9;}}
}
B6ad1ed:L6ad1ed:{c.instructions+=3;NFSU2_TR(0x6ad1ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ad1f0:{NFSU2_TR(0x6ad1f0);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6ad1f3:{NFSU2_TR(0x6ad1f3);
if(r1(R+518)){{goto L6ad1fe;}}
}
B6ad1f5:L6ad1f5:{c.instructions+=2;NFSU2_TR(0x6ad1f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6ad1f8:{NFSU2_TR(0x6ad1f8);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6ad1fb:L6ad1fb:{c.instructions+=1;NFSU2_TR(0x6ad1fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ad1fe:L6ad1fe:{c.instructions+=5;NFSU2_TR(0x6ad1fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6ad201:{NFSU2_TR(0x6ad201);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6ad202:{NFSU2_TR(0x6ad202);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B6ad205:{NFSU2_TR(0x6ad205);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ad208:{NFSU2_TR(0x6ad208);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ad129u);}goto L6ad129;}}
}
B6ad20e:L6ad20e:{c.instructions+=2;NFSU2_TR(0x6ad20e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6ad20f:{NFSU2_TR(0x6ad20f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6ad210:L6ad210:{c.instructions+=4;NFSU2_TR(0x6ad210);
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
B6ad212:{NFSU2_TR(0x6ad212);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6ad213:{NFSU2_TR(0x6ad213);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6ad214:{NFSU2_TR(0x6ad214);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6ad215:L6ad215:{c.instructions+=12;NFSU2_TR(0x6ad215);
__builtin_memmove((R+28),(R+28),4);
}
B6ad217:{NFSU2_TR(0x6ad217);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ad218:{NFSU2_TR(0x6ad218);
__builtin_memmove((R+20),(R+16),4);
}
B6ad21a:{NFSU2_TR(0x6ad21a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ad21b:{NFSU2_TR(0x6ad21b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ad21c:{NFSU2_TR(0x6ad21c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ad21d:{NFSU2_TR(0x6ad21d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ad21e:{NFSU2_TR(0x6ad21e);
__builtin_memmove((R+24),(R+4),4);
}
B6ad220:{NFSU2_TR(0x6ad220);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6ad222:{NFSU2_TR(0x6ad222);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ad225:{NFSU2_TR(0x6ad225);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ad226:{NFSU2_TR(0x6ad226);
if(r1(R+518)){{goto L6ad289;}}
}
B6ad228:L6ad228:{c.instructions+=4;NFSU2_TR(0x6ad228);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6ad22a:{NFSU2_TR(0x6ad22a);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ad22d:{NFSU2_TR(0x6ad22d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ad233:{NFSU2_TR(0x6ad233);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6ad289;}}
}
B6ad235:L6ad235:{c.instructions+=8;NFSU2_TR(0x6ad235);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ad23b:{NFSU2_TR(0x6ad23b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ad23e:{NFSU2_TR(0x6ad23e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6ad241:{NFSU2_TR(0x6ad241);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ad247:{NFSU2_TR(0x6ad247);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6ad249:{NFSU2_TR(0x6ad249);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfff00000ull))));
}
B6ad24e:{NFSU2_TR(0x6ad24e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x20800000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ad253:{NFSU2_TR(0x6ad253);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ad26d;}}
}
B6ad255:L6ad255:{c.instructions+=2;NFSU2_TR(0x6ad255);
__builtin_memmove((R+4),(R+24),4);
}
B6ad257:{NFSU2_TR(0x6ad257);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ad25cull));
TAIL_STATIC(0x6c2e81u,6c2);
}
B6ad25c:L6ad25c:{c.instructions+=2;NFSU2_TR(0x6ad25c);
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
B6ad25e:{NFSU2_TR(0x6ad25e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6ad3da;}}
}
B6ad264:L6ad264:{c.instructions+=4;NFSU2_TR(0x6ad264);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6ad266:{NFSU2_TR(0x6ad266);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6ad268:{NFSU2_TR(0x6ad268);
__builtin_memmove((R+4),(R+518),1);
}
B6ad26b:{NFSU2_TR(0x6ad26b);
w4(R+28,u32(u32(r4(R+28))|u32(r4(R+4))));
}
B6ad26d:L6ad26d:{c.instructions+=4;NFSU2_TR(0x6ad26d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6ad273:{NFSU2_TR(0x6ad273);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ad279:{NFSU2_TR(0x6ad279);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6ad27c:{NFSU2_TR(0x6ad27c);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ad235u);}goto L6ad235;}}
}
B6ad27e:L6ad27e:{c.instructions+=2;NFSU2_TR(0x6ad27e);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6ad280:{NFSU2_TR(0x6ad280);
if(r1(R+518)){{goto L6ad289;}}
}
B6ad282:L6ad282:{c.instructions+=2;NFSU2_TR(0x6ad282);
__builtin_memmove((R+4),(R+24),4);
}
B6ad284:{NFSU2_TR(0x6ad284);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ad289ull));
TAIL_STATIC(0x6c29d2u,6c2);
}
B6ad289:L6ad289:{c.instructions+=2;NFSU2_TR(0x6ad289);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ad28c:{NFSU2_TR(0x6ad28c);
if(r1(R+518)){{goto L6ad397;}}
}
B6ad292:L6ad292:{c.instructions+=1;NFSU2_TR(0x6ad292);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ad295:L6ad295:{c.instructions+=2;NFSU2_TR(0x6ad295);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x10ull))));
}
B6ad299:{NFSU2_TR(0x6ad299);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6ad311;}}
}
B6ad29b:L6ad29b:{c.instructions+=5;NFSU2_TR(0x6ad29b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6ad29e:{NFSU2_TR(0x6ad29e);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6ad2a0:{NFSU2_TR(0x6ad2a0);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ad2a2:{NFSU2_TR(0x6ad2a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6ad2a9:{NFSU2_TR(0x6ad2a9);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6ad2ef;}}
}
B6ad2ab:L6ad2ab:{c.instructions+=5;NFSU2_TR(0x6ad2ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ad2ae:{NFSU2_TR(0x6ad2ae);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6ad2b1:{NFSU2_TR(0x6ad2b1);
__builtin_memmove((R+4),(R+24),4);
}
B6ad2b3:{NFSU2_TR(0x6ad2b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ad2b9:{NFSU2_TR(0x6ad2b9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ad2beull));
TAIL_STATIC(0x6c3337u,6c3);
}
B6ad2be:L6ad2be:{c.instructions+=2;NFSU2_TR(0x6ad2be);
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
B6ad2c0:{NFSU2_TR(0x6ad2c0);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6ad3da;}}
}
B6ad2c6:L6ad2c6:{c.instructions+=1;NFSU2_TR(0x6ad2c6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ad2cc;}}
}
B6ad2c8:L6ad2c8:{c.instructions+=1;NFSU2_TR(0x6ad2c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6ad2cc:L6ad2cc:{c.instructions+=3;NFSU2_TR(0x6ad2cc);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6ad2d2:{NFSU2_TR(0x6ad2d2);
__builtin_memmove((R+4),(R+24),4);
}
B6ad2d4:{NFSU2_TR(0x6ad2d4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ad2d9ull));
TAIL_STATIC(0x699d92u,699);
}
B6ad2d9:L6ad2d9:{c.instructions+=2;NFSU2_TR(0x6ad2d9);
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
B6ad2db:{NFSU2_TR(0x6ad2db);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6ad3da;}}
}
B6ad2e1:L6ad2e1:{c.instructions+=5;NFSU2_TR(0x6ad2e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ad2e7:{NFSU2_TR(0x6ad2e7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0x0ull))));
s4(u32(r4(R+0)),r4(U+0));
}
B6ad2ea:{NFSU2_TR(0x6ad2ea);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6ad2eb:{NFSU2_TR(0x6ad2eb);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(R+28))<(r4(U+0))));
}
B6ad2ed:{NFSU2_TR(0x6ad2ed);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ad2abu);}goto L6ad2ab;}}
}
B6ad2ef:L6ad2ef:{c.instructions+=2;NFSU2_TR(0x6ad2ef);
__builtin_memmove((R+4),(R+24),4);
}
B6ad2f1:{NFSU2_TR(0x6ad2f1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ad2f6ull));
TAIL_STATIC(0x69a74eu,69a);
}
B6ad2f6:L6ad2f6:{c.instructions+=2;NFSU2_TR(0x6ad2f6);
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
B6ad2f8:{NFSU2_TR(0x6ad2f8);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6ad3da;}}
}
B6ad2fe:L6ad2fe:{c.instructions+=3;NFSU2_TR(0x6ad2fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6ad301:{NFSU2_TR(0x6ad301);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ad305:{NFSU2_TR(0x6ad305);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ad295u);}goto L6ad295;}}
}
B6ad307:L6ad307:{c.instructions+=2;NFSU2_TR(0x6ad307);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x10ull))));
}
B6ad30b:{NFSU2_TR(0x6ad30b);
if(r1(R+512)){{goto L6ad395;}}
}
B6ad311:L6ad311:{c.instructions+=5;NFSU2_TR(0x6ad311);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6ad314:{NFSU2_TR(0x6ad314);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6ad316:{NFSU2_TR(0x6ad316);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ad318:{NFSU2_TR(0x6ad318);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6ad31f:{NFSU2_TR(0x6ad31f);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6ad37d;}}
}
B6ad321:L6ad321:{c.instructions+=5;NFSU2_TR(0x6ad321);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ad324:{NFSU2_TR(0x6ad324);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6ad327:{NFSU2_TR(0x6ad327);
__builtin_memmove((R+4),(R+24),4);
}
B6ad329:{NFSU2_TR(0x6ad329);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ad32f:{NFSU2_TR(0x6ad32f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ad334ull));
TAIL_STATIC(0x6c3337u,6c3);
}
B6ad334:L6ad334:{c.instructions+=2;NFSU2_TR(0x6ad334);
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
B6ad336:{NFSU2_TR(0x6ad336);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6ad3da;}}
}
B6ad33c:L6ad33c:{c.instructions+=1;NFSU2_TR(0x6ad33c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ad35e;}}
}
B6ad33e:L6ad33e:{c.instructions+=6;NFSU2_TR(0x6ad33e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ad344:{NFSU2_TR(0x6ad344);
u8 U[4];
w4(U+0,u32(0x7bb17cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ad349:{NFSU2_TR(0x6ad349);
u8 U[4];
w4(U+0,u32(0x11c9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ad34e:{NFSU2_TR(0x6ad34e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6ad351:{NFSU2_TR(0x6ad351);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ad352:{NFSU2_TR(0x6ad352);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ad357ull));
TAIL_STATIC(0x69e936u,69e);
}
B6ad357:L6ad357:{c.instructions+=2;NFSU2_TR(0x6ad357);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B6ad35a:{NFSU2_TR(0x6ad35a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6ad35e:L6ad35e:{c.instructions+=3;NFSU2_TR(0x6ad35e);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6ad364:{NFSU2_TR(0x6ad364);
__builtin_memmove((R+4),(R+24),4);
}
B6ad366:{NFSU2_TR(0x6ad366);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ad36bull));
TAIL_STATIC(0x699d92u,699);
}
B6ad36b:L6ad36b:{c.instructions+=2;NFSU2_TR(0x6ad36b);
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
B6ad36d:{NFSU2_TR(0x6ad36d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6ad3da;}}
}
B6ad36f:L6ad36f:{c.instructions+=5;NFSU2_TR(0x6ad36f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ad375:{NFSU2_TR(0x6ad375);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0x0ull))));
s4(u32(r4(R+0)),r4(U+0));
}
B6ad378:{NFSU2_TR(0x6ad378);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6ad379:{NFSU2_TR(0x6ad379);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(R+28))<(r4(U+0))));
}
B6ad37b:{NFSU2_TR(0x6ad37b);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ad321u);}goto L6ad321;}}
}
B6ad37d:L6ad37d:{c.instructions+=2;NFSU2_TR(0x6ad37d);
__builtin_memmove((R+4),(R+24),4);
}
B6ad37f:{NFSU2_TR(0x6ad37f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ad384ull));
TAIL_STATIC(0x69a74eu,69a);
}
B6ad384:L6ad384:{c.instructions+=2;NFSU2_TR(0x6ad384);
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
B6ad386:{NFSU2_TR(0x6ad386);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6ad3da;}}
}
B6ad388:L6ad388:{c.instructions+=2;NFSU2_TR(0x6ad388);
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
B6ad38c:{NFSU2_TR(0x6ad38c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ad395;}}
}
B6ad38e:L6ad38e:{c.instructions+=2;NFSU2_TR(0x6ad38e);
w4(R+0,u32(0x80004005ull));
}
B6ad393:{NFSU2_TR(0x6ad393);
{goto L6ad3da;}
}
B6ad395:L6ad395:{c.instructions+=1;NFSU2_TR(0x6ad395);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6ad397:L6ad397:{c.instructions+=2;NFSU2_TR(0x6ad397);
u8 U[9];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+8,u8(u32(r1(U+4))&u32(u8(0x40ull))));
w1(R+519,u8(s8(r1(U+8))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+8))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+8))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B6ad39b:{NFSU2_TR(0x6ad39b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ad3ab;}}
}
B6ad39d:L6ad39d:{c.instructions+=3;NFSU2_TR(0x6ad39d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6ad39f:{NFSU2_TR(0x6ad39f);
__builtin_memmove((R+4),(R+24),4);
}
B6ad3a1:{NFSU2_TR(0x6ad3a1);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ad3a7ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6ad3a7:L6ad3a7:{c.instructions+=2;NFSU2_TR(0x6ad3a7);
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
B6ad3a9:{NFSU2_TR(0x6ad3a9);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6ad3da;}}
}
B6ad3ab:L6ad3ab:{c.instructions+=2;NFSU2_TR(0x6ad3ab);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ad3ae:{NFSU2_TR(0x6ad3ae);
if(r1(R+518)){{goto L6ad3d8;}}
}
B6ad3b0:L6ad3b0:{c.instructions+=2;NFSU2_TR(0x6ad3b0);
__builtin_memmove((R+4),(R+24),4);
}
B6ad3b2:{NFSU2_TR(0x6ad3b2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ad3b7ull));
TAIL_STATIC(0x6cf84fu,6cf);
}
B6ad3b7:L6ad3b7:{c.instructions+=2;NFSU2_TR(0x6ad3b7);
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
B6ad3b9:{NFSU2_TR(0x6ad3b9);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6ad3da;}}
}
B6ad3bb:L6ad3bb:{c.instructions+=2;NFSU2_TR(0x6ad3bb);
__builtin_memmove((R+4),(R+24),4);
}
B6ad3bd:{NFSU2_TR(0x6ad3bd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ad3c2ull));
TAIL_STATIC(0x6c29d2u,6c2);
}
B6ad3c2:L6ad3c2:{c.instructions+=2;NFSU2_TR(0x6ad3c2);
__builtin_memmove((R+4),(R+24),4);
}
B6ad3c4:{NFSU2_TR(0x6ad3c4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ad3c9ull));
TAIL_STATIC(0x6a0d84u,6a0);
}
B6ad3c9:L6ad3c9:{c.instructions+=2;NFSU2_TR(0x6ad3c9);
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
B6ad3cb:{NFSU2_TR(0x6ad3cb);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6ad3da;}}
}
B6ad3cd:L6ad3cd:{c.instructions+=2;NFSU2_TR(0x6ad3cd);
__builtin_memmove((R+4),(R+24),4);
}
B6ad3cf:{NFSU2_TR(0x6ad3cf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ad3d4ull));
TAIL_STATIC(0x6cae91u,6ca);
}
B6ad3d4:L6ad3d4:{c.instructions+=2;NFSU2_TR(0x6ad3d4);
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
B6ad3d6:{NFSU2_TR(0x6ad3d6);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6ad3da;}}
}
B6ad3d8:L6ad3d8:{c.instructions+=1;NFSU2_TR(0x6ad3d8);
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
B6ad3da:L6ad3da:{c.instructions+=5;NFSU2_TR(0x6ad3da);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6ad3db:{NFSU2_TR(0x6ad3db);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6ad3dc:{NFSU2_TR(0x6ad3dc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6ad3dd:{NFSU2_TR(0x6ad3dd);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6ad3de:{NFSU2_TR(0x6ad3de);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6ad3df:L6ad3df:{c.instructions+=4;NFSU2_TR(0x6ad3df);
__builtin_memmove((R+28),(R+28),4);
}
B6ad3e1:{NFSU2_TR(0x6ad3e1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ad3e2:{NFSU2_TR(0x6ad3e2);
__builtin_memmove((R+24),(R+4),4);
}
B6ad3e4:{NFSU2_TR(0x6ad3e4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ad3e9ull));
TAIL_STATIC(0x6cd4d1u,6cd);
}
B6ad3e9:L6ad3e9:{c.instructions+=2;NFSU2_TR(0x6ad3e9);
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
B6ad3eb:{NFSU2_TR(0x6ad3eb);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6ad417;}}
}
B6ad3ed:L6ad3ed:{c.instructions+=2;NFSU2_TR(0x6ad3ed);
__builtin_memmove((R+4),(R+24),4);
}
B6ad3ef:{NFSU2_TR(0x6ad3ef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ad3f4ull));
TAIL_STATIC(0x69f745u,69f);
}
B6ad3f4:L6ad3f4:{c.instructions+=2;NFSU2_TR(0x6ad3f4);
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
B6ad3f6:{NFSU2_TR(0x6ad3f6);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6ad417;}}
}
B6ad3f8:L6ad3f8:{c.instructions+=2;NFSU2_TR(0x6ad3f8);
__builtin_memmove((R+4),(R+24),4);
}
B6ad3fa:{NFSU2_TR(0x6ad3fa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ad3ffull));
TAIL_STATIC(0x6a0d84u,6a0);
}
B6ad3ff:L6ad3ff:{c.instructions+=2;NFSU2_TR(0x6ad3ff);
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
B6ad401:{NFSU2_TR(0x6ad401);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6ad417;}}
}
B6ad403:L6ad403:{c.instructions+=2;NFSU2_TR(0x6ad403);
__builtin_memmove((R+4),(R+24),4);
}
B6ad405:{NFSU2_TR(0x6ad405);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ad40aull));
TAIL_STATIC(0x69a74eu,69a);
}
B6ad40a:L6ad40a:{c.instructions+=2;NFSU2_TR(0x6ad40a);
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
B6ad40c:{NFSU2_TR(0x6ad40c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6ad417;}}
}
B6ad40e:L6ad40e:{c.instructions+=2;NFSU2_TR(0x6ad40e);
__builtin_memmove((R+4),(R+24),4);
}
B6ad410:{NFSU2_TR(0x6ad410);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ad415ull));
TAIL_STATIC(0x6c29d2u,6c2);
}
B6ad415:L6ad415:{c.instructions+=1;NFSU2_TR(0x6ad415);
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
B6ad417:L6ad417:{c.instructions+=2;NFSU2_TR(0x6ad417);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6ad418:{NFSU2_TR(0x6ad418);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6ad419:L6ad419:{c.instructions+=10;NFSU2_TR(0x6ad419);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x118ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ad41f:{NFSU2_TR(0x6ad41f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ad425:{NFSU2_TR(0x6ad425);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x110ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ad42b:{NFSU2_TR(0x6ad42b);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+8))));
}
B6ad42d:{NFSU2_TR(0x6ad42d);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B6ad42e:{NFSU2_TR(0x6ad42e);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6ad431:{NFSU2_TR(0x6ad431);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6ad434:{NFSU2_TR(0x6ad434);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))|u32(r4(R+4))));
s4(u32(r4(R+0)),r4(U+0));
}
B6ad436:{NFSU2_TR(0x6ad436);
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
B6ad438:{NFSU2_TR(0x6ad438);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6ad439:L6ad439:{c.instructions+=7;NFSU2_TR(0x6ad439);
__builtin_memmove((R+28),(R+28),4);
}
B6ad43b:{NFSU2_TR(0x6ad43b);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ad43c:{NFSU2_TR(0x6ad43c);
__builtin_memmove((R+20),(R+16),4);
}
B6ad43e:{NFSU2_TR(0x6ad43e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ad43f:{NFSU2_TR(0x6ad43f);
__builtin_memmove((R+24),(R+4),4);
}
B6ad441:{NFSU2_TR(0x6ad441);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x158ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ad448:{NFSU2_TR(0x6ad448);
if(r1(R+518)){{goto L6ad451;}}
}
B6ad44a:L6ad44a:{c.instructions+=2;NFSU2_TR(0x6ad44a);
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
B6ad44c:{NFSU2_TR(0x6ad44c);
{goto L6ad4eb;}
}
B6ad451:L6ad451:{c.instructions+=3;NFSU2_TR(0x6ad451);
u8 U[4];
w4(U+0,u32(0x200001full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ad456:{NFSU2_TR(0x6ad456);
__builtin_memmove((R+4),(R+24),4);
}
B6ad458:{NFSU2_TR(0x6ad458);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ad45dull));
TAIL_STATIC(0x6d18eau,6d1);
}
B6ad45d:L6ad45d:{c.instructions+=2;NFSU2_TR(0x6ad45d);
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
B6ad45f:{NFSU2_TR(0x6ad45f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6ad4eb;}}
}
B6ad465:L6ad465:{c.instructions+=5;NFSU2_TR(0x6ad465);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ad466:{NFSU2_TR(0x6ad466);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6ad469:{NFSU2_TR(0x6ad469);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ad46c:{NFSU2_TR(0x6ad46c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x200000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ad471:{NFSU2_TR(0x6ad471);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ad4b4;}}
}
B6ad473:L6ad473:{c.instructions+=1;NFSU2_TR(0x6ad473);
u8 U[4];
w4(U+0,u32(0x90000000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ad478:L6ad478:{c.instructions+=2;NFSU2_TR(0x6ad478);
__builtin_memmove((R+4),(R+24),4);
}
B6ad47a:{NFSU2_TR(0x6ad47a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ad47full));
TAIL_STATIC(0x6cfb73u,6cf);
}
B6ad47f:L6ad47f:{c.instructions+=2;NFSU2_TR(0x6ad47f);
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
B6ad481:{NFSU2_TR(0x6ad481);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6ad4ea;}}
}
B6ad483:L6ad483:{c.instructions+=9;NFSU2_TR(0x6ad483);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ad486:{NFSU2_TR(0x6ad486);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6ad488:{NFSU2_TR(0x6ad488);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ad48a:{NFSU2_TR(0x6ad48a);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x7ffull))));
}
B6ad490:{NFSU2_TR(0x6ad490);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+4,u32(u32(r4(R+4))|u32(u32(0xa0000800ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6ad496:{NFSU2_TR(0x6ad496);
u8 U[4];
w4(U+0,u32(0xf0000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ad49b:{NFSU2_TR(0x6ad49b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ad49c:{NFSU2_TR(0x6ad49c);
__builtin_memmove((R+4),(R+24),4);
}
B6ad49e:{NFSU2_TR(0x6ad49e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ad4a1ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6ad4a1:L6ad4a1:{c.instructions+=2;NFSU2_TR(0x6ad4a1);
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
B6ad4a3:{NFSU2_TR(0x6ad4a3);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6ad4ea;}}
}
B6ad4a5:L6ad4a5:{c.instructions+=2;NFSU2_TR(0x6ad4a5);
__builtin_memmove((R+4),(R+24),4);
}
B6ad4a7:{NFSU2_TR(0x6ad4a7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ad4acull));
TAIL_STATIC(0x6ccd02u,6cc);
}
B6ad4ac:L6ad4ac:{c.instructions+=2;NFSU2_TR(0x6ad4ac);
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
B6ad4ae:{NFSU2_TR(0x6ad4ae);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6ad4ea;}}
}
B6ad4b0:L6ad4b0:{c.instructions+=2;NFSU2_TR(0x6ad4b0);
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
B6ad4b2:{NFSU2_TR(0x6ad4b2);
{goto L6ad4ea;}
}
B6ad4b4:L6ad4b4:{c.instructions+=2;NFSU2_TR(0x6ad4b4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x400000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ad4b9:{NFSU2_TR(0x6ad4b9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ad4c2;}}
}
B6ad4bb:L6ad4bb:{c.instructions+=2;NFSU2_TR(0x6ad4bb);
u8 U[4];
w4(U+0,u32(0xa0000000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ad4c0:{NFSU2_TR(0x6ad4c0);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ad478u);}goto L6ad478;}
}
B6ad4c2:L6ad4c2:{c.instructions+=2;NFSU2_TR(0x6ad4c2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x800000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ad4c7:{NFSU2_TR(0x6ad4c7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ad4d0;}}
}
B6ad4c9:L6ad4c9:{c.instructions+=2;NFSU2_TR(0x6ad4c9);
u8 U[4];
w4(U+0,u32(0x98000000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ad4ce:{NFSU2_TR(0x6ad4ce);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ad478u);}goto L6ad478;}
}
B6ad4d0:L6ad4d0:{c.instructions+=5;NFSU2_TR(0x6ad4d0);
u8 U[4];
w4(U+0,u32(0x7bb1a0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ad4d5:{NFSU2_TR(0x6ad4d5);
u8 U[4];
w4(U+0,u32(0x12ceull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ad4da:{NFSU2_TR(0x6ad4da);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ad4dc:{NFSU2_TR(0x6ad4dc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ad4dd:{NFSU2_TR(0x6ad4dd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ad4e2ull));
TAIL_STATIC(0x69e936u,69e);
}
B6ad4e2:L6ad4e2:{c.instructions+=2;NFSU2_TR(0x6ad4e2);
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
B6ad4e5:{NFSU2_TR(0x6ad4e5);
w4(R+0,u32(0x80004005ull));
}
B6ad4ea:L6ad4ea:{c.instructions+=1;NFSU2_TR(0x6ad4ea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6ad4eb:L6ad4eb:{c.instructions+=3;NFSU2_TR(0x6ad4eb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6ad4ec:{NFSU2_TR(0x6ad4ec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6ad4ed:{NFSU2_TR(0x6ad4ed);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6ad4f0:L6ad4f0:{c.instructions+=12;NFSU2_TR(0x6ad4f0);
__builtin_memmove((R+28),(R+28),4);
}
B6ad4f2:{NFSU2_TR(0x6ad4f2);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ad4f3:{NFSU2_TR(0x6ad4f3);
__builtin_memmove((R+20),(R+16),4);
}
B6ad4f5:{NFSU2_TR(0x6ad4f5);
u8 U[6];
w1(R+512,u8((r4(R+16))<(u32(0x4cull))));
w1(R+523,sborrow<u32>(r4(R+16),u32(0x4cull)));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6ad4f8:{NFSU2_TR(0x6ad4f8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ad4f9:{NFSU2_TR(0x6ad4f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6ad4fc:{NFSU2_TR(0x6ad4fc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ad4fd:{NFSU2_TR(0x6ad4fd);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ad4fe:{NFSU2_TR(0x6ad4fe);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6ad501:{NFSU2_TR(0x6ad501);
__builtin_memmove((R+24),(R+4),4);
}
B6ad503:{NFSU2_TR(0x6ad503);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6ad505:{NFSU2_TR(0x6ad505);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ad508ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6ad508:L6ad508:{c.instructions+=5;NFSU2_TR(0x6ad508);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6ad50b:{NFSU2_TR(0x6ad50b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ad50e:{NFSU2_TR(0x6ad50e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6ad510:{NFSU2_TR(0x6ad510);
__builtin_memmove((R+4),(R+24),4);
}
B6ad512:{NFSU2_TR(0x6ad512);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ad515ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6ad515:L6ad515:{c.instructions+=4;NFSU2_TR(0x6ad515);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6ad517:{NFSU2_TR(0x6ad517);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x158ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ad51d:{NFSU2_TR(0x6ad51d);
__builtin_memmove((R+28),(R+0),4);
}
B6ad51f:{NFSU2_TR(0x6ad51f);
if(r1(R+518)){{goto L6ad642;}}
}
B6ad525:L6ad525:{c.instructions+=2;NFSU2_TR(0x6ad525);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ad529:{NFSU2_TR(0x6ad529);
if(r1(R+518)){{goto L6ad8e0;}}
}
B6ad52f:L6ad52f:{c.instructions+=2;NFSU2_TR(0x6ad52f);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ad536:{NFSU2_TR(0x6ad536);
if(r1(R+518)){{goto L6ad62d;}}
}
B6ad53c:L6ad53c:{c.instructions+=7;NFSU2_TR(0x6ad53c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ad53f:{NFSU2_TR(0x6ad53f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ad542:{NFSU2_TR(0x6ad542);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6ad545:{NFSU2_TR(0x6ad545);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x10ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6ad549:{NFSU2_TR(0x6ad549);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6ad54c:{NFSU2_TR(0x6ad54c);
__builtin_memmove((R+4),(R+24),4);
}
B6ad54e:{NFSU2_TR(0x6ad54e);
if(r1(R+518)){{goto L6ad55f;}}
}
B6ad550:L6ad550:{c.instructions+=1;NFSU2_TR(0x6ad550);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ad555ull));
TAIL_STATIC(0x6d0cb9u,6d0);
}
B6ad555:L6ad555:{c.instructions+=4;NFSU2_TR(0x6ad555);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ad556:{NFSU2_TR(0x6ad556);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B6ad558:{NFSU2_TR(0x6ad558);
u8 U[4];
w4(U+0,u32(0x7bb1e8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ad55d:{NFSU2_TR(0x6ad55d);
{goto L6ad56c;}
}
B6ad55f:L6ad55f:{c.instructions+=1;NFSU2_TR(0x6ad55f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ad564ull));
TAIL_STATIC(0x6d0cb9u,6d0);
}
B6ad564:L6ad564:{c.instructions+=3;NFSU2_TR(0x6ad564);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ad565:{NFSU2_TR(0x6ad565);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B6ad567:{NFSU2_TR(0x6ad567);
u8 U[4];
w4(U+0,u32(0x7bb1e0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ad56c:L6ad56c:{c.instructions+=4;NFSU2_TR(0x6ad56c);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6ad56f:{NFSU2_TR(0x6ad56f);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ad571:{NFSU2_TR(0x6ad571);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ad572:{NFSU2_TR(0x6ad572);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ad577ull));
TAIL_STATIC(0x75e081u,75e);
}
B6ad577:L6ad577:{c.instructions+=8;NFSU2_TR(0x6ad577);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B6ad57a:{NFSU2_TR(0x6ad57a);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ad57c:{NFSU2_TR(0x6ad57c);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6ad57f:{NFSU2_TR(0x6ad57f);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6ad582:{NFSU2_TR(0x6ad582);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1d4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6ad588:{NFSU2_TR(0x6ad588);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ad589:{NFSU2_TR(0x6ad589);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd3ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B6ad58d:{NFSU2_TR(0x6ad58d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ad592ull));
TAIL_STATIC(0x686b20u,686);
}
B6ad592:L6ad592:{c.instructions+=2;NFSU2_TR(0x6ad592);
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
B6ad594:{NFSU2_TR(0x6ad594);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6ad747;}}
}
B6ad59a:L6ad59a:{c.instructions+=3;NFSU2_TR(0x6ad59a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1f0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6ad5a0:{NFSU2_TR(0x6ad5a0);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6ad5a7:{NFSU2_TR(0x6ad5a7);
if(r1(R+518)){{goto L6ad62d;}}
}
B6ad5ad:L6ad5ad:{c.instructions+=3;NFSU2_TR(0x6ad5ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ad5b0:{NFSU2_TR(0x6ad5b0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ad5b2:{NFSU2_TR(0x6ad5b2);
if(r1(R+518)){{goto L6ad62d;}}
}
B6ad5b4:L6ad5b4:{c.instructions+=2;NFSU2_TR(0x6ad5b4);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ad5b8:{NFSU2_TR(0x6ad5b8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ad62d;}}
}
B6ad5ba:L6ad5ba:{c.instructions+=3;NFSU2_TR(0x6ad5ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6ad5bd:{NFSU2_TR(0x6ad5bd);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ad5c1:{NFSU2_TR(0x6ad5c1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ad62d;}}
}
B6ad5c3:L6ad5c3:{c.instructions+=2;NFSU2_TR(0x6ad5c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ad5c6:{NFSU2_TR(0x6ad5c6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+8),(U+0),4);
}
B6ad5c9:L6ad5c9:{c.instructions+=4;NFSU2_TR(0x6ad5c9);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B6ad5cb:{NFSU2_TR(0x6ad5cb);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6ad5cc:{NFSU2_TR(0x6ad5cc);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6ad5ce:{NFSU2_TR(0x6ad5ce);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ad5c9u);}goto L6ad5c9;}}
}
B6ad5d0:L6ad5d0:{c.instructions+=4;NFSU2_TR(0x6ad5d0);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B6ad5d2:{NFSU2_TR(0x6ad5d2);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x3ull))));
}
B6ad5d5:{NFSU2_TR(0x6ad5d5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ad5d6:{NFSU2_TR(0x6ad5d6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ad5dbull));
TAIL_STATIC(0x575620u,575);
}
B6ad5db:L6ad5db:{c.instructions+=4;NFSU2_TR(0x6ad5db);
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
B6ad5dd:{NFSU2_TR(0x6ad5dd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6ad5de:{NFSU2_TR(0x6ad5de);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ad5e1:{NFSU2_TR(0x6ad5e1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ad5ed;}}
}
B6ad5e3:L6ad5e3:{c.instructions+=2;NFSU2_TR(0x6ad5e3);
w4(R+0,u32(0x8007000eull));
}
B6ad5e8:{NFSU2_TR(0x6ad5e8);
{goto L6ad747;}
}
B6ad5ed:L6ad5ed:{c.instructions+=4;NFSU2_TR(0x6ad5ed);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6ad5f0:{NFSU2_TR(0x6ad5f0);
u8 U[4];
w4(U+0,u32(0x7bb1d8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ad5f5:{NFSU2_TR(0x6ad5f5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ad5f6:{NFSU2_TR(0x6ad5f6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ad5fbull));
TAIL_STATIC(0x75c784u,75c);
}
B6ad5fb:L6ad5fb:{c.instructions+=6;NFSU2_TR(0x6ad5fb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B6ad5fe:{NFSU2_TR(0x6ad5fe);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ad600:{NFSU2_TR(0x6ad600);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6ad603:{NFSU2_TR(0x6ad603);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1d4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6ad609:{NFSU2_TR(0x6ad609);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6ad60c:{NFSU2_TR(0x6ad60c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ad611ull));
TAIL_STATIC(0x686b20u,686);
}
B6ad611:L6ad611:{c.instructions+=3;NFSU2_TR(0x6ad611);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6ad614:{NFSU2_TR(0x6ad614);
__builtin_memmove((R+28),(R+0),4);
}
B6ad616:{NFSU2_TR(0x6ad616);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ad61bull));
TAIL_STATIC(0x575630u,575);
}
B6ad61b:L6ad61b:{c.instructions+=3;NFSU2_TR(0x6ad61b);
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
B6ad61d:{NFSU2_TR(0x6ad61d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6ad61e:{NFSU2_TR(0x6ad61e);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6ad627;}}
}
B6ad620:L6ad620:{c.instructions+=2;NFSU2_TR(0x6ad620);
__builtin_memmove((R+0),(R+28),4);
}
B6ad622:{NFSU2_TR(0x6ad622);
{goto L6ad747;}
}
B6ad627:L6ad627:{c.instructions+=1;NFSU2_TR(0x6ad627);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1f0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6ad62d:L6ad62d:{c.instructions+=3;NFSU2_TR(0x6ad62d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ad630:{NFSU2_TR(0x6ad630);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ad632:{NFSU2_TR(0x6ad632);
if(r1(R+518)){{goto L6ad8e0;}}
}
B6ad638:L6ad638:{c.instructions+=3;NFSU2_TR(0x6ad638);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ad63b:{NFSU2_TR(0x6ad63b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6ad63d:{NFSU2_TR(0x6ad63d);
{goto L6ad8e0;}
}
B6ad642:L6ad642:{c.instructions+=4;NFSU2_TR(0x6ad642);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ad645:{NFSU2_TR(0x6ad645);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x12ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x12ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x12ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6ad648:{NFSU2_TR(0x6ad648);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ad64b:{NFSU2_TR(0x6ad64b);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6ad742;}}
}
B6ad651:L6ad651:{c.instructions+=1;NFSU2_TR(0x6ad651);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x6ad8efull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6ad658:L6ad658:{c.instructions+=1;NFSU2_TR(0x6ad658);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ad65b:L6ad65b:{c.instructions+=2;NFSU2_TR(0x6ad65b);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0xfull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xfull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xfull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6ad65e:{NFSU2_TR(0x6ad65e);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6ad742;}}
}
B6ad664:L6ad664:{c.instructions+=6;NFSU2_TR(0x6ad664);
w4(R+28,u32(u32(r4(R+28))|u32(u32(0xffff8000ull))));
}
B6ad66a:{NFSU2_TR(0x6ad66a);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B6ad66d:{NFSU2_TR(0x6ad66d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(r4(R+28))));
s4(u32(r4(U+0)),r4(U+4));
}
B6ad670:{NFSU2_TR(0x6ad670);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6ad674:{NFSU2_TR(0x6ad674);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ad677:{NFSU2_TR(0x6ad677);
if(r1(R+518)){{goto L6ad680;}}
}
B6ad679:L6ad679:{c.instructions+=1;NFSU2_TR(0x6ad679);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
w4(U+4,u32(0x400000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6ad680:L6ad680:{c.instructions+=3;NFSU2_TR(0x6ad680);
u8 U[4];
w4(U+0,u32(0x1full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ad682:{NFSU2_TR(0x6ad682);
__builtin_memmove((R+4),(R+24),4);
}
B6ad684:{NFSU2_TR(0x6ad684);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ad689ull));
TAIL_STATIC(0x6d18eau,6d1);
}
B6ad689:L6ad689:{c.instructions+=2;NFSU2_TR(0x6ad689);
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
B6ad68b:{NFSU2_TR(0x6ad68b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6ad747;}}
}
B6ad691:L6ad691:{c.instructions+=3;NFSU2_TR(0x6ad691);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6ad694:{NFSU2_TR(0x6ad694);
__builtin_memmove((R+4),(R+24),4);
}
B6ad696:{NFSU2_TR(0x6ad696);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ad69bull));
TAIL_STATIC(0x6cfb73u,6cf);
}
B6ad69b:L6ad69b:{c.instructions+=2;NFSU2_TR(0x6ad69b);
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
B6ad69d:{NFSU2_TR(0x6ad69d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6ad747;}}
}
B6ad6a3:L6ad6a3:{c.instructions+=5;NFSU2_TR(0x6ad6a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ad6a6:{NFSU2_TR(0x6ad6a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ad6a9:{NFSU2_TR(0x6ad6a9);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6ad6ac:{NFSU2_TR(0x6ad6ac);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+8,u8(u32(r1(U+4))&u32(u8(0x10ull))));
w1(R+519,u8(s8(r1(U+8))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+8))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+8))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B6ad6b0:{NFSU2_TR(0x6ad6b0);
if(r1(R+518)){{goto L6ad7a9;}}
}
B6ad6b6:L6ad6b6:{c.instructions+=12;NFSU2_TR(0x6ad6b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ad6b9:{NFSU2_TR(0x6ad6b9);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6ad6bc:{NFSU2_TR(0x6ad6bc);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ad6bd:{NFSU2_TR(0x6ad6bd);
u8 U[4];
w4(U+0,u32(u32(u32(0x19ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6ad6c0:{NFSU2_TR(0x6ad6c0);
u8 U[4];
w4(U+0,u32(u32(u32(0x1full))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B6ad6c3:{NFSU2_TR(0x6ad6c3);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(r4(R+0))));
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
B6ad6c6:{NFSU2_TR(0x6ad6c6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6ad6c8:{NFSU2_TR(0x6ad6c8);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+4),(U+0),4);
}
B6ad6cb:{NFSU2_TR(0x6ad6cb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ad6cc:{NFSU2_TR(0x6ad6cc);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ad6cd:{NFSU2_TR(0x6ad6cd);
__builtin_memmove((R+4),(R+24),4);
}
B6ad6cf:{NFSU2_TR(0x6ad6cf);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ad6d5ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6ad6d5:L6ad6d5:{c.instructions+=2;NFSU2_TR(0x6ad6d5);
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
B6ad6d7:{NFSU2_TR(0x6ad6d7);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6ad7c8;}}
}
B6ad6dd:L6ad6dd:{c.instructions+=1;NFSU2_TR(0x6ad6dd);
{goto L6ad747;}
}
B6ad6df:L6ad6df:{c.instructions+=2;NFSU2_TR(0x6ad6df);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6ad6e6:{NFSU2_TR(0x6ad6e6);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ad65bu);}goto L6ad65b;}
}
B6ad6eb:L6ad6eb:{c.instructions+=2;NFSU2_TR(0x6ad6eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6ad6f2:{NFSU2_TR(0x6ad6f2);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ad65bu);}goto L6ad65b;}
}
B6ad6f7:L6ad6f7:{c.instructions+=2;NFSU2_TR(0x6ad6f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6ad6fe:{NFSU2_TR(0x6ad6fe);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ad65bu);}goto L6ad65b;}
}
B6ad703:L6ad703:{c.instructions+=2;NFSU2_TR(0x6ad703);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6ad70a:{NFSU2_TR(0x6ad70a);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ad65bu);}goto L6ad65b;}
}
B6ad70f:L6ad70f:{c.instructions+=2;NFSU2_TR(0x6ad70f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
w4(U+4,u32(0x5ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6ad716:{NFSU2_TR(0x6ad716);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ad65bu);}goto L6ad65b;}
}
B6ad71b:L6ad71b:{c.instructions+=2;NFSU2_TR(0x6ad71b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
w4(U+4,u32(0x6ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6ad722:{NFSU2_TR(0x6ad722);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ad65bu);}goto L6ad65b;}
}
B6ad727:L6ad727:{c.instructions+=2;NFSU2_TR(0x6ad727);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
w4(U+4,u32(0x7ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6ad72e:{NFSU2_TR(0x6ad72e);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ad65bu);}goto L6ad65b;}
}
B6ad733:L6ad733:{c.instructions+=3;NFSU2_TR(0x6ad733);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B6ad735:{NFSU2_TR(0x6ad735);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
w4(U+4,u32(0x8ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6ad73c:{NFSU2_TR(0x6ad73c);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ad664u);}goto L6ad664;}}
}
B6ad742:L6ad742:{c.instructions+=1;NFSU2_TR(0x6ad742);
w4(R+0,u32(0x80004005ull));
}
B6ad747:L6ad747:{c.instructions+=5;NFSU2_TR(0x6ad747);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6ad748:{NFSU2_TR(0x6ad748);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6ad749:{NFSU2_TR(0x6ad749);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6ad74a:{NFSU2_TR(0x6ad74a);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6ad74b:{NFSU2_TR(0x6ad74b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6ad74e:L6ad74e:{c.instructions+=2;NFSU2_TR(0x6ad74e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
w4(U+4,u32(0x9ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6ad755:{NFSU2_TR(0x6ad755);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ad65bu);}goto L6ad65b;}
}
B6ad75a:L6ad75a:{c.instructions+=2;NFSU2_TR(0x6ad75a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
w4(U+4,u32(0xaull));
s4(u32(r4(U+0)),r4(U+4));
}
B6ad761:{NFSU2_TR(0x6ad761);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ad65bu);}goto L6ad65b;}
}
B6ad766:L6ad766:{c.instructions+=2;NFSU2_TR(0x6ad766);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
w4(U+4,u32(0xbull));
s4(u32(r4(U+0)),r4(U+4));
}
B6ad76d:{NFSU2_TR(0x6ad76d);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ad65bu);}goto L6ad65b;}
}
B6ad772:L6ad772:{c.instructions+=2;NFSU2_TR(0x6ad772);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
w4(U+4,u32(0xcull));
s4(u32(r4(U+0)),r4(U+4));
}
B6ad779:{NFSU2_TR(0x6ad779);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ad65bu);}goto L6ad65b;}
}
B6ad77e:L6ad77e:{c.instructions+=2;NFSU2_TR(0x6ad77e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
w4(U+4,u32(0xdull));
s4(u32(r4(U+0)),r4(U+4));
}
B6ad785:{NFSU2_TR(0x6ad785);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ad65bu);}goto L6ad65b;}
}
B6ad78a:L6ad78a:{c.instructions+=2;NFSU2_TR(0x6ad78a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
w4(U+4,u32(0x80000000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6ad791:{NFSU2_TR(0x6ad791);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ad65bu);}goto L6ad65b;}
}
B6ad796:L6ad796:{c.instructions+=3;NFSU2_TR(0x6ad796);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
w4(U+4,u32(0x80000000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6ad79d:{NFSU2_TR(0x6ad79d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6ad7a4:{NFSU2_TR(0x6ad7a4);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ad65bu);}goto L6ad65b;}
}
B6ad7a9:L6ad7a9:{c.instructions+=10;NFSU2_TR(0x6ad7a9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6ad7ab:{NFSU2_TR(0x6ad7ab);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6ad7ae:{NFSU2_TR(0x6ad7ae);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ad7af:{NFSU2_TR(0x6ad7af);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6ad7b2:{NFSU2_TR(0x6ad7b2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ad7b3:{NFSU2_TR(0x6ad7b3);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+4),(U+0),4);
}
B6ad7b6:{NFSU2_TR(0x6ad7b6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ad7b7:{NFSU2_TR(0x6ad7b7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ad7b8:{NFSU2_TR(0x6ad7b8);
__builtin_memmove((R+4),(R+24),4);
}
B6ad7ba:{NFSU2_TR(0x6ad7ba);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x84ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ad7c0ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6ad7c0:L6ad7c0:{c.instructions+=2;NFSU2_TR(0x6ad7c0);
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
B6ad7c2:{NFSU2_TR(0x6ad7c2);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ad747u);}goto L6ad747;}}
}
B6ad7c4:L6ad7c4:{c.instructions+=1;NFSU2_TR(0x6ad7c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6ad7c8:L6ad7c8:{c.instructions+=10;NFSU2_TR(0x6ad7c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6ad7cc:{NFSU2_TR(0x6ad7cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6ad7d0:{NFSU2_TR(0x6ad7d0);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B6ad7d3:{NFSU2_TR(0x6ad7d3);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ad7d7:{NFSU2_TR(0x6ad7d7);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6ad7da:{NFSU2_TR(0x6ad7da);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6ad7db:{NFSU2_TR(0x6ad7db);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6ad7dc:{NFSU2_TR(0x6ad7dc);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6ad7dd:{NFSU2_TR(0x6ad7dd);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6ad7de:{NFSU2_TR(0x6ad7de);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6ad815;}}
}
B6ad7e0:L6ad7e0:{c.instructions+=2;NFSU2_TR(0x6ad7e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6ad7e3:{NFSU2_TR(0x6ad7e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ad7e6:L6ad7e6:{c.instructions+=3;NFSU2_TR(0x6ad7e6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6ad7e8:{NFSU2_TR(0x6ad7e8);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+28))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ad7eb:{NFSU2_TR(0x6ad7eb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ad807;}}
}
B6ad7ed:L6ad7ed:{c.instructions+=3;NFSU2_TR(0x6ad7ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ad7f0:{NFSU2_TR(0x6ad7f0);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ad7f3:{NFSU2_TR(0x6ad7f3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ad807;}}
}
B6ad7f5:L6ad7f5:{c.instructions+=3;NFSU2_TR(0x6ad7f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ad7f8:{NFSU2_TR(0x6ad7f8);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ad7fb:{NFSU2_TR(0x6ad7fb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ad807;}}
}
B6ad7fd:L6ad7fd:{c.instructions+=3;NFSU2_TR(0x6ad7fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ad800:{NFSU2_TR(0x6ad800);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ad803:{NFSU2_TR(0x6ad803);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffd4ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6ad807:L6ad807:{c.instructions+=5;NFSU2_TR(0x6ad807);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6ad80a:{NFSU2_TR(0x6ad80a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ad80d:{NFSU2_TR(0x6ad80d);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B6ad810:{NFSU2_TR(0x6ad810);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6ad813:{NFSU2_TR(0x6ad813);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ad7e6u);}goto L6ad7e6;}}
}
B6ad815:L6ad815:{c.instructions+=2;NFSU2_TR(0x6ad815);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ad818:{NFSU2_TR(0x6ad818);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6ad81a:L6ad81a:{c.instructions+=3;NFSU2_TR(0x6ad81a);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffd4ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B6ad81e:{NFSU2_TR(0x6ad81e);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6ad821:{NFSU2_TR(0x6ad821);
if(r1(R+518)){{goto L6ad828;}}
}
B6ad823:L6ad823:{c.instructions+=2;NFSU2_TR(0x6ad823);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffd4ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6ad827:{NFSU2_TR(0x6ad827);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6ad828:L6ad828:{c.instructions+=3;NFSU2_TR(0x6ad828);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6ad829:{NFSU2_TR(0x6ad829);
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
B6ad82c:{NFSU2_TR(0x6ad82c);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ad81au);}goto L6ad81a;}}
}
B6ad82e:L6ad82e:{c.instructions+=9;NFSU2_TR(0x6ad82e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6ad831:{NFSU2_TR(0x6ad831);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6ad833:{NFSU2_TR(0x6ad833);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+4),(U+0),4);
}
B6ad836:{NFSU2_TR(0x6ad836);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ad837:{NFSU2_TR(0x6ad837);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ad838:{NFSU2_TR(0x6ad838);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6ad83b:{NFSU2_TR(0x6ad83b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ad83c:{NFSU2_TR(0x6ad83c);
__builtin_memmove((R+4),(R+24),4);
}
B6ad83e:{NFSU2_TR(0x6ad83e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ad841ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6ad841:L6ad841:{c.instructions+=2;NFSU2_TR(0x6ad841);
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
B6ad843:{NFSU2_TR(0x6ad843);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ad747u);}goto L6ad747;}}
}
B6ad849:L6ad849:{c.instructions+=5;NFSU2_TR(0x6ad849);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6ad84b:{NFSU2_TR(0x6ad84b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ad84d:{NFSU2_TR(0x6ad84d);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ad84f:{NFSU2_TR(0x6ad84f);
__builtin_memmove((R+4),(R+24),4);
}
B6ad851:{NFSU2_TR(0x6ad851);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ad854ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6ad854:L6ad854:{c.instructions+=5;NFSU2_TR(0x6ad854);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6ad857:{NFSU2_TR(0x6ad857);
__builtin_memmove((R+4),(R+28),4);
}
B6ad859:{NFSU2_TR(0x6ad859);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x7fffffffull))));
}
B6ad85f:{NFSU2_TR(0x6ad85f);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6ad861:{NFSU2_TR(0x6ad861);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ad867;}}
}
B6ad863:L6ad863:{c.instructions+=1;NFSU2_TR(0x6ad863);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))|u32(u8(0xfull))));
s1(u32(r4(U+0)),r1(U+4));
}
B6ad867:L6ad867:{c.instructions+=3;NFSU2_TR(0x6ad867);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))&u32(u8(0xefull))));
s1(u32(r4(U+0)),r1(U+4));
}
B6ad86b:{NFSU2_TR(0x6ad86b);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x40ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6ad86f:{NFSU2_TR(0x6ad86f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ad884;}}
}
B6ad871:L6ad871:{c.instructions+=2;NFSU2_TR(0x6ad871);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x20ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6ad878:{NFSU2_TR(0x6ad878);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ad880;}}
}
B6ad87a:L6ad87a:{c.instructions+=2;NFSU2_TR(0x6ad87a);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6ad87e:{NFSU2_TR(0x6ad87e);
if(r1(R+518)){{goto L6ad884;}}
}
B6ad880:L6ad880:{c.instructions+=1;NFSU2_TR(0x6ad880);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))|u32(u8(0x20ull))));
s1(u32(r4(U+0)),r1(U+4));
}
B6ad884:L6ad884:{c.instructions+=17;NFSU2_TR(0x6ad884);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ad887:{NFSU2_TR(0x6ad887);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6ad889:{NFSU2_TR(0x6ad889);
__builtin_memmove((R+4),(R+0),4);
}
B6ad88b:{NFSU2_TR(0x6ad88b);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0xfffffff8ull))));
}
B6ad88e:{NFSU2_TR(0x6ad88e);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6ad891:{NFSU2_TR(0x6ad891);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x18ull))));
}
B6ad894:{NFSU2_TR(0x6ad894);
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+0))));
}
B6ad896:{NFSU2_TR(0x6ad896);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ad899:{NFSU2_TR(0x6ad899);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6ad89c:{NFSU2_TR(0x6ad89c);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x7ffull))));
}
B6ad8a1:{NFSU2_TR(0x6ad8a1);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ad8a3:{NFSU2_TR(0x6ad8a3);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6ad8a6:{NFSU2_TR(0x6ad8a6);
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+0))));
}
B6ad8a8:{NFSU2_TR(0x6ad8a8);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
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
B6ad8ab:{NFSU2_TR(0x6ad8ab);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ad8ac:{NFSU2_TR(0x6ad8ac);
__builtin_memmove((R+4),(R+24),4);
}
B6ad8ae:{NFSU2_TR(0x6ad8ae);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ad8b1ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6ad8b1:L6ad8b1:{c.instructions+=2;NFSU2_TR(0x6ad8b1);
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
B6ad8b3:{NFSU2_TR(0x6ad8b3);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ad747u);}goto L6ad747;}}
}
B6ad8b9:L6ad8b9:{c.instructions+=3;NFSU2_TR(0x6ad8b9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6ad8bb:{NFSU2_TR(0x6ad8bb);
__builtin_memmove((R+4),(R+24),4);
}
B6ad8bd:{NFSU2_TR(0x6ad8bd);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ad8c0ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6ad8c0:L6ad8c0:{c.instructions+=2;NFSU2_TR(0x6ad8c0);
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
B6ad8c2:{NFSU2_TR(0x6ad8c2);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ad747u);}goto L6ad747;}}
}
B6ad8c8:L6ad8c8:{c.instructions+=2;NFSU2_TR(0x6ad8c8);
__builtin_memmove((R+4),(R+24),4);
}
B6ad8ca:{NFSU2_TR(0x6ad8ca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ad8cfull));
TAIL_STATIC(0x6ccd02u,6cc);
}
B6ad8cf:L6ad8cf:{c.instructions+=2;NFSU2_TR(0x6ad8cf);
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
B6ad8d1:{NFSU2_TR(0x6ad8d1);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ad747u);}goto L6ad747;}}
}
B6ad8d7:L6ad8d7:{c.instructions+=3;NFSU2_TR(0x6ad8d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ad8da:{NFSU2_TR(0x6ad8da);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ad8dc:{NFSU2_TR(0x6ad8dc);
if(r1(R+518)){{goto L6ad8e0;}}
}
B6ad8de:L6ad8de:{c.instructions+=1;NFSU2_TR(0x6ad8de);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6ad8e0:L6ad8e0:{c.instructions+=2;NFSU2_TR(0x6ad8e0);
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
B6ad8e2:{NFSU2_TR(0x6ad8e2);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ad747u);}goto L6ad747;}
}
B6ad8e7:L6ad8e7:{c.instructions+=3;NFSU2_TR(0x6ad8e7);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6ad8e9:{NFSU2_TR(0x6ad8e9);
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
B6ad8ea:{NFSU2_TR(0x6ad8ea);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ad747u);}goto L6ad747;}
}
B6ad93b:L6ad93b:{c.instructions+=14;NFSU2_TR(0x6ad93b);
__builtin_memmove((R+28),(R+28),4);
}
B6ad93d:{NFSU2_TR(0x6ad93d);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ad93e:{NFSU2_TR(0x6ad93e);
__builtin_memmove((R+20),(R+16),4);
}
B6ad940:{NFSU2_TR(0x6ad940);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B6ad943:{NFSU2_TR(0x6ad943);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ad944:{NFSU2_TR(0x6ad944);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ad945:{NFSU2_TR(0x6ad945);
__builtin_memmove((R+24),(R+4),4);
}
B6ad947:{NFSU2_TR(0x6ad947);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ad94a:{NFSU2_TR(0x6ad94a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ad94d:{NFSU2_TR(0x6ad94d);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B6ad950:{NFSU2_TR(0x6ad950);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ad956:{NFSU2_TR(0x6ad956);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffffull))));
}
B6ad95b:{NFSU2_TR(0x6ad95b);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0x100ull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x100ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ad960:{NFSU2_TR(0x6ad960);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6ad988;}}
}
B6ad962:L6ad962:{c.instructions+=6;NFSU2_TR(0x6ad962);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ad968:{NFSU2_TR(0x6ad968);
u8 U[4];
w4(U+0,u32(0x7bb1f0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ad96d:{NFSU2_TR(0x6ad96d);
u8 U[4];
w4(U+0,u32(0x119full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ad972:{NFSU2_TR(0x6ad972);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6ad975:{NFSU2_TR(0x6ad975);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ad976:{NFSU2_TR(0x6ad976);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ad97bull));
TAIL_STATIC(0x69e936u,69e);
}
B6ad97b:L6ad97b:{c.instructions+=3;NFSU2_TR(0x6ad97b);
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
B6ad97e:{NFSU2_TR(0x6ad97e);
w4(R+0,u32(0x80004001ull));
}
B6ad983:{NFSU2_TR(0x6ad983);
{goto L6ada38;}
}
B6ad988:L6ad988:{c.instructions+=3;NFSU2_TR(0x6ad988);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ad98b:{NFSU2_TR(0x6ad98b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6ad98e:{NFSU2_TR(0x6ad98e);
if(r1(R+518)){{goto L6ad9a0;}}
}
B6ad990:L6ad990:{c.instructions+=3;NFSU2_TR(0x6ad990);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ad991:{NFSU2_TR(0x6ad991);
__builtin_memmove((R+4),(R+24),4);
}
B6ad993:{NFSU2_TR(0x6ad993);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ad998ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ad93bu);}goto L6ad93b;}
}
B6ad998:L6ad998:{c.instructions+=2;NFSU2_TR(0x6ad998);
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
B6ad99a:{NFSU2_TR(0x6ad99a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6ada38;}}
}
B6ad9a0:L6ad9a0:{c.instructions+=3;NFSU2_TR(0x6ad9a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ad9a3:{NFSU2_TR(0x6ad9a3);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x138ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ad9a9:{NFSU2_TR(0x6ad9a9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ad9b2;}}
}
B6ad9ab:L6ad9ab:{c.instructions+=2;NFSU2_TR(0x6ad9ab);
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
B6ad9ad:{NFSU2_TR(0x6ad9ad);
{goto L6ada38;}
}
B6ad9b2:L6ad9b2:{c.instructions+=3;NFSU2_TR(0x6ad9b2);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ad9b4:{NFSU2_TR(0x6ad9b4);
__builtin_memmove((R+4),(R+24),4);
}
B6ad9b6:{NFSU2_TR(0x6ad9b6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ad9bbull));
TAIL_STATIC(0x6d18eau,6d1);
}
B6ad9bb:L6ad9bb:{c.instructions+=2;NFSU2_TR(0x6ad9bb);
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
B6ad9bd:{NFSU2_TR(0x6ad9bd);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6ada38;}}
}
B6ad9bf:L6ad9bf:{c.instructions+=8;NFSU2_TR(0x6ad9bf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6ad9c1:{NFSU2_TR(0x6ad9c1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ad9c2:{NFSU2_TR(0x6ad9c2);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ad9c4:{NFSU2_TR(0x6ad9c4);
w4(R+28,u32(0x10000ull));
}
B6ad9c9:{NFSU2_TR(0x6ad9c9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ad9ca:{NFSU2_TR(0x6ad9ca);
u8 U[4];
w4(U+0,u32(0xb0000000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ad9cf:{NFSU2_TR(0x6ad9cf);
__builtin_memmove((R+4),(R+24),4);
}
B6ad9d1:{NFSU2_TR(0x6ad9d1);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ad9d4ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6ad9d4:L6ad9d4:{c.instructions+=2;NFSU2_TR(0x6ad9d4);
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
B6ad9d6:{NFSU2_TR(0x6ad9d6);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6ada37;}}
}
B6ad9d8:L6ad9d8:{c.instructions+=8;NFSU2_TR(0x6ad9d8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6ad9da:{NFSU2_TR(0x6ad9da);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+4),(U+0),4);
}
B6ad9dd:{NFSU2_TR(0x6ad9dd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ad9de:{NFSU2_TR(0x6ad9de);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6ad9e1:{NFSU2_TR(0x6ad9e1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ad9e2:{NFSU2_TR(0x6ad9e2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ad9e3:{NFSU2_TR(0x6ad9e3);
__builtin_memmove((R+4),(R+24),4);
}
B6ad9e5:{NFSU2_TR(0x6ad9e5);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ad9e8ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6ad9e8:L6ad9e8:{c.instructions+=2;NFSU2_TR(0x6ad9e8);
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
B6ad9ea:{NFSU2_TR(0x6ad9ea);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6ada37;}}
}
B6ad9ec:L6ad9ec:{c.instructions+=9;NFSU2_TR(0x6ad9ec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6ad9ee:{NFSU2_TR(0x6ad9ee);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6ad9f1:{NFSU2_TR(0x6ad9f1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ad9f2:{NFSU2_TR(0x6ad9f2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ad9f3:{NFSU2_TR(0x6ad9f3);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ad9f5:{NFSU2_TR(0x6ad9f5);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6ad9f8:{NFSU2_TR(0x6ad9f8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ad9f9:{NFSU2_TR(0x6ad9f9);
__builtin_memmove((R+4),(R+24),4);
}
B6ad9fb:{NFSU2_TR(0x6ad9fb);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ad9feull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6ad9fe:L6ad9fe:{c.instructions+=2;NFSU2_TR(0x6ad9fe);
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
B6ada00:{NFSU2_TR(0x6ada00);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6ada37;}}
}
B6ada02:L6ada02:{c.instructions+=6;NFSU2_TR(0x6ada02);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6ada05:{NFSU2_TR(0x6ada05);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6ada07:{NFSU2_TR(0x6ada07);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6ada0a:{NFSU2_TR(0x6ada0a);
__builtin_memmove((R+4),(R+24),4);
}
B6ada0c:{NFSU2_TR(0x6ada0c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6ada0f:{NFSU2_TR(0x6ada0f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ada12ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6ada12:L6ada12:{c.instructions+=2;NFSU2_TR(0x6ada12);
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
B6ada14:{NFSU2_TR(0x6ada14);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6ada37;}}
}
B6ada16:L6ada16:{c.instructions+=3;NFSU2_TR(0x6ada16);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6ada18:{NFSU2_TR(0x6ada18);
__builtin_memmove((R+4),(R+24),4);
}
B6ada1a:{NFSU2_TR(0x6ada1a);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ada1dull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6ada1d:L6ada1d:{c.instructions+=2;NFSU2_TR(0x6ada1d);
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
B6ada1f:{NFSU2_TR(0x6ada1f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6ada37;}}
}
B6ada21:L6ada21:{c.instructions+=2;NFSU2_TR(0x6ada21);
__builtin_memmove((R+4),(R+24),4);
}
B6ada23:{NFSU2_TR(0x6ada23);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ada28ull));
TAIL_STATIC(0x6ccd02u,6cc);
}
B6ada28:L6ada28:{c.instructions+=2;NFSU2_TR(0x6ada28);
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
B6ada2a:{NFSU2_TR(0x6ada2a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6ada37;}}
}
B6ada2c:L6ada2c:{c.instructions+=3;NFSU2_TR(0x6ada2c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ada2f:{NFSU2_TR(0x6ada2f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x138ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ada35:{NFSU2_TR(0x6ada35);
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
B6ada37:L6ada37:{c.instructions+=1;NFSU2_TR(0x6ada37);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6ada38:L6ada38:{c.instructions+=4;NFSU2_TR(0x6ada38);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6ada39:{NFSU2_TR(0x6ada39);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6ada3a:{NFSU2_TR(0x6ada3a);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6ada3b:{NFSU2_TR(0x6ada3b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6ada3e:L6ada3e:{c.instructions+=10;NFSU2_TR(0x6ada3e);
__builtin_memmove((R+28),(R+28),4);
}
B6ada40:{NFSU2_TR(0x6ada40);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ada41:{NFSU2_TR(0x6ada41);
__builtin_memmove((R+20),(R+16),4);
}
B6ada43:{NFSU2_TR(0x6ada43);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ada44:{NFSU2_TR(0x6ada44);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ada45:{NFSU2_TR(0x6ada45);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6ada48:{NFSU2_TR(0x6ada48);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+28,u32(u32(r4(R+28))|u32(r4(U+4))));
}
B6ada4b:{NFSU2_TR(0x6ada4b);
__builtin_memmove((R+24),(R+4),4);
}
B6ada4d:{NFSU2_TR(0x6ada4d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ada4e:{NFSU2_TR(0x6ada4e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ada53ull));
TAIL_STATIC(0x6d19f0u,6d1);
}
B6ada53:L6ada53:{c.instructions+=2;NFSU2_TR(0x6ada53);
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
B6ada55:{NFSU2_TR(0x6ada55);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6adad4;}}
}
B6ada57:L6ada57:{c.instructions+=2;NFSU2_TR(0x6ada57);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(u32(0x2000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ada5d:{NFSU2_TR(0x6ada5d);
if(r1(R+518)){{goto L6adad2;}}
}
B6ada5f:L6ada5f:{c.instructions+=4;NFSU2_TR(0x6ada5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ada65:{NFSU2_TR(0x6ada65);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffffull))));
}
B6ada6a:{NFSU2_TR(0x6ada6a);
w1(R+512,u8((r4(R+0))<(u32(0x200ull))));
}
B6ada6f:{NFSU2_TR(0x6ada6f);
if(r1(R+512)){{goto L6adad2;}}
}
B6ada71:L6ada71:{c.instructions+=9;NFSU2_TR(0x6ada71);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ada74:{NFSU2_TR(0x6ada74);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ada77:{NFSU2_TR(0x6ada77);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ada7a:{NFSU2_TR(0x6ada7a);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6ada7d:{NFSU2_TR(0x6ada7d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6ada80:{NFSU2_TR(0x6ada80);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ada83:{NFSU2_TR(0x6ada83);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6ada86:{NFSU2_TR(0x6ada86);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x10ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6ada8a:{NFSU2_TR(0x6ada8a);
if(r1(R+518)){{goto L6ada93;}}
}
B6ada8c:L6ada8c:{c.instructions+=2;NFSU2_TR(0x6ada8c);
w4(R+0,u32(0xf0e40800ull));
}
B6ada91:{NFSU2_TR(0x6ada91);
{goto L6adaca;}
}
B6ada93:L6ada93:{c.instructions+=8;NFSU2_TR(0x6ada93);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ada96:{NFSU2_TR(0x6ada96);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6ada99:{NFSU2_TR(0x6ada99);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ada9c:{NFSU2_TR(0x6ada9c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ada9f:{NFSU2_TR(0x6ada9f);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x7ffull))));
}
B6adaa4:{NFSU2_TR(0x6adaa4);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xb0000000ull))));
}
B6adaa9:{NFSU2_TR(0x6adaa9);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B6adaac:{NFSU2_TR(0x6adaac);
if(r1(R+518)){{goto L6adaca;}}
}
B6adaae:L6adaae:{c.instructions+=2;NFSU2_TR(0x6adaae);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B6adaaf:{NFSU2_TR(0x6adaaf);
if(r1(R+518)){{goto L6adac5;}}
}
B6adab1:L6adab1:{c.instructions+=2;NFSU2_TR(0x6adab1);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B6adab2:{NFSU2_TR(0x6adab2);
if(r1(R+518)){{goto L6adabe;}}
}
B6adab4:L6adab4:{c.instructions+=2;NFSU2_TR(0x6adab4);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B6adab5:{NFSU2_TR(0x6adab5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6adaca;}}
}
B6adab7:L6adab7:{c.instructions+=2;NFSU2_TR(0x6adab7);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xff0000ull))));
}
B6adabc:{NFSU2_TR(0x6adabc);
{goto L6adaca;}
}
B6adabe:L6adabe:{c.instructions+=2;NFSU2_TR(0x6adabe);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xaa0000ull))));
}
B6adac3:{NFSU2_TR(0x6adac3);
{goto L6adaca;}
}
B6adac5:L6adac5:{c.instructions+=1;NFSU2_TR(0x6adac5);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x550000ull))));
}
B6adaca:L6adaca:{c.instructions+=3;NFSU2_TR(0x6adaca);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6adacb:{NFSU2_TR(0x6adacb);
__builtin_memmove((R+4),(R+24),4);
}
B6adacd:{NFSU2_TR(0x6adacd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6adad2ull));
TAIL_STATIC(0x6d19f0u,6d1);
}
B6adad2:L6adad2:{c.instructions+=1;NFSU2_TR(0x6adad2);
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
B6adad4:L6adad4:{c.instructions+=4;NFSU2_TR(0x6adad4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6adad5:{NFSU2_TR(0x6adad5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6adad6:{NFSU2_TR(0x6adad6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6adad7:{NFSU2_TR(0x6adad7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6adada:L6adada:{c.instructions+=14;NFSU2_TR(0x6adada);
__builtin_memmove((R+28),(R+28),4);
}
B6adadc:{NFSU2_TR(0x6adadc);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6adadd:{NFSU2_TR(0x6adadd);
__builtin_memmove((R+20),(R+16),4);
}
B6adadf:{NFSU2_TR(0x6adadf);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6adae0:{NFSU2_TR(0x6adae0);
__builtin_memmove((R+24),(R+4),4);
}
B6adae2:{NFSU2_TR(0x6adae2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6adae5:{NFSU2_TR(0x6adae5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6adae7:{NFSU2_TR(0x6adae7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6adae8:{NFSU2_TR(0x6adae8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6adaeb:{NFSU2_TR(0x6adaeb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6adaed:{NFSU2_TR(0x6adaed);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6adaf0:{NFSU2_TR(0x6adaf0);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6adaf3:{NFSU2_TR(0x6adaf3);
__builtin_memmove((R+4),(R+24),4);
}
B6adaf5:{NFSU2_TR(0x6adaf5);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6adaf8ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6adaf8:L6adaf8:{c.instructions+=2;NFSU2_TR(0x6adaf8);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x11ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6adafb:{NFSU2_TR(0x6adafb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6adb0a;}}
}
B6adafd:L6adafd:{c.instructions+=4;NFSU2_TR(0x6adafd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6adb00:{NFSU2_TR(0x6adb00);
u8 U[4];
w4(U+0,u32(0xe40000ull));
s4(u32(r4(R+0)),r4(U+0));
}
B6adb06:{NFSU2_TR(0x6adb06);
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
B6adb08:{NFSU2_TR(0x6adb08);
{goto L6adb1b;}
}
B6adb0a:L6adb0a:{c.instructions+=6;NFSU2_TR(0x6adb0a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6adb0d:{NFSU2_TR(0x6adb0d);
__builtin_memmove((R+4),(R+24),4);
}
B6adb0f:{NFSU2_TR(0x6adb0f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6adb12:{NFSU2_TR(0x6adb12);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6adb15:{NFSU2_TR(0x6adb15);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6adb16:{NFSU2_TR(0x6adb16);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6adb1bull));
TAIL_STATIC(0x6cc93du,6cc);
}
B6adb1b:L6adb1b:{c.instructions+=4;NFSU2_TR(0x6adb1b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6adb1c:{NFSU2_TR(0x6adb1c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6adb1d:{NFSU2_TR(0x6adb1d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6adb1e:{NFSU2_TR(0x6adb1e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6adb21:L6adb21:{c.instructions+=14;NFSU2_TR(0x6adb21);
__builtin_memmove((R+28),(R+28),4);
}
B6adb23:{NFSU2_TR(0x6adb23);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6adb24:{NFSU2_TR(0x6adb24);
__builtin_memmove((R+20),(R+16),4);
}
B6adb26:{NFSU2_TR(0x6adb26);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6adb27:{NFSU2_TR(0x6adb27);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6adb2a:{NFSU2_TR(0x6adb2a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6adb2b:{NFSU2_TR(0x6adb2b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6adb2c:{NFSU2_TR(0x6adb2c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6adb2f:{NFSU2_TR(0x6adb2f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6adb30:{NFSU2_TR(0x6adb30);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6adb33:{NFSU2_TR(0x6adb33);
__builtin_memmove((R+24),(R+4),4);
}
B6adb35:{NFSU2_TR(0x6adb35);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6adb38:{NFSU2_TR(0x6adb38);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6adb39:{NFSU2_TR(0x6adb39);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6adb3eull));
TAIL_STATIC(0x6cc1edu,6cc);
}
B6adb3e:L6adb3e:{c.instructions+=2;NFSU2_TR(0x6adb3e);
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
B6adb40:{NFSU2_TR(0x6adb40);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6adb59;}}
}
B6adb42:L6adb42:{c.instructions+=4;NFSU2_TR(0x6adb42);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6adb45:{NFSU2_TR(0x6adb45);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6adb47:{NFSU2_TR(0x6adb47);
__builtin_memmove((R+4),(R+24),4);
}
B6adb49:{NFSU2_TR(0x6adb49);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6adb4cull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6adb4c:L6adb4c:{c.instructions+=2;NFSU2_TR(0x6adb4c);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x11ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6adb4f:{NFSU2_TR(0x6adb4f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6adb57;}}
}
B6adb51:L6adb51:{c.instructions+=1;NFSU2_TR(0x6adb51);
u8 U[4];
w4(U+0,u32(0x1ull));
s4(u32(r4(R+12)),r4(U+0));
}
B6adb57:L6adb57:{c.instructions+=1;NFSU2_TR(0x6adb57);
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
B6adb59:L6adb59:{c.instructions+=5;NFSU2_TR(0x6adb59);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6adb5a:{NFSU2_TR(0x6adb5a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6adb5b:{NFSU2_TR(0x6adb5b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6adb5c:{NFSU2_TR(0x6adb5c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6adb5d:{NFSU2_TR(0x6adb5d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6adb60:L6adb60:{c.instructions+=12;NFSU2_TR(0x6adb60);
__builtin_memmove((R+28),(R+28),4);
}
B6adb62:{NFSU2_TR(0x6adb62);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6adb63:{NFSU2_TR(0x6adb63);
__builtin_memmove((R+20),(R+16),4);
}
B6adb65:{NFSU2_TR(0x6adb65);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6adb66:{NFSU2_TR(0x6adb66);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6adb67:{NFSU2_TR(0x6adb67);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6adb68:{NFSU2_TR(0x6adb68);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6adb69:{NFSU2_TR(0x6adb69);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6adb6b:{NFSU2_TR(0x6adb6b);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6adb6e:{NFSU2_TR(0x6adb6e);
__builtin_memmove((R+24),(R+4),4);
}
B6adb70:{NFSU2_TR(0x6adb70);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6adb73:{NFSU2_TR(0x6adb73);
if(r1(R+518)){{goto L6adb81;}}
}
B6adb75:L6adb75:{c.instructions+=2;NFSU2_TR(0x6adb75);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0xf0000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6adb7c:{NFSU2_TR(0x6adb7c);
{goto L6adc02;}
}
B6adb81:L6adb81:{c.instructions+=6;NFSU2_TR(0x6adb81);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6adb84:{NFSU2_TR(0x6adb84);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6adb86:{NFSU2_TR(0x6adb86);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6adb89:{NFSU2_TR(0x6adb89);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6adb8c:{NFSU2_TR(0x6adb8c);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3dull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6adb90:{NFSU2_TR(0x6adb90);
if(r1(R+518)){{goto L6adb99;}}
}
B6adb92:L6adb92:{c.instructions+=1;NFSU2_TR(0x6adb92);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x100000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6adb99:L6adb99:{c.instructions+=2;NFSU2_TR(0x6adb99);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6adb9c:{NFSU2_TR(0x6adb9c);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6adc02;}}
}
B6adb9e:L6adb9e:{c.instructions+=8;NFSU2_TR(0x6adb9e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6adba1:{NFSU2_TR(0x6adba1);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6adba4:{NFSU2_TR(0x6adba4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6adba7:{NFSU2_TR(0x6adba7);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6adbaa:{NFSU2_TR(0x6adbaa);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6adbad:{NFSU2_TR(0x6adbad);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6adbaf:{NFSU2_TR(0x6adbaf);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+12))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6adbb1:{NFSU2_TR(0x6adbb1);
if(r1(R+518)){{goto L6adbd1;}}
}
B6adbb3:L6adbb3:{c.instructions+=2;NFSU2_TR(0x6adbb3);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6adbb4:{NFSU2_TR(0x6adbb4);
if(r1(R+518)){{goto L6adbca;}}
}
B6adbb6:L6adbb6:{c.instructions+=2;NFSU2_TR(0x6adbb6);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6adbb7:{NFSU2_TR(0x6adbb7);
if(r1(R+518)){{goto L6adbc3;}}
}
B6adbb9:L6adbb9:{c.instructions+=2;NFSU2_TR(0x6adbb9);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6adbba:{NFSU2_TR(0x6adbba);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6adbd6;}}
}
B6adbbc:L6adbbc:{c.instructions+=2;NFSU2_TR(0x6adbbc);
w4(R+12,u32(0x80000ull));
}
B6adbc1:{NFSU2_TR(0x6adbc1);
{goto L6adbd6;}
}
B6adbc3:L6adbc3:{c.instructions+=2;NFSU2_TR(0x6adbc3);
w4(R+12,u32(0x40000ull));
}
B6adbc8:{NFSU2_TR(0x6adbc8);
{goto L6adbd6;}
}
B6adbca:L6adbca:{c.instructions+=2;NFSU2_TR(0x6adbca);
w4(R+12,u32(0x20000ull));
}
B6adbcf:{NFSU2_TR(0x6adbcf);
{goto L6adbd6;}
}
B6adbd1:L6adbd1:{c.instructions+=1;NFSU2_TR(0x6adbd1);
w4(R+12,u32(0x10000ull));
}
B6adbd6:L6adbd6:{c.instructions+=3;NFSU2_TR(0x6adbd6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6adbd9:{NFSU2_TR(0x6adbd9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6adbdb:{NFSU2_TR(0x6adbdb);
if(r1(R+518)){{goto L6adbf9;}}
}
B6adbdd:L6adbdd:{c.instructions+=6;NFSU2_TR(0x6adbdd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6adbe3:{NFSU2_TR(0x6adbe3);
u8 U[4];
w4(U+0,u32(0x7bb22cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6adbe8:{NFSU2_TR(0x6adbe8);
u8 U[4];
w4(U+0,u32(0x12d5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6adbed:{NFSU2_TR(0x6adbed);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6adbf0:{NFSU2_TR(0x6adbf0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6adbf1:{NFSU2_TR(0x6adbf1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6adbf6ull));
TAIL_STATIC(0x69e936u,69e);
}
B6adbf6:L6adbf6:{c.instructions+=1;NFSU2_TR(0x6adbf6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B6adbf9:L6adbf9:{c.instructions+=4;NFSU2_TR(0x6adbf9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(r4(R+12))));
s4(u32(r4(U+0)),r4(U+4));
}
B6adbfc:{NFSU2_TR(0x6adbfc);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6adbfd:{NFSU2_TR(0x6adbfd);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B6adc00:{NFSU2_TR(0x6adc00);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6adb9eu);}goto L6adb9e;}}
}
B6adc02:L6adc02:{c.instructions+=2;NFSU2_TR(0x6adc02);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x40ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6adc06:{NFSU2_TR(0x6adc06);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6adc54;}}
}
B6adc08:L6adc08:{c.instructions+=2;NFSU2_TR(0x6adc08);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x20ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6adc0f:{NFSU2_TR(0x6adc0f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6adc50;}}
}
B6adc11:L6adc11:{c.instructions+=3;NFSU2_TR(0x6adc11);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6adc13:{NFSU2_TR(0x6adc13);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6adc16:{NFSU2_TR(0x6adc16);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6adc4e;}}
}
B6adc18:L6adc18:{c.instructions+=1;NFSU2_TR(0x6adc18);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6adc1b:L6adc1b:{c.instructions+=5;NFSU2_TR(0x6adc1b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6adc1e:{NFSU2_TR(0x6adc1e);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6adc21:{NFSU2_TR(0x6adc21);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6adc24:{NFSU2_TR(0x6adc24);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6adc28:{NFSU2_TR(0x6adc28);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6adc45;}}
}
B6adc2a:L6adc2a:{c.instructions+=5;NFSU2_TR(0x6adc2a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6adc2d:{NFSU2_TR(0x6adc2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6adc30:{NFSU2_TR(0x6adc30);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6adc33:{NFSU2_TR(0x6adc33);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6adc37:{NFSU2_TR(0x6adc37);
if(r1(R+518)){{goto L6adc4b;}}
}
B6adc39:L6adc39:{c.instructions+=2;NFSU2_TR(0x6adc39);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6adc3d:{NFSU2_TR(0x6adc3d);
if(r1(R+518)){{goto L6adc4b;}}
}
B6adc3f:L6adc3f:{c.instructions+=2;NFSU2_TR(0x6adc3f);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6adc43:{NFSU2_TR(0x6adc43);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6adc4b;}}
}
B6adc45:L6adc45:{c.instructions+=3;NFSU2_TR(0x6adc45);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6adc46:{NFSU2_TR(0x6adc46);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B6adc49:{NFSU2_TR(0x6adc49);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6adc1bu);}goto L6adc1b;}}
}
B6adc4b:L6adc4b:{c.instructions+=1;NFSU2_TR(0x6adc4b);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6adc4e:L6adc4e:{c.instructions+=1;NFSU2_TR(0x6adc4e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6adc54;}}
}
B6adc50:L6adc50:{c.instructions+=1;NFSU2_TR(0x6adc50);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))|u32(u8(0x20ull))));
s1(u32(r4(U+0)),r1(U+4));
}
B6adc54:L6adc54:{c.instructions+=2;NFSU2_TR(0x6adc54);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6adc5b:{NFSU2_TR(0x6adc5b);
if(r1(R+518)){{goto L6adc8e;}}
}
B6adc5d:L6adc5d:{c.instructions+=3;NFSU2_TR(0x6adc5d);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6adc5f:{NFSU2_TR(0x6adc5f);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x124ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6adc65:{NFSU2_TR(0x6adc65);
if(r1(R+518)){{goto L6adc8e;}}
}
B6adc67:L6adc67:{c.instructions+=2;NFSU2_TR(0x6adc67);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+4))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6adc6a:{NFSU2_TR(0x6adc6a);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6adc8e;}}
}
B6adc6c:L6adc6c:{c.instructions+=10;NFSU2_TR(0x6adc6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x128ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6adc72:{NFSU2_TR(0x6adc72);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6adc75:{NFSU2_TR(0x6adc75);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6adc78:{NFSU2_TR(0x6adc78);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x124ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6adc7e:{NFSU2_TR(0x6adc7e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6adc81:{NFSU2_TR(0x6adc81);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6adc84:{NFSU2_TR(0x6adc84);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6adc85:{NFSU2_TR(0x6adc85);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B6adc88:{NFSU2_TR(0x6adc88);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffff0ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+28),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6adc8c:{NFSU2_TR(0x6adc8c);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6adc6cu);}goto L6adc6c;}}
}
B6adc8e:L6adc8e:{c.instructions+=9;NFSU2_TR(0x6adc8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6adc91:{NFSU2_TR(0x6adc91);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6adc94:{NFSU2_TR(0x6adc94);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6adc95:{NFSU2_TR(0x6adc95);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6adc96:{NFSU2_TR(0x6adc96);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6adc98:{NFSU2_TR(0x6adc98);
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
B6adc9a:{NFSU2_TR(0x6adc9a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6adc9b:{NFSU2_TR(0x6adc9b);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6adc9c:{NFSU2_TR(0x6adc9c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6adc9f:L6adc9f:{c.instructions+=11;NFSU2_TR(0x6adc9f);
__builtin_memmove((R+28),(R+28),4);
}
B6adca1:{NFSU2_TR(0x6adca1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6adca2:{NFSU2_TR(0x6adca2);
__builtin_memmove((R+20),(R+16),4);
}
B6adca4:{NFSU2_TR(0x6adca4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6adca5:{NFSU2_TR(0x6adca5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6adca6:{NFSU2_TR(0x6adca6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6adca7:{NFSU2_TR(0x6adca7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6adcaa:{NFSU2_TR(0x6adcaa);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6adcad:{NFSU2_TR(0x6adcad);
__builtin_memmove((R+24),(R+4),4);
}
B6adcaf:{NFSU2_TR(0x6adcaf);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
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
B6adcb5:{NFSU2_TR(0x6adcb5);
if(r1(R+518)){{goto L6adcbf;}}
}
B6adcb7:L6adcb7:{c.instructions+=2;NFSU2_TR(0x6adcb7);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x84ull))));
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
B6adcbd:{NFSU2_TR(0x6adcbd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6adcde;}}
}
B6adcbf:L6adcbf:{c.instructions+=4;NFSU2_TR(0x6adcbf);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6adcc2:{NFSU2_TR(0x6adcc2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6adcc4:{NFSU2_TR(0x6adcc4);
__builtin_memmove((R+4),(R+24),4);
}
B6adcc6:{NFSU2_TR(0x6adcc6);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6adcc9ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6adcc9:L6adcc9:{c.instructions+=4;NFSU2_TR(0x6adcc9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6adcca:{NFSU2_TR(0x6adcca);
u8 U[4];
w4(U+0,u32(0x80b230ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6adccf:{NFSU2_TR(0x6adccf);
__builtin_memmove((R+4),(R+24),4);
}
B6adcd1:{NFSU2_TR(0x6adcd1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6adcd6ull));
TAIL_STATIC(0x6cd141u,6cd);
}
B6adcd6:L6adcd6:{c.instructions+=3;NFSU2_TR(0x6adcd6);
__builtin_memmove((R+12),(R+0),4);
}
B6adcd8:{NFSU2_TR(0x6adcd8);
u8 U[22];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0xffffffffull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0xffffffffull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6adcdc:{NFSU2_TR(0x6adcdc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6adcee;}}
}
B6adcde:L6adcde:{c.instructions+=5;NFSU2_TR(0x6adcde);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6adce1:{NFSU2_TR(0x6adce1);
__builtin_memmove((R+4),(R+24),4);
}
B6adce3:{NFSU2_TR(0x6adce3);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6adce6:{NFSU2_TR(0x6adce6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6adce7:{NFSU2_TR(0x6adce7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6adcecull));
TAIL_STATIC(0x69e8a4u,69e);
}
B6adcec:L6adcec:{c.instructions+=1;NFSU2_TR(0x6adcec);
{goto L6add20;}
}
B6adcee:L6adcee:{c.instructions+=4;NFSU2_TR(0x6adcee);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6adcf1:{NFSU2_TR(0x6adcf1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6adcf3:{NFSU2_TR(0x6adcf3);
__builtin_memmove((R+4),(R+24),4);
}
B6adcf5:{NFSU2_TR(0x6adcf5);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6adcf8ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6adcf8:L6adcf8:{c.instructions+=12;NFSU2_TR(0x6adcf8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6adcfb:{NFSU2_TR(0x6adcfb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6adcfe:{NFSU2_TR(0x6adcfe);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6adcff:{NFSU2_TR(0x6adcff);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B6add01:{NFSU2_TR(0x6add01);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6add04:{NFSU2_TR(0x6add04);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6add07:{NFSU2_TR(0x6add07);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B6add09:{NFSU2_TR(0x6add09);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6add0c:{NFSU2_TR(0x6add0c);
u8 U[4];
w4(U+0,u32(0x7b3d10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6add11:{NFSU2_TR(0x6add11);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6add12:{NFSU2_TR(0x6add12);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6add13:{NFSU2_TR(0x6add13);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6add18ull));
TAIL_STATIC(0x75e081u,75e);
}
B6add18:L6add18:{c.instructions+=2;NFSU2_TR(0x6add18);
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
B6add1b:{NFSU2_TR(0x6add1b);
u8 U[13];
w4(U+0,u32(u32(u32(0xffffffffull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
w1(U+12,u8(0x0ull));
s1(u32(r4(U+8)),r1(U+12));
}
B6add20:L6add20:{c.instructions+=5;NFSU2_TR(0x6add20);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6add21:{NFSU2_TR(0x6add21);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6add22:{NFSU2_TR(0x6add22);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6add23:{NFSU2_TR(0x6add23);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6add24:{NFSU2_TR(0x6add24);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6add27:L6add27:{c.instructions+=17;NFSU2_TR(0x6add27);
__builtin_memmove((R+28),(R+28),4);
}
B6add29:{NFSU2_TR(0x6add29);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6add2a:{NFSU2_TR(0x6add2a);
__builtin_memmove((R+20),(R+16),4);
}
B6add2c:{NFSU2_TR(0x6add2c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6add2f:{NFSU2_TR(0x6add2f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6add30:{NFSU2_TR(0x6add30);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6add33:{NFSU2_TR(0x6add33);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6add35:{NFSU2_TR(0x6add35);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6add38:{NFSU2_TR(0x6add38);
__builtin_memmove((R+8),(R+0),4);
}
B6add3a:{NFSU2_TR(0x6add3a);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffull))));
}
B6add3f:{NFSU2_TR(0x6add3f);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
w8(U+8,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
}
B6add43:{NFSU2_TR(0x6add43);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6add46:{NFSU2_TR(0x6add46);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6add49:{NFSU2_TR(0x6add49);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xfff00000ull))));
}
B6add4f:{NFSU2_TR(0x6add4f);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x11ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6add53:{NFSU2_TR(0x6add53);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6add54:{NFSU2_TR(0x6add54);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6addb6;}}
}
B6add56:L6add56:{c.instructions+=2;NFSU2_TR(0x6add56);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x30000000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6add5c:{NFSU2_TR(0x6add5c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6add6b;}}
}
B6add5e:L6add5e:{c.instructions+=2;NFSU2_TR(0x6add5e);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6add62:{NFSU2_TR(0x6add62);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6addb6;}}
}
B6add64:L6add64:{c.instructions+=2;NFSU2_TR(0x6add64);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6add66:{NFSU2_TR(0x6add66);
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
B6add67:L6add67:{c.instructions+=2;NFSU2_TR(0x6add67);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6add68:{NFSU2_TR(0x6add68);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6add6b:L6add6b:{c.instructions+=3;NFSU2_TR(0x6add6b);
w4(R+0,u32(0x73800000ull));
}
B6add70:{NFSU2_TR(0x6add70);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+8))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6add72:{NFSU2_TR(0x6add72);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6add96;}}
}
B6add74:L6add74:{c.instructions+=1;NFSU2_TR(0x6add74);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6add64u);}goto L6add64;}}
}
B6add76:L6add76:{c.instructions+=2;NFSU2_TR(0x6add76);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10f00000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6add7c:{NFSU2_TR(0x6add7c);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6add64u);}goto L6add64;}}
}
B6add7e:L6add7e:{c.instructions+=2;NFSU2_TR(0x6add7e);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x73500000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6add84:{NFSU2_TR(0x6add84);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6add64u);}goto L6add64;}}
}
B6add86:L6add86:{c.instructions+=2;NFSU2_TR(0x6add86);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x73600000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6add8c:{NFSU2_TR(0x6add8c);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6add64u);}goto L6add64;}}
}
B6add8e:L6add8e:{c.instructions+=2;NFSU2_TR(0x6add8e);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x73700000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6add94:{NFSU2_TR(0x6add94);
{goto L6addb4;}
}
B6add96:L6add96:{c.instructions+=2;NFSU2_TR(0x6add96);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x74400000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6add9c:{NFSU2_TR(0x6add9c);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6add64u);}goto L6add64;}}
}
B6add9e:L6add9e:{c.instructions+=2;NFSU2_TR(0x6add9e);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x74500000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6adda4:{NFSU2_TR(0x6adda4);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6add64u);}goto L6add64;}}
}
B6adda6:L6adda6:{c.instructions+=2;NFSU2_TR(0x6adda6);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x74600000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6addac:{NFSU2_TR(0x6addac);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6add64u);}goto L6add64;}}
}
B6addae:L6addae:{c.instructions+=1;NFSU2_TR(0x6addae);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x74700000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6addb4:L6addb4:{c.instructions+=1;NFSU2_TR(0x6addb4);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6add64u);}goto L6add64;}}
}
B6addb6:L6addb6:{c.instructions+=2;NFSU2_TR(0x6addb6);
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
B6addb8:{NFSU2_TR(0x6addb8);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6add67u);}goto L6add67;}
}
B6addba:L6addba:{c.instructions+=7;NFSU2_TR(0x6addba);
__builtin_memmove((R+28),(R+28),4);
}
B6addbc:{NFSU2_TR(0x6addbc);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6addbd:{NFSU2_TR(0x6addbd);
__builtin_memmove((R+20),(R+16),4);
}
B6addbf:{NFSU2_TR(0x6addbf);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6addc0:{NFSU2_TR(0x6addc0);
__builtin_memmove((R+24),(R+4),4);
}
B6addc2:{NFSU2_TR(0x6addc2);
u8 U[4];
w4(U+0,u32(0x7baf88ull));
s4(u32(r4(R+24)),r4(U+0));
}
B6addc8:{NFSU2_TR(0x6addc8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6addcdull));
TAIL_STATIC(0x6cd245u,6cd);
}
B6addcd:L6addcd:{c.instructions+=2;NFSU2_TR(0x6addcd);
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
B6addd1:{NFSU2_TR(0x6addd1);
if(r1(R+518)){{goto L6addda;}}
}
B6addd3:L6addd3:{c.instructions+=2;NFSU2_TR(0x6addd3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6addd4:{NFSU2_TR(0x6addd4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6addd9ull));
TAIL_STATIC(0x575630u,575);
}
B6addd9:L6addd9:{c.instructions+=1;NFSU2_TR(0x6addd9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6addda:L6addda:{c.instructions+=4;NFSU2_TR(0x6addda);
__builtin_memmove((R+0),(R+24),4);
}
B6adddc:{NFSU2_TR(0x6adddc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6adddd:{NFSU2_TR(0x6adddd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6addde:{NFSU2_TR(0x6addde);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6adde1:L6adde1:{c.instructions+=4;NFSU2_TR(0x6adde1);
__builtin_memmove((R+28),(R+28),4);
}
B6adde3:{NFSU2_TR(0x6adde3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6adde4:{NFSU2_TR(0x6adde4);
__builtin_memmove((R+24),(R+4),4);
}
B6adde6:{NFSU2_TR(0x6adde6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6addebull));
TAIL_STATIC(0x6c2060u,6c2);
}
B6addeb:L6addeb:{c.instructions+=2;NFSU2_TR(0x6addeb);
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
B6added:{NFSU2_TR(0x6added);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6addf7;}}
}
B6addef:L6addef:{c.instructions+=3;NFSU2_TR(0x6addef);
__builtin_memmove((R+4),(R+24),4);
}
B6addf1:{NFSU2_TR(0x6addf1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6addf2:{NFSU2_TR(0x6addf2);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ad108u);}goto L6ad108;}
}
B6addf7:L6addf7:{c.instructions+=2;NFSU2_TR(0x6addf7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6addf8:{NFSU2_TR(0x6addf8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6addf9:L6addf9:{c.instructions+=13;NFSU2_TR(0x6addf9);
__builtin_memmove((R+28),(R+28),4);
}
B6addfb:{NFSU2_TR(0x6addfb);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6addfc:{NFSU2_TR(0x6addfc);
__builtin_memmove((R+20),(R+16),4);
}
B6addfe:{NFSU2_TR(0x6addfe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x20ull))));
}
B6ade01:{NFSU2_TR(0x6ade01);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ade02:{NFSU2_TR(0x6ade02);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ade03:{NFSU2_TR(0x6ade03);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ade04:{NFSU2_TR(0x6ade04);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6ade06:{NFSU2_TR(0x6ade06);
__builtin_memmove((R+24),(R+4),4);
}
B6ade08:{NFSU2_TR(0x6ade08);
w4(R+12,u32(u32(r4(R+12))|u32(u32(0xffffffffull))));
}
B6ade0b:{NFSU2_TR(0x6ade0b);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ade0e:{NFSU2_TR(0x6ade0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ade11:{NFSU2_TR(0x6ade11);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6ae033u,6ae);}
}
B6ade17:L6ade17:{c.instructions+=6;NFSU2_TR(0x6ade17);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ade1a:{NFSU2_TR(0x6ade1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ade20:{NFSU2_TR(0x6ade20);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6ade23:{NFSU2_TR(0x6ade23);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ade29:{NFSU2_TR(0x6ade29);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+6,u16(u32(r2(U+4))&u32(u16(0xfff0ull))));
w1(R+518,u8((r2(U+6))==(u16(0x0ull))));
}
B6ade2f:{NFSU2_TR(0x6ade2f);
if(r1(R+518)){{goto L6adf88;}}
}
B6ade35:L6ade35:{c.instructions+=9;NFSU2_TR(0x6ade35);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6ade37:{NFSU2_TR(0x6ade37);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ade3a:{NFSU2_TR(0x6ade3a);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfffffull))));
}
B6ade40:{NFSU2_TR(0x6ade40);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6ade42:{NFSU2_TR(0x6ade42);
u8 U[56];
w8(U+0,u64(r4(R+4)));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x6ade42);w8(U+40,u64(u64(r8(U+32))/d_));}
w4(R+0,u32(r8(U+40)));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x6ade42);w8(U+48,u64(u64(r8(U+32))%d_));}
w4(R+8,u32(r8(U+48)));
}
B6ade44:{NFSU2_TR(0x6ade44);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6ade48:{NFSU2_TR(0x6ade48);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ade4a:{NFSU2_TR(0x6ade4a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ade4d:{NFSU2_TR(0x6ade4d);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6adf88;}}
}
B6ade53:L6ade53:{c.instructions+=5;NFSU2_TR(0x6ade53);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ade59:{NFSU2_TR(0x6ade59);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6ade5c:{NFSU2_TR(0x6ade5c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ade5d:{NFSU2_TR(0x6ade5d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6ade60:{NFSU2_TR(0x6ade60);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ade65ull));
TAIL_STATIC(0x698ed2u,698);
}
B6ade65:L6ade65:{c.instructions+=4;NFSU2_TR(0x6ade65);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6ade69:{NFSU2_TR(0x6ade69);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ade6b:{NFSU2_TR(0x6ade6b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ade6e:{NFSU2_TR(0x6ade6e);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6adf79;}}
}
B6ade74:L6ade74:{c.instructions+=12;NFSU2_TR(0x6ade74);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6ade77:{NFSU2_TR(0x6ade77);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ade7a:{NFSU2_TR(0x6ade7a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ade7d:{NFSU2_TR(0x6ade7d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ade80:{NFSU2_TR(0x6ade80);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B6ade83:{NFSU2_TR(0x6ade83);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6ade86:{NFSU2_TR(0x6ade86);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6ade89:{NFSU2_TR(0x6ade89);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ade8c:{NFSU2_TR(0x6ade8c);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6ade8f:{NFSU2_TR(0x6ade8f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ade92:{NFSU2_TR(0x6ade92);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x10ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6ade95:{NFSU2_TR(0x6ade95);
if(r1(R+518)){{goto L6adf76;}}
}
B6ade9b:L6ade9b:{c.instructions+=2;NFSU2_TR(0x6ade9b);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+5))&u32(u8(0x2ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6ade9e:{NFSU2_TR(0x6ade9e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6adf76;}}
}
B6adea4:L6adea4:{c.instructions+=4;NFSU2_TR(0x6adea4);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6adea7:{NFSU2_TR(0x6adea7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6adea9:{NFSU2_TR(0x6adea9);
__builtin_memmove((R+4),(R+24),4);
}
B6adeab:{NFSU2_TR(0x6adeab);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6adeaeull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6adeae:L6adeae:{c.instructions+=2;NFSU2_TR(0x6adeae);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x11ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6adeb1:{NFSU2_TR(0x6adeb1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6adf76;}}
}
B6adeb7:L6adeb7:{c.instructions+=2;NFSU2_TR(0x6adeb7);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6adebb:{NFSU2_TR(0x6adebb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6aded5;}}
}
B6adebd:L6adebd:{c.instructions+=5;NFSU2_TR(0x6adebd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6adec3:{NFSU2_TR(0x6adec3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6adec5:{NFSU2_TR(0x6adec5);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfff00000ull))));
}
B6adeca:{NFSU2_TR(0x6adeca);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x30000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6adecf:{NFSU2_TR(0x6adecf);
if(r1(R+518)){{goto L6adf76;}}
}
B6aded5:L6aded5:{c.instructions+=2;NFSU2_TR(0x6aded5);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6aded8:{NFSU2_TR(0x6aded8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6adf61;}}
}
B6adede:L6adede:{c.instructions+=3;NFSU2_TR(0x6adede);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6adee2:{NFSU2_TR(0x6adee2);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6adee6:{NFSU2_TR(0x6adee6);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6adf0d;}}
}
B6adee8:L6adee8:{c.instructions+=3;NFSU2_TR(0x6adee8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6adeee:{NFSU2_TR(0x6adeee);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6adef1:{NFSU2_TR(0x6adef1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6adef4:L6adef4:{c.instructions+=3;NFSU2_TR(0x6adef4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6adef6:{NFSU2_TR(0x6adef6);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6adef9:{NFSU2_TR(0x6adef9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6adf07;}}
}
B6adefb:L6adefb:{c.instructions+=3;NFSU2_TR(0x6adefb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6adefe:{NFSU2_TR(0x6adefe);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6adf01:{NFSU2_TR(0x6adf01);
if(r1(R+512)){{goto L6adf07;}}
}
B6adf03:L6adf03:{c.instructions+=2;NFSU2_TR(0x6adf03);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6adf04:{NFSU2_TR(0x6adf04);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6adf07:L6adf07:{c.instructions+=3;NFSU2_TR(0x6adf07);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B6adf0a:{NFSU2_TR(0x6adf0a);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
}
B6adf0b:{NFSU2_TR(0x6adf0b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6adef4u);}goto L6adef4;}}
}
B6adf0d:L6adf0d:{c.instructions+=9;NFSU2_TR(0x6adf0d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6adf0e:{NFSU2_TR(0x6adf0e);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B6adf10:{NFSU2_TR(0x6adf10);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6adf11:{NFSU2_TR(0x6adf11);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6adf14:{NFSU2_TR(0x6adf14);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6adf16:{NFSU2_TR(0x6adf16);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6adf19:{NFSU2_TR(0x6adf19);
__builtin_memmove((R+4),(R+24),4);
}
B6adf1b:{NFSU2_TR(0x6adf1b);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6adf21:{NFSU2_TR(0x6adf21);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6adf26ull));
TAIL_STATIC(0x699c39u,699);
}
B6adf26:L6adf26:{c.instructions+=3;NFSU2_TR(0x6adf26);
__builtin_memmove((R+12),(R+0),4);
}
B6adf28:{NFSU2_TR(0x6adf28);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B6adf2b:{NFSU2_TR(0x6adf2b);
if(r1(R+518)){TAIL_STATIC(0x6ae03au,6ae);}
}
B6adf31:L6adf31:{c.instructions+=6;NFSU2_TR(0x6adf31);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6adf34:{NFSU2_TR(0x6adf34);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6adf37:{NFSU2_TR(0x6adf37);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6adf3a:{NFSU2_TR(0x6adf3a);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+12));
}
B6adf3d:{NFSU2_TR(0x6adf3d);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6adf40:{NFSU2_TR(0x6adf40);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6adf45ull));
TAIL_STATIC(0x699821u,699);
}
B6adf45:L6adf45:{c.instructions+=8;NFSU2_TR(0x6adf45);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6adf48:{NFSU2_TR(0x6adf48);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6adf4b:{NFSU2_TR(0x6adf4b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6adf4f:{NFSU2_TR(0x6adf4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6adf52:{NFSU2_TR(0x6adf52);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6adf55:{NFSU2_TR(0x6adf55);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6adf58:{NFSU2_TR(0x6adf58);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6adf5e:{NFSU2_TR(0x6adf5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6adf61:L6adf61:{c.instructions+=6;NFSU2_TR(0x6adf61);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6adf64:{NFSU2_TR(0x6adf64);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6adf67:{NFSU2_TR(0x6adf67);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+12),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6adf6a:{NFSU2_TR(0x6adf6a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6adf6d:{NFSU2_TR(0x6adf6d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6adf70:{NFSU2_TR(0x6adf70);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ade74u);}goto L6ade74;}}
}
B6adf76:L6adf76:{c.instructions+=1;NFSU2_TR(0x6adf76);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6adf79:L6adf79:{c.instructions+=4;NFSU2_TR(0x6adf79);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6adf7c:{NFSU2_TR(0x6adf7c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6adf7f:{NFSU2_TR(0x6adf7f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6adf82:{NFSU2_TR(0x6adf82);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ade53u);}goto L6ade53;}}
}
B6adf88:L6adf88:{c.instructions+=4;NFSU2_TR(0x6adf88);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6adf89:{NFSU2_TR(0x6adf89);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B6adf8c:{NFSU2_TR(0x6adf8c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6adf8f:{NFSU2_TR(0x6adf8f);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ade17u);}goto L6ade17;}}
}
B6adf95:L6adf95:{c.instructions+=2;NFSU2_TR(0x6adf95);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6adf98:{NFSU2_TR(0x6adf98);
if(r1(R+518)){TAIL_STATIC(0x6ae033u,6ae);}
}
B6adf9e:L6adf9e:{c.instructions+=5;NFSU2_TR(0x6adf9e);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6adfa0:{NFSU2_TR(0x6adfa0);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6adfa2:{NFSU2_TR(0x6adfa2);
u8 U[4];
w4(U+0,u32(0x30000001ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6adfa7:{NFSU2_TR(0x6adfa7);
__builtin_memmove((R+4),(R+24),4);
}
B6adfa9:{NFSU2_TR(0x6adfa9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6adfaeull));
TAIL_STATIC(0x699c99u,699);
}
B6adfae:L6adfae:{c.instructions+=2;NFSU2_TR(0x6adfae);
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
B6adfb1:{NFSU2_TR(0x6adfb1);
if(r1(R+518)){TAIL_STATIC(0x6ae03au,6ae);}
}
B6adfb7:L6adfb7:{c.instructions+=5;NFSU2_TR(0x6adfb7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6adfba:{NFSU2_TR(0x6adfba);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6adfbd:{NFSU2_TR(0x6adfbd);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6adfc0:{NFSU2_TR(0x6adfc0);
__builtin_memmove((R+4),(R+28),4);
}
B6adfc2:{NFSU2_TR(0x6adfc2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6adfc7ull));
TAIL_STATIC(0x698eb3u,698);
}
B6adfc7:L6adfc7:{c.instructions+=15;NFSU2_TR(0x6adfc7);
__asm__ volatile(".byte 0xd9,0xe8":::"memory");
}
B6adfc9:{NFSU2_TR(0x6adfc9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6adfcc:{NFSU2_TR(0x6adfcc);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6adfcf:{NFSU2_TR(0x6adfcf);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6adfd0:{NFSU2_TR(0x6adfd0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6adfd1:{NFSU2_TR(0x6adfd1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6adfd3:{NFSU2_TR(0x6adfd3);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6adfd6:{NFSU2_TR(0x6adfd6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6adfd9:{NFSU2_TR(0x6adfd9);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6adfdb:{NFSU2_TR(0x6adfdb);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6adfdc:{NFSU2_TR(0x6adfdc);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6adfde:{NFSU2_TR(0x6adfde);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6adfdf:{NFSU2_TR(0x6adfdf);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6adfe2:{NFSU2_TR(0x6adfe2);
__builtin_memmove((R+4),(R+24),4);
}
B6adfe4:{NFSU2_TR(0x6adfe4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6adfe9ull));
TAIL_STATIC(0x699c39u,699);
}
B6adfe9:L6adfe9:{c.instructions+=10;NFSU2_TR(0x6adfe9);
{u32 ea_=u32(u32(8077672u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6adfef:{NFSU2_TR(0x6adfef);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6adff2:{NFSU2_TR(0x6adff2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6adff3:{NFSU2_TR(0x6adff3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6adff4:{NFSU2_TR(0x6adff4);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6adff7:{NFSU2_TR(0x6adff7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6adff8:{NFSU2_TR(0x6adff8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6adffb:{NFSU2_TR(0x6adffb);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6adffc:{NFSU2_TR(0x6adffc);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6adfff:{NFSU2_TR(0x6adfff);
__builtin_memmove((R+4),(R+24),4);
TAIL_STATIC(0x6ae001u,6ae);
}
XIT:NFSU2_TR_EXIT(0x6ad,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
