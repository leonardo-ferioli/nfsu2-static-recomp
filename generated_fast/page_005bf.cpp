#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_4fe(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_57c(u8* __restrict R,Cpu& c);
u32 body_5b7(u8* __restrict R,Cpu& c);
u32 body_5c0(u8* __restrict R,Cpu& c);
u32 body_5cd(u8* __restrict R,Cpu& c);
u32 body_5f0(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_75c(u8* __restrict R,Cpu& c);
u32 body_75d(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x5bf,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x5bf,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_5bf(u8* __restrict R,Cpu& c);
u32 page_5bf(Cpu& c){return body_5bf(c.regs.data(),c);}
__attribute__((noinline)) u32 body_5bf(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x5bf000:goto L5bf000;
case 0x5bf002:c.instructions+=6;goto B5bf002;
case 0x5bf007:c.instructions+=5;goto B5bf007;
case 0x5bf009:c.instructions+=4;goto B5bf009;
case 0x5bf00b:c.instructions+=3;goto B5bf00b;
case 0x5bf010:c.instructions+=2;goto B5bf010;
case 0x5bf011:c.instructions+=1;goto B5bf011;
case 0x5bf013:goto L5bf013;
case 0x5bf017:c.instructions+=7;goto B5bf017;
case 0x5bf019:c.instructions+=6;goto B5bf019;
case 0x5bf01e:c.instructions+=5;goto B5bf01e;
case 0x5bf020:c.instructions+=4;goto B5bf020;
case 0x5bf022:c.instructions+=3;goto B5bf022;
case 0x5bf027:c.instructions+=2;goto B5bf027;
case 0x5bf028:c.instructions+=1;goto B5bf028;
case 0x5bf02a:goto L5bf02a;
case 0x5bf02e:c.instructions+=7;goto B5bf02e;
case 0x5bf030:c.instructions+=6;goto B5bf030;
case 0x5bf035:c.instructions+=5;goto B5bf035;
case 0x5bf037:c.instructions+=4;goto B5bf037;
case 0x5bf039:c.instructions+=3;goto B5bf039;
case 0x5bf03e:c.instructions+=2;goto B5bf03e;
case 0x5bf03f:c.instructions+=1;goto B5bf03f;
case 0x5bf041:goto L5bf041;
case 0x5bf045:c.instructions+=7;goto B5bf045;
case 0x5bf047:c.instructions+=6;goto B5bf047;
case 0x5bf04c:c.instructions+=5;goto B5bf04c;
case 0x5bf04e:c.instructions+=4;goto B5bf04e;
case 0x5bf050:c.instructions+=3;goto B5bf050;
case 0x5bf055:c.instructions+=2;goto B5bf055;
case 0x5bf056:c.instructions+=1;goto B5bf056;
case 0x5bf058:goto L5bf058;
case 0x5bf05c:c.instructions+=7;goto B5bf05c;
case 0x5bf05e:c.instructions+=6;goto B5bf05e;
case 0x5bf063:c.instructions+=5;goto B5bf063;
case 0x5bf065:c.instructions+=4;goto B5bf065;
case 0x5bf067:c.instructions+=3;goto B5bf067;
case 0x5bf06c:c.instructions+=2;goto B5bf06c;
case 0x5bf06d:c.instructions+=1;goto B5bf06d;
case 0x5bf06f:goto L5bf06f;
case 0x5bf073:c.instructions+=7;goto B5bf073;
case 0x5bf075:c.instructions+=6;goto B5bf075;
case 0x5bf07a:c.instructions+=5;goto B5bf07a;
case 0x5bf07c:c.instructions+=4;goto B5bf07c;
case 0x5bf07e:c.instructions+=3;goto B5bf07e;
case 0x5bf083:c.instructions+=2;goto B5bf083;
case 0x5bf084:c.instructions+=1;goto B5bf084;
case 0x5bf086:goto L5bf086;
case 0x5bf08a:c.instructions+=7;goto B5bf08a;
case 0x5bf08c:c.instructions+=6;goto B5bf08c;
case 0x5bf091:c.instructions+=5;goto B5bf091;
case 0x5bf093:c.instructions+=4;goto B5bf093;
case 0x5bf095:c.instructions+=3;goto B5bf095;
case 0x5bf09a:c.instructions+=2;goto B5bf09a;
case 0x5bf09b:c.instructions+=1;goto B5bf09b;
case 0x5bf09d:goto L5bf09d;
case 0x5bf0a1:c.instructions+=7;goto B5bf0a1;
case 0x5bf0a3:c.instructions+=6;goto B5bf0a3;
case 0x5bf0a8:c.instructions+=5;goto B5bf0a8;
case 0x5bf0aa:c.instructions+=4;goto B5bf0aa;
case 0x5bf0ac:c.instructions+=3;goto B5bf0ac;
case 0x5bf0b1:c.instructions+=2;goto B5bf0b1;
case 0x5bf0b2:c.instructions+=1;goto B5bf0b2;
case 0x5bf0b4:goto L5bf0b4;
case 0x5bf0b8:c.instructions+=7;goto B5bf0b8;
case 0x5bf0ba:c.instructions+=6;goto B5bf0ba;
case 0x5bf0bf:c.instructions+=5;goto B5bf0bf;
case 0x5bf0c1:c.instructions+=4;goto B5bf0c1;
case 0x5bf0c3:c.instructions+=3;goto B5bf0c3;
case 0x5bf0c8:c.instructions+=2;goto B5bf0c8;
case 0x5bf0c9:c.instructions+=1;goto B5bf0c9;
case 0x5bf0cb:goto L5bf0cb;
case 0x5bf0cd:c.instructions+=7;goto B5bf0cd;
case 0x5bf0d1:c.instructions+=6;goto B5bf0d1;
case 0x5bf0d6:c.instructions+=5;goto B5bf0d6;
case 0x5bf0d8:c.instructions+=4;goto B5bf0d8;
case 0x5bf0da:c.instructions+=3;goto B5bf0da;
case 0x5bf0df:c.instructions+=2;goto B5bf0df;
case 0x5bf0e0:c.instructions+=1;goto B5bf0e0;
case 0x5bf0e2:goto L5bf0e2;
case 0x5bf0e6:c.instructions+=7;goto B5bf0e6;
case 0x5bf0e8:c.instructions+=6;goto B5bf0e8;
case 0x5bf0ed:c.instructions+=5;goto B5bf0ed;
case 0x5bf0ef:c.instructions+=4;goto B5bf0ef;
case 0x5bf0f1:c.instructions+=3;goto B5bf0f1;
case 0x5bf0f6:c.instructions+=2;goto B5bf0f6;
case 0x5bf0f7:c.instructions+=1;goto B5bf0f7;
case 0x5bf0f9:goto L5bf0f9;
case 0x5bf0fd:c.instructions+=7;goto B5bf0fd;
case 0x5bf0ff:c.instructions+=6;goto B5bf0ff;
case 0x5bf104:c.instructions+=5;goto B5bf104;
case 0x5bf106:c.instructions+=4;goto B5bf106;
case 0x5bf108:c.instructions+=3;goto B5bf108;
case 0x5bf10d:c.instructions+=2;goto B5bf10d;
case 0x5bf10e:c.instructions+=1;goto B5bf10e;
case 0x5bf110:goto L5bf110;
case 0x5bf114:c.instructions+=7;goto B5bf114;
case 0x5bf116:c.instructions+=6;goto B5bf116;
case 0x5bf11b:c.instructions+=5;goto B5bf11b;
case 0x5bf11d:c.instructions+=4;goto B5bf11d;
case 0x5bf11f:c.instructions+=3;goto B5bf11f;
case 0x5bf124:c.instructions+=2;goto B5bf124;
case 0x5bf125:c.instructions+=1;goto B5bf125;
case 0x5bf127:goto L5bf127;
case 0x5bf12b:c.instructions+=7;goto B5bf12b;
case 0x5bf12d:c.instructions+=6;goto B5bf12d;
case 0x5bf132:c.instructions+=5;goto B5bf132;
case 0x5bf134:c.instructions+=4;goto B5bf134;
case 0x5bf136:c.instructions+=3;goto B5bf136;
case 0x5bf13b:c.instructions+=2;goto B5bf13b;
case 0x5bf13c:c.instructions+=1;goto B5bf13c;
case 0x5bf13e:goto L5bf13e;
case 0x5bf142:c.instructions+=7;goto B5bf142;
case 0x5bf144:c.instructions+=6;goto B5bf144;
case 0x5bf149:c.instructions+=5;goto B5bf149;
case 0x5bf14b:c.instructions+=4;goto B5bf14b;
case 0x5bf14d:c.instructions+=3;goto B5bf14d;
case 0x5bf152:c.instructions+=2;goto B5bf152;
case 0x5bf153:c.instructions+=1;goto B5bf153;
case 0x5bf155:goto L5bf155;
case 0x5bf159:c.instructions+=7;goto B5bf159;
case 0x5bf15b:c.instructions+=6;goto B5bf15b;
case 0x5bf160:c.instructions+=5;goto B5bf160;
case 0x5bf162:c.instructions+=4;goto B5bf162;
case 0x5bf164:c.instructions+=3;goto B5bf164;
case 0x5bf169:c.instructions+=2;goto B5bf169;
case 0x5bf16a:c.instructions+=1;goto B5bf16a;
case 0x5bf16c:goto L5bf16c;
case 0x5bf170:c.instructions+=7;goto B5bf170;
case 0x5bf172:c.instructions+=6;goto B5bf172;
case 0x5bf177:c.instructions+=5;goto B5bf177;
case 0x5bf179:c.instructions+=4;goto B5bf179;
case 0x5bf17b:c.instructions+=3;goto B5bf17b;
case 0x5bf180:c.instructions+=2;goto B5bf180;
case 0x5bf181:c.instructions+=1;goto B5bf181;
case 0x5bf183:goto L5bf183;
case 0x5bf187:c.instructions+=7;goto B5bf187;
case 0x5bf189:c.instructions+=6;goto B5bf189;
case 0x5bf18e:c.instructions+=5;goto B5bf18e;
case 0x5bf190:c.instructions+=4;goto B5bf190;
case 0x5bf192:c.instructions+=3;goto B5bf192;
case 0x5bf197:c.instructions+=2;goto B5bf197;
case 0x5bf198:c.instructions+=1;goto B5bf198;
case 0x5bf19a:goto L5bf19a;
case 0x5bf19e:c.instructions+=2;goto B5bf19e;
case 0x5bf19f:c.instructions+=1;goto B5bf19f;
case 0x5bf1a5:goto L5bf1a5;
case 0x5bf1a6:c.instructions+=2;goto B5bf1a6;
case 0x5bf1a7:c.instructions+=1;goto B5bf1a7;
case 0x5bf1b0:goto L5bf1b0;
case 0x5bf1b6:c.instructions+=4;goto B5bf1b6;
case 0x5bf1b8:c.instructions+=3;goto B5bf1b8;
case 0x5bf1bb:c.instructions+=2;goto B5bf1bb;
case 0x5bf1be:c.instructions+=1;goto B5bf1be;
case 0x5bf1c0:goto L5bf1c0;
case 0x5bf1c3:c.instructions+=9;goto B5bf1c3;
case 0x5bf1c4:c.instructions+=8;goto B5bf1c4;
case 0x5bf1ca:c.instructions+=7;goto B5bf1ca;
case 0x5bf1cc:c.instructions+=6;goto B5bf1cc;
case 0x5bf1ce:c.instructions+=5;goto B5bf1ce;
case 0x5bf1d0:c.instructions+=4;goto B5bf1d0;
case 0x5bf1d2:c.instructions+=3;goto B5bf1d2;
case 0x5bf1d6:c.instructions+=2;goto B5bf1d6;
case 0x5bf1d7:c.instructions+=1;goto B5bf1d7;
case 0x5bf1d9:goto L5bf1d9;
case 0x5bf1de:c.instructions+=1;goto B5bf1de;
case 0x5bf1e0:goto L5bf1e0;
case 0x5bf1e5:c.instructions+=2;goto B5bf1e5;
case 0x5bf1e7:c.instructions+=1;goto B5bf1e7;
case 0x5bf1e9:goto L5bf1e9;
case 0x5bf1f3:goto L5bf1f3;
case 0x5bf1f5:c.instructions+=1;goto B5bf1f5;
case 0x5bf1fb:goto L5bf1fb;
case 0x5bf1ff:c.instructions+=3;goto B5bf1ff;
case 0x5bf200:c.instructions+=2;goto B5bf200;
case 0x5bf203:c.instructions+=1;goto B5bf203;
case 0x5bf204:goto L5bf204;
case 0x5bf209:c.instructions+=1;goto B5bf209;
case 0x5bf20e:goto L5bf20e;
case 0x5bf210:c.instructions+=1;goto B5bf210;
case 0x5bf212:goto L5bf212;
case 0x5bf217:c.instructions+=2;goto B5bf217;
case 0x5bf219:c.instructions+=1;goto B5bf219;
case 0x5bf21b:goto L5bf21b;
case 0x5bf21d:c.instructions+=6;goto B5bf21d;
case 0x5bf21f:c.instructions+=5;goto B5bf21f;
case 0x5bf221:c.instructions+=4;goto B5bf221;
case 0x5bf223:c.instructions+=3;goto B5bf223;
case 0x5bf227:c.instructions+=2;goto B5bf227;
case 0x5bf228:c.instructions+=1;goto B5bf228;
case 0x5bf22a:goto L5bf22a;
case 0x5bf22c:goto L5bf22c;
case 0x5bf22e:c.instructions+=5;goto B5bf22e;
case 0x5bf230:c.instructions+=4;goto B5bf230;
case 0x5bf232:c.instructions+=3;goto B5bf232;
case 0x5bf236:c.instructions+=2;goto B5bf236;
case 0x5bf237:c.instructions+=1;goto B5bf237;
case 0x5bf23d:goto L5bf23d;
case 0x5bf23f:c.instructions+=1;goto B5bf23f;
case 0x5bf241:goto L5bf241;
case 0x5bf245:c.instructions+=2;goto B5bf245;
case 0x5bf246:c.instructions+=1;goto B5bf246;
case 0x5bf24c:goto L5bf24c;
case 0x5bf250:c.instructions+=2;goto B5bf250;
case 0x5bf251:c.instructions+=1;goto B5bf251;
case 0x5bf257:goto L5bf257;
case 0x5bf25b:c.instructions+=3;goto B5bf25b;
case 0x5bf25c:c.instructions+=2;goto B5bf25c;
case 0x5bf25f:c.instructions+=1;goto B5bf25f;
case 0x5bf260:goto L5bf260;
case 0x5bf263:c.instructions+=58;goto B5bf263;
case 0x5bf267:c.instructions+=57;goto B5bf267;
case 0x5bf26c:c.instructions+=56;goto B5bf26c;
case 0x5bf271:c.instructions+=55;goto B5bf271;
case 0x5bf276:c.instructions+=54;goto B5bf276;
case 0x5bf27b:c.instructions+=53;goto B5bf27b;
case 0x5bf280:c.instructions+=52;goto B5bf280;
case 0x5bf285:c.instructions+=51;goto B5bf285;
case 0x5bf28a:c.instructions+=50;goto B5bf28a;
case 0x5bf28f:c.instructions+=49;goto B5bf28f;
case 0x5bf294:c.instructions+=48;goto B5bf294;
case 0x5bf299:c.instructions+=47;goto B5bf299;
case 0x5bf29e:c.instructions+=46;goto B5bf29e;
case 0x5bf2a3:c.instructions+=45;goto B5bf2a3;
case 0x5bf2a8:c.instructions+=44;goto B5bf2a8;
case 0x5bf2ad:c.instructions+=43;goto B5bf2ad;
case 0x5bf2b2:c.instructions+=42;goto B5bf2b2;
case 0x5bf2b7:c.instructions+=41;goto B5bf2b7;
case 0x5bf2bc:c.instructions+=40;goto B5bf2bc;
case 0x5bf2c1:c.instructions+=39;goto B5bf2c1;
case 0x5bf2c6:c.instructions+=38;goto B5bf2c6;
case 0x5bf2cb:c.instructions+=37;goto B5bf2cb;
case 0x5bf2d0:c.instructions+=36;goto B5bf2d0;
case 0x5bf2d5:c.instructions+=35;goto B5bf2d5;
case 0x5bf2da:c.instructions+=34;goto B5bf2da;
case 0x5bf2df:c.instructions+=33;goto B5bf2df;
case 0x5bf2e4:c.instructions+=32;goto B5bf2e4;
case 0x5bf2e9:c.instructions+=31;goto B5bf2e9;
case 0x5bf2ee:c.instructions+=30;goto B5bf2ee;
case 0x5bf2f3:c.instructions+=29;goto B5bf2f3;
case 0x5bf2f8:c.instructions+=28;goto B5bf2f8;
case 0x5bf2fd:c.instructions+=27;goto B5bf2fd;
case 0x5bf302:c.instructions+=26;goto B5bf302;
case 0x5bf307:c.instructions+=25;goto B5bf307;
case 0x5bf30c:c.instructions+=24;goto B5bf30c;
case 0x5bf311:c.instructions+=23;goto B5bf311;
case 0x5bf316:c.instructions+=22;goto B5bf316;
case 0x5bf31b:c.instructions+=21;goto B5bf31b;
case 0x5bf320:c.instructions+=20;goto B5bf320;
case 0x5bf325:c.instructions+=19;goto B5bf325;
case 0x5bf32a:c.instructions+=18;goto B5bf32a;
case 0x5bf32f:c.instructions+=17;goto B5bf32f;
case 0x5bf334:c.instructions+=16;goto B5bf334;
case 0x5bf339:c.instructions+=15;goto B5bf339;
case 0x5bf33e:c.instructions+=14;goto B5bf33e;
case 0x5bf343:c.instructions+=13;goto B5bf343;
case 0x5bf348:c.instructions+=12;goto B5bf348;
case 0x5bf34d:c.instructions+=11;goto B5bf34d;
case 0x5bf352:c.instructions+=10;goto B5bf352;
case 0x5bf357:c.instructions+=9;goto B5bf357;
case 0x5bf35c:c.instructions+=8;goto B5bf35c;
case 0x5bf361:c.instructions+=7;goto B5bf361;
case 0x5bf366:c.instructions+=6;goto B5bf366;
case 0x5bf36b:c.instructions+=5;goto B5bf36b;
case 0x5bf370:c.instructions+=4;goto B5bf370;
case 0x5bf375:c.instructions+=3;goto B5bf375;
case 0x5bf37a:c.instructions+=2;goto B5bf37a;
case 0x5bf37c:c.instructions+=1;goto B5bf37c;
case 0x5bf380:goto L5bf380;
case 0x5bf384:c.instructions+=1;goto B5bf384;
case 0x5bf386:goto L5bf386;
case 0x5bf387:c.instructions+=2;goto B5bf387;
case 0x5bf38a:c.instructions+=1;goto B5bf38a;
case 0x5bf38c:goto L5bf38c;
case 0x5bf38e:c.instructions+=2;goto B5bf38e;
case 0x5bf391:c.instructions+=1;goto B5bf391;
case 0x5bf392:goto L5bf392;
case 0x5bf394:c.instructions+=2;goto B5bf394;
case 0x5bf397:c.instructions+=1;goto B5bf397;
case 0x5bf3a0:goto L5bf3a0;
case 0x5bf3a5:c.instructions+=2;goto B5bf3a5;
case 0x5bf3a7:c.instructions+=1;goto B5bf3a7;
case 0x5bf3a9:goto L5bf3a9;
case 0x5bf3ad:c.instructions+=5;goto B5bf3ad;
case 0x5bf3b2:c.instructions+=4;goto B5bf3b2;
case 0x5bf3b4:c.instructions+=3;goto B5bf3b4;
case 0x5bf3ba:c.instructions+=2;goto B5bf3ba;
case 0x5bf3bc:c.instructions+=1;goto B5bf3bc;
case 0x5bf3be:goto L5bf3be;
case 0x5bf3c0:goto L5bf3c0;
case 0x5bf3c2:c.instructions+=5;goto B5bf3c2;
case 0x5bf3c4:c.instructions+=4;goto B5bf3c4;
case 0x5bf3c7:c.instructions+=3;goto B5bf3c7;
case 0x5bf3c8:c.instructions+=2;goto B5bf3c8;
case 0x5bf3ca:c.instructions+=1;goto B5bf3ca;
case 0x5bf3cf:goto L5bf3cf;
case 0x5bf3d0:goto L5bf3d0;
case 0x5bf3d1:c.instructions+=3;goto B5bf3d1;
case 0x5bf3d2:c.instructions+=2;goto B5bf3d2;
case 0x5bf3d7:c.instructions+=1;goto B5bf3d7;
case 0x5bf3dc:goto L5bf3dc;
case 0x5bf3de:c.instructions+=4;goto B5bf3de;
case 0x5bf3e0:c.instructions+=3;goto B5bf3e0;
case 0x5bf3e3:c.instructions+=2;goto B5bf3e3;
case 0x5bf3e5:c.instructions+=1;goto B5bf3e5;
case 0x5bf3e7:goto L5bf3e7;
case 0x5bf3e9:c.instructions+=3;goto B5bf3e9;
case 0x5bf3ea:c.instructions+=2;goto B5bf3ea;
case 0x5bf3eb:c.instructions+=1;goto B5bf3eb;
case 0x5bf3ec:goto L5bf3ec;
case 0x5bf3f1:c.instructions+=11;goto B5bf3f1;
case 0x5bf3f5:c.instructions+=10;goto B5bf3f5;
case 0x5bf3f6:c.instructions+=9;goto B5bf3f6;
case 0x5bf3f7:c.instructions+=8;goto B5bf3f7;
case 0x5bf3fd:c.instructions+=7;goto B5bf3fd;
case 0x5bf3ff:c.instructions+=6;goto B5bf3ff;
case 0x5bf403:c.instructions+=5;goto B5bf403;
case 0x5bf405:c.instructions+=4;goto B5bf405;
case 0x5bf409:c.instructions+=3;goto B5bf409;
case 0x5bf40d:c.instructions+=2;goto B5bf40d;
case 0x5bf410:c.instructions+=1;goto B5bf410;
case 0x5bf411:goto L5bf411;
case 0x5bf414:c.instructions+=3;goto B5bf414;
case 0x5bf415:c.instructions+=2;goto B5bf415;
case 0x5bf417:c.instructions+=1;goto B5bf417;
case 0x5bf419:goto L5bf419;
case 0x5bf41e:c.instructions+=5;goto B5bf41e;
case 0x5bf420:c.instructions+=4;goto B5bf420;
case 0x5bf426:c.instructions+=3;goto B5bf426;
case 0x5bf427:c.instructions+=2;goto B5bf427;
case 0x5bf42a:c.instructions+=1;goto B5bf42a;
case 0x5bf42f:goto L5bf42f;
case 0x5bf433:c.instructions+=5;goto B5bf433;
case 0x5bf435:c.instructions+=4;goto B5bf435;
case 0x5bf436:c.instructions+=3;goto B5bf436;
case 0x5bf439:c.instructions+=2;goto B5bf439;
case 0x5bf43f:c.instructions+=1;goto B5bf43f;
case 0x5bf444:goto L5bf444;
case 0x5bf447:c.instructions+=6;goto B5bf447;
case 0x5bf448:c.instructions+=5;goto B5bf448;
case 0x5bf44a:c.instructions+=4;goto B5bf44a;
case 0x5bf44b:c.instructions+=3;goto B5bf44b;
case 0x5bf44c:c.instructions+=2;goto B5bf44c;
case 0x5bf44d:c.instructions+=1;goto B5bf44d;
case 0x5bf450:goto L5bf450;
case 0x5bf453:c.instructions+=8;goto B5bf453;
case 0x5bf454:c.instructions+=7;goto B5bf454;
case 0x5bf455:c.instructions+=6;goto B5bf455;
case 0x5bf456:c.instructions+=5;goto B5bf456;
case 0x5bf457:c.instructions+=4;goto B5bf457;
case 0x5bf459:c.instructions+=3;goto B5bf459;
case 0x5bf45e:c.instructions+=2;goto B5bf45e;
case 0x5bf462:c.instructions+=1;goto B5bf462;
case 0x5bf468:goto L5bf468;
case 0x5bf46a:c.instructions+=4;goto B5bf46a;
case 0x5bf46f:c.instructions+=3;goto B5bf46f;
case 0x5bf473:c.instructions+=2;goto B5bf473;
case 0x5bf477:c.instructions+=1;goto B5bf477;
case 0x5bf47c:goto L5bf47c;
case 0x5bf47e:c.instructions+=4;goto B5bf47e;
case 0x5bf481:c.instructions+=3;goto B5bf481;
case 0x5bf483:c.instructions+=2;goto B5bf483;
case 0x5bf48a:c.instructions+=1;goto B5bf48a;
case 0x5bf490:goto L5bf490;
case 0x5bf494:c.instructions+=1;goto B5bf494;
case 0x5bf496:goto L5bf496;
case 0x5bf499:c.instructions+=4;goto B5bf499;
case 0x5bf49a:c.instructions+=3;goto B5bf49a;
case 0x5bf49f:c.instructions+=2;goto B5bf49f;
case 0x5bf4a0:c.instructions+=1;goto B5bf4a0;
case 0x5bf4a5:goto L5bf4a5;
case 0x5bf4a8:c.instructions+=2;goto B5bf4a8;
case 0x5bf4a9:c.instructions+=1;goto B5bf4a9;
case 0x5bf4af:goto L5bf4af;
case 0x5bf4b2:c.instructions+=1;goto B5bf4b2;
case 0x5bf4b4:goto L5bf4b4;
case 0x5bf4ba:c.instructions+=2;goto B5bf4ba;
case 0x5bf4bc:c.instructions+=1;goto B5bf4bc;
case 0x5bf4be:goto L5bf4be;
case 0x5bf4c1:c.instructions+=1;goto B5bf4c1;
case 0x5bf4c3:goto L5bf4c3;
case 0x5bf4c7:c.instructions+=2;goto B5bf4c7;
case 0x5bf4c8:c.instructions+=1;goto B5bf4c8;
case 0x5bf4cd:goto L5bf4cd;
case 0x5bf4d0:c.instructions+=2;goto B5bf4d0;
case 0x5bf4d2:c.instructions+=1;goto B5bf4d2;
case 0x5bf4d4:goto L5bf4d4;
case 0x5bf4d6:c.instructions+=5;goto B5bf4d6;
case 0x5bf4d8:c.instructions+=4;goto B5bf4d8;
case 0x5bf4d9:c.instructions+=3;goto B5bf4d9;
case 0x5bf4dc:c.instructions+=2;goto B5bf4dc;
case 0x5bf4e0:c.instructions+=1;goto B5bf4e0;
case 0x5bf4e2:goto L5bf4e2;
case 0x5bf4e6:c.instructions+=1;goto B5bf4e6;
case 0x5bf4e8:goto L5bf4e8;
case 0x5bf4ed:goto L5bf4ed;
case 0x5bf4ee:c.instructions+=1;goto B5bf4ee;
case 0x5bf4f3:goto L5bf4f3;
case 0x5bf4f6:c.instructions+=2;goto B5bf4f6;
case 0x5bf4f8:c.instructions+=1;goto B5bf4f8;
case 0x5bf4fa:goto L5bf4fa;
case 0x5bf500:c.instructions+=5;goto B5bf500;
case 0x5bf506:c.instructions+=4;goto B5bf506;
case 0x5bf50d:c.instructions+=3;goto B5bf50d;
case 0x5bf514:c.instructions+=2;goto B5bf514;
case 0x5bf51b:c.instructions+=1;goto B5bf51b;
case 0x5bf520:goto L5bf520;
case 0x5bf521:c.instructions+=6;goto B5bf521;
case 0x5bf522:c.instructions+=5;goto B5bf522;
case 0x5bf523:c.instructions+=4;goto B5bf523;
case 0x5bf525:c.instructions+=3;goto B5bf525;
case 0x5bf526:c.instructions+=2;goto B5bf526;
case 0x5bf529:c.instructions+=1;goto B5bf529;
case 0x5bf52a:goto L5bf52a;
case 0x5bf531:goto L5bf531;
case 0x5bf532:c.instructions+=6;goto B5bf532;
case 0x5bf533:c.instructions+=5;goto B5bf533;
case 0x5bf534:c.instructions+=4;goto B5bf534;
case 0x5bf536:c.instructions+=3;goto B5bf536;
case 0x5bf537:c.instructions+=2;goto B5bf537;
case 0x5bf53a:c.instructions+=1;goto B5bf53a;
case 0x5bf540:goto L5bf540;
case 0x5bf545:c.instructions+=2;goto B5bf545;
case 0x5bf547:c.instructions+=1;goto B5bf547;
case 0x5bf549:goto L5bf549;
case 0x5bf54e:goto L5bf54e;
case 0x5bf550:c.instructions+=1;goto B5bf550;
case 0x5bf552:goto L5bf552;
case 0x5bf55c:c.instructions+=1;goto B5bf55c;
case 0x5bf55e:goto L5bf55e;
case 0x5bf560:goto L5bf560;
case 0x5bf56a:goto L5bf56a;
case 0x5bf570:c.instructions+=2;goto B5bf570;
case 0x5bf572:c.instructions+=1;goto B5bf572;
case 0x5bf574:goto L5bf574;
case 0x5bf576:goto L5bf576;
case 0x5bf577:goto L5bf577;
case 0x5bf579:c.instructions+=3;goto B5bf579;
case 0x5bf57e:c.instructions+=2;goto B5bf57e;
case 0x5bf57f:c.instructions+=1;goto B5bf57f;
case 0x5bf584:goto L5bf584;
case 0x5bf587:c.instructions+=2;goto B5bf587;
case 0x5bf589:c.instructions+=1;goto B5bf589;
case 0x5bf58b:goto L5bf58b;
case 0x5bf595:c.instructions+=1;goto B5bf595;
case 0x5bf5a0:goto L5bf5a0;
case 0x5bf5a1:c.instructions+=9;goto B5bf5a1;
case 0x5bf5a3:c.instructions+=8;goto B5bf5a3;
case 0x5bf5a6:c.instructions+=7;goto B5bf5a6;
case 0x5bf5ac:c.instructions+=6;goto B5bf5ac;
case 0x5bf5ad:c.instructions+=5;goto B5bf5ad;
case 0x5bf5b3:c.instructions+=4;goto B5bf5b3;
case 0x5bf5b4:c.instructions+=3;goto B5bf5b4;
case 0x5bf5b6:c.instructions+=2;goto B5bf5b6;
case 0x5bf5bb:c.instructions+=1;goto B5bf5bb;
case 0x5bf5bf:goto L5bf5bf;
case 0x5bf5c1:goto L5bf5c1;
case 0x5bf5c5:c.instructions+=3;goto B5bf5c5;
case 0x5bf5c6:c.instructions+=2;goto B5bf5c6;
case 0x5bf5ce:c.instructions+=1;goto B5bf5ce;
case 0x5bf5d0:goto L5bf5d0;
case 0x5bf5d2:c.instructions+=1;goto B5bf5d2;
case 0x5bf5d4:goto L5bf5d4;
case 0x5bf5d8:c.instructions+=3;goto B5bf5d8;
case 0x5bf5d9:c.instructions+=2;goto B5bf5d9;
case 0x5bf5e1:c.instructions+=1;goto B5bf5e1;
case 0x5bf5e3:goto L5bf5e3;
case 0x5bf5e5:c.instructions+=1;goto B5bf5e5;
case 0x5bf5e7:goto L5bf5e7;
case 0x5bf5eb:c.instructions+=2;goto B5bf5eb;
case 0x5bf5ec:c.instructions+=1;goto B5bf5ec;
case 0x5bf5ee:goto L5bf5ee;
case 0x5bf5ef:goto L5bf5ef;
case 0x5bf5f1:c.instructions+=5;goto B5bf5f1;
case 0x5bf5f2:c.instructions+=4;goto B5bf5f2;
case 0x5bf5f3:c.instructions+=3;goto B5bf5f3;
case 0x5bf5f5:c.instructions+=2;goto B5bf5f5;
case 0x5bf5f6:c.instructions+=1;goto B5bf5f6;
case 0x5bf5f7:goto L5bf5f7;
case 0x5bf5f8:c.instructions+=5;goto B5bf5f8;
case 0x5bf5fd:c.instructions+=4;goto B5bf5fd;
case 0x5bf5fe:c.instructions+=3;goto B5bf5fe;
case 0x5bf600:c.instructions+=2;goto B5bf600;
case 0x5bf601:c.instructions+=1;goto B5bf601;
case 0x5bf610:goto L5bf610;
case 0x5bf615:c.instructions+=2;goto B5bf615;
case 0x5bf618:c.instructions+=1;goto B5bf618;
case 0x5bf61e:goto L5bf61e;
case 0x5bf625:goto L5bf625;
case 0x5bf629:c.instructions+=4;goto B5bf629;
case 0x5bf62d:c.instructions+=3;goto B5bf62d;
case 0x5bf633:c.instructions+=2;goto B5bf633;
case 0x5bf639:c.instructions+=1;goto B5bf639;
case 0x5bf63c:goto L5bf63c;
case 0x5bf640:c.instructions+=4;goto B5bf640;
case 0x5bf644:c.instructions+=3;goto B5bf644;
case 0x5bf64a:c.instructions+=2;goto B5bf64a;
case 0x5bf650:c.instructions+=1;goto B5bf650;
case 0x5bf653:goto L5bf653;
case 0x5bf657:c.instructions+=4;goto B5bf657;
case 0x5bf65b:c.instructions+=3;goto B5bf65b;
case 0x5bf661:c.instructions+=2;goto B5bf661;
case 0x5bf667:c.instructions+=1;goto B5bf667;
case 0x5bf66a:goto L5bf66a;
case 0x5bf66e:c.instructions+=4;goto B5bf66e;
case 0x5bf672:c.instructions+=3;goto B5bf672;
case 0x5bf678:c.instructions+=2;goto B5bf678;
case 0x5bf67e:c.instructions+=1;goto B5bf67e;
case 0x5bf681:goto L5bf681;
case 0x5bf685:c.instructions+=4;goto B5bf685;
case 0x5bf689:c.instructions+=3;goto B5bf689;
case 0x5bf68f:c.instructions+=2;goto B5bf68f;
case 0x5bf695:c.instructions+=1;goto B5bf695;
case 0x5bf698:goto L5bf698;
case 0x5bf69c:c.instructions+=3;goto B5bf69c;
case 0x5bf6a0:c.instructions+=2;goto B5bf6a0;
case 0x5bf6a6:c.instructions+=1;goto B5bf6a6;
case 0x5bf6ac:goto L5bf6ac;
case 0x5bf6d0:goto L5bf6d0;
case 0x5bf6d5:c.instructions+=3;goto B5bf6d5;
case 0x5bf6d7:c.instructions+=2;goto B5bf6d7;
case 0x5bf6da:c.instructions+=1;goto B5bf6da;
case 0x5bf6e0:goto L5bf6e0;
case 0x5bf6e5:c.instructions+=4;goto B5bf6e5;
case 0x5bf6e7:c.instructions+=3;goto B5bf6e7;
case 0x5bf6e8:c.instructions+=2;goto B5bf6e8;
case 0x5bf6ea:c.instructions+=1;goto B5bf6ea;
case 0x5bf6ec:goto L5bf6ec;
case 0x5bf6ee:c.instructions+=5;goto B5bf6ee;
case 0x5bf6f0:c.instructions+=4;goto B5bf6f0;
case 0x5bf6f1:c.instructions+=3;goto B5bf6f1;
case 0x5bf6f6:c.instructions+=2;goto B5bf6f6;
case 0x5bf6f7:c.instructions+=1;goto B5bf6f7;
case 0x5bf6fa:goto L5bf6fa;
case 0x5bf6fc:c.instructions+=1;goto B5bf6fc;
case 0x5bf6fe:goto L5bf6fe;
case 0x5bf704:goto L5bf704;
case 0x5bf706:c.instructions+=4;goto B5bf706;
case 0x5bf708:c.instructions+=3;goto B5bf708;
case 0x5bf70d:c.instructions+=2;goto B5bf70d;
case 0x5bf70e:c.instructions+=1;goto B5bf70e;
case 0x5bf711:goto L5bf711;
case 0x5bf713:c.instructions+=2;goto B5bf713;
case 0x5bf715:c.instructions+=1;goto B5bf715;
case 0x5bf717:goto L5bf717;
case 0x5bf719:c.instructions+=1;goto B5bf719;
case 0x5bf71b:goto L5bf71b;
case 0x5bf71d:c.instructions+=2;goto B5bf71d;
case 0x5bf71e:c.instructions+=1;goto B5bf71e;
case 0x5bf721:goto L5bf721;
case 0x5bf723:c.instructions+=2;goto B5bf723;
case 0x5bf725:c.instructions+=1;goto B5bf725;
case 0x5bf727:goto L5bf727;
case 0x5bf729:c.instructions+=2;goto B5bf729;
case 0x5bf72a:c.instructions+=1;goto B5bf72a;
case 0x5bf72d:goto L5bf72d;
case 0x5bf733:c.instructions+=2;goto B5bf733;
case 0x5bf734:c.instructions+=1;goto B5bf734;
case 0x5bf735:goto L5bf735;
case 0x5bf73b:c.instructions+=5;goto B5bf73b;
case 0x5bf73d:c.instructions+=4;goto B5bf73d;
case 0x5bf73f:c.instructions+=3;goto B5bf73f;
case 0x5bf740:c.instructions+=2;goto B5bf740;
case 0x5bf741:c.instructions+=1;goto B5bf741;
case 0x5bf744:goto L5bf744;
case 0x5bf746:c.instructions+=3;goto B5bf746;
case 0x5bf748:c.instructions+=2;goto B5bf748;
case 0x5bf749:c.instructions+=1;goto B5bf749;
case 0x5bf74c:goto L5bf74c;
case 0x5bf74d:c.instructions+=1;goto B5bf74d;
case 0x5bf750:goto L5bf750;
case 0x5bf753:c.instructions+=19;goto B5bf753;
case 0x5bf754:c.instructions+=18;goto B5bf754;
case 0x5bf755:c.instructions+=17;goto B5bf755;
case 0x5bf757:c.instructions+=16;goto B5bf757;
case 0x5bf75a:c.instructions+=15;goto B5bf75a;
case 0x5bf75d:c.instructions+=14;goto B5bf75d;
case 0x5bf760:c.instructions+=13;goto B5bf760;
case 0x5bf762:c.instructions+=12;goto B5bf762;
case 0x5bf763:c.instructions+=11;goto B5bf763;
case 0x5bf767:c.instructions+=10;goto B5bf767;
case 0x5bf76a:c.instructions+=9;goto B5bf76a;
case 0x5bf770:c.instructions+=8;goto B5bf770;
case 0x5bf774:c.instructions+=7;goto B5bf774;
case 0x5bf775:c.instructions+=6;goto B5bf775;
case 0x5bf779:c.instructions+=5;goto B5bf779;
case 0x5bf77b:c.instructions+=4;goto B5bf77b;
case 0x5bf77c:c.instructions+=3;goto B5bf77c;
case 0x5bf780:c.instructions+=2;goto B5bf780;
case 0x5bf784:c.instructions+=1;goto B5bf784;
case 0x5bf78a:goto L5bf78a;
case 0x5bf78e:c.instructions+=4;goto B5bf78e;
case 0x5bf78f:c.instructions+=3;goto B5bf78f;
case 0x5bf793:c.instructions+=2;goto B5bf793;
case 0x5bf797:c.instructions+=1;goto B5bf797;
case 0x5bf79d:goto L5bf79d;
case 0x5bf7a3:c.instructions+=9;goto B5bf7a3;
case 0x5bf7a5:c.instructions+=8;goto B5bf7a5;
case 0x5bf7a9:c.instructions+=7;goto B5bf7a9;
case 0x5bf7ad:c.instructions+=6;goto B5bf7ad;
case 0x5bf7ae:c.instructions+=5;goto B5bf7ae;
case 0x5bf7b2:c.instructions+=4;goto B5bf7b2;
case 0x5bf7b3:c.instructions+=3;goto B5bf7b3;
case 0x5bf7b7:c.instructions+=2;goto B5bf7b7;
case 0x5bf7bb:c.instructions+=1;goto B5bf7bb;
case 0x5bf7c1:goto L5bf7c1;
case 0x5bf7c5:c.instructions+=9;goto B5bf7c5;
case 0x5bf7c9:c.instructions+=8;goto B5bf7c9;
case 0x5bf7cd:c.instructions+=7;goto B5bf7cd;
case 0x5bf7cf:c.instructions+=6;goto B5bf7cf;
case 0x5bf7d3:c.instructions+=5;goto B5bf7d3;
case 0x5bf7d5:c.instructions+=4;goto B5bf7d5;
case 0x5bf7d7:c.instructions+=3;goto B5bf7d7;
case 0x5bf7db:c.instructions+=2;goto B5bf7db;
case 0x5bf7df:c.instructions+=1;goto B5bf7df;
case 0x5bf7e1:goto L5bf7e1;
case 0x5bf7e5:c.instructions+=7;goto B5bf7e5;
case 0x5bf7e9:c.instructions+=6;goto B5bf7e9;
case 0x5bf7eb:c.instructions+=5;goto B5bf7eb;
case 0x5bf7ef:c.instructions+=4;goto B5bf7ef;
case 0x5bf7f3:c.instructions+=3;goto B5bf7f3;
case 0x5bf7f9:c.instructions+=2;goto B5bf7f9;
case 0x5bf7fd:c.instructions+=1;goto B5bf7fd;
case 0x5bf802:goto L5bf802;
case 0x5bf805:c.instructions+=1;goto B5bf805;
case 0x5bf807:goto L5bf807;
case 0x5bf80a:goto L5bf80a;
case 0x5bf80c:c.instructions+=1;goto B5bf80c;
case 0x5bf80e:goto L5bf80e;
case 0x5bf812:c.instructions+=7;goto B5bf812;
case 0x5bf816:c.instructions+=6;goto B5bf816;
case 0x5bf818:c.instructions+=5;goto B5bf818;
case 0x5bf81c:c.instructions+=4;goto B5bf81c;
case 0x5bf820:c.instructions+=3;goto B5bf820;
case 0x5bf826:c.instructions+=2;goto B5bf826;
case 0x5bf82a:c.instructions+=1;goto B5bf82a;
case 0x5bf82f:goto L5bf82f;
case 0x5bf832:c.instructions+=1;goto B5bf832;
case 0x5bf834:goto L5bf834;
case 0x5bf837:goto L5bf837;
case 0x5bf83a:c.instructions+=12;goto B5bf83a;
case 0x5bf83d:c.instructions+=11;goto B5bf83d;
case 0x5bf840:c.instructions+=10;goto B5bf840;
case 0x5bf843:c.instructions+=9;goto B5bf843;
case 0x5bf845:c.instructions+=8;goto B5bf845;
case 0x5bf847:c.instructions+=7;goto B5bf847;
case 0x5bf848:c.instructions+=6;goto B5bf848;
case 0x5bf84b:c.instructions+=5;goto B5bf84b;
case 0x5bf84e:c.instructions+=4;goto B5bf84e;
case 0x5bf84f:c.instructions+=3;goto B5bf84f;
case 0x5bf850:c.instructions+=2;goto B5bf850;
case 0x5bf853:c.instructions+=1;goto B5bf853;
case 0x5bf860:goto L5bf860;
case 0x5bf863:c.instructions+=5;goto B5bf863;
case 0x5bf864:c.instructions+=4;goto B5bf864;
case 0x5bf866:c.instructions+=3;goto B5bf866;
case 0x5bf868:c.instructions+=2;goto B5bf868;
case 0x5bf86a:c.instructions+=1;goto B5bf86a;
case 0x5bf870:goto L5bf870;
case 0x5bf872:c.instructions+=11;goto B5bf872;
case 0x5bf876:c.instructions+=10;goto B5bf876;
case 0x5bf87a:c.instructions+=9;goto B5bf87a;
case 0x5bf87e:c.instructions+=8;goto B5bf87e;
case 0x5bf882:c.instructions+=7;goto B5bf882;
case 0x5bf886:c.instructions+=6;goto B5bf886;
case 0x5bf888:c.instructions+=5;goto B5bf888;
case 0x5bf88c:c.instructions+=4;goto B5bf88c;
case 0x5bf88d:c.instructions+=3;goto B5bf88d;
case 0x5bf88f:c.instructions+=2;goto B5bf88f;
case 0x5bf890:c.instructions+=1;goto B5bf890;
case 0x5bf893:goto L5bf893;
case 0x5bf895:c.instructions+=1;goto B5bf895;
case 0x5bf897:goto L5bf897;
case 0x5bf899:c.instructions+=3;goto B5bf899;
case 0x5bf89b:c.instructions+=2;goto B5bf89b;
case 0x5bf89c:c.instructions+=1;goto B5bf89c;
case 0x5bf89f:goto L5bf89f;
case 0x5bf8a4:c.instructions+=1;goto B5bf8a4;
case 0x5bf8aa:goto L5bf8aa;
case 0x5bf8b0:goto L5bf8b0;
case 0x5bf8b2:c.instructions+=3;goto B5bf8b2;
case 0x5bf8b4:c.instructions+=2;goto B5bf8b4;
case 0x5bf8b5:c.instructions+=1;goto B5bf8b5;
case 0x5bf8b8:goto L5bf8b8;
case 0x5bf8bd:c.instructions+=1;goto B5bf8bd;
case 0x5bf8bf:goto L5bf8bf;
case 0x5bf8c1:c.instructions+=3;goto B5bf8c1;
case 0x5bf8c2:c.instructions+=2;goto B5bf8c2;
case 0x5bf8c5:c.instructions+=1;goto B5bf8c5;
case 0x5bf8c6:goto L5bf8c6;
case 0x5bf8c7:c.instructions+=2;goto B5bf8c7;
case 0x5bf8c9:c.instructions+=1;goto B5bf8c9;
case 0x5bf8ce:goto L5bf8ce;
case 0x5bf8d2:c.instructions+=39;goto B5bf8d2;
case 0x5bf8d5:c.instructions+=38;goto B5bf8d5;
case 0x5bf8d8:c.instructions+=37;goto B5bf8d8;
case 0x5bf8dc:c.instructions+=36;goto B5bf8dc;
case 0x5bf8de:c.instructions+=35;goto B5bf8de;
case 0x5bf8e1:c.instructions+=34;goto B5bf8e1;
case 0x5bf8e3:c.instructions+=33;goto B5bf8e3;
case 0x5bf8e6:c.instructions+=32;goto B5bf8e6;
case 0x5bf8e8:c.instructions+=31;goto B5bf8e8;
case 0x5bf8ea:c.instructions+=30;goto B5bf8ea;
case 0x5bf8ed:c.instructions+=29;goto B5bf8ed;
case 0x5bf8f0:c.instructions+=28;goto B5bf8f0;
case 0x5bf8f2:c.instructions+=27;goto B5bf8f2;
case 0x5bf8f5:c.instructions+=26;goto B5bf8f5;
case 0x5bf8f8:c.instructions+=25;goto B5bf8f8;
case 0x5bf8fa:c.instructions+=24;goto B5bf8fa;
case 0x5bf8fd:c.instructions+=23;goto B5bf8fd;
case 0x5bf8ff:c.instructions+=22;goto B5bf8ff;
case 0x5bf902:c.instructions+=21;goto B5bf902;
case 0x5bf904:c.instructions+=20;goto B5bf904;
case 0x5bf906:c.instructions+=19;goto B5bf906;
case 0x5bf909:c.instructions+=18;goto B5bf909;
case 0x5bf90c:c.instructions+=17;goto B5bf90c;
case 0x5bf90e:c.instructions+=16;goto B5bf90e;
case 0x5bf911:c.instructions+=15;goto B5bf911;
case 0x5bf914:c.instructions+=14;goto B5bf914;
case 0x5bf918:c.instructions+=13;goto B5bf918;
case 0x5bf91b:c.instructions+=12;goto B5bf91b;
case 0x5bf91e:c.instructions+=11;goto B5bf91e;
case 0x5bf920:c.instructions+=10;goto B5bf920;
case 0x5bf923:c.instructions+=9;goto B5bf923;
case 0x5bf925:c.instructions+=8;goto B5bf925;
case 0x5bf927:c.instructions+=7;goto B5bf927;
case 0x5bf92a:c.instructions+=6;goto B5bf92a;
case 0x5bf92d:c.instructions+=5;goto B5bf92d;
case 0x5bf92f:c.instructions+=4;goto B5bf92f;
case 0x5bf932:c.instructions+=3;goto B5bf932;
case 0x5bf935:c.instructions+=2;goto B5bf935;
case 0x5bf938:c.instructions+=1;goto B5bf938;
case 0x5bf939:goto L5bf939;
case 0x5bf93b:c.instructions+=3;goto B5bf93b;
case 0x5bf93c:c.instructions+=2;goto B5bf93c;
case 0x5bf93f:c.instructions+=1;goto B5bf93f;
case 0x5bf940:goto L5bf940;
case 0x5bf943:c.instructions+=3;goto B5bf943;
case 0x5bf945:c.instructions+=2;goto B5bf945;
case 0x5bf946:c.instructions+=1;goto B5bf946;
case 0x5bf948:goto L5bf948;
case 0x5bf94b:c.instructions+=2;goto B5bf94b;
case 0x5bf94d:c.instructions+=1;goto B5bf94d;
case 0x5bf94f:goto L5bf94f;
case 0x5bf951:c.instructions+=1;goto B5bf951;
case 0x5bf953:goto L5bf953;
case 0x5bf955:goto L5bf955;
case 0x5bf958:c.instructions+=2;goto B5bf958;
case 0x5bf95a:c.instructions+=1;goto B5bf95a;
case 0x5bf95c:goto L5bf95c;
case 0x5bf95f:c.instructions+=2;goto B5bf95f;
case 0x5bf961:c.instructions+=1;goto B5bf961;
case 0x5bf963:goto L5bf963;
case 0x5bf965:c.instructions+=1;goto B5bf965;
case 0x5bf967:goto L5bf967;
case 0x5bf969:goto L5bf969;
case 0x5bf96c:c.instructions+=2;goto B5bf96c;
case 0x5bf96e:c.instructions+=1;goto B5bf96e;
case 0x5bf970:goto L5bf970;
case 0x5bf973:c.instructions+=2;goto B5bf973;
case 0x5bf975:c.instructions+=1;goto B5bf975;
case 0x5bf977:goto L5bf977;
case 0x5bf979:c.instructions+=1;goto B5bf979;
case 0x5bf97b:goto L5bf97b;
case 0x5bf97d:goto L5bf97d;
case 0x5bf97f:c.instructions+=2;goto B5bf97f;
case 0x5bf980:c.instructions+=1;goto B5bf980;
case 0x5bf982:goto L5bf982;
case 0x5bf984:c.instructions+=1;goto B5bf984;
case 0x5bf986:goto L5bf986;
case 0x5bf989:c.instructions+=2;goto B5bf989;
case 0x5bf98b:c.instructions+=1;goto B5bf98b;
case 0x5bf98d:goto L5bf98d;
case 0x5bf98f:c.instructions+=1;goto B5bf98f;
case 0x5bf991:goto L5bf991;
case 0x5bf994:c.instructions+=2;goto B5bf994;
case 0x5bf996:c.instructions+=1;goto B5bf996;
case 0x5bf998:goto L5bf998;
case 0x5bf99b:c.instructions+=2;goto B5bf99b;
case 0x5bf99d:c.instructions+=1;goto B5bf99d;
case 0x5bf99f:goto L5bf99f;
case 0x5bf9a1:c.instructions+=1;goto B5bf9a1;
case 0x5bf9a2:goto L5bf9a2;
case 0x5bf9a7:c.instructions+=1;goto B5bf9a7;
case 0x5bf9b0:goto L5bf9b0;
case 0x5bf9b5:c.instructions+=5;goto B5bf9b5;
case 0x5bf9b8:c.instructions+=4;goto B5bf9b8;
case 0x5bf9ba:c.instructions+=3;goto B5bf9ba;
case 0x5bf9bb:c.instructions+=2;goto B5bf9bb;
case 0x5bf9bd:c.instructions+=1;goto B5bf9bd;
case 0x5bf9bf:goto L5bf9bf;
case 0x5bf9c4:c.instructions+=2;goto B5bf9c4;
case 0x5bf9c6:c.instructions+=1;goto B5bf9c6;
case 0x5bf9c8:goto L5bf9c8;
case 0x5bf9ca:c.instructions+=7;goto B5bf9ca;
case 0x5bf9cc:c.instructions+=6;goto B5bf9cc;
case 0x5bf9ce:c.instructions+=5;goto B5bf9ce;
case 0x5bf9d2:c.instructions+=4;goto B5bf9d2;
case 0x5bf9d3:c.instructions+=3;goto B5bf9d3;
case 0x5bf9d5:c.instructions+=2;goto B5bf9d5;
case 0x5bf9d6:c.instructions+=1;goto B5bf9d6;
case 0x5bf9d9:goto L5bf9d9;
case 0x5bf9de:c.instructions+=7;goto B5bf9de;
case 0x5bf9e4:c.instructions+=6;goto B5bf9e4;
case 0x5bf9e8:c.instructions+=5;goto B5bf9e8;
case 0x5bf9e9:c.instructions+=4;goto B5bf9e9;
case 0x5bf9ea:c.instructions+=3;goto B5bf9ea;
case 0x5bf9eb:c.instructions+=2;goto B5bf9eb;
case 0x5bf9ed:c.instructions+=1;goto B5bf9ed;
case 0x5bf9f2:goto L5bf9f2;
case 0x5bf9f8:c.instructions+=3;goto B5bf9f8;
case 0x5bf9fb:c.instructions+=2;goto B5bf9fb;
case 0x5bf9fd:c.instructions+=1;goto B5bf9fd;
case 0x5bf9ff:goto L5bf9ff;
case 0x5bfa01:c.instructions+=1;goto B5bfa01;
case 0x5bfa03:goto L5bfa03;
case 0x5bfa06:goto L5bfa06;
case 0x5bfa0a:c.instructions+=5;goto B5bfa0a;
case 0x5bfa0d:c.instructions+=4;goto B5bfa0d;
case 0x5bfa0f:c.instructions+=3;goto B5bfa0f;
case 0x5bfa10:c.instructions+=2;goto B5bfa10;
case 0x5bfa14:c.instructions+=1;goto B5bfa14;
case 0x5bfa17:goto L5bfa17;
case 0x5bfa19:goto L5bfa19;
case 0x5bfa1b:c.instructions+=1;goto B5bfa1b;
case 0x5bfa1e:goto L5bfa1e;
case 0x5bfa20:goto L5bfa20;
case 0x5bfa25:c.instructions+=4;goto B5bfa25;
case 0x5bfa27:c.instructions+=3;goto B5bfa27;
case 0x5bfa29:c.instructions+=2;goto B5bfa29;
case 0x5bfa2a:c.instructions+=1;goto B5bfa2a;
case 0x5bfa2d:goto L5bfa2d;
case 0x5bfa2e:goto L5bfa2e;
case 0x5bfa2f:c.instructions+=2;goto B5bfa2f;
case 0x5bfa32:c.instructions+=1;goto B5bfa32;
case 0x5bfa40:goto L5bfa40;
case 0x5bfa45:goto L5bfa45;
case 0x5bfa47:c.instructions+=1;goto B5bfa47;
case 0x5bfa50:goto L5bfa50;
case 0x5bfa54:c.instructions+=24;goto B5bfa54;
case 0x5bfa55:c.instructions+=23;goto B5bfa55;
case 0x5bfa56:c.instructions+=22;goto B5bfa56;
case 0x5bfa5c:c.instructions+=21;goto B5bfa5c;
case 0x5bfa5e:c.instructions+=20;goto B5bfa5e;
case 0x5bfa61:c.instructions+=19;goto B5bfa61;
case 0x5bfa67:c.instructions+=18;goto B5bfa67;
case 0x5bfa69:c.instructions+=17;goto B5bfa69;
case 0x5bfa6f:c.instructions+=16;goto B5bfa6f;
case 0x5bfa72:c.instructions+=15;goto B5bfa72;
case 0x5bfa78:c.instructions+=14;goto B5bfa78;
case 0x5bfa7a:c.instructions+=13;goto B5bfa7a;
case 0x5bfa7d:c.instructions+=12;goto B5bfa7d;
case 0x5bfa83:c.instructions+=11;goto B5bfa83;
case 0x5bfa86:c.instructions+=10;goto B5bfa86;
case 0x5bfa8d:c.instructions+=9;goto B5bfa8d;
case 0x5bfa94:c.instructions+=8;goto B5bfa94;
case 0x5bfa95:c.instructions+=7;goto B5bfa95;
case 0x5bfa9b:c.instructions+=6;goto B5bfa9b;
case 0x5bfaa1:c.instructions+=5;goto B5bfaa1;
case 0x5bfaa7:c.instructions+=4;goto B5bfaa7;
case 0x5bfaae:c.instructions+=3;goto B5bfaae;
case 0x5bfab4:c.instructions+=2;goto B5bfab4;
case 0x5bfab5:c.instructions+=1;goto B5bfab5;
case 0x5bfac0:goto L5bfac0;
case 0x5bfac1:c.instructions+=7;goto B5bfac1;
case 0x5bfac2:c.instructions+=6;goto B5bfac2;
case 0x5bfac4:c.instructions+=5;goto B5bfac4;
case 0x5bfac6:c.instructions+=4;goto B5bfac6;
case 0x5bfac7:c.instructions+=3;goto B5bfac7;
case 0x5bfac9:c.instructions+=2;goto B5bfac9;
case 0x5bface:c.instructions+=1;goto B5bface;
case 0x5bfad0:goto L5bfad0;
case 0x5bfad6:c.instructions+=19;goto B5bfad6;
case 0x5bfad8:c.instructions+=18;goto B5bfad8;
case 0x5bfada:c.instructions+=17;goto B5bfada;
case 0x5bfae0:c.instructions+=16;goto B5bfae0;
case 0x5bfae3:c.instructions+=15;goto B5bfae3;
case 0x5bfae9:c.instructions+=14;goto B5bfae9;
case 0x5bfaec:c.instructions+=13;goto B5bfaec;
case 0x5bfaf2:c.instructions+=12;goto B5bfaf2;
case 0x5bfaf9:c.instructions+=11;goto B5bfaf9;
case 0x5bfafc:c.instructions+=10;goto B5bfafc;
case 0x5bfb03:c.instructions+=9;goto B5bfb03;
case 0x5bfb09:c.instructions+=8;goto B5bfb09;
case 0x5bfb0f:c.instructions+=7;goto B5bfb0f;
case 0x5bfb15:c.instructions+=6;goto B5bfb15;
case 0x5bfb1c:c.instructions+=5;goto B5bfb1c;
case 0x5bfb22:c.instructions+=4;goto B5bfb22;
case 0x5bfb25:c.instructions+=3;goto B5bfb25;
case 0x5bfb26:c.instructions+=2;goto B5bfb26;
case 0x5bfb2c:c.instructions+=1;goto B5bfb2c;
case 0x5bfb2e:goto L5bfb2e;
case 0x5bfb30:c.instructions+=2;goto B5bfb30;
case 0x5bfb35:c.instructions+=1;goto B5bfb35;
case 0x5bfb3a:goto L5bfb3a;
case 0x5bfb3c:goto L5bfb3c;
case 0x5bfb3e:c.instructions+=1;goto B5bfb3e;
case 0x5bfb43:goto L5bfb43;
case 0x5bfb45:goto L5bfb45;
case 0x5bfb4a:c.instructions+=1;goto B5bfb4a;
case 0x5bfb4f:goto L5bfb4f;
case 0x5bfb51:goto L5bfb51;
case 0x5bfb52:c.instructions+=3;goto B5bfb52;
case 0x5bfb53:c.instructions+=2;goto B5bfb53;
case 0x5bfb54:c.instructions+=1;goto B5bfb54;
case 0x5bfb60:goto L5bfb60;
case 0x5bfb61:c.instructions+=7;goto B5bfb61;
case 0x5bfb62:c.instructions+=6;goto B5bfb62;
case 0x5bfb63:c.instructions+=5;goto B5bfb63;
case 0x5bfb65:c.instructions+=4;goto B5bfb65;
case 0x5bfb66:c.instructions+=3;goto B5bfb66;
case 0x5bfb6b:c.instructions+=2;goto B5bfb6b;
case 0x5bfb6d:c.instructions+=1;goto B5bfb6d;
case 0x5bfb70:goto L5bfb70;
case 0x5bfb74:c.instructions+=4;goto B5bfb74;
case 0x5bfb77:c.instructions+=3;goto B5bfb77;
case 0x5bfb7c:c.instructions+=2;goto B5bfb7c;
case 0x5bfb7e:c.instructions+=1;goto B5bfb7e;
case 0x5bfb80:goto L5bfb80;
case 0x5bfb82:goto L5bfb82;
case 0x5bfb84:goto L5bfb84;
case 0x5bfb87:c.instructions+=4;goto B5bfb87;
case 0x5bfb88:c.instructions+=3;goto B5bfb88;
case 0x5bfb8b:c.instructions+=2;goto B5bfb8b;
case 0x5bfb8e:c.instructions+=1;goto B5bfb8e;
case 0x5bfb90:goto L5bfb90;
case 0x5bfb94:c.instructions+=6;goto B5bfb94;
case 0x5bfb98:c.instructions+=5;goto B5bfb98;
case 0x5bfb99:c.instructions+=4;goto B5bfb99;
case 0x5bfb9a:c.instructions+=3;goto B5bfb9a;
case 0x5bfb9b:c.instructions+=2;goto B5bfb9b;
case 0x5bfb9c:c.instructions+=1;goto B5bfb9c;
case 0x5bfb9d:goto L5bfb9d;
case 0x5bfb9e:c.instructions+=6;goto B5bfb9e;
case 0x5bfb9f:c.instructions+=5;goto B5bfb9f;
case 0x5bfba2:c.instructions+=4;goto B5bfba2;
case 0x5bfba9:c.instructions+=3;goto B5bfba9;
case 0x5bfbaa:c.instructions+=2;goto B5bfbaa;
case 0x5bfbab:c.instructions+=1;goto B5bfbab;
case 0x5bfbb0:goto L5bfbb0;
case 0x5bfbb1:c.instructions+=1;goto B5bfbb1;
case 0x5bfbb6:goto L5bfbb6;
case 0x5bfbb8:c.instructions+=2;goto B5bfbb8;
case 0x5bfbba:c.instructions+=1;goto B5bfbba;
case 0x5bfbbc:goto L5bfbbc;
case 0x5bfbbe:c.instructions+=2;goto B5bfbbe;
case 0x5bfbbf:c.instructions+=1;goto B5bfbbf;
case 0x5bfbc2:goto L5bfbc2;
case 0x5bfbc4:c.instructions+=2;goto B5bfbc4;
case 0x5bfbc6:c.instructions+=1;goto B5bfbc6;
case 0x5bfbc8:goto L5bfbc8;
case 0x5bfbca:c.instructions+=2;goto B5bfbca;
case 0x5bfbcb:c.instructions+=1;goto B5bfbcb;
case 0x5bfbce:goto L5bfbce;
case 0x5bfbd4:goto L5bfbd4;
case 0x5bfbd7:c.instructions+=2;goto B5bfbd7;
case 0x5bfbdd:c.instructions+=1;goto B5bfbdd;
case 0x5bfbdf:goto L5bfbdf;
case 0x5bfbe4:c.instructions+=3;goto B5bfbe4;
case 0x5bfbe6:c.instructions+=2;goto B5bfbe6;
case 0x5bfbe7:c.instructions+=1;goto B5bfbe7;
case 0x5bfbe9:goto L5bfbe9;
case 0x5bfbeb:c.instructions+=2;goto B5bfbeb;
case 0x5bfbec:c.instructions+=1;goto B5bfbec;
case 0x5bfbef:goto L5bfbef;
case 0x5bfbf9:goto L5bfbf9;
case 0x5bfc00:goto L5bfc00;
case 0x5bfc04:c.instructions+=8;goto B5bfc04;
case 0x5bfc0a:c.instructions+=7;goto B5bfc0a;
case 0x5bfc0b:c.instructions+=6;goto B5bfc0b;
case 0x5bfc12:c.instructions+=5;goto B5bfc12;
case 0x5bfc13:c.instructions+=4;goto B5bfc13;
case 0x5bfc14:c.instructions+=3;goto B5bfc14;
case 0x5bfc18:c.instructions+=2;goto B5bfc18;
case 0x5bfc19:c.instructions+=1;goto B5bfc19;
case 0x5bfc1f:goto L5bfc1f;
case 0x5bfc25:c.instructions+=3;goto B5bfc25;
case 0x5bfc29:c.instructions+=2;goto B5bfc29;
case 0x5bfc2a:c.instructions+=1;goto B5bfc2a;
case 0x5bfc2c:goto L5bfc2c;
case 0x5bfc31:c.instructions+=1;goto B5bfc31;
case 0x5bfc33:goto L5bfc33;
case 0x5bfc34:c.instructions+=2;goto B5bfc34;
case 0x5bfc3a:c.instructions+=1;goto B5bfc3a;
case 0x5bfc40:goto L5bfc40;
case 0x5bfc43:c.instructions+=8;goto B5bfc43;
case 0x5bfc44:c.instructions+=7;goto B5bfc44;
case 0x5bfc45:c.instructions+=6;goto B5bfc45;
case 0x5bfc46:c.instructions+=5;goto B5bfc46;
case 0x5bfc47:c.instructions+=4;goto B5bfc47;
case 0x5bfc4b:c.instructions+=3;goto B5bfc4b;
case 0x5bfc4c:c.instructions+=2;goto B5bfc4c;
case 0x5bfc4e:c.instructions+=1;goto B5bfc4e;
case 0x5bfc53:goto L5bfc53;
case 0x5bfc56:c.instructions+=5;goto B5bfc56;
case 0x5bfc5c:c.instructions+=4;goto B5bfc5c;
case 0x5bfc62:c.instructions+=3;goto B5bfc62;
case 0x5bfc6a:c.instructions+=2;goto B5bfc6a;
case 0x5bfc6c:c.instructions+=1;goto B5bfc6c;
case 0x5bfc70:goto L5bfc70;
case 0x5bfc72:c.instructions+=3;goto B5bfc72;
case 0x5bfc74:c.instructions+=2;goto B5bfc74;
case 0x5bfc79:c.instructions+=1;goto B5bfc79;
case 0x5bfc80:goto L5bfc80;
case 0x5bfc83:c.instructions+=11;goto B5bfc83;
case 0x5bfc86:c.instructions+=10;goto B5bfc86;
case 0x5bfc88:c.instructions+=9;goto B5bfc88;
case 0x5bfc8a:c.instructions+=8;goto B5bfc8a;
case 0x5bfc8d:c.instructions+=7;goto B5bfc8d;
case 0x5bfc90:c.instructions+=6;goto B5bfc90;
case 0x5bfc96:c.instructions+=5;goto B5bfc96;
case 0x5bfc9c:c.instructions+=4;goto B5bfc9c;
case 0x5bfc9f:c.instructions+=3;goto B5bfc9f;
case 0x5bfca2:c.instructions+=2;goto B5bfca2;
case 0x5bfca3:c.instructions+=1;goto B5bfca3;
case 0x5bfca5:goto L5bfca5;
case 0x5bfca9:c.instructions+=5;goto B5bfca9;
case 0x5bfcac:c.instructions+=4;goto B5bfcac;
case 0x5bfcad:c.instructions+=3;goto B5bfcad;
case 0x5bfcae:c.instructions+=2;goto B5bfcae;
case 0x5bfcb2:c.instructions+=1;goto B5bfcb2;
case 0x5bfcb4:goto L5bfcb4;
case 0x5bfcba:c.instructions+=4;goto B5bfcba;
case 0x5bfcc0:c.instructions+=3;goto B5bfcc0;
case 0x5bfcc6:c.instructions+=2;goto B5bfcc6;
case 0x5bfccb:c.instructions+=1;goto B5bfccb;
case 0x5bfcd0:goto L5bfcd0;
case 0x5bfcd4:c.instructions+=16;goto B5bfcd4;
case 0x5bfcd7:c.instructions+=15;goto B5bfcd7;
case 0x5bfcd9:c.instructions+=14;goto B5bfcd9;
case 0x5bfcdf:c.instructions+=13;goto B5bfcdf;
case 0x5bfce2:c.instructions+=12;goto B5bfce2;
case 0x5bfce7:c.instructions+=11;goto B5bfce7;
case 0x5bfce9:c.instructions+=10;goto B5bfce9;
case 0x5bfceb:c.instructions+=9;goto B5bfceb;
case 0x5bfced:c.instructions+=8;goto B5bfced;
case 0x5bfcf0:c.instructions+=7;goto B5bfcf0;
case 0x5bfcf3:c.instructions+=6;goto B5bfcf3;
case 0x5bfcf6:c.instructions+=5;goto B5bfcf6;
case 0x5bfcf7:c.instructions+=4;goto B5bfcf7;
case 0x5bfcfa:c.instructions+=3;goto B5bfcfa;
case 0x5bfcfb:c.instructions+=2;goto B5bfcfb;
case 0x5bfcff:c.instructions+=1;goto B5bfcff;
case 0x5bfd01:goto L5bfd01;
case 0x5bfd06:c.instructions+=1;goto B5bfd06;
case 0x5bfd0b:goto L5bfd0b;
case 0x5bfd0e:c.instructions+=6;goto B5bfd0e;
case 0x5bfd0f:c.instructions+=5;goto B5bfd0f;
case 0x5bfd10:c.instructions+=4;goto B5bfd10;
case 0x5bfd11:c.instructions+=3;goto B5bfd11;
case 0x5bfd12:c.instructions+=2;goto B5bfd12;
case 0x5bfd15:c.instructions+=1;goto B5bfd15;
case 0x5bfd20:goto L5bfd20;
case 0x5bfd21:c.instructions+=6;goto B5bfd21;
case 0x5bfd22:c.instructions+=5;goto B5bfd22;
case 0x5bfd24:c.instructions+=4;goto B5bfd24;
case 0x5bfd25:c.instructions+=3;goto B5bfd25;
case 0x5bfd29:c.instructions+=2;goto B5bfd29;
case 0x5bfd2f:c.instructions+=1;goto B5bfd2f;
case 0x5bfd30:goto L5bfd30;
case 0x5bfd36:c.instructions+=5;goto B5bfd36;
case 0x5bfd3a:c.instructions+=4;goto B5bfd3a;
case 0x5bfd40:c.instructions+=3;goto B5bfd40;
case 0x5bfd42:c.instructions+=2;goto B5bfd42;
case 0x5bfd48:c.instructions+=1;goto B5bfd48;
case 0x5bfd4d:goto L5bfd4d;
case 0x5bfd4e:c.instructions+=5;goto B5bfd4e;
case 0x5bfd50:c.instructions+=4;goto B5bfd50;
case 0x5bfd53:c.instructions+=3;goto B5bfd53;
case 0x5bfd59:c.instructions+=2;goto B5bfd59;
case 0x5bfd5d:c.instructions+=1;goto B5bfd5d;
case 0x5bfd5f:goto L5bfd5f;
case 0x5bfd60:c.instructions+=3;goto B5bfd60;
case 0x5bfd61:c.instructions+=2;goto B5bfd61;
case 0x5bfd62:c.instructions+=1;goto B5bfd62;
case 0x5bfd70:goto L5bfd70;
case 0x5bfd74:c.instructions+=5;goto B5bfd74;
case 0x5bfd7b:c.instructions+=4;goto B5bfd7b;
case 0x5bfd7d:c.instructions+=3;goto B5bfd7d;
case 0x5bfd7f:c.instructions+=2;goto B5bfd7f;
case 0x5bfd82:c.instructions+=1;goto B5bfd82;
case 0x5bfd90:goto L5bfd90;
case 0x5bfd94:c.instructions+=2;goto B5bfd94;
case 0x5bfd97:c.instructions+=1;goto B5bfd97;
case 0x5bfd99:goto L5bfd99;
case 0x5bfd9a:c.instructions+=1;goto B5bfd9a;
case 0x5bfd9c:goto L5bfd9c;
case 0x5bfd9d:c.instructions+=1;goto B5bfd9d;
case 0x5bfd9f:goto L5bfd9f;
case 0x5bfda1:c.instructions+=1;goto B5bfda1;
case 0x5bfda4:goto L5bfda4;
case 0x5bfda8:c.instructions+=3;goto B5bfda8;
case 0x5bfdaf:c.instructions+=2;goto B5bfdaf;
case 0x5bfdb1:c.instructions+=1;goto B5bfdb1;
case 0x5bfdb3:goto L5bfdb3;
case 0x5bfdb9:c.instructions+=1;goto B5bfdb9;
case 0x5bfdbb:goto L5bfdbb;
case 0x5bfdbf:c.instructions+=3;goto B5bfdbf;
case 0x5bfdc6:c.instructions+=2;goto B5bfdc6;
case 0x5bfdc8:c.instructions+=1;goto B5bfdc8;
case 0x5bfdca:goto L5bfdca;
case 0x5bfdd0:c.instructions+=1;goto B5bfdd0;
case 0x5bfdd2:goto L5bfdd2;
case 0x5bfdd6:c.instructions+=3;goto B5bfdd6;
case 0x5bfddd:c.instructions+=2;goto B5bfddd;
case 0x5bfddf:c.instructions+=1;goto B5bfddf;
case 0x5bfde1:goto L5bfde1;
case 0x5bfde7:goto L5bfde7;
case 0x5bfde9:c.instructions+=1;goto B5bfde9;
case 0x5bfdeb:goto L5bfdeb;
case 0x5bfdf0:c.instructions+=1;goto B5bfdf0;
case 0x5bfdf3:goto L5bfdf3;
case 0x5bfdf5:c.instructions+=1;goto B5bfdf5;
case 0x5bfe00:goto L5bfe00;
case 0x5bfe04:c.instructions+=3;goto B5bfe04;
case 0x5bfe0b:c.instructions+=2;goto B5bfe0b;
case 0x5bfe0d:c.instructions+=1;goto B5bfe0d;
case 0x5bfe0f:goto L5bfe0f;
case 0x5bfe11:c.instructions+=2;goto B5bfe11;
case 0x5bfe12:c.instructions+=1;goto B5bfe12;
case 0x5bfe17:goto L5bfe17;
case 0x5bfe20:goto L5bfe20;
case 0x5bfe24:c.instructions+=10;goto B5bfe24;
case 0x5bfe25:c.instructions+=9;goto B5bfe25;
case 0x5bfe28:c.instructions+=8;goto B5bfe28;
case 0x5bfe2f:c.instructions+=7;goto B5bfe2f;
case 0x5bfe30:c.instructions+=6;goto B5bfe30;
case 0x5bfe34:c.instructions+=5;goto B5bfe34;
case 0x5bfe37:c.instructions+=4;goto B5bfe37;
case 0x5bfe39:c.instructions+=3;goto B5bfe39;
case 0x5bfe3a:c.instructions+=2;goto B5bfe3a;
case 0x5bfe3b:c.instructions+=1;goto B5bfe3b;
case 0x5bfe3d:goto L5bfe3d;
case 0x5bfe44:c.instructions+=3;goto B5bfe44;
case 0x5bfe47:c.instructions+=2;goto B5bfe47;
case 0x5bfe4b:c.instructions+=1;goto B5bfe4b;
case 0x5bfe4d:goto L5bfe4d;
case 0x5bfe53:c.instructions+=2;goto B5bfe53;
case 0x5bfe57:c.instructions+=1;goto B5bfe57;
case 0x5bfe59:goto L5bfe59;
case 0x5bfe5e:c.instructions+=1;goto B5bfe5e;
case 0x5bfe61:goto L5bfe61;
case 0x5bfe63:c.instructions+=1;goto B5bfe63;
case 0x5bfe70:goto L5bfe70;
case 0x5bfe74:c.instructions+=3;goto B5bfe74;
case 0x5bfe7b:c.instructions+=2;goto B5bfe7b;
case 0x5bfe7d:c.instructions+=1;goto B5bfe7d;
case 0x5bfe7f:goto L5bfe7f;
case 0x5bfe81:c.instructions+=2;goto B5bfe81;
case 0x5bfe82:c.instructions+=1;goto B5bfe82;
case 0x5bfe87:goto L5bfe87;
case 0x5bfe90:goto L5bfe90;
case 0x5bfe94:c.instructions+=10;goto B5bfe94;
case 0x5bfe95:c.instructions+=9;goto B5bfe95;
case 0x5bfe98:c.instructions+=8;goto B5bfe98;
case 0x5bfe9f:c.instructions+=7;goto B5bfe9f;
case 0x5bfea0:c.instructions+=6;goto B5bfea0;
case 0x5bfea4:c.instructions+=5;goto B5bfea4;
case 0x5bfea7:c.instructions+=4;goto B5bfea7;
case 0x5bfea9:c.instructions+=3;goto B5bfea9;
case 0x5bfeaa:c.instructions+=2;goto B5bfeaa;
case 0x5bfeab:c.instructions+=1;goto B5bfeab;
case 0x5bfead:goto L5bfead;
case 0x5bfeb4:c.instructions+=3;goto B5bfeb4;
case 0x5bfeb7:c.instructions+=2;goto B5bfeb7;
case 0x5bfebb:c.instructions+=1;goto B5bfebb;
case 0x5bfebd:goto L5bfebd;
case 0x5bfec3:c.instructions+=2;goto B5bfec3;
case 0x5bfec7:c.instructions+=1;goto B5bfec7;
case 0x5bfec9:goto L5bfec9;
case 0x5bfece:c.instructions+=1;goto B5bfece;
case 0x5bfed1:goto L5bfed1;
case 0x5bfed3:c.instructions+=1;goto B5bfed3;
case 0x5bfee0:goto L5bfee0;
case 0x5bfee4:c.instructions+=11;goto B5bfee4;
case 0x5bfee5:c.instructions+=10;goto B5bfee5;
case 0x5bfee6:c.instructions+=9;goto B5bfee6;
case 0x5bfeea:c.instructions+=8;goto B5bfeea;
case 0x5bfeeb:c.instructions+=7;goto B5bfeeb;
case 0x5bfeec:c.instructions+=6;goto B5bfeec;
case 0x5bfeee:c.instructions+=5;goto B5bfeee;
case 0x5bfef1:c.instructions+=4;goto B5bfef1;
case 0x5bfef5:c.instructions+=3;goto B5bfef5;
case 0x5bfef7:c.instructions+=2;goto B5bfef7;
case 0x5bfef9:c.instructions+=1;goto B5bfef9;
case 0x5bfefb:goto L5bfefb;
case 0x5bfeff:c.instructions+=4;goto B5bfeff;
case 0x5bff01:c.instructions+=3;goto B5bff01;
case 0x5bff03:c.instructions+=2;goto B5bff03;
case 0x5bff04:c.instructions+=1;goto B5bff04;
case 0x5bff07:goto L5bff07;
case 0x5bff09:c.instructions+=1;goto B5bff09;
case 0x5bff0b:goto L5bff0b;
case 0x5bff0f:c.instructions+=5;goto B5bff0f;
case 0x5bff11:c.instructions+=4;goto B5bff11;
case 0x5bff12:c.instructions+=3;goto B5bff12;
case 0x5bff14:c.instructions+=2;goto B5bff14;
case 0x5bff15:c.instructions+=1;goto B5bff15;
case 0x5bff18:goto L5bff18;
case 0x5bff1a:c.instructions+=2;goto B5bff1a;
case 0x5bff1c:c.instructions+=1;goto B5bff1c;
case 0x5bff1e:goto L5bff1e;
case 0x5bff1f:c.instructions+=2;goto B5bff1f;
case 0x5bff24:c.instructions+=1;goto B5bff24;
case 0x5bff29:goto L5bff29;
case 0x5bff2c:c.instructions+=6;goto B5bff2c;
case 0x5bff2d:c.instructions+=5;goto B5bff2d;
case 0x5bff2e:c.instructions+=4;goto B5bff2e;
case 0x5bff2f:c.instructions+=3;goto B5bff2f;
case 0x5bff31:c.instructions+=2;goto B5bff31;
case 0x5bff32:c.instructions+=1;goto B5bff32;
case 0x5bff35:goto L5bff35;
case 0x5bff39:c.instructions+=6;goto B5bff39;
case 0x5bff3a:c.instructions+=5;goto B5bff3a;
case 0x5bff3b:c.instructions+=4;goto B5bff3b;
case 0x5bff3c:c.instructions+=3;goto B5bff3c;
case 0x5bff3e:c.instructions+=2;goto B5bff3e;
case 0x5bff3f:c.instructions+=1;goto B5bff3f;
case 0x5bff42:goto L5bff42;
case 0x5bff43:c.instructions+=2;goto B5bff43;
case 0x5bff48:c.instructions+=1;goto B5bff48;
case 0x5bff4d:goto L5bff4d;
case 0x5bff50:c.instructions+=1;goto B5bff50;
case 0x5bff52:goto L5bff52;
case 0x5bff53:c.instructions+=4;goto B5bff53;
case 0x5bff54:c.instructions+=3;goto B5bff54;
case 0x5bff55:c.instructions+=2;goto B5bff55;
case 0x5bff56:c.instructions+=1;goto B5bff56;
case 0x5bff60:goto L5bff60;
case 0x5bff64:c.instructions+=11;goto B5bff64;
case 0x5bff65:c.instructions+=10;goto B5bff65;
case 0x5bff66:c.instructions+=9;goto B5bff66;
case 0x5bff6a:c.instructions+=8;goto B5bff6a;
case 0x5bff6b:c.instructions+=7;goto B5bff6b;
case 0x5bff6c:c.instructions+=6;goto B5bff6c;
case 0x5bff6e:c.instructions+=5;goto B5bff6e;
case 0x5bff71:c.instructions+=4;goto B5bff71;
case 0x5bff74:c.instructions+=3;goto B5bff74;
case 0x5bff76:c.instructions+=2;goto B5bff76;
case 0x5bff78:c.instructions+=1;goto B5bff78;
case 0x5bff7a:goto L5bff7a;
case 0x5bff7b:c.instructions+=5;goto B5bff7b;
case 0x5bff7c:c.instructions+=4;goto B5bff7c;
case 0x5bff7d:c.instructions+=3;goto B5bff7d;
case 0x5bff7f:c.instructions+=2;goto B5bff7f;
case 0x5bff80:c.instructions+=1;goto B5bff80;
case 0x5bff83:goto L5bff83;
case 0x5bff87:c.instructions+=2;goto B5bff87;
case 0x5bff89:c.instructions+=1;goto B5bff89;
case 0x5bff8b:goto L5bff8b;
case 0x5bff8f:c.instructions+=4;goto B5bff8f;
case 0x5bff91:c.instructions+=3;goto B5bff91;
case 0x5bff93:c.instructions+=2;goto B5bff93;
case 0x5bff94:c.instructions+=1;goto B5bff94;
case 0x5bff97:goto L5bff97;
case 0x5bff9b:c.instructions+=3;goto B5bff9b;
case 0x5bff9d:c.instructions+=2;goto B5bff9d;
case 0x5bff9e:c.instructions+=1;goto B5bff9e;
case 0x5bffa1:goto L5bffa1;
case 0x5bffa3:c.instructions+=2;goto B5bffa3;
case 0x5bffa5:c.instructions+=1;goto B5bffa5;
case 0x5bffa7:goto L5bffa7;
case 0x5bffa8:c.instructions+=2;goto B5bffa8;
case 0x5bffad:c.instructions+=1;goto B5bffad;
case 0x5bffb2:goto L5bffb2;
case 0x5bffb5:c.instructions+=6;goto B5bffb5;
case 0x5bffb6:c.instructions+=5;goto B5bffb6;
case 0x5bffb7:c.instructions+=4;goto B5bffb7;
case 0x5bffb8:c.instructions+=3;goto B5bffb8;
case 0x5bffba:c.instructions+=2;goto B5bffba;
case 0x5bffbb:c.instructions+=1;goto B5bffbb;
case 0x5bffbe:goto L5bffbe;
case 0x5bffc2:c.instructions+=6;goto B5bffc2;
case 0x5bffc3:c.instructions+=5;goto B5bffc3;
case 0x5bffc4:c.instructions+=4;goto B5bffc4;
case 0x5bffc5:c.instructions+=3;goto B5bffc5;
case 0x5bffc7:c.instructions+=2;goto B5bffc7;
case 0x5bffc8:c.instructions+=1;goto B5bffc8;
case 0x5bffcb:goto L5bffcb;
case 0x5bffcc:c.instructions+=2;goto B5bffcc;
case 0x5bffd1:c.instructions+=1;goto B5bffd1;
case 0x5bffd6:goto L5bffd6;
case 0x5bffd9:c.instructions+=6;goto B5bffd9;
case 0x5bffda:c.instructions+=5;goto B5bffda;
case 0x5bffdb:c.instructions+=4;goto B5bffdb;
case 0x5bffdc:c.instructions+=3;goto B5bffdc;
case 0x5bffde:c.instructions+=2;goto B5bffde;
case 0x5bffdf:c.instructions+=1;goto B5bffdf;
case 0x5bfff0:goto L5bfff0;
case 0x5bfff4:c.instructions+=7;goto B5bfff4;
case 0x5bfff5:c.instructions+=6;goto B5bfff5;
case 0x5bfff6:c.instructions+=5;goto B5bfff6;
case 0x5bfffa:c.instructions+=4;goto B5bfffa;
case 0x5bfffb:c.instructions+=3;goto B5bfffb;
case 0x5bfffc:c.instructions+=2;goto B5bfffc;
case 0x5bfffe:c.instructions+=1;goto B5bfffe;
default:missing_instruction(c.pc);}
B5bf000:L5bf000:{c.instructions+=7;NFSU2_TR(0x5bf000);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bf002:{NFSU2_TR(0x5bf002);
u8 U[4];
w4(U+0,u32(0x870cdcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bf007:{NFSU2_TR(0x5bf007);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bf009:{NFSU2_TR(0x5bf009);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bf00b:{NFSU2_TR(0x5bf00b);
u8 U[4];
w4(U+0,u32(0x7a37e4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bf010:{NFSU2_TR(0x5bf010);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bf011:{NFSU2_TR(0x5bf011);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bf013ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B5bf013:L5bf013:{c.instructions+=8;NFSU2_TR(0x5bf013);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5bf017:{NFSU2_TR(0x5bf017);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bf019:{NFSU2_TR(0x5bf019);
u8 U[4];
w4(U+0,u32(0x870ce0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bf01e:{NFSU2_TR(0x5bf01e);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bf020:{NFSU2_TR(0x5bf020);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bf022:{NFSU2_TR(0x5bf022);
u8 U[4];
w4(U+0,u32(0x7a37ccull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bf027:{NFSU2_TR(0x5bf027);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bf028:{NFSU2_TR(0x5bf028);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bf02aull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B5bf02a:L5bf02a:{c.instructions+=8;NFSU2_TR(0x5bf02a);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5bf02e:{NFSU2_TR(0x5bf02e);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bf030:{NFSU2_TR(0x5bf030);
u8 U[4];
w4(U+0,u32(0x870ce4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bf035:{NFSU2_TR(0x5bf035);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bf037:{NFSU2_TR(0x5bf037);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bf039:{NFSU2_TR(0x5bf039);
u8 U[4];
w4(U+0,u32(0x7a37b8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bf03e:{NFSU2_TR(0x5bf03e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bf03f:{NFSU2_TR(0x5bf03f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bf041ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B5bf041:L5bf041:{c.instructions+=8;NFSU2_TR(0x5bf041);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5bf045:{NFSU2_TR(0x5bf045);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bf047:{NFSU2_TR(0x5bf047);
u8 U[4];
w4(U+0,u32(0x870ce8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bf04c:{NFSU2_TR(0x5bf04c);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bf04e:{NFSU2_TR(0x5bf04e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bf050:{NFSU2_TR(0x5bf050);
u8 U[4];
w4(U+0,u32(0x7a37a0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bf055:{NFSU2_TR(0x5bf055);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bf056:{NFSU2_TR(0x5bf056);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bf058ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B5bf058:L5bf058:{c.instructions+=8;NFSU2_TR(0x5bf058);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5bf05c:{NFSU2_TR(0x5bf05c);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bf05e:{NFSU2_TR(0x5bf05e);
u8 U[4];
w4(U+0,u32(0x870cecull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bf063:{NFSU2_TR(0x5bf063);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bf065:{NFSU2_TR(0x5bf065);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bf067:{NFSU2_TR(0x5bf067);
u8 U[4];
w4(U+0,u32(0x7a3788ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bf06c:{NFSU2_TR(0x5bf06c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bf06d:{NFSU2_TR(0x5bf06d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bf06full));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B5bf06f:L5bf06f:{c.instructions+=8;NFSU2_TR(0x5bf06f);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5bf073:{NFSU2_TR(0x5bf073);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bf075:{NFSU2_TR(0x5bf075);
u8 U[4];
w4(U+0,u32(0x870cf0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bf07a:{NFSU2_TR(0x5bf07a);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bf07c:{NFSU2_TR(0x5bf07c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bf07e:{NFSU2_TR(0x5bf07e);
u8 U[4];
w4(U+0,u32(0x7a3770ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bf083:{NFSU2_TR(0x5bf083);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bf084:{NFSU2_TR(0x5bf084);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bf086ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B5bf086:L5bf086:{c.instructions+=8;NFSU2_TR(0x5bf086);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5bf08a:{NFSU2_TR(0x5bf08a);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bf08c:{NFSU2_TR(0x5bf08c);
u8 U[4];
w4(U+0,u32(0x870cf4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bf091:{NFSU2_TR(0x5bf091);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bf093:{NFSU2_TR(0x5bf093);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bf095:{NFSU2_TR(0x5bf095);
u8 U[4];
w4(U+0,u32(0x7a3760ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bf09a:{NFSU2_TR(0x5bf09a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bf09b:{NFSU2_TR(0x5bf09b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bf09dull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B5bf09d:L5bf09d:{c.instructions+=8;NFSU2_TR(0x5bf09d);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5bf0a1:{NFSU2_TR(0x5bf0a1);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bf0a3:{NFSU2_TR(0x5bf0a3);
u8 U[4];
w4(U+0,u32(0x870cf8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bf0a8:{NFSU2_TR(0x5bf0a8);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bf0aa:{NFSU2_TR(0x5bf0aa);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bf0ac:{NFSU2_TR(0x5bf0ac);
u8 U[4];
w4(U+0,u32(0x7a3750ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bf0b1:{NFSU2_TR(0x5bf0b1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bf0b2:{NFSU2_TR(0x5bf0b2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bf0b4ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B5bf0b4:L5bf0b4:{c.instructions+=8;NFSU2_TR(0x5bf0b4);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5bf0b8:{NFSU2_TR(0x5bf0b8);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bf0ba:{NFSU2_TR(0x5bf0ba);
u8 U[4];
w4(U+0,u32(0x870cfcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bf0bf:{NFSU2_TR(0x5bf0bf);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bf0c1:{NFSU2_TR(0x5bf0c1);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bf0c3:{NFSU2_TR(0x5bf0c3);
u8 U[4];
w4(U+0,u32(0x7a373cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bf0c8:{NFSU2_TR(0x5bf0c8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bf0c9:{NFSU2_TR(0x5bf0c9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bf0cbull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B5bf0cb:L5bf0cb:{c.instructions+=8;NFSU2_TR(0x5bf0cb);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bf0cd:{NFSU2_TR(0x5bf0cd);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5bf0d1:{NFSU2_TR(0x5bf0d1);
u8 U[4];
w4(U+0,u32(0x870d00ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bf0d6:{NFSU2_TR(0x5bf0d6);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bf0d8:{NFSU2_TR(0x5bf0d8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bf0da:{NFSU2_TR(0x5bf0da);
u8 U[4];
w4(U+0,u32(0x7a3724ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bf0df:{NFSU2_TR(0x5bf0df);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bf0e0:{NFSU2_TR(0x5bf0e0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bf0e2ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B5bf0e2:L5bf0e2:{c.instructions+=8;NFSU2_TR(0x5bf0e2);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5bf0e6:{NFSU2_TR(0x5bf0e6);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bf0e8:{NFSU2_TR(0x5bf0e8);
u8 U[4];
w4(U+0,u32(0x870d04ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bf0ed:{NFSU2_TR(0x5bf0ed);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bf0ef:{NFSU2_TR(0x5bf0ef);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bf0f1:{NFSU2_TR(0x5bf0f1);
u8 U[4];
w4(U+0,u32(0x7a3714ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bf0f6:{NFSU2_TR(0x5bf0f6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bf0f7:{NFSU2_TR(0x5bf0f7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bf0f9ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B5bf0f9:L5bf0f9:{c.instructions+=8;NFSU2_TR(0x5bf0f9);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5bf0fd:{NFSU2_TR(0x5bf0fd);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bf0ff:{NFSU2_TR(0x5bf0ff);
u8 U[4];
w4(U+0,u32(0x870d08ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bf104:{NFSU2_TR(0x5bf104);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bf106:{NFSU2_TR(0x5bf106);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bf108:{NFSU2_TR(0x5bf108);
u8 U[4];
w4(U+0,u32(0x7a3708ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bf10d:{NFSU2_TR(0x5bf10d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bf10e:{NFSU2_TR(0x5bf10e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bf110ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B5bf110:L5bf110:{c.instructions+=8;NFSU2_TR(0x5bf110);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5bf114:{NFSU2_TR(0x5bf114);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bf116:{NFSU2_TR(0x5bf116);
u8 U[4];
w4(U+0,u32(0x870d0cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bf11b:{NFSU2_TR(0x5bf11b);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bf11d:{NFSU2_TR(0x5bf11d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bf11f:{NFSU2_TR(0x5bf11f);
u8 U[4];
w4(U+0,u32(0x7a36f4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bf124:{NFSU2_TR(0x5bf124);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bf125:{NFSU2_TR(0x5bf125);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bf127ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B5bf127:L5bf127:{c.instructions+=8;NFSU2_TR(0x5bf127);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5bf12b:{NFSU2_TR(0x5bf12b);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bf12d:{NFSU2_TR(0x5bf12d);
u8 U[4];
w4(U+0,u32(0x870d10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bf132:{NFSU2_TR(0x5bf132);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bf134:{NFSU2_TR(0x5bf134);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bf136:{NFSU2_TR(0x5bf136);
u8 U[4];
w4(U+0,u32(0x7a36e4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bf13b:{NFSU2_TR(0x5bf13b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bf13c:{NFSU2_TR(0x5bf13c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bf13eull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B5bf13e:L5bf13e:{c.instructions+=8;NFSU2_TR(0x5bf13e);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5bf142:{NFSU2_TR(0x5bf142);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bf144:{NFSU2_TR(0x5bf144);
u8 U[4];
w4(U+0,u32(0x870d18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bf149:{NFSU2_TR(0x5bf149);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bf14b:{NFSU2_TR(0x5bf14b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bf14d:{NFSU2_TR(0x5bf14d);
u8 U[4];
w4(U+0,u32(0x7a36d0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bf152:{NFSU2_TR(0x5bf152);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bf153:{NFSU2_TR(0x5bf153);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bf155ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B5bf155:L5bf155:{c.instructions+=8;NFSU2_TR(0x5bf155);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5bf159:{NFSU2_TR(0x5bf159);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bf15b:{NFSU2_TR(0x5bf15b);
u8 U[4];
w4(U+0,u32(0x870d1cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bf160:{NFSU2_TR(0x5bf160);
if(mod_hook_table[7]){SPILL();c.pc=0x5bf160u;mod_hook_table[7](c);SPILL();if(c.pc!=0x5bf160u){TAIL_DYNAMIC(c.pc);}}
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bf162:{NFSU2_TR(0x5bf162);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bf164:{NFSU2_TR(0x5bf164);
u8 U[4];
w4(U+0,u32(0x7a36bcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bf169:{NFSU2_TR(0x5bf169);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bf16a:{NFSU2_TR(0x5bf16a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bf16cull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B5bf16c:L5bf16c:{c.instructions+=8;NFSU2_TR(0x5bf16c);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5bf170:{NFSU2_TR(0x5bf170);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bf172:{NFSU2_TR(0x5bf172);
u8 U[4];
w4(U+0,u32(0x87099cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bf177:{NFSU2_TR(0x5bf177);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bf179:{NFSU2_TR(0x5bf179);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bf17b:{NFSU2_TR(0x5bf17b);
u8 U[4];
w4(U+0,u32(0x7a36a8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bf180:{NFSU2_TR(0x5bf180);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bf181:{NFSU2_TR(0x5bf181);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bf183ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B5bf183:L5bf183:{c.instructions+=8;NFSU2_TR(0x5bf183);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5bf187:{NFSU2_TR(0x5bf187);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bf189:{NFSU2_TR(0x5bf189);
u8 U[4];
w4(U+0,u32(0x870d24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bf18e:{NFSU2_TR(0x5bf18e);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bf190:{NFSU2_TR(0x5bf190);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bf192:{NFSU2_TR(0x5bf192);
u8 U[4];
w4(U+0,u32(0x7a369cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bf197:{NFSU2_TR(0x5bf197);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bf198:{NFSU2_TR(0x5bf198);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bf19aull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B5bf19a:L5bf19a:{c.instructions+=3;NFSU2_TR(0x5bf19a);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5bf19e:{NFSU2_TR(0x5bf19e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bf19f:{NFSU2_TR(0x5bf19f);
u8 U[4];
__builtin_memmove((U+0),gp(0x783014),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bf1a5ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B5bf1a5:L5bf1a5:{c.instructions+=3;NFSU2_TR(0x5bf1a5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5bf1a6:{NFSU2_TR(0x5bf1a6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5bf1a7:{NFSU2_TR(0x5bf1a7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5bf1b0:L5bf1b0:{c.instructions+=5;NFSU2_TR(0x5bf1b0);
__builtin_memmove((R+4),gp(0x870d14),4);
}
B5bf1b6:{NFSU2_TR(0x5bf1b6);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5bf1b8:{NFSU2_TR(0x5bf1b8);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B5bf1bb:{NFSU2_TR(0x5bf1bb);
__builtin_memmove((R+0),(R+518),1);
}
B5bf1be:{NFSU2_TR(0x5bf1be);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5bf1c0:L5bf1c0:{c.instructions+=10;NFSU2_TR(0x5bf1c0);
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
B5bf1c3:{NFSU2_TR(0x5bf1c3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bf1c4:{NFSU2_TR(0x5bf1c4);
__builtin_memmove((R+24),gp(0x783330),4);
}
B5bf1ca:{NFSU2_TR(0x5bf1ca);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bf1cc:{NFSU2_TR(0x5bf1cc);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bf1ce:{NFSU2_TR(0x5bf1ce);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bf1d0:{NFSU2_TR(0x5bf1d0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bf1d2:{NFSU2_TR(0x5bf1d2);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5bf1d6:{NFSU2_TR(0x5bf1d6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bf1d7:{NFSU2_TR(0x5bf1d7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bf1d9ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B5bf1d9:L5bf1d9:{c.instructions+=2;NFSU2_TR(0x5bf1d9);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x12ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5bf1de:{NFSU2_TR(0x5bf1de);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5bf204;}}
}
B5bf1e0:L5bf1e0:{c.instructions+=3;NFSU2_TR(0x5bf1e0);
__builtin_memmove((R+0),gp(0x864f4c),4);
}
B5bf1e5:{NFSU2_TR(0x5bf1e5);
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
B5bf1e7:{NFSU2_TR(0x5bf1e7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5bf1f3;}}
}
B5bf1e9:L5bf1e9:{c.instructions+=1;NFSU2_TR(0x5bf1e9);
s4(0x864f4c,u32(0x1ull));
}
B5bf1f3:L5bf1f3:{c.instructions+=2;NFSU2_TR(0x5bf1f3);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bf1f5:{NFSU2_TR(0x5bf1f5);
u8 U[4];
__builtin_memmove((U+0),gp(0x78330c),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bf1fbull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B5bf1fb:L5bf1fb:{c.instructions+=4;NFSU2_TR(0x5bf1fb);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5bf1ff:{NFSU2_TR(0x5bf1ff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5bf200:{NFSU2_TR(0x5bf200);
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
B5bf203:{NFSU2_TR(0x5bf203);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5bf204:L5bf204:{c.instructions+=2;NFSU2_TR(0x5bf204);
if(mod_hook_table[11]){SPILL();c.pc=0x5bf204u;mod_hook_table[11](c);SPILL();if(c.pc!=0x5bf204u){TAIL_DYNAMIC(c.pc);}}
w4(R+4,u32(0x89cf48ull));
}
B5bf209:{NFSU2_TR(0x5bf209);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bf20eull));
TAIL_STATIC(0x5f00f0u,5f0);
}
B5bf20e:L5bf20e:{c.instructions+=2;NFSU2_TR(0x5bf20e);
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
B5bf210:{NFSU2_TR(0x5bf210);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5bf21b;}}
}
B5bf212:L5bf212:{c.instructions+=3;NFSU2_TR(0x5bf212);
__builtin_memmove((R+0),gp(0x870988),4);
}
B5bf217:{NFSU2_TR(0x5bf217);
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
B5bf219:{NFSU2_TR(0x5bf219);
if(r1(R+518)){{goto L5bf22c;}}
}
B5bf21b:L5bf21b:{c.instructions+=7;NFSU2_TR(0x5bf21b);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bf21d:{NFSU2_TR(0x5bf21d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bf21f:{NFSU2_TR(0x5bf21f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bf221:{NFSU2_TR(0x5bf221);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bf223:{NFSU2_TR(0x5bf223);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5bf227:{NFSU2_TR(0x5bf227);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bf228:{NFSU2_TR(0x5bf228);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bf22aull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B5bf22a:L5bf22a:{c.instructions+=1;NFSU2_TR(0x5bf22a);
{goto L5bf23d;}
}
B5bf22c:L5bf22c:{c.instructions+=6;NFSU2_TR(0x5bf22c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bf22e:{NFSU2_TR(0x5bf22e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bf230:{NFSU2_TR(0x5bf230);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bf232:{NFSU2_TR(0x5bf232);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5bf236:{NFSU2_TR(0x5bf236);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bf237:{NFSU2_TR(0x5bf237);
u8 U[4];
__builtin_memmove((U+0),gp(0x783328),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bf23dull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B5bf23d:L5bf23d:{c.instructions+=2;NFSU2_TR(0x5bf23d);
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
B5bf23f:{NFSU2_TR(0x5bf23f);
if(r1(R+518)){{goto L5bf257;}}
}
B5bf241:L5bf241:{c.instructions+=3;NFSU2_TR(0x5bf241);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5bf245:{NFSU2_TR(0x5bf245);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bf246:{NFSU2_TR(0x5bf246);
u8 U[4];
__builtin_memmove((U+0),gp(0x783334),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bf24cull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B5bf24c:L5bf24c:{c.instructions+=3;NFSU2_TR(0x5bf24c);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5bf250:{NFSU2_TR(0x5bf250);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bf251:{NFSU2_TR(0x5bf251);
u8 U[4];
__builtin_memmove((U+0),gp(0x78332c),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bf257ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B5bf257:L5bf257:{c.instructions+=4;NFSU2_TR(0x5bf257);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5bf25b:{NFSU2_TR(0x5bf25b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5bf25c:{NFSU2_TR(0x5bf25c);
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
B5bf25f:{NFSU2_TR(0x5bf25f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5bf260:L5bf260:{c.instructions+=59;NFSU2_TR(0x5bf260);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x38ull))));
}
B5bf263:{NFSU2_TR(0x5bf263);
u8 U[5];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B5bf267:{NFSU2_TR(0x5bf267);
u8 U[1];
w1(U+0,u8(0x20ull));
s1(u32(r4(R+16)),r1(U+0));
}
B5bf26c:{NFSU2_TR(0x5bf26c);
u8 U[5];
w4(U+0,u32(u32(u32(0x1ull))+u32(r4(R+16))));
w1(U+4,u8(0x2eull));
s1(u32(r4(U+0)),r1(U+4));
}
B5bf271:{NFSU2_TR(0x5bf271);
u8 U[5];
w4(U+0,u32(u32(u32(0x2ull))+u32(r4(R+16))));
w1(U+4,u8(0x2cull));
s1(u32(r4(U+0)),r1(U+4));
}
B5bf276:{NFSU2_TR(0x5bf276);
u8 U[5];
w4(U+0,u32(u32(u32(0x3ull))+u32(r4(R+16))));
w1(U+4,u8(0x5full));
s1(u32(r4(U+0)),r1(U+4));
}
B5bf27b:{NFSU2_TR(0x5bf27b);
u8 U[5];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
w1(U+4,u8(0x40ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5bf280:{NFSU2_TR(0x5bf280);
u8 U[5];
w4(U+0,u32(u32(u32(0x5ull))+u32(r4(R+16))));
w1(U+4,u8(0x2dull));
s1(u32(r4(U+0)),r1(U+4));
}
B5bf285:{NFSU2_TR(0x5bf285);
u8 U[5];
w4(U+0,u32(u32(u32(0x6ull))+u32(r4(R+16))));
w1(U+4,u8(0x60ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5bf28a:{NFSU2_TR(0x5bf28a);
u8 U[5];
w4(U+0,u32(u32(u32(0x7ull))+u32(r4(R+16))));
w1(U+4,u8(0x3dull));
s1(u32(r4(U+0)),r1(U+4));
}
B5bf28f:{NFSU2_TR(0x5bf28f);
u8 U[5];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
w1(U+4,u8(0x5bull));
s1(u32(r4(U+0)),r1(U+4));
}
B5bf294:{NFSU2_TR(0x5bf294);
u8 U[5];
w4(U+0,u32(u32(u32(0x9ull))+u32(r4(R+16))));
w1(U+4,u8(0x5dull));
s1(u32(r4(U+0)),r1(U+4));
}
B5bf299:{NFSU2_TR(0x5bf299);
u8 U[5];
w4(U+0,u32(u32(u32(0xaull))+u32(r4(R+16))));
w1(U+4,u8(0x5cull));
s1(u32(r4(U+0)),r1(U+4));
}
B5bf29e:{NFSU2_TR(0x5bf29e);
u8 U[5];
w4(U+0,u32(u32(u32(0xbull))+u32(r4(R+16))));
w1(U+4,u8(0x3bull));
s1(u32(r4(U+0)),r1(U+4));
}
B5bf2a3:{NFSU2_TR(0x5bf2a3);
u8 U[5];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w1(U+4,u8(0x27ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5bf2a8:{NFSU2_TR(0x5bf2a8);
u8 U[5];
w4(U+0,u32(u32(u32(0xdull))+u32(r4(R+16))));
w1(U+4,u8(0x2full));
s1(u32(r4(U+0)),r1(U+4));
}
B5bf2ad:{NFSU2_TR(0x5bf2ad);
u8 U[5];
w4(U+0,u32(u32(u32(0xeull))+u32(r4(R+16))));
w1(U+4,u8(0x3cull));
s1(u32(r4(U+0)),r1(U+4));
}
B5bf2b2:{NFSU2_TR(0x5bf2b2);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
w1(U+4,u8(0x3eull));
s1(u32(r4(U+0)),r1(U+4));
}
B5bf2b7:{NFSU2_TR(0x5bf2b7);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w1(U+4,u8(0x3full));
s1(u32(r4(U+0)),r1(U+4));
}
B5bf2bc:{NFSU2_TR(0x5bf2bc);
u8 U[5];
w4(U+0,u32(u32(u32(0x11ull))+u32(r4(R+16))));
w1(U+4,u8(0x3aull));
s1(u32(r4(U+0)),r1(U+4));
}
B5bf2c1:{NFSU2_TR(0x5bf2c1);
u8 U[5];
w4(U+0,u32(u32(u32(0x12ull))+u32(r4(R+16))));
w1(U+4,u8(0x22ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5bf2c6:{NFSU2_TR(0x5bf2c6);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
w1(U+4,u8(0x7bull));
s1(u32(r4(U+0)),r1(U+4));
}
B5bf2cb:{NFSU2_TR(0x5bf2cb);
u8 U[5];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w1(U+4,u8(0x7dull));
s1(u32(r4(U+0)),r1(U+4));
}
B5bf2d0:{NFSU2_TR(0x5bf2d0);
u8 U[5];
w4(U+0,u32(u32(u32(0x15ull))+u32(r4(R+16))));
w1(U+4,u8(0x7cull));
s1(u32(r4(U+0)),r1(U+4));
}
B5bf2d5:{NFSU2_TR(0x5bf2d5);
u8 U[5];
w4(U+0,u32(u32(u32(0x16ull))+u32(r4(R+16))));
w1(U+4,u8(0x2bull));
s1(u32(r4(U+0)),r1(U+4));
}
B5bf2da:{NFSU2_TR(0x5bf2da);
u8 U[5];
w4(U+0,u32(u32(u32(0x17ull))+u32(r4(R+16))));
w1(U+4,u8(0x28ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5bf2df:{NFSU2_TR(0x5bf2df);
u8 U[5];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w1(U+4,u8(0x29ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5bf2e4:{NFSU2_TR(0x5bf2e4);
u8 U[5];
w4(U+0,u32(u32(u32(0x19ull))+u32(r4(R+16))));
w1(U+4,u8(0x2aull));
s1(u32(r4(U+0)),r1(U+4));
}
B5bf2e9:{NFSU2_TR(0x5bf2e9);
u8 U[5];
w4(U+0,u32(u32(u32(0x1aull))+u32(r4(R+16))));
w1(U+4,u8(0x26ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5bf2ee:{NFSU2_TR(0x5bf2ee);
u8 U[5];
w4(U+0,u32(u32(u32(0x1bull))+u32(r4(R+16))));
w1(U+4,u8(0x25ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5bf2f3:{NFSU2_TR(0x5bf2f3);
u8 U[5];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w1(U+4,u8(0x23ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5bf2f8:{NFSU2_TR(0x5bf2f8);
u8 U[5];
w4(U+0,u32(u32(u32(0x1dull))+u32(r4(R+16))));
w1(U+4,u8(0x21ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5bf2fd:{NFSU2_TR(0x5bf2fd);
u8 U[5];
w4(U+0,u32(u32(u32(0x1eull))+u32(r4(R+16))));
w1(U+4,u8(0x7eull));
s1(u32(r4(U+0)),r1(U+4));
}
B5bf302:{NFSU2_TR(0x5bf302);
u8 U[5];
w4(U+0,u32(u32(u32(0x1full))+u32(r4(R+16))));
w1(U+4,u8(0xe5ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5bf307:{NFSU2_TR(0x5bf307);
u8 U[5];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w1(U+4,u8(0xe4ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5bf30c:{NFSU2_TR(0x5bf30c);
u8 U[5];
w4(U+0,u32(u32(u32(0x21ull))+u32(r4(R+16))));
w1(U+4,u8(0xe0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5bf311:{NFSU2_TR(0x5bf311);
u8 U[5];
w4(U+0,u32(u32(u32(0x22ull))+u32(r4(R+16))));
w1(U+4,u8(0xe2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5bf316:{NFSU2_TR(0x5bf316);
u8 U[5];
w4(U+0,u32(u32(u32(0x23ull))+u32(r4(R+16))));
w1(U+4,u8(0xebull));
s1(u32(r4(U+0)),r1(U+4));
}
B5bf31b:{NFSU2_TR(0x5bf31b);
u8 U[5];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w1(U+4,u8(0xe8ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5bf320:{NFSU2_TR(0x5bf320);
u8 U[5];
w4(U+0,u32(u32(u32(0x25ull))+u32(r4(R+16))));
w1(U+4,u8(0xe9ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5bf325:{NFSU2_TR(0x5bf325);
u8 U[5];
w4(U+0,u32(u32(u32(0x26ull))+u32(r4(R+16))));
w1(U+4,u8(0xeaull));
s1(u32(r4(U+0)),r1(U+4));
}
B5bf32a:{NFSU2_TR(0x5bf32a);
u8 U[5];
w4(U+0,u32(u32(u32(0x27ull))+u32(r4(R+16))));
w1(U+4,u8(0xefull));
s1(u32(r4(U+0)),r1(U+4));
}
B5bf32f:{NFSU2_TR(0x5bf32f);
u8 U[5];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w1(U+4,u8(0xeeull));
s1(u32(r4(U+0)),r1(U+4));
}
B5bf334:{NFSU2_TR(0x5bf334);
u8 U[5];
w4(U+0,u32(u32(u32(0x29ull))+u32(r4(R+16))));
w1(U+4,u8(0xf6ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5bf339:{NFSU2_TR(0x5bf339);
u8 U[5];
w4(U+0,u32(u32(u32(0x2aull))+u32(r4(R+16))));
w1(U+4,u8(0xf4ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5bf33e:{NFSU2_TR(0x5bf33e);
u8 U[5];
w4(U+0,u32(u32(u32(0x2bull))+u32(r4(R+16))));
w1(U+4,u8(0xfcull));
s1(u32(r4(U+0)),r1(U+4));
}
B5bf343:{NFSU2_TR(0x5bf343);
u8 U[5];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
w1(U+4,u8(0xf9ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5bf348:{NFSU2_TR(0x5bf348);
u8 U[5];
w4(U+0,u32(u32(u32(0x2dull))+u32(r4(R+16))));
w1(U+4,u8(0xfbull));
s1(u32(r4(U+0)),r1(U+4));
}
B5bf34d:{NFSU2_TR(0x5bf34d);
u8 U[5];
w4(U+0,u32(u32(u32(0x2eull))+u32(r4(R+16))));
w1(U+4,u8(0xe7ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5bf352:{NFSU2_TR(0x5bf352);
u8 U[5];
w4(U+0,u32(u32(u32(0x2full))+u32(r4(R+16))));
w1(U+4,u8(0x9cull));
s1(u32(r4(U+0)),r1(U+4));
}
B5bf357:{NFSU2_TR(0x5bf357);
u8 U[5];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
w1(U+4,u8(0xf2ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5bf35c:{NFSU2_TR(0x5bf35c);
u8 U[5];
w4(U+0,u32(u32(u32(0x31ull))+u32(r4(R+16))));
w1(U+4,u8(0xecull));
s1(u32(r4(U+0)),r1(U+4));
}
B5bf361:{NFSU2_TR(0x5bf361);
u8 U[5];
w4(U+0,u32(u32(u32(0x32ull))+u32(r4(R+16))));
w1(U+4,u8(0xc5ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5bf366:{NFSU2_TR(0x5bf366);
u8 U[5];
w4(U+0,u32(u32(u32(0x33ull))+u32(r4(R+16))));
w1(U+4,u8(0xc4ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5bf36b:{NFSU2_TR(0x5bf36b);
u8 U[5];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
w1(U+4,u8(0xd6ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5bf370:{NFSU2_TR(0x5bf370);
u8 U[5];
w4(U+0,u32(u32(u32(0x35ull))+u32(r4(R+16))));
w1(U+4,u8(0xdcull));
s1(u32(r4(U+0)),r1(U+4));
}
B5bf375:{NFSU2_TR(0x5bf375);
u8 U[5];
w4(U+0,u32(u32(u32(0x36ull))+u32(r4(R+16))));
w1(U+4,u8(0xa7ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5bf37a:{NFSU2_TR(0x5bf37a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5bf37c:{NFSU2_TR(0x5bf37c);
__builtin_memmove((R+16),(R+16),4);
}
B5bf380:L5bf380:{c.instructions+=2;NFSU2_TR(0x5bf380);
u8 U[11];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+16))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((U+9),(U+8),1);
w1(U+10,u8(u32(r1(U+9))-u32(r1(R+4))));
w1(R+518,u8((r1(U+10))==(u8(0x0ull))));
}
B5bf384:{NFSU2_TR(0x5bf384);
if(r1(R+518)){{goto L5bf392;}}
}
B5bf386:L5bf386:{c.instructions+=3;NFSU2_TR(0x5bf386);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5bf387:{NFSU2_TR(0x5bf387);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x37ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x37ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5bf38a:{NFSU2_TR(0x5bf38a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5bf380u);}goto L5bf380;}}
}
B5bf38c:L5bf38c:{c.instructions+=3;NFSU2_TR(0x5bf38c);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B5bf38e:{NFSU2_TR(0x5bf38e);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x38ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x38ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x38ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5bf391:{NFSU2_TR(0x5bf391);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5bf392:L5bf392:{c.instructions+=3;NFSU2_TR(0x5bf392);
w1(R+0,u8(0x1ull));
}
B5bf394:{NFSU2_TR(0x5bf394);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x38ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x38ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x38ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5bf397:{NFSU2_TR(0x5bf397);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5bf3a0:L5bf3a0:{c.instructions+=3;NFSU2_TR(0x5bf3a0);
__builtin_memmove((R+0),gp(0x8709bc),4);
}
B5bf3a5:{NFSU2_TR(0x5bf3a5);
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
B5bf3a7:{NFSU2_TR(0x5bf3a7);
if(r1(R+518)){{goto L5bf3cf;}}
}
B5bf3a9:L5bf3a9:{c.instructions+=6;NFSU2_TR(0x5bf3a9);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5bf3ad:{NFSU2_TR(0x5bf3ad);
__builtin_memmove((R+0),gp(0x8709b8),4);
}
B5bf3b2:{NFSU2_TR(0x5bf3b2);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B5bf3b4:{NFSU2_TR(0x5bf3b4);
__builtin_memmove((R+4),gp(0x8709b4),4);
}
B5bf3ba:{NFSU2_TR(0x5bf3ba);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5bf3bc:{NFSU2_TR(0x5bf3bc);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5bf3c0;}}
}
B5bf3be:L5bf3be:{c.instructions+=1;NFSU2_TR(0x5bf3be);
__builtin_memmove((R+0),(R+4),4);
}
B5bf3c0:L5bf3c0:{c.instructions+=6;NFSU2_TR(0x5bf3c0);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5bf3c2:{NFSU2_TR(0x5bf3c2);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5bf3c4:{NFSU2_TR(0x5bf3c4);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
__builtin_memmove((R+4),(U+1),1);
}
B5bf3c7:{NFSU2_TR(0x5bf3c7);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B5bf3c8:{NFSU2_TR(0x5bf3c8);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5bf3ca:{NFSU2_TR(0x5bf3ca);
__builtin_memmove(gp(0x8709b8),(R+0),4);
}
B5bf3cf:L5bf3cf:{c.instructions+=1;NFSU2_TR(0x5bf3cf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5bf3d0:L5bf3d0:{c.instructions+=4;NFSU2_TR(0x5bf3d0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bf3d1:{NFSU2_TR(0x5bf3d1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bf3d2:{NFSU2_TR(0x5bf3d2);
u8 U[4];
w4(U+0,u32(0x400ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bf3d7:{NFSU2_TR(0x5bf3d7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bf3dcull));
TAIL_STATIC(0x575620u,575);
}
B5bf3dc:L5bf3dc:{c.instructions+=5;NFSU2_TR(0x5bf3dc);
__builtin_memmove((R+24),(R+0),4);
}
B5bf3de:{NFSU2_TR(0x5bf3de);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5bf3e0:{NFSU2_TR(0x5bf3e0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5bf3e3:{NFSU2_TR(0x5bf3e3);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5bf3e5:{NFSU2_TR(0x5bf3e5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5bf3ec;}}
}
B5bf3e7:L5bf3e7:{c.instructions+=4;NFSU2_TR(0x5bf3e7);
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
B5bf3e9:{NFSU2_TR(0x5bf3e9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5bf3ea:{NFSU2_TR(0x5bf3ea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5bf3eb:{NFSU2_TR(0x5bf3eb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5bf3ec:L5bf3ec:{c.instructions+=12;NFSU2_TR(0x5bf3ec);
__builtin_memmove((R+0),gp(0x80057f),1);
}
B5bf3f1:{NFSU2_TR(0x5bf3f1);
u8 U[5];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B5bf3f5:{NFSU2_TR(0x5bf3f5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bf3f6:{NFSU2_TR(0x5bf3f6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bf3f7:{NFSU2_TR(0x5bf3f7);
__builtin_memmove(gp(0x80057f),(R+4),1);
}
B5bf3fd:{NFSU2_TR(0x5bf3fd);
__builtin_memmove((R+28),(R+24),4);
}
B5bf3ff:{NFSU2_TR(0x5bf3ff);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5bf403:{NFSU2_TR(0x5bf403);
u8 U[1];
__builtin_memmove((U+0),(R+8),1);
s1(u32(r4(R+24)),r1(U+0));
}
B5bf405:{NFSU2_TR(0x5bf405);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
w1(U+4,u8(0x3aull));
s1(u32(r4(U+0)),r1(U+4));
}
B5bf409:{NFSU2_TR(0x5bf409);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ull))));
w1(U+4,u8(0x5cull));
s1(u32(r4(U+0)),r1(U+4));
}
B5bf40d:{NFSU2_TR(0x5bf40d);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5bf410:{NFSU2_TR(0x5bf410);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
}
B5bf411:L5bf411:{c.instructions+=4;NFSU2_TR(0x5bf411);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5bf414:{NFSU2_TR(0x5bf414);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B5bf415:{NFSU2_TR(0x5bf415);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(R+0))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5bf417:{NFSU2_TR(0x5bf417);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5bf411u);}goto L5bf411;}}
}
B5bf419:L5bf419:{c.instructions+=6;NFSU2_TR(0x5bf419);
__builtin_memmove((R+0),gp(0x7a38cc),4);
}
B5bf41e:{NFSU2_TR(0x5bf41e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B5bf420:{NFSU2_TR(0x5bf420);
__builtin_memmove((R+4),gp(0x7a38d0),4);
}
B5bf426:{NFSU2_TR(0x5bf426);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bf427:{NFSU2_TR(0x5bf427);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bf42a:{NFSU2_TR(0x5bf42a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bf42full));
TAIL_STATIC(0x57cac0u,57c);
}
B5bf42f:L5bf42f:{c.instructions+=6;NFSU2_TR(0x5bf42f);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B5bf433:{NFSU2_TR(0x5bf433);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5bf435:{NFSU2_TR(0x5bf435);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bf436:{NFSU2_TR(0x5bf436);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+12),(U+0),1);
}
B5bf439:{NFSU2_TR(0x5bf439);
__builtin_memmove(gp(0x80057f),(R+8),1);
}
B5bf43f:{NFSU2_TR(0x5bf43f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bf444ull));
TAIL_STATIC(0x575630u,575);
}
B5bf444:L5bf444:{c.instructions+=7;NFSU2_TR(0x5bf444);
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
B5bf447:{NFSU2_TR(0x5bf447);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5bf448:{NFSU2_TR(0x5bf448);
__builtin_memmove((R+0),(R+12),1);
}
B5bf44a:{NFSU2_TR(0x5bf44a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5bf44b:{NFSU2_TR(0x5bf44b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5bf44c:{NFSU2_TR(0x5bf44c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5bf44d:{NFSU2_TR(0x5bf44d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5bf450:L5bf450:{c.instructions+=9;NFSU2_TR(0x5bf450);
u8 U[6];
w1(R+512,u8((r4(R+16))<(u32(0xcull))));
w1(R+523,sborrow<u32>(r4(R+16),u32(0xcull)));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5bf453:{NFSU2_TR(0x5bf453);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bf454:{NFSU2_TR(0x5bf454);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bf455:{NFSU2_TR(0x5bf455);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bf456:{NFSU2_TR(0x5bf456);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bf457:{NFSU2_TR(0x5bf457);
w1(R+12,u8(0x41ull));
}
B5bf459:{NFSU2_TR(0x5bf459);
w4(R+28,u32(0x1ull));
}
B5bf45e:{NFSU2_TR(0x5bf45e);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5bf462:{NFSU2_TR(0x5bf462);
u8 U[4];
__builtin_memmove((U+0),gp(0x783164),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bf468ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B5bf468:L5bf468:{c.instructions+=5;NFSU2_TR(0x5bf468);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B5bf46a:{NFSU2_TR(0x5bf46a);
u8 U[4];
w4(U+0,u32(0x400ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bf46f:{NFSU2_TR(0x5bf46f);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bf473:{NFSU2_TR(0x5bf473);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bf477:{NFSU2_TR(0x5bf477);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bf47cull));
TAIL_STATIC(0x575620u,575);
}
B5bf47c:L5bf47c:{c.instructions+=5;NFSU2_TR(0x5bf47c);
__builtin_memmove((R+24),(R+0),4);
}
B5bf47e:{NFSU2_TR(0x5bf47e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5bf481:{NFSU2_TR(0x5bf481);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5bf483:{NFSU2_TR(0x5bf483);
s1(0x80057f,u8(0x0ull));
}
B5bf48a:{NFSU2_TR(0x5bf48a);
if(r1(R+518)){{goto L5bf531;}}
}
B5bf490:L5bf490:{c.instructions+=2;NFSU2_TR(0x5bf490);
u8 U[12];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+8,u32(u32(r4(U+4))&u32(r4(R+28))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B5bf494:{NFSU2_TR(0x5bf494);
if(r1(R+518)){{goto L5bf4d4;}}
}
B5bf496:L5bf496:{c.instructions+=5;NFSU2_TR(0x5bf496);
w4(R+0,u32(s32(s8(r1(R+12)))));
}
B5bf499:{NFSU2_TR(0x5bf499);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bf49a:{NFSU2_TR(0x5bf49a);
u8 U[4];
w4(U+0,u32(0x7a38d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bf49f:{NFSU2_TR(0x5bf49f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bf4a0:{NFSU2_TR(0x5bf4a0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bf4a5ull));
TAIL_STATIC(0x75c784u,75c);
}
B5bf4a5:L5bf4a5:{c.instructions+=3;NFSU2_TR(0x5bf4a5);
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
B5bf4a8:{NFSU2_TR(0x5bf4a8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bf4a9:{NFSU2_TR(0x5bf4a9);
u8 U[4];
__builtin_memmove((U+0),gp(0x783160),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bf4afull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B5bf4af:L5bf4af:{c.instructions+=2;NFSU2_TR(0x5bf4af);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5bf4b2:{NFSU2_TR(0x5bf4b2);
if(r1(R+518)){{goto L5bf4be;}}
}
B5bf4b4:L5bf4b4:{c.instructions+=3;NFSU2_TR(0x5bf4b4);
__builtin_memmove((R+4),gp(0x79dc60),4);
}
B5bf4ba:{NFSU2_TR(0x5bf4ba);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5bf4bc:{NFSU2_TR(0x5bf4bc);
if(r1(R+518)){{goto L5bf4d4;}}
}
B5bf4be:L5bf4be:{c.instructions+=2;NFSU2_TR(0x5bf4be);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5bf4c1:{NFSU2_TR(0x5bf4c1);
if(r1(R+518)){{goto L5bf4d4;}}
}
B5bf4c3:L5bf4c3:{c.instructions+=3;NFSU2_TR(0x5bf4c3);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5bf4c7:{NFSU2_TR(0x5bf4c7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bf4c8:{NFSU2_TR(0x5bf4c8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bf4cdull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5bf3d0u);}goto L5bf3d0;}
}
B5bf4cd:L5bf4cd:{c.instructions+=3;NFSU2_TR(0x5bf4cd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5bf4d0:{NFSU2_TR(0x5bf4d0);
}
B5bf4d2:{NFSU2_TR(0x5bf4d2);
{goto L5bf4e8;}
}
B5bf4d4:L5bf4d4:{c.instructions+=6;NFSU2_TR(0x5bf4d4);
w1(R+12,u8(u32(r1(R+12))+u32(u8(0x1ull))));
}
B5bf4d6:{NFSU2_TR(0x5bf4d6);
w4(R+28,shl<u32>(r4(R+28),u64(u32(0x1ull))));
}
B5bf4d8:{NFSU2_TR(0x5bf4d8);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B5bf4d9:{NFSU2_TR(0x5bf4d9);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x20ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x20ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5bf4dc:{NFSU2_TR(0x5bf4dc);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5bf4e0:{NFSU2_TR(0x5bf4e0);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5bf490u);}goto L5bf490;}}
}
B5bf4e2:L5bf4e2:{c.instructions+=2;NFSU2_TR(0x5bf4e2);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5bf4e6:{NFSU2_TR(0x5bf4e6);
{goto L5bf4ed;}
}
B5bf4e8:L5bf4e8:{c.instructions+=1;NFSU2_TR(0x5bf4e8);
w4(R+28,u32(0x1ull));
}
B5bf4ed:L5bf4ed:{c.instructions+=2;NFSU2_TR(0x5bf4ed);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bf4ee:{NFSU2_TR(0x5bf4ee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bf4f3ull));
TAIL_STATIC(0x575630u,575);
}
B5bf4f3:L5bf4f3:{c.instructions+=3;NFSU2_TR(0x5bf4f3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5bf4f6:{NFSU2_TR(0x5bf4f6);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5bf4f8:{NFSU2_TR(0x5bf4f8);
if(r1(R+518)){{goto L5bf52a;}}
}
B5bf4fa:L5bf4fa:{c.instructions+=6;NFSU2_TR(0x5bf4fa);
__builtin_memmove(gp(0x80057f),(R+12),1);
}
B5bf500:{NFSU2_TR(0x5bf500);
__builtin_memmove(gp(0x86e8b0),(R+12),1);
}
B5bf506:{NFSU2_TR(0x5bf506);
s1(0x86e8b1,u8(0x3aull));
}
B5bf50d:{NFSU2_TR(0x5bf50d);
s1(0x86e8b2,u8(0x5cull));
}
B5bf514:{NFSU2_TR(0x5bf514);
s1(0x86e8b3,u8(0x0ull));
}
B5bf51b:{NFSU2_TR(0x5bf51b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bf520ull));
TAIL_STATIC(0x5b7a10u,5b7);
}
B5bf520:L5bf520:{c.instructions+=7;NFSU2_TR(0x5bf520);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5bf521:{NFSU2_TR(0x5bf521);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5bf522:{NFSU2_TR(0x5bf522);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5bf523:{NFSU2_TR(0x5bf523);
__builtin_memmove((R+0),(R+12),1);
}
B5bf525:{NFSU2_TR(0x5bf525);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5bf526:{NFSU2_TR(0x5bf526);
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
B5bf529:{NFSU2_TR(0x5bf529);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5bf52a:L5bf52a:{c.instructions+=1;NFSU2_TR(0x5bf52a);
s1(0x80057f,u8(0x0ull));
}
B5bf531:L5bf531:{c.instructions+=7;NFSU2_TR(0x5bf531);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5bf532:{NFSU2_TR(0x5bf532);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5bf533:{NFSU2_TR(0x5bf533);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5bf534:{NFSU2_TR(0x5bf534);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B5bf536:{NFSU2_TR(0x5bf536);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5bf537:{NFSU2_TR(0x5bf537);
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
B5bf53a:{NFSU2_TR(0x5bf53a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5bf540:L5bf540:{c.instructions+=3;NFSU2_TR(0x5bf540);
__builtin_memmove((R+0),gp(0x800b98),4);
}
B5bf545:{NFSU2_TR(0x5bf545);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5bf547:{NFSU2_TR(0x5bf547);
if(r1(R+518)){{goto L5bf577;}}
}
B5bf549:L5bf549:{c.instructions+=1;NFSU2_TR(0x5bf549);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bf54eull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5bf450u);}goto L5bf450;}
}
B5bf54e:L5bf54e:{c.instructions+=2;NFSU2_TR(0x5bf54e);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5bf550:{NFSU2_TR(0x5bf550);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5bf55e;}}
}
B5bf552:L5bf552:{c.instructions+=2;NFSU2_TR(0x5bf552);
s4(0x800b98,u32(0x1ull));
}
B5bf55c:{NFSU2_TR(0x5bf55c);
{goto L5bf56a;}
}
B5bf55e:L5bf55e:{c.instructions+=1;NFSU2_TR(0x5bf55e);
w1(R+0,u8(0x1ull));
}
B5bf560:L5bf560:{c.instructions+=1;NFSU2_TR(0x5bf560);
s4(0x800b98,u32(0x0ull));
}
B5bf56a:L5bf56a:{c.instructions+=3;NFSU2_TR(0x5bf56a);
__builtin_memmove((R+4),gp(0x79dc60),4);
}
B5bf570:{NFSU2_TR(0x5bf570);
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
B5bf572:{NFSU2_TR(0x5bf572);
if(r1(R+518)){{goto L5bf576;}}
}
B5bf574:L5bf574:{c.instructions+=1;NFSU2_TR(0x5bf574);
w1(R+0,u8(0x1ull));
}
B5bf576:L5bf576:{c.instructions+=1;NFSU2_TR(0x5bf576);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5bf577:L5bf577:{c.instructions+=4;NFSU2_TR(0x5bf577);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5bf579:{NFSU2_TR(0x5bf579);
__builtin_memmove((R+0),gp(0x80057f),1);
}
B5bf57e:{NFSU2_TR(0x5bf57e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bf57f:{NFSU2_TR(0x5bf57f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bf584ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5bf3d0u);}goto L5bf3d0;}
}
B5bf584:L5bf584:{c.instructions+=3;NFSU2_TR(0x5bf584);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5bf587:{NFSU2_TR(0x5bf587);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5bf589:{NFSU2_TR(0x5bf589);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5bf560u);}goto L5bf560;}}
}
B5bf58b:L5bf58b:{c.instructions+=2;NFSU2_TR(0x5bf58b);
s4(0x800b98,u32(0x1ull));
}
B5bf595:{NFSU2_TR(0x5bf595);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5bf56au);}goto L5bf56a;}
}
B5bf5a0:L5bf5a0:{c.instructions+=10;NFSU2_TR(0x5bf5a0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bf5a1:{NFSU2_TR(0x5bf5a1);
__builtin_memmove((R+20),(R+16),4);
}
B5bf5a3:{NFSU2_TR(0x5bf5a3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff8ull))));
}
B5bf5a6:{NFSU2_TR(0x5bf5a6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xa0ull))));
}
B5bf5ac:{NFSU2_TR(0x5bf5ac);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bf5ad:{NFSU2_TR(0x5bf5ad);
__builtin_memmove((R+24),gp(0x783168),4);
}
B5bf5b3:{NFSU2_TR(0x5bf5b3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bf5b4:{NFSU2_TR(0x5bf5b4);
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
B5bf5b6:{NFSU2_TR(0x5bf5b6);
w4(R+4,u32(0x27ull));
}
B5bf5bb:{NFSU2_TR(0x5bf5bb);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B5bf5bf:L5bf5bf:{c.instructions+=1;NFSU2_TR(0x5bf5bf);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L5bf5c1;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5bf5bfu);}goto L5bf5bf;}
}
B5bf5c1:L5bf5c1:{c.instructions+=4;NFSU2_TR(0x5bf5c1);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5bf5c5:{NFSU2_TR(0x5bf5c5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bf5c6:{NFSU2_TR(0x5bf5c6);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x9cull));
s4(u32(r4(U+0)),r4(U+4));
}
B5bf5ce:{NFSU2_TR(0x5bf5ce);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bf5d0ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B5bf5d0:L5bf5d0:{c.instructions+=2;NFSU2_TR(0x5bf5d0);
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
B5bf5d2:{NFSU2_TR(0x5bf5d2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5bf5e7;}}
}
B5bf5d4:L5bf5d4:{c.instructions+=4;NFSU2_TR(0x5bf5d4);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5bf5d8:{NFSU2_TR(0x5bf5d8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bf5d9:{NFSU2_TR(0x5bf5d9);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x94ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5bf5e1:{NFSU2_TR(0x5bf5e1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bf5e3ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B5bf5e3:L5bf5e3:{c.instructions+=2;NFSU2_TR(0x5bf5e3);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5bf5e5:{NFSU2_TR(0x5bf5e5);
if(r1(R+518)){{goto L5bf5ef;}}
}
B5bf5e7:L5bf5e7:{c.instructions+=3;NFSU2_TR(0x5bf5e7);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5bf5eb:{NFSU2_TR(0x5bf5eb);
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
B5bf5ec:{NFSU2_TR(0x5bf5ec);
if(r1(R+518)){{goto L5bf5f7;}}
}
B5bf5ee:L5bf5ee:{c.instructions+=1;NFSU2_TR(0x5bf5ee);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B5bf5ef:L5bf5ef:{c.instructions+=6;NFSU2_TR(0x5bf5ef);
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
B5bf5f1:{NFSU2_TR(0x5bf5f1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5bf5f2:{NFSU2_TR(0x5bf5f2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5bf5f3:{NFSU2_TR(0x5bf5f3);
__builtin_memmove((R+16),(R+20),4);
}
B5bf5f5:{NFSU2_TR(0x5bf5f5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5bf5f6:{NFSU2_TR(0x5bf5f6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5bf5f7:L5bf5f7:{c.instructions+=6;NFSU2_TR(0x5bf5f7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5bf5f8:{NFSU2_TR(0x5bf5f8);
w4(R+0,u32(0x1ull));
}
B5bf5fd:{NFSU2_TR(0x5bf5fd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5bf5fe:{NFSU2_TR(0x5bf5fe);
__builtin_memmove((R+16),(R+20),4);
}
B5bf600:{NFSU2_TR(0x5bf600);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5bf601:{NFSU2_TR(0x5bf601);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5bf610:L5bf610:{c.instructions+=3;NFSU2_TR(0x5bf610);
if(mod_hook_table[5]&&!mod_bypass_take(5)){SPILL();c.pc=0x5bf610u;mod_hook_table[5](c);SPILL();{u32 sp_=r4(R+16);u32 ra_=m4(sp_);w4(R+16,sp_+12u);TAIL_DYNAMIC(ra_);}}
__builtin_memmove((R+0),gp(0x870d1c),4);
}
B5bf615:{NFSU2_TR(0x5bf615);
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
B5bf618:{NFSU2_TR(0x5bf618);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L5bf6ac;}}
}
B5bf61e:L5bf61e:{c.instructions+=1;NFSU2_TR(0x5bf61e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x5bf6b0ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5bf625:L5bf625:{c.instructions+=5;NFSU2_TR(0x5bf625);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5bf629:{NFSU2_TR(0x5bf629);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5bf62d:{NFSU2_TR(0x5bf62d);
u8 U[4];
w4(U+0,u32(0x280ull));
s4(u32(r4(R+0)),r4(U+0));
}
B5bf633:{NFSU2_TR(0x5bf633);
u8 U[4];
w4(U+0,u32(0x1e0ull));
s4(u32(r4(R+4)),r4(U+0));
}
B5bf639:{NFSU2_TR(0x5bf639);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5bf63c:L5bf63c:{c.instructions+=5;NFSU2_TR(0x5bf63c);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5bf640:{NFSU2_TR(0x5bf640);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5bf644:{NFSU2_TR(0x5bf644);
u8 U[4];
w4(U+0,u32(0x320ull));
s4(u32(r4(R+8)),r4(U+0));
}
B5bf64a:{NFSU2_TR(0x5bf64a);
u8 U[4];
w4(U+0,u32(0x258ull));
s4(u32(r4(R+0)),r4(U+0));
}
B5bf650:{NFSU2_TR(0x5bf650);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5bf653:L5bf653:{c.instructions+=5;NFSU2_TR(0x5bf653);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5bf657:{NFSU2_TR(0x5bf657);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5bf65b:{NFSU2_TR(0x5bf65b);
u8 U[4];
w4(U+0,u32(0x400ull));
s4(u32(r4(R+4)),r4(U+0));
}
B5bf661:{NFSU2_TR(0x5bf661);
u8 U[4];
w4(U+0,u32(0x300ull));
s4(u32(r4(R+8)),r4(U+0));
}
B5bf667:{NFSU2_TR(0x5bf667);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5bf66a:L5bf66a:{c.instructions+=5;NFSU2_TR(0x5bf66a);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5bf66e:{NFSU2_TR(0x5bf66e);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5bf672:{NFSU2_TR(0x5bf672);
u8 U[4];
w4(U+0,u32(0x500ull));
s4(u32(r4(R+0)),r4(U+0));
}
B5bf678:{NFSU2_TR(0x5bf678);
u8 U[4];
w4(U+0,u32(0x3c0ull));
s4(u32(r4(R+4)),r4(U+0));
}
B5bf67e:{NFSU2_TR(0x5bf67e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5bf681:L5bf681:{c.instructions+=5;NFSU2_TR(0x5bf681);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5bf685:{NFSU2_TR(0x5bf685);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5bf689:{NFSU2_TR(0x5bf689);
u8 U[4];
w4(U+0,u32(0x500ull));
s4(u32(r4(R+8)),r4(U+0));
}
B5bf68f:{NFSU2_TR(0x5bf68f);
u8 U[4];
w4(U+0,u32(0x400ull));
s4(u32(r4(R+0)),r4(U+0));
}
B5bf695:{NFSU2_TR(0x5bf695);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5bf698:L5bf698:{c.instructions+=4;NFSU2_TR(0x5bf698);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5bf69c:{NFSU2_TR(0x5bf69c);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5bf6a0:{NFSU2_TR(0x5bf6a0);
u8 U[4];
w4(U+0,u32(0x640ull));
s4(u32(r4(R+4)),r4(U+0));
}
B5bf6a6:{NFSU2_TR(0x5bf6a6);
u8 U[4];
w4(U+0,u32(0x4b0ull));
s4(u32(r4(R+8)),r4(U+0));
}
B5bf6ac:L5bf6ac:{c.instructions+=1;NFSU2_TR(0x5bf6ac);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5bf6d0:L5bf6d0:{c.instructions+=4;NFSU2_TR(0x5bf6d0);
__builtin_memmove((R+0),gp(0x870cd0),4);
}
B5bf6d5:{NFSU2_TR(0x5bf6d5);
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
B5bf6d7:{NFSU2_TR(0x5bf6d7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B5bf6da:{NFSU2_TR(0x5bf6da);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5bf6e0:L5bf6e0:{c.instructions+=5;NFSU2_TR(0x5bf6e0);
__builtin_memmove((R+0),gp(0x870758),4);
}
B5bf6e5:{NFSU2_TR(0x5bf6e5);
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
B5bf6e7:{NFSU2_TR(0x5bf6e7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bf6e8:{NFSU2_TR(0x5bf6e8);
__builtin_memmove((R+24),(R+4),4);
}
B5bf6ea:{NFSU2_TR(0x5bf6ea);
if(r1(R+518)){{goto L5bf74c;}}
}
B5bf6ec:L5bf6ec:{c.instructions+=6;NFSU2_TR(0x5bf6ec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5bf6ee:{NFSU2_TR(0x5bf6ee);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bf6f0:{NFSU2_TR(0x5bf6f0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bf6f1:{NFSU2_TR(0x5bf6f1);
u8 U[4];
w4(U+0,u32(0x7bfd00ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bf6f6:{NFSU2_TR(0x5bf6f6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bf6f7:{NFSU2_TR(0x5bf6f7);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bf6faull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5bf6fa:L5bf6fa:{c.instructions+=2;NFSU2_TR(0x5bf6fa);
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
B5bf6fc:{NFSU2_TR(0x5bf6fc);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5bf704;}}
}
B5bf6fe:L5bf6fe:{c.instructions+=1;NFSU2_TR(0x5bf6fe);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B5bf704:L5bf704:{c.instructions+=5;NFSU2_TR(0x5bf704);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5bf706:{NFSU2_TR(0x5bf706);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5bf708:{NFSU2_TR(0x5bf708);
u8 U[4];
w4(U+0,u32(0x7bfdc8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bf70d:{NFSU2_TR(0x5bf70d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bf70e:{NFSU2_TR(0x5bf70e);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bf711ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5bf711:L5bf711:{c.instructions+=3;NFSU2_TR(0x5bf711);
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
B5bf713:{NFSU2_TR(0x5bf713);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5bf715:{NFSU2_TR(0x5bf715);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5bf735;}}
}
B5bf717:L5bf717:{c.instructions+=2;NFSU2_TR(0x5bf717);
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
B5bf719:{NFSU2_TR(0x5bf719);
if(r1(R+518)){{goto L5bf721;}}
}
B5bf71b:L5bf71b:{c.instructions+=3;NFSU2_TR(0x5bf71b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5bf71d:{NFSU2_TR(0x5bf71d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bf71e:{NFSU2_TR(0x5bf71e);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bf721ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5bf721:L5bf721:{c.instructions+=3;NFSU2_TR(0x5bf721);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5bf723:{NFSU2_TR(0x5bf723);
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
B5bf725:{NFSU2_TR(0x5bf725);
if(r1(R+518)){{goto L5bf74c;}}
}
B5bf727:L5bf727:{c.instructions+=3;NFSU2_TR(0x5bf727);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5bf729:{NFSU2_TR(0x5bf729);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bf72a:{NFSU2_TR(0x5bf72a);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bf72dull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5bf72d:L5bf72d:{c.instructions+=3;NFSU2_TR(0x5bf72d);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B5bf733:{NFSU2_TR(0x5bf733);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5bf734:{NFSU2_TR(0x5bf734);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5bf735:L5bf735:{c.instructions+=6;NFSU2_TR(0x5bf735);
__builtin_memmove((R+8),gp(0x870990),4);
}
B5bf73b:{NFSU2_TR(0x5bf73b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5bf73d:{NFSU2_TR(0x5bf73d);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bf73f:{NFSU2_TR(0x5bf73f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bf740:{NFSU2_TR(0x5bf740);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bf741:{NFSU2_TR(0x5bf741);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bf744ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5bf744:L5bf744:{c.instructions+=4;NFSU2_TR(0x5bf744);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B5bf746:{NFSU2_TR(0x5bf746);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5bf748:{NFSU2_TR(0x5bf748);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bf749:{NFSU2_TR(0x5bf749);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bf74cull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5bf74c:L5bf74c:{c.instructions+=2;NFSU2_TR(0x5bf74c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5bf74d:{NFSU2_TR(0x5bf74d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5bf750:L5bf750:{c.instructions+=20;NFSU2_TR(0x5bf750);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x34ull))));
}
B5bf753:{NFSU2_TR(0x5bf753);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bf754:{NFSU2_TR(0x5bf754);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bf755:{NFSU2_TR(0x5bf755);
__builtin_memmove((R+24),(R+4),4);
}
B5bf757:{NFSU2_TR(0x5bf757);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5bf75a:{NFSU2_TR(0x5bf75a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5bf75d:{NFSU2_TR(0x5bf75d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bf760:{NFSU2_TR(0x5bf760);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B5bf762:{NFSU2_TR(0x5bf762);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bf763:{NFSU2_TR(0x5bf763);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5bf767:{NFSU2_TR(0x5bf767);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bf76a:{NFSU2_TR(0x5bf76a);
__builtin_memmove((R+4),gp(0x870990),4);
}
B5bf770:{NFSU2_TR(0x5bf770);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bf774:{NFSU2_TR(0x5bf774);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bf775:{NFSU2_TR(0x5bf775);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bf779:{NFSU2_TR(0x5bf779);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
w1(R+519,u8(s32(r4(R+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+12))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5bf77b:{NFSU2_TR(0x5bf77b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bf77c:{NFSU2_TR(0x5bf77c);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bf780:{NFSU2_TR(0x5bf780);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bf784:{NFSU2_TR(0x5bf784);
u8 U[4];
__builtin_memmove((U+0),gp(0x783388),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bf78aull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B5bf78a:L5bf78a:{c.instructions+=5;NFSU2_TR(0x5bf78a);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5bf78e:{NFSU2_TR(0x5bf78e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bf78f:{NFSU2_TR(0x5bf78f);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bf793:{NFSU2_TR(0x5bf793);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bf797:{NFSU2_TR(0x5bf797);
u8 U[4];
__builtin_memmove((U+0),gp(0x783310),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bf79dull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B5bf79d:L5bf79d:{c.instructions+=10;NFSU2_TR(0x5bf79d);
__builtin_memmove((R+8),gp(0x870990),4);
}
B5bf7a3:{NFSU2_TR(0x5bf7a3);
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
B5bf7a5:{NFSU2_TR(0x5bf7a5);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5bf7a9:{NFSU2_TR(0x5bf7a9);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bf7ad:{NFSU2_TR(0x5bf7ad);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bf7ae:{NFSU2_TR(0x5bf7ae);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bf7b2:{NFSU2_TR(0x5bf7b2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bf7b3:{NFSU2_TR(0x5bf7b3);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bf7b7:{NFSU2_TR(0x5bf7b7);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bf7bb:{NFSU2_TR(0x5bf7bb);
u8 U[4];
__builtin_memmove((U+0),gp(0x783384),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bf7c1ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B5bf7c1:L5bf7c1:{c.instructions+=10;NFSU2_TR(0x5bf7c1);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5bf7c5:{NFSU2_TR(0x5bf7c5);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5bf7c9:{NFSU2_TR(0x5bf7c9);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5bf7cd:{NFSU2_TR(0x5bf7cd);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+0))));
}
B5bf7cf:{NFSU2_TR(0x5bf7cf);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5bf7d3:{NFSU2_TR(0x5bf7d3);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B5bf7d5:{NFSU2_TR(0x5bf7d5);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5bf7d7:{NFSU2_TR(0x5bf7d7);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bf7db:{NFSU2_TR(0x5bf7db);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bf7df:{NFSU2_TR(0x5bf7df);
if(r1(R+518)){{goto L5bf807;}}
}
B5bf7e1:L5bf7e1:{c.instructions+=8;NFSU2_TR(0x5bf7e1);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5bf7e5:{NFSU2_TR(0x5bf7e5);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5bf7e9:{NFSU2_TR(0x5bf7e9);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
}
B5bf7eb:{NFSU2_TR(0x5bf7eb);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bf7ef:{NFSU2_TR(0x5bf7ef);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5bf7f3:{NFSU2_TR(0x5bf7f3);
{u32 ea_=u32(u32(7961940u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5bf7f9:{NFSU2_TR(0x5bf7f9);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xda,0x30"::"a"(ea_):"memory");}
}
B5bf7fd:{NFSU2_TR(0x5bf7fd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bf802ull));
TAIL_STATIC(0x75bed4u,75b);
}
B5bf802:L5bf802:{c.instructions+=2;NFSU2_TR(0x5bf802);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bf805:{NFSU2_TR(0x5bf805);
{goto L5bf80a;}
}
B5bf807:L5bf807:{c.instructions+=1;NFSU2_TR(0x5bf807);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bf80a:L5bf80a:{c.instructions+=2;NFSU2_TR(0x5bf80a);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5bf80c:{NFSU2_TR(0x5bf80c);
if(r1(R+518)){{goto L5bf834;}}
}
B5bf80e:L5bf80e:{c.instructions+=8;NFSU2_TR(0x5bf80e);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5bf812:{NFSU2_TR(0x5bf812);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5bf816:{NFSU2_TR(0x5bf816);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B5bf818:{NFSU2_TR(0x5bf818);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bf81c:{NFSU2_TR(0x5bf81c);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5bf820:{NFSU2_TR(0x5bf820);
{u32 ea_=u32(u32(7961944u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5bf826:{NFSU2_TR(0x5bf826);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xda,0x30"::"a"(ea_):"memory");}
}
B5bf82a:{NFSU2_TR(0x5bf82a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bf82full));
TAIL_STATIC(0x75bed4u,75b);
}
B5bf82f:L5bf82f:{c.instructions+=2;NFSU2_TR(0x5bf82f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bf832:{NFSU2_TR(0x5bf832);
{goto L5bf837;}
}
B5bf834:L5bf834:{c.instructions+=1;NFSU2_TR(0x5bf834);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bf837:L5bf837:{c.instructions+=13;NFSU2_TR(0x5bf837);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5bf83a:{NFSU2_TR(0x5bf83a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5bf83d:{NFSU2_TR(0x5bf83d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5bf840:{NFSU2_TR(0x5bf840);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5bf843:{NFSU2_TR(0x5bf843);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+28))));
}
B5bf845:{NFSU2_TR(0x5bf845);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
}
B5bf847:{NFSU2_TR(0x5bf847);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5bf848:{NFSU2_TR(0x5bf848);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bf84b:{NFSU2_TR(0x5bf84b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bf84e:{NFSU2_TR(0x5bf84e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5bf84f:{NFSU2_TR(0x5bf84f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5bf850:{NFSU2_TR(0x5bf850);
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
B5bf853:{NFSU2_TR(0x5bf853);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5bf860:L5bf860:{c.instructions+=6;NFSU2_TR(0x5bf860);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B5bf863:{NFSU2_TR(0x5bf863);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bf864:{NFSU2_TR(0x5bf864);
__builtin_memmove((R+24),(R+4),4);
}
B5bf866:{NFSU2_TR(0x5bf866);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5bf868:{NFSU2_TR(0x5bf868);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5bf86a:{NFSU2_TR(0x5bf86a);
if(r1(R+518)){{goto L5bf939;}}
}
B5bf870:L5bf870:{c.instructions+=12;NFSU2_TR(0x5bf870);
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
B5bf872:{NFSU2_TR(0x5bf872);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bf876:{NFSU2_TR(0x5bf876);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bf87a:{NFSU2_TR(0x5bf87a);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bf87e:{NFSU2_TR(0x5bf87e);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bf882:{NFSU2_TR(0x5bf882);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bf886:{NFSU2_TR(0x5bf886);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5bf888:{NFSU2_TR(0x5bf888);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5bf88c:{NFSU2_TR(0x5bf88c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bf88d:{NFSU2_TR(0x5bf88d);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bf88f:{NFSU2_TR(0x5bf88f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bf890:{NFSU2_TR(0x5bf890);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bf893ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5bf893:L5bf893:{c.instructions+=2;NFSU2_TR(0x5bf893);
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
B5bf895:{NFSU2_TR(0x5bf895);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5bf8c6;}}
}
B5bf897:L5bf897:{c.instructions+=4;NFSU2_TR(0x5bf897);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5bf899:{NFSU2_TR(0x5bf899);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5bf89b:{NFSU2_TR(0x5bf89b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bf89c:{NFSU2_TR(0x5bf89c);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bf89full));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5bf89f:L5bf89f:{c.instructions+=2;NFSU2_TR(0x5bf89f);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x8007001eull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x8007001eull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x8007001eull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5bf8a4:{NFSU2_TR(0x5bf8a4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5bf939;}}
}
B5bf8aa:L5bf8aa:{c.instructions+=1;NFSU2_TR(0x5bf8aa);
__builtin_memmove((R+12),(R+12),4);
}
B5bf8b0:L5bf8b0:{c.instructions+=4;NFSU2_TR(0x5bf8b0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5bf8b2:{NFSU2_TR(0x5bf8b2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5bf8b4:{NFSU2_TR(0x5bf8b4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bf8b5:{NFSU2_TR(0x5bf8b5);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bf8b8ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5bf8b8:L5bf8b8:{c.instructions+=2;NFSU2_TR(0x5bf8b8);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x8007001eull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x8007001eull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x8007001eull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5bf8bd:{NFSU2_TR(0x5bf8bd);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5bf8b0u);}goto L5bf8b0;}}
}
B5bf8bf:L5bf8bf:{c.instructions+=4;NFSU2_TR(0x5bf8bf);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5bf8c1:{NFSU2_TR(0x5bf8c1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5bf8c2:{NFSU2_TR(0x5bf8c2);
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
B5bf8c5:{NFSU2_TR(0x5bf8c5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5bf8c6:L5bf8c6:{c.instructions+=3;NFSU2_TR(0x5bf8c6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bf8c7:{NFSU2_TR(0x5bf8c7);
__builtin_memmove((R+4),(R+24),4);
}
B5bf8c9:{NFSU2_TR(0x5bf8c9);
if(mod_hook_table[21]){SPILL();c.pc=0x5bf8c9u;mod_hook_table[21](c);SPILL();if(c.pc!=0x5bf8c9u){TAIL_DYNAMIC(c.pc);}}
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bf8ceull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5bf750u);}goto L5bf750;}
}
B5bf8ce:L5bf8ce:{c.instructions+=40;NFSU2_TR(0x5bf8ce);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5bf8d2:{NFSU2_TR(0x5bf8d2);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x21ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B5bf8d5:{NFSU2_TR(0x5bf8d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bf8d8:{NFSU2_TR(0x5bf8d8);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5bf8dc:{NFSU2_TR(0x5bf8dc);
__builtin_memmove((R+0),(R+8),1);
}
B5bf8de:{NFSU2_TR(0x5bf8de);
u8 U[4];
w4(U+0,u32(u32(u32(0x7ull))&u32(u32(0x1full))));
w1(R+0,shr<u8>(r1(R+0),u64(r4(U+0))));
}
B5bf8e1:{NFSU2_TR(0x5bf8e1);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5bf8e3:{NFSU2_TR(0x5bf8e3);
__builtin_memmove((R+12),(R+518),1);
}
B5bf8e6:{NFSU2_TR(0x5bf8e6);
w1(R+12,u8(u32(r1(R+12))&u32(r1(R+0))));
}
B5bf8e8:{NFSU2_TR(0x5bf8e8);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5bf8ea:{NFSU2_TR(0x5bf8ea);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x22ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5bf8ed:{NFSU2_TR(0x5bf8ed);
__builtin_memmove((R+12),(R+518),1);
}
B5bf8f0:{NFSU2_TR(0x5bf8f0);
w1(R+12,u8(u32(r1(R+12))&u32(r1(R+4))));
}
B5bf8f2:{NFSU2_TR(0x5bf8f2);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B5bf8f5:{NFSU2_TR(0x5bf8f5);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x21ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5bf8f8:{NFSU2_TR(0x5bf8f8);
__builtin_memmove((R+0),(R+9),1);
}
B5bf8fa:{NFSU2_TR(0x5bf8fa);
u8 U[4];
w4(U+0,u32(u32(u32(0x7ull))&u32(u32(0x1full))));
w1(R+0,shr<u8>(r1(R+0),u64(r4(U+0))));
}
B5bf8fd:{NFSU2_TR(0x5bf8fd);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5bf8ff:{NFSU2_TR(0x5bf8ff);
__builtin_memmove((R+8),(R+518),1);
}
B5bf902:{NFSU2_TR(0x5bf902);
w1(R+8,u8(u32(r1(R+8))&u32(r1(R+0))));
}
B5bf904:{NFSU2_TR(0x5bf904);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5bf906:{NFSU2_TR(0x5bf906);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x25ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5bf909:{NFSU2_TR(0x5bf909);
__builtin_memmove((R+8),(R+518),1);
}
B5bf90c:{NFSU2_TR(0x5bf90c);
w1(R+8,u8(u32(r1(R+8))&u32(r1(R+4))));
}
B5bf90e:{NFSU2_TR(0x5bf90e);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x27ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B5bf911:{NFSU2_TR(0x5bf911);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5bf914:{NFSU2_TR(0x5bf914);
u8 U[5];
w4(U+0,u32(u32(u32(0x16ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5bf918:{NFSU2_TR(0x5bf918);
u8 U[4];
w4(U+0,u32(u32(u32(0x7ull))&u32(u32(0x1full))));
w1(R+0,shr<u8>(r1(R+0),u64(r4(U+0))));
}
B5bf91b:{NFSU2_TR(0x5bf91b);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x26ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5bf91e:{NFSU2_TR(0x5bf91e);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5bf920:{NFSU2_TR(0x5bf920);
__builtin_memmove((R+8),(R+518),1);
}
B5bf923:{NFSU2_TR(0x5bf923);
w1(R+8,u8(u32(r1(R+8))&u32(r1(R+0))));
}
B5bf925:{NFSU2_TR(0x5bf925);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5bf927:{NFSU2_TR(0x5bf927);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5bf92a:{NFSU2_TR(0x5bf92a);
__builtin_memmove((R+8),(R+518),1);
}
B5bf92d:{NFSU2_TR(0x5bf92d);
w1(R+8,u8(u32(r1(R+8))&u32(r1(R+4))));
}
B5bf92f:{NFSU2_TR(0x5bf92f);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x23ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5bf932:{NFSU2_TR(0x5bf932);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x29ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5bf935:{NFSU2_TR(0x5bf935);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x27ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5bf938:{NFSU2_TR(0x5bf938);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5bf939:L5bf939:{c.instructions+=4;NFSU2_TR(0x5bf939);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5bf93b:{NFSU2_TR(0x5bf93b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5bf93c:{NFSU2_TR(0x5bf93c);
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
B5bf93f:{NFSU2_TR(0x5bf93f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5bf940:L5bf940:{c.instructions+=4;NFSU2_TR(0x5bf940);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x22ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5bf943:{NFSU2_TR(0x5bf943);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5bf945:{NFSU2_TR(0x5bf945);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bf946:{NFSU2_TR(0x5bf946);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5bf953;}}
}
B5bf948:L5bf948:{c.instructions+=3;NFSU2_TR(0x5bf948);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x23ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5bf94b:{NFSU2_TR(0x5bf94b);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5bf94d:{NFSU2_TR(0x5bf94d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5bf953;}}
}
B5bf94f:L5bf94f:{c.instructions+=2;NFSU2_TR(0x5bf94f);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
}
B5bf951:{NFSU2_TR(0x5bf951);
{goto L5bf955;}
}
B5bf953:L5bf953:{c.instructions+=1;NFSU2_TR(0x5bf953);
w1(R+12,u8(0x1ull));
}
B5bf955:L5bf955:{c.instructions+=3;NFSU2_TR(0x5bf955);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x25ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5bf958:{NFSU2_TR(0x5bf958);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5bf95a:{NFSU2_TR(0x5bf95a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5bf967;}}
}
B5bf95c:L5bf95c:{c.instructions+=3;NFSU2_TR(0x5bf95c);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x26ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5bf95f:{NFSU2_TR(0x5bf95f);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5bf961:{NFSU2_TR(0x5bf961);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5bf967;}}
}
B5bf963:L5bf963:{c.instructions+=2;NFSU2_TR(0x5bf963);
w1(R+8,u8(u32(r1(R+8))^u32(r1(R+8))));
}
B5bf965:{NFSU2_TR(0x5bf965);
{goto L5bf969;}
}
B5bf967:L5bf967:{c.instructions+=1;NFSU2_TR(0x5bf967);
w1(R+8,u8(0x1ull));
}
B5bf969:L5bf969:{c.instructions+=3;NFSU2_TR(0x5bf969);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5bf96c:{NFSU2_TR(0x5bf96c);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5bf96e:{NFSU2_TR(0x5bf96e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5bf97b;}}
}
B5bf970:L5bf970:{c.instructions+=3;NFSU2_TR(0x5bf970);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x29ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5bf973:{NFSU2_TR(0x5bf973);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5bf975:{NFSU2_TR(0x5bf975);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5bf97b;}}
}
B5bf977:L5bf977:{c.instructions+=2;NFSU2_TR(0x5bf977);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B5bf979:{NFSU2_TR(0x5bf979);
{goto L5bf97d;}
}
B5bf97b:L5bf97b:{c.instructions+=1;NFSU2_TR(0x5bf97b);
w1(R+0,u8(0x1ull));
}
B5bf97d:L5bf97d:{c.instructions+=3;NFSU2_TR(0x5bf97d);
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
B5bf97f:{NFSU2_TR(0x5bf97f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5bf980:{NFSU2_TR(0x5bf980);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5bf9a2;}}
}
B5bf982:L5bf982:{c.instructions+=2;NFSU2_TR(0x5bf982);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5bf984:{NFSU2_TR(0x5bf984);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5bf9a2;}}
}
B5bf986:L5bf986:{c.instructions+=3;NFSU2_TR(0x5bf986);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5bf989:{NFSU2_TR(0x5bf989);
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
B5bf98b:{NFSU2_TR(0x5bf98b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5bf9a2;}}
}
B5bf98d:L5bf98d:{c.instructions+=2;NFSU2_TR(0x5bf98d);
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
B5bf98f:{NFSU2_TR(0x5bf98f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5bf9a2;}}
}
B5bf991:L5bf991:{c.instructions+=3;NFSU2_TR(0x5bf991);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5bf994:{NFSU2_TR(0x5bf994);
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
B5bf996:{NFSU2_TR(0x5bf996);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5bf9a2;}}
}
B5bf998:L5bf998:{c.instructions+=3;NFSU2_TR(0x5bf998);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5bf99b:{NFSU2_TR(0x5bf99b);
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
B5bf99d:{NFSU2_TR(0x5bf99d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5bf9a2;}}
}
B5bf99f:L5bf99f:{c.instructions+=2;NFSU2_TR(0x5bf99f);
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
B5bf9a1:{NFSU2_TR(0x5bf9a1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5bf9a2:L5bf9a2:{c.instructions+=2;NFSU2_TR(0x5bf9a2);
w4(R+0,u32(0x1ull));
}
B5bf9a7:{NFSU2_TR(0x5bf9a7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5bf9b0:L5bf9b0:{c.instructions+=6;NFSU2_TR(0x5bf9b0);
__builtin_memmove((R+0),gp(0x8709e4),4);
}
B5bf9b5:{NFSU2_TR(0x5bf9b5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B5bf9b8:{NFSU2_TR(0x5bf9b8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5bf9ba:{NFSU2_TR(0x5bf9ba);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bf9bb:{NFSU2_TR(0x5bf9bb);
__builtin_memmove((R+24),(R+4),4);
}
B5bf9bd:{NFSU2_TR(0x5bf9bd);
if(r1(R+518)){{goto L5bfa2e;}}
}
B5bf9bf:L5bf9bf:{c.instructions+=3;NFSU2_TR(0x5bf9bf);
__builtin_memmove((R+0),gp(0x871bac),4);
}
B5bf9c4:{NFSU2_TR(0x5bf9c4);
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
B5bf9c6:{NFSU2_TR(0x5bf9c6);
if(r1(R+518)){{goto L5bfa2e;}}
}
B5bf9c8:L5bf9c8:{c.instructions+=8;NFSU2_TR(0x5bf9c8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5bf9ca:{NFSU2_TR(0x5bf9ca);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bf9cc:{NFSU2_TR(0x5bf9cc);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bf9ce:{NFSU2_TR(0x5bf9ce);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5bf9d2:{NFSU2_TR(0x5bf9d2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bf9d3:{NFSU2_TR(0x5bf9d3);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bf9d5:{NFSU2_TR(0x5bf9d5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bf9d6:{NFSU2_TR(0x5bf9d6);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bf9d9ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5bf9d9:L5bf9d9:{c.instructions+=8;NFSU2_TR(0x5bf9d9);
__builtin_memmove((R+0),gp(0x800580),4);
}
B5bf9de:{NFSU2_TR(0x5bf9de);
__builtin_memmove((R+4),gp(0x8709e4),4);
}
B5bf9e4:{NFSU2_TR(0x5bf9e4);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5bf9e8:{NFSU2_TR(0x5bf9e8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bf9e9:{NFSU2_TR(0x5bf9e9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bf9ea:{NFSU2_TR(0x5bf9ea);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bf9eb:{NFSU2_TR(0x5bf9eb);
__builtin_memmove((R+4),(R+24),4);
}
B5bf9ed:{NFSU2_TR(0x5bf9ed);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bf9f2ull));
TAIL_STATIC(0x4fe4c0u,4fe);
}
B5bf9f2:L5bf9f2:{c.instructions+=4;NFSU2_TR(0x5bf9f2);
__builtin_memmove((R+4),gp(0x8709e4),4);
}
B5bf9f8:{NFSU2_TR(0x5bf9f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5bf9fb:{NFSU2_TR(0x5bf9fb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5bf9fd:{NFSU2_TR(0x5bf9fd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5bfa03;}}
}
B5bf9ff:L5bf9ff:{c.instructions+=2;NFSU2_TR(0x5bf9ff);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5bfa01:{NFSU2_TR(0x5bfa01);
{goto L5bfa06;}
}
B5bfa03:L5bfa03:{c.instructions+=1;NFSU2_TR(0x5bfa03);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B5bfa06:L5bfa06:{c.instructions+=6;NFSU2_TR(0x5bfa06);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5bfa0a:{NFSU2_TR(0x5bfa0a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5bfa0d:{NFSU2_TR(0x5bfa0d);
__builtin_memmove((R+8),(R+4),4);
}
B5bfa0f:{NFSU2_TR(0x5bfa0f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bfa10:{NFSU2_TR(0x5bfa10);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5bfa14:{NFSU2_TR(0x5bfa14);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B5bfa17:L5bfa17:{c.instructions+=1;NFSU2_TR(0x5bfa17);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L5bfa19;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5bfa17u);}goto L5bfa17;}
}
B5bfa19:L5bfa19:{c.instructions+=2;NFSU2_TR(0x5bfa19);
__builtin_memmove((R+4),(R+8),4);
}
B5bfa1b:{NFSU2_TR(0x5bfa1b);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5bfa1e:L5bfa1e:{c.instructions+=1;NFSU2_TR(0x5bfa1e);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L5bfa20;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5bfa1eu);}goto L5bfa1e;}
}
B5bfa20:L5bfa20:{c.instructions+=5;NFSU2_TR(0x5bfa20);
__builtin_memmove((R+0),gp(0x871bac),4);
}
B5bfa25:{NFSU2_TR(0x5bfa25);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5bfa27:{NFSU2_TR(0x5bfa27);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bfa29:{NFSU2_TR(0x5bfa29);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bfa2a:{NFSU2_TR(0x5bfa2a);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bfa2dull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5bfa2d:L5bfa2d:{c.instructions+=1;NFSU2_TR(0x5bfa2d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5bfa2e:L5bfa2e:{c.instructions+=3;NFSU2_TR(0x5bfa2e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5bfa2f:{NFSU2_TR(0x5bfa2f);
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
B5bfa32:{NFSU2_TR(0x5bfa32);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5bfa40:L5bfa40:{c.instructions+=1;NFSU2_TR(0x5bfa40);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bfa45ull));
TAIL_STATIC(0x4fe4b0u,4fe);
}
B5bfa45:L5bfa45:{c.instructions+=2;NFSU2_TR(0x5bfa45);
u8 U[7];
w1(R+512,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w4(R+0,shl<u32>(r4(R+0),u64(u32(0x1ull))));
w1(U+6,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+523,u8(u32(r1(R+512))^u32(r1(U+6))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5bfa47:{NFSU2_TR(0x5bfa47);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5bfa50:L5bfa50:{c.instructions+=25;NFSU2_TR(0x5bfa50);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5bfa54:{NFSU2_TR(0x5bfa54);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bfa55:{NFSU2_TR(0x5bfa55);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bfa56:{NFSU2_TR(0x5bfa56);
__builtin_memmove((R+28),gp(0x7babc4),4);
}
B5bfa5c:{NFSU2_TR(0x5bfa5c);
__builtin_memmove((R+24),(R+0),4);
}
B5bfa5e:{NFSU2_TR(0x5bfa5e);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B5bfa61:{NFSU2_TR(0x5bfa61);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x870728ull))));
}
B5bfa67:{NFSU2_TR(0x5bfa67);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+24)),r4(U+0));
}
B5bfa69:{NFSU2_TR(0x5bfa69);
__builtin_memmove((R+28),gp(0x7babc8),4);
}
B5bfa6f:{NFSU2_TR(0x5bfa6f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bfa72:{NFSU2_TR(0x5bfa72);
__builtin_memmove((R+28),gp(0x7babcc),4);
}
B5bfa78:{NFSU2_TR(0x5bfa78);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5bfa7a:{NFSU2_TR(0x5bfa7a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bfa7d:{NFSU2_TR(0x5bfa7d);
__builtin_memmove((R+28),gp(0x7babd0),4);
}
B5bfa83:{NFSU2_TR(0x5bfa83);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bfa86:{NFSU2_TR(0x5bfa86);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x86ffb4ull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),4);
s4(u32(r4(U+4)),r4(U+8));
}
B5bfa8d:{NFSU2_TR(0x5bfa8d);
u8 U[13];
w4(U+0,u32(u32(u32(0x220ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),1);
s1(u32(r4(U+8)),r1(U+12));
}
B5bfa94:{NFSU2_TR(0x5bfa94);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5bfa95:{NFSU2_TR(0x5bfa95);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x86e5bcull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5bfa9b:{NFSU2_TR(0x5bfa9b);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x86f8a8ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5bfaa1:{NFSU2_TR(0x5bfaa1);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x86ff88ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5bfaa7:{NFSU2_TR(0x5bfaa7);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x86ff80ull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),4);
s4(u32(r4(U+4)),r4(U+8));
}
B5bfaae:{NFSU2_TR(0x5bfaae);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x86f86cull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5bfab4:{NFSU2_TR(0x5bfab4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5bfab5:{NFSU2_TR(0x5bfab5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5bfac0:L5bfac0:{c.instructions+=8;NFSU2_TR(0x5bfac0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bfac1:{NFSU2_TR(0x5bfac1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bfac2:{NFSU2_TR(0x5bfac2);
__builtin_memmove((R+24),(R+4),4);
}
B5bfac4:{NFSU2_TR(0x5bfac4);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5bfac6:{NFSU2_TR(0x5bfac6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bfac7:{NFSU2_TR(0x5bfac7);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5bfac9:{NFSU2_TR(0x5bfac9);
w4(R+8,u32(0x870728ull));
}
B5bface:{NFSU2_TR(0x5bface);
__builtin_memmove((R+28),(R+28),4);
}
B5bfad0:L5bfad0:{c.instructions+=20;NFSU2_TR(0x5bfad0);
__builtin_memmove((R+12),gp(0x7babc4),4);
}
B5bfad6:{NFSU2_TR(0x5bfad6);
__builtin_memmove((R+28),(R+8),4);
}
B5bfad8:{NFSU2_TR(0x5bfad8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+28)),r4(U+0));
}
B5bfada:{NFSU2_TR(0x5bfada);
__builtin_memmove((R+12),gp(0x7babc8),4);
}
B5bfae0:{NFSU2_TR(0x5bfae0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bfae3:{NFSU2_TR(0x5bfae3);
__builtin_memmove((R+12),gp(0x7babcc),4);
}
B5bfae9:{NFSU2_TR(0x5bfae9);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bfaec:{NFSU2_TR(0x5bfaec);
__builtin_memmove((R+12),gp(0x7babd0),4);
}
B5bfaf2:{NFSU2_TR(0x5bfaf2);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x86ffb4ull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B5bfaf9:{NFSU2_TR(0x5bfaf9);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bfafc:{NFSU2_TR(0x5bfafc);
u8 U[13];
w4(U+0,u32(u32(u32(0x220ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),1);
s1(u32(r4(U+8)),r1(U+12));
}
B5bfb03:{NFSU2_TR(0x5bfb03);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x86e5bcull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5bfb09:{NFSU2_TR(0x5bfb09);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x86f8a8ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5bfb0f:{NFSU2_TR(0x5bfb0f);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x86ff88ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5bfb15:{NFSU2_TR(0x5bfb15);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x86ff80ull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B5bfb1c:{NFSU2_TR(0x5bfb1c);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x86f86cull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5bfb22:{NFSU2_TR(0x5bfb22);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x10ull))));
}
B5bfb25:{NFSU2_TR(0x5bfb25);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5bfb26:{NFSU2_TR(0x5bfb26);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x870748ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x870748ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5bfb2c:{NFSU2_TR(0x5bfb2c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5bfad0u);}goto L5bfad0;}}
}
B5bfb2e:L5bfb2e:{c.instructions+=3;NFSU2_TR(0x5bfb2e);
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
B5bfb30:{NFSU2_TR(0x5bfb30);
w4(R+4,u32(0x88ull));
}
B5bfb35:{NFSU2_TR(0x5bfb35);
w4(R+28,u32(0x86ffc0ull));
}
B5bfb3a:L5bfb3a:{c.instructions+=1;NFSU2_TR(0x5bfb3a);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L5bfb3c;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5bfb3au);}goto L5bfb3a;}
}
B5bfb3c:L5bfb3c:{c.instructions+=2;NFSU2_TR(0x5bfb3c);
__builtin_memmove((R+28),(R+24),4);
}
B5bfb3e:{NFSU2_TR(0x5bfb3e);
w4(R+4,u32(0x88ull));
}
B5bfb43:L5bfb43:{c.instructions+=1;NFSU2_TR(0x5bfb43);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L5bfb45;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5bfb43u);}goto L5bfb43;}
}
B5bfb45:L5bfb45:{c.instructions+=2;NFSU2_TR(0x5bfb45);
w4(R+4,u32(0x800ull));
}
B5bfb4a:{NFSU2_TR(0x5bfb4a);
w4(R+28,u32(0x86c570ull));
}
B5bfb4f:L5bfb4f:{c.instructions+=1;NFSU2_TR(0x5bfb4f);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L5bfb51;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5bfb4fu);}goto L5bfb4f;}
}
B5bfb51:L5bfb51:{c.instructions+=4;NFSU2_TR(0x5bfb51);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5bfb52:{NFSU2_TR(0x5bfb52);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5bfb53:{NFSU2_TR(0x5bfb53);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5bfb54:{NFSU2_TR(0x5bfb54);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5bfb60:L5bfb60:{c.instructions+=8;NFSU2_TR(0x5bfb60);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bfb61:{NFSU2_TR(0x5bfb61);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bfb62:{NFSU2_TR(0x5bfb62);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bfb63:{NFSU2_TR(0x5bfb63);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B5bfb65:{NFSU2_TR(0x5bfb65);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bfb66:{NFSU2_TR(0x5bfb66);
w4(R+8,u32(0x800588ull));
}
B5bfb6b:{NFSU2_TR(0x5bfb6b);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5bfb6d:{NFSU2_TR(0x5bfb6d);
__builtin_memmove((R+4),(R+4),4);
}
B5bfb70:L5bfb70:{c.instructions+=5;NFSU2_TR(0x5bfb70);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5bfb74:{NFSU2_TR(0x5bfb74);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x14ull))));
}
B5bfb77:{NFSU2_TR(0x5bfb77);
w4(R+4,u32(0x4ull));
}
B5bfb7c:{NFSU2_TR(0x5bfb7c);
__builtin_memmove((R+28),(R+8),4);
}
B5bfb7e:{NFSU2_TR(0x5bfb7e);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
w1(R+519,u8(s32(r4(R+20))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+20))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+20))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5bfb80:L5bfb80:{c.instructions+=1;NFSU2_TR(0x5bfb80);
u8 U[59];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L5bfb82;}}
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
__builtin_memmove((U+36),gp(u32(r4(U+20))),4);
__builtin_memmove((U+47),(U+36),4);
__builtin_memmove((U+16),gp(u32(r4(U+0))),4);
__builtin_memmove((U+51),(U+16),4);
w1(R+512,u8((r4(U+51))<(r4(U+47))));
w1(R+523,sborrow<u32>(r4(U+51),r4(U+47)));
w4(U+55,u32(u32(r4(U+51))-u32(r4(U+47))));
w1(R+519,u8(s32(r4(U+55))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+55))==(u32(0x0ull))));
w4(U+41,u32(u32(r4(U+55))&u32(u32(0xffull))));
w1(U+45,u8(__builtin_popcountll(u64(r4(U+41)))));
w1(U+46,u8(u32(r1(U+45))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+46))==(u8(0x0ull))));
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5bfb80u);}goto L5bfb80;}}
}
B5bfb82:L5bfb82:{c.instructions+=1;NFSU2_TR(0x5bfb82);
if(r1(R+518)){{goto L5bfb9d;}}
}
B5bfb84:L5bfb84:{c.instructions+=5;NFSU2_TR(0x5bfb84);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
}
B5bfb87:{NFSU2_TR(0x5bfb87);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B5bfb88:{NFSU2_TR(0x5bfb88);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x14ull))));
}
B5bfb8b:{NFSU2_TR(0x5bfb8b);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x28ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x28ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x28ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5bfb8e:{NFSU2_TR(0x5bfb8e);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5bfb70u);}goto L5bfb70;}}
}
B5bfb90:L5bfb90:{c.instructions+=7;NFSU2_TR(0x5bfb90);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5bfb94:{NFSU2_TR(0x5bfb94);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B5bfb98:{NFSU2_TR(0x5bfb98);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5bfb99:{NFSU2_TR(0x5bfb99);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5bfb9a:{NFSU2_TR(0x5bfb9a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5bfb9b:{NFSU2_TR(0x5bfb9b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5bfb9c:{NFSU2_TR(0x5bfb9c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5bfb9d:L5bfb9d:{c.instructions+=7;NFSU2_TR(0x5bfb9d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5bfb9e:{NFSU2_TR(0x5bfb9e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5bfb9f:{NFSU2_TR(0x5bfb9f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B5bfba2:{NFSU2_TR(0x5bfba2);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x800598ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B5bfba9:{NFSU2_TR(0x5bfba9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5bfbaa:{NFSU2_TR(0x5bfbaa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5bfbab:{NFSU2_TR(0x5bfbab);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5bfbb0:L5bfbb0:{c.instructions+=2;NFSU2_TR(0x5bfbb0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bfbb1:{NFSU2_TR(0x5bfbb1);
w4(R+24,u32(0x86ffb4ull));
}
B5bfbb6:L5bfbb6:{c.instructions+=3;NFSU2_TR(0x5bfbb6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5bfbb8:{NFSU2_TR(0x5bfbb8);
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
B5bfbba:{NFSU2_TR(0x5bfbba);
if(r1(R+518)){{goto L5bfbd4;}}
}
B5bfbbc:L5bfbbc:{c.instructions+=3;NFSU2_TR(0x5bfbbc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5bfbbe:{NFSU2_TR(0x5bfbbe);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bfbbf:{NFSU2_TR(0x5bfbbf);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bfbc2ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5bfbc2:L5bfbc2:{c.instructions+=3;NFSU2_TR(0x5bfbc2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5bfbc4:{NFSU2_TR(0x5bfbc4);
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
B5bfbc6:{NFSU2_TR(0x5bfbc6);
if(r1(R+518)){{goto L5bfbd4;}}
}
B5bfbc8:L5bfbc8:{c.instructions+=3;NFSU2_TR(0x5bfbc8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5bfbca:{NFSU2_TR(0x5bfbca);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bfbcb:{NFSU2_TR(0x5bfbcb);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bfbceull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5bfbce:L5bfbce:{c.instructions+=1;NFSU2_TR(0x5bfbce);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B5bfbd4:L5bfbd4:{c.instructions+=3;NFSU2_TR(0x5bfbd4);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B5bfbd7:{NFSU2_TR(0x5bfbd7);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x86ffbcull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x86ffbcull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5bfbdd:{NFSU2_TR(0x5bfbdd);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5bfbb6u);}goto L5bfbb6;}}
}
B5bfbdf:L5bfbdf:{c.instructions+=4;NFSU2_TR(0x5bfbdf);
__builtin_memmove((R+0),gp(0x8709ec),4);
}
B5bfbe4:{NFSU2_TR(0x5bfbe4);
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
B5bfbe6:{NFSU2_TR(0x5bfbe6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5bfbe7:{NFSU2_TR(0x5bfbe7);
if(r1(R+518)){{goto L5bfbf9;}}
}
B5bfbe9:L5bfbe9:{c.instructions+=3;NFSU2_TR(0x5bfbe9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5bfbeb:{NFSU2_TR(0x5bfbeb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bfbec:{NFSU2_TR(0x5bfbec);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bfbefull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5bfbef:L5bfbef:{c.instructions+=1;NFSU2_TR(0x5bfbef);
s4(0x8709ec,u32(0x0ull));
}
B5bfbf9:L5bfbf9:{c.instructions+=1;NFSU2_TR(0x5bfbf9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5bfc00:L5bfc00:{c.instructions+=9;NFSU2_TR(0x5bfc00);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5bfc04:{NFSU2_TR(0x5bfc04);
u8 U[6];
w1(R+512,u8((r4(R+16))<(u32(0x100ull))));
w1(R+523,sborrow<u32>(r4(R+16),u32(0x100ull)));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x100ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5bfc0a:{NFSU2_TR(0x5bfc0a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bfc0b:{NFSU2_TR(0x5bfc0b);
u8 U[4];
w4(U+0,u32(u32(u32(0x10cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5bfc12:{NFSU2_TR(0x5bfc12);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bfc13:{NFSU2_TR(0x5bfc13);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bfc14:{NFSU2_TR(0x5bfc14);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5bfc18:{NFSU2_TR(0x5bfc18);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bfc19:{NFSU2_TR(0x5bfc19);
u8 U[4];
__builtin_memmove((U+0),gp(0x783314),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bfc1full));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B5bfc1f:L5bfc1f:{c.instructions+=4;NFSU2_TR(0x5bfc1f);
__builtin_memmove((R+24),gp(0x78316c),4);
}
B5bfc25:{NFSU2_TR(0x5bfc25);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5bfc29:{NFSU2_TR(0x5bfc29);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bfc2a:{NFSU2_TR(0x5bfc2a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bfc2cull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B5bfc2c:L5bfc2c:{c.instructions+=2;NFSU2_TR(0x5bfc2c);
u8 U[4];
w4(U+0,u32(0x7a38dcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bfc31:{NFSU2_TR(0x5bfc31);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bfc33ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B5bfc33:L5bfc33:{c.instructions+=3;NFSU2_TR(0x5bfc33);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5bfc34:{NFSU2_TR(0x5bfc34);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x100ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x100ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x100ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5bfc3a:{NFSU2_TR(0x5bfc3a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5bfc40:L5bfc40:{c.instructions+=9;NFSU2_TR(0x5bfc40);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B5bfc43:{NFSU2_TR(0x5bfc43);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bfc44:{NFSU2_TR(0x5bfc44);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bfc45:{NFSU2_TR(0x5bfc45);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bfc46:{NFSU2_TR(0x5bfc46);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bfc47:{NFSU2_TR(0x5bfc47);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5bfc4b:{NFSU2_TR(0x5bfc4b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bfc4c:{NFSU2_TR(0x5bfc4c);
__builtin_memmove((R+28),(R+4),4);
}
B5bfc4e:{NFSU2_TR(0x5bfc4e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bfc53ull));
TAIL_STATIC(0x75d7e0u,75d);
}
B5bfc53:L5bfc53:{c.instructions+=6;NFSU2_TR(0x5bfc53);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5bfc56:{NFSU2_TR(0x5bfc56);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24e8ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5bfc5c:{NFSU2_TR(0x5bfc5c);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24f8ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5bfc62:{NFSU2_TR(0x5bfc62);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x8ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5bfc6a:{NFSU2_TR(0x5bfc6a);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B5bfc6c:{NFSU2_TR(0x5bfc6c);
__builtin_memmove((R+16),(R+16),4);
}
B5bfc70:L5bfc70:{c.instructions+=4;NFSU2_TR(0x5bfc70);
__builtin_memmove((R+4),(R+20),4);
}
B5bfc72:{NFSU2_TR(0x5bfc72);
__builtin_memmove((R+0),(R+12),4);
}
B5bfc74:{NFSU2_TR(0x5bfc74);
w4(R+24,u32(0x2ull));
}
B5bfc79:{NFSU2_TR(0x5bfc79);
__builtin_memmove((R+16),(R+16),4);
}
B5bfc80:L5bfc80:{c.instructions+=12;NFSU2_TR(0x5bfc80);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffffb0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bfc83:{NFSU2_TR(0x5bfc83);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xffffffb0ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5bfc86:{NFSU2_TR(0x5bfc86);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5bfc88:{NFSU2_TR(0x5bfc88);
u8 U[1];
__builtin_memmove((U+0),(R+8),1);
s1(u32(r4(R+4)),r1(U+0));
}
B5bfc8a:{NFSU2_TR(0x5bfc8a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bfc8d:{NFSU2_TR(0x5bfc8d);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5bfc90:{NFSU2_TR(0x5bfc90);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bfc96:{NFSU2_TR(0x5bfc96);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5bfc9c:{NFSU2_TR(0x5bfc9c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
}
B5bfc9f:{NFSU2_TR(0x5bfc9f);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x8ull))));
}
B5bfca2:{NFSU2_TR(0x5bfca2);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B5bfca3:{NFSU2_TR(0x5bfca3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5bfc80u);}goto L5bfc80;}}
}
B5bfca5:L5bfca5:{c.instructions+=6;NFSU2_TR(0x5bfca5);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5bfca9:{NFSU2_TR(0x5bfca9);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x4ull))));
}
B5bfcac:{NFSU2_TR(0x5bfcac);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B5bfcad:{NFSU2_TR(0x5bfcad);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B5bfcae:{NFSU2_TR(0x5bfcae);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bfcb2:{NFSU2_TR(0x5bfcb2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5bfc70u);}goto L5bfc70;}}
}
B5bfcb4:L5bfcb4:{c.instructions+=5;NFSU2_TR(0x5bfcb4);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x25daull))));
__builtin_memmove((R+0),(U+0),4);
}
B5bfcba:{NFSU2_TR(0x5bfcba);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x25dcull))));
__builtin_memmove((R+24),(U+0),4);
}
B5bfcc0:{NFSU2_TR(0x5bfcc0);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2b98ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5bfcc6:{NFSU2_TR(0x5bfcc6);
w4(R+28,u32(0x2ull));
}
B5bfccb:{NFSU2_TR(0x5bfccb);
{goto L5bfcd0;}
}
B5bfcd0:L5bfcd0:{c.instructions+=17;NFSU2_TR(0x5bfcd0);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5bfcd4:{NFSU2_TR(0x5bfcd4);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5bfcd7:{NFSU2_TR(0x5bfcd7);
u8 U[1];
__builtin_memmove((U+0),(R+8),1);
s1(u32(r4(R+0)),r1(U+0));
}
B5bfcd9:{NFSU2_TR(0x5bfcd9);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffc46ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5bfcdf:{NFSU2_TR(0x5bfcdf);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bfce2:{NFSU2_TR(0x5bfce2);
u8 U[6];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+12,u32(r2(U+4)));
}
B5bfce7:{NFSU2_TR(0x5bfce7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+4)),r4(U+0));
}
B5bfce9:{NFSU2_TR(0x5bfce9);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B5bfceb:{NFSU2_TR(0x5bfceb);
__builtin_memmove((R+20),(R+24),4);
}
B5bfced:{NFSU2_TR(0x5bfced);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+20)),r4(U+0));
}
B5bfcf0:{NFSU2_TR(0x5bfcf0);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B5bfcf3:{NFSU2_TR(0x5bfcf3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bfcf6:{NFSU2_TR(0x5bfcf6);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5bfcf7:{NFSU2_TR(0x5bfcf7);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xaull))));
}
B5bfcfa:{NFSU2_TR(0x5bfcfa);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
}
B5bfcfb:{NFSU2_TR(0x5bfcfb);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),2);
s2(u32(r4(U+0)),r2(U+4));
}
B5bfcff:{NFSU2_TR(0x5bfcff);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5bfcd0u);}goto L5bfcd0;}}
}
B5bfd01:L5bfd01:{c.instructions+=2;NFSU2_TR(0x5bfd01);
u8 U[4];
w4(U+0,u32(0x7a38e0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bfd06:{NFSU2_TR(0x5bfd06);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bfd0bull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5bfc00u);}goto L5bfc00;}
}
B5bfd0b:L5bfd0b:{c.instructions+=7;NFSU2_TR(0x5bfd0b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5bfd0e:{NFSU2_TR(0x5bfd0e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5bfd0f:{NFSU2_TR(0x5bfd0f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5bfd10:{NFSU2_TR(0x5bfd10);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5bfd11:{NFSU2_TR(0x5bfd11);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5bfd12:{NFSU2_TR(0x5bfd12);
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
B5bfd15:{NFSU2_TR(0x5bfd15);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5bfd20:L5bfd20:{c.instructions+=7;NFSU2_TR(0x5bfd20);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bfd21:{NFSU2_TR(0x5bfd21);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bfd22:{NFSU2_TR(0x5bfd22);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5bfd24:{NFSU2_TR(0x5bfd24);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bfd25:{NFSU2_TR(0x5bfd25);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bfd29:{NFSU2_TR(0x5bfd29);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x25f0ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5bfd2f:{NFSU2_TR(0x5bfd2f);
}
B5bfd30:L5bfd30:{c.instructions+=6;NFSU2_TR(0x5bfd30);
{u32 ea_=u32(u32(8005512u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bfd36:{NFSU2_TR(0x5bfd36);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xda,0x08"::"a"(ea_):"memory");}
}
B5bfd3a:{NFSU2_TR(0x5bfd3a);
{u32 ea_=u32(u32(8009984u));__asm__ volatile(".byte 0xdc,0x08"::"a"(ea_):"memory");}
}
B5bfd40:{NFSU2_TR(0x5bfd40);
__asm__ volatile(".byte 0xd9,0xfe":::"memory");
}
B5bfd42:{NFSU2_TR(0x5bfd42);
{u32 ea_=u32(u32(8009976u));__asm__ volatile(".byte 0xdc,0x08"::"a"(ea_):"memory");}
}
B5bfd48:{NFSU2_TR(0x5bfd48);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bfd4dull));
TAIL_STATIC(0x75bed4u,75b);
}
B5bfd4d:L5bfd4d:{c.instructions+=6;NFSU2_TR(0x5bfd4d);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B5bfd4e:{NFSU2_TR(0x5bfd4e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B5bfd50:{NFSU2_TR(0x5bfd50);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B5bfd53:{NFSU2_TR(0x5bfd53);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(R+512,u8((r4(U+6))<(u32(0x168ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x168ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x168ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5bfd59:{NFSU2_TR(0x5bfd59);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bfd5d:{NFSU2_TR(0x5bfd5d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5bfd30u);}goto L5bfd30;}}
}
B5bfd5f:L5bfd5f:{c.instructions+=4;NFSU2_TR(0x5bfd5f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5bfd60:{NFSU2_TR(0x5bfd60);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5bfd61:{NFSU2_TR(0x5bfd61);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5bfd62:{NFSU2_TR(0x5bfd62);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5bfd70:L5bfd70:{c.instructions+=6;NFSU2_TR(0x5bfd70);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5bfd74:{NFSU2_TR(0x5bfd74);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x86ffb4ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B5bfd7b:{NFSU2_TR(0x5bfd7b);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5bfd7d:{NFSU2_TR(0x5bfd7d);
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
B5bfd7f:{NFSU2_TR(0x5bfd7f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B5bfd82:{NFSU2_TR(0x5bfd82);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5bfd90:L5bfd90:{c.instructions+=3;NFSU2_TR(0x5bfd90);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5bfd94:{NFSU2_TR(0x5bfd94);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B5bfd97:{NFSU2_TR(0x5bfd97);
if(r1(R+518)){{goto L5bfdd2;}}
}
B5bfd99:L5bfd99:{c.instructions+=2;NFSU2_TR(0x5bfd99);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B5bfd9a:{NFSU2_TR(0x5bfd9a);
if(r1(R+518)){{goto L5bfdbb;}}
}
B5bfd9c:L5bfd9c:{c.instructions+=2;NFSU2_TR(0x5bfd9c);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B5bfd9d:{NFSU2_TR(0x5bfd9d);
if(r1(R+518)){{goto L5bfda4;}}
}
B5bfd9f:L5bfd9f:{c.instructions+=2;NFSU2_TR(0x5bfd9f);
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
B5bfda1:{NFSU2_TR(0x5bfda1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5bfda4:L5bfda4:{c.instructions+=4;NFSU2_TR(0x5bfda4);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5bfda8:{NFSU2_TR(0x5bfda8);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x86ffb4ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B5bfdaf:{NFSU2_TR(0x5bfdaf);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5bfdb1:{NFSU2_TR(0x5bfdb1);
if(r1(R+518)){{goto L5bfdf3;}}
}
B5bfdb3:L5bfdb3:{c.instructions+=2;NFSU2_TR(0x5bfdb3);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x86f8a8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B5bfdb9:{NFSU2_TR(0x5bfdb9);
{goto L5bfde7;}
}
B5bfdbb:L5bfdbb:{c.instructions+=4;NFSU2_TR(0x5bfdbb);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5bfdbf:{NFSU2_TR(0x5bfdbf);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x86ffb4ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B5bfdc6:{NFSU2_TR(0x5bfdc6);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5bfdc8:{NFSU2_TR(0x5bfdc8);
if(r1(R+518)){{goto L5bfdf3;}}
}
B5bfdca:L5bfdca:{c.instructions+=2;NFSU2_TR(0x5bfdca);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x86ff88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B5bfdd0:{NFSU2_TR(0x5bfdd0);
{goto L5bfde7;}
}
B5bfdd2:L5bfdd2:{c.instructions+=4;NFSU2_TR(0x5bfdd2);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5bfdd6:{NFSU2_TR(0x5bfdd6);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x86ffb4ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B5bfddd:{NFSU2_TR(0x5bfddd);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5bfddf:{NFSU2_TR(0x5bfddf);
if(r1(R+518)){{goto L5bfdf3;}}
}
B5bfde1:L5bfde1:{c.instructions+=1;NFSU2_TR(0x5bfde1);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x86e5bcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B5bfde7:L5bfde7:{c.instructions+=2;NFSU2_TR(0x5bfde7);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5bfde9:{NFSU2_TR(0x5bfde9);
if(r1(R+518)){{goto L5bfdf3;}}
}
B5bfdeb:L5bfdeb:{c.instructions+=2;NFSU2_TR(0x5bfdeb);
w4(R+0,u32(0x1ull));
}
B5bfdf0:{NFSU2_TR(0x5bfdf0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5bfdf3:L5bfdf3:{c.instructions+=2;NFSU2_TR(0x5bfdf3);
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
B5bfdf5:{NFSU2_TR(0x5bfdf5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5bfe00:L5bfe00:{c.instructions+=4;NFSU2_TR(0x5bfe00);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5bfe04:{NFSU2_TR(0x5bfe04);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x86ff80ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B5bfe0b:{NFSU2_TR(0x5bfe0b);
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
B5bfe0d:{NFSU2_TR(0x5bfe0d);
if(r1(R+518)){{goto L5bfe17;}}
}
B5bfe0f:L5bfe0f:{c.instructions+=3;NFSU2_TR(0x5bfe0f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bfe11:{NFSU2_TR(0x5bfe11);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bfe12:{NFSU2_TR(0x5bfe12);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bfe17ull));
TAIL_STATIC(0x5cd4b0u,5cd);
}
B5bfe17:L5bfe17:{c.instructions+=1;NFSU2_TR(0x5bfe17);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5bfe20:L5bfe20:{c.instructions+=11;NFSU2_TR(0x5bfe20);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5bfe24:{NFSU2_TR(0x5bfe24);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bfe25:{NFSU2_TR(0x5bfe25);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B5bfe28:{NFSU2_TR(0x5bfe28);
u8 U[16];
w4(U+0,u32(u32(u32(0x2ba0ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+24),(U+12),4);
}
B5bfe2f:{NFSU2_TR(0x5bfe2f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bfe30:{NFSU2_TR(0x5bfe30);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5bfe34:{NFSU2_TR(0x5bfe34);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B5bfe37:{NFSU2_TR(0x5bfe37);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5bfe39:{NFSU2_TR(0x5bfe39);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5bfe3a:{NFSU2_TR(0x5bfe3a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5bfe3b:{NFSU2_TR(0x5bfe3b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5bfe61;}}
}
B5bfe3d:L5bfe3d:{c.instructions+=4;NFSU2_TR(0x5bfe3d);
u8 U[12];
w4(U+0,u32(u32(u32(0xae9ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B5bfe44:{NFSU2_TR(0x5bfe44);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B5bfe47:{NFSU2_TR(0x5bfe47);
u8 U[16];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5bfe4b:{NFSU2_TR(0x5bfe4b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5bfe61;}}
}
B5bfe4d:L5bfe4d:{c.instructions+=3;NFSU2_TR(0x5bfe4d);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2ba8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5bfe53:{NFSU2_TR(0x5bfe53);
u8 U[22];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
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
B5bfe57:{NFSU2_TR(0x5bfe57);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5bfe61;}}
}
B5bfe59:L5bfe59:{c.instructions+=2;NFSU2_TR(0x5bfe59);
w4(R+0,u32(0x1ull));
}
B5bfe5e:{NFSU2_TR(0x5bfe5e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5bfe61:L5bfe61:{c.instructions+=2;NFSU2_TR(0x5bfe61);
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
B5bfe63:{NFSU2_TR(0x5bfe63);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5bfe70:L5bfe70:{c.instructions+=4;NFSU2_TR(0x5bfe70);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5bfe74:{NFSU2_TR(0x5bfe74);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x86ff80ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B5bfe7b:{NFSU2_TR(0x5bfe7b);
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
B5bfe7d:{NFSU2_TR(0x5bfe7d);
if(r1(R+518)){{goto L5bfe87;}}
}
B5bfe7f:L5bfe7f:{c.instructions+=3;NFSU2_TR(0x5bfe7f);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bfe81:{NFSU2_TR(0x5bfe81);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bfe82:{NFSU2_TR(0x5bfe82);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bfe87ull));
TAIL_STATIC(0x5cd4b0u,5cd);
}
B5bfe87:L5bfe87:{c.instructions+=1;NFSU2_TR(0x5bfe87);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5bfe90:L5bfe90:{c.instructions+=11;NFSU2_TR(0x5bfe90);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5bfe94:{NFSU2_TR(0x5bfe94);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bfe95:{NFSU2_TR(0x5bfe95);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B5bfe98:{NFSU2_TR(0x5bfe98);
u8 U[16];
w4(U+0,u32(u32(u32(0x2c00ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+24),(U+12),4);
}
B5bfe9f:{NFSU2_TR(0x5bfe9f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bfea0:{NFSU2_TR(0x5bfea0);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5bfea4:{NFSU2_TR(0x5bfea4);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B5bfea7:{NFSU2_TR(0x5bfea7);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5bfea9:{NFSU2_TR(0x5bfea9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5bfeaa:{NFSU2_TR(0x5bfeaa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5bfeab:{NFSU2_TR(0x5bfeab);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5bfed1;}}
}
B5bfead:L5bfead:{c.instructions+=4;NFSU2_TR(0x5bfead);
u8 U[12];
w4(U+0,u32(u32(u32(0xb01ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B5bfeb4:{NFSU2_TR(0x5bfeb4);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B5bfeb7:{NFSU2_TR(0x5bfeb7);
u8 U[16];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5bfebb:{NFSU2_TR(0x5bfebb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5bfed1;}}
}
B5bfebd:L5bfebd:{c.instructions+=3;NFSU2_TR(0x5bfebd);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2c08ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5bfec3:{NFSU2_TR(0x5bfec3);
u8 U[22];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
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
B5bfec7:{NFSU2_TR(0x5bfec7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5bfed1;}}
}
B5bfec9:L5bfec9:{c.instructions+=2;NFSU2_TR(0x5bfec9);
w4(R+0,u32(0x1ull));
}
B5bfece:{NFSU2_TR(0x5bfece);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5bfed1:L5bfed1:{c.instructions+=2;NFSU2_TR(0x5bfed1);
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
B5bfed3:{NFSU2_TR(0x5bfed3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5bfee0:L5bfee0:{c.instructions+=12;NFSU2_TR(0x5bfee0);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5bfee4:{NFSU2_TR(0x5bfee4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bfee5:{NFSU2_TR(0x5bfee5);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bfee6:{NFSU2_TR(0x5bfee6);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5bfeea:{NFSU2_TR(0x5bfeea);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bfeeb:{NFSU2_TR(0x5bfeeb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bfeec:{NFSU2_TR(0x5bfeec);
__builtin_memmove((R+24),(R+4),4);
}
B5bfeee:{NFSU2_TR(0x5bfeee);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B5bfef1:{NFSU2_TR(0x5bfef1);
u8 U[16];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B5bfef5:{NFSU2_TR(0x5bfef5);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B5bfef7:{NFSU2_TR(0x5bfef7);
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
B5bfef9:{NFSU2_TR(0x5bfef9);
if(r1(R+518)){{goto L5bff42;}}
}
B5bfefb:L5bfefb:{c.instructions+=5;NFSU2_TR(0x5bfefb);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5bfeff:{NFSU2_TR(0x5bfeff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5bff01:{NFSU2_TR(0x5bff01);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5bff03:{NFSU2_TR(0x5bff03);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bff04:{NFSU2_TR(0x5bff04);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bff07ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5bff07:L5bff07:{c.instructions+=2;NFSU2_TR(0x5bff07);
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
B5bff09:{NFSU2_TR(0x5bff09);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5bff52;}}
}
B5bff0b:L5bff0b:{c.instructions+=6;NFSU2_TR(0x5bff0b);
u8 U[16];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B5bff0f:{NFSU2_TR(0x5bff0f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5bff11:{NFSU2_TR(0x5bff11);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bff12:{NFSU2_TR(0x5bff12);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bff14:{NFSU2_TR(0x5bff14);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bff15:{NFSU2_TR(0x5bff15);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bff18ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5bff18:L5bff18:{c.instructions+=3;NFSU2_TR(0x5bff18);
__builtin_memmove((R+12),(R+0),4);
}
B5bff1a:{NFSU2_TR(0x5bff1a);
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
B5bff1c:{NFSU2_TR(0x5bff1c);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5bff35;}}
}
B5bff1e:L5bff1e:{c.instructions+=3;NFSU2_TR(0x5bff1e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bff1f:{NFSU2_TR(0x5bff1f);
u8 U[4];
w4(U+0,u32(0x7a395cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bff24:{NFSU2_TR(0x5bff24);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bff29ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5bfc00u);}goto L5bfc00;}
}
B5bff29:L5bff29:{c.instructions+=7;NFSU2_TR(0x5bff29);
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
B5bff2c:{NFSU2_TR(0x5bff2c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5bff2d:{NFSU2_TR(0x5bff2d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5bff2e:{NFSU2_TR(0x5bff2e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5bff2f:{NFSU2_TR(0x5bff2f);
__builtin_memmove((R+0),(R+12),4);
}
B5bff31:{NFSU2_TR(0x5bff31);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5bff32:{NFSU2_TR(0x5bff32);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5bff35:L5bff35:{c.instructions+=7;NFSU2_TR(0x5bff35);
u8 U[9];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
w1(U+8,u8(0x1ull));
s1(u32(r4(U+4)),r1(U+8));
}
B5bff39:{NFSU2_TR(0x5bff39);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5bff3a:{NFSU2_TR(0x5bff3a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5bff3b:{NFSU2_TR(0x5bff3b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5bff3c:{NFSU2_TR(0x5bff3c);
__builtin_memmove((R+0),(R+12),4);
}
B5bff3e:{NFSU2_TR(0x5bff3e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5bff3f:{NFSU2_TR(0x5bff3f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5bff42:L5bff42:{c.instructions+=3;NFSU2_TR(0x5bff42);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bff43:{NFSU2_TR(0x5bff43);
u8 U[4];
w4(U+0,u32(0x7a3908ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bff48:{NFSU2_TR(0x5bff48);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bff4dull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5bfc00u);}goto L5bfc00;}
}
B5bff4d:L5bff4d:{c.instructions+=2;NFSU2_TR(0x5bff4d);
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
B5bff50:{NFSU2_TR(0x5bff50);
__builtin_memmove((R+0),(R+12),4);
}
B5bff52:L5bff52:{c.instructions+=5;NFSU2_TR(0x5bff52);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5bff53:{NFSU2_TR(0x5bff53);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5bff54:{NFSU2_TR(0x5bff54);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5bff55:{NFSU2_TR(0x5bff55);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5bff56:{NFSU2_TR(0x5bff56);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5bff60:L5bff60:{c.instructions+=12;NFSU2_TR(0x5bff60);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5bff64:{NFSU2_TR(0x5bff64);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bff65:{NFSU2_TR(0x5bff65);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bff66:{NFSU2_TR(0x5bff66);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5bff6a:{NFSU2_TR(0x5bff6a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bff6b:{NFSU2_TR(0x5bff6b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bff6c:{NFSU2_TR(0x5bff6c);
__builtin_memmove((R+24),(R+4),4);
}
B5bff6e:{NFSU2_TR(0x5bff6e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B5bff71:{NFSU2_TR(0x5bff71);
u8 U[9];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((R+0),(U+8),1);
}
B5bff74:{NFSU2_TR(0x5bff74);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B5bff76:{NFSU2_TR(0x5bff76);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5bff78:{NFSU2_TR(0x5bff78);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5bff83;}}
}
B5bff7a:L5bff7a:{c.instructions+=6;NFSU2_TR(0x5bff7a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5bff7b:{NFSU2_TR(0x5bff7b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5bff7c:{NFSU2_TR(0x5bff7c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5bff7d:{NFSU2_TR(0x5bff7d);
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
B5bff7f:{NFSU2_TR(0x5bff7f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5bff80:{NFSU2_TR(0x5bff80);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5bff83:L5bff83:{c.instructions+=3;NFSU2_TR(0x5bff83);
u8 U[16];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B5bff87:{NFSU2_TR(0x5bff87);
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
B5bff89:{NFSU2_TR(0x5bff89);
if(r1(R+518)){{goto L5bffcb;}}
}
B5bff8b:L5bff8b:{c.instructions+=5;NFSU2_TR(0x5bff8b);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5bff8f:{NFSU2_TR(0x5bff8f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5bff91:{NFSU2_TR(0x5bff91);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5bff93:{NFSU2_TR(0x5bff93);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bff94:{NFSU2_TR(0x5bff94);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bff97ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5bff97:L5bff97:{c.instructions+=4;NFSU2_TR(0x5bff97);
u8 U[16];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B5bff9b:{NFSU2_TR(0x5bff9b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5bff9d:{NFSU2_TR(0x5bff9d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bff9e:{NFSU2_TR(0x5bff9e);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bffa1ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5bffa1:L5bffa1:{c.instructions+=3;NFSU2_TR(0x5bffa1);
__builtin_memmove((R+12),(R+0),4);
}
B5bffa3:{NFSU2_TR(0x5bffa3);
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
B5bffa5:{NFSU2_TR(0x5bffa5);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5bffbe;}}
}
B5bffa7:L5bffa7:{c.instructions+=3;NFSU2_TR(0x5bffa7);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bffa8:{NFSU2_TR(0x5bffa8);
u8 U[4];
w4(U+0,u32(0x7a39e4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bffad:{NFSU2_TR(0x5bffad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bffb2ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5bfc00u);}goto L5bfc00;}
}
B5bffb2:L5bffb2:{c.instructions+=7;NFSU2_TR(0x5bffb2);
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
B5bffb5:{NFSU2_TR(0x5bffb5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5bffb6:{NFSU2_TR(0x5bffb6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5bffb7:{NFSU2_TR(0x5bffb7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5bffb8:{NFSU2_TR(0x5bffb8);
__builtin_memmove((R+0),(R+12),4);
}
B5bffba:{NFSU2_TR(0x5bffba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5bffbb:{NFSU2_TR(0x5bffbb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5bffbe:L5bffbe:{c.instructions+=7;NFSU2_TR(0x5bffbe);
u8 U[9];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
w1(U+8,u8(0x0ull));
s1(u32(r4(U+4)),r1(U+8));
}
B5bffc2:{NFSU2_TR(0x5bffc2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5bffc3:{NFSU2_TR(0x5bffc3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5bffc4:{NFSU2_TR(0x5bffc4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5bffc5:{NFSU2_TR(0x5bffc5);
__builtin_memmove((R+0),(R+12),4);
}
B5bffc7:{NFSU2_TR(0x5bffc7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5bffc8:{NFSU2_TR(0x5bffc8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5bffcb:L5bffcb:{c.instructions+=3;NFSU2_TR(0x5bffcb);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bffcc:{NFSU2_TR(0x5bffcc);
u8 U[4];
w4(U+0,u32(0x7a3990ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bffd1:{NFSU2_TR(0x5bffd1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bffd6ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5bfc00u);}goto L5bfc00;}
}
B5bffd6:L5bffd6:{c.instructions+=7;NFSU2_TR(0x5bffd6);
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
B5bffd9:{NFSU2_TR(0x5bffd9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5bffda:{NFSU2_TR(0x5bffda);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5bffdb:{NFSU2_TR(0x5bffdb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5bffdc:{NFSU2_TR(0x5bffdc);
__builtin_memmove((R+0),(R+12),4);
}
B5bffde:{NFSU2_TR(0x5bffde);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5bffdf:{NFSU2_TR(0x5bffdf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5bfff0:L5bfff0:{c.instructions+=8;NFSU2_TR(0x5bfff0);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5bfff4:{NFSU2_TR(0x5bfff4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bfff5:{NFSU2_TR(0x5bfff5);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bfff6:{NFSU2_TR(0x5bfff6);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5bfffa:{NFSU2_TR(0x5bfffa);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bfffb:{NFSU2_TR(0x5bfffb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bfffc:{NFSU2_TR(0x5bfffc);
__builtin_memmove((R+24),(R+4),4);
}
B5bfffe:{NFSU2_TR(0x5bfffe);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
TAIL_STATIC(0x5c0001u,5c0);
}
XIT:NFSU2_TR_EXIT(0x5bf,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
