#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_643(u8* __restrict R,Cpu& c);
u32 body_645(u8* __restrict R,Cpu& c);
u32 body_647(u8* __restrict R,Cpu& c);
u32 body_649(u8* __restrict R,Cpu& c);
u32 body_64a(u8* __restrict R,Cpu& c);
u32 body_64c(u8* __restrict R,Cpu& c);
u32 body_671(u8* __restrict R,Cpu& c);
u32 body_672(u8* __restrict R,Cpu& c);
u32 body_75d(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x64b,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x64b,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_64b(u8* __restrict R,Cpu& c);
u32 page_64b(Cpu& c){return body_64b(c.regs.data(),c);}
__attribute__((noinline)) u32 body_64b(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x64b002:goto L64b002;
case 0x64b003:goto L64b003;
case 0x64b006:c.instructions+=3;goto B64b006;
case 0x64b008:c.instructions+=2;goto B64b008;
case 0x64b00a:c.instructions+=1;goto B64b00a;
case 0x64b00c:goto L64b00c;
case 0x64b00e:c.instructions+=2;goto B64b00e;
case 0x64b010:c.instructions+=1;goto B64b010;
case 0x64b011:goto L64b011;
case 0x64b013:goto L64b013;
case 0x64b015:c.instructions+=3;goto B64b015;
case 0x64b018:c.instructions+=2;goto B64b018;
case 0x64b01b:c.instructions+=1;goto B64b01b;
case 0x64b01d:goto L64b01d;
case 0x64b01f:c.instructions+=2;goto B64b01f;
case 0x64b022:c.instructions+=1;goto B64b022;
case 0x64b024:goto L64b024;
case 0x64b026:c.instructions+=1;goto B64b026;
case 0x64b029:goto L64b029;
case 0x64b02c:c.instructions+=5;goto B64b02c;
case 0x64b02e:c.instructions+=4;goto B64b02e;
case 0x64b030:c.instructions+=3;goto B64b030;
case 0x64b031:c.instructions+=2;goto B64b031;
case 0x64b032:c.instructions+=1;goto B64b032;
case 0x64b037:goto L64b037;
case 0x64b039:c.instructions+=2;goto B64b039;
case 0x64b03c:c.instructions+=1;goto B64b03c;
case 0x64b03e:goto L64b03e;
case 0x64b041:c.instructions+=4;goto B64b041;
case 0x64b042:c.instructions+=3;goto B64b042;
case 0x64b045:c.instructions+=2;goto B64b045;
case 0x64b048:c.instructions+=1;goto B64b048;
case 0x64b04a:goto L64b04a;
case 0x64b04d:c.instructions+=1;goto B64b04d;
case 0x64b050:goto L64b050;
case 0x64b052:c.instructions+=1;goto B64b052;
case 0x64b054:goto L64b054;
case 0x64b056:c.instructions+=1;goto B64b056;
case 0x64b058:goto L64b058;
case 0x64b059:c.instructions+=2;goto B64b059;
case 0x64b05c:c.instructions+=1;goto B64b05c;
case 0x64b05e:goto L64b05e;
case 0x64b05f:c.instructions+=3;goto B64b05f;
case 0x64b062:c.instructions+=2;goto B64b062;
case 0x64b065:c.instructions+=1;goto B64b065;
case 0x64b067:goto L64b067;
case 0x64b06a:goto L64b06a;
case 0x64b06c:c.instructions+=1;goto B64b06c;
case 0x64b06e:goto L64b06e;
case 0x64b070:c.instructions+=1;goto B64b070;
case 0x64b072:goto L64b072;
case 0x64b074:c.instructions+=1;goto B64b074;
case 0x64b076:goto L64b076;
case 0x64b078:goto L64b078;
case 0x64b079:c.instructions+=2;goto B64b079;
case 0x64b07c:c.instructions+=1;goto B64b07c;
case 0x64b07e:goto L64b07e;
case 0x64b07f:c.instructions+=1;goto B64b07f;
case 0x64b081:goto L64b081;
case 0x64b083:goto L64b083;
case 0x64b085:c.instructions+=1;goto B64b085;
case 0x64b087:goto L64b087;
case 0x64b089:goto L64b089;
case 0x64b08b:c.instructions+=1;goto B64b08b;
case 0x64b08d:goto L64b08d;
case 0x64b08f:goto L64b08f;
case 0x64b090:c.instructions+=2;goto B64b090;
case 0x64b093:c.instructions+=1;goto B64b093;
case 0x64b095:goto L64b095;
case 0x64b096:c.instructions+=1;goto B64b096;
case 0x64b098:goto L64b098;
case 0x64b09b:c.instructions+=3;goto B64b09b;
case 0x64b09f:c.instructions+=2;goto B64b09f;
case 0x64b0a3:c.instructions+=1;goto B64b0a3;
case 0x64b0a9:goto L64b0a9;
case 0x64b0aa:c.instructions+=5;goto B64b0aa;
case 0x64b0ab:c.instructions+=4;goto B64b0ab;
case 0x64b0ac:c.instructions+=3;goto B64b0ac;
case 0x64b0af:c.instructions+=2;goto B64b0af;
case 0x64b0b0:c.instructions+=1;goto B64b0b0;
case 0x64b0b3:goto L64b0b3;
case 0x64b0b5:c.instructions+=6;goto B64b0b5;
case 0x64b0b6:c.instructions+=5;goto B64b0b6;
case 0x64b0b8:c.instructions+=4;goto B64b0b8;
case 0x64b0b9:c.instructions+=3;goto B64b0b9;
case 0x64b0bb:c.instructions+=2;goto B64b0bb;
case 0x64b0be:c.instructions+=1;goto B64b0be;
case 0x64b0c0:goto L64b0c0;
case 0x64b0c3:c.instructions+=7;goto B64b0c3;
case 0x64b0c6:c.instructions+=6;goto B64b0c6;
case 0x64b0c8:c.instructions+=5;goto B64b0c8;
case 0x64b0c9:c.instructions+=4;goto B64b0c9;
case 0x64b0cb:c.instructions+=3;goto B64b0cb;
case 0x64b0ce:c.instructions+=2;goto B64b0ce;
case 0x64b0d1:c.instructions+=1;goto B64b0d1;
case 0x64b0d3:goto L64b0d3;
case 0x64b0d6:goto L64b0d6;
case 0x64b0d7:c.instructions+=4;goto B64b0d7;
case 0x64b0da:c.instructions+=3;goto B64b0da;
case 0x64b0db:c.instructions+=2;goto B64b0db;
case 0x64b0de:c.instructions+=1;goto B64b0de;
case 0x64b0df:goto L64b0df;
case 0x64b0e1:c.instructions+=2;goto B64b0e1;
case 0x64b0e4:c.instructions+=1;goto B64b0e4;
case 0x64b0e6:goto L64b0e6;
case 0x64b0e9:c.instructions+=4;goto B64b0e9;
case 0x64b0ea:c.instructions+=3;goto B64b0ea;
case 0x64b0ed:c.instructions+=2;goto B64b0ed;
case 0x64b0ee:c.instructions+=1;goto B64b0ee;
case 0x64b0f3:goto L64b0f3;
case 0x64b0f5:c.instructions+=1;goto B64b0f5;
case 0x64b0f7:goto L64b0f7;
case 0x64b0fa:c.instructions+=3;goto B64b0fa;
case 0x64b0fb:c.instructions+=2;goto B64b0fb;
case 0x64b0fe:c.instructions+=1;goto B64b0fe;
case 0x64b100:goto L64b100;
case 0x64b103:goto L64b103;
case 0x64b105:c.instructions+=1;goto B64b105;
case 0x64b107:goto L64b107;
case 0x64b109:c.instructions+=1;goto B64b109;
case 0x64b10b:goto L64b10b;
case 0x64b10c:c.instructions+=2;goto B64b10c;
case 0x64b10f:c.instructions+=1;goto B64b10f;
case 0x64b111:goto L64b111;
case 0x64b114:c.instructions+=3;goto B64b114;
case 0x64b117:c.instructions+=2;goto B64b117;
case 0x64b11b:c.instructions+=1;goto B64b11b;
case 0x64b11d:goto L64b11d;
case 0x64b11e:c.instructions+=2;goto B64b11e;
case 0x64b11f:c.instructions+=1;goto B64b11f;
case 0x64b120:goto L64b120;
case 0x64b121:c.instructions+=1;goto B64b121;
case 0x64b124:goto L64b124;
case 0x64b126:c.instructions+=7;goto B64b126;
case 0x64b127:c.instructions+=6;goto B64b127;
case 0x64b129:c.instructions+=5;goto B64b129;
case 0x64b12a:c.instructions+=4;goto B64b12a;
case 0x64b12d:c.instructions+=3;goto B64b12d;
case 0x64b12f:c.instructions+=2;goto B64b12f;
case 0x64b131:c.instructions+=1;goto B64b131;
case 0x64b133:goto L64b133;
case 0x64b136:c.instructions+=8;goto B64b136;
case 0x64b137:c.instructions+=7;goto B64b137;
case 0x64b13a:c.instructions+=6;goto B64b13a;
case 0x64b13c:c.instructions+=5;goto B64b13c;
case 0x64b13d:c.instructions+=4;goto B64b13d;
case 0x64b13f:c.instructions+=3;goto B64b13f;
case 0x64b142:c.instructions+=2;goto B64b142;
case 0x64b145:c.instructions+=1;goto B64b145;
case 0x64b147:goto L64b147;
case 0x64b14a:goto L64b14a;
case 0x64b14d:c.instructions+=6;goto B64b14d;
case 0x64b14e:c.instructions+=5;goto B64b14e;
case 0x64b150:c.instructions+=4;goto B64b150;
case 0x64b151:c.instructions+=3;goto B64b151;
case 0x64b154:c.instructions+=2;goto B64b154;
case 0x64b157:c.instructions+=1;goto B64b157;
case 0x64b159:goto L64b159;
case 0x64b15b:goto L64b15b;
case 0x64b15d:c.instructions+=2;goto B64b15d;
case 0x64b160:c.instructions+=1;goto B64b160;
case 0x64b163:goto L64b163;
case 0x64b165:goto L64b165;
case 0x64b167:c.instructions+=2;goto B64b167;
case 0x64b16a:c.instructions+=1;goto B64b16a;
case 0x64b16c:goto L64b16c;
case 0x64b16f:goto L64b16f;
case 0x64b170:c.instructions+=2;goto B64b170;
case 0x64b171:c.instructions+=1;goto B64b171;
case 0x64b176:goto L64b176;
case 0x64b178:c.instructions+=2;goto B64b178;
case 0x64b17a:c.instructions+=1;goto B64b17a;
case 0x64b17c:goto L64b17c;
case 0x64b17f:c.instructions+=4;goto B64b17f;
case 0x64b180:c.instructions+=3;goto B64b180;
case 0x64b183:c.instructions+=2;goto B64b183;
case 0x64b186:c.instructions+=1;goto B64b186;
case 0x64b188:goto L64b188;
case 0x64b18b:goto L64b18b;
case 0x64b18d:c.instructions+=1;goto B64b18d;
case 0x64b18f:goto L64b18f;
case 0x64b191:c.instructions+=1;goto B64b191;
case 0x64b193:goto L64b193;
case 0x64b194:c.instructions+=2;goto B64b194;
case 0x64b197:c.instructions+=1;goto B64b197;
case 0x64b199:goto L64b199;
case 0x64b19c:c.instructions+=3;goto B64b19c;
case 0x64b1a0:c.instructions+=2;goto B64b1a0;
case 0x64b1a4:c.instructions+=1;goto B64b1a4;
case 0x64b1a6:goto L64b1a6;
case 0x64b1a7:c.instructions+=2;goto B64b1a7;
case 0x64b1a8:c.instructions+=1;goto B64b1a8;
case 0x64b1a9:goto L64b1a9;
case 0x64b1ab:c.instructions+=2;goto B64b1ab;
case 0x64b1ac:c.instructions+=1;goto B64b1ac;
case 0x64b1af:goto L64b1af;
case 0x64b1b1:c.instructions+=17;goto B64b1b1;
case 0x64b1b2:c.instructions+=16;goto B64b1b2;
case 0x64b1b4:c.instructions+=15;goto B64b1b4;
case 0x64b1b7:c.instructions+=14;goto B64b1b7;
case 0x64b1ba:c.instructions+=13;goto B64b1ba;
case 0x64b1bc:c.instructions+=12;goto B64b1bc;
case 0x64b1be:c.instructions+=11;goto B64b1be;
case 0x64b1bf:c.instructions+=10;goto B64b1bf;
case 0x64b1c2:c.instructions+=9;goto B64b1c2;
case 0x64b1c3:c.instructions+=8;goto B64b1c3;
case 0x64b1c5:c.instructions+=7;goto B64b1c5;
case 0x64b1c8:c.instructions+=6;goto B64b1c8;
case 0x64b1cb:c.instructions+=5;goto B64b1cb;
case 0x64b1ce:c.instructions+=4;goto B64b1ce;
case 0x64b1cf:c.instructions+=3;goto B64b1cf;
case 0x64b1d2:c.instructions+=2;goto B64b1d2;
case 0x64b1d5:c.instructions+=1;goto B64b1d5;
case 0x64b1d7:goto L64b1d7;
case 0x64b1da:c.instructions+=1;goto B64b1da;
case 0x64b1dc:goto L64b1dc;
case 0x64b1e3:c.instructions+=1;goto B64b1e3;
case 0x64b1e6:goto L64b1e6;
case 0x64b1e8:c.instructions+=1;goto B64b1e8;
case 0x64b1ee:goto L64b1ee;
case 0x64b1f1:c.instructions+=1;goto B64b1f1;
case 0x64b1f7:goto L64b1f7;
case 0x64b1fa:c.instructions+=1;goto B64b1fa;
case 0x64b1fc:goto L64b1fc;
case 0x64b1ff:c.instructions+=1;goto B64b1ff;
case 0x64b205:goto L64b205;
case 0x64b207:c.instructions+=5;goto B64b207;
case 0x64b20a:c.instructions+=4;goto B64b20a;
case 0x64b20d:c.instructions+=3;goto B64b20d;
case 0x64b210:c.instructions+=2;goto B64b210;
case 0x64b212:c.instructions+=1;goto B64b212;
case 0x64b218:goto L64b218;
case 0x64b21b:c.instructions+=4;goto B64b21b;
case 0x64b21f:c.instructions+=3;goto B64b21f;
case 0x64b221:c.instructions+=2;goto B64b221;
case 0x64b223:c.instructions+=1;goto B64b223;
case 0x64b225:goto L64b225;
case 0x64b228:c.instructions+=5;goto B64b228;
case 0x64b22a:c.instructions+=4;goto B64b22a;
case 0x64b22d:c.instructions+=3;goto B64b22d;
case 0x64b230:c.instructions+=2;goto B64b230;
case 0x64b233:c.instructions+=1;goto B64b233;
case 0x64b238:goto L64b238;
case 0x64b23a:c.instructions+=2;goto B64b23a;
case 0x64b23d:c.instructions+=1;goto B64b23d;
case 0x64b243:goto L64b243;
case 0x64b246:c.instructions+=2;goto B64b246;
case 0x64b249:c.instructions+=1;goto B64b249;
case 0x64b24b:goto L64b24b;
case 0x64b24c:c.instructions+=1;goto B64b24c;
case 0x64b24e:goto L64b24e;
case 0x64b253:goto L64b253;
case 0x64b256:c.instructions+=1;goto B64b256;
case 0x64b25c:goto L64b25c;
case 0x64b25e:c.instructions+=1;goto B64b25e;
case 0x64b264:goto L64b264;
case 0x64b267:c.instructions+=3;goto B64b267;
case 0x64b269:c.instructions+=2;goto B64b269;
case 0x64b26b:c.instructions+=1;goto B64b26b;
case 0x64b271:goto L64b271;
case 0x64b274:c.instructions+=5;goto B64b274;
case 0x64b276:c.instructions+=4;goto B64b276;
case 0x64b278:c.instructions+=3;goto B64b278;
case 0x64b27a:c.instructions+=2;goto B64b27a;
case 0x64b27c:c.instructions+=1;goto B64b27c;
case 0x64b27e:goto L64b27e;
case 0x64b281:c.instructions+=4;goto B64b281;
case 0x64b284:c.instructions+=3;goto B64b284;
case 0x64b285:c.instructions+=2;goto B64b285;
case 0x64b288:c.instructions+=1;goto B64b288;
case 0x64b28d:goto L64b28d;
case 0x64b28f:c.instructions+=1;goto B64b28f;
case 0x64b292:goto L64b292;
case 0x64b294:c.instructions+=3;goto B64b294;
case 0x64b295:c.instructions+=2;goto B64b295;
case 0x64b297:c.instructions+=1;goto B64b297;
case 0x64b299:goto L64b299;
case 0x64b29b:c.instructions+=5;goto B64b29b;
case 0x64b2a1:c.instructions+=4;goto B64b2a1;
case 0x64b2a4:c.instructions+=3;goto B64b2a4;
case 0x64b2a6:c.instructions+=2;goto B64b2a6;
case 0x64b2a7:c.instructions+=1;goto B64b2a7;
case 0x64b2ac:goto L64b2ac;
case 0x64b2ae:c.instructions+=3;goto B64b2ae;
case 0x64b2b0:c.instructions+=2;goto B64b2b0;
case 0x64b2b3:c.instructions+=1;goto B64b2b3;
case 0x64b2b5:goto L64b2b5;
case 0x64b2b7:c.instructions+=2;goto B64b2b7;
case 0x64b2b9:c.instructions+=1;goto B64b2b9;
case 0x64b2bc:goto L64b2bc;
case 0x64b2be:goto L64b2be;
case 0x64b2c0:c.instructions+=1;goto B64b2c0;
case 0x64b2c3:goto L64b2c3;
case 0x64b2c5:goto L64b2c5;
case 0x64b2c8:c.instructions+=1;goto B64b2c8;
case 0x64b2cd:goto L64b2cd;
case 0x64b2d0:c.instructions+=2;goto B64b2d0;
case 0x64b2d3:c.instructions+=1;goto B64b2d3;
case 0x64b2d6:goto L64b2d6;
case 0x64b2d8:c.instructions+=11;goto B64b2d8;
case 0x64b2db:c.instructions+=10;goto B64b2db;
case 0x64b2de:c.instructions+=9;goto B64b2de;
case 0x64b2e0:c.instructions+=8;goto B64b2e0;
case 0x64b2e3:c.instructions+=7;goto B64b2e3;
case 0x64b2e6:c.instructions+=6;goto B64b2e6;
case 0x64b2e9:c.instructions+=5;goto B64b2e9;
case 0x64b2ec:c.instructions+=4;goto B64b2ec;
case 0x64b2ee:c.instructions+=3;goto B64b2ee;
case 0x64b2f1:c.instructions+=2;goto B64b2f1;
case 0x64b2f3:c.instructions+=1;goto B64b2f3;
case 0x64b2f9:goto L64b2f9;
case 0x64b2fb:goto L64b2fb;
case 0x64b2fe:c.instructions+=2;goto B64b2fe;
case 0x64b305:c.instructions+=1;goto B64b305;
case 0x64b30a:goto L64b30a;
case 0x64b30f:goto L64b30f;
case 0x64b311:c.instructions+=1;goto B64b311;
case 0x64b313:goto L64b313;
case 0x64b316:c.instructions+=1;goto B64b316;
case 0x64b319:goto L64b319;
case 0x64b31b:c.instructions+=1;goto B64b31b;
case 0x64b31d:goto L64b31d;
case 0x64b320:c.instructions+=5;goto B64b320;
case 0x64b321:c.instructions+=4;goto B64b321;
case 0x64b323:c.instructions+=3;goto B64b323;
case 0x64b326:c.instructions+=2;goto B64b326;
case 0x64b328:c.instructions+=1;goto B64b328;
case 0x64b32a:goto L64b32a;
case 0x64b32d:c.instructions+=2;goto B64b32d;
case 0x64b330:c.instructions+=1;goto B64b330;
case 0x64b335:goto L64b335;
case 0x64b338:c.instructions+=4;goto B64b338;
case 0x64b33c:c.instructions+=3;goto B64b33c;
case 0x64b33f:c.instructions+=2;goto B64b33f;
case 0x64b340:c.instructions+=1;goto B64b340;
case 0x64b342:goto L64b342;
case 0x64b343:c.instructions+=1;goto B64b343;
case 0x64b345:goto L64b345;
case 0x64b346:c.instructions+=1;goto B64b346;
case 0x64b34c:goto L64b34c;
case 0x64b34f:c.instructions+=3;goto B64b34f;
case 0x64b351:c.instructions+=2;goto B64b351;
case 0x64b353:c.instructions+=1;goto B64b353;
case 0x64b355:goto L64b355;
case 0x64b358:goto L64b358;
case 0x64b35a:c.instructions+=2;goto B64b35a;
case 0x64b35c:c.instructions+=1;goto B64b35c;
case 0x64b35e:goto L64b35e;
case 0x64b360:c.instructions+=9;goto B64b360;
case 0x64b363:c.instructions+=8;goto B64b363;
case 0x64b366:c.instructions+=7;goto B64b366;
case 0x64b369:c.instructions+=6;goto B64b369;
case 0x64b36b:c.instructions+=5;goto B64b36b;
case 0x64b36e:c.instructions+=4;goto B64b36e;
case 0x64b36f:c.instructions+=3;goto B64b36f;
case 0x64b371:c.instructions+=2;goto B64b371;
case 0x64b373:c.instructions+=1;goto B64b373;
case 0x64b375:goto L64b375;
case 0x64b377:c.instructions+=3;goto B64b377;
case 0x64b37a:c.instructions+=2;goto B64b37a;
case 0x64b37c:c.instructions+=1;goto B64b37c;
case 0x64b37e:goto L64b37e;
case 0x64b380:c.instructions+=3;goto B64b380;
case 0x64b382:c.instructions+=2;goto B64b382;
case 0x64b385:c.instructions+=1;goto B64b385;
case 0x64b387:goto L64b387;
case 0x64b38a:goto L64b38a;
case 0x64b38c:c.instructions+=2;goto B64b38c;
case 0x64b38e:c.instructions+=1;goto B64b38e;
case 0x64b390:goto L64b390;
case 0x64b393:c.instructions+=10;goto B64b393;
case 0x64b395:c.instructions+=9;goto B64b395;
case 0x64b399:c.instructions+=8;goto B64b399;
case 0x64b39c:c.instructions+=7;goto B64b39c;
case 0x64b39f:c.instructions+=6;goto B64b39f;
case 0x64b3a1:c.instructions+=5;goto B64b3a1;
case 0x64b3a4:c.instructions+=4;goto B64b3a4;
case 0x64b3a5:c.instructions+=3;goto B64b3a5;
case 0x64b3a7:c.instructions+=2;goto B64b3a7;
case 0x64b3a9:c.instructions+=1;goto B64b3a9;
case 0x64b3ab:goto L64b3ab;
case 0x64b3ad:c.instructions+=3;goto B64b3ad;
case 0x64b3b0:c.instructions+=2;goto B64b3b0;
case 0x64b3b2:c.instructions+=1;goto B64b3b2;
case 0x64b3b4:goto L64b3b4;
case 0x64b3b6:c.instructions+=1;goto B64b3b6;
case 0x64b3b8:goto L64b3b8;
case 0x64b3bb:goto L64b3bb;
case 0x64b3bd:c.instructions+=2;goto B64b3bd;
case 0x64b3bf:c.instructions+=1;goto B64b3bf;
case 0x64b3c1:goto L64b3c1;
case 0x64b3c4:c.instructions+=12;goto B64b3c4;
case 0x64b3c6:c.instructions+=11;goto B64b3c6;
case 0x64b3c8:c.instructions+=10;goto B64b3c8;
case 0x64b3cb:c.instructions+=9;goto B64b3cb;
case 0x64b3ce:c.instructions+=8;goto B64b3ce;
case 0x64b3d1:c.instructions+=7;goto B64b3d1;
case 0x64b3d2:c.instructions+=6;goto B64b3d2;
case 0x64b3d4:c.instructions+=5;goto B64b3d4;
case 0x64b3d7:c.instructions+=4;goto B64b3d7;
case 0x64b3d9:c.instructions+=3;goto B64b3d9;
case 0x64b3dc:c.instructions+=2;goto B64b3dc;
case 0x64b3de:c.instructions+=1;goto B64b3de;
case 0x64b3e0:goto L64b3e0;
case 0x64b3e3:c.instructions+=2;goto B64b3e3;
case 0x64b3e6:c.instructions+=1;goto B64b3e6;
case 0x64b3e8:goto L64b3e8;
case 0x64b3eb:c.instructions+=2;goto B64b3eb;
case 0x64b3ee:c.instructions+=1;goto B64b3ee;
case 0x64b3f0:goto L64b3f0;
case 0x64b3f7:goto L64b3f7;
case 0x64b3fa:c.instructions+=5;goto B64b3fa;
case 0x64b3fb:c.instructions+=4;goto B64b3fb;
case 0x64b3fc:c.instructions+=3;goto B64b3fc;
case 0x64b3fd:c.instructions+=2;goto B64b3fd;
case 0x64b3fe:c.instructions+=1;goto B64b3fe;
case 0x64b401:goto L64b401;
case 0x64b403:c.instructions+=10;goto B64b403;
case 0x64b404:c.instructions+=9;goto B64b404;
case 0x64b406:c.instructions+=8;goto B64b406;
case 0x64b409:c.instructions+=7;goto B64b409;
case 0x64b40c:c.instructions+=6;goto B64b40c;
case 0x64b40d:c.instructions+=5;goto B64b40d;
case 0x64b410:c.instructions+=4;goto B64b410;
case 0x64b411:c.instructions+=3;goto B64b411;
case 0x64b414:c.instructions+=2;goto B64b414;
case 0x64b415:c.instructions+=1;goto B64b415;
case 0x64b41a:goto L64b41a;
case 0x64b41b:c.instructions+=1;goto B64b41b;
case 0x64b41e:goto L64b41e;
case 0x64b420:c.instructions+=14;goto B64b420;
case 0x64b421:c.instructions+=13;goto B64b421;
case 0x64b423:c.instructions+=12;goto B64b423;
case 0x64b424:c.instructions+=11;goto B64b424;
case 0x64b427:c.instructions+=10;goto B64b427;
case 0x64b429:c.instructions+=9;goto B64b429;
case 0x64b42d:c.instructions+=8;goto B64b42d;
case 0x64b431:c.instructions+=7;goto B64b431;
case 0x64b434:c.instructions+=6;goto B64b434;
case 0x64b435:c.instructions+=5;goto B64b435;
case 0x64b436:c.instructions+=4;goto B64b436;
case 0x64b438:c.instructions+=3;goto B64b438;
case 0x64b439:c.instructions+=2;goto B64b439;
case 0x64b43c:c.instructions+=1;goto B64b43c;
case 0x64b43e:goto L64b43e;
case 0x64b441:c.instructions+=1;goto B64b441;
case 0x64b443:goto L64b443;
case 0x64b445:c.instructions+=1;goto B64b445;
case 0x64b446:goto L64b446;
case 0x64b448:c.instructions+=1;goto B64b448;
case 0x64b44e:goto L64b44e;
case 0x64b451:c.instructions+=1;goto B64b451;
case 0x64b457:goto L64b457;
case 0x64b459:c.instructions+=3;goto B64b459;
case 0x64b45a:c.instructions+=2;goto B64b45a;
case 0x64b45c:c.instructions+=1;goto B64b45c;
case 0x64b45e:goto L64b45e;
case 0x64b461:c.instructions+=1;goto B64b461;
case 0x64b467:goto L64b467;
case 0x64b469:c.instructions+=5;goto B64b469;
case 0x64b46c:c.instructions+=4;goto B64b46c;
case 0x64b46f:c.instructions+=3;goto B64b46f;
case 0x64b472:c.instructions+=2;goto B64b472;
case 0x64b474:c.instructions+=1;goto B64b474;
case 0x64b47a:goto L64b47a;
case 0x64b47d:c.instructions+=4;goto B64b47d;
case 0x64b481:c.instructions+=3;goto B64b481;
case 0x64b483:c.instructions+=2;goto B64b483;
case 0x64b485:c.instructions+=1;goto B64b485;
case 0x64b487:goto L64b487;
case 0x64b489:c.instructions+=4;goto B64b489;
case 0x64b48c:c.instructions+=3;goto B64b48c;
case 0x64b48f:c.instructions+=2;goto B64b48f;
case 0x64b492:c.instructions+=1;goto B64b492;
case 0x64b497:goto L64b497;
case 0x64b499:c.instructions+=2;goto B64b499;
case 0x64b49c:c.instructions+=1;goto B64b49c;
case 0x64b4a2:goto L64b4a2;
case 0x64b4a5:c.instructions+=2;goto B64b4a5;
case 0x64b4a8:c.instructions+=1;goto B64b4a8;
case 0x64b4aa:goto L64b4aa;
case 0x64b4ab:c.instructions+=1;goto B64b4ab;
case 0x64b4ad:goto L64b4ad;
case 0x64b4b2:goto L64b4b2;
case 0x64b4b4:c.instructions+=1;goto B64b4b4;
case 0x64b4b6:goto L64b4b6;
case 0x64b4b8:c.instructions+=1;goto B64b4b8;
case 0x64b4ba:goto L64b4ba;
case 0x64b4bd:c.instructions+=1;goto B64b4bd;
case 0x64b4c0:goto L64b4c0;
case 0x64b4c2:c.instructions+=2;goto B64b4c2;
case 0x64b4c4:c.instructions+=1;goto B64b4c4;
case 0x64b4c6:goto L64b4c6;
case 0x64b4c9:c.instructions+=9;goto B64b4c9;
case 0x64b4cc:c.instructions+=8;goto B64b4cc;
case 0x64b4ce:c.instructions+=7;goto B64b4ce;
case 0x64b4d0:c.instructions+=6;goto B64b4d0;
case 0x64b4d2:c.instructions+=5;goto B64b4d2;
case 0x64b4d3:c.instructions+=4;goto B64b4d3;
case 0x64b4d5:c.instructions+=3;goto B64b4d5;
case 0x64b4d8:c.instructions+=2;goto B64b4d8;
case 0x64b4da:c.instructions+=1;goto B64b4da;
case 0x64b4dc:goto L64b4dc;
case 0x64b4de:goto L64b4de;
case 0x64b4e0:c.instructions+=1;goto B64b4e0;
case 0x64b4e2:goto L64b4e2;
case 0x64b4e5:c.instructions+=1;goto B64b4e5;
case 0x64b4e8:goto L64b4e8;
case 0x64b4eb:c.instructions+=1;goto B64b4eb;
case 0x64b4ed:goto L64b4ed;
case 0x64b4ef:c.instructions+=7;goto B64b4ef;
case 0x64b4f2:c.instructions+=6;goto B64b4f2;
case 0x64b4f4:c.instructions+=5;goto B64b4f4;
case 0x64b4f5:c.instructions+=4;goto B64b4f5;
case 0x64b4f7:c.instructions+=3;goto B64b4f7;
case 0x64b4fa:c.instructions+=2;goto B64b4fa;
case 0x64b4fc:c.instructions+=1;goto B64b4fc;
case 0x64b4fe:goto L64b4fe;
case 0x64b501:c.instructions+=2;goto B64b501;
case 0x64b504:c.instructions+=1;goto B64b504;
case 0x64b509:goto L64b509;
case 0x64b50c:c.instructions+=4;goto B64b50c;
case 0x64b510:c.instructions+=3;goto B64b510;
case 0x64b513:c.instructions+=2;goto B64b513;
case 0x64b514:c.instructions+=1;goto B64b514;
case 0x64b516:goto L64b516;
case 0x64b517:c.instructions+=1;goto B64b517;
case 0x64b519:goto L64b519;
case 0x64b51a:c.instructions+=1;goto B64b51a;
case 0x64b520:goto L64b520;
case 0x64b523:c.instructions+=3;goto B64b523;
case 0x64b525:c.instructions+=2;goto B64b525;
case 0x64b527:c.instructions+=1;goto B64b527;
case 0x64b529:goto L64b529;
case 0x64b52c:goto L64b52c;
case 0x64b52e:c.instructions+=2;goto B64b52e;
case 0x64b530:c.instructions+=1;goto B64b530;
case 0x64b532:goto L64b532;
case 0x64b535:c.instructions+=11;goto B64b535;
case 0x64b538:c.instructions+=10;goto B64b538;
case 0x64b53a:c.instructions+=9;goto B64b53a;
case 0x64b53c:c.instructions+=8;goto B64b53c;
case 0x64b53f:c.instructions+=7;goto B64b53f;
case 0x64b541:c.instructions+=6;goto B64b541;
case 0x64b544:c.instructions+=5;goto B64b544;
case 0x64b545:c.instructions+=4;goto B64b545;
case 0x64b547:c.instructions+=3;goto B64b547;
case 0x64b549:c.instructions+=2;goto B64b549;
case 0x64b54b:c.instructions+=1;goto B64b54b;
case 0x64b54d:goto L64b54d;
case 0x64b54f:c.instructions+=3;goto B64b54f;
case 0x64b552:c.instructions+=2;goto B64b552;
case 0x64b554:c.instructions+=1;goto B64b554;
case 0x64b556:goto L64b556;
case 0x64b559:c.instructions+=3;goto B64b559;
case 0x64b55b:c.instructions+=2;goto B64b55b;
case 0x64b55d:c.instructions+=1;goto B64b55d;
case 0x64b55f:goto L64b55f;
case 0x64b562:goto L64b562;
case 0x64b564:c.instructions+=2;goto B64b564;
case 0x64b566:c.instructions+=1;goto B64b566;
case 0x64b568:goto L64b568;
case 0x64b56b:c.instructions+=10;goto B64b56b;
case 0x64b56f:c.instructions+=9;goto B64b56f;
case 0x64b572:c.instructions+=8;goto B64b572;
case 0x64b574:c.instructions+=7;goto B64b574;
case 0x64b577:c.instructions+=6;goto B64b577;
case 0x64b579:c.instructions+=5;goto B64b579;
case 0x64b57c:c.instructions+=4;goto B64b57c;
case 0x64b57d:c.instructions+=3;goto B64b57d;
case 0x64b57f:c.instructions+=2;goto B64b57f;
case 0x64b581:c.instructions+=1;goto B64b581;
case 0x64b583:goto L64b583;
case 0x64b585:c.instructions+=3;goto B64b585;
case 0x64b588:c.instructions+=2;goto B64b588;
case 0x64b58a:c.instructions+=1;goto B64b58a;
case 0x64b58c:goto L64b58c;
case 0x64b58f:c.instructions+=3;goto B64b58f;
case 0x64b591:c.instructions+=2;goto B64b591;
case 0x64b593:c.instructions+=1;goto B64b593;
case 0x64b595:goto L64b595;
case 0x64b598:goto L64b598;
case 0x64b59a:c.instructions+=2;goto B64b59a;
case 0x64b59c:c.instructions+=1;goto B64b59c;
case 0x64b59e:goto L64b59e;
case 0x64b5a1:c.instructions+=11;goto B64b5a1;
case 0x64b5a3:c.instructions+=10;goto B64b5a3;
case 0x64b5a6:c.instructions+=9;goto B64b5a6;
case 0x64b5a8:c.instructions+=8;goto B64b5a8;
case 0x64b5ab:c.instructions+=7;goto B64b5ab;
case 0x64b5ae:c.instructions+=6;goto B64b5ae;
case 0x64b5b0:c.instructions+=5;goto B64b5b0;
case 0x64b5b3:c.instructions+=4;goto B64b5b3;
case 0x64b5b4:c.instructions+=3;goto B64b5b4;
case 0x64b5b6:c.instructions+=2;goto B64b5b6;
case 0x64b5b8:c.instructions+=1;goto B64b5b8;
case 0x64b5ba:goto L64b5ba;
case 0x64b5bc:c.instructions+=2;goto B64b5bc;
case 0x64b5bf:c.instructions+=1;goto B64b5bf;
case 0x64b5c1:goto L64b5c1;
case 0x64b5c4:c.instructions+=2;goto B64b5c4;
case 0x64b5c7:c.instructions+=1;goto B64b5c7;
case 0x64b5c9:goto L64b5c9;
case 0x64b5d0:goto L64b5d0;
case 0x64b5d3:c.instructions+=5;goto B64b5d3;
case 0x64b5d4:c.instructions+=4;goto B64b5d4;
case 0x64b5d5:c.instructions+=3;goto B64b5d5;
case 0x64b5d6:c.instructions+=2;goto B64b5d6;
case 0x64b5d7:c.instructions+=1;goto B64b5d7;
case 0x64b5da:goto L64b5da;
case 0x64b5dc:c.instructions+=10;goto B64b5dc;
case 0x64b5dd:c.instructions+=9;goto B64b5dd;
case 0x64b5df:c.instructions+=8;goto B64b5df;
case 0x64b5e2:c.instructions+=7;goto B64b5e2;
case 0x64b5e5:c.instructions+=6;goto B64b5e5;
case 0x64b5e6:c.instructions+=5;goto B64b5e6;
case 0x64b5e9:c.instructions+=4;goto B64b5e9;
case 0x64b5ea:c.instructions+=3;goto B64b5ea;
case 0x64b5ed:c.instructions+=2;goto B64b5ed;
case 0x64b5ee:c.instructions+=1;goto B64b5ee;
case 0x64b5f3:goto L64b5f3;
case 0x64b5f4:c.instructions+=1;goto B64b5f4;
case 0x64b5f7:goto L64b5f7;
case 0x64b5fc:c.instructions+=1;goto B64b5fc;
case 0x64b5ff:goto L64b5ff;
case 0x64b601:c.instructions+=10;goto B64b601;
case 0x64b602:c.instructions+=9;goto B64b602;
case 0x64b604:c.instructions+=8;goto B64b604;
case 0x64b607:c.instructions+=7;goto B64b607;
case 0x64b60a:c.instructions+=6;goto B64b60a;
case 0x64b60d:c.instructions+=5;goto B64b60d;
case 0x64b60e:c.instructions+=4;goto B64b60e;
case 0x64b611:c.instructions+=3;goto B64b611;
case 0x64b613:c.instructions+=2;goto B64b613;
case 0x64b614:c.instructions+=1;goto B64b614;
case 0x64b616:goto L64b616;
case 0x64b617:c.instructions+=1;goto B64b617;
case 0x64b61a:goto L64b61a;
case 0x64b61d:c.instructions+=2;goto B64b61d;
case 0x64b61f:c.instructions+=1;goto B64b61f;
case 0x64b622:goto L64b622;
case 0x64b623:c.instructions+=1;goto B64b623;
case 0x64b625:goto L64b625;
case 0x64b626:goto L64b626;
case 0x64b627:c.instructions+=2;goto B64b627;
case 0x64b628:c.instructions+=1;goto B64b628;
case 0x64b62b:goto L64b62b;
case 0x64b62d:c.instructions+=5;goto B64b62d;
case 0x64b62e:c.instructions+=4;goto B64b62e;
case 0x64b630:c.instructions+=3;goto B64b630;
case 0x64b633:c.instructions+=2;goto B64b633;
case 0x64b635:c.instructions+=1;goto B64b635;
case 0x64b637:goto L64b637;
case 0x64b639:c.instructions+=1;goto B64b639;
case 0x64b63e:goto L64b63e;
case 0x64b642:c.instructions+=1;goto B64b642;
case 0x64b644:goto L64b644;
case 0x64b647:c.instructions+=5;goto B64b647;
case 0x64b64a:c.instructions+=4;goto B64b64a;
case 0x64b64d:c.instructions+=3;goto B64b64d;
case 0x64b651:c.instructions+=2;goto B64b651;
case 0x64b653:c.instructions+=1;goto B64b653;
case 0x64b658:goto L64b658;
case 0x64b65c:c.instructions+=1;goto B64b65c;
case 0x64b65e:goto L64b65e;
case 0x64b65f:c.instructions+=1;goto B64b65f;
case 0x64b660:goto L64b660;
case 0x64b662:c.instructions+=6;goto B64b662;
case 0x64b663:c.instructions+=5;goto B64b663;
case 0x64b665:c.instructions+=4;goto B64b665;
case 0x64b669:c.instructions+=3;goto B64b669;
case 0x64b66a:c.instructions+=2;goto B64b66a;
case 0x64b66c:c.instructions+=1;goto B64b66c;
case 0x64b66e:goto L64b66e;
case 0x64b66f:c.instructions+=6;goto B64b66f;
case 0x64b674:c.instructions+=5;goto B64b674;
case 0x64b677:c.instructions+=4;goto B64b677;
case 0x64b679:c.instructions+=3;goto B64b679;
case 0x64b67b:c.instructions+=2;goto B64b67b;
case 0x64b67c:c.instructions+=1;goto B64b67c;
case 0x64b681:goto L64b681;
case 0x64b685:c.instructions+=1;goto B64b685;
case 0x64b687:goto L64b687;
case 0x64b688:c.instructions+=1;goto B64b688;
case 0x64b68d:goto L64b68d;
case 0x64b68e:goto L64b68e;
case 0x64b690:c.instructions+=2;goto B64b690;
case 0x64b691:c.instructions+=1;goto B64b691;
case 0x64b693:goto L64b693;
case 0x64b695:c.instructions+=1;goto B64b695;
case 0x64b69a:goto L64b69a;
case 0x64b69e:c.instructions+=1;goto B64b69e;
case 0x64b6a0:goto L64b6a0;
case 0x64b6a1:c.instructions+=1;goto B64b6a1;
case 0x64b6a6:goto L64b6a6;
case 0x64b6a7:goto L64b6a7;
case 0x64b6a9:goto L64b6a9;
case 0x64b6aa:c.instructions+=2;goto B64b6aa;
case 0x64b6ab:c.instructions+=1;goto B64b6ab;
case 0x64b6ae:goto L64b6ae;
case 0x64b6b0:c.instructions+=11;goto B64b6b0;
case 0x64b6b4:c.instructions+=10;goto B64b6b4;
case 0x64b6b6:c.instructions+=9;goto B64b6b6;
case 0x64b6b9:c.instructions+=8;goto B64b6b9;
case 0x64b6bc:c.instructions+=7;goto B64b6bc;
case 0x64b6bf:c.instructions+=6;goto B64b6bf;
case 0x64b6c2:c.instructions+=5;goto B64b6c2;
case 0x64b6c4:c.instructions+=4;goto B64b6c4;
case 0x64b6c7:c.instructions+=3;goto B64b6c7;
case 0x64b6ca:c.instructions+=2;goto B64b6ca;
case 0x64b6cd:c.instructions+=1;goto B64b6cd;
case 0x64b6ce:goto L64b6ce;
case 0x64b6d0:c.instructions+=10;goto B64b6d0;
case 0x64b6d4:c.instructions+=9;goto B64b6d4;
case 0x64b6d6:c.instructions+=8;goto B64b6d6;
case 0x64b6d9:c.instructions+=7;goto B64b6d9;
case 0x64b6dc:c.instructions+=6;goto B64b6dc;
case 0x64b6df:c.instructions+=5;goto B64b6df;
case 0x64b6e2:c.instructions+=4;goto B64b6e2;
case 0x64b6e8:c.instructions+=3;goto B64b6e8;
case 0x64b6eb:c.instructions+=2;goto B64b6eb;
case 0x64b6ee:c.instructions+=1;goto B64b6ee;
case 0x64b6ef:goto L64b6ef;
case 0x64b6f1:c.instructions+=9;goto B64b6f1;
case 0x64b6f5:c.instructions+=8;goto B64b6f5;
case 0x64b6f7:c.instructions+=7;goto B64b6f7;
case 0x64b6fa:c.instructions+=6;goto B64b6fa;
case 0x64b6fd:c.instructions+=5;goto B64b6fd;
case 0x64b700:c.instructions+=4;goto B64b700;
case 0x64b703:c.instructions+=3;goto B64b703;
case 0x64b709:c.instructions+=2;goto B64b709;
case 0x64b70c:c.instructions+=1;goto B64b70c;
case 0x64b70d:goto L64b70d;
case 0x64b70f:c.instructions+=4;goto B64b70f;
case 0x64b710:c.instructions+=3;goto B64b710;
case 0x64b712:c.instructions+=2;goto B64b712;
case 0x64b716:c.instructions+=1;goto B64b716;
case 0x64b718:goto L64b718;
case 0x64b719:goto L64b719;
case 0x64b71c:c.instructions+=5;goto B64b71c;
case 0x64b71f:c.instructions+=4;goto B64b71f;
case 0x64b722:c.instructions+=3;goto B64b722;
case 0x64b726:c.instructions+=2;goto B64b726;
case 0x64b728:c.instructions+=1;goto B64b728;
case 0x64b72d:goto L64b72d;
case 0x64b72e:c.instructions+=1;goto B64b72e;
case 0x64b733:goto L64b733;
case 0x64b737:c.instructions+=2;goto B64b737;
case 0x64b738:c.instructions+=1;goto B64b738;
case 0x64b73a:goto L64b73a;
case 0x64b73b:goto L64b73b;
case 0x64b73d:c.instructions+=2;goto B64b73d;
case 0x64b73e:c.instructions+=1;goto B64b73e;
case 0x64b743:goto L64b743;
case 0x64b745:c.instructions+=5;goto B64b745;
case 0x64b746:c.instructions+=4;goto B64b746;
case 0x64b748:c.instructions+=3;goto B64b748;
case 0x64b749:c.instructions+=2;goto B64b749;
case 0x64b74b:c.instructions+=1;goto B64b74b;
case 0x64b750:goto L64b750;
case 0x64b754:c.instructions+=1;goto B64b754;
case 0x64b756:goto L64b756;
case 0x64b757:c.instructions+=1;goto B64b757;
case 0x64b75c:goto L64b75c;
case 0x64b75d:goto L64b75d;
case 0x64b75f:c.instructions+=3;goto B64b75f;
case 0x64b760:c.instructions+=2;goto B64b760;
case 0x64b761:c.instructions+=1;goto B64b761;
case 0x64b764:goto L64b764;
case 0x64b766:c.instructions+=11;goto B64b766;
case 0x64b76a:c.instructions+=10;goto B64b76a;
case 0x64b76c:c.instructions+=9;goto B64b76c;
case 0x64b76f:c.instructions+=8;goto B64b76f;
case 0x64b772:c.instructions+=7;goto B64b772;
case 0x64b775:c.instructions+=6;goto B64b775;
case 0x64b778:c.instructions+=5;goto B64b778;
case 0x64b77e:c.instructions+=4;goto B64b77e;
case 0x64b781:c.instructions+=3;goto B64b781;
case 0x64b784:c.instructions+=2;goto B64b784;
case 0x64b787:c.instructions+=1;goto B64b787;
case 0x64b788:goto L64b788;
case 0x64b78a:c.instructions+=6;goto B64b78a;
case 0x64b78b:c.instructions+=5;goto B64b78b;
case 0x64b78c:c.instructions+=4;goto B64b78c;
case 0x64b78d:c.instructions+=3;goto B64b78d;
case 0x64b78f:c.instructions+=2;goto B64b78f;
case 0x64b791:c.instructions+=1;goto B64b791;
case 0x64b793:goto L64b793;
case 0x64b796:c.instructions+=5;goto B64b796;
case 0x64b799:c.instructions+=4;goto B64b799;
case 0x64b79c:c.instructions+=3;goto B64b79c;
case 0x64b79e:c.instructions+=2;goto B64b79e;
case 0x64b7a1:c.instructions+=1;goto B64b7a1;
case 0x64b7a6:goto L64b7a6;
case 0x64b7a7:c.instructions+=1;goto B64b7a7;
case 0x64b7ac:goto L64b7ac;
case 0x64b7ad:goto L64b7ad;
case 0x64b7b0:c.instructions+=1;goto B64b7b0;
case 0x64b7b2:goto L64b7b2;
case 0x64b7b4:goto L64b7b4;
case 0x64b7b7:c.instructions+=5;goto B64b7b7;
case 0x64b7ba:c.instructions+=4;goto B64b7ba;
case 0x64b7bd:c.instructions+=3;goto B64b7bd;
case 0x64b7bf:c.instructions+=2;goto B64b7bf;
case 0x64b7c2:c.instructions+=1;goto B64b7c2;
case 0x64b7c7:goto L64b7c7;
case 0x64b7c8:c.instructions+=1;goto B64b7c8;
case 0x64b7cd:goto L64b7cd;
case 0x64b7ce:goto L64b7ce;
case 0x64b7d1:c.instructions+=1;goto B64b7d1;
case 0x64b7d3:goto L64b7d3;
case 0x64b7d4:c.instructions+=4;goto B64b7d4;
case 0x64b7d6:c.instructions+=3;goto B64b7d6;
case 0x64b7d7:c.instructions+=2;goto B64b7d7;
case 0x64b7d8:c.instructions+=1;goto B64b7d8;
case 0x64b7dd:goto L64b7dd;
case 0x64b7df:c.instructions+=9;goto B64b7df;
case 0x64b7e0:c.instructions+=8;goto B64b7e0;
case 0x64b7e2:c.instructions+=7;goto B64b7e2;
case 0x64b7e3:c.instructions+=6;goto B64b7e3;
case 0x64b7e6:c.instructions+=5;goto B64b7e6;
case 0x64b7e7:c.instructions+=4;goto B64b7e7;
case 0x64b7ea:c.instructions+=3;goto B64b7ea;
case 0x64b7ec:c.instructions+=2;goto B64b7ec;
case 0x64b7ee:c.instructions+=1;goto B64b7ee;
case 0x64b7f3:goto L64b7f3;
case 0x64b7f5:c.instructions+=1;goto B64b7f5;
case 0x64b7f7:goto L64b7f7;
case 0x64b7fc:c.instructions+=1;goto B64b7fc;
case 0x64b7fe:goto L64b7fe;
case 0x64b801:c.instructions+=3;goto B64b801;
case 0x64b804:c.instructions+=2;goto B64b804;
case 0x64b807:c.instructions+=1;goto B64b807;
case 0x64b809:goto L64b809;
case 0x64b810:c.instructions+=1;goto B64b810;
case 0x64b812:goto L64b812;
case 0x64b815:c.instructions+=4;goto B64b815;
case 0x64b818:c.instructions+=3;goto B64b818;
case 0x64b81e:c.instructions+=2;goto B64b81e;
case 0x64b820:c.instructions+=1;goto B64b820;
case 0x64b823:goto L64b823;
case 0x64b826:c.instructions+=8;goto B64b826;
case 0x64b829:c.instructions+=7;goto B64b829;
case 0x64b82d:c.instructions+=6;goto B64b82d;
case 0x64b830:c.instructions+=5;goto B64b830;
case 0x64b833:c.instructions+=4;goto B64b833;
case 0x64b839:c.instructions+=3;goto B64b839;
case 0x64b83b:c.instructions+=2;goto B64b83b;
case 0x64b83e:c.instructions+=1;goto B64b83e;
case 0x64b840:goto L64b840;
case 0x64b847:c.instructions+=1;goto B64b847;
case 0x64b849:goto L64b849;
case 0x64b84c:c.instructions+=4;goto B64b84c;
case 0x64b84f:c.instructions+=3;goto B64b84f;
case 0x64b855:c.instructions+=2;goto B64b855;
case 0x64b857:c.instructions+=1;goto B64b857;
case 0x64b85a:goto L64b85a;
case 0x64b85d:c.instructions+=7;goto B64b85d;
case 0x64b860:c.instructions+=6;goto B64b860;
case 0x64b864:c.instructions+=5;goto B64b864;
case 0x64b867:c.instructions+=4;goto B64b867;
case 0x64b86a:c.instructions+=3;goto B64b86a;
case 0x64b870:c.instructions+=2;goto B64b870;
case 0x64b872:c.instructions+=1;goto B64b872;
case 0x64b875:goto L64b875;
case 0x64b877:c.instructions+=4;goto B64b877;
case 0x64b878:c.instructions+=3;goto B64b878;
case 0x64b879:c.instructions+=2;goto B64b879;
case 0x64b87a:c.instructions+=1;goto B64b87a;
case 0x64b87d:goto L64b87d;
case 0x64b87f:c.instructions+=8;goto B64b87f;
case 0x64b880:c.instructions+=7;goto B64b880;
case 0x64b882:c.instructions+=6;goto B64b882;
case 0x64b883:c.instructions+=5;goto B64b883;
case 0x64b886:c.instructions+=4;goto B64b886;
case 0x64b887:c.instructions+=3;goto B64b887;
case 0x64b889:c.instructions+=2;goto B64b889;
case 0x64b88b:c.instructions+=1;goto B64b88b;
case 0x64b88d:goto L64b88d;
case 0x64b892:c.instructions+=1;goto B64b892;
case 0x64b894:goto L64b894;
case 0x64b897:c.instructions+=2;goto B64b897;
case 0x64b89a:c.instructions+=1;goto B64b89a;
case 0x64b89f:goto L64b89f;
case 0x64b8a1:c.instructions+=1;goto B64b8a1;
case 0x64b8a3:goto L64b8a3;
case 0x64b8a6:c.instructions+=5;goto B64b8a6;
case 0x64b8a9:c.instructions+=4;goto B64b8a9;
case 0x64b8ac:c.instructions+=3;goto B64b8ac;
case 0x64b8af:c.instructions+=2;goto B64b8af;
case 0x64b8b2:c.instructions+=1;goto B64b8b2;
case 0x64b8b4:goto L64b8b4;
case 0x64b8b6:c.instructions+=4;goto B64b8b6;
case 0x64b8b7:c.instructions+=3;goto B64b8b7;
case 0x64b8b8:c.instructions+=2;goto B64b8b8;
case 0x64b8b9:c.instructions+=1;goto B64b8b9;
case 0x64b8bc:goto L64b8bc;
case 0x64b8be:c.instructions+=18;goto B64b8be;
case 0x64b8bf:c.instructions+=17;goto B64b8bf;
case 0x64b8c1:c.instructions+=16;goto B64b8c1;
case 0x64b8c2:c.instructions+=15;goto B64b8c2;
case 0x64b8c3:c.instructions+=14;goto B64b8c3;
case 0x64b8c4:c.instructions+=13;goto B64b8c4;
case 0x64b8c5:c.instructions+=12;goto B64b8c5;
case 0x64b8c8:c.instructions+=11;goto B64b8c8;
case 0x64b8cb:c.instructions+=10;goto B64b8cb;
case 0x64b8cc:c.instructions+=9;goto B64b8cc;
case 0x64b8cf:c.instructions+=8;goto B64b8cf;
case 0x64b8d2:c.instructions+=7;goto B64b8d2;
case 0x64b8d3:c.instructions+=6;goto B64b8d3;
case 0x64b8d6:c.instructions+=5;goto B64b8d6;
case 0x64b8d7:c.instructions+=4;goto B64b8d7;
case 0x64b8da:c.instructions+=3;goto B64b8da;
case 0x64b8dc:c.instructions+=2;goto B64b8dc;
case 0x64b8de:c.instructions+=1;goto B64b8de;
case 0x64b8e3:goto L64b8e3;
case 0x64b8e6:c.instructions+=3;goto B64b8e6;
case 0x64b8e9:c.instructions+=2;goto B64b8e9;
case 0x64b8ec:c.instructions+=1;goto B64b8ec;
case 0x64b8f2:goto L64b8f2;
case 0x64b8f4:c.instructions+=1;goto B64b8f4;
case 0x64b8f9:goto L64b8f9;
case 0x64b8fb:c.instructions+=1;goto B64b8fb;
case 0x64b8fd:goto L64b8fd;
case 0x64b8ff:c.instructions+=1;goto B64b8ff;
case 0x64b904:goto L64b904;
case 0x64b906:goto L64b906;
case 0x64b908:c.instructions+=1;goto B64b908;
case 0x64b90e:goto L64b90e;
case 0x64b911:c.instructions+=3;goto B64b911;
case 0x64b914:c.instructions+=2;goto B64b914;
case 0x64b916:c.instructions+=1;goto B64b916;
case 0x64b919:goto L64b919;
case 0x64b91b:c.instructions+=2;goto B64b91b;
case 0x64b91e:c.instructions+=1;goto B64b91e;
case 0x64b924:goto L64b924;
case 0x64b927:c.instructions+=3;goto B64b927;
case 0x64b929:c.instructions+=2;goto B64b929;
case 0x64b92c:c.instructions+=1;goto B64b92c;
case 0x64b92d:goto L64b92d;
case 0x64b92f:goto L64b92f;
case 0x64b931:c.instructions+=2;goto B64b931;
case 0x64b934:c.instructions+=1;goto B64b934;
case 0x64b936:goto L64b936;
case 0x64b938:c.instructions+=1;goto B64b938;
case 0x64b93d:goto L64b93d;
case 0x64b93f:c.instructions+=1;goto B64b93f;
case 0x64b941:goto L64b941;
case 0x64b943:c.instructions+=1;goto B64b943;
case 0x64b948:goto L64b948;
case 0x64b94a:c.instructions+=1;goto B64b94a;
case 0x64b94c:goto L64b94c;
case 0x64b94e:goto L64b94e;
case 0x64b950:c.instructions+=1;goto B64b950;
case 0x64b952:goto L64b952;
case 0x64b954:c.instructions+=1;goto B64b954;
case 0x64b959:goto L64b959;
case 0x64b95b:c.instructions+=1;goto B64b95b;
case 0x64b95d:goto L64b95d;
case 0x64b95f:c.instructions+=1;goto B64b95f;
case 0x64b964:goto L64b964;
case 0x64b966:goto L64b966;
case 0x64b968:goto L64b968;
case 0x64b96a:c.instructions+=1;goto B64b96a;
case 0x64b96c:goto L64b96c;
case 0x64b96f:c.instructions+=6;goto B64b96f;
case 0x64b972:c.instructions+=5;goto B64b972;
case 0x64b973:c.instructions+=4;goto B64b973;
case 0x64b976:c.instructions+=3;goto B64b976;
case 0x64b979:c.instructions+=2;goto B64b979;
case 0x64b97c:c.instructions+=1;goto B64b97c;
case 0x64b97e:goto L64b97e;
case 0x64b981:c.instructions+=11;goto B64b981;
case 0x64b984:c.instructions+=10;goto B64b984;
case 0x64b987:c.instructions+=9;goto B64b987;
case 0x64b98a:c.instructions+=8;goto B64b98a;
case 0x64b98b:c.instructions+=7;goto B64b98b;
case 0x64b98e:c.instructions+=6;goto B64b98e;
case 0x64b98f:c.instructions+=5;goto B64b98f;
case 0x64b992:c.instructions+=4;goto B64b992;
case 0x64b995:c.instructions+=3;goto B64b995;
case 0x64b998:c.instructions+=2;goto B64b998;
case 0x64b999:c.instructions+=1;goto B64b999;
case 0x64b99e:goto L64b99e;
case 0x64b9a0:c.instructions+=2;goto B64b9a0;
case 0x64b9a2:c.instructions+=1;goto B64b9a2;
case 0x64b9a4:goto L64b9a4;
case 0x64b9a7:c.instructions+=1;goto B64b9a7;
case 0x64b9aa:goto L64b9aa;
case 0x64b9ad:c.instructions+=3;goto B64b9ad;
case 0x64b9b0:c.instructions+=2;goto B64b9b0;
case 0x64b9b4:c.instructions+=1;goto B64b9b4;
case 0x64b9b6:goto L64b9b6;
case 0x64b9b8:c.instructions+=1;goto B64b9b8;
case 0x64b9ba:goto L64b9ba;
case 0x64b9bf:c.instructions+=1;goto B64b9bf;
case 0x64b9c1:goto L64b9c1;
case 0x64b9c4:c.instructions+=2;goto B64b9c4;
case 0x64b9c6:c.instructions+=1;goto B64b9c6;
case 0x64b9c8:goto L64b9c8;
case 0x64b9cc:c.instructions+=1;goto B64b9cc;
case 0x64b9ce:goto L64b9ce;
case 0x64b9d1:c.instructions+=2;goto B64b9d1;
case 0x64b9d3:c.instructions+=1;goto B64b9d3;
case 0x64b9d5:goto L64b9d5;
case 0x64b9d9:c.instructions+=1;goto B64b9d9;
case 0x64b9db:goto L64b9db;
case 0x64b9dd:goto L64b9dd;
case 0x64b9e0:c.instructions+=1;goto B64b9e0;
case 0x64b9e2:goto L64b9e2;
case 0x64b9e5:c.instructions+=1;goto B64b9e5;
case 0x64b9e7:goto L64b9e7;
case 0x64b9ea:c.instructions+=2;goto B64b9ea;
case 0x64b9ec:c.instructions+=1;goto B64b9ec;
case 0x64b9ee:goto L64b9ee;
case 0x64b9f2:c.instructions+=1;goto B64b9f2;
case 0x64b9f4:goto L64b9f4;
case 0x64b9f7:c.instructions+=1;goto B64b9f7;
case 0x64b9f9:goto L64b9f9;
case 0x64b9fe:goto L64b9fe;
case 0x64ba00:c.instructions+=5;goto B64ba00;
case 0x64ba01:c.instructions+=4;goto B64ba01;
case 0x64ba02:c.instructions+=3;goto B64ba02;
case 0x64ba03:c.instructions+=2;goto B64ba03;
case 0x64ba04:c.instructions+=1;goto B64ba04;
case 0x64ba07:goto L64ba07;
case 0x64ba09:c.instructions+=8;goto B64ba09;
case 0x64ba0a:c.instructions+=7;goto B64ba0a;
case 0x64ba0c:c.instructions+=6;goto B64ba0c;
case 0x64ba0d:c.instructions+=5;goto B64ba0d;
case 0x64ba0e:c.instructions+=4;goto B64ba0e;
case 0x64ba10:c.instructions+=3;goto B64ba10;
case 0x64ba12:c.instructions+=2;goto B64ba12;
case 0x64ba14:c.instructions+=1;goto B64ba14;
case 0x64ba19:goto L64ba19;
case 0x64ba1b:c.instructions+=2;goto B64ba1b;
case 0x64ba1c:c.instructions+=1;goto B64ba1c;
case 0x64ba1e:goto L64ba1e;
case 0x64ba20:c.instructions+=1;goto B64ba20;
case 0x64ba25:goto L64ba25;
case 0x64ba27:goto L64ba27;
case 0x64ba29:goto L64ba29;
case 0x64ba2b:c.instructions+=1;goto B64ba2b;
case 0x64ba2d:goto L64ba2d;
case 0x64ba32:c.instructions+=1;goto B64ba32;
case 0x64ba34:goto L64ba34;
case 0x64ba37:c.instructions+=3;goto B64ba37;
case 0x64ba3a:c.instructions+=2;goto B64ba3a;
case 0x64ba3c:c.instructions+=1;goto B64ba3c;
case 0x64ba3e:goto L64ba3e;
case 0x64ba42:c.instructions+=1;goto B64ba42;
case 0x64ba44:goto L64ba44;
case 0x64ba47:c.instructions+=2;goto B64ba47;
case 0x64ba49:c.instructions+=1;goto B64ba49;
case 0x64ba4b:goto L64ba4b;
case 0x64ba4f:c.instructions+=1;goto B64ba4f;
case 0x64ba51:goto L64ba51;
case 0x64ba55:c.instructions+=1;goto B64ba55;
case 0x64ba57:goto L64ba57;
case 0x64ba5a:c.instructions+=2;goto B64ba5a;
case 0x64ba5c:c.instructions+=1;goto B64ba5c;
case 0x64ba5e:goto L64ba5e;
case 0x64ba61:c.instructions+=8;goto B64ba61;
case 0x64ba64:c.instructions+=7;goto B64ba64;
case 0x64ba67:c.instructions+=6;goto B64ba67;
case 0x64ba6d:c.instructions+=5;goto B64ba6d;
case 0x64ba6f:c.instructions+=4;goto B64ba6f;
case 0x64ba72:c.instructions+=3;goto B64ba72;
case 0x64ba78:c.instructions+=2;goto B64ba78;
case 0x64ba7a:c.instructions+=1;goto B64ba7a;
case 0x64ba7c:goto L64ba7c;
case 0x64ba7e:c.instructions+=3;goto B64ba7e;
case 0x64ba80:c.instructions+=2;goto B64ba80;
case 0x64ba85:c.instructions+=1;goto B64ba85;
case 0x64ba8a:goto L64ba8a;
case 0x64ba8c:c.instructions+=4;goto B64ba8c;
case 0x64ba8d:c.instructions+=3;goto B64ba8d;
case 0x64ba8e:c.instructions+=2;goto B64ba8e;
case 0x64ba8f:c.instructions+=1;goto B64ba8f;
case 0x64ba92:goto L64ba92;
case 0x64ba94:c.instructions+=10;goto B64ba94;
case 0x64ba95:c.instructions+=9;goto B64ba95;
case 0x64ba97:c.instructions+=8;goto B64ba97;
case 0x64ba9a:c.instructions+=7;goto B64ba9a;
case 0x64ba9e:c.instructions+=6;goto B64ba9e;
case 0x64ba9f:c.instructions+=5;goto B64ba9f;
case 0x64baa0:c.instructions+=4;goto B64baa0;
case 0x64baa1:c.instructions+=3;goto B64baa1;
case 0x64baa4:c.instructions+=2;goto B64baa4;
case 0x64baa9:c.instructions+=1;goto B64baa9;
case 0x64baab:goto L64baab;
case 0x64bab0:goto L64bab0;
case 0x64bab3:c.instructions+=6;goto B64bab3;
case 0x64bab6:c.instructions+=5;goto B64bab6;
case 0x64baba:c.instructions+=4;goto B64baba;
case 0x64babd:c.instructions+=3;goto B64babd;
case 0x64bac0:c.instructions+=2;goto B64bac0;
case 0x64bac3:c.instructions+=1;goto B64bac3;
case 0x64bac5:goto L64bac5;
case 0x64bac7:c.instructions+=1;goto B64bac7;
case 0x64bac9:goto L64bac9;
case 0x64bacc:c.instructions+=2;goto B64bacc;
case 0x64bace:c.instructions+=1;goto B64bace;
case 0x64bad3:goto L64bad3;
case 0x64bad5:c.instructions+=3;goto B64bad5;
case 0x64bad6:c.instructions+=2;goto B64bad6;
case 0x64bad7:c.instructions+=1;goto B64bad7;
case 0x64bad9:goto L64bad9;
case 0x64badc:c.instructions+=4;goto B64badc;
case 0x64badf:c.instructions+=3;goto B64badf;
case 0x64bae2:c.instructions+=2;goto B64bae2;
case 0x64bae4:c.instructions+=1;goto B64bae4;
case 0x64bae6:goto L64bae6;
case 0x64bae9:c.instructions+=1;goto B64bae9;
case 0x64baec:goto L64baec;
case 0x64baef:c.instructions+=5;goto B64baef;
case 0x64baf2:c.instructions+=4;goto B64baf2;
case 0x64baf4:c.instructions+=3;goto B64baf4;
case 0x64baf6:c.instructions+=2;goto B64baf6;
case 0x64baf8:c.instructions+=1;goto B64baf8;
case 0x64bafa:goto L64bafa;
case 0x64bafd:c.instructions+=1;goto B64bafd;
case 0x64bb02:goto L64bb02;
case 0x64bb04:c.instructions+=5;goto B64bb04;
case 0x64bb07:c.instructions+=4;goto B64bb07;
case 0x64bb0a:c.instructions+=3;goto B64bb0a;
case 0x64bb0b:c.instructions+=2;goto B64bb0b;
case 0x64bb0c:c.instructions+=1;goto B64bb0c;
case 0x64bb11:goto L64bb11;
case 0x64bb14:c.instructions+=1;goto B64bb14;
case 0x64bb19:goto L64bb19;
case 0x64bb1c:c.instructions+=3;goto B64bb1c;
case 0x64bb20:c.instructions+=2;goto B64bb20;
case 0x64bb22:c.instructions+=1;goto B64bb22;
case 0x64bb24:goto L64bb24;
case 0x64bb27:c.instructions+=2;goto B64bb27;
case 0x64bb2a:c.instructions+=1;goto B64bb2a;
case 0x64bb2c:goto L64bb2c;
case 0x64bb2d:c.instructions+=2;goto B64bb2d;
case 0x64bb32:c.instructions+=1;goto B64bb32;
case 0x64bb34:goto L64bb34;
case 0x64bb36:c.instructions+=3;goto B64bb36;
case 0x64bb39:c.instructions+=2;goto B64bb39;
case 0x64bb3c:c.instructions+=1;goto B64bb3c;
case 0x64bb3e:goto L64bb3e;
case 0x64bb40:c.instructions+=1;goto B64bb40;
case 0x64bb42:goto L64bb42;
case 0x64bb43:c.instructions+=9;goto B64bb43;
case 0x64bb44:c.instructions+=8;goto B64bb44;
case 0x64bb45:c.instructions+=7;goto B64bb45;
case 0x64bb4a:c.instructions+=6;goto B64bb4a;
case 0x64bb4c:c.instructions+=5;goto B64bb4c;
case 0x64bb4f:c.instructions+=4;goto B64bb4f;
case 0x64bb52:c.instructions+=3;goto B64bb52;
case 0x64bb53:c.instructions+=2;goto B64bb53;
case 0x64bb54:c.instructions+=1;goto B64bb54;
case 0x64bb59:goto L64bb59;
case 0x64bb5c:c.instructions+=1;goto B64bb5c;
case 0x64bb61:goto L64bb61;
case 0x64bb65:c.instructions+=1;goto B64bb65;
case 0x64bb67:goto L64bb67;
case 0x64bb68:c.instructions+=2;goto B64bb68;
case 0x64bb6d:c.instructions+=1;goto B64bb6d;
case 0x64bb6f:goto L64bb6f;
case 0x64bb72:goto L64bb72;
case 0x64bb76:c.instructions+=1;goto B64bb76;
case 0x64bb78:goto L64bb78;
case 0x64bb7c:c.instructions+=2;goto B64bb7c;
case 0x64bb83:c.instructions+=1;goto B64bb83;
case 0x64bb85:goto L64bb85;
case 0x64bb8a:c.instructions+=1;goto B64bb8a;
case 0x64bb8c:goto L64bb8c;
case 0x64bb8f:c.instructions+=2;goto B64bb8f;
case 0x64bb91:c.instructions+=1;goto B64bb91;
case 0x64bb96:goto L64bb96;
case 0x64bb98:c.instructions+=3;goto B64bb98;
case 0x64bb99:c.instructions+=2;goto B64bb99;
case 0x64bb9a:c.instructions+=1;goto B64bb9a;
case 0x64bb9c:goto L64bb9c;
case 0x64bb9f:c.instructions+=4;goto B64bb9f;
case 0x64bba2:c.instructions+=3;goto B64bba2;
case 0x64bba5:c.instructions+=2;goto B64bba5;
case 0x64bba7:c.instructions+=1;goto B64bba7;
case 0x64bba9:goto L64bba9;
case 0x64bbac:c.instructions+=1;goto B64bbac;
case 0x64bbaf:goto L64bbaf;
case 0x64bbb2:c.instructions+=2;goto B64bbb2;
case 0x64bbb5:c.instructions+=1;goto B64bbb5;
case 0x64bbb7:goto L64bbb7;
case 0x64bbba:c.instructions+=3;goto B64bbba;
case 0x64bbbd:c.instructions+=2;goto B64bbbd;
case 0x64bbc7:c.instructions+=1;goto B64bbc7;
case 0x64bbc9:goto L64bbc9;
case 0x64bbcc:c.instructions+=1;goto B64bbcc;
case 0x64bbce:goto L64bbce;
case 0x64bbd4:c.instructions+=1;goto B64bbd4;
case 0x64bbd6:goto L64bbd6;
case 0x64bbdc:c.instructions+=1;goto B64bbdc;
case 0x64bbde:goto L64bbde;
case 0x64bbe4:c.instructions+=1;goto B64bbe4;
case 0x64bbe6:goto L64bbe6;
case 0x64bbec:c.instructions+=1;goto B64bbec;
case 0x64bbee:goto L64bbee;
case 0x64bbf4:c.instructions+=1;goto B64bbf4;
case 0x64bbf6:goto L64bbf6;
case 0x64bbf7:c.instructions+=2;goto B64bbf7;
case 0x64bbfc:c.instructions+=1;goto B64bbfc;
case 0x64bc01:goto L64bc01;
case 0x64bc0b:c.instructions+=1;goto B64bc0b;
case 0x64bc0d:goto L64bc0d;
case 0x64bc12:c.instructions+=6;goto B64bc12;
case 0x64bc14:c.instructions+=5;goto B64bc14;
case 0x64bc17:c.instructions+=4;goto B64bc17;
case 0x64bc18:c.instructions+=3;goto B64bc18;
case 0x64bc1b:c.instructions+=2;goto B64bc1b;
case 0x64bc1c:c.instructions+=1;goto B64bc1c;
case 0x64bc21:goto L64bc21;
case 0x64bc24:c.instructions+=18;goto B64bc24;
case 0x64bc2a:c.instructions+=17;goto B64bc2a;
case 0x64bc2b:c.instructions+=16;goto B64bc2b;
case 0x64bc2e:c.instructions+=15;goto B64bc2e;
case 0x64bc2f:c.instructions+=14;goto B64bc2f;
case 0x64bc32:c.instructions+=13;goto B64bc32;
case 0x64bc33:c.instructions+=12;goto B64bc33;
case 0x64bc36:c.instructions+=11;goto B64bc36;
case 0x64bc37:c.instructions+=10;goto B64bc37;
case 0x64bc3a:c.instructions+=9;goto B64bc3a;
case 0x64bc3b:c.instructions+=8;goto B64bc3b;
case 0x64bc3e:c.instructions+=7;goto B64bc3e;
case 0x64bc3f:c.instructions+=6;goto B64bc3f;
case 0x64bc42:c.instructions+=5;goto B64bc42;
case 0x64bc43:c.instructions+=4;goto B64bc43;
case 0x64bc44:c.instructions+=3;goto B64bc44;
case 0x64bc47:c.instructions+=2;goto B64bc47;
case 0x64bc4a:c.instructions+=1;goto B64bc4a;
case 0x64bc4f:goto L64bc4f;
case 0x64bc51:c.instructions+=2;goto B64bc51;
case 0x64bc53:c.instructions+=1;goto B64bc53;
case 0x64bc59:goto L64bc59;
case 0x64bc5a:c.instructions+=9;goto B64bc5a;
case 0x64bc5d:c.instructions+=8;goto B64bc5d;
case 0x64bc60:c.instructions+=7;goto B64bc60;
case 0x64bc63:c.instructions+=6;goto B64bc63;
case 0x64bc66:c.instructions+=5;goto B64bc66;
case 0x64bc69:c.instructions+=4;goto B64bc69;
case 0x64bc6a:c.instructions+=3;goto B64bc6a;
case 0x64bc6d:c.instructions+=2;goto B64bc6d;
case 0x64bc6f:c.instructions+=1;goto B64bc6f;
case 0x64bc74:goto L64bc74;
case 0x64bc76:c.instructions+=2;goto B64bc76;
case 0x64bc78:c.instructions+=1;goto B64bc78;
case 0x64bc7e:goto L64bc7e;
case 0x64bc81:c.instructions+=2;goto B64bc81;
case 0x64bc84:c.instructions+=1;goto B64bc84;
case 0x64bc8a:goto L64bc8a;
case 0x64bc8d:c.instructions+=1;goto B64bc8d;
case 0x64bc8f:goto L64bc8f;
case 0x64bc95:c.instructions+=1;goto B64bc95;
case 0x64bc9b:goto L64bc9b;
case 0x64bc9e:c.instructions+=3;goto B64bc9e;
case 0x64bca1:c.instructions+=2;goto B64bca1;
case 0x64bca5:c.instructions+=1;goto B64bca5;
case 0x64bcab:goto L64bcab;
case 0x64bcaf:c.instructions+=1;goto B64bcaf;
case 0x64bcb5:goto L64bcb5;
case 0x64bcb8:c.instructions+=2;goto B64bcb8;
case 0x64bcba:c.instructions+=1;goto B64bcba;
case 0x64bcc0:goto L64bcc0;
case 0x64bcc4:c.instructions+=1;goto B64bcc4;
case 0x64bcca:goto L64bcca;
case 0x64bccd:c.instructions+=2;goto B64bccd;
case 0x64bccf:c.instructions+=1;goto B64bccf;
case 0x64bcd5:goto L64bcd5;
case 0x64bcd9:c.instructions+=1;goto B64bcd9;
case 0x64bcdf:goto L64bcdf;
case 0x64bce3:c.instructions+=1;goto B64bce3;
case 0x64bce5:goto L64bce5;
case 0x64bceb:c.instructions+=1;goto B64bceb;
case 0x64bcf1:goto L64bcf1;
case 0x64bcf7:c.instructions+=2;goto B64bcf7;
case 0x64bcf9:c.instructions+=1;goto B64bcf9;
case 0x64bcfb:goto L64bcfb;
case 0x64bcfe:c.instructions+=1;goto B64bcfe;
case 0x64bd01:goto L64bd01;
case 0x64bd03:c.instructions+=1;goto B64bd03;
case 0x64bd06:goto L64bd06;
case 0x64bd08:c.instructions+=3;goto B64bd08;
case 0x64bd0a:c.instructions+=2;goto B64bd0a;
case 0x64bd0c:c.instructions+=1;goto B64bd0c;
case 0x64bd0e:goto L64bd0e;
case 0x64bd10:c.instructions+=1;goto B64bd10;
case 0x64bd12:goto L64bd12;
case 0x64bd15:c.instructions+=3;goto B64bd15;
case 0x64bd17:c.instructions+=2;goto B64bd17;
case 0x64bd1a:c.instructions+=1;goto B64bd1a;
case 0x64bd1c:goto L64bd1c;
case 0x64bd1d:c.instructions+=5;goto B64bd1d;
case 0x64bd1e:c.instructions+=4;goto B64bd1e;
case 0x64bd1f:c.instructions+=3;goto B64bd1f;
case 0x64bd20:c.instructions+=2;goto B64bd20;
case 0x64bd22:c.instructions+=1;goto B64bd22;
case 0x64bd24:goto L64bd24;
case 0x64bd26:c.instructions+=1;goto B64bd26;
case 0x64bd28:goto L64bd28;
case 0x64bd2a:c.instructions+=1;goto B64bd2a;
case 0x64bd2d:goto L64bd2d;
case 0x64bd2f:c.instructions+=1;goto B64bd2f;
case 0x64bd31:goto L64bd31;
case 0x64bd34:c.instructions+=2;goto B64bd34;
case 0x64bd36:c.instructions+=1;goto B64bd36;
case 0x64bd38:goto L64bd38;
case 0x64bd3a:c.instructions+=1;goto B64bd3a;
case 0x64bd3c:goto L64bd3c;
case 0x64bd3f:c.instructions+=6;goto B64bd3f;
case 0x64bd44:c.instructions+=5;goto B64bd44;
case 0x64bd46:c.instructions+=4;goto B64bd46;
case 0x64bd49:c.instructions+=3;goto B64bd49;
case 0x64bd4c:c.instructions+=2;goto B64bd4c;
case 0x64bd4d:c.instructions+=1;goto B64bd4d;
case 0x64bd4f:goto L64bd4f;
case 0x64bd52:c.instructions+=1;goto B64bd52;
case 0x64bd54:goto L64bd54;
case 0x64bd57:c.instructions+=1;goto B64bd57;
case 0x64bd59:goto L64bd59;
case 0x64bd60:c.instructions+=1;goto B64bd60;
case 0x64bd62:goto L64bd62;
case 0x64bd65:c.instructions+=1;goto B64bd65;
case 0x64bd67:goto L64bd67;
case 0x64bd6a:goto L64bd6a;
case 0x64bd6d:c.instructions+=4;goto B64bd6d;
case 0x64bd6e:c.instructions+=3;goto B64bd6e;
case 0x64bd71:c.instructions+=2;goto B64bd71;
case 0x64bd72:c.instructions+=1;goto B64bd72;
case 0x64bd77:goto L64bd77;
case 0x64bd79:c.instructions+=2;goto B64bd79;
case 0x64bd7b:c.instructions+=1;goto B64bd7b;
case 0x64bd7d:goto L64bd7d;
case 0x64bd80:goto L64bd80;
case 0x64bd82:c.instructions+=1;goto B64bd82;
case 0x64bd84:goto L64bd84;
case 0x64bd86:goto L64bd86;
case 0x64bd8b:c.instructions+=4;goto B64bd8b;
case 0x64bd8d:c.instructions+=3;goto B64bd8d;
case 0x64bd8e:c.instructions+=2;goto B64bd8e;
case 0x64bd91:c.instructions+=1;goto B64bd91;
case 0x64bd92:goto L64bd92;
case 0x64bd97:goto L64bd97;
case 0x64bd9a:goto L64bd9a;
case 0x64bd9f:c.instructions+=1;goto B64bd9f;
case 0x64bda1:goto L64bda1;
case 0x64bda3:c.instructions+=1;goto B64bda3;
case 0x64bda8:goto L64bda8;
case 0x64bdaa:c.instructions+=2;goto B64bdaa;
case 0x64bdab:c.instructions+=1;goto B64bdab;
case 0x64bdad:goto L64bdad;
case 0x64bdb0:c.instructions+=12;goto B64bdb0;
case 0x64bdb1:c.instructions+=11;goto B64bdb1;
case 0x64bdb4:c.instructions+=10;goto B64bdb4;
case 0x64bdb7:c.instructions+=9;goto B64bdb7;
case 0x64bdba:c.instructions+=8;goto B64bdba;
case 0x64bdbd:c.instructions+=7;goto B64bdbd;
case 0x64bdc0:c.instructions+=6;goto B64bdc0;
case 0x64bdc3:c.instructions+=5;goto B64bdc3;
case 0x64bdc6:c.instructions+=4;goto B64bdc6;
case 0x64bdc8:c.instructions+=3;goto B64bdc8;
case 0x64bdcb:c.instructions+=2;goto B64bdcb;
case 0x64bdce:c.instructions+=1;goto B64bdce;
case 0x64bdd3:goto L64bdd3;
case 0x64bdd5:goto L64bdd5;
case 0x64bdd7:goto L64bdd7;
case 0x64bdd9:c.instructions+=1;goto B64bdd9;
case 0x64bddb:goto L64bddb;
case 0x64bde0:c.instructions+=1;goto B64bde0;
case 0x64bde2:goto L64bde2;
case 0x64bde5:c.instructions+=3;goto B64bde5;
case 0x64bde7:c.instructions+=2;goto B64bde7;
case 0x64bdea:c.instructions+=1;goto B64bdea;
case 0x64bdec:goto L64bdec;
case 0x64bded:c.instructions+=5;goto B64bded;
case 0x64bdee:c.instructions+=4;goto B64bdee;
case 0x64bdf0:c.instructions+=3;goto B64bdf0;
case 0x64bdf1:c.instructions+=2;goto B64bdf1;
case 0x64bdf2:c.instructions+=1;goto B64bdf2;
case 0x64bdf5:goto L64bdf5;
case 0x64bdf7:c.instructions+=13;goto B64bdf7;
case 0x64bdf8:c.instructions+=12;goto B64bdf8;
case 0x64bdfa:c.instructions+=11;goto B64bdfa;
case 0x64bdfb:c.instructions+=10;goto B64bdfb;
case 0x64bdfc:c.instructions+=9;goto B64bdfc;
case 0x64bdfd:c.instructions+=8;goto B64bdfd;
case 0x64bdfe:c.instructions+=7;goto B64bdfe;
case 0x64be01:c.instructions+=6;goto B64be01;
case 0x64be04:c.instructions+=5;goto B64be04;
case 0x64be07:c.instructions+=4;goto B64be07;
case 0x64be09:c.instructions+=3;goto B64be09;
case 0x64be0b:c.instructions+=2;goto B64be0b;
case 0x64be0c:c.instructions+=1;goto B64be0c;
case 0x64be0e:goto L64be0e;
case 0x64be10:c.instructions+=1;goto B64be10;
case 0x64be15:goto L64be15;
case 0x64be18:goto L64be18;
case 0x64be1b:c.instructions+=5;goto B64be1b;
case 0x64be1d:c.instructions+=4;goto B64be1d;
case 0x64be20:c.instructions+=3;goto B64be20;
case 0x64be23:c.instructions+=2;goto B64be23;
case 0x64be24:c.instructions+=1;goto B64be24;
case 0x64be29:goto L64be29;
case 0x64be2b:c.instructions+=2;goto B64be2b;
case 0x64be2c:c.instructions+=1;goto B64be2c;
case 0x64be2e:goto L64be2e;
case 0x64be33:c.instructions+=6;goto B64be33;
case 0x64be34:c.instructions+=5;goto B64be34;
case 0x64be37:c.instructions+=4;goto B64be37;
case 0x64be39:c.instructions+=3;goto B64be39;
case 0x64be3a:c.instructions+=2;goto B64be3a;
case 0x64be3c:c.instructions+=1;goto B64be3c;
case 0x64be41:goto L64be41;
case 0x64be43:c.instructions+=2;goto B64be43;
case 0x64be46:c.instructions+=1;goto B64be46;
case 0x64be48:goto L64be48;
case 0x64be4d:c.instructions+=1;goto B64be4d;
case 0x64be4f:goto L64be4f;
case 0x64be51:c.instructions+=7;goto B64be51;
case 0x64be54:c.instructions+=6;goto B64be54;
case 0x64be57:c.instructions+=5;goto B64be57;
case 0x64be5a:c.instructions+=4;goto B64be5a;
case 0x64be5d:c.instructions+=3;goto B64be5d;
case 0x64be61:c.instructions+=2;goto B64be61;
case 0x64be64:c.instructions+=1;goto B64be64;
case 0x64be66:goto L64be66;
case 0x64be69:c.instructions+=2;goto B64be69;
case 0x64be6b:c.instructions+=1;goto B64be6b;
case 0x64be6e:goto L64be6e;
case 0x64be71:c.instructions+=16;goto B64be71;
case 0x64be78:c.instructions+=15;goto B64be78;
case 0x64be7b:c.instructions+=14;goto B64be7b;
case 0x64be7e:c.instructions+=13;goto B64be7e;
case 0x64be82:c.instructions+=12;goto B64be82;
case 0x64be85:c.instructions+=11;goto B64be85;
case 0x64be88:c.instructions+=10;goto B64be88;
case 0x64be8b:c.instructions+=9;goto B64be8b;
case 0x64be8e:c.instructions+=8;goto B64be8e;
case 0x64be92:c.instructions+=7;goto B64be92;
case 0x64be95:c.instructions+=6;goto B64be95;
case 0x64be96:c.instructions+=5;goto B64be96;
case 0x64be99:c.instructions+=4;goto B64be99;
case 0x64be9a:c.instructions+=3;goto B64be9a;
case 0x64be9d:c.instructions+=2;goto B64be9d;
case 0x64bea3:c.instructions+=1;goto B64bea3;
case 0x64bea8:goto L64bea8;
case 0x64beab:c.instructions+=6;goto B64beab;
case 0x64beaf:c.instructions+=5;goto B64beaf;
case 0x64beb2:c.instructions+=4;goto B64beb2;
case 0x64beb6:c.instructions+=3;goto B64beb6;
case 0x64beb9:c.instructions+=2;goto B64beb9;
case 0x64bebb:c.instructions+=1;goto B64bebb;
case 0x64bebd:goto L64bebd;
case 0x64bebe:c.instructions+=2;goto B64bebe;
case 0x64bec1:c.instructions+=1;goto B64bec1;
case 0x64bec3:goto L64bec3;
case 0x64bec6:c.instructions+=2;goto B64bec6;
case 0x64bec9:c.instructions+=1;goto B64bec9;
case 0x64becb:goto L64becb;
case 0x64becd:goto L64becd;
case 0x64bece:c.instructions+=4;goto B64bece;
case 0x64becf:c.instructions+=3;goto B64becf;
case 0x64bed0:c.instructions+=2;goto B64bed0;
case 0x64bed1:c.instructions+=1;goto B64bed1;
case 0x64bed4:goto L64bed4;
case 0x64bed6:c.instructions+=10;goto B64bed6;
case 0x64bed7:c.instructions+=9;goto B64bed7;
case 0x64bed9:c.instructions+=8;goto B64bed9;
case 0x64bedc:c.instructions+=7;goto B64bedc;
case 0x64bedd:c.instructions+=6;goto B64bedd;
case 0x64bede:c.instructions+=5;goto B64bede;
case 0x64bee1:c.instructions+=4;goto B64bee1;
case 0x64bee3:c.instructions+=3;goto B64bee3;
case 0x64bee4:c.instructions+=2;goto B64bee4;
case 0x64bee7:c.instructions+=1;goto B64bee7;
case 0x64beec:goto L64beec;
case 0x64beef:c.instructions+=5;goto B64beef;
case 0x64bef0:c.instructions+=4;goto B64bef0;
case 0x64bef1:c.instructions+=3;goto B64bef1;
case 0x64bef2:c.instructions+=2;goto B64bef2;
case 0x64bef4:c.instructions+=1;goto B64bef4;
case 0x64bef9:goto L64bef9;
case 0x64befb:c.instructions+=4;goto B64befb;
case 0x64befd:c.instructions+=3;goto B64befd;
case 0x64beff:c.instructions+=2;goto B64beff;
case 0x64bf02:c.instructions+=1;goto B64bf02;
case 0x64bf08:goto L64bf08;
case 0x64bf0b:c.instructions+=1;goto B64bf0b;
case 0x64bf11:goto L64bf11;
case 0x64bf14:c.instructions+=5;goto B64bf14;
case 0x64bf17:c.instructions+=4;goto B64bf17;
case 0x64bf1a:c.instructions+=3;goto B64bf1a;
case 0x64bf20:c.instructions+=2;goto B64bf20;
case 0x64bf24:c.instructions+=1;goto B64bf24;
case 0x64bf2a:goto L64bf2a;
case 0x64bf2e:c.instructions+=1;goto B64bf2e;
case 0x64bf30:goto L64bf30;
case 0x64bf33:c.instructions+=1;goto B64bf33;
case 0x64bf39:goto L64bf39;
case 0x64bf3c:c.instructions+=3;goto B64bf3c;
case 0x64bf3f:c.instructions+=2;goto B64bf3f;
case 0x64bf42:c.instructions+=1;goto B64bf42;
case 0x64bf44:goto L64bf44;
case 0x64bf45:c.instructions+=3;goto B64bf45;
case 0x64bf46:c.instructions+=2;goto B64bf46;
case 0x64bf48:c.instructions+=1;goto B64bf48;
case 0x64bf4d:goto L64bf4d;
case 0x64bf4f:c.instructions+=1;goto B64bf4f;
case 0x64bf55:goto L64bf55;
case 0x64bf59:goto L64bf59;
case 0x64bf5c:c.instructions+=1;goto B64bf5c;
case 0x64bf62:goto L64bf62;
case 0x64bf65:c.instructions+=10;goto B64bf65;
case 0x64bf68:c.instructions+=9;goto B64bf68;
case 0x64bf6a:c.instructions+=8;goto B64bf6a;
case 0x64bf6d:c.instructions+=7;goto B64bf6d;
case 0x64bf70:c.instructions+=6;goto B64bf70;
case 0x64bf73:c.instructions+=5;goto B64bf73;
case 0x64bf79:c.instructions+=4;goto B64bf79;
case 0x64bf7b:c.instructions+=3;goto B64bf7b;
case 0x64bf7e:c.instructions+=2;goto B64bf7e;
case 0x64bf82:c.instructions+=1;goto B64bf82;
case 0x64bf84:goto L64bf84;
case 0x64bf86:c.instructions+=1;goto B64bf86;
case 0x64bf88:goto L64bf88;
case 0x64bf8e:c.instructions+=1;goto B64bf8e;
case 0x64bf92:goto L64bf92;
case 0x64bf95:c.instructions+=3;goto B64bf95;
case 0x64bf97:c.instructions+=2;goto B64bf97;
case 0x64bf99:c.instructions+=1;goto B64bf99;
case 0x64bf9b:goto L64bf9b;
case 0x64bf9d:c.instructions+=1;goto B64bf9d;
case 0x64bf9f:goto L64bf9f;
case 0x64bfa0:c.instructions+=2;goto B64bfa0;
case 0x64bfa2:c.instructions+=1;goto B64bfa2;
case 0x64bfa3:goto L64bfa3;
case 0x64bfa5:c.instructions+=1;goto B64bfa5;
case 0x64bfa7:goto L64bfa7;
case 0x64bfa9:c.instructions+=3;goto B64bfa9;
case 0x64bfab:c.instructions+=2;goto B64bfab;
case 0x64bfad:c.instructions+=1;goto B64bfad;
case 0x64bfb3:goto L64bfb3;
case 0x64bfb5:c.instructions+=1;goto B64bfb5;
case 0x64bfb7:goto L64bfb7;
case 0x64bfb9:c.instructions+=1;goto B64bfb9;
case 0x64bfbb:goto L64bfbb;
case 0x64bfbd:c.instructions+=1;goto B64bfbd;
case 0x64bfc3:goto L64bfc3;
case 0x64bfc5:c.instructions+=1;goto B64bfc5;
case 0x64bfc7:goto L64bfc7;
case 0x64bfca:c.instructions+=4;goto B64bfca;
case 0x64bfcd:c.instructions+=3;goto B64bfcd;
case 0x64bfce:c.instructions+=2;goto B64bfce;
case 0x64bfd2:c.instructions+=1;goto B64bfd2;
case 0x64bfd4:goto L64bfd4;
case 0x64bfd5:c.instructions+=3;goto B64bfd5;
case 0x64bfd7:c.instructions+=2;goto B64bfd7;
case 0x64bfd9:c.instructions+=1;goto B64bfd9;
case 0x64bfdb:goto L64bfdb;
case 0x64bfdd:c.instructions+=1;goto B64bfdd;
case 0x64bfdf:goto L64bfdf;
case 0x64bfe0:c.instructions+=1;goto B64bfe0;
case 0x64bfe5:goto L64bfe5;
case 0x64bfe8:c.instructions+=2;goto B64bfe8;
case 0x64bfe9:c.instructions+=1;goto B64bfe9;
case 0x64bfeb:goto L64bfeb;
case 0x64bfed:c.instructions+=5;goto B64bfed;
case 0x64bfee:c.instructions+=4;goto B64bfee;
case 0x64bfef:c.instructions+=3;goto B64bfef;
case 0x64bff0:c.instructions+=2;goto B64bff0;
case 0x64bff1:c.instructions+=1;goto B64bff1;
case 0x64bff4:goto L64bff4;
case 0x64bff7:c.instructions+=1;goto B64bff7;
case 0x64bff9:goto L64bff9;
case 0x64bffa:goto L64bffa;
case 0x64bffc:c.instructions+=2;goto B64bffc;
case 0x64bfff:c.instructions+=1;goto B64bfff;
default:missing_instruction(c.pc);}
B64b002:L64b002:{c.instructions+=1;NFSU2_TR(0x64b002);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64b003:L64b003:{c.instructions+=4;NFSU2_TR(0x64b003);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64b006:{NFSU2_TR(0x64b006);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+28),(U+0),4);
}
B64b008:{NFSU2_TR(0x64b008);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B64b00a:{NFSU2_TR(0x64b00a);
if(r1(R+518)){{goto L64b083;}}
}
B64b00c:L64b00c:{c.instructions+=3;NFSU2_TR(0x64b00c);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64b00e:{NFSU2_TR(0x64b00e);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B64b010:{NFSU2_TR(0x64b010);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B64b011:L64b011:{c.instructions+=1;NFSU2_TR(0x64b011);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L64b013;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64b011u);}goto L64b011;}
}
B64b013:L64b013:{c.instructions+=4;NFSU2_TR(0x64b013);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B64b015:{NFSU2_TR(0x64b015);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+4))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64b018:{NFSU2_TR(0x64b018);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64b01b:{NFSU2_TR(0x64b01b);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L64b06a;}}
}
B64b01d:L64b01d:{c.instructions+=3;NFSU2_TR(0x64b01d);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B64b01f:{NFSU2_TR(0x64b01f);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64b022:{NFSU2_TR(0x64b022);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L64b050;}}
}
B64b024:L64b024:{c.instructions+=2;NFSU2_TR(0x64b024);
__builtin_memmove((R+28),(R+4),4);
}
B64b026:{NFSU2_TR(0x64b026);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B64b029:L64b029:{c.instructions+=6;NFSU2_TR(0x64b029);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64b02c:{NFSU2_TR(0x64b02c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B64b02e:{NFSU2_TR(0x64b02e);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
}
B64b030:{NFSU2_TR(0x64b030);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64b031:{NFSU2_TR(0x64b031);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64b032:{NFSU2_TR(0x64b032);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64b037ull));
TAIL_STATIC(0x64a939u,64a);
}
B64b037:L64b037:{c.instructions+=3;NFSU2_TR(0x64b037);
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
B64b039:{NFSU2_TR(0x64b039);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64b03c:{NFSU2_TR(0x64b03c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L64b0a9;}}
}
B64b03e:L64b03e:{c.instructions+=5;NFSU2_TR(0x64b03e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64b041:{NFSU2_TR(0x64b041);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B64b042:{NFSU2_TR(0x64b042);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B64b045:{NFSU2_TR(0x64b045);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+12))<(r4(U+8))));
}
B64b048:{NFSU2_TR(0x64b048);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64b029u);}goto L64b029;}}
}
B64b04a:L64b04a:{c.instructions+=2;NFSU2_TR(0x64b04a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B64b04d:{NFSU2_TR(0x64b04d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64b050:L64b050:{c.instructions+=2;NFSU2_TR(0x64b050);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+12))<(r4(U+0))));
}
B64b052:{NFSU2_TR(0x64b052);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L64b05e;}}
}
B64b054:L64b054:{c.instructions+=2;NFSU2_TR(0x64b054);
__builtin_memmove((R+0),(R+8),4);
}
B64b056:{NFSU2_TR(0x64b056);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+12))));
}
B64b058:L64b058:{c.instructions+=3;NFSU2_TR(0x64b058);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B64b059:{NFSU2_TR(0x64b059);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64b05c:{NFSU2_TR(0x64b05c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64b058u);}goto L64b058;}}
}
B64b05e:L64b05e:{c.instructions+=4;NFSU2_TR(0x64b05e);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B64b05f:{NFSU2_TR(0x64b05f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B64b062:{NFSU2_TR(0x64b062);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64b065:{NFSU2_TR(0x64b065);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64b01du);}goto L64b01d;}}
}
B64b067:L64b067:{c.instructions+=1;NFSU2_TR(0x64b067);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B64b06a:L64b06a:{c.instructions+=2;NFSU2_TR(0x64b06a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
}
B64b06c:{NFSU2_TR(0x64b06c);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L64b098;}}
}
B64b06e:L64b06e:{c.instructions+=2;NFSU2_TR(0x64b06e);
__builtin_memmove((R+0),(R+12),4);
}
B64b070:{NFSU2_TR(0x64b070);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
}
B64b072:L64b072:{c.instructions+=2;NFSU2_TR(0x64b072);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B64b074:{NFSU2_TR(0x64b074);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L64b07e;}}
}
B64b076:L64b076:{c.instructions+=1;NFSU2_TR(0x64b076);
__builtin_memmove((R+4),(R+8),4);
}
B64b078:L64b078:{c.instructions+=3;NFSU2_TR(0x64b078);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B64b079:{NFSU2_TR(0x64b079);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64b07c:{NFSU2_TR(0x64b07c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64b078u);}goto L64b078;}}
}
B64b07e:L64b07e:{c.instructions+=2;NFSU2_TR(0x64b07e);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B64b07f:{NFSU2_TR(0x64b07f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64b072u);}goto L64b072;}}
}
B64b081:L64b081:{c.instructions+=1;NFSU2_TR(0x64b081);
{goto L64b098;}
}
B64b083:L64b083:{c.instructions+=2;NFSU2_TR(0x64b083);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B64b085:{NFSU2_TR(0x64b085);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L64b098;}}
}
B64b087:L64b087:{c.instructions+=1;NFSU2_TR(0x64b087);
__builtin_memmove((R+4),(R+12),4);
}
B64b089:L64b089:{c.instructions+=2;NFSU2_TR(0x64b089);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B64b08b:{NFSU2_TR(0x64b08b);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L64b095;}}
}
B64b08d:L64b08d:{c.instructions+=1;NFSU2_TR(0x64b08d);
__builtin_memmove((R+0),(R+8),4);
}
B64b08f:L64b08f:{c.instructions+=3;NFSU2_TR(0x64b08f);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B64b090:{NFSU2_TR(0x64b090);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64b093:{NFSU2_TR(0x64b093);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64b08fu);}goto L64b08f;}}
}
B64b095:L64b095:{c.instructions+=2;NFSU2_TR(0x64b095);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B64b096:{NFSU2_TR(0x64b096);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64b089u);}goto L64b089;}}
}
B64b098:L64b098:{c.instructions+=4;NFSU2_TR(0x64b098);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B64b09b:{NFSU2_TR(0x64b09b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B64b09f:{NFSU2_TR(0x64b09f);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x0ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B64b0a3:{NFSU2_TR(0x64b0a3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64b003u);}goto L64b003;}}
}
B64b0a9:L64b0a9:{c.instructions+=6;NFSU2_TR(0x64b0a9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B64b0aa:{NFSU2_TR(0x64b0aa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B64b0ab:{NFSU2_TR(0x64b0ab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B64b0ac:{NFSU2_TR(0x64b0ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64b0af:{NFSU2_TR(0x64b0af);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B64b0b0:{NFSU2_TR(0x64b0b0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B64b0b3:L64b0b3:{c.instructions+=7;NFSU2_TR(0x64b0b3);
__builtin_memmove((R+28),(R+28),4);
}
B64b0b5:{NFSU2_TR(0x64b0b5);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64b0b6:{NFSU2_TR(0x64b0b6);
__builtin_memmove((R+20),(R+16),4);
}
B64b0b8:{NFSU2_TR(0x64b0b8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64b0b9:{NFSU2_TR(0x64b0b9);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B64b0bb:{NFSU2_TR(0x64b0bb);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+0))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+0)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B64b0be:{NFSU2_TR(0x64b0be);
if(r1(R+518)){{goto L64b120;}}
}
B64b0c0:L64b0c0:{c.instructions+=8;NFSU2_TR(0x64b0c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64b0c3:{NFSU2_TR(0x64b0c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B64b0c6:{NFSU2_TR(0x64b0c6);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64b0c8:{NFSU2_TR(0x64b0c8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B64b0c9:{NFSU2_TR(0x64b0c9);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64b0cb:{NFSU2_TR(0x64b0cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64b0ce:{NFSU2_TR(0x64b0ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64b0d1:{NFSU2_TR(0x64b0d1);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L64b0d6;}}
}
B64b0d3:L64b0d3:{c.instructions+=1;NFSU2_TR(0x64b0d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64b0d6:L64b0d6:{c.instructions+=5;NFSU2_TR(0x64b0d6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64b0d7:{NFSU2_TR(0x64b0d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B64b0da:{NFSU2_TR(0x64b0da);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64b0db:{NFSU2_TR(0x64b0db);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B64b0de:{NFSU2_TR(0x64b0de);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64b0df:L64b0df:{c.instructions+=3;NFSU2_TR(0x64b0df);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B64b0e1:{NFSU2_TR(0x64b0e1);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+24))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64b0e4:{NFSU2_TR(0x64b0e4);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L64b103;}}
}
B64b0e6:L64b0e6:{c.instructions+=5;NFSU2_TR(0x64b0e6);
{u32 ea_=u32((r4(R+24)*4u)+r4(R+12));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B64b0e9:{NFSU2_TR(0x64b0e9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64b0ea:{NFSU2_TR(0x64b0ea);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B64b0ed:{NFSU2_TR(0x64b0ed);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64b0ee:{NFSU2_TR(0x64b0ee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64b0f3ull));
TAIL_STATIC(0x64a8ddu,64a);
}
B64b0f3:L64b0f3:{c.instructions+=2;NFSU2_TR(0x64b0f3);
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
B64b0f5:{NFSU2_TR(0x64b0f5);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L64b11d;}}
}
B64b0f7:L64b0f7:{c.instructions+=4;NFSU2_TR(0x64b0f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B64b0fa:{NFSU2_TR(0x64b0fa);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B64b0fb:{NFSU2_TR(0x64b0fb);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+24))<(r4(U+8))));
}
B64b0fe:{NFSU2_TR(0x64b0fe);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64b0e6u);}goto L64b0e6;}}
}
B64b100:L64b100:{c.instructions+=1;NFSU2_TR(0x64b100);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B64b103:L64b103:{c.instructions+=2;NFSU2_TR(0x64b103);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+24))<(r4(U+0))));
}
B64b105:{NFSU2_TR(0x64b105);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L64b111;}}
}
B64b107:L64b107:{c.instructions+=2;NFSU2_TR(0x64b107);
__builtin_memmove((R+4),(R+8),4);
}
B64b109:{NFSU2_TR(0x64b109);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+24))));
}
B64b10b:L64b10b:{c.instructions+=3;NFSU2_TR(0x64b10b);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B64b10c:{NFSU2_TR(0x64b10c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B64b10f:{NFSU2_TR(0x64b10f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64b10bu);}goto L64b10b;}}
}
B64b111:L64b111:{c.instructions+=4;NFSU2_TR(0x64b111);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B64b114:{NFSU2_TR(0x64b114);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x10ull))));
}
B64b117:{NFSU2_TR(0x64b117);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x0ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B64b11b:{NFSU2_TR(0x64b11b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64b0dfu);}goto L64b0df;}}
}
B64b11d:L64b11d:{c.instructions+=3;NFSU2_TR(0x64b11d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B64b11e:{NFSU2_TR(0x64b11e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B64b11f:{NFSU2_TR(0x64b11f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B64b120:L64b120:{c.instructions+=2;NFSU2_TR(0x64b120);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B64b121:{NFSU2_TR(0x64b121);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B64b124:L64b124:{c.instructions+=8;NFSU2_TR(0x64b124);
__builtin_memmove((R+28),(R+28),4);
}
B64b126:{NFSU2_TR(0x64b126);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64b127:{NFSU2_TR(0x64b127);
__builtin_memmove((R+20),(R+16),4);
}
B64b129:{NFSU2_TR(0x64b129);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64b12a:{NFSU2_TR(0x64b12a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64b12d:{NFSU2_TR(0x64b12d);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B64b12f:{NFSU2_TR(0x64b12f);
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
B64b131:{NFSU2_TR(0x64b131);
if(r1(R+518)){{goto L64b1a9;}}
}
B64b133:L64b133:{c.instructions+=9;NFSU2_TR(0x64b133);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64b136:{NFSU2_TR(0x64b136);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64b137:{NFSU2_TR(0x64b137);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B64b13a:{NFSU2_TR(0x64b13a);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64b13c:{NFSU2_TR(0x64b13c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B64b13d:{NFSU2_TR(0x64b13d);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+12))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64b13f:{NFSU2_TR(0x64b13f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64b142:{NFSU2_TR(0x64b142);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64b145:{NFSU2_TR(0x64b145);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L64b14a;}}
}
B64b147:L64b147:{c.instructions+=1;NFSU2_TR(0x64b147);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64b14a:L64b14a:{c.instructions+=7;NFSU2_TR(0x64b14a);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B64b14d:{NFSU2_TR(0x64b14d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64b14e:{NFSU2_TR(0x64b14e);
__builtin_memmove((R+24),(R+4),4);
}
B64b150:{NFSU2_TR(0x64b150);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64b151:{NFSU2_TR(0x64b151);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B64b154:{NFSU2_TR(0x64b154);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B64b157:{NFSU2_TR(0x64b157);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B64b159:L64b159:{c.instructions+=1;NFSU2_TR(0x64b159);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L64b15b;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64b159u);}goto L64b159;}
}
B64b15b:L64b15b:{c.instructions+=3;NFSU2_TR(0x64b15b);
__builtin_memmove((R+4),(R+24),4);
}
B64b15d:{NFSU2_TR(0x64b15d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64b160:{NFSU2_TR(0x64b160);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B64b163:L64b163:{c.instructions+=1;NFSU2_TR(0x64b163);
u8 U[18];
w1(U+17,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+17)){{goto L64b165;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64b163u);}goto L64b163;}
}
B64b165:L64b165:{c.instructions+=3;NFSU2_TR(0x64b165);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B64b167:{NFSU2_TR(0x64b167);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64b16a:{NFSU2_TR(0x64b16a);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L64b18b;}}
}
B64b16c:L64b16c:{c.instructions+=1;NFSU2_TR(0x64b16c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B64b16f:L64b16f:{c.instructions+=3;NFSU2_TR(0x64b16f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64b170:{NFSU2_TR(0x64b170);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64b171:{NFSU2_TR(0x64b171);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64b176ull));
TAIL_STATIC(0x64a939u,64a);
}
B64b176:L64b176:{c.instructions+=3;NFSU2_TR(0x64b176);
__builtin_memmove((R+8),(R+0),4);
}
B64b178:{NFSU2_TR(0x64b178);
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
B64b17a:{NFSU2_TR(0x64b17a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L64b1a6;}}
}
B64b17c:L64b17c:{c.instructions+=5;NFSU2_TR(0x64b17c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64b17f:{NFSU2_TR(0x64b17f);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B64b180:{NFSU2_TR(0x64b180);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x4ull))));
}
B64b183:{NFSU2_TR(0x64b183);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B64b186:{NFSU2_TR(0x64b186);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64b16fu);}goto L64b16f;}}
}
B64b188:L64b188:{c.instructions+=1;NFSU2_TR(0x64b188);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B64b18b:L64b18b:{c.instructions+=2;NFSU2_TR(0x64b18b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(R+28))<(r4(U+0))));
}
B64b18d:{NFSU2_TR(0x64b18d);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L64b199;}}
}
B64b18f:L64b18f:{c.instructions+=2;NFSU2_TR(0x64b18f);
__builtin_memmove((R+0),(R+12),4);
}
B64b191:{NFSU2_TR(0x64b191);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+28))));
}
B64b193:L64b193:{c.instructions+=3;NFSU2_TR(0x64b193);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B64b194:{NFSU2_TR(0x64b194);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64b197:{NFSU2_TR(0x64b197);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64b193u);}goto L64b193;}}
}
B64b199:L64b199:{c.instructions+=4;NFSU2_TR(0x64b199);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B64b19c:{NFSU2_TR(0x64b19c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x10ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B64b1a0:{NFSU2_TR(0x64b1a0);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x0ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B64b1a4:{NFSU2_TR(0x64b1a4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64b165u);}goto L64b165;}}
}
B64b1a6:L64b1a6:{c.instructions+=3;NFSU2_TR(0x64b1a6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B64b1a7:{NFSU2_TR(0x64b1a7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B64b1a8:{NFSU2_TR(0x64b1a8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B64b1a9:L64b1a9:{c.instructions+=3;NFSU2_TR(0x64b1a9);
__builtin_memmove((R+0),(R+8),4);
}
B64b1ab:{NFSU2_TR(0x64b1ab);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B64b1ac:{NFSU2_TR(0x64b1ac);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B64b1af:L64b1af:{c.instructions+=18;NFSU2_TR(0x64b1af);
__builtin_memmove((R+28),(R+28),4);
}
B64b1b1:{NFSU2_TR(0x64b1b1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64b1b2:{NFSU2_TR(0x64b1b2);
__builtin_memmove((R+20),(R+16),4);
}
B64b1b4:{NFSU2_TR(0x64b1b4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B64b1b7:{NFSU2_TR(0x64b1b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64b1ba:{NFSU2_TR(0x64b1ba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B64b1bc:{NFSU2_TR(0x64b1bc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B64b1be:{NFSU2_TR(0x64b1be);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64b1bf:{NFSU2_TR(0x64b1bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B64b1c2:{NFSU2_TR(0x64b1c2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64b1c3:{NFSU2_TR(0x64b1c3);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B64b1c5:{NFSU2_TR(0x64b1c5);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64b1c8:{NFSU2_TR(0x64b1c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64b1cb:{NFSU2_TR(0x64b1cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64b1ce:{NFSU2_TR(0x64b1ce);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64b1cf:{NFSU2_TR(0x64b1cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64b1d2:{NFSU2_TR(0x64b1d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64b1d5:{NFSU2_TR(0x64b1d5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64b1dc;}}
}
B64b1d7:L64b1d7:{c.instructions+=2;NFSU2_TR(0x64b1d7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(U+0))<(u32(0x1ull))));
}
B64b1da:{NFSU2_TR(0x64b1da);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L64b1e6;}}
}
B64b1dc:L64b1dc:{c.instructions+=2;NFSU2_TR(0x64b1dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B64b1e3:{NFSU2_TR(0x64b1e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B64b1e6:L64b1e6:{c.instructions+=2;NFSU2_TR(0x64b1e6);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B64b1e8:{NFSU2_TR(0x64b1e8);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L64b3f0;}}
}
B64b1ee:L64b1ee:{c.instructions+=2;NFSU2_TR(0x64b1ee);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x3ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64b1f1:{NFSU2_TR(0x64b1f1);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L64b335;}}
}
B64b1f7:L64b1f7:{c.instructions+=2;NFSU2_TR(0x64b1f7);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64b1fa:{NFSU2_TR(0x64b1fa);
if(r1(R+518)){{goto L64b253;}}
}
B64b1fc:L64b1fc:{c.instructions+=2;NFSU2_TR(0x64b1fc);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0x5ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x5ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x5ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B64b1ff:{NFSU2_TR(0x64b1ff);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64b3f0;}}
}
B64b205:L64b205:{c.instructions+=6;NFSU2_TR(0x64b205);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B64b207:{NFSU2_TR(0x64b207);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B64b20a:{NFSU2_TR(0x64b20a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((R+24),(U+0),4);
}
B64b20d:{NFSU2_TR(0x64b20d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64b210:{NFSU2_TR(0x64b210);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B64b212:{NFSU2_TR(0x64b212);
if(r1(R+518)){{goto L64b3f7;}}
}
B64b218:L64b218:{c.instructions+=5;NFSU2_TR(0x64b218);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64b21b:{NFSU2_TR(0x64b21b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B64b21f:{NFSU2_TR(0x64b21f);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B64b221:{NFSU2_TR(0x64b221);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B64b223:{NFSU2_TR(0x64b223);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L64b24b;}}
}
B64b225:L64b225:{c.instructions+=6;NFSU2_TR(0x64b225);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64b228:{NFSU2_TR(0x64b228);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64b22a:{NFSU2_TR(0x64b22a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64b22d:{NFSU2_TR(0x64b22d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64b230:{NFSU2_TR(0x64b230);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64b233:{NFSU2_TR(0x64b233);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64b238ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64b1afu);}goto L64b1af;}
}
B64b238:L64b238:{c.instructions+=3;NFSU2_TR(0x64b238);
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
B64b23a:{NFSU2_TR(0x64b23a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64b23d:{NFSU2_TR(0x64b23d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L64b3f7;}}
}
B64b243:L64b243:{c.instructions+=3;NFSU2_TR(0x64b243);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B64b246:{NFSU2_TR(0x64b246);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
}
B64b249:{NFSU2_TR(0x64b249);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64b225u);}goto L64b225;}}
}
B64b24b:L64b24b:{c.instructions+=2;NFSU2_TR(0x64b24b);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+12),u32(0x1ull)));
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+12))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B64b24c:{NFSU2_TR(0x64b24c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64b218u);}goto L64b218;}}
}
B64b24e:L64b24e:{c.instructions+=1;NFSU2_TR(0x64b24e);
{goto L64b3f7;}
}
B64b253:L64b253:{c.instructions+=2;NFSU2_TR(0x64b253);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64b256:{NFSU2_TR(0x64b256);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64b30f;}}
}
B64b25c:L64b25c:{c.instructions+=2;NFSU2_TR(0x64b25c);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64b25e:{NFSU2_TR(0x64b25e);
if(r1(R+518)){{goto L64b32a;}}
}
B64b264:L64b264:{c.instructions+=4;NFSU2_TR(0x64b264);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64b267:{NFSU2_TR(0x64b267);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B64b269:{NFSU2_TR(0x64b269);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+12))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B64b26b:{NFSU2_TR(0x64b26b);
if(r1(R+518)){{goto L64b32a;}}
}
B64b271:L64b271:{c.instructions+=6;NFSU2_TR(0x64b271);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64b274:{NFSU2_TR(0x64b274);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+24),(U+0),4);
}
B64b276:{NFSU2_TR(0x64b276);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B64b278:{NFSU2_TR(0x64b278);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B64b27a:{NFSU2_TR(0x64b27a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B64b27c:{NFSU2_TR(0x64b27c);
if(r1(R+518)){{goto L64b2d6;}}
}
B64b27e:L64b27e:{c.instructions+=5;NFSU2_TR(0x64b27e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64b281:{NFSU2_TR(0x64b281);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
}
B64b284:{NFSU2_TR(0x64b284);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64b285:{NFSU2_TR(0x64b285);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((R+4),(U+0),4);
}
B64b288:{NFSU2_TR(0x64b288);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64b28dull));
TAIL_STATIC(0x647643u,647);
}
B64b28d:L64b28d:{c.instructions+=2;NFSU2_TR(0x64b28d);
__builtin_memmove((R+0),(R+24),4);
}
B64b28f:{NFSU2_TR(0x64b28f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+4),(U+0),4);
}
B64b292:L64b292:{c.instructions+=4;NFSU2_TR(0x64b292);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+8),(U+0),1);
}
B64b294:{NFSU2_TR(0x64b294);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B64b295:{NFSU2_TR(0x64b295);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B64b297:{NFSU2_TR(0x64b297);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64b292u);}goto L64b292;}}
}
B64b299:L64b299:{c.instructions+=6;NFSU2_TR(0x64b299);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
}
B64b29b:{NFSU2_TR(0x64b29b);
__builtin_memmove((R+4),gp(0x8a5d00),4);
}
B64b2a1:{NFSU2_TR(0x64b2a1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+12),(U+0),4);
}
B64b2a4:{NFSU2_TR(0x64b2a4);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64b2a6:{NFSU2_TR(0x64b2a6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64b2a7:{NFSU2_TR(0x64b2a7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64b2acull));
TAIL_STATIC(0x671ccbu,671);
}
B64b2ac:L64b2ac:{c.instructions+=4;NFSU2_TR(0x64b2ac);
__builtin_memmove((R+28),(R+0),4);
}
B64b2ae:{NFSU2_TR(0x64b2ae);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B64b2b0:{NFSU2_TR(0x64b2b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64b2b3:{NFSU2_TR(0x64b2b3);
if(r1(R+518)){{goto L64b2fb;}}
}
B64b2b5:L64b2b5:{c.instructions+=3;NFSU2_TR(0x64b2b5);
__builtin_memmove((R+4),(R+12),4);
}
B64b2b7:{NFSU2_TR(0x64b2b7);
__builtin_memmove((R+0),(R+4),4);
}
B64b2b9:{NFSU2_TR(0x64b2b9);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B64b2bc:L64b2bc:{c.instructions+=1;NFSU2_TR(0x64b2bc);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L64b2be;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64b2bcu);}goto L64b2bc;}
}
B64b2be:L64b2be:{c.instructions+=2;NFSU2_TR(0x64b2be);
__builtin_memmove((R+4),(R+0),4);
}
B64b2c0:{NFSU2_TR(0x64b2c0);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B64b2c3:L64b2c3:{c.instructions+=1;NFSU2_TR(0x64b2c3);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L64b2c5;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64b2c3u);}goto L64b2c3;}
}
B64b2c5:L64b2c5:{c.instructions+=2;NFSU2_TR(0x64b2c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64b2c8:{NFSU2_TR(0x64b2c8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64b2cdull));
TAIL_STATIC(0x64547fu,645);
}
B64b2cd:L64b2cd:{c.instructions+=3;NFSU2_TR(0x64b2cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64b2d0:{NFSU2_TR(0x64b2d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64b2d3:{NFSU2_TR(0x64b2d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B64b2d6:L64b2d6:{c.instructions+=12;NFSU2_TR(0x64b2d6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+24),(U+0),4);
}
B64b2d8:{NFSU2_TR(0x64b2d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64b2db:{NFSU2_TR(0x64b2db);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64b2de:{NFSU2_TR(0x64b2de);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B64b2e0:{NFSU2_TR(0x64b2e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B64b2e3:{NFSU2_TR(0x64b2e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64b2e6:{NFSU2_TR(0x64b2e6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x4ull))));
s4(u32(r4(R+4)),r4(U+0));
}
B64b2e9:{NFSU2_TR(0x64b2e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64b2ec:{NFSU2_TR(0x64b2ec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B64b2ee:{NFSU2_TR(0x64b2ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64b2f1:{NFSU2_TR(0x64b2f1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B64b2f3:{NFSU2_TR(0x64b2f3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64b264u);}goto L64b264;}}
}
B64b2f9:L64b2f9:{c.instructions+=1;NFSU2_TR(0x64b2f9);
{goto L64b32a;}
}
B64b2fb:L64b2fb:{c.instructions+=3;NFSU2_TR(0x64b2fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64b2fe:{NFSU2_TR(0x64b2fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w4(U+4,u32(0x8007000eull));
s4(u32(r4(U+0)),r4(U+4));
}
B64b305:{NFSU2_TR(0x64b305);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64b30aull));
TAIL_STATIC(0x64547fu,645);
}
B64b30a:L64b30a:{c.instructions+=1;NFSU2_TR(0x64b30a);
{goto L64b3f7;}
}
B64b30f:L64b30f:{c.instructions+=2;NFSU2_TR(0x64b30f);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64b311:{NFSU2_TR(0x64b311);
if(r1(R+518)){{goto L64b32a;}}
}
B64b313:L64b313:{c.instructions+=2;NFSU2_TR(0x64b313);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64b316:{NFSU2_TR(0x64b316);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64b319:L64b319:{c.instructions+=2;NFSU2_TR(0x64b319);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+24))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B64b31b:{NFSU2_TR(0x64b31b);
if(r1(R+518)){{goto L64b32a;}}
}
B64b31d:L64b31d:{c.instructions+=6;NFSU2_TR(0x64b31d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x4ull))));
s4(u32(r4(R+4)),r4(U+0));
}
B64b320:{NFSU2_TR(0x64b320);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
}
B64b321:{NFSU2_TR(0x64b321);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B64b323:{NFSU2_TR(0x64b323);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B64b326:{NFSU2_TR(0x64b326);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B64b328:{NFSU2_TR(0x64b328);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64b319u);}goto L64b319;}}
}
B64b32a:L64b32a:{c.instructions+=3;NFSU2_TR(0x64b32a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64b32d:{NFSU2_TR(0x64b32d);
u8 U[10];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w1(R+512,carry<u32>(r4(U+0),u32(0x14ull)));
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w1(R+523,scarry<u32>(r4(U+0),u32(0x14ull)));
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x14ull))));
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
B64b330:{NFSU2_TR(0x64b330);
{goto L64b3f7;}
}
B64b335:L64b335:{c.instructions+=5;NFSU2_TR(0x64b335);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64b338:{NFSU2_TR(0x64b338);
u8 U[32];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
w8(U+8,u64(s64(s32(r4(R+4)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+4,u32(r8(U+24)));
}
B64b33c:{NFSU2_TR(0x64b33c);
u8 U[32];
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(s64(s32(r4(R+12)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+4,u32(r8(U+24)));
w8(U+0,u64(s64(s32(r4(R+4)))));
w1(R+512,u8((r8(U+0))!=(r8(U+24))));
}
B64b33f:{NFSU2_TR(0x64b33f);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B64b340:{NFSU2_TR(0x64b340);
if(r1(R+518)){{goto L64b3b4;}}
}
B64b342:L64b342:{c.instructions+=2;NFSU2_TR(0x64b342);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B64b343:{NFSU2_TR(0x64b343);
if(r1(R+518)){{goto L64b37e;}}
}
B64b345:L64b345:{c.instructions+=2;NFSU2_TR(0x64b345);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+8),u32(0x1ull)));
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B64b346:{NFSU2_TR(0x64b346);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64b3f0;}}
}
B64b34c:L64b34c:{c.instructions+=4;NFSU2_TR(0x64b34c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B64b34f:{NFSU2_TR(0x64b34f);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B64b351:{NFSU2_TR(0x64b351);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B64b353:{NFSU2_TR(0x64b353);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L64b375;}}
}
B64b355:L64b355:{c.instructions+=1;NFSU2_TR(0x64b355);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64b358:L64b358:{c.instructions+=3;NFSU2_TR(0x64b358);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+24),(U+0),4);
}
B64b35a:{NFSU2_TR(0x64b35a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B64b35c:{NFSU2_TR(0x64b35c);
if(r1(R+518)){{goto L64b375;}}
}
B64b35e:L64b35e:{c.instructions+=10;NFSU2_TR(0x64b35e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+8),(U+0),4);
}
B64b360:{NFSU2_TR(0x64b360);
{u32 ea_=u32((r4(R+28)*4u)+r4(R+8));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B64b363:{NFSU2_TR(0x64b363);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B64b366:{NFSU2_TR(0x64b366);
{u32 ea_=u32(r4(R+8)+u32(24u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B64b369:{NFSU2_TR(0x64b369);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B64b36b:{NFSU2_TR(0x64b36b);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B64b36e:{NFSU2_TR(0x64b36e);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B64b36f:{NFSU2_TR(0x64b36f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+0))));
}
B64b371:{NFSU2_TR(0x64b371);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B64b373:{NFSU2_TR(0x64b373);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64b358u);}goto L64b358;}}
}
B64b375:L64b375:{c.instructions+=4;NFSU2_TR(0x64b375);
__builtin_memmove((R+0),(R+4),4);
}
B64b377:{NFSU2_TR(0x64b377);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B64b37a:{NFSU2_TR(0x64b37a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
w4(U+0,u32(u32(r4(U+0))+u32(r4(R+0))));
s4(u32(r4(R+12)),r4(U+0));
}
B64b37c:{NFSU2_TR(0x64b37c);
{goto L64b3e8;}
}
B64b37e:L64b37e:{c.instructions+=4;NFSU2_TR(0x64b37e);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B64b380:{NFSU2_TR(0x64b380);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64b382:{NFSU2_TR(0x64b382);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64b385:{NFSU2_TR(0x64b385);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L64b3ab;}}
}
B64b387:L64b387:{c.instructions+=1;NFSU2_TR(0x64b387);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B64b38a:L64b38a:{c.instructions+=3;NFSU2_TR(0x64b38a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B64b38c:{NFSU2_TR(0x64b38c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B64b38e:{NFSU2_TR(0x64b38e);
if(r1(R+518)){{goto L64b3ab;}}
}
B64b390:L64b390:{c.instructions+=11;NFSU2_TR(0x64b390);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64b393:{NFSU2_TR(0x64b393);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+12),(U+0),4);
}
B64b395:{NFSU2_TR(0x64b395);
}
B64b399:{NFSU2_TR(0x64b399);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B64b39c:{NFSU2_TR(0x64b39c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64b39f:{NFSU2_TR(0x64b39f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B64b3a1:{NFSU2_TR(0x64b3a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64b3a4:{NFSU2_TR(0x64b3a4);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B64b3a5:{NFSU2_TR(0x64b3a5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+0))));
}
B64b3a7:{NFSU2_TR(0x64b3a7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B64b3a9:{NFSU2_TR(0x64b3a9);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64b38au);}goto L64b38a;}}
}
B64b3ab:L64b3ab:{c.instructions+=4;NFSU2_TR(0x64b3ab);
__builtin_memmove((R+0),(R+4),4);
}
B64b3ad:{NFSU2_TR(0x64b3ad);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B64b3b0:{NFSU2_TR(0x64b3b0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w4(U+0,u32(u32(r4(U+0))+u32(r4(R+0))));
s4(u32(r4(R+24)),r4(U+0));
}
B64b3b2:{NFSU2_TR(0x64b3b2);
{goto L64b3e8;}
}
B64b3b4:L64b3b4:{c.instructions+=2;NFSU2_TR(0x64b3b4);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64b3b6:{NFSU2_TR(0x64b3b6);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L64b3e0;}}
}
B64b3b8:L64b3b8:{c.instructions+=1;NFSU2_TR(0x64b3b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64b3bb:L64b3bb:{c.instructions+=3;NFSU2_TR(0x64b3bb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+28),(U+0),4);
}
B64b3bd:{NFSU2_TR(0x64b3bd);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B64b3bf:{NFSU2_TR(0x64b3bf);
if(r1(R+518)){{goto L64b3e0;}}
}
B64b3c1:L64b3c1:{c.instructions+=13;NFSU2_TR(0x64b3c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B64b3c4:{NFSU2_TR(0x64b3c4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+8),(U+0),4);
}
B64b3c6:{NFSU2_TR(0x64b3c6);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B64b3c8:{NFSU2_TR(0x64b3c8);
u8 U[20];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(r4(R+12))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B64b3cb:{NFSU2_TR(0x64b3cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B64b3ce:{NFSU2_TR(0x64b3ce);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+12),(U+0),1);
}
B64b3d1:{NFSU2_TR(0x64b3d1);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B64b3d2:{NFSU2_TR(0x64b3d2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+24))<(r4(U+0))));
}
B64b3d4:{NFSU2_TR(0x64b3d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64b3d7:{NFSU2_TR(0x64b3d7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B64b3d9:{NFSU2_TR(0x64b3d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B64b3dc:{NFSU2_TR(0x64b3dc);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B64b3de:{NFSU2_TR(0x64b3de);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64b3bbu);}goto L64b3bb;}}
}
B64b3e0:L64b3e0:{c.instructions+=3;NFSU2_TR(0x64b3e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64b3e3:{NFSU2_TR(0x64b3e3);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B64b3e6:{NFSU2_TR(0x64b3e6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))+u32(r4(R+4))));
s4(u32(r4(R+0)),r4(U+0));
}
B64b3e8:L64b3e8:{c.instructions+=3;NFSU2_TR(0x64b3e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64b3eb:{NFSU2_TR(0x64b3eb);
u8 U[10];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w1(R+512,carry<u32>(r4(U+0),u32(0x1cull)));
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w1(R+523,scarry<u32>(r4(U+0),u32(0x1cull)));
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x1cull))));
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
B64b3ee:{NFSU2_TR(0x64b3ee);
{goto L64b3f7;}
}
B64b3f0:L64b3f0:{c.instructions+=1;NFSU2_TR(0x64b3f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
w4(U+4,u32(0x80004005ull));
s4(u32(r4(U+0)),r4(U+4));
}
B64b3f7:L64b3f7:{c.instructions+=6;NFSU2_TR(0x64b3f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64b3fa:{NFSU2_TR(0x64b3fa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B64b3fb:{NFSU2_TR(0x64b3fb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B64b3fc:{NFSU2_TR(0x64b3fc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B64b3fd:{NFSU2_TR(0x64b3fd);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B64b3fe:{NFSU2_TR(0x64b3fe);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B64b401:L64b401:{c.instructions+=11;NFSU2_TR(0x64b401);
__builtin_memmove((R+28),(R+28),4);
}
B64b403:{NFSU2_TR(0x64b403);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64b404:{NFSU2_TR(0x64b404);
__builtin_memmove((R+20),(R+16),4);
}
B64b406:{NFSU2_TR(0x64b406);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64b409:{NFSU2_TR(0x64b409);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((R+0),(U+0),4);
}
B64b40c:{NFSU2_TR(0x64b40c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64b40d:{NFSU2_TR(0x64b40d);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((R+0),(U+0),4);
}
B64b410:{NFSU2_TR(0x64b410);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64b411:{NFSU2_TR(0x64b411);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B64b414:{NFSU2_TR(0x64b414);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64b415:{NFSU2_TR(0x64b415);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64b41aull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64b1afu);}goto L64b1af;}
}
B64b41a:L64b41a:{c.instructions+=2;NFSU2_TR(0x64b41a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B64b41b:{NFSU2_TR(0x64b41b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B64b41e:L64b41e:{c.instructions+=15;NFSU2_TR(0x64b41e);
__builtin_memmove((R+28),(R+28),4);
}
B64b420:{NFSU2_TR(0x64b420);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64b421:{NFSU2_TR(0x64b421);
__builtin_memmove((R+20),(R+16),4);
}
B64b423:{NFSU2_TR(0x64b423);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64b424:{NFSU2_TR(0x64b424);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64b427:{NFSU2_TR(0x64b427);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B64b429:{NFSU2_TR(0x64b429);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B64b42d:{NFSU2_TR(0x64b42d);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64b431:{NFSU2_TR(0x64b431);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64b434:{NFSU2_TR(0x64b434);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64b435:{NFSU2_TR(0x64b435);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64b436:{NFSU2_TR(0x64b436);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+24),(U+0),4);
}
B64b438:{NFSU2_TR(0x64b438);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64b439:{NFSU2_TR(0x64b439);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B64b43c:{NFSU2_TR(0x64b43c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64b443;}}
}
B64b43e:L64b43e:{c.instructions+=2;NFSU2_TR(0x64b43e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(U+0))<(u32(0x1ull))));
}
B64b441:{NFSU2_TR(0x64b441);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L64b446;}}
}
B64b443:L64b443:{c.instructions+=2;NFSU2_TR(0x64b443);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B64b445:{NFSU2_TR(0x64b445);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B64b446:L64b446:{c.instructions+=2;NFSU2_TR(0x64b446);
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
B64b448:{NFSU2_TR(0x64b448);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L64b5c9;}}
}
B64b44e:L64b44e:{c.instructions+=2;NFSU2_TR(0x64b44e);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x3ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64b451:{NFSU2_TR(0x64b451);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L64b509;}}
}
B64b457:L64b457:{c.instructions+=4;NFSU2_TR(0x64b457);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64b459:{NFSU2_TR(0x64b459);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B64b45a:{NFSU2_TR(0x64b45a);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64b45c:{NFSU2_TR(0x64b45c);
if(r1(R+518)){{goto L64b4b2;}}
}
B64b45e:L64b45e:{c.instructions+=2;NFSU2_TR(0x64b45e);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x5ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x5ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x5ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B64b461:{NFSU2_TR(0x64b461);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64b5c9;}}
}
B64b467:L64b467:{c.instructions+=6;NFSU2_TR(0x64b467);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B64b469:{NFSU2_TR(0x64b469);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64b46c:{NFSU2_TR(0x64b46c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B64b46f:{NFSU2_TR(0x64b46f);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((R+24),(U+0),4);
}
B64b472:{NFSU2_TR(0x64b472);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B64b474:{NFSU2_TR(0x64b474);
if(r1(R+518)){{goto L64b5d0;}}
}
B64b47a:L64b47a:{c.instructions+=5;NFSU2_TR(0x64b47a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64b47d:{NFSU2_TR(0x64b47d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B64b481:{NFSU2_TR(0x64b481);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B64b483:{NFSU2_TR(0x64b483);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B64b485:{NFSU2_TR(0x64b485);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L64b4aa;}}
}
B64b487:L64b487:{c.instructions+=5;NFSU2_TR(0x64b487);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64b489:{NFSU2_TR(0x64b489);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64b48c:{NFSU2_TR(0x64b48c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64b48f:{NFSU2_TR(0x64b48f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64b492:{NFSU2_TR(0x64b492);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64b497ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64b41eu);}goto L64b41e;}
}
B64b497:L64b497:{c.instructions+=3;NFSU2_TR(0x64b497);
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
B64b499:{NFSU2_TR(0x64b499);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64b49c:{NFSU2_TR(0x64b49c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L64b5d0;}}
}
B64b4a2:L64b4a2:{c.instructions+=3;NFSU2_TR(0x64b4a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B64b4a5:{NFSU2_TR(0x64b4a5);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
}
B64b4a8:{NFSU2_TR(0x64b4a8);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64b487u);}goto L64b487;}}
}
B64b4aa:L64b4aa:{c.instructions+=2;NFSU2_TR(0x64b4aa);
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
B64b4ab:{NFSU2_TR(0x64b4ab);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64b47au);}goto L64b47a;}}
}
B64b4ad:L64b4ad:{c.instructions+=1;NFSU2_TR(0x64b4ad);
{goto L64b5d0;}
}
B64b4b2:L64b4b2:{c.instructions+=2;NFSU2_TR(0x64b4b2);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64b4b4:{NFSU2_TR(0x64b4b4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64b4de;}}
}
B64b4b6:L64b4b6:{c.instructions+=2;NFSU2_TR(0x64b4b6);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B64b4b8:{NFSU2_TR(0x64b4b8);
if(r1(R+518)){{goto L64b4fe;}}
}
B64b4ba:L64b4ba:{c.instructions+=2;NFSU2_TR(0x64b4ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64b4bd:{NFSU2_TR(0x64b4bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B64b4c0:L64b4c0:{c.instructions+=3;NFSU2_TR(0x64b4c0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+24),(U+0),4);
}
B64b4c2:{NFSU2_TR(0x64b4c2);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B64b4c4:{NFSU2_TR(0x64b4c4);
if(r1(R+518)){{goto L64b4fe;}}
}
B64b4c6:L64b4c6:{c.instructions+=10;NFSU2_TR(0x64b4c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64b4c9:{NFSU2_TR(0x64b4c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64b4cc:{NFSU2_TR(0x64b4cc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+24),(U+0),4);
}
B64b4ce:{NFSU2_TR(0x64b4ce);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B64b4d0:{NFSU2_TR(0x64b4d0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
w4(U+0,u32(u32(r4(U+0))+u32(r4(R+12))));
s4(u32(r4(R+4)),r4(U+0));
}
B64b4d2:{NFSU2_TR(0x64b4d2);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
}
B64b4d3:{NFSU2_TR(0x64b4d3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B64b4d5:{NFSU2_TR(0x64b4d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64b4d8:{NFSU2_TR(0x64b4d8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B64b4da:{NFSU2_TR(0x64b4da);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64b4c0u);}goto L64b4c0;}}
}
B64b4dc:L64b4dc:{c.instructions+=1;NFSU2_TR(0x64b4dc);
{goto L64b4fe;}
}
B64b4de:L64b4de:{c.instructions+=2;NFSU2_TR(0x64b4de);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B64b4e0:{NFSU2_TR(0x64b4e0);
if(r1(R+518)){{goto L64b4fe;}}
}
B64b4e2:L64b4e2:{c.instructions+=2;NFSU2_TR(0x64b4e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64b4e5:{NFSU2_TR(0x64b4e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B64b4e8:L64b4e8:{c.instructions+=2;NFSU2_TR(0x64b4e8);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B64b4eb:{NFSU2_TR(0x64b4eb);
if(r1(R+518)){{goto L64b4fe;}}
}
B64b4ed:L64b4ed:{c.instructions+=8;NFSU2_TR(0x64b4ed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B64b4ef:{NFSU2_TR(0x64b4ef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0x0ull))));
s4(u32(r4(R+0)),r4(U+0));
}
B64b4f2:{NFSU2_TR(0x64b4f2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
w4(U+0,u32(u32(r4(U+0))+u32(r4(R+12))));
s4(u32(r4(R+4)),r4(U+0));
}
B64b4f4:{NFSU2_TR(0x64b4f4);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
}
B64b4f5:{NFSU2_TR(0x64b4f5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B64b4f7:{NFSU2_TR(0x64b4f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64b4fa:{NFSU2_TR(0x64b4fa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B64b4fc:{NFSU2_TR(0x64b4fc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64b4e8u);}goto L64b4e8;}}
}
B64b4fe:L64b4fe:{c.instructions+=3;NFSU2_TR(0x64b4fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64b501:{NFSU2_TR(0x64b501);
u8 U[10];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w1(R+512,carry<u32>(r4(U+0),u32(0x14ull)));
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w1(R+523,scarry<u32>(r4(U+0),u32(0x14ull)));
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x14ull))));
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
B64b504:{NFSU2_TR(0x64b504);
{goto L64b5d0;}
}
B64b509:L64b509:{c.instructions+=5;NFSU2_TR(0x64b509);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B64b50c:{NFSU2_TR(0x64b50c);
u8 U[32];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
w8(U+8,u64(s64(s32(r4(R+8)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+8,u32(r8(U+24)));
}
B64b510:{NFSU2_TR(0x64b510);
u8 U[32];
w8(U+8,u64(s64(s32(r4(R+8)))));
w8(U+16,u64(s64(s32(r4(R+28)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+8,u32(r8(U+24)));
w8(U+0,u64(s64(s32(r4(R+8)))));
w1(R+512,u8((r8(U+0))!=(r8(U+24))));
}
B64b513:{NFSU2_TR(0x64b513);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B64b514:{NFSU2_TR(0x64b514);
if(r1(R+518)){{goto L64b58c;}}
}
B64b516:L64b516:{c.instructions+=2;NFSU2_TR(0x64b516);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B64b517:{NFSU2_TR(0x64b517);
if(r1(R+518)){{goto L64b556;}}
}
B64b519:L64b519:{c.instructions+=2;NFSU2_TR(0x64b519);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+24),u32(0x1ull)));
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B64b51a:{NFSU2_TR(0x64b51a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64b5c9;}}
}
B64b520:L64b520:{c.instructions+=4;NFSU2_TR(0x64b520);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B64b523:{NFSU2_TR(0x64b523);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B64b525:{NFSU2_TR(0x64b525);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B64b527:{NFSU2_TR(0x64b527);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L64b54d;}}
}
B64b529:L64b529:{c.instructions+=1;NFSU2_TR(0x64b529);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64b52c:L64b52c:{c.instructions+=3;NFSU2_TR(0x64b52c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+24),(U+0),4);
}
B64b52e:{NFSU2_TR(0x64b52e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B64b530:{NFSU2_TR(0x64b530);
if(r1(R+518)){{goto L64b54d;}}
}
B64b532:L64b532:{c.instructions+=12;NFSU2_TR(0x64b532);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64b535:{NFSU2_TR(0x64b535);
{u32 ea_=u32(r4(R+24)+u32(24u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B64b538:{NFSU2_TR(0x64b538);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+24),(U+0),4);
}
B64b53a:{NFSU2_TR(0x64b53a);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B64b53c:{NFSU2_TR(0x64b53c);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+24));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B64b53f:{NFSU2_TR(0x64b53f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+24),(U+0),4);
}
B64b541:{NFSU2_TR(0x64b541);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64b544:{NFSU2_TR(0x64b544);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B64b545:{NFSU2_TR(0x64b545);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B64b547:{NFSU2_TR(0x64b547);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B64b549:{NFSU2_TR(0x64b549);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+4)),r4(U+0));
}
B64b54b:{NFSU2_TR(0x64b54b);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64b52cu);}goto L64b52c;}}
}
B64b54d:L64b54d:{c.instructions+=4;NFSU2_TR(0x64b54d);
__builtin_memmove((R+0),(R+8),4);
}
B64b54f:{NFSU2_TR(0x64b54f);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B64b552:{NFSU2_TR(0x64b552);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
w4(U+0,u32(u32(r4(U+0))+u32(r4(R+0))));
s4(u32(r4(R+28)),r4(U+0));
}
B64b554:{NFSU2_TR(0x64b554);
{goto L64b5c1;}
}
B64b556:L64b556:{c.instructions+=4;NFSU2_TR(0x64b556);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64b559:{NFSU2_TR(0x64b559);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B64b55b:{NFSU2_TR(0x64b55b);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B64b55d:{NFSU2_TR(0x64b55d);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L64b583;}}
}
B64b55f:L64b55f:{c.instructions+=1;NFSU2_TR(0x64b55f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B64b562:L64b562:{c.instructions+=3;NFSU2_TR(0x64b562);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B64b564:{NFSU2_TR(0x64b564);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B64b566:{NFSU2_TR(0x64b566);
if(r1(R+518)){{goto L64b583;}}
}
B64b568:L64b568:{c.instructions+=11;NFSU2_TR(0x64b568);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64b56b:{NFSU2_TR(0x64b56b);
}
B64b56f:{NFSU2_TR(0x64b56f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64b572:{NFSU2_TR(0x64b572);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+12),(U+0),4);
}
B64b574:{NFSU2_TR(0x64b574);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B64b577:{NFSU2_TR(0x64b577);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B64b579:{NFSU2_TR(0x64b579);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64b57c:{NFSU2_TR(0x64b57c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B64b57d:{NFSU2_TR(0x64b57d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B64b57f:{NFSU2_TR(0x64b57f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+28)),r4(U+0));
}
B64b581:{NFSU2_TR(0x64b581);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64b562u);}goto L64b562;}}
}
B64b583:L64b583:{c.instructions+=4;NFSU2_TR(0x64b583);
__builtin_memmove((R+0),(R+8),4);
}
B64b585:{NFSU2_TR(0x64b585);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B64b588:{NFSU2_TR(0x64b588);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w4(U+0,u32(u32(r4(U+0))+u32(r4(R+0))));
s4(u32(r4(R+24)),r4(U+0));
}
B64b58a:{NFSU2_TR(0x64b58a);
{goto L64b5c1;}
}
B64b58c:L64b58c:{c.instructions+=4;NFSU2_TR(0x64b58c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64b58f:{NFSU2_TR(0x64b58f);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B64b591:{NFSU2_TR(0x64b591);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B64b593:{NFSU2_TR(0x64b593);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L64b5ba;}}
}
B64b595:L64b595:{c.instructions+=1;NFSU2_TR(0x64b595);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64b598:L64b598:{c.instructions+=3;NFSU2_TR(0x64b598);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+28),(U+0),4);
}
B64b59a:{NFSU2_TR(0x64b59a);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B64b59c:{NFSU2_TR(0x64b59c);
if(r1(R+518)){{goto L64b5ba;}}
}
B64b59e:L64b59e:{c.instructions+=12;NFSU2_TR(0x64b59e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B64b5a1:{NFSU2_TR(0x64b5a1);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B64b5a3:{NFSU2_TR(0x64b5a3);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64b5a6:{NFSU2_TR(0x64b5a6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+28),(U+0),4);
}
B64b5a8:{NFSU2_TR(0x64b5a8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+12),(U+0),1);
}
B64b5ab:{NFSU2_TR(0x64b5ab);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+12),4);
s4(u32(r4(U+4)),r4(U+8));
}
B64b5ae:{NFSU2_TR(0x64b5ae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+28),(U+0),4);
}
B64b5b0:{NFSU2_TR(0x64b5b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B64b5b3:{NFSU2_TR(0x64b5b3);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B64b5b4:{NFSU2_TR(0x64b5b4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+24))<(r4(U+0))));
}
B64b5b6:{NFSU2_TR(0x64b5b6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+4)),r4(U+0));
}
B64b5b8:{NFSU2_TR(0x64b5b8);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64b598u);}goto L64b598;}}
}
B64b5ba:L64b5ba:{c.instructions+=3;NFSU2_TR(0x64b5ba);
__builtin_memmove((R+4),(R+8),4);
}
B64b5bc:{NFSU2_TR(0x64b5bc);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B64b5bf:{NFSU2_TR(0x64b5bf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))+u32(r4(R+4))));
s4(u32(r4(R+0)),r4(U+0));
}
B64b5c1:L64b5c1:{c.instructions+=3;NFSU2_TR(0x64b5c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64b5c4:{NFSU2_TR(0x64b5c4);
u8 U[10];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w1(R+512,carry<u32>(r4(U+0),u32(0x1cull)));
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w1(R+523,scarry<u32>(r4(U+0),u32(0x1cull)));
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x1cull))));
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
B64b5c7:{NFSU2_TR(0x64b5c7);
{goto L64b5d0;}
}
B64b5c9:L64b5c9:{c.instructions+=1;NFSU2_TR(0x64b5c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x80004005ull));
s4(u32(r4(U+0)),r4(U+4));
}
B64b5d0:L64b5d0:{c.instructions+=6;NFSU2_TR(0x64b5d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64b5d3:{NFSU2_TR(0x64b5d3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B64b5d4:{NFSU2_TR(0x64b5d4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B64b5d5:{NFSU2_TR(0x64b5d5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B64b5d6:{NFSU2_TR(0x64b5d6);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B64b5d7:{NFSU2_TR(0x64b5d7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B64b5da:L64b5da:{c.instructions+=11;NFSU2_TR(0x64b5da);
__builtin_memmove((R+28),(R+28),4);
}
B64b5dc:{NFSU2_TR(0x64b5dc);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64b5dd:{NFSU2_TR(0x64b5dd);
__builtin_memmove((R+20),(R+16),4);
}
B64b5df:{NFSU2_TR(0x64b5df);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64b5e2:{NFSU2_TR(0x64b5e2);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((R+0),(U+0),4);
}
B64b5e5:{NFSU2_TR(0x64b5e5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64b5e6:{NFSU2_TR(0x64b5e6);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((R+0),(U+0),4);
}
B64b5e9:{NFSU2_TR(0x64b5e9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64b5ea:{NFSU2_TR(0x64b5ea);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B64b5ed:{NFSU2_TR(0x64b5ed);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64b5ee:{NFSU2_TR(0x64b5ee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64b5f3ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64b41eu);}goto L64b41e;}
}
B64b5f3:L64b5f3:{c.instructions+=2;NFSU2_TR(0x64b5f3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B64b5f4:{NFSU2_TR(0x64b5f4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B64b5f7:L64b5f7:{c.instructions+=2;NFSU2_TR(0x64b5f7);
w4(R+0,u32(0x8876086cull));
}
B64b5fc:{NFSU2_TR(0x64b5fc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B64b5ff:L64b5ff:{c.instructions+=11;NFSU2_TR(0x64b5ff);
__builtin_memmove((R+28),(R+28),4);
}
B64b601:{NFSU2_TR(0x64b601);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64b602:{NFSU2_TR(0x64b602);
__builtin_memmove((R+20),(R+16),4);
}
B64b604:{NFSU2_TR(0x64b604);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64b607:{NFSU2_TR(0x64b607);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64b60a:{NFSU2_TR(0x64b60a);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(r4(R+0)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B64b60d:{NFSU2_TR(0x64b60d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64b60e:{NFSU2_TR(0x64b60e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B64b611:{NFSU2_TR(0x64b611);
w1(R+512,carry<u32>(r4(R+28),r4(R+4)));
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+4))));
}
B64b613:{NFSU2_TR(0x64b613);
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
B64b614:{NFSU2_TR(0x64b614);
if(r1(R+519)){{goto L64b626;}}
}
B64b616:L64b616:{c.instructions+=2;NFSU2_TR(0x64b616);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64b617:{NFSU2_TR(0x64b617);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+24),(U+0),4);
}
B64b61a:L64b61a:{c.instructions+=3;NFSU2_TR(0x64b61a);
u8 U[14];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+512,u8((r4(R+28))<(r4(U+4))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+4)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+28,u32(u32(r4(R+28))-u32(r4(U+4))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B64b61d:{NFSU2_TR(0x64b61d);
__builtin_memmove((R+4),(R+28),4);
}
B64b61f:{NFSU2_TR(0x64b61f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64b622ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B64b622:L64b622:{c.instructions+=2;NFSU2_TR(0x64b622);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+24),u32(0x1ull)));
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B64b623:{NFSU2_TR(0x64b623);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64b61au);}goto L64b61a;}}
}
B64b625:L64b625:{c.instructions+=1;NFSU2_TR(0x64b625);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B64b626:L64b626:{c.instructions+=3;NFSU2_TR(0x64b626);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B64b627:{NFSU2_TR(0x64b627);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B64b628:{NFSU2_TR(0x64b628);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B64b62b:L64b62b:{c.instructions+=6;NFSU2_TR(0x64b62b);
__builtin_memmove((R+28),(R+28),4);
}
B64b62d:{NFSU2_TR(0x64b62d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64b62e:{NFSU2_TR(0x64b62e);
__builtin_memmove((R+24),(R+4),4);
}
B64b630:{NFSU2_TR(0x64b630);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64b633:{NFSU2_TR(0x64b633);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B64b635:{NFSU2_TR(0x64b635);
if(r1(R+518)){{goto L64b658;}}
}
B64b637:L64b637:{c.instructions+=2;NFSU2_TR(0x64b637);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64b639:{NFSU2_TR(0x64b639);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64b63eull));
{goto L64b660;}
}
B64b63e:L64b63e:{c.instructions+=2;NFSU2_TR(0x64b63e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B64b642:{NFSU2_TR(0x64b642);
{goto L64b658;}
}
B64b644:L64b644:{c.instructions+=6;NFSU2_TR(0x64b644);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64b647:{NFSU2_TR(0x64b647);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64b64a:{NFSU2_TR(0x64b64a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64b64d:{NFSU2_TR(0x64b64d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B64b651:{NFSU2_TR(0x64b651);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64b653:{NFSU2_TR(0x64b653);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64b658ull));
TAIL_STATIC(0x64766eu,647);
}
B64b658:L64b658:{c.instructions+=2;NFSU2_TR(0x64b658);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x0ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B64b65c:{NFSU2_TR(0x64b65c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64b644u);}goto L64b644;}}
}
B64b65e:L64b65e:{c.instructions+=2;NFSU2_TR(0x64b65e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B64b65f:{NFSU2_TR(0x64b65f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B64b660:L64b660:{c.instructions+=7;NFSU2_TR(0x64b660);
__builtin_memmove((R+28),(R+28),4);
}
B64b662:{NFSU2_TR(0x64b662);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64b663:{NFSU2_TR(0x64b663);
__builtin_memmove((R+20),(R+16),4);
}
B64b665:{NFSU2_TR(0x64b665);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B64b669:{NFSU2_TR(0x64b669);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64b66a:{NFSU2_TR(0x64b66a);
__builtin_memmove((R+28),(R+4),4);
}
B64b66c:{NFSU2_TR(0x64b66c);
if(r1(R+518)){{goto L64b693;}}
}
B64b66e:L64b66e:{c.instructions+=7;NFSU2_TR(0x64b66e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64b66f:{NFSU2_TR(0x64b66f);
u8 U[4];
w4(U+0,u32(0x64b62bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64b674:{NFSU2_TR(0x64b674);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+24),(U+0),4);
}
B64b677:{NFSU2_TR(0x64b677);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B64b679:{NFSU2_TR(0x64b679);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64b67b:{NFSU2_TR(0x64b67b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64b67c:{NFSU2_TR(0x64b67c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64b681ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64b5ffu);}goto L64b5ff;}
}
B64b681:L64b681:{c.instructions+=2;NFSU2_TR(0x64b681);
u8 U[9];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
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
B64b685:{NFSU2_TR(0x64b685);
if(r1(R+518)){{goto L64b68e;}}
}
B64b687:L64b687:{c.instructions+=2;NFSU2_TR(0x64b687);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64b688:{NFSU2_TR(0x64b688);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64b68dull));
TAIL_STATIC(0x575630u,575);
}
B64b68d:L64b68d:{c.instructions+=1;NFSU2_TR(0x64b68d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B64b68e:L64b68e:{c.instructions+=3;NFSU2_TR(0x64b68e);
__builtin_memmove((R+0),(R+24),4);
}
B64b690:{NFSU2_TR(0x64b690);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B64b691:{NFSU2_TR(0x64b691);
{goto L64b6a9;}
}
B64b693:L64b693:{c.instructions+=2;NFSU2_TR(0x64b693);
__builtin_memmove((R+4),(R+28),4);
}
B64b695:{NFSU2_TR(0x64b695);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64b69aull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64b62bu);}goto L64b62b;}
}
B64b69a:L64b69a:{c.instructions+=2;NFSU2_TR(0x64b69a);
u8 U[9];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
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
B64b69e:{NFSU2_TR(0x64b69e);
if(r1(R+518)){{goto L64b6a7;}}
}
B64b6a0:L64b6a0:{c.instructions+=2;NFSU2_TR(0x64b6a0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64b6a1:{NFSU2_TR(0x64b6a1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64b6a6ull));
TAIL_STATIC(0x575630u,575);
}
B64b6a6:L64b6a6:{c.instructions+=1;NFSU2_TR(0x64b6a6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B64b6a7:L64b6a7:{c.instructions+=1;NFSU2_TR(0x64b6a7);
__builtin_memmove((R+0),(R+28),4);
}
B64b6a9:L64b6a9:{c.instructions+=3;NFSU2_TR(0x64b6a9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B64b6aa:{NFSU2_TR(0x64b6aa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B64b6ab:{NFSU2_TR(0x64b6ab);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B64b6ae:L64b6ae:{c.instructions+=12;NFSU2_TR(0x64b6ae);
__builtin_memmove((R+0),(R+4),4);
}
B64b6b0:{NFSU2_TR(0x64b6b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B64b6b4:{NFSU2_TR(0x64b6b4);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B64b6b6:{NFSU2_TR(0x64b6b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64b6b9:{NFSU2_TR(0x64b6b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64b6bc:{NFSU2_TR(0x64b6bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64b6bf:{NFSU2_TR(0x64b6bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64b6c2:{NFSU2_TR(0x64b6c2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B64b6c4:{NFSU2_TR(0x64b6c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64b6c7:{NFSU2_TR(0x64b6c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64b6ca:{NFSU2_TR(0x64b6ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64b6cd:{NFSU2_TR(0x64b6cd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B64b6ce:L64b6ce:{c.instructions+=11;NFSU2_TR(0x64b6ce);
__builtin_memmove((R+0),(R+4),4);
}
B64b6d0:{NFSU2_TR(0x64b6d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B64b6d4:{NFSU2_TR(0x64b6d4);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B64b6d6:{NFSU2_TR(0x64b6d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64b6d9:{NFSU2_TR(0x64b6d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64b6dc:{NFSU2_TR(0x64b6dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64b6df:{NFSU2_TR(0x64b6df);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64b6e2:{NFSU2_TR(0x64b6e2);
u8 U[4];
w4(U+0,u32(0x1ull));
s4(u32(r4(R+0)),r4(U+0));
}
B64b6e8:{NFSU2_TR(0x64b6e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64b6eb:{NFSU2_TR(0x64b6eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64b6ee:{NFSU2_TR(0x64b6ee);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B64b6ef:L64b6ef:{c.instructions+=10;NFSU2_TR(0x64b6ef);
__builtin_memmove((R+0),(R+4),4);
}
B64b6f1:{NFSU2_TR(0x64b6f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B64b6f5:{NFSU2_TR(0x64b6f5);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B64b6f7:{NFSU2_TR(0x64b6f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64b6fa:{NFSU2_TR(0x64b6fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64b6fd:{NFSU2_TR(0x64b6fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64b700:{NFSU2_TR(0x64b700);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64b703:{NFSU2_TR(0x64b703);
u8 U[4];
w4(U+0,u32(0x2ull));
s4(u32(r4(R+0)),r4(U+0));
}
B64b709:{NFSU2_TR(0x64b709);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64b70c:{NFSU2_TR(0x64b70c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B64b70d:L64b70d:{c.instructions+=5;NFSU2_TR(0x64b70d);
__builtin_memmove((R+28),(R+28),4);
}
B64b70f:{NFSU2_TR(0x64b70f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64b710:{NFSU2_TR(0x64b710);
__builtin_memmove((R+24),(R+4),4);
}
B64b712:{NFSU2_TR(0x64b712);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64b716:{NFSU2_TR(0x64b716);
if(r1(R+518)){{goto L64b73b;}}
}
B64b718:L64b718:{c.instructions+=1;NFSU2_TR(0x64b718);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64b719:L64b719:{c.instructions+=6;NFSU2_TR(0x64b719);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B64b71c:{NFSU2_TR(0x64b71c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64b71f:{NFSU2_TR(0x64b71f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64b722:{NFSU2_TR(0x64b722);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B64b726:{NFSU2_TR(0x64b726);
__builtin_memmove((R+4),(R+28),4);
}
B64b728:{NFSU2_TR(0x64b728);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64b72dull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64b70du);}goto L64b70d;}
}
B64b72d:L64b72d:{c.instructions+=2;NFSU2_TR(0x64b72d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64b72e:{NFSU2_TR(0x64b72e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64b733ull));
TAIL_STATIC(0x575630u,575);
}
B64b733:L64b733:{c.instructions+=3;NFSU2_TR(0x64b733);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64b737:{NFSU2_TR(0x64b737);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B64b738:{NFSU2_TR(0x64b738);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64b719u);}goto L64b719;}}
}
B64b73a:L64b73a:{c.instructions+=1;NFSU2_TR(0x64b73a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B64b73b:L64b73b:{c.instructions+=3;NFSU2_TR(0x64b73b);
__builtin_memmove((R+4),(R+24),4);
}
B64b73d:{NFSU2_TR(0x64b73d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B64b73e:{NFSU2_TR(0x64b73e);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64b62bu);}goto L64b62b;}
}
B64b743:L64b743:{c.instructions+=6;NFSU2_TR(0x64b743);
__builtin_memmove((R+28),(R+28),4);
}
B64b745:{NFSU2_TR(0x64b745);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64b746:{NFSU2_TR(0x64b746);
__builtin_memmove((R+20),(R+16),4);
}
B64b748:{NFSU2_TR(0x64b748);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64b749:{NFSU2_TR(0x64b749);
__builtin_memmove((R+24),(R+4),4);
}
B64b74b:{NFSU2_TR(0x64b74b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64b750ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64b70du);}goto L64b70d;}
}
B64b750:L64b750:{c.instructions+=2;NFSU2_TR(0x64b750);
u8 U[9];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
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
B64b754:{NFSU2_TR(0x64b754);
if(r1(R+518)){{goto L64b75d;}}
}
B64b756:L64b756:{c.instructions+=2;NFSU2_TR(0x64b756);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64b757:{NFSU2_TR(0x64b757);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64b75cull));
TAIL_STATIC(0x575630u,575);
}
B64b75c:L64b75c:{c.instructions+=1;NFSU2_TR(0x64b75c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B64b75d:L64b75d:{c.instructions+=4;NFSU2_TR(0x64b75d);
__builtin_memmove((R+0),(R+24),4);
}
B64b75f:{NFSU2_TR(0x64b75f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B64b760:{NFSU2_TR(0x64b760);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B64b761:{NFSU2_TR(0x64b761);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B64b764:L64b764:{c.instructions+=12;NFSU2_TR(0x64b764);
__builtin_memmove((R+0),(R+4),4);
}
B64b766:{NFSU2_TR(0x64b766);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B64b76a:{NFSU2_TR(0x64b76a);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B64b76c:{NFSU2_TR(0x64b76c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64b76f:{NFSU2_TR(0x64b76f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64b772:{NFSU2_TR(0x64b772);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64b775:{NFSU2_TR(0x64b775);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64b778:{NFSU2_TR(0x64b778);
u8 U[4];
w4(U+0,u32(0x3ull));
s4(u32(r4(R+0)),r4(U+0));
}
B64b77e:{NFSU2_TR(0x64b77e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64b781:{NFSU2_TR(0x64b781);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64b784:{NFSU2_TR(0x64b784);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64b787:{NFSU2_TR(0x64b787);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B64b788:L64b788:{c.instructions+=7;NFSU2_TR(0x64b788);
__builtin_memmove((R+28),(R+28),4);
}
B64b78a:{NFSU2_TR(0x64b78a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64b78b:{NFSU2_TR(0x64b78b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64b78c:{NFSU2_TR(0x64b78c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64b78d:{NFSU2_TR(0x64b78d);
__builtin_memmove((R+24),(R+4),4);
}
B64b78f:{NFSU2_TR(0x64b78f);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B64b791:{NFSU2_TR(0x64b791);
{goto L64b7ad;}
}
B64b793:L64b793:{c.instructions+=6;NFSU2_TR(0x64b793);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B64b796:{NFSU2_TR(0x64b796);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64b799:{NFSU2_TR(0x64b799);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64b79c:{NFSU2_TR(0x64b79c);
__builtin_memmove((R+4),(R+28),4);
}
B64b79e:{NFSU2_TR(0x64b79e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64b7a1:{NFSU2_TR(0x64b7a1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64b7a6ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64b788u);}goto L64b788;}
}
B64b7a6:L64b7a6:{c.instructions+=2;NFSU2_TR(0x64b7a6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64b7a7:{NFSU2_TR(0x64b7a7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64b7acull));
TAIL_STATIC(0x575630u,575);
}
B64b7ac:L64b7ac:{c.instructions+=1;NFSU2_TR(0x64b7ac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B64b7ad:L64b7ad:{c.instructions+=2;NFSU2_TR(0x64b7ad);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64b7b0:{NFSU2_TR(0x64b7b0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64b793u);}goto L64b793;}}
}
B64b7b2:L64b7b2:{c.instructions+=1;NFSU2_TR(0x64b7b2);
{goto L64b7ce;}
}
B64b7b4:L64b7b4:{c.instructions+=6;NFSU2_TR(0x64b7b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B64b7b7:{NFSU2_TR(0x64b7b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64b7ba:{NFSU2_TR(0x64b7ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64b7bd:{NFSU2_TR(0x64b7bd);
__builtin_memmove((R+4),(R+28),4);
}
B64b7bf:{NFSU2_TR(0x64b7bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64b7c2:{NFSU2_TR(0x64b7c2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64b7c7ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64b788u);}goto L64b788;}
}
B64b7c7:L64b7c7:{c.instructions+=2;NFSU2_TR(0x64b7c7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64b7c8:{NFSU2_TR(0x64b7c8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64b7cdull));
TAIL_STATIC(0x575630u,575);
}
B64b7cd:L64b7cd:{c.instructions+=1;NFSU2_TR(0x64b7cd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B64b7ce:L64b7ce:{c.instructions+=2;NFSU2_TR(0x64b7ce);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64b7d1:{NFSU2_TR(0x64b7d1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64b7b4u);}goto L64b7b4;}}
}
B64b7d3:L64b7d3:{c.instructions+=5;NFSU2_TR(0x64b7d3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B64b7d4:{NFSU2_TR(0x64b7d4);
__builtin_memmove((R+4),(R+24),4);
}
B64b7d6:{NFSU2_TR(0x64b7d6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B64b7d7:{NFSU2_TR(0x64b7d7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B64b7d8:{NFSU2_TR(0x64b7d8);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64b62bu);}goto L64b62b;}
}
B64b7dd:L64b7dd:{c.instructions+=10;NFSU2_TR(0x64b7dd);
__builtin_memmove((R+28),(R+28),4);
}
B64b7df:{NFSU2_TR(0x64b7df);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64b7e0:{NFSU2_TR(0x64b7e0);
__builtin_memmove((R+20),(R+16),4);
}
B64b7e2:{NFSU2_TR(0x64b7e2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64b7e3:{NFSU2_TR(0x64b7e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64b7e6:{NFSU2_TR(0x64b7e6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64b7e7:{NFSU2_TR(0x64b7e7);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64b7ea:{NFSU2_TR(0x64b7ea);
__builtin_memmove((R+4),(R+24),4);
}
B64b7ec:{NFSU2_TR(0x64b7ec);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B64b7ee:{NFSU2_TR(0x64b7ee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64b7f3ull));
TAIL_STATIC(0x6496e6u,649);
}
B64b7f3:L64b7f3:{c.instructions+=2;NFSU2_TR(0x64b7f3);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B64b7f5:{NFSU2_TR(0x64b7f5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64b7fe;}}
}
B64b7f7:L64b7f7:{c.instructions+=2;NFSU2_TR(0x64b7f7);
w4(R+28,u32(0x8876086cull));
}
B64b7fc:{NFSU2_TR(0x64b7fc);
{goto L64b875;}
}
B64b7fe:L64b7fe:{c.instructions+=4;NFSU2_TR(0x64b7fe);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64b801:{NFSU2_TR(0x64b801);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64b804:{NFSU2_TR(0x64b804);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64b807:{NFSU2_TR(0x64b807);
if(r1(R+518)){{goto L64b840;}}
}
B64b809:L64b809:{c.instructions+=2;NFSU2_TR(0x64b809);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+8,u32(u32(r4(U+4))&u32(u32(0x8ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B64b810:{NFSU2_TR(0x64b810);
if(r1(R+518)){{goto L64b823;}}
}
B64b812:L64b812:{c.instructions+=5;NFSU2_TR(0x64b812);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64b815:{NFSU2_TR(0x64b815);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64b818:{NFSU2_TR(0x64b818);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x33cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B64b81e:{NFSU2_TR(0x64b81e);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B64b820:{NFSU2_TR(0x64b820);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0xfffffffeull))));
s4(u32(r4(R+4)),r4(U+0));
}
B64b823:L64b823:{c.instructions+=9;NFSU2_TR(0x64b823);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64b826:{NFSU2_TR(0x64b826);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64b829:{NFSU2_TR(0x64b829);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))|u32(u8(0x80ull))));
s1(u32(r4(U+0)),r1(U+4));
}
B64b82d:{NFSU2_TR(0x64b82d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64b830:{NFSU2_TR(0x64b830);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64b833:{NFSU2_TR(0x64b833);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x33cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64b839:{NFSU2_TR(0x64b839);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B64b83b:{NFSU2_TR(0x64b83b);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))|u32(u32(0x2ull))));
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
B64b83e:{NFSU2_TR(0x64b83e);
{goto L64b875;}
}
B64b840:L64b840:{c.instructions+=2;NFSU2_TR(0x64b840);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+8,u32(u32(r4(U+4))&u32(u32(0x8ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B64b847:{NFSU2_TR(0x64b847);
if(r1(R+518)){{goto L64b85a;}}
}
B64b849:L64b849:{c.instructions+=5;NFSU2_TR(0x64b849);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64b84c:{NFSU2_TR(0x64b84c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64b84f:{NFSU2_TR(0x64b84f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x33cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B64b855:{NFSU2_TR(0x64b855);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B64b857:{NFSU2_TR(0x64b857);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
w4(U+0,u32(u32(r4(U+0))|u32(u32(0x1ull))));
s4(u32(r4(R+4)),r4(U+0));
}
B64b85a:L64b85a:{c.instructions+=8;NFSU2_TR(0x64b85a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64b85d:{NFSU2_TR(0x64b85d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64b860:{NFSU2_TR(0x64b860);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+4,u8(u32(r1(U+4))&u32(u8(0x7full))));
s1(u32(r4(U+0)),r1(U+4));
}
B64b864:{NFSU2_TR(0x64b864);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64b867:{NFSU2_TR(0x64b867);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64b86a:{NFSU2_TR(0x64b86a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x33cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64b870:{NFSU2_TR(0x64b870);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B64b872:{NFSU2_TR(0x64b872);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0xfffffffdull))));
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
B64b875:L64b875:{c.instructions+=5;NFSU2_TR(0x64b875);
__builtin_memmove((R+0),(R+28),4);
}
B64b877:{NFSU2_TR(0x64b877);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B64b878:{NFSU2_TR(0x64b878);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B64b879:{NFSU2_TR(0x64b879);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B64b87a:{NFSU2_TR(0x64b87a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B64b87d:L64b87d:{c.instructions+=9;NFSU2_TR(0x64b87d);
__builtin_memmove((R+28),(R+28),4);
}
B64b87f:{NFSU2_TR(0x64b87f);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64b880:{NFSU2_TR(0x64b880);
__builtin_memmove((R+20),(R+16),4);
}
B64b882:{NFSU2_TR(0x64b882);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64b883:{NFSU2_TR(0x64b883);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64b886:{NFSU2_TR(0x64b886);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64b887:{NFSU2_TR(0x64b887);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B64b889:{NFSU2_TR(0x64b889);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B64b88b:{NFSU2_TR(0x64b88b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64b894;}}
}
B64b88d:L64b88d:{c.instructions+=2;NFSU2_TR(0x64b88d);
w4(R+28,u32(0x80004005ull));
}
B64b892:{NFSU2_TR(0x64b892);
{goto L64b8b4;}
}
B64b894:L64b894:{c.instructions+=3;NFSU2_TR(0x64b894);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64b897:{NFSU2_TR(0x64b897);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64b89a:{NFSU2_TR(0x64b89a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64b89full));
TAIL_STATIC(0x6496e6u,649);
}
B64b89f:L64b89f:{c.instructions+=2;NFSU2_TR(0x64b89f);
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
B64b8a1:{NFSU2_TR(0x64b8a1);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64b88du);}goto L64b88d;}}
}
B64b8a3:L64b8a3:{c.instructions+=6;NFSU2_TR(0x64b8a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64b8a6:{NFSU2_TR(0x64b8a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64b8a9:{NFSU2_TR(0x64b8a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64b8ac:{NFSU2_TR(0x64b8ac);
u8 U[4];
w4(U+0,u32(u32(u32(0x7ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B64b8af:{NFSU2_TR(0x64b8af);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B64b8b2:{NFSU2_TR(0x64b8b2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B64b8b4:L64b8b4:{c.instructions+=5;NFSU2_TR(0x64b8b4);
__builtin_memmove((R+0),(R+28),4);
}
B64b8b6:{NFSU2_TR(0x64b8b6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B64b8b7:{NFSU2_TR(0x64b8b7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B64b8b8:{NFSU2_TR(0x64b8b8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B64b8b9:{NFSU2_TR(0x64b8b9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B64b8bc:L64b8bc:{c.instructions+=19;NFSU2_TR(0x64b8bc);
__builtin_memmove((R+28),(R+28),4);
}
B64b8be:{NFSU2_TR(0x64b8be);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64b8bf:{NFSU2_TR(0x64b8bf);
__builtin_memmove((R+20),(R+16),4);
}
B64b8c1:{NFSU2_TR(0x64b8c1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64b8c2:{NFSU2_TR(0x64b8c2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64b8c3:{NFSU2_TR(0x64b8c3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64b8c4:{NFSU2_TR(0x64b8c4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64b8c5:{NFSU2_TR(0x64b8c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64b8c8:{NFSU2_TR(0x64b8c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64b8cb:{NFSU2_TR(0x64b8cb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64b8cc:{NFSU2_TR(0x64b8cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64b8cf:{NFSU2_TR(0x64b8cf);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B64b8d2:{NFSU2_TR(0x64b8d2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64b8d3:{NFSU2_TR(0x64b8d3);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+0),(U+0),4);
}
B64b8d6:{NFSU2_TR(0x64b8d6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64b8d7:{NFSU2_TR(0x64b8d7);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64b8da:{NFSU2_TR(0x64b8da);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B64b8dc:{NFSU2_TR(0x64b8dc);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B64b8de:{NFSU2_TR(0x64b8de);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64b8e3ull));
TAIL_STATIC(0x647d81u,647);
}
B64b8e3:L64b8e3:{c.instructions+=4;NFSU2_TR(0x64b8e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64b8e6:{NFSU2_TR(0x64b8e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64b8e9:{NFSU2_TR(0x64b8e9);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64b8ec:{NFSU2_TR(0x64b8ec);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64b9aa;}}
}
B64b8f2:L64b8f2:{c.instructions+=2;NFSU2_TR(0x64b8f2);
u8 U[4];
w4(U+0,u32(0x50ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64b8f4:{NFSU2_TR(0x64b8f4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64b8f9ull));
TAIL_STATIC(0x645362u,645);
}
B64b8f9:L64b8f9:{c.instructions+=2;NFSU2_TR(0x64b8f9);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64b8fb:{NFSU2_TR(0x64b8fb);
if(r1(R+518)){{goto L64b906;}}
}
B64b8fd:L64b8fd:{c.instructions+=2;NFSU2_TR(0x64b8fd);
__builtin_memmove((R+4),(R+0),4);
}
B64b8ff:{NFSU2_TR(0x64b8ff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64b904ull));
TAIL_STATIC(0x672d42u,672);
}
B64b904:L64b904:{c.instructions+=1;NFSU2_TR(0x64b904);
__builtin_memmove((R+12),(R+0),4);
}
B64b906:L64b906:{c.instructions+=2;NFSU2_TR(0x64b906);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B64b908:{NFSU2_TR(0x64b908);
if(r1(R+518)){{goto L64b9ba;}}
}
B64b90e:L64b90e:{c.instructions+=4;NFSU2_TR(0x64b90e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64b911:{NFSU2_TR(0x64b911);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64b914:{NFSU2_TR(0x64b914);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B64b916:{NFSU2_TR(0x64b916);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64b919ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B64b919:L64b919:{c.instructions+=3;NFSU2_TR(0x64b919);
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
B64b91b:{NFSU2_TR(0x64b91b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64b91e:{NFSU2_TR(0x64b91e);
if(r1(R+518)){{goto L64b9ba;}}
}
B64b924:L64b924:{c.instructions+=4;NFSU2_TR(0x64b924);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64b927:{NFSU2_TR(0x64b927);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64b929:{NFSU2_TR(0x64b929);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x30ull))));
__builtin_memmove((R+28),(U+0),4);
}
B64b92c:{NFSU2_TR(0x64b92c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B64b92d:L64b92d:{c.instructions+=1;NFSU2_TR(0x64b92d);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L64b92f;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64b92du);}goto L64b92d;}
}
B64b92f:L64b92f:{c.instructions+=3;NFSU2_TR(0x64b92f);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B64b931:{NFSU2_TR(0x64b931);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64b934:{NFSU2_TR(0x64b934);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L64b97e;}}
}
B64b936:L64b936:{c.instructions+=2;NFSU2_TR(0x64b936);
u8 U[4];
w4(U+0,u32(0x14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64b938:{NFSU2_TR(0x64b938);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64b93dull));
TAIL_STATIC(0x645362u,645);
}
B64b93d:L64b93d:{c.instructions+=2;NFSU2_TR(0x64b93d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B64b93f:{NFSU2_TR(0x64b93f);
if(r1(R+518)){{goto L64b94c;}}
}
B64b941:L64b941:{c.instructions+=2;NFSU2_TR(0x64b941);
__builtin_memmove((R+4),(R+0),4);
}
B64b943:{NFSU2_TR(0x64b943);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64b948ull));
TAIL_STATIC(0x672482u,672);
}
B64b948:L64b948:{c.instructions+=2;NFSU2_TR(0x64b948);
__builtin_memmove((R+24),(R+0),4);
}
B64b94a:{NFSU2_TR(0x64b94a);
{goto L64b94e;}
}
B64b94c:L64b94c:{c.instructions+=1;NFSU2_TR(0x64b94c);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B64b94e:L64b94e:{c.instructions+=2;NFSU2_TR(0x64b94e);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B64b950:{NFSU2_TR(0x64b950);
if(r1(R+518)){{goto L64b9ba;}}
}
B64b952:L64b952:{c.instructions+=2;NFSU2_TR(0x64b952);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64b954:{NFSU2_TR(0x64b954);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64b959ull));
TAIL_STATIC(0x645362u,645);
}
B64b959:L64b959:{c.instructions+=2;NFSU2_TR(0x64b959);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B64b95b:{NFSU2_TR(0x64b95b);
if(r1(R+518)){{goto L64b966;}}
}
B64b95d:L64b95d:{c.instructions+=2;NFSU2_TR(0x64b95d);
__builtin_memmove((R+4),(R+0),4);
}
B64b95f:{NFSU2_TR(0x64b95f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64b964ull));
TAIL_STATIC(0x672e49u,672);
}
B64b964:L64b964:{c.instructions+=1;NFSU2_TR(0x64b964);
{goto L64b968;}
}
B64b966:L64b966:{c.instructions+=1;NFSU2_TR(0x64b966);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B64b968:L64b968:{c.instructions+=2;NFSU2_TR(0x64b968);
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
B64b96a:{NFSU2_TR(0x64b96a);
if(r1(R+518)){{goto L64b9ba;}}
}
B64b96c:L64b96c:{c.instructions+=7;NFSU2_TR(0x64b96c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64b96f:{NFSU2_TR(0x64b96f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64b972:{NFSU2_TR(0x64b972);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B64b973:{NFSU2_TR(0x64b973);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B64b976:{NFSU2_TR(0x64b976);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64b979:{NFSU2_TR(0x64b979);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64b97c:{NFSU2_TR(0x64b97c);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64b936u);}goto L64b936;}}
}
B64b97e:L64b97e:{c.instructions+=12;NFSU2_TR(0x64b97e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64b981:{NFSU2_TR(0x64b981);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64b984:{NFSU2_TR(0x64b984);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64b987:{NFSU2_TR(0x64b987);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((R+0),(U+0),4);
}
B64b98a:{NFSU2_TR(0x64b98a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64b98b:{NFSU2_TR(0x64b98b);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((R+0),(U+0),4);
}
B64b98e:{NFSU2_TR(0x64b98e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64b98f:{NFSU2_TR(0x64b98f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64b992:{NFSU2_TR(0x64b992);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64b995:{NFSU2_TR(0x64b995);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B64b998:{NFSU2_TR(0x64b998);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64b999:{NFSU2_TR(0x64b999);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64b99eull));
TAIL_STATIC(0x647ebau,647);
}
B64b99e:L64b99e:{c.instructions+=3;NFSU2_TR(0x64b99e);
__builtin_memmove((R+28),(R+0),4);
}
B64b9a0:{NFSU2_TR(0x64b9a0);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B64b9a2:{NFSU2_TR(0x64b9a2);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L64b9fe;}}
}
B64b9a4:L64b9a4:{c.instructions+=2;NFSU2_TR(0x64b9a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64b9a7:{NFSU2_TR(0x64b9a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64b9aa:L64b9aa:{c.instructions+=4;NFSU2_TR(0x64b9aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64b9ad:{NFSU2_TR(0x64b9ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64b9b0:{NFSU2_TR(0x64b9b0);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0xdull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0xdull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0xdull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B64b9b4:{NFSU2_TR(0x64b9b4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64b9f9;}}
}
B64b9b6:L64b9b6:{c.instructions+=2;NFSU2_TR(0x64b9b6);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B64b9b8:{NFSU2_TR(0x64b9b8);
{goto L64b9dd;}
}
B64b9ba:L64b9ba:{c.instructions+=2;NFSU2_TR(0x64b9ba);
w4(R+28,u32(0x8007000eull));
}
B64b9bf:{NFSU2_TR(0x64b9bf);
{goto L64b9fe;}
}
B64b9c1:L64b9c1:{c.instructions+=3;NFSU2_TR(0x64b9c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64b9c4:{NFSU2_TR(0x64b9c4);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64b9c6:{NFSU2_TR(0x64b9c6);
if(r1(R+518)){{goto L64b9e2;}}
}
B64b9c8:L64b9c8:{c.instructions+=2;NFSU2_TR(0x64b9c8);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64b9cc:{NFSU2_TR(0x64b9cc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64b9e2;}}
}
B64b9ce:L64b9ce:{c.instructions+=3;NFSU2_TR(0x64b9ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64b9d1:{NFSU2_TR(0x64b9d1);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64b9d3:{NFSU2_TR(0x64b9d3);
if(r1(R+518)){{goto L64b9e2;}}
}
B64b9d5:L64b9d5:{c.instructions+=2;NFSU2_TR(0x64b9d5);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xdull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64b9d9:{NFSU2_TR(0x64b9d9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64b9e2;}}
}
B64b9db:L64b9db:{c.instructions+=1;NFSU2_TR(0x64b9db);
__builtin_memmove((R+0),(R+4),4);
}
B64b9dd:L64b9dd:{c.instructions+=2;NFSU2_TR(0x64b9dd);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64b9e0:{NFSU2_TR(0x64b9e0);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64b9c1u);}goto L64b9c1;}}
}
B64b9e2:L64b9e2:{c.instructions+=2;NFSU2_TR(0x64b9e2);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+8))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+8)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B64b9e5:{NFSU2_TR(0x64b9e5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64b9f9;}}
}
B64b9e7:L64b9e7:{c.instructions+=3;NFSU2_TR(0x64b9e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64b9ea:{NFSU2_TR(0x64b9ea);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B64b9ec:{NFSU2_TR(0x64b9ec);
if(r1(R+518)){{goto L64b9f9;}}
}
B64b9ee:L64b9ee:{c.instructions+=2;NFSU2_TR(0x64b9ee);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
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
B64b9f2:{NFSU2_TR(0x64b9f2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64b9f9;}}
}
B64b9f4:L64b9f4:{c.instructions+=2;NFSU2_TR(0x64b9f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64b9f7:{NFSU2_TR(0x64b9f7);
{goto L64b9fe;}
}
B64b9f9:L64b9f9:{c.instructions+=1;NFSU2_TR(0x64b9f9);
w4(R+28,u32(0x80004005ull));
}
B64b9fe:L64b9fe:{c.instructions+=6;NFSU2_TR(0x64b9fe);
__builtin_memmove((R+0),(R+28),4);
}
B64ba00:{NFSU2_TR(0x64ba00);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B64ba01:{NFSU2_TR(0x64ba01);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B64ba02:{NFSU2_TR(0x64ba02);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B64ba03:{NFSU2_TR(0x64ba03);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B64ba04:{NFSU2_TR(0x64ba04);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B64ba07:L64ba07:{c.instructions+=9;NFSU2_TR(0x64ba07);
__builtin_memmove((R+28),(R+28),4);
}
B64ba09:{NFSU2_TR(0x64ba09);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64ba0a:{NFSU2_TR(0x64ba0a);
__builtin_memmove((R+20),(R+16),4);
}
B64ba0c:{NFSU2_TR(0x64ba0c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64ba0d:{NFSU2_TR(0x64ba0d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64ba0e:{NFSU2_TR(0x64ba0e);
u8 U[4];
w4(U+0,u32(0x2cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64ba10:{NFSU2_TR(0x64ba10);
__builtin_memmove((R+24),(R+4),4);
}
B64ba12:{NFSU2_TR(0x64ba12);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B64ba14:{NFSU2_TR(0x64ba14);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64ba19ull));
TAIL_STATIC(0x575620u,575);
}
B64ba19:L64ba19:{c.instructions+=3;NFSU2_TR(0x64ba19);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B64ba1b:{NFSU2_TR(0x64ba1b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B64ba1c:{NFSU2_TR(0x64ba1c);
if(r1(R+518)){{goto L64ba27;}}
}
B64ba1e:L64ba1e:{c.instructions+=2;NFSU2_TR(0x64ba1e);
__builtin_memmove((R+4),(R+0),4);
}
B64ba20:{NFSU2_TR(0x64ba20);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64ba25ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64b6efu);}goto L64b6ef;}
}
B64ba25:L64ba25:{c.instructions+=1;NFSU2_TR(0x64ba25);
{goto L64ba29;}
}
B64ba27:L64ba27:{c.instructions+=1;NFSU2_TR(0x64ba27);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B64ba29:L64ba29:{c.instructions+=2;NFSU2_TR(0x64ba29);
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
B64ba2b:{NFSU2_TR(0x64ba2b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64ba34;}}
}
B64ba2d:L64ba2d:{c.instructions+=2;NFSU2_TR(0x64ba2d);
w4(R+28,u32(0x8007000eull));
}
B64ba32:{NFSU2_TR(0x64ba32);
{goto L64ba8a;}
}
B64ba34:L64ba34:{c.instructions+=4;NFSU2_TR(0x64ba34);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B64ba37:{NFSU2_TR(0x64ba37);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64ba3a:{NFSU2_TR(0x64ba3a);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B64ba3c:{NFSU2_TR(0x64ba3c);
if(r1(R+518)){{goto L64ba7c;}}
}
B64ba3e:L64ba3e:{c.instructions+=2;NFSU2_TR(0x64ba3e);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xaull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64ba42:{NFSU2_TR(0x64ba42);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64ba7c;}}
}
B64ba44:L64ba44:{c.instructions+=3;NFSU2_TR(0x64ba44);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64ba47:{NFSU2_TR(0x64ba47);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B64ba49:{NFSU2_TR(0x64ba49);
if(r1(R+518)){{goto L64ba7c;}}
}
B64ba4b:L64ba4b:{c.instructions+=2;NFSU2_TR(0x64ba4b);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64ba4f:{NFSU2_TR(0x64ba4f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64ba7c;}}
}
B64ba51:L64ba51:{c.instructions+=2;NFSU2_TR(0x64ba51);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x9ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64ba55:{NFSU2_TR(0x64ba55);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64ba7c;}}
}
B64ba57:L64ba57:{c.instructions+=3;NFSU2_TR(0x64ba57);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64ba5a:{NFSU2_TR(0x64ba5a);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B64ba5c:{NFSU2_TR(0x64ba5c);
if(r1(R+518)){{goto L64ba7c;}}
}
B64ba5e:L64ba5e:{c.instructions+=9;NFSU2_TR(0x64ba5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64ba61:{NFSU2_TR(0x64ba61);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64ba64:{NFSU2_TR(0x64ba64);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64ba67:{NFSU2_TR(0x64ba67);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x350ull))));
__builtin_memmove((R+4),(U+0),4);
}
B64ba6d:{NFSU2_TR(0x64ba6d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B64ba6f:{NFSU2_TR(0x64ba6f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64ba72:{NFSU2_TR(0x64ba72);
u8 U[14];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x32cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,scarry<u32>(r4(U+4),u32(0x1ull)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
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
B64ba78:{NFSU2_TR(0x64ba78);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B64ba7a:{NFSU2_TR(0x64ba7a);
{goto L64ba8a;}
}
B64ba7c:L64ba7c:{c.instructions+=4;NFSU2_TR(0x64ba7c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64ba7e:{NFSU2_TR(0x64ba7e);
__builtin_memmove((R+4),(R+0),4);
}
B64ba80:{NFSU2_TR(0x64ba80);
w4(R+28,u32(0x80004005ull));
}
B64ba85:{NFSU2_TR(0x64ba85);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64ba8aull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64b743u);}goto L64b743;}
}
B64ba8a:L64ba8a:{c.instructions+=5;NFSU2_TR(0x64ba8a);
__builtin_memmove((R+0),(R+28),4);
}
B64ba8c:{NFSU2_TR(0x64ba8c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B64ba8d:{NFSU2_TR(0x64ba8d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B64ba8e:{NFSU2_TR(0x64ba8e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B64ba8f:{NFSU2_TR(0x64ba8f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B64ba92:L64ba92:{c.instructions+=11;NFSU2_TR(0x64ba92);
__builtin_memmove((R+28),(R+28),4);
}
B64ba94:{NFSU2_TR(0x64ba94);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64ba95:{NFSU2_TR(0x64ba95);
__builtin_memmove((R+20),(R+16),4);
}
B64ba97:{NFSU2_TR(0x64ba97);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x28ull))));
}
B64ba9a:{NFSU2_TR(0x64ba9a);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64ba9e:{NFSU2_TR(0x64ba9e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64ba9f:{NFSU2_TR(0x64ba9f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64baa0:{NFSU2_TR(0x64baa0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64baa1:{NFSU2_TR(0x64baa1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64baa4:{NFSU2_TR(0x64baa4);
w4(R+28,u32(0x7ac348ull));
}
B64baa9:{NFSU2_TR(0x64baa9);
if(r1(R+518)){{goto L64bab0;}}
}
B64baab:L64baab:{c.instructions+=1;NFSU2_TR(0x64baab);
w4(R+28,u32(0x7ad760ull));
}
B64bab0:L64bab0:{c.instructions+=7;NFSU2_TR(0x64bab0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64bab3:{NFSU2_TR(0x64bab3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B64bab6:{NFSU2_TR(0x64bab6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B64baba:{NFSU2_TR(0x64baba);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+10),u32(0x0ull)));
w4(U+14,u32(u32(r4(U+10))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B64babd:{NFSU2_TR(0x64babd);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64bac0:{NFSU2_TR(0x64bac0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64bac3:{NFSU2_TR(0x64bac3);
if(r1(R+518)){{goto L64baec;}}
}
B64bac5:L64bac5:{c.instructions+=2;NFSU2_TR(0x64bac5);
__builtin_memmove((R+0),(R+28),4);
}
B64bac7:{NFSU2_TR(0x64bac7);
__builtin_memmove((R+12),(R+28),4);
}
B64bac9:L64bac9:{c.instructions+=3;NFSU2_TR(0x64bac9);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64bacc:{NFSU2_TR(0x64bacc);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B64bace:{NFSU2_TR(0x64bace);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64bad3ull));
TAIL_STATIC(0x75dd6fu,75d);
}
B64bad3:L64bad3:{c.instructions+=4;NFSU2_TR(0x64bad3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B64bad5:{NFSU2_TR(0x64bad5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B64bad6:{NFSU2_TR(0x64bad6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B64bad7:{NFSU2_TR(0x64bad7);
if(r1(R+518)){{goto L64bae6;}}
}
B64bad9:L64bad9:{c.instructions+=5;NFSU2_TR(0x64bad9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B64badc:{NFSU2_TR(0x64badc);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1cull))));
}
B64badf:{NFSU2_TR(0x64badf);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+10),u32(0x0ull)));
w4(U+14,u32(u32(r4(U+10))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B64bae2:{NFSU2_TR(0x64bae2);
__builtin_memmove((R+0),(R+12),4);
}
B64bae4:{NFSU2_TR(0x64bae4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64bac9u);}goto L64bac9;}}
}
B64bae6:L64bae6:{c.instructions+=2;NFSU2_TR(0x64bae6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64bae9:{NFSU2_TR(0x64bae9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B64baec:L64baec:{c.instructions+=6;NFSU2_TR(0x64baec);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64baef:{NFSU2_TR(0x64baef);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x1cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B64baf2:{NFSU2_TR(0x64baf2);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
}
B64baf4:{NFSU2_TR(0x64baf4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+12),(U+0),4);
}
B64baf6:{NFSU2_TR(0x64baf6);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B64baf8:{NFSU2_TR(0x64baf8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64bb19;}}
}
B64bafa:L64bafa:{c.instructions+=2;NFSU2_TR(0x64bafa);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64bafd:{NFSU2_TR(0x64bafd);
u8 U[4];
w4(U+0,u32(0x7af790ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64bb02:L64bb02:{c.instructions+=6;NFSU2_TR(0x64bb02);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64bb04:{NFSU2_TR(0x64bb04);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
}
B64bb07:{NFSU2_TR(0x64bb07);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x28ull))));
}
B64bb0a:{NFSU2_TR(0x64bb0a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64bb0b:{NFSU2_TR(0x64bb0b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64bb0c:{NFSU2_TR(0x64bb0c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64bb11ull));
TAIL_STATIC(0x64307cu,643);
}
B64bb11:L64bb11:{c.instructions+=2;NFSU2_TR(0x64bb11);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x14ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x14ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B64bb14:{NFSU2_TR(0x64bb14);
{goto L64bd9a;}
}
B64bb19:L64bb19:{c.instructions+=4;NFSU2_TR(0x64bb19);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B64bb1c:{NFSU2_TR(0x64bb1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B64bb20:{NFSU2_TR(0x64bb20);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B64bb22:{NFSU2_TR(0x64bb22);
if(r1(R+518)){{goto L64bb61;}}
}
B64bb24:L64bb24:{c.instructions+=3;NFSU2_TR(0x64bb24);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64bb27:{NFSU2_TR(0x64bb27);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64bb2a:{NFSU2_TR(0x64bb2a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64bb34;}}
}
B64bb2c:L64bb2c:{c.instructions+=3;NFSU2_TR(0x64bb2c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64bb2d:{NFSU2_TR(0x64bb2d);
u8 U[4];
w4(U+0,u32(0x7af760ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64bb32:{NFSU2_TR(0x64bb32);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64bb02u);}goto L64bb02;}
}
B64bb34:L64bb34:{c.instructions+=4;NFSU2_TR(0x64bb34);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B64bb36:{NFSU2_TR(0x64bb36);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B64bb39:{NFSU2_TR(0x64bb39);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64bb3c:{NFSU2_TR(0x64bb3c);
if(r1(R+518)){{goto L64bb72;}}
}
B64bb3e:L64bb3e:{c.instructions+=2;NFSU2_TR(0x64bb3e);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64bb40:{NFSU2_TR(0x64bb40);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L64bb72;}}
}
B64bb42:L64bb42:{c.instructions+=10;NFSU2_TR(0x64bb42);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B64bb43:{NFSU2_TR(0x64bb43);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64bb44:{NFSU2_TR(0x64bb44);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64bb45:{NFSU2_TR(0x64bb45);
u8 U[4];
w4(U+0,u32(0x7af724ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64bb4a:{NFSU2_TR(0x64bb4a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64bb4c:{NFSU2_TR(0x64bb4c);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
}
B64bb4f:{NFSU2_TR(0x64bb4f);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x28ull))));
}
B64bb52:{NFSU2_TR(0x64bb52);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64bb53:{NFSU2_TR(0x64bb53);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64bb54:{NFSU2_TR(0x64bb54);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64bb59ull));
TAIL_STATIC(0x64307cu,643);
}
B64bb59:L64bb59:{c.instructions+=2;NFSU2_TR(0x64bb59);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x18ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x18ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B64bb5c:{NFSU2_TR(0x64bb5c);
{goto L64bd9a;}
}
B64bb61:L64bb61:{c.instructions+=2;NFSU2_TR(0x64bb61);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64bb65:{NFSU2_TR(0x64bb65);
if(r1(R+518)){{goto L64bb6f;}}
}
B64bb67:L64bb67:{c.instructions+=3;NFSU2_TR(0x64bb67);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64bb68:{NFSU2_TR(0x64bb68);
u8 U[4];
w4(U+0,u32(0x7af6ecull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64bb6d:{NFSU2_TR(0x64bb6d);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64bb02u);}goto L64bb02;}
}
B64bb6f:L64bb6f:{c.instructions+=1;NFSU2_TR(0x64bb6f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B64bb72:L64bb72:{c.instructions+=2;NFSU2_TR(0x64bb72);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64bb76:{NFSU2_TR(0x64bb76);
if(r1(R+518)){{goto L64bbb7;}}
}
B64bb78:L64bb78:{c.instructions+=3;NFSU2_TR(0x64bb78);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B64bb7c:{NFSU2_TR(0x64bb7c);
u8 U[14];
__builtin_memmove((U+6),gp(0x7ac348),4);
w1(R+512,u8((r4(U+6))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x0ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B64bb83:{NFSU2_TR(0x64bb83);
if(r1(R+518)){{goto L64bbaf;}}
}
B64bb85:L64bb85:{c.instructions+=2;NFSU2_TR(0x64bb85);
w4(R+28,u32(0x7ac348ull));
}
B64bb8a:{NFSU2_TR(0x64bb8a);
__builtin_memmove((R+0),(R+28),4);
}
B64bb8c:L64bb8c:{c.instructions+=3;NFSU2_TR(0x64bb8c);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64bb8f:{NFSU2_TR(0x64bb8f);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B64bb91:{NFSU2_TR(0x64bb91);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64bb96ull));
TAIL_STATIC(0x75dd6fu,75d);
}
B64bb96:L64bb96:{c.instructions+=4;NFSU2_TR(0x64bb96);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B64bb98:{NFSU2_TR(0x64bb98);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B64bb99:{NFSU2_TR(0x64bb99);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B64bb9a:{NFSU2_TR(0x64bb9a);
if(r1(R+518)){{goto L64bba9;}}
}
B64bb9c:L64bb9c:{c.instructions+=5;NFSU2_TR(0x64bb9c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B64bb9f:{NFSU2_TR(0x64bb9f);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1cull))));
}
B64bba2:{NFSU2_TR(0x64bba2);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(u32(0x0ull))));
w1(R+523,sborrow<u32>(r4(U+10),u32(0x0ull)));
w4(U+14,u32(u32(r4(U+10))-u32(u32(0x0ull))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B64bba5:{NFSU2_TR(0x64bba5);
__builtin_memmove((R+0),(R+28),4);
}
B64bba7:{NFSU2_TR(0x64bba7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64bb8cu);}goto L64bb8c;}}
}
B64bba9:L64bba9:{c.instructions+=2;NFSU2_TR(0x64bba9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64bbac:{NFSU2_TR(0x64bbac);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B64bbaf:L64bbaf:{c.instructions+=3;NFSU2_TR(0x64bbaf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64bbb2:{NFSU2_TR(0x64bbb2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64bbb5:{NFSU2_TR(0x64bbb5);
__builtin_memmove((R+28),(R+0),4);
}
B64bbb7:L64bbb7:{c.instructions+=4;NFSU2_TR(0x64bbb7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64bbba:{NFSU2_TR(0x64bbba);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x1cull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B64bbbd:{NFSU2_TR(0x64bbbd);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7ac358ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x105ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64bbc7:{NFSU2_TR(0x64bbc7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64bc21;}}
}
B64bbc9:L64bbc9:{c.instructions+=2;NFSU2_TR(0x64bbc9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(U+0))<(u32(0x10ull))));
}
B64bbcc:{NFSU2_TR(0x64bbcc);
if(r1(R+512)){{goto L64bc01;}}
}
B64bbce:L64bbce:{c.instructions+=2;NFSU2_TR(0x64bbce);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x101ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64bbd4:{NFSU2_TR(0x64bbd4);
if(r1(R+518)){{goto L64bc01;}}
}
B64bbd6:L64bbd6:{c.instructions+=2;NFSU2_TR(0x64bbd6);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x102ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64bbdc:{NFSU2_TR(0x64bbdc);
if(r1(R+518)){{goto L64bc01;}}
}
B64bbde:L64bbde:{c.instructions+=2;NFSU2_TR(0x64bbde);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x103ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64bbe4:{NFSU2_TR(0x64bbe4);
if(r1(R+518)){{goto L64bc01;}}
}
B64bbe6:L64bbe6:{c.instructions+=2;NFSU2_TR(0x64bbe6);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x104ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64bbec:{NFSU2_TR(0x64bbec);
if(r1(R+518)){{goto L64bc01;}}
}
B64bbee:L64bbee:{c.instructions+=2;NFSU2_TR(0x64bbee);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x100ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64bbf4:{NFSU2_TR(0x64bbf4);
if(r1(R+518)){{goto L64bc21;}}
}
B64bbf6:L64bbf6:{c.instructions+=3;NFSU2_TR(0x64bbf6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64bbf7:{NFSU2_TR(0x64bbf7);
u8 U[4];
w4(U+0,u32(0x7af6bcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64bbfc:{NFSU2_TR(0x64bbfc);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64bb02u);}goto L64bb02;}
}
B64bc01:L64bc01:{c.instructions+=2;NFSU2_TR(0x64bc01);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7ac35cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x300000dull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64bc0b:{NFSU2_TR(0x64bc0b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64bc21;}}
}
B64bc0d:L64bc0d:{c.instructions+=7;NFSU2_TR(0x64bc0d);
u8 U[4];
w4(U+0,u32(0x7af650ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64bc12:{NFSU2_TR(0x64bc12);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64bc14:{NFSU2_TR(0x64bc14);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
}
B64bc17:{NFSU2_TR(0x64bc17);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64bc18:{NFSU2_TR(0x64bc18);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x28ull))));
}
B64bc1b:{NFSU2_TR(0x64bc1b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64bc1c:{NFSU2_TR(0x64bc1c);
{goto L64bd92;}
}
B64bc21:L64bc21:{c.instructions+=19;NFSU2_TR(0x64bc21);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((R+28),(U+0),4);
}
B64bc24:{NFSU2_TR(0x64bc24);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7ac348ull))));
__builtin_memmove((R+24),(U+0),4);
}
B64bc2a:{NFSU2_TR(0x64bc2a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64bc2b:{NFSU2_TR(0x64bc2b);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B64bc2e:{NFSU2_TR(0x64bc2e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64bc2f:{NFSU2_TR(0x64bc2f);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+0),(U+0),4);
}
B64bc32:{NFSU2_TR(0x64bc32);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64bc33:{NFSU2_TR(0x64bc33);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B64bc36:{NFSU2_TR(0x64bc36);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64bc37:{NFSU2_TR(0x64bc37);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B64bc3a:{NFSU2_TR(0x64bc3a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64bc3b:{NFSU2_TR(0x64bc3b);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B64bc3e:{NFSU2_TR(0x64bc3e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64bc3f:{NFSU2_TR(0x64bc3f);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B64bc42:{NFSU2_TR(0x64bc42);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64bc43:{NFSU2_TR(0x64bc43);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64bc44:{NFSU2_TR(0x64bc44);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64bc47:{NFSU2_TR(0x64bc47);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64bc4a:{NFSU2_TR(0x64bc4a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64bc4full));
TAIL_STATIC(0x64921cu,649);
}
B64bc4f:L64bc4f:{c.instructions+=3;NFSU2_TR(0x64bc4f);
__builtin_memmove((R+12),(R+0),4);
}
B64bc51:{NFSU2_TR(0x64bc51);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B64bc53:{NFSU2_TR(0x64bc53);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L64bdec;}}
}
B64bc59:L64bc59:{c.instructions+=10;NFSU2_TR(0x64bc59);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64bc5a:{NFSU2_TR(0x64bc5a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64bc5d:{NFSU2_TR(0x64bc5d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64bc60:{NFSU2_TR(0x64bc60);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64bc63:{NFSU2_TR(0x64bc63);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64bc66:{NFSU2_TR(0x64bc66);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64bc69:{NFSU2_TR(0x64bc69);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64bc6a:{NFSU2_TR(0x64bc6a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64bc6d:{NFSU2_TR(0x64bc6d);
__builtin_memmove((R+4),(R+24),4);
}
B64bc6f:{NFSU2_TR(0x64bc6f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64bc74ull));
TAIL_STATIC(0x6493eau,649);
}
B64bc74:L64bc74:{c.instructions+=3;NFSU2_TR(0x64bc74);
__builtin_memmove((R+12),(R+0),4);
}
B64bc76:{NFSU2_TR(0x64bc76);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B64bc78:{NFSU2_TR(0x64bc78);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L64bdec;}}
}
B64bc7e:L64bc7e:{c.instructions+=3;NFSU2_TR(0x64bc7e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64bc81:{NFSU2_TR(0x64bc81);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xaull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xaull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B64bc84:{NFSU2_TR(0x64bc84);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L64bda1;}}
}
B64bc8a:L64bc8a:{c.instructions+=2;NFSU2_TR(0x64bc8a);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xeull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xeull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64bc8d:{NFSU2_TR(0x64bc8d);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L64bc9b;}}
}
B64bc8f:L64bc8f:{c.instructions+=2;NFSU2_TR(0x64bc8f);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xf30000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64bc95:{NFSU2_TR(0x64bc95);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64bda1;}}
}
B64bc9b:L64bc9b:{c.instructions+=4;NFSU2_TR(0x64bc9b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64bc9e:{NFSU2_TR(0x64bc9e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64bca1:{NFSU2_TR(0x64bca1);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xdull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64bca5:{NFSU2_TR(0x64bca5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64bda1;}}
}
B64bcab:L64bcab:{c.instructions+=2;NFSU2_TR(0x64bcab);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64bcaf:{NFSU2_TR(0x64bcaf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64bd86;}}
}
B64bcb5:L64bcb5:{c.instructions+=3;NFSU2_TR(0x64bcb5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64bcb8:{NFSU2_TR(0x64bcb8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B64bcba:{NFSU2_TR(0x64bcba);
if(r1(R+518)){{goto L64bd86;}}
}
B64bcc0:L64bcc0:{c.instructions+=2;NFSU2_TR(0x64bcc0);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64bcc4:{NFSU2_TR(0x64bcc4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64bd86;}}
}
B64bcca:L64bcca:{c.instructions+=3;NFSU2_TR(0x64bcca);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64bccd:{NFSU2_TR(0x64bccd);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B64bccf:{NFSU2_TR(0x64bccf);
if(r1(R+518)){{goto L64bd86;}}
}
B64bcd5:L64bcd5:{c.instructions+=2;NFSU2_TR(0x64bcd5);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xeull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64bcd9:{NFSU2_TR(0x64bcd9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64bd86;}}
}
B64bcdf:L64bcdf:{c.instructions+=2;NFSU2_TR(0x64bcdf);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64bce3:{NFSU2_TR(0x64bce3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64bd54;}}
}
B64bce5:L64bce5:{c.instructions+=2;NFSU2_TR(0x64bce5);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xf30000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64bceb:{NFSU2_TR(0x64bceb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64bda1;}}
}
B64bcf1:L64bcf1:{c.instructions+=3;NFSU2_TR(0x64bcf1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x358ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B64bcf7:{NFSU2_TR(0x64bcf7);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B64bcf9:{NFSU2_TR(0x64bcf9);
if(r1(R+518)){{goto L64bd3c;}}
}
B64bcfb:L64bcfb:{c.instructions+=2;NFSU2_TR(0x64bcfb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64bcfe:{NFSU2_TR(0x64bcfe);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64bd01:L64bd01:{c.instructions+=2;NFSU2_TR(0x64bd01);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B64bd03:{NFSU2_TR(0x64bd03);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64bd06:L64bd06:{c.instructions+=4;NFSU2_TR(0x64bd06);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+8),(U+0),1);
}
B64bd08:{NFSU2_TR(0x64bd08);
__builtin_memmove((R+4),(R+8),1);
}
B64bd0a:{NFSU2_TR(0x64bd0a);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((U+1),(U+0),1);
w1(R+512,u8((r1(R+8))<(r1(U+1))));
w1(U+2,u8(u32(r1(R+8))-u32(r1(U+1))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B64bd0c:{NFSU2_TR(0x64bd0c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64bd28;}}
}
B64bd0e:L64bd0e:{c.instructions+=2;NFSU2_TR(0x64bd0e);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B64bd10:{NFSU2_TR(0x64bd10);
if(r1(R+518)){{goto L64bd24;}}
}
B64bd12:L64bd12:{c.instructions+=4;NFSU2_TR(0x64bd12);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B64bd15:{NFSU2_TR(0x64bd15);
__builtin_memmove((R+4),(R+8),1);
}
B64bd17:{NFSU2_TR(0x64bd17);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(R+512,u8((r1(R+8))<(r1(U+5))));
w1(U+6,u8(u32(r1(R+8))-u32(r1(U+5))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B64bd1a:{NFSU2_TR(0x64bd1a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64bd28;}}
}
B64bd1c:L64bd1c:{c.instructions+=6;NFSU2_TR(0x64bd1c);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B64bd1d:{NFSU2_TR(0x64bd1d);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B64bd1e:{NFSU2_TR(0x64bd1e);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B64bd1f:{NFSU2_TR(0x64bd1f);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B64bd20:{NFSU2_TR(0x64bd20);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B64bd22:{NFSU2_TR(0x64bd22);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64bd06u);}goto L64bd06;}}
}
B64bd24:L64bd24:{c.instructions+=2;NFSU2_TR(0x64bd24);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B64bd26:{NFSU2_TR(0x64bd26);
{goto L64bd2d;}
}
B64bd28:L64bd28:{c.instructions+=2;NFSU2_TR(0x64bd28);
u8 U[9];
w4(U+0,u32(r1(R+512)));
w1(R+512,u8((r4(R+0))<(r4(R+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w1(U+8,u8((r4(U+4))<(r4(U+0))));
w1(R+512,u8((r1(R+512))||(r1(U+8))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B64bd2a:{NFSU2_TR(0x64bd2a);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(u32(0xffffffffull))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B64bd2d:L64bd2d:{c.instructions+=2;NFSU2_TR(0x64bd2d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B64bd2f:{NFSU2_TR(0x64bd2f);
if(r1(R+518)){{goto L64bd38;}}
}
B64bd31:L64bd31:{c.instructions+=3;NFSU2_TR(0x64bd31);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B64bd34:{NFSU2_TR(0x64bd34);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B64bd36:{NFSU2_TR(0x64bd36);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64bd01u);}goto L64bd01;}}
}
B64bd38:L64bd38:{c.instructions+=2;NFSU2_TR(0x64bd38);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B64bd3a:{NFSU2_TR(0x64bd3a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64bd4f;}}
}
B64bd3c:L64bd3c:{c.instructions+=7;NFSU2_TR(0x64bd3c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64bd3f:{NFSU2_TR(0x64bd3f);
u8 U[4];
w4(U+0,u32(0x7af5f0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64bd44:{NFSU2_TR(0x64bd44);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64bd46:{NFSU2_TR(0x64bd46);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64bd49:{NFSU2_TR(0x64bd49);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
}
B64bd4c:{NFSU2_TR(0x64bd4c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64bd4d:{NFSU2_TR(0x64bd4d);
{goto L64bd92;}
}
B64bd4f:L64bd4f:{c.instructions+=2;NFSU2_TR(0x64bd4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64bd52:{NFSU2_TR(0x64bd52);
{goto L64bd80;}
}
B64bd54:L64bd54:{c.instructions+=2;NFSU2_TR(0x64bd54);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64bd57:{NFSU2_TR(0x64bd57);
{goto L64bd80;}
}
B64bd59:L64bd59:{c.instructions+=2;NFSU2_TR(0x64bd59);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xf30000ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64bd60:{NFSU2_TR(0x64bd60);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64bd67;}}
}
B64bd62:L64bd62:{c.instructions+=2;NFSU2_TR(0x64bd62);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B64bd65:{NFSU2_TR(0x64bd65);
{goto L64bd6a;}
}
B64bd67:L64bd67:{c.instructions+=1;NFSU2_TR(0x64bd67);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64bd6a:L64bd6a:{c.instructions+=5;NFSU2_TR(0x64bd6a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64bd6d:{NFSU2_TR(0x64bd6d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64bd6e:{NFSU2_TR(0x64bd6e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64bd71:{NFSU2_TR(0x64bd71);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64bd72:{NFSU2_TR(0x64bd72);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64bd77ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64ba92u);}goto L64ba92;}
}
B64bd77:L64bd77:{c.instructions+=3;NFSU2_TR(0x64bd77);
__builtin_memmove((R+12),(R+0),4);
}
B64bd79:{NFSU2_TR(0x64bd79);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B64bd7b:{NFSU2_TR(0x64bd7b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L64bdec;}}
}
B64bd7d:L64bd7d:{c.instructions+=1;NFSU2_TR(0x64bd7d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64bd80:L64bd80:{c.instructions+=2;NFSU2_TR(0x64bd80);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B64bd82:{NFSU2_TR(0x64bd82);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64bd59u);}goto L64bd59;}}
}
B64bd84:L64bd84:{c.instructions+=1;NFSU2_TR(0x64bd84);
{goto L64bdec;}
}
B64bd86:L64bd86:{c.instructions+=5;NFSU2_TR(0x64bd86);
u8 U[4];
w4(U+0,u32(0x7af5f0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64bd8b:{NFSU2_TR(0x64bd8b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64bd8d:{NFSU2_TR(0x64bd8d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64bd8e:{NFSU2_TR(0x64bd8e);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x28ull))));
}
B64bd91:{NFSU2_TR(0x64bd91);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64bd92:L64bd92:{c.instructions+=1;NFSU2_TR(0x64bd92);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64bd97ull));
TAIL_STATIC(0x64307cu,643);
}
B64bd97:L64bd97:{c.instructions+=1;NFSU2_TR(0x64bd97);
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
B64bd9a:L64bd9a:{c.instructions+=2;NFSU2_TR(0x64bd9a);
w4(R+12,u32(0x80004005ull));
}
B64bd9f:{NFSU2_TR(0x64bd9f);
{goto L64bdec;}
}
B64bda1:L64bda1:{c.instructions+=2;NFSU2_TR(0x64bda1);
u8 U[4];
w4(U+0,u32(0x2cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64bda3:{NFSU2_TR(0x64bda3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64bda8ull));
TAIL_STATIC(0x575620u,575);
}
B64bda8:L64bda8:{c.instructions+=3;NFSU2_TR(0x64bda8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B64bdaa:{NFSU2_TR(0x64bdaa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B64bdab:{NFSU2_TR(0x64bdab);
if(r1(R+518)){{goto L64bdd5;}}
}
B64bdad:L64bdad:{c.instructions+=13;NFSU2_TR(0x64bdad);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64bdb0:{NFSU2_TR(0x64bdb0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64bdb1:{NFSU2_TR(0x64bdb1);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64bdb4:{NFSU2_TR(0x64bdb4);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64bdb7:{NFSU2_TR(0x64bdb7);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64bdba:{NFSU2_TR(0x64bdba);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64bdbd:{NFSU2_TR(0x64bdbd);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64bdc0:{NFSU2_TR(0x64bdc0);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64bdc3:{NFSU2_TR(0x64bdc3);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64bdc6:{NFSU2_TR(0x64bdc6);
__builtin_memmove((R+4),(R+0),4);
}
B64bdc8:{NFSU2_TR(0x64bdc8);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64bdcb:{NFSU2_TR(0x64bdcb);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64bdce:{NFSU2_TR(0x64bdce);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64bdd3ull));
TAIL_STATIC(0x6476e0u,647);
}
B64bdd3:L64bdd3:{c.instructions+=1;NFSU2_TR(0x64bdd3);
{goto L64bdd7;}
}
B64bdd5:L64bdd5:{c.instructions+=1;NFSU2_TR(0x64bdd5);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B64bdd7:L64bdd7:{c.instructions+=2;NFSU2_TR(0x64bdd7);
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
B64bdd9:{NFSU2_TR(0x64bdd9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64bde2;}}
}
B64bddb:L64bddb:{c.instructions+=2;NFSU2_TR(0x64bddb);
w4(R+12,u32(0x8007000eull));
}
B64bde0:{NFSU2_TR(0x64bde0);
{goto L64bdec;}
}
B64bde2:L64bde2:{c.instructions+=4;NFSU2_TR(0x64bde2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64bde5:{NFSU2_TR(0x64bde5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B64bde7:{NFSU2_TR(0x64bde7);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64bdea:{NFSU2_TR(0x64bdea);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B64bdec:L64bdec:{c.instructions+=6;NFSU2_TR(0x64bdec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B64bded:{NFSU2_TR(0x64bded);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B64bdee:{NFSU2_TR(0x64bdee);
__builtin_memmove((R+0),(R+12),4);
}
B64bdf0:{NFSU2_TR(0x64bdf0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B64bdf1:{NFSU2_TR(0x64bdf1);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B64bdf2:{NFSU2_TR(0x64bdf2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B64bdf5:L64bdf5:{c.instructions+=14;NFSU2_TR(0x64bdf5);
__builtin_memmove((R+28),(R+28),4);
}
B64bdf7:{NFSU2_TR(0x64bdf7);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64bdf8:{NFSU2_TR(0x64bdf8);
__builtin_memmove((R+20),(R+16),4);
}
B64bdfa:{NFSU2_TR(0x64bdfa);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64bdfb:{NFSU2_TR(0x64bdfb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64bdfc:{NFSU2_TR(0x64bdfc);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64bdfd:{NFSU2_TR(0x64bdfd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64bdfe:{NFSU2_TR(0x64bdfe);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64be01:{NFSU2_TR(0x64be01);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64be04:{NFSU2_TR(0x64be04);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64be07:{NFSU2_TR(0x64be07);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B64be09:{NFSU2_TR(0x64be09);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64be0b:{NFSU2_TR(0x64be0b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64be0c:{NFSU2_TR(0x64be0c);
if(r1(R+518)){{goto L64be18;}}
}
B64be0e:L64be0e:{c.instructions+=2;NFSU2_TR(0x64be0e);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64be10:{NFSU2_TR(0x64be10);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64be15ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64b660u);}goto L64b660;}
}
B64be15:L64be15:{c.instructions+=1;NFSU2_TR(0x64be15);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64be18:L64be18:{c.instructions+=6;NFSU2_TR(0x64be18);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B64be1b:{NFSU2_TR(0x64be1b);
__builtin_memmove((R+0),(R+28),4);
}
B64be1d:{NFSU2_TR(0x64be1d);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B64be20:{NFSU2_TR(0x64be20);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B64be23:{NFSU2_TR(0x64be23);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64be24:{NFSU2_TR(0x64be24);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64be29ull));
TAIL_STATIC(0x575620u,575);
}
B64be29:L64be29:{c.instructions+=3;NFSU2_TR(0x64be29);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64be2b:{NFSU2_TR(0x64be2b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B64be2c:{NFSU2_TR(0x64be2c);
if(r1(R+518)){{goto L64be41;}}
}
B64be2e:L64be2e:{c.instructions+=7;NFSU2_TR(0x64be2e);
u8 U[4];
w4(U+0,u32(0x64765cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64be33:{NFSU2_TR(0x64be33);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64be34:{NFSU2_TR(0x64be34);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B64be37:{NFSU2_TR(0x64be37);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64be39:{NFSU2_TR(0x64be39);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64be3a:{NFSU2_TR(0x64be3a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+0)),r4(U+0));
}
B64be3c:{NFSU2_TR(0x64be3c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64be41ull));
TAIL_STATIC(0x401650u,401);
}
B64be41:L64be41:{c.instructions+=3;NFSU2_TR(0x64be41);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B64be43:{NFSU2_TR(0x64be43);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64be46:{NFSU2_TR(0x64be46);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64be4f;}}
}
B64be48:L64be48:{c.instructions+=2;NFSU2_TR(0x64be48);
w4(R+0,u32(0x8007000eull));
}
B64be4d:{NFSU2_TR(0x64be4d);
{goto L64becd;}
}
B64be4f:L64be4f:{c.instructions+=8;NFSU2_TR(0x64be4f);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B64be51:{NFSU2_TR(0x64be51);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64be54:{NFSU2_TR(0x64be54);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64be57:{NFSU2_TR(0x64be57);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64be5a:{NFSU2_TR(0x64be5a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B64be5d:{NFSU2_TR(0x64be5d);
u8 U[12];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B64be61:{NFSU2_TR(0x64be61);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64be64:{NFSU2_TR(0x64be64);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L64becb;}}
}
B64be66:L64be66:{c.instructions+=3;NFSU2_TR(0x64be66);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64be69:{NFSU2_TR(0x64be69);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B64be6b:{NFSU2_TR(0x64be6b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64be6e:L64be6e:{c.instructions+=17;NFSU2_TR(0x64be6e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64be71:{NFSU2_TR(0x64be71);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
w4(U+8,u32(0x3ull));
s4(u32(r4(U+4)),r4(U+8));
}
B64be78:{NFSU2_TR(0x64be78);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64be7b:{NFSU2_TR(0x64be7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64be7e:{NFSU2_TR(0x64be7e);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B64be82:{NFSU2_TR(0x64be82);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64be85:{NFSU2_TR(0x64be85);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64be88:{NFSU2_TR(0x64be88);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))-u32(r4(U+4))));
}
B64be8b:{NFSU2_TR(0x64be8b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64be8e:{NFSU2_TR(0x64be8e);
u8 U[16];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B64be92:{NFSU2_TR(0x64be92);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B64be95:{NFSU2_TR(0x64be95);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64be96:{NFSU2_TR(0x64be96);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B64be99:{NFSU2_TR(0x64be99);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64be9a:{NFSU2_TR(0x64be9a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64be9d:{NFSU2_TR(0x64be9d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x344ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B64bea3:{NFSU2_TR(0x64bea3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64bea8ull));
TAIL_STATIC(0x647d81u,647);
}
B64bea8:L64bea8:{c.instructions+=7;NFSU2_TR(0x64bea8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64beab:{NFSU2_TR(0x64beab);
u8 U[16];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B64beaf:{NFSU2_TR(0x64beaf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64beb2:{NFSU2_TR(0x64beb2);
u8 U[16];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+12),4);
s4(u32(r4(U+8)),r4(U+12));
}
B64beb6:{NFSU2_TR(0x64beb6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64beb9:{NFSU2_TR(0x64beb9);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B64bebb:{NFSU2_TR(0x64bebb);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L64bec3;}}
}
B64bebd:L64bebd:{c.instructions+=3;NFSU2_TR(0x64bebd);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B64bebe:{NFSU2_TR(0x64bebe);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B64bec1:{NFSU2_TR(0x64bec1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64bebdu);}goto L64bebd;}}
}
B64bec3:L64bec3:{c.instructions+=3;NFSU2_TR(0x64bec3);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x20ull))));
}
B64bec6:{NFSU2_TR(0x64bec6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64bec9:{NFSU2_TR(0x64bec9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64be6eu);}goto L64be6e;}}
}
B64becb:L64becb:{c.instructions+=1;NFSU2_TR(0x64becb);
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
B64becd:L64becd:{c.instructions+=5;NFSU2_TR(0x64becd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B64bece:{NFSU2_TR(0x64bece);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B64becf:{NFSU2_TR(0x64becf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B64bed0:{NFSU2_TR(0x64bed0);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B64bed1:{NFSU2_TR(0x64bed1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B64bed4:L64bed4:{c.instructions+=11;NFSU2_TR(0x64bed4);
__builtin_memmove((R+28),(R+28),4);
}
B64bed6:{NFSU2_TR(0x64bed6);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64bed7:{NFSU2_TR(0x64bed7);
__builtin_memmove((R+20),(R+16),4);
}
B64bed9:{NFSU2_TR(0x64bed9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B64bedc:{NFSU2_TR(0x64bedc);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64bedd:{NFSU2_TR(0x64bedd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64bede:{NFSU2_TR(0x64bede);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B64bee1:{NFSU2_TR(0x64bee1);
__builtin_memmove((R+12),(R+4),4);
}
B64bee3:{NFSU2_TR(0x64bee3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64bee4:{NFSU2_TR(0x64bee4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64bee7:{NFSU2_TR(0x64bee7);
TAIL_STATIC(0x64c045u,64c);
}
B64beec:L64beec:{c.instructions+=6;NFSU2_TR(0x64beec);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64beef:{NFSU2_TR(0x64beef);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B64bef0:{NFSU2_TR(0x64bef0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64bef1:{NFSU2_TR(0x64bef1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64bef2:{NFSU2_TR(0x64bef2);
__builtin_memmove((R+4),(R+12),4);
}
B64bef4:{NFSU2_TR(0x64bef4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64bef9ull));
TAIL_STATIC(0x64c399u,64c);
}
B64bef9:L64bef9:{c.instructions+=5;NFSU2_TR(0x64bef9);
__builtin_memmove((R+28),(R+0),4);
}
B64befb:{NFSU2_TR(0x64befb);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B64befd:{NFSU2_TR(0x64befd);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B64beff:{NFSU2_TR(0x64beff);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64bf02:{NFSU2_TR(0x64bf02);
if(r1(R+518)){{goto L64bfeb;}}
}
B64bf08:L64bf08:{c.instructions+=2;NFSU2_TR(0x64bf08);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+24))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+24)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B64bf0b:{NFSU2_TR(0x64bf0b);
if(r1(R+518)){TAIL_STATIC(0x64c069u,64c);}
}
B64bf11:L64bf11:{c.instructions+=6;NFSU2_TR(0x64bf11);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64bf14:{NFSU2_TR(0x64bf14);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64bf17:{NFSU2_TR(0x64bf17);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B64bf1a:{NFSU2_TR(0x64bf1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x344ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B64bf20:{NFSU2_TR(0x64bf20);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64bf24:{NFSU2_TR(0x64bf24);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64bfeb;}}
}
B64bf2a:L64bf2a:{c.instructions+=2;NFSU2_TR(0x64bf2a);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64bf2e:{NFSU2_TR(0x64bf2e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64bf39;}}
}
B64bf30:L64bf30:{c.instructions+=2;NFSU2_TR(0x64bf30);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64bf33:{NFSU2_TR(0x64bf33);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64bfeb;}}
}
B64bf39:L64bf39:{c.instructions+=4;NFSU2_TR(0x64bf39);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B64bf3c:{NFSU2_TR(0x64bf3c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64bf3f:{NFSU2_TR(0x64bf3f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B64bf42:{NFSU2_TR(0x64bf42);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64bf55;}}
}
B64bf44:L64bf44:{c.instructions+=4;NFSU2_TR(0x64bf44);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64bf45:{NFSU2_TR(0x64bf45);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64bf46:{NFSU2_TR(0x64bf46);
__builtin_memmove((R+4),(R+12),4);
}
B64bf48:{NFSU2_TR(0x64bf48);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64bf4dull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64bdf5u);}goto L64bdf5;}
}
B64bf4d:L64bf4d:{c.instructions+=2;NFSU2_TR(0x64bf4d);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B64bf4f:{NFSU2_TR(0x64bf4f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L64bfeb;}}
}
B64bf55:L64bf55:{c.instructions+=1;NFSU2_TR(0x64bf55);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B64bf59:L64bf59:{c.instructions+=2;NFSU2_TR(0x64bf59);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+24))<(r4(U+8))));
}
B64bf5c:{NFSU2_TR(0x64bf5c);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L64bfeb;}}
}
B64bf62:L64bf62:{c.instructions+=11;NFSU2_TR(0x64bf62);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64bf65:{NFSU2_TR(0x64bf65);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64bf68:{NFSU2_TR(0x64bf68);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B64bf6a:{NFSU2_TR(0x64bf6a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B64bf6d:{NFSU2_TR(0x64bf6d);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B64bf70:{NFSU2_TR(0x64bf70);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+28,u32(u32(r4(R+28))+u32(r4(U+4))));
}
B64bf73:{NFSU2_TR(0x64bf73);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x344ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64bf79:{NFSU2_TR(0x64bf79);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+4))));
}
B64bf7b:{NFSU2_TR(0x64bf7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B64bf7e:{NFSU2_TR(0x64bf7e);
u8 U[20];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B64bf82:{NFSU2_TR(0x64bf82);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64bf88;}}
}
B64bf84:L64bf84:{c.instructions+=2;NFSU2_TR(0x64bf84);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B64bf86:{NFSU2_TR(0x64bf86);
{goto L64bf92;}
}
B64bf88:L64bf88:{c.instructions+=2;NFSU2_TR(0x64bf88);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x344ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B64bf8e:{NFSU2_TR(0x64bf8e);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B64bf92:L64bf92:{c.instructions+=4;NFSU2_TR(0x64bf92);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B64bf95:{NFSU2_TR(0x64bf95);
__builtin_memmove((R+0),(R+12),4);
}
B64bf97:{NFSU2_TR(0x64bf97);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+0),(U+0),1);
}
B64bf99:{NFSU2_TR(0x64bf99);
{goto L64bfa3;}
}
B64bf9b:L64bf9b:{c.instructions+=2;NFSU2_TR(0x64bf9b);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B64bf9d:{NFSU2_TR(0x64bf9d);
if(r1(R+518)){{goto L64bfa7;}}
}
B64bf9f:L64bf9f:{c.instructions+=3;NFSU2_TR(0x64bf9f);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B64bfa0:{NFSU2_TR(0x64bfa0);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+12))),1);
__builtin_memmove((R+0),(U+0),1);
}
B64bfa2:{NFSU2_TR(0x64bfa2);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B64bfa3:L64bfa3:{c.instructions+=2;NFSU2_TR(0x64bfa3);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(R+0))-u32(r1(U+1))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B64bfa5:{NFSU2_TR(0x64bfa5);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64bf9bu);}goto L64bf9b;}}
}
B64bfa7:L64bfa7:{c.instructions+=4;NFSU2_TR(0x64bfa7);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+12))),1);
__builtin_memmove((R+0),(U+0),1);
}
B64bfa9:{NFSU2_TR(0x64bfa9);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((R+4),(U+0),1);
}
B64bfab:{NFSU2_TR(0x64bfab);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(R+0))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B64bfad:{NFSU2_TR(0x64bfad);
if(r1(R+518)){TAIL_STATIC(0x64c06du,64c);}
}
B64bfb3:L64bfb3:{c.instructions+=2;NFSU2_TR(0x64bfb3);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B64bfb5:{NFSU2_TR(0x64bfb5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L64bfc7;}}
}
B64bfb7:L64bfb7:{c.instructions+=2;NFSU2_TR(0x64bfb7);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x2eull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B64bfb9:{NFSU2_TR(0x64bfb9);
if(r1(R+518)){TAIL_STATIC(0x64c033u,64c);}
}
B64bfbb:L64bfbb:{c.instructions+=2;NFSU2_TR(0x64bfbb);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x40ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B64bfbd:{NFSU2_TR(0x64bfbd);
if(r1(R+518)){TAIL_STATIC(0x64c07au,64c);}
}
B64bfc3:L64bfc3:{c.instructions+=2;NFSU2_TR(0x64bfc3);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x5bull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B64bfc5:{NFSU2_TR(0x64bfc5);
if(r1(R+518)){{goto L64bfd4;}}
}
B64bfc7:L64bfc7:{c.instructions+=5;NFSU2_TR(0x64bfc7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B64bfca:{NFSU2_TR(0x64bfca);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B64bfcd:{NFSU2_TR(0x64bfcd);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B64bfce:{NFSU2_TR(0x64bfce);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x20ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B64bfd2:{NFSU2_TR(0x64bfd2);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64bf59u);}goto L64bf59;}
}
B64bfd4:L64bfd4:{c.instructions+=4;NFSU2_TR(0x64bfd4);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B64bfd5:{NFSU2_TR(0x64bfd5);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+12))),1);
__builtin_memmove((R+0),(U+0),1);
}
B64bfd7:{NFSU2_TR(0x64bfd7);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x30ull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x30ull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B64bfd9:{NFSU2_TR(0x64bfd9);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L64bfeb;}}
}
B64bfdb:L64bfdb:{c.instructions+=2;NFSU2_TR(0x64bfdb);
u8 U[4];
w1(R+512,u8((r1(R+0))<(u8(0x39ull))));
w1(R+523,sborrow<u8>(r1(R+0),u8(0x39ull)));
w1(U+3,u8(u32(r1(R+0))-u32(u8(0x39ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B64bfdd:{NFSU2_TR(0x64bfdd);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L64bfeb;}}
}
B64bfdf:L64bfdf:{c.instructions+=2;NFSU2_TR(0x64bfdf);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B64bfe0:{NFSU2_TR(0x64bfe0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x64bfe5ull));
TAIL_STATIC(0x75d65bu,75d);
}
B64bfe5:L64bfe5:{c.instructions+=3;NFSU2_TR(0x64bfe5);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B64bfe8:{NFSU2_TR(0x64bfe8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B64bfe9:{NFSU2_TR(0x64bfe9);
if(r1(R+512)){{goto L64bffa;}}
}
B64bfeb:L64bfeb:{c.instructions+=6;NFSU2_TR(0x64bfeb);
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
B64bfed:{NFSU2_TR(0x64bfed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B64bfee:{NFSU2_TR(0x64bfee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B64bfef:{NFSU2_TR(0x64bfef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B64bff0:{NFSU2_TR(0x64bff0);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B64bff1:{NFSU2_TR(0x64bff1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B64bff4:L64bff4:{c.instructions+=2;NFSU2_TR(0x64bff4);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x39ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x39ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B64bff7:{NFSU2_TR(0x64bff7);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){TAIL_STATIC(0x64c001u,64c);}
}
B64bff9:L64bff9:{c.instructions+=1;NFSU2_TR(0x64bff9);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B64bffa:L64bffa:{c.instructions+=3;NFSU2_TR(0x64bffa);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+12))),1);
__builtin_memmove((R+4),(U+0),1);
}
B64bffc:{NFSU2_TR(0x64bffc);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(R+523,sborrow<u8>(r1(U+0),u8(0x30ull)));
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x30ull))));
w1(R+519,u8(s8(r1(U+1))<s8(u8(0x0ull))));
}
B64bfff:{NFSU2_TR(0x64bfff);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x64bff4u);}goto L64bff4;}}
TAIL_STATIC(0x64c001u,64c);
}
XIT:NFSU2_TR_EXIT(0x64b,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
