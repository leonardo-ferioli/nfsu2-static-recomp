#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_6e4(u8* __restrict R,Cpu& c);
u32 body_6ec(u8* __restrict R,Cpu& c);
u32 body_6ee(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x6ed,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x6ed,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_6ed(u8* __restrict R,Cpu& c);
u32 page_6ed(Cpu& c){return body_6ed(c.regs.data(),c);}
__attribute__((noinline)) u32 body_6ed(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x6ed003:goto L6ed003;
case 0x6ed005:goto L6ed005;
case 0x6ed009:c.instructions+=3;goto B6ed009;
case 0x6ed00b:c.instructions+=2;goto B6ed00b;
case 0x6ed00d:c.instructions+=1;goto B6ed00d;
case 0x6ed013:goto L6ed013;
case 0x6ed017:c.instructions+=7;goto B6ed017;
case 0x6ed01a:c.instructions+=6;goto B6ed01a;
case 0x6ed01d:c.instructions+=5;goto B6ed01d;
case 0x6ed020:c.instructions+=4;goto B6ed020;
case 0x6ed022:c.instructions+=3;goto B6ed022;
case 0x6ed024:c.instructions+=2;goto B6ed024;
case 0x6ed028:c.instructions+=1;goto B6ed028;
case 0x6ed030:goto L6ed030;
case 0x6ed032:c.instructions+=2;goto B6ed032;
case 0x6ed03a:c.instructions+=1;goto B6ed03a;
case 0x6ed040:goto L6ed040;
case 0x6ed042:c.instructions+=2;goto B6ed042;
case 0x6ed046:c.instructions+=1;goto B6ed046;
case 0x6ed050:goto L6ed050;
case 0x6ed054:c.instructions+=5;goto B6ed054;
case 0x6ed057:c.instructions+=4;goto B6ed057;
case 0x6ed05b:c.instructions+=3;goto B6ed05b;
case 0x6ed05c:c.instructions+=2;goto B6ed05c;
case 0x6ed05e:c.instructions+=1;goto B6ed05e;
case 0x6ed063:goto L6ed063;
case 0x6ed066:c.instructions+=45;goto B6ed066;
case 0x6ed06a:c.instructions+=44;goto B6ed06a;
case 0x6ed06c:c.instructions+=43;goto B6ed06c;
case 0x6ed06f:c.instructions+=42;goto B6ed06f;
case 0x6ed073:c.instructions+=41;goto B6ed073;
case 0x6ed077:c.instructions+=40;goto B6ed077;
case 0x6ed07a:c.instructions+=39;goto B6ed07a;
case 0x6ed07d:c.instructions+=38;goto B6ed07d;
case 0x6ed081:c.instructions+=37;goto B6ed081;
case 0x6ed085:c.instructions+=36;goto B6ed085;
case 0x6ed089:c.instructions+=35;goto B6ed089;
case 0x6ed08f:c.instructions+=34;goto B6ed08f;
case 0x6ed093:c.instructions+=33;goto B6ed093;
case 0x6ed097:c.instructions+=32;goto B6ed097;
case 0x6ed09b:c.instructions+=31;goto B6ed09b;
case 0x6ed09e:c.instructions+=30;goto B6ed09e;
case 0x6ed0a2:c.instructions+=29;goto B6ed0a2;
case 0x6ed0a6:c.instructions+=28;goto B6ed0a6;
case 0x6ed0a7:c.instructions+=27;goto B6ed0a7;
case 0x6ed0ab:c.instructions+=26;goto B6ed0ab;
case 0x6ed0b1:c.instructions+=25;goto B6ed0b1;
case 0x6ed0b5:c.instructions+=24;goto B6ed0b5;
case 0x6ed0b9:c.instructions+=23;goto B6ed0b9;
case 0x6ed0bd:c.instructions+=22;goto B6ed0bd;
case 0x6ed0c3:c.instructions+=21;goto B6ed0c3;
case 0x6ed0c7:c.instructions+=20;goto B6ed0c7;
case 0x6ed0cb:c.instructions+=19;goto B6ed0cb;
case 0x6ed0cd:c.instructions+=18;goto B6ed0cd;
case 0x6ed0cf:c.instructions+=17;goto B6ed0cf;
case 0x6ed0d1:c.instructions+=16;goto B6ed0d1;
case 0x6ed0d4:c.instructions+=15;goto B6ed0d4;
case 0x6ed0d8:c.instructions+=14;goto B6ed0d8;
case 0x6ed0da:c.instructions+=13;goto B6ed0da;
case 0x6ed0de:c.instructions+=12;goto B6ed0de;
case 0x6ed0e1:c.instructions+=11;goto B6ed0e1;
case 0x6ed0e5:c.instructions+=10;goto B6ed0e5;
case 0x6ed0e7:c.instructions+=9;goto B6ed0e7;
case 0x6ed0ea:c.instructions+=8;goto B6ed0ea;
case 0x6ed0ee:c.instructions+=7;goto B6ed0ee;
case 0x6ed0f2:c.instructions+=6;goto B6ed0f2;
case 0x6ed0f4:c.instructions+=5;goto B6ed0f4;
case 0x6ed0f7:c.instructions+=4;goto B6ed0f7;
case 0x6ed0f9:c.instructions+=3;goto B6ed0f9;
case 0x6ed0fd:c.instructions+=2;goto B6ed0fd;
case 0x6ed0ff:c.instructions+=1;goto B6ed0ff;
case 0x6ed105:goto L6ed105;
case 0x6ed109:c.instructions+=1;goto B6ed109;
case 0x6ed10f:goto L6ed10f;
case 0x6ed113:c.instructions+=10;goto B6ed113;
case 0x6ed117:c.instructions+=9;goto B6ed117;
case 0x6ed11b:c.instructions+=8;goto B6ed11b;
case 0x6ed11c:c.instructions+=7;goto B6ed11c;
case 0x6ed11f:c.instructions+=6;goto B6ed11f;
case 0x6ed122:c.instructions+=5;goto B6ed122;
case 0x6ed124:c.instructions+=4;goto B6ed124;
case 0x6ed126:c.instructions+=3;goto B6ed126;
case 0x6ed128:c.instructions+=2;goto B6ed128;
case 0x6ed12a:c.instructions+=1;goto B6ed12a;
case 0x6ed130:goto L6ed130;
case 0x6ed132:goto L6ed132;
case 0x6ed135:c.instructions+=23;goto B6ed135;
case 0x6ed139:c.instructions+=22;goto B6ed139;
case 0x6ed13b:c.instructions+=21;goto B6ed13b;
case 0x6ed13e:c.instructions+=20;goto B6ed13e;
case 0x6ed140:c.instructions+=19;goto B6ed140;
case 0x6ed142:c.instructions+=18;goto B6ed142;
case 0x6ed144:c.instructions+=17;goto B6ed144;
case 0x6ed146:c.instructions+=16;goto B6ed146;
case 0x6ed148:c.instructions+=15;goto B6ed148;
case 0x6ed14a:c.instructions+=14;goto B6ed14a;
case 0x6ed14c:c.instructions+=13;goto B6ed14c;
case 0x6ed14e:c.instructions+=12;goto B6ed14e;
case 0x6ed151:c.instructions+=11;goto B6ed151;
case 0x6ed153:c.instructions+=10;goto B6ed153;
case 0x6ed157:c.instructions+=9;goto B6ed157;
case 0x6ed159:c.instructions+=8;goto B6ed159;
case 0x6ed15b:c.instructions+=7;goto B6ed15b;
case 0x6ed15d:c.instructions+=6;goto B6ed15d;
case 0x6ed15f:c.instructions+=5;goto B6ed15f;
case 0x6ed161:c.instructions+=4;goto B6ed161;
case 0x6ed167:c.instructions+=3;goto B6ed167;
case 0x6ed169:c.instructions+=2;goto B6ed169;
case 0x6ed16c:c.instructions+=1;goto B6ed16c;
case 0x6ed16e:goto L6ed16e;
case 0x6ed170:c.instructions+=11;goto B6ed170;
case 0x6ed177:c.instructions+=10;goto B6ed177;
case 0x6ed17d:c.instructions+=9;goto B6ed17d;
case 0x6ed17f:c.instructions+=8;goto B6ed17f;
case 0x6ed181:c.instructions+=7;goto B6ed181;
case 0x6ed183:c.instructions+=6;goto B6ed183;
case 0x6ed185:c.instructions+=5;goto B6ed185;
case 0x6ed188:c.instructions+=4;goto B6ed188;
case 0x6ed18b:c.instructions+=3;goto B6ed18b;
case 0x6ed18e:c.instructions+=2;goto B6ed18e;
case 0x6ed191:c.instructions+=1;goto B6ed191;
case 0x6ed193:goto L6ed193;
case 0x6ed199:c.instructions+=5;goto B6ed199;
case 0x6ed19d:c.instructions+=4;goto B6ed19d;
case 0x6ed19f:c.instructions+=3;goto B6ed19f;
case 0x6ed1a1:c.instructions+=2;goto B6ed1a1;
case 0x6ed1a4:c.instructions+=1;goto B6ed1a4;
case 0x6ed1a6:goto L6ed1a6;
case 0x6ed1a8:c.instructions+=2;goto B6ed1a8;
case 0x6ed1ab:c.instructions+=1;goto B6ed1ab;
case 0x6ed1ad:goto L6ed1ad;
case 0x6ed1af:goto L6ed1af;
case 0x6ed1b3:c.instructions+=5;goto B6ed1b3;
case 0x6ed1b6:c.instructions+=4;goto B6ed1b6;
case 0x6ed1b7:c.instructions+=3;goto B6ed1b7;
case 0x6ed1ba:c.instructions+=2;goto B6ed1ba;
case 0x6ed1bc:c.instructions+=1;goto B6ed1bc;
case 0x6ed1c2:goto L6ed1c2;
case 0x6ed1c7:goto L6ed1c7;
case 0x6ed1cd:goto L6ed1cd;
case 0x6ed1d1:c.instructions+=9;goto B6ed1d1;
case 0x6ed1d4:c.instructions+=8;goto B6ed1d4;
case 0x6ed1d7:c.instructions+=7;goto B6ed1d7;
case 0x6ed1db:c.instructions+=6;goto B6ed1db;
case 0x6ed1de:c.instructions+=5;goto B6ed1de;
case 0x6ed1e2:c.instructions+=4;goto B6ed1e2;
case 0x6ed1e5:c.instructions+=3;goto B6ed1e5;
case 0x6ed1e9:c.instructions+=2;goto B6ed1e9;
case 0x6ed1eb:c.instructions+=1;goto B6ed1eb;
case 0x6ed1f1:goto L6ed1f1;
case 0x6ed1f3:c.instructions+=4;goto B6ed1f3;
case 0x6ed1f5:c.instructions+=3;goto B6ed1f5;
case 0x6ed1f6:c.instructions+=2;goto B6ed1f6;
case 0x6ed1fa:c.instructions+=1;goto B6ed1fa;
case 0x6ed200:goto L6ed200;
case 0x6ed204:c.instructions+=2;goto B6ed204;
case 0x6ed205:c.instructions+=1;goto B6ed205;
case 0x6ed20b:goto L6ed20b;
case 0x6ed20d:c.instructions+=7;goto B6ed20d;
case 0x6ed210:c.instructions+=6;goto B6ed210;
case 0x6ed213:c.instructions+=5;goto B6ed213;
case 0x6ed216:c.instructions+=4;goto B6ed216;
case 0x6ed217:c.instructions+=3;goto B6ed217;
case 0x6ed21b:c.instructions+=2;goto B6ed21b;
case 0x6ed21f:c.instructions+=1;goto B6ed21f;
case 0x6ed220:goto L6ed220;
case 0x6ed223:c.instructions+=4;goto B6ed223;
case 0x6ed227:c.instructions+=3;goto B6ed227;
case 0x6ed228:c.instructions+=2;goto B6ed228;
case 0x6ed22c:c.instructions+=1;goto B6ed22c;
case 0x6ed231:goto L6ed231;
case 0x6ed234:c.instructions+=46;goto B6ed234;
case 0x6ed238:c.instructions+=45;goto B6ed238;
case 0x6ed23a:c.instructions+=44;goto B6ed23a;
case 0x6ed23d:c.instructions+=43;goto B6ed23d;
case 0x6ed241:c.instructions+=42;goto B6ed241;
case 0x6ed245:c.instructions+=41;goto B6ed245;
case 0x6ed248:c.instructions+=40;goto B6ed248;
case 0x6ed24b:c.instructions+=39;goto B6ed24b;
case 0x6ed24f:c.instructions+=38;goto B6ed24f;
case 0x6ed253:c.instructions+=37;goto B6ed253;
case 0x6ed256:c.instructions+=36;goto B6ed256;
case 0x6ed25a:c.instructions+=35;goto B6ed25a;
case 0x6ed25e:c.instructions+=34;goto B6ed25e;
case 0x6ed261:c.instructions+=33;goto B6ed261;
case 0x6ed265:c.instructions+=32;goto B6ed265;
case 0x6ed26b:c.instructions+=31;goto B6ed26b;
case 0x6ed26f:c.instructions+=30;goto B6ed26f;
case 0x6ed273:c.instructions+=29;goto B6ed273;
case 0x6ed277:c.instructions+=28;goto B6ed277;
case 0x6ed27b:c.instructions+=27;goto B6ed27b;
case 0x6ed281:c.instructions+=26;goto B6ed281;
case 0x6ed285:c.instructions+=25;goto B6ed285;
case 0x6ed289:c.instructions+=24;goto B6ed289;
case 0x6ed28d:c.instructions+=23;goto B6ed28d;
case 0x6ed293:c.instructions+=22;goto B6ed293;
case 0x6ed297:c.instructions+=21;goto B6ed297;
case 0x6ed29b:c.instructions+=20;goto B6ed29b;
case 0x6ed29d:c.instructions+=19;goto B6ed29d;
case 0x6ed29f:c.instructions+=18;goto B6ed29f;
case 0x6ed2a1:c.instructions+=17;goto B6ed2a1;
case 0x6ed2a4:c.instructions+=16;goto B6ed2a4;
case 0x6ed2a8:c.instructions+=15;goto B6ed2a8;
case 0x6ed2ac:c.instructions+=14;goto B6ed2ac;
case 0x6ed2ae:c.instructions+=13;goto B6ed2ae;
case 0x6ed2b0:c.instructions+=12;goto B6ed2b0;
case 0x6ed2b3:c.instructions+=11;goto B6ed2b3;
case 0x6ed2b7:c.instructions+=10;goto B6ed2b7;
case 0x6ed2b9:c.instructions+=9;goto B6ed2b9;
case 0x6ed2bc:c.instructions+=8;goto B6ed2bc;
case 0x6ed2be:c.instructions+=7;goto B6ed2be;
case 0x6ed2c0:c.instructions+=6;goto B6ed2c0;
case 0x6ed2c4:c.instructions+=5;goto B6ed2c4;
case 0x6ed2c6:c.instructions+=4;goto B6ed2c6;
case 0x6ed2ca:c.instructions+=3;goto B6ed2ca;
case 0x6ed2cb:c.instructions+=2;goto B6ed2cb;
case 0x6ed2cf:c.instructions+=1;goto B6ed2cf;
case 0x6ed2d5:goto L6ed2d5;
case 0x6ed2d9:c.instructions+=1;goto B6ed2d9;
case 0x6ed2df:goto L6ed2df;
case 0x6ed2e3:c.instructions+=10;goto B6ed2e3;
case 0x6ed2e7:c.instructions+=9;goto B6ed2e7;
case 0x6ed2eb:c.instructions+=8;goto B6ed2eb;
case 0x6ed2ec:c.instructions+=7;goto B6ed2ec;
case 0x6ed2ef:c.instructions+=6;goto B6ed2ef;
case 0x6ed2f2:c.instructions+=5;goto B6ed2f2;
case 0x6ed2f4:c.instructions+=4;goto B6ed2f4;
case 0x6ed2f6:c.instructions+=3;goto B6ed2f6;
case 0x6ed2f8:c.instructions+=2;goto B6ed2f8;
case 0x6ed2fa:c.instructions+=1;goto B6ed2fa;
case 0x6ed2fc:goto L6ed2fc;
case 0x6ed300:goto L6ed300;
case 0x6ed303:c.instructions+=8;goto B6ed303;
case 0x6ed307:c.instructions+=7;goto B6ed307;
case 0x6ed309:c.instructions+=6;goto B6ed309;
case 0x6ed30b:c.instructions+=5;goto B6ed30b;
case 0x6ed30d:c.instructions+=4;goto B6ed30d;
case 0x6ed30e:c.instructions+=3;goto B6ed30e;
case 0x6ed311:c.instructions+=2;goto B6ed311;
case 0x6ed312:c.instructions+=1;goto B6ed312;
case 0x6ed317:goto L6ed317;
case 0x6ed31b:c.instructions+=8;goto B6ed31b;
case 0x6ed31f:c.instructions+=7;goto B6ed31f;
case 0x6ed322:c.instructions+=6;goto B6ed322;
case 0x6ed325:c.instructions+=5;goto B6ed325;
case 0x6ed326:c.instructions+=4;goto B6ed326;
case 0x6ed329:c.instructions+=3;goto B6ed329;
case 0x6ed32b:c.instructions+=2;goto B6ed32b;
case 0x6ed32f:c.instructions+=1;goto B6ed32f;
case 0x6ed331:goto L6ed331;
case 0x6ed335:c.instructions+=6;goto B6ed335;
case 0x6ed338:c.instructions+=5;goto B6ed338;
case 0x6ed33b:c.instructions+=4;goto B6ed33b;
case 0x6ed33d:c.instructions+=3;goto B6ed33d;
case 0x6ed33f:c.instructions+=2;goto B6ed33f;
case 0x6ed342:c.instructions+=1;goto B6ed342;
case 0x6ed344:goto L6ed344;
case 0x6ed348:c.instructions+=5;goto B6ed348;
case 0x6ed34c:c.instructions+=4;goto B6ed34c;
case 0x6ed34e:c.instructions+=3;goto B6ed34e;
case 0x6ed350:c.instructions+=2;goto B6ed350;
case 0x6ed353:c.instructions+=1;goto B6ed353;
case 0x6ed359:goto L6ed359;
case 0x6ed35d:c.instructions+=2;goto B6ed35d;
case 0x6ed35f:c.instructions+=1;goto B6ed35f;
case 0x6ed361:goto L6ed361;
case 0x6ed363:c.instructions+=1;goto B6ed363;
case 0x6ed365:goto L6ed365;
case 0x6ed369:c.instructions+=4;goto B6ed369;
case 0x6ed36f:c.instructions+=3;goto B6ed36f;
case 0x6ed371:c.instructions+=2;goto B6ed371;
case 0x6ed374:c.instructions+=1;goto B6ed374;
case 0x6ed37a:goto L6ed37a;
case 0x6ed37d:c.instructions+=5;goto B6ed37d;
case 0x6ed381:c.instructions+=4;goto B6ed381;
case 0x6ed385:c.instructions+=3;goto B6ed385;
case 0x6ed389:c.instructions+=2;goto B6ed389;
case 0x6ed38d:c.instructions+=1;goto B6ed38d;
case 0x6ed38f:goto L6ed38f;
case 0x6ed394:c.instructions+=7;goto B6ed394;
case 0x6ed398:c.instructions+=6;goto B6ed398;
case 0x6ed39c:c.instructions+=5;goto B6ed39c;
case 0x6ed3a0:c.instructions+=4;goto B6ed3a0;
case 0x6ed3a2:c.instructions+=3;goto B6ed3a2;
case 0x6ed3a4:c.instructions+=2;goto B6ed3a4;
case 0x6ed3a7:c.instructions+=1;goto B6ed3a7;
case 0x6ed3ad:goto L6ed3ad;
case 0x6ed3b1:c.instructions+=6;goto B6ed3b1;
case 0x6ed3b5:c.instructions+=5;goto B6ed3b5;
case 0x6ed3b7:c.instructions+=4;goto B6ed3b7;
case 0x6ed3bb:c.instructions+=3;goto B6ed3bb;
case 0x6ed3bf:c.instructions+=2;goto B6ed3bf;
case 0x6ed3c1:c.instructions+=1;goto B6ed3c1;
case 0x6ed3c3:goto L6ed3c3;
case 0x6ed3c7:c.instructions+=1;goto B6ed3c7;
case 0x6ed3c9:goto L6ed3c9;
case 0x6ed3cd:c.instructions+=3;goto B6ed3cd;
case 0x6ed3ce:c.instructions+=2;goto B6ed3ce;
case 0x6ed3d0:c.instructions+=1;goto B6ed3d0;
case 0x6ed3d6:goto L6ed3d6;
case 0x6ed3da:c.instructions+=9;goto B6ed3da;
case 0x6ed3dd:c.instructions+=8;goto B6ed3dd;
case 0x6ed3df:c.instructions+=7;goto B6ed3df;
case 0x6ed3e3:c.instructions+=6;goto B6ed3e3;
case 0x6ed3e5:c.instructions+=5;goto B6ed3e5;
case 0x6ed3e8:c.instructions+=4;goto B6ed3e8;
case 0x6ed3eb:c.instructions+=3;goto B6ed3eb;
case 0x6ed3ed:c.instructions+=2;goto B6ed3ed;
case 0x6ed3ef:c.instructions+=1;goto B6ed3ef;
case 0x6ed3f1:goto L6ed3f1;
case 0x6ed3f4:c.instructions+=2;goto B6ed3f4;
case 0x6ed3f6:c.instructions+=1;goto B6ed3f6;
case 0x6ed3fc:goto L6ed3fc;
case 0x6ed400:goto L6ed400;
case 0x6ed404:c.instructions+=3;goto B6ed404;
case 0x6ed405:c.instructions+=2;goto B6ed405;
case 0x6ed407:c.instructions+=1;goto B6ed407;
case 0x6ed40c:goto L6ed40c;
case 0x6ed410:c.instructions+=12;goto B6ed410;
case 0x6ed414:c.instructions+=11;goto B6ed414;
case 0x6ed418:c.instructions+=10;goto B6ed418;
case 0x6ed41c:c.instructions+=9;goto B6ed41c;
case 0x6ed41f:c.instructions+=8;goto B6ed41f;
case 0x6ed422:c.instructions+=7;goto B6ed422;
case 0x6ed426:c.instructions+=6;goto B6ed426;
case 0x6ed429:c.instructions+=5;goto B6ed429;
case 0x6ed42b:c.instructions+=4;goto B6ed42b;
case 0x6ed42f:c.instructions+=3;goto B6ed42f;
case 0x6ed430:c.instructions+=2;goto B6ed430;
case 0x6ed434:c.instructions+=1;goto B6ed434;
case 0x6ed439:goto L6ed439;
case 0x6ed43d:c.instructions+=8;goto B6ed43d;
case 0x6ed441:c.instructions+=7;goto B6ed441;
case 0x6ed444:c.instructions+=6;goto B6ed444;
case 0x6ed445:c.instructions+=5;goto B6ed445;
case 0x6ed448:c.instructions+=4;goto B6ed448;
case 0x6ed44b:c.instructions+=3;goto B6ed44b;
case 0x6ed44d:c.instructions+=2;goto B6ed44d;
case 0x6ed451:c.instructions+=1;goto B6ed451;
case 0x6ed453:goto L6ed453;
case 0x6ed458:goto L6ed458;
case 0x6ed45c:c.instructions+=8;goto B6ed45c;
case 0x6ed460:c.instructions+=7;goto B6ed460;
case 0x6ed463:c.instructions+=6;goto B6ed463;
case 0x6ed466:c.instructions+=5;goto B6ed466;
case 0x6ed46a:c.instructions+=4;goto B6ed46a;
case 0x6ed46c:c.instructions+=3;goto B6ed46c;
case 0x6ed46e:c.instructions+=2;goto B6ed46e;
case 0x6ed472:c.instructions+=1;goto B6ed472;
case 0x6ed478:goto L6ed478;
case 0x6ed47c:c.instructions+=1;goto B6ed47c;
case 0x6ed480:goto L6ed480;
case 0x6ed484:c.instructions+=5;goto B6ed484;
case 0x6ed487:c.instructions+=4;goto B6ed487;
case 0x6ed48b:c.instructions+=3;goto B6ed48b;
case 0x6ed48c:c.instructions+=2;goto B6ed48c;
case 0x6ed48e:c.instructions+=1;goto B6ed48e;
case 0x6ed493:goto L6ed493;
case 0x6ed497:c.instructions+=44;goto B6ed497;
case 0x6ed49a:c.instructions+=43;goto B6ed49a;
case 0x6ed49c:c.instructions+=42;goto B6ed49c;
case 0x6ed49e:c.instructions+=41;goto B6ed49e;
case 0x6ed4a1:c.instructions+=40;goto B6ed4a1;
case 0x6ed4a5:c.instructions+=39;goto B6ed4a5;
case 0x6ed4a9:c.instructions+=38;goto B6ed4a9;
case 0x6ed4ad:c.instructions+=37;goto B6ed4ad;
case 0x6ed4b1:c.instructions+=36;goto B6ed4b1;
case 0x6ed4b5:c.instructions+=35;goto B6ed4b5;
case 0x6ed4b8:c.instructions+=34;goto B6ed4b8;
case 0x6ed4bc:c.instructions+=33;goto B6ed4bc;
case 0x6ed4c2:c.instructions+=32;goto B6ed4c2;
case 0x6ed4c6:c.instructions+=31;goto B6ed4c6;
case 0x6ed4ca:c.instructions+=30;goto B6ed4ca;
case 0x6ed4ce:c.instructions+=29;goto B6ed4ce;
case 0x6ed4d2:c.instructions+=28;goto B6ed4d2;
case 0x6ed4d5:c.instructions+=27;goto B6ed4d5;
case 0x6ed4d9:c.instructions+=26;goto B6ed4d9;
case 0x6ed4df:c.instructions+=25;goto B6ed4df;
case 0x6ed4e3:c.instructions+=24;goto B6ed4e3;
case 0x6ed4e7:c.instructions+=23;goto B6ed4e7;
case 0x6ed4eb:c.instructions+=22;goto B6ed4eb;
case 0x6ed4f1:c.instructions+=21;goto B6ed4f1;
case 0x6ed4f5:c.instructions+=20;goto B6ed4f5;
case 0x6ed4f9:c.instructions+=19;goto B6ed4f9;
case 0x6ed4fb:c.instructions+=18;goto B6ed4fb;
case 0x6ed4fe:c.instructions+=17;goto B6ed4fe;
case 0x6ed502:c.instructions+=16;goto B6ed502;
case 0x6ed505:c.instructions+=15;goto B6ed505;
case 0x6ed509:c.instructions+=14;goto B6ed509;
case 0x6ed50d:c.instructions+=13;goto B6ed50d;
case 0x6ed510:c.instructions+=12;goto B6ed510;
case 0x6ed514:c.instructions+=11;goto B6ed514;
case 0x6ed518:c.instructions+=10;goto B6ed518;
case 0x6ed51c:c.instructions+=9;goto B6ed51c;
case 0x6ed520:c.instructions+=8;goto B6ed520;
case 0x6ed522:c.instructions+=7;goto B6ed522;
case 0x6ed526:c.instructions+=6;goto B6ed526;
case 0x6ed52a:c.instructions+=5;goto B6ed52a;
case 0x6ed52c:c.instructions+=4;goto B6ed52c;
case 0x6ed532:c.instructions+=3;goto B6ed532;
case 0x6ed534:c.instructions+=2;goto B6ed534;
case 0x6ed537:c.instructions+=1;goto B6ed537;
case 0x6ed539:goto L6ed539;
case 0x6ed53b:c.instructions+=11;goto B6ed53b;
case 0x6ed543:c.instructions+=10;goto B6ed543;
case 0x6ed549:c.instructions+=9;goto B6ed549;
case 0x6ed54d:c.instructions+=8;goto B6ed54d;
case 0x6ed54f:c.instructions+=7;goto B6ed54f;
case 0x6ed553:c.instructions+=6;goto B6ed553;
case 0x6ed557:c.instructions+=5;goto B6ed557;
case 0x6ed559:c.instructions+=4;goto B6ed559;
case 0x6ed55d:c.instructions+=3;goto B6ed55d;
case 0x6ed561:c.instructions+=2;goto B6ed561;
case 0x6ed565:c.instructions+=1;goto B6ed565;
case 0x6ed567:goto L6ed567;
case 0x6ed56a:c.instructions+=6;goto B6ed56a;
case 0x6ed570:c.instructions+=5;goto B6ed570;
case 0x6ed572:c.instructions+=4;goto B6ed572;
case 0x6ed574:c.instructions+=3;goto B6ed574;
case 0x6ed578:c.instructions+=2;goto B6ed578;
case 0x6ed57a:c.instructions+=1;goto B6ed57a;
case 0x6ed57c:goto L6ed57c;
case 0x6ed580:c.instructions+=2;goto B6ed580;
case 0x6ed582:c.instructions+=1;goto B6ed582;
case 0x6ed586:goto L6ed586;
case 0x6ed58a:c.instructions+=10;goto B6ed58a;
case 0x6ed58e:c.instructions+=9;goto B6ed58e;
case 0x6ed591:c.instructions+=8;goto B6ed591;
case 0x6ed595:c.instructions+=7;goto B6ed595;
case 0x6ed598:c.instructions+=6;goto B6ed598;
case 0x6ed59c:c.instructions+=5;goto B6ed59c;
case 0x6ed5a0:c.instructions+=4;goto B6ed5a0;
case 0x6ed5a1:c.instructions+=3;goto B6ed5a1;
case 0x6ed5a5:c.instructions+=2;goto B6ed5a5;
case 0x6ed5a7:c.instructions+=1;goto B6ed5a7;
case 0x6ed5ac:goto L6ed5ac;
case 0x6ed5b0:c.instructions+=13;goto B6ed5b0;
case 0x6ed5b4:c.instructions+=12;goto B6ed5b4;
case 0x6ed5b8:c.instructions+=11;goto B6ed5b8;
case 0x6ed5bc:c.instructions+=10;goto B6ed5bc;
case 0x6ed5bf:c.instructions+=9;goto B6ed5bf;
case 0x6ed5c2:c.instructions+=8;goto B6ed5c2;
case 0x6ed5c3:c.instructions+=7;goto B6ed5c3;
case 0x6ed5c6:c.instructions+=6;goto B6ed5c6;
case 0x6ed5c9:c.instructions+=5;goto B6ed5c9;
case 0x6ed5cb:c.instructions+=4;goto B6ed5cb;
case 0x6ed5cf:c.instructions+=3;goto B6ed5cf;
case 0x6ed5d3:c.instructions+=2;goto B6ed5d3;
case 0x6ed5d7:c.instructions+=1;goto B6ed5d7;
case 0x6ed5dd:goto L6ed5dd;
case 0x6ed5df:goto L6ed5df;
case 0x6ed5e1:goto L6ed5e1;
case 0x6ed5e4:c.instructions+=3;goto B6ed5e4;
case 0x6ed5e6:c.instructions+=2;goto B6ed5e6;
case 0x6ed5e8:c.instructions+=1;goto B6ed5e8;
case 0x6ed5ea:goto L6ed5ea;
case 0x6ed5ec:c.instructions+=1;goto B6ed5ec;
case 0x6ed5f0:goto L6ed5f0;
case 0x6ed5f4:c.instructions+=20;goto B6ed5f4;
case 0x6ed5f8:c.instructions+=19;goto B6ed5f8;
case 0x6ed5fb:c.instructions+=18;goto B6ed5fb;
case 0x6ed5ff:c.instructions+=17;goto B6ed5ff;
case 0x6ed602:c.instructions+=16;goto B6ed602;
case 0x6ed605:c.instructions+=15;goto B6ed605;
case 0x6ed607:c.instructions+=14;goto B6ed607;
case 0x6ed60b:c.instructions+=13;goto B6ed60b;
case 0x6ed60d:c.instructions+=12;goto B6ed60d;
case 0x6ed60f:c.instructions+=11;goto B6ed60f;
case 0x6ed612:c.instructions+=10;goto B6ed612;
case 0x6ed615:c.instructions+=9;goto B6ed615;
case 0x6ed618:c.instructions+=8;goto B6ed618;
case 0x6ed61b:c.instructions+=7;goto B6ed61b;
case 0x6ed61e:c.instructions+=6;goto B6ed61e;
case 0x6ed621:c.instructions+=5;goto B6ed621;
case 0x6ed625:c.instructions+=4;goto B6ed625;
case 0x6ed626:c.instructions+=3;goto B6ed626;
case 0x6ed629:c.instructions+=2;goto B6ed629;
case 0x6ed62b:c.instructions+=1;goto B6ed62b;
case 0x6ed62d:goto L6ed62d;
case 0x6ed630:c.instructions+=2;goto B6ed630;
case 0x6ed632:c.instructions+=1;goto B6ed632;
case 0x6ed634:goto L6ed634;
case 0x6ed636:c.instructions+=2;goto B6ed636;
case 0x6ed638:c.instructions+=1;goto B6ed638;
case 0x6ed63a:goto L6ed63a;
case 0x6ed63c:c.instructions+=1;goto B6ed63c;
case 0x6ed640:goto L6ed640;
case 0x6ed643:c.instructions+=9;goto B6ed643;
case 0x6ed647:c.instructions+=8;goto B6ed647;
case 0x6ed64b:c.instructions+=7;goto B6ed64b;
case 0x6ed64e:c.instructions+=6;goto B6ed64e;
case 0x6ed651:c.instructions+=5;goto B6ed651;
case 0x6ed655:c.instructions+=4;goto B6ed655;
case 0x6ed658:c.instructions+=3;goto B6ed658;
case 0x6ed659:c.instructions+=2;goto B6ed659;
case 0x6ed65b:c.instructions+=1;goto B6ed65b;
case 0x6ed660:goto L6ed660;
case 0x6ed664:c.instructions+=4;goto B6ed664;
case 0x6ed665:c.instructions+=3;goto B6ed665;
case 0x6ed668:c.instructions+=2;goto B6ed668;
case 0x6ed66a:c.instructions+=1;goto B6ed66a;
case 0x6ed66c:goto L6ed66c;
case 0x6ed66d:c.instructions+=6;goto B6ed66d;
case 0x6ed66e:c.instructions+=5;goto B6ed66e;
case 0x6ed66f:c.instructions+=4;goto B6ed66f;
case 0x6ed671:c.instructions+=3;goto B6ed671;
case 0x6ed672:c.instructions+=2;goto B6ed672;
case 0x6ed675:c.instructions+=1;goto B6ed675;
case 0x6ed680:goto L6ed680;
case 0x6ed683:c.instructions+=6;goto B6ed683;
case 0x6ed684:c.instructions+=5;goto B6ed684;
case 0x6ed685:c.instructions+=4;goto B6ed685;
case 0x6ed686:c.instructions+=3;goto B6ed686;
case 0x6ed687:c.instructions+=2;goto B6ed687;
case 0x6ed689:c.instructions+=1;goto B6ed689;
case 0x6ed68e:goto L6ed68e;
case 0x6ed691:c.instructions+=4;goto B6ed691;
case 0x6ed694:c.instructions+=3;goto B6ed694;
case 0x6ed696:c.instructions+=2;goto B6ed696;
case 0x6ed69a:c.instructions+=1;goto B6ed69a;
case 0x6ed6a0:goto L6ed6a0;
case 0x6ed6a4:c.instructions+=2;goto B6ed6a4;
case 0x6ed6a5:c.instructions+=1;goto B6ed6a5;
case 0x6ed6aa:goto L6ed6aa;
case 0x6ed6ae:c.instructions+=5;goto B6ed6ae;
case 0x6ed6b1:c.instructions+=4;goto B6ed6b1;
case 0x6ed6b4:c.instructions+=3;goto B6ed6b4;
case 0x6ed6b6:c.instructions+=2;goto B6ed6b6;
case 0x6ed6ba:c.instructions+=1;goto B6ed6ba;
case 0x6ed6bc:goto L6ed6bc;
case 0x6ed6be:c.instructions+=1;goto B6ed6be;
case 0x6ed6c0:goto L6ed6c0;
case 0x6ed6c2:c.instructions+=1;goto B6ed6c2;
case 0x6ed6c4:goto L6ed6c4;
case 0x6ed6c8:c.instructions+=2;goto B6ed6c8;
case 0x6ed6ca:c.instructions+=1;goto B6ed6ca;
case 0x6ed6cc:goto L6ed6cc;
case 0x6ed6cf:c.instructions+=1;goto B6ed6cf;
case 0x6ed6d1:goto L6ed6d1;
case 0x6ed6d3:c.instructions+=1;goto B6ed6d3;
case 0x6ed6d5:goto L6ed6d5;
case 0x6ed6d8:c.instructions+=2;goto B6ed6d8;
case 0x6ed6da:c.instructions+=1;goto B6ed6da;
case 0x6ed6dc:goto L6ed6dc;
case 0x6ed6de:c.instructions+=1;goto B6ed6de;
case 0x6ed6e0:goto L6ed6e0;
case 0x6ed6e3:c.instructions+=2;goto B6ed6e3;
case 0x6ed6e6:c.instructions+=1;goto B6ed6e6;
case 0x6ed6e8:goto L6ed6e8;
case 0x6ed6ea:c.instructions+=1;goto B6ed6ea;
case 0x6ed6ec:goto L6ed6ec;
case 0x6ed6ed:goto L6ed6ed;
case 0x6ed6f1:c.instructions+=3;goto B6ed6f1;
case 0x6ed6f3:c.instructions+=2;goto B6ed6f3;
case 0x6ed6f6:c.instructions+=1;goto B6ed6f6;
case 0x6ed6f8:goto L6ed6f8;
case 0x6ed6fc:c.instructions+=3;goto B6ed6fc;
case 0x6ed6ff:c.instructions+=2;goto B6ed6ff;
case 0x6ed701:c.instructions+=1;goto B6ed701;
case 0x6ed703:goto L6ed703;
case 0x6ed706:goto L6ed706;
case 0x6ed709:c.instructions+=2;goto B6ed709;
case 0x6ed70b:c.instructions+=1;goto B6ed70b;
case 0x6ed70d:goto L6ed70d;
case 0x6ed70e:c.instructions+=3;goto B6ed70e;
case 0x6ed711:c.instructions+=2;goto B6ed711;
case 0x6ed713:c.instructions+=1;goto B6ed713;
case 0x6ed715:goto L6ed715;
case 0x6ed717:goto L6ed717;
case 0x6ed719:c.instructions+=1;goto B6ed719;
case 0x6ed71b:goto L6ed71b;
case 0x6ed720:goto L6ed720;
case 0x6ed723:c.instructions+=2;goto B6ed723;
case 0x6ed725:c.instructions+=1;goto B6ed725;
case 0x6ed727:goto L6ed727;
case 0x6ed728:c.instructions+=3;goto B6ed728;
case 0x6ed72b:c.instructions+=2;goto B6ed72b;
case 0x6ed72d:c.instructions+=1;goto B6ed72d;
case 0x6ed72f:goto L6ed72f;
case 0x6ed732:goto L6ed732;
case 0x6ed736:c.instructions+=28;goto B6ed736;
case 0x6ed73a:c.instructions+=27;goto B6ed73a;
case 0x6ed73f:c.instructions+=26;goto B6ed73f;
case 0x6ed741:c.instructions+=25;goto B6ed741;
case 0x6ed746:c.instructions+=24;goto B6ed746;
case 0x6ed748:c.instructions+=23;goto B6ed748;
case 0x6ed74a:c.instructions+=22;goto B6ed74a;
case 0x6ed74e:c.instructions+=21;goto B6ed74e;
case 0x6ed750:c.instructions+=20;goto B6ed750;
case 0x6ed752:c.instructions+=19;goto B6ed752;
case 0x6ed754:c.instructions+=18;goto B6ed754;
case 0x6ed756:c.instructions+=17;goto B6ed756;
case 0x6ed75a:c.instructions+=16;goto B6ed75a;
case 0x6ed75d:c.instructions+=15;goto B6ed75d;
case 0x6ed75f:c.instructions+=14;goto B6ed75f;
case 0x6ed761:c.instructions+=13;goto B6ed761;
case 0x6ed764:c.instructions+=12;goto B6ed764;
case 0x6ed767:c.instructions+=11;goto B6ed767;
case 0x6ed76b:c.instructions+=10;goto B6ed76b;
case 0x6ed76f:c.instructions+=9;goto B6ed76f;
case 0x6ed772:c.instructions+=8;goto B6ed772;
case 0x6ed774:c.instructions+=7;goto B6ed774;
case 0x6ed778:c.instructions+=6;goto B6ed778;
case 0x6ed77c:c.instructions+=5;goto B6ed77c;
case 0x6ed77f:c.instructions+=4;goto B6ed77f;
case 0x6ed783:c.instructions+=3;goto B6ed783;
case 0x6ed787:c.instructions+=2;goto B6ed787;
case 0x6ed78b:c.instructions+=1;goto B6ed78b;
case 0x6ed78d:goto L6ed78d;
case 0x6ed793:c.instructions+=2;goto B6ed793;
case 0x6ed795:c.instructions+=1;goto B6ed795;
case 0x6ed797:goto L6ed797;
case 0x6ed799:c.instructions+=1;goto B6ed799;
case 0x6ed79b:goto L6ed79b;
case 0x6ed79d:goto L6ed79d;
case 0x6ed7a0:c.instructions+=1;goto B6ed7a0;
case 0x6ed7a2:goto L6ed7a2;
case 0x6ed7a6:c.instructions+=1;goto B6ed7a6;
case 0x6ed7a8:goto L6ed7a8;
case 0x6ed7ac:c.instructions+=2;goto B6ed7ac;
case 0x6ed7ae:c.instructions+=1;goto B6ed7ae;
case 0x6ed7b0:goto L6ed7b0;
case 0x6ed7b2:c.instructions+=1;goto B6ed7b2;
case 0x6ed7b4:goto L6ed7b4;
case 0x6ed7b6:c.instructions+=2;goto B6ed7b6;
case 0x6ed7b8:c.instructions+=1;goto B6ed7b8;
case 0x6ed7ba:goto L6ed7ba;
case 0x6ed7be:c.instructions+=4;goto B6ed7be;
case 0x6ed7c1:c.instructions+=3;goto B6ed7c1;
case 0x6ed7c3:c.instructions+=2;goto B6ed7c3;
case 0x6ed7c5:c.instructions+=1;goto B6ed7c5;
case 0x6ed7c7:goto L6ed7c7;
case 0x6ed7cb:c.instructions+=2;goto B6ed7cb;
case 0x6ed7cd:c.instructions+=1;goto B6ed7cd;
case 0x6ed7d0:goto L6ed7d0;
case 0x6ed7d4:c.instructions+=9;goto B6ed7d4;
case 0x6ed7d8:c.instructions+=8;goto B6ed7d8;
case 0x6ed7da:c.instructions+=7;goto B6ed7da;
case 0x6ed7dd:c.instructions+=6;goto B6ed7dd;
case 0x6ed7e2:c.instructions+=5;goto B6ed7e2;
case 0x6ed7e4:c.instructions+=4;goto B6ed7e4;
case 0x6ed7e8:c.instructions+=3;goto B6ed7e8;
case 0x6ed7eb:c.instructions+=2;goto B6ed7eb;
case 0x6ed7ee:c.instructions+=1;goto B6ed7ee;
case 0x6ed7f0:goto L6ed7f0;
case 0x6ed7f3:c.instructions+=4;goto B6ed7f3;
case 0x6ed7f5:c.instructions+=3;goto B6ed7f5;
case 0x6ed7f6:c.instructions+=2;goto B6ed7f6;
case 0x6ed7f8:c.instructions+=1;goto B6ed7f8;
case 0x6ed7fd:goto L6ed7fd;
case 0x6ed801:c.instructions+=6;goto B6ed801;
case 0x6ed805:c.instructions+=5;goto B6ed805;
case 0x6ed806:c.instructions+=4;goto B6ed806;
case 0x6ed809:c.instructions+=3;goto B6ed809;
case 0x6ed80c:c.instructions+=2;goto B6ed80c;
case 0x6ed80e:c.instructions+=1;goto B6ed80e;
case 0x6ed810:goto L6ed810;
case 0x6ed814:c.instructions+=1;goto B6ed814;
case 0x6ed816:goto L6ed816;
case 0x6ed818:c.instructions+=1;goto B6ed818;
case 0x6ed81e:goto L6ed81e;
case 0x6ed822:c.instructions+=9;goto B6ed822;
case 0x6ed826:c.instructions+=8;goto B6ed826;
case 0x6ed82a:c.instructions+=7;goto B6ed82a;
case 0x6ed82d:c.instructions+=6;goto B6ed82d;
case 0x6ed830:c.instructions+=5;goto B6ed830;
case 0x6ed833:c.instructions+=4;goto B6ed833;
case 0x6ed835:c.instructions+=3;goto B6ed835;
case 0x6ed837:c.instructions+=2;goto B6ed837;
case 0x6ed83b:c.instructions+=1;goto B6ed83b;
case 0x6ed840:goto L6ed840;
case 0x6ed842:c.instructions+=2;goto B6ed842;
case 0x6ed844:c.instructions+=1;goto B6ed844;
case 0x6ed84a:goto L6ed84a;
case 0x6ed84c:c.instructions+=1;goto B6ed84c;
case 0x6ed850:goto L6ed850;
case 0x6ed854:c.instructions+=9;goto B6ed854;
case 0x6ed858:c.instructions+=8;goto B6ed858;
case 0x6ed85a:c.instructions+=7;goto B6ed85a;
case 0x6ed85d:c.instructions+=6;goto B6ed85d;
case 0x6ed862:c.instructions+=5;goto B6ed862;
case 0x6ed864:c.instructions+=4;goto B6ed864;
case 0x6ed868:c.instructions+=3;goto B6ed868;
case 0x6ed86b:c.instructions+=2;goto B6ed86b;
case 0x6ed86e:c.instructions+=1;goto B6ed86e;
case 0x6ed874:goto L6ed874;
case 0x6ed877:c.instructions+=4;goto B6ed877;
case 0x6ed87b:c.instructions+=3;goto B6ed87b;
case 0x6ed87c:c.instructions+=2;goto B6ed87c;
case 0x6ed880:c.instructions+=1;goto B6ed880;
case 0x6ed885:goto L6ed885;
case 0x6ed888:c.instructions+=34;goto B6ed888;
case 0x6ed88c:c.instructions+=33;goto B6ed88c;
case 0x6ed88e:c.instructions+=32;goto B6ed88e;
case 0x6ed891:c.instructions+=31;goto B6ed891;
case 0x6ed895:c.instructions+=30;goto B6ed895;
case 0x6ed899:c.instructions+=29;goto B6ed899;
case 0x6ed89c:c.instructions+=28;goto B6ed89c;
case 0x6ed8a0:c.instructions+=27;goto B6ed8a0;
case 0x6ed8a4:c.instructions+=26;goto B6ed8a4;
case 0x6ed8a8:c.instructions+=25;goto B6ed8a8;
case 0x6ed8ae:c.instructions+=24;goto B6ed8ae;
case 0x6ed8b2:c.instructions+=23;goto B6ed8b2;
case 0x6ed8b6:c.instructions+=22;goto B6ed8b6;
case 0x6ed8ba:c.instructions+=21;goto B6ed8ba;
case 0x6ed8bd:c.instructions+=20;goto B6ed8bd;
case 0x6ed8c1:c.instructions+=19;goto B6ed8c1;
case 0x6ed8c7:c.instructions+=18;goto B6ed8c7;
case 0x6ed8cb:c.instructions+=17;goto B6ed8cb;
case 0x6ed8cf:c.instructions+=16;goto B6ed8cf;
case 0x6ed8d3:c.instructions+=15;goto B6ed8d3;
case 0x6ed8d9:c.instructions+=14;goto B6ed8d9;
case 0x6ed8dd:c.instructions+=13;goto B6ed8dd;
case 0x6ed8e1:c.instructions+=12;goto B6ed8e1;
case 0x6ed8e3:c.instructions+=11;goto B6ed8e3;
case 0x6ed8e5:c.instructions+=10;goto B6ed8e5;
case 0x6ed8e7:c.instructions+=9;goto B6ed8e7;
case 0x6ed8ea:c.instructions+=8;goto B6ed8ea;
case 0x6ed8ee:c.instructions+=7;goto B6ed8ee;
case 0x6ed8f0:c.instructions+=6;goto B6ed8f0;
case 0x6ed8f2:c.instructions+=5;goto B6ed8f2;
case 0x6ed8f5:c.instructions+=4;goto B6ed8f5;
case 0x6ed8f9:c.instructions+=3;goto B6ed8f9;
case 0x6ed8fd:c.instructions+=2;goto B6ed8fd;
case 0x6ed8ff:c.instructions+=1;goto B6ed8ff;
case 0x6ed901:goto L6ed901;
case 0x6ed905:c.instructions+=9;goto B6ed905;
case 0x6ed909:c.instructions+=8;goto B6ed909;
case 0x6ed90c:c.instructions+=7;goto B6ed90c;
case 0x6ed910:c.instructions+=6;goto B6ed910;
case 0x6ed914:c.instructions+=5;goto B6ed914;
case 0x6ed917:c.instructions+=4;goto B6ed917;
case 0x6ed918:c.instructions+=3;goto B6ed918;
case 0x6ed91b:c.instructions+=2;goto B6ed91b;
case 0x6ed91d:c.instructions+=1;goto B6ed91d;
case 0x6ed923:goto L6ed923;
case 0x6ed927:c.instructions+=1;goto B6ed927;
case 0x6ed92d:goto L6ed92d;
case 0x6ed931:c.instructions+=11;goto B6ed931;
case 0x6ed935:c.instructions+=10;goto B6ed935;
case 0x6ed939:c.instructions+=9;goto B6ed939;
case 0x6ed93d:c.instructions+=8;goto B6ed93d;
case 0x6ed93e:c.instructions+=7;goto B6ed93e;
case 0x6ed941:c.instructions+=6;goto B6ed941;
case 0x6ed944:c.instructions+=5;goto B6ed944;
case 0x6ed946:c.instructions+=4;goto B6ed946;
case 0x6ed948:c.instructions+=3;goto B6ed948;
case 0x6ed94a:c.instructions+=2;goto B6ed94a;
case 0x6ed94c:c.instructions+=1;goto B6ed94c;
case 0x6ed952:goto L6ed952;
case 0x6ed954:goto L6ed954;
case 0x6ed958:c.instructions+=9;goto B6ed958;
case 0x6ed95c:c.instructions+=8;goto B6ed95c;
case 0x6ed95e:c.instructions+=7;goto B6ed95e;
case 0x6ed961:c.instructions+=6;goto B6ed961;
case 0x6ed966:c.instructions+=5;goto B6ed966;
case 0x6ed968:c.instructions+=4;goto B6ed968;
case 0x6ed96c:c.instructions+=3;goto B6ed96c;
case 0x6ed96f:c.instructions+=2;goto B6ed96f;
case 0x6ed972:c.instructions+=1;goto B6ed972;
case 0x6ed974:goto L6ed974;
case 0x6ed977:c.instructions+=22;goto B6ed977;
case 0x6ed97b:c.instructions+=21;goto B6ed97b;
case 0x6ed97d:c.instructions+=20;goto B6ed97d;
case 0x6ed980:c.instructions+=19;goto B6ed980;
case 0x6ed982:c.instructions+=18;goto B6ed982;
case 0x6ed984:c.instructions+=17;goto B6ed984;
case 0x6ed986:c.instructions+=16;goto B6ed986;
case 0x6ed988:c.instructions+=15;goto B6ed988;
case 0x6ed98a:c.instructions+=14;goto B6ed98a;
case 0x6ed98c:c.instructions+=13;goto B6ed98c;
case 0x6ed98e:c.instructions+=12;goto B6ed98e;
case 0x6ed990:c.instructions+=11;goto B6ed990;
case 0x6ed993:c.instructions+=10;goto B6ed993;
case 0x6ed995:c.instructions+=9;goto B6ed995;
case 0x6ed997:c.instructions+=8;goto B6ed997;
case 0x6ed999:c.instructions+=7;goto B6ed999;
case 0x6ed99b:c.instructions+=6;goto B6ed99b;
case 0x6ed99d:c.instructions+=5;goto B6ed99d;
case 0x6ed99f:c.instructions+=4;goto B6ed99f;
case 0x6ed9a5:c.instructions+=3;goto B6ed9a5;
case 0x6ed9a7:c.instructions+=2;goto B6ed9a7;
case 0x6ed9aa:c.instructions+=1;goto B6ed9aa;
case 0x6ed9ac:goto L6ed9ac;
case 0x6ed9ae:c.instructions+=11;goto B6ed9ae;
case 0x6ed9b5:c.instructions+=10;goto B6ed9b5;
case 0x6ed9bb:c.instructions+=9;goto B6ed9bb;
case 0x6ed9bd:c.instructions+=8;goto B6ed9bd;
case 0x6ed9bf:c.instructions+=7;goto B6ed9bf;
case 0x6ed9c1:c.instructions+=6;goto B6ed9c1;
case 0x6ed9c3:c.instructions+=5;goto B6ed9c3;
case 0x6ed9c6:c.instructions+=4;goto B6ed9c6;
case 0x6ed9c9:c.instructions+=3;goto B6ed9c9;
case 0x6ed9cc:c.instructions+=2;goto B6ed9cc;
case 0x6ed9cf:c.instructions+=1;goto B6ed9cf;
case 0x6ed9d1:goto L6ed9d1;
case 0x6ed9d3:c.instructions+=4;goto B6ed9d3;
case 0x6ed9d9:c.instructions+=3;goto B6ed9d9;
case 0x6ed9db:c.instructions+=2;goto B6ed9db;
case 0x6ed9de:c.instructions+=1;goto B6ed9de;
case 0x6ed9e0:goto L6ed9e0;
case 0x6ed9e2:c.instructions+=2;goto B6ed9e2;
case 0x6ed9e5:c.instructions+=1;goto B6ed9e5;
case 0x6ed9e7:goto L6ed9e7;
case 0x6ed9e9:goto L6ed9e9;
case 0x6ed9ed:c.instructions+=6;goto B6ed9ed;
case 0x6ed9f1:c.instructions+=5;goto B6ed9f1;
case 0x6ed9f4:c.instructions+=4;goto B6ed9f4;
case 0x6ed9f5:c.instructions+=3;goto B6ed9f5;
case 0x6ed9f8:c.instructions+=2;goto B6ed9f8;
case 0x6ed9fa:c.instructions+=1;goto B6ed9fa;
case 0x6eda00:goto L6eda00;
case 0x6eda05:goto L6eda05;
case 0x6eda0b:goto L6eda0b;
case 0x6eda0f:c.instructions+=10;goto B6eda0f;
case 0x6eda13:c.instructions+=9;goto B6eda13;
case 0x6eda17:c.instructions+=8;goto B6eda17;
case 0x6eda1a:c.instructions+=7;goto B6eda1a;
case 0x6eda1d:c.instructions+=6;goto B6eda1d;
case 0x6eda21:c.instructions+=5;goto B6eda21;
case 0x6eda24:c.instructions+=4;goto B6eda24;
case 0x6eda28:c.instructions+=3;goto B6eda28;
case 0x6eda2b:c.instructions+=2;goto B6eda2b;
case 0x6eda2d:c.instructions+=1;goto B6eda2d;
case 0x6eda33:goto L6eda33;
case 0x6eda35:c.instructions+=3;goto B6eda35;
case 0x6eda36:c.instructions+=2;goto B6eda36;
case 0x6eda3a:c.instructions+=1;goto B6eda3a;
case 0x6eda40:goto L6eda40;
case 0x6eda44:c.instructions+=2;goto B6eda44;
case 0x6eda45:c.instructions+=1;goto B6eda45;
case 0x6eda4b:goto L6eda4b;
case 0x6eda4d:c.instructions+=5;goto B6eda4d;
case 0x6eda51:c.instructions+=4;goto B6eda51;
case 0x6eda54:c.instructions+=3;goto B6eda54;
case 0x6eda57:c.instructions+=2;goto B6eda57;
case 0x6eda5b:c.instructions+=1;goto B6eda5b;
case 0x6eda60:goto L6eda60;
case 0x6eda64:c.instructions+=9;goto B6eda64;
case 0x6eda68:c.instructions+=8;goto B6eda68;
case 0x6eda6a:c.instructions+=7;goto B6eda6a;
case 0x6eda6d:c.instructions+=6;goto B6eda6d;
case 0x6eda72:c.instructions+=5;goto B6eda72;
case 0x6eda74:c.instructions+=4;goto B6eda74;
case 0x6eda78:c.instructions+=3;goto B6eda78;
case 0x6eda7b:c.instructions+=2;goto B6eda7b;
case 0x6eda7e:c.instructions+=1;goto B6eda7e;
case 0x6eda84:goto L6eda84;
case 0x6eda87:c.instructions+=4;goto B6eda87;
case 0x6eda8b:c.instructions+=3;goto B6eda8b;
case 0x6eda8c:c.instructions+=2;goto B6eda8c;
case 0x6eda90:c.instructions+=1;goto B6eda90;
case 0x6eda95:goto L6eda95;
case 0x6eda97:c.instructions+=37;goto B6eda97;
case 0x6eda9b:c.instructions+=36;goto B6eda9b;
case 0x6eda9d:c.instructions+=35;goto B6eda9d;
case 0x6edaa0:c.instructions+=34;goto B6edaa0;
case 0x6edaa4:c.instructions+=33;goto B6edaa4;
case 0x6edaa8:c.instructions+=32;goto B6edaa8;
case 0x6edaab:c.instructions+=31;goto B6edaab;
case 0x6edaaf:c.instructions+=30;goto B6edaaf;
case 0x6edab3:c.instructions+=29;goto B6edab3;
case 0x6edab7:c.instructions+=28;goto B6edab7;
case 0x6edabd:c.instructions+=27;goto B6edabd;
case 0x6edac1:c.instructions+=26;goto B6edac1;
case 0x6edac5:c.instructions+=25;goto B6edac5;
case 0x6edac9:c.instructions+=24;goto B6edac9;
case 0x6edacc:c.instructions+=23;goto B6edacc;
case 0x6edad0:c.instructions+=22;goto B6edad0;
case 0x6edad6:c.instructions+=21;goto B6edad6;
case 0x6edada:c.instructions+=20;goto B6edada;
case 0x6edade:c.instructions+=19;goto B6edade;
case 0x6edae2:c.instructions+=18;goto B6edae2;
case 0x6edae8:c.instructions+=17;goto B6edae8;
case 0x6edaec:c.instructions+=16;goto B6edaec;
case 0x6edaf0:c.instructions+=15;goto B6edaf0;
case 0x6edaf2:c.instructions+=14;goto B6edaf2;
case 0x6edaf4:c.instructions+=13;goto B6edaf4;
case 0x6edaf6:c.instructions+=12;goto B6edaf6;
case 0x6edaf9:c.instructions+=11;goto B6edaf9;
case 0x6edafd:c.instructions+=10;goto B6edafd;
case 0x6edb01:c.instructions+=9;goto B6edb01;
case 0x6edb03:c.instructions+=8;goto B6edb03;
case 0x6edb05:c.instructions+=7;goto B6edb05;
case 0x6edb08:c.instructions+=6;goto B6edb08;
case 0x6edb0c:c.instructions+=5;goto B6edb0c;
case 0x6edb0e:c.instructions+=4;goto B6edb0e;
case 0x6edb10:c.instructions+=3;goto B6edb10;
case 0x6edb12:c.instructions+=2;goto B6edb12;
case 0x6edb16:c.instructions+=1;goto B6edb16;
case 0x6edb18:goto L6edb18;
case 0x6edb1c:c.instructions+=7;goto B6edb1c;
case 0x6edb1f:c.instructions+=6;goto B6edb1f;
case 0x6edb20:c.instructions+=5;goto B6edb20;
case 0x6edb23:c.instructions+=4;goto B6edb23;
case 0x6edb26:c.instructions+=3;goto B6edb26;
case 0x6edb28:c.instructions+=2;goto B6edb28;
case 0x6edb2c:c.instructions+=1;goto B6edb2c;
case 0x6edb32:goto L6edb32;
case 0x6edb36:goto L6edb36;
case 0x6edb3a:c.instructions+=1;goto B6edb3a;
case 0x6edb40:goto L6edb40;
case 0x6edb44:goto L6edb44;
case 0x6edb48:c.instructions+=9;goto B6edb48;
case 0x6edb4c:c.instructions+=8;goto B6edb4c;
case 0x6edb4f:c.instructions+=7;goto B6edb4f;
case 0x6edb52:c.instructions+=6;goto B6edb52;
case 0x6edb55:c.instructions+=5;goto B6edb55;
case 0x6edb57:c.instructions+=4;goto B6edb57;
case 0x6edb59:c.instructions+=3;goto B6edb59;
case 0x6edb5b:c.instructions+=2;goto B6edb5b;
case 0x6edb5d:c.instructions+=1;goto B6edb5d;
case 0x6edb5f:goto L6edb5f;
case 0x6edb61:goto L6edb61;
case 0x6edb65:c.instructions+=9;goto B6edb65;
case 0x6edb69:c.instructions+=8;goto B6edb69;
case 0x6edb6b:c.instructions+=7;goto B6edb6b;
case 0x6edb6e:c.instructions+=6;goto B6edb6e;
case 0x6edb73:c.instructions+=5;goto B6edb73;
case 0x6edb75:c.instructions+=4;goto B6edb75;
case 0x6edb79:c.instructions+=3;goto B6edb79;
case 0x6edb7c:c.instructions+=2;goto B6edb7c;
case 0x6edb7f:c.instructions+=1;goto B6edb7f;
case 0x6edb81:goto L6edb81;
case 0x6edb84:c.instructions+=7;goto B6edb84;
case 0x6edb86:c.instructions+=6;goto B6edb86;
case 0x6edb88:c.instructions+=5;goto B6edb88;
case 0x6edb8a:c.instructions+=4;goto B6edb8a;
case 0x6edb8b:c.instructions+=3;goto B6edb8b;
case 0x6edb8e:c.instructions+=2;goto B6edb8e;
case 0x6edb8f:c.instructions+=1;goto B6edb8f;
case 0x6edb94:goto L6edb94;
case 0x6edb97:goto L6edb97;
case 0x6edb9b:c.instructions+=6;goto B6edb9b;
case 0x6edb9f:c.instructions+=5;goto B6edb9f;
case 0x6edba2:c.instructions+=4;goto B6edba2;
case 0x6edba3:c.instructions+=3;goto B6edba3;
case 0x6edba6:c.instructions+=2;goto B6edba6;
case 0x6edba8:c.instructions+=1;goto B6edba8;
case 0x6edbaa:goto L6edbaa;
case 0x6edbae:c.instructions+=7;goto B6edbae;
case 0x6edbb2:c.instructions+=6;goto B6edbb2;
case 0x6edbb5:c.instructions+=5;goto B6edbb5;
case 0x6edbb8:c.instructions+=4;goto B6edbb8;
case 0x6edbba:c.instructions+=3;goto B6edbba;
case 0x6edbbc:c.instructions+=2;goto B6edbbc;
case 0x6edbbf:c.instructions+=1;goto B6edbbf;
case 0x6edbc1:goto L6edbc1;
case 0x6edbc5:c.instructions+=5;goto B6edbc5;
case 0x6edbc9:c.instructions+=4;goto B6edbc9;
case 0x6edbcb:c.instructions+=3;goto B6edbcb;
case 0x6edbcd:c.instructions+=2;goto B6edbcd;
case 0x6edbd0:c.instructions+=1;goto B6edbd0;
case 0x6edbd6:goto L6edbd6;
case 0x6edbda:c.instructions+=2;goto B6edbda;
case 0x6edbdc:c.instructions+=1;goto B6edbdc;
case 0x6edbde:goto L6edbde;
case 0x6edbe0:c.instructions+=1;goto B6edbe0;
case 0x6edbe2:goto L6edbe2;
case 0x6edbe6:c.instructions+=4;goto B6edbe6;
case 0x6edbec:c.instructions+=3;goto B6edbec;
case 0x6edbee:c.instructions+=2;goto B6edbee;
case 0x6edbf1:c.instructions+=1;goto B6edbf1;
case 0x6edbf7:goto L6edbf7;
case 0x6edbfa:c.instructions+=5;goto B6edbfa;
case 0x6edbfe:c.instructions+=4;goto B6edbfe;
case 0x6edc02:c.instructions+=3;goto B6edc02;
case 0x6edc06:c.instructions+=2;goto B6edc06;
case 0x6edc0a:c.instructions+=1;goto B6edc0a;
case 0x6edc0c:goto L6edc0c;
case 0x6edc11:c.instructions+=7;goto B6edc11;
case 0x6edc15:c.instructions+=6;goto B6edc15;
case 0x6edc19:c.instructions+=5;goto B6edc19;
case 0x6edc1d:c.instructions+=4;goto B6edc1d;
case 0x6edc1f:c.instructions+=3;goto B6edc1f;
case 0x6edc21:c.instructions+=2;goto B6edc21;
case 0x6edc24:c.instructions+=1;goto B6edc24;
case 0x6edc2a:goto L6edc2a;
case 0x6edc2e:c.instructions+=6;goto B6edc2e;
case 0x6edc32:c.instructions+=5;goto B6edc32;
case 0x6edc34:c.instructions+=4;goto B6edc34;
case 0x6edc38:c.instructions+=3;goto B6edc38;
case 0x6edc3c:c.instructions+=2;goto B6edc3c;
case 0x6edc3e:c.instructions+=1;goto B6edc3e;
case 0x6edc40:goto L6edc40;
case 0x6edc44:c.instructions+=1;goto B6edc44;
case 0x6edc46:goto L6edc46;
case 0x6edc4a:c.instructions+=3;goto B6edc4a;
case 0x6edc4b:c.instructions+=2;goto B6edc4b;
case 0x6edc4d:c.instructions+=1;goto B6edc4d;
case 0x6edc53:goto L6edc53;
case 0x6edc57:c.instructions+=8;goto B6edc57;
case 0x6edc5a:c.instructions+=7;goto B6edc5a;
case 0x6edc5e:c.instructions+=6;goto B6edc5e;
case 0x6edc60:c.instructions+=5;goto B6edc60;
case 0x6edc63:c.instructions+=4;goto B6edc63;
case 0x6edc66:c.instructions+=3;goto B6edc66;
case 0x6edc68:c.instructions+=2;goto B6edc68;
case 0x6edc6a:c.instructions+=1;goto B6edc6a;
case 0x6edc70:goto L6edc70;
case 0x6edc73:c.instructions+=3;goto B6edc73;
case 0x6edc75:c.instructions+=2;goto B6edc75;
case 0x6edc77:c.instructions+=1;goto B6edc77;
case 0x6edc7d:goto L6edc7d;
case 0x6edc81:c.instructions+=1;goto B6edc81;
case 0x6edc83:goto L6edc83;
case 0x6edc87:c.instructions+=10;goto B6edc87;
case 0x6edc8b:c.instructions+=9;goto B6edc8b;
case 0x6edc8d:c.instructions+=8;goto B6edc8d;
case 0x6edc90:c.instructions+=7;goto B6edc90;
case 0x6edc95:c.instructions+=6;goto B6edc95;
case 0x6edc97:c.instructions+=5;goto B6edc97;
case 0x6edc9b:c.instructions+=4;goto B6edc9b;
case 0x6edc9d:c.instructions+=3;goto B6edc9d;
case 0x6edca0:c.instructions+=2;goto B6edca0;
case 0x6edca3:c.instructions+=1;goto B6edca3;
case 0x6edca5:goto L6edca5;
case 0x6edca9:c.instructions+=3;goto B6edca9;
case 0x6edcaa:c.instructions+=2;goto B6edcaa;
case 0x6edcac:c.instructions+=1;goto B6edcac;
case 0x6edcb1:goto L6edcb1;
case 0x6edcb5:c.instructions+=10;goto B6edcb5;
case 0x6edcb9:c.instructions+=9;goto B6edcb9;
case 0x6edcbc:c.instructions+=8;goto B6edcbc;
case 0x6edcbf:c.instructions+=7;goto B6edcbf;
case 0x6edcc3:c.instructions+=6;goto B6edcc3;
case 0x6edcc6:c.instructions+=5;goto B6edcc6;
case 0x6edcc8:c.instructions+=4;goto B6edcc8;
case 0x6edccc:c.instructions+=3;goto B6edccc;
case 0x6edccd:c.instructions+=2;goto B6edccd;
case 0x6edcd1:c.instructions+=1;goto B6edcd1;
case 0x6edcd6:goto L6edcd6;
case 0x6edcd9:goto L6edcd9;
case 0x6edcdd:c.instructions+=8;goto B6edcdd;
case 0x6edce1:c.instructions+=7;goto B6edce1;
case 0x6edce4:c.instructions+=6;goto B6edce4;
case 0x6edce8:c.instructions+=5;goto B6edce8;
case 0x6edcec:c.instructions+=4;goto B6edcec;
case 0x6edced:c.instructions+=3;goto B6edced;
case 0x6edcf0:c.instructions+=2;goto B6edcf0;
case 0x6edcf2:c.instructions+=1;goto B6edcf2;
case 0x6edcf4:goto L6edcf4;
case 0x6edcf9:goto L6edcf9;
case 0x6edcfd:c.instructions+=10;goto B6edcfd;
case 0x6edd01:c.instructions+=9;goto B6edd01;
case 0x6edd04:c.instructions+=8;goto B6edd04;
case 0x6edd07:c.instructions+=7;goto B6edd07;
case 0x6edd0a:c.instructions+=6;goto B6edd0a;
case 0x6edd0c:c.instructions+=5;goto B6edd0c;
case 0x6edd0e:c.instructions+=4;goto B6edd0e;
case 0x6edd10:c.instructions+=3;goto B6edd10;
case 0x6edd12:c.instructions+=2;goto B6edd12;
case 0x6edd16:c.instructions+=1;goto B6edd16;
case 0x6edd1c:goto L6edd1c;
case 0x6edd20:c.instructions+=1;goto B6edd20;
case 0x6edd24:goto L6edd24;
case 0x6edd28:c.instructions+=10;goto B6edd28;
case 0x6edd2c:c.instructions+=9;goto B6edd2c;
case 0x6edd30:c.instructions+=8;goto B6edd30;
case 0x6edd32:c.instructions+=7;goto B6edd32;
case 0x6edd35:c.instructions+=6;goto B6edd35;
case 0x6edd3a:c.instructions+=5;goto B6edd3a;
case 0x6edd3c:c.instructions+=4;goto B6edd3c;
case 0x6edd3e:c.instructions+=3;goto B6edd3e;
case 0x6edd41:c.instructions+=2;goto B6edd41;
case 0x6edd44:c.instructions+=1;goto B6edd44;
case 0x6edd4a:goto L6edd4a;
case 0x6edd4d:c.instructions+=5;goto B6edd4d;
case 0x6edd51:c.instructions+=4;goto B6edd51;
case 0x6edd55:c.instructions+=3;goto B6edd55;
case 0x6edd56:c.instructions+=2;goto B6edd56;
case 0x6edd58:c.instructions+=1;goto B6edd58;
case 0x6edd5d:goto L6edd5d;
case 0x6edd5f:c.instructions+=43;goto B6edd5f;
case 0x6edd61:c.instructions+=42;goto B6edd61;
case 0x6edd63:c.instructions+=41;goto B6edd63;
case 0x6edd66:c.instructions+=40;goto B6edd66;
case 0x6edd6a:c.instructions+=39;goto B6edd6a;
case 0x6edd6e:c.instructions+=38;goto B6edd6e;
case 0x6edd72:c.instructions+=37;goto B6edd72;
case 0x6edd76:c.instructions+=36;goto B6edd76;
case 0x6edd7a:c.instructions+=35;goto B6edd7a;
case 0x6edd7d:c.instructions+=34;goto B6edd7d;
case 0x6edd81:c.instructions+=33;goto B6edd81;
case 0x6edd87:c.instructions+=32;goto B6edd87;
case 0x6edd8b:c.instructions+=31;goto B6edd8b;
case 0x6edd8f:c.instructions+=30;goto B6edd8f;
case 0x6edd93:c.instructions+=29;goto B6edd93;
case 0x6edd97:c.instructions+=28;goto B6edd97;
case 0x6edd9a:c.instructions+=27;goto B6edd9a;
case 0x6edd9e:c.instructions+=26;goto B6edd9e;
case 0x6edda4:c.instructions+=25;goto B6edda4;
case 0x6edda8:c.instructions+=24;goto B6edda8;
case 0x6eddac:c.instructions+=23;goto B6eddac;
case 0x6eddb0:c.instructions+=22;goto B6eddb0;
case 0x6eddb6:c.instructions+=21;goto B6eddb6;
case 0x6eddba:c.instructions+=20;goto B6eddba;
case 0x6eddbe:c.instructions+=19;goto B6eddbe;
case 0x6eddc0:c.instructions+=18;goto B6eddc0;
case 0x6eddc2:c.instructions+=17;goto B6eddc2;
case 0x6eddc6:c.instructions+=16;goto B6eddc6;
case 0x6eddc9:c.instructions+=15;goto B6eddc9;
case 0x6eddcd:c.instructions+=14;goto B6eddcd;
case 0x6eddd1:c.instructions+=13;goto B6eddd1;
case 0x6eddd4:c.instructions+=12;goto B6eddd4;
case 0x6eddd8:c.instructions+=11;goto B6eddd8;
case 0x6edddc:c.instructions+=10;goto B6edddc;
case 0x6edde0:c.instructions+=9;goto B6edde0;
case 0x6edde4:c.instructions+=8;goto B6edde4;
case 0x6edde6:c.instructions+=7;goto B6edde6;
case 0x6eddea:c.instructions+=6;goto B6eddea;
case 0x6eddee:c.instructions+=5;goto B6eddee;
case 0x6eddf0:c.instructions+=4;goto B6eddf0;
case 0x6eddf6:c.instructions+=3;goto B6eddf6;
case 0x6eddf8:c.instructions+=2;goto B6eddf8;
case 0x6eddfb:c.instructions+=1;goto B6eddfb;
case 0x6eddfd:goto L6eddfd;
case 0x6eddff:c.instructions+=11;goto B6eddff;
case 0x6ede07:c.instructions+=10;goto B6ede07;
case 0x6ede0d:c.instructions+=9;goto B6ede0d;
case 0x6ede11:c.instructions+=8;goto B6ede11;
case 0x6ede13:c.instructions+=7;goto B6ede13;
case 0x6ede17:c.instructions+=6;goto B6ede17;
case 0x6ede1b:c.instructions+=5;goto B6ede1b;
case 0x6ede1d:c.instructions+=4;goto B6ede1d;
case 0x6ede21:c.instructions+=3;goto B6ede21;
case 0x6ede25:c.instructions+=2;goto B6ede25;
case 0x6ede29:c.instructions+=1;goto B6ede29;
case 0x6ede2b:goto L6ede2b;
case 0x6ede2e:c.instructions+=6;goto B6ede2e;
case 0x6ede34:c.instructions+=5;goto B6ede34;
case 0x6ede36:c.instructions+=4;goto B6ede36;
case 0x6ede38:c.instructions+=3;goto B6ede38;
case 0x6ede3c:c.instructions+=2;goto B6ede3c;
case 0x6ede3e:c.instructions+=1;goto B6ede3e;
case 0x6ede40:goto L6ede40;
case 0x6ede44:c.instructions+=2;goto B6ede44;
case 0x6ede46:c.instructions+=1;goto B6ede46;
case 0x6ede4a:goto L6ede4a;
case 0x6ede4e:c.instructions+=8;goto B6ede4e;
case 0x6ede52:c.instructions+=7;goto B6ede52;
case 0x6ede56:c.instructions+=6;goto B6ede56;
case 0x6ede59:c.instructions+=5;goto B6ede59;
case 0x6ede5d:c.instructions+=4;goto B6ede5d;
case 0x6ede5e:c.instructions+=3;goto B6ede5e;
case 0x6ede62:c.instructions+=2;goto B6ede62;
case 0x6ede64:c.instructions+=1;goto B6ede64;
case 0x6ede69:goto L6ede69;
case 0x6ede6d:c.instructions+=1;goto B6ede6d;
case 0x6ede70:goto L6ede70;
case 0x6ede74:c.instructions+=12;goto B6ede74;
case 0x6ede78:c.instructions+=11;goto B6ede78;
case 0x6ede7c:c.instructions+=10;goto B6ede7c;
case 0x6ede7f:c.instructions+=9;goto B6ede7f;
case 0x6ede83:c.instructions+=8;goto B6ede83;
case 0x6ede87:c.instructions+=7;goto B6ede87;
case 0x6ede8a:c.instructions+=6;goto B6ede8a;
case 0x6ede8b:c.instructions+=5;goto B6ede8b;
case 0x6ede8e:c.instructions+=4;goto B6ede8e;
case 0x6ede90:c.instructions+=3;goto B6ede90;
case 0x6ede94:c.instructions+=2;goto B6ede94;
case 0x6ede98:c.instructions+=1;goto B6ede98;
case 0x6ede9e:goto L6ede9e;
case 0x6edea0:goto L6edea0;
case 0x6edea2:goto L6edea2;
case 0x6edea6:c.instructions+=3;goto B6edea6;
case 0x6edea9:c.instructions+=2;goto B6edea9;
case 0x6edeab:c.instructions+=1;goto B6edeab;
case 0x6edead:goto L6edead;
case 0x6edeb1:c.instructions+=1;goto B6edeb1;
case 0x6edeb3:goto L6edeb3;
case 0x6edeb7:c.instructions+=9;goto B6edeb7;
case 0x6edebb:c.instructions+=8;goto B6edebb;
case 0x6edebd:c.instructions+=7;goto B6edebd;
case 0x6edec0:c.instructions+=6;goto B6edec0;
case 0x6edec5:c.instructions+=5;goto B6edec5;
case 0x6edec7:c.instructions+=4;goto B6edec7;
case 0x6edec9:c.instructions+=3;goto B6edec9;
case 0x6edecc:c.instructions+=2;goto B6edecc;
case 0x6edecf:c.instructions+=1;goto B6edecf;
case 0x6eded1:goto L6eded1;
case 0x6eded4:c.instructions+=13;goto B6eded4;
case 0x6eded8:c.instructions+=12;goto B6eded8;
case 0x6ededb:c.instructions+=11;goto B6ededb;
case 0x6ededd:c.instructions+=10;goto B6ededd;
case 0x6edee0:c.instructions+=9;goto B6edee0;
case 0x6edee4:c.instructions+=8;goto B6edee4;
case 0x6edee6:c.instructions+=7;goto B6edee6;
case 0x6edee8:c.instructions+=6;goto B6edee8;
case 0x6edeeb:c.instructions+=5;goto B6edeeb;
case 0x6edeee:c.instructions+=4;goto B6edeee;
case 0x6edef1:c.instructions+=3;goto B6edef1;
case 0x6edef4:c.instructions+=2;goto B6edef4;
case 0x6edef7:c.instructions+=1;goto B6edef7;
case 0x6edefa:goto L6edefa;
case 0x6edefe:c.instructions+=5;goto B6edefe;
case 0x6edf02:c.instructions+=4;goto B6edf02;
case 0x6edf03:c.instructions+=3;goto B6edf03;
case 0x6edf06:c.instructions+=2;goto B6edf06;
case 0x6edf08:c.instructions+=1;goto B6edf08;
case 0x6edf0a:goto L6edf0a;
case 0x6edf0e:c.instructions+=3;goto B6edf0e;
case 0x6edf11:c.instructions+=2;goto B6edf11;
case 0x6edf13:c.instructions+=1;goto B6edf13;
case 0x6edf15:goto L6edf15;
case 0x6edf18:c.instructions+=3;goto B6edf18;
case 0x6edf1a:c.instructions+=2;goto B6edf1a;
case 0x6edf1c:c.instructions+=1;goto B6edf1c;
case 0x6edf1e:goto L6edf1e;
case 0x6edf20:goto L6edf20;
case 0x6edf24:c.instructions+=8;goto B6edf24;
case 0x6edf26:c.instructions+=7;goto B6edf26;
case 0x6edf29:c.instructions+=6;goto B6edf29;
case 0x6edf2e:c.instructions+=5;goto B6edf2e;
case 0x6edf30:c.instructions+=4;goto B6edf30;
case 0x6edf34:c.instructions+=3;goto B6edf34;
case 0x6edf37:c.instructions+=2;goto B6edf37;
case 0x6edf3a:c.instructions+=1;goto B6edf3a;
case 0x6edf3c:goto L6edf3c;
case 0x6edf3f:c.instructions+=9;goto B6edf3f;
case 0x6edf43:c.instructions+=8;goto B6edf43;
case 0x6edf47:c.instructions+=7;goto B6edf47;
case 0x6edf4a:c.instructions+=6;goto B6edf4a;
case 0x6edf4d:c.instructions+=5;goto B6edf4d;
case 0x6edf51:c.instructions+=4;goto B6edf51;
case 0x6edf54:c.instructions+=3;goto B6edf54;
case 0x6edf55:c.instructions+=2;goto B6edf55;
case 0x6edf57:c.instructions+=1;goto B6edf57;
case 0x6edf5c:goto L6edf5c;
case 0x6edf60:c.instructions+=5;goto B6edf60;
case 0x6edf64:c.instructions+=4;goto B6edf64;
case 0x6edf65:c.instructions+=3;goto B6edf65;
case 0x6edf68:c.instructions+=2;goto B6edf68;
case 0x6edf6a:c.instructions+=1;goto B6edf6a;
case 0x6edf6c:goto L6edf6c;
case 0x6edf6d:c.instructions+=7;goto B6edf6d;
case 0x6edf74:c.instructions+=6;goto B6edf74;
case 0x6edf75:c.instructions+=5;goto B6edf75;
case 0x6edf76:c.instructions+=4;goto B6edf76;
case 0x6edf78:c.instructions+=3;goto B6edf78;
case 0x6edf79:c.instructions+=2;goto B6edf79;
case 0x6edf7c:c.instructions+=1;goto B6edf7c;
case 0x6edf80:goto L6edf80;
case 0x6edf84:c.instructions+=47;goto B6edf84;
case 0x6edf88:c.instructions+=46;goto B6edf88;
case 0x6edf8a:c.instructions+=45;goto B6edf8a;
case 0x6edf8d:c.instructions+=44;goto B6edf8d;
case 0x6edf91:c.instructions+=43;goto B6edf91;
case 0x6edf94:c.instructions+=42;goto B6edf94;
case 0x6edf97:c.instructions+=41;goto B6edf97;
case 0x6edf99:c.instructions+=40;goto B6edf99;
case 0x6edf9c:c.instructions+=39;goto B6edf9c;
case 0x6edf9f:c.instructions+=38;goto B6edf9f;
case 0x6edfa1:c.instructions+=37;goto B6edfa1;
case 0x6edfa4:c.instructions+=36;goto B6edfa4;
case 0x6edfa6:c.instructions+=35;goto B6edfa6;
case 0x6edfa8:c.instructions+=34;goto B6edfa8;
case 0x6edfaa:c.instructions+=33;goto B6edfaa;
case 0x6edfad:c.instructions+=32;goto B6edfad;
case 0x6edfb0:c.instructions+=31;goto B6edfb0;
case 0x6edfb3:c.instructions+=30;goto B6edfb3;
case 0x6edfb5:c.instructions+=29;goto B6edfb5;
case 0x6edfb7:c.instructions+=28;goto B6edfb7;
case 0x6edfba:c.instructions+=27;goto B6edfba;
case 0x6edfbc:c.instructions+=26;goto B6edfbc;
case 0x6edfbe:c.instructions+=25;goto B6edfbe;
case 0x6edfc1:c.instructions+=24;goto B6edfc1;
case 0x6edfc4:c.instructions+=23;goto B6edfc4;
case 0x6edfc6:c.instructions+=22;goto B6edfc6;
case 0x6edfc9:c.instructions+=21;goto B6edfc9;
case 0x6edfcc:c.instructions+=20;goto B6edfcc;
case 0x6edfcf:c.instructions+=19;goto B6edfcf;
case 0x6edfd2:c.instructions+=18;goto B6edfd2;
case 0x6edfd5:c.instructions+=17;goto B6edfd5;
case 0x6edfd7:c.instructions+=16;goto B6edfd7;
case 0x6edfda:c.instructions+=15;goto B6edfda;
case 0x6edfdc:c.instructions+=14;goto B6edfdc;
case 0x6edfde:c.instructions+=13;goto B6edfde;
case 0x6edfe1:c.instructions+=12;goto B6edfe1;
case 0x6edfe3:c.instructions+=11;goto B6edfe3;
case 0x6edfe5:c.instructions+=10;goto B6edfe5;
case 0x6edfe8:c.instructions+=9;goto B6edfe8;
case 0x6edfeb:c.instructions+=8;goto B6edfeb;
case 0x6edfee:c.instructions+=7;goto B6edfee;
case 0x6edff0:c.instructions+=6;goto B6edff0;
case 0x6edff2:c.instructions+=5;goto B6edff2;
case 0x6edff5:c.instructions+=4;goto B6edff5;
case 0x6edff8:c.instructions+=3;goto B6edff8;
case 0x6edffa:c.instructions+=2;goto B6edffa;
case 0x6edffd:c.instructions+=1;goto B6edffd;
default:missing_instruction(c.pc);}
B6ed003:L6ed003:{c.instructions+=1;NFSU2_TR(0x6ed003);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x6ecfd7u,6ec);}
}
B6ed005:L6ed005:{c.instructions+=4;NFSU2_TR(0x6ed005);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ed009:{NFSU2_TR(0x6ed009);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6ed00b:{NFSU2_TR(0x6ed00b);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6ed00d:{NFSU2_TR(0x6ed00d);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6ed1c7;}}
}
B6ed013:L6ed013:{c.instructions+=8;NFSU2_TR(0x6ed013);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B6ed017:{NFSU2_TR(0x6ed017);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6ed01a:{NFSU2_TR(0x6ed01a);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+20)))));
w8(U+8,u64(s64(s32(r4(R+0)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+20,u32(r8(U+16)));
}
B6ed01d:{NFSU2_TR(0x6ed01d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B6ed020:{NFSU2_TR(0x6ed020);
w4(R+20,u32(u32(r4(R+20))+u32(r4(R+28))));
}
B6ed022:{NFSU2_TR(0x6ed022);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+4))));
}
B6ed024:{NFSU2_TR(0x6ed024);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ed028:{NFSU2_TR(0x6ed028);
{goto L6ed030;}
}
B6ed030:L6ed030:{c.instructions+=3;NFSU2_TR(0x6ed030);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ed032:{NFSU2_TR(0x6ed032);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6ed03a:{NFSU2_TR(0x6ed03a);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6ed105;}}
}
B6ed040:L6ed040:{c.instructions+=3;NFSU2_TR(0x6ed040);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6ed042:{NFSU2_TR(0x6ed042);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ed046:{NFSU2_TR(0x6ed046);
{goto L6ed050;}
}
B6ed050:L6ed050:{c.instructions+=6;NFSU2_TR(0x6ed050);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ed054:{NFSU2_TR(0x6ed054);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ed057:{NFSU2_TR(0x6ed057);
u8 U[4];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B6ed05b:{NFSU2_TR(0x6ed05b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ed05c:{NFSU2_TR(0x6ed05c);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),r4(R+0)));
w1(R+523,scarry<u32>(r4(R+4),r4(R+0)));
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6ed05e:{NFSU2_TR(0x6ed05e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ed063ull));
TAIL_STATIC(0x6eca40u,6ec);
}
B6ed063:L6ed063:{c.instructions+=46;NFSU2_TR(0x6ed063);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+20))),1);
__builtin_memmove((R+0),(U+0),1);
}
B6ed066:{NFSU2_TR(0x6ed066);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B6ed06a:{NFSU2_TR(0x6ed06a);
w1(R+0,shr<u8>(r1(R+0),u64(u32(0x1ull))));
}
B6ed06c:{NFSU2_TR(0x6ed06c);
w4(R+4,u32(r1(R+0)));
}
B6ed06f:{NFSU2_TR(0x6ed06f);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B6ed073:{NFSU2_TR(0x6ed073);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ed077:{NFSU2_TR(0x6ed077);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ed07a:{NFSU2_TR(0x6ed07a);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x3ull))));
}
B6ed07d:{NFSU2_TR(0x6ed07d);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6ed081:{NFSU2_TR(0x6ed081);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ed085:{NFSU2_TR(0x6ed085);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6ed089:{NFSU2_TR(0x6ed089);
{u32 ea_=u32(u32(8134460u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6ed08f:{NFSU2_TR(0x6ed08f);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6ed093:{NFSU2_TR(0x6ed093);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6ed097:{NFSU2_TR(0x6ed097);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ed09b:{NFSU2_TR(0x6ed09b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6ed09e:{NFSU2_TR(0x6ed09e);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ed0a2:{NFSU2_TR(0x6ed0a2);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6ed0a6:{NFSU2_TR(0x6ed0a6);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6ed0a7:{NFSU2_TR(0x6ed0a7);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ed0ab:{NFSU2_TR(0x6ed0ab);
{u32 ea_=u32(u32(8134464u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6ed0b1:{NFSU2_TR(0x6ed0b1);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6ed0b5:{NFSU2_TR(0x6ed0b5);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6ed0b9:{NFSU2_TR(0x6ed0b9);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6ed0bd:{NFSU2_TR(0x6ed0bd);
{u32 ea_=u32(u32(8134464u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6ed0c3:{NFSU2_TR(0x6ed0c3);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6ed0c7:{NFSU2_TR(0x6ed0c7);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ed0cb:{NFSU2_TR(0x6ed0cb);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B6ed0cd:{NFSU2_TR(0x6ed0cd);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6ed0cf:{NFSU2_TR(0x6ed0cf);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ed0d1:{NFSU2_TR(0x6ed0d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ed0d4:{NFSU2_TR(0x6ed0d4);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B6ed0d8:{NFSU2_TR(0x6ed0d8);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6ed0da:{NFSU2_TR(0x6ed0da);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ed0de:{NFSU2_TR(0x6ed0de);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0xcull))));
}
B6ed0e1:{NFSU2_TR(0x6ed0e1);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ed0e5:{NFSU2_TR(0x6ed0e5);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ed0e7:{NFSU2_TR(0x6ed0e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ed0ea:{NFSU2_TR(0x6ed0ea);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ed0ee:{NFSU2_TR(0x6ed0ee);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B6ed0f2:{NFSU2_TR(0x6ed0f2);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6ed0f4:{NFSU2_TR(0x6ed0f4);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B6ed0f7:{NFSU2_TR(0x6ed0f7);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ed0f9:{NFSU2_TR(0x6ed0f9);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B6ed0fd:{NFSU2_TR(0x6ed0fd);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6ed0ff:{NFSU2_TR(0x6ed0ff);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ed050u);}goto L6ed050;}}
}
B6ed105:L6ed105:{c.instructions+=2;NFSU2_TR(0x6ed105);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6ed109:{NFSU2_TR(0x6ed109);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ed030u);}goto L6ed030;}}
}
B6ed10f:L6ed10f:{c.instructions+=11;NFSU2_TR(0x6ed10f);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B6ed113:{NFSU2_TR(0x6ed113);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ed117:{NFSU2_TR(0x6ed117);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ed11b:{NFSU2_TR(0x6ed11b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6ed11c:{NFSU2_TR(0x6ed11c);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B6ed11f:{NFSU2_TR(0x6ed11f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B6ed122:{NFSU2_TR(0x6ed122);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B6ed124:{NFSU2_TR(0x6ed124);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6ed126:{NFSU2_TR(0x6ed126);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ed128:{NFSU2_TR(0x6ed128);
__builtin_memmove((R+28),(R+0),4);
}
B6ed12a:{NFSU2_TR(0x6ed12a);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6ed331;}}
}
B6ed130:L6ed130:{c.instructions+=1;NFSU2_TR(0x6ed130);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B6ed132:L6ed132:{c.instructions+=24;NFSU2_TR(0x6ed132);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ed135:{NFSU2_TR(0x6ed135);
{u32 ea_=u32(r4(R+20)+r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ed139:{NFSU2_TR(0x6ed139);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+20))));
}
B6ed13b:{NFSU2_TR(0x6ed13b);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ed13e:{NFSU2_TR(0x6ed13e);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6ed140:{NFSU2_TR(0x6ed140);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ed142:{NFSU2_TR(0x6ed142);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
__builtin_memmove((R+0),(U+0),1);
}
B6ed144:{NFSU2_TR(0x6ed144);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B6ed146:{NFSU2_TR(0x6ed146);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B6ed148:{NFSU2_TR(0x6ed148);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B6ed14a:{NFSU2_TR(0x6ed14a);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B6ed14c:{NFSU2_TR(0x6ed14c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6ed14e:{NFSU2_TR(0x6ed14e);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x1ull))));
}
B6ed151:{NFSU2_TR(0x6ed151);
__asm__ volatile(".byte 0xd9,0xc3":::"memory");
}
B6ed153:{NFSU2_TR(0x6ed153);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ed157:{NFSU2_TR(0x6ed157);
__asm__ volatile(".byte 0xd8,0xcc":::"memory");
}
B6ed159:{NFSU2_TR(0x6ed159);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6ed15b:{NFSU2_TR(0x6ed15b);
__asm__ volatile(".byte 0xdd,0xdb":::"memory");
}
B6ed15d:{NFSU2_TR(0x6ed15d);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B6ed15f:{NFSU2_TR(0x6ed15f);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B6ed161:{NFSU2_TR(0x6ed161);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B6ed167:{NFSU2_TR(0x6ed167);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6ed169:{NFSU2_TR(0x6ed169);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6ed16c:{NFSU2_TR(0x6ed16c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ed193;}}
}
B6ed16e:L6ed16e:{c.instructions+=12;NFSU2_TR(0x6ed16e);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B6ed170:{NFSU2_TR(0x6ed170);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6ed177:{NFSU2_TR(0x6ed177);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B6ed17d:{NFSU2_TR(0x6ed17d);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B6ed17f:{NFSU2_TR(0x6ed17f);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6ed181:{NFSU2_TR(0x6ed181);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ed183:{NFSU2_TR(0x6ed183);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B6ed185:{NFSU2_TR(0x6ed185);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6ed188:{NFSU2_TR(0x6ed188);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ed18b:{NFSU2_TR(0x6ed18b);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6ed18e:{NFSU2_TR(0x6ed18e);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ed191:{NFSU2_TR(0x6ed191);
{goto L6ed1af;}
}
B6ed193:L6ed193:{c.instructions+=6;NFSU2_TR(0x6ed193);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B6ed199:{NFSU2_TR(0x6ed199);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ed19d:{NFSU2_TR(0x6ed19d);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ed19f:{NFSU2_TR(0x6ed19f);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B6ed1a1:{NFSU2_TR(0x6ed1a1);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B6ed1a4:{NFSU2_TR(0x6ed1a4);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6ed1ad;}}
}
B6ed1a6:L6ed1a6:{c.instructions+=3;NFSU2_TR(0x6ed1a6);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B6ed1a8:{NFSU2_TR(0x6ed1a8);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ed1ab:{NFSU2_TR(0x6ed1ab);
{goto L6ed1af;}
}
B6ed1ad:L6ed1ad:{c.instructions+=1;NFSU2_TR(0x6ed1ad);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B6ed1af:L6ed1af:{c.instructions+=6;NFSU2_TR(0x6ed1af);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B6ed1b3:{NFSU2_TR(0x6ed1b3);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x3ull))));
}
B6ed1b6:{NFSU2_TR(0x6ed1b6);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6ed1b7:{NFSU2_TR(0x6ed1b7);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x10ull))));
}
B6ed1ba:{NFSU2_TR(0x6ed1ba);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6ed1bc:{NFSU2_TR(0x6ed1bc);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ed132u);}goto L6ed132;}}
}
B6ed1c2:L6ed1c2:{c.instructions+=1;NFSU2_TR(0x6ed1c2);
{goto L6ed331;}
}
B6ed1c7:L6ed1c7:{c.instructions+=1;NFSU2_TR(0x6ed1c7);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6ed331;}}
}
B6ed1cd:L6ed1cd:{c.instructions+=10;NFSU2_TR(0x6ed1cd);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B6ed1d1:{NFSU2_TR(0x6ed1d1);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6ed1d4:{NFSU2_TR(0x6ed1d4);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+8)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B6ed1d7:{NFSU2_TR(0x6ed1d7);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ed1db:{NFSU2_TR(0x6ed1db);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B6ed1de:{NFSU2_TR(0x6ed1de);
u8 U[12];
w4(U+0,u32(u32(u32(0xfffffffdull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+20),(U+8),4);
}
B6ed1e2:{NFSU2_TR(0x6ed1e2);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xffffffffull))));
__builtin_memmove((R+0),(U+0),4);
}
B6ed1e5:{NFSU2_TR(0x6ed1e5);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ed1e9:{NFSU2_TR(0x6ed1e9);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6ed1eb:{NFSU2_TR(0x6ed1eb);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6ed2df;}}
}
B6ed1f1:L6ed1f1:{c.instructions+=5;NFSU2_TR(0x6ed1f1);
__builtin_memmove((R+8),(R+4),4);
}
B6ed1f3:{NFSU2_TR(0x6ed1f3);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B6ed1f5:{NFSU2_TR(0x6ed1f5);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6ed1f6:{NFSU2_TR(0x6ed1f6);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ed1fa:{NFSU2_TR(0x6ed1fa);
__builtin_memmove((R+12),(R+12),4);
}
B6ed200:L6ed200:{c.instructions+=3;NFSU2_TR(0x6ed200);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B6ed204:{NFSU2_TR(0x6ed204);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
}
B6ed205:{NFSU2_TR(0x6ed205);
if(r1(R+519)){{goto L6ed2d5;}}
}
B6ed20b:L6ed20b:{c.instructions+=8;NFSU2_TR(0x6ed20b);
__builtin_memmove((R+28),(R+0),4);
}
B6ed20d:{NFSU2_TR(0x6ed20d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6ed210:{NFSU2_TR(0x6ed210);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6ed213:{NFSU2_TR(0x6ed213);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B6ed216:{NFSU2_TR(0x6ed216);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6ed217:{NFSU2_TR(0x6ed217);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ed21b:{NFSU2_TR(0x6ed21b);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ed21f:{NFSU2_TR(0x6ed21f);
}
B6ed220:L6ed220:{c.instructions+=5;NFSU2_TR(0x6ed220);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ed223:{NFSU2_TR(0x6ed223);
u8 U[4];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B6ed227:{NFSU2_TR(0x6ed227);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ed228:{NFSU2_TR(0x6ed228);
u8 U[14];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,carry<u32>(r4(R+4),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,scarry<u32>(r4(R+4),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6ed22c:{NFSU2_TR(0x6ed22c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ed231ull));
TAIL_STATIC(0x6eca40u,6ec);
}
B6ed231:L6ed231:{c.instructions+=47;NFSU2_TR(0x6ed231);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+20))),1);
__builtin_memmove((R+4),(U+0),1);
}
B6ed234:{NFSU2_TR(0x6ed234);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B6ed238:{NFSU2_TR(0x6ed238);
w1(R+4,shr<u8>(r1(R+4),u64(u32(0x1ull))));
}
B6ed23a:{NFSU2_TR(0x6ed23a);
w4(R+8,u32(r1(R+4)));
}
B6ed23d:{NFSU2_TR(0x6ed23d);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B6ed241:{NFSU2_TR(0x6ed241);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ed245:{NFSU2_TR(0x6ed245);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ed248:{NFSU2_TR(0x6ed248);
w4(R+20,u32(u32(r4(R+20))-u32(u32(0x3ull))));
}
B6ed24b:{NFSU2_TR(0x6ed24b);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6ed24f:{NFSU2_TR(0x6ed24f);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ed253:{NFSU2_TR(0x6ed253);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6ed256:{NFSU2_TR(0x6ed256);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ed25a:{NFSU2_TR(0x6ed25a);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6ed25e:{NFSU2_TR(0x6ed25e);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0xcull))));
}
B6ed261:{NFSU2_TR(0x6ed261);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ed265:{NFSU2_TR(0x6ed265);
{u32 ea_=u32(u32(8134460u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6ed26b:{NFSU2_TR(0x6ed26b);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6ed26f:{NFSU2_TR(0x6ed26f);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6ed273:{NFSU2_TR(0x6ed273);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ed277:{NFSU2_TR(0x6ed277);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6ed27b:{NFSU2_TR(0x6ed27b);
{u32 ea_=u32(u32(8134464u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6ed281:{NFSU2_TR(0x6ed281);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6ed285:{NFSU2_TR(0x6ed285);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6ed289:{NFSU2_TR(0x6ed289);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6ed28d:{NFSU2_TR(0x6ed28d);
{u32 ea_=u32(u32(8134464u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6ed293:{NFSU2_TR(0x6ed293);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6ed297:{NFSU2_TR(0x6ed297);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ed29b:{NFSU2_TR(0x6ed29b);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ed29d:{NFSU2_TR(0x6ed29d);
__asm__ volatile(".byte 0xd8,0xe2":::"memory");
}
B6ed29f:{NFSU2_TR(0x6ed29f);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ed2a1:{NFSU2_TR(0x6ed2a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ed2a4:{NFSU2_TR(0x6ed2a4);
{u32 ea_=u32(r4(R+0)+r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ed2a8:{NFSU2_TR(0x6ed2a8);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B6ed2ac:{NFSU2_TR(0x6ed2ac);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B6ed2ae:{NFSU2_TR(0x6ed2ae);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ed2b0:{NFSU2_TR(0x6ed2b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ed2b3:{NFSU2_TR(0x6ed2b3);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B6ed2b7:{NFSU2_TR(0x6ed2b7);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B6ed2b9:{NFSU2_TR(0x6ed2b9);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x10ull))));
}
B6ed2bc:{NFSU2_TR(0x6ed2bc);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B6ed2be:{NFSU2_TR(0x6ed2be);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ed2c0:{NFSU2_TR(0x6ed2c0);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6ed2c4:{NFSU2_TR(0x6ed2c4);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ed2c6:{NFSU2_TR(0x6ed2c6);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ed2ca:{NFSU2_TR(0x6ed2ca);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6ed2cb:{NFSU2_TR(0x6ed2cb);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ed2cf:{NFSU2_TR(0x6ed2cf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ed220u);}goto L6ed220;}}
}
B6ed2d5:L6ed2d5:{c.instructions+=2;NFSU2_TR(0x6ed2d5);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6ed2d9:{NFSU2_TR(0x6ed2d9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ed200u);}goto L6ed200;}}
}
B6ed2df:L6ed2df:{c.instructions+=11;NFSU2_TR(0x6ed2df);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B6ed2e3:{NFSU2_TR(0x6ed2e3);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ed2e7:{NFSU2_TR(0x6ed2e7);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ed2eb:{NFSU2_TR(0x6ed2eb);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6ed2ec:{NFSU2_TR(0x6ed2ec);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B6ed2ef:{NFSU2_TR(0x6ed2ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B6ed2f2:{NFSU2_TR(0x6ed2f2);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B6ed2f4:{NFSU2_TR(0x6ed2f4);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B6ed2f6:{NFSU2_TR(0x6ed2f6);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6ed2f8:{NFSU2_TR(0x6ed2f8);
__builtin_memmove((R+28),(R+0),4);
}
B6ed2fa:{NFSU2_TR(0x6ed2fa);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6ed331;}}
}
B6ed2fc:L6ed2fc:{c.instructions+=1;NFSU2_TR(0x6ed2fc);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ed300:L6ed300:{c.instructions+=9;NFSU2_TR(0x6ed300);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ed303:{NFSU2_TR(0x6ed303);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ed307:{NFSU2_TR(0x6ed307);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6ed309:{NFSU2_TR(0x6ed309);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
__builtin_memmove((R+4),(U+0),1);
}
B6ed30b:{NFSU2_TR(0x6ed30b);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B6ed30d:{NFSU2_TR(0x6ed30d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ed30e:{NFSU2_TR(0x6ed30e);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x1ull))));
}
B6ed311:{NFSU2_TR(0x6ed311);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ed312:{NFSU2_TR(0x6ed312);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ed317ull));
TAIL_STATIC(0x6ecad0u,6ec);
}
B6ed317:L6ed317:{c.instructions+=9;NFSU2_TR(0x6ed317);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ed31b:{NFSU2_TR(0x6ed31b);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B6ed31f:{NFSU2_TR(0x6ed31f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B6ed322:{NFSU2_TR(0x6ed322);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x3ull))));
}
B6ed325:{NFSU2_TR(0x6ed325);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B6ed326:{NFSU2_TR(0x6ed326);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B6ed329:{NFSU2_TR(0x6ed329);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+20),r4(U+0)));
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6ed32b:{NFSU2_TR(0x6ed32b);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ed32f:{NFSU2_TR(0x6ed32f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ed300u);}goto L6ed300;}}
}
B6ed331:L6ed331:{c.instructions+=7;NFSU2_TR(0x6ed331);
u8 U[8];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ed335:{NFSU2_TR(0x6ed335);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ed338:{NFSU2_TR(0x6ed338);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ed33b:{NFSU2_TR(0x6ed33b);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6ed33d:{NFSU2_TR(0x6ed33d);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6ed33f:{NFSU2_TR(0x6ed33f);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6ed342:{NFSU2_TR(0x6ed342);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ed361;}}
}
B6ed344:L6ed344:{c.instructions+=6;NFSU2_TR(0x6ed344);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6ed348:{NFSU2_TR(0x6ed348);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ed34c:{NFSU2_TR(0x6ed34c);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B6ed34e:{NFSU2_TR(0x6ed34e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6ed350:{NFSU2_TR(0x6ed350);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6ed353:{NFSU2_TR(0x6ed353);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L6ed5df;}}
}
B6ed359:L6ed359:{c.instructions+=3;NFSU2_TR(0x6ed359);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ed35d:{NFSU2_TR(0x6ed35d);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B6ed35f:{NFSU2_TR(0x6ed35f);
{goto L6ed3c3;}
}
B6ed361:L6ed361:{c.instructions+=2;NFSU2_TR(0x6ed361);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6ed363:{NFSU2_TR(0x6ed363);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ed38f;}}
}
B6ed365:L6ed365:{c.instructions+=5;NFSU2_TR(0x6ed365);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ed369:{NFSU2_TR(0x6ed369);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B6ed36f:{NFSU2_TR(0x6ed36f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6ed371:{NFSU2_TR(0x6ed371);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6ed374:{NFSU2_TR(0x6ed374);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L6ed5e1;}}
}
B6ed37a:L6ed37a:{c.instructions+=6;NFSU2_TR(0x6ed37a);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+8))),2);
w4(R+0,u32(r2(U+0)));
}
B6ed37d:{NFSU2_TR(0x6ed37d);
u8 U[8];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ed381:{NFSU2_TR(0x6ed381);
{u32 ea_=u32(r4(R+16)+u32(108u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6ed385:{NFSU2_TR(0x6ed385);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B6ed389:{NFSU2_TR(0x6ed389);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ed38d:{NFSU2_TR(0x6ed38d);
{goto L6ed3c9;}
}
B6ed38f:L6ed38f:{c.instructions+=8;NFSU2_TR(0x6ed38f);
u8 U[14];
w4(U+0,u32(u32(u32(0xfffffffeull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
w4(R+0,u32(r2(U+12)));
}
B6ed394:{NFSU2_TR(0x6ed394);
u8 U[8];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ed398:{NFSU2_TR(0x6ed398);
{u32 ea_=u32(r4(R+16)+u32(108u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6ed39c:{NFSU2_TR(0x6ed39c);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ed3a0:{NFSU2_TR(0x6ed3a0);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B6ed3a2:{NFSU2_TR(0x6ed3a2);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6ed3a4:{NFSU2_TR(0x6ed3a4);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6ed3a7:{NFSU2_TR(0x6ed3a7);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L6ed5df;}}
}
B6ed3ad:L6ed3ad:{c.instructions+=7;NFSU2_TR(0x6ed3ad);
u8 U[10];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+8,u32(r2(U+8)));
}
B6ed3b1:{NFSU2_TR(0x6ed3b1);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ed3b5:{NFSU2_TR(0x6ed3b5);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B6ed3b7:{NFSU2_TR(0x6ed3b7);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ed3bb:{NFSU2_TR(0x6ed3bb);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6ed3bf:{NFSU2_TR(0x6ed3bf);
__asm__ volatile(".byte 0xd8,0xe2":::"memory");
}
B6ed3c1:{NFSU2_TR(0x6ed3c1);
__asm__ volatile(".byte 0xde,0xf9":::"memory");
}
B6ed3c3:L6ed3c3:{c.instructions+=2;NFSU2_TR(0x6ed3c3);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ed3c7:{NFSU2_TR(0x6ed3c7);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B6ed3c9:L6ed3c9:{c.instructions+=4;NFSU2_TR(0x6ed3c9);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B6ed3cd:{NFSU2_TR(0x6ed3cd);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B6ed3ce:{NFSU2_TR(0x6ed3ce);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6ed3d0:{NFSU2_TR(0x6ed3d0);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6ed5e1;}}
}
B6ed3d6:L6ed3d6:{c.instructions+=10;NFSU2_TR(0x6ed3d6);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ed3da:{NFSU2_TR(0x6ed3da);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ed3dd:{NFSU2_TR(0x6ed3dd);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+20,sar<u32>(r4(R+20),u64(r1(U+0))));
}
B6ed3df:{NFSU2_TR(0x6ed3df);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ed3e3:{NFSU2_TR(0x6ed3e3);
__builtin_memmove((R+0),(R+20),4);
}
B6ed3e5:{NFSU2_TR(0x6ed3e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6ed3e8:{NFSU2_TR(0x6ed3e8);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+20)))));
w8(U+8,u64(s64(s32(r4(R+0)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+20,u32(r8(U+16)));
}
B6ed3eb:{NFSU2_TR(0x6ed3eb);
w4(R+20,u32(u32(r4(R+20))+u32(r4(R+8))));
}
B6ed3ed:{NFSU2_TR(0x6ed3ed);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6ed3ef:{NFSU2_TR(0x6ed3ef);
if(r1(R+518)){{goto L6ed458;}}
}
B6ed3f1:L6ed3f1:{c.instructions+=3;NFSU2_TR(0x6ed3f1);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B6ed3f4:{NFSU2_TR(0x6ed3f4);
u8 U[1];
w1(R+512,u8(0x0ull));
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6ed3f6:{NFSU2_TR(0x6ed3f6);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6ed62d;}}
}
B6ed3fc:L6ed3fc:{c.instructions+=1;NFSU2_TR(0x6ed3fc);
u8 U[8];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ed400:L6ed400:{c.instructions+=4;NFSU2_TR(0x6ed400);
u8 U[4];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B6ed404:{NFSU2_TR(0x6ed404);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ed405:{NFSU2_TR(0x6ed405);
__builtin_memmove((R+4),(R+20),4);
}
B6ed407:{NFSU2_TR(0x6ed407);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ed40cull));
TAIL_STATIC(0x6ecb40u,6ec);
}
B6ed40c:L6ed40c:{c.instructions+=13;NFSU2_TR(0x6ed40c);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ed410:{NFSU2_TR(0x6ed410);
u8 U[9];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+0,u32(r1(U+8)));
}
B6ed414:{NFSU2_TR(0x6ed414);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ed418:{NFSU2_TR(0x6ed418);
u8 U[8];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ed41c:{NFSU2_TR(0x6ed41c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6ed41f:{NFSU2_TR(0x6ed41f);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6ed422:{NFSU2_TR(0x6ed422);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B6ed426:{NFSU2_TR(0x6ed426);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ed429:{NFSU2_TR(0x6ed429);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B6ed42b:{NFSU2_TR(0x6ed42b);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ed42f:{NFSU2_TR(0x6ed42f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ed430:{NFSU2_TR(0x6ed430);
u8 U[4];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B6ed434:{NFSU2_TR(0x6ed434);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ed439ull));
TAIL_STATIC(0x6ecc80u,6ec);
}
B6ed439:L6ed439:{c.instructions+=9;NFSU2_TR(0x6ed439);
u8 U[8];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ed43d:{NFSU2_TR(0x6ed43d);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B6ed441:{NFSU2_TR(0x6ed441);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6ed444:{NFSU2_TR(0x6ed444);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6ed445:{NFSU2_TR(0x6ed445);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x10ull))));
}
B6ed448:{NFSU2_TR(0x6ed448);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x6ull))));
}
B6ed44b:{NFSU2_TR(0x6ed44b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6ed44d:{NFSU2_TR(0x6ed44d);
u8 U[8];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ed451:{NFSU2_TR(0x6ed451);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ed400u);}goto L6ed400;}}
}
B6ed453:L6ed453:{c.instructions+=1;NFSU2_TR(0x6ed453);
{goto L6ed62d;}
}
B6ed458:L6ed458:{c.instructions+=9;NFSU2_TR(0x6ed458);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B6ed45c:{NFSU2_TR(0x6ed45c);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ed460:{NFSU2_TR(0x6ed460);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
}
B6ed463:{NFSU2_TR(0x6ed463);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B6ed466:{NFSU2_TR(0x6ed466);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B6ed46a:{NFSU2_TR(0x6ed46a);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B6ed46c:{NFSU2_TR(0x6ed46c);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6ed46e:{NFSU2_TR(0x6ed46e);
u8 U[8];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ed472:{NFSU2_TR(0x6ed472);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6ed62d;}}
}
B6ed478:L6ed478:{c.instructions+=2;NFSU2_TR(0x6ed478);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ed47c:{NFSU2_TR(0x6ed47c);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ed480:L6ed480:{c.instructions+=6;NFSU2_TR(0x6ed480);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ed484:{NFSU2_TR(0x6ed484);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ed487:{NFSU2_TR(0x6ed487);
u8 U[4];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B6ed48b:{NFSU2_TR(0x6ed48b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ed48c:{NFSU2_TR(0x6ed48c);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),r4(R+8)));
w1(R+523,scarry<u32>(r4(R+4),r4(R+8)));
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6ed48e:{NFSU2_TR(0x6ed48e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ed493ull));
TAIL_STATIC(0x6eca40u,6ec);
}
B6ed493:L6ed493:{c.instructions+=45;NFSU2_TR(0x6ed493);
u8 U[8];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6ed497:{NFSU2_TR(0x6ed497);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+20))),1);
__builtin_memmove((R+4),(U+0),1);
}
B6ed49a:{NFSU2_TR(0x6ed49a);
__builtin_memmove((R+8),(R+4),1);
}
B6ed49c:{NFSU2_TR(0x6ed49c);
w1(R+8,shr<u8>(r1(R+8),u64(u32(0x1ull))));
}
B6ed49e:{NFSU2_TR(0x6ed49e);
w4(R+0,u32(r1(R+8)));
}
B6ed4a1:{NFSU2_TR(0x6ed4a1);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B6ed4a5:{NFSU2_TR(0x6ed4a5);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ed4a9:{NFSU2_TR(0x6ed4a9);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B6ed4ad:{NFSU2_TR(0x6ed4ad);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6ed4b1:{NFSU2_TR(0x6ed4b1);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ed4b5:{NFSU2_TR(0x6ed4b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ed4b8:{NFSU2_TR(0x6ed4b8);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6ed4bc:{NFSU2_TR(0x6ed4bc);
{u32 ea_=u32(u32(8134460u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6ed4c2:{NFSU2_TR(0x6ed4c2);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6ed4c6:{NFSU2_TR(0x6ed4c6);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6ed4ca:{NFSU2_TR(0x6ed4ca);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ed4ce:{NFSU2_TR(0x6ed4ce);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ed4d2:{NFSU2_TR(0x6ed4d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+20),(U+4),4);
}
B6ed4d5:{NFSU2_TR(0x6ed4d5);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6ed4d9:{NFSU2_TR(0x6ed4d9);
{u32 ea_=u32(u32(8134464u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6ed4df:{NFSU2_TR(0x6ed4df);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6ed4e3:{NFSU2_TR(0x6ed4e3);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6ed4e7:{NFSU2_TR(0x6ed4e7);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6ed4eb:{NFSU2_TR(0x6ed4eb);
{u32 ea_=u32(u32(8134464u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6ed4f1:{NFSU2_TR(0x6ed4f1);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6ed4f5:{NFSU2_TR(0x6ed4f5);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ed4f9:{NFSU2_TR(0x6ed4f9);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B6ed4fb:{NFSU2_TR(0x6ed4fb);
{u32 ea_=u32(r4(R+20));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6ed4fe:{NFSU2_TR(0x6ed4fe);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ed502:{NFSU2_TR(0x6ed502);
{u32 ea_=u32(r4(R+20)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6ed505:{NFSU2_TR(0x6ed505);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ed509:{NFSU2_TR(0x6ed509);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ed50d:{NFSU2_TR(0x6ed50d);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6ed510:{NFSU2_TR(0x6ed510);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B6ed514:{NFSU2_TR(0x6ed514);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6ed518:{NFSU2_TR(0x6ed518);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ed51c:{NFSU2_TR(0x6ed51c);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6ed520:{NFSU2_TR(0x6ed520);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6ed522:{NFSU2_TR(0x6ed522);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ed526:{NFSU2_TR(0x6ed526);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6ed52a:{NFSU2_TR(0x6ed52a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6ed52c:{NFSU2_TR(0x6ed52c);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B6ed532:{NFSU2_TR(0x6ed532);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6ed534:{NFSU2_TR(0x6ed534);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6ed537:{NFSU2_TR(0x6ed537);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ed567;}}
}
B6ed539:L6ed539:{c.instructions+=12;NFSU2_TR(0x6ed539);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B6ed53b:{NFSU2_TR(0x6ed53b);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6ed543:{NFSU2_TR(0x6ed543);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B6ed549:{NFSU2_TR(0x6ed549);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ed54d:{NFSU2_TR(0x6ed54d);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B6ed54f:{NFSU2_TR(0x6ed54f);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ed553:{NFSU2_TR(0x6ed553);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ed557:{NFSU2_TR(0x6ed557);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B6ed559:{NFSU2_TR(0x6ed559);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ed55d:{NFSU2_TR(0x6ed55d);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6ed561:{NFSU2_TR(0x6ed561);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ed565:{NFSU2_TR(0x6ed565);
{goto L6ed586;}
}
B6ed567:L6ed567:{c.instructions+=7;NFSU2_TR(0x6ed567);
u8 U[1];
w1(R+512,u8(0x0ull));
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6ed56a:{NFSU2_TR(0x6ed56a);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ed570:{NFSU2_TR(0x6ed570);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B6ed572:{NFSU2_TR(0x6ed572);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B6ed574:{NFSU2_TR(0x6ed574);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ed578:{NFSU2_TR(0x6ed578);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B6ed57a:{NFSU2_TR(0x6ed57a);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6ed586;}}
}
B6ed57c:L6ed57c:{c.instructions+=3;NFSU2_TR(0x6ed57c);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ed580:{NFSU2_TR(0x6ed580);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B6ed582:{NFSU2_TR(0x6ed582);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ed586:L6ed586:{c.instructions+=11;NFSU2_TR(0x6ed586);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ed58a:{NFSU2_TR(0x6ed58a);
u8 U[9];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+0,u32(r1(U+8)));
}
B6ed58e:{NFSU2_TR(0x6ed58e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B6ed591:{NFSU2_TR(0x6ed591);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ed595:{NFSU2_TR(0x6ed595);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B6ed598:{NFSU2_TR(0x6ed598);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B6ed59c:{NFSU2_TR(0x6ed59c);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ed5a0:{NFSU2_TR(0x6ed5a0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ed5a1:{NFSU2_TR(0x6ed5a1);
u8 U[4];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B6ed5a5:{NFSU2_TR(0x6ed5a5);
__builtin_memmove((R+0),(R+20),4);
}
B6ed5a7:{NFSU2_TR(0x6ed5a7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ed5acull));
TAIL_STATIC(0x6ecc80u,6ec);
}
B6ed5ac:L6ed5ac:{c.instructions+=14;NFSU2_TR(0x6ed5ac);
u8 U[8];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ed5b0:{NFSU2_TR(0x6ed5b0);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6ed5b4:{NFSU2_TR(0x6ed5b4);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ed5b8:{NFSU2_TR(0x6ed5b8);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B6ed5bc:{NFSU2_TR(0x6ed5bc);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x3ull))));
}
B6ed5bf:{NFSU2_TR(0x6ed5bf);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6ed5c2:{NFSU2_TR(0x6ed5c2);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6ed5c3:{NFSU2_TR(0x6ed5c3);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0xcull))));
}
B6ed5c6:{NFSU2_TR(0x6ed5c6);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x10ull))));
}
B6ed5c9:{NFSU2_TR(0x6ed5c9);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6ed5cb:{NFSU2_TR(0x6ed5cb);
u8 U[8];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ed5cf:{NFSU2_TR(0x6ed5cf);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ed5d3:{NFSU2_TR(0x6ed5d3);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ed5d7:{NFSU2_TR(0x6ed5d7);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ed480u);}goto L6ed480;}}
}
B6ed5dd:L6ed5dd:{c.instructions+=1;NFSU2_TR(0x6ed5dd);
{goto L6ed62d;}
}
B6ed5df:L6ed5df:{c.instructions+=1;NFSU2_TR(0x6ed5df);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B6ed5e1:L6ed5e1:{c.instructions+=4;NFSU2_TR(0x6ed5e1);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B6ed5e4:{NFSU2_TR(0x6ed5e4);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6ed5e6:{NFSU2_TR(0x6ed5e6);
u8 U[1];
w1(R+512,u8(0x0ull));
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6ed5e8:{NFSU2_TR(0x6ed5e8);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6ed62d;}}
}
B6ed5ea:L6ed5ea:{c.instructions+=2;NFSU2_TR(0x6ed5ea);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6ed5ec:{NFSU2_TR(0x6ed5ec);
__builtin_memmove((R+16),(R+16),4);
}
B6ed5f0:L6ed5f0:{c.instructions+=21;NFSU2_TR(0x6ed5f0);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ed5f4:{NFSU2_TR(0x6ed5f4);
u8 U[9];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+4,u32(r1(U+8)));
}
B6ed5f8:{NFSU2_TR(0x6ed5f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6ed5fb:{NFSU2_TR(0x6ed5fb);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6ed5ff:{NFSU2_TR(0x6ed5ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6ed602:{NFSU2_TR(0x6ed602);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6ed605:{NFSU2_TR(0x6ed605);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+8))));
}
B6ed607:{NFSU2_TR(0x6ed607);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B6ed60b:{NFSU2_TR(0x6ed60b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+20),(U+0),4);
}
B6ed60d:{NFSU2_TR(0x6ed60d);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6ed60f:{NFSU2_TR(0x6ed60f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6ed612:{NFSU2_TR(0x6ed612);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ed615:{NFSU2_TR(0x6ed615);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6ed618:{NFSU2_TR(0x6ed618);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ed61b:{NFSU2_TR(0x6ed61b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6ed61e:{NFSU2_TR(0x6ed61e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ed621:{NFSU2_TR(0x6ed621);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B6ed625:{NFSU2_TR(0x6ed625);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6ed626:{NFSU2_TR(0x6ed626);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x10ull))));
}
B6ed629:{NFSU2_TR(0x6ed629);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6ed62b:{NFSU2_TR(0x6ed62b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ed5f0u);}goto L6ed5f0;}}
}
B6ed62d:L6ed62d:{c.instructions+=3;NFSU2_TR(0x6ed62d);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x7ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B6ed630:{NFSU2_TR(0x6ed630);
u8 U[1];
w1(R+512,u8(0x0ull));
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6ed632:{NFSU2_TR(0x6ed632);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6ed66c;}}
}
B6ed634:L6ed634:{c.instructions+=3;NFSU2_TR(0x6ed634);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6ed636:{NFSU2_TR(0x6ed636);
u8 U[1];
w1(R+512,u8(0x0ull));
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6ed638:{NFSU2_TR(0x6ed638);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6ed66c;}}
}
B6ed63a:L6ed63a:{c.instructions+=2;NFSU2_TR(0x6ed63a);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B6ed63c:{NFSU2_TR(0x6ed63c);
__builtin_memmove((R+16),(R+16),4);
}
B6ed640:L6ed640:{c.instructions+=10;NFSU2_TR(0x6ed640);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ed643:{NFSU2_TR(0x6ed643);
u8 U[9];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+0,u32(r1(U+8)));
}
B6ed647:{NFSU2_TR(0x6ed647);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ed64b:{NFSU2_TR(0x6ed64b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6ed64e:{NFSU2_TR(0x6ed64e);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6ed651:{NFSU2_TR(0x6ed651);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B6ed655:{NFSU2_TR(0x6ed655);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ed658:{NFSU2_TR(0x6ed658);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ed659:{NFSU2_TR(0x6ed659);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+20))));
}
B6ed65b:{NFSU2_TR(0x6ed65b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ed660ull));
TAIL_STATIC(0x6ecb40u,6ec);
}
B6ed660:L6ed660:{c.instructions+=5;NFSU2_TR(0x6ed660);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x7ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B6ed664:{NFSU2_TR(0x6ed664);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6ed665:{NFSU2_TR(0x6ed665);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x6ull))));
}
B6ed668:{NFSU2_TR(0x6ed668);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6ed66a:{NFSU2_TR(0x6ed66a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ed640u);}goto L6ed640;}}
}
B6ed66c:L6ed66c:{c.instructions+=7;NFSU2_TR(0x6ed66c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6ed66d:{NFSU2_TR(0x6ed66d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6ed66e:{NFSU2_TR(0x6ed66e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6ed66f:{NFSU2_TR(0x6ed66f);
w1(R+0,u8(0x1ull));
}
B6ed671:{NFSU2_TR(0x6ed671);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6ed672:{NFSU2_TR(0x6ed672);
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
B6ed675:{NFSU2_TR(0x6ed675);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6ed680:L6ed680:{c.instructions+=7;NFSU2_TR(0x6ed680);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x54ull))));
}
B6ed683:{NFSU2_TR(0x6ed683);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ed684:{NFSU2_TR(0x6ed684);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ed685:{NFSU2_TR(0x6ed685);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ed686:{NFSU2_TR(0x6ed686);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ed687:{NFSU2_TR(0x6ed687);
__builtin_memmove((R+24),(R+4),4);
}
B6ed689:{NFSU2_TR(0x6ed689);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ed68eull));
TAIL_STATIC(0x6ecdf0u,6ec);
}
B6ed68e:L6ed68e:{c.instructions+=5;NFSU2_TR(0x6ed68e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ed691:{NFSU2_TR(0x6ed691);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B6ed694:{NFSU2_TR(0x6ed694);
u8 U[1];
w1(R+512,u8(0x0ull));
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6ed696:{NFSU2_TR(0x6ed696);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ed69a:{NFSU2_TR(0x6ed69a);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6edf0a;}}
}
B6ed6a0:L6ed6a0:{c.instructions+=3;NFSU2_TR(0x6ed6a0);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ed6a4:{NFSU2_TR(0x6ed6a4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ed6a5:{NFSU2_TR(0x6ed6a5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ed6aaull));
TAIL_STATIC(0x6e4900u,6e4);
}
B6ed6aa:L6ed6aa:{c.instructions+=6;NFSU2_TR(0x6ed6aa);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6ed6ae:{NFSU2_TR(0x6ed6ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ed6b1:{NFSU2_TR(0x6ed6b1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6ed6b4:{NFSU2_TR(0x6ed6b4);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ed6b6:{NFSU2_TR(0x6ed6b6);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ed6ba:{NFSU2_TR(0x6ed6ba);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ed6d5;}}
}
B6ed6bc:L6ed6bc:{c.instructions+=2;NFSU2_TR(0x6ed6bc);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6ed6be:{NFSU2_TR(0x6ed6be);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6ed6c4;}}
}
B6ed6c0:L6ed6c0:{c.instructions+=2;NFSU2_TR(0x6ed6c0);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B6ed6c2:{NFSU2_TR(0x6ed6c2);
{goto L6ed732;}
}
B6ed6c4:L6ed6c4:{c.instructions+=3;NFSU2_TR(0x6ed6c4);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B6ed6c8:{NFSU2_TR(0x6ed6c8);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6ed6ca:{NFSU2_TR(0x6ed6ca);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6ed6d1;}}
}
B6ed6cc:L6ed6cc:{c.instructions+=2;NFSU2_TR(0x6ed6cc);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xffffffffull))));
__builtin_memmove((R+20),(U+0),4);
}
B6ed6cf:{NFSU2_TR(0x6ed6cf);
{goto L6ed732;}
}
B6ed6d1:L6ed6d1:{c.instructions+=2;NFSU2_TR(0x6ed6d1);
__builtin_memmove((R+20),(R+0),4);
}
B6ed6d3:{NFSU2_TR(0x6ed6d3);
{goto L6ed732;}
}
B6ed6d5:L6ed6d5:{c.instructions+=3;NFSU2_TR(0x6ed6d5);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+8))),2);
w4(R+4,u32(r2(U+0)));
}
B6ed6d8:{NFSU2_TR(0x6ed6d8);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6ed6da:{NFSU2_TR(0x6ed6da);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6ed6e0;}}
}
B6ed6dc:L6ed6dc:{c.instructions+=2;NFSU2_TR(0x6ed6dc);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B6ed6de:{NFSU2_TR(0x6ed6de);
{goto L6ed732;}
}
B6ed6e0:L6ed6e0:{c.instructions+=3;NFSU2_TR(0x6ed6e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ed6e3:{NFSU2_TR(0x6ed6e3);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6ed6e6:{NFSU2_TR(0x6ed6e6);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6ed6ec;}}
}
B6ed6e8:L6ed6e8:{c.instructions+=2;NFSU2_TR(0x6ed6e8);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6ed6ea:{NFSU2_TR(0x6ed6ea);
{goto L6ed6ed;}
}
B6ed6ec:L6ed6ec:{c.instructions+=1;NFSU2_TR(0x6ed6ec);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B6ed6ed:L6ed6ed:{c.instructions+=4;NFSU2_TR(0x6ed6ed);
u8 U[10];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+12,u32(r2(U+8)));
}
B6ed6f1:{NFSU2_TR(0x6ed6f1);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6ed6f3:{NFSU2_TR(0x6ed6f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B6ed6f6:{NFSU2_TR(0x6ed6f6);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L6ed717;}}
}
B6ed6f8:L6ed6f8:{c.instructions+=4;NFSU2_TR(0x6ed6f8);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(r2(U+4)));
}
B6ed6fc:{NFSU2_TR(0x6ed6fc);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0xfffffffeull))));
}
B6ed6ff:{NFSU2_TR(0x6ed6ff);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6ed701:{NFSU2_TR(0x6ed701);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6ed72f;}}
}
B6ed703:L6ed703:{c.instructions+=1;NFSU2_TR(0x6ed703);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x2ull))));
}
B6ed706:L6ed706:{c.instructions+=3;NFSU2_TR(0x6ed706);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+8))),2);
w4(R+12,u32(r2(U+0)));
}
B6ed709:{NFSU2_TR(0x6ed709);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6ed70b:{NFSU2_TR(0x6ed70b);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L6ed72f;}}
}
B6ed70d:L6ed70d:{c.instructions+=4;NFSU2_TR(0x6ed70d);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6ed70e:{NFSU2_TR(0x6ed70e);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x2ull))));
}
B6ed711:{NFSU2_TR(0x6ed711);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6ed713:{NFSU2_TR(0x6ed713);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ed706u);}goto L6ed706;}}
}
B6ed715:L6ed715:{c.instructions+=1;NFSU2_TR(0x6ed715);
{goto L6ed72f;}
}
B6ed717:L6ed717:{c.instructions+=2;NFSU2_TR(0x6ed717);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ed719:{NFSU2_TR(0x6ed719);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6ed72f;}}
}
B6ed71b:L6ed71b:{c.instructions+=1;NFSU2_TR(0x6ed71b);
{goto L6ed720;}
}
B6ed720:L6ed720:{c.instructions+=3;NFSU2_TR(0x6ed720);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+8))),2);
w4(R+28,u32(r2(U+0)));
}
B6ed723:{NFSU2_TR(0x6ed723);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6ed725:{NFSU2_TR(0x6ed725);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6ed72f;}}
}
B6ed727:L6ed727:{c.instructions+=4;NFSU2_TR(0x6ed727);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B6ed728:{NFSU2_TR(0x6ed728);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x2ull))));
}
B6ed72b:{NFSU2_TR(0x6ed72b);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ed72d:{NFSU2_TR(0x6ed72d);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ed720u);}goto L6ed720;}}
}
B6ed72f:L6ed72f:{c.instructions+=1;NFSU2_TR(0x6ed72f);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6ed732:L6ed732:{c.instructions+=29;NFSU2_TR(0x6ed732);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ed736:{NFSU2_TR(0x6ed736);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B6ed73a:{NFSU2_TR(0x6ed73a);
w4(R+4,u32(0x1full));
}
B6ed73f:{NFSU2_TR(0x6ed73f);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+8))));
}
B6ed741:{NFSU2_TR(0x6ed741);
w4(R+12,u32(0x7fffffffull));
}
B6ed746:{NFSU2_TR(0x6ed746);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+12,shr<u32>(r4(R+12),u64(r1(U+0))));
}
B6ed748:{NFSU2_TR(0x6ed748);
__builtin_memmove((R+4),(R+8),4);
}
B6ed74a:{NFSU2_TR(0x6ed74a);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ed74e:{NFSU2_TR(0x6ed74e);
__builtin_memmove((R+28),(R+20),4);
}
B6ed750:{NFSU2_TR(0x6ed750);
__builtin_memmove((R+0),(R+12),4);
}
B6ed752:{NFSU2_TR(0x6ed752);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+20))));
}
B6ed754:{NFSU2_TR(0x6ed754);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+28,sar<u32>(r4(R+28),u64(r1(U+0))));
}
B6ed756:{NFSU2_TR(0x6ed756);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ed75a:{NFSU2_TR(0x6ed75a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ed75d:{NFSU2_TR(0x6ed75d);
__builtin_memmove((R+8),(R+0),4);
}
B6ed75f:{NFSU2_TR(0x6ed75f);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r1(U+0))));
}
B6ed761:{NFSU2_TR(0x6ed761);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ed764:{NFSU2_TR(0x6ed764);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(r4(R+28)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B6ed767:{NFSU2_TR(0x6ed767);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ed76b:{NFSU2_TR(0x6ed76b);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ed76f:{NFSU2_TR(0x6ed76f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B6ed772:{NFSU2_TR(0x6ed772);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+20),r4(U+0)));
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6ed774:{NFSU2_TR(0x6ed774);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ed778:{NFSU2_TR(0x6ed778);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ed77c:{NFSU2_TR(0x6ed77c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ed77f:{NFSU2_TR(0x6ed77f);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ed783:{NFSU2_TR(0x6ed783);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ed787:{NFSU2_TR(0x6ed787);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ed78b:{NFSU2_TR(0x6ed78b);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6ed79b;}}
}
B6ed78d:L6ed78d:{c.instructions+=3;NFSU2_TR(0x6ed78d);
__builtin_memmove((R+4),gp(0x811e32),1);
}
B6ed793:{NFSU2_TR(0x6ed793);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6ed795:{NFSU2_TR(0x6ed795);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ed79b;}}
}
B6ed797:L6ed797:{c.instructions+=2;NFSU2_TR(0x6ed797);
w1(R+4,u8(0x1ull));
}
B6ed799:{NFSU2_TR(0x6ed799);
{goto L6ed79d;}
}
B6ed79b:L6ed79b:{c.instructions+=1;NFSU2_TR(0x6ed79b);
w1(R+4,u8(u32(r1(R+4))^u32(r1(R+4))));
}
B6ed79d:L6ed79d:{c.instructions+=2;NFSU2_TR(0x6ed79d);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6ed7a0:{NFSU2_TR(0x6ed7a0);
if(r1(R+518)){{goto L6ed7ba;}}
}
B6ed7a2:L6ed7a2:{c.instructions+=2;NFSU2_TR(0x6ed7a2);
u8 U[16];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+28))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ed7a6:{NFSU2_TR(0x6ed7a6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ed7ba;}}
}
B6ed7a8:L6ed7a8:{c.instructions+=3;NFSU2_TR(0x6ed7a8);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ed7ac:{NFSU2_TR(0x6ed7ac);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ed7ae:{NFSU2_TR(0x6ed7ae);
if(r1(R+518)){{goto L6ed7ba;}}
}
B6ed7b0:L6ed7b0:{c.instructions+=2;NFSU2_TR(0x6ed7b0);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6ed7b2:{NFSU2_TR(0x6ed7b2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ed7ba;}}
}
B6ed7b4:L6ed7b4:{c.instructions+=3;NFSU2_TR(0x6ed7b4);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+12))));
}
B6ed7b6:{NFSU2_TR(0x6ed7b6);
__builtin_memmove((R+4),(R+0),4);
}
B6ed7b8:{NFSU2_TR(0x6ed7b8);
{goto L6ed816;}
}
B6ed7ba:L6ed7ba:{c.instructions+=5;NFSU2_TR(0x6ed7ba);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ed7be:{NFSU2_TR(0x6ed7be);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B6ed7c1:{NFSU2_TR(0x6ed7c1);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6ed7c3:{NFSU2_TR(0x6ed7c3);
u8 U[1];
w1(R+512,u8(0x0ull));
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6ed7c5:{NFSU2_TR(0x6ed7c5);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6ed810;}}
}
B6ed7c7:L6ed7c7:{c.instructions+=3;NFSU2_TR(0x6ed7c7);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6ed7cb:{NFSU2_TR(0x6ed7cb);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6ed7cd:{NFSU2_TR(0x6ed7cd);
__builtin_memmove((R+4),(R+4),4);
}
B6ed7d0:L6ed7d0:{c.instructions+=10;NFSU2_TR(0x6ed7d0);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ed7d4:{NFSU2_TR(0x6ed7d4);
u8 U[9];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+0,u32(r1(U+8)));
}
B6ed7d8:{NFSU2_TR(0x6ed7d8);
__builtin_memmove((R+4),(R+0),4);
}
B6ed7da:{NFSU2_TR(0x6ed7da);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x1full))));
}
B6ed7dd:{NFSU2_TR(0x6ed7dd);
w4(R+8,u32(0x1ull));
}
B6ed7e2:{NFSU2_TR(0x6ed7e2);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r1(U+0))));
}
B6ed7e4:{NFSU2_TR(0x6ed7e4);
u8 U[8];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ed7e8:{NFSU2_TR(0x6ed7e8);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B6ed7eb:{NFSU2_TR(0x6ed7eb);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w4(U+12,u32(u32(r4(U+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ed7ee:{NFSU2_TR(0x6ed7ee);
if(r1(R+518)){{goto L6ed7fd;}}
}
B6ed7f0:L6ed7f0:{c.instructions+=5;NFSU2_TR(0x6ed7f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ed7f3:{NFSU2_TR(0x6ed7f3);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+12))));
}
B6ed7f5:{NFSU2_TR(0x6ed7f5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ed7f6:{NFSU2_TR(0x6ed7f6);
__builtin_memmove((R+4),(R+20),4);
}
B6ed7f8:{NFSU2_TR(0x6ed7f8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ed7fdull));
TAIL_STATIC(0x6ecb40u,6ec);
}
B6ed7fd:L6ed7fd:{c.instructions+=7;NFSU2_TR(0x6ed7fd);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ed801:{NFSU2_TR(0x6ed801);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B6ed805:{NFSU2_TR(0x6ed805);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6ed806:{NFSU2_TR(0x6ed806);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x10ull))));
}
B6ed809:{NFSU2_TR(0x6ed809);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x6ull))));
}
B6ed80c:{NFSU2_TR(0x6ed80c);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6ed80e:{NFSU2_TR(0x6ed80e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ed7d0u);}goto L6ed7d0;}}
}
B6ed810:L6ed810:{c.instructions+=2;NFSU2_TR(0x6ed810);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ed814:{NFSU2_TR(0x6ed814);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6ed816:L6ed816:{c.instructions+=2;NFSU2_TR(0x6ed816);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6ed818:{NFSU2_TR(0x6ed818);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6eda05;}}
}
B6ed81e:L6ed81e:{c.instructions+=10;NFSU2_TR(0x6ed81e);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ed822:{NFSU2_TR(0x6ed822);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B6ed826:{NFSU2_TR(0x6ed826);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6ed82a:{NFSU2_TR(0x6ed82a);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6ed82d:{NFSU2_TR(0x6ed82d);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+20)))));
w8(U+8,u64(s64(s32(r4(R+0)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+20,u32(r8(U+16)));
}
B6ed830:{NFSU2_TR(0x6ed830);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B6ed833:{NFSU2_TR(0x6ed833);
w4(R+20,u32(u32(r4(R+20))+u32(r4(R+28))));
}
B6ed835:{NFSU2_TR(0x6ed835);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+4))));
}
B6ed837:{NFSU2_TR(0x6ed837);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ed83b:{NFSU2_TR(0x6ed83b);
{goto L6ed840;}
}
B6ed840:L6ed840:{c.instructions+=3;NFSU2_TR(0x6ed840);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6ed842:{NFSU2_TR(0x6ed842);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ed844:{NFSU2_TR(0x6ed844);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6ed923;}}
}
B6ed84a:L6ed84a:{c.instructions+=2;NFSU2_TR(0x6ed84a);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6ed84c:{NFSU2_TR(0x6ed84c);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ed850:L6ed850:{c.instructions+=10;NFSU2_TR(0x6ed850);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ed854:{NFSU2_TR(0x6ed854);
u8 U[9];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+0,u32(r1(U+8)));
}
B6ed858:{NFSU2_TR(0x6ed858);
__builtin_memmove((R+4),(R+0),4);
}
B6ed85a:{NFSU2_TR(0x6ed85a);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x1full))));
}
B6ed85d:{NFSU2_TR(0x6ed85d);
w4(R+8,u32(0x1ull));
}
B6ed862:{NFSU2_TR(0x6ed862);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r1(U+0))));
}
B6ed864:{NFSU2_TR(0x6ed864);
u8 U[8];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ed868:{NFSU2_TR(0x6ed868);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B6ed86b:{NFSU2_TR(0x6ed86b);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w4(U+12,u32(u32(r4(U+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ed86e:{NFSU2_TR(0x6ed86e);
if(r1(R+518)){{goto L6ed901;}}
}
B6ed874:L6ed874:{c.instructions+=5;NFSU2_TR(0x6ed874);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ed877:{NFSU2_TR(0x6ed877);
u8 U[4];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B6ed87b:{NFSU2_TR(0x6ed87b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ed87c:{NFSU2_TR(0x6ed87c);
u8 U[14];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,carry<u32>(r4(R+4),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,scarry<u32>(r4(R+4),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6ed880:{NFSU2_TR(0x6ed880);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ed885ull));
TAIL_STATIC(0x6eca40u,6ec);
}
B6ed885:L6ed885:{c.instructions+=35;NFSU2_TR(0x6ed885);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+20))),1);
__builtin_memmove((R+0),(U+0),1);
}
B6ed888:{NFSU2_TR(0x6ed888);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B6ed88c:{NFSU2_TR(0x6ed88c);
w1(R+0,shr<u8>(r1(R+0),u64(u32(0x1ull))));
}
B6ed88e:{NFSU2_TR(0x6ed88e);
w4(R+4,u32(r1(R+0)));
}
B6ed891:{NFSU2_TR(0x6ed891);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B6ed895:{NFSU2_TR(0x6ed895);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ed899:{NFSU2_TR(0x6ed899);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ed89c:{NFSU2_TR(0x6ed89c);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6ed8a0:{NFSU2_TR(0x6ed8a0);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ed8a4:{NFSU2_TR(0x6ed8a4);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6ed8a8:{NFSU2_TR(0x6ed8a8);
{u32 ea_=u32(u32(8134460u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6ed8ae:{NFSU2_TR(0x6ed8ae);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6ed8b2:{NFSU2_TR(0x6ed8b2);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6ed8b6:{NFSU2_TR(0x6ed8b6);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ed8ba:{NFSU2_TR(0x6ed8ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6ed8bd:{NFSU2_TR(0x6ed8bd);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6ed8c1:{NFSU2_TR(0x6ed8c1);
{u32 ea_=u32(u32(8134464u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6ed8c7:{NFSU2_TR(0x6ed8c7);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6ed8cb:{NFSU2_TR(0x6ed8cb);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6ed8cf:{NFSU2_TR(0x6ed8cf);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6ed8d3:{NFSU2_TR(0x6ed8d3);
{u32 ea_=u32(u32(8134464u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6ed8d9:{NFSU2_TR(0x6ed8d9);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6ed8dd:{NFSU2_TR(0x6ed8dd);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ed8e1:{NFSU2_TR(0x6ed8e1);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B6ed8e3:{NFSU2_TR(0x6ed8e3);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6ed8e5:{NFSU2_TR(0x6ed8e5);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ed8e7:{NFSU2_TR(0x6ed8e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ed8ea:{NFSU2_TR(0x6ed8ea);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B6ed8ee:{NFSU2_TR(0x6ed8ee);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6ed8f0:{NFSU2_TR(0x6ed8f0);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ed8f2:{NFSU2_TR(0x6ed8f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ed8f5:{NFSU2_TR(0x6ed8f5);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ed8f9:{NFSU2_TR(0x6ed8f9);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B6ed8fd:{NFSU2_TR(0x6ed8fd);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6ed8ff:{NFSU2_TR(0x6ed8ff);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ed901:L6ed901:{c.instructions+=10;NFSU2_TR(0x6ed901);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ed905:{NFSU2_TR(0x6ed905);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ed909:{NFSU2_TR(0x6ed909);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
}
B6ed90c:{NFSU2_TR(0x6ed90c);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ed910:{NFSU2_TR(0x6ed910);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B6ed914:{NFSU2_TR(0x6ed914);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x3ull))));
}
B6ed917:{NFSU2_TR(0x6ed917);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B6ed918:{NFSU2_TR(0x6ed918);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B6ed91b:{NFSU2_TR(0x6ed91b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6ed91d:{NFSU2_TR(0x6ed91d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ed850u);}goto L6ed850;}}
}
B6ed923:L6ed923:{c.instructions+=2;NFSU2_TR(0x6ed923);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6ed927:{NFSU2_TR(0x6ed927);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ed840u);}goto L6ed840;}}
}
B6ed92d:L6ed92d:{c.instructions+=12;NFSU2_TR(0x6ed92d);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ed931:{NFSU2_TR(0x6ed931);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B6ed935:{NFSU2_TR(0x6ed935);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ed939:{NFSU2_TR(0x6ed939);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ed93d:{NFSU2_TR(0x6ed93d);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6ed93e:{NFSU2_TR(0x6ed93e);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B6ed941:{NFSU2_TR(0x6ed941);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B6ed944:{NFSU2_TR(0x6ed944);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B6ed946:{NFSU2_TR(0x6ed946);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6ed948:{NFSU2_TR(0x6ed948);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ed94a:{NFSU2_TR(0x6ed94a);
__builtin_memmove((R+28),(R+0),4);
}
B6ed94c:{NFSU2_TR(0x6ed94c);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6edbaa;}}
}
B6ed952:L6ed952:{c.instructions+=1;NFSU2_TR(0x6ed952);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B6ed954:L6ed954:{c.instructions+=10;NFSU2_TR(0x6ed954);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ed958:{NFSU2_TR(0x6ed958);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+0,u32(r1(U+8)));
}
B6ed95c:{NFSU2_TR(0x6ed95c);
__builtin_memmove((R+4),(R+0),4);
}
B6ed95e:{NFSU2_TR(0x6ed95e);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x1full))));
}
B6ed961:{NFSU2_TR(0x6ed961);
w4(R+12,u32(0x1ull));
}
B6ed966:{NFSU2_TR(0x6ed966);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+12,shl<u32>(r4(R+12),u64(r1(U+0))));
}
B6ed968:{NFSU2_TR(0x6ed968);
u8 U[8];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ed96c:{NFSU2_TR(0x6ed96c);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B6ed96f:{NFSU2_TR(0x6ed96f);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w4(U+12,u32(u32(r4(U+8))&u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ed972:{NFSU2_TR(0x6ed972);
if(r1(R+518)){{goto L6ed9e9;}}
}
B6ed974:L6ed974:{c.instructions+=23;NFSU2_TR(0x6ed974);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ed977:{NFSU2_TR(0x6ed977);
{u32 ea_=u32(r4(R+20)+r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ed97b:{NFSU2_TR(0x6ed97b);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+20))));
}
B6ed97d:{NFSU2_TR(0x6ed97d);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ed980:{NFSU2_TR(0x6ed980);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6ed982:{NFSU2_TR(0x6ed982);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ed984:{NFSU2_TR(0x6ed984);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
__builtin_memmove((R+12),(U+0),1);
}
B6ed986:{NFSU2_TR(0x6ed986);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B6ed988:{NFSU2_TR(0x6ed988);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B6ed98a:{NFSU2_TR(0x6ed98a);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B6ed98c:{NFSU2_TR(0x6ed98c);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B6ed98e:{NFSU2_TR(0x6ed98e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6ed990:{NFSU2_TR(0x6ed990);
w4(R+12,u32(u32(r4(R+12))&u32(u32(0x1ull))));
}
B6ed993:{NFSU2_TR(0x6ed993);
__asm__ volatile(".byte 0xd9,0xc3":::"memory");
}
B6ed995:{NFSU2_TR(0x6ed995);
__asm__ volatile(".byte 0xd8,0xcc":::"memory");
}
B6ed997:{NFSU2_TR(0x6ed997);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6ed999:{NFSU2_TR(0x6ed999);
__asm__ volatile(".byte 0xdd,0xdb":::"memory");
}
B6ed99b:{NFSU2_TR(0x6ed99b);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B6ed99d:{NFSU2_TR(0x6ed99d);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B6ed99f:{NFSU2_TR(0x6ed99f);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B6ed9a5:{NFSU2_TR(0x6ed9a5);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6ed9a7:{NFSU2_TR(0x6ed9a7);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6ed9aa:{NFSU2_TR(0x6ed9aa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ed9d1;}}
}
B6ed9ac:L6ed9ac:{c.instructions+=12;NFSU2_TR(0x6ed9ac);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B6ed9ae:{NFSU2_TR(0x6ed9ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6ed9b5:{NFSU2_TR(0x6ed9b5);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B6ed9bb:{NFSU2_TR(0x6ed9bb);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B6ed9bd:{NFSU2_TR(0x6ed9bd);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6ed9bf:{NFSU2_TR(0x6ed9bf);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ed9c1:{NFSU2_TR(0x6ed9c1);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B6ed9c3:{NFSU2_TR(0x6ed9c3);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6ed9c6:{NFSU2_TR(0x6ed9c6);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ed9c9:{NFSU2_TR(0x6ed9c9);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6ed9cc:{NFSU2_TR(0x6ed9cc);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ed9cf:{NFSU2_TR(0x6ed9cf);
{goto L6ed9e9;}
}
B6ed9d1:L6ed9d1:{c.instructions+=5;NFSU2_TR(0x6ed9d1);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ed9d3:{NFSU2_TR(0x6ed9d3);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B6ed9d9:{NFSU2_TR(0x6ed9d9);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B6ed9db:{NFSU2_TR(0x6ed9db);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B6ed9de:{NFSU2_TR(0x6ed9de);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6ed9e7;}}
}
B6ed9e0:L6ed9e0:{c.instructions+=3;NFSU2_TR(0x6ed9e0);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B6ed9e2:{NFSU2_TR(0x6ed9e2);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ed9e5:{NFSU2_TR(0x6ed9e5);
{goto L6ed9e9;}
}
B6ed9e7:L6ed9e7:{c.instructions+=1;NFSU2_TR(0x6ed9e7);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B6ed9e9:L6ed9e9:{c.instructions+=7;NFSU2_TR(0x6ed9e9);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ed9ed:{NFSU2_TR(0x6ed9ed);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B6ed9f1:{NFSU2_TR(0x6ed9f1);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x3ull))));
}
B6ed9f4:{NFSU2_TR(0x6ed9f4);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6ed9f5:{NFSU2_TR(0x6ed9f5);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x10ull))));
}
B6ed9f8:{NFSU2_TR(0x6ed9f8);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6ed9fa:{NFSU2_TR(0x6ed9fa);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ed954u);}goto L6ed954;}}
}
B6eda00:L6eda00:{c.instructions+=1;NFSU2_TR(0x6eda00);
{goto L6edbaa;}
}
B6eda05:L6eda05:{c.instructions+=1;NFSU2_TR(0x6eda05);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6edbaa;}}
}
B6eda0b:L6eda0b:{c.instructions+=11;NFSU2_TR(0x6eda0b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6eda0f:{NFSU2_TR(0x6eda0f);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B6eda13:{NFSU2_TR(0x6eda13);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6eda17:{NFSU2_TR(0x6eda17);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6eda1a:{NFSU2_TR(0x6eda1a);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+12)))));
w8(U+8,u64(s64(s32(r4(R+0)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+12,u32(r8(U+16)));
}
B6eda1d:{NFSU2_TR(0x6eda1d);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6eda21:{NFSU2_TR(0x6eda21);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6eda24:{NFSU2_TR(0x6eda24);
u8 U[12];
w4(U+0,u32(u32(u32(0xfffffffdull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+12),(U+8),4);
}
B6eda28:{NFSU2_TR(0x6eda28);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xffffffffull))));
__builtin_memmove((R+0),(U+0),4);
}
B6eda2b:{NFSU2_TR(0x6eda2b);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6eda2d:{NFSU2_TR(0x6eda2d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6edb44;}}
}
B6eda33:L6eda33:{c.instructions+=4;NFSU2_TR(0x6eda33);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+28))));
}
B6eda35:{NFSU2_TR(0x6eda35);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6eda36:{NFSU2_TR(0x6eda36);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6eda3a:{NFSU2_TR(0x6eda3a);
__builtin_memmove((R+12),(R+12),4);
}
B6eda40:L6eda40:{c.instructions+=3;NFSU2_TR(0x6eda40);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+20,u32(r1(U+4)));
}
B6eda44:{NFSU2_TR(0x6eda44);
w4(R+20,u32(u32(r4(R+20))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+20))<s32(u32(0x0ull))));
}
B6eda45:{NFSU2_TR(0x6eda45);
if(r1(R+519)){{goto L6edb36;}}
}
B6eda4b:L6eda4b:{c.instructions+=6;NFSU2_TR(0x6eda4b);
__builtin_memmove((R+28),(R+20),4);
}
B6eda4d:{NFSU2_TR(0x6eda4d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6eda51:{NFSU2_TR(0x6eda51);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B6eda54:{NFSU2_TR(0x6eda54);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6eda57:{NFSU2_TR(0x6eda57);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6eda5b:{NFSU2_TR(0x6eda5b);
{goto L6eda60;}
}
B6eda60:L6eda60:{c.instructions+=10;NFSU2_TR(0x6eda60);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6eda64:{NFSU2_TR(0x6eda64);
u8 U[9];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+0,u32(r1(U+8)));
}
B6eda68:{NFSU2_TR(0x6eda68);
__builtin_memmove((R+4),(R+0),4);
}
B6eda6a:{NFSU2_TR(0x6eda6a);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x1full))));
}
B6eda6d:{NFSU2_TR(0x6eda6d);
w4(R+8,u32(0x1ull));
}
B6eda72:{NFSU2_TR(0x6eda72);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r1(U+0))));
}
B6eda74:{NFSU2_TR(0x6eda74);
u8 U[8];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6eda78:{NFSU2_TR(0x6eda78);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B6eda7b:{NFSU2_TR(0x6eda7b);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w4(U+12,u32(u32(r4(U+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6eda7e:{NFSU2_TR(0x6eda7e);
if(r1(R+518)){{goto L6edb18;}}
}
B6eda84:L6eda84:{c.instructions+=5;NFSU2_TR(0x6eda84);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6eda87:{NFSU2_TR(0x6eda87);
u8 U[4];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B6eda8b:{NFSU2_TR(0x6eda8b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6eda8c:{NFSU2_TR(0x6eda8c);
u8 U[14];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,carry<u32>(r4(R+4),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,scarry<u32>(r4(R+4),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6eda90:{NFSU2_TR(0x6eda90);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6eda95ull));
TAIL_STATIC(0x6eca40u,6ec);
}
B6eda95:L6eda95:{c.instructions+=38;NFSU2_TR(0x6eda95);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+12))),1);
__builtin_memmove((R+0),(U+0),1);
}
B6eda97:{NFSU2_TR(0x6eda97);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B6eda9b:{NFSU2_TR(0x6eda9b);
w1(R+0,shr<u8>(r1(R+0),u64(u32(0x1ull))));
}
B6eda9d:{NFSU2_TR(0x6eda9d);
w4(R+4,u32(r1(R+0)));
}
B6edaa0:{NFSU2_TR(0x6edaa0);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B6edaa4:{NFSU2_TR(0x6edaa4);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6edaa8:{NFSU2_TR(0x6edaa8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6edaab:{NFSU2_TR(0x6edaab);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6edaaf:{NFSU2_TR(0x6edaaf);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6edab3:{NFSU2_TR(0x6edab3);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6edab7:{NFSU2_TR(0x6edab7);
{u32 ea_=u32(u32(8134460u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6edabd:{NFSU2_TR(0x6edabd);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6edac1:{NFSU2_TR(0x6edac1);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6edac5:{NFSU2_TR(0x6edac5);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6edac9:{NFSU2_TR(0x6edac9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6edacc:{NFSU2_TR(0x6edacc);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6edad0:{NFSU2_TR(0x6edad0);
{u32 ea_=u32(u32(8134464u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6edad6:{NFSU2_TR(0x6edad6);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6edada:{NFSU2_TR(0x6edada);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6edade:{NFSU2_TR(0x6edade);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6edae2:{NFSU2_TR(0x6edae2);
{u32 ea_=u32(u32(8134464u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6edae8:{NFSU2_TR(0x6edae8);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6edaec:{NFSU2_TR(0x6edaec);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6edaf0:{NFSU2_TR(0x6edaf0);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6edaf2:{NFSU2_TR(0x6edaf2);
__asm__ volatile(".byte 0xd8,0xe2":::"memory");
}
B6edaf4:{NFSU2_TR(0x6edaf4);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6edaf6:{NFSU2_TR(0x6edaf6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6edaf9:{NFSU2_TR(0x6edaf9);
{u32 ea_=u32(r4(R+8)+r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6edafd:{NFSU2_TR(0x6edafd);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B6edb01:{NFSU2_TR(0x6edb01);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B6edb03:{NFSU2_TR(0x6edb03);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6edb05:{NFSU2_TR(0x6edb05);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6edb08:{NFSU2_TR(0x6edb08);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B6edb0c:{NFSU2_TR(0x6edb0c);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B6edb0e:{NFSU2_TR(0x6edb0e);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B6edb10:{NFSU2_TR(0x6edb10);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6edb12:{NFSU2_TR(0x6edb12);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6edb16:{NFSU2_TR(0x6edb16);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6edb18:L6edb18:{c.instructions+=8;NFSU2_TR(0x6edb18);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6edb1c:{NFSU2_TR(0x6edb1c);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x3ull))));
}
B6edb1f:{NFSU2_TR(0x6edb1f);
w4(R+20,u32(u32(r4(R+20))-u32(u32(0x1ull))));
}
B6edb20:{NFSU2_TR(0x6edb20);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0xcull))));
}
B6edb23:{NFSU2_TR(0x6edb23);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x10ull))));
}
B6edb26:{NFSU2_TR(0x6edb26);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6edb28:{NFSU2_TR(0x6edb28);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6edb2c:{NFSU2_TR(0x6edb2c);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6eda60u);}goto L6eda60;}}
}
B6edb32:L6edb32:{c.instructions+=1;NFSU2_TR(0x6edb32);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6edb36:L6edb36:{c.instructions+=2;NFSU2_TR(0x6edb36);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6edb3a:{NFSU2_TR(0x6edb3a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6eda40u);}goto L6eda40;}}
}
B6edb40:L6edb40:{c.instructions+=1;NFSU2_TR(0x6edb40);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6edb44:L6edb44:{c.instructions+=10;NFSU2_TR(0x6edb44);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B6edb48:{NFSU2_TR(0x6edb48);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6edb4c:{NFSU2_TR(0x6edb4c);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6edb4f:{NFSU2_TR(0x6edb4f);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B6edb52:{NFSU2_TR(0x6edb52);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B6edb55:{NFSU2_TR(0x6edb55);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B6edb57:{NFSU2_TR(0x6edb57);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6edb59:{NFSU2_TR(0x6edb59);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6edb5b:{NFSU2_TR(0x6edb5b);
__builtin_memmove((R+12),(R+0),4);
}
B6edb5d:{NFSU2_TR(0x6edb5d);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6edbaa;}}
}
B6edb5f:L6edb5f:{c.instructions+=1;NFSU2_TR(0x6edb5f);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B6edb61:L6edb61:{c.instructions+=10;NFSU2_TR(0x6edb61);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6edb65:{NFSU2_TR(0x6edb65);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+0,u32(r1(U+8)));
}
B6edb69:{NFSU2_TR(0x6edb69);
__builtin_memmove((R+4),(R+0),4);
}
B6edb6b:{NFSU2_TR(0x6edb6b);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x1full))));
}
B6edb6e:{NFSU2_TR(0x6edb6e);
w4(R+8,u32(0x1ull));
}
B6edb73:{NFSU2_TR(0x6edb73);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r1(U+0))));
}
B6edb75:{NFSU2_TR(0x6edb75);
u8 U[8];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6edb79:{NFSU2_TR(0x6edb79);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B6edb7c:{NFSU2_TR(0x6edb7c);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w4(U+12,u32(u32(r4(U+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6edb7f:{NFSU2_TR(0x6edb7f);
if(r1(R+518)){{goto L6edb97;}}
}
B6edb81:L6edb81:{c.instructions+=8;NFSU2_TR(0x6edb81);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6edb84:{NFSU2_TR(0x6edb84);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6edb86:{NFSU2_TR(0x6edb86);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+12))),1);
__builtin_memmove((R+0),(U+0),1);
}
B6edb88:{NFSU2_TR(0x6edb88);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+20))));
}
B6edb8a:{NFSU2_TR(0x6edb8a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6edb8b:{NFSU2_TR(0x6edb8b);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x1ull))));
}
B6edb8e:{NFSU2_TR(0x6edb8e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6edb8f:{NFSU2_TR(0x6edb8f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6edb94ull));
TAIL_STATIC(0x6ecad0u,6ec);
}
B6edb94:L6edb94:{c.instructions+=1;NFSU2_TR(0x6edb94);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B6edb97:L6edb97:{c.instructions+=7;NFSU2_TR(0x6edb97);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6edb9b:{NFSU2_TR(0x6edb9b);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B6edb9f:{NFSU2_TR(0x6edb9f);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x3ull))));
}
B6edba2:{NFSU2_TR(0x6edba2);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6edba3:{NFSU2_TR(0x6edba3);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x10ull))));
}
B6edba6:{NFSU2_TR(0x6edba6);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6edba8:{NFSU2_TR(0x6edba8);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6edb61u);}goto L6edb61;}}
}
B6edbaa:L6edbaa:{c.instructions+=8;NFSU2_TR(0x6edbaa);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6edbae:{NFSU2_TR(0x6edbae);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6edbb2:{NFSU2_TR(0x6edbb2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6edbb5:{NFSU2_TR(0x6edbb5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6edbb8:{NFSU2_TR(0x6edbb8);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6edbba:{NFSU2_TR(0x6edbba);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6edbbc:{NFSU2_TR(0x6edbbc);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6edbbf:{NFSU2_TR(0x6edbbf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6edbde;}}
}
B6edbc1:L6edbc1:{c.instructions+=6;NFSU2_TR(0x6edbc1);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6edbc5:{NFSU2_TR(0x6edbc5);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6edbc9:{NFSU2_TR(0x6edbc9);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B6edbcb:{NFSU2_TR(0x6edbcb);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6edbcd:{NFSU2_TR(0x6edbcd);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6edbd0:{NFSU2_TR(0x6edbd0);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L6edea0;}}
}
B6edbd6:L6edbd6:{c.instructions+=3;NFSU2_TR(0x6edbd6);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6edbda:{NFSU2_TR(0x6edbda);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B6edbdc:{NFSU2_TR(0x6edbdc);
{goto L6edc40;}
}
B6edbde:L6edbde:{c.instructions+=2;NFSU2_TR(0x6edbde);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6edbe0:{NFSU2_TR(0x6edbe0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6edc0c;}}
}
B6edbe2:L6edbe2:{c.instructions+=5;NFSU2_TR(0x6edbe2);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6edbe6:{NFSU2_TR(0x6edbe6);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B6edbec:{NFSU2_TR(0x6edbec);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6edbee:{NFSU2_TR(0x6edbee);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6edbf1:{NFSU2_TR(0x6edbf1);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L6edea2;}}
}
B6edbf7:L6edbf7:{c.instructions+=6;NFSU2_TR(0x6edbf7);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+12))),2);
w4(R+0,u32(r2(U+0)));
}
B6edbfa:{NFSU2_TR(0x6edbfa);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6edbfe:{NFSU2_TR(0x6edbfe);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6edc02:{NFSU2_TR(0x6edc02);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B6edc06:{NFSU2_TR(0x6edc06);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6edc0a:{NFSU2_TR(0x6edc0a);
{goto L6edc46;}
}
B6edc0c:L6edc0c:{c.instructions+=8;NFSU2_TR(0x6edc0c);
u8 U[14];
w4(U+0,u32(u32(u32(0xfffffffeull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
w4(R+0,u32(r2(U+12)));
}
B6edc11:{NFSU2_TR(0x6edc11);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6edc15:{NFSU2_TR(0x6edc15);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6edc19:{NFSU2_TR(0x6edc19);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6edc1d:{NFSU2_TR(0x6edc1d);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B6edc1f:{NFSU2_TR(0x6edc1f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6edc21:{NFSU2_TR(0x6edc21);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6edc24:{NFSU2_TR(0x6edc24);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L6edea0;}}
}
B6edc2a:L6edc2a:{c.instructions+=7;NFSU2_TR(0x6edc2a);
u8 U[10];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+0,u32(r2(U+8)));
}
B6edc2e:{NFSU2_TR(0x6edc2e);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6edc32:{NFSU2_TR(0x6edc32);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B6edc34:{NFSU2_TR(0x6edc34);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6edc38:{NFSU2_TR(0x6edc38);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6edc3c:{NFSU2_TR(0x6edc3c);
__asm__ volatile(".byte 0xd8,0xe2":::"memory");
}
B6edc3e:{NFSU2_TR(0x6edc3e);
__asm__ volatile(".byte 0xde,0xf9":::"memory");
}
B6edc40:L6edc40:{c.instructions+=2;NFSU2_TR(0x6edc40);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6edc44:{NFSU2_TR(0x6edc44);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B6edc46:L6edc46:{c.instructions+=4;NFSU2_TR(0x6edc46);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B6edc4a:{NFSU2_TR(0x6edc4a);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B6edc4b:{NFSU2_TR(0x6edc4b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6edc4d:{NFSU2_TR(0x6edc4d);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6edea2;}}
}
B6edc53:L6edc53:{c.instructions+=9;NFSU2_TR(0x6edc53);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6edc57:{NFSU2_TR(0x6edc57);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6edc5a:{NFSU2_TR(0x6edc5a);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6edc5e:{NFSU2_TR(0x6edc5e);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+28,sar<u32>(r4(R+28),u64(r1(U+0))));
}
B6edc60:{NFSU2_TR(0x6edc60);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6edc63:{NFSU2_TR(0x6edc63);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(r4(R+28)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B6edc66:{NFSU2_TR(0x6edc66);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+12))));
}
B6edc68:{NFSU2_TR(0x6edc68);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6edc6a:{NFSU2_TR(0x6edc6a);
if(r1(R+518)){{goto L6edcf9;}}
}
B6edc70:L6edc70:{c.instructions+=4;NFSU2_TR(0x6edc70);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B6edc73:{NFSU2_TR(0x6edc73);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6edc75:{NFSU2_TR(0x6edc75);
u8 U[1];
w1(R+512,u8(0x0ull));
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6edc77:{NFSU2_TR(0x6edc77);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6edf0a;}}
}
B6edc7d:L6edc7d:{c.instructions+=2;NFSU2_TR(0x6edc7d);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6edc81:{NFSU2_TR(0x6edc81);
__builtin_memmove((R+20),(R+4),4);
}
B6edc83:L6edc83:{c.instructions+=11;NFSU2_TR(0x6edc83);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6edc87:{NFSU2_TR(0x6edc87);
u8 U[9];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+28,u32(r1(U+8)));
}
B6edc8b:{NFSU2_TR(0x6edc8b);
__builtin_memmove((R+4),(R+28),4);
}
B6edc8d:{NFSU2_TR(0x6edc8d);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x1full))));
}
B6edc90:{NFSU2_TR(0x6edc90);
w4(R+8,u32(0x1ull));
}
B6edc95:{NFSU2_TR(0x6edc95);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r1(U+0))));
}
B6edc97:{NFSU2_TR(0x6edc97);
u8 U[8];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6edc9b:{NFSU2_TR(0x6edc9b);
__builtin_memmove((R+0),(R+28),4);
}
B6edc9d:{NFSU2_TR(0x6edc9d);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B6edca0:{NFSU2_TR(0x6edca0);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w4(U+12,u32(u32(r4(U+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6edca3:{NFSU2_TR(0x6edca3);
if(r1(R+518)){{goto L6edcd9;}}
}
B6edca5:L6edca5:{c.instructions+=4;NFSU2_TR(0x6edca5);
u8 U[4];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B6edca9:{NFSU2_TR(0x6edca9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6edcaa:{NFSU2_TR(0x6edcaa);
__builtin_memmove((R+4),(R+20),4);
}
B6edcac:{NFSU2_TR(0x6edcac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6edcb1ull));
TAIL_STATIC(0x6ecb40u,6ec);
}
B6edcb1:L6edcb1:{c.instructions+=11;NFSU2_TR(0x6edcb1);
u8 U[8];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6edcb5:{NFSU2_TR(0x6edcb5);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6edcb9:{NFSU2_TR(0x6edcb9);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6edcbc:{NFSU2_TR(0x6edcbc);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6edcbf:{NFSU2_TR(0x6edcbf);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B6edcc3:{NFSU2_TR(0x6edcc3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6edcc6:{NFSU2_TR(0x6edcc6);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B6edcc8:{NFSU2_TR(0x6edcc8);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6edccc:{NFSU2_TR(0x6edccc);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6edccd:{NFSU2_TR(0x6edccd);
u8 U[4];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B6edcd1:{NFSU2_TR(0x6edcd1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6edcd6ull));
TAIL_STATIC(0x6ecc80u,6ec);
}
B6edcd6:L6edcd6:{c.instructions+=1;NFSU2_TR(0x6edcd6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6edcd9:L6edcd9:{c.instructions+=9;NFSU2_TR(0x6edcd9);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6edcdd:{NFSU2_TR(0x6edcdd);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6edce1:{NFSU2_TR(0x6edce1);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B6edce4:{NFSU2_TR(0x6edce4);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6edce8:{NFSU2_TR(0x6edce8);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B6edcec:{NFSU2_TR(0x6edcec);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B6edced:{NFSU2_TR(0x6edced);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x6ull))));
}
B6edcf0:{NFSU2_TR(0x6edcf0);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6edcf2:{NFSU2_TR(0x6edcf2);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6edc83u);}goto L6edc83;}}
}
B6edcf4:L6edcf4:{c.instructions+=1;NFSU2_TR(0x6edcf4);
{goto L6edf0a;}
}
B6edcf9:L6edcf9:{c.instructions+=11;NFSU2_TR(0x6edcf9);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+28,u32(r1(U+4)));
}
B6edcfd:{NFSU2_TR(0x6edcfd);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6edd01:{NFSU2_TR(0x6edd01);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
}
B6edd04:{NFSU2_TR(0x6edd04);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+28)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B6edd07:{NFSU2_TR(0x6edd07);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6edd0a:{NFSU2_TR(0x6edd0a);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B6edd0c:{NFSU2_TR(0x6edd0c);
__builtin_memmove((R+12),(R+0),4);
}
B6edd0e:{NFSU2_TR(0x6edd0e);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6edd10:{NFSU2_TR(0x6edd10);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6edd12:{NFSU2_TR(0x6edd12);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6edd16:{NFSU2_TR(0x6edd16);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6edf0a;}}
}
B6edd1c:L6edd1c:{c.instructions+=2;NFSU2_TR(0x6edd1c);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6edd20:{NFSU2_TR(0x6edd20);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6edd24:L6edd24:{c.instructions+=11;NFSU2_TR(0x6edd24);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6edd28:{NFSU2_TR(0x6edd28);
u8 U[9];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+20,u32(r1(U+8)));
}
B6edd2c:{NFSU2_TR(0x6edd2c);
u8 U[8];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6edd30:{NFSU2_TR(0x6edd30);
__builtin_memmove((R+4),(R+20),4);
}
B6edd32:{NFSU2_TR(0x6edd32);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x1full))));
}
B6edd35:{NFSU2_TR(0x6edd35);
w4(R+8,u32(0x1ull));
}
B6edd3a:{NFSU2_TR(0x6edd3a);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r1(U+0))));
}
B6edd3c:{NFSU2_TR(0x6edd3c);
__builtin_memmove((R+4),(R+20),4);
}
B6edd3e:{NFSU2_TR(0x6edd3e);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+4,sar<u32>(r4(R+4),u64(r4(U+0))));
}
B6edd41:{NFSU2_TR(0x6edd41);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w4(U+12,u32(u32(r4(U+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6edd44:{NFSU2_TR(0x6edd44);
if(r1(R+518)){{goto L6ede70;}}
}
B6edd4a:L6edd4a:{c.instructions+=6;NFSU2_TR(0x6edd4a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6edd4d:{NFSU2_TR(0x6edd4d);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6edd51:{NFSU2_TR(0x6edd51);
u8 U[4];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B6edd55:{NFSU2_TR(0x6edd55);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6edd56:{NFSU2_TR(0x6edd56);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),r4(R+28)));
w1(R+523,scarry<u32>(r4(R+4),r4(R+28)));
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+28))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6edd58:{NFSU2_TR(0x6edd58);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6edd5dull));
TAIL_STATIC(0x6eca40u,6ec);
}
B6edd5d:L6edd5d:{c.instructions+=44;NFSU2_TR(0x6edd5d);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+12))),1);
__builtin_memmove((R+4),(U+0),1);
}
B6edd5f:{NFSU2_TR(0x6edd5f);
__builtin_memmove((R+0),(R+4),1);
}
B6edd61:{NFSU2_TR(0x6edd61);
w1(R+0,shr<u8>(r1(R+0),u64(u32(0x1ull))));
}
B6edd63:{NFSU2_TR(0x6edd63);
w4(R+8,u32(r1(R+0)));
}
B6edd66:{NFSU2_TR(0x6edd66);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B6edd6a:{NFSU2_TR(0x6edd6a);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6edd6e:{NFSU2_TR(0x6edd6e);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B6edd72:{NFSU2_TR(0x6edd72);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6edd76:{NFSU2_TR(0x6edd76);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6edd7a:{NFSU2_TR(0x6edd7a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6edd7d:{NFSU2_TR(0x6edd7d);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6edd81:{NFSU2_TR(0x6edd81);
{u32 ea_=u32(u32(8134460u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6edd87:{NFSU2_TR(0x6edd87);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6edd8b:{NFSU2_TR(0x6edd8b);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6edd8f:{NFSU2_TR(0x6edd8f);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6edd93:{NFSU2_TR(0x6edd93);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6edd97:{NFSU2_TR(0x6edd97);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B6edd9a:{NFSU2_TR(0x6edd9a);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6edd9e:{NFSU2_TR(0x6edd9e);
{u32 ea_=u32(u32(8134464u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6edda4:{NFSU2_TR(0x6edda4);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6edda8:{NFSU2_TR(0x6edda8);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6eddac:{NFSU2_TR(0x6eddac);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6eddb0:{NFSU2_TR(0x6eddb0);
{u32 ea_=u32(u32(8134464u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6eddb6:{NFSU2_TR(0x6eddb6);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6eddba:{NFSU2_TR(0x6eddba);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6eddbe:{NFSU2_TR(0x6eddbe);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B6eddc0:{NFSU2_TR(0x6eddc0);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6eddc2:{NFSU2_TR(0x6eddc2);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6eddc6:{NFSU2_TR(0x6eddc6);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6eddc9:{NFSU2_TR(0x6eddc9);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6eddcd:{NFSU2_TR(0x6eddcd);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6eddd1:{NFSU2_TR(0x6eddd1);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6eddd4:{NFSU2_TR(0x6eddd4);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B6eddd8:{NFSU2_TR(0x6eddd8);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6edddc:{NFSU2_TR(0x6edddc);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6edde0:{NFSU2_TR(0x6edde0);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6edde4:{NFSU2_TR(0x6edde4);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6edde6:{NFSU2_TR(0x6edde6);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6eddea:{NFSU2_TR(0x6eddea);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6eddee:{NFSU2_TR(0x6eddee);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6eddf0:{NFSU2_TR(0x6eddf0);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B6eddf6:{NFSU2_TR(0x6eddf6);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6eddf8:{NFSU2_TR(0x6eddf8);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6eddfb:{NFSU2_TR(0x6eddfb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ede2b;}}
}
B6eddfd:L6eddfd:{c.instructions+=12;NFSU2_TR(0x6eddfd);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B6eddff:{NFSU2_TR(0x6eddff);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6ede07:{NFSU2_TR(0x6ede07);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B6ede0d:{NFSU2_TR(0x6ede0d);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ede11:{NFSU2_TR(0x6ede11);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B6ede13:{NFSU2_TR(0x6ede13);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ede17:{NFSU2_TR(0x6ede17);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ede1b:{NFSU2_TR(0x6ede1b);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B6ede1d:{NFSU2_TR(0x6ede1d);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ede21:{NFSU2_TR(0x6ede21);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6ede25:{NFSU2_TR(0x6ede25);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ede29:{NFSU2_TR(0x6ede29);
{goto L6ede4a;}
}
B6ede2b:L6ede2b:{c.instructions+=7;NFSU2_TR(0x6ede2b);
u8 U[1];
w1(R+512,u8(0x0ull));
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6ede2e:{NFSU2_TR(0x6ede2e);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ede34:{NFSU2_TR(0x6ede34);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B6ede36:{NFSU2_TR(0x6ede36);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B6ede38:{NFSU2_TR(0x6ede38);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ede3c:{NFSU2_TR(0x6ede3c);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B6ede3e:{NFSU2_TR(0x6ede3e);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6ede4a;}}
}
B6ede40:L6ede40:{c.instructions+=3;NFSU2_TR(0x6ede40);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6ede44:{NFSU2_TR(0x6ede44);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B6ede46:{NFSU2_TR(0x6ede46);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6ede4a:L6ede4a:{c.instructions+=9;NFSU2_TR(0x6ede4a);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ede4e:{NFSU2_TR(0x6ede4e);
u8 U[8];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ede52:{NFSU2_TR(0x6ede52);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6ede56:{NFSU2_TR(0x6ede56);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6ede59:{NFSU2_TR(0x6ede59);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B6ede5d:{NFSU2_TR(0x6ede5d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ede5e:{NFSU2_TR(0x6ede5e);
u8 U[4];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B6ede62:{NFSU2_TR(0x6ede62);
__builtin_memmove((R+0),(R+28),4);
}
B6ede64:{NFSU2_TR(0x6ede64);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ede69ull));
TAIL_STATIC(0x6ecc80u,6ec);
}
B6ede69:L6ede69:{c.instructions+=2;NFSU2_TR(0x6ede69);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ede6d:{NFSU2_TR(0x6ede6d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6ede70:L6ede70:{c.instructions+=13;NFSU2_TR(0x6ede70);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ede74:{NFSU2_TR(0x6ede74);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ede78:{NFSU2_TR(0x6ede78);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6ede7c:{NFSU2_TR(0x6ede7c);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x10ull))));
}
B6ede7f:{NFSU2_TR(0x6ede7f);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ede83:{NFSU2_TR(0x6ede83);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B6ede87:{NFSU2_TR(0x6ede87);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x3ull))));
}
B6ede8a:{NFSU2_TR(0x6ede8a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6ede8b:{NFSU2_TR(0x6ede8b);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0xcull))));
}
B6ede8e:{NFSU2_TR(0x6ede8e);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6ede90:{NFSU2_TR(0x6ede90);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ede94:{NFSU2_TR(0x6ede94);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ede98:{NFSU2_TR(0x6ede98);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6edd24u);}goto L6edd24;}}
}
B6ede9e:L6ede9e:{c.instructions+=1;NFSU2_TR(0x6ede9e);
{goto L6edf0a;}
}
B6edea0:L6edea0:{c.instructions+=1;NFSU2_TR(0x6edea0);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B6edea2:L6edea2:{c.instructions+=4;NFSU2_TR(0x6edea2);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6edea6:{NFSU2_TR(0x6edea6);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B6edea9:{NFSU2_TR(0x6edea9);
u8 U[1];
w1(R+512,u8(0x0ull));
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6edeab:{NFSU2_TR(0x6edeab);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6edf0a;}}
}
B6edead:L6edead:{c.instructions+=2;NFSU2_TR(0x6edead);
u8 U[8];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6edeb1:{NFSU2_TR(0x6edeb1);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6edeb3:L6edeb3:{c.instructions+=10;NFSU2_TR(0x6edeb3);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6edeb7:{NFSU2_TR(0x6edeb7);
u8 U[9];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+0,u32(r1(U+8)));
}
B6edebb:{NFSU2_TR(0x6edebb);
__builtin_memmove((R+4),(R+0),4);
}
B6edebd:{NFSU2_TR(0x6edebd);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x1full))));
}
B6edec0:{NFSU2_TR(0x6edec0);
w4(R+20,u32(0x1ull));
}
B6edec5:{NFSU2_TR(0x6edec5);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+20,shl<u32>(r4(R+20),u64(r1(U+0))));
}
B6edec7:{NFSU2_TR(0x6edec7);
__builtin_memmove((R+4),(R+0),4);
}
B6edec9:{NFSU2_TR(0x6edec9);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+4,sar<u32>(r4(R+4),u64(r4(U+0))));
}
B6edecc:{NFSU2_TR(0x6edecc);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w4(U+12,u32(u32(r4(U+8))&u32(r4(R+20))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6edecf:{NFSU2_TR(0x6edecf);
if(r1(R+518)){{goto L6edefa;}}
}
B6eded1:L6eded1:{c.instructions+=14;NFSU2_TR(0x6eded1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6eded4:{NFSU2_TR(0x6eded4);
u8 U[8];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6eded8:{NFSU2_TR(0x6eded8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6ededb:{NFSU2_TR(0x6ededb);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+28))));
}
B6ededd:{NFSU2_TR(0x6ededd);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6edee0:{NFSU2_TR(0x6edee0);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B6edee4:{NFSU2_TR(0x6edee4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+20),(U+0),4);
}
B6edee6:{NFSU2_TR(0x6edee6);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6edee8:{NFSU2_TR(0x6edee8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6edeeb:{NFSU2_TR(0x6edeeb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6edeee:{NFSU2_TR(0x6edeee);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6edef1:{NFSU2_TR(0x6edef1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6edef4:{NFSU2_TR(0x6edef4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6edef7:{NFSU2_TR(0x6edef7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6edefa:L6edefa:{c.instructions+=6;NFSU2_TR(0x6edefa);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6edefe:{NFSU2_TR(0x6edefe);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B6edf02:{NFSU2_TR(0x6edf02);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6edf03:{NFSU2_TR(0x6edf03);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B6edf06:{NFSU2_TR(0x6edf06);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6edf08:{NFSU2_TR(0x6edf08);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6edeb3u);}goto L6edeb3;}}
}
B6edf0a:L6edf0a:{c.instructions+=4;NFSU2_TR(0x6edf0a);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6edf0e:{NFSU2_TR(0x6edf0e);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x7ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B6edf11:{NFSU2_TR(0x6edf11);
u8 U[1];
w1(R+512,u8(0x0ull));
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6edf13:{NFSU2_TR(0x6edf13);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6edf6c;}}
}
B6edf15:L6edf15:{c.instructions+=4;NFSU2_TR(0x6edf15);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6edf18:{NFSU2_TR(0x6edf18);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6edf1a:{NFSU2_TR(0x6edf1a);
u8 U[1];
w1(R+512,u8(0x0ull));
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6edf1c:{NFSU2_TR(0x6edf1c);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6edf6c;}}
}
B6edf1e:L6edf1e:{c.instructions+=1;NFSU2_TR(0x6edf1e);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6edf20:L6edf20:{c.instructions+=9;NFSU2_TR(0x6edf20);
u8 U[9];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+0,u32(r1(U+8)));
}
B6edf24:{NFSU2_TR(0x6edf24);
__builtin_memmove((R+4),(R+0),4);
}
B6edf26:{NFSU2_TR(0x6edf26);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x1full))));
}
B6edf29:{NFSU2_TR(0x6edf29);
w4(R+8,u32(0x1ull));
}
B6edf2e:{NFSU2_TR(0x6edf2e);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r1(U+0))));
}
B6edf30:{NFSU2_TR(0x6edf30);
u8 U[8];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6edf34:{NFSU2_TR(0x6edf34);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B6edf37:{NFSU2_TR(0x6edf37);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w4(U+12,u32(u32(r4(U+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6edf3a:{NFSU2_TR(0x6edf3a);
if(r1(R+518)){{goto L6edf5c;}}
}
B6edf3c:L6edf3c:{c.instructions+=10;NFSU2_TR(0x6edf3c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6edf3f:{NFSU2_TR(0x6edf3f);
u8 U[9];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+0,u32(r1(U+8)));
}
B6edf43:{NFSU2_TR(0x6edf43);
u8 U[8];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6edf47:{NFSU2_TR(0x6edf47);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6edf4a:{NFSU2_TR(0x6edf4a);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6edf4d:{NFSU2_TR(0x6edf4d);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B6edf51:{NFSU2_TR(0x6edf51);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6edf54:{NFSU2_TR(0x6edf54);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6edf55:{NFSU2_TR(0x6edf55);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+12))));
}
B6edf57:{NFSU2_TR(0x6edf57);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6edf5cull));
TAIL_STATIC(0x6ecb40u,6ec);
}
B6edf5c:L6edf5c:{c.instructions+=6;NFSU2_TR(0x6edf5c);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6edf60:{NFSU2_TR(0x6edf60);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B6edf64:{NFSU2_TR(0x6edf64);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6edf65:{NFSU2_TR(0x6edf65);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x6ull))));
}
B6edf68:{NFSU2_TR(0x6edf68);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6edf6a:{NFSU2_TR(0x6edf6a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6edf20u);}goto L6edf20;}}
}
B6edf6c:L6edf6c:{c.instructions+=8;NFSU2_TR(0x6edf6c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6edf6d:{NFSU2_TR(0x6edf6d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B6edf74:{NFSU2_TR(0x6edf74);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6edf75:{NFSU2_TR(0x6edf75);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6edf76:{NFSU2_TR(0x6edf76);
w1(R+0,u8(0x1ull));
}
B6edf78:{NFSU2_TR(0x6edf78);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6edf79:{NFSU2_TR(0x6edf79);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x54ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x54ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x54ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6edf7c:{NFSU2_TR(0x6edf7c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6edf80:L6edf80:{c.instructions+=48;NFSU2_TR(0x6edf80);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6edf84:{NFSU2_TR(0x6edf84);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6edf88:{NFSU2_TR(0x6edf88);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6edf8a:{NFSU2_TR(0x6edf8a);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6edf8d:{NFSU2_TR(0x6edf8d);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6edf91:{NFSU2_TR(0x6edf91);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6edf94:{NFSU2_TR(0x6edf94);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6edf97:{NFSU2_TR(0x6edf97);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B6edf99:{NFSU2_TR(0x6edf99);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6edf9c:{NFSU2_TR(0x6edf9c);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6edf9f:{NFSU2_TR(0x6edf9f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6edfa1:{NFSU2_TR(0x6edfa1);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6edfa4:{NFSU2_TR(0x6edfa4);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6edfa6:{NFSU2_TR(0x6edfa6);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6edfa8:{NFSU2_TR(0x6edfa8);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6edfaa:{NFSU2_TR(0x6edfaa);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6edfad:{NFSU2_TR(0x6edfad);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6edfb0:{NFSU2_TR(0x6edfb0);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6edfb3:{NFSU2_TR(0x6edfb3);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6edfb5:{NFSU2_TR(0x6edfb5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6edfb7:{NFSU2_TR(0x6edfb7);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6edfba:{NFSU2_TR(0x6edfba);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6edfbc:{NFSU2_TR(0x6edfbc);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B6edfbe:{NFSU2_TR(0x6edfbe);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6edfc1:{NFSU2_TR(0x6edfc1);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6edfc4:{NFSU2_TR(0x6edfc4);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6edfc6:{NFSU2_TR(0x6edfc6);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6edfc9:{NFSU2_TR(0x6edfc9);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6edfcc:{NFSU2_TR(0x6edfcc);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6edfcf:{NFSU2_TR(0x6edfcf);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6edfd2:{NFSU2_TR(0x6edfd2);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6edfd5:{NFSU2_TR(0x6edfd5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6edfd7:{NFSU2_TR(0x6edfd7);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6edfda:{NFSU2_TR(0x6edfda);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6edfdc:{NFSU2_TR(0x6edfdc);
__asm__ volatile(".byte 0xde,0xe9":::"memory");
}
B6edfde:{NFSU2_TR(0x6edfde);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6edfe1:{NFSU2_TR(0x6edfe1);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6edfe3:{NFSU2_TR(0x6edfe3);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6edfe5:{NFSU2_TR(0x6edfe5);
{u32 ea_=u32(r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6edfe8:{NFSU2_TR(0x6edfe8);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6edfeb:{NFSU2_TR(0x6edfeb);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6edfee:{NFSU2_TR(0x6edfee);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6edff0:{NFSU2_TR(0x6edff0);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6edff2:{NFSU2_TR(0x6edff2);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6edff5:{NFSU2_TR(0x6edff5);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6edff8:{NFSU2_TR(0x6edff8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6edffa:{NFSU2_TR(0x6edffa);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6edffd:{NFSU2_TR(0x6edffd);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
TAIL_STATIC(0x6ee000u,6ee);
}
XIT:NFSU2_TR_EXIT(0x6ed,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
