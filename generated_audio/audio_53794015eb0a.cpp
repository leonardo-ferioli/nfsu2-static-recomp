#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
#define TAIL_STATIC(T,PG) EXIT(T)
#define TAIL_DYNAMIC(T) EXIT(T)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
// code range sha256 53794015eb0a522b29e0fc1ad63567a6bce6f4b26c766e5c99e57f165e0577d2, 4492 bytes, 1393 instructions
__attribute__((noinline)) static u32 audio_53794015eb0a_body(u8* __restrict R,Cpu& c,u32 code){
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
case 0x182:c.instructions+=3;goto B20000182;
case 0x185:c.instructions+=2;goto B20000185;
case 0x186:c.instructions+=1;goto B20000186;
case 0x18b:goto L2000018b;
case 0x191:c.instructions+=8;goto B20000191;
case 0x197:c.instructions+=7;goto B20000197;
case 0x19a:c.instructions+=6;goto B2000019a;
case 0x19c:c.instructions+=5;goto B2000019c;
case 0x19f:c.instructions+=4;goto B2000019f;
case 0x1a2:c.instructions+=3;goto B200001a2;
case 0x1a5:c.instructions+=2;goto B200001a5;
case 0x1a6:c.instructions+=1;goto B200001a6;
case 0x1ab:goto L200001ab;
case 0x1b1:c.instructions+=3;goto B200001b1;
case 0x1b4:c.instructions+=2;goto B200001b4;
case 0x1b5:c.instructions+=1;goto B200001b5;
case 0x1ba:goto L200001ba;
case 0x1bd:c.instructions+=3;goto B200001bd;
case 0x1c0:c.instructions+=2;goto B200001c0;
case 0x1c1:c.instructions+=1;goto B200001c1;
case 0x1c6:goto L200001c6;
case 0x1c9:c.instructions+=3;goto B200001c9;
case 0x1cc:c.instructions+=2;goto B200001cc;
case 0x1cd:c.instructions+=1;goto B200001cd;
case 0x1d2:goto L200001d2;
case 0x1d8:c.instructions+=6;goto B200001d8;
case 0x1de:c.instructions+=5;goto B200001de;
case 0x1e4:c.instructions+=4;goto B200001e4;
case 0x1ea:c.instructions+=3;goto B200001ea;
case 0x1ed:c.instructions+=2;goto B200001ed;
case 0x1ee:c.instructions+=1;goto B200001ee;
case 0x1f3:goto L200001f3;
case 0x1f6:c.instructions+=31;goto B200001f6;
case 0x1fc:c.instructions+=30;goto B200001fc;
case 0x202:c.instructions+=29;goto B20000202;
case 0x208:c.instructions+=28;goto B20000208;
case 0x20e:c.instructions+=27;goto B2000020e;
case 0x214:c.instructions+=26;goto B20000214;
case 0x21a:c.instructions+=25;goto B2000021a;
case 0x220:c.instructions+=24;goto B20000220;
case 0x226:c.instructions+=23;goto B20000226;
case 0x22c:c.instructions+=22;goto B2000022c;
case 0x232:c.instructions+=21;goto B20000232;
case 0x238:c.instructions+=20;goto B20000238;
case 0x23e:c.instructions+=19;goto B2000023e;
case 0x244:c.instructions+=18;goto B20000244;
case 0x24a:c.instructions+=17;goto B2000024a;
case 0x250:c.instructions+=16;goto B20000250;
case 0x256:c.instructions+=15;goto B20000256;
case 0x25c:c.instructions+=14;goto B2000025c;
case 0x262:c.instructions+=13;goto B20000262;
case 0x268:c.instructions+=12;goto B20000268;
case 0x26e:c.instructions+=11;goto B2000026e;
case 0x274:c.instructions+=10;goto B20000274;
case 0x27a:c.instructions+=9;goto B2000027a;
case 0x280:c.instructions+=8;goto B20000280;
case 0x286:c.instructions+=7;goto B20000286;
case 0x289:c.instructions+=6;goto B20000289;
case 0x28b:c.instructions+=5;goto B2000028b;
case 0x28f:c.instructions+=4;goto B2000028f;
case 0x292:c.instructions+=3;goto B20000292;
case 0x295:c.instructions+=2;goto B20000295;
case 0x296:c.instructions+=1;goto B20000296;
case 0x29b:goto L2000029b;
case 0x29e:c.instructions+=3;goto B2000029e;
case 0x2a1:c.instructions+=2;goto B200002a1;
case 0x2a2:c.instructions+=1;goto B200002a2;
case 0x2a7:goto L200002a7;
case 0x2aa:c.instructions+=3;goto B200002aa;
case 0x2ad:c.instructions+=2;goto B200002ad;
case 0x2ae:c.instructions+=1;goto B200002ae;
case 0x2b3:goto L200002b3;
case 0x2b6:c.instructions+=15;goto B200002b6;
case 0x2b9:c.instructions+=14;goto B200002b9;
case 0x2bc:c.instructions+=13;goto B200002bc;
case 0x2bf:c.instructions+=12;goto B200002bf;
case 0x2c2:c.instructions+=11;goto B200002c2;
case 0x2c5:c.instructions+=10;goto B200002c5;
case 0x2c8:c.instructions+=9;goto B200002c8;
case 0x2cb:c.instructions+=8;goto B200002cb;
case 0x2ce:c.instructions+=7;goto B200002ce;
case 0x2d1:c.instructions+=6;goto B200002d1;
case 0x2d3:c.instructions+=5;goto B200002d3;
case 0x2d7:c.instructions+=4;goto B200002d7;
case 0x2dd:c.instructions+=3;goto B200002dd;
case 0x2e0:c.instructions+=2;goto B200002e0;
case 0x2e1:c.instructions+=1;goto B200002e1;
case 0x2e6:goto L200002e6;
case 0x2ec:c.instructions+=3;goto B200002ec;
case 0x2ef:c.instructions+=2;goto B200002ef;
case 0x2f0:c.instructions+=1;goto B200002f0;
case 0x2f5:goto L200002f5;
case 0x2fb:c.instructions+=15;goto B200002fb;
case 0x2fe:c.instructions+=14;goto B200002fe;
case 0x300:c.instructions+=13;goto B20000300;
case 0x304:c.instructions+=12;goto B20000304;
case 0x30a:c.instructions+=11;goto B2000030a;
case 0x30d:c.instructions+=10;goto B2000030d;
case 0x30f:c.instructions+=9;goto B2000030f;
case 0x313:c.instructions+=8;goto B20000313;
case 0x319:c.instructions+=7;goto B20000319;
case 0x31c:c.instructions+=6;goto B2000031c;
case 0x31e:c.instructions+=5;goto B2000031e;
case 0x322:c.instructions+=4;goto B20000322;
case 0x328:c.instructions+=3;goto B20000328;
case 0x32b:c.instructions+=2;goto B2000032b;
case 0x32c:c.instructions+=1;goto B2000032c;
case 0x331:goto L20000331;
case 0x337:c.instructions+=3;goto B20000337;
case 0x33a:c.instructions+=2;goto B2000033a;
case 0x33b:c.instructions+=1;goto B2000033b;
case 0x340:goto L20000340;
case 0x343:c.instructions+=2;goto B20000343;
case 0x344:c.instructions+=1;goto B20000344;
case 0x349:goto L20000349;
case 0x34f:c.instructions+=3;goto B2000034f;
case 0x352:c.instructions+=2;goto B20000352;
case 0x353:c.instructions+=1;goto B20000353;
case 0x358:goto L20000358;
case 0x35e:c.instructions+=3;goto B2000035e;
case 0x361:c.instructions+=2;goto B20000361;
case 0x362:c.instructions+=1;goto B20000362;
case 0x367:goto L20000367;
case 0x36d:c.instructions+=3;goto B2000036d;
case 0x370:c.instructions+=2;goto B20000370;
case 0x371:c.instructions+=1;goto B20000371;
case 0x376:goto L20000376;
case 0x37c:c.instructions+=3;goto B2000037c;
case 0x37f:c.instructions+=2;goto B2000037f;
case 0x380:c.instructions+=1;goto B20000380;
case 0x385:goto L20000385;
case 0x38b:c.instructions+=3;goto B2000038b;
case 0x38e:c.instructions+=2;goto B2000038e;
case 0x38f:c.instructions+=1;goto B2000038f;
case 0x394:goto L20000394;
case 0x39a:c.instructions+=3;goto B2000039a;
case 0x39d:c.instructions+=2;goto B2000039d;
case 0x39e:c.instructions+=1;goto B2000039e;
case 0x3a3:goto L200003a3;
case 0x3a9:c.instructions+=3;goto B200003a9;
case 0x3ac:c.instructions+=2;goto B200003ac;
case 0x3ad:c.instructions+=1;goto B200003ad;
case 0x3b2:goto L200003b2;
case 0x3b8:c.instructions+=3;goto B200003b8;
case 0x3bb:c.instructions+=2;goto B200003bb;
case 0x3bc:c.instructions+=1;goto B200003bc;
case 0x3c1:goto L200003c1;
case 0x3c7:c.instructions+=4;goto B200003c7;
case 0x3ca:c.instructions+=3;goto B200003ca;
case 0x3cd:c.instructions+=2;goto B200003cd;
case 0x3ce:c.instructions+=1;goto B200003ce;
case 0x3d3:goto L200003d3;
case 0x3d9:c.instructions+=3;goto B200003d9;
case 0x3dc:c.instructions+=2;goto B200003dc;
case 0x3dd:c.instructions+=1;goto B200003dd;
case 0x3e2:goto L200003e2;
case 0x3e8:c.instructions+=4;goto B200003e8;
case 0x3eb:c.instructions+=3;goto B200003eb;
case 0x3ee:c.instructions+=2;goto B200003ee;
case 0x3ef:c.instructions+=1;goto B200003ef;
case 0x3f4:goto L200003f4;
case 0x3fa:c.instructions+=4;goto B200003fa;
case 0x3fd:c.instructions+=3;goto B200003fd;
case 0x400:c.instructions+=2;goto B20000400;
case 0x401:c.instructions+=1;goto B20000401;
case 0x406:goto L20000406;
case 0x40c:c.instructions+=4;goto B2000040c;
case 0x40f:c.instructions+=3;goto B2000040f;
case 0x412:c.instructions+=2;goto B20000412;
case 0x413:c.instructions+=1;goto B20000413;
case 0x418:goto L20000418;
case 0x41e:c.instructions+=3;goto B2000041e;
case 0x421:c.instructions+=2;goto B20000421;
case 0x422:c.instructions+=1;goto B20000422;
case 0x427:goto L20000427;
case 0x42d:c.instructions+=4;goto B2000042d;
case 0x430:c.instructions+=3;goto B20000430;
case 0x433:c.instructions+=2;goto B20000433;
case 0x434:c.instructions+=1;goto B20000434;
case 0x439:goto L20000439;
case 0x43f:c.instructions+=3;goto B2000043f;
case 0x442:c.instructions+=2;goto B20000442;
case 0x443:c.instructions+=1;goto B20000443;
case 0x448:goto L20000448;
case 0x44b:c.instructions+=3;goto B2000044b;
case 0x44e:c.instructions+=2;goto B2000044e;
case 0x44f:c.instructions+=1;goto B2000044f;
case 0x454:goto L20000454;
case 0x457:c.instructions+=4;goto B20000457;
case 0x45a:c.instructions+=3;goto B2000045a;
case 0x45d:c.instructions+=2;goto B2000045d;
case 0x45e:c.instructions+=1;goto B2000045e;
case 0x463:goto L20000463;
case 0x466:c.instructions+=7;goto B20000466;
case 0x469:c.instructions+=6;goto B20000469;
case 0x46b:c.instructions+=5;goto B2000046b;
case 0x46e:c.instructions+=4;goto B2000046e;
case 0x471:c.instructions+=3;goto B20000471;
case 0x474:c.instructions+=2;goto B20000474;
case 0x475:c.instructions+=1;goto B20000475;
case 0x47a:goto L2000047a;
case 0x47d:c.instructions+=3;goto B2000047d;
case 0x480:c.instructions+=2;goto B20000480;
case 0x481:c.instructions+=1;goto B20000481;
case 0x486:goto L20000486;
case 0x489:c.instructions+=4;goto B20000489;
case 0x48c:c.instructions+=3;goto B2000048c;
case 0x48f:c.instructions+=2;goto B2000048f;
case 0x490:c.instructions+=1;goto B20000490;
case 0x495:goto L20000495;
case 0x49b:c.instructions+=3;goto B2000049b;
case 0x49e:c.instructions+=2;goto B2000049e;
case 0x49f:c.instructions+=1;goto B2000049f;
case 0x4a4:goto L200004a4;
case 0x4aa:c.instructions+=3;goto B200004aa;
case 0x4ad:c.instructions+=2;goto B200004ad;
case 0x4ae:c.instructions+=1;goto B200004ae;
case 0x4b3:goto L200004b3;
case 0x4b9:c.instructions+=3;goto B200004b9;
case 0x4bc:c.instructions+=2;goto B200004bc;
case 0x4bd:c.instructions+=1;goto B200004bd;
case 0x4c2:goto L200004c2;
case 0x4c5:c.instructions+=3;goto B200004c5;
case 0x4c8:c.instructions+=2;goto B200004c8;
case 0x4c9:c.instructions+=1;goto B200004c9;
case 0x4ce:goto L200004ce;
case 0x4d1:c.instructions+=3;goto B200004d1;
case 0x4d4:c.instructions+=2;goto B200004d4;
case 0x4d5:c.instructions+=1;goto B200004d5;
case 0x4da:goto L200004da;
case 0x4dd:c.instructions+=3;goto B200004dd;
case 0x4e0:c.instructions+=2;goto B200004e0;
case 0x4e1:c.instructions+=1;goto B200004e1;
case 0x4e6:goto L200004e6;
case 0x4e9:c.instructions+=3;goto B200004e9;
case 0x4ec:c.instructions+=2;goto B200004ec;
case 0x4ed:c.instructions+=1;goto B200004ed;
case 0x4f2:goto L200004f2;
case 0x4f5:c.instructions+=3;goto B200004f5;
case 0x4f8:c.instructions+=2;goto B200004f8;
case 0x4f9:c.instructions+=1;goto B200004f9;
case 0x4fe:goto L200004fe;
case 0x501:c.instructions+=3;goto B20000501;
case 0x504:c.instructions+=2;goto B20000504;
case 0x505:c.instructions+=1;goto B20000505;
case 0x50a:goto L2000050a;
case 0x50d:c.instructions+=3;goto B2000050d;
case 0x510:c.instructions+=2;goto B20000510;
case 0x511:c.instructions+=1;goto B20000511;
case 0x516:goto L20000516;
case 0x51c:c.instructions+=10;goto B2000051c;
case 0x522:c.instructions+=9;goto B20000522;
case 0x528:c.instructions+=8;goto B20000528;
case 0x52e:c.instructions+=7;goto B2000052e;
case 0x534:c.instructions+=6;goto B20000534;
case 0x53a:c.instructions+=5;goto B2000053a;
case 0x540:c.instructions+=4;goto B20000540;
case 0x546:c.instructions+=3;goto B20000546;
case 0x549:c.instructions+=2;goto B20000549;
case 0x54a:c.instructions+=1;goto B2000054a;
case 0x54f:goto L2000054f;
case 0x552:c.instructions+=3;goto B20000552;
case 0x555:c.instructions+=2;goto B20000555;
case 0x556:c.instructions+=1;goto B20000556;
case 0x55b:goto L2000055b;
case 0x561:c.instructions+=9;goto B20000561;
case 0x567:c.instructions+=8;goto B20000567;
case 0x56d:c.instructions+=7;goto B2000056d;
case 0x573:c.instructions+=6;goto B20000573;
case 0x579:c.instructions+=5;goto B20000579;
case 0x57f:c.instructions+=4;goto B2000057f;
case 0x585:c.instructions+=3;goto B20000585;
case 0x588:c.instructions+=2;goto B20000588;
case 0x589:c.instructions+=1;goto B20000589;
case 0x58e:goto L2000058e;
case 0x591:c.instructions+=21;goto B20000591;
case 0x597:c.instructions+=20;goto B20000597;
case 0x59d:c.instructions+=19;goto B2000059d;
case 0x5a3:c.instructions+=18;goto B200005a3;
case 0x5a9:c.instructions+=17;goto B200005a9;
case 0x5af:c.instructions+=16;goto B200005af;
case 0x5b5:c.instructions+=15;goto B200005b5;
case 0x5bb:c.instructions+=14;goto B200005bb;
case 0x5be:c.instructions+=13;goto B200005be;
case 0x5c0:c.instructions+=12;goto B200005c0;
case 0x5c3:c.instructions+=11;goto B200005c3;
case 0x5c6:c.instructions+=10;goto B200005c6;
case 0x5cc:c.instructions+=9;goto B200005cc;
case 0x5d2:c.instructions+=8;goto B200005d2;
case 0x5d8:c.instructions+=7;goto B200005d8;
case 0x5de:c.instructions+=6;goto B200005de;
case 0x5e4:c.instructions+=5;goto B200005e4;
case 0x5ea:c.instructions+=4;goto B200005ea;
case 0x5f0:c.instructions+=3;goto B200005f0;
case 0x5f3:c.instructions+=2;goto B200005f3;
case 0x5f4:c.instructions+=1;goto B200005f4;
case 0x5f9:goto L200005f9;
case 0x5fc:c.instructions+=2;goto B200005fc;
case 0x5fd:c.instructions+=1;goto B200005fd;
case 0x602:goto L20000602;
case 0x605:c.instructions+=3;goto B20000605;
case 0x608:c.instructions+=2;goto B20000608;
case 0x609:c.instructions+=1;goto B20000609;
case 0x60e:goto L2000060e;
case 0x611:c.instructions+=3;goto B20000611;
case 0x614:c.instructions+=2;goto B20000614;
case 0x615:c.instructions+=1;goto B20000615;
case 0x61a:goto L2000061a;
case 0x620:c.instructions+=7;goto B20000620;
case 0x623:c.instructions+=6;goto B20000623;
case 0x625:c.instructions+=5;goto B20000625;
case 0x628:c.instructions+=4;goto B20000628;
case 0x62b:c.instructions+=3;goto B2000062b;
case 0x62e:c.instructions+=2;goto B2000062e;
case 0x62f:c.instructions+=1;goto B2000062f;
case 0x634:goto L20000634;
case 0x637:c.instructions+=3;goto B20000637;
case 0x63a:c.instructions+=2;goto B2000063a;
case 0x63b:c.instructions+=1;goto B2000063b;
case 0x640:goto L20000640;
case 0x643:c.instructions+=5;goto B20000643;
case 0x646:c.instructions+=4;goto B20000646;
case 0x648:c.instructions+=3;goto B20000648;
case 0x64b:c.instructions+=2;goto B2000064b;
case 0x64d:c.instructions+=1;goto B2000064d;
case 0x64f:goto L2000064f;
case 0x651:goto L20000651;
case 0x654:c.instructions+=3;goto B20000654;
case 0x657:c.instructions+=2;goto B20000657;
case 0x658:c.instructions+=1;goto B20000658;
case 0x65d:goto L2000065d;
case 0x660:c.instructions+=3;goto B20000660;
case 0x663:c.instructions+=2;goto B20000663;
case 0x664:c.instructions+=1;goto B20000664;
case 0x669:goto L20000669;
case 0x66c:c.instructions+=4;goto B2000066c;
case 0x66f:c.instructions+=3;goto B2000066f;
case 0x672:c.instructions+=2;goto B20000672;
case 0x673:c.instructions+=1;goto B20000673;
case 0x678:goto L20000678;
case 0x67b:c.instructions+=11;goto B2000067b;
case 0x67e:c.instructions+=10;goto B2000067e;
case 0x680:c.instructions+=9;goto B20000680;
case 0x683:c.instructions+=8;goto B20000683;
case 0x689:c.instructions+=7;goto B20000689;
case 0x68c:c.instructions+=6;goto B2000068c;
case 0x68e:c.instructions+=5;goto B2000068e;
case 0x692:c.instructions+=4;goto B20000692;
case 0x695:c.instructions+=3;goto B20000695;
case 0x698:c.instructions+=2;goto B20000698;
case 0x699:c.instructions+=1;goto B20000699;
case 0x69e:goto L2000069e;
case 0x6a1:c.instructions+=9;goto B200006a1;
case 0x6a4:c.instructions+=8;goto B200006a4;
case 0x6a6:c.instructions+=7;goto B200006a6;
case 0x6aa:c.instructions+=6;goto B200006aa;
case 0x6b0:c.instructions+=5;goto B200006b0;
case 0x6b3:c.instructions+=4;goto B200006b3;
case 0x6b5:c.instructions+=3;goto B200006b5;
case 0x6b8:c.instructions+=2;goto B200006b8;
case 0x6ba:c.instructions+=1;goto B200006ba;
case 0x6bc:goto L200006bc;
case 0x6be:goto L200006be;
case 0x6c4:c.instructions+=3;goto B200006c4;
case 0x6c7:c.instructions+=2;goto B200006c7;
case 0x6c8:c.instructions+=1;goto B200006c8;
case 0x6cd:goto L200006cd;
case 0x6d0:c.instructions+=5;goto B200006d0;
case 0x6d3:c.instructions+=4;goto B200006d3;
case 0x6d5:c.instructions+=3;goto B200006d5;
case 0x6d8:c.instructions+=2;goto B200006d8;
case 0x6da:c.instructions+=1;goto B200006da;
case 0x6dc:goto L200006dc;
case 0x6de:goto L200006de;
case 0x6e1:c.instructions+=3;goto B200006e1;
case 0x6e4:c.instructions+=2;goto B200006e4;
case 0x6e5:c.instructions+=1;goto B200006e5;
case 0x6ea:goto L200006ea;
case 0x6ed:c.instructions+=3;goto B200006ed;
case 0x6f0:c.instructions+=2;goto B200006f0;
case 0x6f1:c.instructions+=1;goto B200006f1;
case 0x6f6:goto L200006f6;
case 0x6f9:c.instructions+=3;goto B200006f9;
case 0x6fc:c.instructions+=2;goto B200006fc;
case 0x6fd:c.instructions+=1;goto B200006fd;
case 0x702:goto L20000702;
case 0x705:c.instructions+=11;goto B20000705;
case 0x708:c.instructions+=10;goto B20000708;
case 0x70a:c.instructions+=9;goto B2000070a;
case 0x70d:c.instructions+=8;goto B2000070d;
case 0x713:c.instructions+=7;goto B20000713;
case 0x716:c.instructions+=6;goto B20000716;
case 0x718:c.instructions+=5;goto B20000718;
case 0x71c:c.instructions+=4;goto B2000071c;
case 0x722:c.instructions+=3;goto B20000722;
case 0x725:c.instructions+=2;goto B20000725;
case 0x726:c.instructions+=1;goto B20000726;
case 0x72b:goto L2000072b;
case 0x72e:c.instructions+=5;goto B2000072e;
case 0x731:c.instructions+=4;goto B20000731;
case 0x733:c.instructions+=3;goto B20000733;
case 0x736:c.instructions+=2;goto B20000736;
case 0x738:c.instructions+=1;goto B20000738;
case 0x73a:goto L2000073a;
case 0x73c:goto L2000073c;
case 0x73f:c.instructions+=3;goto B2000073f;
case 0x742:c.instructions+=2;goto B20000742;
case 0x743:c.instructions+=1;goto B20000743;
case 0x748:goto L20000748;
case 0x74b:c.instructions+=3;goto B2000074b;
case 0x74e:c.instructions+=2;goto B2000074e;
case 0x74f:c.instructions+=1;goto B2000074f;
case 0x754:goto L20000754;
case 0x757:c.instructions+=3;goto B20000757;
case 0x75a:c.instructions+=2;goto B2000075a;
case 0x75b:c.instructions+=1;goto B2000075b;
case 0x760:goto L20000760;
case 0x763:c.instructions+=15;goto B20000763;
case 0x766:c.instructions+=14;goto B20000766;
case 0x768:c.instructions+=13;goto B20000768;
case 0x76b:c.instructions+=12;goto B2000076b;
case 0x771:c.instructions+=11;goto B20000771;
case 0x774:c.instructions+=10;goto B20000774;
case 0x776:c.instructions+=9;goto B20000776;
case 0x77a:c.instructions+=8;goto B2000077a;
case 0x780:c.instructions+=7;goto B20000780;
case 0x783:c.instructions+=6;goto B20000783;
case 0x785:c.instructions+=5;goto B20000785;
case 0x788:c.instructions+=4;goto B20000788;
case 0x78b:c.instructions+=3;goto B2000078b;
case 0x78e:c.instructions+=2;goto B2000078e;
case 0x78f:c.instructions+=1;goto B2000078f;
case 0x794:goto L20000794;
case 0x797:c.instructions+=5;goto B20000797;
case 0x79a:c.instructions+=4;goto B2000079a;
case 0x79c:c.instructions+=3;goto B2000079c;
case 0x79f:c.instructions+=2;goto B2000079f;
case 0x7a1:c.instructions+=1;goto B200007a1;
case 0x7a3:goto L200007a3;
case 0x7a5:goto L200007a5;
case 0x7a8:c.instructions+=3;goto B200007a8;
case 0x7ab:c.instructions+=2;goto B200007ab;
case 0x7ac:c.instructions+=1;goto B200007ac;
case 0x7b1:goto L200007b1;
case 0x7b4:c.instructions+=3;goto B200007b4;
case 0x7b7:c.instructions+=2;goto B200007b7;
case 0x7b8:c.instructions+=1;goto B200007b8;
case 0x7bd:goto L200007bd;
case 0x7c0:c.instructions+=3;goto B200007c0;
case 0x7c3:c.instructions+=2;goto B200007c3;
case 0x7c4:c.instructions+=1;goto B200007c4;
case 0x7c9:goto L200007c9;
case 0x7cc:c.instructions+=11;goto B200007cc;
case 0x7cf:c.instructions+=10;goto B200007cf;
case 0x7d1:c.instructions+=9;goto B200007d1;
case 0x7d4:c.instructions+=8;goto B200007d4;
case 0x7da:c.instructions+=7;goto B200007da;
case 0x7dd:c.instructions+=6;goto B200007dd;
case 0x7df:c.instructions+=5;goto B200007df;
case 0x7e3:c.instructions+=4;goto B200007e3;
case 0x7e6:c.instructions+=3;goto B200007e6;
case 0x7e9:c.instructions+=2;goto B200007e9;
case 0x7ea:c.instructions+=1;goto B200007ea;
case 0x7ef:goto L200007ef;
case 0x7f2:c.instructions+=9;goto B200007f2;
case 0x7f5:c.instructions+=8;goto B200007f5;
case 0x7f7:c.instructions+=7;goto B200007f7;
case 0x7fa:c.instructions+=6;goto B200007fa;
case 0x7fd:c.instructions+=5;goto B200007fd;
case 0x800:c.instructions+=4;goto B20000800;
case 0x802:c.instructions+=3;goto B20000802;
case 0x805:c.instructions+=2;goto B20000805;
case 0x807:c.instructions+=1;goto B20000807;
case 0x809:goto L20000809;
case 0x80b:goto L2000080b;
case 0x811:c.instructions+=3;goto B20000811;
case 0x814:c.instructions+=2;goto B20000814;
case 0x815:c.instructions+=1;goto B20000815;
case 0x81a:goto L2000081a;
case 0x81d:c.instructions+=7;goto B2000081d;
case 0x820:c.instructions+=6;goto B20000820;
case 0x822:c.instructions+=5;goto B20000822;
case 0x825:c.instructions+=4;goto B20000825;
case 0x828:c.instructions+=3;goto B20000828;
case 0x82b:c.instructions+=2;goto B2000082b;
case 0x82c:c.instructions+=1;goto B2000082c;
case 0x831:goto L20000831;
case 0x834:c.instructions+=9;goto B20000834;
case 0x837:c.instructions+=8;goto B20000837;
case 0x839:c.instructions+=7;goto B20000839;
case 0x83c:c.instructions+=6;goto B2000083c;
case 0x83f:c.instructions+=5;goto B2000083f;
case 0x842:c.instructions+=4;goto B20000842;
case 0x844:c.instructions+=3;goto B20000844;
case 0x847:c.instructions+=2;goto B20000847;
case 0x849:c.instructions+=1;goto B20000849;
case 0x84b:goto L2000084b;
case 0x84d:goto L2000084d;
case 0x850:c.instructions+=3;goto B20000850;
case 0x853:c.instructions+=2;goto B20000853;
case 0x854:c.instructions+=1;goto B20000854;
case 0x859:goto L20000859;
case 0x85c:c.instructions+=3;goto B2000085c;
case 0x85f:c.instructions+=2;goto B2000085f;
case 0x860:c.instructions+=1;goto B20000860;
case 0x865:goto L20000865;
case 0x868:c.instructions+=3;goto B20000868;
case 0x86b:c.instructions+=2;goto B2000086b;
case 0x86c:c.instructions+=1;goto B2000086c;
case 0x871:goto L20000871;
case 0x874:c.instructions+=3;goto B20000874;
case 0x877:c.instructions+=2;goto B20000877;
case 0x878:c.instructions+=1;goto B20000878;
case 0x87d:goto L2000087d;
case 0x880:c.instructions+=3;goto B20000880;
case 0x883:c.instructions+=2;goto B20000883;
case 0x884:c.instructions+=1;goto B20000884;
case 0x889:goto L20000889;
case 0x88c:c.instructions+=4;goto B2000088c;
case 0x88f:c.instructions+=3;goto B2000088f;
case 0x892:c.instructions+=2;goto B20000892;
case 0x893:c.instructions+=1;goto B20000893;
case 0x898:goto L20000898;
case 0x89b:c.instructions+=7;goto B2000089b;
case 0x89e:c.instructions+=6;goto B2000089e;
case 0x8a0:c.instructions+=5;goto B200008a0;
case 0x8a3:c.instructions+=4;goto B200008a3;
case 0x8a6:c.instructions+=3;goto B200008a6;
case 0x8a9:c.instructions+=2;goto B200008a9;
case 0x8aa:c.instructions+=1;goto B200008aa;
case 0x8af:goto L200008af;
case 0x8b2:c.instructions+=3;goto B200008b2;
case 0x8b5:c.instructions+=2;goto B200008b5;
case 0x8b6:c.instructions+=1;goto B200008b6;
case 0x8bb:goto L200008bb;
case 0x8be:c.instructions+=4;goto B200008be;
case 0x8c1:c.instructions+=3;goto B200008c1;
case 0x8c4:c.instructions+=2;goto B200008c4;
case 0x8c5:c.instructions+=1;goto B200008c5;
case 0x8ca:goto L200008ca;
case 0x8cd:c.instructions+=3;goto B200008cd;
case 0x8d0:c.instructions+=2;goto B200008d0;
case 0x8d1:c.instructions+=1;goto B200008d1;
case 0x8d6:goto L200008d6;
case 0x8d9:c.instructions+=3;goto B200008d9;
case 0x8dc:c.instructions+=2;goto B200008dc;
case 0x8dd:c.instructions+=1;goto B200008dd;
case 0x8e2:goto L200008e2;
case 0x8e5:c.instructions+=2;goto B200008e5;
case 0x8e6:c.instructions+=1;goto B200008e6;
case 0x8eb:goto L200008eb;
case 0x8ee:c.instructions+=7;goto B200008ee;
case 0x8f1:c.instructions+=6;goto B200008f1;
case 0x8f3:c.instructions+=5;goto B200008f3;
case 0x8f6:c.instructions+=4;goto B200008f6;
case 0x8f9:c.instructions+=3;goto B200008f9;
case 0x8fc:c.instructions+=2;goto B200008fc;
case 0x8fd:c.instructions+=1;goto B200008fd;
case 0x902:goto L20000902;
case 0x905:c.instructions+=9;goto B20000905;
case 0x908:c.instructions+=8;goto B20000908;
case 0x90a:c.instructions+=7;goto B2000090a;
case 0x90d:c.instructions+=6;goto B2000090d;
case 0x910:c.instructions+=5;goto B20000910;
case 0x913:c.instructions+=4;goto B20000913;
case 0x915:c.instructions+=3;goto B20000915;
case 0x918:c.instructions+=2;goto B20000918;
case 0x91a:c.instructions+=1;goto B2000091a;
case 0x91c:goto L2000091c;
case 0x91e:goto L2000091e;
case 0x924:c.instructions+=3;goto B20000924;
case 0x927:c.instructions+=2;goto B20000927;
case 0x928:c.instructions+=1;goto B20000928;
case 0x92d:goto L2000092d;
case 0x930:c.instructions+=9;goto B20000930;
case 0x933:c.instructions+=8;goto B20000933;
case 0x936:c.instructions+=7;goto B20000936;
case 0x939:c.instructions+=6;goto B20000939;
case 0x93b:c.instructions+=5;goto B2000093b;
case 0x93e:c.instructions+=4;goto B2000093e;
case 0x941:c.instructions+=3;goto B20000941;
case 0x944:c.instructions+=2;goto B20000944;
case 0x945:c.instructions+=1;goto B20000945;
case 0x94a:goto L2000094a;
case 0x94d:c.instructions+=7;goto B2000094d;
case 0x950:c.instructions+=6;goto B20000950;
case 0x952:c.instructions+=5;goto B20000952;
case 0x956:c.instructions+=4;goto B20000956;
case 0x959:c.instructions+=3;goto B20000959;
case 0x95c:c.instructions+=2;goto B2000095c;
case 0x95d:c.instructions+=1;goto B2000095d;
case 0x962:goto L20000962;
case 0x965:c.instructions+=5;goto B20000965;
case 0x968:c.instructions+=4;goto B20000968;
case 0x96a:c.instructions+=3;goto B2000096a;
case 0x96d:c.instructions+=2;goto B2000096d;
case 0x96f:c.instructions+=1;goto B2000096f;
case 0x971:goto L20000971;
case 0x973:goto L20000973;
case 0x976:c.instructions+=3;goto B20000976;
case 0x979:c.instructions+=2;goto B20000979;
case 0x97a:c.instructions+=1;goto B2000097a;
case 0x97f:goto L2000097f;
case 0x982:c.instructions+=3;goto B20000982;
case 0x985:c.instructions+=2;goto B20000985;
case 0x986:c.instructions+=1;goto B20000986;
case 0x98b:goto L2000098b;
case 0x98e:c.instructions+=3;goto B2000098e;
case 0x991:c.instructions+=2;goto B20000991;
case 0x992:c.instructions+=1;goto B20000992;
case 0x997:goto L20000997;
case 0x99a:c.instructions+=2;goto B2000099a;
case 0x99b:c.instructions+=1;goto B2000099b;
case 0x9a0:goto L200009a0;
case 0x9a3:c.instructions+=8;goto B200009a3;
case 0x9a6:c.instructions+=7;goto B200009a6;
case 0x9a9:c.instructions+=6;goto B200009a9;
case 0x9ab:c.instructions+=5;goto B200009ab;
case 0x9ae:c.instructions+=4;goto B200009ae;
case 0x9b1:c.instructions+=3;goto B200009b1;
case 0x9b4:c.instructions+=2;goto B200009b4;
case 0x9b5:c.instructions+=1;goto B200009b5;
case 0x9ba:goto L200009ba;
case 0x9bd:c.instructions+=7;goto B200009bd;
case 0x9c0:c.instructions+=6;goto B200009c0;
case 0x9c2:c.instructions+=5;goto B200009c2;
case 0x9c6:c.instructions+=4;goto B200009c6;
case 0x9c9:c.instructions+=3;goto B200009c9;
case 0x9cc:c.instructions+=2;goto B200009cc;
case 0x9cd:c.instructions+=1;goto B200009cd;
case 0x9d2:goto L200009d2;
case 0x9d5:c.instructions+=5;goto B200009d5;
case 0x9d8:c.instructions+=4;goto B200009d8;
case 0x9da:c.instructions+=3;goto B200009da;
case 0x9dd:c.instructions+=2;goto B200009dd;
case 0x9df:c.instructions+=1;goto B200009df;
case 0x9e1:goto L200009e1;
case 0x9e3:goto L200009e3;
case 0x9e6:c.instructions+=3;goto B200009e6;
case 0x9e9:c.instructions+=2;goto B200009e9;
case 0x9ea:c.instructions+=1;goto B200009ea;
case 0x9ef:goto L200009ef;
case 0x9f2:c.instructions+=7;goto B200009f2;
case 0x9f5:c.instructions+=6;goto B200009f5;
case 0x9f7:c.instructions+=5;goto B200009f7;
case 0x9fa:c.instructions+=4;goto B200009fa;
case 0x9fd:c.instructions+=3;goto B200009fd;
case 0xa00:c.instructions+=2;goto B20000a00;
case 0xa01:c.instructions+=1;goto B20000a01;
case 0xa06:goto L20000a06;
case 0xa09:c.instructions+=9;goto B20000a09;
case 0xa0c:c.instructions+=8;goto B20000a0c;
case 0xa0e:c.instructions+=7;goto B20000a0e;
case 0xa11:c.instructions+=6;goto B20000a11;
case 0xa14:c.instructions+=5;goto B20000a14;
case 0xa17:c.instructions+=4;goto B20000a17;
case 0xa19:c.instructions+=3;goto B20000a19;
case 0xa1c:c.instructions+=2;goto B20000a1c;
case 0xa1e:c.instructions+=1;goto B20000a1e;
case 0xa20:goto L20000a20;
case 0xa22:goto L20000a22;
case 0xa25:c.instructions+=3;goto B20000a25;
case 0xa28:c.instructions+=2;goto B20000a28;
case 0xa29:c.instructions+=1;goto B20000a29;
case 0xa2e:goto L20000a2e;
case 0xa31:c.instructions+=3;goto B20000a31;
case 0xa34:c.instructions+=2;goto B20000a34;
case 0xa35:c.instructions+=1;goto B20000a35;
case 0xa3a:goto L20000a3a;
case 0xa3d:c.instructions+=3;goto B20000a3d;
case 0xa40:c.instructions+=2;goto B20000a40;
case 0xa41:c.instructions+=1;goto B20000a41;
case 0xa46:goto L20000a46;
case 0xa49:c.instructions+=3;goto B20000a49;
case 0xa4c:c.instructions+=2;goto B20000a4c;
case 0xa4d:c.instructions+=1;goto B20000a4d;
case 0xa52:goto L20000a52;
case 0xa55:c.instructions+=3;goto B20000a55;
case 0xa58:c.instructions+=2;goto B20000a58;
case 0xa59:c.instructions+=1;goto B20000a59;
case 0xa5e:goto L20000a5e;
case 0xa61:c.instructions+=4;goto B20000a61;
case 0xa64:c.instructions+=3;goto B20000a64;
case 0xa67:c.instructions+=2;goto B20000a67;
case 0xa68:c.instructions+=1;goto B20000a68;
case 0xa6d:goto L20000a6d;
case 0xa70:c.instructions+=7;goto B20000a70;
case 0xa73:c.instructions+=6;goto B20000a73;
case 0xa75:c.instructions+=5;goto B20000a75;
case 0xa78:c.instructions+=4;goto B20000a78;
case 0xa7b:c.instructions+=3;goto B20000a7b;
case 0xa7e:c.instructions+=2;goto B20000a7e;
case 0xa7f:c.instructions+=1;goto B20000a7f;
case 0xa84:goto L20000a84;
case 0xa87:c.instructions+=3;goto B20000a87;
case 0xa8a:c.instructions+=2;goto B20000a8a;
case 0xa8b:c.instructions+=1;goto B20000a8b;
case 0xa90:goto L20000a90;
case 0xa93:c.instructions+=4;goto B20000a93;
case 0xa96:c.instructions+=3;goto B20000a96;
case 0xa99:c.instructions+=2;goto B20000a99;
case 0xa9a:c.instructions+=1;goto B20000a9a;
case 0xa9f:goto L20000a9f;
case 0xaa2:c.instructions+=3;goto B20000aa2;
case 0xaa5:c.instructions+=2;goto B20000aa5;
case 0xaa6:c.instructions+=1;goto B20000aa6;
case 0xaab:goto L20000aab;
case 0xaae:c.instructions+=3;goto B20000aae;
case 0xab1:c.instructions+=2;goto B20000ab1;
case 0xab2:c.instructions+=1;goto B20000ab2;
case 0xab7:goto L20000ab7;
case 0xaba:c.instructions+=2;goto B20000aba;
case 0xabb:c.instructions+=1;goto B20000abb;
case 0xac0:goto L20000ac0;
case 0xac3:c.instructions+=8;goto B20000ac3;
case 0xac6:c.instructions+=7;goto B20000ac6;
case 0xac9:c.instructions+=6;goto B20000ac9;
case 0xacb:c.instructions+=5;goto B20000acb;
case 0xace:c.instructions+=4;goto B20000ace;
case 0xad1:c.instructions+=3;goto B20000ad1;
case 0xad4:c.instructions+=2;goto B20000ad4;
case 0xad5:c.instructions+=1;goto B20000ad5;
case 0xada:goto L20000ada;
case 0xadd:c.instructions+=7;goto B20000add;
case 0xae0:c.instructions+=6;goto B20000ae0;
case 0xae2:c.instructions+=5;goto B20000ae2;
case 0xae6:c.instructions+=4;goto B20000ae6;
case 0xae9:c.instructions+=3;goto B20000ae9;
case 0xaec:c.instructions+=2;goto B20000aec;
case 0xaed:c.instructions+=1;goto B20000aed;
case 0xaf2:goto L20000af2;
case 0xaf5:c.instructions+=5;goto B20000af5;
case 0xaf8:c.instructions+=4;goto B20000af8;
case 0xafa:c.instructions+=3;goto B20000afa;
case 0xafd:c.instructions+=2;goto B20000afd;
case 0xaff:c.instructions+=1;goto B20000aff;
case 0xb01:goto L20000b01;
case 0xb03:goto L20000b03;
case 0xb06:c.instructions+=3;goto B20000b06;
case 0xb09:c.instructions+=2;goto B20000b09;
case 0xb0a:c.instructions+=1;goto B20000b0a;
case 0xb0f:goto L20000b0f;
case 0xb12:c.instructions+=3;goto B20000b12;
case 0xb15:c.instructions+=2;goto B20000b15;
case 0xb16:c.instructions+=1;goto B20000b16;
case 0xb1b:goto L20000b1b;
case 0xb1e:c.instructions+=3;goto B20000b1e;
case 0xb21:c.instructions+=2;goto B20000b21;
case 0xb22:c.instructions+=1;goto B20000b22;
case 0xb27:goto L20000b27;
case 0xb2a:c.instructions+=3;goto B20000b2a;
case 0xb2d:c.instructions+=2;goto B20000b2d;
case 0xb2e:c.instructions+=1;goto B20000b2e;
case 0xb33:goto L20000b33;
case 0xb36:c.instructions+=3;goto B20000b36;
case 0xb39:c.instructions+=2;goto B20000b39;
case 0xb3a:c.instructions+=1;goto B20000b3a;
case 0xb3f:goto L20000b3f;
case 0xb42:c.instructions+=4;goto B20000b42;
case 0xb45:c.instructions+=3;goto B20000b45;
case 0xb48:c.instructions+=2;goto B20000b48;
case 0xb49:c.instructions+=1;goto B20000b49;
case 0xb4e:goto L20000b4e;
case 0xb51:c.instructions+=7;goto B20000b51;
case 0xb54:c.instructions+=6;goto B20000b54;
case 0xb56:c.instructions+=5;goto B20000b56;
case 0xb59:c.instructions+=4;goto B20000b59;
case 0xb5c:c.instructions+=3;goto B20000b5c;
case 0xb5f:c.instructions+=2;goto B20000b5f;
case 0xb60:c.instructions+=1;goto B20000b60;
case 0xb65:goto L20000b65;
case 0xb68:c.instructions+=4;goto B20000b68;
case 0xb6b:c.instructions+=3;goto B20000b6b;
case 0xb6e:c.instructions+=2;goto B20000b6e;
case 0xb6f:c.instructions+=1;goto B20000b6f;
case 0xb74:goto L20000b74;
case 0xb77:c.instructions+=4;goto B20000b77;
case 0xb7a:c.instructions+=3;goto B20000b7a;
case 0xb7d:c.instructions+=2;goto B20000b7d;
case 0xb7e:c.instructions+=1;goto B20000b7e;
case 0xb83:goto L20000b83;
case 0xb86:c.instructions+=3;goto B20000b86;
case 0xb89:c.instructions+=2;goto B20000b89;
case 0xb8a:c.instructions+=1;goto B20000b8a;
case 0xb8f:goto L20000b8f;
case 0xb92:c.instructions+=3;goto B20000b92;
case 0xb95:c.instructions+=2;goto B20000b95;
case 0xb96:c.instructions+=1;goto B20000b96;
case 0xb9b:goto L20000b9b;
case 0xb9e:c.instructions+=6;goto B20000b9e;
case 0xba0:c.instructions+=5;goto B20000ba0;
case 0xba3:c.instructions+=4;goto B20000ba3;
case 0xba6:c.instructions+=3;goto B20000ba6;
case 0xba9:c.instructions+=2;goto B20000ba9;
case 0xbaa:c.instructions+=1;goto B20000baa;
case 0xbaf:goto L20000baf;
case 0xbb2:c.instructions+=3;goto B20000bb2;
case 0xbb5:c.instructions+=2;goto B20000bb5;
case 0xbb6:c.instructions+=1;goto B20000bb6;
case 0xbbb:goto L20000bbb;
case 0xbbe:c.instructions+=5;goto B20000bbe;
case 0xbc1:c.instructions+=4;goto B20000bc1;
case 0xbc3:c.instructions+=3;goto B20000bc3;
case 0xbc6:c.instructions+=2;goto B20000bc6;
case 0xbc8:c.instructions+=1;goto B20000bc8;
case 0xbca:goto L20000bca;
case 0xbcc:goto L20000bcc;
case 0xbcf:c.instructions+=3;goto B20000bcf;
case 0xbd2:c.instructions+=2;goto B20000bd2;
case 0xbd3:c.instructions+=1;goto B20000bd3;
case 0xbd8:goto L20000bd8;
case 0xbdb:c.instructions+=3;goto B20000bdb;
case 0xbde:c.instructions+=2;goto B20000bde;
case 0xbdf:c.instructions+=1;goto B20000bdf;
case 0xbe4:goto L20000be4;
case 0xbe7:c.instructions+=3;goto B20000be7;
case 0xbea:c.instructions+=2;goto B20000bea;
case 0xbeb:c.instructions+=1;goto B20000beb;
case 0xbf0:goto L20000bf0;
case 0xbf3:c.instructions+=11;goto B20000bf3;
case 0xbf6:c.instructions+=10;goto B20000bf6;
case 0xbf8:c.instructions+=9;goto B20000bf8;
case 0xbfb:c.instructions+=8;goto B20000bfb;
case 0xc01:c.instructions+=7;goto B20000c01;
case 0xc04:c.instructions+=6;goto B20000c04;
case 0xc06:c.instructions+=5;goto B20000c06;
case 0xc0a:c.instructions+=4;goto B20000c0a;
case 0xc0d:c.instructions+=3;goto B20000c0d;
case 0xc10:c.instructions+=2;goto B20000c10;
case 0xc11:c.instructions+=1;goto B20000c11;
case 0xc16:goto L20000c16;
case 0xc19:c.instructions+=9;goto B20000c19;
case 0xc1c:c.instructions+=8;goto B20000c1c;
case 0xc1e:c.instructions+=7;goto B20000c1e;
case 0xc22:c.instructions+=6;goto B20000c22;
case 0xc28:c.instructions+=5;goto B20000c28;
case 0xc2b:c.instructions+=4;goto B20000c2b;
case 0xc2d:c.instructions+=3;goto B20000c2d;
case 0xc30:c.instructions+=2;goto B20000c30;
case 0xc32:c.instructions+=1;goto B20000c32;
case 0xc34:goto L20000c34;
case 0xc36:goto L20000c36;
case 0xc3c:c.instructions+=3;goto B20000c3c;
case 0xc3f:c.instructions+=2;goto B20000c3f;
case 0xc40:c.instructions+=1;goto B20000c40;
case 0xc45:goto L20000c45;
case 0xc48:c.instructions+=5;goto B20000c48;
case 0xc4b:c.instructions+=4;goto B20000c4b;
case 0xc4d:c.instructions+=3;goto B20000c4d;
case 0xc50:c.instructions+=2;goto B20000c50;
case 0xc52:c.instructions+=1;goto B20000c52;
case 0xc54:goto L20000c54;
case 0xc56:goto L20000c56;
case 0xc59:c.instructions+=3;goto B20000c59;
case 0xc5c:c.instructions+=2;goto B20000c5c;
case 0xc5d:c.instructions+=1;goto B20000c5d;
case 0xc62:goto L20000c62;
case 0xc65:c.instructions+=3;goto B20000c65;
case 0xc68:c.instructions+=2;goto B20000c68;
case 0xc69:c.instructions+=1;goto B20000c69;
case 0xc6e:goto L20000c6e;
case 0xc71:c.instructions+=3;goto B20000c71;
case 0xc74:c.instructions+=2;goto B20000c74;
case 0xc75:c.instructions+=1;goto B20000c75;
case 0xc7a:goto L20000c7a;
case 0xc7d:c.instructions+=15;goto B20000c7d;
case 0xc80:c.instructions+=14;goto B20000c80;
case 0xc82:c.instructions+=13;goto B20000c82;
case 0xc85:c.instructions+=12;goto B20000c85;
case 0xc8b:c.instructions+=11;goto B20000c8b;
case 0xc8e:c.instructions+=10;goto B20000c8e;
case 0xc90:c.instructions+=9;goto B20000c90;
case 0xc94:c.instructions+=8;goto B20000c94;
case 0xc9a:c.instructions+=7;goto B20000c9a;
case 0xc9d:c.instructions+=6;goto B20000c9d;
case 0xc9f:c.instructions+=5;goto B20000c9f;
case 0xca2:c.instructions+=4;goto B20000ca2;
case 0xca5:c.instructions+=3;goto B20000ca5;
case 0xca8:c.instructions+=2;goto B20000ca8;
case 0xca9:c.instructions+=1;goto B20000ca9;
case 0xcae:goto L20000cae;
case 0xcb1:c.instructions+=3;goto B20000cb1;
case 0xcb4:c.instructions+=2;goto B20000cb4;
case 0xcb5:c.instructions+=1;goto B20000cb5;
case 0xcba:goto L20000cba;
case 0xcbd:c.instructions+=5;goto B20000cbd;
case 0xcc0:c.instructions+=4;goto B20000cc0;
case 0xcc2:c.instructions+=3;goto B20000cc2;
case 0xcc5:c.instructions+=2;goto B20000cc5;
case 0xcc7:c.instructions+=1;goto B20000cc7;
case 0xcc9:goto L20000cc9;
case 0xccb:goto L20000ccb;
case 0xcce:c.instructions+=3;goto B20000cce;
case 0xcd1:c.instructions+=2;goto B20000cd1;
case 0xcd2:c.instructions+=1;goto B20000cd2;
case 0xcd7:goto L20000cd7;
case 0xcda:c.instructions+=3;goto B20000cda;
case 0xcdd:c.instructions+=2;goto B20000cdd;
case 0xcde:c.instructions+=1;goto B20000cde;
case 0xce3:goto L20000ce3;
case 0xce6:c.instructions+=3;goto B20000ce6;
case 0xce9:c.instructions+=2;goto B20000ce9;
case 0xcea:c.instructions+=1;goto B20000cea;
case 0xcef:goto L20000cef;
case 0xcf2:c.instructions+=11;goto B20000cf2;
case 0xcf5:c.instructions+=10;goto B20000cf5;
case 0xcf7:c.instructions+=9;goto B20000cf7;
case 0xcfa:c.instructions+=8;goto B20000cfa;
case 0xd00:c.instructions+=7;goto B20000d00;
case 0xd03:c.instructions+=6;goto B20000d03;
case 0xd05:c.instructions+=5;goto B20000d05;
case 0xd09:c.instructions+=4;goto B20000d09;
case 0xd0c:c.instructions+=3;goto B20000d0c;
case 0xd0f:c.instructions+=2;goto B20000d0f;
case 0xd10:c.instructions+=1;goto B20000d10;
case 0xd15:goto L20000d15;
case 0xd18:c.instructions+=9;goto B20000d18;
case 0xd1b:c.instructions+=8;goto B20000d1b;
case 0xd1d:c.instructions+=7;goto B20000d1d;
case 0xd21:c.instructions+=6;goto B20000d21;
case 0xd27:c.instructions+=5;goto B20000d27;
case 0xd2a:c.instructions+=4;goto B20000d2a;
case 0xd2c:c.instructions+=3;goto B20000d2c;
case 0xd2f:c.instructions+=2;goto B20000d2f;
case 0xd31:c.instructions+=1;goto B20000d31;
case 0xd33:goto L20000d33;
case 0xd35:goto L20000d35;
case 0xd3b:c.instructions+=7;goto B20000d3b;
case 0xd3e:c.instructions+=6;goto B20000d3e;
case 0xd40:c.instructions+=5;goto B20000d40;
case 0xd43:c.instructions+=4;goto B20000d43;
case 0xd46:c.instructions+=3;goto B20000d46;
case 0xd49:c.instructions+=2;goto B20000d49;
case 0xd4a:c.instructions+=1;goto B20000d4a;
case 0xd4f:goto L20000d4f;
case 0xd52:c.instructions+=5;goto B20000d52;
case 0xd55:c.instructions+=4;goto B20000d55;
case 0xd57:c.instructions+=3;goto B20000d57;
case 0xd5a:c.instructions+=2;goto B20000d5a;
case 0xd5c:c.instructions+=1;goto B20000d5c;
case 0xd5e:goto L20000d5e;
case 0xd60:goto L20000d60;
case 0xd63:c.instructions+=3;goto B20000d63;
case 0xd66:c.instructions+=2;goto B20000d66;
case 0xd67:c.instructions+=1;goto B20000d67;
case 0xd6c:goto L20000d6c;
case 0xd6f:c.instructions+=3;goto B20000d6f;
case 0xd72:c.instructions+=2;goto B20000d72;
case 0xd73:c.instructions+=1;goto B20000d73;
case 0xd78:goto L20000d78;
case 0xd7b:c.instructions+=3;goto B20000d7b;
case 0xd7e:c.instructions+=2;goto B20000d7e;
case 0xd7f:c.instructions+=1;goto B20000d7f;
case 0xd84:goto L20000d84;
case 0xd87:c.instructions+=11;goto B20000d87;
case 0xd8a:c.instructions+=10;goto B20000d8a;
case 0xd8c:c.instructions+=9;goto B20000d8c;
case 0xd8f:c.instructions+=8;goto B20000d8f;
case 0xd95:c.instructions+=7;goto B20000d95;
case 0xd98:c.instructions+=6;goto B20000d98;
case 0xd9a:c.instructions+=5;goto B20000d9a;
case 0xd9e:c.instructions+=4;goto B20000d9e;
case 0xda1:c.instructions+=3;goto B20000da1;
case 0xda4:c.instructions+=2;goto B20000da4;
case 0xda5:c.instructions+=1;goto B20000da5;
case 0xdaa:goto L20000daa;
case 0xdad:c.instructions+=9;goto B20000dad;
case 0xdb0:c.instructions+=8;goto B20000db0;
case 0xdb2:c.instructions+=7;goto B20000db2;
case 0xdb5:c.instructions+=6;goto B20000db5;
case 0xdb8:c.instructions+=5;goto B20000db8;
case 0xdbb:c.instructions+=4;goto B20000dbb;
case 0xdbd:c.instructions+=3;goto B20000dbd;
case 0xdc0:c.instructions+=2;goto B20000dc0;
case 0xdc2:c.instructions+=1;goto B20000dc2;
case 0xdc4:goto L20000dc4;
case 0xdc6:goto L20000dc6;
case 0xdcc:c.instructions+=3;goto B20000dcc;
case 0xdcf:c.instructions+=2;goto B20000dcf;
case 0xdd0:c.instructions+=1;goto B20000dd0;
case 0xdd5:goto L20000dd5;
case 0xdd8:c.instructions+=7;goto B20000dd8;
case 0xddb:c.instructions+=6;goto B20000ddb;
case 0xddd:c.instructions+=5;goto B20000ddd;
case 0xde0:c.instructions+=4;goto B20000de0;
case 0xde3:c.instructions+=3;goto B20000de3;
case 0xde6:c.instructions+=2;goto B20000de6;
case 0xde7:c.instructions+=1;goto B20000de7;
case 0xdec:goto L20000dec;
case 0xdef:c.instructions+=9;goto B20000def;
case 0xdf2:c.instructions+=8;goto B20000df2;
case 0xdf4:c.instructions+=7;goto B20000df4;
case 0xdf7:c.instructions+=6;goto B20000df7;
case 0xdfa:c.instructions+=5;goto B20000dfa;
case 0xdfd:c.instructions+=4;goto B20000dfd;
case 0xdff:c.instructions+=3;goto B20000dff;
case 0xe02:c.instructions+=2;goto B20000e02;
case 0xe04:c.instructions+=1;goto B20000e04;
case 0xe06:goto L20000e06;
case 0xe08:goto L20000e08;
case 0xe0b:c.instructions+=3;goto B20000e0b;
case 0xe0e:c.instructions+=2;goto B20000e0e;
case 0xe0f:c.instructions+=1;goto B20000e0f;
case 0xe14:goto L20000e14;
case 0xe17:c.instructions+=3;goto B20000e17;
case 0xe1a:c.instructions+=2;goto B20000e1a;
case 0xe1b:c.instructions+=1;goto B20000e1b;
case 0xe20:goto L20000e20;
case 0xe23:c.instructions+=3;goto B20000e23;
case 0xe26:c.instructions+=2;goto B20000e26;
case 0xe27:c.instructions+=1;goto B20000e27;
case 0xe2c:goto L20000e2c;
case 0xe2f:c.instructions+=3;goto B20000e2f;
case 0xe32:c.instructions+=2;goto B20000e32;
case 0xe33:c.instructions+=1;goto B20000e33;
case 0xe38:goto L20000e38;
case 0xe3b:c.instructions+=4;goto B20000e3b;
case 0xe3e:c.instructions+=3;goto B20000e3e;
case 0xe41:c.instructions+=2;goto B20000e41;
case 0xe42:c.instructions+=1;goto B20000e42;
case 0xe47:goto L20000e47;
case 0xe4a:c.instructions+=4;goto B20000e4a;
case 0xe4d:c.instructions+=3;goto B20000e4d;
case 0xe50:c.instructions+=2;goto B20000e50;
case 0xe51:c.instructions+=1;goto B20000e51;
case 0xe56:goto L20000e56;
case 0xe59:c.instructions+=7;goto B20000e59;
case 0xe5c:c.instructions+=6;goto B20000e5c;
case 0xe5e:c.instructions+=5;goto B20000e5e;
case 0xe61:c.instructions+=4;goto B20000e61;
case 0xe64:c.instructions+=3;goto B20000e64;
case 0xe67:c.instructions+=2;goto B20000e67;
case 0xe68:c.instructions+=1;goto B20000e68;
case 0xe6d:goto L20000e6d;
case 0xe70:c.instructions+=3;goto B20000e70;
case 0xe73:c.instructions+=2;goto B20000e73;
case 0xe74:c.instructions+=1;goto B20000e74;
case 0xe79:goto L20000e79;
case 0xe7c:c.instructions+=4;goto B20000e7c;
case 0xe7f:c.instructions+=3;goto B20000e7f;
case 0xe82:c.instructions+=2;goto B20000e82;
case 0xe83:c.instructions+=1;goto B20000e83;
case 0xe88:goto L20000e88;
case 0xe8b:c.instructions+=3;goto B20000e8b;
case 0xe8e:c.instructions+=2;goto B20000e8e;
case 0xe8f:c.instructions+=1;goto B20000e8f;
case 0xe94:goto L20000e94;
case 0xe97:c.instructions+=3;goto B20000e97;
case 0xe9a:c.instructions+=2;goto B20000e9a;
case 0xe9b:c.instructions+=1;goto B20000e9b;
case 0xea0:goto L20000ea0;
case 0xea3:c.instructions+=2;goto B20000ea3;
case 0xea4:c.instructions+=1;goto B20000ea4;
case 0xea9:goto L20000ea9;
case 0xeac:c.instructions+=4;goto B20000eac;
case 0xeaf:c.instructions+=3;goto B20000eaf;
case 0xeb2:c.instructions+=2;goto B20000eb2;
case 0xeb3:c.instructions+=1;goto B20000eb3;
case 0xeb8:goto L20000eb8;
case 0xebb:c.instructions+=11;goto B20000ebb;
case 0xebe:c.instructions+=10;goto B20000ebe;
case 0xec0:c.instructions+=9;goto B20000ec0;
case 0xec3:c.instructions+=8;goto B20000ec3;
case 0xec6:c.instructions+=7;goto B20000ec6;
case 0xec9:c.instructions+=6;goto B20000ec9;
case 0xecb:c.instructions+=5;goto B20000ecb;
case 0xecf:c.instructions+=4;goto B20000ecf;
case 0xed2:c.instructions+=3;goto B20000ed2;
case 0xed5:c.instructions+=2;goto B20000ed5;
case 0xed6:c.instructions+=1;goto B20000ed6;
case 0xedb:goto L20000edb;
case 0xede:c.instructions+=5;goto B20000ede;
case 0xee1:c.instructions+=4;goto B20000ee1;
case 0xee3:c.instructions+=3;goto B20000ee3;
case 0xee6:c.instructions+=2;goto B20000ee6;
case 0xee8:c.instructions+=1;goto B20000ee8;
case 0xeea:goto L20000eea;
case 0xeec:goto L20000eec;
case 0xef2:c.instructions+=3;goto B20000ef2;
case 0xef5:c.instructions+=2;goto B20000ef5;
case 0xef6:c.instructions+=1;goto B20000ef6;
case 0xefb:goto L20000efb;
case 0xefe:c.instructions+=8;goto B20000efe;
case 0xf01:c.instructions+=7;goto B20000f01;
case 0xf04:c.instructions+=6;goto B20000f04;
case 0xf06:c.instructions+=5;goto B20000f06;
case 0xf09:c.instructions+=4;goto B20000f09;
case 0xf0c:c.instructions+=3;goto B20000f0c;
case 0xf0f:c.instructions+=2;goto B20000f0f;
case 0xf10:c.instructions+=1;goto B20000f10;
case 0xf15:goto L20000f15;
case 0xf18:c.instructions+=7;goto B20000f18;
case 0xf1b:c.instructions+=6;goto B20000f1b;
case 0xf1d:c.instructions+=5;goto B20000f1d;
case 0xf21:c.instructions+=4;goto B20000f21;
case 0xf24:c.instructions+=3;goto B20000f24;
case 0xf27:c.instructions+=2;goto B20000f27;
case 0xf28:c.instructions+=1;goto B20000f28;
case 0xf2d:goto L20000f2d;
case 0xf30:c.instructions+=5;goto B20000f30;
case 0xf33:c.instructions+=4;goto B20000f33;
case 0xf35:c.instructions+=3;goto B20000f35;
case 0xf38:c.instructions+=2;goto B20000f38;
case 0xf3a:c.instructions+=1;goto B20000f3a;
case 0xf3c:goto L20000f3c;
case 0xf3e:goto L20000f3e;
case 0xf41:c.instructions+=3;goto B20000f41;
case 0xf44:c.instructions+=2;goto B20000f44;
case 0xf45:c.instructions+=1;goto B20000f45;
case 0xf4a:goto L20000f4a;
case 0xf4d:c.instructions+=3;goto B20000f4d;
case 0xf50:c.instructions+=2;goto B20000f50;
case 0xf51:c.instructions+=1;goto B20000f51;
case 0xf56:goto L20000f56;
case 0xf59:c.instructions+=3;goto B20000f59;
case 0xf5c:c.instructions+=2;goto B20000f5c;
case 0xf5d:c.instructions+=1;goto B20000f5d;
case 0xf62:goto L20000f62;
case 0xf65:c.instructions+=3;goto B20000f65;
case 0xf68:c.instructions+=2;goto B20000f68;
case 0xf69:c.instructions+=1;goto B20000f69;
case 0xf6e:goto L20000f6e;
case 0xf71:c.instructions+=3;goto B20000f71;
case 0xf74:c.instructions+=2;goto B20000f74;
case 0xf75:c.instructions+=1;goto B20000f75;
case 0xf7a:goto L20000f7a;
case 0xf7d:c.instructions+=4;goto B20000f7d;
case 0xf80:c.instructions+=3;goto B20000f80;
case 0xf83:c.instructions+=2;goto B20000f83;
case 0xf84:c.instructions+=1;goto B20000f84;
case 0xf89:goto L20000f89;
case 0xf8c:c.instructions+=7;goto B20000f8c;
case 0xf8f:c.instructions+=6;goto B20000f8f;
case 0xf91:c.instructions+=5;goto B20000f91;
case 0xf94:c.instructions+=4;goto B20000f94;
case 0xf97:c.instructions+=3;goto B20000f97;
case 0xf9a:c.instructions+=2;goto B20000f9a;
case 0xf9b:c.instructions+=1;goto B20000f9b;
case 0xfa0:goto L20000fa0;
case 0xfa3:c.instructions+=3;goto B20000fa3;
case 0xfa6:c.instructions+=2;goto B20000fa6;
case 0xfa7:c.instructions+=1;goto B20000fa7;
case 0xfac:goto L20000fac;
case 0xfaf:c.instructions+=4;goto B20000faf;
case 0xfb2:c.instructions+=3;goto B20000fb2;
case 0xfb5:c.instructions+=2;goto B20000fb5;
case 0xfb6:c.instructions+=1;goto B20000fb6;
case 0xfbb:goto L20000fbb;
case 0xfbe:c.instructions+=3;goto B20000fbe;
case 0xfc1:c.instructions+=2;goto B20000fc1;
case 0xfc2:c.instructions+=1;goto B20000fc2;
case 0xfc7:goto L20000fc7;
case 0xfca:c.instructions+=3;goto B20000fca;
case 0xfcd:c.instructions+=2;goto B20000fcd;
case 0xfce:c.instructions+=1;goto B20000fce;
case 0xfd3:goto L20000fd3;
case 0xfd6:c.instructions+=2;goto B20000fd6;
case 0xfd7:c.instructions+=1;goto B20000fd7;
case 0xfdc:goto L20000fdc;
case 0xfdf:c.instructions+=7;goto B20000fdf;
case 0xfe2:c.instructions+=6;goto B20000fe2;
case 0xfe4:c.instructions+=5;goto B20000fe4;
case 0xfe7:c.instructions+=4;goto B20000fe7;
case 0xfea:c.instructions+=3;goto B20000fea;
case 0xfed:c.instructions+=2;goto B20000fed;
case 0xfee:c.instructions+=1;goto B20000fee;
case 0xff3:goto L20000ff3;
case 0xff6:c.instructions+=9;goto B20000ff6;
case 0xff9:c.instructions+=8;goto B20000ff9;
case 0xffb:c.instructions+=7;goto B20000ffb;
case 0xffe:c.instructions+=6;goto B20000ffe;
case 0x1001:c.instructions+=5;goto B20001001;
case 0x1004:c.instructions+=4;goto B20001004;
case 0x1006:c.instructions+=3;goto B20001006;
case 0x1009:c.instructions+=2;goto B20001009;
case 0x100b:c.instructions+=1;goto B2000100b;
case 0x100d:goto L2000100d;
case 0x100f:goto L2000100f;
case 0x1012:c.instructions+=3;goto B20001012;
case 0x1015:c.instructions+=2;goto B20001015;
case 0x1016:c.instructions+=1;goto B20001016;
case 0x101b:goto L2000101b;
case 0x101e:c.instructions+=3;goto B2000101e;
case 0x1021:c.instructions+=2;goto B20001021;
case 0x1022:c.instructions+=1;goto B20001022;
case 0x1027:goto L20001027;
case 0x102a:c.instructions+=3;goto B2000102a;
case 0x102d:c.instructions+=2;goto B2000102d;
case 0x102e:c.instructions+=1;goto B2000102e;
case 0x1033:goto L20001033;
case 0x1036:c.instructions+=3;goto B20001036;
case 0x1039:c.instructions+=2;goto B20001039;
case 0x103a:c.instructions+=1;goto B2000103a;
case 0x103f:goto L2000103f;
case 0x1042:c.instructions+=3;goto B20001042;
case 0x1045:c.instructions+=2;goto B20001045;
case 0x1046:c.instructions+=1;goto B20001046;
case 0x104b:goto L2000104b;
case 0x104e:c.instructions+=5;goto B2000104e;
case 0x1051:c.instructions+=4;goto B20001051;
case 0x1054:c.instructions+=3;goto B20001054;
case 0x1057:c.instructions+=2;goto B20001057;
case 0x1058:c.instructions+=1;goto B20001058;
case 0x105d:goto L2000105d;
case 0x1060:c.instructions+=7;goto B20001060;
case 0x1063:c.instructions+=6;goto B20001063;
case 0x1065:c.instructions+=5;goto B20001065;
case 0x1068:c.instructions+=4;goto B20001068;
case 0x106b:c.instructions+=3;goto B2000106b;
case 0x106e:c.instructions+=2;goto B2000106e;
case 0x106f:c.instructions+=1;goto B2000106f;
case 0x1074:goto L20001074;
case 0x1077:c.instructions+=3;goto B20001077;
case 0x107a:c.instructions+=2;goto B2000107a;
case 0x107b:c.instructions+=1;goto B2000107b;
case 0x1080:goto L20001080;
case 0x1083:c.instructions+=4;goto B20001083;
case 0x1086:c.instructions+=3;goto B20001086;
case 0x1089:c.instructions+=2;goto B20001089;
case 0x108a:c.instructions+=1;goto B2000108a;
case 0x108f:goto L2000108f;
case 0x1092:c.instructions+=3;goto B20001092;
case 0x1095:c.instructions+=2;goto B20001095;
case 0x1096:c.instructions+=1;goto B20001096;
case 0x109b:goto L2000109b;
case 0x109e:c.instructions+=3;goto B2000109e;
case 0x10a1:c.instructions+=2;goto B200010a1;
case 0x10a2:c.instructions+=1;goto B200010a2;
case 0x10a7:goto L200010a7;
case 0x10aa:c.instructions+=2;goto B200010aa;
case 0x10ab:c.instructions+=1;goto B200010ab;
case 0x10b0:goto L200010b0;
case 0x10b3:c.instructions+=7;goto B200010b3;
case 0x10b6:c.instructions+=6;goto B200010b6;
case 0x10b8:c.instructions+=5;goto B200010b8;
case 0x10bb:c.instructions+=4;goto B200010bb;
case 0x10be:c.instructions+=3;goto B200010be;
case 0x10c1:c.instructions+=2;goto B200010c1;
case 0x10c2:c.instructions+=1;goto B200010c2;
case 0x10c7:goto L200010c7;
case 0x10ca:c.instructions+=9;goto B200010ca;
case 0x10cd:c.instructions+=8;goto B200010cd;
case 0x10cf:c.instructions+=7;goto B200010cf;
case 0x10d2:c.instructions+=6;goto B200010d2;
case 0x10d5:c.instructions+=5;goto B200010d5;
case 0x10d8:c.instructions+=4;goto B200010d8;
case 0x10da:c.instructions+=3;goto B200010da;
case 0x10dd:c.instructions+=2;goto B200010dd;
case 0x10df:c.instructions+=1;goto B200010df;
case 0x10e1:goto L200010e1;
case 0x10e3:goto L200010e3;
case 0x10e6:c.instructions+=3;goto B200010e6;
case 0x10e9:c.instructions+=2;goto B200010e9;
case 0x10ea:c.instructions+=1;goto B200010ea;
case 0x10ef:goto L200010ef;
case 0x10f2:c.instructions+=3;goto B200010f2;
case 0x10f5:c.instructions+=2;goto B200010f5;
case 0x10f6:c.instructions+=1;goto B200010f6;
case 0x10fb:goto L200010fb;
case 0x10fe:c.instructions+=3;goto B200010fe;
case 0x1101:c.instructions+=2;goto B20001101;
case 0x1102:c.instructions+=1;goto B20001102;
case 0x1107:goto L20001107;
case 0x110a:c.instructions+=3;goto B2000110a;
case 0x110d:c.instructions+=2;goto B2000110d;
case 0x110e:c.instructions+=1;goto B2000110e;
case 0x1113:goto L20001113;
case 0x1116:c.instructions+=3;goto B20001116;
case 0x1119:c.instructions+=2;goto B20001119;
case 0x111a:c.instructions+=1;goto B2000111a;
case 0x111f:goto L2000111f;
case 0x1122:c.instructions+=4;goto B20001122;
case 0x1125:c.instructions+=3;goto B20001125;
case 0x1128:c.instructions+=2;goto B20001128;
case 0x1129:c.instructions+=1;goto B20001129;
case 0x112e:goto L2000112e;
case 0x1131:c.instructions+=7;goto B20001131;
case 0x1134:c.instructions+=6;goto B20001134;
case 0x1136:c.instructions+=5;goto B20001136;
case 0x1139:c.instructions+=4;goto B20001139;
case 0x113c:c.instructions+=3;goto B2000113c;
case 0x113f:c.instructions+=2;goto B2000113f;
case 0x1140:c.instructions+=1;goto B20001140;
case 0x1145:goto L20001145;
case 0x1148:c.instructions+=3;goto B20001148;
case 0x114b:c.instructions+=2;goto B2000114b;
case 0x114c:c.instructions+=1;goto B2000114c;
case 0x1151:goto L20001151;
case 0x1154:c.instructions+=4;goto B20001154;
case 0x1157:c.instructions+=3;goto B20001157;
case 0x115a:c.instructions+=2;goto B2000115a;
case 0x115b:c.instructions+=1;goto B2000115b;
case 0x1160:goto L20001160;
case 0x1163:c.instructions+=3;goto B20001163;
case 0x1166:c.instructions+=2;goto B20001166;
case 0x1167:c.instructions+=1;goto B20001167;
case 0x116c:goto L2000116c;
case 0x116f:c.instructions+=3;goto B2000116f;
case 0x1172:c.instructions+=2;goto B20001172;
case 0x1173:c.instructions+=1;goto B20001173;
case 0x1178:goto L20001178;
case 0x117b:c.instructions+=2;goto B2000117b;
case 0x117c:c.instructions+=1;goto B2000117c;
case 0x1181:goto L20001181;
case 0x1184:c.instructions+=3;goto B20001184;
case 0x1187:c.instructions+=2;goto B20001187;
case 0x1188:c.instructions+=1;goto B20001188;
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
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x47cull))));
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
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
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
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x110ull))));
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
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3a4ull))));
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
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x108ull))));
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
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x104ull))));
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
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf8ull))));
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
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf4ull))));
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
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe8ull))));
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
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe4ull))));
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
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3c0ull))));
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
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3c8ull))));
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
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd78ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000095:{NFSU2_TR((code+0x95u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1168ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B2000009b:{NFSU2_TR((code+0x9bu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1030ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200000a1:{NFSU2_TR((code+0xa1u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xef8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200000a7:{NFSU2_TR((code+0xa7u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200000ad:{NFSU2_TR((code+0xadu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa78ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200000b3:{NFSU2_TR((code+0xb3u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x934ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200000b9:{NFSU2_TR((code+0xb9u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x728ull))));
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
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd4ull))));
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
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x300ull))));
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
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x620ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200000da:{NFSU2_TR((code+0xdau));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7f0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200000e0:{NFSU2_TR((code+0xe0u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc74ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200000e6:{NFSU2_TR((code+0xe6u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xda8ull))));
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
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x82cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200000f5:{NFSU2_TR((code+0xf5u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x964ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200000fb:{NFSU2_TR((code+0xfbu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000101:{NFSU2_TR((code+0x101u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1064ull))));
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
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x758ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000110:{NFSU2_TR((code+0x110u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x788ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000116:{NFSU2_TR((code+0x116u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xde8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B2000011c:{NFSU2_TR((code+0x11cu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf2cull))));
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
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x370ull))));
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
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x348ull))));
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
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28cull))));
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
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3e4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B2000014f:{NFSU2_TR((code+0x14fu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3ccull))));
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
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3e4ull))));
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
B2000017c:L2000017c:{c.instructions+=4;NFSU2_TR((code+0x17cu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3c8ull))));
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
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000186:{NFSU2_TR((code+0x186u));
u8 U[4];
w4(U+0,u32(code+0x18bu));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720fd1u);
}
B2000018b:L2000018b:{c.instructions+=9;NFSU2_TR((code+0x18bu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xab4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000191:{NFSU2_TR((code+0x191u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xaccull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000197:{NFSU2_TR((code+0x197u));
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
B2000019a:{NFSU2_TR((code+0x19au));
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B2000019c:{NFSU2_TR((code+0x19cu));
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
B2000019f:{NFSU2_TR((code+0x19fu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200001a2:{NFSU2_TR((code+0x1a2u));
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
B200001a5:{NFSU2_TR((code+0x1a5u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B200001a6:{NFSU2_TR((code+0x1a6u));
u8 U[4];
w4(U+0,u32(code+0x1abu));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720e48u);
}
B200001ab:L200001ab:{c.instructions+=4;NFSU2_TR((code+0x1abu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2d8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200001b1:{NFSU2_TR((code+0x1b1u));
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
B200001b4:{NFSU2_TR((code+0x1b4u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B200001b5:{NFSU2_TR((code+0x1b5u));
u8 U[4];
w4(U+0,u32(code+0x1bau));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720e48u);
}
B200001ba:L200001ba:{c.instructions+=4;NFSU2_TR((code+0x1bau));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200001bd:{NFSU2_TR((code+0x1bdu));
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
B200001c0:{NFSU2_TR((code+0x1c0u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B200001c1:{NFSU2_TR((code+0x1c1u));
u8 U[4];
w4(U+0,u32(code+0x1c6u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720e48u);
}
B200001c6:L200001c6:{c.instructions+=4;NFSU2_TR((code+0x1c6u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200001c9:{NFSU2_TR((code+0x1c9u));
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
B200001cc:{NFSU2_TR((code+0x1ccu));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B200001cd:{NFSU2_TR((code+0x1cdu));
u8 U[4];
w4(U+0,u32(code+0x1d2u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720ff8u);
}
B200001d2:L200001d2:{c.instructions+=7;NFSU2_TR((code+0x1d2u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x108ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200001d8:{NFSU2_TR((code+0x1d8u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x124ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200001de:{NFSU2_TR((code+0x1deu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x140ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200001e4:{NFSU2_TR((code+0x1e4u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x15cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200001ea:{NFSU2_TR((code+0x1eau));
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
B200001ed:{NFSU2_TR((code+0x1edu));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B200001ee:{NFSU2_TR((code+0x1eeu));
u8 U[4];
w4(U+0,u32(code+0x1f3u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720ff8u);
}
B200001f3:L200001f3:{c.instructions+=32;NFSU2_TR((code+0x1f3u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200001f6:{NFSU2_TR((code+0x1f6u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x364ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200001fc:{NFSU2_TR((code+0x1fcu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x388ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000202:{NFSU2_TR((code+0x202u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x370ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000208:{NFSU2_TR((code+0x208u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6e0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B2000020e:{NFSU2_TR((code+0x20eu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3f4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000214:{NFSU2_TR((code+0x214u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3e8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B2000021a:{NFSU2_TR((code+0x21au));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x678ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000220:{NFSU2_TR((code+0x220u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4a4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000226:{NFSU2_TR((code+0x226u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x498ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B2000022c:{NFSU2_TR((code+0x22cu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x854ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000232:{NFSU2_TR((code+0x232u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x448ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000238:{NFSU2_TR((code+0x238u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x43cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B2000023e:{NFSU2_TR((code+0x23eu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x988ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000244:{NFSU2_TR((code+0x244u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9acull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B2000024a:{NFSU2_TR((code+0x24au));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x994ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000250:{NFSU2_TR((code+0x250u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xca4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000256:{NFSU2_TR((code+0x256u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B2000025c:{NFSU2_TR((code+0x25cu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000262:{NFSU2_TR((code+0x262u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcd4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000268:{NFSU2_TR((code+0x268u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xaf4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B2000026e:{NFSU2_TR((code+0x26eu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xae8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000274:{NFSU2_TR((code+0x274u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa5cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B2000027a:{NFSU2_TR((code+0x27au));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa80ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000280:{NFSU2_TR((code+0x280u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa68ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000286:{NFSU2_TR((code+0x286u));
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
B20000289:{NFSU2_TR((code+0x289u));
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B2000028b:{NFSU2_TR((code+0x28bu));
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
B2000028f:{NFSU2_TR((code+0x28fu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000292:{NFSU2_TR((code+0x292u));
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
B20000295:{NFSU2_TR((code+0x295u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000296:{NFSU2_TR((code+0x296u));
u8 U[4];
w4(U+0,u32(code+0x29bu));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x7207bfu);
}
B2000029b:L2000029b:{c.instructions+=4;NFSU2_TR((code+0x29bu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B2000029e:{NFSU2_TR((code+0x29eu));
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
B200002a1:{NFSU2_TR((code+0x2a1u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B200002a2:{NFSU2_TR((code+0x2a2u));
u8 U[4];
w4(U+0,u32(code+0x2a7u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720767u);
}
B200002a7:L200002a7:{c.instructions+=4;NFSU2_TR((code+0x2a7u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200002aa:{NFSU2_TR((code+0x2aau));
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
B200002ad:{NFSU2_TR((code+0x2adu));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B200002ae:{NFSU2_TR((code+0x2aeu));
u8 U[4];
w4(U+0,u32(code+0x2b3u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720fd1u);
}
B200002b3:L200002b3:{c.instructions+=16;NFSU2_TR((code+0x2b3u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200002b6:{NFSU2_TR((code+0x2b6u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200002b9:{NFSU2_TR((code+0x2b9u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200002bc:{NFSU2_TR((code+0x2bcu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200002bf:{NFSU2_TR((code+0x2bfu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200002c2:{NFSU2_TR((code+0x2c2u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200002c5:{NFSU2_TR((code+0x2c5u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200002c8:{NFSU2_TR((code+0x2c8u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200002cb:{NFSU2_TR((code+0x2cbu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200002ce:{NFSU2_TR((code+0x2ceu));
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
B200002d1:{NFSU2_TR((code+0x2d1u));
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B200002d3:{NFSU2_TR((code+0x2d3u));
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
B200002d7:{NFSU2_TR((code+0x2d7u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1000ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200002dd:{NFSU2_TR((code+0x2ddu));
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
B200002e0:{NFSU2_TR((code+0x2e0u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B200002e1:{NFSU2_TR((code+0x2e1u));
u8 U[4];
w4(U+0,u32(code+0x2e6u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x7207bfu);
}
B200002e6:L200002e6:{c.instructions+=4;NFSU2_TR((code+0x2e6u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xec0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200002ec:{NFSU2_TR((code+0x2ecu));
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
B200002ef:{NFSU2_TR((code+0x2efu));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B200002f0:{NFSU2_TR((code+0x2f0u));
u8 U[4];
w4(U+0,u32(code+0x2f5u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x7207bfu);
}
B200002f5:L200002f5:{c.instructions+=16;NFSU2_TR((code+0x2f5u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd80ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200002fb:{NFSU2_TR((code+0x2fbu));
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
B200002fe:{NFSU2_TR((code+0x2feu));
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B20000300:{NFSU2_TR((code+0x300u));
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
B20000304:{NFSU2_TR((code+0x304u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7b4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B2000030a:{NFSU2_TR((code+0x30au));
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
B2000030d:{NFSU2_TR((code+0x30du));
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B2000030f:{NFSU2_TR((code+0x30fu));
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
B20000313:{NFSU2_TR((code+0x313u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbf0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000319:{NFSU2_TR((code+0x319u));
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
B2000031c:{NFSU2_TR((code+0x31cu));
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B2000031e:{NFSU2_TR((code+0x31eu));
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
B20000322:{NFSU2_TR((code+0x322u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x598ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000328:{NFSU2_TR((code+0x328u));
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
B2000032b:{NFSU2_TR((code+0x32bu));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B2000032c:{NFSU2_TR((code+0x32cu));
u8 U[4];
w4(U+0,u32(code+0x331u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x7207bfu);
}
B20000331:L20000331:{c.instructions+=4;NFSU2_TR((code+0x331u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x274ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000337:{NFSU2_TR((code+0x337u));
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
B2000033a:{NFSU2_TR((code+0x33au));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B2000033b:{NFSU2_TR((code+0x33bu));
u8 U[4];
w4(U+0,u32(code+0x340u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x7207bfu);
}
B20000340:L20000340:{c.instructions+=3;NFSU2_TR((code+0x340u));
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
B20000343:{NFSU2_TR((code+0x343u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000344:{NFSU2_TR((code+0x344u));
u8 U[4];
w4(U+0,u32(code+0x349u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x7207bfu);
}
B20000349:L20000349:{c.instructions+=4;NFSU2_TR((code+0x349u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8d0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B2000034f:{NFSU2_TR((code+0x34fu));
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
B20000352:{NFSU2_TR((code+0x352u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000353:{NFSU2_TR((code+0x353u));
u8 U[4];
w4(U+0,u32(code+0x358u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x7204f3u);
}
B20000358:L20000358:{c.instructions+=4;NFSU2_TR((code+0x358u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb40ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B2000035e:{NFSU2_TR((code+0x35eu));
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
B20000361:{NFSU2_TR((code+0x361u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000362:{NFSU2_TR((code+0x362u));
u8 U[4];
w4(U+0,u32(code+0x367u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x7204f3u);
}
B20000367:L20000367:{c.instructions+=4;NFSU2_TR((code+0x367u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B2000036d:{NFSU2_TR((code+0x36du));
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
B20000370:{NFSU2_TR((code+0x370u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000371:{NFSU2_TR((code+0x371u));
u8 U[4];
w4(U+0,u32(code+0x376u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x7204f3u);
}
B20000376:L20000376:{c.instructions+=4;NFSU2_TR((code+0x376u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xdd8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B2000037c:{NFSU2_TR((code+0x37cu));
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
B2000037f:{NFSU2_TR((code+0x37fu));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000380:{NFSU2_TR((code+0x380u));
u8 U[4];
w4(U+0,u32(code+0x385u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x7204f3u);
}
B20000385:L20000385:{c.instructions+=4;NFSU2_TR((code+0x385u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc90ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B2000038b:{NFSU2_TR((code+0x38bu));
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
B2000038e:{NFSU2_TR((code+0x38eu));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B2000038f:{NFSU2_TR((code+0x38fu));
u8 U[4];
w4(U+0,u32(code+0x394u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x7204f3u);
}
B20000394:L20000394:{c.instructions+=4;NFSU2_TR((code+0x394u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4b0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B2000039a:{NFSU2_TR((code+0x39au));
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
B2000039d:{NFSU2_TR((code+0x39du));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B2000039e:{NFSU2_TR((code+0x39eu));
u8 U[4];
w4(U+0,u32(code+0x3a3u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x7204f3u);
}
B200003a3:L200003a3:{c.instructions+=4;NFSU2_TR((code+0x3a3u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6acull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200003a9:{NFSU2_TR((code+0x3a9u));
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
B200003ac:{NFSU2_TR((code+0x3acu));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B200003ad:{NFSU2_TR((code+0x3adu));
u8 U[4];
w4(U+0,u32(code+0x3b2u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x7204f3u);
}
B200003b2:L200003b2:{c.instructions+=4;NFSU2_TR((code+0x3b2u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7e0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200003b8:{NFSU2_TR((code+0x3b8u));
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
B200003bb:{NFSU2_TR((code+0x3bbu));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B200003bc:{NFSU2_TR((code+0x3bcu));
u8 U[4];
w4(U+0,u32(code+0x3c1u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x7204f3u);
}
B200003c1:L200003c1:{c.instructions+=5;NFSU2_TR((code+0x3c1u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xab8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200003c7:{NFSU2_TR((code+0x3c7u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200003ca:{NFSU2_TR((code+0x3cau));
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
B200003cd:{NFSU2_TR((code+0x3cdu));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B200003ce:{NFSU2_TR((code+0x3ceu));
u8 U[4];
w4(U+0,u32(code+0x3d3u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720ff8u);
}
B200003d3:L200003d3:{c.instructions+=4;NFSU2_TR((code+0x3d3u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x458ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200003d9:{NFSU2_TR((code+0x3d9u));
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
B200003dc:{NFSU2_TR((code+0x3dcu));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B200003dd:{NFSU2_TR((code+0x3ddu));
u8 U[4];
w4(U+0,u32(code+0x3e2u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x7204f3u);
}
B200003e2:L200003e2:{c.instructions+=5;NFSU2_TR((code+0x3e2u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe8cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200003e8:{NFSU2_TR((code+0x3e8u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200003eb:{NFSU2_TR((code+0x3ebu));
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
B200003ee:{NFSU2_TR((code+0x3eeu));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B200003ef:{NFSU2_TR((code+0x3efu));
u8 U[4];
w4(U+0,u32(code+0x3f4u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720ff8u);
}
B200003f4:L200003f4:{c.instructions+=5;NFSU2_TR((code+0x3f4u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x648ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200003fa:{NFSU2_TR((code+0x3fau));
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
B200003fd:{NFSU2_TR((code+0x3fdu));
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
B20000400:{NFSU2_TR((code+0x400u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000401:{NFSU2_TR((code+0x401u));
u8 U[4];
w4(U+0,u32(code+0x406u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x7204f3u);
}
B20000406:L20000406:{c.instructions+=5;NFSU2_TR((code+0x406u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd38ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B2000040c:{NFSU2_TR((code+0x40cu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B2000040f:{NFSU2_TR((code+0x40fu));
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
B20000412:{NFSU2_TR((code+0x412u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000413:{NFSU2_TR((code+0x413u));
u8 U[4];
w4(U+0,u32(code+0x418u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720ff8u);
}
B20000418:L20000418:{c.instructions+=4;NFSU2_TR((code+0x418u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x770ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B2000041e:{NFSU2_TR((code+0x41eu));
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
B20000421:{NFSU2_TR((code+0x421u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000422:{NFSU2_TR((code+0x422u));
u8 U[4];
w4(U+0,u32(code+0x427u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x7204f3u);
}
B20000427:L20000427:{c.instructions+=5;NFSU2_TR((code+0x427u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B2000042d:{NFSU2_TR((code+0x42du));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000430:{NFSU2_TR((code+0x430u));
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
B20000433:{NFSU2_TR((code+0x433u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000434:{NFSU2_TR((code+0x434u));
u8 U[4];
w4(U+0,u32(code+0x439u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720ff8u);
}
B20000439:L20000439:{c.instructions+=4;NFSU2_TR((code+0x439u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x578ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B2000043f:{NFSU2_TR((code+0x43fu));
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
EXIT(0x7204f3u);
}
B20000448:L20000448:{c.instructions+=4;NFSU2_TR((code+0x448u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B2000044b:{NFSU2_TR((code+0x44bu));
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
EXIT(0x720767u);
}
B20000454:L20000454:{c.instructions+=5;NFSU2_TR((code+0x454u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000457:{NFSU2_TR((code+0x457u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B2000045a:{NFSU2_TR((code+0x45au));
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
B2000045d:{NFSU2_TR((code+0x45du));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B2000045e:{NFSU2_TR((code+0x45eu));
u8 U[4];
w4(U+0,u32(code+0x463u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x7204f3u);
}
B20000463:L20000463:{c.instructions+=8;NFSU2_TR((code+0x463u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000466:{NFSU2_TR((code+0x466u));
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
B20000469:{NFSU2_TR((code+0x469u));
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B2000046b:{NFSU2_TR((code+0x46bu));
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
B2000046e:{NFSU2_TR((code+0x46eu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000471:{NFSU2_TR((code+0x471u));
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
B20000474:{NFSU2_TR((code+0x474u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000475:{NFSU2_TR((code+0x475u));
u8 U[4];
w4(U+0,u32(code+0x47au));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720684u);
}
B2000047a:L2000047a:{c.instructions+=4;NFSU2_TR((code+0x47au));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B2000047d:{NFSU2_TR((code+0x47du));
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
B20000480:{NFSU2_TR((code+0x480u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000481:{NFSU2_TR((code+0x481u));
u8 U[4];
w4(U+0,u32(code+0x486u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720f32u);
}
B20000486:L20000486:{c.instructions+=5;NFSU2_TR((code+0x486u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000489:{NFSU2_TR((code+0x489u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B2000048c:{NFSU2_TR((code+0x48cu));
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
B2000048f:{NFSU2_TR((code+0x48fu));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000490:{NFSU2_TR((code+0x490u));
u8 U[4];
w4(U+0,u32(code+0x495u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720767u);
}
B20000495:L20000495:{c.instructions+=4;NFSU2_TR((code+0x495u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x128ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B2000049b:{NFSU2_TR((code+0x49bu));
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
B2000049e:{NFSU2_TR((code+0x49eu));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B2000049f:{NFSU2_TR((code+0x49fu));
u8 U[4];
w4(U+0,u32(code+0x4a4u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x7204f3u);
}
B200004a4:L200004a4:{c.instructions+=4;NFSU2_TR((code+0x4a4u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x104ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200004aa:{NFSU2_TR((code+0x4aau));
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
B200004ad:{NFSU2_TR((code+0x4adu));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B200004ae:{NFSU2_TR((code+0x4aeu));
u8 U[4];
w4(U+0,u32(code+0x4b3u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x7204f3u);
}
B200004b3:L200004b3:{c.instructions+=4;NFSU2_TR((code+0x4b3u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200004b9:{NFSU2_TR((code+0x4b9u));
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
B200004bc:{NFSU2_TR((code+0x4bcu));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B200004bd:{NFSU2_TR((code+0x4bdu));
u8 U[4];
w4(U+0,u32(code+0x4c2u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720e48u);
}
B200004c2:L200004c2:{c.instructions+=4;NFSU2_TR((code+0x4c2u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200004c5:{NFSU2_TR((code+0x4c5u));
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
B200004c8:{NFSU2_TR((code+0x4c8u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B200004c9:{NFSU2_TR((code+0x4c9u));
u8 U[4];
w4(U+0,u32(code+0x4ceu));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720340u);
}
B200004ce:L200004ce:{c.instructions+=4;NFSU2_TR((code+0x4ceu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200004d1:{NFSU2_TR((code+0x4d1u));
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
B200004d4:{NFSU2_TR((code+0x4d4u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B200004d5:{NFSU2_TR((code+0x4d5u));
u8 U[4];
w4(U+0,u32(code+0x4dau));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x72023cu);
}
B200004da:L200004da:{c.instructions+=4;NFSU2_TR((code+0x4dau));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200004dd:{NFSU2_TR((code+0x4ddu));
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
B200004e0:{NFSU2_TR((code+0x4e0u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B200004e1:{NFSU2_TR((code+0x4e1u));
u8 U[4];
w4(U+0,u32(code+0x4e6u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720e48u);
}
B200004e6:L200004e6:{c.instructions+=4;NFSU2_TR((code+0x4e6u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200004e9:{NFSU2_TR((code+0x4e9u));
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
B200004ec:{NFSU2_TR((code+0x4ecu));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B200004ed:{NFSU2_TR((code+0x4edu));
u8 U[4];
w4(U+0,u32(code+0x4f2u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720ff8u);
}
B200004f2:L200004f2:{c.instructions+=4;NFSU2_TR((code+0x4f2u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200004f5:{NFSU2_TR((code+0x4f5u));
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
B200004f8:{NFSU2_TR((code+0x4f8u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B200004f9:{NFSU2_TR((code+0x4f9u));
u8 U[4];
w4(U+0,u32(code+0x4feu));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x7204f3u);
}
B200004fe:L200004fe:{c.instructions+=4;NFSU2_TR((code+0x4feu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000501:{NFSU2_TR((code+0x501u));
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
B20000504:{NFSU2_TR((code+0x504u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000505:{NFSU2_TR((code+0x505u));
u8 U[4];
w4(U+0,u32(code+0x50au));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720738u);
}
B2000050a:L2000050a:{c.instructions+=4;NFSU2_TR((code+0x50au));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B2000050d:{NFSU2_TR((code+0x50du));
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
B20000510:{NFSU2_TR((code+0x510u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000511:{NFSU2_TR((code+0x511u));
u8 U[4];
w4(U+0,u32(code+0x516u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720f32u);
}
B20000516:L20000516:{c.instructions+=11;NFSU2_TR((code+0x516u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B2000051c:{NFSU2_TR((code+0x51cu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3c0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000522:{NFSU2_TR((code+0x522u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe00ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000528:{NFSU2_TR((code+0x528u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5ccull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B2000052e:{NFSU2_TR((code+0x52eu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x710ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000534:{NFSU2_TR((code+0x534u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcc8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B2000053a:{NFSU2_TR((code+0x53au));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb90ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000540:{NFSU2_TR((code+0x540u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000546:{NFSU2_TR((code+0x546u));
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
B20000549:{NFSU2_TR((code+0x549u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B2000054a:{NFSU2_TR((code+0x54au));
u8 U[4];
w4(U+0,u32(code+0x54fu));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720fd1u);
}
B2000054f:L2000054f:{c.instructions+=4;NFSU2_TR((code+0x54fu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000552:{NFSU2_TR((code+0x552u));
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
B20000555:{NFSU2_TR((code+0x555u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000556:{NFSU2_TR((code+0x556u));
u8 U[4];
w4(U+0,u32(code+0x55bu));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720ff8u);
}
B2000055b:L2000055b:{c.instructions+=10;NFSU2_TR((code+0x55bu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x920ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000561:{NFSU2_TR((code+0x561u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000567:{NFSU2_TR((code+0x567u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbd8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B2000056d:{NFSU2_TR((code+0x56du));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xaa0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000573:{NFSU2_TR((code+0x573u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2d0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000579:{NFSU2_TR((code+0x579u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4dcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B2000057f:{NFSU2_TR((code+0x57fu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x620ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000585:{NFSU2_TR((code+0x585u));
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
B20000588:{NFSU2_TR((code+0x588u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000589:{NFSU2_TR((code+0x589u));
u8 U[4];
w4(U+0,u32(code+0x58eu));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720fd1u);
}
B2000058e:L2000058e:{c.instructions+=22;NFSU2_TR((code+0x58eu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000591:{NFSU2_TR((code+0x591u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6e4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000597:{NFSU2_TR((code+0x597u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5a0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B2000059d:{NFSU2_TR((code+0x59du));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x394ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200005a3:{NFSU2_TR((code+0x5a3u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb64ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200005a9:{NFSU2_TR((code+0x5a9u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc9cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200005af:{NFSU2_TR((code+0x5afu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xdd4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200005b5:{NFSU2_TR((code+0x5b5u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9e4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200005bb:{NFSU2_TR((code+0x5bbu));
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
B200005be:{NFSU2_TR((code+0x5beu));
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B200005c0:{NFSU2_TR((code+0x5c0u));
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
B200005c3:{NFSU2_TR((code+0x5c3u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200005c6:{NFSU2_TR((code+0x5c6u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6bcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200005cc:{NFSU2_TR((code+0x5ccu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x578ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200005d2:{NFSU2_TR((code+0x5d2u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x36cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200005d8:{NFSU2_TR((code+0x5d8u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9bcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200005de:{NFSU2_TR((code+0x5deu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xdacull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200005e4:{NFSU2_TR((code+0x5e4u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc74ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200005ea:{NFSU2_TR((code+0x5eau));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb3cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200005f0:{NFSU2_TR((code+0x5f0u));
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
B200005f3:{NFSU2_TR((code+0x5f3u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B200005f4:{NFSU2_TR((code+0x5f4u));
u8 U[4];
w4(U+0,u32(code+0x5f9u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720d57u);
}
B200005f9:L200005f9:{c.instructions+=3;NFSU2_TR((code+0x5f9u));
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
B200005fc:{NFSU2_TR((code+0x5fcu));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B200005fd:{NFSU2_TR((code+0x5fdu));
u8 U[4];
w4(U+0,u32(code+0x602u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720340u);
}
B20000602:L20000602:{c.instructions+=4;NFSU2_TR((code+0x602u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000605:{NFSU2_TR((code+0x605u));
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
B20000608:{NFSU2_TR((code+0x608u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000609:{NFSU2_TR((code+0x609u));
u8 U[4];
w4(U+0,u32(code+0x60eu));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720340u);
}
B2000060e:L2000060e:{c.instructions+=4;NFSU2_TR((code+0x60eu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000611:{NFSU2_TR((code+0x611u));
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
B20000614:{NFSU2_TR((code+0x614u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000615:{NFSU2_TR((code+0x615u));
u8 U[4];
w4(U+0,u32(code+0x61au));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x7203ebu);
}
B2000061a:L2000061a:{c.instructions+=8;NFSU2_TR((code+0x61au));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd38ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000620:{NFSU2_TR((code+0x620u));
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
B20000623:{NFSU2_TR((code+0x623u));
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B20000625:{NFSU2_TR((code+0x625u));
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
B20000628:{NFSU2_TR((code+0x628u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B2000062b:{NFSU2_TR((code+0x62bu));
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
B2000062e:{NFSU2_TR((code+0x62eu));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B2000062f:{NFSU2_TR((code+0x62fu));
u8 U[4];
w4(U+0,u32(code+0x634u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720ff8u);
}
B20000634:L20000634:{c.instructions+=4;NFSU2_TR((code+0x634u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000637:{NFSU2_TR((code+0x637u));
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
B2000063a:{NFSU2_TR((code+0x63au));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B2000063b:{NFSU2_TR((code+0x63bu));
u8 U[4];
w4(U+0,u32(code+0x640u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720ff8u);
}
B20000640:L20000640:{c.instructions+=6;NFSU2_TR((code+0x640u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000643:{NFSU2_TR((code+0x643u));
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
B20000646:{NFSU2_TR((code+0x646u));
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B20000648:{NFSU2_TR((code+0x648u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B2000064b:{NFSU2_TR((code+0x64bu));
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
B2000064d:{NFSU2_TR((code+0x64du));
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L20000651;}}
}
B2000064f:L2000064f:{c.instructions+=1;NFSU2_TR((code+0x64fu));
__builtin_memmove((R+0),(R+4),4);
}
B20000651:L20000651:{c.instructions+=4;NFSU2_TR((code+0x651u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000654:{NFSU2_TR((code+0x654u));
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
B20000657:{NFSU2_TR((code+0x657u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000658:{NFSU2_TR((code+0x658u));
u8 U[4];
w4(U+0,u32(code+0x65du));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720ff8u);
}
B2000065d:L2000065d:{c.instructions+=4;NFSU2_TR((code+0x65du));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000660:{NFSU2_TR((code+0x660u));
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
B20000663:{NFSU2_TR((code+0x663u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000664:{NFSU2_TR((code+0x664u));
u8 U[4];
w4(U+0,u32(code+0x669u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720fd1u);
}
B20000669:L20000669:{c.instructions+=5;NFSU2_TR((code+0x669u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B2000066c:{NFSU2_TR((code+0x66cu));
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
B2000066f:{NFSU2_TR((code+0x66fu));
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
B20000672:{NFSU2_TR((code+0x672u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000673:{NFSU2_TR((code+0x673u));
u8 U[4];
w4(U+0,u32(code+0x678u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720684u);
}
B20000678:L20000678:{c.instructions+=12;NFSU2_TR((code+0x678u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B2000067b:{NFSU2_TR((code+0x67bu));
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
B2000067e:{NFSU2_TR((code+0x67eu));
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B20000680:{NFSU2_TR((code+0x680u));
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
B20000683:{NFSU2_TR((code+0x683u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x178ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000689:{NFSU2_TR((code+0x689u));
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
B2000068c:{NFSU2_TR((code+0x68cu));
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B2000068e:{NFSU2_TR((code+0x68eu));
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
B20000692:{NFSU2_TR((code+0x692u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000695:{NFSU2_TR((code+0x695u));
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
B20000698:{NFSU2_TR((code+0x698u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000699:{NFSU2_TR((code+0x699u));
u8 U[4];
w4(U+0,u32(code+0x69eu));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x7207bfu);
}
B2000069e:L2000069e:{c.instructions+=10;NFSU2_TR((code+0x69eu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200006a1:{NFSU2_TR((code+0x6a1u));
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
B200006a4:{NFSU2_TR((code+0x6a4u));
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B200006a6:{NFSU2_TR((code+0x6a6u));
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
B200006aa:{NFSU2_TR((code+0x6aau));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x144ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200006b0:{NFSU2_TR((code+0x6b0u));
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
B200006b3:{NFSU2_TR((code+0x6b3u));
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B200006b5:{NFSU2_TR((code+0x6b5u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B200006b8:{NFSU2_TR((code+0x6b8u));
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
B200006ba:{NFSU2_TR((code+0x6bau));
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L200006be;}}
}
B200006bc:L200006bc:{c.instructions+=1;NFSU2_TR((code+0x6bcu));
__builtin_memmove((R+0),(R+4),4);
}
B200006be:L200006be:{c.instructions+=4;NFSU2_TR((code+0x6beu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x15cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200006c4:{NFSU2_TR((code+0x6c4u));
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
B200006c7:{NFSU2_TR((code+0x6c7u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B200006c8:{NFSU2_TR((code+0x6c8u));
u8 U[4];
w4(U+0,u32(code+0x6cdu));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720ff8u);
}
B200006cd:L200006cd:{c.instructions+=6;NFSU2_TR((code+0x6cdu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200006d0:{NFSU2_TR((code+0x6d0u));
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
B200006d3:{NFSU2_TR((code+0x6d3u));
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B200006d5:{NFSU2_TR((code+0x6d5u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B200006d8:{NFSU2_TR((code+0x6d8u));
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
B200006da:{NFSU2_TR((code+0x6dau));
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L200006de;}}
}
B200006dc:L200006dc:{c.instructions+=1;NFSU2_TR((code+0x6dcu));
__builtin_memmove((R+0),(R+4),4);
}
B200006de:L200006de:{c.instructions+=4;NFSU2_TR((code+0x6deu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200006e1:{NFSU2_TR((code+0x6e1u));
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
B200006e4:{NFSU2_TR((code+0x6e4u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B200006e5:{NFSU2_TR((code+0x6e5u));
u8 U[4];
w4(U+0,u32(code+0x6eau));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720ff8u);
}
B200006ea:L200006ea:{c.instructions+=4;NFSU2_TR((code+0x6eau));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200006ed:{NFSU2_TR((code+0x6edu));
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
B200006f0:{NFSU2_TR((code+0x6f0u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B200006f1:{NFSU2_TR((code+0x6f1u));
u8 U[4];
w4(U+0,u32(code+0x6f6u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720fd1u);
}
B200006f6:L200006f6:{c.instructions+=4;NFSU2_TR((code+0x6f6u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200006f9:{NFSU2_TR((code+0x6f9u));
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
B200006fc:{NFSU2_TR((code+0x6fcu));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B200006fd:{NFSU2_TR((code+0x6fdu));
u8 U[4];
w4(U+0,u32(code+0x702u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720684u);
}
B20000702:L20000702:{c.instructions+=12;NFSU2_TR((code+0x702u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000705:{NFSU2_TR((code+0x705u));
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
B20000708:{NFSU2_TR((code+0x708u));
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B2000070a:{NFSU2_TR((code+0x70au));
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
B2000070d:{NFSU2_TR((code+0x70du));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x318ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000713:{NFSU2_TR((code+0x713u));
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
B20000716:{NFSU2_TR((code+0x716u));
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B20000718:{NFSU2_TR((code+0x718u));
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
B2000071c:{NFSU2_TR((code+0x71cu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2f4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000722:{NFSU2_TR((code+0x722u));
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
B20000725:{NFSU2_TR((code+0x725u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000726:{NFSU2_TR((code+0x726u));
u8 U[4];
w4(U+0,u32(code+0x72bu));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720ff8u);
}
B2000072b:L2000072b:{c.instructions+=6;NFSU2_TR((code+0x72bu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B2000072e:{NFSU2_TR((code+0x72eu));
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
B20000731:{NFSU2_TR((code+0x731u));
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B20000733:{NFSU2_TR((code+0x733u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B20000736:{NFSU2_TR((code+0x736u));
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
B20000738:{NFSU2_TR((code+0x738u));
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L2000073c;}}
}
B2000073a:L2000073a:{c.instructions+=1;NFSU2_TR((code+0x73au));
__builtin_memmove((R+0),(R+4),4);
}
B2000073c:L2000073c:{c.instructions+=4;NFSU2_TR((code+0x73cu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B2000073f:{NFSU2_TR((code+0x73fu));
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
B20000742:{NFSU2_TR((code+0x742u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000743:{NFSU2_TR((code+0x743u));
u8 U[4];
w4(U+0,u32(code+0x748u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720ff8u);
}
B20000748:L20000748:{c.instructions+=4;NFSU2_TR((code+0x748u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B2000074b:{NFSU2_TR((code+0x74bu));
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
B2000074e:{NFSU2_TR((code+0x74eu));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B2000074f:{NFSU2_TR((code+0x74fu));
u8 U[4];
w4(U+0,u32(code+0x754u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720fd1u);
}
B20000754:L20000754:{c.instructions+=4;NFSU2_TR((code+0x754u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000757:{NFSU2_TR((code+0x757u));
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
B2000075a:{NFSU2_TR((code+0x75au));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B2000075b:{NFSU2_TR((code+0x75bu));
u8 U[4];
w4(U+0,u32(code+0x760u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720684u);
}
B20000760:L20000760:{c.instructions+=16;NFSU2_TR((code+0x760u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000763:{NFSU2_TR((code+0x763u));
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
B20000766:{NFSU2_TR((code+0x766u));
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B20000768:{NFSU2_TR((code+0x768u));
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
B2000076b:{NFSU2_TR((code+0x76bu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x408ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000771:{NFSU2_TR((code+0x771u));
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
B20000774:{NFSU2_TR((code+0x774u));
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B20000776:{NFSU2_TR((code+0x776u));
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
B2000077a:{NFSU2_TR((code+0x77au));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ccull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000780:{NFSU2_TR((code+0x780u));
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
B20000783:{NFSU2_TR((code+0x783u));
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B20000785:{NFSU2_TR((code+0x785u));
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
B20000788:{NFSU2_TR((code+0x788u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B2000078b:{NFSU2_TR((code+0x78bu));
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
B2000078e:{NFSU2_TR((code+0x78eu));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B2000078f:{NFSU2_TR((code+0x78fu));
u8 U[4];
w4(U+0,u32(code+0x794u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720ff8u);
}
B20000794:L20000794:{c.instructions+=6;NFSU2_TR((code+0x794u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000797:{NFSU2_TR((code+0x797u));
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
B2000079a:{NFSU2_TR((code+0x79au));
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B2000079c:{NFSU2_TR((code+0x79cu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B2000079f:{NFSU2_TR((code+0x79fu));
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
B200007a1:{NFSU2_TR((code+0x7a1u));
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L200007a5;}}
}
B200007a3:L200007a3:{c.instructions+=1;NFSU2_TR((code+0x7a3u));
__builtin_memmove((R+0),(R+4),4);
}
B200007a5:L200007a5:{c.instructions+=4;NFSU2_TR((code+0x7a5u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200007a8:{NFSU2_TR((code+0x7a8u));
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
B200007ab:{NFSU2_TR((code+0x7abu));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B200007ac:{NFSU2_TR((code+0x7acu));
u8 U[4];
w4(U+0,u32(code+0x7b1u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720ff8u);
}
B200007b1:L200007b1:{c.instructions+=4;NFSU2_TR((code+0x7b1u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200007b4:{NFSU2_TR((code+0x7b4u));
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
B200007b7:{NFSU2_TR((code+0x7b7u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B200007b8:{NFSU2_TR((code+0x7b8u));
u8 U[4];
w4(U+0,u32(code+0x7bdu));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720fd1u);
}
B200007bd:L200007bd:{c.instructions+=4;NFSU2_TR((code+0x7bdu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200007c0:{NFSU2_TR((code+0x7c0u));
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
B200007c3:{NFSU2_TR((code+0x7c3u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B200007c4:{NFSU2_TR((code+0x7c4u));
u8 U[4];
w4(U+0,u32(code+0x7c9u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720684u);
}
B200007c9:L200007c9:{c.instructions+=12;NFSU2_TR((code+0x7c9u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200007cc:{NFSU2_TR((code+0x7ccu));
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
B200007cf:{NFSU2_TR((code+0x7cfu));
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B200007d1:{NFSU2_TR((code+0x7d1u));
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
B200007d4:{NFSU2_TR((code+0x7d4u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1d0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200007da:{NFSU2_TR((code+0x7dau));
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
B200007dd:{NFSU2_TR((code+0x7ddu));
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B200007df:{NFSU2_TR((code+0x7dfu));
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
B200007e3:{NFSU2_TR((code+0x7e3u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200007e6:{NFSU2_TR((code+0x7e6u));
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
B200007e9:{NFSU2_TR((code+0x7e9u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B200007ea:{NFSU2_TR((code+0x7eau));
u8 U[4];
w4(U+0,u32(code+0x7efu));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x7207bfu);
}
B200007ef:L200007ef:{c.instructions+=10;NFSU2_TR((code+0x7efu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200007f2:{NFSU2_TR((code+0x7f2u));
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
B200007f5:{NFSU2_TR((code+0x7f5u));
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B200007f7:{NFSU2_TR((code+0x7f7u));
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
B200007fa:{NFSU2_TR((code+0x7fau));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200007fd:{NFSU2_TR((code+0x7fdu));
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
B20000800:{NFSU2_TR((code+0x800u));
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B20000802:{NFSU2_TR((code+0x802u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B20000805:{NFSU2_TR((code+0x805u));
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
B20000807:{NFSU2_TR((code+0x807u));
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L2000080b;}}
}
B20000809:L20000809:{c.instructions+=1;NFSU2_TR((code+0x809u));
__builtin_memmove((R+0),(R+4),4);
}
B2000080b:L2000080b:{c.instructions+=4;NFSU2_TR((code+0x80bu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1b8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000811:{NFSU2_TR((code+0x811u));
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
B20000814:{NFSU2_TR((code+0x814u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000815:{NFSU2_TR((code+0x815u));
u8 U[4];
w4(U+0,u32(code+0x81au));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720fd1u);
}
B2000081a:L2000081a:{c.instructions+=8;NFSU2_TR((code+0x81au));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B2000081d:{NFSU2_TR((code+0x81du));
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
B20000820:{NFSU2_TR((code+0x820u));
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B20000822:{NFSU2_TR((code+0x822u));
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
B20000825:{NFSU2_TR((code+0x825u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
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
EXIT(0x7207bfu);
}
B20000831:L20000831:{c.instructions+=10;NFSU2_TR((code+0x831u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000834:{NFSU2_TR((code+0x834u));
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
B20000837:{NFSU2_TR((code+0x837u));
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B20000839:{NFSU2_TR((code+0x839u));
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
B2000083c:{NFSU2_TR((code+0x83cu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B2000083f:{NFSU2_TR((code+0x83fu));
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
B20000842:{NFSU2_TR((code+0x842u));
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B20000844:{NFSU2_TR((code+0x844u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B20000847:{NFSU2_TR((code+0x847u));
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
B20000849:{NFSU2_TR((code+0x849u));
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L2000084d;}}
}
B2000084b:L2000084b:{c.instructions+=1;NFSU2_TR((code+0x84bu));
__builtin_memmove((R+0),(R+4),4);
}
B2000084d:L2000084d:{c.instructions+=4;NFSU2_TR((code+0x84du));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000850:{NFSU2_TR((code+0x850u));
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
B20000853:{NFSU2_TR((code+0x853u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000854:{NFSU2_TR((code+0x854u));
u8 U[4];
w4(U+0,u32(code+0x859u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720684u);
}
B20000859:L20000859:{c.instructions+=4;NFSU2_TR((code+0x859u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B2000085c:{NFSU2_TR((code+0x85cu));
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
B2000085f:{NFSU2_TR((code+0x85fu));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000860:{NFSU2_TR((code+0x860u));
u8 U[4];
w4(U+0,u32(code+0x865u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x7204f3u);
}
B20000865:L20000865:{c.instructions+=4;NFSU2_TR((code+0x865u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000868:{NFSU2_TR((code+0x868u));
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
B2000086b:{NFSU2_TR((code+0x86bu));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B2000086c:{NFSU2_TR((code+0x86cu));
u8 U[4];
w4(U+0,u32(code+0x871u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720767u);
}
B20000871:L20000871:{c.instructions+=4;NFSU2_TR((code+0x871u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000874:{NFSU2_TR((code+0x874u));
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
B20000877:{NFSU2_TR((code+0x877u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000878:{NFSU2_TR((code+0x878u));
u8 U[4];
w4(U+0,u32(code+0x87du));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720767u);
}
B2000087d:L2000087d:{c.instructions+=4;NFSU2_TR((code+0x87du));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000880:{NFSU2_TR((code+0x880u));
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
B20000883:{NFSU2_TR((code+0x883u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000884:{NFSU2_TR((code+0x884u));
u8 U[4];
w4(U+0,u32(code+0x889u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720767u);
}
B20000889:L20000889:{c.instructions+=5;NFSU2_TR((code+0x889u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B2000088c:{NFSU2_TR((code+0x88cu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B2000088f:{NFSU2_TR((code+0x88fu));
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
B20000892:{NFSU2_TR((code+0x892u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000893:{NFSU2_TR((code+0x893u));
u8 U[4];
w4(U+0,u32(code+0x898u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x7204f3u);
}
B20000898:L20000898:{c.instructions+=8;NFSU2_TR((code+0x898u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B2000089b:{NFSU2_TR((code+0x89bu));
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
B2000089e:{NFSU2_TR((code+0x89eu));
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B200008a0:{NFSU2_TR((code+0x8a0u));
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
B200008a3:{NFSU2_TR((code+0x8a3u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200008a6:{NFSU2_TR((code+0x8a6u));
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
B200008a9:{NFSU2_TR((code+0x8a9u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B200008aa:{NFSU2_TR((code+0x8aau));
u8 U[4];
w4(U+0,u32(code+0x8afu));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720684u);
}
B200008af:L200008af:{c.instructions+=4;NFSU2_TR((code+0x8afu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200008b2:{NFSU2_TR((code+0x8b2u));
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
B200008b5:{NFSU2_TR((code+0x8b5u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B200008b6:{NFSU2_TR((code+0x8b6u));
u8 U[4];
w4(U+0,u32(code+0x8bbu));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720f32u);
}
B200008bb:L200008bb:{c.instructions+=5;NFSU2_TR((code+0x8bbu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200008be:{NFSU2_TR((code+0x8beu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200008c1:{NFSU2_TR((code+0x8c1u));
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
B200008c4:{NFSU2_TR((code+0x8c4u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B200008c5:{NFSU2_TR((code+0x8c5u));
u8 U[4];
w4(U+0,u32(code+0x8cau));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720767u);
}
B200008ca:L200008ca:{c.instructions+=4;NFSU2_TR((code+0x8cau));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200008cd:{NFSU2_TR((code+0x8cdu));
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
B200008d0:{NFSU2_TR((code+0x8d0u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B200008d1:{NFSU2_TR((code+0x8d1u));
u8 U[4];
w4(U+0,u32(code+0x8d6u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x7204f3u);
}
B200008d6:L200008d6:{c.instructions+=4;NFSU2_TR((code+0x8d6u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200008d9:{NFSU2_TR((code+0x8d9u));
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
B200008dc:{NFSU2_TR((code+0x8dcu));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B200008dd:{NFSU2_TR((code+0x8ddu));
u8 U[4];
w4(U+0,u32(code+0x8e2u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720d57u);
}
B200008e2:L200008e2:{c.instructions+=3;NFSU2_TR((code+0x8e2u));
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
B200008e5:{NFSU2_TR((code+0x8e5u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B200008e6:{NFSU2_TR((code+0x8e6u));
u8 U[4];
w4(U+0,u32(code+0x8ebu));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720fd1u);
}
B200008eb:L200008eb:{c.instructions+=8;NFSU2_TR((code+0x8ebu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200008ee:{NFSU2_TR((code+0x8eeu));
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
B200008f1:{NFSU2_TR((code+0x8f1u));
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B200008f3:{NFSU2_TR((code+0x8f3u));
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
B200008f6:{NFSU2_TR((code+0x8f6u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200008f9:{NFSU2_TR((code+0x8f9u));
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
B200008fc:{NFSU2_TR((code+0x8fcu));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B200008fd:{NFSU2_TR((code+0x8fdu));
u8 U[4];
w4(U+0,u32(code+0x902u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x7207bfu);
}
B20000902:L20000902:{c.instructions+=10;NFSU2_TR((code+0x902u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000905:{NFSU2_TR((code+0x905u));
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
B20000908:{NFSU2_TR((code+0x908u));
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B2000090a:{NFSU2_TR((code+0x90au));
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
B2000090d:{NFSU2_TR((code+0x90du));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000910:{NFSU2_TR((code+0x910u));
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
B20000913:{NFSU2_TR((code+0x913u));
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B20000915:{NFSU2_TR((code+0x915u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B20000918:{NFSU2_TR((code+0x918u));
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
B2000091a:{NFSU2_TR((code+0x91au));
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L2000091e;}}
}
B2000091c:L2000091c:{c.instructions+=1;NFSU2_TR((code+0x91cu));
__builtin_memmove((R+0),(R+4),4);
}
B2000091e:L2000091e:{c.instructions+=4;NFSU2_TR((code+0x91eu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x22cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000924:{NFSU2_TR((code+0x924u));
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
B20000927:{NFSU2_TR((code+0x927u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000928:{NFSU2_TR((code+0x928u));
u8 U[4];
w4(U+0,u32(code+0x92du));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720fd1u);
}
B2000092d:L2000092d:{c.instructions+=10;NFSU2_TR((code+0x92du));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000930:{NFSU2_TR((code+0x930u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000933:{NFSU2_TR((code+0x933u));
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
B20000936:{NFSU2_TR((code+0x936u));
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
B20000939:{NFSU2_TR((code+0x939u));
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B2000093b:{NFSU2_TR((code+0x93bu));
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
B2000093e:{NFSU2_TR((code+0x93eu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000941:{NFSU2_TR((code+0x941u));
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
B20000944:{NFSU2_TR((code+0x944u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000945:{NFSU2_TR((code+0x945u));
u8 U[4];
w4(U+0,u32(code+0x94au));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720ff8u);
}
B2000094a:L2000094a:{c.instructions+=8;NFSU2_TR((code+0x94au));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B2000094d:{NFSU2_TR((code+0x94du));
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
B20000950:{NFSU2_TR((code+0x950u));
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B20000952:{NFSU2_TR((code+0x952u));
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
B20000956:{NFSU2_TR((code+0x956u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000959:{NFSU2_TR((code+0x959u));
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
B2000095c:{NFSU2_TR((code+0x95cu));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B2000095d:{NFSU2_TR((code+0x95du));
u8 U[4];
w4(U+0,u32(code+0x962u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x7207bfu);
}
B20000962:L20000962:{c.instructions+=6;NFSU2_TR((code+0x962u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
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
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B2000096a:{NFSU2_TR((code+0x96au));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B2000096d:{NFSU2_TR((code+0x96du));
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
B2000096f:{NFSU2_TR((code+0x96fu));
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L20000973;}}
}
B20000971:L20000971:{c.instructions+=1;NFSU2_TR((code+0x971u));
__builtin_memmove((R+0),(R+4),4);
}
B20000973:L20000973:{c.instructions+=4;NFSU2_TR((code+0x973u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000976:{NFSU2_TR((code+0x976u));
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
B20000979:{NFSU2_TR((code+0x979u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B2000097a:{NFSU2_TR((code+0x97au));
u8 U[4];
w4(U+0,u32(code+0x97fu));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720684u);
}
B2000097f:L2000097f:{c.instructions+=4;NFSU2_TR((code+0x97fu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000982:{NFSU2_TR((code+0x982u));
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
B20000985:{NFSU2_TR((code+0x985u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000986:{NFSU2_TR((code+0x986u));
u8 U[4];
w4(U+0,u32(code+0x98bu));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x7204f3u);
}
B2000098b:L2000098b:{c.instructions+=4;NFSU2_TR((code+0x98bu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B2000098e:{NFSU2_TR((code+0x98eu));
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
B20000991:{NFSU2_TR((code+0x991u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000992:{NFSU2_TR((code+0x992u));
u8 U[4];
w4(U+0,u32(code+0x997u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720767u);
}
B20000997:L20000997:{c.instructions+=3;NFSU2_TR((code+0x997u));
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
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B2000099b:{NFSU2_TR((code+0x99bu));
u8 U[4];
w4(U+0,u32(code+0x9a0u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720fd1u);
}
B200009a0:L200009a0:{c.instructions+=9;NFSU2_TR((code+0x9a0u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200009a3:{NFSU2_TR((code+0x9a3u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200009a6:{NFSU2_TR((code+0x9a6u));
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
B200009a9:{NFSU2_TR((code+0x9a9u));
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B200009ab:{NFSU2_TR((code+0x9abu));
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
B200009ae:{NFSU2_TR((code+0x9aeu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200009b1:{NFSU2_TR((code+0x9b1u));
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
B200009b4:{NFSU2_TR((code+0x9b4u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B200009b5:{NFSU2_TR((code+0x9b5u));
u8 U[4];
w4(U+0,u32(code+0x9bau));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720ff8u);
}
B200009ba:L200009ba:{c.instructions+=8;NFSU2_TR((code+0x9bau));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200009bd:{NFSU2_TR((code+0x9bdu));
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
B200009c0:{NFSU2_TR((code+0x9c0u));
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B200009c2:{NFSU2_TR((code+0x9c2u));
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
B200009c6:{NFSU2_TR((code+0x9c6u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200009c9:{NFSU2_TR((code+0x9c9u));
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
B200009cc:{NFSU2_TR((code+0x9ccu));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B200009cd:{NFSU2_TR((code+0x9cdu));
u8 U[4];
w4(U+0,u32(code+0x9d2u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x7207bfu);
}
B200009d2:L200009d2:{c.instructions+=6;NFSU2_TR((code+0x9d2u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200009d5:{NFSU2_TR((code+0x9d5u));
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
B200009d8:{NFSU2_TR((code+0x9d8u));
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B200009da:{NFSU2_TR((code+0x9dau));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B200009dd:{NFSU2_TR((code+0x9ddu));
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
B200009df:{NFSU2_TR((code+0x9dfu));
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L200009e3;}}
}
B200009e1:L200009e1:{c.instructions+=1;NFSU2_TR((code+0x9e1u));
__builtin_memmove((R+0),(R+4),4);
}
B200009e3:L200009e3:{c.instructions+=4;NFSU2_TR((code+0x9e3u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
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
EXIT(0x720fd1u);
}
B200009ef:L200009ef:{c.instructions+=8;NFSU2_TR((code+0x9efu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200009f2:{NFSU2_TR((code+0x9f2u));
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
B200009f5:{NFSU2_TR((code+0x9f5u));
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B200009f7:{NFSU2_TR((code+0x9f7u));
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
B200009fa:{NFSU2_TR((code+0x9fau));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200009fd:{NFSU2_TR((code+0x9fdu));
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
B20000a00:{NFSU2_TR((code+0xa00u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000a01:{NFSU2_TR((code+0xa01u));
u8 U[4];
w4(U+0,u32(code+0xa06u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x7207bfu);
}
B20000a06:L20000a06:{c.instructions+=10;NFSU2_TR((code+0xa06u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000a09:{NFSU2_TR((code+0xa09u));
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
B20000a0c:{NFSU2_TR((code+0xa0cu));
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B20000a0e:{NFSU2_TR((code+0xa0eu));
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
B20000a11:{NFSU2_TR((code+0xa11u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000a14:{NFSU2_TR((code+0xa14u));
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
B20000a17:{NFSU2_TR((code+0xa17u));
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B20000a19:{NFSU2_TR((code+0xa19u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B20000a1c:{NFSU2_TR((code+0xa1cu));
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
B20000a1e:{NFSU2_TR((code+0xa1eu));
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L20000a22;}}
}
B20000a20:L20000a20:{c.instructions+=1;NFSU2_TR((code+0xa20u));
__builtin_memmove((R+0),(R+4),4);
}
B20000a22:L20000a22:{c.instructions+=4;NFSU2_TR((code+0xa22u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000a25:{NFSU2_TR((code+0xa25u));
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
B20000a28:{NFSU2_TR((code+0xa28u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000a29:{NFSU2_TR((code+0xa29u));
u8 U[4];
w4(U+0,u32(code+0xa2eu));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720684u);
}
B20000a2e:L20000a2e:{c.instructions+=4;NFSU2_TR((code+0xa2eu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000a31:{NFSU2_TR((code+0xa31u));
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
B20000a34:{NFSU2_TR((code+0xa34u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000a35:{NFSU2_TR((code+0xa35u));
u8 U[4];
w4(U+0,u32(code+0xa3au));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x7204f3u);
}
B20000a3a:L20000a3a:{c.instructions+=4;NFSU2_TR((code+0xa3au));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000a3d:{NFSU2_TR((code+0xa3du));
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
B20000a40:{NFSU2_TR((code+0xa40u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000a41:{NFSU2_TR((code+0xa41u));
u8 U[4];
w4(U+0,u32(code+0xa46u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720767u);
}
B20000a46:L20000a46:{c.instructions+=4;NFSU2_TR((code+0xa46u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000a49:{NFSU2_TR((code+0xa49u));
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
B20000a4c:{NFSU2_TR((code+0xa4cu));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000a4d:{NFSU2_TR((code+0xa4du));
u8 U[4];
w4(U+0,u32(code+0xa52u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720767u);
}
B20000a52:L20000a52:{c.instructions+=4;NFSU2_TR((code+0xa52u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000a55:{NFSU2_TR((code+0xa55u));
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
B20000a58:{NFSU2_TR((code+0xa58u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000a59:{NFSU2_TR((code+0xa59u));
u8 U[4];
w4(U+0,u32(code+0xa5eu));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720767u);
}
B20000a5e:L20000a5e:{c.instructions+=5;NFSU2_TR((code+0xa5eu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000a61:{NFSU2_TR((code+0xa61u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000a64:{NFSU2_TR((code+0xa64u));
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
B20000a67:{NFSU2_TR((code+0xa67u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000a68:{NFSU2_TR((code+0xa68u));
u8 U[4];
w4(U+0,u32(code+0xa6du));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x7204f3u);
}
B20000a6d:L20000a6d:{c.instructions+=8;NFSU2_TR((code+0xa6du));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000a70:{NFSU2_TR((code+0xa70u));
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
B20000a73:{NFSU2_TR((code+0xa73u));
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B20000a75:{NFSU2_TR((code+0xa75u));
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
B20000a78:{NFSU2_TR((code+0xa78u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000a7b:{NFSU2_TR((code+0xa7bu));
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
B20000a7e:{NFSU2_TR((code+0xa7eu));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000a7f:{NFSU2_TR((code+0xa7fu));
u8 U[4];
w4(U+0,u32(code+0xa84u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720684u);
}
B20000a84:L20000a84:{c.instructions+=4;NFSU2_TR((code+0xa84u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000a87:{NFSU2_TR((code+0xa87u));
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
B20000a8a:{NFSU2_TR((code+0xa8au));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000a8b:{NFSU2_TR((code+0xa8bu));
u8 U[4];
w4(U+0,u32(code+0xa90u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720f32u);
}
B20000a90:L20000a90:{c.instructions+=5;NFSU2_TR((code+0xa90u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000a93:{NFSU2_TR((code+0xa93u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000a96:{NFSU2_TR((code+0xa96u));
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
B20000a99:{NFSU2_TR((code+0xa99u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000a9a:{NFSU2_TR((code+0xa9au));
u8 U[4];
w4(U+0,u32(code+0xa9fu));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720767u);
}
B20000a9f:L20000a9f:{c.instructions+=4;NFSU2_TR((code+0xa9fu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000aa2:{NFSU2_TR((code+0xaa2u));
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
B20000aa5:{NFSU2_TR((code+0xaa5u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000aa6:{NFSU2_TR((code+0xaa6u));
u8 U[4];
w4(U+0,u32(code+0xaabu));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x7204f3u);
}
B20000aab:L20000aab:{c.instructions+=4;NFSU2_TR((code+0xaabu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000aae:{NFSU2_TR((code+0xaaeu));
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
B20000ab1:{NFSU2_TR((code+0xab1u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000ab2:{NFSU2_TR((code+0xab2u));
u8 U[4];
w4(U+0,u32(code+0xab7u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720d57u);
}
B20000ab7:L20000ab7:{c.instructions+=3;NFSU2_TR((code+0xab7u));
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
B20000aba:{NFSU2_TR((code+0xabau));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000abb:{NFSU2_TR((code+0xabbu));
u8 U[4];
w4(U+0,u32(code+0xac0u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720fd1u);
}
B20000ac0:L20000ac0:{c.instructions+=9;NFSU2_TR((code+0xac0u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000ac3:{NFSU2_TR((code+0xac3u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000ac6:{NFSU2_TR((code+0xac6u));
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
B20000ac9:{NFSU2_TR((code+0xac9u));
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B20000acb:{NFSU2_TR((code+0xacbu));
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
B20000ace:{NFSU2_TR((code+0xaceu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000ad1:{NFSU2_TR((code+0xad1u));
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
B20000ad4:{NFSU2_TR((code+0xad4u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000ad5:{NFSU2_TR((code+0xad5u));
u8 U[4];
w4(U+0,u32(code+0xadau));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720ff8u);
}
B20000ada:L20000ada:{c.instructions+=8;NFSU2_TR((code+0xadau));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000add:{NFSU2_TR((code+0xaddu));
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
B20000ae0:{NFSU2_TR((code+0xae0u));
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B20000ae2:{NFSU2_TR((code+0xae2u));
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
B20000ae6:{NFSU2_TR((code+0xae6u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000ae9:{NFSU2_TR((code+0xae9u));
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
B20000aec:{NFSU2_TR((code+0xaecu));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000aed:{NFSU2_TR((code+0xaedu));
u8 U[4];
w4(U+0,u32(code+0xaf2u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x7207bfu);
}
B20000af2:L20000af2:{c.instructions+=6;NFSU2_TR((code+0xaf2u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000af5:{NFSU2_TR((code+0xaf5u));
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
B20000af8:{NFSU2_TR((code+0xaf8u));
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B20000afa:{NFSU2_TR((code+0xafau));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B20000afd:{NFSU2_TR((code+0xafdu));
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
B20000aff:{NFSU2_TR((code+0xaffu));
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L20000b03;}}
}
B20000b01:L20000b01:{c.instructions+=1;NFSU2_TR((code+0xb01u));
__builtin_memmove((R+0),(R+4),4);
}
B20000b03:L20000b03:{c.instructions+=4;NFSU2_TR((code+0xb03u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000b06:{NFSU2_TR((code+0xb06u));
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
B20000b09:{NFSU2_TR((code+0xb09u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000b0a:{NFSU2_TR((code+0xb0au));
u8 U[4];
w4(U+0,u32(code+0xb0fu));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720684u);
}
B20000b0f:L20000b0f:{c.instructions+=4;NFSU2_TR((code+0xb0fu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000b12:{NFSU2_TR((code+0xb12u));
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
B20000b15:{NFSU2_TR((code+0xb15u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000b16:{NFSU2_TR((code+0xb16u));
u8 U[4];
w4(U+0,u32(code+0xb1bu));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x7204f3u);
}
B20000b1b:L20000b1b:{c.instructions+=4;NFSU2_TR((code+0xb1bu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000b1e:{NFSU2_TR((code+0xb1eu));
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
B20000b21:{NFSU2_TR((code+0xb21u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000b22:{NFSU2_TR((code+0xb22u));
u8 U[4];
w4(U+0,u32(code+0xb27u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720767u);
}
B20000b27:L20000b27:{c.instructions+=4;NFSU2_TR((code+0xb27u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000b2a:{NFSU2_TR((code+0xb2au));
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
B20000b2d:{NFSU2_TR((code+0xb2du));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000b2e:{NFSU2_TR((code+0xb2eu));
u8 U[4];
w4(U+0,u32(code+0xb33u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720767u);
}
B20000b33:L20000b33:{c.instructions+=4;NFSU2_TR((code+0xb33u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000b36:{NFSU2_TR((code+0xb36u));
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
B20000b39:{NFSU2_TR((code+0xb39u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000b3a:{NFSU2_TR((code+0xb3au));
u8 U[4];
w4(U+0,u32(code+0xb3fu));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720767u);
}
B20000b3f:L20000b3f:{c.instructions+=5;NFSU2_TR((code+0xb3fu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000b42:{NFSU2_TR((code+0xb42u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000b45:{NFSU2_TR((code+0xb45u));
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
B20000b48:{NFSU2_TR((code+0xb48u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000b49:{NFSU2_TR((code+0xb49u));
u8 U[4];
w4(U+0,u32(code+0xb4eu));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x7204f3u);
}
B20000b4e:L20000b4e:{c.instructions+=8;NFSU2_TR((code+0xb4eu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000b51:{NFSU2_TR((code+0xb51u));
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
B20000b54:{NFSU2_TR((code+0xb54u));
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B20000b56:{NFSU2_TR((code+0xb56u));
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
B20000b59:{NFSU2_TR((code+0xb59u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000b5c:{NFSU2_TR((code+0xb5cu));
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
B20000b5f:{NFSU2_TR((code+0xb5fu));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000b60:{NFSU2_TR((code+0xb60u));
u8 U[4];
w4(U+0,u32(code+0xb65u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720684u);
}
B20000b65:L20000b65:{c.instructions+=5;NFSU2_TR((code+0xb65u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000b68:{NFSU2_TR((code+0xb68u));
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
B20000b6b:{NFSU2_TR((code+0xb6bu));
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
B20000b6e:{NFSU2_TR((code+0xb6eu));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000b6f:{NFSU2_TR((code+0xb6fu));
u8 U[4];
w4(U+0,u32(code+0xb74u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720f32u);
}
B20000b74:L20000b74:{c.instructions+=5;NFSU2_TR((code+0xb74u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000b77:{NFSU2_TR((code+0xb77u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000b7a:{NFSU2_TR((code+0xb7au));
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
B20000b7d:{NFSU2_TR((code+0xb7du));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000b7e:{NFSU2_TR((code+0xb7eu));
u8 U[4];
w4(U+0,u32(code+0xb83u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x7204f3u);
}
B20000b83:L20000b83:{c.instructions+=4;NFSU2_TR((code+0xb83u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000b86:{NFSU2_TR((code+0xb86u));
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
B20000b89:{NFSU2_TR((code+0xb89u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000b8a:{NFSU2_TR((code+0xb8au));
u8 U[4];
w4(U+0,u32(code+0xb8fu));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720767u);
}
B20000b8f:L20000b8f:{c.instructions+=4;NFSU2_TR((code+0xb8fu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000b92:{NFSU2_TR((code+0xb92u));
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
B20000b95:{NFSU2_TR((code+0xb95u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000b96:{NFSU2_TR((code+0xb96u));
u8 U[4];
w4(U+0,u32(code+0xb9bu));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720d57u);
}
B20000b9b:L20000b9b:{c.instructions+=7;NFSU2_TR((code+0xb9bu));
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
B20000b9e:{NFSU2_TR((code+0xb9eu));
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B20000ba0:{NFSU2_TR((code+0xba0u));
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
B20000ba3:{NFSU2_TR((code+0xba3u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000ba6:{NFSU2_TR((code+0xba6u));
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
B20000ba9:{NFSU2_TR((code+0xba9u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000baa:{NFSU2_TR((code+0xbaau));
u8 U[4];
w4(U+0,u32(code+0xbafu));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720ff8u);
}
B20000baf:L20000baf:{c.instructions+=4;NFSU2_TR((code+0xbafu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000bb2:{NFSU2_TR((code+0xbb2u));
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
B20000bb5:{NFSU2_TR((code+0xbb5u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000bb6:{NFSU2_TR((code+0xbb6u));
u8 U[4];
w4(U+0,u32(code+0xbbbu));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720ff8u);
}
B20000bbb:L20000bbb:{c.instructions+=6;NFSU2_TR((code+0xbbbu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000bbe:{NFSU2_TR((code+0xbbeu));
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
B20000bc1:{NFSU2_TR((code+0xbc1u));
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B20000bc3:{NFSU2_TR((code+0xbc3u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B20000bc6:{NFSU2_TR((code+0xbc6u));
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
B20000bc8:{NFSU2_TR((code+0xbc8u));
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L20000bcc;}}
}
B20000bca:L20000bca:{c.instructions+=1;NFSU2_TR((code+0xbcau));
__builtin_memmove((R+0),(R+4),4);
}
B20000bcc:L20000bcc:{c.instructions+=4;NFSU2_TR((code+0xbccu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000bcf:{NFSU2_TR((code+0xbcfu));
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
B20000bd2:{NFSU2_TR((code+0xbd2u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000bd3:{NFSU2_TR((code+0xbd3u));
u8 U[4];
w4(U+0,u32(code+0xbd8u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720ff8u);
}
B20000bd8:L20000bd8:{c.instructions+=4;NFSU2_TR((code+0xbd8u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000bdb:{NFSU2_TR((code+0xbdbu));
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
B20000bde:{NFSU2_TR((code+0xbdeu));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000bdf:{NFSU2_TR((code+0xbdfu));
u8 U[4];
w4(U+0,u32(code+0xbe4u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720fd1u);
}
B20000be4:L20000be4:{c.instructions+=4;NFSU2_TR((code+0xbe4u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000be7:{NFSU2_TR((code+0xbe7u));
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
B20000bea:{NFSU2_TR((code+0xbeau));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000beb:{NFSU2_TR((code+0xbebu));
u8 U[4];
w4(U+0,u32(code+0xbf0u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720684u);
}
B20000bf0:L20000bf0:{c.instructions+=12;NFSU2_TR((code+0xbf0u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000bf3:{NFSU2_TR((code+0xbf3u));
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
B20000bf6:{NFSU2_TR((code+0xbf6u));
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B20000bf8:{NFSU2_TR((code+0xbf8u));
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
B20000bfb:{NFSU2_TR((code+0xbfbu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1a4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000c01:{NFSU2_TR((code+0xc01u));
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
B20000c04:{NFSU2_TR((code+0xc04u));
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B20000c06:{NFSU2_TR((code+0xc06u));
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
B20000c0a:{NFSU2_TR((code+0xc0au));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000c0d:{NFSU2_TR((code+0xc0du));
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
B20000c10:{NFSU2_TR((code+0xc10u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000c11:{NFSU2_TR((code+0xc11u));
u8 U[4];
w4(U+0,u32(code+0xc16u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x7207bfu);
}
B20000c16:L20000c16:{c.instructions+=10;NFSU2_TR((code+0xc16u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000c19:{NFSU2_TR((code+0xc19u));
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
B20000c1c:{NFSU2_TR((code+0xc1cu));
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B20000c1e:{NFSU2_TR((code+0xc1eu));
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
B20000c22:{NFSU2_TR((code+0xc22u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x170ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000c28:{NFSU2_TR((code+0xc28u));
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
B20000c2b:{NFSU2_TR((code+0xc2bu));
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B20000c2d:{NFSU2_TR((code+0xc2du));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B20000c30:{NFSU2_TR((code+0xc30u));
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
B20000c32:{NFSU2_TR((code+0xc32u));
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L20000c36;}}
}
B20000c34:L20000c34:{c.instructions+=1;NFSU2_TR((code+0xc34u));
__builtin_memmove((R+0),(R+4),4);
}
B20000c36:L20000c36:{c.instructions+=4;NFSU2_TR((code+0xc36u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x188ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000c3c:{NFSU2_TR((code+0xc3cu));
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
B20000c3f:{NFSU2_TR((code+0xc3fu));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000c40:{NFSU2_TR((code+0xc40u));
u8 U[4];
w4(U+0,u32(code+0xc45u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720ff8u);
}
B20000c45:L20000c45:{c.instructions+=6;NFSU2_TR((code+0xc45u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000c48:{NFSU2_TR((code+0xc48u));
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
B20000c4b:{NFSU2_TR((code+0xc4bu));
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B20000c4d:{NFSU2_TR((code+0xc4du));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B20000c50:{NFSU2_TR((code+0xc50u));
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
B20000c52:{NFSU2_TR((code+0xc52u));
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L20000c56;}}
}
B20000c54:L20000c54:{c.instructions+=1;NFSU2_TR((code+0xc54u));
__builtin_memmove((R+0),(R+4),4);
}
B20000c56:L20000c56:{c.instructions+=4;NFSU2_TR((code+0xc56u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000c59:{NFSU2_TR((code+0xc59u));
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
B20000c5c:{NFSU2_TR((code+0xc5cu));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000c5d:{NFSU2_TR((code+0xc5du));
u8 U[4];
w4(U+0,u32(code+0xc62u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720ff8u);
}
B20000c62:L20000c62:{c.instructions+=4;NFSU2_TR((code+0xc62u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000c65:{NFSU2_TR((code+0xc65u));
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
B20000c68:{NFSU2_TR((code+0xc68u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000c69:{NFSU2_TR((code+0xc69u));
u8 U[4];
w4(U+0,u32(code+0xc6eu));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720fd1u);
}
B20000c6e:L20000c6e:{c.instructions+=4;NFSU2_TR((code+0xc6eu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000c71:{NFSU2_TR((code+0xc71u));
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
B20000c74:{NFSU2_TR((code+0xc74u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000c75:{NFSU2_TR((code+0xc75u));
u8 U[4];
w4(U+0,u32(code+0xc7au));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720684u);
}
B20000c7a:L20000c7a:{c.instructions+=16;NFSU2_TR((code+0xc7au));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000c7d:{NFSU2_TR((code+0xc7du));
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
B20000c80:{NFSU2_TR((code+0xc80u));
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B20000c82:{NFSU2_TR((code+0xc82u));
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
B20000c85:{NFSU2_TR((code+0xc85u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x528ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000c8b:{NFSU2_TR((code+0xc8bu));
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
B20000c8e:{NFSU2_TR((code+0xc8eu));
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B20000c90:{NFSU2_TR((code+0xc90u));
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
B20000c94:{NFSU2_TR((code+0xc94u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x504ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000c9a:{NFSU2_TR((code+0xc9au));
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
B20000c9d:{NFSU2_TR((code+0xc9du));
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B20000c9f:{NFSU2_TR((code+0xc9fu));
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
B20000ca2:{NFSU2_TR((code+0xca2u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
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
EXIT(0x720ff8u);
}
B20000cae:L20000cae:{c.instructions+=4;NFSU2_TR((code+0xcaeu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000cb1:{NFSU2_TR((code+0xcb1u));
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
B20000cb4:{NFSU2_TR((code+0xcb4u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000cb5:{NFSU2_TR((code+0xcb5u));
u8 U[4];
w4(U+0,u32(code+0xcbau));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720ff8u);
}
B20000cba:L20000cba:{c.instructions+=6;NFSU2_TR((code+0xcbau));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000cbd:{NFSU2_TR((code+0xcbdu));
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
B20000cc0:{NFSU2_TR((code+0xcc0u));
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B20000cc2:{NFSU2_TR((code+0xcc2u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B20000cc5:{NFSU2_TR((code+0xcc5u));
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
B20000cc7:{NFSU2_TR((code+0xcc7u));
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L20000ccb;}}
}
B20000cc9:L20000cc9:{c.instructions+=1;NFSU2_TR((code+0xcc9u));
__builtin_memmove((R+0),(R+4),4);
}
B20000ccb:L20000ccb:{c.instructions+=4;NFSU2_TR((code+0xccbu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000cce:{NFSU2_TR((code+0xcceu));
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
B20000cd1:{NFSU2_TR((code+0xcd1u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000cd2:{NFSU2_TR((code+0xcd2u));
u8 U[4];
w4(U+0,u32(code+0xcd7u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720ff8u);
}
B20000cd7:L20000cd7:{c.instructions+=4;NFSU2_TR((code+0xcd7u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000cda:{NFSU2_TR((code+0xcdau));
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
B20000cdd:{NFSU2_TR((code+0xcddu));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000cde:{NFSU2_TR((code+0xcdeu));
u8 U[4];
w4(U+0,u32(code+0xce3u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720fd1u);
}
B20000ce3:L20000ce3:{c.instructions+=4;NFSU2_TR((code+0xce3u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000ce6:{NFSU2_TR((code+0xce6u));
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
B20000ce9:{NFSU2_TR((code+0xce9u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000cea:{NFSU2_TR((code+0xceau));
u8 U[4];
w4(U+0,u32(code+0xcefu));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720684u);
}
B20000cef:L20000cef:{c.instructions+=12;NFSU2_TR((code+0xcefu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000cf2:{NFSU2_TR((code+0xcf2u));
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
B20000cf5:{NFSU2_TR((code+0xcf5u));
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B20000cf7:{NFSU2_TR((code+0xcf7u));
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
B20000cfa:{NFSU2_TR((code+0xcfau));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x388ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000d00:{NFSU2_TR((code+0xd00u));
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
B20000d03:{NFSU2_TR((code+0xd03u));
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B20000d05:{NFSU2_TR((code+0xd05u));
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
B20000d09:{NFSU2_TR((code+0xd09u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000d0c:{NFSU2_TR((code+0xd0cu));
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
B20000d0f:{NFSU2_TR((code+0xd0fu));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000d10:{NFSU2_TR((code+0xd10u));
u8 U[4];
w4(U+0,u32(code+0xd15u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x7207bfu);
}
B20000d15:L20000d15:{c.instructions+=10;NFSU2_TR((code+0xd15u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000d18:{NFSU2_TR((code+0xd18u));
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
B20000d1b:{NFSU2_TR((code+0xd1bu));
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B20000d1d:{NFSU2_TR((code+0xd1du));
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
B20000d21:{NFSU2_TR((code+0xd21u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x354ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000d27:{NFSU2_TR((code+0xd27u));
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
B20000d2a:{NFSU2_TR((code+0xd2au));
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B20000d2c:{NFSU2_TR((code+0xd2cu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B20000d2f:{NFSU2_TR((code+0xd2fu));
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
B20000d31:{NFSU2_TR((code+0xd31u));
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L20000d35;}}
}
B20000d33:L20000d33:{c.instructions+=1;NFSU2_TR((code+0xd33u));
__builtin_memmove((R+0),(R+4),4);
}
B20000d35:L20000d35:{c.instructions+=8;NFSU2_TR((code+0xd35u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x36cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000d3b:{NFSU2_TR((code+0xd3bu));
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
B20000d3e:{NFSU2_TR((code+0xd3eu));
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B20000d40:{NFSU2_TR((code+0xd40u));
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
B20000d43:{NFSU2_TR((code+0xd43u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000d46:{NFSU2_TR((code+0xd46u));
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
B20000d49:{NFSU2_TR((code+0xd49u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000d4a:{NFSU2_TR((code+0xd4au));
u8 U[4];
w4(U+0,u32(code+0xd4fu));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720ff8u);
}
B20000d4f:L20000d4f:{c.instructions+=6;NFSU2_TR((code+0xd4fu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000d52:{NFSU2_TR((code+0xd52u));
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
B20000d55:{NFSU2_TR((code+0xd55u));
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B20000d57:{NFSU2_TR((code+0xd57u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B20000d5a:{NFSU2_TR((code+0xd5au));
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
B20000d5c:{NFSU2_TR((code+0xd5cu));
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L20000d60;}}
}
B20000d5e:L20000d5e:{c.instructions+=1;NFSU2_TR((code+0xd5eu));
__builtin_memmove((R+0),(R+4),4);
}
B20000d60:L20000d60:{c.instructions+=4;NFSU2_TR((code+0xd60u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000d63:{NFSU2_TR((code+0xd63u));
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
B20000d66:{NFSU2_TR((code+0xd66u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000d67:{NFSU2_TR((code+0xd67u));
u8 U[4];
w4(U+0,u32(code+0xd6cu));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720ff8u);
}
B20000d6c:L20000d6c:{c.instructions+=4;NFSU2_TR((code+0xd6cu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000d6f:{NFSU2_TR((code+0xd6fu));
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
B20000d72:{NFSU2_TR((code+0xd72u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000d73:{NFSU2_TR((code+0xd73u));
u8 U[4];
w4(U+0,u32(code+0xd78u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720fd1u);
}
B20000d78:L20000d78:{c.instructions+=4;NFSU2_TR((code+0xd78u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000d7b:{NFSU2_TR((code+0xd7bu));
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
B20000d7e:{NFSU2_TR((code+0xd7eu));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000d7f:{NFSU2_TR((code+0xd7fu));
u8 U[4];
w4(U+0,u32(code+0xd84u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720684u);
}
B20000d84:L20000d84:{c.instructions+=12;NFSU2_TR((code+0xd84u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000d87:{NFSU2_TR((code+0xd87u));
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
B20000d8a:{NFSU2_TR((code+0xd8au));
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B20000d8c:{NFSU2_TR((code+0xd8cu));
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
B20000d8f:{NFSU2_TR((code+0xd8fu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1dcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000d95:{NFSU2_TR((code+0xd95u));
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
B20000d98:{NFSU2_TR((code+0xd98u));
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B20000d9a:{NFSU2_TR((code+0xd9au));
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
B20000d9e:{NFSU2_TR((code+0xd9eu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000da1:{NFSU2_TR((code+0xda1u));
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
B20000da4:{NFSU2_TR((code+0xda4u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000da5:{NFSU2_TR((code+0xda5u));
u8 U[4];
w4(U+0,u32(code+0xdaau));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x7207bfu);
}
B20000daa:L20000daa:{c.instructions+=10;NFSU2_TR((code+0xdaau));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000dad:{NFSU2_TR((code+0xdadu));
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
B20000db0:{NFSU2_TR((code+0xdb0u));
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B20000db2:{NFSU2_TR((code+0xdb2u));
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
B20000db5:{NFSU2_TR((code+0xdb5u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000db8:{NFSU2_TR((code+0xdb8u));
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
B20000dbb:{NFSU2_TR((code+0xdbbu));
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B20000dbd:{NFSU2_TR((code+0xdbdu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B20000dc0:{NFSU2_TR((code+0xdc0u));
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
B20000dc2:{NFSU2_TR((code+0xdc2u));
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L20000dc6;}}
}
B20000dc4:L20000dc4:{c.instructions+=1;NFSU2_TR((code+0xdc4u));
__builtin_memmove((R+0),(R+4),4);
}
B20000dc6:L20000dc6:{c.instructions+=4;NFSU2_TR((code+0xdc6u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000dcc:{NFSU2_TR((code+0xdccu));
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
B20000dcf:{NFSU2_TR((code+0xdcfu));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000dd0:{NFSU2_TR((code+0xdd0u));
u8 U[4];
w4(U+0,u32(code+0xdd5u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720fd1u);
}
B20000dd5:L20000dd5:{c.instructions+=8;NFSU2_TR((code+0xdd5u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000dd8:{NFSU2_TR((code+0xdd8u));
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
B20000ddb:{NFSU2_TR((code+0xddbu));
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B20000ddd:{NFSU2_TR((code+0xdddu));
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
B20000de0:{NFSU2_TR((code+0xde0u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000de3:{NFSU2_TR((code+0xde3u));
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
B20000de6:{NFSU2_TR((code+0xde6u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000de7:{NFSU2_TR((code+0xde7u));
u8 U[4];
w4(U+0,u32(code+0xdecu));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x7207bfu);
}
B20000dec:L20000dec:{c.instructions+=10;NFSU2_TR((code+0xdecu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000def:{NFSU2_TR((code+0xdefu));
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
B20000df2:{NFSU2_TR((code+0xdf2u));
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B20000df4:{NFSU2_TR((code+0xdf4u));
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
B20000df7:{NFSU2_TR((code+0xdf7u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000dfa:{NFSU2_TR((code+0xdfau));
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
B20000dfd:{NFSU2_TR((code+0xdfdu));
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B20000dff:{NFSU2_TR((code+0xdffu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B20000e02:{NFSU2_TR((code+0xe02u));
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
B20000e04:{NFSU2_TR((code+0xe04u));
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L20000e08;}}
}
B20000e06:L20000e06:{c.instructions+=1;NFSU2_TR((code+0xe06u));
__builtin_memmove((R+0),(R+4),4);
}
B20000e08:L20000e08:{c.instructions+=4;NFSU2_TR((code+0xe08u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000e0b:{NFSU2_TR((code+0xe0bu));
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
B20000e0e:{NFSU2_TR((code+0xe0eu));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000e0f:{NFSU2_TR((code+0xe0fu));
u8 U[4];
w4(U+0,u32(code+0xe14u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720684u);
}
B20000e14:L20000e14:{c.instructions+=4;NFSU2_TR((code+0xe14u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000e17:{NFSU2_TR((code+0xe17u));
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
B20000e1a:{NFSU2_TR((code+0xe1au));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000e1b:{NFSU2_TR((code+0xe1bu));
u8 U[4];
w4(U+0,u32(code+0xe20u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x7204f3u);
}
B20000e20:L20000e20:{c.instructions+=4;NFSU2_TR((code+0xe20u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000e23:{NFSU2_TR((code+0xe23u));
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
B20000e26:{NFSU2_TR((code+0xe26u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000e27:{NFSU2_TR((code+0xe27u));
u8 U[4];
w4(U+0,u32(code+0xe2cu));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720767u);
}
B20000e2c:L20000e2c:{c.instructions+=4;NFSU2_TR((code+0xe2cu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000e2f:{NFSU2_TR((code+0xe2fu));
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
B20000e32:{NFSU2_TR((code+0xe32u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000e33:{NFSU2_TR((code+0xe33u));
u8 U[4];
w4(U+0,u32(code+0xe38u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720767u);
}
B20000e38:L20000e38:{c.instructions+=5;NFSU2_TR((code+0xe38u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000e3b:{NFSU2_TR((code+0xe3bu));
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
B20000e3e:{NFSU2_TR((code+0xe3eu));
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
B20000e41:{NFSU2_TR((code+0xe41u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000e42:{NFSU2_TR((code+0xe42u));
u8 U[4];
w4(U+0,u32(code+0xe47u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720767u);
}
B20000e47:L20000e47:{c.instructions+=5;NFSU2_TR((code+0xe47u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000e4a:{NFSU2_TR((code+0xe4au));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000e4d:{NFSU2_TR((code+0xe4du));
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
B20000e50:{NFSU2_TR((code+0xe50u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000e51:{NFSU2_TR((code+0xe51u));
u8 U[4];
w4(U+0,u32(code+0xe56u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x7204f3u);
}
B20000e56:L20000e56:{c.instructions+=8;NFSU2_TR((code+0xe56u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000e59:{NFSU2_TR((code+0xe59u));
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
B20000e5c:{NFSU2_TR((code+0xe5cu));
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B20000e5e:{NFSU2_TR((code+0xe5eu));
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
B20000e61:{NFSU2_TR((code+0xe61u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000e64:{NFSU2_TR((code+0xe64u));
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
B20000e67:{NFSU2_TR((code+0xe67u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000e68:{NFSU2_TR((code+0xe68u));
u8 U[4];
w4(U+0,u32(code+0xe6du));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720684u);
}
B20000e6d:L20000e6d:{c.instructions+=4;NFSU2_TR((code+0xe6du));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000e70:{NFSU2_TR((code+0xe70u));
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
B20000e73:{NFSU2_TR((code+0xe73u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000e74:{NFSU2_TR((code+0xe74u));
u8 U[4];
w4(U+0,u32(code+0xe79u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720f32u);
}
B20000e79:L20000e79:{c.instructions+=5;NFSU2_TR((code+0xe79u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000e7c:{NFSU2_TR((code+0xe7cu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000e7f:{NFSU2_TR((code+0xe7fu));
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
B20000e82:{NFSU2_TR((code+0xe82u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000e83:{NFSU2_TR((code+0xe83u));
u8 U[4];
w4(U+0,u32(code+0xe88u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x7204f3u);
}
B20000e88:L20000e88:{c.instructions+=4;NFSU2_TR((code+0xe88u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000e8b:{NFSU2_TR((code+0xe8bu));
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
B20000e8e:{NFSU2_TR((code+0xe8eu));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000e8f:{NFSU2_TR((code+0xe8fu));
u8 U[4];
w4(U+0,u32(code+0xe94u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720767u);
}
B20000e94:L20000e94:{c.instructions+=4;NFSU2_TR((code+0xe94u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000e97:{NFSU2_TR((code+0xe97u));
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
B20000e9a:{NFSU2_TR((code+0xe9au));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000e9b:{NFSU2_TR((code+0xe9bu));
u8 U[4];
w4(U+0,u32(code+0xea0u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720d57u);
}
B20000ea0:L20000ea0:{c.instructions+=3;NFSU2_TR((code+0xea0u));
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
B20000ea3:{NFSU2_TR((code+0xea3u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000ea4:{NFSU2_TR((code+0xea4u));
u8 U[4];
w4(U+0,u32(code+0xea9u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720fd1u);
}
B20000ea9:L20000ea9:{c.instructions+=5;NFSU2_TR((code+0xea9u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000eac:{NFSU2_TR((code+0xeacu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000eaf:{NFSU2_TR((code+0xeafu));
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
B20000eb2:{NFSU2_TR((code+0xeb2u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000eb3:{NFSU2_TR((code+0xeb3u));
u8 U[4];
w4(U+0,u32(code+0xeb8u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720ff8u);
}
B20000eb8:L20000eb8:{c.instructions+=12;NFSU2_TR((code+0xeb8u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000ebb:{NFSU2_TR((code+0xebbu));
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
B20000ebe:{NFSU2_TR((code+0xebeu));
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B20000ec0:{NFSU2_TR((code+0xec0u));
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
B20000ec3:{NFSU2_TR((code+0xec3u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000ec6:{NFSU2_TR((code+0xec6u));
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
B20000ec9:{NFSU2_TR((code+0xec9u));
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B20000ecb:{NFSU2_TR((code+0xecbu));
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
B20000ecf:{NFSU2_TR((code+0xecfu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000ed2:{NFSU2_TR((code+0xed2u));
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
B20000ed5:{NFSU2_TR((code+0xed5u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000ed6:{NFSU2_TR((code+0xed6u));
u8 U[4];
w4(U+0,u32(code+0xedbu));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x7207bfu);
}
B20000edb:L20000edb:{c.instructions+=6;NFSU2_TR((code+0xedbu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000ede:{NFSU2_TR((code+0xedeu));
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
B20000ee1:{NFSU2_TR((code+0xee1u));
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B20000ee3:{NFSU2_TR((code+0xee3u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B20000ee6:{NFSU2_TR((code+0xee6u));
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
B20000ee8:{NFSU2_TR((code+0xee8u));
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L20000eec;}}
}
B20000eea:L20000eea:{c.instructions+=1;NFSU2_TR((code+0xeeau));
__builtin_memmove((R+0),(R+4),4);
}
B20000eec:L20000eec:{c.instructions+=4;NFSU2_TR((code+0xeecu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2bcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000ef2:{NFSU2_TR((code+0xef2u));
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
B20000ef5:{NFSU2_TR((code+0xef5u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000ef6:{NFSU2_TR((code+0xef6u));
u8 U[4];
w4(U+0,u32(code+0xefbu));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720fd1u);
}
B20000efb:L20000efb:{c.instructions+=9;NFSU2_TR((code+0xefbu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000efe:{NFSU2_TR((code+0xefeu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000f01:{NFSU2_TR((code+0xf01u));
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
B20000f04:{NFSU2_TR((code+0xf04u));
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B20000f06:{NFSU2_TR((code+0xf06u));
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
B20000f09:{NFSU2_TR((code+0xf09u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000f0c:{NFSU2_TR((code+0xf0cu));
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
B20000f0f:{NFSU2_TR((code+0xf0fu));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000f10:{NFSU2_TR((code+0xf10u));
u8 U[4];
w4(U+0,u32(code+0xf15u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720ff8u);
}
B20000f15:L20000f15:{c.instructions+=8;NFSU2_TR((code+0xf15u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000f18:{NFSU2_TR((code+0xf18u));
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
B20000f1b:{NFSU2_TR((code+0xf1bu));
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B20000f1d:{NFSU2_TR((code+0xf1du));
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
B20000f21:{NFSU2_TR((code+0xf21u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000f24:{NFSU2_TR((code+0xf24u));
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
B20000f27:{NFSU2_TR((code+0xf27u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000f28:{NFSU2_TR((code+0xf28u));
u8 U[4];
w4(U+0,u32(code+0xf2du));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x7207bfu);
}
B20000f2d:L20000f2d:{c.instructions+=6;NFSU2_TR((code+0xf2du));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000f30:{NFSU2_TR((code+0xf30u));
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
B20000f33:{NFSU2_TR((code+0xf33u));
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B20000f35:{NFSU2_TR((code+0xf35u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B20000f38:{NFSU2_TR((code+0xf38u));
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
B20000f3a:{NFSU2_TR((code+0xf3au));
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L20000f3e;}}
}
B20000f3c:L20000f3c:{c.instructions+=1;NFSU2_TR((code+0xf3cu));
__builtin_memmove((R+0),(R+4),4);
}
B20000f3e:L20000f3e:{c.instructions+=4;NFSU2_TR((code+0xf3eu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000f41:{NFSU2_TR((code+0xf41u));
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
B20000f44:{NFSU2_TR((code+0xf44u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000f45:{NFSU2_TR((code+0xf45u));
u8 U[4];
w4(U+0,u32(code+0xf4au));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720684u);
}
B20000f4a:L20000f4a:{c.instructions+=4;NFSU2_TR((code+0xf4au));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000f4d:{NFSU2_TR((code+0xf4du));
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
B20000f50:{NFSU2_TR((code+0xf50u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000f51:{NFSU2_TR((code+0xf51u));
u8 U[4];
w4(U+0,u32(code+0xf56u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x7204f3u);
}
B20000f56:L20000f56:{c.instructions+=4;NFSU2_TR((code+0xf56u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000f59:{NFSU2_TR((code+0xf59u));
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
B20000f5c:{NFSU2_TR((code+0xf5cu));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000f5d:{NFSU2_TR((code+0xf5du));
u8 U[4];
w4(U+0,u32(code+0xf62u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720767u);
}
B20000f62:L20000f62:{c.instructions+=4;NFSU2_TR((code+0xf62u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000f65:{NFSU2_TR((code+0xf65u));
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
B20000f68:{NFSU2_TR((code+0xf68u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000f69:{NFSU2_TR((code+0xf69u));
u8 U[4];
w4(U+0,u32(code+0xf6eu));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720767u);
}
B20000f6e:L20000f6e:{c.instructions+=4;NFSU2_TR((code+0xf6eu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000f71:{NFSU2_TR((code+0xf71u));
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
B20000f74:{NFSU2_TR((code+0xf74u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000f75:{NFSU2_TR((code+0xf75u));
u8 U[4];
w4(U+0,u32(code+0xf7au));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720767u);
}
B20000f7a:L20000f7a:{c.instructions+=5;NFSU2_TR((code+0xf7au));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000f7d:{NFSU2_TR((code+0xf7du));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000f80:{NFSU2_TR((code+0xf80u));
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
B20000f83:{NFSU2_TR((code+0xf83u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000f84:{NFSU2_TR((code+0xf84u));
u8 U[4];
w4(U+0,u32(code+0xf89u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x7204f3u);
}
B20000f89:L20000f89:{c.instructions+=8;NFSU2_TR((code+0xf89u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000f8c:{NFSU2_TR((code+0xf8cu));
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
B20000f8f:{NFSU2_TR((code+0xf8fu));
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B20000f91:{NFSU2_TR((code+0xf91u));
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
B20000f94:{NFSU2_TR((code+0xf94u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000f97:{NFSU2_TR((code+0xf97u));
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
B20000f9a:{NFSU2_TR((code+0xf9au));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000f9b:{NFSU2_TR((code+0xf9bu));
u8 U[4];
w4(U+0,u32(code+0xfa0u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720684u);
}
B20000fa0:L20000fa0:{c.instructions+=4;NFSU2_TR((code+0xfa0u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000fa3:{NFSU2_TR((code+0xfa3u));
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
B20000fa6:{NFSU2_TR((code+0xfa6u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000fa7:{NFSU2_TR((code+0xfa7u));
u8 U[4];
w4(U+0,u32(code+0xfacu));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720f32u);
}
B20000fac:L20000fac:{c.instructions+=5;NFSU2_TR((code+0xfacu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000faf:{NFSU2_TR((code+0xfafu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000fb2:{NFSU2_TR((code+0xfb2u));
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
B20000fb5:{NFSU2_TR((code+0xfb5u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000fb6:{NFSU2_TR((code+0xfb6u));
u8 U[4];
w4(U+0,u32(code+0xfbbu));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720767u);
}
B20000fbb:L20000fbb:{c.instructions+=4;NFSU2_TR((code+0xfbbu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000fbe:{NFSU2_TR((code+0xfbeu));
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
B20000fc1:{NFSU2_TR((code+0xfc1u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000fc2:{NFSU2_TR((code+0xfc2u));
u8 U[4];
w4(U+0,u32(code+0xfc7u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x7204f3u);
}
B20000fc7:L20000fc7:{c.instructions+=4;NFSU2_TR((code+0xfc7u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000fca:{NFSU2_TR((code+0xfcau));
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
B20000fcd:{NFSU2_TR((code+0xfcdu));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000fce:{NFSU2_TR((code+0xfceu));
u8 U[4];
w4(U+0,u32(code+0xfd3u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720d57u);
}
B20000fd3:L20000fd3:{c.instructions+=3;NFSU2_TR((code+0xfd3u));
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
B20000fd6:{NFSU2_TR((code+0xfd6u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000fd7:{NFSU2_TR((code+0xfd7u));
u8 U[4];
w4(U+0,u32(code+0xfdcu));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720fd1u);
}
B20000fdc:L20000fdc:{c.instructions+=8;NFSU2_TR((code+0xfdcu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000fdf:{NFSU2_TR((code+0xfdfu));
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
B20000fe2:{NFSU2_TR((code+0xfe2u));
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B20000fe4:{NFSU2_TR((code+0xfe4u));
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
B20000fe7:{NFSU2_TR((code+0xfe7u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000fea:{NFSU2_TR((code+0xfeau));
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
B20000fed:{NFSU2_TR((code+0xfedu));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000fee:{NFSU2_TR((code+0xfeeu));
u8 U[4];
w4(U+0,u32(code+0xff3u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x7207bfu);
}
B20000ff3:L20000ff3:{c.instructions+=10;NFSU2_TR((code+0xff3u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000ff6:{NFSU2_TR((code+0xff6u));
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
B20000ff9:{NFSU2_TR((code+0xff9u));
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B20000ffb:{NFSU2_TR((code+0xffbu));
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
B20000ffe:{NFSU2_TR((code+0xffeu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20001001:{NFSU2_TR((code+0x1001u));
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
B20001004:{NFSU2_TR((code+0x1004u));
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B20001006:{NFSU2_TR((code+0x1006u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B20001009:{NFSU2_TR((code+0x1009u));
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
B2000100b:{NFSU2_TR((code+0x100bu));
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L2000100f;}}
}
B2000100d:L2000100d:{c.instructions+=1;NFSU2_TR((code+0x100du));
__builtin_memmove((R+0),(R+4),4);
}
B2000100f:L2000100f:{c.instructions+=4;NFSU2_TR((code+0x100fu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20001012:{NFSU2_TR((code+0x1012u));
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
B20001015:{NFSU2_TR((code+0x1015u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20001016:{NFSU2_TR((code+0x1016u));
u8 U[4];
w4(U+0,u32(code+0x101bu));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720684u);
}
B2000101b:L2000101b:{c.instructions+=4;NFSU2_TR((code+0x101bu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B2000101e:{NFSU2_TR((code+0x101eu));
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
B20001021:{NFSU2_TR((code+0x1021u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20001022:{NFSU2_TR((code+0x1022u));
u8 U[4];
w4(U+0,u32(code+0x1027u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x7204f3u);
}
B20001027:L20001027:{c.instructions+=4;NFSU2_TR((code+0x1027u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B2000102a:{NFSU2_TR((code+0x102au));
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
B2000102d:{NFSU2_TR((code+0x102du));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B2000102e:{NFSU2_TR((code+0x102eu));
u8 U[4];
w4(U+0,u32(code+0x1033u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720767u);
}
B20001033:L20001033:{c.instructions+=4;NFSU2_TR((code+0x1033u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20001036:{NFSU2_TR((code+0x1036u));
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
B20001039:{NFSU2_TR((code+0x1039u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B2000103a:{NFSU2_TR((code+0x103au));
u8 U[4];
w4(U+0,u32(code+0x103fu));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720767u);
}
B2000103f:L2000103f:{c.instructions+=4;NFSU2_TR((code+0x103fu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20001042:{NFSU2_TR((code+0x1042u));
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
B20001045:{NFSU2_TR((code+0x1045u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20001046:{NFSU2_TR((code+0x1046u));
u8 U[4];
w4(U+0,u32(code+0x104bu));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720767u);
}
B2000104b:L2000104b:{c.instructions+=6;NFSU2_TR((code+0x104bu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B2000104e:{NFSU2_TR((code+0x104eu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20001051:{NFSU2_TR((code+0x1051u));
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
B20001054:{NFSU2_TR((code+0x1054u));
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
B20001057:{NFSU2_TR((code+0x1057u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20001058:{NFSU2_TR((code+0x1058u));
u8 U[4];
w4(U+0,u32(code+0x105du));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x7204f3u);
}
B2000105d:L2000105d:{c.instructions+=8;NFSU2_TR((code+0x105du));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20001060:{NFSU2_TR((code+0x1060u));
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
B20001063:{NFSU2_TR((code+0x1063u));
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B20001065:{NFSU2_TR((code+0x1065u));
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
B20001068:{NFSU2_TR((code+0x1068u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B2000106b:{NFSU2_TR((code+0x106bu));
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
B2000106e:{NFSU2_TR((code+0x106eu));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B2000106f:{NFSU2_TR((code+0x106fu));
u8 U[4];
w4(U+0,u32(code+0x1074u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720684u);
}
B20001074:L20001074:{c.instructions+=4;NFSU2_TR((code+0x1074u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20001077:{NFSU2_TR((code+0x1077u));
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
B2000107a:{NFSU2_TR((code+0x107au));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B2000107b:{NFSU2_TR((code+0x107bu));
u8 U[4];
w4(U+0,u32(code+0x1080u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720f32u);
}
B20001080:L20001080:{c.instructions+=5;NFSU2_TR((code+0x1080u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20001083:{NFSU2_TR((code+0x1083u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20001086:{NFSU2_TR((code+0x1086u));
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
B20001089:{NFSU2_TR((code+0x1089u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B2000108a:{NFSU2_TR((code+0x108au));
u8 U[4];
w4(U+0,u32(code+0x108fu));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x7204f3u);
}
B2000108f:L2000108f:{c.instructions+=4;NFSU2_TR((code+0x108fu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20001092:{NFSU2_TR((code+0x1092u));
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
B20001095:{NFSU2_TR((code+0x1095u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20001096:{NFSU2_TR((code+0x1096u));
u8 U[4];
w4(U+0,u32(code+0x109bu));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720767u);
}
B2000109b:L2000109b:{c.instructions+=4;NFSU2_TR((code+0x109bu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B2000109e:{NFSU2_TR((code+0x109eu));
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
B200010a1:{NFSU2_TR((code+0x10a1u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B200010a2:{NFSU2_TR((code+0x10a2u));
u8 U[4];
w4(U+0,u32(code+0x10a7u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720d57u);
}
B200010a7:L200010a7:{c.instructions+=3;NFSU2_TR((code+0x10a7u));
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
B200010aa:{NFSU2_TR((code+0x10aau));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B200010ab:{NFSU2_TR((code+0x10abu));
u8 U[4];
w4(U+0,u32(code+0x10b0u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720fd1u);
}
B200010b0:L200010b0:{c.instructions+=8;NFSU2_TR((code+0x10b0u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200010b3:{NFSU2_TR((code+0x10b3u));
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
B200010b6:{NFSU2_TR((code+0x10b6u));
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B200010b8:{NFSU2_TR((code+0x10b8u));
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
B200010bb:{NFSU2_TR((code+0x10bbu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200010be:{NFSU2_TR((code+0x10beu));
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
B200010c1:{NFSU2_TR((code+0x10c1u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B200010c2:{NFSU2_TR((code+0x10c2u));
u8 U[4];
w4(U+0,u32(code+0x10c7u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x7207bfu);
}
B200010c7:L200010c7:{c.instructions+=10;NFSU2_TR((code+0x10c7u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200010ca:{NFSU2_TR((code+0x10cau));
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
B200010cd:{NFSU2_TR((code+0x10cdu));
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B200010cf:{NFSU2_TR((code+0x10cfu));
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
B200010d2:{NFSU2_TR((code+0x10d2u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200010d5:{NFSU2_TR((code+0x10d5u));
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
B200010d8:{NFSU2_TR((code+0x10d8u));
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B200010da:{NFSU2_TR((code+0x10dau));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B200010dd:{NFSU2_TR((code+0x10ddu));
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
B200010df:{NFSU2_TR((code+0x10dfu));
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L200010e3;}}
}
B200010e1:L200010e1:{c.instructions+=1;NFSU2_TR((code+0x10e1u));
__builtin_memmove((R+0),(R+4),4);
}
B200010e3:L200010e3:{c.instructions+=4;NFSU2_TR((code+0x10e3u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200010e6:{NFSU2_TR((code+0x10e6u));
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
B200010e9:{NFSU2_TR((code+0x10e9u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B200010ea:{NFSU2_TR((code+0x10eau));
u8 U[4];
w4(U+0,u32(code+0x10efu));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720684u);
}
B200010ef:L200010ef:{c.instructions+=4;NFSU2_TR((code+0x10efu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200010f2:{NFSU2_TR((code+0x10f2u));
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
B200010f5:{NFSU2_TR((code+0x10f5u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B200010f6:{NFSU2_TR((code+0x10f6u));
u8 U[4];
w4(U+0,u32(code+0x10fbu));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x7204f3u);
}
B200010fb:L200010fb:{c.instructions+=4;NFSU2_TR((code+0x10fbu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200010fe:{NFSU2_TR((code+0x10feu));
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
B20001101:{NFSU2_TR((code+0x1101u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20001102:{NFSU2_TR((code+0x1102u));
u8 U[4];
w4(U+0,u32(code+0x1107u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720767u);
}
B20001107:L20001107:{c.instructions+=4;NFSU2_TR((code+0x1107u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B2000110a:{NFSU2_TR((code+0x110au));
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
B2000110d:{NFSU2_TR((code+0x110du));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B2000110e:{NFSU2_TR((code+0x110eu));
u8 U[4];
w4(U+0,u32(code+0x1113u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720767u);
}
B20001113:L20001113:{c.instructions+=4;NFSU2_TR((code+0x1113u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20001116:{NFSU2_TR((code+0x1116u));
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
B20001119:{NFSU2_TR((code+0x1119u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B2000111a:{NFSU2_TR((code+0x111au));
u8 U[4];
w4(U+0,u32(code+0x111fu));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720767u);
}
B2000111f:L2000111f:{c.instructions+=5;NFSU2_TR((code+0x111fu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20001122:{NFSU2_TR((code+0x1122u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20001125:{NFSU2_TR((code+0x1125u));
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
EXIT(0x7204f3u);
}
B2000112e:L2000112e:{c.instructions+=8;NFSU2_TR((code+0x112eu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20001131:{NFSU2_TR((code+0x1131u));
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
B20001134:{NFSU2_TR((code+0x1134u));
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B20001136:{NFSU2_TR((code+0x1136u));
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
B20001139:{NFSU2_TR((code+0x1139u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B2000113c:{NFSU2_TR((code+0x113cu));
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
B2000113f:{NFSU2_TR((code+0x113fu));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20001140:{NFSU2_TR((code+0x1140u));
u8 U[4];
w4(U+0,u32(code+0x1145u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720684u);
}
B20001145:L20001145:{c.instructions+=4;NFSU2_TR((code+0x1145u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20001148:{NFSU2_TR((code+0x1148u));
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
B2000114b:{NFSU2_TR((code+0x114bu));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B2000114c:{NFSU2_TR((code+0x114cu));
u8 U[4];
w4(U+0,u32(code+0x1151u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720f32u);
}
B20001151:L20001151:{c.instructions+=5;NFSU2_TR((code+0x1151u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20001154:{NFSU2_TR((code+0x1154u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20001157:{NFSU2_TR((code+0x1157u));
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
EXIT(0x7204f3u);
}
B20001160:L20001160:{c.instructions+=4;NFSU2_TR((code+0x1160u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20001163:{NFSU2_TR((code+0x1163u));
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
B20001166:{NFSU2_TR((code+0x1166u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20001167:{NFSU2_TR((code+0x1167u));
u8 U[4];
w4(U+0,u32(code+0x116cu));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720767u);
}
B2000116c:L2000116c:{c.instructions+=4;NFSU2_TR((code+0x116cu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B2000116f:{NFSU2_TR((code+0x116fu));
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
B20001172:{NFSU2_TR((code+0x1172u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20001173:{NFSU2_TR((code+0x1173u));
u8 U[4];
w4(U+0,u32(code+0x1178u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720d57u);
}
B20001178:L20001178:{c.instructions+=3;NFSU2_TR((code+0x1178u));
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
B2000117b:{NFSU2_TR((code+0x117bu));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B2000117c:{NFSU2_TR((code+0x117cu));
u8 U[4];
w4(U+0,u32(code+0x1181u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x71ff15u);
}
B20001181:L20001181:{c.instructions+=4;NFSU2_TR((code+0x1181u));
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
B20001184:{NFSU2_TR((code+0x1184u));
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
B20001187:{NFSU2_TR((code+0x1187u));
u8 U[4];
w4(U+0,u32(0x0ull));
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B20001188:{NFSU2_TR((code+0x1188u));
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
u32 audio_53794015eb0a(Cpu& c,u32 code){return audio_53794015eb0a_body(c.regs.data(),c,code);}
}
