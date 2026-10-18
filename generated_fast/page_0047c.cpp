#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_430(u8* __restrict R,Cpu& c);
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_43e(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_459(u8* __restrict R,Cpu& c);
u32 body_45d(u8* __restrict R,Cpu& c);
u32 body_45e(u8* __restrict R,Cpu& c);
u32 body_45f(u8* __restrict R,Cpu& c);
u32 body_46b(u8* __restrict R,Cpu& c);
u32 body_46f(u8* __restrict R,Cpu& c);
u32 body_470(u8* __restrict R,Cpu& c);
u32 body_471(u8* __restrict R,Cpu& c);
u32 body_472(u8* __restrict R,Cpu& c);
u32 body_473(u8* __restrict R,Cpu& c);
u32 body_47a(u8* __restrict R,Cpu& c);
u32 body_47b(u8* __restrict R,Cpu& c);
u32 body_47d(u8* __restrict R,Cpu& c);
u32 body_576(u8* __restrict R,Cpu& c);
u32 body_5f0(u8* __restrict R,Cpu& c);
u32 body_5fa(u8* __restrict R,Cpu& c);
u32 body_734(u8* __restrict R,Cpu& c);
u32 body_735(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x47c,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x47c,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_47c(u8* __restrict R,Cpu& c);
u32 page_47c(Cpu& c){return body_47c(c.regs.data(),c);}
__attribute__((noinline)) u32 body_47c(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x47c002:goto L47c002;
case 0x47c004:c.instructions+=1;goto B47c004;
case 0x47c006:goto L47c006;
case 0x47c008:c.instructions+=1;goto B47c008;
case 0x47c00d:goto L47c00d;
case 0x47c00f:c.instructions+=1;goto B47c00f;
case 0x47c010:goto L47c010;
case 0x47c011:c.instructions+=9;goto B47c011;
case 0x47c013:c.instructions+=8;goto B47c013;
case 0x47c016:c.instructions+=7;goto B47c016;
case 0x47c019:c.instructions+=6;goto B47c019;
case 0x47c01a:c.instructions+=5;goto B47c01a;
case 0x47c01c:c.instructions+=4;goto B47c01c;
case 0x47c01f:c.instructions+=3;goto B47c01f;
case 0x47c021:c.instructions+=2;goto B47c021;
case 0x47c022:c.instructions+=1;goto B47c022;
case 0x47c024:goto L47c024;
case 0x47c027:c.instructions+=4;goto B47c027;
case 0x47c02a:c.instructions+=3;goto B47c02a;
case 0x47c02d:c.instructions+=2;goto B47c02d;
case 0x47c030:c.instructions+=1;goto B47c030;
case 0x47c033:goto L47c033;
case 0x47c036:c.instructions+=6;goto B47c036;
case 0x47c039:c.instructions+=5;goto B47c039;
case 0x47c03c:c.instructions+=4;goto B47c03c;
case 0x47c03e:c.instructions+=3;goto B47c03e;
case 0x47c043:c.instructions+=2;goto B47c043;
case 0x47c044:c.instructions+=1;goto B47c044;
case 0x47c047:goto L47c047;
case 0x47c04a:c.instructions+=24;goto B47c04a;
case 0x47c04d:c.instructions+=23;goto B47c04d;
case 0x47c050:c.instructions+=22;goto B47c050;
case 0x47c053:c.instructions+=21;goto B47c053;
case 0x47c056:c.instructions+=20;goto B47c056;
case 0x47c059:c.instructions+=19;goto B47c059;
case 0x47c05f:c.instructions+=18;goto B47c05f;
case 0x47c061:c.instructions+=17;goto B47c061;
case 0x47c067:c.instructions+=16;goto B47c067;
case 0x47c06b:c.instructions+=15;goto B47c06b;
case 0x47c06c:c.instructions+=14;goto B47c06c;
case 0x47c072:c.instructions+=13;goto B47c072;
case 0x47c075:c.instructions+=12;goto B47c075;
case 0x47c078:c.instructions+=11;goto B47c078;
case 0x47c07e:c.instructions+=10;goto B47c07e;
case 0x47c084:c.instructions+=9;goto B47c084;
case 0x47c08a:c.instructions+=8;goto B47c08a;
case 0x47c08f:c.instructions+=7;goto B47c08f;
case 0x47c091:c.instructions+=6;goto B47c091;
case 0x47c095:c.instructions+=5;goto B47c095;
case 0x47c099:c.instructions+=4;goto B47c099;
case 0x47c09a:c.instructions+=3;goto B47c09a;
case 0x47c09e:c.instructions+=2;goto B47c09e;
case 0x47c0a2:c.instructions+=1;goto B47c0a2;
case 0x47c0a7:goto L47c0a7;
case 0x47c0ab:c.instructions+=41;goto B47c0ab;
case 0x47c0af:c.instructions+=40;goto B47c0af;
case 0x47c0b3:c.instructions+=39;goto B47c0b3;
case 0x47c0b7:c.instructions+=38;goto B47c0b7;
case 0x47c0b9:c.instructions+=37;goto B47c0b9;
case 0x47c0bc:c.instructions+=36;goto B47c0bc;
case 0x47c0c0:c.instructions+=35;goto B47c0c0;
case 0x47c0c3:c.instructions+=34;goto B47c0c3;
case 0x47c0c4:c.instructions+=33;goto B47c0c4;
case 0x47c0c8:c.instructions+=32;goto B47c0c8;
case 0x47c0ce:c.instructions+=31;goto B47c0ce;
case 0x47c0d2:c.instructions+=30;goto B47c0d2;
case 0x47c0d6:c.instructions+=29;goto B47c0d6;
case 0x47c0dc:c.instructions+=28;goto B47c0dc;
case 0x47c0e0:c.instructions+=27;goto B47c0e0;
case 0x47c0e6:c.instructions+=26;goto B47c0e6;
case 0x47c0e8:c.instructions+=25;goto B47c0e8;
case 0x47c0ee:c.instructions+=24;goto B47c0ee;
case 0x47c0f2:c.instructions+=23;goto B47c0f2;
case 0x47c0f6:c.instructions+=22;goto B47c0f6;
case 0x47c0fa:c.instructions+=21;goto B47c0fa;
case 0x47c0fe:c.instructions+=20;goto B47c0fe;
case 0x47c102:c.instructions+=19;goto B47c102;
case 0x47c104:c.instructions+=18;goto B47c104;
case 0x47c108:c.instructions+=17;goto B47c108;
case 0x47c10c:c.instructions+=16;goto B47c10c;
case 0x47c110:c.instructions+=15;goto B47c110;
case 0x47c116:c.instructions+=14;goto B47c116;
case 0x47c11c:c.instructions+=13;goto B47c11c;
case 0x47c120:c.instructions+=12;goto B47c120;
case 0x47c126:c.instructions+=11;goto B47c126;
case 0x47c12a:c.instructions+=10;goto B47c12a;
case 0x47c12e:c.instructions+=9;goto B47c12e;
case 0x47c130:c.instructions+=8;goto B47c130;
case 0x47c134:c.instructions+=7;goto B47c134;
case 0x47c138:c.instructions+=6;goto B47c138;
case 0x47c13c:c.instructions+=5;goto B47c13c;
case 0x47c142:c.instructions+=4;goto B47c142;
case 0x47c144:c.instructions+=3;goto B47c144;
case 0x47c14a:c.instructions+=2;goto B47c14a;
case 0x47c150:c.instructions+=1;goto B47c150;
case 0x47c155:goto L47c155;
case 0x47c157:c.instructions+=1;goto B47c157;
case 0x47c15c:goto L47c15c;
case 0x47c15e:c.instructions+=3;goto B47c15e;
case 0x47c15f:c.instructions+=2;goto B47c15f;
case 0x47c161:c.instructions+=1;goto B47c161;
case 0x47c164:goto L47c164;
case 0x47c165:c.instructions+=2;goto B47c165;
case 0x47c167:c.instructions+=1;goto B47c167;
case 0x47c16c:goto L47c16c;
case 0x47c16e:c.instructions+=3;goto B47c16e;
case 0x47c16f:c.instructions+=2;goto B47c16f;
case 0x47c171:c.instructions+=1;goto B47c171;
case 0x47c174:goto L47c174;
case 0x47c176:c.instructions+=3;goto B47c176;
case 0x47c177:c.instructions+=2;goto B47c177;
case 0x47c179:c.instructions+=1;goto B47c179;
case 0x47c17c:goto L47c17c;
case 0x47c17e:c.instructions+=3;goto B47c17e;
case 0x47c17f:c.instructions+=2;goto B47c17f;
case 0x47c181:c.instructions+=1;goto B47c181;
case 0x47c184:goto L47c184;
case 0x47c186:c.instructions+=1;goto B47c186;
case 0x47c18b:goto L47c18b;
case 0x47c18d:c.instructions+=3;goto B47c18d;
case 0x47c18e:c.instructions+=2;goto B47c18e;
case 0x47c190:c.instructions+=1;goto B47c190;
case 0x47c193:goto L47c193;
case 0x47c194:c.instructions+=4;goto B47c194;
case 0x47c195:c.instructions+=3;goto B47c195;
case 0x47c197:c.instructions+=2;goto B47c197;
case 0x47c198:c.instructions+=1;goto B47c198;
case 0x47c1a0:goto L47c1a0;
case 0x47c1a1:c.instructions+=5;goto B47c1a1;
case 0x47c1a7:c.instructions+=4;goto B47c1a7;
case 0x47c1a8:c.instructions+=3;goto B47c1a8;
case 0x47c1ab:c.instructions+=2;goto B47c1ab;
case 0x47c1ac:c.instructions+=1;goto B47c1ac;
case 0x47c1ae:goto L47c1ae;
case 0x47c1b5:goto L47c1b5;
case 0x47c1b6:c.instructions+=3;goto B47c1b6;
case 0x47c1b9:c.instructions+=2;goto B47c1b9;
case 0x47c1bc:c.instructions+=1;goto B47c1bc;
case 0x47c1c1:goto L47c1c1;
case 0x47c1c4:c.instructions+=8;goto B47c1c4;
case 0x47c1c7:c.instructions+=7;goto B47c1c7;
case 0x47c1cb:c.instructions+=6;goto B47c1cb;
case 0x47c1ce:c.instructions+=5;goto B47c1ce;
case 0x47c1d2:c.instructions+=4;goto B47c1d2;
case 0x47c1d3:c.instructions+=3;goto B47c1d3;
case 0x47c1d6:c.instructions+=2;goto B47c1d6;
case 0x47c1d8:c.instructions+=1;goto B47c1d8;
case 0x47c1dd:goto L47c1dd;
case 0x47c1e0:c.instructions+=2;goto B47c1e0;
case 0x47c1e2:c.instructions+=1;goto B47c1e2;
case 0x47c1e4:goto L47c1e4;
case 0x47c1e8:c.instructions+=4;goto B47c1e8;
case 0x47c1eb:c.instructions+=3;goto B47c1eb;
case 0x47c1ec:c.instructions+=2;goto B47c1ec;
case 0x47c1ed:c.instructions+=1;goto B47c1ed;
case 0x47c1f0:goto L47c1f0;
case 0x47c1f3:c.instructions+=7;goto B47c1f3;
case 0x47c1f6:c.instructions+=6;goto B47c1f6;
case 0x47c1fa:c.instructions+=5;goto B47c1fa;
case 0x47c1fb:c.instructions+=4;goto B47c1fb;
case 0x47c1fe:c.instructions+=3;goto B47c1fe;
case 0x47c1ff:c.instructions+=2;goto B47c1ff;
case 0x47c202:c.instructions+=1;goto B47c202;
case 0x47c207:goto L47c207;
case 0x47c208:c.instructions+=2;goto B47c208;
case 0x47c209:c.instructions+=1;goto B47c209;
case 0x47c220:goto L47c220;
case 0x47c221:c.instructions+=5;goto B47c221;
case 0x47c222:c.instructions+=4;goto B47c222;
case 0x47c224:c.instructions+=3;goto B47c224;
case 0x47c22a:c.instructions+=2;goto B47c22a;
case 0x47c22c:c.instructions+=1;goto B47c22c;
case 0x47c22e:goto L47c22e;
case 0x47c231:c.instructions+=1;goto B47c231;
case 0x47c233:goto L47c233;
case 0x47c236:c.instructions+=9;goto B47c236;
case 0x47c239:c.instructions+=8;goto B47c239;
case 0x47c23d:c.instructions+=7;goto B47c23d;
case 0x47c23e:c.instructions+=6;goto B47c23e;
case 0x47c242:c.instructions+=5;goto B47c242;
case 0x47c248:c.instructions+=4;goto B47c248;
case 0x47c249:c.instructions+=3;goto B47c249;
case 0x47c24c:c.instructions+=2;goto B47c24c;
case 0x47c24e:c.instructions+=1;goto B47c24e;
case 0x47c253:goto L47c253;
case 0x47c256:c.instructions+=2;goto B47c256;
case 0x47c258:c.instructions+=1;goto B47c258;
case 0x47c25a:goto L47c25a;
case 0x47c25e:c.instructions+=1;goto B47c25e;
case 0x47c261:goto L47c261;
case 0x47c267:c.instructions+=2;goto B47c267;
case 0x47c269:c.instructions+=1;goto B47c269;
case 0x47c26b:goto L47c26b;
case 0x47c26e:c.instructions+=8;goto B47c26e;
case 0x47c271:c.instructions+=7;goto B47c271;
case 0x47c273:c.instructions+=6;goto B47c273;
case 0x47c275:c.instructions+=5;goto B47c275;
case 0x47c277:c.instructions+=4;goto B47c277;
case 0x47c278:c.instructions+=3;goto B47c278;
case 0x47c279:c.instructions+=2;goto B47c279;
case 0x47c27b:c.instructions+=1;goto B47c27b;
case 0x47c280:goto L47c280;
case 0x47c281:goto L47c281;
case 0x47c282:c.instructions+=2;goto B47c282;
case 0x47c283:c.instructions+=1;goto B47c283;
case 0x47c290:goto L47c290;
case 0x47c291:c.instructions+=8;goto B47c291;
case 0x47c292:c.instructions+=7;goto B47c292;
case 0x47c294:c.instructions+=6;goto B47c294;
case 0x47c295:c.instructions+=5;goto B47c295;
case 0x47c299:c.instructions+=4;goto B47c299;
case 0x47c29f:c.instructions+=3;goto B47c29f;
case 0x47c2a0:c.instructions+=2;goto B47c2a0;
case 0x47c2a2:c.instructions+=1;goto B47c2a2;
case 0x47c2a7:goto L47c2a7;
case 0x47c2a8:c.instructions+=2;goto B47c2a8;
case 0x47c2aa:c.instructions+=1;goto B47c2aa;
case 0x47c2af:goto L47c2af;
case 0x47c2b0:c.instructions+=2;goto B47c2b0;
case 0x47c2b2:c.instructions+=1;goto B47c2b2;
case 0x47c2b7:goto L47c2b7;
case 0x47c2bd:c.instructions+=2;goto B47c2bd;
case 0x47c2bf:c.instructions+=1;goto B47c2bf;
case 0x47c2c5:goto L47c2c5;
case 0x47c2c8:c.instructions+=3;goto B47c2c8;
case 0x47c2cb:c.instructions+=2;goto B47c2cb;
case 0x47c2cd:c.instructions+=1;goto B47c2cd;
case 0x47c2cf:goto L47c2cf;
case 0x47c2d2:c.instructions+=1;goto B47c2d2;
case 0x47c2d4:goto L47c2d4;
case 0x47c2d7:c.instructions+=10;goto B47c2d7;
case 0x47c2dd:c.instructions+=9;goto B47c2dd;
case 0x47c2e0:c.instructions+=8;goto B47c2e0;
case 0x47c2e4:c.instructions+=7;goto B47c2e4;
case 0x47c2e7:c.instructions+=6;goto B47c2e7;
case 0x47c2eb:c.instructions+=5;goto B47c2eb;
case 0x47c2ed:c.instructions+=4;goto B47c2ed;
case 0x47c2ee:c.instructions+=3;goto B47c2ee;
case 0x47c2f0:c.instructions+=2;goto B47c2f0;
case 0x47c2f1:c.instructions+=1;goto B47c2f1;
case 0x47c2f4:goto L47c2f4;
case 0x47c2f5:c.instructions+=3;goto B47c2f5;
case 0x47c2f8:c.instructions+=2;goto B47c2f8;
case 0x47c2fb:c.instructions+=1;goto B47c2fb;
case 0x47c300:goto L47c300;
case 0x47c306:c.instructions+=10;goto B47c306;
case 0x47c30c:c.instructions+=9;goto B47c30c;
case 0x47c30e:c.instructions+=8;goto B47c30e;
case 0x47c318:c.instructions+=7;goto B47c318;
case 0x47c31b:c.instructions+=6;goto B47c31b;
case 0x47c31c:c.instructions+=5;goto B47c31c;
case 0x47c31e:c.instructions+=4;goto B47c31e;
case 0x47c31f:c.instructions+=3;goto B47c31f;
case 0x47c322:c.instructions+=2;goto B47c322;
case 0x47c324:c.instructions+=1;goto B47c324;
case 0x47c329:goto L47c329;
case 0x47c32f:c.instructions+=3;goto B47c32f;
case 0x47c330:c.instructions+=2;goto B47c330;
case 0x47c333:c.instructions+=1;goto B47c333;
case 0x47c335:goto L47c335;
case 0x47c33c:goto L47c33c;
case 0x47c342:c.instructions+=2;goto B47c342;
case 0x47c344:c.instructions+=1;goto B47c344;
case 0x47c346:goto L47c346;
case 0x47c34c:c.instructions+=12;goto B47c34c;
case 0x47c34f:c.instructions+=11;goto B47c34f;
case 0x47c359:c.instructions+=10;goto B47c359;
case 0x47c35c:c.instructions+=9;goto B47c35c;
case 0x47c35f:c.instructions+=8;goto B47c35f;
case 0x47c361:c.instructions+=7;goto B47c361;
case 0x47c362:c.instructions+=6;goto B47c362;
case 0x47c365:c.instructions+=5;goto B47c365;
case 0x47c369:c.instructions+=4;goto B47c369;
case 0x47c36f:c.instructions+=3;goto B47c36f;
case 0x47c372:c.instructions+=2;goto B47c372;
case 0x47c375:c.instructions+=1;goto B47c375;
case 0x47c37a:goto L47c37a;
case 0x47c380:c.instructions+=9;goto B47c380;
case 0x47c386:c.instructions+=8;goto B47c386;
case 0x47c389:c.instructions+=7;goto B47c389;
case 0x47c38b:c.instructions+=6;goto B47c38b;
case 0x47c38c:c.instructions+=5;goto B47c38c;
case 0x47c38e:c.instructions+=4;goto B47c38e;
case 0x47c38f:c.instructions+=3;goto B47c38f;
case 0x47c392:c.instructions+=2;goto B47c392;
case 0x47c394:c.instructions+=1;goto B47c394;
case 0x47c399:goto L47c399;
case 0x47c39a:c.instructions+=3;goto B47c39a;
case 0x47c39b:c.instructions+=2;goto B47c39b;
case 0x47c39c:c.instructions+=1;goto B47c39c;
case 0x47c39f:goto L47c39f;
case 0x47c3a5:c.instructions+=2;goto B47c3a5;
case 0x47c3a7:c.instructions+=1;goto B47c3a7;
case 0x47c3a9:goto L47c3a9;
case 0x47c3b3:goto L47c3b3;
case 0x47c3b4:c.instructions+=3;goto B47c3b4;
case 0x47c3b5:c.instructions+=2;goto B47c3b5;
case 0x47c3b6:c.instructions+=1;goto B47c3b6;
case 0x47c3d0:goto L47c3d0;
case 0x47c3d1:c.instructions+=5;goto B47c3d1;
case 0x47c3d2:c.instructions+=4;goto B47c3d2;
case 0x47c3d4:c.instructions+=3;goto B47c3d4;
case 0x47c3d7:c.instructions+=2;goto B47c3d7;
case 0x47c3d9:c.instructions+=1;goto B47c3d9;
case 0x47c3db:goto L47c3db;
case 0x47c3df:c.instructions+=4;goto B47c3df;
case 0x47c3e3:c.instructions+=3;goto B47c3e3;
case 0x47c3e6:c.instructions+=2;goto B47c3e6;
case 0x47c3e9:c.instructions+=1;goto B47c3e9;
case 0x47c3ec:goto L47c3ec;
case 0x47c3ee:c.instructions+=1;goto B47c3ee;
case 0x47c3f3:goto L47c3f3;
case 0x47c3f6:c.instructions+=2;goto B47c3f6;
case 0x47c3f8:c.instructions+=1;goto B47c3f8;
case 0x47c3fb:goto L47c3fb;
case 0x47c3ff:c.instructions+=4;goto B47c3ff;
case 0x47c405:c.instructions+=3;goto B47c405;
case 0x47c407:c.instructions+=2;goto B47c407;
case 0x47c40a:c.instructions+=1;goto B47c40a;
case 0x47c40c:goto L47c40c;
case 0x47c410:c.instructions+=5;goto B47c410;
case 0x47c416:c.instructions+=4;goto B47c416;
case 0x47c41a:c.instructions+=3;goto B47c41a;
case 0x47c41c:c.instructions+=2;goto B47c41c;
case 0x47c41f:c.instructions+=1;goto B47c41f;
case 0x47c421:goto L47c421;
case 0x47c423:c.instructions+=1;goto B47c423;
case 0x47c429:goto L47c429;
case 0x47c42c:c.instructions+=12;goto B47c42c;
case 0x47c432:c.instructions+=11;goto B47c432;
case 0x47c435:c.instructions+=10;goto B47c435;
case 0x47c438:c.instructions+=9;goto B47c438;
case 0x47c43a:c.instructions+=8;goto B47c43a;
case 0x47c440:c.instructions+=7;goto B47c440;
case 0x47c446:c.instructions+=6;goto B47c446;
case 0x47c448:c.instructions+=5;goto B47c448;
case 0x47c44b:c.instructions+=4;goto B47c44b;
case 0x47c451:c.instructions+=3;goto B47c451;
case 0x47c454:c.instructions+=2;goto B47c454;
case 0x47c456:c.instructions+=1;goto B47c456;
case 0x47c458:goto L47c458;
case 0x47c45c:c.instructions+=3;goto B47c45c;
case 0x47c45d:c.instructions+=2;goto B47c45d;
case 0x47c45f:c.instructions+=1;goto B47c45f;
case 0x47c464:goto L47c464;
case 0x47c466:c.instructions+=1;goto B47c466;
case 0x47c46b:goto L47c46b;
case 0x47c46c:c.instructions+=2;goto B47c46c;
case 0x47c46d:c.instructions+=1;goto B47c46d;
case 0x47c470:goto L47c470;
case 0x47c476:c.instructions+=1;goto B47c476;
case 0x47c478:goto L47c478;
case 0x47c47c:c.instructions+=3;goto B47c47c;
case 0x47c47d:c.instructions+=2;goto B47c47d;
case 0x47c47f:c.instructions+=1;goto B47c47f;
case 0x47c484:goto L47c484;
case 0x47c486:c.instructions+=1;goto B47c486;
case 0x47c48b:goto L47c48b;
case 0x47c48c:c.instructions+=2;goto B47c48c;
case 0x47c48d:c.instructions+=1;goto B47c48d;
case 0x47c490:goto L47c490;
case 0x47c491:c.instructions+=5;goto B47c491;
case 0x47c493:c.instructions+=4;goto B47c493;
case 0x47c496:c.instructions+=3;goto B47c496;
case 0x47c498:c.instructions+=2;goto B47c498;
case 0x47c499:c.instructions+=1;goto B47c499;
case 0x47c49b:goto L47c49b;
case 0x47c49f:c.instructions+=4;goto B47c49f;
case 0x47c4a3:c.instructions+=3;goto B47c4a3;
case 0x47c4a6:c.instructions+=2;goto B47c4a6;
case 0x47c4a9:c.instructions+=1;goto B47c4a9;
case 0x47c4ac:goto L47c4ac;
case 0x47c4b1:c.instructions+=3;goto B47c4b1;
case 0x47c4b3:c.instructions+=2;goto B47c4b3;
case 0x47c4b5:c.instructions+=1;goto B47c4b5;
case 0x47c4b7:goto L47c4b7;
case 0x47c4bd:c.instructions+=2;goto B47c4bd;
case 0x47c4bf:c.instructions+=1;goto B47c4bf;
case 0x47c4c1:goto L47c4c1;
case 0x47c4c4:c.instructions+=1;goto B47c4c4;
case 0x47c4c6:goto L47c4c6;
case 0x47c4c9:c.instructions+=1;goto B47c4c9;
case 0x47c4cb:goto L47c4cb;
case 0x47c4ce:c.instructions+=19;goto B47c4ce;
case 0x47c4d3:c.instructions+=18;goto B47c4d3;
case 0x47c4d9:c.instructions+=17;goto B47c4d9;
case 0x47c4df:c.instructions+=16;goto B47c4df;
case 0x47c4e6:c.instructions+=15;goto B47c4e6;
case 0x47c4ed:c.instructions+=14;goto B47c4ed;
case 0x47c4f3:c.instructions+=13;goto B47c4f3;
case 0x47c4f9:c.instructions+=12;goto B47c4f9;
case 0x47c4fc:c.instructions+=11;goto B47c4fc;
case 0x47c4ff:c.instructions+=10;goto B47c4ff;
case 0x47c502:c.instructions+=9;goto B47c502;
case 0x47c505:c.instructions+=8;goto B47c505;
case 0x47c50c:c.instructions+=7;goto B47c50c;
case 0x47c50f:c.instructions+=6;goto B47c50f;
case 0x47c513:c.instructions+=5;goto B47c513;
case 0x47c517:c.instructions+=4;goto B47c517;
case 0x47c51d:c.instructions+=3;goto B47c51d;
case 0x47c51f:c.instructions+=2;goto B47c51f;
case 0x47c522:c.instructions+=1;goto B47c522;
case 0x47c528:goto L47c528;
case 0x47c52a:c.instructions+=1;goto B47c52a;
case 0x47c52f:goto L47c52f;
case 0x47c534:c.instructions+=4;goto B47c534;
case 0x47c535:c.instructions+=3;goto B47c535;
case 0x47c537:c.instructions+=2;goto B47c537;
case 0x47c539:c.instructions+=1;goto B47c539;
case 0x47c53b:goto L47c53b;
case 0x47c53e:c.instructions+=1;goto B47c53e;
case 0x47c540:goto L47c540;
case 0x47c542:goto L47c542;
case 0x47c547:c.instructions+=1;goto B47c547;
case 0x47c54c:goto L47c54c;
case 0x47c54e:c.instructions+=1;goto B47c54e;
case 0x47c550:goto L47c550;
case 0x47c555:c.instructions+=1;goto B47c555;
case 0x47c55a:goto L47c55a;
case 0x47c55c:c.instructions+=1;goto B47c55c;
case 0x47c55e:goto L47c55e;
case 0x47c563:c.instructions+=1;goto B47c563;
case 0x47c568:goto L47c568;
case 0x47c56a:c.instructions+=1;goto B47c56a;
case 0x47c56c:goto L47c56c;
case 0x47c56e:c.instructions+=1;goto B47c56e;
case 0x47c570:goto L47c570;
case 0x47c576:c.instructions+=1;goto B47c576;
case 0x47c578:goto L47c578;
case 0x47c57a:c.instructions+=1;goto B47c57a;
case 0x47c57c:goto L47c57c;
case 0x47c581:goto L47c581;
case 0x47c583:c.instructions+=3;goto B47c583;
case 0x47c589:c.instructions+=2;goto B47c589;
case 0x47c58a:c.instructions+=1;goto B47c58a;
case 0x47c58c:goto L47c58c;
case 0x47c590:c.instructions+=3;goto B47c590;
case 0x47c591:c.instructions+=2;goto B47c591;
case 0x47c593:c.instructions+=1;goto B47c593;
case 0x47c598:goto L47c598;
case 0x47c599:c.instructions+=2;goto B47c599;
case 0x47c59a:c.instructions+=1;goto B47c59a;
case 0x47c59d:goto L47c59d;
case 0x47c59e:c.instructions+=7;goto B47c59e;
case 0x47c5a2:c.instructions+=6;goto B47c5a2;
case 0x47c5a3:c.instructions+=5;goto B47c5a3;
case 0x47c5a9:c.instructions+=4;goto B47c5a9;
case 0x47c5b3:c.instructions+=3;goto B47c5b3;
case 0x47c5bd:c.instructions+=2;goto B47c5bd;
case 0x47c5c3:c.instructions+=1;goto B47c5c3;
case 0x47c5c8:goto L47c5c8;
case 0x47c5ce:c.instructions+=2;goto B47c5ce;
case 0x47c5d1:c.instructions+=1;goto B47c5d1;
case 0x47c5d3:goto L47c5d3;
case 0x47c5d6:c.instructions+=1;goto B47c5d6;
case 0x47c5d8:goto L47c5d8;
case 0x47c5da:c.instructions+=1;goto B47c5da;
case 0x47c5dc:goto L47c5dc;
case 0x47c5e1:goto L47c5e1;
case 0x47c5e4:c.instructions+=10;goto B47c5e4;
case 0x47c5ea:c.instructions+=9;goto B47c5ea;
case 0x47c5ed:c.instructions+=8;goto B47c5ed;
case 0x47c5f0:c.instructions+=7;goto B47c5f0;
case 0x47c5f6:c.instructions+=6;goto B47c5f6;
case 0x47c5f7:c.instructions+=5;goto B47c5f7;
case 0x47c5fd:c.instructions+=4;goto B47c5fd;
case 0x47c603:c.instructions+=3;goto B47c603;
case 0x47c605:c.instructions+=2;goto B47c605;
case 0x47c608:c.instructions+=1;goto B47c608;
case 0x47c60d:goto L47c60d;
case 0x47c60f:c.instructions+=2;goto B47c60f;
case 0x47c611:c.instructions+=1;goto B47c611;
case 0x47c614:goto L47c614;
case 0x47c61a:c.instructions+=3;goto B47c61a;
case 0x47c61c:c.instructions+=2;goto B47c61c;
case 0x47c622:c.instructions+=1;goto B47c622;
case 0x47c627:goto L47c627;
case 0x47c62d:c.instructions+=3;goto B47c62d;
case 0x47c62e:c.instructions+=2;goto B47c62e;
case 0x47c630:c.instructions+=1;goto B47c630;
case 0x47c635:goto L47c635;
case 0x47c63c:c.instructions+=7;goto B47c63c;
case 0x47c640:c.instructions+=6;goto B47c640;
case 0x47c641:c.instructions+=5;goto B47c641;
case 0x47c643:c.instructions+=4;goto B47c643;
case 0x47c647:c.instructions+=3;goto B47c647;
case 0x47c64d:c.instructions+=2;goto B47c64d;
case 0x47c653:c.instructions+=1;goto B47c653;
case 0x47c658:goto L47c658;
case 0x47c659:c.instructions+=2;goto B47c659;
case 0x47c65b:c.instructions+=1;goto B47c65b;
case 0x47c660:goto L47c660;
case 0x47c666:c.instructions+=3;goto B47c666;
case 0x47c668:c.instructions+=2;goto B47c668;
case 0x47c66e:c.instructions+=1;goto B47c66e;
case 0x47c673:goto L47c673;
case 0x47c679:c.instructions+=14;goto B47c679;
case 0x47c67c:c.instructions+=13;goto B47c67c;
case 0x47c67f:c.instructions+=12;goto B47c67f;
case 0x47c682:c.instructions+=11;goto B47c682;
case 0x47c685:c.instructions+=10;goto B47c685;
case 0x47c688:c.instructions+=9;goto B47c688;
case 0x47c68f:c.instructions+=8;goto B47c68f;
case 0x47c692:c.instructions+=7;goto B47c692;
case 0x47c696:c.instructions+=6;goto B47c696;
case 0x47c697:c.instructions+=5;goto B47c697;
case 0x47c69b:c.instructions+=4;goto B47c69b;
case 0x47c6a1:c.instructions+=3;goto B47c6a1;
case 0x47c6a3:c.instructions+=2;goto B47c6a3;
case 0x47c6a6:c.instructions+=1;goto B47c6a6;
case 0x47c6a8:goto L47c6a8;
case 0x47c6aa:c.instructions+=1;goto B47c6aa;
case 0x47c6ac:goto L47c6ac;
case 0x47c6ae:goto L47c6ae;
case 0x47c6b1:c.instructions+=9;goto B47c6b1;
case 0x47c6b4:c.instructions+=8;goto B47c6b4;
case 0x47c6ba:c.instructions+=7;goto B47c6ba;
case 0x47c6bd:c.instructions+=6;goto B47c6bd;
case 0x47c6c3:c.instructions+=5;goto B47c6c3;
case 0x47c6c6:c.instructions+=4;goto B47c6c6;
case 0x47c6c7:c.instructions+=3;goto B47c6c7;
case 0x47c6ca:c.instructions+=2;goto B47c6ca;
case 0x47c6cb:c.instructions+=1;goto B47c6cb;
case 0x47c6d0:goto L47c6d0;
case 0x47c6d1:c.instructions+=7;goto B47c6d1;
case 0x47c6d3:c.instructions+=6;goto B47c6d3;
case 0x47c6d9:c.instructions+=5;goto B47c6d9;
case 0x47c6df:c.instructions+=4;goto B47c6df;
case 0x47c6e5:c.instructions+=3;goto B47c6e5;
case 0x47c6e7:c.instructions+=2;goto B47c6e7;
case 0x47c6e9:c.instructions+=1;goto B47c6e9;
case 0x47c6ef:goto L47c6ef;
case 0x47c6f5:c.instructions+=2;goto B47c6f5;
case 0x47c6f7:c.instructions+=1;goto B47c6f7;
case 0x47c6f9:goto L47c6f9;
case 0x47c6fc:c.instructions+=2;goto B47c6fc;
case 0x47c6fe:c.instructions+=1;goto B47c6fe;
case 0x47c700:goto L47c700;
case 0x47c703:c.instructions+=2;goto B47c703;
case 0x47c705:c.instructions+=1;goto B47c705;
case 0x47c707:goto L47c707;
case 0x47c70a:c.instructions+=5;goto B47c70a;
case 0x47c70d:c.instructions+=4;goto B47c70d;
case 0x47c70e:c.instructions+=3;goto B47c70e;
case 0x47c70f:c.instructions+=2;goto B47c70f;
case 0x47c714:c.instructions+=1;goto B47c714;
case 0x47c719:goto L47c719;
case 0x47c71b:c.instructions+=2;goto B47c71b;
case 0x47c720:c.instructions+=1;goto B47c720;
case 0x47c725:goto L47c725;
case 0x47c727:c.instructions+=3;goto B47c727;
case 0x47c72c:c.instructions+=2;goto B47c72c;
case 0x47c732:c.instructions+=1;goto B47c732;
case 0x47c737:goto L47c737;
case 0x47c73d:c.instructions+=2;goto B47c73d;
case 0x47c740:c.instructions+=1;goto B47c740;
case 0x47c742:goto L47c742;
case 0x47c744:c.instructions+=1;goto B47c744;
case 0x47c746:goto L47c746;
case 0x47c74c:c.instructions+=6;goto B47c74c;
case 0x47c752:c.instructions+=5;goto B47c752;
case 0x47c753:c.instructions+=4;goto B47c753;
case 0x47c755:c.instructions+=3;goto B47c755;
case 0x47c757:c.instructions+=2;goto B47c757;
case 0x47c75a:c.instructions+=1;goto B47c75a;
case 0x47c760:goto L47c760;
case 0x47c766:c.instructions+=3;goto B47c766;
case 0x47c76d:c.instructions+=2;goto B47c76d;
case 0x47c770:c.instructions+=1;goto B47c770;
case 0x47c772:goto L47c772;
case 0x47c777:goto L47c777;
case 0x47c77d:c.instructions+=1;goto B47c77d;
case 0x47c77f:goto L47c77f;
case 0x47c782:c.instructions+=2;goto B47c782;
case 0x47c784:c.instructions+=1;goto B47c784;
case 0x47c786:goto L47c786;
case 0x47c787:c.instructions+=3;goto B47c787;
case 0x47c788:c.instructions+=2;goto B47c788;
case 0x47c78a:c.instructions+=1;goto B47c78a;
case 0x47c78f:goto L47c78f;
case 0x47c790:c.instructions+=1;goto B47c790;
case 0x47c793:goto L47c793;
case 0x47c794:c.instructions+=2;goto B47c794;
case 0x47c796:c.instructions+=1;goto B47c796;
case 0x47c79b:goto L47c79b;
case 0x47c79c:c.instructions+=1;goto B47c79c;
case 0x47c7a0:goto L47c7a0;
case 0x47c7a5:c.instructions+=2;goto B47c7a5;
case 0x47c7a6:c.instructions+=1;goto B47c7a6;
case 0x47c7ab:goto L47c7ab;
case 0x47c7ae:c.instructions+=2;goto B47c7ae;
case 0x47c7b3:c.instructions+=1;goto B47c7b3;
case 0x47c7b5:goto L47c7b5;
case 0x47c7bb:c.instructions+=5;goto B47c7bb;
case 0x47c7be:c.instructions+=4;goto B47c7be;
case 0x47c7c4:c.instructions+=3;goto B47c7c4;
case 0x47c7c5:c.instructions+=2;goto B47c7c5;
case 0x47c7ca:c.instructions+=1;goto B47c7ca;
case 0x47c7cf:goto L47c7cf;
case 0x47c7d2:c.instructions+=2;goto B47c7d2;
case 0x47c7d4:c.instructions+=1;goto B47c7d4;
case 0x47c7d6:goto L47c7d6;
case 0x47c7d8:c.instructions+=1;goto B47c7d8;
case 0x47c7dd:goto L47c7dd;
case 0x47c7df:c.instructions+=1;goto B47c7df;
case 0x47c7e0:goto L47c7e0;
case 0x47c7e1:c.instructions+=2;goto B47c7e1;
case 0x47c7e3:c.instructions+=1;goto B47c7e3;
case 0x47c7e8:goto L47c7e8;
case 0x47c7ed:c.instructions+=1;goto B47c7ed;
case 0x47c7ef:goto L47c7ef;
case 0x47c7f0:c.instructions+=1;goto B47c7f0;
case 0x47c7f5:goto L47c7f5;
case 0x47c7f8:goto L47c7f8;
case 0x47c7fa:c.instructions+=2;goto B47c7fa;
case 0x47c7fb:c.instructions+=1;goto B47c7fb;
case 0x47c800:goto L47c800;
case 0x47c805:c.instructions+=2;goto B47c805;
case 0x47c806:c.instructions+=1;goto B47c806;
case 0x47c80b:goto L47c80b;
case 0x47c80e:c.instructions+=2;goto B47c80e;
case 0x47c813:c.instructions+=1;goto B47c813;
case 0x47c815:goto L47c815;
case 0x47c81b:c.instructions+=5;goto B47c81b;
case 0x47c81e:c.instructions+=4;goto B47c81e;
case 0x47c824:c.instructions+=3;goto B47c824;
case 0x47c825:c.instructions+=2;goto B47c825;
case 0x47c82a:c.instructions+=1;goto B47c82a;
case 0x47c82f:goto L47c82f;
case 0x47c832:c.instructions+=2;goto B47c832;
case 0x47c834:c.instructions+=1;goto B47c834;
case 0x47c836:goto L47c836;
case 0x47c838:c.instructions+=1;goto B47c838;
case 0x47c83d:goto L47c83d;
case 0x47c83f:c.instructions+=1;goto B47c83f;
case 0x47c840:goto L47c840;
case 0x47c842:c.instructions+=11;goto B47c842;
case 0x47c847:c.instructions+=10;goto B47c847;
case 0x47c84d:c.instructions+=9;goto B47c84d;
case 0x47c84e:c.instructions+=8;goto B47c84e;
case 0x47c855:c.instructions+=7;goto B47c855;
case 0x47c856:c.instructions+=6;goto B47c856;
case 0x47c857:c.instructions+=5;goto B47c857;
case 0x47c859:c.instructions+=4;goto B47c859;
case 0x47c85d:c.instructions+=3;goto B47c85d;
case 0x47c863:c.instructions+=2;goto B47c863;
case 0x47c86b:c.instructions+=1;goto B47c86b;
case 0x47c870:goto L47c870;
case 0x47c874:c.instructions+=5;goto B47c874;
case 0x47c87a:c.instructions+=4;goto B47c87a;
case 0x47c87b:c.instructions+=3;goto B47c87b;
case 0x47c882:c.instructions+=2;goto B47c882;
case 0x47c885:c.instructions+=1;goto B47c885;
case 0x47c890:goto L47c890;
case 0x47c891:c.instructions+=10;goto B47c891;
case 0x47c892:c.instructions+=9;goto B47c892;
case 0x47c893:c.instructions+=8;goto B47c893;
case 0x47c894:c.instructions+=7;goto B47c894;
case 0x47c896:c.instructions+=6;goto B47c896;
case 0x47c89c:c.instructions+=5;goto B47c89c;
case 0x47c89e:c.instructions+=4;goto B47c89e;
case 0x47c8a0:c.instructions+=3;goto B47c8a0;
case 0x47c8a1:c.instructions+=2;goto B47c8a1;
case 0x47c8a6:c.instructions+=1;goto B47c8a6;
case 0x47c8a8:goto L47c8a8;
case 0x47c8aa:c.instructions+=3;goto B47c8aa;
case 0x47c8ac:c.instructions+=2;goto B47c8ac;
case 0x47c8b0:c.instructions+=1;goto B47c8b0;
case 0x47c8b2:goto L47c8b2;
case 0x47c8b6:c.instructions+=3;goto B47c8b6;
case 0x47c8b7:c.instructions+=2;goto B47c8b7;
case 0x47c8b9:c.instructions+=1;goto B47c8b9;
case 0x47c8be:goto L47c8be;
case 0x47c8c2:c.instructions+=1;goto B47c8c2;
case 0x47c8c4:goto L47c8c4;
case 0x47c8ca:c.instructions+=2;goto B47c8ca;
case 0x47c8cc:c.instructions+=1;goto B47c8cc;
case 0x47c8ce:goto L47c8ce;
case 0x47c8d0:c.instructions+=2;goto B47c8d0;
case 0x47c8d2:c.instructions+=1;goto B47c8d2;
case 0x47c8d4:goto L47c8d4;
case 0x47c8d9:goto L47c8d9;
case 0x47c8dd:c.instructions+=2;goto B47c8dd;
case 0x47c8de:c.instructions+=1;goto B47c8de;
case 0x47c8e3:goto L47c8e3;
case 0x47c8e6:c.instructions+=1;goto B47c8e6;
case 0x47c8eb:goto L47c8eb;
case 0x47c8ef:c.instructions+=4;goto B47c8ef;
case 0x47c8f1:c.instructions+=3;goto B47c8f1;
case 0x47c8f2:c.instructions+=2;goto B47c8f2;
case 0x47c8f3:c.instructions+=1;goto B47c8f3;
case 0x47c8f6:goto L47c8f6;
case 0x47c8fb:goto L47c8fb;
case 0x47c901:goto L47c901;
case 0x47c907:c.instructions+=2;goto B47c907;
case 0x47c909:c.instructions+=1;goto B47c909;
case 0x47c90b:goto L47c90b;
case 0x47c90d:c.instructions+=3;goto B47c90d;
case 0x47c90f:c.instructions+=2;goto B47c90f;
case 0x47c913:c.instructions+=1;goto B47c913;
case 0x47c915:goto L47c915;
case 0x47c919:c.instructions+=3;goto B47c919;
case 0x47c91a:c.instructions+=2;goto B47c91a;
case 0x47c91c:c.instructions+=1;goto B47c91c;
case 0x47c921:goto L47c921;
case 0x47c925:c.instructions+=1;goto B47c925;
case 0x47c927:goto L47c927;
case 0x47c92d:c.instructions+=2;goto B47c92d;
case 0x47c92f:c.instructions+=1;goto B47c92f;
case 0x47c931:goto L47c931;
case 0x47c933:c.instructions+=2;goto B47c933;
case 0x47c935:c.instructions+=1;goto B47c935;
case 0x47c937:goto L47c937;
case 0x47c93c:goto L47c93c;
case 0x47c940:c.instructions+=2;goto B47c940;
case 0x47c941:c.instructions+=1;goto B47c941;
case 0x47c946:goto L47c946;
case 0x47c949:c.instructions+=1;goto B47c949;
case 0x47c94e:goto L47c94e;
case 0x47c952:c.instructions+=4;goto B47c952;
case 0x47c954:c.instructions+=3;goto B47c954;
case 0x47c955:c.instructions+=2;goto B47c955;
case 0x47c956:c.instructions+=1;goto B47c956;
case 0x47c959:goto L47c959;
case 0x47c95e:goto L47c95e;
case 0x47c964:goto L47c964;
case 0x47c96a:c.instructions+=2;goto B47c96a;
case 0x47c96c:c.instructions+=1;goto B47c96c;
case 0x47c96e:goto L47c96e;
case 0x47c970:c.instructions+=3;goto B47c970;
case 0x47c972:c.instructions+=2;goto B47c972;
case 0x47c976:c.instructions+=1;goto B47c976;
case 0x47c978:goto L47c978;
case 0x47c97c:c.instructions+=3;goto B47c97c;
case 0x47c97d:c.instructions+=2;goto B47c97d;
case 0x47c97f:c.instructions+=1;goto B47c97f;
case 0x47c984:goto L47c984;
case 0x47c988:c.instructions+=1;goto B47c988;
case 0x47c98a:goto L47c98a;
case 0x47c990:c.instructions+=2;goto B47c990;
case 0x47c992:c.instructions+=1;goto B47c992;
case 0x47c994:goto L47c994;
case 0x47c996:c.instructions+=2;goto B47c996;
case 0x47c998:c.instructions+=1;goto B47c998;
case 0x47c99a:goto L47c99a;
case 0x47c99f:goto L47c99f;
case 0x47c9a3:c.instructions+=2;goto B47c9a3;
case 0x47c9a4:c.instructions+=1;goto B47c9a4;
case 0x47c9a9:goto L47c9a9;
case 0x47c9ac:c.instructions+=1;goto B47c9ac;
case 0x47c9b1:goto L47c9b1;
case 0x47c9b5:c.instructions+=4;goto B47c9b5;
case 0x47c9b7:c.instructions+=3;goto B47c9b7;
case 0x47c9b8:c.instructions+=2;goto B47c9b8;
case 0x47c9b9:c.instructions+=1;goto B47c9b9;
case 0x47c9bc:goto L47c9bc;
case 0x47c9c1:goto L47c9c1;
case 0x47c9c7:goto L47c9c7;
case 0x47c9cd:c.instructions+=2;goto B47c9cd;
case 0x47c9cf:c.instructions+=1;goto B47c9cf;
case 0x47c9d1:goto L47c9d1;
case 0x47c9d3:c.instructions+=3;goto B47c9d3;
case 0x47c9d5:c.instructions+=2;goto B47c9d5;
case 0x47c9d9:c.instructions+=1;goto B47c9d9;
case 0x47c9db:goto L47c9db;
case 0x47c9df:c.instructions+=3;goto B47c9df;
case 0x47c9e0:c.instructions+=2;goto B47c9e0;
case 0x47c9e2:c.instructions+=1;goto B47c9e2;
case 0x47c9e7:goto L47c9e7;
case 0x47c9eb:c.instructions+=1;goto B47c9eb;
case 0x47c9ed:goto L47c9ed;
case 0x47c9f3:c.instructions+=2;goto B47c9f3;
case 0x47c9f5:c.instructions+=1;goto B47c9f5;
case 0x47c9f7:goto L47c9f7;
case 0x47c9f9:c.instructions+=2;goto B47c9f9;
case 0x47c9fb:c.instructions+=1;goto B47c9fb;
case 0x47c9fd:goto L47c9fd;
case 0x47ca02:goto L47ca02;
case 0x47ca06:c.instructions+=2;goto B47ca06;
case 0x47ca07:c.instructions+=1;goto B47ca07;
case 0x47ca0c:goto L47ca0c;
case 0x47ca0f:c.instructions+=1;goto B47ca0f;
case 0x47ca14:goto L47ca14;
case 0x47ca18:c.instructions+=4;goto B47ca18;
case 0x47ca1a:c.instructions+=3;goto B47ca1a;
case 0x47ca1b:c.instructions+=2;goto B47ca1b;
case 0x47ca1c:c.instructions+=1;goto B47ca1c;
case 0x47ca1f:goto L47ca1f;
case 0x47ca24:goto L47ca24;
case 0x47ca2a:goto L47ca2a;
case 0x47ca30:c.instructions+=2;goto B47ca30;
case 0x47ca33:c.instructions+=1;goto B47ca33;
case 0x47ca35:goto L47ca35;
case 0x47ca37:c.instructions+=1;goto B47ca37;
case 0x47ca3c:goto L47ca3c;
case 0x47ca42:c.instructions+=2;goto B47ca42;
case 0x47ca45:c.instructions+=1;goto B47ca45;
case 0x47ca47:goto L47ca47;
case 0x47ca49:c.instructions+=1;goto B47ca49;
case 0x47ca4e:goto L47ca4e;
case 0x47ca54:c.instructions+=2;goto B47ca54;
case 0x47ca57:c.instructions+=1;goto B47ca57;
case 0x47ca59:goto L47ca59;
case 0x47ca5b:c.instructions+=1;goto B47ca5b;
case 0x47ca60:goto L47ca60;
case 0x47ca61:c.instructions+=5;goto B47ca61;
case 0x47ca62:c.instructions+=4;goto B47ca62;
case 0x47ca63:c.instructions+=3;goto B47ca63;
case 0x47ca64:c.instructions+=2;goto B47ca64;
case 0x47ca65:c.instructions+=1;goto B47ca65;
case 0x47ca70:goto L47ca70;
case 0x47ca75:c.instructions+=2;goto B47ca75;
case 0x47ca76:c.instructions+=1;goto B47ca76;
case 0x47ca7b:goto L47ca7b;
case 0x47ca7e:c.instructions+=2;goto B47ca7e;
case 0x47ca83:c.instructions+=1;goto B47ca83;
case 0x47ca85:goto L47ca85;
case 0x47ca8b:c.instructions+=5;goto B47ca8b;
case 0x47ca8e:c.instructions+=4;goto B47ca8e;
case 0x47ca94:c.instructions+=3;goto B47ca94;
case 0x47ca95:c.instructions+=2;goto B47ca95;
case 0x47ca9a:c.instructions+=1;goto B47ca9a;
case 0x47ca9f:goto L47ca9f;
case 0x47caa2:c.instructions+=2;goto B47caa2;
case 0x47caa4:c.instructions+=1;goto B47caa4;
case 0x47caa6:goto L47caa6;
case 0x47caa8:c.instructions+=1;goto B47caa8;
case 0x47caad:goto L47caad;
case 0x47caaf:c.instructions+=1;goto B47caaf;
case 0x47cab0:goto L47cab0;
case 0x47cab1:c.instructions+=2;goto B47cab1;
case 0x47cab3:c.instructions+=1;goto B47cab3;
case 0x47cab8:goto L47cab8;
case 0x47cabd:c.instructions+=1;goto B47cabd;
case 0x47cabf:goto L47cabf;
case 0x47cac0:c.instructions+=1;goto B47cac0;
case 0x47cac5:goto L47cac5;
case 0x47cac8:goto L47cac8;
case 0x47caca:c.instructions+=2;goto B47caca;
case 0x47cacb:c.instructions+=1;goto B47cacb;
case 0x47cad0:goto L47cad0;
case 0x47cad1:c.instructions+=4;goto B47cad1;
case 0x47cad3:c.instructions+=3;goto B47cad3;
case 0x47cad9:c.instructions+=2;goto B47cad9;
case 0x47cadb:c.instructions+=1;goto B47cadb;
case 0x47cae1:goto L47cae1;
case 0x47cae7:c.instructions+=2;goto B47cae7;
case 0x47cae9:c.instructions+=1;goto B47cae9;
case 0x47caec:goto L47caec;
case 0x47caf2:c.instructions+=3;goto B47caf2;
case 0x47caf4:c.instructions+=2;goto B47caf4;
case 0x47caf7:c.instructions+=1;goto B47caf7;
case 0x47caf9:goto L47caf9;
case 0x47caff:c.instructions+=2;goto B47caff;
case 0x47cb01:c.instructions+=1;goto B47cb01;
case 0x47cb04:goto L47cb04;
case 0x47cb0a:c.instructions+=2;goto B47cb0a;
case 0x47cb10:c.instructions+=1;goto B47cb10;
case 0x47cb12:goto L47cb12;
case 0x47cb1c:goto L47cb1c;
case 0x47cb1d:c.instructions+=4;goto B47cb1d;
case 0x47cb21:c.instructions+=3;goto B47cb21;
case 0x47cb22:c.instructions+=2;goto B47cb22;
case 0x47cb24:c.instructions+=1;goto B47cb24;
case 0x47cb29:goto L47cb29;
case 0x47cb2a:c.instructions+=2;goto B47cb2a;
case 0x47cb2c:c.instructions+=1;goto B47cb2c;
case 0x47cb31:goto L47cb31;
case 0x47cb37:c.instructions+=2;goto B47cb37;
case 0x47cb3a:c.instructions+=1;goto B47cb3a;
case 0x47cb3c:goto L47cb3c;
case 0x47cb3d:c.instructions+=1;goto B47cb3d;
case 0x47cb3f:goto L47cb3f;
case 0x47cb40:c.instructions+=1;goto B47cb40;
case 0x47cb46:goto L47cb46;
case 0x47cb48:c.instructions+=1;goto B47cb48;
case 0x47cb4d:goto L47cb4d;
case 0x47cb4f:c.instructions+=1;goto B47cb4f;
case 0x47cb55:goto L47cb55;
case 0x47cb56:c.instructions+=3;goto B47cb56;
case 0x47cb60:c.instructions+=2;goto B47cb60;
case 0x47cb61:c.instructions+=1;goto B47cb61;
case 0x47cb64:goto L47cb64;
case 0x47cb6a:c.instructions+=2;goto B47cb6a;
case 0x47cb6c:c.instructions+=1;goto B47cb6c;
case 0x47cb6f:goto L47cb6f;
case 0x47cb75:c.instructions+=3;goto B47cb75;
case 0x47cb77:c.instructions+=2;goto B47cb77;
case 0x47cb7a:c.instructions+=1;goto B47cb7a;
case 0x47cb7c:goto L47cb7c;
case 0x47cb82:c.instructions+=9;goto B47cb82;
case 0x47cb8c:c.instructions+=8;goto B47cb8c;
case 0x47cb92:c.instructions+=7;goto B47cb92;
case 0x47cb93:c.instructions+=6;goto B47cb93;
case 0x47cb95:c.instructions+=5;goto B47cb95;
case 0x47cb97:c.instructions+=4;goto B47cb97;
case 0x47cb99:c.instructions+=3;goto B47cb99;
case 0x47cb9b:c.instructions+=2;goto B47cb9b;
case 0x47cb9d:c.instructions+=1;goto B47cb9d;
case 0x47cba2:goto L47cba2;
case 0x47cba3:c.instructions+=3;goto B47cba3;
case 0x47cba5:c.instructions+=2;goto B47cba5;
case 0x47cbaf:c.instructions+=1;goto B47cbaf;
case 0x47cbb4:goto L47cbb4;
case 0x47cbb5:c.instructions+=2;goto B47cbb5;
case 0x47cbb6:c.instructions+=1;goto B47cbb6;
case 0x47cbb9:goto L47cbb9;
case 0x47cbbf:c.instructions+=2;goto B47cbbf;
case 0x47cbc1:c.instructions+=1;goto B47cbc1;
case 0x47cbc4:goto L47cbc4;
case 0x47cbca:c.instructions+=3;goto B47cbca;
case 0x47cbcc:c.instructions+=2;goto B47cbcc;
case 0x47cbcf:c.instructions+=1;goto B47cbcf;
case 0x47cbd1:goto L47cbd1;
case 0x47cbdb:goto L47cbdb;
case 0x47cbdc:goto L47cbdc;
case 0x47cbdd:c.instructions+=1;goto B47cbdd;
case 0x47cbe0:goto L47cbe0;
case 0x47cbe5:c.instructions+=2;goto B47cbe5;
case 0x47cbe6:c.instructions+=1;goto B47cbe6;
case 0x47cbeb:goto L47cbeb;
case 0x47cbee:c.instructions+=2;goto B47cbee;
case 0x47cbf3:c.instructions+=1;goto B47cbf3;
case 0x47cbf5:goto L47cbf5;
case 0x47cbfb:c.instructions+=5;goto B47cbfb;
case 0x47cbfe:c.instructions+=4;goto B47cbfe;
case 0x47cc04:c.instructions+=3;goto B47cc04;
case 0x47cc05:c.instructions+=2;goto B47cc05;
case 0x47cc0a:c.instructions+=1;goto B47cc0a;
case 0x47cc0f:goto L47cc0f;
case 0x47cc12:c.instructions+=2;goto B47cc12;
case 0x47cc14:c.instructions+=1;goto B47cc14;
case 0x47cc16:goto L47cc16;
case 0x47cc18:c.instructions+=1;goto B47cc18;
case 0x47cc1d:goto L47cc1d;
case 0x47cc1f:c.instructions+=1;goto B47cc1f;
case 0x47cc20:goto L47cc20;
case 0x47cc21:c.instructions+=2;goto B47cc21;
case 0x47cc23:c.instructions+=1;goto B47cc23;
case 0x47cc28:goto L47cc28;
case 0x47cc2d:c.instructions+=1;goto B47cc2d;
case 0x47cc2f:goto L47cc2f;
case 0x47cc30:c.instructions+=1;goto B47cc30;
case 0x47cc35:goto L47cc35;
case 0x47cc38:goto L47cc38;
case 0x47cc3a:c.instructions+=2;goto B47cc3a;
case 0x47cc3b:c.instructions+=1;goto B47cc3b;
case 0x47cc40:goto L47cc40;
case 0x47cc45:c.instructions+=2;goto B47cc45;
case 0x47cc46:c.instructions+=1;goto B47cc46;
case 0x47cc4b:goto L47cc4b;
case 0x47cc4e:c.instructions+=2;goto B47cc4e;
case 0x47cc53:c.instructions+=1;goto B47cc53;
case 0x47cc55:goto L47cc55;
case 0x47cc5b:c.instructions+=5;goto B47cc5b;
case 0x47cc5e:c.instructions+=4;goto B47cc5e;
case 0x47cc64:c.instructions+=3;goto B47cc64;
case 0x47cc65:c.instructions+=2;goto B47cc65;
case 0x47cc6a:c.instructions+=1;goto B47cc6a;
case 0x47cc6f:goto L47cc6f;
case 0x47cc72:c.instructions+=2;goto B47cc72;
case 0x47cc74:c.instructions+=1;goto B47cc74;
case 0x47cc76:goto L47cc76;
case 0x47cc78:c.instructions+=1;goto B47cc78;
case 0x47cc7d:goto L47cc7d;
case 0x47cc7f:c.instructions+=1;goto B47cc7f;
case 0x47cc80:goto L47cc80;
case 0x47cc82:c.instructions+=11;goto B47cc82;
case 0x47cc87:c.instructions+=10;goto B47cc87;
case 0x47cc8d:c.instructions+=9;goto B47cc8d;
case 0x47cc8e:c.instructions+=8;goto B47cc8e;
case 0x47cc95:c.instructions+=7;goto B47cc95;
case 0x47cc96:c.instructions+=6;goto B47cc96;
case 0x47cc97:c.instructions+=5;goto B47cc97;
case 0x47cc99:c.instructions+=4;goto B47cc99;
case 0x47cc9d:c.instructions+=3;goto B47cc9d;
case 0x47cca3:c.instructions+=2;goto B47cca3;
case 0x47ccab:c.instructions+=1;goto B47ccab;
case 0x47ccb0:goto L47ccb0;
case 0x47ccb4:c.instructions+=5;goto B47ccb4;
case 0x47ccba:c.instructions+=4;goto B47ccba;
case 0x47ccbb:c.instructions+=3;goto B47ccbb;
case 0x47ccc2:c.instructions+=2;goto B47ccc2;
case 0x47ccc5:c.instructions+=1;goto B47ccc5;
case 0x47ccd0:goto L47ccd0;
case 0x47ccd4:c.instructions+=4;goto B47ccd4;
case 0x47ccd7:c.instructions+=3;goto B47ccd7;
case 0x47ccdb:c.instructions+=2;goto B47ccdb;
case 0x47ccdd:c.instructions+=1;goto B47ccdd;
case 0x47ccdf:goto L47ccdf;
case 0x47cce3:c.instructions+=4;goto B47cce3;
case 0x47ccea:c.instructions+=3;goto B47ccea;
case 0x47cced:c.instructions+=2;goto B47cced;
case 0x47ccee:c.instructions+=1;goto B47ccee;
case 0x47ccf3:goto L47ccf3;
case 0x47cd00:goto L47cd00;
case 0x47cd05:c.instructions+=2;goto B47cd05;
case 0x47cd06:c.instructions+=1;goto B47cd06;
case 0x47cd0b:goto L47cd0b;
case 0x47cd0e:c.instructions+=2;goto B47cd0e;
case 0x47cd13:c.instructions+=1;goto B47cd13;
case 0x47cd15:goto L47cd15;
case 0x47cd1b:c.instructions+=5;goto B47cd1b;
case 0x47cd1e:c.instructions+=4;goto B47cd1e;
case 0x47cd24:c.instructions+=3;goto B47cd24;
case 0x47cd25:c.instructions+=2;goto B47cd25;
case 0x47cd2a:c.instructions+=1;goto B47cd2a;
case 0x47cd2f:goto L47cd2f;
case 0x47cd32:c.instructions+=2;goto B47cd32;
case 0x47cd34:c.instructions+=1;goto B47cd34;
case 0x47cd36:goto L47cd36;
case 0x47cd38:c.instructions+=1;goto B47cd38;
case 0x47cd3d:goto L47cd3d;
case 0x47cd3f:c.instructions+=1;goto B47cd3f;
case 0x47cd40:goto L47cd40;
case 0x47cd42:c.instructions+=11;goto B47cd42;
case 0x47cd47:c.instructions+=10;goto B47cd47;
case 0x47cd4d:c.instructions+=9;goto B47cd4d;
case 0x47cd4e:c.instructions+=8;goto B47cd4e;
case 0x47cd55:c.instructions+=7;goto B47cd55;
case 0x47cd56:c.instructions+=6;goto B47cd56;
case 0x47cd57:c.instructions+=5;goto B47cd57;
case 0x47cd59:c.instructions+=4;goto B47cd59;
case 0x47cd5d:c.instructions+=3;goto B47cd5d;
case 0x47cd63:c.instructions+=2;goto B47cd63;
case 0x47cd6b:c.instructions+=1;goto B47cd6b;
case 0x47cd70:goto L47cd70;
case 0x47cd74:c.instructions+=5;goto B47cd74;
case 0x47cd7a:c.instructions+=4;goto B47cd7a;
case 0x47cd7b:c.instructions+=3;goto B47cd7b;
case 0x47cd82:c.instructions+=2;goto B47cd82;
case 0x47cd85:c.instructions+=1;goto B47cd85;
case 0x47cd90:goto L47cd90;
case 0x47cd91:c.instructions+=4;goto B47cd91;
case 0x47cd93:c.instructions+=3;goto B47cd93;
case 0x47cd99:c.instructions+=2;goto B47cd99;
case 0x47cd9b:c.instructions+=1;goto B47cd9b;
case 0x47cd9d:goto L47cd9d;
case 0x47cda2:goto L47cda2;
case 0x47cda4:c.instructions+=1;goto B47cda4;
case 0x47cda9:goto L47cda9;
case 0x47cdaa:c.instructions+=1;goto B47cdaa;
case 0x47cdb0:goto L47cdb0;
case 0x47cdb3:c.instructions+=7;goto B47cdb3;
case 0x47cdb4:c.instructions+=6;goto B47cdb4;
case 0x47cdb5:c.instructions+=5;goto B47cdb5;
case 0x47cdb7:c.instructions+=4;goto B47cdb7;
case 0x47cdbd:c.instructions+=3;goto B47cdbd;
case 0x47cdbf:c.instructions+=2;goto B47cdbf;
case 0x47cdc1:c.instructions+=1;goto B47cdc1;
case 0x47cdc7:goto L47cdc7;
case 0x47cdcd:c.instructions+=5;goto B47cdcd;
case 0x47cdcf:c.instructions+=4;goto B47cdcf;
case 0x47cdd0:c.instructions+=3;goto B47cdd0;
case 0x47cdd1:c.instructions+=2;goto B47cdd1;
case 0x47cdd4:c.instructions+=1;goto B47cdd4;
case 0x47cdda:goto L47cdda;
case 0x47cde0:c.instructions+=2;goto B47cde0;
case 0x47cde1:c.instructions+=1;goto B47cde1;
case 0x47cde6:goto L47cde6;
case 0x47cde8:c.instructions+=3;goto B47cde8;
case 0x47cde9:c.instructions+=2;goto B47cde9;
case 0x47cdef:c.instructions+=1;goto B47cdef;
case 0x47cdf4:goto L47cdf4;
case 0x47cdf6:c.instructions+=5;goto B47cdf6;
case 0x47cdfc:c.instructions+=4;goto B47cdfc;
case 0x47cdff:c.instructions+=3;goto B47cdff;
case 0x47ce00:c.instructions+=2;goto B47ce00;
case 0x47ce04:c.instructions+=1;goto B47ce04;
case 0x47ce06:goto L47ce06;
case 0x47ce09:c.instructions+=1;goto B47ce09;
case 0x47ce0b:goto L47ce0b;
case 0x47ce0e:c.instructions+=1;goto B47ce0e;
case 0x47ce10:goto L47ce10;
case 0x47ce15:c.instructions+=1;goto B47ce15;
case 0x47ce17:goto L47ce17;
case 0x47ce1a:goto L47ce1a;
case 0x47ce1d:c.instructions+=1;goto B47ce1d;
case 0x47ce1f:goto L47ce1f;
case 0x47ce21:c.instructions+=3;goto B47ce21;
case 0x47ce22:c.instructions+=2;goto B47ce22;
case 0x47ce24:c.instructions+=1;goto B47ce24;
case 0x47ce29:goto L47ce29;
case 0x47ce2b:goto L47ce2b;
case 0x47ce31:c.instructions+=2;goto B47ce31;
case 0x47ce33:c.instructions+=1;goto B47ce33;
case 0x47ce35:goto L47ce35;
case 0x47ce37:c.instructions+=2;goto B47ce37;
case 0x47ce39:c.instructions+=1;goto B47ce39;
case 0x47ce3b:goto L47ce3b;
case 0x47ce40:goto L47ce40;
case 0x47ce44:c.instructions+=2;goto B47ce44;
case 0x47ce45:c.instructions+=1;goto B47ce45;
case 0x47ce4a:goto L47ce4a;
case 0x47ce4d:c.instructions+=1;goto B47ce4d;
case 0x47ce52:goto L47ce52;
case 0x47ce56:c.instructions+=4;goto B47ce56;
case 0x47ce58:c.instructions+=3;goto B47ce58;
case 0x47ce59:c.instructions+=2;goto B47ce59;
case 0x47ce5a:c.instructions+=1;goto B47ce5a;
case 0x47ce5d:goto L47ce5d;
case 0x47ce62:goto L47ce62;
case 0x47ce66:c.instructions+=1;goto B47ce66;
case 0x47ce6c:goto L47ce6c;
case 0x47ce72:c.instructions+=3;goto B47ce72;
case 0x47ce78:c.instructions+=2;goto B47ce78;
case 0x47ce7a:c.instructions+=1;goto B47ce7a;
case 0x47ce7c:goto L47ce7c;
case 0x47ce7f:c.instructions+=1;goto B47ce7f;
case 0x47ce81:goto L47ce81;
case 0x47ce83:c.instructions+=2;goto B47ce83;
case 0x47ce84:c.instructions+=1;goto B47ce84;
case 0x47ce86:goto L47ce86;
case 0x47ce89:c.instructions+=1;goto B47ce89;
case 0x47ce8b:goto L47ce8b;
case 0x47ce8d:c.instructions+=1;goto B47ce8d;
case 0x47ce8e:goto L47ce8e;
case 0x47ce90:c.instructions+=1;goto B47ce90;
case 0x47ce95:goto L47ce95;
case 0x47ce9b:c.instructions+=2;goto B47ce9b;
case 0x47ce9d:c.instructions+=1;goto B47ce9d;
case 0x47cea3:goto L47cea3;
case 0x47cea9:c.instructions+=2;goto B47cea9;
case 0x47ceaa:c.instructions+=1;goto B47ceaa;
case 0x47ceaf:goto L47ceaf;
case 0x47ceb1:c.instructions+=3;goto B47ceb1;
case 0x47ceb2:c.instructions+=2;goto B47ceb2;
case 0x47ceb8:c.instructions+=1;goto B47ceb8;
case 0x47cebd:goto L47cebd;
case 0x47cebf:c.instructions+=4;goto B47cebf;
case 0x47cec5:c.instructions+=3;goto B47cec5;
case 0x47cec8:c.instructions+=2;goto B47cec8;
case 0x47cec9:c.instructions+=1;goto B47cec9;
case 0x47cecb:goto L47cecb;
case 0x47cece:c.instructions+=1;goto B47cece;
case 0x47ced0:goto L47ced0;
case 0x47ced3:c.instructions+=1;goto B47ced3;
case 0x47ced5:goto L47ced5;
case 0x47ceda:c.instructions+=1;goto B47ceda;
case 0x47cedc:goto L47cedc;
case 0x47cedf:goto L47cedf;
case 0x47cee2:c.instructions+=1;goto B47cee2;
case 0x47cee4:goto L47cee4;
case 0x47cee6:c.instructions+=3;goto B47cee6;
case 0x47cee7:c.instructions+=2;goto B47cee7;
case 0x47cee9:c.instructions+=1;goto B47cee9;
case 0x47ceee:goto L47ceee;
case 0x47cef0:goto L47cef0;
case 0x47cef6:c.instructions+=2;goto B47cef6;
case 0x47cef8:c.instructions+=1;goto B47cef8;
case 0x47cefa:goto L47cefa;
case 0x47cefc:c.instructions+=2;goto B47cefc;
case 0x47cefe:c.instructions+=1;goto B47cefe;
case 0x47cf00:goto L47cf00;
case 0x47cf05:goto L47cf05;
case 0x47cf09:c.instructions+=2;goto B47cf09;
case 0x47cf0a:c.instructions+=1;goto B47cf0a;
case 0x47cf0f:goto L47cf0f;
case 0x47cf12:c.instructions+=1;goto B47cf12;
case 0x47cf17:goto L47cf17;
case 0x47cf1b:c.instructions+=4;goto B47cf1b;
case 0x47cf1d:c.instructions+=3;goto B47cf1d;
case 0x47cf1f:c.instructions+=2;goto B47cf1f;
case 0x47cf20:c.instructions+=1;goto B47cf20;
case 0x47cf23:goto L47cf23;
case 0x47cf28:goto L47cf28;
case 0x47cf32:goto L47cf32;
case 0x47cf38:c.instructions+=3;goto B47cf38;
case 0x47cf3e:c.instructions+=2;goto B47cf3e;
case 0x47cf40:c.instructions+=1;goto B47cf40;
case 0x47cf42:goto L47cf42;
case 0x47cf45:c.instructions+=1;goto B47cf45;
case 0x47cf47:goto L47cf47;
case 0x47cf49:c.instructions+=2;goto B47cf49;
case 0x47cf4a:c.instructions+=1;goto B47cf4a;
case 0x47cf4c:goto L47cf4c;
case 0x47cf4f:c.instructions+=1;goto B47cf4f;
case 0x47cf51:goto L47cf51;
case 0x47cf53:c.instructions+=1;goto B47cf53;
case 0x47cf54:goto L47cf54;
case 0x47cf56:c.instructions+=1;goto B47cf56;
case 0x47cf5b:goto L47cf5b;
case 0x47cf61:c.instructions+=7;goto B47cf61;
case 0x47cf68:c.instructions+=6;goto B47cf68;
case 0x47cf6f:c.instructions+=5;goto B47cf6f;
case 0x47cf71:c.instructions+=4;goto B47cf71;
case 0x47cf73:c.instructions+=3;goto B47cf73;
case 0x47cf75:c.instructions+=2;goto B47cf75;
case 0x47cf78:c.instructions+=1;goto B47cf78;
case 0x47cf7b:goto L47cf7b;
case 0x47cf81:c.instructions+=7;goto B47cf81;
case 0x47cf83:c.instructions+=6;goto B47cf83;
case 0x47cf88:c.instructions+=5;goto B47cf88;
case 0x47cf8b:c.instructions+=4;goto B47cf8b;
case 0x47cf8e:c.instructions+=3;goto B47cf8e;
case 0x47cf91:c.instructions+=2;goto B47cf91;
case 0x47cf93:c.instructions+=1;goto B47cf93;
case 0x47cf95:goto L47cf95;
case 0x47cf97:c.instructions+=2;goto B47cf97;
case 0x47cf99:c.instructions+=1;goto B47cf99;
case 0x47cf9b:goto L47cf9b;
case 0x47cf9e:c.instructions+=2;goto B47cf9e;
case 0x47cfa0:c.instructions+=1;goto B47cfa0;
case 0x47cfa2:goto L47cfa2;
case 0x47cfa5:c.instructions+=5;goto B47cfa5;
case 0x47cfab:c.instructions+=4;goto B47cfab;
case 0x47cfae:c.instructions+=3;goto B47cfae;
case 0x47cfb0:c.instructions+=2;goto B47cfb0;
case 0x47cfb3:c.instructions+=1;goto B47cfb3;
case 0x47cfb5:goto L47cfb5;
case 0x47cfb7:c.instructions+=2;goto B47cfb7;
case 0x47cfb9:c.instructions+=1;goto B47cfb9;
case 0x47cfbb:goto L47cfbb;
case 0x47cfbd:goto L47cfbd;
case 0x47cfc3:c.instructions+=3;goto B47cfc3;
case 0x47cfc9:c.instructions+=2;goto B47cfc9;
case 0x47cfcb:c.instructions+=1;goto B47cfcb;
case 0x47cfcd:goto L47cfcd;
case 0x47cfcf:goto L47cfcf;
case 0x47cfd5:c.instructions+=2;goto B47cfd5;
case 0x47cfd7:c.instructions+=1;goto B47cfd7;
case 0x47cfd9:goto L47cfd9;
case 0x47cfdb:c.instructions+=1;goto B47cfdb;
case 0x47cfdd:goto L47cfdd;
case 0x47cfdf:c.instructions+=1;goto B47cfdf;
case 0x47cfe1:goto L47cfe1;
case 0x47cfe7:c.instructions+=1;goto B47cfe7;
case 0x47cfe9:goto L47cfe9;
case 0x47cfee:goto L47cfee;
case 0x47cff0:c.instructions+=4;goto B47cff0;
case 0x47cff3:c.instructions+=3;goto B47cff3;
case 0x47cff9:c.instructions+=2;goto B47cff9;
case 0x47cffb:c.instructions+=1;goto B47cffb;
case 0x47cffd:goto L47cffd;
case 0x47cfff:c.instructions+=1;goto B47cfff;
default:missing_instruction(c.pc);}
B47c002:L47c002:{c.instructions+=2;NFSU2_TR(0x47c002);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B47c004:{NFSU2_TR(0x47c004);
if(r1(R+518)){{goto L47c00d;}}
}
B47c006:L47c006:{c.instructions+=2;NFSU2_TR(0x47c006);
__builtin_memmove((R+4),(R+0),4);
}
B47c008:{NFSU2_TR(0x47c008);
TAIL_STATIC(0x46f1b0u,46f);
}
B47c00d:L47c00d:{c.instructions+=2;NFSU2_TR(0x47c00d);
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
B47c00f:{NFSU2_TR(0x47c00f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B47c010:L47c010:{c.instructions+=10;NFSU2_TR(0x47c010);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47c011:{NFSU2_TR(0x47c011);
__builtin_memmove((R+20),(R+16),4);
}
B47c013:{NFSU2_TR(0x47c013);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B47c016:{NFSU2_TR(0x47c016);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x38ull))));
}
B47c019:{NFSU2_TR(0x47c019);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47c01a:{NFSU2_TR(0x47c01a);
__builtin_memmove((R+24),(R+4),4);
}
B47c01c:{NFSU2_TR(0x47c01c);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B47c01f:{NFSU2_TR(0x47c01f);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B47c021:{NFSU2_TR(0x47c021);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47c022:{NFSU2_TR(0x47c022);
if(r1(R+518)){{goto L47c033;}}
}
B47c024:L47c024:{c.instructions+=5;NFSU2_TR(0x47c024);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B47c027:{NFSU2_TR(0x47c027);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47c02a:{NFSU2_TR(0x47c02a);
{u32 ea_=u32(r4(R+24)+u32(92u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B47c02d:{NFSU2_TR(0x47c02d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47c030:{NFSU2_TR(0x47c030);
{u32 ea_=u32(r4(R+24)+u32(92u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B47c033:L47c033:{c.instructions+=7;NFSU2_TR(0x47c033);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47c036:{NFSU2_TR(0x47c036);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47c039:{NFSU2_TR(0x47c039);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47c03c:{NFSU2_TR(0x47c03c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B47c03e:{NFSU2_TR(0x47c03e);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x90ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x90ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x90ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B47c043:{NFSU2_TR(0x47c043);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47c044:{NFSU2_TR(0x47c044);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47c047ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B47c047:L47c047:{c.instructions+=25;NFSU2_TR(0x47c047);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47c04a:{NFSU2_TR(0x47c04a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47c04d:{NFSU2_TR(0x47c04d);
{u32 ea_=u32(r4(R+0)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B47c050:{NFSU2_TR(0x47c050);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B47c053:{NFSU2_TR(0x47c053);
{u32 ea_=u32(r4(R+0)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B47c056:{NFSU2_TR(0x47c056);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
}
B47c059:{NFSU2_TR(0x47c059);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47c05f:{NFSU2_TR(0x47c05f);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B47c061:{NFSU2_TR(0x47c061);
{u32 ea_=u32(r4(R+24)+u32(132u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B47c067:{NFSU2_TR(0x47c067);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B47c06b:{NFSU2_TR(0x47c06b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47c06c:{NFSU2_TR(0x47c06c);
{u32 ea_=u32(r4(R+24)+u32(136u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B47c072:{NFSU2_TR(0x47c072);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47c075:{NFSU2_TR(0x47c075);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47c078:{NFSU2_TR(0x47c078);
{u32 ea_=u32(r4(R+0)+u32(148u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B47c07e:{NFSU2_TR(0x47c07e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47c084:{NFSU2_TR(0x47c084);
{u32 ea_=u32(r4(R+0)+u32(152u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B47c08a:{NFSU2_TR(0x47c08a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x90ull))));
}
B47c08f:{NFSU2_TR(0x47c08f);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B47c091:{NFSU2_TR(0x47c091);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B47c095:{NFSU2_TR(0x47c095);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B47c099:{NFSU2_TR(0x47c099);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47c09a:{NFSU2_TR(0x47c09a);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47c09e:{NFSU2_TR(0x47c09e);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B47c0a2:{NFSU2_TR(0x47c0a2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47c0a7ull));
TAIL_STATIC(0x43cf10u,43c);
}
B47c0a7:L47c0a7:{c.instructions+=42;NFSU2_TR(0x47c0a7);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B47c0ab:{NFSU2_TR(0x47c0ab);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47c0af:{NFSU2_TR(0x47c0af);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B47c0b3:{NFSU2_TR(0x47c0b3);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47c0b7:{NFSU2_TR(0x47c0b7);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B47c0b9:{NFSU2_TR(0x47c0b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B47c0bc:{NFSU2_TR(0x47c0bc);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B47c0c0:{NFSU2_TR(0x47c0c0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B47c0c3:{NFSU2_TR(0x47c0c3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47c0c4:{NFSU2_TR(0x47c0c4);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B47c0c8:{NFSU2_TR(0x47c0c8);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1d0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B47c0ce:{NFSU2_TR(0x47c0ce);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B47c0d2:{NFSU2_TR(0x47c0d2);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B47c0d6:{NFSU2_TR(0x47c0d6);
{u32 ea_=u32(u32(7882068u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B47c0dc:{NFSU2_TR(0x47c0dc);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B47c0e0:{NFSU2_TR(0x47c0e0);
{u32 ea_=u32(u32(7882068u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B47c0e6:{NFSU2_TR(0x47c0e6);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B47c0e8:{NFSU2_TR(0x47c0e8);
{u32 ea_=u32(u32(7882068u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B47c0ee:{NFSU2_TR(0x47c0ee);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B47c0f2:{NFSU2_TR(0x47c0f2);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B47c0f6:{NFSU2_TR(0x47c0f6);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B47c0fa:{NFSU2_TR(0x47c0fa);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B47c0fe:{NFSU2_TR(0x47c0fe);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47c102:{NFSU2_TR(0x47c102);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B47c104:{NFSU2_TR(0x47c104);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B47c108:{NFSU2_TR(0x47c108);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B47c10c:{NFSU2_TR(0x47c10c);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B47c110:{NFSU2_TR(0x47c110);
{u32 ea_=u32(r4(R+24)+u32(128u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B47c116:{NFSU2_TR(0x47c116);
{u32 ea_=u32(r4(R+24)+u32(132u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B47c11c:{NFSU2_TR(0x47c11c);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B47c120:{NFSU2_TR(0x47c120);
{u32 ea_=u32(r4(R+24)+u32(136u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B47c126:{NFSU2_TR(0x47c126);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B47c12a:{NFSU2_TR(0x47c12a);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B47c12e:{NFSU2_TR(0x47c12e);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B47c130:{NFSU2_TR(0x47c130);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B47c134:{NFSU2_TR(0x47c134);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47c138:{NFSU2_TR(0x47c138);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B47c13c:{NFSU2_TR(0x47c13c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47c142:{NFSU2_TR(0x47c142);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B47c144:{NFSU2_TR(0x47c144);
{u32 ea_=u32(r4(R+24)+u32(132u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B47c14a:{NFSU2_TR(0x47c14a);
{u32 ea_=u32(r4(R+24)+u32(136u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B47c150:{NFSU2_TR(0x47c150);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47c155ull));
TAIL_STATIC(0x46b100u,46b);
}
B47c155:L47c155:{c.instructions+=2;NFSU2_TR(0x47c155);
__builtin_memmove((R+4),(R+24),4);
}
B47c157:{NFSU2_TR(0x47c157);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47c15cull));
TAIL_STATIC(0x46f9d0u,46f);
}
B47c15c:L47c15c:{c.instructions+=4;NFSU2_TR(0x47c15c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B47c15e:{NFSU2_TR(0x47c15e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47c15f:{NFSU2_TR(0x47c15f);
__builtin_memmove((R+4),(R+24),4);
}
B47c161:{NFSU2_TR(0x47c161);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47c164ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B47c164:L47c164:{c.instructions+=3;NFSU2_TR(0x47c164);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47c165:{NFSU2_TR(0x47c165);
__builtin_memmove((R+4),(R+24),4);
}
B47c167:{NFSU2_TR(0x47c167);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47c16cull));
TAIL_STATIC(0x46f580u,46f);
}
B47c16c:L47c16c:{c.instructions+=4;NFSU2_TR(0x47c16c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B47c16e:{NFSU2_TR(0x47c16e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47c16f:{NFSU2_TR(0x47c16f);
__builtin_memmove((R+4),(R+24),4);
}
B47c171:{NFSU2_TR(0x47c171);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47c174ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B47c174:L47c174:{c.instructions+=4;NFSU2_TR(0x47c174);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B47c176:{NFSU2_TR(0x47c176);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47c177:{NFSU2_TR(0x47c177);
__builtin_memmove((R+4),(R+24),4);
}
B47c179:{NFSU2_TR(0x47c179);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47c17cull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B47c17c:L47c17c:{c.instructions+=4;NFSU2_TR(0x47c17c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B47c17e:{NFSU2_TR(0x47c17e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47c17f:{NFSU2_TR(0x47c17f);
__builtin_memmove((R+4),(R+24),4);
}
B47c181:{NFSU2_TR(0x47c181);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47c184ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B47c184:L47c184:{c.instructions+=2;NFSU2_TR(0x47c184);
__builtin_memmove((R+4),(R+24),4);
}
B47c186:{NFSU2_TR(0x47c186);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47c18bull));
TAIL_STATIC(0x46f460u,46f);
}
B47c18b:L47c18b:{c.instructions+=4;NFSU2_TR(0x47c18b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B47c18d:{NFSU2_TR(0x47c18d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47c18e:{NFSU2_TR(0x47c18e);
__builtin_memmove((R+4),(R+24),4);
}
B47c190:{NFSU2_TR(0x47c190);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47c193ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B47c193:L47c193:{c.instructions+=5;NFSU2_TR(0x47c193);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B47c194:{NFSU2_TR(0x47c194);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B47c195:{NFSU2_TR(0x47c195);
__builtin_memmove((R+16),(R+20),4);
}
B47c197:{NFSU2_TR(0x47c197);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B47c198:{NFSU2_TR(0x47c198);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B47c1a0:L47c1a0:{c.instructions+=6;NFSU2_TR(0x47c1a0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47c1a1:{NFSU2_TR(0x47c1a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47c1a7:{NFSU2_TR(0x47c1a7);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B47c1a8:{NFSU2_TR(0x47c1a8);
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
B47c1ab:{NFSU2_TR(0x47c1ab);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47c1ac:{NFSU2_TR(0x47c1ac);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L47c207;}}
}
B47c1ae:L47c1ae:{c.instructions+=1;NFSU2_TR(0x47c1ae);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x47c20cull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B47c1b5:L47c1b5:{c.instructions+=4;NFSU2_TR(0x47c1b5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B47c1b6:{NFSU2_TR(0x47c1b6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B47c1b9:{NFSU2_TR(0x47c1b9);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x74ull))));
}
B47c1bc:{NFSU2_TR(0x47c1bc);
TAIL_STATIC(0x46b100u,46b);
}
B47c1c1:L47c1c1:{c.instructions+=9;NFSU2_TR(0x47c1c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B47c1c4:{NFSU2_TR(0x47c1c4);
{u32 ea_=u32(r4(R+8)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B47c1c7:{NFSU2_TR(0x47c1c7);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47c1cb:{NFSU2_TR(0x47c1cb);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x74ull))));
__builtin_memmove((R+24),(U+0),4);
}
B47c1ce:{NFSU2_TR(0x47c1ce);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B47c1d2:{NFSU2_TR(0x47c1d2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47c1d3:{NFSU2_TR(0x47c1d3);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B47c1d6:{NFSU2_TR(0x47c1d6);
__builtin_memmove((R+4),(R+24),4);
}
B47c1d8:{NFSU2_TR(0x47c1d8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47c1ddull));
TAIL_STATIC(0x46b100u,46b);
}
B47c1dd:L47c1dd:{c.instructions+=3;NFSU2_TR(0x47c1dd);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B47c1e0:{NFSU2_TR(0x47c1e0);
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
B47c1e2:{NFSU2_TR(0x47c1e2);
if(r1(R+518)){{goto L47c207;}}
}
B47c1e4:L47c1e4:{c.instructions+=5;NFSU2_TR(0x47c1e4);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47c1e8:{NFSU2_TR(0x47c1e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47c1eb:{NFSU2_TR(0x47c1eb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B47c1ec:{NFSU2_TR(0x47c1ec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B47c1ed:{NFSU2_TR(0x47c1ed);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B47c1f0:L47c1f0:{c.instructions+=8;NFSU2_TR(0x47c1f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B47c1f3:{NFSU2_TR(0x47c1f3);
{u32 ea_=u32(r4(R+8)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B47c1f6:{NFSU2_TR(0x47c1f6);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47c1fa:{NFSU2_TR(0x47c1fa);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47c1fb:{NFSU2_TR(0x47c1fb);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B47c1fe:{NFSU2_TR(0x47c1fe);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47c1ff:{NFSU2_TR(0x47c1ff);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x74ull))));
}
B47c202:{NFSU2_TR(0x47c202);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47c207ull));
TAIL_STATIC(0x47aaa0u,47a);
}
B47c207:L47c207:{c.instructions+=3;NFSU2_TR(0x47c207);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B47c208:{NFSU2_TR(0x47c208);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B47c209:{NFSU2_TR(0x47c209);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B47c220:L47c220:{c.instructions+=6;NFSU2_TR(0x47c220);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47c221:{NFSU2_TR(0x47c221);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47c222:{NFSU2_TR(0x47c222);
__builtin_memmove((R+24),(R+4),4);
}
B47c224:{NFSU2_TR(0x47c224);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47c22a:{NFSU2_TR(0x47c22a);
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
B47c22c:{NFSU2_TR(0x47c22c);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L47c281;}}
}
B47c22e:L47c22e:{c.instructions+=2;NFSU2_TR(0x47c22e);
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
B47c231:{NFSU2_TR(0x47c231);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L47c281;}}
}
B47c233:L47c233:{c.instructions+=10;NFSU2_TR(0x47c233);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47c236:{NFSU2_TR(0x47c236);
{u32 ea_=u32(r4(R+0)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B47c239:{NFSU2_TR(0x47c239);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47c23d:{NFSU2_TR(0x47c23d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47c23e:{NFSU2_TR(0x47c23e);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B47c242:{NFSU2_TR(0x47c242);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xacull))));
__builtin_memmove((R+28),(U+0),4);
}
B47c248:{NFSU2_TR(0x47c248);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47c249:{NFSU2_TR(0x47c249);
{u32 ea_=u32(r4(R+28)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B47c24c:{NFSU2_TR(0x47c24c);
__builtin_memmove((R+4),(R+28),4);
}
B47c24e:{NFSU2_TR(0x47c24e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47c253ull));
TAIL_STATIC(0x46b100u,46b);
}
B47c253:L47c253:{c.instructions+=3;NFSU2_TR(0x47c253);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B47c256:{NFSU2_TR(0x47c256);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B47c258:{NFSU2_TR(0x47c258);
if(r1(R+518)){{goto L47c261;}}
}
B47c25a:L47c25a:{c.instructions+=2;NFSU2_TR(0x47c25a);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B47c25e:{NFSU2_TR(0x47c25e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47c261:L47c261:{c.instructions+=3;NFSU2_TR(0x47c261);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B47c267:{NFSU2_TR(0x47c267);
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
B47c269:{NFSU2_TR(0x47c269);
if(r1(R+518)){{goto L47c280;}}
}
B47c26b:L47c26b:{c.instructions+=9;NFSU2_TR(0x47c26b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B47c26e:{NFSU2_TR(0x47c26e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47c271:{NFSU2_TR(0x47c271);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47c273:{NFSU2_TR(0x47c273);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47c275:{NFSU2_TR(0x47c275);
__builtin_memmove((R+4),(R+0),4);
}
B47c277:{NFSU2_TR(0x47c277);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47c278:{NFSU2_TR(0x47c278);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47c279:{NFSU2_TR(0x47c279);
__builtin_memmove((R+4),(R+28),4);
}
B47c27b:{NFSU2_TR(0x47c27b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47c280ull));
TAIL_STATIC(0x459990u,459);
}
B47c280:L47c280:{c.instructions+=1;NFSU2_TR(0x47c280);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B47c281:L47c281:{c.instructions+=3;NFSU2_TR(0x47c281);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B47c282:{NFSU2_TR(0x47c282);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B47c283:{NFSU2_TR(0x47c283);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B47c290:L47c290:{c.instructions+=9;NFSU2_TR(0x47c290);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47c291:{NFSU2_TR(0x47c291);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47c292:{NFSU2_TR(0x47c292);
__builtin_memmove((R+24),(R+4),4);
}
B47c294:{NFSU2_TR(0x47c294);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47c295:{NFSU2_TR(0x47c295);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B47c299:{NFSU2_TR(0x47c299);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x90ull))));
__builtin_memmove((R+20),(U+0),4);
}
B47c29f:{NFSU2_TR(0x47c29f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47c2a0:{NFSU2_TR(0x47c2a0);
__builtin_memmove((R+4),(R+20),4);
}
B47c2a2:{NFSU2_TR(0x47c2a2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47c2a7ull));
TAIL_STATIC(0x46b100u,46b);
}
B47c2a7:L47c2a7:{c.instructions+=3;NFSU2_TR(0x47c2a7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47c2a8:{NFSU2_TR(0x47c2a8);
__builtin_memmove((R+4),(R+24),4);
}
B47c2aa:{NFSU2_TR(0x47c2aa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47c2afull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x47c1a0u);}goto L47c1a0;}
}
B47c2af:L47c2af:{c.instructions+=3;NFSU2_TR(0x47c2af);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47c2b0:{NFSU2_TR(0x47c2b0);
__builtin_memmove((R+4),(R+24),4);
}
B47c2b2:{NFSU2_TR(0x47c2b2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47c2b7ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x47c220u);}goto L47c220;}
}
B47c2b7:L47c2b7:{c.instructions+=3;NFSU2_TR(0x47c2b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47c2bd:{NFSU2_TR(0x47c2bd);
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
B47c2bf:{NFSU2_TR(0x47c2bf);
if(r1(R+518)){{goto L47c3b3;}}
}
B47c2c5:L47c2c5:{c.instructions+=4;NFSU2_TR(0x47c2c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47c2c8:{NFSU2_TR(0x47c2c8);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B47c2cb:{NFSU2_TR(0x47c2cb);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B47c2cd:{NFSU2_TR(0x47c2cd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L47c329;}}
}
B47c2cf:L47c2cf:{c.instructions+=2;NFSU2_TR(0x47c2cf);
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
B47c2d2:{NFSU2_TR(0x47c2d2);
if(r1(R+518)){{goto L47c329;}}
}
B47c2d4:L47c2d4:{c.instructions+=11;NFSU2_TR(0x47c2d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47c2d7:{NFSU2_TR(0x47c2d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B47c2dd:{NFSU2_TR(0x47c2dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47c2e0:{NFSU2_TR(0x47c2e0);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47c2e4:{NFSU2_TR(0x47c2e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47c2e7:{NFSU2_TR(0x47c2e7);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B47c2eb:{NFSU2_TR(0x47c2eb);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47c2ed:{NFSU2_TR(0x47c2ed);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47c2ee:{NFSU2_TR(0x47c2ee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B47c2f0:{NFSU2_TR(0x47c2f0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47c2f1:{NFSU2_TR(0x47c2f1);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47c2f4ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B47c2f4:L47c2f4:{c.instructions+=4;NFSU2_TR(0x47c2f4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47c2f5:{NFSU2_TR(0x47c2f5);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((R+4),(U+0),4);
}
B47c2f8:{NFSU2_TR(0x47c2f8);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B47c2fb:{NFSU2_TR(0x47c2fb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47c300ull));
TAIL_STATIC(0x459990u,459);
}
B47c300:L47c300:{c.instructions+=11;NFSU2_TR(0x47c300);
{u32 ea_=u32(r4(R+24)+u32(164u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B47c306:{NFSU2_TR(0x47c306);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47c30c:{NFSU2_TR(0x47c30c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47c30e:{NFSU2_TR(0x47c30e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B47c318:{NFSU2_TR(0x47c318);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B47c31b:{NFSU2_TR(0x47c31b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47c31c:{NFSU2_TR(0x47c31c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47c31e:{NFSU2_TR(0x47c31e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47c31f:{NFSU2_TR(0x47c31f);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B47c322:{NFSU2_TR(0x47c322);
__builtin_memmove((R+4),(R+20),4);
}
B47c324:{NFSU2_TR(0x47c324);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47c329ull));
TAIL_STATIC(0x459990u,459);
}
B47c329:L47c329:{c.instructions+=4;NFSU2_TR(0x47c329);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47c32f:{NFSU2_TR(0x47c32f);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B47c330:{NFSU2_TR(0x47c330);
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
B47c333:{NFSU2_TR(0x47c333);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L47c3b3;}}
}
B47c335:L47c335:{c.instructions+=1;NFSU2_TR(0x47c335);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x47c3bcull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B47c33c:L47c33c:{c.instructions+=3;NFSU2_TR(0x47c33c);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B47c342:{NFSU2_TR(0x47c342);
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
B47c344:{NFSU2_TR(0x47c344);
if(r1(R+518)){{goto L47c3b3;}}
}
B47c346:L47c346:{c.instructions+=13;NFSU2_TR(0x47c346);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47c34c:{NFSU2_TR(0x47c34c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B47c34f:{NFSU2_TR(0x47c34f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B47c359:{NFSU2_TR(0x47c359);
{u32 ea_=u32(r4(R+8)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B47c35c:{NFSU2_TR(0x47c35c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47c35f:{NFSU2_TR(0x47c35f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47c361:{NFSU2_TR(0x47c361);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47c362:{NFSU2_TR(0x47c362);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B47c365:{NFSU2_TR(0x47c365);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B47c369:{NFSU2_TR(0x47c369);
{u32 ea_=u32(r4(R+24)+u32(136u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B47c36f:{NFSU2_TR(0x47c36f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((R+4),(U+0),4);
}
B47c372:{NFSU2_TR(0x47c372);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B47c375:{NFSU2_TR(0x47c375);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47c37aull));
TAIL_STATIC(0x459990u,459);
}
B47c37a:L47c37a:{c.instructions+=10;NFSU2_TR(0x47c37a);
{u32 ea_=u32(r4(R+24)+u32(164u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B47c380:{NFSU2_TR(0x47c380);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47c386:{NFSU2_TR(0x47c386);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47c389:{NFSU2_TR(0x47c389);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47c38b:{NFSU2_TR(0x47c38b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47c38c:{NFSU2_TR(0x47c38c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47c38e:{NFSU2_TR(0x47c38e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47c38f:{NFSU2_TR(0x47c38f);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B47c392:{NFSU2_TR(0x47c392);
__builtin_memmove((R+4),(R+20),4);
}
B47c394:{NFSU2_TR(0x47c394);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47c399ull));
TAIL_STATIC(0x459990u,459);
}
B47c399:L47c399:{c.instructions+=4;NFSU2_TR(0x47c399);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B47c39a:{NFSU2_TR(0x47c39a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B47c39b:{NFSU2_TR(0x47c39b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B47c39c:{NFSU2_TR(0x47c39c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B47c39f:L47c39f:{c.instructions+=3;NFSU2_TR(0x47c39f);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B47c3a5:{NFSU2_TR(0x47c3a5);
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
B47c3a7:{NFSU2_TR(0x47c3a7);
if(r1(R+518)){{goto L47c3b3;}}
}
B47c3a9:L47c3a9:{c.instructions+=1;NFSU2_TR(0x47c3a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B47c3b3:L47c3b3:{c.instructions+=4;NFSU2_TR(0x47c3b3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B47c3b4:{NFSU2_TR(0x47c3b4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B47c3b5:{NFSU2_TR(0x47c3b5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B47c3b6:{NFSU2_TR(0x47c3b6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B47c3d0:L47c3d0:{c.instructions+=6;NFSU2_TR(0x47c3d0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47c3d1:{NFSU2_TR(0x47c3d1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47c3d2:{NFSU2_TR(0x47c3d2);
__builtin_memmove((R+24),(R+4),4);
}
B47c3d4:{NFSU2_TR(0x47c3d4);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B47c3d7:{NFSU2_TR(0x47c3d7);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B47c3d9:{NFSU2_TR(0x47c3d9);
if(r1(R+518)){{goto L47c3ec;}}
}
B47c3db:L47c3db:{c.instructions+=5;NFSU2_TR(0x47c3db);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B47c3df:{NFSU2_TR(0x47c3df);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47c3e3:{NFSU2_TR(0x47c3e3);
{u32 ea_=u32(r4(R+24)+u32(92u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B47c3e6:{NFSU2_TR(0x47c3e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47c3e9:{NFSU2_TR(0x47c3e9);
{u32 ea_=u32(r4(R+24)+u32(92u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B47c3ec:L47c3ec:{c.instructions+=2;NFSU2_TR(0x47c3ec);
__builtin_memmove((R+4),(R+24),4);
}
B47c3ee:{NFSU2_TR(0x47c3ee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47c3f3ull));
TAIL_STATIC(0x45d0a0u,45d);
}
B47c3f3:L47c3f3:{c.instructions+=3;NFSU2_TR(0x47c3f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47c3f6:{NFSU2_TR(0x47c3f6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B47c3f8:{NFSU2_TR(0x47c3f8);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47c3fbull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B47c3fb:L47c3fb:{c.instructions+=5;NFSU2_TR(0x47c3fb);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B47c3ff:{NFSU2_TR(0x47c3ff);
{u32 ea_=u32(u32(7882064u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B47c405:{NFSU2_TR(0x47c405);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B47c407:{NFSU2_TR(0x47c407);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B47c40a:{NFSU2_TR(0x47c40a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L47c470;}}
}
B47c40c:L47c40c:{c.instructions+=6;NFSU2_TR(0x47c40c);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B47c410:{NFSU2_TR(0x47c410);
{u32 ea_=u32(u32(7881984u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B47c416:{NFSU2_TR(0x47c416);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B47c41a:{NFSU2_TR(0x47c41a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B47c41c:{NFSU2_TR(0x47c41c);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B47c41f:{NFSU2_TR(0x47c41f);
if(r1(R+514)){{goto L47c429;}}
}
B47c421:L47c421:{c.instructions+=2;NFSU2_TR(0x47c421);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B47c423:{NFSU2_TR(0x47c423);
{u32 ea_=u32(u32(7881984u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B47c429:L47c429:{c.instructions+=13;NFSU2_TR(0x47c429);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47c42c:{NFSU2_TR(0x47c42c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47c432:{NFSU2_TR(0x47c432);
{u32 ea_=u32(r4(R+0)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B47c435:{NFSU2_TR(0x47c435);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B47c438:{NFSU2_TR(0x47c438);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B47c43a:{NFSU2_TR(0x47c43a);
{u32 ea_=u32(u32(7882064u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B47c440:{NFSU2_TR(0x47c440);
{u32 ea_=u32(u32(7905936u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B47c446:{NFSU2_TR(0x47c446);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B47c448:{NFSU2_TR(0x47c448);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B47c44b:{NFSU2_TR(0x47c44b);
{u32 ea_=u32(r4(R+24)+u32(248u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B47c451:{NFSU2_TR(0x47c451);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47c454:{NFSU2_TR(0x47c454);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B47c456:{NFSU2_TR(0x47c456);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L47c478;}}
}
B47c458:L47c458:{c.instructions+=4;NFSU2_TR(0x47c458);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47c45c:{NFSU2_TR(0x47c45c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47c45d:{NFSU2_TR(0x47c45d);
__builtin_memmove((R+4),(R+24),4);
}
B47c45f:{NFSU2_TR(0x47c45f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47c464ull));
TAIL_STATIC(0x4701a0u,470);
}
B47c464:L47c464:{c.instructions+=2;NFSU2_TR(0x47c464);
__builtin_memmove((R+4),(R+24),4);
}
B47c466:{NFSU2_TR(0x47c466);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47c46bull));
TAIL_STATIC(0x45d190u,45d);
}
B47c46b:L47c46b:{c.instructions+=3;NFSU2_TR(0x47c46b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B47c46c:{NFSU2_TR(0x47c46c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B47c46d:{NFSU2_TR(0x47c46d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B47c470:L47c470:{c.instructions+=2;NFSU2_TR(0x47c470);
{u32 ea_=u32(u32(7882064u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B47c476:{NFSU2_TR(0x47c476);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x47c429u);}goto L47c429;}
}
B47c478:L47c478:{c.instructions+=4;NFSU2_TR(0x47c478);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47c47c:{NFSU2_TR(0x47c47c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47c47d:{NFSU2_TR(0x47c47d);
__builtin_memmove((R+4),(R+24),4);
}
B47c47f:{NFSU2_TR(0x47c47f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47c484ull));
TAIL_STATIC(0x470540u,470);
}
B47c484:L47c484:{c.instructions+=2;NFSU2_TR(0x47c484);
__builtin_memmove((R+4),(R+24),4);
}
B47c486:{NFSU2_TR(0x47c486);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47c48bull));
TAIL_STATIC(0x45d190u,45d);
}
B47c48b:L47c48b:{c.instructions+=3;NFSU2_TR(0x47c48b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B47c48c:{NFSU2_TR(0x47c48c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B47c48d:{NFSU2_TR(0x47c48d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B47c490:L47c490:{c.instructions+=6;NFSU2_TR(0x47c490);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47c491:{NFSU2_TR(0x47c491);
__builtin_memmove((R+24),(R+4),4);
}
B47c493:{NFSU2_TR(0x47c493);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B47c496:{NFSU2_TR(0x47c496);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B47c498:{NFSU2_TR(0x47c498);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47c499:{NFSU2_TR(0x47c499);
if(r1(R+518)){{goto L47c4ac;}}
}
B47c49b:L47c49b:{c.instructions+=5;NFSU2_TR(0x47c49b);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B47c49f:{NFSU2_TR(0x47c49f);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47c4a3:{NFSU2_TR(0x47c4a3);
{u32 ea_=u32(r4(R+24)+u32(92u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B47c4a6:{NFSU2_TR(0x47c4a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47c4a9:{NFSU2_TR(0x47c4a9);
{u32 ea_=u32(r4(R+24)+u32(92u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B47c4ac:L47c4ac:{c.instructions+=4;NFSU2_TR(0x47c4ac);
__builtin_memmove((R+0),gp(0x8900d8),4);
}
B47c4b1:{NFSU2_TR(0x47c4b1);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B47c4b3:{NFSU2_TR(0x47c4b3);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B47c4b5:{NFSU2_TR(0x47c4b5);
if(r1(R+518)){{goto L47c52f;}}
}
B47c4b7:L47c4b7:{c.instructions+=3;NFSU2_TR(0x47c4b7);
__builtin_memmove((R+4),gp(0x82bc5c),1);
}
B47c4bd:{NFSU2_TR(0x47c4bd);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B47c4bf:{NFSU2_TR(0x47c4bf);
if(r1(R+518)){{goto L47c4c6;}}
}
B47c4c1:L47c4c1:{c.instructions+=2;NFSU2_TR(0x47c4c1);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x7ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B47c4c4:{NFSU2_TR(0x47c4c4);
if(r1(R+518)){{goto L47c4cb;}}
}
B47c4c6:L47c4c6:{c.instructions+=2;NFSU2_TR(0x47c4c6);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B47c4c9:{NFSU2_TR(0x47c4c9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L47c52f;}}
}
B47c4cb:L47c4cb:{c.instructions+=20;NFSU2_TR(0x47c4cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47c4ce:{NFSU2_TR(0x47c4ce);
w4(R+0,u32(0x2ull));
}
B47c4d3:{NFSU2_TR(0x47c4d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47c4d9:{NFSU2_TR(0x47c4d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xccull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47c4df:{NFSU2_TR(0x47c4df);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
w4(U+4,u32(0x447a0000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B47c4e6:{NFSU2_TR(0x47c4e6);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbcull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B47c4ed:{NFSU2_TR(0x47c4ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x84ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47c4f3:{NFSU2_TR(0x47c4f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47c4f9:{NFSU2_TR(0x47c4f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47c4fc:{NFSU2_TR(0x47c4fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B47c4ff:{NFSU2_TR(0x47c4ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47c502:{NFSU2_TR(0x47c502);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47c505:{NFSU2_TR(0x47c505);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B47c50c:{NFSU2_TR(0x47c50c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47c50f:{NFSU2_TR(0x47c50f);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47c513:{NFSU2_TR(0x47c513);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B47c517:{NFSU2_TR(0x47c517);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B47c51d:{NFSU2_TR(0x47c51d);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B47c51f:{NFSU2_TR(0x47c51f);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B47c522:{NFSU2_TR(0x47c522);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L47c6ac;}}
}
B47c528:L47c528:{c.instructions+=2;NFSU2_TR(0x47c528);
w1(R+0,u8(0x1ull));
}
B47c52a:{NFSU2_TR(0x47c52a);
{goto L47c6ae;}
}
B47c52f:L47c52f:{c.instructions+=5;NFSU2_TR(0x47c52f);
__builtin_memmove((R+0),gp(0x890118),4);
}
B47c534:{NFSU2_TR(0x47c534);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47c535:{NFSU2_TR(0x47c535);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
}
B47c537:{NFSU2_TR(0x47c537);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B47c539:{NFSU2_TR(0x47c539);
if(r1(R+518)){{goto L47c542;}}
}
B47c53b:L47c53b:{c.instructions+=2;NFSU2_TR(0x47c53b);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B47c53e:{NFSU2_TR(0x47c53e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L47c542;}}
}
B47c540:L47c540:{c.instructions+=1;NFSU2_TR(0x47c540);
w1(R+12,u8(0x1ull));
}
B47c542:L47c542:{c.instructions+=2;NFSU2_TR(0x47c542);
w4(R+4,u32(0x827e88ull));
}
B47c547:{NFSU2_TR(0x47c547);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47c54cull));
TAIL_STATIC(0x430560u,430);
}
B47c54c:L47c54c:{c.instructions+=2;NFSU2_TR(0x47c54c);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B47c54e:{NFSU2_TR(0x47c54e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L47c57c;}}
}
B47c550:L47c550:{c.instructions+=2;NFSU2_TR(0x47c550);
w4(R+4,u32(0x827e88ull));
}
B47c555:{NFSU2_TR(0x47c555);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47c55aull));
TAIL_STATIC(0x430420u,430);
}
B47c55a:L47c55a:{c.instructions+=2;NFSU2_TR(0x47c55a);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B47c55c:{NFSU2_TR(0x47c55c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L47c57c;}}
}
B47c55e:L47c55e:{c.instructions+=2;NFSU2_TR(0x47c55e);
w4(R+4,u32(0x827e88ull));
}
B47c563:{NFSU2_TR(0x47c563);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47c568ull));
TAIL_STATIC(0x430350u,430);
}
B47c568:L47c568:{c.instructions+=2;NFSU2_TR(0x47c568);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B47c56a:{NFSU2_TR(0x47c56a);
if(r1(R+518)){{goto L47c570;}}
}
B47c56c:L47c56c:{c.instructions+=2;NFSU2_TR(0x47c56c);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B47c56e:{NFSU2_TR(0x47c56e);
if(r1(R+518)){{goto L47c57c;}}
}
B47c570:L47c570:{c.instructions+=2;NFSU2_TR(0x47c570);
u8 U[8];
__builtin_memmove((U+0),gp(0x82a3a4),4);
w1(R+523,sborrow<u32>(r4(U+0),r4(R+28)));
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B47c576:{NFSU2_TR(0x47c576);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L47c57c;}}
}
B47c578:L47c578:{c.instructions+=2;NFSU2_TR(0x47c578);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B47c57a:{NFSU2_TR(0x47c57a);
{goto L47c581;}
}
B47c57c:L47c57c:{c.instructions+=1;NFSU2_TR(0x47c57c);
w4(R+0,u32(0x1ull));
}
B47c581:L47c581:{c.instructions+=4;NFSU2_TR(0x47c581);
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
B47c583:{NFSU2_TR(0x47c583);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B47c589:{NFSU2_TR(0x47c589);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B47c58a:{NFSU2_TR(0x47c58a);
if(r1(R+518)){{goto L47c59d;}}
}
B47c58c:L47c58c:{c.instructions+=4;NFSU2_TR(0x47c58c);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47c590:{NFSU2_TR(0x47c590);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47c591:{NFSU2_TR(0x47c591);
__builtin_memmove((R+4),(R+24),4);
}
B47c593:{NFSU2_TR(0x47c593);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47c598ull));
TAIL_STATIC(0x46fa30u,46f);
}
B47c598:L47c598:{c.instructions+=3;NFSU2_TR(0x47c598);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B47c599:{NFSU2_TR(0x47c599);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B47c59a:{NFSU2_TR(0x47c59a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B47c59d:L47c59d:{c.instructions+=8;NFSU2_TR(0x47c59d);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47c59e:{NFSU2_TR(0x47c59e);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B47c5a2:{NFSU2_TR(0x47c5a2);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47c5a3:{NFSU2_TR(0x47c5a3);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+4),(U+0),4);
}
B47c5a9:{NFSU2_TR(0x47c5a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xdcull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B47c5b3:{NFSU2_TR(0x47c5b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xecull))));
w4(U+4,u32(0x447a0000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B47c5bd:{NFSU2_TR(0x47c5bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47c5c3:{NFSU2_TR(0x47c5c3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47c5c8ull));
TAIL_STATIC(0x47bcc0u,47b);
}
B47c5c8:L47c5c8:{c.instructions+=3;NFSU2_TR(0x47c5c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x280ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47c5ce:{NFSU2_TR(0x47c5ce);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B47c5d1:{NFSU2_TR(0x47c5d1);
if(r1(R+518)){{goto L47c5dc;}}
}
B47c5d3:L47c5d3:{c.instructions+=2;NFSU2_TR(0x47c5d3);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B47c5d6:{NFSU2_TR(0x47c5d6);
if(r1(R+518)){{goto L47c5dc;}}
}
B47c5d8:L47c5d8:{c.instructions+=2;NFSU2_TR(0x47c5d8);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B47c5da:{NFSU2_TR(0x47c5da);
{goto L47c5e1;}
}
B47c5dc:L47c5dc:{c.instructions+=1;NFSU2_TR(0x47c5dc);
w4(R+0,u32(0x1ull));
}
B47c5e1:L47c5e1:{c.instructions+=11;NFSU2_TR(0x47c5e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B47c5e4:{NFSU2_TR(0x47c5e4);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x291ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B47c5ea:{NFSU2_TR(0x47c5ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47c5ed:{NFSU2_TR(0x47c5ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47c5f0:{NFSU2_TR(0x47c5f0);
{u32 ea_=u32(r4(R+4)+u32(524u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B47c5f6:{NFSU2_TR(0x47c5f6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47c5f7:{NFSU2_TR(0x47c5f7);
{u32 ea_=u32(u32(7881304u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B47c5fd:{NFSU2_TR(0x47c5fd);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x94ull))));
__builtin_memmove((R+28),(U+0),4);
}
B47c603:{NFSU2_TR(0x47c603);
__builtin_memmove((R+4),(R+28),4);
}
B47c605:{NFSU2_TR(0x47c605);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B47c608:{NFSU2_TR(0x47c608);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47c60dull));
TAIL_STATIC(0x576970u,576);
}
B47c60d:L47c60d:{c.instructions+=3;NFSU2_TR(0x47c60d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B47c60f:{NFSU2_TR(0x47c60f);
__builtin_memmove((R+4),(R+28),4);
}
B47c611:{NFSU2_TR(0x47c611);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47c614ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B47c614:L47c614:{c.instructions+=4;NFSU2_TR(0x47c614);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47c61a:{NFSU2_TR(0x47c61a);
__builtin_memmove((R+4),(R+24),4);
}
B47c61c:{NFSU2_TR(0x47c61c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x90ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47c622:{NFSU2_TR(0x47c622);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47c627ull));
TAIL_STATIC(0x45d560u,45d);
}
B47c627:L47c627:{c.instructions+=4;NFSU2_TR(0x47c627);
{u32 ea_=u32(r4(R+24)+u32(688u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B47c62d:{NFSU2_TR(0x47c62d);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47c62e:{NFSU2_TR(0x47c62e);
__builtin_memmove((R+4),(R+24),4);
}
B47c630:{NFSU2_TR(0x47c630);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47c635ull));
TAIL_STATIC(0x45d670u,45d);
}
B47c635:L47c635:{c.instructions+=8;NFSU2_TR(0x47c635);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B47c63c:{NFSU2_TR(0x47c63c);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47c640:{NFSU2_TR(0x47c640);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47c641:{NFSU2_TR(0x47c641);
__builtin_memmove((R+4),(R+24),4);
}
B47c643:{NFSU2_TR(0x47c643);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B47c647:{NFSU2_TR(0x47c647);
{u32 ea_=u32(u32(7881304u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B47c64d:{NFSU2_TR(0x47c64d);
{u32 ea_=u32(r4(R+24)+u32(140u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B47c653:{NFSU2_TR(0x47c653);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47c658ull));
TAIL_STATIC(0x470d50u,470);
}
B47c658:L47c658:{c.instructions+=3;NFSU2_TR(0x47c658);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47c659:{NFSU2_TR(0x47c659);
__builtin_memmove((R+4),(R+24),4);
}
B47c65b:{NFSU2_TR(0x47c65b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47c660ull));
TAIL_STATIC(0x470ee0u,470);
}
B47c660:L47c660:{c.instructions+=4;NFSU2_TR(0x47c660);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B47c666:{NFSU2_TR(0x47c666);
__builtin_memmove((R+4),(R+24),4);
}
B47c668:{NFSU2_TR(0x47c668);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xccull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47c66e:{NFSU2_TR(0x47c66e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47c673ull));
TAIL_STATIC(0x45d7e0u,45d);
}
B47c673:L47c673:{c.instructions+=15;NFSU2_TR(0x47c673);
{u32 ea_=u32(r4(R+24)+u32(132u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B47c679:{NFSU2_TR(0x47c679);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47c67c:{NFSU2_TR(0x47c67c);
{u32 ea_=u32(r4(R+0)+u32(68u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B47c67f:{NFSU2_TR(0x47c67f);
{u32 ea_=u32(r4(R+24)+u32(112u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B47c682:{NFSU2_TR(0x47c682);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47c685:{NFSU2_TR(0x47c685);
{u32 ea_=u32(r4(R+4)+u32(72u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B47c688:{NFSU2_TR(0x47c688);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B47c68f:{NFSU2_TR(0x47c68f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47c692:{NFSU2_TR(0x47c692);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47c696:{NFSU2_TR(0x47c696);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B47c697:{NFSU2_TR(0x47c697);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B47c69b:{NFSU2_TR(0x47c69b);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B47c6a1:{NFSU2_TR(0x47c6a1);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B47c6a3:{NFSU2_TR(0x47c6a3);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B47c6a6:{NFSU2_TR(0x47c6a6);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L47c6ac;}}
}
B47c6a8:L47c6a8:{c.instructions+=2;NFSU2_TR(0x47c6a8);
w1(R+0,u8(0x1ull));
}
B47c6aa:{NFSU2_TR(0x47c6aa);
{goto L47c6ae;}
}
B47c6ac:L47c6ac:{c.instructions+=1;NFSU2_TR(0x47c6ac);
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
B47c6ae:L47c6ae:{c.instructions+=10;NFSU2_TR(0x47c6ae);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B47c6b1:{NFSU2_TR(0x47c6b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47c6b4:{NFSU2_TR(0x47c6b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47c6ba:{NFSU2_TR(0x47c6ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47c6bd:{NFSU2_TR(0x47c6bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47c6c3:{NFSU2_TR(0x47c6c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B47c6c6:{NFSU2_TR(0x47c6c6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B47c6c7:{NFSU2_TR(0x47c6c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47c6ca:{NFSU2_TR(0x47c6ca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B47c6cb:{NFSU2_TR(0x47c6cb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B47c6d0:L47c6d0:{c.instructions+=8;NFSU2_TR(0x47c6d0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47c6d1:{NFSU2_TR(0x47c6d1);
__builtin_memmove((R+24),(R+4),4);
}
B47c6d3:{NFSU2_TR(0x47c6d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47c6d9:{NFSU2_TR(0x47c6d9);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd7ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B47c6df:{NFSU2_TR(0x47c6df);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47c6e5:{NFSU2_TR(0x47c6e5);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B47c6e7:{NFSU2_TR(0x47c6e7);
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
B47c6e9:{NFSU2_TR(0x47c6e9);
if(r1(R+518)){{goto L47c79b;}}
}
B47c6ef:L47c6ef:{c.instructions+=3;NFSU2_TR(0x47c6ef);
__builtin_memmove((R+4),gp(0x82c5f4),4);
}
B47c6f5:{NFSU2_TR(0x47c6f5);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B47c6f7:{NFSU2_TR(0x47c6f7);
if(r1(R+518)){{goto L47c737;}}
}
B47c6f9:L47c6f9:{c.instructions+=3;NFSU2_TR(0x47c6f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47c6fc:{NFSU2_TR(0x47c6fc);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B47c6fe:{NFSU2_TR(0x47c6fe);
if(r1(R+518)){{goto L47c737;}}
}
B47c700:L47c700:{c.instructions+=3;NFSU2_TR(0x47c700);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47c703:{NFSU2_TR(0x47c703);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B47c705:{NFSU2_TR(0x47c705);
if(r1(R+518)){{goto L47c737;}}
}
B47c707:L47c707:{c.instructions+=6;NFSU2_TR(0x47c707);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B47c70a:{NFSU2_TR(0x47c70a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47c70d:{NFSU2_TR(0x47c70d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47c70e:{NFSU2_TR(0x47c70e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47c70f:{NFSU2_TR(0x47c70f);
w4(R+4,u32(0x82c5e8ull));
}
B47c714:{NFSU2_TR(0x47c714);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47c719ull));
TAIL_STATIC(0x5fa540u,5fa);
}
B47c719:L47c719:{c.instructions+=3;NFSU2_TR(0x47c719);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47c71b:{NFSU2_TR(0x47c71b);
w4(R+4,u32(0x82c5e8ull));
}
B47c720:{NFSU2_TR(0x47c720);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47c725ull));
TAIL_STATIC(0x5f0b80u,5f0);
}
B47c725:L47c725:{c.instructions+=4;NFSU2_TR(0x47c725);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47c727:{NFSU2_TR(0x47c727);
w4(R+4,u32(0x82c5e8ull));
}
B47c72c:{NFSU2_TR(0x47c72c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47c732:{NFSU2_TR(0x47c732);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47c737ull));
TAIL_STATIC(0x5f0b80u,5f0);
}
B47c737:L47c737:{c.instructions+=3;NFSU2_TR(0x47c737);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47c73d:{NFSU2_TR(0x47c73d);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xcull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xcull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B47c740:{NFSU2_TR(0x47c740);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L47c746;}}
}
B47c742:L47c742:{c.instructions+=2;NFSU2_TR(0x47c742);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B47c744:{NFSU2_TR(0x47c744);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L47c760;}}
}
B47c746:L47c746:{c.instructions+=7;NFSU2_TR(0x47c746);
__builtin_memmove((R+4),gp(0x82b884),4);
}
B47c74c:{NFSU2_TR(0x47c74c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B47c752:{NFSU2_TR(0x47c752);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B47c753:{NFSU2_TR(0x47c753);
w1(R+512,u8((r4(R+8))!=(u32(0x0ull))));
w4(R+8,u32(0-u32(r4(R+8))));
}
B47c755:{NFSU2_TR(0x47c755);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(R+8))));
w4(R+8,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B47c757:{NFSU2_TR(0x47c757);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x9ull))));
}
B47c75a:{NFSU2_TR(0x47c75a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47c760:L47c760:{c.instructions+=4;NFSU2_TR(0x47c760);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B47c766:{NFSU2_TR(0x47c766);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7ed5d8ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B47c76d:{NFSU2_TR(0x47c76d);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xcull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xcull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B47c770:{NFSU2_TR(0x47c770);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L47c777;}}
}
B47c772:L47c772:{c.instructions+=1;NFSU2_TR(0x47c772);
w4(R+4,u32(0x9ull));
}
B47c777:L47c777:{c.instructions+=2;NFSU2_TR(0x47c777);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B47c77d:{NFSU2_TR(0x47c77d);
if(r1(R+518)){{goto L47c793;}}
}
B47c77f:L47c77f:{c.instructions+=3;NFSU2_TR(0x47c77f);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B47c782:{NFSU2_TR(0x47c782);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B47c784:{NFSU2_TR(0x47c784);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L47c793;}}
}
B47c786:L47c786:{c.instructions+=4;NFSU2_TR(0x47c786);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47c787:{NFSU2_TR(0x47c787);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47c788:{NFSU2_TR(0x47c788);
__builtin_memmove((R+4),(R+24),4);
}
B47c78a:{NFSU2_TR(0x47c78a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47c78full));
TAIL_STATIC(0x45db90u,45d);
}
B47c78f:L47c78f:{c.instructions+=2;NFSU2_TR(0x47c78f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B47c790:{NFSU2_TR(0x47c790);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B47c793:L47c793:{c.instructions+=3;NFSU2_TR(0x47c793);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47c794:{NFSU2_TR(0x47c794);
__builtin_memmove((R+4),(R+24),4);
}
B47c796:{NFSU2_TR(0x47c796);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47c79bull));
TAIL_STATIC(0x4713f0u,471);
}
B47c79b:L47c79b:{c.instructions+=2;NFSU2_TR(0x47c79b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B47c79c:{NFSU2_TR(0x47c79c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B47c7a0:L47c7a0:{c.instructions+=3;NFSU2_TR(0x47c7a0);
__builtin_memmove((R+0),gp(0x7ec840),4);
}
B47c7a5:{NFSU2_TR(0x47c7a5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47c7a6:{NFSU2_TR(0x47c7a6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47c7abull));
TAIL_STATIC(0x43e910u,43e);
}
B47c7ab:L47c7ab:{c.instructions+=3;NFSU2_TR(0x47c7ab);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B47c7ae:{NFSU2_TR(0x47c7ae);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x4d8ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x4d8ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B47c7b3:{NFSU2_TR(0x47c7b3);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L47c7dd;}}
}
B47c7b5:L47c7b5:{c.instructions+=6;NFSU2_TR(0x47c7b5);
__builtin_memmove((R+4),gp(0x7ec840),4);
}
B47c7bb:{NFSU2_TR(0x47c7bb);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x7ull))));
}
B47c7be:{NFSU2_TR(0x47c7be);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x1000ull))));
}
B47c7c4:{NFSU2_TR(0x47c7c4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47c7c5:{NFSU2_TR(0x47c7c5);
u8 U[4];
w4(U+0,u32(0xd8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47c7ca:{NFSU2_TR(0x47c7ca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47c7cfull));
TAIL_STATIC(0x440820u,440);
}
B47c7cf:L47c7cf:{c.instructions+=3;NFSU2_TR(0x47c7cf);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B47c7d2:{NFSU2_TR(0x47c7d2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B47c7d4:{NFSU2_TR(0x47c7d4);
if(r1(R+518)){{goto L47c7dd;}}
}
B47c7d6:L47c7d6:{c.instructions+=2;NFSU2_TR(0x47c7d6);
__builtin_memmove((R+4),(R+0),4);
}
B47c7d8:{NFSU2_TR(0x47c7d8);
TAIL_STATIC(0x471d60u,471);
}
B47c7dd:L47c7dd:{c.instructions+=2;NFSU2_TR(0x47c7dd);
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
B47c7df:{NFSU2_TR(0x47c7df);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B47c7e0:L47c7e0:{c.instructions+=3;NFSU2_TR(0x47c7e0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47c7e1:{NFSU2_TR(0x47c7e1);
__builtin_memmove((R+24),(R+4),4);
}
B47c7e3:{NFSU2_TR(0x47c7e3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47c7e8ull));
TAIL_STATIC(0x471e40u,471);
}
B47c7e8:L47c7e8:{c.instructions+=2;NFSU2_TR(0x47c7e8);
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
B47c7ed:{NFSU2_TR(0x47c7ed);
if(r1(R+518)){{goto L47c7f8;}}
}
B47c7ef:L47c7ef:{c.instructions+=2;NFSU2_TR(0x47c7ef);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47c7f0:{NFSU2_TR(0x47c7f0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47c7f5ull));
TAIL_STATIC(0x440540u,440);
}
B47c7f5:L47c7f5:{c.instructions+=1;NFSU2_TR(0x47c7f5);
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
B47c7f8:L47c7f8:{c.instructions+=3;NFSU2_TR(0x47c7f8);
__builtin_memmove((R+0),(R+24),4);
}
B47c7fa:{NFSU2_TR(0x47c7fa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B47c7fb:{NFSU2_TR(0x47c7fb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B47c800:L47c800:{c.instructions+=3;NFSU2_TR(0x47c800);
__builtin_memmove((R+0),gp(0x7ec840),4);
}
B47c805:{NFSU2_TR(0x47c805);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47c806:{NFSU2_TR(0x47c806);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47c80bull));
TAIL_STATIC(0x43e910u,43e);
}
B47c80b:L47c80b:{c.instructions+=3;NFSU2_TR(0x47c80b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B47c80e:{NFSU2_TR(0x47c80e);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x4d8ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x4d8ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B47c813:{NFSU2_TR(0x47c813);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L47c83d;}}
}
B47c815:L47c815:{c.instructions+=6;NFSU2_TR(0x47c815);
__builtin_memmove((R+4),gp(0x7ec840),4);
}
B47c81b:{NFSU2_TR(0x47c81b);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x7ull))));
}
B47c81e:{NFSU2_TR(0x47c81e);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x1000ull))));
}
B47c824:{NFSU2_TR(0x47c824);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47c825:{NFSU2_TR(0x47c825);
u8 U[4];
w4(U+0,u32(0xd8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47c82a:{NFSU2_TR(0x47c82a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47c82full));
TAIL_STATIC(0x440820u,440);
}
B47c82f:L47c82f:{c.instructions+=3;NFSU2_TR(0x47c82f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B47c832:{NFSU2_TR(0x47c832);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B47c834:{NFSU2_TR(0x47c834);
if(r1(R+518)){{goto L47c83d;}}
}
B47c836:L47c836:{c.instructions+=2;NFSU2_TR(0x47c836);
__builtin_memmove((R+4),(R+0),4);
}
B47c838:{NFSU2_TR(0x47c838);
TAIL_STATIC(0x471ed0u,471);
}
B47c83d:L47c83d:{c.instructions+=2;NFSU2_TR(0x47c83d);
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
B47c83f:{NFSU2_TR(0x47c83f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B47c840:L47c840:{c.instructions+=12;NFSU2_TR(0x47c840);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47c842:{NFSU2_TR(0x47c842);
u8 U[4];
w4(U+0,u32(0x772268ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47c847:{NFSU2_TR(0x47c847);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47c84d:{NFSU2_TR(0x47c84d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47c84e:{NFSU2_TR(0x47c84e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47c855:{NFSU2_TR(0x47c855);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47c856:{NFSU2_TR(0x47c856);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47c857:{NFSU2_TR(0x47c857);
__builtin_memmove((R+24),(R+4),4);
}
B47c859:{NFSU2_TR(0x47c859);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47c85d:{NFSU2_TR(0x47c85d);
u8 U[4];
w4(U+0,u32(0x78aba0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B47c863:{NFSU2_TR(0x47c863);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B47c86b:{NFSU2_TR(0x47c86b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47c870ull));
TAIL_STATIC(0x471f30u,471);
}
B47c870:L47c870:{c.instructions+=6;NFSU2_TR(0x47c870);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47c874:{NFSU2_TR(0x47c874);
u8 U[4];
w4(U+0,u32(0x789ce4ull));
s4(u32(r4(R+24)),r4(U+0));
}
B47c87a:{NFSU2_TR(0x47c87a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B47c87b:{NFSU2_TR(0x47c87b);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47c882:{NFSU2_TR(0x47c882);
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
B47c885:{NFSU2_TR(0x47c885);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B47c890:L47c890:{c.instructions+=11;NFSU2_TR(0x47c890);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47c891:{NFSU2_TR(0x47c891);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47c892:{NFSU2_TR(0x47c892);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47c893:{NFSU2_TR(0x47c893);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47c894:{NFSU2_TR(0x47c894);
__builtin_memmove((R+24),(R+4),4);
}
B47c896:{NFSU2_TR(0x47c896);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47c89c:{NFSU2_TR(0x47c89c);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B47c89e:{NFSU2_TR(0x47c89e);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B47c8a0:{NFSU2_TR(0x47c8a0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47c8a1:{NFSU2_TR(0x47c8a1);
w4(R+20,u32(0x1ull));
}
B47c8a6:{NFSU2_TR(0x47c8a6);
if(r1(R+518)){{goto L47c901;}}
}
B47c8a8:L47c8a8:{c.instructions+=4;NFSU2_TR(0x47c8a8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B47c8aa:{NFSU2_TR(0x47c8aa);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B47c8ac:{NFSU2_TR(0x47c8ac);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47c8b0:{NFSU2_TR(0x47c8b0);
if(r1(R+518)){{goto L47c8c4;}}
}
B47c8b2:L47c8b2:{c.instructions+=4;NFSU2_TR(0x47c8b2);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B47c8b6:{NFSU2_TR(0x47c8b6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47c8b7:{NFSU2_TR(0x47c8b7);
__builtin_memmove((R+4),(R+0),4);
}
B47c8b9:{NFSU2_TR(0x47c8b9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47c8beull));
TAIL_STATIC(0x735070u,735);
}
B47c8be:L47c8be:{c.instructions+=2;NFSU2_TR(0x47c8be);
u8 U[16];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+20)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+20))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B47c8c2:{NFSU2_TR(0x47c8c2);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L47c901;}}
}
B47c8c4:L47c8c4:{c.instructions+=3;NFSU2_TR(0x47c8c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B47c8ca:{NFSU2_TR(0x47c8ca);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B47c8cc:{NFSU2_TR(0x47c8cc);
if(r1(R+518)){{goto L47c8fb;}}
}
B47c8ce:L47c8ce:{c.instructions+=3;NFSU2_TR(0x47c8ce);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B47c8d0:{NFSU2_TR(0x47c8d0);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B47c8d2:{NFSU2_TR(0x47c8d2);
if(r1(R+518)){{goto L47c8d9;}}
}
B47c8d4:L47c8d4:{c.instructions+=1;NFSU2_TR(0x47c8d4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47c8d9ull));
TAIL_STATIC(0x735550u,735);
}
B47c8d9:L47c8d9:{c.instructions+=3;NFSU2_TR(0x47c8d9);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B47c8dd:{NFSU2_TR(0x47c8dd);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47c8de:{NFSU2_TR(0x47c8de);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47c8e3ull));
TAIL_STATIC(0x734df0u,734);
}
B47c8e3:L47c8e3:{c.instructions+=2;NFSU2_TR(0x47c8e3);
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
B47c8e6:{NFSU2_TR(0x47c8e6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47c8ebull));
TAIL_STATIC(0x734e40u,734);
}
B47c8eb:L47c8eb:{c.instructions+=5;NFSU2_TR(0x47c8eb);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47c8ef:{NFSU2_TR(0x47c8ef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B47c8f1:{NFSU2_TR(0x47c8f1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47c8f2:{NFSU2_TR(0x47c8f2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47c8f3:{NFSU2_TR(0x47c8f3);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47c8f6ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B47c8f6:L47c8f6:{c.instructions+=1;NFSU2_TR(0x47c8f6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47c8fbull));
TAIL_STATIC(0x734e60u,734);
}
B47c8fb:L47c8fb:{c.instructions+=1;NFSU2_TR(0x47c8fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47c901:L47c901:{c.instructions+=3;NFSU2_TR(0x47c901);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47c907:{NFSU2_TR(0x47c907);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B47c909:{NFSU2_TR(0x47c909);
if(r1(R+518)){{goto L47c964;}}
}
B47c90b:L47c90b:{c.instructions+=4;NFSU2_TR(0x47c90b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B47c90d:{NFSU2_TR(0x47c90d);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B47c90f:{NFSU2_TR(0x47c90f);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47c913:{NFSU2_TR(0x47c913);
if(r1(R+518)){{goto L47c927;}}
}
B47c915:L47c915:{c.instructions+=4;NFSU2_TR(0x47c915);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B47c919:{NFSU2_TR(0x47c919);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47c91a:{NFSU2_TR(0x47c91a);
__builtin_memmove((R+4),(R+0),4);
}
B47c91c:{NFSU2_TR(0x47c91c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47c921ull));
TAIL_STATIC(0x735070u,735);
}
B47c921:L47c921:{c.instructions+=2;NFSU2_TR(0x47c921);
u8 U[16];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+20)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+20))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B47c925:{NFSU2_TR(0x47c925);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L47c964;}}
}
B47c927:L47c927:{c.instructions+=3;NFSU2_TR(0x47c927);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B47c92d:{NFSU2_TR(0x47c92d);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B47c92f:{NFSU2_TR(0x47c92f);
if(r1(R+518)){{goto L47c95e;}}
}
B47c931:L47c931:{c.instructions+=3;NFSU2_TR(0x47c931);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B47c933:{NFSU2_TR(0x47c933);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B47c935:{NFSU2_TR(0x47c935);
if(r1(R+518)){{goto L47c93c;}}
}
B47c937:L47c937:{c.instructions+=1;NFSU2_TR(0x47c937);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47c93cull));
TAIL_STATIC(0x735550u,735);
}
B47c93c:L47c93c:{c.instructions+=3;NFSU2_TR(0x47c93c);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B47c940:{NFSU2_TR(0x47c940);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47c941:{NFSU2_TR(0x47c941);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47c946ull));
TAIL_STATIC(0x734df0u,734);
}
B47c946:L47c946:{c.instructions+=2;NFSU2_TR(0x47c946);
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
B47c949:{NFSU2_TR(0x47c949);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47c94eull));
TAIL_STATIC(0x734e40u,734);
}
B47c94e:L47c94e:{c.instructions+=5;NFSU2_TR(0x47c94e);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47c952:{NFSU2_TR(0x47c952);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B47c954:{NFSU2_TR(0x47c954);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47c955:{NFSU2_TR(0x47c955);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47c956:{NFSU2_TR(0x47c956);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47c959ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B47c959:L47c959:{c.instructions+=1;NFSU2_TR(0x47c959);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47c95eull));
TAIL_STATIC(0x734e60u,734);
}
B47c95e:L47c95e:{c.instructions+=1;NFSU2_TR(0x47c95e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47c964:L47c964:{c.instructions+=3;NFSU2_TR(0x47c964);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47c96a:{NFSU2_TR(0x47c96a);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B47c96c:{NFSU2_TR(0x47c96c);
if(r1(R+518)){{goto L47c9c7;}}
}
B47c96e:L47c96e:{c.instructions+=4;NFSU2_TR(0x47c96e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B47c970:{NFSU2_TR(0x47c970);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B47c972:{NFSU2_TR(0x47c972);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47c976:{NFSU2_TR(0x47c976);
if(r1(R+518)){{goto L47c98a;}}
}
B47c978:L47c978:{c.instructions+=4;NFSU2_TR(0x47c978);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B47c97c:{NFSU2_TR(0x47c97c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47c97d:{NFSU2_TR(0x47c97d);
__builtin_memmove((R+4),(R+0),4);
}
B47c97f:{NFSU2_TR(0x47c97f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47c984ull));
TAIL_STATIC(0x735070u,735);
}
B47c984:L47c984:{c.instructions+=2;NFSU2_TR(0x47c984);
u8 U[16];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+20)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+20))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B47c988:{NFSU2_TR(0x47c988);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L47c9c7;}}
}
B47c98a:L47c98a:{c.instructions+=3;NFSU2_TR(0x47c98a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B47c990:{NFSU2_TR(0x47c990);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B47c992:{NFSU2_TR(0x47c992);
if(r1(R+518)){{goto L47c9c1;}}
}
B47c994:L47c994:{c.instructions+=3;NFSU2_TR(0x47c994);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B47c996:{NFSU2_TR(0x47c996);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B47c998:{NFSU2_TR(0x47c998);
if(r1(R+518)){{goto L47c99f;}}
}
B47c99a:L47c99a:{c.instructions+=1;NFSU2_TR(0x47c99a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47c99full));
TAIL_STATIC(0x735550u,735);
}
B47c99f:L47c99f:{c.instructions+=3;NFSU2_TR(0x47c99f);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B47c9a3:{NFSU2_TR(0x47c9a3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47c9a4:{NFSU2_TR(0x47c9a4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47c9a9ull));
TAIL_STATIC(0x734df0u,734);
}
B47c9a9:L47c9a9:{c.instructions+=2;NFSU2_TR(0x47c9a9);
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
B47c9ac:{NFSU2_TR(0x47c9ac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47c9b1ull));
TAIL_STATIC(0x734e40u,734);
}
B47c9b1:L47c9b1:{c.instructions+=5;NFSU2_TR(0x47c9b1);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47c9b5:{NFSU2_TR(0x47c9b5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B47c9b7:{NFSU2_TR(0x47c9b7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47c9b8:{NFSU2_TR(0x47c9b8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47c9b9:{NFSU2_TR(0x47c9b9);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47c9bcull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B47c9bc:L47c9bc:{c.instructions+=1;NFSU2_TR(0x47c9bc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47c9c1ull));
TAIL_STATIC(0x734e60u,734);
}
B47c9c1:L47c9c1:{c.instructions+=1;NFSU2_TR(0x47c9c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47c9c7:L47c9c7:{c.instructions+=3;NFSU2_TR(0x47c9c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47c9cd:{NFSU2_TR(0x47c9cd);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B47c9cf:{NFSU2_TR(0x47c9cf);
if(r1(R+518)){{goto L47ca2a;}}
}
B47c9d1:L47c9d1:{c.instructions+=4;NFSU2_TR(0x47c9d1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B47c9d3:{NFSU2_TR(0x47c9d3);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B47c9d5:{NFSU2_TR(0x47c9d5);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47c9d9:{NFSU2_TR(0x47c9d9);
if(r1(R+518)){{goto L47c9ed;}}
}
B47c9db:L47c9db:{c.instructions+=4;NFSU2_TR(0x47c9db);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B47c9df:{NFSU2_TR(0x47c9df);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47c9e0:{NFSU2_TR(0x47c9e0);
__builtin_memmove((R+4),(R+0),4);
}
B47c9e2:{NFSU2_TR(0x47c9e2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47c9e7ull));
TAIL_STATIC(0x735070u,735);
}
B47c9e7:L47c9e7:{c.instructions+=2;NFSU2_TR(0x47c9e7);
u8 U[16];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+20)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+20))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B47c9eb:{NFSU2_TR(0x47c9eb);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L47ca2a;}}
}
B47c9ed:L47c9ed:{c.instructions+=3;NFSU2_TR(0x47c9ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B47c9f3:{NFSU2_TR(0x47c9f3);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B47c9f5:{NFSU2_TR(0x47c9f5);
if(r1(R+518)){{goto L47ca24;}}
}
B47c9f7:L47c9f7:{c.instructions+=3;NFSU2_TR(0x47c9f7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B47c9f9:{NFSU2_TR(0x47c9f9);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B47c9fb:{NFSU2_TR(0x47c9fb);
if(r1(R+518)){{goto L47ca02;}}
}
B47c9fd:L47c9fd:{c.instructions+=1;NFSU2_TR(0x47c9fd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47ca02ull));
TAIL_STATIC(0x735550u,735);
}
B47ca02:L47ca02:{c.instructions+=3;NFSU2_TR(0x47ca02);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B47ca06:{NFSU2_TR(0x47ca06);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47ca07:{NFSU2_TR(0x47ca07);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47ca0cull));
TAIL_STATIC(0x734df0u,734);
}
B47ca0c:L47ca0c:{c.instructions+=2;NFSU2_TR(0x47ca0c);
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
B47ca0f:{NFSU2_TR(0x47ca0f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47ca14ull));
TAIL_STATIC(0x734e40u,734);
}
B47ca14:L47ca14:{c.instructions+=5;NFSU2_TR(0x47ca14);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47ca18:{NFSU2_TR(0x47ca18);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B47ca1a:{NFSU2_TR(0x47ca1a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47ca1b:{NFSU2_TR(0x47ca1b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47ca1c:{NFSU2_TR(0x47ca1c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47ca1full));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B47ca1f:L47ca1f:{c.instructions+=1;NFSU2_TR(0x47ca1f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47ca24ull));
TAIL_STATIC(0x734e60u,734);
}
B47ca24:L47ca24:{c.instructions+=1;NFSU2_TR(0x47ca24);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47ca2a:L47ca2a:{c.instructions+=3;NFSU2_TR(0x47ca2a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47ca30:{NFSU2_TR(0x47ca30);
u8 U[7];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B47ca33:{NFSU2_TR(0x47ca33);
if(r1(R+518)){{goto L47ca3c;}}
}
B47ca35:L47ca35:{c.instructions+=2;NFSU2_TR(0x47ca35);
__builtin_memmove((R+4),(R+24),4);
}
B47ca37:{NFSU2_TR(0x47ca37);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47ca3cull));
TAIL_STATIC(0x45e730u,45e);
}
B47ca3c:L47ca3c:{c.instructions+=3;NFSU2_TR(0x47ca3c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B47ca42:{NFSU2_TR(0x47ca42);
u8 U[7];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x71ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(r1(R+12))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B47ca45:{NFSU2_TR(0x47ca45);
if(r1(R+518)){{goto L47ca4e;}}
}
B47ca47:L47ca47:{c.instructions+=2;NFSU2_TR(0x47ca47);
__builtin_memmove((R+4),(R+24),4);
}
B47ca49:{NFSU2_TR(0x47ca49);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47ca4eull));
TAIL_STATIC(0x4720d0u,472);
}
B47ca4e:L47ca4e:{c.instructions+=3;NFSU2_TR(0x47ca4e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47ca54:{NFSU2_TR(0x47ca54);
u8 U[10];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x72ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+8),(U+4),1);
w1(R+512,u8((r1(U+8))<(r1(R+12))));
w1(R+523,sborrow<u8>(r1(U+8),r1(R+12)));
w1(U+9,u8(u32(r1(U+8))-u32(r1(R+12))));
w1(R+519,u8(s8(r1(U+9))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+9))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+9))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B47ca57:{NFSU2_TR(0x47ca57);
if(r1(R+518)){{goto L47ca60;}}
}
B47ca59:L47ca59:{c.instructions+=2;NFSU2_TR(0x47ca59);
__builtin_memmove((R+4),(R+24),4);
}
B47ca5b:{NFSU2_TR(0x47ca5b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47ca60ull));
TAIL_STATIC(0x4722b0u,472);
}
B47ca60:L47ca60:{c.instructions+=6;NFSU2_TR(0x47ca60);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B47ca61:{NFSU2_TR(0x47ca61);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B47ca62:{NFSU2_TR(0x47ca62);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B47ca63:{NFSU2_TR(0x47ca63);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B47ca64:{NFSU2_TR(0x47ca64);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B47ca65:{NFSU2_TR(0x47ca65);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B47ca70:L47ca70:{c.instructions+=3;NFSU2_TR(0x47ca70);
__builtin_memmove((R+0),gp(0x7ec840),4);
}
B47ca75:{NFSU2_TR(0x47ca75);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47ca76:{NFSU2_TR(0x47ca76);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47ca7bull));
TAIL_STATIC(0x43e910u,43e);
}
B47ca7b:L47ca7b:{c.instructions+=3;NFSU2_TR(0x47ca7b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B47ca7e:{NFSU2_TR(0x47ca7e);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x5c0ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x5c0ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B47ca83:{NFSU2_TR(0x47ca83);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L47caad;}}
}
B47ca85:L47ca85:{c.instructions+=6;NFSU2_TR(0x47ca85);
__builtin_memmove((R+4),gp(0x7ec840),4);
}
B47ca8b:{NFSU2_TR(0x47ca8b);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x7ull))));
}
B47ca8e:{NFSU2_TR(0x47ca8e);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x1000ull))));
}
B47ca94:{NFSU2_TR(0x47ca94);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47ca95:{NFSU2_TR(0x47ca95);
u8 U[4];
w4(U+0,u32(0x1c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47ca9a:{NFSU2_TR(0x47ca9a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47ca9full));
TAIL_STATIC(0x440820u,440);
}
B47ca9f:L47ca9f:{c.instructions+=3;NFSU2_TR(0x47ca9f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B47caa2:{NFSU2_TR(0x47caa2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B47caa4:{NFSU2_TR(0x47caa4);
if(r1(R+518)){{goto L47caad;}}
}
B47caa6:L47caa6:{c.instructions+=2;NFSU2_TR(0x47caa6);
__builtin_memmove((R+4),(R+0),4);
}
B47caa8:{NFSU2_TR(0x47caa8);
TAIL_STATIC(0x472480u,472);
}
B47caad:L47caad:{c.instructions+=2;NFSU2_TR(0x47caad);
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
B47caaf:{NFSU2_TR(0x47caaf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B47cab0:L47cab0:{c.instructions+=3;NFSU2_TR(0x47cab0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47cab1:{NFSU2_TR(0x47cab1);
__builtin_memmove((R+24),(R+4),4);
}
B47cab3:{NFSU2_TR(0x47cab3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47cab8ull));
TAIL_STATIC(0x472590u,472);
}
B47cab8:L47cab8:{c.instructions+=2;NFSU2_TR(0x47cab8);
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
B47cabd:{NFSU2_TR(0x47cabd);
if(r1(R+518)){{goto L47cac8;}}
}
B47cabf:L47cabf:{c.instructions+=2;NFSU2_TR(0x47cabf);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47cac0:{NFSU2_TR(0x47cac0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47cac5ull));
TAIL_STATIC(0x440540u,440);
}
B47cac5:L47cac5:{c.instructions+=1;NFSU2_TR(0x47cac5);
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
B47cac8:L47cac8:{c.instructions+=3;NFSU2_TR(0x47cac8);
__builtin_memmove((R+0),(R+24),4);
}
B47caca:{NFSU2_TR(0x47caca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B47cacb:{NFSU2_TR(0x47cacb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B47cad0:L47cad0:{c.instructions+=5;NFSU2_TR(0x47cad0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47cad1:{NFSU2_TR(0x47cad1);
__builtin_memmove((R+24),(R+4),4);
}
B47cad3:{NFSU2_TR(0x47cad3);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B47cad9:{NFSU2_TR(0x47cad9);
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
B47cadb:{NFSU2_TR(0x47cadb);
if(r1(R+518)){{goto L47cbdc;}}
}
B47cae1:L47cae1:{c.instructions+=3;NFSU2_TR(0x47cae1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47cae7:{NFSU2_TR(0x47cae7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B47cae9:{NFSU2_TR(0x47cae9);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47caecull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B47caec:L47caec:{c.instructions+=4;NFSU2_TR(0x47caec);
{u32 ea_=u32(u32(8311716u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B47caf2:{NFSU2_TR(0x47caf2);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B47caf4:{NFSU2_TR(0x47caf4);
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
B47caf7:{NFSU2_TR(0x47caf7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L47cb12;}}
}
B47caf9:L47caf9:{c.instructions+=3;NFSU2_TR(0x47caf9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47caff:{NFSU2_TR(0x47caff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B47cb01:{NFSU2_TR(0x47cb01);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47cb04ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B47cb04:L47cb04:{c.instructions+=3;NFSU2_TR(0x47cb04);
{u32 ea_=u32(u32(7881308u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B47cb0a:{NFSU2_TR(0x47cb0a);
{u32 ea_=u32(r4(R+24)+u32(388u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B47cb10:{NFSU2_TR(0x47cb10);
{goto L47cb1c;}
}
B47cb12:L47cb12:{c.instructions+=1;NFSU2_TR(0x47cb12);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x184ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B47cb1c:L47cb1c:{c.instructions+=5;NFSU2_TR(0x47cb1c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47cb1d:{NFSU2_TR(0x47cb1d);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B47cb21:{NFSU2_TR(0x47cb21);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47cb22:{NFSU2_TR(0x47cb22);
__builtin_memmove((R+4),(R+24),4);
}
B47cb24:{NFSU2_TR(0x47cb24);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47cb29ull));
TAIL_STATIC(0x4726e0u,472);
}
B47cb29:L47cb29:{c.instructions+=3;NFSU2_TR(0x47cb29);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47cb2a:{NFSU2_TR(0x47cb2a);
__builtin_memmove((R+4),(R+24),4);
}
B47cb2c:{NFSU2_TR(0x47cb2c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47cb31ull));
TAIL_STATIC(0x472770u,472);
}
B47cb31:L47cb31:{c.instructions+=3;NFSU2_TR(0x47cb31);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x180ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47cb37:{NFSU2_TR(0x47cb37);
u8 U[6];
w1(R+512,u8((r4(R+0))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x0ull)));
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B47cb3a:{NFSU2_TR(0x47cb3a);
if(r1(R+518)){{goto L47cbb9;}}
}
B47cb3c:L47cb3c:{c.instructions+=2;NFSU2_TR(0x47cb3c);
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
B47cb3d:{NFSU2_TR(0x47cb3d);
if(r1(R+518)){{goto L47cb64;}}
}
B47cb3f:L47cb3f:{c.instructions+=2;NFSU2_TR(0x47cb3f);
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
B47cb40:{NFSU2_TR(0x47cb40);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L47cbdb;}}
}
B47cb46:L47cb46:{c.instructions+=2;NFSU2_TR(0x47cb46);
__builtin_memmove((R+4),(R+24),4);
}
B47cb48:{NFSU2_TR(0x47cb48);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47cb4dull));
TAIL_STATIC(0x45eff0u,45e);
}
B47cb4d:L47cb4d:{c.instructions+=2;NFSU2_TR(0x47cb4d);
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
B47cb4f:{NFSU2_TR(0x47cb4f);
if(r1(R+518)){{goto L47cbdb;}}
}
B47cb55:L47cb55:{c.instructions+=4;NFSU2_TR(0x47cb55);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B47cb56:{NFSU2_TR(0x47cb56);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x180ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B47cb60:{NFSU2_TR(0x47cb60);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B47cb61:{NFSU2_TR(0x47cb61);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B47cb64:L47cb64:{c.instructions+=3;NFSU2_TR(0x47cb64);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47cb6a:{NFSU2_TR(0x47cb6a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B47cb6c:{NFSU2_TR(0x47cb6c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47cb6full));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B47cb6f:L47cb6f:{c.instructions+=4;NFSU2_TR(0x47cb6f);
{u32 ea_=u32(u32(8311716u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B47cb75:{NFSU2_TR(0x47cb75);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B47cb77:{NFSU2_TR(0x47cb77);
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
B47cb7a:{NFSU2_TR(0x47cb7a);
if(r1(R+514)){{goto L47cbdb;}}
}
B47cb7c:L47cb7c:{c.instructions+=10;NFSU2_TR(0x47cb7c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47cb82:{NFSU2_TR(0x47cb82);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x180ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B47cb8c:{NFSU2_TR(0x47cb8c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B47cb92:{NFSU2_TR(0x47cb92);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47cb93:{NFSU2_TR(0x47cb93);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47cb95:{NFSU2_TR(0x47cb95);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47cb97:{NFSU2_TR(0x47cb97);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47cb99:{NFSU2_TR(0x47cb99);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47cb9b:{NFSU2_TR(0x47cb9b);
__builtin_memmove((R+4),(R+24),4);
}
B47cb9d:{NFSU2_TR(0x47cb9d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47cba2ull));
TAIL_STATIC(0x45ee70u,45e);
}
B47cba2:L47cba2:{c.instructions+=4;NFSU2_TR(0x47cba2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47cba3:{NFSU2_TR(0x47cba3);
__builtin_memmove((R+4),(R+24),4);
}
B47cba5:{NFSU2_TR(0x47cba5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf4ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B47cbaf:{NFSU2_TR(0x47cbaf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47cbb4ull));
TAIL_STATIC(0x472770u,472);
}
B47cbb4:L47cbb4:{c.instructions+=3;NFSU2_TR(0x47cbb4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B47cbb5:{NFSU2_TR(0x47cbb5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B47cbb6:{NFSU2_TR(0x47cbb6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B47cbb9:L47cbb9:{c.instructions+=3;NFSU2_TR(0x47cbb9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47cbbf:{NFSU2_TR(0x47cbbf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B47cbc1:{NFSU2_TR(0x47cbc1);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47cbc4ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B47cbc4:L47cbc4:{c.instructions+=4;NFSU2_TR(0x47cbc4);
{u32 ea_=u32(u32(8311716u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B47cbca:{NFSU2_TR(0x47cbca);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B47cbcc:{NFSU2_TR(0x47cbcc);
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
B47cbcf:{NFSU2_TR(0x47cbcf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L47cbdb;}}
}
B47cbd1:L47cbd1:{c.instructions+=1;NFSU2_TR(0x47cbd1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x180ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B47cbdb:L47cbdb:{c.instructions+=1;NFSU2_TR(0x47cbdb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B47cbdc:L47cbdc:{c.instructions+=2;NFSU2_TR(0x47cbdc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B47cbdd:{NFSU2_TR(0x47cbdd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B47cbe0:L47cbe0:{c.instructions+=3;NFSU2_TR(0x47cbe0);
__builtin_memmove((R+0),gp(0x7ec840),4);
}
B47cbe5:{NFSU2_TR(0x47cbe5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47cbe6:{NFSU2_TR(0x47cbe6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47cbebull));
TAIL_STATIC(0x43e910u,43e);
}
B47cbeb:L47cbeb:{c.instructions+=3;NFSU2_TR(0x47cbeb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B47cbee:{NFSU2_TR(0x47cbee);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x4e8ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x4e8ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B47cbf3:{NFSU2_TR(0x47cbf3);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L47cc1d;}}
}
B47cbf5:L47cbf5:{c.instructions+=6;NFSU2_TR(0x47cbf5);
__builtin_memmove((R+4),gp(0x7ec840),4);
}
B47cbfb:{NFSU2_TR(0x47cbfb);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x7ull))));
}
B47cbfe:{NFSU2_TR(0x47cbfe);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x1000ull))));
}
B47cc04:{NFSU2_TR(0x47cc04);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47cc05:{NFSU2_TR(0x47cc05);
u8 U[4];
w4(U+0,u32(0xe8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47cc0a:{NFSU2_TR(0x47cc0a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47cc0full));
TAIL_STATIC(0x440820u,440);
}
B47cc0f:L47cc0f:{c.instructions+=3;NFSU2_TR(0x47cc0f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B47cc12:{NFSU2_TR(0x47cc12);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B47cc14:{NFSU2_TR(0x47cc14);
if(r1(R+518)){{goto L47cc1d;}}
}
B47cc16:L47cc16:{c.instructions+=2;NFSU2_TR(0x47cc16);
__builtin_memmove((R+4),(R+0),4);
}
B47cc18:{NFSU2_TR(0x47cc18);
TAIL_STATIC(0x4729d0u,472);
}
B47cc1d:L47cc1d:{c.instructions+=2;NFSU2_TR(0x47cc1d);
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
B47cc1f:{NFSU2_TR(0x47cc1f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B47cc20:L47cc20:{c.instructions+=3;NFSU2_TR(0x47cc20);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47cc21:{NFSU2_TR(0x47cc21);
__builtin_memmove((R+24),(R+4),4);
}
B47cc23:{NFSU2_TR(0x47cc23);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47cc28ull));
TAIL_STATIC(0x472a50u,472);
}
B47cc28:L47cc28:{c.instructions+=2;NFSU2_TR(0x47cc28);
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
B47cc2d:{NFSU2_TR(0x47cc2d);
if(r1(R+518)){{goto L47cc38;}}
}
B47cc2f:L47cc2f:{c.instructions+=2;NFSU2_TR(0x47cc2f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47cc30:{NFSU2_TR(0x47cc30);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47cc35ull));
TAIL_STATIC(0x440540u,440);
}
B47cc35:L47cc35:{c.instructions+=1;NFSU2_TR(0x47cc35);
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
B47cc38:L47cc38:{c.instructions+=3;NFSU2_TR(0x47cc38);
__builtin_memmove((R+0),(R+24),4);
}
B47cc3a:{NFSU2_TR(0x47cc3a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B47cc3b:{NFSU2_TR(0x47cc3b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B47cc40:L47cc40:{c.instructions+=3;NFSU2_TR(0x47cc40);
__builtin_memmove((R+0),gp(0x7ec840),4);
}
B47cc45:{NFSU2_TR(0x47cc45);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47cc46:{NFSU2_TR(0x47cc46);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47cc4bull));
TAIL_STATIC(0x43e910u,43e);
}
B47cc4b:L47cc4b:{c.instructions+=3;NFSU2_TR(0x47cc4b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B47cc4e:{NFSU2_TR(0x47cc4e);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x500ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x500ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B47cc53:{NFSU2_TR(0x47cc53);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L47cc7d;}}
}
B47cc55:L47cc55:{c.instructions+=6;NFSU2_TR(0x47cc55);
__builtin_memmove((R+4),gp(0x7ec840),4);
}
B47cc5b:{NFSU2_TR(0x47cc5b);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x7ull))));
}
B47cc5e:{NFSU2_TR(0x47cc5e);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x1000ull))));
}
B47cc64:{NFSU2_TR(0x47cc64);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47cc65:{NFSU2_TR(0x47cc65);
u8 U[4];
w4(U+0,u32(0x100ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47cc6a:{NFSU2_TR(0x47cc6a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47cc6full));
TAIL_STATIC(0x440820u,440);
}
B47cc6f:L47cc6f:{c.instructions+=3;NFSU2_TR(0x47cc6f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B47cc72:{NFSU2_TR(0x47cc72);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B47cc74:{NFSU2_TR(0x47cc74);
if(r1(R+518)){{goto L47cc7d;}}
}
B47cc76:L47cc76:{c.instructions+=2;NFSU2_TR(0x47cc76);
__builtin_memmove((R+4),(R+0),4);
}
B47cc78:{NFSU2_TR(0x47cc78);
TAIL_STATIC(0x472c10u,472);
}
B47cc7d:L47cc7d:{c.instructions+=2;NFSU2_TR(0x47cc7d);
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
B47cc7f:{NFSU2_TR(0x47cc7f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B47cc80:L47cc80:{c.instructions+=12;NFSU2_TR(0x47cc80);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47cc82:{NFSU2_TR(0x47cc82);
u8 U[4];
w4(U+0,u32(0x772268ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47cc87:{NFSU2_TR(0x47cc87);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47cc8d:{NFSU2_TR(0x47cc8d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47cc8e:{NFSU2_TR(0x47cc8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47cc95:{NFSU2_TR(0x47cc95);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47cc96:{NFSU2_TR(0x47cc96);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47cc97:{NFSU2_TR(0x47cc97);
__builtin_memmove((R+24),(R+4),4);
}
B47cc99:{NFSU2_TR(0x47cc99);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47cc9d:{NFSU2_TR(0x47cc9d);
u8 U[4];
w4(U+0,u32(0x78acb0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B47cca3:{NFSU2_TR(0x47cca3);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B47ccab:{NFSU2_TR(0x47ccab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47ccb0ull));
TAIL_STATIC(0x472cf0u,472);
}
B47ccb0:L47ccb0:{c.instructions+=6;NFSU2_TR(0x47ccb0);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47ccb4:{NFSU2_TR(0x47ccb4);
u8 U[4];
w4(U+0,u32(0x789ce4ull));
s4(u32(r4(R+24)),r4(U+0));
}
B47ccba:{NFSU2_TR(0x47ccba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B47ccbb:{NFSU2_TR(0x47ccbb);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47ccc2:{NFSU2_TR(0x47ccc2);
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
B47ccc5:{NFSU2_TR(0x47ccc5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B47ccd0:L47ccd0:{c.instructions+=5;NFSU2_TR(0x47ccd0);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47ccd4:{NFSU2_TR(0x47ccd4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47ccd7:{NFSU2_TR(0x47ccd7);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47ccdb:{NFSU2_TR(0x47ccdb);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(R+4))<(r4(U+10))));
w1(R+523,sborrow<u32>(r4(R+4),r4(U+10)));
w4(U+14,u32(u32(r4(R+4))-u32(r4(U+10))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B47ccdd:{NFSU2_TR(0x47ccdd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L47ccf3;}}
}
B47ccdf:L47ccdf:{c.instructions+=5;NFSU2_TR(0x47ccdf);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47cce3:{NFSU2_TR(0x47cce3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
w4(U+4,u32(0x472cd0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B47ccea:{NFSU2_TR(0x47ccea);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x14ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x14ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B47cced:{NFSU2_TR(0x47cced);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47ccee:{NFSU2_TR(0x47ccee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47ccf3ull));
TAIL_STATIC(0x735680u,735);
}
B47ccf3:L47ccf3:{c.instructions+=1;NFSU2_TR(0x47ccf3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B47cd00:L47cd00:{c.instructions+=3;NFSU2_TR(0x47cd00);
__builtin_memmove((R+0),gp(0x7ec840),4);
}
B47cd05:{NFSU2_TR(0x47cd05);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47cd06:{NFSU2_TR(0x47cd06);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47cd0bull));
TAIL_STATIC(0x43e910u,43e);
}
B47cd0b:L47cd0b:{c.instructions+=3;NFSU2_TR(0x47cd0b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B47cd0e:{NFSU2_TR(0x47cd0e);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x50cull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x50cull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B47cd13:{NFSU2_TR(0x47cd13);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L47cd3d;}}
}
B47cd15:L47cd15:{c.instructions+=6;NFSU2_TR(0x47cd15);
__builtin_memmove((R+4),gp(0x7ec840),4);
}
B47cd1b:{NFSU2_TR(0x47cd1b);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x7ull))));
}
B47cd1e:{NFSU2_TR(0x47cd1e);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x1000ull))));
}
B47cd24:{NFSU2_TR(0x47cd24);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47cd25:{NFSU2_TR(0x47cd25);
u8 U[4];
w4(U+0,u32(0x10cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47cd2a:{NFSU2_TR(0x47cd2a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47cd2full));
TAIL_STATIC(0x440820u,440);
}
B47cd2f:L47cd2f:{c.instructions+=3;NFSU2_TR(0x47cd2f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B47cd32:{NFSU2_TR(0x47cd32);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B47cd34:{NFSU2_TR(0x47cd34);
if(r1(R+518)){{goto L47cd3d;}}
}
B47cd36:L47cd36:{c.instructions+=2;NFSU2_TR(0x47cd36);
__builtin_memmove((R+4),(R+0),4);
}
B47cd38:{NFSU2_TR(0x47cd38);
TAIL_STATIC(0x472d70u,472);
}
B47cd3d:L47cd3d:{c.instructions+=2;NFSU2_TR(0x47cd3d);
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
B47cd3f:{NFSU2_TR(0x47cd3f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B47cd40:L47cd40:{c.instructions+=12;NFSU2_TR(0x47cd40);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47cd42:{NFSU2_TR(0x47cd42);
u8 U[4];
w4(U+0,u32(0x772268ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47cd47:{NFSU2_TR(0x47cd47);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47cd4d:{NFSU2_TR(0x47cd4d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47cd4e:{NFSU2_TR(0x47cd4e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47cd55:{NFSU2_TR(0x47cd55);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47cd56:{NFSU2_TR(0x47cd56);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47cd57:{NFSU2_TR(0x47cd57);
__builtin_memmove((R+24),(R+4),4);
}
B47cd59:{NFSU2_TR(0x47cd59);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47cd5d:{NFSU2_TR(0x47cd5d);
u8 U[4];
w4(U+0,u32(0x78acf8ull));
s4(u32(r4(R+24)),r4(U+0));
}
B47cd63:{NFSU2_TR(0x47cd63);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B47cd6b:{NFSU2_TR(0x47cd6b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47cd70ull));
TAIL_STATIC(0x473010u,473);
}
B47cd70:L47cd70:{c.instructions+=6;NFSU2_TR(0x47cd70);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47cd74:{NFSU2_TR(0x47cd74);
u8 U[4];
w4(U+0,u32(0x789ce4ull));
s4(u32(r4(R+24)),r4(U+0));
}
B47cd7a:{NFSU2_TR(0x47cd7a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B47cd7b:{NFSU2_TR(0x47cd7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47cd82:{NFSU2_TR(0x47cd82);
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
B47cd85:{NFSU2_TR(0x47cd85);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B47cd90:L47cd90:{c.instructions+=5;NFSU2_TR(0x47cd90);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47cd91:{NFSU2_TR(0x47cd91);
__builtin_memmove((R+24),(R+4),4);
}
B47cd93:{NFSU2_TR(0x47cd93);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B47cd99:{NFSU2_TR(0x47cd99);
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
B47cd9b:{NFSU2_TR(0x47cd9b);
if(r1(R+518)){{goto L47cda9;}}
}
B47cd9d:L47cd9d:{c.instructions+=1;NFSU2_TR(0x47cd9d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47cda2ull));
TAIL_STATIC(0x4735e0u,473);
}
B47cda2:L47cda2:{c.instructions+=2;NFSU2_TR(0x47cda2);
__builtin_memmove((R+4),(R+24),4);
}
B47cda4:{NFSU2_TR(0x47cda4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47cda9ull));
TAIL_STATIC(0x45faa0u,45f);
}
B47cda9:L47cda9:{c.instructions+=2;NFSU2_TR(0x47cda9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B47cdaa:{NFSU2_TR(0x47cdaa);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B47cdb0:L47cdb0:{c.instructions+=8;NFSU2_TR(0x47cdb0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x1cull))));
}
B47cdb3:{NFSU2_TR(0x47cdb3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47cdb4:{NFSU2_TR(0x47cdb4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47cdb5:{NFSU2_TR(0x47cdb5);
__builtin_memmove((R+24),(R+4),4);
}
B47cdb7:{NFSU2_TR(0x47cdb7);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B47cdbd:{NFSU2_TR(0x47cdbd);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B47cdbf:{NFSU2_TR(0x47cdbf);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B47cdc1:{NFSU2_TR(0x47cdc1);
if(r1(R+518)){TAIL_STATIC(0x47d428u,47d);}
}
B47cdc7:L47cdc7:{c.instructions+=6;NFSU2_TR(0x47cdc7);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B47cdcd:{NFSU2_TR(0x47cdcd);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B47cdcf:{NFSU2_TR(0x47cdcf);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47cdd0:{NFSU2_TR(0x47cdd0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47cdd1:{NFSU2_TR(0x47cdd1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47cdd4:{NFSU2_TR(0x47cdd4);
if(r1(R+518)){{goto L47ce95;}}
}
B47cdda:L47cdda:{c.instructions+=3;NFSU2_TR(0x47cdda);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47cde0:{NFSU2_TR(0x47cde0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47cde1:{NFSU2_TR(0x47cde1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47cde6ull));
TAIL_STATIC(0x45f940u,45f);
}
B47cde6:L47cde6:{c.instructions+=4;NFSU2_TR(0x47cde6);
__builtin_memmove((R+8),(R+0),4);
}
B47cde8:{NFSU2_TR(0x47cde8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47cde9:{NFSU2_TR(0x47cde9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47cdef:{NFSU2_TR(0x47cdef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47cdf4ull));
TAIL_STATIC(0x45f9d0u,45f);
}
B47cdf4:L47cdf4:{c.instructions+=6;NFSU2_TR(0x47cdf4);
__builtin_memmove((R+28),(R+0),4);
}
B47cdf6:{NFSU2_TR(0x47cdf6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47cdfc:{NFSU2_TR(0x47cdfc);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B47cdff:{NFSU2_TR(0x47cdff);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B47ce00:{NFSU2_TR(0x47ce00);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47ce04:{NFSU2_TR(0x47ce04);
if(r1(R+518)){{goto L47ce17;}}
}
B47ce06:L47ce06:{c.instructions+=2;NFSU2_TR(0x47ce06);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0xaull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B47ce09:{NFSU2_TR(0x47ce09);
if(r1(R+518)){{goto L47ce10;}}
}
B47ce0b:L47ce0b:{c.instructions+=2;NFSU2_TR(0x47ce0b);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x5ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B47ce0e:{NFSU2_TR(0x47ce0e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L47ce17;}}
}
B47ce10:L47ce10:{c.instructions+=2;NFSU2_TR(0x47ce10);
w4(R+20,u32(0x1ull));
}
B47ce15:{NFSU2_TR(0x47ce15);
{goto L47ce1a;}
}
B47ce17:L47ce17:{c.instructions+=1;NFSU2_TR(0x47ce17);
w4(R+20,u32(u32(r4(R+20))|u32(u32(0xffffffffull))));
}
B47ce1a:L47ce1a:{c.instructions+=2;NFSU2_TR(0x47ce1a);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B47ce1d:{NFSU2_TR(0x47ce1d);
if(r1(R+518)){{goto L47ce2b;}}
}
B47ce1f:L47ce1f:{c.instructions+=4;NFSU2_TR(0x47ce1f);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47ce21:{NFSU2_TR(0x47ce21);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47ce22:{NFSU2_TR(0x47ce22);
__builtin_memmove((R+4),(R+24),4);
}
B47ce24:{NFSU2_TR(0x47ce24);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47ce29ull));
TAIL_STATIC(0x45fb00u,45f);
}
B47ce29:L47ce29:{c.instructions+=1;NFSU2_TR(0x47ce29);
{goto L47ce6c;}
}
B47ce2b:L47ce2b:{c.instructions+=3;NFSU2_TR(0x47ce2b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B47ce31:{NFSU2_TR(0x47ce31);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B47ce33:{NFSU2_TR(0x47ce33);
if(r1(R+518)){{goto L47ce62;}}
}
B47ce35:L47ce35:{c.instructions+=3;NFSU2_TR(0x47ce35);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B47ce37:{NFSU2_TR(0x47ce37);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B47ce39:{NFSU2_TR(0x47ce39);
if(r1(R+518)){{goto L47ce40;}}
}
B47ce3b:L47ce3b:{c.instructions+=1;NFSU2_TR(0x47ce3b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47ce40ull));
TAIL_STATIC(0x735550u,735);
}
B47ce40:L47ce40:{c.instructions+=3;NFSU2_TR(0x47ce40);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B47ce44:{NFSU2_TR(0x47ce44);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47ce45:{NFSU2_TR(0x47ce45);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47ce4aull));
TAIL_STATIC(0x734df0u,734);
}
B47ce4a:L47ce4a:{c.instructions+=2;NFSU2_TR(0x47ce4a);
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
B47ce4d:{NFSU2_TR(0x47ce4d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47ce52ull));
TAIL_STATIC(0x734e40u,734);
}
B47ce52:L47ce52:{c.instructions+=5;NFSU2_TR(0x47ce52);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47ce56:{NFSU2_TR(0x47ce56);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B47ce58:{NFSU2_TR(0x47ce58);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47ce59:{NFSU2_TR(0x47ce59);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47ce5a:{NFSU2_TR(0x47ce5a);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47ce5dull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B47ce5d:L47ce5d:{c.instructions+=1;NFSU2_TR(0x47ce5d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47ce62ull));
TAIL_STATIC(0x734e60u,734);
}
B47ce62:L47ce62:{c.instructions+=2;NFSU2_TR(0x47ce62);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B47ce66:{NFSU2_TR(0x47ce66);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47ce6c:L47ce6c:{c.instructions+=4;NFSU2_TR(0x47ce6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47ce72:{NFSU2_TR(0x47ce72);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B47ce78:{NFSU2_TR(0x47ce78);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B47ce7a:{NFSU2_TR(0x47ce7a);
if(r1(R+518)){{goto L47ce95;}}
}
B47ce7c:L47ce7c:{c.instructions+=2;NFSU2_TR(0x47ce7c);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B47ce7f:{NFSU2_TR(0x47ce7f);
if(r1(R+518)){{goto L47ce86;}}
}
B47ce81:L47ce81:{c.instructions+=3;NFSU2_TR(0x47ce81);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47ce83:{NFSU2_TR(0x47ce83);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47ce84:{NFSU2_TR(0x47ce84);
{goto L47ce8e;}
}
B47ce86:L47ce86:{c.instructions+=2;NFSU2_TR(0x47ce86);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B47ce89:{NFSU2_TR(0x47ce89);
if(r1(R+518)){{goto L47ce95;}}
}
B47ce8b:L47ce8b:{c.instructions+=2;NFSU2_TR(0x47ce8b);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47ce8d:{NFSU2_TR(0x47ce8d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47ce8e:L47ce8e:{c.instructions+=2;NFSU2_TR(0x47ce8e);
__builtin_memmove((R+4),(R+24),4);
}
B47ce90:{NFSU2_TR(0x47ce90);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47ce95ull));
TAIL_STATIC(0x4731c0u,473);
}
B47ce95:L47ce95:{c.instructions+=3;NFSU2_TR(0x47ce95);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe9ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B47ce9b:{NFSU2_TR(0x47ce9b);
u8 U[4];
w1(U+3,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B47ce9d:{NFSU2_TR(0x47ce9d);
if(r1(R+518)){{goto L47cf5b;}}
}
B47cea3:L47cea3:{c.instructions+=3;NFSU2_TR(0x47cea3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47cea9:{NFSU2_TR(0x47cea9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47ceaa:{NFSU2_TR(0x47ceaa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47ceafull));
TAIL_STATIC(0x45f940u,45f);
}
B47ceaf:L47ceaf:{c.instructions+=4;NFSU2_TR(0x47ceaf);
__builtin_memmove((R+8),(R+0),4);
}
B47ceb1:{NFSU2_TR(0x47ceb1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47ceb2:{NFSU2_TR(0x47ceb2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47ceb8:{NFSU2_TR(0x47ceb8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47cebdull));
TAIL_STATIC(0x45f9d0u,45f);
}
B47cebd:L47cebd:{c.instructions+=5;NFSU2_TR(0x47cebd);
__builtin_memmove((R+12),(R+0),4);
}
B47cebf:{NFSU2_TR(0x47cebf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47cec5:{NFSU2_TR(0x47cec5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B47cec8:{NFSU2_TR(0x47cec8);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B47cec9:{NFSU2_TR(0x47cec9);
if(r1(R+518)){{goto L47cedc;}}
}
B47cecb:L47cecb:{c.instructions+=2;NFSU2_TR(0x47cecb);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0xaull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B47cece:{NFSU2_TR(0x47cece);
if(r1(R+518)){{goto L47ced5;}}
}
B47ced0:L47ced0:{c.instructions+=2;NFSU2_TR(0x47ced0);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x5ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B47ced3:{NFSU2_TR(0x47ced3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L47cedc;}}
}
B47ced5:L47ced5:{c.instructions+=2;NFSU2_TR(0x47ced5);
w4(R+20,u32(0x1ull));
}
B47ceda:{NFSU2_TR(0x47ceda);
{goto L47cedf;}
}
B47cedc:L47cedc:{c.instructions+=1;NFSU2_TR(0x47cedc);
w4(R+20,u32(u32(r4(R+20))|u32(u32(0xffffffffull))));
}
B47cedf:L47cedf:{c.instructions+=2;NFSU2_TR(0x47cedf);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B47cee2:{NFSU2_TR(0x47cee2);
if(r1(R+518)){{goto L47cef0;}}
}
B47cee4:L47cee4:{c.instructions+=4;NFSU2_TR(0x47cee4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47cee6:{NFSU2_TR(0x47cee6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47cee7:{NFSU2_TR(0x47cee7);
__builtin_memmove((R+4),(R+24),4);
}
B47cee9:{NFSU2_TR(0x47cee9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47ceeeull));
TAIL_STATIC(0x45fb00u,45f);
}
B47ceee:L47ceee:{c.instructions+=1;NFSU2_TR(0x47ceee);
{goto L47cf32;}
}
B47cef0:L47cef0:{c.instructions+=3;NFSU2_TR(0x47cef0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B47cef6:{NFSU2_TR(0x47cef6);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B47cef8:{NFSU2_TR(0x47cef8);
if(r1(R+518)){{goto L47cf28;}}
}
B47cefa:L47cefa:{c.instructions+=3;NFSU2_TR(0x47cefa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B47cefc:{NFSU2_TR(0x47cefc);
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
B47cefe:{NFSU2_TR(0x47cefe);
if(r1(R+518)){{goto L47cf05;}}
}
B47cf00:L47cf00:{c.instructions+=1;NFSU2_TR(0x47cf00);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47cf05ull));
TAIL_STATIC(0x735550u,735);
}
B47cf05:L47cf05:{c.instructions+=3;NFSU2_TR(0x47cf05);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B47cf09:{NFSU2_TR(0x47cf09);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47cf0a:{NFSU2_TR(0x47cf0a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47cf0full));
TAIL_STATIC(0x734df0u,734);
}
B47cf0f:L47cf0f:{c.instructions+=2;NFSU2_TR(0x47cf0f);
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
B47cf12:{NFSU2_TR(0x47cf12);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47cf17ull));
TAIL_STATIC(0x734e40u,734);
}
B47cf17:L47cf17:{c.instructions+=5;NFSU2_TR(0x47cf17);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47cf1b:{NFSU2_TR(0x47cf1b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B47cf1d:{NFSU2_TR(0x47cf1d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47cf1f:{NFSU2_TR(0x47cf1f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47cf20:{NFSU2_TR(0x47cf20);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47cf23ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B47cf23:L47cf23:{c.instructions+=1;NFSU2_TR(0x47cf23);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47cf28ull));
TAIL_STATIC(0x734e60u,734);
}
B47cf28:L47cf28:{c.instructions+=1;NFSU2_TR(0x47cf28);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B47cf32:L47cf32:{c.instructions+=4;NFSU2_TR(0x47cf32);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47cf38:{NFSU2_TR(0x47cf38);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xe9ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B47cf3e:{NFSU2_TR(0x47cf3e);
u8 U[4];
w1(U+3,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B47cf40:{NFSU2_TR(0x47cf40);
if(r1(R+518)){{goto L47cf5b;}}
}
B47cf42:L47cf42:{c.instructions+=2;NFSU2_TR(0x47cf42);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B47cf45:{NFSU2_TR(0x47cf45);
if(r1(R+518)){{goto L47cf4c;}}
}
B47cf47:L47cf47:{c.instructions+=3;NFSU2_TR(0x47cf47);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47cf49:{NFSU2_TR(0x47cf49);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47cf4a:{NFSU2_TR(0x47cf4a);
{goto L47cf54;}
}
B47cf4c:L47cf4c:{c.instructions+=2;NFSU2_TR(0x47cf4c);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B47cf4f:{NFSU2_TR(0x47cf4f);
if(r1(R+518)){{goto L47cf5b;}}
}
B47cf51:L47cf51:{c.instructions+=2;NFSU2_TR(0x47cf51);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47cf53:{NFSU2_TR(0x47cf53);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47cf54:L47cf54:{c.instructions+=2;NFSU2_TR(0x47cf54);
__builtin_memmove((R+4),(R+24),4);
}
B47cf56:{NFSU2_TR(0x47cf56);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47cf5bull));
TAIL_STATIC(0x4731c0u,473);
}
B47cf5b:L47cf5b:{c.instructions+=8;NFSU2_TR(0x47cf5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47cf61:{NFSU2_TR(0x47cf61);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7ecf4cull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B47cf68:{NFSU2_TR(0x47cf68);
u8 U[40];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
w8(U+16,u64(s64(s32(r4(R+28)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+24,u64(s64(s32(r4(U+4)))));
w8(U+32,u64(u64(r8(U+16))*u64(r8(U+24))));
w4(R+28,u32(r8(U+32)));
w8(U+8,u64(s64(s32(r4(R+28)))));
w1(R+512,u8((r8(U+8))!=(r8(U+32))));
__builtin_memmove((R+523),(R+512),1);
}
B47cf6f:{NFSU2_TR(0x47cf6f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B47cf71:{NFSU2_TR(0x47cf71);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B47cf73:{NFSU2_TR(0x47cf73);
__builtin_memmove((R+4),(R+24),4);
}
B47cf75:{NFSU2_TR(0x47cf75);
u8 U[47];
w4(U+39,u32(u32(u32(0xfull))&u32(u32(0x1full))));
__builtin_memmove((U+43),(R+28),4);
w4(R+28,sar<u32>(r4(R+28),u64(r4(U+39))));
w1(U+24,u8((r4(U+39))==(u32(0x0ull))));
w4(U+25,u32(u32(r4(U+39))-u32(u32(0x1ull))));
w4(U+29,sar<u32>(r4(U+43),u64(r4(U+25))));
w4(U+33,u32(u32(r4(U+29))&u32(u32(0x1ull))));
w1(U+37,u8((r4(U+33))!=(u32(0x0ull))));
__builtin_memmove((U+0),(U+24),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(R+512))));
w1(U+2,u8(!(r1(U+24))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+37))));
w1(R+512,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+38,u8((r4(U+39))==(u32(0x1ull))));
__builtin_memmove((U+0),(U+38),1);
w1(U+1,u8(u32(r1(U+0))*u32(u8(0x0ull))));
w1(U+2,u8(!(r1(U+38))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(R+523))));
w1(R+523,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+39))!=(u32(0x0ull))));
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
B47cf78:{NFSU2_TR(0x47cf78);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x47cf7bull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B47cf7b:L47cf7b:{c.instructions+=8;NFSU2_TR(0x47cf7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x108ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B47cf81:{NFSU2_TR(0x47cf81);
__builtin_memmove((R+4),(R+0),4);
}
B47cf83:{NFSU2_TR(0x47cf83);
__builtin_memmove((R+0),gp(0x82b884),4);
}
B47cf88:{NFSU2_TR(0x47cf88);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(r4(R+28)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B47cf8b:{NFSU2_TR(0x47cf8b);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B47cf8e:{NFSU2_TR(0x47cf8e);
u8 U[4];
w4(U+0,u32(u32(u32(0xfull))&u32(u32(0x1full))));
w4(R+4,sar<u32>(r4(R+4),u64(r4(U+0))));
}
B47cf91:{NFSU2_TR(0x47cf91);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B47cf93:{NFSU2_TR(0x47cf93);
if(r1(R+518)){{goto L47cf9b;}}
}
B47cf95:L47cf95:{c.instructions+=3;NFSU2_TR(0x47cf95);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B47cf97:{NFSU2_TR(0x47cf97);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B47cf99:{NFSU2_TR(0x47cf99);
{goto L47cfbd;}
}
B47cf9b:L47cf9b:{c.instructions+=3;NFSU2_TR(0x47cf9b);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x13ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B47cf9e:{NFSU2_TR(0x47cf9e);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B47cfa0:{NFSU2_TR(0x47cfa0);
if(r1(R+518)){{goto L47cfbb;}}
}
B47cfa2:L47cfa2:{c.instructions+=6;NFSU2_TR(0x47cfa2);
{u32 ea_=u32(r4(R+0)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B47cfa5:{NFSU2_TR(0x47cfa5);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B47cfab:{NFSU2_TR(0x47cfab);
{u32 ea_=u32(r4(R+0)+u32(28u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B47cfae:{NFSU2_TR(0x47cfae);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B47cfb0:{NFSU2_TR(0x47cfb0);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B47cfb3:{NFSU2_TR(0x47cfb3);
if(r1(R+514)){{goto L47cfbb;}}
}
B47cfb5:L47cfb5:{c.instructions+=3;NFSU2_TR(0x47cfb5);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B47cfb7:{NFSU2_TR(0x47cfb7);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B47cfb9:{NFSU2_TR(0x47cfb9);
{goto L47cfbd;}
}
B47cfbb:L47cfbb:{c.instructions+=1;NFSU2_TR(0x47cfbb);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B47cfbd:L47cfbd:{c.instructions+=4;NFSU2_TR(0x47cfbd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47cfc3:{NFSU2_TR(0x47cfc3);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B47cfc9:{NFSU2_TR(0x47cfc9);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B47cfcb:{NFSU2_TR(0x47cfcb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L47cfcf;}}
}
B47cfcd:L47cfcd:{c.instructions+=1;NFSU2_TR(0x47cfcd);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B47cfcf:L47cfcf:{c.instructions+=3;NFSU2_TR(0x47cfcf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B47cfd5:{NFSU2_TR(0x47cfd5);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B47cfd7:{NFSU2_TR(0x47cfd7);
if(r1(R+518)){TAIL_STATIC(0x47d04cu,47d);}
}
B47cfd9:L47cfd9:{c.instructions+=2;NFSU2_TR(0x47cfd9);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B47cfdb:{NFSU2_TR(0x47cfdb);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L47cfe1;}}
}
B47cfdd:L47cfdd:{c.instructions+=2;NFSU2_TR(0x47cfdd);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B47cfdf:{NFSU2_TR(0x47cfdf);
{goto L47cfee;}
}
B47cfe1:L47cfe1:{c.instructions+=2;NFSU2_TR(0x47cfe1);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x7fffull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7fffull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B47cfe7:{NFSU2_TR(0x47cfe7);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L47cfee;}}
}
B47cfe9:L47cfe9:{c.instructions+=1;NFSU2_TR(0x47cfe9);
w4(R+4,u32(0x7fffull));
}
B47cfee:L47cfee:{c.instructions+=5;NFSU2_TR(0x47cfee);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+20),r4(U+0)));
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B47cff0:{NFSU2_TR(0x47cff0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B47cff3:{NFSU2_TR(0x47cff3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B47cff9:{NFSU2_TR(0x47cff9);
__builtin_memmove((R+0),(R+20),4);
}
B47cffb:{NFSU2_TR(0x47cffb);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x47d001u,47d);}
}
B47cffd:L47cffd:{c.instructions+=2;NFSU2_TR(0x47cffd);
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
B47cfff:{NFSU2_TR(0x47cfff);
TAIL_STATIC(0x47d00eu,47d);
}
XIT:NFSU2_TR_EXIT(0x47c,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
