#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_43f(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_490(u8* __restrict R,Cpu& c);
u32 body_4cb(u8* __restrict R,Cpu& c);
u32 body_4fd(u8* __restrict R,Cpu& c);
u32 body_504(u8* __restrict R,Cpu& c);
u32 body_505(u8* __restrict R,Cpu& c);
u32 body_50b(u8* __restrict R,Cpu& c);
u32 body_50d(u8* __restrict R,Cpu& c);
u32 body_571(u8* __restrict R,Cpu& c);
u32 body_57c(u8* __restrict R,Cpu& c);
u32 body_57d(u8* __restrict R,Cpu& c);
u32 body_6f4(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_75d(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x50c,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x50c,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_50c(u8* __restrict R,Cpu& c);
u32 page_50c(Cpu& c){return body_50c(c.regs.data(),c);}
__attribute__((noinline)) u32 body_50c(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x50c000:goto L50c000;
case 0x50c004:c.instructions+=4;goto B50c004;
case 0x50c006:c.instructions+=3;goto B50c006;
case 0x50c007:c.instructions+=2;goto B50c007;
case 0x50c008:c.instructions+=1;goto B50c008;
case 0x50c00a:goto L50c00a;
case 0x50c00e:c.instructions+=2;goto B50c00e;
case 0x50c011:c.instructions+=1;goto B50c011;
case 0x50c015:goto L50c015;
case 0x50c019:c.instructions+=4;goto B50c019;
case 0x50c01a:c.instructions+=3;goto B50c01a;
case 0x50c01b:c.instructions+=2;goto B50c01b;
case 0x50c01c:c.instructions+=1;goto B50c01c;
case 0x50c020:goto L50c020;
case 0x50c024:c.instructions+=2;goto B50c024;
case 0x50c026:c.instructions+=1;goto B50c026;
case 0x50c028:goto L50c028;
case 0x50c02c:c.instructions+=2;goto B50c02c;
case 0x50c032:c.instructions+=1;goto B50c032;
case 0x50c035:goto L50c035;
case 0x50c037:c.instructions+=1;goto B50c037;
case 0x50c039:goto L50c039;
case 0x50c03d:c.instructions+=2;goto B50c03d;
case 0x50c03f:c.instructions+=1;goto B50c03f;
case 0x50c042:goto L50c042;
case 0x50c048:c.instructions+=1;goto B50c048;
case 0x50c050:goto L50c050;
case 0x50c054:c.instructions+=2;goto B50c054;
case 0x50c056:c.instructions+=1;goto B50c056;
case 0x50c058:goto L50c058;
case 0x50c05c:c.instructions+=2;goto B50c05c;
case 0x50c062:c.instructions+=1;goto B50c062;
case 0x50c065:goto L50c065;
case 0x50c067:c.instructions+=1;goto B50c067;
case 0x50c069:goto L50c069;
case 0x50c06d:c.instructions+=2;goto B50c06d;
case 0x50c06f:c.instructions+=1;goto B50c06f;
case 0x50c072:goto L50c072;
case 0x50c078:c.instructions+=1;goto B50c078;
case 0x50c080:goto L50c080;
case 0x50c083:c.instructions+=5;goto B50c083;
case 0x50c084:c.instructions+=4;goto B50c084;
case 0x50c088:c.instructions+=3;goto B50c088;
case 0x50c08a:c.instructions+=2;goto B50c08a;
case 0x50c08e:c.instructions+=1;goto B50c08e;
case 0x50c090:goto L50c090;
case 0x50c092:c.instructions+=3;goto B50c092;
case 0x50c093:c.instructions+=2;goto B50c093;
case 0x50c096:c.instructions+=1;goto B50c096;
case 0x50c099:goto L50c099;
case 0x50c09e:c.instructions+=1;goto B50c09e;
case 0x50c0a0:goto L50c0a0;
case 0x50c0a5:c.instructions+=3;goto B50c0a5;
case 0x50c0a6:c.instructions+=2;goto B50c0a6;
case 0x50c0a9:c.instructions+=1;goto B50c0a9;
case 0x50c0ac:goto L50c0ac;
case 0x50c0ad:c.instructions+=11;goto B50c0ad;
case 0x50c0ae:c.instructions+=10;goto B50c0ae;
case 0x50c0af:c.instructions+=9;goto B50c0af;
case 0x50c0b1:c.instructions+=8;goto B50c0b1;
case 0x50c0b4:c.instructions+=7;goto B50c0b4;
case 0x50c0b6:c.instructions+=6;goto B50c0b6;
case 0x50c0b8:c.instructions+=5;goto B50c0b8;
case 0x50c0bb:c.instructions+=4;goto B50c0bb;
case 0x50c0c3:c.instructions+=3;goto B50c0c3;
case 0x50c0cb:c.instructions+=2;goto B50c0cb;
case 0x50c0d3:c.instructions+=1;goto B50c0d3;
case 0x50c0d9:goto L50c0d9;
case 0x50c0e0:goto L50c0e0;
case 0x50c0e4:c.instructions+=1;goto B50c0e4;
case 0x50c0e6:goto L50c0e6;
case 0x50c0ea:c.instructions+=1;goto B50c0ea;
case 0x50c0ec:goto L50c0ec;
case 0x50c0ee:c.instructions+=1;goto B50c0ee;
case 0x50c0f0:goto L50c0f0;
case 0x50c0f4:c.instructions+=7;goto B50c0f4;
case 0x50c0f5:c.instructions+=6;goto B50c0f5;
case 0x50c0f7:c.instructions+=5;goto B50c0f7;
case 0x50c0f9:c.instructions+=4;goto B50c0f9;
case 0x50c0fd:c.instructions+=3;goto B50c0fd;
case 0x50c105:c.instructions+=2;goto B50c105;
case 0x50c108:c.instructions+=1;goto B50c108;
case 0x50c10d:goto L50c10d;
case 0x50c111:c.instructions+=1;goto B50c111;
case 0x50c113:goto L50c113;
case 0x50c116:c.instructions+=1;goto B50c116;
case 0x50c11b:goto L50c11b;
case 0x50c11d:c.instructions+=1;goto B50c11d;
case 0x50c11f:goto L50c11f;
case 0x50c127:c.instructions+=1;goto B50c127;
case 0x50c129:goto L50c129;
case 0x50c12d:c.instructions+=1;goto B50c12d;
case 0x50c12f:goto L50c12f;
case 0x50c131:goto L50c131;
case 0x50c135:c.instructions+=3;goto B50c135;
case 0x50c136:c.instructions+=2;goto B50c136;
case 0x50c137:c.instructions+=1;goto B50c137;
case 0x50c13c:goto L50c13c;
case 0x50c13f:c.instructions+=2;goto B50c13f;
case 0x50c141:c.instructions+=1;goto B50c141;
case 0x50c143:goto L50c143;
case 0x50c147:c.instructions+=3;goto B50c147;
case 0x50c148:c.instructions+=2;goto B50c148;
case 0x50c149:c.instructions+=1;goto B50c149;
case 0x50c14e:goto L50c14e;
case 0x50c151:c.instructions+=3;goto B50c151;
case 0x50c153:c.instructions+=2;goto B50c153;
case 0x50c155:c.instructions+=1;goto B50c155;
case 0x50c157:goto L50c157;
case 0x50c15c:c.instructions+=1;goto B50c15c;
case 0x50c15e:goto L50c15e;
case 0x50c164:goto L50c164;
case 0x50c169:c.instructions+=1;goto B50c169;
case 0x50c16b:goto L50c16b;
case 0x50c170:c.instructions+=1;goto B50c170;
case 0x50c172:goto L50c172;
case 0x50c177:c.instructions+=1;goto B50c177;
case 0x50c179:goto L50c179;
case 0x50c17e:goto L50c17e;
case 0x50c182:c.instructions+=3;goto B50c182;
case 0x50c185:c.instructions+=2;goto B50c185;
case 0x50c186:c.instructions+=1;goto B50c186;
case 0x50c18b:goto L50c18b;
case 0x50c18d:c.instructions+=2;goto B50c18d;
case 0x50c18f:c.instructions+=1;goto B50c18f;
case 0x50c191:goto L50c191;
case 0x50c195:c.instructions+=2;goto B50c195;
case 0x50c197:c.instructions+=1;goto B50c197;
case 0x50c199:goto L50c199;
case 0x50c19d:c.instructions+=6;goto B50c19d;
case 0x50c1a0:c.instructions+=5;goto B50c1a0;
case 0x50c1a2:c.instructions+=4;goto B50c1a2;
case 0x50c1a6:c.instructions+=3;goto B50c1a6;
case 0x50c1a7:c.instructions+=2;goto B50c1a7;
case 0x50c1a8:c.instructions+=1;goto B50c1a8;
case 0x50c1ad:goto L50c1ad;
case 0x50c1b1:c.instructions+=3;goto B50c1b1;
case 0x50c1b5:c.instructions+=2;goto B50c1b5;
case 0x50c1b9:c.instructions+=1;goto B50c1b9;
case 0x50c1bb:goto L50c1bb;
case 0x50c1bf:goto L50c1bf;
case 0x50c1c3:c.instructions+=5;goto B50c1c3;
case 0x50c1c7:c.instructions+=4;goto B50c1c7;
case 0x50c1cb:c.instructions+=3;goto B50c1cb;
case 0x50c1cd:c.instructions+=2;goto B50c1cd;
case 0x50c1d1:c.instructions+=1;goto B50c1d1;
case 0x50c1d3:goto L50c1d3;
case 0x50c1d6:goto L50c1d6;
case 0x50c1da:c.instructions+=2;goto B50c1da;
case 0x50c1dc:c.instructions+=1;goto B50c1dc;
case 0x50c1de:goto L50c1de;
case 0x50c1e2:c.instructions+=1;goto B50c1e2;
case 0x50c1e4:goto L50c1e4;
case 0x50c1e6:c.instructions+=3;goto B50c1e6;
case 0x50c1ea:c.instructions+=2;goto B50c1ea;
case 0x50c1ee:c.instructions+=1;goto B50c1ee;
case 0x50c1f0:goto L50c1f0;
case 0x50c1f6:goto L50c1f6;
case 0x50c1fa:c.instructions+=3;goto B50c1fa;
case 0x50c1fc:c.instructions+=2;goto B50c1fc;
case 0x50c1ff:c.instructions+=1;goto B50c1ff;
case 0x50c201:goto L50c201;
case 0x50c203:c.instructions+=1;goto B50c203;
case 0x50c205:goto L50c205;
case 0x50c209:c.instructions+=6;goto B50c209;
case 0x50c20a:c.instructions+=5;goto B50c20a;
case 0x50c20f:c.instructions+=4;goto B50c20f;
case 0x50c213:c.instructions+=3;goto B50c213;
case 0x50c21b:c.instructions+=2;goto B50c21b;
case 0x50c21d:c.instructions+=1;goto B50c21d;
case 0x50c21f:goto L50c21f;
case 0x50c220:goto L50c220;
case 0x50c223:c.instructions+=2;goto B50c223;
case 0x50c227:c.instructions+=1;goto B50c227;
case 0x50c229:goto L50c229;
case 0x50c22b:goto L50c22b;
case 0x50c22d:goto L50c22d;
case 0x50c231:c.instructions+=5;goto B50c231;
case 0x50c234:c.instructions+=4;goto B50c234;
case 0x50c235:c.instructions+=3;goto B50c235;
case 0x50c238:c.instructions+=2;goto B50c238;
case 0x50c23c:c.instructions+=1;goto B50c23c;
case 0x50c242:goto L50c242;
case 0x50c246:c.instructions+=6;goto B50c246;
case 0x50c247:c.instructions+=5;goto B50c247;
case 0x50c248:c.instructions+=4;goto B50c248;
case 0x50c249:c.instructions+=3;goto B50c249;
case 0x50c24a:c.instructions+=2;goto B50c24a;
case 0x50c24d:c.instructions+=1;goto B50c24d;
case 0x50c250:goto L50c250;
case 0x50c251:c.instructions+=7;goto B50c251;
case 0x50c252:c.instructions+=6;goto B50c252;
case 0x50c256:c.instructions+=5;goto B50c256;
case 0x50c258:c.instructions+=4;goto B50c258;
case 0x50c25a:c.instructions+=3;goto B50c25a;
case 0x50c25c:c.instructions+=2;goto B50c25c;
case 0x50c25e:c.instructions+=1;goto B50c25e;
case 0x50c260:goto L50c260;
case 0x50c264:c.instructions+=3;goto B50c264;
case 0x50c265:c.instructions+=2;goto B50c265;
case 0x50c268:c.instructions+=1;goto B50c268;
case 0x50c26a:goto L50c26a;
case 0x50c26d:c.instructions+=1;goto B50c26d;
case 0x50c26f:goto L50c26f;
case 0x50c271:goto L50c271;
case 0x50c275:c.instructions+=1;goto B50c275;
case 0x50c277:goto L50c277;
case 0x50c279:c.instructions+=2;goto B50c279;
case 0x50c27b:c.instructions+=1;goto B50c27b;
case 0x50c27d:goto L50c27d;
case 0x50c280:goto L50c280;
case 0x50c284:c.instructions+=1;goto B50c284;
case 0x50c286:goto L50c286;
case 0x50c287:c.instructions+=1;goto B50c287;
case 0x50c289:goto L50c289;
case 0x50c28b:goto L50c28b;
case 0x50c28d:goto L50c28d;
case 0x50c291:c.instructions+=3;goto B50c291;
case 0x50c293:c.instructions+=2;goto B50c293;
case 0x50c295:c.instructions+=1;goto B50c295;
case 0x50c297:goto L50c297;
case 0x50c298:c.instructions+=5;goto B50c298;
case 0x50c299:c.instructions+=4;goto B50c299;
case 0x50c29b:c.instructions+=3;goto B50c29b;
case 0x50c29d:c.instructions+=2;goto B50c29d;
case 0x50c29f:c.instructions+=1;goto B50c29f;
case 0x50c2a1:goto L50c2a1;
case 0x50c2a4:c.instructions+=4;goto B50c2a4;
case 0x50c2a7:c.instructions+=3;goto B50c2a7;
case 0x50c2a8:c.instructions+=2;goto B50c2a8;
case 0x50c2aa:c.instructions+=1;goto B50c2aa;
case 0x50c2ac:goto L50c2ac;
case 0x50c2b0:c.instructions+=5;goto B50c2b0;
case 0x50c2b1:c.instructions+=4;goto B50c2b1;
case 0x50c2b2:c.instructions+=3;goto B50c2b2;
case 0x50c2b3:c.instructions+=2;goto B50c2b3;
case 0x50c2b4:c.instructions+=1;goto B50c2b4;
case 0x50c2b5:goto L50c2b5;
case 0x50c2b6:c.instructions+=3;goto B50c2b6;
case 0x50c2ba:c.instructions+=2;goto B50c2ba;
case 0x50c2bb:c.instructions+=1;goto B50c2bb;
case 0x50c2c0:goto L50c2c0;
case 0x50c2c1:c.instructions+=5;goto B50c2c1;
case 0x50c2c5:c.instructions+=4;goto B50c2c5;
case 0x50c2c7:c.instructions+=3;goto B50c2c7;
case 0x50c2c8:c.instructions+=2;goto B50c2c8;
case 0x50c2ca:c.instructions+=1;goto B50c2ca;
case 0x50c2cc:goto L50c2cc;
case 0x50c2cd:c.instructions+=1;goto B50c2cd;
case 0x50c2d1:goto L50c2d1;
case 0x50c2d5:c.instructions+=5;goto B50c2d5;
case 0x50c2d7:c.instructions+=4;goto B50c2d7;
case 0x50c2d8:c.instructions+=3;goto B50c2d8;
case 0x50c2d9:c.instructions+=2;goto B50c2d9;
case 0x50c2db:c.instructions+=1;goto B50c2db;
case 0x50c2de:goto L50c2de;
case 0x50c2e0:c.instructions+=1;goto B50c2e0;
case 0x50c2e2:goto L50c2e2;
case 0x50c2e3:goto L50c2e3;
case 0x50c2e4:c.instructions+=2;goto B50c2e4;
case 0x50c2e5:c.instructions+=1;goto B50c2e5;
case 0x50c2f0:goto L50c2f0;
case 0x50c300:goto L50c300;
case 0x50c304:c.instructions+=5;goto B50c304;
case 0x50c30a:c.instructions+=4;goto B50c30a;
case 0x50c30b:c.instructions+=3;goto B50c30b;
case 0x50c30d:c.instructions+=2;goto B50c30d;
case 0x50c30f:c.instructions+=1;goto B50c30f;
case 0x50c311:goto L50c311;
case 0x50c312:c.instructions+=5;goto B50c312;
case 0x50c313:c.instructions+=4;goto B50c313;
case 0x50c31a:c.instructions+=3;goto B50c31a;
case 0x50c31b:c.instructions+=2;goto B50c31b;
case 0x50c31e:c.instructions+=1;goto B50c31e;
case 0x50c320:goto L50c320;
case 0x50c323:c.instructions+=4;goto B50c323;
case 0x50c324:c.instructions+=3;goto B50c324;
case 0x50c328:c.instructions+=2;goto B50c328;
case 0x50c329:c.instructions+=1;goto B50c329;
case 0x50c32e:goto L50c32e;
case 0x50c332:c.instructions+=2;goto B50c332;
case 0x50c333:c.instructions+=1;goto B50c333;
case 0x50c338:goto L50c338;
case 0x50c33b:c.instructions+=3;goto B50c33b;
case 0x50c33e:c.instructions+=2;goto B50c33e;
case 0x50c33f:c.instructions+=1;goto B50c33f;
case 0x50c341:goto L50c341;
case 0x50c342:c.instructions+=1;goto B50c342;
case 0x50c344:goto L50c344;
case 0x50c347:c.instructions+=1;goto B50c347;
case 0x50c349:goto L50c349;
case 0x50c34a:c.instructions+=2;goto B50c34a;
case 0x50c34f:c.instructions+=1;goto B50c34f;
case 0x50c354:goto L50c354;
case 0x50c359:c.instructions+=5;goto B50c359;
case 0x50c35d:c.instructions+=4;goto B50c35d;
case 0x50c35f:c.instructions+=3;goto B50c35f;
case 0x50c360:c.instructions+=2;goto B50c360;
case 0x50c361:c.instructions+=1;goto B50c361;
case 0x50c366:goto L50c366;
case 0x50c369:c.instructions+=2;goto B50c369;
case 0x50c36b:c.instructions+=1;goto B50c36b;
case 0x50c36d:goto L50c36d;
case 0x50c371:c.instructions+=2;goto B50c371;
case 0x50c372:c.instructions+=1;goto B50c372;
case 0x50c374:goto L50c374;
case 0x50c378:c.instructions+=1;goto B50c378;
case 0x50c379:goto L50c379;
case 0x50c37e:goto L50c37e;
case 0x50c381:c.instructions+=1;goto B50c381;
case 0x50c383:goto L50c383;
case 0x50c386:c.instructions+=3;goto B50c386;
case 0x50c389:c.instructions+=2;goto B50c389;
case 0x50c38a:c.instructions+=1;goto B50c38a;
case 0x50c38c:goto L50c38c;
case 0x50c38d:c.instructions+=2;goto B50c38d;
case 0x50c38e:c.instructions+=1;goto B50c38e;
case 0x50c38f:goto L50c38f;
case 0x50c391:c.instructions+=3;goto B50c391;
case 0x50c392:c.instructions+=2;goto B50c392;
case 0x50c398:c.instructions+=1;goto B50c398;
case 0x50c3a0:goto L50c3a0;
case 0x50c3a1:c.instructions+=3;goto B50c3a1;
case 0x50c3a5:c.instructions+=2;goto B50c3a5;
case 0x50c3a7:c.instructions+=1;goto B50c3a7;
case 0x50c3a9:goto L50c3a9;
case 0x50c3aa:c.instructions+=2;goto B50c3aa;
case 0x50c3ae:c.instructions+=1;goto B50c3ae;
case 0x50c3b1:goto L50c3b1;
case 0x50c3b5:c.instructions+=1;goto B50c3b5;
case 0x50c3b7:goto L50c3b7;
case 0x50c3b9:c.instructions+=2;goto B50c3b9;
case 0x50c3ba:c.instructions+=1;goto B50c3ba;
case 0x50c3bf:goto L50c3bf;
case 0x50c3c2:goto L50c3c2;
case 0x50c3c5:c.instructions+=2;goto B50c3c5;
case 0x50c3c6:c.instructions+=1;goto B50c3c6;
case 0x50c3c8:goto L50c3c8;
case 0x50c3c9:goto L50c3c9;
case 0x50c3cb:c.instructions+=2;goto B50c3cb;
case 0x50c3cc:c.instructions+=1;goto B50c3cc;
case 0x50c3d0:goto L50c3d0;
case 0x50c3d4:c.instructions+=22;goto B50c3d4;
case 0x50c3d6:c.instructions+=21;goto B50c3d6;
case 0x50c3d7:c.instructions+=20;goto B50c3d7;
case 0x50c3dc:c.instructions+=19;goto B50c3dc;
case 0x50c3de:c.instructions+=18;goto B50c3de;
case 0x50c3e1:c.instructions+=17;goto B50c3e1;
case 0x50c3e4:c.instructions+=16;goto B50c3e4;
case 0x50c3e7:c.instructions+=15;goto B50c3e7;
case 0x50c3ec:c.instructions+=14;goto B50c3ec;
case 0x50c3ef:c.instructions+=13;goto B50c3ef;
case 0x50c3f2:c.instructions+=12;goto B50c3f2;
case 0x50c3f5:c.instructions+=11;goto B50c3f5;
case 0x50c3f8:c.instructions+=10;goto B50c3f8;
case 0x50c3fb:c.instructions+=9;goto B50c3fb;
case 0x50c3fe:c.instructions+=8;goto B50c3fe;
case 0x50c401:c.instructions+=7;goto B50c401;
case 0x50c404:c.instructions+=6;goto B50c404;
case 0x50c407:c.instructions+=5;goto B50c407;
case 0x50c40a:c.instructions+=4;goto B50c40a;
case 0x50c40d:c.instructions+=3;goto B50c40d;
case 0x50c410:c.instructions+=2;goto B50c410;
case 0x50c413:c.instructions+=1;goto B50c413;
case 0x50c415:goto L50c415;
case 0x50c418:c.instructions+=5;goto B50c418;
case 0x50c41b:c.instructions+=4;goto B50c41b;
case 0x50c421:c.instructions+=3;goto B50c421;
case 0x50c425:c.instructions+=2;goto B50c425;
case 0x50c427:c.instructions+=1;goto B50c427;
case 0x50c429:goto L50c429;
case 0x50c42c:c.instructions+=31;goto B50c42c;
case 0x50c42e:c.instructions+=30;goto B50c42e;
case 0x50c431:c.instructions+=29;goto B50c431;
case 0x50c434:c.instructions+=28;goto B50c434;
case 0x50c437:c.instructions+=27;goto B50c437;
case 0x50c43a:c.instructions+=26;goto B50c43a;
case 0x50c43d:c.instructions+=25;goto B50c43d;
case 0x50c440:c.instructions+=24;goto B50c440;
case 0x50c443:c.instructions+=23;goto B50c443;
case 0x50c446:c.instructions+=22;goto B50c446;
case 0x50c449:c.instructions+=21;goto B50c449;
case 0x50c44c:c.instructions+=20;goto B50c44c;
case 0x50c44f:c.instructions+=19;goto B50c44f;
case 0x50c452:c.instructions+=18;goto B50c452;
case 0x50c455:c.instructions+=17;goto B50c455;
case 0x50c458:c.instructions+=16;goto B50c458;
case 0x50c45b:c.instructions+=15;goto B50c45b;
case 0x50c45e:c.instructions+=14;goto B50c45e;
case 0x50c461:c.instructions+=13;goto B50c461;
case 0x50c464:c.instructions+=12;goto B50c464;
case 0x50c467:c.instructions+=11;goto B50c467;
case 0x50c46a:c.instructions+=10;goto B50c46a;
case 0x50c46d:c.instructions+=9;goto B50c46d;
case 0x50c470:c.instructions+=8;goto B50c470;
case 0x50c473:c.instructions+=7;goto B50c473;
case 0x50c476:c.instructions+=6;goto B50c476;
case 0x50c479:c.instructions+=5;goto B50c479;
case 0x50c47c:c.instructions+=4;goto B50c47c;
case 0x50c47f:c.instructions+=3;goto B50c47f;
case 0x50c482:c.instructions+=2;goto B50c482;
case 0x50c485:c.instructions+=1;goto B50c485;
case 0x50c488:goto L50c488;
case 0x50c48a:c.instructions+=2;goto B50c48a;
case 0x50c48b:c.instructions+=1;goto B50c48b;
case 0x50c490:goto L50c490;
case 0x50c494:c.instructions+=2;goto B50c494;
case 0x50c495:c.instructions+=1;goto B50c495;
case 0x50c49a:goto L50c49a;
case 0x50c49b:c.instructions+=1;goto B50c49b;
case 0x50c4a0:goto L50c4a0;
case 0x50c4a3:c.instructions+=6;goto B50c4a3;
case 0x50c4a4:c.instructions+=5;goto B50c4a4;
case 0x50c4a8:c.instructions+=4;goto B50c4a8;
case 0x50c4a9:c.instructions+=3;goto B50c4a9;
case 0x50c4ae:c.instructions+=2;goto B50c4ae;
case 0x50c4af:c.instructions+=1;goto B50c4af;
case 0x50c4b4:goto L50c4b4;
case 0x50c4b7:c.instructions+=2;goto B50c4b7;
case 0x50c4b9:c.instructions+=1;goto B50c4b9;
case 0x50c4bb:goto L50c4bb;
case 0x50c4c0:c.instructions+=2;goto B50c4c0;
case 0x50c4c2:c.instructions+=1;goto B50c4c2;
case 0x50c4c4:goto L50c4c4;
case 0x50c4c8:c.instructions+=6;goto B50c4c8;
case 0x50c4ca:c.instructions+=5;goto B50c4ca;
case 0x50c4cf:c.instructions+=4;goto B50c4cf;
case 0x50c4d4:c.instructions+=3;goto B50c4d4;
case 0x50c4d9:c.instructions+=2;goto B50c4d9;
case 0x50c4db:c.instructions+=1;goto B50c4db;
case 0x50c4e0:goto L50c4e0;
case 0x50c4e2:c.instructions+=3;goto B50c4e2;
case 0x50c4e3:c.instructions+=2;goto B50c4e3;
case 0x50c4e5:c.instructions+=1;goto B50c4e5;
case 0x50c4e7:goto L50c4e7;
case 0x50c4e8:c.instructions+=4;goto B50c4e8;
case 0x50c4ec:c.instructions+=3;goto B50c4ec;
case 0x50c4ee:c.instructions+=2;goto B50c4ee;
case 0x50c4ef:c.instructions+=1;goto B50c4ef;
case 0x50c4f0:goto L50c4f0;
case 0x50c4f3:c.instructions+=3;goto B50c4f3;
case 0x50c4f4:c.instructions+=2;goto B50c4f4;
case 0x50c4f6:c.instructions+=1;goto B50c4f6;
case 0x50c4f8:goto L50c4f8;
case 0x50c4fa:c.instructions+=2;goto B50c4fa;
case 0x50c4fd:c.instructions+=1;goto B50c4fd;
case 0x50c4ff:goto L50c4ff;
case 0x50c501:goto L50c501;
case 0x50c503:c.instructions+=4;goto B50c503;
case 0x50c507:c.instructions+=3;goto B50c507;
case 0x50c50a:c.instructions+=2;goto B50c50a;
case 0x50c50f:c.instructions+=1;goto B50c50f;
case 0x50c510:goto L50c510;
case 0x50c512:goto L50c512;
case 0x50c517:goto L50c517;
case 0x50c51a:c.instructions+=3;goto B50c51a;
case 0x50c51c:c.instructions+=2;goto B50c51c;
case 0x50c51d:c.instructions+=1;goto B50c51d;
case 0x50c51f:goto L50c51f;
case 0x50c521:c.instructions+=4;goto B50c521;
case 0x50c525:c.instructions+=3;goto B50c525;
case 0x50c529:c.instructions+=2;goto B50c529;
case 0x50c52b:c.instructions+=1;goto B50c52b;
case 0x50c530:goto L50c530;
case 0x50c532:c.instructions+=4;goto B50c532;
case 0x50c535:c.instructions+=3;goto B50c535;
case 0x50c536:c.instructions+=2;goto B50c536;
case 0x50c538:c.instructions+=1;goto B50c538;
case 0x50c53a:goto L50c53a;
case 0x50c53b:c.instructions+=1;goto B50c53b;
case 0x50c540:goto L50c540;
case 0x50c543:goto L50c543;
case 0x50c544:c.instructions+=3;goto B50c544;
case 0x50c545:c.instructions+=2;goto B50c545;
case 0x50c548:c.instructions+=1;goto B50c548;
case 0x50c550:goto L50c550;
case 0x50c552:c.instructions+=14;goto B50c552;
case 0x50c557:c.instructions+=13;goto B50c557;
case 0x50c55d:c.instructions+=12;goto B50c55d;
case 0x50c55e:c.instructions+=11;goto B50c55e;
case 0x50c565:c.instructions+=10;goto B50c565;
case 0x50c568:c.instructions+=9;goto B50c568;
case 0x50c570:c.instructions+=8;goto B50c570;
case 0x50c575:c.instructions+=7;goto B50c575;
case 0x50c578:c.instructions+=6;goto B50c578;
case 0x50c57c:c.instructions+=5;goto B50c57c;
case 0x50c580:c.instructions+=4;goto B50c580;
case 0x50c583:c.instructions+=3;goto B50c583;
case 0x50c585:c.instructions+=2;goto B50c585;
case 0x50c58d:c.instructions+=1;goto B50c58d;
case 0x50c58f:goto L50c58f;
case 0x50c592:c.instructions+=1;goto B50c592;
case 0x50c594:goto L50c594;
case 0x50c596:goto L50c596;
case 0x50c599:c.instructions+=4;goto B50c599;
case 0x50c59a:c.instructions+=3;goto B50c59a;
case 0x50c59f:c.instructions+=2;goto B50c59f;
case 0x50c5a3:c.instructions+=1;goto B50c5a3;
case 0x50c5a8:goto L50c5a8;
case 0x50c5ab:c.instructions+=3;goto B50c5ab;
case 0x50c5af:c.instructions+=2;goto B50c5af;
case 0x50c5b0:c.instructions+=1;goto B50c5b0;
case 0x50c5b5:goto L50c5b5;
case 0x50c5b9:c.instructions+=3;goto B50c5b9;
case 0x50c5c0:c.instructions+=2;goto B50c5c0;
case 0x50c5c3:c.instructions+=1;goto B50c5c3;
case 0x50c5d0:goto L50c5d0;
case 0x50c5d4:c.instructions+=2;goto B50c5d4;
case 0x50c5db:c.instructions+=1;goto B50c5db;
case 0x50c5e0:goto L50c5e0;
case 0x50c5e6:c.instructions+=3;goto B50c5e6;
case 0x50c5e9:c.instructions+=2;goto B50c5e9;
case 0x50c5ea:c.instructions+=1;goto B50c5ea;
case 0x50c5ec:goto L50c5ec;
case 0x50c600:goto L50c600;
case 0x50c605:goto L50c605;
case 0x50c607:c.instructions+=2;goto B50c607;
case 0x50c609:c.instructions+=1;goto B50c609;
case 0x50c610:goto L50c610;
case 0x50c613:c.instructions+=1;goto B50c613;
case 0x50c615:goto L50c615;
case 0x50c616:c.instructions+=3;goto B50c616;
case 0x50c619:c.instructions+=2;goto B50c619;
case 0x50c61c:c.instructions+=1;goto B50c61c;
case 0x50c61e:goto L50c61e;
case 0x50c621:c.instructions+=2;goto B50c621;
case 0x50c627:c.instructions+=1;goto B50c627;
case 0x50c629:goto L50c629;
case 0x50c62b:c.instructions+=1;goto B50c62b;
case 0x50c62c:goto L50c62c;
case 0x50c62e:c.instructions+=1;goto B50c62e;
case 0x50c630:goto L50c630;
case 0x50c631:c.instructions+=8;goto B50c631;
case 0x50c635:c.instructions+=7;goto B50c635;
case 0x50c636:c.instructions+=6;goto B50c636;
case 0x50c63a:c.instructions+=5;goto B50c63a;
case 0x50c63b:c.instructions+=4;goto B50c63b;
case 0x50c63f:c.instructions+=3;goto B50c63f;
case 0x50c644:c.instructions+=2;goto B50c644;
case 0x50c64b:c.instructions+=1;goto B50c64b;
case 0x50c650:goto L50c650;
case 0x50c653:c.instructions+=1;goto B50c653;
case 0x50c655:goto L50c655;
case 0x50c657:c.instructions+=5;goto B50c657;
case 0x50c65a:c.instructions+=4;goto B50c65a;
case 0x50c65b:c.instructions+=3;goto B50c65b;
case 0x50c65c:c.instructions+=2;goto B50c65c;
case 0x50c661:c.instructions+=1;goto B50c661;
case 0x50c666:goto L50c666;
case 0x50c669:c.instructions+=1;goto B50c669;
case 0x50c66b:goto L50c66b;
case 0x50c66e:c.instructions+=3;goto B50c66e;
case 0x50c671:c.instructions+=2;goto B50c671;
case 0x50c677:c.instructions+=1;goto B50c677;
case 0x50c679:goto L50c679;
case 0x50c67a:c.instructions+=3;goto B50c67a;
case 0x50c67b:c.instructions+=2;goto B50c67b;
case 0x50c67c:c.instructions+=1;goto B50c67c;
case 0x50c680:goto L50c680;
case 0x50c685:c.instructions+=2;goto B50c685;
case 0x50c687:c.instructions+=1;goto B50c687;
case 0x50c689:goto L50c689;
case 0x50c68a:c.instructions+=2;goto B50c68a;
case 0x50c68f:c.instructions+=1;goto B50c68f;
case 0x50c690:goto L50c690;
case 0x50c693:c.instructions+=2;goto B50c693;
case 0x50c694:c.instructions+=1;goto B50c694;
case 0x50c699:goto L50c699;
case 0x50c69b:c.instructions+=9;goto B50c69b;
case 0x50c69d:c.instructions+=8;goto B50c69d;
case 0x50c69f:c.instructions+=7;goto B50c69f;
case 0x50c6a2:c.instructions+=6;goto B50c6a2;
case 0x50c6a5:c.instructions+=5;goto B50c6a5;
case 0x50c6a8:c.instructions+=4;goto B50c6a8;
case 0x50c6ae:c.instructions+=3;goto B50c6ae;
case 0x50c6b1:c.instructions+=2;goto B50c6b1;
case 0x50c6b4:c.instructions+=1;goto B50c6b4;
case 0x50c6b6:goto L50c6b6;
case 0x50c6b8:c.instructions+=2;goto B50c6b8;
case 0x50c6b9:c.instructions+=1;goto B50c6b9;
case 0x50c6be:goto L50c6be;
case 0x50c6c1:c.instructions+=1;goto B50c6c1;
case 0x50c6c2:goto L50c6c2;
case 0x50c6cc:c.instructions+=1;goto B50c6cc;
case 0x50c6d0:goto L50c6d0;
case 0x50c6d1:c.instructions+=6;goto B50c6d1;
case 0x50c6d5:c.instructions+=5;goto B50c6d5;
case 0x50c6d6:c.instructions+=4;goto B50c6d6;
case 0x50c6d8:c.instructions+=3;goto B50c6d8;
case 0x50c6db:c.instructions+=2;goto B50c6db;
case 0x50c6dd:c.instructions+=1;goto B50c6dd;
case 0x50c6df:goto L50c6df;
case 0x50c6e1:c.instructions+=1;goto B50c6e1;
case 0x50c6e3:goto L50c6e3;
case 0x50c6e6:c.instructions+=1;goto B50c6e6;
case 0x50c6e8:goto L50c6e8;
case 0x50c6ed:c.instructions+=1;goto B50c6ed;
case 0x50c6ef:goto L50c6ef;
case 0x50c6f2:c.instructions+=1;goto B50c6f2;
case 0x50c6f4:goto L50c6f4;
case 0x50c6f9:c.instructions+=1;goto B50c6f9;
case 0x50c6fb:goto L50c6fb;
case 0x50c6fe:c.instructions+=1;goto B50c6fe;
case 0x50c700:goto L50c700;
case 0x50c705:goto L50c705;
case 0x50c706:c.instructions+=1;goto B50c706;
case 0x50c70b:goto L50c70b;
case 0x50c70e:c.instructions+=2;goto B50c70e;
case 0x50c710:c.instructions+=1;goto B50c710;
case 0x50c712:goto L50c712;
case 0x50c715:c.instructions+=2;goto B50c715;
case 0x50c71c:c.instructions+=1;goto B50c71c;
case 0x50c721:goto L50c721;
case 0x50c727:c.instructions+=3;goto B50c727;
case 0x50c72a:c.instructions+=2;goto B50c72a;
case 0x50c72b:c.instructions+=1;goto B50c72b;
case 0x50c72d:goto L50c72d;
case 0x50c72e:c.instructions+=3;goto B50c72e;
case 0x50c730:c.instructions+=2;goto B50c730;
case 0x50c731:c.instructions+=1;goto B50c731;
case 0x50c734:goto L50c734;
case 0x50c737:c.instructions+=2;goto B50c737;
case 0x50c73c:c.instructions+=1;goto B50c73c;
case 0x50c743:goto L50c743;
case 0x50c746:c.instructions+=2;goto B50c746;
case 0x50c748:c.instructions+=1;goto B50c748;
case 0x50c74a:goto L50c74a;
case 0x50c74d:goto L50c74d;
case 0x50c750:c.instructions+=1;goto B50c750;
case 0x50c752:goto L50c752;
case 0x50c754:goto L50c754;
case 0x50c757:c.instructions+=2;goto B50c757;
case 0x50c759:c.instructions+=1;goto B50c759;
case 0x50c75b:goto L50c75b;
case 0x50c75e:goto L50c75e;
case 0x50c761:c.instructions+=2;goto B50c761;
case 0x50c763:c.instructions+=1;goto B50c763;
case 0x50c765:goto L50c765;
case 0x50c768:goto L50c768;
case 0x50c76b:c.instructions+=2;goto B50c76b;
case 0x50c76d:c.instructions+=1;goto B50c76d;
case 0x50c76f:goto L50c76f;
case 0x50c772:goto L50c772;
case 0x50c775:c.instructions+=2;goto B50c775;
case 0x50c777:c.instructions+=1;goto B50c777;
case 0x50c779:goto L50c779;
case 0x50c77c:goto L50c77c;
case 0x50c782:c.instructions+=2;goto B50c782;
case 0x50c784:c.instructions+=1;goto B50c784;
case 0x50c786:goto L50c786;
case 0x50c78c:goto L50c78c;
case 0x50c791:c.instructions+=3;goto B50c791;
case 0x50c797:c.instructions+=2;goto B50c797;
case 0x50c79c:c.instructions+=1;goto B50c79c;
case 0x50c79e:goto L50c79e;
case 0x50c7a0:c.instructions+=3;goto B50c7a0;
case 0x50c7a1:c.instructions+=2;goto B50c7a1;
case 0x50c7a2:c.instructions+=1;goto B50c7a2;
case 0x50c7b0:goto L50c7b0;
case 0x50c7b2:c.instructions+=1;goto B50c7b2;
case 0x50c7c0:goto L50c7c0;
case 0x50c7c4:c.instructions+=3;goto B50c7c4;
case 0x50c7c5:c.instructions+=2;goto B50c7c5;
case 0x50c7ca:c.instructions+=1;goto B50c7ca;
case 0x50c7cf:goto L50c7cf;
case 0x50c7d2:c.instructions+=1;goto B50c7d2;
case 0x50c7e0:goto L50c7e0;
case 0x50c7e6:c.instructions+=8;goto B50c7e6;
case 0x50c7e8:c.instructions+=7;goto B50c7e8;
case 0x50c7ed:c.instructions+=6;goto B50c7ed;
case 0x50c7ee:c.instructions+=5;goto B50c7ee;
case 0x50c7f5:c.instructions+=4;goto B50c7f5;
case 0x50c7f8:c.instructions+=3;goto B50c7f8;
case 0x50c7fb:c.instructions+=2;goto B50c7fb;
case 0x50c800:c.instructions+=1;goto B50c800;
case 0x50c802:goto L50c802;
case 0x50c803:c.instructions+=5;goto B50c803;
case 0x50c80b:c.instructions+=4;goto B50c80b;
case 0x50c80e:c.instructions+=3;goto B50c80e;
case 0x50c810:c.instructions+=2;goto B50c810;
case 0x50c818:c.instructions+=1;goto B50c818;
case 0x50c81a:goto L50c81a;
case 0x50c820:goto L50c820;
case 0x50c823:c.instructions+=2;goto B50c823;
case 0x50c825:c.instructions+=1;goto B50c825;
case 0x50c827:goto L50c827;
case 0x50c82a:c.instructions+=1;goto B50c82a;
case 0x50c82c:goto L50c82c;
case 0x50c82e:goto L50c82e;
case 0x50c832:c.instructions+=4;goto B50c832;
case 0x50c836:c.instructions+=3;goto B50c836;
case 0x50c837:c.instructions+=2;goto B50c837;
case 0x50c839:c.instructions+=1;goto B50c839;
case 0x50c83e:goto L50c83e;
case 0x50c841:c.instructions+=2;goto B50c841;
case 0x50c843:c.instructions+=1;goto B50c843;
case 0x50c845:goto L50c845;
case 0x50c846:goto L50c846;
case 0x50c84a:c.instructions+=3;goto B50c84a;
case 0x50c851:c.instructions+=2;goto B50c851;
case 0x50c854:c.instructions+=1;goto B50c854;
case 0x50c860:goto L50c860;
case 0x50c866:c.instructions+=3;goto B50c866;
case 0x50c867:c.instructions+=2;goto B50c867;
case 0x50c86d:c.instructions+=1;goto B50c86d;
case 0x50c872:goto L50c872;
case 0x50c876:c.instructions+=4;goto B50c876;
case 0x50c879:c.instructions+=3;goto B50c879;
case 0x50c87f:c.instructions+=2;goto B50c87f;
case 0x50c885:c.instructions+=1;goto B50c885;
case 0x50c88a:goto L50c88a;
case 0x50c88e:c.instructions+=3;goto B50c88e;
case 0x50c893:c.instructions+=2;goto B50c893;
case 0x50c895:c.instructions+=1;goto B50c895;
case 0x50c897:goto L50c897;
case 0x50c89e:c.instructions+=6;goto B50c89e;
case 0x50c8a5:c.instructions+=5;goto B50c8a5;
case 0x50c8a7:c.instructions+=4;goto B50c8a7;
case 0x50c8a9:c.instructions+=3;goto B50c8a9;
case 0x50c8ad:c.instructions+=2;goto B50c8ad;
case 0x50c8ae:c.instructions+=1;goto B50c8ae;
case 0x50c8b1:goto L50c8b1;
case 0x50c8b8:c.instructions+=6;goto B50c8b8;
case 0x50c8bf:c.instructions+=5;goto B50c8bf;
case 0x50c8c1:c.instructions+=4;goto B50c8c1;
case 0x50c8c3:c.instructions+=3;goto B50c8c3;
case 0x50c8c7:c.instructions+=2;goto B50c8c7;
case 0x50c8c8:c.instructions+=1;goto B50c8c8;
case 0x50c8d0:goto L50c8d0;
case 0x50c8d4:c.instructions+=2;goto B50c8d4;
case 0x50c8d9:c.instructions+=1;goto B50c8d9;
case 0x50c8e0:goto L50c8e0;
case 0x50c8e5:c.instructions+=3;goto B50c8e5;
case 0x50c8e8:c.instructions+=2;goto B50c8e8;
case 0x50c8ea:c.instructions+=1;goto B50c8ea;
case 0x50c8ec:goto L50c8ec;
case 0x50c8ed:goto L50c8ed;
case 0x50c8f3:c.instructions+=1;goto B50c8f3;
case 0x50c900:goto L50c900;
case 0x50c901:c.instructions+=3;goto B50c901;
case 0x50c905:c.instructions+=2;goto B50c905;
case 0x50c907:c.instructions+=1;goto B50c907;
case 0x50c909:goto L50c909;
case 0x50c90c:c.instructions+=4;goto B50c90c;
case 0x50c90d:c.instructions+=3;goto B50c90d;
case 0x50c90f:c.instructions+=2;goto B50c90f;
case 0x50c911:c.instructions+=1;goto B50c911;
case 0x50c913:goto L50c913;
case 0x50c915:goto L50c915;
case 0x50c919:c.instructions+=2;goto B50c919;
case 0x50c91c:c.instructions+=1;goto B50c91c;
case 0x50c91e:goto L50c91e;
case 0x50c923:c.instructions+=2;goto B50c923;
case 0x50c926:c.instructions+=1;goto B50c926;
case 0x50c929:goto L50c929;
case 0x50c92f:c.instructions+=2;goto B50c92f;
case 0x50c931:c.instructions+=1;goto B50c931;
case 0x50c933:goto L50c933;
case 0x50c935:c.instructions+=2;goto B50c935;
case 0x50c936:c.instructions+=1;goto B50c936;
case 0x50c938:goto L50c938;
case 0x50c93b:c.instructions+=6;goto B50c93b;
case 0x50c93e:c.instructions+=5;goto B50c93e;
case 0x50c940:c.instructions+=4;goto B50c940;
case 0x50c943:c.instructions+=3;goto B50c943;
case 0x50c945:c.instructions+=2;goto B50c945;
case 0x50c946:c.instructions+=1;goto B50c946;
case 0x50c948:goto L50c948;
case 0x50c94d:c.instructions+=1;goto B50c94d;
case 0x50c950:goto L50c950;
case 0x50c951:c.instructions+=1;goto B50c951;
case 0x50c960:goto L50c960;
case 0x50c964:c.instructions+=6;goto B50c964;
case 0x50c968:c.instructions+=5;goto B50c968;
case 0x50c96c:c.instructions+=4;goto B50c96c;
case 0x50c96d:c.instructions+=3;goto B50c96d;
case 0x50c96e:c.instructions+=2;goto B50c96e;
case 0x50c96f:c.instructions+=1;goto B50c96f;
case 0x50c974:goto L50c974;
case 0x50c977:c.instructions+=1;goto B50c977;
case 0x50c980:goto L50c980;
case 0x50c984:c.instructions+=2;goto B50c984;
case 0x50c986:c.instructions+=1;goto B50c986;
case 0x50c988:goto L50c988;
case 0x50c98b:c.instructions+=1;goto B50c98b;
case 0x50c98c:goto L50c98c;
case 0x50c98e:c.instructions+=1;goto B50c98e;
case 0x50c990:goto L50c990;
case 0x50c994:c.instructions+=2;goto B50c994;
case 0x50c996:c.instructions+=1;goto B50c996;
case 0x50c998:goto L50c998;
case 0x50c99c:c.instructions+=2;goto B50c99c;
case 0x50c99f:c.instructions+=1;goto B50c99f;
case 0x50c9a1:goto L50c9a1;
case 0x50c9a4:c.instructions+=1;goto B50c9a4;
case 0x50c9ab:goto L50c9ab;
case 0x50c9b0:goto L50c9b0;
case 0x50c9b1:c.instructions+=3;goto B50c9b1;
case 0x50c9b5:c.instructions+=2;goto B50c9b5;
case 0x50c9b7:c.instructions+=1;goto B50c9b7;
case 0x50c9b9:goto L50c9b9;
case 0x50c9bd:c.instructions+=5;goto B50c9bd;
case 0x50c9c0:c.instructions+=4;goto B50c9c0;
case 0x50c9c5:c.instructions+=3;goto B50c9c5;
case 0x50c9c6:c.instructions+=2;goto B50c9c6;
case 0x50c9c7:c.instructions+=1;goto B50c9c7;
case 0x50c9cc:goto L50c9cc;
case 0x50c9cf:c.instructions+=3;goto B50c9cf;
case 0x50c9d2:c.instructions+=2;goto B50c9d2;
case 0x50c9d7:c.instructions+=1;goto B50c9d7;
case 0x50c9da:goto L50c9da;
case 0x50c9db:c.instructions+=1;goto B50c9db;
case 0x50c9e0:goto L50c9e0;
case 0x50c9e4:c.instructions+=2;goto B50c9e4;
case 0x50c9e6:c.instructions+=1;goto B50c9e6;
case 0x50c9e8:goto L50c9e8;
case 0x50c9ec:c.instructions+=1;goto B50c9ec;
case 0x50c9ee:goto L50c9ee;
case 0x50c9f3:c.instructions+=1;goto B50c9f3;
case 0x50c9f4:goto L50c9f4;
case 0x50c9f6:c.instructions+=1;goto B50c9f6;
case 0x50ca00:goto L50ca00;
case 0x50ca04:c.instructions+=2;goto B50ca04;
case 0x50ca06:c.instructions+=1;goto B50ca06;
case 0x50ca08:goto L50ca08;
case 0x50ca0e:c.instructions+=2;goto B50ca0e;
case 0x50ca10:c.instructions+=1;goto B50ca10;
case 0x50ca12:goto L50ca12;
case 0x50ca16:c.instructions+=1;goto B50ca16;
case 0x50ca18:goto L50ca18;
case 0x50ca1f:goto L50ca1f;
case 0x50ca23:c.instructions+=1;goto B50ca23;
case 0x50ca25:goto L50ca25;
case 0x50ca26:c.instructions+=4;goto B50ca26;
case 0x50ca29:c.instructions+=3;goto B50ca29;
case 0x50ca2c:c.instructions+=2;goto B50ca2c;
case 0x50ca2e:c.instructions+=1;goto B50ca2e;
case 0x50ca30:goto L50ca30;
case 0x50ca31:c.instructions+=1;goto B50ca31;
case 0x50ca33:goto L50ca33;
case 0x50ca34:c.instructions+=1;goto B50ca34;
case 0x50ca39:goto L50ca39;
case 0x50ca3c:c.instructions+=3;goto B50ca3c;
case 0x50ca3f:c.instructions+=2;goto B50ca3f;
case 0x50ca40:c.instructions+=1;goto B50ca40;
case 0x50ca42:goto L50ca42;
case 0x50ca43:goto L50ca43;
case 0x50ca44:goto L50ca44;
case 0x50ca50:goto L50ca50;
case 0x50ca54:c.instructions+=2;goto B50ca54;
case 0x50ca56:c.instructions+=1;goto B50ca56;
case 0x50ca58:goto L50ca58;
case 0x50ca5e:c.instructions+=2;goto B50ca5e;
case 0x50ca60:c.instructions+=1;goto B50ca60;
case 0x50ca62:goto L50ca62;
case 0x50ca66:c.instructions+=1;goto B50ca66;
case 0x50ca68:goto L50ca68;
case 0x50ca6b:c.instructions+=3;goto B50ca6b;
case 0x50ca6e:c.instructions+=2;goto B50ca6e;
case 0x50ca74:c.instructions+=1;goto B50ca74;
case 0x50ca77:goto L50ca77;
case 0x50ca7b:c.instructions+=1;goto B50ca7b;
case 0x50ca7d:goto L50ca7d;
case 0x50ca7e:c.instructions+=4;goto B50ca7e;
case 0x50ca81:c.instructions+=3;goto B50ca81;
case 0x50ca84:c.instructions+=2;goto B50ca84;
case 0x50ca86:c.instructions+=1;goto B50ca86;
case 0x50ca88:goto L50ca88;
case 0x50ca89:c.instructions+=2;goto B50ca89;
case 0x50ca8b:c.instructions+=1;goto B50ca8b;
case 0x50ca90:goto L50ca90;
case 0x50ca91:c.instructions+=1;goto B50ca91;
case 0x50ca96:goto L50ca96;
case 0x50ca99:c.instructions+=3;goto B50ca99;
case 0x50ca9c:c.instructions+=2;goto B50ca9c;
case 0x50ca9d:c.instructions+=1;goto B50ca9d;
case 0x50ca9f:goto L50ca9f;
case 0x50caa0:goto L50caa0;
case 0x50caa1:goto L50caa1;
case 0x50cab0:goto L50cab0;
case 0x50cab4:c.instructions+=4;goto B50cab4;
case 0x50cab6:c.instructions+=3;goto B50cab6;
case 0x50cab7:c.instructions+=2;goto B50cab7;
case 0x50cab8:c.instructions+=1;goto B50cab8;
case 0x50caba:goto L50caba;
case 0x50cabd:c.instructions+=2;goto B50cabd;
case 0x50cabf:c.instructions+=1;goto B50cabf;
case 0x50cac1:goto L50cac1;
case 0x50cac5:goto L50cac5;
case 0x50cac6:c.instructions+=1;goto B50cac6;
case 0x50cacb:goto L50cacb;
case 0x50cace:c.instructions+=3;goto B50cace;
case 0x50cad1:c.instructions+=2;goto B50cad1;
case 0x50cad3:c.instructions+=1;goto B50cad3;
case 0x50cad5:goto L50cad5;
case 0x50cad8:c.instructions+=2;goto B50cad8;
case 0x50cada:c.instructions+=1;goto B50cada;
case 0x50cadc:goto L50cadc;
case 0x50cadd:c.instructions+=3;goto B50cadd;
case 0x50cadf:c.instructions+=2;goto B50cadf;
case 0x50cae0:c.instructions+=1;goto B50cae0;
case 0x50cae1:goto L50cae1;
case 0x50cae3:c.instructions+=1;goto B50cae3;
case 0x50cae5:goto L50cae5;
case 0x50cae8:c.instructions+=2;goto B50cae8;
case 0x50caeb:c.instructions+=1;goto B50caeb;
case 0x50caed:goto L50caed;
case 0x50caee:c.instructions+=3;goto B50caee;
case 0x50caf0:c.instructions+=2;goto B50caf0;
case 0x50caf1:c.instructions+=1;goto B50caf1;
case 0x50cb00:goto L50cb00;
case 0x50cb04:c.instructions+=2;goto B50cb04;
case 0x50cb06:c.instructions+=1;goto B50cb06;
case 0x50cb08:goto L50cb08;
case 0x50cb0b:c.instructions+=3;goto B50cb0b;
case 0x50cb0c:c.instructions+=2;goto B50cb0c;
case 0x50cb0f:c.instructions+=1;goto B50cb0f;
case 0x50cb11:goto L50cb11;
case 0x50cb14:c.instructions+=1;goto B50cb14;
case 0x50cb16:goto L50cb16;
case 0x50cb19:c.instructions+=1;goto B50cb19;
case 0x50cb1b:goto L50cb1b;
case 0x50cb1f:c.instructions+=3;goto B50cb1f;
case 0x50cb22:c.instructions+=2;goto B50cb22;
case 0x50cb26:c.instructions+=1;goto B50cb26;
case 0x50cb29:goto L50cb29;
case 0x50cb2d:c.instructions+=4;goto B50cb2d;
case 0x50cb30:c.instructions+=3;goto B50cb30;
case 0x50cb34:c.instructions+=2;goto B50cb34;
case 0x50cb37:c.instructions+=1;goto B50cb37;
case 0x50cb3e:goto L50cb3e;
case 0x50cb40:goto L50cb40;
case 0x50cb41:c.instructions+=4;goto B50cb41;
case 0x50cb42:c.instructions+=3;goto B50cb42;
case 0x50cb46:c.instructions+=2;goto B50cb46;
case 0x50cb48:c.instructions+=1;goto B50cb48;
case 0x50cb4e:goto L50cb4e;
case 0x50cb52:c.instructions+=8;goto B50cb52;
case 0x50cb53:c.instructions+=7;goto B50cb53;
case 0x50cb56:c.instructions+=6;goto B50cb56;
case 0x50cb59:c.instructions+=5;goto B50cb59;
case 0x50cb5d:c.instructions+=4;goto B50cb5d;
case 0x50cb60:c.instructions+=3;goto B50cb60;
case 0x50cb61:c.instructions+=2;goto B50cb61;
case 0x50cb64:c.instructions+=1;goto B50cb64;
case 0x50cb66:goto L50cb66;
case 0x50cb6d:c.instructions+=1;goto B50cb6d;
case 0x50cb74:goto L50cb74;
case 0x50cb77:c.instructions+=5;goto B50cb77;
case 0x50cb79:c.instructions+=4;goto B50cb79;
case 0x50cb7b:c.instructions+=3;goto B50cb7b;
case 0x50cb7d:c.instructions+=2;goto B50cb7d;
case 0x50cb7e:c.instructions+=1;goto B50cb7e;
case 0x50cb83:goto L50cb83;
case 0x50cb87:c.instructions+=6;goto B50cb87;
case 0x50cb8b:c.instructions+=5;goto B50cb8b;
case 0x50cb8e:c.instructions+=4;goto B50cb8e;
case 0x50cb92:c.instructions+=3;goto B50cb92;
case 0x50cb96:c.instructions+=2;goto B50cb96;
case 0x50cb99:c.instructions+=1;goto B50cb99;
case 0x50cb9b:goto L50cb9b;
case 0x50cb9f:c.instructions+=1;goto B50cb9f;
case 0x50cba2:goto L50cba2;
case 0x50cba8:c.instructions+=6;goto B50cba8;
case 0x50cba9:c.instructions+=5;goto B50cba9;
case 0x50cbab:c.instructions+=4;goto B50cbab;
case 0x50cbaf:c.instructions+=3;goto B50cbaf;
case 0x50cbb1:c.instructions+=2;goto B50cbb1;
case 0x50cbb4:c.instructions+=1;goto B50cbb4;
case 0x50cbb6:goto L50cbb6;
case 0x50cbbc:c.instructions+=6;goto B50cbbc;
case 0x50cbbe:c.instructions+=5;goto B50cbbe;
case 0x50cbc2:c.instructions+=4;goto B50cbc2;
case 0x50cbc4:c.instructions+=3;goto B50cbc4;
case 0x50cbc6:c.instructions+=2;goto B50cbc6;
case 0x50cbc9:c.instructions+=1;goto B50cbc9;
case 0x50cbcb:goto L50cbcb;
case 0x50cbd2:c.instructions+=3;goto B50cbd2;
case 0x50cbd3:c.instructions+=2;goto B50cbd3;
case 0x50cbd4:c.instructions+=1;goto B50cbd4;
case 0x50cbd5:goto L50cbd5;
case 0x50cbd8:c.instructions+=3;goto B50cbd8;
case 0x50cbda:c.instructions+=2;goto B50cbda;
case 0x50cbdf:c.instructions+=1;goto B50cbdf;
case 0x50cbe2:goto L50cbe2;
case 0x50cbe3:c.instructions+=2;goto B50cbe3;
case 0x50cbe4:c.instructions+=1;goto B50cbe4;
case 0x50cc00:goto L50cc00;
case 0x50cc01:c.instructions+=4;goto B50cc01;
case 0x50cc02:c.instructions+=3;goto B50cc02;
case 0x50cc06:c.instructions+=2;goto B50cc06;
case 0x50cc08:c.instructions+=1;goto B50cc08;
case 0x50cc0e:goto L50cc0e;
case 0x50cc12:c.instructions+=8;goto B50cc12;
case 0x50cc13:c.instructions+=7;goto B50cc13;
case 0x50cc16:c.instructions+=6;goto B50cc16;
case 0x50cc19:c.instructions+=5;goto B50cc19;
case 0x50cc1d:c.instructions+=4;goto B50cc1d;
case 0x50cc20:c.instructions+=3;goto B50cc20;
case 0x50cc21:c.instructions+=2;goto B50cc21;
case 0x50cc24:c.instructions+=1;goto B50cc24;
case 0x50cc26:goto L50cc26;
case 0x50cc2d:c.instructions+=1;goto B50cc2d;
case 0x50cc34:goto L50cc34;
case 0x50cc37:c.instructions+=5;goto B50cc37;
case 0x50cc39:c.instructions+=4;goto B50cc39;
case 0x50cc3b:c.instructions+=3;goto B50cc3b;
case 0x50cc3d:c.instructions+=2;goto B50cc3d;
case 0x50cc3e:c.instructions+=1;goto B50cc3e;
case 0x50cc43:goto L50cc43;
case 0x50cc47:c.instructions+=6;goto B50cc47;
case 0x50cc4b:c.instructions+=5;goto B50cc4b;
case 0x50cc4e:c.instructions+=4;goto B50cc4e;
case 0x50cc52:c.instructions+=3;goto B50cc52;
case 0x50cc56:c.instructions+=2;goto B50cc56;
case 0x50cc59:c.instructions+=1;goto B50cc59;
case 0x50cc5b:goto L50cc5b;
case 0x50cc5f:c.instructions+=1;goto B50cc5f;
case 0x50cc62:goto L50cc62;
case 0x50cc68:c.instructions+=6;goto B50cc68;
case 0x50cc69:c.instructions+=5;goto B50cc69;
case 0x50cc6b:c.instructions+=4;goto B50cc6b;
case 0x50cc6f:c.instructions+=3;goto B50cc6f;
case 0x50cc71:c.instructions+=2;goto B50cc71;
case 0x50cc74:c.instructions+=1;goto B50cc74;
case 0x50cc76:goto L50cc76;
case 0x50cc7c:c.instructions+=6;goto B50cc7c;
case 0x50cc7e:c.instructions+=5;goto B50cc7e;
case 0x50cc82:c.instructions+=4;goto B50cc82;
case 0x50cc84:c.instructions+=3;goto B50cc84;
case 0x50cc86:c.instructions+=2;goto B50cc86;
case 0x50cc89:c.instructions+=1;goto B50cc89;
case 0x50cc8b:goto L50cc8b;
case 0x50cc92:c.instructions+=3;goto B50cc92;
case 0x50cc93:c.instructions+=2;goto B50cc93;
case 0x50cc94:c.instructions+=1;goto B50cc94;
case 0x50cc95:goto L50cc95;
case 0x50cc98:c.instructions+=3;goto B50cc98;
case 0x50cc9a:c.instructions+=2;goto B50cc9a;
case 0x50cc9f:c.instructions+=1;goto B50cc9f;
case 0x50cca2:goto L50cca2;
case 0x50cca3:c.instructions+=2;goto B50cca3;
case 0x50cca4:c.instructions+=1;goto B50cca4;
case 0x50ccc0:goto L50ccc0;
case 0x50ccc4:c.instructions+=3;goto B50ccc4;
case 0x50ccc6:c.instructions+=2;goto B50ccc6;
case 0x50ccc8:c.instructions+=1;goto B50ccc8;
case 0x50ccca:goto L50ccca;
case 0x50cccd:c.instructions+=13;goto B50cccd;
case 0x50ccd1:c.instructions+=12;goto B50ccd1;
case 0x50ccd2:c.instructions+=11;goto B50ccd2;
case 0x50ccd4:c.instructions+=10;goto B50ccd4;
case 0x50ccd6:c.instructions+=9;goto B50ccd6;
case 0x50ccd8:c.instructions+=8;goto B50ccd8;
case 0x50ccdb:c.instructions+=7;goto B50ccdb;
case 0x50ccde:c.instructions+=6;goto B50ccde;
case 0x50cce1:c.instructions+=5;goto B50cce1;
case 0x50cce4:c.instructions+=4;goto B50cce4;
case 0x50cce7:c.instructions+=3;goto B50cce7;
case 0x50ccea:c.instructions+=2;goto B50ccea;
case 0x50cceb:c.instructions+=1;goto B50cceb;
case 0x50ccec:goto L50ccec;
case 0x50ccf0:c.instructions+=5;goto B50ccf0;
case 0x50ccf3:c.instructions+=4;goto B50ccf3;
case 0x50ccf6:c.instructions+=3;goto B50ccf6;
case 0x50ccf9:c.instructions+=2;goto B50ccf9;
case 0x50ccfb:c.instructions+=1;goto B50ccfb;
case 0x50cd00:goto L50cd00;
case 0x50cd03:c.instructions+=17;goto B50cd03;
case 0x50cd07:c.instructions+=16;goto B50cd07;
case 0x50cd0a:c.instructions+=15;goto B50cd0a;
case 0x50cd0c:c.instructions+=14;goto B50cd0c;
case 0x50cd0e:c.instructions+=13;goto B50cd0e;
case 0x50cd12:c.instructions+=12;goto B50cd12;
case 0x50cd16:c.instructions+=11;goto B50cd16;
case 0x50cd18:c.instructions+=10;goto B50cd18;
case 0x50cd1c:c.instructions+=9;goto B50cd1c;
case 0x50cd1f:c.instructions+=8;goto B50cd1f;
case 0x50cd22:c.instructions+=7;goto B50cd22;
case 0x50cd26:c.instructions+=6;goto B50cd26;
case 0x50cd2a:c.instructions+=5;goto B50cd2a;
case 0x50cd2c:c.instructions+=4;goto B50cd2c;
case 0x50cd2e:c.instructions+=3;goto B50cd2e;
case 0x50cd30:c.instructions+=2;goto B50cd30;
case 0x50cd33:c.instructions+=1;goto B50cd33;
case 0x50cd35:goto L50cd35;
case 0x50cd39:c.instructions+=4;goto B50cd39;
case 0x50cd3d:c.instructions+=3;goto B50cd3d;
case 0x50cd3f:c.instructions+=2;goto B50cd3f;
case 0x50cd42:c.instructions+=1;goto B50cd42;
case 0x50cd44:goto L50cd44;
case 0x50cd48:c.instructions+=4;goto B50cd48;
case 0x50cd4c:c.instructions+=3;goto B50cd4c;
case 0x50cd4e:c.instructions+=2;goto B50cd4e;
case 0x50cd51:c.instructions+=1;goto B50cd51;
case 0x50cd53:goto L50cd53;
case 0x50cd57:c.instructions+=4;goto B50cd57;
case 0x50cd5b:c.instructions+=3;goto B50cd5b;
case 0x50cd5d:c.instructions+=2;goto B50cd5d;
case 0x50cd60:c.instructions+=1;goto B50cd60;
case 0x50cd62:goto L50cd62;
case 0x50cd64:c.instructions+=2;goto B50cd64;
case 0x50cd67:c.instructions+=1;goto B50cd67;
case 0x50cd68:goto L50cd68;
case 0x50cd6a:c.instructions+=2;goto B50cd6a;
case 0x50cd6d:c.instructions+=1;goto B50cd6d;
case 0x50cd70:goto L50cd70;
case 0x50cd76:c.instructions+=8;goto B50cd76;
case 0x50cd7a:c.instructions+=7;goto B50cd7a;
case 0x50cd7e:c.instructions+=6;goto B50cd7e;
case 0x50cd84:c.instructions+=5;goto B50cd84;
case 0x50cd86:c.instructions+=4;goto B50cd86;
case 0x50cd8c:c.instructions+=3;goto B50cd8c;
case 0x50cd92:c.instructions+=2;goto B50cd92;
case 0x50cd94:c.instructions+=1;goto B50cd94;
case 0x50cda0:goto L50cda0;
case 0x50cda6:c.instructions+=3;goto B50cda6;
case 0x50cdaa:c.instructions+=2;goto B50cdaa;
case 0x50cdac:c.instructions+=1;goto B50cdac;
case 0x50cdb0:goto L50cdb0;
case 0x50cdb3:c.instructions+=10;goto B50cdb3;
case 0x50cdb9:c.instructions+=9;goto B50cdb9;
case 0x50cdbe:c.instructions+=8;goto B50cdbe;
case 0x50cdc0:c.instructions+=7;goto B50cdc0;
case 0x50cdc7:c.instructions+=6;goto B50cdc7;
case 0x50cdcd:c.instructions+=5;goto B50cdcd;
case 0x50cdd1:c.instructions+=4;goto B50cdd1;
case 0x50cdd7:c.instructions+=3;goto B50cdd7;
case 0x50cddd:c.instructions+=2;goto B50cddd;
case 0x50cde1:c.instructions+=1;goto B50cde1;
case 0x50cde3:goto L50cde3;
case 0x50cdea:goto L50cdea;
case 0x50cdec:c.instructions+=1;goto B50cdec;
case 0x50cdee:goto L50cdee;
case 0x50cdf2:c.instructions+=8;goto B50cdf2;
case 0x50cdf6:c.instructions+=7;goto B50cdf6;
case 0x50cdfa:c.instructions+=6;goto B50cdfa;
case 0x50cdfb:c.instructions+=5;goto B50cdfb;
case 0x50cdff:c.instructions+=4;goto B50cdff;
case 0x50ce00:c.instructions+=3;goto B50ce00;
case 0x50ce01:c.instructions+=2;goto B50ce01;
case 0x50ce02:c.instructions+=1;goto B50ce02;
case 0x50ce07:goto L50ce07;
case 0x50ce0a:c.instructions+=2;goto B50ce0a;
case 0x50ce0c:c.instructions+=1;goto B50ce0c;
case 0x50ce0e:goto L50ce0e;
case 0x50ce10:c.instructions+=2;goto B50ce10;
case 0x50ce13:c.instructions+=1;goto B50ce13;
case 0x50ce14:goto L50ce14;
case 0x50ce16:c.instructions+=2;goto B50ce16;
case 0x50ce19:c.instructions+=1;goto B50ce19;
case 0x50ce20:goto L50ce20;
case 0x50ce25:c.instructions+=2;goto B50ce25;
case 0x50ce27:c.instructions+=1;goto B50ce27;
case 0x50ce29:goto L50ce29;
case 0x50ce2c:c.instructions+=1;goto B50ce2c;
case 0x50ce2d:goto L50ce2d;
case 0x50ce2f:c.instructions+=1;goto B50ce2f;
case 0x50ce30:goto L50ce30;
case 0x50ce35:c.instructions+=6;goto B50ce35;
case 0x50ce38:c.instructions+=5;goto B50ce38;
case 0x50ce3e:c.instructions+=4;goto B50ce3e;
case 0x50ce3f:c.instructions+=3;goto B50ce3f;
case 0x50ce41:c.instructions+=2;goto B50ce41;
case 0x50ce43:c.instructions+=1;goto B50ce43;
case 0x50ce45:goto L50ce45;
case 0x50ce46:c.instructions+=4;goto B50ce46;
case 0x50ce4a:c.instructions+=3;goto B50ce4a;
case 0x50ce4b:c.instructions+=2;goto B50ce4b;
case 0x50ce4c:c.instructions+=1;goto B50ce4c;
case 0x50ce50:goto L50ce50;
case 0x50ce52:c.instructions+=3;goto B50ce52;
case 0x50ce54:c.instructions+=2;goto B50ce54;
case 0x50ce56:c.instructions+=1;goto B50ce56;
case 0x50ce58:goto L50ce58;
case 0x50ce5a:c.instructions+=1;goto B50ce5a;
case 0x50ce5c:goto L50ce5c;
case 0x50ce5f:c.instructions+=2;goto B50ce5f;
case 0x50ce62:c.instructions+=1;goto B50ce62;
case 0x50ce64:goto L50ce64;
case 0x50ce66:goto L50ce66;
case 0x50ce67:c.instructions+=2;goto B50ce67;
case 0x50ce69:c.instructions+=1;goto B50ce69;
case 0x50ce6b:goto L50ce6b;
case 0x50ce6d:c.instructions+=1;goto B50ce6d;
case 0x50ce6f:goto L50ce6f;
case 0x50ce72:c.instructions+=2;goto B50ce72;
case 0x50ce74:c.instructions+=1;goto B50ce74;
case 0x50ce76:goto L50ce76;
case 0x50ce78:c.instructions+=1;goto B50ce78;
case 0x50ce7a:goto L50ce7a;
case 0x50ce7d:c.instructions+=2;goto B50ce7d;
case 0x50ce7f:c.instructions+=1;goto B50ce7f;
case 0x50ce81:goto L50ce81;
case 0x50ce83:goto L50ce83;
case 0x50ce86:c.instructions+=2;goto B50ce86;
case 0x50ce88:c.instructions+=1;goto B50ce88;
case 0x50ce8a:goto L50ce8a;
case 0x50ce8c:c.instructions+=4;goto B50ce8c;
case 0x50ce8d:c.instructions+=3;goto B50ce8d;
case 0x50ce8e:c.instructions+=2;goto B50ce8e;
case 0x50ce8f:c.instructions+=1;goto B50ce8f;
case 0x50ce91:goto L50ce91;
case 0x50ce94:c.instructions+=2;goto B50ce94;
case 0x50ce95:c.instructions+=1;goto B50ce95;
case 0x50ce96:goto L50ce96;
case 0x50ce98:c.instructions+=2;goto B50ce98;
case 0x50ce99:c.instructions+=1;goto B50ce99;
case 0x50cea0:goto L50cea0;
case 0x50cea5:c.instructions+=1;goto B50cea5;
case 0x50ceb0:goto L50ceb0;
case 0x50ceb2:c.instructions+=2;goto B50ceb2;
case 0x50ceb4:c.instructions+=1;goto B50ceb4;
case 0x50ceb9:goto L50ceb9;
case 0x50cebc:c.instructions+=2;goto B50cebc;
case 0x50cec1:c.instructions+=1;goto B50cec1;
case 0x50ced0:goto L50ced0;
case 0x50ced3:c.instructions+=4;goto B50ced3;
case 0x50ced5:c.instructions+=3;goto B50ced5;
case 0x50ced7:c.instructions+=2;goto B50ced7;
case 0x50cedc:c.instructions+=1;goto B50cedc;
case 0x50cee0:goto L50cee0;
case 0x50cee4:c.instructions+=6;goto B50cee4;
case 0x50cee9:c.instructions+=5;goto B50cee9;
case 0x50ceeb:c.instructions+=4;goto B50ceeb;
case 0x50ceef:c.instructions+=3;goto B50ceef;
case 0x50cef1:c.instructions+=2;goto B50cef1;
case 0x50cef7:c.instructions+=1;goto B50cef7;
case 0x50cef9:goto L50cef9;
case 0x50cefb:c.instructions+=2;goto B50cefb;
case 0x50cf01:c.instructions+=1;goto B50cf01;
case 0x50cf02:goto L50cf02;
case 0x50cf07:c.instructions+=3;goto B50cf07;
case 0x50cf09:c.instructions+=2;goto B50cf09;
case 0x50cf0f:c.instructions+=1;goto B50cf0f;
case 0x50cf10:goto L50cf10;
case 0x50cf11:c.instructions+=9;goto B50cf11;
case 0x50cf16:c.instructions+=8;goto B50cf16;
case 0x50cf19:c.instructions+=7;goto B50cf19;
case 0x50cf1d:c.instructions+=6;goto B50cf1d;
case 0x50cf21:c.instructions+=5;goto B50cf21;
case 0x50cf27:c.instructions+=4;goto B50cf27;
case 0x50cf2d:c.instructions+=3;goto B50cf2d;
case 0x50cf2f:c.instructions+=2;goto B50cf2f;
case 0x50cf32:c.instructions+=1;goto B50cf32;
case 0x50cf34:goto L50cf34;
case 0x50cf39:c.instructions+=2;goto B50cf39;
case 0x50cf3a:c.instructions+=1;goto B50cf3a;
case 0x50cf3b:goto L50cf3b;
case 0x50cf3d:c.instructions+=2;goto B50cf3d;
case 0x50cf3e:c.instructions+=1;goto B50cf3e;
case 0x50cf40:goto L50cf40;
case 0x50cf41:c.instructions+=3;goto B50cf41;
case 0x50cf44:c.instructions+=2;goto B50cf44;
case 0x50cf49:c.instructions+=1;goto B50cf49;
case 0x50cf4e:goto L50cf4e;
case 0x50cf50:goto L50cf50;
case 0x50cf52:c.instructions+=3;goto B50cf52;
case 0x50cf57:c.instructions+=2;goto B50cf57;
case 0x50cf5c:c.instructions+=1;goto B50cf5c;
case 0x50cf61:goto L50cf61;
case 0x50cf63:goto L50cf63;
case 0x50cf65:c.instructions+=6;goto B50cf65;
case 0x50cf6c:c.instructions+=5;goto B50cf6c;
case 0x50cf73:c.instructions+=4;goto B50cf73;
case 0x50cf7a:c.instructions+=3;goto B50cf7a;
case 0x50cf7f:c.instructions+=2;goto B50cf7f;
case 0x50cf84:c.instructions+=1;goto B50cf84;
case 0x50cf89:goto L50cf89;
case 0x50cf8b:goto L50cf8b;
case 0x50cf8d:c.instructions+=6;goto B50cf8d;
case 0x50cf94:c.instructions+=5;goto B50cf94;
case 0x50cf9b:c.instructions+=4;goto B50cf9b;
case 0x50cfa2:c.instructions+=3;goto B50cfa2;
case 0x50cfa7:c.instructions+=2;goto B50cfa7;
case 0x50cfac:c.instructions+=1;goto B50cfac;
case 0x50cfb1:goto L50cfb1;
case 0x50cfb3:goto L50cfb3;
case 0x50cfb5:c.instructions+=3;goto B50cfb5;
case 0x50cfba:c.instructions+=2;goto B50cfba;
case 0x50cfbf:c.instructions+=1;goto B50cfbf;
case 0x50cfc4:goto L50cfc4;
case 0x50cfc6:goto L50cfc6;
case 0x50cfc8:c.instructions+=3;goto B50cfc8;
case 0x50cfca:c.instructions+=2;goto B50cfca;
case 0x50cfcf:c.instructions+=1;goto B50cfcf;
case 0x50cfd4:goto L50cfd4;
case 0x50cfd6:goto L50cfd6;
case 0x50cfd8:c.instructions+=4;goto B50cfd8;
case 0x50cfdf:c.instructions+=3;goto B50cfdf;
case 0x50cfe4:c.instructions+=2;goto B50cfe4;
case 0x50cfe9:c.instructions+=1;goto B50cfe9;
case 0x50cfee:goto L50cfee;
case 0x50cff0:goto L50cff0;
case 0x50cff2:c.instructions+=3;goto B50cff2;
case 0x50cff9:c.instructions+=2;goto B50cff9;
case 0x50cffe:c.instructions+=1;goto B50cffe;
default:missing_instruction(c.pc);}
B50c000:L50c000:{c.instructions+=5;NFSU2_TR(0x50c000);
u8 U[5];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B50c004:{NFSU2_TR(0x50c004);
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
B50c006:{NFSU2_TR(0x50c006);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B50c007:{NFSU2_TR(0x50c007);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B50c008:{NFSU2_TR(0x50c008);
if(r1(R+518)){{goto L50c015;}}
}
B50c00a:L50c00a:{c.instructions+=3;NFSU2_TR(0x50c00a);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50c00e:{NFSU2_TR(0x50c00e);
{u32 ea_=u32(r4(R+20)+u32(36u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50c011:{NFSU2_TR(0x50c011);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50c015:L50c015:{c.instructions+=5;NFSU2_TR(0x50c015);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50c019:{NFSU2_TR(0x50c019);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B50c01a:{NFSU2_TR(0x50c01a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B50c01b:{NFSU2_TR(0x50c01b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B50c01c:{NFSU2_TR(0x50c01c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50c020:L50c020:{c.instructions+=3;NFSU2_TR(0x50c020);
u8 U[5];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B50c024:{NFSU2_TR(0x50c024);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+0))&u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B50c026:{NFSU2_TR(0x50c026);
if(r1(R+518)){{goto L50c035;}}
}
B50c028:L50c028:{c.instructions+=3;NFSU2_TR(0x50c028);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50c02c:{NFSU2_TR(0x50c02c);
{u32 ea_=u32(u32(7895900u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B50c032:{NFSU2_TR(0x50c032);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50c035:L50c035:{c.instructions+=2;NFSU2_TR(0x50c035);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+0))&u32(u8(0x2ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B50c037:{NFSU2_TR(0x50c037);
if(r1(R+518)){{goto L50c042;}}
}
B50c039:L50c039:{c.instructions+=3;NFSU2_TR(0x50c039);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50c03d:{NFSU2_TR(0x50c03d);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B50c03f:{NFSU2_TR(0x50c03f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50c042:L50c042:{c.instructions+=2;NFSU2_TR(0x50c042);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50c048:{NFSU2_TR(0x50c048);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50c050:L50c050:{c.instructions+=3;NFSU2_TR(0x50c050);
u8 U[5];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B50c054:{NFSU2_TR(0x50c054);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+0))&u32(u8(0x4ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B50c056:{NFSU2_TR(0x50c056);
if(r1(R+518)){{goto L50c065;}}
}
B50c058:L50c058:{c.instructions+=3;NFSU2_TR(0x50c058);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50c05c:{NFSU2_TR(0x50c05c);
{u32 ea_=u32(u32(7895900u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B50c062:{NFSU2_TR(0x50c062);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50c065:L50c065:{c.instructions+=2;NFSU2_TR(0x50c065);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+0))&u32(u8(0x8ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B50c067:{NFSU2_TR(0x50c067);
if(r1(R+518)){{goto L50c072;}}
}
B50c069:L50c069:{c.instructions+=3;NFSU2_TR(0x50c069);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50c06d:{NFSU2_TR(0x50c06d);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B50c06f:{NFSU2_TR(0x50c06f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50c072:L50c072:{c.instructions+=2;NFSU2_TR(0x50c072);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50c078:{NFSU2_TR(0x50c078);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50c080:L50c080:{c.instructions+=6;NFSU2_TR(0x50c080);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B50c083:{NFSU2_TR(0x50c083);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50c084:{NFSU2_TR(0x50c084);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B50c088:{NFSU2_TR(0x50c088);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B50c08a:{NFSU2_TR(0x50c08a);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50c08e:{NFSU2_TR(0x50c08e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L50c099;}}
}
B50c090:L50c090:{c.instructions+=4;NFSU2_TR(0x50c090);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B50c092:{NFSU2_TR(0x50c092);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B50c093:{NFSU2_TR(0x50c093);
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
B50c096:{NFSU2_TR(0x50c096);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50c099:L50c099:{c.instructions+=2;NFSU2_TR(0x50c099);
u8 U[6];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x20ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B50c09e:{NFSU2_TR(0x50c09e);
if(r1(R+518)){{goto L50c0ac;}}
}
B50c0a0:L50c0a0:{c.instructions+=4;NFSU2_TR(0x50c0a0);
w4(R+0,u32(0x1ull));
}
B50c0a5:{NFSU2_TR(0x50c0a5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B50c0a6:{NFSU2_TR(0x50c0a6);
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
B50c0a9:{NFSU2_TR(0x50c0a9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50c0ac:L50c0ac:{c.instructions+=12;NFSU2_TR(0x50c0ac);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50c0ad:{NFSU2_TR(0x50c0ad);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50c0ae:{NFSU2_TR(0x50c0ae);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50c0af:{NFSU2_TR(0x50c0af);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B50c0b1:{NFSU2_TR(0x50c0b1);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+24))),2);
__builtin_memmove((R+28),(U+0),2);
}
B50c0b4:{NFSU2_TR(0x50c0b4);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B50c0b6:{NFSU2_TR(0x50c0b6);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
}
B50c0b8:{NFSU2_TR(0x50c0b8);
u8 U[2];
w2(U+0,u16(u32(r2(R+28))&u32(r2(R+28))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B50c0bb:{NFSU2_TR(0x50c0bb);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B50c0c3:{NFSU2_TR(0x50c0c3);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B50c0cb:{NFSU2_TR(0x50c0cb);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B50c0d3:{NFSU2_TR(0x50c0d3);
if(r1(R+518)){{goto L50c242;}}
}
B50c0d9:L50c0d9:{c.instructions+=1;NFSU2_TR(0x50c0d9);
__builtin_memmove((R+16),(R+16),4);
}
B50c0e0:L50c0e0:{c.instructions+=2;NFSU2_TR(0x50c0e0);
u8 U[4];
__builtin_memmove((U+0),(R+28),2);
w2(U+2,u16(u32(r2(U+0))-u32(u16(0xaull))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B50c0e4:{NFSU2_TR(0x50c0e4);
if(r1(R+518)){{goto L50c0ec;}}
}
B50c0e6:L50c0e6:{c.instructions+=2;NFSU2_TR(0x50c0e6);
u8 U[4];
__builtin_memmove((U+0),(R+28),2);
w2(U+2,u16(u32(r2(U+0))-u32(u16(0x5eull))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B50c0ea:{NFSU2_TR(0x50c0ea);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L50c10d;}}
}
B50c0ec:L50c0ec:{c.instructions+=2;NFSU2_TR(0x50c0ec);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B50c0ee:{NFSU2_TR(0x50c0ee);
if(r1(R+518)){{goto L50c10d;}}
}
B50c0f0:L50c0f0:{c.instructions+=8;NFSU2_TR(0x50c0f0);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B50c0f4:{NFSU2_TR(0x50c0f4);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B50c0f5:{NFSU2_TR(0x50c0f5);
__builtin_memmove((R+24),(R+20),4);
}
B50c0f7:{NFSU2_TR(0x50c0f7);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B50c0f9:{NFSU2_TR(0x50c0f9);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50c0fd:{NFSU2_TR(0x50c0fd);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B50c105:{NFSU2_TR(0x50c105);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x2ull))));
}
B50c108:{NFSU2_TR(0x50c108);
{goto L50c22b;}
}
B50c10d:L50c10d:{c.instructions+=2;NFSU2_TR(0x50c10d);
u8 U[4];
__builtin_memmove((U+0),(R+28),2);
w2(U+2,u16(u32(r2(U+0))-u32(u16(0xdull))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B50c111:{NFSU2_TR(0x50c111);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L50c11b;}}
}
B50c113:L50c113:{c.instructions+=2;NFSU2_TR(0x50c113);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x2ull))));
}
B50c116:{NFSU2_TR(0x50c116);
{goto L50c22d;}
}
B50c11b:L50c11b:{c.instructions+=2;NFSU2_TR(0x50c11b);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B50c11d:{NFSU2_TR(0x50c11d);
if(r1(R+518)){{goto L50c129;}}
}
B50c11f:L50c11f:{c.instructions+=2;NFSU2_TR(0x50c11f);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B50c127:{NFSU2_TR(0x50c127);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
}
B50c129:L50c129:{c.instructions+=2;NFSU2_TR(0x50c129);
u8 U[4];
__builtin_memmove((U+0),(R+28),2);
w2(U+2,u16(u32(r2(U+0))-u32(u16(0x20ull))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B50c12d:{NFSU2_TR(0x50c12d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L50c131;}}
}
B50c12f:L50c12f:{c.instructions+=1;NFSU2_TR(0x50c12f);
__builtin_memmove((R+20),(R+24),4);
}
B50c131:L50c131:{c.instructions+=4;NFSU2_TR(0x50c131);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50c135:{NFSU2_TR(0x50c135);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50c136:{NFSU2_TR(0x50c136);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50c137:{NFSU2_TR(0x50c137);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50c13cull));
TAIL_STATIC(0x50ba70u,50b);
}
B50c13c:L50c13c:{c.instructions+=3;NFSU2_TR(0x50c13c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B50c13f:{NFSU2_TR(0x50c13f);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B50c141:{NFSU2_TR(0x50c141);
if(r1(R+518)){{goto L50c157;}}
}
B50c143:L50c143:{c.instructions+=4;NFSU2_TR(0x50c143);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B50c147:{NFSU2_TR(0x50c147);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50c148:{NFSU2_TR(0x50c148);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50c149:{NFSU2_TR(0x50c149);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50c14eull));
TAIL_STATIC(0x50bac0u,50b);
}
B50c14e:L50c14e:{c.instructions+=4;NFSU2_TR(0x50c14e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B50c151:{NFSU2_TR(0x50c151);
__builtin_memmove((R+24),(R+0),4);
}
B50c153:{NFSU2_TR(0x50c153);
w1(R+12,u8(0x1ull));
}
B50c155:{NFSU2_TR(0x50c155);
{goto L50c1d6;}
}
B50c157:L50c157:{c.instructions+=2;NFSU2_TR(0x50c157);
u8 U[2];
__builtin_memmove((U+0),(R+28),2);
w1(R+512,u8((r2(U+0))<(u16(0xff80ull))));
}
B50c15c:{NFSU2_TR(0x50c15c);
if(r1(R+512)){{goto L50c164;}}
}
B50c15e:L50c15e:{c.instructions+=1;NFSU2_TR(0x50c15e);
w4(R+28,u32(u32(r4(R+28))&u32(u32(0xffull))));
}
B50c164:L50c164:{c.instructions+=2;NFSU2_TR(0x50c164);
u8 U[4];
__builtin_memmove((U+0),(R+28),2);
w2(U+2,u16(u32(r2(U+0))-u32(u16(0x99ull))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B50c169:{NFSU2_TR(0x50c169);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L50c172;}}
}
B50c16b:L50c16b:{c.instructions+=2;NFSU2_TR(0x50c16b);
w4(R+28,u32(0x2122ull));
}
B50c170:{NFSU2_TR(0x50c170);
{goto L50c17e;}
}
B50c172:L50c172:{c.instructions+=2;NFSU2_TR(0x50c172);
u8 U[4];
__builtin_memmove((U+0),(R+28),2);
w2(U+2,u16(u32(r2(U+0))-u32(u16(0x9cull))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B50c177:{NFSU2_TR(0x50c177);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L50c17e;}}
}
B50c179:L50c179:{c.instructions+=1;NFSU2_TR(0x50c179);
w4(R+28,u32(0x153ull));
}
B50c17e:L50c17e:{c.instructions+=4;NFSU2_TR(0x50c17e);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B50c182:{NFSU2_TR(0x50c182);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B50c185:{NFSU2_TR(0x50c185);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50c186:{NFSU2_TR(0x50c186);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50c18bull));
TAIL_STATIC(0x4fda70u,4fd);
}
B50c18b:L50c18b:{c.instructions+=3;NFSU2_TR(0x50c18b);
__builtin_memmove((R+28),(R+0),4);
}
B50c18d:{NFSU2_TR(0x50c18d);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B50c18f:{NFSU2_TR(0x50c18f);
if(r1(R+518)){{goto L50c1d3;}}
}
B50c191:L50c191:{c.instructions+=3;NFSU2_TR(0x50c191);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50c195:{NFSU2_TR(0x50c195);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B50c197:{NFSU2_TR(0x50c197);
if(r1(R+518)){{goto L50c1bb;}}
}
B50c199:L50c199:{c.instructions+=7;NFSU2_TR(0x50c199);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B50c19d:{NFSU2_TR(0x50c19d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B50c1a0:{NFSU2_TR(0x50c1a0);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B50c1a2:{NFSU2_TR(0x50c1a2);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B50c1a6:{NFSU2_TR(0x50c1a6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50c1a7:{NFSU2_TR(0x50c1a7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50c1a8:{NFSU2_TR(0x50c1a8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50c1adull));
TAIL_STATIC(0x6f45f0u,6f4);
}
B50c1ad:L50c1ad:{c.instructions+=4;NFSU2_TR(0x50c1ad);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50c1b1:{NFSU2_TR(0x50c1b1);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B50c1b5:{NFSU2_TR(0x50c1b5);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50c1b9:{NFSU2_TR(0x50c1b9);
{goto L50c1bf;}
}
B50c1bb:L50c1bb:{c.instructions+=1;NFSU2_TR(0x50c1bb);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50c1bf:L50c1bf:{c.instructions+=6;NFSU2_TR(0x50c1bf);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B50c1c3:{NFSU2_TR(0x50c1c3);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50c1c7:{NFSU2_TR(0x50c1c7);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B50c1cb:{NFSU2_TR(0x50c1cb);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B50c1cd:{NFSU2_TR(0x50c1cd);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50c1d1:{NFSU2_TR(0x50c1d1);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B50c1d3:L50c1d3:{c.instructions+=1;NFSU2_TR(0x50c1d3);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x2ull))));
}
B50c1d6:L50c1d6:{c.instructions+=3;NFSU2_TR(0x50c1d6);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50c1da:{NFSU2_TR(0x50c1da);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B50c1dc:{NFSU2_TR(0x50c1dc);
if(r1(R+518)){{goto L50c22d;}}
}
B50c1de:L50c1de:{c.instructions+=2;NFSU2_TR(0x50c1de);
u8 U[6];
__builtin_memmove((U+0),gp(u32(r4(R+24))),2);
__builtin_memmove((U+2),(U+0),2);
w2(U+4,u16(u32(r2(U+2))-u32(u16(0x0ull))));
w1(R+518,u8((r2(U+4))==(u16(0x0ull))));
}
B50c1e2:{NFSU2_TR(0x50c1e2);
if(r1(R+518)){{goto L50c22d;}}
}
B50c1e4:L50c1e4:{c.instructions+=4;NFSU2_TR(0x50c1e4);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B50c1e6:{NFSU2_TR(0x50c1e6);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50c1ea:{NFSU2_TR(0x50c1ea);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B50c1ee:{NFSU2_TR(0x50c1ee);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L50c1f6;}}
}
B50c1f0:L50c1f0:{c.instructions+=1;NFSU2_TR(0x50c1f0);
{u32 ea_=u32(u32(7882060u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50c1f6:L50c1f6:{c.instructions+=4;NFSU2_TR(0x50c1f6);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B50c1fa:{NFSU2_TR(0x50c1fa);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B50c1fc:{NFSU2_TR(0x50c1fc);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B50c1ff:{NFSU2_TR(0x50c1ff);
if(r1(R+514)){{goto L50c22d;}}
}
B50c201:L50c201:{c.instructions+=2;NFSU2_TR(0x50c201);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B50c203:{NFSU2_TR(0x50c203);
if(r1(R+518)){{goto L50c22d;}}
}
B50c205:L50c205:{c.instructions+=7;NFSU2_TR(0x50c205);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B50c209:{NFSU2_TR(0x50c209);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B50c20a:{NFSU2_TR(0x50c20a);
u8 U[6];
__builtin_memmove((U+0),gp(u32(r4(R+20))),2);
__builtin_memmove((U+2),(U+0),2);
w2(U+4,u16(u32(r2(U+2))-u32(u16(0x20ull))));
w1(R+518,u8((r2(U+4))==(u16(0x0ull))));
}
B50c20f:{NFSU2_TR(0x50c20f);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50c213:{NFSU2_TR(0x50c213);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B50c21b:{NFSU2_TR(0x50c21b);
__builtin_memmove((R+24),(R+20),4);
}
B50c21d:{NFSU2_TR(0x50c21d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L50c229;}}
}
B50c21f:L50c21f:{c.instructions+=1;NFSU2_TR(0x50c21f);
}
B50c220:L50c220:{c.instructions+=3;NFSU2_TR(0x50c220);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x2ull))));
}
B50c223:{NFSU2_TR(0x50c223);
u8 U[6];
__builtin_memmove((U+0),gp(u32(r4(R+24))),2);
__builtin_memmove((U+2),(U+0),2);
w2(U+4,u16(u32(r2(U+2))-u32(u16(0x20ull))));
w1(R+518,u8((r2(U+4))==(u16(0x0ull))));
}
B50c227:{NFSU2_TR(0x50c227);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x50c220u);}goto L50c220;}}
}
B50c229:L50c229:{c.instructions+=1;NFSU2_TR(0x50c229);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B50c22b:L50c22b:{c.instructions+=1;NFSU2_TR(0x50c22b);
w1(R+12,u8(0x1ull));
}
B50c22d:L50c22d:{c.instructions+=6;NFSU2_TR(0x50c22d);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B50c231:{NFSU2_TR(0x50c231);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+24))),2);
__builtin_memmove((R+28),(U+0),2);
}
B50c234:{NFSU2_TR(0x50c234);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B50c235:{NFSU2_TR(0x50c235);
u8 U[2];
w2(U+0,u16(u32(r2(R+28))&u32(r2(R+28))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B50c238:{NFSU2_TR(0x50c238);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50c23c:{NFSU2_TR(0x50c23c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x50c0e0u);}goto L50c0e0;}}
}
B50c242:L50c242:{c.instructions+=7;NFSU2_TR(0x50c242);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50c246:{NFSU2_TR(0x50c246);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B50c247:{NFSU2_TR(0x50c247);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B50c248:{NFSU2_TR(0x50c248);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B50c249:{NFSU2_TR(0x50c249);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B50c24a:{NFSU2_TR(0x50c24a);
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
B50c24d:{NFSU2_TR(0x50c24d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50c250:L50c250:{c.instructions+=8;NFSU2_TR(0x50c250);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50c251:{NFSU2_TR(0x50c251);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50c252:{NFSU2_TR(0x50c252);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B50c256:{NFSU2_TR(0x50c256);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
__builtin_memmove((R+8),(U+0),1);
}
B50c258:{NFSU2_TR(0x50c258);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B50c25a:{NFSU2_TR(0x50c25a);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B50c25c:{NFSU2_TR(0x50c25c);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B50c25e:{NFSU2_TR(0x50c25e);
if(r1(R+518)){{goto L50c277;}}
}
B50c260:L50c260:{c.instructions+=4;NFSU2_TR(0x50c260);
u8 U[9];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+8,u32(s32(s8(r1(U+8)))));
}
B50c264:{NFSU2_TR(0x50c264);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B50c265:{NFSU2_TR(0x50c265);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5cull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B50c268:{NFSU2_TR(0x50c268);
if(r1(R+518)){{goto L50c26f;}}
}
B50c26a:L50c26a:{c.instructions+=2;NFSU2_TR(0x50c26a);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2full))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B50c26d:{NFSU2_TR(0x50c26d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L50c271;}}
}
B50c26f:L50c26f:{c.instructions+=1;NFSU2_TR(0x50c26f);
__builtin_memmove((R+4),(R+0),4);
}
B50c271:L50c271:{c.instructions+=2;NFSU2_TR(0x50c271);
u8 U[11];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((U+9),(U+8),1);
w1(U+10,u8(u32(r1(U+9))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+10))==(u8(0x0ull))));
}
B50c275:{NFSU2_TR(0x50c275);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x50c260u);}goto L50c260;}}
}
B50c277:L50c277:{c.instructions+=3;NFSU2_TR(0x50c277);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B50c279:{NFSU2_TR(0x50c279);
__builtin_memmove((R+24),(R+0),4);
}
B50c27b:{NFSU2_TR(0x50c27b);
if(r1(R+518)){{goto L50c28d;}}
}
B50c27d:L50c27d:{c.instructions+=1;NFSU2_TR(0x50c27d);
__builtin_memmove((R+4),(R+4),4);
}
B50c280:L50c280:{c.instructions+=2;NFSU2_TR(0x50c280);
u8 U[11];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((U+9),(U+8),1);
w1(U+10,u8(u32(r1(U+9))-u32(u8(0x2eull))));
w1(R+518,u8((r1(U+10))==(u8(0x0ull))));
}
B50c284:{NFSU2_TR(0x50c284);
if(r1(R+518)){{goto L50c28b;}}
}
B50c286:L50c286:{c.instructions+=2;NFSU2_TR(0x50c286);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B50c287:{NFSU2_TR(0x50c287);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x50c280u);}goto L50c280;}}
}
B50c289:L50c289:{c.instructions+=1;NFSU2_TR(0x50c289);
{goto L50c28d;}
}
B50c28b:L50c28b:{c.instructions+=1;NFSU2_TR(0x50c28b);
__builtin_memmove((R+24),(R+0),4);
}
B50c28d:L50c28d:{c.instructions+=4;NFSU2_TR(0x50c28d);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50c291:{NFSU2_TR(0x50c291);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B50c293:{NFSU2_TR(0x50c293);
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
B50c295:{NFSU2_TR(0x50c295);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L50c2b5;}}
}
B50c297:L50c297:{c.instructions+=6;NFSU2_TR(0x50c297);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50c298:{NFSU2_TR(0x50c298);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50c299:{NFSU2_TR(0x50c299);
__builtin_memmove((R+8),(R+0),4);
}
B50c29b:{NFSU2_TR(0x50c29b);
__builtin_memmove((R+20),(R+24),4);
}
B50c29d:{NFSU2_TR(0x50c29d);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+4))));
}
B50c29f:{NFSU2_TR(0x50c29f);
w4(R+20,u32(u32(r4(R+20))-u32(r4(R+4))));
}
B50c2a1:L50c2a1:{c.instructions+=5;NFSU2_TR(0x50c2a1);
u8 U[9];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((R+12),(U+8),1);
}
B50c2a4:{NFSU2_TR(0x50c2a4);
u8 U[9];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+12),1);
s1(u32(r4(U+4)),r1(U+8));
}
B50c2a7:{NFSU2_TR(0x50c2a7);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B50c2a8:{NFSU2_TR(0x50c2a8);
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
B50c2aa:{NFSU2_TR(0x50c2aa);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x50c2a1u);}goto L50c2a1;}}
}
B50c2ac:L50c2ac:{c.instructions+=6;NFSU2_TR(0x50c2ac);
u8 U[9];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
w1(U+8,u8(0x0ull));
s1(u32(r4(U+4)),r1(U+8));
}
B50c2b0:{NFSU2_TR(0x50c2b0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B50c2b1:{NFSU2_TR(0x50c2b1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B50c2b2:{NFSU2_TR(0x50c2b2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B50c2b3:{NFSU2_TR(0x50c2b3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B50c2b4:{NFSU2_TR(0x50c2b4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50c2b5:L50c2b5:{c.instructions+=4;NFSU2_TR(0x50c2b5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B50c2b6:{NFSU2_TR(0x50c2b6);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
w1(U+8,u8(0x0ull));
s1(u32(r4(U+4)),r1(U+8));
}
B50c2ba:{NFSU2_TR(0x50c2ba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B50c2bb:{NFSU2_TR(0x50c2bb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50c2c0:L50c2c0:{c.instructions+=6;NFSU2_TR(0x50c2c0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50c2c1:{NFSU2_TR(0x50c2c1);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B50c2c5:{NFSU2_TR(0x50c2c5);
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
B50c2c7:{NFSU2_TR(0x50c2c7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50c2c8:{NFSU2_TR(0x50c2c8);
__builtin_memmove((R+28),(R+4),4);
}
B50c2ca:{NFSU2_TR(0x50c2ca);
if(r1(R+518)){{goto L50c2e3;}}
}
B50c2cc:L50c2cc:{c.instructions+=2;NFSU2_TR(0x50c2cc);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50c2cd:{NFSU2_TR(0x50c2cd);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B50c2d1:L50c2d1:{c.instructions+=6;NFSU2_TR(0x50c2d1);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffff8ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B50c2d5:{NFSU2_TR(0x50c2d5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B50c2d7:{NFSU2_TR(0x50c2d7);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+24),u32(0x1ull)));
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B50c2d8:{NFSU2_TR(0x50c2d8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50c2d9:{NFSU2_TR(0x50c2d9);
__builtin_memmove((R+4),(R+28),4);
}
B50c2db:{NFSU2_TR(0x50c2db);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50c2deull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B50c2de:L50c2de:{c.instructions+=2;NFSU2_TR(0x50c2de);
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
B50c2e0:{NFSU2_TR(0x50c2e0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x50c2d1u);}goto L50c2d1;}}
}
B50c2e2:L50c2e2:{c.instructions+=1;NFSU2_TR(0x50c2e2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B50c2e3:L50c2e3:{c.instructions+=3;NFSU2_TR(0x50c2e3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B50c2e4:{NFSU2_TR(0x50c2e4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B50c2e5:{NFSU2_TR(0x50c2e5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50c2f0:L50c2f0:{c.instructions+=1;NFSU2_TR(0x50c2f0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50c300:L50c300:{c.instructions+=6;NFSU2_TR(0x50c300);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50c304:{NFSU2_TR(0x50c304);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x100ull))));
}
B50c30a:{NFSU2_TR(0x50c30a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50c30b:{NFSU2_TR(0x50c30b);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B50c30d:{NFSU2_TR(0x50c30d);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B50c30f:{NFSU2_TR(0x50c30f);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L50c38f;}}
}
B50c311:L50c311:{c.instructions+=6;NFSU2_TR(0x50c311);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50c312:{NFSU2_TR(0x50c312);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50c313:{NFSU2_TR(0x50c313);
u8 U[8];
w4(U+0,u32(u32(u32(0x118ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B50c31a:{NFSU2_TR(0x50c31a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50c31b:{NFSU2_TR(0x50c31b);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
}
B50c31e:{NFSU2_TR(0x50c31e);
__builtin_memmove((R+20),(R+0),4);
}
B50c320:L50c320:{c.instructions+=5;NFSU2_TR(0x50c320);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50c323:{NFSU2_TR(0x50c323);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50c324:{NFSU2_TR(0x50c324);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B50c328:{NFSU2_TR(0x50c328);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50c329:{NFSU2_TR(0x50c329);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50c32eull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x50c250u);}goto L50c250;}
}
B50c32e:L50c32e:{c.instructions+=3;NFSU2_TR(0x50c32e);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B50c332:{NFSU2_TR(0x50c332);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50c333:{NFSU2_TR(0x50c333);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50c338ull));
TAIL_STATIC(0x43de20u,43d);
}
B50c338:L50c338:{c.instructions+=4;NFSU2_TR(0x50c338);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50c33b:{NFSU2_TR(0x50c33b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B50c33e:{NFSU2_TR(0x50c33e);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B50c33f:{NFSU2_TR(0x50c33f);
if(r1(R+518)){{goto L50c374;}}
}
B50c341:L50c341:{c.instructions+=2;NFSU2_TR(0x50c341);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B50c342:{NFSU2_TR(0x50c342);
if(r1(R+518)){{goto L50c36d;}}
}
B50c344:L50c344:{c.instructions+=2;NFSU2_TR(0x50c344);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B50c347:{NFSU2_TR(0x50c347);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L50c374;}}
}
B50c349:L50c349:{c.instructions+=3;NFSU2_TR(0x50c349);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50c34a:{NFSU2_TR(0x50c34a);
u8 U[4];
w4(U+0,u32(0x100ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50c34f:{NFSU2_TR(0x50c34f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50c354ull));
TAIL_STATIC(0x440820u,440);
}
B50c354:L50c354:{c.instructions+=6;NFSU2_TR(0x50c354);
u8 U[4];
w4(U+0,u32(0x100ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50c359:{NFSU2_TR(0x50c359);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B50c35d:{NFSU2_TR(0x50c35d);
__builtin_memmove((R+28),(R+0),4);
}
B50c35f:{NFSU2_TR(0x50c35f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50c360:{NFSU2_TR(0x50c360);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50c361:{NFSU2_TR(0x50c361);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50c366ull));
TAIL_STATIC(0x43dc00u,43d);
}
B50c366:L50c366:{c.instructions+=3;NFSU2_TR(0x50c366);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B50c369:{NFSU2_TR(0x50c369);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+24)),r4(U+0));
}
B50c36b:{NFSU2_TR(0x50c36b);
{goto L50c383;}
}
B50c36d:L50c36d:{c.instructions+=3;NFSU2_TR(0x50c36d);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B50c371:{NFSU2_TR(0x50c371);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50c372:{NFSU2_TR(0x50c372);
{goto L50c379;}
}
B50c374:L50c374:{c.instructions+=2;NFSU2_TR(0x50c374);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B50c378:{NFSU2_TR(0x50c378);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50c379:L50c379:{c.instructions+=1;NFSU2_TR(0x50c379);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50c37eull));
TAIL_STATIC(0x43db50u,43d);
}
B50c37e:L50c37e:{c.instructions+=2;NFSU2_TR(0x50c37e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B50c381:{NFSU2_TR(0x50c381);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B50c383:L50c383:{c.instructions+=4;NFSU2_TR(0x50c383);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50c386:{NFSU2_TR(0x50c386);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x18ull))));
}
B50c389:{NFSU2_TR(0x50c389);
w4(R+20,u32(u32(r4(R+20))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+20))==(u32(0x0ull))));
}
B50c38a:{NFSU2_TR(0x50c38a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x50c320u);}goto L50c320;}}
}
B50c38c:L50c38c:{c.instructions+=3;NFSU2_TR(0x50c38c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B50c38d:{NFSU2_TR(0x50c38d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B50c38e:{NFSU2_TR(0x50c38e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B50c38f:L50c38f:{c.instructions+=4;NFSU2_TR(0x50c38f);
w1(R+0,u8(0x1ull));
}
B50c391:{NFSU2_TR(0x50c391);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B50c392:{NFSU2_TR(0x50c392);
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
B50c398:{NFSU2_TR(0x50c398);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50c3a0:L50c3a0:{c.instructions+=4;NFSU2_TR(0x50c3a0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50c3a1:{NFSU2_TR(0x50c3a1);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B50c3a5:{NFSU2_TR(0x50c3a5);
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
B50c3a7:{NFSU2_TR(0x50c3a7);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L50c3c9;}}
}
B50c3a9:L50c3a9:{c.instructions+=3;NFSU2_TR(0x50c3a9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50c3aa:{NFSU2_TR(0x50c3aa);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B50c3ae:{NFSU2_TR(0x50c3ae);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
}
B50c3b1:L50c3b1:{c.instructions+=2;NFSU2_TR(0x50c3b1);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B50c3b5:{NFSU2_TR(0x50c3b5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L50c3c2;}}
}
B50c3b7:L50c3b7:{c.instructions+=3;NFSU2_TR(0x50c3b7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B50c3b9:{NFSU2_TR(0x50c3b9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50c3ba:{NFSU2_TR(0x50c3ba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50c3bfull));
TAIL_STATIC(0x440540u,440);
}
B50c3bf:L50c3bf:{c.instructions+=1;NFSU2_TR(0x50c3bf);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B50c3c2:L50c3c2:{c.instructions+=3;NFSU2_TR(0x50c3c2);
w1(R+512,carry<u32>(r4(R+24),u32(0x18ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x18ull))));
}
B50c3c5:{NFSU2_TR(0x50c3c5);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+28),u32(0x1ull)));
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B50c3c6:{NFSU2_TR(0x50c3c6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x50c3b1u);}goto L50c3b1;}}
}
B50c3c8:L50c3c8:{c.instructions+=1;NFSU2_TR(0x50c3c8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B50c3c9:L50c3c9:{c.instructions+=3;NFSU2_TR(0x50c3c9);
w1(R+0,u8(0x1ull));
}
B50c3cb:{NFSU2_TR(0x50c3cb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B50c3cc:{NFSU2_TR(0x50c3cc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50c3d0:L50c3d0:{c.instructions+=23;NFSU2_TR(0x50c3d0);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50c3d4:{NFSU2_TR(0x50c3d4);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B50c3d6:{NFSU2_TR(0x50c3d6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50c3d7:{NFSU2_TR(0x50c3d7);
w4(R+24,u32(0x3f800000ull));
}
B50c3dc:{NFSU2_TR(0x50c3dc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B50c3de:{NFSU2_TR(0x50c3de);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50c3e1:{NFSU2_TR(0x50c3e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50c3e4:{NFSU2_TR(0x50c3e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50c3e7:{NFSU2_TR(0x50c3e7);
u8 U[6];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+24),(U+4),2);
}
B50c3ec:{NFSU2_TR(0x50c3ec);
u8 U[8];
__builtin_memmove((U+4),(R+8),2);
w1(R+512,u8((r2(R+24))<(r2(U+4))));
w1(R+523,sborrow<u16>(r2(R+24),r2(U+4)));
w2(U+6,u16(u32(r2(R+24))-u32(r2(U+4))));
w1(R+519,u8(s16(r2(U+6))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+6))==(u16(0x0ull))));
w2(U+0,u16(u32(r2(U+6))&u32(u16(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r2(U+0)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B50c3ef:{NFSU2_TR(0x50c3ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50c3f2:{NFSU2_TR(0x50c3f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50c3f5:{NFSU2_TR(0x50c3f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50c3f8:{NFSU2_TR(0x50c3f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50c3fb:{NFSU2_TR(0x50c3fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50c3fe:{NFSU2_TR(0x50c3fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50c401:{NFSU2_TR(0x50c401);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50c404:{NFSU2_TR(0x50c404);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50c407:{NFSU2_TR(0x50c407);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50c40a:{NFSU2_TR(0x50c40a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50c40d:{NFSU2_TR(0x50c40d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50c410:{NFSU2_TR(0x50c410);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50c413:{NFSU2_TR(0x50c413);
if(r1(R+518)){{goto L50c488;}}
}
B50c415:L50c415:{c.instructions+=6;NFSU2_TR(0x50c415);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B50c418:{NFSU2_TR(0x50c418);
w4(R+24,u32(r2(R+24)));
}
B50c41b:{NFSU2_TR(0x50c41b);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(u32(0xd0ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B50c421:{NFSU2_TR(0x50c421);
u8 U[12];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B50c425:{NFSU2_TR(0x50c425);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B50c427:{NFSU2_TR(0x50c427);
if(r1(R+518)){{goto L50c488;}}
}
B50c429:L50c429:{c.instructions+=32;NFSU2_TR(0x50c429);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B50c42c:{NFSU2_TR(0x50c42c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B50c42e:{NFSU2_TR(0x50c42e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B50c431:{NFSU2_TR(0x50c431);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50c434:{NFSU2_TR(0x50c434);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B50c437:{NFSU2_TR(0x50c437);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50c43a:{NFSU2_TR(0x50c43a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B50c43d:{NFSU2_TR(0x50c43d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50c440:{NFSU2_TR(0x50c440);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B50c443:{NFSU2_TR(0x50c443);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50c446:{NFSU2_TR(0x50c446);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B50c449:{NFSU2_TR(0x50c449);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50c44c:{NFSU2_TR(0x50c44c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B50c44f:{NFSU2_TR(0x50c44f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50c452:{NFSU2_TR(0x50c452);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B50c455:{NFSU2_TR(0x50c455);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50c458:{NFSU2_TR(0x50c458);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B50c45b:{NFSU2_TR(0x50c45b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50c45e:{NFSU2_TR(0x50c45e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B50c461:{NFSU2_TR(0x50c461);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50c464:{NFSU2_TR(0x50c464);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B50c467:{NFSU2_TR(0x50c467);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50c46a:{NFSU2_TR(0x50c46a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B50c46d:{NFSU2_TR(0x50c46d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50c470:{NFSU2_TR(0x50c470);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B50c473:{NFSU2_TR(0x50c473);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50c476:{NFSU2_TR(0x50c476);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B50c479:{NFSU2_TR(0x50c479);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50c47c:{NFSU2_TR(0x50c47c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B50c47f:{NFSU2_TR(0x50c47f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50c482:{NFSU2_TR(0x50c482);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B50c485:{NFSU2_TR(0x50c485);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50c488:L50c488:{c.instructions+=3;NFSU2_TR(0x50c488);
w1(R+0,u8(0x1ull));
}
B50c48a:{NFSU2_TR(0x50c48a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B50c48b:{NFSU2_TR(0x50c48b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50c490:L50c490:{c.instructions+=3;NFSU2_TR(0x50c490);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50c494:{NFSU2_TR(0x50c494);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50c495:{NFSU2_TR(0x50c495);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50c49aull));
TAIL_STATIC(0x43c780u,43c);
}
B50c49a:L50c49a:{c.instructions+=2;NFSU2_TR(0x50c49a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B50c49b:{NFSU2_TR(0x50c49b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50c4a0:L50c4a0:{c.instructions+=7;NFSU2_TR(0x50c4a0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x40ull))));
}
B50c4a3:{NFSU2_TR(0x50c4a3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50c4a4:{NFSU2_TR(0x50c4a4);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B50c4a8:{NFSU2_TR(0x50c4a8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50c4a9:{NFSU2_TR(0x50c4a9);
u8 U[4];
w4(U+0,u32(0x799434ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50c4ae:{NFSU2_TR(0x50c4ae);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50c4af:{NFSU2_TR(0x50c4af);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50c4b4ull));
TAIL_STATIC(0x75d406u,75d);
}
B50c4b4:L50c4b4:{c.instructions+=3;NFSU2_TR(0x50c4b4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B50c4b7:{NFSU2_TR(0x50c4b7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B50c4b9:{NFSU2_TR(0x50c4b9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L50c53a;}}
}
B50c4bb:L50c4bb:{c.instructions+=3;NFSU2_TR(0x50c4bb);
__builtin_memmove((R+0),gp(0x80057f),1);
}
B50c4c0:{NFSU2_TR(0x50c4c0);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B50c4c2:{NFSU2_TR(0x50c4c2);
if(r1(R+518)){{goto L50c543;}}
}
B50c4c4:L50c4c4:{c.instructions+=7;NFSU2_TR(0x50c4c4);
u8 U[5];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B50c4c8:{NFSU2_TR(0x50c4c8);
__builtin_memmove((R+0),(R+12),4);
}
B50c4ca:{NFSU2_TR(0x50c4ca);
u8 U[5];
w4(U+0,u32(u32(u32(0x9ull))+u32(r4(R+16))));
w1(U+4,u8(0x3aull));
s1(u32(r4(U+0)),r1(U+4));
}
B50c4cf:{NFSU2_TR(0x50c4cf);
u8 U[5];
w4(U+0,u32(u32(u32(0xaull))+u32(r4(R+16))));
w1(U+4,u8(0x5cull));
s1(u32(r4(U+0)),r1(U+4));
}
B50c4d4:{NFSU2_TR(0x50c4d4);
u8 U[5];
w4(U+0,u32(u32(u32(0xbull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B50c4d9:{NFSU2_TR(0x50c4d9);
__builtin_memmove((R+8),(R+0),4);
}
B50c4db:{NFSU2_TR(0x50c4db);
{goto L50c4e0;}
}
B50c4e0:L50c4e0:{c.instructions+=4;NFSU2_TR(0x50c4e0);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B50c4e2:{NFSU2_TR(0x50c4e2);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B50c4e3:{NFSU2_TR(0x50c4e3);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B50c4e5:{NFSU2_TR(0x50c4e5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x50c4e0u);}goto L50c4e0;}}
}
B50c4e7:L50c4e7:{c.instructions+=5;NFSU2_TR(0x50c4e7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50c4e8:{NFSU2_TR(0x50c4e8);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B50c4ec:{NFSU2_TR(0x50c4ec);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B50c4ee:{NFSU2_TR(0x50c4ee);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
}
B50c4ef:{NFSU2_TR(0x50c4ef);
}
B50c4f0:L50c4f0:{c.instructions+=4;NFSU2_TR(0x50c4f0);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B50c4f3:{NFSU2_TR(0x50c4f3);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B50c4f4:{NFSU2_TR(0x50c4f4);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B50c4f6:{NFSU2_TR(0x50c4f6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x50c4f0u);}goto L50c4f0;}}
}
B50c4f8:L50c4f8:{c.instructions+=3;NFSU2_TR(0x50c4f8);
__builtin_memmove((R+4),(R+0),4);
}
B50c4fa:{NFSU2_TR(0x50c4fa);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B50c4fd:{NFSU2_TR(0x50c4fd);
__builtin_memmove((R+24),(R+8),4);
}
B50c4ff:L50c4ff:{c.instructions+=1;NFSU2_TR(0x50c4ff);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L50c501;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x50c4ffu);}goto L50c4ff;}
}
B50c501:L50c501:{c.instructions+=5;NFSU2_TR(0x50c501);
__builtin_memmove((R+4),(R+0),4);
}
B50c503:{NFSU2_TR(0x50c503);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B50c507:{NFSU2_TR(0x50c507);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B50c50a:{NFSU2_TR(0x50c50a);
u8 U[4];
w4(U+0,u32(0x799434ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50c50f:{NFSU2_TR(0x50c50f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50c510:L50c510:{c.instructions+=1;NFSU2_TR(0x50c510);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L50c512;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x50c510u);}goto L50c510;}
}
B50c512:L50c512:{c.instructions+=1;NFSU2_TR(0x50c512);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50c517ull));
TAIL_STATIC(0x75d406u,75d);
}
B50c517:L50c517:{c.instructions+=4;NFSU2_TR(0x50c517);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B50c51a:{NFSU2_TR(0x50c51a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B50c51c:{NFSU2_TR(0x50c51c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B50c51d:{NFSU2_TR(0x50c51d);
if(r1(R+518)){{goto L50c543;}}
}
B50c51f:L50c51f:{c.instructions+=5;NFSU2_TR(0x50c51f);
__builtin_memmove((R+24),(R+12),4);
}
B50c521:{NFSU2_TR(0x50c521);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B50c525:{NFSU2_TR(0x50c525);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B50c529:{NFSU2_TR(0x50c529);
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+8))));
}
B50c52b:{NFSU2_TR(0x50c52b);
{goto L50c530;}
}
B50c530:L50c530:{c.instructions+=5;NFSU2_TR(0x50c530);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((R+8),(U+0),1);
}
B50c532:{NFSU2_TR(0x50c532);
u8 U[9];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),1);
s1(u32(r4(U+4)),r1(U+8));
}
B50c535:{NFSU2_TR(0x50c535);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B50c536:{NFSU2_TR(0x50c536);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B50c538:{NFSU2_TR(0x50c538);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x50c530u);}goto L50c530;}}
}
B50c53a:L50c53a:{c.instructions+=2;NFSU2_TR(0x50c53a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50c53b:{NFSU2_TR(0x50c53b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50c540ull));
TAIL_STATIC(0x75d359u,75d);
}
B50c540:L50c540:{c.instructions+=1;NFSU2_TR(0x50c540);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B50c543:L50c543:{c.instructions+=4;NFSU2_TR(0x50c543);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B50c544:{NFSU2_TR(0x50c544);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B50c545:{NFSU2_TR(0x50c545);
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
B50c548:{NFSU2_TR(0x50c548);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50c550:L50c550:{c.instructions+=15;NFSU2_TR(0x50c550);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50c552:{NFSU2_TR(0x50c552);
u8 U[4];
w4(U+0,u32(0x776f88ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50c557:{NFSU2_TR(0x50c557);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50c55d:{NFSU2_TR(0x50c55d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50c55e:{NFSU2_TR(0x50c55e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50c565:{NFSU2_TR(0x50c565);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B50c568:{NFSU2_TR(0x50c568);
u8 U[4];
w4(U+0,u32(0x79ab9cull));
s4(u32(r4(R+16)),r4(U+0));
}
B50c570:{NFSU2_TR(0x50c570);
__builtin_memmove((R+0),gp(0x8384c4),4);
}
B50c575:{NFSU2_TR(0x50c575);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B50c578:{NFSU2_TR(0x50c578);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50c57c:{NFSU2_TR(0x50c57c);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B50c580:{NFSU2_TR(0x50c580);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50c583:{NFSU2_TR(0x50c583);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B50c585:{NFSU2_TR(0x50c585);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B50c58d:{NFSU2_TR(0x50c58d);
if(r1(R+518)){{goto L50c594;}}
}
B50c58f:L50c58f:{c.instructions+=2;NFSU2_TR(0x50c58f);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
}
B50c592:{NFSU2_TR(0x50c592);
{goto L50c596;}
}
B50c594:L50c594:{c.instructions+=1;NFSU2_TR(0x50c594);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B50c596:L50c596:{c.instructions+=5;NFSU2_TR(0x50c596);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B50c599:{NFSU2_TR(0x50c599);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50c59a:{NFSU2_TR(0x50c59a);
u8 U[4];
w4(U+0,u32(0x79aba4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50c59f:{NFSU2_TR(0x50c59f);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50c5a3:{NFSU2_TR(0x50c5a3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50c5a8ull));
TAIL_STATIC(0x50d510u,50d);
}
B50c5a8:L50c5a8:{c.instructions+=4;NFSU2_TR(0x50c5a8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B50c5ab:{NFSU2_TR(0x50c5ab);
__builtin_memmove((R+0),(R+16),4);
}
B50c5af:{NFSU2_TR(0x50c5af);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50c5b0:{NFSU2_TR(0x50c5b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50c5b5ull));
TAIL_STATIC(0x504880u,504);
}
B50c5b5:L50c5b5:{c.instructions+=4;NFSU2_TR(0x50c5b5);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B50c5b9:{NFSU2_TR(0x50c5b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50c5c0:{NFSU2_TR(0x50c5c0);
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
B50c5c3:{NFSU2_TR(0x50c5c3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50c5d0:L50c5d0:{c.instructions+=3;NFSU2_TR(0x50c5d0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50c5d4:{NFSU2_TR(0x50c5d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7f91d4ull))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B50c5db:{NFSU2_TR(0x50c5db);
w4(R+4,u32(0x15ull));
}
B50c5e0:L50c5e0:{c.instructions+=4;NFSU2_TR(0x50c5e0);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+0)),r4(U+0));
}
B50c5e6:{NFSU2_TR(0x50c5e6);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
}
B50c5e9:{NFSU2_TR(0x50c5e9);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B50c5ea:{NFSU2_TR(0x50c5ea);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x50c5e0u);}goto L50c5e0;}}
}
B50c5ec:L50c5ec:{c.instructions+=1;NFSU2_TR(0x50c5ec);
TAIL_STATIC(0x4cb480u,4cb);
}
B50c600:L50c600:{c.instructions+=1;NFSU2_TR(0x50c600);
w4(R+8,u32(0x7f91d4ull));
}
B50c605:L50c605:{c.instructions+=3;NFSU2_TR(0x50c605);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B50c607:{NFSU2_TR(0x50c607);
__builtin_memmove((R+4),(R+8),4);
}
B50c609:{NFSU2_TR(0x50c609);
__builtin_memmove((R+16),(R+16),4);
}
B50c610:L50c610:{c.instructions+=2;NFSU2_TR(0x50c610);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+10),u32(0x0ull)));
w4(U+14,u32(u32(r4(U+10))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B50c613:{NFSU2_TR(0x50c613);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L50c62c;}}
}
B50c615:L50c615:{c.instructions+=4;NFSU2_TR(0x50c615);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B50c616:{NFSU2_TR(0x50c616);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B50c619:{NFSU2_TR(0x50c619);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B50c61c:{NFSU2_TR(0x50c61c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x50c610u);}goto L50c610;}}
}
B50c61e:L50c61e:{c.instructions+=3;NFSU2_TR(0x50c61e);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1cull))));
}
B50c621:{NFSU2_TR(0x50c621);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x7f9420ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7f9420ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B50c627:{NFSU2_TR(0x50c627);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x50c605u);}goto L50c605;}}
}
B50c629:L50c629:{c.instructions+=2;NFSU2_TR(0x50c629);
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
B50c62b:{NFSU2_TR(0x50c62b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50c62c:L50c62c:{c.instructions+=2;NFSU2_TR(0x50c62c);
w1(R+0,u8(0x1ull));
}
B50c62e:{NFSU2_TR(0x50c62e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50c630:L50c630:{c.instructions+=9;NFSU2_TR(0x50c630);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50c631:{NFSU2_TR(0x50c631);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B50c635:{NFSU2_TR(0x50c635);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50c636:{NFSU2_TR(0x50c636);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B50c63a:{NFSU2_TR(0x50c63a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50c63b:{NFSU2_TR(0x50c63b);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B50c63f:{NFSU2_TR(0x50c63f);
w4(R+4,u32(0x7f91d0ull));
}
B50c644:{NFSU2_TR(0x50c644);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7f91d4ull))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B50c64b:{NFSU2_TR(0x50c64b);
{goto L50c650;}
}
B50c650:L50c650:{c.instructions+=2;NFSU2_TR(0x50c650);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B50c653:{NFSU2_TR(0x50c653);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L50c66b;}}
}
B50c655:L50c655:{c.instructions+=6;NFSU2_TR(0x50c655);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B50c657:{NFSU2_TR(0x50c657);
w4(R+8,u32(r1(R+12)));
}
B50c65a:{NFSU2_TR(0x50c65a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50c65b:{NFSU2_TR(0x50c65b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50c65c:{NFSU2_TR(0x50c65c);
u8 U[4];
w4(U+0,u32(0x79abdcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50c661:{NFSU2_TR(0x50c661);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50c666ull));
TAIL_STATIC(0x50d510u,50d);
}
B50c666:L50c666:{c.instructions+=2;NFSU2_TR(0x50c666);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B50c669:{NFSU2_TR(0x50c669);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+24)),r4(U+0));
}
B50c66b:L50c66b:{c.instructions+=4;NFSU2_TR(0x50c66b);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1cull))));
}
B50c66e:{NFSU2_TR(0x50c66e);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1cull))));
}
B50c671:{NFSU2_TR(0x50c671);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0x7f941cull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x7f941cull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x7f941cull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B50c677:{NFSU2_TR(0x50c677);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x50c650u);}goto L50c650;}}
}
B50c679:L50c679:{c.instructions+=4;NFSU2_TR(0x50c679);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B50c67a:{NFSU2_TR(0x50c67a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B50c67b:{NFSU2_TR(0x50c67b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B50c67c:{NFSU2_TR(0x50c67c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50c680:L50c680:{c.instructions+=3;NFSU2_TR(0x50c680);
__builtin_memmove((R+0),gp(0x8384b8),4);
}
B50c685:{NFSU2_TR(0x50c685);
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
B50c687:{NFSU2_TR(0x50c687);
if(r1(R+518)){{goto L50c6c2;}}
}
B50c689:L50c689:{c.instructions+=3;NFSU2_TR(0x50c689);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50c68a:{NFSU2_TR(0x50c68a);
w4(R+24,u32(0x7f91d4ull));
}
B50c68f:{NFSU2_TR(0x50c68f);
}
B50c690:L50c690:{c.instructions+=3;NFSU2_TR(0x50c690);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50c693:{NFSU2_TR(0x50c693);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50c694:{NFSU2_TR(0x50c694);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50c699ull));
TAIL_STATIC(0x57d590u,57d);
}
B50c699:L50c699:{c.instructions+=10;NFSU2_TR(0x50c699);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B50c69b:{NFSU2_TR(0x50c69b);
__builtin_memmove((R+8),(R+24),4);
}
B50c69d:{NFSU2_TR(0x50c69d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B50c69f:{NFSU2_TR(0x50c69f);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50c6a2:{NFSU2_TR(0x50c6a2);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1cull))));
}
B50c6a5:{NFSU2_TR(0x50c6a5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B50c6a8:{NFSU2_TR(0x50c6a8);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x7f9420ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7f9420ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B50c6ae:{NFSU2_TR(0x50c6ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50c6b1:{NFSU2_TR(0x50c6b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50c6b4:{NFSU2_TR(0x50c6b4);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x50c690u);}goto L50c690;}}
}
B50c6b6:L50c6b6:{c.instructions+=3;NFSU2_TR(0x50c6b6);
u8 U[4];
w4(U+0,u32(0x34ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50c6b8:{NFSU2_TR(0x50c6b8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50c6b9:{NFSU2_TR(0x50c6b9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50c6beull));
TAIL_STATIC(0x57c330u,57c);
}
B50c6be:L50c6be:{c.instructions+=2;NFSU2_TR(0x50c6be);
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
B50c6c1:{NFSU2_TR(0x50c6c1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B50c6c2:L50c6c2:{c.instructions+=2;NFSU2_TR(0x50c6c2);
s4(0x8384b8,u32(0x0ull));
}
B50c6cc:{NFSU2_TR(0x50c6cc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50c6d0:L50c6d0:{c.instructions+=7;NFSU2_TR(0x50c6d0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50c6d1:{NFSU2_TR(0x50c6d1);
u8 U[5];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B50c6d5:{NFSU2_TR(0x50c6d5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50c6d6:{NFSU2_TR(0x50c6d6);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B50c6d8:{NFSU2_TR(0x50c6d8);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B50c6db:{NFSU2_TR(0x50c6db);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B50c6dd:{NFSU2_TR(0x50c6dd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L50c6e3;}}
}
B50c6df:L50c6df:{c.instructions+=2;NFSU2_TR(0x50c6df);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B50c6e1:{NFSU2_TR(0x50c6e1);
{goto L50c705;}
}
B50c6e3:L50c6e3:{c.instructions+=2;NFSU2_TR(0x50c6e3);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B50c6e6:{NFSU2_TR(0x50c6e6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L50c6ef;}}
}
B50c6e8:L50c6e8:{c.instructions+=2;NFSU2_TR(0x50c6e8);
w4(R+0,u32(0x1ull));
}
B50c6ed:{NFSU2_TR(0x50c6ed);
{goto L50c705;}
}
B50c6ef:L50c6ef:{c.instructions+=2;NFSU2_TR(0x50c6ef);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x2ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B50c6f2:{NFSU2_TR(0x50c6f2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L50c6fb;}}
}
B50c6f4:L50c6f4:{c.instructions+=2;NFSU2_TR(0x50c6f4);
w4(R+0,u32(0x2ull));
}
B50c6f9:{NFSU2_TR(0x50c6f9);
{goto L50c705;}
}
B50c6fb:L50c6fb:{c.instructions+=2;NFSU2_TR(0x50c6fb);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x3ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B50c6fe:{NFSU2_TR(0x50c6fe);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L50c705;}}
}
B50c700:L50c700:{c.instructions+=1;NFSU2_TR(0x50c700);
w4(R+0,u32(0x3ull));
}
B50c705:L50c705:{c.instructions+=2;NFSU2_TR(0x50c705);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50c706:{NFSU2_TR(0x50c706);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50c70bull));
TAIL_STATIC(0x571a80u,571);
}
B50c70b:L50c70b:{c.instructions+=3;NFSU2_TR(0x50c70b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B50c70e:{NFSU2_TR(0x50c70e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B50c710:{NFSU2_TR(0x50c710);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L50c734;}}
}
B50c712:L50c712:{c.instructions+=3;NFSU2_TR(0x50c712);
w4(R+0,u32(r1(R+12)));
}
B50c715:{NFSU2_TR(0x50c715);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7f91d4ull))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B50c71c:{NFSU2_TR(0x50c71c);
w4(R+4,u32(0x15ull));
}
B50c721:L50c721:{c.instructions+=4;NFSU2_TR(0x50c721);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+0)),r4(U+0));
}
B50c727:{NFSU2_TR(0x50c727);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
}
B50c72a:{NFSU2_TR(0x50c72a);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B50c72b:{NFSU2_TR(0x50c72b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x50c721u);}goto L50c721;}}
}
B50c72d:L50c72d:{c.instructions+=4;NFSU2_TR(0x50c72d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B50c72e:{NFSU2_TR(0x50c72e);
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
B50c730:{NFSU2_TR(0x50c730);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B50c731:{NFSU2_TR(0x50c731);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50c734:L50c734:{c.instructions+=3;NFSU2_TR(0x50c734);
w4(R+4,u32(r1(R+12)));
}
B50c737:{NFSU2_TR(0x50c737);
w4(R+0,u32(0x7f91e8ull));
}
B50c73c:{NFSU2_TR(0x50c73c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7f91f0ull))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B50c743:L50c743:{c.instructions+=3;NFSU2_TR(0x50c743);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B50c746:{NFSU2_TR(0x50c746);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B50c748:{NFSU2_TR(0x50c748);
if(r1(R+518)){{goto L50c74d;}}
}
B50c74a:L50c74a:{c.instructions+=1;NFSU2_TR(0x50c74a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+24,u32(u32(r4(R+24))|u32(r4(U+4))));
}
B50c74d:L50c74d:{c.instructions+=2;NFSU2_TR(0x50c74d);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B50c750:{NFSU2_TR(0x50c750);
if(r1(R+518)){{goto L50c754;}}
}
B50c752:L50c752:{c.instructions+=1;NFSU2_TR(0x50c752);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(R+24,u32(u32(r4(R+24))|u32(r4(U+0))));
}
B50c754:L50c754:{c.instructions+=3;NFSU2_TR(0x50c754);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B50c757:{NFSU2_TR(0x50c757);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B50c759:{NFSU2_TR(0x50c759);
if(r1(R+518)){{goto L50c75e;}}
}
B50c75b:L50c75b:{c.instructions+=1;NFSU2_TR(0x50c75b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+24,u32(u32(r4(R+24))|u32(r4(U+4))));
}
B50c75e:L50c75e:{c.instructions+=3;NFSU2_TR(0x50c75e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B50c761:{NFSU2_TR(0x50c761);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B50c763:{NFSU2_TR(0x50c763);
if(r1(R+518)){{goto L50c768;}}
}
B50c765:L50c765:{c.instructions+=1;NFSU2_TR(0x50c765);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+24,u32(u32(r4(R+24))|u32(r4(U+4))));
}
B50c768:L50c768:{c.instructions+=3;NFSU2_TR(0x50c768);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B50c76b:{NFSU2_TR(0x50c76b);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B50c76d:{NFSU2_TR(0x50c76d);
if(r1(R+518)){{goto L50c772;}}
}
B50c76f:L50c76f:{c.instructions+=1;NFSU2_TR(0x50c76f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+24,u32(u32(r4(R+24))|u32(r4(U+4))));
}
B50c772:L50c772:{c.instructions+=3;NFSU2_TR(0x50c772);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B50c775:{NFSU2_TR(0x50c775);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B50c777:{NFSU2_TR(0x50c777);
if(r1(R+518)){{goto L50c77c;}}
}
B50c779:L50c779:{c.instructions+=1;NFSU2_TR(0x50c779);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+24,u32(u32(r4(R+24))|u32(r4(U+4))));
}
B50c77c:L50c77c:{c.instructions+=3;NFSU2_TR(0x50c77c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B50c782:{NFSU2_TR(0x50c782);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B50c784:{NFSU2_TR(0x50c784);
if(r1(R+518)){{goto L50c78c;}}
}
B50c786:L50c786:{c.instructions+=1;NFSU2_TR(0x50c786);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+24,u32(u32(r4(R+24))|u32(r4(U+4))));
}
B50c78c:L50c78c:{c.instructions+=4;NFSU2_TR(0x50c78c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xc4ull))));
}
B50c791:{NFSU2_TR(0x50c791);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xc4ull))));
}
B50c797:{NFSU2_TR(0x50c797);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x7f9434ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x7f9434ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x7f9434ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B50c79c:{NFSU2_TR(0x50c79c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x50c743u);}goto L50c743;}}
}
B50c79e:L50c79e:{c.instructions+=4;NFSU2_TR(0x50c79e);
__builtin_memmove((R+0),(R+24),4);
}
B50c7a0:{NFSU2_TR(0x50c7a0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B50c7a1:{NFSU2_TR(0x50c7a1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B50c7a2:{NFSU2_TR(0x50c7a2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50c7b0:L50c7b0:{c.instructions+=2;NFSU2_TR(0x50c7b0);
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
B50c7b2:{NFSU2_TR(0x50c7b2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50c7c0:L50c7c0:{c.instructions+=4;NFSU2_TR(0x50c7c0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50c7c4:{NFSU2_TR(0x50c7c4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50c7c5:{NFSU2_TR(0x50c7c5);
u8 U[4];
w4(U+0,u32(0x786e70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50c7ca:{NFSU2_TR(0x50c7ca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50c7cfull));
TAIL_STATIC(0x50d510u,50d);
}
B50c7cf:L50c7cf:{c.instructions+=2;NFSU2_TR(0x50c7cf);
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
B50c7d2:{NFSU2_TR(0x50c7d2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50c7e0:L50c7e0:{c.instructions+=9;NFSU2_TR(0x50c7e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50c7e6:{NFSU2_TR(0x50c7e6);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50c7e8:{NFSU2_TR(0x50c7e8);
u8 U[4];
w4(U+0,u32(0x776fa8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50c7ed:{NFSU2_TR(0x50c7ed);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50c7ee:{NFSU2_TR(0x50c7ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50c7f5:{NFSU2_TR(0x50c7f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50c7f8:{NFSU2_TR(0x50c7f8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B50c7fb:{NFSU2_TR(0x50c7fb);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xdcull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B50c800:{NFSU2_TR(0x50c800);
if(r1(R+518)){{goto L50c846;}}
}
B50c802:L50c802:{c.instructions+=6;NFSU2_TR(0x50c802);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50c803:{NFSU2_TR(0x50c803);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
w4(U+4,u32(0x79abf0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B50c80b:{NFSU2_TR(0x50c80b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B50c80e:{NFSU2_TR(0x50c80e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B50c810:{NFSU2_TR(0x50c810);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B50c818:{NFSU2_TR(0x50c818);
if(r1(R+518)){{goto L50c845;}}
}
B50c81a:L50c81a:{c.instructions+=1;NFSU2_TR(0x50c81a);
__builtin_memmove((R+12),(R+12),4);
}
B50c820:L50c820:{c.instructions+=3;NFSU2_TR(0x50c820);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50c823:{NFSU2_TR(0x50c823);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B50c825:{NFSU2_TR(0x50c825);
if(r1(R+518)){{goto L50c82c;}}
}
B50c827:L50c827:{c.instructions+=2;NFSU2_TR(0x50c827);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
}
B50c82a:{NFSU2_TR(0x50c82a);
{goto L50c82e;}
}
B50c82c:L50c82c:{c.instructions+=1;NFSU2_TR(0x50c82c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B50c82e:L50c82e:{c.instructions+=5;NFSU2_TR(0x50c82e);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50c832:{NFSU2_TR(0x50c832);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B50c836:{NFSU2_TR(0x50c836);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50c837:{NFSU2_TR(0x50c837);
__builtin_memmove((R+4),(R+24),4);
}
B50c839:{NFSU2_TR(0x50c839);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50c83eull));
TAIL_STATIC(0x504880u,504);
}
B50c83e:L50c83e:{c.instructions+=3;NFSU2_TR(0x50c83e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B50c841:{NFSU2_TR(0x50c841);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B50c843:{NFSU2_TR(0x50c843);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x50c820u);}goto L50c820;}}
}
B50c845:L50c845:{c.instructions+=1;NFSU2_TR(0x50c845);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B50c846:L50c846:{c.instructions+=4;NFSU2_TR(0x50c846);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B50c84a:{NFSU2_TR(0x50c84a);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50c851:{NFSU2_TR(0x50c851);
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
B50c854:{NFSU2_TR(0x50c854);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50c860:L50c860:{c.instructions+=4;NFSU2_TR(0x50c860);
{u32 ea_=u32(u32(8872916u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B50c866:{NFSU2_TR(0x50c866);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50c867:{NFSU2_TR(0x50c867);
{u32 ea_=u32(u32(7961936u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50c86d:{NFSU2_TR(0x50c86d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50c872ull));
TAIL_STATIC(0x75bed4u,75b);
}
B50c872:L50c872:{c.instructions+=5;NFSU2_TR(0x50c872);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B50c876:{NFSU2_TR(0x50c876);
u8 U[2];
__builtin_memmove((U+0),(R+0),2);
s2(u32(r4(R+24)),r2(U+0));
}
B50c879:{NFSU2_TR(0x50c879);
{u32 ea_=u32(u32(8872920u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B50c87f:{NFSU2_TR(0x50c87f);
{u32 ea_=u32(u32(7920176u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50c885:{NFSU2_TR(0x50c885);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50c88aull));
TAIL_STATIC(0x75bed4u,75b);
}
B50c88a:L50c88a:{c.instructions+=4;NFSU2_TR(0x50c88a);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B50c88e:{NFSU2_TR(0x50c88e);
__builtin_memmove((R+0),gp(0x8763f0),1);
}
B50c893:{NFSU2_TR(0x50c893);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B50c895:{NFSU2_TR(0x50c895);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L50c8b1;}}
}
B50c897:L50c897:{c.instructions+=7;NFSU2_TR(0x50c897);
w4(R+0,u32(m1(0x8763f4)));
}
B50c89e:{NFSU2_TR(0x50c89e);
w4(R+4,u32(m1(0x8763f1)));
}
B50c8a5:{NFSU2_TR(0x50c8a5);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+0))));
}
B50c8a7:{NFSU2_TR(0x50c8a7);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B50c8a9:{NFSU2_TR(0x50c8a9);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B50c8ad:{NFSU2_TR(0x50c8ad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B50c8ae:{NFSU2_TR(0x50c8ae);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50c8b1:L50c8b1:{c.instructions+=7;NFSU2_TR(0x50c8b1);
w4(R+0,u32(m1(0x8763f1)));
}
B50c8b8:{NFSU2_TR(0x50c8b8);
w4(R+4,u32(m1(0x8763f4)));
}
B50c8bf:{NFSU2_TR(0x50c8bf);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+0))));
}
B50c8c1:{NFSU2_TR(0x50c8c1);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B50c8c3:{NFSU2_TR(0x50c8c3);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B50c8c7:{NFSU2_TR(0x50c8c7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B50c8c8:{NFSU2_TR(0x50c8c8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50c8d0:L50c8d0:{c.instructions+=3;NFSU2_TR(0x50c8d0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50c8d4:{NFSU2_TR(0x50c8d4);
__builtin_memmove(gp(0x8384c8),(R+0),4);
}
B50c8d9:{NFSU2_TR(0x50c8d9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50c8e0:L50c8e0:{c.instructions+=4;NFSU2_TR(0x50c8e0);
__builtin_memmove((R+0),gp(0x8384c4),4);
}
B50c8e5:{NFSU2_TR(0x50c8e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50c8e8:{NFSU2_TR(0x50c8e8);
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
B50c8ea:{NFSU2_TR(0x50c8ea);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L50c8ed;}}
}
B50c8ec:L50c8ec:{c.instructions+=1;NFSU2_TR(0x50c8ec);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50c8ed:L50c8ed:{c.instructions+=2;NFSU2_TR(0x50c8ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50c8f3:{NFSU2_TR(0x50c8f3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50c900:L50c900:{c.instructions+=4;NFSU2_TR(0x50c900);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50c901:{NFSU2_TR(0x50c901);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B50c905:{NFSU2_TR(0x50c905);
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
B50c907:{NFSU2_TR(0x50c907);
if(r1(R+518)){{goto L50c950;}}
}
B50c909:L50c909:{c.instructions+=5;NFSU2_TR(0x50c909);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50c90c:{NFSU2_TR(0x50c90c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50c90d:{NFSU2_TR(0x50c90d);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
}
B50c90f:{NFSU2_TR(0x50c90f);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B50c911:{NFSU2_TR(0x50c911);
if(r1(R+518)){{goto L50c915;}}
}
B50c913:L50c913:{c.instructions+=1;NFSU2_TR(0x50c913);
w1(R+12,u8(0x1ull));
}
B50c915:L50c915:{c.instructions+=3;NFSU2_TR(0x50c915);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B50c919:{NFSU2_TR(0x50c919);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B50c91c:{NFSU2_TR(0x50c91c);
if(r1(R+518)){{goto L50c929;}}
}
B50c91e:L50c91e:{c.instructions+=3;NFSU2_TR(0x50c91e);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x400000ull))));
}
B50c923:{NFSU2_TR(0x50c923);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50c926:{NFSU2_TR(0x50c926);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50c929:L50c929:{c.instructions+=3;NFSU2_TR(0x50c929);
__builtin_memmove((R+4),gp(0x838478),4);
}
B50c92f:{NFSU2_TR(0x50c92f);
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
B50c931:{NFSU2_TR(0x50c931);
if(r1(R+518)){{goto L50c938;}}
}
B50c933:L50c933:{c.instructions+=3;NFSU2_TR(0x50c933);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B50c935:{NFSU2_TR(0x50c935);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50c936:{NFSU2_TR(0x50c936);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50c938ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B50c938:L50c938:{c.instructions+=7;NFSU2_TR(0x50c938);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B50c93b:{NFSU2_TR(0x50c93b);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xfffffffdull))));
}
B50c93e:{NFSU2_TR(0x50c93e);
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
B50c940:{NFSU2_TR(0x50c940);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50c943:{NFSU2_TR(0x50c943);
__builtin_memmove((R+0),(R+8),4);
}
B50c945:{NFSU2_TR(0x50c945);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B50c946:{NFSU2_TR(0x50c946);
if(r1(R+518)){{goto L50c950;}}
}
B50c948:L50c948:{c.instructions+=2;NFSU2_TR(0x50c948);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x400000ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B50c94d:{NFSU2_TR(0x50c94d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50c950:L50c950:{c.instructions+=2;NFSU2_TR(0x50c950);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B50c951:{NFSU2_TR(0x50c951);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50c960:L50c960:{c.instructions+=7;NFSU2_TR(0x50c960);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B50c964:{NFSU2_TR(0x50c964);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B50c968:{NFSU2_TR(0x50c968);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B50c96c:{NFSU2_TR(0x50c96c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50c96d:{NFSU2_TR(0x50c96d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50c96e:{NFSU2_TR(0x50c96e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50c96f:{NFSU2_TR(0x50c96f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50c974ull));
TAIL_STATIC(0x43fbc0u,43f);
}
B50c974:L50c974:{c.instructions+=2;NFSU2_TR(0x50c974);
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
B50c977:{NFSU2_TR(0x50c977);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50c980:L50c980:{c.instructions+=3;NFSU2_TR(0x50c980);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50c984:{NFSU2_TR(0x50c984);
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
B50c986:{NFSU2_TR(0x50c986);
if(r1(R+518)){{goto L50c98c;}}
}
B50c988:L50c988:{c.instructions+=2;NFSU2_TR(0x50c988);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50c98b:{NFSU2_TR(0x50c98b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50c98c:L50c98c:{c.instructions+=2;NFSU2_TR(0x50c98c);
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
B50c98e:{NFSU2_TR(0x50c98e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50c990:L50c990:{c.instructions+=3;NFSU2_TR(0x50c990);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50c994:{NFSU2_TR(0x50c994);
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
B50c996:{NFSU2_TR(0x50c996);
if(r1(R+518)){{goto L50c9ab;}}
}
B50c998:L50c998:{c.instructions+=3;NFSU2_TR(0x50c998);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B50c99c:{NFSU2_TR(0x50c99c);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+4))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+4)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B50c99f:{NFSU2_TR(0x50c99f);
if(r1(R+518)){{goto L50c9ab;}}
}
B50c9a1:L50c9a1:{c.instructions+=2;NFSU2_TR(0x50c9a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50c9a4:{NFSU2_TR(0x50c9a4);
u8 U[14];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0x400000ull))));
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
B50c9ab:L50c9ab:{c.instructions+=1;NFSU2_TR(0x50c9ab);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50c9b0:L50c9b0:{c.instructions+=4;NFSU2_TR(0x50c9b0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50c9b1:{NFSU2_TR(0x50c9b1);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B50c9b5:{NFSU2_TR(0x50c9b5);
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
B50c9b7:{NFSU2_TR(0x50c9b7);
if(r1(R+518)){{goto L50c9da;}}
}
B50c9b9:L50c9b9:{c.instructions+=6;NFSU2_TR(0x50c9b9);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50c9bd:{NFSU2_TR(0x50c9bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B50c9c0:{NFSU2_TR(0x50c9c0);
u8 U[4];
w4(U+0,u32(0x100ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50c9c5:{NFSU2_TR(0x50c9c5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50c9c6:{NFSU2_TR(0x50c9c6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50c9c7:{NFSU2_TR(0x50c9c7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50c9ccull));
TAIL_STATIC(0x43dc00u,43d);
}
B50c9cc:L50c9cc:{c.instructions+=4;NFSU2_TR(0x50c9cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50c9cf:{NFSU2_TR(0x50c9cf);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B50c9d2:{NFSU2_TR(0x50c9d2);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x400000ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B50c9d7:{NFSU2_TR(0x50c9d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50c9da:L50c9da:{c.instructions+=2;NFSU2_TR(0x50c9da);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B50c9db:{NFSU2_TR(0x50c9db);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50c9e0:L50c9e0:{c.instructions+=3;NFSU2_TR(0x50c9e0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50c9e4:{NFSU2_TR(0x50c9e4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B50c9e6:{NFSU2_TR(0x50c9e6);
if(r1(R+518)){{goto L50c9f4;}}
}
B50c9e8:L50c9e8:{c.instructions+=2;NFSU2_TR(0x50c9e8);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
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
B50c9ec:{NFSU2_TR(0x50c9ec);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L50c9f4;}}
}
B50c9ee:L50c9ee:{c.instructions+=2;NFSU2_TR(0x50c9ee);
w4(R+0,u32(0x1ull));
}
B50c9f3:{NFSU2_TR(0x50c9f3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50c9f4:L50c9f4:{c.instructions+=2;NFSU2_TR(0x50c9f4);
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
B50c9f6:{NFSU2_TR(0x50c9f6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50ca00:L50ca00:{c.instructions+=3;NFSU2_TR(0x50ca00);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50ca04:{NFSU2_TR(0x50ca04);
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
B50ca06:{NFSU2_TR(0x50ca06);
if(r1(R+518)){{goto L50ca44;}}
}
B50ca08:L50ca08:{c.instructions+=3;NFSU2_TR(0x50ca08);
__builtin_memmove((R+4),gp(0x8384d4),4);
}
B50ca0e:{NFSU2_TR(0x50ca0e);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B50ca10:{NFSU2_TR(0x50ca10);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L50ca18;}}
}
B50ca12:L50ca12:{c.instructions+=2;NFSU2_TR(0x50ca12);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B50ca16:{NFSU2_TR(0x50ca16);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L50ca1f;}}
}
B50ca18:L50ca18:{c.instructions+=1;NFSU2_TR(0x50ca18);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0x400001ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B50ca1f:L50ca1f:{c.instructions+=2;NFSU2_TR(0x50ca1f);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
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
B50ca23:{NFSU2_TR(0x50ca23);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L50ca44;}}
}
B50ca25:L50ca25:{c.instructions+=5;NFSU2_TR(0x50ca25);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50ca26:{NFSU2_TR(0x50ca26);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B50ca29:{NFSU2_TR(0x50ca29);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50ca2c:{NFSU2_TR(0x50ca2c);
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
B50ca2e:{NFSU2_TR(0x50ca2e);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L50ca43;}}
}
B50ca30:L50ca30:{c.instructions+=2;NFSU2_TR(0x50ca30);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50ca31:{NFSU2_TR(0x50ca31);
__builtin_memmove((R+28),(R+0),4);
}
B50ca33:L50ca33:{c.instructions+=2;NFSU2_TR(0x50ca33);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50ca34:{NFSU2_TR(0x50ca34);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50ca39ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x50ca00u);}goto L50ca00;}
}
B50ca39:L50ca39:{c.instructions+=4;NFSU2_TR(0x50ca39);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B50ca3c:{NFSU2_TR(0x50ca3c);
w1(R+512,carry<u32>(r4(R+16),u32(0x4ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B50ca3f:{NFSU2_TR(0x50ca3f);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+28),u32(0x1ull)));
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B50ca40:{NFSU2_TR(0x50ca40);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x50ca33u);}goto L50ca33;}}
}
B50ca42:L50ca42:{c.instructions+=1;NFSU2_TR(0x50ca42);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B50ca43:L50ca43:{c.instructions+=1;NFSU2_TR(0x50ca43);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B50ca44:L50ca44:{c.instructions+=1;NFSU2_TR(0x50ca44);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50ca50:L50ca50:{c.instructions+=3;NFSU2_TR(0x50ca50);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50ca54:{NFSU2_TR(0x50ca54);
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
B50ca56:{NFSU2_TR(0x50ca56);
if(r1(R+518)){{goto L50caa1;}}
}
B50ca58:L50ca58:{c.instructions+=3;NFSU2_TR(0x50ca58);
__builtin_memmove((R+4),gp(0x8384d4),4);
}
B50ca5e:{NFSU2_TR(0x50ca5e);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B50ca60:{NFSU2_TR(0x50ca60);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L50ca68;}}
}
B50ca62:L50ca62:{c.instructions+=2;NFSU2_TR(0x50ca62);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B50ca66:{NFSU2_TR(0x50ca66);
if(r1(R+518)){{goto L50ca77;}}
}
B50ca68:L50ca68:{c.instructions+=4;NFSU2_TR(0x50ca68);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B50ca6b:{NFSU2_TR(0x50ca6b);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfffffffeull))));
}
B50ca6e:{NFSU2_TR(0x50ca6e);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x400000ull))));
}
B50ca74:{NFSU2_TR(0x50ca74);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50ca77:L50ca77:{c.instructions+=2;NFSU2_TR(0x50ca77);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
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
B50ca7b:{NFSU2_TR(0x50ca7b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L50caa1;}}
}
B50ca7d:L50ca7d:{c.instructions+=5;NFSU2_TR(0x50ca7d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50ca7e:{NFSU2_TR(0x50ca7e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B50ca81:{NFSU2_TR(0x50ca81);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50ca84:{NFSU2_TR(0x50ca84);
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
B50ca86:{NFSU2_TR(0x50ca86);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L50caa0;}}
}
B50ca88:L50ca88:{c.instructions+=3;NFSU2_TR(0x50ca88);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50ca89:{NFSU2_TR(0x50ca89);
__builtin_memmove((R+28),(R+0),4);
}
B50ca8b:{NFSU2_TR(0x50ca8b);
{goto L50ca90;}
}
B50ca90:L50ca90:{c.instructions+=2;NFSU2_TR(0x50ca90);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50ca91:{NFSU2_TR(0x50ca91);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50ca96ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x50ca50u);}goto L50ca50;}
}
B50ca96:L50ca96:{c.instructions+=4;NFSU2_TR(0x50ca96);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B50ca99:{NFSU2_TR(0x50ca99);
w1(R+512,carry<u32>(r4(R+16),u32(0x4ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B50ca9c:{NFSU2_TR(0x50ca9c);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+28),u32(0x1ull)));
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B50ca9d:{NFSU2_TR(0x50ca9d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x50ca90u);}goto L50ca90;}}
}
B50ca9f:L50ca9f:{c.instructions+=1;NFSU2_TR(0x50ca9f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B50caa0:L50caa0:{c.instructions+=1;NFSU2_TR(0x50caa0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B50caa1:L50caa1:{c.instructions+=1;NFSU2_TR(0x50caa1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50cab0:L50cab0:{c.instructions+=5;NFSU2_TR(0x50cab0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50cab4:{NFSU2_TR(0x50cab4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B50cab6:{NFSU2_TR(0x50cab6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50cab7:{NFSU2_TR(0x50cab7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50cab8:{NFSU2_TR(0x50cab8);
if(r1(R+518)){{goto L50cadc;}}
}
B50caba:L50caba:{c.instructions+=3;NFSU2_TR(0x50caba);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B50cabd:{NFSU2_TR(0x50cabd);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B50cabf:{NFSU2_TR(0x50cabf);
if(r1(R+518)){{goto L50cadc;}}
}
B50cac1:L50cac1:{c.instructions+=1;NFSU2_TR(0x50cac1);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B50cac5:L50cac5:{c.instructions+=2;NFSU2_TR(0x50cac5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50cac6:{NFSU2_TR(0x50cac6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50cacbull));
TAIL_STATIC(0x505450u,505);
}
B50cacb:L50cacb:{c.instructions+=4;NFSU2_TR(0x50cacb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B50cace:{NFSU2_TR(0x50cace);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B50cad1:{NFSU2_TR(0x50cad1);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B50cad3:{NFSU2_TR(0x50cad3);
if(r1(R+518)){{goto L50cae1;}}
}
B50cad5:L50cad5:{c.instructions+=3;NFSU2_TR(0x50cad5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B50cad8:{NFSU2_TR(0x50cad8);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B50cada:{NFSU2_TR(0x50cada);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x50cac5u);}goto L50cac5;}}
}
B50cadc:L50cadc:{c.instructions+=4;NFSU2_TR(0x50cadc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B50cadd:{NFSU2_TR(0x50cadd);
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
B50cadf:{NFSU2_TR(0x50cadf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B50cae0:{NFSU2_TR(0x50cae0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50cae1:L50cae1:{c.instructions+=2;NFSU2_TR(0x50cae1);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B50cae3:{NFSU2_TR(0x50cae3);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x50cadcu);}goto L50cadc;}}
}
B50cae5:L50cae5:{c.instructions+=3;NFSU2_TR(0x50cae5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50cae8:{NFSU2_TR(0x50cae8);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
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
B50caeb:{NFSU2_TR(0x50caeb);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x50cadcu);}goto L50cadc;}}
}
B50caed:L50caed:{c.instructions+=4;NFSU2_TR(0x50caed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B50caee:{NFSU2_TR(0x50caee);
w1(R+0,u8(0x1ull));
}
B50caf0:{NFSU2_TR(0x50caf0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B50caf1:{NFSU2_TR(0x50caf1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50cb00:L50cb00:{c.instructions+=3;NFSU2_TR(0x50cb00);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50cb04:{NFSU2_TR(0x50cb04);
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
B50cb06:{NFSU2_TR(0x50cb06);
if(r1(R+518)){{goto L50cb3e;}}
}
B50cb08:L50cb08:{c.instructions+=4;NFSU2_TR(0x50cb08);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B50cb0b:{NFSU2_TR(0x50cb0b);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B50cb0c:{NFSU2_TR(0x50cb0c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B50cb0f:{NFSU2_TR(0x50cb0f);
if(r1(R+518)){{goto L50cb1b;}}
}
B50cb11:L50cb11:{c.instructions+=2;NFSU2_TR(0x50cb11);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x6ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B50cb14:{NFSU2_TR(0x50cb14);
if(r1(R+518)){{goto L50cb1b;}}
}
B50cb16:L50cb16:{c.instructions+=2;NFSU2_TR(0x50cb16);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x2ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B50cb19:{NFSU2_TR(0x50cb19);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L50cb29;}}
}
B50cb1b:L50cb1b:{c.instructions+=4;NFSU2_TR(0x50cb1b);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B50cb1f:{NFSU2_TR(0x50cb1f);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50cb22:{NFSU2_TR(0x50cb22);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B50cb26:{NFSU2_TR(0x50cb26);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50cb29:L50cb29:{c.instructions+=5;NFSU2_TR(0x50cb29);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B50cb2d:{NFSU2_TR(0x50cb2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50cb30:{NFSU2_TR(0x50cb30);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B50cb34:{NFSU2_TR(0x50cb34);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50cb37:{NFSU2_TR(0x50cb37);
u8 U[14];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0x400000ull))));
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
B50cb3e:L50cb3e:{c.instructions+=1;NFSU2_TR(0x50cb3e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50cb40:L50cb40:{c.instructions+=5;NFSU2_TR(0x50cb40);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50cb41:{NFSU2_TR(0x50cb41);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50cb42:{NFSU2_TR(0x50cb42);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B50cb46:{NFSU2_TR(0x50cb46);
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
B50cb48:{NFSU2_TR(0x50cb48);
if(r1(R+518)){{goto L50cbe2;}}
}
B50cb4e:L50cb4e:{c.instructions+=9;NFSU2_TR(0x50cb4e);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50cb52:{NFSU2_TR(0x50cb52);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50cb53:{NFSU2_TR(0x50cb53);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B50cb56:{NFSU2_TR(0x50cb56);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50cb59:{NFSU2_TR(0x50cb59);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50cb5d:{NFSU2_TR(0x50cb5d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50cb60:{NFSU2_TR(0x50cb60);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B50cb61:{NFSU2_TR(0x50cb61);
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
B50cb64:{NFSU2_TR(0x50cb64);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L50cba2;}}
}
B50cb66:L50cb66:{c.instructions+=2;NFSU2_TR(0x50cb66);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x50cbf4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B50cb6d:{NFSU2_TR(0x50cb6d);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x50cbe8ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B50cb74:L50cb74:{c.instructions+=6;NFSU2_TR(0x50cb74);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B50cb77:{NFSU2_TR(0x50cb77);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B50cb79:{NFSU2_TR(0x50cb79);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50cb7b:{NFSU2_TR(0x50cb7b);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50cb7d:{NFSU2_TR(0x50cb7d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50cb7e:{NFSU2_TR(0x50cb7e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50cb83ull));
TAIL_STATIC(0x4901d0u,490);
}
B50cb83:L50cb83:{c.instructions+=7;NFSU2_TR(0x50cb83);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B50cb87:{NFSU2_TR(0x50cb87);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50cb8b:{NFSU2_TR(0x50cb8b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B50cb8e:{NFSU2_TR(0x50cb8e);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B50cb92:{NFSU2_TR(0x50cb92);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B50cb96:{NFSU2_TR(0x50cb96);
{u32 ea_=u32(r4(R+28)+u32(56u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B50cb99:{NFSU2_TR(0x50cb99);
{goto L50cba2;}
}
B50cb9b:L50cb9b:{c.instructions+=2;NFSU2_TR(0x50cb9b);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B50cb9f:{NFSU2_TR(0x50cb9f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50cba2:L50cba2:{c.instructions+=7;NFSU2_TR(0x50cba2);
{u32 ea_=u32(u32(7894420u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50cba8:{NFSU2_TR(0x50cba8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B50cba9:{NFSU2_TR(0x50cba9);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B50cbab:{NFSU2_TR(0x50cbab);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B50cbaf:{NFSU2_TR(0x50cbaf);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B50cbb1:{NFSU2_TR(0x50cbb1);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B50cbb4:{NFSU2_TR(0x50cbb4);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L50cbd5;}}
}
B50cbb6:L50cbb6:{c.instructions+=7;NFSU2_TR(0x50cbb6);
{u32 ea_=u32(u32(7894420u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50cbbc:{NFSU2_TR(0x50cbbc);
__asm__ volatile(".byte 0xd8,0xe9":::"memory");
}
B50cbbe:{NFSU2_TR(0x50cbbe);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B50cbc2:{NFSU2_TR(0x50cbc2);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B50cbc4:{NFSU2_TR(0x50cbc4);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B50cbc6:{NFSU2_TR(0x50cbc6);
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
B50cbc9:{NFSU2_TR(0x50cbc9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L50cbe2;}}
}
B50cbcb:L50cbcb:{c.instructions+=4;NFSU2_TR(0x50cbcb);
u8 U[14];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0x400000ull))));
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
B50cbd2:{NFSU2_TR(0x50cbd2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B50cbd3:{NFSU2_TR(0x50cbd3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B50cbd4:{NFSU2_TR(0x50cbd4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50cbd5:L50cbd5:{c.instructions+=4;NFSU2_TR(0x50cbd5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50cbd8:{NFSU2_TR(0x50cbd8);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B50cbda:{NFSU2_TR(0x50cbda);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x400000ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B50cbdf:{NFSU2_TR(0x50cbdf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50cbe2:L50cbe2:{c.instructions+=3;NFSU2_TR(0x50cbe2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B50cbe3:{NFSU2_TR(0x50cbe3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B50cbe4:{NFSU2_TR(0x50cbe4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50cc00:L50cc00:{c.instructions+=5;NFSU2_TR(0x50cc00);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50cc01:{NFSU2_TR(0x50cc01);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50cc02:{NFSU2_TR(0x50cc02);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B50cc06:{NFSU2_TR(0x50cc06);
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
B50cc08:{NFSU2_TR(0x50cc08);
if(r1(R+518)){{goto L50cca2;}}
}
B50cc0e:L50cc0e:{c.instructions+=9;NFSU2_TR(0x50cc0e);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50cc12:{NFSU2_TR(0x50cc12);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50cc13:{NFSU2_TR(0x50cc13);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B50cc16:{NFSU2_TR(0x50cc16);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50cc19:{NFSU2_TR(0x50cc19);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50cc1d:{NFSU2_TR(0x50cc1d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50cc20:{NFSU2_TR(0x50cc20);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B50cc21:{NFSU2_TR(0x50cc21);
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
B50cc24:{NFSU2_TR(0x50cc24);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L50cc62;}}
}
B50cc26:L50cc26:{c.instructions+=2;NFSU2_TR(0x50cc26);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x50ccb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B50cc2d:{NFSU2_TR(0x50cc2d);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x50cca8ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B50cc34:L50cc34:{c.instructions+=6;NFSU2_TR(0x50cc34);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B50cc37:{NFSU2_TR(0x50cc37);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B50cc39:{NFSU2_TR(0x50cc39);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50cc3b:{NFSU2_TR(0x50cc3b);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50cc3d:{NFSU2_TR(0x50cc3d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50cc3e:{NFSU2_TR(0x50cc3e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50cc43ull));
TAIL_STATIC(0x4901d0u,490);
}
B50cc43:L50cc43:{c.instructions+=7;NFSU2_TR(0x50cc43);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x46ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B50cc47:{NFSU2_TR(0x50cc47);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50cc4b:{NFSU2_TR(0x50cc4b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B50cc4e:{NFSU2_TR(0x50cc4e);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B50cc52:{NFSU2_TR(0x50cc52);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B50cc56:{NFSU2_TR(0x50cc56);
{u32 ea_=u32(r4(R+28)+u32(60u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B50cc59:{NFSU2_TR(0x50cc59);
{goto L50cc62;}
}
B50cc5b:L50cc5b:{c.instructions+=2;NFSU2_TR(0x50cc5b);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B50cc5f:{NFSU2_TR(0x50cc5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50cc62:L50cc62:{c.instructions+=7;NFSU2_TR(0x50cc62);
{u32 ea_=u32(u32(7894420u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50cc68:{NFSU2_TR(0x50cc68);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B50cc69:{NFSU2_TR(0x50cc69);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B50cc6b:{NFSU2_TR(0x50cc6b);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B50cc6f:{NFSU2_TR(0x50cc6f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B50cc71:{NFSU2_TR(0x50cc71);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B50cc74:{NFSU2_TR(0x50cc74);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L50cc95;}}
}
B50cc76:L50cc76:{c.instructions+=7;NFSU2_TR(0x50cc76);
{u32 ea_=u32(u32(7894420u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50cc7c:{NFSU2_TR(0x50cc7c);
__asm__ volatile(".byte 0xd8,0xe9":::"memory");
}
B50cc7e:{NFSU2_TR(0x50cc7e);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B50cc82:{NFSU2_TR(0x50cc82);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B50cc84:{NFSU2_TR(0x50cc84);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B50cc86:{NFSU2_TR(0x50cc86);
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
B50cc89:{NFSU2_TR(0x50cc89);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L50cca2;}}
}
B50cc8b:L50cc8b:{c.instructions+=4;NFSU2_TR(0x50cc8b);
u8 U[14];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0x400000ull))));
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
B50cc92:{NFSU2_TR(0x50cc92);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B50cc93:{NFSU2_TR(0x50cc93);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B50cc94:{NFSU2_TR(0x50cc94);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50cc95:L50cc95:{c.instructions+=4;NFSU2_TR(0x50cc95);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50cc98:{NFSU2_TR(0x50cc98);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B50cc9a:{NFSU2_TR(0x50cc9a);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x400000ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B50cc9f:{NFSU2_TR(0x50cc9f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50cca2:L50cca2:{c.instructions+=3;NFSU2_TR(0x50cca2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B50cca3:{NFSU2_TR(0x50cca3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B50cca4:{NFSU2_TR(0x50cca4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50ccc0:L50ccc0:{c.instructions+=4;NFSU2_TR(0x50ccc0);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50ccc4:{NFSU2_TR(0x50ccc4);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B50ccc6:{NFSU2_TR(0x50ccc6);
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
B50ccc8:{NFSU2_TR(0x50ccc8);
if(r1(R+518)){{goto L50ccec;}}
}
B50ccca:L50ccca:{c.instructions+=14;NFSU2_TR(0x50ccca);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B50cccd:{NFSU2_TR(0x50cccd);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50ccd1:{NFSU2_TR(0x50ccd1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50ccd2:{NFSU2_TR(0x50ccd2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+24),(U+0),4);
}
B50ccd4:{NFSU2_TR(0x50ccd4);
__builtin_memmove((R+8),(R+0),4);
}
B50ccd6:{NFSU2_TR(0x50ccd6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+8)),r4(U+0));
}
B50ccd8:{NFSU2_TR(0x50ccd8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B50ccdb:{NFSU2_TR(0x50ccdb);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50ccde:{NFSU2_TR(0x50ccde);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B50cce1:{NFSU2_TR(0x50cce1);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50cce4:{NFSU2_TR(0x50cce4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B50cce7:{NFSU2_TR(0x50cce7);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50ccea:{NFSU2_TR(0x50ccea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B50cceb:{NFSU2_TR(0x50cceb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50ccec:L50ccec:{c.instructions+=6;NFSU2_TR(0x50ccec);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50ccf0:{NFSU2_TR(0x50ccf0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50ccf3:{NFSU2_TR(0x50ccf3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50ccf6:{NFSU2_TR(0x50ccf6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50ccf9:{NFSU2_TR(0x50ccf9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B50ccfb:{NFSU2_TR(0x50ccfb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50cd00:L50cd00:{c.instructions+=18;NFSU2_TR(0x50cd00);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B50cd03:{NFSU2_TR(0x50cd03);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50cd07:{NFSU2_TR(0x50cd07);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B50cd0a:{NFSU2_TR(0x50cd0a);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50cd0c:{NFSU2_TR(0x50cd0c);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50cd0e:{NFSU2_TR(0x50cd0e);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B50cd12:{NFSU2_TR(0x50cd12);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B50cd16:{NFSU2_TR(0x50cd16);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50cd18:{NFSU2_TR(0x50cd18);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50cd1c:{NFSU2_TR(0x50cd1c);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50cd1f:{NFSU2_TR(0x50cd1f);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B50cd22:{NFSU2_TR(0x50cd22);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50cd26:{NFSU2_TR(0x50cd26);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50cd2a:{NFSU2_TR(0x50cd2a);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B50cd2c:{NFSU2_TR(0x50cd2c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B50cd2e:{NFSU2_TR(0x50cd2e);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B50cd30:{NFSU2_TR(0x50cd30);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B50cd33:{NFSU2_TR(0x50cd33);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L50cd68;}}
}
B50cd35:L50cd35:{c.instructions+=5;NFSU2_TR(0x50cd35);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50cd39:{NFSU2_TR(0x50cd39);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B50cd3d:{NFSU2_TR(0x50cd3d);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B50cd3f:{NFSU2_TR(0x50cd3f);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B50cd42:{NFSU2_TR(0x50cd42);
if(r1(R+514)){{goto L50cd68;}}
}
B50cd44:L50cd44:{c.instructions+=5;NFSU2_TR(0x50cd44);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50cd48:{NFSU2_TR(0x50cd48);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B50cd4c:{NFSU2_TR(0x50cd4c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B50cd4e:{NFSU2_TR(0x50cd4e);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B50cd51:{NFSU2_TR(0x50cd51);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L50cd68;}}
}
B50cd53:L50cd53:{c.instructions+=5;NFSU2_TR(0x50cd53);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B50cd57:{NFSU2_TR(0x50cd57);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B50cd5b:{NFSU2_TR(0x50cd5b);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B50cd5d:{NFSU2_TR(0x50cd5d);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B50cd60:{NFSU2_TR(0x50cd60);
if(r1(R+514)){{goto L50cd68;}}
}
B50cd62:L50cd62:{c.instructions+=3;NFSU2_TR(0x50cd62);
w1(R+0,u8(0x1ull));
}
B50cd64:{NFSU2_TR(0x50cd64);
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
B50cd67:{NFSU2_TR(0x50cd67);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50cd68:L50cd68:{c.instructions+=3;NFSU2_TR(0x50cd68);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B50cd6a:{NFSU2_TR(0x50cd6a);
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
B50cd6d:{NFSU2_TR(0x50cd6d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50cd70:L50cd70:{c.instructions+=9;NFSU2_TR(0x50cd70);
{u32 ea_=u32(u32(8872916u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B50cd76:{NFSU2_TR(0x50cd76);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50cd7a:{NFSU2_TR(0x50cd7a);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B50cd7e:{NFSU2_TR(0x50cd7e);
{u32 ea_=u32(u32(7961936u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50cd84:{NFSU2_TR(0x50cd84);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50cd86:{NFSU2_TR(0x50cd86);
{u32 ea_=u32(u32(8872920u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B50cd8c:{NFSU2_TR(0x50cd8c);
{u32 ea_=u32(u32(7920176u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50cd92:{NFSU2_TR(0x50cd92);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50cd94:{NFSU2_TR(0x50cd94);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50cda0:L50cda0:{c.instructions+=4;NFSU2_TR(0x50cda0);
{u32 ea_=u32(u32(8872940u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B50cda6:{NFSU2_TR(0x50cda6);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50cdaa:{NFSU2_TR(0x50cdaa);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50cdac:{NFSU2_TR(0x50cdac);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50cdb0:L50cdb0:{c.instructions+=11;NFSU2_TR(0x50cdb0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B50cdb3:{NFSU2_TR(0x50cdb3);
{u32 ea_=u32(u32(8872916u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B50cdb9:{NFSU2_TR(0x50cdb9);
__builtin_memmove((R+0),gp(0x8763f0),1);
}
B50cdbe:{NFSU2_TR(0x50cdbe);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B50cdc0:{NFSU2_TR(0x50cdc0);
w4(R+0,u32(m1(0x8763f2)));
}
B50cdc7:{NFSU2_TR(0x50cdc7);
{u32 ea_=u32(u32(7961936u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50cdcd:{NFSU2_TR(0x50cdcd);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50cdd1:{NFSU2_TR(0x50cdd1);
{u32 ea_=u32(u32(8872920u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B50cdd7:{NFSU2_TR(0x50cdd7);
{u32 ea_=u32(u32(7920176u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B50cddd:{NFSU2_TR(0x50cddd);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B50cde1:{NFSU2_TR(0x50cde1);
if(r1(R+518)){{goto L50cdea;}}
}
B50cde3:L50cde3:{c.instructions+=1;NFSU2_TR(0x50cde3);
w4(R+0,u32(m1(0x8763f5)));
}
B50cdea:L50cdea:{c.instructions+=2;NFSU2_TR(0x50cdea);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B50cdec:{NFSU2_TR(0x50cdec);
if(r1(R+518)){{goto L50ce14;}}
}
B50cdee:L50cdee:{c.instructions+=9;NFSU2_TR(0x50cdee);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50cdf2:{NFSU2_TR(0x50cdf2);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B50cdf6:{NFSU2_TR(0x50cdf6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
__builtin_memmove((R+8),(U+0),4);
}
B50cdfa:{NFSU2_TR(0x50cdfa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50cdfb:{NFSU2_TR(0x50cdfb);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50cdff:{NFSU2_TR(0x50cdff);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50ce00:{NFSU2_TR(0x50ce00);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50ce01:{NFSU2_TR(0x50ce01);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50ce02:{NFSU2_TR(0x50ce02);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50ce07ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x50cd00u);}goto L50cd00;}
}
B50ce07:L50ce07:{c.instructions+=3;NFSU2_TR(0x50ce07);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B50ce0a:{NFSU2_TR(0x50ce0a);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B50ce0c:{NFSU2_TR(0x50ce0c);
if(r1(R+518)){{goto L50ce14;}}
}
B50ce0e:L50ce0e:{c.instructions+=3;NFSU2_TR(0x50ce0e);
w1(R+0,u8(0x1ull));
}
B50ce10:{NFSU2_TR(0x50ce10);
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
B50ce13:{NFSU2_TR(0x50ce13);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50ce14:L50ce14:{c.instructions+=3;NFSU2_TR(0x50ce14);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B50ce16:{NFSU2_TR(0x50ce16);
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
B50ce19:{NFSU2_TR(0x50ce19);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50ce20:L50ce20:{c.instructions+=3;NFSU2_TR(0x50ce20);
__builtin_memmove((R+0),gp(0x8384c4),4);
}
B50ce25:{NFSU2_TR(0x50ce25);
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
B50ce27:{NFSU2_TR(0x50ce27);
if(r1(R+518)){{goto L50ce2d;}}
}
B50ce29:L50ce29:{c.instructions+=2;NFSU2_TR(0x50ce29);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50ce2c:{NFSU2_TR(0x50ce2c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50ce2d:L50ce2d:{c.instructions+=2;NFSU2_TR(0x50ce2d);
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
B50ce2f:{NFSU2_TR(0x50ce2f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50ce30:L50ce30:{c.instructions+=7;NFSU2_TR(0x50ce30);
__builtin_memmove((R+0),gp(0x8384c4),4);
}
B50ce35:{NFSU2_TR(0x50ce35);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B50ce38:{NFSU2_TR(0x50ce38);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B50ce3e:{NFSU2_TR(0x50ce3e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50ce3f:{NFSU2_TR(0x50ce3f);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B50ce41:{NFSU2_TR(0x50ce41);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B50ce43:{NFSU2_TR(0x50ce43);
if(r1(R+518)){{goto L50ce96;}}
}
B50ce45:L50ce45:{c.instructions+=5;NFSU2_TR(0x50ce45);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50ce46:{NFSU2_TR(0x50ce46);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B50ce4a:{NFSU2_TR(0x50ce4a);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50ce4b:{NFSU2_TR(0x50ce4b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50ce4c:{NFSU2_TR(0x50ce4c);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B50ce50:L50ce50:{c.instructions+=4;NFSU2_TR(0x50ce50);
w1(R+4,u8(u32(r1(R+4))^u32(r1(R+4))));
}
B50ce52:{NFSU2_TR(0x50ce52);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B50ce54:{NFSU2_TR(0x50ce54);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B50ce56:{NFSU2_TR(0x50ce56);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L50ce6f;}}
}
B50ce58:L50ce58:{c.instructions+=2;NFSU2_TR(0x50ce58);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B50ce5a:{NFSU2_TR(0x50ce5a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L50ce83;}}
}
B50ce5c:L50ce5c:{c.instructions+=3;NFSU2_TR(0x50ce5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B50ce5f:{NFSU2_TR(0x50ce5f);
u8 U[20];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(R+20))-u32(r4(U+12))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B50ce62:{NFSU2_TR(0x50ce62);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L50ce66;}}
}
B50ce64:L50ce64:{c.instructions+=1;NFSU2_TR(0x50ce64);
w1(R+4,u8(0x1ull));
}
B50ce66:L50ce66:{c.instructions+=3;NFSU2_TR(0x50ce66);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B50ce67:{NFSU2_TR(0x50ce67);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B50ce69:{NFSU2_TR(0x50ce69);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x50ce58u);}goto L50ce58;}}
}
B50ce6b:L50ce6b:{c.instructions+=2;NFSU2_TR(0x50ce6b);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B50ce6d:{NFSU2_TR(0x50ce6d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L50ce83;}}
}
B50ce6f:L50ce6f:{c.instructions+=3;NFSU2_TR(0x50ce6f);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50ce72:{NFSU2_TR(0x50ce72);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B50ce74:{NFSU2_TR(0x50ce74);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L50ce81;}}
}
B50ce76:L50ce76:{c.instructions+=2;NFSU2_TR(0x50ce76);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B50ce78:{NFSU2_TR(0x50ce78);
if(r1(R+518)){{goto L50ce81;}}
}
B50ce7a:L50ce7a:{c.instructions+=3;NFSU2_TR(0x50ce7a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50ce7d:{NFSU2_TR(0x50ce7d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B50ce7f:{NFSU2_TR(0x50ce7f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L50ce83;}}
}
B50ce81:L50ce81:{c.instructions+=1;NFSU2_TR(0x50ce81);
__builtin_memmove((R+28),(R+8),4);
}
B50ce83:L50ce83:{c.instructions+=3;NFSU2_TR(0x50ce83);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B50ce86:{NFSU2_TR(0x50ce86);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B50ce88:{NFSU2_TR(0x50ce88);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x50ce50u);}goto L50ce50;}}
}
B50ce8a:L50ce8a:{c.instructions+=5;NFSU2_TR(0x50ce8a);
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
B50ce8c:{NFSU2_TR(0x50ce8c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B50ce8d:{NFSU2_TR(0x50ce8d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B50ce8e:{NFSU2_TR(0x50ce8e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B50ce8f:{NFSU2_TR(0x50ce8f);
if(r1(R+518)){{goto L50ce96;}}
}
B50ce91:L50ce91:{c.instructions+=3;NFSU2_TR(0x50ce91);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50ce94:{NFSU2_TR(0x50ce94);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B50ce95:{NFSU2_TR(0x50ce95);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50ce96:L50ce96:{c.instructions+=3;NFSU2_TR(0x50ce96);
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
B50ce98:{NFSU2_TR(0x50ce98);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B50ce99:{NFSU2_TR(0x50ce99);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50cea0:L50cea0:{c.instructions+=2;NFSU2_TR(0x50cea0);
w4(R+0,u32(0x790000ull));
}
B50cea5:{NFSU2_TR(0x50cea5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50ceb0:L50ceb0:{c.instructions+=3;NFSU2_TR(0x50ceb0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50ceb2:{NFSU2_TR(0x50ceb2);
u8 U[4];
w4(U+0,u32(0x70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50ceb4:{NFSU2_TR(0x50ceb4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x50ceb9ull));
TAIL_STATIC(0x440820u,440);
}
B50ceb9:L50ceb9:{c.instructions+=3;NFSU2_TR(0x50ceb9);
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
B50cebc:{NFSU2_TR(0x50cebc);
__builtin_memmove(gp(0x8384d8),(R+0),4);
}
B50cec1:{NFSU2_TR(0x50cec1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50ced0:L50ced0:{c.instructions+=5;NFSU2_TR(0x50ced0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B50ced3:{NFSU2_TR(0x50ced3);
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w4(R+0,u32(0-u32(r4(R+0))));
}
B50ced5:{NFSU2_TR(0x50ced5);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B50ced7:{NFSU2_TR(0x50ced7);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x83a8b0ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B50cedc:{NFSU2_TR(0x50cedc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50cee0:L50cee0:{c.instructions+=7;NFSU2_TR(0x50cee0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B50cee4:{NFSU2_TR(0x50cee4);
w4(R+0,u32(0x1ull));
}
B50cee9:{NFSU2_TR(0x50cee9);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r1(U+0))));
}
B50ceeb:{NFSU2_TR(0x50ceeb);
u8 U[5];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B50ceef:{NFSU2_TR(0x50ceef);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B50cef1:{NFSU2_TR(0x50cef1);
__builtin_memmove((R+4),gp(0x838524),4);
}
B50cef7:{NFSU2_TR(0x50cef7);
if(r1(R+518)){{goto L50cf02;}}
}
B50cef9:L50cef9:{c.instructions+=3;NFSU2_TR(0x50cef9);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B50cefb:{NFSU2_TR(0x50cefb);
__builtin_memmove(gp(0x838524),(R+4),4);
}
B50cf01:{NFSU2_TR(0x50cf01);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50cf02:L50cf02:{c.instructions+=4;NFSU2_TR(0x50cf02);
w4(R+0,u32(u32(r4(R+0))^u32(u32(0xffull))));
}
B50cf07:{NFSU2_TR(0x50cf07);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+4,u32(u32(r4(R+4))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B50cf09:{NFSU2_TR(0x50cf09);
__builtin_memmove(gp(0x838524),(R+4),4);
}
B50cf0f:{NFSU2_TR(0x50cf0f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50cf10:L50cf10:{c.instructions+=10;NFSU2_TR(0x50cf10);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50cf11:{NFSU2_TR(0x50cf11);
__builtin_memmove((R+0),gp(0x8651ac),4);
}
B50cf16:{NFSU2_TR(0x50cf16);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B50cf19:{NFSU2_TR(0x50cf19);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B50cf1d:{NFSU2_TR(0x50cf1d);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B50cf21:{NFSU2_TR(0x50cf21);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B50cf27:{NFSU2_TR(0x50cf27);
{u32 ea_=u32(u32(7881380u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B50cf2d:{NFSU2_TR(0x50cf2d);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B50cf2f:{NFSU2_TR(0x50cf2f);
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
B50cf32:{NFSU2_TR(0x50cf32);
if(r1(R+514)){{goto L50cf3b;}}
}
B50cf34:L50cf34:{c.instructions+=3;NFSU2_TR(0x50cf34);
w4(R+0,u32(0x1ull));
}
B50cf39:{NFSU2_TR(0x50cf39);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B50cf3a:{NFSU2_TR(0x50cf3a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50cf3b:L50cf3b:{c.instructions+=3;NFSU2_TR(0x50cf3b);
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
B50cf3d:{NFSU2_TR(0x50cf3d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B50cf3e:{NFSU2_TR(0x50cf3e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B50cf40:L50cf40:{c.instructions+=4;NFSU2_TR(0x50cf40);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B50cf41:{NFSU2_TR(0x50cf41);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B50cf44:{NFSU2_TR(0x50cf44);
w4(R+4,u32(0xafull));
}
B50cf49:{NFSU2_TR(0x50cf49);
w4(R+28,u32(0x837fe0ull));
}
B50cf4e:L50cf4e:{c.instructions+=1;NFSU2_TR(0x50cf4e);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L50cf50;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x50cf4eu);}goto L50cf4e;}
}
B50cf50:L50cf50:{c.instructions+=4;NFSU2_TR(0x50cf50);
u8 U[18];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x2ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x4ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),2);
s2(u32(r4(U+0)),r2(U+16));
}
B50cf52:{NFSU2_TR(0x50cf52);
w4(R+4,u32(0x6ull));
}
B50cf57:{NFSU2_TR(0x50cf57);
w4(R+0,u32(0x2020202ull));
}
B50cf5c:{NFSU2_TR(0x50cf5c);
w4(R+28,u32(0x83804cull));
}
B50cf61:L50cf61:{c.instructions+=1;NFSU2_TR(0x50cf61);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L50cf63;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x50cf61u);}goto L50cf61;}
}
B50cf63:L50cf63:{c.instructions+=7;NFSU2_TR(0x50cf63);
u8 U[18];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x2ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x4ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),2);
s2(u32(r4(U+0)),r2(U+16));
}
B50cf65:{NFSU2_TR(0x50cf65);
s1(0x838057,u8(0x29ull));
}
B50cf6c:{NFSU2_TR(0x50cf6c);
s1(0x83804d,u8(0x8ull));
}
B50cf73:{NFSU2_TR(0x50cf73);
s1(0x838063,u8(0x46ull));
}
B50cf7a:{NFSU2_TR(0x50cf7a);
w4(R+4,u32(0x6ull));
}
B50cf7f:{NFSU2_TR(0x50cf7f);
w4(R+0,u32(0x3030303ull));
}
B50cf84:{NFSU2_TR(0x50cf84);
w4(R+28,u32(0x838067ull));
}
B50cf89:L50cf89:{c.instructions+=1;NFSU2_TR(0x50cf89);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L50cf8b;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x50cf89u);}goto L50cf89;}
}
B50cf8b:L50cf8b:{c.instructions+=7;NFSU2_TR(0x50cf8b);
u8 U[18];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x2ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x4ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),2);
s2(u32(r4(U+0)),r2(U+16));
}
B50cf8d:{NFSU2_TR(0x50cf8d);
s1(0x838072,u8(0x2aull));
}
B50cf94:{NFSU2_TR(0x50cf94);
s1(0x838068,u8(0x9ull));
}
B50cf9b:{NFSU2_TR(0x50cf9b);
s1(0x83807e,u8(0x45ull));
}
B50cfa2:{NFSU2_TR(0x50cfa2);
w4(R+4,u32(0x6ull));
}
B50cfa7:{NFSU2_TR(0x50cfa7);
w4(R+0,u32(0x4040404ull));
}
B50cfac:{NFSU2_TR(0x50cfac);
w4(R+28,u32(0x8380b8ull));
}
B50cfb1:L50cfb1:{c.instructions+=1;NFSU2_TR(0x50cfb1);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L50cfb3;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x50cfb1u);}goto L50cfb1;}
}
B50cfb3:L50cfb3:{c.instructions+=4;NFSU2_TR(0x50cfb3);
u8 U[18];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x2ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x4ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),2);
s2(u32(r4(U+0)),r2(U+16));
}
B50cfb5:{NFSU2_TR(0x50cfb5);
w4(R+4,u32(0x6ull));
}
B50cfba:{NFSU2_TR(0x50cfba);
w4(R+0,u32(0x5050505ull));
}
B50cfbf:{NFSU2_TR(0x50cfbf);
w4(R+28,u32(0x8380eeull));
}
B50cfc4:L50cfc4:{c.instructions+=1;NFSU2_TR(0x50cfc4);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L50cfc6;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x50cfc4u);}goto L50cfc4;}
}
B50cfc6:L50cfc6:{c.instructions+=4;NFSU2_TR(0x50cfc6);
u8 U[18];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x2ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x4ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),2);
s2(u32(r4(U+0)),r2(U+16));
}
B50cfc8:{NFSU2_TR(0x50cfc8);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B50cfca:{NFSU2_TR(0x50cfca);
w4(R+4,u32(0x6ull));
}
B50cfcf:{NFSU2_TR(0x50cfcf);
w4(R+28,u32(0x838082ull));
}
B50cfd4:L50cfd4:{c.instructions+=1;NFSU2_TR(0x50cfd4);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L50cfd6;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x50cfd4u);}goto L50cfd4;}
}
B50cfd6:L50cfd6:{c.instructions+=5;NFSU2_TR(0x50cfd6);
u8 U[18];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x2ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x4ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),2);
s2(u32(r4(U+0)),r2(U+16));
}
B50cfd8:{NFSU2_TR(0x50cfd8);
s1(0x83808c,u8(0x27ull));
}
B50cfdf:{NFSU2_TR(0x50cfdf);
w4(R+4,u32(0x6ull));
}
B50cfe4:{NFSU2_TR(0x50cfe4);
w4(R+0,u32(0x1010101ull));
}
B50cfe9:{NFSU2_TR(0x50cfe9);
w4(R+28,u32(0x83809dull));
}
B50cfee:L50cfee:{c.instructions+=1;NFSU2_TR(0x50cfee);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L50cff0;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x50cfeeu);}goto L50cfee;}
}
B50cff0:L50cff0:{c.instructions+=4;NFSU2_TR(0x50cff0);
u8 U[18];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x2ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x4ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),2);
s2(u32(r4(U+0)),r2(U+16));
}
B50cff2:{NFSU2_TR(0x50cff2);
s1(0x8380a7,u8(0x28ull));
}
B50cff9:{NFSU2_TR(0x50cff9);
w4(R+4,u32(0x6ull));
}
B50cffe:{NFSU2_TR(0x50cffe);
w4(R+0,u32(0x6060606ull));
TAIL_STATIC(0x50d003u,50d);
}
XIT:NFSU2_TR_EXIT(0x50c,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
