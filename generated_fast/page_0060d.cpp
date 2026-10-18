#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_43e(u8* __restrict R,Cpu& c);
u32 body_48b(u8* __restrict R,Cpu& c);
u32 body_5bb(u8* __restrict R,Cpu& c);
u32 body_5bc(u8* __restrict R,Cpu& c);
u32 body_5c7(u8* __restrict R,Cpu& c);
u32 body_5e7(u8* __restrict R,Cpu& c);
u32 body_5eb(u8* __restrict R,Cpu& c);
u32 body_5ec(u8* __restrict R,Cpu& c);
u32 body_5f0(u8* __restrict R,Cpu& c);
u32 body_60c(u8* __restrict R,Cpu& c);
u32 body_60e(u8* __restrict R,Cpu& c);
u32 body_60f(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x60d,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x60d,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_60d(u8* __restrict R,Cpu& c);
u32 page_60d(Cpu& c){return body_60d(c.regs.data(),c);}
__attribute__((noinline)) u32 body_60d(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x60d000:goto L60d000;
case 0x60d001:c.instructions+=10;goto B60d001;
case 0x60d003:c.instructions+=9;goto B60d003;
case 0x60d004:c.instructions+=8;goto B60d004;
case 0x60d005:c.instructions+=7;goto B60d005;
case 0x60d006:c.instructions+=6;goto B60d006;
case 0x60d007:c.instructions+=5;goto B60d007;
case 0x60d00a:c.instructions+=4;goto B60d00a;
case 0x60d00c:c.instructions+=3;goto B60d00c;
case 0x60d00e:c.instructions+=2;goto B60d00e;
case 0x60d010:c.instructions+=1;goto B60d010;
case 0x60d012:goto L60d012;
case 0x60d015:goto L60d015;
case 0x60d01c:c.instructions+=5;goto B60d01c;
case 0x60d01e:c.instructions+=4;goto B60d01e;
case 0x60d01f:c.instructions+=3;goto B60d01f;
case 0x60d022:c.instructions+=2;goto B60d022;
case 0x60d024:c.instructions+=1;goto B60d024;
case 0x60d026:goto L60d026;
case 0x60d028:c.instructions+=4;goto B60d028;
case 0x60d02d:c.instructions+=3;goto B60d02d;
case 0x60d02e:c.instructions+=2;goto B60d02e;
case 0x60d033:c.instructions+=1;goto B60d033;
case 0x60d038:goto L60d038;
case 0x60d03a:c.instructions+=9;goto B60d03a;
case 0x60d03f:c.instructions+=8;goto B60d03f;
case 0x60d046:c.instructions+=7;goto B60d046;
case 0x60d048:c.instructions+=6;goto B60d048;
case 0x60d04d:c.instructions+=5;goto B60d04d;
case 0x60d04e:c.instructions+=4;goto B60d04e;
case 0x60d055:c.instructions+=3;goto B60d055;
case 0x60d056:c.instructions+=2;goto B60d056;
case 0x60d057:c.instructions+=1;goto B60d057;
case 0x60d05c:goto L60d05c;
case 0x60d05f:c.instructions+=6;goto B60d05f;
case 0x60d061:c.instructions+=5;goto B60d061;
case 0x60d064:c.instructions+=4;goto B60d064;
case 0x60d066:c.instructions+=3;goto B60d066;
case 0x60d068:c.instructions+=2;goto B60d068;
case 0x60d06d:c.instructions+=1;goto B60d06d;
case 0x60d073:goto L60d073;
case 0x60d078:c.instructions+=13;goto B60d078;
case 0x60d07b:c.instructions+=12;goto B60d07b;
case 0x60d07d:c.instructions+=11;goto B60d07d;
case 0x60d080:c.instructions+=10;goto B60d080;
case 0x60d086:c.instructions+=9;goto B60d086;
case 0x60d089:c.instructions+=8;goto B60d089;
case 0x60d08a:c.instructions+=7;goto B60d08a;
case 0x60d08d:c.instructions+=6;goto B60d08d;
case 0x60d08f:c.instructions+=5;goto B60d08f;
case 0x60d091:c.instructions+=4;goto B60d091;
case 0x60d092:c.instructions+=3;goto B60d092;
case 0x60d098:c.instructions+=2;goto B60d098;
case 0x60d09d:c.instructions+=1;goto B60d09d;
case 0x60d0a2:goto L60d0a2;
case 0x60d0a5:c.instructions+=7;goto B60d0a5;
case 0x60d0a7:c.instructions+=6;goto B60d0a7;
case 0x60d0a9:c.instructions+=5;goto B60d0a9;
case 0x60d0ab:c.instructions+=4;goto B60d0ab;
case 0x60d0ae:c.instructions+=3;goto B60d0ae;
case 0x60d0b0:c.instructions+=2;goto B60d0b0;
case 0x60d0b3:c.instructions+=1;goto B60d0b3;
case 0x60d0b9:goto L60d0b9;
case 0x60d0c0:goto L60d0c0;
case 0x60d0c7:c.instructions+=9;goto B60d0c7;
case 0x60d0ca:c.instructions+=8;goto B60d0ca;
case 0x60d0cc:c.instructions+=7;goto B60d0cc;
case 0x60d0cf:c.instructions+=6;goto B60d0cf;
case 0x60d0d2:c.instructions+=5;goto B60d0d2;
case 0x60d0d5:c.instructions+=4;goto B60d0d5;
case 0x60d0d8:c.instructions+=3;goto B60d0d8;
case 0x60d0da:c.instructions+=2;goto B60d0da;
case 0x60d0dc:c.instructions+=1;goto B60d0dc;
case 0x60d0de:goto L60d0de;
case 0x60d0e1:c.instructions+=6;goto B60d0e1;
case 0x60d0e4:c.instructions+=5;goto B60d0e4;
case 0x60d0e6:c.instructions+=4;goto B60d0e6;
case 0x60d0ec:c.instructions+=3;goto B60d0ec;
case 0x60d0ee:c.instructions+=2;goto B60d0ee;
case 0x60d0f1:c.instructions+=1;goto B60d0f1;
case 0x60d0f3:goto L60d0f3;
case 0x60d0f4:c.instructions+=1;goto B60d0f4;
case 0x60d0f9:goto L60d0f9;
case 0x60d0fc:c.instructions+=2;goto B60d0fc;
case 0x60d0fe:c.instructions+=1;goto B60d0fe;
case 0x60d100:goto L60d100;
case 0x60d103:c.instructions+=1;goto B60d103;
case 0x60d105:goto L60d105;
case 0x60d108:goto L60d108;
case 0x60d10a:c.instructions+=3;goto B60d10a;
case 0x60d10b:c.instructions+=2;goto B60d10b;
case 0x60d10d:c.instructions+=1;goto B60d10d;
case 0x60d10f:goto L60d10f;
case 0x60d112:goto L60d112;
case 0x60d114:c.instructions+=6;goto B60d114;
case 0x60d115:c.instructions+=5;goto B60d115;
case 0x60d116:c.instructions+=4;goto B60d116;
case 0x60d117:c.instructions+=3;goto B60d117;
case 0x60d119:c.instructions+=2;goto B60d119;
case 0x60d11a:c.instructions+=1;goto B60d11a;
case 0x60d11b:goto L60d11b;
case 0x60d11d:c.instructions+=4;goto B60d11d;
case 0x60d11f:c.instructions+=3;goto B60d11f;
case 0x60d121:c.instructions+=2;goto B60d121;
case 0x60d124:c.instructions+=1;goto B60d124;
case 0x60d126:goto L60d126;
case 0x60d130:goto L60d130;
case 0x60d137:c.instructions+=13;goto B60d137;
case 0x60d13a:c.instructions+=12;goto B60d13a;
case 0x60d13c:c.instructions+=11;goto B60d13c;
case 0x60d13f:c.instructions+=10;goto B60d13f;
case 0x60d142:c.instructions+=9;goto B60d142;
case 0x60d145:c.instructions+=8;goto B60d145;
case 0x60d146:c.instructions+=7;goto B60d146;
case 0x60d149:c.instructions+=6;goto B60d149;
case 0x60d14b:c.instructions+=5;goto B60d14b;
case 0x60d14d:c.instructions+=4;goto B60d14d;
case 0x60d14e:c.instructions+=3;goto B60d14e;
case 0x60d150:c.instructions+=2;goto B60d150;
case 0x60d153:c.instructions+=1;goto B60d153;
case 0x60d158:goto L60d158;
case 0x60d15b:c.instructions+=4;goto B60d15b;
case 0x60d15e:c.instructions+=3;goto B60d15e;
case 0x60d160:c.instructions+=2;goto B60d160;
case 0x60d163:c.instructions+=1;goto B60d163;
case 0x60d165:goto L60d165;
case 0x60d168:c.instructions+=5;goto B60d168;
case 0x60d16a:c.instructions+=4;goto B60d16a;
case 0x60d170:c.instructions+=3;goto B60d170;
case 0x60d172:c.instructions+=2;goto B60d172;
case 0x60d175:c.instructions+=1;goto B60d175;
case 0x60d177:goto L60d177;
case 0x60d178:c.instructions+=1;goto B60d178;
case 0x60d17d:goto L60d17d;
case 0x60d180:c.instructions+=2;goto B60d180;
case 0x60d182:c.instructions+=1;goto B60d182;
case 0x60d184:goto L60d184;
case 0x60d187:c.instructions+=1;goto B60d187;
case 0x60d189:goto L60d189;
case 0x60d18b:goto L60d18b;
case 0x60d18e:goto L60d18e;
case 0x60d190:c.instructions+=3;goto B60d190;
case 0x60d191:c.instructions+=2;goto B60d191;
case 0x60d193:c.instructions+=1;goto B60d193;
case 0x60d195:goto L60d195;
case 0x60d198:c.instructions+=8;goto B60d198;
case 0x60d19a:c.instructions+=7;goto B60d19a;
case 0x60d19c:c.instructions+=6;goto B60d19c;
case 0x60d19d:c.instructions+=5;goto B60d19d;
case 0x60d19e:c.instructions+=4;goto B60d19e;
case 0x60d19f:c.instructions+=3;goto B60d19f;
case 0x60d1a1:c.instructions+=2;goto B60d1a1;
case 0x60d1a2:c.instructions+=1;goto B60d1a2;
case 0x60d1a3:goto L60d1a3;
case 0x60d1a5:c.instructions+=6;goto B60d1a5;
case 0x60d1a6:c.instructions+=5;goto B60d1a6;
case 0x60d1a7:c.instructions+=4;goto B60d1a7;
case 0x60d1a8:c.instructions+=3;goto B60d1a8;
case 0x60d1aa:c.instructions+=2;goto B60d1aa;
case 0x60d1ab:c.instructions+=1;goto B60d1ab;
case 0x60d1b0:goto L60d1b0;
case 0x60d1b1:c.instructions+=32;goto B60d1b1;
case 0x60d1b3:c.instructions+=31;goto B60d1b3;
case 0x60d1b6:c.instructions+=30;goto B60d1b6;
case 0x60d1b9:c.instructions+=29;goto B60d1b9;
case 0x60d1bc:c.instructions+=28;goto B60d1bc;
case 0x60d1c2:c.instructions+=27;goto B60d1c2;
case 0x60d1c4:c.instructions+=26;goto B60d1c4;
case 0x60d1c7:c.instructions+=25;goto B60d1c7;
case 0x60d1cd:c.instructions+=24;goto B60d1cd;
case 0x60d1d3:c.instructions+=23;goto B60d1d3;
case 0x60d1d6:c.instructions+=22;goto B60d1d6;
case 0x60d1d7:c.instructions+=21;goto B60d1d7;
case 0x60d1dd:c.instructions+=20;goto B60d1dd;
case 0x60d1e0:c.instructions+=19;goto B60d1e0;
case 0x60d1e1:c.instructions+=18;goto B60d1e1;
case 0x60d1e7:c.instructions+=17;goto B60d1e7;
case 0x60d1e9:c.instructions+=16;goto B60d1e9;
case 0x60d1eb:c.instructions+=15;goto B60d1eb;
case 0x60d1ed:c.instructions+=14;goto B60d1ed;
case 0x60d1f1:c.instructions+=13;goto B60d1f1;
case 0x60d1f3:c.instructions+=12;goto B60d1f3;
case 0x60d1f4:c.instructions+=11;goto B60d1f4;
case 0x60d1f8:c.instructions+=10;goto B60d1f8;
case 0x60d1fc:c.instructions+=9;goto B60d1fc;
case 0x60d200:c.instructions+=8;goto B60d200;
case 0x60d206:c.instructions+=7;goto B60d206;
case 0x60d20a:c.instructions+=6;goto B60d20a;
case 0x60d20c:c.instructions+=5;goto B60d20c;
case 0x60d212:c.instructions+=4;goto B60d212;
case 0x60d216:c.instructions+=3;goto B60d216;
case 0x60d21c:c.instructions+=2;goto B60d21c;
case 0x60d220:c.instructions+=1;goto B60d220;
case 0x60d226:goto L60d226;
case 0x60d229:c.instructions+=3;goto B60d229;
case 0x60d22e:c.instructions+=2;goto B60d22e;
case 0x60d233:c.instructions+=1;goto B60d233;
case 0x60d237:goto L60d237;
case 0x60d23a:c.instructions+=8;goto B60d23a;
case 0x60d23c:c.instructions+=7;goto B60d23c;
case 0x60d23f:c.instructions+=6;goto B60d23f;
case 0x60d241:c.instructions+=5;goto B60d241;
case 0x60d244:c.instructions+=4;goto B60d244;
case 0x60d245:c.instructions+=3;goto B60d245;
case 0x60d247:c.instructions+=2;goto B60d247;
case 0x60d24b:c.instructions+=1;goto B60d24b;
case 0x60d24d:goto L60d24d;
case 0x60d24f:goto L60d24f;
case 0x60d252:c.instructions+=68;goto B60d252;
case 0x60d258:c.instructions+=67;goto B60d258;
case 0x60d25a:c.instructions+=66;goto B60d25a;
case 0x60d25d:c.instructions+=65;goto B60d25d;
case 0x60d25f:c.instructions+=64;goto B60d25f;
case 0x60d262:c.instructions+=63;goto B60d262;
case 0x60d265:c.instructions+=62;goto B60d265;
case 0x60d269:c.instructions+=61;goto B60d269;
case 0x60d26c:c.instructions+=60;goto B60d26c;
case 0x60d26f:c.instructions+=59;goto B60d26f;
case 0x60d272:c.instructions+=58;goto B60d272;
case 0x60d274:c.instructions+=57;goto B60d274;
case 0x60d278:c.instructions+=56;goto B60d278;
case 0x60d27c:c.instructions+=55;goto B60d27c;
case 0x60d27e:c.instructions+=54;goto B60d27e;
case 0x60d280:c.instructions+=53;goto B60d280;
case 0x60d283:c.instructions+=52;goto B60d283;
case 0x60d287:c.instructions+=51;goto B60d287;
case 0x60d28a:c.instructions+=50;goto B60d28a;
case 0x60d290:c.instructions+=49;goto B60d290;
case 0x60d292:c.instructions+=48;goto B60d292;
case 0x60d294:c.instructions+=47;goto B60d294;
case 0x60d29a:c.instructions+=46;goto B60d29a;
case 0x60d29d:c.instructions+=45;goto B60d29d;
case 0x60d2a0:c.instructions+=44;goto B60d2a0;
case 0x60d2a6:c.instructions+=43;goto B60d2a6;
case 0x60d2a9:c.instructions+=42;goto B60d2a9;
case 0x60d2ac:c.instructions+=41;goto B60d2ac;
case 0x60d2ae:c.instructions+=40;goto B60d2ae;
case 0x60d2b0:c.instructions+=39;goto B60d2b0;
case 0x60d2b3:c.instructions+=38;goto B60d2b3;
case 0x60d2b6:c.instructions+=37;goto B60d2b6;
case 0x60d2b9:c.instructions+=36;goto B60d2b9;
case 0x60d2bb:c.instructions+=35;goto B60d2bb;
case 0x60d2bf:c.instructions+=34;goto B60d2bf;
case 0x60d2c3:c.instructions+=33;goto B60d2c3;
case 0x60d2c5:c.instructions+=32;goto B60d2c5;
case 0x60d2c8:c.instructions+=31;goto B60d2c8;
case 0x60d2ca:c.instructions+=30;goto B60d2ca;
case 0x60d2cd:c.instructions+=29;goto B60d2cd;
case 0x60d2cf:c.instructions+=28;goto B60d2cf;
case 0x60d2d1:c.instructions+=27;goto B60d2d1;
case 0x60d2d4:c.instructions+=26;goto B60d2d4;
case 0x60d2d7:c.instructions+=25;goto B60d2d7;
case 0x60d2da:c.instructions+=24;goto B60d2da;
case 0x60d2dc:c.instructions+=23;goto B60d2dc;
case 0x60d2e0:c.instructions+=22;goto B60d2e0;
case 0x60d2e4:c.instructions+=21;goto B60d2e4;
case 0x60d2e6:c.instructions+=20;goto B60d2e6;
case 0x60d2e9:c.instructions+=19;goto B60d2e9;
case 0x60d2ec:c.instructions+=18;goto B60d2ec;
case 0x60d2ef:c.instructions+=17;goto B60d2ef;
case 0x60d2f1:c.instructions+=16;goto B60d2f1;
case 0x60d2f3:c.instructions+=15;goto B60d2f3;
case 0x60d2f7:c.instructions+=14;goto B60d2f7;
case 0x60d2fa:c.instructions+=13;goto B60d2fa;
case 0x60d2fd:c.instructions+=12;goto B60d2fd;
case 0x60d301:c.instructions+=11;goto B60d301;
case 0x60d304:c.instructions+=10;goto B60d304;
case 0x60d307:c.instructions+=9;goto B60d307;
case 0x60d30c:c.instructions+=8;goto B60d30c;
case 0x60d30d:c.instructions+=7;goto B60d30d;
case 0x60d311:c.instructions+=6;goto B60d311;
case 0x60d312:c.instructions+=5;goto B60d312;
case 0x60d313:c.instructions+=4;goto B60d313;
case 0x60d316:c.instructions+=3;goto B60d316;
case 0x60d31a:c.instructions+=2;goto B60d31a;
case 0x60d31b:c.instructions+=1;goto B60d31b;
case 0x60d320:goto L60d320;
case 0x60d324:c.instructions+=6;goto B60d324;
case 0x60d327:c.instructions+=5;goto B60d327;
case 0x60d32a:c.instructions+=4;goto B60d32a;
case 0x60d32d:c.instructions+=3;goto B60d32d;
case 0x60d330:c.instructions+=2;goto B60d330;
case 0x60d332:c.instructions+=1;goto B60d332;
case 0x60d338:goto L60d338;
case 0x60d33c:goto L60d33c;
case 0x60d33d:c.instructions+=5;goto B60d33d;
case 0x60d33e:c.instructions+=4;goto B60d33e;
case 0x60d33f:c.instructions+=3;goto B60d33f;
case 0x60d341:c.instructions+=2;goto B60d341;
case 0x60d342:c.instructions+=1;goto B60d342;
case 0x60d350:goto L60d350;
case 0x60d351:c.instructions+=26;goto B60d351;
case 0x60d353:c.instructions+=25;goto B60d353;
case 0x60d356:c.instructions+=24;goto B60d356;
case 0x60d359:c.instructions+=23;goto B60d359;
case 0x60d35c:c.instructions+=22;goto B60d35c;
case 0x60d35e:c.instructions+=21;goto B60d35e;
case 0x60d361:c.instructions+=20;goto B60d361;
case 0x60d364:c.instructions+=19;goto B60d364;
case 0x60d367:c.instructions+=18;goto B60d367;
case 0x60d36d:c.instructions+=17;goto B60d36d;
case 0x60d371:c.instructions+=16;goto B60d371;
case 0x60d375:c.instructions+=15;goto B60d375;
case 0x60d377:c.instructions+=14;goto B60d377;
case 0x60d37d:c.instructions+=13;goto B60d37d;
case 0x60d382:c.instructions+=12;goto B60d382;
case 0x60d388:c.instructions+=11;goto B60d388;
case 0x60d38e:c.instructions+=10;goto B60d38e;
case 0x60d394:c.instructions+=9;goto B60d394;
case 0x60d39a:c.instructions+=8;goto B60d39a;
case 0x60d3a0:c.instructions+=7;goto B60d3a0;
case 0x60d3a2:c.instructions+=6;goto B60d3a2;
case 0x60d3a8:c.instructions+=5;goto B60d3a8;
case 0x60d3aa:c.instructions+=4;goto B60d3aa;
case 0x60d3ae:c.instructions+=3;goto B60d3ae;
case 0x60d3b0:c.instructions+=2;goto B60d3b0;
case 0x60d3b3:c.instructions+=1;goto B60d3b3;
case 0x60d3b8:goto L60d3b8;
case 0x60d3bb:c.instructions+=2;goto B60d3bb;
case 0x60d3bf:c.instructions+=1;goto B60d3bf;
case 0x60d3c5:goto L60d3c5;
case 0x60d3ca:c.instructions+=5;goto B60d3ca;
case 0x60d3ce:c.instructions+=4;goto B60d3ce;
case 0x60d3cf:c.instructions+=3;goto B60d3cf;
case 0x60d3d3:c.instructions+=2;goto B60d3d3;
case 0x60d3d4:c.instructions+=1;goto B60d3d4;
case 0x60d3d9:goto L60d3d9;
case 0x60d3df:c.instructions+=31;goto B60d3df;
case 0x60d3e5:c.instructions+=30;goto B60d3e5;
case 0x60d3e8:c.instructions+=29;goto B60d3e8;
case 0x60d3ee:c.instructions+=28;goto B60d3ee;
case 0x60d3f4:c.instructions+=27;goto B60d3f4;
case 0x60d3f6:c.instructions+=26;goto B60d3f6;
case 0x60d3fc:c.instructions+=25;goto B60d3fc;
case 0x60d402:c.instructions+=24;goto B60d402;
case 0x60d404:c.instructions+=23;goto B60d404;
case 0x60d406:c.instructions+=22;goto B60d406;
case 0x60d40a:c.instructions+=21;goto B60d40a;
case 0x60d40c:c.instructions+=20;goto B60d40c;
case 0x60d40e:c.instructions+=19;goto B60d40e;
case 0x60d414:c.instructions+=18;goto B60d414;
case 0x60d41a:c.instructions+=17;goto B60d41a;
case 0x60d41c:c.instructions+=16;goto B60d41c;
case 0x60d422:c.instructions+=15;goto B60d422;
case 0x60d424:c.instructions+=14;goto B60d424;
case 0x60d426:c.instructions+=13;goto B60d426;
case 0x60d428:c.instructions+=12;goto B60d428;
case 0x60d42a:c.instructions+=11;goto B60d42a;
case 0x60d430:c.instructions+=10;goto B60d430;
case 0x60d436:c.instructions+=9;goto B60d436;
case 0x60d438:c.instructions+=8;goto B60d438;
case 0x60d43a:c.instructions+=7;goto B60d43a;
case 0x60d43e:c.instructions+=6;goto B60d43e;
case 0x60d444:c.instructions+=5;goto B60d444;
case 0x60d44a:c.instructions+=4;goto B60d44a;
case 0x60d44c:c.instructions+=3;goto B60d44c;
case 0x60d450:c.instructions+=2;goto B60d450;
case 0x60d456:c.instructions+=1;goto B60d456;
case 0x60d458:goto L60d458;
case 0x60d45e:c.instructions+=4;goto B60d45e;
case 0x60d464:c.instructions+=3;goto B60d464;
case 0x60d466:c.instructions+=2;goto B60d466;
case 0x60d469:c.instructions+=1;goto B60d469;
case 0x60d46b:goto L60d46b;
case 0x60d475:c.instructions+=3;goto B60d475;
case 0x60d477:c.instructions+=2;goto B60d477;
case 0x60d478:c.instructions+=1;goto B60d478;
case 0x60d479:goto L60d479;
case 0x60d47f:c.instructions+=5;goto B60d47f;
case 0x60d485:c.instructions+=4;goto B60d485;
case 0x60d48b:c.instructions+=3;goto B60d48b;
case 0x60d48d:c.instructions+=2;goto B60d48d;
case 0x60d48e:c.instructions+=1;goto B60d48e;
case 0x60d490:goto L60d490;
case 0x60d491:c.instructions+=21;goto B60d491;
case 0x60d493:c.instructions+=20;goto B60d493;
case 0x60d496:c.instructions+=19;goto B60d496;
case 0x60d499:c.instructions+=18;goto B60d499;
case 0x60d49b:c.instructions+=17;goto B60d49b;
case 0x60d49d:c.instructions+=16;goto B60d49d;
case 0x60d4a0:c.instructions+=15;goto B60d4a0;
case 0x60d4a6:c.instructions+=14;goto B60d4a6;
case 0x60d4a8:c.instructions+=13;goto B60d4a8;
case 0x60d4ab:c.instructions+=12;goto B60d4ab;
case 0x60d4ae:c.instructions+=11;goto B60d4ae;
case 0x60d4b4:c.instructions+=10;goto B60d4b4;
case 0x60d4b7:c.instructions+=9;goto B60d4b7;
case 0x60d4ba:c.instructions+=8;goto B60d4ba;
case 0x60d4bd:c.instructions+=7;goto B60d4bd;
case 0x60d4bf:c.instructions+=6;goto B60d4bf;
case 0x60d4c1:c.instructions+=5;goto B60d4c1;
case 0x60d4c4:c.instructions+=4;goto B60d4c4;
case 0x60d4c7:c.instructions+=3;goto B60d4c7;
case 0x60d4c9:c.instructions+=2;goto B60d4c9;
case 0x60d4ca:c.instructions+=1;goto B60d4ca;
case 0x60d4d0:goto L60d4d0;
case 0x60d4d4:c.instructions+=2;goto B60d4d4;
case 0x60d4d6:c.instructions+=1;goto B60d4d6;
case 0x60d4d8:goto L60d4d8;
case 0x60d4da:c.instructions+=1;goto B60d4da;
case 0x60d4db:goto L60d4db;
case 0x60d4de:c.instructions+=2;goto B60d4de;
case 0x60d4e1:c.instructions+=1;goto B60d4e1;
case 0x60d4e3:goto L60d4e3;
case 0x60d4e5:goto L60d4e5;
case 0x60d4ea:c.instructions+=1;goto B60d4ea;
case 0x60d4eb:goto L60d4eb;
case 0x60d4ed:c.instructions+=1;goto B60d4ed;
case 0x60d4f0:goto L60d4f0;
case 0x60d4f1:c.instructions+=3;goto B60d4f1;
case 0x60d4f5:c.instructions+=2;goto B60d4f5;
case 0x60d4f7:c.instructions+=1;goto B60d4f7;
case 0x60d4fc:goto L60d4fc;
case 0x60d502:c.instructions+=2;goto B60d502;
case 0x60d504:c.instructions+=1;goto B60d504;
case 0x60d506:goto L60d506;
case 0x60d50b:c.instructions+=1;goto B60d50b;
case 0x60d510:goto L60d510;
case 0x60d512:c.instructions+=1;goto B60d512;
case 0x60d514:goto L60d514;
case 0x60d519:c.instructions+=2;goto B60d519;
case 0x60d51c:c.instructions+=1;goto B60d51c;
case 0x60d51e:goto L60d51e;
case 0x60d521:c.instructions+=1;goto B60d521;
case 0x60d523:goto L60d523;
case 0x60d525:c.instructions+=2;goto B60d525;
case 0x60d526:c.instructions+=1;goto B60d526;
case 0x60d527:goto L60d527;
case 0x60d528:c.instructions+=4;goto B60d528;
case 0x60d529:c.instructions+=3;goto B60d529;
case 0x60d52d:c.instructions+=2;goto B60d52d;
case 0x60d52f:c.instructions+=1;goto B60d52f;
case 0x60d534:goto L60d534;
case 0x60d537:c.instructions+=4;goto B60d537;
case 0x60d53a:c.instructions+=3;goto B60d53a;
case 0x60d53b:c.instructions+=2;goto B60d53b;
case 0x60d53d:c.instructions+=1;goto B60d53d;
case 0x60d542:goto L60d542;
case 0x60d544:c.instructions+=1;goto B60d544;
case 0x60d546:goto L60d546;
case 0x60d54c:c.instructions+=5;goto B60d54c;
case 0x60d54e:c.instructions+=4;goto B60d54e;
case 0x60d554:c.instructions+=3;goto B60d554;
case 0x60d556:c.instructions+=2;goto B60d556;
case 0x60d559:c.instructions+=1;goto B60d559;
case 0x60d55b:goto L60d55b;
case 0x60d561:c.instructions+=1;goto B60d561;
case 0x60d564:goto L60d564;
case 0x60d565:c.instructions+=4;goto B60d565;
case 0x60d567:c.instructions+=3;goto B60d567;
case 0x60d568:c.instructions+=2;goto B60d568;
case 0x60d569:c.instructions+=1;goto B60d569;
case 0x60d570:goto L60d570;
case 0x60d574:c.instructions+=6;goto B60d574;
case 0x60d57a:c.instructions+=5;goto B60d57a;
case 0x60d57b:c.instructions+=4;goto B60d57b;
case 0x60d57f:c.instructions+=3;goto B60d57f;
case 0x60d581:c.instructions+=2;goto B60d581;
case 0x60d582:c.instructions+=1;goto B60d582;
case 0x60d584:goto L60d584;
case 0x60d58a:c.instructions+=2;goto B60d58a;
case 0x60d58c:c.instructions+=1;goto B60d58c;
case 0x60d58e:goto L60d58e;
case 0x60d592:c.instructions+=3;goto B60d592;
case 0x60d593:c.instructions+=2;goto B60d593;
case 0x60d594:c.instructions+=1;goto B60d594;
case 0x60d599:goto L60d599;
case 0x60d59c:c.instructions+=2;goto B60d59c;
case 0x60d59e:c.instructions+=1;goto B60d59e;
case 0x60d5a0:goto L60d5a0;
case 0x60d5a3:c.instructions+=5;goto B60d5a3;
case 0x60d5a9:c.instructions+=4;goto B60d5a9;
case 0x60d5ae:c.instructions+=3;goto B60d5ae;
case 0x60d5b0:c.instructions+=2;goto B60d5b0;
case 0x60d5b2:c.instructions+=1;goto B60d5b2;
case 0x60d5b4:goto L60d5b4;
case 0x60d5b5:c.instructions+=3;goto B60d5b5;
case 0x60d5ba:c.instructions+=2;goto B60d5ba;
case 0x60d5bb:c.instructions+=1;goto B60d5bb;
case 0x60d5bc:goto L60d5bc;
case 0x60d5bd:c.instructions+=3;goto B60d5bd;
case 0x60d5bf:c.instructions+=2;goto B60d5bf;
case 0x60d5c0:c.instructions+=1;goto B60d5c0;
case 0x60d5d0:goto L60d5d0;
case 0x60d5d1:c.instructions+=18;goto B60d5d1;
case 0x60d5d3:c.instructions+=17;goto B60d5d3;
case 0x60d5d6:c.instructions+=16;goto B60d5d6;
case 0x60d5dc:c.instructions+=15;goto B60d5dc;
case 0x60d5dd:c.instructions+=14;goto B60d5dd;
case 0x60d5e0:c.instructions+=13;goto B60d5e0;
case 0x60d5e3:c.instructions+=12;goto B60d5e3;
case 0x60d5e6:c.instructions+=11;goto B60d5e6;
case 0x60d5e9:c.instructions+=10;goto B60d5e9;
case 0x60d5eb:c.instructions+=9;goto B60d5eb;
case 0x60d5ed:c.instructions+=8;goto B60d5ed;
case 0x60d5f3:c.instructions+=7;goto B60d5f3;
case 0x60d5f5:c.instructions+=6;goto B60d5f5;
case 0x60d5fb:c.instructions+=5;goto B60d5fb;
case 0x60d5fd:c.instructions+=4;goto B60d5fd;
case 0x60d5ff:c.instructions+=3;goto B60d5ff;
case 0x60d602:c.instructions+=2;goto B60d602;
case 0x60d604:c.instructions+=1;goto B60d604;
case 0x60d60a:goto L60d60a;
case 0x60d60e:c.instructions+=1;goto B60d60e;
case 0x60d613:goto L60d613;
case 0x60d619:c.instructions+=46;goto B60d619;
case 0x60d61f:c.instructions+=45;goto B60d61f;
case 0x60d622:c.instructions+=44;goto B60d622;
case 0x60d628:c.instructions+=43;goto B60d628;
case 0x60d62d:c.instructions+=42;goto B60d62d;
case 0x60d633:c.instructions+=41;goto B60d633;
case 0x60d635:c.instructions+=40;goto B60d635;
case 0x60d637:c.instructions+=39;goto B60d637;
case 0x60d639:c.instructions+=38;goto B60d639;
case 0x60d63d:c.instructions+=37;goto B60d63d;
case 0x60d641:c.instructions+=36;goto B60d641;
case 0x60d645:c.instructions+=35;goto B60d645;
case 0x60d649:c.instructions+=34;goto B60d649;
case 0x60d650:c.instructions+=33;goto B60d650;
case 0x60d656:c.instructions+=32;goto B60d656;
case 0x60d65d:c.instructions+=31;goto B60d65d;
case 0x60d663:c.instructions+=30;goto B60d663;
case 0x60d668:c.instructions+=29;goto B60d668;
case 0x60d66e:c.instructions+=28;goto B60d66e;
case 0x60d66f:c.instructions+=27;goto B60d66f;
case 0x60d675:c.instructions+=26;goto B60d675;
case 0x60d676:c.instructions+=25;goto B60d676;
case 0x60d678:c.instructions+=24;goto B60d678;
case 0x60d67c:c.instructions+=23;goto B60d67c;
case 0x60d680:c.instructions+=22;goto B60d680;
case 0x60d681:c.instructions+=21;goto B60d681;
case 0x60d684:c.instructions+=20;goto B60d684;
case 0x60d688:c.instructions+=19;goto B60d688;
case 0x60d68e:c.instructions+=18;goto B60d68e;
case 0x60d696:c.instructions+=17;goto B60d696;
case 0x60d69c:c.instructions+=16;goto B60d69c;
case 0x60d6a2:c.instructions+=15;goto B60d6a2;
case 0x60d6aa:c.instructions+=14;goto B60d6aa;
case 0x60d6b0:c.instructions+=13;goto B60d6b0;
case 0x60d6b8:c.instructions+=12;goto B60d6b8;
case 0x60d6ba:c.instructions+=11;goto B60d6ba;
case 0x60d6c2:c.instructions+=10;goto B60d6c2;
case 0x60d6c6:c.instructions+=9;goto B60d6c6;
case 0x60d6ca:c.instructions+=8;goto B60d6ca;
case 0x60d6d0:c.instructions+=7;goto B60d6d0;
case 0x60d6d6:c.instructions+=6;goto B60d6d6;
case 0x60d6dc:c.instructions+=5;goto B60d6dc;
case 0x60d6e2:c.instructions+=4;goto B60d6e2;
case 0x60d6e4:c.instructions+=3;goto B60d6e4;
case 0x60d6e8:c.instructions+=2;goto B60d6e8;
case 0x60d6ec:c.instructions+=1;goto B60d6ec;
case 0x60d6f1:goto L60d6f1;
case 0x60d6f2:c.instructions+=3;goto B60d6f2;
case 0x60d6f4:c.instructions+=2;goto B60d6f4;
case 0x60d6f5:c.instructions+=1;goto B60d6f5;
case 0x60d700:goto L60d700;
case 0x60d701:c.instructions+=6;goto B60d701;
case 0x60d703:c.instructions+=5;goto B60d703;
case 0x60d706:c.instructions+=4;goto B60d706;
case 0x60d709:c.instructions+=3;goto B60d709;
case 0x60d70e:c.instructions+=2;goto B60d70e;
case 0x60d710:c.instructions+=1;goto B60d710;
case 0x60d712:goto L60d712;
case 0x60d718:c.instructions+=3;goto B60d718;
case 0x60d71a:c.instructions+=2;goto B60d71a;
case 0x60d71b:c.instructions+=1;goto B60d71b;
case 0x60d71c:goto L60d71c;
case 0x60d71f:c.instructions+=13;goto B60d71f;
case 0x60d722:c.instructions+=12;goto B60d722;
case 0x60d725:c.instructions+=11;goto B60d725;
case 0x60d728:c.instructions+=10;goto B60d728;
case 0x60d72b:c.instructions+=9;goto B60d72b;
case 0x60d72e:c.instructions+=8;goto B60d72e;
case 0x60d732:c.instructions+=7;goto B60d732;
case 0x60d735:c.instructions+=6;goto B60d735;
case 0x60d736:c.instructions+=5;goto B60d736;
case 0x60d73a:c.instructions+=4;goto B60d73a;
case 0x60d73e:c.instructions+=3;goto B60d73e;
case 0x60d73f:c.instructions+=2;goto B60d73f;
case 0x60d743:c.instructions+=1;goto B60d743;
case 0x60d748:goto L60d748;
case 0x60d74c:c.instructions+=44;goto B60d74c;
case 0x60d751:c.instructions+=43;goto B60d751;
case 0x60d757:c.instructions+=42;goto B60d757;
case 0x60d75d:c.instructions+=41;goto B60d75d;
case 0x60d761:c.instructions+=40;goto B60d761;
case 0x60d765:c.instructions+=39;goto B60d765;
case 0x60d769:c.instructions+=38;goto B60d769;
case 0x60d76d:c.instructions+=37;goto B60d76d;
case 0x60d771:c.instructions+=36;goto B60d771;
case 0x60d775:c.instructions+=35;goto B60d775;
case 0x60d778:c.instructions+=34;goto B60d778;
case 0x60d77a:c.instructions+=33;goto B60d77a;
case 0x60d77e:c.instructions+=32;goto B60d77e;
case 0x60d782:c.instructions+=31;goto B60d782;
case 0x60d784:c.instructions+=30;goto B60d784;
case 0x60d788:c.instructions+=29;goto B60d788;
case 0x60d78c:c.instructions+=28;goto B60d78c;
case 0x60d790:c.instructions+=27;goto B60d790;
case 0x60d794:c.instructions+=26;goto B60d794;
case 0x60d796:c.instructions+=25;goto B60d796;
case 0x60d79a:c.instructions+=24;goto B60d79a;
case 0x60d79e:c.instructions+=23;goto B60d79e;
case 0x60d7a0:c.instructions+=22;goto B60d7a0;
case 0x60d7a4:c.instructions+=21;goto B60d7a4;
case 0x60d7a8:c.instructions+=20;goto B60d7a8;
case 0x60d7ac:c.instructions+=19;goto B60d7ac;
case 0x60d7b0:c.instructions+=18;goto B60d7b0;
case 0x60d7b2:c.instructions+=17;goto B60d7b2;
case 0x60d7b6:c.instructions+=16;goto B60d7b6;
case 0x60d7ba:c.instructions+=15;goto B60d7ba;
case 0x60d7bc:c.instructions+=14;goto B60d7bc;
case 0x60d7c0:c.instructions+=13;goto B60d7c0;
case 0x60d7c2:c.instructions+=12;goto B60d7c2;
case 0x60d7c6:c.instructions+=11;goto B60d7c6;
case 0x60d7ca:c.instructions+=10;goto B60d7ca;
case 0x60d7ce:c.instructions+=9;goto B60d7ce;
case 0x60d7d0:c.instructions+=8;goto B60d7d0;
case 0x60d7d4:c.instructions+=7;goto B60d7d4;
case 0x60d7d6:c.instructions+=6;goto B60d7d6;
case 0x60d7da:c.instructions+=5;goto B60d7da;
case 0x60d7de:c.instructions+=4;goto B60d7de;
case 0x60d7e0:c.instructions+=3;goto B60d7e0;
case 0x60d7e2:c.instructions+=2;goto B60d7e2;
case 0x60d7e3:c.instructions+=1;goto B60d7e3;
case 0x60d7f0:goto L60d7f0;
case 0x60d7f1:c.instructions+=10;goto B60d7f1;
case 0x60d7f3:c.instructions+=9;goto B60d7f3;
case 0x60d7f6:c.instructions+=8;goto B60d7f6;
case 0x60d7fc:c.instructions+=7;goto B60d7fc;
case 0x60d7ff:c.instructions+=6;goto B60d7ff;
case 0x60d801:c.instructions+=5;goto B60d801;
case 0x60d802:c.instructions+=4;goto B60d802;
case 0x60d803:c.instructions+=3;goto B60d803;
case 0x60d804:c.instructions+=2;goto B60d804;
case 0x60d806:c.instructions+=1;goto B60d806;
case 0x60d80c:goto L60d80c;
case 0x60d811:c.instructions+=4;goto B60d811;
case 0x60d817:c.instructions+=3;goto B60d817;
case 0x60d81a:c.instructions+=2;goto B60d81a;
case 0x60d81c:c.instructions+=1;goto B60d81c;
case 0x60d81e:goto L60d81e;
case 0x60d823:c.instructions+=9;goto B60d823;
case 0x60d826:c.instructions+=8;goto B60d826;
case 0x60d830:c.instructions+=7;goto B60d830;
case 0x60d835:c.instructions+=6;goto B60d835;
case 0x60d836:c.instructions+=5;goto B60d836;
case 0x60d837:c.instructions+=4;goto B60d837;
case 0x60d838:c.instructions+=3;goto B60d838;
case 0x60d83a:c.instructions+=2;goto B60d83a;
case 0x60d83b:c.instructions+=1;goto B60d83b;
case 0x60d83e:goto L60d83e;
case 0x60d840:c.instructions+=3;goto B60d840;
case 0x60d847:c.instructions+=2;goto B60d847;
case 0x60d84d:c.instructions+=1;goto B60d84d;
case 0x60d853:goto L60d853;
case 0x60d854:c.instructions+=1;goto B60d854;
case 0x60d859:goto L60d859;
case 0x60d85f:c.instructions+=54;goto B60d85f;
case 0x60d862:c.instructions+=53;goto B60d862;
case 0x60d865:c.instructions+=52;goto B60d865;
case 0x60d867:c.instructions+=51;goto B60d867;
case 0x60d86e:c.instructions+=50;goto B60d86e;
case 0x60d871:c.instructions+=49;goto B60d871;
case 0x60d874:c.instructions+=48;goto B60d874;
case 0x60d876:c.instructions+=47;goto B60d876;
case 0x60d879:c.instructions+=46;goto B60d879;
case 0x60d87c:c.instructions+=45;goto B60d87c;
case 0x60d87f:c.instructions+=44;goto B60d87f;
case 0x60d882:c.instructions+=43;goto B60d882;
case 0x60d886:c.instructions+=42;goto B60d886;
case 0x60d889:c.instructions+=41;goto B60d889;
case 0x60d88b:c.instructions+=40;goto B60d88b;
case 0x60d88e:c.instructions+=39;goto B60d88e;
case 0x60d890:c.instructions+=38;goto B60d890;
case 0x60d894:c.instructions+=37;goto B60d894;
case 0x60d896:c.instructions+=36;goto B60d896;
case 0x60d899:c.instructions+=35;goto B60d899;
case 0x60d89b:c.instructions+=34;goto B60d89b;
case 0x60d89f:c.instructions+=33;goto B60d89f;
case 0x60d8a2:c.instructions+=32;goto B60d8a2;
case 0x60d8a6:c.instructions+=31;goto B60d8a6;
case 0x60d8a8:c.instructions+=30;goto B60d8a8;
case 0x60d8ab:c.instructions+=29;goto B60d8ab;
case 0x60d8ad:c.instructions+=28;goto B60d8ad;
case 0x60d8b4:c.instructions+=27;goto B60d8b4;
case 0x60d8b6:c.instructions+=26;goto B60d8b6;
case 0x60d8bd:c.instructions+=25;goto B60d8bd;
case 0x60d8c0:c.instructions+=24;goto B60d8c0;
case 0x60d8c4:c.instructions+=23;goto B60d8c4;
case 0x60d8c6:c.instructions+=22;goto B60d8c6;
case 0x60d8ca:c.instructions+=21;goto B60d8ca;
case 0x60d8cc:c.instructions+=20;goto B60d8cc;
case 0x60d8d4:c.instructions+=19;goto B60d8d4;
case 0x60d8d6:c.instructions+=18;goto B60d8d6;
case 0x60d8d8:c.instructions+=17;goto B60d8d8;
case 0x60d8da:c.instructions+=16;goto B60d8da;
case 0x60d8de:c.instructions+=15;goto B60d8de;
case 0x60d8e4:c.instructions+=14;goto B60d8e4;
case 0x60d8eb:c.instructions+=13;goto B60d8eb;
case 0x60d8f1:c.instructions+=12;goto B60d8f1;
case 0x60d8f3:c.instructions+=11;goto B60d8f3;
case 0x60d8f5:c.instructions+=10;goto B60d8f5;
case 0x60d8fb:c.instructions+=9;goto B60d8fb;
case 0x60d8fd:c.instructions+=8;goto B60d8fd;
case 0x60d901:c.instructions+=7;goto B60d901;
case 0x60d907:c.instructions+=6;goto B60d907;
case 0x60d90b:c.instructions+=5;goto B60d90b;
case 0x60d90f:c.instructions+=4;goto B60d90f;
case 0x60d913:c.instructions+=3;goto B60d913;
case 0x60d915:c.instructions+=2;goto B60d915;
case 0x60d918:c.instructions+=1;goto B60d918;
case 0x60d91a:goto L60d91a;
case 0x60d91c:c.instructions+=5;goto B60d91c;
case 0x60d920:c.instructions+=4;goto B60d920;
case 0x60d924:c.instructions+=3;goto B60d924;
case 0x60d926:c.instructions+=2;goto B60d926;
case 0x60d929:c.instructions+=1;goto B60d929;
case 0x60d92b:goto L60d92b;
case 0x60d92f:c.instructions+=11;goto B60d92f;
case 0x60d933:c.instructions+=10;goto B60d933;
case 0x60d937:c.instructions+=9;goto B60d937;
case 0x60d93b:c.instructions+=8;goto B60d93b;
case 0x60d93d:c.instructions+=7;goto B60d93d;
case 0x60d943:c.instructions+=6;goto B60d943;
case 0x60d945:c.instructions+=5;goto B60d945;
case 0x60d947:c.instructions+=4;goto B60d947;
case 0x60d94d:c.instructions+=3;goto B60d94d;
case 0x60d94f:c.instructions+=2;goto B60d94f;
case 0x60d953:c.instructions+=1;goto B60d953;
case 0x60d955:goto L60d955;
case 0x60d95b:goto L60d95b;
case 0x60d95f:c.instructions+=9;goto B60d95f;
case 0x60d962:c.instructions+=8;goto B60d962;
case 0x60d965:c.instructions+=7;goto B60d965;
case 0x60d968:c.instructions+=6;goto B60d968;
case 0x60d96a:c.instructions+=5;goto B60d96a;
case 0x60d971:c.instructions+=4;goto B60d971;
case 0x60d975:c.instructions+=3;goto B60d975;
case 0x60d978:c.instructions+=2;goto B60d978;
case 0x60d97f:c.instructions+=1;goto B60d97f;
case 0x60d981:goto L60d981;
case 0x60d987:goto L60d987;
case 0x60d989:c.instructions+=1;goto B60d989;
case 0x60d98e:goto L60d98e;
case 0x60d990:c.instructions+=1;goto B60d990;
case 0x60d996:goto L60d996;
case 0x60d998:c.instructions+=3;goto B60d998;
case 0x60d99d:c.instructions+=2;goto B60d99d;
case 0x60d9a4:c.instructions+=1;goto B60d9a4;
case 0x60d9a6:goto L60d9a6;
case 0x60d9b1:goto L60d9b1;
case 0x60d9b4:c.instructions+=7;goto B60d9b4;
case 0x60d9b5:c.instructions+=6;goto B60d9b5;
case 0x60d9b7:c.instructions+=5;goto B60d9b7;
case 0x60d9b9:c.instructions+=4;goto B60d9b9;
case 0x60d9bb:c.instructions+=3;goto B60d9bb;
case 0x60d9bd:c.instructions+=2;goto B60d9bd;
case 0x60d9c4:c.instructions+=1;goto B60d9c4;
case 0x60d9ca:goto L60d9ca;
case 0x60d9ce:c.instructions+=51;goto B60d9ce;
case 0x60d9d1:c.instructions+=50;goto B60d9d1;
case 0x60d9d5:c.instructions+=49;goto B60d9d5;
case 0x60d9d7:c.instructions+=48;goto B60d9d7;
case 0x60d9da:c.instructions+=47;goto B60d9da;
case 0x60d9e1:c.instructions+=46;goto B60d9e1;
case 0x60d9e8:c.instructions+=45;goto B60d9e8;
case 0x60d9ea:c.instructions+=44;goto B60d9ea;
case 0x60d9ee:c.instructions+=43;goto B60d9ee;
case 0x60d9f1:c.instructions+=42;goto B60d9f1;
case 0x60d9f5:c.instructions+=41;goto B60d9f5;
case 0x60d9fc:c.instructions+=40;goto B60d9fc;
case 0x60da00:c.instructions+=39;goto B60da00;
case 0x60da04:c.instructions+=38;goto B60da04;
case 0x60da08:c.instructions+=37;goto B60da08;
case 0x60da0c:c.instructions+=36;goto B60da0c;
case 0x60da13:c.instructions+=35;goto B60da13;
case 0x60da1a:c.instructions+=34;goto B60da1a;
case 0x60da1c:c.instructions+=33;goto B60da1c;
case 0x60da23:c.instructions+=32;goto B60da23;
case 0x60da2a:c.instructions+=31;goto B60da2a;
case 0x60da31:c.instructions+=30;goto B60da31;
case 0x60da35:c.instructions+=29;goto B60da35;
case 0x60da39:c.instructions+=28;goto B60da39;
case 0x60da3d:c.instructions+=27;goto B60da3d;
case 0x60da41:c.instructions+=26;goto B60da41;
case 0x60da45:c.instructions+=25;goto B60da45;
case 0x60da49:c.instructions+=24;goto B60da49;
case 0x60da4d:c.instructions+=23;goto B60da4d;
case 0x60da51:c.instructions+=22;goto B60da51;
case 0x60da55:c.instructions+=21;goto B60da55;
case 0x60da59:c.instructions+=20;goto B60da59;
case 0x60da5b:c.instructions+=19;goto B60da5b;
case 0x60da5f:c.instructions+=18;goto B60da5f;
case 0x60da63:c.instructions+=17;goto B60da63;
case 0x60da65:c.instructions+=16;goto B60da65;
case 0x60da69:c.instructions+=15;goto B60da69;
case 0x60da6d:c.instructions+=14;goto B60da6d;
case 0x60da6f:c.instructions+=13;goto B60da6f;
case 0x60da73:c.instructions+=12;goto B60da73;
case 0x60da76:c.instructions+=11;goto B60da76;
case 0x60da79:c.instructions+=10;goto B60da79;
case 0x60da7d:c.instructions+=9;goto B60da7d;
case 0x60da7e:c.instructions+=8;goto B60da7e;
case 0x60da81:c.instructions+=7;goto B60da81;
case 0x60da82:c.instructions+=6;goto B60da82;
case 0x60da86:c.instructions+=5;goto B60da86;
case 0x60da87:c.instructions+=4;goto B60da87;
case 0x60da8f:c.instructions+=3;goto B60da8f;
case 0x60da97:c.instructions+=2;goto B60da97;
case 0x60da9f:c.instructions+=1;goto B60da9f;
case 0x60daa4:goto L60daa4;
case 0x60daa7:c.instructions+=6;goto B60daa7;
case 0x60daab:c.instructions+=5;goto B60daab;
case 0x60daac:c.instructions+=4;goto B60daac;
case 0x60daad:c.instructions+=3;goto B60daad;
case 0x60dab1:c.instructions+=2;goto B60dab1;
case 0x60dab2:c.instructions+=1;goto B60dab2;
case 0x60dab7:goto L60dab7;
case 0x60dabb:c.instructions+=20;goto B60dabb;
case 0x60dabd:c.instructions+=19;goto B60dabd;
case 0x60dac0:c.instructions+=18;goto B60dac0;
case 0x60dac4:c.instructions+=17;goto B60dac4;
case 0x60dac8:c.instructions+=16;goto B60dac8;
case 0x60dacc:c.instructions+=15;goto B60dacc;
case 0x60dacd:c.instructions+=14;goto B60dacd;
case 0x60dad1:c.instructions+=13;goto B60dad1;
case 0x60dad4:c.instructions+=12;goto B60dad4;
case 0x60dad7:c.instructions+=11;goto B60dad7;
case 0x60dad8:c.instructions+=10;goto B60dad8;
case 0x60dadc:c.instructions+=9;goto B60dadc;
case 0x60dadd:c.instructions+=8;goto B60dadd;
case 0x60dae1:c.instructions+=7;goto B60dae1;
case 0x60dae9:c.instructions+=6;goto B60dae9;
case 0x60daed:c.instructions+=5;goto B60daed;
case 0x60daf5:c.instructions+=4;goto B60daf5;
case 0x60daf8:c.instructions+=3;goto B60daf8;
case 0x60db00:c.instructions+=2;goto B60db00;
case 0x60db04:c.instructions+=1;goto B60db04;
case 0x60db09:goto L60db09;
case 0x60db0c:c.instructions+=6;goto B60db0c;
case 0x60db10:c.instructions+=5;goto B60db10;
case 0x60db11:c.instructions+=4;goto B60db11;
case 0x60db12:c.instructions+=3;goto B60db12;
case 0x60db16:c.instructions+=2;goto B60db16;
case 0x60db17:c.instructions+=1;goto B60db17;
case 0x60db1c:goto L60db1c;
case 0x60db20:c.instructions+=21;goto B60db20;
case 0x60db22:c.instructions+=20;goto B60db22;
case 0x60db25:c.instructions+=19;goto B60db25;
case 0x60db28:c.instructions+=18;goto B60db28;
case 0x60db2a:c.instructions+=17;goto B60db2a;
case 0x60db2e:c.instructions+=16;goto B60db2e;
case 0x60db32:c.instructions+=15;goto B60db32;
case 0x60db35:c.instructions+=14;goto B60db35;
case 0x60db39:c.instructions+=13;goto B60db39;
case 0x60db3d:c.instructions+=12;goto B60db3d;
case 0x60db40:c.instructions+=11;goto B60db40;
case 0x60db44:c.instructions+=10;goto B60db44;
case 0x60db48:c.instructions+=9;goto B60db48;
case 0x60db4c:c.instructions+=8;goto B60db4c;
case 0x60db53:c.instructions+=7;goto B60db53;
case 0x60db57:c.instructions+=6;goto B60db57;
case 0x60db5b:c.instructions+=5;goto B60db5b;
case 0x60db62:c.instructions+=4;goto B60db62;
case 0x60db66:c.instructions+=3;goto B60db66;
case 0x60db6a:c.instructions+=2;goto B60db6a;
case 0x60db71:c.instructions+=1;goto B60db71;
case 0x60db77:goto L60db77;
case 0x60db7a:c.instructions+=1;goto B60db7a;
case 0x60db80:goto L60db80;
case 0x60db87:c.instructions+=37;goto B60db87;
case 0x60db8d:c.instructions+=36;goto B60db8d;
case 0x60db8f:c.instructions+=35;goto B60db8f;
case 0x60db96:c.instructions+=34;goto B60db96;
case 0x60db9c:c.instructions+=33;goto B60db9c;
case 0x60dba3:c.instructions+=32;goto B60dba3;
case 0x60dbaa:c.instructions+=31;goto B60dbaa;
case 0x60dbb0:c.instructions+=30;goto B60dbb0;
case 0x60dbb7:c.instructions+=29;goto B60dbb7;
case 0x60dbbe:c.instructions+=28;goto B60dbbe;
case 0x60dbc5:c.instructions+=27;goto B60dbc5;
case 0x60dbc7:c.instructions+=26;goto B60dbc7;
case 0x60dbce:c.instructions+=25;goto B60dbce;
case 0x60dbd5:c.instructions+=24;goto B60dbd5;
case 0x60dbdc:c.instructions+=23;goto B60dbdc;
case 0x60dbe3:c.instructions+=22;goto B60dbe3;
case 0x60dbe7:c.instructions+=21;goto B60dbe7;
case 0x60dbeb:c.instructions+=20;goto B60dbeb;
case 0x60dbed:c.instructions+=19;goto B60dbed;
case 0x60dbf1:c.instructions+=18;goto B60dbf1;
case 0x60dbf5:c.instructions+=17;goto B60dbf5;
case 0x60dbf9:c.instructions+=16;goto B60dbf9;
case 0x60dbfd:c.instructions+=15;goto B60dbfd;
case 0x60dc04:c.instructions+=14;goto B60dc04;
case 0x60dc06:c.instructions+=13;goto B60dc06;
case 0x60dc0d:c.instructions+=12;goto B60dc0d;
case 0x60dc14:c.instructions+=11;goto B60dc14;
case 0x60dc18:c.instructions+=10;goto B60dc18;
case 0x60dc1f:c.instructions+=9;goto B60dc1f;
case 0x60dc23:c.instructions+=8;goto B60dc23;
case 0x60dc27:c.instructions+=7;goto B60dc27;
case 0x60dc29:c.instructions+=6;goto B60dc29;
case 0x60dc2d:c.instructions+=5;goto B60dc2d;
case 0x60dc31:c.instructions+=4;goto B60dc31;
case 0x60dc33:c.instructions+=3;goto B60dc33;
case 0x60dc37:c.instructions+=2;goto B60dc37;
case 0x60dc39:c.instructions+=1;goto B60dc39;
case 0x60dc3b:goto L60dc3b;
case 0x60dc3f:c.instructions+=5;goto B60dc3f;
case 0x60dc40:c.instructions+=4;goto B60dc40;
case 0x60dc47:c.instructions+=3;goto B60dc47;
case 0x60dc48:c.instructions+=2;goto B60dc48;
case 0x60dc4a:c.instructions+=1;goto B60dc4a;
case 0x60dc4f:goto L60dc4f;
case 0x60dc53:c.instructions+=5;goto B60dc53;
case 0x60dc54:c.instructions+=4;goto B60dc54;
case 0x60dc5b:c.instructions+=3;goto B60dc5b;
case 0x60dc5c:c.instructions+=2;goto B60dc5c;
case 0x60dc5e:c.instructions+=1;goto B60dc5e;
case 0x60dc63:goto L60dc63;
case 0x60dc6a:c.instructions+=10;goto B60dc6a;
case 0x60dc71:c.instructions+=9;goto B60dc71;
case 0x60dc75:c.instructions+=8;goto B60dc75;
case 0x60dc76:c.instructions+=7;goto B60dc76;
case 0x60dc7d:c.instructions+=6;goto B60dc7d;
case 0x60dc81:c.instructions+=5;goto B60dc81;
case 0x60dc82:c.instructions+=4;goto B60dc82;
case 0x60dc89:c.instructions+=3;goto B60dc89;
case 0x60dc90:c.instructions+=2;goto B60dc90;
case 0x60dc94:c.instructions+=1;goto B60dc94;
case 0x60dc99:goto L60dc99;
case 0x60dca0:c.instructions+=6;goto B60dca0;
case 0x60dca7:c.instructions+=5;goto B60dca7;
case 0x60dcab:c.instructions+=4;goto B60dcab;
case 0x60dcae:c.instructions+=3;goto B60dcae;
case 0x60dcb2:c.instructions+=2;goto B60dcb2;
case 0x60dcb6:c.instructions+=1;goto B60dcb6;
case 0x60dcbb:goto L60dcbb;
case 0x60dcbf:c.instructions+=148;goto B60dcbf;
case 0x60dcc3:c.instructions+=147;goto B60dcc3;
case 0x60dcc7:c.instructions+=146;goto B60dcc7;
case 0x60dccb:c.instructions+=145;goto B60dccb;
case 0x60dccf:c.instructions+=144;goto B60dccf;
case 0x60dcd3:c.instructions+=143;goto B60dcd3;
case 0x60dcd5:c.instructions+=142;goto B60dcd5;
case 0x60dcdc:c.instructions+=141;goto B60dcdc;
case 0x60dce0:c.instructions+=140;goto B60dce0;
case 0x60dce4:c.instructions+=139;goto B60dce4;
case 0x60dceb:c.instructions+=138;goto B60dceb;
case 0x60dcef:c.instructions+=137;goto B60dcef;
case 0x60dcf3:c.instructions+=136;goto B60dcf3;
case 0x60dcfa:c.instructions+=135;goto B60dcfa;
case 0x60dcfe:c.instructions+=134;goto B60dcfe;
case 0x60dd02:c.instructions+=133;goto B60dd02;
case 0x60dd06:c.instructions+=132;goto B60dd06;
case 0x60dd0d:c.instructions+=131;goto B60dd0d;
case 0x60dd11:c.instructions+=130;goto B60dd11;
case 0x60dd15:c.instructions+=129;goto B60dd15;
case 0x60dd19:c.instructions+=128;goto B60dd19;
case 0x60dd1d:c.instructions+=127;goto B60dd1d;
case 0x60dd1f:c.instructions+=126;goto B60dd1f;
case 0x60dd23:c.instructions+=125;goto B60dd23;
case 0x60dd27:c.instructions+=124;goto B60dd27;
case 0x60dd2e:c.instructions+=123;goto B60dd2e;
case 0x60dd32:c.instructions+=122;goto B60dd32;
case 0x60dd39:c.instructions+=121;goto B60dd39;
case 0x60dd3b:c.instructions+=120;goto B60dd3b;
case 0x60dd42:c.instructions+=119;goto B60dd42;
case 0x60dd49:c.instructions+=118;goto B60dd49;
case 0x60dd4d:c.instructions+=117;goto B60dd4d;
case 0x60dd54:c.instructions+=116;goto B60dd54;
case 0x60dd58:c.instructions+=115;goto B60dd58;
case 0x60dd5f:c.instructions+=114;goto B60dd5f;
case 0x60dd66:c.instructions+=113;goto B60dd66;
case 0x60dd6d:c.instructions+=112;goto B60dd6d;
case 0x60dd6f:c.instructions+=111;goto B60dd6f;
case 0x60dd76:c.instructions+=110;goto B60dd76;
case 0x60dd7a:c.instructions+=109;goto B60dd7a;
case 0x60dd81:c.instructions+=108;goto B60dd81;
case 0x60dd83:c.instructions+=107;goto B60dd83;
case 0x60dd8a:c.instructions+=106;goto B60dd8a;
case 0x60dd91:c.instructions+=105;goto B60dd91;
case 0x60dd98:c.instructions+=104;goto B60dd98;
case 0x60dd9f:c.instructions+=103;goto B60dd9f;
case 0x60dda3:c.instructions+=102;goto B60dda3;
case 0x60ddaa:c.instructions+=101;goto B60ddaa;
case 0x60ddb1:c.instructions+=100;goto B60ddb1;
case 0x60ddb5:c.instructions+=99;goto B60ddb5;
case 0x60ddb9:c.instructions+=98;goto B60ddb9;
case 0x60ddbd:c.instructions+=97;goto B60ddbd;
case 0x60ddc4:c.instructions+=96;goto B60ddc4;
case 0x60ddcb:c.instructions+=95;goto B60ddcb;
case 0x60ddcf:c.instructions+=94;goto B60ddcf;
case 0x60ddd3:c.instructions+=93;goto B60ddd3;
case 0x60ddda:c.instructions+=92;goto B60ddda;
case 0x60dde1:c.instructions+=91;goto B60dde1;
case 0x60dde5:c.instructions+=90;goto B60dde5;
case 0x60ddec:c.instructions+=89;goto B60ddec;
case 0x60ddf3:c.instructions+=88;goto B60ddf3;
case 0x60ddf5:c.instructions+=87;goto B60ddf5;
case 0x60ddfc:c.instructions+=86;goto B60ddfc;
case 0x60de03:c.instructions+=85;goto B60de03;
case 0x60de05:c.instructions+=84;goto B60de05;
case 0x60de0c:c.instructions+=83;goto B60de0c;
case 0x60de13:c.instructions+=82;goto B60de13;
case 0x60de17:c.instructions+=81;goto B60de17;
case 0x60de1e:c.instructions+=80;goto B60de1e;
case 0x60de25:c.instructions+=79;goto B60de25;
case 0x60de29:c.instructions+=78;goto B60de29;
case 0x60de30:c.instructions+=77;goto B60de30;
case 0x60de34:c.instructions+=76;goto B60de34;
case 0x60de3b:c.instructions+=75;goto B60de3b;
case 0x60de3f:c.instructions+=74;goto B60de3f;
case 0x60de46:c.instructions+=73;goto B60de46;
case 0x60de4d:c.instructions+=72;goto B60de4d;
case 0x60de4f:c.instructions+=71;goto B60de4f;
case 0x60de56:c.instructions+=70;goto B60de56;
case 0x60de5d:c.instructions+=69;goto B60de5d;
case 0x60de61:c.instructions+=68;goto B60de61;
case 0x60de68:c.instructions+=67;goto B60de68;
case 0x60de6f:c.instructions+=66;goto B60de6f;
case 0x60de76:c.instructions+=65;goto B60de76;
case 0x60de7d:c.instructions+=64;goto B60de7d;
case 0x60de7f:c.instructions+=63;goto B60de7f;
case 0x60de81:c.instructions+=62;goto B60de81;
case 0x60de88:c.instructions+=61;goto B60de88;
case 0x60de8a:c.instructions+=60;goto B60de8a;
case 0x60de91:c.instructions+=59;goto B60de91;
case 0x60de98:c.instructions+=58;goto B60de98;
case 0x60de9c:c.instructions+=57;goto B60de9c;
case 0x60dea0:c.instructions+=56;goto B60dea0;
case 0x60dea2:c.instructions+=55;goto B60dea2;
case 0x60dea9:c.instructions+=54;goto B60dea9;
case 0x60deb0:c.instructions+=53;goto B60deb0;
case 0x60deb7:c.instructions+=52;goto B60deb7;
case 0x60debb:c.instructions+=51;goto B60debb;
case 0x60dec2:c.instructions+=50;goto B60dec2;
case 0x60dec6:c.instructions+=49;goto B60dec6;
case 0x60decd:c.instructions+=48;goto B60decd;
case 0x60ded1:c.instructions+=47;goto B60ded1;
case 0x60ded8:c.instructions+=46;goto B60ded8;
case 0x60deda:c.instructions+=45;goto B60deda;
case 0x60dee1:c.instructions+=44;goto B60dee1;
case 0x60dee8:c.instructions+=43;goto B60dee8;
case 0x60deef:c.instructions+=42;goto B60deef;
case 0x60def6:c.instructions+=41;goto B60def6;
case 0x60defd:c.instructions+=40;goto B60defd;
case 0x60df04:c.instructions+=39;goto B60df04;
case 0x60df06:c.instructions+=38;goto B60df06;
case 0x60df0d:c.instructions+=37;goto B60df0d;
case 0x60df14:c.instructions+=36;goto B60df14;
case 0x60df16:c.instructions+=35;goto B60df16;
case 0x60df18:c.instructions+=34;goto B60df18;
case 0x60df1a:c.instructions+=33;goto B60df1a;
case 0x60df1e:c.instructions+=32;goto B60df1e;
case 0x60df22:c.instructions+=31;goto B60df22;
case 0x60df29:c.instructions+=30;goto B60df29;
case 0x60df2d:c.instructions+=29;goto B60df2d;
case 0x60df34:c.instructions+=28;goto B60df34;
case 0x60df38:c.instructions+=27;goto B60df38;
case 0x60df3f:c.instructions+=26;goto B60df3f;
case 0x60df46:c.instructions+=25;goto B60df46;
case 0x60df48:c.instructions+=24;goto B60df48;
case 0x60df4f:c.instructions+=23;goto B60df4f;
case 0x60df56:c.instructions+=22;goto B60df56;
case 0x60df5d:c.instructions+=21;goto B60df5d;
case 0x60df64:c.instructions+=20;goto B60df64;
case 0x60df68:c.instructions+=19;goto B60df68;
case 0x60df6f:c.instructions+=18;goto B60df6f;
case 0x60df73:c.instructions+=17;goto B60df73;
case 0x60df7e:c.instructions+=16;goto B60df7e;
case 0x60df85:c.instructions+=15;goto B60df85;
case 0x60df90:c.instructions+=14;goto B60df90;
case 0x60df94:c.instructions+=13;goto B60df94;
case 0x60df9f:c.instructions+=12;goto B60df9f;
case 0x60dfaa:c.instructions+=11;goto B60dfaa;
case 0x60dfb5:c.instructions+=10;goto B60dfb5;
case 0x60dfbc:c.instructions+=9;goto B60dfbc;
case 0x60dfc3:c.instructions+=8;goto B60dfc3;
case 0x60dfc5:c.instructions+=7;goto B60dfc5;
case 0x60dfcc:c.instructions+=6;goto B60dfcc;
case 0x60dfd3:c.instructions+=5;goto B60dfd3;
case 0x60dfde:c.instructions+=4;goto B60dfde;
case 0x60dfe5:c.instructions+=3;goto B60dfe5;
case 0x60dff0:c.instructions+=2;goto B60dff0;
case 0x60dff7:c.instructions+=1;goto B60dff7;
default:missing_instruction(c.pc);}
B60d000:L60d000:{c.instructions+=11;NFSU2_TR(0x60d000);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60d001:{NFSU2_TR(0x60d001);
__builtin_memmove((R+20),(R+16),4);
}
B60d003:{NFSU2_TR(0x60d003);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60d004:{NFSU2_TR(0x60d004);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60d005:{NFSU2_TR(0x60d005);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60d006:{NFSU2_TR(0x60d006);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60d007:{NFSU2_TR(0x60d007);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B60d00a:{NFSU2_TR(0x60d00a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B60d00c:{NFSU2_TR(0x60d00c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B60d00e:{NFSU2_TR(0x60d00e);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B60d010:{NFSU2_TR(0x60d010);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L60d026;}}
}
B60d012:L60d012:{c.instructions+=1;NFSU2_TR(0x60d012);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B60d015:L60d015:{c.instructions+=6;NFSU2_TR(0x60d015);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x89e868ull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B60d01c:{NFSU2_TR(0x60d01c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B60d01e:{NFSU2_TR(0x60d01e);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B60d01f:{NFSU2_TR(0x60d01f);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B60d022:{NFSU2_TR(0x60d022);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B60d024:{NFSU2_TR(0x60d024);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x60d015u);}goto L60d015;}}
}
B60d026:L60d026:{c.instructions+=5;NFSU2_TR(0x60d026);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+24),(U+0),4);
}
B60d028:{NFSU2_TR(0x60d028);
u8 U[4];
w4(U+0,u32(0x60ce60ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60d02d:{NFSU2_TR(0x60d02d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60d02e:{NFSU2_TR(0x60d02e);
u8 U[4];
w4(U+0,u32(0x89e868ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60d033:{NFSU2_TR(0x60d033);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60d038ull));
TAIL_STATIC(0x60cee0u,60c);
}
B60d038:L60d038:{c.instructions+=10;NFSU2_TR(0x60d038);
__builtin_memmove((R+12),(R+0),4);
}
B60d03a:{NFSU2_TR(0x60d03a);
__builtin_memmove((R+0),gp(0x89e868),4);
}
B60d03f:{NFSU2_TR(0x60d03f);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x89e868ull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B60d046:{NFSU2_TR(0x60d046);
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+12))));
}
B60d048:{NFSU2_TR(0x60d048);
u8 U[4];
w4(U+0,u32(0x60cec0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60d04d:{NFSU2_TR(0x60d04d);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B60d04e:{NFSU2_TR(0x60d04e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x89e868ull))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B60d055:{NFSU2_TR(0x60d055);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60d056:{NFSU2_TR(0x60d056);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60d057:{NFSU2_TR(0x60d057);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60d05cull));
TAIL_STATIC(0x60cee0u,60c);
}
B60d05c:L60d05c:{c.instructions+=7;NFSU2_TR(0x60d05c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B60d05f:{NFSU2_TR(0x60d05f);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+12))));
}
B60d061:{NFSU2_TR(0x60d061);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B60d064:{NFSU2_TR(0x60d064);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B60d066:{NFSU2_TR(0x60d066);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B60d068:{NFSU2_TR(0x60d068);
w4(R+24,u32(0x8a2cf0ull));
}
B60d06d:{NFSU2_TR(0x60d06d);
if(r1(R+518)){{goto L60d11b;}}
}
B60d073:L60d073:{c.instructions+=14;NFSU2_TR(0x60d073);
__builtin_memmove((R+0),gp(0x89e868),4);
}
B60d078:{NFSU2_TR(0x60d078);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60d07b:{NFSU2_TR(0x60d07b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B60d07d:{NFSU2_TR(0x60d07d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60d080:{NFSU2_TR(0x60d080);
{u32 ea_=u32(u32(9055476u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60d086:{NFSU2_TR(0x60d086);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfull))));
__builtin_memmove((R+4),(U+0),4);
}
B60d089:{NFSU2_TR(0x60d089);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60d08a:{NFSU2_TR(0x60d08a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B60d08d:{NFSU2_TR(0x60d08d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60d08f:{NFSU2_TR(0x60d08f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60d091:{NFSU2_TR(0x60d091);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60d092:{NFSU2_TR(0x60d092);
__builtin_memmove(gp(0x8a2cf0),(R+8),4);
}
B60d098:{NFSU2_TR(0x60d098);
__builtin_memmove(gp(0x8a2cf8),(R+0),4);
}
B60d09d:{NFSU2_TR(0x60d09d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60d0a2ull));
TAIL_STATIC(0x5e7e70u,5e7);
}
B60d0a2:L60d0a2:{c.instructions+=8;NFSU2_TR(0x60d0a2);
{u32 ea_=u32(r4(R+20)+u32(24u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B60d0a5:{NFSU2_TR(0x60d0a5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B60d0a7:{NFSU2_TR(0x60d0a7);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B60d0a9:{NFSU2_TR(0x60d0a9);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B60d0ab:{NFSU2_TR(0x60d0ab);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60d0ae:{NFSU2_TR(0x60d0ae);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B60d0b0:{NFSU2_TR(0x60d0b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60d0b3:{NFSU2_TR(0x60d0b3);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L60d1a3;}}
}
B60d0b9:L60d0b9:{c.instructions+=1;NFSU2_TR(0x60d0b9);
__builtin_memmove((R+16),(R+16),4);
}
B60d0c0:L60d0c0:{c.instructions+=10;NFSU2_TR(0x60d0c0);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x89e868ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B60d0c7:{NFSU2_TR(0x60d0c7);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60d0ca:{NFSU2_TR(0x60d0ca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B60d0cc:{NFSU2_TR(0x60d0cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60d0cf:{NFSU2_TR(0x60d0cf);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60d0d2:{NFSU2_TR(0x60d0d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60d0d5:{NFSU2_TR(0x60d0d5);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B60d0d8:{NFSU2_TR(0x60d0d8);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B60d0da:{NFSU2_TR(0x60d0da);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+24)),r4(U+0));
}
B60d0dc:{NFSU2_TR(0x60d0dc);
if(r1(R+518)){{goto L60d105;}}
}
B60d0de:L60d0de:{c.instructions+=7;NFSU2_TR(0x60d0de);
{u32 ea_=u32(r4(R+20)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60d0e1:{NFSU2_TR(0x60d0e1);
{u32 ea_=u32(r4(R+20)+u32(20u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B60d0e4:{NFSU2_TR(0x60d0e4);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B60d0e6:{NFSU2_TR(0x60d0e6);
{u32 ea_=u32(u32(8021580u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B60d0ec:{NFSU2_TR(0x60d0ec);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B60d0ee:{NFSU2_TR(0x60d0ee);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B60d0f1:{NFSU2_TR(0x60d0f1);
if(r1(R+514)){{goto L60d105;}}
}
B60d0f3:L60d0f3:{c.instructions+=2;NFSU2_TR(0x60d0f3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60d0f4:{NFSU2_TR(0x60d0f4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60d0f9ull));
TAIL_STATIC(0x60cf90u,60c);
}
B60d0f9:L60d0f9:{c.instructions+=3;NFSU2_TR(0x60d0f9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B60d0fc:{NFSU2_TR(0x60d0fc);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B60d0fe:{NFSU2_TR(0x60d0fe);
if(r1(R+518)){{goto L60d105;}}
}
B60d100:L60d100:{c.instructions+=2;NFSU2_TR(0x60d100);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
}
B60d103:{NFSU2_TR(0x60d103);
{goto L60d108;}
}
B60d105:L60d105:{c.instructions+=1;NFSU2_TR(0x60d105);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B60d108:L60d108:{c.instructions+=4;NFSU2_TR(0x60d108);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B60d10a:{NFSU2_TR(0x60d10a);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B60d10b:{NFSU2_TR(0x60d10b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B60d10d:{NFSU2_TR(0x60d10d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x60d0c0u);}goto L60d0c0;}}
}
B60d10f:L60d10f:{c.instructions+=1;NFSU2_TR(0x60d10f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B60d112:L60d112:{c.instructions+=7;NFSU2_TR(0x60d112);
u8 U[10];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
w1(R+512,u8((r4(U+0))<(r4(R+4))));
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
w1(R+523,sborrow<u32>(r4(U+0),r4(R+4)));
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
w4(U+0,u32(u32(r4(U+0))-u32(r4(R+4))));
s4(u32(r4(R+28)),r4(U+0));
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
w4(U+4,u32(u32(r4(U+0))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B60d114:{NFSU2_TR(0x60d114);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B60d115:{NFSU2_TR(0x60d115);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B60d116:{NFSU2_TR(0x60d116);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B60d117:{NFSU2_TR(0x60d117);
__builtin_memmove((R+16),(R+20),4);
}
B60d119:{NFSU2_TR(0x60d119);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B60d11a:{NFSU2_TR(0x60d11a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B60d11b:L60d11b:{c.instructions+=5;NFSU2_TR(0x60d11b);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B60d11d:{NFSU2_TR(0x60d11d);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B60d11f:{NFSU2_TR(0x60d11f);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B60d121:{NFSU2_TR(0x60d121);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60d124:{NFSU2_TR(0x60d124);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x60d112u);}goto L60d112;}}
}
B60d126:L60d126:{c.instructions+=1;NFSU2_TR(0x60d126);
{goto L60d130;}
}
B60d130:L60d130:{c.instructions+=14;NFSU2_TR(0x60d130);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x89e868ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B60d137:{NFSU2_TR(0x60d137);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60d13a:{NFSU2_TR(0x60d13a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B60d13c:{NFSU2_TR(0x60d13c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60d13f:{NFSU2_TR(0x60d13f);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60d142:{NFSU2_TR(0x60d142);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfull))));
__builtin_memmove((R+4),(U+0),4);
}
B60d145:{NFSU2_TR(0x60d145);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60d146:{NFSU2_TR(0x60d146);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B60d149:{NFSU2_TR(0x60d149);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60d14b:{NFSU2_TR(0x60d14b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60d14d:{NFSU2_TR(0x60d14d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60d14e:{NFSU2_TR(0x60d14e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+24)),r4(U+0));
}
B60d150:{NFSU2_TR(0x60d150);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60d153:{NFSU2_TR(0x60d153);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60d158ull));
TAIL_STATIC(0x5e7e70u,5e7);
}
B60d158:L60d158:{c.instructions+=5;NFSU2_TR(0x60d158);
{u32 ea_=u32(r4(R+20)+u32(24u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B60d15b:{NFSU2_TR(0x60d15b);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B60d15e:{NFSU2_TR(0x60d15e);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B60d160:{NFSU2_TR(0x60d160);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B60d163:{NFSU2_TR(0x60d163);
if(r1(R+518)){{goto L60d189;}}
}
B60d165:L60d165:{c.instructions+=6;NFSU2_TR(0x60d165);
{u32 ea_=u32(r4(R+20)+u32(20u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B60d168:{NFSU2_TR(0x60d168);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B60d16a:{NFSU2_TR(0x60d16a);
{u32 ea_=u32(u32(8021580u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B60d170:{NFSU2_TR(0x60d170);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B60d172:{NFSU2_TR(0x60d172);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B60d175:{NFSU2_TR(0x60d175);
if(r1(R+514)){{goto L60d18b;}}
}
B60d177:L60d177:{c.instructions+=2;NFSU2_TR(0x60d177);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60d178:{NFSU2_TR(0x60d178);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60d17dull));
TAIL_STATIC(0x60cf90u,60c);
}
B60d17d:L60d17d:{c.instructions+=3;NFSU2_TR(0x60d17d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B60d180:{NFSU2_TR(0x60d180);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B60d182:{NFSU2_TR(0x60d182);
if(r1(R+518)){{goto L60d18b;}}
}
B60d184:L60d184:{c.instructions+=2;NFSU2_TR(0x60d184);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
}
B60d187:{NFSU2_TR(0x60d187);
{goto L60d18e;}
}
B60d189:L60d189:{c.instructions+=1;NFSU2_TR(0x60d189);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B60d18b:L60d18b:{c.instructions+=1;NFSU2_TR(0x60d18b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B60d18e:L60d18e:{c.instructions+=4;NFSU2_TR(0x60d18e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B60d190:{NFSU2_TR(0x60d190);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B60d191:{NFSU2_TR(0x60d191);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B60d193:{NFSU2_TR(0x60d193);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x60d130u);}goto L60d130;}}
}
B60d195:L60d195:{c.instructions+=9;NFSU2_TR(0x60d195);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B60d198:{NFSU2_TR(0x60d198);
u8 U[6];
w1(R+512,u8((r4(R+0))<(r4(R+8))));
w1(R+523,sborrow<u32>(r4(R+0),r4(R+8)));
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B60d19a:{NFSU2_TR(0x60d19a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+28)),r4(U+0));
}
B60d19c:{NFSU2_TR(0x60d19c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B60d19d:{NFSU2_TR(0x60d19d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B60d19e:{NFSU2_TR(0x60d19e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B60d19f:{NFSU2_TR(0x60d19f);
__builtin_memmove((R+16),(R+20),4);
}
B60d1a1:{NFSU2_TR(0x60d1a1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B60d1a2:{NFSU2_TR(0x60d1a2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B60d1a3:L60d1a3:{c.instructions+=7;NFSU2_TR(0x60d1a3);
u8 U[10];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
w1(R+512,u8((r4(U+0))<(r4(R+0))));
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
w1(R+523,sborrow<u32>(r4(U+0),r4(R+0)));
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
w4(U+0,u32(u32(r4(U+0))-u32(r4(R+0))));
s4(u32(r4(R+28)),r4(U+0));
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
w4(U+4,u32(u32(r4(U+0))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B60d1a5:{NFSU2_TR(0x60d1a5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B60d1a6:{NFSU2_TR(0x60d1a6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B60d1a7:{NFSU2_TR(0x60d1a7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B60d1a8:{NFSU2_TR(0x60d1a8);
__builtin_memmove((R+16),(R+20),4);
}
B60d1aa:{NFSU2_TR(0x60d1aa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B60d1ab:{NFSU2_TR(0x60d1ab);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B60d1b0:L60d1b0:{c.instructions+=33;NFSU2_TR(0x60d1b0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60d1b1:{NFSU2_TR(0x60d1b1);
__builtin_memmove((R+20),(R+16),4);
}
B60d1b3:{NFSU2_TR(0x60d1b3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B60d1b6:{NFSU2_TR(0x60d1b6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x74ull))));
}
B60d1b9:{NFSU2_TR(0x60d1b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B60d1bc:{NFSU2_TR(0x60d1bc);
{u32 ea_=u32(u32(9055472u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60d1c2:{NFSU2_TR(0x60d1c2);
__builtin_memmove((R+0),(R+8),4);
}
B60d1c4:{NFSU2_TR(0x60d1c4);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B60d1c7:{NFSU2_TR(0x60d1c7);
{u32 ea_=u32(r4(R+0)+u32(9055456u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B60d1cd:{NFSU2_TR(0x60d1cd);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8a2ce0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B60d1d3:{NFSU2_TR(0x60d1d3);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60d1d6:{NFSU2_TR(0x60d1d6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60d1d7:{NFSU2_TR(0x60d1d7);
{u32 ea_=u32(u32(9055476u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B60d1dd:{NFSU2_TR(0x60d1dd);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60d1e0:{NFSU2_TR(0x60d1e0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60d1e1:{NFSU2_TR(0x60d1e1);
{u32 ea_=u32(u32(9055480u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B60d1e7:{NFSU2_TR(0x60d1e7);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B60d1e9:{NFSU2_TR(0x60d1e9);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B60d1eb:{NFSU2_TR(0x60d1eb);
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
B60d1ed:{NFSU2_TR(0x60d1ed);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60d1f1:{NFSU2_TR(0x60d1f1);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B60d1f3:{NFSU2_TR(0x60d1f3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60d1f4:{NFSU2_TR(0x60d1f4);
{u32 ea_=u32(r4(R+16)+u32(112u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60d1f8:{NFSU2_TR(0x60d1f8);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60d1fc:{NFSU2_TR(0x60d1fc);
{u32 ea_=u32(r4(R+16)+u32(112u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60d200:{NFSU2_TR(0x60d200);
{u32 ea_=u32(u32(8021792u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60d206:{NFSU2_TR(0x60d206);
{u32 ea_=u32(r4(R+16)+u32(112u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60d20a:{NFSU2_TR(0x60d20a);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B60d20c:{NFSU2_TR(0x60d20c);
{u32 ea_=u32(u32(8021792u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60d212:{NFSU2_TR(0x60d212);
{u32 ea_=u32(r4(R+16)+u32(116u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60d216:{NFSU2_TR(0x60d216);
{u32 ea_=u32(u32(8021792u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60d21c:{NFSU2_TR(0x60d21c);
{u32 ea_=u32(r4(R+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60d220:{NFSU2_TR(0x60d220);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L60d33c;}}
}
B60d226:L60d226:{c.instructions+=4;NFSU2_TR(0x60d226);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B60d229:{NFSU2_TR(0x60d229);
w4(R+28,u32(0x8a2cf8ull));
}
B60d22e:{NFSU2_TR(0x60d22e);
w4(R+24,u32(0x8a1f58ull));
}
B60d233:{NFSU2_TR(0x60d233);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60d237:L60d237:{c.instructions+=9;NFSU2_TR(0x60d237);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B60d23a:{NFSU2_TR(0x60d23a);
__builtin_memmove((R+0),(R+4),4);
}
B60d23c:{NFSU2_TR(0x60d23c);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x1ull))));
}
B60d23f:{NFSU2_TR(0x60d23f);
__builtin_memmove((R+12),(R+0),4);
}
B60d241:{NFSU2_TR(0x60d241);
w4(R+12,u32(u32(r4(R+12))^u32(u32(0x1ull))));
}
B60d244:{NFSU2_TR(0x60d244);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B60d245:{NFSU2_TR(0x60d245);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B60d247:{NFSU2_TR(0x60d247);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60d24b:{NFSU2_TR(0x60d24b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L60d24f;}}
}
B60d24d:L60d24d:{c.instructions+=1;NFSU2_TR(0x60d24d);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B60d24f:L60d24f:{c.instructions+=69;NFSU2_TR(0x60d24f);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B60d252:{NFSU2_TR(0x60d252);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0x8a2cf0ull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0x8a2cf0ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x8a2cf0ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B60d258:{NFSU2_TR(0x60d258);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60d25a:{NFSU2_TR(0x60d25a);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+8),(U+0),4);
}
B60d25d:{NFSU2_TR(0x60d25d);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B60d25f:{NFSU2_TR(0x60d25f);
u8 U[45];
w4(U+37,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
__builtin_memmove((U+41),(R+0),4);
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+37))));
w1(U+24,u8((r4(U+37))==(u32(0x0ull))));
w4(U+25,u32(u32(r4(U+37))-u32(u32(0x1ull))));
w4(U+29,shl<u32>(r4(U+41),u64(r4(U+25))));
w1(U+33,u8(s32(r4(U+29))<s32(u32(0x0ull))));
__builtin_memmove((U+0),(U+24),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(R+512))));
w1(U+2,u8(!(r1(U+24))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+33))));
w1(R+512,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+34,u8((r4(U+37))==(u32(0x1ull))));
w1(U+35,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(U+36,u8(u32(r1(R+512))^u32(r1(U+35))));
__builtin_memmove((U+0),(U+34),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(U+36))));
w1(U+2,u8(!(r1(U+34))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(R+523))));
w1(R+523,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+37))!=(u32(0x0ull))));
w1(U+6,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(U+7,u8(!(r1(U+5))));
w1(U+8,u8(u32(r1(U+7))&u32(r1(R+519))));
w1(U+9,u8(u32(r1(U+5))&u32(r1(U+6))));
w1(R+519,u8(u32(r1(U+8))|u32(r1(U+9))));
w1(U+10,u8((r4(R+0))==(u32(0x0ull))));
w1(U+11,u8(!(r1(U+5))));
w1(U+12,u8(u32(r1(U+11))&u32(r1(R+518))));
w1(U+13,u8(u32(r1(U+5))&u32(r1(U+10))));
w1(R+518,u8(u32(r1(U+12))|u32(r1(U+13))));
w4(U+14,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+18,u8(__builtin_popcountll(u64(r4(U+14)))));
w1(U+19,u8(u32(r1(U+18))&u32(u8(0x1ull))));
w1(U+20,u8((r1(U+19))==(u8(0x0ull))));
w1(U+21,u8(!(r1(U+5))));
w1(U+22,u8(u32(r1(U+21))&u32(r1(R+514))));
w1(U+23,u8(u32(r1(U+5))&u32(r1(U+20))));
w1(R+514,u8(u32(r1(U+22))|u32(r1(U+23))));
}
B60d262:{NFSU2_TR(0x60d262);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60d265:{NFSU2_TR(0x60d265);
u8 U[12];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B60d269:{NFSU2_TR(0x60d269);
{u32 ea_=u32(r4(R+28)+u32(4294967292u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B60d26c:{NFSU2_TR(0x60d26c);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60d26f:{NFSU2_TR(0x60d26f);
u8 U[45];
w4(U+37,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
__builtin_memmove((U+41),(R+12),4);
w4(R+12,shl<u32>(r4(R+12),u64(r4(U+37))));
w1(U+24,u8((r4(U+37))==(u32(0x0ull))));
w4(U+25,u32(u32(r4(U+37))-u32(u32(0x1ull))));
w4(U+29,shl<u32>(r4(U+41),u64(r4(U+25))));
w1(U+33,u8(s32(r4(U+29))<s32(u32(0x0ull))));
__builtin_memmove((U+0),(U+24),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(R+512))));
w1(U+2,u8(!(r1(U+24))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+33))));
w1(R+512,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+34,u8((r4(U+37))==(u32(0x1ull))));
w1(U+35,u8(s32(r4(R+12))<s32(u32(0x0ull))));
w1(U+36,u8(u32(r1(R+512))^u32(r1(U+35))));
__builtin_memmove((U+0),(U+34),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(U+36))));
w1(U+2,u8(!(r1(U+34))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(R+523))));
w1(R+523,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+37))!=(u32(0x0ull))));
w1(U+6,u8(s32(r4(R+12))<s32(u32(0x0ull))));
w1(U+7,u8(!(r1(U+5))));
w1(U+8,u8(u32(r1(U+7))&u32(r1(R+519))));
w1(U+9,u8(u32(r1(U+5))&u32(r1(U+6))));
w1(R+519,u8(u32(r1(U+8))|u32(r1(U+9))));
w1(U+10,u8((r4(R+12))==(u32(0x0ull))));
w1(U+11,u8(!(r1(U+5))));
w1(U+12,u8(u32(r1(U+11))&u32(r1(R+518))));
w1(U+13,u8(u32(r1(U+5))&u32(r1(U+10))));
w1(R+518,u8(u32(r1(U+12))|u32(r1(U+13))));
w4(U+14,u32(u32(r4(R+12))&u32(u32(0xffull))));
w1(U+18,u8(__builtin_popcountll(u64(r4(U+14)))));
w1(U+19,u8(u32(r1(U+18))&u32(u8(0x1ull))));
w1(U+20,u8((r1(U+19))==(u8(0x0ull))));
w1(U+21,u8(!(r1(U+5))));
w1(U+22,u8(u32(r1(U+21))&u32(r1(R+514))));
w1(U+23,u8(u32(r1(U+5))&u32(r1(U+20))));
w1(R+514,u8(u32(r1(U+22))|u32(r1(U+23))));
}
B60d272:{NFSU2_TR(0x60d272);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B60d274:{NFSU2_TR(0x60d274);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60d278:{NFSU2_TR(0x60d278);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B60d27c:{NFSU2_TR(0x60d27c);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B60d27e:{NFSU2_TR(0x60d27e);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60d280:{NFSU2_TR(0x60d280);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60d283:{NFSU2_TR(0x60d283);
u8 U[12];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B60d287:{NFSU2_TR(0x60d287);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60d28a:{NFSU2_TR(0x60d28a);
{u32 ea_=u32(u32(8021792u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60d290:{NFSU2_TR(0x60d290);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60d292:{NFSU2_TR(0x60d292);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60d294:{NFSU2_TR(0x60d294);
{u32 ea_=u32(u32(8021792u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60d29a:{NFSU2_TR(0x60d29a);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60d29d:{NFSU2_TR(0x60d29d);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60d2a0:{NFSU2_TR(0x60d2a0);
{u32 ea_=u32(u32(8021792u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60d2a6:{NFSU2_TR(0x60d2a6);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60d2a9:{NFSU2_TR(0x60d2a9);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60d2ac:{NFSU2_TR(0x60d2ac);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60d2ae:{NFSU2_TR(0x60d2ae);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B60d2b0:{NFSU2_TR(0x60d2b0);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60d2b3:{NFSU2_TR(0x60d2b3);
{u32 ea_=u32(r4(R+28)+u32(4294967292u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B60d2b6:{NFSU2_TR(0x60d2b6);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60d2b9:{NFSU2_TR(0x60d2b9);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B60d2bb:{NFSU2_TR(0x60d2bb);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60d2bf:{NFSU2_TR(0x60d2bf);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B60d2c3:{NFSU2_TR(0x60d2c3);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B60d2c5:{NFSU2_TR(0x60d2c5);
{u32 ea_=u32(r4(R+24)+u32(4294967288u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60d2c8:{NFSU2_TR(0x60d2c8);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+24)),r4(U+0));
}
B60d2ca:{NFSU2_TR(0x60d2ca);
{u32 ea_=u32(r4(R+24)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60d2cd:{NFSU2_TR(0x60d2cd);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60d2cf:{NFSU2_TR(0x60d2cf);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B60d2d1:{NFSU2_TR(0x60d2d1);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60d2d4:{NFSU2_TR(0x60d2d4);
{u32 ea_=u32(r4(R+28)+u32(4294967292u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B60d2d7:{NFSU2_TR(0x60d2d7);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60d2da:{NFSU2_TR(0x60d2da);
{u32 ea_=u32(r4(R+28));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B60d2dc:{NFSU2_TR(0x60d2dc);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60d2e0:{NFSU2_TR(0x60d2e0);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B60d2e4:{NFSU2_TR(0x60d2e4);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B60d2e6:{NFSU2_TR(0x60d2e6);
{u32 ea_=u32(r4(R+24)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60d2e9:{NFSU2_TR(0x60d2e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60d2ec:{NFSU2_TR(0x60d2ec);
{u32 ea_=u32(r4(R+24)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60d2ef:{NFSU2_TR(0x60d2ef);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60d2f1:{NFSU2_TR(0x60d2f1);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B60d2f3:{NFSU2_TR(0x60d2f3);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60d2f7:{NFSU2_TR(0x60d2f7);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60d2fa:{NFSU2_TR(0x60d2fa);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B60d2fd:{NFSU2_TR(0x60d2fd);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60d301:{NFSU2_TR(0x60d301);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60d304:{NFSU2_TR(0x60d304);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B60d307:{NFSU2_TR(0x60d307);
__builtin_memmove((R+0),gp(0x7a6724),4);
}
B60d30c:{NFSU2_TR(0x60d30c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60d30d:{NFSU2_TR(0x60d30d);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B60d311:{NFSU2_TR(0x60d311);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60d312:{NFSU2_TR(0x60d312);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60d313:{NFSU2_TR(0x60d313);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((R+8),(U+0),4);
}
B60d316:{NFSU2_TR(0x60d316);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60d31a:{NFSU2_TR(0x60d31a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60d31b:{NFSU2_TR(0x60d31b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60d320ull));
TAIL_STATIC(0x43d0c0u,43d);
}
B60d320:L60d320:{c.instructions+=7;NFSU2_TR(0x60d320);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B60d324:{NFSU2_TR(0x60d324);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60d327:{NFSU2_TR(0x60d327);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B60d32a:{NFSU2_TR(0x60d32a);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x30ull))));
}
B60d32d:{NFSU2_TR(0x60d32d);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B60d330:{NFSU2_TR(0x60d330);
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
B60d332:{NFSU2_TR(0x60d332);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x60d237u);}goto L60d237;}}
}
B60d338:L60d338:{c.instructions+=1;NFSU2_TR(0x60d338);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60d33c:L60d33c:{c.instructions+=6;NFSU2_TR(0x60d33c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B60d33d:{NFSU2_TR(0x60d33d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B60d33e:{NFSU2_TR(0x60d33e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B60d33f:{NFSU2_TR(0x60d33f);
__builtin_memmove((R+16),(R+20),4);
}
B60d341:{NFSU2_TR(0x60d341);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B60d342:{NFSU2_TR(0x60d342);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B60d350:L60d350:{c.instructions+=27;NFSU2_TR(0x60d350);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60d351:{NFSU2_TR(0x60d351);
__builtin_memmove((R+20),(R+16),4);
}
B60d353:{NFSU2_TR(0x60d353);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B60d356:{NFSU2_TR(0x60d356);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x20ull))));
}
B60d359:{NFSU2_TR(0x60d359);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60d35c:{NFSU2_TR(0x60d35c);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60d35e:{NFSU2_TR(0x60d35e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B60d361:{NFSU2_TR(0x60d361);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60d364:{NFSU2_TR(0x60d364);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60d367:{NFSU2_TR(0x60d367);
{u32 ea_=u32(u32(8029160u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B60d36d:{NFSU2_TR(0x60d36d);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60d371:{NFSU2_TR(0x60d371);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60d375:{NFSU2_TR(0x60d375);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B60d377:{NFSU2_TR(0x60d377);
{u32 ea_=u32(u32(9051888u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60d37d:{NFSU2_TR(0x60d37d);
__builtin_memmove(gp(0x8a1ef8),(R+0),4);
}
B60d382:{NFSU2_TR(0x60d382);
{u32 ea_=u32(u32(9051892u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60d388:{NFSU2_TR(0x60d388);
{u32 ea_=u32(u32(9051892u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60d38e:{NFSU2_TR(0x60d38e);
{u32 ea_=u32(u32(9051892u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60d394:{NFSU2_TR(0x60d394);
{u32 ea_=u32(u32(9051888u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60d39a:{NFSU2_TR(0x60d39a);
{u32 ea_=u32(u32(9051888u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60d3a0:{NFSU2_TR(0x60d3a0);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B60d3a2:{NFSU2_TR(0x60d3a2);
{u32 ea_=u32(u32(9051896u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60d3a8:{NFSU2_TR(0x60d3a8);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B60d3aa:{NFSU2_TR(0x60d3aa);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60d3ae:{NFSU2_TR(0x60d3ae);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B60d3b0:{NFSU2_TR(0x60d3b0);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60d3b3:{NFSU2_TR(0x60d3b3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60d3b8ull));
TAIL_STATIC(0x43e6d0u,43e);
}
B60d3b8:L60d3b8:{c.instructions+=3;NFSU2_TR(0x60d3b8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B60d3bb:{NFSU2_TR(0x60d3bb);
w1(R+512,u8((r2(R+0))<(u16(0x1a90ull))));
}
B60d3bf:{NFSU2_TR(0x60d3bf);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L60d458;}}
}
B60d3c5:L60d3c5:{c.instructions+=6;NFSU2_TR(0x60d3c5);
u8 U[4];
w4(U+0,u32(0x1a90ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60d3ca:{NFSU2_TR(0x60d3ca);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B60d3ce:{NFSU2_TR(0x60d3ce);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60d3cf:{NFSU2_TR(0x60d3cf);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B60d3d3:{NFSU2_TR(0x60d3d3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60d3d4:{NFSU2_TR(0x60d3d4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60d3d9ull));
TAIL_STATIC(0x43c390u,43c);
}
B60d3d9:L60d3d9:{c.instructions+=32;NFSU2_TR(0x60d3d9);
{u32 ea_=u32(u32(9051896u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60d3df:{NFSU2_TR(0x60d3df);
{u32 ea_=u32(u32(9051896u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60d3e5:{NFSU2_TR(0x60d3e5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B60d3e8:{NFSU2_TR(0x60d3e8);
{u32 ea_=u32(u32(9051892u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60d3ee:{NFSU2_TR(0x60d3ee);
{u32 ea_=u32(u32(9051892u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60d3f4:{NFSU2_TR(0x60d3f4);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B60d3f6:{NFSU2_TR(0x60d3f6);
{u32 ea_=u32(u32(9051888u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60d3fc:{NFSU2_TR(0x60d3fc);
{u32 ea_=u32(u32(9051888u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60d402:{NFSU2_TR(0x60d402);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B60d404:{NFSU2_TR(0x60d404);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B60d406:{NFSU2_TR(0x60d406);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60d40a:{NFSU2_TR(0x60d40a);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B60d40c:{NFSU2_TR(0x60d40c);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B60d40e:{NFSU2_TR(0x60d40e);
{u32 ea_=u32(u32(9051896u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60d414:{NFSU2_TR(0x60d414);
{u32 ea_=u32(u32(9051892u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60d41a:{NFSU2_TR(0x60d41a);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B60d41c:{NFSU2_TR(0x60d41c);
{u32 ea_=u32(u32(9051888u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60d422:{NFSU2_TR(0x60d422);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B60d424:{NFSU2_TR(0x60d424);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B60d426:{NFSU2_TR(0x60d426);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B60d428:{NFSU2_TR(0x60d428);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B60d42a:{NFSU2_TR(0x60d42a);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B60d430:{NFSU2_TR(0x60d430);
{u32 ea_=u32(u32(9051888u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60d436:{NFSU2_TR(0x60d436);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B60d438:{NFSU2_TR(0x60d438);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B60d43a:{NFSU2_TR(0x60d43a);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60d43e:{NFSU2_TR(0x60d43e);
{u32 ea_=u32(u32(9051888u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60d444:{NFSU2_TR(0x60d444);
{u32 ea_=u32(u32(9051892u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60d44a:{NFSU2_TR(0x60d44a);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B60d44c:{NFSU2_TR(0x60d44c);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60d450:{NFSU2_TR(0x60d450);
{u32 ea_=u32(u32(9051892u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60d456:{NFSU2_TR(0x60d456);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B60d458:L60d458:{c.instructions+=5;NFSU2_TR(0x60d458);
{u32 ea_=u32(u32(9051896u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60d45e:{NFSU2_TR(0x60d45e);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B60d464:{NFSU2_TR(0x60d464);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B60d466:{NFSU2_TR(0x60d466);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B60d469:{NFSU2_TR(0x60d469);
if(r1(R+514)){{goto L60d479;}}
}
B60d46b:L60d46b:{c.instructions+=4;NFSU2_TR(0x60d46b);
s4(0x89ebbc,u32(0x0ull));
}
B60d475:{NFSU2_TR(0x60d475);
__builtin_memmove((R+16),(R+20),4);
}
B60d477:{NFSU2_TR(0x60d477);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B60d478:{NFSU2_TR(0x60d478);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B60d479:L60d479:{c.instructions+=6;NFSU2_TR(0x60d479);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60d47f:{NFSU2_TR(0x60d47f);
{u32 ea_=u32(u32(9051896u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B60d485:{NFSU2_TR(0x60d485);
{u32 ea_=u32(u32(9038780u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60d48b:{NFSU2_TR(0x60d48b);
__builtin_memmove((R+16),(R+20),4);
}
B60d48d:{NFSU2_TR(0x60d48d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B60d48e:{NFSU2_TR(0x60d48e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B60d490:L60d490:{c.instructions+=22;NFSU2_TR(0x60d490);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60d491:{NFSU2_TR(0x60d491);
__builtin_memmove((R+20),(R+16),4);
}
B60d493:{NFSU2_TR(0x60d493);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B60d496:{NFSU2_TR(0x60d496);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60d499:{NFSU2_TR(0x60d499);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60d49b:{NFSU2_TR(0x60d49b);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B60d49d:{NFSU2_TR(0x60d49d);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B60d4a0:{NFSU2_TR(0x60d4a0);
{u32 ea_=u32(u32(8398524u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60d4a6:{NFSU2_TR(0x60d4a6);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B60d4a8:{NFSU2_TR(0x60d4a8);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60d4ab:{NFSU2_TR(0x60d4ab);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B60d4ae:{NFSU2_TR(0x60d4ae);
{u32 ea_=u32(u32(8398524u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60d4b4:{NFSU2_TR(0x60d4b4);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B60d4b7:{NFSU2_TR(0x60d4b7);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60d4ba:{NFSU2_TR(0x60d4ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60d4bd:{NFSU2_TR(0x60d4bd);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B60d4bf:{NFSU2_TR(0x60d4bf);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60d4c1:{NFSU2_TR(0x60d4c1);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60d4c4:{NFSU2_TR(0x60d4c4);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60d4c7:{NFSU2_TR(0x60d4c7);
__builtin_memmove((R+16),(R+20),4);
}
B60d4c9:{NFSU2_TR(0x60d4c9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B60d4ca:{NFSU2_TR(0x60d4ca);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B60d4d0:L60d4d0:{c.instructions+=3;NFSU2_TR(0x60d4d0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60d4d4:{NFSU2_TR(0x60d4d4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B60d4d6:{NFSU2_TR(0x60d4d6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L60d4db;}}
}
B60d4d8:L60d4d8:{c.instructions+=2;NFSU2_TR(0x60d4d8);
u8 U[3];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
w1(R+519,u8(s8(r1(R+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(R+0))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(R+0))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B60d4da:{NFSU2_TR(0x60d4da);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B60d4db:L60d4db:{c.instructions+=3;NFSU2_TR(0x60d4db);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60d4de:{NFSU2_TR(0x60d4de);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x3ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x3ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B60d4e1:{NFSU2_TR(0x60d4e1);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L60d4eb;}}
}
B60d4e3:L60d4e3:{c.instructions+=1;NFSU2_TR(0x60d4e3);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L60d4eb;}}
}
B60d4e5:L60d4e5:{c.instructions+=2;NFSU2_TR(0x60d4e5);
w4(R+0,u32(0x1ull));
}
B60d4ea:{NFSU2_TR(0x60d4ea);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B60d4eb:L60d4eb:{c.instructions+=2;NFSU2_TR(0x60d4eb);
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
B60d4ed:{NFSU2_TR(0x60d4ed);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B60d4f0:L60d4f0:{c.instructions+=4;NFSU2_TR(0x60d4f0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60d4f1:{NFSU2_TR(0x60d4f1);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B60d4f5:{NFSU2_TR(0x60d4f5);
__builtin_memmove((R+4),(R+12),4);
}
B60d4f7:{NFSU2_TR(0x60d4f7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60d4fcull));
TAIL_STATIC(0x48b190u,48b);
}
B60d4fc:L60d4fc:{c.instructions+=3;NFSU2_TR(0x60d4fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x234ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B60d502:{NFSU2_TR(0x60d502);
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
B60d504:{NFSU2_TR(0x60d504);
if(r1(R+518)){{goto L60d527;}}
}
B60d506:L60d506:{c.instructions+=2;NFSU2_TR(0x60d506);
w4(R+4,u32(0x89cf48ull));
}
B60d50b:{NFSU2_TR(0x60d50b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60d510ull));
TAIL_STATIC(0x5f00f0u,5f0);
}
B60d510:L60d510:{c.instructions+=2;NFSU2_TR(0x60d510);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B60d512:{NFSU2_TR(0x60d512);
if(r1(R+518)){{goto L60d523;}}
}
B60d514:L60d514:{c.instructions+=3;NFSU2_TR(0x60d514);
__builtin_memmove((R+0),gp(0x89cf48),4);
}
B60d519:{NFSU2_TR(0x60d519);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B60d51c:{NFSU2_TR(0x60d51c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L60d523;}}
}
B60d51e:L60d51e:{c.instructions+=2;NFSU2_TR(0x60d51e);
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
B60d521:{NFSU2_TR(0x60d521);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L60d527;}}
}
B60d523:L60d523:{c.instructions+=3;NFSU2_TR(0x60d523);
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
B60d525:{NFSU2_TR(0x60d525);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B60d526:{NFSU2_TR(0x60d526);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B60d527:L60d527:{c.instructions+=5;NFSU2_TR(0x60d527);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60d528:{NFSU2_TR(0x60d528);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60d529:{NFSU2_TR(0x60d529);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B60d52d:{NFSU2_TR(0x60d52d);
__builtin_memmove((R+4),(R+28),4);
}
B60d52f:{NFSU2_TR(0x60d52f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60d534ull));
TAIL_STATIC(0x5ec060u,5ec);
}
B60d534:L60d534:{c.instructions+=5;NFSU2_TR(0x60d534);
w4(R+24,u32(r1(R+0)));
}
B60d537:{NFSU2_TR(0x60d537);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60d53a:{NFSU2_TR(0x60d53a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60d53b:{NFSU2_TR(0x60d53b);
__builtin_memmove((R+4),(R+28),4);
}
B60d53d:{NFSU2_TR(0x60d53d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60d542ull));
TAIL_STATIC(0x5ebff0u,5eb);
}
B60d542:L60d542:{c.instructions+=2;NFSU2_TR(0x60d542);
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
B60d544:{NFSU2_TR(0x60d544);
if(r1(R+518)){{goto L60d564;}}
}
B60d546:L60d546:{c.instructions+=6;NFSU2_TR(0x60d546);
{u32 ea_=u32(u32(8802644u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60d54c:{NFSU2_TR(0x60d54c);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B60d54e:{NFSU2_TR(0x60d54e);
{u32 ea_=u32(u32(7881564u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B60d554:{NFSU2_TR(0x60d554);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B60d556:{NFSU2_TR(0x60d556);
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
B60d559:{NFSU2_TR(0x60d559);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L60d564;}}
}
B60d55b:L60d55b:{c.instructions+=2;NFSU2_TR(0x60d55b);
__builtin_memmove((R+24),gp(0x870818),4);
}
B60d561:{NFSU2_TR(0x60d561);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+24,u32(u32(r4(R+24))&u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B60d564:L60d564:{c.instructions+=5;NFSU2_TR(0x60d564);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B60d565:{NFSU2_TR(0x60d565);
__builtin_memmove((R+0),(R+24),4);
}
B60d567:{NFSU2_TR(0x60d567);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B60d568:{NFSU2_TR(0x60d568);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B60d569:{NFSU2_TR(0x60d569);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B60d570:L60d570:{c.instructions+=7;NFSU2_TR(0x60d570);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60d574:{NFSU2_TR(0x60d574);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x280ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B60d57a:{NFSU2_TR(0x60d57a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60d57b:{NFSU2_TR(0x60d57b);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B60d57f:{NFSU2_TR(0x60d57f);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B60d581:{NFSU2_TR(0x60d581);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60d582:{NFSU2_TR(0x60d582);
if(r1(R+518)){{goto L60d5bc;}}
}
B60d584:L60d584:{c.instructions+=3;NFSU2_TR(0x60d584);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x550ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B60d58a:{NFSU2_TR(0x60d58a);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B60d58c:{NFSU2_TR(0x60d58c);
if(r1(R+518)){{goto L60d5bc;}}
}
B60d58e:L60d58e:{c.instructions+=4;NFSU2_TR(0x60d58e);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B60d592:{NFSU2_TR(0x60d592);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60d593:{NFSU2_TR(0x60d593);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60d594:{NFSU2_TR(0x60d594);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60d599ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x60d4f0u);}goto L60d4f0;}
}
B60d599:L60d599:{c.instructions+=3;NFSU2_TR(0x60d599);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B60d59c:{NFSU2_TR(0x60d59c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B60d59e:{NFSU2_TR(0x60d59e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L60d5bc;}}
}
B60d5a0:L60d5a0:{c.instructions+=6;NFSU2_TR(0x60d5a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B60d5a3:{NFSU2_TR(0x60d5a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5b4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60d5a9:{NFSU2_TR(0x60d5a9);
w4(R+8,u32(0x1ull));
}
B60d5ae:{NFSU2_TR(0x60d5ae);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r1(U+0))));
}
B60d5b0:{NFSU2_TR(0x60d5b0);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+0))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B60d5b2:{NFSU2_TR(0x60d5b2);
if(r1(R+518)){{goto L60d5bc;}}
}
B60d5b4:L60d5b4:{c.instructions+=4;NFSU2_TR(0x60d5b4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B60d5b5:{NFSU2_TR(0x60d5b5);
w4(R+0,u32(0x1ull));
}
B60d5ba:{NFSU2_TR(0x60d5ba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B60d5bb:{NFSU2_TR(0x60d5bb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B60d5bc:L60d5bc:{c.instructions+=4;NFSU2_TR(0x60d5bc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B60d5bd:{NFSU2_TR(0x60d5bd);
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
B60d5bf:{NFSU2_TR(0x60d5bf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B60d5c0:{NFSU2_TR(0x60d5c0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B60d5d0:L60d5d0:{c.instructions+=19;NFSU2_TR(0x60d5d0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60d5d1:{NFSU2_TR(0x60d5d1);
__builtin_memmove((R+20),(R+16),4);
}
B60d5d3:{NFSU2_TR(0x60d5d3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B60d5d6:{NFSU2_TR(0x60d5d6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8cull))));
}
B60d5dc:{NFSU2_TR(0x60d5dc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60d5dd:{NFSU2_TR(0x60d5dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B60d5e0:{NFSU2_TR(0x60d5e0);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60d5e3:{NFSU2_TR(0x60d5e3);
{u32 ea_=u32(r4(R+24)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60d5e6:{NFSU2_TR(0x60d5e6);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60d5e9:{NFSU2_TR(0x60d5e9);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B60d5eb:{NFSU2_TR(0x60d5eb);
__asm__ volatile(".byte 0xd8,0xc2":::"memory");
}
B60d5ed:{NFSU2_TR(0x60d5ed);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60d5f3:{NFSU2_TR(0x60d5f3);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B60d5f5:{NFSU2_TR(0x60d5f5);
{u32 ea_=u32(u32(7907284u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B60d5fb:{NFSU2_TR(0x60d5fb);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B60d5fd:{NFSU2_TR(0x60d5fd);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B60d5ff:{NFSU2_TR(0x60d5ff);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B60d602:{NFSU2_TR(0x60d602);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B60d604:{NFSU2_TR(0x60d604);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L60d6f1;}}
}
B60d60a:L60d60a:{c.instructions+=2;NFSU2_TR(0x60d60a);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B60d60e:{NFSU2_TR(0x60d60e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60d613ull));
TAIL_STATIC(0x5bb1c0u,5bb);
}
B60d613:L60d613:{c.instructions+=47;NFSU2_TR(0x60d613);
{u32 ea_=u32(u32(8399052u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60d619:{NFSU2_TR(0x60d619);
{u32 ea_=u32(u32(8399092u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B60d61f:{NFSU2_TR(0x60d61f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60d622:{NFSU2_TR(0x60d622);
{u32 ea_=u32(u32(9051212u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60d628:{NFSU2_TR(0x60d628);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x80000000ull))));
}
B60d62d:{NFSU2_TR(0x60d62d);
{u32 ea_=u32(u32(8399100u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B60d633:{NFSU2_TR(0x60d633);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60d635:{NFSU2_TR(0x60d635);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B60d637:{NFSU2_TR(0x60d637);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60d639:{NFSU2_TR(0x60d639);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60d63d:{NFSU2_TR(0x60d63d);
u8 U[8];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60d641:{NFSU2_TR(0x60d641);
u8 U[8];
w4(U+0,u32(u32(u32(0x7cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60d645:{NFSU2_TR(0x60d645);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60d649:{NFSU2_TR(0x60d649);
u8 U[8];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60d650:{NFSU2_TR(0x60d650);
{u32 ea_=u32(u32(8399076u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60d656:{NFSU2_TR(0x60d656);
u8 U[8];
w4(U+0,u32(u32(u32(0x84ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60d65d:{NFSU2_TR(0x60d65d);
{u32 ea_=u32(u32(8399052u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B60d663:{NFSU2_TR(0x60d663);
__builtin_memmove((R+0),gp(0x8a1c28),4);
}
B60d668:{NFSU2_TR(0x60d668);
{u32 ea_=u32(u32(9051212u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60d66e:{NFSU2_TR(0x60d66e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60d66f:{NFSU2_TR(0x60d66f);
{u32 ea_=u32(u32(8399084u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B60d675:{NFSU2_TR(0x60d675);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60d676:{NFSU2_TR(0x60d676);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B60d678:{NFSU2_TR(0x60d678);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B60d67c:{NFSU2_TR(0x60d67c);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60d680:{NFSU2_TR(0x60d680);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60d681:{NFSU2_TR(0x60d681);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B60d684:{NFSU2_TR(0x60d684);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60d688:{NFSU2_TR(0x60d688);
{u32 ea_=u32(u32(8399052u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60d68e:{NFSU2_TR(0x60d68e);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B60d696:{NFSU2_TR(0x60d696);
{u32 ea_=u32(u32(8399096u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B60d69c:{NFSU2_TR(0x60d69c);
{u32 ea_=u32(u32(8399104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60d6a2:{NFSU2_TR(0x60d6a2);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B60d6aa:{NFSU2_TR(0x60d6aa);
{u32 ea_=u32(u32(9051212u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B60d6b0:{NFSU2_TR(0x60d6b0);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B60d6b8:{NFSU2_TR(0x60d6b8);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B60d6ba:{NFSU2_TR(0x60d6ba);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B60d6c2:{NFSU2_TR(0x60d6c2);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60d6c6:{NFSU2_TR(0x60d6c6);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60d6ca:{NFSU2_TR(0x60d6ca);
{u32 ea_=u32(u32(8399080u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60d6d0:{NFSU2_TR(0x60d6d0);
{u32 ea_=u32(u32(8399052u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B60d6d6:{NFSU2_TR(0x60d6d6);
{u32 ea_=u32(u32(8399088u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60d6dc:{NFSU2_TR(0x60d6dc);
{u32 ea_=u32(u32(9051212u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B60d6e2:{NFSU2_TR(0x60d6e2);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B60d6e4:{NFSU2_TR(0x60d6e4);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60d6e8:{NFSU2_TR(0x60d6e8);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60d6ec:{NFSU2_TR(0x60d6ec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60d6f1ull));
TAIL_STATIC(0x5c7e80u,5c7);
}
B60d6f1:L60d6f1:{c.instructions+=4;NFSU2_TR(0x60d6f1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B60d6f2:{NFSU2_TR(0x60d6f2);
__builtin_memmove((R+16),(R+20),4);
}
B60d6f4:{NFSU2_TR(0x60d6f4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B60d6f5:{NFSU2_TR(0x60d6f5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B60d700:L60d700:{c.instructions+=7;NFSU2_TR(0x60d700);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60d701:{NFSU2_TR(0x60d701);
__builtin_memmove((R+20),(R+16),4);
}
B60d703:{NFSU2_TR(0x60d703);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B60d706:{NFSU2_TR(0x60d706);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x70ull))));
}
B60d709:{NFSU2_TR(0x60d709);
__builtin_memmove((R+0),gp(0x802914),4);
}
B60d70e:{NFSU2_TR(0x60d70e);
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
B60d710:{NFSU2_TR(0x60d710);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L60d71c;}}
}
B60d712:L60d712:{c.instructions+=4;NFSU2_TR(0x60d712);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60d718:{NFSU2_TR(0x60d718);
__builtin_memmove((R+16),(R+20),4);
}
B60d71a:{NFSU2_TR(0x60d71a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B60d71b:{NFSU2_TR(0x60d71b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B60d71c:L60d71c:{c.instructions+=14;NFSU2_TR(0x60d71c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60d71f:{NFSU2_TR(0x60d71f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60d722:{NFSU2_TR(0x60d722);
{u32 ea_=u32(r4(R+0)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60d725:{NFSU2_TR(0x60d725);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B60d728:{NFSU2_TR(0x60d728);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B60d72b:{NFSU2_TR(0x60d72b);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x50ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x50ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x50ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B60d72e:{NFSU2_TR(0x60d72e);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60d732:{NFSU2_TR(0x60d732);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60d735:{NFSU2_TR(0x60d735);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60d736:{NFSU2_TR(0x60d736);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B60d73a:{NFSU2_TR(0x60d73a);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60d73e:{NFSU2_TR(0x60d73e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60d73f:{NFSU2_TR(0x60d73f);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60d743:{NFSU2_TR(0x60d743);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60d748ull));
TAIL_STATIC(0x4012b0u,401);
}
B60d748:L60d748:{c.instructions+=45;NFSU2_TR(0x60d748);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60d74c:{NFSU2_TR(0x60d74c);
__builtin_memmove((R+0),gp(0x8a1c58),4);
}
B60d751:{NFSU2_TR(0x60d751);
__builtin_memmove((R+8),gp(0x802910),4);
}
B60d757:{NFSU2_TR(0x60d757);
__builtin_memmove((R+4),gp(0x8a1c54),4);
}
B60d75d:{NFSU2_TR(0x60d75d);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60d761:{NFSU2_TR(0x60d761);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60d765:{NFSU2_TR(0x60d765);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60d769:{NFSU2_TR(0x60d769);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60d76d:{NFSU2_TR(0x60d76d);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60d771:{NFSU2_TR(0x60d771);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60d775:{NFSU2_TR(0x60d775);
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
B60d778:{NFSU2_TR(0x60d778);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B60d77a:{NFSU2_TR(0x60d77a);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60d77e:{NFSU2_TR(0x60d77e);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60d782:{NFSU2_TR(0x60d782);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B60d784:{NFSU2_TR(0x60d784);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60d788:{NFSU2_TR(0x60d788);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60d78c:{NFSU2_TR(0x60d78c);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60d790:{NFSU2_TR(0x60d790);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60d794:{NFSU2_TR(0x60d794);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B60d796:{NFSU2_TR(0x60d796);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60d79a:{NFSU2_TR(0x60d79a);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60d79e:{NFSU2_TR(0x60d79e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B60d7a0:{NFSU2_TR(0x60d7a0);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60d7a4:{NFSU2_TR(0x60d7a4);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60d7a8:{NFSU2_TR(0x60d7a8);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60d7ac:{NFSU2_TR(0x60d7ac);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60d7b0:{NFSU2_TR(0x60d7b0);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B60d7b2:{NFSU2_TR(0x60d7b2);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60d7b6:{NFSU2_TR(0x60d7b6);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60d7ba:{NFSU2_TR(0x60d7ba);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B60d7bc:{NFSU2_TR(0x60d7bc);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60d7c0:{NFSU2_TR(0x60d7c0);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B60d7c2:{NFSU2_TR(0x60d7c2);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60d7c6:{NFSU2_TR(0x60d7c6);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60d7ca:{NFSU2_TR(0x60d7ca);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60d7ce:{NFSU2_TR(0x60d7ce);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B60d7d0:{NFSU2_TR(0x60d7d0);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60d7d4:{NFSU2_TR(0x60d7d4);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B60d7d6:{NFSU2_TR(0x60d7d6);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60d7da:{NFSU2_TR(0x60d7da);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60d7de:{NFSU2_TR(0x60d7de);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B60d7e0:{NFSU2_TR(0x60d7e0);
__builtin_memmove((R+16),(R+20),4);
}
B60d7e2:{NFSU2_TR(0x60d7e2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B60d7e3:{NFSU2_TR(0x60d7e3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B60d7f0:L60d7f0:{c.instructions+=11;NFSU2_TR(0x60d7f0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60d7f1:{NFSU2_TR(0x60d7f1);
__builtin_memmove((R+20),(R+16),4);
}
B60d7f3:{NFSU2_TR(0x60d7f3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B60d7f6:{NFSU2_TR(0x60d7f6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xab4ull))));
}
B60d7fc:{NFSU2_TR(0x60d7fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60d7ff:{NFSU2_TR(0x60d7ff);
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
B60d801:{NFSU2_TR(0x60d801);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60d802:{NFSU2_TR(0x60d802);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60d803:{NFSU2_TR(0x60d803);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60d804:{NFSU2_TR(0x60d804);
__builtin_memmove((R+24),(R+4),4);
}
B60d806:{NFSU2_TR(0x60d806);
if(r1(R+518)){TAIL_STATIC(0x60f4ddu,60f);}
}
B60d80c:L60d80c:{c.instructions+=5;NFSU2_TR(0x60d80c);
__builtin_memmove((R+0),gp(0x82da5c),4);
}
B60d811:{NFSU2_TR(0x60d811);
__builtin_memmove((R+8),gp(0x82da60),4);
}
B60d817:{NFSU2_TR(0x60d817);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((R+4),(U+0),4);
}
B60d81a:{NFSU2_TR(0x60d81a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
}
B60d81c:{NFSU2_TR(0x60d81c);
if(r1(R+512)){{goto L60d83e;}}
}
B60d81e:L60d81e:{c.instructions+=10;NFSU2_TR(0x60d81e);
__builtin_memmove((R+0),gp(0x82da70),4);
}
B60d823:{NFSU2_TR(0x60d823);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x40ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x40ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B60d826:{NFSU2_TR(0x60d826);
s4(0x82da6c,u32(0x1ull));
}
B60d830:{NFSU2_TR(0x60d830);
__builtin_memmove(gp(0x82da70),(R+0),4);
}
B60d835:{NFSU2_TR(0x60d835);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B60d836:{NFSU2_TR(0x60d836);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B60d837:{NFSU2_TR(0x60d837);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B60d838:{NFSU2_TR(0x60d838);
__builtin_memmove((R+16),(R+20),4);
}
B60d83a:{NFSU2_TR(0x60d83a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B60d83b:{NFSU2_TR(0x60d83b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B60d83e:L60d83e:{c.instructions+=4;NFSU2_TR(0x60d83e);
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
B60d840:{NFSU2_TR(0x60d840);
u8 U[8];
w4(U+0,u32(u32(u32(0xf4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60d847:{NFSU2_TR(0x60d847);
__builtin_memmove(gp(0x82da5c),(R+4),4);
}
B60d84d:{NFSU2_TR(0x60d84d);
if(r1(R+518)){TAIL_STATIC(0x60f4ddu,60f);}
}
B60d853:L60d853:{c.instructions+=2;NFSU2_TR(0x60d853);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60d854:{NFSU2_TR(0x60d854);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60d859ull));
TAIL_STATIC(0x43c780u,43c);
}
B60d859:L60d859:{c.instructions+=55;NFSU2_TR(0x60d859);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x348ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60d85f:{NFSU2_TR(0x60d85f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B60d862:{NFSU2_TR(0x60d862);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B60d865:{NFSU2_TR(0x60d865);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60d867:{NFSU2_TR(0x60d867);
u8 U[8];
w4(U+0,u32(u32(u32(0xf4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60d86e:{NFSU2_TR(0x60d86e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60d871:{NFSU2_TR(0x60d871);
{u32 ea_=u32(r4(R+0)+u32(64u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B60d874:{NFSU2_TR(0x60d874);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B60d876:{NFSU2_TR(0x60d876);
{u32 ea_=u32(r4(R+0)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60d879:{NFSU2_TR(0x60d879);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B60d87c:{NFSU2_TR(0x60d87c);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B60d87f:{NFSU2_TR(0x60d87f);
{u32 ea_=u32(r4(R+0)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60d882:{NFSU2_TR(0x60d882);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60d886:{NFSU2_TR(0x60d886);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B60d889:{NFSU2_TR(0x60d889);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B60d88b:{NFSU2_TR(0x60d88b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B60d88e:{NFSU2_TR(0x60d88e);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B60d890:{NFSU2_TR(0x60d890);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60d894:{NFSU2_TR(0x60d894);
__asm__ volatile(".byte 0xd9,0xc3":::"memory");
}
B60d896:{NFSU2_TR(0x60d896);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B60d899:{NFSU2_TR(0x60d899);
__asm__ volatile(".byte 0xd8,0xcc":::"memory");
}
B60d89b:{NFSU2_TR(0x60d89b);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60d89f:{NFSU2_TR(0x60d89f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B60d8a2:{NFSU2_TR(0x60d8a2);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60d8a6:{NFSU2_TR(0x60d8a6);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B60d8a8:{NFSU2_TR(0x60d8a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B60d8ab:{NFSU2_TR(0x60d8ab);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B60d8ad:{NFSU2_TR(0x60d8ad);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B60d8b4:{NFSU2_TR(0x60d8b4);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B60d8b6:{NFSU2_TR(0x60d8b6);
u8 U[8];
w4(U+0,u32(u32(u32(0xf0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60d8bd:{NFSU2_TR(0x60d8bd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B60d8c0:{NFSU2_TR(0x60d8c0);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60d8c4:{NFSU2_TR(0x60d8c4);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B60d8c6:{NFSU2_TR(0x60d8c6);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60d8ca:{NFSU2_TR(0x60d8ca);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B60d8cc:{NFSU2_TR(0x60d8cc);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B60d8d4:{NFSU2_TR(0x60d8d4);
__asm__ volatile(".byte 0xdd,0xdb":::"memory");
}
B60d8d6:{NFSU2_TR(0x60d8d6);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B60d8d8:{NFSU2_TR(0x60d8d8);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B60d8da:{NFSU2_TR(0x60d8da);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60d8de:{NFSU2_TR(0x60d8de);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60d8e4:{NFSU2_TR(0x60d8e4);
{u32 ea_=u32(r4(R+16)+u32(236u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B60d8eb:{NFSU2_TR(0x60d8eb);
{u32 ea_=u32(u32(8021808u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B60d8f1:{NFSU2_TR(0x60d8f1);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B60d8f3:{NFSU2_TR(0x60d8f3);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B60d8f5:{NFSU2_TR(0x60d8f5);
{u32 ea_=u32(u32(8021828u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60d8fb:{NFSU2_TR(0x60d8fb);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B60d8fd:{NFSU2_TR(0x60d8fd);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60d901:{NFSU2_TR(0x60d901);
{u32 ea_=u32(u32(8021832u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60d907:{NFSU2_TR(0x60d907);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60d90b:{NFSU2_TR(0x60d90b);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60d90f:{NFSU2_TR(0x60d90f);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B60d913:{NFSU2_TR(0x60d913);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B60d915:{NFSU2_TR(0x60d915);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B60d918:{NFSU2_TR(0x60d918);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L60d95b;}}
}
B60d91a:L60d91a:{c.instructions+=6;NFSU2_TR(0x60d91a);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B60d91c:{NFSU2_TR(0x60d91c);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60d920:{NFSU2_TR(0x60d920);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B60d924:{NFSU2_TR(0x60d924);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B60d926:{NFSU2_TR(0x60d926);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B60d929:{NFSU2_TR(0x60d929);
if(r1(R+514)){{goto L60d955;}}
}
B60d92b:L60d92b:{c.instructions+=12;NFSU2_TR(0x60d92b);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60d92f:{NFSU2_TR(0x60d92f);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B60d933:{NFSU2_TR(0x60d933);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60d937:{NFSU2_TR(0x60d937);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B60d93b:{NFSU2_TR(0x60d93b);
__asm__ volatile(".byte 0xde,0xf9":::"memory");
}
B60d93d:{NFSU2_TR(0x60d93d);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60d943:{NFSU2_TR(0x60d943);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B60d945:{NFSU2_TR(0x60d945);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B60d947:{NFSU2_TR(0x60d947);
{u32 ea_=u32(u32(8021836u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60d94d:{NFSU2_TR(0x60d94d);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B60d94f:{NFSU2_TR(0x60d94f);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60d953:{NFSU2_TR(0x60d953);
{goto L60d95b;}
}
B60d955:L60d955:{c.instructions+=1;NFSU2_TR(0x60d955);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60d95b:L60d95b:{c.instructions+=10;NFSU2_TR(0x60d95b);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60d95f:{NFSU2_TR(0x60d95f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B60d962:{NFSU2_TR(0x60d962);
{u32 ea_=u32(r4(R+20)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60d965:{NFSU2_TR(0x60d965);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B60d968:{NFSU2_TR(0x60d968);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B60d96a:{NFSU2_TR(0x60d96a);
u8 U[8];
w4(U+0,u32(u32(u32(0xfcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60d971:{NFSU2_TR(0x60d971);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60d975:{NFSU2_TR(0x60d975);
{u32 ea_=u32(r4(R+20)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60d978:{NFSU2_TR(0x60d978);
{u32 ea_=u32(r4(R+16)+u32(252u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B60d97f:{NFSU2_TR(0x60d97f);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L60d987;}}
}
B60d981:L60d981:{c.instructions+=1;NFSU2_TR(0x60d981);
{u32 ea_=u32(u32(7882060u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B60d987:L60d987:{c.instructions+=2;NFSU2_TR(0x60d987);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B60d989:{NFSU2_TR(0x60d989);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60d98eull));
TAIL_STATIC(0x75bed4u,75b);
}
B60d98e:L60d98e:{c.instructions+=2;NFSU2_TR(0x60d98e);
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
B60d990:{NFSU2_TR(0x60d990);
if(r1(R+518)){TAIL_STATIC(0x60f4ddu,60f);}
}
B60d996:L60d996:{c.instructions+=4;NFSU2_TR(0x60d996);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+0))));
}
B60d998:{NFSU2_TR(0x60d998);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0xfeull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xfeull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B60d99d:{NFSU2_TR(0x60d99d);
u8 U[8];
w4(U+0,u32(u32(u32(0xecull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60d9a4:{NFSU2_TR(0x60d9a4);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L60d9b1;}}
}
B60d9a6:L60d9a6:{c.instructions+=1;NFSU2_TR(0x60d9a6);
u8 U[8];
w4(U+0,u32(u32(u32(0xecull))+u32(r4(R+16))));
w4(U+4,u32(0xfeull));
s4(u32(r4(U+0)),r4(U+4));
}
B60d9b1:L60d9b1:{c.instructions+=8;NFSU2_TR(0x60d9b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60d9b4:{NFSU2_TR(0x60d9b4);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B60d9b5:{NFSU2_TR(0x60d9b5);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B60d9b7:{NFSU2_TR(0x60d9b7);
w4(R+0,sar<u32>(r4(R+0),u64(u32(0x1ull))));
}
B60d9b9:{NFSU2_TR(0x60d9b9);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B60d9bb:{NFSU2_TR(0x60d9bb);
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
B60d9bd:{NFSU2_TR(0x60d9bd);
u8 U[8];
w4(U+0,u32(u32(u32(0xfcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60d9c4:{NFSU2_TR(0x60d9c4);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){TAIL_STATIC(0x60f4ddu,60f);}
}
B60d9ca:L60d9ca:{c.instructions+=52;NFSU2_TR(0x60d9ca);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60d9ce:{NFSU2_TR(0x60d9ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B60d9d1:{NFSU2_TR(0x60d9d1);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60d9d5:{NFSU2_TR(0x60d9d5);
__builtin_memmove((R+0),(R+4),4);
}
B60d9d7:{NFSU2_TR(0x60d9d7);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B60d9da:{NFSU2_TR(0x60d9da);
u8 U[8];
w4(U+0,u32(u32(u32(0x10cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60d9e1:{NFSU2_TR(0x60d9e1);
{u32 ea_=u32(r4(R+16)+u32(248u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B60d9e8:{NFSU2_TR(0x60d9e8);
__builtin_memmove((R+0),(R+4),4);
}
B60d9ea:{NFSU2_TR(0x60d9ea);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60d9ee:{NFSU2_TR(0x60d9ee);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B60d9f1:{NFSU2_TR(0x60d9f1);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60d9f5:{NFSU2_TR(0x60d9f5);
u8 U[8];
w4(U+0,u32(u32(u32(0x100ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60d9fc:{NFSU2_TR(0x60d9fc);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B60da00:{NFSU2_TR(0x60da00);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60da04:{NFSU2_TR(0x60da04);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60da08:{NFSU2_TR(0x60da08);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B60da0c:{NFSU2_TR(0x60da0c);
{u32 ea_=u32(r4(R+16)+u32(888u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60da13:{NFSU2_TR(0x60da13);
u8 U[8];
w4(U+0,u32(u32(u32(0x378ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B60da1a:{NFSU2_TR(0x60da1a);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B60da1c:{NFSU2_TR(0x60da1c);
u8 U[8];
w4(U+0,u32(u32(u32(0x2f8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60da23:{NFSU2_TR(0x60da23);
{u32 ea_=u32(r4(R+16)+u32(752u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60da2a:{NFSU2_TR(0x60da2a);
{u32 ea_=u32(r4(R+16)+u32(756u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60da31:{NFSU2_TR(0x60da31);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60da35:{NFSU2_TR(0x60da35);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60da39:{NFSU2_TR(0x60da39);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60da3d:{NFSU2_TR(0x60da3d);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60da41:{NFSU2_TR(0x60da41);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60da45:{NFSU2_TR(0x60da45);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60da49:{NFSU2_TR(0x60da49);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60da4d:{NFSU2_TR(0x60da4d);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60da51:{NFSU2_TR(0x60da51);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60da55:{NFSU2_TR(0x60da55);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60da59:{NFSU2_TR(0x60da59);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B60da5b:{NFSU2_TR(0x60da5b);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60da5f:{NFSU2_TR(0x60da5f);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60da63:{NFSU2_TR(0x60da63);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B60da65:{NFSU2_TR(0x60da65);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60da69:{NFSU2_TR(0x60da69);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60da6d:{NFSU2_TR(0x60da6d);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B60da6f:{NFSU2_TR(0x60da6f);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60da73:{NFSU2_TR(0x60da73);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B60da76:{NFSU2_TR(0x60da76);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B60da79:{NFSU2_TR(0x60da79);
u8 U[4];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B60da7d:{NFSU2_TR(0x60da7d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60da7e:{NFSU2_TR(0x60da7e);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x10ull))));
}
B60da81:{NFSU2_TR(0x60da81);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60da82:{NFSU2_TR(0x60da82);
u8 U[4];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B60da86:{NFSU2_TR(0x60da86);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60da87:{NFSU2_TR(0x60da87);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B60da8f:{NFSU2_TR(0x60da8f);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B60da97:{NFSU2_TR(0x60da97);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B60da9f:{NFSU2_TR(0x60da9f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60daa4ull));
TAIL_STATIC(0x43c9c0u,43c);
}
B60daa4:L60daa4:{c.instructions+=7;NFSU2_TR(0x60daa4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B60daa7:{NFSU2_TR(0x60daa7);
u8 U[4];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B60daab:{NFSU2_TR(0x60daab);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60daac:{NFSU2_TR(0x60daac);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60daad:{NFSU2_TR(0x60daad);
u8 U[4];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B60dab1:{NFSU2_TR(0x60dab1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60dab2:{NFSU2_TR(0x60dab2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60dab7ull));
TAIL_STATIC(0x43c9c0u,43c);
}
B60dab7:L60dab7:{c.instructions+=21;NFSU2_TR(0x60dab7);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60dabb:{NFSU2_TR(0x60dabb);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B60dabd:{NFSU2_TR(0x60dabd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B60dac0:{NFSU2_TR(0x60dac0);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x8ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B60dac4:{NFSU2_TR(0x60dac4);
u8 U[4];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B60dac8:{NFSU2_TR(0x60dac8);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60dacc:{NFSU2_TR(0x60dacc);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60dacd:{NFSU2_TR(0x60dacd);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60dad1:{NFSU2_TR(0x60dad1);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
}
B60dad4:{NFSU2_TR(0x60dad4);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B60dad7:{NFSU2_TR(0x60dad7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60dad8:{NFSU2_TR(0x60dad8);
u8 U[4];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B60dadc:{NFSU2_TR(0x60dadc);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60dadd:{NFSU2_TR(0x60dadd);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60dae1:{NFSU2_TR(0x60dae1);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B60dae9:{NFSU2_TR(0x60dae9);
{u32 ea_=u32(r4(R+16)+u32(108u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60daed:{NFSU2_TR(0x60daed);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B60daf5:{NFSU2_TR(0x60daf5);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B60daf8:{NFSU2_TR(0x60daf8);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B60db00:{NFSU2_TR(0x60db00);
{u32 ea_=u32(r4(R+16)+u32(108u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60db04:{NFSU2_TR(0x60db04);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60db09ull));
TAIL_STATIC(0x43c9c0u,43c);
}
B60db09:L60db09:{c.instructions+=7;NFSU2_TR(0x60db09);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60db0c:{NFSU2_TR(0x60db0c);
u8 U[4];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B60db10:{NFSU2_TR(0x60db10);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60db11:{NFSU2_TR(0x60db11);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60db12:{NFSU2_TR(0x60db12);
u8 U[4];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B60db16:{NFSU2_TR(0x60db16);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60db17:{NFSU2_TR(0x60db17);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60db1cull));
TAIL_STATIC(0x43c9c0u,43c);
}
B60db1c:L60db1c:{c.instructions+=22;NFSU2_TR(0x60db1c);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60db20:{NFSU2_TR(0x60db20);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B60db22:{NFSU2_TR(0x60db22);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60db25:{NFSU2_TR(0x60db25);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x30ull))));
}
B60db28:{NFSU2_TR(0x60db28);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B60db2a:{NFSU2_TR(0x60db2a);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60db2e:{NFSU2_TR(0x60db2e);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60db32:{NFSU2_TR(0x60db32);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B60db35:{NFSU2_TR(0x60db35);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60db39:{NFSU2_TR(0x60db39);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60db3d:{NFSU2_TR(0x60db3d);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B60db40:{NFSU2_TR(0x60db40);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60db44:{NFSU2_TR(0x60db44);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60db48:{NFSU2_TR(0x60db48);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B60db4c:{NFSU2_TR(0x60db4c);
{u32 ea_=u32(r4(R+16)+u32(848u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60db53:{NFSU2_TR(0x60db53);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60db57:{NFSU2_TR(0x60db57);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B60db5b:{NFSU2_TR(0x60db5b);
{u32 ea_=u32(r4(R+16)+u32(852u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60db62:{NFSU2_TR(0x60db62);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60db66:{NFSU2_TR(0x60db66);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B60db6a:{NFSU2_TR(0x60db6a);
{u32 ea_=u32(r4(R+16)+u32(856u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60db71:{NFSU2_TR(0x60db71);
if(r1(R+518)){{goto L60dc3b;}}
}
B60db77:L60db77:{c.instructions+=2;NFSU2_TR(0x60db77);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B60db7a:{NFSU2_TR(0x60db7a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L60dc3b;}}
}
B60db80:L60db80:{c.instructions+=38;NFSU2_TR(0x60db80);
{u32 ea_=u32(r4(R+16)+u32(848u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60db87:{NFSU2_TR(0x60db87);
{u32 ea_=u32(u32(8021504u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60db8d:{NFSU2_TR(0x60db8d);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B60db8f:{NFSU2_TR(0x60db8f);
{u32 ea_=u32(r4(R+16)+u32(852u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60db96:{NFSU2_TR(0x60db96);
{u32 ea_=u32(u32(8021504u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60db9c:{NFSU2_TR(0x60db9c);
{u32 ea_=u32(r4(R+16)+u32(264u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B60dba3:{NFSU2_TR(0x60dba3);
{u32 ea_=u32(r4(R+16)+u32(856u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60dbaa:{NFSU2_TR(0x60dbaa);
{u32 ea_=u32(u32(8021504u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60dbb0:{NFSU2_TR(0x60dbb0);
{u32 ea_=u32(r4(R+16)+u32(260u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B60dbb7:{NFSU2_TR(0x60dbb7);
{u32 ea_=u32(r4(R+16)+u32(2632u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60dbbe:{NFSU2_TR(0x60dbbe);
u8 U[8];
w4(U+0,u32(u32(u32(0x104ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B60dbc5:{NFSU2_TR(0x60dbc5);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B60dbc7:{NFSU2_TR(0x60dbc7);
u8 U[8];
w4(U+0,u32(u32(u32(0x5e8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60dbce:{NFSU2_TR(0x60dbce);
{u32 ea_=u32(r4(R+16)+u32(2736u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60dbd5:{NFSU2_TR(0x60dbd5);
{u32 ea_=u32(r4(R+16)+u32(2632u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60dbdc:{NFSU2_TR(0x60dbdc);
{u32 ea_=u32(r4(R+16)+u32(2736u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60dbe3:{NFSU2_TR(0x60dbe3);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B60dbe7:{NFSU2_TR(0x60dbe7);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60dbeb:{NFSU2_TR(0x60dbeb);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B60dbed:{NFSU2_TR(0x60dbed);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B60dbf1:{NFSU2_TR(0x60dbf1);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60dbf5:{NFSU2_TR(0x60dbf5);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B60dbf9:{NFSU2_TR(0x60dbf9);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60dbfd:{NFSU2_TR(0x60dbfd);
{u32 ea_=u32(r4(R+16)+u32(264u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60dc04:{NFSU2_TR(0x60dc04);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B60dc06:{NFSU2_TR(0x60dc06);
{u32 ea_=u32(r4(R+16)+u32(2432u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60dc0d:{NFSU2_TR(0x60dc0d);
{u32 ea_=u32(r4(R+16)+u32(1512u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60dc14:{NFSU2_TR(0x60dc14);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60dc18:{NFSU2_TR(0x60dc18);
{u32 ea_=u32(r4(R+16)+u32(2432u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B60dc1f:{NFSU2_TR(0x60dc1f);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60dc23:{NFSU2_TR(0x60dc23);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60dc27:{NFSU2_TR(0x60dc27);
__asm__ volatile(".byte 0xd8,0xe2":::"memory");
}
B60dc29:{NFSU2_TR(0x60dc29);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60dc2d:{NFSU2_TR(0x60dc2d);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60dc31:{NFSU2_TR(0x60dc31);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B60dc33:{NFSU2_TR(0x60dc33);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60dc37:{NFSU2_TR(0x60dc37);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B60dc39:{NFSU2_TR(0x60dc39);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B60dc3b:L60dc3b:{c.instructions+=6;NFSU2_TR(0x60dc3b);
u8 U[4];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B60dc3f:{NFSU2_TR(0x60dc3f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60dc40:{NFSU2_TR(0x60dc40);
u8 U[4];
w4(U+0,u32(u32(u32(0x374ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B60dc47:{NFSU2_TR(0x60dc47);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60dc48:{NFSU2_TR(0x60dc48);
__builtin_memmove((R+4),(R+12),4);
}
B60dc4a:{NFSU2_TR(0x60dc4a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60dc4full));
TAIL_STATIC(0x5bc4a0u,5bc);
}
B60dc4f:L60dc4f:{c.instructions+=6;NFSU2_TR(0x60dc4f);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B60dc53:{NFSU2_TR(0x60dc53);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60dc54:{NFSU2_TR(0x60dc54);
u8 U[4];
w4(U+0,u32(u32(u32(0x5b4ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B60dc5b:{NFSU2_TR(0x60dc5b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60dc5c:{NFSU2_TR(0x60dc5c);
__builtin_memmove((R+4),(R+12),4);
}
B60dc5e:{NFSU2_TR(0x60dc5e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60dc63ull));
TAIL_STATIC(0x5bc4a0u,5bc);
}
B60dc63:L60dc63:{c.instructions+=11;NFSU2_TR(0x60dc63);
{u32 ea_=u32(r4(R+16)+u32(1456u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60dc6a:{NFSU2_TR(0x60dc6a);
{u32 ea_=u32(r4(R+16)+u32(880u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B60dc71:{NFSU2_TR(0x60dc71);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B60dc75:{NFSU2_TR(0x60dc75);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60dc76:{NFSU2_TR(0x60dc76);
u8 U[4];
w4(U+0,u32(u32(u32(0x1acull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B60dc7d:{NFSU2_TR(0x60dc7d);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60dc81:{NFSU2_TR(0x60dc81);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B60dc82:{NFSU2_TR(0x60dc82);
{u32 ea_=u32(r4(R+16)+u32(1468u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60dc89:{NFSU2_TR(0x60dc89);
{u32 ea_=u32(r4(R+16)+u32(892u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B60dc90:{NFSU2_TR(0x60dc90);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60dc94:{NFSU2_TR(0x60dc94);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60dc99ull));
TAIL_STATIC(0x43ce50u,43c);
}
B60dc99:L60dc99:{c.instructions+=7;NFSU2_TR(0x60dc99);
u8 U[8];
w4(U+0,u32(u32(u32(0x1b4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B60dca0:{NFSU2_TR(0x60dca0);
u8 U[8];
w4(U+0,u32(u32(u32(0x1b0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60dca7:{NFSU2_TR(0x60dca7);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60dcab:{NFSU2_TR(0x60dcab);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B60dcae:{NFSU2_TR(0x60dcae);
u8 U[4];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B60dcb2:{NFSU2_TR(0x60dcb2);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60dcb6:{NFSU2_TR(0x60dcb6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x60dcbbull));
TAIL_STATIC(0x5bb1c0u,5bb);
}
B60dcbb:L60dcbb:{c.instructions+=149;NFSU2_TR(0x60dcbb);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60dcbf:{NFSU2_TR(0x60dcbf);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60dcc3:{NFSU2_TR(0x60dcc3);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60dcc7:{NFSU2_TR(0x60dcc7);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B60dccb:{NFSU2_TR(0x60dccb);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60dccf:{NFSU2_TR(0x60dccf);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B60dcd3:{NFSU2_TR(0x60dcd3);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B60dcd5:{NFSU2_TR(0x60dcd5);
{u32 ea_=u32(r4(R+16)+u32(736u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60dcdc:{NFSU2_TR(0x60dcdc);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60dce0:{NFSU2_TR(0x60dce0);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60dce4:{NFSU2_TR(0x60dce4);
{u32 ea_=u32(r4(R+16)+u32(740u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60dceb:{NFSU2_TR(0x60dceb);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60dcef:{NFSU2_TR(0x60dcef);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B60dcf3:{NFSU2_TR(0x60dcf3);
{u32 ea_=u32(r4(R+16)+u32(736u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60dcfa:{NFSU2_TR(0x60dcfa);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60dcfe:{NFSU2_TR(0x60dcfe);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60dd02:{NFSU2_TR(0x60dd02);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B60dd06:{NFSU2_TR(0x60dd06);
{u32 ea_=u32(r4(R+16)+u32(740u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60dd0d:{NFSU2_TR(0x60dd0d);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60dd11:{NFSU2_TR(0x60dd11);
u8 U[8];
w4(U+0,u32(u32(u32(0x74ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60dd15:{NFSU2_TR(0x60dd15);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60dd19:{NFSU2_TR(0x60dd19);
u8 U[8];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60dd1d:{NFSU2_TR(0x60dd1d);
__builtin_memmove((R+8),(R+4),4);
}
B60dd1f:{NFSU2_TR(0x60dd1f);
u8 U[8];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60dd23:{NFSU2_TR(0x60dd23);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B60dd27:{NFSU2_TR(0x60dd27);
u8 U[8];
w4(U+0,u32(u32(u32(0x90ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60dd2e:{NFSU2_TR(0x60dd2e);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60dd32:{NFSU2_TR(0x60dd32);
u8 U[8];
w4(U+0,u32(u32(u32(0x94ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60dd39:{NFSU2_TR(0x60dd39);
__builtin_memmove((R+4),(R+0),4);
}
B60dd3b:{NFSU2_TR(0x60dd3b);
u8 U[8];
w4(U+0,u32(u32(u32(0x2e8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60dd42:{NFSU2_TR(0x60dd42);
{u32 ea_=u32(r4(R+16)+u32(744u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60dd49:{NFSU2_TR(0x60dd49);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60dd4d:{NFSU2_TR(0x60dd4d);
u8 U[8];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60dd54:{NFSU2_TR(0x60dd54);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B60dd58:{NFSU2_TR(0x60dd58);
u8 U[8];
w4(U+0,u32(u32(u32(0x98ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60dd5f:{NFSU2_TR(0x60dd5f);
{u32 ea_=u32(r4(R+16)+u32(2152u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60dd66:{NFSU2_TR(0x60dd66);
u8 U[8];
w4(U+0,u32(u32(u32(0x868ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B60dd6d:{NFSU2_TR(0x60dd6d);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B60dd6f:{NFSU2_TR(0x60dd6f);
u8 U[8];
w4(U+0,u32(u32(u32(0x608ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60dd76:{NFSU2_TR(0x60dd76);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60dd7a:{NFSU2_TR(0x60dd7a);
{u32 ea_=u32(r4(R+16)+u32(1200u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60dd81:{NFSU2_TR(0x60dd81);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B60dd83:{NFSU2_TR(0x60dd83);
u8 U[8];
w4(U+0,u32(u32(u32(0x4b8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60dd8a:{NFSU2_TR(0x60dd8a);
{u32 ea_=u32(r4(R+16)+u32(1200u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B60dd91:{NFSU2_TR(0x60dd91);
u8 U[8];
w4(U+0,u32(u32(u32(0x5a4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60dd98:{NFSU2_TR(0x60dd98);
{u32 ea_=u32(r4(R+16)+u32(128u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60dd9f:{NFSU2_TR(0x60dd9f);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B60dda3:{NFSU2_TR(0x60dda3);
{u32 ea_=u32(r4(R+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60ddaa:{NFSU2_TR(0x60ddaa);
{u32 ea_=u32(r4(R+16)+u32(1208u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B60ddb1:{NFSU2_TR(0x60ddb1);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60ddb5:{NFSU2_TR(0x60ddb5);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60ddb9:{NFSU2_TR(0x60ddb9);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B60ddbd:{NFSU2_TR(0x60ddbd);
{u32 ea_=u32(r4(R+16)+u32(1444u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60ddc4:{NFSU2_TR(0x60ddc4);
u8 U[8];
w4(U+0,u32(u32(u32(0x5a8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60ddcb:{NFSU2_TR(0x60ddcb);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60ddcf:{NFSU2_TR(0x60ddcf);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B60ddd3:{NFSU2_TR(0x60ddd3);
{u32 ea_=u32(r4(R+16)+u32(1448u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60ddda:{NFSU2_TR(0x60ddda);
u8 U[8];
w4(U+0,u32(u32(u32(0x648ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60dde1:{NFSU2_TR(0x60dde1);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60dde5:{NFSU2_TR(0x60dde5);
{u32 ea_=u32(r4(R+16)+u32(1576u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60ddec:{NFSU2_TR(0x60ddec);
u8 U[8];
w4(U+0,u32(u32(u32(0x628ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B60ddf3:{NFSU2_TR(0x60ddf3);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B60ddf5:{NFSU2_TR(0x60ddf5);
u8 U[8];
w4(U+0,u32(u32(u32(0x148ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60ddfc:{NFSU2_TR(0x60ddfc);
{u32 ea_=u32(r4(R+16)+u32(320u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60de03:{NFSU2_TR(0x60de03);
__builtin_memmove((R+8),(R+4),4);
}
B60de05:{NFSU2_TR(0x60de05);
u8 U[8];
w4(U+0,u32(u32(u32(0x268ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60de0c:{NFSU2_TR(0x60de0c);
{u32 ea_=u32(r4(R+16)+u32(324u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60de13:{NFSU2_TR(0x60de13);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B60de17:{NFSU2_TR(0x60de17);
{u32 ea_=u32(r4(R+16)+u32(320u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60de1e:{NFSU2_TR(0x60de1e);
u8 U[8];
w4(U+0,u32(u32(u32(0x598ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60de25:{NFSU2_TR(0x60de25);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60de29:{NFSU2_TR(0x60de29);
{u32 ea_=u32(r4(R+16)+u32(324u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60de30:{NFSU2_TR(0x60de30);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60de34:{NFSU2_TR(0x60de34);
{u32 ea_=u32(r4(R+16)+u32(328u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60de3b:{NFSU2_TR(0x60de3b);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60de3f:{NFSU2_TR(0x60de3f);
{u32 ea_=u32(r4(R+16)+u32(2600u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60de46:{NFSU2_TR(0x60de46);
u8 U[8];
w4(U+0,u32(u32(u32(0xa28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60de4d:{NFSU2_TR(0x60de4d);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B60de4f:{NFSU2_TR(0x60de4f);
u8 U[8];
w4(U+0,u32(u32(u32(0x3a8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60de56:{NFSU2_TR(0x60de56);
{u32 ea_=u32(r4(R+16)+u32(928u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60de5d:{NFSU2_TR(0x60de5d);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60de61:{NFSU2_TR(0x60de61);
{u32 ea_=u32(r4(R+16)+u32(128u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60de68:{NFSU2_TR(0x60de68);
u8 U[8];
w4(U+0,u32(u32(u32(0x594ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60de6f:{NFSU2_TR(0x60de6f);
{u32 ea_=u32(r4(R+16)+u32(928u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B60de76:{NFSU2_TR(0x60de76);
{u32 ea_=u32(r4(R+16)+u32(128u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60de7d:{NFSU2_TR(0x60de7d);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B60de7f:{NFSU2_TR(0x60de7f);
__asm__ volatile(".byte 0xd8,0xe2":::"memory");
}
B60de81:{NFSU2_TR(0x60de81);
{u32 ea_=u32(r4(R+16)+u32(132u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60de88:{NFSU2_TR(0x60de88);
__asm__ volatile(".byte 0xdd,0xd9":::"memory");
}
B60de8a:{NFSU2_TR(0x60de8a);
{u32 ea_=u32(r4(R+16)+u32(936u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B60de91:{NFSU2_TR(0x60de91);
{u32 ea_=u32(r4(R+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60de98:{NFSU2_TR(0x60de98);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60de9c:{NFSU2_TR(0x60de9c);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60dea0:{NFSU2_TR(0x60dea0);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B60dea2:{NFSU2_TR(0x60dea2);
{u32 ea_=u32(r4(R+16)+u32(608u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60dea9:{NFSU2_TR(0x60dea9);
{u32 ea_=u32(r4(R+16)+u32(612u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60deb0:{NFSU2_TR(0x60deb0);
{u32 ea_=u32(r4(R+16)+u32(608u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60deb7:{NFSU2_TR(0x60deb7);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60debb:{NFSU2_TR(0x60debb);
{u32 ea_=u32(r4(R+16)+u32(612u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60dec2:{NFSU2_TR(0x60dec2);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60dec6:{NFSU2_TR(0x60dec6);
{u32 ea_=u32(r4(R+16)+u32(616u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60decd:{NFSU2_TR(0x60decd);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60ded1:{NFSU2_TR(0x60ded1);
{u32 ea_=u32(r4(R+16)+u32(2184u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60ded8:{NFSU2_TR(0x60ded8);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B60deda:{NFSU2_TR(0x60deda);
{u32 ea_=u32(r4(R+16)+u32(1632u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60dee1:{NFSU2_TR(0x60dee1);
{u32 ea_=u32(r4(R+16)+u32(2184u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60dee8:{NFSU2_TR(0x60dee8);
{u32 ea_=u32(r4(R+16)+u32(144u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60deef:{NFSU2_TR(0x60deef);
{u32 ea_=u32(r4(R+16)+u32(1632u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B60def6:{NFSU2_TR(0x60def6);
{u32 ea_=u32(r4(R+16)+u32(144u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60defd:{NFSU2_TR(0x60defd);
{u32 ea_=u32(r4(R+16)+u32(148u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60df04:{NFSU2_TR(0x60df04);
__asm__ volatile(".byte 0xd8,0xe2":::"memory");
}
B60df06:{NFSU2_TR(0x60df06);
{u32 ea_=u32(r4(R+16)+u32(148u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60df0d:{NFSU2_TR(0x60df0d);
{u32 ea_=u32(r4(R+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60df14:{NFSU2_TR(0x60df14);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B60df16:{NFSU2_TR(0x60df16);
__asm__ volatile(".byte 0xdd,0xda":::"memory");
}
B60df18:{NFSU2_TR(0x60df18);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B60df1a:{NFSU2_TR(0x60df1a);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60df1e:{NFSU2_TR(0x60df1e);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60df22:{NFSU2_TR(0x60df22);
{u32 ea_=u32(r4(R+16)+u32(1428u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60df29:{NFSU2_TR(0x60df29);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60df2d:{NFSU2_TR(0x60df2d);
{u32 ea_=u32(r4(R+16)+u32(1432u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60df34:{NFSU2_TR(0x60df34);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60df38:{NFSU2_TR(0x60df38);
{u32 ea_=u32(r4(R+16)+u32(2472u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60df3f:{NFSU2_TR(0x60df3f);
u8 U[8];
w4(U+0,u32(u32(u32(0x9a8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B60df46:{NFSU2_TR(0x60df46);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B60df48:{NFSU2_TR(0x60df48);
u8 U[8];
w4(U+0,u32(u32(u32(0x168ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60df4f:{NFSU2_TR(0x60df4f);
{u32 ea_=u32(r4(R+16)+u32(352u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60df56:{NFSU2_TR(0x60df56);
{u32 ea_=u32(r4(R+16)+u32(356u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60df5d:{NFSU2_TR(0x60df5d);
{u32 ea_=u32(r4(R+16)+u32(352u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60df64:{NFSU2_TR(0x60df64);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60df68:{NFSU2_TR(0x60df68);
{u32 ea_=u32(r4(R+16)+u32(356u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60df6f:{NFSU2_TR(0x60df6f);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60df73:{NFSU2_TR(0x60df73);
u8 U[8];
w4(U+0,u32(u32(u32(0xa0ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f000000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B60df7e:{NFSU2_TR(0x60df7e);
{u32 ea_=u32(r4(R+16)+u32(360u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60df85:{NFSU2_TR(0x60df85);
u8 U[8];
w4(U+0,u32(u32(u32(0xa4ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f000000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B60df90:{NFSU2_TR(0x60df90);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B60df94:{NFSU2_TR(0x60df94);
u8 U[8];
w4(U+0,u32(u32(u32(0xa8ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f000000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B60df9f:{NFSU2_TR(0x60df9f);
u8 U[8];
w4(U+0,u32(u32(u32(0xacull))+u32(r4(R+16))));
w4(U+4,u32(0x3f000000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B60dfaa:{NFSU2_TR(0x60dfaa);
u8 U[8];
w4(U+0,u32(u32(u32(0xb0ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f000000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B60dfb5:{NFSU2_TR(0x60dfb5);
{u32 ea_=u32(r4(R+16)+u32(1672u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60dfbc:{NFSU2_TR(0x60dfbc);
u8 U[8];
w4(U+0,u32(u32(u32(0x688ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B60dfc3:{NFSU2_TR(0x60dfc3);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B60dfc5:{NFSU2_TR(0x60dfc5);
u8 U[8];
w4(U+0,u32(u32(u32(0x578ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B60dfcc:{NFSU2_TR(0x60dfcc);
{u32 ea_=u32(r4(R+16)+u32(1392u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B60dfd3:{NFSU2_TR(0x60dfd3);
u8 U[8];
w4(U+0,u32(u32(u32(0xb4ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B60dfde:{NFSU2_TR(0x60dfde);
{u32 ea_=u32(r4(R+16)+u32(144u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B60dfe5:{NFSU2_TR(0x60dfe5);
u8 U[8];
w4(U+0,u32(u32(u32(0xb8ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f000000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B60dff0:{NFSU2_TR(0x60dff0);
{u32 ea_=u32(r4(R+16)+u32(1392u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B60dff7:{NFSU2_TR(0x60dff7);
u8 U[8];
w4(U+0,u32(u32(u32(0xbcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
TAIL_STATIC(0x60e002u,60e);
}
XIT:NFSU2_TR_EXIT(0x60d,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
