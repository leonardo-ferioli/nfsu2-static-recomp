#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
#define TAIL_STATIC(T,PG) EXIT(T)
#define TAIL_DYNAMIC(T) EXIT(T)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
// code range sha256 1cfa22c1882b32c1d5b3e918fd8fa23f78ab030e69deed29641f47b7334fbb8d, 4504 bytes, 1392 instructions
__attribute__((noinline)) static u32 audio_1cfa22c1882b_body(u8* __restrict R,Cpu& c,u32 code){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc-code){
case 0x0:goto L20000000;
case 0x1:c.instructions+=3;goto B20000001;
case 0x5:c.instructions+=2;goto B20000005;
case 0x6:c.instructions+=1;goto B20000006;
case 0xb:goto L2000000b;
case 0x11:c.instructions+=3;goto B20000011;
case 0x14:c.instructions+=2;goto B20000014;
case 0x15:c.instructions+=1;goto B20000015;
case 0x1a:goto L2000001a;
case 0x20:c.instructions+=62;goto B20000020;
case 0x23:c.instructions+=61;goto B20000023;
case 0x29:c.instructions+=60;goto B20000029;
case 0x2c:c.instructions+=59;goto B2000002c;
case 0x32:c.instructions+=58;goto B20000032;
case 0x35:c.instructions+=57;goto B20000035;
case 0x3b:c.instructions+=56;goto B2000003b;
case 0x3e:c.instructions+=55;goto B2000003e;
case 0x44:c.instructions+=54;goto B20000044;
case 0x47:c.instructions+=53;goto B20000047;
case 0x4d:c.instructions+=52;goto B2000004d;
case 0x50:c.instructions+=51;goto B20000050;
case 0x56:c.instructions+=50;goto B20000056;
case 0x59:c.instructions+=49;goto B20000059;
case 0x5f:c.instructions+=48;goto B2000005f;
case 0x62:c.instructions+=47;goto B20000062;
case 0x68:c.instructions+=46;goto B20000068;
case 0x6b:c.instructions+=45;goto B2000006b;
case 0x71:c.instructions+=44;goto B20000071;
case 0x74:c.instructions+=43;goto B20000074;
case 0x7a:c.instructions+=42;goto B2000007a;
case 0x7d:c.instructions+=41;goto B2000007d;
case 0x83:c.instructions+=40;goto B20000083;
case 0x86:c.instructions+=39;goto B20000086;
case 0x8c:c.instructions+=38;goto B2000008c;
case 0x8f:c.instructions+=37;goto B2000008f;
case 0x95:c.instructions+=36;goto B20000095;
case 0x9b:c.instructions+=35;goto B2000009b;
case 0xa1:c.instructions+=34;goto B200000a1;
case 0xa7:c.instructions+=33;goto B200000a7;
case 0xad:c.instructions+=32;goto B200000ad;
case 0xb3:c.instructions+=31;goto B200000b3;
case 0xb9:c.instructions+=30;goto B200000b9;
case 0xbf:c.instructions+=29;goto B200000bf;
case 0xc2:c.instructions+=28;goto B200000c2;
case 0xc8:c.instructions+=27;goto B200000c8;
case 0xcb:c.instructions+=26;goto B200000cb;
case 0xd1:c.instructions+=25;goto B200000d1;
case 0xd4:c.instructions+=24;goto B200000d4;
case 0xda:c.instructions+=23;goto B200000da;
case 0xe0:c.instructions+=22;goto B200000e0;
case 0xe6:c.instructions+=21;goto B200000e6;
case 0xec:c.instructions+=20;goto B200000ec;
case 0xef:c.instructions+=19;goto B200000ef;
case 0xf5:c.instructions+=18;goto B200000f5;
case 0xfb:c.instructions+=17;goto B200000fb;
case 0x101:c.instructions+=16;goto B20000101;
case 0x107:c.instructions+=15;goto B20000107;
case 0x10a:c.instructions+=14;goto B2000010a;
case 0x110:c.instructions+=13;goto B20000110;
case 0x116:c.instructions+=12;goto B20000116;
case 0x11c:c.instructions+=11;goto B2000011c;
case 0x122:c.instructions+=10;goto B20000122;
case 0x125:c.instructions+=9;goto B20000125;
case 0x12b:c.instructions+=8;goto B2000012b;
case 0x12e:c.instructions+=7;goto B2000012e;
case 0x134:c.instructions+=6;goto B20000134;
case 0x137:c.instructions+=5;goto B20000137;
case 0x13d:c.instructions+=4;goto B2000013d;
case 0x140:c.instructions+=3;goto B20000140;
case 0x143:c.instructions+=2;goto B20000143;
case 0x144:c.instructions+=1;goto B20000144;
case 0x149:goto L20000149;
case 0x14f:c.instructions+=4;goto B2000014f;
case 0x155:c.instructions+=3;goto B20000155;
case 0x158:c.instructions+=2;goto B20000158;
case 0x159:c.instructions+=1;goto B20000159;
case 0x15e:goto L2000015e;
case 0x161:c.instructions+=4;goto B20000161;
case 0x164:c.instructions+=3;goto B20000164;
case 0x167:c.instructions+=2;goto B20000167;
case 0x168:c.instructions+=1;goto B20000168;
case 0x16d:goto L2000016d;
case 0x173:c.instructions+=3;goto B20000173;
case 0x176:c.instructions+=2;goto B20000176;
case 0x177:c.instructions+=1;goto B20000177;
case 0x17c:goto L2000017c;
case 0x182:c.instructions+=7;goto B20000182;
case 0x185:c.instructions+=6;goto B20000185;
case 0x187:c.instructions+=5;goto B20000187;
case 0x18a:c.instructions+=4;goto B2000018a;
case 0x18d:c.instructions+=3;goto B2000018d;
case 0x190:c.instructions+=2;goto B20000190;
case 0x191:c.instructions+=1;goto B20000191;
case 0x196:goto L20000196;
case 0x19c:c.instructions+=3;goto B2000019c;
case 0x19f:c.instructions+=2;goto B2000019f;
case 0x1a0:c.instructions+=1;goto B200001a0;
case 0x1a5:goto L200001a5;
case 0x1a8:c.instructions+=3;goto B200001a8;
case 0x1ab:c.instructions+=2;goto B200001ab;
case 0x1ac:c.instructions+=1;goto B200001ac;
case 0x1b1:goto L200001b1;
case 0x1b4:c.instructions+=3;goto B200001b4;
case 0x1b7:c.instructions+=2;goto B200001b7;
case 0x1b8:c.instructions+=1;goto B200001b8;
case 0x1bd:goto L200001bd;
case 0x1c3:c.instructions+=6;goto B200001c3;
case 0x1c9:c.instructions+=5;goto B200001c9;
case 0x1cf:c.instructions+=4;goto B200001cf;
case 0x1d5:c.instructions+=3;goto B200001d5;
case 0x1d8:c.instructions+=2;goto B200001d8;
case 0x1d9:c.instructions+=1;goto B200001d9;
case 0x1de:goto L200001de;
case 0x1e1:c.instructions+=31;goto B200001e1;
case 0x1e7:c.instructions+=30;goto B200001e7;
case 0x1ed:c.instructions+=29;goto B200001ed;
case 0x1f3:c.instructions+=28;goto B200001f3;
case 0x1f9:c.instructions+=27;goto B200001f9;
case 0x1ff:c.instructions+=26;goto B200001ff;
case 0x205:c.instructions+=25;goto B20000205;
case 0x20b:c.instructions+=24;goto B2000020b;
case 0x211:c.instructions+=23;goto B20000211;
case 0x217:c.instructions+=22;goto B20000217;
case 0x21d:c.instructions+=21;goto B2000021d;
case 0x223:c.instructions+=20;goto B20000223;
case 0x229:c.instructions+=19;goto B20000229;
case 0x22f:c.instructions+=18;goto B2000022f;
case 0x235:c.instructions+=17;goto B20000235;
case 0x23b:c.instructions+=16;goto B2000023b;
case 0x241:c.instructions+=15;goto B20000241;
case 0x247:c.instructions+=14;goto B20000247;
case 0x24d:c.instructions+=13;goto B2000024d;
case 0x253:c.instructions+=12;goto B20000253;
case 0x259:c.instructions+=11;goto B20000259;
case 0x25f:c.instructions+=10;goto B2000025f;
case 0x265:c.instructions+=9;goto B20000265;
case 0x26b:c.instructions+=8;goto B2000026b;
case 0x271:c.instructions+=7;goto B20000271;
case 0x274:c.instructions+=6;goto B20000274;
case 0x276:c.instructions+=5;goto B20000276;
case 0x27a:c.instructions+=4;goto B2000027a;
case 0x27d:c.instructions+=3;goto B2000027d;
case 0x280:c.instructions+=2;goto B20000280;
case 0x281:c.instructions+=1;goto B20000281;
case 0x286:goto L20000286;
case 0x289:c.instructions+=3;goto B20000289;
case 0x28c:c.instructions+=2;goto B2000028c;
case 0x28d:c.instructions+=1;goto B2000028d;
case 0x292:goto L20000292;
case 0x295:c.instructions+=3;goto B20000295;
case 0x298:c.instructions+=2;goto B20000298;
case 0x299:c.instructions+=1;goto B20000299;
case 0x29e:goto L2000029e;
case 0x2a1:c.instructions+=19;goto B200002a1;
case 0x2a4:c.instructions+=18;goto B200002a4;
case 0x2a7:c.instructions+=17;goto B200002a7;
case 0x2aa:c.instructions+=16;goto B200002aa;
case 0x2ad:c.instructions+=15;goto B200002ad;
case 0x2b0:c.instructions+=14;goto B200002b0;
case 0x2b3:c.instructions+=13;goto B200002b3;
case 0x2b6:c.instructions+=12;goto B200002b6;
case 0x2b9:c.instructions+=11;goto B200002b9;
case 0x2bc:c.instructions+=10;goto B200002bc;
case 0x2be:c.instructions+=9;goto B200002be;
case 0x2c2:c.instructions+=8;goto B200002c2;
case 0x2c8:c.instructions+=7;goto B200002c8;
case 0x2cb:c.instructions+=6;goto B200002cb;
case 0x2cd:c.instructions+=5;goto B200002cd;
case 0x2d1:c.instructions+=4;goto B200002d1;
case 0x2d7:c.instructions+=3;goto B200002d7;
case 0x2da:c.instructions+=2;goto B200002da;
case 0x2db:c.instructions+=1;goto B200002db;
case 0x2e0:goto L200002e0;
case 0x2e6:c.instructions+=3;goto B200002e6;
case 0x2e9:c.instructions+=2;goto B200002e9;
case 0x2ea:c.instructions+=1;goto B200002ea;
case 0x2ef:goto L200002ef;
case 0x2f5:c.instructions+=7;goto B200002f5;
case 0x2f8:c.instructions+=6;goto B200002f8;
case 0x2fa:c.instructions+=5;goto B200002fa;
case 0x2fe:c.instructions+=4;goto B200002fe;
case 0x304:c.instructions+=3;goto B20000304;
case 0x307:c.instructions+=2;goto B20000307;
case 0x308:c.instructions+=1;goto B20000308;
case 0x30d:goto L2000030d;
case 0x313:c.instructions+=7;goto B20000313;
case 0x316:c.instructions+=6;goto B20000316;
case 0x318:c.instructions+=5;goto B20000318;
case 0x31c:c.instructions+=4;goto B2000031c;
case 0x322:c.instructions+=3;goto B20000322;
case 0x325:c.instructions+=2;goto B20000325;
case 0x326:c.instructions+=1;goto B20000326;
case 0x32b:goto L2000032b;
case 0x32e:c.instructions+=2;goto B2000032e;
case 0x32f:c.instructions+=1;goto B2000032f;
case 0x334:goto L20000334;
case 0x337:c.instructions+=2;goto B20000337;
case 0x338:c.instructions+=1;goto B20000338;
case 0x33d:goto L2000033d;
case 0x343:c.instructions+=3;goto B20000343;
case 0x346:c.instructions+=2;goto B20000346;
case 0x347:c.instructions+=1;goto B20000347;
case 0x34c:goto L2000034c;
case 0x352:c.instructions+=3;goto B20000352;
case 0x355:c.instructions+=2;goto B20000355;
case 0x356:c.instructions+=1;goto B20000356;
case 0x35b:goto L2000035b;
case 0x361:c.instructions+=3;goto B20000361;
case 0x364:c.instructions+=2;goto B20000364;
case 0x365:c.instructions+=1;goto B20000365;
case 0x36a:goto L2000036a;
case 0x370:c.instructions+=3;goto B20000370;
case 0x373:c.instructions+=2;goto B20000373;
case 0x374:c.instructions+=1;goto B20000374;
case 0x379:goto L20000379;
case 0x37f:c.instructions+=3;goto B2000037f;
case 0x382:c.instructions+=2;goto B20000382;
case 0x383:c.instructions+=1;goto B20000383;
case 0x388:goto L20000388;
case 0x38e:c.instructions+=3;goto B2000038e;
case 0x391:c.instructions+=2;goto B20000391;
case 0x392:c.instructions+=1;goto B20000392;
case 0x397:goto L20000397;
case 0x39d:c.instructions+=3;goto B2000039d;
case 0x3a0:c.instructions+=2;goto B200003a0;
case 0x3a1:c.instructions+=1;goto B200003a1;
case 0x3a6:goto L200003a6;
case 0x3ac:c.instructions+=4;goto B200003ac;
case 0x3af:c.instructions+=3;goto B200003af;
case 0x3b2:c.instructions+=2;goto B200003b2;
case 0x3b3:c.instructions+=1;goto B200003b3;
case 0x3b8:goto L200003b8;
case 0x3be:c.instructions+=3;goto B200003be;
case 0x3c1:c.instructions+=2;goto B200003c1;
case 0x3c2:c.instructions+=1;goto B200003c2;
case 0x3c7:goto L200003c7;
case 0x3cd:c.instructions+=4;goto B200003cd;
case 0x3d0:c.instructions+=3;goto B200003d0;
case 0x3d3:c.instructions+=2;goto B200003d3;
case 0x3d4:c.instructions+=1;goto B200003d4;
case 0x3d9:goto L200003d9;
case 0x3df:c.instructions+=3;goto B200003df;
case 0x3e2:c.instructions+=2;goto B200003e2;
case 0x3e3:c.instructions+=1;goto B200003e3;
case 0x3e8:goto L200003e8;
case 0x3ee:c.instructions+=5;goto B200003ee;
case 0x3f1:c.instructions+=4;goto B200003f1;
case 0x3f4:c.instructions+=3;goto B200003f4;
case 0x3f7:c.instructions+=2;goto B200003f7;
case 0x3f8:c.instructions+=1;goto B200003f8;
case 0x3fd:goto L200003fd;
case 0x403:c.instructions+=3;goto B20000403;
case 0x406:c.instructions+=2;goto B20000406;
case 0x407:c.instructions+=1;goto B20000407;
case 0x40c:goto L2000040c;
case 0x412:c.instructions+=4;goto B20000412;
case 0x415:c.instructions+=3;goto B20000415;
case 0x418:c.instructions+=2;goto B20000418;
case 0x419:c.instructions+=1;goto B20000419;
case 0x41e:goto L2000041e;
case 0x424:c.instructions+=3;goto B20000424;
case 0x427:c.instructions+=2;goto B20000427;
case 0x428:c.instructions+=1;goto B20000428;
case 0x42d:goto L2000042d;
case 0x433:c.instructions+=3;goto B20000433;
case 0x436:c.instructions+=2;goto B20000436;
case 0x437:c.instructions+=1;goto B20000437;
case 0x43c:goto L2000043c;
case 0x43f:c.instructions+=3;goto B2000043f;
case 0x442:c.instructions+=2;goto B20000442;
case 0x443:c.instructions+=1;goto B20000443;
case 0x448:goto L20000448;
case 0x44b:c.instructions+=3;goto B2000044b;
case 0x44e:c.instructions+=2;goto B2000044e;
case 0x44f:c.instructions+=1;goto B2000044f;
case 0x454:goto L20000454;
case 0x457:c.instructions+=3;goto B20000457;
case 0x45a:c.instructions+=2;goto B2000045a;
case 0x45b:c.instructions+=1;goto B2000045b;
case 0x460:goto L20000460;
case 0x463:c.instructions+=3;goto B20000463;
case 0x466:c.instructions+=2;goto B20000466;
case 0x467:c.instructions+=1;goto B20000467;
case 0x46c:goto L2000046c;
case 0x46f:c.instructions+=3;goto B2000046f;
case 0x472:c.instructions+=2;goto B20000472;
case 0x473:c.instructions+=1;goto B20000473;
case 0x478:goto L20000478;
case 0x47b:c.instructions+=3;goto B2000047b;
case 0x47e:c.instructions+=2;goto B2000047e;
case 0x47f:c.instructions+=1;goto B2000047f;
case 0x484:goto L20000484;
case 0x487:c.instructions+=3;goto B20000487;
case 0x48a:c.instructions+=2;goto B2000048a;
case 0x48b:c.instructions+=1;goto B2000048b;
case 0x490:goto L20000490;
case 0x496:c.instructions+=10;goto B20000496;
case 0x49c:c.instructions+=9;goto B2000049c;
case 0x4a2:c.instructions+=8;goto B200004a2;
case 0x4a8:c.instructions+=7;goto B200004a8;
case 0x4ae:c.instructions+=6;goto B200004ae;
case 0x4b4:c.instructions+=5;goto B200004b4;
case 0x4ba:c.instructions+=4;goto B200004ba;
case 0x4c0:c.instructions+=3;goto B200004c0;
case 0x4c3:c.instructions+=2;goto B200004c3;
case 0x4c4:c.instructions+=1;goto B200004c4;
case 0x4c9:goto L200004c9;
case 0x4cc:c.instructions+=3;goto B200004cc;
case 0x4cf:c.instructions+=2;goto B200004cf;
case 0x4d0:c.instructions+=1;goto B200004d0;
case 0x4d5:goto L200004d5;
case 0x4db:c.instructions+=9;goto B200004db;
case 0x4e1:c.instructions+=8;goto B200004e1;
case 0x4e7:c.instructions+=7;goto B200004e7;
case 0x4ed:c.instructions+=6;goto B200004ed;
case 0x4f3:c.instructions+=5;goto B200004f3;
case 0x4f9:c.instructions+=4;goto B200004f9;
case 0x4ff:c.instructions+=3;goto B200004ff;
case 0x502:c.instructions+=2;goto B20000502;
case 0x503:c.instructions+=1;goto B20000503;
case 0x508:goto L20000508;
case 0x50e:c.instructions+=21;goto B2000050e;
case 0x514:c.instructions+=20;goto B20000514;
case 0x51a:c.instructions+=19;goto B2000051a;
case 0x520:c.instructions+=18;goto B20000520;
case 0x526:c.instructions+=17;goto B20000526;
case 0x52c:c.instructions+=16;goto B2000052c;
case 0x532:c.instructions+=15;goto B20000532;
case 0x538:c.instructions+=14;goto B20000538;
case 0x53b:c.instructions+=13;goto B2000053b;
case 0x53d:c.instructions+=12;goto B2000053d;
case 0x540:c.instructions+=11;goto B20000540;
case 0x546:c.instructions+=10;goto B20000546;
case 0x54c:c.instructions+=9;goto B2000054c;
case 0x552:c.instructions+=8;goto B20000552;
case 0x558:c.instructions+=7;goto B20000558;
case 0x55e:c.instructions+=6;goto B2000055e;
case 0x564:c.instructions+=5;goto B20000564;
case 0x56a:c.instructions+=4;goto B2000056a;
case 0x570:c.instructions+=3;goto B20000570;
case 0x573:c.instructions+=2;goto B20000573;
case 0x574:c.instructions+=1;goto B20000574;
case 0x579:goto L20000579;
case 0x57c:c.instructions+=3;goto B2000057c;
case 0x57f:c.instructions+=2;goto B2000057f;
case 0x580:c.instructions+=1;goto B20000580;
case 0x585:goto L20000585;
case 0x588:c.instructions+=3;goto B20000588;
case 0x58b:c.instructions+=2;goto B2000058b;
case 0x58c:c.instructions+=1;goto B2000058c;
case 0x591:goto L20000591;
case 0x597:c.instructions+=7;goto B20000597;
case 0x59a:c.instructions+=6;goto B2000059a;
case 0x59c:c.instructions+=5;goto B2000059c;
case 0x59f:c.instructions+=4;goto B2000059f;
case 0x5a2:c.instructions+=3;goto B200005a2;
case 0x5a5:c.instructions+=2;goto B200005a5;
case 0x5a6:c.instructions+=1;goto B200005a6;
case 0x5ab:goto L200005ab;
case 0x5ae:c.instructions+=3;goto B200005ae;
case 0x5b1:c.instructions+=2;goto B200005b1;
case 0x5b2:c.instructions+=1;goto B200005b2;
case 0x5b7:goto L200005b7;
case 0x5ba:c.instructions+=5;goto B200005ba;
case 0x5bd:c.instructions+=4;goto B200005bd;
case 0x5bf:c.instructions+=3;goto B200005bf;
case 0x5c2:c.instructions+=2;goto B200005c2;
case 0x5c4:c.instructions+=1;goto B200005c4;
case 0x5c6:goto L200005c6;
case 0x5c8:goto L200005c8;
case 0x5cb:c.instructions+=3;goto B200005cb;
case 0x5ce:c.instructions+=2;goto B200005ce;
case 0x5cf:c.instructions+=1;goto B200005cf;
case 0x5d4:goto L200005d4;
case 0x5d7:c.instructions+=3;goto B200005d7;
case 0x5da:c.instructions+=2;goto B200005da;
case 0x5db:c.instructions+=1;goto B200005db;
case 0x5e0:goto L200005e0;
case 0x5e3:c.instructions+=3;goto B200005e3;
case 0x5e6:c.instructions+=2;goto B200005e6;
case 0x5e7:c.instructions+=1;goto B200005e7;
case 0x5ec:goto L200005ec;
case 0x5ef:c.instructions+=11;goto B200005ef;
case 0x5f2:c.instructions+=10;goto B200005f2;
case 0x5f4:c.instructions+=9;goto B200005f4;
case 0x5f7:c.instructions+=8;goto B200005f7;
case 0x5fd:c.instructions+=7;goto B200005fd;
case 0x600:c.instructions+=6;goto B20000600;
case 0x602:c.instructions+=5;goto B20000602;
case 0x606:c.instructions+=4;goto B20000606;
case 0x609:c.instructions+=3;goto B20000609;
case 0x60c:c.instructions+=2;goto B2000060c;
case 0x60d:c.instructions+=1;goto B2000060d;
case 0x612:goto L20000612;
case 0x615:c.instructions+=9;goto B20000615;
case 0x618:c.instructions+=8;goto B20000618;
case 0x61a:c.instructions+=7;goto B2000061a;
case 0x61e:c.instructions+=6;goto B2000061e;
case 0x624:c.instructions+=5;goto B20000624;
case 0x627:c.instructions+=4;goto B20000627;
case 0x629:c.instructions+=3;goto B20000629;
case 0x62c:c.instructions+=2;goto B2000062c;
case 0x62e:c.instructions+=1;goto B2000062e;
case 0x630:goto L20000630;
case 0x632:goto L20000632;
case 0x638:c.instructions+=3;goto B20000638;
case 0x63b:c.instructions+=2;goto B2000063b;
case 0x63c:c.instructions+=1;goto B2000063c;
case 0x641:goto L20000641;
case 0x644:c.instructions+=5;goto B20000644;
case 0x647:c.instructions+=4;goto B20000647;
case 0x649:c.instructions+=3;goto B20000649;
case 0x64c:c.instructions+=2;goto B2000064c;
case 0x64e:c.instructions+=1;goto B2000064e;
case 0x650:goto L20000650;
case 0x652:goto L20000652;
case 0x655:c.instructions+=3;goto B20000655;
case 0x658:c.instructions+=2;goto B20000658;
case 0x659:c.instructions+=1;goto B20000659;
case 0x65e:goto L2000065e;
case 0x661:c.instructions+=3;goto B20000661;
case 0x664:c.instructions+=2;goto B20000664;
case 0x665:c.instructions+=1;goto B20000665;
case 0x66a:goto L2000066a;
case 0x66d:c.instructions+=3;goto B2000066d;
case 0x670:c.instructions+=2;goto B20000670;
case 0x671:c.instructions+=1;goto B20000671;
case 0x676:goto L20000676;
case 0x679:c.instructions+=11;goto B20000679;
case 0x67c:c.instructions+=10;goto B2000067c;
case 0x67e:c.instructions+=9;goto B2000067e;
case 0x681:c.instructions+=8;goto B20000681;
case 0x687:c.instructions+=7;goto B20000687;
case 0x68a:c.instructions+=6;goto B2000068a;
case 0x68c:c.instructions+=5;goto B2000068c;
case 0x690:c.instructions+=4;goto B20000690;
case 0x696:c.instructions+=3;goto B20000696;
case 0x699:c.instructions+=2;goto B20000699;
case 0x69a:c.instructions+=1;goto B2000069a;
case 0x69f:goto L2000069f;
case 0x6a2:c.instructions+=5;goto B200006a2;
case 0x6a5:c.instructions+=4;goto B200006a5;
case 0x6a7:c.instructions+=3;goto B200006a7;
case 0x6aa:c.instructions+=2;goto B200006aa;
case 0x6ac:c.instructions+=1;goto B200006ac;
case 0x6ae:goto L200006ae;
case 0x6b0:goto L200006b0;
case 0x6b3:c.instructions+=3;goto B200006b3;
case 0x6b6:c.instructions+=2;goto B200006b6;
case 0x6b7:c.instructions+=1;goto B200006b7;
case 0x6bc:goto L200006bc;
case 0x6bf:c.instructions+=3;goto B200006bf;
case 0x6c2:c.instructions+=2;goto B200006c2;
case 0x6c3:c.instructions+=1;goto B200006c3;
case 0x6c8:goto L200006c8;
case 0x6cb:c.instructions+=4;goto B200006cb;
case 0x6ce:c.instructions+=3;goto B200006ce;
case 0x6d1:c.instructions+=2;goto B200006d1;
case 0x6d2:c.instructions+=1;goto B200006d2;
case 0x6d7:goto L200006d7;
case 0x6da:c.instructions+=15;goto B200006da;
case 0x6dd:c.instructions+=14;goto B200006dd;
case 0x6df:c.instructions+=13;goto B200006df;
case 0x6e2:c.instructions+=12;goto B200006e2;
case 0x6e8:c.instructions+=11;goto B200006e8;
case 0x6eb:c.instructions+=10;goto B200006eb;
case 0x6ed:c.instructions+=9;goto B200006ed;
case 0x6f1:c.instructions+=8;goto B200006f1;
case 0x6f7:c.instructions+=7;goto B200006f7;
case 0x6fa:c.instructions+=6;goto B200006fa;
case 0x6fc:c.instructions+=5;goto B200006fc;
case 0x6ff:c.instructions+=4;goto B200006ff;
case 0x702:c.instructions+=3;goto B20000702;
case 0x705:c.instructions+=2;goto B20000705;
case 0x706:c.instructions+=1;goto B20000706;
case 0x70b:goto L2000070b;
case 0x70e:c.instructions+=5;goto B2000070e;
case 0x711:c.instructions+=4;goto B20000711;
case 0x713:c.instructions+=3;goto B20000713;
case 0x716:c.instructions+=2;goto B20000716;
case 0x718:c.instructions+=1;goto B20000718;
case 0x71a:goto L2000071a;
case 0x71c:goto L2000071c;
case 0x71f:c.instructions+=3;goto B2000071f;
case 0x722:c.instructions+=2;goto B20000722;
case 0x723:c.instructions+=1;goto B20000723;
case 0x728:goto L20000728;
case 0x72b:c.instructions+=3;goto B2000072b;
case 0x72e:c.instructions+=2;goto B2000072e;
case 0x72f:c.instructions+=1;goto B2000072f;
case 0x734:goto L20000734;
case 0x737:c.instructions+=3;goto B20000737;
case 0x73a:c.instructions+=2;goto B2000073a;
case 0x73b:c.instructions+=1;goto B2000073b;
case 0x740:goto L20000740;
case 0x743:c.instructions+=11;goto B20000743;
case 0x746:c.instructions+=10;goto B20000746;
case 0x748:c.instructions+=9;goto B20000748;
case 0x74b:c.instructions+=8;goto B2000074b;
case 0x751:c.instructions+=7;goto B20000751;
case 0x754:c.instructions+=6;goto B20000754;
case 0x756:c.instructions+=5;goto B20000756;
case 0x75a:c.instructions+=4;goto B2000075a;
case 0x75d:c.instructions+=3;goto B2000075d;
case 0x760:c.instructions+=2;goto B20000760;
case 0x761:c.instructions+=1;goto B20000761;
case 0x766:goto L20000766;
case 0x769:c.instructions+=9;goto B20000769;
case 0x76c:c.instructions+=8;goto B2000076c;
case 0x76e:c.instructions+=7;goto B2000076e;
case 0x771:c.instructions+=6;goto B20000771;
case 0x774:c.instructions+=5;goto B20000774;
case 0x777:c.instructions+=4;goto B20000777;
case 0x779:c.instructions+=3;goto B20000779;
case 0x77c:c.instructions+=2;goto B2000077c;
case 0x77e:c.instructions+=1;goto B2000077e;
case 0x780:goto L20000780;
case 0x782:goto L20000782;
case 0x788:c.instructions+=3;goto B20000788;
case 0x78b:c.instructions+=2;goto B2000078b;
case 0x78c:c.instructions+=1;goto B2000078c;
case 0x791:goto L20000791;
case 0x794:c.instructions+=7;goto B20000794;
case 0x797:c.instructions+=6;goto B20000797;
case 0x799:c.instructions+=5;goto B20000799;
case 0x79c:c.instructions+=4;goto B2000079c;
case 0x79f:c.instructions+=3;goto B2000079f;
case 0x7a2:c.instructions+=2;goto B200007a2;
case 0x7a3:c.instructions+=1;goto B200007a3;
case 0x7a8:goto L200007a8;
case 0x7ab:c.instructions+=9;goto B200007ab;
case 0x7ae:c.instructions+=8;goto B200007ae;
case 0x7b0:c.instructions+=7;goto B200007b0;
case 0x7b3:c.instructions+=6;goto B200007b3;
case 0x7b6:c.instructions+=5;goto B200007b6;
case 0x7b9:c.instructions+=4;goto B200007b9;
case 0x7bb:c.instructions+=3;goto B200007bb;
case 0x7be:c.instructions+=2;goto B200007be;
case 0x7c0:c.instructions+=1;goto B200007c0;
case 0x7c2:goto L200007c2;
case 0x7c4:goto L200007c4;
case 0x7c7:c.instructions+=3;goto B200007c7;
case 0x7ca:c.instructions+=2;goto B200007ca;
case 0x7cb:c.instructions+=1;goto B200007cb;
case 0x7d0:goto L200007d0;
case 0x7d6:c.instructions+=3;goto B200007d6;
case 0x7d9:c.instructions+=2;goto B200007d9;
case 0x7da:c.instructions+=1;goto B200007da;
case 0x7df:goto L200007df;
case 0x7e2:c.instructions+=8;goto B200007e2;
case 0x7e5:c.instructions+=7;goto B200007e5;
case 0x7e8:c.instructions+=6;goto B200007e8;
case 0x7ea:c.instructions+=5;goto B200007ea;
case 0x7ed:c.instructions+=4;goto B200007ed;
case 0x7f0:c.instructions+=3;goto B200007f0;
case 0x7f3:c.instructions+=2;goto B200007f3;
case 0x7f4:c.instructions+=1;goto B200007f4;
case 0x7f9:goto L200007f9;
case 0x7fc:c.instructions+=7;goto B200007fc;
case 0x7ff:c.instructions+=6;goto B200007ff;
case 0x801:c.instructions+=5;goto B20000801;
case 0x805:c.instructions+=4;goto B20000805;
case 0x808:c.instructions+=3;goto B20000808;
case 0x80b:c.instructions+=2;goto B2000080b;
case 0x80c:c.instructions+=1;goto B2000080c;
case 0x811:goto L20000811;
case 0x814:c.instructions+=5;goto B20000814;
case 0x817:c.instructions+=4;goto B20000817;
case 0x819:c.instructions+=3;goto B20000819;
case 0x81c:c.instructions+=2;goto B2000081c;
case 0x81e:c.instructions+=1;goto B2000081e;
case 0x820:goto L20000820;
case 0x822:goto L20000822;
case 0x828:c.instructions+=3;goto B20000828;
case 0x82b:c.instructions+=2;goto B2000082b;
case 0x82c:c.instructions+=1;goto B2000082c;
case 0x831:goto L20000831;
case 0x834:c.instructions+=8;goto B20000834;
case 0x837:c.instructions+=7;goto B20000837;
case 0x83a:c.instructions+=6;goto B2000083a;
case 0x83c:c.instructions+=5;goto B2000083c;
case 0x83f:c.instructions+=4;goto B2000083f;
case 0x842:c.instructions+=3;goto B20000842;
case 0x845:c.instructions+=2;goto B20000845;
case 0x846:c.instructions+=1;goto B20000846;
case 0x84b:goto L2000084b;
case 0x84e:c.instructions+=7;goto B2000084e;
case 0x851:c.instructions+=6;goto B20000851;
case 0x853:c.instructions+=5;goto B20000853;
case 0x857:c.instructions+=4;goto B20000857;
case 0x85a:c.instructions+=3;goto B2000085a;
case 0x85d:c.instructions+=2;goto B2000085d;
case 0x85e:c.instructions+=1;goto B2000085e;
case 0x863:goto L20000863;
case 0x866:c.instructions+=5;goto B20000866;
case 0x869:c.instructions+=4;goto B20000869;
case 0x86b:c.instructions+=3;goto B2000086b;
case 0x86e:c.instructions+=2;goto B2000086e;
case 0x870:c.instructions+=1;goto B20000870;
case 0x872:goto L20000872;
case 0x874:goto L20000874;
case 0x877:c.instructions+=3;goto B20000877;
case 0x87a:c.instructions+=2;goto B2000087a;
case 0x87b:c.instructions+=1;goto B2000087b;
case 0x880:goto L20000880;
case 0x886:c.instructions+=3;goto B20000886;
case 0x889:c.instructions+=2;goto B20000889;
case 0x88a:c.instructions+=1;goto B2000088a;
case 0x88f:goto L2000088f;
case 0x892:c.instructions+=7;goto B20000892;
case 0x895:c.instructions+=6;goto B20000895;
case 0x897:c.instructions+=5;goto B20000897;
case 0x89a:c.instructions+=4;goto B2000089a;
case 0x89d:c.instructions+=3;goto B2000089d;
case 0x8a0:c.instructions+=2;goto B200008a0;
case 0x8a1:c.instructions+=1;goto B200008a1;
case 0x8a6:goto L200008a6;
case 0x8a9:c.instructions+=9;goto B200008a9;
case 0x8ac:c.instructions+=8;goto B200008ac;
case 0x8ae:c.instructions+=7;goto B200008ae;
case 0x8b1:c.instructions+=6;goto B200008b1;
case 0x8b4:c.instructions+=5;goto B200008b4;
case 0x8b7:c.instructions+=4;goto B200008b7;
case 0x8b9:c.instructions+=3;goto B200008b9;
case 0x8bc:c.instructions+=2;goto B200008bc;
case 0x8be:c.instructions+=1;goto B200008be;
case 0x8c0:goto L200008c0;
case 0x8c2:goto L200008c2;
case 0x8c8:c.instructions+=3;goto B200008c8;
case 0x8cb:c.instructions+=2;goto B200008cb;
case 0x8cc:c.instructions+=1;goto B200008cc;
case 0x8d1:goto L200008d1;
case 0x8d4:c.instructions+=7;goto B200008d4;
case 0x8d7:c.instructions+=6;goto B200008d7;
case 0x8d9:c.instructions+=5;goto B200008d9;
case 0x8dc:c.instructions+=4;goto B200008dc;
case 0x8df:c.instructions+=3;goto B200008df;
case 0x8e2:c.instructions+=2;goto B200008e2;
case 0x8e3:c.instructions+=1;goto B200008e3;
case 0x8e8:goto L200008e8;
case 0x8eb:c.instructions+=9;goto B200008eb;
case 0x8ee:c.instructions+=8;goto B200008ee;
case 0x8f0:c.instructions+=7;goto B200008f0;
case 0x8f3:c.instructions+=6;goto B200008f3;
case 0x8f6:c.instructions+=5;goto B200008f6;
case 0x8f9:c.instructions+=4;goto B200008f9;
case 0x8fb:c.instructions+=3;goto B200008fb;
case 0x8fe:c.instructions+=2;goto B200008fe;
case 0x900:c.instructions+=1;goto B20000900;
case 0x902:goto L20000902;
case 0x904:goto L20000904;
case 0x907:c.instructions+=3;goto B20000907;
case 0x90a:c.instructions+=2;goto B2000090a;
case 0x90b:c.instructions+=1;goto B2000090b;
case 0x910:goto L20000910;
case 0x916:c.instructions+=3;goto B20000916;
case 0x919:c.instructions+=2;goto B20000919;
case 0x91a:c.instructions+=1;goto B2000091a;
case 0x91f:goto L2000091f;
case 0x922:c.instructions+=8;goto B20000922;
case 0x925:c.instructions+=7;goto B20000925;
case 0x928:c.instructions+=6;goto B20000928;
case 0x92a:c.instructions+=5;goto B2000092a;
case 0x92d:c.instructions+=4;goto B2000092d;
case 0x930:c.instructions+=3;goto B20000930;
case 0x933:c.instructions+=2;goto B20000933;
case 0x934:c.instructions+=1;goto B20000934;
case 0x939:goto L20000939;
case 0x93c:c.instructions+=7;goto B2000093c;
case 0x93f:c.instructions+=6;goto B2000093f;
case 0x941:c.instructions+=5;goto B20000941;
case 0x945:c.instructions+=4;goto B20000945;
case 0x948:c.instructions+=3;goto B20000948;
case 0x94b:c.instructions+=2;goto B2000094b;
case 0x94c:c.instructions+=1;goto B2000094c;
case 0x951:goto L20000951;
case 0x954:c.instructions+=5;goto B20000954;
case 0x957:c.instructions+=4;goto B20000957;
case 0x959:c.instructions+=3;goto B20000959;
case 0x95c:c.instructions+=2;goto B2000095c;
case 0x95e:c.instructions+=1;goto B2000095e;
case 0x960:goto L20000960;
case 0x962:goto L20000962;
case 0x965:c.instructions+=3;goto B20000965;
case 0x968:c.instructions+=2;goto B20000968;
case 0x969:c.instructions+=1;goto B20000969;
case 0x96e:goto L2000096e;
case 0x974:c.instructions+=7;goto B20000974;
case 0x977:c.instructions+=6;goto B20000977;
case 0x979:c.instructions+=5;goto B20000979;
case 0x97c:c.instructions+=4;goto B2000097c;
case 0x97f:c.instructions+=3;goto B2000097f;
case 0x982:c.instructions+=2;goto B20000982;
case 0x983:c.instructions+=1;goto B20000983;
case 0x988:goto L20000988;
case 0x98b:c.instructions+=3;goto B2000098b;
case 0x98e:c.instructions+=2;goto B2000098e;
case 0x98f:c.instructions+=1;goto B2000098f;
case 0x994:goto L20000994;
case 0x997:c.instructions+=5;goto B20000997;
case 0x99a:c.instructions+=4;goto B2000099a;
case 0x99c:c.instructions+=3;goto B2000099c;
case 0x99f:c.instructions+=2;goto B2000099f;
case 0x9a1:c.instructions+=1;goto B200009a1;
case 0x9a3:goto L200009a3;
case 0x9a5:goto L200009a5;
case 0x9a8:c.instructions+=3;goto B200009a8;
case 0x9ab:c.instructions+=2;goto B200009ab;
case 0x9ac:c.instructions+=1;goto B200009ac;
case 0x9b1:goto L200009b1;
case 0x9b4:c.instructions+=3;goto B200009b4;
case 0x9b7:c.instructions+=2;goto B200009b7;
case 0x9b8:c.instructions+=1;goto B200009b8;
case 0x9bd:goto L200009bd;
case 0x9c0:c.instructions+=3;goto B200009c0;
case 0x9c3:c.instructions+=2;goto B200009c3;
case 0x9c4:c.instructions+=1;goto B200009c4;
case 0x9c9:goto L200009c9;
case 0x9cc:c.instructions+=11;goto B200009cc;
case 0x9cf:c.instructions+=10;goto B200009cf;
case 0x9d1:c.instructions+=9;goto B200009d1;
case 0x9d4:c.instructions+=8;goto B200009d4;
case 0x9da:c.instructions+=7;goto B200009da;
case 0x9dd:c.instructions+=6;goto B200009dd;
case 0x9df:c.instructions+=5;goto B200009df;
case 0x9e3:c.instructions+=4;goto B200009e3;
case 0x9e6:c.instructions+=3;goto B200009e6;
case 0x9e9:c.instructions+=2;goto B200009e9;
case 0x9ea:c.instructions+=1;goto B200009ea;
case 0x9ef:goto L200009ef;
case 0x9f2:c.instructions+=10;goto B200009f2;
case 0x9f5:c.instructions+=9;goto B200009f5;
case 0x9f8:c.instructions+=8;goto B200009f8;
case 0x9fa:c.instructions+=7;goto B200009fa;
case 0x9fe:c.instructions+=6;goto B200009fe;
case 0xa04:c.instructions+=5;goto B20000a04;
case 0xa07:c.instructions+=4;goto B20000a07;
case 0xa09:c.instructions+=3;goto B20000a09;
case 0xa0c:c.instructions+=2;goto B20000a0c;
case 0xa0e:c.instructions+=1;goto B20000a0e;
case 0xa10:goto L20000a10;
case 0xa12:goto L20000a12;
case 0xa18:c.instructions+=3;goto B20000a18;
case 0xa1b:c.instructions+=2;goto B20000a1b;
case 0xa1c:c.instructions+=1;goto B20000a1c;
case 0xa21:goto L20000a21;
case 0xa24:c.instructions+=5;goto B20000a24;
case 0xa27:c.instructions+=4;goto B20000a27;
case 0xa29:c.instructions+=3;goto B20000a29;
case 0xa2c:c.instructions+=2;goto B20000a2c;
case 0xa2e:c.instructions+=1;goto B20000a2e;
case 0xa30:goto L20000a30;
case 0xa32:goto L20000a32;
case 0xa35:c.instructions+=3;goto B20000a35;
case 0xa38:c.instructions+=2;goto B20000a38;
case 0xa39:c.instructions+=1;goto B20000a39;
case 0xa3e:goto L20000a3e;
case 0xa41:c.instructions+=3;goto B20000a41;
case 0xa44:c.instructions+=2;goto B20000a44;
case 0xa45:c.instructions+=1;goto B20000a45;
case 0xa4a:goto L20000a4a;
case 0xa4d:c.instructions+=3;goto B20000a4d;
case 0xa50:c.instructions+=2;goto B20000a50;
case 0xa51:c.instructions+=1;goto B20000a51;
case 0xa56:goto L20000a56;
case 0xa59:c.instructions+=11;goto B20000a59;
case 0xa5c:c.instructions+=10;goto B20000a5c;
case 0xa5e:c.instructions+=9;goto B20000a5e;
case 0xa61:c.instructions+=8;goto B20000a61;
case 0xa67:c.instructions+=7;goto B20000a67;
case 0xa6a:c.instructions+=6;goto B20000a6a;
case 0xa6c:c.instructions+=5;goto B20000a6c;
case 0xa70:c.instructions+=4;goto B20000a70;
case 0xa76:c.instructions+=3;goto B20000a76;
case 0xa79:c.instructions+=2;goto B20000a79;
case 0xa7a:c.instructions+=1;goto B20000a7a;
case 0xa7f:goto L20000a7f;
case 0xa82:c.instructions+=5;goto B20000a82;
case 0xa85:c.instructions+=4;goto B20000a85;
case 0xa87:c.instructions+=3;goto B20000a87;
case 0xa8a:c.instructions+=2;goto B20000a8a;
case 0xa8c:c.instructions+=1;goto B20000a8c;
case 0xa8e:goto L20000a8e;
case 0xa90:goto L20000a90;
case 0xa93:c.instructions+=3;goto B20000a93;
case 0xa96:c.instructions+=2;goto B20000a96;
case 0xa97:c.instructions+=1;goto B20000a97;
case 0xa9c:goto L20000a9c;
case 0xa9f:c.instructions+=3;goto B20000a9f;
case 0xaa2:c.instructions+=2;goto B20000aa2;
case 0xaa3:c.instructions+=1;goto B20000aa3;
case 0xaa8:goto L20000aa8;
case 0xaab:c.instructions+=3;goto B20000aab;
case 0xaae:c.instructions+=2;goto B20000aae;
case 0xaaf:c.instructions+=1;goto B20000aaf;
case 0xab4:goto L20000ab4;
case 0xab7:c.instructions+=15;goto B20000ab7;
case 0xaba:c.instructions+=14;goto B20000aba;
case 0xabc:c.instructions+=13;goto B20000abc;
case 0xabf:c.instructions+=12;goto B20000abf;
case 0xac5:c.instructions+=11;goto B20000ac5;
case 0xac8:c.instructions+=10;goto B20000ac8;
case 0xaca:c.instructions+=9;goto B20000aca;
case 0xace:c.instructions+=8;goto B20000ace;
case 0xad4:c.instructions+=7;goto B20000ad4;
case 0xad7:c.instructions+=6;goto B20000ad7;
case 0xad9:c.instructions+=5;goto B20000ad9;
case 0xadc:c.instructions+=4;goto B20000adc;
case 0xadf:c.instructions+=3;goto B20000adf;
case 0xae2:c.instructions+=2;goto B20000ae2;
case 0xae3:c.instructions+=1;goto B20000ae3;
case 0xae8:goto L20000ae8;
case 0xaeb:c.instructions+=5;goto B20000aeb;
case 0xaee:c.instructions+=4;goto B20000aee;
case 0xaf0:c.instructions+=3;goto B20000af0;
case 0xaf3:c.instructions+=2;goto B20000af3;
case 0xaf5:c.instructions+=1;goto B20000af5;
case 0xaf7:goto L20000af7;
case 0xaf9:goto L20000af9;
case 0xafc:c.instructions+=3;goto B20000afc;
case 0xaff:c.instructions+=2;goto B20000aff;
case 0xb00:c.instructions+=1;goto B20000b00;
case 0xb05:goto L20000b05;
case 0xb08:c.instructions+=3;goto B20000b08;
case 0xb0b:c.instructions+=2;goto B20000b0b;
case 0xb0c:c.instructions+=1;goto B20000b0c;
case 0xb11:goto L20000b11;
case 0xb14:c.instructions+=3;goto B20000b14;
case 0xb17:c.instructions+=2;goto B20000b17;
case 0xb18:c.instructions+=1;goto B20000b18;
case 0xb1d:goto L20000b1d;
case 0xb20:c.instructions+=11;goto B20000b20;
case 0xb23:c.instructions+=10;goto B20000b23;
case 0xb25:c.instructions+=9;goto B20000b25;
case 0xb28:c.instructions+=8;goto B20000b28;
case 0xb2e:c.instructions+=7;goto B20000b2e;
case 0xb31:c.instructions+=6;goto B20000b31;
case 0xb33:c.instructions+=5;goto B20000b33;
case 0xb37:c.instructions+=4;goto B20000b37;
case 0xb3a:c.instructions+=3;goto B20000b3a;
case 0xb3d:c.instructions+=2;goto B20000b3d;
case 0xb3e:c.instructions+=1;goto B20000b3e;
case 0xb43:goto L20000b43;
case 0xb46:c.instructions+=9;goto B20000b46;
case 0xb49:c.instructions+=8;goto B20000b49;
case 0xb4b:c.instructions+=7;goto B20000b4b;
case 0xb4e:c.instructions+=6;goto B20000b4e;
case 0xb51:c.instructions+=5;goto B20000b51;
case 0xb54:c.instructions+=4;goto B20000b54;
case 0xb56:c.instructions+=3;goto B20000b56;
case 0xb59:c.instructions+=2;goto B20000b59;
case 0xb5b:c.instructions+=1;goto B20000b5b;
case 0xb5d:goto L20000b5d;
case 0xb5f:goto L20000b5f;
case 0xb65:c.instructions+=3;goto B20000b65;
case 0xb68:c.instructions+=2;goto B20000b68;
case 0xb69:c.instructions+=1;goto B20000b69;
case 0xb6e:goto L20000b6e;
case 0xb71:c.instructions+=7;goto B20000b71;
case 0xb74:c.instructions+=6;goto B20000b74;
case 0xb76:c.instructions+=5;goto B20000b76;
case 0xb79:c.instructions+=4;goto B20000b79;
case 0xb7c:c.instructions+=3;goto B20000b7c;
case 0xb7f:c.instructions+=2;goto B20000b7f;
case 0xb80:c.instructions+=1;goto B20000b80;
case 0xb85:goto L20000b85;
case 0xb88:c.instructions+=9;goto B20000b88;
case 0xb8b:c.instructions+=8;goto B20000b8b;
case 0xb8d:c.instructions+=7;goto B20000b8d;
case 0xb90:c.instructions+=6;goto B20000b90;
case 0xb93:c.instructions+=5;goto B20000b93;
case 0xb96:c.instructions+=4;goto B20000b96;
case 0xb98:c.instructions+=3;goto B20000b98;
case 0xb9b:c.instructions+=2;goto B20000b9b;
case 0xb9d:c.instructions+=1;goto B20000b9d;
case 0xb9f:goto L20000b9f;
case 0xba1:goto L20000ba1;
case 0xba4:c.instructions+=3;goto B20000ba4;
case 0xba7:c.instructions+=2;goto B20000ba7;
case 0xba8:c.instructions+=1;goto B20000ba8;
case 0xbad:goto L20000bad;
case 0xbb3:c.instructions+=3;goto B20000bb3;
case 0xbb6:c.instructions+=2;goto B20000bb6;
case 0xbb7:c.instructions+=1;goto B20000bb7;
case 0xbbc:goto L20000bbc;
case 0xbbf:c.instructions+=8;goto B20000bbf;
case 0xbc2:c.instructions+=7;goto B20000bc2;
case 0xbc5:c.instructions+=6;goto B20000bc5;
case 0xbc7:c.instructions+=5;goto B20000bc7;
case 0xbca:c.instructions+=4;goto B20000bca;
case 0xbcd:c.instructions+=3;goto B20000bcd;
case 0xbd0:c.instructions+=2;goto B20000bd0;
case 0xbd1:c.instructions+=1;goto B20000bd1;
case 0xbd6:goto L20000bd6;
case 0xbd9:c.instructions+=7;goto B20000bd9;
case 0xbdc:c.instructions+=6;goto B20000bdc;
case 0xbde:c.instructions+=5;goto B20000bde;
case 0xbe2:c.instructions+=4;goto B20000be2;
case 0xbe5:c.instructions+=3;goto B20000be5;
case 0xbe8:c.instructions+=2;goto B20000be8;
case 0xbe9:c.instructions+=1;goto B20000be9;
case 0xbee:goto L20000bee;
case 0xbf1:c.instructions+=5;goto B20000bf1;
case 0xbf4:c.instructions+=4;goto B20000bf4;
case 0xbf6:c.instructions+=3;goto B20000bf6;
case 0xbf9:c.instructions+=2;goto B20000bf9;
case 0xbfb:c.instructions+=1;goto B20000bfb;
case 0xbfd:goto L20000bfd;
case 0xbff:goto L20000bff;
case 0xc05:c.instructions+=3;goto B20000c05;
case 0xc08:c.instructions+=2;goto B20000c08;
case 0xc09:c.instructions+=1;goto B20000c09;
case 0xc0e:goto L20000c0e;
case 0xc11:c.instructions+=8;goto B20000c11;
case 0xc14:c.instructions+=7;goto B20000c14;
case 0xc17:c.instructions+=6;goto B20000c17;
case 0xc19:c.instructions+=5;goto B20000c19;
case 0xc1c:c.instructions+=4;goto B20000c1c;
case 0xc1f:c.instructions+=3;goto B20000c1f;
case 0xc22:c.instructions+=2;goto B20000c22;
case 0xc23:c.instructions+=1;goto B20000c23;
case 0xc28:goto L20000c28;
case 0xc2b:c.instructions+=7;goto B20000c2b;
case 0xc2e:c.instructions+=6;goto B20000c2e;
case 0xc30:c.instructions+=5;goto B20000c30;
case 0xc34:c.instructions+=4;goto B20000c34;
case 0xc37:c.instructions+=3;goto B20000c37;
case 0xc3a:c.instructions+=2;goto B20000c3a;
case 0xc3b:c.instructions+=1;goto B20000c3b;
case 0xc40:goto L20000c40;
case 0xc43:c.instructions+=5;goto B20000c43;
case 0xc46:c.instructions+=4;goto B20000c46;
case 0xc48:c.instructions+=3;goto B20000c48;
case 0xc4b:c.instructions+=2;goto B20000c4b;
case 0xc4d:c.instructions+=1;goto B20000c4d;
case 0xc4f:goto L20000c4f;
case 0xc51:goto L20000c51;
case 0xc54:c.instructions+=3;goto B20000c54;
case 0xc57:c.instructions+=2;goto B20000c57;
case 0xc58:c.instructions+=1;goto B20000c58;
case 0xc5d:goto L20000c5d;
case 0xc63:c.instructions+=3;goto B20000c63;
case 0xc66:c.instructions+=2;goto B20000c66;
case 0xc67:c.instructions+=1;goto B20000c67;
case 0xc6c:goto L20000c6c;
case 0xc6f:c.instructions+=7;goto B20000c6f;
case 0xc72:c.instructions+=6;goto B20000c72;
case 0xc74:c.instructions+=5;goto B20000c74;
case 0xc77:c.instructions+=4;goto B20000c77;
case 0xc7a:c.instructions+=3;goto B20000c7a;
case 0xc7d:c.instructions+=2;goto B20000c7d;
case 0xc7e:c.instructions+=1;goto B20000c7e;
case 0xc83:goto L20000c83;
case 0xc86:c.instructions+=9;goto B20000c86;
case 0xc89:c.instructions+=8;goto B20000c89;
case 0xc8b:c.instructions+=7;goto B20000c8b;
case 0xc8e:c.instructions+=6;goto B20000c8e;
case 0xc91:c.instructions+=5;goto B20000c91;
case 0xc94:c.instructions+=4;goto B20000c94;
case 0xc96:c.instructions+=3;goto B20000c96;
case 0xc99:c.instructions+=2;goto B20000c99;
case 0xc9b:c.instructions+=1;goto B20000c9b;
case 0xc9d:goto L20000c9d;
case 0xc9f:goto L20000c9f;
case 0xca5:c.instructions+=3;goto B20000ca5;
case 0xca8:c.instructions+=2;goto B20000ca8;
case 0xca9:c.instructions+=1;goto B20000ca9;
case 0xcae:goto L20000cae;
case 0xcb1:c.instructions+=7;goto B20000cb1;
case 0xcb4:c.instructions+=6;goto B20000cb4;
case 0xcb6:c.instructions+=5;goto B20000cb6;
case 0xcb9:c.instructions+=4;goto B20000cb9;
case 0xcbc:c.instructions+=3;goto B20000cbc;
case 0xcbf:c.instructions+=2;goto B20000cbf;
case 0xcc0:c.instructions+=1;goto B20000cc0;
case 0xcc5:goto L20000cc5;
case 0xcc8:c.instructions+=9;goto B20000cc8;
case 0xccb:c.instructions+=8;goto B20000ccb;
case 0xccd:c.instructions+=7;goto B20000ccd;
case 0xcd0:c.instructions+=6;goto B20000cd0;
case 0xcd3:c.instructions+=5;goto B20000cd3;
case 0xcd6:c.instructions+=4;goto B20000cd6;
case 0xcd8:c.instructions+=3;goto B20000cd8;
case 0xcdb:c.instructions+=2;goto B20000cdb;
case 0xcdd:c.instructions+=1;goto B20000cdd;
case 0xcdf:goto L20000cdf;
case 0xce1:goto L20000ce1;
case 0xce4:c.instructions+=3;goto B20000ce4;
case 0xce7:c.instructions+=2;goto B20000ce7;
case 0xce8:c.instructions+=1;goto B20000ce8;
case 0xced:goto L20000ced;
case 0xcf3:c.instructions+=3;goto B20000cf3;
case 0xcf6:c.instructions+=2;goto B20000cf6;
case 0xcf7:c.instructions+=1;goto B20000cf7;
case 0xcfc:goto L20000cfc;
case 0xcff:c.instructions+=8;goto B20000cff;
case 0xd02:c.instructions+=7;goto B20000d02;
case 0xd05:c.instructions+=6;goto B20000d05;
case 0xd07:c.instructions+=5;goto B20000d07;
case 0xd0a:c.instructions+=4;goto B20000d0a;
case 0xd0d:c.instructions+=3;goto B20000d0d;
case 0xd10:c.instructions+=2;goto B20000d10;
case 0xd11:c.instructions+=1;goto B20000d11;
case 0xd16:goto L20000d16;
case 0xd19:c.instructions+=7;goto B20000d19;
case 0xd1c:c.instructions+=6;goto B20000d1c;
case 0xd1e:c.instructions+=5;goto B20000d1e;
case 0xd22:c.instructions+=4;goto B20000d22;
case 0xd25:c.instructions+=3;goto B20000d25;
case 0xd28:c.instructions+=2;goto B20000d28;
case 0xd29:c.instructions+=1;goto B20000d29;
case 0xd2e:goto L20000d2e;
case 0xd31:c.instructions+=6;goto B20000d31;
case 0xd34:c.instructions+=5;goto B20000d34;
case 0xd37:c.instructions+=4;goto B20000d37;
case 0xd39:c.instructions+=3;goto B20000d39;
case 0xd3c:c.instructions+=2;goto B20000d3c;
case 0xd3e:c.instructions+=1;goto B20000d3e;
case 0xd40:goto L20000d40;
case 0xd42:goto L20000d42;
case 0xd45:c.instructions+=3;goto B20000d45;
case 0xd48:c.instructions+=2;goto B20000d48;
case 0xd49:c.instructions+=1;goto B20000d49;
case 0xd4e:goto L20000d4e;
case 0xd54:c.instructions+=3;goto B20000d54;
case 0xd57:c.instructions+=2;goto B20000d57;
case 0xd58:c.instructions+=1;goto B20000d58;
case 0xd5d:goto L20000d5d;
case 0xd60:c.instructions+=3;goto B20000d60;
case 0xd63:c.instructions+=2;goto B20000d63;
case 0xd64:c.instructions+=1;goto B20000d64;
case 0xd69:goto L20000d69;
case 0xd6c:c.instructions+=3;goto B20000d6c;
case 0xd6f:c.instructions+=2;goto B20000d6f;
case 0xd70:c.instructions+=1;goto B20000d70;
case 0xd75:goto L20000d75;
case 0xd78:c.instructions+=3;goto B20000d78;
case 0xd7b:c.instructions+=2;goto B20000d7b;
case 0xd7c:c.instructions+=1;goto B20000d7c;
case 0xd81:goto L20000d81;
case 0xd84:c.instructions+=4;goto B20000d84;
case 0xd87:c.instructions+=3;goto B20000d87;
case 0xd8a:c.instructions+=2;goto B20000d8a;
case 0xd8b:c.instructions+=1;goto B20000d8b;
case 0xd90:goto L20000d90;
case 0xd93:c.instructions+=7;goto B20000d93;
case 0xd96:c.instructions+=6;goto B20000d96;
case 0xd98:c.instructions+=5;goto B20000d98;
case 0xd9b:c.instructions+=4;goto B20000d9b;
case 0xd9e:c.instructions+=3;goto B20000d9e;
case 0xda1:c.instructions+=2;goto B20000da1;
case 0xda2:c.instructions+=1;goto B20000da2;
case 0xda7:goto L20000da7;
case 0xdaa:c.instructions+=3;goto B20000daa;
case 0xdad:c.instructions+=2;goto B20000dad;
case 0xdae:c.instructions+=1;goto B20000dae;
case 0xdb3:goto L20000db3;
case 0xdb6:c.instructions+=4;goto B20000db6;
case 0xdb9:c.instructions+=3;goto B20000db9;
case 0xdbc:c.instructions+=2;goto B20000dbc;
case 0xdbd:c.instructions+=1;goto B20000dbd;
case 0xdc2:goto L20000dc2;
case 0xdc5:c.instructions+=3;goto B20000dc5;
case 0xdc8:c.instructions+=2;goto B20000dc8;
case 0xdc9:c.instructions+=1;goto B20000dc9;
case 0xdce:goto L20000dce;
case 0xdd1:c.instructions+=3;goto B20000dd1;
case 0xdd4:c.instructions+=2;goto B20000dd4;
case 0xdd5:c.instructions+=1;goto B20000dd5;
case 0xdda:goto L20000dda;
case 0xddd:c.instructions+=2;goto B20000ddd;
case 0xdde:c.instructions+=1;goto B20000dde;
case 0xde3:goto L20000de3;
case 0xde6:c.instructions+=3;goto B20000de6;
case 0xde9:c.instructions+=2;goto B20000de9;
case 0xdea:c.instructions+=1;goto B20000dea;
case 0xdef:goto L20000def;
case 0xdf2:c.instructions+=3;goto B20000df2;
case 0xdf5:c.instructions+=2;goto B20000df5;
case 0xdf6:c.instructions+=1;goto B20000df6;
case 0xdfb:goto L20000dfb;
case 0xdfe:c.instructions+=3;goto B20000dfe;
case 0xe01:c.instructions+=2;goto B20000e01;
case 0xe02:c.instructions+=1;goto B20000e02;
case 0xe07:goto L20000e07;
case 0xe0a:c.instructions+=4;goto B20000e0a;
case 0xe0d:c.instructions+=3;goto B20000e0d;
case 0xe10:c.instructions+=2;goto B20000e10;
case 0xe11:c.instructions+=1;goto B20000e11;
case 0xe16:goto L20000e16;
case 0xe19:c.instructions+=7;goto B20000e19;
case 0xe1c:c.instructions+=6;goto B20000e1c;
case 0xe1e:c.instructions+=5;goto B20000e1e;
case 0xe21:c.instructions+=4;goto B20000e21;
case 0xe24:c.instructions+=3;goto B20000e24;
case 0xe27:c.instructions+=2;goto B20000e27;
case 0xe28:c.instructions+=1;goto B20000e28;
case 0xe2d:goto L20000e2d;
case 0xe30:c.instructions+=3;goto B20000e30;
case 0xe33:c.instructions+=2;goto B20000e33;
case 0xe34:c.instructions+=1;goto B20000e34;
case 0xe39:goto L20000e39;
case 0xe3c:c.instructions+=4;goto B20000e3c;
case 0xe3f:c.instructions+=3;goto B20000e3f;
case 0xe42:c.instructions+=2;goto B20000e42;
case 0xe43:c.instructions+=1;goto B20000e43;
case 0xe48:goto L20000e48;
case 0xe4b:c.instructions+=3;goto B20000e4b;
case 0xe4e:c.instructions+=2;goto B20000e4e;
case 0xe4f:c.instructions+=1;goto B20000e4f;
case 0xe54:goto L20000e54;
case 0xe57:c.instructions+=3;goto B20000e57;
case 0xe5a:c.instructions+=2;goto B20000e5a;
case 0xe5b:c.instructions+=1;goto B20000e5b;
case 0xe60:goto L20000e60;
case 0xe63:c.instructions+=2;goto B20000e63;
case 0xe64:c.instructions+=1;goto B20000e64;
case 0xe69:goto L20000e69;
case 0xe6c:c.instructions+=3;goto B20000e6c;
case 0xe6f:c.instructions+=2;goto B20000e6f;
case 0xe70:c.instructions+=1;goto B20000e70;
case 0xe75:goto L20000e75;
case 0xe78:c.instructions+=3;goto B20000e78;
case 0xe7b:c.instructions+=2;goto B20000e7b;
case 0xe7c:c.instructions+=1;goto B20000e7c;
case 0xe81:goto L20000e81;
case 0xe84:c.instructions+=3;goto B20000e84;
case 0xe87:c.instructions+=2;goto B20000e87;
case 0xe88:c.instructions+=1;goto B20000e88;
case 0xe8d:goto L20000e8d;
case 0xe90:c.instructions+=4;goto B20000e90;
case 0xe93:c.instructions+=3;goto B20000e93;
case 0xe96:c.instructions+=2;goto B20000e96;
case 0xe97:c.instructions+=1;goto B20000e97;
case 0xe9c:goto L20000e9c;
case 0xe9f:c.instructions+=7;goto B20000e9f;
case 0xea2:c.instructions+=6;goto B20000ea2;
case 0xea4:c.instructions+=5;goto B20000ea4;
case 0xea7:c.instructions+=4;goto B20000ea7;
case 0xeaa:c.instructions+=3;goto B20000eaa;
case 0xead:c.instructions+=2;goto B20000ead;
case 0xeae:c.instructions+=1;goto B20000eae;
case 0xeb3:goto L20000eb3;
case 0xeb6:c.instructions+=3;goto B20000eb6;
case 0xeb9:c.instructions+=2;goto B20000eb9;
case 0xeba:c.instructions+=1;goto B20000eba;
case 0xebf:goto L20000ebf;
case 0xec2:c.instructions+=4;goto B20000ec2;
case 0xec5:c.instructions+=3;goto B20000ec5;
case 0xec8:c.instructions+=2;goto B20000ec8;
case 0xec9:c.instructions+=1;goto B20000ec9;
case 0xece:goto L20000ece;
case 0xed1:c.instructions+=3;goto B20000ed1;
case 0xed4:c.instructions+=2;goto B20000ed4;
case 0xed5:c.instructions+=1;goto B20000ed5;
case 0xeda:goto L20000eda;
case 0xedd:c.instructions+=3;goto B20000edd;
case 0xee0:c.instructions+=2;goto B20000ee0;
case 0xee1:c.instructions+=1;goto B20000ee1;
case 0xee6:goto L20000ee6;
case 0xee9:c.instructions+=3;goto B20000ee9;
case 0xeec:c.instructions+=2;goto B20000eec;
case 0xeed:c.instructions+=1;goto B20000eed;
case 0xef2:goto L20000ef2;
case 0xef5:c.instructions+=3;goto B20000ef5;
case 0xef8:c.instructions+=2;goto B20000ef8;
case 0xef9:c.instructions+=1;goto B20000ef9;
case 0xefe:goto L20000efe;
case 0xf01:c.instructions+=3;goto B20000f01;
case 0xf04:c.instructions+=2;goto B20000f04;
case 0xf05:c.instructions+=1;goto B20000f05;
case 0xf0a:goto L20000f0a;
case 0xf0d:c.instructions+=3;goto B20000f0d;
case 0xf10:c.instructions+=2;goto B20000f10;
case 0xf11:c.instructions+=1;goto B20000f11;
case 0xf16:goto L20000f16;
case 0xf19:c.instructions+=4;goto B20000f19;
case 0xf1c:c.instructions+=3;goto B20000f1c;
case 0xf1f:c.instructions+=2;goto B20000f1f;
case 0xf20:c.instructions+=1;goto B20000f20;
case 0xf25:goto L20000f25;
case 0xf28:c.instructions+=7;goto B20000f28;
case 0xf2b:c.instructions+=6;goto B20000f2b;
case 0xf2d:c.instructions+=5;goto B20000f2d;
case 0xf30:c.instructions+=4;goto B20000f30;
case 0xf33:c.instructions+=3;goto B20000f33;
case 0xf36:c.instructions+=2;goto B20000f36;
case 0xf37:c.instructions+=1;goto B20000f37;
case 0xf3c:goto L20000f3c;
case 0xf3f:c.instructions+=3;goto B20000f3f;
case 0xf42:c.instructions+=2;goto B20000f42;
case 0xf43:c.instructions+=1;goto B20000f43;
case 0xf48:goto L20000f48;
case 0xf4b:c.instructions+=4;goto B20000f4b;
case 0xf4e:c.instructions+=3;goto B20000f4e;
case 0xf51:c.instructions+=2;goto B20000f51;
case 0xf52:c.instructions+=1;goto B20000f52;
case 0xf57:goto L20000f57;
case 0xf5a:c.instructions+=3;goto B20000f5a;
case 0xf5d:c.instructions+=2;goto B20000f5d;
case 0xf5e:c.instructions+=1;goto B20000f5e;
case 0xf63:goto L20000f63;
case 0xf66:c.instructions+=3;goto B20000f66;
case 0xf69:c.instructions+=2;goto B20000f69;
case 0xf6a:c.instructions+=1;goto B20000f6a;
case 0xf6f:goto L20000f6f;
case 0xf72:c.instructions+=2;goto B20000f72;
case 0xf73:c.instructions+=1;goto B20000f73;
case 0xf78:goto L20000f78;
case 0xf7b:c.instructions+=3;goto B20000f7b;
case 0xf7e:c.instructions+=2;goto B20000f7e;
case 0xf7f:c.instructions+=1;goto B20000f7f;
case 0xf84:goto L20000f84;
case 0xf87:c.instructions+=3;goto B20000f87;
case 0xf8a:c.instructions+=2;goto B20000f8a;
case 0xf8b:c.instructions+=1;goto B20000f8b;
case 0xf90:goto L20000f90;
case 0xf93:c.instructions+=3;goto B20000f93;
case 0xf96:c.instructions+=2;goto B20000f96;
case 0xf97:c.instructions+=1;goto B20000f97;
case 0xf9c:goto L20000f9c;
case 0xf9f:c.instructions+=4;goto B20000f9f;
case 0xfa2:c.instructions+=3;goto B20000fa2;
case 0xfa5:c.instructions+=2;goto B20000fa5;
case 0xfa6:c.instructions+=1;goto B20000fa6;
case 0xfab:goto L20000fab;
case 0xfae:c.instructions+=7;goto B20000fae;
case 0xfb1:c.instructions+=6;goto B20000fb1;
case 0xfb3:c.instructions+=5;goto B20000fb3;
case 0xfb6:c.instructions+=4;goto B20000fb6;
case 0xfb9:c.instructions+=3;goto B20000fb9;
case 0xfbc:c.instructions+=2;goto B20000fbc;
case 0xfbd:c.instructions+=1;goto B20000fbd;
case 0xfc2:goto L20000fc2;
case 0xfc5:c.instructions+=3;goto B20000fc5;
case 0xfc8:c.instructions+=2;goto B20000fc8;
case 0xfc9:c.instructions+=1;goto B20000fc9;
case 0xfce:goto L20000fce;
case 0xfd1:c.instructions+=4;goto B20000fd1;
case 0xfd4:c.instructions+=3;goto B20000fd4;
case 0xfd7:c.instructions+=2;goto B20000fd7;
case 0xfd8:c.instructions+=1;goto B20000fd8;
case 0xfdd:goto L20000fdd;
case 0xfe0:c.instructions+=3;goto B20000fe0;
case 0xfe3:c.instructions+=2;goto B20000fe3;
case 0xfe4:c.instructions+=1;goto B20000fe4;
case 0xfe9:goto L20000fe9;
case 0xfec:c.instructions+=3;goto B20000fec;
case 0xfef:c.instructions+=2;goto B20000fef;
case 0xff0:c.instructions+=1;goto B20000ff0;
case 0xff5:goto L20000ff5;
case 0xff8:c.instructions+=2;goto B20000ff8;
case 0xff9:c.instructions+=1;goto B20000ff9;
case 0xffe:goto L20000ffe;
case 0x1001:c.instructions+=3;goto B20001001;
case 0x1004:c.instructions+=2;goto B20001004;
case 0x1005:c.instructions+=1;goto B20001005;
case 0x100a:goto L2000100a;
case 0x100d:c.instructions+=3;goto B2000100d;
case 0x1010:c.instructions+=2;goto B20001010;
case 0x1011:c.instructions+=1;goto B20001011;
case 0x1016:goto L20001016;
case 0x1019:c.instructions+=3;goto B20001019;
case 0x101c:c.instructions+=2;goto B2000101c;
case 0x101d:c.instructions+=1;goto B2000101d;
case 0x1022:goto L20001022;
case 0x1025:c.instructions+=4;goto B20001025;
case 0x1028:c.instructions+=3;goto B20001028;
case 0x102b:c.instructions+=2;goto B2000102b;
case 0x102c:c.instructions+=1;goto B2000102c;
case 0x1031:goto L20001031;
case 0x1034:c.instructions+=7;goto B20001034;
case 0x1037:c.instructions+=6;goto B20001037;
case 0x1039:c.instructions+=5;goto B20001039;
case 0x103c:c.instructions+=4;goto B2000103c;
case 0x103f:c.instructions+=3;goto B2000103f;
case 0x1042:c.instructions+=2;goto B20001042;
case 0x1043:c.instructions+=1;goto B20001043;
case 0x1048:goto L20001048;
case 0x104b:c.instructions+=3;goto B2000104b;
case 0x104e:c.instructions+=2;goto B2000104e;
case 0x104f:c.instructions+=1;goto B2000104f;
case 0x1054:goto L20001054;
case 0x1057:c.instructions+=4;goto B20001057;
case 0x105a:c.instructions+=3;goto B2000105a;
case 0x105d:c.instructions+=2;goto B2000105d;
case 0x105e:c.instructions+=1;goto B2000105e;
case 0x1063:goto L20001063;
case 0x1066:c.instructions+=3;goto B20001066;
case 0x1069:c.instructions+=2;goto B20001069;
case 0x106a:c.instructions+=1;goto B2000106a;
case 0x106f:goto L2000106f;
case 0x1072:c.instructions+=3;goto B20001072;
case 0x1075:c.instructions+=2;goto B20001075;
case 0x1076:c.instructions+=1;goto B20001076;
case 0x107b:goto L2000107b;
case 0x107e:c.instructions+=2;goto B2000107e;
case 0x107f:c.instructions+=1;goto B2000107f;
case 0x1084:goto L20001084;
case 0x1087:c.instructions+=4;goto B20001087;
case 0x108a:c.instructions+=3;goto B2000108a;
case 0x108d:c.instructions+=2;goto B2000108d;
case 0x108e:c.instructions+=1;goto B2000108e;
case 0x1093:goto L20001093;
case 0x1096:c.instructions+=3;goto B20001096;
case 0x1099:c.instructions+=2;goto B20001099;
case 0x109a:c.instructions+=1;goto B2000109a;
case 0x109f:goto L2000109f;
case 0x10a2:c.instructions+=3;goto B200010a2;
case 0x10a5:c.instructions+=2;goto B200010a5;
case 0x10a6:c.instructions+=1;goto B200010a6;
case 0x10ab:goto L200010ab;
case 0x10ae:c.instructions+=4;goto B200010ae;
case 0x10b1:c.instructions+=3;goto B200010b1;
case 0x10b4:c.instructions+=2;goto B200010b4;
case 0x10b5:c.instructions+=1;goto B200010b5;
case 0x10ba:goto L200010ba;
case 0x10bd:c.instructions+=7;goto B200010bd;
case 0x10c0:c.instructions+=6;goto B200010c0;
case 0x10c2:c.instructions+=5;goto B200010c2;
case 0x10c5:c.instructions+=4;goto B200010c5;
case 0x10c8:c.instructions+=3;goto B200010c8;
case 0x10cb:c.instructions+=2;goto B200010cb;
case 0x10cc:c.instructions+=1;goto B200010cc;
case 0x10d1:goto L200010d1;
case 0x10d4:c.instructions+=3;goto B200010d4;
case 0x10d7:c.instructions+=2;goto B200010d7;
case 0x10d8:c.instructions+=1;goto B200010d8;
case 0x10dd:goto L200010dd;
case 0x10e0:c.instructions+=4;goto B200010e0;
case 0x10e3:c.instructions+=3;goto B200010e3;
case 0x10e6:c.instructions+=2;goto B200010e6;
case 0x10e7:c.instructions+=1;goto B200010e7;
case 0x10ec:goto L200010ec;
case 0x10ef:c.instructions+=3;goto B200010ef;
case 0x10f2:c.instructions+=2;goto B200010f2;
case 0x10f3:c.instructions+=1;goto B200010f3;
case 0x10f8:goto L200010f8;
case 0x10fb:c.instructions+=3;goto B200010fb;
case 0x10fe:c.instructions+=2;goto B200010fe;
case 0x10ff:c.instructions+=1;goto B200010ff;
case 0x1104:goto L20001104;
case 0x1107:c.instructions+=2;goto B20001107;
case 0x1108:c.instructions+=1;goto B20001108;
case 0x110d:goto L2000110d;
case 0x1110:c.instructions+=3;goto B20001110;
case 0x1113:c.instructions+=2;goto B20001113;
case 0x1114:c.instructions+=1;goto B20001114;
case 0x1119:goto L20001119;
case 0x111c:c.instructions+=2;goto B2000111c;
case 0x111d:c.instructions+=1;goto B2000111d;
case 0x1122:goto L20001122;
case 0x1125:c.instructions+=3;goto B20001125;
case 0x1128:c.instructions+=2;goto B20001128;
case 0x1129:c.instructions+=1;goto B20001129;
case 0x112e:goto L2000112e;
case 0x1131:c.instructions+=4;goto B20001131;
case 0x1134:c.instructions+=3;goto B20001134;
case 0x1137:c.instructions+=2;goto B20001137;
case 0x1138:c.instructions+=1;goto B20001138;
case 0x113d:goto L2000113d;
case 0x1140:c.instructions+=7;goto B20001140;
case 0x1143:c.instructions+=6;goto B20001143;
case 0x1145:c.instructions+=5;goto B20001145;
case 0x1148:c.instructions+=4;goto B20001148;
case 0x114b:c.instructions+=3;goto B2000114b;
case 0x114e:c.instructions+=2;goto B2000114e;
case 0x114f:c.instructions+=1;goto B2000114f;
case 0x1154:goto L20001154;
case 0x1157:c.instructions+=3;goto B20001157;
case 0x115a:c.instructions+=2;goto B2000115a;
case 0x115b:c.instructions+=1;goto B2000115b;
case 0x1160:goto L20001160;
case 0x1163:c.instructions+=4;goto B20001163;
case 0x1166:c.instructions+=3;goto B20001166;
case 0x1169:c.instructions+=2;goto B20001169;
case 0x116a:c.instructions+=1;goto B2000116a;
case 0x116f:goto L2000116f;
case 0x1172:c.instructions+=3;goto B20001172;
case 0x1175:c.instructions+=2;goto B20001175;
case 0x1176:c.instructions+=1;goto B20001176;
case 0x117b:goto L2000117b;
case 0x117e:c.instructions+=3;goto B2000117e;
case 0x1181:c.instructions+=2;goto B20001181;
case 0x1182:c.instructions+=1;goto B20001182;
case 0x1187:goto L20001187;
case 0x118a:c.instructions+=2;goto B2000118a;
case 0x118b:c.instructions+=1;goto B2000118b;
case 0x1190:goto L20001190;
case 0x1193:c.instructions+=3;goto B20001193;
case 0x1196:c.instructions+=2;goto B20001196;
case 0x1197:c.instructions+=1;goto B20001197;
default:missing_instruction(c.pc);}
B20000000:L20000000:{c.instructions+=4;NFSU2_TR((code+0x0u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000001:{NFSU2_TR((code+0x1u));
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B20000005:{NFSU2_TR((code+0x5u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000006:{NFSU2_TR((code+0x6u));
u8 U[4];
w4(U+0,u32(code+0xbu));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x71feefu);
}
B2000000b:L2000000b:{c.instructions+=4;NFSU2_TR((code+0xbu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000011:{NFSU2_TR((code+0x11u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x14ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x14ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x14ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B20000014:{NFSU2_TR((code+0x14u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000015:{NFSU2_TR((code+0x15u));
u8 U[4];
w4(U+0,u32(code+0x1au));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x71fefbu);
}
B2000001a:L2000001a:{c.instructions+=63;NFSU2_TR((code+0x1au));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x84ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000020:{NFSU2_TR((code+0x20u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B20000023:{NFSU2_TR((code+0x23u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000029:{NFSU2_TR((code+0x29u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B2000002c:{NFSU2_TR((code+0x2cu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000032:{NFSU2_TR((code+0x32u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B20000035:{NFSU2_TR((code+0x35u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x318ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B2000003b:{NFSU2_TR((code+0x3bu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B2000003e:{NFSU2_TR((code+0x3eu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000044:{NFSU2_TR((code+0x44u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B20000047:{NFSU2_TR((code+0x47u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B2000004d:{NFSU2_TR((code+0x4du));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B20000050:{NFSU2_TR((code+0x50u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000056:{NFSU2_TR((code+0x56u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B20000059:{NFSU2_TR((code+0x59u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B2000005f:{NFSU2_TR((code+0x5fu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B20000062:{NFSU2_TR((code+0x62u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000068:{NFSU2_TR((code+0x68u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B2000006b:{NFSU2_TR((code+0x6bu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000071:{NFSU2_TR((code+0x71u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B20000074:{NFSU2_TR((code+0x74u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x90ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B2000007a:{NFSU2_TR((code+0x7au));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B2000007d:{NFSU2_TR((code+0x7du));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x334ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000083:{NFSU2_TR((code+0x83u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B20000086:{NFSU2_TR((code+0x86u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x33cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B2000008c:{NFSU2_TR((code+0x8cu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B2000008f:{NFSU2_TR((code+0x8fu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa9cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000095:{NFSU2_TR((code+0x95u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb94ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B2000009b:{NFSU2_TR((code+0x9bu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200000a1:{NFSU2_TR((code+0xa1u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd84ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200000a7:{NFSU2_TR((code+0xa7u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x115cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200000ad:{NFSU2_TR((code+0xadu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x106cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200000b3:{NFSU2_TR((code+0xb3u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf74ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200000b9:{NFSU2_TR((code+0xb9u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe7cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200000bf:{NFSU2_TR((code+0xbfu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B200000c2:{NFSU2_TR((code+0xc2u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200000c8:{NFSU2_TR((code+0xc8u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B200000cb:{NFSU2_TR((code+0xcbu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x274ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200000d1:{NFSU2_TR((code+0xd1u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B200000d4:{NFSU2_TR((code+0xd4u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x854ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200000da:{NFSU2_TR((code+0xdau));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x890ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200000e0:{NFSU2_TR((code+0xe0u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x534ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200000e6:{NFSU2_TR((code+0xe6u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x570ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200000ec:{NFSU2_TR((code+0xecu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B200000ef:{NFSU2_TR((code+0xefu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x94cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200000f5:{NFSU2_TR((code+0xf5u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x98cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200000fb:{NFSU2_TR((code+0xfbu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x62cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000101:{NFSU2_TR((code+0x101u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x66cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000107:{NFSU2_TR((code+0x107u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B2000010a:{NFSU2_TR((code+0x10au));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x91cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000110:{NFSU2_TR((code+0x110u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8d0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000116:{NFSU2_TR((code+0x116u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5fcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B2000011c:{NFSU2_TR((code+0x11cu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5b0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000122:{NFSU2_TR((code+0x122u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B20000125:{NFSU2_TR((code+0x125u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2e4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B2000012b:{NFSU2_TR((code+0x12bu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B2000012e:{NFSU2_TR((code+0x12eu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2bcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000134:{NFSU2_TR((code+0x134u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B20000137:{NFSU2_TR((code+0x137u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10c4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B2000013d:{NFSU2_TR((code+0x13du));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x7cull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x7cull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x7cull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B20000140:{NFSU2_TR((code+0x140u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x0ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x0ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B20000143:{NFSU2_TR((code+0x143u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000144:{NFSU2_TR((code+0x144u));
u8 U[4];
w4(U+0,u32(code+0x149u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720ff8u);
}
B20000149:L20000149:{c.instructions+=5;NFSU2_TR((code+0x149u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2f4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B2000014f:{NFSU2_TR((code+0x14fu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2dcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000155:{NFSU2_TR((code+0x155u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0xcull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0xcull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xcull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B20000158:{NFSU2_TR((code+0x158u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000159:{NFSU2_TR((code+0x159u));
u8 U[4];
w4(U+0,u32(code+0x15eu));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720ff8u);
}
B2000015e:L2000015e:{c.instructions+=5;NFSU2_TR((code+0x15eu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000161:{NFSU2_TR((code+0x161u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000164:{NFSU2_TR((code+0x164u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0xcull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0xcull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xcull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B20000167:{NFSU2_TR((code+0x167u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000168:{NFSU2_TR((code+0x168u));
u8 U[4];
w4(U+0,u32(code+0x16du));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720340u);
}
B2000016d:L2000016d:{c.instructions+=4;NFSU2_TR((code+0x16du));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2f4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000173:{NFSU2_TR((code+0x173u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x18ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x18ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x18ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B20000176:{NFSU2_TR((code+0x176u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000177:{NFSU2_TR((code+0x177u));
u8 U[4];
w4(U+0,u32(code+0x17cu));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720340u);
}
B2000017c:L2000017c:{c.instructions+=8;NFSU2_TR((code+0x17cu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2d8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000182:{NFSU2_TR((code+0x182u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x18ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x18ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x18ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B20000185:{NFSU2_TR((code+0x185u));
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B20000187:{NFSU2_TR((code+0x187u));
u8 U[14];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,carry<u32>(r4(R+0),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,scarry<u32>(r4(R+0),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B2000018a:{NFSU2_TR((code+0x18au));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B2000018d:{NFSU2_TR((code+0x18du));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x8ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x8ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B20000190:{NFSU2_TR((code+0x190u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000191:{NFSU2_TR((code+0x191u));
u8 U[4];
w4(U+0,u32(code+0x196u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720e48u);
}
B20000196:L20000196:{c.instructions+=4;NFSU2_TR((code+0x196u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x25cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B2000019c:{NFSU2_TR((code+0x19cu));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x10ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x10ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B2000019f:{NFSU2_TR((code+0x19fu));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B200001a0:{NFSU2_TR((code+0x1a0u));
u8 U[4];
w4(U+0,u32(code+0x1a5u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720e48u);
}
B200001a5:L200001a5:{c.instructions+=4;NFSU2_TR((code+0x1a5u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200001a8:{NFSU2_TR((code+0x1a8u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x10ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x10ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B200001ab:{NFSU2_TR((code+0x1abu));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B200001ac:{NFSU2_TR((code+0x1acu));
u8 U[4];
w4(U+0,u32(code+0x1b1u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720e48u);
}
B200001b1:L200001b1:{c.instructions+=4;NFSU2_TR((code+0x1b1u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200001b4:{NFSU2_TR((code+0x1b4u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x10ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x10ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B200001b7:{NFSU2_TR((code+0x1b7u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B200001b8:{NFSU2_TR((code+0x1b8u));
u8 U[4];
w4(U+0,u32(code+0x1bdu));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720ff8u);
}
B200001bd:L200001bd:{c.instructions+=7;NFSU2_TR((code+0x1bdu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x108ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200001c3:{NFSU2_TR((code+0x1c3u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x124ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200001c9:{NFSU2_TR((code+0x1c9u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x140ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200001cf:{NFSU2_TR((code+0x1cfu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x15cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200001d5:{NFSU2_TR((code+0x1d5u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0xcull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0xcull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xcull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B200001d8:{NFSU2_TR((code+0x1d8u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B200001d9:{NFSU2_TR((code+0x1d9u));
u8 U[4];
w4(U+0,u32(code+0x1deu));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720ff8u);
}
B200001de:L200001de:{c.instructions+=32;NFSU2_TR((code+0x1deu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200001e1:{NFSU2_TR((code+0x1e1u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x888ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200001e7:{NFSU2_TR((code+0x1e7u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x688ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200001ed:{NFSU2_TR((code+0x1edu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x67cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200001f3:{NFSU2_TR((code+0x1f3u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x790ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200001f9:{NFSU2_TR((code+0x1f9u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x634ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200001ff:{NFSU2_TR((code+0x1ffu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x628ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000205:{NFSU2_TR((code+0x205u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5a4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B2000020b:{NFSU2_TR((code+0x20bu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5c8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000211:{NFSU2_TR((code+0x211u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5b0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000217:{NFSU2_TR((code+0x217u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7ccull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B2000021d:{NFSU2_TR((code+0x21du));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6e4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000223:{NFSU2_TR((code+0x223u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6d8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000229:{NFSU2_TR((code+0x229u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x568ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B2000022f:{NFSU2_TR((code+0x22fu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x368ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000235:{NFSU2_TR((code+0x235u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x35cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B2000023b:{NFSU2_TR((code+0x23bu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x470ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000241:{NFSU2_TR((code+0x241u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x314ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000247:{NFSU2_TR((code+0x247u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x308ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B2000024d:{NFSU2_TR((code+0x24du));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x284ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000253:{NFSU2_TR((code+0x253u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2a8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000259:{NFSU2_TR((code+0x259u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x290ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B2000025f:{NFSU2_TR((code+0x25fu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4acull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000265:{NFSU2_TR((code+0x265u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3c4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B2000026b:{NFSU2_TR((code+0x26bu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3b8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000271:{NFSU2_TR((code+0x271u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0xcull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0xcull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xcull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B20000274:{NFSU2_TR((code+0x274u));
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B20000276:{NFSU2_TR((code+0x276u));
u8 U[44];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w8(U+16,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+24,u64(s64(s32(r4(U+4)))));
w8(U+32,u64(u64(r8(U+16))*u64(r8(U+24))));
w4(R+0,u32(r8(U+32)));
w4(U+40,u32(u64(r8(U+32))>>32));
w8(U+8,u64(s64(s32(r4(R+0)))));
w1(R+512,u8((r8(U+8))!=(r8(U+32))));
__builtin_memmove((R+523),(R+512),1);
}
B2000027a:{NFSU2_TR((code+0x27au));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B2000027d:{NFSU2_TR((code+0x27du));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x8ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x8ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B20000280:{NFSU2_TR((code+0x280u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000281:{NFSU2_TR((code+0x281u));
u8 U[4];
w4(U+0,u32(code+0x286u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x7207bfu);
}
B20000286:L20000286:{c.instructions+=4;NFSU2_TR((code+0x286u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000289:{NFSU2_TR((code+0x289u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x8ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x8ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B2000028c:{NFSU2_TR((code+0x28cu));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B2000028d:{NFSU2_TR((code+0x28du));
u8 U[4];
w4(U+0,u32(code+0x292u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720767u);
}
B20000292:L20000292:{c.instructions+=4;NFSU2_TR((code+0x292u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000295:{NFSU2_TR((code+0x295u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0xcull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0xcull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xcull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B20000298:{NFSU2_TR((code+0x298u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000299:{NFSU2_TR((code+0x299u));
u8 U[4];
w4(U+0,u32(code+0x29eu));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720fd1u);
}
B2000029e:L2000029e:{c.instructions+=20;NFSU2_TR((code+0x29eu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200002a1:{NFSU2_TR((code+0x2a1u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200002a4:{NFSU2_TR((code+0x2a4u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200002a7:{NFSU2_TR((code+0x2a7u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200002aa:{NFSU2_TR((code+0x2aau));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200002ad:{NFSU2_TR((code+0x2adu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200002b0:{NFSU2_TR((code+0x2b0u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200002b3:{NFSU2_TR((code+0x2b3u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200002b6:{NFSU2_TR((code+0x2b6u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200002b9:{NFSU2_TR((code+0x2b9u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x10ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x10ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B200002bc:{NFSU2_TR((code+0x2bcu));
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B200002be:{NFSU2_TR((code+0x2beu));
u8 U[44];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w8(U+16,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+24,u64(s64(s32(r4(U+4)))));
w8(U+32,u64(u64(r8(U+16))*u64(r8(U+24))));
w4(R+0,u32(r8(U+32)));
w4(U+40,u32(u64(r8(U+32))>>32));
w8(U+8,u64(s64(s32(r4(R+0)))));
w1(R+512,u8((r8(U+8))!=(r8(U+32))));
__builtin_memmove((R+523),(R+512),1);
}
B200002c2:{NFSU2_TR((code+0x2c2u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x944ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200002c8:{NFSU2_TR((code+0x2c8u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x8ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x8ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B200002cb:{NFSU2_TR((code+0x2cbu));
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B200002cd:{NFSU2_TR((code+0x2cdu));
u8 U[44];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w8(U+16,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+24,u64(s64(s32(r4(U+4)))));
w8(U+32,u64(u64(r8(U+16))*u64(r8(U+24))));
w4(R+0,u32(r8(U+32)));
w4(U+40,u32(u64(r8(U+32))>>32));
w8(U+8,u64(s64(s32(r4(R+0)))));
w1(R+512,u8((r8(U+8))!=(r8(U+32))));
__builtin_memmove((R+523),(R+512),1);
}
B200002d1:{NFSU2_TR((code+0x2d1u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa34ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200002d7:{NFSU2_TR((code+0x2d7u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x8ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x8ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B200002da:{NFSU2_TR((code+0x2dau));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B200002db:{NFSU2_TR((code+0x2dbu));
u8 U[4];
w4(U+0,u32(code+0x2e0u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x7207bfu);
}
B200002e0:L200002e0:{c.instructions+=4;NFSU2_TR((code+0x2e0u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200002e6:{NFSU2_TR((code+0x2e6u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x8ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x8ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B200002e9:{NFSU2_TR((code+0x2e9u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B200002ea:{NFSU2_TR((code+0x2eau));
u8 U[4];
w4(U+0,u32(code+0x2efu));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x7207bfu);
}
B200002ef:L200002ef:{c.instructions+=8;NFSU2_TR((code+0x2efu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200002f5:{NFSU2_TR((code+0x2f5u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x8ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x8ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B200002f8:{NFSU2_TR((code+0x2f8u));
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B200002fa:{NFSU2_TR((code+0x2fau));
u8 U[44];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w8(U+16,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+24,u64(s64(s32(r4(U+4)))));
w8(U+32,u64(u64(r8(U+16))*u64(r8(U+24))));
w4(R+0,u32(r8(U+32)));
w4(U+40,u32(u64(r8(U+32))>>32));
w8(U+8,u64(s64(s32(r4(R+0)))));
w1(R+512,u8((r8(U+8))!=(r8(U+32))));
__builtin_memmove((R+523),(R+512),1);
}
B200002fe:{NFSU2_TR((code+0x2feu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd04ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000304:{NFSU2_TR((code+0x304u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x8ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x8ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B20000307:{NFSU2_TR((code+0x307u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000308:{NFSU2_TR((code+0x308u));
u8 U[4];
w4(U+0,u32(code+0x30du));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x7207bfu);
}
B2000030d:L2000030d:{c.instructions+=8;NFSU2_TR((code+0x30du));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xeecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000313:{NFSU2_TR((code+0x313u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x8ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x8ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B20000316:{NFSU2_TR((code+0x316u));
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B20000318:{NFSU2_TR((code+0x318u));
u8 U[44];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w8(U+16,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+24,u64(s64(s32(r4(U+4)))));
w8(U+32,u64(u64(r8(U+16))*u64(r8(U+24))));
w4(R+0,u32(r8(U+32)));
w4(U+40,u32(u64(r8(U+32))>>32));
w8(U+8,u64(s64(s32(r4(R+0)))));
w1(R+512,u8((r8(U+8))!=(r8(U+32))));
__builtin_memmove((R+523),(R+512),1);
}
B2000031c:{NFSU2_TR((code+0x31cu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xdecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000322:{NFSU2_TR((code+0x322u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x8ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x8ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B20000325:{NFSU2_TR((code+0x325u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000326:{NFSU2_TR((code+0x326u));
u8 U[4];
w4(U+0,u32(code+0x32bu));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x7207bfu);
}
B2000032b:L2000032b:{c.instructions+=3;NFSU2_TR((code+0x32bu));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x8ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x8ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B2000032e:{NFSU2_TR((code+0x32eu));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B2000032f:{NFSU2_TR((code+0x32fu));
u8 U[4];
w4(U+0,u32(code+0x334u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x7207bfu);
}
B20000334:L20000334:{c.instructions+=3;NFSU2_TR((code+0x334u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x8ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x8ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B20000337:{NFSU2_TR((code+0x337u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000338:{NFSU2_TR((code+0x338u));
u8 U[4];
w4(U+0,u32(code+0x33du));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x7204f3u);
}
B2000033d:L2000033d:{c.instructions+=4;NFSU2_TR((code+0x33du));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x874ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000343:{NFSU2_TR((code+0x343u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x10ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x10ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B20000346:{NFSU2_TR((code+0x346u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000347:{NFSU2_TR((code+0x347u));
u8 U[4];
w4(U+0,u32(code+0x34cu));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x7204f3u);
}
B2000034c:L2000034c:{c.instructions+=4;NFSU2_TR((code+0x34cu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x95cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000352:{NFSU2_TR((code+0x352u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x10ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x10ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B20000355:{NFSU2_TR((code+0x355u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000356:{NFSU2_TR((code+0x356u));
u8 U[4];
w4(U+0,u32(code+0x35bu));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x7204f3u);
}
B2000035b:L2000035b:{c.instructions+=4;NFSU2_TR((code+0x35bu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa44ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000361:{NFSU2_TR((code+0x361u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x10ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x10ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B20000364:{NFSU2_TR((code+0x364u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000365:{NFSU2_TR((code+0x365u));
u8 U[4];
w4(U+0,u32(code+0x36au));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x7204f3u);
}
B2000036a:L2000036a:{c.instructions+=4;NFSU2_TR((code+0x36au));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb2cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000370:{NFSU2_TR((code+0x370u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x10ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x10ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B20000373:{NFSU2_TR((code+0x373u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000374:{NFSU2_TR((code+0x374u));
u8 U[4];
w4(U+0,u32(code+0x379u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x7204f3u);
}
B20000379:L20000379:{c.instructions+=4;NFSU2_TR((code+0x379u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B2000037f:{NFSU2_TR((code+0x37fu));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x10ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x10ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B20000382:{NFSU2_TR((code+0x382u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000383:{NFSU2_TR((code+0x383u));
u8 U[4];
w4(U+0,u32(code+0x388u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x7204f3u);
}
B20000388:L20000388:{c.instructions+=4;NFSU2_TR((code+0x388u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcfcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B2000038e:{NFSU2_TR((code+0x38eu));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x10ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x10ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B20000391:{NFSU2_TR((code+0x391u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000392:{NFSU2_TR((code+0x392u));
u8 U[4];
w4(U+0,u32(code+0x397u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x7204f3u);
}
B20000397:L20000397:{c.instructions+=4;NFSU2_TR((code+0x397u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xde4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B2000039d:{NFSU2_TR((code+0x39du));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x10ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x10ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B200003a0:{NFSU2_TR((code+0x3a0u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B200003a1:{NFSU2_TR((code+0x3a1u));
u8 U[4];
w4(U+0,u32(code+0x3a6u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x7204f3u);
}
B200003a6:L200003a6:{c.instructions+=5;NFSU2_TR((code+0x3a6u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7ecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200003ac:{NFSU2_TR((code+0x3acu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200003af:{NFSU2_TR((code+0x3afu));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x10ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x10ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B200003b2:{NFSU2_TR((code+0x3b2u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B200003b3:{NFSU2_TR((code+0x3b3u));
u8 U[4];
w4(U+0,u32(code+0x3b8u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720ff8u);
}
B200003b8:L200003b8:{c.instructions+=4;NFSU2_TR((code+0x3b8u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbbcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200003be:{NFSU2_TR((code+0x3beu));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0xcull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0xcull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xcull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B200003c1:{NFSU2_TR((code+0x3c1u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B200003c2:{NFSU2_TR((code+0x3c2u));
u8 U[4];
w4(U+0,u32(code+0x3c7u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x7204f3u);
}
B200003c7:L200003c7:{c.instructions+=5;NFSU2_TR((code+0x3c7u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8c8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200003cd:{NFSU2_TR((code+0x3cdu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200003d0:{NFSU2_TR((code+0x3d0u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x10ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x10ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B200003d3:{NFSU2_TR((code+0x3d3u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B200003d4:{NFSU2_TR((code+0x3d4u));
u8 U[4];
w4(U+0,u32(code+0x3d9u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720ff8u);
}
B200003d9:L200003d9:{c.instructions+=4;NFSU2_TR((code+0x3d9u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc98ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200003df:{NFSU2_TR((code+0x3dfu));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0xcull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0xcull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xcull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B200003e2:{NFSU2_TR((code+0x3e2u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B200003e3:{NFSU2_TR((code+0x3e3u));
u8 U[4];
w4(U+0,u32(code+0x3e8u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x7204f3u);
}
B200003e8:L200003e8:{c.instructions+=6;NFSU2_TR((code+0x3e8u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9a4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200003ee:{NFSU2_TR((code+0x3eeu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200003f1:{NFSU2_TR((code+0x3f1u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x10ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x10ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B200003f4:{NFSU2_TR((code+0x3f4u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x7cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x7cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x7cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B200003f7:{NFSU2_TR((code+0x3f7u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B200003f8:{NFSU2_TR((code+0x3f8u));
u8 U[4];
w4(U+0,u32(code+0x3fdu));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720ff8u);
}
B200003fd:L200003fd:{c.instructions+=4;NFSU2_TR((code+0x3fdu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd74ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000403:{NFSU2_TR((code+0x403u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0xcull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0xcull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xcull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B20000406:{NFSU2_TR((code+0x406u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000407:{NFSU2_TR((code+0x407u));
u8 U[4];
w4(U+0,u32(code+0x40cu));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x7204f3u);
}
B2000040c:L2000040c:{c.instructions+=5;NFSU2_TR((code+0x40cu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa80ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000412:{NFSU2_TR((code+0x412u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000415:{NFSU2_TR((code+0x415u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x10ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x10ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B20000418:{NFSU2_TR((code+0x418u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000419:{NFSU2_TR((code+0x419u));
u8 U[4];
w4(U+0,u32(code+0x41eu));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720ff8u);
}
B2000041e:L2000041e:{c.instructions+=4;NFSU2_TR((code+0x41eu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe50ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000424:{NFSU2_TR((code+0x424u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0xcull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0xcull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xcull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B20000427:{NFSU2_TR((code+0x427u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000428:{NFSU2_TR((code+0x428u));
u8 U[4];
w4(U+0,u32(code+0x42du));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x7204f3u);
}
B2000042d:L2000042d:{c.instructions+=4;NFSU2_TR((code+0x42du));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000433:{NFSU2_TR((code+0x433u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x10ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x10ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B20000436:{NFSU2_TR((code+0x436u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000437:{NFSU2_TR((code+0x437u));
u8 U[4];
w4(U+0,u32(code+0x43cu));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720e48u);
}
B2000043c:L2000043c:{c.instructions+=4;NFSU2_TR((code+0x43cu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B2000043f:{NFSU2_TR((code+0x43fu));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x10ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x10ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B20000442:{NFSU2_TR((code+0x442u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000443:{NFSU2_TR((code+0x443u));
u8 U[4];
w4(U+0,u32(code+0x448u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720340u);
}
B20000448:L20000448:{c.instructions+=4;NFSU2_TR((code+0x448u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B2000044b:{NFSU2_TR((code+0x44bu));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x18ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x18ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x18ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B2000044e:{NFSU2_TR((code+0x44eu));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B2000044f:{NFSU2_TR((code+0x44fu));
u8 U[4];
w4(U+0,u32(code+0x454u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x72023cu);
}
B20000454:L20000454:{c.instructions+=4;NFSU2_TR((code+0x454u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000457:{NFSU2_TR((code+0x457u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x10ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x10ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B2000045a:{NFSU2_TR((code+0x45au));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B2000045b:{NFSU2_TR((code+0x45bu));
u8 U[4];
w4(U+0,u32(code+0x460u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720e48u);
}
B20000460:L20000460:{c.instructions+=4;NFSU2_TR((code+0x460u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000463:{NFSU2_TR((code+0x463u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x10ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x10ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B20000466:{NFSU2_TR((code+0x466u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000467:{NFSU2_TR((code+0x467u));
u8 U[4];
w4(U+0,u32(code+0x46cu));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720ff8u);
}
B2000046c:L2000046c:{c.instructions+=4;NFSU2_TR((code+0x46cu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B2000046f:{NFSU2_TR((code+0x46fu));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0xcull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0xcull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xcull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B20000472:{NFSU2_TR((code+0x472u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000473:{NFSU2_TR((code+0x473u));
u8 U[4];
w4(U+0,u32(code+0x478u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x7204f3u);
}
B20000478:L20000478:{c.instructions+=4;NFSU2_TR((code+0x478u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B2000047b:{NFSU2_TR((code+0x47bu));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x10ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x10ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B2000047e:{NFSU2_TR((code+0x47eu));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B2000047f:{NFSU2_TR((code+0x47fu));
u8 U[4];
w4(U+0,u32(code+0x484u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720738u);
}
B20000484:L20000484:{c.instructions+=4;NFSU2_TR((code+0x484u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000487:{NFSU2_TR((code+0x487u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x18ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x18ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x18ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B2000048a:{NFSU2_TR((code+0x48au));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B2000048b:{NFSU2_TR((code+0x48bu));
u8 U[4];
w4(U+0,u32(code+0x490u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720f32u);
}
B20000490:L20000490:{c.instructions+=11;NFSU2_TR((code+0x490u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7c0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000496:{NFSU2_TR((code+0x496u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xba0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B2000049c:{NFSU2_TR((code+0x49cu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8b8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200004a2:{NFSU2_TR((code+0x4a2u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc98ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200004a8:{NFSU2_TR((code+0x4a8u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd90ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200004ae:{NFSU2_TR((code+0x4aeu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9b0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200004b4:{NFSU2_TR((code+0x4b4u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xaa8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200004ba:{NFSU2_TR((code+0x4bau));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe80ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200004c0:{NFSU2_TR((code+0x4c0u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x1cull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x1cull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1cull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B200004c3:{NFSU2_TR((code+0x4c3u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B200004c4:{NFSU2_TR((code+0x4c4u));
u8 U[4];
w4(U+0,u32(code+0x4c9u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720fd1u);
}
B200004c9:L200004c9:{c.instructions+=4;NFSU2_TR((code+0x4c9u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200004cc:{NFSU2_TR((code+0x4ccu));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x10ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x10ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B200004cf:{NFSU2_TR((code+0x4cfu));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B200004d0:{NFSU2_TR((code+0x4d0u));
u8 U[4];
w4(U+0,u32(code+0x4d5u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720ff8u);
}
B200004d5:L200004d5:{c.instructions+=10;NFSU2_TR((code+0x4d5u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6d0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200004db:{NFSU2_TR((code+0x4dbu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7c8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200004e1:{NFSU2_TR((code+0x4e1u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8c0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200004e7:{NFSU2_TR((code+0x4e7u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9b8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200004ed:{NFSU2_TR((code+0x4edu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xab0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200004f3:{NFSU2_TR((code+0x4f3u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xba8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200004f9:{NFSU2_TR((code+0x4f9u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xca0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200004ff:{NFSU2_TR((code+0x4ffu));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0xcull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0xcull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xcull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B20000502:{NFSU2_TR((code+0x502u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000503:{NFSU2_TR((code+0x503u));
u8 U[4];
w4(U+0,u32(code+0x508u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720fd1u);
}
B20000508:L20000508:{c.instructions+=22;NFSU2_TR((code+0x508u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd64ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B2000050e:{NFSU2_TR((code+0x50eu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc6cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000514:{NFSU2_TR((code+0x514u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb74ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B2000051a:{NFSU2_TR((code+0x51au));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa7cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000520:{NFSU2_TR((code+0x520u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x984ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000526:{NFSU2_TR((code+0x526u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x88cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B2000052c:{NFSU2_TR((code+0x52cu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x794ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000532:{NFSU2_TR((code+0x532u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe54ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000538:{NFSU2_TR((code+0x538u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x10ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x10ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B2000053b:{NFSU2_TR((code+0x53bu));
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B2000053d:{NFSU2_TR((code+0x53du));
u8 U[14];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,carry<u32>(r4(R+0),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,scarry<u32>(r4(R+0),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B20000540:{NFSU2_TR((code+0x540u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd3cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000546:{NFSU2_TR((code+0x546u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc44ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B2000054c:{NFSU2_TR((code+0x54cu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000552:{NFSU2_TR((code+0x552u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x76cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000558:{NFSU2_TR((code+0x558u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x864ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B2000055e:{NFSU2_TR((code+0x55eu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x95cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000564:{NFSU2_TR((code+0x564u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa54ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B2000056a:{NFSU2_TR((code+0x56au));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe2cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000570:{NFSU2_TR((code+0x570u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x8ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x8ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B20000573:{NFSU2_TR((code+0x573u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000574:{NFSU2_TR((code+0x574u));
u8 U[4];
w4(U+0,u32(code+0x579u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720340u);
}
B20000579:L20000579:{c.instructions+=4;NFSU2_TR((code+0x579u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B2000057c:{NFSU2_TR((code+0x57cu));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x18ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x18ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x18ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B2000057f:{NFSU2_TR((code+0x57fu));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000580:{NFSU2_TR((code+0x580u));
u8 U[4];
w4(U+0,u32(code+0x585u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720340u);
}
B20000585:L20000585:{c.instructions+=4;NFSU2_TR((code+0x585u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000588:{NFSU2_TR((code+0x588u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x18ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x18ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x18ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B2000058b:{NFSU2_TR((code+0x58bu));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B2000058c:{NFSU2_TR((code+0x58cu));
u8 U[4];
w4(U+0,u32(code+0x591u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x7203ebu);
}
B20000591:L20000591:{c.instructions+=8;NFSU2_TR((code+0x591u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000597:{NFSU2_TR((code+0x597u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x18ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x18ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x18ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B2000059a:{NFSU2_TR((code+0x59au));
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B2000059c:{NFSU2_TR((code+0x59cu));
u8 U[14];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
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
B2000059f:{NFSU2_TR((code+0x59fu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200005a2:{NFSU2_TR((code+0x5a2u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x8ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x8ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B200005a5:{NFSU2_TR((code+0x5a5u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B200005a6:{NFSU2_TR((code+0x5a6u));
u8 U[4];
w4(U+0,u32(code+0x5abu));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720ff8u);
}
B200005ab:L200005ab:{c.instructions+=4;NFSU2_TR((code+0x5abu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200005ae:{NFSU2_TR((code+0x5aeu));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0xcull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0xcull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xcull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B200005b1:{NFSU2_TR((code+0x5b1u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B200005b2:{NFSU2_TR((code+0x5b2u));
u8 U[4];
w4(U+0,u32(code+0x5b7u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720ff8u);
}
B200005b7:L200005b7:{c.instructions+=6;NFSU2_TR((code+0x5b7u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200005ba:{NFSU2_TR((code+0x5bau));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0xcull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0xcull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xcull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B200005bd:{NFSU2_TR((code+0x5bdu));
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B200005bf:{NFSU2_TR((code+0x5bfu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B200005c2:{NFSU2_TR((code+0x5c2u));
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
B200005c4:{NFSU2_TR((code+0x5c4u));
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L200005c8;}}
}
B200005c6:L200005c6:{c.instructions+=1;NFSU2_TR((code+0x5c6u));
__builtin_memmove((R+0),(R+4),4);
}
B200005c8:L200005c8:{c.instructions+=4;NFSU2_TR((code+0x5c8u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200005cb:{NFSU2_TR((code+0x5cbu));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x8ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x8ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B200005ce:{NFSU2_TR((code+0x5ceu));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B200005cf:{NFSU2_TR((code+0x5cfu));
u8 U[4];
w4(U+0,u32(code+0x5d4u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720ff8u);
}
B200005d4:L200005d4:{c.instructions+=4;NFSU2_TR((code+0x5d4u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200005d7:{NFSU2_TR((code+0x5d7u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0xcull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0xcull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xcull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B200005da:{NFSU2_TR((code+0x5dau));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B200005db:{NFSU2_TR((code+0x5dbu));
u8 U[4];
w4(U+0,u32(code+0x5e0u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720fd1u);
}
B200005e0:L200005e0:{c.instructions+=4;NFSU2_TR((code+0x5e0u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200005e3:{NFSU2_TR((code+0x5e3u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x10ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x10ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B200005e6:{NFSU2_TR((code+0x5e6u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B200005e7:{NFSU2_TR((code+0x5e7u));
u8 U[4];
w4(U+0,u32(code+0x5ecu));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720684u);
}
B200005ec:L200005ec:{c.instructions+=12;NFSU2_TR((code+0x5ecu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200005ef:{NFSU2_TR((code+0x5efu));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x14ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x14ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x14ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B200005f2:{NFSU2_TR((code+0x5f2u));
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B200005f4:{NFSU2_TR((code+0x5f4u));
u8 U[14];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,carry<u32>(r4(R+0),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,scarry<u32>(r4(R+0),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B200005f7:{NFSU2_TR((code+0x5f7u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x178ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200005fd:{NFSU2_TR((code+0x5fdu));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x8ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x8ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B20000600:{NFSU2_TR((code+0x600u));
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B20000602:{NFSU2_TR((code+0x602u));
u8 U[44];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w8(U+16,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+24,u64(s64(s32(r4(U+4)))));
w8(U+32,u64(u64(r8(U+16))*u64(r8(U+24))));
w4(R+0,u32(r8(U+32)));
w4(U+40,u32(u64(r8(U+32))>>32));
w8(U+8,u64(s64(s32(r4(R+0)))));
w1(R+512,u8((r8(U+8))!=(r8(U+32))));
__builtin_memmove((R+523),(R+512),1);
}
B20000606:{NFSU2_TR((code+0x606u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000609:{NFSU2_TR((code+0x609u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x8ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x8ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B2000060c:{NFSU2_TR((code+0x60cu));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B2000060d:{NFSU2_TR((code+0x60du));
u8 U[4];
w4(U+0,u32(code+0x612u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x7207bfu);
}
B20000612:L20000612:{c.instructions+=10;NFSU2_TR((code+0x612u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000615:{NFSU2_TR((code+0x615u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x8ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x8ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B20000618:{NFSU2_TR((code+0x618u));
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B2000061a:{NFSU2_TR((code+0x61au));
u8 U[44];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w8(U+16,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+24,u64(s64(s32(r4(U+4)))));
w8(U+32,u64(u64(r8(U+16))*u64(r8(U+24))));
w4(R+0,u32(r8(U+32)));
w4(U+40,u32(u64(r8(U+32))>>32));
w8(U+8,u64(s64(s32(r4(R+0)))));
w1(R+512,u8((r8(U+8))!=(r8(U+32))));
__builtin_memmove((R+523),(R+512),1);
}
B2000061e:{NFSU2_TR((code+0x61eu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x144ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000624:{NFSU2_TR((code+0x624u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x8ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x8ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B20000627:{NFSU2_TR((code+0x627u));
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B20000629:{NFSU2_TR((code+0x629u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B2000062c:{NFSU2_TR((code+0x62cu));
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
B2000062e:{NFSU2_TR((code+0x62eu));
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L20000632;}}
}
B20000630:L20000630:{c.instructions+=1;NFSU2_TR((code+0x630u));
__builtin_memmove((R+0),(R+4),4);
}
B20000632:L20000632:{c.instructions+=4;NFSU2_TR((code+0x632u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x15cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000638:{NFSU2_TR((code+0x638u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x8ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x8ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B2000063b:{NFSU2_TR((code+0x63bu));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B2000063c:{NFSU2_TR((code+0x63cu));
u8 U[4];
w4(U+0,u32(code+0x641u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720ff8u);
}
B20000641:L20000641:{c.instructions+=6;NFSU2_TR((code+0x641u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000644:{NFSU2_TR((code+0x644u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0xcull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0xcull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xcull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B20000647:{NFSU2_TR((code+0x647u));
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B20000649:{NFSU2_TR((code+0x649u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B2000064c:{NFSU2_TR((code+0x64cu));
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
B2000064e:{NFSU2_TR((code+0x64eu));
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L20000652;}}
}
B20000650:L20000650:{c.instructions+=1;NFSU2_TR((code+0x650u));
__builtin_memmove((R+0),(R+4),4);
}
B20000652:L20000652:{c.instructions+=4;NFSU2_TR((code+0x652u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000655:{NFSU2_TR((code+0x655u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x8ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x8ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B20000658:{NFSU2_TR((code+0x658u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000659:{NFSU2_TR((code+0x659u));
u8 U[4];
w4(U+0,u32(code+0x65eu));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720ff8u);
}
B2000065e:L2000065e:{c.instructions+=4;NFSU2_TR((code+0x65eu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000661:{NFSU2_TR((code+0x661u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0xcull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0xcull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xcull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B20000664:{NFSU2_TR((code+0x664u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000665:{NFSU2_TR((code+0x665u));
u8 U[4];
w4(U+0,u32(code+0x66au));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720fd1u);
}
B2000066a:L2000066a:{c.instructions+=4;NFSU2_TR((code+0x66au));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B2000066d:{NFSU2_TR((code+0x66du));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x10ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x10ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B20000670:{NFSU2_TR((code+0x670u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000671:{NFSU2_TR((code+0x671u));
u8 U[4];
w4(U+0,u32(code+0x676u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720684u);
}
B20000676:L20000676:{c.instructions+=12;NFSU2_TR((code+0x676u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000679:{NFSU2_TR((code+0x679u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x14ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x14ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x14ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B2000067c:{NFSU2_TR((code+0x67cu));
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B2000067e:{NFSU2_TR((code+0x67eu));
u8 U[14];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,carry<u32>(r4(R+0),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,scarry<u32>(r4(R+0),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B20000681:{NFSU2_TR((code+0x681u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x204ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000687:{NFSU2_TR((code+0x687u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x8ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x8ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B2000068a:{NFSU2_TR((code+0x68au));
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B2000068c:{NFSU2_TR((code+0x68cu));
u8 U[44];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w8(U+16,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+24,u64(s64(s32(r4(U+4)))));
w8(U+32,u64(u64(r8(U+16))*u64(r8(U+24))));
w4(R+0,u32(r8(U+32)));
w4(U+40,u32(u64(r8(U+32))>>32));
w8(U+8,u64(s64(s32(r4(R+0)))));
w1(R+512,u8((r8(U+8))!=(r8(U+32))));
__builtin_memmove((R+523),(R+512),1);
}
B20000690:{NFSU2_TR((code+0x690u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1e0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000696:{NFSU2_TR((code+0x696u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x8ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x8ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B20000699:{NFSU2_TR((code+0x699u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B2000069a:{NFSU2_TR((code+0x69au));
u8 U[4];
w4(U+0,u32(code+0x69fu));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720ff8u);
}
B2000069f:L2000069f:{c.instructions+=6;NFSU2_TR((code+0x69fu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200006a2:{NFSU2_TR((code+0x6a2u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0xcull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0xcull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xcull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B200006a5:{NFSU2_TR((code+0x6a5u));
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B200006a7:{NFSU2_TR((code+0x6a7u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B200006aa:{NFSU2_TR((code+0x6aau));
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
B200006ac:{NFSU2_TR((code+0x6acu));
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L200006b0;}}
}
B200006ae:L200006ae:{c.instructions+=1;NFSU2_TR((code+0x6aeu));
__builtin_memmove((R+0),(R+4),4);
}
B200006b0:L200006b0:{c.instructions+=4;NFSU2_TR((code+0x6b0u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200006b3:{NFSU2_TR((code+0x6b3u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x8ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x8ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B200006b6:{NFSU2_TR((code+0x6b6u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B200006b7:{NFSU2_TR((code+0x6b7u));
u8 U[4];
w4(U+0,u32(code+0x6bcu));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720ff8u);
}
B200006bc:L200006bc:{c.instructions+=4;NFSU2_TR((code+0x6bcu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200006bf:{NFSU2_TR((code+0x6bfu));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0xcull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0xcull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xcull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B200006c2:{NFSU2_TR((code+0x6c2u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B200006c3:{NFSU2_TR((code+0x6c3u));
u8 U[4];
w4(U+0,u32(code+0x6c8u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720fd1u);
}
B200006c8:L200006c8:{c.instructions+=5;NFSU2_TR((code+0x6c8u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200006cb:{NFSU2_TR((code+0x6cbu));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x10ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x10ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B200006ce:{NFSU2_TR((code+0x6ceu));
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x7cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x7cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x7cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B200006d1:{NFSU2_TR((code+0x6d1u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B200006d2:{NFSU2_TR((code+0x6d2u));
u8 U[4];
w4(U+0,u32(code+0x6d7u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720684u);
}
B200006d7:L200006d7:{c.instructions+=16;NFSU2_TR((code+0x6d7u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200006da:{NFSU2_TR((code+0x6dau));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x14ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x14ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x14ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B200006dd:{NFSU2_TR((code+0x6ddu));
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B200006df:{NFSU2_TR((code+0x6dfu));
u8 U[14];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,carry<u32>(r4(R+0),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,scarry<u32>(r4(R+0),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B200006e2:{NFSU2_TR((code+0x6e2u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1fcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200006e8:{NFSU2_TR((code+0x6e8u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x8ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x8ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B200006eb:{NFSU2_TR((code+0x6ebu));
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B200006ed:{NFSU2_TR((code+0x6edu));
u8 U[44];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w8(U+16,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+24,u64(s64(s32(r4(U+4)))));
w8(U+32,u64(u64(r8(U+16))*u64(r8(U+24))));
w4(R+0,u32(r8(U+32)));
w4(U+40,u32(u64(r8(U+32))>>32));
w8(U+8,u64(s64(s32(r4(R+0)))));
w1(R+512,u8((r8(U+8))!=(r8(U+32))));
__builtin_memmove((R+523),(R+512),1);
}
B200006f1:{NFSU2_TR((code+0x6f1u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x15cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200006f7:{NFSU2_TR((code+0x6f7u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x8ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x8ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B200006fa:{NFSU2_TR((code+0x6fau));
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B200006fc:{NFSU2_TR((code+0x6fcu));
u8 U[14];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
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
B200006ff:{NFSU2_TR((code+0x6ffu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000702:{NFSU2_TR((code+0x702u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x8ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x8ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B20000705:{NFSU2_TR((code+0x705u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000706:{NFSU2_TR((code+0x706u));
u8 U[4];
w4(U+0,u32(code+0x70bu));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720ff8u);
}
B2000070b:L2000070b:{c.instructions+=6;NFSU2_TR((code+0x70bu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B2000070e:{NFSU2_TR((code+0x70eu));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0xcull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0xcull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xcull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B20000711:{NFSU2_TR((code+0x711u));
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B20000713:{NFSU2_TR((code+0x713u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B20000716:{NFSU2_TR((code+0x716u));
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
B20000718:{NFSU2_TR((code+0x718u));
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L2000071c;}}
}
B2000071a:L2000071a:{c.instructions+=1;NFSU2_TR((code+0x71au));
__builtin_memmove((R+0),(R+4),4);
}
B2000071c:L2000071c:{c.instructions+=4;NFSU2_TR((code+0x71cu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B2000071f:{NFSU2_TR((code+0x71fu));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x8ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x8ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B20000722:{NFSU2_TR((code+0x722u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000723:{NFSU2_TR((code+0x723u));
u8 U[4];
w4(U+0,u32(code+0x728u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720ff8u);
}
B20000728:L20000728:{c.instructions+=4;NFSU2_TR((code+0x728u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B2000072b:{NFSU2_TR((code+0x72bu));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0xcull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0xcull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xcull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B2000072e:{NFSU2_TR((code+0x72eu));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B2000072f:{NFSU2_TR((code+0x72fu));
u8 U[4];
w4(U+0,u32(code+0x734u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720fd1u);
}
B20000734:L20000734:{c.instructions+=4;NFSU2_TR((code+0x734u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000737:{NFSU2_TR((code+0x737u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x10ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x10ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B2000073a:{NFSU2_TR((code+0x73au));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B2000073b:{NFSU2_TR((code+0x73bu));
u8 U[4];
w4(U+0,u32(code+0x740u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720684u);
}
B20000740:L20000740:{c.instructions+=12;NFSU2_TR((code+0x740u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000743:{NFSU2_TR((code+0x743u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x14ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x14ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x14ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B20000746:{NFSU2_TR((code+0x746u));
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B20000748:{NFSU2_TR((code+0x748u));
u8 U[14];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,carry<u32>(r4(R+0),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,scarry<u32>(r4(R+0),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B2000074b:{NFSU2_TR((code+0x74bu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000751:{NFSU2_TR((code+0x751u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x8ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x8ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B20000754:{NFSU2_TR((code+0x754u));
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B20000756:{NFSU2_TR((code+0x756u));
u8 U[44];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w8(U+16,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+24,u64(s64(s32(r4(U+4)))));
w8(U+32,u64(u64(r8(U+16))*u64(r8(U+24))));
w4(R+0,u32(r8(U+32)));
w4(U+40,u32(u64(r8(U+32))>>32));
w8(U+8,u64(s64(s32(r4(R+0)))));
w1(R+512,u8((r8(U+8))!=(r8(U+32))));
__builtin_memmove((R+523),(R+512),1);
}
B2000075a:{NFSU2_TR((code+0x75au));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B2000075d:{NFSU2_TR((code+0x75du));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x8ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x8ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B20000760:{NFSU2_TR((code+0x760u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000761:{NFSU2_TR((code+0x761u));
u8 U[4];
w4(U+0,u32(code+0x766u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x7207bfu);
}
B20000766:L20000766:{c.instructions+=10;NFSU2_TR((code+0x766u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000769:{NFSU2_TR((code+0x769u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x8ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x8ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B2000076c:{NFSU2_TR((code+0x76cu));
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B2000076e:{NFSU2_TR((code+0x76eu));
u8 U[14];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
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
B20000771:{NFSU2_TR((code+0x771u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000774:{NFSU2_TR((code+0x774u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x8ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x8ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B20000777:{NFSU2_TR((code+0x777u));
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B20000779:{NFSU2_TR((code+0x779u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B2000077c:{NFSU2_TR((code+0x77cu));
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
B2000077e:{NFSU2_TR((code+0x77eu));
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L20000782;}}
}
B20000780:L20000780:{c.instructions+=1;NFSU2_TR((code+0x780u));
__builtin_memmove((R+0),(R+4),4);
}
B20000782:L20000782:{c.instructions+=4;NFSU2_TR((code+0x782u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xccull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000788:{NFSU2_TR((code+0x788u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x8ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x8ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B2000078b:{NFSU2_TR((code+0x78bu));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B2000078c:{NFSU2_TR((code+0x78cu));
u8 U[4];
w4(U+0,u32(code+0x791u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720fd1u);
}
B20000791:L20000791:{c.instructions+=8;NFSU2_TR((code+0x791u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000794:{NFSU2_TR((code+0x794u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x10ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x10ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B20000797:{NFSU2_TR((code+0x797u));
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B20000799:{NFSU2_TR((code+0x799u));
u8 U[14];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
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
B2000079c:{NFSU2_TR((code+0x79cu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B2000079f:{NFSU2_TR((code+0x79fu));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x8ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x8ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B200007a2:{NFSU2_TR((code+0x7a2u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B200007a3:{NFSU2_TR((code+0x7a3u));
u8 U[4];
w4(U+0,u32(code+0x7a8u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x7207bfu);
}
B200007a8:L200007a8:{c.instructions+=10;NFSU2_TR((code+0x7a8u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200007ab:{NFSU2_TR((code+0x7abu));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x8ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x8ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B200007ae:{NFSU2_TR((code+0x7aeu));
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B200007b0:{NFSU2_TR((code+0x7b0u));
u8 U[14];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
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
B200007b3:{NFSU2_TR((code+0x7b3u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200007b6:{NFSU2_TR((code+0x7b6u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x8ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x8ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B200007b9:{NFSU2_TR((code+0x7b9u));
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B200007bb:{NFSU2_TR((code+0x7bbu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B200007be:{NFSU2_TR((code+0x7beu));
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
B200007c0:{NFSU2_TR((code+0x7c0u));
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L200007c4;}}
}
B200007c2:L200007c2:{c.instructions+=1;NFSU2_TR((code+0x7c2u));
__builtin_memmove((R+0),(R+4),4);
}
B200007c4:L200007c4:{c.instructions+=4;NFSU2_TR((code+0x7c4u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200007c7:{NFSU2_TR((code+0x7c7u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x8ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x8ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B200007ca:{NFSU2_TR((code+0x7cau));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B200007cb:{NFSU2_TR((code+0x7cbu));
u8 U[4];
w4(U+0,u32(code+0x7d0u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720684u);
}
B200007d0:L200007d0:{c.instructions+=4;NFSU2_TR((code+0x7d0u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x480ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200007d6:{NFSU2_TR((code+0x7d6u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x10ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x10ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B200007d9:{NFSU2_TR((code+0x7d9u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B200007da:{NFSU2_TR((code+0x7dau));
u8 U[4];
w4(U+0,u32(code+0x7dfu));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720fd1u);
}
B200007df:L200007df:{c.instructions+=9;NFSU2_TR((code+0x7dfu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200007e2:{NFSU2_TR((code+0x7e2u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200007e5:{NFSU2_TR((code+0x7e5u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x10ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x10ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B200007e8:{NFSU2_TR((code+0x7e8u));
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B200007ea:{NFSU2_TR((code+0x7eau));
u8 U[14];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
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
B200007ed:{NFSU2_TR((code+0x7edu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200007f0:{NFSU2_TR((code+0x7f0u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x8ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x8ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B200007f3:{NFSU2_TR((code+0x7f3u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B200007f4:{NFSU2_TR((code+0x7f4u));
u8 U[4];
w4(U+0,u32(code+0x7f9u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720ff8u);
}
B200007f9:L200007f9:{c.instructions+=8;NFSU2_TR((code+0x7f9u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200007fc:{NFSU2_TR((code+0x7fcu));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0xcull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0xcull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xcull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B200007ff:{NFSU2_TR((code+0x7ffu));
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B20000801:{NFSU2_TR((code+0x801u));
u8 U[44];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w8(U+16,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+24,u64(s64(s32(r4(U+4)))));
w8(U+32,u64(u64(r8(U+16))*u64(r8(U+24))));
w4(R+0,u32(r8(U+32)));
w4(U+40,u32(u64(r8(U+32))>>32));
w8(U+8,u64(s64(s32(r4(R+0)))));
w1(R+512,u8((r8(U+8))!=(r8(U+32))));
__builtin_memmove((R+523),(R+512),1);
}
B20000805:{NFSU2_TR((code+0x805u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000808:{NFSU2_TR((code+0x808u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x8ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x8ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B2000080b:{NFSU2_TR((code+0x80bu));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B2000080c:{NFSU2_TR((code+0x80cu));
u8 U[4];
w4(U+0,u32(code+0x811u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x7207bfu);
}
B20000811:L20000811:{c.instructions+=6;NFSU2_TR((code+0x811u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000814:{NFSU2_TR((code+0x814u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x8ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x8ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B20000817:{NFSU2_TR((code+0x817u));
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B20000819:{NFSU2_TR((code+0x819u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B2000081c:{NFSU2_TR((code+0x81cu));
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
B2000081e:{NFSU2_TR((code+0x81eu));
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L20000822;}}
}
B20000820:L20000820:{c.instructions+=1;NFSU2_TR((code+0x820u));
__builtin_memmove((R+0),(R+4),4);
}
B20000822:L20000822:{c.instructions+=4;NFSU2_TR((code+0x822u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000828:{NFSU2_TR((code+0x828u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x8ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x8ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B2000082b:{NFSU2_TR((code+0x82bu));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B2000082c:{NFSU2_TR((code+0x82cu));
u8 U[4];
w4(U+0,u32(code+0x831u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720fd1u);
}
B20000831:L20000831:{c.instructions+=9;NFSU2_TR((code+0x831u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000834:{NFSU2_TR((code+0x834u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000837:{NFSU2_TR((code+0x837u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x10ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x10ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B2000083a:{NFSU2_TR((code+0x83au));
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B2000083c:{NFSU2_TR((code+0x83cu));
u8 U[14];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
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
B2000083f:{NFSU2_TR((code+0x83fu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000842:{NFSU2_TR((code+0x842u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x8ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x8ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B20000845:{NFSU2_TR((code+0x845u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000846:{NFSU2_TR((code+0x846u));
u8 U[4];
w4(U+0,u32(code+0x84bu));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720ff8u);
}
B2000084b:L2000084b:{c.instructions+=8;NFSU2_TR((code+0x84bu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B2000084e:{NFSU2_TR((code+0x84eu));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0xcull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0xcull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xcull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B20000851:{NFSU2_TR((code+0x851u));
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B20000853:{NFSU2_TR((code+0x853u));
u8 U[44];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w8(U+16,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+24,u64(s64(s32(r4(U+4)))));
w8(U+32,u64(u64(r8(U+16))*u64(r8(U+24))));
w4(R+0,u32(r8(U+32)));
w4(U+40,u32(u64(r8(U+32))>>32));
w8(U+8,u64(s64(s32(r4(R+0)))));
w1(R+512,u8((r8(U+8))!=(r8(U+32))));
__builtin_memmove((R+523),(R+512),1);
}
B20000857:{NFSU2_TR((code+0x857u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B2000085a:{NFSU2_TR((code+0x85au));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x8ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x8ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B2000085d:{NFSU2_TR((code+0x85du));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B2000085e:{NFSU2_TR((code+0x85eu));
u8 U[4];
w4(U+0,u32(code+0x863u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x7207bfu);
}
B20000863:L20000863:{c.instructions+=6;NFSU2_TR((code+0x863u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000866:{NFSU2_TR((code+0x866u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x8ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x8ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B20000869:{NFSU2_TR((code+0x869u));
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B2000086b:{NFSU2_TR((code+0x86bu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B2000086e:{NFSU2_TR((code+0x86eu));
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
B20000870:{NFSU2_TR((code+0x870u));
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L20000874;}}
}
B20000872:L20000872:{c.instructions+=1;NFSU2_TR((code+0x872u));
__builtin_memmove((R+0),(R+4),4);
}
B20000874:L20000874:{c.instructions+=4;NFSU2_TR((code+0x874u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000877:{NFSU2_TR((code+0x877u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x8ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x8ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B2000087a:{NFSU2_TR((code+0x87au));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B2000087b:{NFSU2_TR((code+0x87bu));
u8 U[4];
w4(U+0,u32(code+0x880u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720684u);
}
B20000880:L20000880:{c.instructions+=4;NFSU2_TR((code+0x880u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6e0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000886:{NFSU2_TR((code+0x886u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x10ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x10ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B20000889:{NFSU2_TR((code+0x889u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B2000088a:{NFSU2_TR((code+0x88au));
u8 U[4];
w4(U+0,u32(code+0x88fu));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720fd1u);
}
B2000088f:L2000088f:{c.instructions+=8;NFSU2_TR((code+0x88fu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000892:{NFSU2_TR((code+0x892u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x10ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x10ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B20000895:{NFSU2_TR((code+0x895u));
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B20000897:{NFSU2_TR((code+0x897u));
u8 U[14];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
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
B2000089a:{NFSU2_TR((code+0x89au));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B2000089d:{NFSU2_TR((code+0x89du));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x8ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x8ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B200008a0:{NFSU2_TR((code+0x8a0u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B200008a1:{NFSU2_TR((code+0x8a1u));
u8 U[4];
w4(U+0,u32(code+0x8a6u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x7207bfu);
}
B200008a6:L200008a6:{c.instructions+=10;NFSU2_TR((code+0x8a6u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200008a9:{NFSU2_TR((code+0x8a9u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x8ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x8ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B200008ac:{NFSU2_TR((code+0x8acu));
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B200008ae:{NFSU2_TR((code+0x8aeu));
u8 U[14];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
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
B200008b1:{NFSU2_TR((code+0x8b1u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200008b4:{NFSU2_TR((code+0x8b4u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x8ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x8ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B200008b7:{NFSU2_TR((code+0x8b7u));
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B200008b9:{NFSU2_TR((code+0x8b9u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B200008bc:{NFSU2_TR((code+0x8bcu));
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
B200008be:{NFSU2_TR((code+0x8beu));
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L200008c2;}}
}
B200008c0:L200008c0:{c.instructions+=1;NFSU2_TR((code+0x8c0u));
__builtin_memmove((R+0),(R+4),4);
}
B200008c2:L200008c2:{c.instructions+=4;NFSU2_TR((code+0x8c2u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x90ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200008c8:{NFSU2_TR((code+0x8c8u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x8ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x8ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B200008cb:{NFSU2_TR((code+0x8cbu));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B200008cc:{NFSU2_TR((code+0x8ccu));
u8 U[4];
w4(U+0,u32(code+0x8d1u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720fd1u);
}
B200008d1:L200008d1:{c.instructions+=8;NFSU2_TR((code+0x8d1u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200008d4:{NFSU2_TR((code+0x8d4u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x10ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x10ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B200008d7:{NFSU2_TR((code+0x8d7u));
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B200008d9:{NFSU2_TR((code+0x8d9u));
u8 U[14];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
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
B200008dc:{NFSU2_TR((code+0x8dcu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200008df:{NFSU2_TR((code+0x8dfu));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x8ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x8ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B200008e2:{NFSU2_TR((code+0x8e2u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B200008e3:{NFSU2_TR((code+0x8e3u));
u8 U[4];
w4(U+0,u32(code+0x8e8u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x7207bfu);
}
B200008e8:L200008e8:{c.instructions+=10;NFSU2_TR((code+0x8e8u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200008eb:{NFSU2_TR((code+0x8ebu));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x8ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x8ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B200008ee:{NFSU2_TR((code+0x8eeu));
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B200008f0:{NFSU2_TR((code+0x8f0u));
u8 U[14];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
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
B200008f3:{NFSU2_TR((code+0x8f3u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200008f6:{NFSU2_TR((code+0x8f6u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x8ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x8ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B200008f9:{NFSU2_TR((code+0x8f9u));
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B200008fb:{NFSU2_TR((code+0x8fbu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B200008fe:{NFSU2_TR((code+0x8feu));
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
B20000900:{NFSU2_TR((code+0x900u));
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L20000904;}}
}
B20000902:L20000902:{c.instructions+=1;NFSU2_TR((code+0x902u));
__builtin_memmove((R+0),(R+4),4);
}
B20000904:L20000904:{c.instructions+=4;NFSU2_TR((code+0x904u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000907:{NFSU2_TR((code+0x907u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x8ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x8ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B2000090a:{NFSU2_TR((code+0x90au));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B2000090b:{NFSU2_TR((code+0x90bu));
u8 U[4];
w4(U+0,u32(code+0x910u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720684u);
}
B20000910:L20000910:{c.instructions+=4;NFSU2_TR((code+0x910u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x480ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000916:{NFSU2_TR((code+0x916u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x10ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x10ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B20000919:{NFSU2_TR((code+0x919u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B2000091a:{NFSU2_TR((code+0x91au));
u8 U[4];
w4(U+0,u32(code+0x91fu));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720fd1u);
}
B2000091f:L2000091f:{c.instructions+=9;NFSU2_TR((code+0x91fu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000922:{NFSU2_TR((code+0x922u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000925:{NFSU2_TR((code+0x925u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x10ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x10ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B20000928:{NFSU2_TR((code+0x928u));
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B2000092a:{NFSU2_TR((code+0x92au));
u8 U[14];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
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
B2000092d:{NFSU2_TR((code+0x92du));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000930:{NFSU2_TR((code+0x930u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x8ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x8ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B20000933:{NFSU2_TR((code+0x933u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000934:{NFSU2_TR((code+0x934u));
u8 U[4];
w4(U+0,u32(code+0x939u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720ff8u);
}
B20000939:L20000939:{c.instructions+=8;NFSU2_TR((code+0x939u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B2000093c:{NFSU2_TR((code+0x93cu));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0xcull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0xcull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xcull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B2000093f:{NFSU2_TR((code+0x93fu));
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B20000941:{NFSU2_TR((code+0x941u));
u8 U[44];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w8(U+16,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+24,u64(s64(s32(r4(U+4)))));
w8(U+32,u64(u64(r8(U+16))*u64(r8(U+24))));
w4(R+0,u32(r8(U+32)));
w4(U+40,u32(u64(r8(U+32))>>32));
w8(U+8,u64(s64(s32(r4(R+0)))));
w1(R+512,u8((r8(U+8))!=(r8(U+32))));
__builtin_memmove((R+523),(R+512),1);
}
B20000945:{NFSU2_TR((code+0x945u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000948:{NFSU2_TR((code+0x948u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x8ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x8ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B2000094b:{NFSU2_TR((code+0x94bu));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B2000094c:{NFSU2_TR((code+0x94cu));
u8 U[4];
w4(U+0,u32(code+0x951u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x7207bfu);
}
B20000951:L20000951:{c.instructions+=6;NFSU2_TR((code+0x951u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000954:{NFSU2_TR((code+0x954u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x8ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x8ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B20000957:{NFSU2_TR((code+0x957u));
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B20000959:{NFSU2_TR((code+0x959u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B2000095c:{NFSU2_TR((code+0x95cu));
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
B2000095e:{NFSU2_TR((code+0x95eu));
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L20000962;}}
}
B20000960:L20000960:{c.instructions+=1;NFSU2_TR((code+0x960u));
__builtin_memmove((R+0),(R+4),4);
}
B20000962:L20000962:{c.instructions+=4;NFSU2_TR((code+0x962u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000965:{NFSU2_TR((code+0x965u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x8ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x8ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B20000968:{NFSU2_TR((code+0x968u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000969:{NFSU2_TR((code+0x969u));
u8 U[4];
w4(U+0,u32(code+0x96eu));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720684u);
}
B2000096e:L2000096e:{c.instructions+=8;NFSU2_TR((code+0x96eu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x52cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000974:{NFSU2_TR((code+0x974u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x10ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x10ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B20000977:{NFSU2_TR((code+0x977u));
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B20000979:{NFSU2_TR((code+0x979u));
u8 U[14];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
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
B2000097c:{NFSU2_TR((code+0x97cu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B2000097f:{NFSU2_TR((code+0x97fu));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x8ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x8ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B20000982:{NFSU2_TR((code+0x982u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000983:{NFSU2_TR((code+0x983u));
u8 U[4];
w4(U+0,u32(code+0x988u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720ff8u);
}
B20000988:L20000988:{c.instructions+=4;NFSU2_TR((code+0x988u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B2000098b:{NFSU2_TR((code+0x98bu));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0xcull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0xcull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xcull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B2000098e:{NFSU2_TR((code+0x98eu));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B2000098f:{NFSU2_TR((code+0x98fu));
u8 U[4];
w4(U+0,u32(code+0x994u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720ff8u);
}
B20000994:L20000994:{c.instructions+=6;NFSU2_TR((code+0x994u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000997:{NFSU2_TR((code+0x997u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0xcull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0xcull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xcull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B2000099a:{NFSU2_TR((code+0x99au));
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B2000099c:{NFSU2_TR((code+0x99cu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B2000099f:{NFSU2_TR((code+0x99fu));
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
B200009a1:{NFSU2_TR((code+0x9a1u));
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L200009a5;}}
}
B200009a3:L200009a3:{c.instructions+=1;NFSU2_TR((code+0x9a3u));
__builtin_memmove((R+0),(R+4),4);
}
B200009a5:L200009a5:{c.instructions+=4;NFSU2_TR((code+0x9a5u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200009a8:{NFSU2_TR((code+0x9a8u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x8ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x8ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B200009ab:{NFSU2_TR((code+0x9abu));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B200009ac:{NFSU2_TR((code+0x9acu));
u8 U[4];
w4(U+0,u32(code+0x9b1u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720ff8u);
}
B200009b1:L200009b1:{c.instructions+=4;NFSU2_TR((code+0x9b1u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200009b4:{NFSU2_TR((code+0x9b4u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0xcull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0xcull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xcull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B200009b7:{NFSU2_TR((code+0x9b7u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B200009b8:{NFSU2_TR((code+0x9b8u));
u8 U[4];
w4(U+0,u32(code+0x9bdu));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720fd1u);
}
B200009bd:L200009bd:{c.instructions+=4;NFSU2_TR((code+0x9bdu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200009c0:{NFSU2_TR((code+0x9c0u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x10ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x10ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B200009c3:{NFSU2_TR((code+0x9c3u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B200009c4:{NFSU2_TR((code+0x9c4u));
u8 U[4];
w4(U+0,u32(code+0x9c9u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720684u);
}
B200009c9:L200009c9:{c.instructions+=12;NFSU2_TR((code+0x9c9u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200009cc:{NFSU2_TR((code+0x9ccu));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x14ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x14ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x14ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B200009cf:{NFSU2_TR((code+0x9cfu));
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B200009d1:{NFSU2_TR((code+0x9d1u));
u8 U[14];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,carry<u32>(r4(R+0),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,scarry<u32>(r4(R+0),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B200009d4:{NFSU2_TR((code+0x9d4u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x178ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200009da:{NFSU2_TR((code+0x9dau));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x8ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x8ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B200009dd:{NFSU2_TR((code+0x9ddu));
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B200009df:{NFSU2_TR((code+0x9dfu));
u8 U[44];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w8(U+16,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+24,u64(s64(s32(r4(U+4)))));
w8(U+32,u64(u64(r8(U+16))*u64(r8(U+24))));
w4(R+0,u32(r8(U+32)));
w4(U+40,u32(u64(r8(U+32))>>32));
w8(U+8,u64(s64(s32(r4(R+0)))));
w1(R+512,u8((r8(U+8))!=(r8(U+32))));
__builtin_memmove((R+523),(R+512),1);
}
B200009e3:{NFSU2_TR((code+0x9e3u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200009e6:{NFSU2_TR((code+0x9e6u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x8ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x8ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B200009e9:{NFSU2_TR((code+0x9e9u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B200009ea:{NFSU2_TR((code+0x9eau));
u8 U[4];
w4(U+0,u32(code+0x9efu));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x7207bfu);
}
B200009ef:L200009ef:{c.instructions+=11;NFSU2_TR((code+0x9efu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200009f2:{NFSU2_TR((code+0x9f2u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x8ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x8ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B200009f5:{NFSU2_TR((code+0x9f5u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x7cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x7cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x7cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B200009f8:{NFSU2_TR((code+0x9f8u));
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B200009fa:{NFSU2_TR((code+0x9fau));
u8 U[44];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w8(U+16,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+24,u64(s64(s32(r4(U+4)))));
w8(U+32,u64(u64(r8(U+16))*u64(r8(U+24))));
w4(R+0,u32(r8(U+32)));
w4(U+40,u32(u64(r8(U+32))>>32));
w8(U+8,u64(s64(s32(r4(R+0)))));
w1(R+512,u8((r8(U+8))!=(r8(U+32))));
__builtin_memmove((R+523),(R+512),1);
}
B200009fe:{NFSU2_TR((code+0x9feu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x144ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000a04:{NFSU2_TR((code+0xa04u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x8ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x8ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B20000a07:{NFSU2_TR((code+0xa07u));
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B20000a09:{NFSU2_TR((code+0xa09u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B20000a0c:{NFSU2_TR((code+0xa0cu));
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
B20000a0e:{NFSU2_TR((code+0xa0eu));
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L20000a12;}}
}
B20000a10:L20000a10:{c.instructions+=1;NFSU2_TR((code+0xa10u));
__builtin_memmove((R+0),(R+4),4);
}
B20000a12:L20000a12:{c.instructions+=4;NFSU2_TR((code+0xa12u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x15cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000a18:{NFSU2_TR((code+0xa18u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x8ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x8ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B20000a1b:{NFSU2_TR((code+0xa1bu));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000a1c:{NFSU2_TR((code+0xa1cu));
u8 U[4];
w4(U+0,u32(code+0xa21u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720ff8u);
}
B20000a21:L20000a21:{c.instructions+=6;NFSU2_TR((code+0xa21u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000a24:{NFSU2_TR((code+0xa24u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0xcull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0xcull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xcull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B20000a27:{NFSU2_TR((code+0xa27u));
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B20000a29:{NFSU2_TR((code+0xa29u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B20000a2c:{NFSU2_TR((code+0xa2cu));
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
B20000a2e:{NFSU2_TR((code+0xa2eu));
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L20000a32;}}
}
B20000a30:L20000a30:{c.instructions+=1;NFSU2_TR((code+0xa30u));
__builtin_memmove((R+0),(R+4),4);
}
B20000a32:L20000a32:{c.instructions+=4;NFSU2_TR((code+0xa32u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000a35:{NFSU2_TR((code+0xa35u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x8ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x8ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B20000a38:{NFSU2_TR((code+0xa38u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000a39:{NFSU2_TR((code+0xa39u));
u8 U[4];
w4(U+0,u32(code+0xa3eu));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720ff8u);
}
B20000a3e:L20000a3e:{c.instructions+=4;NFSU2_TR((code+0xa3eu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000a41:{NFSU2_TR((code+0xa41u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0xcull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0xcull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xcull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B20000a44:{NFSU2_TR((code+0xa44u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000a45:{NFSU2_TR((code+0xa45u));
u8 U[4];
w4(U+0,u32(code+0xa4au));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720fd1u);
}
B20000a4a:L20000a4a:{c.instructions+=4;NFSU2_TR((code+0xa4au));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000a4d:{NFSU2_TR((code+0xa4du));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x10ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x10ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B20000a50:{NFSU2_TR((code+0xa50u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000a51:{NFSU2_TR((code+0xa51u));
u8 U[4];
w4(U+0,u32(code+0xa56u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720684u);
}
B20000a56:L20000a56:{c.instructions+=12;NFSU2_TR((code+0xa56u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000a59:{NFSU2_TR((code+0xa59u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x14ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x14ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x14ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B20000a5c:{NFSU2_TR((code+0xa5cu));
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B20000a5e:{NFSU2_TR((code+0xa5eu));
u8 U[14];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,carry<u32>(r4(R+0),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,scarry<u32>(r4(R+0),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B20000a61:{NFSU2_TR((code+0xa61u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x204ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000a67:{NFSU2_TR((code+0xa67u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x8ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x8ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B20000a6a:{NFSU2_TR((code+0xa6au));
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B20000a6c:{NFSU2_TR((code+0xa6cu));
u8 U[44];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w8(U+16,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+24,u64(s64(s32(r4(U+4)))));
w8(U+32,u64(u64(r8(U+16))*u64(r8(U+24))));
w4(R+0,u32(r8(U+32)));
w4(U+40,u32(u64(r8(U+32))>>32));
w8(U+8,u64(s64(s32(r4(R+0)))));
w1(R+512,u8((r8(U+8))!=(r8(U+32))));
__builtin_memmove((R+523),(R+512),1);
}
B20000a70:{NFSU2_TR((code+0xa70u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1e0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000a76:{NFSU2_TR((code+0xa76u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x8ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x8ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B20000a79:{NFSU2_TR((code+0xa79u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000a7a:{NFSU2_TR((code+0xa7au));
u8 U[4];
w4(U+0,u32(code+0xa7fu));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720ff8u);
}
B20000a7f:L20000a7f:{c.instructions+=6;NFSU2_TR((code+0xa7fu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000a82:{NFSU2_TR((code+0xa82u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0xcull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0xcull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xcull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B20000a85:{NFSU2_TR((code+0xa85u));
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B20000a87:{NFSU2_TR((code+0xa87u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B20000a8a:{NFSU2_TR((code+0xa8au));
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
B20000a8c:{NFSU2_TR((code+0xa8cu));
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L20000a90;}}
}
B20000a8e:L20000a8e:{c.instructions+=1;NFSU2_TR((code+0xa8eu));
__builtin_memmove((R+0),(R+4),4);
}
B20000a90:L20000a90:{c.instructions+=4;NFSU2_TR((code+0xa90u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000a93:{NFSU2_TR((code+0xa93u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x8ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x8ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B20000a96:{NFSU2_TR((code+0xa96u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000a97:{NFSU2_TR((code+0xa97u));
u8 U[4];
w4(U+0,u32(code+0xa9cu));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720ff8u);
}
B20000a9c:L20000a9c:{c.instructions+=4;NFSU2_TR((code+0xa9cu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000a9f:{NFSU2_TR((code+0xa9fu));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0xcull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0xcull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xcull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B20000aa2:{NFSU2_TR((code+0xaa2u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000aa3:{NFSU2_TR((code+0xaa3u));
u8 U[4];
w4(U+0,u32(code+0xaa8u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720fd1u);
}
B20000aa8:L20000aa8:{c.instructions+=4;NFSU2_TR((code+0xaa8u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000aab:{NFSU2_TR((code+0xaabu));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x10ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x10ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B20000aae:{NFSU2_TR((code+0xaaeu));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000aaf:{NFSU2_TR((code+0xaafu));
u8 U[4];
w4(U+0,u32(code+0xab4u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720684u);
}
B20000ab4:L20000ab4:{c.instructions+=16;NFSU2_TR((code+0xab4u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000ab7:{NFSU2_TR((code+0xab7u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x14ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x14ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x14ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B20000aba:{NFSU2_TR((code+0xabau));
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B20000abc:{NFSU2_TR((code+0xabcu));
u8 U[14];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,carry<u32>(r4(R+0),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,scarry<u32>(r4(R+0),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B20000abf:{NFSU2_TR((code+0xabfu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1fcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000ac5:{NFSU2_TR((code+0xac5u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x8ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x8ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B20000ac8:{NFSU2_TR((code+0xac8u));
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B20000aca:{NFSU2_TR((code+0xacau));
u8 U[44];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w8(U+16,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+24,u64(s64(s32(r4(U+4)))));
w8(U+32,u64(u64(r8(U+16))*u64(r8(U+24))));
w4(R+0,u32(r8(U+32)));
w4(U+40,u32(u64(r8(U+32))>>32));
w8(U+8,u64(s64(s32(r4(R+0)))));
w1(R+512,u8((r8(U+8))!=(r8(U+32))));
__builtin_memmove((R+523),(R+512),1);
}
B20000ace:{NFSU2_TR((code+0xaceu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x15cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000ad4:{NFSU2_TR((code+0xad4u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x8ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x8ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B20000ad7:{NFSU2_TR((code+0xad7u));
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B20000ad9:{NFSU2_TR((code+0xad9u));
u8 U[14];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
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
B20000adc:{NFSU2_TR((code+0xadcu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000adf:{NFSU2_TR((code+0xadfu));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x8ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x8ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B20000ae2:{NFSU2_TR((code+0xae2u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000ae3:{NFSU2_TR((code+0xae3u));
u8 U[4];
w4(U+0,u32(code+0xae8u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720ff8u);
}
B20000ae8:L20000ae8:{c.instructions+=6;NFSU2_TR((code+0xae8u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000aeb:{NFSU2_TR((code+0xaebu));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0xcull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0xcull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xcull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B20000aee:{NFSU2_TR((code+0xaeeu));
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B20000af0:{NFSU2_TR((code+0xaf0u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B20000af3:{NFSU2_TR((code+0xaf3u));
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
B20000af5:{NFSU2_TR((code+0xaf5u));
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L20000af9;}}
}
B20000af7:L20000af7:{c.instructions+=1;NFSU2_TR((code+0xaf7u));
__builtin_memmove((R+0),(R+4),4);
}
B20000af9:L20000af9:{c.instructions+=4;NFSU2_TR((code+0xaf9u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000afc:{NFSU2_TR((code+0xafcu));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x8ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x8ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B20000aff:{NFSU2_TR((code+0xaffu));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000b00:{NFSU2_TR((code+0xb00u));
u8 U[4];
w4(U+0,u32(code+0xb05u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720ff8u);
}
B20000b05:L20000b05:{c.instructions+=4;NFSU2_TR((code+0xb05u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000b08:{NFSU2_TR((code+0xb08u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0xcull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0xcull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xcull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B20000b0b:{NFSU2_TR((code+0xb0bu));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000b0c:{NFSU2_TR((code+0xb0cu));
u8 U[4];
w4(U+0,u32(code+0xb11u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720fd1u);
}
B20000b11:L20000b11:{c.instructions+=4;NFSU2_TR((code+0xb11u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000b14:{NFSU2_TR((code+0xb14u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x10ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x10ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B20000b17:{NFSU2_TR((code+0xb17u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000b18:{NFSU2_TR((code+0xb18u));
u8 U[4];
w4(U+0,u32(code+0xb1du));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720684u);
}
B20000b1d:L20000b1d:{c.instructions+=12;NFSU2_TR((code+0xb1du));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000b20:{NFSU2_TR((code+0xb20u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x14ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x14ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x14ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B20000b23:{NFSU2_TR((code+0xb23u));
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B20000b25:{NFSU2_TR((code+0xb25u));
u8 U[14];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,carry<u32>(r4(R+0),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,scarry<u32>(r4(R+0),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B20000b28:{NFSU2_TR((code+0xb28u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000b2e:{NFSU2_TR((code+0xb2eu));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x8ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x8ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B20000b31:{NFSU2_TR((code+0xb31u));
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B20000b33:{NFSU2_TR((code+0xb33u));
u8 U[44];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w8(U+16,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+24,u64(s64(s32(r4(U+4)))));
w8(U+32,u64(u64(r8(U+16))*u64(r8(U+24))));
w4(R+0,u32(r8(U+32)));
w4(U+40,u32(u64(r8(U+32))>>32));
w8(U+8,u64(s64(s32(r4(R+0)))));
w1(R+512,u8((r8(U+8))!=(r8(U+32))));
__builtin_memmove((R+523),(R+512),1);
}
B20000b37:{NFSU2_TR((code+0xb37u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000b3a:{NFSU2_TR((code+0xb3au));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x8ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x8ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B20000b3d:{NFSU2_TR((code+0xb3du));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000b3e:{NFSU2_TR((code+0xb3eu));
u8 U[4];
w4(U+0,u32(code+0xb43u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x7207bfu);
}
B20000b43:L20000b43:{c.instructions+=10;NFSU2_TR((code+0xb43u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000b46:{NFSU2_TR((code+0xb46u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x8ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x8ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B20000b49:{NFSU2_TR((code+0xb49u));
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B20000b4b:{NFSU2_TR((code+0xb4bu));
u8 U[14];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
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
B20000b4e:{NFSU2_TR((code+0xb4eu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000b51:{NFSU2_TR((code+0xb51u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x8ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x8ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B20000b54:{NFSU2_TR((code+0xb54u));
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B20000b56:{NFSU2_TR((code+0xb56u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B20000b59:{NFSU2_TR((code+0xb59u));
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
B20000b5b:{NFSU2_TR((code+0xb5bu));
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L20000b5f;}}
}
B20000b5d:L20000b5d:{c.instructions+=1;NFSU2_TR((code+0xb5du));
__builtin_memmove((R+0),(R+4),4);
}
B20000b5f:L20000b5f:{c.instructions+=4;NFSU2_TR((code+0xb5fu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xccull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000b65:{NFSU2_TR((code+0xb65u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x8ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x8ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B20000b68:{NFSU2_TR((code+0xb68u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000b69:{NFSU2_TR((code+0xb69u));
u8 U[4];
w4(U+0,u32(code+0xb6eu));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720fd1u);
}
B20000b6e:L20000b6e:{c.instructions+=8;NFSU2_TR((code+0xb6eu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000b71:{NFSU2_TR((code+0xb71u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x10ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x10ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B20000b74:{NFSU2_TR((code+0xb74u));
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B20000b76:{NFSU2_TR((code+0xb76u));
u8 U[14];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
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
B20000b79:{NFSU2_TR((code+0xb79u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000b7c:{NFSU2_TR((code+0xb7cu));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x8ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x8ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B20000b7f:{NFSU2_TR((code+0xb7fu));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000b80:{NFSU2_TR((code+0xb80u));
u8 U[4];
w4(U+0,u32(code+0xb85u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x7207bfu);
}
B20000b85:L20000b85:{c.instructions+=10;NFSU2_TR((code+0xb85u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000b88:{NFSU2_TR((code+0xb88u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x8ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x8ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B20000b8b:{NFSU2_TR((code+0xb8bu));
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B20000b8d:{NFSU2_TR((code+0xb8du));
u8 U[14];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
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
B20000b90:{NFSU2_TR((code+0xb90u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000b93:{NFSU2_TR((code+0xb93u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x8ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x8ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B20000b96:{NFSU2_TR((code+0xb96u));
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B20000b98:{NFSU2_TR((code+0xb98u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B20000b9b:{NFSU2_TR((code+0xb9bu));
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
B20000b9d:{NFSU2_TR((code+0xb9du));
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L20000ba1;}}
}
B20000b9f:L20000b9f:{c.instructions+=1;NFSU2_TR((code+0xb9fu));
__builtin_memmove((R+0),(R+4),4);
}
B20000ba1:L20000ba1:{c.instructions+=4;NFSU2_TR((code+0xba1u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000ba4:{NFSU2_TR((code+0xba4u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x8ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x8ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B20000ba7:{NFSU2_TR((code+0xba7u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000ba8:{NFSU2_TR((code+0xba8u));
u8 U[4];
w4(U+0,u32(code+0xbadu));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720684u);
}
B20000bad:L20000bad:{c.instructions+=4;NFSU2_TR((code+0xbadu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x540ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000bb3:{NFSU2_TR((code+0xbb3u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x10ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x10ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B20000bb6:{NFSU2_TR((code+0xbb6u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000bb7:{NFSU2_TR((code+0xbb7u));
u8 U[4];
w4(U+0,u32(code+0xbbcu));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720fd1u);
}
B20000bbc:L20000bbc:{c.instructions+=9;NFSU2_TR((code+0xbbcu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000bbf:{NFSU2_TR((code+0xbbfu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000bc2:{NFSU2_TR((code+0xbc2u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x10ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x10ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B20000bc5:{NFSU2_TR((code+0xbc5u));
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B20000bc7:{NFSU2_TR((code+0xbc7u));
u8 U[14];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
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
B20000bca:{NFSU2_TR((code+0xbcau));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000bcd:{NFSU2_TR((code+0xbcdu));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x8ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x8ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B20000bd0:{NFSU2_TR((code+0xbd0u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000bd1:{NFSU2_TR((code+0xbd1u));
u8 U[4];
w4(U+0,u32(code+0xbd6u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720ff8u);
}
B20000bd6:L20000bd6:{c.instructions+=8;NFSU2_TR((code+0xbd6u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000bd9:{NFSU2_TR((code+0xbd9u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0xcull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0xcull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xcull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B20000bdc:{NFSU2_TR((code+0xbdcu));
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B20000bde:{NFSU2_TR((code+0xbdeu));
u8 U[44];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w8(U+16,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+24,u64(s64(s32(r4(U+4)))));
w8(U+32,u64(u64(r8(U+16))*u64(r8(U+24))));
w4(R+0,u32(r8(U+32)));
w4(U+40,u32(u64(r8(U+32))>>32));
w8(U+8,u64(s64(s32(r4(R+0)))));
w1(R+512,u8((r8(U+8))!=(r8(U+32))));
__builtin_memmove((R+523),(R+512),1);
}
B20000be2:{NFSU2_TR((code+0xbe2u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000be5:{NFSU2_TR((code+0xbe5u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x8ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x8ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B20000be8:{NFSU2_TR((code+0xbe8u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000be9:{NFSU2_TR((code+0xbe9u));
u8 U[4];
w4(U+0,u32(code+0xbeeu));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x7207bfu);
}
B20000bee:L20000bee:{c.instructions+=6;NFSU2_TR((code+0xbeeu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000bf1:{NFSU2_TR((code+0xbf1u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x8ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x8ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B20000bf4:{NFSU2_TR((code+0xbf4u));
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B20000bf6:{NFSU2_TR((code+0xbf6u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B20000bf9:{NFSU2_TR((code+0xbf9u));
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
B20000bfb:{NFSU2_TR((code+0xbfbu));
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L20000bff;}}
}
B20000bfd:L20000bfd:{c.instructions+=1;NFSU2_TR((code+0xbfdu));
__builtin_memmove((R+0),(R+4),4);
}
B20000bff:L20000bff:{c.instructions+=4;NFSU2_TR((code+0xbffu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000c05:{NFSU2_TR((code+0xc05u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x8ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x8ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B20000c08:{NFSU2_TR((code+0xc08u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000c09:{NFSU2_TR((code+0xc09u));
u8 U[4];
w4(U+0,u32(code+0xc0eu));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720fd1u);
}
B20000c0e:L20000c0e:{c.instructions+=9;NFSU2_TR((code+0xc0eu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000c11:{NFSU2_TR((code+0xc11u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000c14:{NFSU2_TR((code+0xc14u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x10ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x10ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B20000c17:{NFSU2_TR((code+0xc17u));
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B20000c19:{NFSU2_TR((code+0xc19u));
u8 U[14];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
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
B20000c1c:{NFSU2_TR((code+0xc1cu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000c1f:{NFSU2_TR((code+0xc1fu));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x8ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x8ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B20000c22:{NFSU2_TR((code+0xc22u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000c23:{NFSU2_TR((code+0xc23u));
u8 U[4];
w4(U+0,u32(code+0xc28u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720ff8u);
}
B20000c28:L20000c28:{c.instructions+=8;NFSU2_TR((code+0xc28u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000c2b:{NFSU2_TR((code+0xc2bu));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0xcull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0xcull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xcull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B20000c2e:{NFSU2_TR((code+0xc2eu));
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B20000c30:{NFSU2_TR((code+0xc30u));
u8 U[44];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w8(U+16,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+24,u64(s64(s32(r4(U+4)))));
w8(U+32,u64(u64(r8(U+16))*u64(r8(U+24))));
w4(R+0,u32(r8(U+32)));
w4(U+40,u32(u64(r8(U+32))>>32));
w8(U+8,u64(s64(s32(r4(R+0)))));
w1(R+512,u8((r8(U+8))!=(r8(U+32))));
__builtin_memmove((R+523),(R+512),1);
}
B20000c34:{NFSU2_TR((code+0xc34u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000c37:{NFSU2_TR((code+0xc37u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x8ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x8ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B20000c3a:{NFSU2_TR((code+0xc3au));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000c3b:{NFSU2_TR((code+0xc3bu));
u8 U[4];
w4(U+0,u32(code+0xc40u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x7207bfu);
}
B20000c40:L20000c40:{c.instructions+=6;NFSU2_TR((code+0xc40u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000c43:{NFSU2_TR((code+0xc43u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x8ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x8ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B20000c46:{NFSU2_TR((code+0xc46u));
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B20000c48:{NFSU2_TR((code+0xc48u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B20000c4b:{NFSU2_TR((code+0xc4bu));
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
B20000c4d:{NFSU2_TR((code+0xc4du));
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L20000c51;}}
}
B20000c4f:L20000c4f:{c.instructions+=1;NFSU2_TR((code+0xc4fu));
__builtin_memmove((R+0),(R+4),4);
}
B20000c51:L20000c51:{c.instructions+=4;NFSU2_TR((code+0xc51u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000c54:{NFSU2_TR((code+0xc54u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x8ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x8ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B20000c57:{NFSU2_TR((code+0xc57u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000c58:{NFSU2_TR((code+0xc58u));
u8 U[4];
w4(U+0,u32(code+0xc5du));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720684u);
}
B20000c5d:L20000c5d:{c.instructions+=4;NFSU2_TR((code+0xc5du));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7a0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000c63:{NFSU2_TR((code+0xc63u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x10ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x10ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B20000c66:{NFSU2_TR((code+0xc66u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000c67:{NFSU2_TR((code+0xc67u));
u8 U[4];
w4(U+0,u32(code+0xc6cu));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720fd1u);
}
B20000c6c:L20000c6c:{c.instructions+=8;NFSU2_TR((code+0xc6cu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000c6f:{NFSU2_TR((code+0xc6fu));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x10ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x10ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B20000c72:{NFSU2_TR((code+0xc72u));
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B20000c74:{NFSU2_TR((code+0xc74u));
u8 U[14];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
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
B20000c77:{NFSU2_TR((code+0xc77u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000c7a:{NFSU2_TR((code+0xc7au));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x8ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x8ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B20000c7d:{NFSU2_TR((code+0xc7du));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000c7e:{NFSU2_TR((code+0xc7eu));
u8 U[4];
w4(U+0,u32(code+0xc83u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x7207bfu);
}
B20000c83:L20000c83:{c.instructions+=10;NFSU2_TR((code+0xc83u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000c86:{NFSU2_TR((code+0xc86u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x8ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x8ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B20000c89:{NFSU2_TR((code+0xc89u));
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B20000c8b:{NFSU2_TR((code+0xc8bu));
u8 U[14];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
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
B20000c8e:{NFSU2_TR((code+0xc8eu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000c91:{NFSU2_TR((code+0xc91u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x8ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x8ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B20000c94:{NFSU2_TR((code+0xc94u));
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B20000c96:{NFSU2_TR((code+0xc96u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B20000c99:{NFSU2_TR((code+0xc99u));
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
B20000c9b:{NFSU2_TR((code+0xc9bu));
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L20000c9f;}}
}
B20000c9d:L20000c9d:{c.instructions+=1;NFSU2_TR((code+0xc9du));
__builtin_memmove((R+0),(R+4),4);
}
B20000c9f:L20000c9f:{c.instructions+=4;NFSU2_TR((code+0xc9fu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x90ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000ca5:{NFSU2_TR((code+0xca5u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x8ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x8ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B20000ca8:{NFSU2_TR((code+0xca8u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000ca9:{NFSU2_TR((code+0xca9u));
u8 U[4];
w4(U+0,u32(code+0xcaeu));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720fd1u);
}
B20000cae:L20000cae:{c.instructions+=8;NFSU2_TR((code+0xcaeu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000cb1:{NFSU2_TR((code+0xcb1u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x10ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x10ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B20000cb4:{NFSU2_TR((code+0xcb4u));
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B20000cb6:{NFSU2_TR((code+0xcb6u));
u8 U[14];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
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
B20000cb9:{NFSU2_TR((code+0xcb9u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000cbc:{NFSU2_TR((code+0xcbcu));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x8ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x8ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B20000cbf:{NFSU2_TR((code+0xcbfu));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000cc0:{NFSU2_TR((code+0xcc0u));
u8 U[4];
w4(U+0,u32(code+0xcc5u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x7207bfu);
}
B20000cc5:L20000cc5:{c.instructions+=10;NFSU2_TR((code+0xcc5u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000cc8:{NFSU2_TR((code+0xcc8u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x8ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x8ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B20000ccb:{NFSU2_TR((code+0xccbu));
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B20000ccd:{NFSU2_TR((code+0xccdu));
u8 U[14];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
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
B20000cd0:{NFSU2_TR((code+0xcd0u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000cd3:{NFSU2_TR((code+0xcd3u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x8ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x8ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B20000cd6:{NFSU2_TR((code+0xcd6u));
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B20000cd8:{NFSU2_TR((code+0xcd8u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B20000cdb:{NFSU2_TR((code+0xcdbu));
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
B20000cdd:{NFSU2_TR((code+0xcddu));
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L20000ce1;}}
}
B20000cdf:L20000cdf:{c.instructions+=1;NFSU2_TR((code+0xcdfu));
__builtin_memmove((R+0),(R+4),4);
}
B20000ce1:L20000ce1:{c.instructions+=4;NFSU2_TR((code+0xce1u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000ce4:{NFSU2_TR((code+0xce4u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x8ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x8ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B20000ce7:{NFSU2_TR((code+0xce7u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000ce8:{NFSU2_TR((code+0xce8u));
u8 U[4];
w4(U+0,u32(code+0xcedu));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720684u);
}
B20000ced:L20000ced:{c.instructions+=4;NFSU2_TR((code+0xcedu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x540ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000cf3:{NFSU2_TR((code+0xcf3u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x10ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x10ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B20000cf6:{NFSU2_TR((code+0xcf6u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000cf7:{NFSU2_TR((code+0xcf7u));
u8 U[4];
w4(U+0,u32(code+0xcfcu));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720fd1u);
}
B20000cfc:L20000cfc:{c.instructions+=9;NFSU2_TR((code+0xcfcu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000cff:{NFSU2_TR((code+0xcffu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000d02:{NFSU2_TR((code+0xd02u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x10ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x10ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B20000d05:{NFSU2_TR((code+0xd05u));
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B20000d07:{NFSU2_TR((code+0xd07u));
u8 U[14];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
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
B20000d0a:{NFSU2_TR((code+0xd0au));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000d0d:{NFSU2_TR((code+0xd0du));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x8ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x8ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B20000d10:{NFSU2_TR((code+0xd10u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000d11:{NFSU2_TR((code+0xd11u));
u8 U[4];
w4(U+0,u32(code+0xd16u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720ff8u);
}
B20000d16:L20000d16:{c.instructions+=8;NFSU2_TR((code+0xd16u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000d19:{NFSU2_TR((code+0xd19u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0xcull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0xcull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xcull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B20000d1c:{NFSU2_TR((code+0xd1cu));
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B20000d1e:{NFSU2_TR((code+0xd1eu));
u8 U[44];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w8(U+16,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+24,u64(s64(s32(r4(U+4)))));
w8(U+32,u64(u64(r8(U+16))*u64(r8(U+24))));
w4(R+0,u32(r8(U+32)));
w4(U+40,u32(u64(r8(U+32))>>32));
w8(U+8,u64(s64(s32(r4(R+0)))));
w1(R+512,u8((r8(U+8))!=(r8(U+32))));
__builtin_memmove((R+523),(R+512),1);
}
B20000d22:{NFSU2_TR((code+0xd22u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000d25:{NFSU2_TR((code+0xd25u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x8ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x8ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B20000d28:{NFSU2_TR((code+0xd28u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000d29:{NFSU2_TR((code+0xd29u));
u8 U[4];
w4(U+0,u32(code+0xd2eu));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x7207bfu);
}
B20000d2e:L20000d2e:{c.instructions+=7;NFSU2_TR((code+0xd2eu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000d31:{NFSU2_TR((code+0xd31u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x8ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x8ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B20000d34:{NFSU2_TR((code+0xd34u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x7cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x7cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x7cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B20000d37:{NFSU2_TR((code+0xd37u));
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B20000d39:{NFSU2_TR((code+0xd39u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B20000d3c:{NFSU2_TR((code+0xd3cu));
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
B20000d3e:{NFSU2_TR((code+0xd3eu));
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L20000d42;}}
}
B20000d40:L20000d40:{c.instructions+=1;NFSU2_TR((code+0xd40u));
__builtin_memmove((R+0),(R+4),4);
}
B20000d42:L20000d42:{c.instructions+=4;NFSU2_TR((code+0xd42u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000d45:{NFSU2_TR((code+0xd45u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x8ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x8ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B20000d48:{NFSU2_TR((code+0xd48u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000d49:{NFSU2_TR((code+0xd49u));
u8 U[4];
w4(U+0,u32(code+0xd4eu));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720684u);
}
B20000d4e:L20000d4e:{c.instructions+=4;NFSU2_TR((code+0xd4eu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5ecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000d54:{NFSU2_TR((code+0xd54u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x10ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x10ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B20000d57:{NFSU2_TR((code+0xd57u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000d58:{NFSU2_TR((code+0xd58u));
u8 U[4];
w4(U+0,u32(code+0xd5du));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x7204f3u);
}
B20000d5d:L20000d5d:{c.instructions+=4;NFSU2_TR((code+0xd5du));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000d60:{NFSU2_TR((code+0xd60u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x10ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x10ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B20000d63:{NFSU2_TR((code+0xd63u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000d64:{NFSU2_TR((code+0xd64u));
u8 U[4];
w4(U+0,u32(code+0xd69u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720767u);
}
B20000d69:L20000d69:{c.instructions+=4;NFSU2_TR((code+0xd69u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000d6c:{NFSU2_TR((code+0xd6cu));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0xcull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0xcull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xcull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B20000d6f:{NFSU2_TR((code+0xd6fu));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000d70:{NFSU2_TR((code+0xd70u));
u8 U[4];
w4(U+0,u32(code+0xd75u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720767u);
}
B20000d75:L20000d75:{c.instructions+=4;NFSU2_TR((code+0xd75u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000d78:{NFSU2_TR((code+0xd78u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0xcull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0xcull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xcull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B20000d7b:{NFSU2_TR((code+0xd7bu));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000d7c:{NFSU2_TR((code+0xd7cu));
u8 U[4];
w4(U+0,u32(code+0xd81u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720767u);
}
B20000d81:L20000d81:{c.instructions+=5;NFSU2_TR((code+0xd81u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000d84:{NFSU2_TR((code+0xd84u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000d87:{NFSU2_TR((code+0xd87u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0xcull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0xcull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xcull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B20000d8a:{NFSU2_TR((code+0xd8au));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000d8b:{NFSU2_TR((code+0xd8bu));
u8 U[4];
w4(U+0,u32(code+0xd90u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x7204f3u);
}
B20000d90:L20000d90:{c.instructions+=8;NFSU2_TR((code+0xd90u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000d93:{NFSU2_TR((code+0xd93u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x10ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x10ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B20000d96:{NFSU2_TR((code+0xd96u));
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B20000d98:{NFSU2_TR((code+0xd98u));
u8 U[14];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,carry<u32>(r4(R+0),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,scarry<u32>(r4(R+0),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B20000d9b:{NFSU2_TR((code+0xd9bu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000d9e:{NFSU2_TR((code+0xd9eu));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x8ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x8ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B20000da1:{NFSU2_TR((code+0xda1u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000da2:{NFSU2_TR((code+0xda2u));
u8 U[4];
w4(U+0,u32(code+0xda7u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720684u);
}
B20000da7:L20000da7:{c.instructions+=4;NFSU2_TR((code+0xda7u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000daa:{NFSU2_TR((code+0xdaau));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x10ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x10ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B20000dad:{NFSU2_TR((code+0xdadu));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000dae:{NFSU2_TR((code+0xdaeu));
u8 U[4];
w4(U+0,u32(code+0xdb3u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720f32u);
}
B20000db3:L20000db3:{c.instructions+=5;NFSU2_TR((code+0xdb3u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000db6:{NFSU2_TR((code+0xdb6u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000db9:{NFSU2_TR((code+0xdb9u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x1cull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x1cull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1cull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B20000dbc:{NFSU2_TR((code+0xdbcu));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000dbd:{NFSU2_TR((code+0xdbdu));
u8 U[4];
w4(U+0,u32(code+0xdc2u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720767u);
}
B20000dc2:L20000dc2:{c.instructions+=4;NFSU2_TR((code+0xdc2u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000dc5:{NFSU2_TR((code+0xdc5u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0xcull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0xcull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xcull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B20000dc8:{NFSU2_TR((code+0xdc8u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000dc9:{NFSU2_TR((code+0xdc9u));
u8 U[4];
w4(U+0,u32(code+0xdceu));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x7204f3u);
}
B20000dce:L20000dce:{c.instructions+=4;NFSU2_TR((code+0xdceu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000dd1:{NFSU2_TR((code+0xdd1u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x10ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x10ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B20000dd4:{NFSU2_TR((code+0xdd4u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000dd5:{NFSU2_TR((code+0xdd5u));
u8 U[4];
w4(U+0,u32(code+0xddau));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720d57u);
}
B20000dda:L20000dda:{c.instructions+=3;NFSU2_TR((code+0xddau));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x64ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x64ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x64ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B20000ddd:{NFSU2_TR((code+0xdddu));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000dde:{NFSU2_TR((code+0xddeu));
u8 U[4];
w4(U+0,u32(code+0xde3u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x7204f3u);
}
B20000de3:L20000de3:{c.instructions+=4;NFSU2_TR((code+0xde3u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000de6:{NFSU2_TR((code+0xde6u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x10ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x10ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B20000de9:{NFSU2_TR((code+0xde9u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000dea:{NFSU2_TR((code+0xdeau));
u8 U[4];
w4(U+0,u32(code+0xdefu));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720767u);
}
B20000def:L20000def:{c.instructions+=4;NFSU2_TR((code+0xdefu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000df2:{NFSU2_TR((code+0xdf2u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0xcull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0xcull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xcull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B20000df5:{NFSU2_TR((code+0xdf5u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000df6:{NFSU2_TR((code+0xdf6u));
u8 U[4];
w4(U+0,u32(code+0xdfbu));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720767u);
}
B20000dfb:L20000dfb:{c.instructions+=4;NFSU2_TR((code+0xdfbu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000dfe:{NFSU2_TR((code+0xdfeu));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0xcull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0xcull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xcull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B20000e01:{NFSU2_TR((code+0xe01u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000e02:{NFSU2_TR((code+0xe02u));
u8 U[4];
w4(U+0,u32(code+0xe07u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720767u);
}
B20000e07:L20000e07:{c.instructions+=5;NFSU2_TR((code+0xe07u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000e0a:{NFSU2_TR((code+0xe0au));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000e0d:{NFSU2_TR((code+0xe0du));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0xcull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0xcull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xcull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B20000e10:{NFSU2_TR((code+0xe10u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000e11:{NFSU2_TR((code+0xe11u));
u8 U[4];
w4(U+0,u32(code+0xe16u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x7204f3u);
}
B20000e16:L20000e16:{c.instructions+=8;NFSU2_TR((code+0xe16u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000e19:{NFSU2_TR((code+0xe19u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x10ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x10ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B20000e1c:{NFSU2_TR((code+0xe1cu));
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B20000e1e:{NFSU2_TR((code+0xe1eu));
u8 U[14];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,carry<u32>(r4(R+0),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,scarry<u32>(r4(R+0),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B20000e21:{NFSU2_TR((code+0xe21u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000e24:{NFSU2_TR((code+0xe24u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x8ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x8ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B20000e27:{NFSU2_TR((code+0xe27u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000e28:{NFSU2_TR((code+0xe28u));
u8 U[4];
w4(U+0,u32(code+0xe2du));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720684u);
}
B20000e2d:L20000e2d:{c.instructions+=4;NFSU2_TR((code+0xe2du));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000e30:{NFSU2_TR((code+0xe30u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x10ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x10ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B20000e33:{NFSU2_TR((code+0xe33u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000e34:{NFSU2_TR((code+0xe34u));
u8 U[4];
w4(U+0,u32(code+0xe39u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720f32u);
}
B20000e39:L20000e39:{c.instructions+=5;NFSU2_TR((code+0xe39u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000e3c:{NFSU2_TR((code+0xe3cu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000e3f:{NFSU2_TR((code+0xe3fu));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x1cull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x1cull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1cull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B20000e42:{NFSU2_TR((code+0xe42u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000e43:{NFSU2_TR((code+0xe43u));
u8 U[4];
w4(U+0,u32(code+0xe48u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x7204f3u);
}
B20000e48:L20000e48:{c.instructions+=4;NFSU2_TR((code+0xe48u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000e4b:{NFSU2_TR((code+0xe4bu));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x10ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x10ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B20000e4e:{NFSU2_TR((code+0xe4eu));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000e4f:{NFSU2_TR((code+0xe4fu));
u8 U[4];
w4(U+0,u32(code+0xe54u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720767u);
}
B20000e54:L20000e54:{c.instructions+=4;NFSU2_TR((code+0xe54u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000e57:{NFSU2_TR((code+0xe57u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0xcull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0xcull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xcull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B20000e5a:{NFSU2_TR((code+0xe5au));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000e5b:{NFSU2_TR((code+0xe5bu));
u8 U[4];
w4(U+0,u32(code+0xe60u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720d57u);
}
B20000e60:L20000e60:{c.instructions+=3;NFSU2_TR((code+0xe60u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x64ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x64ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x64ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B20000e63:{NFSU2_TR((code+0xe63u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000e64:{NFSU2_TR((code+0xe64u));
u8 U[4];
w4(U+0,u32(code+0xe69u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x7204f3u);
}
B20000e69:L20000e69:{c.instructions+=4;NFSU2_TR((code+0xe69u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000e6c:{NFSU2_TR((code+0xe6cu));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x10ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x10ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B20000e6f:{NFSU2_TR((code+0xe6fu));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000e70:{NFSU2_TR((code+0xe70u));
u8 U[4];
w4(U+0,u32(code+0xe75u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720767u);
}
B20000e75:L20000e75:{c.instructions+=4;NFSU2_TR((code+0xe75u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000e78:{NFSU2_TR((code+0xe78u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0xcull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0xcull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xcull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B20000e7b:{NFSU2_TR((code+0xe7bu));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000e7c:{NFSU2_TR((code+0xe7cu));
u8 U[4];
w4(U+0,u32(code+0xe81u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720767u);
}
B20000e81:L20000e81:{c.instructions+=4;NFSU2_TR((code+0xe81u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000e84:{NFSU2_TR((code+0xe84u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0xcull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0xcull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xcull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B20000e87:{NFSU2_TR((code+0xe87u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000e88:{NFSU2_TR((code+0xe88u));
u8 U[4];
w4(U+0,u32(code+0xe8du));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720767u);
}
B20000e8d:L20000e8d:{c.instructions+=5;NFSU2_TR((code+0xe8du));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000e90:{NFSU2_TR((code+0xe90u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000e93:{NFSU2_TR((code+0xe93u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0xcull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0xcull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xcull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B20000e96:{NFSU2_TR((code+0xe96u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000e97:{NFSU2_TR((code+0xe97u));
u8 U[4];
w4(U+0,u32(code+0xe9cu));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x7204f3u);
}
B20000e9c:L20000e9c:{c.instructions+=8;NFSU2_TR((code+0xe9cu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000e9f:{NFSU2_TR((code+0xe9fu));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x10ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x10ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B20000ea2:{NFSU2_TR((code+0xea2u));
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B20000ea4:{NFSU2_TR((code+0xea4u));
u8 U[14];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,carry<u32>(r4(R+0),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,scarry<u32>(r4(R+0),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B20000ea7:{NFSU2_TR((code+0xea7u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000eaa:{NFSU2_TR((code+0xeaau));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x8ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x8ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B20000ead:{NFSU2_TR((code+0xeadu));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000eae:{NFSU2_TR((code+0xeaeu));
u8 U[4];
w4(U+0,u32(code+0xeb3u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720684u);
}
B20000eb3:L20000eb3:{c.instructions+=4;NFSU2_TR((code+0xeb3u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000eb6:{NFSU2_TR((code+0xeb6u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x10ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x10ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B20000eb9:{NFSU2_TR((code+0xeb9u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000eba:{NFSU2_TR((code+0xebau));
u8 U[4];
w4(U+0,u32(code+0xebfu));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720f32u);
}
B20000ebf:L20000ebf:{c.instructions+=5;NFSU2_TR((code+0xebfu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000ec2:{NFSU2_TR((code+0xec2u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000ec5:{NFSU2_TR((code+0xec5u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x1cull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x1cull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1cull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B20000ec8:{NFSU2_TR((code+0xec8u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000ec9:{NFSU2_TR((code+0xec9u));
u8 U[4];
w4(U+0,u32(code+0xeceu));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720767u);
}
B20000ece:L20000ece:{c.instructions+=4;NFSU2_TR((code+0xeceu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000ed1:{NFSU2_TR((code+0xed1u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0xcull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0xcull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xcull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B20000ed4:{NFSU2_TR((code+0xed4u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000ed5:{NFSU2_TR((code+0xed5u));
u8 U[4];
w4(U+0,u32(code+0xedau));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x7204f3u);
}
B20000eda:L20000eda:{c.instructions+=4;NFSU2_TR((code+0xedau));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000edd:{NFSU2_TR((code+0xeddu));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x10ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x10ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B20000ee0:{NFSU2_TR((code+0xee0u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000ee1:{NFSU2_TR((code+0xee1u));
u8 U[4];
w4(U+0,u32(code+0xee6u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720d57u);
}
B20000ee6:L20000ee6:{c.instructions+=4;NFSU2_TR((code+0xee6u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x64ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x64ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x64ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B20000ee9:{NFSU2_TR((code+0xee9u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x7cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x7cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x7cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B20000eec:{NFSU2_TR((code+0xeecu));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000eed:{NFSU2_TR((code+0xeedu));
u8 U[4];
w4(U+0,u32(code+0xef2u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x7204f3u);
}
B20000ef2:L20000ef2:{c.instructions+=4;NFSU2_TR((code+0xef2u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000ef5:{NFSU2_TR((code+0xef5u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x10ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x10ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B20000ef8:{NFSU2_TR((code+0xef8u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000ef9:{NFSU2_TR((code+0xef9u));
u8 U[4];
w4(U+0,u32(code+0xefeu));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720767u);
}
B20000efe:L20000efe:{c.instructions+=4;NFSU2_TR((code+0xefeu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000f01:{NFSU2_TR((code+0xf01u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0xcull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0xcull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xcull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B20000f04:{NFSU2_TR((code+0xf04u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000f05:{NFSU2_TR((code+0xf05u));
u8 U[4];
w4(U+0,u32(code+0xf0au));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720767u);
}
B20000f0a:L20000f0a:{c.instructions+=4;NFSU2_TR((code+0xf0au));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000f0d:{NFSU2_TR((code+0xf0du));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0xcull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0xcull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xcull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B20000f10:{NFSU2_TR((code+0xf10u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000f11:{NFSU2_TR((code+0xf11u));
u8 U[4];
w4(U+0,u32(code+0xf16u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720767u);
}
B20000f16:L20000f16:{c.instructions+=5;NFSU2_TR((code+0xf16u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000f19:{NFSU2_TR((code+0xf19u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000f1c:{NFSU2_TR((code+0xf1cu));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0xcull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0xcull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xcull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B20000f1f:{NFSU2_TR((code+0xf1fu));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000f20:{NFSU2_TR((code+0xf20u));
u8 U[4];
w4(U+0,u32(code+0xf25u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x7204f3u);
}
B20000f25:L20000f25:{c.instructions+=8;NFSU2_TR((code+0xf25u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000f28:{NFSU2_TR((code+0xf28u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x10ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x10ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B20000f2b:{NFSU2_TR((code+0xf2bu));
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B20000f2d:{NFSU2_TR((code+0xf2du));
u8 U[14];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,carry<u32>(r4(R+0),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,scarry<u32>(r4(R+0),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B20000f30:{NFSU2_TR((code+0xf30u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000f33:{NFSU2_TR((code+0xf33u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x8ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x8ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B20000f36:{NFSU2_TR((code+0xf36u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000f37:{NFSU2_TR((code+0xf37u));
u8 U[4];
w4(U+0,u32(code+0xf3cu));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720684u);
}
B20000f3c:L20000f3c:{c.instructions+=4;NFSU2_TR((code+0xf3cu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000f3f:{NFSU2_TR((code+0xf3fu));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x10ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x10ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B20000f42:{NFSU2_TR((code+0xf42u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000f43:{NFSU2_TR((code+0xf43u));
u8 U[4];
w4(U+0,u32(code+0xf48u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720f32u);
}
B20000f48:L20000f48:{c.instructions+=5;NFSU2_TR((code+0xf48u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000f4b:{NFSU2_TR((code+0xf4bu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000f4e:{NFSU2_TR((code+0xf4eu));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x1cull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x1cull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1cull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B20000f51:{NFSU2_TR((code+0xf51u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000f52:{NFSU2_TR((code+0xf52u));
u8 U[4];
w4(U+0,u32(code+0xf57u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x7204f3u);
}
B20000f57:L20000f57:{c.instructions+=4;NFSU2_TR((code+0xf57u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000f5a:{NFSU2_TR((code+0xf5au));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x10ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x10ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B20000f5d:{NFSU2_TR((code+0xf5du));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000f5e:{NFSU2_TR((code+0xf5eu));
u8 U[4];
w4(U+0,u32(code+0xf63u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720767u);
}
B20000f63:L20000f63:{c.instructions+=4;NFSU2_TR((code+0xf63u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000f66:{NFSU2_TR((code+0xf66u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0xcull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0xcull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xcull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B20000f69:{NFSU2_TR((code+0xf69u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000f6a:{NFSU2_TR((code+0xf6au));
u8 U[4];
w4(U+0,u32(code+0xf6fu));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720d57u);
}
B20000f6f:L20000f6f:{c.instructions+=3;NFSU2_TR((code+0xf6fu));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x64ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x64ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x64ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B20000f72:{NFSU2_TR((code+0xf72u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000f73:{NFSU2_TR((code+0xf73u));
u8 U[4];
w4(U+0,u32(code+0xf78u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x7204f3u);
}
B20000f78:L20000f78:{c.instructions+=4;NFSU2_TR((code+0xf78u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000f7b:{NFSU2_TR((code+0xf7bu));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x10ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x10ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B20000f7e:{NFSU2_TR((code+0xf7eu));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000f7f:{NFSU2_TR((code+0xf7fu));
u8 U[4];
w4(U+0,u32(code+0xf84u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720767u);
}
B20000f84:L20000f84:{c.instructions+=4;NFSU2_TR((code+0xf84u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000f87:{NFSU2_TR((code+0xf87u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0xcull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0xcull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xcull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B20000f8a:{NFSU2_TR((code+0xf8au));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000f8b:{NFSU2_TR((code+0xf8bu));
u8 U[4];
w4(U+0,u32(code+0xf90u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720767u);
}
B20000f90:L20000f90:{c.instructions+=4;NFSU2_TR((code+0xf90u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000f93:{NFSU2_TR((code+0xf93u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0xcull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0xcull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xcull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B20000f96:{NFSU2_TR((code+0xf96u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000f97:{NFSU2_TR((code+0xf97u));
u8 U[4];
w4(U+0,u32(code+0xf9cu));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720767u);
}
B20000f9c:L20000f9c:{c.instructions+=5;NFSU2_TR((code+0xf9cu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000f9f:{NFSU2_TR((code+0xf9fu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000fa2:{NFSU2_TR((code+0xfa2u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0xcull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0xcull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xcull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B20000fa5:{NFSU2_TR((code+0xfa5u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000fa6:{NFSU2_TR((code+0xfa6u));
u8 U[4];
w4(U+0,u32(code+0xfabu));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x7204f3u);
}
B20000fab:L20000fab:{c.instructions+=8;NFSU2_TR((code+0xfabu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000fae:{NFSU2_TR((code+0xfaeu));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x10ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x10ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B20000fb1:{NFSU2_TR((code+0xfb1u));
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B20000fb3:{NFSU2_TR((code+0xfb3u));
u8 U[14];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,carry<u32>(r4(R+0),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,scarry<u32>(r4(R+0),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B20000fb6:{NFSU2_TR((code+0xfb6u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000fb9:{NFSU2_TR((code+0xfb9u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x8ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x8ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B20000fbc:{NFSU2_TR((code+0xfbcu));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000fbd:{NFSU2_TR((code+0xfbdu));
u8 U[4];
w4(U+0,u32(code+0xfc2u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720684u);
}
B20000fc2:L20000fc2:{c.instructions+=4;NFSU2_TR((code+0xfc2u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000fc5:{NFSU2_TR((code+0xfc5u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x10ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x10ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B20000fc8:{NFSU2_TR((code+0xfc8u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000fc9:{NFSU2_TR((code+0xfc9u));
u8 U[4];
w4(U+0,u32(code+0xfceu));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720f32u);
}
B20000fce:L20000fce:{c.instructions+=5;NFSU2_TR((code+0xfceu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000fd1:{NFSU2_TR((code+0xfd1u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000fd4:{NFSU2_TR((code+0xfd4u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x1cull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x1cull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1cull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B20000fd7:{NFSU2_TR((code+0xfd7u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000fd8:{NFSU2_TR((code+0xfd8u));
u8 U[4];
w4(U+0,u32(code+0xfddu));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720767u);
}
B20000fdd:L20000fdd:{c.instructions+=4;NFSU2_TR((code+0xfddu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000fe0:{NFSU2_TR((code+0xfe0u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0xcull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0xcull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xcull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B20000fe3:{NFSU2_TR((code+0xfe3u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000fe4:{NFSU2_TR((code+0xfe4u));
u8 U[4];
w4(U+0,u32(code+0xfe9u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x7204f3u);
}
B20000fe9:L20000fe9:{c.instructions+=4;NFSU2_TR((code+0xfe9u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000fec:{NFSU2_TR((code+0xfecu));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x10ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x10ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B20000fef:{NFSU2_TR((code+0xfefu));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000ff0:{NFSU2_TR((code+0xff0u));
u8 U[4];
w4(U+0,u32(code+0xff5u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720d57u);
}
B20000ff5:L20000ff5:{c.instructions+=3;NFSU2_TR((code+0xff5u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x64ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x64ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x64ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B20000ff8:{NFSU2_TR((code+0xff8u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000ff9:{NFSU2_TR((code+0xff9u));
u8 U[4];
w4(U+0,u32(code+0xffeu));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x7204f3u);
}
B20000ffe:L20000ffe:{c.instructions+=4;NFSU2_TR((code+0xffeu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20001001:{NFSU2_TR((code+0x1001u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x10ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x10ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B20001004:{NFSU2_TR((code+0x1004u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20001005:{NFSU2_TR((code+0x1005u));
u8 U[4];
w4(U+0,u32(code+0x100au));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720767u);
}
B2000100a:L2000100a:{c.instructions+=4;NFSU2_TR((code+0x100au));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B2000100d:{NFSU2_TR((code+0x100du));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0xcull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0xcull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xcull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B20001010:{NFSU2_TR((code+0x1010u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20001011:{NFSU2_TR((code+0x1011u));
u8 U[4];
w4(U+0,u32(code+0x1016u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720767u);
}
B20001016:L20001016:{c.instructions+=4;NFSU2_TR((code+0x1016u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20001019:{NFSU2_TR((code+0x1019u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0xcull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0xcull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xcull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B2000101c:{NFSU2_TR((code+0x101cu));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B2000101d:{NFSU2_TR((code+0x101du));
u8 U[4];
w4(U+0,u32(code+0x1022u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720767u);
}
B20001022:L20001022:{c.instructions+=5;NFSU2_TR((code+0x1022u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20001025:{NFSU2_TR((code+0x1025u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20001028:{NFSU2_TR((code+0x1028u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0xcull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0xcull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xcull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B2000102b:{NFSU2_TR((code+0x102bu));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B2000102c:{NFSU2_TR((code+0x102cu));
u8 U[4];
w4(U+0,u32(code+0x1031u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x7204f3u);
}
B20001031:L20001031:{c.instructions+=8;NFSU2_TR((code+0x1031u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20001034:{NFSU2_TR((code+0x1034u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x10ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x10ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B20001037:{NFSU2_TR((code+0x1037u));
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B20001039:{NFSU2_TR((code+0x1039u));
u8 U[14];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,carry<u32>(r4(R+0),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,scarry<u32>(r4(R+0),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B2000103c:{NFSU2_TR((code+0x103cu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B2000103f:{NFSU2_TR((code+0x103fu));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x8ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x8ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B20001042:{NFSU2_TR((code+0x1042u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20001043:{NFSU2_TR((code+0x1043u));
u8 U[4];
w4(U+0,u32(code+0x1048u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720684u);
}
B20001048:L20001048:{c.instructions+=4;NFSU2_TR((code+0x1048u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B2000104b:{NFSU2_TR((code+0x104bu));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x10ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x10ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B2000104e:{NFSU2_TR((code+0x104eu));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B2000104f:{NFSU2_TR((code+0x104fu));
u8 U[4];
w4(U+0,u32(code+0x1054u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720f32u);
}
B20001054:L20001054:{c.instructions+=5;NFSU2_TR((code+0x1054u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20001057:{NFSU2_TR((code+0x1057u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B2000105a:{NFSU2_TR((code+0x105au));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x1cull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x1cull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1cull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B2000105d:{NFSU2_TR((code+0x105du));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B2000105e:{NFSU2_TR((code+0x105eu));
u8 U[4];
w4(U+0,u32(code+0x1063u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x7204f3u);
}
B20001063:L20001063:{c.instructions+=4;NFSU2_TR((code+0x1063u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20001066:{NFSU2_TR((code+0x1066u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x10ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x10ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B20001069:{NFSU2_TR((code+0x1069u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B2000106a:{NFSU2_TR((code+0x106au));
u8 U[4];
w4(U+0,u32(code+0x106fu));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720767u);
}
B2000106f:L2000106f:{c.instructions+=4;NFSU2_TR((code+0x106fu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20001072:{NFSU2_TR((code+0x1072u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0xcull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0xcull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xcull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B20001075:{NFSU2_TR((code+0x1075u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20001076:{NFSU2_TR((code+0x1076u));
u8 U[4];
w4(U+0,u32(code+0x107bu));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720d57u);
}
B2000107b:L2000107b:{c.instructions+=3;NFSU2_TR((code+0x107bu));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x64ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x64ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x64ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B2000107e:{NFSU2_TR((code+0x107eu));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B2000107f:{NFSU2_TR((code+0x107fu));
u8 U[4];
w4(U+0,u32(code+0x1084u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x7204f3u);
}
B20001084:L20001084:{c.instructions+=5;NFSU2_TR((code+0x1084u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20001087:{NFSU2_TR((code+0x1087u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x10ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x10ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B2000108a:{NFSU2_TR((code+0x108au));
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x7cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x7cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x7cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B2000108d:{NFSU2_TR((code+0x108du));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B2000108e:{NFSU2_TR((code+0x108eu));
u8 U[4];
w4(U+0,u32(code+0x1093u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720767u);
}
B20001093:L20001093:{c.instructions+=4;NFSU2_TR((code+0x1093u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20001096:{NFSU2_TR((code+0x1096u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0xcull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0xcull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xcull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B20001099:{NFSU2_TR((code+0x1099u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B2000109a:{NFSU2_TR((code+0x109au));
u8 U[4];
w4(U+0,u32(code+0x109fu));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720767u);
}
B2000109f:L2000109f:{c.instructions+=4;NFSU2_TR((code+0x109fu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200010a2:{NFSU2_TR((code+0x10a2u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0xcull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0xcull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xcull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B200010a5:{NFSU2_TR((code+0x10a5u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B200010a6:{NFSU2_TR((code+0x10a6u));
u8 U[4];
w4(U+0,u32(code+0x10abu));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720767u);
}
B200010ab:L200010ab:{c.instructions+=5;NFSU2_TR((code+0x10abu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200010ae:{NFSU2_TR((code+0x10aeu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200010b1:{NFSU2_TR((code+0x10b1u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0xcull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0xcull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xcull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B200010b4:{NFSU2_TR((code+0x10b4u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B200010b5:{NFSU2_TR((code+0x10b5u));
u8 U[4];
w4(U+0,u32(code+0x10bau));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x7204f3u);
}
B200010ba:L200010ba:{c.instructions+=8;NFSU2_TR((code+0x10bau));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200010bd:{NFSU2_TR((code+0x10bdu));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x10ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x10ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B200010c0:{NFSU2_TR((code+0x10c0u));
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B200010c2:{NFSU2_TR((code+0x10c2u));
u8 U[14];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,carry<u32>(r4(R+0),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,scarry<u32>(r4(R+0),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B200010c5:{NFSU2_TR((code+0x10c5u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200010c8:{NFSU2_TR((code+0x10c8u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x8ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x8ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B200010cb:{NFSU2_TR((code+0x10cbu));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B200010cc:{NFSU2_TR((code+0x10ccu));
u8 U[4];
w4(U+0,u32(code+0x10d1u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720684u);
}
B200010d1:L200010d1:{c.instructions+=4;NFSU2_TR((code+0x10d1u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200010d4:{NFSU2_TR((code+0x10d4u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x10ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x10ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B200010d7:{NFSU2_TR((code+0x10d7u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B200010d8:{NFSU2_TR((code+0x10d8u));
u8 U[4];
w4(U+0,u32(code+0x10ddu));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720f32u);
}
B200010dd:L200010dd:{c.instructions+=5;NFSU2_TR((code+0x10ddu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200010e0:{NFSU2_TR((code+0x10e0u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200010e3:{NFSU2_TR((code+0x10e3u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x1cull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x1cull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1cull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B200010e6:{NFSU2_TR((code+0x10e6u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B200010e7:{NFSU2_TR((code+0x10e7u));
u8 U[4];
w4(U+0,u32(code+0x10ecu));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720767u);
}
B200010ec:L200010ec:{c.instructions+=4;NFSU2_TR((code+0x10ecu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200010ef:{NFSU2_TR((code+0x10efu));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0xcull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0xcull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xcull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B200010f2:{NFSU2_TR((code+0x10f2u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B200010f3:{NFSU2_TR((code+0x10f3u));
u8 U[4];
w4(U+0,u32(code+0x10f8u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x7204f3u);
}
B200010f8:L200010f8:{c.instructions+=4;NFSU2_TR((code+0x10f8u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200010fb:{NFSU2_TR((code+0x10fbu));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x10ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x10ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B200010fe:{NFSU2_TR((code+0x10feu));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B200010ff:{NFSU2_TR((code+0x10ffu));
u8 U[4];
w4(U+0,u32(code+0x1104u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720d57u);
}
B20001104:L20001104:{c.instructions+=3;NFSU2_TR((code+0x1104u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x64ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x64ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x64ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B20001107:{NFSU2_TR((code+0x1107u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20001108:{NFSU2_TR((code+0x1108u));
u8 U[4];
w4(U+0,u32(code+0x110du));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x7204f3u);
}
B2000110d:L2000110d:{c.instructions+=4;NFSU2_TR((code+0x110du));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20001110:{NFSU2_TR((code+0x1110u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x10ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x10ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B20001113:{NFSU2_TR((code+0x1113u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20001114:{NFSU2_TR((code+0x1114u));
u8 U[4];
w4(U+0,u32(code+0x1119u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720767u);
}
B20001119:L20001119:{c.instructions+=3;NFSU2_TR((code+0x1119u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0xcull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0xcull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xcull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B2000111c:{NFSU2_TR((code+0x111cu));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B2000111d:{NFSU2_TR((code+0x111du));
u8 U[4];
w4(U+0,u32(code+0x1122u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x7204f3u);
}
B20001122:L20001122:{c.instructions+=4;NFSU2_TR((code+0x1122u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20001125:{NFSU2_TR((code+0x1125u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x10ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x10ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B20001128:{NFSU2_TR((code+0x1128u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20001129:{NFSU2_TR((code+0x1129u));
u8 U[4];
w4(U+0,u32(code+0x112eu));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720767u);
}
B2000112e:L2000112e:{c.instructions+=5;NFSU2_TR((code+0x112eu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20001131:{NFSU2_TR((code+0x1131u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20001134:{NFSU2_TR((code+0x1134u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0xcull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0xcull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xcull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B20001137:{NFSU2_TR((code+0x1137u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20001138:{NFSU2_TR((code+0x1138u));
u8 U[4];
w4(U+0,u32(code+0x113du));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x7204f3u);
}
B2000113d:L2000113d:{c.instructions+=8;NFSU2_TR((code+0x113du));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20001140:{NFSU2_TR((code+0x1140u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x10ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x10ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B20001143:{NFSU2_TR((code+0x1143u));
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B20001145:{NFSU2_TR((code+0x1145u));
u8 U[14];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,carry<u32>(r4(R+0),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,scarry<u32>(r4(R+0),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B20001148:{NFSU2_TR((code+0x1148u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B2000114b:{NFSU2_TR((code+0x114bu));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x8ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x8ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B2000114e:{NFSU2_TR((code+0x114eu));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B2000114f:{NFSU2_TR((code+0x114fu));
u8 U[4];
w4(U+0,u32(code+0x1154u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720684u);
}
B20001154:L20001154:{c.instructions+=4;NFSU2_TR((code+0x1154u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20001157:{NFSU2_TR((code+0x1157u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x10ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x10ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B2000115a:{NFSU2_TR((code+0x115au));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B2000115b:{NFSU2_TR((code+0x115bu));
u8 U[4];
w4(U+0,u32(code+0x1160u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720f32u);
}
B20001160:L20001160:{c.instructions+=5;NFSU2_TR((code+0x1160u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20001163:{NFSU2_TR((code+0x1163u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20001166:{NFSU2_TR((code+0x1166u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x1cull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x1cull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1cull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B20001169:{NFSU2_TR((code+0x1169u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B2000116a:{NFSU2_TR((code+0x116au));
u8 U[4];
w4(U+0,u32(code+0x116fu));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720767u);
}
B2000116f:L2000116f:{c.instructions+=4;NFSU2_TR((code+0x116fu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20001172:{NFSU2_TR((code+0x1172u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0xcull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0xcull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xcull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B20001175:{NFSU2_TR((code+0x1175u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20001176:{NFSU2_TR((code+0x1176u));
u8 U[4];
w4(U+0,u32(code+0x117bu));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x7204f3u);
}
B2000117b:L2000117b:{c.instructions+=4;NFSU2_TR((code+0x117bu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B2000117e:{NFSU2_TR((code+0x117eu));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x10ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x10ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B20001181:{NFSU2_TR((code+0x1181u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20001182:{NFSU2_TR((code+0x1182u));
u8 U[4];
w4(U+0,u32(code+0x1187u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720d57u);
}
B20001187:L20001187:{c.instructions+=3;NFSU2_TR((code+0x1187u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x58ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x58ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x58ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B2000118a:{NFSU2_TR((code+0x118au));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B2000118b:{NFSU2_TR((code+0x118bu));
u8 U[4];
w4(U+0,u32(code+0x1190u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x71ff15u);
}
B20001190:L20001190:{c.instructions+=4;NFSU2_TR((code+0x1190u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x10ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x10ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B20001193:{NFSU2_TR((code+0x1193u));
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
B20001196:{NFSU2_TR((code+0x1196u));
u8 U[4];
w4(U+0,u32(0x0ull));
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B20001197:{NFSU2_TR((code+0x1197u));
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));EXIT(t_);}
}
XIT:return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
u32 audio_1cfa22c1882b(Cpu& c,u32 code){return audio_1cfa22c1882b_body(c.regs.data(),c,code);}
}
