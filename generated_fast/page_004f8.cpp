#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_402(u8* __restrict R,Cpu& c);
u32 body_435(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_4da(u8* __restrict R,Cpu& c);
u32 body_4f4(u8* __restrict R,Cpu& c);
u32 body_4f5(u8* __restrict R,Cpu& c);
u32 body_4f6(u8* __restrict R,Cpu& c);
u32 body_4f7(u8* __restrict R,Cpu& c);
u32 body_4f9(u8* __restrict R,Cpu& c);
u32 body_505(u8* __restrict R,Cpu& c);
u32 body_50b(u8* __restrict R,Cpu& c);
u32 body_50c(u8* __restrict R,Cpu& c);
u32 body_517(u8* __restrict R,Cpu& c);
u32 body_52c(u8* __restrict R,Cpu& c);
u32 body_537(u8* __restrict R,Cpu& c);
u32 body_555(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_5ed(u8* __restrict R,Cpu& c);
u32 body_5f0(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x4f8,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x4f8,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_4f8(u8* __restrict R,Cpu& c);
u32 page_4f8(Cpu& c){return body_4f8(c.regs.data(),c);}
__attribute__((noinline)) u32 body_4f8(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x4f8000:goto L4f8000;
case 0x4f8002:c.instructions+=7;goto B4f8002;
case 0x4f8005:c.instructions+=6;goto B4f8005;
case 0x4f8007:c.instructions+=5;goto B4f8007;
case 0x4f800a:c.instructions+=4;goto B4f800a;
case 0x4f800d:c.instructions+=3;goto B4f800d;
case 0x4f800f:c.instructions+=2;goto B4f800f;
case 0x4f8012:c.instructions+=1;goto B4f8012;
case 0x4f8014:goto L4f8014;
case 0x4f801b:c.instructions+=1;goto B4f801b;
case 0x4f801d:goto L4f801d;
case 0x4f801e:c.instructions+=2;goto B4f801e;
case 0x4f8023:c.instructions+=1;goto B4f8023;
case 0x4f8028:goto L4f8028;
case 0x4f802e:c.instructions+=2;goto B4f802e;
case 0x4f802f:c.instructions+=1;goto B4f802f;
case 0x4f8034:goto L4f8034;
case 0x4f803a:c.instructions+=3;goto B4f803a;
case 0x4f803d:c.instructions+=2;goto B4f803d;
case 0x4f803f:c.instructions+=1;goto B4f803f;
case 0x4f8041:goto L4f8041;
case 0x4f8047:c.instructions+=1;goto B4f8047;
case 0x4f8049:goto L4f8049;
case 0x4f804f:c.instructions+=5;goto B4f804f;
case 0x4f8055:c.instructions+=4;goto B4f8055;
case 0x4f805b:c.instructions+=3;goto B4f805b;
case 0x4f805d:c.instructions+=2;goto B4f805d;
case 0x4f8060:c.instructions+=1;goto B4f8060;
case 0x4f8062:goto L4f8062;
case 0x4f8068:c.instructions+=1;goto B4f8068;
case 0x4f806a:goto L4f806a;
case 0x4f806d:c.instructions+=2;goto B4f806d;
case 0x4f806e:c.instructions+=1;goto B4f806e;
case 0x4f8073:goto L4f8073;
case 0x4f8076:c.instructions+=1;goto B4f8076;
case 0x4f8079:goto L4f8079;
case 0x4f807c:c.instructions+=4;goto B4f807c;
case 0x4f807d:c.instructions+=3;goto B4f807d;
case 0x4f8082:c.instructions+=2;goto B4f8082;
case 0x4f8083:c.instructions+=1;goto B4f8083;
case 0x4f8088:goto L4f8088;
case 0x4f808b:c.instructions+=6;goto B4f808b;
case 0x4f808c:c.instructions+=5;goto B4f808c;
case 0x4f8091:c.instructions+=4;goto B4f8091;
case 0x4f8092:c.instructions+=3;goto B4f8092;
case 0x4f8095:c.instructions+=2;goto B4f8095;
case 0x4f8098:c.instructions+=1;goto B4f8098;
case 0x4f809d:goto L4f809d;
case 0x4f80a0:c.instructions+=6;goto B4f80a0;
case 0x4f80a1:c.instructions+=5;goto B4f80a1;
case 0x4f80a4:c.instructions+=4;goto B4f80a4;
case 0x4f80aa:c.instructions+=3;goto B4f80aa;
case 0x4f80ab:c.instructions+=2;goto B4f80ab;
case 0x4f80ac:c.instructions+=1;goto B4f80ac;
case 0x4f80ae:goto L4f80ae;
case 0x4f80b1:c.instructions+=3;goto B4f80b1;
case 0x4f80b6:c.instructions+=2;goto B4f80b6;
case 0x4f80b7:c.instructions+=1;goto B4f80b7;
case 0x4f80b9:goto L4f80b9;
case 0x4f80bc:c.instructions+=2;goto B4f80bc;
case 0x4f80c1:c.instructions+=1;goto B4f80c1;
case 0x4f80c2:goto L4f80c2;
case 0x4f80c7:goto L4f80c7;
case 0x4f80cb:c.instructions+=8;goto B4f80cb;
case 0x4f80ce:c.instructions+=7;goto B4f80ce;
case 0x4f80cf:c.instructions+=6;goto B4f80cf;
case 0x4f80d1:c.instructions+=5;goto B4f80d1;
case 0x4f80d2:c.instructions+=4;goto B4f80d2;
case 0x4f80d3:c.instructions+=3;goto B4f80d3;
case 0x4f80da:c.instructions+=2;goto B4f80da;
case 0x4f80dd:c.instructions+=1;goto B4f80dd;
case 0x4f80e0:goto L4f80e0;
case 0x4f80e2:c.instructions+=25;goto B4f80e2;
case 0x4f80e7:c.instructions+=24;goto B4f80e7;
case 0x4f80ed:c.instructions+=23;goto B4f80ed;
case 0x4f80ee:c.instructions+=22;goto B4f80ee;
case 0x4f80f5:c.instructions+=21;goto B4f80f5;
case 0x4f80f8:c.instructions+=20;goto B4f80f8;
case 0x4f80fc:c.instructions+=19;goto B4f80fc;
case 0x4f80fd:c.instructions+=18;goto B4f80fd;
case 0x4f80fe:c.instructions+=17;goto B4f80fe;
case 0x4f80ff:c.instructions+=16;goto B4f80ff;
case 0x4f8101:c.instructions+=15;goto B4f8101;
case 0x4f8103:c.instructions+=14;goto B4f8103;
case 0x4f8104:c.instructions+=13;goto B4f8104;
case 0x4f8108:c.instructions+=12;goto B4f8108;
case 0x4f810a:c.instructions+=11;goto B4f810a;
case 0x4f810d:c.instructions+=10;goto B4f810d;
case 0x4f8110:c.instructions+=9;goto B4f8110;
case 0x4f8117:c.instructions+=8;goto B4f8117;
case 0x4f811a:c.instructions+=7;goto B4f811a;
case 0x4f811d:c.instructions+=6;goto B4f811d;
case 0x4f8120:c.instructions+=5;goto B4f8120;
case 0x4f8125:c.instructions+=4;goto B4f8125;
case 0x4f8129:c.instructions+=3;goto B4f8129;
case 0x4f812c:c.instructions+=2;goto B4f812c;
case 0x4f812f:c.instructions+=1;goto B4f812f;
case 0x4f8134:goto L4f8134;
case 0x4f8135:c.instructions+=3;goto B4f8135;
case 0x4f8138:c.instructions+=2;goto B4f8138;
case 0x4f8139:c.instructions+=1;goto B4f8139;
case 0x4f813e:goto L4f813e;
case 0x4f8140:c.instructions+=3;goto B4f8140;
case 0x4f8143:c.instructions+=2;goto B4f8143;
case 0x4f8145:c.instructions+=1;goto B4f8145;
case 0x4f8147:goto L4f8147;
case 0x4f814c:goto L4f814c;
case 0x4f814e:c.instructions+=1;goto B4f814e;
case 0x4f8150:goto L4f8150;
case 0x4f8153:c.instructions+=1;goto B4f8153;
case 0x4f8155:goto L4f8155;
case 0x4f8157:goto L4f8157;
case 0x4f815a:c.instructions+=4;goto B4f815a;
case 0x4f815c:c.instructions+=3;goto B4f815c;
case 0x4f815f:c.instructions+=2;goto B4f815f;
case 0x4f8162:c.instructions+=1;goto B4f8162;
case 0x4f8164:goto L4f8164;
case 0x4f8169:c.instructions+=2;goto B4f8169;
case 0x4f816c:c.instructions+=1;goto B4f816c;
case 0x4f8171:goto L4f8171;
case 0x4f8174:c.instructions+=3;goto B4f8174;
case 0x4f8175:c.instructions+=2;goto B4f8175;
case 0x4f8176:c.instructions+=1;goto B4f8176;
case 0x4f817b:goto L4f817b;
case 0x4f817d:c.instructions+=3;goto B4f817d;
case 0x4f8180:c.instructions+=2;goto B4f8180;
case 0x4f8182:c.instructions+=1;goto B4f8182;
case 0x4f8184:goto L4f8184;
case 0x4f8189:goto L4f8189;
case 0x4f818b:c.instructions+=1;goto B4f818b;
case 0x4f818d:goto L4f818d;
case 0x4f8190:c.instructions+=1;goto B4f8190;
case 0x4f8192:goto L4f8192;
case 0x4f8194:goto L4f8194;
case 0x4f8197:c.instructions+=4;goto B4f8197;
case 0x4f8199:c.instructions+=3;goto B4f8199;
case 0x4f819c:c.instructions+=2;goto B4f819c;
case 0x4f819f:c.instructions+=1;goto B4f819f;
case 0x4f81a1:goto L4f81a1;
case 0x4f81a6:c.instructions+=2;goto B4f81a6;
case 0x4f81a9:c.instructions+=1;goto B4f81a9;
case 0x4f81ae:goto L4f81ae;
case 0x4f81b1:c.instructions+=3;goto B4f81b1;
case 0x4f81b2:c.instructions+=2;goto B4f81b2;
case 0x4f81b3:c.instructions+=1;goto B4f81b3;
case 0x4f81b8:goto L4f81b8;
case 0x4f81ba:c.instructions+=3;goto B4f81ba;
case 0x4f81bd:c.instructions+=2;goto B4f81bd;
case 0x4f81bf:c.instructions+=1;goto B4f81bf;
case 0x4f81c1:goto L4f81c1;
case 0x4f81c6:goto L4f81c6;
case 0x4f81c8:c.instructions+=1;goto B4f81c8;
case 0x4f81ca:goto L4f81ca;
case 0x4f81cd:c.instructions+=1;goto B4f81cd;
case 0x4f81cf:goto L4f81cf;
case 0x4f81d1:goto L4f81d1;
case 0x4f81d4:c.instructions+=4;goto B4f81d4;
case 0x4f81d6:c.instructions+=3;goto B4f81d6;
case 0x4f81d9:c.instructions+=2;goto B4f81d9;
case 0x4f81dc:c.instructions+=1;goto B4f81dc;
case 0x4f81de:goto L4f81de;
case 0x4f81e3:c.instructions+=2;goto B4f81e3;
case 0x4f81e6:c.instructions+=1;goto B4f81e6;
case 0x4f81eb:goto L4f81eb;
case 0x4f81ec:c.instructions+=3;goto B4f81ec;
case 0x4f81ef:c.instructions+=2;goto B4f81ef;
case 0x4f81f0:c.instructions+=1;goto B4f81f0;
case 0x4f81f5:goto L4f81f5;
case 0x4f81f7:c.instructions+=3;goto B4f81f7;
case 0x4f81fa:c.instructions+=2;goto B4f81fa;
case 0x4f81fc:c.instructions+=1;goto B4f81fc;
case 0x4f81fe:goto L4f81fe;
case 0x4f8203:goto L4f8203;
case 0x4f8205:c.instructions+=1;goto B4f8205;
case 0x4f8207:goto L4f8207;
case 0x4f820a:c.instructions+=1;goto B4f820a;
case 0x4f820c:goto L4f820c;
case 0x4f820e:goto L4f820e;
case 0x4f8211:c.instructions+=4;goto B4f8211;
case 0x4f8213:c.instructions+=3;goto B4f8213;
case 0x4f8216:c.instructions+=2;goto B4f8216;
case 0x4f8219:c.instructions+=1;goto B4f8219;
case 0x4f821b:goto L4f821b;
case 0x4f821e:c.instructions+=3;goto B4f821e;
case 0x4f821f:c.instructions+=2;goto B4f821f;
case 0x4f8222:c.instructions+=1;goto B4f8222;
case 0x4f8227:goto L4f8227;
case 0x4f822a:c.instructions+=2;goto B4f822a;
case 0x4f822b:c.instructions+=1;goto B4f822b;
case 0x4f8230:goto L4f8230;
case 0x4f8233:c.instructions+=2;goto B4f8233;
case 0x4f8234:c.instructions+=1;goto B4f8234;
case 0x4f8239:goto L4f8239;
case 0x4f823c:c.instructions+=2;goto B4f823c;
case 0x4f823d:c.instructions+=1;goto B4f823d;
case 0x4f8242:goto L4f8242;
case 0x4f8245:c.instructions+=1;goto B4f8245;
case 0x4f8248:goto L4f8248;
case 0x4f824b:c.instructions+=6;goto B4f824b;
case 0x4f824c:c.instructions+=5;goto B4f824c;
case 0x4f8250:c.instructions+=4;goto B4f8250;
case 0x4f8255:c.instructions+=3;goto B4f8255;
case 0x4f8256:c.instructions+=2;goto B4f8256;
case 0x4f825a:c.instructions+=1;goto B4f825a;
case 0x4f825f:goto L4f825f;
case 0x4f8263:c.instructions+=2;goto B4f8263;
case 0x4f8264:c.instructions+=1;goto B4f8264;
case 0x4f8269:goto L4f8269;
case 0x4f826c:c.instructions+=3;goto B4f826c;
case 0x4f826d:c.instructions+=2;goto B4f826d;
case 0x4f826e:c.instructions+=1;goto B4f826e;
case 0x4f8273:goto L4f8273;
case 0x4f8275:c.instructions+=3;goto B4f8275;
case 0x4f8278:c.instructions+=2;goto B4f8278;
case 0x4f827a:c.instructions+=1;goto B4f827a;
case 0x4f827c:goto L4f827c;
case 0x4f8281:goto L4f8281;
case 0x4f8283:c.instructions+=1;goto B4f8283;
case 0x4f8285:goto L4f8285;
case 0x4f8288:c.instructions+=1;goto B4f8288;
case 0x4f828a:goto L4f828a;
case 0x4f828c:goto L4f828c;
case 0x4f828f:c.instructions+=4;goto B4f828f;
case 0x4f8291:c.instructions+=3;goto B4f8291;
case 0x4f8294:c.instructions+=2;goto B4f8294;
case 0x4f8297:c.instructions+=1;goto B4f8297;
case 0x4f8299:goto L4f8299;
case 0x4f829b:c.instructions+=3;goto B4f829b;
case 0x4f82a0:c.instructions+=2;goto B4f82a0;
case 0x4f82a2:c.instructions+=1;goto B4f82a2;
case 0x4f82a8:goto L4f82a8;
case 0x4f82ae:c.instructions+=2;goto B4f82ae;
case 0x4f82af:c.instructions+=1;goto B4f82af;
case 0x4f82b4:goto L4f82b4;
case 0x4f82b6:c.instructions+=2;goto B4f82b6;
case 0x4f82b8:c.instructions+=1;goto B4f82b8;
case 0x4f82be:goto L4f82be;
case 0x4f82c3:c.instructions+=1;goto B4f82c3;
case 0x4f82c8:goto L4f82c8;
case 0x4f82ca:c.instructions+=1;goto B4f82ca;
case 0x4f82d0:goto L4f82d0;
case 0x4f82d4:c.instructions+=3;goto B4f82d4;
case 0x4f82d5:c.instructions+=2;goto B4f82d5;
case 0x4f82da:c.instructions+=1;goto B4f82da;
case 0x4f82df:goto L4f82df;
case 0x4f82e1:c.instructions+=1;goto B4f82e1;
case 0x4f82e3:goto L4f82e3;
case 0x4f82e9:c.instructions+=1;goto B4f82e9;
case 0x4f82eb:goto L4f82eb;
case 0x4f82ef:c.instructions+=3;goto B4f82ef;
case 0x4f82f0:c.instructions+=2;goto B4f82f0;
case 0x4f82f5:c.instructions+=1;goto B4f82f5;
case 0x4f82fa:goto L4f82fa;
case 0x4f82fc:c.instructions+=2;goto B4f82fc;
case 0x4f82ff:c.instructions+=1;goto B4f82ff;
case 0x4f8301:goto L4f8301;
case 0x4f8306:c.instructions+=9;goto B4f8306;
case 0x4f8308:c.instructions+=8;goto B4f8308;
case 0x4f830c:c.instructions+=7;goto B4f830c;
case 0x4f830d:c.instructions+=6;goto B4f830d;
case 0x4f830f:c.instructions+=5;goto B4f830f;
case 0x4f8313:c.instructions+=4;goto B4f8313;
case 0x4f8317:c.instructions+=3;goto B4f8317;
case 0x4f831b:c.instructions+=2;goto B4f831b;
case 0x4f831f:c.instructions+=1;goto B4f831f;
case 0x4f8324:goto L4f8324;
case 0x4f8326:c.instructions+=12;goto B4f8326;
case 0x4f832a:c.instructions+=11;goto B4f832a;
case 0x4f832c:c.instructions+=10;goto B4f832c;
case 0x4f8330:c.instructions+=9;goto B4f8330;
case 0x4f8332:c.instructions+=8;goto B4f8332;
case 0x4f8335:c.instructions+=7;goto B4f8335;
case 0x4f833b:c.instructions+=6;goto B4f833b;
case 0x4f833c:c.instructions+=5;goto B4f833c;
case 0x4f833f:c.instructions+=4;goto B4f833f;
case 0x4f8341:c.instructions+=3;goto B4f8341;
case 0x4f8346:c.instructions+=2;goto B4f8346;
case 0x4f8347:c.instructions+=1;goto B4f8347;
case 0x4f834c:goto L4f834c;
case 0x4f834e:c.instructions+=2;goto B4f834e;
case 0x4f834f:c.instructions+=1;goto B4f834f;
case 0x4f8354:goto L4f8354;
case 0x4f8357:c.instructions+=1;goto B4f8357;
case 0x4f8359:goto L4f8359;
case 0x4f835b:c.instructions+=2;goto B4f835b;
case 0x4f835c:c.instructions+=1;goto B4f835c;
case 0x4f8361:goto L4f8361;
case 0x4f8364:goto L4f8364;
case 0x4f8368:c.instructions+=3;goto B4f8368;
case 0x4f836b:c.instructions+=2;goto B4f836b;
case 0x4f836e:c.instructions+=1;goto B4f836e;
case 0x4f8374:goto L4f8374;
case 0x4f8376:c.instructions+=1;goto B4f8376;
case 0x4f837b:goto L4f837b;
case 0x4f837d:c.instructions+=3;goto B4f837d;
case 0x4f8380:c.instructions+=2;goto B4f8380;
case 0x4f8382:c.instructions+=1;goto B4f8382;
case 0x4f8384:goto L4f8384;
case 0x4f8387:c.instructions+=11;goto B4f8387;
case 0x4f838a:c.instructions+=10;goto B4f838a;
case 0x4f838d:c.instructions+=9;goto B4f838d;
case 0x4f838f:c.instructions+=8;goto B4f838f;
case 0x4f8392:c.instructions+=7;goto B4f8392;
case 0x4f8395:c.instructions+=6;goto B4f8395;
case 0x4f839c:c.instructions+=5;goto B4f839c;
case 0x4f839e:c.instructions+=4;goto B4f839e;
case 0x4f83a5:c.instructions+=3;goto B4f83a5;
case 0x4f83a8:c.instructions+=2;goto B4f83a8;
case 0x4f83ab:c.instructions+=1;goto B4f83ab;
case 0x4f83ad:goto L4f83ad;
case 0x4f83b0:goto L4f83b0;
case 0x4f83b4:c.instructions+=8;goto B4f83b4;
case 0x4f83b5:c.instructions+=7;goto B4f83b5;
case 0x4f83b7:c.instructions+=6;goto B4f83b7;
case 0x4f83b8:c.instructions+=5;goto B4f83b8;
case 0x4f83b9:c.instructions+=4;goto B4f83b9;
case 0x4f83ba:c.instructions+=3;goto B4f83ba;
case 0x4f83c1:c.instructions+=2;goto B4f83c1;
case 0x4f83c4:c.instructions+=1;goto B4f83c4;
case 0x4f83d0:goto L4f83d0;
case 0x4f83d2:c.instructions+=23;goto B4f83d2;
case 0x4f83d7:c.instructions+=22;goto B4f83d7;
case 0x4f83dd:c.instructions+=21;goto B4f83dd;
case 0x4f83de:c.instructions+=20;goto B4f83de;
case 0x4f83e5:c.instructions+=19;goto B4f83e5;
case 0x4f83e6:c.instructions+=18;goto B4f83e6;
case 0x4f83ea:c.instructions+=17;goto B4f83ea;
case 0x4f83eb:c.instructions+=16;goto B4f83eb;
case 0x4f83ec:c.instructions+=15;goto B4f83ec;
case 0x4f83ee:c.instructions+=14;goto B4f83ee;
case 0x4f83f0:c.instructions+=13;goto B4f83f0;
case 0x4f83f1:c.instructions+=12;goto B4f83f1;
case 0x4f83f5:c.instructions+=11;goto B4f83f5;
case 0x4f83f7:c.instructions+=10;goto B4f83f7;
case 0x4f83fa:c.instructions+=9;goto B4f83fa;
case 0x4f83fd:c.instructions+=8;goto B4f83fd;
case 0x4f8400:c.instructions+=7;goto B4f8400;
case 0x4f8407:c.instructions+=6;goto B4f8407;
case 0x4f840a:c.instructions+=5;goto B4f840a;
case 0x4f840d:c.instructions+=4;goto B4f840d;
case 0x4f8411:c.instructions+=3;goto B4f8411;
case 0x4f8414:c.instructions+=2;goto B4f8414;
case 0x4f8419:c.instructions+=1;goto B4f8419;
case 0x4f8420:goto L4f8420;
case 0x4f8422:c.instructions+=3;goto B4f8422;
case 0x4f8425:c.instructions+=2;goto B4f8425;
case 0x4f8426:c.instructions+=1;goto B4f8426;
case 0x4f8428:goto L4f8428;
case 0x4f842b:c.instructions+=45;goto B4f842b;
case 0x4f842e:c.instructions+=44;goto B4f842e;
case 0x4f8431:c.instructions+=43;goto B4f8431;
case 0x4f8434:c.instructions+=42;goto B4f8434;
case 0x4f8437:c.instructions+=41;goto B4f8437;
case 0x4f843a:c.instructions+=40;goto B4f843a;
case 0x4f843d:c.instructions+=39;goto B4f843d;
case 0x4f8440:c.instructions+=38;goto B4f8440;
case 0x4f8443:c.instructions+=37;goto B4f8443;
case 0x4f8449:c.instructions+=36;goto B4f8449;
case 0x4f844c:c.instructions+=35;goto B4f844c;
case 0x4f8452:c.instructions+=34;goto B4f8452;
case 0x4f8458:c.instructions+=33;goto B4f8458;
case 0x4f845e:c.instructions+=32;goto B4f845e;
case 0x4f8464:c.instructions+=31;goto B4f8464;
case 0x4f846a:c.instructions+=30;goto B4f846a;
case 0x4f8470:c.instructions+=29;goto B4f8470;
case 0x4f8476:c.instructions+=28;goto B4f8476;
case 0x4f847c:c.instructions+=27;goto B4f847c;
case 0x4f8482:c.instructions+=26;goto B4f8482;
case 0x4f8488:c.instructions+=25;goto B4f8488;
case 0x4f848e:c.instructions+=24;goto B4f848e;
case 0x4f8494:c.instructions+=23;goto B4f8494;
case 0x4f849a:c.instructions+=22;goto B4f849a;
case 0x4f84a0:c.instructions+=21;goto B4f84a0;
case 0x4f84a6:c.instructions+=20;goto B4f84a6;
case 0x4f84ac:c.instructions+=19;goto B4f84ac;
case 0x4f84b2:c.instructions+=18;goto B4f84b2;
case 0x4f84b8:c.instructions+=17;goto B4f84b8;
case 0x4f84be:c.instructions+=16;goto B4f84be;
case 0x4f84c4:c.instructions+=15;goto B4f84c4;
case 0x4f84ca:c.instructions+=14;goto B4f84ca;
case 0x4f84d0:c.instructions+=13;goto B4f84d0;
case 0x4f84d6:c.instructions+=12;goto B4f84d6;
case 0x4f84dc:c.instructions+=11;goto B4f84dc;
case 0x4f84e2:c.instructions+=10;goto B4f84e2;
case 0x4f84e3:c.instructions+=9;goto B4f84e3;
case 0x4f84e9:c.instructions+=8;goto B4f84e9;
case 0x4f84ef:c.instructions+=7;goto B4f84ef;
case 0x4f84f5:c.instructions+=6;goto B4f84f5;
case 0x4f84fb:c.instructions+=5;goto B4f84fb;
case 0x4f8501:c.instructions+=4;goto B4f8501;
case 0x4f8504:c.instructions+=3;goto B4f8504;
case 0x4f8509:c.instructions+=2;goto B4f8509;
case 0x4f850a:c.instructions+=1;goto B4f850a;
case 0x4f850f:goto L4f850f;
case 0x4f8511:c.instructions+=3;goto B4f8511;
case 0x4f8514:c.instructions+=2;goto B4f8514;
case 0x4f8516:c.instructions+=1;goto B4f8516;
case 0x4f8518:goto L4f8518;
case 0x4f851d:goto L4f851d;
case 0x4f851f:c.instructions+=1;goto B4f851f;
case 0x4f8521:goto L4f8521;
case 0x4f8524:c.instructions+=1;goto B4f8524;
case 0x4f8526:goto L4f8526;
case 0x4f8528:goto L4f8528;
case 0x4f852b:c.instructions+=4;goto B4f852b;
case 0x4f852d:c.instructions+=3;goto B4f852d;
case 0x4f8530:c.instructions+=2;goto B4f8530;
case 0x4f8533:c.instructions+=1;goto B4f8533;
case 0x4f8535:goto L4f8535;
case 0x4f8538:c.instructions+=5;goto B4f8538;
case 0x4f853d:c.instructions+=4;goto B4f853d;
case 0x4f853e:c.instructions+=3;goto B4f853e;
case 0x4f8540:c.instructions+=2;goto B4f8540;
case 0x4f8543:c.instructions+=1;goto B4f8543;
case 0x4f8548:goto L4f8548;
case 0x4f854b:c.instructions+=4;goto B4f854b;
case 0x4f854d:c.instructions+=3;goto B4f854d;
case 0x4f854f:c.instructions+=2;goto B4f854f;
case 0x4f8550:c.instructions+=1;goto B4f8550;
case 0x4f8552:goto L4f8552;
case 0x4f8557:goto L4f8557;
case 0x4f8559:c.instructions+=1;goto B4f8559;
case 0x4f855b:goto L4f855b;
case 0x4f855e:c.instructions+=1;goto B4f855e;
case 0x4f8560:goto L4f8560;
case 0x4f8562:goto L4f8562;
case 0x4f8565:c.instructions+=4;goto B4f8565;
case 0x4f8567:c.instructions+=3;goto B4f8567;
case 0x4f856a:c.instructions+=2;goto B4f856a;
case 0x4f856d:c.instructions+=1;goto B4f856d;
case 0x4f856f:goto L4f856f;
case 0x4f8572:c.instructions+=4;goto B4f8572;
case 0x4f8577:c.instructions+=3;goto B4f8577;
case 0x4f8578:c.instructions+=2;goto B4f8578;
case 0x4f857b:c.instructions+=1;goto B4f857b;
case 0x4f8580:goto L4f8580;
case 0x4f8582:c.instructions+=3;goto B4f8582;
case 0x4f8585:c.instructions+=2;goto B4f8585;
case 0x4f8587:c.instructions+=1;goto B4f8587;
case 0x4f8589:goto L4f8589;
case 0x4f858e:goto L4f858e;
case 0x4f8590:c.instructions+=1;goto B4f8590;
case 0x4f8592:goto L4f8592;
case 0x4f8595:c.instructions+=1;goto B4f8595;
case 0x4f8597:goto L4f8597;
case 0x4f8599:goto L4f8599;
case 0x4f859c:c.instructions+=4;goto B4f859c;
case 0x4f859e:c.instructions+=3;goto B4f859e;
case 0x4f85a1:c.instructions+=2;goto B4f85a1;
case 0x4f85a4:c.instructions+=1;goto B4f85a4;
case 0x4f85a6:goto L4f85a6;
case 0x4f85a9:c.instructions+=5;goto B4f85a9;
case 0x4f85ae:c.instructions+=4;goto B4f85ae;
case 0x4f85af:c.instructions+=3;goto B4f85af;
case 0x4f85b2:c.instructions+=2;goto B4f85b2;
case 0x4f85b5:c.instructions+=1;goto B4f85b5;
case 0x4f85ba:goto L4f85ba;
case 0x4f85bc:c.instructions+=3;goto B4f85bc;
case 0x4f85bf:c.instructions+=2;goto B4f85bf;
case 0x4f85c1:c.instructions+=1;goto B4f85c1;
case 0x4f85c3:goto L4f85c3;
case 0x4f85c8:goto L4f85c8;
case 0x4f85ca:c.instructions+=1;goto B4f85ca;
case 0x4f85cc:goto L4f85cc;
case 0x4f85cf:c.instructions+=1;goto B4f85cf;
case 0x4f85d1:goto L4f85d1;
case 0x4f85d3:goto L4f85d3;
case 0x4f85d6:c.instructions+=4;goto B4f85d6;
case 0x4f85d8:c.instructions+=3;goto B4f85d8;
case 0x4f85db:c.instructions+=2;goto B4f85db;
case 0x4f85de:c.instructions+=1;goto B4f85de;
case 0x4f85e0:goto L4f85e0;
case 0x4f85e3:c.instructions+=4;goto B4f85e3;
case 0x4f85e8:c.instructions+=3;goto B4f85e8;
case 0x4f85e9:c.instructions+=2;goto B4f85e9;
case 0x4f85ec:c.instructions+=1;goto B4f85ec;
case 0x4f85f1:goto L4f85f1;
case 0x4f85f3:c.instructions+=3;goto B4f85f3;
case 0x4f85f6:c.instructions+=2;goto B4f85f6;
case 0x4f85f8:c.instructions+=1;goto B4f85f8;
case 0x4f85fa:goto L4f85fa;
case 0x4f85ff:goto L4f85ff;
case 0x4f8601:c.instructions+=1;goto B4f8601;
case 0x4f8603:goto L4f8603;
case 0x4f8606:c.instructions+=1;goto B4f8606;
case 0x4f8608:goto L4f8608;
case 0x4f860a:goto L4f860a;
case 0x4f860d:c.instructions+=4;goto B4f860d;
case 0x4f860f:c.instructions+=3;goto B4f860f;
case 0x4f8612:c.instructions+=2;goto B4f8612;
case 0x4f8615:c.instructions+=1;goto B4f8615;
case 0x4f8617:goto L4f8617;
case 0x4f861a:c.instructions+=4;goto B4f861a;
case 0x4f861f:c.instructions+=3;goto B4f861f;
case 0x4f8620:c.instructions+=2;goto B4f8620;
case 0x4f8623:c.instructions+=1;goto B4f8623;
case 0x4f8628:goto L4f8628;
case 0x4f862a:c.instructions+=3;goto B4f862a;
case 0x4f862d:c.instructions+=2;goto B4f862d;
case 0x4f862f:c.instructions+=1;goto B4f862f;
case 0x4f8631:goto L4f8631;
case 0x4f8636:goto L4f8636;
case 0x4f8638:c.instructions+=1;goto B4f8638;
case 0x4f863a:goto L4f863a;
case 0x4f863d:c.instructions+=1;goto B4f863d;
case 0x4f863f:goto L4f863f;
case 0x4f8641:goto L4f8641;
case 0x4f8644:c.instructions+=4;goto B4f8644;
case 0x4f8646:c.instructions+=3;goto B4f8646;
case 0x4f8649:c.instructions+=2;goto B4f8649;
case 0x4f864c:c.instructions+=1;goto B4f864c;
case 0x4f864e:goto L4f864e;
case 0x4f8651:c.instructions+=4;goto B4f8651;
case 0x4f8656:c.instructions+=3;goto B4f8656;
case 0x4f8657:c.instructions+=2;goto B4f8657;
case 0x4f865a:c.instructions+=1;goto B4f865a;
case 0x4f865f:goto L4f865f;
case 0x4f8661:c.instructions+=3;goto B4f8661;
case 0x4f8664:c.instructions+=2;goto B4f8664;
case 0x4f8666:c.instructions+=1;goto B4f8666;
case 0x4f8668:goto L4f8668;
case 0x4f866d:goto L4f866d;
case 0x4f866f:c.instructions+=1;goto B4f866f;
case 0x4f8671:goto L4f8671;
case 0x4f8674:c.instructions+=1;goto B4f8674;
case 0x4f8676:goto L4f8676;
case 0x4f8678:goto L4f8678;
case 0x4f867b:c.instructions+=4;goto B4f867b;
case 0x4f867d:c.instructions+=3;goto B4f867d;
case 0x4f8680:c.instructions+=2;goto B4f8680;
case 0x4f8683:c.instructions+=1;goto B4f8683;
case 0x4f8685:goto L4f8685;
case 0x4f8688:c.instructions+=3;goto B4f8688;
case 0x4f868d:c.instructions+=2;goto B4f868d;
case 0x4f868e:c.instructions+=1;goto B4f868e;
case 0x4f8693:goto L4f8693;
case 0x4f8695:c.instructions+=3;goto B4f8695;
case 0x4f8698:c.instructions+=2;goto B4f8698;
case 0x4f869a:c.instructions+=1;goto B4f869a;
case 0x4f869c:goto L4f869c;
case 0x4f86a1:goto L4f86a1;
case 0x4f86a3:c.instructions+=1;goto B4f86a3;
case 0x4f86a5:goto L4f86a5;
case 0x4f86a8:c.instructions+=1;goto B4f86a8;
case 0x4f86aa:goto L4f86aa;
case 0x4f86ad:c.instructions+=4;goto B4f86ad;
case 0x4f86af:c.instructions+=3;goto B4f86af;
case 0x4f86b2:c.instructions+=2;goto B4f86b2;
case 0x4f86b5:c.instructions+=1;goto B4f86b5;
case 0x4f86b7:goto L4f86b7;
case 0x4f86bb:c.instructions+=7;goto B4f86bb;
case 0x4f86bc:c.instructions+=6;goto B4f86bc;
case 0x4f86be:c.instructions+=5;goto B4f86be;
case 0x4f86bf:c.instructions+=4;goto B4f86bf;
case 0x4f86c0:c.instructions+=3;goto B4f86c0;
case 0x4f86c7:c.instructions+=2;goto B4f86c7;
case 0x4f86ca:c.instructions+=1;goto B4f86ca;
case 0x4f86d0:goto L4f86d0;
case 0x4f86d2:c.instructions+=22;goto B4f86d2;
case 0x4f86d7:c.instructions+=21;goto B4f86d7;
case 0x4f86dd:c.instructions+=20;goto B4f86dd;
case 0x4f86de:c.instructions+=19;goto B4f86de;
case 0x4f86e5:c.instructions+=18;goto B4f86e5;
case 0x4f86e6:c.instructions+=17;goto B4f86e6;
case 0x4f86ea:c.instructions+=16;goto B4f86ea;
case 0x4f86eb:c.instructions+=15;goto B4f86eb;
case 0x4f86ec:c.instructions+=14;goto B4f86ec;
case 0x4f86ee:c.instructions+=13;goto B4f86ee;
case 0x4f86f0:c.instructions+=12;goto B4f86f0;
case 0x4f86f1:c.instructions+=11;goto B4f86f1;
case 0x4f86f5:c.instructions+=10;goto B4f86f5;
case 0x4f86f7:c.instructions+=9;goto B4f86f7;
case 0x4f86fa:c.instructions+=8;goto B4f86fa;
case 0x4f86fd:c.instructions+=7;goto B4f86fd;
case 0x4f8700:c.instructions+=6;goto B4f8700;
case 0x4f8707:c.instructions+=5;goto B4f8707;
case 0x4f870a:c.instructions+=4;goto B4f870a;
case 0x4f870d:c.instructions+=3;goto B4f870d;
case 0x4f8712:c.instructions+=2;goto B4f8712;
case 0x4f8716:c.instructions+=1;goto B4f8716;
case 0x4f871b:goto L4f871b;
case 0x4f871e:c.instructions+=3;goto B4f871e;
case 0x4f871f:c.instructions+=2;goto B4f871f;
case 0x4f8720:c.instructions+=1;goto B4f8720;
case 0x4f8725:goto L4f8725;
case 0x4f8727:c.instructions+=3;goto B4f8727;
case 0x4f872a:c.instructions+=2;goto B4f872a;
case 0x4f872c:c.instructions+=1;goto B4f872c;
case 0x4f872e:goto L4f872e;
case 0x4f8733:goto L4f8733;
case 0x4f8735:c.instructions+=1;goto B4f8735;
case 0x4f8737:goto L4f8737;
case 0x4f873a:c.instructions+=1;goto B4f873a;
case 0x4f873c:goto L4f873c;
case 0x4f873e:goto L4f873e;
case 0x4f8741:c.instructions+=4;goto B4f8741;
case 0x4f8743:c.instructions+=3;goto B4f8743;
case 0x4f8746:c.instructions+=2;goto B4f8746;
case 0x4f8749:c.instructions+=1;goto B4f8749;
case 0x4f874b:goto L4f874b;
case 0x4f8750:c.instructions+=1;goto B4f8750;
case 0x4f8755:goto L4f8755;
case 0x4f8758:c.instructions+=3;goto B4f8758;
case 0x4f8759:c.instructions+=2;goto B4f8759;
case 0x4f875a:c.instructions+=1;goto B4f875a;
case 0x4f875f:goto L4f875f;
case 0x4f8761:c.instructions+=3;goto B4f8761;
case 0x4f8764:c.instructions+=2;goto B4f8764;
case 0x4f8766:c.instructions+=1;goto B4f8766;
case 0x4f8768:goto L4f8768;
case 0x4f876d:goto L4f876d;
case 0x4f876f:c.instructions+=1;goto B4f876f;
case 0x4f8771:goto L4f8771;
case 0x4f8774:c.instructions+=1;goto B4f8774;
case 0x4f8776:goto L4f8776;
case 0x4f8778:goto L4f8778;
case 0x4f877b:c.instructions+=4;goto B4f877b;
case 0x4f877d:c.instructions+=3;goto B4f877d;
case 0x4f8780:c.instructions+=2;goto B4f8780;
case 0x4f8783:c.instructions+=1;goto B4f8783;
case 0x4f8785:goto L4f8785;
case 0x4f878a:c.instructions+=1;goto B4f878a;
case 0x4f878f:goto L4f878f;
case 0x4f8790:c.instructions+=3;goto B4f8790;
case 0x4f8793:c.instructions+=2;goto B4f8793;
case 0x4f8794:c.instructions+=1;goto B4f8794;
case 0x4f8799:goto L4f8799;
case 0x4f879b:c.instructions+=3;goto B4f879b;
case 0x4f879e:c.instructions+=2;goto B4f879e;
case 0x4f87a0:c.instructions+=1;goto B4f87a0;
case 0x4f87a2:goto L4f87a2;
case 0x4f87a7:goto L4f87a7;
case 0x4f87a9:c.instructions+=1;goto B4f87a9;
case 0x4f87ab:goto L4f87ab;
case 0x4f87ae:c.instructions+=1;goto B4f87ae;
case 0x4f87b0:goto L4f87b0;
case 0x4f87b2:goto L4f87b2;
case 0x4f87b5:c.instructions+=4;goto B4f87b5;
case 0x4f87b7:c.instructions+=3;goto B4f87b7;
case 0x4f87ba:c.instructions+=2;goto B4f87ba;
case 0x4f87bd:c.instructions+=1;goto B4f87bd;
case 0x4f87bf:goto L4f87bf;
case 0x4f87c3:c.instructions+=8;goto B4f87c3;
case 0x4f87c6:c.instructions+=7;goto B4f87c6;
case 0x4f87c7:c.instructions+=6;goto B4f87c7;
case 0x4f87c9:c.instructions+=5;goto B4f87c9;
case 0x4f87ca:c.instructions+=4;goto B4f87ca;
case 0x4f87cb:c.instructions+=3;goto B4f87cb;
case 0x4f87d2:c.instructions+=2;goto B4f87d2;
case 0x4f87d5:c.instructions+=1;goto B4f87d5;
case 0x4f87e0:goto L4f87e0;
case 0x4f87e2:c.instructions+=27;goto B4f87e2;
case 0x4f87e7:c.instructions+=26;goto B4f87e7;
case 0x4f87ed:c.instructions+=25;goto B4f87ed;
case 0x4f87ee:c.instructions+=24;goto B4f87ee;
case 0x4f87f5:c.instructions+=23;goto B4f87f5;
case 0x4f87f6:c.instructions+=22;goto B4f87f6;
case 0x4f87fa:c.instructions+=21;goto B4f87fa;
case 0x4f87fb:c.instructions+=20;goto B4f87fb;
case 0x4f87fc:c.instructions+=19;goto B4f87fc;
case 0x4f87fe:c.instructions+=18;goto B4f87fe;
case 0x4f8800:c.instructions+=17;goto B4f8800;
case 0x4f8801:c.instructions+=16;goto B4f8801;
case 0x4f8805:c.instructions+=15;goto B4f8805;
case 0x4f8807:c.instructions+=14;goto B4f8807;
case 0x4f880a:c.instructions+=13;goto B4f880a;
case 0x4f880d:c.instructions+=12;goto B4f880d;
case 0x4f8810:c.instructions+=11;goto B4f8810;
case 0x4f8817:c.instructions+=10;goto B4f8817;
case 0x4f881a:c.instructions+=9;goto B4f881a;
case 0x4f881d:c.instructions+=8;goto B4f881d;
case 0x4f8820:c.instructions+=7;goto B4f8820;
case 0x4f8823:c.instructions+=6;goto B4f8823;
case 0x4f8828:c.instructions+=5;goto B4f8828;
case 0x4f882c:c.instructions+=4;goto B4f882c;
case 0x4f882f:c.instructions+=3;goto B4f882f;
case 0x4f8833:c.instructions+=2;goto B4f8833;
case 0x4f8837:c.instructions+=1;goto B4f8837;
case 0x4f883c:goto L4f883c;
case 0x4f883f:c.instructions+=3;goto B4f883f;
case 0x4f8840:c.instructions+=2;goto B4f8840;
case 0x4f8841:c.instructions+=1;goto B4f8841;
case 0x4f8846:goto L4f8846;
case 0x4f8848:c.instructions+=3;goto B4f8848;
case 0x4f884b:c.instructions+=2;goto B4f884b;
case 0x4f884d:c.instructions+=1;goto B4f884d;
case 0x4f884f:goto L4f884f;
case 0x4f8854:goto L4f8854;
case 0x4f8856:c.instructions+=1;goto B4f8856;
case 0x4f8858:goto L4f8858;
case 0x4f885b:c.instructions+=1;goto B4f885b;
case 0x4f885d:goto L4f885d;
case 0x4f885f:goto L4f885f;
case 0x4f8862:c.instructions+=4;goto B4f8862;
case 0x4f8864:c.instructions+=3;goto B4f8864;
case 0x4f8867:c.instructions+=2;goto B4f8867;
case 0x4f886a:c.instructions+=1;goto B4f886a;
case 0x4f886c:goto L4f886c;
case 0x4f8871:c.instructions+=2;goto B4f8871;
case 0x4f8874:c.instructions+=1;goto B4f8874;
case 0x4f8879:goto L4f8879;
case 0x4f887c:c.instructions+=3;goto B4f887c;
case 0x4f887d:c.instructions+=2;goto B4f887d;
case 0x4f887e:c.instructions+=1;goto B4f887e;
case 0x4f8883:goto L4f8883;
case 0x4f8885:c.instructions+=3;goto B4f8885;
case 0x4f8888:c.instructions+=2;goto B4f8888;
case 0x4f888a:c.instructions+=1;goto B4f888a;
case 0x4f888c:goto L4f888c;
case 0x4f8891:goto L4f8891;
case 0x4f8893:c.instructions+=1;goto B4f8893;
case 0x4f8895:goto L4f8895;
case 0x4f8898:c.instructions+=1;goto B4f8898;
case 0x4f889a:goto L4f889a;
case 0x4f889c:goto L4f889c;
case 0x4f889f:c.instructions+=4;goto B4f889f;
case 0x4f88a1:c.instructions+=3;goto B4f88a1;
case 0x4f88a4:c.instructions+=2;goto B4f88a4;
case 0x4f88a7:c.instructions+=1;goto B4f88a7;
case 0x4f88a9:goto L4f88a9;
case 0x4f88ae:c.instructions+=2;goto B4f88ae;
case 0x4f88b1:c.instructions+=1;goto B4f88b1;
case 0x4f88b6:goto L4f88b6;
case 0x4f88b7:c.instructions+=3;goto B4f88b7;
case 0x4f88ba:c.instructions+=2;goto B4f88ba;
case 0x4f88bb:c.instructions+=1;goto B4f88bb;
case 0x4f88c0:goto L4f88c0;
case 0x4f88c2:c.instructions+=3;goto B4f88c2;
case 0x4f88c5:c.instructions+=2;goto B4f88c5;
case 0x4f88c7:c.instructions+=1;goto B4f88c7;
case 0x4f88c9:goto L4f88c9;
case 0x4f88ce:goto L4f88ce;
case 0x4f88d0:c.instructions+=1;goto B4f88d0;
case 0x4f88d2:goto L4f88d2;
case 0x4f88d5:c.instructions+=1;goto B4f88d5;
case 0x4f88d7:goto L4f88d7;
case 0x4f88d9:goto L4f88d9;
case 0x4f88dc:c.instructions+=4;goto B4f88dc;
case 0x4f88de:c.instructions+=3;goto B4f88de;
case 0x4f88e1:c.instructions+=2;goto B4f88e1;
case 0x4f88e4:c.instructions+=1;goto B4f88e4;
case 0x4f88e6:goto L4f88e6;
case 0x4f88eb:c.instructions+=2;goto B4f88eb;
case 0x4f88ee:c.instructions+=1;goto B4f88ee;
case 0x4f88f3:goto L4f88f3;
case 0x4f88f6:c.instructions+=3;goto B4f88f6;
case 0x4f88f7:c.instructions+=2;goto B4f88f7;
case 0x4f88f8:c.instructions+=1;goto B4f88f8;
case 0x4f88fd:goto L4f88fd;
case 0x4f88ff:c.instructions+=3;goto B4f88ff;
case 0x4f8902:c.instructions+=2;goto B4f8902;
case 0x4f8904:c.instructions+=1;goto B4f8904;
case 0x4f8906:goto L4f8906;
case 0x4f890b:goto L4f890b;
case 0x4f890d:c.instructions+=1;goto B4f890d;
case 0x4f890f:goto L4f890f;
case 0x4f8912:c.instructions+=1;goto B4f8912;
case 0x4f8914:goto L4f8914;
case 0x4f8916:goto L4f8916;
case 0x4f8919:c.instructions+=4;goto B4f8919;
case 0x4f891b:c.instructions+=3;goto B4f891b;
case 0x4f891e:c.instructions+=2;goto B4f891e;
case 0x4f8921:c.instructions+=1;goto B4f8921;
case 0x4f8923:goto L4f8923;
case 0x4f8928:c.instructions+=2;goto B4f8928;
case 0x4f892b:c.instructions+=1;goto B4f892b;
case 0x4f8930:goto L4f8930;
case 0x4f8933:c.instructions+=3;goto B4f8933;
case 0x4f8934:c.instructions+=2;goto B4f8934;
case 0x4f8935:c.instructions+=1;goto B4f8935;
case 0x4f893a:goto L4f893a;
case 0x4f893c:c.instructions+=3;goto B4f893c;
case 0x4f893f:c.instructions+=2;goto B4f893f;
case 0x4f8941:c.instructions+=1;goto B4f8941;
case 0x4f8943:goto L4f8943;
case 0x4f8948:goto L4f8948;
case 0x4f894a:c.instructions+=1;goto B4f894a;
case 0x4f894c:goto L4f894c;
case 0x4f894f:c.instructions+=1;goto B4f894f;
case 0x4f8951:goto L4f8951;
case 0x4f8953:goto L4f8953;
case 0x4f8956:c.instructions+=4;goto B4f8956;
case 0x4f8958:c.instructions+=3;goto B4f8958;
case 0x4f895b:c.instructions+=2;goto B4f895b;
case 0x4f895e:c.instructions+=1;goto B4f895e;
case 0x4f8960:goto L4f8960;
case 0x4f8965:c.instructions+=1;goto B4f8965;
case 0x4f896a:goto L4f896a;
case 0x4f896b:c.instructions+=3;goto B4f896b;
case 0x4f896e:c.instructions+=2;goto B4f896e;
case 0x4f896f:c.instructions+=1;goto B4f896f;
case 0x4f8974:goto L4f8974;
case 0x4f8976:c.instructions+=3;goto B4f8976;
case 0x4f8979:c.instructions+=2;goto B4f8979;
case 0x4f897b:c.instructions+=1;goto B4f897b;
case 0x4f897d:goto L4f897d;
case 0x4f8982:goto L4f8982;
case 0x4f8984:c.instructions+=1;goto B4f8984;
case 0x4f8986:goto L4f8986;
case 0x4f8989:c.instructions+=1;goto B4f8989;
case 0x4f898b:goto L4f898b;
case 0x4f898d:goto L4f898d;
case 0x4f8990:c.instructions+=4;goto B4f8990;
case 0x4f8992:c.instructions+=3;goto B4f8992;
case 0x4f8995:c.instructions+=2;goto B4f8995;
case 0x4f8998:c.instructions+=1;goto B4f8998;
case 0x4f899a:goto L4f899a;
case 0x4f899d:c.instructions+=3;goto B4f899d;
case 0x4f89a2:c.instructions+=2;goto B4f89a2;
case 0x4f89a3:c.instructions+=1;goto B4f89a3;
case 0x4f89a8:goto L4f89a8;
case 0x4f89ac:c.instructions+=9;goto B4f89ac;
case 0x4f89af:c.instructions+=8;goto B4f89af;
case 0x4f89b2:c.instructions+=7;goto B4f89b2;
case 0x4f89b3:c.instructions+=6;goto B4f89b3;
case 0x4f89b5:c.instructions+=5;goto B4f89b5;
case 0x4f89b6:c.instructions+=4;goto B4f89b6;
case 0x4f89b7:c.instructions+=3;goto B4f89b7;
case 0x4f89be:c.instructions+=2;goto B4f89be;
case 0x4f89c1:c.instructions+=1;goto B4f89c1;
case 0x4f89d0:goto L4f89d0;
case 0x4f89d2:c.instructions+=34;goto B4f89d2;
case 0x4f89d7:c.instructions+=33;goto B4f89d7;
case 0x4f89dd:c.instructions+=32;goto B4f89dd;
case 0x4f89de:c.instructions+=31;goto B4f89de;
case 0x4f89e5:c.instructions+=30;goto B4f89e5;
case 0x4f89e6:c.instructions+=29;goto B4f89e6;
case 0x4f89ea:c.instructions+=28;goto B4f89ea;
case 0x4f89eb:c.instructions+=27;goto B4f89eb;
case 0x4f89ec:c.instructions+=26;goto B4f89ec;
case 0x4f89ee:c.instructions+=25;goto B4f89ee;
case 0x4f89ef:c.instructions+=24;goto B4f89ef;
case 0x4f89f2:c.instructions+=23;goto B4f89f2;
case 0x4f89f4:c.instructions+=22;goto B4f89f4;
case 0x4f89f5:c.instructions+=21;goto B4f89f5;
case 0x4f89f9:c.instructions+=20;goto B4f89f9;
case 0x4f89fb:c.instructions+=19;goto B4f89fb;
case 0x4f89fe:c.instructions+=18;goto B4f89fe;
case 0x4f8a01:c.instructions+=17;goto B4f8a01;
case 0x4f8a08:c.instructions+=16;goto B4f8a08;
case 0x4f8a0b:c.instructions+=15;goto B4f8a0b;
case 0x4f8a0e:c.instructions+=14;goto B4f8a0e;
case 0x4f8a11:c.instructions+=13;goto B4f8a11;
case 0x4f8a14:c.instructions+=12;goto B4f8a14;
case 0x4f8a1a:c.instructions+=11;goto B4f8a1a;
case 0x4f8a1e:c.instructions+=10;goto B4f8a1e;
case 0x4f8a20:c.instructions+=9;goto B4f8a20;
case 0x4f8a23:c.instructions+=8;goto B4f8a23;
case 0x4f8a26:c.instructions+=7;goto B4f8a26;
case 0x4f8a29:c.instructions+=6;goto B4f8a29;
case 0x4f8a2c:c.instructions+=5;goto B4f8a2c;
case 0x4f8a2f:c.instructions+=4;goto B4f8a2f;
case 0x4f8a34:c.instructions+=3;goto B4f8a34;
case 0x4f8a35:c.instructions+=2;goto B4f8a35;
case 0x4f8a3a:c.instructions+=1;goto B4f8a3a;
case 0x4f8a3f:goto L4f8a3f;
case 0x4f8a41:c.instructions+=3;goto B4f8a41;
case 0x4f8a44:c.instructions+=2;goto B4f8a44;
case 0x4f8a46:c.instructions+=1;goto B4f8a46;
case 0x4f8a48:goto L4f8a48;
case 0x4f8a4d:goto L4f8a4d;
case 0x4f8a4f:c.instructions+=1;goto B4f8a4f;
case 0x4f8a51:goto L4f8a51;
case 0x4f8a54:c.instructions+=1;goto B4f8a54;
case 0x4f8a56:goto L4f8a56;
case 0x4f8a58:goto L4f8a58;
case 0x4f8a5b:c.instructions+=4;goto B4f8a5b;
case 0x4f8a5d:c.instructions+=3;goto B4f8a5d;
case 0x4f8a60:c.instructions+=2;goto B4f8a60;
case 0x4f8a63:c.instructions+=1;goto B4f8a63;
case 0x4f8a65:goto L4f8a65;
case 0x4f8a6a:c.instructions+=1;goto B4f8a6a;
case 0x4f8a70:goto L4f8a70;
case 0x4f8a71:c.instructions+=2;goto B4f8a71;
case 0x4f8a76:c.instructions+=1;goto B4f8a76;
case 0x4f8a7b:goto L4f8a7b;
case 0x4f8a7e:c.instructions+=3;goto B4f8a7e;
case 0x4f8a7f:c.instructions+=2;goto B4f8a7f;
case 0x4f8a80:c.instructions+=1;goto B4f8a80;
case 0x4f8a85:goto L4f8a85;
case 0x4f8a87:c.instructions+=3;goto B4f8a87;
case 0x4f8a8a:c.instructions+=2;goto B4f8a8a;
case 0x4f8a8c:c.instructions+=1;goto B4f8a8c;
case 0x4f8a8e:goto L4f8a8e;
case 0x4f8a93:goto L4f8a93;
case 0x4f8a95:c.instructions+=1;goto B4f8a95;
case 0x4f8a97:goto L4f8a97;
case 0x4f8a9a:c.instructions+=1;goto B4f8a9a;
case 0x4f8a9c:goto L4f8a9c;
case 0x4f8a9e:goto L4f8a9e;
case 0x4f8aa1:c.instructions+=4;goto B4f8aa1;
case 0x4f8aa3:c.instructions+=3;goto B4f8aa3;
case 0x4f8aa6:c.instructions+=2;goto B4f8aa6;
case 0x4f8aa9:c.instructions+=1;goto B4f8aa9;
case 0x4f8aab:goto L4f8aab;
case 0x4f8aac:c.instructions+=2;goto B4f8aac;
case 0x4f8ab1:c.instructions+=1;goto B4f8ab1;
case 0x4f8ab6:goto L4f8ab6;
case 0x4f8ab7:c.instructions+=3;goto B4f8ab7;
case 0x4f8aba:c.instructions+=2;goto B4f8aba;
case 0x4f8abb:c.instructions+=1;goto B4f8abb;
case 0x4f8ac0:goto L4f8ac0;
case 0x4f8ac2:c.instructions+=3;goto B4f8ac2;
case 0x4f8ac5:c.instructions+=2;goto B4f8ac5;
case 0x4f8ac7:c.instructions+=1;goto B4f8ac7;
case 0x4f8ac9:goto L4f8ac9;
case 0x4f8ace:goto L4f8ace;
case 0x4f8ad0:c.instructions+=1;goto B4f8ad0;
case 0x4f8ad2:goto L4f8ad2;
case 0x4f8ad5:c.instructions+=1;goto B4f8ad5;
case 0x4f8ad7:goto L4f8ad7;
case 0x4f8ad9:goto L4f8ad9;
case 0x4f8adc:c.instructions+=4;goto B4f8adc;
case 0x4f8ade:c.instructions+=3;goto B4f8ade;
case 0x4f8ae1:c.instructions+=2;goto B4f8ae1;
case 0x4f8ae4:c.instructions+=1;goto B4f8ae4;
case 0x4f8ae6:goto L4f8ae6;
case 0x4f8ae7:c.instructions+=2;goto B4f8ae7;
case 0x4f8aea:c.instructions+=1;goto B4f8aea;
case 0x4f8aec:goto L4f8aec;
case 0x4f8af1:c.instructions+=2;goto B4f8af1;
case 0x4f8af3:c.instructions+=1;goto B4f8af3;
case 0x4f8af5:goto L4f8af5;
case 0x4f8afa:c.instructions+=2;goto B4f8afa;
case 0x4f8afc:c.instructions+=1;goto B4f8afc;
case 0x4f8afe:goto L4f8afe;
case 0x4f8b01:c.instructions+=3;goto B4f8b01;
case 0x4f8b06:c.instructions+=2;goto B4f8b06;
case 0x4f8b07:c.instructions+=1;goto B4f8b07;
case 0x4f8b0c:goto L4f8b0c;
case 0x4f8b0e:c.instructions+=3;goto B4f8b0e;
case 0x4f8b11:c.instructions+=2;goto B4f8b11;
case 0x4f8b13:c.instructions+=1;goto B4f8b13;
case 0x4f8b15:goto L4f8b15;
case 0x4f8b1a:goto L4f8b1a;
case 0x4f8b1c:c.instructions+=1;goto B4f8b1c;
case 0x4f8b1e:goto L4f8b1e;
case 0x4f8b21:c.instructions+=1;goto B4f8b21;
case 0x4f8b23:goto L4f8b23;
case 0x4f8b25:goto L4f8b25;
case 0x4f8b28:c.instructions+=4;goto B4f8b28;
case 0x4f8b2a:c.instructions+=3;goto B4f8b2a;
case 0x4f8b2d:c.instructions+=2;goto B4f8b2d;
case 0x4f8b30:c.instructions+=1;goto B4f8b30;
case 0x4f8b32:goto L4f8b32;
case 0x4f8b36:c.instructions+=3;goto B4f8b36;
case 0x4f8b37:c.instructions+=2;goto B4f8b37;
case 0x4f8b39:c.instructions+=1;goto B4f8b39;
case 0x4f8b3e:goto L4f8b3e;
case 0x4f8b42:c.instructions+=8;goto B4f8b42;
case 0x4f8b43:c.instructions+=7;goto B4f8b43;
case 0x4f8b44:c.instructions+=6;goto B4f8b44;
case 0x4f8b45:c.instructions+=5;goto B4f8b45;
case 0x4f8b47:c.instructions+=4;goto B4f8b47;
case 0x4f8b48:c.instructions+=3;goto B4f8b48;
case 0x4f8b4f:c.instructions+=2;goto B4f8b4f;
case 0x4f8b52:c.instructions+=1;goto B4f8b52;
case 0x4f8b60:goto L4f8b60;
case 0x4f8b61:c.instructions+=2;goto B4f8b61;
case 0x4f8b63:c.instructions+=1;goto B4f8b63;
case 0x4f8b68:goto L4f8b68;
case 0x4f8b6d:c.instructions+=1;goto B4f8b6d;
case 0x4f8b6f:goto L4f8b6f;
case 0x4f8b70:c.instructions+=1;goto B4f8b70;
case 0x4f8b75:goto L4f8b75;
case 0x4f8b78:goto L4f8b78;
case 0x4f8b7a:c.instructions+=2;goto B4f8b7a;
case 0x4f8b7b:c.instructions+=1;goto B4f8b7b;
case 0x4f8b80:goto L4f8b80;
case 0x4f8b82:c.instructions+=12;goto B4f8b82;
case 0x4f8b87:c.instructions+=11;goto B4f8b87;
case 0x4f8b8d:c.instructions+=10;goto B4f8b8d;
case 0x4f8b8e:c.instructions+=9;goto B4f8b8e;
case 0x4f8b95:c.instructions+=8;goto B4f8b95;
case 0x4f8b96:c.instructions+=7;goto B4f8b96;
case 0x4f8b97:c.instructions+=6;goto B4f8b97;
case 0x4f8b99:c.instructions+=5;goto B4f8b99;
case 0x4f8b9d:c.instructions+=4;goto B4f8b9d;
case 0x4f8ba3:c.instructions+=3;goto B4f8ba3;
case 0x4f8ba6:c.instructions+=2;goto B4f8ba6;
case 0x4f8bae:c.instructions+=1;goto B4f8bae;
case 0x4f8bb3:goto L4f8bb3;
case 0x4f8bb6:c.instructions+=4;goto B4f8bb6;
case 0x4f8bb9:c.instructions+=3;goto B4f8bb9;
case 0x4f8bbb:c.instructions+=2;goto B4f8bbb;
case 0x4f8bc3:c.instructions+=1;goto B4f8bc3;
case 0x4f8bc5:goto L4f8bc5;
case 0x4f8bc7:c.instructions+=5;goto B4f8bc7;
case 0x4f8bca:c.instructions+=4;goto B4f8bca;
case 0x4f8bcc:c.instructions+=3;goto B4f8bcc;
case 0x4f8bcd:c.instructions+=2;goto B4f8bcd;
case 0x4f8bd0:c.instructions+=1;goto B4f8bd0;
case 0x4f8bd5:goto L4f8bd5;
case 0x4f8bd7:c.instructions+=3;goto B4f8bd7;
case 0x4f8bda:c.instructions+=2;goto B4f8bda;
case 0x4f8bdc:c.instructions+=1;goto B4f8bdc;
case 0x4f8bde:goto L4f8bde;
case 0x4f8be2:c.instructions+=4;goto B4f8be2;
case 0x4f8be3:c.instructions+=3;goto B4f8be3;
case 0x4f8bea:c.instructions+=2;goto B4f8bea;
case 0x4f8bed:c.instructions+=1;goto B4f8bed;
case 0x4f8bf0:goto L4f8bf0;
case 0x4f8bf6:c.instructions+=20;goto B4f8bf6;
case 0x4f8bf8:c.instructions+=19;goto B4f8bf8;
case 0x4f8bfd:c.instructions+=18;goto B4f8bfd;
case 0x4f8bfe:c.instructions+=17;goto B4f8bfe;
case 0x4f8c05:c.instructions+=16;goto B4f8c05;
case 0x4f8c06:c.instructions+=15;goto B4f8c06;
case 0x4f8c07:c.instructions+=14;goto B4f8c07;
case 0x4f8c0b:c.instructions+=13;goto B4f8c0b;
case 0x4f8c0c:c.instructions+=12;goto B4f8c0c;
case 0x4f8c0d:c.instructions+=11;goto B4f8c0d;
case 0x4f8c11:c.instructions+=10;goto B4f8c11;
case 0x4f8c13:c.instructions+=9;goto B4f8c13;
case 0x4f8c14:c.instructions+=8;goto B4f8c14;
case 0x4f8c15:c.instructions+=7;goto B4f8c15;
case 0x4f8c17:c.instructions+=6;goto B4f8c17;
case 0x4f8c18:c.instructions+=5;goto B4f8c18;
case 0x4f8c19:c.instructions+=4;goto B4f8c19;
case 0x4f8c1f:c.instructions+=3;goto B4f8c1f;
case 0x4f8c22:c.instructions+=2;goto B4f8c22;
case 0x4f8c25:c.instructions+=1;goto B4f8c25;
case 0x4f8c2a:goto L4f8c2a;
case 0x4f8c2f:c.instructions+=3;goto B4f8c2f;
case 0x4f8c32:c.instructions+=2;goto B4f8c32;
case 0x4f8c34:c.instructions+=1;goto B4f8c34;
case 0x4f8c36:goto L4f8c36;
case 0x4f8c3c:c.instructions+=1;goto B4f8c3c;
case 0x4f8c3e:goto L4f8c3e;
case 0x4f8c44:c.instructions+=1;goto B4f8c44;
case 0x4f8c46:goto L4f8c46;
case 0x4f8c4c:c.instructions+=1;goto B4f8c4c;
case 0x4f8c4e:goto L4f8c4e;
case 0x4f8c4f:c.instructions+=2;goto B4f8c4f;
case 0x4f8c50:c.instructions+=1;goto B4f8c50;
case 0x4f8c55:goto L4f8c55;
case 0x4f8c58:goto L4f8c58;
case 0x4f8c5e:c.instructions+=1;goto B4f8c5e;
case 0x4f8c60:goto L4f8c60;
case 0x4f8c61:c.instructions+=1;goto B4f8c61;
case 0x4f8c66:goto L4f8c66;
case 0x4f8c69:goto L4f8c69;
case 0x4f8c6c:c.instructions+=28;goto B4f8c6c;
case 0x4f8c6f:c.instructions+=27;goto B4f8c6f;
case 0x4f8c72:c.instructions+=26;goto B4f8c72;
case 0x4f8c75:c.instructions+=25;goto B4f8c75;
case 0x4f8c78:c.instructions+=24;goto B4f8c78;
case 0x4f8c7b:c.instructions+=23;goto B4f8c7b;
case 0x4f8c7e:c.instructions+=22;goto B4f8c7e;
case 0x4f8c81:c.instructions+=21;goto B4f8c81;
case 0x4f8c84:c.instructions+=20;goto B4f8c84;
case 0x4f8c87:c.instructions+=19;goto B4f8c87;
case 0x4f8c8a:c.instructions+=18;goto B4f8c8a;
case 0x4f8c8d:c.instructions+=17;goto B4f8c8d;
case 0x4f8c90:c.instructions+=16;goto B4f8c90;
case 0x4f8c93:c.instructions+=15;goto B4f8c93;
case 0x4f8c96:c.instructions+=14;goto B4f8c96;
case 0x4f8c99:c.instructions+=13;goto B4f8c99;
case 0x4f8c9c:c.instructions+=12;goto B4f8c9c;
case 0x4f8c9f:c.instructions+=11;goto B4f8c9f;
case 0x4f8ca2:c.instructions+=10;goto B4f8ca2;
case 0x4f8ca5:c.instructions+=9;goto B4f8ca5;
case 0x4f8ca8:c.instructions+=8;goto B4f8ca8;
case 0x4f8cab:c.instructions+=7;goto B4f8cab;
case 0x4f8cae:c.instructions+=6;goto B4f8cae;
case 0x4f8cb1:c.instructions+=5;goto B4f8cb1;
case 0x4f8cb4:c.instructions+=4;goto B4f8cb4;
case 0x4f8cb7:c.instructions+=3;goto B4f8cb7;
case 0x4f8cbd:c.instructions+=2;goto B4f8cbd;
case 0x4f8cc3:c.instructions+=1;goto B4f8cc3;
case 0x4f8cc5:goto L4f8cc5;
case 0x4f8ccb:c.instructions+=1;goto B4f8ccb;
case 0x4f8ccd:goto L4f8ccd;
case 0x4f8ccf:c.instructions+=1;goto B4f8ccf;
case 0x4f8cd4:goto L4f8cd4;
case 0x4f8cd7:c.instructions+=2;goto B4f8cd7;
case 0x4f8cd9:c.instructions+=1;goto B4f8cd9;
case 0x4f8cdb:goto L4f8cdb;
case 0x4f8cdd:c.instructions+=3;goto B4f8cdd;
case 0x4f8ce0:c.instructions+=2;goto B4f8ce0;
case 0x4f8ce3:c.instructions+=1;goto B4f8ce3;
case 0x4f8ce8:goto L4f8ce8;
case 0x4f8cea:c.instructions+=2;goto B4f8cea;
case 0x4f8ced:c.instructions+=1;goto B4f8ced;
case 0x4f8cf2:goto L4f8cf2;
case 0x4f8cf8:c.instructions+=1;goto B4f8cf8;
case 0x4f8cfa:goto L4f8cfa;
case 0x4f8d00:c.instructions+=1;goto B4f8d00;
case 0x4f8d02:goto L4f8d02;
case 0x4f8d07:c.instructions+=1;goto B4f8d07;
case 0x4f8d0c:goto L4f8d0c;
case 0x4f8d0f:c.instructions+=4;goto B4f8d0f;
case 0x4f8d13:c.instructions+=3;goto B4f8d13;
case 0x4f8d15:c.instructions+=2;goto B4f8d15;
case 0x4f8d19:c.instructions+=1;goto B4f8d19;
case 0x4f8d1b:goto L4f8d1b;
case 0x4f8d1c:c.instructions+=3;goto B4f8d1c;
case 0x4f8d1d:c.instructions+=2;goto B4f8d1d;
case 0x4f8d1f:c.instructions+=1;goto B4f8d1f;
case 0x4f8d24:goto L4f8d24;
case 0x4f8d26:goto L4f8d26;
case 0x4f8d28:goto L4f8d28;
case 0x4f8d2d:c.instructions+=3;goto B4f8d2d;
case 0x4f8d35:c.instructions+=2;goto B4f8d35;
case 0x4f8d38:c.instructions+=1;goto B4f8d38;
case 0x4f8d3d:goto L4f8d3d;
case 0x4f8d40:c.instructions+=2;goto B4f8d40;
case 0x4f8d44:c.instructions+=1;goto B4f8d44;
case 0x4f8d4c:goto L4f8d4c;
case 0x4f8d4e:c.instructions+=1;goto B4f8d4e;
case 0x4f8d50:goto L4f8d50;
case 0x4f8d51:c.instructions+=3;goto B4f8d51;
case 0x4f8d52:c.instructions+=2;goto B4f8d52;
case 0x4f8d54:c.instructions+=1;goto B4f8d54;
case 0x4f8d59:goto L4f8d59;
case 0x4f8d5b:goto L4f8d5b;
case 0x4f8d60:c.instructions+=1;goto B4f8d60;
case 0x4f8d65:goto L4f8d65;
case 0x4f8d68:c.instructions+=4;goto B4f8d68;
case 0x4f8d6c:c.instructions+=3;goto B4f8d6c;
case 0x4f8d6e:c.instructions+=2;goto B4f8d6e;
case 0x4f8d76:c.instructions+=1;goto B4f8d76;
case 0x4f8d78:goto L4f8d78;
case 0x4f8d79:c.instructions+=3;goto B4f8d79;
case 0x4f8d7a:c.instructions+=2;goto B4f8d7a;
case 0x4f8d7c:c.instructions+=1;goto B4f8d7c;
case 0x4f8d81:goto L4f8d81;
case 0x4f8d83:goto L4f8d83;
case 0x4f8d85:goto L4f8d85;
case 0x4f8d8a:c.instructions+=3;goto B4f8d8a;
case 0x4f8d92:c.instructions+=2;goto B4f8d92;
case 0x4f8d95:c.instructions+=1;goto B4f8d95;
case 0x4f8d9a:goto L4f8d9a;
case 0x4f8d9d:c.instructions+=3;goto B4f8d9d;
case 0x4f8da1:c.instructions+=2;goto B4f8da1;
case 0x4f8da9:c.instructions+=1;goto B4f8da9;
case 0x4f8dab:goto L4f8dab;
case 0x4f8dad:goto L4f8dad;
case 0x4f8daf:c.instructions+=3;goto B4f8daf;
case 0x4f8db7:c.instructions+=2;goto B4f8db7;
case 0x4f8dba:c.instructions+=1;goto B4f8dba;
case 0x4f8dbf:goto L4f8dbf;
case 0x4f8dc2:c.instructions+=4;goto B4f8dc2;
case 0x4f8dc6:c.instructions+=3;goto B4f8dc6;
case 0x4f8dc8:c.instructions+=2;goto B4f8dc8;
case 0x4f8dd0:c.instructions+=1;goto B4f8dd0;
case 0x4f8dd2:goto L4f8dd2;
case 0x4f8dd3:c.instructions+=3;goto B4f8dd3;
case 0x4f8dd4:c.instructions+=2;goto B4f8dd4;
case 0x4f8dd6:c.instructions+=1;goto B4f8dd6;
case 0x4f8ddb:goto L4f8ddb;
case 0x4f8ddd:goto L4f8ddd;
case 0x4f8ddf:goto L4f8ddf;
case 0x4f8de1:c.instructions+=3;goto B4f8de1;
case 0x4f8de9:c.instructions+=2;goto B4f8de9;
case 0x4f8dec:c.instructions+=1;goto B4f8dec;
case 0x4f8df1:goto L4f8df1;
case 0x4f8df4:c.instructions+=4;goto B4f8df4;
case 0x4f8df8:c.instructions+=3;goto B4f8df8;
case 0x4f8dfa:c.instructions+=2;goto B4f8dfa;
case 0x4f8e02:c.instructions+=1;goto B4f8e02;
case 0x4f8e04:goto L4f8e04;
case 0x4f8e05:c.instructions+=3;goto B4f8e05;
case 0x4f8e06:c.instructions+=2;goto B4f8e06;
case 0x4f8e08:c.instructions+=1;goto B4f8e08;
case 0x4f8e0d:goto L4f8e0d;
case 0x4f8e0f:goto L4f8e0f;
case 0x4f8e11:goto L4f8e11;
case 0x4f8e13:c.instructions+=3;goto B4f8e13;
case 0x4f8e1b:c.instructions+=2;goto B4f8e1b;
case 0x4f8e1e:c.instructions+=1;goto B4f8e1e;
case 0x4f8e23:goto L4f8e23;
case 0x4f8e26:c.instructions+=4;goto B4f8e26;
case 0x4f8e2a:c.instructions+=3;goto B4f8e2a;
case 0x4f8e2c:c.instructions+=2;goto B4f8e2c;
case 0x4f8e34:c.instructions+=1;goto B4f8e34;
case 0x4f8e36:goto L4f8e36;
case 0x4f8e37:c.instructions+=3;goto B4f8e37;
case 0x4f8e38:c.instructions+=2;goto B4f8e38;
case 0x4f8e3a:c.instructions+=1;goto B4f8e3a;
case 0x4f8e3f:goto L4f8e3f;
case 0x4f8e41:goto L4f8e41;
case 0x4f8e43:goto L4f8e43;
case 0x4f8e45:c.instructions+=3;goto B4f8e45;
case 0x4f8e4d:c.instructions+=2;goto B4f8e4d;
case 0x4f8e50:c.instructions+=1;goto B4f8e50;
case 0x4f8e55:goto L4f8e55;
case 0x4f8e58:c.instructions+=4;goto B4f8e58;
case 0x4f8e5c:c.instructions+=3;goto B4f8e5c;
case 0x4f8e5e:c.instructions+=2;goto B4f8e5e;
case 0x4f8e66:c.instructions+=1;goto B4f8e66;
case 0x4f8e68:goto L4f8e68;
case 0x4f8e69:c.instructions+=3;goto B4f8e69;
case 0x4f8e6a:c.instructions+=2;goto B4f8e6a;
case 0x4f8e6c:c.instructions+=1;goto B4f8e6c;
case 0x4f8e71:goto L4f8e71;
case 0x4f8e73:goto L4f8e73;
case 0x4f8e75:goto L4f8e75;
case 0x4f8e7a:c.instructions+=3;goto B4f8e7a;
case 0x4f8e82:c.instructions+=2;goto B4f8e82;
case 0x4f8e85:c.instructions+=1;goto B4f8e85;
case 0x4f8e8a:goto L4f8e8a;
case 0x4f8e8d:c.instructions+=4;goto B4f8e8d;
case 0x4f8e91:c.instructions+=3;goto B4f8e91;
case 0x4f8e93:c.instructions+=2;goto B4f8e93;
case 0x4f8e9b:c.instructions+=1;goto B4f8e9b;
case 0x4f8e9d:goto L4f8e9d;
case 0x4f8e9e:c.instructions+=3;goto B4f8e9e;
case 0x4f8e9f:c.instructions+=2;goto B4f8e9f;
case 0x4f8ea1:c.instructions+=1;goto B4f8ea1;
case 0x4f8ea6:goto L4f8ea6;
case 0x4f8ea8:goto L4f8ea8;
case 0x4f8eaa:goto L4f8eaa;
case 0x4f8eac:c.instructions+=3;goto B4f8eac;
case 0x4f8eb4:c.instructions+=2;goto B4f8eb4;
case 0x4f8eb7:c.instructions+=1;goto B4f8eb7;
case 0x4f8ebc:goto L4f8ebc;
case 0x4f8ebf:c.instructions+=4;goto B4f8ebf;
case 0x4f8ec3:c.instructions+=3;goto B4f8ec3;
case 0x4f8ec5:c.instructions+=2;goto B4f8ec5;
case 0x4f8ecd:c.instructions+=1;goto B4f8ecd;
case 0x4f8ecf:goto L4f8ecf;
case 0x4f8ed0:c.instructions+=3;goto B4f8ed0;
case 0x4f8ed1:c.instructions+=2;goto B4f8ed1;
case 0x4f8ed3:c.instructions+=1;goto B4f8ed3;
case 0x4f8ed8:goto L4f8ed8;
case 0x4f8eda:goto L4f8eda;
case 0x4f8edc:goto L4f8edc;
case 0x4f8ede:c.instructions+=3;goto B4f8ede;
case 0x4f8ee6:c.instructions+=2;goto B4f8ee6;
case 0x4f8ee9:c.instructions+=1;goto B4f8ee9;
case 0x4f8eee:goto L4f8eee;
case 0x4f8ef1:c.instructions+=4;goto B4f8ef1;
case 0x4f8ef5:c.instructions+=3;goto B4f8ef5;
case 0x4f8ef7:c.instructions+=2;goto B4f8ef7;
case 0x4f8eff:c.instructions+=1;goto B4f8eff;
case 0x4f8f01:goto L4f8f01;
case 0x4f8f02:c.instructions+=3;goto B4f8f02;
case 0x4f8f03:c.instructions+=2;goto B4f8f03;
case 0x4f8f05:c.instructions+=1;goto B4f8f05;
case 0x4f8f0a:goto L4f8f0a;
case 0x4f8f0c:goto L4f8f0c;
case 0x4f8f0e:goto L4f8f0e;
case 0x4f8f10:c.instructions+=3;goto B4f8f10;
case 0x4f8f18:c.instructions+=2;goto B4f8f18;
case 0x4f8f1b:c.instructions+=1;goto B4f8f1b;
case 0x4f8f20:goto L4f8f20;
case 0x4f8f23:c.instructions+=4;goto B4f8f23;
case 0x4f8f27:c.instructions+=3;goto B4f8f27;
case 0x4f8f29:c.instructions+=2;goto B4f8f29;
case 0x4f8f31:c.instructions+=1;goto B4f8f31;
case 0x4f8f33:goto L4f8f33;
case 0x4f8f34:c.instructions+=3;goto B4f8f34;
case 0x4f8f35:c.instructions+=2;goto B4f8f35;
case 0x4f8f37:c.instructions+=1;goto B4f8f37;
case 0x4f8f3c:goto L4f8f3c;
case 0x4f8f3e:goto L4f8f3e;
case 0x4f8f40:goto L4f8f40;
case 0x4f8f42:c.instructions+=3;goto B4f8f42;
case 0x4f8f4a:c.instructions+=2;goto B4f8f4a;
case 0x4f8f4d:c.instructions+=1;goto B4f8f4d;
case 0x4f8f52:goto L4f8f52;
case 0x4f8f55:c.instructions+=4;goto B4f8f55;
case 0x4f8f59:c.instructions+=3;goto B4f8f59;
case 0x4f8f5b:c.instructions+=2;goto B4f8f5b;
case 0x4f8f63:c.instructions+=1;goto B4f8f63;
case 0x4f8f65:goto L4f8f65;
case 0x4f8f66:c.instructions+=3;goto B4f8f66;
case 0x4f8f67:c.instructions+=2;goto B4f8f67;
case 0x4f8f69:c.instructions+=1;goto B4f8f69;
case 0x4f8f6e:goto L4f8f6e;
case 0x4f8f70:goto L4f8f70;
case 0x4f8f72:goto L4f8f72;
case 0x4f8f77:c.instructions+=3;goto B4f8f77;
case 0x4f8f7f:c.instructions+=2;goto B4f8f7f;
case 0x4f8f82:c.instructions+=1;goto B4f8f82;
case 0x4f8f87:goto L4f8f87;
case 0x4f8f8a:c.instructions+=4;goto B4f8f8a;
case 0x4f8f8e:c.instructions+=3;goto B4f8f8e;
case 0x4f8f90:c.instructions+=2;goto B4f8f90;
case 0x4f8f98:c.instructions+=1;goto B4f8f98;
case 0x4f8f9a:goto L4f8f9a;
case 0x4f8f9b:c.instructions+=3;goto B4f8f9b;
case 0x4f8f9c:c.instructions+=2;goto B4f8f9c;
case 0x4f8f9e:c.instructions+=1;goto B4f8f9e;
case 0x4f8fa3:goto L4f8fa3;
case 0x4f8fa5:goto L4f8fa5;
case 0x4f8fa7:goto L4f8fa7;
case 0x4f8fa9:c.instructions+=3;goto B4f8fa9;
case 0x4f8fb1:c.instructions+=2;goto B4f8fb1;
case 0x4f8fb4:c.instructions+=1;goto B4f8fb4;
case 0x4f8fb9:goto L4f8fb9;
case 0x4f8fbc:c.instructions+=4;goto B4f8fbc;
case 0x4f8fc0:c.instructions+=3;goto B4f8fc0;
case 0x4f8fc2:c.instructions+=2;goto B4f8fc2;
case 0x4f8fca:c.instructions+=1;goto B4f8fca;
case 0x4f8fcc:goto L4f8fcc;
case 0x4f8fcd:c.instructions+=3;goto B4f8fcd;
case 0x4f8fce:c.instructions+=2;goto B4f8fce;
case 0x4f8fd0:c.instructions+=1;goto B4f8fd0;
case 0x4f8fd5:goto L4f8fd5;
case 0x4f8fd7:goto L4f8fd7;
case 0x4f8fd9:goto L4f8fd9;
case 0x4f8fde:c.instructions+=3;goto B4f8fde;
case 0x4f8fe6:c.instructions+=2;goto B4f8fe6;
case 0x4f8fe9:c.instructions+=1;goto B4f8fe9;
case 0x4f8fee:goto L4f8fee;
case 0x4f8ff1:c.instructions+=4;goto B4f8ff1;
case 0x4f8ff5:c.instructions+=3;goto B4f8ff5;
case 0x4f8ff7:c.instructions+=2;goto B4f8ff7;
case 0x4f8fff:c.instructions+=1;goto B4f8fff;
default:missing_instruction(c.pc);}
B4f8000:L4f8000:{c.instructions+=8;NFSU2_TR(0x4f8000);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f8002:{NFSU2_TR(0x4f8002);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f8005:{NFSU2_TR(0x4f8005);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4f8007:{NFSU2_TR(0x4f8007);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f800a:{NFSU2_TR(0x4f800a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f800d:{NFSU2_TR(0x4f800d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4f800f:{NFSU2_TR(0x4f800f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f8012:{NFSU2_TR(0x4f8012);
{goto L4f8079;}
}
B4f8014:L4f8014:{c.instructions+=2;NFSU2_TR(0x4f8014);
u8 U[26];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8900acull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+18),(U+8),4);
w1(R+512,u8((r4(U+18))<(r4(R+12))));
w1(R+523,sborrow<u32>(r4(U+18),r4(R+12)));
w4(U+22,u32(u32(r4(U+18))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+22))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+22))==(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+22))&u32(u32(0xffull))));
w1(U+16,u8(__builtin_popcountll(u64(r4(U+12)))));
w1(U+17,u8(u32(r1(U+16))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+17))==(u8(0x0ull))));
}
B4f801b:{NFSU2_TR(0x4f801b);
if(r1(R+518)){{goto L4f8079;}}
}
B4f801d:L4f801d:{c.instructions+=3;NFSU2_TR(0x4f801d);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f801e:{NFSU2_TR(0x4f801e);
w4(R+4,u32(0x89e7a0ull));
}
B4f8023:{NFSU2_TR(0x4f8023);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f8028ull));
TAIL_STATIC(0x5ed980u,5ed);
}
B4f8028:L4f8028:{c.instructions+=3;NFSU2_TR(0x4f8028);
__builtin_memmove((R+4),gp(0x890080),4);
}
B4f802e:{NFSU2_TR(0x4f802e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f802f:{NFSU2_TR(0x4f802f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f8034ull));
TAIL_STATIC(0x5f0e30u,5f0);
}
B4f8034:L4f8034:{c.instructions+=4;NFSU2_TR(0x4f8034);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x454ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f803a:{NFSU2_TR(0x4f803a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
}
B4f803d:{NFSU2_TR(0x4f803d);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f803f:{NFSU2_TR(0x4f803f);
if(r1(R+518)){{goto L4f806a;}}
}
B4f8041:L4f8041:{c.instructions+=2;NFSU2_TR(0x4f8041);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7fffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f8047:{NFSU2_TR(0x4f8047);
if(r1(R+518)){{goto L4f806a;}}
}
B4f8049:L4f8049:{c.instructions+=6;NFSU2_TR(0x4f8049);
{u32 ea_=u32(r4(R+0)+u32(1044u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4f804f:{NFSU2_TR(0x4f804f);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4f8055:{NFSU2_TR(0x4f8055);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4f805b:{NFSU2_TR(0x4f805b);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4f805d:{NFSU2_TR(0x4f805d);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4f8060:{NFSU2_TR(0x4f8060);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L4f806a;}}
}
B4f8062:L4f8062:{c.instructions+=2;NFSU2_TR(0x4f8062);
u8 U[2];
__builtin_memmove((U+0),gp(0x89e7e7),1);
w1(U+1,u8(u32(r1(U+0))-u32(r1(R+12))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B4f8068:{NFSU2_TR(0x4f8068);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4f8079;}}
}
B4f806a:L4f806a:{c.instructions+=3;NFSU2_TR(0x4f806a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f806d:{NFSU2_TR(0x4f806d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f806e:{NFSU2_TR(0x4f806e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f8073ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4f8073:L4f8073:{c.instructions+=2;NFSU2_TR(0x4f8073);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4f8076:{NFSU2_TR(0x4f8076);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x79ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4f8079:L4f8079:{c.instructions+=5;NFSU2_TR(0x4f8079);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f807c:{NFSU2_TR(0x4f807c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f807d:{NFSU2_TR(0x4f807d);
u8 U[4];
w4(U+0,u32(0x78f744ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f8082:{NFSU2_TR(0x4f8082);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f8083:{NFSU2_TR(0x4f8083);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f8088ull));
TAIL_STATIC(0x537be0u,537);
}
B4f8088:L4f8088:{c.instructions+=7;NFSU2_TR(0x4f8088);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4f808b:{NFSU2_TR(0x4f808b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f808c:{NFSU2_TR(0x4f808c);
u8 U[4];
w4(U+0,u32(0x790a84ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f8091:{NFSU2_TR(0x4f8091);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f8092:{NFSU2_TR(0x4f8092);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f8095:{NFSU2_TR(0x4f8095);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f8098:{NFSU2_TR(0x4f8098);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f809dull));
TAIL_STATIC(0x537be0u,537);
}
B4f809d:L4f809d:{c.instructions+=7;NFSU2_TR(0x4f809d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B4f80a0:{NFSU2_TR(0x4f80a0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4f80a1:{NFSU2_TR(0x4f80a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f80a4:{NFSU2_TR(0x4f80a4);
u8 U[2];
__builtin_memmove((U+0),gp(0x83aa1a),1);
w1(U+1,u8(u32(r1(U+0))-u32(r1(R+12))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B4f80aa:{NFSU2_TR(0x4f80aa);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f80ab:{NFSU2_TR(0x4f80ab);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f80ac:{NFSU2_TR(0x4f80ac);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4f80b9;}}
}
B4f80ae:L4f80ae:{c.instructions+=4;NFSU2_TR(0x4f80ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f80b1:{NFSU2_TR(0x4f80b1);
u8 U[4];
w4(U+0,u32(0x790a7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f80b6:{NFSU2_TR(0x4f80b6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f80b7:{NFSU2_TR(0x4f80b7);
{goto L4f80c2;}
}
B4f80b9:L4f80b9:{c.instructions+=3;NFSU2_TR(0x4f80b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f80bc:{NFSU2_TR(0x4f80bc);
u8 U[4];
w4(U+0,u32(0x790a74ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f80c1:{NFSU2_TR(0x4f80c1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f80c2:L4f80c2:{c.instructions+=1;NFSU2_TR(0x4f80c2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f80c7ull));
TAIL_STATIC(0x537be0u,537);
}
B4f80c7:L4f80c7:{c.instructions+=9;NFSU2_TR(0x4f80c7);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f80cb:{NFSU2_TR(0x4f80cb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4f80ce:{NFSU2_TR(0x4f80ce);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4f80cf:{NFSU2_TR(0x4f80cf);
__builtin_memmove((R+0),(R+24),4);
}
B4f80d1:{NFSU2_TR(0x4f80d1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4f80d2:{NFSU2_TR(0x4f80d2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4f80d3:{NFSU2_TR(0x4f80d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f80da:{NFSU2_TR(0x4f80da);
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
B4f80dd:{NFSU2_TR(0x4f80dd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f80e0:L4f80e0:{c.instructions+=26;NFSU2_TR(0x4f80e0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f80e2:{NFSU2_TR(0x4f80e2);
u8 U[4];
w4(U+0,u32(0x776958ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f80e7:{NFSU2_TR(0x4f80e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f80ed:{NFSU2_TR(0x4f80ed);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f80ee:{NFSU2_TR(0x4f80ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f80f5:{NFSU2_TR(0x4f80f5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x34ull))));
}
B4f80f8:{NFSU2_TR(0x4f80f8);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f80fc:{NFSU2_TR(0x4f80fc);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f80fd:{NFSU2_TR(0x4f80fd);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f80fe:{NFSU2_TR(0x4f80fe);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f80ff:{NFSU2_TR(0x4f80ff);
__builtin_memmove((R+24),(R+4),4);
}
B4f8101:{NFSU2_TR(0x4f8101);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4f8103:{NFSU2_TR(0x4f8103);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f8104:{NFSU2_TR(0x4f8104);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f8108:{NFSU2_TR(0x4f8108);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+24)),r4(U+0));
}
B4f810a:{NFSU2_TR(0x4f810a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f810d:{NFSU2_TR(0x4f810d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f8110:{NFSU2_TR(0x4f8110);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w4(U+4,u32(0x4000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4f8117:{NFSU2_TR(0x4f8117);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f811a:{NFSU2_TR(0x4f811a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f811d:{NFSU2_TR(0x4f811d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f8120:{NFSU2_TR(0x4f8120);
u8 U[4];
w4(U+0,u32(0x798cbcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f8125:{NFSU2_TR(0x4f8125);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f8129:{NFSU2_TR(0x4f8129);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4f812c:{NFSU2_TR(0x4f812c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f812f:{NFSU2_TR(0x4f812f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f8134ull));
TAIL_STATIC(0x505450u,505);
}
B4f8134:L4f8134:{c.instructions+=4;NFSU2_TR(0x4f8134);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f8135:{NFSU2_TR(0x4f8135);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f8138:{NFSU2_TR(0x4f8138);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f8139:{NFSU2_TR(0x4f8139);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f813eull));
TAIL_STATIC(0x537a10u,537);
}
B4f813e:L4f813e:{c.instructions+=4;NFSU2_TR(0x4f813e);
__builtin_memmove((R+28),(R+0),4);
}
B4f8140:{NFSU2_TR(0x4f8140);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4f8143:{NFSU2_TR(0x4f8143);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f8145:{NFSU2_TR(0x4f8145);
if(r1(R+518)){{goto L4f8164;}}
}
B4f8147:L4f8147:{c.instructions+=1;NFSU2_TR(0x4f8147);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f814cull));
TAIL_STATIC(0x440ec0u,440);
}
B4f814c:L4f814c:{c.instructions+=2;NFSU2_TR(0x4f814c);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f814e:{NFSU2_TR(0x4f814e);
if(r1(R+518)){{goto L4f8155;}}
}
B4f8150:L4f8150:{c.instructions+=2;NFSU2_TR(0x4f8150);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f8153:{NFSU2_TR(0x4f8153);
{goto L4f8157;}
}
B4f8155:L4f8155:{c.instructions+=1;NFSU2_TR(0x4f8155);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f8157:L4f8157:{c.instructions+=5;NFSU2_TR(0x4f8157);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f815a:{NFSU2_TR(0x4f815a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4f815c:{NFSU2_TR(0x4f815c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f815f:{NFSU2_TR(0x4f815f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f8162:{NFSU2_TR(0x4f8162);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4f8164:L4f8164:{c.instructions+=3;NFSU2_TR(0x4f8164);
u8 U[4];
w4(U+0,u32(0x798cacull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f8169:{NFSU2_TR(0x4f8169);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f816c:{NFSU2_TR(0x4f816c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f8171ull));
TAIL_STATIC(0x505450u,505);
}
B4f8171:L4f8171:{c.instructions+=4;NFSU2_TR(0x4f8171);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f8174:{NFSU2_TR(0x4f8174);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f8175:{NFSU2_TR(0x4f8175);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f8176:{NFSU2_TR(0x4f8176);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f817bull));
TAIL_STATIC(0x537a10u,537);
}
B4f817b:L4f817b:{c.instructions+=4;NFSU2_TR(0x4f817b);
__builtin_memmove((R+28),(R+0),4);
}
B4f817d:{NFSU2_TR(0x4f817d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4f8180:{NFSU2_TR(0x4f8180);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f8182:{NFSU2_TR(0x4f8182);
if(r1(R+518)){{goto L4f81a1;}}
}
B4f8184:L4f8184:{c.instructions+=1;NFSU2_TR(0x4f8184);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f8189ull));
TAIL_STATIC(0x440ec0u,440);
}
B4f8189:L4f8189:{c.instructions+=2;NFSU2_TR(0x4f8189);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f818b:{NFSU2_TR(0x4f818b);
if(r1(R+518)){{goto L4f8192;}}
}
B4f818d:L4f818d:{c.instructions+=2;NFSU2_TR(0x4f818d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f8190:{NFSU2_TR(0x4f8190);
{goto L4f8194;}
}
B4f8192:L4f8192:{c.instructions+=1;NFSU2_TR(0x4f8192);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f8194:L4f8194:{c.instructions+=5;NFSU2_TR(0x4f8194);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f8197:{NFSU2_TR(0x4f8197);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4f8199:{NFSU2_TR(0x4f8199);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f819c:{NFSU2_TR(0x4f819c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f819f:{NFSU2_TR(0x4f819f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4f81a1:L4f81a1:{c.instructions+=3;NFSU2_TR(0x4f81a1);
u8 U[4];
w4(U+0,u32(0x798c9cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f81a6:{NFSU2_TR(0x4f81a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f81a9:{NFSU2_TR(0x4f81a9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f81aeull));
TAIL_STATIC(0x505450u,505);
}
B4f81ae:L4f81ae:{c.instructions+=4;NFSU2_TR(0x4f81ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4f81b1:{NFSU2_TR(0x4f81b1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f81b2:{NFSU2_TR(0x4f81b2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f81b3:{NFSU2_TR(0x4f81b3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f81b8ull));
TAIL_STATIC(0x537a10u,537);
}
B4f81b8:L4f81b8:{c.instructions+=4;NFSU2_TR(0x4f81b8);
__builtin_memmove((R+28),(R+0),4);
}
B4f81ba:{NFSU2_TR(0x4f81ba);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4f81bd:{NFSU2_TR(0x4f81bd);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f81bf:{NFSU2_TR(0x4f81bf);
if(r1(R+518)){{goto L4f81de;}}
}
B4f81c1:L4f81c1:{c.instructions+=1;NFSU2_TR(0x4f81c1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f81c6ull));
TAIL_STATIC(0x440ec0u,440);
}
B4f81c6:L4f81c6:{c.instructions+=2;NFSU2_TR(0x4f81c6);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f81c8:{NFSU2_TR(0x4f81c8);
if(r1(R+518)){{goto L4f81cf;}}
}
B4f81ca:L4f81ca:{c.instructions+=2;NFSU2_TR(0x4f81ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f81cd:{NFSU2_TR(0x4f81cd);
{goto L4f81d1;}
}
B4f81cf:L4f81cf:{c.instructions+=1;NFSU2_TR(0x4f81cf);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f81d1:L4f81d1:{c.instructions+=5;NFSU2_TR(0x4f81d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f81d4:{NFSU2_TR(0x4f81d4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4f81d6:{NFSU2_TR(0x4f81d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f81d9:{NFSU2_TR(0x4f81d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f81dc:{NFSU2_TR(0x4f81dc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4f81de:L4f81de:{c.instructions+=3;NFSU2_TR(0x4f81de);
u8 U[4];
w4(U+0,u32(0x79846cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f81e3:{NFSU2_TR(0x4f81e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f81e6:{NFSU2_TR(0x4f81e6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f81ebull));
TAIL_STATIC(0x505450u,505);
}
B4f81eb:L4f81eb:{c.instructions+=4;NFSU2_TR(0x4f81eb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f81ec:{NFSU2_TR(0x4f81ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f81ef:{NFSU2_TR(0x4f81ef);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f81f0:{NFSU2_TR(0x4f81f0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f81f5ull));
TAIL_STATIC(0x537a10u,537);
}
B4f81f5:L4f81f5:{c.instructions+=4;NFSU2_TR(0x4f81f5);
__builtin_memmove((R+28),(R+0),4);
}
B4f81f7:{NFSU2_TR(0x4f81f7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4f81fa:{NFSU2_TR(0x4f81fa);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f81fc:{NFSU2_TR(0x4f81fc);
if(r1(R+518)){{goto L4f821b;}}
}
B4f81fe:L4f81fe:{c.instructions+=1;NFSU2_TR(0x4f81fe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f8203ull));
TAIL_STATIC(0x440ec0u,440);
}
B4f8203:L4f8203:{c.instructions+=2;NFSU2_TR(0x4f8203);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f8205:{NFSU2_TR(0x4f8205);
if(r1(R+518)){{goto L4f820c;}}
}
B4f8207:L4f8207:{c.instructions+=2;NFSU2_TR(0x4f8207);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f820a:{NFSU2_TR(0x4f820a);
{goto L4f820e;}
}
B4f820c:L4f820c:{c.instructions+=1;NFSU2_TR(0x4f820c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f820e:L4f820e:{c.instructions+=5;NFSU2_TR(0x4f820e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f8211:{NFSU2_TR(0x4f8211);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4f8213:{NFSU2_TR(0x4f8213);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f8216:{NFSU2_TR(0x4f8216);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f8219:{NFSU2_TR(0x4f8219);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4f821b:L4f821b:{c.instructions+=4;NFSU2_TR(0x4f821b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f821e:{NFSU2_TR(0x4f821e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f821f:{NFSU2_TR(0x4f821f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f8222:{NFSU2_TR(0x4f8222);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f8227ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4f8227:L4f8227:{c.instructions+=3;NFSU2_TR(0x4f8227);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4f822a:{NFSU2_TR(0x4f822a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f822b:{NFSU2_TR(0x4f822b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f8230ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4f8230:L4f8230:{c.instructions+=3;NFSU2_TR(0x4f8230);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f8233:{NFSU2_TR(0x4f8233);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f8234:{NFSU2_TR(0x4f8234);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f8239ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4f8239:L4f8239:{c.instructions+=3;NFSU2_TR(0x4f8239);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f823c:{NFSU2_TR(0x4f823c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f823d:{NFSU2_TR(0x4f823d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f8242ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4f8242:L4f8242:{c.instructions+=2;NFSU2_TR(0x4f8242);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4f8245:{NFSU2_TR(0x4f8245);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4f8248:L4f8248:{c.instructions+=7;NFSU2_TR(0x4f8248);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4f824b:{NFSU2_TR(0x4f824b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f824c:{NFSU2_TR(0x4f824c);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4f8250:{NFSU2_TR(0x4f8250);
u8 U[4];
w4(U+0,u32(0x798c88ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f8255:{NFSU2_TR(0x4f8255);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f8256:{NFSU2_TR(0x4f8256);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f825a:{NFSU2_TR(0x4f825a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f825full));
TAIL_STATIC(0x4400d0u,440);
}
B4f825f:L4f825f:{c.instructions+=3;NFSU2_TR(0x4f825f);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4f8263:{NFSU2_TR(0x4f8263);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f8264:{NFSU2_TR(0x4f8264);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f8269ull));
TAIL_STATIC(0x505450u,505);
}
B4f8269:L4f8269:{c.instructions+=4;NFSU2_TR(0x4f8269);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f826c:{NFSU2_TR(0x4f826c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f826d:{NFSU2_TR(0x4f826d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f826e:{NFSU2_TR(0x4f826e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f8273ull));
TAIL_STATIC(0x537a10u,537);
}
B4f8273:L4f8273:{c.instructions+=4;NFSU2_TR(0x4f8273);
__builtin_memmove((R+20),(R+0),4);
}
B4f8275:{NFSU2_TR(0x4f8275);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B4f8278:{NFSU2_TR(0x4f8278);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4f827a:{NFSU2_TR(0x4f827a);
if(r1(R+518)){{goto L4f8299;}}
}
B4f827c:L4f827c:{c.instructions+=1;NFSU2_TR(0x4f827c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f8281ull));
TAIL_STATIC(0x440ec0u,440);
}
B4f8281:L4f8281:{c.instructions+=2;NFSU2_TR(0x4f8281);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4f8283:{NFSU2_TR(0x4f8283);
if(r1(R+518)){{goto L4f828a;}}
}
B4f8285:L4f8285:{c.instructions+=2;NFSU2_TR(0x4f8285);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f8288:{NFSU2_TR(0x4f8288);
{goto L4f828c;}
}
B4f828a:L4f828a:{c.instructions+=1;NFSU2_TR(0x4f828a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f828c:L4f828c:{c.instructions+=5;NFSU2_TR(0x4f828c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f828f:{NFSU2_TR(0x4f828f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4f8291:{NFSU2_TR(0x4f8291);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f8294:{NFSU2_TR(0x4f8294);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f8297:{NFSU2_TR(0x4f8297);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4f8299:L4f8299:{c.instructions+=4;NFSU2_TR(0x4f8299);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
s4(u32(r4(R+28)),r4(U+0));
}
B4f829b:{NFSU2_TR(0x4f829b);
__builtin_memmove((R+0),gp(0x8500c9),1);
}
B4f82a0:{NFSU2_TR(0x4f82a0);
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
B4f82a2:{NFSU2_TR(0x4f82a2);
if(r1(R+518)){{goto L4f8359;}}
}
B4f82a8:L4f82a8:{c.instructions+=3;NFSU2_TR(0x4f82a8);
__builtin_memmove((R+4),gp(0x890080),4);
}
B4f82ae:{NFSU2_TR(0x4f82ae);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f82af:{NFSU2_TR(0x4f82af);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f82b4ull));
TAIL_STATIC(0x5f0e30u,5f0);
}
B4f82b4:L4f82b4:{c.instructions+=3;NFSU2_TR(0x4f82b4);
__builtin_memmove((R+12),(R+0),4);
}
B4f82b6:{NFSU2_TR(0x4f82b6);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4f82b8:{NFSU2_TR(0x4f82b8);
if(r1(R+518)){{goto L4f8359;}}
}
B4f82be:L4f82be:{c.instructions+=2;NFSU2_TR(0x4f82be);
w4(R+4,u32(0x89cf48ull));
}
B4f82c3:{NFSU2_TR(0x4f82c3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f82c8ull));
TAIL_STATIC(0x5f00f0u,5f0);
}
B4f82c8:L4f82c8:{c.instructions+=2;NFSU2_TR(0x4f82c8);
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
B4f82ca:{NFSU2_TR(0x4f82ca);
if(r1(R+518)){{goto L4f8359;}}
}
B4f82d0:L4f82d0:{c.instructions+=4;NFSU2_TR(0x4f82d0);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B4f82d4:{NFSU2_TR(0x4f82d4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f82d5:{NFSU2_TR(0x4f82d5);
w4(R+4,u32(0x89cf48ull));
}
B4f82da:{NFSU2_TR(0x4f82da);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f82dfull));
TAIL_STATIC(0x5f0220u,5f0);
}
B4f82df:L4f82df:{c.instructions+=2;NFSU2_TR(0x4f82df);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4f82e1:{NFSU2_TR(0x4f82e1);
if(r1(R+518)){{goto L4f8359;}}
}
B4f82e3:L4f82e3:{c.instructions+=2;NFSU2_TR(0x4f82e3);
u8 U[14];
__builtin_memmove((U+6),gp(0x89cf4c),4);
w1(R+512,u8((r4(U+6))<(r4(R+0))));
w1(R+523,sborrow<u32>(r4(U+6),r4(R+0)));
w4(U+10,u32(u32(r4(U+6))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4f82e9:{NFSU2_TR(0x4f82e9);
if(r1(R+518)){{goto L4f8359;}}
}
B4f82eb:L4f82eb:{c.instructions+=4;NFSU2_TR(0x4f82eb);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B4f82ef:{NFSU2_TR(0x4f82ef);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f82f0:{NFSU2_TR(0x4f82f0);
w4(R+4,u32(0x89cf48ull));
}
B4f82f5:{NFSU2_TR(0x4f82f5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f82faull));
TAIL_STATIC(0x5f0220u,5f0);
}
B4f82fa:L4f82fa:{c.instructions+=3;NFSU2_TR(0x4f82fa);
__builtin_memmove((R+20),(R+0),4);
}
B4f82fc:{NFSU2_TR(0x4f82fc);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x12ull))));
w1(R+518,u8((r4(R+20))==(u32(0x0ull))));
}
B4f82ff:{NFSU2_TR(0x4f82ff);
if(r1(R+518)){{goto L4f8359;}}
}
B4f8301:L4f8301:{c.instructions+=10;NFSU2_TR(0x4f8301);
w4(R+0,u32(0xffull));
}
B4f8306:{NFSU2_TR(0x4f8306);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f8308:{NFSU2_TR(0x4f8308);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4f830c:{NFSU2_TR(0x4f830c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f830d:{NFSU2_TR(0x4f830d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4f830f:{NFSU2_TR(0x4f830f);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f8313:{NFSU2_TR(0x4f8313);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f8317:{NFSU2_TR(0x4f8317);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f831b:{NFSU2_TR(0x4f831b);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f831f:{NFSU2_TR(0x4f831f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f8324ull));
TAIL_STATIC(0x517e20u,517);
}
B4f8324:L4f8324:{c.instructions+=13;NFSU2_TR(0x4f8324);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4f8326:{NFSU2_TR(0x4f8326);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0xfffffff0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B4f832a:{NFSU2_TR(0x4f832a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4f832c:{NFSU2_TR(0x4f832c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0x5ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B4f8330:{NFSU2_TR(0x4f8330);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4f8332:{NFSU2_TR(0x4f8332);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f8335:{NFSU2_TR(0x4f8335);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x100ull))));
}
B4f833b:{NFSU2_TR(0x4f833b);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f833c:{NFSU2_TR(0x4f833c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f833f:{NFSU2_TR(0x4f833f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4f8341:{NFSU2_TR(0x4f8341);
u8 U[4];
w4(U+0,u32(0x786e70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f8346:{NFSU2_TR(0x4f8346);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f8347:{NFSU2_TR(0x4f8347);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f834cull));
TAIL_STATIC(0x537be0u,537);
}
B4f834c:L4f834c:{c.instructions+=3;NFSU2_TR(0x4f834c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4f834e:{NFSU2_TR(0x4f834e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f834f:{NFSU2_TR(0x4f834f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f8354ull));
TAIL_STATIC(0x50ca50u,50c);
}
B4f8354:L4f8354:{c.instructions+=2;NFSU2_TR(0x4f8354);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4f8357:{NFSU2_TR(0x4f8357);
{goto L4f8364;}
}
B4f8359:L4f8359:{c.instructions+=3;NFSU2_TR(0x4f8359);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4f835b:{NFSU2_TR(0x4f835b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f835c:{NFSU2_TR(0x4f835c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f8361ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4f8361:L4f8361:{c.instructions+=1;NFSU2_TR(0x4f8361);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4f8364:L4f8364:{c.instructions+=4;NFSU2_TR(0x4f8364);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4f8368:{NFSU2_TR(0x4f8368);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B4f836b:{NFSU2_TR(0x4f836b);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x6ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4f836e:{NFSU2_TR(0x4f836e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4f8248u);}goto L4f8248;}}
}
B4f8374:L4f8374:{c.instructions+=2;NFSU2_TR(0x4f8374);
u8 U[4];
w4(U+0,u32(0x1cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f8376:{NFSU2_TR(0x4f8376);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f837bull));
TAIL_STATIC(0x575620u,575);
}
B4f837b:L4f837b:{c.instructions+=4;NFSU2_TR(0x4f837b);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4f837d:{NFSU2_TR(0x4f837d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4f8380:{NFSU2_TR(0x4f8380);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f8382:{NFSU2_TR(0x4f8382);
if(r1(R+518)){{goto L4f83ad;}}
}
B4f8384:L4f8384:{c.instructions+=12;NFSU2_TR(0x4f8384);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4f8387:{NFSU2_TR(0x4f8387);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f838a:{NFSU2_TR(0x4f838a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4f838d:{NFSU2_TR(0x4f838d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4f838f:{NFSU2_TR(0x4f838f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f8392:{NFSU2_TR(0x4f8392);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f8395:{NFSU2_TR(0x4f8395);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4f839c:{NFSU2_TR(0x4f839c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4f839e:{NFSU2_TR(0x4f839e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
w4(U+4,u32(0x3fc00000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4f83a5:{NFSU2_TR(0x4f83a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f83a8:{NFSU2_TR(0x4f83a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f83ab:{NFSU2_TR(0x4f83ab);
{goto L4f83b0;}
}
B4f83ad:L4f83ad:{c.instructions+=1;NFSU2_TR(0x4f83ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f83b0:L4f83b0:{c.instructions+=9;NFSU2_TR(0x4f83b0);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f83b4:{NFSU2_TR(0x4f83b4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4f83b5:{NFSU2_TR(0x4f83b5);
__builtin_memmove((R+0),(R+24),4);
}
B4f83b7:{NFSU2_TR(0x4f83b7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4f83b8:{NFSU2_TR(0x4f83b8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4f83b9:{NFSU2_TR(0x4f83b9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4f83ba:{NFSU2_TR(0x4f83ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f83c1:{NFSU2_TR(0x4f83c1);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x40ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x40ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x40ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4f83c4:{NFSU2_TR(0x4f83c4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f83d0:L4f83d0:{c.instructions+=24;NFSU2_TR(0x4f83d0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f83d2:{NFSU2_TR(0x4f83d2);
u8 U[4];
w4(U+0,u32(0x776918ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f83d7:{NFSU2_TR(0x4f83d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f83dd:{NFSU2_TR(0x4f83dd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f83de:{NFSU2_TR(0x4f83de);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f83e5:{NFSU2_TR(0x4f83e5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f83e6:{NFSU2_TR(0x4f83e6);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f83ea:{NFSU2_TR(0x4f83ea);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f83eb:{NFSU2_TR(0x4f83eb);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f83ec:{NFSU2_TR(0x4f83ec);
__builtin_memmove((R+24),(R+4),4);
}
B4f83ee:{NFSU2_TR(0x4f83ee);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4f83f0:{NFSU2_TR(0x4f83f0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f83f1:{NFSU2_TR(0x4f83f1);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f83f5:{NFSU2_TR(0x4f83f5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+24)),r4(U+0));
}
B4f83f7:{NFSU2_TR(0x4f83f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f83fa:{NFSU2_TR(0x4f83fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f83fd:{NFSU2_TR(0x4f83fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f8400:{NFSU2_TR(0x4f8400);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4f8407:{NFSU2_TR(0x4f8407);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f840a:{NFSU2_TR(0x4f840a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f840d:{NFSU2_TR(0x4f840d);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f8411:{NFSU2_TR(0x4f8411);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4f8414:{NFSU2_TR(0x4f8414);
w4(R+4,u32(0x8ull));
}
B4f8419:{NFSU2_TR(0x4f8419);
__builtin_memmove((R+16),(R+16),4);
}
B4f8420:L4f8420:{c.instructions+=4;NFSU2_TR(0x4f8420);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4f8422:{NFSU2_TR(0x4f8422);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
}
B4f8425:{NFSU2_TR(0x4f8425);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B4f8426:{NFSU2_TR(0x4f8426);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4f8420u);}goto L4f8420;}}
}
B4f8428:L4f8428:{c.instructions+=46;NFSU2_TR(0x4f8428);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4f842b:{NFSU2_TR(0x4f842b);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x61ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4f842e:{NFSU2_TR(0x4f842e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f8431:{NFSU2_TR(0x4f8431);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f8434:{NFSU2_TR(0x4f8434);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4f8437:{NFSU2_TR(0x4f8437);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4f843a:{NFSU2_TR(0x4f843a);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x75ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4f843d:{NFSU2_TR(0x4f843d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f8440:{NFSU2_TR(0x4f8440);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f8443:{NFSU2_TR(0x4f8443);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4f8449:{NFSU2_TR(0x4f8449);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4f844c:{NFSU2_TR(0x4f844c);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x89ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4f8452:{NFSU2_TR(0x4f8452);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f8458:{NFSU2_TR(0x4f8458);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x90ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f845e:{NFSU2_TR(0x4f845e);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x94ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4f8464:{NFSU2_TR(0x4f8464);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x88ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4f846a:{NFSU2_TR(0x4f846a);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9dull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4f8470:{NFSU2_TR(0x4f8470);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f8476:{NFSU2_TR(0x4f8476);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f847c:{NFSU2_TR(0x4f847c);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4f8482:{NFSU2_TR(0x4f8482);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4f8488:{NFSU2_TR(0x4f8488);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb1ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4f848e:{NFSU2_TR(0x4f848e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f8494:{NFSU2_TR(0x4f8494);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f849a:{NFSU2_TR(0x4f849a);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbcull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4f84a0:{NFSU2_TR(0x4f84a0);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4f84a6:{NFSU2_TR(0x4f84a6);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc5ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4f84ac:{NFSU2_TR(0x4f84ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f84b2:{NFSU2_TR(0x4f84b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xccull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f84b8:{NFSU2_TR(0x4f84b8);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4f84be:{NFSU2_TR(0x4f84be);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4f84c4:{NFSU2_TR(0x4f84c4);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd9ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4f84ca:{NFSU2_TR(0x4f84ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xdcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f84d0:{NFSU2_TR(0x4f84d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f84d6:{NFSU2_TR(0x4f84d6);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4f84dc:{NFSU2_TR(0x4f84dc);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4f84e2:{NFSU2_TR(0x4f84e2);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f84e3:{NFSU2_TR(0x4f84e3);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xedull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4f84e9:{NFSU2_TR(0x4f84e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f84ef:{NFSU2_TR(0x4f84ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f84f5:{NFSU2_TR(0x4f84f5);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4f84fb:{NFSU2_TR(0x4f84fb);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xecull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4f8501:{NFSU2_TR(0x4f8501);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f8504:{NFSU2_TR(0x4f8504);
u8 U[4];
w4(U+0,u32(0x50910822ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f8509:{NFSU2_TR(0x4f8509);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f850a:{NFSU2_TR(0x4f850a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f850full));
TAIL_STATIC(0x537a60u,537);
}
B4f850f:L4f850f:{c.instructions+=4;NFSU2_TR(0x4f850f);
__builtin_memmove((R+20),(R+0),4);
}
B4f8511:{NFSU2_TR(0x4f8511);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4f8514:{NFSU2_TR(0x4f8514);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f8516:{NFSU2_TR(0x4f8516);
if(r1(R+518)){{goto L4f8535;}}
}
B4f8518:L4f8518:{c.instructions+=1;NFSU2_TR(0x4f8518);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f851dull));
TAIL_STATIC(0x440ec0u,440);
}
B4f851d:L4f851d:{c.instructions+=2;NFSU2_TR(0x4f851d);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f851f:{NFSU2_TR(0x4f851f);
if(r1(R+518)){{goto L4f8526;}}
}
B4f8521:L4f8521:{c.instructions+=2;NFSU2_TR(0x4f8521);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f8524:{NFSU2_TR(0x4f8524);
{goto L4f8528;}
}
B4f8526:L4f8526:{c.instructions+=1;NFSU2_TR(0x4f8526);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f8528:L4f8528:{c.instructions+=5;NFSU2_TR(0x4f8528);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f852b:{NFSU2_TR(0x4f852b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4f852d:{NFSU2_TR(0x4f852d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f8530:{NFSU2_TR(0x4f8530);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f8533:{NFSU2_TR(0x4f8533);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4f8535:L4f8535:{c.instructions+=6;NFSU2_TR(0x4f8535);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4f8538:{NFSU2_TR(0x4f8538);
u8 U[4];
w4(U+0,u32(0xa206a0b4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f853d:{NFSU2_TR(0x4f853d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f853e:{NFSU2_TR(0x4f853e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
s4(u32(r4(R+28)),r4(U+0));
}
B4f8540:{NFSU2_TR(0x4f8540);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f8543:{NFSU2_TR(0x4f8543);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f8548ull));
TAIL_STATIC(0x537a60u,537);
}
B4f8548:L4f8548:{c.instructions+=5;NFSU2_TR(0x4f8548);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4f854b:{NFSU2_TR(0x4f854b);
__builtin_memmove((R+28),(R+0),4);
}
B4f854d:{NFSU2_TR(0x4f854d);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f854f:{NFSU2_TR(0x4f854f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4f8550:{NFSU2_TR(0x4f8550);
if(r1(R+518)){{goto L4f856f;}}
}
B4f8552:L4f8552:{c.instructions+=1;NFSU2_TR(0x4f8552);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f8557ull));
TAIL_STATIC(0x440ec0u,440);
}
B4f8557:L4f8557:{c.instructions+=2;NFSU2_TR(0x4f8557);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f8559:{NFSU2_TR(0x4f8559);
if(r1(R+518)){{goto L4f8560;}}
}
B4f855b:L4f855b:{c.instructions+=2;NFSU2_TR(0x4f855b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f855e:{NFSU2_TR(0x4f855e);
{goto L4f8562;}
}
B4f8560:L4f8560:{c.instructions+=1;NFSU2_TR(0x4f8560);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f8562:L4f8562:{c.instructions+=5;NFSU2_TR(0x4f8562);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f8565:{NFSU2_TR(0x4f8565);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4f8567:{NFSU2_TR(0x4f8567);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f856a:{NFSU2_TR(0x4f856a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f856d:{NFSU2_TR(0x4f856d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4f856f:L4f856f:{c.instructions+=5;NFSU2_TR(0x4f856f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f8572:{NFSU2_TR(0x4f8572);
u8 U[4];
w4(U+0,u32(0xa729b1bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f8577:{NFSU2_TR(0x4f8577);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f8578:{NFSU2_TR(0x4f8578);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f857b:{NFSU2_TR(0x4f857b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f8580ull));
TAIL_STATIC(0x537a60u,537);
}
B4f8580:L4f8580:{c.instructions+=4;NFSU2_TR(0x4f8580);
__builtin_memmove((R+28),(R+0),4);
}
B4f8582:{NFSU2_TR(0x4f8582);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4f8585:{NFSU2_TR(0x4f8585);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f8587:{NFSU2_TR(0x4f8587);
if(r1(R+518)){{goto L4f85a6;}}
}
B4f8589:L4f8589:{c.instructions+=1;NFSU2_TR(0x4f8589);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f858eull));
TAIL_STATIC(0x440ec0u,440);
}
B4f858e:L4f858e:{c.instructions+=2;NFSU2_TR(0x4f858e);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f8590:{NFSU2_TR(0x4f8590);
if(r1(R+518)){{goto L4f8597;}}
}
B4f8592:L4f8592:{c.instructions+=2;NFSU2_TR(0x4f8592);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f8595:{NFSU2_TR(0x4f8595);
{goto L4f8599;}
}
B4f8597:L4f8597:{c.instructions+=1;NFSU2_TR(0x4f8597);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f8599:L4f8599:{c.instructions+=5;NFSU2_TR(0x4f8599);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f859c:{NFSU2_TR(0x4f859c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4f859e:{NFSU2_TR(0x4f859e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f85a1:{NFSU2_TR(0x4f85a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f85a4:{NFSU2_TR(0x4f85a4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4f85a6:L4f85a6:{c.instructions+=6;NFSU2_TR(0x4f85a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f85a9:{NFSU2_TR(0x4f85a9);
u8 U[4];
w4(U+0,u32(0x3b1b624aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f85ae:{NFSU2_TR(0x4f85ae);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f85af:{NFSU2_TR(0x4f85af);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f85b2:{NFSU2_TR(0x4f85b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f85b5:{NFSU2_TR(0x4f85b5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f85baull));
TAIL_STATIC(0x537a60u,537);
}
B4f85ba:L4f85ba:{c.instructions+=4;NFSU2_TR(0x4f85ba);
__builtin_memmove((R+28),(R+0),4);
}
B4f85bc:{NFSU2_TR(0x4f85bc);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4f85bf:{NFSU2_TR(0x4f85bf);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f85c1:{NFSU2_TR(0x4f85c1);
if(r1(R+518)){{goto L4f85e0;}}
}
B4f85c3:L4f85c3:{c.instructions+=1;NFSU2_TR(0x4f85c3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f85c8ull));
TAIL_STATIC(0x440ec0u,440);
}
B4f85c8:L4f85c8:{c.instructions+=2;NFSU2_TR(0x4f85c8);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f85ca:{NFSU2_TR(0x4f85ca);
if(r1(R+518)){{goto L4f85d1;}}
}
B4f85cc:L4f85cc:{c.instructions+=2;NFSU2_TR(0x4f85cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f85cf:{NFSU2_TR(0x4f85cf);
{goto L4f85d3;}
}
B4f85d1:L4f85d1:{c.instructions+=1;NFSU2_TR(0x4f85d1);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f85d3:L4f85d3:{c.instructions+=5;NFSU2_TR(0x4f85d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f85d6:{NFSU2_TR(0x4f85d6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4f85d8:{NFSU2_TR(0x4f85d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f85db:{NFSU2_TR(0x4f85db);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f85de:{NFSU2_TR(0x4f85de);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4f85e0:L4f85e0:{c.instructions+=5;NFSU2_TR(0x4f85e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4f85e3:{NFSU2_TR(0x4f85e3);
u8 U[4];
w4(U+0,u32(0x4b9b8f5aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f85e8:{NFSU2_TR(0x4f85e8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f85e9:{NFSU2_TR(0x4f85e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f85ec:{NFSU2_TR(0x4f85ec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f85f1ull));
TAIL_STATIC(0x537a60u,537);
}
B4f85f1:L4f85f1:{c.instructions+=4;NFSU2_TR(0x4f85f1);
__builtin_memmove((R+28),(R+0),4);
}
B4f85f3:{NFSU2_TR(0x4f85f3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4f85f6:{NFSU2_TR(0x4f85f6);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f85f8:{NFSU2_TR(0x4f85f8);
if(r1(R+518)){{goto L4f8617;}}
}
B4f85fa:L4f85fa:{c.instructions+=1;NFSU2_TR(0x4f85fa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f85ffull));
TAIL_STATIC(0x440ec0u,440);
}
B4f85ff:L4f85ff:{c.instructions+=2;NFSU2_TR(0x4f85ff);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f8601:{NFSU2_TR(0x4f8601);
if(r1(R+518)){{goto L4f8608;}}
}
B4f8603:L4f8603:{c.instructions+=2;NFSU2_TR(0x4f8603);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f8606:{NFSU2_TR(0x4f8606);
{goto L4f860a;}
}
B4f8608:L4f8608:{c.instructions+=1;NFSU2_TR(0x4f8608);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f860a:L4f860a:{c.instructions+=5;NFSU2_TR(0x4f860a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f860d:{NFSU2_TR(0x4f860d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4f860f:{NFSU2_TR(0x4f860f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f8612:{NFSU2_TR(0x4f8612);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f8615:{NFSU2_TR(0x4f8615);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4f8617:L4f8617:{c.instructions+=5;NFSU2_TR(0x4f8617);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f861a:{NFSU2_TR(0x4f861a);
u8 U[4];
w4(U+0,u32(0x668c9cd6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f861f:{NFSU2_TR(0x4f861f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f8620:{NFSU2_TR(0x4f8620);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f8623:{NFSU2_TR(0x4f8623);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f8628ull));
TAIL_STATIC(0x537a10u,537);
}
B4f8628:L4f8628:{c.instructions+=4;NFSU2_TR(0x4f8628);
__builtin_memmove((R+28),(R+0),4);
}
B4f862a:{NFSU2_TR(0x4f862a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4f862d:{NFSU2_TR(0x4f862d);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f862f:{NFSU2_TR(0x4f862f);
if(r1(R+518)){{goto L4f864e;}}
}
B4f8631:L4f8631:{c.instructions+=1;NFSU2_TR(0x4f8631);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f8636ull));
TAIL_STATIC(0x440ec0u,440);
}
B4f8636:L4f8636:{c.instructions+=2;NFSU2_TR(0x4f8636);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f8638:{NFSU2_TR(0x4f8638);
if(r1(R+518)){{goto L4f863f;}}
}
B4f863a:L4f863a:{c.instructions+=2;NFSU2_TR(0x4f863a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f863d:{NFSU2_TR(0x4f863d);
{goto L4f8641;}
}
B4f863f:L4f863f:{c.instructions+=1;NFSU2_TR(0x4f863f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f8641:L4f8641:{c.instructions+=5;NFSU2_TR(0x4f8641);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f8644:{NFSU2_TR(0x4f8644);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4f8646:{NFSU2_TR(0x4f8646);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f8649:{NFSU2_TR(0x4f8649);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f864c:{NFSU2_TR(0x4f864c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4f864e:L4f864e:{c.instructions+=5;NFSU2_TR(0x4f864e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f8651:{NFSU2_TR(0x4f8651);
u8 U[4];
w4(U+0,u32(0x99f665f4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f8656:{NFSU2_TR(0x4f8656);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f8657:{NFSU2_TR(0x4f8657);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f865a:{NFSU2_TR(0x4f865a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f865full));
TAIL_STATIC(0x537a60u,537);
}
B4f865f:L4f865f:{c.instructions+=4;NFSU2_TR(0x4f865f);
__builtin_memmove((R+28),(R+0),4);
}
B4f8661:{NFSU2_TR(0x4f8661);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4f8664:{NFSU2_TR(0x4f8664);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f8666:{NFSU2_TR(0x4f8666);
if(r1(R+518)){{goto L4f8685;}}
}
B4f8668:L4f8668:{c.instructions+=1;NFSU2_TR(0x4f8668);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f866dull));
TAIL_STATIC(0x440ec0u,440);
}
B4f866d:L4f866d:{c.instructions+=2;NFSU2_TR(0x4f866d);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f866f:{NFSU2_TR(0x4f866f);
if(r1(R+518)){{goto L4f8676;}}
}
B4f8671:L4f8671:{c.instructions+=2;NFSU2_TR(0x4f8671);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f8674:{NFSU2_TR(0x4f8674);
{goto L4f8678;}
}
B4f8676:L4f8676:{c.instructions+=1;NFSU2_TR(0x4f8676);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f8678:L4f8678:{c.instructions+=5;NFSU2_TR(0x4f8678);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f867b:{NFSU2_TR(0x4f867b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4f867d:{NFSU2_TR(0x4f867d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f8680:{NFSU2_TR(0x4f8680);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f8683:{NFSU2_TR(0x4f8683);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4f8685:L4f8685:{c.instructions+=4;NFSU2_TR(0x4f8685);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4f8688:{NFSU2_TR(0x4f8688);
u8 U[4];
w4(U+0,u32(0xb996a84cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f868d:{NFSU2_TR(0x4f868d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f868e:{NFSU2_TR(0x4f868e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f8693ull));
TAIL_STATIC(0x537a60u,537);
}
B4f8693:L4f8693:{c.instructions+=4;NFSU2_TR(0x4f8693);
__builtin_memmove((R+28),(R+0),4);
}
B4f8695:{NFSU2_TR(0x4f8695);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4f8698:{NFSU2_TR(0x4f8698);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f869a:{NFSU2_TR(0x4f869a);
if(r1(R+518)){{goto L4f86b7;}}
}
B4f869c:L4f869c:{c.instructions+=1;NFSU2_TR(0x4f869c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f86a1ull));
TAIL_STATIC(0x440ec0u,440);
}
B4f86a1:L4f86a1:{c.instructions+=2;NFSU2_TR(0x4f86a1);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f86a3:{NFSU2_TR(0x4f86a3);
if(r1(R+518)){{goto L4f86aa;}}
}
B4f86a5:L4f86a5:{c.instructions+=2;NFSU2_TR(0x4f86a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f86a8:{NFSU2_TR(0x4f86a8);
__builtin_memmove((R+12),(R+0),4);
}
B4f86aa:L4f86aa:{c.instructions+=5;NFSU2_TR(0x4f86aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f86ad:{NFSU2_TR(0x4f86ad);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4f86af:{NFSU2_TR(0x4f86af);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f86b2:{NFSU2_TR(0x4f86b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f86b5:{NFSU2_TR(0x4f86b5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+12)),r4(U+0));
}
B4f86b7:L4f86b7:{c.instructions+=8;NFSU2_TR(0x4f86b7);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f86bb:{NFSU2_TR(0x4f86bb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4f86bc:{NFSU2_TR(0x4f86bc);
__builtin_memmove((R+0),(R+24),4);
}
B4f86be:{NFSU2_TR(0x4f86be);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4f86bf:{NFSU2_TR(0x4f86bf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4f86c0:{NFSU2_TR(0x4f86c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f86c7:{NFSU2_TR(0x4f86c7);
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
B4f86ca:{NFSU2_TR(0x4f86ca);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f86d0:L4f86d0:{c.instructions+=23;NFSU2_TR(0x4f86d0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f86d2:{NFSU2_TR(0x4f86d2);
u8 U[4];
w4(U+0,u32(0x776918ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f86d7:{NFSU2_TR(0x4f86d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f86dd:{NFSU2_TR(0x4f86dd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f86de:{NFSU2_TR(0x4f86de);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f86e5:{NFSU2_TR(0x4f86e5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f86e6:{NFSU2_TR(0x4f86e6);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f86ea:{NFSU2_TR(0x4f86ea);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f86eb:{NFSU2_TR(0x4f86eb);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f86ec:{NFSU2_TR(0x4f86ec);
__builtin_memmove((R+24),(R+4),4);
}
B4f86ee:{NFSU2_TR(0x4f86ee);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4f86f0:{NFSU2_TR(0x4f86f0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f86f1:{NFSU2_TR(0x4f86f1);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f86f5:{NFSU2_TR(0x4f86f5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+24)),r4(U+0));
}
B4f86f7:{NFSU2_TR(0x4f86f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f86fa:{NFSU2_TR(0x4f86fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f86fd:{NFSU2_TR(0x4f86fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f8700:{NFSU2_TR(0x4f8700);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4f8707:{NFSU2_TR(0x4f8707);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f870a:{NFSU2_TR(0x4f870a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f870d:{NFSU2_TR(0x4f870d);
u8 U[4];
w4(U+0,u32(0x7984d8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f8712:{NFSU2_TR(0x4f8712);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f8716:{NFSU2_TR(0x4f8716);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f871bull));
TAIL_STATIC(0x505450u,505);
}
B4f871b:L4f871b:{c.instructions+=4;NFSU2_TR(0x4f871b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f871e:{NFSU2_TR(0x4f871e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f871f:{NFSU2_TR(0x4f871f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f8720:{NFSU2_TR(0x4f8720);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f8725ull));
TAIL_STATIC(0x537a60u,537);
}
B4f8725:L4f8725:{c.instructions+=4;NFSU2_TR(0x4f8725);
__builtin_memmove((R+28),(R+0),4);
}
B4f8727:{NFSU2_TR(0x4f8727);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4f872a:{NFSU2_TR(0x4f872a);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f872c:{NFSU2_TR(0x4f872c);
if(r1(R+518)){{goto L4f874b;}}
}
B4f872e:L4f872e:{c.instructions+=1;NFSU2_TR(0x4f872e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f8733ull));
TAIL_STATIC(0x440ec0u,440);
}
B4f8733:L4f8733:{c.instructions+=2;NFSU2_TR(0x4f8733);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f8735:{NFSU2_TR(0x4f8735);
if(r1(R+518)){{goto L4f873c;}}
}
B4f8737:L4f8737:{c.instructions+=2;NFSU2_TR(0x4f8737);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f873a:{NFSU2_TR(0x4f873a);
{goto L4f873e;}
}
B4f873c:L4f873c:{c.instructions+=1;NFSU2_TR(0x4f873c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f873e:L4f873e:{c.instructions+=5;NFSU2_TR(0x4f873e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f8741:{NFSU2_TR(0x4f8741);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4f8743:{NFSU2_TR(0x4f8743);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f8746:{NFSU2_TR(0x4f8746);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f8749:{NFSU2_TR(0x4f8749);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4f874b:L4f874b:{c.instructions+=2;NFSU2_TR(0x4f874b);
u8 U[4];
w4(U+0,u32(0x798ce0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f8750:{NFSU2_TR(0x4f8750);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f8755ull));
TAIL_STATIC(0x505450u,505);
}
B4f8755:L4f8755:{c.instructions+=4;NFSU2_TR(0x4f8755);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4f8758:{NFSU2_TR(0x4f8758);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f8759:{NFSU2_TR(0x4f8759);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f875a:{NFSU2_TR(0x4f875a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f875full));
TAIL_STATIC(0x537a10u,537);
}
B4f875f:L4f875f:{c.instructions+=4;NFSU2_TR(0x4f875f);
__builtin_memmove((R+28),(R+0),4);
}
B4f8761:{NFSU2_TR(0x4f8761);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4f8764:{NFSU2_TR(0x4f8764);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f8766:{NFSU2_TR(0x4f8766);
if(r1(R+518)){{goto L4f8785;}}
}
B4f8768:L4f8768:{c.instructions+=1;NFSU2_TR(0x4f8768);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f876dull));
TAIL_STATIC(0x440ec0u,440);
}
B4f876d:L4f876d:{c.instructions+=2;NFSU2_TR(0x4f876d);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f876f:{NFSU2_TR(0x4f876f);
if(r1(R+518)){{goto L4f8776;}}
}
B4f8771:L4f8771:{c.instructions+=2;NFSU2_TR(0x4f8771);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f8774:{NFSU2_TR(0x4f8774);
{goto L4f8778;}
}
B4f8776:L4f8776:{c.instructions+=1;NFSU2_TR(0x4f8776);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f8778:L4f8778:{c.instructions+=5;NFSU2_TR(0x4f8778);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f877b:{NFSU2_TR(0x4f877b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4f877d:{NFSU2_TR(0x4f877d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f8780:{NFSU2_TR(0x4f8780);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f8783:{NFSU2_TR(0x4f8783);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4f8785:L4f8785:{c.instructions+=2;NFSU2_TR(0x4f8785);
u8 U[4];
w4(U+0,u32(0x798cccull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f878a:{NFSU2_TR(0x4f878a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f878full));
TAIL_STATIC(0x505450u,505);
}
B4f878f:L4f878f:{c.instructions+=4;NFSU2_TR(0x4f878f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f8790:{NFSU2_TR(0x4f8790);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f8793:{NFSU2_TR(0x4f8793);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f8794:{NFSU2_TR(0x4f8794);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f8799ull));
TAIL_STATIC(0x537a10u,537);
}
B4f8799:L4f8799:{c.instructions+=4;NFSU2_TR(0x4f8799);
__builtin_memmove((R+28),(R+0),4);
}
B4f879b:{NFSU2_TR(0x4f879b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4f879e:{NFSU2_TR(0x4f879e);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f87a0:{NFSU2_TR(0x4f87a0);
if(r1(R+518)){{goto L4f87bf;}}
}
B4f87a2:L4f87a2:{c.instructions+=1;NFSU2_TR(0x4f87a2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f87a7ull));
TAIL_STATIC(0x440ec0u,440);
}
B4f87a7:L4f87a7:{c.instructions+=2;NFSU2_TR(0x4f87a7);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f87a9:{NFSU2_TR(0x4f87a9);
if(r1(R+518)){{goto L4f87b0;}}
}
B4f87ab:L4f87ab:{c.instructions+=2;NFSU2_TR(0x4f87ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f87ae:{NFSU2_TR(0x4f87ae);
{goto L4f87b2;}
}
B4f87b0:L4f87b0:{c.instructions+=1;NFSU2_TR(0x4f87b0);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f87b2:L4f87b2:{c.instructions+=5;NFSU2_TR(0x4f87b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f87b5:{NFSU2_TR(0x4f87b5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4f87b7:{NFSU2_TR(0x4f87b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f87ba:{NFSU2_TR(0x4f87ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f87bd:{NFSU2_TR(0x4f87bd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4f87bf:L4f87bf:{c.instructions+=9;NFSU2_TR(0x4f87bf);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f87c3:{NFSU2_TR(0x4f87c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f87c6:{NFSU2_TR(0x4f87c6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4f87c7:{NFSU2_TR(0x4f87c7);
__builtin_memmove((R+0),(R+24),4);
}
B4f87c9:{NFSU2_TR(0x4f87c9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4f87ca:{NFSU2_TR(0x4f87ca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4f87cb:{NFSU2_TR(0x4f87cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f87d2:{NFSU2_TR(0x4f87d2);
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
B4f87d5:{NFSU2_TR(0x4f87d5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f87e0:L4f87e0:{c.instructions+=28;NFSU2_TR(0x4f87e0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f87e2:{NFSU2_TR(0x4f87e2);
u8 U[4];
w4(U+0,u32(0x776918ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f87e7:{NFSU2_TR(0x4f87e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f87ed:{NFSU2_TR(0x4f87ed);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f87ee:{NFSU2_TR(0x4f87ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f87f5:{NFSU2_TR(0x4f87f5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f87f6:{NFSU2_TR(0x4f87f6);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f87fa:{NFSU2_TR(0x4f87fa);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f87fb:{NFSU2_TR(0x4f87fb);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f87fc:{NFSU2_TR(0x4f87fc);
__builtin_memmove((R+24),(R+4),4);
}
B4f87fe:{NFSU2_TR(0x4f87fe);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4f8800:{NFSU2_TR(0x4f8800);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f8801:{NFSU2_TR(0x4f8801);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f8805:{NFSU2_TR(0x4f8805);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+24)),r4(U+0));
}
B4f8807:{NFSU2_TR(0x4f8807);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f880a:{NFSU2_TR(0x4f880a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f880d:{NFSU2_TR(0x4f880d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f8810:{NFSU2_TR(0x4f8810);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
w4(U+4,u32(0x40ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4f8817:{NFSU2_TR(0x4f8817);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f881a:{NFSU2_TR(0x4f881a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f881d:{NFSU2_TR(0x4f881d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f8820:{NFSU2_TR(0x4f8820);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f8823:{NFSU2_TR(0x4f8823);
u8 U[4];
w4(U+0,u32(0x798d5cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f8828:{NFSU2_TR(0x4f8828);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f882c:{NFSU2_TR(0x4f882c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f882f:{NFSU2_TR(0x4f882f);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+12),2);
s2(u32(r4(U+0)),r2(U+4));
}
B4f8833:{NFSU2_TR(0x4f8833);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x46ull))));
__builtin_memmove((U+4),(R+12),2);
s2(u32(r4(U+0)),r2(U+4));
}
B4f8837:{NFSU2_TR(0x4f8837);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f883cull));
TAIL_STATIC(0x505450u,505);
}
B4f883c:L4f883c:{c.instructions+=4;NFSU2_TR(0x4f883c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f883f:{NFSU2_TR(0x4f883f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f8840:{NFSU2_TR(0x4f8840);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f8841:{NFSU2_TR(0x4f8841);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f8846ull));
TAIL_STATIC(0x537a60u,537);
}
B4f8846:L4f8846:{c.instructions+=4;NFSU2_TR(0x4f8846);
__builtin_memmove((R+28),(R+0),4);
}
B4f8848:{NFSU2_TR(0x4f8848);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4f884b:{NFSU2_TR(0x4f884b);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f884d:{NFSU2_TR(0x4f884d);
if(r1(R+518)){{goto L4f886c;}}
}
B4f884f:L4f884f:{c.instructions+=1;NFSU2_TR(0x4f884f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f8854ull));
TAIL_STATIC(0x440ec0u,440);
}
B4f8854:L4f8854:{c.instructions+=2;NFSU2_TR(0x4f8854);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f8856:{NFSU2_TR(0x4f8856);
if(r1(R+518)){{goto L4f885d;}}
}
B4f8858:L4f8858:{c.instructions+=2;NFSU2_TR(0x4f8858);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f885b:{NFSU2_TR(0x4f885b);
{goto L4f885f;}
}
B4f885d:L4f885d:{c.instructions+=1;NFSU2_TR(0x4f885d);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f885f:L4f885f:{c.instructions+=5;NFSU2_TR(0x4f885f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f8862:{NFSU2_TR(0x4f8862);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4f8864:{NFSU2_TR(0x4f8864);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f8867:{NFSU2_TR(0x4f8867);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f886a:{NFSU2_TR(0x4f886a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4f886c:L4f886c:{c.instructions+=3;NFSU2_TR(0x4f886c);
u8 U[4];
w4(U+0,u32(0x798d4cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f8871:{NFSU2_TR(0x4f8871);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f8874:{NFSU2_TR(0x4f8874);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f8879ull));
TAIL_STATIC(0x505450u,505);
}
B4f8879:L4f8879:{c.instructions+=4;NFSU2_TR(0x4f8879);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4f887c:{NFSU2_TR(0x4f887c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f887d:{NFSU2_TR(0x4f887d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f887e:{NFSU2_TR(0x4f887e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f8883ull));
TAIL_STATIC(0x537a10u,537);
}
B4f8883:L4f8883:{c.instructions+=4;NFSU2_TR(0x4f8883);
__builtin_memmove((R+28),(R+0),4);
}
B4f8885:{NFSU2_TR(0x4f8885);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4f8888:{NFSU2_TR(0x4f8888);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f888a:{NFSU2_TR(0x4f888a);
if(r1(R+518)){{goto L4f88a9;}}
}
B4f888c:L4f888c:{c.instructions+=1;NFSU2_TR(0x4f888c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f8891ull));
TAIL_STATIC(0x440ec0u,440);
}
B4f8891:L4f8891:{c.instructions+=2;NFSU2_TR(0x4f8891);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f8893:{NFSU2_TR(0x4f8893);
if(r1(R+518)){{goto L4f889a;}}
}
B4f8895:L4f8895:{c.instructions+=2;NFSU2_TR(0x4f8895);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f8898:{NFSU2_TR(0x4f8898);
{goto L4f889c;}
}
B4f889a:L4f889a:{c.instructions+=1;NFSU2_TR(0x4f889a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f889c:L4f889c:{c.instructions+=5;NFSU2_TR(0x4f889c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f889f:{NFSU2_TR(0x4f889f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4f88a1:{NFSU2_TR(0x4f88a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f88a4:{NFSU2_TR(0x4f88a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f88a7:{NFSU2_TR(0x4f88a7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4f88a9:L4f88a9:{c.instructions+=3;NFSU2_TR(0x4f88a9);
u8 U[4];
w4(U+0,u32(0x798d3cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f88ae:{NFSU2_TR(0x4f88ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f88b1:{NFSU2_TR(0x4f88b1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f88b6ull));
TAIL_STATIC(0x505450u,505);
}
B4f88b6:L4f88b6:{c.instructions+=4;NFSU2_TR(0x4f88b6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f88b7:{NFSU2_TR(0x4f88b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f88ba:{NFSU2_TR(0x4f88ba);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f88bb:{NFSU2_TR(0x4f88bb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f88c0ull));
TAIL_STATIC(0x537a10u,537);
}
B4f88c0:L4f88c0:{c.instructions+=4;NFSU2_TR(0x4f88c0);
__builtin_memmove((R+28),(R+0),4);
}
B4f88c2:{NFSU2_TR(0x4f88c2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4f88c5:{NFSU2_TR(0x4f88c5);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f88c7:{NFSU2_TR(0x4f88c7);
if(r1(R+518)){{goto L4f88e6;}}
}
B4f88c9:L4f88c9:{c.instructions+=1;NFSU2_TR(0x4f88c9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f88ceull));
TAIL_STATIC(0x440ec0u,440);
}
B4f88ce:L4f88ce:{c.instructions+=2;NFSU2_TR(0x4f88ce);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f88d0:{NFSU2_TR(0x4f88d0);
if(r1(R+518)){{goto L4f88d7;}}
}
B4f88d2:L4f88d2:{c.instructions+=2;NFSU2_TR(0x4f88d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f88d5:{NFSU2_TR(0x4f88d5);
{goto L4f88d9;}
}
B4f88d7:L4f88d7:{c.instructions+=1;NFSU2_TR(0x4f88d7);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f88d9:L4f88d9:{c.instructions+=5;NFSU2_TR(0x4f88d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f88dc:{NFSU2_TR(0x4f88dc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4f88de:{NFSU2_TR(0x4f88de);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f88e1:{NFSU2_TR(0x4f88e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f88e4:{NFSU2_TR(0x4f88e4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4f88e6:L4f88e6:{c.instructions+=3;NFSU2_TR(0x4f88e6);
u8 U[4];
w4(U+0,u32(0x798d2cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f88eb:{NFSU2_TR(0x4f88eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f88ee:{NFSU2_TR(0x4f88ee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f88f3ull));
TAIL_STATIC(0x505450u,505);
}
B4f88f3:L4f88f3:{c.instructions+=4;NFSU2_TR(0x4f88f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f88f6:{NFSU2_TR(0x4f88f6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f88f7:{NFSU2_TR(0x4f88f7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f88f8:{NFSU2_TR(0x4f88f8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f88fdull));
TAIL_STATIC(0x537a10u,537);
}
B4f88fd:L4f88fd:{c.instructions+=4;NFSU2_TR(0x4f88fd);
__builtin_memmove((R+28),(R+0),4);
}
B4f88ff:{NFSU2_TR(0x4f88ff);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4f8902:{NFSU2_TR(0x4f8902);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f8904:{NFSU2_TR(0x4f8904);
if(r1(R+518)){{goto L4f8923;}}
}
B4f8906:L4f8906:{c.instructions+=1;NFSU2_TR(0x4f8906);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f890bull));
TAIL_STATIC(0x440ec0u,440);
}
B4f890b:L4f890b:{c.instructions+=2;NFSU2_TR(0x4f890b);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f890d:{NFSU2_TR(0x4f890d);
if(r1(R+518)){{goto L4f8914;}}
}
B4f890f:L4f890f:{c.instructions+=2;NFSU2_TR(0x4f890f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f8912:{NFSU2_TR(0x4f8912);
{goto L4f8916;}
}
B4f8914:L4f8914:{c.instructions+=1;NFSU2_TR(0x4f8914);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f8916:L4f8916:{c.instructions+=5;NFSU2_TR(0x4f8916);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f8919:{NFSU2_TR(0x4f8919);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4f891b:{NFSU2_TR(0x4f891b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f891e:{NFSU2_TR(0x4f891e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f8921:{NFSU2_TR(0x4f8921);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4f8923:L4f8923:{c.instructions+=3;NFSU2_TR(0x4f8923);
u8 U[4];
w4(U+0,u32(0x798d10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f8928:{NFSU2_TR(0x4f8928);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f892b:{NFSU2_TR(0x4f892b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f8930ull));
TAIL_STATIC(0x505450u,505);
}
B4f8930:L4f8930:{c.instructions+=4;NFSU2_TR(0x4f8930);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4f8933:{NFSU2_TR(0x4f8933);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f8934:{NFSU2_TR(0x4f8934);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f8935:{NFSU2_TR(0x4f8935);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f893aull));
TAIL_STATIC(0x537a60u,537);
}
B4f893a:L4f893a:{c.instructions+=4;NFSU2_TR(0x4f893a);
__builtin_memmove((R+28),(R+0),4);
}
B4f893c:{NFSU2_TR(0x4f893c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4f893f:{NFSU2_TR(0x4f893f);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f8941:{NFSU2_TR(0x4f8941);
if(r1(R+518)){{goto L4f8960;}}
}
B4f8943:L4f8943:{c.instructions+=1;NFSU2_TR(0x4f8943);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f8948ull));
TAIL_STATIC(0x440ec0u,440);
}
B4f8948:L4f8948:{c.instructions+=2;NFSU2_TR(0x4f8948);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f894a:{NFSU2_TR(0x4f894a);
if(r1(R+518)){{goto L4f8951;}}
}
B4f894c:L4f894c:{c.instructions+=2;NFSU2_TR(0x4f894c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f894f:{NFSU2_TR(0x4f894f);
{goto L4f8953;}
}
B4f8951:L4f8951:{c.instructions+=1;NFSU2_TR(0x4f8951);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f8953:L4f8953:{c.instructions+=5;NFSU2_TR(0x4f8953);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f8956:{NFSU2_TR(0x4f8956);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4f8958:{NFSU2_TR(0x4f8958);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f895b:{NFSU2_TR(0x4f895b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f895e:{NFSU2_TR(0x4f895e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4f8960:L4f8960:{c.instructions+=2;NFSU2_TR(0x4f8960);
u8 U[4];
w4(U+0,u32(0x798cf8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f8965:{NFSU2_TR(0x4f8965);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f896aull));
TAIL_STATIC(0x505450u,505);
}
B4f896a:L4f896a:{c.instructions+=4;NFSU2_TR(0x4f896a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f896b:{NFSU2_TR(0x4f896b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f896e:{NFSU2_TR(0x4f896e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f896f:{NFSU2_TR(0x4f896f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f8974ull));
TAIL_STATIC(0x537a60u,537);
}
B4f8974:L4f8974:{c.instructions+=4;NFSU2_TR(0x4f8974);
__builtin_memmove((R+28),(R+0),4);
}
B4f8976:{NFSU2_TR(0x4f8976);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4f8979:{NFSU2_TR(0x4f8979);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f897b:{NFSU2_TR(0x4f897b);
if(r1(R+518)){{goto L4f899a;}}
}
B4f897d:L4f897d:{c.instructions+=1;NFSU2_TR(0x4f897d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f8982ull));
TAIL_STATIC(0x440ec0u,440);
}
B4f8982:L4f8982:{c.instructions+=2;NFSU2_TR(0x4f8982);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f8984:{NFSU2_TR(0x4f8984);
if(r1(R+518)){{goto L4f898b;}}
}
B4f8986:L4f8986:{c.instructions+=2;NFSU2_TR(0x4f8986);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f8989:{NFSU2_TR(0x4f8989);
{goto L4f898d;}
}
B4f898b:L4f898b:{c.instructions+=1;NFSU2_TR(0x4f898b);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f898d:L4f898d:{c.instructions+=5;NFSU2_TR(0x4f898d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f8990:{NFSU2_TR(0x4f8990);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4f8992:{NFSU2_TR(0x4f8992);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f8995:{NFSU2_TR(0x4f8995);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f8998:{NFSU2_TR(0x4f8998);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4f899a:L4f899a:{c.instructions+=4;NFSU2_TR(0x4f899a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f899d:{NFSU2_TR(0x4f899d);
u8 U[4];
w4(U+0,u32(0x8ca76279ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f89a2:{NFSU2_TR(0x4f89a2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f89a3:{NFSU2_TR(0x4f89a3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f89a8ull));
TAIL_STATIC(0x5379c0u,537);
}
B4f89a8:L4f89a8:{c.instructions+=10;NFSU2_TR(0x4f89a8);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f89ac:{NFSU2_TR(0x4f89ac);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4f89af:{NFSU2_TR(0x4f89af);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f89b2:{NFSU2_TR(0x4f89b2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4f89b3:{NFSU2_TR(0x4f89b3);
__builtin_memmove((R+0),(R+24),4);
}
B4f89b5:{NFSU2_TR(0x4f89b5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4f89b6:{NFSU2_TR(0x4f89b6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4f89b7:{NFSU2_TR(0x4f89b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f89be:{NFSU2_TR(0x4f89be);
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
B4f89c1:{NFSU2_TR(0x4f89c1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f89d0:L4f89d0:{c.instructions+=35;NFSU2_TR(0x4f89d0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f89d2:{NFSU2_TR(0x4f89d2);
u8 U[4];
w4(U+0,u32(0x7769a6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f89d7:{NFSU2_TR(0x4f89d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f89dd:{NFSU2_TR(0x4f89dd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f89de:{NFSU2_TR(0x4f89de);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f89e5:{NFSU2_TR(0x4f89e5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f89e6:{NFSU2_TR(0x4f89e6);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f89ea:{NFSU2_TR(0x4f89ea);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f89eb:{NFSU2_TR(0x4f89eb);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f89ec:{NFSU2_TR(0x4f89ec);
__builtin_memmove((R+12),(R+4),4);
}
B4f89ee:{NFSU2_TR(0x4f89ee);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f89ef:{NFSU2_TR(0x4f89ef);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4f89f2:{NFSU2_TR(0x4f89f2);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B4f89f4:{NFSU2_TR(0x4f89f4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f89f5:{NFSU2_TR(0x4f89f5);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f89f9:{NFSU2_TR(0x4f89f9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+24)),r4(U+0));
}
B4f89fb:{NFSU2_TR(0x4f89fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f89fe:{NFSU2_TR(0x4f89fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f8a01:{NFSU2_TR(0x4f8a01);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w4(U+4,u32(0x800ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4f8a08:{NFSU2_TR(0x4f8a08);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f8a0b:{NFSU2_TR(0x4f8a0b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f8a0e:{NFSU2_TR(0x4f8a0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f8a11:{NFSU2_TR(0x4f8a11);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x28ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4f8a14:{NFSU2_TR(0x4f8a14);
u8 U[4];
w4(U+0,u32(0x798da4ull));
s4(u32(r4(R+12)),r4(U+0));
}
B4f8a1a:{NFSU2_TR(0x4f8a1a);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f8a1e:{NFSU2_TR(0x4f8a1e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4f8a20:{NFSU2_TR(0x4f8a20);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f8a23:{NFSU2_TR(0x4f8a23);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f8a26:{NFSU2_TR(0x4f8a26);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f8a29:{NFSU2_TR(0x4f8a29);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f8a2c:{NFSU2_TR(0x4f8a2c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f8a2f:{NFSU2_TR(0x4f8a2f);
u8 U[4];
w4(U+0,u32(0xb2d2e745ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f8a34:{NFSU2_TR(0x4f8a34);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f8a35:{NFSU2_TR(0x4f8a35);
u8 U[5];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4f8a3a:{NFSU2_TR(0x4f8a3a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f8a3full));
TAIL_STATIC(0x5379c0u,537);
}
B4f8a3f:L4f8a3f:{c.instructions+=4;NFSU2_TR(0x4f8a3f);
__builtin_memmove((R+28),(R+0),4);
}
B4f8a41:{NFSU2_TR(0x4f8a41);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4f8a44:{NFSU2_TR(0x4f8a44);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f8a46:{NFSU2_TR(0x4f8a46);
if(r1(R+518)){{goto L4f8a65;}}
}
B4f8a48:L4f8a48:{c.instructions+=1;NFSU2_TR(0x4f8a48);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f8a4dull));
TAIL_STATIC(0x440ec0u,440);
}
B4f8a4d:L4f8a4d:{c.instructions+=2;NFSU2_TR(0x4f8a4d);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f8a4f:{NFSU2_TR(0x4f8a4f);
if(r1(R+518)){{goto L4f8a56;}}
}
B4f8a51:L4f8a51:{c.instructions+=2;NFSU2_TR(0x4f8a51);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f8a54:{NFSU2_TR(0x4f8a54);
{goto L4f8a58;}
}
B4f8a56:L4f8a56:{c.instructions+=1;NFSU2_TR(0x4f8a56);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f8a58:L4f8a58:{c.instructions+=5;NFSU2_TR(0x4f8a58);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f8a5b:{NFSU2_TR(0x4f8a5b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4f8a5d:{NFSU2_TR(0x4f8a5d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f8a60:{NFSU2_TR(0x4f8a60);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f8a63:{NFSU2_TR(0x4f8a63);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4f8a65:L4f8a65:{c.instructions+=2;NFSU2_TR(0x4f8a65);
w4(R+20,u32(0x1ull));
}
B4f8a6a:{NFSU2_TR(0x4f8a6a);
__builtin_memmove((R+12),(R+12),4);
}
B4f8a70:L4f8a70:{c.instructions+=3;NFSU2_TR(0x4f8a70);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f8a71:{NFSU2_TR(0x4f8a71);
u8 U[4];
w4(U+0,u32(0x798d8cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f8a76:{NFSU2_TR(0x4f8a76);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f8a7bull));
TAIL_STATIC(0x50b990u,50b);
}
B4f8a7b:L4f8a7b:{c.instructions+=4;NFSU2_TR(0x4f8a7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4f8a7e:{NFSU2_TR(0x4f8a7e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f8a7f:{NFSU2_TR(0x4f8a7f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f8a80:{NFSU2_TR(0x4f8a80);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f8a85ull));
TAIL_STATIC(0x5379c0u,537);
}
B4f8a85:L4f8a85:{c.instructions+=4;NFSU2_TR(0x4f8a85);
__builtin_memmove((R+28),(R+0),4);
}
B4f8a87:{NFSU2_TR(0x4f8a87);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4f8a8a:{NFSU2_TR(0x4f8a8a);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4f8a8c:{NFSU2_TR(0x4f8a8c);
if(r1(R+518)){{goto L4f8aab;}}
}
B4f8a8e:L4f8a8e:{c.instructions+=1;NFSU2_TR(0x4f8a8e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f8a93ull));
TAIL_STATIC(0x440ec0u,440);
}
B4f8a93:L4f8a93:{c.instructions+=2;NFSU2_TR(0x4f8a93);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4f8a95:{NFSU2_TR(0x4f8a95);
if(r1(R+518)){{goto L4f8a9c;}}
}
B4f8a97:L4f8a97:{c.instructions+=2;NFSU2_TR(0x4f8a97);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f8a9a:{NFSU2_TR(0x4f8a9a);
{goto L4f8a9e;}
}
B4f8a9c:L4f8a9c:{c.instructions+=1;NFSU2_TR(0x4f8a9c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f8a9e:L4f8a9e:{c.instructions+=5;NFSU2_TR(0x4f8a9e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f8aa1:{NFSU2_TR(0x4f8aa1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4f8aa3:{NFSU2_TR(0x4f8aa3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f8aa6:{NFSU2_TR(0x4f8aa6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f8aa9:{NFSU2_TR(0x4f8aa9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4f8aab:L4f8aab:{c.instructions+=3;NFSU2_TR(0x4f8aab);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f8aac:{NFSU2_TR(0x4f8aac);
u8 U[4];
w4(U+0,u32(0x798d74ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f8ab1:{NFSU2_TR(0x4f8ab1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f8ab6ull));
TAIL_STATIC(0x50b990u,50b);
}
B4f8ab6:L4f8ab6:{c.instructions+=4;NFSU2_TR(0x4f8ab6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f8ab7:{NFSU2_TR(0x4f8ab7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f8aba:{NFSU2_TR(0x4f8aba);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f8abb:{NFSU2_TR(0x4f8abb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f8ac0ull));
TAIL_STATIC(0x5379c0u,537);
}
B4f8ac0:L4f8ac0:{c.instructions+=4;NFSU2_TR(0x4f8ac0);
__builtin_memmove((R+28),(R+0),4);
}
B4f8ac2:{NFSU2_TR(0x4f8ac2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4f8ac5:{NFSU2_TR(0x4f8ac5);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4f8ac7:{NFSU2_TR(0x4f8ac7);
if(r1(R+518)){{goto L4f8ae6;}}
}
B4f8ac9:L4f8ac9:{c.instructions+=1;NFSU2_TR(0x4f8ac9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f8aceull));
TAIL_STATIC(0x440ec0u,440);
}
B4f8ace:L4f8ace:{c.instructions+=2;NFSU2_TR(0x4f8ace);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4f8ad0:{NFSU2_TR(0x4f8ad0);
if(r1(R+518)){{goto L4f8ad7;}}
}
B4f8ad2:L4f8ad2:{c.instructions+=2;NFSU2_TR(0x4f8ad2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f8ad5:{NFSU2_TR(0x4f8ad5);
{goto L4f8ad9;}
}
B4f8ad7:L4f8ad7:{c.instructions+=1;NFSU2_TR(0x4f8ad7);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f8ad9:L4f8ad9:{c.instructions+=5;NFSU2_TR(0x4f8ad9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f8adc:{NFSU2_TR(0x4f8adc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4f8ade:{NFSU2_TR(0x4f8ade);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f8ae1:{NFSU2_TR(0x4f8ae1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f8ae4:{NFSU2_TR(0x4f8ae4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4f8ae6:L4f8ae6:{c.instructions+=3;NFSU2_TR(0x4f8ae6);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B4f8ae7:{NFSU2_TR(0x4f8ae7);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f8aea:{NFSU2_TR(0x4f8aea);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4f8a70u);}goto L4f8a70;}}
}
B4f8aec:L4f8aec:{c.instructions+=3;NFSU2_TR(0x4f8aec);
__builtin_memmove((R+0),gp(0x89e7d8),1);
}
B4f8af1:{NFSU2_TR(0x4f8af1);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4f8af3:{NFSU2_TR(0x4f8af3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4f8afe;}}
}
B4f8af5:L4f8af5:{c.instructions+=3;NFSU2_TR(0x4f8af5);
__builtin_memmove((R+0),gp(0x890108),4);
}
B4f8afa:{NFSU2_TR(0x4f8afa);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4f8afc:{NFSU2_TR(0x4f8afc);
if(r1(R+518)){{goto L4f8b32;}}
}
B4f8afe:L4f8afe:{c.instructions+=4;NFSU2_TR(0x4f8afe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f8b01:{NFSU2_TR(0x4f8b01);
u8 U[4];
w4(U+0,u32(0xb2751131ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f8b06:{NFSU2_TR(0x4f8b06);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f8b07:{NFSU2_TR(0x4f8b07);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f8b0cull));
TAIL_STATIC(0x5379c0u,537);
}
B4f8b0c:L4f8b0c:{c.instructions+=4;NFSU2_TR(0x4f8b0c);
__builtin_memmove((R+28),(R+0),4);
}
B4f8b0e:{NFSU2_TR(0x4f8b0e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4f8b11:{NFSU2_TR(0x4f8b11);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4f8b13:{NFSU2_TR(0x4f8b13);
if(r1(R+518)){{goto L4f8b32;}}
}
B4f8b15:L4f8b15:{c.instructions+=1;NFSU2_TR(0x4f8b15);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f8b1aull));
TAIL_STATIC(0x440ec0u,440);
}
B4f8b1a:L4f8b1a:{c.instructions+=2;NFSU2_TR(0x4f8b1a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4f8b1c:{NFSU2_TR(0x4f8b1c);
if(r1(R+518)){{goto L4f8b23;}}
}
B4f8b1e:L4f8b1e:{c.instructions+=2;NFSU2_TR(0x4f8b1e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f8b21:{NFSU2_TR(0x4f8b21);
{goto L4f8b25;}
}
B4f8b23:L4f8b23:{c.instructions+=1;NFSU2_TR(0x4f8b23);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f8b25:L4f8b25:{c.instructions+=5;NFSU2_TR(0x4f8b25);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f8b28:{NFSU2_TR(0x4f8b28);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4f8b2a:{NFSU2_TR(0x4f8b2a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f8b2d:{NFSU2_TR(0x4f8b2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f8b30:{NFSU2_TR(0x4f8b30);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4f8b32:L4f8b32:{c.instructions+=4;NFSU2_TR(0x4f8b32);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4f8b36:{NFSU2_TR(0x4f8b36);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f8b37:{NFSU2_TR(0x4f8b37);
__builtin_memmove((R+4),(R+12),4);
}
B4f8b39:{NFSU2_TR(0x4f8b39);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f8b3eull));
TAIL_STATIC(0x4daf10u,4da);
}
B4f8b3e:L4f8b3e:{c.instructions+=9;NFSU2_TR(0x4f8b3e);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f8b42:{NFSU2_TR(0x4f8b42);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4f8b43:{NFSU2_TR(0x4f8b43);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4f8b44:{NFSU2_TR(0x4f8b44);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4f8b45:{NFSU2_TR(0x4f8b45);
__builtin_memmove((R+0),(R+12),4);
}
B4f8b47:{NFSU2_TR(0x4f8b47);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4f8b48:{NFSU2_TR(0x4f8b48);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f8b4f:{NFSU2_TR(0x4f8b4f);
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
B4f8b52:{NFSU2_TR(0x4f8b52);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f8b60:L4f8b60:{c.instructions+=3;NFSU2_TR(0x4f8b60);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f8b61:{NFSU2_TR(0x4f8b61);
__builtin_memmove((R+24),(R+4),4);
}
B4f8b63:{NFSU2_TR(0x4f8b63);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f8b68ull));
{goto L4f8b80;}
}
B4f8b68:L4f8b68:{c.instructions+=2;NFSU2_TR(0x4f8b68);
u8 U[9];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
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
B4f8b6d:{NFSU2_TR(0x4f8b6d);
if(r1(R+518)){{goto L4f8b78;}}
}
B4f8b6f:L4f8b6f:{c.instructions+=2;NFSU2_TR(0x4f8b6f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f8b70:{NFSU2_TR(0x4f8b70);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f8b75ull));
TAIL_STATIC(0x575630u,575);
}
B4f8b75:L4f8b75:{c.instructions+=1;NFSU2_TR(0x4f8b75);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x4ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x4ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4f8b78:L4f8b78:{c.instructions+=3;NFSU2_TR(0x4f8b78);
__builtin_memmove((R+0),(R+24),4);
}
B4f8b7a:{NFSU2_TR(0x4f8b7a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4f8b7b:{NFSU2_TR(0x4f8b7b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f8b80:L4f8b80:{c.instructions+=13;NFSU2_TR(0x4f8b80);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f8b82:{NFSU2_TR(0x4f8b82);
u8 U[4];
w4(U+0,u32(0x7769d7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f8b87:{NFSU2_TR(0x4f8b87);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f8b8d:{NFSU2_TR(0x4f8b8d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f8b8e:{NFSU2_TR(0x4f8b8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f8b95:{NFSU2_TR(0x4f8b95);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f8b96:{NFSU2_TR(0x4f8b96);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f8b97:{NFSU2_TR(0x4f8b97);
__builtin_memmove((R+24),(R+4),4);
}
B4f8b99:{NFSU2_TR(0x4f8b99);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f8b9d:{NFSU2_TR(0x4f8b9d);
u8 U[4];
w4(U+0,u32(0x798da4ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4f8ba3:{NFSU2_TR(0x4f8ba3);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4f8ba6:{NFSU2_TR(0x4f8ba6);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4f8bae:{NFSU2_TR(0x4f8bae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f8bb3ull));
TAIL_STATIC(0x4358e0u,435);
}
B4f8bb3:L4f8bb3:{c.instructions+=5;NFSU2_TR(0x4f8bb3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f8bb6:{NFSU2_TR(0x4f8bb6);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x8ull))));
}
B4f8bb9:{NFSU2_TR(0x4f8bb9);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f8bbb:{NFSU2_TR(0x4f8bbb);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4f8bc3:{NFSU2_TR(0x4f8bc3);
if(r1(R+518)){{goto L4f8bde;}}
}
B4f8bc5:L4f8bc5:{c.instructions+=6;NFSU2_TR(0x4f8bc5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4f8bc7:{NFSU2_TR(0x4f8bc7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4f8bca:{NFSU2_TR(0x4f8bca);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B4f8bcc:{NFSU2_TR(0x4f8bcc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f8bcd:{NFSU2_TR(0x4f8bcd);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f8bd0:{NFSU2_TR(0x4f8bd0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f8bd5ull));
TAIL_STATIC(0x440ef0u,440);
}
B4f8bd5:L4f8bd5:{c.instructions+=4;NFSU2_TR(0x4f8bd5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4f8bd7:{NFSU2_TR(0x4f8bd7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4f8bda:{NFSU2_TR(0x4f8bda);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f8bdc:{NFSU2_TR(0x4f8bdc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4f8bc5u);}goto L4f8bc5;}}
}
B4f8bde:L4f8bde:{c.instructions+=5;NFSU2_TR(0x4f8bde);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4f8be2:{NFSU2_TR(0x4f8be2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4f8be3:{NFSU2_TR(0x4f8be3);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f8bea:{NFSU2_TR(0x4f8bea);
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
B4f8bed:{NFSU2_TR(0x4f8bed);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4f8bf0:L4f8bf0:{c.instructions+=21;NFSU2_TR(0x4f8bf0);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4f8bf6:{NFSU2_TR(0x4f8bf6);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f8bf8:{NFSU2_TR(0x4f8bf8);
u8 U[4];
w4(U+0,u32(0x776bd0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f8bfd:{NFSU2_TR(0x4f8bfd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f8bfe:{NFSU2_TR(0x4f8bfe);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f8c05:{NFSU2_TR(0x4f8c05);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f8c06:{NFSU2_TR(0x4f8c06);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f8c07:{NFSU2_TR(0x4f8c07);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B4f8c0b:{NFSU2_TR(0x4f8c0b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f8c0c:{NFSU2_TR(0x4f8c0c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f8c0d:{NFSU2_TR(0x4f8c0d);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4f8c11:{NFSU2_TR(0x4f8c11);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4f8c13:{NFSU2_TR(0x4f8c13);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f8c14:{NFSU2_TR(0x4f8c14);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f8c15:{NFSU2_TR(0x4f8c15);
__builtin_memmove((R+24),(R+4),4);
}
B4f8c17:{NFSU2_TR(0x4f8c17);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f8c18:{NFSU2_TR(0x4f8c18);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f8c19:{NFSU2_TR(0x4f8c19);
u8 U[4];
w4(U+0,u32(0x798f10ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4f8c1f:{NFSU2_TR(0x4f8c1f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f8c22:{NFSU2_TR(0x4f8c22);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f8c25:{NFSU2_TR(0x4f8c25);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f8c2aull));
TAIL_STATIC(0x555f10u,555);
}
B4f8c2a:L4f8c2a:{c.instructions+=4;NFSU2_TR(0x4f8c2a);
__builtin_memmove((R+0),gp(0x89e7d8),1);
}
B4f8c2f:{NFSU2_TR(0x4f8c2f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4f8c32:{NFSU2_TR(0x4f8c32);
u8 U[2];
__builtin_memmove((U+0),(R+12),1);
w1(U+1,u8(u32(r1(R+0))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B4f8c34:{NFSU2_TR(0x4f8c34);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4f8c58;}}
}
B4f8c36:L4f8c36:{c.instructions+=2;NFSU2_TR(0x4f8c36);
u8 U[8];
__builtin_memmove((U+0),gp(0x890108),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+12))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f8c3c:{NFSU2_TR(0x4f8c3c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4f8c58;}}
}
B4f8c3e:L4f8c3e:{c.instructions+=2;NFSU2_TR(0x4f8c3e);
u8 U[2];
__builtin_memmove((U+0),gp(0x89e7e5),1);
w1(U+1,u8(u32(r1(U+0))-u32(r1(R+12))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B4f8c44:{NFSU2_TR(0x4f8c44);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4f8c58;}}
}
B4f8c46:L4f8c46:{c.instructions+=2;NFSU2_TR(0x4f8c46);
u8 U[8];
__builtin_memmove((U+0),gp(0x836474),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+12))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f8c4c:{NFSU2_TR(0x4f8c4c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4f8c58;}}
}
B4f8c4e:L4f8c4e:{c.instructions+=3;NFSU2_TR(0x4f8c4e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f8c4f:{NFSU2_TR(0x4f8c4f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f8c50:{NFSU2_TR(0x4f8c50);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f8c55ull));
TAIL_STATIC(0x52cfc0u,52c);
}
B4f8c55:L4f8c55:{c.instructions+=1;NFSU2_TR(0x4f8c55);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4f8c58:L4f8c58:{c.instructions+=2;NFSU2_TR(0x4f8c58);
u8 U[5];
__builtin_memmove((U+3),gp(0x83aa14),1);
w1(R+512,u8((r1(U+3))<(r1(R+12))));
w1(R+523,sborrow<u8>(r1(U+3),r1(R+12)));
w1(U+4,u8(u32(r1(U+3))-u32(r1(R+12))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4f8c5e:{NFSU2_TR(0x4f8c5e);
if(r1(R+518)){{goto L4f8c69;}}
}
B4f8c60:L4f8c60:{c.instructions+=2;NFSU2_TR(0x4f8c60);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f8c61:{NFSU2_TR(0x4f8c61);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f8c66ull));
TAIL_STATIC(0x4022c0u,402);
}
B4f8c66:L4f8c66:{c.instructions+=1;NFSU2_TR(0x4f8c66);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4f8c69:L4f8c69:{c.instructions+=29;NFSU2_TR(0x4f8c69);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f8c6c:{NFSU2_TR(0x4f8c6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f8c6f:{NFSU2_TR(0x4f8c6f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f8c72:{NFSU2_TR(0x4f8c72);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f8c75:{NFSU2_TR(0x4f8c75);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f8c78:{NFSU2_TR(0x4f8c78);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f8c7b:{NFSU2_TR(0x4f8c7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f8c7e:{NFSU2_TR(0x4f8c7e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f8c81:{NFSU2_TR(0x4f8c81);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f8c84:{NFSU2_TR(0x4f8c84);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f8c87:{NFSU2_TR(0x4f8c87);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f8c8a:{NFSU2_TR(0x4f8c8a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f8c8d:{NFSU2_TR(0x4f8c8d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f8c90:{NFSU2_TR(0x4f8c90);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f8c93:{NFSU2_TR(0x4f8c93);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f8c96:{NFSU2_TR(0x4f8c96);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f8c99:{NFSU2_TR(0x4f8c99);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f8c9c:{NFSU2_TR(0x4f8c9c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f8c9f:{NFSU2_TR(0x4f8c9f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f8ca2:{NFSU2_TR(0x4f8ca2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f8ca5:{NFSU2_TR(0x4f8ca5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f8ca8:{NFSU2_TR(0x4f8ca8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f8cab:{NFSU2_TR(0x4f8cab);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f8cae:{NFSU2_TR(0x4f8cae);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f8cb1:{NFSU2_TR(0x4f8cb1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f8cb4:{NFSU2_TR(0x4f8cb4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f8cb7:{NFSU2_TR(0x4f8cb7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f8cbd:{NFSU2_TR(0x4f8cbd);
u8 U[2];
__builtin_memmove((U+0),gp(0x89e7e5),1);
w1(U+1,u8(u32(r1(U+0))-u32(r1(R+12))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B4f8cc3:{NFSU2_TR(0x4f8cc3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4f8ccd;}}
}
B4f8cc5:L4f8cc5:{c.instructions+=2;NFSU2_TR(0x4f8cc5);
u8 U[8];
__builtin_memmove((U+0),gp(0x836474),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+12))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f8ccb:{NFSU2_TR(0x4f8ccb);
if(r1(R+518)){{goto L4f8cf2;}}
}
B4f8ccd:L4f8ccd:{c.instructions+=2;NFSU2_TR(0x4f8ccd);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f8ccf:{NFSU2_TR(0x4f8ccf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f8cd4ull));
TAIL_STATIC(0x575620u,575);
}
B4f8cd4:L4f8cd4:{c.instructions+=3;NFSU2_TR(0x4f8cd4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4f8cd7:{NFSU2_TR(0x4f8cd7);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f8cd9:{NFSU2_TR(0x4f8cd9);
if(r1(R+518)){{goto L4f8ce8;}}
}
B4f8cdb:L4f8cdb:{c.instructions+=4;NFSU2_TR(0x4f8cdb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4f8cdd:{NFSU2_TR(0x4f8cdd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f8ce0:{NFSU2_TR(0x4f8ce0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f8ce3:{NFSU2_TR(0x4f8ce3);
TAIL_STATIC(0x4f91b4u,4f9);
}
B4f8ce8:L4f8ce8:{c.instructions+=3;NFSU2_TR(0x4f8ce8);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f8cea:{NFSU2_TR(0x4f8cea);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f8ced:{NFSU2_TR(0x4f8ced);
TAIL_STATIC(0x4f91b4u,4f9);
}
B4f8cf2:L4f8cf2:{c.instructions+=2;NFSU2_TR(0x4f8cf2);
u8 U[2];
__builtin_memmove((U+0),gp(0x89e7d8),1);
w1(U+1,u8(u32(r1(U+0))-u32(r1(R+12))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B4f8cf8:{NFSU2_TR(0x4f8cf8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4f8d02;}}
}
B4f8cfa:L4f8cfa:{c.instructions+=2;NFSU2_TR(0x4f8cfa);
u8 U[8];
__builtin_memmove((U+0),gp(0x890108),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+12))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f8d00:{NFSU2_TR(0x4f8d00);
if(r1(R+518)){{goto L4f8d5b;}}
}
B4f8d02:L4f8d02:{c.instructions+=2;NFSU2_TR(0x4f8d02);
u8 U[4];
w4(U+0,u32(0xa8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f8d07:{NFSU2_TR(0x4f8d07);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f8d0cull));
TAIL_STATIC(0x575620u,575);
}
B4f8d0c:L4f8d0c:{c.instructions+=5;NFSU2_TR(0x4f8d0c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4f8d0f:{NFSU2_TR(0x4f8d0f);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f8d13:{NFSU2_TR(0x4f8d13);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f8d15:{NFSU2_TR(0x4f8d15);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f8d19:{NFSU2_TR(0x4f8d19);
if(r1(R+518)){{goto L4f8d26;}}
}
B4f8d1b:L4f8d1b:{c.instructions+=4;NFSU2_TR(0x4f8d1b);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f8d1c:{NFSU2_TR(0x4f8d1c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f8d1d:{NFSU2_TR(0x4f8d1d);
__builtin_memmove((R+4),(R+0),4);
}
B4f8d1f:{NFSU2_TR(0x4f8d1f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f8d24ull));
TAIL_STATIC(0x4f6500u,4f6);
}
B4f8d24:L4f8d24:{c.instructions+=1;NFSU2_TR(0x4f8d24);
{goto L4f8d28;}
}
B4f8d26:L4f8d26:{c.instructions+=1;NFSU2_TR(0x4f8d26);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f8d28:L4f8d28:{c.instructions+=4;NFSU2_TR(0x4f8d28);
u8 U[4];
w4(U+0,u32(0x290ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f8d2d:{NFSU2_TR(0x4f8d2d);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4f8d35:{NFSU2_TR(0x4f8d35);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f8d38:{NFSU2_TR(0x4f8d38);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f8d3dull));
TAIL_STATIC(0x575620u,575);
}
B4f8d3d:L4f8d3d:{c.instructions+=3;NFSU2_TR(0x4f8d3d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4f8d40:{NFSU2_TR(0x4f8d40);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f8d44:{NFSU2_TR(0x4f8d44);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4f8d4c:L4f8d4c:{c.instructions+=2;NFSU2_TR(0x4f8d4c);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f8d4e:{NFSU2_TR(0x4f8d4e);
if(r1(R+518)){{goto L4f8dab;}}
}
B4f8d50:L4f8d50:{c.instructions+=4;NFSU2_TR(0x4f8d50);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f8d51:{NFSU2_TR(0x4f8d51);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f8d52:{NFSU2_TR(0x4f8d52);
__builtin_memmove((R+4),(R+0),4);
}
B4f8d54:{NFSU2_TR(0x4f8d54);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f8d59ull));
TAIL_STATIC(0x4f6130u,4f6);
}
B4f8d59:L4f8d59:{c.instructions+=1;NFSU2_TR(0x4f8d59);
{goto L4f8dad;}
}
B4f8d5b:L4f8d5b:{c.instructions+=2;NFSU2_TR(0x4f8d5b);
u8 U[4];
w4(U+0,u32(0xc8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f8d60:{NFSU2_TR(0x4f8d60);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f8d65ull));
TAIL_STATIC(0x575620u,575);
}
B4f8d65:L4f8d65:{c.instructions+=5;NFSU2_TR(0x4f8d65);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4f8d68:{NFSU2_TR(0x4f8d68);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f8d6c:{NFSU2_TR(0x4f8d6c);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f8d6e:{NFSU2_TR(0x4f8d6e);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4f8d76:{NFSU2_TR(0x4f8d76);
if(r1(R+518)){{goto L4f8d83;}}
}
B4f8d78:L4f8d78:{c.instructions+=4;NFSU2_TR(0x4f8d78);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f8d79:{NFSU2_TR(0x4f8d79);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f8d7a:{NFSU2_TR(0x4f8d7a);
__builtin_memmove((R+4),(R+0),4);
}
B4f8d7c:{NFSU2_TR(0x4f8d7c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f8d81ull));
TAIL_STATIC(0x4f5100u,4f5);
}
B4f8d81:L4f8d81:{c.instructions+=1;NFSU2_TR(0x4f8d81);
{goto L4f8d85;}
}
B4f8d83:L4f8d83:{c.instructions+=1;NFSU2_TR(0x4f8d83);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f8d85:L4f8d85:{c.instructions+=4;NFSU2_TR(0x4f8d85);
u8 U[4];
w4(U+0,u32(0x290ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f8d8a:{NFSU2_TR(0x4f8d8a);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4f8d92:{NFSU2_TR(0x4f8d92);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f8d95:{NFSU2_TR(0x4f8d95);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f8d9aull));
TAIL_STATIC(0x575620u,575);
}
B4f8d9a:L4f8d9a:{c.instructions+=4;NFSU2_TR(0x4f8d9a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4f8d9d:{NFSU2_TR(0x4f8d9d);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f8da1:{NFSU2_TR(0x4f8da1);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4f8da9:{NFSU2_TR(0x4f8da9);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4f8d4cu);}goto L4f8d4c;}
}
B4f8dab:L4f8dab:{c.instructions+=1;NFSU2_TR(0x4f8dab);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f8dad:L4f8dad:{c.instructions+=4;NFSU2_TR(0x4f8dad);
u8 U[4];
w4(U+0,u32(0x38ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f8daf:{NFSU2_TR(0x4f8daf);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4f8db7:{NFSU2_TR(0x4f8db7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f8dba:{NFSU2_TR(0x4f8dba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f8dbfull));
TAIL_STATIC(0x575620u,575);
}
B4f8dbf:L4f8dbf:{c.instructions+=5;NFSU2_TR(0x4f8dbf);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4f8dc2:{NFSU2_TR(0x4f8dc2);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f8dc6:{NFSU2_TR(0x4f8dc6);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f8dc8:{NFSU2_TR(0x4f8dc8);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4f8dd0:{NFSU2_TR(0x4f8dd0);
if(r1(R+518)){{goto L4f8ddd;}}
}
B4f8dd2:L4f8dd2:{c.instructions+=4;NFSU2_TR(0x4f8dd2);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f8dd3:{NFSU2_TR(0x4f8dd3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f8dd4:{NFSU2_TR(0x4f8dd4);
__builtin_memmove((R+4),(R+0),4);
}
B4f8dd6:{NFSU2_TR(0x4f8dd6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f8ddbull));
TAIL_STATIC(0x4f5a70u,4f5);
}
B4f8ddb:L4f8ddb:{c.instructions+=1;NFSU2_TR(0x4f8ddb);
{goto L4f8ddf;}
}
B4f8ddd:L4f8ddd:{c.instructions+=1;NFSU2_TR(0x4f8ddd);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f8ddf:L4f8ddf:{c.instructions+=4;NFSU2_TR(0x4f8ddf);
u8 U[4];
w4(U+0,u32(0x58ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f8de1:{NFSU2_TR(0x4f8de1);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4f8de9:{NFSU2_TR(0x4f8de9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f8dec:{NFSU2_TR(0x4f8dec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f8df1ull));
TAIL_STATIC(0x575620u,575);
}
B4f8df1:L4f8df1:{c.instructions+=5;NFSU2_TR(0x4f8df1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4f8df4:{NFSU2_TR(0x4f8df4);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f8df8:{NFSU2_TR(0x4f8df8);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f8dfa:{NFSU2_TR(0x4f8dfa);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x5ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4f8e02:{NFSU2_TR(0x4f8e02);
if(r1(R+518)){{goto L4f8e0f;}}
}
B4f8e04:L4f8e04:{c.instructions+=4;NFSU2_TR(0x4f8e04);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f8e05:{NFSU2_TR(0x4f8e05);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f8e06:{NFSU2_TR(0x4f8e06);
__builtin_memmove((R+4),(R+0),4);
}
B4f8e08:{NFSU2_TR(0x4f8e08);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f8e0dull));
TAIL_STATIC(0x4f4ac0u,4f4);
}
B4f8e0d:L4f8e0d:{c.instructions+=1;NFSU2_TR(0x4f8e0d);
{goto L4f8e11;}
}
B4f8e0f:L4f8e0f:{c.instructions+=1;NFSU2_TR(0x4f8e0f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f8e11:L4f8e11:{c.instructions+=4;NFSU2_TR(0x4f8e11);
u8 U[4];
w4(U+0,u32(0x28ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f8e13:{NFSU2_TR(0x4f8e13);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4f8e1b:{NFSU2_TR(0x4f8e1b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f8e1e:{NFSU2_TR(0x4f8e1e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f8e23ull));
TAIL_STATIC(0x575620u,575);
}
B4f8e23:L4f8e23:{c.instructions+=5;NFSU2_TR(0x4f8e23);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4f8e26:{NFSU2_TR(0x4f8e26);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f8e2a:{NFSU2_TR(0x4f8e2a);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f8e2c:{NFSU2_TR(0x4f8e2c);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x6ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4f8e34:{NFSU2_TR(0x4f8e34);
if(r1(R+518)){{goto L4f8e41;}}
}
B4f8e36:L4f8e36:{c.instructions+=4;NFSU2_TR(0x4f8e36);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f8e37:{NFSU2_TR(0x4f8e37);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f8e38:{NFSU2_TR(0x4f8e38);
__builtin_memmove((R+4),(R+0),4);
}
B4f8e3a:{NFSU2_TR(0x4f8e3a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f8e3full));
TAIL_STATIC(0x4f69e0u,4f6);
}
B4f8e3f:L4f8e3f:{c.instructions+=1;NFSU2_TR(0x4f8e3f);
{goto L4f8e43;}
}
B4f8e41:L4f8e41:{c.instructions+=1;NFSU2_TR(0x4f8e41);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f8e43:L4f8e43:{c.instructions+=4;NFSU2_TR(0x4f8e43);
u8 U[4];
w4(U+0,u32(0x38ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f8e45:{NFSU2_TR(0x4f8e45);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4f8e4d:{NFSU2_TR(0x4f8e4d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f8e50:{NFSU2_TR(0x4f8e50);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f8e55ull));
TAIL_STATIC(0x575620u,575);
}
B4f8e55:L4f8e55:{c.instructions+=5;NFSU2_TR(0x4f8e55);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4f8e58:{NFSU2_TR(0x4f8e58);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f8e5c:{NFSU2_TR(0x4f8e5c);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f8e5e:{NFSU2_TR(0x4f8e5e);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x7ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4f8e66:{NFSU2_TR(0x4f8e66);
if(r1(R+518)){{goto L4f8e73;}}
}
B4f8e68:L4f8e68:{c.instructions+=4;NFSU2_TR(0x4f8e68);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f8e69:{NFSU2_TR(0x4f8e69);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f8e6a:{NFSU2_TR(0x4f8e6a);
__builtin_memmove((R+4),(R+0),4);
}
B4f8e6c:{NFSU2_TR(0x4f8e6c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f8e71ull));
TAIL_STATIC(0x4f6a90u,4f6);
}
B4f8e71:L4f8e71:{c.instructions+=1;NFSU2_TR(0x4f8e71);
{goto L4f8e75;}
}
B4f8e73:L4f8e73:{c.instructions+=1;NFSU2_TR(0x4f8e73);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f8e75:L4f8e75:{c.instructions+=4;NFSU2_TR(0x4f8e75);
u8 U[4];
w4(U+0,u32(0xa0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f8e7a:{NFSU2_TR(0x4f8e7a);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4f8e82:{NFSU2_TR(0x4f8e82);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f8e85:{NFSU2_TR(0x4f8e85);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f8e8aull));
TAIL_STATIC(0x575620u,575);
}
B4f8e8a:L4f8e8a:{c.instructions+=5;NFSU2_TR(0x4f8e8a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4f8e8d:{NFSU2_TR(0x4f8e8d);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f8e91:{NFSU2_TR(0x4f8e91);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f8e93:{NFSU2_TR(0x4f8e93);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x8ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4f8e9b:{NFSU2_TR(0x4f8e9b);
if(r1(R+518)){{goto L4f8ea8;}}
}
B4f8e9d:L4f8e9d:{c.instructions+=4;NFSU2_TR(0x4f8e9d);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f8e9e:{NFSU2_TR(0x4f8e9e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f8e9f:{NFSU2_TR(0x4f8e9f);
__builtin_memmove((R+4),(R+0),4);
}
B4f8ea1:{NFSU2_TR(0x4f8ea1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f8ea6ull));
TAIL_STATIC(0x4f6c00u,4f6);
}
B4f8ea6:L4f8ea6:{c.instructions+=1;NFSU2_TR(0x4f8ea6);
{goto L4f8eaa;}
}
B4f8ea8:L4f8ea8:{c.instructions+=1;NFSU2_TR(0x4f8ea8);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f8eaa:L4f8eaa:{c.instructions+=4;NFSU2_TR(0x4f8eaa);
u8 U[4];
w4(U+0,u32(0x50ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f8eac:{NFSU2_TR(0x4f8eac);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4f8eb4:{NFSU2_TR(0x4f8eb4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f8eb7:{NFSU2_TR(0x4f8eb7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f8ebcull));
TAIL_STATIC(0x575620u,575);
}
B4f8ebc:L4f8ebc:{c.instructions+=5;NFSU2_TR(0x4f8ebc);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4f8ebf:{NFSU2_TR(0x4f8ebf);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f8ec3:{NFSU2_TR(0x4f8ec3);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f8ec5:{NFSU2_TR(0x4f8ec5);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x9ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4f8ecd:{NFSU2_TR(0x4f8ecd);
if(r1(R+518)){{goto L4f8eda;}}
}
B4f8ecf:L4f8ecf:{c.instructions+=4;NFSU2_TR(0x4f8ecf);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f8ed0:{NFSU2_TR(0x4f8ed0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f8ed1:{NFSU2_TR(0x4f8ed1);
__builtin_memmove((R+4),(R+0),4);
}
B4f8ed3:{NFSU2_TR(0x4f8ed3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f8ed8ull));
TAIL_STATIC(0x4f7170u,4f7);
}
B4f8ed8:L4f8ed8:{c.instructions+=1;NFSU2_TR(0x4f8ed8);
{goto L4f8edc;}
}
B4f8eda:L4f8eda:{c.instructions+=1;NFSU2_TR(0x4f8eda);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f8edc:L4f8edc:{c.instructions+=4;NFSU2_TR(0x4f8edc);
u8 U[4];
w4(U+0,u32(0x68ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f8ede:{NFSU2_TR(0x4f8ede);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4f8ee6:{NFSU2_TR(0x4f8ee6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f8ee9:{NFSU2_TR(0x4f8ee9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f8eeeull));
TAIL_STATIC(0x575620u,575);
}
B4f8eee:L4f8eee:{c.instructions+=5;NFSU2_TR(0x4f8eee);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4f8ef1:{NFSU2_TR(0x4f8ef1);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f8ef5:{NFSU2_TR(0x4f8ef5);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f8ef7:{NFSU2_TR(0x4f8ef7);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0xaull));
s4(u32(r4(U+0)),r4(U+4));
}
B4f8eff:{NFSU2_TR(0x4f8eff);
if(r1(R+518)){{goto L4f8f0c;}}
}
B4f8f01:L4f8f01:{c.instructions+=4;NFSU2_TR(0x4f8f01);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f8f02:{NFSU2_TR(0x4f8f02);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f8f03:{NFSU2_TR(0x4f8f03);
__builtin_memmove((R+4),(R+0),4);
}
B4f8f05:{NFSU2_TR(0x4f8f05);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f8f0aull));
TAIL_STATIC(0x4f5c40u,4f5);
}
B4f8f0a:L4f8f0a:{c.instructions+=1;NFSU2_TR(0x4f8f0a);
{goto L4f8f0e;}
}
B4f8f0c:L4f8f0c:{c.instructions+=1;NFSU2_TR(0x4f8f0c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f8f0e:L4f8f0e:{c.instructions+=4;NFSU2_TR(0x4f8f0e);
u8 U[4];
w4(U+0,u32(0x30ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f8f10:{NFSU2_TR(0x4f8f10);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4f8f18:{NFSU2_TR(0x4f8f18);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f8f1b:{NFSU2_TR(0x4f8f1b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f8f20ull));
TAIL_STATIC(0x575620u,575);
}
B4f8f20:L4f8f20:{c.instructions+=5;NFSU2_TR(0x4f8f20);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4f8f23:{NFSU2_TR(0x4f8f23);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f8f27:{NFSU2_TR(0x4f8f27);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f8f29:{NFSU2_TR(0x4f8f29);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0xbull));
s4(u32(r4(U+0)),r4(U+4));
}
B4f8f31:{NFSU2_TR(0x4f8f31);
if(r1(R+518)){{goto L4f8f3e;}}
}
B4f8f33:L4f8f33:{c.instructions+=4;NFSU2_TR(0x4f8f33);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f8f34:{NFSU2_TR(0x4f8f34);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f8f35:{NFSU2_TR(0x4f8f35);
__builtin_memmove((R+4),(R+0),4);
}
B4f8f37:{NFSU2_TR(0x4f8f37);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f8f3cull));
TAIL_STATIC(0x4f6420u,4f6);
}
B4f8f3c:L4f8f3c:{c.instructions+=1;NFSU2_TR(0x4f8f3c);
{goto L4f8f40;}
}
B4f8f3e:L4f8f3e:{c.instructions+=1;NFSU2_TR(0x4f8f3e);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f8f40:L4f8f40:{c.instructions+=4;NFSU2_TR(0x4f8f40);
u8 U[4];
w4(U+0,u32(0x48ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f8f42:{NFSU2_TR(0x4f8f42);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4f8f4a:{NFSU2_TR(0x4f8f4a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f8f4d:{NFSU2_TR(0x4f8f4d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f8f52ull));
TAIL_STATIC(0x575620u,575);
}
B4f8f52:L4f8f52:{c.instructions+=5;NFSU2_TR(0x4f8f52);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4f8f55:{NFSU2_TR(0x4f8f55);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f8f59:{NFSU2_TR(0x4f8f59);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f8f5b:{NFSU2_TR(0x4f8f5b);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0xcull));
s4(u32(r4(U+0)),r4(U+4));
}
B4f8f63:{NFSU2_TR(0x4f8f63);
if(r1(R+518)){{goto L4f8f70;}}
}
B4f8f65:L4f8f65:{c.instructions+=4;NFSU2_TR(0x4f8f65);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f8f66:{NFSU2_TR(0x4f8f66);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f8f67:{NFSU2_TR(0x4f8f67);
__builtin_memmove((R+4),(R+0),4);
}
B4f8f69:{NFSU2_TR(0x4f8f69);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f8f6eull));
TAIL_STATIC(0x4f6030u,4f6);
}
B4f8f6e:L4f8f6e:{c.instructions+=1;NFSU2_TR(0x4f8f6e);
{goto L4f8f72;}
}
B4f8f70:L4f8f70:{c.instructions+=1;NFSU2_TR(0x4f8f70);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f8f72:L4f8f72:{c.instructions+=4;NFSU2_TR(0x4f8f72);
u8 U[4];
w4(U+0,u32(0x80ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f8f77:{NFSU2_TR(0x4f8f77);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4f8f7f:{NFSU2_TR(0x4f8f7f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f8f82:{NFSU2_TR(0x4f8f82);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f8f87ull));
TAIL_STATIC(0x575620u,575);
}
B4f8f87:L4f8f87:{c.instructions+=5;NFSU2_TR(0x4f8f87);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4f8f8a:{NFSU2_TR(0x4f8f8a);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f8f8e:{NFSU2_TR(0x4f8f8e);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f8f90:{NFSU2_TR(0x4f8f90);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0xdull));
s4(u32(r4(U+0)),r4(U+4));
}
B4f8f98:{NFSU2_TR(0x4f8f98);
if(r1(R+518)){{goto L4f8fa5;}}
}
B4f8f9a:L4f8f9a:{c.instructions+=4;NFSU2_TR(0x4f8f9a);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f8f9b:{NFSU2_TR(0x4f8f9b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f8f9c:{NFSU2_TR(0x4f8f9c);
__builtin_memmove((R+4),(R+0),4);
}
B4f8f9e:{NFSU2_TR(0x4f8f9e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f8fa3ull));
TAIL_STATIC(0x4f7ad0u,4f7);
}
B4f8fa3:L4f8fa3:{c.instructions+=1;NFSU2_TR(0x4f8fa3);
{goto L4f8fa7;}
}
B4f8fa5:L4f8fa5:{c.instructions+=1;NFSU2_TR(0x4f8fa5);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f8fa7:L4f8fa7:{c.instructions+=4;NFSU2_TR(0x4f8fa7);
u8 U[4];
w4(U+0,u32(0x28ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f8fa9:{NFSU2_TR(0x4f8fa9);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4f8fb1:{NFSU2_TR(0x4f8fb1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f8fb4:{NFSU2_TR(0x4f8fb4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f8fb9ull));
TAIL_STATIC(0x575620u,575);
}
B4f8fb9:L4f8fb9:{c.instructions+=5;NFSU2_TR(0x4f8fb9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4f8fbc:{NFSU2_TR(0x4f8fbc);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f8fc0:{NFSU2_TR(0x4f8fc0);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f8fc2:{NFSU2_TR(0x4f8fc2);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0xeull));
s4(u32(r4(U+0)),r4(U+4));
}
B4f8fca:{NFSU2_TR(0x4f8fca);
if(r1(R+518)){{goto L4f8fd7;}}
}
B4f8fcc:L4f8fcc:{c.instructions+=4;NFSU2_TR(0x4f8fcc);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f8fcd:{NFSU2_TR(0x4f8fcd);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f8fce:{NFSU2_TR(0x4f8fce);
__builtin_memmove((R+4),(R+0),4);
}
B4f8fd0:{NFSU2_TR(0x4f8fd0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f8fd5ull));
TAIL_STATIC(0x4f7340u,4f7);
}
B4f8fd5:L4f8fd5:{c.instructions+=1;NFSU2_TR(0x4f8fd5);
{goto L4f8fd9;}
}
B4f8fd7:L4f8fd7:{c.instructions+=1;NFSU2_TR(0x4f8fd7);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4f8fd9:L4f8fd9:{c.instructions+=4;NFSU2_TR(0x4f8fd9);
u8 U[4];
w4(U+0,u32(0x100ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4f8fde:{NFSU2_TR(0x4f8fde);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4f8fe6:{NFSU2_TR(0x4f8fe6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f8fe9:{NFSU2_TR(0x4f8fe9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4f8feeull));
TAIL_STATIC(0x575620u,575);
}
B4f8fee:L4f8fee:{c.instructions+=5;NFSU2_TR(0x4f8fee);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4f8ff1:{NFSU2_TR(0x4f8ff1);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4f8ff5:{NFSU2_TR(0x4f8ff5);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4f8ff7:{NFSU2_TR(0x4f8ff7);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0xfull));
s4(u32(r4(U+0)),r4(U+4));
}
B4f8fff:{NFSU2_TR(0x4f8fff);
if(r1(R+518)){TAIL_STATIC(0x4f900cu,4f9);}
TAIL_STATIC(0x4f9001u,4f9);
}
XIT:NFSU2_TR_EXIT(0x4f8,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
