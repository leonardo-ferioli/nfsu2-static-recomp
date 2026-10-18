#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_63c(u8* __restrict R,Cpu& c);
u32 body_68a(u8* __restrict R,Cpu& c);
u32 body_68c(u8* __restrict R,Cpu& c);
u32 body_68d(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x68b,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x68b,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_68b(u8* __restrict R,Cpu& c);
u32 page_68b(Cpu& c){return body_68b(c.regs.data(),c);}
__attribute__((noinline)) u32 body_68b(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x68b000:goto L68b000;
case 0x68b005:c.instructions+=2;goto B68b005;
case 0x68b008:c.instructions+=1;goto B68b008;
case 0x68b00a:goto L68b00a;
case 0x68b010:c.instructions+=2;goto B68b010;
case 0x68b016:c.instructions+=1;goto B68b016;
case 0x68b018:goto L68b018;
case 0x68b01e:c.instructions+=16;goto B68b01e;
case 0x68b025:c.instructions+=15;goto B68b025;
case 0x68b02a:c.instructions+=14;goto B68b02a;
case 0x68b031:c.instructions+=13;goto B68b031;
case 0x68b035:c.instructions+=12;goto B68b035;
case 0x68b03a:c.instructions+=11;goto B68b03a;
case 0x68b041:c.instructions+=10;goto B68b041;
case 0x68b045:c.instructions+=9;goto B68b045;
case 0x68b04a:c.instructions+=8;goto B68b04a;
case 0x68b04e:c.instructions+=7;goto B68b04e;
case 0x68b052:c.instructions+=6;goto B68b052;
case 0x68b056:c.instructions+=5;goto B68b056;
case 0x68b05f:c.instructions+=4;goto B68b05f;
case 0x68b060:c.instructions+=3;goto B68b060;
case 0x68b066:c.instructions+=2;goto B68b066;
case 0x68b068:c.instructions+=1;goto B68b068;
case 0x68b06a:goto L68b06a;
case 0x68b070:c.instructions+=1;goto B68b070;
case 0x68b076:goto L68b076;
case 0x68b07c:c.instructions+=4;goto B68b07c;
case 0x68b082:c.instructions+=3;goto B68b082;
case 0x68b088:c.instructions+=2;goto B68b088;
case 0x68b089:c.instructions+=1;goto B68b089;
case 0x68b08c:goto L68b08c;
case 0x68b08e:goto L68b08e;
case 0x68b08f:c.instructions+=1;goto B68b08f;
case 0x68b092:goto L68b092;
case 0x68b094:goto L68b094;
case 0x68b09a:c.instructions+=9;goto B68b09a;
case 0x68b0a0:c.instructions+=8;goto B68b0a0;
case 0x68b0a6:c.instructions+=7;goto B68b0a6;
case 0x68b0a9:c.instructions+=6;goto B68b0a9;
case 0x68b0ac:c.instructions+=5;goto B68b0ac;
case 0x68b0b2:c.instructions+=4;goto B68b0b2;
case 0x68b0b8:c.instructions+=3;goto B68b0b8;
case 0x68b0be:c.instructions+=2;goto B68b0be;
case 0x68b0c0:c.instructions+=1;goto B68b0c0;
case 0x68b0c6:goto L68b0c6;
case 0x68b0ca:c.instructions+=6;goto B68b0ca;
case 0x68b0ce:c.instructions+=5;goto B68b0ce;
case 0x68b0d0:c.instructions+=4;goto B68b0d0;
case 0x68b0d1:c.instructions+=3;goto B68b0d1;
case 0x68b0d3:c.instructions+=2;goto B68b0d3;
case 0x68b0d4:c.instructions+=1;goto B68b0d4;
case 0x68b0d8:goto L68b0d8;
case 0x68b0da:c.instructions+=15;goto B68b0da;
case 0x68b0db:c.instructions+=14;goto B68b0db;
case 0x68b0dd:c.instructions+=13;goto B68b0dd;
case 0x68b0de:c.instructions+=12;goto B68b0de;
case 0x68b0e1:c.instructions+=11;goto B68b0e1;
case 0x68b0e4:c.instructions+=10;goto B68b0e4;
case 0x68b0e5:c.instructions+=9;goto B68b0e5;
case 0x68b0e7:c.instructions+=8;goto B68b0e7;
case 0x68b0ea:c.instructions+=7;goto B68b0ea;
case 0x68b0ed:c.instructions+=6;goto B68b0ed;
case 0x68b0f1:c.instructions+=5;goto B68b0f1;
case 0x68b0f4:c.instructions+=4;goto B68b0f4;
case 0x68b0f7:c.instructions+=3;goto B68b0f7;
case 0x68b0fa:c.instructions+=2;goto B68b0fa;
case 0x68b0fc:c.instructions+=1;goto B68b0fc;
case 0x68b0fe:goto L68b0fe;
case 0x68b102:c.instructions+=14;goto B68b102;
case 0x68b106:c.instructions+=13;goto B68b106;
case 0x68b109:c.instructions+=12;goto B68b109;
case 0x68b10e:c.instructions+=11;goto B68b10e;
case 0x68b112:c.instructions+=10;goto B68b112;
case 0x68b115:c.instructions+=9;goto B68b115;
case 0x68b118:c.instructions+=8;goto B68b118;
case 0x68b11c:c.instructions+=7;goto B68b11c;
case 0x68b11f:c.instructions+=6;goto B68b11f;
case 0x68b123:c.instructions+=5;goto B68b123;
case 0x68b126:c.instructions+=4;goto B68b126;
case 0x68b129:c.instructions+=3;goto B68b129;
case 0x68b12d:c.instructions+=2;goto B68b12d;
case 0x68b130:c.instructions+=1;goto B68b130;
case 0x68b132:goto L68b132;
case 0x68b136:c.instructions+=22;goto B68b136;
case 0x68b13a:c.instructions+=21;goto B68b13a;
case 0x68b13e:c.instructions+=20;goto B68b13e;
case 0x68b142:c.instructions+=19;goto B68b142;
case 0x68b146:c.instructions+=18;goto B68b146;
case 0x68b14a:c.instructions+=17;goto B68b14a;
case 0x68b14d:c.instructions+=16;goto B68b14d;
case 0x68b150:c.instructions+=15;goto B68b150;
case 0x68b155:c.instructions+=14;goto B68b155;
case 0x68b159:c.instructions+=13;goto B68b159;
case 0x68b15c:c.instructions+=12;goto B68b15c;
case 0x68b15f:c.instructions+=11;goto B68b15f;
case 0x68b163:c.instructions+=10;goto B68b163;
case 0x68b167:c.instructions+=9;goto B68b167;
case 0x68b16b:c.instructions+=8;goto B68b16b;
case 0x68b16e:c.instructions+=7;goto B68b16e;
case 0x68b172:c.instructions+=6;goto B68b172;
case 0x68b175:c.instructions+=5;goto B68b175;
case 0x68b178:c.instructions+=4;goto B68b178;
case 0x68b17c:c.instructions+=3;goto B68b17c;
case 0x68b180:c.instructions+=2;goto B68b180;
case 0x68b183:c.instructions+=1;goto B68b183;
case 0x68b187:goto L68b187;
case 0x68b18a:c.instructions+=9;goto B68b18a;
case 0x68b18d:c.instructions+=8;goto B68b18d;
case 0x68b190:c.instructions+=7;goto B68b190;
case 0x68b193:c.instructions+=6;goto B68b193;
case 0x68b196:c.instructions+=5;goto B68b196;
case 0x68b198:c.instructions+=4;goto B68b198;
case 0x68b199:c.instructions+=3;goto B68b199;
case 0x68b19b:c.instructions+=2;goto B68b19b;
case 0x68b19c:c.instructions+=1;goto B68b19c;
case 0x68b19f:goto L68b19f;
case 0x68b1a1:c.instructions+=95;goto B68b1a1;
case 0x68b1a2:c.instructions+=94;goto B68b1a2;
case 0x68b1a4:c.instructions+=93;goto B68b1a4;
case 0x68b1a5:c.instructions+=92;goto B68b1a5;
case 0x68b1a8:c.instructions+=91;goto B68b1a8;
case 0x68b1ab:c.instructions+=90;goto B68b1ab;
case 0x68b1ac:c.instructions+=89;goto B68b1ac;
case 0x68b1ae:c.instructions+=88;goto B68b1ae;
case 0x68b1b1:c.instructions+=87;goto B68b1b1;
case 0x68b1b3:c.instructions+=86;goto B68b1b3;
case 0x68b1b6:c.instructions+=85;goto B68b1b6;
case 0x68b1b8:c.instructions+=84;goto B68b1b8;
case 0x68b1bb:c.instructions+=83;goto B68b1bb;
case 0x68b1c0:c.instructions+=82;goto B68b1c0;
case 0x68b1c4:c.instructions+=81;goto B68b1c4;
case 0x68b1c7:c.instructions+=80;goto B68b1c7;
case 0x68b1ca:c.instructions+=79;goto B68b1ca;
case 0x68b1cd:c.instructions+=78;goto B68b1cd;
case 0x68b1d2:c.instructions+=77;goto B68b1d2;
case 0x68b1d6:c.instructions+=76;goto B68b1d6;
case 0x68b1da:c.instructions+=75;goto B68b1da;
case 0x68b1dd:c.instructions+=74;goto B68b1dd;
case 0x68b1e0:c.instructions+=73;goto B68b1e0;
case 0x68b1e5:c.instructions+=72;goto B68b1e5;
case 0x68b1e9:c.instructions+=71;goto B68b1e9;
case 0x68b1f0:c.instructions+=70;goto B68b1f0;
case 0x68b1f3:c.instructions+=69;goto B68b1f3;
case 0x68b1f6:c.instructions+=68;goto B68b1f6;
case 0x68b1fb:c.instructions+=67;goto B68b1fb;
case 0x68b1ff:c.instructions+=66;goto B68b1ff;
case 0x68b206:c.instructions+=65;goto B68b206;
case 0x68b209:c.instructions+=64;goto B68b209;
case 0x68b20c:c.instructions+=63;goto B68b20c;
case 0x68b211:c.instructions+=62;goto B68b211;
case 0x68b215:c.instructions+=61;goto B68b215;
case 0x68b219:c.instructions+=60;goto B68b219;
case 0x68b21c:c.instructions+=59;goto B68b21c;
case 0x68b21f:c.instructions+=58;goto B68b21f;
case 0x68b224:c.instructions+=57;goto B68b224;
case 0x68b228:c.instructions+=56;goto B68b228;
case 0x68b22c:c.instructions+=55;goto B68b22c;
case 0x68b22f:c.instructions+=54;goto B68b22f;
case 0x68b232:c.instructions+=53;goto B68b232;
case 0x68b237:c.instructions+=52;goto B68b237;
case 0x68b23b:c.instructions+=51;goto B68b23b;
case 0x68b242:c.instructions+=50;goto B68b242;
case 0x68b245:c.instructions+=49;goto B68b245;
case 0x68b248:c.instructions+=48;goto B68b248;
case 0x68b24d:c.instructions+=47;goto B68b24d;
case 0x68b251:c.instructions+=46;goto B68b251;
case 0x68b258:c.instructions+=45;goto B68b258;
case 0x68b25b:c.instructions+=44;goto B68b25b;
case 0x68b25e:c.instructions+=43;goto B68b25e;
case 0x68b263:c.instructions+=42;goto B68b263;
case 0x68b267:c.instructions+=41;goto B68b267;
case 0x68b26b:c.instructions+=40;goto B68b26b;
case 0x68b26e:c.instructions+=39;goto B68b26e;
case 0x68b271:c.instructions+=38;goto B68b271;
case 0x68b276:c.instructions+=37;goto B68b276;
case 0x68b27a:c.instructions+=36;goto B68b27a;
case 0x68b27e:c.instructions+=35;goto B68b27e;
case 0x68b281:c.instructions+=34;goto B68b281;
case 0x68b284:c.instructions+=33;goto B68b284;
case 0x68b289:c.instructions+=32;goto B68b289;
case 0x68b28d:c.instructions+=31;goto B68b28d;
case 0x68b294:c.instructions+=30;goto B68b294;
case 0x68b297:c.instructions+=29;goto B68b297;
case 0x68b29a:c.instructions+=28;goto B68b29a;
case 0x68b29f:c.instructions+=27;goto B68b29f;
case 0x68b2a3:c.instructions+=26;goto B68b2a3;
case 0x68b2aa:c.instructions+=25;goto B68b2aa;
case 0x68b2ad:c.instructions+=24;goto B68b2ad;
case 0x68b2b0:c.instructions+=23;goto B68b2b0;
case 0x68b2b5:c.instructions+=22;goto B68b2b5;
case 0x68b2b9:c.instructions+=21;goto B68b2b9;
case 0x68b2bd:c.instructions+=20;goto B68b2bd;
case 0x68b2c0:c.instructions+=19;goto B68b2c0;
case 0x68b2c3:c.instructions+=18;goto B68b2c3;
case 0x68b2c8:c.instructions+=17;goto B68b2c8;
case 0x68b2cc:c.instructions+=16;goto B68b2cc;
case 0x68b2d0:c.instructions+=15;goto B68b2d0;
case 0x68b2d3:c.instructions+=14;goto B68b2d3;
case 0x68b2d6:c.instructions+=13;goto B68b2d6;
case 0x68b2db:c.instructions+=12;goto B68b2db;
case 0x68b2df:c.instructions+=11;goto B68b2df;
case 0x68b2e6:c.instructions+=10;goto B68b2e6;
case 0x68b2e9:c.instructions+=9;goto B68b2e9;
case 0x68b2ec:c.instructions+=8;goto B68b2ec;
case 0x68b2f1:c.instructions+=7;goto B68b2f1;
case 0x68b2f5:c.instructions+=6;goto B68b2f5;
case 0x68b2fc:c.instructions+=5;goto B68b2fc;
case 0x68b2fe:c.instructions+=4;goto B68b2fe;
case 0x68b2ff:c.instructions+=3;goto B68b2ff;
case 0x68b301:c.instructions+=2;goto B68b301;
case 0x68b302:c.instructions+=1;goto B68b302;
case 0x68b305:goto L68b305;
case 0x68b307:c.instructions+=24;goto B68b307;
case 0x68b308:c.instructions+=23;goto B68b308;
case 0x68b30a:c.instructions+=22;goto B68b30a;
case 0x68b30b:c.instructions+=21;goto B68b30b;
case 0x68b30e:c.instructions+=20;goto B68b30e;
case 0x68b311:c.instructions+=19;goto B68b311;
case 0x68b312:c.instructions+=18;goto B68b312;
case 0x68b314:c.instructions+=17;goto B68b314;
case 0x68b31a:c.instructions+=16;goto B68b31a;
case 0x68b31d:c.instructions+=15;goto B68b31d;
case 0x68b31e:c.instructions+=14;goto B68b31e;
case 0x68b31f:c.instructions+=13;goto B68b31f;
case 0x68b322:c.instructions+=12;goto B68b322;
case 0x68b324:c.instructions+=11;goto B68b324;
case 0x68b326:c.instructions+=10;goto B68b326;
case 0x68b329:c.instructions+=9;goto B68b329;
case 0x68b32a:c.instructions+=8;goto B68b32a;
case 0x68b32c:c.instructions+=7;goto B68b32c;
case 0x68b32e:c.instructions+=6;goto B68b32e;
case 0x68b330:c.instructions+=5;goto B68b330;
case 0x68b332:c.instructions+=4;goto B68b332;
case 0x68b335:c.instructions+=3;goto B68b335;
case 0x68b338:c.instructions+=2;goto B68b338;
case 0x68b33b:c.instructions+=1;goto B68b33b;
case 0x68b341:goto L68b341;
case 0x68b344:c.instructions+=2;goto B68b344;
case 0x68b34a:c.instructions+=1;goto B68b34a;
case 0x68b34f:goto L68b34f;
case 0x68b351:c.instructions+=3;goto B68b351;
case 0x68b354:c.instructions+=2;goto B68b354;
case 0x68b357:c.instructions+=1;goto B68b357;
case 0x68b35d:goto L68b35d;
case 0x68b361:c.instructions+=3;goto B68b361;
case 0x68b365:c.instructions+=2;goto B68b365;
case 0x68b368:c.instructions+=1;goto B68b368;
case 0x68b36b:goto L68b36b;
case 0x68b36f:c.instructions+=80;goto B68b36f;
case 0x68b372:c.instructions+=79;goto B68b372;
case 0x68b375:c.instructions+=78;goto B68b375;
case 0x68b379:c.instructions+=77;goto B68b379;
case 0x68b37c:c.instructions+=76;goto B68b37c;
case 0x68b381:c.instructions+=75;goto B68b381;
case 0x68b384:c.instructions+=74;goto B68b384;
case 0x68b387:c.instructions+=73;goto B68b387;
case 0x68b38b:c.instructions+=72;goto B68b38b;
case 0x68b38f:c.instructions+=71;goto B68b38f;
case 0x68b393:c.instructions+=70;goto B68b393;
case 0x68b399:c.instructions+=69;goto B68b399;
case 0x68b39c:c.instructions+=68;goto B68b39c;
case 0x68b3a2:c.instructions+=67;goto B68b3a2;
case 0x68b3a5:c.instructions+=66;goto B68b3a5;
case 0x68b3ab:c.instructions+=65;goto B68b3ab;
case 0x68b3ae:c.instructions+=64;goto B68b3ae;
case 0x68b3b1:c.instructions+=63;goto B68b3b1;
case 0x68b3b5:c.instructions+=62;goto B68b3b5;
case 0x68b3b8:c.instructions+=61;goto B68b3b8;
case 0x68b3bf:c.instructions+=60;goto B68b3bf;
case 0x68b3c2:c.instructions+=59;goto B68b3c2;
case 0x68b3c9:c.instructions+=58;goto B68b3c9;
case 0x68b3cc:c.instructions+=57;goto B68b3cc;
case 0x68b3cf:c.instructions+=56;goto B68b3cf;
case 0x68b3d2:c.instructions+=55;goto B68b3d2;
case 0x68b3d9:c.instructions+=54;goto B68b3d9;
case 0x68b3dc:c.instructions+=53;goto B68b3dc;
case 0x68b3df:c.instructions+=52;goto B68b3df;
case 0x68b3e3:c.instructions+=51;goto B68b3e3;
case 0x68b3e6:c.instructions+=50;goto B68b3e6;
case 0x68b3ed:c.instructions+=49;goto B68b3ed;
case 0x68b3f0:c.instructions+=48;goto B68b3f0;
case 0x68b3f7:c.instructions+=47;goto B68b3f7;
case 0x68b3fa:c.instructions+=46;goto B68b3fa;
case 0x68b3fd:c.instructions+=45;goto B68b3fd;
case 0x68b400:c.instructions+=44;goto B68b400;
case 0x68b407:c.instructions+=43;goto B68b407;
case 0x68b40a:c.instructions+=42;goto B68b40a;
case 0x68b40e:c.instructions+=41;goto B68b40e;
case 0x68b411:c.instructions+=40;goto B68b411;
case 0x68b418:c.instructions+=39;goto B68b418;
case 0x68b41f:c.instructions+=38;goto B68b41f;
case 0x68b422:c.instructions+=37;goto B68b422;
case 0x68b429:c.instructions+=36;goto B68b429;
case 0x68b430:c.instructions+=35;goto B68b430;
case 0x68b433:c.instructions+=34;goto B68b433;
case 0x68b437:c.instructions+=33;goto B68b437;
case 0x68b43b:c.instructions+=32;goto B68b43b;
case 0x68b43e:c.instructions+=31;goto B68b43e;
case 0x68b441:c.instructions+=30;goto B68b441;
case 0x68b444:c.instructions+=29;goto B68b444;
case 0x68b447:c.instructions+=28;goto B68b447;
case 0x68b44a:c.instructions+=27;goto B68b44a;
case 0x68b44d:c.instructions+=26;goto B68b44d;
case 0x68b451:c.instructions+=25;goto B68b451;
case 0x68b454:c.instructions+=24;goto B68b454;
case 0x68b458:c.instructions+=23;goto B68b458;
case 0x68b45b:c.instructions+=22;goto B68b45b;
case 0x68b45e:c.instructions+=21;goto B68b45e;
case 0x68b461:c.instructions+=20;goto B68b461;
case 0x68b464:c.instructions+=19;goto B68b464;
case 0x68b467:c.instructions+=18;goto B68b467;
case 0x68b46b:c.instructions+=17;goto B68b46b;
case 0x68b46f:c.instructions+=16;goto B68b46f;
case 0x68b474:c.instructions+=15;goto B68b474;
case 0x68b477:c.instructions+=14;goto B68b477;
case 0x68b47b:c.instructions+=13;goto B68b47b;
case 0x68b47e:c.instructions+=12;goto B68b47e;
case 0x68b481:c.instructions+=11;goto B68b481;
case 0x68b486:c.instructions+=10;goto B68b486;
case 0x68b48a:c.instructions+=9;goto B68b48a;
case 0x68b48f:c.instructions+=8;goto B68b48f;
case 0x68b491:c.instructions+=7;goto B68b491;
case 0x68b494:c.instructions+=6;goto B68b494;
case 0x68b496:c.instructions+=5;goto B68b496;
case 0x68b498:c.instructions+=4;goto B68b498;
case 0x68b49b:c.instructions+=3;goto B68b49b;
case 0x68b49d:c.instructions+=2;goto B68b49d;
case 0x68b4a0:c.instructions+=1;goto B68b4a0;
case 0x68b4a6:goto L68b4a6;
case 0x68b4a8:goto L68b4a8;
case 0x68b4ab:goto L68b4ab;
case 0x68b4ae:c.instructions+=2;goto B68b4ae;
case 0x68b4b0:c.instructions+=1;goto B68b4b0;
case 0x68b4b2:goto L68b4b2;
case 0x68b4b5:goto L68b4b5;
case 0x68b4b8:c.instructions+=3;goto B68b4b8;
case 0x68b4b9:c.instructions+=2;goto B68b4b9;
case 0x68b4ba:c.instructions+=1;goto B68b4ba;
case 0x68b4bf:goto L68b4bf;
case 0x68b4c2:c.instructions+=3;goto B68b4c2;
case 0x68b4c5:c.instructions+=2;goto B68b4c5;
case 0x68b4c8:c.instructions+=1;goto B68b4c8;
case 0x68b4ca:goto L68b4ca;
case 0x68b4cd:c.instructions+=7;goto B68b4cd;
case 0x68b4ce:c.instructions+=6;goto B68b4ce;
case 0x68b4cf:c.instructions+=5;goto B68b4cf;
case 0x68b4d1:c.instructions+=4;goto B68b4d1;
case 0x68b4d2:c.instructions+=3;goto B68b4d2;
case 0x68b4d4:c.instructions+=2;goto B68b4d4;
case 0x68b4d5:c.instructions+=1;goto B68b4d5;
case 0x68b4d8:goto L68b4d8;
case 0x68b4da:c.instructions+=26;goto B68b4da;
case 0x68b4db:c.instructions+=25;goto B68b4db;
case 0x68b4dd:c.instructions+=24;goto B68b4dd;
case 0x68b4de:c.instructions+=23;goto B68b4de;
case 0x68b4e1:c.instructions+=22;goto B68b4e1;
case 0x68b4e4:c.instructions+=21;goto B68b4e4;
case 0x68b4e5:c.instructions+=20;goto B68b4e5;
case 0x68b4e7:c.instructions+=19;goto B68b4e7;
case 0x68b4ed:c.instructions+=18;goto B68b4ed;
case 0x68b4f0:c.instructions+=17;goto B68b4f0;
case 0x68b4f1:c.instructions+=16;goto B68b4f1;
case 0x68b4f4:c.instructions+=15;goto B68b4f4;
case 0x68b4f5:c.instructions+=14;goto B68b4f5;
case 0x68b4f8:c.instructions+=13;goto B68b4f8;
case 0x68b4fa:c.instructions+=12;goto B68b4fa;
case 0x68b4fc:c.instructions+=11;goto B68b4fc;
case 0x68b4fd:c.instructions+=10;goto B68b4fd;
case 0x68b500:c.instructions+=9;goto B68b500;
case 0x68b502:c.instructions+=8;goto B68b502;
case 0x68b504:c.instructions+=7;goto B68b504;
case 0x68b506:c.instructions+=6;goto B68b506;
case 0x68b508:c.instructions+=5;goto B68b508;
case 0x68b50b:c.instructions+=4;goto B68b50b;
case 0x68b50e:c.instructions+=3;goto B68b50e;
case 0x68b511:c.instructions+=2;goto B68b511;
case 0x68b514:c.instructions+=1;goto B68b514;
case 0x68b51a:goto L68b51a;
case 0x68b51d:c.instructions+=2;goto B68b51d;
case 0x68b523:c.instructions+=1;goto B68b523;
case 0x68b528:goto L68b528;
case 0x68b52b:c.instructions+=3;goto B68b52b;
case 0x68b52d:c.instructions+=2;goto B68b52d;
case 0x68b530:c.instructions+=1;goto B68b530;
case 0x68b536:goto L68b536;
case 0x68b53a:c.instructions+=2;goto B68b53a;
case 0x68b53e:c.instructions+=1;goto B68b53e;
case 0x68b541:goto L68b541;
case 0x68b544:c.instructions+=59;goto B68b544;
case 0x68b548:c.instructions+=58;goto B68b548;
case 0x68b54b:c.instructions+=57;goto B68b54b;
case 0x68b54e:c.instructions+=56;goto B68b54e;
case 0x68b552:c.instructions+=55;goto B68b552;
case 0x68b555:c.instructions+=54;goto B68b555;
case 0x68b558:c.instructions+=53;goto B68b558;
case 0x68b55b:c.instructions+=52;goto B68b55b;
case 0x68b55f:c.instructions+=51;goto B68b55f;
case 0x68b563:c.instructions+=50;goto B68b563;
case 0x68b567:c.instructions+=49;goto B68b567;
case 0x68b56a:c.instructions+=48;goto B68b56a;
case 0x68b571:c.instructions+=47;goto B68b571;
case 0x68b574:c.instructions+=46;goto B68b574;
case 0x68b57b:c.instructions+=45;goto B68b57b;
case 0x68b57e:c.instructions+=44;goto B68b57e;
case 0x68b581:c.instructions+=43;goto B68b581;
case 0x68b585:c.instructions+=42;goto B68b585;
case 0x68b588:c.instructions+=41;goto B68b588;
case 0x68b58f:c.instructions+=40;goto B68b58f;
case 0x68b592:c.instructions+=39;goto B68b592;
case 0x68b599:c.instructions+=38;goto B68b599;
case 0x68b59c:c.instructions+=37;goto B68b59c;
case 0x68b5a0:c.instructions+=36;goto B68b5a0;
case 0x68b5a3:c.instructions+=35;goto B68b5a3;
case 0x68b5aa:c.instructions+=34;goto B68b5aa;
case 0x68b5b1:c.instructions+=33;goto B68b5b1;
case 0x68b5b4:c.instructions+=32;goto B68b5b4;
case 0x68b5bb:c.instructions+=31;goto B68b5bb;
case 0x68b5c2:c.instructions+=30;goto B68b5c2;
case 0x68b5c5:c.instructions+=29;goto B68b5c5;
case 0x68b5c8:c.instructions+=28;goto B68b5c8;
case 0x68b5cb:c.instructions+=27;goto B68b5cb;
case 0x68b5cf:c.instructions+=26;goto B68b5cf;
case 0x68b5d2:c.instructions+=25;goto B68b5d2;
case 0x68b5d6:c.instructions+=24;goto B68b5d6;
case 0x68b5d9:c.instructions+=23;goto B68b5d9;
case 0x68b5dc:c.instructions+=22;goto B68b5dc;
case 0x68b5df:c.instructions+=21;goto B68b5df;
case 0x68b5e2:c.instructions+=20;goto B68b5e2;
case 0x68b5e5:c.instructions+=19;goto B68b5e5;
case 0x68b5e9:c.instructions+=18;goto B68b5e9;
case 0x68b5ed:c.instructions+=17;goto B68b5ed;
case 0x68b5f2:c.instructions+=16;goto B68b5f2;
case 0x68b5f5:c.instructions+=15;goto B68b5f5;
case 0x68b5f9:c.instructions+=14;goto B68b5f9;
case 0x68b5fc:c.instructions+=13;goto B68b5fc;
case 0x68b5ff:c.instructions+=12;goto B68b5ff;
case 0x68b604:c.instructions+=11;goto B68b604;
case 0x68b608:c.instructions+=10;goto B68b608;
case 0x68b60d:c.instructions+=9;goto B68b60d;
case 0x68b60f:c.instructions+=8;goto B68b60f;
case 0x68b612:c.instructions+=7;goto B68b612;
case 0x68b614:c.instructions+=6;goto B68b614;
case 0x68b617:c.instructions+=5;goto B68b617;
case 0x68b619:c.instructions+=4;goto B68b619;
case 0x68b61c:c.instructions+=3;goto B68b61c;
case 0x68b61e:c.instructions+=2;goto B68b61e;
case 0x68b621:c.instructions+=1;goto B68b621;
case 0x68b627:goto L68b627;
case 0x68b62a:c.instructions+=2;goto B68b62a;
case 0x68b62c:c.instructions+=1;goto B68b62c;
case 0x68b62e:goto L68b62e;
case 0x68b631:goto L68b631;
case 0x68b634:c.instructions+=3;goto B68b634;
case 0x68b637:c.instructions+=2;goto B68b637;
case 0x68b638:c.instructions+=1;goto B68b638;
case 0x68b63d:goto L68b63d;
case 0x68b640:c.instructions+=4;goto B68b640;
case 0x68b643:c.instructions+=3;goto B68b643;
case 0x68b645:c.instructions+=2;goto B68b645;
case 0x68b648:c.instructions+=1;goto B68b648;
case 0x68b64a:goto L68b64a;
case 0x68b64d:c.instructions+=7;goto B68b64d;
case 0x68b64e:c.instructions+=6;goto B68b64e;
case 0x68b64f:c.instructions+=5;goto B68b64f;
case 0x68b651:c.instructions+=4;goto B68b651;
case 0x68b652:c.instructions+=3;goto B68b652;
case 0x68b654:c.instructions+=2;goto B68b654;
case 0x68b655:c.instructions+=1;goto B68b655;
case 0x68b658:goto L68b658;
case 0x68b65a:c.instructions+=24;goto B68b65a;
case 0x68b65b:c.instructions+=23;goto B68b65b;
case 0x68b65d:c.instructions+=22;goto B68b65d;
case 0x68b65e:c.instructions+=21;goto B68b65e;
case 0x68b661:c.instructions+=20;goto B68b661;
case 0x68b664:c.instructions+=19;goto B68b664;
case 0x68b665:c.instructions+=18;goto B68b665;
case 0x68b667:c.instructions+=17;goto B68b667;
case 0x68b66d:c.instructions+=16;goto B68b66d;
case 0x68b670:c.instructions+=15;goto B68b670;
case 0x68b671:c.instructions+=14;goto B68b671;
case 0x68b672:c.instructions+=13;goto B68b672;
case 0x68b675:c.instructions+=12;goto B68b675;
case 0x68b677:c.instructions+=11;goto B68b677;
case 0x68b679:c.instructions+=10;goto B68b679;
case 0x68b67c:c.instructions+=9;goto B68b67c;
case 0x68b67d:c.instructions+=8;goto B68b67d;
case 0x68b67f:c.instructions+=7;goto B68b67f;
case 0x68b681:c.instructions+=6;goto B68b681;
case 0x68b683:c.instructions+=5;goto B68b683;
case 0x68b685:c.instructions+=4;goto B68b685;
case 0x68b688:c.instructions+=3;goto B68b688;
case 0x68b68b:c.instructions+=2;goto B68b68b;
case 0x68b68e:c.instructions+=1;goto B68b68e;
case 0x68b694:goto L68b694;
case 0x68b697:c.instructions+=2;goto B68b697;
case 0x68b69d:c.instructions+=1;goto B68b69d;
case 0x68b6a2:goto L68b6a2;
case 0x68b6a4:c.instructions+=3;goto B68b6a4;
case 0x68b6a7:c.instructions+=2;goto B68b6a7;
case 0x68b6aa:c.instructions+=1;goto B68b6aa;
case 0x68b6b0:goto L68b6b0;
case 0x68b6b4:c.instructions+=3;goto B68b6b4;
case 0x68b6b8:c.instructions+=2;goto B68b6b8;
case 0x68b6bb:c.instructions+=1;goto B68b6bb;
case 0x68b6be:goto L68b6be;
case 0x68b6c1:c.instructions+=53;goto B68b6c1;
case 0x68b6c5:c.instructions+=52;goto B68b6c5;
case 0x68b6c8:c.instructions+=51;goto B68b6c8;
case 0x68b6cc:c.instructions+=50;goto B68b6cc;
case 0x68b6cf:c.instructions+=49;goto B68b6cf;
case 0x68b6d2:c.instructions+=48;goto B68b6d2;
case 0x68b6d6:c.instructions+=47;goto B68b6d6;
case 0x68b6da:c.instructions+=46;goto B68b6da;
case 0x68b6de:c.instructions+=45;goto B68b6de;
case 0x68b6e1:c.instructions+=44;goto B68b6e1;
case 0x68b6e8:c.instructions+=43;goto B68b6e8;
case 0x68b6eb:c.instructions+=42;goto B68b6eb;
case 0x68b6f2:c.instructions+=41;goto B68b6f2;
case 0x68b6f5:c.instructions+=40;goto B68b6f5;
case 0x68b6f8:c.instructions+=39;goto B68b6f8;
case 0x68b6fc:c.instructions+=38;goto B68b6fc;
case 0x68b6ff:c.instructions+=37;goto B68b6ff;
case 0x68b702:c.instructions+=36;goto B68b702;
case 0x68b705:c.instructions+=35;goto B68b705;
case 0x68b708:c.instructions+=34;goto B68b708;
case 0x68b70b:c.instructions+=33;goto B68b70b;
case 0x68b70e:c.instructions+=32;goto B68b70e;
case 0x68b711:c.instructions+=31;goto B68b711;
case 0x68b714:c.instructions+=30;goto B68b714;
case 0x68b717:c.instructions+=29;goto B68b717;
case 0x68b71e:c.instructions+=28;goto B68b71e;
case 0x68b725:c.instructions+=27;goto B68b725;
case 0x68b728:c.instructions+=26;goto B68b728;
case 0x68b72f:c.instructions+=25;goto B68b72f;
case 0x68b736:c.instructions+=24;goto B68b736;
case 0x68b739:c.instructions+=23;goto B68b739;
case 0x68b73c:c.instructions+=22;goto B68b73c;
case 0x68b73f:c.instructions+=21;goto B68b73f;
case 0x68b743:c.instructions+=20;goto B68b743;
case 0x68b746:c.instructions+=19;goto B68b746;
case 0x68b74a:c.instructions+=18;goto B68b74a;
case 0x68b74d:c.instructions+=17;goto B68b74d;
case 0x68b750:c.instructions+=16;goto B68b750;
case 0x68b753:c.instructions+=15;goto B68b753;
case 0x68b756:c.instructions+=14;goto B68b756;
case 0x68b759:c.instructions+=13;goto B68b759;
case 0x68b75d:c.instructions+=12;goto B68b75d;
case 0x68b760:c.instructions+=11;goto B68b760;
case 0x68b763:c.instructions+=10;goto B68b763;
case 0x68b767:c.instructions+=9;goto B68b767;
case 0x68b76b:c.instructions+=8;goto B68b76b;
case 0x68b76d:c.instructions+=7;goto B68b76d;
case 0x68b770:c.instructions+=6;goto B68b770;
case 0x68b772:c.instructions+=5;goto B68b772;
case 0x68b774:c.instructions+=4;goto B68b774;
case 0x68b777:c.instructions+=3;goto B68b777;
case 0x68b779:c.instructions+=2;goto B68b779;
case 0x68b77c:c.instructions+=1;goto B68b77c;
case 0x68b782:goto L68b782;
case 0x68b784:goto L68b784;
case 0x68b787:goto L68b787;
case 0x68b78a:c.instructions+=2;goto B68b78a;
case 0x68b78c:c.instructions+=1;goto B68b78c;
case 0x68b78e:goto L68b78e;
case 0x68b791:goto L68b791;
case 0x68b794:c.instructions+=3;goto B68b794;
case 0x68b795:c.instructions+=2;goto B68b795;
case 0x68b796:c.instructions+=1;goto B68b796;
case 0x68b79b:goto L68b79b;
case 0x68b79e:c.instructions+=3;goto B68b79e;
case 0x68b7a1:c.instructions+=2;goto B68b7a1;
case 0x68b7a4:c.instructions+=1;goto B68b7a4;
case 0x68b7a6:goto L68b7a6;
case 0x68b7a9:c.instructions+=7;goto B68b7a9;
case 0x68b7aa:c.instructions+=6;goto B68b7aa;
case 0x68b7ab:c.instructions+=5;goto B68b7ab;
case 0x68b7ad:c.instructions+=4;goto B68b7ad;
case 0x68b7ae:c.instructions+=3;goto B68b7ae;
case 0x68b7b0:c.instructions+=2;goto B68b7b0;
case 0x68b7b1:c.instructions+=1;goto B68b7b1;
case 0x68b7b4:goto L68b7b4;
case 0x68b7b6:c.instructions+=24;goto B68b7b6;
case 0x68b7b7:c.instructions+=23;goto B68b7b7;
case 0x68b7b9:c.instructions+=22;goto B68b7b9;
case 0x68b7ba:c.instructions+=21;goto B68b7ba;
case 0x68b7bd:c.instructions+=20;goto B68b7bd;
case 0x68b7c0:c.instructions+=19;goto B68b7c0;
case 0x68b7c1:c.instructions+=18;goto B68b7c1;
case 0x68b7c3:c.instructions+=17;goto B68b7c3;
case 0x68b7c9:c.instructions+=16;goto B68b7c9;
case 0x68b7cc:c.instructions+=15;goto B68b7cc;
case 0x68b7cd:c.instructions+=14;goto B68b7cd;
case 0x68b7ce:c.instructions+=13;goto B68b7ce;
case 0x68b7d1:c.instructions+=12;goto B68b7d1;
case 0x68b7d3:c.instructions+=11;goto B68b7d3;
case 0x68b7d5:c.instructions+=10;goto B68b7d5;
case 0x68b7d8:c.instructions+=9;goto B68b7d8;
case 0x68b7d9:c.instructions+=8;goto B68b7d9;
case 0x68b7db:c.instructions+=7;goto B68b7db;
case 0x68b7dd:c.instructions+=6;goto B68b7dd;
case 0x68b7df:c.instructions+=5;goto B68b7df;
case 0x68b7e1:c.instructions+=4;goto B68b7e1;
case 0x68b7e4:c.instructions+=3;goto B68b7e4;
case 0x68b7e7:c.instructions+=2;goto B68b7e7;
case 0x68b7ea:c.instructions+=1;goto B68b7ea;
case 0x68b7f0:goto L68b7f0;
case 0x68b7f3:c.instructions+=2;goto B68b7f3;
case 0x68b7f9:c.instructions+=1;goto B68b7f9;
case 0x68b7fe:goto L68b7fe;
case 0x68b800:c.instructions+=3;goto B68b800;
case 0x68b803:c.instructions+=2;goto B68b803;
case 0x68b806:c.instructions+=1;goto B68b806;
case 0x68b80c:goto L68b80c;
case 0x68b810:c.instructions+=3;goto B68b810;
case 0x68b814:c.instructions+=2;goto B68b814;
case 0x68b817:c.instructions+=1;goto B68b817;
case 0x68b81a:goto L68b81a;
case 0x68b81d:c.instructions+=33;goto B68b81d;
case 0x68b821:c.instructions+=32;goto B68b821;
case 0x68b824:c.instructions+=31;goto B68b824;
case 0x68b828:c.instructions+=30;goto B68b828;
case 0x68b82b:c.instructions+=29;goto B68b82b;
case 0x68b82e:c.instructions+=28;goto B68b82e;
case 0x68b832:c.instructions+=27;goto B68b832;
case 0x68b836:c.instructions+=26;goto B68b836;
case 0x68b839:c.instructions+=25;goto B68b839;
case 0x68b840:c.instructions+=24;goto B68b840;
case 0x68b847:c.instructions+=23;goto B68b847;
case 0x68b84a:c.instructions+=22;goto B68b84a;
case 0x68b84e:c.instructions+=21;goto B68b84e;
case 0x68b851:c.instructions+=20;goto B68b851;
case 0x68b858:c.instructions+=19;goto B68b858;
case 0x68b85f:c.instructions+=18;goto B68b85f;
case 0x68b862:c.instructions+=17;goto B68b862;
case 0x68b865:c.instructions+=16;goto B68b865;
case 0x68b868:c.instructions+=15;goto B68b868;
case 0x68b86b:c.instructions+=14;goto B68b86b;
case 0x68b86e:c.instructions+=13;goto B68b86e;
case 0x68b872:c.instructions+=12;goto B68b872;
case 0x68b875:c.instructions+=11;goto B68b875;
case 0x68b878:c.instructions+=10;goto B68b878;
case 0x68b87c:c.instructions+=9;goto B68b87c;
case 0x68b880:c.instructions+=8;goto B68b880;
case 0x68b882:c.instructions+=7;goto B68b882;
case 0x68b885:c.instructions+=6;goto B68b885;
case 0x68b887:c.instructions+=5;goto B68b887;
case 0x68b889:c.instructions+=4;goto B68b889;
case 0x68b88c:c.instructions+=3;goto B68b88c;
case 0x68b88e:c.instructions+=2;goto B68b88e;
case 0x68b891:c.instructions+=1;goto B68b891;
case 0x68b893:goto L68b893;
case 0x68b895:goto L68b895;
case 0x68b898:goto L68b898;
case 0x68b89b:c.instructions+=2;goto B68b89b;
case 0x68b89d:c.instructions+=1;goto B68b89d;
case 0x68b89f:goto L68b89f;
case 0x68b8a2:goto L68b8a2;
case 0x68b8a5:c.instructions+=3;goto B68b8a5;
case 0x68b8a6:c.instructions+=2;goto B68b8a6;
case 0x68b8a7:c.instructions+=1;goto B68b8a7;
case 0x68b8ac:goto L68b8ac;
case 0x68b8af:c.instructions+=3;goto B68b8af;
case 0x68b8b2:c.instructions+=2;goto B68b8b2;
case 0x68b8b5:c.instructions+=1;goto B68b8b5;
case 0x68b8b7:goto L68b8b7;
case 0x68b8ba:c.instructions+=7;goto B68b8ba;
case 0x68b8bb:c.instructions+=6;goto B68b8bb;
case 0x68b8bc:c.instructions+=5;goto B68b8bc;
case 0x68b8be:c.instructions+=4;goto B68b8be;
case 0x68b8bf:c.instructions+=3;goto B68b8bf;
case 0x68b8c1:c.instructions+=2;goto B68b8c1;
case 0x68b8c2:c.instructions+=1;goto B68b8c2;
case 0x68b8c5:goto L68b8c5;
case 0x68b8c7:c.instructions+=24;goto B68b8c7;
case 0x68b8c8:c.instructions+=23;goto B68b8c8;
case 0x68b8ca:c.instructions+=22;goto B68b8ca;
case 0x68b8cb:c.instructions+=21;goto B68b8cb;
case 0x68b8ce:c.instructions+=20;goto B68b8ce;
case 0x68b8d1:c.instructions+=19;goto B68b8d1;
case 0x68b8d2:c.instructions+=18;goto B68b8d2;
case 0x68b8d4:c.instructions+=17;goto B68b8d4;
case 0x68b8da:c.instructions+=16;goto B68b8da;
case 0x68b8dd:c.instructions+=15;goto B68b8dd;
case 0x68b8de:c.instructions+=14;goto B68b8de;
case 0x68b8df:c.instructions+=13;goto B68b8df;
case 0x68b8e2:c.instructions+=12;goto B68b8e2;
case 0x68b8e4:c.instructions+=11;goto B68b8e4;
case 0x68b8e6:c.instructions+=10;goto B68b8e6;
case 0x68b8e9:c.instructions+=9;goto B68b8e9;
case 0x68b8ea:c.instructions+=8;goto B68b8ea;
case 0x68b8ec:c.instructions+=7;goto B68b8ec;
case 0x68b8ee:c.instructions+=6;goto B68b8ee;
case 0x68b8f0:c.instructions+=5;goto B68b8f0;
case 0x68b8f2:c.instructions+=4;goto B68b8f2;
case 0x68b8f5:c.instructions+=3;goto B68b8f5;
case 0x68b8f8:c.instructions+=2;goto B68b8f8;
case 0x68b8fb:c.instructions+=1;goto B68b8fb;
case 0x68b901:goto L68b901;
case 0x68b904:c.instructions+=2;goto B68b904;
case 0x68b90a:c.instructions+=1;goto B68b90a;
case 0x68b90f:goto L68b90f;
case 0x68b911:c.instructions+=3;goto B68b911;
case 0x68b914:c.instructions+=2;goto B68b914;
case 0x68b917:c.instructions+=1;goto B68b917;
case 0x68b91d:goto L68b91d;
case 0x68b921:c.instructions+=3;goto B68b921;
case 0x68b925:c.instructions+=2;goto B68b925;
case 0x68b928:c.instructions+=1;goto B68b928;
case 0x68b92b:goto L68b92b;
case 0x68b92f:c.instructions+=93;goto B68b92f;
case 0x68b932:c.instructions+=92;goto B68b932;
case 0x68b935:c.instructions+=91;goto B68b935;
case 0x68b939:c.instructions+=90;goto B68b939;
case 0x68b93c:c.instructions+=89;goto B68b93c;
case 0x68b93f:c.instructions+=88;goto B68b93f;
case 0x68b942:c.instructions+=87;goto B68b942;
case 0x68b946:c.instructions+=86;goto B68b946;
case 0x68b949:c.instructions+=85;goto B68b949;
case 0x68b94e:c.instructions+=84;goto B68b94e;
case 0x68b951:c.instructions+=83;goto B68b951;
case 0x68b954:c.instructions+=82;goto B68b954;
case 0x68b958:c.instructions+=81;goto B68b958;
case 0x68b95c:c.instructions+=80;goto B68b95c;
case 0x68b960:c.instructions+=79;goto B68b960;
case 0x68b965:c.instructions+=78;goto B68b965;
case 0x68b96a:c.instructions+=77;goto B68b96a;
case 0x68b96e:c.instructions+=76;goto B68b96e;
case 0x68b972:c.instructions+=75;goto B68b972;
case 0x68b975:c.instructions+=74;goto B68b975;
case 0x68b979:c.instructions+=73;goto B68b979;
case 0x68b97d:c.instructions+=72;goto B68b97d;
case 0x68b981:c.instructions+=71;goto B68b981;
case 0x68b984:c.instructions+=70;goto B68b984;
case 0x68b98b:c.instructions+=69;goto B68b98b;
case 0x68b98e:c.instructions+=68;goto B68b98e;
case 0x68b991:c.instructions+=67;goto B68b991;
case 0x68b998:c.instructions+=66;goto B68b998;
case 0x68b99b:c.instructions+=65;goto B68b99b;
case 0x68b99e:c.instructions+=64;goto B68b99e;
case 0x68b9a1:c.instructions+=63;goto B68b9a1;
case 0x68b9a8:c.instructions+=62;goto B68b9a8;
case 0x68b9ab:c.instructions+=61;goto B68b9ab;
case 0x68b9ae:c.instructions+=60;goto B68b9ae;
case 0x68b9b1:c.instructions+=59;goto B68b9b1;
case 0x68b9b4:c.instructions+=58;goto B68b9b4;
case 0x68b9b7:c.instructions+=57;goto B68b9b7;
case 0x68b9be:c.instructions+=56;goto B68b9be;
case 0x68b9c1:c.instructions+=55;goto B68b9c1;
case 0x68b9c8:c.instructions+=54;goto B68b9c8;
case 0x68b9cb:c.instructions+=53;goto B68b9cb;
case 0x68b9ce:c.instructions+=52;goto B68b9ce;
case 0x68b9d5:c.instructions+=51;goto B68b9d5;
case 0x68b9d8:c.instructions+=50;goto B68b9d8;
case 0x68b9db:c.instructions+=49;goto B68b9db;
case 0x68b9de:c.instructions+=48;goto B68b9de;
case 0x68b9e1:c.instructions+=47;goto B68b9e1;
case 0x68b9e5:c.instructions+=46;goto B68b9e5;
case 0x68b9e9:c.instructions+=45;goto B68b9e9;
case 0x68b9ed:c.instructions+=44;goto B68b9ed;
case 0x68b9f0:c.instructions+=43;goto B68b9f0;
case 0x68b9f7:c.instructions+=42;goto B68b9f7;
case 0x68b9fe:c.instructions+=41;goto B68b9fe;
case 0x68ba01:c.instructions+=40;goto B68ba01;
case 0x68ba04:c.instructions+=39;goto B68ba04;
case 0x68ba0b:c.instructions+=38;goto B68ba0b;
case 0x68ba12:c.instructions+=37;goto B68ba12;
case 0x68ba15:c.instructions+=36;goto B68ba15;
case 0x68ba1c:c.instructions+=35;goto B68ba1c;
case 0x68ba20:c.instructions+=34;goto B68ba20;
case 0x68ba23:c.instructions+=33;goto B68ba23;
case 0x68ba26:c.instructions+=32;goto B68ba26;
case 0x68ba29:c.instructions+=31;goto B68ba29;
case 0x68ba2c:c.instructions+=30;goto B68ba2c;
case 0x68ba2f:c.instructions+=29;goto B68ba2f;
case 0x68ba32:c.instructions+=28;goto B68ba32;
case 0x68ba35:c.instructions+=27;goto B68ba35;
case 0x68ba39:c.instructions+=26;goto B68ba39;
case 0x68ba3d:c.instructions+=25;goto B68ba3d;
case 0x68ba40:c.instructions+=24;goto B68ba40;
case 0x68ba43:c.instructions+=23;goto B68ba43;
case 0x68ba47:c.instructions+=22;goto B68ba47;
case 0x68ba4b:c.instructions+=21;goto B68ba4b;
case 0x68ba4e:c.instructions+=20;goto B68ba4e;
case 0x68ba51:c.instructions+=19;goto B68ba51;
case 0x68ba54:c.instructions+=18;goto B68ba54;
case 0x68ba57:c.instructions+=17;goto B68ba57;
case 0x68ba5b:c.instructions+=16;goto B68ba5b;
case 0x68ba5f:c.instructions+=15;goto B68ba5f;
case 0x68ba64:c.instructions+=14;goto B68ba64;
case 0x68ba67:c.instructions+=13;goto B68ba67;
case 0x68ba6b:c.instructions+=12;goto B68ba6b;
case 0x68ba6e:c.instructions+=11;goto B68ba6e;
case 0x68ba73:c.instructions+=10;goto B68ba73;
case 0x68ba77:c.instructions+=9;goto B68ba77;
case 0x68ba7c:c.instructions+=8;goto B68ba7c;
case 0x68ba7e:c.instructions+=7;goto B68ba7e;
case 0x68ba81:c.instructions+=6;goto B68ba81;
case 0x68ba83:c.instructions+=5;goto B68ba83;
case 0x68ba85:c.instructions+=4;goto B68ba85;
case 0x68ba88:c.instructions+=3;goto B68ba88;
case 0x68ba8a:c.instructions+=2;goto B68ba8a;
case 0x68ba8d:c.instructions+=1;goto B68ba8d;
case 0x68ba93:goto L68ba93;
case 0x68ba95:goto L68ba95;
case 0x68ba98:goto L68ba98;
case 0x68ba9b:c.instructions+=2;goto B68ba9b;
case 0x68ba9d:c.instructions+=1;goto B68ba9d;
case 0x68ba9f:goto L68ba9f;
case 0x68baa2:goto L68baa2;
case 0x68baa5:c.instructions+=3;goto B68baa5;
case 0x68baa6:c.instructions+=2;goto B68baa6;
case 0x68baa7:c.instructions+=1;goto B68baa7;
case 0x68baac:goto L68baac;
case 0x68baaf:c.instructions+=3;goto B68baaf;
case 0x68bab2:c.instructions+=2;goto B68bab2;
case 0x68bab5:c.instructions+=1;goto B68bab5;
case 0x68bab7:goto L68bab7;
case 0x68baba:c.instructions+=7;goto B68baba;
case 0x68babb:c.instructions+=6;goto B68babb;
case 0x68babc:c.instructions+=5;goto B68babc;
case 0x68babe:c.instructions+=4;goto B68babe;
case 0x68babf:c.instructions+=3;goto B68babf;
case 0x68bac1:c.instructions+=2;goto B68bac1;
case 0x68bac2:c.instructions+=1;goto B68bac2;
case 0x68bac5:goto L68bac5;
case 0x68bac7:c.instructions+=24;goto B68bac7;
case 0x68bac8:c.instructions+=23;goto B68bac8;
case 0x68baca:c.instructions+=22;goto B68baca;
case 0x68bacb:c.instructions+=21;goto B68bacb;
case 0x68bace:c.instructions+=20;goto B68bace;
case 0x68bad1:c.instructions+=19;goto B68bad1;
case 0x68bad2:c.instructions+=18;goto B68bad2;
case 0x68bad4:c.instructions+=17;goto B68bad4;
case 0x68bada:c.instructions+=16;goto B68bada;
case 0x68badd:c.instructions+=15;goto B68badd;
case 0x68bade:c.instructions+=14;goto B68bade;
case 0x68badf:c.instructions+=13;goto B68badf;
case 0x68bae2:c.instructions+=12;goto B68bae2;
case 0x68bae4:c.instructions+=11;goto B68bae4;
case 0x68bae6:c.instructions+=10;goto B68bae6;
case 0x68bae9:c.instructions+=9;goto B68bae9;
case 0x68baea:c.instructions+=8;goto B68baea;
case 0x68baec:c.instructions+=7;goto B68baec;
case 0x68baee:c.instructions+=6;goto B68baee;
case 0x68baf0:c.instructions+=5;goto B68baf0;
case 0x68baf2:c.instructions+=4;goto B68baf2;
case 0x68baf5:c.instructions+=3;goto B68baf5;
case 0x68baf8:c.instructions+=2;goto B68baf8;
case 0x68bafb:c.instructions+=1;goto B68bafb;
case 0x68bb01:goto L68bb01;
case 0x68bb04:c.instructions+=2;goto B68bb04;
case 0x68bb0a:c.instructions+=1;goto B68bb0a;
case 0x68bb0f:goto L68bb0f;
case 0x68bb11:c.instructions+=3;goto B68bb11;
case 0x68bb14:c.instructions+=2;goto B68bb14;
case 0x68bb17:c.instructions+=1;goto B68bb17;
case 0x68bb1d:goto L68bb1d;
case 0x68bb21:c.instructions+=3;goto B68bb21;
case 0x68bb25:c.instructions+=2;goto B68bb25;
case 0x68bb28:c.instructions+=1;goto B68bb28;
case 0x68bb2b:goto L68bb2b;
case 0x68bb2e:c.instructions+=72;goto B68bb2e;
case 0x68bb32:c.instructions+=71;goto B68bb32;
case 0x68bb37:c.instructions+=70;goto B68bb37;
case 0x68bb3a:c.instructions+=69;goto B68bb3a;
case 0x68bb3e:c.instructions+=68;goto B68bb3e;
case 0x68bb41:c.instructions+=67;goto B68bb41;
case 0x68bb44:c.instructions+=66;goto B68bb44;
case 0x68bb47:c.instructions+=65;goto B68bb47;
case 0x68bb4b:c.instructions+=64;goto B68bb4b;
case 0x68bb4f:c.instructions+=63;goto B68bb4f;
case 0x68bb53:c.instructions+=62;goto B68bb53;
case 0x68bb59:c.instructions+=61;goto B68bb59;
case 0x68bb5c:c.instructions+=60;goto B68bb5c;
case 0x68bb62:c.instructions+=59;goto B68bb62;
case 0x68bb65:c.instructions+=58;goto B68bb65;
case 0x68bb6b:c.instructions+=57;goto B68bb6b;
case 0x68bb6e:c.instructions+=56;goto B68bb6e;
case 0x68bb71:c.instructions+=55;goto B68bb71;
case 0x68bb75:c.instructions+=54;goto B68bb75;
case 0x68bb78:c.instructions+=53;goto B68bb78;
case 0x68bb7f:c.instructions+=52;goto B68bb7f;
case 0x68bb82:c.instructions+=51;goto B68bb82;
case 0x68bb85:c.instructions+=50;goto B68bb85;
case 0x68bb8c:c.instructions+=49;goto B68bb8c;
case 0x68bb8f:c.instructions+=48;goto B68bb8f;
case 0x68bb96:c.instructions+=47;goto B68bb96;
case 0x68bb99:c.instructions+=46;goto B68bb99;
case 0x68bb9c:c.instructions+=45;goto B68bb9c;
case 0x68bb9f:c.instructions+=44;goto B68bb9f;
case 0x68bba2:c.instructions+=43;goto B68bba2;
case 0x68bba9:c.instructions+=42;goto B68bba9;
case 0x68bbad:c.instructions+=41;goto B68bbad;
case 0x68bbb0:c.instructions+=40;goto B68bbb0;
case 0x68bbb7:c.instructions+=39;goto B68bbb7;
case 0x68bbbe:c.instructions+=38;goto B68bbbe;
case 0x68bbc1:c.instructions+=37;goto B68bbc1;
case 0x68bbc4:c.instructions+=36;goto B68bbc4;
case 0x68bbcb:c.instructions+=35;goto B68bbcb;
case 0x68bbd2:c.instructions+=34;goto B68bbd2;
case 0x68bbd5:c.instructions+=33;goto B68bbd5;
case 0x68bbd8:c.instructions+=32;goto B68bbd8;
case 0x68bbdb:c.instructions+=31;goto B68bbdb;
case 0x68bbde:c.instructions+=30;goto B68bbde;
case 0x68bbe1:c.instructions+=29;goto B68bbe1;
case 0x68bbe4:c.instructions+=28;goto B68bbe4;
case 0x68bbe7:c.instructions+=27;goto B68bbe7;
case 0x68bbea:c.instructions+=26;goto B68bbea;
case 0x68bbee:c.instructions+=25;goto B68bbee;
case 0x68bbf1:c.instructions+=24;goto B68bbf1;
case 0x68bbf5:c.instructions+=23;goto B68bbf5;
case 0x68bbf9:c.instructions+=22;goto B68bbf9;
case 0x68bbfe:c.instructions+=21;goto B68bbfe;
case 0x68bc01:c.instructions+=20;goto B68bc01;
case 0x68bc04:c.instructions+=19;goto B68bc04;
case 0x68bc0a:c.instructions+=18;goto B68bc0a;
case 0x68bc0d:c.instructions+=17;goto B68bc0d;
case 0x68bc11:c.instructions+=16;goto B68bc11;
case 0x68bc14:c.instructions+=15;goto B68bc14;
case 0x68bc18:c.instructions+=14;goto B68bc18;
case 0x68bc1e:c.instructions+=13;goto B68bc1e;
case 0x68bc21:c.instructions+=12;goto B68bc21;
case 0x68bc24:c.instructions+=11;goto B68bc24;
case 0x68bc27:c.instructions+=10;goto B68bc27;
case 0x68bc2a:c.instructions+=9;goto B68bc2a;
case 0x68bc30:c.instructions+=8;goto B68bc30;
case 0x68bc32:c.instructions+=7;goto B68bc32;
case 0x68bc35:c.instructions+=6;goto B68bc35;
case 0x68bc37:c.instructions+=5;goto B68bc37;
case 0x68bc39:c.instructions+=4;goto B68bc39;
case 0x68bc3c:c.instructions+=3;goto B68bc3c;
case 0x68bc3e:c.instructions+=2;goto B68bc3e;
case 0x68bc41:c.instructions+=1;goto B68bc41;
case 0x68bc47:goto L68bc47;
case 0x68bc49:goto L68bc49;
case 0x68bc4c:goto L68bc4c;
case 0x68bc4f:c.instructions+=2;goto B68bc4f;
case 0x68bc51:c.instructions+=1;goto B68bc51;
case 0x68bc53:goto L68bc53;
case 0x68bc56:goto L68bc56;
case 0x68bc59:c.instructions+=3;goto B68bc59;
case 0x68bc5a:c.instructions+=2;goto B68bc5a;
case 0x68bc5b:c.instructions+=1;goto B68bc5b;
case 0x68bc60:goto L68bc60;
case 0x68bc63:c.instructions+=3;goto B68bc63;
case 0x68bc66:c.instructions+=2;goto B68bc66;
case 0x68bc69:c.instructions+=1;goto B68bc69;
case 0x68bc6b:goto L68bc6b;
case 0x68bc6e:c.instructions+=7;goto B68bc6e;
case 0x68bc6f:c.instructions+=6;goto B68bc6f;
case 0x68bc70:c.instructions+=5;goto B68bc70;
case 0x68bc72:c.instructions+=4;goto B68bc72;
case 0x68bc73:c.instructions+=3;goto B68bc73;
case 0x68bc75:c.instructions+=2;goto B68bc75;
case 0x68bc76:c.instructions+=1;goto B68bc76;
case 0x68bc79:goto L68bc79;
case 0x68bc7b:c.instructions+=24;goto B68bc7b;
case 0x68bc7c:c.instructions+=23;goto B68bc7c;
case 0x68bc7e:c.instructions+=22;goto B68bc7e;
case 0x68bc7f:c.instructions+=21;goto B68bc7f;
case 0x68bc82:c.instructions+=20;goto B68bc82;
case 0x68bc85:c.instructions+=19;goto B68bc85;
case 0x68bc86:c.instructions+=18;goto B68bc86;
case 0x68bc88:c.instructions+=17;goto B68bc88;
case 0x68bc8e:c.instructions+=16;goto B68bc8e;
case 0x68bc91:c.instructions+=15;goto B68bc91;
case 0x68bc92:c.instructions+=14;goto B68bc92;
case 0x68bc93:c.instructions+=13;goto B68bc93;
case 0x68bc96:c.instructions+=12;goto B68bc96;
case 0x68bc98:c.instructions+=11;goto B68bc98;
case 0x68bc9a:c.instructions+=10;goto B68bc9a;
case 0x68bc9d:c.instructions+=9;goto B68bc9d;
case 0x68bc9e:c.instructions+=8;goto B68bc9e;
case 0x68bca0:c.instructions+=7;goto B68bca0;
case 0x68bca2:c.instructions+=6;goto B68bca2;
case 0x68bca4:c.instructions+=5;goto B68bca4;
case 0x68bca6:c.instructions+=4;goto B68bca6;
case 0x68bca9:c.instructions+=3;goto B68bca9;
case 0x68bcac:c.instructions+=2;goto B68bcac;
case 0x68bcaf:c.instructions+=1;goto B68bcaf;
case 0x68bcb5:goto L68bcb5;
case 0x68bcb8:c.instructions+=2;goto B68bcb8;
case 0x68bcbe:c.instructions+=1;goto B68bcbe;
case 0x68bcc3:goto L68bcc3;
case 0x68bcc5:c.instructions+=3;goto B68bcc5;
case 0x68bcc8:c.instructions+=2;goto B68bcc8;
case 0x68bccb:c.instructions+=1;goto B68bccb;
case 0x68bcd1:goto L68bcd1;
case 0x68bcd5:c.instructions+=3;goto B68bcd5;
case 0x68bcd9:c.instructions+=2;goto B68bcd9;
case 0x68bcdc:c.instructions+=1;goto B68bcdc;
case 0x68bcdf:goto L68bcdf;
case 0x68bce2:c.instructions+=95;goto B68bce2;
case 0x68bce6:c.instructions+=94;goto B68bce6;
case 0x68bceb:c.instructions+=93;goto B68bceb;
case 0x68bcee:c.instructions+=92;goto B68bcee;
case 0x68bcf2:c.instructions+=91;goto B68bcf2;
case 0x68bcf5:c.instructions+=90;goto B68bcf5;
case 0x68bcf8:c.instructions+=89;goto B68bcf8;
case 0x68bcfb:c.instructions+=88;goto B68bcfb;
case 0x68bcff:c.instructions+=87;goto B68bcff;
case 0x68bd03:c.instructions+=86;goto B68bd03;
case 0x68bd07:c.instructions+=85;goto B68bd07;
case 0x68bd0d:c.instructions+=84;goto B68bd0d;
case 0x68bd10:c.instructions+=83;goto B68bd10;
case 0x68bd16:c.instructions+=82;goto B68bd16;
case 0x68bd19:c.instructions+=81;goto B68bd19;
case 0x68bd1f:c.instructions+=80;goto B68bd1f;
case 0x68bd22:c.instructions+=79;goto B68bd22;
case 0x68bd25:c.instructions+=78;goto B68bd25;
case 0x68bd29:c.instructions+=77;goto B68bd29;
case 0x68bd2c:c.instructions+=76;goto B68bd2c;
case 0x68bd33:c.instructions+=75;goto B68bd33;
case 0x68bd36:c.instructions+=74;goto B68bd36;
case 0x68bd3d:c.instructions+=73;goto B68bd3d;
case 0x68bd40:c.instructions+=72;goto B68bd40;
case 0x68bd43:c.instructions+=71;goto B68bd43;
case 0x68bd46:c.instructions+=70;goto B68bd46;
case 0x68bd4a:c.instructions+=69;goto B68bd4a;
case 0x68bd4d:c.instructions+=68;goto B68bd4d;
case 0x68bd50:c.instructions+=67;goto B68bd50;
case 0x68bd54:c.instructions+=66;goto B68bd54;
case 0x68bd57:c.instructions+=65;goto B68bd57;
case 0x68bd5a:c.instructions+=64;goto B68bd5a;
case 0x68bd5d:c.instructions+=63;goto B68bd5d;
case 0x68bd60:c.instructions+=62;goto B68bd60;
case 0x68bd63:c.instructions+=61;goto B68bd63;
case 0x68bd66:c.instructions+=60;goto B68bd66;
case 0x68bd69:c.instructions+=59;goto B68bd69;
case 0x68bd6c:c.instructions+=58;goto B68bd6c;
case 0x68bd6f:c.instructions+=57;goto B68bd6f;
case 0x68bd76:c.instructions+=56;goto B68bd76;
case 0x68bd79:c.instructions+=55;goto B68bd79;
case 0x68bd80:c.instructions+=54;goto B68bd80;
case 0x68bd83:c.instructions+=53;goto B68bd83;
case 0x68bd86:c.instructions+=52;goto B68bd86;
case 0x68bd8d:c.instructions+=51;goto B68bd8d;
case 0x68bd90:c.instructions+=50;goto B68bd90;
case 0x68bd93:c.instructions+=49;goto B68bd93;
case 0x68bd9a:c.instructions+=48;goto B68bd9a;
case 0x68bda1:c.instructions+=47;goto B68bda1;
case 0x68bda4:c.instructions+=46;goto B68bda4;
case 0x68bda8:c.instructions+=45;goto B68bda8;
case 0x68bdab:c.instructions+=44;goto B68bdab;
case 0x68bdb2:c.instructions+=43;goto B68bdb2;
case 0x68bdb9:c.instructions+=42;goto B68bdb9;
case 0x68bdbc:c.instructions+=41;goto B68bdbc;
case 0x68bdbf:c.instructions+=40;goto B68bdbf;
case 0x68bdc6:c.instructions+=39;goto B68bdc6;
case 0x68bdca:c.instructions+=38;goto B68bdca;
case 0x68bdcd:c.instructions+=37;goto B68bdcd;
case 0x68bdd1:c.instructions+=36;goto B68bdd1;
case 0x68bdd4:c.instructions+=35;goto B68bdd4;
case 0x68bdd7:c.instructions+=34;goto B68bdd7;
case 0x68bdda:c.instructions+=33;goto B68bdda;
case 0x68bddd:c.instructions+=32;goto B68bddd;
case 0x68bde1:c.instructions+=31;goto B68bde1;
case 0x68bde4:c.instructions+=30;goto B68bde4;
case 0x68bde7:c.instructions+=29;goto B68bde7;
case 0x68bdea:c.instructions+=28;goto B68bdea;
case 0x68bded:c.instructions+=27;goto B68bded;
case 0x68bdf1:c.instructions+=26;goto B68bdf1;
case 0x68bdf4:c.instructions+=25;goto B68bdf4;
case 0x68bdf7:c.instructions+=24;goto B68bdf7;
case 0x68bdfa:c.instructions+=23;goto B68bdfa;
case 0x68bdff:c.instructions+=22;goto B68bdff;
case 0x68be02:c.instructions+=21;goto B68be02;
case 0x68be05:c.instructions+=20;goto B68be05;
case 0x68be0b:c.instructions+=19;goto B68be0b;
case 0x68be0e:c.instructions+=18;goto B68be0e;
case 0x68be11:c.instructions+=17;goto B68be11;
case 0x68be15:c.instructions+=16;goto B68be15;
case 0x68be18:c.instructions+=15;goto B68be18;
case 0x68be1c:c.instructions+=14;goto B68be1c;
case 0x68be22:c.instructions+=13;goto B68be22;
case 0x68be25:c.instructions+=12;goto B68be25;
case 0x68be28:c.instructions+=11;goto B68be28;
case 0x68be2b:c.instructions+=10;goto B68be2b;
case 0x68be2e:c.instructions+=9;goto B68be2e;
case 0x68be34:c.instructions+=8;goto B68be34;
case 0x68be36:c.instructions+=7;goto B68be36;
case 0x68be39:c.instructions+=6;goto B68be39;
case 0x68be3b:c.instructions+=5;goto B68be3b;
case 0x68be3d:c.instructions+=4;goto B68be3d;
case 0x68be40:c.instructions+=3;goto B68be40;
case 0x68be42:c.instructions+=2;goto B68be42;
case 0x68be45:c.instructions+=1;goto B68be45;
case 0x68be4b:goto L68be4b;
case 0x68be4d:goto L68be4d;
case 0x68be50:goto L68be50;
case 0x68be53:c.instructions+=2;goto B68be53;
case 0x68be55:c.instructions+=1;goto B68be55;
case 0x68be57:goto L68be57;
case 0x68be5a:goto L68be5a;
case 0x68be5d:c.instructions+=3;goto B68be5d;
case 0x68be5e:c.instructions+=2;goto B68be5e;
case 0x68be5f:c.instructions+=1;goto B68be5f;
case 0x68be64:goto L68be64;
case 0x68be67:c.instructions+=3;goto B68be67;
case 0x68be6a:c.instructions+=2;goto B68be6a;
case 0x68be6d:c.instructions+=1;goto B68be6d;
case 0x68be6f:goto L68be6f;
case 0x68be72:c.instructions+=7;goto B68be72;
case 0x68be73:c.instructions+=6;goto B68be73;
case 0x68be74:c.instructions+=5;goto B68be74;
case 0x68be76:c.instructions+=4;goto B68be76;
case 0x68be77:c.instructions+=3;goto B68be77;
case 0x68be79:c.instructions+=2;goto B68be79;
case 0x68be7a:c.instructions+=1;goto B68be7a;
case 0x68be7d:goto L68be7d;
case 0x68be80:c.instructions+=78;goto B68be80;
case 0x68be83:c.instructions+=77;goto B68be83;
case 0x68be8a:c.instructions+=76;goto B68be8a;
case 0x68be91:c.instructions+=75;goto B68be91;
case 0x68be94:c.instructions+=74;goto B68be94;
case 0x68be97:c.instructions+=73;goto B68be97;
case 0x68be9a:c.instructions+=72;goto B68be9a;
case 0x68bea1:c.instructions+=71;goto B68bea1;
case 0x68bea4:c.instructions+=70;goto B68bea4;
case 0x68beab:c.instructions+=69;goto B68beab;
case 0x68beae:c.instructions+=68;goto B68beae;
case 0x68beb1:c.instructions+=67;goto B68beb1;
case 0x68beb8:c.instructions+=66;goto B68beb8;
case 0x68bebf:c.instructions+=65;goto B68bebf;
case 0x68bec2:c.instructions+=64;goto B68bec2;
case 0x68bec5:c.instructions+=63;goto B68bec5;
case 0x68bec8:c.instructions+=62;goto B68bec8;
case 0x68becb:c.instructions+=61;goto B68becb;
case 0x68bece:c.instructions+=60;goto B68bece;
case 0x68bed1:c.instructions+=59;goto B68bed1;
case 0x68bed4:c.instructions+=58;goto B68bed4;
case 0x68bed7:c.instructions+=57;goto B68bed7;
case 0x68bedb:c.instructions+=56;goto B68bedb;
case 0x68bedf:c.instructions+=55;goto B68bedf;
case 0x68bee2:c.instructions+=54;goto B68bee2;
case 0x68bee5:c.instructions+=53;goto B68bee5;
case 0x68bee9:c.instructions+=52;goto B68bee9;
case 0x68beee:c.instructions+=51;goto B68beee;
case 0x68bef2:c.instructions+=50;goto B68bef2;
case 0x68bef7:c.instructions+=49;goto B68bef7;
case 0x68befa:c.instructions+=48;goto B68befa;
case 0x68befd:c.instructions+=47;goto B68befd;
case 0x68bf00:c.instructions+=46;goto B68bf00;
case 0x68bf03:c.instructions+=45;goto B68bf03;
case 0x68bf06:c.instructions+=44;goto B68bf06;
case 0x68bf09:c.instructions+=43;goto B68bf09;
case 0x68bf0c:c.instructions+=42;goto B68bf0c;
case 0x68bf0f:c.instructions+=41;goto B68bf0f;
case 0x68bf12:c.instructions+=40;goto B68bf12;
case 0x68bf15:c.instructions+=39;goto B68bf15;
case 0x68bf1c:c.instructions+=38;goto B68bf1c;
case 0x68bf23:c.instructions+=37;goto B68bf23;
case 0x68bf26:c.instructions+=36;goto B68bf26;
case 0x68bf29:c.instructions+=35;goto B68bf29;
case 0x68bf2c:c.instructions+=34;goto B68bf2c;
case 0x68bf33:c.instructions+=33;goto B68bf33;
case 0x68bf36:c.instructions+=32;goto B68bf36;
case 0x68bf3d:c.instructions+=31;goto B68bf3d;
case 0x68bf40:c.instructions+=30;goto B68bf40;
case 0x68bf43:c.instructions+=29;goto B68bf43;
case 0x68bf4a:c.instructions+=28;goto B68bf4a;
case 0x68bf51:c.instructions+=27;goto B68bf51;
case 0x68bf54:c.instructions+=26;goto B68bf54;
case 0x68bf57:c.instructions+=25;goto B68bf57;
case 0x68bf5a:c.instructions+=24;goto B68bf5a;
case 0x68bf5d:c.instructions+=23;goto B68bf5d;
case 0x68bf60:c.instructions+=22;goto B68bf60;
case 0x68bf63:c.instructions+=21;goto B68bf63;
case 0x68bf66:c.instructions+=20;goto B68bf66;
case 0x68bf69:c.instructions+=19;goto B68bf69;
case 0x68bf6d:c.instructions+=18;goto B68bf6d;
case 0x68bf71:c.instructions+=17;goto B68bf71;
case 0x68bf74:c.instructions+=16;goto B68bf74;
case 0x68bf77:c.instructions+=15;goto B68bf77;
case 0x68bf7b:c.instructions+=14;goto B68bf7b;
case 0x68bf80:c.instructions+=13;goto B68bf80;
case 0x68bf84:c.instructions+=12;goto B68bf84;
case 0x68bf89:c.instructions+=11;goto B68bf89;
case 0x68bf8c:c.instructions+=10;goto B68bf8c;
case 0x68bf8f:c.instructions+=9;goto B68bf8f;
case 0x68bf92:c.instructions+=8;goto B68bf92;
case 0x68bf95:c.instructions+=7;goto B68bf95;
case 0x68bf98:c.instructions+=6;goto B68bf98;
case 0x68bf9b:c.instructions+=5;goto B68bf9b;
case 0x68bf9e:c.instructions+=4;goto B68bf9e;
case 0x68bfa1:c.instructions+=3;goto B68bfa1;
case 0x68bfa4:c.instructions+=2;goto B68bfa4;
case 0x68bfa6:c.instructions+=1;goto B68bfa6;
case 0x68bfa7:goto L68bfa7;
case 0x68bfa9:c.instructions+=10;goto B68bfa9;
case 0x68bfaa:c.instructions+=9;goto B68bfaa;
case 0x68bfac:c.instructions+=8;goto B68bfac;
case 0x68bfaf:c.instructions+=7;goto B68bfaf;
case 0x68bfb3:c.instructions+=6;goto B68bfb3;
case 0x68bfb4:c.instructions+=5;goto B68bfb4;
case 0x68bfb5:c.instructions+=4;goto B68bfb5;
case 0x68bfb6:c.instructions+=3;goto B68bfb6;
case 0x68bfb9:c.instructions+=2;goto B68bfb9;
case 0x68bfbc:c.instructions+=1;goto B68bfbc;
case 0x68bfbe:goto L68bfbe;
case 0x68bfc1:c.instructions+=5;goto B68bfc1;
case 0x68bfc4:c.instructions+=4;goto B68bfc4;
case 0x68bfc7:c.instructions+=3;goto B68bfc7;
case 0x68bfca:c.instructions+=2;goto B68bfca;
case 0x68bfcd:c.instructions+=1;goto B68bfcd;
case 0x68bfd0:goto L68bfd0;
case 0x68bfd3:c.instructions+=3;goto B68bfd3;
case 0x68bfd7:c.instructions+=2;goto B68bfd7;
case 0x68bfda:c.instructions+=1;goto B68bfda;
case 0x68bfdf:goto L68bfdf;
case 0x68bfe2:c.instructions+=6;goto B68bfe2;
case 0x68bfe6:c.instructions+=5;goto B68bfe6;
case 0x68bfea:c.instructions+=4;goto B68bfea;
case 0x68bfee:c.instructions+=3;goto B68bfee;
case 0x68bff1:c.instructions+=2;goto B68bff1;
case 0x68bff4:c.instructions+=1;goto B68bff4;
case 0x68bff6:goto L68bff6;
case 0x68bff8:c.instructions+=3;goto B68bff8;
case 0x68bffb:c.instructions+=2;goto B68bffb;
case 0x68bffe:c.instructions+=1;goto B68bffe;
default:missing_instruction(c.pc);}
B68b000:L68b000:{c.instructions+=3;NFSU2_TR(0x68b000);
w4(R+0,u32(0x3ull));
}
B68b005:{NFSU2_TR(0x68b005);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(U+0))<(u32(0x3ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B68b008:{NFSU2_TR(0x68b008);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L68b076;}}
}
B68b00a:L68b00a:{c.instructions+=3;NFSU2_TR(0x68b00a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B68b010:{NFSU2_TR(0x68b010);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B68b016:{NFSU2_TR(0x68b016);
__builtin_memmove((R+28),(R+28),4);
}
B68b018:L68b018:{c.instructions+=17;NFSU2_TR(0x68b018);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B68b01e:{NFSU2_TR(0x68b01e);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
__builtin_memmove((R+4608),(U+20),4);
__builtin_memmove((R+4612),(U+24),4);
__builtin_memmove((R+4616),(U+28),4);
__builtin_memmove((R+4620),(U+32),4);
}
B68b025:{NFSU2_TR(0x68b025);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4672),(U+8),4);
w4(R+4676,u32(0x0ull));
w4(R+4680,u32(0x0ull));
w4(R+4684,u32(0x0ull));
}
B68b02a:{NFSU2_TR(0x68b02a);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
__builtin_memmove((R+4736),(U+20),4);
__builtin_memmove((R+4740),(U+24),4);
__builtin_memmove((R+4744),(U+28),4);
__builtin_memmove((R+4748),(U+32),4);
}
B68b031:{NFSU2_TR(0x68b031);
w4(R+4672,b32(f32(r4(R+4672))*f32(r4(R+4608))));
}
B68b035:{NFSU2_TR(0x68b035);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4608),(U+8),4);
w4(R+4612,u32(0x0ull));
w4(R+4616,u32(0x0ull));
w4(R+4620,u32(0x0ull));
}
B68b03a:{NFSU2_TR(0x68b03a);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
__builtin_memmove((R+4800),(U+20),4);
__builtin_memmove((R+4804),(U+24),4);
__builtin_memmove((R+4808),(U+28),4);
__builtin_memmove((R+4812),(U+32),4);
}
B68b041:{NFSU2_TR(0x68b041);
w4(R+4608,b32(f32(r4(R+4608))*f32(r4(R+4736))));
}
B68b045:{NFSU2_TR(0x68b045);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4736),(U+8),4);
w4(R+4740,u32(0x0ull));
w4(R+4744,u32(0x0ull));
w4(R+4748,u32(0x0ull));
}
B68b04a:{NFSU2_TR(0x68b04a);
w4(R+4672,b32(f32(r4(R+4672))+f32(r4(R+4608))));
}
B68b04e:{NFSU2_TR(0x68b04e);
w4(R+4736,b32(f32(r4(R+4736))*f32(r4(R+4800))));
}
B68b052:{NFSU2_TR(0x68b052);
w4(R+4672,b32(f32(r4(R+4672))+f32(r4(R+4736))));
}
B68b056:{NFSU2_TR(0x68b056);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffe40ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4672),4);
s4(u32(r4(U+8)),r4(U+12));
}
B68b05f:{NFSU2_TR(0x68b05f);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B68b060:{NFSU2_TR(0x68b060);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B68b066:{NFSU2_TR(0x68b066);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B68b068:{NFSU2_TR(0x68b068);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x68b018u);}goto L68b018;}}
}
B68b06a:L68b06a:{c.instructions+=2;NFSU2_TR(0x68b06a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff68ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68b070:{NFSU2_TR(0x68b070);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff6cull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68b076:L68b076:{c.instructions+=5;NFSU2_TR(0x68b076);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B68b07c:{NFSU2_TR(0x68b07c);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe40ull))));
__builtin_memmove((R+24),(U+0),4);
}
B68b082:{NFSU2_TR(0x68b082);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B68b088:{NFSU2_TR(0x68b088);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68b089:{NFSU2_TR(0x68b089);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B68b08c:L68b08c:{c.instructions+=1;NFSU2_TR(0x68b08c);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L68b08e;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x68b08cu);}goto L68b08c;}
}
B68b08e:L68b08e:{c.instructions+=2;NFSU2_TR(0x68b08e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B68b08f:{NFSU2_TR(0x68b08f);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B68b092:L68b092:{c.instructions+=1;NFSU2_TR(0x68b092);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L68b094;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x68b092u);}goto L68b092;}
}
B68b094:L68b094:{c.instructions+=10;NFSU2_TR(0x68b094);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B68b09a:{NFSU2_TR(0x68b09a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B68b0a0:{NFSU2_TR(0x68b0a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B68b0a6:{NFSU2_TR(0x68b0a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B68b0a9:{NFSU2_TR(0x68b0a9);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x8ull))));
}
B68b0ac:{NFSU2_TR(0x68b0ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff70ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68b0b2:{NFSU2_TR(0x68b0b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B68b0b8:{NFSU2_TR(0x68b0b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff74ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68b0be:{NFSU2_TR(0x68b0be);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B68b0c0:{NFSU2_TR(0x68b0c0);
if(r1(R+512)){TAIL_STATIC(0x68aeb9u,68a);}
}
B68b0c6:L68b0c6:{c.instructions+=7;NFSU2_TR(0x68b0c6);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B68b0ca:{NFSU2_TR(0x68b0ca);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B68b0ce:{NFSU2_TR(0x68b0ce);
__builtin_memmove((R+16),(R+20),4);
}
B68b0d0:{NFSU2_TR(0x68b0d0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B68b0d1:{NFSU2_TR(0x68b0d1);
__builtin_memmove((R+16),(R+12),4);
}
B68b0d3:{NFSU2_TR(0x68b0d3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B68b0d4:{NFSU2_TR(0x68b0d4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B68b0d8:L68b0d8:{c.instructions+=16;NFSU2_TR(0x68b0d8);
__builtin_memmove((R+28),(R+28),4);
}
B68b0da:{NFSU2_TR(0x68b0da);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68b0db:{NFSU2_TR(0x68b0db);
__builtin_memmove((R+12),(R+16),4);
}
B68b0dd:{NFSU2_TR(0x68b0dd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68b0de:{NFSU2_TR(0x68b0de);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B68b0e1:{NFSU2_TR(0x68b0e1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B68b0e4:{NFSU2_TR(0x68b0e4);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68b0e5:{NFSU2_TR(0x68b0e5);
__builtin_memmove((R+20),(R+16),4);
}
B68b0e7:{NFSU2_TR(0x68b0e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B68b0ea:{NFSU2_TR(0x68b0ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B68b0ed:{NFSU2_TR(0x68b0ed);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
__builtin_memmove((R+4608),(U+20),4);
__builtin_memmove((R+4612),(U+24),4);
__builtin_memmove((R+4616),(U+28),4);
__builtin_memmove((R+4620),(U+32),4);
}
B68b0f1:{NFSU2_TR(0x68b0f1);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+4))),8);
__builtin_memmove((R+4608),(U+0),8);
}
B68b0f4:{NFSU2_TR(0x68b0f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B68b0f7:{NFSU2_TR(0x68b0f7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x20ull))));
}
B68b0fa:{NFSU2_TR(0x68b0fa);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+0))&u32(u8(0xfull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B68b0fc:{NFSU2_TR(0x68b0fc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L68b132;}}
}
B68b0fe:L68b0fe:{c.instructions+=15;NFSU2_TR(0x68b0fe);
u8 U[36];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
__builtin_memmove((R+4736),(U+20),4);
__builtin_memmove((R+4740),(U+24),4);
__builtin_memmove((R+4744),(U+28),4);
__builtin_memmove((R+4748),(U+32),4);
}
B68b102:{NFSU2_TR(0x68b102);
u8 U[36];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
__builtin_memmove((R+4800),(U+20),4);
__builtin_memmove((R+4804),(U+24),4);
__builtin_memmove((R+4808),(U+28),4);
__builtin_memmove((R+4812),(U+32),4);
}
B68b106:{NFSU2_TR(0x68b106);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68b109:{NFSU2_TR(0x68b109);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4672),(U+4),4);
w4(R+4676,u32(0x0ull));
w4(R+4680,u32(0x0ull));
w4(R+4684,u32(0x0ull));
}
B68b10e:{NFSU2_TR(0x68b10e);
u8 U[76];
__builtin_memmove((U+44),(R+4672),4);
__builtin_memmove((U+48),(R+4676),4);
__builtin_memmove((U+52),(R+4680),4);
__builtin_memmove((U+56),(R+4684),4);
__builtin_memmove((U+60),(R+4672),4);
__builtin_memmove((U+64),(R+4676),4);
__builtin_memmove((U+68),(R+4680),4);
__builtin_memmove((U+72),(R+4684),4);
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4672,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4676,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4680,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4684,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B68b112:{NFSU2_TR(0x68b112);
w4(R+4800,b32(f32(r4(R+4800))*f32(r4(R+4672))));
w4(R+4804,b32(f32(r4(R+4804))*f32(r4(R+4676))));
w4(R+4808,b32(f32(r4(R+4808))*f32(r4(R+4680))));
w4(R+4812,b32(f32(r4(R+4812))*f32(r4(R+4684))));
}
B68b115:{NFSU2_TR(0x68b115);
w4(R+4800,b32(f32(r4(R+4800))+f32(r4(R+4736))));
w4(R+4804,b32(f32(r4(R+4804))+f32(r4(R+4740))));
w4(R+4808,b32(f32(r4(R+4808))+f32(r4(R+4744))));
w4(R+4812,b32(f32(r4(R+4812))+f32(r4(R+4748))));
}
B68b118:{NFSU2_TR(0x68b118);
u8 U[36];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
__builtin_memmove((R+4736),(U+20),4);
__builtin_memmove((R+4740),(U+24),4);
__builtin_memmove((R+4744),(U+28),4);
__builtin_memmove((R+4748),(U+32),4);
}
B68b11c:{NFSU2_TR(0x68b11c);
__builtin_memmove((R+4672),(R+4608),4);
__builtin_memmove((R+4676),(R+4612),4);
__builtin_memmove((R+4680),(R+4616),4);
__builtin_memmove((R+4684),(R+4620),4);
}
B68b11f:{NFSU2_TR(0x68b11f);
u8 U[76];
__builtin_memmove((U+44),(R+4608),4);
__builtin_memmove((U+48),(R+4612),4);
__builtin_memmove((U+52),(R+4616),4);
__builtin_memmove((U+56),(R+4620),4);
__builtin_memmove((U+60),(R+4672),4);
__builtin_memmove((U+64),(R+4676),4);
__builtin_memmove((U+68),(R+4680),4);
__builtin_memmove((U+72),(R+4684),4);
w1(U+0,u8((u8(0x1ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x1ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x1ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x1ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4672,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x1ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x1ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x1ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x1ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4676,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x1ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x1ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x1ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x1ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4680,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x1ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x1ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x1ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x1ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4684,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B68b123:{NFSU2_TR(0x68b123);
w4(R+4736,b32(f32(r4(R+4736))*f32(r4(R+4672))));
w4(R+4740,b32(f32(r4(R+4740))*f32(r4(R+4676))));
w4(R+4744,b32(f32(r4(R+4744))*f32(r4(R+4680))));
w4(R+4748,b32(f32(r4(R+4748))*f32(r4(R+4684))));
}
B68b126:{NFSU2_TR(0x68b126);
__builtin_memmove((R+4672),(R+4608),4);
__builtin_memmove((R+4676),(R+4612),4);
__builtin_memmove((R+4680),(R+4616),4);
__builtin_memmove((R+4684),(R+4620),4);
}
B68b129:{NFSU2_TR(0x68b129);
u8 U[76];
__builtin_memmove((U+44),(R+4608),4);
__builtin_memmove((U+48),(R+4612),4);
__builtin_memmove((U+52),(R+4616),4);
__builtin_memmove((U+56),(R+4620),4);
__builtin_memmove((U+60),(R+4672),4);
__builtin_memmove((U+64),(R+4676),4);
__builtin_memmove((U+68),(R+4680),4);
__builtin_memmove((U+72),(R+4684),4);
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4672,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4676,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4680,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4684,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B68b12d:{NFSU2_TR(0x68b12d);
u8 U[32];
__builtin_memmove((U+0),gp(u32(r4(R+0))),16);
__builtin_memmove((U+16),(U+0),16);
__builtin_memmove((R+4608),(U+16),4);
__builtin_memmove((R+4612),(U+20),4);
__builtin_memmove((R+4616),(U+24),4);
__builtin_memmove((R+4620),(U+28),4);
}
B68b130:{NFSU2_TR(0x68b130);
{goto L68b187;}
}
B68b132:L68b132:{c.instructions+=23;NFSU2_TR(0x68b132);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
__builtin_memmove((R+4672),(U+20),4);
__builtin_memmove((R+4676),(U+24),4);
__builtin_memmove((R+4680),(U+28),4);
__builtin_memmove((R+4684),(U+32),4);
}
B68b136:{NFSU2_TR(0x68b136);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4672),(U+4),8);
}
B68b13a:{NFSU2_TR(0x68b13a);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4680),(U+4),8);
}
B68b13e:{NFSU2_TR(0x68b13e);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
__builtin_memmove((R+4800),(U+20),4);
__builtin_memmove((R+4804),(U+24),4);
__builtin_memmove((R+4808),(U+28),4);
__builtin_memmove((R+4812),(U+32),4);
}
B68b142:{NFSU2_TR(0x68b142);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4800),(U+4),8);
}
B68b146:{NFSU2_TR(0x68b146);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4808),(U+4),8);
}
B68b14a:{NFSU2_TR(0x68b14a);
__builtin_memmove((R+4736),(R+4672),4);
__builtin_memmove((R+4740),(R+4676),4);
__builtin_memmove((R+4744),(R+4680),4);
__builtin_memmove((R+4748),(R+4684),4);
}
B68b14d:{NFSU2_TR(0x68b14d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68b150:{NFSU2_TR(0x68b150);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4672),(U+4),4);
w4(R+4676,u32(0x0ull));
w4(R+4680,u32(0x0ull));
w4(R+4684,u32(0x0ull));
}
B68b155:{NFSU2_TR(0x68b155);
u8 U[76];
__builtin_memmove((U+44),(R+4672),4);
__builtin_memmove((U+48),(R+4676),4);
__builtin_memmove((U+52),(R+4680),4);
__builtin_memmove((U+56),(R+4684),4);
__builtin_memmove((U+60),(R+4672),4);
__builtin_memmove((U+64),(R+4676),4);
__builtin_memmove((U+68),(R+4680),4);
__builtin_memmove((U+72),(R+4684),4);
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4672,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4676,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4680,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4684,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B68b159:{NFSU2_TR(0x68b159);
w4(R+4800,b32(f32(r4(R+4800))*f32(r4(R+4672))));
w4(R+4804,b32(f32(r4(R+4804))*f32(r4(R+4676))));
w4(R+4808,b32(f32(r4(R+4808))*f32(r4(R+4680))));
w4(R+4812,b32(f32(r4(R+4812))*f32(r4(R+4684))));
}
B68b15c:{NFSU2_TR(0x68b15c);
w4(R+4800,b32(f32(r4(R+4800))+f32(r4(R+4736))));
w4(R+4804,b32(f32(r4(R+4804))+f32(r4(R+4740))));
w4(R+4808,b32(f32(r4(R+4808))+f32(r4(R+4744))));
w4(R+4812,b32(f32(r4(R+4812))+f32(r4(R+4748))));
}
B68b15f:{NFSU2_TR(0x68b15f);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
__builtin_memmove((R+4736),(U+20),4);
__builtin_memmove((R+4740),(U+24),4);
__builtin_memmove((R+4744),(U+28),4);
__builtin_memmove((R+4748),(U+32),4);
}
B68b163:{NFSU2_TR(0x68b163);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4736),(U+4),8);
}
B68b167:{NFSU2_TR(0x68b167);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4744),(U+4),8);
}
B68b16b:{NFSU2_TR(0x68b16b);
__builtin_memmove((R+4672),(R+4608),4);
__builtin_memmove((R+4676),(R+4612),4);
__builtin_memmove((R+4680),(R+4616),4);
__builtin_memmove((R+4684),(R+4620),4);
}
B68b16e:{NFSU2_TR(0x68b16e);
u8 U[76];
__builtin_memmove((U+44),(R+4608),4);
__builtin_memmove((U+48),(R+4612),4);
__builtin_memmove((U+52),(R+4616),4);
__builtin_memmove((U+56),(R+4620),4);
__builtin_memmove((U+60),(R+4672),4);
__builtin_memmove((U+64),(R+4676),4);
__builtin_memmove((U+68),(R+4680),4);
__builtin_memmove((U+72),(R+4684),4);
w1(U+0,u8((u8(0x1ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x1ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x1ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x1ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4672,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x1ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x1ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x1ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x1ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4676,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x1ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x1ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x1ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x1ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4680,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x1ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x1ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x1ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x1ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4684,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B68b172:{NFSU2_TR(0x68b172);
w4(R+4736,b32(f32(r4(R+4736))*f32(r4(R+4672))));
w4(R+4740,b32(f32(r4(R+4740))*f32(r4(R+4676))));
w4(R+4744,b32(f32(r4(R+4744))*f32(r4(R+4680))));
w4(R+4748,b32(f32(r4(R+4748))*f32(r4(R+4684))));
}
B68b175:{NFSU2_TR(0x68b175);
__builtin_memmove((R+4672),(R+4608),4);
__builtin_memmove((R+4676),(R+4612),4);
__builtin_memmove((R+4680),(R+4616),4);
__builtin_memmove((R+4684),(R+4620),4);
}
B68b178:{NFSU2_TR(0x68b178);
u8 U[76];
__builtin_memmove((U+44),(R+4608),4);
__builtin_memmove((U+48),(R+4612),4);
__builtin_memmove((U+52),(R+4616),4);
__builtin_memmove((U+56),(R+4620),4);
__builtin_memmove((U+60),(R+4672),4);
__builtin_memmove((U+64),(R+4676),4);
__builtin_memmove((U+68),(R+4680),4);
__builtin_memmove((U+72),(R+4684),4);
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4672,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4676,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4680,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4684,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B68b17c:{NFSU2_TR(0x68b17c);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
__builtin_memmove((R+4608),(U+20),4);
__builtin_memmove((R+4612),(U+24),4);
__builtin_memmove((R+4616),(U+28),4);
__builtin_memmove((R+4620),(U+32),4);
}
B68b180:{NFSU2_TR(0x68b180);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),8);
__builtin_memmove((R+4608),(U+0),8);
}
B68b183:{NFSU2_TR(0x68b183);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4616),(U+4),8);
}
B68b187:L68b187:{c.instructions+=10;NFSU2_TR(0x68b187);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B68b18a:{NFSU2_TR(0x68b18a);
w4(R+4608,b32(f32(r4(R+4608))*f32(r4(R+4672))));
w4(R+4612,b32(f32(r4(R+4612))*f32(r4(R+4676))));
w4(R+4616,b32(f32(r4(R+4616))*f32(r4(R+4680))));
w4(R+4620,b32(f32(r4(R+4620))*f32(r4(R+4684))));
}
B68b18d:{NFSU2_TR(0x68b18d);
w4(R+4608,b32(f32(r4(R+4608))+f32(r4(R+4736))));
w4(R+4612,b32(f32(r4(R+4612))+f32(r4(R+4740))));
w4(R+4616,b32(f32(r4(R+4616))+f32(r4(R+4744))));
w4(R+4620,b32(f32(r4(R+4620))+f32(r4(R+4748))));
}
B68b190:{NFSU2_TR(0x68b190);
w4(R+4608,b32(f32(r4(R+4608))+f32(r4(R+4800))));
w4(R+4612,b32(f32(r4(R+4612))+f32(r4(R+4804))));
w4(R+4616,b32(f32(r4(R+4616))+f32(r4(R+4808))));
w4(R+4620,b32(f32(r4(R+4620))+f32(r4(R+4812))));
}
B68b193:{NFSU2_TR(0x68b193);
u8 U[16];
__builtin_memmove((U+0),(R+4608),16);
__builtin_memmove(gp(u32(r4(R+0))),(U+0),16);
}
B68b196:{NFSU2_TR(0x68b196);
__builtin_memmove((R+16),(R+20),4);
}
B68b198:{NFSU2_TR(0x68b198);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B68b199:{NFSU2_TR(0x68b199);
__builtin_memmove((R+16),(R+12),4);
}
B68b19b:{NFSU2_TR(0x68b19b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B68b19c:{NFSU2_TR(0x68b19c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B68b19f:L68b19f:{c.instructions+=96;NFSU2_TR(0x68b19f);
__builtin_memmove((R+28),(R+28),4);
}
B68b1a1:{NFSU2_TR(0x68b1a1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68b1a2:{NFSU2_TR(0x68b1a2);
__builtin_memmove((R+12),(R+16),4);
}
B68b1a4:{NFSU2_TR(0x68b1a4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68b1a5:{NFSU2_TR(0x68b1a5);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B68b1a8:{NFSU2_TR(0x68b1a8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B68b1ab:{NFSU2_TR(0x68b1ab);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68b1ac:{NFSU2_TR(0x68b1ac);
__builtin_memmove((R+20),(R+16),4);
}
B68b1ae:{NFSU2_TR(0x68b1ae);
u8 U[6];
w1(R+512,u8((r4(R+16))<(u32(0x10ull))));
w1(R+523,sborrow<u32>(r4(R+16),u32(0x10ull)));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B68b1b1:{NFSU2_TR(0x68b1b1);
__builtin_memmove((R+0),(R+4),4);
}
B68b1b3:{NFSU2_TR(0x68b1b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B68b1b6:{NFSU2_TR(0x68b1b6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B68b1b8:{NFSU2_TR(0x68b1b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68b1bb:{NFSU2_TR(0x68b1bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4608),(U+4),4);
w4(R+4612,u32(0x0ull));
w4(R+4616,u32(0x0ull));
w4(R+4620,u32(0x0ull));
}
B68b1c0:{NFSU2_TR(0x68b1c0);
u8 U[76];
__builtin_memmove((U+44),(R+4608),4);
__builtin_memmove((U+48),(R+4612),4);
__builtin_memmove((U+52),(R+4616),4);
__builtin_memmove((U+56),(R+4620),4);
__builtin_memmove((U+60),(R+4608),4);
__builtin_memmove((U+64),(R+4612),4);
__builtin_memmove((U+68),(R+4616),4);
__builtin_memmove((U+72),(R+4620),4);
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4608,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4612,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4616,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4620,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B68b1c4:{NFSU2_TR(0x68b1c4);
u8 U[16];
__builtin_memmove((U+0),(R+4608),16);
__builtin_memmove(gp(u32(r4(R+0))),(U+0),16);
}
B68b1c7:{NFSU2_TR(0x68b1c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B68b1ca:{NFSU2_TR(0x68b1ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68b1cd:{NFSU2_TR(0x68b1cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4608),(U+4),4);
w4(R+4612,u32(0x0ull));
w4(R+4616,u32(0x0ull));
w4(R+4620,u32(0x0ull));
}
B68b1d2:{NFSU2_TR(0x68b1d2);
u8 U[76];
__builtin_memmove((U+44),(R+4608),4);
__builtin_memmove((U+48),(R+4612),4);
__builtin_memmove((U+52),(R+4616),4);
__builtin_memmove((U+56),(R+4620),4);
__builtin_memmove((U+60),(R+4608),4);
__builtin_memmove((U+64),(R+4612),4);
__builtin_memmove((U+68),(R+4616),4);
__builtin_memmove((U+72),(R+4620),4);
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4608,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4612,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4616,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4620,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B68b1d6:{NFSU2_TR(0x68b1d6);
u8 U[20];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+4608),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B68b1da:{NFSU2_TR(0x68b1da);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B68b1dd:{NFSU2_TR(0x68b1dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68b1e0:{NFSU2_TR(0x68b1e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4608),(U+4),4);
w4(R+4612,u32(0x0ull));
w4(R+4616,u32(0x0ull));
w4(R+4620,u32(0x0ull));
}
B68b1e5:{NFSU2_TR(0x68b1e5);
u8 U[76];
__builtin_memmove((U+44),(R+4608),4);
__builtin_memmove((U+48),(R+4612),4);
__builtin_memmove((U+52),(R+4616),4);
__builtin_memmove((U+56),(R+4620),4);
__builtin_memmove((U+60),(R+4608),4);
__builtin_memmove((U+64),(R+4612),4);
__builtin_memmove((U+68),(R+4616),4);
__builtin_memmove((U+72),(R+4620),4);
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4608,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4612,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4616,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4620,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B68b1e9:{NFSU2_TR(0x68b1e9);
u8 U[20];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x80ull))));
__builtin_memmove((U+4),(R+4608),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B68b1f0:{NFSU2_TR(0x68b1f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B68b1f3:{NFSU2_TR(0x68b1f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68b1f6:{NFSU2_TR(0x68b1f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4608),(U+4),4);
w4(R+4612,u32(0x0ull));
w4(R+4616,u32(0x0ull));
w4(R+4620,u32(0x0ull));
}
B68b1fb:{NFSU2_TR(0x68b1fb);
u8 U[76];
__builtin_memmove((U+44),(R+4608),4);
__builtin_memmove((U+48),(R+4612),4);
__builtin_memmove((U+52),(R+4616),4);
__builtin_memmove((U+56),(R+4620),4);
__builtin_memmove((U+60),(R+4608),4);
__builtin_memmove((U+64),(R+4612),4);
__builtin_memmove((U+68),(R+4616),4);
__builtin_memmove((U+72),(R+4620),4);
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4608,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4612,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4616,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4620,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B68b1ff:{NFSU2_TR(0x68b1ff);
u8 U[20];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),(R+4608),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B68b206:{NFSU2_TR(0x68b206);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B68b209:{NFSU2_TR(0x68b209);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68b20c:{NFSU2_TR(0x68b20c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4608),(U+4),4);
w4(R+4612,u32(0x0ull));
w4(R+4616,u32(0x0ull));
w4(R+4620,u32(0x0ull));
}
B68b211:{NFSU2_TR(0x68b211);
u8 U[76];
__builtin_memmove((U+44),(R+4608),4);
__builtin_memmove((U+48),(R+4612),4);
__builtin_memmove((U+52),(R+4616),4);
__builtin_memmove((U+56),(R+4620),4);
__builtin_memmove((U+60),(R+4608),4);
__builtin_memmove((U+64),(R+4612),4);
__builtin_memmove((U+68),(R+4616),4);
__builtin_memmove((U+72),(R+4620),4);
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4608,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4612,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4616,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4620,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B68b215:{NFSU2_TR(0x68b215);
u8 U[20];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4608),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B68b219:{NFSU2_TR(0x68b219);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B68b21c:{NFSU2_TR(0x68b21c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68b21f:{NFSU2_TR(0x68b21f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4608),(U+4),4);
w4(R+4612,u32(0x0ull));
w4(R+4616,u32(0x0ull));
w4(R+4620,u32(0x0ull));
}
B68b224:{NFSU2_TR(0x68b224);
u8 U[76];
__builtin_memmove((U+44),(R+4608),4);
__builtin_memmove((U+48),(R+4612),4);
__builtin_memmove((U+52),(R+4616),4);
__builtin_memmove((U+56),(R+4620),4);
__builtin_memmove((U+60),(R+4608),4);
__builtin_memmove((U+64),(R+4612),4);
__builtin_memmove((U+68),(R+4616),4);
__builtin_memmove((U+72),(R+4620),4);
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4608,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4612,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4616,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4620,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B68b228:{NFSU2_TR(0x68b228);
u8 U[20];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+4608),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B68b22c:{NFSU2_TR(0x68b22c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B68b22f:{NFSU2_TR(0x68b22f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68b232:{NFSU2_TR(0x68b232);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4608),(U+4),4);
w4(R+4612,u32(0x0ull));
w4(R+4616,u32(0x0ull));
w4(R+4620,u32(0x0ull));
}
B68b237:{NFSU2_TR(0x68b237);
u8 U[76];
__builtin_memmove((U+44),(R+4608),4);
__builtin_memmove((U+48),(R+4612),4);
__builtin_memmove((U+52),(R+4616),4);
__builtin_memmove((U+56),(R+4620),4);
__builtin_memmove((U+60),(R+4608),4);
__builtin_memmove((U+64),(R+4612),4);
__builtin_memmove((U+68),(R+4616),4);
__builtin_memmove((U+72),(R+4620),4);
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4608,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4612,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4616,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4620,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B68b23b:{NFSU2_TR(0x68b23b);
u8 U[20];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x90ull))));
__builtin_memmove((U+4),(R+4608),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B68b242:{NFSU2_TR(0x68b242);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B68b245:{NFSU2_TR(0x68b245);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68b248:{NFSU2_TR(0x68b248);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4608),(U+4),4);
w4(R+4612,u32(0x0ull));
w4(R+4616,u32(0x0ull));
w4(R+4620,u32(0x0ull));
}
B68b24d:{NFSU2_TR(0x68b24d);
u8 U[76];
__builtin_memmove((U+44),(R+4608),4);
__builtin_memmove((U+48),(R+4612),4);
__builtin_memmove((U+52),(R+4616),4);
__builtin_memmove((U+56),(R+4620),4);
__builtin_memmove((U+60),(R+4608),4);
__builtin_memmove((U+64),(R+4612),4);
__builtin_memmove((U+68),(R+4616),4);
__builtin_memmove((U+72),(R+4620),4);
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4608,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4612,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4616,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4620,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B68b251:{NFSU2_TR(0x68b251);
u8 U[20];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),(R+4608),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B68b258:{NFSU2_TR(0x68b258);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B68b25b:{NFSU2_TR(0x68b25b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68b25e:{NFSU2_TR(0x68b25e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4608),(U+4),4);
w4(R+4612,u32(0x0ull));
w4(R+4616,u32(0x0ull));
w4(R+4620,u32(0x0ull));
}
B68b263:{NFSU2_TR(0x68b263);
u8 U[76];
__builtin_memmove((U+44),(R+4608),4);
__builtin_memmove((U+48),(R+4612),4);
__builtin_memmove((U+52),(R+4616),4);
__builtin_memmove((U+56),(R+4620),4);
__builtin_memmove((U+60),(R+4608),4);
__builtin_memmove((U+64),(R+4612),4);
__builtin_memmove((U+68),(R+4616),4);
__builtin_memmove((U+72),(R+4620),4);
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4608,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4612,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4616,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4620,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B68b267:{NFSU2_TR(0x68b267);
u8 U[20];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4608),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B68b26b:{NFSU2_TR(0x68b26b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B68b26e:{NFSU2_TR(0x68b26e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68b271:{NFSU2_TR(0x68b271);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4608),(U+4),4);
w4(R+4612,u32(0x0ull));
w4(R+4616,u32(0x0ull));
w4(R+4620,u32(0x0ull));
}
B68b276:{NFSU2_TR(0x68b276);
u8 U[76];
__builtin_memmove((U+44),(R+4608),4);
__builtin_memmove((U+48),(R+4612),4);
__builtin_memmove((U+52),(R+4616),4);
__builtin_memmove((U+56),(R+4620),4);
__builtin_memmove((U+60),(R+4608),4);
__builtin_memmove((U+64),(R+4612),4);
__builtin_memmove((U+68),(R+4616),4);
__builtin_memmove((U+72),(R+4620),4);
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4608,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4612,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4616,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4620,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B68b27a:{NFSU2_TR(0x68b27a);
u8 U[20];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+4608),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B68b27e:{NFSU2_TR(0x68b27e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B68b281:{NFSU2_TR(0x68b281);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68b284:{NFSU2_TR(0x68b284);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4608),(U+4),4);
w4(R+4612,u32(0x0ull));
w4(R+4616,u32(0x0ull));
w4(R+4620,u32(0x0ull));
}
B68b289:{NFSU2_TR(0x68b289);
u8 U[76];
__builtin_memmove((U+44),(R+4608),4);
__builtin_memmove((U+48),(R+4612),4);
__builtin_memmove((U+52),(R+4616),4);
__builtin_memmove((U+56),(R+4620),4);
__builtin_memmove((U+60),(R+4608),4);
__builtin_memmove((U+64),(R+4612),4);
__builtin_memmove((U+68),(R+4616),4);
__builtin_memmove((U+72),(R+4620),4);
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4608,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4612,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4616,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4620,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B68b28d:{NFSU2_TR(0x68b28d);
u8 U[20];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),(R+4608),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B68b294:{NFSU2_TR(0x68b294);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B68b297:{NFSU2_TR(0x68b297);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68b29a:{NFSU2_TR(0x68b29a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4608),(U+4),4);
w4(R+4612,u32(0x0ull));
w4(R+4616,u32(0x0ull));
w4(R+4620,u32(0x0ull));
}
B68b29f:{NFSU2_TR(0x68b29f);
u8 U[76];
__builtin_memmove((U+44),(R+4608),4);
__builtin_memmove((U+48),(R+4612),4);
__builtin_memmove((U+52),(R+4616),4);
__builtin_memmove((U+56),(R+4620),4);
__builtin_memmove((U+60),(R+4608),4);
__builtin_memmove((U+64),(R+4612),4);
__builtin_memmove((U+68),(R+4616),4);
__builtin_memmove((U+72),(R+4620),4);
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4608,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4612,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4616,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4620,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B68b2a3:{NFSU2_TR(0x68b2a3);
u8 U[20];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xe0ull))));
__builtin_memmove((U+4),(R+4608),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B68b2aa:{NFSU2_TR(0x68b2aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B68b2ad:{NFSU2_TR(0x68b2ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68b2b0:{NFSU2_TR(0x68b2b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4608),(U+4),4);
w4(R+4612,u32(0x0ull));
w4(R+4616,u32(0x0ull));
w4(R+4620,u32(0x0ull));
}
B68b2b5:{NFSU2_TR(0x68b2b5);
u8 U[76];
__builtin_memmove((U+44),(R+4608),4);
__builtin_memmove((U+48),(R+4612),4);
__builtin_memmove((U+52),(R+4616),4);
__builtin_memmove((U+56),(R+4620),4);
__builtin_memmove((U+60),(R+4608),4);
__builtin_memmove((U+64),(R+4612),4);
__builtin_memmove((U+68),(R+4616),4);
__builtin_memmove((U+72),(R+4620),4);
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4608,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4612,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4616,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4620,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B68b2b9:{NFSU2_TR(0x68b2b9);
u8 U[20];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4608),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B68b2bd:{NFSU2_TR(0x68b2bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B68b2c0:{NFSU2_TR(0x68b2c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68b2c3:{NFSU2_TR(0x68b2c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4608),(U+4),4);
w4(R+4612,u32(0x0ull));
w4(R+4616,u32(0x0ull));
w4(R+4620,u32(0x0ull));
}
B68b2c8:{NFSU2_TR(0x68b2c8);
u8 U[76];
__builtin_memmove((U+44),(R+4608),4);
__builtin_memmove((U+48),(R+4612),4);
__builtin_memmove((U+52),(R+4616),4);
__builtin_memmove((U+56),(R+4620),4);
__builtin_memmove((U+60),(R+4608),4);
__builtin_memmove((U+64),(R+4612),4);
__builtin_memmove((U+68),(R+4616),4);
__builtin_memmove((U+72),(R+4620),4);
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4608,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4612,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4616,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4620,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B68b2cc:{NFSU2_TR(0x68b2cc);
u8 U[20];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+4608),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B68b2d0:{NFSU2_TR(0x68b2d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B68b2d3:{NFSU2_TR(0x68b2d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68b2d6:{NFSU2_TR(0x68b2d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4608),(U+4),4);
w4(R+4612,u32(0x0ull));
w4(R+4616,u32(0x0ull));
w4(R+4620,u32(0x0ull));
}
B68b2db:{NFSU2_TR(0x68b2db);
u8 U[76];
__builtin_memmove((U+44),(R+4608),4);
__builtin_memmove((U+48),(R+4612),4);
__builtin_memmove((U+52),(R+4616),4);
__builtin_memmove((U+56),(R+4620),4);
__builtin_memmove((U+60),(R+4608),4);
__builtin_memmove((U+64),(R+4612),4);
__builtin_memmove((U+68),(R+4616),4);
__builtin_memmove((U+72),(R+4620),4);
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4608,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4612,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4616,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4620,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B68b2df:{NFSU2_TR(0x68b2df);
u8 U[20];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),(R+4608),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B68b2e6:{NFSU2_TR(0x68b2e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B68b2e9:{NFSU2_TR(0x68b2e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68b2ec:{NFSU2_TR(0x68b2ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4608),(U+4),4);
w4(R+4612,u32(0x0ull));
w4(R+4616,u32(0x0ull));
w4(R+4620,u32(0x0ull));
}
B68b2f1:{NFSU2_TR(0x68b2f1);
u8 U[76];
__builtin_memmove((U+44),(R+4608),4);
__builtin_memmove((U+48),(R+4612),4);
__builtin_memmove((U+52),(R+4616),4);
__builtin_memmove((U+56),(R+4620),4);
__builtin_memmove((U+60),(R+4608),4);
__builtin_memmove((U+64),(R+4612),4);
__builtin_memmove((U+68),(R+4616),4);
__builtin_memmove((U+72),(R+4620),4);
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4608,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4612,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4616,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4620,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B68b2f5:{NFSU2_TR(0x68b2f5);
u8 U[20];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xf0ull))));
__builtin_memmove((U+4),(R+4608),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B68b2fc:{NFSU2_TR(0x68b2fc);
__builtin_memmove((R+16),(R+20),4);
}
B68b2fe:{NFSU2_TR(0x68b2fe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B68b2ff:{NFSU2_TR(0x68b2ff);
__builtin_memmove((R+16),(R+12),4);
}
B68b301:{NFSU2_TR(0x68b301);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B68b302:{NFSU2_TR(0x68b302);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B68b305:L68b305:{c.instructions+=25;NFSU2_TR(0x68b305);
__builtin_memmove((R+28),(R+28),4);
}
B68b307:{NFSU2_TR(0x68b307);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68b308:{NFSU2_TR(0x68b308);
__builtin_memmove((R+12),(R+16),4);
}
B68b30a:{NFSU2_TR(0x68b30a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68b30b:{NFSU2_TR(0x68b30b);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B68b30e:{NFSU2_TR(0x68b30e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B68b311:{NFSU2_TR(0x68b311);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68b312:{NFSU2_TR(0x68b312);
__builtin_memmove((R+20),(R+16),4);
}
B68b314:{NFSU2_TR(0x68b314);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x128ull))));
}
B68b31a:{NFSU2_TR(0x68b31a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B68b31d:{NFSU2_TR(0x68b31d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68b31e:{NFSU2_TR(0x68b31e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68b31f:{NFSU2_TR(0x68b31f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B68b322:{NFSU2_TR(0x68b322);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68b324:{NFSU2_TR(0x68b324);
__builtin_memmove((R+8),(R+0),4);
}
B68b326:{NFSU2_TR(0x68b326);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xfffffffcull))));
}
B68b329:{NFSU2_TR(0x68b329);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B68b32a:{NFSU2_TR(0x68b32a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
}
B68b32c:{NFSU2_TR(0x68b32c);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(R+24))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B68b32e:{NFSU2_TR(0x68b32e);
w4(R+24,u32(u32(r4(R+24))&u32(r4(R+8))));
}
B68b330:{NFSU2_TR(0x68b330);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+24))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B68b332:{NFSU2_TR(0x68b332);
u8 U[9];
w4(U+5,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+24,shr<u32>(r4(R+24),u64(r4(U+5))));
w1(U+0,u8((r4(U+5))!=(u32(0x0ull))));
w1(U+1,u8((r4(R+24))==(u32(0x0ull))));
w1(U+2,u8(!(r1(U+0))));
w1(U+3,u8(u32(r1(U+2))&u32(r1(R+518))));
w1(U+4,u8(u32(r1(U+0))&u32(r1(U+1))));
w1(R+518,u8(u32(r1(U+3))|u32(r1(U+4))));
}
B68b335:{NFSU2_TR(0x68b335);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68b338:{NFSU2_TR(0x68b338);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68b33b:{NFSU2_TR(0x68b33b);
if(r1(R+518)){{goto L68b4a8;}}
}
B68b341:L68b341:{c.instructions+=3;NFSU2_TR(0x68b341);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B68b344:{NFSU2_TR(0x68b344);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffee0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B68b34a:{NFSU2_TR(0x68b34a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x68b34full));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x68b19fu);}goto L68b19f;}
}
B68b34f:L68b34f:{c.instructions+=4;NFSU2_TR(0x68b34f);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B68b351:{NFSU2_TR(0x68b351);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B68b354:{NFSU2_TR(0x68b354);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B68b357:{NFSU2_TR(0x68b357);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L68b4a8;}}
}
B68b35d:L68b35d:{c.instructions+=4;NFSU2_TR(0x68b35d);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
__builtin_memmove((R+4736),(U+20),4);
__builtin_memmove((R+4740),(U+24),4);
__builtin_memmove((R+4744),(U+28),4);
__builtin_memmove((R+4748),(U+32),4);
}
B68b361:{NFSU2_TR(0x68b361);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
__builtin_memmove((R+4800),(U+20),4);
__builtin_memmove((R+4804),(U+24),4);
__builtin_memmove((R+4808),(U+28),4);
__builtin_memmove((R+4812),(U+32),4);
}
B68b365:{NFSU2_TR(0x68b365);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68b368:{NFSU2_TR(0x68b368);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B68b36b:L68b36b:{c.instructions+=81;NFSU2_TR(0x68b36b);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4800),(U+8),8);
}
B68b36f:{NFSU2_TR(0x68b36f);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),8);
__builtin_memmove((R+4736),(U+0),8);
}
B68b372:{NFSU2_TR(0x68b372);
__builtin_memmove((R+4672),(R+4736),4);
__builtin_memmove((R+4676),(R+4740),4);
__builtin_memmove((R+4680),(R+4744),4);
__builtin_memmove((R+4684),(R+4748),4);
}
B68b375:{NFSU2_TR(0x68b375);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4680),(U+8),8);
}
B68b379:{NFSU2_TR(0x68b379);
__builtin_memmove((R+4736),(R+4800),4);
__builtin_memmove((R+4740),(R+4804),4);
__builtin_memmove((R+4744),(R+4808),4);
__builtin_memmove((R+4748),(R+4812),4);
}
B68b37c:{NFSU2_TR(0x68b37c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4800),(U+4),4);
w4(R+4804,u32(0x0ull));
w4(R+4808,u32(0x0ull));
w4(R+4812,u32(0x0ull));
}
B68b381:{NFSU2_TR(0x68b381);
__builtin_memmove((R+4608),(R+4672),4);
__builtin_memmove((R+4612),(R+4676),4);
__builtin_memmove((R+4616),(R+4680),4);
__builtin_memmove((R+4620),(R+4684),4);
}
B68b384:{NFSU2_TR(0x68b384);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B68b387:{NFSU2_TR(0x68b387);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4744),(U+8),8);
}
B68b38b:{NFSU2_TR(0x68b38b);
u8 U[76];
__builtin_memmove((U+44),(R+4736),4);
__builtin_memmove((U+48),(R+4740),4);
__builtin_memmove((U+52),(R+4744),4);
__builtin_memmove((U+56),(R+4748),4);
__builtin_memmove((U+60),(R+4672),4);
__builtin_memmove((U+64),(R+4676),4);
__builtin_memmove((U+68),(R+4680),4);
__builtin_memmove((U+72),(R+4684),4);
w1(U+0,u8((u8(0x1ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x1ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x1ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x1ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4672,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x3ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x3ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x3ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x3ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4676,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x1ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x1ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x1ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x1ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4680,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x3ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x3ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x3ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x3ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4684,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B68b38f:{NFSU2_TR(0x68b38f);
u8 U[76];
__builtin_memmove((U+44),(R+4736),4);
__builtin_memmove((U+48),(R+4740),4);
__builtin_memmove((U+52),(R+4744),4);
__builtin_memmove((U+56),(R+4748),4);
__builtin_memmove((U+60),(R+4608),4);
__builtin_memmove((U+64),(R+4612),4);
__builtin_memmove((U+68),(R+4616),4);
__builtin_memmove((U+72),(R+4620),4);
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4608,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x2ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x2ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x2ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x2ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4612,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4616,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x2ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x2ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x2ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x2ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4620,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B68b393:{NFSU2_TR(0x68b393);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4736),(U+12),4);
w4(R+4740,u32(0x0ull));
w4(R+4744,u32(0x0ull));
w4(R+4748,u32(0x0ull));
}
B68b399:{NFSU2_TR(0x68b399);
__builtin_memmove((R+4864),(R+4672),4);
__builtin_memmove((R+4868),(R+4676),4);
__builtin_memmove((R+4872),(R+4680),4);
__builtin_memmove((R+4876),(R+4684),4);
}
B68b39c:{NFSU2_TR(0x68b39c);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4672),(U+12),4);
w4(R+4676,u32(0x0ull));
w4(R+4680,u32(0x0ull));
w4(R+4684,u32(0x0ull));
}
B68b3a2:{NFSU2_TR(0x68b3a2);
__builtin_memmove((R+4744),(R+4672),8);
}
B68b3a5:{NFSU2_TR(0x68b3a5);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4672),(U+12),4);
w4(R+4676,u32(0x0ull));
w4(R+4680,u32(0x0ull));
w4(R+4684,u32(0x0ull));
}
B68b3ab:{NFSU2_TR(0x68b3ab);
__builtin_memmove((R+4808),(R+4672),8);
}
B68b3ae:{NFSU2_TR(0x68b3ae);
__builtin_memmove((R+4672),(R+4800),4);
__builtin_memmove((R+4676),(R+4804),4);
__builtin_memmove((R+4680),(R+4808),4);
__builtin_memmove((R+4684),(R+4812),4);
}
B68b3b1:{NFSU2_TR(0x68b3b1);
u8 U[76];
__builtin_memmove((U+44),(R+4736),4);
__builtin_memmove((U+48),(R+4740),4);
__builtin_memmove((U+52),(R+4744),4);
__builtin_memmove((U+56),(R+4748),4);
__builtin_memmove((U+60),(R+4672),4);
__builtin_memmove((U+64),(R+4676),4);
__builtin_memmove((U+68),(R+4680),4);
__builtin_memmove((U+72),(R+4684),4);
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4672,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x2ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x2ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x2ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x2ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4676,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4680,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x2ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x2ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x2ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x2ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4684,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B68b3b5:{NFSU2_TR(0x68b3b5);
__builtin_memmove((R+4800),(R+4864),4);
__builtin_memmove((R+4804),(R+4868),4);
__builtin_memmove((R+4808),(R+4872),4);
__builtin_memmove((R+4812),(R+4876),4);
}
B68b3b8:{NFSU2_TR(0x68b3b8);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4800,b32(f32(r4(R+4800))*f32(r4(U+20))));
w4(R+4804,b32(f32(r4(R+4804))*f32(r4(U+24))));
w4(R+4808,b32(f32(r4(R+4808))*f32(r4(U+28))));
w4(R+4812,b32(f32(r4(R+4812))*f32(r4(U+32))));
}
B68b3bf:{NFSU2_TR(0x68b3bf);
__builtin_memmove((R+4928),(R+4608),4);
__builtin_memmove((R+4932),(R+4612),4);
__builtin_memmove((R+4936),(R+4616),4);
__builtin_memmove((R+4940),(R+4620),4);
}
B68b3c2:{NFSU2_TR(0x68b3c2);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffee0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4928,b32(f32(r4(R+4928))*f32(r4(U+20))));
w4(R+4932,b32(f32(r4(R+4932))*f32(r4(U+24))));
w4(R+4936,b32(f32(r4(R+4936))*f32(r4(U+28))));
w4(R+4940,b32(f32(r4(R+4940))*f32(r4(U+32))));
}
B68b3c9:{NFSU2_TR(0x68b3c9);
w4(R+4928,b32(f32(r4(R+4928))+f32(r4(R+4800))));
w4(R+4932,b32(f32(r4(R+4932))+f32(r4(R+4804))));
w4(R+4936,b32(f32(r4(R+4936))+f32(r4(R+4808))));
w4(R+4940,b32(f32(r4(R+4940))+f32(r4(R+4812))));
}
B68b3cc:{NFSU2_TR(0x68b3cc);
__builtin_memmove((R+4800),(R+4928),4);
__builtin_memmove((R+4804),(R+4932),4);
__builtin_memmove((R+4808),(R+4936),4);
__builtin_memmove((R+4812),(R+4940),4);
}
B68b3cf:{NFSU2_TR(0x68b3cf);
__builtin_memmove((R+4736),(R+4672),4);
__builtin_memmove((R+4740),(R+4676),4);
__builtin_memmove((R+4744),(R+4680),4);
__builtin_memmove((R+4748),(R+4684),4);
}
B68b3d2:{NFSU2_TR(0x68b3d2);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4736,b32(f32(r4(R+4736))*f32(r4(U+20))));
w4(R+4740,b32(f32(r4(R+4740))*f32(r4(U+24))));
w4(R+4744,b32(f32(r4(R+4744))*f32(r4(U+28))));
w4(R+4748,b32(f32(r4(R+4748))*f32(r4(U+32))));
}
B68b3d9:{NFSU2_TR(0x68b3d9);
w4(R+4800,b32(f32(r4(R+4800))+f32(r4(R+4736))));
w4(R+4804,b32(f32(r4(R+4804))+f32(r4(R+4740))));
w4(R+4808,b32(f32(r4(R+4808))+f32(r4(R+4744))));
w4(R+4812,b32(f32(r4(R+4812))+f32(r4(R+4748))));
}
B68b3dc:{NFSU2_TR(0x68b3dc);
__builtin_memmove((R+4736),(R+4800),4);
__builtin_memmove((R+4740),(R+4804),4);
__builtin_memmove((R+4744),(R+4808),4);
__builtin_memmove((R+4748),(R+4812),4);
}
B68b3df:{NFSU2_TR(0x68b3df);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4736,b32(f32(r4(R+4736))+f32(r4(U+20))));
w4(R+4740,b32(f32(r4(R+4740))+f32(r4(U+24))));
w4(R+4744,b32(f32(r4(R+4744))+f32(r4(U+28))));
w4(R+4748,b32(f32(r4(R+4748))+f32(r4(U+32))));
}
B68b3e3:{NFSU2_TR(0x68b3e3);
__builtin_memmove((R+4928),(R+4864),4);
__builtin_memmove((R+4932),(R+4868),4);
__builtin_memmove((R+4936),(R+4872),4);
__builtin_memmove((R+4940),(R+4876),4);
}
B68b3e6:{NFSU2_TR(0x68b3e6);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4928,b32(f32(r4(R+4928))*f32(r4(U+20))));
w4(R+4932,b32(f32(r4(R+4932))*f32(r4(U+24))));
w4(R+4936,b32(f32(r4(R+4936))*f32(r4(U+28))));
w4(R+4940,b32(f32(r4(R+4940))*f32(r4(U+32))));
}
B68b3ed:{NFSU2_TR(0x68b3ed);
__builtin_memmove((R+4992),(R+4608),4);
__builtin_memmove((R+4996),(R+4612),4);
__builtin_memmove((R+5000),(R+4616),4);
__builtin_memmove((R+5004),(R+4620),4);
}
B68b3f0:{NFSU2_TR(0x68b3f0);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffef0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4992,b32(f32(r4(R+4992))*f32(r4(U+20))));
w4(R+4996,b32(f32(r4(R+4996))*f32(r4(U+24))));
w4(R+5000,b32(f32(r4(R+5000))*f32(r4(U+28))));
w4(R+5004,b32(f32(r4(R+5004))*f32(r4(U+32))));
}
B68b3f7:{NFSU2_TR(0x68b3f7);
w4(R+4992,b32(f32(r4(R+4992))+f32(r4(R+4928))));
w4(R+4996,b32(f32(r4(R+4996))+f32(r4(R+4932))));
w4(R+5000,b32(f32(r4(R+5000))+f32(r4(R+4936))));
w4(R+5004,b32(f32(r4(R+5004))+f32(r4(R+4940))));
}
B68b3fa:{NFSU2_TR(0x68b3fa);
__builtin_memmove((R+4928),(R+4992),4);
__builtin_memmove((R+4932),(R+4996),4);
__builtin_memmove((R+4936),(R+5000),4);
__builtin_memmove((R+4940),(R+5004),4);
}
B68b3fd:{NFSU2_TR(0x68b3fd);
__builtin_memmove((R+4800),(R+4672),4);
__builtin_memmove((R+4804),(R+4676),4);
__builtin_memmove((R+4808),(R+4680),4);
__builtin_memmove((R+4812),(R+4684),4);
}
B68b400:{NFSU2_TR(0x68b400);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4800,b32(f32(r4(R+4800))*f32(r4(U+20))));
w4(R+4804,b32(f32(r4(R+4804))*f32(r4(U+24))));
w4(R+4808,b32(f32(r4(R+4808))*f32(r4(U+28))));
w4(R+4812,b32(f32(r4(R+4812))*f32(r4(U+32))));
}
B68b407:{NFSU2_TR(0x68b407);
w4(R+4928,b32(f32(r4(R+4928))+f32(r4(R+4800))));
w4(R+4932,b32(f32(r4(R+4932))+f32(r4(R+4804))));
w4(R+4936,b32(f32(r4(R+4936))+f32(r4(R+4808))));
w4(R+4940,b32(f32(r4(R+4940))+f32(r4(R+4812))));
}
B68b40a:{NFSU2_TR(0x68b40a);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4928,b32(f32(r4(R+4928))+f32(r4(U+20))));
w4(R+4932,b32(f32(r4(R+4932))+f32(r4(U+24))));
w4(R+4936,b32(f32(r4(R+4936))+f32(r4(U+28))));
w4(R+4940,b32(f32(r4(R+4940))+f32(r4(U+32))));
}
B68b40e:{NFSU2_TR(0x68b40e);
__builtin_memmove((R+4992),(R+4864),4);
__builtin_memmove((R+4996),(R+4868),4);
__builtin_memmove((R+5000),(R+4872),4);
__builtin_memmove((R+5004),(R+4876),4);
}
B68b411:{NFSU2_TR(0x68b411);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4992,b32(f32(r4(R+4992))*f32(r4(U+20))));
w4(R+4996,b32(f32(r4(R+4996))*f32(r4(U+24))));
w4(R+5000,b32(f32(r4(R+5000))*f32(r4(U+28))));
w4(R+5004,b32(f32(r4(R+5004))*f32(r4(U+32))));
}
B68b418:{NFSU2_TR(0x68b418);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4864,b32(f32(r4(R+4864))*f32(r4(U+20))));
w4(R+4868,b32(f32(r4(R+4868))*f32(r4(U+24))));
w4(R+4872,b32(f32(r4(R+4872))*f32(r4(U+28))));
w4(R+4876,b32(f32(r4(R+4876))*f32(r4(U+32))));
}
B68b41f:{NFSU2_TR(0x68b41f);
__builtin_memmove((R+5056),(R+4608),4);
__builtin_memmove((R+5060),(R+4612),4);
__builtin_memmove((R+5064),(R+4616),4);
__builtin_memmove((R+5068),(R+4620),4);
}
B68b422:{NFSU2_TR(0x68b422);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff00ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+5056,b32(f32(r4(R+5056))*f32(r4(U+20))));
w4(R+5060,b32(f32(r4(R+5060))*f32(r4(U+24))));
w4(R+5064,b32(f32(r4(R+5064))*f32(r4(U+28))));
w4(R+5068,b32(f32(r4(R+5068))*f32(r4(U+32))));
}
B68b429:{NFSU2_TR(0x68b429);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4608,b32(f32(r4(R+4608))*f32(r4(U+20))));
w4(R+4612,b32(f32(r4(R+4612))*f32(r4(U+24))));
w4(R+4616,b32(f32(r4(R+4616))*f32(r4(U+28))));
w4(R+4620,b32(f32(r4(R+4620))*f32(r4(U+32))));
}
B68b430:{NFSU2_TR(0x68b430);
__builtin_memmove((R+4800),(R+4672),4);
__builtin_memmove((R+4804),(R+4676),4);
__builtin_memmove((R+4808),(R+4680),4);
__builtin_memmove((R+4812),(R+4684),4);
}
B68b433:{NFSU2_TR(0x68b433);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4800,b32(f32(r4(R+4800))*f32(r4(U+20))));
w4(R+4804,b32(f32(r4(R+4804))*f32(r4(U+24))));
w4(R+4808,b32(f32(r4(R+4808))*f32(r4(U+28))));
w4(R+4812,b32(f32(r4(R+4812))*f32(r4(U+32))));
}
B68b437:{NFSU2_TR(0x68b437);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4672,b32(f32(r4(R+4672))*f32(r4(U+20))));
w4(R+4676,b32(f32(r4(R+4676))*f32(r4(U+24))));
w4(R+4680,b32(f32(r4(R+4680))*f32(r4(U+28))));
w4(R+4684,b32(f32(r4(R+4684))*f32(r4(U+32))));
}
B68b43b:{NFSU2_TR(0x68b43b);
w4(R+4608,b32(f32(r4(R+4608))+f32(r4(R+4864))));
w4(R+4612,b32(f32(r4(R+4612))+f32(r4(R+4868))));
w4(R+4616,b32(f32(r4(R+4616))+f32(r4(R+4872))));
w4(R+4620,b32(f32(r4(R+4620))+f32(r4(R+4876))));
}
B68b43e:{NFSU2_TR(0x68b43e);
w4(R+5056,b32(f32(r4(R+5056))+f32(r4(R+4992))));
w4(R+5060,b32(f32(r4(R+5060))+f32(r4(R+4996))));
w4(R+5064,b32(f32(r4(R+5064))+f32(r4(R+5000))));
w4(R+5068,b32(f32(r4(R+5068))+f32(r4(R+5004))));
}
B68b441:{NFSU2_TR(0x68b441);
__builtin_memmove((R+4992),(R+5056),4);
__builtin_memmove((R+4996),(R+5060),4);
__builtin_memmove((R+5000),(R+5064),4);
__builtin_memmove((R+5004),(R+5068),4);
}
B68b444:{NFSU2_TR(0x68b444);
w4(R+4992,b32(f32(r4(R+4992))+f32(r4(R+4800))));
w4(R+4996,b32(f32(r4(R+4996))+f32(r4(R+4804))));
w4(R+5000,b32(f32(r4(R+5000))+f32(r4(R+4808))));
w4(R+5004,b32(f32(r4(R+5004))+f32(r4(R+4812))));
}
B68b447:{NFSU2_TR(0x68b447);
__builtin_memmove((R+4864),(R+4608),4);
__builtin_memmove((R+4868),(R+4612),4);
__builtin_memmove((R+4872),(R+4616),4);
__builtin_memmove((R+4876),(R+4620),4);
}
B68b44a:{NFSU2_TR(0x68b44a);
w4(R+4864,b32(f32(r4(R+4864))+f32(r4(R+4672))));
w4(R+4868,b32(f32(r4(R+4868))+f32(r4(R+4676))));
w4(R+4872,b32(f32(r4(R+4872))+f32(r4(R+4680))));
w4(R+4876,b32(f32(r4(R+4876))+f32(r4(R+4684))));
}
B68b44d:{NFSU2_TR(0x68b44d);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4864,b32(f32(r4(R+4864))+f32(r4(U+20))));
w4(R+4868,b32(f32(r4(R+4868))+f32(r4(U+24))));
w4(R+4872,b32(f32(r4(R+4872))+f32(r4(U+28))));
w4(R+4876,b32(f32(r4(R+4876))+f32(r4(U+32))));
}
B68b451:{NFSU2_TR(0x68b451);
__builtin_memmove((R+4800),(R+4992),4);
__builtin_memmove((R+4804),(R+4996),4);
__builtin_memmove((R+4808),(R+5000),4);
__builtin_memmove((R+4812),(R+5004),4);
}
B68b454:{NFSU2_TR(0x68b454);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4800,b32(f32(r4(R+4800))+f32(r4(U+20))));
w4(R+4804,b32(f32(r4(R+4804))+f32(r4(U+24))));
w4(R+4808,b32(f32(r4(R+4808))+f32(r4(U+28))));
w4(R+4812,b32(f32(r4(R+4812))+f32(r4(U+32))));
}
B68b458:{NFSU2_TR(0x68b458);
__builtin_memmove((R+4608),(R+4736),4);
__builtin_memmove((R+4612),(R+4740),4);
__builtin_memmove((R+4616),(R+4744),4);
__builtin_memmove((R+4620),(R+4748),4);
}
B68b45b:{NFSU2_TR(0x68b45b);
__builtin_memmove((R+4616),(R+4612),4);
__builtin_memmove((R+4620),(R+4932),4);
__builtin_memmove((R+4612),(R+4928),4);
}
B68b45e:{NFSU2_TR(0x68b45e);
u8 U[8];
__builtin_memmove((U+0),(R+4608),8);
s8_(u32(r4(R+28)),r8(U+0));
}
B68b461:{NFSU2_TR(0x68b461);
__builtin_memmove((R+4672),(R+4800),4);
__builtin_memmove((R+4676),(R+4804),4);
__builtin_memmove((R+4680),(R+4808),4);
__builtin_memmove((R+4684),(R+4812),4);
}
B68b464:{NFSU2_TR(0x68b464);
__builtin_memmove((R+4680),(R+4676),4);
__builtin_memmove((R+4684),(R+4868),4);
__builtin_memmove((R+4676),(R+4864),4);
}
B68b467:{NFSU2_TR(0x68b467);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4672),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B68b46b:{NFSU2_TR(0x68b46b);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4616),8);
s8_(u32(r4(U+4)),r8(U+8));
}
B68b46f:{NFSU2_TR(0x68b46f);
u8 U[20];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4680),8);
s8_(u32(r4(U+8)),r8(U+12));
}
B68b474:{NFSU2_TR(0x68b474);
__builtin_memmove((R+4736),(R+4744),4);
__builtin_memmove((R+4740),(R+4936),4);
__builtin_memmove((R+4744),(R+4748),4);
__builtin_memmove((R+4748),(R+4940),4);
}
B68b477:{NFSU2_TR(0x68b477);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4736),8);
s8_(u32(r4(U+4)),r8(U+8));
}
B68b47b:{NFSU2_TR(0x68b47b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B68b47e:{NFSU2_TR(0x68b47e);
__builtin_memmove((R+4800),(R+4808),4);
__builtin_memmove((R+4804),(R+4872),4);
__builtin_memmove((R+4808),(R+4812),4);
__builtin_memmove((R+4812),(R+4876),4);
}
B68b481:{NFSU2_TR(0x68b481);
u8 U[20];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4800),8);
s8_(u32(r4(U+8)),r8(U+12));
}
B68b486:{NFSU2_TR(0x68b486);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4744),8);
s8_(u32(r4(U+4)),r8(U+8));
}
B68b48a:{NFSU2_TR(0x68b48a);
u8 U[20];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4808),8);
s8_(u32(r4(U+8)),r8(U+12));
}
B68b48f:{NFSU2_TR(0x68b48f);
__builtin_memmove((R+8),(R+0),4);
}
B68b491:{NFSU2_TR(0x68b491);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B68b494:{NFSU2_TR(0x68b494);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+8))));
}
B68b496:{NFSU2_TR(0x68b496);
__builtin_memmove((R+8),(R+4),4);
}
B68b498:{NFSU2_TR(0x68b498);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B68b49b:{NFSU2_TR(0x68b49b);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+8))));
}
B68b49d:{NFSU2_TR(0x68b49d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B68b4a0:{NFSU2_TR(0x68b4a0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x68b36bu);}goto L68b36b;}}
}
B68b4a6:L68b4a6:{c.instructions+=1;NFSU2_TR(0x68b4a6);
{goto L68b4ab;}
}
B68b4a8:L68b4a8:{c.instructions+=1;NFSU2_TR(0x68b4a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B68b4ab:L68b4ab:{c.instructions+=3;NFSU2_TR(0x68b4ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B68b4ae:{NFSU2_TR(0x68b4ae);
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
B68b4b0:{NFSU2_TR(0x68b4b0);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L68b4ca;}}
}
B68b4b2:L68b4b2:{c.instructions+=1;NFSU2_TR(0x68b4b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68b4b5:L68b4b5:{c.instructions+=4;NFSU2_TR(0x68b4b5);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B68b4b8:{NFSU2_TR(0x68b4b8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68b4b9:{NFSU2_TR(0x68b4b9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68b4ba:{NFSU2_TR(0x68b4ba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x68b4bfull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x68b0d8u);}goto L68b0d8;}
}
B68b4bf:L68b4bf:{c.instructions+=4;NFSU2_TR(0x68b4bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+24,u32(u32(r4(R+24))+u32(r4(U+4))));
}
B68b4c2:{NFSU2_TR(0x68b4c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,carry<u32>(r4(R+28),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+28,u32(u32(r4(R+28))+u32(r4(U+4))));
}
B68b4c5:{NFSU2_TR(0x68b4c5);
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
B68b4c8:{NFSU2_TR(0x68b4c8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x68b4b5u);}goto L68b4b5;}}
}
B68b4ca:L68b4ca:{c.instructions+=8;NFSU2_TR(0x68b4ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B68b4cd:{NFSU2_TR(0x68b4cd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B68b4ce:{NFSU2_TR(0x68b4ce);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B68b4cf:{NFSU2_TR(0x68b4cf);
__builtin_memmove((R+16),(R+20),4);
}
B68b4d1:{NFSU2_TR(0x68b4d1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B68b4d2:{NFSU2_TR(0x68b4d2);
__builtin_memmove((R+16),(R+12),4);
}
B68b4d4:{NFSU2_TR(0x68b4d4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B68b4d5:{NFSU2_TR(0x68b4d5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B68b4d8:L68b4d8:{c.instructions+=27;NFSU2_TR(0x68b4d8);
__builtin_memmove((R+28),(R+28),4);
}
B68b4da:{NFSU2_TR(0x68b4da);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68b4db:{NFSU2_TR(0x68b4db);
__builtin_memmove((R+12),(R+16),4);
}
B68b4dd:{NFSU2_TR(0x68b4dd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68b4de:{NFSU2_TR(0x68b4de);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B68b4e1:{NFSU2_TR(0x68b4e1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B68b4e4:{NFSU2_TR(0x68b4e4);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68b4e5:{NFSU2_TR(0x68b4e5);
__builtin_memmove((R+20),(R+16),4);
}
B68b4e7:{NFSU2_TR(0x68b4e7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x128ull))));
}
B68b4ed:{NFSU2_TR(0x68b4ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B68b4f0:{NFSU2_TR(0x68b4f0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68b4f1:{NFSU2_TR(0x68b4f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B68b4f4:{NFSU2_TR(0x68b4f4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68b4f5:{NFSU2_TR(0x68b4f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B68b4f8:{NFSU2_TR(0x68b4f8);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68b4fa:{NFSU2_TR(0x68b4fa);
__builtin_memmove((R+8),(R+0),4);
}
B68b4fc:{NFSU2_TR(0x68b4fc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B68b4fd:{NFSU2_TR(0x68b4fd);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xfffffffcull))));
}
B68b500:{NFSU2_TR(0x68b500);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
}
B68b502:{NFSU2_TR(0x68b502);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(R+4))));
w4(R+4,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B68b504:{NFSU2_TR(0x68b504);
w4(R+4,u32(u32(r4(R+4))&u32(r4(R+8))));
}
B68b506:{NFSU2_TR(0x68b506);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B68b508:{NFSU2_TR(0x68b508);
u8 U[9];
w4(U+5,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+5))));
w1(U+0,u8((r4(U+5))!=(u32(0x0ull))));
w1(U+1,u8((r4(R+4))==(u32(0x0ull))));
w1(U+2,u8(!(r1(U+0))));
w1(U+3,u8(u32(r1(U+2))&u32(r1(R+518))));
w1(U+4,u8(u32(r1(U+0))&u32(r1(U+1))));
w1(R+518,u8(u32(r1(U+3))|u32(r1(U+4))));
}
B68b50b:{NFSU2_TR(0x68b50b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68b50e:{NFSU2_TR(0x68b50e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68b511:{NFSU2_TR(0x68b511);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68b514:{NFSU2_TR(0x68b514);
if(r1(R+518)){{goto L68b627;}}
}
B68b51a:L68b51a:{c.instructions+=3;NFSU2_TR(0x68b51a);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B68b51d:{NFSU2_TR(0x68b51d);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffee0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B68b523:{NFSU2_TR(0x68b523);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x68b528ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x68b19fu);}goto L68b19f;}
}
B68b528:L68b528:{c.instructions+=4;NFSU2_TR(0x68b528);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B68b52b:{NFSU2_TR(0x68b52b);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B68b52d:{NFSU2_TR(0x68b52d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B68b530:{NFSU2_TR(0x68b530);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L68b627;}}
}
B68b536:L68b536:{c.instructions+=3;NFSU2_TR(0x68b536);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
__builtin_memmove((R+4736),(U+20),4);
__builtin_memmove((R+4740),(U+24),4);
__builtin_memmove((R+4744),(U+28),4);
__builtin_memmove((R+4748),(U+32),4);
}
B68b53a:{NFSU2_TR(0x68b53a);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
__builtin_memmove((R+4800),(U+20),4);
__builtin_memmove((R+4804),(U+24),4);
__builtin_memmove((R+4808),(U+28),4);
__builtin_memmove((R+4812),(U+32),4);
}
B68b53e:{NFSU2_TR(0x68b53e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68b541:L68b541:{c.instructions+=60;NFSU2_TR(0x68b541);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B68b544:{NFSU2_TR(0x68b544);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4800),(U+8),8);
}
B68b548:{NFSU2_TR(0x68b548);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),8);
__builtin_memmove((R+4736),(U+0),8);
}
B68b54b:{NFSU2_TR(0x68b54b);
__builtin_memmove((R+4672),(R+4736),4);
__builtin_memmove((R+4676),(R+4740),4);
__builtin_memmove((R+4680),(R+4744),4);
__builtin_memmove((R+4684),(R+4748),4);
}
B68b54e:{NFSU2_TR(0x68b54e);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4680),(U+8),8);
}
B68b552:{NFSU2_TR(0x68b552);
__builtin_memmove((R+4736),(R+4800),4);
__builtin_memmove((R+4740),(R+4804),4);
__builtin_memmove((R+4744),(R+4808),4);
__builtin_memmove((R+4748),(R+4812),4);
}
B68b555:{NFSU2_TR(0x68b555);
__builtin_memmove((R+4608),(R+4672),4);
__builtin_memmove((R+4612),(R+4676),4);
__builtin_memmove((R+4616),(R+4680),4);
__builtin_memmove((R+4620),(R+4684),4);
}
B68b558:{NFSU2_TR(0x68b558);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B68b55b:{NFSU2_TR(0x68b55b);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4744),(U+8),8);
}
B68b55f:{NFSU2_TR(0x68b55f);
u8 U[76];
__builtin_memmove((U+44),(R+4736),4);
__builtin_memmove((U+48),(R+4740),4);
__builtin_memmove((U+52),(R+4744),4);
__builtin_memmove((U+56),(R+4748),4);
__builtin_memmove((U+60),(R+4608),4);
__builtin_memmove((U+64),(R+4612),4);
__builtin_memmove((U+68),(R+4616),4);
__builtin_memmove((U+72),(R+4620),4);
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4608,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x2ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x2ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x2ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x2ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4612,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4616,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x2ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x2ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x2ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x2ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4620,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B68b563:{NFSU2_TR(0x68b563);
u8 U[76];
__builtin_memmove((U+44),(R+4736),4);
__builtin_memmove((U+48),(R+4740),4);
__builtin_memmove((U+52),(R+4744),4);
__builtin_memmove((U+56),(R+4748),4);
__builtin_memmove((U+60),(R+4672),4);
__builtin_memmove((U+64),(R+4676),4);
__builtin_memmove((U+68),(R+4680),4);
__builtin_memmove((U+72),(R+4684),4);
w1(U+0,u8((u8(0x1ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x1ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x1ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x1ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4672,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x3ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x3ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x3ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x3ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4676,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x1ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x1ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x1ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x1ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4680,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x3ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x3ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x3ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x3ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4684,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B68b567:{NFSU2_TR(0x68b567);
__builtin_memmove((R+4800),(R+4608),4);
__builtin_memmove((R+4804),(R+4612),4);
__builtin_memmove((R+4808),(R+4616),4);
__builtin_memmove((R+4812),(R+4620),4);
}
B68b56a:{NFSU2_TR(0x68b56a);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffee0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4800,b32(f32(r4(R+4800))*f32(r4(U+20))));
w4(R+4804,b32(f32(r4(R+4804))*f32(r4(U+24))));
w4(R+4808,b32(f32(r4(R+4808))*f32(r4(U+28))));
w4(R+4812,b32(f32(r4(R+4812))*f32(r4(U+32))));
}
B68b571:{NFSU2_TR(0x68b571);
__builtin_memmove((R+4736),(R+4672),4);
__builtin_memmove((R+4740),(R+4676),4);
__builtin_memmove((R+4744),(R+4680),4);
__builtin_memmove((R+4748),(R+4684),4);
}
B68b574:{NFSU2_TR(0x68b574);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4736,b32(f32(r4(R+4736))*f32(r4(U+20))));
w4(R+4740,b32(f32(r4(R+4740))*f32(r4(U+24))));
w4(R+4744,b32(f32(r4(R+4744))*f32(r4(U+28))));
w4(R+4748,b32(f32(r4(R+4748))*f32(r4(U+32))));
}
B68b57b:{NFSU2_TR(0x68b57b);
w4(R+4800,b32(f32(r4(R+4800))+f32(r4(R+4736))));
w4(R+4804,b32(f32(r4(R+4804))+f32(r4(R+4740))));
w4(R+4808,b32(f32(r4(R+4808))+f32(r4(R+4744))));
w4(R+4812,b32(f32(r4(R+4812))+f32(r4(R+4748))));
}
B68b57e:{NFSU2_TR(0x68b57e);
__builtin_memmove((R+4736),(R+4800),4);
__builtin_memmove((R+4740),(R+4804),4);
__builtin_memmove((R+4744),(R+4808),4);
__builtin_memmove((R+4748),(R+4812),4);
}
B68b581:{NFSU2_TR(0x68b581);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4736,b32(f32(r4(R+4736))+f32(r4(U+20))));
w4(R+4740,b32(f32(r4(R+4740))+f32(r4(U+24))));
w4(R+4744,b32(f32(r4(R+4744))+f32(r4(U+28))));
w4(R+4748,b32(f32(r4(R+4748))+f32(r4(U+32))));
}
B68b585:{NFSU2_TR(0x68b585);
__builtin_memmove((R+4864),(R+4608),4);
__builtin_memmove((R+4868),(R+4612),4);
__builtin_memmove((R+4872),(R+4616),4);
__builtin_memmove((R+4876),(R+4620),4);
}
B68b588:{NFSU2_TR(0x68b588);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffef0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4864,b32(f32(r4(R+4864))*f32(r4(U+20))));
w4(R+4868,b32(f32(r4(R+4868))*f32(r4(U+24))));
w4(R+4872,b32(f32(r4(R+4872))*f32(r4(U+28))));
w4(R+4876,b32(f32(r4(R+4876))*f32(r4(U+32))));
}
B68b58f:{NFSU2_TR(0x68b58f);
__builtin_memmove((R+4800),(R+4672),4);
__builtin_memmove((R+4804),(R+4676),4);
__builtin_memmove((R+4808),(R+4680),4);
__builtin_memmove((R+4812),(R+4684),4);
}
B68b592:{NFSU2_TR(0x68b592);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4800,b32(f32(r4(R+4800))*f32(r4(U+20))));
w4(R+4804,b32(f32(r4(R+4804))*f32(r4(U+24))));
w4(R+4808,b32(f32(r4(R+4808))*f32(r4(U+28))));
w4(R+4812,b32(f32(r4(R+4812))*f32(r4(U+32))));
}
B68b599:{NFSU2_TR(0x68b599);
w4(R+4864,b32(f32(r4(R+4864))+f32(r4(R+4800))));
w4(R+4868,b32(f32(r4(R+4868))+f32(r4(R+4804))));
w4(R+4872,b32(f32(r4(R+4872))+f32(r4(R+4808))));
w4(R+4876,b32(f32(r4(R+4876))+f32(r4(R+4812))));
}
B68b59c:{NFSU2_TR(0x68b59c);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4864,b32(f32(r4(R+4864))+f32(r4(U+20))));
w4(R+4868,b32(f32(r4(R+4868))+f32(r4(U+24))));
w4(R+4872,b32(f32(r4(R+4872))+f32(r4(U+28))));
w4(R+4876,b32(f32(r4(R+4876))+f32(r4(U+32))));
}
B68b5a0:{NFSU2_TR(0x68b5a0);
__builtin_memmove((R+4928),(R+4608),4);
__builtin_memmove((R+4932),(R+4612),4);
__builtin_memmove((R+4936),(R+4616),4);
__builtin_memmove((R+4940),(R+4620),4);
}
B68b5a3:{NFSU2_TR(0x68b5a3);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff00ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4928,b32(f32(r4(R+4928))*f32(r4(U+20))));
w4(R+4932,b32(f32(r4(R+4932))*f32(r4(U+24))));
w4(R+4936,b32(f32(r4(R+4936))*f32(r4(U+28))));
w4(R+4940,b32(f32(r4(R+4940))*f32(r4(U+32))));
}
B68b5aa:{NFSU2_TR(0x68b5aa);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4608,b32(f32(r4(R+4608))*f32(r4(U+20))));
w4(R+4612,b32(f32(r4(R+4612))*f32(r4(U+24))));
w4(R+4616,b32(f32(r4(R+4616))*f32(r4(U+28))));
w4(R+4620,b32(f32(r4(R+4620))*f32(r4(U+32))));
}
B68b5b1:{NFSU2_TR(0x68b5b1);
__builtin_memmove((R+4800),(R+4672),4);
__builtin_memmove((R+4804),(R+4676),4);
__builtin_memmove((R+4808),(R+4680),4);
__builtin_memmove((R+4812),(R+4684),4);
}
B68b5b4:{NFSU2_TR(0x68b5b4);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4800,b32(f32(r4(R+4800))*f32(r4(U+20))));
w4(R+4804,b32(f32(r4(R+4804))*f32(r4(U+24))));
w4(R+4808,b32(f32(r4(R+4808))*f32(r4(U+28))));
w4(R+4812,b32(f32(r4(R+4812))*f32(r4(U+32))));
}
B68b5bb:{NFSU2_TR(0x68b5bb);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4672,b32(f32(r4(R+4672))*f32(r4(U+20))));
w4(R+4676,b32(f32(r4(R+4676))*f32(r4(U+24))));
w4(R+4680,b32(f32(r4(R+4680))*f32(r4(U+28))));
w4(R+4684,b32(f32(r4(R+4684))*f32(r4(U+32))));
}
B68b5c2:{NFSU2_TR(0x68b5c2);
w4(R+4928,b32(f32(r4(R+4928))+f32(r4(R+4800))));
w4(R+4932,b32(f32(r4(R+4932))+f32(r4(R+4804))));
w4(R+4936,b32(f32(r4(R+4936))+f32(r4(R+4808))));
w4(R+4940,b32(f32(r4(R+4940))+f32(r4(R+4812))));
}
B68b5c5:{NFSU2_TR(0x68b5c5);
w4(R+4608,b32(f32(r4(R+4608))+f32(r4(R+4672))));
w4(R+4612,b32(f32(r4(R+4612))+f32(r4(R+4676))));
w4(R+4616,b32(f32(r4(R+4616))+f32(r4(R+4680))));
w4(R+4620,b32(f32(r4(R+4620))+f32(r4(R+4684))));
}
B68b5c8:{NFSU2_TR(0x68b5c8);
__builtin_memmove((R+4800),(R+4928),4);
__builtin_memmove((R+4804),(R+4932),4);
__builtin_memmove((R+4808),(R+4936),4);
__builtin_memmove((R+4812),(R+4940),4);
}
B68b5cb:{NFSU2_TR(0x68b5cb);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4800,b32(f32(r4(R+4800))+f32(r4(U+20))));
w4(R+4804,b32(f32(r4(R+4804))+f32(r4(U+24))));
w4(R+4808,b32(f32(r4(R+4808))+f32(r4(U+28))));
w4(R+4812,b32(f32(r4(R+4812))+f32(r4(U+32))));
}
B68b5cf:{NFSU2_TR(0x68b5cf);
__builtin_memmove((R+4928),(R+4608),4);
__builtin_memmove((R+4932),(R+4612),4);
__builtin_memmove((R+4936),(R+4616),4);
__builtin_memmove((R+4940),(R+4620),4);
}
B68b5d2:{NFSU2_TR(0x68b5d2);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4928,b32(f32(r4(R+4928))+f32(r4(U+20))));
w4(R+4932,b32(f32(r4(R+4932))+f32(r4(U+24))));
w4(R+4936,b32(f32(r4(R+4936))+f32(r4(U+28))));
w4(R+4940,b32(f32(r4(R+4940))+f32(r4(U+32))));
}
B68b5d6:{NFSU2_TR(0x68b5d6);
__builtin_memmove((R+4608),(R+4736),4);
__builtin_memmove((R+4612),(R+4740),4);
__builtin_memmove((R+4616),(R+4744),4);
__builtin_memmove((R+4620),(R+4748),4);
}
B68b5d9:{NFSU2_TR(0x68b5d9);
__builtin_memmove((R+4616),(R+4612),4);
__builtin_memmove((R+4620),(R+4868),4);
__builtin_memmove((R+4612),(R+4864),4);
}
B68b5dc:{NFSU2_TR(0x68b5dc);
u8 U[8];
__builtin_memmove((U+0),(R+4608),8);
s8_(u32(r4(R+24)),r8(U+0));
}
B68b5df:{NFSU2_TR(0x68b5df);
__builtin_memmove((R+4672),(R+4800),4);
__builtin_memmove((R+4676),(R+4804),4);
__builtin_memmove((R+4680),(R+4808),4);
__builtin_memmove((R+4684),(R+4812),4);
}
B68b5e2:{NFSU2_TR(0x68b5e2);
__builtin_memmove((R+4680),(R+4676),4);
__builtin_memmove((R+4684),(R+4932),4);
__builtin_memmove((R+4676),(R+4928),4);
}
B68b5e5:{NFSU2_TR(0x68b5e5);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4672),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B68b5e9:{NFSU2_TR(0x68b5e9);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4616),8);
s8_(u32(r4(U+4)),r8(U+8));
}
B68b5ed:{NFSU2_TR(0x68b5ed);
u8 U[20];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4680),8);
s8_(u32(r4(U+8)),r8(U+12));
}
B68b5f2:{NFSU2_TR(0x68b5f2);
__builtin_memmove((R+4736),(R+4744),4);
__builtin_memmove((R+4740),(R+4872),4);
__builtin_memmove((R+4744),(R+4748),4);
__builtin_memmove((R+4748),(R+4876),4);
}
B68b5f5:{NFSU2_TR(0x68b5f5);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4736),8);
s8_(u32(r4(U+4)),r8(U+8));
}
B68b5f9:{NFSU2_TR(0x68b5f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B68b5fc:{NFSU2_TR(0x68b5fc);
__builtin_memmove((R+4800),(R+4808),4);
__builtin_memmove((R+4804),(R+4936),4);
__builtin_memmove((R+4808),(R+4812),4);
__builtin_memmove((R+4812),(R+4940),4);
}
B68b5ff:{NFSU2_TR(0x68b5ff);
u8 U[20];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4800),8);
s8_(u32(r4(U+8)),r8(U+12));
}
B68b604:{NFSU2_TR(0x68b604);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4744),8);
s8_(u32(r4(U+4)),r8(U+8));
}
B68b608:{NFSU2_TR(0x68b608);
u8 U[20];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4808),8);
s8_(u32(r4(U+8)),r8(U+12));
}
B68b60d:{NFSU2_TR(0x68b60d);
__builtin_memmove((R+8),(R+4),4);
}
B68b60f:{NFSU2_TR(0x68b60f);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B68b612:{NFSU2_TR(0x68b612);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B68b614:{NFSU2_TR(0x68b614);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68b617:{NFSU2_TR(0x68b617);
__builtin_memmove((R+0),(R+28),4);
}
B68b619:{NFSU2_TR(0x68b619);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B68b61c:{NFSU2_TR(0x68b61c);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+0))));
}
B68b61e:{NFSU2_TR(0x68b61e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B68b621:{NFSU2_TR(0x68b621);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x68b541u);}goto L68b541;}}
}
B68b627:L68b627:{c.instructions+=3;NFSU2_TR(0x68b627);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B68b62a:{NFSU2_TR(0x68b62a);
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
B68b62c:{NFSU2_TR(0x68b62c);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L68b64a;}}
}
B68b62e:L68b62e:{c.instructions+=1;NFSU2_TR(0x68b62e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68b631:L68b631:{c.instructions+=4;NFSU2_TR(0x68b631);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B68b634:{NFSU2_TR(0x68b634);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B68b637:{NFSU2_TR(0x68b637);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68b638:{NFSU2_TR(0x68b638);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x68b63dull));
TAIL_STATIC(0x63c10eu,63c);
}
B68b63d:L68b63d:{c.instructions+=5;NFSU2_TR(0x68b63d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B68b640:{NFSU2_TR(0x68b640);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B68b643:{NFSU2_TR(0x68b643);
w1(R+512,carry<u32>(r4(R+24),r4(R+28)));
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+28))));
}
B68b645:{NFSU2_TR(0x68b645);
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
B68b648:{NFSU2_TR(0x68b648);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x68b631u);}goto L68b631;}}
}
B68b64a:L68b64a:{c.instructions+=8;NFSU2_TR(0x68b64a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B68b64d:{NFSU2_TR(0x68b64d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B68b64e:{NFSU2_TR(0x68b64e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B68b64f:{NFSU2_TR(0x68b64f);
__builtin_memmove((R+16),(R+20),4);
}
B68b651:{NFSU2_TR(0x68b651);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B68b652:{NFSU2_TR(0x68b652);
__builtin_memmove((R+16),(R+12),4);
}
B68b654:{NFSU2_TR(0x68b654);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B68b655:{NFSU2_TR(0x68b655);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B68b658:L68b658:{c.instructions+=25;NFSU2_TR(0x68b658);
__builtin_memmove((R+28),(R+28),4);
}
B68b65a:{NFSU2_TR(0x68b65a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68b65b:{NFSU2_TR(0x68b65b);
__builtin_memmove((R+12),(R+16),4);
}
B68b65d:{NFSU2_TR(0x68b65d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68b65e:{NFSU2_TR(0x68b65e);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B68b661:{NFSU2_TR(0x68b661);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B68b664:{NFSU2_TR(0x68b664);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68b665:{NFSU2_TR(0x68b665);
__builtin_memmove((R+20),(R+16),4);
}
B68b667:{NFSU2_TR(0x68b667);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x128ull))));
}
B68b66d:{NFSU2_TR(0x68b66d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B68b670:{NFSU2_TR(0x68b670);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68b671:{NFSU2_TR(0x68b671);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68b672:{NFSU2_TR(0x68b672);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B68b675:{NFSU2_TR(0x68b675);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68b677:{NFSU2_TR(0x68b677);
__builtin_memmove((R+8),(R+0),4);
}
B68b679:{NFSU2_TR(0x68b679);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xfffffffcull))));
}
B68b67c:{NFSU2_TR(0x68b67c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B68b67d:{NFSU2_TR(0x68b67d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
}
B68b67f:{NFSU2_TR(0x68b67f);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(R+24))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B68b681:{NFSU2_TR(0x68b681);
w4(R+24,u32(u32(r4(R+24))&u32(r4(R+8))));
}
B68b683:{NFSU2_TR(0x68b683);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+24))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B68b685:{NFSU2_TR(0x68b685);
u8 U[9];
w4(U+5,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+24,shr<u32>(r4(R+24),u64(r4(U+5))));
w1(U+0,u8((r4(U+5))!=(u32(0x0ull))));
w1(U+1,u8((r4(R+24))==(u32(0x0ull))));
w1(U+2,u8(!(r1(U+0))));
w1(U+3,u8(u32(r1(U+2))&u32(r1(R+518))));
w1(U+4,u8(u32(r1(U+0))&u32(r1(U+1))));
w1(R+518,u8(u32(r1(U+3))|u32(r1(U+4))));
}
B68b688:{NFSU2_TR(0x68b688);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68b68b:{NFSU2_TR(0x68b68b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68b68e:{NFSU2_TR(0x68b68e);
if(r1(R+518)){{goto L68b784;}}
}
B68b694:L68b694:{c.instructions+=3;NFSU2_TR(0x68b694);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B68b697:{NFSU2_TR(0x68b697);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffee0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B68b69d:{NFSU2_TR(0x68b69d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x68b6a2ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x68b19fu);}goto L68b19f;}
}
B68b6a2:L68b6a2:{c.instructions+=4;NFSU2_TR(0x68b6a2);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B68b6a4:{NFSU2_TR(0x68b6a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B68b6a7:{NFSU2_TR(0x68b6a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B68b6aa:{NFSU2_TR(0x68b6aa);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L68b784;}}
}
B68b6b0:L68b6b0:{c.instructions+=4;NFSU2_TR(0x68b6b0);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
__builtin_memmove((R+4736),(U+20),4);
__builtin_memmove((R+4740),(U+24),4);
__builtin_memmove((R+4744),(U+28),4);
__builtin_memmove((R+4748),(U+32),4);
}
B68b6b4:{NFSU2_TR(0x68b6b4);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
__builtin_memmove((R+4864),(U+20),4);
__builtin_memmove((R+4868),(U+24),4);
__builtin_memmove((R+4872),(U+28),4);
__builtin_memmove((R+4876),(U+32),4);
}
B68b6b8:{NFSU2_TR(0x68b6b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68b6bb:{NFSU2_TR(0x68b6bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B68b6be:L68b6be:{c.instructions+=54;NFSU2_TR(0x68b6be);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),8);
__builtin_memmove((R+4736),(U+0),8);
}
B68b6c1:{NFSU2_TR(0x68b6c1);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4864),(U+8),8);
}
B68b6c5:{NFSU2_TR(0x68b6c5);
__builtin_memmove((R+4672),(R+4736),4);
__builtin_memmove((R+4676),(R+4740),4);
__builtin_memmove((R+4680),(R+4744),4);
__builtin_memmove((R+4684),(R+4748),4);
}
B68b6c8:{NFSU2_TR(0x68b6c8);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4680),(U+8),8);
}
B68b6cc:{NFSU2_TR(0x68b6cc);
__builtin_memmove((R+4608),(R+4672),4);
__builtin_memmove((R+4612),(R+4676),4);
__builtin_memmove((R+4616),(R+4680),4);
__builtin_memmove((R+4620),(R+4684),4);
}
B68b6cf:{NFSU2_TR(0x68b6cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B68b6d2:{NFSU2_TR(0x68b6d2);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4872),(U+8),8);
}
B68b6d6:{NFSU2_TR(0x68b6d6);
u8 U[76];
__builtin_memmove((U+44),(R+4864),4);
__builtin_memmove((U+48),(R+4868),4);
__builtin_memmove((U+52),(R+4872),4);
__builtin_memmove((U+56),(R+4876),4);
__builtin_memmove((U+60),(R+4608),4);
__builtin_memmove((U+64),(R+4612),4);
__builtin_memmove((U+68),(R+4616),4);
__builtin_memmove((U+72),(R+4620),4);
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4608,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x2ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x2ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x2ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x2ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4612,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4616,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x2ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x2ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x2ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x2ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4620,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B68b6da:{NFSU2_TR(0x68b6da);
u8 U[76];
__builtin_memmove((U+44),(R+4864),4);
__builtin_memmove((U+48),(R+4868),4);
__builtin_memmove((U+52),(R+4872),4);
__builtin_memmove((U+56),(R+4876),4);
__builtin_memmove((U+60),(R+4672),4);
__builtin_memmove((U+64),(R+4676),4);
__builtin_memmove((U+68),(R+4680),4);
__builtin_memmove((U+72),(R+4684),4);
w1(U+0,u8((u8(0x1ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x1ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x1ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x1ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4672,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x3ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x3ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x3ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x3ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4676,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x1ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x1ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x1ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x1ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4680,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x3ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x3ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x3ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x3ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4684,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B68b6de:{NFSU2_TR(0x68b6de);
__builtin_memmove((R+4736),(R+4672),4);
__builtin_memmove((R+4740),(R+4676),4);
__builtin_memmove((R+4744),(R+4680),4);
__builtin_memmove((R+4748),(R+4684),4);
}
B68b6e1:{NFSU2_TR(0x68b6e1);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4736,b32(f32(r4(R+4736))*f32(r4(U+20))));
w4(R+4740,b32(f32(r4(R+4740))*f32(r4(U+24))));
w4(R+4744,b32(f32(r4(R+4744))*f32(r4(U+28))));
w4(R+4748,b32(f32(r4(R+4748))*f32(r4(U+32))));
}
B68b6e8:{NFSU2_TR(0x68b6e8);
__builtin_memmove((R+4800),(R+4608),4);
__builtin_memmove((R+4804),(R+4612),4);
__builtin_memmove((R+4808),(R+4616),4);
__builtin_memmove((R+4812),(R+4620),4);
}
B68b6eb:{NFSU2_TR(0x68b6eb);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4800,b32(f32(r4(R+4800))*f32(r4(U+20))));
w4(R+4804,b32(f32(r4(R+4804))*f32(r4(U+24))));
w4(R+4808,b32(f32(r4(R+4808))*f32(r4(U+28))));
w4(R+4812,b32(f32(r4(R+4812))*f32(r4(U+32))));
}
B68b6f2:{NFSU2_TR(0x68b6f2);
w4(R+4800,b32(f32(r4(R+4800))+f32(r4(R+4736))));
w4(R+4804,b32(f32(r4(R+4804))+f32(r4(R+4740))));
w4(R+4808,b32(f32(r4(R+4808))+f32(r4(R+4744))));
w4(R+4812,b32(f32(r4(R+4812))+f32(r4(R+4748))));
}
B68b6f5:{NFSU2_TR(0x68b6f5);
__builtin_memmove((R+4736),(R+4800),4);
__builtin_memmove((R+4740),(R+4804),4);
__builtin_memmove((R+4744),(R+4808),4);
__builtin_memmove((R+4748),(R+4812),4);
}
B68b6f8:{NFSU2_TR(0x68b6f8);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4736,b32(f32(r4(R+4736))+f32(r4(U+20))));
w4(R+4740,b32(f32(r4(R+4740))+f32(r4(U+24))));
w4(R+4744,b32(f32(r4(R+4744))+f32(r4(U+28))));
w4(R+4748,b32(f32(r4(R+4748))+f32(r4(U+32))));
}
B68b6fc:{NFSU2_TR(0x68b6fc);
{wv<16>((R+4800),uo::rcpps<16>(rv<16>((R+4800)),rv<16>((R+4736))));}
}
B68b6ff:{NFSU2_TR(0x68b6ff);
__builtin_memmove((R+4928),(R+4800),4);
__builtin_memmove((R+4932),(R+4804),4);
__builtin_memmove((R+4936),(R+4808),4);
__builtin_memmove((R+4940),(R+4812),4);
}
B68b702:{NFSU2_TR(0x68b702);
w4(R+4928,b32(f32(r4(R+4928))*f32(r4(R+4736))));
w4(R+4932,b32(f32(r4(R+4932))*f32(r4(R+4740))));
w4(R+4936,b32(f32(r4(R+4936))*f32(r4(R+4744))));
w4(R+4940,b32(f32(r4(R+4940))*f32(r4(R+4748))));
}
B68b705:{NFSU2_TR(0x68b705);
w4(R+4928,b32(f32(r4(R+4928))*f32(r4(R+4800))));
w4(R+4932,b32(f32(r4(R+4932))*f32(r4(R+4804))));
w4(R+4936,b32(f32(r4(R+4936))*f32(r4(R+4808))));
w4(R+4940,b32(f32(r4(R+4940))*f32(r4(R+4812))));
}
B68b708:{NFSU2_TR(0x68b708);
__builtin_memmove((R+4736),(R+4800),4);
__builtin_memmove((R+4740),(R+4804),4);
__builtin_memmove((R+4744),(R+4808),4);
__builtin_memmove((R+4748),(R+4812),4);
}
B68b70b:{NFSU2_TR(0x68b70b);
w4(R+4736,b32(f32(r4(R+4736))+f32(r4(R+4800))));
w4(R+4740,b32(f32(r4(R+4740))+f32(r4(R+4804))));
w4(R+4744,b32(f32(r4(R+4744))+f32(r4(R+4808))));
w4(R+4748,b32(f32(r4(R+4748))+f32(r4(R+4812))));
}
B68b70e:{NFSU2_TR(0x68b70e);
__builtin_memmove((R+4800),(R+4736),4);
__builtin_memmove((R+4804),(R+4740),4);
__builtin_memmove((R+4808),(R+4744),4);
__builtin_memmove((R+4812),(R+4748),4);
}
B68b711:{NFSU2_TR(0x68b711);
w4(R+4800,b32(f32(r4(R+4800))-f32(r4(R+4928))));
w4(R+4804,b32(f32(r4(R+4804))-f32(r4(R+4932))));
w4(R+4808,b32(f32(r4(R+4808))-f32(r4(R+4936))));
w4(R+4812,b32(f32(r4(R+4812))-f32(r4(R+4940))));
}
B68b714:{NFSU2_TR(0x68b714);
__builtin_memmove((R+4736),(R+4672),4);
__builtin_memmove((R+4740),(R+4676),4);
__builtin_memmove((R+4744),(R+4680),4);
__builtin_memmove((R+4748),(R+4684),4);
}
B68b717:{NFSU2_TR(0x68b717);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4736,b32(f32(r4(R+4736))*f32(r4(U+20))));
w4(R+4740,b32(f32(r4(R+4740))*f32(r4(U+24))));
w4(R+4744,b32(f32(r4(R+4744))*f32(r4(U+28))));
w4(R+4748,b32(f32(r4(R+4748))*f32(r4(U+32))));
}
B68b71e:{NFSU2_TR(0x68b71e);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4672,b32(f32(r4(R+4672))*f32(r4(U+20))));
w4(R+4676,b32(f32(r4(R+4676))*f32(r4(U+24))));
w4(R+4680,b32(f32(r4(R+4680))*f32(r4(U+28))));
w4(R+4684,b32(f32(r4(R+4684))*f32(r4(U+32))));
}
B68b725:{NFSU2_TR(0x68b725);
__builtin_memmove((R+4928),(R+4608),4);
__builtin_memmove((R+4932),(R+4612),4);
__builtin_memmove((R+4936),(R+4616),4);
__builtin_memmove((R+4940),(R+4620),4);
}
B68b728:{NFSU2_TR(0x68b728);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffef0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4608,b32(f32(r4(R+4608))*f32(r4(U+20))));
w4(R+4612,b32(f32(r4(R+4612))*f32(r4(U+24))));
w4(R+4616,b32(f32(r4(R+4616))*f32(r4(U+28))));
w4(R+4620,b32(f32(r4(R+4620))*f32(r4(U+32))));
}
B68b72f:{NFSU2_TR(0x68b72f);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffee0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4928,b32(f32(r4(R+4928))*f32(r4(U+20))));
w4(R+4932,b32(f32(r4(R+4932))*f32(r4(U+24))));
w4(R+4936,b32(f32(r4(R+4936))*f32(r4(U+28))));
w4(R+4940,b32(f32(r4(R+4940))*f32(r4(U+32))));
}
B68b736:{NFSU2_TR(0x68b736);
w4(R+4928,b32(f32(r4(R+4928))+f32(r4(R+4736))));
w4(R+4932,b32(f32(r4(R+4932))+f32(r4(R+4740))));
w4(R+4936,b32(f32(r4(R+4936))+f32(r4(R+4744))));
w4(R+4940,b32(f32(r4(R+4940))+f32(r4(R+4748))));
}
B68b739:{NFSU2_TR(0x68b739);
w4(R+4608,b32(f32(r4(R+4608))+f32(r4(R+4672))));
w4(R+4612,b32(f32(r4(R+4612))+f32(r4(R+4676))));
w4(R+4616,b32(f32(r4(R+4616))+f32(r4(R+4680))));
w4(R+4620,b32(f32(r4(R+4620))+f32(r4(R+4684))));
}
B68b73c:{NFSU2_TR(0x68b73c);
__builtin_memmove((R+4672),(R+4608),4);
__builtin_memmove((R+4676),(R+4612),4);
__builtin_memmove((R+4680),(R+4616),4);
__builtin_memmove((R+4684),(R+4620),4);
}
B68b73f:{NFSU2_TR(0x68b73f);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4672,b32(f32(r4(R+4672))+f32(r4(U+20))));
w4(R+4676,b32(f32(r4(R+4676))+f32(r4(U+24))));
w4(R+4680,b32(f32(r4(R+4680))+f32(r4(U+28))));
w4(R+4684,b32(f32(r4(R+4684))+f32(r4(U+32))));
}
B68b743:{NFSU2_TR(0x68b743);
__builtin_memmove((R+4736),(R+4928),4);
__builtin_memmove((R+4740),(R+4932),4);
__builtin_memmove((R+4744),(R+4936),4);
__builtin_memmove((R+4748),(R+4940),4);
}
B68b746:{NFSU2_TR(0x68b746);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4736,b32(f32(r4(R+4736))+f32(r4(U+20))));
w4(R+4740,b32(f32(r4(R+4740))+f32(r4(U+24))));
w4(R+4744,b32(f32(r4(R+4744))+f32(r4(U+28))));
w4(R+4748,b32(f32(r4(R+4748))+f32(r4(U+32))));
}
B68b74a:{NFSU2_TR(0x68b74a);
w4(R+4736,b32(f32(r4(R+4736))*f32(r4(R+4800))));
w4(R+4740,b32(f32(r4(R+4740))*f32(r4(R+4804))));
w4(R+4744,b32(f32(r4(R+4744))*f32(r4(R+4808))));
w4(R+4748,b32(f32(r4(R+4748))*f32(r4(R+4812))));
}
B68b74d:{NFSU2_TR(0x68b74d);
w4(R+4672,b32(f32(r4(R+4672))*f32(r4(R+4800))));
w4(R+4676,b32(f32(r4(R+4676))*f32(r4(R+4804))));
w4(R+4680,b32(f32(r4(R+4680))*f32(r4(R+4808))));
w4(R+4684,b32(f32(r4(R+4684))*f32(r4(R+4812))));
}
B68b750:{NFSU2_TR(0x68b750);
__builtin_memmove((R+4608),(R+4736),4);
__builtin_memmove((R+4612),(R+4740),4);
__builtin_memmove((R+4616),(R+4744),4);
__builtin_memmove((R+4620),(R+4748),4);
}
B68b753:{NFSU2_TR(0x68b753);
__builtin_memmove((R+4616),(R+4612),4);
__builtin_memmove((R+4620),(R+4676),4);
__builtin_memmove((R+4612),(R+4672),4);
}
B68b756:{NFSU2_TR(0x68b756);
u8 U[8];
__builtin_memmove((U+0),(R+4608),8);
s8_(u32(r4(R+28)),r8(U+0));
}
B68b759:{NFSU2_TR(0x68b759);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4616),8);
s8_(u32(r4(U+4)),r8(U+8));
}
B68b75d:{NFSU2_TR(0x68b75d);
__builtin_memmove((R+4736),(R+4744),4);
__builtin_memmove((R+4740),(R+4680),4);
__builtin_memmove((R+4744),(R+4748),4);
__builtin_memmove((R+4748),(R+4684),4);
}
B68b760:{NFSU2_TR(0x68b760);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B68b763:{NFSU2_TR(0x68b763);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4736),8);
s8_(u32(r4(U+4)),r8(U+8));
}
B68b767:{NFSU2_TR(0x68b767);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4744),8);
s8_(u32(r4(U+4)),r8(U+8));
}
B68b76b:{NFSU2_TR(0x68b76b);
__builtin_memmove((R+8),(R+0),4);
}
B68b76d:{NFSU2_TR(0x68b76d);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B68b770:{NFSU2_TR(0x68b770);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+8))));
}
B68b772:{NFSU2_TR(0x68b772);
__builtin_memmove((R+8),(R+4),4);
}
B68b774:{NFSU2_TR(0x68b774);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B68b777:{NFSU2_TR(0x68b777);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+8))));
}
B68b779:{NFSU2_TR(0x68b779);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B68b77c:{NFSU2_TR(0x68b77c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x68b6beu);}goto L68b6be;}}
}
B68b782:L68b782:{c.instructions+=1;NFSU2_TR(0x68b782);
{goto L68b787;}
}
B68b784:L68b784:{c.instructions+=1;NFSU2_TR(0x68b784);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B68b787:L68b787:{c.instructions+=3;NFSU2_TR(0x68b787);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B68b78a:{NFSU2_TR(0x68b78a);
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
B68b78c:{NFSU2_TR(0x68b78c);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L68b7a6;}}
}
B68b78e:L68b78e:{c.instructions+=1;NFSU2_TR(0x68b78e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68b791:L68b791:{c.instructions+=4;NFSU2_TR(0x68b791);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B68b794:{NFSU2_TR(0x68b794);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68b795:{NFSU2_TR(0x68b795);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68b796:{NFSU2_TR(0x68b796);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x68b79bull));
TAIL_STATIC(0x63c13au,63c);
}
B68b79b:L68b79b:{c.instructions+=4;NFSU2_TR(0x68b79b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+24,u32(u32(r4(R+24))+u32(r4(U+4))));
}
B68b79e:{NFSU2_TR(0x68b79e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,carry<u32>(r4(R+28),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+28,u32(u32(r4(R+28))+u32(r4(U+4))));
}
B68b7a1:{NFSU2_TR(0x68b7a1);
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
B68b7a4:{NFSU2_TR(0x68b7a4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x68b791u);}goto L68b791;}}
}
B68b7a6:L68b7a6:{c.instructions+=8;NFSU2_TR(0x68b7a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B68b7a9:{NFSU2_TR(0x68b7a9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B68b7aa:{NFSU2_TR(0x68b7aa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B68b7ab:{NFSU2_TR(0x68b7ab);
__builtin_memmove((R+16),(R+20),4);
}
B68b7ad:{NFSU2_TR(0x68b7ad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B68b7ae:{NFSU2_TR(0x68b7ae);
__builtin_memmove((R+16),(R+12),4);
}
B68b7b0:{NFSU2_TR(0x68b7b0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B68b7b1:{NFSU2_TR(0x68b7b1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B68b7b4:L68b7b4:{c.instructions+=25;NFSU2_TR(0x68b7b4);
__builtin_memmove((R+28),(R+28),4);
}
B68b7b6:{NFSU2_TR(0x68b7b6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68b7b7:{NFSU2_TR(0x68b7b7);
__builtin_memmove((R+12),(R+16),4);
}
B68b7b9:{NFSU2_TR(0x68b7b9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68b7ba:{NFSU2_TR(0x68b7ba);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B68b7bd:{NFSU2_TR(0x68b7bd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B68b7c0:{NFSU2_TR(0x68b7c0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68b7c1:{NFSU2_TR(0x68b7c1);
__builtin_memmove((R+20),(R+16),4);
}
B68b7c3:{NFSU2_TR(0x68b7c3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x128ull))));
}
B68b7c9:{NFSU2_TR(0x68b7c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B68b7cc:{NFSU2_TR(0x68b7cc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68b7cd:{NFSU2_TR(0x68b7cd);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68b7ce:{NFSU2_TR(0x68b7ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B68b7d1:{NFSU2_TR(0x68b7d1);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68b7d3:{NFSU2_TR(0x68b7d3);
__builtin_memmove((R+8),(R+0),4);
}
B68b7d5:{NFSU2_TR(0x68b7d5);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xfffffffcull))));
}
B68b7d8:{NFSU2_TR(0x68b7d8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B68b7d9:{NFSU2_TR(0x68b7d9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
}
B68b7db:{NFSU2_TR(0x68b7db);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(R+24))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B68b7dd:{NFSU2_TR(0x68b7dd);
w4(R+24,u32(u32(r4(R+24))&u32(r4(R+8))));
}
B68b7df:{NFSU2_TR(0x68b7df);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+24))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B68b7e1:{NFSU2_TR(0x68b7e1);
u8 U[9];
w4(U+5,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+24,shr<u32>(r4(R+24),u64(r4(U+5))));
w1(U+0,u8((r4(U+5))!=(u32(0x0ull))));
w1(U+1,u8((r4(R+24))==(u32(0x0ull))));
w1(U+2,u8(!(r1(U+0))));
w1(U+3,u8(u32(r1(U+2))&u32(r1(R+518))));
w1(U+4,u8(u32(r1(U+0))&u32(r1(U+1))));
w1(R+518,u8(u32(r1(U+3))|u32(r1(U+4))));
}
B68b7e4:{NFSU2_TR(0x68b7e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68b7e7:{NFSU2_TR(0x68b7e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68b7ea:{NFSU2_TR(0x68b7ea);
if(r1(R+518)){{goto L68b895;}}
}
B68b7f0:L68b7f0:{c.instructions+=3;NFSU2_TR(0x68b7f0);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B68b7f3:{NFSU2_TR(0x68b7f3);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffee0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B68b7f9:{NFSU2_TR(0x68b7f9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x68b7feull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x68b19fu);}goto L68b19f;}
}
B68b7fe:L68b7fe:{c.instructions+=4;NFSU2_TR(0x68b7fe);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B68b800:{NFSU2_TR(0x68b800);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B68b803:{NFSU2_TR(0x68b803);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B68b806:{NFSU2_TR(0x68b806);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L68b895;}}
}
B68b80c:L68b80c:{c.instructions+=4;NFSU2_TR(0x68b80c);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
__builtin_memmove((R+4736),(U+20),4);
__builtin_memmove((R+4740),(U+24),4);
__builtin_memmove((R+4744),(U+28),4);
__builtin_memmove((R+4748),(U+32),4);
}
B68b810:{NFSU2_TR(0x68b810);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
__builtin_memmove((R+4800),(U+20),4);
__builtin_memmove((R+4804),(U+24),4);
__builtin_memmove((R+4808),(U+28),4);
__builtin_memmove((R+4812),(U+32),4);
}
B68b814:{NFSU2_TR(0x68b814);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68b817:{NFSU2_TR(0x68b817);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B68b81a:L68b81a:{c.instructions+=34;NFSU2_TR(0x68b81a);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),8);
__builtin_memmove((R+4736),(U+0),8);
}
B68b81d:{NFSU2_TR(0x68b81d);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4800),(U+8),8);
}
B68b821:{NFSU2_TR(0x68b821);
__builtin_memmove((R+4608),(R+4736),4);
__builtin_memmove((R+4612),(R+4740),4);
__builtin_memmove((R+4616),(R+4744),4);
__builtin_memmove((R+4620),(R+4748),4);
}
B68b824:{NFSU2_TR(0x68b824);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4616),(U+8),8);
}
B68b828:{NFSU2_TR(0x68b828);
__builtin_memmove((R+4672),(R+4608),4);
__builtin_memmove((R+4676),(R+4612),4);
__builtin_memmove((R+4680),(R+4616),4);
__builtin_memmove((R+4684),(R+4620),4);
}
B68b82b:{NFSU2_TR(0x68b82b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B68b82e:{NFSU2_TR(0x68b82e);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4808),(U+8),8);
}
B68b832:{NFSU2_TR(0x68b832);
u8 U[76];
__builtin_memmove((U+44),(R+4800),4);
__builtin_memmove((U+48),(R+4804),4);
__builtin_memmove((U+52),(R+4808),4);
__builtin_memmove((U+56),(R+4812),4);
__builtin_memmove((U+60),(R+4608),4);
__builtin_memmove((U+64),(R+4612),4);
__builtin_memmove((U+68),(R+4616),4);
__builtin_memmove((U+72),(R+4620),4);
w1(U+0,u8((u8(0x1ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x1ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x1ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x1ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4608,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x3ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x3ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x3ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x3ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4612,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x1ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x1ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x1ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x1ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4616,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x3ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x3ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x3ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x3ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4620,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B68b836:{NFSU2_TR(0x68b836);
__builtin_memmove((R+4736),(R+4608),4);
__builtin_memmove((R+4740),(R+4612),4);
__builtin_memmove((R+4744),(R+4616),4);
__builtin_memmove((R+4748),(R+4620),4);
}
B68b839:{NFSU2_TR(0x68b839);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4736,b32(f32(r4(R+4736))*f32(r4(U+20))));
w4(R+4740,b32(f32(r4(R+4740))*f32(r4(U+24))));
w4(R+4744,b32(f32(r4(R+4744))*f32(r4(U+28))));
w4(R+4748,b32(f32(r4(R+4748))*f32(r4(U+32))));
}
B68b840:{NFSU2_TR(0x68b840);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4608,b32(f32(r4(R+4608))*f32(r4(U+20))));
w4(R+4612,b32(f32(r4(R+4612))*f32(r4(U+24))));
w4(R+4616,b32(f32(r4(R+4616))*f32(r4(U+28))));
w4(R+4620,b32(f32(r4(R+4620))*f32(r4(U+32))));
}
B68b847:{NFSU2_TR(0x68b847);
__builtin_memmove((R+4864),(R+4736),4);
__builtin_memmove((R+4868),(R+4740),4);
__builtin_memmove((R+4872),(R+4744),4);
__builtin_memmove((R+4876),(R+4748),4);
}
B68b84a:{NFSU2_TR(0x68b84a);
u8 U[76];
__builtin_memmove((U+44),(R+4800),4);
__builtin_memmove((U+48),(R+4804),4);
__builtin_memmove((U+52),(R+4808),4);
__builtin_memmove((U+56),(R+4812),4);
__builtin_memmove((U+60),(R+4672),4);
__builtin_memmove((U+64),(R+4676),4);
__builtin_memmove((U+68),(R+4680),4);
__builtin_memmove((U+72),(R+4684),4);
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4672,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x2ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x2ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x2ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x2ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4676,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4680,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x2ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x2ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x2ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x2ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4684,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B68b84e:{NFSU2_TR(0x68b84e);
__builtin_memmove((R+4736),(R+4672),4);
__builtin_memmove((R+4740),(R+4676),4);
__builtin_memmove((R+4744),(R+4680),4);
__builtin_memmove((R+4748),(R+4684),4);
}
B68b851:{NFSU2_TR(0x68b851);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffee0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4736,b32(f32(r4(R+4736))*f32(r4(U+20))));
w4(R+4740,b32(f32(r4(R+4740))*f32(r4(U+24))));
w4(R+4744,b32(f32(r4(R+4744))*f32(r4(U+28))));
w4(R+4748,b32(f32(r4(R+4748))*f32(r4(U+32))));
}
B68b858:{NFSU2_TR(0x68b858);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffef0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4672,b32(f32(r4(R+4672))*f32(r4(U+20))));
w4(R+4676,b32(f32(r4(R+4676))*f32(r4(U+24))));
w4(R+4680,b32(f32(r4(R+4680))*f32(r4(U+28))));
w4(R+4684,b32(f32(r4(R+4684))*f32(r4(U+32))));
}
B68b85f:{NFSU2_TR(0x68b85f);
w4(R+4672,b32(f32(r4(R+4672))+f32(r4(R+4608))));
w4(R+4676,b32(f32(r4(R+4676))+f32(r4(R+4612))));
w4(R+4680,b32(f32(r4(R+4680))+f32(r4(R+4616))));
w4(R+4684,b32(f32(r4(R+4684))+f32(r4(R+4620))));
}
B68b862:{NFSU2_TR(0x68b862);
w4(R+4736,b32(f32(r4(R+4736))+f32(r4(R+4864))));
w4(R+4740,b32(f32(r4(R+4740))+f32(r4(R+4868))));
w4(R+4744,b32(f32(r4(R+4744))+f32(r4(R+4872))));
w4(R+4748,b32(f32(r4(R+4748))+f32(r4(R+4876))));
}
B68b865:{NFSU2_TR(0x68b865);
__builtin_memmove((R+4608),(R+4736),4);
__builtin_memmove((R+4612),(R+4740),4);
__builtin_memmove((R+4616),(R+4744),4);
__builtin_memmove((R+4620),(R+4748),4);
}
B68b868:{NFSU2_TR(0x68b868);
__builtin_memmove((R+4616),(R+4612),4);
__builtin_memmove((R+4620),(R+4676),4);
__builtin_memmove((R+4612),(R+4672),4);
}
B68b86b:{NFSU2_TR(0x68b86b);
u8 U[8];
__builtin_memmove((U+0),(R+4608),8);
s8_(u32(r4(R+28)),r8(U+0));
}
B68b86e:{NFSU2_TR(0x68b86e);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4616),8);
s8_(u32(r4(U+4)),r8(U+8));
}
B68b872:{NFSU2_TR(0x68b872);
__builtin_memmove((R+4736),(R+4744),4);
__builtin_memmove((R+4740),(R+4680),4);
__builtin_memmove((R+4744),(R+4748),4);
__builtin_memmove((R+4748),(R+4684),4);
}
B68b875:{NFSU2_TR(0x68b875);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B68b878:{NFSU2_TR(0x68b878);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4736),8);
s8_(u32(r4(U+4)),r8(U+8));
}
B68b87c:{NFSU2_TR(0x68b87c);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4744),8);
s8_(u32(r4(U+4)),r8(U+8));
}
B68b880:{NFSU2_TR(0x68b880);
__builtin_memmove((R+8),(R+0),4);
}
B68b882:{NFSU2_TR(0x68b882);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B68b885:{NFSU2_TR(0x68b885);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+8))));
}
B68b887:{NFSU2_TR(0x68b887);
__builtin_memmove((R+8),(R+4),4);
}
B68b889:{NFSU2_TR(0x68b889);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B68b88c:{NFSU2_TR(0x68b88c);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+8))));
}
B68b88e:{NFSU2_TR(0x68b88e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B68b891:{NFSU2_TR(0x68b891);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x68b81au);}goto L68b81a;}}
}
B68b893:L68b893:{c.instructions+=1;NFSU2_TR(0x68b893);
{goto L68b898;}
}
B68b895:L68b895:{c.instructions+=1;NFSU2_TR(0x68b895);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B68b898:L68b898:{c.instructions+=3;NFSU2_TR(0x68b898);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B68b89b:{NFSU2_TR(0x68b89b);
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
B68b89d:{NFSU2_TR(0x68b89d);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L68b8b7;}}
}
B68b89f:L68b89f:{c.instructions+=1;NFSU2_TR(0x68b89f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68b8a2:L68b8a2:{c.instructions+=4;NFSU2_TR(0x68b8a2);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B68b8a5:{NFSU2_TR(0x68b8a5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68b8a6:{NFSU2_TR(0x68b8a6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68b8a7:{NFSU2_TR(0x68b8a7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x68b8acull));
TAIL_STATIC(0x63c166u,63c);
}
B68b8ac:L68b8ac:{c.instructions+=4;NFSU2_TR(0x68b8ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+24,u32(u32(r4(R+24))+u32(r4(U+4))));
}
B68b8af:{NFSU2_TR(0x68b8af);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,carry<u32>(r4(R+28),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+28,u32(u32(r4(R+28))+u32(r4(U+4))));
}
B68b8b2:{NFSU2_TR(0x68b8b2);
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
B68b8b5:{NFSU2_TR(0x68b8b5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x68b8a2u);}goto L68b8a2;}}
}
B68b8b7:L68b8b7:{c.instructions+=8;NFSU2_TR(0x68b8b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B68b8ba:{NFSU2_TR(0x68b8ba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B68b8bb:{NFSU2_TR(0x68b8bb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B68b8bc:{NFSU2_TR(0x68b8bc);
__builtin_memmove((R+16),(R+20),4);
}
B68b8be:{NFSU2_TR(0x68b8be);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B68b8bf:{NFSU2_TR(0x68b8bf);
__builtin_memmove((R+16),(R+12),4);
}
B68b8c1:{NFSU2_TR(0x68b8c1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B68b8c2:{NFSU2_TR(0x68b8c2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B68b8c5:L68b8c5:{c.instructions+=25;NFSU2_TR(0x68b8c5);
__builtin_memmove((R+28),(R+28),4);
}
B68b8c7:{NFSU2_TR(0x68b8c7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68b8c8:{NFSU2_TR(0x68b8c8);
__builtin_memmove((R+12),(R+16),4);
}
B68b8ca:{NFSU2_TR(0x68b8ca);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68b8cb:{NFSU2_TR(0x68b8cb);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B68b8ce:{NFSU2_TR(0x68b8ce);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B68b8d1:{NFSU2_TR(0x68b8d1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68b8d2:{NFSU2_TR(0x68b8d2);
__builtin_memmove((R+20),(R+16),4);
}
B68b8d4:{NFSU2_TR(0x68b8d4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x138ull))));
}
B68b8da:{NFSU2_TR(0x68b8da);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B68b8dd:{NFSU2_TR(0x68b8dd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68b8de:{NFSU2_TR(0x68b8de);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68b8df:{NFSU2_TR(0x68b8df);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B68b8e2:{NFSU2_TR(0x68b8e2);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68b8e4:{NFSU2_TR(0x68b8e4);
__builtin_memmove((R+8),(R+0),4);
}
B68b8e6:{NFSU2_TR(0x68b8e6);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xfffffffcull))));
}
B68b8e9:{NFSU2_TR(0x68b8e9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B68b8ea:{NFSU2_TR(0x68b8ea);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
}
B68b8ec:{NFSU2_TR(0x68b8ec);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(R+24))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B68b8ee:{NFSU2_TR(0x68b8ee);
w4(R+24,u32(u32(r4(R+24))&u32(r4(R+8))));
}
B68b8f0:{NFSU2_TR(0x68b8f0);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+24))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B68b8f2:{NFSU2_TR(0x68b8f2);
u8 U[9];
w4(U+5,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+24,shr<u32>(r4(R+24),u64(r4(U+5))));
w1(U+0,u8((r4(U+5))!=(u32(0x0ull))));
w1(U+1,u8((r4(R+24))==(u32(0x0ull))));
w1(U+2,u8(!(r1(U+0))));
w1(U+3,u8(u32(r1(U+2))&u32(r1(R+518))));
w1(U+4,u8(u32(r1(U+0))&u32(r1(U+1))));
w1(R+518,u8(u32(r1(U+3))|u32(r1(U+4))));
}
B68b8f5:{NFSU2_TR(0x68b8f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68b8f8:{NFSU2_TR(0x68b8f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68b8fb:{NFSU2_TR(0x68b8fb);
if(r1(R+518)){{goto L68ba95;}}
}
B68b901:L68b901:{c.instructions+=3;NFSU2_TR(0x68b901);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B68b904:{NFSU2_TR(0x68b904);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffed0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B68b90a:{NFSU2_TR(0x68b90a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x68b90full));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x68b19fu);}goto L68b19f;}
}
B68b90f:L68b90f:{c.instructions+=4;NFSU2_TR(0x68b90f);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B68b911:{NFSU2_TR(0x68b911);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B68b914:{NFSU2_TR(0x68b914);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B68b917:{NFSU2_TR(0x68b917);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L68ba95;}}
}
B68b91d:L68b91d:{c.instructions+=4;NFSU2_TR(0x68b91d);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
__builtin_memmove((R+4800),(U+20),4);
__builtin_memmove((R+4804),(U+24),4);
__builtin_memmove((R+4808),(U+28),4);
__builtin_memmove((R+4812),(U+32),4);
}
B68b921:{NFSU2_TR(0x68b921);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
__builtin_memmove((R+4864),(U+20),4);
__builtin_memmove((R+4868),(U+24),4);
__builtin_memmove((R+4872),(U+28),4);
__builtin_memmove((R+4876),(U+32),4);
}
B68b925:{NFSU2_TR(0x68b925);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68b928:{NFSU2_TR(0x68b928);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B68b92b:L68b92b:{c.instructions+=94;NFSU2_TR(0x68b92b);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4864),(U+8),8);
}
B68b92f:{NFSU2_TR(0x68b92f);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),8);
__builtin_memmove((R+4800),(U+0),8);
}
B68b932:{NFSU2_TR(0x68b932);
__builtin_memmove((R+4736),(R+4800),4);
__builtin_memmove((R+4740),(R+4804),4);
__builtin_memmove((R+4744),(R+4808),4);
__builtin_memmove((R+4748),(R+4812),4);
}
B68b935:{NFSU2_TR(0x68b935);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4744),(U+8),8);
}
B68b939:{NFSU2_TR(0x68b939);
__builtin_memmove((R+4800),(R+4864),4);
__builtin_memmove((R+4804),(R+4868),4);
__builtin_memmove((R+4808),(R+4872),4);
__builtin_memmove((R+4812),(R+4876),4);
}
B68b93c:{NFSU2_TR(0x68b93c);
__builtin_memmove((R+4608),(R+4736),4);
__builtin_memmove((R+4612),(R+4740),4);
__builtin_memmove((R+4616),(R+4744),4);
__builtin_memmove((R+4620),(R+4748),4);
}
B68b93f:{NFSU2_TR(0x68b93f);
__builtin_memmove((R+4672),(R+4736),4);
__builtin_memmove((R+4676),(R+4740),4);
__builtin_memmove((R+4680),(R+4744),4);
__builtin_memmove((R+4684),(R+4748),4);
}
B68b942:{NFSU2_TR(0x68b942);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4736),(U+4),8);
}
B68b946:{NFSU2_TR(0x68b946);
__builtin_memmove((R+4864),(R+4736),4);
__builtin_memmove((R+4868),(R+4740),4);
__builtin_memmove((R+4872),(R+4744),4);
__builtin_memmove((R+4876),(R+4748),4);
}
B68b949:{NFSU2_TR(0x68b949);
u8 U[20];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),8);
__builtin_memmove((R+4872),(U+12),8);
}
B68b94e:{NFSU2_TR(0x68b94e);
__builtin_memmove((R+4736),(R+4864),4);
__builtin_memmove((R+4740),(R+4868),4);
__builtin_memmove((R+4744),(R+4872),4);
__builtin_memmove((R+4748),(R+4876),4);
}
B68b951:{NFSU2_TR(0x68b951);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B68b954:{NFSU2_TR(0x68b954);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4808),(U+8),8);
}
B68b958:{NFSU2_TR(0x68b958);
u8 U[76];
__builtin_memmove((U+44),(R+4800),4);
__builtin_memmove((U+48),(R+4804),4);
__builtin_memmove((U+52),(R+4808),4);
__builtin_memmove((U+56),(R+4812),4);
__builtin_memmove((U+60),(R+4608),4);
__builtin_memmove((U+64),(R+4612),4);
__builtin_memmove((U+68),(R+4616),4);
__builtin_memmove((U+72),(R+4620),4);
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4608,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x2ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x2ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x2ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x2ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4612,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4616,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x2ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x2ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x2ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x2ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4620,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B68b95c:{NFSU2_TR(0x68b95c);
u8 U[76];
__builtin_memmove((U+44),(R+4800),4);
__builtin_memmove((U+48),(R+4804),4);
__builtin_memmove((U+52),(R+4808),4);
__builtin_memmove((U+56),(R+4812),4);
__builtin_memmove((U+60),(R+4672),4);
__builtin_memmove((U+64),(R+4676),4);
__builtin_memmove((U+68),(R+4680),4);
__builtin_memmove((U+72),(R+4684),4);
w1(U+0,u8((u8(0x1ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x1ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x1ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x1ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4672,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x3ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x3ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x3ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x3ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4676,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x1ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x1ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x1ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x1ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4680,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x3ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x3ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x3ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x3ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4684,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B68b960:{NFSU2_TR(0x68b960);
u8 U[20];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),8);
__builtin_memmove((R+4800),(U+12),8);
}
B68b965:{NFSU2_TR(0x68b965);
u8 U[20];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),8);
__builtin_memmove((R+4808),(U+12),8);
}
B68b96a:{NFSU2_TR(0x68b96a);
u8 U[76];
__builtin_memmove((U+44),(R+4800),4);
__builtin_memmove((U+48),(R+4804),4);
__builtin_memmove((U+52),(R+4808),4);
__builtin_memmove((U+56),(R+4812),4);
__builtin_memmove((U+60),(R+4864),4);
__builtin_memmove((U+64),(R+4868),4);
__builtin_memmove((U+68),(R+4872),4);
__builtin_memmove((U+72),(R+4876),4);
w1(U+0,u8((u8(0x1ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x1ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x1ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x1ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4864,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x3ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x3ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x3ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x3ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4868,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x1ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x1ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x1ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x1ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4872,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x3ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x3ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x3ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x3ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4876,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B68b96e:{NFSU2_TR(0x68b96e);
u8 U[76];
__builtin_memmove((U+44),(R+4800),4);
__builtin_memmove((U+48),(R+4804),4);
__builtin_memmove((U+52),(R+4808),4);
__builtin_memmove((U+56),(R+4812),4);
__builtin_memmove((U+60),(R+4736),4);
__builtin_memmove((U+64),(R+4740),4);
__builtin_memmove((U+68),(R+4744),4);
__builtin_memmove((U+72),(R+4748),4);
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4736,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x2ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x2ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x2ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x2ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4740,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4744,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x2ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x2ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x2ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x2ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4748,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B68b972:{NFSU2_TR(0x68b972);
__builtin_memmove((R+4800),(R+4864),4);
__builtin_memmove((R+4804),(R+4868),4);
__builtin_memmove((R+4808),(R+4872),4);
__builtin_memmove((R+4812),(R+4876),4);
}
B68b975:{NFSU2_TR(0x68b975);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4800,b32(f32(r4(R+4800))*f32(r4(U+20))));
w4(R+4804,b32(f32(r4(R+4804))*f32(r4(U+24))));
w4(R+4808,b32(f32(r4(R+4808))*f32(r4(U+28))));
w4(R+4812,b32(f32(r4(R+4812))*f32(r4(U+32))));
}
B68b979:{NFSU2_TR(0x68b979);
u8 U[20];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),(R+4864),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B68b97d:{NFSU2_TR(0x68b97d);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4864,b32(f32(r4(R+4864))*f32(r4(U+20))));
w4(R+4868,b32(f32(r4(R+4868))*f32(r4(U+24))));
w4(R+4872,b32(f32(r4(R+4872))*f32(r4(U+28))));
w4(R+4876,b32(f32(r4(R+4876))*f32(r4(U+32))));
}
B68b981:{NFSU2_TR(0x68b981);
__builtin_memmove((R+5056),(R+4608),4);
__builtin_memmove((R+5060),(R+4612),4);
__builtin_memmove((R+5064),(R+4616),4);
__builtin_memmove((R+5068),(R+4620),4);
}
B68b984:{NFSU2_TR(0x68b984);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffed0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+5056,b32(f32(r4(R+5056))*f32(r4(U+20))));
w4(R+5060,b32(f32(r4(R+5060))*f32(r4(U+24))));
w4(R+5064,b32(f32(r4(R+5064))*f32(r4(U+28))));
w4(R+5068,b32(f32(r4(R+5068))*f32(r4(U+32))));
}
B68b98b:{NFSU2_TR(0x68b98b);
__builtin_memmove((R+4928),(R+4800),4);
__builtin_memmove((R+4932),(R+4804),4);
__builtin_memmove((R+4936),(R+4808),4);
__builtin_memmove((R+4940),(R+4812),4);
}
B68b98e:{NFSU2_TR(0x68b98e);
__builtin_memmove((R+4992),(R+4672),4);
__builtin_memmove((R+4996),(R+4676),4);
__builtin_memmove((R+5000),(R+4680),4);
__builtin_memmove((R+5004),(R+4684),4);
}
B68b991:{NFSU2_TR(0x68b991);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4992,b32(f32(r4(R+4992))*f32(r4(U+20))));
w4(R+4996,b32(f32(r4(R+4996))*f32(r4(U+24))));
w4(R+5000,b32(f32(r4(R+5000))*f32(r4(U+28))));
w4(R+5004,b32(f32(r4(R+5004))*f32(r4(U+32))));
}
B68b998:{NFSU2_TR(0x68b998);
w4(R+5056,b32(f32(r4(R+5056))+f32(r4(R+4992))));
w4(R+5060,b32(f32(r4(R+5060))+f32(r4(R+4996))));
w4(R+5064,b32(f32(r4(R+5064))+f32(r4(R+5000))));
w4(R+5068,b32(f32(r4(R+5068))+f32(r4(R+5004))));
}
B68b99b:{NFSU2_TR(0x68b99b);
__builtin_memmove((R+4992),(R+5056),4);
__builtin_memmove((R+4996),(R+5060),4);
__builtin_memmove((R+5000),(R+5064),4);
__builtin_memmove((R+5004),(R+5068),4);
}
B68b99e:{NFSU2_TR(0x68b99e);
__builtin_memmove((R+4800),(R+4736),4);
__builtin_memmove((R+4804),(R+4740),4);
__builtin_memmove((R+4808),(R+4744),4);
__builtin_memmove((R+4812),(R+4748),4);
}
B68b9a1:{NFSU2_TR(0x68b9a1);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4800,b32(f32(r4(R+4800))*f32(r4(U+20))));
w4(R+4804,b32(f32(r4(R+4804))*f32(r4(U+24))));
w4(R+4808,b32(f32(r4(R+4808))*f32(r4(U+28))));
w4(R+4812,b32(f32(r4(R+4812))*f32(r4(U+32))));
}
B68b9a8:{NFSU2_TR(0x68b9a8);
w4(R+4992,b32(f32(r4(R+4992))+f32(r4(R+4800))));
w4(R+4996,b32(f32(r4(R+4996))+f32(r4(R+4804))));
w4(R+5000,b32(f32(r4(R+5000))+f32(r4(R+4808))));
w4(R+5004,b32(f32(r4(R+5004))+f32(r4(R+4812))));
}
B68b9ab:{NFSU2_TR(0x68b9ab);
__builtin_memmove((R+4800),(R+4992),4);
__builtin_memmove((R+4804),(R+4996),4);
__builtin_memmove((R+4808),(R+5000),4);
__builtin_memmove((R+4812),(R+5004),4);
}
B68b9ae:{NFSU2_TR(0x68b9ae);
w4(R+4800,b32(f32(r4(R+4800))+f32(r4(R+4928))));
w4(R+4804,b32(f32(r4(R+4804))+f32(r4(R+4932))));
w4(R+4808,b32(f32(r4(R+4808))+f32(r4(R+4936))));
w4(R+4812,b32(f32(r4(R+4812))+f32(r4(R+4940))));
}
B68b9b1:{NFSU2_TR(0x68b9b1);
__builtin_memmove((R+4928),(R+4864),4);
__builtin_memmove((R+4932),(R+4868),4);
__builtin_memmove((R+4936),(R+4872),4);
__builtin_memmove((R+4940),(R+4876),4);
}
B68b9b4:{NFSU2_TR(0x68b9b4);
__builtin_memmove((R+5056),(R+4608),4);
__builtin_memmove((R+5060),(R+4612),4);
__builtin_memmove((R+5064),(R+4616),4);
__builtin_memmove((R+5068),(R+4620),4);
}
B68b9b7:{NFSU2_TR(0x68b9b7);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffee0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+5056,b32(f32(r4(R+5056))*f32(r4(U+20))));
w4(R+5060,b32(f32(r4(R+5060))*f32(r4(U+24))));
w4(R+5064,b32(f32(r4(R+5064))*f32(r4(U+28))));
w4(R+5068,b32(f32(r4(R+5068))*f32(r4(U+32))));
}
B68b9be:{NFSU2_TR(0x68b9be);
__builtin_memmove((R+4992),(R+4672),4);
__builtin_memmove((R+4996),(R+4676),4);
__builtin_memmove((R+5000),(R+4680),4);
__builtin_memmove((R+5004),(R+4684),4);
}
B68b9c1:{NFSU2_TR(0x68b9c1);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4992,b32(f32(r4(R+4992))*f32(r4(U+20))));
w4(R+4996,b32(f32(r4(R+4996))*f32(r4(U+24))));
w4(R+5000,b32(f32(r4(R+5000))*f32(r4(U+28))));
w4(R+5004,b32(f32(r4(R+5004))*f32(r4(U+32))));
}
B68b9c8:{NFSU2_TR(0x68b9c8);
w4(R+5056,b32(f32(r4(R+5056))+f32(r4(R+4992))));
w4(R+5060,b32(f32(r4(R+5060))+f32(r4(R+4996))));
w4(R+5064,b32(f32(r4(R+5064))+f32(r4(R+5000))));
w4(R+5068,b32(f32(r4(R+5068))+f32(r4(R+5004))));
}
B68b9cb:{NFSU2_TR(0x68b9cb);
__builtin_memmove((R+4864),(R+4736),4);
__builtin_memmove((R+4868),(R+4740),4);
__builtin_memmove((R+4872),(R+4744),4);
__builtin_memmove((R+4876),(R+4748),4);
}
B68b9ce:{NFSU2_TR(0x68b9ce);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4864,b32(f32(r4(R+4864))*f32(r4(U+20))));
w4(R+4868,b32(f32(r4(R+4868))*f32(r4(U+24))));
w4(R+4872,b32(f32(r4(R+4872))*f32(r4(U+28))));
w4(R+4876,b32(f32(r4(R+4876))*f32(r4(U+32))));
}
B68b9d5:{NFSU2_TR(0x68b9d5);
__builtin_memmove((R+4992),(R+5056),4);
__builtin_memmove((R+4996),(R+5060),4);
__builtin_memmove((R+5000),(R+5064),4);
__builtin_memmove((R+5004),(R+5068),4);
}
B68b9d8:{NFSU2_TR(0x68b9d8);
w4(R+4992,b32(f32(r4(R+4992))+f32(r4(R+4864))));
w4(R+4996,b32(f32(r4(R+4996))+f32(r4(R+4868))));
w4(R+5000,b32(f32(r4(R+5000))+f32(r4(R+4872))));
w4(R+5004,b32(f32(r4(R+5004))+f32(r4(R+4876))));
}
B68b9db:{NFSU2_TR(0x68b9db);
__builtin_memmove((R+4864),(R+4992),4);
__builtin_memmove((R+4868),(R+4996),4);
__builtin_memmove((R+4872),(R+5000),4);
__builtin_memmove((R+4876),(R+5004),4);
}
B68b9de:{NFSU2_TR(0x68b9de);
w4(R+4864,b32(f32(r4(R+4864))+f32(r4(R+4928))));
w4(R+4868,b32(f32(r4(R+4868))+f32(r4(R+4932))));
w4(R+4872,b32(f32(r4(R+4872))+f32(r4(R+4936))));
w4(R+4876,b32(f32(r4(R+4876))+f32(r4(R+4940))));
}
B68b9e1:{NFSU2_TR(0x68b9e1);
u8 U[20];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+4864),16);
__builtin_memmove(gp(u32(r4(U+0))),(U+4),16);
}
B68b9e5:{NFSU2_TR(0x68b9e5);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
__builtin_memmove((R+4864),(U+20),4);
__builtin_memmove((R+4868),(U+24),4);
__builtin_memmove((R+4872),(U+28),4);
__builtin_memmove((R+4876),(U+32),4);
}
B68b9e9:{NFSU2_TR(0x68b9e9);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4864,b32(f32(r4(R+4864))*f32(r4(U+20))));
w4(R+4868,b32(f32(r4(R+4868))*f32(r4(U+24))));
w4(R+4872,b32(f32(r4(R+4872))*f32(r4(U+28))));
w4(R+4876,b32(f32(r4(R+4876))*f32(r4(U+32))));
}
B68b9ed:{NFSU2_TR(0x68b9ed);
__builtin_memmove((R+5056),(R+4608),4);
__builtin_memmove((R+5060),(R+4612),4);
__builtin_memmove((R+5064),(R+4616),4);
__builtin_memmove((R+5068),(R+4620),4);
}
B68b9f0:{NFSU2_TR(0x68b9f0);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffef0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+5056,b32(f32(r4(R+5056))*f32(r4(U+20))));
w4(R+5060,b32(f32(r4(R+5060))*f32(r4(U+24))));
w4(R+5064,b32(f32(r4(R+5064))*f32(r4(U+28))));
w4(R+5068,b32(f32(r4(R+5068))*f32(r4(U+32))));
}
B68b9f7:{NFSU2_TR(0x68b9f7);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff00ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4608,b32(f32(r4(R+4608))*f32(r4(U+20))));
w4(R+4612,b32(f32(r4(R+4612))*f32(r4(U+24))));
w4(R+4616,b32(f32(r4(R+4616))*f32(r4(U+28))));
w4(R+4620,b32(f32(r4(R+4620))*f32(r4(U+32))));
}
B68b9fe:{NFSU2_TR(0x68b9fe);
__builtin_memmove((R+4928),(R+4864),4);
__builtin_memmove((R+4932),(R+4868),4);
__builtin_memmove((R+4936),(R+4872),4);
__builtin_memmove((R+4940),(R+4876),4);
}
B68ba01:{NFSU2_TR(0x68ba01);
__builtin_memmove((R+4992),(R+4672),4);
__builtin_memmove((R+4996),(R+4676),4);
__builtin_memmove((R+5000),(R+4680),4);
__builtin_memmove((R+5004),(R+4684),4);
}
B68ba04:{NFSU2_TR(0x68ba04);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4992,b32(f32(r4(R+4992))*f32(r4(U+20))));
w4(R+4996,b32(f32(r4(R+4996))*f32(r4(U+24))));
w4(R+5000,b32(f32(r4(R+5000))*f32(r4(U+28))));
w4(R+5004,b32(f32(r4(R+5004))*f32(r4(U+32))));
}
B68ba0b:{NFSU2_TR(0x68ba0b);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4672,b32(f32(r4(R+4672))*f32(r4(U+20))));
w4(R+4676,b32(f32(r4(R+4676))*f32(r4(U+24))));
w4(R+4680,b32(f32(r4(R+4680))*f32(r4(U+28))));
w4(R+4684,b32(f32(r4(R+4684))*f32(r4(U+32))));
}
B68ba12:{NFSU2_TR(0x68ba12);
__builtin_memmove((R+4864),(R+4736),4);
__builtin_memmove((R+4868),(R+4740),4);
__builtin_memmove((R+4872),(R+4744),4);
__builtin_memmove((R+4876),(R+4748),4);
}
B68ba15:{NFSU2_TR(0x68ba15);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4864,b32(f32(r4(R+4864))*f32(r4(U+20))));
w4(R+4868,b32(f32(r4(R+4868))*f32(r4(U+24))));
w4(R+4872,b32(f32(r4(R+4872))*f32(r4(U+28))));
w4(R+4876,b32(f32(r4(R+4876))*f32(r4(U+32))));
}
B68ba1c:{NFSU2_TR(0x68ba1c);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4736,b32(f32(r4(R+4736))*f32(r4(U+20))));
w4(R+4740,b32(f32(r4(R+4740))*f32(r4(U+24))));
w4(R+4744,b32(f32(r4(R+4744))*f32(r4(U+28))));
w4(R+4748,b32(f32(r4(R+4748))*f32(r4(U+32))));
}
B68ba20:{NFSU2_TR(0x68ba20);
w4(R+5056,b32(f32(r4(R+5056))+f32(r4(R+4992))));
w4(R+5060,b32(f32(r4(R+5060))+f32(r4(R+4996))));
w4(R+5064,b32(f32(r4(R+5064))+f32(r4(R+5000))));
w4(R+5068,b32(f32(r4(R+5068))+f32(r4(R+5004))));
}
B68ba23:{NFSU2_TR(0x68ba23);
w4(R+4608,b32(f32(r4(R+4608))+f32(r4(R+4672))));
w4(R+4612,b32(f32(r4(R+4612))+f32(r4(R+4676))));
w4(R+4616,b32(f32(r4(R+4616))+f32(r4(R+4680))));
w4(R+4620,b32(f32(r4(R+4620))+f32(r4(R+4684))));
}
B68ba26:{NFSU2_TR(0x68ba26);
__builtin_memmove((R+4992),(R+5056),4);
__builtin_memmove((R+4996),(R+5060),4);
__builtin_memmove((R+5000),(R+5064),4);
__builtin_memmove((R+5004),(R+5068),4);
}
B68ba29:{NFSU2_TR(0x68ba29);
w4(R+4992,b32(f32(r4(R+4992))+f32(r4(R+4864))));
w4(R+4996,b32(f32(r4(R+4996))+f32(r4(R+4868))));
w4(R+5000,b32(f32(r4(R+5000))+f32(r4(R+4872))));
w4(R+5004,b32(f32(r4(R+5004))+f32(r4(R+4876))));
}
B68ba2c:{NFSU2_TR(0x68ba2c);
w4(R+4608,b32(f32(r4(R+4608))+f32(r4(R+4736))));
w4(R+4612,b32(f32(r4(R+4612))+f32(r4(R+4740))));
w4(R+4616,b32(f32(r4(R+4616))+f32(r4(R+4744))));
w4(R+4620,b32(f32(r4(R+4620))+f32(r4(R+4748))));
}
B68ba2f:{NFSU2_TR(0x68ba2f);
__builtin_memmove((R+4864),(R+4992),4);
__builtin_memmove((R+4868),(R+4996),4);
__builtin_memmove((R+4872),(R+5000),4);
__builtin_memmove((R+4876),(R+5004),4);
}
B68ba32:{NFSU2_TR(0x68ba32);
w4(R+4864,b32(f32(r4(R+4864))+f32(r4(R+4928))));
w4(R+4868,b32(f32(r4(R+4868))+f32(r4(R+4932))));
w4(R+4872,b32(f32(r4(R+4872))+f32(r4(R+4936))));
w4(R+4876,b32(f32(r4(R+4876))+f32(r4(R+4940))));
}
B68ba35:{NFSU2_TR(0x68ba35);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
__builtin_memmove((R+4928),(U+20),4);
__builtin_memmove((R+4932),(U+24),4);
__builtin_memmove((R+4936),(U+28),4);
__builtin_memmove((R+4940),(U+32),4);
}
B68ba39:{NFSU2_TR(0x68ba39);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4928,b32(f32(r4(R+4928))*f32(r4(U+20))));
w4(R+4932,b32(f32(r4(R+4932))*f32(r4(U+24))));
w4(R+4936,b32(f32(r4(R+4936))*f32(r4(U+28))));
w4(R+4940,b32(f32(r4(R+4940))*f32(r4(U+32))));
}
B68ba3d:{NFSU2_TR(0x68ba3d);
__builtin_memmove((R+4736),(R+4608),4);
__builtin_memmove((R+4740),(R+4612),4);
__builtin_memmove((R+4744),(R+4616),4);
__builtin_memmove((R+4748),(R+4620),4);
}
B68ba40:{NFSU2_TR(0x68ba40);
__builtin_memmove((R+4608),(R+4800),4);
__builtin_memmove((R+4612),(R+4804),4);
__builtin_memmove((R+4616),(R+4808),4);
__builtin_memmove((R+4620),(R+4812),4);
}
B68ba43:{NFSU2_TR(0x68ba43);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
__builtin_memmove((R+4616),(R+4612),4);
__builtin_memmove((R+4612),(U+20),4);
__builtin_memmove((R+4620),(U+24),4);
}
B68ba47:{NFSU2_TR(0x68ba47);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
__builtin_memmove((R+4800),(R+4808),4);
__builtin_memmove((R+4808),(R+4812),4);
__builtin_memmove((R+4804),(U+28),4);
__builtin_memmove((R+4812),(U+32),4);
}
B68ba4b:{NFSU2_TR(0x68ba4b);
w4(R+4736,b32(f32(r4(R+4736))+f32(r4(R+4928))));
w4(R+4740,b32(f32(r4(R+4740))+f32(r4(R+4932))));
w4(R+4744,b32(f32(r4(R+4744))+f32(r4(R+4936))));
w4(R+4748,b32(f32(r4(R+4748))+f32(r4(R+4940))));
}
B68ba4e:{NFSU2_TR(0x68ba4e);
__builtin_memmove((R+4672),(R+4864),4);
__builtin_memmove((R+4676),(R+4868),4);
__builtin_memmove((R+4680),(R+4872),4);
__builtin_memmove((R+4684),(R+4876),4);
}
B68ba51:{NFSU2_TR(0x68ba51);
u8 U[8];
__builtin_memmove((U+0),(R+4608),8);
s8_(u32(r4(R+28)),r8(U+0));
}
B68ba54:{NFSU2_TR(0x68ba54);
__builtin_memmove((R+4680),(R+4676),4);
__builtin_memmove((R+4684),(R+4740),4);
__builtin_memmove((R+4676),(R+4736),4);
}
B68ba57:{NFSU2_TR(0x68ba57);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4672),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B68ba5b:{NFSU2_TR(0x68ba5b);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4616),8);
s8_(u32(r4(U+4)),r8(U+8));
}
B68ba5f:{NFSU2_TR(0x68ba5f);
u8 U[20];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4680),8);
s8_(u32(r4(U+8)),r8(U+12));
}
B68ba64:{NFSU2_TR(0x68ba64);
__builtin_memmove((R+4864),(R+4872),4);
__builtin_memmove((R+4868),(R+4744),4);
__builtin_memmove((R+4872),(R+4876),4);
__builtin_memmove((R+4876),(R+4748),4);
}
B68ba67:{NFSU2_TR(0x68ba67);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4800),8);
s8_(u32(r4(U+4)),r8(U+8));
}
B68ba6b:{NFSU2_TR(0x68ba6b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B68ba6e:{NFSU2_TR(0x68ba6e);
u8 U[20];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4864),8);
s8_(u32(r4(U+8)),r8(U+12));
}
B68ba73:{NFSU2_TR(0x68ba73);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4808),8);
s8_(u32(r4(U+4)),r8(U+8));
}
B68ba77:{NFSU2_TR(0x68ba77);
u8 U[20];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4872),8);
s8_(u32(r4(U+8)),r8(U+12));
}
B68ba7c:{NFSU2_TR(0x68ba7c);
__builtin_memmove((R+8),(R+0),4);
}
B68ba7e:{NFSU2_TR(0x68ba7e);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B68ba81:{NFSU2_TR(0x68ba81);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+8))));
}
B68ba83:{NFSU2_TR(0x68ba83);
__builtin_memmove((R+8),(R+4),4);
}
B68ba85:{NFSU2_TR(0x68ba85);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B68ba88:{NFSU2_TR(0x68ba88);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+8))));
}
B68ba8a:{NFSU2_TR(0x68ba8a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B68ba8d:{NFSU2_TR(0x68ba8d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x68b92bu);}goto L68b92b;}}
}
B68ba93:L68ba93:{c.instructions+=1;NFSU2_TR(0x68ba93);
{goto L68ba98;}
}
B68ba95:L68ba95:{c.instructions+=1;NFSU2_TR(0x68ba95);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B68ba98:L68ba98:{c.instructions+=3;NFSU2_TR(0x68ba98);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B68ba9b:{NFSU2_TR(0x68ba9b);
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
B68ba9d:{NFSU2_TR(0x68ba9d);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L68bab7;}}
}
B68ba9f:L68ba9f:{c.instructions+=1;NFSU2_TR(0x68ba9f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68baa2:L68baa2:{c.instructions+=4;NFSU2_TR(0x68baa2);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B68baa5:{NFSU2_TR(0x68baa5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68baa6:{NFSU2_TR(0x68baa6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68baa7:{NFSU2_TR(0x68baa7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x68baacull));
TAIL_STATIC(0x68cdbcu,68c);
}
B68baac:L68baac:{c.instructions+=4;NFSU2_TR(0x68baac);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+24,u32(u32(r4(R+24))+u32(r4(U+4))));
}
B68baaf:{NFSU2_TR(0x68baaf);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,carry<u32>(r4(R+28),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+28,u32(u32(r4(R+28))+u32(r4(U+4))));
}
B68bab2:{NFSU2_TR(0x68bab2);
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
B68bab5:{NFSU2_TR(0x68bab5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x68baa2u);}goto L68baa2;}}
}
B68bab7:L68bab7:{c.instructions+=8;NFSU2_TR(0x68bab7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B68baba:{NFSU2_TR(0x68baba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B68babb:{NFSU2_TR(0x68babb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B68babc:{NFSU2_TR(0x68babc);
__builtin_memmove((R+16),(R+20),4);
}
B68babe:{NFSU2_TR(0x68babe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B68babf:{NFSU2_TR(0x68babf);
__builtin_memmove((R+16),(R+12),4);
}
B68bac1:{NFSU2_TR(0x68bac1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B68bac2:{NFSU2_TR(0x68bac2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B68bac5:L68bac5:{c.instructions+=25;NFSU2_TR(0x68bac5);
__builtin_memmove((R+28),(R+28),4);
}
B68bac7:{NFSU2_TR(0x68bac7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68bac8:{NFSU2_TR(0x68bac8);
__builtin_memmove((R+12),(R+16),4);
}
B68baca:{NFSU2_TR(0x68baca);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68bacb:{NFSU2_TR(0x68bacb);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B68bace:{NFSU2_TR(0x68bace);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B68bad1:{NFSU2_TR(0x68bad1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68bad2:{NFSU2_TR(0x68bad2);
__builtin_memmove((R+20),(R+16),4);
}
B68bad4:{NFSU2_TR(0x68bad4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x128ull))));
}
B68bada:{NFSU2_TR(0x68bada);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B68badd:{NFSU2_TR(0x68badd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68bade:{NFSU2_TR(0x68bade);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68badf:{NFSU2_TR(0x68badf);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B68bae2:{NFSU2_TR(0x68bae2);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68bae4:{NFSU2_TR(0x68bae4);
__builtin_memmove((R+8),(R+0),4);
}
B68bae6:{NFSU2_TR(0x68bae6);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xfffffffcull))));
}
B68bae9:{NFSU2_TR(0x68bae9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B68baea:{NFSU2_TR(0x68baea);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
}
B68baec:{NFSU2_TR(0x68baec);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(R+24))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B68baee:{NFSU2_TR(0x68baee);
w4(R+24,u32(u32(r4(R+24))&u32(r4(R+8))));
}
B68baf0:{NFSU2_TR(0x68baf0);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+24))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B68baf2:{NFSU2_TR(0x68baf2);
u8 U[9];
w4(U+5,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+24,shr<u32>(r4(R+24),u64(r4(U+5))));
w1(U+0,u8((r4(U+5))!=(u32(0x0ull))));
w1(U+1,u8((r4(R+24))==(u32(0x0ull))));
w1(U+2,u8(!(r1(U+0))));
w1(U+3,u8(u32(r1(U+2))&u32(r1(R+518))));
w1(U+4,u8(u32(r1(U+0))&u32(r1(U+1))));
w1(R+518,u8(u32(r1(U+3))|u32(r1(U+4))));
}
B68baf5:{NFSU2_TR(0x68baf5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68baf8:{NFSU2_TR(0x68baf8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68bafb:{NFSU2_TR(0x68bafb);
if(r1(R+518)){{goto L68bc49;}}
}
B68bb01:L68bb01:{c.instructions+=3;NFSU2_TR(0x68bb01);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B68bb04:{NFSU2_TR(0x68bb04);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffee0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B68bb0a:{NFSU2_TR(0x68bb0a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x68bb0full));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x68b19fu);}goto L68b19f;}
}
B68bb0f:L68bb0f:{c.instructions+=4;NFSU2_TR(0x68bb0f);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B68bb11:{NFSU2_TR(0x68bb11);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B68bb14:{NFSU2_TR(0x68bb14);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B68bb17:{NFSU2_TR(0x68bb17);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L68bc49;}}
}
B68bb1d:L68bb1d:{c.instructions+=4;NFSU2_TR(0x68bb1d);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
__builtin_memmove((R+4736),(U+20),4);
__builtin_memmove((R+4740),(U+24),4);
__builtin_memmove((R+4744),(U+28),4);
__builtin_memmove((R+4748),(U+32),4);
}
B68bb21:{NFSU2_TR(0x68bb21);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
__builtin_memmove((R+4608),(U+20),4);
__builtin_memmove((R+4612),(U+24),4);
__builtin_memmove((R+4616),(U+28),4);
__builtin_memmove((R+4620),(U+32),4);
}
B68bb25:{NFSU2_TR(0x68bb25);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68bb28:{NFSU2_TR(0x68bb28);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B68bb2b:L68bb2b:{c.instructions+=73;NFSU2_TR(0x68bb2b);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),8);
__builtin_memmove((R+4736),(U+0),8);
}
B68bb2e:{NFSU2_TR(0x68bb2e);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4608),(U+8),8);
}
B68bb32:{NFSU2_TR(0x68bb32);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4864),(U+4),4);
w4(R+4868,u32(0x0ull));
w4(R+4872,u32(0x0ull));
w4(R+4876,u32(0x0ull));
}
B68bb37:{NFSU2_TR(0x68bb37);
__builtin_memmove((R+4672),(R+4736),4);
__builtin_memmove((R+4676),(R+4740),4);
__builtin_memmove((R+4680),(R+4744),4);
__builtin_memmove((R+4684),(R+4748),4);
}
B68bb3a:{NFSU2_TR(0x68bb3a);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4680),(U+8),8);
}
B68bb3e:{NFSU2_TR(0x68bb3e);
__builtin_memmove((R+4736),(R+4608),4);
__builtin_memmove((R+4740),(R+4612),4);
__builtin_memmove((R+4744),(R+4616),4);
__builtin_memmove((R+4748),(R+4620),4);
}
B68bb41:{NFSU2_TR(0x68bb41);
__builtin_memmove((R+4608),(R+4672),4);
__builtin_memmove((R+4612),(R+4676),4);
__builtin_memmove((R+4616),(R+4680),4);
__builtin_memmove((R+4620),(R+4684),4);
}
B68bb44:{NFSU2_TR(0x68bb44);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B68bb47:{NFSU2_TR(0x68bb47);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4744),(U+8),8);
}
B68bb4b:{NFSU2_TR(0x68bb4b);
u8 U[76];
__builtin_memmove((U+44),(R+4736),4);
__builtin_memmove((U+48),(R+4740),4);
__builtin_memmove((U+52),(R+4744),4);
__builtin_memmove((U+56),(R+4748),4);
__builtin_memmove((U+60),(R+4672),4);
__builtin_memmove((U+64),(R+4676),4);
__builtin_memmove((U+68),(R+4680),4);
__builtin_memmove((U+72),(R+4684),4);
w1(U+0,u8((u8(0x1ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x1ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x1ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x1ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4672,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x3ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x3ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x3ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x3ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4676,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x1ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x1ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x1ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x1ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4680,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x3ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x3ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x3ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x3ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4684,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B68bb4f:{NFSU2_TR(0x68bb4f);
u8 U[76];
__builtin_memmove((U+44),(R+4736),4);
__builtin_memmove((U+48),(R+4740),4);
__builtin_memmove((U+52),(R+4744),4);
__builtin_memmove((U+56),(R+4748),4);
__builtin_memmove((U+60),(R+4608),4);
__builtin_memmove((U+64),(R+4612),4);
__builtin_memmove((U+68),(R+4616),4);
__builtin_memmove((U+72),(R+4620),4);
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4608,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x2ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x2ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x2ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x2ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4612,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4616,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x2ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x2ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x2ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x2ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4620,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B68bb53:{NFSU2_TR(0x68bb53);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4736),(U+12),4);
w4(R+4740,u32(0x0ull));
w4(R+4744,u32(0x0ull));
w4(R+4748,u32(0x0ull));
}
B68bb59:{NFSU2_TR(0x68bb59);
__builtin_memmove((R+4800),(R+4672),4);
__builtin_memmove((R+4804),(R+4676),4);
__builtin_memmove((R+4808),(R+4680),4);
__builtin_memmove((R+4812),(R+4684),4);
}
B68bb5c:{NFSU2_TR(0x68bb5c);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4672),(U+12),4);
w4(R+4676,u32(0x0ull));
w4(R+4680,u32(0x0ull));
w4(R+4684,u32(0x0ull));
}
B68bb62:{NFSU2_TR(0x68bb62);
__builtin_memmove((R+4744),(R+4672),8);
}
B68bb65:{NFSU2_TR(0x68bb65);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4672),(U+12),4);
w4(R+4676,u32(0x0ull));
w4(R+4680,u32(0x0ull));
w4(R+4684,u32(0x0ull));
}
B68bb6b:{NFSU2_TR(0x68bb6b);
__builtin_memmove((R+4872),(R+4672),8);
}
B68bb6e:{NFSU2_TR(0x68bb6e);
__builtin_memmove((R+4672),(R+4864),4);
__builtin_memmove((R+4676),(R+4868),4);
__builtin_memmove((R+4680),(R+4872),4);
__builtin_memmove((R+4684),(R+4876),4);
}
B68bb71:{NFSU2_TR(0x68bb71);
u8 U[76];
__builtin_memmove((U+44),(R+4736),4);
__builtin_memmove((U+48),(R+4740),4);
__builtin_memmove((U+52),(R+4744),4);
__builtin_memmove((U+56),(R+4748),4);
__builtin_memmove((U+60),(R+4672),4);
__builtin_memmove((U+64),(R+4676),4);
__builtin_memmove((U+68),(R+4680),4);
__builtin_memmove((U+72),(R+4684),4);
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4672,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x2ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x2ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x2ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x2ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4676,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4680,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x2ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x2ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x2ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x2ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4684,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B68bb75:{NFSU2_TR(0x68bb75);
__builtin_memmove((R+4736),(R+4672),4);
__builtin_memmove((R+4740),(R+4676),4);
__builtin_memmove((R+4744),(R+4680),4);
__builtin_memmove((R+4748),(R+4684),4);
}
B68bb78:{NFSU2_TR(0x68bb78);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4736,b32(f32(r4(R+4736))*f32(r4(U+20))));
w4(R+4740,b32(f32(r4(R+4740))*f32(r4(U+24))));
w4(R+4744,b32(f32(r4(R+4744))*f32(r4(U+28))));
w4(R+4748,b32(f32(r4(R+4748))*f32(r4(U+32))));
}
B68bb7f:{NFSU2_TR(0x68bb7f);
__builtin_memmove((R+4864),(R+4736),4);
__builtin_memmove((R+4868),(R+4740),4);
__builtin_memmove((R+4872),(R+4744),4);
__builtin_memmove((R+4876),(R+4748),4);
}
B68bb82:{NFSU2_TR(0x68bb82);
__builtin_memmove((R+4736),(R+4800),4);
__builtin_memmove((R+4740),(R+4804),4);
__builtin_memmove((R+4744),(R+4808),4);
__builtin_memmove((R+4748),(R+4812),4);
}
B68bb85:{NFSU2_TR(0x68bb85);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4736,b32(f32(r4(R+4736))*f32(r4(U+20))));
w4(R+4740,b32(f32(r4(R+4740))*f32(r4(U+24))));
w4(R+4744,b32(f32(r4(R+4744))*f32(r4(U+28))));
w4(R+4748,b32(f32(r4(R+4748))*f32(r4(U+32))));
}
B68bb8c:{NFSU2_TR(0x68bb8c);
__builtin_memmove((R+4928),(R+4608),4);
__builtin_memmove((R+4932),(R+4612),4);
__builtin_memmove((R+4936),(R+4616),4);
__builtin_memmove((R+4940),(R+4620),4);
}
B68bb8f:{NFSU2_TR(0x68bb8f);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffee0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4928,b32(f32(r4(R+4928))*f32(r4(U+20))));
w4(R+4932,b32(f32(r4(R+4932))*f32(r4(U+24))));
w4(R+4936,b32(f32(r4(R+4936))*f32(r4(U+28))));
w4(R+4940,b32(f32(r4(R+4940))*f32(r4(U+32))));
}
B68bb96:{NFSU2_TR(0x68bb96);
w4(R+4928,b32(f32(r4(R+4928))+f32(r4(R+4736))));
w4(R+4932,b32(f32(r4(R+4932))+f32(r4(R+4740))));
w4(R+4936,b32(f32(r4(R+4936))+f32(r4(R+4744))));
w4(R+4940,b32(f32(r4(R+4940))+f32(r4(R+4748))));
}
B68bb99:{NFSU2_TR(0x68bb99);
__builtin_memmove((R+4736),(R+4928),4);
__builtin_memmove((R+4740),(R+4932),4);
__builtin_memmove((R+4744),(R+4936),4);
__builtin_memmove((R+4748),(R+4940),4);
}
B68bb9c:{NFSU2_TR(0x68bb9c);
w4(R+4736,b32(f32(r4(R+4736))+f32(r4(R+4864))));
w4(R+4740,b32(f32(r4(R+4740))+f32(r4(R+4868))));
w4(R+4744,b32(f32(r4(R+4744))+f32(r4(R+4872))));
w4(R+4748,b32(f32(r4(R+4748))+f32(r4(R+4876))));
}
B68bb9f:{NFSU2_TR(0x68bb9f);
__builtin_memmove((R+4864),(R+4672),4);
__builtin_memmove((R+4868),(R+4676),4);
__builtin_memmove((R+4872),(R+4680),4);
__builtin_memmove((R+4876),(R+4684),4);
}
B68bba2:{NFSU2_TR(0x68bba2);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4864,b32(f32(r4(R+4864))*f32(r4(U+20))));
w4(R+4868,b32(f32(r4(R+4868))*f32(r4(U+24))));
w4(R+4872,b32(f32(r4(R+4872))*f32(r4(U+28))));
w4(R+4876,b32(f32(r4(R+4876))*f32(r4(U+32))));
}
B68bba9:{NFSU2_TR(0x68bba9);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4672,b32(f32(r4(R+4672))*f32(r4(U+20))));
w4(R+4676,b32(f32(r4(R+4676))*f32(r4(U+24))));
w4(R+4680,b32(f32(r4(R+4680))*f32(r4(U+28))));
w4(R+4684,b32(f32(r4(R+4684))*f32(r4(U+32))));
}
B68bbad:{NFSU2_TR(0x68bbad);
__builtin_memmove((R+4992),(R+4608),4);
__builtin_memmove((R+4996),(R+4612),4);
__builtin_memmove((R+5000),(R+4616),4);
__builtin_memmove((R+5004),(R+4620),4);
}
B68bbb0:{NFSU2_TR(0x68bbb0);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff00ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4608,b32(f32(r4(R+4608))*f32(r4(U+20))));
w4(R+4612,b32(f32(r4(R+4612))*f32(r4(U+24))));
w4(R+4616,b32(f32(r4(R+4616))*f32(r4(U+28))));
w4(R+4620,b32(f32(r4(R+4620))*f32(r4(U+32))));
}
B68bbb7:{NFSU2_TR(0x68bbb7);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffef0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4992,b32(f32(r4(R+4992))*f32(r4(U+20))));
w4(R+4996,b32(f32(r4(R+4996))*f32(r4(U+24))));
w4(R+5000,b32(f32(r4(R+5000))*f32(r4(U+28))));
w4(R+5004,b32(f32(r4(R+5004))*f32(r4(U+32))));
}
B68bbbe:{NFSU2_TR(0x68bbbe);
__builtin_memmove((R+4928),(R+4864),4);
__builtin_memmove((R+4932),(R+4868),4);
__builtin_memmove((R+4936),(R+4872),4);
__builtin_memmove((R+4940),(R+4876),4);
}
B68bbc1:{NFSU2_TR(0x68bbc1);
__builtin_memmove((R+4864),(R+4800),4);
__builtin_memmove((R+4868),(R+4804),4);
__builtin_memmove((R+4872),(R+4808),4);
__builtin_memmove((R+4876),(R+4812),4);
}
B68bbc4:{NFSU2_TR(0x68bbc4);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4800,b32(f32(r4(R+4800))*f32(r4(U+20))));
w4(R+4804,b32(f32(r4(R+4804))*f32(r4(U+24))));
w4(R+4808,b32(f32(r4(R+4808))*f32(r4(U+28))));
w4(R+4812,b32(f32(r4(R+4812))*f32(r4(U+32))));
}
B68bbcb:{NFSU2_TR(0x68bbcb);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4864,b32(f32(r4(R+4864))*f32(r4(U+20))));
w4(R+4868,b32(f32(r4(R+4868))*f32(r4(U+24))));
w4(R+4872,b32(f32(r4(R+4872))*f32(r4(U+28))));
w4(R+4876,b32(f32(r4(R+4876))*f32(r4(U+32))));
}
B68bbd2:{NFSU2_TR(0x68bbd2);
w4(R+4608,b32(f32(r4(R+4608))+f32(r4(R+4800))));
w4(R+4612,b32(f32(r4(R+4612))+f32(r4(R+4804))));
w4(R+4616,b32(f32(r4(R+4616))+f32(r4(R+4808))));
w4(R+4620,b32(f32(r4(R+4620))+f32(r4(R+4812))));
}
B68bbd5:{NFSU2_TR(0x68bbd5);
w4(R+4608,b32(f32(r4(R+4608))+f32(r4(R+4672))));
w4(R+4612,b32(f32(r4(R+4612))+f32(r4(R+4676))));
w4(R+4616,b32(f32(r4(R+4616))+f32(r4(R+4680))));
w4(R+4620,b32(f32(r4(R+4620))+f32(r4(R+4684))));
}
B68bbd8:{NFSU2_TR(0x68bbd8);
w4(R+4992,b32(f32(r4(R+4992))+f32(r4(R+4864))));
w4(R+4996,b32(f32(r4(R+4996))+f32(r4(R+4868))));
w4(R+5000,b32(f32(r4(R+5000))+f32(r4(R+4872))));
w4(R+5004,b32(f32(r4(R+5004))+f32(r4(R+4876))));
}
B68bbdb:{NFSU2_TR(0x68bbdb);
__builtin_memmove((R+4864),(R+4992),4);
__builtin_memmove((R+4868),(R+4996),4);
__builtin_memmove((R+4872),(R+5000),4);
__builtin_memmove((R+4876),(R+5004),4);
}
B68bbde:{NFSU2_TR(0x68bbde);
w4(R+4864,b32(f32(r4(R+4864))+f32(r4(R+4928))));
w4(R+4868,b32(f32(r4(R+4868))+f32(r4(R+4932))));
w4(R+4872,b32(f32(r4(R+4872))+f32(r4(R+4936))));
w4(R+4876,b32(f32(r4(R+4876))+f32(r4(R+4940))));
}
B68bbe1:{NFSU2_TR(0x68bbe1);
__builtin_memmove((R+4800),(R+4736),4);
__builtin_memmove((R+4804),(R+4740),4);
__builtin_memmove((R+4808),(R+4744),4);
__builtin_memmove((R+4812),(R+4748),4);
}
B68bbe4:{NFSU2_TR(0x68bbe4);
__builtin_memmove((R+4808),(R+4804),4);
__builtin_memmove((R+4812),(R+4868),4);
__builtin_memmove((R+4804),(R+4864),4);
}
B68bbe7:{NFSU2_TR(0x68bbe7);
u8 U[8];
__builtin_memmove((U+0),(R+4800),8);
s8_(u32(r4(R+28)),r8(U+0));
}
B68bbea:{NFSU2_TR(0x68bbea);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4808),8);
s8_(u32(r4(U+4)),r8(U+8));
}
B68bbee:{NFSU2_TR(0x68bbee);
__builtin_memmove((R+4672),(R+4608),4);
__builtin_memmove((R+4676),(R+4612),4);
__builtin_memmove((R+4680),(R+4616),4);
__builtin_memmove((R+4684),(R+4620),4);
}
B68bbf1:{NFSU2_TR(0x68bbf1);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
__builtin_memmove((R+4680),(R+4676),4);
__builtin_memmove((R+4676),(U+20),4);
__builtin_memmove((R+4684),(U+24),4);
}
B68bbf5:{NFSU2_TR(0x68bbf5);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
__builtin_memmove((R+4608),(R+4616),4);
__builtin_memmove((R+4616),(R+4620),4);
__builtin_memmove((R+4612),(U+28),4);
__builtin_memmove((R+4620),(U+32),4);
}
B68bbf9:{NFSU2_TR(0x68bbf9);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4672),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68bbfe:{NFSU2_TR(0x68bbfe);
__builtin_memmove((R+4800),(R+4672),4);
__builtin_memmove((R+4804),(R+4676),4);
__builtin_memmove((R+4808),(R+4680),4);
__builtin_memmove((R+4812),(R+4684),4);
}
B68bc01:{NFSU2_TR(0x68bc01);
__builtin_memmove((R+4800),(R+4680),8);
}
B68bc04:{NFSU2_TR(0x68bc04);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4800),4);
s4(u32(r4(U+8)),r4(U+12));
}
B68bc0a:{NFSU2_TR(0x68bc0a);
__builtin_memmove((R+4736),(R+4744),4);
__builtin_memmove((R+4740),(R+4872),4);
__builtin_memmove((R+4744),(R+4748),4);
__builtin_memmove((R+4748),(R+4876),4);
}
B68bc0d:{NFSU2_TR(0x68bc0d);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4736),8);
s8_(u32(r4(U+4)),r8(U+8));
}
B68bc11:{NFSU2_TR(0x68bc11);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B68bc14:{NFSU2_TR(0x68bc14);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4744),8);
s8_(u32(r4(U+4)),r8(U+8));
}
B68bc18:{NFSU2_TR(0x68bc18);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4608),4);
s4(u32(r4(U+8)),r4(U+12));
}
B68bc1e:{NFSU2_TR(0x68bc1e);
__builtin_memmove((R+4672),(R+4608),4);
__builtin_memmove((R+4676),(R+4612),4);
__builtin_memmove((R+4680),(R+4616),4);
__builtin_memmove((R+4684),(R+4620),4);
}
B68bc21:{NFSU2_TR(0x68bc21);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B68bc24:{NFSU2_TR(0x68bc24);
__builtin_memmove((R+4672),(R+4616),8);
}
B68bc27:{NFSU2_TR(0x68bc27);
__builtin_memmove((R+4608),(R+4672),4);
__builtin_memmove((R+4612),(R+4676),4);
__builtin_memmove((R+4616),(R+4680),4);
__builtin_memmove((R+4620),(R+4684),4);
}
B68bc2a:{NFSU2_TR(0x68bc2a);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4608),4);
s4(u32(r4(U+8)),r4(U+12));
}
B68bc30:{NFSU2_TR(0x68bc30);
__builtin_memmove((R+8),(R+0),4);
}
B68bc32:{NFSU2_TR(0x68bc32);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B68bc35:{NFSU2_TR(0x68bc35);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+8))));
}
B68bc37:{NFSU2_TR(0x68bc37);
__builtin_memmove((R+8),(R+4),4);
}
B68bc39:{NFSU2_TR(0x68bc39);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B68bc3c:{NFSU2_TR(0x68bc3c);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+8))));
}
B68bc3e:{NFSU2_TR(0x68bc3e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B68bc41:{NFSU2_TR(0x68bc41);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x68bb2bu);}goto L68bb2b;}}
}
B68bc47:L68bc47:{c.instructions+=1;NFSU2_TR(0x68bc47);
{goto L68bc4c;}
}
B68bc49:L68bc49:{c.instructions+=1;NFSU2_TR(0x68bc49);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B68bc4c:L68bc4c:{c.instructions+=3;NFSU2_TR(0x68bc4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B68bc4f:{NFSU2_TR(0x68bc4f);
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
B68bc51:{NFSU2_TR(0x68bc51);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L68bc6b;}}
}
B68bc53:L68bc53:{c.instructions+=1;NFSU2_TR(0x68bc53);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68bc56:L68bc56:{c.instructions+=4;NFSU2_TR(0x68bc56);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B68bc59:{NFSU2_TR(0x68bc59);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68bc5a:{NFSU2_TR(0x68bc5a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68bc5b:{NFSU2_TR(0x68bc5b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x68bc60ull));
TAIL_STATIC(0x68d465u,68d);
}
B68bc60:L68bc60:{c.instructions+=4;NFSU2_TR(0x68bc60);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+24,u32(u32(r4(R+24))+u32(r4(U+4))));
}
B68bc63:{NFSU2_TR(0x68bc63);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,carry<u32>(r4(R+28),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+28,u32(u32(r4(R+28))+u32(r4(U+4))));
}
B68bc66:{NFSU2_TR(0x68bc66);
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
B68bc69:{NFSU2_TR(0x68bc69);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x68bc56u);}goto L68bc56;}}
}
B68bc6b:L68bc6b:{c.instructions+=8;NFSU2_TR(0x68bc6b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B68bc6e:{NFSU2_TR(0x68bc6e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B68bc6f:{NFSU2_TR(0x68bc6f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B68bc70:{NFSU2_TR(0x68bc70);
__builtin_memmove((R+16),(R+20),4);
}
B68bc72:{NFSU2_TR(0x68bc72);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B68bc73:{NFSU2_TR(0x68bc73);
__builtin_memmove((R+16),(R+12),4);
}
B68bc75:{NFSU2_TR(0x68bc75);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B68bc76:{NFSU2_TR(0x68bc76);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B68bc79:L68bc79:{c.instructions+=25;NFSU2_TR(0x68bc79);
__builtin_memmove((R+28),(R+28),4);
}
B68bc7b:{NFSU2_TR(0x68bc7b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68bc7c:{NFSU2_TR(0x68bc7c);
__builtin_memmove((R+12),(R+16),4);
}
B68bc7e:{NFSU2_TR(0x68bc7e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68bc7f:{NFSU2_TR(0x68bc7f);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B68bc82:{NFSU2_TR(0x68bc82);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B68bc85:{NFSU2_TR(0x68bc85);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68bc86:{NFSU2_TR(0x68bc86);
__builtin_memmove((R+20),(R+16),4);
}
B68bc88:{NFSU2_TR(0x68bc88);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x128ull))));
}
B68bc8e:{NFSU2_TR(0x68bc8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B68bc91:{NFSU2_TR(0x68bc91);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68bc92:{NFSU2_TR(0x68bc92);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68bc93:{NFSU2_TR(0x68bc93);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B68bc96:{NFSU2_TR(0x68bc96);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68bc98:{NFSU2_TR(0x68bc98);
__builtin_memmove((R+8),(R+0),4);
}
B68bc9a:{NFSU2_TR(0x68bc9a);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xfffffffcull))));
}
B68bc9d:{NFSU2_TR(0x68bc9d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B68bc9e:{NFSU2_TR(0x68bc9e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
}
B68bca0:{NFSU2_TR(0x68bca0);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(R+24))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B68bca2:{NFSU2_TR(0x68bca2);
w4(R+24,u32(u32(r4(R+24))&u32(r4(R+8))));
}
B68bca4:{NFSU2_TR(0x68bca4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+24))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B68bca6:{NFSU2_TR(0x68bca6);
u8 U[9];
w4(U+5,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+24,shr<u32>(r4(R+24),u64(r4(U+5))));
w1(U+0,u8((r4(U+5))!=(u32(0x0ull))));
w1(U+1,u8((r4(R+24))==(u32(0x0ull))));
w1(U+2,u8(!(r1(U+0))));
w1(U+3,u8(u32(r1(U+2))&u32(r1(R+518))));
w1(U+4,u8(u32(r1(U+0))&u32(r1(U+1))));
w1(R+518,u8(u32(r1(U+3))|u32(r1(U+4))));
}
B68bca9:{NFSU2_TR(0x68bca9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68bcac:{NFSU2_TR(0x68bcac);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68bcaf:{NFSU2_TR(0x68bcaf);
if(r1(R+518)){{goto L68be4d;}}
}
B68bcb5:L68bcb5:{c.instructions+=3;NFSU2_TR(0x68bcb5);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B68bcb8:{NFSU2_TR(0x68bcb8);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffee0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B68bcbe:{NFSU2_TR(0x68bcbe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x68bcc3ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x68b19fu);}goto L68b19f;}
}
B68bcc3:L68bcc3:{c.instructions+=4;NFSU2_TR(0x68bcc3);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B68bcc5:{NFSU2_TR(0x68bcc5);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B68bcc8:{NFSU2_TR(0x68bcc8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B68bccb:{NFSU2_TR(0x68bccb);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L68be4d;}}
}
B68bcd1:L68bcd1:{c.instructions+=4;NFSU2_TR(0x68bcd1);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
__builtin_memmove((R+4736),(U+20),4);
__builtin_memmove((R+4740),(U+24),4);
__builtin_memmove((R+4744),(U+28),4);
__builtin_memmove((R+4748),(U+32),4);
}
B68bcd5:{NFSU2_TR(0x68bcd5);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
__builtin_memmove((R+4608),(U+20),4);
__builtin_memmove((R+4612),(U+24),4);
__builtin_memmove((R+4616),(U+28),4);
__builtin_memmove((R+4620),(U+32),4);
}
B68bcd9:{NFSU2_TR(0x68bcd9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68bcdc:{NFSU2_TR(0x68bcdc);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B68bcdf:L68bcdf:{c.instructions+=96;NFSU2_TR(0x68bcdf);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),8);
__builtin_memmove((R+4736),(U+0),8);
}
B68bce2:{NFSU2_TR(0x68bce2);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4608),(U+8),8);
}
B68bce6:{NFSU2_TR(0x68bce6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4864),(U+4),4);
w4(R+4868,u32(0x0ull));
w4(R+4872,u32(0x0ull));
w4(R+4876,u32(0x0ull));
}
B68bceb:{NFSU2_TR(0x68bceb);
__builtin_memmove((R+4672),(R+4736),4);
__builtin_memmove((R+4676),(R+4740),4);
__builtin_memmove((R+4680),(R+4744),4);
__builtin_memmove((R+4684),(R+4748),4);
}
B68bcee:{NFSU2_TR(0x68bcee);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4680),(U+8),8);
}
B68bcf2:{NFSU2_TR(0x68bcf2);
__builtin_memmove((R+4736),(R+4608),4);
__builtin_memmove((R+4740),(R+4612),4);
__builtin_memmove((R+4744),(R+4616),4);
__builtin_memmove((R+4748),(R+4620),4);
}
B68bcf5:{NFSU2_TR(0x68bcf5);
__builtin_memmove((R+4608),(R+4672),4);
__builtin_memmove((R+4612),(R+4676),4);
__builtin_memmove((R+4616),(R+4680),4);
__builtin_memmove((R+4620),(R+4684),4);
}
B68bcf8:{NFSU2_TR(0x68bcf8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B68bcfb:{NFSU2_TR(0x68bcfb);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),8);
__builtin_memmove((R+4744),(U+8),8);
}
B68bcff:{NFSU2_TR(0x68bcff);
u8 U[76];
__builtin_memmove((U+44),(R+4736),4);
__builtin_memmove((U+48),(R+4740),4);
__builtin_memmove((U+52),(R+4744),4);
__builtin_memmove((U+56),(R+4748),4);
__builtin_memmove((U+60),(R+4608),4);
__builtin_memmove((U+64),(R+4612),4);
__builtin_memmove((U+68),(R+4616),4);
__builtin_memmove((U+72),(R+4620),4);
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4608,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x2ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x2ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x2ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x2ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4612,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4616,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x2ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x2ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x2ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x2ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4620,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B68bd03:{NFSU2_TR(0x68bd03);
u8 U[76];
__builtin_memmove((U+44),(R+4736),4);
__builtin_memmove((U+48),(R+4740),4);
__builtin_memmove((U+52),(R+4744),4);
__builtin_memmove((U+56),(R+4748),4);
__builtin_memmove((U+60),(R+4672),4);
__builtin_memmove((U+64),(R+4676),4);
__builtin_memmove((U+68),(R+4680),4);
__builtin_memmove((U+72),(R+4684),4);
w1(U+0,u8((u8(0x1ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x1ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x1ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x1ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4672,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x3ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x3ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x3ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x3ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4676,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x1ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x1ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x1ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x1ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4680,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x3ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x3ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x3ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x3ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4684,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B68bd07:{NFSU2_TR(0x68bd07);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4736),(U+12),4);
w4(R+4740,u32(0x0ull));
w4(R+4744,u32(0x0ull));
w4(R+4748,u32(0x0ull));
}
B68bd0d:{NFSU2_TR(0x68bd0d);
__builtin_memmove((R+4800),(R+4672),4);
__builtin_memmove((R+4804),(R+4676),4);
__builtin_memmove((R+4808),(R+4680),4);
__builtin_memmove((R+4812),(R+4684),4);
}
B68bd10:{NFSU2_TR(0x68bd10);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4672),(U+12),4);
w4(R+4676,u32(0x0ull));
w4(R+4680,u32(0x0ull));
w4(R+4684,u32(0x0ull));
}
B68bd16:{NFSU2_TR(0x68bd16);
__builtin_memmove((R+4744),(R+4672),8);
}
B68bd19:{NFSU2_TR(0x68bd19);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4672),(U+12),4);
w4(R+4676,u32(0x0ull));
w4(R+4680,u32(0x0ull));
w4(R+4684,u32(0x0ull));
}
B68bd1f:{NFSU2_TR(0x68bd1f);
__builtin_memmove((R+4872),(R+4672),8);
}
B68bd22:{NFSU2_TR(0x68bd22);
__builtin_memmove((R+4672),(R+4864),4);
__builtin_memmove((R+4676),(R+4868),4);
__builtin_memmove((R+4680),(R+4872),4);
__builtin_memmove((R+4684),(R+4876),4);
}
B68bd25:{NFSU2_TR(0x68bd25);
u8 U[76];
__builtin_memmove((U+44),(R+4736),4);
__builtin_memmove((U+48),(R+4740),4);
__builtin_memmove((U+52),(R+4744),4);
__builtin_memmove((U+56),(R+4748),4);
__builtin_memmove((U+60),(R+4672),4);
__builtin_memmove((U+64),(R+4676),4);
__builtin_memmove((U+68),(R+4680),4);
__builtin_memmove((U+72),(R+4684),4);
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4672,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x2ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+60))));
w1(U+9,u8((u8(0x2ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+64))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x2ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+68))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x2ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+72))));
w4(R+4676,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x0ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x0ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x0ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x0ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4680,u32(u32(r4(U+31))+u32(r4(U+40))));
w1(U+0,u8((u8(0x2ull))==(u8(0x0ull))));
w4(U+1,u32(r1(U+0)));
w4(U+5,u32(u32(r4(U+1))*u32(r4(U+44))));
w1(U+9,u8((u8(0x2ull))==(u8(0x1ull))));
w4(U+10,u32(r1(U+9)));
w4(U+14,u32(u32(r4(U+10))*u32(r4(U+48))));
w4(U+18,u32(u32(r4(U+5))+u32(r4(U+14))));
w1(U+22,u8((u8(0x2ull))==(u8(0x2ull))));
w4(U+23,u32(r1(U+22)));
w4(U+27,u32(u32(r4(U+23))*u32(r4(U+52))));
w4(U+31,u32(u32(r4(U+18))+u32(r4(U+27))));
w1(U+35,u8((u8(0x2ull))==(u8(0x3ull))));
w4(U+36,u32(r1(U+35)));
w4(U+40,u32(u32(r4(U+36))*u32(r4(U+56))));
w4(R+4684,u32(u32(r4(U+31))+u32(r4(U+40))));
}
B68bd29:{NFSU2_TR(0x68bd29);
__builtin_memmove((R+4928),(R+4608),4);
__builtin_memmove((R+4932),(R+4612),4);
__builtin_memmove((R+4936),(R+4616),4);
__builtin_memmove((R+4940),(R+4620),4);
}
B68bd2c:{NFSU2_TR(0x68bd2c);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4928,b32(f32(r4(R+4928))*f32(r4(U+20))));
w4(R+4932,b32(f32(r4(R+4932))*f32(r4(U+24))));
w4(R+4936,b32(f32(r4(R+4936))*f32(r4(U+28))));
w4(R+4940,b32(f32(r4(R+4940))*f32(r4(U+32))));
}
B68bd33:{NFSU2_TR(0x68bd33);
__builtin_memmove((R+4864),(R+4800),4);
__builtin_memmove((R+4868),(R+4804),4);
__builtin_memmove((R+4872),(R+4808),4);
__builtin_memmove((R+4876),(R+4812),4);
}
B68bd36:{NFSU2_TR(0x68bd36);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4864,b32(f32(r4(R+4864))*f32(r4(U+20))));
w4(R+4868,b32(f32(r4(R+4868))*f32(r4(U+24))));
w4(R+4872,b32(f32(r4(R+4872))*f32(r4(U+28))));
w4(R+4876,b32(f32(r4(R+4876))*f32(r4(U+32))));
}
B68bd3d:{NFSU2_TR(0x68bd3d);
w4(R+4928,b32(f32(r4(R+4928))+f32(r4(R+4864))));
w4(R+4932,b32(f32(r4(R+4932))+f32(r4(R+4868))));
w4(R+4936,b32(f32(r4(R+4936))+f32(r4(R+4872))));
w4(R+4940,b32(f32(r4(R+4940))+f32(r4(R+4876))));
}
B68bd40:{NFSU2_TR(0x68bd40);
__builtin_memmove((R+4864),(R+4928),4);
__builtin_memmove((R+4868),(R+4932),4);
__builtin_memmove((R+4872),(R+4936),4);
__builtin_memmove((R+4876),(R+4940),4);
}
B68bd43:{NFSU2_TR(0x68bd43);
__builtin_memmove((R+4736),(R+4672),4);
__builtin_memmove((R+4740),(R+4676),4);
__builtin_memmove((R+4744),(R+4680),4);
__builtin_memmove((R+4748),(R+4684),4);
}
B68bd46:{NFSU2_TR(0x68bd46);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4736,b32(f32(r4(R+4736))*f32(r4(U+20))));
w4(R+4740,b32(f32(r4(R+4740))*f32(r4(U+24))));
w4(R+4744,b32(f32(r4(R+4744))*f32(r4(U+28))));
w4(R+4748,b32(f32(r4(R+4748))*f32(r4(U+32))));
}
B68bd4a:{NFSU2_TR(0x68bd4a);
w4(R+4864,b32(f32(r4(R+4864))+f32(r4(R+4736))));
w4(R+4868,b32(f32(r4(R+4868))+f32(r4(R+4740))));
w4(R+4872,b32(f32(r4(R+4872))+f32(r4(R+4744))));
w4(R+4876,b32(f32(r4(R+4876))+f32(r4(R+4748))));
}
B68bd4d:{NFSU2_TR(0x68bd4d);
__builtin_memmove((R+4736),(R+4864),4);
__builtin_memmove((R+4740),(R+4868),4);
__builtin_memmove((R+4744),(R+4872),4);
__builtin_memmove((R+4748),(R+4876),4);
}
B68bd50:{NFSU2_TR(0x68bd50);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4736,b32(f32(r4(R+4736))+f32(r4(U+20))));
w4(R+4740,b32(f32(r4(R+4740))+f32(r4(U+24))));
w4(R+4744,b32(f32(r4(R+4744))+f32(r4(U+28))));
w4(R+4748,b32(f32(r4(R+4748))+f32(r4(U+32))));
}
B68bd54:{NFSU2_TR(0x68bd54);
{wv<16>((R+4864),uo::rcpps<16>(rv<16>((R+4864)),rv<16>((R+4736))));}
}
B68bd57:{NFSU2_TR(0x68bd57);
__builtin_memmove((R+4928),(R+4864),4);
__builtin_memmove((R+4932),(R+4868),4);
__builtin_memmove((R+4936),(R+4872),4);
__builtin_memmove((R+4940),(R+4876),4);
}
B68bd5a:{NFSU2_TR(0x68bd5a);
w4(R+4928,b32(f32(r4(R+4928))*f32(r4(R+4736))));
w4(R+4932,b32(f32(r4(R+4932))*f32(r4(R+4740))));
w4(R+4936,b32(f32(r4(R+4936))*f32(r4(R+4744))));
w4(R+4940,b32(f32(r4(R+4940))*f32(r4(R+4748))));
}
B68bd5d:{NFSU2_TR(0x68bd5d);
w4(R+4928,b32(f32(r4(R+4928))*f32(r4(R+4864))));
w4(R+4932,b32(f32(r4(R+4932))*f32(r4(R+4868))));
w4(R+4936,b32(f32(r4(R+4936))*f32(r4(R+4872))));
w4(R+4940,b32(f32(r4(R+4940))*f32(r4(R+4876))));
}
B68bd60:{NFSU2_TR(0x68bd60);
__builtin_memmove((R+4736),(R+4864),4);
__builtin_memmove((R+4740),(R+4868),4);
__builtin_memmove((R+4744),(R+4872),4);
__builtin_memmove((R+4748),(R+4876),4);
}
B68bd63:{NFSU2_TR(0x68bd63);
w4(R+4736,b32(f32(r4(R+4736))+f32(r4(R+4864))));
w4(R+4740,b32(f32(r4(R+4740))+f32(r4(R+4868))));
w4(R+4744,b32(f32(r4(R+4744))+f32(r4(R+4872))));
w4(R+4748,b32(f32(r4(R+4748))+f32(r4(R+4876))));
}
B68bd66:{NFSU2_TR(0x68bd66);
__builtin_memmove((R+4864),(R+4736),4);
__builtin_memmove((R+4868),(R+4740),4);
__builtin_memmove((R+4872),(R+4744),4);
__builtin_memmove((R+4876),(R+4748),4);
}
B68bd69:{NFSU2_TR(0x68bd69);
w4(R+4864,b32(f32(r4(R+4864))-f32(r4(R+4928))));
w4(R+4868,b32(f32(r4(R+4868))-f32(r4(R+4932))));
w4(R+4872,b32(f32(r4(R+4872))-f32(r4(R+4936))));
w4(R+4876,b32(f32(r4(R+4876))-f32(r4(R+4940))));
}
B68bd6c:{NFSU2_TR(0x68bd6c);
__builtin_memmove((R+4992),(R+4608),4);
__builtin_memmove((R+4996),(R+4612),4);
__builtin_memmove((R+5000),(R+4616),4);
__builtin_memmove((R+5004),(R+4620),4);
}
B68bd6f:{NFSU2_TR(0x68bd6f);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffee0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4992,b32(f32(r4(R+4992))*f32(r4(U+20))));
w4(R+4996,b32(f32(r4(R+4996))*f32(r4(U+24))));
w4(R+5000,b32(f32(r4(R+5000))*f32(r4(U+28))));
w4(R+5004,b32(f32(r4(R+5004))*f32(r4(U+32))));
}
B68bd76:{NFSU2_TR(0x68bd76);
__builtin_memmove((R+4928),(R+4800),4);
__builtin_memmove((R+4932),(R+4804),4);
__builtin_memmove((R+4936),(R+4808),4);
__builtin_memmove((R+4940),(R+4812),4);
}
B68bd79:{NFSU2_TR(0x68bd79);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4928,b32(f32(r4(R+4928))*f32(r4(U+20))));
w4(R+4932,b32(f32(r4(R+4932))*f32(r4(U+24))));
w4(R+4936,b32(f32(r4(R+4936))*f32(r4(U+28))));
w4(R+4940,b32(f32(r4(R+4940))*f32(r4(U+32))));
}
B68bd80:{NFSU2_TR(0x68bd80);
w4(R+4992,b32(f32(r4(R+4992))+f32(r4(R+4928))));
w4(R+4996,b32(f32(r4(R+4996))+f32(r4(R+4932))));
w4(R+5000,b32(f32(r4(R+5000))+f32(r4(R+4936))));
w4(R+5004,b32(f32(r4(R+5004))+f32(r4(R+4940))));
}
B68bd83:{NFSU2_TR(0x68bd83);
__builtin_memmove((R+4736),(R+4672),4);
__builtin_memmove((R+4740),(R+4676),4);
__builtin_memmove((R+4744),(R+4680),4);
__builtin_memmove((R+4748),(R+4684),4);
}
B68bd86:{NFSU2_TR(0x68bd86);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4736,b32(f32(r4(R+4736))*f32(r4(U+20))));
w4(R+4740,b32(f32(r4(R+4740))*f32(r4(U+24))));
w4(R+4744,b32(f32(r4(R+4744))*f32(r4(U+28))));
w4(R+4748,b32(f32(r4(R+4748))*f32(r4(U+32))));
}
B68bd8d:{NFSU2_TR(0x68bd8d);
w4(R+4992,b32(f32(r4(R+4992))+f32(r4(R+4736))));
w4(R+4996,b32(f32(r4(R+4996))+f32(r4(R+4740))));
w4(R+5000,b32(f32(r4(R+5000))+f32(r4(R+4744))));
w4(R+5004,b32(f32(r4(R+5004))+f32(r4(R+4748))));
}
B68bd90:{NFSU2_TR(0x68bd90);
__builtin_memmove((R+5056),(R+4608),4);
__builtin_memmove((R+5060),(R+4612),4);
__builtin_memmove((R+5064),(R+4616),4);
__builtin_memmove((R+5068),(R+4620),4);
}
B68bd93:{NFSU2_TR(0x68bd93);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff00ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4608,b32(f32(r4(R+4608))*f32(r4(U+20))));
w4(R+4612,b32(f32(r4(R+4612))*f32(r4(U+24))));
w4(R+4616,b32(f32(r4(R+4616))*f32(r4(U+28))));
w4(R+4620,b32(f32(r4(R+4620))*f32(r4(U+32))));
}
B68bd9a:{NFSU2_TR(0x68bd9a);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffef0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+5056,b32(f32(r4(R+5056))*f32(r4(U+20))));
w4(R+5060,b32(f32(r4(R+5060))*f32(r4(U+24))));
w4(R+5064,b32(f32(r4(R+5064))*f32(r4(U+28))));
w4(R+5068,b32(f32(r4(R+5068))*f32(r4(U+32))));
}
B68bda1:{NFSU2_TR(0x68bda1);
__builtin_memmove((R+4736),(R+4992),4);
__builtin_memmove((R+4740),(R+4996),4);
__builtin_memmove((R+4744),(R+5000),4);
__builtin_memmove((R+4748),(R+5004),4);
}
B68bda4:{NFSU2_TR(0x68bda4);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4736,b32(f32(r4(R+4736))+f32(r4(U+20))));
w4(R+4740,b32(f32(r4(R+4740))+f32(r4(U+24))));
w4(R+4744,b32(f32(r4(R+4744))+f32(r4(U+28))));
w4(R+4748,b32(f32(r4(R+4748))+f32(r4(U+32))));
}
B68bda8:{NFSU2_TR(0x68bda8);
__builtin_memmove((R+4992),(R+4800),4);
__builtin_memmove((R+4996),(R+4804),4);
__builtin_memmove((R+5000),(R+4808),4);
__builtin_memmove((R+5004),(R+4812),4);
}
B68bdab:{NFSU2_TR(0x68bdab);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4800,b32(f32(r4(R+4800))*f32(r4(U+20))));
w4(R+4804,b32(f32(r4(R+4804))*f32(r4(U+24))));
w4(R+4808,b32(f32(r4(R+4808))*f32(r4(U+28))));
w4(R+4812,b32(f32(r4(R+4812))*f32(r4(U+32))));
}
B68bdb2:{NFSU2_TR(0x68bdb2);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4992,b32(f32(r4(R+4992))*f32(r4(U+20))));
w4(R+4996,b32(f32(r4(R+4996))*f32(r4(U+24))));
w4(R+5000,b32(f32(r4(R+5000))*f32(r4(U+28))));
w4(R+5004,b32(f32(r4(R+5004))*f32(r4(U+32))));
}
B68bdb9:{NFSU2_TR(0x68bdb9);
w4(R+4608,b32(f32(r4(R+4608))+f32(r4(R+4800))));
w4(R+4612,b32(f32(r4(R+4612))+f32(r4(R+4804))));
w4(R+4616,b32(f32(r4(R+4616))+f32(r4(R+4808))));
w4(R+4620,b32(f32(r4(R+4620))+f32(r4(R+4812))));
}
B68bdbc:{NFSU2_TR(0x68bdbc);
__builtin_memmove((R+4928),(R+4672),4);
__builtin_memmove((R+4932),(R+4676),4);
__builtin_memmove((R+4936),(R+4680),4);
__builtin_memmove((R+4940),(R+4684),4);
}
B68bdbf:{NFSU2_TR(0x68bdbf);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4928,b32(f32(r4(R+4928))*f32(r4(U+20))));
w4(R+4932,b32(f32(r4(R+4932))*f32(r4(U+24))));
w4(R+4936,b32(f32(r4(R+4936))*f32(r4(U+28))));
w4(R+4940,b32(f32(r4(R+4940))*f32(r4(U+32))));
}
B68bdc6:{NFSU2_TR(0x68bdc6);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4672,b32(f32(r4(R+4672))*f32(r4(U+20))));
w4(R+4676,b32(f32(r4(R+4676))*f32(r4(U+24))));
w4(R+4680,b32(f32(r4(R+4680))*f32(r4(U+28))));
w4(R+4684,b32(f32(r4(R+4684))*f32(r4(U+32))));
}
B68bdca:{NFSU2_TR(0x68bdca);
w4(R+4608,b32(f32(r4(R+4608))+f32(r4(R+4672))));
w4(R+4612,b32(f32(r4(R+4612))+f32(r4(R+4676))));
w4(R+4616,b32(f32(r4(R+4616))+f32(r4(R+4680))));
w4(R+4620,b32(f32(r4(R+4620))+f32(r4(R+4684))));
}
B68bdcd:{NFSU2_TR(0x68bdcd);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4608,b32(f32(r4(R+4608))+f32(r4(U+20))));
w4(R+4612,b32(f32(r4(R+4612))+f32(r4(U+24))));
w4(R+4616,b32(f32(r4(R+4616))+f32(r4(U+28))));
w4(R+4620,b32(f32(r4(R+4620))+f32(r4(U+32))));
}
B68bdd1:{NFSU2_TR(0x68bdd1);
w4(R+5056,b32(f32(r4(R+5056))+f32(r4(R+4992))));
w4(R+5060,b32(f32(r4(R+5060))+f32(r4(R+4996))));
w4(R+5064,b32(f32(r4(R+5064))+f32(r4(R+5000))));
w4(R+5068,b32(f32(r4(R+5068))+f32(r4(R+5004))));
}
B68bdd4:{NFSU2_TR(0x68bdd4);
w4(R+5056,b32(f32(r4(R+5056))+f32(r4(R+4928))));
w4(R+5060,b32(f32(r4(R+5060))+f32(r4(R+4932))));
w4(R+5064,b32(f32(r4(R+5064))+f32(r4(R+4936))));
w4(R+5068,b32(f32(r4(R+5068))+f32(r4(R+4940))));
}
B68bdd7:{NFSU2_TR(0x68bdd7);
w4(R+4736,b32(f32(r4(R+4736))*f32(r4(R+4864))));
w4(R+4740,b32(f32(r4(R+4740))*f32(r4(R+4868))));
w4(R+4744,b32(f32(r4(R+4744))*f32(r4(R+4872))));
w4(R+4748,b32(f32(r4(R+4748))*f32(r4(R+4876))));
}
B68bdda:{NFSU2_TR(0x68bdda);
__builtin_memmove((R+4928),(R+5056),4);
__builtin_memmove((R+4932),(R+5060),4);
__builtin_memmove((R+4936),(R+5064),4);
__builtin_memmove((R+4940),(R+5068),4);
}
B68bddd:{NFSU2_TR(0x68bddd);
u8 U[36];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),16);
__builtin_memmove((U+20),(U+4),16);
w4(R+4928,b32(f32(r4(R+4928))+f32(r4(U+20))));
w4(R+4932,b32(f32(r4(R+4932))+f32(r4(U+24))));
w4(R+4936,b32(f32(r4(R+4936))+f32(r4(U+28))));
w4(R+4940,b32(f32(r4(R+4940))+f32(r4(U+32))));
}
B68bde1:{NFSU2_TR(0x68bde1);
w4(R+4928,b32(f32(r4(R+4928))*f32(r4(R+4864))));
w4(R+4932,b32(f32(r4(R+4932))*f32(r4(R+4868))));
w4(R+4936,b32(f32(r4(R+4936))*f32(r4(R+4872))));
w4(R+4940,b32(f32(r4(R+4940))*f32(r4(R+4876))));
}
B68bde4:{NFSU2_TR(0x68bde4);
__builtin_memmove((R+4800),(R+4736),4);
__builtin_memmove((R+4804),(R+4740),4);
__builtin_memmove((R+4808),(R+4744),4);
__builtin_memmove((R+4812),(R+4748),4);
}
B68bde7:{NFSU2_TR(0x68bde7);
__builtin_memmove((R+4808),(R+4804),4);
__builtin_memmove((R+4812),(R+4932),4);
__builtin_memmove((R+4804),(R+4928),4);
}
B68bdea:{NFSU2_TR(0x68bdea);
u8 U[8];
__builtin_memmove((U+0),(R+4800),8);
s8_(u32(r4(R+28)),r8(U+0));
}
B68bded:{NFSU2_TR(0x68bded);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4808),8);
s8_(u32(r4(U+4)),r8(U+8));
}
B68bdf1:{NFSU2_TR(0x68bdf1);
w4(R+4608,b32(f32(r4(R+4608))*f32(r4(R+4864))));
w4(R+4612,b32(f32(r4(R+4612))*f32(r4(R+4868))));
w4(R+4616,b32(f32(r4(R+4616))*f32(r4(R+4872))));
w4(R+4620,b32(f32(r4(R+4620))*f32(r4(R+4876))));
}
B68bdf4:{NFSU2_TR(0x68bdf4);
__builtin_memmove((R+4672),(R+4608),4);
__builtin_memmove((R+4676),(R+4612),4);
__builtin_memmove((R+4680),(R+4616),4);
__builtin_memmove((R+4684),(R+4620),4);
}
B68bdf7:{NFSU2_TR(0x68bdf7);
__builtin_memmove((R+4680),(R+4676),4);
__builtin_memmove((R+4684),(R+4868),4);
__builtin_memmove((R+4676),(R+4864),4);
}
B68bdfa:{NFSU2_TR(0x68bdfa);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4672),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68bdff:{NFSU2_TR(0x68bdff);
__builtin_memmove((R+4800),(R+4672),4);
__builtin_memmove((R+4804),(R+4676),4);
__builtin_memmove((R+4808),(R+4680),4);
__builtin_memmove((R+4812),(R+4684),4);
}
B68be02:{NFSU2_TR(0x68be02);
__builtin_memmove((R+4800),(R+4680),8);
}
B68be05:{NFSU2_TR(0x68be05);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4800),4);
s4(u32(r4(U+8)),r4(U+12));
}
B68be0b:{NFSU2_TR(0x68be0b);
__builtin_memmove((R+4736),(R+4744),4);
__builtin_memmove((R+4740),(R+4936),4);
__builtin_memmove((R+4744),(R+4748),4);
__builtin_memmove((R+4748),(R+4940),4);
}
B68be0e:{NFSU2_TR(0x68be0e);
__builtin_memmove((R+4608),(R+4616),4);
__builtin_memmove((R+4612),(R+4872),4);
__builtin_memmove((R+4616),(R+4620),4);
__builtin_memmove((R+4620),(R+4876),4);
}
B68be11:{NFSU2_TR(0x68be11);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4736),8);
s8_(u32(r4(U+4)),r8(U+8));
}
B68be15:{NFSU2_TR(0x68be15);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B68be18:{NFSU2_TR(0x68be18);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4744),8);
s8_(u32(r4(U+4)),r8(U+8));
}
B68be1c:{NFSU2_TR(0x68be1c);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4608),4);
s4(u32(r4(U+8)),r4(U+12));
}
B68be22:{NFSU2_TR(0x68be22);
__builtin_memmove((R+4672),(R+4608),4);
__builtin_memmove((R+4676),(R+4612),4);
__builtin_memmove((R+4680),(R+4616),4);
__builtin_memmove((R+4684),(R+4620),4);
}
B68be25:{NFSU2_TR(0x68be25);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B68be28:{NFSU2_TR(0x68be28);
__builtin_memmove((R+4672),(R+4616),8);
}
B68be2b:{NFSU2_TR(0x68be2b);
__builtin_memmove((R+4608),(R+4672),4);
__builtin_memmove((R+4612),(R+4676),4);
__builtin_memmove((R+4616),(R+4680),4);
__builtin_memmove((R+4620),(R+4684),4);
}
B68be2e:{NFSU2_TR(0x68be2e);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4608),4);
s4(u32(r4(U+8)),r4(U+12));
}
B68be34:{NFSU2_TR(0x68be34);
__builtin_memmove((R+8),(R+0),4);
}
B68be36:{NFSU2_TR(0x68be36);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B68be39:{NFSU2_TR(0x68be39);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+8))));
}
B68be3b:{NFSU2_TR(0x68be3b);
__builtin_memmove((R+8),(R+4),4);
}
B68be3d:{NFSU2_TR(0x68be3d);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B68be40:{NFSU2_TR(0x68be40);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+8))));
}
B68be42:{NFSU2_TR(0x68be42);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B68be45:{NFSU2_TR(0x68be45);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x68bcdfu);}goto L68bcdf;}}
}
B68be4b:L68be4b:{c.instructions+=1;NFSU2_TR(0x68be4b);
{goto L68be50;}
}
B68be4d:L68be4d:{c.instructions+=1;NFSU2_TR(0x68be4d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B68be50:L68be50:{c.instructions+=3;NFSU2_TR(0x68be50);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B68be53:{NFSU2_TR(0x68be53);
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
B68be55:{NFSU2_TR(0x68be55);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L68be6f;}}
}
B68be57:L68be57:{c.instructions+=1;NFSU2_TR(0x68be57);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68be5a:L68be5a:{c.instructions+=4;NFSU2_TR(0x68be5a);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B68be5d:{NFSU2_TR(0x68be5d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68be5e:{NFSU2_TR(0x68be5e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68be5f:{NFSU2_TR(0x68be5f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x68be64ull));
TAIL_STATIC(0x68d531u,68d);
}
B68be64:L68be64:{c.instructions+=4;NFSU2_TR(0x68be64);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+24,u32(u32(r4(R+24))+u32(r4(U+4))));
}
B68be67:{NFSU2_TR(0x68be67);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,carry<u32>(r4(R+28),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+28,u32(u32(r4(R+28))+u32(r4(U+4))));
}
B68be6a:{NFSU2_TR(0x68be6a);
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
B68be6d:{NFSU2_TR(0x68be6d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x68be5au);}goto L68be5a;}}
}
B68be6f:L68be6f:{c.instructions+=8;NFSU2_TR(0x68be6f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B68be72:{NFSU2_TR(0x68be72);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B68be73:{NFSU2_TR(0x68be73);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B68be74:{NFSU2_TR(0x68be74);
__builtin_memmove((R+16),(R+20),4);
}
B68be76:{NFSU2_TR(0x68be76);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B68be77:{NFSU2_TR(0x68be77);
__builtin_memmove((R+16),(R+12),4);
}
B68be79:{NFSU2_TR(0x68be79);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B68be7a:{NFSU2_TR(0x68be7a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B68be7d:L68be7d:{c.instructions+=79;NFSU2_TR(0x68be7d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x1cull))));
}
B68be80:{NFSU2_TR(0x68be80);
w8(R+4464,u64(u64(r8(R+4464))^u64(r8(R+4464))));
}
B68be83:{NFSU2_TR(0x68be83);
__builtin_memmove((R+4448),gp(0x80acd0),8);
}
B68be8a:{NFSU2_TR(0x68be8a);
__builtin_memmove((R+4384),gp(0x80ace0),8);
}
B68be91:{NFSU2_TR(0x68be91);
w8(R+4448,u64(u64(r8(R+4448))&u64(r8(R+4352))));
}
B68be94:{NFSU2_TR(0x68be94);
__builtin_memmove((R+4400),(R+4448),8);
}
B68be97:{NFSU2_TR(0x68be97);
w8(R+4384,u64(u64(r8(R+4384))&u64(r8(R+4352))));
}
B68be9a:{NFSU2_TR(0x68be9a);
w8(R+4352,u64(u64(r8(R+4352))&u64(m8(0x80acc0))));
}
B68bea1:{NFSU2_TR(0x68bea1);
u8 U[12];
w1(U+0,u8((r2(R+4400))==(r2(R+4464))));
w2(U+1,u16(r1(U+0)));
w2(R+4400,u16(u32(r2(U+1))*u32(u16(0xffffull))));
w1(U+3,u8((r2(R+4402))==(r2(R+4466))));
w2(U+4,u16(r1(U+3)));
w2(R+4402,u16(u32(r2(U+4))*u32(u16(0xffffull))));
w1(U+6,u8((r2(R+4404))==(r2(R+4468))));
w2(U+7,u16(r1(U+6)));
w2(R+4404,u16(u32(r2(U+7))*u32(u16(0xffffull))));
w1(U+9,u8((r2(R+4406))==(r2(R+4470))));
w2(U+10,u16(r1(U+9)));
w2(R+4406,u16(u32(r2(U+10))*u32(u16(0xffffull))));
}
B68bea4:{NFSU2_TR(0x68bea4);
u8 U[8];
w8(U+0,u64(~u64(r8(R+4400))));
w8(R+4400,u64(u64(r8(U+0))&u64(m8(0x80acb0))));
}
B68beab:{NFSU2_TR(0x68beab);
w8(R+4384,u64(u64(r8(R+4384))|u64(r8(R+4400))));
}
B68beae:{NFSU2_TR(0x68beae);
__builtin_memmove((R+4400),(R+4464),8);
}
B68beb1:{NFSU2_TR(0x68beb1);
u8 U[21];
__builtin_memmove((U+9),gp(0x80acf0),8);
w1(U+17,u8(s16(r2(R+4448))<s16(r2(U+9))));
w2(U+0,u16(r1(U+17)));
w2(U+2,u16(u32(r2(U+0))*u32(r2(U+9))));
w1(U+4,u8(!(r1(U+17))));
w2(U+5,u16(r1(U+4)));
w2(U+7,u16(u32(r2(U+5))*u32(r2(R+4448))));
w2(R+4448,u16(u32(r2(U+2))|u32(r2(U+7))));
w1(U+18,u8(s16(r2(R+4450))<s16(r2(U+11))));
w2(U+0,u16(r1(U+18)));
w2(U+2,u16(u32(r2(U+0))*u32(r2(U+11))));
w1(U+4,u8(!(r1(U+18))));
w2(U+5,u16(r1(U+4)));
w2(U+7,u16(u32(r2(U+5))*u32(r2(R+4450))));
w2(R+4450,u16(u32(r2(U+2))|u32(r2(U+7))));
w1(U+19,u8(s16(r2(R+4452))<s16(r2(U+13))));
w2(U+0,u16(r1(U+19)));
w2(U+2,u16(u32(r2(U+0))*u32(r2(U+13))));
w1(U+4,u8(!(r1(U+19))));
w2(U+5,u16(r1(U+4)));
w2(U+7,u16(u32(r2(U+5))*u32(r2(R+4452))));
w2(R+4452,u16(u32(r2(U+2))|u32(r2(U+7))));
w1(U+20,u8(s16(r2(R+4454))<s16(r2(U+15))));
w2(U+0,u16(r1(U+20)));
w2(U+2,u16(u32(r2(U+0))*u32(r2(U+15))));
w1(U+4,u8(!(r1(U+20))));
w2(U+5,u16(r1(U+4)));
w2(U+7,u16(u32(r2(U+5))*u32(r2(R+4454))));
w2(R+4454,u16(u32(r2(U+2))|u32(r2(U+7))));
}
B68beb8:{NFSU2_TR(0x68beb8);
__builtin_memmove((R+4416),gp(0x80ad00),8);
}
B68bebf:{NFSU2_TR(0x68bebf);
__builtin_memmove((R+4400),(R+4448),8);
}
B68bec2:{NFSU2_TR(0x68bec2);
__builtin_memmove((R+4454),(R+4466),2);
__builtin_memmove((R+4452),(R+4450),2);
__builtin_memmove((R+4450),(R+4464),2);
}
B68bec5:{NFSU2_TR(0x68bec5);
__builtin_memmove((R+4400),(R+4404),2);
__builtin_memmove((R+4402),(R+4468),2);
__builtin_memmove((R+4404),(R+4406),2);
__builtin_memmove((R+4406),(R+4470),2);
}
B68bec8:{NFSU2_TR(0x68bec8);
__builtin_memmove((R+4432),(R+4464),8);
}
B68becb:{NFSU2_TR(0x68becb);
__builtin_memmove((R+4438),(R+4354),2);
__builtin_memmove((R+4436),(R+4434),2);
__builtin_memmove((R+4434),(R+4352),2);
}
B68bece:{NFSU2_TR(0x68bece);
__builtin_memmove((R+4464),(R+4468),2);
__builtin_memmove((R+4466),(R+4356),2);
__builtin_memmove((R+4468),(R+4470),2);
__builtin_memmove((R+4470),(R+4358),2);
}
B68bed1:{NFSU2_TR(0x68bed1);
w4(R+4448,u32(u32(r4(R+4448))+u32(r4(R+4416))));
w4(R+4452,u32(u32(r4(R+4452))+u32(r4(R+4420))));
}
B68bed4:{NFSU2_TR(0x68bed4);
w4(R+4400,u32(u32(r4(R+4400))+u32(r4(R+4416))));
w4(R+4404,u32(u32(r4(R+4404))+u32(r4(R+4420))));
}
B68bed7:{NFSU2_TR(0x68bed7);
w4(R+4448,shl<u32>(r4(R+4448),u64(u32(0xdull))));
w4(R+4452,shl<u32>(r4(R+4452),u64(u32(0xdull))));
}
B68bedb:{NFSU2_TR(0x68bedb);
w4(R+4400,shl<u32>(r4(R+4400),u64(u32(0xdull))));
w4(R+4404,shl<u32>(r4(R+4404),u64(u32(0xdull))));
}
B68bedf:{NFSU2_TR(0x68bedf);
w8(R+4448,u64(u64(r8(R+4448))|u64(r8(R+4432))));
}
B68bee2:{NFSU2_TR(0x68bee2);
w8(R+4400,u64(u64(r8(R+4400))|u64(r8(R+4464))));
}
B68bee5:{NFSU2_TR(0x68bee5);
u8 U[8];
__builtin_memmove((U+0),(R+4448),8);
s8_(u32(r4(R+16)),r8(U+0));
}
B68bee9:{NFSU2_TR(0x68bee9);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B68beee:{NFSU2_TR(0x68beee);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+16))),8);
__builtin_memmove((R+4672),(U+0),8);
}
B68bef2:{NFSU2_TR(0x68bef2);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4680),(U+4),8);
}
B68bef7:{NFSU2_TR(0x68bef7);
w8(R+4400,u64(u64(r8(R+4400))^u64(r8(R+4400))));
}
B68befa:{NFSU2_TR(0x68befa);
__builtin_memmove((R+4464),(R+4384),8);
}
B68befd:{NFSU2_TR(0x68befd);
__builtin_memmove((R+4390),(R+4402),2);
__builtin_memmove((R+4388),(R+4386),2);
__builtin_memmove((R+4386),(R+4400),2);
}
B68bf00:{NFSU2_TR(0x68bf00);
__builtin_memmove((R+4464),(R+4468),2);
__builtin_memmove((R+4466),(R+4404),2);
__builtin_memmove((R+4468),(R+4470),2);
__builtin_memmove((R+4470),(R+4406),2);
}
B68bf03:{NFSU2_TR(0x68bf03);
w4(R+4608,b32(float(s64(s32(r4(R+4384))))));
w4(R+4612,b32(float(s64(s32(r4(R+4388))))));
}
B68bf06:{NFSU2_TR(0x68bf06);
w4(R+4736,b32(float(s64(s32(r4(R+4464))))));
w4(R+4740,b32(float(s64(s32(r4(R+4468))))));
}
B68bf09:{NFSU2_TR(0x68bf09);
__builtin_memmove((R+4616),(R+4736),8);
}
B68bf0c:{NFSU2_TR(0x68bf0c);
w4(R+4608,b32(f32(r4(R+4608))*f32(r4(R+4672))));
w4(R+4612,b32(f32(r4(R+4612))*f32(r4(R+4676))));
w4(R+4616,b32(f32(r4(R+4616))*f32(r4(R+4680))));
w4(R+4620,b32(f32(r4(R+4620))*f32(r4(R+4684))));
}
B68bf0f:{NFSU2_TR(0x68bf0f);
__builtin_memmove((R+4352),(R+4368),8);
}
B68bf12:{NFSU2_TR(0x68bf12);
__builtin_memmove((R+4464),(R+4400),8);
}
B68bf15:{NFSU2_TR(0x68bf15);
__builtin_memmove((R+4448),gp(0x80acd0),8);
}
B68bf1c:{NFSU2_TR(0x68bf1c);
__builtin_memmove((R+4384),gp(0x80ace0),8);
}
B68bf23:{NFSU2_TR(0x68bf23);
w8(R+4448,u64(u64(r8(R+4448))&u64(r8(R+4352))));
}
B68bf26:{NFSU2_TR(0x68bf26);
__builtin_memmove((R+4400),(R+4448),8);
}
B68bf29:{NFSU2_TR(0x68bf29);
w8(R+4384,u64(u64(r8(R+4384))&u64(r8(R+4352))));
}
B68bf2c:{NFSU2_TR(0x68bf2c);
w8(R+4352,u64(u64(r8(R+4352))&u64(m8(0x80acc0))));
}
B68bf33:{NFSU2_TR(0x68bf33);
u8 U[12];
w1(U+0,u8((r2(R+4400))==(r2(R+4464))));
w2(U+1,u16(r1(U+0)));
w2(R+4400,u16(u32(r2(U+1))*u32(u16(0xffffull))));
w1(U+3,u8((r2(R+4402))==(r2(R+4466))));
w2(U+4,u16(r1(U+3)));
w2(R+4402,u16(u32(r2(U+4))*u32(u16(0xffffull))));
w1(U+6,u8((r2(R+4404))==(r2(R+4468))));
w2(U+7,u16(r1(U+6)));
w2(R+4404,u16(u32(r2(U+7))*u32(u16(0xffffull))));
w1(U+9,u8((r2(R+4406))==(r2(R+4470))));
w2(U+10,u16(r1(U+9)));
w2(R+4406,u16(u32(r2(U+10))*u32(u16(0xffffull))));
}
B68bf36:{NFSU2_TR(0x68bf36);
u8 U[8];
w8(U+0,u64(~u64(r8(R+4400))));
w8(R+4400,u64(u64(r8(U+0))&u64(m8(0x80acb0))));
}
B68bf3d:{NFSU2_TR(0x68bf3d);
w8(R+4384,u64(u64(r8(R+4384))|u64(r8(R+4400))));
}
B68bf40:{NFSU2_TR(0x68bf40);
__builtin_memmove((R+4400),(R+4464),8);
}
B68bf43:{NFSU2_TR(0x68bf43);
u8 U[21];
__builtin_memmove((U+9),gp(0x80acf0),8);
w1(U+17,u8(s16(r2(R+4448))<s16(r2(U+9))));
w2(U+0,u16(r1(U+17)));
w2(U+2,u16(u32(r2(U+0))*u32(r2(U+9))));
w1(U+4,u8(!(r1(U+17))));
w2(U+5,u16(r1(U+4)));
w2(U+7,u16(u32(r2(U+5))*u32(r2(R+4448))));
w2(R+4448,u16(u32(r2(U+2))|u32(r2(U+7))));
w1(U+18,u8(s16(r2(R+4450))<s16(r2(U+11))));
w2(U+0,u16(r1(U+18)));
w2(U+2,u16(u32(r2(U+0))*u32(r2(U+11))));
w1(U+4,u8(!(r1(U+18))));
w2(U+5,u16(r1(U+4)));
w2(U+7,u16(u32(r2(U+5))*u32(r2(R+4450))));
w2(R+4450,u16(u32(r2(U+2))|u32(r2(U+7))));
w1(U+19,u8(s16(r2(R+4452))<s16(r2(U+13))));
w2(U+0,u16(r1(U+19)));
w2(U+2,u16(u32(r2(U+0))*u32(r2(U+13))));
w1(U+4,u8(!(r1(U+19))));
w2(U+5,u16(r1(U+4)));
w2(U+7,u16(u32(r2(U+5))*u32(r2(R+4452))));
w2(R+4452,u16(u32(r2(U+2))|u32(r2(U+7))));
w1(U+20,u8(s16(r2(R+4454))<s16(r2(U+15))));
w2(U+0,u16(r1(U+20)));
w2(U+2,u16(u32(r2(U+0))*u32(r2(U+15))));
w1(U+4,u8(!(r1(U+20))));
w2(U+5,u16(r1(U+4)));
w2(U+7,u16(u32(r2(U+5))*u32(r2(R+4454))));
w2(R+4454,u16(u32(r2(U+2))|u32(r2(U+7))));
}
B68bf4a:{NFSU2_TR(0x68bf4a);
__builtin_memmove((R+4416),gp(0x80ad00),8);
}
B68bf51:{NFSU2_TR(0x68bf51);
__builtin_memmove((R+4400),(R+4448),8);
}
B68bf54:{NFSU2_TR(0x68bf54);
__builtin_memmove((R+4454),(R+4466),2);
__builtin_memmove((R+4452),(R+4450),2);
__builtin_memmove((R+4450),(R+4464),2);
}
B68bf57:{NFSU2_TR(0x68bf57);
__builtin_memmove((R+4400),(R+4404),2);
__builtin_memmove((R+4402),(R+4468),2);
__builtin_memmove((R+4404),(R+4406),2);
__builtin_memmove((R+4406),(R+4470),2);
}
B68bf5a:{NFSU2_TR(0x68bf5a);
__builtin_memmove((R+4432),(R+4464),8);
}
B68bf5d:{NFSU2_TR(0x68bf5d);
__builtin_memmove((R+4438),(R+4354),2);
__builtin_memmove((R+4436),(R+4434),2);
__builtin_memmove((R+4434),(R+4352),2);
}
B68bf60:{NFSU2_TR(0x68bf60);
__builtin_memmove((R+4464),(R+4468),2);
__builtin_memmove((R+4466),(R+4356),2);
__builtin_memmove((R+4468),(R+4470),2);
__builtin_memmove((R+4470),(R+4358),2);
}
B68bf63:{NFSU2_TR(0x68bf63);
w4(R+4448,u32(u32(r4(R+4448))+u32(r4(R+4416))));
w4(R+4452,u32(u32(r4(R+4452))+u32(r4(R+4420))));
}
B68bf66:{NFSU2_TR(0x68bf66);
w4(R+4400,u32(u32(r4(R+4400))+u32(r4(R+4416))));
w4(R+4404,u32(u32(r4(R+4404))+u32(r4(R+4420))));
}
B68bf69:{NFSU2_TR(0x68bf69);
w4(R+4448,shl<u32>(r4(R+4448),u64(u32(0xdull))));
w4(R+4452,shl<u32>(r4(R+4452),u64(u32(0xdull))));
}
B68bf6d:{NFSU2_TR(0x68bf6d);
w4(R+4400,shl<u32>(r4(R+4400),u64(u32(0xdull))));
w4(R+4404,shl<u32>(r4(R+4404),u64(u32(0xdull))));
}
B68bf71:{NFSU2_TR(0x68bf71);
w8(R+4448,u64(u64(r8(R+4448))|u64(r8(R+4432))));
}
B68bf74:{NFSU2_TR(0x68bf74);
w8(R+4400,u64(u64(r8(R+4400))|u64(r8(R+4464))));
}
B68bf77:{NFSU2_TR(0x68bf77);
u8 U[8];
__builtin_memmove((U+0),(R+4448),8);
s8_(u32(r4(R+16)),r8(U+0));
}
B68bf7b:{NFSU2_TR(0x68bf7b);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4400),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B68bf80:{NFSU2_TR(0x68bf80);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+16))),8);
__builtin_memmove((R+4672),(U+0),8);
}
B68bf84:{NFSU2_TR(0x68bf84);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4680),(U+4),8);
}
B68bf89:{NFSU2_TR(0x68bf89);
w8(R+4400,u64(u64(r8(R+4400))^u64(r8(R+4400))));
}
B68bf8c:{NFSU2_TR(0x68bf8c);
__builtin_memmove((R+4464),(R+4384),8);
}
B68bf8f:{NFSU2_TR(0x68bf8f);
__builtin_memmove((R+4390),(R+4402),2);
__builtin_memmove((R+4388),(R+4386),2);
__builtin_memmove((R+4386),(R+4400),2);
}
B68bf92:{NFSU2_TR(0x68bf92);
__builtin_memmove((R+4464),(R+4468),2);
__builtin_memmove((R+4466),(R+4404),2);
__builtin_memmove((R+4468),(R+4470),2);
__builtin_memmove((R+4470),(R+4406),2);
}
B68bf95:{NFSU2_TR(0x68bf95);
w4(R+4800,b32(float(s64(s32(r4(R+4384))))));
w4(R+4804,b32(float(s64(s32(r4(R+4388))))));
}
B68bf98:{NFSU2_TR(0x68bf98);
w4(R+4736,b32(float(s64(s32(r4(R+4464))))));
w4(R+4740,b32(float(s64(s32(r4(R+4468))))));
}
B68bf9b:{NFSU2_TR(0x68bf9b);
__builtin_memmove((R+4808),(R+4736),8);
}
B68bf9e:{NFSU2_TR(0x68bf9e);
w4(R+4800,b32(f32(r4(R+4800))*f32(r4(R+4672))));
w4(R+4804,b32(f32(r4(R+4804))*f32(r4(R+4676))));
w4(R+4808,b32(f32(r4(R+4808))*f32(r4(R+4680))));
w4(R+4812,b32(f32(r4(R+4812))*f32(r4(R+4684))));
}
B68bfa1:{NFSU2_TR(0x68bfa1);
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
B68bfa4:{NFSU2_TR(0x68bfa4);
w2(R+4260,u16(0xffffull));
}
B68bfa6:{NFSU2_TR(0x68bfa6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B68bfa7:L68bfa7:{c.instructions+=11;NFSU2_TR(0x68bfa7);
__builtin_memmove((R+28),(R+28),4);
}
B68bfa9:{NFSU2_TR(0x68bfa9);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68bfaa:{NFSU2_TR(0x68bfaa);
__builtin_memmove((R+20),(R+16),4);
}
B68bfac:{NFSU2_TR(0x68bfac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B68bfaf:{NFSU2_TR(0x68bfaf);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x8ull))));
}
B68bfb3:{NFSU2_TR(0x68bfb3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68bfb4:{NFSU2_TR(0x68bfb4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68bfb5:{NFSU2_TR(0x68bfb5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B68bfb6:{NFSU2_TR(0x68bfb6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B68bfb9:{NFSU2_TR(0x68bfb9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68bfbc:{NFSU2_TR(0x68bfbc);
if(r1(R+512)){TAIL_STATIC(0x68c00au,68c);}
}
B68bfbe:L68bfbe:{c.instructions+=6;NFSU2_TR(0x68bfbe);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B68bfc1:{NFSU2_TR(0x68bfc1);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0xfffffff8ull))));
}
B68bfc4:{NFSU2_TR(0x68bfc4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B68bfc7:{NFSU2_TR(0x68bfc7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B68bfca:{NFSU2_TR(0x68bfca);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B68bfcd:{NFSU2_TR(0x68bfcd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B68bfd0:L68bfd0:{c.instructions+=4;NFSU2_TR(0x68bfd0);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),8);
__builtin_memmove((R+4352),(U+0),8);
}
B68bfd3:{NFSU2_TR(0x68bfd3);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),8);
__builtin_memmove((R+4368),(U+4),8);
}
B68bfd7:{NFSU2_TR(0x68bfd7);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
}
B68bfda:{NFSU2_TR(0x68bfda);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x68bfdfull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x68be7du);}goto L68be7d;}
}
B68bfdf:L68bfdf:{c.instructions+=7;NFSU2_TR(0x68bfdf);
u8 U[8];
__builtin_memmove((U+0),(R+4608),8);
s8_(u32(r4(R+4)),r8(U+0));
}
B68bfe2:{NFSU2_TR(0x68bfe2);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4616),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B68bfe6:{NFSU2_TR(0x68bfe6);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4800),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B68bfea:{NFSU2_TR(0x68bfea);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4808),8);
s8_(u32(r4(U+0)),r8(U+4));
}
B68bfee:{NFSU2_TR(0x68bfee);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x20ull))));
}
B68bff1:{NFSU2_TR(0x68bff1);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x8ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B68bff4:{NFSU2_TR(0x68bff4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x68bfd0u);}goto L68bfd0;}}
}
B68bff6:L68bff6:{c.instructions+=4;NFSU2_TR(0x68bff6);
w2(R+4260,u16(0xffffull));
}
B68bff8:{NFSU2_TR(0x68bff8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B68bffb:{NFSU2_TR(0x68bffb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(r4(R+24))));
s4(u32(r4(U+0)),r4(U+4));
}
B68bffe:{NFSU2_TR(0x68bffe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
TAIL_STATIC(0x68c001u,68c);
}
XIT:NFSU2_TR_EXIT(0x68b,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
