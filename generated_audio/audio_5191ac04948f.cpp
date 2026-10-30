#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
#define TAIL_STATIC(T,PG) EXIT(T)
#define TAIL_DYNAMIC(T) EXIT(T)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
// code range sha256 5191ac04948f9dc43f49f8f4e9603ceee5ca7f77762f12ea1c801b862dcfdd8a, 800 bytes, 239 instructions
__attribute__((noinline)) static u32 audio_5191ac04948f_body(u8* __restrict R,Cpu& c,u32 code){
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
case 0x1d:c.instructions+=26;goto B2000001d;
case 0x23:c.instructions+=25;goto B20000023;
case 0x29:c.instructions+=24;goto B20000029;
case 0x2f:c.instructions+=23;goto B2000002f;
case 0x32:c.instructions+=22;goto B20000032;
case 0x35:c.instructions+=21;goto B20000035;
case 0x3b:c.instructions+=20;goto B2000003b;
case 0x3e:c.instructions+=19;goto B2000003e;
case 0x44:c.instructions+=18;goto B20000044;
case 0x4a:c.instructions+=17;goto B2000004a;
case 0x4d:c.instructions+=16;goto B2000004d;
case 0x53:c.instructions+=15;goto B20000053;
case 0x59:c.instructions+=14;goto B20000059;
case 0x5c:c.instructions+=13;goto B2000005c;
case 0x62:c.instructions+=12;goto B20000062;
case 0x68:c.instructions+=11;goto B20000068;
case 0x6e:c.instructions+=10;goto B2000006e;
case 0x74:c.instructions+=9;goto B20000074;
case 0x77:c.instructions+=8;goto B20000077;
case 0x7a:c.instructions+=7;goto B2000007a;
case 0x7e:c.instructions+=6;goto B2000007e;
case 0x84:c.instructions+=5;goto B20000084;
case 0x87:c.instructions+=4;goto B20000087;
case 0x8a:c.instructions+=3;goto B2000008a;
case 0x8d:c.instructions+=2;goto B2000008d;
case 0x8e:c.instructions+=1;goto B2000008e;
case 0x93:goto L20000093;
case 0x99:c.instructions+=9;goto B20000099;
case 0x9c:c.instructions+=8;goto B2000009c;
case 0x9e:c.instructions+=7;goto B2000009e;
case 0xa1:c.instructions+=6;goto B200000a1;
case 0xa4:c.instructions+=5;goto B200000a4;
case 0xa7:c.instructions+=4;goto B200000a7;
case 0xa9:c.instructions+=3;goto B200000a9;
case 0xac:c.instructions+=2;goto B200000ac;
case 0xae:c.instructions+=1;goto B200000ae;
case 0xb0:goto L200000b0;
case 0xb2:goto L200000b2;
case 0xb8:c.instructions+=3;goto B200000b8;
case 0xbb:c.instructions+=2;goto B200000bb;
case 0xbc:c.instructions+=1;goto B200000bc;
case 0xc1:goto L200000c1;
case 0xc4:c.instructions+=7;goto B200000c4;
case 0xc7:c.instructions+=6;goto B200000c7;
case 0xc9:c.instructions+=5;goto B200000c9;
case 0xcc:c.instructions+=4;goto B200000cc;
case 0xcf:c.instructions+=3;goto B200000cf;
case 0xd2:c.instructions+=2;goto B200000d2;
case 0xd3:c.instructions+=1;goto B200000d3;
case 0xd8:goto L200000d8;
case 0xdb:c.instructions+=4;goto B200000db;
case 0xde:c.instructions+=3;goto B200000de;
case 0xe1:c.instructions+=2;goto B200000e1;
case 0xe2:c.instructions+=1;goto B200000e2;
case 0xe7:goto L200000e7;
case 0xed:c.instructions+=3;goto B200000ed;
case 0xf0:c.instructions+=2;goto B200000f0;
case 0xf1:c.instructions+=1;goto B200000f1;
case 0xf6:goto L200000f6;
case 0xfc:c.instructions+=3;goto B200000fc;
case 0xff:c.instructions+=2;goto B200000ff;
case 0x100:c.instructions+=1;goto B20000100;
case 0x105:goto L20000105;
case 0x10b:c.instructions+=4;goto B2000010b;
case 0x111:c.instructions+=3;goto B20000111;
case 0x114:c.instructions+=2;goto B20000114;
case 0x115:c.instructions+=1;goto B20000115;
case 0x11a:goto L2000011a;
case 0x11d:c.instructions+=3;goto B2000011d;
case 0x120:c.instructions+=2;goto B20000120;
case 0x121:c.instructions+=1;goto B20000121;
case 0x126:goto L20000126;
case 0x129:c.instructions+=4;goto B20000129;
case 0x12f:c.instructions+=3;goto B2000012f;
case 0x132:c.instructions+=2;goto B20000132;
case 0x133:c.instructions+=1;goto B20000133;
case 0x138:goto L20000138;
case 0x13b:c.instructions+=4;goto B2000013b;
case 0x141:c.instructions+=3;goto B20000141;
case 0x144:c.instructions+=2;goto B20000144;
case 0x145:c.instructions+=1;goto B20000145;
case 0x14a:goto L2000014a;
case 0x150:c.instructions+=9;goto B20000150;
case 0x153:c.instructions+=8;goto B20000153;
case 0x155:c.instructions+=7;goto B20000155;
case 0x158:c.instructions+=6;goto B20000158;
case 0x15b:c.instructions+=5;goto B2000015b;
case 0x15e:c.instructions+=4;goto B2000015e;
case 0x160:c.instructions+=3;goto B20000160;
case 0x163:c.instructions+=2;goto B20000163;
case 0x165:c.instructions+=1;goto B20000165;
case 0x167:goto L20000167;
case 0x169:goto L20000169;
case 0x16f:c.instructions+=3;goto B2000016f;
case 0x172:c.instructions+=2;goto B20000172;
case 0x173:c.instructions+=1;goto B20000173;
case 0x178:goto L20000178;
case 0x17e:c.instructions+=3;goto B2000017e;
case 0x181:c.instructions+=2;goto B20000181;
case 0x182:c.instructions+=1;goto B20000182;
case 0x187:goto L20000187;
case 0x18a:c.instructions+=3;goto B2000018a;
case 0x18d:c.instructions+=2;goto B2000018d;
case 0x18e:c.instructions+=1;goto B2000018e;
case 0x193:goto L20000193;
case 0x196:c.instructions+=3;goto B20000196;
case 0x199:c.instructions+=2;goto B20000199;
case 0x19a:c.instructions+=1;goto B2000019a;
case 0x19f:goto L2000019f;
case 0x1a5:c.instructions+=4;goto B200001a5;
case 0x1a8:c.instructions+=3;goto B200001a8;
case 0x1ab:c.instructions+=2;goto B200001ab;
case 0x1ac:c.instructions+=1;goto B200001ac;
case 0x1b1:goto L200001b1;
case 0x1b7:c.instructions+=3;goto B200001b7;
case 0x1ba:c.instructions+=2;goto B200001ba;
case 0x1bb:c.instructions+=1;goto B200001bb;
case 0x1c0:goto L200001c0;
case 0x1c3:c.instructions+=3;goto B200001c3;
case 0x1c6:c.instructions+=2;goto B200001c6;
case 0x1c7:c.instructions+=1;goto B200001c7;
case 0x1cc:goto L200001cc;
case 0x1cf:c.instructions+=3;goto B200001cf;
case 0x1d2:c.instructions+=2;goto B200001d2;
case 0x1d3:c.instructions+=1;goto B200001d3;
case 0x1d8:goto L200001d8;
case 0x1db:c.instructions+=3;goto B200001db;
case 0x1de:c.instructions+=2;goto B200001de;
case 0x1df:c.instructions+=1;goto B200001df;
case 0x1e4:goto L200001e4;
case 0x1e7:c.instructions+=8;goto B200001e7;
case 0x1ea:c.instructions+=7;goto B200001ea;
case 0x1ed:c.instructions+=6;goto B200001ed;
case 0x1ef:c.instructions+=5;goto B200001ef;
case 0x1f2:c.instructions+=4;goto B200001f2;
case 0x1f5:c.instructions+=3;goto B200001f5;
case 0x1f8:c.instructions+=2;goto B200001f8;
case 0x1f9:c.instructions+=1;goto B200001f9;
case 0x1fe:goto L200001fe;
case 0x204:c.instructions+=6;goto B20000204;
case 0x20a:c.instructions+=5;goto B2000020a;
case 0x210:c.instructions+=4;goto B20000210;
case 0x216:c.instructions+=3;goto B20000216;
case 0x219:c.instructions+=2;goto B20000219;
case 0x21a:c.instructions+=1;goto B2000021a;
case 0x21f:goto L2000021f;
case 0x222:c.instructions+=3;goto B20000222;
case 0x225:c.instructions+=2;goto B20000225;
case 0x226:c.instructions+=1;goto B20000226;
case 0x22b:goto L2000022b;
case 0x22e:c.instructions+=4;goto B2000022e;
case 0x231:c.instructions+=3;goto B20000231;
case 0x234:c.instructions+=2;goto B20000234;
case 0x235:c.instructions+=1;goto B20000235;
case 0x23a:goto L2000023a;
case 0x23d:c.instructions+=3;goto B2000023d;
case 0x240:c.instructions+=2;goto B20000240;
case 0x241:c.instructions+=1;goto B20000241;
case 0x246:goto L20000246;
case 0x249:c.instructions+=3;goto B20000249;
case 0x24c:c.instructions+=2;goto B2000024c;
case 0x24d:c.instructions+=1;goto B2000024d;
case 0x252:goto L20000252;
case 0x255:c.instructions+=8;goto B20000255;
case 0x258:c.instructions+=7;goto B20000258;
case 0x25b:c.instructions+=6;goto B2000025b;
case 0x25d:c.instructions+=5;goto B2000025d;
case 0x261:c.instructions+=4;goto B20000261;
case 0x264:c.instructions+=3;goto B20000264;
case 0x267:c.instructions+=2;goto B20000267;
case 0x268:c.instructions+=1;goto B20000268;
case 0x26d:goto L2000026d;
case 0x270:c.instructions+=3;goto B20000270;
case 0x273:c.instructions+=2;goto B20000273;
case 0x274:c.instructions+=1;goto B20000274;
case 0x279:goto L20000279;
case 0x27c:c.instructions+=5;goto B2000027c;
case 0x27f:c.instructions+=4;goto B2000027f;
case 0x282:c.instructions+=3;goto B20000282;
case 0x285:c.instructions+=2;goto B20000285;
case 0x286:c.instructions+=1;goto B20000286;
case 0x28b:goto L2000028b;
case 0x28e:c.instructions+=3;goto B2000028e;
case 0x291:c.instructions+=2;goto B20000291;
case 0x292:c.instructions+=1;goto B20000292;
case 0x297:goto L20000297;
case 0x29d:c.instructions+=4;goto B2000029d;
case 0x2a0:c.instructions+=3;goto B200002a0;
case 0x2a3:c.instructions+=2;goto B200002a3;
case 0x2a4:c.instructions+=1;goto B200002a4;
case 0x2a9:goto L200002a9;
case 0x2ac:c.instructions+=3;goto B200002ac;
case 0x2af:c.instructions+=2;goto B200002af;
case 0x2b0:c.instructions+=1;goto B200002b0;
case 0x2b5:goto L200002b5;
case 0x2b8:c.instructions+=3;goto B200002b8;
case 0x2bb:c.instructions+=2;goto B200002bb;
case 0x2bc:c.instructions+=1;goto B200002bc;
case 0x2c1:goto L200002c1;
case 0x2c4:c.instructions+=4;goto B200002c4;
case 0x2c7:c.instructions+=3;goto B200002c7;
case 0x2ca:c.instructions+=2;goto B200002ca;
case 0x2cb:c.instructions+=1;goto B200002cb;
case 0x2d0:goto L200002d0;
case 0x2d3:c.instructions+=3;goto B200002d3;
case 0x2d6:c.instructions+=2;goto B200002d6;
case 0x2d7:c.instructions+=1;goto B200002d7;
case 0x2dc:goto L200002dc;
case 0x2df:c.instructions+=3;goto B200002df;
case 0x2e2:c.instructions+=2;goto B200002e2;
case 0x2e3:c.instructions+=1;goto B200002e3;
case 0x2e8:goto L200002e8;
case 0x2eb:c.instructions+=3;goto B200002eb;
case 0x2ee:c.instructions+=2;goto B200002ee;
case 0x2ef:c.instructions+=1;goto B200002ef;
case 0x2f4:goto L200002f4;
case 0x2f7:c.instructions+=3;goto B200002f7;
case 0x2fa:c.instructions+=2;goto B200002fa;
case 0x2fb:c.instructions+=1;goto B200002fb;
case 0x300:goto L20000300;
case 0x303:c.instructions+=3;goto B20000303;
case 0x306:c.instructions+=2;goto B20000306;
case 0x307:c.instructions+=1;goto B20000307;
case 0x30c:goto L2000030c;
case 0x30f:c.instructions+=2;goto B2000030f;
case 0x310:c.instructions+=1;goto B20000310;
case 0x315:goto L20000315;
case 0x318:c.instructions+=3;goto B20000318;
case 0x31b:c.instructions+=2;goto B2000031b;
case 0x31c:c.instructions+=1;goto B2000031c;
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
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2e0ull))));
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
B2000001a:L2000001a:{c.instructions+=27;NFSU2_TR((code+0x1au));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B2000001d:{NFSU2_TR((code+0x1du));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000023:{NFSU2_TR((code+0x23u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000029:{NFSU2_TR((code+0x29u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xacull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B2000002f:{NFSU2_TR((code+0x2fu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000032:{NFSU2_TR((code+0x32u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B20000035:{NFSU2_TR((code+0x35u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B2000003b:{NFSU2_TR((code+0x3bu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B2000003e:{NFSU2_TR((code+0x3eu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x160ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000044:{NFSU2_TR((code+0x44u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1a8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B2000004a:{NFSU2_TR((code+0x4au));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B2000004d:{NFSU2_TR((code+0x4du));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x290ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000053:{NFSU2_TR((code+0x53u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x310ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000059:{NFSU2_TR((code+0x59u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B2000005c:{NFSU2_TR((code+0x5cu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x108ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000062:{NFSU2_TR((code+0x62u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x118ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000068:{NFSU2_TR((code+0x68u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x120ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B2000006e:{NFSU2_TR((code+0x6eu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ccull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000074:{NFSU2_TR((code+0x74u));
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
B20000077:{NFSU2_TR((code+0x77u));
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B2000007a:{NFSU2_TR((code+0x7au));
u8 U[1];
w1(U+0,u8(0x0ull));
s1(u32(r4(R+24)),r1(U+0));
}
B2000007e:{NFSU2_TR((code+0x7eu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x210ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000084:{NFSU2_TR((code+0x84u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000087:{NFSU2_TR((code+0x87u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B2000008a:{NFSU2_TR((code+0x8au));
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
B2000008d:{NFSU2_TR((code+0x8du));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B2000008e:{NFSU2_TR((code+0x8eu));
u8 U[4];
w4(U+0,u32(code+0x93u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x7204f3u);
}
B20000093:L20000093:{c.instructions+=10;NFSU2_TR((code+0x93u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x184ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000099:{NFSU2_TR((code+0x99u));
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
B2000009c:{NFSU2_TR((code+0x9cu));
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B2000009e:{NFSU2_TR((code+0x9eu));
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
B200000a1:{NFSU2_TR((code+0xa1u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200000a4:{NFSU2_TR((code+0xa4u));
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
B200000a7:{NFSU2_TR((code+0xa7u));
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B200000a9:{NFSU2_TR((code+0xa9u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B200000ac:{NFSU2_TR((code+0xacu));
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
B200000ae:{NFSU2_TR((code+0xaeu));
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L200000b2;}}
}
B200000b0:L200000b0:{c.instructions+=1;NFSU2_TR((code+0xb0u));
__builtin_memmove((R+0),(R+4),4);
}
B200000b2:L200000b2:{c.instructions+=4;NFSU2_TR((code+0xb2u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x198ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200000b8:{NFSU2_TR((code+0xb8u));
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
B200000bb:{NFSU2_TR((code+0xbbu));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B200000bc:{NFSU2_TR((code+0xbcu));
u8 U[4];
w4(U+0,u32(code+0xc1u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x72023cu);
}
B200000c1:L200000c1:{c.instructions+=8;NFSU2_TR((code+0xc1u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200000c4:{NFSU2_TR((code+0xc4u));
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
B200000c7:{NFSU2_TR((code+0xc7u));
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B200000c9:{NFSU2_TR((code+0xc9u));
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
B200000cc:{NFSU2_TR((code+0xccu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200000cf:{NFSU2_TR((code+0xcfu));
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
B200000d2:{NFSU2_TR((code+0xd2u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B200000d3:{NFSU2_TR((code+0xd3u));
u8 U[4];
w4(U+0,u32(code+0xd8u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x72023cu);
}
B200000d8:L200000d8:{c.instructions+=5;NFSU2_TR((code+0xd8u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200000db:{NFSU2_TR((code+0xdbu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200000de:{NFSU2_TR((code+0xdeu));
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
B200000e1:{NFSU2_TR((code+0xe1u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B200000e2:{NFSU2_TR((code+0xe2u));
u8 U[4];
w4(U+0,u32(code+0xe7u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x7204f3u);
}
B200000e7:L200000e7:{c.instructions+=4;NFSU2_TR((code+0xe7u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200000ed:{NFSU2_TR((code+0xedu));
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
B200000f0:{NFSU2_TR((code+0xf0u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B200000f1:{NFSU2_TR((code+0xf1u));
u8 U[4];
w4(U+0,u32(code+0xf6u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720ff8u);
}
B200000f6:L200000f6:{c.instructions+=4;NFSU2_TR((code+0xf6u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x168ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200000fc:{NFSU2_TR((code+0xfcu));
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
B200000ff:{NFSU2_TR((code+0xffu));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000100:{NFSU2_TR((code+0x100u));
u8 U[4];
w4(U+0,u32(code+0x105u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720fd1u);
}
B20000105:L20000105:{c.instructions+=5;NFSU2_TR((code+0x105u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B2000010b:{NFSU2_TR((code+0x10bu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000111:{NFSU2_TR((code+0x111u));
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
B20000114:{NFSU2_TR((code+0x114u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000115:{NFSU2_TR((code+0x115u));
u8 U[4];
w4(U+0,u32(code+0x11au));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720fd1u);
}
B2000011a:L2000011a:{c.instructions+=4;NFSU2_TR((code+0x11au));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B2000011d:{NFSU2_TR((code+0x11du));
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
B20000120:{NFSU2_TR((code+0x120u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000121:{NFSU2_TR((code+0x121u));
u8 U[4];
w4(U+0,u32(code+0x126u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720684u);
}
B20000126:L20000126:{c.instructions+=5;NFSU2_TR((code+0x126u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000129:{NFSU2_TR((code+0x129u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1b4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B2000012f:{NFSU2_TR((code+0x12fu));
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
B20000132:{NFSU2_TR((code+0x132u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000133:{NFSU2_TR((code+0x133u));
u8 U[4];
w4(U+0,u32(code+0x138u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720fd1u);
}
B20000138:L20000138:{c.instructions+=5;NFSU2_TR((code+0x138u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B2000013b:{NFSU2_TR((code+0x13bu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x160ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000141:{NFSU2_TR((code+0x141u));
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
B20000144:{NFSU2_TR((code+0x144u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000145:{NFSU2_TR((code+0x145u));
u8 U[4];
w4(U+0,u32(code+0x14au));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x72069eu);
}
B2000014a:L2000014a:{c.instructions+=10;NFSU2_TR((code+0x14au));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x214ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000150:{NFSU2_TR((code+0x150u));
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
B20000153:{NFSU2_TR((code+0x153u));
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B20000155:{NFSU2_TR((code+0x155u));
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
B20000158:{NFSU2_TR((code+0x158u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B2000015b:{NFSU2_TR((code+0x15bu));
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
B2000015e:{NFSU2_TR((code+0x15eu));
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B20000160:{NFSU2_TR((code+0x160u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B20000163:{NFSU2_TR((code+0x163u));
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
B20000165:{NFSU2_TR((code+0x165u));
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L20000169;}}
}
B20000167:L20000167:{c.instructions+=1;NFSU2_TR((code+0x167u));
__builtin_memmove((R+0),(R+4),4);
}
B20000169:L20000169:{c.instructions+=4;NFSU2_TR((code+0x169u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x84ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B2000016f:{NFSU2_TR((code+0x16fu));
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
B20000172:{NFSU2_TR((code+0x172u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000173:{NFSU2_TR((code+0x173u));
u8 U[4];
w4(U+0,u32(code+0x178u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x7204f3u);
}
B20000178:L20000178:{c.instructions+=4;NFSU2_TR((code+0x178u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x84ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B2000017e:{NFSU2_TR((code+0x17eu));
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
B20000181:{NFSU2_TR((code+0x181u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000182:{NFSU2_TR((code+0x182u));
u8 U[4];
w4(U+0,u32(code+0x187u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x7204f3u);
}
B20000187:L20000187:{c.instructions+=4;NFSU2_TR((code+0x187u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B2000018a:{NFSU2_TR((code+0x18au));
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
B2000018d:{NFSU2_TR((code+0x18du));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B2000018e:{NFSU2_TR((code+0x18eu));
u8 U[4];
w4(U+0,u32(code+0x193u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720767u);
}
B20000193:L20000193:{c.instructions+=4;NFSU2_TR((code+0x193u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000196:{NFSU2_TR((code+0x196u));
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
B20000199:{NFSU2_TR((code+0x199u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B2000019a:{NFSU2_TR((code+0x19au));
u8 U[4];
w4(U+0,u32(code+0x19fu));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x7204f3u);
}
B2000019f:L2000019f:{c.instructions+=5;NFSU2_TR((code+0x19fu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200001a5:{NFSU2_TR((code+0x1a5u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
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
EXIT(0x720ff8u);
}
B200001b1:L200001b1:{c.instructions+=4;NFSU2_TR((code+0x1b1u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200001b7:{NFSU2_TR((code+0x1b7u));
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
B200001ba:{NFSU2_TR((code+0x1bau));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B200001bb:{NFSU2_TR((code+0x1bbu));
u8 U[4];
w4(U+0,u32(code+0x1c0u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x7204f3u);
}
B200001c0:L200001c0:{c.instructions+=4;NFSU2_TR((code+0x1c0u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200001c3:{NFSU2_TR((code+0x1c3u));
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
B200001c6:{NFSU2_TR((code+0x1c6u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B200001c7:{NFSU2_TR((code+0x1c7u));
u8 U[4];
w4(U+0,u32(code+0x1ccu));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x7204f3u);
}
B200001cc:L200001cc:{c.instructions+=4;NFSU2_TR((code+0x1ccu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200001cf:{NFSU2_TR((code+0x1cfu));
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
B200001d2:{NFSU2_TR((code+0x1d2u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B200001d3:{NFSU2_TR((code+0x1d3u));
u8 U[4];
w4(U+0,u32(code+0x1d8u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720784u);
}
B200001d8:L200001d8:{c.instructions+=4;NFSU2_TR((code+0x1d8u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200001db:{NFSU2_TR((code+0x1dbu));
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
B200001de:{NFSU2_TR((code+0x1deu));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B200001df:{NFSU2_TR((code+0x1dfu));
u8 U[4];
w4(U+0,u32(code+0x1e4u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720684u);
}
B200001e4:L200001e4:{c.instructions+=9;NFSU2_TR((code+0x1e4u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200001e7:{NFSU2_TR((code+0x1e7u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200001ea:{NFSU2_TR((code+0x1eau));
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
B200001ed:{NFSU2_TR((code+0x1edu));
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B200001ef:{NFSU2_TR((code+0x1efu));
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
B200001f2:{NFSU2_TR((code+0x1f2u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200001f5:{NFSU2_TR((code+0x1f5u));
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
B200001f8:{NFSU2_TR((code+0x1f8u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B200001f9:{NFSU2_TR((code+0x1f9u));
u8 U[4];
w4(U+0,u32(code+0x1feu));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720684u);
}
B200001fe:L200001fe:{c.instructions+=7;NFSU2_TR((code+0x1feu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000204:{NFSU2_TR((code+0x204u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B2000020a:{NFSU2_TR((code+0x20au));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000210:{NFSU2_TR((code+0x210u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000216:{NFSU2_TR((code+0x216u));
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
B20000219:{NFSU2_TR((code+0x219u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B2000021a:{NFSU2_TR((code+0x21au));
u8 U[4];
w4(U+0,u32(code+0x21fu));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x7204f3u);
}
B2000021f:L2000021f:{c.instructions+=4;NFSU2_TR((code+0x21fu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000222:{NFSU2_TR((code+0x222u));
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
B20000225:{NFSU2_TR((code+0x225u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000226:{NFSU2_TR((code+0x226u));
u8 U[4];
w4(U+0,u32(code+0x22bu));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720738u);
}
B2000022b:L2000022b:{c.instructions+=5;NFSU2_TR((code+0x22bu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B2000022e:{NFSU2_TR((code+0x22eu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000231:{NFSU2_TR((code+0x231u));
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
B20000234:{NFSU2_TR((code+0x234u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000235:{NFSU2_TR((code+0x235u));
u8 U[4];
w4(U+0,u32(code+0x23au));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x7204f3u);
}
B2000023a:L2000023a:{c.instructions+=4;NFSU2_TR((code+0x23au));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B2000023d:{NFSU2_TR((code+0x23du));
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
B20000240:{NFSU2_TR((code+0x240u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000241:{NFSU2_TR((code+0x241u));
u8 U[4];
w4(U+0,u32(code+0x246u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720767u);
}
B20000246:L20000246:{c.instructions+=4;NFSU2_TR((code+0x246u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000249:{NFSU2_TR((code+0x249u));
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
B2000024c:{NFSU2_TR((code+0x24cu));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B2000024d:{NFSU2_TR((code+0x24du));
u8 U[4];
w4(U+0,u32(code+0x252u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720684u);
}
B20000252:L20000252:{c.instructions+=9;NFSU2_TR((code+0x252u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000255:{NFSU2_TR((code+0x255u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000258:{NFSU2_TR((code+0x258u));
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
B2000025b:{NFSU2_TR((code+0x25bu));
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B2000025d:{NFSU2_TR((code+0x25du));
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
B20000261:{NFSU2_TR((code+0x261u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000264:{NFSU2_TR((code+0x264u));
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
B20000267:{NFSU2_TR((code+0x267u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000268:{NFSU2_TR((code+0x268u));
u8 U[4];
w4(U+0,u32(code+0x26du));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x7207bfu);
}
B2000026d:L2000026d:{c.instructions+=4;NFSU2_TR((code+0x26du));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000270:{NFSU2_TR((code+0x270u));
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
B20000273:{NFSU2_TR((code+0x273u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000274:{NFSU2_TR((code+0x274u));
u8 U[4];
w4(U+0,u32(code+0x279u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720684u);
}
B20000279:L20000279:{c.instructions+=6;NFSU2_TR((code+0x279u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B2000027c:{NFSU2_TR((code+0x27cu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B2000027f:{NFSU2_TR((code+0x27fu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000282:{NFSU2_TR((code+0x282u));
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
B20000285:{NFSU2_TR((code+0x285u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000286:{NFSU2_TR((code+0x286u));
u8 U[4];
w4(U+0,u32(code+0x28bu));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720767u);
}
B2000028b:L2000028b:{c.instructions+=4;NFSU2_TR((code+0x28bu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B2000028e:{NFSU2_TR((code+0x28eu));
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
B20000291:{NFSU2_TR((code+0x291u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000292:{NFSU2_TR((code+0x292u));
u8 U[4];
w4(U+0,u32(code+0x297u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720767u);
}
B20000297:L20000297:{c.instructions+=5;NFSU2_TR((code+0x297u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B2000029d:{NFSU2_TR((code+0x29du));
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
B200002a0:{NFSU2_TR((code+0x2a0u));
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
B200002a3:{NFSU2_TR((code+0x2a3u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B200002a4:{NFSU2_TR((code+0x2a4u));
u8 U[4];
w4(U+0,u32(code+0x2a9u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720684u);
}
B200002a9:L200002a9:{c.instructions+=4;NFSU2_TR((code+0x2a9u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200002ac:{NFSU2_TR((code+0x2acu));
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
B200002af:{NFSU2_TR((code+0x2afu));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B200002b0:{NFSU2_TR((code+0x2b0u));
u8 U[4];
w4(U+0,u32(code+0x2b5u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720376u);
}
B200002b5:L200002b5:{c.instructions+=4;NFSU2_TR((code+0x2b5u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200002b8:{NFSU2_TR((code+0x2b8u));
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
B200002bb:{NFSU2_TR((code+0x2bbu));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B200002bc:{NFSU2_TR((code+0x2bcu));
u8 U[4];
w4(U+0,u32(code+0x2c1u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x7203bdu);
}
B200002c1:L200002c1:{c.instructions+=5;NFSU2_TR((code+0x2c1u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200002c4:{NFSU2_TR((code+0x2c4u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200002c7:{NFSU2_TR((code+0x2c7u));
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
B200002ca:{NFSU2_TR((code+0x2cau));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B200002cb:{NFSU2_TR((code+0x2cbu));
u8 U[4];
w4(U+0,u32(code+0x2d0u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720d57u);
}
B200002d0:L200002d0:{c.instructions+=4;NFSU2_TR((code+0x2d0u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200002d3:{NFSU2_TR((code+0x2d3u));
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
B200002d6:{NFSU2_TR((code+0x2d6u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B200002d7:{NFSU2_TR((code+0x2d7u));
u8 U[4];
w4(U+0,u32(code+0x2dcu));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720ff8u);
}
B200002dc:L200002dc:{c.instructions+=4;NFSU2_TR((code+0x2dcu));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200002df:{NFSU2_TR((code+0x2dfu));
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
B200002e2:{NFSU2_TR((code+0x2e2u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B200002e3:{NFSU2_TR((code+0x2e3u));
u8 U[4];
w4(U+0,u32(code+0x2e8u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720784u);
}
B200002e8:L200002e8:{c.instructions+=4;NFSU2_TR((code+0x2e8u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200002eb:{NFSU2_TR((code+0x2ebu));
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
B200002ee:{NFSU2_TR((code+0x2eeu));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B200002ef:{NFSU2_TR((code+0x2efu));
u8 U[4];
w4(U+0,u32(code+0x2f4u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720340u);
}
B200002f4:L200002f4:{c.instructions+=4;NFSU2_TR((code+0x2f4u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B200002f7:{NFSU2_TR((code+0x2f7u));
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
B200002fa:{NFSU2_TR((code+0x2fau));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B200002fb:{NFSU2_TR((code+0x2fbu));
u8 U[4];
w4(U+0,u32(code+0x300u));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x7203ebu);
}
B20000300:L20000300:{c.instructions+=4;NFSU2_TR((code+0x300u));
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B20000303:{NFSU2_TR((code+0x303u));
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
B20000306:{NFSU2_TR((code+0x306u));
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B20000307:{NFSU2_TR((code+0x307u));
u8 U[4];
w4(U+0,u32(code+0x30cu));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
EXIT(0x720d57u);
}
B2000030c:L2000030c:{c.instructions+=3;NFSU2_TR((code+0x30cu));
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
EXIT(0x71ff15u);
}
B20000315:L20000315:{c.instructions+=4;NFSU2_TR((code+0x315u));
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
B20000318:{NFSU2_TR((code+0x318u));
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
B2000031b:{NFSU2_TR((code+0x31bu));
u8 U[4];
w4(U+0,u32(0x0ull));
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B2000031c:{NFSU2_TR((code+0x31cu));
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
u32 audio_5191ac04948f(Cpu& c,u32 code){return audio_5191ac04948f_body(c.regs.data(),c,code);}
}
