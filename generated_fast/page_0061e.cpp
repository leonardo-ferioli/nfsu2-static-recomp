#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_42f(u8* __restrict R,Cpu& c);
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_487(u8* __restrict R,Cpu& c);
u32 body_48b(u8* __restrict R,Cpu& c);
u32 body_5ba(u8* __restrict R,Cpu& c);
u32 body_5bb(u8* __restrict R,Cpu& c);
u32 body_5d9(u8* __restrict R,Cpu& c);
u32 body_5db(u8* __restrict R,Cpu& c);
u32 body_5ed(u8* __restrict R,Cpu& c);
u32 body_5f0(u8* __restrict R,Cpu& c);
u32 body_5fa(u8* __restrict R,Cpu& c);
u32 body_60f(u8* __restrict R,Cpu& c);
u32 body_612(u8* __restrict R,Cpu& c);
u32 body_613(u8* __restrict R,Cpu& c);
u32 body_614(u8* __restrict R,Cpu& c);
u32 body_61d(u8* __restrict R,Cpu& c);
u32 body_61f(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x61e,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x61e,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_61e(u8* __restrict R,Cpu& c);
u32 page_61e(Cpu& c){return body_61e(c.regs.data(),c);}
__attribute__((noinline)) u32 body_61e(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x61e000:goto L61e000;
case 0x61e004:c.instructions+=1;goto B61e004;
case 0x61e006:goto L61e006;
case 0x61e00a:c.instructions+=1;goto B61e00a;
case 0x61e00c:goto L61e00c;
case 0x61e00e:c.instructions+=5;goto B61e00e;
case 0x61e00f:c.instructions+=4;goto B61e00f;
case 0x61e010:c.instructions+=3;goto B61e010;
case 0x61e011:c.instructions+=2;goto B61e011;
case 0x61e012:c.instructions+=1;goto B61e012;
case 0x61e014:goto L61e014;
case 0x61e019:goto L61e019;
case 0x61e01c:c.instructions+=5;goto B61e01c;
case 0x61e01d:c.instructions+=4;goto B61e01d;
case 0x61e01e:c.instructions+=3;goto B61e01e;
case 0x61e01f:c.instructions+=2;goto B61e01f;
case 0x61e022:c.instructions+=1;goto B61e022;
case 0x61e023:goto L61e023;
case 0x61e028:goto L61e028;
case 0x61e02b:c.instructions+=5;goto B61e02b;
case 0x61e02c:c.instructions+=4;goto B61e02c;
case 0x61e02d:c.instructions+=3;goto B61e02d;
case 0x61e02e:c.instructions+=2;goto B61e02e;
case 0x61e031:c.instructions+=1;goto B61e031;
case 0x61e040:goto L61e040;
case 0x61e041:c.instructions+=8;goto B61e041;
case 0x61e042:c.instructions+=7;goto B61e042;
case 0x61e043:c.instructions+=6;goto B61e043;
case 0x61e044:c.instructions+=5;goto B61e044;
case 0x61e048:c.instructions+=4;goto B61e048;
case 0x61e04e:c.instructions+=3;goto B61e04e;
case 0x61e050:c.instructions+=2;goto B61e050;
case 0x61e056:c.instructions+=1;goto B61e056;
case 0x61e058:goto L61e058;
case 0x61e05a:c.instructions+=1;goto B61e05a;
case 0x61e05c:goto L61e05c;
case 0x61e061:c.instructions+=1;goto B61e061;
case 0x61e066:goto L61e066;
case 0x61e069:c.instructions+=4;goto B61e069;
case 0x61e06b:c.instructions+=3;goto B61e06b;
case 0x61e06c:c.instructions+=2;goto B61e06c;
case 0x61e06e:c.instructions+=1;goto B61e06e;
case 0x61e073:goto L61e073;
case 0x61e075:c.instructions+=1;goto B61e075;
case 0x61e077:goto L61e077;
case 0x61e07a:c.instructions+=1;goto B61e07a;
case 0x61e07c:goto L61e07c;
case 0x61e07e:goto L61e07e;
case 0x61e080:goto L61e080;
case 0x61e086:c.instructions+=2;goto B61e086;
case 0x61e088:c.instructions+=1;goto B61e088;
case 0x61e08a:goto L61e08a;
case 0x61e08f:c.instructions+=1;goto B61e08f;
case 0x61e094:goto L61e094;
case 0x61e097:c.instructions+=4;goto B61e097;
case 0x61e099:c.instructions+=3;goto B61e099;
case 0x61e09a:c.instructions+=2;goto B61e09a;
case 0x61e09c:c.instructions+=1;goto B61e09c;
case 0x61e0a1:goto L61e0a1;
case 0x61e0a3:c.instructions+=1;goto B61e0a3;
case 0x61e0a5:goto L61e0a5;
case 0x61e0a8:c.instructions+=1;goto B61e0a8;
case 0x61e0aa:goto L61e0aa;
case 0x61e0ac:goto L61e0ac;
case 0x61e0ae:c.instructions+=1;goto B61e0ae;
case 0x61e0b0:goto L61e0b0;
case 0x61e0b2:c.instructions+=6;goto B61e0b2;
case 0x61e0b4:c.instructions+=5;goto B61e0b4;
case 0x61e0b5:c.instructions+=4;goto B61e0b5;
case 0x61e0b6:c.instructions+=3;goto B61e0b6;
case 0x61e0b7:c.instructions+=2;goto B61e0b7;
case 0x61e0b8:c.instructions+=1;goto B61e0b8;
case 0x61e0bd:goto L61e0bd;
case 0x61e0c0:c.instructions+=5;goto B61e0c0;
case 0x61e0c1:c.instructions+=4;goto B61e0c1;
case 0x61e0c2:c.instructions+=3;goto B61e0c2;
case 0x61e0c3:c.instructions+=2;goto B61e0c3;
case 0x61e0c4:c.instructions+=1;goto B61e0c4;
case 0x61e0c5:goto L61e0c5;
case 0x61e0c6:c.instructions+=2;goto B61e0c6;
case 0x61e0cb:c.instructions+=1;goto B61e0cb;
case 0x61e0d0:goto L61e0d0;
case 0x61e0d3:c.instructions+=6;goto B61e0d3;
case 0x61e0d5:c.instructions+=5;goto B61e0d5;
case 0x61e0d6:c.instructions+=4;goto B61e0d6;
case 0x61e0d7:c.instructions+=3;goto B61e0d7;
case 0x61e0d8:c.instructions+=2;goto B61e0d8;
case 0x61e0d9:c.instructions+=1;goto B61e0d9;
case 0x61e0de:goto L61e0de;
case 0x61e0e1:c.instructions+=5;goto B61e0e1;
case 0x61e0e2:c.instructions+=4;goto B61e0e2;
case 0x61e0e3:c.instructions+=3;goto B61e0e3;
case 0x61e0e4:c.instructions+=2;goto B61e0e4;
case 0x61e0e5:c.instructions+=1;goto B61e0e5;
case 0x61e0f0:goto L61e0f0;
case 0x61e0f2:c.instructions+=1;goto B61e0f2;
case 0x61e0f7:goto L61e0f7;
case 0x61e0fa:c.instructions+=3;goto B61e0fa;
case 0x61e0fc:c.instructions+=2;goto B61e0fc;
case 0x61e106:c.instructions+=1;goto B61e106;
case 0x61e10b:goto L61e10b;
case 0x61e10e:c.instructions+=6;goto B61e10e;
case 0x61e111:c.instructions+=5;goto B61e111;
case 0x61e116:c.instructions+=4;goto B61e116;
case 0x61e118:c.instructions+=3;goto B61e118;
case 0x61e11a:c.instructions+=2;goto B61e11a;
case 0x61e124:c.instructions+=1;goto B61e124;
case 0x61e129:goto L61e129;
case 0x61e12c:c.instructions+=2;goto B61e12c;
case 0x61e12f:c.instructions+=1;goto B61e12f;
case 0x61e134:goto L61e134;
case 0x61e139:c.instructions+=3;goto B61e139;
case 0x61e13b:c.instructions+=2;goto B61e13b;
case 0x61e13d:c.instructions+=1;goto B61e13d;
case 0x61e142:goto L61e142;
case 0x61e145:c.instructions+=2;goto B61e145;
case 0x61e148:c.instructions+=1;goto B61e148;
case 0x61e14d:goto L61e14d;
case 0x61e150:goto L61e150;
case 0x61e151:c.instructions+=5;goto B61e151;
case 0x61e152:c.instructions+=4;goto B61e152;
case 0x61e153:c.instructions+=3;goto B61e153;
case 0x61e154:c.instructions+=2;goto B61e154;
case 0x61e156:c.instructions+=1;goto B61e156;
case 0x61e15b:goto L61e15b;
case 0x61e161:c.instructions+=3;goto B61e161;
case 0x61e166:c.instructions+=2;goto B61e166;
case 0x61e16b:c.instructions+=1;goto B61e16b;
case 0x61e170:goto L61e170;
case 0x61e172:c.instructions+=1;goto B61e172;
case 0x61e177:goto L61e177;
case 0x61e179:c.instructions+=2;goto B61e179;
case 0x61e17a:c.instructions+=1;goto B61e17a;
case 0x61e17c:goto L61e17c;
case 0x61e180:c.instructions+=90;goto B61e180;
case 0x61e182:c.instructions+=89;goto B61e182;
case 0x61e187:c.instructions+=88;goto B61e187;
case 0x61e18d:c.instructions+=87;goto B61e18d;
case 0x61e193:c.instructions+=86;goto B61e193;
case 0x61e198:c.instructions+=85;goto B61e198;
case 0x61e19e:c.instructions+=84;goto B61e19e;
case 0x61e1a4:c.instructions+=83;goto B61e1a4;
case 0x61e1aa:c.instructions+=82;goto B61e1aa;
case 0x61e1b0:c.instructions+=81;goto B61e1b0;
case 0x61e1b6:c.instructions+=80;goto B61e1b6;
case 0x61e1bc:c.instructions+=79;goto B61e1bc;
case 0x61e1c2:c.instructions+=78;goto B61e1c2;
case 0x61e1c8:c.instructions+=77;goto B61e1c8;
case 0x61e1ce:c.instructions+=76;goto B61e1ce;
case 0x61e1d4:c.instructions+=75;goto B61e1d4;
case 0x61e1da:c.instructions+=74;goto B61e1da;
case 0x61e1e0:c.instructions+=73;goto B61e1e0;
case 0x61e1e6:c.instructions+=72;goto B61e1e6;
case 0x61e1ec:c.instructions+=71;goto B61e1ec;
case 0x61e1f2:c.instructions+=70;goto B61e1f2;
case 0x61e1f8:c.instructions+=69;goto B61e1f8;
case 0x61e1fe:c.instructions+=68;goto B61e1fe;
case 0x61e204:c.instructions+=67;goto B61e204;
case 0x61e20a:c.instructions+=66;goto B61e20a;
case 0x61e210:c.instructions+=65;goto B61e210;
case 0x61e217:c.instructions+=64;goto B61e217;
case 0x61e21b:c.instructions+=63;goto B61e21b;
case 0x61e221:c.instructions+=62;goto B61e221;
case 0x61e223:c.instructions+=61;goto B61e223;
case 0x61e229:c.instructions+=60;goto B61e229;
case 0x61e22f:c.instructions+=59;goto B61e22f;
case 0x61e235:c.instructions+=58;goto B61e235;
case 0x61e23b:c.instructions+=57;goto B61e23b;
case 0x61e241:c.instructions+=56;goto B61e241;
case 0x61e247:c.instructions+=55;goto B61e247;
case 0x61e24d:c.instructions+=54;goto B61e24d;
case 0x61e253:c.instructions+=53;goto B61e253;
case 0x61e255:c.instructions+=52;goto B61e255;
case 0x61e25b:c.instructions+=51;goto B61e25b;
case 0x61e261:c.instructions+=50;goto B61e261;
case 0x61e26b:c.instructions+=49;goto B61e26b;
case 0x61e271:c.instructions+=48;goto B61e271;
case 0x61e277:c.instructions+=47;goto B61e277;
case 0x61e27d:c.instructions+=46;goto B61e27d;
case 0x61e283:c.instructions+=45;goto B61e283;
case 0x61e289:c.instructions+=44;goto B61e289;
case 0x61e28f:c.instructions+=43;goto B61e28f;
case 0x61e295:c.instructions+=42;goto B61e295;
case 0x61e29b:c.instructions+=41;goto B61e29b;
case 0x61e2a1:c.instructions+=40;goto B61e2a1;
case 0x61e2a7:c.instructions+=39;goto B61e2a7;
case 0x61e2ad:c.instructions+=38;goto B61e2ad;
case 0x61e2b3:c.instructions+=37;goto B61e2b3;
case 0x61e2b9:c.instructions+=36;goto B61e2b9;
case 0x61e2bf:c.instructions+=35;goto B61e2bf;
case 0x61e2c5:c.instructions+=34;goto B61e2c5;
case 0x61e2cb:c.instructions+=33;goto B61e2cb;
case 0x61e2d1:c.instructions+=32;goto B61e2d1;
case 0x61e2d7:c.instructions+=31;goto B61e2d7;
case 0x61e2dd:c.instructions+=30;goto B61e2dd;
case 0x61e2e3:c.instructions+=29;goto B61e2e3;
case 0x61e2e9:c.instructions+=28;goto B61e2e9;
case 0x61e2ef:c.instructions+=27;goto B61e2ef;
case 0x61e2f5:c.instructions+=26;goto B61e2f5;
case 0x61e2fb:c.instructions+=25;goto B61e2fb;
case 0x61e301:c.instructions+=24;goto B61e301;
case 0x61e307:c.instructions+=23;goto B61e307;
case 0x61e30d:c.instructions+=22;goto B61e30d;
case 0x61e313:c.instructions+=21;goto B61e313;
case 0x61e319:c.instructions+=20;goto B61e319;
case 0x61e31f:c.instructions+=19;goto B61e31f;
case 0x61e325:c.instructions+=18;goto B61e325;
case 0x61e32b:c.instructions+=17;goto B61e32b;
case 0x61e331:c.instructions+=16;goto B61e331;
case 0x61e337:c.instructions+=15;goto B61e337;
case 0x61e33d:c.instructions+=14;goto B61e33d;
case 0x61e343:c.instructions+=13;goto B61e343;
case 0x61e349:c.instructions+=12;goto B61e349;
case 0x61e34f:c.instructions+=11;goto B61e34f;
case 0x61e355:c.instructions+=10;goto B61e355;
case 0x61e356:c.instructions+=9;goto B61e356;
case 0x61e35c:c.instructions+=8;goto B61e35c;
case 0x61e362:c.instructions+=7;goto B61e362;
case 0x61e368:c.instructions+=6;goto B61e368;
case 0x61e36e:c.instructions+=5;goto B61e36e;
case 0x61e370:c.instructions+=4;goto B61e370;
case 0x61e371:c.instructions+=3;goto B61e371;
case 0x61e372:c.instructions+=2;goto B61e372;
case 0x61e373:c.instructions+=1;goto B61e373;
case 0x61e380:goto L61e380;
case 0x61e381:c.instructions+=7;goto B61e381;
case 0x61e382:c.instructions+=6;goto B61e382;
case 0x61e386:c.instructions+=5;goto B61e386;
case 0x61e387:c.instructions+=4;goto B61e387;
case 0x61e38b:c.instructions+=3;goto B61e38b;
case 0x61e38c:c.instructions+=2;goto B61e38c;
case 0x61e38d:c.instructions+=1;goto B61e38d;
case 0x61e392:goto L61e392;
case 0x61e396:c.instructions+=4;goto B61e396;
case 0x61e39b:c.instructions+=3;goto B61e39b;
case 0x61e39e:c.instructions+=2;goto B61e39e;
case 0x61e3a0:c.instructions+=1;goto B61e3a0;
case 0x61e3a2:goto L61e3a2;
case 0x61e3a3:c.instructions+=3;goto B61e3a3;
case 0x61e3a4:c.instructions+=2;goto B61e3a4;
case 0x61e3a9:c.instructions+=1;goto B61e3a9;
case 0x61e3ae:goto L61e3ae;
case 0x61e3b0:c.instructions+=2;goto B61e3b0;
case 0x61e3b5:c.instructions+=1;goto B61e3b5;
case 0x61e3ba:goto L61e3ba;
case 0x61e3be:c.instructions+=3;goto B61e3be;
case 0x61e3c0:c.instructions+=2;goto B61e3c0;
case 0x61e3c3:c.instructions+=1;goto B61e3c3;
case 0x61e3c5:goto L61e3c5;
case 0x61e3c7:c.instructions+=2;goto B61e3c7;
case 0x61e3cc:c.instructions+=1;goto B61e3cc;
case 0x61e3d1:goto L61e3d1;
case 0x61e3d2:c.instructions+=3;goto B61e3d2;
case 0x61e3d3:c.instructions+=2;goto B61e3d3;
case 0x61e3d4:c.instructions+=1;goto B61e3d4;
case 0x61e3d5:goto L61e3d5;
case 0x61e3db:c.instructions+=4;goto B61e3db;
case 0x61e3dc:c.instructions+=3;goto B61e3dc;
case 0x61e3dd:c.instructions+=2;goto B61e3dd;
case 0x61e3de:c.instructions+=1;goto B61e3de;
case 0x61e3e0:goto L61e3e0;
case 0x61e3e1:c.instructions+=99;goto B61e3e1;
case 0x61e3e3:c.instructions+=98;goto B61e3e3;
case 0x61e3e6:c.instructions+=97;goto B61e3e6;
case 0x61e3e7:c.instructions+=96;goto B61e3e7;
case 0x61e3ec:c.instructions+=95;goto B61e3ec;
case 0x61e3f2:c.instructions+=94;goto B61e3f2;
case 0x61e3f8:c.instructions+=93;goto B61e3f8;
case 0x61e3f9:c.instructions+=92;goto B61e3f9;
case 0x61e3fa:c.instructions+=91;goto B61e3fa;
case 0x61e3fc:c.instructions+=90;goto B61e3fc;
case 0x61e402:c.instructions+=89;goto B61e402;
case 0x61e408:c.instructions+=88;goto B61e408;
case 0x61e40e:c.instructions+=87;goto B61e40e;
case 0x61e414:c.instructions+=86;goto B61e414;
case 0x61e41a:c.instructions+=85;goto B61e41a;
case 0x61e420:c.instructions+=84;goto B61e420;
case 0x61e425:c.instructions+=83;goto B61e425;
case 0x61e42b:c.instructions+=82;goto B61e42b;
case 0x61e431:c.instructions+=81;goto B61e431;
case 0x61e437:c.instructions+=80;goto B61e437;
case 0x61e438:c.instructions+=79;goto B61e438;
case 0x61e43e:c.instructions+=78;goto B61e43e;
case 0x61e444:c.instructions+=77;goto B61e444;
case 0x61e44a:c.instructions+=76;goto B61e44a;
case 0x61e450:c.instructions+=75;goto B61e450;
case 0x61e456:c.instructions+=74;goto B61e456;
case 0x61e45c:c.instructions+=73;goto B61e45c;
case 0x61e462:c.instructions+=72;goto B61e462;
case 0x61e468:c.instructions+=71;goto B61e468;
case 0x61e46e:c.instructions+=70;goto B61e46e;
case 0x61e474:c.instructions+=69;goto B61e474;
case 0x61e47a:c.instructions+=68;goto B61e47a;
case 0x61e480:c.instructions+=67;goto B61e480;
case 0x61e486:c.instructions+=66;goto B61e486;
case 0x61e48c:c.instructions+=65;goto B61e48c;
case 0x61e48e:c.instructions+=64;goto B61e48e;
case 0x61e494:c.instructions+=63;goto B61e494;
case 0x61e49a:c.instructions+=62;goto B61e49a;
case 0x61e4a0:c.instructions+=61;goto B61e4a0;
case 0x61e4a6:c.instructions+=60;goto B61e4a6;
case 0x61e4ac:c.instructions+=59;goto B61e4ac;
case 0x61e4b2:c.instructions+=58;goto B61e4b2;
case 0x61e4b4:c.instructions+=57;goto B61e4b4;
case 0x61e4ba:c.instructions+=56;goto B61e4ba;
case 0x61e4c0:c.instructions+=55;goto B61e4c0;
case 0x61e4c5:c.instructions+=54;goto B61e4c5;
case 0x61e4cb:c.instructions+=53;goto B61e4cb;
case 0x61e4d1:c.instructions+=52;goto B61e4d1;
case 0x61e4d7:c.instructions+=51;goto B61e4d7;
case 0x61e4d9:c.instructions+=50;goto B61e4d9;
case 0x61e4df:c.instructions+=49;goto B61e4df;
case 0x61e4e5:c.instructions+=48;goto B61e4e5;
case 0x61e4eb:c.instructions+=47;goto B61e4eb;
case 0x61e4f1:c.instructions+=46;goto B61e4f1;
case 0x61e4f7:c.instructions+=45;goto B61e4f7;
case 0x61e4fd:c.instructions+=44;goto B61e4fd;
case 0x61e4ff:c.instructions+=43;goto B61e4ff;
case 0x61e505:c.instructions+=42;goto B61e505;
case 0x61e50b:c.instructions+=41;goto B61e50b;
case 0x61e511:c.instructions+=40;goto B61e511;
case 0x61e517:c.instructions+=39;goto B61e517;
case 0x61e51d:c.instructions+=38;goto B61e51d;
case 0x61e523:c.instructions+=37;goto B61e523;
case 0x61e525:c.instructions+=36;goto B61e525;
case 0x61e52b:c.instructions+=35;goto B61e52b;
case 0x61e531:c.instructions+=34;goto B61e531;
case 0x61e536:c.instructions+=33;goto B61e536;
case 0x61e53c:c.instructions+=32;goto B61e53c;
case 0x61e542:c.instructions+=31;goto B61e542;
case 0x61e548:c.instructions+=30;goto B61e548;
case 0x61e54a:c.instructions+=29;goto B61e54a;
case 0x61e550:c.instructions+=28;goto B61e550;
case 0x61e556:c.instructions+=27;goto B61e556;
case 0x61e55c:c.instructions+=26;goto B61e55c;
case 0x61e562:c.instructions+=25;goto B61e562;
case 0x61e568:c.instructions+=24;goto B61e568;
case 0x61e56e:c.instructions+=23;goto B61e56e;
case 0x61e570:c.instructions+=22;goto B61e570;
case 0x61e576:c.instructions+=21;goto B61e576;
case 0x61e57c:c.instructions+=20;goto B61e57c;
case 0x61e582:c.instructions+=19;goto B61e582;
case 0x61e588:c.instructions+=18;goto B61e588;
case 0x61e58e:c.instructions+=17;goto B61e58e;
case 0x61e594:c.instructions+=16;goto B61e594;
case 0x61e596:c.instructions+=15;goto B61e596;
case 0x61e59c:c.instructions+=14;goto B61e59c;
case 0x61e5a2:c.instructions+=13;goto B61e5a2;
case 0x61e5a7:c.instructions+=12;goto B61e5a7;
case 0x61e5ad:c.instructions+=11;goto B61e5ad;
case 0x61e5b3:c.instructions+=10;goto B61e5b3;
case 0x61e5b9:c.instructions+=9;goto B61e5b9;
case 0x61e5bf:c.instructions+=8;goto B61e5bf;
case 0x61e5c5:c.instructions+=7;goto B61e5c5;
case 0x61e5cb:c.instructions+=6;goto B61e5cb;
case 0x61e5d0:c.instructions+=5;goto B61e5d0;
case 0x61e5d6:c.instructions+=4;goto B61e5d6;
case 0x61e5dc:c.instructions+=3;goto B61e5dc;
case 0x61e5de:c.instructions+=2;goto B61e5de;
case 0x61e5e1:c.instructions+=1;goto B61e5e1;
case 0x61e5e3:goto L61e5e3;
case 0x61e5e9:c.instructions+=2;goto B61e5e9;
case 0x61e5ee:c.instructions+=1;goto B61e5ee;
case 0x61e5f0:goto L61e5f0;
case 0x61e5f6:c.instructions+=2;goto B61e5f6;
case 0x61e5f7:c.instructions+=1;goto B61e5f7;
case 0x61e5fc:goto L61e5fc;
case 0x61e602:c.instructions+=6;goto B61e602;
case 0x61e608:c.instructions+=5;goto B61e608;
case 0x61e60a:c.instructions+=4;goto B61e60a;
case 0x61e60d:c.instructions+=3;goto B61e60d;
case 0x61e613:c.instructions+=2;goto B61e613;
case 0x61e614:c.instructions+=1;goto B61e614;
case 0x61e619:goto L61e619;
case 0x61e61f:c.instructions+=6;goto B61e61f;
case 0x61e625:c.instructions+=5;goto B61e625;
case 0x61e627:c.instructions+=4;goto B61e627;
case 0x61e629:c.instructions+=3;goto B61e629;
case 0x61e62f:c.instructions+=2;goto B61e62f;
case 0x61e630:c.instructions+=1;goto B61e630;
case 0x61e635:goto L61e635;
case 0x61e637:c.instructions+=7;goto B61e637;
case 0x61e63d:c.instructions+=6;goto B61e63d;
case 0x61e644:c.instructions+=5;goto B61e644;
case 0x61e647:c.instructions+=4;goto B61e647;
case 0x61e64a:c.instructions+=3;goto B61e64a;
case 0x61e64b:c.instructions+=2;goto B61e64b;
case 0x61e64e:c.instructions+=1;goto B61e64e;
case 0x61e650:goto L61e650;
case 0x61e656:c.instructions+=6;goto B61e656;
case 0x61e65c:c.instructions+=5;goto B61e65c;
case 0x61e65e:c.instructions+=4;goto B61e65e;
case 0x61e664:c.instructions+=3;goto B61e664;
case 0x61e66a:c.instructions+=2;goto B61e66a;
case 0x61e670:c.instructions+=1;goto B61e670;
case 0x61e672:goto L61e672;
case 0x61e678:goto L61e678;
case 0x61e67a:c.instructions+=1;goto B61e67a;
case 0x61e67f:goto L61e67f;
case 0x61e685:c.instructions+=8;goto B61e685;
case 0x61e68b:c.instructions+=7;goto B61e68b;
case 0x61e691:c.instructions+=6;goto B61e691;
case 0x61e697:c.instructions+=5;goto B61e697;
case 0x61e69d:c.instructions+=4;goto B61e69d;
case 0x61e69f:c.instructions+=3;goto B61e69f;
case 0x61e6a5:c.instructions+=2;goto B61e6a5;
case 0x61e6ab:c.instructions+=1;goto B61e6ab;
case 0x61e6ad:goto L61e6ad;
case 0x61e6b3:goto L61e6b3;
case 0x61e6b5:c.instructions+=1;goto B61e6b5;
case 0x61e6ba:goto L61e6ba;
case 0x61e6c0:c.instructions+=6;goto B61e6c0;
case 0x61e6c6:c.instructions+=5;goto B61e6c6;
case 0x61e6cc:c.instructions+=4;goto B61e6cc;
case 0x61e6d2:c.instructions+=3;goto B61e6d2;
case 0x61e6d8:c.instructions+=2;goto B61e6d8;
case 0x61e6da:c.instructions+=1;goto B61e6da;
case 0x61e6dc:goto L61e6dc;
case 0x61e6e2:goto L61e6e2;
case 0x61e6e8:c.instructions+=1;goto B61e6e8;
case 0x61e6ed:goto L61e6ed;
case 0x61e6f3:c.instructions+=7;goto B61e6f3;
case 0x61e6f4:c.instructions+=6;goto B61e6f4;
case 0x61e6fa:c.instructions+=5;goto B61e6fa;
case 0x61e6fb:c.instructions+=4;goto B61e6fb;
case 0x61e6fc:c.instructions+=3;goto B61e6fc;
case 0x61e6fe:c.instructions+=2;goto B61e6fe;
case 0x61e6ff:c.instructions+=1;goto B61e6ff;
case 0x61e700:goto L61e700;
case 0x61e701:c.instructions+=9;goto B61e701;
case 0x61e703:c.instructions+=8;goto B61e703;
case 0x61e706:c.instructions+=7;goto B61e706;
case 0x61e70c:c.instructions+=6;goto B61e70c;
case 0x61e713:c.instructions+=5;goto B61e713;
case 0x61e714:c.instructions+=4;goto B61e714;
case 0x61e715:c.instructions+=3;goto B61e715;
case 0x61e716:c.instructions+=2;goto B61e716;
case 0x61e718:c.instructions+=1;goto B61e718;
case 0x61e71e:goto L61e71e;
case 0x61e724:c.instructions+=3;goto B61e724;
case 0x61e728:c.instructions+=2;goto B61e728;
case 0x61e72d:c.instructions+=1;goto B61e72d;
case 0x61e72f:goto L61e72f;
case 0x61e731:c.instructions+=1;goto B61e731;
case 0x61e733:goto L61e733;
case 0x61e735:goto L61e735;
case 0x61e73a:goto L61e73a;
case 0x61e740:c.instructions+=2;goto B61e740;
case 0x61e741:c.instructions+=1;goto B61e741;
case 0x61e746:goto L61e746;
case 0x61e74c:c.instructions+=8;goto B61e74c;
case 0x61e74f:c.instructions+=7;goto B61e74f;
case 0x61e754:c.instructions+=6;goto B61e754;
case 0x61e756:c.instructions+=5;goto B61e756;
case 0x61e758:c.instructions+=4;goto B61e758;
case 0x61e75e:c.instructions+=3;goto B61e75e;
case 0x61e764:c.instructions+=2;goto B61e764;
case 0x61e766:c.instructions+=1;goto B61e766;
case 0x61e768:goto L61e768;
case 0x61e76e:goto L61e76e;
case 0x61e774:c.instructions+=3;goto B61e774;
case 0x61e775:c.instructions+=2;goto B61e775;
case 0x61e776:c.instructions+=1;goto B61e776;
case 0x61e77b:goto L61e77b;
case 0x61e77e:c.instructions+=15;goto B61e77e;
case 0x61e781:c.instructions+=14;goto B61e781;
case 0x61e785:c.instructions+=13;goto B61e785;
case 0x61e787:c.instructions+=12;goto B61e787;
case 0x61e78b:c.instructions+=11;goto B61e78b;
case 0x61e78e:c.instructions+=10;goto B61e78e;
case 0x61e794:c.instructions+=9;goto B61e794;
case 0x61e79a:c.instructions+=8;goto B61e79a;
case 0x61e7a0:c.instructions+=7;goto B61e7a0;
case 0x61e7a6:c.instructions+=6;goto B61e7a6;
case 0x61e7a7:c.instructions+=5;goto B61e7a7;
case 0x61e7ad:c.instructions+=4;goto B61e7ad;
case 0x61e7b1:c.instructions+=3;goto B61e7b1;
case 0x61e7b2:c.instructions+=2;goto B61e7b2;
case 0x61e7bc:c.instructions+=1;goto B61e7bc;
case 0x61e7c1:goto L61e7c1;
case 0x61e7c5:c.instructions+=11;goto B61e7c5;
case 0x61e7c9:c.instructions+=10;goto B61e7c9;
case 0x61e7cd:c.instructions+=9;goto B61e7cd;
case 0x61e7d3:c.instructions+=8;goto B61e7d3;
case 0x61e7d9:c.instructions+=7;goto B61e7d9;
case 0x61e7df:c.instructions+=6;goto B61e7df;
case 0x61e7e9:c.instructions+=5;goto B61e7e9;
case 0x61e7ef:c.instructions+=4;goto B61e7ef;
case 0x61e7f2:c.instructions+=3;goto B61e7f2;
case 0x61e7f3:c.instructions+=2;goto B61e7f3;
case 0x61e7f5:c.instructions+=1;goto B61e7f5;
case 0x61e7fa:goto L61e7fa;
case 0x61e7ff:c.instructions+=2;goto B61e7ff;
case 0x61e801:c.instructions+=1;goto B61e801;
case 0x61e803:goto L61e803;
case 0x61e809:c.instructions+=2;goto B61e809;
case 0x61e80b:c.instructions+=1;goto B61e80b;
case 0x61e811:goto L61e811;
case 0x61e812:c.instructions+=1;goto B61e812;
case 0x61e817:goto L61e817;
case 0x61e81a:c.instructions+=7;goto B61e81a;
case 0x61e824:c.instructions+=6;goto B61e824;
case 0x61e825:c.instructions+=5;goto B61e825;
case 0x61e826:c.instructions+=4;goto B61e826;
case 0x61e827:c.instructions+=3;goto B61e827;
case 0x61e829:c.instructions+=2;goto B61e829;
case 0x61e82a:c.instructions+=1;goto B61e82a;
case 0x61e82b:goto L61e82b;
case 0x61e830:c.instructions+=2;goto B61e830;
case 0x61e832:c.instructions+=1;goto B61e832;
case 0x61e834:goto L61e834;
case 0x61e83a:c.instructions+=5;goto B61e83a;
case 0x61e83b:c.instructions+=4;goto B61e83b;
case 0x61e83e:c.instructions+=3;goto B61e83e;
case 0x61e840:c.instructions+=2;goto B61e840;
case 0x61e842:c.instructions+=1;goto B61e842;
case 0x61e847:goto L61e847;
case 0x61e84d:c.instructions+=5;goto B61e84d;
case 0x61e84e:c.instructions+=4;goto B61e84e;
case 0x61e851:c.instructions+=3;goto B61e851;
case 0x61e853:c.instructions+=2;goto B61e853;
case 0x61e855:c.instructions+=1;goto B61e855;
case 0x61e85a:goto L61e85a;
case 0x61e860:c.instructions+=5;goto B61e860;
case 0x61e861:c.instructions+=4;goto B61e861;
case 0x61e864:c.instructions+=3;goto B61e864;
case 0x61e866:c.instructions+=2;goto B61e866;
case 0x61e868:c.instructions+=1;goto B61e868;
case 0x61e86d:goto L61e86d;
case 0x61e873:c.instructions+=11;goto B61e873;
case 0x61e876:c.instructions+=10;goto B61e876;
case 0x61e87c:c.instructions+=9;goto B61e87c;
case 0x61e882:c.instructions+=8;goto B61e882;
case 0x61e887:c.instructions+=7;goto B61e887;
case 0x61e88b:c.instructions+=6;goto B61e88b;
case 0x61e88e:c.instructions+=5;goto B61e88e;
case 0x61e891:c.instructions+=4;goto B61e891;
case 0x61e893:c.instructions+=3;goto B61e893;
case 0x61e897:c.instructions+=2;goto B61e897;
case 0x61e89b:c.instructions+=1;goto B61e89b;
case 0x61e8a1:goto L61e8a1;
case 0x61e8a7:c.instructions+=2;goto B61e8a7;
case 0x61e8a9:c.instructions+=1;goto B61e8a9;
case 0x61e8af:goto L61e8af;
case 0x61e8b3:c.instructions+=1;goto B61e8b3;
case 0x61e8b9:goto L61e8b9;
case 0x61e8bd:c.instructions+=36;goto B61e8bd;
case 0x61e8c2:c.instructions+=35;goto B61e8c2;
case 0x61e8c5:c.instructions+=34;goto B61e8c5;
case 0x61e8c6:c.instructions+=33;goto B61e8c6;
case 0x61e8ca:c.instructions+=32;goto B61e8ca;
case 0x61e8ce:c.instructions+=31;goto B61e8ce;
case 0x61e8d1:c.instructions+=30;goto B61e8d1;
case 0x61e8d3:c.instructions+=29;goto B61e8d3;
case 0x61e8d7:c.instructions+=28;goto B61e8d7;
case 0x61e8d9:c.instructions+=27;goto B61e8d9;
case 0x61e8db:c.instructions+=26;goto B61e8db;
case 0x61e8de:c.instructions+=25;goto B61e8de;
case 0x61e8e2:c.instructions+=24;goto B61e8e2;
case 0x61e8e5:c.instructions+=23;goto B61e8e5;
case 0x61e8e9:c.instructions+=22;goto B61e8e9;
case 0x61e8ec:c.instructions+=21;goto B61e8ec;
case 0x61e8ee:c.instructions+=20;goto B61e8ee;
case 0x61e8f2:c.instructions+=19;goto B61e8f2;
case 0x61e8f5:c.instructions+=18;goto B61e8f5;
case 0x61e8f7:c.instructions+=17;goto B61e8f7;
case 0x61e8fa:c.instructions+=16;goto B61e8fa;
case 0x61e8fe:c.instructions+=15;goto B61e8fe;
case 0x61e901:c.instructions+=14;goto B61e901;
case 0x61e905:c.instructions+=13;goto B61e905;
case 0x61e908:c.instructions+=12;goto B61e908;
case 0x61e90a:c.instructions+=11;goto B61e90a;
case 0x61e90e:c.instructions+=10;goto B61e90e;
case 0x61e911:c.instructions+=9;goto B61e911;
case 0x61e913:c.instructions+=8;goto B61e913;
case 0x61e916:c.instructions+=7;goto B61e916;
case 0x61e91d:c.instructions+=6;goto B61e91d;
case 0x61e924:c.instructions+=5;goto B61e924;
case 0x61e926:c.instructions+=4;goto B61e926;
case 0x61e92a:c.instructions+=3;goto B61e92a;
case 0x61e92e:c.instructions+=2;goto B61e92e;
case 0x61e932:c.instructions+=1;goto B61e932;
case 0x61e937:goto L61e937;
case 0x61e93b:c.instructions+=3;goto B61e93b;
case 0x61e93c:c.instructions+=2;goto B61e93c;
case 0x61e944:c.instructions+=1;goto B61e944;
case 0x61e949:goto L61e949;
case 0x61e94f:c.instructions+=5;goto B61e94f;
case 0x61e955:c.instructions+=4;goto B61e955;
case 0x61e958:c.instructions+=3;goto B61e958;
case 0x61e95a:c.instructions+=2;goto B61e95a;
case 0x61e95d:c.instructions+=1;goto B61e95d;
case 0x61e95f:goto L61e95f;
case 0x61e963:c.instructions+=5;goto B61e963;
case 0x61e964:c.instructions+=4;goto B61e964;
case 0x61e968:c.instructions+=3;goto B61e968;
case 0x61e969:c.instructions+=2;goto B61e969;
case 0x61e973:c.instructions+=1;goto B61e973;
case 0x61e978:goto L61e978;
case 0x61e97b:c.instructions+=1;goto B61e97b;
case 0x61e97d:goto L61e97d;
case 0x61e985:c.instructions+=2;goto B61e985;
case 0x61e98d:c.instructions+=1;goto B61e98d;
case 0x61e995:goto L61e995;
case 0x61e99a:c.instructions+=3;goto B61e99a;
case 0x61e99c:c.instructions+=2;goto B61e99c;
case 0x61e99e:c.instructions+=1;goto B61e99e;
case 0x61e9a0:goto L61e9a0;
case 0x61e9a2:c.instructions+=1;goto B61e9a2;
case 0x61e9a7:goto L61e9a7;
case 0x61e9ad:c.instructions+=11;goto B61e9ad;
case 0x61e9b3:c.instructions+=10;goto B61e9b3;
case 0x61e9b9:c.instructions+=9;goto B61e9b9;
case 0x61e9bd:c.instructions+=8;goto B61e9bd;
case 0x61e9bf:c.instructions+=7;goto B61e9bf;
case 0x61e9c0:c.instructions+=6;goto B61e9c0;
case 0x61e9c4:c.instructions+=5;goto B61e9c4;
case 0x61e9c8:c.instructions+=4;goto B61e9c8;
case 0x61e9c9:c.instructions+=3;goto B61e9c9;
case 0x61e9cd:c.instructions+=2;goto B61e9cd;
case 0x61e9d1:c.instructions+=1;goto B61e9d1;
case 0x61e9d6:goto L61e9d6;
case 0x61e9da:c.instructions+=7;goto B61e9da;
case 0x61e9de:c.instructions+=6;goto B61e9de;
case 0x61e9e4:c.instructions+=5;goto B61e9e4;
case 0x61e9e8:c.instructions+=4;goto B61e9e8;
case 0x61e9ec:c.instructions+=3;goto B61e9ec;
case 0x61e9f0:c.instructions+=2;goto B61e9f0;
case 0x61e9f1:c.instructions+=1;goto B61e9f1;
case 0x61e9f6:goto L61e9f6;
case 0x61e9fa:c.instructions+=7;goto B61e9fa;
case 0x61ea00:c.instructions+=6;goto B61ea00;
case 0x61ea05:c.instructions+=5;goto B61ea05;
case 0x61ea08:c.instructions+=4;goto B61ea08;
case 0x61ea0a:c.instructions+=3;goto B61ea0a;
case 0x61ea0c:c.instructions+=2;goto B61ea0c;
case 0x61ea0f:c.instructions+=1;goto B61ea0f;
case 0x61ea11:goto L61ea11;
case 0x61ea16:c.instructions+=2;goto B61ea16;
case 0x61ea18:c.instructions+=1;goto B61ea18;
case 0x61ea1a:goto L61ea1a;
case 0x61ea21:c.instructions+=3;goto B61ea21;
case 0x61ea22:c.instructions+=2;goto B61ea22;
case 0x61ea23:c.instructions+=1;goto B61ea23;
case 0x61ea28:goto L61ea28;
case 0x61ea2c:c.instructions+=11;goto B61ea2c;
case 0x61ea30:c.instructions+=10;goto B61ea30;
case 0x61ea34:c.instructions+=9;goto B61ea34;
case 0x61ea3b:c.instructions+=8;goto B61ea3b;
case 0x61ea42:c.instructions+=7;goto B61ea42;
case 0x61ea49:c.instructions+=6;goto B61ea49;
case 0x61ea4a:c.instructions+=5;goto B61ea4a;
case 0x61ea50:c.instructions+=4;goto B61ea50;
case 0x61ea51:c.instructions+=3;goto B61ea51;
case 0x61ea58:c.instructions+=2;goto B61ea58;
case 0x61ea63:c.instructions+=1;goto B61ea63;
case 0x61ea68:goto L61ea68;
case 0x61ea6e:c.instructions+=6;goto B61ea6e;
case 0x61ea6f:c.instructions+=5;goto B61ea6f;
case 0x61ea73:c.instructions+=4;goto B61ea73;
case 0x61ea74:c.instructions+=3;goto B61ea74;
case 0x61ea7b:c.instructions+=2;goto B61ea7b;
case 0x61ea7c:c.instructions+=1;goto B61ea7c;
case 0x61ea81:goto L61ea81;
case 0x61ea87:c.instructions+=16;goto B61ea87;
case 0x61ea8a:c.instructions+=15;goto B61ea8a;
case 0x61ea8c:c.instructions+=14;goto B61ea8c;
case 0x61ea8f:c.instructions+=13;goto B61ea8f;
case 0x61ea92:c.instructions+=12;goto B61ea92;
case 0x61ea95:c.instructions+=11;goto B61ea95;
case 0x61ea9d:c.instructions+=10;goto B61ea9d;
case 0x61eaa0:c.instructions+=9;goto B61eaa0;
case 0x61eaa3:c.instructions+=8;goto B61eaa3;
case 0x61eaa7:c.instructions+=7;goto B61eaa7;
case 0x61eaaf:c.instructions+=6;goto B61eaaf;
case 0x61eab3:c.instructions+=5;goto B61eab3;
case 0x61eab7:c.instructions+=4;goto B61eab7;
case 0x61eabd:c.instructions+=3;goto B61eabd;
case 0x61eabf:c.instructions+=2;goto B61eabf;
case 0x61eac2:c.instructions+=1;goto B61eac2;
case 0x61eac4:goto L61eac4;
case 0x61eac8:c.instructions+=2;goto B61eac8;
case 0x61eace:c.instructions+=1;goto B61eace;
case 0x61ead2:goto L61ead2;
case 0x61ead6:c.instructions+=4;goto B61ead6;
case 0x61eadc:c.instructions+=3;goto B61eadc;
case 0x61eade:c.instructions+=2;goto B61eade;
case 0x61eae1:c.instructions+=1;goto B61eae1;
case 0x61eae3:goto L61eae3;
case 0x61eae9:c.instructions+=1;goto B61eae9;
case 0x61eaed:goto L61eaed;
case 0x61eaf3:c.instructions+=6;goto B61eaf3;
case 0x61eaf5:c.instructions+=5;goto B61eaf5;
case 0x61eaf9:c.instructions+=4;goto B61eaf9;
case 0x61eafb:c.instructions+=3;goto B61eafb;
case 0x61eafd:c.instructions+=2;goto B61eafd;
case 0x61eb00:c.instructions+=1;goto B61eb00;
case 0x61eb02:goto L61eb02;
case 0x61eb06:c.instructions+=1;goto B61eb06;
case 0x61eb08:goto L61eb08;
case 0x61eb0a:goto L61eb0a;
case 0x61eb10:c.instructions+=39;goto B61eb10;
case 0x61eb16:c.instructions+=38;goto B61eb16;
case 0x61eb1c:c.instructions+=37;goto B61eb1c;
case 0x61eb22:c.instructions+=36;goto B61eb22;
case 0x61eb28:c.instructions+=35;goto B61eb28;
case 0x61eb2e:c.instructions+=34;goto B61eb2e;
case 0x61eb34:c.instructions+=33;goto B61eb34;
case 0x61eb3a:c.instructions+=32;goto B61eb3a;
case 0x61eb40:c.instructions+=31;goto B61eb40;
case 0x61eb46:c.instructions+=30;goto B61eb46;
case 0x61eb4c:c.instructions+=29;goto B61eb4c;
case 0x61eb52:c.instructions+=28;goto B61eb52;
case 0x61eb58:c.instructions+=27;goto B61eb58;
case 0x61eb5e:c.instructions+=26;goto B61eb5e;
case 0x61eb64:c.instructions+=25;goto B61eb64;
case 0x61eb6a:c.instructions+=24;goto B61eb6a;
case 0x61eb70:c.instructions+=23;goto B61eb70;
case 0x61eb76:c.instructions+=22;goto B61eb76;
case 0x61eb7c:c.instructions+=21;goto B61eb7c;
case 0x61eb82:c.instructions+=20;goto B61eb82;
case 0x61eb88:c.instructions+=19;goto B61eb88;
case 0x61eb8e:c.instructions+=18;goto B61eb8e;
case 0x61eb94:c.instructions+=17;goto B61eb94;
case 0x61eb9a:c.instructions+=16;goto B61eb9a;
case 0x61eba0:c.instructions+=15;goto B61eba0;
case 0x61eba6:c.instructions+=14;goto B61eba6;
case 0x61ebac:c.instructions+=13;goto B61ebac;
case 0x61ebb2:c.instructions+=12;goto B61ebb2;
case 0x61ebb4:c.instructions+=11;goto B61ebb4;
case 0x61ebba:c.instructions+=10;goto B61ebba;
case 0x61ebbc:c.instructions+=9;goto B61ebbc;
case 0x61ebc2:c.instructions+=8;goto B61ebc2;
case 0x61ebc4:c.instructions+=7;goto B61ebc4;
case 0x61ebca:c.instructions+=6;goto B61ebca;
case 0x61ebd0:c.instructions+=5;goto B61ebd0;
case 0x61ebd2:c.instructions+=4;goto B61ebd2;
case 0x61ebd4:c.instructions+=3;goto B61ebd4;
case 0x61ebd9:c.instructions+=2;goto B61ebd9;
case 0x61ebdb:c.instructions+=1;goto B61ebdb;
case 0x61ebdd:goto L61ebdd;
case 0x61ebdf:c.instructions+=1;goto B61ebdf;
case 0x61ebe0:goto L61ebe0;
case 0x61ebe2:c.instructions+=1;goto B61ebe2;
case 0x61ebe4:goto L61ebe4;
case 0x61ebe5:c.instructions+=3;goto B61ebe5;
case 0x61ebe8:c.instructions+=2;goto B61ebe8;
case 0x61ebeb:c.instructions+=1;goto B61ebeb;
case 0x61ebed:goto L61ebed;
case 0x61ebef:goto L61ebef;
case 0x61ebf6:c.instructions+=2;goto B61ebf6;
case 0x61ebf8:c.instructions+=1;goto B61ebf8;
case 0x61ebfa:goto L61ebfa;
case 0x61ebfc:c.instructions+=1;goto B61ebfc;
case 0x61ec02:goto L61ec02;
case 0x61ec04:c.instructions+=1;goto B61ec04;
case 0x61ec06:goto L61ec06;
case 0x61ec07:c.instructions+=3;goto B61ec07;
case 0x61ec0a:c.instructions+=2;goto B61ec0a;
case 0x61ec0d:c.instructions+=1;goto B61ec0d;
case 0x61ec0f:goto L61ec0f;
case 0x61ec11:goto L61ec11;
case 0x61ec18:c.instructions+=1;goto B61ec18;
case 0x61ec1a:goto L61ec1a;
case 0x61ec21:goto L61ec21;
case 0x61ec26:c.instructions+=3;goto B61ec26;
case 0x61ec2a:c.instructions+=2;goto B61ec2a;
case 0x61ec2c:c.instructions+=1;goto B61ec2c;
case 0x61ec32:goto L61ec32;
case 0x61ec34:c.instructions+=2;goto B61ec34;
case 0x61ec37:c.instructions+=1;goto B61ec37;
case 0x61ec39:goto L61ec39;
case 0x61ec3a:c.instructions+=3;goto B61ec3a;
case 0x61ec3d:c.instructions+=2;goto B61ec3d;
case 0x61ec40:c.instructions+=1;goto B61ec40;
case 0x61ec42:goto L61ec42;
case 0x61ec44:goto L61ec44;
case 0x61ec48:goto L61ec48;
case 0x61ec4c:c.instructions+=19;goto B61ec4c;
case 0x61ec50:c.instructions+=18;goto B61ec50;
case 0x61ec56:c.instructions+=17;goto B61ec56;
case 0x61ec5a:c.instructions+=16;goto B61ec5a;
case 0x61ec61:c.instructions+=15;goto B61ec61;
case 0x61ec62:c.instructions+=14;goto B61ec62;
case 0x61ec66:c.instructions+=13;goto B61ec66;
case 0x61ec68:c.instructions+=12;goto B61ec68;
case 0x61ec6f:c.instructions+=11;goto B61ec6f;
case 0x61ec70:c.instructions+=10;goto B61ec70;
case 0x61ec77:c.instructions+=9;goto B61ec77;
case 0x61ec7c:c.instructions+=8;goto B61ec7c;
case 0x61ec80:c.instructions+=7;goto B61ec80;
case 0x61ec86:c.instructions+=6;goto B61ec86;
case 0x61ec8c:c.instructions+=5;goto B61ec8c;
case 0x61ec92:c.instructions+=4;goto B61ec92;
case 0x61ec99:c.instructions+=3;goto B61ec99;
case 0x61eca0:c.instructions+=2;goto B61eca0;
case 0x61eca7:c.instructions+=1;goto B61eca7;
case 0x61ecac:goto L61ecac;
case 0x61ecae:c.instructions+=2;goto B61ecae;
case 0x61ecb0:c.instructions+=1;goto B61ecb0;
case 0x61ecb2:goto L61ecb2;
case 0x61ecb5:c.instructions+=4;goto B61ecb5;
case 0x61ecb9:c.instructions+=3;goto B61ecb9;
case 0x61ecbb:c.instructions+=2;goto B61ecbb;
case 0x61ecbe:c.instructions+=1;goto B61ecbe;
case 0x61ecc0:goto L61ecc0;
case 0x61ecc6:goto L61ecc6;
case 0x61ecc7:c.instructions+=5;goto B61ecc7;
case 0x61ecc9:c.instructions+=4;goto B61ecc9;
case 0x61ecd0:c.instructions+=3;goto B61ecd0;
case 0x61ecd1:c.instructions+=2;goto B61ecd1;
case 0x61ecd6:c.instructions+=1;goto B61ecd6;
case 0x61ecdb:goto L61ecdb;
case 0x61ecdd:c.instructions+=2;goto B61ecdd;
case 0x61ecdf:c.instructions+=1;goto B61ecdf;
case 0x61ece1:goto L61ece1;
case 0x61ece4:c.instructions+=4;goto B61ece4;
case 0x61ece8:c.instructions+=3;goto B61ece8;
case 0x61ecea:c.instructions+=2;goto B61ecea;
case 0x61eced:c.instructions+=1;goto B61eced;
case 0x61ecef:goto L61ecef;
case 0x61ecf5:goto L61ecf5;
case 0x61ecfb:c.instructions+=2;goto B61ecfb;
case 0x61ecfe:c.instructions+=1;goto B61ecfe;
case 0x61ed00:goto L61ed00;
case 0x61ed06:c.instructions+=1;goto B61ed06;
case 0x61ed0b:goto L61ed0b;
case 0x61ed0c:c.instructions+=5;goto B61ed0c;
case 0x61ed0e:c.instructions+=4;goto B61ed0e;
case 0x61ed15:c.instructions+=3;goto B61ed15;
case 0x61ed16:c.instructions+=2;goto B61ed16;
case 0x61ed1b:c.instructions+=1;goto B61ed1b;
case 0x61ed20:goto L61ed20;
case 0x61ed22:c.instructions+=2;goto B61ed22;
case 0x61ed24:c.instructions+=1;goto B61ed24;
case 0x61ed26:goto L61ed26;
case 0x61ed29:c.instructions+=4;goto B61ed29;
case 0x61ed2d:c.instructions+=3;goto B61ed2d;
case 0x61ed2f:c.instructions+=2;goto B61ed2f;
case 0x61ed32:c.instructions+=1;goto B61ed32;
case 0x61ed34:goto L61ed34;
case 0x61ed3a:goto L61ed3a;
case 0x61ed3b:c.instructions+=5;goto B61ed3b;
case 0x61ed3d:c.instructions+=4;goto B61ed3d;
case 0x61ed44:c.instructions+=3;goto B61ed44;
case 0x61ed45:c.instructions+=2;goto B61ed45;
case 0x61ed4a:c.instructions+=1;goto B61ed4a;
case 0x61ed4f:goto L61ed4f;
case 0x61ed51:c.instructions+=1;goto B61ed51;
case 0x61ed53:goto L61ed53;
case 0x61ed56:c.instructions+=4;goto B61ed56;
case 0x61ed5a:c.instructions+=3;goto B61ed5a;
case 0x61ed5c:c.instructions+=2;goto B61ed5c;
case 0x61ed5f:c.instructions+=1;goto B61ed5f;
case 0x61ed61:goto L61ed61;
case 0x61ed67:goto L61ed67;
case 0x61ed6d:c.instructions+=2;goto B61ed6d;
case 0x61ed71:c.instructions+=1;goto B61ed71;
case 0x61ed77:goto L61ed77;
case 0x61ed79:c.instructions+=8;goto B61ed79;
case 0x61ed7d:c.instructions+=7;goto B61ed7d;
case 0x61ed83:c.instructions+=6;goto B61ed83;
case 0x61ed87:c.instructions+=5;goto B61ed87;
case 0x61ed8b:c.instructions+=4;goto B61ed8b;
case 0x61ed8f:c.instructions+=3;goto B61ed8f;
case 0x61ed92:c.instructions+=2;goto B61ed92;
case 0x61ed94:c.instructions+=1;goto B61ed94;
case 0x61ed9a:goto L61ed9a;
case 0x61eda0:goto L61eda0;
case 0x61eda2:c.instructions+=1;goto B61eda2;
case 0x61eda8:goto L61eda8;
case 0x61edac:c.instructions+=2;goto B61edac;
case 0x61edae:c.instructions+=1;goto B61edae;
case 0x61edb0:goto L61edb0;
case 0x61edb2:goto L61edb2;
case 0x61edb4:c.instructions+=1;goto B61edb4;
case 0x61edb6:goto L61edb6;
case 0x61edbd:c.instructions+=2;goto B61edbd;
case 0x61edc4:c.instructions+=1;goto B61edc4;
case 0x61edc6:goto L61edc6;
case 0x61edcd:c.instructions+=3;goto B61edcd;
case 0x61edd0:c.instructions+=2;goto B61edd0;
case 0x61edd7:c.instructions+=1;goto B61edd7;
case 0x61eddc:goto L61eddc;
case 0x61eddd:c.instructions+=2;goto B61eddd;
case 0x61ede0:c.instructions+=1;goto B61ede0;
case 0x61ede2:goto L61ede2;
case 0x61ede5:c.instructions+=2;goto B61ede5;
case 0x61ede7:c.instructions+=1;goto B61ede7;
case 0x61eded:goto L61eded;
case 0x61edef:c.instructions+=1;goto B61edef;
case 0x61edf5:goto L61edf5;
case 0x61edf9:c.instructions+=2;goto B61edf9;
case 0x61edfd:c.instructions+=1;goto B61edfd;
case 0x61edff:goto L61edff;
case 0x61ee05:c.instructions+=17;goto B61ee05;
case 0x61ee0b:c.instructions+=16;goto B61ee0b;
case 0x61ee11:c.instructions+=15;goto B61ee11;
case 0x61ee14:c.instructions+=14;goto B61ee14;
case 0x61ee18:c.instructions+=13;goto B61ee18;
case 0x61ee1e:c.instructions+=12;goto B61ee1e;
case 0x61ee24:c.instructions+=11;goto B61ee24;
case 0x61ee27:c.instructions+=10;goto B61ee27;
case 0x61ee2b:c.instructions+=9;goto B61ee2b;
case 0x61ee2d:c.instructions+=8;goto B61ee2d;
case 0x61ee30:c.instructions+=7;goto B61ee30;
case 0x61ee32:c.instructions+=6;goto B61ee32;
case 0x61ee35:c.instructions+=5;goto B61ee35;
case 0x61ee37:c.instructions+=4;goto B61ee37;
case 0x61ee39:c.instructions+=3;goto B61ee39;
case 0x61ee3c:c.instructions+=2;goto B61ee3c;
case 0x61ee3e:c.instructions+=1;goto B61ee3e;
case 0x61ee41:goto L61ee41;
case 0x61ee45:c.instructions+=1;goto B61ee45;
case 0x61ee4a:goto L61ee4a;
case 0x61ee50:c.instructions+=71;goto B61ee50;
case 0x61ee54:c.instructions+=70;goto B61ee54;
case 0x61ee5a:c.instructions+=69;goto B61ee5a;
case 0x61ee60:c.instructions+=68;goto B61ee60;
case 0x61ee64:c.instructions+=67;goto B61ee64;
case 0x61ee67:c.instructions+=66;goto B61ee67;
case 0x61ee69:c.instructions+=65;goto B61ee69;
case 0x61ee6b:c.instructions+=64;goto B61ee6b;
case 0x61ee6d:c.instructions+=63;goto B61ee6d;
case 0x61ee71:c.instructions+=62;goto B61ee71;
case 0x61ee75:c.instructions+=61;goto B61ee75;
case 0x61ee78:c.instructions+=60;goto B61ee78;
case 0x61ee7b:c.instructions+=59;goto B61ee7b;
case 0x61ee7d:c.instructions+=58;goto B61ee7d;
case 0x61ee80:c.instructions+=57;goto B61ee80;
case 0x61ee83:c.instructions+=56;goto B61ee83;
case 0x61ee85:c.instructions+=55;goto B61ee85;
case 0x61ee88:c.instructions+=54;goto B61ee88;
case 0x61ee8b:c.instructions+=53;goto B61ee8b;
case 0x61ee92:c.instructions+=52;goto B61ee92;
case 0x61ee95:c.instructions+=51;goto B61ee95;
case 0x61ee99:c.instructions+=50;goto B61ee99;
case 0x61ee9f:c.instructions+=49;goto B61ee9f;
case 0x61eea5:c.instructions+=48;goto B61eea5;
case 0x61eea9:c.instructions+=47;goto B61eea9;
case 0x61eeaf:c.instructions+=46;goto B61eeaf;
case 0x61eeb3:c.instructions+=45;goto B61eeb3;
case 0x61eeba:c.instructions+=44;goto B61eeba;
case 0x61eebc:c.instructions+=43;goto B61eebc;
case 0x61eec3:c.instructions+=42;goto B61eec3;
case 0x61eeca:c.instructions+=41;goto B61eeca;
case 0x61eed1:c.instructions+=40;goto B61eed1;
case 0x61eed3:c.instructions+=39;goto B61eed3;
case 0x61eed7:c.instructions+=38;goto B61eed7;
case 0x61eeda:c.instructions+=37;goto B61eeda;
case 0x61eedc:c.instructions+=36;goto B61eedc;
case 0x61eee0:c.instructions+=35;goto B61eee0;
case 0x61eee3:c.instructions+=34;goto B61eee3;
case 0x61eee5:c.instructions+=33;goto B61eee5;
case 0x61eee9:c.instructions+=32;goto B61eee9;
case 0x61eeeb:c.instructions+=31;goto B61eeeb;
case 0x61eeed:c.instructions+=30;goto B61eeed;
case 0x61eef1:c.instructions+=29;goto B61eef1;
case 0x61eef5:c.instructions+=28;goto B61eef5;
case 0x61eefc:c.instructions+=27;goto B61eefc;
case 0x61ef00:c.instructions+=26;goto B61ef00;
case 0x61ef07:c.instructions+=25;goto B61ef07;
case 0x61ef09:c.instructions+=24;goto B61ef09;
case 0x61ef10:c.instructions+=23;goto B61ef10;
case 0x61ef17:c.instructions+=22;goto B61ef17;
case 0x61ef1e:c.instructions+=21;goto B61ef1e;
case 0x61ef21:c.instructions+=20;goto B61ef21;
case 0x61ef28:c.instructions+=19;goto B61ef28;
case 0x61ef2f:c.instructions+=18;goto B61ef2f;
case 0x61ef33:c.instructions+=17;goto B61ef33;
case 0x61ef3a:c.instructions+=16;goto B61ef3a;
case 0x61ef3e:c.instructions+=15;goto B61ef3e;
case 0x61ef40:c.instructions+=14;goto B61ef40;
case 0x61ef44:c.instructions+=13;goto B61ef44;
case 0x61ef4b:c.instructions+=12;goto B61ef4b;
case 0x61ef4f:c.instructions+=11;goto B61ef4f;
case 0x61ef53:c.instructions+=10;goto B61ef53;
case 0x61ef57:c.instructions+=9;goto B61ef57;
case 0x61ef59:c.instructions+=8;goto B61ef59;
case 0x61ef60:c.instructions+=7;goto B61ef60;
case 0x61ef64:c.instructions+=6;goto B61ef64;
case 0x61ef67:c.instructions+=5;goto B61ef67;
case 0x61ef6a:c.instructions+=4;goto B61ef6a;
case 0x61ef70:c.instructions+=3;goto B61ef70;
case 0x61ef72:c.instructions+=2;goto B61ef72;
case 0x61ef75:c.instructions+=1;goto B61ef75;
case 0x61ef77:goto L61ef77;
case 0x61ef7b:c.instructions+=1;goto B61ef7b;
case 0x61ef80:goto L61ef80;
case 0x61ef84:c.instructions+=5;goto B61ef84;
case 0x61ef8a:c.instructions+=4;goto B61ef8a;
case 0x61ef8e:c.instructions+=3;goto B61ef8e;
case 0x61ef90:c.instructions+=2;goto B61ef90;
case 0x61ef93:c.instructions+=1;goto B61ef93;
case 0x61ef95:goto L61ef95;
case 0x61ef9b:c.instructions+=5;goto B61ef9b;
case 0x61ef9d:c.instructions+=4;goto B61ef9d;
case 0x61ef9f:c.instructions+=3;goto B61ef9f;
case 0x61efa5:c.instructions+=2;goto B61efa5;
case 0x61efa7:c.instructions+=1;goto B61efa7;
case 0x61efa9:goto L61efa9;
case 0x61efaf:c.instructions+=3;goto B61efaf;
case 0x61efb1:c.instructions+=2;goto B61efb1;
case 0x61efb4:c.instructions+=1;goto B61efb4;
case 0x61efb6:goto L61efb6;
case 0x61efba:c.instructions+=6;goto B61efba;
case 0x61efc0:c.instructions+=5;goto B61efc0;
case 0x61efc2:c.instructions+=4;goto B61efc2;
case 0x61efc8:c.instructions+=3;goto B61efc8;
case 0x61efca:c.instructions+=2;goto B61efca;
case 0x61efcc:c.instructions+=1;goto B61efcc;
case 0x61efce:goto L61efce;
case 0x61efd2:c.instructions+=5;goto B61efd2;
case 0x61efd8:c.instructions+=4;goto B61efd8;
case 0x61efdc:c.instructions+=3;goto B61efdc;
case 0x61efde:c.instructions+=2;goto B61efde;
case 0x61efe1:c.instructions+=1;goto B61efe1;
case 0x61efe3:goto L61efe3;
case 0x61efe9:c.instructions+=4;goto B61efe9;
case 0x61efec:c.instructions+=3;goto B61efec;
case 0x61efef:c.instructions+=2;goto B61efef;
case 0x61eff5:c.instructions+=1;goto B61eff5;
case 0x61eff7:goto L61eff7;
case 0x61effd:c.instructions+=2;goto B61effd;
case 0x61efff:c.instructions+=1;goto B61efff;
default:missing_instruction(c.pc);}
B61e000:L61e000:{c.instructions+=2;NFSU2_TR(0x61e000);
u8 U[10];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x46ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w2(U+8,u16(u32(r2(R+4))-u32(r2(U+6))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B61e004:{NFSU2_TR(0x61e004);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x61dfd8u,61d);}
}
B61e006:L61e006:{c.instructions+=2;NFSU2_TR(0x61e006);
u8 U[10];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x46ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w2(U+8,u16(u32(r2(R+4))-u32(r2(U+6))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B61e00a:{NFSU2_TR(0x61e00a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x61dfd8u,61d);}
}
B61e00c:L61e00c:{c.instructions+=6;NFSU2_TR(0x61e00c);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61e00e:{NFSU2_TR(0x61e00e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61e00f:{NFSU2_TR(0x61e00f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61e010:{NFSU2_TR(0x61e010);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61e011:{NFSU2_TR(0x61e011);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61e012:{NFSU2_TR(0x61e012);
if(r1(R+518)){{goto L61e023;}}
}
B61e014:L61e014:{c.instructions+=1;NFSU2_TR(0x61e014);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61e019ull));
TAIL_STATIC(0x612ee0u,612);
}
B61e019:L61e019:{c.instructions+=6;NFSU2_TR(0x61e019);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B61e01c:{NFSU2_TR(0x61e01c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B61e01d:{NFSU2_TR(0x61e01d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B61e01e:{NFSU2_TR(0x61e01e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B61e01f:{NFSU2_TR(0x61e01f);
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
B61e022:{NFSU2_TR(0x61e022);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B61e023:L61e023:{c.instructions+=1;NFSU2_TR(0x61e023);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61e028ull));
TAIL_STATIC(0x612d10u,612);
}
B61e028:L61e028:{c.instructions+=6;NFSU2_TR(0x61e028);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B61e02b:{NFSU2_TR(0x61e02b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B61e02c:{NFSU2_TR(0x61e02c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B61e02d:{NFSU2_TR(0x61e02d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B61e02e:{NFSU2_TR(0x61e02e);
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
B61e031:{NFSU2_TR(0x61e031);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B61e040:L61e040:{c.instructions+=9;NFSU2_TR(0x61e040);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61e041:{NFSU2_TR(0x61e041);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61e042:{NFSU2_TR(0x61e042);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61e043:{NFSU2_TR(0x61e043);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61e044:{NFSU2_TR(0x61e044);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B61e048:{NFSU2_TR(0x61e048);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x604ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B61e04e:{NFSU2_TR(0x61e04e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61e050:{NFSU2_TR(0x61e050);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x58cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B61e056:{NFSU2_TR(0x61e056);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L61e05c;}}
}
B61e058:L61e058:{c.instructions+=2;NFSU2_TR(0x61e058);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B61e05a:{NFSU2_TR(0x61e05a);
{goto L61e080;}
}
B61e05c:L61e05c:{c.instructions+=2;NFSU2_TR(0x61e05c);
u8 U[4];
w4(U+0,u32(0x7a8708ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61e061:{NFSU2_TR(0x61e061);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61e066ull));
TAIL_STATIC(0x43db50u,43d);
}
B61e066:L61e066:{c.instructions+=5;NFSU2_TR(0x61e066);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B61e069:{NFSU2_TR(0x61e069);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61e06b:{NFSU2_TR(0x61e06b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61e06c:{NFSU2_TR(0x61e06c);
__builtin_memmove((R+4),(R+24),4);
}
B61e06e:{NFSU2_TR(0x61e06e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61e073ull));
TAIL_STATIC(0x60fef0u,60f);
}
B61e073:L61e073:{c.instructions+=2;NFSU2_TR(0x61e073);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61e075:{NFSU2_TR(0x61e075);
if(r1(R+518)){{goto L61e07c;}}
}
B61e077:L61e077:{c.instructions+=2;NFSU2_TR(0x61e077);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61e07a:{NFSU2_TR(0x61e07a);
{goto L61e07e;}
}
B61e07c:L61e07c:{c.instructions+=1;NFSU2_TR(0x61e07c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B61e07e:L61e07e:{c.instructions+=1;NFSU2_TR(0x61e07e);
__builtin_memmove((R+12),(R+0),4);
}
B61e080:L61e080:{c.instructions+=3;NFSU2_TR(0x61e080);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x604ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B61e086:{NFSU2_TR(0x61e086);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61e088:{NFSU2_TR(0x61e088);
if(r1(R+518)){{goto L61e0b0;}}
}
B61e08a:L61e08a:{c.instructions+=2;NFSU2_TR(0x61e08a);
u8 U[4];
w4(U+0,u32(0x7a8708ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61e08f:{NFSU2_TR(0x61e08f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61e094ull));
TAIL_STATIC(0x43db50u,43d);
}
B61e094:L61e094:{c.instructions+=5;NFSU2_TR(0x61e094);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B61e097:{NFSU2_TR(0x61e097);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61e099:{NFSU2_TR(0x61e099);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61e09a:{NFSU2_TR(0x61e09a);
__builtin_memmove((R+4),(R+24),4);
}
B61e09c:{NFSU2_TR(0x61e09c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61e0a1ull));
TAIL_STATIC(0x60fef0u,60f);
}
B61e0a1:L61e0a1:{c.instructions+=2;NFSU2_TR(0x61e0a1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61e0a3:{NFSU2_TR(0x61e0a3);
if(r1(R+518)){{goto L61e0aa;}}
}
B61e0a5:L61e0a5:{c.instructions+=2;NFSU2_TR(0x61e0a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61e0a8:{NFSU2_TR(0x61e0a8);
{goto L61e0ac;}
}
B61e0aa:L61e0aa:{c.instructions+=1;NFSU2_TR(0x61e0aa);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B61e0ac:L61e0ac:{c.instructions+=2;NFSU2_TR(0x61e0ac);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61e0ae:{NFSU2_TR(0x61e0ae);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L61e0c5;}}
}
B61e0b0:L61e0b0:{c.instructions+=7;NFSU2_TR(0x61e0b0);
u8 U[4];
w4(U+0,u32(0x4aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61e0b2:{NFSU2_TR(0x61e0b2);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B61e0b4:{NFSU2_TR(0x61e0b4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61e0b5:{NFSU2_TR(0x61e0b5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61e0b6:{NFSU2_TR(0x61e0b6);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61e0b7:{NFSU2_TR(0x61e0b7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61e0b8:{NFSU2_TR(0x61e0b8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61e0bdull));
TAIL_STATIC(0x61de90u,61d);
}
B61e0bd:L61e0bd:{c.instructions+=6;NFSU2_TR(0x61e0bd);
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
B61e0c0:{NFSU2_TR(0x61e0c0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B61e0c1:{NFSU2_TR(0x61e0c1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B61e0c2:{NFSU2_TR(0x61e0c2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B61e0c3:{NFSU2_TR(0x61e0c3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B61e0c4:{NFSU2_TR(0x61e0c4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B61e0c5:L61e0c5:{c.instructions+=3;NFSU2_TR(0x61e0c5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61e0c6:{NFSU2_TR(0x61e0c6);
u8 U[4];
w4(U+0,u32(0x7a8718ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61e0cb:{NFSU2_TR(0x61e0cb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61e0d0ull));
TAIL_STATIC(0x43db80u,43d);
}
B61e0d0:L61e0d0:{c.instructions+=7;NFSU2_TR(0x61e0d0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B61e0d3:{NFSU2_TR(0x61e0d3);
u8 U[4];
w4(U+0,u32(0x4aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61e0d5:{NFSU2_TR(0x61e0d5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61e0d6:{NFSU2_TR(0x61e0d6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61e0d7:{NFSU2_TR(0x61e0d7);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61e0d8:{NFSU2_TR(0x61e0d8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61e0d9:{NFSU2_TR(0x61e0d9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61e0deull));
TAIL_STATIC(0x61de90u,61d);
}
B61e0de:L61e0de:{c.instructions+=6;NFSU2_TR(0x61e0de);
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
B61e0e1:{NFSU2_TR(0x61e0e1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B61e0e2:{NFSU2_TR(0x61e0e2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B61e0e3:{NFSU2_TR(0x61e0e3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B61e0e4:{NFSU2_TR(0x61e0e4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B61e0e5:{NFSU2_TR(0x61e0e5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B61e0f0:L61e0f0:{c.instructions+=2;NFSU2_TR(0x61e0f0);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61e0f2:{NFSU2_TR(0x61e0f2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61e0f7ull));
TAIL_STATIC(0x48b1e0u,48b);
}
B61e0f7:L61e0f7:{c.instructions+=4;NFSU2_TR(0x61e0f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61e0fa:{NFSU2_TR(0x61e0fa);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61e0fc:{NFSU2_TR(0x61e0fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x509cull))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B61e106:{NFSU2_TR(0x61e106);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61e10bull));
TAIL_STATIC(0x48b1e0u,48b);
}
B61e10b:L61e10b:{c.instructions+=7;NFSU2_TR(0x61e10b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B61e10e:{NFSU2_TR(0x61e10e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B61e111:{NFSU2_TR(0x61e111);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61e116:{NFSU2_TR(0x61e116);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61e118:{NFSU2_TR(0x61e118);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61e11a:{NFSU2_TR(0x61e11a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x509cull))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B61e124:{NFSU2_TR(0x61e124);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61e129ull));
TAIL_STATIC(0x48b1e0u,48b);
}
B61e129:L61e129:{c.instructions+=3;NFSU2_TR(0x61e129);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B61e12c:{NFSU2_TR(0x61e12c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B61e12f:{NFSU2_TR(0x61e12f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61e134ull));
TAIL_STATIC(0x613050u,613);
}
B61e134:L61e134:{c.instructions+=4;NFSU2_TR(0x61e134);
u8 U[4];
w4(U+0,u32(0x3f800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61e139:{NFSU2_TR(0x61e139);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61e13b:{NFSU2_TR(0x61e13b);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61e13d:{NFSU2_TR(0x61e13d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61e142ull));
TAIL_STATIC(0x48b1e0u,48b);
}
B61e142:L61e142:{c.instructions+=3;NFSU2_TR(0x61e142);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B61e145:{NFSU2_TR(0x61e145);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B61e148:{NFSU2_TR(0x61e148);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61e14dull));
TAIL_STATIC(0x613050u,613);
}
B61e14d:L61e14d:{c.instructions+=1;NFSU2_TR(0x61e14d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B61e150:L61e150:{c.instructions+=6;NFSU2_TR(0x61e150);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61e151:{NFSU2_TR(0x61e151);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61e152:{NFSU2_TR(0x61e152);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61e153:{NFSU2_TR(0x61e153);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61e154:{NFSU2_TR(0x61e154);
__builtin_memmove((R+24),(R+4),4);
}
B61e156:{NFSU2_TR(0x61e156);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61e15bull));
TAIL_STATIC(0x614090u,614);
}
B61e15b:L61e15b:{c.instructions+=4;NFSU2_TR(0x61e15b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4f10ull))));
__builtin_memmove((R+28),(U+0),4);
}
B61e161:{NFSU2_TR(0x61e161);
w4(R+20,u32(0x2ull));
}
B61e166:{NFSU2_TR(0x61e166);
w4(R+12,u32(0x80ull));
}
B61e16b:{NFSU2_TR(0x61e16b);
{goto L61e170;}
}
B61e170:L61e170:{c.instructions+=2;NFSU2_TR(0x61e170);
__builtin_memmove((R+4),(R+28),4);
}
B61e172:{NFSU2_TR(0x61e172);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61e177ull));
TAIL_STATIC(0x5bb1c0u,5bb);
}
B61e177:L61e177:{c.instructions+=3;NFSU2_TR(0x61e177);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+12))));
}
B61e179:{NFSU2_TR(0x61e179);
w4(R+20,u32(u32(r4(R+20))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+20))==(u32(0x0ull))));
}
B61e17a:{NFSU2_TR(0x61e17a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x61e170u);}goto L61e170;}}
}
B61e17c:L61e17c:{c.instructions+=91;NFSU2_TR(0x61e17c);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B61e180:{NFSU2_TR(0x61e180);
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
B61e182:{NFSU2_TR(0x61e182);
w4(R+4,u32(0x3e99999aull));
}
B61e187:{NFSU2_TR(0x61e187);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50a8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61e18d:{NFSU2_TR(0x61e18d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ccull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61e193:{NFSU2_TR(0x61e193);
w4(R+4,u32(0x3f800000ull));
}
B61e198:{NFSU2_TR(0x61e198);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50f0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61e19e:{NFSU2_TR(0x61e19e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50d0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61e1a4:{NFSU2_TR(0x61e1a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x509cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61e1aa:{NFSU2_TR(0x61e1aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1f0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61e1b0:{NFSU2_TR(0x61e1b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61e1b6:{NFSU2_TR(0x61e1b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50a4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61e1bc:{NFSU2_TR(0x61e1bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50acull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61e1c2:{NFSU2_TR(0x61e1c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50b0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61e1c8:{NFSU2_TR(0x61e1c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50b4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61e1ce:{NFSU2_TR(0x61e1ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50b8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61e1d4:{NFSU2_TR(0x61e1d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50bcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61e1da:{NFSU2_TR(0x61e1da);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50c0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61e1e0:{NFSU2_TR(0x61e1e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50c4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61e1e6:{NFSU2_TR(0x61e1e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50c8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61e1ec:{NFSU2_TR(0x61e1ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50d4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61e1f2:{NFSU2_TR(0x61e1f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50d8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61e1f8:{NFSU2_TR(0x61e1f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50dcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61e1fe:{NFSU2_TR(0x61e1fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50e0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61e204:{NFSU2_TR(0x61e204);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50e4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61e20a:{NFSU2_TR(0x61e20a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50e8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61e210:{NFSU2_TR(0x61e210);
u8 U[16];
w4(U+0,u32(u32(u32(0x50d4ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B61e217:{NFSU2_TR(0x61e217);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B61e21b:{NFSU2_TR(0x61e21b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ecull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61e221:{NFSU2_TR(0x61e221);
w1(R+8,u8(0x1cull));
}
B61e223:{NFSU2_TR(0x61e223);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4f54ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61e229:{NFSU2_TR(0x61e229);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4f58ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61e22f:{NFSU2_TR(0x61e22f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4f5cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61e235:{NFSU2_TR(0x61e235);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4f60ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61e23b:{NFSU2_TR(0x61e23b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4fd4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61e241:{NFSU2_TR(0x61e241);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4fd8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61e247:{NFSU2_TR(0x61e247);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4fdcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61e24d:{NFSU2_TR(0x61e24d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4fe0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61e253:{NFSU2_TR(0x61e253);
w1(R+4,u8(0x64ull));
}
B61e255:{NFSU2_TR(0x61e255);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1e4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61e25b:{NFSU2_TR(0x61e25b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1e8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61e261:{NFSU2_TR(0x61e261);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4d00ull))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B61e26b:{NFSU2_TR(0x61e26b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4f50ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61e271:{NFSU2_TR(0x61e271);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4f64ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61e277:{NFSU2_TR(0x61e277);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4f68ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61e27d:{NFSU2_TR(0x61e27d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4f6cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61e283:{NFSU2_TR(0x61e283);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4f70ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B61e289:{NFSU2_TR(0x61e289);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4f71ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B61e28f:{NFSU2_TR(0x61e28f);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4f72ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B61e295:{NFSU2_TR(0x61e295);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4f73ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B61e29b:{NFSU2_TR(0x61e29b);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4f74ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B61e2a1:{NFSU2_TR(0x61e2a1);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4f75ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B61e2a7:{NFSU2_TR(0x61e2a7);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4f76ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B61e2ad:{NFSU2_TR(0x61e2ad);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4f77ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B61e2b3:{NFSU2_TR(0x61e2b3);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4f78ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B61e2b9:{NFSU2_TR(0x61e2b9);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4f79ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B61e2bf:{NFSU2_TR(0x61e2bf);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4f7aull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B61e2c5:{NFSU2_TR(0x61e2c5);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4f7bull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B61e2cb:{NFSU2_TR(0x61e2cb);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4f7cull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B61e2d1:{NFSU2_TR(0x61e2d1);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4f7dull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B61e2d7:{NFSU2_TR(0x61e2d7);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4f7eull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B61e2dd:{NFSU2_TR(0x61e2dd);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4f7full))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B61e2e3:{NFSU2_TR(0x61e2e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4fd0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61e2e9:{NFSU2_TR(0x61e2e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4fe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61e2ef:{NFSU2_TR(0x61e2ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4fe8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61e2f5:{NFSU2_TR(0x61e2f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4fecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61e2fb:{NFSU2_TR(0x61e2fb);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ff0ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B61e301:{NFSU2_TR(0x61e301);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ff1ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B61e307:{NFSU2_TR(0x61e307);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ff2ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B61e30d:{NFSU2_TR(0x61e30d);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ff3ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B61e313:{NFSU2_TR(0x61e313);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ff4ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B61e319:{NFSU2_TR(0x61e319);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ff5ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B61e31f:{NFSU2_TR(0x61e31f);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ff6ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B61e325:{NFSU2_TR(0x61e325);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ff7ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B61e32b:{NFSU2_TR(0x61e32b);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ff8ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B61e331:{NFSU2_TR(0x61e331);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ff9ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B61e337:{NFSU2_TR(0x61e337);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ffaull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B61e33d:{NFSU2_TR(0x61e33d);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ffbull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B61e343:{NFSU2_TR(0x61e343);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ffcull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B61e349:{NFSU2_TR(0x61e349);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ffdull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B61e34f:{NFSU2_TR(0x61e34f);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ffeull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B61e355:{NFSU2_TR(0x61e355);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B61e356:{NFSU2_TR(0x61e356);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4edcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61e35c:{NFSU2_TR(0x61e35c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ee0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61e362:{NFSU2_TR(0x61e362);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ee4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61e368:{NFSU2_TR(0x61e368);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4fffull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B61e36e:{NFSU2_TR(0x61e36e);
__builtin_memmove((R+0),(R+24),4);
}
B61e370:{NFSU2_TR(0x61e370);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B61e371:{NFSU2_TR(0x61e371);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B61e372:{NFSU2_TR(0x61e372);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B61e373:{NFSU2_TR(0x61e373);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B61e380:L61e380:{c.instructions+=8;NFSU2_TR(0x61e380);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61e381:{NFSU2_TR(0x61e381);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61e382:{NFSU2_TR(0x61e382);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B61e386:{NFSU2_TR(0x61e386);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61e387:{NFSU2_TR(0x61e387);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B61e38b:{NFSU2_TR(0x61e38b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61e38c:{NFSU2_TR(0x61e38c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61e38d:{NFSU2_TR(0x61e38d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61e392ull));
TAIL_STATIC(0x6134e0u,613);
}
B61e392:L61e392:{c.instructions+=5;NFSU2_TR(0x61e392);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61e396:{NFSU2_TR(0x61e396);
__builtin_memmove((R+0),gp(0x8a1f34),4);
}
B61e39b:{NFSU2_TR(0x61e39b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B61e39e:{NFSU2_TR(0x61e39e);
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
B61e3a0:{NFSU2_TR(0x61e3a0);
if(r1(R+518)){{goto L61e3d5;}}
}
B61e3a2:L61e3a2:{c.instructions+=4;NFSU2_TR(0x61e3a2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61e3a3:{NFSU2_TR(0x61e3a3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61e3a4:{NFSU2_TR(0x61e3a4);
w4(R+4,u32(0x8a1f28ull));
}
B61e3a9:{NFSU2_TR(0x61e3a9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61e3aeull));
TAIL_STATIC(0x5fa540u,5fa);
}
B61e3ae:L61e3ae:{c.instructions+=3;NFSU2_TR(0x61e3ae);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61e3b0:{NFSU2_TR(0x61e3b0);
w4(R+4,u32(0x8a1f28ull));
}
B61e3b5:{NFSU2_TR(0x61e3b5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61e3baull));
TAIL_STATIC(0x5f0b40u,5f0);
}
B61e3ba:L61e3ba:{c.instructions+=4;NFSU2_TR(0x61e3ba);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B61e3be:{NFSU2_TR(0x61e3be);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B61e3c0:{NFSU2_TR(0x61e3c0);
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
B61e3c3:{NFSU2_TR(0x61e3c3);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L61e3d5;}}
}
B61e3c5:L61e3c5:{c.instructions+=3;NFSU2_TR(0x61e3c5);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61e3c7:{NFSU2_TR(0x61e3c7);
w4(R+4,u32(0x8a1f28ull));
}
B61e3cc:{NFSU2_TR(0x61e3cc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61e3d1ull));
TAIL_STATIC(0x5f0b40u,5f0);
}
B61e3d1:L61e3d1:{c.instructions+=4;NFSU2_TR(0x61e3d1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B61e3d2:{NFSU2_TR(0x61e3d2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B61e3d3:{NFSU2_TR(0x61e3d3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B61e3d4:{NFSU2_TR(0x61e3d4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B61e3d5:L61e3d5:{c.instructions+=5;NFSU2_TR(0x61e3d5);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61e3db:{NFSU2_TR(0x61e3db);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B61e3dc:{NFSU2_TR(0x61e3dc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B61e3dd:{NFSU2_TR(0x61e3dd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B61e3de:{NFSU2_TR(0x61e3de);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B61e3e0:L61e3e0:{c.instructions+=100;NFSU2_TR(0x61e3e0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61e3e1:{NFSU2_TR(0x61e3e1);
__builtin_memmove((R+20),(R+16),4);
}
B61e3e3:{NFSU2_TR(0x61e3e3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B61e3e6:{NFSU2_TR(0x61e3e6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61e3e7:{NFSU2_TR(0x61e3e7);
__builtin_memmove((R+0),gp(0x8039cc),4);
}
B61e3ec:{NFSU2_TR(0x61e3ec);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61e3f2:{NFSU2_TR(0x61e3f2);
{u32 ea_=u32(u32(8403560u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B61e3f8:{NFSU2_TR(0x61e3f8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61e3f9:{NFSU2_TR(0x61e3f9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61e3fa:{NFSU2_TR(0x61e3fa);
__builtin_memmove((R+24),(R+4),4);
}
B61e3fc:{NFSU2_TR(0x61e3fc);
{u32 ea_=u32(u32(8403556u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61e402:{NFSU2_TR(0x61e402);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4d4cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61e408:{NFSU2_TR(0x61e408);
__builtin_memmove((R+4),gp(0x8039d0),4);
}
B61e40e:{NFSU2_TR(0x61e40e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4d54ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61e414:{NFSU2_TR(0x61e414);
__builtin_memmove((R+8),gp(0x8039d4),4);
}
B61e41a:{NFSU2_TR(0x61e41a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4d5cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61e420:{NFSU2_TR(0x61e420);
__builtin_memmove((R+0),gp(0x8039d8),4);
}
B61e425:{NFSU2_TR(0x61e425);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4d64ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61e42b:{NFSU2_TR(0x61e42b);
{u32 ea_=u32(u32(8403404u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61e431:{NFSU2_TR(0x61e431);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61e437:{NFSU2_TR(0x61e437);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61e438:{NFSU2_TR(0x61e438);
{u32 ea_=u32(r4(R+24)+u32(19792u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61e43e:{NFSU2_TR(0x61e43e);
{u32 ea_=u32(u32(8403408u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61e444:{NFSU2_TR(0x61e444);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61e44a:{NFSU2_TR(0x61e44a);
{u32 ea_=u32(r4(R+24)+u32(19800u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61e450:{NFSU2_TR(0x61e450);
{u32 ea_=u32(u32(8403412u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61e456:{NFSU2_TR(0x61e456);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61e45c:{NFSU2_TR(0x61e45c);
{u32 ea_=u32(r4(R+24)+u32(19808u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61e462:{NFSU2_TR(0x61e462);
{u32 ea_=u32(u32(8403416u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61e468:{NFSU2_TR(0x61e468);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61e46e:{NFSU2_TR(0x61e46e);
{u32 ea_=u32(r4(R+24)+u32(19816u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61e474:{NFSU2_TR(0x61e474);
__builtin_memmove((R+4),gp(0x8039dc),4);
}
B61e47a:{NFSU2_TR(0x61e47a);
{u32 ea_=u32(u32(8403424u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61e480:{NFSU2_TR(0x61e480);
{u32 ea_=u32(u32(8403428u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61e486:{NFSU2_TR(0x61e486);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4db0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61e48c:{NFSU2_TR(0x61e48c);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B61e48e:{NFSU2_TR(0x61e48e);
{u32 ea_=u32(r4(R+24)+u32(19892u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61e494:{NFSU2_TR(0x61e494);
{u32 ea_=u32(r4(R+24)+u32(19896u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61e49a:{NFSU2_TR(0x61e49a);
__builtin_memmove((R+8),gp(0x8039e8),4);
}
B61e4a0:{NFSU2_TR(0x61e4a0);
{u32 ea_=u32(u32(8403436u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61e4a6:{NFSU2_TR(0x61e4a6);
{u32 ea_=u32(u32(8403440u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61e4ac:{NFSU2_TR(0x61e4ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4dc0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61e4b2:{NFSU2_TR(0x61e4b2);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B61e4b4:{NFSU2_TR(0x61e4b4);
{u32 ea_=u32(r4(R+24)+u32(19908u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61e4ba:{NFSU2_TR(0x61e4ba);
{u32 ea_=u32(r4(R+24)+u32(19912u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61e4c0:{NFSU2_TR(0x61e4c0);
__builtin_memmove((R+0),gp(0x8039f4),4);
}
B61e4c5:{NFSU2_TR(0x61e4c5);
{u32 ea_=u32(u32(8403448u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61e4cb:{NFSU2_TR(0x61e4cb);
{u32 ea_=u32(u32(8403452u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61e4d1:{NFSU2_TR(0x61e4d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4dd0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61e4d7:{NFSU2_TR(0x61e4d7);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B61e4d9:{NFSU2_TR(0x61e4d9);
{u32 ea_=u32(r4(R+24)+u32(19924u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61e4df:{NFSU2_TR(0x61e4df);
{u32 ea_=u32(r4(R+24)+u32(19928u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61e4e5:{NFSU2_TR(0x61e4e5);
__builtin_memmove((R+4),gp(0x803a00),4);
}
B61e4eb:{NFSU2_TR(0x61e4eb);
{u32 ea_=u32(u32(8403460u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61e4f1:{NFSU2_TR(0x61e4f1);
{u32 ea_=u32(u32(8403464u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61e4f7:{NFSU2_TR(0x61e4f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4de0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61e4fd:{NFSU2_TR(0x61e4fd);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B61e4ff:{NFSU2_TR(0x61e4ff);
{u32 ea_=u32(r4(R+24)+u32(19940u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61e505:{NFSU2_TR(0x61e505);
{u32 ea_=u32(r4(R+24)+u32(19944u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61e50b:{NFSU2_TR(0x61e50b);
__builtin_memmove((R+8),gp(0x80396c),4);
}
B61e511:{NFSU2_TR(0x61e511);
{u32 ea_=u32(u32(8403312u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61e517:{NFSU2_TR(0x61e517);
{u32 ea_=u32(u32(8403316u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61e51d:{NFSU2_TR(0x61e51d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4e10ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61e523:{NFSU2_TR(0x61e523);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B61e525:{NFSU2_TR(0x61e525);
{u32 ea_=u32(r4(R+24)+u32(19988u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61e52b:{NFSU2_TR(0x61e52b);
{u32 ea_=u32(r4(R+24)+u32(19992u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61e531:{NFSU2_TR(0x61e531);
__builtin_memmove((R+0),gp(0x80397c),4);
}
B61e536:{NFSU2_TR(0x61e536);
{u32 ea_=u32(u32(8403328u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61e53c:{NFSU2_TR(0x61e53c);
{u32 ea_=u32(u32(8403332u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61e542:{NFSU2_TR(0x61e542);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4e20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61e548:{NFSU2_TR(0x61e548);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B61e54a:{NFSU2_TR(0x61e54a);
{u32 ea_=u32(r4(R+24)+u32(20004u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61e550:{NFSU2_TR(0x61e550);
{u32 ea_=u32(r4(R+24)+u32(20008u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61e556:{NFSU2_TR(0x61e556);
__builtin_memmove((R+4),gp(0x80398c),4);
}
B61e55c:{NFSU2_TR(0x61e55c);
{u32 ea_=u32(u32(8403344u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61e562:{NFSU2_TR(0x61e562);
{u32 ea_=u32(u32(8403348u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61e568:{NFSU2_TR(0x61e568);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4e30ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61e56e:{NFSU2_TR(0x61e56e);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B61e570:{NFSU2_TR(0x61e570);
{u32 ea_=u32(r4(R+24)+u32(20020u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61e576:{NFSU2_TR(0x61e576);
{u32 ea_=u32(r4(R+24)+u32(20024u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61e57c:{NFSU2_TR(0x61e57c);
__builtin_memmove((R+8),gp(0x80399c),4);
}
B61e582:{NFSU2_TR(0x61e582);
{u32 ea_=u32(u32(8403360u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61e588:{NFSU2_TR(0x61e588);
{u32 ea_=u32(u32(8403364u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61e58e:{NFSU2_TR(0x61e58e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4e40ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61e594:{NFSU2_TR(0x61e594);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B61e596:{NFSU2_TR(0x61e596);
{u32 ea_=u32(r4(R+24)+u32(20036u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61e59c:{NFSU2_TR(0x61e59c);
{u32 ea_=u32(r4(R+24)+u32(20040u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61e5a2:{NFSU2_TR(0x61e5a2);
__builtin_memmove((R+0),gp(0x803978),4);
}
B61e5a7:{NFSU2_TR(0x61e5a7);
{u32 ea_=u32(u32(9061616u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61e5ad:{NFSU2_TR(0x61e5ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4e70ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61e5b3:{NFSU2_TR(0x61e5b3);
__builtin_memmove((R+4),gp(0x803988),4);
}
B61e5b9:{NFSU2_TR(0x61e5b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4e74ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61e5bf:{NFSU2_TR(0x61e5bf);
__builtin_memmove((R+8),gp(0x803998),4);
}
B61e5c5:{NFSU2_TR(0x61e5c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4e78ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61e5cb:{NFSU2_TR(0x61e5cb);
__builtin_memmove((R+0),gp(0x8039a8),4);
}
B61e5d0:{NFSU2_TR(0x61e5d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4e7cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61e5d6:{NFSU2_TR(0x61e5d6);
{u32 ea_=u32(u32(8403320u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B61e5dc:{NFSU2_TR(0x61e5dc);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B61e5de:{NFSU2_TR(0x61e5de);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B61e5e1:{NFSU2_TR(0x61e5e1);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L61e650;}}
}
B61e5e3:L61e5e3:{c.instructions+=3;NFSU2_TR(0x61e5e3);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5124ull))));
__builtin_memmove((R+28),(U+0),4);
}
B61e5e9:{NFSU2_TR(0x61e5e9);
w4(R+12,u32(0xaull));
}
B61e5ee:{NFSU2_TR(0x61e5ee);
__builtin_memmove((R+28),(R+28),4);
}
B61e5f0:L61e5f0:{c.instructions+=3;NFSU2_TR(0x61e5f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4e10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B61e5f6:{NFSU2_TR(0x61e5f6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61e5f7:{NFSU2_TR(0x61e5f7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61e5fcull));
TAIL_STATIC(0x43c1f0u,43c);
}
B61e5fc:L61e5fc:{c.instructions+=7;NFSU2_TR(0x61e5fc);
{u32 ea_=u32(r4(R+24)+u32(19984u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61e602:{NFSU2_TR(0x61e602);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61e608:{NFSU2_TR(0x61e608);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B61e60a:{NFSU2_TR(0x61e60a);
{u32 ea_=u32(r4(R+28)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61e60d:{NFSU2_TR(0x61e60d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4e14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B61e613:{NFSU2_TR(0x61e613);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61e614:{NFSU2_TR(0x61e614);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61e619ull));
TAIL_STATIC(0x43c1f0u,43c);
}
B61e619:L61e619:{c.instructions+=7;NFSU2_TR(0x61e619);
{u32 ea_=u32(r4(R+24)+u32(19988u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61e61f:{NFSU2_TR(0x61e61f);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61e625:{NFSU2_TR(0x61e625);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B61e627:{NFSU2_TR(0x61e627);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61e629:{NFSU2_TR(0x61e629);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4e18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61e62f:{NFSU2_TR(0x61e62f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61e630:{NFSU2_TR(0x61e630);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61e635ull));
TAIL_STATIC(0x43c1f0u,43c);
}
B61e635:L61e635:{c.instructions+=8;NFSU2_TR(0x61e635);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B61e637:{NFSU2_TR(0x61e637);
{u32 ea_=u32(r4(R+24)+u32(20080u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B61e63d:{NFSU2_TR(0x61e63d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
w4(U+4,u32(0xc7c34ff3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B61e644:{NFSU2_TR(0x61e644);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B61e647:{NFSU2_TR(0x61e647);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B61e64a:{NFSU2_TR(0x61e64a);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
}
B61e64b:{NFSU2_TR(0x61e64b);
{u32 ea_=u32(r4(R+28)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61e64e:{NFSU2_TR(0x61e64e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x61e5f0u);}goto L61e5f0;}}
}
B61e650:L61e650:{c.instructions+=7;NFSU2_TR(0x61e650);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61e656:{NFSU2_TR(0x61e656);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1f4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B61e65c:{NFSU2_TR(0x61e65c);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B61e65e:{NFSU2_TR(0x61e65e);
{u32 ea_=u32(u32(9051460u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B61e664:{NFSU2_TR(0x61e664);
{u32 ea_=u32(u32(8403556u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61e66a:{NFSU2_TR(0x61e66a);
{u32 ea_=u32(r4(R+24)+u32(500u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B61e670:{NFSU2_TR(0x61e670);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L61e678;}}
}
B61e672:L61e672:{c.instructions+=1;NFSU2_TR(0x61e672);
{u32 ea_=u32(u32(7882060u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B61e678:L61e678:{c.instructions+=2;NFSU2_TR(0x61e678);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B61e67a:{NFSU2_TR(0x61e67a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61e67full));
TAIL_STATIC(0x75bed4u,75b);
}
B61e67f:L61e67f:{c.instructions+=9;NFSU2_TR(0x61e67f);
{u32 ea_=u32(r4(R+24)+u32(19768u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61e685:{NFSU2_TR(0x61e685);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61e68b:{NFSU2_TR(0x61e68b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4d20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61e691:{NFSU2_TR(0x61e691);
{u32 ea_=u32(u32(9051460u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B61e697:{NFSU2_TR(0x61e697);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1f4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B61e69d:{NFSU2_TR(0x61e69d);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B61e69f:{NFSU2_TR(0x61e69f);
{u32 ea_=u32(u32(8403560u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61e6a5:{NFSU2_TR(0x61e6a5);
{u32 ea_=u32(r4(R+24)+u32(500u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B61e6ab:{NFSU2_TR(0x61e6ab);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L61e6b3;}}
}
B61e6ad:L61e6ad:{c.instructions+=1;NFSU2_TR(0x61e6ad);
{u32 ea_=u32(u32(7882060u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B61e6b3:L61e6b3:{c.instructions+=2;NFSU2_TR(0x61e6b3);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B61e6b5:{NFSU2_TR(0x61e6b5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61e6baull));
TAIL_STATIC(0x75bed4u,75b);
}
B61e6ba:L61e6ba:{c.instructions+=7;NFSU2_TR(0x61e6ba);
{u32 ea_=u32(r4(R+24)+u32(19764u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61e6c0:{NFSU2_TR(0x61e6c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4d1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61e6c6:{NFSU2_TR(0x61e6c6);
{u32 ea_=u32(u32(9051460u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61e6cc:{NFSU2_TR(0x61e6cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1f4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61e6d2:{NFSU2_TR(0x61e6d2);
{u32 ea_=u32(r4(R+24)+u32(500u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B61e6d8:{NFSU2_TR(0x61e6d8);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B61e6da:{NFSU2_TR(0x61e6da);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L61e6e2;}}
}
B61e6dc:L61e6dc:{c.instructions+=1;NFSU2_TR(0x61e6dc);
{u32 ea_=u32(u32(7882060u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B61e6e2:L61e6e2:{c.instructions+=2;NFSU2_TR(0x61e6e2);
{u32 ea_=u32(u32(9051460u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61e6e8:{NFSU2_TR(0x61e6e8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61e6edull));
TAIL_STATIC(0x75bed4u,75b);
}
B61e6ed:L61e6ed:{c.instructions+=8;NFSU2_TR(0x61e6ed);
{u32 ea_=u32(r4(R+24)+u32(19780u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61e6f3:{NFSU2_TR(0x61e6f3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B61e6f4:{NFSU2_TR(0x61e6f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4d2cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61e6fa:{NFSU2_TR(0x61e6fa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B61e6fb:{NFSU2_TR(0x61e6fb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B61e6fc:{NFSU2_TR(0x61e6fc);
__builtin_memmove((R+16),(R+20),4);
}
B61e6fe:{NFSU2_TR(0x61e6fe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B61e6ff:{NFSU2_TR(0x61e6ff);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B61e700:L61e700:{c.instructions+=10;NFSU2_TR(0x61e700);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61e701:{NFSU2_TR(0x61e701);
__builtin_memmove((R+20),(R+16),4);
}
B61e703:{NFSU2_TR(0x61e703);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B61e706:{NFSU2_TR(0x61e706);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x114ull))));
}
B61e70c:{NFSU2_TR(0x61e70c);
u8 U[14];
__builtin_memmove((U+6),gp(0x8654a4),4);
w1(R+512,u8((r4(U+6))<(u32(0x6ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x6ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x6ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B61e713:{NFSU2_TR(0x61e713);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61e714:{NFSU2_TR(0x61e714);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61e715:{NFSU2_TR(0x61e715);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61e716:{NFSU2_TR(0x61e716);
__builtin_memmove((R+24),(R+4),4);
}
B61e718:{NFSU2_TR(0x61e718);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x61f10du,61f);}
}
B61e71e:L61e71e:{c.instructions+=4;NFSU2_TR(0x61e71e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61e724:{NFSU2_TR(0x61e724);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
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
B61e728:{NFSU2_TR(0x61e728);
w4(R+4,u32(0x89e7a0ull));
}
B61e72d:{NFSU2_TR(0x61e72d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L61e733;}}
}
B61e72f:L61e72f:{c.instructions+=2;NFSU2_TR(0x61e72f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61e731:{NFSU2_TR(0x61e731);
{goto L61e735;}
}
B61e733:L61e733:{c.instructions+=1;NFSU2_TR(0x61e733);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61e735:L61e735:{c.instructions+=1;NFSU2_TR(0x61e735);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61e73aull));
TAIL_STATIC(0x5ed980u,5ed);
}
B61e73a:L61e73a:{c.instructions+=3;NFSU2_TR(0x61e73a);
__builtin_memmove((R+4),gp(0x890080),4);
}
B61e740:{NFSU2_TR(0x61e740);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61e741:{NFSU2_TR(0x61e741);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61e746ull));
TAIL_STATIC(0x5f0e30u,5f0);
}
B61e746:L61e746:{c.instructions+=9;NFSU2_TR(0x61e746);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B61e74c:{NFSU2_TR(0x61e74c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B61e74f:{NFSU2_TR(0x61e74f);
w4(R+8,u32(0x1ull));
}
B61e754:{NFSU2_TR(0x61e754);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r1(U+0))));
}
B61e756:{NFSU2_TR(0x61e756);
__builtin_memmove((R+28),(R+0),4);
}
B61e758:{NFSU2_TR(0x61e758);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x5b0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61e75e:{NFSU2_TR(0x61e75e);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x560ull))));
__builtin_memmove((R+4),(U+0),4);
}
B61e764:{NFSU2_TR(0x61e764);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+0))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B61e766:{NFSU2_TR(0x61e766);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L61e76e;}}
}
B61e768:L61e768:{c.instructions+=1;NFSU2_TR(0x61e768);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xd0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B61e76e:L61e76e:{c.instructions+=4;NFSU2_TR(0x61e76e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5010ull))));
__builtin_memmove((R+0),(U+0),4);
}
B61e774:{NFSU2_TR(0x61e774);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61e775:{NFSU2_TR(0x61e775);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61e776:{NFSU2_TR(0x61e776);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61e77bull));
TAIL_STATIC(0x4012b0u,401);
}
B61e77b:L61e77b:{c.instructions+=16;NFSU2_TR(0x61e77b);
{u32 ea_=u32(r4(R+28)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61e77e:{NFSU2_TR(0x61e77e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61e781:{NFSU2_TR(0x61e781);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61e785:{NFSU2_TR(0x61e785);
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
B61e787:{NFSU2_TR(0x61e787);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61e78b:{NFSU2_TR(0x61e78b);
{u32 ea_=u32(r4(R+28)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61e78e:{NFSU2_TR(0x61e78e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5040ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61e794:{NFSU2_TR(0x61e794);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5044ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61e79a:{NFSU2_TR(0x61e79a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5048ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61e7a0:{NFSU2_TR(0x61e7a0);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5010ull))));
__builtin_memmove((R+0),(U+0),4);
}
B61e7a6:{NFSU2_TR(0x61e7a6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61e7a7:{NFSU2_TR(0x61e7a7);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5050ull))));
__builtin_memmove((R+12),(U+0),4);
}
B61e7ad:{NFSU2_TR(0x61e7ad);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61e7b1:{NFSU2_TR(0x61e7b1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61e7b2:{NFSU2_TR(0x61e7b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x504cull))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B61e7bc:{NFSU2_TR(0x61e7bc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61e7c1ull));
TAIL_STATIC(0x4874e0u,487);
}
B61e7c1:L61e7c1:{c.instructions+=12;NFSU2_TR(0x61e7c1);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B61e7c5:{NFSU2_TR(0x61e7c5);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B61e7c9:{NFSU2_TR(0x61e7c9);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61e7cd:{NFSU2_TR(0x61e7cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5040ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61e7d3:{NFSU2_TR(0x61e7d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5044ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61e7d9:{NFSU2_TR(0x61e7d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5048ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61e7df:{NFSU2_TR(0x61e7df);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x504cull))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B61e7e9:{NFSU2_TR(0x61e7e9);
__builtin_memmove((R+4),gp(0x865154),4);
}
B61e7ef:{NFSU2_TR(0x61e7ef);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B61e7f2:{NFSU2_TR(0x61e7f2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61e7f3:{NFSU2_TR(0x61e7f3);
__builtin_memmove((R+4),(R+24),4);
}
B61e7f5:{NFSU2_TR(0x61e7f5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61e7faull));
TAIL_STATIC(0x6136b0u,613);
}
B61e7fa:L61e7fa:{c.instructions+=3;NFSU2_TR(0x61e7fa);
__builtin_memmove((R+0),gp(0x7faa50),4);
}
B61e7ff:{NFSU2_TR(0x61e7ff);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61e801:{NFSU2_TR(0x61e801);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L61e82b;}}
}
B61e803:L61e803:{c.instructions+=3;NFSU2_TR(0x61e803);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ed8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61e809:{NFSU2_TR(0x61e809);
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
B61e80b:{NFSU2_TR(0x61e80b);
if(r1(R+518)){TAIL_STATIC(0x61f10du,61f);}
}
B61e811:L61e811:{c.instructions+=2;NFSU2_TR(0x61e811);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61e812:{NFSU2_TR(0x61e812);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61e817ull));
TAIL_STATIC(0x5db8f0u,5db);
}
B61e817:L61e817:{c.instructions+=8;NFSU2_TR(0x61e817);
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
B61e81a:{NFSU2_TR(0x61e81a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ed8ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B61e824:{NFSU2_TR(0x61e824);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B61e825:{NFSU2_TR(0x61e825);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B61e826:{NFSU2_TR(0x61e826);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B61e827:{NFSU2_TR(0x61e827);
__builtin_memmove((R+16),(R+20),4);
}
B61e829:{NFSU2_TR(0x61e829);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B61e82a:{NFSU2_TR(0x61e82a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B61e82b:L61e82b:{c.instructions+=3;NFSU2_TR(0x61e82b);
__builtin_memmove((R+0),gp(0x8a1d38),4);
}
B61e830:{NFSU2_TR(0x61e830);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61e832:{NFSU2_TR(0x61e832);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L61e86d;}}
}
B61e834:L61e834:{c.instructions+=6;NFSU2_TR(0x61e834);
{u32 ea_=u32(r4(R+24)+u32(20696u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61e83a:{NFSU2_TR(0x61e83a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61e83b:{NFSU2_TR(0x61e83b);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61e83e:{NFSU2_TR(0x61e83e);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61e840:{NFSU2_TR(0x61e840);
__builtin_memmove((R+4),(R+24),4);
}
B61e842:{NFSU2_TR(0x61e842);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61e847ull));
TAIL_STATIC(0x613a30u,613);
}
B61e847:L61e847:{c.instructions+=6;NFSU2_TR(0x61e847);
{u32 ea_=u32(r4(R+24)+u32(20692u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61e84d:{NFSU2_TR(0x61e84d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61e84e:{NFSU2_TR(0x61e84e);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61e851:{NFSU2_TR(0x61e851);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61e853:{NFSU2_TR(0x61e853);
__builtin_memmove((R+4),(R+24),4);
}
B61e855:{NFSU2_TR(0x61e855);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61e85aull));
TAIL_STATIC(0x613a30u,613);
}
B61e85a:L61e85a:{c.instructions+=6;NFSU2_TR(0x61e85a);
{u32 ea_=u32(r4(R+24)+u32(20708u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61e860:{NFSU2_TR(0x61e860);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61e861:{NFSU2_TR(0x61e861);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61e864:{NFSU2_TR(0x61e864);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61e866:{NFSU2_TR(0x61e866);
__builtin_memmove((R+4),(R+24),4);
}
B61e868:{NFSU2_TR(0x61e868);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61e86dull));
TAIL_STATIC(0x613a30u,613);
}
B61e86d:L61e86d:{c.instructions+=12;NFSU2_TR(0x61e86d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B61e873:{NFSU2_TR(0x61e873);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61e876:{NFSU2_TR(0x61e876);
{u32 ea_=u32(r4(R+0)+u32(484u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61e87c:{NFSU2_TR(0x61e87c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1e0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B61e882:{NFSU2_TR(0x61e882);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1e0ull))));
}
B61e887:{NFSU2_TR(0x61e887);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61e88b:{NFSU2_TR(0x61e88b);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61e88e:{NFSU2_TR(0x61e88e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61e891:{NFSU2_TR(0x61e891);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61e893:{NFSU2_TR(0x61e893);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61e897:{NFSU2_TR(0x61e897);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61e89b:{NFSU2_TR(0x61e89b);
if(r1(R+518)){{goto L61e97d;}}
}
B61e8a1:L61e8a1:{c.instructions+=3;NFSU2_TR(0x61e8a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x238ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61e8a7:{NFSU2_TR(0x61e8a7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61e8a9:{NFSU2_TR(0x61e8a9);
if(r1(R+518)){{goto L61e97d;}}
}
B61e8af:L61e8af:{c.instructions+=2;NFSU2_TR(0x61e8af);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
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
B61e8b3:{NFSU2_TR(0x61e8b3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L61e97d;}}
}
B61e8b9:L61e8b9:{c.instructions+=37;NFSU2_TR(0x61e8b9);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61e8bd:{NFSU2_TR(0x61e8bd);
__builtin_memmove((R+0),gp(0x803a14),4);
}
B61e8c2:{NFSU2_TR(0x61e8c2);
{u32 ea_=u32(r4(R+12)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61e8c5:{NFSU2_TR(0x61e8c5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61e8c6:{NFSU2_TR(0x61e8c6);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61e8ca:{NFSU2_TR(0x61e8ca);
u8 U[4];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B61e8ce:{NFSU2_TR(0x61e8ce);
{u32 ea_=u32(r4(R+12)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61e8d1:{NFSU2_TR(0x61e8d1);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61e8d3:{NFSU2_TR(0x61e8d3);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61e8d7:{NFSU2_TR(0x61e8d7);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61e8d9:{NFSU2_TR(0x61e8d9);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61e8db:{NFSU2_TR(0x61e8db);
{u32 ea_=u32(r4(R+12)+u32(48u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B61e8de:{NFSU2_TR(0x61e8de);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61e8e2:{NFSU2_TR(0x61e8e2);
{u32 ea_=u32(r4(R+12)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61e8e5:{NFSU2_TR(0x61e8e5);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61e8e9:{NFSU2_TR(0x61e8e9);
{u32 ea_=u32(r4(R+12)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61e8ec:{NFSU2_TR(0x61e8ec);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61e8ee:{NFSU2_TR(0x61e8ee);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61e8f2:{NFSU2_TR(0x61e8f2);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61e8f5:{NFSU2_TR(0x61e8f5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61e8f7:{NFSU2_TR(0x61e8f7);
{u32 ea_=u32(r4(R+12)+u32(52u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B61e8fa:{NFSU2_TR(0x61e8fa);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61e8fe:{NFSU2_TR(0x61e8fe);
{u32 ea_=u32(r4(R+12)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61e901:{NFSU2_TR(0x61e901);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61e905:{NFSU2_TR(0x61e905);
{u32 ea_=u32(r4(R+12)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61e908:{NFSU2_TR(0x61e908);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61e90a:{NFSU2_TR(0x61e90a);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61e90e:{NFSU2_TR(0x61e90e);
{u32 ea_=u32(r4(R+12)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61e911:{NFSU2_TR(0x61e911);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B61e913:{NFSU2_TR(0x61e913);
{u32 ea_=u32(r4(R+12)+u32(56u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B61e916:{NFSU2_TR(0x61e916);
{u32 ea_=u32(r4(R+16)+u32(156u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61e91d:{NFSU2_TR(0x61e91d);
u8 U[8];
w4(U+0,u32(u32(u32(0x9cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B61e924:{NFSU2_TR(0x61e924);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B61e926:{NFSU2_TR(0x61e926);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61e92a:{NFSU2_TR(0x61e92a);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61e92e:{NFSU2_TR(0x61e92e);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61e932:{NFSU2_TR(0x61e932);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61e937ull));
TAIL_STATIC(0x42faf0u,42f);
}
B61e937:L61e937:{c.instructions+=4;NFSU2_TR(0x61e937);
u8 U[4];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B61e93b:{NFSU2_TR(0x61e93b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61e93c:{NFSU2_TR(0x61e93c);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B61e944:{NFSU2_TR(0x61e944);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61e949ull));
TAIL_STATIC(0x440f70u,440);
}
B61e949:L61e949:{c.instructions+=6;NFSU2_TR(0x61e949);
{u32 ea_=u32(r4(R+24)+u32(20624u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B61e94f:{NFSU2_TR(0x61e94f);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B61e955:{NFSU2_TR(0x61e955);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B61e958:{NFSU2_TR(0x61e958);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B61e95a:{NFSU2_TR(0x61e95a);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B61e95d:{NFSU2_TR(0x61e95d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L61e995;}}
}
B61e95f:L61e95f:{c.instructions+=6;NFSU2_TR(0x61e95f);
u8 U[4];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B61e963:{NFSU2_TR(0x61e963);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61e964:{NFSU2_TR(0x61e964);
u8 U[4];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B61e968:{NFSU2_TR(0x61e968);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61e969:{NFSU2_TR(0x61e969);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5090ull))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B61e973:{NFSU2_TR(0x61e973);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61e978ull));
TAIL_STATIC(0x43cf10u,43c);
}
B61e978:L61e978:{c.instructions+=2;NFSU2_TR(0x61e978);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B61e97b:{NFSU2_TR(0x61e97b);
{goto L61e995;}
}
B61e97d:L61e97d:{c.instructions+=3;NFSU2_TR(0x61e97d);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B61e985:{NFSU2_TR(0x61e985);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B61e98d:{NFSU2_TR(0x61e98d);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B61e995:L61e995:{c.instructions+=4;NFSU2_TR(0x61e995);
__builtin_memmove((R+0),gp(0x8a1d38),4);
}
B61e99a:{NFSU2_TR(0x61e99a);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B61e99c:{NFSU2_TR(0x61e99c);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B61e99e:{NFSU2_TR(0x61e99e);
if(r1(R+518)){{goto L61e9a7;}}
}
B61e9a0:L61e9a0:{c.instructions+=2;NFSU2_TR(0x61e9a0);
__builtin_memmove((R+4),(R+24),4);
}
B61e9a2:{NFSU2_TR(0x61e9a2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61e9a7ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x61e3e0u);}goto L61e3e0;}
}
B61e9a7:L61e9a7:{c.instructions+=12;NFSU2_TR(0x61e9a7);
{u32 ea_=u32(r4(R+28)+u32(148u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61e9ad:{NFSU2_TR(0x61e9ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B61e9b3:{NFSU2_TR(0x61e9b3);
{u32 ea_=u32(r4(R+28)+u32(152u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61e9b9:{NFSU2_TR(0x61e9b9);
u8 U[4];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B61e9bd:{NFSU2_TR(0x61e9bd);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B61e9bf:{NFSU2_TR(0x61e9bf);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61e9c0:{NFSU2_TR(0x61e9c0);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61e9c4:{NFSU2_TR(0x61e9c4);
u8 U[4];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B61e9c8:{NFSU2_TR(0x61e9c8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61e9c9:{NFSU2_TR(0x61e9c9);
{u32 ea_=u32(r4(R+16)+u32(112u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61e9cd:{NFSU2_TR(0x61e9cd);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61e9d1:{NFSU2_TR(0x61e9d1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61e9d6ull));
TAIL_STATIC(0x43cf10u,43c);
}
B61e9d6:L61e9d6:{c.instructions+=8;NFSU2_TR(0x61e9d6);
{u32 ea_=u32(r4(R+16)+u32(112u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61e9da:{NFSU2_TR(0x61e9da);
{u32 ea_=u32(r4(R+16)+u32(108u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B61e9de:{NFSU2_TR(0x61e9de);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61e9e4:{NFSU2_TR(0x61e9e4);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B61e9e8:{NFSU2_TR(0x61e9e8);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61e9ec:{NFSU2_TR(0x61e9ec);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B61e9f0:{NFSU2_TR(0x61e9f0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61e9f1:{NFSU2_TR(0x61e9f1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61e9f6ull));
TAIL_STATIC(0x43c490u,43c);
}
B61e9f6:L61e9f6:{c.instructions+=8;NFSU2_TR(0x61e9f6);
{u32 ea_=u32(r4(R+16)+u32(112u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61e9fa:{NFSU2_TR(0x61e9fa);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B61ea00:{NFSU2_TR(0x61ea00);
w4(R+28,u32(0x4000ull));
}
B61ea05:{NFSU2_TR(0x61ea05);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B61ea08:{NFSU2_TR(0x61ea08);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+0))));
}
B61ea0a:{NFSU2_TR(0x61ea0a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B61ea0c:{NFSU2_TR(0x61ea0c);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B61ea0f:{NFSU2_TR(0x61ea0f);
if(r1(R+514)){{goto L61ea1a;}}
}
B61ea11:L61ea11:{c.instructions+=3;NFSU2_TR(0x61ea11);
w4(R+8,u32(0xfbb4ull));
}
B61ea16:{NFSU2_TR(0x61ea16);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+28))));
}
B61ea18:{NFSU2_TR(0x61ea18);
__builtin_memmove((R+28),(R+8),4);
}
B61ea1a:L61ea1a:{c.instructions+=4;NFSU2_TR(0x61ea1a);
u8 U[4];
w4(U+0,u32(u32(u32(0xe0ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B61ea21:{NFSU2_TR(0x61ea21);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61ea22:{NFSU2_TR(0x61ea22);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61ea23:{NFSU2_TR(0x61ea23);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61ea28ull));
TAIL_STATIC(0x5bac90u,5ba);
}
B61ea28:L61ea28:{c.instructions+=12;NFSU2_TR(0x61ea28);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B61ea2c:{NFSU2_TR(0x61ea2c);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61ea30:{NFSU2_TR(0x61ea30);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B61ea34:{NFSU2_TR(0x61ea34);
u8 U[8];
w4(U+0,u32(u32(u32(0x118ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61ea3b:{NFSU2_TR(0x61ea3b);
u8 U[4];
w4(U+0,u32(u32(u32(0xe8ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B61ea42:{NFSU2_TR(0x61ea42);
u8 U[8];
w4(U+0,u32(u32(u32(0x120ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61ea49:{NFSU2_TR(0x61ea49);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61ea4a:{NFSU2_TR(0x61ea4a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5010ull))));
__builtin_memmove((R+0),(U+0),4);
}
B61ea50:{NFSU2_TR(0x61ea50);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61ea51:{NFSU2_TR(0x61ea51);
u8 U[8];
w4(U+0,u32(u32(u32(0x124ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61ea58:{NFSU2_TR(0x61ea58);
u8 U[8];
w4(U+0,u32(u32(u32(0x12cull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B61ea63:{NFSU2_TR(0x61ea63);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61ea68ull));
TAIL_STATIC(0x4012b0u,401);
}
B61ea68:L61ea68:{c.instructions+=7;NFSU2_TR(0x61ea68);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4da0ull))));
__builtin_memmove((R+8),(U+0),4);
}
B61ea6e:{NFSU2_TR(0x61ea6e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61ea6f:{NFSU2_TR(0x61ea6f);
u8 U[4];
w4(U+0,u32(u32(u32(0x74ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B61ea73:{NFSU2_TR(0x61ea73);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61ea74:{NFSU2_TR(0x61ea74);
u8 U[4];
w4(U+0,u32(u32(u32(0xc8ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B61ea7b:{NFSU2_TR(0x61ea7b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61ea7c:{NFSU2_TR(0x61ea7c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61ea81ull));
TAIL_STATIC(0x43d1e0u,43d);
}
B61ea81:L61ea81:{c.instructions+=17;NFSU2_TR(0x61ea81);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B61ea87:{NFSU2_TR(0x61ea87);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61ea8a:{NFSU2_TR(0x61ea8a);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B61ea8c:{NFSU2_TR(0x61ea8c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B61ea8f:{NFSU2_TR(0x61ea8f);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B61ea92:{NFSU2_TR(0x61ea92);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+4),(U+0),1);
}
B61ea95:{NFSU2_TR(0x61ea95);
u8 U[10];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(u32(0x8a44f4ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
__builtin_memmove((R+0),(U+8),2);
}
B61ea9d:{NFSU2_TR(0x61ea9d);
w2(R+0,u16(u32(r2(R+0))-u32(r2(R+28))));
}
B61eaa0:{NFSU2_TR(0x61eaa0);
w4(R+0,u32(r2(R+0)));
}
B61eaa3:{NFSU2_TR(0x61eaa3);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61eaa7:{NFSU2_TR(0x61eaa7);
u8 U[10];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(u32(0x8a44f4ull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+28),2);
s2(u32(r4(U+4)),r2(U+8));
}
B61eaaf:{NFSU2_TR(0x61eaaf);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B61eab3:{NFSU2_TR(0x61eab3);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B61eab7:{NFSU2_TR(0x61eab7);
{u32 ea_=u32(u32(7895768u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B61eabd:{NFSU2_TR(0x61eabd);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B61eabf:{NFSU2_TR(0x61eabf);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B61eac2:{NFSU2_TR(0x61eac2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L61ead2;}}
}
B61eac4:L61eac4:{c.instructions+=3;NFSU2_TR(0x61eac4);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61eac8:{NFSU2_TR(0x61eac8);
{u32 ea_=u32(u32(7881272u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B61eace:{NFSU2_TR(0x61eace);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61ead2:L61ead2:{c.instructions+=5;NFSU2_TR(0x61ead2);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61ead6:{NFSU2_TR(0x61ead6);
{u32 ea_=u32(u32(8021964u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B61eadc:{NFSU2_TR(0x61eadc);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B61eade:{NFSU2_TR(0x61eade);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B61eae1:{NFSU2_TR(0x61eae1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L61eaed;}}
}
B61eae3:L61eae3:{c.instructions+=2;NFSU2_TR(0x61eae3);
__builtin_memmove((R+4),gp(0x7a67cc),4);
}
B61eae9:{NFSU2_TR(0x61eae9);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61eaed:L61eaed:{c.instructions+=7;NFSU2_TR(0x61eaed);
{u32 ea_=u32(u32(8021964u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61eaf3:{NFSU2_TR(0x61eaf3);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B61eaf5:{NFSU2_TR(0x61eaf5);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61eaf9:{NFSU2_TR(0x61eaf9);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B61eafb:{NFSU2_TR(0x61eafb);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B61eafd:{NFSU2_TR(0x61eafd);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B61eb00:{NFSU2_TR(0x61eb00);
if(r1(R+514)){{goto L61eb08;}}
}
B61eb02:L61eb02:{c.instructions+=2;NFSU2_TR(0x61eb02);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61eb06:{NFSU2_TR(0x61eb06);
{goto L61eb0a;}
}
B61eb08:L61eb08:{c.instructions+=1;NFSU2_TR(0x61eb08);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B61eb0a:L61eb0a:{c.instructions+=40;NFSU2_TR(0x61eb0a);
{u32 ea_=u32(u32(8403372u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61eb10:{NFSU2_TR(0x61eb10);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1fcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61eb16:{NFSU2_TR(0x61eb16);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61eb1c:{NFSU2_TR(0x61eb1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1f8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B61eb22:{NFSU2_TR(0x61eb22);
{u32 ea_=u32(u32(8403384u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B61eb28:{NFSU2_TR(0x61eb28);
{u32 ea_=u32(r4(R+24)+u32(20208u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61eb2e:{NFSU2_TR(0x61eb2e);
{u32 ea_=u32(u32(8403372u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61eb34:{NFSU2_TR(0x61eb34);
{u32 ea_=u32(u32(7895900u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61eb3a:{NFSU2_TR(0x61eb3a);
{u32 ea_=u32(u32(8403384u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B61eb40:{NFSU2_TR(0x61eb40);
{u32 ea_=u32(r4(R+24)+u32(20224u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61eb46:{NFSU2_TR(0x61eb46);
{u32 ea_=u32(u32(8403376u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61eb4c:{NFSU2_TR(0x61eb4c);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61eb52:{NFSU2_TR(0x61eb52);
{u32 ea_=u32(u32(9051452u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B61eb58:{NFSU2_TR(0x61eb58);
{u32 ea_=u32(r4(R+24)+u32(20212u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61eb5e:{NFSU2_TR(0x61eb5e);
{u32 ea_=u32(u32(8403376u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61eb64:{NFSU2_TR(0x61eb64);
{u32 ea_=u32(u32(7895900u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61eb6a:{NFSU2_TR(0x61eb6a);
{u32 ea_=u32(u32(9051452u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B61eb70:{NFSU2_TR(0x61eb70);
{u32 ea_=u32(r4(R+24)+u32(20228u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61eb76:{NFSU2_TR(0x61eb76);
{u32 ea_=u32(u32(8403380u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61eb7c:{NFSU2_TR(0x61eb7c);
{u32 ea_=u32(u32(9051456u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B61eb82:{NFSU2_TR(0x61eb82);
{u32 ea_=u32(r4(R+24)+u32(20216u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61eb88:{NFSU2_TR(0x61eb88);
__builtin_memmove((R+8),gp(0x8a1d40),4);
}
B61eb8e:{NFSU2_TR(0x61eb8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1f8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61eb94:{NFSU2_TR(0x61eb94);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4f08ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61eb9a:{NFSU2_TR(0x61eb9a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1fcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61eba0:{NFSU2_TR(0x61eba0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4d2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B61eba6:{NFSU2_TR(0x61eba6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4d30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61ebac:{NFSU2_TR(0x61ebac);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4d28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B61ebb2:{NFSU2_TR(0x61ebb2);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B61ebb4:{NFSU2_TR(0x61ebb4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4d24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B61ebba:{NFSU2_TR(0x61ebba);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
}
B61ebbc:{NFSU2_TR(0x61ebbc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4d20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B61ebc2:{NFSU2_TR(0x61ebc2);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B61ebc4:{NFSU2_TR(0x61ebc4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4d1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B61ebca:{NFSU2_TR(0x61ebca);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4d1cull))));
__builtin_memmove((R+4),(U+0),4);
}
B61ebd0:{NFSU2_TR(0x61ebd0);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
}
B61ebd2:{NFSU2_TR(0x61ebd2);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B61ebd4:{NFSU2_TR(0x61ebd4);
w4(R+8,u32(0x190ull));
}
B61ebd9:{NFSU2_TR(0x61ebd9);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+0))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B61ebdb:{NFSU2_TR(0x61ebdb);
if(r1(R+518)){{goto L61ebfa;}}
}
B61ebdd:L61ebdd:{c.instructions+=2;NFSU2_TR(0x61ebdd);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B61ebdf:{NFSU2_TR(0x61ebdf);
}
B61ebe0:L61ebe0:{c.instructions+=2;NFSU2_TR(0x61ebe0);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w1(R+512,u8((r4(U+4))<(r4(R+8))));
}
B61ebe2:{NFSU2_TR(0x61ebe2);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L61ebef;}}
}
B61ebe4:L61ebe4:{c.instructions+=4;NFSU2_TR(0x61ebe4);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B61ebe5:{NFSU2_TR(0x61ebe5);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B61ebe8:{NFSU2_TR(0x61ebe8);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x6ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B61ebeb:{NFSU2_TR(0x61ebeb);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x61ebe0u);}goto L61ebe0;}}
}
B61ebed:L61ebed:{c.instructions+=1;NFSU2_TR(0x61ebed);
{goto L61ec21;}
}
B61ebef:L61ebef:{c.instructions+=3;NFSU2_TR(0x61ebef);
u8 U[16];
w4(U+0,u32(u32(u32(0x4d1cull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B61ebf6:{NFSU2_TR(0x61ebf6);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+8))));
}
B61ebf8:{NFSU2_TR(0x61ebf8);
{goto L61ec1a;}
}
B61ebfa:L61ebfa:{c.instructions+=2;NFSU2_TR(0x61ebfa);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B61ebfc:{NFSU2_TR(0x61ebfc);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x190ull))));
__builtin_memmove((R+28),(U+0),4);
}
B61ec02:L61ec02:{c.instructions+=2;NFSU2_TR(0x61ec02);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w1(R+512,u8((r4(U+4))<(r4(R+28))));
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+28))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B61ec04:{NFSU2_TR(0x61ec04);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L61ec11;}}
}
B61ec06:L61ec06:{c.instructions+=4;NFSU2_TR(0x61ec06);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B61ec07:{NFSU2_TR(0x61ec07);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B61ec0a:{NFSU2_TR(0x61ec0a);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x6ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B61ec0d:{NFSU2_TR(0x61ec0d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x61ec02u);}goto L61ec02;}}
}
B61ec0f:L61ec0f:{c.instructions+=1;NFSU2_TR(0x61ec0f);
{goto L61ec21;}
}
B61ec11:L61ec11:{c.instructions+=2;NFSU2_TR(0x61ec11);
u8 U[16];
w4(U+0,u32(u32(u32(0x4d1cull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B61ec18:{NFSU2_TR(0x61ec18);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B61ec1a:L61ec1a:{c.instructions+=1;NFSU2_TR(0x61ec1a);
u8 U[16];
w4(U+0,u32(u32(u32(0x4d1cull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B61ec21:L61ec21:{c.instructions+=4;NFSU2_TR(0x61ec21);
w4(R+28,u32(0x1ull));
}
B61ec26:{NFSU2_TR(0x61ec26);
u8 U[8];
w4(U+0,u32(u32(u32(0x7cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61ec2a:{NFSU2_TR(0x61ec2a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B61ec2c:{NFSU2_TR(0x61ec2c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4d04ull))));
__builtin_memmove((R+4),(U+0),4);
}
B61ec32:L61ec32:{c.instructions+=3;NFSU2_TR(0x61ec32);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B61ec34:{NFSU2_TR(0x61ec34);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B61ec37:{NFSU2_TR(0x61ec37);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L61ec44;}}
}
B61ec39:L61ec39:{c.instructions+=4;NFSU2_TR(0x61ec39);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B61ec3a:{NFSU2_TR(0x61ec3a);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B61ec3d:{NFSU2_TR(0x61ec3d);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x6ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B61ec40:{NFSU2_TR(0x61ec40);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x61ec32u);}goto L61ec32;}}
}
B61ec42:L61ec42:{c.instructions+=1;NFSU2_TR(0x61ec42);
{goto L61ec48;}
}
B61ec44:L61ec44:{c.instructions+=1;NFSU2_TR(0x61ec44);
u8 U[8];
w4(U+0,u32(u32(u32(0x7cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61ec48:L61ec48:{c.instructions+=20;NFSU2_TR(0x61ec48);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61ec4c:{NFSU2_TR(0x61ec4c);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B61ec50:{NFSU2_TR(0x61ec50);
{u32 ea_=u32(u32(8021968u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61ec56:{NFSU2_TR(0x61ec56);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61ec5a:{NFSU2_TR(0x61ec5a);
u8 U[8];
w4(U+0,u32(u32(u32(0x84ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61ec61:{NFSU2_TR(0x61ec61);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61ec62:{NFSU2_TR(0x61ec62);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B61ec66:{NFSU2_TR(0x61ec66);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61ec68:{NFSU2_TR(0x61ec68);
u8 U[4];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B61ec6f:{NFSU2_TR(0x61ec6f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61ec70:{NFSU2_TR(0x61ec70);
{u32 ea_=u32(r4(R+16)+u32(148u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61ec77:{NFSU2_TR(0x61ec77);
w4(R+4,u32(0x88f298ull));
}
B61ec7c:{NFSU2_TR(0x61ec7c);
{u32 ea_=u32(r4(R+16)+u32(112u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61ec80:{NFSU2_TR(0x61ec80);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1e4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61ec86:{NFSU2_TR(0x61ec86);
{u32 ea_=u32(u32(8021968u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61ec8c:{NFSU2_TR(0x61ec8c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1e8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61ec92:{NFSU2_TR(0x61ec92);
u8 U[8];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61ec99:{NFSU2_TR(0x61ec99);
{u32 ea_=u32(r4(R+16)+u32(144u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B61eca0:{NFSU2_TR(0x61eca0);
{u32 ea_=u32(r4(R+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61eca7:{NFSU2_TR(0x61eca7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61ecacull));
TAIL_STATIC(0x5d9c70u,5d9);
}
B61ecac:L61ecac:{c.instructions+=3;NFSU2_TR(0x61ecac);
__builtin_memmove((R+4),(R+0),4);
}
B61ecae:{NFSU2_TR(0x61ecae);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B61ecb0:{NFSU2_TR(0x61ecb0);
if(r1(R+518)){{goto L61ecc6;}}
}
B61ecb2:L61ecb2:{c.instructions+=5;NFSU2_TR(0x61ecb2);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61ecb5:{NFSU2_TR(0x61ecb5);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B61ecb9:{NFSU2_TR(0x61ecb9);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B61ecbb:{NFSU2_TR(0x61ecbb);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B61ecbe:{NFSU2_TR(0x61ecbe);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L61ecc6;}}
}
B61ecc0:L61ecc0:{c.instructions+=1;NFSU2_TR(0x61ecc0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1e4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61ecc6:L61ecc6:{c.instructions+=6;NFSU2_TR(0x61ecc6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61ecc7:{NFSU2_TR(0x61ecc7);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61ecc9:{NFSU2_TR(0x61ecc9);
u8 U[4];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B61ecd0:{NFSU2_TR(0x61ecd0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61ecd1:{NFSU2_TR(0x61ecd1);
w4(R+4,u32(0x88f298ull));
}
B61ecd6:{NFSU2_TR(0x61ecd6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61ecdbull));
TAIL_STATIC(0x5d9c70u,5d9);
}
B61ecdb:L61ecdb:{c.instructions+=3;NFSU2_TR(0x61ecdb);
__builtin_memmove((R+4),(R+0),4);
}
B61ecdd:{NFSU2_TR(0x61ecdd);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B61ecdf:{NFSU2_TR(0x61ecdf);
if(r1(R+518)){{goto L61ecf5;}}
}
B61ece1:L61ece1:{c.instructions+=5;NFSU2_TR(0x61ece1);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61ece4:{NFSU2_TR(0x61ece4);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B61ece8:{NFSU2_TR(0x61ece8);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B61ecea:{NFSU2_TR(0x61ecea);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B61eced:{NFSU2_TR(0x61eced);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L61ecf5;}}
}
B61ecef:L61ecef:{c.instructions+=1;NFSU2_TR(0x61ecef);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1e4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61ecf5:L61ecf5:{c.instructions+=3;NFSU2_TR(0x61ecf5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B61ecfb:{NFSU2_TR(0x61ecfb);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B61ecfe:{NFSU2_TR(0x61ecfe);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L61ed0b;}}
}
B61ed00:L61ed00:{c.instructions+=2;NFSU2_TR(0x61ed00);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1e4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61ed06:{NFSU2_TR(0x61ed06);
__builtin_memmove(gp(0x8a1d4c),(R+0),4);
}
B61ed0b:L61ed0b:{c.instructions+=6;NFSU2_TR(0x61ed0b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61ed0c:{NFSU2_TR(0x61ed0c);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61ed0e:{NFSU2_TR(0x61ed0e);
u8 U[4];
w4(U+0,u32(u32(u32(0x90ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B61ed15:{NFSU2_TR(0x61ed15);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61ed16:{NFSU2_TR(0x61ed16);
w4(R+4,u32(0x88f298ull));
}
B61ed1b:{NFSU2_TR(0x61ed1b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61ed20ull));
TAIL_STATIC(0x5d9c70u,5d9);
}
B61ed20:L61ed20:{c.instructions+=3;NFSU2_TR(0x61ed20);
__builtin_memmove((R+4),(R+0),4);
}
B61ed22:{NFSU2_TR(0x61ed22);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B61ed24:{NFSU2_TR(0x61ed24);
if(r1(R+518)){{goto L61ed3a;}}
}
B61ed26:L61ed26:{c.instructions+=5;NFSU2_TR(0x61ed26);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61ed29:{NFSU2_TR(0x61ed29);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B61ed2d:{NFSU2_TR(0x61ed2d);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B61ed2f:{NFSU2_TR(0x61ed2f);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B61ed32:{NFSU2_TR(0x61ed32);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L61ed3a;}}
}
B61ed34:L61ed34:{c.instructions+=1;NFSU2_TR(0x61ed34);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1e8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61ed3a:L61ed3a:{c.instructions+=6;NFSU2_TR(0x61ed3a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61ed3b:{NFSU2_TR(0x61ed3b);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61ed3d:{NFSU2_TR(0x61ed3d);
u8 U[4];
w4(U+0,u32(u32(u32(0x90ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B61ed44:{NFSU2_TR(0x61ed44);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B61ed45:{NFSU2_TR(0x61ed45);
w4(R+4,u32(0x88f298ull));
}
B61ed4a:{NFSU2_TR(0x61ed4a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x61ed4full));
TAIL_STATIC(0x5d9c70u,5d9);
}
B61ed4f:L61ed4f:{c.instructions+=2;NFSU2_TR(0x61ed4f);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B61ed51:{NFSU2_TR(0x61ed51);
if(r1(R+518)){{goto L61ed67;}}
}
B61ed53:L61ed53:{c.instructions+=5;NFSU2_TR(0x61ed53);
{u32 ea_=u32(r4(R+0)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61ed56:{NFSU2_TR(0x61ed56);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B61ed5a:{NFSU2_TR(0x61ed5a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B61ed5c:{NFSU2_TR(0x61ed5c);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B61ed5f:{NFSU2_TR(0x61ed5f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L61ed67;}}
}
B61ed61:L61ed61:{c.instructions+=1;NFSU2_TR(0x61ed61);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1e8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61ed67:L61ed67:{c.instructions+=3;NFSU2_TR(0x61ed67);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4d00ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+12))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+12)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B61ed6d:{NFSU2_TR(0x61ed6d);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61ed71:{NFSU2_TR(0x61ed71);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){TAIL_STATIC(0x61f10du,61f);}
}
B61ed77:L61ed77:{c.instructions+=9;NFSU2_TR(0x61ed77);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B61ed79:{NFSU2_TR(0x61ed79);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61ed7d:{NFSU2_TR(0x61ed7d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x200ull))));
__builtin_memmove((R+28),(U+0),4);
}
B61ed83:{NFSU2_TR(0x61ed83);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x26ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B61ed87:{NFSU2_TR(0x61ed87);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x25ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+12,u32(r1(U+4)));
}
B61ed8b:{NFSU2_TR(0x61ed8b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61ed8f:{NFSU2_TR(0x61ed8f);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B61ed92:{NFSU2_TR(0x61ed92);
u8 U[1];
w1(R+512,u8(0x0ull));
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B61ed94:{NFSU2_TR(0x61ed94);
if(r1(R+518)){{goto L61ee4a;}}
}
B61ed9a:L61ed9a:{c.instructions+=1;NFSU2_TR(0x61ed9a);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x61f083u,61f);}
}
B61eda0:L61eda0:{c.instructions+=2;NFSU2_TR(0x61eda0);
u8 U[1];
w1(R+512,u8((r1(R+0))<(u8(0x2ull))));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x2ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B61eda2:{NFSU2_TR(0x61eda2);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){TAIL_STATIC(0x61f083u,61f);}
}
B61eda8:L61eda8:{c.instructions+=3;NFSU2_TR(0x61eda8);
u8 U[8];
w4(U+0,u32(u32(u32(0x7cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61edac:{NFSU2_TR(0x61edac);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B61edae:{NFSU2_TR(0x61edae);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L61ede2;}}
}
B61edb0:L61edb0:{c.instructions+=1;NFSU2_TR(0x61edb0);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B61edb2:L61edb2:{c.instructions+=2;NFSU2_TR(0x61edb2);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B61edb4:{NFSU2_TR(0x61edb4);
if(r1(R+518)){{goto L61eddc;}}
}
B61edb6:L61edb6:{c.instructions+=3;NFSU2_TR(0x61edb6);
u8 U[16];
w4(U+0,u32(u32(u32(0x4d04ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B61edbd:{NFSU2_TR(0x61edbd);
u8 U[20];
w4(U+0,u32(u32(u32(0x4d1cull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w1(R+512,u8((r4(R+4))<(r4(U+16))));
}
B61edc4:{NFSU2_TR(0x61edc4);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L61eddc;}}
}
B61edc6:L61edc6:{c.instructions+=4;NFSU2_TR(0x61edc6);
u8 U[16];
w4(U+0,u32(u32(u32(0x4d04ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
w4(U+12,u32(u32(r4(U+12))-u32(u32(0x1ull))));
s4(u32(r4(U+8)),r4(U+12));
}
B61edcd:{NFSU2_TR(0x61edcd);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x25ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B61edd0:{NFSU2_TR(0x61edd0);
u8 U[16];
w4(U+0,u32(u32(u32(0x4d04ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
w4(U+12,u32(u32(r4(U+12))+u32(u32(0x1ull))));
s4(u32(r4(U+8)),r4(U+12));
}
B61edd7:{NFSU2_TR(0x61edd7);
w4(R+0,u32(0x6ull));
}
B61eddc:L61eddc:{c.instructions+=3;NFSU2_TR(0x61eddc);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B61eddd:{NFSU2_TR(0x61eddd);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x6ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B61ede0:{NFSU2_TR(0x61ede0);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x61edb2u);}goto L61edb2;}}
}
B61ede2:L61ede2:{c.instructions+=3;NFSU2_TR(0x61ede2);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x25ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B61ede5:{NFSU2_TR(0x61ede5);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x5ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B61ede7:{NFSU2_TR(0x61ede7);
if(r1(R+518)){TAIL_STATIC(0x61f083u,61f);}
}
B61eded:L61eded:{c.instructions+=2;NFSU2_TR(0x61eded);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x4ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B61edef:{NFSU2_TR(0x61edef);
if(r1(R+518)){TAIL_STATIC(0x61f083u,61f);}
}
B61edf5:L61edf5:{c.instructions+=3;NFSU2_TR(0x61edf5);
u8 U[7];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B61edf9:{NFSU2_TR(0x61edf9);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x27ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B61edfd:{NFSU2_TR(0x61edfd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L61ee41;}}
}
B61edff:L61edff:{c.instructions+=18;NFSU2_TR(0x61edff);
{u32 ea_=u32(u32(8403380u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61ee05:{NFSU2_TR(0x61ee05);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1f8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61ee0b:{NFSU2_TR(0x61ee0b);
{u32 ea_=u32(u32(9051456u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B61ee11:{NFSU2_TR(0x61ee11);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B61ee14:{NFSU2_TR(0x61ee14);
{u32 ea_=u32(r4(R+28)+r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61ee18:{NFSU2_TR(0x61ee18);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1f8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61ee1e:{NFSU2_TR(0x61ee1e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1fcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B61ee24:{NFSU2_TR(0x61ee24);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B61ee27:{NFSU2_TR(0x61ee27);
{u32 ea_=u32(r4(R+28)+r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61ee2b:{NFSU2_TR(0x61ee2b);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
}
B61ee2d:{NFSU2_TR(0x61ee2d);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61ee30:{NFSU2_TR(0x61ee30);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B61ee32:{NFSU2_TR(0x61ee32);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B61ee35:{NFSU2_TR(0x61ee35);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B61ee37:{NFSU2_TR(0x61ee37);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+28))));
}
B61ee39:{NFSU2_TR(0x61ee39);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61ee3c:{NFSU2_TR(0x61ee3c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B61ee3e:{NFSU2_TR(0x61ee3e);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61ee41:L61ee41:{c.instructions+=2;NFSU2_TR(0x61ee41);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B61ee45:{NFSU2_TR(0x61ee45);
TAIL_STATIC(0x61f083u,61f);
}
B61ee4a:L61ee4a:{c.instructions+=72;NFSU2_TR(0x61ee4a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1f8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B61ee50:{NFSU2_TR(0x61ee50);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61ee54:{NFSU2_TR(0x61ee54);
{u32 ea_=u32(u32(8021960u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61ee5a:{NFSU2_TR(0x61ee5a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1fcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61ee60:{NFSU2_TR(0x61ee60);
u8 U[12];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B61ee64:{NFSU2_TR(0x61ee64);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B61ee67:{NFSU2_TR(0x61ee67);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B61ee69:{NFSU2_TR(0x61ee69);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+24))));
}
B61ee6b:{NFSU2_TR(0x61ee6b);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61ee6d:{NFSU2_TR(0x61ee6d);
u8 U[12];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B61ee71:{NFSU2_TR(0x61ee71);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61ee75:{NFSU2_TR(0x61ee75);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B61ee78:{NFSU2_TR(0x61ee78);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B61ee7b:{NFSU2_TR(0x61ee7b);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+24))));
}
B61ee7d:{NFSU2_TR(0x61ee7d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B61ee80:{NFSU2_TR(0x61ee80);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61ee83:{NFSU2_TR(0x61ee83);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61ee85:{NFSU2_TR(0x61ee85);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B61ee88:{NFSU2_TR(0x61ee88);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B61ee8b:{NFSU2_TR(0x61ee8b);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+24)+u32(19788u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61ee92:{NFSU2_TR(0x61ee92);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61ee95:{NFSU2_TR(0x61ee95);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B61ee99:{NFSU2_TR(0x61ee99);
{u32 ea_=u32(r4(R+24)+u32(20144u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61ee9f:{NFSU2_TR(0x61ee9f);
{u32 ea_=u32(r4(R+24)+u32(20148u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61eea5:{NFSU2_TR(0x61eea5);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61eea9:{NFSU2_TR(0x61eea9);
{u32 ea_=u32(r4(R+24)+u32(20152u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61eeaf:{NFSU2_TR(0x61eeaf);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B61eeb3:{NFSU2_TR(0x61eeb3);
{u32 ea_=u32(r4(R+16)+u32(216u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61eeba:{NFSU2_TR(0x61eeba);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B61eebc:{NFSU2_TR(0x61eebc);
{u32 ea_=u32(r4(R+16)+u32(192u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61eec3:{NFSU2_TR(0x61eec3);
{u32 ea_=u32(r4(R+16)+u32(216u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61eeca:{NFSU2_TR(0x61eeca);
{u32 ea_=u32(r4(R+16)+u32(192u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61eed1:{NFSU2_TR(0x61eed1);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B61eed3:{NFSU2_TR(0x61eed3);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61eed7:{NFSU2_TR(0x61eed7);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61eeda:{NFSU2_TR(0x61eeda);
__asm__ volatile(".byte 0xd8,0xc2":::"memory");
}
B61eedc:{NFSU2_TR(0x61eedc);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61eee0:{NFSU2_TR(0x61eee0);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61eee3:{NFSU2_TR(0x61eee3);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B61eee5:{NFSU2_TR(0x61eee5);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61eee9:{NFSU2_TR(0x61eee9);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B61eeeb:{NFSU2_TR(0x61eeeb);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B61eeed:{NFSU2_TR(0x61eeed);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61eef1:{NFSU2_TR(0x61eef1);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61eef5:{NFSU2_TR(0x61eef5);
{u32 ea_=u32(r4(R+16)+u32(164u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61eefc:{NFSU2_TR(0x61eefc);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61ef00:{NFSU2_TR(0x61ef00);
{u32 ea_=u32(r4(R+16)+u32(168u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61ef07:{NFSU2_TR(0x61ef07);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B61ef09:{NFSU2_TR(0x61ef09);
{u32 ea_=u32(r4(R+16)+u32(144u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61ef10:{NFSU2_TR(0x61ef10);
{u32 ea_=u32(r4(R+16)+u32(164u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B61ef17:{NFSU2_TR(0x61ef17);
{u32 ea_=u32(r4(R+16)+u32(148u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61ef1e:{NFSU2_TR(0x61ef1e);
{u32 ea_=u32(r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61ef21:{NFSU2_TR(0x61ef21);
{u32 ea_=u32(r4(R+16)+u32(168u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B61ef28:{NFSU2_TR(0x61ef28);
{u32 ea_=u32(r4(R+16)+u32(144u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61ef2f:{NFSU2_TR(0x61ef2f);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B61ef33:{NFSU2_TR(0x61ef33);
{u32 ea_=u32(r4(R+16)+u32(148u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61ef3a:{NFSU2_TR(0x61ef3a);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B61ef3e:{NFSU2_TR(0x61ef3e);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B61ef40:{NFSU2_TR(0x61ef40);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B61ef44:{NFSU2_TR(0x61ef44);
{u32 ea_=u32(r4(R+16)+u32(184u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61ef4b:{NFSU2_TR(0x61ef4b);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61ef4f:{NFSU2_TR(0x61ef4f);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61ef53:{NFSU2_TR(0x61ef53);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61ef57:{NFSU2_TR(0x61ef57);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B61ef59:{NFSU2_TR(0x61ef59);
{u32 ea_=u32(r4(R+16)+u32(184u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61ef60:{NFSU2_TR(0x61ef60);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B61ef64:{NFSU2_TR(0x61ef64);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B61ef67:{NFSU2_TR(0x61ef67);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B61ef6a:{NFSU2_TR(0x61ef6a);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B61ef70:{NFSU2_TR(0x61ef70);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B61ef72:{NFSU2_TR(0x61ef72);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B61ef75:{NFSU2_TR(0x61ef75);
if(r1(R+514)){{goto L61ef80;}}
}
B61ef77:L61ef77:{c.instructions+=2;NFSU2_TR(0x61ef77);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B61ef7b:{NFSU2_TR(0x61ef7b);
TAIL_STATIC(0x61f01du,61f);
}
B61ef80:L61ef80:{c.instructions+=6;NFSU2_TR(0x61ef80);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61ef84:{NFSU2_TR(0x61ef84);
{u32 ea_=u32(r4(R+24)+u32(20208u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B61ef8a:{NFSU2_TR(0x61ef8a);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61ef8e:{NFSU2_TR(0x61ef8e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B61ef90:{NFSU2_TR(0x61ef90);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B61ef93:{NFSU2_TR(0x61ef93);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L61efa9;}}
}
B61ef95:L61ef95:{c.instructions+=6;NFSU2_TR(0x61ef95);
{u32 ea_=u32(u32(8403372u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B61ef9b:{NFSU2_TR(0x61ef9b);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61ef9d:{NFSU2_TR(0x61ef9d);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61ef9f:{NFSU2_TR(0x61ef9f);
{u32 ea_=u32(u32(8403372u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B61efa5:{NFSU2_TR(0x61efa5);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61efa7:{NFSU2_TR(0x61efa7);
TAIL_STATIC(0x61f01du,61f);
}
B61efa9:L61efa9:{c.instructions+=4;NFSU2_TR(0x61efa9);
{u32 ea_=u32(r4(R+24)+u32(20224u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B61efaf:{NFSU2_TR(0x61efaf);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B61efb1:{NFSU2_TR(0x61efb1);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B61efb4:{NFSU2_TR(0x61efb4);
if(r1(R+514)){{goto L61efce;}}
}
B61efb6:L61efb6:{c.instructions+=7;NFSU2_TR(0x61efb6);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61efba:{NFSU2_TR(0x61efba);
{u32 ea_=u32(u32(8403372u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B61efc0:{NFSU2_TR(0x61efc0);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61efc2:{NFSU2_TR(0x61efc2);
{u32 ea_=u32(u32(8403372u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61efc8:{NFSU2_TR(0x61efc8);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B61efca:{NFSU2_TR(0x61efca);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61efcc:{NFSU2_TR(0x61efcc);
TAIL_STATIC(0x61f01du,61f);
}
B61efce:L61efce:{c.instructions+=6;NFSU2_TR(0x61efce);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61efd2:{NFSU2_TR(0x61efd2);
{u32 ea_=u32(r4(R+24)+u32(20212u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B61efd8:{NFSU2_TR(0x61efd8);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61efdc:{NFSU2_TR(0x61efdc);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B61efde:{NFSU2_TR(0x61efde);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B61efe1:{NFSU2_TR(0x61efe1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L61eff7;}}
}
B61efe3:L61efe3:{c.instructions+=5;NFSU2_TR(0x61efe3);
{u32 ea_=u32(u32(8403376u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B61efe9:{NFSU2_TR(0x61efe9);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B61efec:{NFSU2_TR(0x61efec);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B61efef:{NFSU2_TR(0x61efef);
{u32 ea_=u32(u32(8403376u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B61eff5:{NFSU2_TR(0x61eff5);
TAIL_STATIC(0x61f01au,61f);
}
B61eff7:L61eff7:{c.instructions+=3;NFSU2_TR(0x61eff7);
{u32 ea_=u32(r4(R+24)+u32(20228u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B61effd:{NFSU2_TR(0x61effd);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B61efff:{NFSU2_TR(0x61efff);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
TAIL_STATIC(0x61f002u,61f);
}
XIT:NFSU2_TR_EXIT(0x61e,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
