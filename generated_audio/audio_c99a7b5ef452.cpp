#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
#define TAIL_STATIC(T,PG) EXIT(T)
#define TAIL_DYNAMIC(T) EXIT(T)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
// code range sha256 c99a7b5ef452809aeca46a2ceef9ff1b9cd943eb9be2b7360bad7e99a107810c, 2068 bytes, 256 instructions
__attribute__((noinline)) static u32 audio_c99a7b5ef452_body(u8* __restrict R,Cpu& c,u32 code){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc-code){
case 0x0:goto L20000000;
case 0x1:c.instructions+=3;goto B20000001;
case 0x5:c.instructions+=2;goto B20000005;
case 0x6:c.instructions+=1;goto B20000006;
case 0xb:goto L2000000b;
case 0xe:c.instructions+=3;goto B2000000e;
case 0x11:c.instructions+=2;goto B20000011;
case 0x12:c.instructions+=1;goto B20000012;
case 0x17:goto L20000017;
case 0x1a:c.instructions+=24;goto B2000001a;
case 0x20:c.instructions+=23;goto B20000020;
case 0x23:c.instructions+=22;goto B20000023;
case 0x29:c.instructions+=21;goto B20000029;
case 0x2f:c.instructions+=20;goto B2000002f;
case 0x35:c.instructions+=19;goto B20000035;
case 0x3b:c.instructions+=18;goto B2000003b;
case 0x3e:c.instructions+=17;goto B2000003e;
case 0x41:c.instructions+=16;goto B20000041;
case 0x44:c.instructions+=15;goto B20000044;
case 0x4a:c.instructions+=14;goto B2000004a;
case 0x50:c.instructions+=13;goto B20000050;
case 0x53:c.instructions+=12;goto B20000053;
case 0x59:c.instructions+=11;goto B20000059;
case 0x5f:c.instructions+=10;goto B2000005f;
case 0x65:c.instructions+=9;goto B20000065;
case 0x68:c.instructions+=8;goto B20000068;
case 0x6b:c.instructions+=7;goto B2000006b;
case 0x6f:c.instructions+=6;goto B2000006f;
case 0x72:c.instructions+=5;goto B20000072;
case 0x78:c.instructions+=4;goto B20000078;
case 0x7e:c.instructions+=3;goto B2000007e;
case 0x81:c.instructions+=2;goto B20000081;
case 0x82:c.instructions+=1;goto B20000082;
case 0x87:goto L20000087;
case 0x8d:c.instructions+=4;goto B2000008d;
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
case 0xbd:c.instructions+=3;goto B200000bd;
case 0xc0:c.instructions+=2;goto B200000c0;
case 0xc1:c.instructions+=1;goto B200000c1;
case 0xc6:goto L200000c6;
case 0xc9:c.instructions+=6;goto B200000c9;
case 0xcc:c.instructions+=5;goto B200000cc;
case 0xd2:c.instructions+=4;goto B200000d2;
case 0xd8:c.instructions+=3;goto B200000d8;
case 0xdb:c.instructions+=2;goto B200000db;
case 0xdc:c.instructions+=1;goto B200000dc;
case 0xe1:goto L200000e1;
case 0xe7:c.instructions+=3;goto B200000e7;
case 0xea:c.instructions+=2;goto B200000ea;
case 0xeb:c.instructions+=1;goto B200000eb;
case 0xf0:goto L200000f0;
case 0xf3:c.instructions+=3;goto B200000f3;
case 0xf6:c.instructions+=2;goto B200000f6;
case 0xf7:c.instructions+=1;goto B200000f7;
case 0xfc:goto L200000fc;
case 0x102:c.instructions+=3;goto B20000102;
case 0x105:c.instructions+=2;goto B20000105;
case 0x106:c.instructions+=1;goto B20000106;
case 0x10b:goto L2000010b;
case 0x10e:c.instructions+=3;goto B2000010e;
case 0x111:c.instructions+=2;goto B20000111;
case 0x112:c.instructions+=1;goto B20000112;
case 0x117:goto L20000117;
case 0x11a:c.instructions+=3;goto B2000011a;
case 0x11d:c.instructions+=2;goto B2000011d;
case 0x11e:c.instructions+=1;goto B2000011e;
case 0x123:goto L20000123;
case 0x126:c.instructions+=3;goto B20000126;
case 0x129:c.instructions+=2;goto B20000129;
case 0x12a:c.instructions+=1;goto B2000012a;
case 0x12f:goto L2000012f;
case 0x135:c.instructions+=5;goto B20000135;
case 0x138:c.instructions+=4;goto B20000138;
case 0x13b:c.instructions+=3;goto B2000013b;
case 0x13e:c.instructions+=2;goto B2000013e;
case 0x13f:c.instructions+=1;goto B2000013f;
case 0x144:goto L20000144;
case 0x14a:c.instructions+=3;goto B2000014a;
case 0x14d:c.instructions+=2;goto B2000014d;
case 0x14e:c.instructions+=1;goto B2000014e;
case 0x153:goto L20000153;
case 0x159:c.instructions+=3;goto B20000159;
case 0x15c:c.instructions+=2;goto B2000015c;
case 0x15d:c.instructions+=1;goto B2000015d;
case 0x162:goto L20000162;
case 0x165:c.instructions+=7;goto B20000165;
case 0x168:c.instructions+=6;goto B20000168;
case 0x16a:c.instructions+=5;goto B2000016a;
case 0x16d:c.instructions+=4;goto B2000016d;
case 0x170:c.instructions+=3;goto B20000170;
case 0x173:c.instructions+=2;goto B20000173;
case 0x174:c.instructions+=1;goto B20000174;
case 0x179:goto L20000179;
case 0x17f:c.instructions+=3;goto B2000017f;
case 0x182:c.instructions+=2;goto B20000182;
case 0x183:c.instructions+=1;goto B20000183;
case 0x188:goto L20000188;
case 0x18e:c.instructions+=3;goto B2000018e;
case 0x191:c.instructions+=2;goto B20000191;
case 0x192:c.instructions+=1;goto B20000192;
case 0x197:goto L20000197;
case 0x19d:c.instructions+=3;goto B2000019d;
case 0x1a0:c.instructions+=2;goto B200001a0;
case 0x1a1:c.instructions+=1;goto B200001a1;
case 0x1a6:goto L200001a6;
case 0x1ac:c.instructions+=3;goto B200001ac;
case 0x1af:c.instructions+=2;goto B200001af;
case 0x1b0:c.instructions+=1;goto B200001b0;
case 0x1b5:goto L200001b5;
case 0x1b8:c.instructions+=3;goto B200001b8;
case 0x1bb:c.instructions+=2;goto B200001bb;
case 0x1bc:c.instructions+=1;goto B200001bc;
case 0x1c1:goto L200001c1;
case 0x1c4:c.instructions+=3;goto B200001c4;
case 0x1c7:c.instructions+=2;goto B200001c7;
case 0x1c8:c.instructions+=1;goto B200001c8;
case 0x1cd:goto L200001cd;
case 0x1d3:c.instructions+=3;goto B200001d3;
case 0x1d6:c.instructions+=2;goto B200001d6;
case 0x1d7:c.instructions+=1;goto B200001d7;
case 0x1dc:goto L200001dc;
case 0x1df:c.instructions+=2;goto B200001df;
case 0x1e0:c.instructions+=1;goto B200001e0;
case 0x1e5:goto L200001e5;
case 0x1eb:c.instructions+=3;goto B200001eb;
case 0x1ee:c.instructions+=2;goto B200001ee;
case 0x1ef:c.instructions+=1;goto B200001ef;
case 0x1f4:goto L200001f4;
case 0x1f7:c.instructions+=3;goto B200001f7;
case 0x1fa:c.instructions+=2;goto B200001fa;
case 0x1fb:c.instructions+=1;goto B200001fb;
case 0x200:goto L20000200;
case 0x203:c.instructions+=4;goto B20000203;
case 0x209:c.instructions+=3;goto B20000209;
case 0x20c:c.instructions+=2;goto B2000020c;
case 0x20d:c.instructions+=1;goto B2000020d;
case 0x212:goto L20000212;
case 0x215:c.instructions+=3;goto B20000215;
case 0x218:c.instructions+=2;goto B20000218;
case 0x219:c.instructions+=1;goto B20000219;
case 0x21e:goto L2000021e;
case 0x224:c.instructions+=3;goto B20000224;
case 0x227:c.instructions+=2;goto B20000227;
case 0x228:c.instructions+=1;goto B20000228;
case 0x22d:goto L2000022d;
case 0x230:c.instructions+=4;goto B20000230;
case 0x233:c.instructions+=3;goto B20000233;
case 0x236:c.instructions+=2;goto B20000236;
case 0x237:c.instructions+=1;goto B20000237;
case 0x23c:goto L2000023c;
case 0x23f:c.instructions+=3;goto B2000023f;
case 0x242:c.instructions+=2;goto B20000242;
case 0x243:c.instructions+=1;goto B20000243;
case 0x248:goto L20000248;
case 0x24b:c.instructions+=3;goto B2000024b;
case 0x24e:c.instructions+=2;goto B2000024e;
case 0x24f:c.instructions+=1;goto B2000024f;
case 0x254:goto L20000254;
case 0x257:c.instructions+=3;goto B20000257;
case 0x25a:c.instructions+=2;goto B2000025a;
case 0x25b:c.instructions+=1;goto B2000025b;
case 0x260:goto L20000260;
case 0x266:c.instructions+=3;goto B20000266;
case 0x269:c.instructions+=2;goto B20000269;
case 0x26a:c.instructions+=1;goto B2000026a;
case 0x26f:goto L2000026f;
case 0x272:c.instructions+=3;goto B20000272;
case 0x275:c.instructions+=2;goto B20000275;
case 0x276:c.instructions+=1;goto B20000276;
case 0x27b:goto L2000027b;
case 0x27e:c.instructions+=3;goto B2000027e;
case 0x281:c.instructions+=2;goto B20000281;
case 0x282:c.instructions+=1;goto B20000282;
case 0x287:goto L20000287;
case 0x28a:c.instructions+=3;goto B2000028a;
case 0x28d:c.instructions+=2;goto B2000028d;
case 0x28e:c.instructions+=1;goto B2000028e;
case 0x293:goto L20000293;
case 0x296:c.instructions+=7;goto B20000296;
case 0x299:c.instructions+=6;goto B20000299;
case 0x29b:c.instructions+=5;goto B2000029b;
case 0x29e:c.instructions+=4;goto B2000029e;
case 0x2a1:c.instructions+=3;goto B200002a1;
case 0x2a4:c.instructions+=2;goto B200002a4;
case 0x2a5:c.instructions+=1;goto B200002a5;
case 0x2aa:goto L200002aa;
case 0x2ad:c.instructions+=3;goto B200002ad;
case 0x2b0:c.instructions+=2;goto B200002b0;
case 0x2b1:c.instructions+=1;goto B200002b1;
case 0x2b6:goto L200002b6;
case 0x2b9:c.instructions+=3;goto B200002b9;
case 0x2bc:c.instructions+=2;goto B200002bc;
case 0x2bd:c.instructions+=1;goto B200002bd;
case 0x2be:goto L200002be;
case 0x2bf:c.instructions+=3;goto B200002bf;
case 0x2c3:c.instructions+=2;goto B200002c3;
case 0x2c4:c.instructions+=1;goto B200002c4;
case 0x2c9:goto L200002c9;
case 0x2cc:c.instructions+=2;goto B200002cc;
case 0x2cd:c.instructions+=1;goto B200002cd;
case 0x2d2:goto L200002d2;
case 0x2d5:c.instructions+=12;goto B200002d5;
case 0x2d8:c.instructions+=11;goto B200002d8;
case 0x2db:c.instructions+=10;goto B200002db;
case 0x2de:c.instructions+=9;goto B200002de;
case 0x2e1:c.instructions+=8;goto B200002e1;
case 0x2e7:c.instructions+=7;goto B200002e7;
case 0x2ea:c.instructions+=6;goto B200002ea;
case 0x2ed:c.instructions+=5;goto B200002ed;
case 0x2f1:c.instructions+=4;goto B200002f1;
case 0x2f4:c.instructions+=3;goto B200002f4;
case 0x2f7:c.instructions+=2;goto B200002f7;
case 0x2f8:c.instructions+=1;goto B200002f8;
case 0x2fd:goto L200002fd;
case 0x300:c.instructions+=3;goto B20000300;
case 0x303:c.instructions+=2;goto B20000303;
case 0x304:c.instructions+=1;goto B20000304;
case 0x309:goto L20000309;
case 0x30c:c.instructions+=3;goto B2000030c;
case 0x30f:c.instructions+=2;goto B2000030f;
case 0x310:c.instructions+=1;goto B20000310;
case 0x315:goto L20000315;
case 0x318:c.instructions+=3;goto B20000318;
case 0x31b:c.instructions+=2;goto B2000031b;
case 0x31c:c.instructions+=1;goto B2000031c;
case 0x321:goto L20000321;
case 0x324:c.instructions+=3;goto B20000324;
case 0x327:c.instructions+=2;goto B20000327;
case 0x328:c.instructions+=1;goto B20000328;
case 0x32d:goto L2000032d;
case 0x330:c.instructions+=7;goto B20000330;
case 0x333:c.instructions+=6;goto B20000333;
case 0x335:c.instructions+=5;goto B20000335;
case 0x338:c.instructions+=4;goto B20000338;
case 0x33b:c.instructions+=3;goto B2000033b;
case 0x33e:c.instructions+=2;goto B2000033e;
case 0x33f:c.instructions+=1;goto B2000033f;
case 0x344:goto L20000344;
case 0x347:c.instructions+=3;goto B20000347;
case 0x34a:c.instructions+=2;goto B2000034a;
case 0x34b:c.instructions+=1;goto B2000034b;
case 0x350:goto L20000350;
case 0x353:c.instructions+=3;goto B20000353;
case 0x356:c.instructions+=2;goto B20000356;
case 0x357:c.instructions+=1;goto B20000357;
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
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B2000000e:{NFSU2_TR((code+0xeu));
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
B20000011:{NFSU2_TR((code+0x11u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000012:{NFSU2_TR((code+0x12u));
u8 U[4];
w4(U+0,u32(code+0x17u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x71fefbu);
}
B20000017:L20000017:{c.instructions+=25;NFSU2_TR((code+0x17u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B2000001a:{NFSU2_TR((code+0x1au));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000020:{NFSU2_TR((code+0x20u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B20000023:{NFSU2_TR((code+0x23u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3a4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000029:{NFSU2_TR((code+0x29u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x224ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B2000002f:{NFSU2_TR((code+0x2fu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x170ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000035:{NFSU2_TR((code+0x35u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x400ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B2000003b:{NFSU2_TR((code+0x3bu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B2000003e:{NFSU2_TR((code+0x3eu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000041:{NFSU2_TR((code+0x41u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000044:{NFSU2_TR((code+0x44u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B2000004a:{NFSU2_TR((code+0x4au));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3f8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000050:{NFSU2_TR((code+0x50u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B20000053:{NFSU2_TR((code+0x53u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000059:{NFSU2_TR((code+0x59u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x448ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B2000005f:{NFSU2_TR((code+0x5fu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3ecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000065:{NFSU2_TR((code+0x65u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x2cull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x2cull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x2cull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B20000068:{NFSU2_TR((code+0x68u));
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B2000006b:{NFSU2_TR((code+0x6bu));
u8 U[1];
w1(U+0,u8(0x0ull));
s1(u32(r4(R+24)),r1(U+0));
}
B2000006f:{NFSU2_TR((code+0x6fu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000072:{NFSU2_TR((code+0x72u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x210ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000078:{NFSU2_TR((code+0x78u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2c0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B2000007e:{NFSU2_TR((code+0x7eu));
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
B20000081:{NFSU2_TR((code+0x81u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000082:{NFSU2_TR((code+0x82u));
u8 U[4];
w4(U+0,u32(code+0x87u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x7203bdu);
}
B20000087:L20000087:{c.instructions+=5;NFSU2_TR((code+0x87u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3f4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B2000008d:{NFSU2_TR((code+0x8du));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
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
EXIT(0x720767u);
}
B2000009c:L2000009c:{c.instructions+=4;NFSU2_TR((code+0x9cu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x88ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200000a2:{NFSU2_TR((code+0xa2u));
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
EXIT(0x720767u);
}
B200000ab:L200000ab:{c.instructions+=4;NFSU2_TR((code+0xabu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3b8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200000b1:{NFSU2_TR((code+0xb1u));
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
EXIT(0x72023cu);
}
B200000ba:L200000ba:{c.instructions+=4;NFSU2_TR((code+0xbau));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200000bd:{NFSU2_TR((code+0xbdu));
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
B200000c0:{NFSU2_TR((code+0xc0u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B200000c1:{NFSU2_TR((code+0xc1u));
u8 U[4];
w4(U+0,u32(code+0xc6u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x7204f3u);
}
B200000c6:L200000c6:{c.instructions+=7;NFSU2_TR((code+0xc6u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200000c9:{NFSU2_TR((code+0xc9u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200000cc:{NFSU2_TR((code+0xccu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2a4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200000d2:{NFSU2_TR((code+0xd2u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x320ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200000d8:{NFSU2_TR((code+0xd8u));
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
B200000db:{NFSU2_TR((code+0xdbu));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B200000dc:{NFSU2_TR((code+0xdcu));
u8 U[4];
w4(U+0,u32(code+0xe1u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720fd1u);
}
B200000e1:L200000e1:{c.instructions+=4;NFSU2_TR((code+0xe1u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3b8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200000e7:{NFSU2_TR((code+0xe7u));
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
B200000ea:{NFSU2_TR((code+0xeau));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B200000eb:{NFSU2_TR((code+0xebu));
u8 U[4];
w4(U+0,u32(code+0xf0u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720fd1u);
}
B200000f0:L200000f0:{c.instructions+=4;NFSU2_TR((code+0xf0u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200000f3:{NFSU2_TR((code+0xf3u));
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
B200000f6:{NFSU2_TR((code+0xf6u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B200000f7:{NFSU2_TR((code+0xf7u));
u8 U[4];
w4(U+0,u32(code+0xfcu));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720d57u);
}
B200000fc:L200000fc:{c.instructions+=4;NFSU2_TR((code+0xfcu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3c4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000102:{NFSU2_TR((code+0x102u));
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
B20000105:{NFSU2_TR((code+0x105u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000106:{NFSU2_TR((code+0x106u));
u8 U[4];
w4(U+0,u32(code+0x10bu));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720ff8u);
}
B2000010b:L2000010b:{c.instructions+=4;NFSU2_TR((code+0x10bu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B2000010e:{NFSU2_TR((code+0x10eu));
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
B20000111:{NFSU2_TR((code+0x111u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000112:{NFSU2_TR((code+0x112u));
u8 U[4];
w4(U+0,u32(code+0x117u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720684u);
}
B20000117:L20000117:{c.instructions+=4;NFSU2_TR((code+0x117u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B2000011a:{NFSU2_TR((code+0x11au));
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
B2000011d:{NFSU2_TR((code+0x11du));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B2000011e:{NFSU2_TR((code+0x11eu));
u8 U[4];
w4(U+0,u32(code+0x123u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720f32u);
}
B20000123:L20000123:{c.instructions+=4;NFSU2_TR((code+0x123u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000126:{NFSU2_TR((code+0x126u));
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
B20000129:{NFSU2_TR((code+0x129u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B2000012a:{NFSU2_TR((code+0x12au));
u8 U[4];
w4(U+0,u32(code+0x12fu));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720767u);
}
B2000012f:L2000012f:{c.instructions+=6;NFSU2_TR((code+0x12fu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000135:{NFSU2_TR((code+0x135u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000138:{NFSU2_TR((code+0x138u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B2000013b:{NFSU2_TR((code+0x13bu));
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
B2000013e:{NFSU2_TR((code+0x13eu));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B2000013f:{NFSU2_TR((code+0x13fu));
u8 U[4];
w4(U+0,u32(code+0x144u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x7204f3u);
}
B20000144:L20000144:{c.instructions+=4;NFSU2_TR((code+0x144u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2b0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B2000014a:{NFSU2_TR((code+0x14au));
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
B2000014d:{NFSU2_TR((code+0x14du));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B2000014e:{NFSU2_TR((code+0x14eu));
u8 U[4];
w4(U+0,u32(code+0x153u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720e48u);
}
B20000153:L20000153:{c.instructions+=4;NFSU2_TR((code+0x153u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x26cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000159:{NFSU2_TR((code+0x159u));
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
B2000015c:{NFSU2_TR((code+0x15cu));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B2000015d:{NFSU2_TR((code+0x15du));
u8 U[4];
w4(U+0,u32(code+0x162u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720e48u);
}
B20000162:L20000162:{c.instructions+=8;NFSU2_TR((code+0x162u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000165:{NFSU2_TR((code+0x165u));
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
B20000168:{NFSU2_TR((code+0x168u));
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B2000016a:{NFSU2_TR((code+0x16au));
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
B2000016d:{NFSU2_TR((code+0x16du));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000170:{NFSU2_TR((code+0x170u));
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
B20000173:{NFSU2_TR((code+0x173u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000174:{NFSU2_TR((code+0x174u));
u8 U[4];
w4(U+0,u32(code+0x179u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720e48u);
}
B20000179:L20000179:{c.instructions+=4;NFSU2_TR((code+0x179u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x240ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B2000017f:{NFSU2_TR((code+0x17fu));
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
B20000182:{NFSU2_TR((code+0x182u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000183:{NFSU2_TR((code+0x183u));
u8 U[4];
w4(U+0,u32(code+0x188u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720767u);
}
B20000188:L20000188:{c.instructions+=4;NFSU2_TR((code+0x188u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xccull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B2000018e:{NFSU2_TR((code+0x18eu));
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
B20000191:{NFSU2_TR((code+0x191u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000192:{NFSU2_TR((code+0x192u));
u8 U[4];
w4(U+0,u32(code+0x197u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720684u);
}
B20000197:L20000197:{c.instructions+=4;NFSU2_TR((code+0x197u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x258ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B2000019d:{NFSU2_TR((code+0x19du));
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
B200001a0:{NFSU2_TR((code+0x1a0u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B200001a1:{NFSU2_TR((code+0x1a1u));
u8 U[4];
w4(U+0,u32(code+0x1a6u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720434u);
}
B200001a6:L200001a6:{c.instructions+=4;NFSU2_TR((code+0x1a6u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x200ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200001ac:{NFSU2_TR((code+0x1acu));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x44ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x44ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x44ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B200001af:{NFSU2_TR((code+0x1afu));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B200001b0:{NFSU2_TR((code+0x1b0u));
u8 U[4];
w4(U+0,u32(code+0x1b5u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720434u);
}
B200001b5:L200001b5:{c.instructions+=4;NFSU2_TR((code+0x1b5u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200001b8:{NFSU2_TR((code+0x1b8u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x4cull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x4cull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4cull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B200001bb:{NFSU2_TR((code+0x1bbu));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B200001bc:{NFSU2_TR((code+0x1bcu));
u8 U[4];
w4(U+0,u32(code+0x1c1u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720738u);
}
B200001c1:L200001c1:{c.instructions+=4;NFSU2_TR((code+0x1c1u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200001c4:{NFSU2_TR((code+0x1c4u));
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
B200001c7:{NFSU2_TR((code+0x1c7u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B200001c8:{NFSU2_TR((code+0x1c8u));
u8 U[4];
w4(U+0,u32(code+0x1cdu));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720684u);
}
B200001cd:L200001cd:{c.instructions+=4;NFSU2_TR((code+0x1cdu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200001d3:{NFSU2_TR((code+0x1d3u));
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
B200001d6:{NFSU2_TR((code+0x1d6u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B200001d7:{NFSU2_TR((code+0x1d7u));
u8 U[4];
w4(U+0,u32(code+0x1dcu));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x72023cu);
}
B200001dc:L200001dc:{c.instructions+=3;NFSU2_TR((code+0x1dcu));
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
B200001df:{NFSU2_TR((code+0x1dfu));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B200001e0:{NFSU2_TR((code+0x1e0u));
u8 U[4];
w4(U+0,u32(code+0x1e5u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720434u);
}
B200001e5:L200001e5:{c.instructions+=4;NFSU2_TR((code+0x1e5u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200001eb:{NFSU2_TR((code+0x1ebu));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x44ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x44ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x44ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B200001ee:{NFSU2_TR((code+0x1eeu));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B200001ef:{NFSU2_TR((code+0x1efu));
u8 U[4];
w4(U+0,u32(code+0x1f4u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720434u);
}
B200001f4:L200001f4:{c.instructions+=4;NFSU2_TR((code+0x1f4u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200001f7:{NFSU2_TR((code+0x1f7u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x5cull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x5cull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x5cull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B200001fa:{NFSU2_TR((code+0x1fau));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B200001fb:{NFSU2_TR((code+0x1fbu));
u8 U[4];
w4(U+0,u32(code+0x200u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x72023cu);
}
B20000200:L20000200:{c.instructions+=5;NFSU2_TR((code+0x200u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000203:{NFSU2_TR((code+0x203u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x98ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000209:{NFSU2_TR((code+0x209u));
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
B2000020c:{NFSU2_TR((code+0x20cu));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B2000020d:{NFSU2_TR((code+0x20du));
u8 U[4];
w4(U+0,u32(code+0x212u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720684u);
}
B20000212:L20000212:{c.instructions+=4;NFSU2_TR((code+0x212u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000215:{NFSU2_TR((code+0x215u));
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
B20000218:{NFSU2_TR((code+0x218u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000219:{NFSU2_TR((code+0x219u));
u8 U[4];
w4(U+0,u32(code+0x21eu));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720784u);
}
B2000021e:L2000021e:{c.instructions+=4;NFSU2_TR((code+0x21eu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xacull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000224:{NFSU2_TR((code+0x224u));
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
EXIT(0x720434u);
}
B2000022d:L2000022d:{c.instructions+=5;NFSU2_TR((code+0x22du));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000230:{NFSU2_TR((code+0x230u));
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
B20000233:{NFSU2_TR((code+0x233u));
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
B20000236:{NFSU2_TR((code+0x236u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000237:{NFSU2_TR((code+0x237u));
u8 U[4];
w4(U+0,u32(code+0x23cu));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720684u);
}
B2000023c:L2000023c:{c.instructions+=4;NFSU2_TR((code+0x23cu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B2000023f:{NFSU2_TR((code+0x23fu));
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
B20000242:{NFSU2_TR((code+0x242u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000243:{NFSU2_TR((code+0x243u));
u8 U[4];
w4(U+0,u32(code+0x248u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720784u);
}
B20000248:L20000248:{c.instructions+=4;NFSU2_TR((code+0x248u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B2000024b:{NFSU2_TR((code+0x24bu));
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
B2000024e:{NFSU2_TR((code+0x24eu));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B2000024f:{NFSU2_TR((code+0x24fu));
u8 U[4];
w4(U+0,u32(code+0x254u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720684u);
}
B20000254:L20000254:{c.instructions+=4;NFSU2_TR((code+0x254u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000257:{NFSU2_TR((code+0x257u));
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
B2000025a:{NFSU2_TR((code+0x25au));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B2000025b:{NFSU2_TR((code+0x25bu));
u8 U[4];
w4(U+0,u32(code+0x260u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720d57u);
}
B20000260:L20000260:{c.instructions+=4;NFSU2_TR((code+0x260u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000266:{NFSU2_TR((code+0x266u));
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
B20000269:{NFSU2_TR((code+0x269u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B2000026a:{NFSU2_TR((code+0x26au));
u8 U[4];
w4(U+0,u32(code+0x26fu));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720767u);
}
B2000026f:L2000026f:{c.instructions+=4;NFSU2_TR((code+0x26fu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000272:{NFSU2_TR((code+0x272u));
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
B20000275:{NFSU2_TR((code+0x275u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000276:{NFSU2_TR((code+0x276u));
u8 U[4];
w4(U+0,u32(code+0x27bu));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720684u);
}
B2000027b:L2000027b:{c.instructions+=4;NFSU2_TR((code+0x27bu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B2000027e:{NFSU2_TR((code+0x27eu));
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
B20000281:{NFSU2_TR((code+0x281u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000282:{NFSU2_TR((code+0x282u));
u8 U[4];
w4(U+0,u32(code+0x287u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720d57u);
}
B20000287:L20000287:{c.instructions+=4;NFSU2_TR((code+0x287u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B2000028a:{NFSU2_TR((code+0x28au));
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
B2000028d:{NFSU2_TR((code+0x28du));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B2000028e:{NFSU2_TR((code+0x28eu));
u8 U[4];
w4(U+0,u32(code+0x293u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720fd1u);
}
B20000293:L20000293:{c.instructions+=8;NFSU2_TR((code+0x293u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000296:{NFSU2_TR((code+0x296u));
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
B20000299:{NFSU2_TR((code+0x299u));
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B2000029b:{NFSU2_TR((code+0x29bu));
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
B2000029e:{NFSU2_TR((code+0x29eu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200002a1:{NFSU2_TR((code+0x2a1u));
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
B200002a4:{NFSU2_TR((code+0x2a4u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B200002a5:{NFSU2_TR((code+0x2a5u));
u8 U[4];
w4(U+0,u32(code+0x2aau));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720340u);
}
B200002aa:L200002aa:{c.instructions+=4;NFSU2_TR((code+0x2aau));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200002ad:{NFSU2_TR((code+0x2adu));
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
B200002b0:{NFSU2_TR((code+0x2b0u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B200002b1:{NFSU2_TR((code+0x2b1u));
u8 U[4];
w4(U+0,u32(code+0x2b6u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x71ff15u);
}
B200002b6:L200002b6:{c.instructions+=4;NFSU2_TR((code+0x2b6u));
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
B200002b9:{NFSU2_TR((code+0x2b9u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x28ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x28ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x28ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B200002bc:{NFSU2_TR((code+0x2bcu));
u8 U[4];
w4(U+0,u32(0x0ull));
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B200002bd:{NFSU2_TR((code+0x2bdu));
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));EXIT(t_);}
}
B200002be:L200002be:{c.instructions+=4;NFSU2_TR((code+0x2beu));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B200002bf:{NFSU2_TR((code+0x2bfu));
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B200002c3:{NFSU2_TR((code+0x2c3u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B200002c4:{NFSU2_TR((code+0x2c4u));
u8 U[4];
w4(U+0,u32(code+0x2c9u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x71feefu);
}
B200002c9:L200002c9:{c.instructions+=3;NFSU2_TR((code+0x2c9u));
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
B200002cc:{NFSU2_TR((code+0x2ccu));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B200002cd:{NFSU2_TR((code+0x2cdu));
u8 U[4];
w4(U+0,u32(code+0x2d2u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x71fefbu);
}
B200002d2:L200002d2:{c.instructions+=13;NFSU2_TR((code+0x2d2u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B200002d5:{NFSU2_TR((code+0x2d5u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200002d8:{NFSU2_TR((code+0x2d8u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B200002db:{NFSU2_TR((code+0x2dbu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200002de:{NFSU2_TR((code+0x2deu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B200002e1:{NFSU2_TR((code+0x2e1u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200002e7:{NFSU2_TR((code+0x2e7u));
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
B200002ea:{NFSU2_TR((code+0x2eau));
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B200002ed:{NFSU2_TR((code+0x2edu));
u8 U[1];
w1(U+0,u8(0x0ull));
s1(u32(r4(R+24)),r1(U+0));
}
B200002f1:{NFSU2_TR((code+0x2f1u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200002f4:{NFSU2_TR((code+0x2f4u));
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
B200002f7:{NFSU2_TR((code+0x2f7u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B200002f8:{NFSU2_TR((code+0x2f8u));
u8 U[4];
w4(U+0,u32(code+0x2fdu));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x72023cu);
}
B200002fd:L200002fd:{c.instructions+=4;NFSU2_TR((code+0x2fdu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000300:{NFSU2_TR((code+0x300u));
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
B20000303:{NFSU2_TR((code+0x303u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000304:{NFSU2_TR((code+0x304u));
u8 U[4];
w4(U+0,u32(code+0x309u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x7204f3u);
}
B20000309:L20000309:{c.instructions+=4;NFSU2_TR((code+0x309u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B2000030c:{NFSU2_TR((code+0x30cu));
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
B2000030f:{NFSU2_TR((code+0x30fu));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000310:{NFSU2_TR((code+0x310u));
u8 U[4];
w4(U+0,u32(code+0x315u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720fd1u);
}
B20000315:L20000315:{c.instructions+=4;NFSU2_TR((code+0x315u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000318:{NFSU2_TR((code+0x318u));
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
B2000031b:{NFSU2_TR((code+0x31bu));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B2000031c:{NFSU2_TR((code+0x31cu));
u8 U[4];
w4(U+0,u32(code+0x321u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720767u);
}
B20000321:L20000321:{c.instructions+=4;NFSU2_TR((code+0x321u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000324:{NFSU2_TR((code+0x324u));
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
B20000327:{NFSU2_TR((code+0x327u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000328:{NFSU2_TR((code+0x328u));
u8 U[4];
w4(U+0,u32(code+0x32du));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720d57u);
}
B2000032d:L2000032d:{c.instructions+=8;NFSU2_TR((code+0x32du));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000330:{NFSU2_TR((code+0x330u));
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
B20000333:{NFSU2_TR((code+0x333u));
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B20000335:{NFSU2_TR((code+0x335u));
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
B20000338:{NFSU2_TR((code+0x338u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B2000033b:{NFSU2_TR((code+0x33bu));
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
B2000033e:{NFSU2_TR((code+0x33eu));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B2000033f:{NFSU2_TR((code+0x33fu));
u8 U[4];
w4(U+0,u32(code+0x344u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720340u);
}
B20000344:L20000344:{c.instructions+=4;NFSU2_TR((code+0x344u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000347:{NFSU2_TR((code+0x347u));
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
B2000034a:{NFSU2_TR((code+0x34au));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B2000034b:{NFSU2_TR((code+0x34bu));
u8 U[4];
w4(U+0,u32(code+0x350u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x71ff15u);
}
B20000350:L20000350:{c.instructions+=4;NFSU2_TR((code+0x350u));
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
B20000353:{NFSU2_TR((code+0x353u));
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x24ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x24ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B20000356:{NFSU2_TR((code+0x356u));
u8 U[4];
w4(U+0,u32(0x0ull));
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B20000357:{NFSU2_TR((code+0x357u));
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
u32 audio_c99a7b5ef452(Cpu& c,u32 code){return audio_c99a7b5ef452_body(c.regs.data(),c,code);}
}
