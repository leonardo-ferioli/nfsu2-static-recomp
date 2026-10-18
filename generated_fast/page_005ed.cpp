#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_571(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_576(u8* __restrict R,Cpu& c);
u32 body_578(u8* __restrict R,Cpu& c);
u32 body_579(u8* __restrict R,Cpu& c);
u32 body_57b(u8* __restrict R,Cpu& c);
u32 body_592(u8* __restrict R,Cpu& c);
u32 body_59b(u8* __restrict R,Cpu& c);
u32 body_5a0(u8* __restrict R,Cpu& c);
u32 body_5ee(u8* __restrict R,Cpu& c);
u32 body_60f(u8* __restrict R,Cpu& c);
u32 body_61e(u8* __restrict R,Cpu& c);
u32 body_631(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x5ed,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x5ed,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_5ed(u8* __restrict R,Cpu& c);
u32 page_5ed(Cpu& c){return body_5ed(c.regs.data(),c);}
__attribute__((noinline)) u32 body_5ed(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x5ed001:goto L5ed001;
case 0x5ed004:c.instructions+=2;goto B5ed004;
case 0x5ed006:c.instructions+=1;goto B5ed006;
case 0x5ed00c:goto L5ed00c;
case 0x5ed00f:c.instructions+=2;goto B5ed00f;
case 0x5ed013:c.instructions+=1;goto B5ed013;
case 0x5ed019:goto L5ed019;
case 0x5ed01f:c.instructions+=2;goto B5ed01f;
case 0x5ed020:c.instructions+=1;goto B5ed020;
case 0x5ed025:goto L5ed025;
case 0x5ed029:c.instructions+=7;goto B5ed029;
case 0x5ed02d:c.instructions+=6;goto B5ed02d;
case 0x5ed033:c.instructions+=5;goto B5ed033;
case 0x5ed036:c.instructions+=4;goto B5ed036;
case 0x5ed037:c.instructions+=3;goto B5ed037;
case 0x5ed03c:c.instructions+=2;goto B5ed03c;
case 0x5ed040:c.instructions+=1;goto B5ed040;
case 0x5ed045:goto L5ed045;
case 0x5ed049:c.instructions+=7;goto B5ed049;
case 0x5ed04a:c.instructions+=6;goto B5ed04a;
case 0x5ed04e:c.instructions+=5;goto B5ed04e;
case 0x5ed050:c.instructions+=4;goto B5ed050;
case 0x5ed053:c.instructions+=3;goto B5ed053;
case 0x5ed054:c.instructions+=2;goto B5ed054;
case 0x5ed055:c.instructions+=1;goto B5ed055;
case 0x5ed05a:goto L5ed05a;
case 0x5ed05d:c.instructions+=4;goto B5ed05d;
case 0x5ed061:c.instructions+=3;goto B5ed061;
case 0x5ed062:c.instructions+=2;goto B5ed062;
case 0x5ed064:c.instructions+=1;goto B5ed064;
case 0x5ed069:goto L5ed069;
case 0x5ed06d:c.instructions+=6;goto B5ed06d;
case 0x5ed06e:c.instructions+=5;goto B5ed06e;
case 0x5ed072:c.instructions+=4;goto B5ed072;
case 0x5ed073:c.instructions+=3;goto B5ed073;
case 0x5ed077:c.instructions+=2;goto B5ed077;
case 0x5ed078:c.instructions+=1;goto B5ed078;
case 0x5ed07d:goto L5ed07d;
case 0x5ed081:c.instructions+=42;goto B5ed081;
case 0x5ed087:c.instructions+=41;goto B5ed087;
case 0x5ed08a:c.instructions+=40;goto B5ed08a;
case 0x5ed08e:c.instructions+=39;goto B5ed08e;
case 0x5ed092:c.instructions+=38;goto B5ed092;
case 0x5ed098:c.instructions+=37;goto B5ed098;
case 0x5ed099:c.instructions+=36;goto B5ed099;
case 0x5ed09d:c.instructions+=35;goto B5ed09d;
case 0x5ed0a5:c.instructions+=34;goto B5ed0a5;
case 0x5ed0a7:c.instructions+=33;goto B5ed0a7;
case 0x5ed0ad:c.instructions+=32;goto B5ed0ad;
case 0x5ed0b3:c.instructions+=31;goto B5ed0b3;
case 0x5ed0b5:c.instructions+=30;goto B5ed0b5;
case 0x5ed0bb:c.instructions+=29;goto B5ed0bb;
case 0x5ed0bf:c.instructions+=28;goto B5ed0bf;
case 0x5ed0c5:c.instructions+=27;goto B5ed0c5;
case 0x5ed0c9:c.instructions+=26;goto B5ed0c9;
case 0x5ed0cf:c.instructions+=25;goto B5ed0cf;
case 0x5ed0d1:c.instructions+=24;goto B5ed0d1;
case 0x5ed0d7:c.instructions+=23;goto B5ed0d7;
case 0x5ed0dd:c.instructions+=22;goto B5ed0dd;
case 0x5ed0df:c.instructions+=21;goto B5ed0df;
case 0x5ed0e5:c.instructions+=20;goto B5ed0e5;
case 0x5ed0e9:c.instructions+=19;goto B5ed0e9;
case 0x5ed0ef:c.instructions+=18;goto B5ed0ef;
case 0x5ed0f3:c.instructions+=17;goto B5ed0f3;
case 0x5ed0f9:c.instructions+=16;goto B5ed0f9;
case 0x5ed0fb:c.instructions+=15;goto B5ed0fb;
case 0x5ed101:c.instructions+=14;goto B5ed101;
case 0x5ed107:c.instructions+=13;goto B5ed107;
case 0x5ed109:c.instructions+=12;goto B5ed109;
case 0x5ed10f:c.instructions+=11;goto B5ed10f;
case 0x5ed113:c.instructions+=10;goto B5ed113;
case 0x5ed117:c.instructions+=9;goto B5ed117;
case 0x5ed119:c.instructions+=8;goto B5ed119;
case 0x5ed11d:c.instructions+=7;goto B5ed11d;
case 0x5ed121:c.instructions+=6;goto B5ed121;
case 0x5ed125:c.instructions+=5;goto B5ed125;
case 0x5ed126:c.instructions+=4;goto B5ed126;
case 0x5ed12a:c.instructions+=3;goto B5ed12a;
case 0x5ed12d:c.instructions+=2;goto B5ed12d;
case 0x5ed131:c.instructions+=1;goto B5ed131;
case 0x5ed136:goto L5ed136;
case 0x5ed13a:c.instructions+=6;goto B5ed13a;
case 0x5ed13b:c.instructions+=5;goto B5ed13b;
case 0x5ed13f:c.instructions+=4;goto B5ed13f;
case 0x5ed140:c.instructions+=3;goto B5ed140;
case 0x5ed144:c.instructions+=2;goto B5ed144;
case 0x5ed145:c.instructions+=1;goto B5ed145;
case 0x5ed14a:goto L5ed14a;
case 0x5ed14e:c.instructions+=17;goto B5ed14e;
case 0x5ed152:c.instructions+=16;goto B5ed152;
case 0x5ed155:c.instructions+=15;goto B5ed155;
case 0x5ed159:c.instructions+=14;goto B5ed159;
case 0x5ed15d:c.instructions+=13;goto B5ed15d;
case 0x5ed161:c.instructions+=12;goto B5ed161;
case 0x5ed165:c.instructions+=11;goto B5ed165;
case 0x5ed167:c.instructions+=10;goto B5ed167;
case 0x5ed16b:c.instructions+=9;goto B5ed16b;
case 0x5ed16f:c.instructions+=8;goto B5ed16f;
case 0x5ed171:c.instructions+=7;goto B5ed171;
case 0x5ed177:c.instructions+=6;goto B5ed177;
case 0x5ed17d:c.instructions+=5;goto B5ed17d;
case 0x5ed183:c.instructions+=4;goto B5ed183;
case 0x5ed186:c.instructions+=3;goto B5ed186;
case 0x5ed187:c.instructions+=2;goto B5ed187;
case 0x5ed188:c.instructions+=1;goto B5ed188;
case 0x5ed18d:goto L5ed18d;
case 0x5ed190:c.instructions+=4;goto B5ed190;
case 0x5ed194:c.instructions+=3;goto B5ed194;
case 0x5ed195:c.instructions+=2;goto B5ed195;
case 0x5ed197:c.instructions+=1;goto B5ed197;
case 0x5ed19c:goto L5ed19c;
case 0x5ed19d:c.instructions+=5;goto B5ed19d;
case 0x5ed19e:c.instructions+=4;goto B5ed19e;
case 0x5ed19f:c.instructions+=3;goto B5ed19f;
case 0x5ed1a1:c.instructions+=2;goto B5ed1a1;
case 0x5ed1a2:c.instructions+=1;goto B5ed1a2;
case 0x5ed1b0:goto L5ed1b0;
case 0x5ed1b1:c.instructions+=4;goto B5ed1b1;
case 0x5ed1b2:c.instructions+=3;goto B5ed1b2;
case 0x5ed1b4:c.instructions+=2;goto B5ed1b4;
case 0x5ed1b6:c.instructions+=1;goto B5ed1b6;
case 0x5ed1c0:goto L5ed1c0;
case 0x5ed1c7:c.instructions+=2;goto B5ed1c7;
case 0x5ed1c9:c.instructions+=1;goto B5ed1c9;
case 0x5ed1cb:goto L5ed1cb;
case 0x5ed1cc:c.instructions+=2;goto B5ed1cc;
case 0x5ed1cf:c.instructions+=1;goto B5ed1cf;
case 0x5ed1d4:goto L5ed1d4;
case 0x5ed1d6:c.instructions+=1;goto B5ed1d6;
case 0x5ed1d8:goto L5ed1d8;
case 0x5ed1d9:c.instructions+=2;goto B5ed1d9;
case 0x5ed1dc:c.instructions+=1;goto B5ed1dc;
case 0x5ed1de:goto L5ed1de;
case 0x5ed1df:c.instructions+=3;goto B5ed1df;
case 0x5ed1e4:c.instructions+=2;goto B5ed1e4;
case 0x5ed1e5:c.instructions+=1;goto B5ed1e5;
case 0x5ed1e6:goto L5ed1e6;
case 0x5ed1e7:c.instructions+=3;goto B5ed1e7;
case 0x5ed1e9:c.instructions+=2;goto B5ed1e9;
case 0x5ed1ea:c.instructions+=1;goto B5ed1ea;
case 0x5ed1f0:goto L5ed1f0;
case 0x5ed1f3:c.instructions+=2;goto B5ed1f3;
case 0x5ed1f4:c.instructions+=1;goto B5ed1f4;
case 0x5ed1f6:goto L5ed1f6;
case 0x5ed1f9:c.instructions+=1;goto B5ed1f9;
case 0x5ed1fb:goto L5ed1fb;
case 0x5ed1fd:c.instructions+=1;goto B5ed1fd;
case 0x5ed1fe:goto L5ed1fe;
case 0x5ed201:c.instructions+=2;goto B5ed201;
case 0x5ed203:c.instructions+=1;goto B5ed203;
case 0x5ed206:goto L5ed206;
case 0x5ed209:c.instructions+=4;goto B5ed209;
case 0x5ed20b:c.instructions+=3;goto B5ed20b;
case 0x5ed20d:c.instructions+=2;goto B5ed20d;
case 0x5ed20e:c.instructions+=1;goto B5ed20e;
case 0x5ed20f:goto L5ed20f;
case 0x5ed212:c.instructions+=2;goto B5ed212;
case 0x5ed214:c.instructions+=1;goto B5ed214;
case 0x5ed217:goto L5ed217;
case 0x5ed21a:c.instructions+=4;goto B5ed21a;
case 0x5ed21c:c.instructions+=3;goto B5ed21c;
case 0x5ed21e:c.instructions+=2;goto B5ed21e;
case 0x5ed21f:c.instructions+=1;goto B5ed21f;
case 0x5ed220:goto L5ed220;
case 0x5ed226:c.instructions+=2;goto B5ed226;
case 0x5ed228:c.instructions+=1;goto B5ed228;
case 0x5ed22a:goto L5ed22a;
case 0x5ed22f:c.instructions+=1;goto B5ed22f;
case 0x5ed230:goto L5ed230;
case 0x5ed231:c.instructions+=7;goto B5ed231;
case 0x5ed232:c.instructions+=6;goto B5ed232;
case 0x5ed233:c.instructions+=5;goto B5ed233;
case 0x5ed236:c.instructions+=4;goto B5ed236;
case 0x5ed23a:c.instructions+=3;goto B5ed23a;
case 0x5ed23c:c.instructions+=2;goto B5ed23c;
case 0x5ed23e:c.instructions+=1;goto B5ed23e;
case 0x5ed240:goto L5ed240;
case 0x5ed241:c.instructions+=2;goto B5ed241;
case 0x5ed243:c.instructions+=1;goto B5ed243;
case 0x5ed248:goto L5ed248;
case 0x5ed24a:c.instructions+=1;goto B5ed24a;
case 0x5ed24f:goto L5ed24f;
case 0x5ed251:c.instructions+=1;goto B5ed251;
case 0x5ed253:goto L5ed253;
case 0x5ed254:c.instructions+=2;goto B5ed254;
case 0x5ed256:c.instructions+=1;goto B5ed256;
case 0x5ed258:goto L5ed258;
case 0x5ed259:c.instructions+=4;goto B5ed259;
case 0x5ed25a:c.instructions+=3;goto B5ed25a;
case 0x5ed25c:c.instructions+=2;goto B5ed25c;
case 0x5ed25d:c.instructions+=1;goto B5ed25d;
case 0x5ed25e:goto L5ed25e;
case 0x5ed25f:c.instructions+=4;goto B5ed25f;
case 0x5ed260:c.instructions+=3;goto B5ed260;
case 0x5ed265:c.instructions+=2;goto B5ed265;
case 0x5ed266:c.instructions+=1;goto B5ed266;
case 0x5ed270:goto L5ed270;
case 0x5ed276:c.instructions+=2;goto B5ed276;
case 0x5ed278:c.instructions+=1;goto B5ed278;
case 0x5ed27a:goto L5ed27a;
case 0x5ed27f:c.instructions+=1;goto B5ed27f;
case 0x5ed280:goto L5ed280;
case 0x5ed282:c.instructions+=1;goto B5ed282;
case 0x5ed290:goto L5ed290;
case 0x5ed292:c.instructions+=2;goto B5ed292;
case 0x5ed297:c.instructions+=1;goto B5ed297;
case 0x5ed298:goto L5ed298;
case 0x5ed29a:c.instructions+=1;goto B5ed29a;
case 0x5ed29c:goto L5ed29c;
case 0x5ed29f:c.instructions+=5;goto B5ed29f;
case 0x5ed2a3:c.instructions+=4;goto B5ed2a3;
case 0x5ed2a9:c.instructions+=3;goto B5ed2a9;
case 0x5ed2ab:c.instructions+=2;goto B5ed2ab;
case 0x5ed2ae:c.instructions+=1;goto B5ed2ae;
case 0x5ed2b0:goto L5ed2b0;
case 0x5ed2b3:c.instructions+=4;goto B5ed2b3;
case 0x5ed2b9:c.instructions+=3;goto B5ed2b9;
case 0x5ed2bb:c.instructions+=2;goto B5ed2bb;
case 0x5ed2be:c.instructions+=1;goto B5ed2be;
case 0x5ed2c0:goto L5ed2c0;
case 0x5ed2c4:c.instructions+=4;goto B5ed2c4;
case 0x5ed2ca:c.instructions+=3;goto B5ed2ca;
case 0x5ed2cc:c.instructions+=2;goto B5ed2cc;
case 0x5ed2cf:c.instructions+=1;goto B5ed2cf;
case 0x5ed2d1:goto L5ed2d1;
case 0x5ed2d5:c.instructions+=4;goto B5ed2d5;
case 0x5ed2db:c.instructions+=3;goto B5ed2db;
case 0x5ed2dd:c.instructions+=2;goto B5ed2dd;
case 0x5ed2e0:c.instructions+=1;goto B5ed2e0;
case 0x5ed2e2:goto L5ed2e2;
case 0x5ed2e4:c.instructions+=1;goto B5ed2e4;
case 0x5ed2e6:goto L5ed2e6;
case 0x5ed2e8:goto L5ed2e8;
case 0x5ed2eb:c.instructions+=2;goto B5ed2eb;
case 0x5ed2f1:c.instructions+=1;goto B5ed2f1;
case 0x5ed2f3:goto L5ed2f3;
case 0x5ed2f4:c.instructions+=1;goto B5ed2f4;
case 0x5ed2f5:goto L5ed2f5;
case 0x5ed2f7:goto L5ed2f7;
case 0x5ed2f8:c.instructions+=1;goto B5ed2f8;
case 0x5ed300:goto L5ed300;
case 0x5ed303:c.instructions+=17;goto B5ed303;
case 0x5ed304:c.instructions+=16;goto B5ed304;
case 0x5ed305:c.instructions+=15;goto B5ed305;
case 0x5ed306:c.instructions+=14;goto B5ed306;
case 0x5ed30b:c.instructions+=13;goto B5ed30b;
case 0x5ed30d:c.instructions+=12;goto B5ed30d;
case 0x5ed30e:c.instructions+=11;goto B5ed30e;
case 0x5ed312:c.instructions+=10;goto B5ed312;
case 0x5ed317:c.instructions+=9;goto B5ed317;
case 0x5ed31c:c.instructions+=8;goto B5ed31c;
case 0x5ed321:c.instructions+=7;goto B5ed321;
case 0x5ed323:c.instructions+=6;goto B5ed323;
case 0x5ed325:c.instructions+=5;goto B5ed325;
case 0x5ed327:c.instructions+=4;goto B5ed327;
case 0x5ed329:c.instructions+=3;goto B5ed329;
case 0x5ed32b:c.instructions+=2;goto B5ed32b;
case 0x5ed331:c.instructions+=1;goto B5ed331;
case 0x5ed335:goto L5ed335;
case 0x5ed337:c.instructions+=1;goto B5ed337;
case 0x5ed33d:goto L5ed33d;
case 0x5ed340:c.instructions+=4;goto B5ed340;
case 0x5ed346:c.instructions+=3;goto B5ed346;
case 0x5ed348:c.instructions+=2;goto B5ed348;
case 0x5ed34b:c.instructions+=1;goto B5ed34b;
case 0x5ed351:goto L5ed351;
case 0x5ed354:c.instructions+=6;goto B5ed354;
case 0x5ed357:c.instructions+=5;goto B5ed357;
case 0x5ed35a:c.instructions+=4;goto B5ed35a;
case 0x5ed360:c.instructions+=3;goto B5ed360;
case 0x5ed362:c.instructions+=2;goto B5ed362;
case 0x5ed365:c.instructions+=1;goto B5ed365;
case 0x5ed36b:goto L5ed36b;
case 0x5ed36d:c.instructions+=4;goto B5ed36d;
case 0x5ed373:c.instructions+=3;goto B5ed373;
case 0x5ed375:c.instructions+=2;goto B5ed375;
case 0x5ed378:c.instructions+=1;goto B5ed378;
case 0x5ed37a:goto L5ed37a;
case 0x5ed37d:c.instructions+=5;goto B5ed37d;
case 0x5ed380:c.instructions+=4;goto B5ed380;
case 0x5ed386:c.instructions+=3;goto B5ed386;
case 0x5ed388:c.instructions+=2;goto B5ed388;
case 0x5ed38b:c.instructions+=1;goto B5ed38b;
case 0x5ed38d:goto L5ed38d;
case 0x5ed390:c.instructions+=4;goto B5ed390;
case 0x5ed396:c.instructions+=3;goto B5ed396;
case 0x5ed398:c.instructions+=2;goto B5ed398;
case 0x5ed39b:c.instructions+=1;goto B5ed39b;
case 0x5ed39d:goto L5ed39d;
case 0x5ed3a1:c.instructions+=6;goto B5ed3a1;
case 0x5ed3a3:c.instructions+=5;goto B5ed3a3;
case 0x5ed3a6:c.instructions+=4;goto B5ed3a6;
case 0x5ed3ac:c.instructions+=3;goto B5ed3ac;
case 0x5ed3ae:c.instructions+=2;goto B5ed3ae;
case 0x5ed3b1:c.instructions+=1;goto B5ed3b1;
case 0x5ed3b3:goto L5ed3b3;
case 0x5ed3b6:c.instructions+=4;goto B5ed3b6;
case 0x5ed3bc:c.instructions+=3;goto B5ed3bc;
case 0x5ed3be:c.instructions+=2;goto B5ed3be;
case 0x5ed3c1:c.instructions+=1;goto B5ed3c1;
case 0x5ed3c3:goto L5ed3c3;
case 0x5ed3c7:c.instructions+=6;goto B5ed3c7;
case 0x5ed3c9:c.instructions+=5;goto B5ed3c9;
case 0x5ed3cc:c.instructions+=4;goto B5ed3cc;
case 0x5ed3d2:c.instructions+=3;goto B5ed3d2;
case 0x5ed3d4:c.instructions+=2;goto B5ed3d4;
case 0x5ed3d7:c.instructions+=1;goto B5ed3d7;
case 0x5ed3d9:goto L5ed3d9;
case 0x5ed3db:c.instructions+=1;goto B5ed3db;
case 0x5ed3dd:goto L5ed3dd;
case 0x5ed3df:goto L5ed3df;
case 0x5ed3e2:c.instructions+=3;goto B5ed3e2;
case 0x5ed3e5:c.instructions+=2;goto B5ed3e5;
case 0x5ed3e8:c.instructions+=1;goto B5ed3e8;
case 0x5ed3ee:goto L5ed3ee;
case 0x5ed3ef:c.instructions+=5;goto B5ed3ef;
case 0x5ed3f0:c.instructions+=4;goto B5ed3f0;
case 0x5ed3f1:c.instructions+=3;goto B5ed3f1;
case 0x5ed3f2:c.instructions+=2;goto B5ed3f2;
case 0x5ed3f5:c.instructions+=1;goto B5ed3f5;
case 0x5ed3f6:goto L5ed3f6;
case 0x5ed3f8:goto L5ed3f8;
case 0x5ed3f9:c.instructions+=5;goto B5ed3f9;
case 0x5ed3fa:c.instructions+=4;goto B5ed3fa;
case 0x5ed3fb:c.instructions+=3;goto B5ed3fb;
case 0x5ed3fc:c.instructions+=2;goto B5ed3fc;
case 0x5ed3ff:c.instructions+=1;goto B5ed3ff;
case 0x5ed400:goto L5ed400;
case 0x5ed401:c.instructions+=4;goto B5ed401;
case 0x5ed403:c.instructions+=3;goto B5ed403;
case 0x5ed406:c.instructions+=2;goto B5ed406;
case 0x5ed408:c.instructions+=1;goto B5ed408;
case 0x5ed40a:goto L5ed40a;
case 0x5ed40c:c.instructions+=1;goto B5ed40c;
case 0x5ed40f:goto L5ed40f;
case 0x5ed411:c.instructions+=1;goto B5ed411;
case 0x5ed413:goto L5ed413;
case 0x5ed416:c.instructions+=2;goto B5ed416;
case 0x5ed418:c.instructions+=1;goto B5ed418;
case 0x5ed41b:goto L5ed41b;
case 0x5ed420:c.instructions+=2;goto B5ed420;
case 0x5ed421:c.instructions+=1;goto B5ed421;
case 0x5ed422:goto L5ed422;
case 0x5ed425:c.instructions+=2;goto B5ed425;
case 0x5ed426:c.instructions+=1;goto B5ed426;
case 0x5ed430:goto L5ed430;
case 0x5ed433:c.instructions+=6;goto B5ed433;
case 0x5ed439:c.instructions+=5;goto B5ed439;
case 0x5ed43b:c.instructions+=4;goto B5ed43b;
case 0x5ed441:c.instructions+=3;goto B5ed441;
case 0x5ed443:c.instructions+=2;goto B5ed443;
case 0x5ed446:c.instructions+=1;goto B5ed446;
case 0x5ed448:goto L5ed448;
case 0x5ed44d:c.instructions+=5;goto B5ed44d;
case 0x5ed44f:c.instructions+=4;goto B5ed44f;
case 0x5ed451:c.instructions+=3;goto B5ed451;
case 0x5ed454:c.instructions+=2;goto B5ed454;
case 0x5ed456:c.instructions+=1;goto B5ed456;
case 0x5ed457:goto L5ed457;
case 0x5ed459:c.instructions+=5;goto B5ed459;
case 0x5ed45b:c.instructions+=4;goto B5ed45b;
case 0x5ed45d:c.instructions+=3;goto B5ed45d;
case 0x5ed460:c.instructions+=2;goto B5ed460;
case 0x5ed462:c.instructions+=1;goto B5ed462;
case 0x5ed470:goto L5ed470;
case 0x5ed474:c.instructions+=1;goto B5ed474;
case 0x5ed476:goto L5ed476;
case 0x5ed479:c.instructions+=3;goto B5ed479;
case 0x5ed47d:c.instructions+=2;goto B5ed47d;
case 0x5ed481:c.instructions+=1;goto B5ed481;
case 0x5ed484:goto L5ed484;
case 0x5ed486:c.instructions+=1;goto B5ed486;
case 0x5ed490:goto L5ed490;
case 0x5ed493:c.instructions+=13;goto B5ed493;
case 0x5ed499:c.instructions+=12;goto B5ed499;
case 0x5ed4a0:c.instructions+=11;goto B5ed4a0;
case 0x5ed4a6:c.instructions+=10;goto B5ed4a6;
case 0x5ed4aa:c.instructions+=9;goto B5ed4aa;
case 0x5ed4b0:c.instructions+=8;goto B5ed4b0;
case 0x5ed4b6:c.instructions+=7;goto B5ed4b6;
case 0x5ed4ba:c.instructions+=6;goto B5ed4ba;
case 0x5ed4be:c.instructions+=5;goto B5ed4be;
case 0x5ed4c4:c.instructions+=4;goto B5ed4c4;
case 0x5ed4ca:c.instructions+=3;goto B5ed4ca;
case 0x5ed4cc:c.instructions+=2;goto B5ed4cc;
case 0x5ed4cf:c.instructions+=1;goto B5ed4cf;
case 0x5ed4d1:goto L5ed4d1;
case 0x5ed4d7:goto L5ed4d7;
case 0x5ed4dd:c.instructions+=4;goto B5ed4dd;
case 0x5ed4e3:c.instructions+=3;goto B5ed4e3;
case 0x5ed4e5:c.instructions+=2;goto B5ed4e5;
case 0x5ed4e8:c.instructions+=1;goto B5ed4e8;
case 0x5ed4ea:goto L5ed4ea;
case 0x5ed4f0:c.instructions+=4;goto B5ed4f0;
case 0x5ed4f6:c.instructions+=3;goto B5ed4f6;
case 0x5ed4f8:c.instructions+=2;goto B5ed4f8;
case 0x5ed4fb:c.instructions+=1;goto B5ed4fb;
case 0x5ed4fd:goto L5ed4fd;
case 0x5ed501:c.instructions+=6;goto B5ed501;
case 0x5ed503:c.instructions+=5;goto B5ed503;
case 0x5ed509:c.instructions+=4;goto B5ed509;
case 0x5ed50b:c.instructions+=3;goto B5ed50b;
case 0x5ed50d:c.instructions+=2;goto B5ed50d;
case 0x5ed510:c.instructions+=1;goto B5ed510;
case 0x5ed512:goto L5ed512;
case 0x5ed514:c.instructions+=5;goto B5ed514;
case 0x5ed518:c.instructions+=4;goto B5ed518;
case 0x5ed51a:c.instructions+=3;goto B5ed51a;
case 0x5ed520:c.instructions+=2;goto B5ed520;
case 0x5ed523:c.instructions+=1;goto B5ed523;
case 0x5ed524:goto L5ed524;
case 0x5ed526:goto L5ed526;
case 0x5ed529:c.instructions+=1;goto B5ed529;
case 0x5ed530:goto L5ed530;
case 0x5ed536:c.instructions+=5;goto B5ed536;
case 0x5ed53c:c.instructions+=4;goto B5ed53c;
case 0x5ed542:c.instructions+=3;goto B5ed542;
case 0x5ed544:c.instructions+=2;goto B5ed544;
case 0x5ed547:c.instructions+=1;goto B5ed547;
case 0x5ed549:goto L5ed549;
case 0x5ed54f:c.instructions+=4;goto B5ed54f;
case 0x5ed555:c.instructions+=3;goto B5ed555;
case 0x5ed557:c.instructions+=2;goto B5ed557;
case 0x5ed55a:c.instructions+=1;goto B5ed55a;
case 0x5ed55c:goto L5ed55c;
case 0x5ed55e:c.instructions+=5;goto B5ed55e;
case 0x5ed564:c.instructions+=4;goto B5ed564;
case 0x5ed56a:c.instructions+=3;goto B5ed56a;
case 0x5ed570:c.instructions+=2;goto B5ed570;
case 0x5ed572:c.instructions+=1;goto B5ed572;
case 0x5ed578:goto L5ed578;
case 0x5ed580:goto L5ed580;
case 0x5ed581:c.instructions+=3;goto B5ed581;
case 0x5ed587:c.instructions+=2;goto B5ed587;
case 0x5ed589:c.instructions+=1;goto B5ed589;
case 0x5ed58b:goto L5ed58b;
case 0x5ed590:c.instructions+=1;goto B5ed590;
case 0x5ed592:goto L5ed592;
case 0x5ed597:c.instructions+=6;goto B5ed597;
case 0x5ed59d:c.instructions+=5;goto B5ed59d;
case 0x5ed5a1:c.instructions+=4;goto B5ed5a1;
case 0x5ed5a5:c.instructions+=3;goto B5ed5a5;
case 0x5ed5ab:c.instructions+=2;goto B5ed5ab;
case 0x5ed5ac:c.instructions+=1;goto B5ed5ac;
case 0x5ed5ad:goto L5ed5ad;
case 0x5ed5b3:c.instructions+=2;goto B5ed5b3;
case 0x5ed5b4:c.instructions+=1;goto B5ed5b4;
case 0x5ed5c0:goto L5ed5c0;
case 0x5ed5c4:c.instructions+=2;goto B5ed5c4;
case 0x5ed5ca:c.instructions+=1;goto B5ed5ca;
case 0x5ed5d0:goto L5ed5d0;
case 0x5ed5d3:c.instructions+=4;goto B5ed5d3;
case 0x5ed5d6:c.instructions+=3;goto B5ed5d6;
case 0x5ed5d7:c.instructions+=2;goto B5ed5d7;
case 0x5ed5d8:c.instructions+=1;goto B5ed5d8;
case 0x5ed5dd:goto L5ed5dd;
case 0x5ed5e0:c.instructions+=1;goto B5ed5e0;
case 0x5ed5f0:goto L5ed5f0;
case 0x5ed5f2:c.instructions+=4;goto B5ed5f2;
case 0x5ed5f4:c.instructions+=3;goto B5ed5f4;
case 0x5ed5f5:c.instructions+=2;goto B5ed5f5;
case 0x5ed5fa:c.instructions+=1;goto B5ed5fa;
case 0x5ed5fc:goto L5ed5fc;
case 0x5ed5fe:goto L5ed5fe;
case 0x5ed603:c.instructions+=45;goto B5ed603;
case 0x5ed606:c.instructions+=44;goto B5ed606;
case 0x5ed609:c.instructions+=43;goto B5ed609;
case 0x5ed60c:c.instructions+=42;goto B5ed60c;
case 0x5ed612:c.instructions+=41;goto B5ed612;
case 0x5ed615:c.instructions+=40;goto B5ed615;
case 0x5ed618:c.instructions+=39;goto B5ed618;
case 0x5ed61b:c.instructions+=38;goto B5ed61b;
case 0x5ed61e:c.instructions+=37;goto B5ed61e;
case 0x5ed621:c.instructions+=36;goto B5ed621;
case 0x5ed624:c.instructions+=35;goto B5ed624;
case 0x5ed62b:c.instructions+=34;goto B5ed62b;
case 0x5ed632:c.instructions+=33;goto B5ed632;
case 0x5ed639:c.instructions+=32;goto B5ed639;
case 0x5ed63c:c.instructions+=31;goto B5ed63c;
case 0x5ed63f:c.instructions+=30;goto B5ed63f;
case 0x5ed642:c.instructions+=29;goto B5ed642;
case 0x5ed645:c.instructions+=28;goto B5ed645;
case 0x5ed648:c.instructions+=27;goto B5ed648;
case 0x5ed64b:c.instructions+=26;goto B5ed64b;
case 0x5ed64e:c.instructions+=25;goto B5ed64e;
case 0x5ed651:c.instructions+=24;goto B5ed651;
case 0x5ed658:c.instructions+=23;goto B5ed658;
case 0x5ed65b:c.instructions+=22;goto B5ed65b;
case 0x5ed65e:c.instructions+=21;goto B5ed65e;
case 0x5ed661:c.instructions+=20;goto B5ed661;
case 0x5ed664:c.instructions+=19;goto B5ed664;
case 0x5ed667:c.instructions+=18;goto B5ed667;
case 0x5ed66a:c.instructions+=17;goto B5ed66a;
case 0x5ed66d:c.instructions+=16;goto B5ed66d;
case 0x5ed671:c.instructions+=15;goto B5ed671;
case 0x5ed674:c.instructions+=14;goto B5ed674;
case 0x5ed677:c.instructions+=13;goto B5ed677;
case 0x5ed67e:c.instructions+=12;goto B5ed67e;
case 0x5ed681:c.instructions+=11;goto B5ed681;
case 0x5ed688:c.instructions+=10;goto B5ed688;
case 0x5ed68f:c.instructions+=9;goto B5ed68f;
case 0x5ed696:c.instructions+=8;goto B5ed696;
case 0x5ed699:c.instructions+=7;goto B5ed699;
case 0x5ed69c:c.instructions+=6;goto B5ed69c;
case 0x5ed6a3:c.instructions+=5;goto B5ed6a3;
case 0x5ed6a6:c.instructions+=4;goto B5ed6a6;
case 0x5ed6a9:c.instructions+=3;goto B5ed6a9;
case 0x5ed6ac:c.instructions+=2;goto B5ed6ac;
case 0x5ed6ad:c.instructions+=1;goto B5ed6ad;
case 0x5ed6b0:goto L5ed6b0;
case 0x5ed6b1:c.instructions+=10;goto B5ed6b1;
case 0x5ed6b2:c.instructions+=9;goto B5ed6b2;
case 0x5ed6b3:c.instructions+=8;goto B5ed6b3;
case 0x5ed6b7:c.instructions+=7;goto B5ed6b7;
case 0x5ed6b8:c.instructions+=6;goto B5ed6b8;
case 0x5ed6bd:c.instructions+=5;goto B5ed6bd;
case 0x5ed6bf:c.instructions+=4;goto B5ed6bf;
case 0x5ed6c1:c.instructions+=3;goto B5ed6c1;
case 0x5ed6c2:c.instructions+=2;goto B5ed6c2;
case 0x5ed6c4:c.instructions+=1;goto B5ed6c4;
case 0x5ed6c9:goto L5ed6c9;
case 0x5ed6cb:c.instructions+=5;goto B5ed6cb;
case 0x5ed6cd:c.instructions+=4;goto B5ed6cd;
case 0x5ed6cf:c.instructions+=3;goto B5ed6cf;
case 0x5ed6d0:c.instructions+=2;goto B5ed6d0;
case 0x5ed6d2:c.instructions+=1;goto B5ed6d2;
case 0x5ed6d7:goto L5ed6d7;
case 0x5ed6d9:c.instructions+=6;goto B5ed6d9;
case 0x5ed6db:c.instructions+=5;goto B5ed6db;
case 0x5ed6dd:c.instructions+=4;goto B5ed6dd;
case 0x5ed6e0:c.instructions+=3;goto B5ed6e0;
case 0x5ed6e1:c.instructions+=2;goto B5ed6e1;
case 0x5ed6e3:c.instructions+=1;goto B5ed6e3;
case 0x5ed6e8:goto L5ed6e8;
case 0x5ed6ea:c.instructions+=6;goto B5ed6ea;
case 0x5ed6ec:c.instructions+=5;goto B5ed6ec;
case 0x5ed6ee:c.instructions+=4;goto B5ed6ee;
case 0x5ed6f1:c.instructions+=3;goto B5ed6f1;
case 0x5ed6f2:c.instructions+=2;goto B5ed6f2;
case 0x5ed6f4:c.instructions+=1;goto B5ed6f4;
case 0x5ed6f9:goto L5ed6f9;
case 0x5ed6fb:c.instructions+=6;goto B5ed6fb;
case 0x5ed6fd:c.instructions+=5;goto B5ed6fd;
case 0x5ed6ff:c.instructions+=4;goto B5ed6ff;
case 0x5ed702:c.instructions+=3;goto B5ed702;
case 0x5ed703:c.instructions+=2;goto B5ed703;
case 0x5ed705:c.instructions+=1;goto B5ed705;
case 0x5ed70a:goto L5ed70a;
case 0x5ed70c:c.instructions+=6;goto B5ed70c;
case 0x5ed70e:c.instructions+=5;goto B5ed70e;
case 0x5ed710:c.instructions+=4;goto B5ed710;
case 0x5ed713:c.instructions+=3;goto B5ed713;
case 0x5ed714:c.instructions+=2;goto B5ed714;
case 0x5ed716:c.instructions+=1;goto B5ed716;
case 0x5ed71b:goto L5ed71b;
case 0x5ed71e:c.instructions+=3;goto B5ed71e;
case 0x5ed71f:c.instructions+=2;goto B5ed71f;
case 0x5ed721:c.instructions+=1;goto B5ed721;
case 0x5ed726:goto L5ed726;
case 0x5ed728:c.instructions+=6;goto B5ed728;
case 0x5ed72a:c.instructions+=5;goto B5ed72a;
case 0x5ed72c:c.instructions+=4;goto B5ed72c;
case 0x5ed72f:c.instructions+=3;goto B5ed72f;
case 0x5ed730:c.instructions+=2;goto B5ed730;
case 0x5ed732:c.instructions+=1;goto B5ed732;
case 0x5ed737:goto L5ed737;
case 0x5ed739:c.instructions+=6;goto B5ed739;
case 0x5ed73b:c.instructions+=5;goto B5ed73b;
case 0x5ed73d:c.instructions+=4;goto B5ed73d;
case 0x5ed740:c.instructions+=3;goto B5ed740;
case 0x5ed741:c.instructions+=2;goto B5ed741;
case 0x5ed743:c.instructions+=1;goto B5ed743;
case 0x5ed748:goto L5ed748;
case 0x5ed74a:c.instructions+=6;goto B5ed74a;
case 0x5ed74c:c.instructions+=5;goto B5ed74c;
case 0x5ed74e:c.instructions+=4;goto B5ed74e;
case 0x5ed751:c.instructions+=3;goto B5ed751;
case 0x5ed752:c.instructions+=2;goto B5ed752;
case 0x5ed754:c.instructions+=1;goto B5ed754;
case 0x5ed759:goto L5ed759;
case 0x5ed75b:c.instructions+=6;goto B5ed75b;
case 0x5ed75d:c.instructions+=5;goto B5ed75d;
case 0x5ed75f:c.instructions+=4;goto B5ed75f;
case 0x5ed762:c.instructions+=3;goto B5ed762;
case 0x5ed763:c.instructions+=2;goto B5ed763;
case 0x5ed765:c.instructions+=1;goto B5ed765;
case 0x5ed76a:goto L5ed76a;
case 0x5ed76c:c.instructions+=6;goto B5ed76c;
case 0x5ed76e:c.instructions+=5;goto B5ed76e;
case 0x5ed770:c.instructions+=4;goto B5ed770;
case 0x5ed773:c.instructions+=3;goto B5ed773;
case 0x5ed774:c.instructions+=2;goto B5ed774;
case 0x5ed776:c.instructions+=1;goto B5ed776;
case 0x5ed77b:goto L5ed77b;
case 0x5ed77e:c.instructions+=3;goto B5ed77e;
case 0x5ed77f:c.instructions+=2;goto B5ed77f;
case 0x5ed781:c.instructions+=1;goto B5ed781;
case 0x5ed786:goto L5ed786;
case 0x5ed789:c.instructions+=3;goto B5ed789;
case 0x5ed78a:c.instructions+=2;goto B5ed78a;
case 0x5ed78c:c.instructions+=1;goto B5ed78c;
case 0x5ed791:goto L5ed791;
case 0x5ed792:c.instructions+=6;goto B5ed792;
case 0x5ed794:c.instructions+=5;goto B5ed794;
case 0x5ed796:c.instructions+=4;goto B5ed796;
case 0x5ed799:c.instructions+=3;goto B5ed799;
case 0x5ed79a:c.instructions+=2;goto B5ed79a;
case 0x5ed79c:c.instructions+=1;goto B5ed79c;
case 0x5ed7a1:goto L5ed7a1;
case 0x5ed7a3:c.instructions+=6;goto B5ed7a3;
case 0x5ed7a5:c.instructions+=5;goto B5ed7a5;
case 0x5ed7a7:c.instructions+=4;goto B5ed7a7;
case 0x5ed7aa:c.instructions+=3;goto B5ed7aa;
case 0x5ed7ab:c.instructions+=2;goto B5ed7ab;
case 0x5ed7ad:c.instructions+=1;goto B5ed7ad;
case 0x5ed7b2:goto L5ed7b2;
case 0x5ed7b3:c.instructions+=6;goto B5ed7b3;
case 0x5ed7b5:c.instructions+=5;goto B5ed7b5;
case 0x5ed7b7:c.instructions+=4;goto B5ed7b7;
case 0x5ed7ba:c.instructions+=3;goto B5ed7ba;
case 0x5ed7bb:c.instructions+=2;goto B5ed7bb;
case 0x5ed7bd:c.instructions+=1;goto B5ed7bd;
case 0x5ed7c2:goto L5ed7c2;
case 0x5ed7c3:c.instructions+=6;goto B5ed7c3;
case 0x5ed7c5:c.instructions+=5;goto B5ed7c5;
case 0x5ed7c7:c.instructions+=4;goto B5ed7c7;
case 0x5ed7ca:c.instructions+=3;goto B5ed7ca;
case 0x5ed7cb:c.instructions+=2;goto B5ed7cb;
case 0x5ed7cd:c.instructions+=1;goto B5ed7cd;
case 0x5ed7d2:goto L5ed7d2;
case 0x5ed7d3:c.instructions+=6;goto B5ed7d3;
case 0x5ed7d5:c.instructions+=5;goto B5ed7d5;
case 0x5ed7d7:c.instructions+=4;goto B5ed7d7;
case 0x5ed7da:c.instructions+=3;goto B5ed7da;
case 0x5ed7db:c.instructions+=2;goto B5ed7db;
case 0x5ed7dd:c.instructions+=1;goto B5ed7dd;
case 0x5ed7e2:goto L5ed7e2;
case 0x5ed7e3:c.instructions+=6;goto B5ed7e3;
case 0x5ed7e5:c.instructions+=5;goto B5ed7e5;
case 0x5ed7e7:c.instructions+=4;goto B5ed7e7;
case 0x5ed7ea:c.instructions+=3;goto B5ed7ea;
case 0x5ed7eb:c.instructions+=2;goto B5ed7eb;
case 0x5ed7ed:c.instructions+=1;goto B5ed7ed;
case 0x5ed7f2:goto L5ed7f2;
case 0x5ed7f3:c.instructions+=6;goto B5ed7f3;
case 0x5ed7f5:c.instructions+=5;goto B5ed7f5;
case 0x5ed7f7:c.instructions+=4;goto B5ed7f7;
case 0x5ed7fa:c.instructions+=3;goto B5ed7fa;
case 0x5ed7fb:c.instructions+=2;goto B5ed7fb;
case 0x5ed7fd:c.instructions+=1;goto B5ed7fd;
case 0x5ed802:goto L5ed802;
case 0x5ed803:c.instructions+=6;goto B5ed803;
case 0x5ed805:c.instructions+=5;goto B5ed805;
case 0x5ed807:c.instructions+=4;goto B5ed807;
case 0x5ed80a:c.instructions+=3;goto B5ed80a;
case 0x5ed80b:c.instructions+=2;goto B5ed80b;
case 0x5ed80d:c.instructions+=1;goto B5ed80d;
case 0x5ed812:goto L5ed812;
case 0x5ed814:c.instructions+=6;goto B5ed814;
case 0x5ed816:c.instructions+=5;goto B5ed816;
case 0x5ed818:c.instructions+=4;goto B5ed818;
case 0x5ed81b:c.instructions+=3;goto B5ed81b;
case 0x5ed81c:c.instructions+=2;goto B5ed81c;
case 0x5ed81e:c.instructions+=1;goto B5ed81e;
case 0x5ed823:goto L5ed823;
case 0x5ed825:c.instructions+=6;goto B5ed825;
case 0x5ed827:c.instructions+=5;goto B5ed827;
case 0x5ed829:c.instructions+=4;goto B5ed829;
case 0x5ed82c:c.instructions+=3;goto B5ed82c;
case 0x5ed82d:c.instructions+=2;goto B5ed82d;
case 0x5ed82f:c.instructions+=1;goto B5ed82f;
case 0x5ed834:goto L5ed834;
case 0x5ed837:c.instructions+=3;goto B5ed837;
case 0x5ed838:c.instructions+=2;goto B5ed838;
case 0x5ed83a:c.instructions+=1;goto B5ed83a;
case 0x5ed83f:goto L5ed83f;
case 0x5ed841:c.instructions+=6;goto B5ed841;
case 0x5ed843:c.instructions+=5;goto B5ed843;
case 0x5ed845:c.instructions+=4;goto B5ed845;
case 0x5ed848:c.instructions+=3;goto B5ed848;
case 0x5ed849:c.instructions+=2;goto B5ed849;
case 0x5ed84b:c.instructions+=1;goto B5ed84b;
case 0x5ed850:goto L5ed850;
case 0x5ed852:c.instructions+=6;goto B5ed852;
case 0x5ed854:c.instructions+=5;goto B5ed854;
case 0x5ed856:c.instructions+=4;goto B5ed856;
case 0x5ed859:c.instructions+=3;goto B5ed859;
case 0x5ed85a:c.instructions+=2;goto B5ed85a;
case 0x5ed85c:c.instructions+=1;goto B5ed85c;
case 0x5ed861:goto L5ed861;
case 0x5ed864:c.instructions+=3;goto B5ed864;
case 0x5ed865:c.instructions+=2;goto B5ed865;
case 0x5ed867:c.instructions+=1;goto B5ed867;
case 0x5ed86c:goto L5ed86c;
case 0x5ed86f:c.instructions+=3;goto B5ed86f;
case 0x5ed870:c.instructions+=2;goto B5ed870;
case 0x5ed872:c.instructions+=1;goto B5ed872;
case 0x5ed877:goto L5ed877;
case 0x5ed879:c.instructions+=6;goto B5ed879;
case 0x5ed87b:c.instructions+=5;goto B5ed87b;
case 0x5ed87d:c.instructions+=4;goto B5ed87d;
case 0x5ed880:c.instructions+=3;goto B5ed880;
case 0x5ed881:c.instructions+=2;goto B5ed881;
case 0x5ed883:c.instructions+=1;goto B5ed883;
case 0x5ed888:goto L5ed888;
case 0x5ed88a:c.instructions+=6;goto B5ed88a;
case 0x5ed88c:c.instructions+=5;goto B5ed88c;
case 0x5ed88e:c.instructions+=4;goto B5ed88e;
case 0x5ed891:c.instructions+=3;goto B5ed891;
case 0x5ed892:c.instructions+=2;goto B5ed892;
case 0x5ed894:c.instructions+=1;goto B5ed894;
case 0x5ed899:goto L5ed899;
case 0x5ed89b:c.instructions+=6;goto B5ed89b;
case 0x5ed89d:c.instructions+=5;goto B5ed89d;
case 0x5ed89f:c.instructions+=4;goto B5ed89f;
case 0x5ed8a2:c.instructions+=3;goto B5ed8a2;
case 0x5ed8a3:c.instructions+=2;goto B5ed8a3;
case 0x5ed8a5:c.instructions+=1;goto B5ed8a5;
case 0x5ed8aa:goto L5ed8aa;
case 0x5ed8ad:c.instructions+=3;goto B5ed8ad;
case 0x5ed8ae:c.instructions+=2;goto B5ed8ae;
case 0x5ed8b0:c.instructions+=1;goto B5ed8b0;
case 0x5ed8b5:goto L5ed8b5;
case 0x5ed8b7:c.instructions+=1;goto B5ed8b7;
case 0x5ed8b9:goto L5ed8b9;
case 0x5ed8bd:c.instructions+=1;goto B5ed8bd;
case 0x5ed8c0:goto L5ed8c0;
case 0x5ed8c3:c.instructions+=4;goto B5ed8c3;
case 0x5ed8c7:c.instructions+=3;goto B5ed8c7;
case 0x5ed8c8:c.instructions+=2;goto B5ed8c8;
case 0x5ed8ca:c.instructions+=1;goto B5ed8ca;
case 0x5ed8cf:goto L5ed8cf;
case 0x5ed8d3:c.instructions+=6;goto B5ed8d3;
case 0x5ed8d5:c.instructions+=5;goto B5ed8d5;
case 0x5ed8d6:c.instructions+=4;goto B5ed8d6;
case 0x5ed8dc:c.instructions+=3;goto B5ed8dc;
case 0x5ed8de:c.instructions+=2;goto B5ed8de;
case 0x5ed8e2:c.instructions+=1;goto B5ed8e2;
case 0x5ed8e4:goto L5ed8e4;
case 0x5ed8e6:c.instructions+=1;goto B5ed8e6;
case 0x5ed8eb:goto L5ed8eb;
case 0x5ed8ec:c.instructions+=4;goto B5ed8ec;
case 0x5ed8ed:c.instructions+=3;goto B5ed8ed;
case 0x5ed8ee:c.instructions+=2;goto B5ed8ee;
case 0x5ed8ef:c.instructions+=1;goto B5ed8ef;
case 0x5ed900:goto L5ed900;
case 0x5ed904:c.instructions+=4;goto B5ed904;
case 0x5ed907:c.instructions+=3;goto B5ed907;
case 0x5ed90d:c.instructions+=2;goto B5ed90d;
case 0x5ed90f:c.instructions+=1;goto B5ed90f;
case 0x5ed920:goto L5ed920;
case 0x5ed923:c.instructions+=6;goto B5ed923;
case 0x5ed924:c.instructions+=5;goto B5ed924;
case 0x5ed925:c.instructions+=4;goto B5ed925;
case 0x5ed927:c.instructions+=3;goto B5ed927;
case 0x5ed929:c.instructions+=2;goto B5ed929;
case 0x5ed92a:c.instructions+=1;goto B5ed92a;
case 0x5ed92c:goto L5ed92c;
case 0x5ed92f:c.instructions+=2;goto B5ed92f;
case 0x5ed933:c.instructions+=1;goto B5ed933;
case 0x5ed936:goto L5ed936;
case 0x5ed939:c.instructions+=2;goto B5ed939;
case 0x5ed93b:c.instructions+=1;goto B5ed93b;
case 0x5ed93d:goto L5ed93d;
case 0x5ed93e:c.instructions+=3;goto B5ed93e;
case 0x5ed944:c.instructions+=2;goto B5ed944;
case 0x5ed946:c.instructions+=1;goto B5ed946;
case 0x5ed948:goto L5ed948;
case 0x5ed949:c.instructions+=4;goto B5ed949;
case 0x5ed94a:c.instructions+=3;goto B5ed94a;
case 0x5ed94c:c.instructions+=2;goto B5ed94c;
case 0x5ed94d:c.instructions+=1;goto B5ed94d;
case 0x5ed950:goto L5ed950;
case 0x5ed956:c.instructions+=5;goto B5ed956;
case 0x5ed957:c.instructions+=4;goto B5ed957;
case 0x5ed959:c.instructions+=3;goto B5ed959;
case 0x5ed95a:c.instructions+=2;goto B5ed95a;
case 0x5ed95b:c.instructions+=1;goto B5ed95b;
case 0x5ed960:goto L5ed960;
case 0x5ed964:c.instructions+=3;goto B5ed964;
case 0x5ed968:c.instructions+=2;goto B5ed968;
case 0x5ed96b:c.instructions+=1;goto B5ed96b;
case 0x5ed96d:goto L5ed96d;
case 0x5ed971:c.instructions+=1;goto B5ed971;
case 0x5ed976:goto L5ed976;
case 0x5ed978:c.instructions+=1;goto B5ed978;
case 0x5ed980:goto L5ed980;
case 0x5ed984:c.instructions+=2;goto B5ed984;
case 0x5ed988:c.instructions+=1;goto B5ed988;
case 0x5ed990:goto L5ed990;
case 0x5ed993:c.instructions+=2;goto B5ed993;
case 0x5ed995:c.instructions+=1;goto B5ed995;
case 0x5ed997:goto L5ed997;
case 0x5ed999:c.instructions+=1;goto B5ed999;
case 0x5ed99a:goto L5ed99a;
case 0x5ed99d:c.instructions+=1;goto B5ed99d;
case 0x5ed99f:goto L5ed99f;
case 0x5ed9a2:c.instructions+=2;goto B5ed9a2;
case 0x5ed9a4:c.instructions+=1;goto B5ed9a4;
case 0x5ed9a6:goto L5ed9a6;
case 0x5ed9ab:c.instructions+=1;goto B5ed9ab;
case 0x5ed9ac:goto L5ed9ac;
case 0x5ed9ae:c.instructions+=1;goto B5ed9ae;
case 0x5ed9b0:goto L5ed9b0;
case 0x5ed9b3:c.instructions+=8;goto B5ed9b3;
case 0x5ed9b4:c.instructions+=7;goto B5ed9b4;
case 0x5ed9b5:c.instructions+=6;goto B5ed9b5;
case 0x5ed9b6:c.instructions+=5;goto B5ed9b6;
case 0x5ed9ba:c.instructions+=4;goto B5ed9ba;
case 0x5ed9bb:c.instructions+=3;goto B5ed9bb;
case 0x5ed9bd:c.instructions+=2;goto B5ed9bd;
case 0x5ed9c2:c.instructions+=1;goto B5ed9c2;
case 0x5ed9c4:goto L5ed9c4;
case 0x5ed9c6:goto L5ed9c6;
case 0x5ed9cb:c.instructions+=2;goto B5ed9cb;
case 0x5ed9cd:c.instructions+=1;goto B5ed9cd;
case 0x5ed9cf:goto L5ed9cf;
case 0x5ed9d4:c.instructions+=2;goto B5ed9d4;
case 0x5ed9d6:c.instructions+=1;goto B5ed9d6;
case 0x5ed9d8:goto L5ed9d8;
case 0x5ed9dd:c.instructions+=3;goto B5ed9dd;
case 0x5ed9e2:c.instructions+=2;goto B5ed9e2;
case 0x5ed9e4:c.instructions+=1;goto B5ed9e4;
case 0x5ed9e6:goto L5ed9e6;
case 0x5ed9e8:goto L5ed9e8;
case 0x5ed9ea:c.instructions+=3;goto B5ed9ea;
case 0x5ed9ef:c.instructions+=2;goto B5ed9ef;
case 0x5ed9f4:c.instructions+=1;goto B5ed9f4;
case 0x5ed9f8:goto L5ed9f8;
case 0x5ed9fa:goto L5ed9fa;
case 0x5ed9fc:c.instructions+=7;goto B5ed9fc;
case 0x5ed9fd:c.instructions+=6;goto B5ed9fd;
case 0x5eda01:c.instructions+=5;goto B5eda01;
case 0x5eda02:c.instructions+=4;goto B5eda02;
case 0x5eda06:c.instructions+=3;goto B5eda06;
case 0x5eda0b:c.instructions+=2;goto B5eda0b;
case 0x5eda0c:c.instructions+=1;goto B5eda0c;
case 0x5eda11:goto L5eda11;
case 0x5eda14:c.instructions+=3;goto B5eda14;
case 0x5eda16:c.instructions+=2;goto B5eda16;
case 0x5eda1b:c.instructions+=1;goto B5eda1b;
case 0x5eda1d:goto L5eda1d;
case 0x5eda21:goto L5eda21;
case 0x5eda22:c.instructions+=1;goto B5eda22;
case 0x5eda27:goto L5eda27;
case 0x5eda2a:c.instructions+=4;goto B5eda2a;
case 0x5eda2c:c.instructions+=3;goto B5eda2c;
case 0x5eda2f:c.instructions+=2;goto B5eda2f;
case 0x5eda34:c.instructions+=1;goto B5eda34;
case 0x5eda36:goto L5eda36;
case 0x5eda3b:goto L5eda3b;
case 0x5eda3c:c.instructions+=1;goto B5eda3c;
case 0x5eda41:goto L5eda41;
case 0x5eda44:c.instructions+=5;goto B5eda44;
case 0x5eda46:c.instructions+=4;goto B5eda46;
case 0x5eda48:c.instructions+=3;goto B5eda48;
case 0x5eda4a:c.instructions+=2;goto B5eda4a;
case 0x5eda4c:c.instructions+=1;goto B5eda4c;
case 0x5eda52:goto L5eda52;
case 0x5eda56:c.instructions+=5;goto B5eda56;
case 0x5eda57:c.instructions+=4;goto B5eda57;
case 0x5eda5b:c.instructions+=3;goto B5eda5b;
case 0x5eda60:c.instructions+=2;goto B5eda60;
case 0x5eda61:c.instructions+=1;goto B5eda61;
case 0x5eda66:goto L5eda66;
case 0x5eda6a:c.instructions+=2;goto B5eda6a;
case 0x5eda6b:c.instructions+=1;goto B5eda6b;
case 0x5eda70:goto L5eda70;
case 0x5eda74:c.instructions+=7;goto B5eda74;
case 0x5eda77:c.instructions+=6;goto B5eda77;
case 0x5eda7b:c.instructions+=5;goto B5eda7b;
case 0x5eda7c:c.instructions+=4;goto B5eda7c;
case 0x5eda80:c.instructions+=3;goto B5eda80;
case 0x5eda85:c.instructions+=2;goto B5eda85;
case 0x5eda86:c.instructions+=1;goto B5eda86;
case 0x5eda8b:goto L5eda8b;
case 0x5eda8f:c.instructions+=2;goto B5eda8f;
case 0x5eda90:c.instructions+=1;goto B5eda90;
case 0x5eda95:goto L5eda95;
case 0x5eda99:c.instructions+=7;goto B5eda99;
case 0x5eda9d:c.instructions+=6;goto B5eda9d;
case 0x5eda9e:c.instructions+=5;goto B5eda9e;
case 0x5edaa1:c.instructions+=4;goto B5edaa1;
case 0x5edaa5:c.instructions+=3;goto B5edaa5;
case 0x5edaaa:c.instructions+=2;goto B5edaaa;
case 0x5edaab:c.instructions+=1;goto B5edaab;
case 0x5edab0:goto L5edab0;
case 0x5edab4:c.instructions+=2;goto B5edab4;
case 0x5edab5:c.instructions+=1;goto B5edab5;
case 0x5edaba:goto L5edaba;
case 0x5edabe:c.instructions+=7;goto B5edabe;
case 0x5edac1:c.instructions+=6;goto B5edac1;
case 0x5edac5:c.instructions+=5;goto B5edac5;
case 0x5edac6:c.instructions+=4;goto B5edac6;
case 0x5edaca:c.instructions+=3;goto B5edaca;
case 0x5edacf:c.instructions+=2;goto B5edacf;
case 0x5edad0:c.instructions+=1;goto B5edad0;
case 0x5edad5:goto L5edad5;
case 0x5edad9:c.instructions+=2;goto B5edad9;
case 0x5edada:c.instructions+=1;goto B5edada;
case 0x5edadf:goto L5edadf;
case 0x5edae6:c.instructions+=2;goto B5edae6;
case 0x5edae9:c.instructions+=1;goto B5edae9;
case 0x5edaec:goto L5edaec;
case 0x5edaf0:c.instructions+=2;goto B5edaf0;
case 0x5edaf1:c.instructions+=1;goto B5edaf1;
case 0x5edaf6:goto L5edaf6;
case 0x5edaf9:c.instructions+=2;goto B5edaf9;
case 0x5edafc:c.instructions+=1;goto B5edafc;
case 0x5edb02:goto L5edb02;
case 0x5edb09:goto L5edb09;
case 0x5edb0b:c.instructions+=1;goto B5edb0b;
case 0x5edb0d:goto L5edb0d;
case 0x5edb0e:c.instructions+=2;goto B5edb0e;
case 0x5edb13:c.instructions+=1;goto B5edb13;
case 0x5edb18:goto L5edb18;
case 0x5edb1a:c.instructions+=3;goto B5edb1a;
case 0x5edb1d:c.instructions+=2;goto B5edb1d;
case 0x5edb22:c.instructions+=1;goto B5edb22;
case 0x5edb27:goto L5edb27;
case 0x5edb2b:c.instructions+=5;goto B5edb2b;
case 0x5edb2c:c.instructions+=4;goto B5edb2c;
case 0x5edb30:c.instructions+=3;goto B5edb30;
case 0x5edb35:c.instructions+=2;goto B5edb35;
case 0x5edb36:c.instructions+=1;goto B5edb36;
case 0x5edb3b:goto L5edb3b;
case 0x5edb3f:c.instructions+=2;goto B5edb3f;
case 0x5edb40:c.instructions+=1;goto B5edb40;
case 0x5edb45:goto L5edb45;
case 0x5edb47:c.instructions+=3;goto B5edb47;
case 0x5edb4a:c.instructions+=2;goto B5edb4a;
case 0x5edb4f:c.instructions+=1;goto B5edb4f;
case 0x5edb54:goto L5edb54;
case 0x5edb56:c.instructions+=1;goto B5edb56;
case 0x5edb58:goto L5edb58;
case 0x5edb59:c.instructions+=2;goto B5edb59;
case 0x5edb5e:c.instructions+=1;goto B5edb5e;
case 0x5edb63:goto L5edb63;
case 0x5edb65:c.instructions+=3;goto B5edb65;
case 0x5edb68:c.instructions+=2;goto B5edb68;
case 0x5edb6d:c.instructions+=1;goto B5edb6d;
case 0x5edb72:goto L5edb72;
case 0x5edb76:c.instructions+=5;goto B5edb76;
case 0x5edb77:c.instructions+=4;goto B5edb77;
case 0x5edb7b:c.instructions+=3;goto B5edb7b;
case 0x5edb80:c.instructions+=2;goto B5edb80;
case 0x5edb81:c.instructions+=1;goto B5edb81;
case 0x5edb86:goto L5edb86;
case 0x5edb8a:c.instructions+=2;goto B5edb8a;
case 0x5edb8b:c.instructions+=1;goto B5edb8b;
case 0x5edb90:goto L5edb90;
case 0x5edb92:c.instructions+=3;goto B5edb92;
case 0x5edb95:c.instructions+=2;goto B5edb95;
case 0x5edb9a:c.instructions+=1;goto B5edb9a;
case 0x5edb9f:goto L5edb9f;
case 0x5edba1:c.instructions+=1;goto B5edba1;
case 0x5edba3:goto L5edba3;
case 0x5edba4:c.instructions+=2;goto B5edba4;
case 0x5edba9:c.instructions+=1;goto B5edba9;
case 0x5edbae:goto L5edbae;
case 0x5edbb0:c.instructions+=3;goto B5edbb0;
case 0x5edbb3:c.instructions+=2;goto B5edbb3;
case 0x5edbb8:c.instructions+=1;goto B5edbb8;
case 0x5edbbd:goto L5edbbd;
case 0x5edbc1:c.instructions+=5;goto B5edbc1;
case 0x5edbc2:c.instructions+=4;goto B5edbc2;
case 0x5edbc6:c.instructions+=3;goto B5edbc6;
case 0x5edbcb:c.instructions+=2;goto B5edbcb;
case 0x5edbcc:c.instructions+=1;goto B5edbcc;
case 0x5edbd1:goto L5edbd1;
case 0x5edbd5:c.instructions+=2;goto B5edbd5;
case 0x5edbd6:c.instructions+=1;goto B5edbd6;
case 0x5edbdb:goto L5edbdb;
case 0x5edbdd:c.instructions+=3;goto B5edbdd;
case 0x5edbe0:c.instructions+=2;goto B5edbe0;
case 0x5edbe5:c.instructions+=1;goto B5edbe5;
case 0x5edbea:goto L5edbea;
case 0x5edbec:c.instructions+=1;goto B5edbec;
case 0x5edbee:goto L5edbee;
case 0x5edbef:c.instructions+=2;goto B5edbef;
case 0x5edbf4:c.instructions+=1;goto B5edbf4;
case 0x5edbf9:goto L5edbf9;
case 0x5edbfb:c.instructions+=3;goto B5edbfb;
case 0x5edbfe:c.instructions+=2;goto B5edbfe;
case 0x5edc03:c.instructions+=1;goto B5edc03;
case 0x5edc08:goto L5edc08;
case 0x5edc0c:c.instructions+=5;goto B5edc0c;
case 0x5edc0d:c.instructions+=4;goto B5edc0d;
case 0x5edc11:c.instructions+=3;goto B5edc11;
case 0x5edc16:c.instructions+=2;goto B5edc16;
case 0x5edc17:c.instructions+=1;goto B5edc17;
case 0x5edc1c:goto L5edc1c;
case 0x5edc20:c.instructions+=2;goto B5edc20;
case 0x5edc21:c.instructions+=1;goto B5edc21;
case 0x5edc26:goto L5edc26;
case 0x5edc28:c.instructions+=3;goto B5edc28;
case 0x5edc2b:c.instructions+=2;goto B5edc2b;
case 0x5edc30:c.instructions+=1;goto B5edc30;
case 0x5edc35:goto L5edc35;
case 0x5edc37:c.instructions+=1;goto B5edc37;
case 0x5edc39:goto L5edc39;
case 0x5edc3a:c.instructions+=2;goto B5edc3a;
case 0x5edc3f:c.instructions+=1;goto B5edc3f;
case 0x5edc44:goto L5edc44;
case 0x5edc46:c.instructions+=3;goto B5edc46;
case 0x5edc49:c.instructions+=2;goto B5edc49;
case 0x5edc4e:c.instructions+=1;goto B5edc4e;
case 0x5edc53:goto L5edc53;
case 0x5edc57:c.instructions+=5;goto B5edc57;
case 0x5edc58:c.instructions+=4;goto B5edc58;
case 0x5edc5c:c.instructions+=3;goto B5edc5c;
case 0x5edc61:c.instructions+=2;goto B5edc61;
case 0x5edc62:c.instructions+=1;goto B5edc62;
case 0x5edc67:goto L5edc67;
case 0x5edc6b:c.instructions+=2;goto B5edc6b;
case 0x5edc6c:c.instructions+=1;goto B5edc6c;
case 0x5edc71:goto L5edc71;
case 0x5edc73:c.instructions+=3;goto B5edc73;
case 0x5edc76:c.instructions+=2;goto B5edc76;
case 0x5edc7b:c.instructions+=1;goto B5edc7b;
case 0x5edc80:goto L5edc80;
case 0x5edc82:c.instructions+=1;goto B5edc82;
case 0x5edc84:goto L5edc84;
case 0x5edc85:c.instructions+=2;goto B5edc85;
case 0x5edc8a:c.instructions+=1;goto B5edc8a;
case 0x5edc8f:goto L5edc8f;
case 0x5edc91:c.instructions+=3;goto B5edc91;
case 0x5edc94:c.instructions+=2;goto B5edc94;
case 0x5edc99:c.instructions+=1;goto B5edc99;
case 0x5edc9e:goto L5edc9e;
case 0x5edca2:c.instructions+=5;goto B5edca2;
case 0x5edca3:c.instructions+=4;goto B5edca3;
case 0x5edca7:c.instructions+=3;goto B5edca7;
case 0x5edcac:c.instructions+=2;goto B5edcac;
case 0x5edcad:c.instructions+=1;goto B5edcad;
case 0x5edcb2:goto L5edcb2;
case 0x5edcb6:c.instructions+=2;goto B5edcb6;
case 0x5edcb7:c.instructions+=1;goto B5edcb7;
case 0x5edcbc:goto L5edcbc;
case 0x5edcbe:c.instructions+=3;goto B5edcbe;
case 0x5edcc1:c.instructions+=2;goto B5edcc1;
case 0x5edcc6:c.instructions+=1;goto B5edcc6;
case 0x5edccb:goto L5edccb;
case 0x5edccd:c.instructions+=1;goto B5edccd;
case 0x5edccf:goto L5edccf;
case 0x5edcd0:c.instructions+=2;goto B5edcd0;
case 0x5edcd5:c.instructions+=1;goto B5edcd5;
case 0x5edcda:goto L5edcda;
case 0x5edcdc:c.instructions+=3;goto B5edcdc;
case 0x5edcdf:c.instructions+=2;goto B5edcdf;
case 0x5edce4:c.instructions+=1;goto B5edce4;
case 0x5edce6:goto L5edce6;
case 0x5edcea:c.instructions+=5;goto B5edcea;
case 0x5edceb:c.instructions+=4;goto B5edceb;
case 0x5edcef:c.instructions+=3;goto B5edcef;
case 0x5edcf4:c.instructions+=2;goto B5edcf4;
case 0x5edcf5:c.instructions+=1;goto B5edcf5;
case 0x5edcfa:goto L5edcfa;
case 0x5edcfe:c.instructions+=2;goto B5edcfe;
case 0x5edcff:c.instructions+=1;goto B5edcff;
case 0x5edd04:goto L5edd04;
case 0x5edd06:c.instructions+=3;goto B5edd06;
case 0x5edd09:c.instructions+=2;goto B5edd09;
case 0x5edd0e:c.instructions+=1;goto B5edd0e;
case 0x5edd10:goto L5edd10;
case 0x5edd12:c.instructions+=1;goto B5edd12;
case 0x5edd14:goto L5edd14;
case 0x5edd15:c.instructions+=2;goto B5edd15;
case 0x5edd1a:c.instructions+=1;goto B5edd1a;
case 0x5edd1f:goto L5edd1f;
case 0x5edd21:c.instructions+=3;goto B5edd21;
case 0x5edd24:c.instructions+=2;goto B5edd24;
case 0x5edd29:c.instructions+=1;goto B5edd29;
case 0x5edd2b:goto L5edd2b;
case 0x5edd2f:c.instructions+=5;goto B5edd2f;
case 0x5edd30:c.instructions+=4;goto B5edd30;
case 0x5edd34:c.instructions+=3;goto B5edd34;
case 0x5edd39:c.instructions+=2;goto B5edd39;
case 0x5edd3a:c.instructions+=1;goto B5edd3a;
case 0x5edd3f:goto L5edd3f;
case 0x5edd43:c.instructions+=2;goto B5edd43;
case 0x5edd44:c.instructions+=1;goto B5edd44;
case 0x5edd49:goto L5edd49;
case 0x5edd4b:c.instructions+=2;goto B5edd4b;
case 0x5edd4e:c.instructions+=1;goto B5edd4e;
case 0x5edd53:goto L5edd53;
case 0x5edd54:c.instructions+=2;goto B5edd54;
case 0x5edd55:c.instructions+=1;goto B5edd55;
case 0x5edd5a:goto L5edd5a;
case 0x5edd5d:c.instructions+=1;goto B5edd5d;
case 0x5edd5f:goto L5edd5f;
case 0x5edd63:c.instructions+=8;goto B5edd63;
case 0x5edd64:c.instructions+=7;goto B5edd64;
case 0x5edd67:c.instructions+=6;goto B5edd67;
case 0x5edd68:c.instructions+=5;goto B5edd68;
case 0x5edd6a:c.instructions+=4;goto B5edd6a;
case 0x5edd6b:c.instructions+=3;goto B5edd6b;
case 0x5edd6c:c.instructions+=2;goto B5edd6c;
case 0x5edd6f:c.instructions+=1;goto B5edd6f;
case 0x5edd90:goto L5edd90;
case 0x5edd91:c.instructions+=7;goto B5edd91;
case 0x5edd95:c.instructions+=6;goto B5edd95;
case 0x5edd96:c.instructions+=5;goto B5edd96;
case 0x5edd9c:c.instructions+=4;goto B5edd9c;
case 0x5edd9e:c.instructions+=3;goto B5edd9e;
case 0x5edda0:c.instructions+=2;goto B5edda0;
case 0x5edda3:c.instructions+=1;goto B5edda3;
case 0x5edda5:goto L5edda5;
case 0x5eddad:goto L5eddad;
case 0x5eddb1:c.instructions+=1;goto B5eddb1;
case 0x5eddb6:goto L5eddb6;
case 0x5eddba:c.instructions+=6;goto B5eddba;
case 0x5eddbe:c.instructions+=5;goto B5eddbe;
case 0x5eddc2:c.instructions+=4;goto B5eddc2;
case 0x5eddc4:c.instructions+=3;goto B5eddc4;
case 0x5eddca:c.instructions+=2;goto B5eddca;
case 0x5eddcc:c.instructions+=1;goto B5eddcc;
case 0x5eddd1:goto L5eddd1;
case 0x5eddd5:c.instructions+=4;goto B5eddd5;
case 0x5eddd7:c.instructions+=3;goto B5eddd7;
case 0x5edddb:c.instructions+=2;goto B5edddb;
case 0x5edddf:c.instructions+=1;goto B5edddf;
case 0x5edde1:goto L5edde1;
case 0x5edde5:c.instructions+=13;goto B5edde5;
case 0x5eddeb:c.instructions+=12;goto B5eddeb;
case 0x5edded:c.instructions+=11;goto B5edded;
case 0x5eddef:c.instructions+=10;goto B5eddef;
case 0x5eddf1:c.instructions+=9;goto B5eddf1;
case 0x5eddf3:c.instructions+=8;goto B5eddf3;
case 0x5eddf4:c.instructions+=7;goto B5eddf4;
case 0x5eddf6:c.instructions+=6;goto B5eddf6;
case 0x5eddf8:c.instructions+=5;goto B5eddf8;
case 0x5eddfb:c.instructions+=4;goto B5eddfb;
case 0x5eddfd:c.instructions+=3;goto B5eddfd;
case 0x5eddff:c.instructions+=2;goto B5eddff;
case 0x5ede00:c.instructions+=1;goto B5ede00;
case 0x5ede03:goto L5ede03;
case 0x5ede05:c.instructions+=4;goto B5ede05;
case 0x5ede06:c.instructions+=3;goto B5ede06;
case 0x5ede08:c.instructions+=2;goto B5ede08;
case 0x5ede09:c.instructions+=1;goto B5ede09;
case 0x5ede10:goto L5ede10;
case 0x5ede12:c.instructions+=14;goto B5ede12;
case 0x5ede17:c.instructions+=13;goto B5ede17;
case 0x5ede19:c.instructions+=12;goto B5ede19;
case 0x5ede1c:c.instructions+=11;goto B5ede1c;
case 0x5ede1f:c.instructions+=10;goto B5ede1f;
case 0x5ede22:c.instructions+=9;goto B5ede22;
case 0x5ede25:c.instructions+=8;goto B5ede25;
case 0x5ede28:c.instructions+=7;goto B5ede28;
case 0x5ede2b:c.instructions+=6;goto B5ede2b;
case 0x5ede2e:c.instructions+=5;goto B5ede2e;
case 0x5ede35:c.instructions+=4;goto B5ede35;
case 0x5ede38:c.instructions+=3;goto B5ede38;
case 0x5ede3b:c.instructions+=2;goto B5ede3b;
case 0x5ede3e:c.instructions+=1;goto B5ede3e;
case 0x5ede40:goto L5ede40;
case 0x5ede42:c.instructions+=10;goto B5ede42;
case 0x5ede47:c.instructions+=9;goto B5ede47;
case 0x5ede4d:c.instructions+=8;goto B5ede4d;
case 0x5ede4e:c.instructions+=7;goto B5ede4e;
case 0x5ede55:c.instructions+=6;goto B5ede55;
case 0x5ede56:c.instructions+=5;goto B5ede56;
case 0x5ede57:c.instructions+=4;goto B5ede57;
case 0x5ede59:c.instructions+=3;goto B5ede59;
case 0x5ede5c:c.instructions+=2;goto B5ede5c;
case 0x5ede5e:c.instructions+=1;goto B5ede5e;
case 0x5ede60:goto L5ede60;
case 0x5ede62:c.instructions+=2;goto B5ede62;
case 0x5ede64:c.instructions+=1;goto B5ede64;
case 0x5ede66:goto L5ede66;
case 0x5ede68:c.instructions+=1;goto B5ede68;
case 0x5ede6d:goto L5ede6d;
case 0x5ede70:c.instructions+=4;goto B5ede70;
case 0x5ede74:c.instructions+=3;goto B5ede74;
case 0x5ede76:c.instructions+=2;goto B5ede76;
case 0x5ede7e:c.instructions+=1;goto B5ede7e;
case 0x5ede80:goto L5ede80;
case 0x5ede82:c.instructions+=2;goto B5ede82;
case 0x5ede84:c.instructions+=1;goto B5ede84;
case 0x5ede89:goto L5ede89;
case 0x5ede8c:c.instructions+=5;goto B5ede8c;
case 0x5ede8d:c.instructions+=4;goto B5ede8d;
case 0x5ede91:c.instructions+=3;goto B5ede91;
case 0x5ede98:c.instructions+=2;goto B5ede98;
case 0x5ede9b:c.instructions+=1;goto B5ede9b;
case 0x5ede9c:goto L5ede9c;
case 0x5edea0:c.instructions+=6;goto B5edea0;
case 0x5edea2:c.instructions+=5;goto B5edea2;
case 0x5edea5:c.instructions+=4;goto B5edea5;
case 0x5edea6:c.instructions+=3;goto B5edea6;
case 0x5edead:c.instructions+=2;goto B5edead;
case 0x5edeb0:c.instructions+=1;goto B5edeb0;
case 0x5edec0:goto L5edec0;
case 0x5edec1:c.instructions+=7;goto B5edec1;
case 0x5edec5:c.instructions+=6;goto B5edec5;
case 0x5edec6:c.instructions+=5;goto B5edec6;
case 0x5edecb:c.instructions+=4;goto B5edecb;
case 0x5edecd:c.instructions+=3;goto B5edecd;
case 0x5edecf:c.instructions+=2;goto B5edecf;
case 0x5eded1:c.instructions+=1;goto B5eded1;
case 0x5eded6:goto L5eded6;
case 0x5eded7:c.instructions+=2;goto B5eded7;
case 0x5eded9:c.instructions+=1;goto B5eded9;
case 0x5edede:goto L5edede;
case 0x5edee1:c.instructions+=3;goto B5edee1;
case 0x5edee2:c.instructions+=2;goto B5edee2;
case 0x5edee4:c.instructions+=1;goto B5edee4;
case 0x5edee9:goto L5edee9;
case 0x5edeec:c.instructions+=3;goto B5edeec;
case 0x5edeed:c.instructions+=2;goto B5edeed;
case 0x5edeef:c.instructions+=1;goto B5edeef;
case 0x5edef4:goto L5edef4;
case 0x5edef7:c.instructions+=3;goto B5edef7;
case 0x5edef8:c.instructions+=2;goto B5edef8;
case 0x5edefa:c.instructions+=1;goto B5edefa;
case 0x5edeff:goto L5edeff;
case 0x5edf02:c.instructions+=3;goto B5edf02;
case 0x5edf03:c.instructions+=2;goto B5edf03;
case 0x5edf05:c.instructions+=1;goto B5edf05;
case 0x5edf0a:goto L5edf0a;
case 0x5edf0d:c.instructions+=3;goto B5edf0d;
case 0x5edf0e:c.instructions+=2;goto B5edf0e;
case 0x5edf10:c.instructions+=1;goto B5edf10;
case 0x5edf15:goto L5edf15;
case 0x5edf17:c.instructions+=6;goto B5edf17;
case 0x5edf19:c.instructions+=5;goto B5edf19;
case 0x5edf1b:c.instructions+=4;goto B5edf1b;
case 0x5edf1e:c.instructions+=3;goto B5edf1e;
case 0x5edf1f:c.instructions+=2;goto B5edf1f;
case 0x5edf21:c.instructions+=1;goto B5edf21;
case 0x5edf26:goto L5edf26;
case 0x5edf28:c.instructions+=6;goto B5edf28;
case 0x5edf2a:c.instructions+=5;goto B5edf2a;
case 0x5edf2c:c.instructions+=4;goto B5edf2c;
case 0x5edf2f:c.instructions+=3;goto B5edf2f;
case 0x5edf30:c.instructions+=2;goto B5edf30;
case 0x5edf32:c.instructions+=1;goto B5edf32;
case 0x5edf37:goto L5edf37;
case 0x5edf3a:c.instructions+=3;goto B5edf3a;
case 0x5edf3b:c.instructions+=2;goto B5edf3b;
case 0x5edf3d:c.instructions+=1;goto B5edf3d;
case 0x5edf42:goto L5edf42;
case 0x5edf45:c.instructions+=3;goto B5edf45;
case 0x5edf46:c.instructions+=2;goto B5edf46;
case 0x5edf48:c.instructions+=1;goto B5edf48;
case 0x5edf4d:goto L5edf4d;
case 0x5edf50:c.instructions+=3;goto B5edf50;
case 0x5edf51:c.instructions+=2;goto B5edf51;
case 0x5edf53:c.instructions+=1;goto B5edf53;
case 0x5edf58:goto L5edf58;
case 0x5edf5a:c.instructions+=6;goto B5edf5a;
case 0x5edf5c:c.instructions+=5;goto B5edf5c;
case 0x5edf5e:c.instructions+=4;goto B5edf5e;
case 0x5edf61:c.instructions+=3;goto B5edf61;
case 0x5edf62:c.instructions+=2;goto B5edf62;
case 0x5edf64:c.instructions+=1;goto B5edf64;
case 0x5edf69:goto L5edf69;
case 0x5edf6c:c.instructions+=4;goto B5edf6c;
case 0x5edf6f:c.instructions+=3;goto B5edf6f;
case 0x5edf70:c.instructions+=2;goto B5edf70;
case 0x5edf71:c.instructions+=1;goto B5edf71;
case 0x5edf76:goto L5edf76;
case 0x5edf78:c.instructions+=1;goto B5edf78;
case 0x5edf7d:goto L5edf7d;
case 0x5edf7e:c.instructions+=2;goto B5edf7e;
case 0x5edf7f:c.instructions+=1;goto B5edf7f;
case 0x5edf90:goto L5edf90;
case 0x5edf91:c.instructions+=7;goto B5edf91;
case 0x5edf92:c.instructions+=6;goto B5edf92;
case 0x5edf96:c.instructions+=5;goto B5edf96;
case 0x5edf9b:c.instructions+=4;goto B5edf9b;
case 0x5edf9d:c.instructions+=3;goto B5edf9d;
case 0x5edf9f:c.instructions+=2;goto B5edf9f;
case 0x5edfa1:c.instructions+=1;goto B5edfa1;
case 0x5edfa6:goto L5edfa6;
case 0x5edfa9:c.instructions+=3;goto B5edfa9;
case 0x5edfaa:c.instructions+=2;goto B5edfaa;
case 0x5edfac:c.instructions+=1;goto B5edfac;
case 0x5edfb1:goto L5edfb1;
case 0x5edfb4:c.instructions+=3;goto B5edfb4;
case 0x5edfb5:c.instructions+=2;goto B5edfb5;
case 0x5edfb7:c.instructions+=1;goto B5edfb7;
case 0x5edfbc:goto L5edfbc;
case 0x5edfbf:c.instructions+=3;goto B5edfbf;
case 0x5edfc0:c.instructions+=2;goto B5edfc0;
case 0x5edfc2:c.instructions+=1;goto B5edfc2;
case 0x5edfc7:goto L5edfc7;
case 0x5edfca:c.instructions+=3;goto B5edfca;
case 0x5edfcb:c.instructions+=2;goto B5edfcb;
case 0x5edfcd:c.instructions+=1;goto B5edfcd;
case 0x5edfd2:goto L5edfd2;
case 0x5edfd5:c.instructions+=3;goto B5edfd5;
case 0x5edfd6:c.instructions+=2;goto B5edfd6;
case 0x5edfd8:c.instructions+=1;goto B5edfd8;
case 0x5edfdd:goto L5edfdd;
case 0x5edfe0:c.instructions+=3;goto B5edfe0;
case 0x5edfe1:c.instructions+=2;goto B5edfe1;
case 0x5edfe3:c.instructions+=1;goto B5edfe3;
case 0x5edfe8:goto L5edfe8;
case 0x5edfeb:c.instructions+=3;goto B5edfeb;
case 0x5edfec:c.instructions+=2;goto B5edfec;
case 0x5edfee:c.instructions+=1;goto B5edfee;
case 0x5edff3:goto L5edff3;
case 0x5edff6:c.instructions+=3;goto B5edff6;
case 0x5edff7:c.instructions+=2;goto B5edff7;
case 0x5edff9:c.instructions+=1;goto B5edff9;
case 0x5edffe:goto L5edffe;
default:missing_instruction(c.pc);}
B5ed001:L5ed001:{c.instructions+=3;NFSU2_TR(0x5ed001);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ed004:{NFSU2_TR(0x5ed004);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5ed006:{NFSU2_TR(0x5ed006);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x84ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ed00cull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5ed00c:L5ed00c:{c.instructions+=3;NFSU2_TR(0x5ed00c);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w2(U+4,u16(u32(r2(R+0))&u32(r2(R+0))));
w1(R+519,u8(s16(r2(U+4))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+4))==(u16(0x0ull))));
w2(U+0,u16(u32(r2(U+4))&u32(u16(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r2(U+0)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B5ed00f:{NFSU2_TR(0x5ed00f);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ed013:{NFSU2_TR(0x5ed013);
if(r1(R+518)){{goto L5ed19c;}}
}
B5ed019:L5ed019:{c.instructions+=3;NFSU2_TR(0x5ed019);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xc0ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5ed01f:{NFSU2_TR(0x5ed01f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ed020:{NFSU2_TR(0x5ed020);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ed025ull));
TAIL_STATIC(0x440f70u,440);
}
B5ed025:L5ed025:{c.instructions+=8;NFSU2_TR(0x5ed025);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ed029:{NFSU2_TR(0x5ed029);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ed02d:{NFSU2_TR(0x5ed02d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x164ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ed033:{NFSU2_TR(0x5ed033);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5ed036:{NFSU2_TR(0x5ed036);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ed037:{NFSU2_TR(0x5ed037);
w4(R+4,u32(0x89cf0cull));
}
B5ed03c:{NFSU2_TR(0x5ed03c);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ed040:{NFSU2_TR(0x5ed040);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ed045ull));
TAIL_STATIC(0x576790u,576);
}
B5ed045:L5ed045:{c.instructions+=8;NFSU2_TR(0x5ed045);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ed049:{NFSU2_TR(0x5ed049);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ed04a:{NFSU2_TR(0x5ed04a);
u8 U[4];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5ed04e:{NFSU2_TR(0x5ed04e);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5ed050:{NFSU2_TR(0x5ed050);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ed053:{NFSU2_TR(0x5ed053);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ed054:{NFSU2_TR(0x5ed054);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ed055:{NFSU2_TR(0x5ed055);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ed05aull));
TAIL_STATIC(0x4011f0u,401);
}
B5ed05a:L5ed05a:{c.instructions+=5;NFSU2_TR(0x5ed05a);
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
B5ed05d:{NFSU2_TR(0x5ed05d);
u8 U[4];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5ed061:{NFSU2_TR(0x5ed061);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ed062:{NFSU2_TR(0x5ed062);
__builtin_memmove((R+4),(R+28),4);
}
B5ed064:{NFSU2_TR(0x5ed064);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ed069ull));
TAIL_STATIC(0x59bc20u,59b);
}
B5ed069:L5ed069:{c.instructions+=7;NFSU2_TR(0x5ed069);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ed06d:{NFSU2_TR(0x5ed06d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ed06e:{NFSU2_TR(0x5ed06e);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5ed072:{NFSU2_TR(0x5ed072);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ed073:{NFSU2_TR(0x5ed073);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5ed077:{NFSU2_TR(0x5ed077);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ed078:{NFSU2_TR(0x5ed078);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ed07dull));
TAIL_STATIC(0x43c390u,43c);
}
B5ed07d:L5ed07d:{c.instructions+=43;NFSU2_TR(0x5ed07d);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ed081:{NFSU2_TR(0x5ed081);
{u32 ea_=u32(r4(R+24)+u32(160u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ed087:{NFSU2_TR(0x5ed087);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5ed08a:{NFSU2_TR(0x5ed08a);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ed08e:{NFSU2_TR(0x5ed08e);
u8 U[4];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5ed092:{NFSU2_TR(0x5ed092);
{u32 ea_=u32(r4(R+24)+u32(144u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ed098:{NFSU2_TR(0x5ed098);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ed099:{NFSU2_TR(0x5ed099);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ed09d:{NFSU2_TR(0x5ed09d);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5ed0a5:{NFSU2_TR(0x5ed0a5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5ed0a7:{NFSU2_TR(0x5ed0a7);
{u32 ea_=u32(r4(R+24)+u32(176u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ed0ad:{NFSU2_TR(0x5ed0ad);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ed0b3:{NFSU2_TR(0x5ed0b3);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5ed0b5:{NFSU2_TR(0x5ed0b5);
{u32 ea_=u32(r4(R+24)+u32(192u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5ed0bb:{NFSU2_TR(0x5ed0bb);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ed0bf:{NFSU2_TR(0x5ed0bf);
{u32 ea_=u32(r4(R+24)+u32(164u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ed0c5:{NFSU2_TR(0x5ed0c5);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ed0c9:{NFSU2_TR(0x5ed0c9);
{u32 ea_=u32(r4(R+24)+u32(148u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ed0cf:{NFSU2_TR(0x5ed0cf);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5ed0d1:{NFSU2_TR(0x5ed0d1);
{u32 ea_=u32(r4(R+24)+u32(180u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ed0d7:{NFSU2_TR(0x5ed0d7);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ed0dd:{NFSU2_TR(0x5ed0dd);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5ed0df:{NFSU2_TR(0x5ed0df);
{u32 ea_=u32(r4(R+24)+u32(196u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5ed0e5:{NFSU2_TR(0x5ed0e5);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ed0e9:{NFSU2_TR(0x5ed0e9);
{u32 ea_=u32(r4(R+24)+u32(168u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ed0ef:{NFSU2_TR(0x5ed0ef);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ed0f3:{NFSU2_TR(0x5ed0f3);
{u32 ea_=u32(r4(R+24)+u32(152u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ed0f9:{NFSU2_TR(0x5ed0f9);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5ed0fb:{NFSU2_TR(0x5ed0fb);
{u32 ea_=u32(r4(R+24)+u32(184u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ed101:{NFSU2_TR(0x5ed101);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ed107:{NFSU2_TR(0x5ed107);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5ed109:{NFSU2_TR(0x5ed109);
{u32 ea_=u32(r4(R+24)+u32(200u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5ed10f:{NFSU2_TR(0x5ed10f);
{u32 ea_=u32(r4(R+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ed113:{NFSU2_TR(0x5ed113);
u8 U[8];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ed117:{NFSU2_TR(0x5ed117);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5ed119:{NFSU2_TR(0x5ed119);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ed11d:{NFSU2_TR(0x5ed11d);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ed121:{NFSU2_TR(0x5ed121);
u8 U[4];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5ed125:{NFSU2_TR(0x5ed125);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ed126:{NFSU2_TR(0x5ed126);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ed12a:{NFSU2_TR(0x5ed12a);
{u32 ea_=u32(r4(R+24)+u32(116u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ed12d:{NFSU2_TR(0x5ed12d);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ed131:{NFSU2_TR(0x5ed131);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ed136ull));
TAIL_STATIC(0x43cf10u,43c);
}
B5ed136:L5ed136:{c.instructions+=7;NFSU2_TR(0x5ed136);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5ed13a:{NFSU2_TR(0x5ed13a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ed13b:{NFSU2_TR(0x5ed13b);
u8 U[4];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5ed13f:{NFSU2_TR(0x5ed13f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ed140:{NFSU2_TR(0x5ed140);
u8 U[4];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5ed144:{NFSU2_TR(0x5ed144);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ed145:{NFSU2_TR(0x5ed145);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ed14aull));
TAIL_STATIC(0x43d1e0u,43d);
}
B5ed14a:L5ed14a:{c.instructions+=18;NFSU2_TR(0x5ed14a);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ed14e:{NFSU2_TR(0x5ed14e);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ed152:{NFSU2_TR(0x5ed152);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B5ed155:{NFSU2_TR(0x5ed155);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ed159:{NFSU2_TR(0x5ed159);
u8 U[4];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5ed15d:{NFSU2_TR(0x5ed15d);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ed161:{NFSU2_TR(0x5ed161);
u8 U[4];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5ed165:{NFSU2_TR(0x5ed165);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5ed167:{NFSU2_TR(0x5ed167);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ed16b:{NFSU2_TR(0x5ed16b);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ed16f:{NFSU2_TR(0x5ed16f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5ed171:{NFSU2_TR(0x5ed171);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5ed177:{NFSU2_TR(0x5ed177);
{u32 ea_=u32(r4(R+28)+u32(356u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ed17d:{NFSU2_TR(0x5ed17d);
{u32 ea_=u32(u32(8017508u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ed183:{NFSU2_TR(0x5ed183);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ed186:{NFSU2_TR(0x5ed186);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ed187:{NFSU2_TR(0x5ed187);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ed188:{NFSU2_TR(0x5ed188);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ed18dull));
TAIL_STATIC(0x43cf90u,43c);
}
B5ed18d:L5ed18d:{c.instructions+=5;NFSU2_TR(0x5ed18d);
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
B5ed190:{NFSU2_TR(0x5ed190);
u8 U[4];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5ed194:{NFSU2_TR(0x5ed194);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ed195:{NFSU2_TR(0x5ed195);
__builtin_memmove((R+4),(R+28),4);
}
B5ed197:{NFSU2_TR(0x5ed197);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ed19cull));
TAIL_STATIC(0x59bc20u,59b);
}
B5ed19c:L5ed19c:{c.instructions+=6;NFSU2_TR(0x5ed19c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5ed19d:{NFSU2_TR(0x5ed19d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5ed19e:{NFSU2_TR(0x5ed19e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5ed19f:{NFSU2_TR(0x5ed19f);
__builtin_memmove((R+16),(R+20),4);
}
B5ed1a1:{NFSU2_TR(0x5ed1a1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5ed1a2:{NFSU2_TR(0x5ed1a2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ed1b0:L5ed1b0:{c.instructions+=5;NFSU2_TR(0x5ed1b0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ed1b1:{NFSU2_TR(0x5ed1b1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ed1b2:{NFSU2_TR(0x5ed1b2);
__builtin_memmove((R+28),(R+4),4);
}
B5ed1b4:{NFSU2_TR(0x5ed1b4);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5ed1b6:{NFSU2_TR(0x5ed1b6);
{goto L5ed1c0;}
}
B5ed1c0:L5ed1c0:{c.instructions+=3;NFSU2_TR(0x5ed1c0);
u8 U[13];
w4(U+0,u32(u32(u32(0x390ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+0),(U+12),1);
}
B5ed1c7:{NFSU2_TR(0x5ed1c7);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5ed1c9:{NFSU2_TR(0x5ed1c9);
if(r1(R+518)){{goto L5ed1d8;}}
}
B5ed1cb:L5ed1cb:{c.instructions+=3;NFSU2_TR(0x5ed1cb);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ed1cc:{NFSU2_TR(0x5ed1cc);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5ed1cf:{NFSU2_TR(0x5ed1cf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ed1d4ull));
TAIL_STATIC(0x592870u,592);
}
B5ed1d4:L5ed1d4:{c.instructions+=2;NFSU2_TR(0x5ed1d4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5ed1d6:{NFSU2_TR(0x5ed1d6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ed1e6;}}
}
B5ed1d8:L5ed1d8:{c.instructions+=3;NFSU2_TR(0x5ed1d8);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B5ed1d9:{NFSU2_TR(0x5ed1d9);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B5ed1dc:{NFSU2_TR(0x5ed1dc);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5ed1c0u);}goto L5ed1c0;}}
}
B5ed1de:L5ed1de:{c.instructions+=4;NFSU2_TR(0x5ed1de);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5ed1df:{NFSU2_TR(0x5ed1df);
w4(R+0,u32(0x1ull));
}
B5ed1e4:{NFSU2_TR(0x5ed1e4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5ed1e5:{NFSU2_TR(0x5ed1e5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ed1e6:L5ed1e6:{c.instructions+=4;NFSU2_TR(0x5ed1e6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5ed1e7:{NFSU2_TR(0x5ed1e7);
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
B5ed1e9:{NFSU2_TR(0x5ed1e9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5ed1ea:{NFSU2_TR(0x5ed1ea);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ed1f0:L5ed1f0:{c.instructions+=3;NFSU2_TR(0x5ed1f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ed1f3:{NFSU2_TR(0x5ed1f3);
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
B5ed1f4:{NFSU2_TR(0x5ed1f4);
if(r1(R+518)){{goto L5ed20f;}}
}
B5ed1f6:L5ed1f6:{c.instructions+=2;NFSU2_TR(0x5ed1f6);
u8 U[6];
w1(R+512,u8((r4(R+0))<(u32(0x2ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x2ull)));
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5ed1f9:{NFSU2_TR(0x5ed1f9);
if(r1(R+518)){{goto L5ed1fe;}}
}
B5ed1fb:L5ed1fb:{c.instructions+=2;NFSU2_TR(0x5ed1fb);
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
B5ed1fd:{NFSU2_TR(0x5ed1fd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ed1fe:L5ed1fe:{c.instructions+=3;NFSU2_TR(0x5ed1fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ed201:{NFSU2_TR(0x5ed201);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5ed203:{NFSU2_TR(0x5ed203);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ed206ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5ed206:L5ed206:{c.instructions+=5;NFSU2_TR(0x5ed206);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x2ull))));
}
B5ed209:{NFSU2_TR(0x5ed209);
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w4(R+0,u32(0-u32(r4(R+0))));
}
B5ed20b:{NFSU2_TR(0x5ed20b);
u8 U[9];
w4(U+0,u32(r1(R+512)));
w1(R+512,u8((r4(R+0))<(r4(R+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w1(U+8,u8((r4(U+4))<(r4(U+0))));
w1(R+512,u8((r1(R+512))||(r1(U+8))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B5ed20d:{NFSU2_TR(0x5ed20d);
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
B5ed20e:{NFSU2_TR(0x5ed20e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ed20f:L5ed20f:{c.instructions+=3;NFSU2_TR(0x5ed20f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ed212:{NFSU2_TR(0x5ed212);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5ed214:{NFSU2_TR(0x5ed214);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ed217ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5ed217:L5ed217:{c.instructions+=5;NFSU2_TR(0x5ed217);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x2ull))));
}
B5ed21a:{NFSU2_TR(0x5ed21a);
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w4(R+0,u32(0-u32(r4(R+0))));
}
B5ed21c:{NFSU2_TR(0x5ed21c);
u8 U[9];
w4(U+0,u32(r1(R+512)));
w1(R+512,u8((r4(R+0))<(r4(R+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w1(U+8,u8((r4(U+4))<(r4(U+0))));
w1(R+512,u8((r1(R+512))||(r1(U+8))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B5ed21e:{NFSU2_TR(0x5ed21e);
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
B5ed21f:{NFSU2_TR(0x5ed21f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ed220:L5ed220:{c.instructions+=3;NFSU2_TR(0x5ed220);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x424ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ed226:{NFSU2_TR(0x5ed226);
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
B5ed228:{NFSU2_TR(0x5ed228);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5ed230;}}
}
B5ed22a:L5ed22a:{c.instructions+=2;NFSU2_TR(0x5ed22a);
w4(R+0,u32(0x1ull));
}
B5ed22f:{NFSU2_TR(0x5ed22f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ed230:L5ed230:{c.instructions+=8;NFSU2_TR(0x5ed230);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ed231:{NFSU2_TR(0x5ed231);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ed232:{NFSU2_TR(0x5ed232);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ed233:{NFSU2_TR(0x5ed233);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5ed236:{NFSU2_TR(0x5ed236);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+12,u32(s32(s8(r1(U+4)))));
}
B5ed23a:{NFSU2_TR(0x5ed23a);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5ed23c:{NFSU2_TR(0x5ed23c);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5ed23e:{NFSU2_TR(0x5ed23e);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5ed258;}}
}
B5ed240:L5ed240:{c.instructions+=3;NFSU2_TR(0x5ed240);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ed241:{NFSU2_TR(0x5ed241);
__builtin_memmove((R+4),(R+28),4);
}
B5ed243:{NFSU2_TR(0x5ed243);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ed248ull));
TAIL_STATIC(0x5a0820u,5a0);
}
B5ed248:L5ed248:{c.instructions+=2;NFSU2_TR(0x5ed248);
__builtin_memmove((R+4),(R+0),4);
}
B5ed24a:{NFSU2_TR(0x5ed24a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ed24full));
TAIL_STATIC(0x5a01b0u,5a0);
}
B5ed24f:L5ed24f:{c.instructions+=2;NFSU2_TR(0x5ed24f);
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
B5ed251:{NFSU2_TR(0x5ed251);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ed25e;}}
}
B5ed253:L5ed253:{c.instructions+=3;NFSU2_TR(0x5ed253);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B5ed254:{NFSU2_TR(0x5ed254);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5ed256:{NFSU2_TR(0x5ed256);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5ed240u);}goto L5ed240;}}
}
B5ed258:L5ed258:{c.instructions+=5;NFSU2_TR(0x5ed258);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5ed259:{NFSU2_TR(0x5ed259);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5ed25a:{NFSU2_TR(0x5ed25a);
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
B5ed25c:{NFSU2_TR(0x5ed25c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5ed25d:{NFSU2_TR(0x5ed25d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ed25e:L5ed25e:{c.instructions+=5;NFSU2_TR(0x5ed25e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5ed25f:{NFSU2_TR(0x5ed25f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5ed260:{NFSU2_TR(0x5ed260);
w4(R+0,u32(0x1ull));
}
B5ed265:{NFSU2_TR(0x5ed265);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5ed266:{NFSU2_TR(0x5ed266);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ed270:L5ed270:{c.instructions+=3;NFSU2_TR(0x5ed270);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x958ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ed276:{NFSU2_TR(0x5ed276);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5ed278:{NFSU2_TR(0x5ed278);
if(r1(R+518)){{goto L5ed280;}}
}
B5ed27a:L5ed27a:{c.instructions+=2;NFSU2_TR(0x5ed27a);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x100ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x100ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x100ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5ed27f:{NFSU2_TR(0x5ed27f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ed280:L5ed280:{c.instructions+=2;NFSU2_TR(0x5ed280);
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
B5ed282:{NFSU2_TR(0x5ed282);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ed290:L5ed290:{c.instructions+=3;NFSU2_TR(0x5ed290);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B5ed292:{NFSU2_TR(0x5ed292);
w4(R+8,u32(0x1f0ull));
}
B5ed297:{NFSU2_TR(0x5ed297);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ed298:L5ed298:{c.instructions+=2;NFSU2_TR(0x5ed298);
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
B5ed29a:{NFSU2_TR(0x5ed29a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ed2f7;}}
}
B5ed29c:L5ed29c:{c.instructions+=6;NFSU2_TR(0x5ed29c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5ed29f:{NFSU2_TR(0x5ed29f);
{u32 ea_=u32(r4(R+24)+r4(R+8)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ed2a3:{NFSU2_TR(0x5ed2a3);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5ed2a9:{NFSU2_TR(0x5ed2a9);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5ed2ab:{NFSU2_TR(0x5ed2ab);
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
B5ed2ae:{NFSU2_TR(0x5ed2ae);
if(r1(R+518)){{goto L5ed2f5;}}
}
B5ed2b0:L5ed2b0:{c.instructions+=5;NFSU2_TR(0x5ed2b0);
{u32 ea_=u32(r4(R+24)+r4(R+8));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ed2b3:{NFSU2_TR(0x5ed2b3);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5ed2b9:{NFSU2_TR(0x5ed2b9);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5ed2bb:{NFSU2_TR(0x5ed2bb);
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
B5ed2be:{NFSU2_TR(0x5ed2be);
if(r1(R+518)){{goto L5ed2f5;}}
}
B5ed2c0:L5ed2c0:{c.instructions+=5;NFSU2_TR(0x5ed2c0);
{u32 ea_=u32(r4(R+24)+r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ed2c4:{NFSU2_TR(0x5ed2c4);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5ed2ca:{NFSU2_TR(0x5ed2ca);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5ed2cc:{NFSU2_TR(0x5ed2cc);
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
B5ed2cf:{NFSU2_TR(0x5ed2cf);
if(r1(R+518)){{goto L5ed2f5;}}
}
B5ed2d1:L5ed2d1:{c.instructions+=5;NFSU2_TR(0x5ed2d1);
{u32 ea_=u32(r4(R+24)+r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ed2d5:{NFSU2_TR(0x5ed2d5);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5ed2db:{NFSU2_TR(0x5ed2db);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5ed2dd:{NFSU2_TR(0x5ed2dd);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5ed2e0:{NFSU2_TR(0x5ed2e0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ed2e6;}}
}
B5ed2e2:L5ed2e2:{c.instructions+=2;NFSU2_TR(0x5ed2e2);
w1(R+0,u8(0x1ull));
}
B5ed2e4:{NFSU2_TR(0x5ed2e4);
{goto L5ed2e8;}
}
B5ed2e6:L5ed2e6:{c.instructions+=1;NFSU2_TR(0x5ed2e6);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B5ed2e8:L5ed2e8:{c.instructions+=3;NFSU2_TR(0x5ed2e8);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x10ull))));
}
B5ed2eb:{NFSU2_TR(0x5ed2eb);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
w1(R+512,u8((r4(U+6))<(u32(0x200ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x200ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x200ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5ed2f1:{NFSU2_TR(0x5ed2f1);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5ed298u);}goto L5ed298;}}
}
B5ed2f3:L5ed2f3:{c.instructions+=2;NFSU2_TR(0x5ed2f3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5ed2f4:{NFSU2_TR(0x5ed2f4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ed2f5:L5ed2f5:{c.instructions+=1;NFSU2_TR(0x5ed2f5);
w1(R+0,u8(0x1ull));
}
B5ed2f7:L5ed2f7:{c.instructions+=2;NFSU2_TR(0x5ed2f7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5ed2f8:{NFSU2_TR(0x5ed2f8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ed300:L5ed300:{c.instructions+=18;NFSU2_TR(0x5ed300);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B5ed303:{NFSU2_TR(0x5ed303);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ed304:{NFSU2_TR(0x5ed304);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ed305:{NFSU2_TR(0x5ed305);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ed306:{NFSU2_TR(0x5ed306);
w4(R+24,u32(0xfffffe08ull));
}
B5ed30b:{NFSU2_TR(0x5ed30b);
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+4))));
}
B5ed30d:{NFSU2_TR(0x5ed30d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ed30e:{NFSU2_TR(0x5ed30e);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ed312:{NFSU2_TR(0x5ed312);
w4(R+28,u32(0xfffffe00ull));
}
B5ed317:{NFSU2_TR(0x5ed317);
w4(R+20,u32(0xfffffe04ull));
}
B5ed31c:{NFSU2_TR(0x5ed31c);
w4(R+24,u32(0xfffffe0cull));
}
B5ed321:{NFSU2_TR(0x5ed321);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B5ed323:{NFSU2_TR(0x5ed323);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B5ed325:{NFSU2_TR(0x5ed325);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+4))));
}
B5ed327:{NFSU2_TR(0x5ed327);
w4(R+20,u32(u32(r4(R+20))-u32(r4(R+4))));
}
B5ed329:{NFSU2_TR(0x5ed329);
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+4))));
}
B5ed32b:{NFSU2_TR(0x5ed32b);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3fcull))));
__builtin_memmove((R+8),(U+0),4);
}
B5ed331:{NFSU2_TR(0x5ed331);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ed335:L5ed335:{c.instructions+=2;NFSU2_TR(0x5ed335);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5ed337:{NFSU2_TR(0x5ed337);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ed3f8;}}
}
B5ed33d:L5ed33d:{c.instructions+=5;NFSU2_TR(0x5ed33d);
{u32 ea_=u32(r4(R+8)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ed340:{NFSU2_TR(0x5ed340);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5ed346:{NFSU2_TR(0x5ed346);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5ed348:{NFSU2_TR(0x5ed348);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5ed34b:{NFSU2_TR(0x5ed34b);
if(r1(R+518)){{goto L5ed3f6;}}
}
B5ed351:L5ed351:{c.instructions+=7;NFSU2_TR(0x5ed351);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5ed354:{NFSU2_TR(0x5ed354);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B5ed357:{NFSU2_TR(0x5ed357);
{u32 ea_=u32(r4(R+24)+r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ed35a:{NFSU2_TR(0x5ed35a);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5ed360:{NFSU2_TR(0x5ed360);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5ed362:{NFSU2_TR(0x5ed362);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5ed365:{NFSU2_TR(0x5ed365);
if(r1(R+518)){{goto L5ed3f6;}}
}
B5ed36b:L5ed36b:{c.instructions+=5;NFSU2_TR(0x5ed36b);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ed36d:{NFSU2_TR(0x5ed36d);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5ed373:{NFSU2_TR(0x5ed373);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5ed375:{NFSU2_TR(0x5ed375);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5ed378:{NFSU2_TR(0x5ed378);
if(r1(R+518)){{goto L5ed3f6;}}
}
B5ed37a:L5ed37a:{c.instructions+=6;NFSU2_TR(0x5ed37a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B5ed37d:{NFSU2_TR(0x5ed37d);
{u32 ea_=u32(r4(R+24)+r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ed380:{NFSU2_TR(0x5ed380);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5ed386:{NFSU2_TR(0x5ed386);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5ed388:{NFSU2_TR(0x5ed388);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5ed38b:{NFSU2_TR(0x5ed38b);
if(r1(R+518)){{goto L5ed3f6;}}
}
B5ed38d:L5ed38d:{c.instructions+=5;NFSU2_TR(0x5ed38d);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ed390:{NFSU2_TR(0x5ed390);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5ed396:{NFSU2_TR(0x5ed396);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5ed398:{NFSU2_TR(0x5ed398);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5ed39b:{NFSU2_TR(0x5ed39b);
if(r1(R+518)){{goto L5ed3f6;}}
}
B5ed39d:L5ed39d:{c.instructions+=7;NFSU2_TR(0x5ed39d);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ed3a1:{NFSU2_TR(0x5ed3a1);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B5ed3a3:{NFSU2_TR(0x5ed3a3);
{u32 ea_=u32(r4(R+24)+r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ed3a6:{NFSU2_TR(0x5ed3a6);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5ed3ac:{NFSU2_TR(0x5ed3ac);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5ed3ae:{NFSU2_TR(0x5ed3ae);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5ed3b1:{NFSU2_TR(0x5ed3b1);
if(r1(R+518)){{goto L5ed3f6;}}
}
B5ed3b3:L5ed3b3:{c.instructions+=5;NFSU2_TR(0x5ed3b3);
{u32 ea_=u32(r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ed3b6:{NFSU2_TR(0x5ed3b6);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5ed3bc:{NFSU2_TR(0x5ed3bc);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5ed3be:{NFSU2_TR(0x5ed3be);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5ed3c1:{NFSU2_TR(0x5ed3c1);
if(r1(R+518)){{goto L5ed3dd;}}
}
B5ed3c3:L5ed3c3:{c.instructions+=7;NFSU2_TR(0x5ed3c3);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ed3c7:{NFSU2_TR(0x5ed3c7);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B5ed3c9:{NFSU2_TR(0x5ed3c9);
{u32 ea_=u32(r4(R+24)+r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ed3cc:{NFSU2_TR(0x5ed3cc);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5ed3d2:{NFSU2_TR(0x5ed3d2);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5ed3d4:{NFSU2_TR(0x5ed3d4);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5ed3d7:{NFSU2_TR(0x5ed3d7);
if(r1(R+518)){{goto L5ed3dd;}}
}
B5ed3d9:L5ed3d9:{c.instructions+=2;NFSU2_TR(0x5ed3d9);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B5ed3db:{NFSU2_TR(0x5ed3db);
{goto L5ed3df;}
}
B5ed3dd:L5ed3dd:{c.instructions+=1;NFSU2_TR(0x5ed3dd);
w1(R+0,u8(0x1ull));
}
B5ed3df:L5ed3df:{c.instructions+=4;NFSU2_TR(0x5ed3df);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x4ull))));
}
B5ed3e2:{NFSU2_TR(0x5ed3e2);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x10ull))));
}
B5ed3e5:{NFSU2_TR(0x5ed3e5);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5ed3e8:{NFSU2_TR(0x5ed3e8);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5ed335u);}goto L5ed335;}}
}
B5ed3ee:L5ed3ee:{c.instructions+=6;NFSU2_TR(0x5ed3ee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5ed3ef:{NFSU2_TR(0x5ed3ef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5ed3f0:{NFSU2_TR(0x5ed3f0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5ed3f1:{NFSU2_TR(0x5ed3f1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5ed3f2:{NFSU2_TR(0x5ed3f2);
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
B5ed3f5:{NFSU2_TR(0x5ed3f5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ed3f6:L5ed3f6:{c.instructions+=1;NFSU2_TR(0x5ed3f6);
w1(R+0,u8(0x1ull));
}
B5ed3f8:L5ed3f8:{c.instructions+=6;NFSU2_TR(0x5ed3f8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5ed3f9:{NFSU2_TR(0x5ed3f9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5ed3fa:{NFSU2_TR(0x5ed3fa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5ed3fb:{NFSU2_TR(0x5ed3fb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5ed3fc:{NFSU2_TR(0x5ed3fc);
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
B5ed3ff:{NFSU2_TR(0x5ed3ff);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ed400:L5ed400:{c.instructions+=5;NFSU2_TR(0x5ed400);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ed401:{NFSU2_TR(0x5ed401);
__builtin_memmove((R+24),(R+4),4);
}
B5ed403:{NFSU2_TR(0x5ed403);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ed406:{NFSU2_TR(0x5ed406);
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
B5ed408:{NFSU2_TR(0x5ed408);
if(r1(R+518)){{goto L5ed422;}}
}
B5ed40a:L5ed40a:{c.instructions+=2;NFSU2_TR(0x5ed40a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5ed40c:{NFSU2_TR(0x5ed40c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ed40full));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5ed40f:L5ed40f:{c.instructions+=2;NFSU2_TR(0x5ed40f);
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
B5ed411:{NFSU2_TR(0x5ed411);
if(r1(R+518)){{goto L5ed422;}}
}
B5ed413:L5ed413:{c.instructions+=3;NFSU2_TR(0x5ed413);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ed416:{NFSU2_TR(0x5ed416);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5ed418:{NFSU2_TR(0x5ed418);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ed41bull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5ed41b:L5ed41b:{c.instructions+=3;NFSU2_TR(0x5ed41b);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x1f0ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x1f0ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1f0ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5ed420:{NFSU2_TR(0x5ed420);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5ed421:{NFSU2_TR(0x5ed421);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ed422:L5ed422:{c.instructions+=3;NFSU2_TR(0x5ed422);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ed425:{NFSU2_TR(0x5ed425);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5ed426:{NFSU2_TR(0x5ed426);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ed430:L5ed430:{c.instructions+=7;NFSU2_TR(0x5ed430);
{u32 ea_=u32(r4(R+4)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ed433:{NFSU2_TR(0x5ed433);
{u32 ea_=u32(u32(8398264u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5ed439:{NFSU2_TR(0x5ed439);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B5ed43b:{NFSU2_TR(0x5ed43b);
{u32 ea_=u32(u32(7881564u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5ed441:{NFSU2_TR(0x5ed441);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5ed443:{NFSU2_TR(0x5ed443);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5ed446:{NFSU2_TR(0x5ed446);
if(r1(R+514)){{goto L5ed457;}}
}
B5ed448:L5ed448:{c.instructions+=6;NFSU2_TR(0x5ed448);
w4(R+0,u32(0x1ull));
}
B5ed44d:{NFSU2_TR(0x5ed44d);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5ed44f:{NFSU2_TR(0x5ed44f);
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
B5ed451:{NFSU2_TR(0x5ed451);
__builtin_memmove((R+4),(R+518),1);
}
B5ed454:{NFSU2_TR(0x5ed454);
__builtin_memmove((R+0),(R+4),1);
}
B5ed456:{NFSU2_TR(0x5ed456);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ed457:L5ed457:{c.instructions+=6;NFSU2_TR(0x5ed457);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5ed459:{NFSU2_TR(0x5ed459);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5ed45b:{NFSU2_TR(0x5ed45b);
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
B5ed45d:{NFSU2_TR(0x5ed45d);
__builtin_memmove((R+4),(R+518),1);
}
B5ed460:{NFSU2_TR(0x5ed460);
__builtin_memmove((R+0),(R+4),1);
}
B5ed462:{NFSU2_TR(0x5ed462);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ed470:L5ed470:{c.instructions+=2;NFSU2_TR(0x5ed470);
u8 U[22];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
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
B5ed474:{NFSU2_TR(0x5ed474);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ed484;}}
}
B5ed476:L5ed476:{c.instructions+=4;NFSU2_TR(0x5ed476);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ed479:{NFSU2_TR(0x5ed479);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ed47d:{NFSU2_TR(0x5ed47d);
u8 U[16];
w4(U+0,u32(u32(u32(0x74ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B5ed481:{NFSU2_TR(0x5ed481);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ed484:L5ed484:{c.instructions+=2;NFSU2_TR(0x5ed484);
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
B5ed486:{NFSU2_TR(0x5ed486);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ed490:L5ed490:{c.instructions+=14;NFSU2_TR(0x5ed490);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B5ed493:{NFSU2_TR(0x5ed493);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ed499:{NFSU2_TR(0x5ed499);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x40eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B5ed4a0:{NFSU2_TR(0x5ed4a0);
{u32 ea_=u32(r4(R+4)+u32(960u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ed4a6:{NFSU2_TR(0x5ed4a6);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ed4aa:{NFSU2_TR(0x5ed4aa);
{u32 ea_=u32(r4(R+4)+u32(952u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5ed4b0:{NFSU2_TR(0x5ed4b0);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ed4b6:{NFSU2_TR(0x5ed4b6);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ed4ba:{NFSU2_TR(0x5ed4ba);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5ed4be:{NFSU2_TR(0x5ed4be);
{u32 ea_=u32(u32(7881288u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ed4c4:{NFSU2_TR(0x5ed4c4);
{u32 ea_=u32(u32(7882000u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5ed4ca:{NFSU2_TR(0x5ed4ca);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5ed4cc:{NFSU2_TR(0x5ed4cc);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5ed4cf:{NFSU2_TR(0x5ed4cf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ed4d7;}}
}
B5ed4d1:L5ed4d1:{c.instructions+=1;NFSU2_TR(0x5ed4d1);
{u32 ea_=u32(u32(7881996u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5ed4d7:L5ed4d7:{c.instructions+=5;NFSU2_TR(0x5ed4d7);
{u32 ea_=u32(r4(R+4)+u32(1068u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ed4dd:{NFSU2_TR(0x5ed4dd);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5ed4e3:{NFSU2_TR(0x5ed4e3);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5ed4e5:{NFSU2_TR(0x5ed4e5);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5ed4e8:{NFSU2_TR(0x5ed4e8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ed524;}}
}
B5ed4ea:L5ed4ea:{c.instructions+=5;NFSU2_TR(0x5ed4ea);
{u32 ea_=u32(r4(R+4)+u32(1072u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ed4f0:{NFSU2_TR(0x5ed4f0);
{u32 ea_=u32(u32(8017520u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5ed4f6:{NFSU2_TR(0x5ed4f6);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5ed4f8:{NFSU2_TR(0x5ed4f8);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5ed4fb:{NFSU2_TR(0x5ed4fb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ed524;}}
}
B5ed4fd:L5ed4fd:{c.instructions+=7;NFSU2_TR(0x5ed4fd);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ed501:{NFSU2_TR(0x5ed501);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5ed503:{NFSU2_TR(0x5ed503);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5ed509:{NFSU2_TR(0x5ed509);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5ed50b:{NFSU2_TR(0x5ed50b);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5ed50d:{NFSU2_TR(0x5ed50d);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5ed510:{NFSU2_TR(0x5ed510);
if(r1(R+514)){{goto L5ed526;}}
}
B5ed512:L5ed512:{c.instructions+=6;NFSU2_TR(0x5ed512);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5ed514:{NFSU2_TR(0x5ed514);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ed518:{NFSU2_TR(0x5ed518);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B5ed51a:{NFSU2_TR(0x5ed51a);
{u32 ea_=u32(r4(R+4)+u32(1072u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B5ed520:{NFSU2_TR(0x5ed520);
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
B5ed523:{NFSU2_TR(0x5ed523);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ed524:L5ed524:{c.instructions+=1;NFSU2_TR(0x5ed524);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5ed526:L5ed526:{c.instructions+=2;NFSU2_TR(0x5ed526);
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
B5ed529:{NFSU2_TR(0x5ed529);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ed530:L5ed530:{c.instructions+=6;NFSU2_TR(0x5ed530);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ed536:{NFSU2_TR(0x5ed536);
{u32 ea_=u32(r4(R+4)+u32(1068u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ed53c:{NFSU2_TR(0x5ed53c);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5ed542:{NFSU2_TR(0x5ed542);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5ed544:{NFSU2_TR(0x5ed544);
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
B5ed547:{NFSU2_TR(0x5ed547);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ed578;}}
}
B5ed549:L5ed549:{c.instructions+=5;NFSU2_TR(0x5ed549);
{u32 ea_=u32(r4(R+4)+u32(1072u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ed54f:{NFSU2_TR(0x5ed54f);
{u32 ea_=u32(u32(8017524u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5ed555:{NFSU2_TR(0x5ed555);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5ed557:{NFSU2_TR(0x5ed557);
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
B5ed55a:{NFSU2_TR(0x5ed55a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ed578;}}
}
B5ed55c:L5ed55c:{c.instructions+=6;NFSU2_TR(0x5ed55c);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5ed55e:{NFSU2_TR(0x5ed55e);
{u32 ea_=u32(r4(R+4)+u32(976u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ed564:{NFSU2_TR(0x5ed564);
{u32 ea_=u32(r4(R+4)+u32(968u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5ed56a:{NFSU2_TR(0x5ed56a);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ed570:{NFSU2_TR(0x5ed570);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B5ed572:{NFSU2_TR(0x5ed572);
{u32 ea_=u32(r4(R+4)+u32(1072u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B5ed578:L5ed578:{c.instructions+=1;NFSU2_TR(0x5ed578);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ed580:L5ed580:{c.instructions+=4;NFSU2_TR(0x5ed580);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ed581:{NFSU2_TR(0x5ed581);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x9c0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ed587:{NFSU2_TR(0x5ed587);
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
B5ed589:{NFSU2_TR(0x5ed589);
if(r1(R+518)){{goto L5ed5ad;}}
}
B5ed58b:L5ed58b:{c.instructions+=2;NFSU2_TR(0x5ed58b);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x7fffffffull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x7fffffffull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x7fffffffull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5ed590:{NFSU2_TR(0x5ed590);
if(r1(R+518)){{goto L5ed5ad;}}
}
B5ed592:L5ed592:{c.instructions+=7;NFSU2_TR(0x5ed592);
__builtin_memmove((R+0),gp(0x86518c),4);
}
B5ed597:{NFSU2_TR(0x5ed597);
u8 U[14];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x9c0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,u8((r4(R+0))<(r4(U+4))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B5ed59d:{NFSU2_TR(0x5ed59d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B5ed5a1:{NFSU2_TR(0x5ed5a1);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5ed5a5:{NFSU2_TR(0x5ed5a5);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ed5ab:{NFSU2_TR(0x5ed5ab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5ed5ac:{NFSU2_TR(0x5ed5ac);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ed5ad:L5ed5ad:{c.instructions+=3;NFSU2_TR(0x5ed5ad);
{u32 ea_=u32(u32(7881568u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ed5b3:{NFSU2_TR(0x5ed5b3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5ed5b4:{NFSU2_TR(0x5ed5b4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ed5c0:L5ed5c0:{c.instructions+=3;NFSU2_TR(0x5ed5c0);
u8 U[5];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5ed5c4:{NFSU2_TR(0x5ed5c4);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x550ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5ed5ca:{NFSU2_TR(0x5ed5ca);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ed5d0:L5ed5d0:{c.instructions+=5;NFSU2_TR(0x5ed5d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ed5d3:{NFSU2_TR(0x5ed5d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ed5d6:{NFSU2_TR(0x5ed5d6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ed5d7:{NFSU2_TR(0x5ed5d7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ed5d8:{NFSU2_TR(0x5ed5d8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ed5ddull));
TAIL_STATIC(0x61e380u,61e);
}
B5ed5dd:L5ed5dd:{c.instructions+=2;NFSU2_TR(0x5ed5dd);
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
B5ed5e0:{NFSU2_TR(0x5ed5e0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ed5f0:L5ed5f0:{c.instructions+=5;NFSU2_TR(0x5ed5f0);
__builtin_memmove((R+8),(R+4),4);
}
B5ed5f2:{NFSU2_TR(0x5ed5f2);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5ed5f4:{NFSU2_TR(0x5ed5f4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ed5f5:{NFSU2_TR(0x5ed5f5);
w4(R+4,u32(0x20ull));
}
B5ed5fa:{NFSU2_TR(0x5ed5fa);
__builtin_memmove((R+28),(R+8),4);
}
B5ed5fc:L5ed5fc:{c.instructions+=1;NFSU2_TR(0x5ed5fc);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L5ed5fe;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5ed5fcu);}goto L5ed5fc;}
}
B5ed5fe:L5ed5fe:{c.instructions+=46;NFSU2_TR(0x5ed5fe);
w4(R+28,u32(0x3ull));
}
B5ed603:{NFSU2_TR(0x5ed603);
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
B5ed606:{NFSU2_TR(0x5ed606);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ed609:{NFSU2_TR(0x5ed609);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ed60c:{NFSU2_TR(0x5ed60c);
u8 U[4];
w4(U+0,u32(0x7d0ull));
s4(u32(r4(R+8)),r4(U+0));
}
B5ed612:{NFSU2_TR(0x5ed612);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ed615:{NFSU2_TR(0x5ed615);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5ed618:{NFSU2_TR(0x5ed618);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xdull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5ed61b:{NFSU2_TR(0x5ed61b);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ed61e:{NFSU2_TR(0x5ed61e);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ed621:{NFSU2_TR(0x5ed621);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ed624:{NFSU2_TR(0x5ed624);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5ed62b:{NFSU2_TR(0x5ed62b);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5ed632:{NFSU2_TR(0x5ed632);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x24ull))));
w4(U+4,u32(0x7ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5ed639:{NFSU2_TR(0x5ed639);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ed63c:{NFSU2_TR(0x5ed63c);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ed63f:{NFSU2_TR(0x5ed63f);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5ed642:{NFSU2_TR(0x5ed642);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x31ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5ed645:{NFSU2_TR(0x5ed645);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x32ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5ed648:{NFSU2_TR(0x5ed648);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ed64b:{NFSU2_TR(0x5ed64b);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5ed64e:{NFSU2_TR(0x5ed64e);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x39ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5ed651:{NFSU2_TR(0x5ed651);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x3cull))));
w4(U+4,u32(0x41f00000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5ed658:{NFSU2_TR(0x5ed658);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x43ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5ed65b:{NFSU2_TR(0x5ed65b);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x42ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5ed65e:{NFSU2_TR(0x5ed65e);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5ed661:{NFSU2_TR(0x5ed661);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x45ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5ed664:{NFSU2_TR(0x5ed664);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5ed667:{NFSU2_TR(0x5ed667);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x41ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5ed66a:{NFSU2_TR(0x5ed66a);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x46ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5ed66d:{NFSU2_TR(0x5ed66d);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x47ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5ed671:{NFSU2_TR(0x5ed671);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ed674:{NFSU2_TR(0x5ed674);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ed677:{NFSU2_TR(0x5ed677);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x50ull))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5ed67e:{NFSU2_TR(0x5ed67e);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ed681:{NFSU2_TR(0x5ed681);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x58ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5ed688:{NFSU2_TR(0x5ed688);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x5cull))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5ed68f:{NFSU2_TR(0x5ed68f);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x60ull))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5ed696:{NFSU2_TR(0x5ed696);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ed699:{NFSU2_TR(0x5ed699);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x6cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ed69c:{NFSU2_TR(0x5ed69c);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x70ull))));
w4(U+4,u32(0x890160ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5ed6a3:{NFSU2_TR(0x5ed6a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x74ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ed6a6:{NFSU2_TR(0x5ed6a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x78ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ed6a9:{NFSU2_TR(0x5ed6a9);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x7cull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5ed6ac:{NFSU2_TR(0x5ed6ac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5ed6ad:{NFSU2_TR(0x5ed6ad);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ed6b0:L5ed6b0:{c.instructions+=11;NFSU2_TR(0x5ed6b0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ed6b1:{NFSU2_TR(0x5ed6b1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ed6b2:{NFSU2_TR(0x5ed6b2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ed6b3:{NFSU2_TR(0x5ed6b3);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5ed6b7:{NFSU2_TR(0x5ed6b7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ed6b8:{NFSU2_TR(0x5ed6b8);
u8 U[4];
w4(U+0,u32(0x7a5d38ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ed6bd:{NFSU2_TR(0x5ed6bd);
__builtin_memmove((R+28),(R+4),4);
}
B5ed6bf:{NFSU2_TR(0x5ed6bf);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B5ed6c1:{NFSU2_TR(0x5ed6c1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ed6c2:{NFSU2_TR(0x5ed6c2);
__builtin_memmove((R+4),(R+24),4);
}
B5ed6c4:{NFSU2_TR(0x5ed6c4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ed6c9ull));
TAIL_STATIC(0x578ce0u,578);
}
B5ed6c9:L5ed6c9:{c.instructions+=6;NFSU2_TR(0x5ed6c9);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ed6cb:{NFSU2_TR(0x5ed6cb);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ed6cd:{NFSU2_TR(0x5ed6cd);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ed6cf:{NFSU2_TR(0x5ed6cf);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ed6d0:{NFSU2_TR(0x5ed6d0);
__builtin_memmove((R+4),(R+24),4);
}
B5ed6d2:{NFSU2_TR(0x5ed6d2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ed6d7ull));
TAIL_STATIC(0x571640u,571);
}
B5ed6d7:L5ed6d7:{c.instructions+=7;NFSU2_TR(0x5ed6d7);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ed6d9:{NFSU2_TR(0x5ed6d9);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ed6db:{NFSU2_TR(0x5ed6db);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ed6dd:{NFSU2_TR(0x5ed6dd);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5ed6e0:{NFSU2_TR(0x5ed6e0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ed6e1:{NFSU2_TR(0x5ed6e1);
__builtin_memmove((R+4),(R+24),4);
}
B5ed6e3:{NFSU2_TR(0x5ed6e3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ed6e8ull));
TAIL_STATIC(0x571640u,571);
}
B5ed6e8:L5ed6e8:{c.instructions+=7;NFSU2_TR(0x5ed6e8);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ed6ea:{NFSU2_TR(0x5ed6ea);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ed6ec:{NFSU2_TR(0x5ed6ec);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ed6ee:{NFSU2_TR(0x5ed6ee);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5ed6f1:{NFSU2_TR(0x5ed6f1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ed6f2:{NFSU2_TR(0x5ed6f2);
__builtin_memmove((R+4),(R+24),4);
}
B5ed6f4:{NFSU2_TR(0x5ed6f4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ed6f9ull));
TAIL_STATIC(0x571640u,571);
}
B5ed6f9:L5ed6f9:{c.instructions+=7;NFSU2_TR(0x5ed6f9);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ed6fb:{NFSU2_TR(0x5ed6fb);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ed6fd:{NFSU2_TR(0x5ed6fd);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ed6ff:{NFSU2_TR(0x5ed6ff);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5ed702:{NFSU2_TR(0x5ed702);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ed703:{NFSU2_TR(0x5ed703);
__builtin_memmove((R+4),(R+24),4);
}
B5ed705:{NFSU2_TR(0x5ed705);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ed70aull));
TAIL_STATIC(0x571640u,571);
}
B5ed70a:L5ed70a:{c.instructions+=7;NFSU2_TR(0x5ed70a);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ed70c:{NFSU2_TR(0x5ed70c);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ed70e:{NFSU2_TR(0x5ed70e);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ed710:{NFSU2_TR(0x5ed710);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5ed713:{NFSU2_TR(0x5ed713);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ed714:{NFSU2_TR(0x5ed714);
__builtin_memmove((R+4),(R+24),4);
}
B5ed716:{NFSU2_TR(0x5ed716);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ed71bull));
TAIL_STATIC(0x571640u,571);
}
B5ed71b:L5ed71b:{c.instructions+=4;NFSU2_TR(0x5ed71b);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5ed71e:{NFSU2_TR(0x5ed71e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ed71f:{NFSU2_TR(0x5ed71f);
__builtin_memmove((R+4),(R+24),4);
}
B5ed721:{NFSU2_TR(0x5ed721);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ed726ull));
TAIL_STATIC(0x571770u,571);
}
B5ed726:L5ed726:{c.instructions+=7;NFSU2_TR(0x5ed726);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ed728:{NFSU2_TR(0x5ed728);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ed72a:{NFSU2_TR(0x5ed72a);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ed72c:{NFSU2_TR(0x5ed72c);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((R+8),(U+0),4);
}
B5ed72f:{NFSU2_TR(0x5ed72f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ed730:{NFSU2_TR(0x5ed730);
__builtin_memmove((R+4),(R+24),4);
}
B5ed732:{NFSU2_TR(0x5ed732);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ed737ull));
TAIL_STATIC(0x571640u,571);
}
B5ed737:L5ed737:{c.instructions+=7;NFSU2_TR(0x5ed737);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ed739:{NFSU2_TR(0x5ed739);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ed73b:{NFSU2_TR(0x5ed73b);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ed73d:{NFSU2_TR(0x5ed73d);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5ed740:{NFSU2_TR(0x5ed740);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ed741:{NFSU2_TR(0x5ed741);
__builtin_memmove((R+4),(R+24),4);
}
B5ed743:{NFSU2_TR(0x5ed743);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ed748ull));
TAIL_STATIC(0x571640u,571);
}
B5ed748:L5ed748:{c.instructions+=7;NFSU2_TR(0x5ed748);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ed74a:{NFSU2_TR(0x5ed74a);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ed74c:{NFSU2_TR(0x5ed74c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ed74e:{NFSU2_TR(0x5ed74e);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5ed751:{NFSU2_TR(0x5ed751);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ed752:{NFSU2_TR(0x5ed752);
__builtin_memmove((R+4),(R+24),4);
}
B5ed754:{NFSU2_TR(0x5ed754);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ed759ull));
TAIL_STATIC(0x571640u,571);
}
B5ed759:L5ed759:{c.instructions+=7;NFSU2_TR(0x5ed759);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ed75b:{NFSU2_TR(0x5ed75b);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ed75d:{NFSU2_TR(0x5ed75d);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ed75f:{NFSU2_TR(0x5ed75f);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5ed762:{NFSU2_TR(0x5ed762);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ed763:{NFSU2_TR(0x5ed763);
__builtin_memmove((R+4),(R+24),4);
}
B5ed765:{NFSU2_TR(0x5ed765);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ed76aull));
TAIL_STATIC(0x571640u,571);
}
B5ed76a:L5ed76a:{c.instructions+=7;NFSU2_TR(0x5ed76a);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ed76c:{NFSU2_TR(0x5ed76c);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ed76e:{NFSU2_TR(0x5ed76e);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ed770:{NFSU2_TR(0x5ed770);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((R+0),(U+0),4);
}
B5ed773:{NFSU2_TR(0x5ed773);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ed774:{NFSU2_TR(0x5ed774);
__builtin_memmove((R+4),(R+24),4);
}
B5ed776:{NFSU2_TR(0x5ed776);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ed77bull));
TAIL_STATIC(0x571640u,571);
}
B5ed77b:L5ed77b:{c.instructions+=4;NFSU2_TR(0x5ed77b);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5ed77e:{NFSU2_TR(0x5ed77e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ed77f:{NFSU2_TR(0x5ed77f);
__builtin_memmove((R+4),(R+24),4);
}
B5ed781:{NFSU2_TR(0x5ed781);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ed786ull));
TAIL_STATIC(0x5716c0u,571);
}
B5ed786:L5ed786:{c.instructions+=4;NFSU2_TR(0x5ed786);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x31ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5ed789:{NFSU2_TR(0x5ed789);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ed78a:{NFSU2_TR(0x5ed78a);
__builtin_memmove((R+4),(R+24),4);
}
B5ed78c:{NFSU2_TR(0x5ed78c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ed791ull));
TAIL_STATIC(0x5716c0u,571);
}
B5ed791:L5ed791:{c.instructions+=7;NFSU2_TR(0x5ed791);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ed792:{NFSU2_TR(0x5ed792);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ed794:{NFSU2_TR(0x5ed794);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ed796:{NFSU2_TR(0x5ed796);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x32ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5ed799:{NFSU2_TR(0x5ed799);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ed79a:{NFSU2_TR(0x5ed79a);
__builtin_memmove((R+4),(R+24),4);
}
B5ed79c:{NFSU2_TR(0x5ed79c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ed7a1ull));
TAIL_STATIC(0x571640u,571);
}
B5ed7a1:L5ed7a1:{c.instructions+=7;NFSU2_TR(0x5ed7a1);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ed7a3:{NFSU2_TR(0x5ed7a3);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ed7a5:{NFSU2_TR(0x5ed7a5);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ed7a7:{NFSU2_TR(0x5ed7a7);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x34ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5ed7aa:{NFSU2_TR(0x5ed7aa);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ed7ab:{NFSU2_TR(0x5ed7ab);
__builtin_memmove((R+4),(R+24),4);
}
B5ed7ad:{NFSU2_TR(0x5ed7ad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ed7b2ull));
TAIL_STATIC(0x571640u,571);
}
B5ed7b2:L5ed7b2:{c.instructions+=7;NFSU2_TR(0x5ed7b2);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ed7b3:{NFSU2_TR(0x5ed7b3);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ed7b5:{NFSU2_TR(0x5ed7b5);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ed7b7:{NFSU2_TR(0x5ed7b7);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5ed7ba:{NFSU2_TR(0x5ed7ba);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ed7bb:{NFSU2_TR(0x5ed7bb);
__builtin_memmove((R+4),(R+24),4);
}
B5ed7bd:{NFSU2_TR(0x5ed7bd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ed7c2ull));
TAIL_STATIC(0x571640u,571);
}
B5ed7c2:L5ed7c2:{c.instructions+=7;NFSU2_TR(0x5ed7c2);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ed7c3:{NFSU2_TR(0x5ed7c3);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ed7c5:{NFSU2_TR(0x5ed7c5);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ed7c7:{NFSU2_TR(0x5ed7c7);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x39ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5ed7ca:{NFSU2_TR(0x5ed7ca);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ed7cb:{NFSU2_TR(0x5ed7cb);
__builtin_memmove((R+4),(R+24),4);
}
B5ed7cd:{NFSU2_TR(0x5ed7cd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ed7d2ull));
TAIL_STATIC(0x571640u,571);
}
B5ed7d2:L5ed7d2:{c.instructions+=7;NFSU2_TR(0x5ed7d2);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ed7d3:{NFSU2_TR(0x5ed7d3);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ed7d5:{NFSU2_TR(0x5ed7d5);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ed7d7:{NFSU2_TR(0x5ed7d7);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x42ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5ed7da:{NFSU2_TR(0x5ed7da);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ed7db:{NFSU2_TR(0x5ed7db);
__builtin_memmove((R+4),(R+24),4);
}
B5ed7dd:{NFSU2_TR(0x5ed7dd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ed7e2ull));
TAIL_STATIC(0x571640u,571);
}
B5ed7e2:L5ed7e2:{c.instructions+=7;NFSU2_TR(0x5ed7e2);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ed7e3:{NFSU2_TR(0x5ed7e3);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ed7e5:{NFSU2_TR(0x5ed7e5);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ed7e7:{NFSU2_TR(0x5ed7e7);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x43ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5ed7ea:{NFSU2_TR(0x5ed7ea);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ed7eb:{NFSU2_TR(0x5ed7eb);
__builtin_memmove((R+4),(R+24),4);
}
B5ed7ed:{NFSU2_TR(0x5ed7ed);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ed7f2ull));
TAIL_STATIC(0x571640u,571);
}
B5ed7f2:L5ed7f2:{c.instructions+=7;NFSU2_TR(0x5ed7f2);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ed7f3:{NFSU2_TR(0x5ed7f3);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ed7f5:{NFSU2_TR(0x5ed7f5);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ed7f7:{NFSU2_TR(0x5ed7f7);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x44ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5ed7fa:{NFSU2_TR(0x5ed7fa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ed7fb:{NFSU2_TR(0x5ed7fb);
__builtin_memmove((R+4),(R+24),4);
}
B5ed7fd:{NFSU2_TR(0x5ed7fd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ed802ull));
TAIL_STATIC(0x571640u,571);
}
B5ed802:L5ed802:{c.instructions+=7;NFSU2_TR(0x5ed802);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ed803:{NFSU2_TR(0x5ed803);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ed805:{NFSU2_TR(0x5ed805);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ed807:{NFSU2_TR(0x5ed807);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x45ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5ed80a:{NFSU2_TR(0x5ed80a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ed80b:{NFSU2_TR(0x5ed80b);
__builtin_memmove((R+4),(R+24),4);
}
B5ed80d:{NFSU2_TR(0x5ed80d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ed812ull));
TAIL_STATIC(0x571640u,571);
}
B5ed812:L5ed812:{c.instructions+=7;NFSU2_TR(0x5ed812);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ed814:{NFSU2_TR(0x5ed814);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ed816:{NFSU2_TR(0x5ed816);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ed818:{NFSU2_TR(0x5ed818);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x48ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5ed81b:{NFSU2_TR(0x5ed81b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ed81c:{NFSU2_TR(0x5ed81c);
__builtin_memmove((R+4),(R+24),4);
}
B5ed81e:{NFSU2_TR(0x5ed81e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ed823ull));
TAIL_STATIC(0x571640u,571);
}
B5ed823:L5ed823:{c.instructions+=7;NFSU2_TR(0x5ed823);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ed825:{NFSU2_TR(0x5ed825);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ed827:{NFSU2_TR(0x5ed827);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ed829:{NFSU2_TR(0x5ed829);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((R+0),(U+0),4);
}
B5ed82c:{NFSU2_TR(0x5ed82c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ed82d:{NFSU2_TR(0x5ed82d);
__builtin_memmove((R+4),(R+24),4);
}
B5ed82f:{NFSU2_TR(0x5ed82f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ed834ull));
TAIL_STATIC(0x571640u,571);
}
B5ed834:L5ed834:{c.instructions+=4;NFSU2_TR(0x5ed834);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5ed837:{NFSU2_TR(0x5ed837);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ed838:{NFSU2_TR(0x5ed838);
__builtin_memmove((R+4),(R+24),4);
}
B5ed83a:{NFSU2_TR(0x5ed83a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ed83full));
TAIL_STATIC(0x571770u,571);
}
B5ed83f:L5ed83f:{c.instructions+=7;NFSU2_TR(0x5ed83f);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ed841:{NFSU2_TR(0x5ed841);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ed843:{NFSU2_TR(0x5ed843);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ed845:{NFSU2_TR(0x5ed845);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5ed848:{NFSU2_TR(0x5ed848);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ed849:{NFSU2_TR(0x5ed849);
__builtin_memmove((R+4),(R+24),4);
}
B5ed84b:{NFSU2_TR(0x5ed84b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ed850ull));
TAIL_STATIC(0x571640u,571);
}
B5ed850:L5ed850:{c.instructions+=7;NFSU2_TR(0x5ed850);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ed852:{NFSU2_TR(0x5ed852);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ed854:{NFSU2_TR(0x5ed854);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ed856:{NFSU2_TR(0x5ed856);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x58ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5ed859:{NFSU2_TR(0x5ed859);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ed85a:{NFSU2_TR(0x5ed85a);
__builtin_memmove((R+4),(R+24),4);
}
B5ed85c:{NFSU2_TR(0x5ed85c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ed861ull));
TAIL_STATIC(0x571640u,571);
}
B5ed861:L5ed861:{c.instructions+=4;NFSU2_TR(0x5ed861);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x5cull))));
__builtin_memmove((R+4),(U+0),4);
}
B5ed864:{NFSU2_TR(0x5ed864);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ed865:{NFSU2_TR(0x5ed865);
__builtin_memmove((R+4),(R+24),4);
}
B5ed867:{NFSU2_TR(0x5ed867);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ed86cull));
TAIL_STATIC(0x571770u,571);
}
B5ed86c:L5ed86c:{c.instructions+=4;NFSU2_TR(0x5ed86c);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x60ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5ed86f:{NFSU2_TR(0x5ed86f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ed870:{NFSU2_TR(0x5ed870);
__builtin_memmove((R+4),(R+24),4);
}
B5ed872:{NFSU2_TR(0x5ed872);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ed877ull));
TAIL_STATIC(0x571770u,571);
}
B5ed877:L5ed877:{c.instructions+=7;NFSU2_TR(0x5ed877);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ed879:{NFSU2_TR(0x5ed879);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ed87b:{NFSU2_TR(0x5ed87b);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ed87d:{NFSU2_TR(0x5ed87d);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x64ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5ed880:{NFSU2_TR(0x5ed880);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ed881:{NFSU2_TR(0x5ed881);
__builtin_memmove((R+4),(R+24),4);
}
B5ed883:{NFSU2_TR(0x5ed883);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ed888ull));
TAIL_STATIC(0x571640u,571);
}
B5ed888:L5ed888:{c.instructions+=7;NFSU2_TR(0x5ed888);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ed88a:{NFSU2_TR(0x5ed88a);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ed88c:{NFSU2_TR(0x5ed88c);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ed88e:{NFSU2_TR(0x5ed88e);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x68ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5ed891:{NFSU2_TR(0x5ed891);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ed892:{NFSU2_TR(0x5ed892);
__builtin_memmove((R+4),(R+24),4);
}
B5ed894:{NFSU2_TR(0x5ed894);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ed899ull));
TAIL_STATIC(0x571640u,571);
}
B5ed899:L5ed899:{c.instructions+=7;NFSU2_TR(0x5ed899);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ed89b:{NFSU2_TR(0x5ed89b);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ed89d:{NFSU2_TR(0x5ed89d);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ed89f:{NFSU2_TR(0x5ed89f);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6cull))));
__builtin_memmove((R+8),(U+0),4);
}
B5ed8a2:{NFSU2_TR(0x5ed8a2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ed8a3:{NFSU2_TR(0x5ed8a3);
__builtin_memmove((R+4),(R+24),4);
}
B5ed8a5:{NFSU2_TR(0x5ed8a5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ed8aaull));
TAIL_STATIC(0x571640u,571);
}
B5ed8aa:L5ed8aa:{c.instructions+=4;NFSU2_TR(0x5ed8aa);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x74ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5ed8ad:{NFSU2_TR(0x5ed8ad);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ed8ae:{NFSU2_TR(0x5ed8ae);
__builtin_memmove((R+4),(R+24),4);
}
B5ed8b0:{NFSU2_TR(0x5ed8b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ed8b5ull));
TAIL_STATIC(0x571770u,571);
}
B5ed8b5:L5ed8b5:{c.instructions+=2;NFSU2_TR(0x5ed8b5);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((U+4),(U+0),4);
w1(R+523,sborrow<u32>(r4(U+4),r4(R+20)));
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+20))));
w1(R+519,u8(s32(r4(U+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B5ed8b7:{NFSU2_TR(0x5ed8b7);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5ed8e4;}}
}
B5ed8b9:L5ed8b9:{c.instructions+=2;NFSU2_TR(0x5ed8b9);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ed8bd:{NFSU2_TR(0x5ed8bd);
__builtin_memmove((R+4),(R+4),4);
}
B5ed8c0:L5ed8c0:{c.instructions+=5;NFSU2_TR(0x5ed8c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ed8c3:{NFSU2_TR(0x5ed8c3);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ed8c7:{NFSU2_TR(0x5ed8c7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ed8c8:{NFSU2_TR(0x5ed8c8);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B5ed8ca:{NFSU2_TR(0x5ed8ca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ed8cfull));
TAIL_STATIC(0x631d60u,631);
}
B5ed8cf:L5ed8cf:{c.instructions+=7;NFSU2_TR(0x5ed8cf);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ed8d3:{NFSU2_TR(0x5ed8d3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5ed8d5:{NFSU2_TR(0x5ed8d5);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B5ed8d6:{NFSU2_TR(0x5ed8d6);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x940ull))));
}
B5ed8dc:{NFSU2_TR(0x5ed8dc);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+20),r4(U+0)));
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5ed8de:{NFSU2_TR(0x5ed8de);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ed8e2:{NFSU2_TR(0x5ed8e2);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5ed8c0u);}goto L5ed8c0;}}
}
B5ed8e4:L5ed8e4:{c.instructions+=2;NFSU2_TR(0x5ed8e4);
__builtin_memmove((R+4),(R+24),4);
}
B5ed8e6:{NFSU2_TR(0x5ed8e6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ed8ebull));
TAIL_STATIC(0x578d90u,578);
}
B5ed8eb:L5ed8eb:{c.instructions+=5;NFSU2_TR(0x5ed8eb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5ed8ec:{NFSU2_TR(0x5ed8ec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5ed8ed:{NFSU2_TR(0x5ed8ed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5ed8ee:{NFSU2_TR(0x5ed8ee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5ed8ef:{NFSU2_TR(0x5ed8ef);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ed900:L5ed900:{c.instructions+=5;NFSU2_TR(0x5ed900);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ed904:{NFSU2_TR(0x5ed904);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5ed907:{NFSU2_TR(0x5ed907);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x940ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B5ed90d:{NFSU2_TR(0x5ed90d);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),r4(R+8)));
w1(R+523,scarry<u32>(r4(R+0),r4(R+8)));
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5ed90f:{NFSU2_TR(0x5ed90f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ed920:L5ed920:{c.instructions+=7;NFSU2_TR(0x5ed920);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5ed923:{NFSU2_TR(0x5ed923);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ed924:{NFSU2_TR(0x5ed924);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ed925:{NFSU2_TR(0x5ed925);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5ed927:{NFSU2_TR(0x5ed927);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5ed929:{NFSU2_TR(0x5ed929);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ed92a:{NFSU2_TR(0x5ed92a);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5ed948;}}
}
B5ed92c:L5ed92c:{c.instructions+=3;NFSU2_TR(0x5ed92c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5ed92f:{NFSU2_TR(0x5ed92f);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5ed933:{NFSU2_TR(0x5ed933);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5ed936:L5ed936:{c.instructions+=3;NFSU2_TR(0x5ed936);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
w4(R+12,u32(s32(s8(r1(U+0)))));
}
B5ed939:{NFSU2_TR(0x5ed939);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5ed93b:{NFSU2_TR(0x5ed93b);
if(r1(R+518)){{goto L5ed950;}}
}
B5ed93d:L5ed93d:{c.instructions+=4;NFSU2_TR(0x5ed93d);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5ed93e:{NFSU2_TR(0x5ed93e);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x940ull))));
}
B5ed944:{NFSU2_TR(0x5ed944);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5ed946:{NFSU2_TR(0x5ed946);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5ed936u);}goto L5ed936;}}
}
B5ed948:L5ed948:{c.instructions+=5;NFSU2_TR(0x5ed948);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5ed949:{NFSU2_TR(0x5ed949);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5ed94a:{NFSU2_TR(0x5ed94a);
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
B5ed94c:{NFSU2_TR(0x5ed94c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5ed94d:{NFSU2_TR(0x5ed94d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ed950:L5ed950:{c.instructions+=6;NFSU2_TR(0x5ed950);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x940ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B5ed956:{NFSU2_TR(0x5ed956);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5ed957:{NFSU2_TR(0x5ed957);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),r4(R+24)));
w1(R+523,scarry<u32>(r4(R+0),r4(R+24)));
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5ed959:{NFSU2_TR(0x5ed959);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5ed95a:{NFSU2_TR(0x5ed95a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5ed95b:{NFSU2_TR(0x5ed95b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ed960:L5ed960:{c.instructions+=4;NFSU2_TR(0x5ed960);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ed964:{NFSU2_TR(0x5ed964);
u8 U[16];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B5ed968:{NFSU2_TR(0x5ed968);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xffffffffull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5ed96b:{NFSU2_TR(0x5ed96b);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5ed976;}}
}
B5ed96d:L5ed96d:{c.instructions+=2;NFSU2_TR(0x5ed96d);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ed971:{NFSU2_TR(0x5ed971);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5ed920u);}goto L5ed920;}
}
B5ed976:L5ed976:{c.instructions+=2;NFSU2_TR(0x5ed976);
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
B5ed978:{NFSU2_TR(0x5ed978);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ed980:L5ed980:{c.instructions+=3;NFSU2_TR(0x5ed980);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ed984:{NFSU2_TR(0x5ed984);
u8 U[16];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B5ed988:{NFSU2_TR(0x5ed988);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ed990:L5ed990:{c.instructions+=3;NFSU2_TR(0x5ed990);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ed993:{NFSU2_TR(0x5ed993);
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
B5ed995:{NFSU2_TR(0x5ed995);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ed99a;}}
}
B5ed997:L5ed997:{c.instructions+=2;NFSU2_TR(0x5ed997);
w1(R+0,u8(0x1ull));
}
B5ed999:{NFSU2_TR(0x5ed999);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ed99a:L5ed99a:{c.instructions+=2;NFSU2_TR(0x5ed99a);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5ed99d:{NFSU2_TR(0x5ed99d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ed9ac;}}
}
B5ed99f:L5ed99f:{c.instructions+=3;NFSU2_TR(0x5ed99f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ed9a2:{NFSU2_TR(0x5ed9a2);
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
B5ed9a4:{NFSU2_TR(0x5ed9a4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ed9ac;}}
}
B5ed9a6:L5ed9a6:{c.instructions+=2;NFSU2_TR(0x5ed9a6);
w4(R+0,u32(0x1ull));
}
B5ed9ab:{NFSU2_TR(0x5ed9ab);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ed9ac:L5ed9ac:{c.instructions+=2;NFSU2_TR(0x5ed9ac);
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
B5ed9ae:{NFSU2_TR(0x5ed9ae);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ed9b0:L5ed9b0:{c.instructions+=9;NFSU2_TR(0x5ed9b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x20ull))));
}
B5ed9b3:{NFSU2_TR(0x5ed9b3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ed9b4:{NFSU2_TR(0x5ed9b4);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ed9b5:{NFSU2_TR(0x5ed9b5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ed9b6:{NFSU2_TR(0x5ed9b6);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5ed9ba:{NFSU2_TR(0x5ed9ba);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ed9bb:{NFSU2_TR(0x5ed9bb);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5ed9bd:{NFSU2_TR(0x5ed9bd);
w4(R+4,u32(0x8ull));
}
B5ed9c2:{NFSU2_TR(0x5ed9c2);
__builtin_memmove((R+28),(R+24),4);
}
B5ed9c4:L5ed9c4:{c.instructions+=1;NFSU2_TR(0x5ed9c4);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L5ed9c6;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5ed9c4u);}goto L5ed9c4;}
}
B5ed9c6:L5ed9c6:{c.instructions+=3;NFSU2_TR(0x5ed9c6);
__builtin_memmove((R+0),gp(0x89e7d8),1);
}
B5ed9cb:{NFSU2_TR(0x5ed9cb);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5ed9cd:{NFSU2_TR(0x5ed9cd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ed9d8;}}
}
B5ed9cf:L5ed9cf:{c.instructions+=3;NFSU2_TR(0x5ed9cf);
__builtin_memmove((R+0),gp(0x890108),4);
}
B5ed9d4:{NFSU2_TR(0x5ed9d4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5ed9d6:{NFSU2_TR(0x5ed9d6);
if(r1(R+518)){{goto L5ed9e6;}}
}
B5ed9d8:L5ed9d8:{c.instructions+=4;NFSU2_TR(0x5ed9d8);
__builtin_memmove((R+0),gp(0x89e7c0),4);
}
B5ed9dd:{NFSU2_TR(0x5ed9dd);
w4(R+12,u32(0x1ull));
}
B5ed9e2:{NFSU2_TR(0x5ed9e2);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5ed9e4:{NFSU2_TR(0x5ed9e4);
if(r1(R+518)){{goto L5ed9e8;}}
}
B5ed9e6:L5ed9e6:{c.instructions+=1;NFSU2_TR(0x5ed9e6);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
}
B5ed9e8:L5ed9e8:{c.instructions+=4;NFSU2_TR(0x5ed9e8);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5ed9ea:{NFSU2_TR(0x5ed9ea);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5ed9ef:{NFSU2_TR(0x5ed9ef);
w4(R+4,u32(0x7ull));
}
B5ed9f4:{NFSU2_TR(0x5ed9f4);
u8 U[4];
w4(U+0,u32(u32(u32(0x11ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B5ed9f8:L5ed9f8:{c.instructions+=1;NFSU2_TR(0x5ed9f8);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L5ed9fa;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5ed9f8u);}goto L5ed9f8;}
}
B5ed9fa:L5ed9fa:{c.instructions+=8;NFSU2_TR(0x5ed9fa);
u8 U[18];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x2ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x4ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),2);
s2(u32(r4(U+0)),r2(U+16));
}
B5ed9fc:{NFSU2_TR(0x5ed9fc);
u8 U[17];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
}
B5ed9fd:{NFSU2_TR(0x5ed9fd);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5eda01:{NFSU2_TR(0x5eda01);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eda02:{NFSU2_TR(0x5eda02);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5eda06:{NFSU2_TR(0x5eda06);
u8 U[4];
w4(U+0,u32(0x79c4ccull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eda0b:{NFSU2_TR(0x5eda0b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eda0c:{NFSU2_TR(0x5eda0c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5eda11ull));
TAIL_STATIC(0x4400d0u,440);
}
B5eda11:L5eda11:{c.instructions+=4;NFSU2_TR(0x5eda11);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B5eda14:{NFSU2_TR(0x5eda14);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5eda16:{NFSU2_TR(0x5eda16);
w4(R+0,u32(0x783fe5ull));
}
B5eda1b:{NFSU2_TR(0x5eda1b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5eda21;}}
}
B5eda1d:L5eda1d:{c.instructions+=1;NFSU2_TR(0x5eda1d);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5eda21:L5eda21:{c.instructions+=2;NFSU2_TR(0x5eda21);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eda22:{NFSU2_TR(0x5eda22);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5eda27ull));
TAIL_STATIC(0x43db50u,43d);
}
B5eda27:L5eda27:{c.instructions+=5;NFSU2_TR(0x5eda27);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5eda2a:{NFSU2_TR(0x5eda2a);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5eda2c:{NFSU2_TR(0x5eda2c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5eda2f:{NFSU2_TR(0x5eda2f);
w4(R+0,u32(0x7a5e94ull));
}
B5eda34:{NFSU2_TR(0x5eda34);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5eda3b;}}
}
B5eda36:L5eda36:{c.instructions+=1;NFSU2_TR(0x5eda36);
w4(R+0,u32(0x7a5e88ull));
}
B5eda3b:L5eda3b:{c.instructions+=2;NFSU2_TR(0x5eda3b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eda3c:{NFSU2_TR(0x5eda3c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5eda41ull));
TAIL_STATIC(0x43db50u,43d);
}
B5eda41:L5eda41:{c.instructions+=6;NFSU2_TR(0x5eda41);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5eda44:{NFSU2_TR(0x5eda44);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B5eda46:{NFSU2_TR(0x5eda46);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5eda48:{NFSU2_TR(0x5eda48);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5eda4a:{NFSU2_TR(0x5eda4a);
__builtin_memmove((R+28),(R+0),4);
}
B5eda4c:{NFSU2_TR(0x5eda4c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5edaec;}}
}
B5eda52:L5eda52:{c.instructions+=6;NFSU2_TR(0x5eda52);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5eda56:{NFSU2_TR(0x5eda56);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eda57:{NFSU2_TR(0x5eda57);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5eda5b:{NFSU2_TR(0x5eda5b);
u8 U[4];
w4(U+0,u32(0x79c508ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eda60:{NFSU2_TR(0x5eda60);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eda61:{NFSU2_TR(0x5eda61);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5eda66ull));
TAIL_STATIC(0x4400d0u,440);
}
B5eda66:L5eda66:{c.instructions+=3;NFSU2_TR(0x5eda66);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5eda6a:{NFSU2_TR(0x5eda6a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eda6b:{NFSU2_TR(0x5eda6b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5eda70ull));
TAIL_STATIC(0x43db50u,43d);
}
B5eda70:L5eda70:{c.instructions+=8;NFSU2_TR(0x5eda70);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5eda74:{NFSU2_TR(0x5eda74);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5eda77:{NFSU2_TR(0x5eda77);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5eda7b:{NFSU2_TR(0x5eda7b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eda7c:{NFSU2_TR(0x5eda7c);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5eda80:{NFSU2_TR(0x5eda80);
u8 U[4];
w4(U+0,u32(0x79c528ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eda85:{NFSU2_TR(0x5eda85);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eda86:{NFSU2_TR(0x5eda86);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5eda8bull));
TAIL_STATIC(0x4400d0u,440);
}
B5eda8b:L5eda8b:{c.instructions+=3;NFSU2_TR(0x5eda8b);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5eda8f:{NFSU2_TR(0x5eda8f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eda90:{NFSU2_TR(0x5eda90);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5eda95ull));
TAIL_STATIC(0x43db50u,43d);
}
B5eda95:L5eda95:{c.instructions+=8;NFSU2_TR(0x5eda95);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5eda99:{NFSU2_TR(0x5eda99);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5eda9d:{NFSU2_TR(0x5eda9d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eda9e:{NFSU2_TR(0x5eda9e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5edaa1:{NFSU2_TR(0x5edaa1);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5edaa5:{NFSU2_TR(0x5edaa5);
u8 U[4];
w4(U+0,u32(0x79c4e4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5edaaa:{NFSU2_TR(0x5edaaa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5edaab:{NFSU2_TR(0x5edaab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5edab0ull));
TAIL_STATIC(0x4400d0u,440);
}
B5edab0:L5edab0:{c.instructions+=3;NFSU2_TR(0x5edab0);
u8 U[4];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5edab4:{NFSU2_TR(0x5edab4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5edab5:{NFSU2_TR(0x5edab5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5edabaull));
TAIL_STATIC(0x43db50u,43d);
}
B5edaba:L5edaba:{c.instructions+=8;NFSU2_TR(0x5edaba);
u8 U[8];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5edabe:{NFSU2_TR(0x5edabe);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5edac1:{NFSU2_TR(0x5edac1);
u8 U[8];
w4(U+0,u32(u32(u32(0x74ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5edac5:{NFSU2_TR(0x5edac5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5edac6:{NFSU2_TR(0x5edac6);
u8 U[4];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5edaca:{NFSU2_TR(0x5edaca);
u8 U[4];
w4(U+0,u32(0x79c4acull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5edacf:{NFSU2_TR(0x5edacf);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5edad0:{NFSU2_TR(0x5edad0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5edad5ull));
TAIL_STATIC(0x4400d0u,440);
}
B5edad5:L5edad5:{c.instructions+=3;NFSU2_TR(0x5edad5);
u8 U[4];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5edad9:{NFSU2_TR(0x5edad9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5edada:{NFSU2_TR(0x5edada);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5edadfull));
TAIL_STATIC(0x43db50u,43d);
}
B5edadf:L5edadf:{c.instructions+=3;NFSU2_TR(0x5edadf);
u8 U[8];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5edae6:{NFSU2_TR(0x5edae6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x40ull))));
}
B5edae9:{NFSU2_TR(0x5edae9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5edaec:L5edaec:{c.instructions+=3;NFSU2_TR(0x5edaec);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5edaf0:{NFSU2_TR(0x5edaf0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5edaf1:{NFSU2_TR(0x5edaf1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5edaf6ull));
TAIL_STATIC(0x60fe10u,60f);
}
B5edaf6:L5edaf6:{c.instructions+=3;NFSU2_TR(0x5edaf6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5edaf9:{NFSU2_TR(0x5edaf9);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x7ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x7ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x7ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5edafc:{NFSU2_TR(0x5edafc);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L5edd5f;}}
}
B5edb02:L5edb02:{c.instructions+=1;NFSU2_TR(0x5edb02);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x5edd70ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5edb09:L5edb09:{c.instructions+=2;NFSU2_TR(0x5edb09);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5edb0b:{NFSU2_TR(0x5edb0b);
if(r1(R+518)){{goto L5edb27;}}
}
B5edb0d:L5edb0d:{c.instructions+=3;NFSU2_TR(0x5edb0d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5edb0e:{NFSU2_TR(0x5edb0e);
u8 U[4];
w4(U+0,u32(0x7a5e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5edb13:{NFSU2_TR(0x5edb13);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5edb18ull));
TAIL_STATIC(0x43db80u,43d);
}
B5edb18:L5edb18:{c.instructions+=4;NFSU2_TR(0x5edb18);
__builtin_memmove((R+20),(R+0),4);
}
B5edb1a:{NFSU2_TR(0x5edb1a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5edb1d:{NFSU2_TR(0x5edb1d);
w4(R+0,u32(0x7a5e6cull));
}
B5edb22:{NFSU2_TR(0x5edb22);
{goto L5edd53;}
}
B5edb27:L5edb27:{c.instructions+=6;NFSU2_TR(0x5edb27);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5edb2b:{NFSU2_TR(0x5edb2b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5edb2c:{NFSU2_TR(0x5edb2c);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5edb30:{NFSU2_TR(0x5edb30);
u8 U[4];
w4(U+0,u32(0x79c488ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5edb35:{NFSU2_TR(0x5edb35);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5edb36:{NFSU2_TR(0x5edb36);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5edb3bull));
TAIL_STATIC(0x4400d0u,440);
}
B5edb3b:L5edb3b:{c.instructions+=3;NFSU2_TR(0x5edb3b);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5edb3f:{NFSU2_TR(0x5edb3f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5edb40:{NFSU2_TR(0x5edb40);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5edb45ull));
TAIL_STATIC(0x43db50u,43d);
}
B5edb45:L5edb45:{c.instructions+=4;NFSU2_TR(0x5edb45);
__builtin_memmove((R+20),(R+0),4);
}
B5edb47:{NFSU2_TR(0x5edb47);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B5edb4a:{NFSU2_TR(0x5edb4a);
w4(R+0,u32(0x7a5e5cull));
}
B5edb4f:{NFSU2_TR(0x5edb4f);
{goto L5edd53;}
}
B5edb54:L5edb54:{c.instructions+=2;NFSU2_TR(0x5edb54);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5edb56:{NFSU2_TR(0x5edb56);
if(r1(R+518)){{goto L5edb72;}}
}
B5edb58:L5edb58:{c.instructions+=3;NFSU2_TR(0x5edb58);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5edb59:{NFSU2_TR(0x5edb59);
u8 U[4];
w4(U+0,u32(0x7a5e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5edb5e:{NFSU2_TR(0x5edb5e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5edb63ull));
TAIL_STATIC(0x43db80u,43d);
}
B5edb63:L5edb63:{c.instructions+=4;NFSU2_TR(0x5edb63);
__builtin_memmove((R+20),(R+0),4);
}
B5edb65:{NFSU2_TR(0x5edb65);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5edb68:{NFSU2_TR(0x5edb68);
w4(R+0,u32(0x7a5e4cull));
}
B5edb6d:{NFSU2_TR(0x5edb6d);
{goto L5edd53;}
}
B5edb72:L5edb72:{c.instructions+=6;NFSU2_TR(0x5edb72);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5edb76:{NFSU2_TR(0x5edb76);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5edb77:{NFSU2_TR(0x5edb77);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5edb7b:{NFSU2_TR(0x5edb7b);
u8 U[4];
w4(U+0,u32(0x79c488ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5edb80:{NFSU2_TR(0x5edb80);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5edb81:{NFSU2_TR(0x5edb81);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5edb86ull));
TAIL_STATIC(0x4400d0u,440);
}
B5edb86:L5edb86:{c.instructions+=3;NFSU2_TR(0x5edb86);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5edb8a:{NFSU2_TR(0x5edb8a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5edb8b:{NFSU2_TR(0x5edb8b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5edb90ull));
TAIL_STATIC(0x43db50u,43d);
}
B5edb90:L5edb90:{c.instructions+=4;NFSU2_TR(0x5edb90);
__builtin_memmove((R+20),(R+0),4);
}
B5edb92:{NFSU2_TR(0x5edb92);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B5edb95:{NFSU2_TR(0x5edb95);
w4(R+0,u32(0x7a5e3cull));
}
B5edb9a:{NFSU2_TR(0x5edb9a);
{goto L5edd53;}
}
B5edb9f:L5edb9f:{c.instructions+=2;NFSU2_TR(0x5edb9f);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5edba1:{NFSU2_TR(0x5edba1);
if(r1(R+518)){{goto L5edbbd;}}
}
B5edba3:L5edba3:{c.instructions+=3;NFSU2_TR(0x5edba3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5edba4:{NFSU2_TR(0x5edba4);
u8 U[4];
w4(U+0,u32(0x7a5e30ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5edba9:{NFSU2_TR(0x5edba9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5edbaeull));
TAIL_STATIC(0x43db80u,43d);
}
B5edbae:L5edbae:{c.instructions+=4;NFSU2_TR(0x5edbae);
__builtin_memmove((R+20),(R+0),4);
}
B5edbb0:{NFSU2_TR(0x5edbb0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5edbb3:{NFSU2_TR(0x5edbb3);
w4(R+0,u32(0x7a5e20ull));
}
B5edbb8:{NFSU2_TR(0x5edbb8);
{goto L5edd53;}
}
B5edbbd:L5edbbd:{c.instructions+=6;NFSU2_TR(0x5edbbd);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5edbc1:{NFSU2_TR(0x5edbc1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5edbc2:{NFSU2_TR(0x5edbc2);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5edbc6:{NFSU2_TR(0x5edbc6);
u8 U[4];
w4(U+0,u32(0x79c438ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5edbcb:{NFSU2_TR(0x5edbcb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5edbcc:{NFSU2_TR(0x5edbcc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5edbd1ull));
TAIL_STATIC(0x4400d0u,440);
}
B5edbd1:L5edbd1:{c.instructions+=3;NFSU2_TR(0x5edbd1);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5edbd5:{NFSU2_TR(0x5edbd5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5edbd6:{NFSU2_TR(0x5edbd6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5edbdbull));
TAIL_STATIC(0x43db50u,43d);
}
B5edbdb:L5edbdb:{c.instructions+=4;NFSU2_TR(0x5edbdb);
__builtin_memmove((R+20),(R+0),4);
}
B5edbdd:{NFSU2_TR(0x5edbdd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B5edbe0:{NFSU2_TR(0x5edbe0);
w4(R+0,u32(0x7a5e10ull));
}
B5edbe5:{NFSU2_TR(0x5edbe5);
{goto L5edd53;}
}
B5edbea:L5edbea:{c.instructions+=2;NFSU2_TR(0x5edbea);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5edbec:{NFSU2_TR(0x5edbec);
if(r1(R+518)){{goto L5edc08;}}
}
B5edbee:L5edbee:{c.instructions+=3;NFSU2_TR(0x5edbee);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5edbef:{NFSU2_TR(0x5edbef);
u8 U[4];
w4(U+0,u32(0x7a5e30ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5edbf4:{NFSU2_TR(0x5edbf4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5edbf9ull));
TAIL_STATIC(0x43db80u,43d);
}
B5edbf9:L5edbf9:{c.instructions+=4;NFSU2_TR(0x5edbf9);
__builtin_memmove((R+20),(R+0),4);
}
B5edbfb:{NFSU2_TR(0x5edbfb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5edbfe:{NFSU2_TR(0x5edbfe);
w4(R+0,u32(0x7a5e00ull));
}
B5edc03:{NFSU2_TR(0x5edc03);
{goto L5edd53;}
}
B5edc08:L5edc08:{c.instructions+=6;NFSU2_TR(0x5edc08);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5edc0c:{NFSU2_TR(0x5edc0c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5edc0d:{NFSU2_TR(0x5edc0d);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5edc11:{NFSU2_TR(0x5edc11);
u8 U[4];
w4(U+0,u32(0x79c438ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5edc16:{NFSU2_TR(0x5edc16);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5edc17:{NFSU2_TR(0x5edc17);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5edc1cull));
TAIL_STATIC(0x4400d0u,440);
}
B5edc1c:L5edc1c:{c.instructions+=3;NFSU2_TR(0x5edc1c);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5edc20:{NFSU2_TR(0x5edc20);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5edc21:{NFSU2_TR(0x5edc21);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5edc26ull));
TAIL_STATIC(0x43db50u,43d);
}
B5edc26:L5edc26:{c.instructions+=4;NFSU2_TR(0x5edc26);
__builtin_memmove((R+20),(R+0),4);
}
B5edc28:{NFSU2_TR(0x5edc28);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B5edc2b:{NFSU2_TR(0x5edc2b);
w4(R+0,u32(0x7a5df0ull));
}
B5edc30:{NFSU2_TR(0x5edc30);
{goto L5edd53;}
}
B5edc35:L5edc35:{c.instructions+=2;NFSU2_TR(0x5edc35);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5edc37:{NFSU2_TR(0x5edc37);
if(r1(R+518)){{goto L5edc53;}}
}
B5edc39:L5edc39:{c.instructions+=3;NFSU2_TR(0x5edc39);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5edc3a:{NFSU2_TR(0x5edc3a);
u8 U[4];
w4(U+0,u32(0x7a5de4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5edc3f:{NFSU2_TR(0x5edc3f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5edc44ull));
TAIL_STATIC(0x43db80u,43d);
}
B5edc44:L5edc44:{c.instructions+=4;NFSU2_TR(0x5edc44);
__builtin_memmove((R+20),(R+0),4);
}
B5edc46:{NFSU2_TR(0x5edc46);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5edc49:{NFSU2_TR(0x5edc49);
w4(R+0,u32(0x7a5dd4ull));
}
B5edc4e:{NFSU2_TR(0x5edc4e);
{goto L5edd53;}
}
B5edc53:L5edc53:{c.instructions+=6;NFSU2_TR(0x5edc53);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5edc57:{NFSU2_TR(0x5edc57);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5edc58:{NFSU2_TR(0x5edc58);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5edc5c:{NFSU2_TR(0x5edc5c);
u8 U[4];
w4(U+0,u32(0x79c3e4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5edc61:{NFSU2_TR(0x5edc61);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5edc62:{NFSU2_TR(0x5edc62);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5edc67ull));
TAIL_STATIC(0x4400d0u,440);
}
B5edc67:L5edc67:{c.instructions+=3;NFSU2_TR(0x5edc67);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5edc6b:{NFSU2_TR(0x5edc6b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5edc6c:{NFSU2_TR(0x5edc6c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5edc71ull));
TAIL_STATIC(0x43db50u,43d);
}
B5edc71:L5edc71:{c.instructions+=4;NFSU2_TR(0x5edc71);
__builtin_memmove((R+20),(R+0),4);
}
B5edc73:{NFSU2_TR(0x5edc73);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B5edc76:{NFSU2_TR(0x5edc76);
w4(R+0,u32(0x7a5dc4ull));
}
B5edc7b:{NFSU2_TR(0x5edc7b);
{goto L5edd53;}
}
B5edc80:L5edc80:{c.instructions+=2;NFSU2_TR(0x5edc80);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5edc82:{NFSU2_TR(0x5edc82);
if(r1(R+518)){{goto L5edc9e;}}
}
B5edc84:L5edc84:{c.instructions+=3;NFSU2_TR(0x5edc84);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5edc85:{NFSU2_TR(0x5edc85);
u8 U[4];
w4(U+0,u32(0x7a5de4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5edc8a:{NFSU2_TR(0x5edc8a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5edc8full));
TAIL_STATIC(0x43db80u,43d);
}
B5edc8f:L5edc8f:{c.instructions+=4;NFSU2_TR(0x5edc8f);
__builtin_memmove((R+20),(R+0),4);
}
B5edc91:{NFSU2_TR(0x5edc91);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5edc94:{NFSU2_TR(0x5edc94);
w4(R+0,u32(0x7a5db4ull));
}
B5edc99:{NFSU2_TR(0x5edc99);
{goto L5edd53;}
}
B5edc9e:L5edc9e:{c.instructions+=6;NFSU2_TR(0x5edc9e);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5edca2:{NFSU2_TR(0x5edca2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5edca3:{NFSU2_TR(0x5edca3);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5edca7:{NFSU2_TR(0x5edca7);
u8 U[4];
w4(U+0,u32(0x79c3e4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5edcac:{NFSU2_TR(0x5edcac);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5edcad:{NFSU2_TR(0x5edcad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5edcb2ull));
TAIL_STATIC(0x4400d0u,440);
}
B5edcb2:L5edcb2:{c.instructions+=3;NFSU2_TR(0x5edcb2);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5edcb6:{NFSU2_TR(0x5edcb6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5edcb7:{NFSU2_TR(0x5edcb7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5edcbcull));
TAIL_STATIC(0x43db50u,43d);
}
B5edcbc:L5edcbc:{c.instructions+=4;NFSU2_TR(0x5edcbc);
__builtin_memmove((R+20),(R+0),4);
}
B5edcbe:{NFSU2_TR(0x5edcbe);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B5edcc1:{NFSU2_TR(0x5edcc1);
w4(R+0,u32(0x7a5da4ull));
}
B5edcc6:{NFSU2_TR(0x5edcc6);
{goto L5edd53;}
}
B5edccb:L5edccb:{c.instructions+=2;NFSU2_TR(0x5edccb);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5edccd:{NFSU2_TR(0x5edccd);
if(r1(R+518)){{goto L5edce6;}}
}
B5edccf:L5edccf:{c.instructions+=3;NFSU2_TR(0x5edccf);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5edcd0:{NFSU2_TR(0x5edcd0);
u8 U[4];
w4(U+0,u32(0x7a5d98ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5edcd5:{NFSU2_TR(0x5edcd5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5edcdaull));
TAIL_STATIC(0x43db80u,43d);
}
B5edcda:L5edcda:{c.instructions+=4;NFSU2_TR(0x5edcda);
__builtin_memmove((R+20),(R+0),4);
}
B5edcdc:{NFSU2_TR(0x5edcdc);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5edcdf:{NFSU2_TR(0x5edcdf);
w4(R+0,u32(0x7a5d88ull));
}
B5edce4:{NFSU2_TR(0x5edce4);
{goto L5edd53;}
}
B5edce6:L5edce6:{c.instructions+=6;NFSU2_TR(0x5edce6);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5edcea:{NFSU2_TR(0x5edcea);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5edceb:{NFSU2_TR(0x5edceb);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5edcef:{NFSU2_TR(0x5edcef);
u8 U[4];
w4(U+0,u32(0x79c394ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5edcf4:{NFSU2_TR(0x5edcf4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5edcf5:{NFSU2_TR(0x5edcf5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5edcfaull));
TAIL_STATIC(0x4400d0u,440);
}
B5edcfa:L5edcfa:{c.instructions+=3;NFSU2_TR(0x5edcfa);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5edcfe:{NFSU2_TR(0x5edcfe);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5edcff:{NFSU2_TR(0x5edcff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5edd04ull));
TAIL_STATIC(0x43db50u,43d);
}
B5edd04:L5edd04:{c.instructions+=4;NFSU2_TR(0x5edd04);
__builtin_memmove((R+20),(R+0),4);
}
B5edd06:{NFSU2_TR(0x5edd06);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B5edd09:{NFSU2_TR(0x5edd09);
w4(R+0,u32(0x7a5d78ull));
}
B5edd0e:{NFSU2_TR(0x5edd0e);
{goto L5edd53;}
}
B5edd10:L5edd10:{c.instructions+=2;NFSU2_TR(0x5edd10);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5edd12:{NFSU2_TR(0x5edd12);
if(r1(R+518)){{goto L5edd2b;}}
}
B5edd14:L5edd14:{c.instructions+=3;NFSU2_TR(0x5edd14);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5edd15:{NFSU2_TR(0x5edd15);
u8 U[4];
w4(U+0,u32(0x7a5d98ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5edd1a:{NFSU2_TR(0x5edd1a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5edd1full));
TAIL_STATIC(0x43db80u,43d);
}
B5edd1f:L5edd1f:{c.instructions+=4;NFSU2_TR(0x5edd1f);
__builtin_memmove((R+20),(R+0),4);
}
B5edd21:{NFSU2_TR(0x5edd21);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5edd24:{NFSU2_TR(0x5edd24);
w4(R+0,u32(0x7a5d68ull));
}
B5edd29:{NFSU2_TR(0x5edd29);
{goto L5edd53;}
}
B5edd2b:L5edd2b:{c.instructions+=6;NFSU2_TR(0x5edd2b);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5edd2f:{NFSU2_TR(0x5edd2f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5edd30:{NFSU2_TR(0x5edd30);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5edd34:{NFSU2_TR(0x5edd34);
u8 U[4];
w4(U+0,u32(0x79c394ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5edd39:{NFSU2_TR(0x5edd39);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5edd3a:{NFSU2_TR(0x5edd3a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5edd3full));
TAIL_STATIC(0x4400d0u,440);
}
B5edd3f:L5edd3f:{c.instructions+=3;NFSU2_TR(0x5edd3f);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5edd43:{NFSU2_TR(0x5edd43);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5edd44:{NFSU2_TR(0x5edd44);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5edd49ull));
TAIL_STATIC(0x43db50u,43d);
}
B5edd49:L5edd49:{c.instructions+=3;NFSU2_TR(0x5edd49);
__builtin_memmove((R+20),(R+0),4);
}
B5edd4b:{NFSU2_TR(0x5edd4b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B5edd4e:{NFSU2_TR(0x5edd4e);
w4(R+0,u32(0x7a5d58ull));
}
B5edd53:L5edd53:{c.instructions+=3;NFSU2_TR(0x5edd53);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5edd54:{NFSU2_TR(0x5edd54);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5edd55:{NFSU2_TR(0x5edd55);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5edd5aull));
TAIL_STATIC(0x43db80u,43d);
}
B5edd5a:L5edd5a:{c.instructions+=2;NFSU2_TR(0x5edd5a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5edd5d:{NFSU2_TR(0x5edd5d);
__builtin_memmove((R+24),(R+0),4);
}
B5edd5f:L5edd5f:{c.instructions+=9;NFSU2_TR(0x5edd5f);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5edd63:{NFSU2_TR(0x5edd63);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5edd64:{NFSU2_TR(0x5edd64);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5edd67:{NFSU2_TR(0x5edd67);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5edd68:{NFSU2_TR(0x5edd68);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5edd6a:{NFSU2_TR(0x5edd6a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5edd6b:{NFSU2_TR(0x5edd6b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5edd6c:{NFSU2_TR(0x5edd6c);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x20ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x20ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5edd6f:{NFSU2_TR(0x5edd6f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5edd90:L5edd90:{c.instructions+=8;NFSU2_TR(0x5edd90);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5edd91:{NFSU2_TR(0x5edd91);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5edd95:{NFSU2_TR(0x5edd95);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5edd96:{NFSU2_TR(0x5edd96);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5edd9c:{NFSU2_TR(0x5edd9c);
__builtin_memmove((R+24),(R+4),4);
}
B5edd9e:{NFSU2_TR(0x5edd9e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5edda0:{NFSU2_TR(0x5edda0);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5edda3:{NFSU2_TR(0x5edda3);
if(r1(R+514)){{goto L5eddad;}}
}
B5edda5:L5edda5:{c.instructions+=1;NFSU2_TR(0x5edda5);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5eddad:L5eddad:{c.instructions+=2;NFSU2_TR(0x5eddad);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5eddb1:{NFSU2_TR(0x5eddb1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5eddb6ull));
TAIL_STATIC(0x75bed4u,75b);
}
B5eddb6:L5eddb6:{c.instructions+=7;NFSU2_TR(0x5eddb6);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5eddba:{NFSU2_TR(0x5eddba);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5eddbe:{NFSU2_TR(0x5eddbe);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5eddc2:{NFSU2_TR(0x5eddc2);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B5eddc4:{NFSU2_TR(0x5eddc4);
{u32 ea_=u32(u32(7919712u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5eddca:{NFSU2_TR(0x5eddca);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5eddcc:{NFSU2_TR(0x5eddcc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5eddd1ull));
TAIL_STATIC(0x75bed4u,75b);
}
B5eddd1:L5eddd1:{c.instructions+=5;NFSU2_TR(0x5eddd1);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5eddd5:{NFSU2_TR(0x5eddd5);
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
B5eddd7:{NFSU2_TR(0x5eddd7);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5edddb:{NFSU2_TR(0x5edddb);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B5edddf:{NFSU2_TR(0x5edddf);
if(r1(R+518)){{goto L5ede03;}}
}
B5edde1:L5edde1:{c.instructions+=14;NFSU2_TR(0x5edde1);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5edde5:{NFSU2_TR(0x5edde5);
{u32 ea_=u32(u32(7997184u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5eddeb:{NFSU2_TR(0x5eddeb);
__asm__ volatile(".byte 0xd8,0xe9":::"memory");
}
B5edded:{NFSU2_TR(0x5edded);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B5eddef:{NFSU2_TR(0x5eddef);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B5eddf1:{NFSU2_TR(0x5eddf1);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5eddf3:{NFSU2_TR(0x5eddf3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5eddf4:{NFSU2_TR(0x5eddf4);
__asm__ volatile(".byte 0xde,0xc2":::"memory");
}
B5eddf6:{NFSU2_TR(0x5eddf6);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5eddf8:{NFSU2_TR(0x5eddf8);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5eddfb:{NFSU2_TR(0x5eddfb);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5eddfd:{NFSU2_TR(0x5eddfd);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5eddff:{NFSU2_TR(0x5eddff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5ede00:{NFSU2_TR(0x5ede00);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ede03:L5ede03:{c.instructions+=5;NFSU2_TR(0x5ede03);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5ede05:{NFSU2_TR(0x5ede05);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5ede06:{NFSU2_TR(0x5ede06);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5ede08:{NFSU2_TR(0x5ede08);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5ede09:{NFSU2_TR(0x5ede09);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ede10:L5ede10:{c.instructions+=15;NFSU2_TR(0x5ede10);
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
B5ede12:{NFSU2_TR(0x5ede12);
w4(R+8,u32(0xbf800000ull));
}
B5ede17:{NFSU2_TR(0x5ede17);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B5ede19:{NFSU2_TR(0x5ede19);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ede1c:{NFSU2_TR(0x5ede1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ede1f:{NFSU2_TR(0x5ede1f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ede22:{NFSU2_TR(0x5ede22);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ede25:{NFSU2_TR(0x5ede25);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ede28:{NFSU2_TR(0x5ede28);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ede2b:{NFSU2_TR(0x5ede2b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ede2e:{NFSU2_TR(0x5ede2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5ede35:{NFSU2_TR(0x5ede35);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ede38:{NFSU2_TR(0x5ede38);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ede3b:{NFSU2_TR(0x5ede3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ede3e:{NFSU2_TR(0x5ede3e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ede40:L5ede40:{c.instructions+=11;NFSU2_TR(0x5ede40);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ede42:{NFSU2_TR(0x5ede42);
u8 U[4];
w4(U+0,u32(0x7797a4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ede47:{NFSU2_TR(0x5ede47);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ede4d:{NFSU2_TR(0x5ede4d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ede4e:{NFSU2_TR(0x5ede4e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ede55:{NFSU2_TR(0x5ede55);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ede56:{NFSU2_TR(0x5ede56);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ede57:{NFSU2_TR(0x5ede57);
__builtin_memmove((R+24),(R+4),4);
}
B5ede59:{NFSU2_TR(0x5ede59);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ede5c:{NFSU2_TR(0x5ede5c);
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
B5ede5e:{NFSU2_TR(0x5ede5e);
if(r1(R+518)){{goto L5ede66;}}
}
B5ede60:L5ede60:{c.instructions+=3;NFSU2_TR(0x5ede60);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5ede62:{NFSU2_TR(0x5ede62);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ede64:{NFSU2_TR(0x5ede64);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ede66ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B5ede66:L5ede66:{c.instructions+=2;NFSU2_TR(0x5ede66);
u8 U[4];
w4(U+0,u32(0x28ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ede68:{NFSU2_TR(0x5ede68);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ede6dull));
TAIL_STATIC(0x575620u,575);
}
B5ede6d:L5ede6d:{c.instructions+=5;NFSU2_TR(0x5ede6d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5ede70:{NFSU2_TR(0x5ede70);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ede74:{NFSU2_TR(0x5ede74);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5ede76:{NFSU2_TR(0x5ede76);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5ede7e:{NFSU2_TR(0x5ede7e);
if(r1(R+518)){{goto L5ede9c;}}
}
B5ede80:L5ede80:{c.instructions+=3;NFSU2_TR(0x5ede80);
u8 U[4];
w4(U+0,u32(0xaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ede82:{NFSU2_TR(0x5ede82);
__builtin_memmove((R+4),(R+0),4);
}
B5ede84:{NFSU2_TR(0x5ede84);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ede89ull));
TAIL_STATIC(0x579f20u,579);
}
B5ede89:L5ede89:{c.instructions+=6;NFSU2_TR(0x5ede89);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ede8c:{NFSU2_TR(0x5ede8c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5ede8d:{NFSU2_TR(0x5ede8d);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ede91:{NFSU2_TR(0x5ede91);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ede98:{NFSU2_TR(0x5ede98);
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
B5ede9b:{NFSU2_TR(0x5ede9b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ede9c:L5ede9c:{c.instructions+=7;NFSU2_TR(0x5ede9c);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5edea0:{NFSU2_TR(0x5edea0);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5edea2:{NFSU2_TR(0x5edea2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5edea5:{NFSU2_TR(0x5edea5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5edea6:{NFSU2_TR(0x5edea6);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5edead:{NFSU2_TR(0x5edead);
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
B5edeb0:{NFSU2_TR(0x5edeb0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5edec0:L5edec0:{c.instructions+=8;NFSU2_TR(0x5edec0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5edec1:{NFSU2_TR(0x5edec1);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5edec5:{NFSU2_TR(0x5edec5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5edec6:{NFSU2_TR(0x5edec6);
u8 U[4];
w4(U+0,u32(0x7a5eacull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5edecb:{NFSU2_TR(0x5edecb);
__builtin_memmove((R+28),(R+4),4);
}
B5edecd:{NFSU2_TR(0x5edecd);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5edecf:{NFSU2_TR(0x5edecf);
__builtin_memmove((R+4),(R+24),4);
}
B5eded1:{NFSU2_TR(0x5eded1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5eded6ull));
TAIL_STATIC(0x578ce0u,578);
}
B5eded6:L5eded6:{c.instructions+=3;NFSU2_TR(0x5eded6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eded7:{NFSU2_TR(0x5eded7);
__builtin_memmove((R+4),(R+24),4);
}
B5eded9:{NFSU2_TR(0x5eded9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ededeull));
TAIL_STATIC(0x571770u,571);
}
B5edede:L5edede:{c.instructions+=4;NFSU2_TR(0x5edede);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5edee1:{NFSU2_TR(0x5edee1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5edee2:{NFSU2_TR(0x5edee2);
__builtin_memmove((R+4),(R+24),4);
}
B5edee4:{NFSU2_TR(0x5edee4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5edee9ull));
TAIL_STATIC(0x571770u,571);
}
B5edee9:L5edee9:{c.instructions+=4;NFSU2_TR(0x5edee9);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5edeec:{NFSU2_TR(0x5edeec);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5edeed:{NFSU2_TR(0x5edeed);
__builtin_memmove((R+4),(R+24),4);
}
B5edeef:{NFSU2_TR(0x5edeef);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5edef4ull));
TAIL_STATIC(0x571770u,571);
}
B5edef4:L5edef4:{c.instructions+=4;NFSU2_TR(0x5edef4);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((R+8),(U+0),4);
}
B5edef7:{NFSU2_TR(0x5edef7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5edef8:{NFSU2_TR(0x5edef8);
__builtin_memmove((R+4),(R+24),4);
}
B5edefa:{NFSU2_TR(0x5edefa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5edeffull));
TAIL_STATIC(0x571770u,571);
}
B5edeff:L5edeff:{c.instructions+=4;NFSU2_TR(0x5edeff);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5edf02:{NFSU2_TR(0x5edf02);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5edf03:{NFSU2_TR(0x5edf03);
__builtin_memmove((R+4),(R+24),4);
}
B5edf05:{NFSU2_TR(0x5edf05);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5edf0aull));
TAIL_STATIC(0x571770u,571);
}
B5edf0a:L5edf0a:{c.instructions+=4;NFSU2_TR(0x5edf0a);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5edf0d:{NFSU2_TR(0x5edf0d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5edf0e:{NFSU2_TR(0x5edf0e);
__builtin_memmove((R+4),(R+24),4);
}
B5edf10:{NFSU2_TR(0x5edf10);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5edf15ull));
TAIL_STATIC(0x571770u,571);
}
B5edf15:L5edf15:{c.instructions+=7;NFSU2_TR(0x5edf15);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5edf17:{NFSU2_TR(0x5edf17);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5edf19:{NFSU2_TR(0x5edf19);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5edf1b:{NFSU2_TR(0x5edf1b);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5edf1e:{NFSU2_TR(0x5edf1e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5edf1f:{NFSU2_TR(0x5edf1f);
__builtin_memmove((R+4),(R+24),4);
}
B5edf21:{NFSU2_TR(0x5edf21);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5edf26ull));
TAIL_STATIC(0x571640u,571);
}
B5edf26:L5edf26:{c.instructions+=7;NFSU2_TR(0x5edf26);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5edf28:{NFSU2_TR(0x5edf28);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5edf2a:{NFSU2_TR(0x5edf2a);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5edf2c:{NFSU2_TR(0x5edf2c);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((R+0),(U+0),4);
}
B5edf2f:{NFSU2_TR(0x5edf2f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5edf30:{NFSU2_TR(0x5edf30);
__builtin_memmove((R+4),(R+24),4);
}
B5edf32:{NFSU2_TR(0x5edf32);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5edf37ull));
TAIL_STATIC(0x571640u,571);
}
B5edf37:L5edf37:{c.instructions+=4;NFSU2_TR(0x5edf37);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5edf3a:{NFSU2_TR(0x5edf3a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5edf3b:{NFSU2_TR(0x5edf3b);
__builtin_memmove((R+4),(R+24),4);
}
B5edf3d:{NFSU2_TR(0x5edf3d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5edf42ull));
TAIL_STATIC(0x571770u,571);
}
B5edf42:L5edf42:{c.instructions+=4;NFSU2_TR(0x5edf42);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5edf45:{NFSU2_TR(0x5edf45);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5edf46:{NFSU2_TR(0x5edf46);
__builtin_memmove((R+4),(R+24),4);
}
B5edf48:{NFSU2_TR(0x5edf48);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5edf4dull));
TAIL_STATIC(0x571770u,571);
}
B5edf4d:L5edf4d:{c.instructions+=4;NFSU2_TR(0x5edf4d);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5edf50:{NFSU2_TR(0x5edf50);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5edf51:{NFSU2_TR(0x5edf51);
__builtin_memmove((R+4),(R+24),4);
}
B5edf53:{NFSU2_TR(0x5edf53);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5edf58ull));
TAIL_STATIC(0x571770u,571);
}
B5edf58:L5edf58:{c.instructions+=7;NFSU2_TR(0x5edf58);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5edf5a:{NFSU2_TR(0x5edf5a);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5edf5c:{NFSU2_TR(0x5edf5c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5edf5e:{NFSU2_TR(0x5edf5e);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((R+4),(U+0),4);
}
B5edf61:{NFSU2_TR(0x5edf61);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5edf62:{NFSU2_TR(0x5edf62);
__builtin_memmove((R+4),(R+24),4);
}
B5edf64:{NFSU2_TR(0x5edf64);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5edf69ull));
TAIL_STATIC(0x571640u,571);
}
B5edf69:L5edf69:{c.instructions+=5;NFSU2_TR(0x5edf69);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5edf6c:{NFSU2_TR(0x5edf6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5edf6f:{NFSU2_TR(0x5edf6f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5edf70:{NFSU2_TR(0x5edf70);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5edf71:{NFSU2_TR(0x5edf71);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5edf76ull));
TAIL_STATIC(0x57b980u,57b);
}
B5edf76:L5edf76:{c.instructions+=2;NFSU2_TR(0x5edf76);
__builtin_memmove((R+4),(R+24),4);
}
B5edf78:{NFSU2_TR(0x5edf78);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5edf7dull));
TAIL_STATIC(0x578d90u,578);
}
B5edf7d:L5edf7d:{c.instructions+=3;NFSU2_TR(0x5edf7d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5edf7e:{NFSU2_TR(0x5edf7e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5edf7f:{NFSU2_TR(0x5edf7f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5edf90:L5edf90:{c.instructions+=8;NFSU2_TR(0x5edf90);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5edf91:{NFSU2_TR(0x5edf91);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5edf92:{NFSU2_TR(0x5edf92);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5edf96:{NFSU2_TR(0x5edf96);
u8 U[4];
w4(U+0,u32(0x7a5ebcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5edf9b:{NFSU2_TR(0x5edf9b);
__builtin_memmove((R+24),(R+4),4);
}
B5edf9d:{NFSU2_TR(0x5edf9d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5edf9f:{NFSU2_TR(0x5edf9f);
__builtin_memmove((R+4),(R+28),4);
}
B5edfa1:{NFSU2_TR(0x5edfa1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5edfa6ull));
TAIL_STATIC(0x578ce0u,578);
}
B5edfa6:L5edfa6:{c.instructions+=4;NFSU2_TR(0x5edfa6);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5edfa9:{NFSU2_TR(0x5edfa9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5edfaa:{NFSU2_TR(0x5edfaa);
__builtin_memmove((R+4),(R+28),4);
}
B5edfac:{NFSU2_TR(0x5edfac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5edfb1ull));
TAIL_STATIC(0x571710u,571);
}
B5edfb1:L5edfb1:{c.instructions+=4;NFSU2_TR(0x5edfb1);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5edfb4:{NFSU2_TR(0x5edfb4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5edfb5:{NFSU2_TR(0x5edfb5);
__builtin_memmove((R+4),(R+28),4);
}
B5edfb7:{NFSU2_TR(0x5edfb7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5edfbcull));
TAIL_STATIC(0x571710u,571);
}
B5edfbc:L5edfbc:{c.instructions+=4;NFSU2_TR(0x5edfbc);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5edfbf:{NFSU2_TR(0x5edfbf);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5edfc0:{NFSU2_TR(0x5edfc0);
__builtin_memmove((R+4),(R+28),4);
}
B5edfc2:{NFSU2_TR(0x5edfc2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5edfc7ull));
TAIL_STATIC(0x5716c0u,571);
}
B5edfc7:L5edfc7:{c.instructions+=4;NFSU2_TR(0x5edfc7);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5edfca:{NFSU2_TR(0x5edfca);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5edfcb:{NFSU2_TR(0x5edfcb);
__builtin_memmove((R+4),(R+28),4);
}
B5edfcd:{NFSU2_TR(0x5edfcd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5edfd2ull));
TAIL_STATIC(0x5716c0u,571);
}
B5edfd2:L5edfd2:{c.instructions+=4;NFSU2_TR(0x5edfd2);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xaull))));
__builtin_memmove((R+4),(U+0),4);
}
B5edfd5:{NFSU2_TR(0x5edfd5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5edfd6:{NFSU2_TR(0x5edfd6);
__builtin_memmove((R+4),(R+28),4);
}
B5edfd8:{NFSU2_TR(0x5edfd8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5edfddull));
TAIL_STATIC(0x5716c0u,571);
}
B5edfdd:L5edfdd:{c.instructions+=4;NFSU2_TR(0x5edfdd);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbull))));
__builtin_memmove((R+8),(U+0),4);
}
B5edfe0:{NFSU2_TR(0x5edfe0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5edfe1:{NFSU2_TR(0x5edfe1);
__builtin_memmove((R+4),(R+28),4);
}
B5edfe3:{NFSU2_TR(0x5edfe3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5edfe8ull));
TAIL_STATIC(0x5716c0u,571);
}
B5edfe8:L5edfe8:{c.instructions+=4;NFSU2_TR(0x5edfe8);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((R+0),(U+0),4);
}
B5edfeb:{NFSU2_TR(0x5edfeb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5edfec:{NFSU2_TR(0x5edfec);
__builtin_memmove((R+4),(R+28),4);
}
B5edfee:{NFSU2_TR(0x5edfee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5edff3ull));
TAIL_STATIC(0x5716c0u,571);
}
B5edff3:L5edff3:{c.instructions+=4;NFSU2_TR(0x5edff3);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xdull))));
__builtin_memmove((R+4),(U+0),4);
}
B5edff6:{NFSU2_TR(0x5edff6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5edff7:{NFSU2_TR(0x5edff7);
__builtin_memmove((R+4),(R+28),4);
}
B5edff9:{NFSU2_TR(0x5edff9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5edffeull));
TAIL_STATIC(0x5716c0u,571);
}
B5edffe:L5edffe:{c.instructions+=1;NFSU2_TR(0x5edffe);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xeull))));
__builtin_memmove((R+8),(U+0),4);
TAIL_STATIC(0x5ee001u,5ee);
}
XIT:NFSU2_TR_EXIT(0x5ed,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
