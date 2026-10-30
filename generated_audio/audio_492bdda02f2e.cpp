#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
#define TAIL_STATIC(T,PG) EXIT(T)
#define TAIL_DYNAMIC(T) EXIT(T)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
// code range sha256 492bdda02f2ec3e87b6e224886c2c84643a397e9d1d2c67bcb57c52f612bd8eb, 1692 bytes, 261 instructions
__attribute__((noinline)) static u32 audio_492bdda02f2e_body(u8* __restrict R,Cpu& c,u32 code){
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
case 0x1d:c.instructions+=15;goto B2000001d;
case 0x20:c.instructions+=14;goto B20000020;
case 0x26:c.instructions+=13;goto B20000026;
case 0x29:c.instructions+=12;goto B20000029;
case 0x2c:c.instructions+=11;goto B2000002c;
case 0x32:c.instructions+=10;goto B20000032;
case 0x38:c.instructions+=9;goto B20000038;
case 0x3b:c.instructions+=8;goto B2000003b;
case 0x41:c.instructions+=7;goto B20000041;
case 0x44:c.instructions+=6;goto B20000044;
case 0x47:c.instructions+=5;goto B20000047;
case 0x4b:c.instructions+=4;goto B2000004b;
case 0x4e:c.instructions+=3;goto B2000004e;
case 0x51:c.instructions+=2;goto B20000051;
case 0x52:c.instructions+=1;goto B20000052;
case 0x57:goto L20000057;
case 0x5d:c.instructions+=3;goto B2000005d;
case 0x60:c.instructions+=2;goto B20000060;
case 0x61:c.instructions+=1;goto B20000061;
case 0x66:goto L20000066;
case 0x6c:c.instructions+=3;goto B2000006c;
case 0x6f:c.instructions+=2;goto B2000006f;
case 0x70:c.instructions+=1;goto B20000070;
case 0x75:goto L20000075;
case 0x78:c.instructions+=3;goto B20000078;
case 0x7b:c.instructions+=2;goto B2000007b;
case 0x7c:c.instructions+=1;goto B2000007c;
case 0x81:goto L20000081;
case 0x84:c.instructions+=4;goto B20000084;
case 0x87:c.instructions+=3;goto B20000087;
case 0x8a:c.instructions+=2;goto B2000008a;
case 0x8b:c.instructions+=1;goto B2000008b;
case 0x90:goto L20000090;
case 0x93:c.instructions+=3;goto B20000093;
case 0x96:c.instructions+=2;goto B20000096;
case 0x97:c.instructions+=1;goto B20000097;
case 0x9c:goto L2000009c;
case 0xa2:c.instructions+=3;goto B200000a2;
case 0xa5:c.instructions+=2;goto B200000a5;
case 0xa6:c.instructions+=1;goto B200000a6;
case 0xab:goto L200000ab;
case 0xb1:c.instructions+=3;goto B200000b1;
case 0xb4:c.instructions+=2;goto B200000b4;
case 0xb5:c.instructions+=1;goto B200000b5;
case 0xba:goto L200000ba;
case 0xbd:c.instructions+=8;goto B200000bd;
case 0xc0:c.instructions+=7;goto B200000c0;
case 0xc2:c.instructions+=6;goto B200000c2;
case 0xc5:c.instructions+=5;goto B200000c5;
case 0xcb:c.instructions+=4;goto B200000cb;
case 0xd1:c.instructions+=3;goto B200000d1;
case 0xd4:c.instructions+=2;goto B200000d4;
case 0xd5:c.instructions+=1;goto B200000d5;
case 0xda:goto L200000da;
case 0xdd:c.instructions+=3;goto B200000dd;
case 0xe0:c.instructions+=2;goto B200000e0;
case 0xe1:c.instructions+=1;goto B200000e1;
case 0xe6:goto L200000e6;
case 0xe9:c.instructions+=4;goto B200000e9;
case 0xec:c.instructions+=3;goto B200000ec;
case 0xef:c.instructions+=2;goto B200000ef;
case 0xf0:c.instructions+=1;goto B200000f0;
case 0xf5:goto L200000f5;
case 0xfb:c.instructions+=3;goto B200000fb;
case 0xfe:c.instructions+=2;goto B200000fe;
case 0xff:c.instructions+=1;goto B200000ff;
case 0x104:goto L20000104;
case 0x107:c.instructions+=3;goto B20000107;
case 0x10a:c.instructions+=2;goto B2000010a;
case 0x10b:c.instructions+=1;goto B2000010b;
case 0x110:goto L20000110;
case 0x113:c.instructions+=3;goto B20000113;
case 0x116:c.instructions+=2;goto B20000116;
case 0x117:c.instructions+=1;goto B20000117;
case 0x11c:goto L2000011c;
case 0x11f:c.instructions+=3;goto B2000011f;
case 0x122:c.instructions+=2;goto B20000122;
case 0x123:c.instructions+=1;goto B20000123;
case 0x128:goto L20000128;
case 0x12b:c.instructions+=4;goto B2000012b;
case 0x12e:c.instructions+=3;goto B2000012e;
case 0x131:c.instructions+=2;goto B20000131;
case 0x132:c.instructions+=1;goto B20000132;
case 0x137:goto L20000137;
case 0x13d:c.instructions+=4;goto B2000013d;
case 0x140:c.instructions+=3;goto B20000140;
case 0x143:c.instructions+=2;goto B20000143;
case 0x144:c.instructions+=1;goto B20000144;
case 0x149:goto L20000149;
case 0x14f:c.instructions+=4;goto B2000014f;
case 0x152:c.instructions+=3;goto B20000152;
case 0x155:c.instructions+=2;goto B20000155;
case 0x156:c.instructions+=1;goto B20000156;
case 0x15b:goto L2000015b;
case 0x15e:c.instructions+=3;goto B2000015e;
case 0x161:c.instructions+=2;goto B20000161;
case 0x162:c.instructions+=1;goto B20000162;
case 0x167:goto L20000167;
case 0x16a:c.instructions+=7;goto B2000016a;
case 0x16d:c.instructions+=6;goto B2000016d;
case 0x16f:c.instructions+=5;goto B2000016f;
case 0x172:c.instructions+=4;goto B20000172;
case 0x175:c.instructions+=3;goto B20000175;
case 0x178:c.instructions+=2;goto B20000178;
case 0x179:c.instructions+=1;goto B20000179;
case 0x17e:goto L2000017e;
case 0x181:c.instructions+=3;goto B20000181;
case 0x184:c.instructions+=2;goto B20000184;
case 0x185:c.instructions+=1;goto B20000185;
case 0x18a:goto L2000018a;
case 0x190:c.instructions+=3;goto B20000190;
case 0x193:c.instructions+=2;goto B20000193;
case 0x194:c.instructions+=1;goto B20000194;
case 0x199:goto L20000199;
case 0x19f:c.instructions+=7;goto B2000019f;
case 0x1a2:c.instructions+=6;goto B200001a2;
case 0x1a4:c.instructions+=5;goto B200001a4;
case 0x1a7:c.instructions+=4;goto B200001a7;
case 0x1aa:c.instructions+=3;goto B200001aa;
case 0x1ad:c.instructions+=2;goto B200001ad;
case 0x1ae:c.instructions+=1;goto B200001ae;
case 0x1b3:goto L200001b3;
case 0x1b6:c.instructions+=2;goto B200001b6;
case 0x1b7:c.instructions+=1;goto B200001b7;
case 0x1bc:goto L200001bc;
case 0x1bf:c.instructions+=3;goto B200001bf;
case 0x1c2:c.instructions+=2;goto B200001c2;
case 0x1c3:c.instructions+=1;goto B200001c3;
case 0x1c4:goto L200001c4;
case 0x1c5:c.instructions+=3;goto B200001c5;
case 0x1c9:c.instructions+=2;goto B200001c9;
case 0x1ca:c.instructions+=1;goto B200001ca;
case 0x1cf:goto L200001cf;
case 0x1d5:c.instructions+=3;goto B200001d5;
case 0x1d8:c.instructions+=2;goto B200001d8;
case 0x1d9:c.instructions+=1;goto B200001d9;
case 0x1de:goto L200001de;
case 0x1e4:c.instructions+=17;goto B200001e4;
case 0x1ea:c.instructions+=16;goto B200001ea;
case 0x1f0:c.instructions+=15;goto B200001f0;
case 0x1f3:c.instructions+=14;goto B200001f3;
case 0x1f9:c.instructions+=13;goto B200001f9;
case 0x1ff:c.instructions+=12;goto B200001ff;
case 0x202:c.instructions+=11;goto B20000202;
case 0x208:c.instructions+=10;goto B20000208;
case 0x20b:c.instructions+=9;goto B2000020b;
case 0x20e:c.instructions+=8;goto B2000020e;
case 0x214:c.instructions+=7;goto B20000214;
case 0x217:c.instructions+=6;goto B20000217;
case 0x21a:c.instructions+=5;goto B2000021a;
case 0x21e:c.instructions+=4;goto B2000021e;
case 0x224:c.instructions+=3;goto B20000224;
case 0x227:c.instructions+=2;goto B20000227;
case 0x228:c.instructions+=1;goto B20000228;
case 0x22d:goto L2000022d;
case 0x230:c.instructions+=3;goto B20000230;
case 0x233:c.instructions+=2;goto B20000233;
case 0x234:c.instructions+=1;goto B20000234;
case 0x239:goto L20000239;
case 0x23c:c.instructions+=4;goto B2000023c;
case 0x242:c.instructions+=3;goto B20000242;
case 0x245:c.instructions+=2;goto B20000245;
case 0x246:c.instructions+=1;goto B20000246;
case 0x24b:goto L2000024b;
case 0x251:c.instructions+=3;goto B20000251;
case 0x254:c.instructions+=2;goto B20000254;
case 0x255:c.instructions+=1;goto B20000255;
case 0x25a:goto L2000025a;
case 0x260:c.instructions+=3;goto B20000260;
case 0x263:c.instructions+=2;goto B20000263;
case 0x264:c.instructions+=1;goto B20000264;
case 0x269:goto L20000269;
case 0x26f:c.instructions+=7;goto B2000026f;
case 0x275:c.instructions+=6;goto B20000275;
case 0x27b:c.instructions+=5;goto B2000027b;
case 0x281:c.instructions+=4;goto B20000281;
case 0x284:c.instructions+=3;goto B20000284;
case 0x287:c.instructions+=2;goto B20000287;
case 0x288:c.instructions+=1;goto B20000288;
case 0x28d:goto L2000028d;
case 0x293:c.instructions+=4;goto B20000293;
case 0x299:c.instructions+=3;goto B20000299;
case 0x29c:c.instructions+=2;goto B2000029c;
case 0x29d:c.instructions+=1;goto B2000029d;
case 0x2a2:goto L200002a2;
case 0x2a5:c.instructions+=3;goto B200002a5;
case 0x2a8:c.instructions+=2;goto B200002a8;
case 0x2a9:c.instructions+=1;goto B200002a9;
case 0x2ae:goto L200002ae;
case 0x2b1:c.instructions+=3;goto B200002b1;
case 0x2b4:c.instructions+=2;goto B200002b4;
case 0x2b5:c.instructions+=1;goto B200002b5;
case 0x2ba:goto L200002ba;
case 0x2bd:c.instructions+=7;goto B200002bd;
case 0x2c0:c.instructions+=6;goto B200002c0;
case 0x2c6:c.instructions+=5;goto B200002c6;
case 0x2c9:c.instructions+=4;goto B200002c9;
case 0x2cf:c.instructions+=3;goto B200002cf;
case 0x2d2:c.instructions+=2;goto B200002d2;
case 0x2d3:c.instructions+=1;goto B200002d3;
case 0x2d8:goto L200002d8;
case 0x2de:c.instructions+=8;goto B200002de;
case 0x2e1:c.instructions+=7;goto B200002e1;
case 0x2e3:c.instructions+=6;goto B200002e3;
case 0x2e6:c.instructions+=5;goto B200002e6;
case 0x2e9:c.instructions+=4;goto B200002e9;
case 0x2ec:c.instructions+=3;goto B200002ec;
case 0x2ef:c.instructions+=2;goto B200002ef;
case 0x2f0:c.instructions+=1;goto B200002f0;
case 0x2f5:goto L200002f5;
case 0x2fb:c.instructions+=3;goto B200002fb;
case 0x2fe:c.instructions+=2;goto B200002fe;
case 0x2ff:c.instructions+=1;goto B200002ff;
case 0x304:goto L20000304;
case 0x307:c.instructions+=3;goto B20000307;
case 0x30a:c.instructions+=2;goto B2000030a;
case 0x30b:c.instructions+=1;goto B2000030b;
case 0x310:goto L20000310;
case 0x313:c.instructions+=2;goto B20000313;
case 0x314:c.instructions+=1;goto B20000314;
case 0x319:goto L20000319;
case 0x31c:c.instructions+=3;goto B2000031c;
case 0x31f:c.instructions+=2;goto B2000031f;
case 0x320:c.instructions+=1;goto B20000320;
case 0x325:goto L20000325;
case 0x328:c.instructions+=3;goto B20000328;
case 0x32b:c.instructions+=2;goto B2000032b;
case 0x32c:c.instructions+=1;goto B2000032c;
case 0x331:goto L20000331;
case 0x334:c.instructions+=3;goto B20000334;
case 0x337:c.instructions+=2;goto B20000337;
case 0x338:c.instructions+=1;goto B20000338;
case 0x33d:goto L2000033d;
case 0x340:c.instructions+=7;goto B20000340;
case 0x343:c.instructions+=6;goto B20000343;
case 0x345:c.instructions+=5;goto B20000345;
case 0x348:c.instructions+=4;goto B20000348;
case 0x34b:c.instructions+=3;goto B2000034b;
case 0x34e:c.instructions+=2;goto B2000034e;
case 0x34f:c.instructions+=1;goto B2000034f;
case 0x354:goto L20000354;
case 0x357:c.instructions+=3;goto B20000357;
case 0x35a:c.instructions+=2;goto B2000035a;
case 0x35b:c.instructions+=1;goto B2000035b;
case 0x360:goto L20000360;
case 0x363:c.instructions+=3;goto B20000363;
case 0x366:c.instructions+=2;goto B20000366;
case 0x367:c.instructions+=1;goto B20000367;
case 0x36c:goto L2000036c;
case 0x36f:c.instructions+=3;goto B2000036f;
case 0x372:c.instructions+=2;goto B20000372;
case 0x373:c.instructions+=1;goto B20000373;
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
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x234ull))));
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
B2000001a:L2000001a:{c.instructions+=16;NFSU2_TR((code+0x1au));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B2000001d:{NFSU2_TR((code+0x1du));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000020:{NFSU2_TR((code+0x20u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x188ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000026:{NFSU2_TR((code+0x26u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000029:{NFSU2_TR((code+0x29u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B2000002c:{NFSU2_TR((code+0x2cu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000032:{NFSU2_TR((code+0x32u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x148ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000038:{NFSU2_TR((code+0x38u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B2000003b:{NFSU2_TR((code+0x3bu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000041:{NFSU2_TR((code+0x41u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x24ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x24ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x24ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B20000044:{NFSU2_TR((code+0x44u));
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B20000047:{NFSU2_TR((code+0x47u));
u8 U[1];
w1(U+0,u8(0x0ull));
s1(u32(r4(R+24)),r1(U+0));
}
B2000004b:{NFSU2_TR((code+0x4bu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B2000004e:{NFSU2_TR((code+0x4eu));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x4ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x4ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B20000051:{NFSU2_TR((code+0x51u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000052:{NFSU2_TR((code+0x52u));
u8 U[4];
w4(U+0,u32(code+0x57u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720767u);
}
B20000057:L20000057:{c.instructions+=4;NFSU2_TR((code+0x57u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x88ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B2000005d:{NFSU2_TR((code+0x5du));
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
B20000060:{NFSU2_TR((code+0x60u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000061:{NFSU2_TR((code+0x61u));
u8 U[4];
w4(U+0,u32(code+0x66u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720767u);
}
B20000066:L20000066:{c.instructions+=4;NFSU2_TR((code+0x66u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x108ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B2000006c:{NFSU2_TR((code+0x6cu));
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
B2000006f:{NFSU2_TR((code+0x6fu));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000070:{NFSU2_TR((code+0x70u));
u8 U[4];
w4(U+0,u32(code+0x75u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x72023cu);
}
B20000075:L20000075:{c.instructions+=4;NFSU2_TR((code+0x75u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000078:{NFSU2_TR((code+0x78u));
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
B2000007b:{NFSU2_TR((code+0x7bu));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B2000007c:{NFSU2_TR((code+0x7cu));
u8 U[4];
w4(U+0,u32(code+0x81u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x7204f3u);
}
B20000081:L20000081:{c.instructions+=5;NFSU2_TR((code+0x81u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000084:{NFSU2_TR((code+0x84u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000087:{NFSU2_TR((code+0x87u));
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
B2000008a:{NFSU2_TR((code+0x8au));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B2000008b:{NFSU2_TR((code+0x8bu));
u8 U[4];
w4(U+0,u32(code+0x90u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720fd1u);
}
B20000090:L20000090:{c.instructions+=4;NFSU2_TR((code+0x90u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000093:{NFSU2_TR((code+0x93u));
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
B20000096:{NFSU2_TR((code+0x96u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000097:{NFSU2_TR((code+0x97u));
u8 U[4];
w4(U+0,u32(code+0x9cu));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720fd1u);
}
B2000009c:L2000009c:{c.instructions+=4;NFSU2_TR((code+0x9cu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200000a2:{NFSU2_TR((code+0xa2u));
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
B200000a5:{NFSU2_TR((code+0xa5u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B200000a6:{NFSU2_TR((code+0xa6u));
u8 U[4];
w4(U+0,u32(code+0xabu));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720d57u);
}
B200000ab:L200000ab:{c.instructions+=4;NFSU2_TR((code+0xabu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x178ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200000b1:{NFSU2_TR((code+0xb1u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x40ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x40ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x40ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B200000b4:{NFSU2_TR((code+0xb4u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B200000b5:{NFSU2_TR((code+0xb5u));
u8 U[4];
w4(U+0,u32(code+0xbau));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720f32u);
}
B200000ba:L200000ba:{c.instructions+=9;NFSU2_TR((code+0xbau));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200000bd:{NFSU2_TR((code+0xbdu));
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
B200000c0:{NFSU2_TR((code+0xc0u));
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B200000c2:{NFSU2_TR((code+0xc2u));
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
B200000c5:{NFSU2_TR((code+0xc5u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200000cb:{NFSU2_TR((code+0xcbu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200000d1:{NFSU2_TR((code+0xd1u));
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
B200000d4:{NFSU2_TR((code+0xd4u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B200000d5:{NFSU2_TR((code+0xd5u));
u8 U[4];
w4(U+0,u32(code+0xdau));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720340u);
}
B200000da:L200000da:{c.instructions+=4;NFSU2_TR((code+0xdau));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200000dd:{NFSU2_TR((code+0xddu));
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
B200000e0:{NFSU2_TR((code+0xe0u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B200000e1:{NFSU2_TR((code+0xe1u));
u8 U[4];
w4(U+0,u32(code+0xe6u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x7203bdu);
}
B200000e6:L200000e6:{c.instructions+=5;NFSU2_TR((code+0xe6u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200000e9:{NFSU2_TR((code+0xe9u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200000ec:{NFSU2_TR((code+0xecu));
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
B200000ef:{NFSU2_TR((code+0xefu));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B200000f0:{NFSU2_TR((code+0xf0u));
u8 U[4];
w4(U+0,u32(code+0xf5u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720d57u);
}
B200000f5:L200000f5:{c.instructions+=4;NFSU2_TR((code+0xf5u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200000fb:{NFSU2_TR((code+0xfbu));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x40ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x40ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x40ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B200000fe:{NFSU2_TR((code+0xfeu));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B200000ff:{NFSU2_TR((code+0xffu));
u8 U[4];
w4(U+0,u32(code+0x104u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720ff8u);
}
B20000104:L20000104:{c.instructions+=4;NFSU2_TR((code+0x104u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000107:{NFSU2_TR((code+0x107u));
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
B2000010a:{NFSU2_TR((code+0x10au));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B2000010b:{NFSU2_TR((code+0x10bu));
u8 U[4];
w4(U+0,u32(code+0x110u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720684u);
}
B20000110:L20000110:{c.instructions+=4;NFSU2_TR((code+0x110u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000113:{NFSU2_TR((code+0x113u));
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
B20000116:{NFSU2_TR((code+0x116u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000117:{NFSU2_TR((code+0x117u));
u8 U[4];
w4(U+0,u32(code+0x11cu));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720f32u);
}
B2000011c:L2000011c:{c.instructions+=4;NFSU2_TR((code+0x11cu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B2000011f:{NFSU2_TR((code+0x11fu));
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
B20000122:{NFSU2_TR((code+0x122u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000123:{NFSU2_TR((code+0x123u));
u8 U[4];
w4(U+0,u32(code+0x128u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720767u);
}
B20000128:L20000128:{c.instructions+=5;NFSU2_TR((code+0x128u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B2000012b:{NFSU2_TR((code+0x12bu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B2000012e:{NFSU2_TR((code+0x12eu));
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
B20000131:{NFSU2_TR((code+0x131u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000132:{NFSU2_TR((code+0x132u));
u8 U[4];
w4(U+0,u32(code+0x137u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720767u);
}
B20000137:L20000137:{c.instructions+=5;NFSU2_TR((code+0x137u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B2000013d:{NFSU2_TR((code+0x13du));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000140:{NFSU2_TR((code+0x140u));
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
EXIT(0x7204f3u);
}
B20000149:L20000149:{c.instructions+=5;NFSU2_TR((code+0x149u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x104ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B2000014f:{NFSU2_TR((code+0x14fu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000152:{NFSU2_TR((code+0x152u));
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
B20000155:{NFSU2_TR((code+0x155u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000156:{NFSU2_TR((code+0x156u));
u8 U[4];
w4(U+0,u32(code+0x15bu));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720d57u);
}
B2000015b:L2000015b:{c.instructions+=4;NFSU2_TR((code+0x15bu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B2000015e:{NFSU2_TR((code+0x15eu));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x40ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x40ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x40ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B20000161:{NFSU2_TR((code+0x161u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000162:{NFSU2_TR((code+0x162u));
u8 U[4];
w4(U+0,u32(code+0x167u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720fd1u);
}
B20000167:L20000167:{c.instructions+=8;NFSU2_TR((code+0x167u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B2000016a:{NFSU2_TR((code+0x16au));
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
B2000016d:{NFSU2_TR((code+0x16du));
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B2000016f:{NFSU2_TR((code+0x16fu));
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
B20000172:{NFSU2_TR((code+0x172u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000175:{NFSU2_TR((code+0x175u));
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
B20000178:{NFSU2_TR((code+0x178u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000179:{NFSU2_TR((code+0x179u));
u8 U[4];
w4(U+0,u32(code+0x17eu));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720340u);
}
B2000017e:L2000017e:{c.instructions+=4;NFSU2_TR((code+0x17eu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000181:{NFSU2_TR((code+0x181u));
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
B20000184:{NFSU2_TR((code+0x184u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000185:{NFSU2_TR((code+0x185u));
u8 U[4];
w4(U+0,u32(code+0x18au));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x7203ebu);
}
B2000018a:L2000018a:{c.instructions+=4;NFSU2_TR((code+0x18au));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xdcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000190:{NFSU2_TR((code+0x190u));
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
B20000193:{NFSU2_TR((code+0x193u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000194:{NFSU2_TR((code+0x194u));
u8 U[4];
w4(U+0,u32(code+0x199u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x7205f3u);
}
B20000199:L20000199:{c.instructions+=8;NFSU2_TR((code+0x199u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B2000019f:{NFSU2_TR((code+0x19fu));
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
B200001a2:{NFSU2_TR((code+0x1a2u));
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B200001a4:{NFSU2_TR((code+0x1a4u));
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
B200001a7:{NFSU2_TR((code+0x1a7u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200001aa:{NFSU2_TR((code+0x1aau));
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
B200001ad:{NFSU2_TR((code+0x1adu));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B200001ae:{NFSU2_TR((code+0x1aeu));
u8 U[4];
w4(U+0,u32(code+0x1b3u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720d57u);
}
B200001b3:L200001b3:{c.instructions+=3;NFSU2_TR((code+0x1b3u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x40ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x40ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x40ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B200001b6:{NFSU2_TR((code+0x1b6u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B200001b7:{NFSU2_TR((code+0x1b7u));
u8 U[4];
w4(U+0,u32(code+0x1bcu));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x71ff15u);
}
B200001bc:L200001bc:{c.instructions+=4;NFSU2_TR((code+0x1bcu));
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
B200001bf:{NFSU2_TR((code+0x1bfu));
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x68ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x68ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x68ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B200001c2:{NFSU2_TR((code+0x1c2u));
u8 U[4];
w4(U+0,u32(0x0ull));
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B200001c3:{NFSU2_TR((code+0x1c3u));
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));EXIT(t_);}
}
B200001c4:L200001c4:{c.instructions+=4;NFSU2_TR((code+0x1c4u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B200001c5:{NFSU2_TR((code+0x1c5u));
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B200001c9:{NFSU2_TR((code+0x1c9u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B200001ca:{NFSU2_TR((code+0x1cau));
u8 U[4];
w4(U+0,u32(code+0x1cfu));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x71feefu);
}
B200001cf:L200001cf:{c.instructions+=4;NFSU2_TR((code+0x1cfu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2fcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200001d5:{NFSU2_TR((code+0x1d5u));
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
EXIT(0x71fefbu);
}
B200001de:L200001de:{c.instructions+=18;NFSU2_TR((code+0x1deu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1a0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200001e4:{NFSU2_TR((code+0x1e4u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2a0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200001ea:{NFSU2_TR((code+0x1eau));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x128ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200001f0:{NFSU2_TR((code+0x1f0u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B200001f3:{NFSU2_TR((code+0x1f3u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1acull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200001f9:{NFSU2_TR((code+0x1f9u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2acull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200001ff:{NFSU2_TR((code+0x1ffu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B20000202:{NFSU2_TR((code+0x202u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x25cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000208:{NFSU2_TR((code+0x208u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B2000020b:{NFSU2_TR((code+0x20bu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B2000020e:{NFSU2_TR((code+0x20eu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000214:{NFSU2_TR((code+0x214u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x24ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x24ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x24ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B20000217:{NFSU2_TR((code+0x217u));
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B2000021a:{NFSU2_TR((code+0x21au));
u8 U[1];
w1(U+0,u8(0x0ull));
s1(u32(r4(R+24)),r1(U+0));
}
B2000021e:{NFSU2_TR((code+0x21eu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x128ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000224:{NFSU2_TR((code+0x224u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x4ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x4ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B20000227:{NFSU2_TR((code+0x227u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000228:{NFSU2_TR((code+0x228u));
u8 U[4];
w4(U+0,u32(code+0x22du));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720fd1u);
}
B2000022d:L2000022d:{c.instructions+=4;NFSU2_TR((code+0x22du));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000230:{NFSU2_TR((code+0x230u));
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
B20000233:{NFSU2_TR((code+0x233u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000234:{NFSU2_TR((code+0x234u));
u8 U[4];
w4(U+0,u32(code+0x239u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720684u);
}
B20000239:L20000239:{c.instructions+=5;NFSU2_TR((code+0x239u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B2000023c:{NFSU2_TR((code+0x23cu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000242:{NFSU2_TR((code+0x242u));
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
B20000245:{NFSU2_TR((code+0x245u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000246:{NFSU2_TR((code+0x246u));
u8 U[4];
w4(U+0,u32(code+0x24bu));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720434u);
}
B2000024b:L2000024b:{c.instructions+=4;NFSU2_TR((code+0x24bu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000251:{NFSU2_TR((code+0x251u));
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
B20000254:{NFSU2_TR((code+0x254u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000255:{NFSU2_TR((code+0x255u));
u8 U[4];
w4(U+0,u32(code+0x25au));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720434u);
}
B2000025a:L2000025a:{c.instructions+=4;NFSU2_TR((code+0x25au));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000260:{NFSU2_TR((code+0x260u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x6cull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x6cull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x6cull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B20000263:{NFSU2_TR((code+0x263u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000264:{NFSU2_TR((code+0x264u));
u8 U[4];
w4(U+0,u32(code+0x269u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720738u);
}
B20000269:L20000269:{c.instructions+=8;NFSU2_TR((code+0x269u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xccull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B2000026f:{NFSU2_TR((code+0x26fu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000275:{NFSU2_TR((code+0x275u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xccull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B2000027b:{NFSU2_TR((code+0x27bu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000281:{NFSU2_TR((code+0x281u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000284:{NFSU2_TR((code+0x284u));
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
B20000287:{NFSU2_TR((code+0x287u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000288:{NFSU2_TR((code+0x288u));
u8 U[4];
w4(U+0,u32(code+0x28du));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x7204f3u);
}
B2000028d:L2000028d:{c.instructions+=5;NFSU2_TR((code+0x28du));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000293:{NFSU2_TR((code+0x293u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000299:{NFSU2_TR((code+0x299u));
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
B2000029c:{NFSU2_TR((code+0x29cu));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B2000029d:{NFSU2_TR((code+0x29du));
u8 U[4];
w4(U+0,u32(code+0x2a2u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x72023cu);
}
B200002a2:L200002a2:{c.instructions+=4;NFSU2_TR((code+0x2a2u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200002a5:{NFSU2_TR((code+0x2a5u));
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
B200002a8:{NFSU2_TR((code+0x2a8u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B200002a9:{NFSU2_TR((code+0x2a9u));
u8 U[4];
w4(U+0,u32(code+0x2aeu));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x7204f3u);
}
B200002ae:L200002ae:{c.instructions+=4;NFSU2_TR((code+0x2aeu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200002b1:{NFSU2_TR((code+0x2b1u));
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
B200002b4:{NFSU2_TR((code+0x2b4u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B200002b5:{NFSU2_TR((code+0x2b5u));
u8 U[4];
w4(U+0,u32(code+0x2bau));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720fd1u);
}
B200002ba:L200002ba:{c.instructions+=8;NFSU2_TR((code+0x2bau));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200002bd:{NFSU2_TR((code+0x2bdu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200002c0:{NFSU2_TR((code+0x2c0u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x134ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200002c6:{NFSU2_TR((code+0x2c6u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200002c9:{NFSU2_TR((code+0x2c9u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x134ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200002cf:{NFSU2_TR((code+0x2cfu));
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
B200002d2:{NFSU2_TR((code+0x2d2u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B200002d3:{NFSU2_TR((code+0x2d3u));
u8 U[4];
w4(U+0,u32(code+0x2d8u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720d57u);
}
B200002d8:L200002d8:{c.instructions+=9;NFSU2_TR((code+0x2d8u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200002de:{NFSU2_TR((code+0x2deu));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x40ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x40ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x40ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B200002e1:{NFSU2_TR((code+0x2e1u));
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B200002e3:{NFSU2_TR((code+0x2e3u));
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
B200002e6:{NFSU2_TR((code+0x2e6u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200002e9:{NFSU2_TR((code+0x2e9u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
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
EXIT(0x720d57u);
}
B200002f5:L200002f5:{c.instructions+=4;NFSU2_TR((code+0x2f5u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200002fb:{NFSU2_TR((code+0x2fbu));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x40ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x40ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x40ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B200002fe:{NFSU2_TR((code+0x2feu));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B200002ff:{NFSU2_TR((code+0x2ffu));
u8 U[4];
w4(U+0,u32(code+0x304u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720fd1u);
}
B20000304:L20000304:{c.instructions+=4;NFSU2_TR((code+0x304u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000307:{NFSU2_TR((code+0x307u));
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
B2000030a:{NFSU2_TR((code+0x30au));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B2000030b:{NFSU2_TR((code+0x30bu));
u8 U[4];
w4(U+0,u32(code+0x310u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720d57u);
}
B20000310:L20000310:{c.instructions+=3;NFSU2_TR((code+0x310u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x40ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x40ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x40ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B20000313:{NFSU2_TR((code+0x313u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000314:{NFSU2_TR((code+0x314u));
u8 U[4];
w4(U+0,u32(code+0x319u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720340u);
}
B20000319:L20000319:{c.instructions+=4;NFSU2_TR((code+0x319u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B2000031c:{NFSU2_TR((code+0x31cu));
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
B2000031f:{NFSU2_TR((code+0x31fu));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000320:{NFSU2_TR((code+0x320u));
u8 U[4];
w4(U+0,u32(code+0x325u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x7203bdu);
}
B20000325:L20000325:{c.instructions+=4;NFSU2_TR((code+0x325u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000328:{NFSU2_TR((code+0x328u));
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
EXIT(0x720d57u);
}
B20000331:L20000331:{c.instructions+=4;NFSU2_TR((code+0x331u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000334:{NFSU2_TR((code+0x334u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x40ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x40ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x40ull))));
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
EXIT(0x720fd1u);
}
B2000033d:L2000033d:{c.instructions+=8;NFSU2_TR((code+0x33du));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000340:{NFSU2_TR((code+0x340u));
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
B20000343:{NFSU2_TR((code+0x343u));
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B20000345:{NFSU2_TR((code+0x345u));
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
B20000348:{NFSU2_TR((code+0x348u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B2000034b:{NFSU2_TR((code+0x34bu));
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
B2000034e:{NFSU2_TR((code+0x34eu));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B2000034f:{NFSU2_TR((code+0x34fu));
u8 U[4];
w4(U+0,u32(code+0x354u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720340u);
}
B20000354:L20000354:{c.instructions+=4;NFSU2_TR((code+0x354u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000357:{NFSU2_TR((code+0x357u));
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
B2000035a:{NFSU2_TR((code+0x35au));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B2000035b:{NFSU2_TR((code+0x35bu));
u8 U[4];
w4(U+0,u32(code+0x360u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x7203ebu);
}
B20000360:L20000360:{c.instructions+=4;NFSU2_TR((code+0x360u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000363:{NFSU2_TR((code+0x363u));
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
B20000366:{NFSU2_TR((code+0x366u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000367:{NFSU2_TR((code+0x367u));
u8 U[4];
w4(U+0,u32(code+0x36cu));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x71ff15u);
}
B2000036c:L2000036c:{c.instructions+=4;NFSU2_TR((code+0x36cu));
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
B2000036f:{NFSU2_TR((code+0x36fu));
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x58ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x58ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x58ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B20000372:{NFSU2_TR((code+0x372u));
u8 U[4];
w4(U+0,u32(0x0ull));
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B20000373:{NFSU2_TR((code+0x373u));
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
u32 audio_492bdda02f2e(Cpu& c,u32 code){return audio_492bdda02f2e_body(c.regs.data(),c,code);}
}
