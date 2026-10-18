#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_70b(u8* __restrict R,Cpu& c);
u32 body_71d(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x70c,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x70c,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_70c(u8* __restrict R,Cpu& c);
u32 page_70c(Cpu& c){return body_70c(c.regs.data(),c);}
__attribute__((noinline)) u32 body_70c(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x70c002:goto L70c002;
case 0x70c004:c.instructions+=6;goto B70c004;
case 0x70c007:c.instructions+=5;goto B70c007;
case 0x70c008:c.instructions+=4;goto B70c008;
case 0x70c009:c.instructions+=3;goto B70c009;
case 0x70c00a:c.instructions+=2;goto B70c00a;
case 0x70c00d:c.instructions+=1;goto B70c00d;
case 0x70c00f:goto L70c00f;
case 0x70c012:c.instructions+=6;goto B70c012;
case 0x70c015:c.instructions+=5;goto B70c015;
case 0x70c018:c.instructions+=4;goto B70c018;
case 0x70c01a:c.instructions+=3;goto B70c01a;
case 0x70c01d:c.instructions+=2;goto B70c01d;
case 0x70c020:c.instructions+=1;goto B70c020;
case 0x70c022:goto L70c022;
case 0x70c025:c.instructions+=4;goto B70c025;
case 0x70c026:c.instructions+=3;goto B70c026;
case 0x70c029:c.instructions+=2;goto B70c029;
case 0x70c02c:c.instructions+=1;goto B70c02c;
case 0x70c02e:goto L70c02e;
case 0x70c030:c.instructions+=1;goto B70c030;
case 0x70c031:goto L70c031;
case 0x70c034:c.instructions+=2;goto B70c034;
case 0x70c037:c.instructions+=1;goto B70c037;
case 0x70c03a:goto L70c03a;
case 0x70c03f:c.instructions+=15;goto B70c03f;
case 0x70c042:c.instructions+=14;goto B70c042;
case 0x70c045:c.instructions+=13;goto B70c045;
case 0x70c048:c.instructions+=12;goto B70c048;
case 0x70c04a:c.instructions+=11;goto B70c04a;
case 0x70c04c:c.instructions+=10;goto B70c04c;
case 0x70c04f:c.instructions+=9;goto B70c04f;
case 0x70c053:c.instructions+=8;goto B70c053;
case 0x70c055:c.instructions+=7;goto B70c055;
case 0x70c058:c.instructions+=6;goto B70c058;
case 0x70c05c:c.instructions+=5;goto B70c05c;
case 0x70c05e:c.instructions+=4;goto B70c05e;
case 0x70c060:c.instructions+=3;goto B70c060;
case 0x70c061:c.instructions+=2;goto B70c061;
case 0x70c063:c.instructions+=1;goto B70c063;
case 0x70c065:goto L70c065;
case 0x70c067:goto L70c067;
case 0x70c06c:c.instructions+=2;goto B70c06c;
case 0x70c06e:c.instructions+=1;goto B70c06e;
case 0x70c070:goto L70c070;
case 0x70c072:goto L70c072;
case 0x70c074:c.instructions+=4;goto B70c074;
case 0x70c075:c.instructions+=3;goto B70c075;
case 0x70c078:c.instructions+=2;goto B70c078;
case 0x70c07a:c.instructions+=1;goto B70c07a;
case 0x70c07c:goto L70c07c;
case 0x70c07f:c.instructions+=3;goto B70c07f;
case 0x70c082:c.instructions+=2;goto B70c082;
case 0x70c085:c.instructions+=1;goto B70c085;
case 0x70c087:goto L70c087;
case 0x70c088:c.instructions+=4;goto B70c088;
case 0x70c089:c.instructions+=3;goto B70c089;
case 0x70c08a:c.instructions+=2;goto B70c08a;
case 0x70c08b:c.instructions+=1;goto B70c08b;
case 0x70c08c:goto L70c08c;
case 0x70c08d:c.instructions+=11;goto B70c08d;
case 0x70c08f:c.instructions+=10;goto B70c08f;
case 0x70c092:c.instructions+=9;goto B70c092;
case 0x70c093:c.instructions+=8;goto B70c093;
case 0x70c094:c.instructions+=7;goto B70c094;
case 0x70c097:c.instructions+=6;goto B70c097;
case 0x70c09a:c.instructions+=5;goto B70c09a;
case 0x70c09d:c.instructions+=4;goto B70c09d;
case 0x70c09f:c.instructions+=3;goto B70c09f;
case 0x70c0a2:c.instructions+=2;goto B70c0a2;
case 0x70c0a3:c.instructions+=1;goto B70c0a3;
case 0x70c0a5:goto L70c0a5;
case 0x70c0ac:c.instructions+=4;goto B70c0ac;
case 0x70c0b3:c.instructions+=3;goto B70c0b3;
case 0x70c0ba:c.instructions+=2;goto B70c0ba;
case 0x70c0c1:c.instructions+=1;goto B70c0c1;
case 0x70c0c3:goto L70c0c3;
case 0x70c0ca:c.instructions+=3;goto B70c0ca;
case 0x70c0d1:c.instructions+=2;goto B70c0d1;
case 0x70c0d8:c.instructions+=1;goto B70c0d8;
case 0x70c0df:goto L70c0df;
case 0x70c0e2:c.instructions+=1;goto B70c0e2;
case 0x70c0e4:goto L70c0e4;
case 0x70c0eb:c.instructions+=1;goto B70c0eb;
case 0x70c0ed:goto L70c0ed;
case 0x70c0f0:c.instructions+=2;goto B70c0f0;
case 0x70c0f7:c.instructions+=1;goto B70c0f7;
case 0x70c0f9:goto L70c0f9;
case 0x70c100:goto L70c100;
case 0x70c103:c.instructions+=15;goto B70c103;
case 0x70c106:c.instructions+=14;goto B70c106;
case 0x70c10c:c.instructions+=13;goto B70c10c;
case 0x70c112:c.instructions+=12;goto B70c112;
case 0x70c116:c.instructions+=11;goto B70c116;
case 0x70c11a:c.instructions+=10;goto B70c11a;
case 0x70c120:c.instructions+=9;goto B70c120;
case 0x70c122:c.instructions+=8;goto B70c122;
case 0x70c125:c.instructions+=7;goto B70c125;
case 0x70c128:c.instructions+=6;goto B70c128;
case 0x70c12a:c.instructions+=5;goto B70c12a;
case 0x70c12c:c.instructions+=4;goto B70c12c;
case 0x70c12f:c.instructions+=3;goto B70c12f;
case 0x70c132:c.instructions+=2;goto B70c132;
case 0x70c135:c.instructions+=1;goto B70c135;
case 0x70c13b:goto L70c13b;
case 0x70c13f:c.instructions+=2;goto B70c13f;
case 0x70c141:c.instructions+=1;goto B70c141;
case 0x70c147:goto L70c147;
case 0x70c14a:c.instructions+=12;goto B70c14a;
case 0x70c14d:c.instructions+=11;goto B70c14d;
case 0x70c14f:c.instructions+=10;goto B70c14f;
case 0x70c152:c.instructions+=9;goto B70c152;
case 0x70c155:c.instructions+=8;goto B70c155;
case 0x70c158:c.instructions+=7;goto B70c158;
case 0x70c15a:c.instructions+=6;goto B70c15a;
case 0x70c15d:c.instructions+=5;goto B70c15d;
case 0x70c160:c.instructions+=4;goto B70c160;
case 0x70c162:c.instructions+=3;goto B70c162;
case 0x70c165:c.instructions+=2;goto B70c165;
case 0x70c168:c.instructions+=1;goto B70c168;
case 0x70c16a:goto L70c16a;
case 0x70c16d:goto L70c16d;
case 0x70c171:c.instructions+=4;goto B70c171;
case 0x70c174:c.instructions+=3;goto B70c174;
case 0x70c177:c.instructions+=2;goto B70c177;
case 0x70c17a:c.instructions+=1;goto B70c17a;
case 0x70c180:goto L70c180;
case 0x70c183:c.instructions+=1;goto B70c183;
case 0x70c189:goto L70c189;
case 0x70c18c:c.instructions+=7;goto B70c18c;
case 0x70c18e:c.instructions+=6;goto B70c18e;
case 0x70c191:c.instructions+=5;goto B70c191;
case 0x70c192:c.instructions+=4;goto B70c192;
case 0x70c193:c.instructions+=3;goto B70c193;
case 0x70c194:c.instructions+=2;goto B70c194;
case 0x70c195:c.instructions+=1;goto B70c195;
case 0x70c19b:goto L70c19b;
case 0x70c19e:c.instructions+=3;goto B70c19e;
case 0x70c1a1:c.instructions+=2;goto B70c1a1;
case 0x70c1a5:c.instructions+=1;goto B70c1a5;
case 0x70c1a7:goto L70c1a7;
case 0x70c1aa:c.instructions+=3;goto B70c1aa;
case 0x70c1ad:c.instructions+=2;goto B70c1ad;
case 0x70c1b1:c.instructions+=1;goto B70c1b1;
case 0x70c1b3:goto L70c1b3;
case 0x70c1b6:c.instructions+=3;goto B70c1b6;
case 0x70c1b7:c.instructions+=2;goto B70c1b7;
case 0x70c1ba:c.instructions+=1;goto B70c1ba;
case 0x70c1bc:goto L70c1bc;
case 0x70c1bf:c.instructions+=3;goto B70c1bf;
case 0x70c1c2:c.instructions+=2;goto B70c1c2;
case 0x70c1c6:c.instructions+=1;goto B70c1c6;
case 0x70c1c8:goto L70c1c8;
case 0x70c1cb:c.instructions+=3;goto B70c1cb;
case 0x70c1cc:c.instructions+=2;goto B70c1cc;
case 0x70c1cf:c.instructions+=1;goto B70c1cf;
case 0x70c1d1:goto L70c1d1;
case 0x70c1d4:c.instructions+=3;goto B70c1d4;
case 0x70c1d7:c.instructions+=2;goto B70c1d7;
case 0x70c1da:c.instructions+=1;goto B70c1da;
case 0x70c1dc:goto L70c1dc;
case 0x70c1e0:c.instructions+=1;goto B70c1e0;
case 0x70c1e2:goto L70c1e2;
case 0x70c1e5:c.instructions+=3;goto B70c1e5;
case 0x70c1e8:c.instructions+=2;goto B70c1e8;
case 0x70c1eb:c.instructions+=1;goto B70c1eb;
case 0x70c1ed:goto L70c1ed;
case 0x70c1f0:c.instructions+=8;goto B70c1f0;
case 0x70c1f3:c.instructions+=7;goto B70c1f3;
case 0x70c1f6:c.instructions+=6;goto B70c1f6;
case 0x70c1f8:c.instructions+=5;goto B70c1f8;
case 0x70c1f9:c.instructions+=4;goto B70c1f9;
case 0x70c1fa:c.instructions+=3;goto B70c1fa;
case 0x70c1fb:c.instructions+=2;goto B70c1fb;
case 0x70c1fc:c.instructions+=1;goto B70c1fc;
case 0x70c202:goto L70c202;
case 0x70c205:c.instructions+=8;goto B70c205;
case 0x70c208:c.instructions+=7;goto B70c208;
case 0x70c20b:c.instructions+=6;goto B70c20b;
case 0x70c20d:c.instructions+=5;goto B70c20d;
case 0x70c20e:c.instructions+=4;goto B70c20e;
case 0x70c20f:c.instructions+=3;goto B70c20f;
case 0x70c210:c.instructions+=2;goto B70c210;
case 0x70c211:c.instructions+=1;goto B70c211;
case 0x70c217:goto L70c217;
case 0x70c21a:c.instructions+=1;goto B70c21a;
case 0x70c21c:goto L70c21c;
case 0x70c21e:c.instructions+=2;goto B70c21e;
case 0x70c221:c.instructions+=1;goto B70c221;
case 0x70c223:goto L70c223;
case 0x70c226:c.instructions+=6;goto B70c226;
case 0x70c229:c.instructions+=5;goto B70c229;
case 0x70c22a:c.instructions+=4;goto B70c22a;
case 0x70c22b:c.instructions+=3;goto B70c22b;
case 0x70c22c:c.instructions+=2;goto B70c22c;
case 0x70c22d:c.instructions+=1;goto B70c22d;
case 0x70c233:goto L70c233;
case 0x70c235:goto L70c235;
case 0x70c238:c.instructions+=1;goto B70c238;
case 0x70c23a:goto L70c23a;
case 0x70c23d:c.instructions+=6;goto B70c23d;
case 0x70c240:c.instructions+=5;goto B70c240;
case 0x70c241:c.instructions+=4;goto B70c241;
case 0x70c242:c.instructions+=3;goto B70c242;
case 0x70c243:c.instructions+=2;goto B70c243;
case 0x70c244:c.instructions+=1;goto B70c244;
case 0x70c24a:goto L70c24a;
case 0x70c24d:c.instructions+=1;goto B70c24d;
case 0x70c24f:goto L70c24f;
case 0x70c250:c.instructions+=3;goto B70c250;
case 0x70c251:c.instructions+=2;goto B70c251;
case 0x70c252:c.instructions+=1;goto B70c252;
case 0x70c258:goto L70c258;
case 0x70c25b:goto L70c25b;
case 0x70c25e:c.instructions+=7;goto B70c25e;
case 0x70c262:c.instructions+=6;goto B70c262;
case 0x70c266:c.instructions+=5;goto B70c266;
case 0x70c269:c.instructions+=4;goto B70c269;
case 0x70c26c:c.instructions+=3;goto B70c26c;
case 0x70c26f:c.instructions+=2;goto B70c26f;
case 0x70c272:c.instructions+=1;goto B70c272;
case 0x70c278:goto L70c278;
case 0x70c27b:goto L70c27b;
case 0x70c27e:c.instructions+=7;goto B70c27e;
case 0x70c280:c.instructions+=6;goto B70c280;
case 0x70c283:c.instructions+=5;goto B70c283;
case 0x70c286:c.instructions+=4;goto B70c286;
case 0x70c289:c.instructions+=3;goto B70c289;
case 0x70c28c:c.instructions+=2;goto B70c28c;
case 0x70c28f:c.instructions+=1;goto B70c28f;
case 0x70c295:goto L70c295;
case 0x70c298:c.instructions+=13;goto B70c298;
case 0x70c29b:c.instructions+=12;goto B70c29b;
case 0x70c29d:c.instructions+=11;goto B70c29d;
case 0x70c2a0:c.instructions+=10;goto B70c2a0;
case 0x70c2a3:c.instructions+=9;goto B70c2a3;
case 0x70c2a5:c.instructions+=8;goto B70c2a5;
case 0x70c2a7:c.instructions+=7;goto B70c2a7;
case 0x70c2a9:c.instructions+=6;goto B70c2a9;
case 0x70c2ab:c.instructions+=5;goto B70c2ab;
case 0x70c2ad:c.instructions+=4;goto B70c2ad;
case 0x70c2b0:c.instructions+=3;goto B70c2b0;
case 0x70c2b3:c.instructions+=2;goto B70c2b3;
case 0x70c2b6:c.instructions+=1;goto B70c2b6;
case 0x70c2bc:goto L70c2bc;
case 0x70c2bf:goto L70c2bf;
case 0x70c2c1:c.instructions+=1;goto B70c2c1;
case 0x70c2c7:goto L70c2c7;
case 0x70c2ca:c.instructions+=5;goto B70c2ca;
case 0x70c2cd:c.instructions+=4;goto B70c2cd;
case 0x70c2cf:c.instructions+=3;goto B70c2cf;
case 0x70c2d2:c.instructions+=2;goto B70c2d2;
case 0x70c2d5:c.instructions+=1;goto B70c2d5;
case 0x70c2d7:goto L70c2d7;
case 0x70c2da:goto L70c2da;
case 0x70c2dd:c.instructions+=6;goto B70c2dd;
case 0x70c2e0:c.instructions+=5;goto B70c2e0;
case 0x70c2e3:c.instructions+=4;goto B70c2e3;
case 0x70c2e6:c.instructions+=3;goto B70c2e6;
case 0x70c2e9:c.instructions+=2;goto B70c2e9;
case 0x70c2ec:c.instructions+=1;goto B70c2ec;
case 0x70c2ee:goto L70c2ee;
case 0x70c2f1:c.instructions+=3;goto B70c2f1;
case 0x70c2f4:c.instructions+=2;goto B70c2f4;
case 0x70c2f7:c.instructions+=1;goto B70c2f7;
case 0x70c2fa:goto L70c2fa;
case 0x70c2fe:c.instructions+=1;goto B70c2fe;
case 0x70c300:goto L70c300;
case 0x70c303:c.instructions+=1;goto B70c303;
case 0x70c305:goto L70c305;
case 0x70c308:c.instructions+=7;goto B70c308;
case 0x70c30a:c.instructions+=6;goto B70c30a;
case 0x70c30d:c.instructions+=5;goto B70c30d;
case 0x70c30e:c.instructions+=4;goto B70c30e;
case 0x70c30f:c.instructions+=3;goto B70c30f;
case 0x70c310:c.instructions+=2;goto B70c310;
case 0x70c311:c.instructions+=1;goto B70c311;
case 0x70c317:goto L70c317;
case 0x70c31a:c.instructions+=8;goto B70c31a;
case 0x70c31d:c.instructions+=7;goto B70c31d;
case 0x70c320:c.instructions+=6;goto B70c320;
case 0x70c322:c.instructions+=5;goto B70c322;
case 0x70c323:c.instructions+=4;goto B70c323;
case 0x70c324:c.instructions+=3;goto B70c324;
case 0x70c325:c.instructions+=2;goto B70c325;
case 0x70c326:c.instructions+=1;goto B70c326;
case 0x70c32c:goto L70c32c;
case 0x70c32f:c.instructions+=8;goto B70c32f;
case 0x70c332:c.instructions+=7;goto B70c332;
case 0x70c335:c.instructions+=6;goto B70c335;
case 0x70c337:c.instructions+=5;goto B70c337;
case 0x70c338:c.instructions+=4;goto B70c338;
case 0x70c339:c.instructions+=3;goto B70c339;
case 0x70c33a:c.instructions+=2;goto B70c33a;
case 0x70c33b:c.instructions+=1;goto B70c33b;
case 0x70c341:goto L70c341;
case 0x70c344:c.instructions+=1;goto B70c344;
case 0x70c346:goto L70c346;
case 0x70c348:c.instructions+=2;goto B70c348;
case 0x70c34b:c.instructions+=1;goto B70c34b;
case 0x70c34d:goto L70c34d;
case 0x70c350:c.instructions+=6;goto B70c350;
case 0x70c353:c.instructions+=5;goto B70c353;
case 0x70c354:c.instructions+=4;goto B70c354;
case 0x70c355:c.instructions+=3;goto B70c355;
case 0x70c356:c.instructions+=2;goto B70c356;
case 0x70c357:c.instructions+=1;goto B70c357;
case 0x70c35d:goto L70c35d;
case 0x70c360:c.instructions+=1;goto B70c360;
case 0x70c362:goto L70c362;
case 0x70c365:c.instructions+=1;goto B70c365;
case 0x70c367:goto L70c367;
case 0x70c36a:c.instructions+=6;goto B70c36a;
case 0x70c36d:c.instructions+=5;goto B70c36d;
case 0x70c36e:c.instructions+=4;goto B70c36e;
case 0x70c36f:c.instructions+=3;goto B70c36f;
case 0x70c370:c.instructions+=2;goto B70c370;
case 0x70c371:c.instructions+=1;goto B70c371;
case 0x70c377:goto L70c377;
case 0x70c379:goto L70c379;
case 0x70c37a:c.instructions+=3;goto B70c37a;
case 0x70c37b:c.instructions+=2;goto B70c37b;
case 0x70c37c:c.instructions+=1;goto B70c37c;
case 0x70c382:goto L70c382;
case 0x70c385:goto L70c385;
case 0x70c388:c.instructions+=3;goto B70c388;
case 0x70c38b:c.instructions+=2;goto B70c38b;
case 0x70c38e:c.instructions+=1;goto B70c38e;
case 0x70c394:goto L70c394;
case 0x70c397:goto L70c397;
case 0x70c399:c.instructions+=5;goto B70c399;
case 0x70c39c:c.instructions+=4;goto B70c39c;
case 0x70c39f:c.instructions+=3;goto B70c39f;
case 0x70c3a2:c.instructions+=2;goto B70c3a2;
case 0x70c3a5:c.instructions+=1;goto B70c3a5;
case 0x70c3ab:goto L70c3ab;
case 0x70c3ae:goto L70c3ae;
case 0x70c3b4:c.instructions+=8;goto B70c3b4;
case 0x70c3b7:c.instructions+=7;goto B70c3b7;
case 0x70c3b9:c.instructions+=6;goto B70c3b9;
case 0x70c3bc:c.instructions+=5;goto B70c3bc;
case 0x70c3bf:c.instructions+=4;goto B70c3bf;
case 0x70c3c1:c.instructions+=3;goto B70c3c1;
case 0x70c3c3:c.instructions+=2;goto B70c3c3;
case 0x70c3c6:c.instructions+=1;goto B70c3c6;
case 0x70c3cc:goto L70c3cc;
case 0x70c3cf:goto L70c3cf;
case 0x70c3d1:c.instructions+=1;goto B70c3d1;
case 0x70c3d7:goto L70c3d7;
case 0x70c3da:c.instructions+=5;goto B70c3da;
case 0x70c3dd:c.instructions+=4;goto B70c3dd;
case 0x70c3df:c.instructions+=3;goto B70c3df;
case 0x70c3e2:c.instructions+=2;goto B70c3e2;
case 0x70c3e5:c.instructions+=1;goto B70c3e5;
case 0x70c3e7:goto L70c3e7;
case 0x70c3ea:goto L70c3ea;
case 0x70c3ed:c.instructions+=6;goto B70c3ed;
case 0x70c3f0:c.instructions+=5;goto B70c3f0;
case 0x70c3f3:c.instructions+=4;goto B70c3f3;
case 0x70c3f6:c.instructions+=3;goto B70c3f6;
case 0x70c3f9:c.instructions+=2;goto B70c3f9;
case 0x70c3fc:c.instructions+=1;goto B70c3fc;
case 0x70c3fe:goto L70c3fe;
case 0x70c401:c.instructions+=3;goto B70c401;
case 0x70c404:c.instructions+=2;goto B70c404;
case 0x70c407:c.instructions+=1;goto B70c407;
case 0x70c40a:goto L70c40a;
case 0x70c40e:c.instructions+=1;goto B70c40e;
case 0x70c410:goto L70c410;
case 0x70c413:c.instructions+=1;goto B70c413;
case 0x70c415:goto L70c415;
case 0x70c418:c.instructions+=7;goto B70c418;
case 0x70c41a:c.instructions+=6;goto B70c41a;
case 0x70c41d:c.instructions+=5;goto B70c41d;
case 0x70c41e:c.instructions+=4;goto B70c41e;
case 0x70c41f:c.instructions+=3;goto B70c41f;
case 0x70c420:c.instructions+=2;goto B70c420;
case 0x70c421:c.instructions+=1;goto B70c421;
case 0x70c427:goto L70c427;
case 0x70c42a:c.instructions+=8;goto B70c42a;
case 0x70c42d:c.instructions+=7;goto B70c42d;
case 0x70c430:c.instructions+=6;goto B70c430;
case 0x70c432:c.instructions+=5;goto B70c432;
case 0x70c433:c.instructions+=4;goto B70c433;
case 0x70c434:c.instructions+=3;goto B70c434;
case 0x70c435:c.instructions+=2;goto B70c435;
case 0x70c436:c.instructions+=1;goto B70c436;
case 0x70c43c:goto L70c43c;
case 0x70c43f:c.instructions+=8;goto B70c43f;
case 0x70c442:c.instructions+=7;goto B70c442;
case 0x70c445:c.instructions+=6;goto B70c445;
case 0x70c447:c.instructions+=5;goto B70c447;
case 0x70c448:c.instructions+=4;goto B70c448;
case 0x70c449:c.instructions+=3;goto B70c449;
case 0x70c44a:c.instructions+=2;goto B70c44a;
case 0x70c44b:c.instructions+=1;goto B70c44b;
case 0x70c451:goto L70c451;
case 0x70c454:c.instructions+=1;goto B70c454;
case 0x70c456:goto L70c456;
case 0x70c458:c.instructions+=2;goto B70c458;
case 0x70c45b:c.instructions+=1;goto B70c45b;
case 0x70c45d:goto L70c45d;
case 0x70c460:c.instructions+=6;goto B70c460;
case 0x70c463:c.instructions+=5;goto B70c463;
case 0x70c464:c.instructions+=4;goto B70c464;
case 0x70c465:c.instructions+=3;goto B70c465;
case 0x70c466:c.instructions+=2;goto B70c466;
case 0x70c467:c.instructions+=1;goto B70c467;
case 0x70c46d:goto L70c46d;
case 0x70c470:c.instructions+=1;goto B70c470;
case 0x70c472:goto L70c472;
case 0x70c475:c.instructions+=1;goto B70c475;
case 0x70c477:goto L70c477;
case 0x70c47a:c.instructions+=6;goto B70c47a;
case 0x70c47d:c.instructions+=5;goto B70c47d;
case 0x70c47e:c.instructions+=4;goto B70c47e;
case 0x70c47f:c.instructions+=3;goto B70c47f;
case 0x70c480:c.instructions+=2;goto B70c480;
case 0x70c481:c.instructions+=1;goto B70c481;
case 0x70c487:goto L70c487;
case 0x70c489:goto L70c489;
case 0x70c48a:c.instructions+=3;goto B70c48a;
case 0x70c48b:c.instructions+=2;goto B70c48b;
case 0x70c48c:c.instructions+=1;goto B70c48c;
case 0x70c492:goto L70c492;
case 0x70c495:goto L70c495;
case 0x70c498:c.instructions+=3;goto B70c498;
case 0x70c49b:c.instructions+=2;goto B70c49b;
case 0x70c49e:c.instructions+=1;goto B70c49e;
case 0x70c4a4:goto L70c4a4;
case 0x70c4a7:goto L70c4a7;
case 0x70c4a9:c.instructions+=5;goto B70c4a9;
case 0x70c4ac:c.instructions+=4;goto B70c4ac;
case 0x70c4af:c.instructions+=3;goto B70c4af;
case 0x70c4b2:c.instructions+=2;goto B70c4b2;
case 0x70c4b5:c.instructions+=1;goto B70c4b5;
case 0x70c4bb:goto L70c4bb;
case 0x70c4bc:c.instructions+=4;goto B70c4bc;
case 0x70c4bd:c.instructions+=3;goto B70c4bd;
case 0x70c4be:c.instructions+=2;goto B70c4be;
case 0x70c4bf:c.instructions+=1;goto B70c4bf;
case 0x70c4c0:goto L70c4c0;
case 0x70c4c1:c.instructions+=11;goto B70c4c1;
case 0x70c4c3:c.instructions+=10;goto B70c4c3;
case 0x70c4c6:c.instructions+=9;goto B70c4c6;
case 0x70c4c7:c.instructions+=8;goto B70c4c7;
case 0x70c4c8:c.instructions+=7;goto B70c4c8;
case 0x70c4cb:c.instructions+=6;goto B70c4cb;
case 0x70c4ce:c.instructions+=5;goto B70c4ce;
case 0x70c4d1:c.instructions+=4;goto B70c4d1;
case 0x70c4d3:c.instructions+=3;goto B70c4d3;
case 0x70c4d6:c.instructions+=2;goto B70c4d6;
case 0x70c4d7:c.instructions+=1;goto B70c4d7;
case 0x70c4d9:goto L70c4d9;
case 0x70c4e0:c.instructions+=4;goto B70c4e0;
case 0x70c4e7:c.instructions+=3;goto B70c4e7;
case 0x70c4ee:c.instructions+=2;goto B70c4ee;
case 0x70c4f5:c.instructions+=1;goto B70c4f5;
case 0x70c4f7:goto L70c4f7;
case 0x70c4fe:c.instructions+=3;goto B70c4fe;
case 0x70c505:c.instructions+=2;goto B70c505;
case 0x70c50c:c.instructions+=1;goto B70c50c;
case 0x70c513:goto L70c513;
case 0x70c516:c.instructions+=1;goto B70c516;
case 0x70c518:goto L70c518;
case 0x70c51f:c.instructions+=1;goto B70c51f;
case 0x70c521:goto L70c521;
case 0x70c524:c.instructions+=2;goto B70c524;
case 0x70c52b:c.instructions+=1;goto B70c52b;
case 0x70c52d:goto L70c52d;
case 0x70c534:goto L70c534;
case 0x70c537:c.instructions+=17;goto B70c537;
case 0x70c53a:c.instructions+=16;goto B70c53a;
case 0x70c540:c.instructions+=15;goto B70c540;
case 0x70c546:c.instructions+=14;goto B70c546;
case 0x70c54a:c.instructions+=13;goto B70c54a;
case 0x70c54e:c.instructions+=12;goto B70c54e;
case 0x70c550:c.instructions+=11;goto B70c550;
case 0x70c553:c.instructions+=10;goto B70c553;
case 0x70c556:c.instructions+=9;goto B70c556;
case 0x70c558:c.instructions+=8;goto B70c558;
case 0x70c55e:c.instructions+=7;goto B70c55e;
case 0x70c560:c.instructions+=6;goto B70c560;
case 0x70c562:c.instructions+=5;goto B70c562;
case 0x70c564:c.instructions+=4;goto B70c564;
case 0x70c567:c.instructions+=3;goto B70c567;
case 0x70c56a:c.instructions+=2;goto B70c56a;
case 0x70c56d:c.instructions+=1;goto B70c56d;
case 0x70c573:goto L70c573;
case 0x70c577:c.instructions+=2;goto B70c577;
case 0x70c579:c.instructions+=1;goto B70c579;
case 0x70c57f:goto L70c57f;
case 0x70c582:c.instructions+=12;goto B70c582;
case 0x70c585:c.instructions+=11;goto B70c585;
case 0x70c587:c.instructions+=10;goto B70c587;
case 0x70c58a:c.instructions+=9;goto B70c58a;
case 0x70c58d:c.instructions+=8;goto B70c58d;
case 0x70c590:c.instructions+=7;goto B70c590;
case 0x70c592:c.instructions+=6;goto B70c592;
case 0x70c595:c.instructions+=5;goto B70c595;
case 0x70c598:c.instructions+=4;goto B70c598;
case 0x70c59a:c.instructions+=3;goto B70c59a;
case 0x70c59d:c.instructions+=2;goto B70c59d;
case 0x70c5a0:c.instructions+=1;goto B70c5a0;
case 0x70c5a2:goto L70c5a2;
case 0x70c5a5:goto L70c5a5;
case 0x70c5a8:c.instructions+=6;goto B70c5a8;
case 0x70c5ab:c.instructions+=5;goto B70c5ab;
case 0x70c5ae:c.instructions+=4;goto B70c5ae;
case 0x70c5b2:c.instructions+=3;goto B70c5b2;
case 0x70c5b5:c.instructions+=2;goto B70c5b5;
case 0x70c5b8:c.instructions+=1;goto B70c5b8;
case 0x70c5be:goto L70c5be;
case 0x70c5c1:c.instructions+=1;goto B70c5c1;
case 0x70c5c7:goto L70c5c7;
case 0x70c5ca:c.instructions+=7;goto B70c5ca;
case 0x70c5cc:c.instructions+=6;goto B70c5cc;
case 0x70c5cf:c.instructions+=5;goto B70c5cf;
case 0x70c5d0:c.instructions+=4;goto B70c5d0;
case 0x70c5d1:c.instructions+=3;goto B70c5d1;
case 0x70c5d2:c.instructions+=2;goto B70c5d2;
case 0x70c5d3:c.instructions+=1;goto B70c5d3;
case 0x70c5d9:goto L70c5d9;
case 0x70c5dc:c.instructions+=3;goto B70c5dc;
case 0x70c5df:c.instructions+=2;goto B70c5df;
case 0x70c5e3:c.instructions+=1;goto B70c5e3;
case 0x70c5e5:goto L70c5e5;
case 0x70c5e8:c.instructions+=3;goto B70c5e8;
case 0x70c5eb:c.instructions+=2;goto B70c5eb;
case 0x70c5ef:c.instructions+=1;goto B70c5ef;
case 0x70c5f1:goto L70c5f1;
case 0x70c5f4:c.instructions+=3;goto B70c5f4;
case 0x70c5f5:c.instructions+=2;goto B70c5f5;
case 0x70c5f8:c.instructions+=1;goto B70c5f8;
case 0x70c5fa:goto L70c5fa;
case 0x70c5fd:c.instructions+=3;goto B70c5fd;
case 0x70c600:c.instructions+=2;goto B70c600;
case 0x70c604:c.instructions+=1;goto B70c604;
case 0x70c606:goto L70c606;
case 0x70c609:c.instructions+=3;goto B70c609;
case 0x70c60a:c.instructions+=2;goto B70c60a;
case 0x70c60d:c.instructions+=1;goto B70c60d;
case 0x70c60f:goto L70c60f;
case 0x70c612:c.instructions+=3;goto B70c612;
case 0x70c615:c.instructions+=2;goto B70c615;
case 0x70c618:c.instructions+=1;goto B70c618;
case 0x70c61a:goto L70c61a;
case 0x70c61e:c.instructions+=1;goto B70c61e;
case 0x70c620:goto L70c620;
case 0x70c623:c.instructions+=3;goto B70c623;
case 0x70c626:c.instructions+=2;goto B70c626;
case 0x70c629:c.instructions+=1;goto B70c629;
case 0x70c62b:goto L70c62b;
case 0x70c62e:c.instructions+=8;goto B70c62e;
case 0x70c631:c.instructions+=7;goto B70c631;
case 0x70c634:c.instructions+=6;goto B70c634;
case 0x70c636:c.instructions+=5;goto B70c636;
case 0x70c637:c.instructions+=4;goto B70c637;
case 0x70c638:c.instructions+=3;goto B70c638;
case 0x70c639:c.instructions+=2;goto B70c639;
case 0x70c63a:c.instructions+=1;goto B70c63a;
case 0x70c640:goto L70c640;
case 0x70c643:c.instructions+=8;goto B70c643;
case 0x70c646:c.instructions+=7;goto B70c646;
case 0x70c649:c.instructions+=6;goto B70c649;
case 0x70c64b:c.instructions+=5;goto B70c64b;
case 0x70c64c:c.instructions+=4;goto B70c64c;
case 0x70c64d:c.instructions+=3;goto B70c64d;
case 0x70c64e:c.instructions+=2;goto B70c64e;
case 0x70c64f:c.instructions+=1;goto B70c64f;
case 0x70c655:goto L70c655;
case 0x70c658:c.instructions+=1;goto B70c658;
case 0x70c65a:goto L70c65a;
case 0x70c65c:c.instructions+=2;goto B70c65c;
case 0x70c65f:c.instructions+=1;goto B70c65f;
case 0x70c661:goto L70c661;
case 0x70c664:c.instructions+=6;goto B70c664;
case 0x70c667:c.instructions+=5;goto B70c667;
case 0x70c668:c.instructions+=4;goto B70c668;
case 0x70c669:c.instructions+=3;goto B70c669;
case 0x70c66a:c.instructions+=2;goto B70c66a;
case 0x70c66b:c.instructions+=1;goto B70c66b;
case 0x70c671:goto L70c671;
case 0x70c673:goto L70c673;
case 0x70c676:c.instructions+=1;goto B70c676;
case 0x70c678:goto L70c678;
case 0x70c67b:c.instructions+=6;goto B70c67b;
case 0x70c67e:c.instructions+=5;goto B70c67e;
case 0x70c67f:c.instructions+=4;goto B70c67f;
case 0x70c680:c.instructions+=3;goto B70c680;
case 0x70c681:c.instructions+=2;goto B70c681;
case 0x70c682:c.instructions+=1;goto B70c682;
case 0x70c688:goto L70c688;
case 0x70c68b:c.instructions+=1;goto B70c68b;
case 0x70c68d:goto L70c68d;
case 0x70c68e:c.instructions+=3;goto B70c68e;
case 0x70c68f:c.instructions+=2;goto B70c68f;
case 0x70c690:c.instructions+=1;goto B70c690;
case 0x70c696:goto L70c696;
case 0x70c699:goto L70c699;
case 0x70c69c:c.instructions+=7;goto B70c69c;
case 0x70c6a0:c.instructions+=6;goto B70c6a0;
case 0x70c6a4:c.instructions+=5;goto B70c6a4;
case 0x70c6a7:c.instructions+=4;goto B70c6a7;
case 0x70c6aa:c.instructions+=3;goto B70c6aa;
case 0x70c6ad:c.instructions+=2;goto B70c6ad;
case 0x70c6b0:c.instructions+=1;goto B70c6b0;
case 0x70c6b6:goto L70c6b6;
case 0x70c6b9:c.instructions+=1;goto B70c6b9;
case 0x70c6bc:goto L70c6bc;
case 0x70c6be:c.instructions+=6;goto B70c6be;
case 0x70c6c1:c.instructions+=5;goto B70c6c1;
case 0x70c6c4:c.instructions+=4;goto B70c6c4;
case 0x70c6c7:c.instructions+=3;goto B70c6c7;
case 0x70c6ca:c.instructions+=2;goto B70c6ca;
case 0x70c6cd:c.instructions+=1;goto B70c6cd;
case 0x70c6d3:goto L70c6d3;
case 0x70c6d6:c.instructions+=13;goto B70c6d6;
case 0x70c6dc:c.instructions+=12;goto B70c6dc;
case 0x70c6e0:c.instructions+=11;goto B70c6e0;
case 0x70c6e2:c.instructions+=10;goto B70c6e2;
case 0x70c6e5:c.instructions+=9;goto B70c6e5;
case 0x70c6e8:c.instructions+=8;goto B70c6e8;
case 0x70c6ea:c.instructions+=7;goto B70c6ea;
case 0x70c6ed:c.instructions+=6;goto B70c6ed;
case 0x70c6f0:c.instructions+=5;goto B70c6f0;
case 0x70c6f3:c.instructions+=4;goto B70c6f3;
case 0x70c6f5:c.instructions+=3;goto B70c6f5;
case 0x70c6f7:c.instructions+=2;goto B70c6f7;
case 0x70c6fa:c.instructions+=1;goto B70c6fa;
case 0x70c700:goto L70c700;
case 0x70c704:c.instructions+=2;goto B70c704;
case 0x70c706:c.instructions+=1;goto B70c706;
case 0x70c70c:goto L70c70c;
case 0x70c70f:c.instructions+=12;goto B70c70f;
case 0x70c712:c.instructions+=11;goto B70c712;
case 0x70c714:c.instructions+=10;goto B70c714;
case 0x70c716:c.instructions+=9;goto B70c716;
case 0x70c719:c.instructions+=8;goto B70c719;
case 0x70c71c:c.instructions+=7;goto B70c71c;
case 0x70c71f:c.instructions+=6;goto B70c71f;
case 0x70c721:c.instructions+=5;goto B70c721;
case 0x70c724:c.instructions+=4;goto B70c724;
case 0x70c726:c.instructions+=3;goto B70c726;
case 0x70c729:c.instructions+=2;goto B70c729;
case 0x70c72c:c.instructions+=1;goto B70c72c;
case 0x70c72e:goto L70c72e;
case 0x70c731:c.instructions+=1;goto B70c731;
case 0x70c734:goto L70c734;
case 0x70c737:c.instructions+=5;goto B70c737;
case 0x70c73a:c.instructions+=4;goto B70c73a;
case 0x70c73e:c.instructions+=3;goto B70c73e;
case 0x70c741:c.instructions+=2;goto B70c741;
case 0x70c744:c.instructions+=1;goto B70c744;
case 0x70c74a:goto L70c74a;
case 0x70c74d:c.instructions+=1;goto B70c74d;
case 0x70c753:goto L70c753;
case 0x70c756:c.instructions+=7;goto B70c756;
case 0x70c758:c.instructions+=6;goto B70c758;
case 0x70c75b:c.instructions+=5;goto B70c75b;
case 0x70c75c:c.instructions+=4;goto B70c75c;
case 0x70c75d:c.instructions+=3;goto B70c75d;
case 0x70c75e:c.instructions+=2;goto B70c75e;
case 0x70c75f:c.instructions+=1;goto B70c75f;
case 0x70c765:goto L70c765;
case 0x70c768:c.instructions+=3;goto B70c768;
case 0x70c76b:c.instructions+=2;goto B70c76b;
case 0x70c76f:c.instructions+=1;goto B70c76f;
case 0x70c771:goto L70c771;
case 0x70c774:c.instructions+=3;goto B70c774;
case 0x70c777:c.instructions+=2;goto B70c777;
case 0x70c77b:c.instructions+=1;goto B70c77b;
case 0x70c77d:goto L70c77d;
case 0x70c780:c.instructions+=3;goto B70c780;
case 0x70c781:c.instructions+=2;goto B70c781;
case 0x70c784:c.instructions+=1;goto B70c784;
case 0x70c786:goto L70c786;
case 0x70c789:c.instructions+=3;goto B70c789;
case 0x70c78c:c.instructions+=2;goto B70c78c;
case 0x70c790:c.instructions+=1;goto B70c790;
case 0x70c792:goto L70c792;
case 0x70c795:c.instructions+=3;goto B70c795;
case 0x70c796:c.instructions+=2;goto B70c796;
case 0x70c799:c.instructions+=1;goto B70c799;
case 0x70c79b:goto L70c79b;
case 0x70c79e:c.instructions+=3;goto B70c79e;
case 0x70c7a1:c.instructions+=2;goto B70c7a1;
case 0x70c7a4:c.instructions+=1;goto B70c7a4;
case 0x70c7a6:goto L70c7a6;
case 0x70c7aa:c.instructions+=1;goto B70c7aa;
case 0x70c7ac:goto L70c7ac;
case 0x70c7af:c.instructions+=3;goto B70c7af;
case 0x70c7b2:c.instructions+=2;goto B70c7b2;
case 0x70c7b5:c.instructions+=1;goto B70c7b5;
case 0x70c7b7:goto L70c7b7;
case 0x70c7ba:c.instructions+=8;goto B70c7ba;
case 0x70c7bd:c.instructions+=7;goto B70c7bd;
case 0x70c7c0:c.instructions+=6;goto B70c7c0;
case 0x70c7c2:c.instructions+=5;goto B70c7c2;
case 0x70c7c3:c.instructions+=4;goto B70c7c3;
case 0x70c7c4:c.instructions+=3;goto B70c7c4;
case 0x70c7c5:c.instructions+=2;goto B70c7c5;
case 0x70c7c6:c.instructions+=1;goto B70c7c6;
case 0x70c7cc:goto L70c7cc;
case 0x70c7cf:c.instructions+=8;goto B70c7cf;
case 0x70c7d2:c.instructions+=7;goto B70c7d2;
case 0x70c7d5:c.instructions+=6;goto B70c7d5;
case 0x70c7d7:c.instructions+=5;goto B70c7d7;
case 0x70c7d8:c.instructions+=4;goto B70c7d8;
case 0x70c7d9:c.instructions+=3;goto B70c7d9;
case 0x70c7da:c.instructions+=2;goto B70c7da;
case 0x70c7db:c.instructions+=1;goto B70c7db;
case 0x70c7e1:goto L70c7e1;
case 0x70c7e4:c.instructions+=1;goto B70c7e4;
case 0x70c7e6:goto L70c7e6;
case 0x70c7e8:c.instructions+=2;goto B70c7e8;
case 0x70c7eb:c.instructions+=1;goto B70c7eb;
case 0x70c7ed:goto L70c7ed;
case 0x70c7f0:c.instructions+=6;goto B70c7f0;
case 0x70c7f3:c.instructions+=5;goto B70c7f3;
case 0x70c7f4:c.instructions+=4;goto B70c7f4;
case 0x70c7f5:c.instructions+=3;goto B70c7f5;
case 0x70c7f6:c.instructions+=2;goto B70c7f6;
case 0x70c7f7:c.instructions+=1;goto B70c7f7;
case 0x70c7fd:goto L70c7fd;
case 0x70c7ff:goto L70c7ff;
case 0x70c802:c.instructions+=1;goto B70c802;
case 0x70c804:goto L70c804;
case 0x70c807:c.instructions+=6;goto B70c807;
case 0x70c80a:c.instructions+=5;goto B70c80a;
case 0x70c80b:c.instructions+=4;goto B70c80b;
case 0x70c80c:c.instructions+=3;goto B70c80c;
case 0x70c80d:c.instructions+=2;goto B70c80d;
case 0x70c80e:c.instructions+=1;goto B70c80e;
case 0x70c814:goto L70c814;
case 0x70c817:c.instructions+=1;goto B70c817;
case 0x70c819:goto L70c819;
case 0x70c81a:c.instructions+=3;goto B70c81a;
case 0x70c81b:c.instructions+=2;goto B70c81b;
case 0x70c81c:c.instructions+=1;goto B70c81c;
case 0x70c822:goto L70c822;
case 0x70c825:goto L70c825;
case 0x70c828:c.instructions+=7;goto B70c828;
case 0x70c82c:c.instructions+=6;goto B70c82c;
case 0x70c830:c.instructions+=5;goto B70c830;
case 0x70c833:c.instructions+=4;goto B70c833;
case 0x70c836:c.instructions+=3;goto B70c836;
case 0x70c839:c.instructions+=2;goto B70c839;
case 0x70c83c:c.instructions+=1;goto B70c83c;
case 0x70c842:goto L70c842;
case 0x70c845:c.instructions+=1;goto B70c845;
case 0x70c848:goto L70c848;
case 0x70c84a:c.instructions+=6;goto B70c84a;
case 0x70c84d:c.instructions+=5;goto B70c84d;
case 0x70c850:c.instructions+=4;goto B70c850;
case 0x70c853:c.instructions+=3;goto B70c853;
case 0x70c856:c.instructions+=2;goto B70c856;
case 0x70c859:c.instructions+=1;goto B70c859;
case 0x70c85f:goto L70c85f;
case 0x70c862:c.instructions+=11;goto B70c862;
case 0x70c865:c.instructions+=10;goto B70c865;
case 0x70c867:c.instructions+=9;goto B70c867;
case 0x70c86a:c.instructions+=8;goto B70c86a;
case 0x70c86d:c.instructions+=7;goto B70c86d;
case 0x70c86f:c.instructions+=6;goto B70c86f;
case 0x70c871:c.instructions+=5;goto B70c871;
case 0x70c874:c.instructions+=4;goto B70c874;
case 0x70c876:c.instructions+=3;goto B70c876;
case 0x70c879:c.instructions+=2;goto B70c879;
case 0x70c87c:c.instructions+=1;goto B70c87c;
case 0x70c882:goto L70c882;
case 0x70c885:goto L70c885;
case 0x70c887:c.instructions+=1;goto B70c887;
case 0x70c88d:goto L70c88d;
case 0x70c890:c.instructions+=5;goto B70c890;
case 0x70c893:c.instructions+=4;goto B70c893;
case 0x70c895:c.instructions+=3;goto B70c895;
case 0x70c898:c.instructions+=2;goto B70c898;
case 0x70c89b:c.instructions+=1;goto B70c89b;
case 0x70c89d:goto L70c89d;
case 0x70c8a0:goto L70c8a0;
case 0x70c8a4:c.instructions+=4;goto B70c8a4;
case 0x70c8a7:c.instructions+=3;goto B70c8a7;
case 0x70c8aa:c.instructions+=2;goto B70c8aa;
case 0x70c8ad:c.instructions+=1;goto B70c8ad;
case 0x70c8af:goto L70c8af;
case 0x70c8b2:c.instructions+=1;goto B70c8b2;
case 0x70c8b4:goto L70c8b4;
case 0x70c8b7:c.instructions+=7;goto B70c8b7;
case 0x70c8b9:c.instructions+=6;goto B70c8b9;
case 0x70c8bc:c.instructions+=5;goto B70c8bc;
case 0x70c8bd:c.instructions+=4;goto B70c8bd;
case 0x70c8be:c.instructions+=3;goto B70c8be;
case 0x70c8bf:c.instructions+=2;goto B70c8bf;
case 0x70c8c0:c.instructions+=1;goto B70c8c0;
case 0x70c8c6:goto L70c8c6;
case 0x70c8c9:c.instructions+=8;goto B70c8c9;
case 0x70c8cc:c.instructions+=7;goto B70c8cc;
case 0x70c8cf:c.instructions+=6;goto B70c8cf;
case 0x70c8d1:c.instructions+=5;goto B70c8d1;
case 0x70c8d2:c.instructions+=4;goto B70c8d2;
case 0x70c8d3:c.instructions+=3;goto B70c8d3;
case 0x70c8d4:c.instructions+=2;goto B70c8d4;
case 0x70c8d5:c.instructions+=1;goto B70c8d5;
case 0x70c8db:goto L70c8db;
case 0x70c8de:c.instructions+=8;goto B70c8de;
case 0x70c8e1:c.instructions+=7;goto B70c8e1;
case 0x70c8e4:c.instructions+=6;goto B70c8e4;
case 0x70c8e6:c.instructions+=5;goto B70c8e6;
case 0x70c8e7:c.instructions+=4;goto B70c8e7;
case 0x70c8e8:c.instructions+=3;goto B70c8e8;
case 0x70c8e9:c.instructions+=2;goto B70c8e9;
case 0x70c8ea:c.instructions+=1;goto B70c8ea;
case 0x70c8f0:goto L70c8f0;
case 0x70c8f3:c.instructions+=1;goto B70c8f3;
case 0x70c8f5:goto L70c8f5;
case 0x70c8f7:c.instructions+=2;goto B70c8f7;
case 0x70c8fa:c.instructions+=1;goto B70c8fa;
case 0x70c8fc:goto L70c8fc;
case 0x70c8ff:c.instructions+=6;goto B70c8ff;
case 0x70c902:c.instructions+=5;goto B70c902;
case 0x70c903:c.instructions+=4;goto B70c903;
case 0x70c904:c.instructions+=3;goto B70c904;
case 0x70c905:c.instructions+=2;goto B70c905;
case 0x70c906:c.instructions+=1;goto B70c906;
case 0x70c90c:goto L70c90c;
case 0x70c90f:c.instructions+=1;goto B70c90f;
case 0x70c911:goto L70c911;
case 0x70c914:c.instructions+=1;goto B70c914;
case 0x70c916:goto L70c916;
case 0x70c919:c.instructions+=6;goto B70c919;
case 0x70c91c:c.instructions+=5;goto B70c91c;
case 0x70c91d:c.instructions+=4;goto B70c91d;
case 0x70c91e:c.instructions+=3;goto B70c91e;
case 0x70c91f:c.instructions+=2;goto B70c91f;
case 0x70c920:c.instructions+=1;goto B70c920;
case 0x70c926:goto L70c926;
case 0x70c928:goto L70c928;
case 0x70c929:c.instructions+=3;goto B70c929;
case 0x70c92a:c.instructions+=2;goto B70c92a;
case 0x70c92b:c.instructions+=1;goto B70c92b;
case 0x70c931:goto L70c931;
case 0x70c934:goto L70c934;
case 0x70c937:c.instructions+=3;goto B70c937;
case 0x70c93a:c.instructions+=2;goto B70c93a;
case 0x70c93d:c.instructions+=1;goto B70c93d;
case 0x70c943:goto L70c943;
case 0x70c946:c.instructions+=1;goto B70c946;
case 0x70c949:goto L70c949;
case 0x70c94b:c.instructions+=5;goto B70c94b;
case 0x70c94e:c.instructions+=4;goto B70c94e;
case 0x70c951:c.instructions+=3;goto B70c951;
case 0x70c954:c.instructions+=2;goto B70c954;
case 0x70c957:c.instructions+=1;goto B70c957;
case 0x70c95d:goto L70c95d;
case 0x70c963:c.instructions+=8;goto B70c963;
case 0x70c966:c.instructions+=7;goto B70c966;
case 0x70c968:c.instructions+=6;goto B70c968;
case 0x70c96b:c.instructions+=5;goto B70c96b;
case 0x70c96e:c.instructions+=4;goto B70c96e;
case 0x70c970:c.instructions+=3;goto B70c970;
case 0x70c972:c.instructions+=2;goto B70c972;
case 0x70c975:c.instructions+=1;goto B70c975;
case 0x70c97b:goto L70c97b;
case 0x70c97e:goto L70c97e;
case 0x70c980:c.instructions+=1;goto B70c980;
case 0x70c986:goto L70c986;
case 0x70c989:c.instructions+=5;goto B70c989;
case 0x70c98c:c.instructions+=4;goto B70c98c;
case 0x70c98e:c.instructions+=3;goto B70c98e;
case 0x70c991:c.instructions+=2;goto B70c991;
case 0x70c994:c.instructions+=1;goto B70c994;
case 0x70c996:goto L70c996;
case 0x70c999:goto L70c999;
case 0x70c99d:c.instructions+=4;goto B70c99d;
case 0x70c9a0:c.instructions+=3;goto B70c9a0;
case 0x70c9a3:c.instructions+=2;goto B70c9a3;
case 0x70c9a6:c.instructions+=1;goto B70c9a6;
case 0x70c9a8:goto L70c9a8;
case 0x70c9ab:c.instructions+=1;goto B70c9ab;
case 0x70c9ad:goto L70c9ad;
case 0x70c9b0:c.instructions+=7;goto B70c9b0;
case 0x70c9b2:c.instructions+=6;goto B70c9b2;
case 0x70c9b5:c.instructions+=5;goto B70c9b5;
case 0x70c9b6:c.instructions+=4;goto B70c9b6;
case 0x70c9b7:c.instructions+=3;goto B70c9b7;
case 0x70c9b8:c.instructions+=2;goto B70c9b8;
case 0x70c9b9:c.instructions+=1;goto B70c9b9;
case 0x70c9bf:goto L70c9bf;
case 0x70c9c2:c.instructions+=8;goto B70c9c2;
case 0x70c9c5:c.instructions+=7;goto B70c9c5;
case 0x70c9c8:c.instructions+=6;goto B70c9c8;
case 0x70c9ca:c.instructions+=5;goto B70c9ca;
case 0x70c9cb:c.instructions+=4;goto B70c9cb;
case 0x70c9cc:c.instructions+=3;goto B70c9cc;
case 0x70c9cd:c.instructions+=2;goto B70c9cd;
case 0x70c9ce:c.instructions+=1;goto B70c9ce;
case 0x70c9d4:goto L70c9d4;
case 0x70c9d7:c.instructions+=8;goto B70c9d7;
case 0x70c9da:c.instructions+=7;goto B70c9da;
case 0x70c9dd:c.instructions+=6;goto B70c9dd;
case 0x70c9df:c.instructions+=5;goto B70c9df;
case 0x70c9e0:c.instructions+=4;goto B70c9e0;
case 0x70c9e1:c.instructions+=3;goto B70c9e1;
case 0x70c9e2:c.instructions+=2;goto B70c9e2;
case 0x70c9e3:c.instructions+=1;goto B70c9e3;
case 0x70c9e9:goto L70c9e9;
case 0x70c9ec:c.instructions+=1;goto B70c9ec;
case 0x70c9ee:goto L70c9ee;
case 0x70c9f0:c.instructions+=2;goto B70c9f0;
case 0x70c9f3:c.instructions+=1;goto B70c9f3;
case 0x70c9f5:goto L70c9f5;
case 0x70c9f8:c.instructions+=6;goto B70c9f8;
case 0x70c9fb:c.instructions+=5;goto B70c9fb;
case 0x70c9fc:c.instructions+=4;goto B70c9fc;
case 0x70c9fd:c.instructions+=3;goto B70c9fd;
case 0x70c9fe:c.instructions+=2;goto B70c9fe;
case 0x70c9ff:c.instructions+=1;goto B70c9ff;
case 0x70ca05:goto L70ca05;
case 0x70ca08:c.instructions+=1;goto B70ca08;
case 0x70ca0a:goto L70ca0a;
case 0x70ca0d:c.instructions+=1;goto B70ca0d;
case 0x70ca0f:goto L70ca0f;
case 0x70ca12:c.instructions+=6;goto B70ca12;
case 0x70ca15:c.instructions+=5;goto B70ca15;
case 0x70ca16:c.instructions+=4;goto B70ca16;
case 0x70ca17:c.instructions+=3;goto B70ca17;
case 0x70ca18:c.instructions+=2;goto B70ca18;
case 0x70ca19:c.instructions+=1;goto B70ca19;
case 0x70ca1f:goto L70ca1f;
case 0x70ca21:goto L70ca21;
case 0x70ca22:c.instructions+=3;goto B70ca22;
case 0x70ca23:c.instructions+=2;goto B70ca23;
case 0x70ca24:c.instructions+=1;goto B70ca24;
case 0x70ca2a:goto L70ca2a;
case 0x70ca2d:goto L70ca2d;
case 0x70ca30:c.instructions+=3;goto B70ca30;
case 0x70ca33:c.instructions+=2;goto B70ca33;
case 0x70ca36:c.instructions+=1;goto B70ca36;
case 0x70ca3c:goto L70ca3c;
case 0x70ca3f:goto L70ca3f;
case 0x70ca41:c.instructions+=5;goto B70ca41;
case 0x70ca44:c.instructions+=4;goto B70ca44;
case 0x70ca47:c.instructions+=3;goto B70ca47;
case 0x70ca4a:c.instructions+=2;goto B70ca4a;
case 0x70ca4d:c.instructions+=1;goto B70ca4d;
case 0x70ca53:goto L70ca53;
case 0x70ca54:c.instructions+=4;goto B70ca54;
case 0x70ca55:c.instructions+=3;goto B70ca55;
case 0x70ca56:c.instructions+=2;goto B70ca56;
case 0x70ca57:c.instructions+=1;goto B70ca57;
case 0x70ca58:goto L70ca58;
case 0x70ca59:c.instructions+=8;goto B70ca59;
case 0x70ca5b:c.instructions+=7;goto B70ca5b;
case 0x70ca5c:c.instructions+=6;goto B70ca5c;
case 0x70ca5d:c.instructions+=5;goto B70ca5d;
case 0x70ca60:c.instructions+=4;goto B70ca60;
case 0x70ca61:c.instructions+=3;goto B70ca61;
case 0x70ca62:c.instructions+=2;goto B70ca62;
case 0x70ca69:c.instructions+=1;goto B70ca69;
case 0x70ca6a:goto L70ca6a;
case 0x70ca6e:c.instructions+=4;goto B70ca6e;
case 0x70ca72:c.instructions+=3;goto B70ca72;
case 0x70ca74:c.instructions+=2;goto B70ca74;
case 0x70ca76:c.instructions+=1;goto B70ca76;
case 0x70ca78:goto L70ca78;
case 0x70ca7b:c.instructions+=30;goto B70ca7b;
case 0x70ca7f:c.instructions+=29;goto B70ca7f;
case 0x70ca81:c.instructions+=28;goto B70ca81;
case 0x70ca85:c.instructions+=27;goto B70ca85;
case 0x70ca87:c.instructions+=26;goto B70ca87;
case 0x70ca89:c.instructions+=25;goto B70ca89;
case 0x70ca8b:c.instructions+=24;goto B70ca8b;
case 0x70ca8d:c.instructions+=23;goto B70ca8d;
case 0x70ca90:c.instructions+=22;goto B70ca90;
case 0x70ca93:c.instructions+=21;goto B70ca93;
case 0x70ca96:c.instructions+=20;goto B70ca96;
case 0x70ca99:c.instructions+=19;goto B70ca99;
case 0x70ca9c:c.instructions+=18;goto B70ca9c;
case 0x70caa0:c.instructions+=17;goto B70caa0;
case 0x70caa7:c.instructions+=16;goto B70caa7;
case 0x70caa9:c.instructions+=15;goto B70caa9;
case 0x70caab:c.instructions+=14;goto B70caab;
case 0x70caad:c.instructions+=13;goto B70caad;
case 0x70caae:c.instructions+=12;goto B70caae;
case 0x70cab0:c.instructions+=11;goto B70cab0;
case 0x70cab3:c.instructions+=10;goto B70cab3;
case 0x70cab6:c.instructions+=9;goto B70cab6;
case 0x70cabc:c.instructions+=8;goto B70cabc;
case 0x70cabf:c.instructions+=7;goto B70cabf;
case 0x70cac2:c.instructions+=6;goto B70cac2;
case 0x70cac9:c.instructions+=5;goto B70cac9;
case 0x70cacb:c.instructions+=4;goto B70cacb;
case 0x70cacd:c.instructions+=3;goto B70cacd;
case 0x70cad3:c.instructions+=2;goto B70cad3;
case 0x70cad6:c.instructions+=1;goto B70cad6;
case 0x70cad9:goto L70cad9;
case 0x70cadc:c.instructions+=1;goto B70cadc;
case 0x70cade:goto L70cade;
case 0x70cadf:c.instructions+=4;goto B70cadf;
case 0x70cae0:c.instructions+=3;goto B70cae0;
case 0x70cae1:c.instructions+=2;goto B70cae1;
case 0x70cae2:c.instructions+=1;goto B70cae2;
case 0x70cae3:goto L70cae3;
case 0x70cae4:c.instructions+=11;goto B70cae4;
case 0x70cae6:c.instructions+=10;goto B70cae6;
case 0x70cae9:c.instructions+=9;goto B70cae9;
case 0x70caec:c.instructions+=8;goto B70caec;
case 0x70caed:c.instructions+=7;goto B70caed;
case 0x70caf0:c.instructions+=6;goto B70caf0;
case 0x70caf1:c.instructions+=5;goto B70caf1;
case 0x70caf2:c.instructions+=4;goto B70caf2;
case 0x70caf5:c.instructions+=3;goto B70caf5;
case 0x70caf7:c.instructions+=2;goto B70caf7;
case 0x70caf9:c.instructions+=1;goto B70caf9;
case 0x70cb00:goto L70cb00;
case 0x70cb03:c.instructions+=10;goto B70cb03;
case 0x70cb06:c.instructions+=9;goto B70cb06;
case 0x70cb09:c.instructions+=8;goto B70cb09;
case 0x70cb0b:c.instructions+=7;goto B70cb0b;
case 0x70cb0e:c.instructions+=6;goto B70cb0e;
case 0x70cb11:c.instructions+=5;goto B70cb11;
case 0x70cb14:c.instructions+=4;goto B70cb14;
case 0x70cb16:c.instructions+=3;goto B70cb16;
case 0x70cb18:c.instructions+=2;goto B70cb18;
case 0x70cb1a:c.instructions+=1;goto B70cb1a;
case 0x70cb1c:goto L70cb1c;
case 0x70cb1f:c.instructions+=3;goto B70cb1f;
case 0x70cb21:c.instructions+=2;goto B70cb21;
case 0x70cb23:c.instructions+=1;goto B70cb23;
case 0x70cb25:goto L70cb25;
case 0x70cb28:c.instructions+=1;goto B70cb28;
case 0x70cb2a:goto L70cb2a;
case 0x70cb2d:c.instructions+=1;goto B70cb2d;
case 0x70cb2f:goto L70cb2f;
case 0x70cb32:c.instructions+=5;goto B70cb32;
case 0x70cb36:c.instructions+=4;goto B70cb36;
case 0x70cb39:c.instructions+=3;goto B70cb39;
case 0x70cb3b:c.instructions+=2;goto B70cb3b;
case 0x70cb3d:c.instructions+=1;goto B70cb3d;
case 0x70cb3f:goto L70cb3f;
case 0x70cb41:c.instructions+=1;goto B70cb41;
case 0x70cb43:goto L70cb43;
case 0x70cb46:c.instructions+=1;goto B70cb46;
case 0x70cb48:goto L70cb48;
case 0x70cb4b:c.instructions+=1;goto B70cb4b;
case 0x70cb4d:goto L70cb4d;
case 0x70cb51:c.instructions+=2;goto B70cb51;
case 0x70cb54:c.instructions+=1;goto B70cb54;
case 0x70cb56:goto L70cb56;
case 0x70cb59:c.instructions+=4;goto B70cb59;
case 0x70cb5d:c.instructions+=3;goto B70cb5d;
case 0x70cb5f:c.instructions+=2;goto B70cb5f;
case 0x70cb62:c.instructions+=1;goto B70cb62;
case 0x70cb69:goto L70cb69;
case 0x70cb6c:c.instructions+=13;goto B70cb6c;
case 0x70cb6f:c.instructions+=12;goto B70cb6f;
case 0x70cb72:c.instructions+=11;goto B70cb72;
case 0x70cb75:c.instructions+=10;goto B70cb75;
case 0x70cb78:c.instructions+=9;goto B70cb78;
case 0x70cb7b:c.instructions+=8;goto B70cb7b;
case 0x70cb82:c.instructions+=7;goto B70cb82;
case 0x70cb84:c.instructions+=6;goto B70cb84;
case 0x70cb87:c.instructions+=5;goto B70cb87;
case 0x70cb89:c.instructions+=4;goto B70cb89;
case 0x70cb8d:c.instructions+=3;goto B70cb8d;
case 0x70cb93:c.instructions+=2;goto B70cb93;
case 0x70cb95:c.instructions+=1;goto B70cb95;
case 0x70cb97:goto L70cb97;
case 0x70cb9a:c.instructions+=7;goto B70cb9a;
case 0x70cb9c:c.instructions+=6;goto B70cb9c;
case 0x70cba3:c.instructions+=5;goto B70cba3;
case 0x70cba5:c.instructions+=4;goto B70cba5;
case 0x70cba9:c.instructions+=3;goto B70cba9;
case 0x70cbab:c.instructions+=2;goto B70cbab;
case 0x70cbb1:c.instructions+=1;goto B70cbb1;
case 0x70cbb4:goto L70cbb4;
case 0x70cbb5:c.instructions+=3;goto B70cbb5;
case 0x70cbb6:c.instructions+=2;goto B70cbb6;
case 0x70cbb9:c.instructions+=1;goto B70cbb9;
case 0x70cbbf:goto L70cbbf;
case 0x70cbc0:c.instructions+=4;goto B70cbc0;
case 0x70cbc1:c.instructions+=3;goto B70cbc1;
case 0x70cbc2:c.instructions+=2;goto B70cbc2;
case 0x70cbc3:c.instructions+=1;goto B70cbc3;
case 0x70cbc4:goto L70cbc4;
case 0x70cbc5:c.instructions+=8;goto B70cbc5;
case 0x70cbc7:c.instructions+=7;goto B70cbc7;
case 0x70cbc8:c.instructions+=6;goto B70cbc8;
case 0x70cbc9:c.instructions+=5;goto B70cbc9;
case 0x70cbcc:c.instructions+=4;goto B70cbcc;
case 0x70cbcd:c.instructions+=3;goto B70cbcd;
case 0x70cbce:c.instructions+=2;goto B70cbce;
case 0x70cbd5:c.instructions+=1;goto B70cbd5;
case 0x70cbd6:goto L70cbd6;
case 0x70cbd9:c.instructions+=9;goto B70cbd9;
case 0x70cbdd:c.instructions+=8;goto B70cbdd;
case 0x70cbe1:c.instructions+=7;goto B70cbe1;
case 0x70cbe3:c.instructions+=6;goto B70cbe3;
case 0x70cbe5:c.instructions+=5;goto B70cbe5;
case 0x70cbe7:c.instructions+=4;goto B70cbe7;
case 0x70cbe9:c.instructions+=3;goto B70cbe9;
case 0x70cbeb:c.instructions+=2;goto B70cbeb;
case 0x70cbee:c.instructions+=1;goto B70cbee;
case 0x70cbf0:goto L70cbf0;
case 0x70cbf2:c.instructions+=1;goto B70cbf2;
case 0x70cbf4:goto L70cbf4;
case 0x70cbf7:c.instructions+=1;goto B70cbf7;
case 0x70cbf9:goto L70cbf9;
case 0x70cbfd:c.instructions+=4;goto B70cbfd;
case 0x70cbff:c.instructions+=3;goto B70cbff;
case 0x70cc01:c.instructions+=2;goto B70cc01;
case 0x70cc03:c.instructions+=1;goto B70cc03;
case 0x70cc05:goto L70cc05;
case 0x70cc07:c.instructions+=1;goto B70cc07;
case 0x70cc09:goto L70cc09;
case 0x70cc0c:c.instructions+=1;goto B70cc0c;
case 0x70cc0e:goto L70cc0e;
case 0x70cc12:c.instructions+=1;goto B70cc12;
case 0x70cc14:goto L70cc14;
case 0x70cc18:c.instructions+=4;goto B70cc18;
case 0x70cc1b:c.instructions+=3;goto B70cc1b;
case 0x70cc1d:c.instructions+=2;goto B70cc1d;
case 0x70cc24:c.instructions+=1;goto B70cc24;
case 0x70cc26:goto L70cc26;
case 0x70cc29:c.instructions+=10;goto B70cc29;
case 0x70cc2c:c.instructions+=9;goto B70cc2c;
case 0x70cc2f:c.instructions+=8;goto B70cc2f;
case 0x70cc32:c.instructions+=7;goto B70cc32;
case 0x70cc39:c.instructions+=6;goto B70cc39;
case 0x70cc3b:c.instructions+=5;goto B70cc3b;
case 0x70cc3f:c.instructions+=4;goto B70cc3f;
case 0x70cc42:c.instructions+=3;goto B70cc42;
case 0x70cc48:c.instructions+=2;goto B70cc48;
case 0x70cc4b:c.instructions+=1;goto B70cc4b;
case 0x70cc4d:goto L70cc4d;
case 0x70cc50:c.instructions+=6;goto B70cc50;
case 0x70cc52:c.instructions+=5;goto B70cc52;
case 0x70cc59:c.instructions+=4;goto B70cc59;
case 0x70cc5b:c.instructions+=3;goto B70cc5b;
case 0x70cc5d:c.instructions+=2;goto B70cc5d;
case 0x70cc63:c.instructions+=1;goto B70cc63;
case 0x70cc66:goto L70cc66;
case 0x70cc69:c.instructions+=2;goto B70cc69;
case 0x70cc6c:c.instructions+=1;goto B70cc6c;
case 0x70cc72:goto L70cc72;
case 0x70cc73:c.instructions+=4;goto B70cc73;
case 0x70cc74:c.instructions+=3;goto B70cc74;
case 0x70cc75:c.instructions+=2;goto B70cc75;
case 0x70cc76:c.instructions+=1;goto B70cc76;
case 0x70cc77:goto L70cc77;
case 0x70cc78:c.instructions+=11;goto B70cc78;
case 0x70cc7a:c.instructions+=10;goto B70cc7a;
case 0x70cc7d:c.instructions+=9;goto B70cc7d;
case 0x70cc80:c.instructions+=8;goto B70cc80;
case 0x70cc81:c.instructions+=7;goto B70cc81;
case 0x70cc84:c.instructions+=6;goto B70cc84;
case 0x70cc85:c.instructions+=5;goto B70cc85;
case 0x70cc86:c.instructions+=4;goto B70cc86;
case 0x70cc89:c.instructions+=3;goto B70cc89;
case 0x70cc8b:c.instructions+=2;goto B70cc8b;
case 0x70cc8d:c.instructions+=1;goto B70cc8d;
case 0x70cc94:goto L70cc94;
case 0x70cc97:c.instructions+=10;goto B70cc97;
case 0x70cc9a:c.instructions+=9;goto B70cc9a;
case 0x70cc9d:c.instructions+=8;goto B70cc9d;
case 0x70cc9f:c.instructions+=7;goto B70cc9f;
case 0x70cca2:c.instructions+=6;goto B70cca2;
case 0x70cca5:c.instructions+=5;goto B70cca5;
case 0x70cca8:c.instructions+=4;goto B70cca8;
case 0x70ccaa:c.instructions+=3;goto B70ccaa;
case 0x70ccac:c.instructions+=2;goto B70ccac;
case 0x70ccae:c.instructions+=1;goto B70ccae;
case 0x70ccb0:goto L70ccb0;
case 0x70ccb3:c.instructions+=3;goto B70ccb3;
case 0x70ccb5:c.instructions+=2;goto B70ccb5;
case 0x70ccb7:c.instructions+=1;goto B70ccb7;
case 0x70ccb9:goto L70ccb9;
case 0x70ccbc:c.instructions+=1;goto B70ccbc;
case 0x70ccbe:goto L70ccbe;
case 0x70ccc1:c.instructions+=1;goto B70ccc1;
case 0x70ccc3:goto L70ccc3;
case 0x70ccc6:c.instructions+=5;goto B70ccc6;
case 0x70ccca:c.instructions+=4;goto B70ccca;
case 0x70cccd:c.instructions+=3;goto B70cccd;
case 0x70cccf:c.instructions+=2;goto B70cccf;
case 0x70ccd1:c.instructions+=1;goto B70ccd1;
case 0x70ccd3:goto L70ccd3;
case 0x70ccd5:c.instructions+=1;goto B70ccd5;
case 0x70ccd7:goto L70ccd7;
case 0x70ccda:c.instructions+=1;goto B70ccda;
case 0x70ccdc:goto L70ccdc;
case 0x70ccdf:c.instructions+=1;goto B70ccdf;
case 0x70cce1:goto L70cce1;
case 0x70cce5:c.instructions+=2;goto B70cce5;
case 0x70cce8:c.instructions+=1;goto B70cce8;
case 0x70ccea:goto L70ccea;
case 0x70cced:c.instructions+=4;goto B70cced;
case 0x70ccf1:c.instructions+=3;goto B70ccf1;
case 0x70ccf3:c.instructions+=2;goto B70ccf3;
case 0x70ccf6:c.instructions+=1;goto B70ccf6;
case 0x70ccfd:goto L70ccfd;
case 0x70cd00:c.instructions+=13;goto B70cd00;
case 0x70cd03:c.instructions+=12;goto B70cd03;
case 0x70cd06:c.instructions+=11;goto B70cd06;
case 0x70cd09:c.instructions+=10;goto B70cd09;
case 0x70cd0c:c.instructions+=9;goto B70cd0c;
case 0x70cd0f:c.instructions+=8;goto B70cd0f;
case 0x70cd16:c.instructions+=7;goto B70cd16;
case 0x70cd18:c.instructions+=6;goto B70cd18;
case 0x70cd1b:c.instructions+=5;goto B70cd1b;
case 0x70cd1d:c.instructions+=4;goto B70cd1d;
case 0x70cd21:c.instructions+=3;goto B70cd21;
case 0x70cd27:c.instructions+=2;goto B70cd27;
case 0x70cd29:c.instructions+=1;goto B70cd29;
case 0x70cd2b:goto L70cd2b;
case 0x70cd2e:c.instructions+=7;goto B70cd2e;
case 0x70cd30:c.instructions+=6;goto B70cd30;
case 0x70cd37:c.instructions+=5;goto B70cd37;
case 0x70cd39:c.instructions+=4;goto B70cd39;
case 0x70cd3d:c.instructions+=3;goto B70cd3d;
case 0x70cd3f:c.instructions+=2;goto B70cd3f;
case 0x70cd45:c.instructions+=1;goto B70cd45;
case 0x70cd48:goto L70cd48;
case 0x70cd49:c.instructions+=3;goto B70cd49;
case 0x70cd4a:c.instructions+=2;goto B70cd4a;
case 0x70cd4d:c.instructions+=1;goto B70cd4d;
case 0x70cd53:goto L70cd53;
case 0x70cd54:c.instructions+=4;goto B70cd54;
case 0x70cd55:c.instructions+=3;goto B70cd55;
case 0x70cd56:c.instructions+=2;goto B70cd56;
case 0x70cd57:c.instructions+=1;goto B70cd57;
case 0x70cd58:goto L70cd58;
case 0x70cd59:c.instructions+=16;goto B70cd59;
case 0x70cd5b:c.instructions+=15;goto B70cd5b;
case 0x70cd5e:c.instructions+=14;goto B70cd5e;
case 0x70cd5f:c.instructions+=13;goto B70cd5f;
case 0x70cd62:c.instructions+=12;goto B70cd62;
case 0x70cd68:c.instructions+=11;goto B70cd68;
case 0x70cd6b:c.instructions+=10;goto B70cd6b;
case 0x70cd71:c.instructions+=9;goto B70cd71;
case 0x70cd72:c.instructions+=8;goto B70cd72;
case 0x70cd74:c.instructions+=7;goto B70cd74;
case 0x70cd77:c.instructions+=6;goto B70cd77;
case 0x70cd7a:c.instructions+=5;goto B70cd7a;
case 0x70cd7d:c.instructions+=4;goto B70cd7d;
case 0x70cd7e:c.instructions+=3;goto B70cd7e;
case 0x70cd81:c.instructions+=2;goto B70cd81;
case 0x70cd84:c.instructions+=1;goto B70cd84;
case 0x70cd86:goto L70cd86;
case 0x70cd8c:c.instructions+=2;goto B70cd8c;
case 0x70cd8f:c.instructions+=1;goto B70cd8f;
case 0x70cd91:goto L70cd91;
case 0x70cd98:goto L70cd98;
case 0x70cd99:c.instructions+=2;goto B70cd99;
case 0x70cd9a:c.instructions+=1;goto B70cd9a;
case 0x70cda0:goto L70cda0;
case 0x70cda1:c.instructions+=3;goto B70cda1;
case 0x70cda2:c.instructions+=2;goto B70cda2;
case 0x70cda5:c.instructions+=1;goto B70cda5;
case 0x70cda8:goto L70cda8;
case 0x70cdab:c.instructions+=2;goto B70cdab;
case 0x70cdae:c.instructions+=1;goto B70cdae;
case 0x70cdb0:goto L70cdb0;
case 0x70cdb1:c.instructions+=1;goto B70cdb1;
case 0x70cdb3:goto L70cdb3;
case 0x70cdb4:c.instructions+=1;goto B70cdb4;
case 0x70cdb6:goto L70cdb6;
case 0x70cdbc:c.instructions+=9;goto B70cdbc;
case 0x70cdbe:c.instructions+=8;goto B70cdbe;
case 0x70cdc1:c.instructions+=7;goto B70cdc1;
case 0x70cdc7:c.instructions+=6;goto B70cdc7;
case 0x70cdc9:c.instructions+=5;goto B70cdc9;
case 0x70cdcc:c.instructions+=4;goto B70cdcc;
case 0x70cdd2:c.instructions+=3;goto B70cdd2;
case 0x70cdd5:c.instructions+=2;goto B70cdd5;
case 0x70cddb:c.instructions+=1;goto B70cddb;
case 0x70cddd:goto L70cddd;
case 0x70cde3:c.instructions+=9;goto B70cde3;
case 0x70cde5:c.instructions+=8;goto B70cde5;
case 0x70cde8:c.instructions+=7;goto B70cde8;
case 0x70cdee:c.instructions+=6;goto B70cdee;
case 0x70cdf0:c.instructions+=5;goto B70cdf0;
case 0x70cdf3:c.instructions+=4;goto B70cdf3;
case 0x70cdf9:c.instructions+=3;goto B70cdf9;
case 0x70cdfc:c.instructions+=2;goto B70cdfc;
case 0x70cdff:c.instructions+=1;goto B70cdff;
case 0x70ce01:goto L70ce01;
case 0x70ce07:c.instructions+=6;goto B70ce07;
case 0x70ce0a:c.instructions+=5;goto B70ce0a;
case 0x70ce10:c.instructions+=4;goto B70ce10;
case 0x70ce13:c.instructions+=3;goto B70ce13;
case 0x70ce19:c.instructions+=2;goto B70ce19;
case 0x70ce1c:c.instructions+=1;goto B70ce1c;
case 0x70ce1f:goto L70ce1f;
case 0x70ce22:goto L70ce22;
case 0x70ce25:c.instructions+=9;goto B70ce25;
case 0x70ce28:c.instructions+=8;goto B70ce28;
case 0x70ce2b:c.instructions+=7;goto B70ce2b;
case 0x70ce2e:c.instructions+=6;goto B70ce2e;
case 0x70ce31:c.instructions+=5;goto B70ce31;
case 0x70ce33:c.instructions+=4;goto B70ce33;
case 0x70ce35:c.instructions+=3;goto B70ce35;
case 0x70ce37:c.instructions+=2;goto B70ce37;
case 0x70ce3a:c.instructions+=1;goto B70ce3a;
case 0x70ce3c:goto L70ce3c;
case 0x70ce3e:goto L70ce3e;
case 0x70ce40:c.instructions+=1;goto B70ce40;
case 0x70ce43:goto L70ce43;
case 0x70ce45:goto L70ce45;
case 0x70ce48:c.instructions+=2;goto B70ce48;
case 0x70ce4b:c.instructions+=1;goto B70ce4b;
case 0x70ce4d:goto L70ce4d;
case 0x70ce50:c.instructions+=1;goto B70ce50;
case 0x70ce53:goto L70ce53;
case 0x70ce56:c.instructions+=4;goto B70ce56;
case 0x70ce59:c.instructions+=3;goto B70ce59;
case 0x70ce5a:c.instructions+=2;goto B70ce5a;
case 0x70ce5b:c.instructions+=1;goto B70ce5b;
case 0x70ce61:goto L70ce61;
case 0x70ce64:c.instructions+=3;goto B70ce64;
case 0x70ce67:c.instructions+=2;goto B70ce67;
case 0x70ce68:c.instructions+=1;goto B70ce68;
case 0x70ce6a:goto L70ce6a;
case 0x70ce6d:c.instructions+=5;goto B70ce6d;
case 0x70ce70:c.instructions+=4;goto B70ce70;
case 0x70ce73:c.instructions+=3;goto B70ce73;
case 0x70ce76:c.instructions+=2;goto B70ce76;
case 0x70ce79:c.instructions+=1;goto B70ce79;
case 0x70ce7f:goto L70ce7f;
case 0x70ce82:c.instructions+=2;goto B70ce82;
case 0x70ce83:c.instructions+=1;goto B70ce83;
case 0x70ce86:goto L70ce86;
case 0x70ce89:c.instructions+=10;goto B70ce89;
case 0x70ce8c:c.instructions+=9;goto B70ce8c;
case 0x70ce8f:c.instructions+=8;goto B70ce8f;
case 0x70ce91:c.instructions+=7;goto B70ce91;
case 0x70ce94:c.instructions+=6;goto B70ce94;
case 0x70ce97:c.instructions+=5;goto B70ce97;
case 0x70ce99:c.instructions+=4;goto B70ce99;
case 0x70ce9b:c.instructions+=3;goto B70ce9b;
case 0x70ce9d:c.instructions+=2;goto B70ce9d;
case 0x70cea0:c.instructions+=1;goto B70cea0;
case 0x70cea2:goto L70cea2;
case 0x70cea4:goto L70cea4;
case 0x70cea6:c.instructions+=1;goto B70cea6;
case 0x70cea9:goto L70cea9;
case 0x70ceab:goto L70ceab;
case 0x70ceae:c.instructions+=5;goto B70ceae;
case 0x70ceaf:c.instructions+=4;goto B70ceaf;
case 0x70ceb0:c.instructions+=3;goto B70ceb0;
case 0x70ceb1:c.instructions+=2;goto B70ceb1;
case 0x70ceb4:c.instructions+=1;goto B70ceb4;
case 0x70ceba:goto L70ceba;
case 0x70cebd:c.instructions+=3;goto B70cebd;
case 0x70cec0:c.instructions+=2;goto B70cec0;
case 0x70cec3:c.instructions+=1;goto B70cec3;
case 0x70cec5:goto L70cec5;
case 0x70cec8:c.instructions+=3;goto B70cec8;
case 0x70cecb:c.instructions+=2;goto B70cecb;
case 0x70cecc:c.instructions+=1;goto B70cecc;
case 0x70cecf:goto L70cecf;
case 0x70ced2:c.instructions+=5;goto B70ced2;
case 0x70ced5:c.instructions+=4;goto B70ced5;
case 0x70ced6:c.instructions+=3;goto B70ced6;
case 0x70ced7:c.instructions+=2;goto B70ced7;
case 0x70ced8:c.instructions+=1;goto B70ced8;
case 0x70cede:goto L70cede;
case 0x70cee1:c.instructions+=4;goto B70cee1;
case 0x70cee2:c.instructions+=3;goto B70cee2;
case 0x70cee3:c.instructions+=2;goto B70cee3;
case 0x70cee4:c.instructions+=1;goto B70cee4;
case 0x70ceea:goto L70ceea;
case 0x70ceed:c.instructions+=3;goto B70ceed;
case 0x70cef0:c.instructions+=2;goto B70cef0;
case 0x70cef3:c.instructions+=1;goto B70cef3;
case 0x70cef5:goto L70cef5;
case 0x70cef7:c.instructions+=4;goto B70cef7;
case 0x70cefa:c.instructions+=3;goto B70cefa;
case 0x70cefd:c.instructions+=2;goto B70cefd;
case 0x70cf00:c.instructions+=1;goto B70cf00;
case 0x70cf02:goto L70cf02;
case 0x70cf05:c.instructions+=2;goto B70cf05;
case 0x70cf09:c.instructions+=1;goto B70cf09;
case 0x70cf0f:goto L70cf0f;
case 0x70cf10:c.instructions+=4;goto B70cf10;
case 0x70cf11:c.instructions+=3;goto B70cf11;
case 0x70cf12:c.instructions+=2;goto B70cf12;
case 0x70cf13:c.instructions+=1;goto B70cf13;
case 0x70cf14:goto L70cf14;
case 0x70cf19:goto L70cf19;
case 0x70cf1a:c.instructions+=4;goto B70cf1a;
case 0x70cf1b:c.instructions+=3;goto B70cf1b;
case 0x70cf1f:c.instructions+=2;goto B70cf1f;
case 0x70cf24:c.instructions+=1;goto B70cf24;
case 0x70cf26:goto L70cf26;
case 0x70cf2f:c.instructions+=5;goto B70cf2f;
case 0x70cf38:c.instructions+=4;goto B70cf38;
case 0x70cf41:c.instructions+=3;goto B70cf41;
case 0x70cf4a:c.instructions+=2;goto B70cf4a;
case 0x70cf4f:c.instructions+=1;goto B70cf4f;
case 0x70cf54:goto L70cf54;
case 0x70cf57:c.instructions+=9;goto B70cf57;
case 0x70cf5b:c.instructions+=8;goto B70cf5b;
case 0x70cf5e:c.instructions+=7;goto B70cf5e;
case 0x70cf62:c.instructions+=6;goto B70cf62;
case 0x70cf66:c.instructions+=5;goto B70cf66;
case 0x70cf69:c.instructions+=4;goto B70cf69;
case 0x70cf6a:c.instructions+=3;goto B70cf6a;
case 0x70cf6b:c.instructions+=2;goto B70cf6b;
case 0x70cf71:c.instructions+=1;goto B70cf71;
case 0x70cf73:goto L70cf73;
case 0x70cf7c:c.instructions+=4;goto B70cf7c;
case 0x70cf85:c.instructions+=3;goto B70cf85;
case 0x70cf8e:c.instructions+=2;goto B70cf8e;
case 0x70cf97:c.instructions+=1;goto B70cf97;
case 0x70cf98:goto L70cf98;
case 0x70cf99:c.instructions+=7;goto B70cf99;
case 0x70cf9b:c.instructions+=6;goto B70cf9b;
case 0x70cf9c:c.instructions+=5;goto B70cf9c;
case 0x70cf9e:c.instructions+=4;goto B70cf9e;
case 0x70cf9f:c.instructions+=3;goto B70cf9f;
case 0x70cfa0:c.instructions+=2;goto B70cfa0;
case 0x70cfa2:c.instructions+=1;goto B70cfa2;
case 0x70cfa7:goto L70cfa7;
case 0x70cfa9:c.instructions+=1;goto B70cfa9;
case 0x70cfab:goto L70cfab;
case 0x70cfad:c.instructions+=1;goto B70cfad;
case 0x70cfae:goto L70cfae;
case 0x70cfb5:c.instructions+=1;goto B70cfb5;
case 0x70cfbc:goto L70cfbc;
case 0x70cfbf:c.instructions+=3;goto B70cfbf;
case 0x70cfc1:c.instructions+=2;goto B70cfc1;
case 0x70cfc3:c.instructions+=1;goto B70cfc3;
case 0x70cfc5:goto L70cfc5;
case 0x70cfc8:c.instructions+=2;goto B70cfc8;
case 0x70cfca:c.instructions+=1;goto B70cfca;
case 0x70cfcc:goto L70cfcc;
case 0x70cfcf:c.instructions+=4;goto B70cfcf;
case 0x70cfd1:c.instructions+=3;goto B70cfd1;
case 0x70cfd4:c.instructions+=2;goto B70cfd4;
case 0x70cfd6:c.instructions+=1;goto B70cfd6;
case 0x70cfd8:goto L70cfd8;
case 0x70cfdb:c.instructions+=6;goto B70cfdb;
case 0x70cfdd:c.instructions+=5;goto B70cfdd;
case 0x70cfe0:c.instructions+=4;goto B70cfe0;
case 0x70cfe2:c.instructions+=3;goto B70cfe2;
case 0x70cfe5:c.instructions+=2;goto B70cfe5;
case 0x70cfe8:c.instructions+=1;goto B70cfe8;
case 0x70cfea:goto L70cfea;
case 0x70cfed:c.instructions+=5;goto B70cfed;
case 0x70cfef:c.instructions+=4;goto B70cfef;
case 0x70cff2:c.instructions+=3;goto B70cff2;
case 0x70cff4:c.instructions+=2;goto B70cff4;
case 0x70cff7:c.instructions+=1;goto B70cff7;
case 0x70cff9:goto L70cff9;
case 0x70cffa:c.instructions+=3;goto B70cffa;
case 0x70cffb:c.instructions+=2;goto B70cffb;
case 0x70cffc:c.instructions+=1;goto B70cffc;
default:missing_instruction(c.pc);}
B70c002:L70c002:{c.instructions+=7;NFSU2_TR(0x70c002);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70c004:{NFSU2_TR(0x70c004);
u8 U[9];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),1);
s1(u32(r4(U+4)),r1(U+8));
}
B70c007:{NFSU2_TR(0x70c007);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B70c008:{NFSU2_TR(0x70c008);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B70c009:{NFSU2_TR(0x70c009);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B70c00a:{NFSU2_TR(0x70c00a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+8))));
}
B70c00d:{NFSU2_TR(0x70c00d);
if(r1(R+512)){TAIL_STATIC(0x70bfb4u,70b);}
}
B70c00f:L70c00f:{c.instructions+=7;NFSU2_TR(0x70c00f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70c012:{NFSU2_TR(0x70c012);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B70c015:{NFSU2_TR(0x70c015);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B70c018:{NFSU2_TR(0x70c018);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B70c01a:{NFSU2_TR(0x70c01a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B70c01d:{NFSU2_TR(0x70c01d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70c020:{NFSU2_TR(0x70c020);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x70bfa8u,70b);}
}
B70c022:L70c022:{c.instructions+=5;NFSU2_TR(0x70c022);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70c025:{NFSU2_TR(0x70c025);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B70c026:{NFSU2_TR(0x70c026);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70c029:{NFSU2_TR(0x70c029);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70c02c:{NFSU2_TR(0x70c02c);
{goto L70c031;}
}
B70c02e:L70c02e:{c.instructions+=2;NFSU2_TR(0x70c02e);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70c030:{NFSU2_TR(0x70c030);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B70c031:L70c031:{c.instructions+=3;NFSU2_TR(0x70c031);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B70c034:{NFSU2_TR(0x70c034);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70c037:{NFSU2_TR(0x70c037);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70c03a:L70c03a:{c.instructions+=16;NFSU2_TR(0x70c03a);
u8 U[13];
w4(U+0,u32(u32(u32(0x1ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+12,u32(r1(U+12)));
}
B70c03f:{NFSU2_TR(0x70c03f);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ull))));
__builtin_memmove((R+24),(U+0),4);
}
B70c042:{NFSU2_TR(0x70c042);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
w4(R+8,u32(r1(U+0)));
}
B70c045:{NFSU2_TR(0x70c045);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B70c048:{NFSU2_TR(0x70c048);
w4(R+8,shl<u32>(r4(R+8),u64(u32(0x1ull))));
}
B70c04a:{NFSU2_TR(0x70c04a);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+12))));
}
B70c04c:{NFSU2_TR(0x70c04c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B70c04f:{NFSU2_TR(0x70c04f);
u8 U[9];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+12,u32(r1(U+8)));
}
B70c053:{NFSU2_TR(0x70c053);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+12))));
}
B70c055:{NFSU2_TR(0x70c055);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
w4(R+12,u32(r1(U+0)));
}
B70c058:{NFSU2_TR(0x70c058);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B70c05c:{NFSU2_TR(0x70c05c);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+12))));
}
B70c05e:{NFSU2_TR(0x70c05e);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+4))));
}
B70c060:{NFSU2_TR(0x70c060);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B70c061:{NFSU2_TR(0x70c061);
w4(R+8,sar<u32>(r4(R+8),u64(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
}
B70c063:{NFSU2_TR(0x70c063);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L70c067;}}
}
B70c065:L70c065:{c.instructions+=1;NFSU2_TR(0x70c065);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B70c067:L70c067:{c.instructions+=3;NFSU2_TR(0x70c067);
w4(R+4,u32(0xffull));
}
B70c06c:{NFSU2_TR(0x70c06c);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B70c06e:{NFSU2_TR(0x70c06e);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L70c072;}}
}
B70c070:L70c070:{c.instructions+=1;NFSU2_TR(0x70c070);
__builtin_memmove((R+8),(R+4),4);
}
B70c072:L70c072:{c.instructions+=5;NFSU2_TR(0x70c072);
u8 U[1];
__builtin_memmove((U+0),(R+8),1);
s1(u32(r4(R+28)),r1(U+0));
}
B70c074:{NFSU2_TR(0x70c074);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B70c075:{NFSU2_TR(0x70c075);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B70c078:{NFSU2_TR(0x70c078);
__builtin_memmove((R+4),(R+24),4);
}
B70c07a:{NFSU2_TR(0x70c07a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70c03au);}goto L70c03a;}}
}
B70c07c:L70c07c:{c.instructions+=4;NFSU2_TR(0x70c07c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B70c07f:{NFSU2_TR(0x70c07f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,carry<u32>(r4(U+4),r4(R+0)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B70c082:{NFSU2_TR(0x70c082);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,sborrow<u32>(r4(U+4),u32(0x1ull)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
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
B70c085:{NFSU2_TR(0x70c085);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70c02eu);}goto L70c02e;}}
}
B70c087:L70c087:{c.instructions+=5;NFSU2_TR(0x70c087);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B70c088:{NFSU2_TR(0x70c088);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B70c089:{NFSU2_TR(0x70c089);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B70c08a:{NFSU2_TR(0x70c08a);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B70c08b:{NFSU2_TR(0x70c08b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B70c08c:L70c08c:{c.instructions+=12;NFSU2_TR(0x70c08c);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70c08d:{NFSU2_TR(0x70c08d);
__builtin_memmove((R+20),(R+16),4);
}
B70c08f:{NFSU2_TR(0x70c08f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x3cull))));
}
B70c092:{NFSU2_TR(0x70c092);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70c093:{NFSU2_TR(0x70c093);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70c094:{NFSU2_TR(0x70c094);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B70c097:{NFSU2_TR(0x70c097);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70c09a:{NFSU2_TR(0x70c09a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70c09d:{NFSU2_TR(0x70c09d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B70c09f:{NFSU2_TR(0x70c09f);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x5ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B70c0a2:{NFSU2_TR(0x70c0a2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70c0a3:{NFSU2_TR(0x70c0a3);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L70c0c3;}}
}
B70c0a5:L70c0a5:{c.instructions+=5;NFSU2_TR(0x70c0a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
w4(U+4,u32(0x180ull));
s4(u32(r4(U+0)),r4(U+4));
}
B70c0ac:{NFSU2_TR(0x70c0ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
w4(U+4,u32(0x900ull));
s4(u32(r4(U+0)),r4(U+4));
}
B70c0b3:{NFSU2_TR(0x70c0b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
w4(U+4,u32(0xb40ull));
s4(u32(r4(U+0)),r4(U+4));
}
B70c0ba:{NFSU2_TR(0x70c0ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
w4(U+4,u32(0x1680ull));
s4(u32(r4(U+0)),r4(U+4));
}
B70c0c1:{NFSU2_TR(0x70c0c1);
{goto L70c0df;}
}
B70c0c3:L70c0c3:{c.instructions+=4;NFSU2_TR(0x70c0c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
w4(U+4,u32(0x800ull));
s4(u32(r4(U+0)),r4(U+4));
}
B70c0ca:{NFSU2_TR(0x70c0ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
w4(U+4,u32(0x7800ull));
s4(u32(r4(U+0)),r4(U+4));
}
B70c0d1:{NFSU2_TR(0x70c0d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
w4(U+4,u32(0x16800ull));
s4(u32(r4(U+0)),r4(U+4));
}
B70c0d8:{NFSU2_TR(0x70c0d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
w4(U+4,u32(0x1e000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B70c0df:L70c0df:{c.instructions+=2;NFSU2_TR(0x70c0df);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x5ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B70c0e2:{NFSU2_TR(0x70c0e2);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L70c0ed;}}
}
B70c0e4:L70c0e4:{c.instructions+=2;NFSU2_TR(0x70c0e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
w4(U+4,u32(0x816f48ull));
s4(u32(r4(U+0)),r4(U+4));
}
B70c0eb:{NFSU2_TR(0x70c0eb);
{goto L70c100;}
}
B70c0ed:L70c0ed:{c.instructions+=3;NFSU2_TR(0x70c0ed);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B70c0f0:{NFSU2_TR(0x70c0f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
w4(U+4,u32(0x816e48ull));
s4(u32(r4(U+0)),r4(U+4));
}
B70c0f7:{NFSU2_TR(0x70c0f7);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L70c100;}}
}
B70c0f9:L70c0f9:{c.instructions+=1;NFSU2_TR(0x70c0f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
w4(U+4,u32(0x8b9b40ull));
s4(u32(r4(U+0)),r4(U+4));
}
B70c100:L70c100:{c.instructions+=16;NFSU2_TR(0x70c100);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70c103:{NFSU2_TR(0x70c103);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B70c106:{NFSU2_TR(0x70c106);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70c10c:{NFSU2_TR(0x70c10c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70c112:{NFSU2_TR(0x70c112);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B70c116:{NFSU2_TR(0x70c116);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B70c11a:{NFSU2_TR(0x70c11a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B70c120:{NFSU2_TR(0x70c120);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+0))));
}
B70c122:{NFSU2_TR(0x70c122);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70c125:{NFSU2_TR(0x70c125);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B70c128:{NFSU2_TR(0x70c128);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
}
B70c12a:{NFSU2_TR(0x70c12a);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B70c12c:{NFSU2_TR(0x70c12c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70c12f:{NFSU2_TR(0x70c12f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70c132:{NFSU2_TR(0x70c132);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70c135:{NFSU2_TR(0x70c135);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L70c295;}}
}
B70c13b:L70c13b:{c.instructions+=3;NFSU2_TR(0x70c13b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B70c13f:{NFSU2_TR(0x70c13f);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B70c141:{NFSU2_TR(0x70c141);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L70c27b;}}
}
B70c147:L70c147:{c.instructions+=13;NFSU2_TR(0x70c147);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70c14a:{NFSU2_TR(0x70c14a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B70c14d:{NFSU2_TR(0x70c14d);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
}
B70c14f:{NFSU2_TR(0x70c14f);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B70c152:{NFSU2_TR(0x70c152);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70c155:{NFSU2_TR(0x70c155);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70c158:{NFSU2_TR(0x70c158);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B70c15a:{NFSU2_TR(0x70c15a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70c15d:{NFSU2_TR(0x70c15d);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B70c160:{NFSU2_TR(0x70c160);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+28))));
}
B70c162:{NFSU2_TR(0x70c162);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70c165:{NFSU2_TR(0x70c165);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70c168:{NFSU2_TR(0x70c168);
{goto L70c16d;}
}
B70c16a:L70c16a:{c.instructions+=1;NFSU2_TR(0x70c16a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70c16d:L70c16d:{c.instructions+=5;NFSU2_TR(0x70c16d);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x5ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x5ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B70c171:{NFSU2_TR(0x70c171);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70c174:{NFSU2_TR(0x70c174);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70c177:{NFSU2_TR(0x70c177);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B70c17a:{NFSU2_TR(0x70c17a);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L70c21c;}}
}
B70c180:L70c180:{c.instructions+=2;NFSU2_TR(0x70c180);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+8)));
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B70c183:{NFSU2_TR(0x70c183);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L70c21c;}}
}
B70c189:L70c189:{c.instructions+=8;NFSU2_TR(0x70c189);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70c18c:{NFSU2_TR(0x70c18c);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),r4(R+28)));
w1(R+523,scarry<u32>(r4(R+0),r4(R+28)));
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B70c18e:{NFSU2_TR(0x70c18e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70c191:{NFSU2_TR(0x70c191);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70c192:{NFSU2_TR(0x70c192);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70c193:{NFSU2_TR(0x70c193);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70c194:{NFSU2_TR(0x70c194);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70c195:{NFSU2_TR(0x70c195);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b9f18),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70c19bull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B70c19b:L70c19b:{c.instructions+=4;NFSU2_TR(0x70c19b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70c19e:{NFSU2_TR(0x70c19e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B70c1a1:{NFSU2_TR(0x70c1a1);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B70c1a5:{NFSU2_TR(0x70c1a5);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L70c1b3;}}
}
B70c1a7:L70c1a7:{c.instructions+=4;NFSU2_TR(0x70c1a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70c1aa:{NFSU2_TR(0x70c1aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70c1ad:{NFSU2_TR(0x70c1ad);
u8 U[24];
w4(U+0,u32(u32(u32(0xfffffffcull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w1(R+523,sborrow<u32>(r4(U+16),r4(R+0)));
w4(U+20,u32(u32(r4(U+16))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+20))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+20))==(u32(0x0ull))));
}
B70c1b1:{NFSU2_TR(0x70c1b1);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L70c1ed;}}
}
B70c1b3:L70c1b3:{c.instructions+=4;NFSU2_TR(0x70c1b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70c1b6:{NFSU2_TR(0x70c1b6);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B70c1b7:{NFSU2_TR(0x70c1b7);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B70c1ba:{NFSU2_TR(0x70c1ba);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L70c1c8;}}
}
B70c1bc:L70c1bc:{c.instructions+=4;NFSU2_TR(0x70c1bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70c1bf:{NFSU2_TR(0x70c1bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70c1c2:{NFSU2_TR(0x70c1c2);
u8 U[24];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w1(R+523,sborrow<u32>(r4(U+16),r4(R+0)));
w4(U+20,u32(u32(r4(U+16))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+20))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+20))==(u32(0x0ull))));
}
B70c1c6:{NFSU2_TR(0x70c1c6);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L70c1ed;}}
}
B70c1c8:L70c1c8:{c.instructions+=4;NFSU2_TR(0x70c1c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70c1cb:{NFSU2_TR(0x70c1cb);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B70c1cc:{NFSU2_TR(0x70c1cc);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B70c1cf:{NFSU2_TR(0x70c1cf);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L70c1dc;}}
}
B70c1d1:L70c1d1:{c.instructions+=4;NFSU2_TR(0x70c1d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70c1d4:{NFSU2_TR(0x70c1d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70c1d7:{NFSU2_TR(0x70c1d7);
u8 U[20];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w1(R+523,sborrow<u32>(r4(U+12),r4(R+0)));
w4(U+16,u32(u32(r4(U+12))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B70c1da:{NFSU2_TR(0x70c1da);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L70c1ed;}}
}
B70c1dc:L70c1dc:{c.instructions+=2;NFSU2_TR(0x70c1dc);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B70c1e0:{NFSU2_TR(0x70c1e0);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L70c25b;}}
}
B70c1e2:L70c1e2:{c.instructions+=4;NFSU2_TR(0x70c1e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70c1e5:{NFSU2_TR(0x70c1e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70c1e8:{NFSU2_TR(0x70c1e8);
u8 U[20];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w1(R+523,sborrow<u32>(r4(U+12),r4(R+0)));
w4(U+16,u32(u32(r4(U+12))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B70c1eb:{NFSU2_TR(0x70c1eb);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L70c25b;}}
}
B70c1ed:L70c1ed:{c.instructions+=9;NFSU2_TR(0x70c1ed);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70c1f0:{NFSU2_TR(0x70c1f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70c1f3:{NFSU2_TR(0x70c1f3);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70c1f6:{NFSU2_TR(0x70c1f6);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),r4(R+28)));
w1(R+523,scarry<u32>(r4(R+0),r4(R+28)));
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B70c1f8:{NFSU2_TR(0x70c1f8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70c1f9:{NFSU2_TR(0x70c1f9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70c1fa:{NFSU2_TR(0x70c1fa);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70c1fb:{NFSU2_TR(0x70c1fb);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70c1fc:{NFSU2_TR(0x70c1fc);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b9f18),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70c202ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B70c202:L70c202:{c.instructions+=9;NFSU2_TR(0x70c202);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70c205:{NFSU2_TR(0x70c205);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70c208:{NFSU2_TR(0x70c208);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70c20b:{NFSU2_TR(0x70c20b);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),r4(R+28)));
w1(R+523,scarry<u32>(r4(R+0),r4(R+28)));
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B70c20d:{NFSU2_TR(0x70c20d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70c20e:{NFSU2_TR(0x70c20e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70c20f:{NFSU2_TR(0x70c20f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70c210:{NFSU2_TR(0x70c210);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70c211:{NFSU2_TR(0x70c211);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b9f18),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70c217ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B70c217:L70c217:{c.instructions+=2;NFSU2_TR(0x70c217);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x30ull))));
}
B70c21a:{NFSU2_TR(0x70c21a);
{goto L70c25b;}
}
B70c21c:L70c21c:{c.instructions+=3;NFSU2_TR(0x70c21c);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
}
B70c21e:{NFSU2_TR(0x70c21e);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+4),r4(U+14)));
w4(U+18,u32(u32(r4(R+4))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B70c221:{NFSU2_TR(0x70c221);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L70c235;}}
}
B70c223:L70c223:{c.instructions+=7;NFSU2_TR(0x70c223);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70c226:{NFSU2_TR(0x70c226);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70c229:{NFSU2_TR(0x70c229);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70c22a:{NFSU2_TR(0x70c22a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70c22b:{NFSU2_TR(0x70c22b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70c22c:{NFSU2_TR(0x70c22c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70c22d:{NFSU2_TR(0x70c22d);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b9f18),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70c233ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B70c233:L70c233:{c.instructions+=1;NFSU2_TR(0x70c233);
{goto L70c24a;}
}
B70c235:L70c235:{c.instructions+=2;NFSU2_TR(0x70c235);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+4),r4(U+14)));
w4(U+18,u32(u32(r4(R+4))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B70c238:{NFSU2_TR(0x70c238);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L70c24f;}}
}
B70c23a:L70c23a:{c.instructions+=7;NFSU2_TR(0x70c23a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70c23d:{NFSU2_TR(0x70c23d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70c240:{NFSU2_TR(0x70c240);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70c241:{NFSU2_TR(0x70c241);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70c242:{NFSU2_TR(0x70c242);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70c243:{NFSU2_TR(0x70c243);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70c244:{NFSU2_TR(0x70c244);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b9ef8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70c24aull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B70c24a:L70c24a:{c.instructions+=2;NFSU2_TR(0x70c24a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B70c24d:{NFSU2_TR(0x70c24d);
{goto L70c25b;}
}
B70c24f:L70c24f:{c.instructions+=4;NFSU2_TR(0x70c24f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70c250:{NFSU2_TR(0x70c250);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70c251:{NFSU2_TR(0x70c251);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70c252:{NFSU2_TR(0x70c252);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b9c5c),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70c258ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B70c258:L70c258:{c.instructions+=1;NFSU2_TR(0x70c258);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B70c25b:L70c25b:{c.instructions+=8;NFSU2_TR(0x70c25b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B70c25e:{NFSU2_TR(0x70c25e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B70c262:{NFSU2_TR(0x70c262);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B70c266:{NFSU2_TR(0x70c266);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B70c269:{NFSU2_TR(0x70c269);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70c26c:{NFSU2_TR(0x70c26c);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x8ull))));
}
B70c26f:{NFSU2_TR(0x70c26f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B70c272:{NFSU2_TR(0x70c272);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70c16au);}goto L70c16a;}}
}
B70c278:L70c278:{c.instructions+=1;NFSU2_TR(0x70c278);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70c27b:L70c27b:{c.instructions+=8;NFSU2_TR(0x70c27b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70c27e:{NFSU2_TR(0x70c27e);
__builtin_memmove((R+0),(R+12),4);
}
B70c280:{NFSU2_TR(0x70c280);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B70c283:{NFSU2_TR(0x70c283);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B70c286:{NFSU2_TR(0x70c286);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B70c289:{NFSU2_TR(0x70c289);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B70c28c:{NFSU2_TR(0x70c28c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+8))));
}
B70c28f:{NFSU2_TR(0x70c28f);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70c13bu);}goto L70c13b;}}
}
B70c295:L70c295:{c.instructions+=14;NFSU2_TR(0x70c295);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70c298:{NFSU2_TR(0x70c298);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B70c29b:{NFSU2_TR(0x70c29b);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+0))));
}
B70c29d:{NFSU2_TR(0x70c29d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70c2a0:{NFSU2_TR(0x70c2a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B70c2a3:{NFSU2_TR(0x70c2a3);
w4(R+8,shr<u32>(r4(R+8),u64(u32(0x1ull))));
}
B70c2a5:{NFSU2_TR(0x70c2a5);
w4(R+4,shr<u32>(r4(R+4),u64(u32(0x1ull))));
}
B70c2a7:{NFSU2_TR(0x70c2a7);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
}
B70c2a9:{NFSU2_TR(0x70c2a9);
w4(R+12,shr<u32>(r4(R+12),u64(u32(0x1ull))));
}
B70c2ab:{NFSU2_TR(0x70c2ab);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B70c2ad:{NFSU2_TR(0x70c2ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70c2b0:{NFSU2_TR(0x70c2b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70c2b3:{NFSU2_TR(0x70c2b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70c2b6:{NFSU2_TR(0x70c2b6);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L70c3ae;}}
}
B70c2bc:L70c2bc:{c.instructions+=1;NFSU2_TR(0x70c2bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70c2bf:L70c2bf:{c.instructions+=2;NFSU2_TR(0x70c2bf);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B70c2c1:{NFSU2_TR(0x70c2c1);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L70c397;}}
}
B70c2c7:L70c2c7:{c.instructions+=6;NFSU2_TR(0x70c2c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B70c2ca:{NFSU2_TR(0x70c2ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70c2cd:{NFSU2_TR(0x70c2cd);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+28))));
}
B70c2cf:{NFSU2_TR(0x70c2cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70c2d2:{NFSU2_TR(0x70c2d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70c2d5:{NFSU2_TR(0x70c2d5);
{goto L70c2da;}
}
B70c2d7:L70c2d7:{c.instructions+=1;NFSU2_TR(0x70c2d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70c2da:L70c2da:{c.instructions+=7;NFSU2_TR(0x70c2da);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70c2dd:{NFSU2_TR(0x70c2dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70c2e0:{NFSU2_TR(0x70c2e0);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B70c2e3:{NFSU2_TR(0x70c2e3);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w1(R+523,sborrow<u32>(r4(U+4),u32(0x5ull)));
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x5ull))));
w1(R+519,u8(s32(r4(U+8))<s32(u32(0x0ull))));
}
B70c2e6:{NFSU2_TR(0x70c2e6);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B70c2e9:{NFSU2_TR(0x70c2e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70c2ec:{NFSU2_TR(0x70c2ec);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L70c2fa;}}
}
B70c2ee:L70c2ee:{c.instructions+=4;NFSU2_TR(0x70c2ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70c2f1:{NFSU2_TR(0x70c2f1);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B70c2f4:{NFSU2_TR(0x70c2f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70c2f7:{NFSU2_TR(0x70c2f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70c2fa:L70c2fa:{c.instructions+=2;NFSU2_TR(0x70c2fa);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x5ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x5ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B70c2fe:{NFSU2_TR(0x70c2fe);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L70c346;}}
}
B70c300:L70c300:{c.instructions+=2;NFSU2_TR(0x70c300);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+8)));
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B70c303:{NFSU2_TR(0x70c303);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L70c346;}}
}
B70c305:L70c305:{c.instructions+=8;NFSU2_TR(0x70c305);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70c308:{NFSU2_TR(0x70c308);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),r4(R+28)));
w1(R+523,scarry<u32>(r4(R+0),r4(R+28)));
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B70c30a:{NFSU2_TR(0x70c30a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70c30d:{NFSU2_TR(0x70c30d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70c30e:{NFSU2_TR(0x70c30e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70c30f:{NFSU2_TR(0x70c30f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70c310:{NFSU2_TR(0x70c310);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70c311:{NFSU2_TR(0x70c311);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b9f18),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70c317ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B70c317:L70c317:{c.instructions+=9;NFSU2_TR(0x70c317);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70c31a:{NFSU2_TR(0x70c31a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70c31d:{NFSU2_TR(0x70c31d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70c320:{NFSU2_TR(0x70c320);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),r4(R+28)));
w1(R+523,scarry<u32>(r4(R+0),r4(R+28)));
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B70c322:{NFSU2_TR(0x70c322);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70c323:{NFSU2_TR(0x70c323);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70c324:{NFSU2_TR(0x70c324);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70c325:{NFSU2_TR(0x70c325);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70c326:{NFSU2_TR(0x70c326);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b9f18),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70c32cull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B70c32c:L70c32c:{c.instructions+=9;NFSU2_TR(0x70c32c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70c32f:{NFSU2_TR(0x70c32f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70c332:{NFSU2_TR(0x70c332);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70c335:{NFSU2_TR(0x70c335);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),r4(R+28)));
w1(R+523,scarry<u32>(r4(R+0),r4(R+28)));
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B70c337:{NFSU2_TR(0x70c337);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70c338:{NFSU2_TR(0x70c338);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70c339:{NFSU2_TR(0x70c339);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70c33a:{NFSU2_TR(0x70c33a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70c33b:{NFSU2_TR(0x70c33b);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b9f18),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70c341ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B70c341:L70c341:{c.instructions+=2;NFSU2_TR(0x70c341);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x48ull))));
}
B70c344:{NFSU2_TR(0x70c344);
{goto L70c385;}
}
B70c346:L70c346:{c.instructions+=3;NFSU2_TR(0x70c346);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
}
B70c348:{NFSU2_TR(0x70c348);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
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
B70c34b:{NFSU2_TR(0x70c34b);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L70c362;}}
}
B70c34d:L70c34d:{c.instructions+=7;NFSU2_TR(0x70c34d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70c350:{NFSU2_TR(0x70c350);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70c353:{NFSU2_TR(0x70c353);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70c354:{NFSU2_TR(0x70c354);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70c355:{NFSU2_TR(0x70c355);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70c356:{NFSU2_TR(0x70c356);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70c357:{NFSU2_TR(0x70c357);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b9f18),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70c35dull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B70c35d:L70c35d:{c.instructions+=2;NFSU2_TR(0x70c35d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B70c360:{NFSU2_TR(0x70c360);
{goto L70c385;}
}
B70c362:L70c362:{c.instructions+=2;NFSU2_TR(0x70c362);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
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
B70c365:{NFSU2_TR(0x70c365);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L70c379;}}
}
B70c367:L70c367:{c.instructions+=7;NFSU2_TR(0x70c367);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70c36a:{NFSU2_TR(0x70c36a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70c36d:{NFSU2_TR(0x70c36d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70c36e:{NFSU2_TR(0x70c36e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70c36f:{NFSU2_TR(0x70c36f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70c370:{NFSU2_TR(0x70c370);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70c371:{NFSU2_TR(0x70c371);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b9ef8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70c377ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B70c377:L70c377:{c.instructions+=1;NFSU2_TR(0x70c377);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70c35du);}goto L70c35d;}
}
B70c379:L70c379:{c.instructions+=4;NFSU2_TR(0x70c379);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70c37a:{NFSU2_TR(0x70c37a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70c37b:{NFSU2_TR(0x70c37b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70c37c:{NFSU2_TR(0x70c37c);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b9c5c),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70c382ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B70c382:L70c382:{c.instructions+=1;NFSU2_TR(0x70c382);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B70c385:L70c385:{c.instructions+=4;NFSU2_TR(0x70c385);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B70c388:{NFSU2_TR(0x70c388);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x8ull))));
}
B70c38b:{NFSU2_TR(0x70c38b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B70c38e:{NFSU2_TR(0x70c38e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70c2d7u);}goto L70c2d7;}}
}
B70c394:L70c394:{c.instructions+=1;NFSU2_TR(0x70c394);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70c397:L70c397:{c.instructions+=6;NFSU2_TR(0x70c397);
__builtin_memmove((R+0),(R+12),4);
}
B70c399:{NFSU2_TR(0x70c399);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B70c39c:{NFSU2_TR(0x70c39c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B70c39f:{NFSU2_TR(0x70c39f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B70c3a2:{NFSU2_TR(0x70c3a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B70c3a5:{NFSU2_TR(0x70c3a5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70c2bfu);}goto L70c2bf;}}
}
B70c3ab:L70c3ab:{c.instructions+=1;NFSU2_TR(0x70c3ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70c3ae:L70c3ae:{c.instructions+=9;NFSU2_TR(0x70c3ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70c3b4:{NFSU2_TR(0x70c3b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B70c3b7:{NFSU2_TR(0x70c3b7);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+0))));
}
B70c3b9:{NFSU2_TR(0x70c3b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70c3bc:{NFSU2_TR(0x70c3bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B70c3bf:{NFSU2_TR(0x70c3bf);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
}
B70c3c1:{NFSU2_TR(0x70c3c1);
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
B70c3c3:{NFSU2_TR(0x70c3c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70c3c6:{NFSU2_TR(0x70c3c6);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L70c4bb;}}
}
B70c3cc:L70c3cc:{c.instructions+=1;NFSU2_TR(0x70c3cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70c3cf:L70c3cf:{c.instructions+=2;NFSU2_TR(0x70c3cf);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B70c3d1:{NFSU2_TR(0x70c3d1);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L70c4a7;}}
}
B70c3d7:L70c3d7:{c.instructions+=6;NFSU2_TR(0x70c3d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B70c3da:{NFSU2_TR(0x70c3da);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70c3dd:{NFSU2_TR(0x70c3dd);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+28))));
}
B70c3df:{NFSU2_TR(0x70c3df);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70c3e2:{NFSU2_TR(0x70c3e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70c3e5:{NFSU2_TR(0x70c3e5);
{goto L70c3ea;}
}
B70c3e7:L70c3e7:{c.instructions+=1;NFSU2_TR(0x70c3e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70c3ea:L70c3ea:{c.instructions+=7;NFSU2_TR(0x70c3ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70c3ed:{NFSU2_TR(0x70c3ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70c3f0:{NFSU2_TR(0x70c3f0);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B70c3f3:{NFSU2_TR(0x70c3f3);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w1(R+523,sborrow<u32>(r4(U+4),u32(0x5ull)));
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x5ull))));
w1(R+519,u8(s32(r4(U+8))<s32(u32(0x0ull))));
}
B70c3f6:{NFSU2_TR(0x70c3f6);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B70c3f9:{NFSU2_TR(0x70c3f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70c3fc:{NFSU2_TR(0x70c3fc);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L70c40a;}}
}
B70c3fe:L70c3fe:{c.instructions+=4;NFSU2_TR(0x70c3fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70c401:{NFSU2_TR(0x70c401);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B70c404:{NFSU2_TR(0x70c404);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70c407:{NFSU2_TR(0x70c407);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70c40a:L70c40a:{c.instructions+=2;NFSU2_TR(0x70c40a);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x5ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x5ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B70c40e:{NFSU2_TR(0x70c40e);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L70c456;}}
}
B70c410:L70c410:{c.instructions+=2;NFSU2_TR(0x70c410);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+8)));
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B70c413:{NFSU2_TR(0x70c413);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L70c456;}}
}
B70c415:L70c415:{c.instructions+=8;NFSU2_TR(0x70c415);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70c418:{NFSU2_TR(0x70c418);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),r4(R+28)));
w1(R+523,scarry<u32>(r4(R+0),r4(R+28)));
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B70c41a:{NFSU2_TR(0x70c41a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70c41d:{NFSU2_TR(0x70c41d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70c41e:{NFSU2_TR(0x70c41e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70c41f:{NFSU2_TR(0x70c41f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70c420:{NFSU2_TR(0x70c420);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70c421:{NFSU2_TR(0x70c421);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b9f18),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70c427ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B70c427:L70c427:{c.instructions+=9;NFSU2_TR(0x70c427);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70c42a:{NFSU2_TR(0x70c42a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70c42d:{NFSU2_TR(0x70c42d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70c430:{NFSU2_TR(0x70c430);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),r4(R+28)));
w1(R+523,scarry<u32>(r4(R+0),r4(R+28)));
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B70c432:{NFSU2_TR(0x70c432);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70c433:{NFSU2_TR(0x70c433);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70c434:{NFSU2_TR(0x70c434);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70c435:{NFSU2_TR(0x70c435);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70c436:{NFSU2_TR(0x70c436);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b9f18),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70c43cull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B70c43c:L70c43c:{c.instructions+=9;NFSU2_TR(0x70c43c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70c43f:{NFSU2_TR(0x70c43f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70c442:{NFSU2_TR(0x70c442);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70c445:{NFSU2_TR(0x70c445);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),r4(R+28)));
w1(R+523,scarry<u32>(r4(R+0),r4(R+28)));
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B70c447:{NFSU2_TR(0x70c447);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70c448:{NFSU2_TR(0x70c448);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70c449:{NFSU2_TR(0x70c449);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70c44a:{NFSU2_TR(0x70c44a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70c44b:{NFSU2_TR(0x70c44b);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b9f18),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70c451ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B70c451:L70c451:{c.instructions+=2;NFSU2_TR(0x70c451);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x48ull))));
}
B70c454:{NFSU2_TR(0x70c454);
{goto L70c495;}
}
B70c456:L70c456:{c.instructions+=3;NFSU2_TR(0x70c456);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
}
B70c458:{NFSU2_TR(0x70c458);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
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
B70c45b:{NFSU2_TR(0x70c45b);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L70c472;}}
}
B70c45d:L70c45d:{c.instructions+=7;NFSU2_TR(0x70c45d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70c460:{NFSU2_TR(0x70c460);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70c463:{NFSU2_TR(0x70c463);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70c464:{NFSU2_TR(0x70c464);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70c465:{NFSU2_TR(0x70c465);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70c466:{NFSU2_TR(0x70c466);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70c467:{NFSU2_TR(0x70c467);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b9f18),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70c46dull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B70c46d:L70c46d:{c.instructions+=2;NFSU2_TR(0x70c46d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B70c470:{NFSU2_TR(0x70c470);
{goto L70c495;}
}
B70c472:L70c472:{c.instructions+=2;NFSU2_TR(0x70c472);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
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
B70c475:{NFSU2_TR(0x70c475);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L70c489;}}
}
B70c477:L70c477:{c.instructions+=7;NFSU2_TR(0x70c477);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70c47a:{NFSU2_TR(0x70c47a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70c47d:{NFSU2_TR(0x70c47d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70c47e:{NFSU2_TR(0x70c47e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70c47f:{NFSU2_TR(0x70c47f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70c480:{NFSU2_TR(0x70c480);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70c481:{NFSU2_TR(0x70c481);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b9ef8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70c487ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B70c487:L70c487:{c.instructions+=1;NFSU2_TR(0x70c487);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70c46du);}goto L70c46d;}
}
B70c489:L70c489:{c.instructions+=4;NFSU2_TR(0x70c489);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70c48a:{NFSU2_TR(0x70c48a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70c48b:{NFSU2_TR(0x70c48b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70c48c:{NFSU2_TR(0x70c48c);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b9c5c),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70c492ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B70c492:L70c492:{c.instructions+=1;NFSU2_TR(0x70c492);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B70c495:L70c495:{c.instructions+=4;NFSU2_TR(0x70c495);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B70c498:{NFSU2_TR(0x70c498);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x8ull))));
}
B70c49b:{NFSU2_TR(0x70c49b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B70c49e:{NFSU2_TR(0x70c49e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70c3e7u);}goto L70c3e7;}}
}
B70c4a4:L70c4a4:{c.instructions+=1;NFSU2_TR(0x70c4a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70c4a7:L70c4a7:{c.instructions+=6;NFSU2_TR(0x70c4a7);
__builtin_memmove((R+0),(R+12),4);
}
B70c4a9:{NFSU2_TR(0x70c4a9);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B70c4ac:{NFSU2_TR(0x70c4ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B70c4af:{NFSU2_TR(0x70c4af);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,carry<u32>(r4(U+4),r4(R+0)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B70c4b2:{NFSU2_TR(0x70c4b2);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,sborrow<u32>(r4(U+4),u32(0x1ull)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
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
B70c4b5:{NFSU2_TR(0x70c4b5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70c3cfu);}goto L70c3cf;}}
}
B70c4bb:L70c4bb:{c.instructions+=5;NFSU2_TR(0x70c4bb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B70c4bc:{NFSU2_TR(0x70c4bc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B70c4bd:{NFSU2_TR(0x70c4bd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B70c4be:{NFSU2_TR(0x70c4be);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B70c4bf:{NFSU2_TR(0x70c4bf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B70c4c0:L70c4c0:{c.instructions+=12;NFSU2_TR(0x70c4c0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70c4c1:{NFSU2_TR(0x70c4c1);
__builtin_memmove((R+20),(R+16),4);
}
B70c4c3:{NFSU2_TR(0x70c4c3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x40ull))));
}
B70c4c6:{NFSU2_TR(0x70c4c6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70c4c7:{NFSU2_TR(0x70c4c7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70c4c8:{NFSU2_TR(0x70c4c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B70c4cb:{NFSU2_TR(0x70c4cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70c4ce:{NFSU2_TR(0x70c4ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70c4d1:{NFSU2_TR(0x70c4d1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B70c4d3:{NFSU2_TR(0x70c4d3);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x5ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B70c4d6:{NFSU2_TR(0x70c4d6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70c4d7:{NFSU2_TR(0x70c4d7);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L70c4f7;}}
}
B70c4d9:L70c4d9:{c.instructions+=5;NFSU2_TR(0x70c4d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
w4(U+4,u32(0x180ull));
s4(u32(r4(U+0)),r4(U+4));
}
B70c4e0:{NFSU2_TR(0x70c4e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
w4(U+4,u32(0x900ull));
s4(u32(r4(U+0)),r4(U+4));
}
B70c4e7:{NFSU2_TR(0x70c4e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
w4(U+4,u32(0xb40ull));
s4(u32(r4(U+0)),r4(U+4));
}
B70c4ee:{NFSU2_TR(0x70c4ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
w4(U+4,u32(0x1680ull));
s4(u32(r4(U+0)),r4(U+4));
}
B70c4f5:{NFSU2_TR(0x70c4f5);
{goto L70c513;}
}
B70c4f7:L70c4f7:{c.instructions+=4;NFSU2_TR(0x70c4f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
w4(U+4,u32(0x800ull));
s4(u32(r4(U+0)),r4(U+4));
}
B70c4fe:{NFSU2_TR(0x70c4fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
w4(U+4,u32(0x7800ull));
s4(u32(r4(U+0)),r4(U+4));
}
B70c505:{NFSU2_TR(0x70c505);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
w4(U+4,u32(0x16800ull));
s4(u32(r4(U+0)),r4(U+4));
}
B70c50c:{NFSU2_TR(0x70c50c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
w4(U+4,u32(0x1e000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B70c513:L70c513:{c.instructions+=2;NFSU2_TR(0x70c513);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x5ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B70c516:{NFSU2_TR(0x70c516);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L70c521;}}
}
B70c518:L70c518:{c.instructions+=2;NFSU2_TR(0x70c518);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
w4(U+4,u32(0x816f48ull));
s4(u32(r4(U+0)),r4(U+4));
}
B70c51f:{NFSU2_TR(0x70c51f);
{goto L70c534;}
}
B70c521:L70c521:{c.instructions+=3;NFSU2_TR(0x70c521);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B70c524:{NFSU2_TR(0x70c524);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
w4(U+4,u32(0x816e48ull));
s4(u32(r4(U+0)),r4(U+4));
}
B70c52b:{NFSU2_TR(0x70c52b);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L70c534;}}
}
B70c52d:L70c52d:{c.instructions+=1;NFSU2_TR(0x70c52d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
w4(U+4,u32(0x8b9b40ull));
s4(u32(r4(U+0)),r4(U+4));
}
B70c534:L70c534:{c.instructions+=18;NFSU2_TR(0x70c534);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70c537:{NFSU2_TR(0x70c537);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B70c53a:{NFSU2_TR(0x70c53a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70c540:{NFSU2_TR(0x70c540);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70c546:{NFSU2_TR(0x70c546);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B70c54a:{NFSU2_TR(0x70c54a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B70c54e:{NFSU2_TR(0x70c54e);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+0))));
}
B70c550:{NFSU2_TR(0x70c550);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70c553:{NFSU2_TR(0x70c553);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B70c556:{NFSU2_TR(0x70c556);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
}
B70c558:{NFSU2_TR(0x70c558);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B70c55e:{NFSU2_TR(0x70c55e);
w4(R+4,shr<u32>(r4(R+4),u64(u32(0x1ull))));
}
B70c560:{NFSU2_TR(0x70c560);
w4(R+28,shl<u32>(r4(R+28),u64(u32(0x1ull))));
}
B70c562:{NFSU2_TR(0x70c562);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B70c564:{NFSU2_TR(0x70c564);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70c567:{NFSU2_TR(0x70c567);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70c56a:{NFSU2_TR(0x70c56a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70c56d:{NFSU2_TR(0x70c56d);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L70c6d3;}}
}
B70c573:L70c573:{c.instructions+=3;NFSU2_TR(0x70c573);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B70c577:{NFSU2_TR(0x70c577);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B70c579:{NFSU2_TR(0x70c579);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L70c6bc;}}
}
B70c57f:L70c57f:{c.instructions+=13;NFSU2_TR(0x70c57f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70c582:{NFSU2_TR(0x70c582);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B70c585:{NFSU2_TR(0x70c585);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B70c587:{NFSU2_TR(0x70c587);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B70c58a:{NFSU2_TR(0x70c58a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70c58d:{NFSU2_TR(0x70c58d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70c590:{NFSU2_TR(0x70c590);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B70c592:{NFSU2_TR(0x70c592);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70c595:{NFSU2_TR(0x70c595);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B70c598:{NFSU2_TR(0x70c598);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+12))));
}
B70c59a:{NFSU2_TR(0x70c59a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70c59d:{NFSU2_TR(0x70c59d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70c5a0:{NFSU2_TR(0x70c5a0);
{goto L70c5a5;}
}
B70c5a2:L70c5a2:{c.instructions+=1;NFSU2_TR(0x70c5a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70c5a5:L70c5a5:{c.instructions+=7;NFSU2_TR(0x70c5a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70c5a8:{NFSU2_TR(0x70c5a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70c5ab:{NFSU2_TR(0x70c5ab);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B70c5ae:{NFSU2_TR(0x70c5ae);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x5ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x5ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B70c5b2:{NFSU2_TR(0x70c5b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70c5b5:{NFSU2_TR(0x70c5b5);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B70c5b8:{NFSU2_TR(0x70c5b8);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L70c65a;}}
}
B70c5be:L70c5be:{c.instructions+=2;NFSU2_TR(0x70c5be);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+8)));
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B70c5c1:{NFSU2_TR(0x70c5c1);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L70c65a;}}
}
B70c5c7:L70c5c7:{c.instructions+=8;NFSU2_TR(0x70c5c7);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70c5ca:{NFSU2_TR(0x70c5ca);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),r4(R+12)));
w1(R+523,scarry<u32>(r4(R+0),r4(R+12)));
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+12))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B70c5cc:{NFSU2_TR(0x70c5cc);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70c5cf:{NFSU2_TR(0x70c5cf);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70c5d0:{NFSU2_TR(0x70c5d0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70c5d1:{NFSU2_TR(0x70c5d1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70c5d2:{NFSU2_TR(0x70c5d2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70c5d3:{NFSU2_TR(0x70c5d3);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b9f18),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70c5d9ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B70c5d9:L70c5d9:{c.instructions+=4;NFSU2_TR(0x70c5d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70c5dc:{NFSU2_TR(0x70c5dc);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B70c5df:{NFSU2_TR(0x70c5df);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B70c5e3:{NFSU2_TR(0x70c5e3);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L70c5f1;}}
}
B70c5e5:L70c5e5:{c.instructions+=4;NFSU2_TR(0x70c5e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70c5e8:{NFSU2_TR(0x70c5e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70c5eb:{NFSU2_TR(0x70c5eb);
u8 U[24];
w4(U+0,u32(u32(u32(0xfffffffcull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w1(R+523,sborrow<u32>(r4(U+16),r4(R+0)));
w4(U+20,u32(u32(r4(U+16))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+20))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+20))==(u32(0x0ull))));
}
B70c5ef:{NFSU2_TR(0x70c5ef);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L70c62b;}}
}
B70c5f1:L70c5f1:{c.instructions+=4;NFSU2_TR(0x70c5f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70c5f4:{NFSU2_TR(0x70c5f4);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B70c5f5:{NFSU2_TR(0x70c5f5);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B70c5f8:{NFSU2_TR(0x70c5f8);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L70c606;}}
}
B70c5fa:L70c5fa:{c.instructions+=4;NFSU2_TR(0x70c5fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70c5fd:{NFSU2_TR(0x70c5fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70c600:{NFSU2_TR(0x70c600);
u8 U[24];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w1(R+523,sborrow<u32>(r4(U+16),r4(R+0)));
w4(U+20,u32(u32(r4(U+16))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+20))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+20))==(u32(0x0ull))));
}
B70c604:{NFSU2_TR(0x70c604);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L70c62b;}}
}
B70c606:L70c606:{c.instructions+=4;NFSU2_TR(0x70c606);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70c609:{NFSU2_TR(0x70c609);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B70c60a:{NFSU2_TR(0x70c60a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B70c60d:{NFSU2_TR(0x70c60d);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L70c61a;}}
}
B70c60f:L70c60f:{c.instructions+=4;NFSU2_TR(0x70c60f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70c612:{NFSU2_TR(0x70c612);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70c615:{NFSU2_TR(0x70c615);
u8 U[20];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w1(R+523,sborrow<u32>(r4(U+12),r4(R+0)));
w4(U+16,u32(u32(r4(U+12))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B70c618:{NFSU2_TR(0x70c618);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L70c62b;}}
}
B70c61a:L70c61a:{c.instructions+=2;NFSU2_TR(0x70c61a);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B70c61e:{NFSU2_TR(0x70c61e);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L70c699;}}
}
B70c620:L70c620:{c.instructions+=4;NFSU2_TR(0x70c620);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70c623:{NFSU2_TR(0x70c623);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70c626:{NFSU2_TR(0x70c626);
u8 U[20];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w1(R+523,sborrow<u32>(r4(U+12),r4(R+0)));
w4(U+16,u32(u32(r4(U+12))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B70c629:{NFSU2_TR(0x70c629);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L70c699;}}
}
B70c62b:L70c62b:{c.instructions+=9;NFSU2_TR(0x70c62b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70c62e:{NFSU2_TR(0x70c62e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70c631:{NFSU2_TR(0x70c631);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70c634:{NFSU2_TR(0x70c634);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),r4(R+12)));
w1(R+523,scarry<u32>(r4(R+0),r4(R+12)));
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+12))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B70c636:{NFSU2_TR(0x70c636);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70c637:{NFSU2_TR(0x70c637);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70c638:{NFSU2_TR(0x70c638);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70c639:{NFSU2_TR(0x70c639);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70c63a:{NFSU2_TR(0x70c63a);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b9f18),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70c640ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B70c640:L70c640:{c.instructions+=9;NFSU2_TR(0x70c640);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70c643:{NFSU2_TR(0x70c643);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70c646:{NFSU2_TR(0x70c646);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70c649:{NFSU2_TR(0x70c649);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),r4(R+12)));
w1(R+523,scarry<u32>(r4(R+0),r4(R+12)));
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+12))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B70c64b:{NFSU2_TR(0x70c64b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70c64c:{NFSU2_TR(0x70c64c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70c64d:{NFSU2_TR(0x70c64d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70c64e:{NFSU2_TR(0x70c64e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70c64f:{NFSU2_TR(0x70c64f);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b9f18),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70c655ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B70c655:L70c655:{c.instructions+=2;NFSU2_TR(0x70c655);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x30ull))));
}
B70c658:{NFSU2_TR(0x70c658);
{goto L70c699;}
}
B70c65a:L70c65a:{c.instructions+=3;NFSU2_TR(0x70c65a);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+12))));
}
B70c65c:{NFSU2_TR(0x70c65c);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+4),r4(U+14)));
w4(U+18,u32(u32(r4(R+4))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B70c65f:{NFSU2_TR(0x70c65f);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L70c673;}}
}
B70c661:L70c661:{c.instructions+=7;NFSU2_TR(0x70c661);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70c664:{NFSU2_TR(0x70c664);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70c667:{NFSU2_TR(0x70c667);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70c668:{NFSU2_TR(0x70c668);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70c669:{NFSU2_TR(0x70c669);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70c66a:{NFSU2_TR(0x70c66a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70c66b:{NFSU2_TR(0x70c66b);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b9f18),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70c671ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B70c671:L70c671:{c.instructions+=1;NFSU2_TR(0x70c671);
{goto L70c688;}
}
B70c673:L70c673:{c.instructions+=2;NFSU2_TR(0x70c673);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+4),r4(U+14)));
w4(U+18,u32(u32(r4(R+4))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B70c676:{NFSU2_TR(0x70c676);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L70c68d;}}
}
B70c678:L70c678:{c.instructions+=7;NFSU2_TR(0x70c678);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70c67b:{NFSU2_TR(0x70c67b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70c67e:{NFSU2_TR(0x70c67e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70c67f:{NFSU2_TR(0x70c67f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70c680:{NFSU2_TR(0x70c680);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70c681:{NFSU2_TR(0x70c681);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70c682:{NFSU2_TR(0x70c682);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b9ef8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70c688ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B70c688:L70c688:{c.instructions+=2;NFSU2_TR(0x70c688);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B70c68b:{NFSU2_TR(0x70c68b);
{goto L70c699;}
}
B70c68d:L70c68d:{c.instructions+=4;NFSU2_TR(0x70c68d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70c68e:{NFSU2_TR(0x70c68e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70c68f:{NFSU2_TR(0x70c68f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70c690:{NFSU2_TR(0x70c690);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b9c5c),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70c696ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B70c696:L70c696:{c.instructions+=1;NFSU2_TR(0x70c696);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B70c699:L70c699:{c.instructions+=8;NFSU2_TR(0x70c699);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B70c69c:{NFSU2_TR(0x70c69c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B70c6a0:{NFSU2_TR(0x70c6a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B70c6a4:{NFSU2_TR(0x70c6a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B70c6a7:{NFSU2_TR(0x70c6a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70c6aa:{NFSU2_TR(0x70c6aa);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x8ull))));
}
B70c6ad:{NFSU2_TR(0x70c6ad);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B70c6b0:{NFSU2_TR(0x70c6b0);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70c5a2u);}goto L70c5a2;}}
}
B70c6b6:L70c6b6:{c.instructions+=2;NFSU2_TR(0x70c6b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70c6b9:{NFSU2_TR(0x70c6b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70c6bc:L70c6bc:{c.instructions+=7;NFSU2_TR(0x70c6bc);
__builtin_memmove((R+0),(R+28),4);
}
B70c6be:{NFSU2_TR(0x70c6be);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B70c6c1:{NFSU2_TR(0x70c6c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B70c6c4:{NFSU2_TR(0x70c6c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B70c6c7:{NFSU2_TR(0x70c6c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B70c6ca:{NFSU2_TR(0x70c6ca);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+4))));
}
B70c6cd:{NFSU2_TR(0x70c6cd);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70c573u);}goto L70c573;}}
}
B70c6d3:L70c6d3:{c.instructions+=14;NFSU2_TR(0x70c6d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B70c6d6:{NFSU2_TR(0x70c6d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70c6dc:{NFSU2_TR(0x70c6dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B70c6e0:{NFSU2_TR(0x70c6e0);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+12))));
}
B70c6e2:{NFSU2_TR(0x70c6e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B70c6e5:{NFSU2_TR(0x70c6e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70c6e8:{NFSU2_TR(0x70c6e8);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+12))));
}
B70c6ea:{NFSU2_TR(0x70c6ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B70c6ed:{NFSU2_TR(0x70c6ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70c6f0:{NFSU2_TR(0x70c6f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70c6f3:{NFSU2_TR(0x70c6f3);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+12))));
}
B70c6f5:{NFSU2_TR(0x70c6f5);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B70c6f7:{NFSU2_TR(0x70c6f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70c6fa:{NFSU2_TR(0x70c6fa);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L70c85f;}}
}
B70c700:L70c700:{c.instructions+=3;NFSU2_TR(0x70c700);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B70c704:{NFSU2_TR(0x70c704);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B70c706:{NFSU2_TR(0x70c706);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L70c848;}}
}
B70c70c:L70c70c:{c.instructions+=13;NFSU2_TR(0x70c70c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70c70f:{NFSU2_TR(0x70c70f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B70c712:{NFSU2_TR(0x70c712);
__builtin_memmove((R+0),(R+4),4);
}
B70c714:{NFSU2_TR(0x70c714);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B70c716:{NFSU2_TR(0x70c716);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B70c719:{NFSU2_TR(0x70c719);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70c71c:{NFSU2_TR(0x70c71c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70c71f:{NFSU2_TR(0x70c71f);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B70c721:{NFSU2_TR(0x70c721);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B70c724:{NFSU2_TR(0x70c724);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+12))));
}
B70c726:{NFSU2_TR(0x70c726);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70c729:{NFSU2_TR(0x70c729);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70c72c:{NFSU2_TR(0x70c72c);
{goto L70c734;}
}
B70c72e:L70c72e:{c.instructions+=2;NFSU2_TR(0x70c72e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70c731:{NFSU2_TR(0x70c731);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70c734:L70c734:{c.instructions+=6;NFSU2_TR(0x70c734);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70c737:{NFSU2_TR(0x70c737);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B70c73a:{NFSU2_TR(0x70c73a);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x5ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x5ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B70c73e:{NFSU2_TR(0x70c73e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70c741:{NFSU2_TR(0x70c741);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B70c744:{NFSU2_TR(0x70c744);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L70c7e6;}}
}
B70c74a:L70c74a:{c.instructions+=2;NFSU2_TR(0x70c74a);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+8)));
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B70c74d:{NFSU2_TR(0x70c74d);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L70c7e6;}}
}
B70c753:L70c753:{c.instructions+=8;NFSU2_TR(0x70c753);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70c756:{NFSU2_TR(0x70c756);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),r4(R+12)));
w1(R+523,scarry<u32>(r4(R+0),r4(R+12)));
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+12))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B70c758:{NFSU2_TR(0x70c758);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70c75b:{NFSU2_TR(0x70c75b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70c75c:{NFSU2_TR(0x70c75c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70c75d:{NFSU2_TR(0x70c75d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70c75e:{NFSU2_TR(0x70c75e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70c75f:{NFSU2_TR(0x70c75f);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b9f18),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70c765ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B70c765:L70c765:{c.instructions+=4;NFSU2_TR(0x70c765);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70c768:{NFSU2_TR(0x70c768);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B70c76b:{NFSU2_TR(0x70c76b);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B70c76f:{NFSU2_TR(0x70c76f);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L70c77d;}}
}
B70c771:L70c771:{c.instructions+=4;NFSU2_TR(0x70c771);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70c774:{NFSU2_TR(0x70c774);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70c777:{NFSU2_TR(0x70c777);
u8 U[24];
w4(U+0,u32(u32(u32(0xfffffffcull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w1(R+523,sborrow<u32>(r4(U+16),r4(R+0)));
w4(U+20,u32(u32(r4(U+16))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+20))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+20))==(u32(0x0ull))));
}
B70c77b:{NFSU2_TR(0x70c77b);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L70c7b7;}}
}
B70c77d:L70c77d:{c.instructions+=4;NFSU2_TR(0x70c77d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70c780:{NFSU2_TR(0x70c780);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B70c781:{NFSU2_TR(0x70c781);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B70c784:{NFSU2_TR(0x70c784);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L70c792;}}
}
B70c786:L70c786:{c.instructions+=4;NFSU2_TR(0x70c786);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70c789:{NFSU2_TR(0x70c789);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70c78c:{NFSU2_TR(0x70c78c);
u8 U[24];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w1(R+523,sborrow<u32>(r4(U+16),r4(R+0)));
w4(U+20,u32(u32(r4(U+16))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+20))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+20))==(u32(0x0ull))));
}
B70c790:{NFSU2_TR(0x70c790);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L70c7b7;}}
}
B70c792:L70c792:{c.instructions+=4;NFSU2_TR(0x70c792);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70c795:{NFSU2_TR(0x70c795);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B70c796:{NFSU2_TR(0x70c796);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B70c799:{NFSU2_TR(0x70c799);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L70c7a6;}}
}
B70c79b:L70c79b:{c.instructions+=4;NFSU2_TR(0x70c79b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70c79e:{NFSU2_TR(0x70c79e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70c7a1:{NFSU2_TR(0x70c7a1);
u8 U[20];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w1(R+523,sborrow<u32>(r4(U+12),r4(R+0)));
w4(U+16,u32(u32(r4(U+12))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B70c7a4:{NFSU2_TR(0x70c7a4);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L70c7b7;}}
}
B70c7a6:L70c7a6:{c.instructions+=2;NFSU2_TR(0x70c7a6);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B70c7aa:{NFSU2_TR(0x70c7aa);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L70c825;}}
}
B70c7ac:L70c7ac:{c.instructions+=4;NFSU2_TR(0x70c7ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70c7af:{NFSU2_TR(0x70c7af);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70c7b2:{NFSU2_TR(0x70c7b2);
u8 U[20];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w1(R+523,sborrow<u32>(r4(U+12),r4(R+0)));
w4(U+16,u32(u32(r4(U+12))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B70c7b5:{NFSU2_TR(0x70c7b5);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L70c825;}}
}
B70c7b7:L70c7b7:{c.instructions+=9;NFSU2_TR(0x70c7b7);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70c7ba:{NFSU2_TR(0x70c7ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70c7bd:{NFSU2_TR(0x70c7bd);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70c7c0:{NFSU2_TR(0x70c7c0);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),r4(R+12)));
w1(R+523,scarry<u32>(r4(R+0),r4(R+12)));
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+12))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B70c7c2:{NFSU2_TR(0x70c7c2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70c7c3:{NFSU2_TR(0x70c7c3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70c7c4:{NFSU2_TR(0x70c7c4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70c7c5:{NFSU2_TR(0x70c7c5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70c7c6:{NFSU2_TR(0x70c7c6);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b9f18),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70c7ccull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B70c7cc:L70c7cc:{c.instructions+=9;NFSU2_TR(0x70c7cc);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70c7cf:{NFSU2_TR(0x70c7cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70c7d2:{NFSU2_TR(0x70c7d2);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70c7d5:{NFSU2_TR(0x70c7d5);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),r4(R+12)));
w1(R+523,scarry<u32>(r4(R+0),r4(R+12)));
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+12))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B70c7d7:{NFSU2_TR(0x70c7d7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70c7d8:{NFSU2_TR(0x70c7d8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70c7d9:{NFSU2_TR(0x70c7d9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70c7da:{NFSU2_TR(0x70c7da);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70c7db:{NFSU2_TR(0x70c7db);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b9f18),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70c7e1ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B70c7e1:L70c7e1:{c.instructions+=2;NFSU2_TR(0x70c7e1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x30ull))));
}
B70c7e4:{NFSU2_TR(0x70c7e4);
{goto L70c825;}
}
B70c7e6:L70c7e6:{c.instructions+=3;NFSU2_TR(0x70c7e6);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+12))));
}
B70c7e8:{NFSU2_TR(0x70c7e8);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+4),r4(U+14)));
w4(U+18,u32(u32(r4(R+4))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B70c7eb:{NFSU2_TR(0x70c7eb);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L70c7ff;}}
}
B70c7ed:L70c7ed:{c.instructions+=7;NFSU2_TR(0x70c7ed);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70c7f0:{NFSU2_TR(0x70c7f0);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70c7f3:{NFSU2_TR(0x70c7f3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70c7f4:{NFSU2_TR(0x70c7f4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70c7f5:{NFSU2_TR(0x70c7f5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70c7f6:{NFSU2_TR(0x70c7f6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70c7f7:{NFSU2_TR(0x70c7f7);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b9f18),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70c7fdull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B70c7fd:L70c7fd:{c.instructions+=1;NFSU2_TR(0x70c7fd);
{goto L70c814;}
}
B70c7ff:L70c7ff:{c.instructions+=2;NFSU2_TR(0x70c7ff);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+4),r4(U+14)));
w4(U+18,u32(u32(r4(R+4))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B70c802:{NFSU2_TR(0x70c802);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L70c819;}}
}
B70c804:L70c804:{c.instructions+=7;NFSU2_TR(0x70c804);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70c807:{NFSU2_TR(0x70c807);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70c80a:{NFSU2_TR(0x70c80a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70c80b:{NFSU2_TR(0x70c80b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70c80c:{NFSU2_TR(0x70c80c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70c80d:{NFSU2_TR(0x70c80d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70c80e:{NFSU2_TR(0x70c80e);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b9ef8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70c814ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B70c814:L70c814:{c.instructions+=2;NFSU2_TR(0x70c814);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B70c817:{NFSU2_TR(0x70c817);
{goto L70c825;}
}
B70c819:L70c819:{c.instructions+=4;NFSU2_TR(0x70c819);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70c81a:{NFSU2_TR(0x70c81a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70c81b:{NFSU2_TR(0x70c81b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70c81c:{NFSU2_TR(0x70c81c);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b9c5c),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70c822ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B70c822:L70c822:{c.instructions+=1;NFSU2_TR(0x70c822);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B70c825:L70c825:{c.instructions+=8;NFSU2_TR(0x70c825);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B70c828:{NFSU2_TR(0x70c828);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B70c82c:{NFSU2_TR(0x70c82c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B70c830:{NFSU2_TR(0x70c830);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B70c833:{NFSU2_TR(0x70c833);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70c836:{NFSU2_TR(0x70c836);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x8ull))));
}
B70c839:{NFSU2_TR(0x70c839);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B70c83c:{NFSU2_TR(0x70c83c);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70c72eu);}goto L70c72e;}}
}
B70c842:L70c842:{c.instructions+=2;NFSU2_TR(0x70c842);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70c845:{NFSU2_TR(0x70c845);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70c848:L70c848:{c.instructions+=7;NFSU2_TR(0x70c848);
__builtin_memmove((R+0),(R+28),4);
}
B70c84a:{NFSU2_TR(0x70c84a);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B70c84d:{NFSU2_TR(0x70c84d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B70c850:{NFSU2_TR(0x70c850);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B70c853:{NFSU2_TR(0x70c853);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B70c856:{NFSU2_TR(0x70c856);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+4))));
}
B70c859:{NFSU2_TR(0x70c859);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70c700u);}goto L70c700;}}
}
B70c85f:L70c85f:{c.instructions+=12;NFSU2_TR(0x70c85f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70c862:{NFSU2_TR(0x70c862);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B70c865:{NFSU2_TR(0x70c865);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+0))));
}
B70c867:{NFSU2_TR(0x70c867);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70c86a:{NFSU2_TR(0x70c86a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B70c86d:{NFSU2_TR(0x70c86d);
w4(R+8,shr<u32>(r4(R+8),u64(u32(0x1ull))));
}
B70c86f:{NFSU2_TR(0x70c86f);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+12))));
}
B70c871:{NFSU2_TR(0x70c871);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+28,shr<u32>(r4(R+28),u64(r4(U+0))));
}
B70c874:{NFSU2_TR(0x70c874);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B70c876:{NFSU2_TR(0x70c876);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70c879:{NFSU2_TR(0x70c879);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70c87c:{NFSU2_TR(0x70c87c);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L70c95d;}}
}
B70c882:L70c882:{c.instructions+=1;NFSU2_TR(0x70c882);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70c885:L70c885:{c.instructions+=2;NFSU2_TR(0x70c885);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B70c887:{NFSU2_TR(0x70c887);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L70c949;}}
}
B70c88d:L70c88d:{c.instructions+=6;NFSU2_TR(0x70c88d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B70c890:{NFSU2_TR(0x70c890);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70c893:{NFSU2_TR(0x70c893);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+12))));
}
B70c895:{NFSU2_TR(0x70c895);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70c898:{NFSU2_TR(0x70c898);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70c89b:{NFSU2_TR(0x70c89b);
{goto L70c8a0;}
}
B70c89d:L70c89d:{c.instructions+=1;NFSU2_TR(0x70c89d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70c8a0:L70c8a0:{c.instructions+=5;NFSU2_TR(0x70c8a0);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x5ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x5ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B70c8a4:{NFSU2_TR(0x70c8a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70c8a7:{NFSU2_TR(0x70c8a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70c8aa:{NFSU2_TR(0x70c8aa);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B70c8ad:{NFSU2_TR(0x70c8ad);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L70c8f5;}}
}
B70c8af:L70c8af:{c.instructions+=2;NFSU2_TR(0x70c8af);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+8)));
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B70c8b2:{NFSU2_TR(0x70c8b2);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L70c8f5;}}
}
B70c8b4:L70c8b4:{c.instructions+=8;NFSU2_TR(0x70c8b4);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70c8b7:{NFSU2_TR(0x70c8b7);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),r4(R+12)));
w1(R+523,scarry<u32>(r4(R+0),r4(R+12)));
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+12))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B70c8b9:{NFSU2_TR(0x70c8b9);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70c8bc:{NFSU2_TR(0x70c8bc);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70c8bd:{NFSU2_TR(0x70c8bd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70c8be:{NFSU2_TR(0x70c8be);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70c8bf:{NFSU2_TR(0x70c8bf);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70c8c0:{NFSU2_TR(0x70c8c0);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b9f18),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70c8c6ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B70c8c6:L70c8c6:{c.instructions+=9;NFSU2_TR(0x70c8c6);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70c8c9:{NFSU2_TR(0x70c8c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70c8cc:{NFSU2_TR(0x70c8cc);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70c8cf:{NFSU2_TR(0x70c8cf);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),r4(R+12)));
w1(R+523,scarry<u32>(r4(R+0),r4(R+12)));
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+12))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B70c8d1:{NFSU2_TR(0x70c8d1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70c8d2:{NFSU2_TR(0x70c8d2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70c8d3:{NFSU2_TR(0x70c8d3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70c8d4:{NFSU2_TR(0x70c8d4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70c8d5:{NFSU2_TR(0x70c8d5);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b9f18),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70c8dbull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B70c8db:L70c8db:{c.instructions+=9;NFSU2_TR(0x70c8db);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70c8de:{NFSU2_TR(0x70c8de);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70c8e1:{NFSU2_TR(0x70c8e1);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70c8e4:{NFSU2_TR(0x70c8e4);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),r4(R+12)));
w1(R+523,scarry<u32>(r4(R+0),r4(R+12)));
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+12))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B70c8e6:{NFSU2_TR(0x70c8e6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70c8e7:{NFSU2_TR(0x70c8e7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70c8e8:{NFSU2_TR(0x70c8e8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70c8e9:{NFSU2_TR(0x70c8e9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70c8ea:{NFSU2_TR(0x70c8ea);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b9f18),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70c8f0ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B70c8f0:L70c8f0:{c.instructions+=2;NFSU2_TR(0x70c8f0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x48ull))));
}
B70c8f3:{NFSU2_TR(0x70c8f3);
{goto L70c934;}
}
B70c8f5:L70c8f5:{c.instructions+=3;NFSU2_TR(0x70c8f5);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+12))));
}
B70c8f7:{NFSU2_TR(0x70c8f7);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+4),r4(U+14)));
w4(U+18,u32(u32(r4(R+4))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B70c8fa:{NFSU2_TR(0x70c8fa);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L70c911;}}
}
B70c8fc:L70c8fc:{c.instructions+=7;NFSU2_TR(0x70c8fc);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70c8ff:{NFSU2_TR(0x70c8ff);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70c902:{NFSU2_TR(0x70c902);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70c903:{NFSU2_TR(0x70c903);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70c904:{NFSU2_TR(0x70c904);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70c905:{NFSU2_TR(0x70c905);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70c906:{NFSU2_TR(0x70c906);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b9f18),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70c90cull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B70c90c:L70c90c:{c.instructions+=2;NFSU2_TR(0x70c90c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B70c90f:{NFSU2_TR(0x70c90f);
{goto L70c934;}
}
B70c911:L70c911:{c.instructions+=2;NFSU2_TR(0x70c911);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+4),r4(U+14)));
w4(U+18,u32(u32(r4(R+4))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B70c914:{NFSU2_TR(0x70c914);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L70c928;}}
}
B70c916:L70c916:{c.instructions+=7;NFSU2_TR(0x70c916);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70c919:{NFSU2_TR(0x70c919);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70c91c:{NFSU2_TR(0x70c91c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70c91d:{NFSU2_TR(0x70c91d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70c91e:{NFSU2_TR(0x70c91e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70c91f:{NFSU2_TR(0x70c91f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70c920:{NFSU2_TR(0x70c920);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b9ef8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70c926ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B70c926:L70c926:{c.instructions+=1;NFSU2_TR(0x70c926);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70c90cu);}goto L70c90c;}
}
B70c928:L70c928:{c.instructions+=4;NFSU2_TR(0x70c928);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70c929:{NFSU2_TR(0x70c929);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70c92a:{NFSU2_TR(0x70c92a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70c92b:{NFSU2_TR(0x70c92b);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b9c5c),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70c931ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B70c931:L70c931:{c.instructions+=1;NFSU2_TR(0x70c931);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B70c934:L70c934:{c.instructions+=4;NFSU2_TR(0x70c934);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B70c937:{NFSU2_TR(0x70c937);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x8ull))));
}
B70c93a:{NFSU2_TR(0x70c93a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B70c93d:{NFSU2_TR(0x70c93d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70c89du);}goto L70c89d;}}
}
B70c943:L70c943:{c.instructions+=2;NFSU2_TR(0x70c943);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70c946:{NFSU2_TR(0x70c946);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70c949:L70c949:{c.instructions+=6;NFSU2_TR(0x70c949);
__builtin_memmove((R+0),(R+28),4);
}
B70c94b:{NFSU2_TR(0x70c94b);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B70c94e:{NFSU2_TR(0x70c94e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B70c951:{NFSU2_TR(0x70c951);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B70c954:{NFSU2_TR(0x70c954);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B70c957:{NFSU2_TR(0x70c957);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70c885u);}goto L70c885;}}
}
B70c95d:L70c95d:{c.instructions+=9;NFSU2_TR(0x70c95d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70c963:{NFSU2_TR(0x70c963);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B70c966:{NFSU2_TR(0x70c966);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+0))));
}
B70c968:{NFSU2_TR(0x70c968);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70c96b:{NFSU2_TR(0x70c96b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B70c96e:{NFSU2_TR(0x70c96e);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+12))));
}
B70c970:{NFSU2_TR(0x70c970);
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
B70c972:{NFSU2_TR(0x70c972);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70c975:{NFSU2_TR(0x70c975);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L70ca53;}}
}
B70c97b:L70c97b:{c.instructions+=1;NFSU2_TR(0x70c97b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70c97e:L70c97e:{c.instructions+=2;NFSU2_TR(0x70c97e);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B70c980:{NFSU2_TR(0x70c980);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L70ca3f;}}
}
B70c986:L70c986:{c.instructions+=6;NFSU2_TR(0x70c986);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B70c989:{NFSU2_TR(0x70c989);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70c98c:{NFSU2_TR(0x70c98c);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+12))));
}
B70c98e:{NFSU2_TR(0x70c98e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70c991:{NFSU2_TR(0x70c991);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70c994:{NFSU2_TR(0x70c994);
{goto L70c999;}
}
B70c996:L70c996:{c.instructions+=1;NFSU2_TR(0x70c996);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70c999:L70c999:{c.instructions+=5;NFSU2_TR(0x70c999);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x5ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x5ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B70c99d:{NFSU2_TR(0x70c99d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70c9a0:{NFSU2_TR(0x70c9a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70c9a3:{NFSU2_TR(0x70c9a3);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B70c9a6:{NFSU2_TR(0x70c9a6);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L70c9ee;}}
}
B70c9a8:L70c9a8:{c.instructions+=2;NFSU2_TR(0x70c9a8);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+8)));
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B70c9ab:{NFSU2_TR(0x70c9ab);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L70c9ee;}}
}
B70c9ad:L70c9ad:{c.instructions+=8;NFSU2_TR(0x70c9ad);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70c9b0:{NFSU2_TR(0x70c9b0);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),r4(R+12)));
w1(R+523,scarry<u32>(r4(R+0),r4(R+12)));
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+12))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B70c9b2:{NFSU2_TR(0x70c9b2);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70c9b5:{NFSU2_TR(0x70c9b5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70c9b6:{NFSU2_TR(0x70c9b6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70c9b7:{NFSU2_TR(0x70c9b7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70c9b8:{NFSU2_TR(0x70c9b8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70c9b9:{NFSU2_TR(0x70c9b9);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b9f18),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70c9bfull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B70c9bf:L70c9bf:{c.instructions+=9;NFSU2_TR(0x70c9bf);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70c9c2:{NFSU2_TR(0x70c9c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70c9c5:{NFSU2_TR(0x70c9c5);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70c9c8:{NFSU2_TR(0x70c9c8);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),r4(R+12)));
w1(R+523,scarry<u32>(r4(R+0),r4(R+12)));
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+12))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B70c9ca:{NFSU2_TR(0x70c9ca);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70c9cb:{NFSU2_TR(0x70c9cb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70c9cc:{NFSU2_TR(0x70c9cc);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70c9cd:{NFSU2_TR(0x70c9cd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70c9ce:{NFSU2_TR(0x70c9ce);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b9f18),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70c9d4ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B70c9d4:L70c9d4:{c.instructions+=9;NFSU2_TR(0x70c9d4);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70c9d7:{NFSU2_TR(0x70c9d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70c9da:{NFSU2_TR(0x70c9da);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70c9dd:{NFSU2_TR(0x70c9dd);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),r4(R+12)));
w1(R+523,scarry<u32>(r4(R+0),r4(R+12)));
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+12))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B70c9df:{NFSU2_TR(0x70c9df);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70c9e0:{NFSU2_TR(0x70c9e0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70c9e1:{NFSU2_TR(0x70c9e1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70c9e2:{NFSU2_TR(0x70c9e2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70c9e3:{NFSU2_TR(0x70c9e3);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b9f18),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70c9e9ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B70c9e9:L70c9e9:{c.instructions+=2;NFSU2_TR(0x70c9e9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x48ull))));
}
B70c9ec:{NFSU2_TR(0x70c9ec);
{goto L70ca2d;}
}
B70c9ee:L70c9ee:{c.instructions+=3;NFSU2_TR(0x70c9ee);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+12))));
}
B70c9f0:{NFSU2_TR(0x70c9f0);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+4),r4(U+14)));
w4(U+18,u32(u32(r4(R+4))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B70c9f3:{NFSU2_TR(0x70c9f3);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L70ca0a;}}
}
B70c9f5:L70c9f5:{c.instructions+=7;NFSU2_TR(0x70c9f5);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70c9f8:{NFSU2_TR(0x70c9f8);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70c9fb:{NFSU2_TR(0x70c9fb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70c9fc:{NFSU2_TR(0x70c9fc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70c9fd:{NFSU2_TR(0x70c9fd);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70c9fe:{NFSU2_TR(0x70c9fe);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70c9ff:{NFSU2_TR(0x70c9ff);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b9f18),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70ca05ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B70ca05:L70ca05:{c.instructions+=2;NFSU2_TR(0x70ca05);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B70ca08:{NFSU2_TR(0x70ca08);
{goto L70ca2d;}
}
B70ca0a:L70ca0a:{c.instructions+=2;NFSU2_TR(0x70ca0a);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+4),r4(U+14)));
w4(U+18,u32(u32(r4(R+4))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B70ca0d:{NFSU2_TR(0x70ca0d);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L70ca21;}}
}
B70ca0f:L70ca0f:{c.instructions+=7;NFSU2_TR(0x70ca0f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70ca12:{NFSU2_TR(0x70ca12);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70ca15:{NFSU2_TR(0x70ca15);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70ca16:{NFSU2_TR(0x70ca16);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70ca17:{NFSU2_TR(0x70ca17);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70ca18:{NFSU2_TR(0x70ca18);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70ca19:{NFSU2_TR(0x70ca19);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b9ef8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70ca1full));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B70ca1f:L70ca1f:{c.instructions+=1;NFSU2_TR(0x70ca1f);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70ca05u);}goto L70ca05;}
}
B70ca21:L70ca21:{c.instructions+=4;NFSU2_TR(0x70ca21);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70ca22:{NFSU2_TR(0x70ca22);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70ca23:{NFSU2_TR(0x70ca23);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70ca24:{NFSU2_TR(0x70ca24);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b9c5c),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70ca2aull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B70ca2a:L70ca2a:{c.instructions+=1;NFSU2_TR(0x70ca2a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B70ca2d:L70ca2d:{c.instructions+=4;NFSU2_TR(0x70ca2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B70ca30:{NFSU2_TR(0x70ca30);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x8ull))));
}
B70ca33:{NFSU2_TR(0x70ca33);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B70ca36:{NFSU2_TR(0x70ca36);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70c996u);}goto L70c996;}}
}
B70ca3c:L70ca3c:{c.instructions+=1;NFSU2_TR(0x70ca3c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70ca3f:L70ca3f:{c.instructions+=6;NFSU2_TR(0x70ca3f);
__builtin_memmove((R+0),(R+28),4);
}
B70ca41:{NFSU2_TR(0x70ca41);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B70ca44:{NFSU2_TR(0x70ca44);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B70ca47:{NFSU2_TR(0x70ca47);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,carry<u32>(r4(U+4),r4(R+0)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B70ca4a:{NFSU2_TR(0x70ca4a);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,sborrow<u32>(r4(U+4),u32(0x1ull)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
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
B70ca4d:{NFSU2_TR(0x70ca4d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70c97eu);}goto L70c97e;}}
}
B70ca53:L70ca53:{c.instructions+=5;NFSU2_TR(0x70ca53);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B70ca54:{NFSU2_TR(0x70ca54);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B70ca55:{NFSU2_TR(0x70ca55);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B70ca56:{NFSU2_TR(0x70ca56);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B70ca57:{NFSU2_TR(0x70ca57);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B70ca58:L70ca58:{c.instructions+=9;NFSU2_TR(0x70ca58);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70ca59:{NFSU2_TR(0x70ca59);
__builtin_memmove((R+20),(R+16),4);
}
B70ca5b:{NFSU2_TR(0x70ca5b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70ca5c:{NFSU2_TR(0x70ca5c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70ca5d:{NFSU2_TR(0x70ca5d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70ca60:{NFSU2_TR(0x70ca60);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70ca61:{NFSU2_TR(0x70ca61);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70ca62:{NFSU2_TR(0x70ca62);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x8ull));
s4(u32(r4(U+0)),r4(U+4));
}
B70ca69:{NFSU2_TR(0x70ca69);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70ca6a:L70ca6a:{c.instructions+=5;NFSU2_TR(0x70ca6a);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B70ca6e:{NFSU2_TR(0x70ca6e);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+24,u32(r1(U+4)));
}
B70ca72:{NFSU2_TR(0x70ca72);
__builtin_memmove((R+12),(R+8),4);
}
B70ca74:{NFSU2_TR(0x70ca74);
w1(R+512,u8((r4(R+12))<(r4(R+24))));
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+24))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
}
B70ca76:{NFSU2_TR(0x70ca76);
if(r1(R+518)){{goto L70cad9;}}
}
B70ca78:L70ca78:{c.instructions+=31;NFSU2_TR(0x70ca78);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
w4(R+0,u32(r1(U+0)));
}
B70ca7b:{NFSU2_TR(0x70ca7b);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+28,u32(r1(U+4)));
}
B70ca7f:{NFSU2_TR(0x70ca7f);
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+0))));
}
B70ca81:{NFSU2_TR(0x70ca81);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+12),(U+8),4);
}
B70ca85:{NFSU2_TR(0x70ca85);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+24))));
}
B70ca87:{NFSU2_TR(0x70ca87);
__builtin_memmove((R+0),(R+28),4);
}
B70ca89:{NFSU2_TR(0x70ca89);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B70ca8b:{NFSU2_TR(0x70ca8b);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+0))));
}
B70ca8d:{NFSU2_TR(0x70ca8d);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+12,sar<u32>(r4(R+12),u64(r4(U+0))));
}
B70ca90:{NFSU2_TR(0x70ca90);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70ca93:{NFSU2_TR(0x70ca93);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))|u32(r4(U+4))));
}
B70ca96:{NFSU2_TR(0x70ca96);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B70ca99:{NFSU2_TR(0x70ca99);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B70ca9c:{NFSU2_TR(0x70ca9c);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+12,u32(r1(U+4)));
}
B70caa0:{NFSU2_TR(0x70caa0);
u8 U[13];
w4(U+0,u32(u32(u32(0x8ba020ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+12),(U+12),1);
}
B70caa7:{NFSU2_TR(0x70caa7);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+24))));
}
B70caa9:{NFSU2_TR(0x70caa9);
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w4(R+0,u32(0-u32(r4(R+0))));
}
B70caab:{NFSU2_TR(0x70caab);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B70caad:{NFSU2_TR(0x70caad);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B70caae:{NFSU2_TR(0x70caae);
w4(R+24,sar<u32>(r4(R+24),u64(u32(0x1ull))));
}
B70cab0:{NFSU2_TR(0x70cab0);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+24)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B70cab3:{NFSU2_TR(0x70cab3);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B70cab6:{NFSU2_TR(0x70cab6);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ba020ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B70cabc:{NFSU2_TR(0x70cabc);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B70cabf:{NFSU2_TR(0x70cabf);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
w4(R+8,u32(r1(U+0)));
}
B70cac2:{NFSU2_TR(0x70cac2);
u8 U[13];
w4(U+0,u32(u32(u32(0x8ba020ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+8),(U+12),1);
}
B70cac9:{NFSU2_TR(0x70cac9);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+0))));
}
B70cacb:{NFSU2_TR(0x70cacb);
u8 U[1];
__builtin_memmove((U+0),(R+8),1);
s1(u32(r4(R+4)),r1(U+0));
}
B70cacd:{NFSU2_TR(0x70cacd);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ba020ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B70cad3:{NFSU2_TR(0x70cad3);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B70cad6:{NFSU2_TR(0x70cad6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,carry<u32>(r4(R+4),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B70cad9:L70cad9:{c.instructions+=2;NFSU2_TR(0x70cad9);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,sborrow<u32>(r4(U+4),u32(0x1ull)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
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
B70cadc:{NFSU2_TR(0x70cadc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70ca6au);}goto L70ca6a;}}
}
B70cade:L70cade:{c.instructions+=5;NFSU2_TR(0x70cade);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B70cadf:{NFSU2_TR(0x70cadf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B70cae0:{NFSU2_TR(0x70cae0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B70cae1:{NFSU2_TR(0x70cae1);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B70cae2:{NFSU2_TR(0x70cae2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B70cae3:L70cae3:{c.instructions+=12;NFSU2_TR(0x70cae3);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70cae4:{NFSU2_TR(0x70cae4);
__builtin_memmove((R+20),(R+16),4);
}
B70cae6:{NFSU2_TR(0x70cae6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B70cae9:{NFSU2_TR(0x70cae9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70caec:{NFSU2_TR(0x70caec);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70caed:{NFSU2_TR(0x70caed);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B70caf0:{NFSU2_TR(0x70caf0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70caf1:{NFSU2_TR(0x70caf1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70caf2:{NFSU2_TR(0x70caf2);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B70caf5:{NFSU2_TR(0x70caf5);
__builtin_memmove((R+28),(R+4),4);
}
B70caf7:{NFSU2_TR(0x70caf7);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+0))));
}
B70caf9:{NFSU2_TR(0x70caf9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
w4(U+4,u32(0x8ull));
s4(u32(r4(U+0)),r4(U+4));
}
B70cb00:L70cb00:{c.instructions+=11;NFSU2_TR(0x70cb00);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
w4(R+0,u32(r1(U+0)));
}
B70cb03:{NFSU2_TR(0x70cb03);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B70cb06:{NFSU2_TR(0x70cb06);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
w4(R+24,u32(r1(U+0)));
}
B70cb09:{NFSU2_TR(0x70cb09);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+24))));
}
B70cb0b:{NFSU2_TR(0x70cb0b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B70cb0e:{NFSU2_TR(0x70cb0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70cb11:{NFSU2_TR(0x70cb11);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
w4(R+0,u32(r1(U+0)));
}
B70cb14:{NFSU2_TR(0x70cb14);
__builtin_memmove((R+12),(R+0),4);
}
B70cb16:{NFSU2_TR(0x70cb16);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+24))));
}
B70cb18:{NFSU2_TR(0x70cb18);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B70cb1a:{NFSU2_TR(0x70cb1a);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L70cb25;}}
}
B70cb1c:L70cb1c:{c.instructions+=4;NFSU2_TR(0x70cb1c);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
w4(R+12,u32(r1(U+0)));
}
B70cb1f:{NFSU2_TR(0x70cb1f);
__builtin_memmove((R+24),(R+0),4);
}
B70cb21:{NFSU2_TR(0x70cb21);
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+12))));
}
B70cb23:{NFSU2_TR(0x70cb23);
{goto L70cb2a;}
}
B70cb25:L70cb25:{c.instructions+=2;NFSU2_TR(0x70cb25);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
w4(R+24,u32(r1(U+0)));
}
B70cb28:{NFSU2_TR(0x70cb28);
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+0))));
}
B70cb2a:L70cb2a:{c.instructions+=2;NFSU2_TR(0x70cb2a);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B70cb2d:{NFSU2_TR(0x70cb2d);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L70cb56;}}
}
B70cb2f:L70cb2f:{c.instructions+=6;NFSU2_TR(0x70cb2f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B70cb32:{NFSU2_TR(0x70cb32);
u8 U[9];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+24,u32(r1(U+8)));
}
B70cb36:{NFSU2_TR(0x70cb36);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
w4(R+12,u32(r1(U+0)));
}
B70cb39:{NFSU2_TR(0x70cb39);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+24))));
}
B70cb3b:{NFSU2_TR(0x70cb3b);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B70cb3d:{NFSU2_TR(0x70cb3d);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L70cb43;}}
}
B70cb3f:L70cb3f:{c.instructions+=2;NFSU2_TR(0x70cb3f);
__builtin_memmove((R+24),(R+12),4);
}
B70cb41:{NFSU2_TR(0x70cb41);
{goto L70cb48;}
}
B70cb43:L70cb43:{c.instructions+=2;NFSU2_TR(0x70cb43);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
w4(R+12,u32(r1(U+0)));
}
B70cb46:{NFSU2_TR(0x70cb46);
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+12))));
}
B70cb48:L70cb48:{c.instructions+=2;NFSU2_TR(0x70cb48);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B70cb4b:{NFSU2_TR(0x70cb4b);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L70cb56;}}
}
B70cb4d:L70cb4d:{c.instructions+=3;NFSU2_TR(0x70cb4d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B70cb51:{NFSU2_TR(0x70cb51);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B70cb54:{NFSU2_TR(0x70cb54);
{goto L70cb69;}
}
B70cb56:L70cb56:{c.instructions+=5;NFSU2_TR(0x70cb56);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B70cb59:{NFSU2_TR(0x70cb59);
u8 U[9];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+24,u32(r1(U+8)));
}
B70cb5d:{NFSU2_TR(0x70cb5d);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+24))));
}
B70cb5f:{NFSU2_TR(0x70cb5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B70cb62:{NFSU2_TR(0x70cb62);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B70cb69:L70cb69:{c.instructions+=14;NFSU2_TR(0x70cb69);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70cb6c:{NFSU2_TR(0x70cb6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B70cb6f:{NFSU2_TR(0x70cb6f);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B70cb72:{NFSU2_TR(0x70cb72);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B70cb75:{NFSU2_TR(0x70cb75);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B70cb78:{NFSU2_TR(0x70cb78);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
w4(R+0,u32(r1(U+0)));
}
B70cb7b:{NFSU2_TR(0x70cb7b);
u8 U[13];
w4(U+0,u32(u32(u32(0x8ba020ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+0),(U+12),1);
}
B70cb82:{NFSU2_TR(0x70cb82);
u8 U[1];
__builtin_memmove((U+0),(R+0),1);
s1(u32(r4(R+8)),r1(U+0));
}
B70cb84:{NFSU2_TR(0x70cb84);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
w4(R+0,u32(r1(U+0)));
}
B70cb87:{NFSU2_TR(0x70cb87);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+24))));
}
B70cb89:{NFSU2_TR(0x70cb89);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B70cb8d:{NFSU2_TR(0x70cb8d);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ba020ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B70cb93:{NFSU2_TR(0x70cb93);
u8 U[1];
__builtin_memmove((U+0),(R+0),1);
s1(u32(r4(R+4)),r1(U+0));
}
B70cb95:{NFSU2_TR(0x70cb95);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L70cbb4;}}
}
B70cb97:L70cb97:{c.instructions+=8;NFSU2_TR(0x70cb97);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
w4(R+0,u32(r1(U+0)));
}
B70cb9a:{NFSU2_TR(0x70cb9a);
w4(R+24,sar<u32>(r4(R+24),u64(u32(0x1ull))));
}
B70cb9c:{NFSU2_TR(0x70cb9c);
u8 U[13];
w4(U+0,u32(u32(u32(0x8ba020ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+0),(U+12),1);
}
B70cba3:{NFSU2_TR(0x70cba3);
u8 U[1];
__builtin_memmove((U+0),(R+0),1);
s1(u32(r4(R+28)),r1(U+0));
}
B70cba5:{NFSU2_TR(0x70cba5);
u8 U[9];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+0,u32(r1(U+8)));
}
B70cba9:{NFSU2_TR(0x70cba9);
w1(R+512,u8((r4(R+0))<(r4(R+24))));
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+24))));
}
B70cbab:{NFSU2_TR(0x70cbab);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ba020ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B70cbb1:{NFSU2_TR(0x70cbb1);
u8 U[9];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),1);
s1(u32(r4(U+4)),r1(U+8));
}
B70cbb4:L70cbb4:{c.instructions+=4;NFSU2_TR(0x70cbb4);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B70cbb5:{NFSU2_TR(0x70cbb5);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B70cbb6:{NFSU2_TR(0x70cbb6);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,sborrow<u32>(r4(U+4),u32(0x1ull)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
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
B70cbb9:{NFSU2_TR(0x70cbb9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70cb00u);}goto L70cb00;}}
}
B70cbbf:L70cbbf:{c.instructions+=5;NFSU2_TR(0x70cbbf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B70cbc0:{NFSU2_TR(0x70cbc0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B70cbc1:{NFSU2_TR(0x70cbc1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B70cbc2:{NFSU2_TR(0x70cbc2);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B70cbc3:{NFSU2_TR(0x70cbc3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B70cbc4:L70cbc4:{c.instructions+=9;NFSU2_TR(0x70cbc4);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70cbc5:{NFSU2_TR(0x70cbc5);
__builtin_memmove((R+20),(R+16),4);
}
B70cbc7:{NFSU2_TR(0x70cbc7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70cbc8:{NFSU2_TR(0x70cbc8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70cbc9:{NFSU2_TR(0x70cbc9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70cbcc:{NFSU2_TR(0x70cbcc);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70cbcd:{NFSU2_TR(0x70cbcd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70cbce:{NFSU2_TR(0x70cbce);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w4(U+4,u32(0x8ull));
s4(u32(r4(U+0)),r4(U+4));
}
B70cbd5:{NFSU2_TR(0x70cbd5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70cbd6:L70cbd6:{c.instructions+=10;NFSU2_TR(0x70cbd6);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w4(R+24,u32(r1(U+0)));
}
B70cbd9:{NFSU2_TR(0x70cbd9);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B70cbdd:{NFSU2_TR(0x70cbdd);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+12,u32(r1(U+4)));
}
B70cbe1:{NFSU2_TR(0x70cbe1);
__builtin_memmove((R+28),(R+24),4);
}
B70cbe3:{NFSU2_TR(0x70cbe3);
__builtin_memmove((R+4),(R+8),4);
}
B70cbe5:{NFSU2_TR(0x70cbe5);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+12))));
}
B70cbe7:{NFSU2_TR(0x70cbe7);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+12))));
}
B70cbe9:{NFSU2_TR(0x70cbe9);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B70cbeb:{NFSU2_TR(0x70cbeb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B70cbee:{NFSU2_TR(0x70cbee);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L70cbf4;}}
}
B70cbf0:L70cbf0:{c.instructions+=2;NFSU2_TR(0x70cbf0);
__builtin_memmove((R+28),(R+12),4);
}
B70cbf2:{NFSU2_TR(0x70cbf2);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+24))));
}
B70cbf4:L70cbf4:{c.instructions+=2;NFSU2_TR(0x70cbf4);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B70cbf7:{NFSU2_TR(0x70cbf7);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L70cc14;}}
}
B70cbf9:L70cbf9:{c.instructions+=5;NFSU2_TR(0x70cbf9);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+28,u32(r1(U+4)));
}
B70cbfd:{NFSU2_TR(0x70cbfd);
__builtin_memmove((R+24),(R+8),4);
}
B70cbff:{NFSU2_TR(0x70cbff);
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+28))));
}
B70cc01:{NFSU2_TR(0x70cc01);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B70cc03:{NFSU2_TR(0x70cc03);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L70cc09;}}
}
B70cc05:L70cc05:{c.instructions+=2;NFSU2_TR(0x70cc05);
__builtin_memmove((R+24),(R+28),4);
}
B70cc07:{NFSU2_TR(0x70cc07);
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+8))));
}
B70cc09:L70cc09:{c.instructions+=2;NFSU2_TR(0x70cc09);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B70cc0c:{NFSU2_TR(0x70cc0c);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L70cc14;}}
}
B70cc0e:L70cc0e:{c.instructions+=2;NFSU2_TR(0x70cc0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B70cc12:{NFSU2_TR(0x70cc12);
{goto L70cc26;}
}
B70cc14:L70cc14:{c.instructions+=5;NFSU2_TR(0x70cc14);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+28,u32(r1(U+4)));
}
B70cc18:{NFSU2_TR(0x70cc18);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w4(R+24,u32(r1(U+0)));
}
B70cc1b:{NFSU2_TR(0x70cc1b);
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+28))));
}
B70cc1d:{NFSU2_TR(0x70cc1d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B70cc24:{NFSU2_TR(0x70cc24);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+24))));
}
B70cc26:L70cc26:{c.instructions+=11;NFSU2_TR(0x70cc26);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B70cc29:{NFSU2_TR(0x70cc29);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B70cc2c:{NFSU2_TR(0x70cc2c);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+4,sar<u32>(r4(R+4),u64(r4(U+0))));
}
B70cc2f:{NFSU2_TR(0x70cc2f);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B70cc32:{NFSU2_TR(0x70cc32);
u8 U[13];
w4(U+0,u32(u32(u32(0x8ba020ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+4),(U+12),1);
}
B70cc39:{NFSU2_TR(0x70cc39);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+24))));
}
B70cc3b:{NFSU2_TR(0x70cc3b);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B70cc3f:{NFSU2_TR(0x70cc3f);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B70cc42:{NFSU2_TR(0x70cc42);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ba020ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B70cc48:{NFSU2_TR(0x70cc48);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B70cc4b:{NFSU2_TR(0x70cc4b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L70cc66;}}
}
B70cc4d:L70cc4d:{c.instructions+=7;NFSU2_TR(0x70cc4d);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w4(R+4,u32(r1(U+0)));
}
B70cc50:{NFSU2_TR(0x70cc50);
w4(R+24,sar<u32>(r4(R+24),u64(u32(0x1ull))));
}
B70cc52:{NFSU2_TR(0x70cc52);
u8 U[13];
w4(U+0,u32(u32(u32(0x8ba020ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+4),(U+12),1);
}
B70cc59:{NFSU2_TR(0x70cc59);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+24))));
}
B70cc5b:{NFSU2_TR(0x70cc5b);
u8 U[1];
__builtin_memmove((U+0),(R+4),1);
s1(u32(r4(R+0)),r1(U+0));
}
B70cc5d:{NFSU2_TR(0x70cc5d);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ba020ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B70cc63:{NFSU2_TR(0x70cc63);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B70cc66:L70cc66:{c.instructions+=3;NFSU2_TR(0x70cc66);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,carry<u32>(r4(R+0),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B70cc69:{NFSU2_TR(0x70cc69);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,sborrow<u32>(r4(U+4),u32(0x1ull)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
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
B70cc6c:{NFSU2_TR(0x70cc6c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70cbd6u);}goto L70cbd6;}}
}
B70cc72:L70cc72:{c.instructions+=5;NFSU2_TR(0x70cc72);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B70cc73:{NFSU2_TR(0x70cc73);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B70cc74:{NFSU2_TR(0x70cc74);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B70cc75:{NFSU2_TR(0x70cc75);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B70cc76:{NFSU2_TR(0x70cc76);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B70cc77:L70cc77:{c.instructions+=12;NFSU2_TR(0x70cc77);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70cc78:{NFSU2_TR(0x70cc78);
__builtin_memmove((R+20),(R+16),4);
}
B70cc7a:{NFSU2_TR(0x70cc7a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B70cc7d:{NFSU2_TR(0x70cc7d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70cc80:{NFSU2_TR(0x70cc80);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70cc81:{NFSU2_TR(0x70cc81);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B70cc84:{NFSU2_TR(0x70cc84);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70cc85:{NFSU2_TR(0x70cc85);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70cc86:{NFSU2_TR(0x70cc86);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B70cc89:{NFSU2_TR(0x70cc89);
__builtin_memmove((R+28),(R+4),4);
}
B70cc8b:{NFSU2_TR(0x70cc8b);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+0))));
}
B70cc8d:{NFSU2_TR(0x70cc8d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
w4(U+4,u32(0x8ull));
s4(u32(r4(U+0)),r4(U+4));
}
B70cc94:L70cc94:{c.instructions+=11;NFSU2_TR(0x70cc94);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
w4(R+0,u32(r1(U+0)));
}
B70cc97:{NFSU2_TR(0x70cc97);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B70cc9a:{NFSU2_TR(0x70cc9a);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
w4(R+24,u32(r1(U+0)));
}
B70cc9d:{NFSU2_TR(0x70cc9d);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+24))));
}
B70cc9f:{NFSU2_TR(0x70cc9f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B70cca2:{NFSU2_TR(0x70cca2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70cca5:{NFSU2_TR(0x70cca5);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
w4(R+0,u32(r1(U+0)));
}
B70cca8:{NFSU2_TR(0x70cca8);
__builtin_memmove((R+12),(R+0),4);
}
B70ccaa:{NFSU2_TR(0x70ccaa);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+24))));
}
B70ccac:{NFSU2_TR(0x70ccac);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B70ccae:{NFSU2_TR(0x70ccae);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L70ccb9;}}
}
B70ccb0:L70ccb0:{c.instructions+=4;NFSU2_TR(0x70ccb0);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
w4(R+12,u32(r1(U+0)));
}
B70ccb3:{NFSU2_TR(0x70ccb3);
__builtin_memmove((R+24),(R+0),4);
}
B70ccb5:{NFSU2_TR(0x70ccb5);
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+12))));
}
B70ccb7:{NFSU2_TR(0x70ccb7);
{goto L70ccbe;}
}
B70ccb9:L70ccb9:{c.instructions+=2;NFSU2_TR(0x70ccb9);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
w4(R+24,u32(r1(U+0)));
}
B70ccbc:{NFSU2_TR(0x70ccbc);
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+0))));
}
B70ccbe:L70ccbe:{c.instructions+=2;NFSU2_TR(0x70ccbe);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B70ccc1:{NFSU2_TR(0x70ccc1);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L70ccea;}}
}
B70ccc3:L70ccc3:{c.instructions+=6;NFSU2_TR(0x70ccc3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B70ccc6:{NFSU2_TR(0x70ccc6);
u8 U[9];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+24,u32(r1(U+8)));
}
B70ccca:{NFSU2_TR(0x70ccca);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
w4(R+12,u32(r1(U+0)));
}
B70cccd:{NFSU2_TR(0x70cccd);
w4(R+12,u32(u32(r4(R+12))-u32(r4(R+24))));
}
B70cccf:{NFSU2_TR(0x70cccf);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B70ccd1:{NFSU2_TR(0x70ccd1);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L70ccd7;}}
}
B70ccd3:L70ccd3:{c.instructions+=2;NFSU2_TR(0x70ccd3);
__builtin_memmove((R+24),(R+12),4);
}
B70ccd5:{NFSU2_TR(0x70ccd5);
{goto L70ccdc;}
}
B70ccd7:L70ccd7:{c.instructions+=2;NFSU2_TR(0x70ccd7);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
w4(R+12,u32(r1(U+0)));
}
B70ccda:{NFSU2_TR(0x70ccda);
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+12))));
}
B70ccdc:L70ccdc:{c.instructions+=2;NFSU2_TR(0x70ccdc);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B70ccdf:{NFSU2_TR(0x70ccdf);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L70ccea;}}
}
B70cce1:L70cce1:{c.instructions+=3;NFSU2_TR(0x70cce1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B70cce5:{NFSU2_TR(0x70cce5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B70cce8:{NFSU2_TR(0x70cce8);
{goto L70ccfd;}
}
B70ccea:L70ccea:{c.instructions+=5;NFSU2_TR(0x70ccea);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B70cced:{NFSU2_TR(0x70cced);
u8 U[9];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+24,u32(r1(U+8)));
}
B70ccf1:{NFSU2_TR(0x70ccf1);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+24))));
}
B70ccf3:{NFSU2_TR(0x70ccf3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B70ccf6:{NFSU2_TR(0x70ccf6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B70ccfd:L70ccfd:{c.instructions+=14;NFSU2_TR(0x70ccfd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70cd00:{NFSU2_TR(0x70cd00);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B70cd03:{NFSU2_TR(0x70cd03);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B70cd06:{NFSU2_TR(0x70cd06);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B70cd09:{NFSU2_TR(0x70cd09);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B70cd0c:{NFSU2_TR(0x70cd0c);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
w4(R+0,u32(r1(U+0)));
}
B70cd0f:{NFSU2_TR(0x70cd0f);
u8 U[13];
w4(U+0,u32(u32(u32(0x8ba020ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+0),(U+12),1);
}
B70cd16:{NFSU2_TR(0x70cd16);
u8 U[1];
__builtin_memmove((U+0),(R+0),1);
s1(u32(r4(R+8)),r1(U+0));
}
B70cd18:{NFSU2_TR(0x70cd18);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
w4(R+0,u32(r1(U+0)));
}
B70cd1b:{NFSU2_TR(0x70cd1b);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+24))));
}
B70cd1d:{NFSU2_TR(0x70cd1d);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B70cd21:{NFSU2_TR(0x70cd21);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ba020ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B70cd27:{NFSU2_TR(0x70cd27);
u8 U[1];
__builtin_memmove((U+0),(R+0),1);
s1(u32(r4(R+4)),r1(U+0));
}
B70cd29:{NFSU2_TR(0x70cd29);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L70cd48;}}
}
B70cd2b:L70cd2b:{c.instructions+=8;NFSU2_TR(0x70cd2b);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
w4(R+0,u32(r1(U+0)));
}
B70cd2e:{NFSU2_TR(0x70cd2e);
w4(R+24,sar<u32>(r4(R+24),u64(u32(0x1ull))));
}
B70cd30:{NFSU2_TR(0x70cd30);
u8 U[13];
w4(U+0,u32(u32(u32(0x8ba020ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+0),(U+12),1);
}
B70cd37:{NFSU2_TR(0x70cd37);
u8 U[1];
__builtin_memmove((U+0),(R+0),1);
s1(u32(r4(R+28)),r1(U+0));
}
B70cd39:{NFSU2_TR(0x70cd39);
u8 U[9];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+0,u32(r1(U+8)));
}
B70cd3d:{NFSU2_TR(0x70cd3d);
w1(R+512,u8((r4(R+0))<(r4(R+24))));
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+24))));
}
B70cd3f:{NFSU2_TR(0x70cd3f);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ba020ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B70cd45:{NFSU2_TR(0x70cd45);
u8 U[9];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),1);
s1(u32(r4(U+4)),r1(U+8));
}
B70cd48:L70cd48:{c.instructions+=4;NFSU2_TR(0x70cd48);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B70cd49:{NFSU2_TR(0x70cd49);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B70cd4a:{NFSU2_TR(0x70cd4a);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,sborrow<u32>(r4(U+4),u32(0x1ull)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
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
B70cd4d:{NFSU2_TR(0x70cd4d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70cc94u);}goto L70cc94;}}
}
B70cd53:L70cd53:{c.instructions+=5;NFSU2_TR(0x70cd53);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B70cd54:{NFSU2_TR(0x70cd54);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B70cd55:{NFSU2_TR(0x70cd55);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B70cd56:{NFSU2_TR(0x70cd56);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B70cd57:{NFSU2_TR(0x70cd57);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B70cd58:L70cd58:{c.instructions+=17;NFSU2_TR(0x70cd58);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70cd59:{NFSU2_TR(0x70cd59);
__builtin_memmove((R+20),(R+16),4);
}
B70cd5b:{NFSU2_TR(0x70cd5b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x1cull))));
}
B70cd5e:{NFSU2_TR(0x70cd5e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70cd5f:{NFSU2_TR(0x70cd5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B70cd62:{NFSU2_TR(0x70cd62);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70cd68:{NFSU2_TR(0x70cd68);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70cd6b:{NFSU2_TR(0x70cd6b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70cd71:{NFSU2_TR(0x70cd71);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70cd72:{NFSU2_TR(0x70cd72);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B70cd74:{NFSU2_TR(0x70cd74);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(u32(0x2ull))));
w1(R+523,sborrow<u32>(r4(U+10),u32(0x2ull)));
w4(U+14,u32(u32(r4(U+10))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B70cd77:{NFSU2_TR(0x70cd77);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70cd7a:{NFSU2_TR(0x70cd7a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70cd7d:{NFSU2_TR(0x70cd7d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70cd7e:{NFSU2_TR(0x70cd7e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70cd81:{NFSU2_TR(0x70cd81);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70cd84:{NFSU2_TR(0x70cd84);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L70cd91;}}
}
B70cd86:L70cd86:{c.instructions+=3;NFSU2_TR(0x70cd86);
__builtin_memmove((R+4),gp(0x8b9c4c),4);
}
B70cd8c:{NFSU2_TR(0x70cd8c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B70cd8f:{NFSU2_TR(0x70cd8f);
{goto L70cd98;}
}
B70cd91:L70cd91:{c.instructions+=1;NFSU2_TR(0x70cd91);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7c57f8ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B70cd98:L70cd98:{c.instructions+=3;NFSU2_TR(0x70cd98);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70cd99:{NFSU2_TR(0x70cd99);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70cd9a:{NFSU2_TR(0x70cd9a);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b9ebc),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70cda0ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B70cda0:L70cda0:{c.instructions+=4;NFSU2_TR(0x70cda0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B70cda1:{NFSU2_TR(0x70cda1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B70cda2:{NFSU2_TR(0x70cda2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70cda5:{NFSU2_TR(0x70cda5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70cda8:L70cda8:{c.instructions+=3;NFSU2_TR(0x70cda8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70cdab:{NFSU2_TR(0x70cdab);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B70cdae:{NFSU2_TR(0x70cdae);
if(r1(R+518)){{goto L70ce01;}}
}
B70cdb0:L70cdb0:{c.instructions+=2;NFSU2_TR(0x70cdb0);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B70cdb1:{NFSU2_TR(0x70cdb1);
if(r1(R+518)){{goto L70cddd;}}
}
B70cdb3:L70cdb3:{c.instructions+=2;NFSU2_TR(0x70cdb3);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B70cdb4:{NFSU2_TR(0x70cdb4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L70ce22;}}
}
B70cdb6:L70cdb6:{c.instructions+=10;NFSU2_TR(0x70cdb6);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70cdbc:{NFSU2_TR(0x70cdbc);
w4(R+0,shr<u32>(r4(R+0),u64(u32(0x1ull))));
}
B70cdbe:{NFSU2_TR(0x70cdbe);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70cdc1:{NFSU2_TR(0x70cdc1);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70cdc7:{NFSU2_TR(0x70cdc7);
w4(R+0,shr<u32>(r4(R+0),u64(u32(0x1ull))));
}
B70cdc9:{NFSU2_TR(0x70cdc9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70cdcc:{NFSU2_TR(0x70cdcc);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70cdd2:{NFSU2_TR(0x70cdd2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70cdd5:{NFSU2_TR(0x70cdd5);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70cddb:{NFSU2_TR(0x70cddb);
{goto L70ce1f;}
}
B70cddd:L70cddd:{c.instructions+=10;NFSU2_TR(0x70cddd);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70cde3:{NFSU2_TR(0x70cde3);
w4(R+0,shr<u32>(r4(R+0),u64(u32(0x1ull))));
}
B70cde5:{NFSU2_TR(0x70cde5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70cde8:{NFSU2_TR(0x70cde8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70cdee:{NFSU2_TR(0x70cdee);
w4(R+0,shr<u32>(r4(R+0),u64(u32(0x1ull))));
}
B70cdf0:{NFSU2_TR(0x70cdf0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70cdf3:{NFSU2_TR(0x70cdf3);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70cdf9:{NFSU2_TR(0x70cdf9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70cdfc:{NFSU2_TR(0x70cdfc);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70cdff:{NFSU2_TR(0x70cdff);
{goto L70ce1f;}
}
B70ce01:L70ce01:{c.instructions+=7;NFSU2_TR(0x70ce01);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70ce07:{NFSU2_TR(0x70ce07);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70ce0a:{NFSU2_TR(0x70ce0a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70ce10:{NFSU2_TR(0x70ce10);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70ce13:{NFSU2_TR(0x70ce13);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70ce19:{NFSU2_TR(0x70ce19);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70ce1c:{NFSU2_TR(0x70ce1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70ce1f:L70ce1f:{c.instructions+=1;NFSU2_TR(0x70ce1f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70ce22:L70ce22:{c.instructions+=10;NFSU2_TR(0x70ce22);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70ce25:{NFSU2_TR(0x70ce25);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70ce28:{NFSU2_TR(0x70ce28);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70ce2b:{NFSU2_TR(0x70ce2b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B70ce2e:{NFSU2_TR(0x70ce2e);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B70ce31:{NFSU2_TR(0x70ce31);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+8))));
}
B70ce33:{NFSU2_TR(0x70ce33);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B70ce35:{NFSU2_TR(0x70ce35);
__builtin_memmove((R+8),(R+4),4);
}
B70ce37:{NFSU2_TR(0x70ce37);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B70ce3a:{NFSU2_TR(0x70ce3a);
__builtin_memmove((R+28),(R+0),4);
}
B70ce3c:L70ce3c:{c.instructions+=1;NFSU2_TR(0x70ce3c);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L70ce3e;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70ce3cu);}goto L70ce3c;}
}
B70ce3e:L70ce3e:{c.instructions+=2;NFSU2_TR(0x70ce3e);
__builtin_memmove((R+4),(R+8),4);
}
B70ce40:{NFSU2_TR(0x70ce40);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B70ce43:L70ce43:{c.instructions+=1;NFSU2_TR(0x70ce43);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L70ce45;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70ce43u);}goto L70ce43;}
}
B70ce45:L70ce45:{c.instructions+=3;NFSU2_TR(0x70ce45);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70ce48:{NFSU2_TR(0x70ce48);
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
B70ce4b:{NFSU2_TR(0x70ce4b);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L70ce6a;}}
}
B70ce4d:L70ce4d:{c.instructions+=2;NFSU2_TR(0x70ce4d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6ull))));
__builtin_memmove((R+24),(U+0),4);
}
B70ce50:{NFSU2_TR(0x70ce50);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xffffffffull))));
__builtin_memmove((R+28),(U+0),4);
}
B70ce53:L70ce53:{c.instructions+=5;NFSU2_TR(0x70ce53);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70ce56:{NFSU2_TR(0x70ce56);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70ce59:{NFSU2_TR(0x70ce59);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70ce5a:{NFSU2_TR(0x70ce5a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70ce5b:{NFSU2_TR(0x70ce5b);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b9edc),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70ce61ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B70ce61:L70ce61:{c.instructions+=4;NFSU2_TR(0x70ce61);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B70ce64:{NFSU2_TR(0x70ce64);
w1(R+512,carry<u32>(r4(R+24),u32(0x8ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
}
B70ce67:{NFSU2_TR(0x70ce67);
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
B70ce68:{NFSU2_TR(0x70ce68);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70ce53u);}goto L70ce53;}}
}
B70ce6a:L70ce6a:{c.instructions+=6;NFSU2_TR(0x70ce6a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70ce6d:{NFSU2_TR(0x70ce6d);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B70ce70:{NFSU2_TR(0x70ce70);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B70ce73:{NFSU2_TR(0x70ce73);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70ce76:{NFSU2_TR(0x70ce76);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B70ce79:{NFSU2_TR(0x70ce79);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L70cf02;}}
}
B70ce7f:L70ce7f:{c.instructions+=3;NFSU2_TR(0x70ce7f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B70ce82:{NFSU2_TR(0x70ce82);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B70ce83:{NFSU2_TR(0x70ce83);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70ce86:L70ce86:{c.instructions+=11;NFSU2_TR(0x70ce86);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B70ce89:{NFSU2_TR(0x70ce89);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70ce8c:{NFSU2_TR(0x70ce8c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70ce8f:{NFSU2_TR(0x70ce8f);
__builtin_memmove((R+4),(R+24),4);
}
B70ce91:{NFSU2_TR(0x70ce91);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B70ce94:{NFSU2_TR(0x70ce94);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B70ce97:{NFSU2_TR(0x70ce97);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B70ce99:{NFSU2_TR(0x70ce99);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+8))));
}
B70ce9b:{NFSU2_TR(0x70ce9b);
__builtin_memmove((R+8),(R+4),4);
}
B70ce9d:{NFSU2_TR(0x70ce9d);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B70cea0:{NFSU2_TR(0x70cea0);
__builtin_memmove((R+28),(R+0),4);
}
B70cea2:L70cea2:{c.instructions+=1;NFSU2_TR(0x70cea2);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L70cea4;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70cea2u);}goto L70cea2;}
}
B70cea4:L70cea4:{c.instructions+=2;NFSU2_TR(0x70cea4);
__builtin_memmove((R+4),(R+8),4);
}
B70cea6:{NFSU2_TR(0x70cea6);
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
B70cea9:L70cea9:{c.instructions+=1;NFSU2_TR(0x70cea9);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L70ceab;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70cea9u);}goto L70cea9;}
}
B70ceab:L70ceab:{c.instructions+=6;NFSU2_TR(0x70ceab);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B70ceae:{NFSU2_TR(0x70ceae);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70ceaf:{NFSU2_TR(0x70ceaf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70ceb0:{NFSU2_TR(0x70ceb0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70ceb1:{NFSU2_TR(0x70ceb1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70ceb4:{NFSU2_TR(0x70ceb4);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b9f1c),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70cebaull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B70ceba:L70ceba:{c.instructions+=4;NFSU2_TR(0x70ceba);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70cebd:{NFSU2_TR(0x70cebd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B70cec0:{NFSU2_TR(0x70cec0);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B70cec3:{NFSU2_TR(0x70cec3);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L70cef5;}}
}
B70cec5:L70cec5:{c.instructions+=4;NFSU2_TR(0x70cec5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B70cec8:{NFSU2_TR(0x70cec8);
w1(R+512,carry<u32>(r4(R+28),u32(0x8ull)));
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x8ull))));
}
B70cecb:{NFSU2_TR(0x70cecb);
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
B70cecc:{NFSU2_TR(0x70cecc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B70cecf:L70cecf:{c.instructions+=6;NFSU2_TR(0x70cecf);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70ced2:{NFSU2_TR(0x70ced2);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffffeull))));
__builtin_memmove((R+0),(U+0),4);
}
B70ced5:{NFSU2_TR(0x70ced5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70ced6:{NFSU2_TR(0x70ced6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70ced7:{NFSU2_TR(0x70ced7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70ced8:{NFSU2_TR(0x70ced8);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b9edc),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70cedeull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B70cede:L70cede:{c.instructions+=5;NFSU2_TR(0x70cede);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B70cee1:{NFSU2_TR(0x70cee1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70cee2:{NFSU2_TR(0x70cee2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70cee3:{NFSU2_TR(0x70cee3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70cee4:{NFSU2_TR(0x70cee4);
u8 U[4];
__builtin_memmove((U+0),gp(0x8b9f1c),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70ceeaull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B70ceea:L70ceea:{c.instructions+=4;NFSU2_TR(0x70ceea);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B70ceed:{NFSU2_TR(0x70ceed);
w1(R+512,carry<u32>(r4(R+28),u32(0x8ull)));
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x8ull))));
}
B70cef0:{NFSU2_TR(0x70cef0);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,sborrow<u32>(r4(U+4),u32(0x1ull)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
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
B70cef3:{NFSU2_TR(0x70cef3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70cecfu);}goto L70cecf;}}
}
B70cef5:L70cef5:{c.instructions+=5;NFSU2_TR(0x70cef5);
__builtin_memmove((R+0),(R+24),4);
}
B70cef7:{NFSU2_TR(0x70cef7);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B70cefa:{NFSU2_TR(0x70cefa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B70cefd:{NFSU2_TR(0x70cefd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B70cf00:{NFSU2_TR(0x70cf00);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70ce86u);}goto L70ce86;}}
}
B70cf02:L70cf02:{c.instructions+=3;NFSU2_TR(0x70cf02);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B70cf05:{NFSU2_TR(0x70cf05);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
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
B70cf09:{NFSU2_TR(0x70cf09);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70cda8u);}goto L70cda8;}}
}
B70cf0f:L70cf0f:{c.instructions+=5;NFSU2_TR(0x70cf0f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B70cf10:{NFSU2_TR(0x70cf10);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B70cf11:{NFSU2_TR(0x70cf11);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B70cf12:{NFSU2_TR(0x70cf12);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B70cf13:{NFSU2_TR(0x70cf13);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B70cf14:L70cf14:{c.instructions+=1;NFSU2_TR(0x70cf14);
w4(R+0,u32(0x8b9900ull));
}
B70cf19:L70cf19:{c.instructions+=5;NFSU2_TR(0x70cf19);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B70cf1a:{NFSU2_TR(0x70cf1a);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B70cf1b:{NFSU2_TR(0x70cf1b);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
w2(U+0,u16(u32(r2(U+0))&u32(u16(0x0ull))));
s2(u32(r4(R+0)),r2(U+0));
}
B70cf1f:{NFSU2_TR(0x70cf1f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x8b98e0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B70cf24:{NFSU2_TR(0x70cf24);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70cf19u);}goto L70cf19;}}
}
B70cf26:L70cf26:{c.instructions+=6;NFSU2_TR(0x70cf26);
s2(0x8b98fe,u16(u32(m2(0x8b98fe))|u32(u16(0xffffull))));
}
B70cf2f:{NFSU2_TR(0x70cf2f);
s2(0x8b98f4,u16(u32(m2(0x8b98f4))|u32(u16(0xffffull))));
}
B70cf38:{NFSU2_TR(0x70cf38);
s2(0x8b98ea,u16(u32(m2(0x8b98ea))|u32(u16(0xffffull))));
}
B70cf41:{NFSU2_TR(0x70cf41);
s2(0x8b98e0,u16(u32(m2(0x8b98e0))|u32(u16(0xffffull))));
}
B70cf4a:{NFSU2_TR(0x70cf4a);
w4(R+4,u32(0x8b9904ull));
}
B70cf4f:{NFSU2_TR(0x70cf4f);
w4(R+8,u32(0x8177a8ull));
}
B70cf54:L70cf54:{c.instructions+=10;NFSU2_TR(0x70cf54);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+8))),2);
__builtin_memmove((R+0),(U+0),2);
}
B70cf57:{NFSU2_TR(0x70cf57);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B70cf5b:{NFSU2_TR(0x70cf5b);
u8 U[2];
__builtin_memmove((U+0),(R+0),2);
s2(u32(r4(R+4)),r2(U+0));
}
B70cf5e:{NFSU2_TR(0x70cf5e);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B70cf62:{NFSU2_TR(0x70cf62);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B70cf66:{NFSU2_TR(0x70cf66);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x8ull))));
}
B70cf69:{NFSU2_TR(0x70cf69);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B70cf6a:{NFSU2_TR(0x70cf6a);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B70cf6b:{NFSU2_TR(0x70cf6b);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0x8b9934ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x8b9934ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x8b9934ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B70cf71:{NFSU2_TR(0x70cf71);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x70cf54u);}goto L70cf54;}}
}
B70cf73:L70cf73:{c.instructions+=5;NFSU2_TR(0x70cf73);
s2(0x8b993e,u16(0x8ull));
}
B70cf7c:{NFSU2_TR(0x70cf7c);
s2(0x8b993c,u16(0x8ull));
}
B70cf85:{NFSU2_TR(0x70cf85);
s2(0x8b993a,u16(0x8ull));
}
B70cf8e:{NFSU2_TR(0x70cf8e);
s2(0x8b9938,u16(0x8ull));
}
B70cf97:{NFSU2_TR(0x70cf97);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B70cf98:L70cf98:{c.instructions+=8;NFSU2_TR(0x70cf98);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70cf99:{NFSU2_TR(0x70cf99);
__builtin_memmove((R+20),(R+16),4);
}
B70cf9b:{NFSU2_TR(0x70cf9b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70cf9c:{NFSU2_TR(0x70cf9c);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B70cf9e:{NFSU2_TR(0x70cf9e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70cf9f:{NFSU2_TR(0x70cf9f);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B70cfa0:{NFSU2_TR(0x70cfa0);
__builtin_memmove((R+28),(R+24),4);
}
B70cfa2:{NFSU2_TR(0x70cfa2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x70cfa7ull));
TAIL_STATIC(0x71d02au,71d);
}
B70cfa7:L70cfa7:{c.instructions+=2;NFSU2_TR(0x70cfa7);
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
B70cfa9:{NFSU2_TR(0x70cfa9);
if(r1(R+518)){{goto L70cfae;}}
}
B70cfab:L70cfab:{c.instructions+=2;NFSU2_TR(0x70cfab);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B70cfad:{NFSU2_TR(0x70cfad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B70cfae:L70cfae:{c.instructions+=2;NFSU2_TR(0x70cfae);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x70d00dull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B70cfb5:{NFSU2_TR(0x70cfb5);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x70cffdull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B70cfbc:L70cfbc:{c.instructions+=4;NFSU2_TR(0x70cfbc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70cfbf:{NFSU2_TR(0x70cfbf);
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
B70cfc1:{NFSU2_TR(0x70cfc1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B70cfc3:{NFSU2_TR(0x70cfc3);
{goto L70cfcc;}
}
B70cfc5:L70cfc5:{c.instructions+=3;NFSU2_TR(0x70cfc5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70cfc8:{NFSU2_TR(0x70cfc8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B70cfca:{NFSU2_TR(0x70cfca);
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
B70cfcc:L70cfcc:{c.instructions+=5;NFSU2_TR(0x70cfcc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70cfcf:{NFSU2_TR(0x70cfcf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B70cfd1:{NFSU2_TR(0x70cfd1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B70cfd4:{NFSU2_TR(0x70cfd4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B70cfd6:{NFSU2_TR(0x70cfd6);
{goto L70cff9;}
}
B70cfd8:L70cfd8:{c.instructions+=7;NFSU2_TR(0x70cfd8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70cfdb:{NFSU2_TR(0x70cfdb);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B70cfdd:{NFSU2_TR(0x70cfdd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70cfe0:{NFSU2_TR(0x70cfe0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B70cfe2:{NFSU2_TR(0x70cfe2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70cfe5:{NFSU2_TR(0x70cfe5);
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
B70cfe8:{NFSU2_TR(0x70cfe8);
{goto L70cff9;}
}
B70cfea:L70cfea:{c.instructions+=6;NFSU2_TR(0x70cfea);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70cfed:{NFSU2_TR(0x70cfed);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B70cfef:{NFSU2_TR(0x70cfef);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70cff2:{NFSU2_TR(0x70cff2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B70cff4:{NFSU2_TR(0x70cff4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B70cff7:{NFSU2_TR(0x70cff7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B70cff9:L70cff9:{c.instructions+=4;NFSU2_TR(0x70cff9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B70cffa:{NFSU2_TR(0x70cffa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B70cffb:{NFSU2_TR(0x70cffb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B70cffc:{NFSU2_TR(0x70cffc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
XIT:NFSU2_TR_EXIT(0x70c,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
