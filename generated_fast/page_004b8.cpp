#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_495(u8* __restrict R,Cpu& c);
u32 body_49c(u8* __restrict R,Cpu& c);
u32 body_49d(u8* __restrict R,Cpu& c);
u32 body_4b6(u8* __restrict R,Cpu& c);
u32 body_4b7(u8* __restrict R,Cpu& c);
u32 body_4b9(u8* __restrict R,Cpu& c);
u32 body_4ff(u8* __restrict R,Cpu& c);
u32 body_505(u8* __restrict R,Cpu& c);
u32 body_50c(u8* __restrict R,Cpu& c);
u32 body_510(u8* __restrict R,Cpu& c);
u32 body_511(u8* __restrict R,Cpu& c);
u32 body_51d(u8* __restrict R,Cpu& c);
u32 body_51e(u8* __restrict R,Cpu& c);
u32 body_525(u8* __restrict R,Cpu& c);
u32 body_52b(u8* __restrict R,Cpu& c);
u32 body_52c(u8* __restrict R,Cpu& c);
u32 body_537(u8* __restrict R,Cpu& c);
u32 body_539(u8* __restrict R,Cpu& c);
u32 body_540(u8* __restrict R,Cpu& c);
u32 body_54e(u8* __restrict R,Cpu& c);
u32 body_54f(u8* __restrict R,Cpu& c);
u32 body_551(u8* __restrict R,Cpu& c);
u32 body_555(u8* __restrict R,Cpu& c);
u32 body_558(u8* __restrict R,Cpu& c);
u32 body_570(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_583(u8* __restrict R,Cpu& c);
u32 body_588(u8* __restrict R,Cpu& c);
u32 body_5b8(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x4b8,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x4b8,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_4b8(u8* __restrict R,Cpu& c);
u32 page_4b8(Cpu& c){return body_4b8(c.regs.data(),c);}
__attribute__((noinline)) u32 body_4b8(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x4b8001:goto L4b8001;
case 0x4b8003:c.instructions+=6;goto B4b8003;
case 0x4b8004:c.instructions+=5;goto B4b8004;
case 0x4b8006:c.instructions+=4;goto B4b8006;
case 0x4b8007:c.instructions+=3;goto B4b8007;
case 0x4b8009:c.instructions+=2;goto B4b8009;
case 0x4b800d:c.instructions+=1;goto B4b800d;
case 0x4b8012:goto L4b8012;
case 0x4b8014:c.instructions+=1;goto B4b8014;
case 0x4b8019:goto L4b8019;
case 0x4b801b:c.instructions+=5;goto B4b801b;
case 0x4b801e:c.instructions+=4;goto B4b801e;
case 0x4b8022:c.instructions+=3;goto B4b8022;
case 0x4b8024:c.instructions+=2;goto B4b8024;
case 0x4b802c:c.instructions+=1;goto B4b802c;
case 0x4b802e:goto L4b802e;
case 0x4b8034:c.instructions+=7;goto B4b8034;
case 0x4b8036:c.instructions+=6;goto B4b8036;
case 0x4b803c:c.instructions+=5;goto B4b803c;
case 0x4b803d:c.instructions+=4;goto B4b803d;
case 0x4b8043:c.instructions+=3;goto B4b8043;
case 0x4b8044:c.instructions+=2;goto B4b8044;
case 0x4b8046:c.instructions+=1;goto B4b8046;
case 0x4b804b:goto L4b804b;
case 0x4b8051:c.instructions+=2;goto B4b8051;
case 0x4b8054:c.instructions+=1;goto B4b8054;
case 0x4b8056:goto L4b8056;
case 0x4b8058:goto L4b8058;
case 0x4b8059:c.instructions+=3;goto B4b8059;
case 0x4b805b:c.instructions+=2;goto B4b805b;
case 0x4b805f:c.instructions+=1;goto B4b805f;
case 0x4b8064:goto L4b8064;
case 0x4b8066:c.instructions+=2;goto B4b8066;
case 0x4b806c:c.instructions+=1;goto B4b806c;
case 0x4b8071:goto L4b8071;
case 0x4b8073:c.instructions+=5;goto B4b8073;
case 0x4b8076:c.instructions+=4;goto B4b8076;
case 0x4b807a:c.instructions+=3;goto B4b807a;
case 0x4b807c:c.instructions+=2;goto B4b807c;
case 0x4b8084:c.instructions+=1;goto B4b8084;
case 0x4b8086:goto L4b8086;
case 0x4b808c:c.instructions+=1;goto B4b808c;
case 0x4b8091:goto L4b8091;
case 0x4b8095:c.instructions+=12;goto B4b8095;
case 0x4b8099:c.instructions+=11;goto B4b8099;
case 0x4b809a:c.instructions+=10;goto B4b809a;
case 0x4b80a0:c.instructions+=9;goto B4b80a0;
case 0x4b80a1:c.instructions+=8;goto B4b80a1;
case 0x4b80a7:c.instructions+=7;goto B4b80a7;
case 0x4b80a8:c.instructions+=6;goto B4b80a8;
case 0x4b80ae:c.instructions+=5;goto B4b80ae;
case 0x4b80af:c.instructions+=4;goto B4b80af;
case 0x4b80b5:c.instructions+=3;goto B4b80b5;
case 0x4b80b6:c.instructions+=2;goto B4b80b6;
case 0x4b80b8:c.instructions+=1;goto B4b80b8;
case 0x4b80bd:goto L4b80bd;
case 0x4b80c3:c.instructions+=2;goto B4b80c3;
case 0x4b80c6:c.instructions+=1;goto B4b80c6;
case 0x4b80c8:goto L4b80c8;
case 0x4b80ca:goto L4b80ca;
case 0x4b80cc:c.instructions+=4;goto B4b80cc;
case 0x4b80cd:c.instructions+=3;goto B4b80cd;
case 0x4b80cf:c.instructions+=2;goto B4b80cf;
case 0x4b80d3:c.instructions+=1;goto B4b80d3;
case 0x4b80d8:goto L4b80d8;
case 0x4b80da:c.instructions+=2;goto B4b80da;
case 0x4b80e0:c.instructions+=1;goto B4b80e0;
case 0x4b80e5:goto L4b80e5;
case 0x4b80e7:c.instructions+=6;goto B4b80e7;
case 0x4b80ea:c.instructions+=5;goto B4b80ea;
case 0x4b80ee:c.instructions+=4;goto B4b80ee;
case 0x4b80f0:c.instructions+=3;goto B4b80f0;
case 0x4b80f8:c.instructions+=2;goto B4b80f8;
case 0x4b80f9:c.instructions+=1;goto B4b80f9;
case 0x4b80fb:goto L4b80fb;
case 0x4b80fd:c.instructions+=10;goto B4b80fd;
case 0x4b8103:c.instructions+=9;goto B4b8103;
case 0x4b8104:c.instructions+=8;goto B4b8104;
case 0x4b810a:c.instructions+=7;goto B4b810a;
case 0x4b810b:c.instructions+=6;goto B4b810b;
case 0x4b8111:c.instructions+=5;goto B4b8111;
case 0x4b8112:c.instructions+=4;goto B4b8112;
case 0x4b8118:c.instructions+=3;goto B4b8118;
case 0x4b8119:c.instructions+=2;goto B4b8119;
case 0x4b811b:c.instructions+=1;goto B4b811b;
case 0x4b8120:goto L4b8120;
case 0x4b8126:c.instructions+=1;goto B4b8126;
case 0x4b8128:goto L4b8128;
case 0x4b812a:goto L4b812a;
case 0x4b812c:c.instructions+=4;goto B4b812c;
case 0x4b812d:c.instructions+=3;goto B4b812d;
case 0x4b812f:c.instructions+=2;goto B4b812f;
case 0x4b8133:c.instructions+=1;goto B4b8133;
case 0x4b8138:goto L4b8138;
case 0x4b813b:c.instructions+=3;goto B4b813b;
case 0x4b8140:c.instructions+=2;goto B4b8140;
case 0x4b8141:c.instructions+=1;goto B4b8141;
case 0x4b8146:goto L4b8146;
case 0x4b8147:c.instructions+=1;goto B4b8147;
case 0x4b814c:goto L4b814c;
case 0x4b8151:c.instructions+=4;goto B4b8151;
case 0x4b8154:c.instructions+=3;goto B4b8154;
case 0x4b8157:c.instructions+=2;goto B4b8157;
case 0x4b8158:c.instructions+=1;goto B4b8158;
case 0x4b815a:goto L4b815a;
case 0x4b815d:c.instructions+=4;goto B4b815d;
case 0x4b8162:c.instructions+=3;goto B4b8162;
case 0x4b8167:c.instructions+=2;goto B4b8167;
case 0x4b8168:c.instructions+=1;goto B4b8168;
case 0x4b816d:goto L4b816d;
case 0x4b8170:c.instructions+=2;goto B4b8170;
case 0x4b8171:c.instructions+=1;goto B4b8171;
case 0x4b8176:goto L4b8176;
case 0x4b8179:goto L4b8179;
case 0x4b817d:c.instructions+=7;goto B4b817d;
case 0x4b8184:c.instructions+=6;goto B4b8184;
case 0x4b818b:c.instructions+=5;goto B4b818b;
case 0x4b818c:c.instructions+=4;goto B4b818c;
case 0x4b818d:c.instructions+=3;goto B4b818d;
case 0x4b8194:c.instructions+=2;goto B4b8194;
case 0x4b8197:c.instructions+=1;goto B4b8197;
case 0x4b81a0:goto L4b81a0;
case 0x4b81a2:c.instructions+=10;goto B4b81a2;
case 0x4b81a7:c.instructions+=9;goto B4b81a7;
case 0x4b81ad:c.instructions+=8;goto B4b81ad;
case 0x4b81ae:c.instructions+=7;goto B4b81ae;
case 0x4b81b5:c.instructions+=6;goto B4b81b5;
case 0x4b81b6:c.instructions+=5;goto B4b81b6;
case 0x4b81b7:c.instructions+=4;goto B4b81b7;
case 0x4b81b8:c.instructions+=3;goto B4b81b8;
case 0x4b81ba:c.instructions+=2;goto B4b81ba;
case 0x4b81bc:c.instructions+=1;goto B4b81bc;
case 0x4b81c1:goto L4b81c1;
case 0x4b81c3:c.instructions+=5;goto B4b81c3;
case 0x4b81c6:c.instructions+=4;goto B4b81c6;
case 0x4b81ca:c.instructions+=3;goto B4b81ca;
case 0x4b81cc:c.instructions+=2;goto B4b81cc;
case 0x4b81d4:c.instructions+=1;goto B4b81d4;
case 0x4b81d6:goto L4b81d6;
case 0x4b81d8:c.instructions+=10;goto B4b81d8;
case 0x4b81de:c.instructions+=9;goto B4b81de;
case 0x4b81df:c.instructions+=8;goto B4b81df;
case 0x4b81e5:c.instructions+=7;goto B4b81e5;
case 0x4b81e6:c.instructions+=6;goto B4b81e6;
case 0x4b81ec:c.instructions+=5;goto B4b81ec;
case 0x4b81ed:c.instructions+=4;goto B4b81ed;
case 0x4b81f3:c.instructions+=3;goto B4b81f3;
case 0x4b81f4:c.instructions+=2;goto B4b81f4;
case 0x4b81f6:c.instructions+=1;goto B4b81f6;
case 0x4b81fb:goto L4b81fb;
case 0x4b8201:c.instructions+=1;goto B4b8201;
case 0x4b8203:goto L4b8203;
case 0x4b8205:goto L4b8205;
case 0x4b8207:c.instructions+=4;goto B4b8207;
case 0x4b8208:c.instructions+=3;goto B4b8208;
case 0x4b820a:c.instructions+=2;goto B4b820a;
case 0x4b8212:c.instructions+=1;goto B4b8212;
case 0x4b8217:goto L4b8217;
case 0x4b8219:c.instructions+=1;goto B4b8219;
case 0x4b821e:goto L4b821e;
case 0x4b8220:c.instructions+=5;goto B4b8220;
case 0x4b8223:c.instructions+=4;goto B4b8223;
case 0x4b8227:c.instructions+=3;goto B4b8227;
case 0x4b8229:c.instructions+=2;goto B4b8229;
case 0x4b8231:c.instructions+=1;goto B4b8231;
case 0x4b8233:goto L4b8233;
case 0x4b8235:c.instructions+=10;goto B4b8235;
case 0x4b823b:c.instructions+=9;goto B4b823b;
case 0x4b823c:c.instructions+=8;goto B4b823c;
case 0x4b8242:c.instructions+=7;goto B4b8242;
case 0x4b8243:c.instructions+=6;goto B4b8243;
case 0x4b8249:c.instructions+=5;goto B4b8249;
case 0x4b824a:c.instructions+=4;goto B4b824a;
case 0x4b8250:c.instructions+=3;goto B4b8250;
case 0x4b8251:c.instructions+=2;goto B4b8251;
case 0x4b8253:c.instructions+=1;goto B4b8253;
case 0x4b8258:goto L4b8258;
case 0x4b825e:c.instructions+=1;goto B4b825e;
case 0x4b8260:goto L4b8260;
case 0x4b8262:goto L4b8262;
case 0x4b8264:c.instructions+=4;goto B4b8264;
case 0x4b8265:c.instructions+=3;goto B4b8265;
case 0x4b8267:c.instructions+=2;goto B4b8267;
case 0x4b826f:c.instructions+=1;goto B4b826f;
case 0x4b8274:goto L4b8274;
case 0x4b827e:c.instructions+=2;goto B4b827e;
case 0x4b8281:c.instructions+=1;goto B4b8281;
case 0x4b8283:goto L4b8283;
case 0x4b8288:c.instructions+=1;goto B4b8288;
case 0x4b828a:goto L4b828a;
case 0x4b828f:goto L4b828f;
case 0x4b8294:c.instructions+=2;goto B4b8294;
case 0x4b8295:c.instructions+=1;goto B4b8295;
case 0x4b829a:goto L4b829a;
case 0x4b829d:c.instructions+=2;goto B4b829d;
case 0x4b829e:c.instructions+=1;goto B4b829e;
case 0x4b82a3:goto L4b82a3;
case 0x4b82a7:c.instructions+=7;goto B4b82a7;
case 0x4b82aa:c.instructions+=6;goto B4b82aa;
case 0x4b82b1:c.instructions+=5;goto B4b82b1;
case 0x4b82b2:c.instructions+=4;goto B4b82b2;
case 0x4b82b3:c.instructions+=3;goto B4b82b3;
case 0x4b82ba:c.instructions+=2;goto B4b82ba;
case 0x4b82bd:c.instructions+=1;goto B4b82bd;
case 0x4b82c0:goto L4b82c0;
case 0x4b82c3:c.instructions+=3;goto B4b82c3;
case 0x4b82c8:c.instructions+=2;goto B4b82c8;
case 0x4b82c9:c.instructions+=1;goto B4b82c9;
case 0x4b82ce:goto L4b82ce;
case 0x4b82d1:c.instructions+=1;goto B4b82d1;
case 0x4b82e0:goto L4b82e0;
case 0x4b82e3:c.instructions+=3;goto B4b82e3;
case 0x4b82e8:c.instructions+=2;goto B4b82e8;
case 0x4b82e9:c.instructions+=1;goto B4b82e9;
case 0x4b82ee:goto L4b82ee;
case 0x4b82f1:c.instructions+=1;goto B4b82f1;
case 0x4b8300:goto L4b8300;
case 0x4b8308:c.instructions+=1;goto B4b8308;
case 0x4b830a:goto L4b830a;
case 0x4b830e:c.instructions+=6;goto B4b830e;
case 0x4b8310:c.instructions+=5;goto B4b8310;
case 0x4b8315:c.instructions+=4;goto B4b8315;
case 0x4b831a:c.instructions+=3;goto B4b831a;
case 0x4b831b:c.instructions+=2;goto B4b831b;
case 0x4b8325:c.instructions+=1;goto B4b8325;
case 0x4b832a:goto L4b832a;
case 0x4b832d:goto L4b832d;
case 0x4b8330:goto L4b8330;
case 0x4b8333:c.instructions+=3;goto B4b8333;
case 0x4b8338:c.instructions+=2;goto B4b8338;
case 0x4b8339:c.instructions+=1;goto B4b8339;
case 0x4b833e:goto L4b833e;
case 0x4b8341:c.instructions+=1;goto B4b8341;
case 0x4b8350:goto L4b8350;
case 0x4b8352:c.instructions+=10;goto B4b8352;
case 0x4b8357:c.instructions+=9;goto B4b8357;
case 0x4b835d:c.instructions+=8;goto B4b835d;
case 0x4b835e:c.instructions+=7;goto B4b835e;
case 0x4b8365:c.instructions+=6;goto B4b8365;
case 0x4b8366:c.instructions+=5;goto B4b8366;
case 0x4b8367:c.instructions+=4;goto B4b8367;
case 0x4b8368:c.instructions+=3;goto B4b8368;
case 0x4b836a:c.instructions+=2;goto B4b836a;
case 0x4b836c:c.instructions+=1;goto B4b836c;
case 0x4b8371:goto L4b8371;
case 0x4b8373:c.instructions+=5;goto B4b8373;
case 0x4b8376:c.instructions+=4;goto B4b8376;
case 0x4b837a:c.instructions+=3;goto B4b837a;
case 0x4b837c:c.instructions+=2;goto B4b837c;
case 0x4b8384:c.instructions+=1;goto B4b8384;
case 0x4b8386:goto L4b8386;
case 0x4b8388:c.instructions+=6;goto B4b8388;
case 0x4b838e:c.instructions+=5;goto B4b838e;
case 0x4b838f:c.instructions+=4;goto B4b838f;
case 0x4b8395:c.instructions+=3;goto B4b8395;
case 0x4b8396:c.instructions+=2;goto B4b8396;
case 0x4b8398:c.instructions+=1;goto B4b8398;
case 0x4b839d:goto L4b839d;
case 0x4b83a3:c.instructions+=1;goto B4b83a3;
case 0x4b83a5:goto L4b83a5;
case 0x4b83a7:goto L4b83a7;
case 0x4b83a8:c.instructions+=3;goto B4b83a8;
case 0x4b83aa:c.instructions+=2;goto B4b83aa;
case 0x4b83b2:c.instructions+=1;goto B4b83b2;
case 0x4b83b7:goto L4b83b7;
case 0x4b83b9:c.instructions+=1;goto B4b83b9;
case 0x4b83be:goto L4b83be;
case 0x4b83c0:c.instructions+=5;goto B4b83c0;
case 0x4b83c3:c.instructions+=4;goto B4b83c3;
case 0x4b83c7:c.instructions+=3;goto B4b83c7;
case 0x4b83c9:c.instructions+=2;goto B4b83c9;
case 0x4b83d1:c.instructions+=1;goto B4b83d1;
case 0x4b83d3:goto L4b83d3;
case 0x4b83d5:c.instructions+=6;goto B4b83d5;
case 0x4b83db:c.instructions+=5;goto B4b83db;
case 0x4b83dc:c.instructions+=4;goto B4b83dc;
case 0x4b83e2:c.instructions+=3;goto B4b83e2;
case 0x4b83e3:c.instructions+=2;goto B4b83e3;
case 0x4b83e5:c.instructions+=1;goto B4b83e5;
case 0x4b83ea:goto L4b83ea;
case 0x4b83f0:c.instructions+=1;goto B4b83f0;
case 0x4b83f2:goto L4b83f2;
case 0x4b83f4:goto L4b83f4;
case 0x4b83f5:c.instructions+=3;goto B4b83f5;
case 0x4b83f7:c.instructions+=2;goto B4b83f7;
case 0x4b83ff:c.instructions+=1;goto B4b83ff;
case 0x4b8404:goto L4b8404;
case 0x4b8406:c.instructions+=1;goto B4b8406;
case 0x4b840b:goto L4b840b;
case 0x4b840d:c.instructions+=5;goto B4b840d;
case 0x4b8410:c.instructions+=4;goto B4b8410;
case 0x4b8414:c.instructions+=3;goto B4b8414;
case 0x4b8416:c.instructions+=2;goto B4b8416;
case 0x4b841e:c.instructions+=1;goto B4b841e;
case 0x4b8420:goto L4b8420;
case 0x4b8422:c.instructions+=6;goto B4b8422;
case 0x4b8428:c.instructions+=5;goto B4b8428;
case 0x4b8429:c.instructions+=4;goto B4b8429;
case 0x4b842f:c.instructions+=3;goto B4b842f;
case 0x4b8430:c.instructions+=2;goto B4b8430;
case 0x4b8432:c.instructions+=1;goto B4b8432;
case 0x4b8437:goto L4b8437;
case 0x4b843d:c.instructions+=1;goto B4b843d;
case 0x4b843f:goto L4b843f;
case 0x4b8441:goto L4b8441;
case 0x4b8442:c.instructions+=3;goto B4b8442;
case 0x4b8444:c.instructions+=2;goto B4b8444;
case 0x4b844c:c.instructions+=1;goto B4b844c;
case 0x4b8451:goto L4b8451;
case 0x4b8455:c.instructions+=5;goto B4b8455;
case 0x4b8456:c.instructions+=4;goto B4b8456;
case 0x4b8457:c.instructions+=3;goto B4b8457;
case 0x4b845e:c.instructions+=2;goto B4b845e;
case 0x4b8461:c.instructions+=1;goto B4b8461;
case 0x4b8470:goto L4b8470;
case 0x4b8471:c.instructions+=6;goto B4b8471;
case 0x4b8472:c.instructions+=5;goto B4b8472;
case 0x4b8474:c.instructions+=4;goto B4b8474;
case 0x4b8477:c.instructions+=3;goto B4b8477;
case 0x4b847c:c.instructions+=2;goto B4b847c;
case 0x4b847d:c.instructions+=1;goto B4b847d;
case 0x4b8482:goto L4b8482;
case 0x4b8483:c.instructions+=1;goto B4b8483;
case 0x4b8488:goto L4b8488;
case 0x4b848b:c.instructions+=3;goto B4b848b;
case 0x4b8490:c.instructions+=2;goto B4b8490;
case 0x4b8491:c.instructions+=1;goto B4b8491;
case 0x4b8496:goto L4b8496;
case 0x4b8497:c.instructions+=1;goto B4b8497;
case 0x4b849c:goto L4b849c;
case 0x4b849f:c.instructions+=3;goto B4b849f;
case 0x4b84a4:c.instructions+=2;goto B4b84a4;
case 0x4b84a5:c.instructions+=1;goto B4b84a5;
case 0x4b84aa:goto L4b84aa;
case 0x4b84ab:c.instructions+=1;goto B4b84ab;
case 0x4b84b0:goto L4b84b0;
case 0x4b84b3:c.instructions+=3;goto B4b84b3;
case 0x4b84b8:c.instructions+=2;goto B4b84b8;
case 0x4b84b9:c.instructions+=1;goto B4b84b9;
case 0x4b84be:goto L4b84be;
case 0x4b84bf:c.instructions+=1;goto B4b84bf;
case 0x4b84c4:goto L4b84c4;
case 0x4b84c7:c.instructions+=3;goto B4b84c7;
case 0x4b84cc:c.instructions+=2;goto B4b84cc;
case 0x4b84d3:c.instructions+=1;goto B4b84d3;
case 0x4b84d8:goto L4b84d8;
case 0x4b84d9:c.instructions+=2;goto B4b84d9;
case 0x4b84da:c.instructions+=1;goto B4b84da;
case 0x4b84df:goto L4b84df;
case 0x4b84e0:c.instructions+=1;goto B4b84e0;
case 0x4b84e5:goto L4b84e5;
case 0x4b84e8:c.instructions+=3;goto B4b84e8;
case 0x4b84eb:c.instructions+=2;goto B4b84eb;
case 0x4b84f0:c.instructions+=1;goto B4b84f0;
case 0x4b84f5:goto L4b84f5;
case 0x4b84f6:c.instructions+=2;goto B4b84f6;
case 0x4b84f7:c.instructions+=1;goto B4b84f7;
case 0x4b84fc:goto L4b84fc;
case 0x4b84fd:c.instructions+=1;goto B4b84fd;
case 0x4b8502:goto L4b8502;
case 0x4b8505:c.instructions+=2;goto B4b8505;
case 0x4b850a:c.instructions+=1;goto B4b850a;
case 0x4b850f:goto L4b850f;
case 0x4b8510:c.instructions+=2;goto B4b8510;
case 0x4b8511:c.instructions+=1;goto B4b8511;
case 0x4b8516:goto L4b8516;
case 0x4b8517:c.instructions+=1;goto B4b8517;
case 0x4b851c:goto L4b851c;
case 0x4b851f:c.instructions+=3;goto B4b851f;
case 0x4b8524:c.instructions+=2;goto B4b8524;
case 0x4b8525:c.instructions+=1;goto B4b8525;
case 0x4b852a:goto L4b852a;
case 0x4b852b:c.instructions+=1;goto B4b852b;
case 0x4b8530:goto L4b8530;
case 0x4b8533:c.instructions+=3;goto B4b8533;
case 0x4b8538:c.instructions+=2;goto B4b8538;
case 0x4b8539:c.instructions+=1;goto B4b8539;
case 0x4b853e:goto L4b853e;
case 0x4b853f:c.instructions+=1;goto B4b853f;
case 0x4b8544:goto L4b8544;
case 0x4b8549:c.instructions+=3;goto B4b8549;
case 0x4b854c:c.instructions+=2;goto B4b854c;
case 0x4b854f:c.instructions+=1;goto B4b854f;
case 0x4b8555:goto L4b8555;
case 0x4b855c:goto L4b855c;
case 0x4b855e:c.instructions+=1;goto B4b855e;
case 0x4b8563:goto L4b8563;
case 0x4b8565:c.instructions+=2;goto B4b8565;
case 0x4b8567:c.instructions+=1;goto B4b8567;
case 0x4b856c:goto L4b856c;
case 0x4b856d:c.instructions+=2;goto B4b856d;
case 0x4b856e:c.instructions+=1;goto B4b856e;
case 0x4b856f:goto L4b856f;
case 0x4b8571:c.instructions+=1;goto B4b8571;
case 0x4b8576:goto L4b8576;
case 0x4b8578:c.instructions+=2;goto B4b8578;
case 0x4b857a:c.instructions+=1;goto B4b857a;
case 0x4b857f:goto L4b857f;
case 0x4b8580:c.instructions+=2;goto B4b8580;
case 0x4b8581:c.instructions+=1;goto B4b8581;
case 0x4b8582:goto L4b8582;
case 0x4b8584:c.instructions+=1;goto B4b8584;
case 0x4b8589:goto L4b8589;
case 0x4b858b:c.instructions+=2;goto B4b858b;
case 0x4b858d:c.instructions+=1;goto B4b858d;
case 0x4b8592:goto L4b8592;
case 0x4b8593:c.instructions+=2;goto B4b8593;
case 0x4b8594:c.instructions+=1;goto B4b8594;
case 0x4b8595:goto L4b8595;
case 0x4b8597:c.instructions+=1;goto B4b8597;
case 0x4b859c:goto L4b859c;
case 0x4b859f:c.instructions+=3;goto B4b859f;
case 0x4b85a4:c.instructions+=2;goto B4b85a4;
case 0x4b85a5:c.instructions+=1;goto B4b85a5;
case 0x4b85aa:goto L4b85aa;
case 0x4b85ab:c.instructions+=1;goto B4b85ab;
case 0x4b85b0:goto L4b85b0;
case 0x4b85b3:c.instructions+=3;goto B4b85b3;
case 0x4b85b8:c.instructions+=2;goto B4b85b8;
case 0x4b85b9:c.instructions+=1;goto B4b85b9;
case 0x4b85be:goto L4b85be;
case 0x4b85bf:c.instructions+=1;goto B4b85bf;
case 0x4b85c4:goto L4b85c4;
case 0x4b85c7:c.instructions+=3;goto B4b85c7;
case 0x4b85c9:c.instructions+=2;goto B4b85c9;
case 0x4b85cb:c.instructions+=1;goto B4b85cb;
case 0x4b85d0:goto L4b85d0;
case 0x4b85d1:c.instructions+=2;goto B4b85d1;
case 0x4b85d2:c.instructions+=1;goto B4b85d2;
case 0x4b85d3:goto L4b85d3;
case 0x4b85d5:c.instructions+=1;goto B4b85d5;
case 0x4b85da:goto L4b85da;
case 0x4b85dc:c.instructions+=2;goto B4b85dc;
case 0x4b85de:c.instructions+=1;goto B4b85de;
case 0x4b85e3:goto L4b85e3;
case 0x4b85e4:c.instructions+=2;goto B4b85e4;
case 0x4b85e5:c.instructions+=1;goto B4b85e5;
case 0x4b85e6:goto L4b85e6;
case 0x4b85e8:c.instructions+=1;goto B4b85e8;
case 0x4b85ed:goto L4b85ed;
case 0x4b85ef:c.instructions+=2;goto B4b85ef;
case 0x4b85f1:c.instructions+=1;goto B4b85f1;
case 0x4b85f6:goto L4b85f6;
case 0x4b85f7:c.instructions+=2;goto B4b85f7;
case 0x4b85f8:c.instructions+=1;goto B4b85f8;
case 0x4b8620:goto L4b8620;
case 0x4b8622:c.instructions+=11;goto B4b8622;
case 0x4b8627:c.instructions+=10;goto B4b8627;
case 0x4b862d:c.instructions+=9;goto B4b862d;
case 0x4b862e:c.instructions+=8;goto B4b862e;
case 0x4b8635:c.instructions+=7;goto B4b8635;
case 0x4b8636:c.instructions+=6;goto B4b8636;
case 0x4b863a:c.instructions+=5;goto B4b863a;
case 0x4b863b:c.instructions+=4;goto B4b863b;
case 0x4b863d:c.instructions+=3;goto B4b863d;
case 0x4b863e:c.instructions+=2;goto B4b863e;
case 0x4b8642:c.instructions+=1;goto B4b8642;
case 0x4b8647:goto L4b8647;
case 0x4b864c:c.instructions+=3;goto B4b864c;
case 0x4b8654:c.instructions+=2;goto B4b8654;
case 0x4b865a:c.instructions+=1;goto B4b865a;
case 0x4b865f:goto L4b865f;
case 0x4b8662:c.instructions+=2;goto B4b8662;
case 0x4b8664:c.instructions+=1;goto B4b8664;
case 0x4b8666:goto L4b8666;
case 0x4b866b:c.instructions+=1;goto B4b866b;
case 0x4b8670:goto L4b8670;
case 0x4b8673:goto L4b8673;
case 0x4b8679:c.instructions+=5;goto B4b8679;
case 0x4b867c:c.instructions+=4;goto B4b867c;
case 0x4b867d:c.instructions+=3;goto B4b867d;
case 0x4b8682:c.instructions+=2;goto B4b8682;
case 0x4b8683:c.instructions+=1;goto B4b8683;
case 0x4b8688:goto L4b8688;
case 0x4b868b:c.instructions+=2;goto B4b868b;
case 0x4b868c:c.instructions+=1;goto B4b868c;
case 0x4b8691:goto L4b8691;
case 0x4b8695:c.instructions+=6;goto B4b8695;
case 0x4b8698:c.instructions+=5;goto B4b8698;
case 0x4b869a:c.instructions+=4;goto B4b869a;
case 0x4b869b:c.instructions+=3;goto B4b869b;
case 0x4b86a2:c.instructions+=2;goto B4b86a2;
case 0x4b86a5:c.instructions+=1;goto B4b86a5;
case 0x4b86b0:goto L4b86b0;
case 0x4b86b2:c.instructions+=12;goto B4b86b2;
case 0x4b86b7:c.instructions+=11;goto B4b86b7;
case 0x4b86bd:c.instructions+=10;goto B4b86bd;
case 0x4b86be:c.instructions+=9;goto B4b86be;
case 0x4b86c5:c.instructions+=8;goto B4b86c5;
case 0x4b86c6:c.instructions+=7;goto B4b86c6;
case 0x4b86c7:c.instructions+=6;goto B4b86c7;
case 0x4b86c9:c.instructions+=5;goto B4b86c9;
case 0x4b86cd:c.instructions+=4;goto B4b86cd;
case 0x4b86d3:c.instructions+=3;goto B4b86d3;
case 0x4b86d8:c.instructions+=2;goto B4b86d8;
case 0x4b86e0:c.instructions+=1;goto B4b86e0;
case 0x4b86e5:goto L4b86e5;
case 0x4b86e8:c.instructions+=2;goto B4b86e8;
case 0x4b86ea:c.instructions+=1;goto B4b86ea;
case 0x4b86ec:goto L4b86ec;
case 0x4b86ee:c.instructions+=5;goto B4b86ee;
case 0x4b86f0:c.instructions+=4;goto B4b86f0;
case 0x4b86f2:c.instructions+=3;goto B4b86f2;
case 0x4b86f7:c.instructions+=2;goto B4b86f7;
case 0x4b86f9:c.instructions+=1;goto B4b86f9;
case 0x4b86fe:goto L4b86fe;
case 0x4b8701:goto L4b8701;
case 0x4b8703:c.instructions+=2;goto B4b8703;
case 0x4b870b:c.instructions+=1;goto B4b870b;
case 0x4b8710:goto L4b8710;
case 0x4b8714:c.instructions+=4;goto B4b8714;
case 0x4b8715:c.instructions+=3;goto B4b8715;
case 0x4b871c:c.instructions+=2;goto B4b871c;
case 0x4b871f:c.instructions+=1;goto B4b871f;
case 0x4b8720:goto L4b8720;
case 0x4b8722:c.instructions+=7;goto B4b8722;
case 0x4b8727:c.instructions+=6;goto B4b8727;
case 0x4b872d:c.instructions+=5;goto B4b872d;
case 0x4b872e:c.instructions+=4;goto B4b872e;
case 0x4b8735:c.instructions+=3;goto B4b8735;
case 0x4b8736:c.instructions+=2;goto B4b8736;
case 0x4b8738:c.instructions+=1;goto B4b8738;
case 0x4b873d:goto L4b873d;
case 0x4b8740:c.instructions+=4;goto B4b8740;
case 0x4b8744:c.instructions+=3;goto B4b8744;
case 0x4b8746:c.instructions+=2;goto B4b8746;
case 0x4b874e:c.instructions+=1;goto B4b874e;
case 0x4b8750:goto L4b8750;
case 0x4b8754:c.instructions+=3;goto B4b8754;
case 0x4b8755:c.instructions+=2;goto B4b8755;
case 0x4b8757:c.instructions+=1;goto B4b8757;
case 0x4b875c:goto L4b875c;
case 0x4b8760:c.instructions+=3;goto B4b8760;
case 0x4b8767:c.instructions+=2;goto B4b8767;
case 0x4b876a:c.instructions+=1;goto B4b876a;
case 0x4b876b:goto L4b876b;
case 0x4b876f:c.instructions+=4;goto B4b876f;
case 0x4b8771:c.instructions+=3;goto B4b8771;
case 0x4b8778:c.instructions+=2;goto B4b8778;
case 0x4b877b:c.instructions+=1;goto B4b877b;
case 0x4b8780:goto L4b8780;
case 0x4b8781:c.instructions+=2;goto B4b8781;
case 0x4b8783:c.instructions+=1;goto B4b8783;
case 0x4b8788:goto L4b8788;
case 0x4b878d:c.instructions+=1;goto B4b878d;
case 0x4b878f:goto L4b878f;
case 0x4b8790:c.instructions+=1;goto B4b8790;
case 0x4b8795:goto L4b8795;
case 0x4b8798:goto L4b8798;
case 0x4b879a:c.instructions+=2;goto B4b879a;
case 0x4b879b:c.instructions+=1;goto B4b879b;
case 0x4b87a0:goto L4b87a0;
case 0x4b87a4:c.instructions+=8;goto B4b87a4;
case 0x4b87a7:c.instructions+=7;goto B4b87a7;
case 0x4b87ac:c.instructions+=6;goto B4b87ac;
case 0x4b87ad:c.instructions+=5;goto B4b87ad;
case 0x4b87ae:c.instructions+=4;goto B4b87ae;
case 0x4b87af:c.instructions+=3;goto B4b87af;
case 0x4b87b0:c.instructions+=2;goto B4b87b0;
case 0x4b87b2:c.instructions+=1;goto B4b87b2;
case 0x4b87b8:goto L4b87b8;
case 0x4b87be:goto L4b87be;
case 0x4b87c3:c.instructions+=1;goto B4b87c3;
case 0x4b87c9:goto L4b87c9;
case 0x4b87ce:c.instructions+=1;goto B4b87ce;
case 0x4b87d0:goto L4b87d0;
case 0x4b87d5:c.instructions+=1;goto B4b87d5;
case 0x4b87db:goto L4b87db;
case 0x4b87de:c.instructions+=4;goto B4b87de;
case 0x4b87e0:c.instructions+=3;goto B4b87e0;
case 0x4b87e5:c.instructions+=2;goto B4b87e5;
case 0x4b87e6:c.instructions+=1;goto B4b87e6;
case 0x4b87eb:goto L4b87eb;
case 0x4b87ee:c.instructions+=6;goto B4b87ee;
case 0x4b87ef:c.instructions+=5;goto B4b87ef;
case 0x4b87f0:c.instructions+=4;goto B4b87f0;
case 0x4b87f1:c.instructions+=3;goto B4b87f1;
case 0x4b87f2:c.instructions+=2;goto B4b87f2;
case 0x4b87f5:c.instructions+=1;goto B4b87f5;
case 0x4b87f8:goto L4b87f8;
case 0x4b87fd:goto L4b87fd;
case 0x4b87fe:c.instructions+=1;goto B4b87fe;
case 0x4b8803:goto L4b8803;
case 0x4b8806:c.instructions+=3;goto B4b8806;
case 0x4b8808:c.instructions+=2;goto B4b8808;
case 0x4b880d:c.instructions+=1;goto B4b880d;
case 0x4b8812:goto L4b8812;
case 0x4b8814:c.instructions+=1;goto B4b8814;
case 0x4b8816:goto L4b8816;
case 0x4b881b:goto L4b881b;
case 0x4b881d:c.instructions+=1;goto B4b881d;
case 0x4b881f:goto L4b881f;
case 0x4b8824:c.instructions+=1;goto B4b8824;
case 0x4b8826:goto L4b8826;
case 0x4b882b:goto L4b882b;
case 0x4b882d:c.instructions+=1;goto B4b882d;
case 0x4b882f:goto L4b882f;
case 0x4b8834:c.instructions+=1;goto B4b8834;
case 0x4b8836:goto L4b8836;
case 0x4b883b:goto L4b883b;
case 0x4b883c:c.instructions+=6;goto B4b883c;
case 0x4b883d:c.instructions+=5;goto B4b883d;
case 0x4b8842:c.instructions+=4;goto B4b8842;
case 0x4b8846:c.instructions+=3;goto B4b8846;
case 0x4b8848:c.instructions+=2;goto B4b8848;
case 0x4b8849:c.instructions+=1;goto B4b8849;
case 0x4b884e:goto L4b884e;
case 0x4b8851:c.instructions+=5;goto B4b8851;
case 0x4b8855:c.instructions+=4;goto B4b8855;
case 0x4b8858:c.instructions+=3;goto B4b8858;
case 0x4b8859:c.instructions+=2;goto B4b8859;
case 0x4b885b:c.instructions+=1;goto B4b885b;
case 0x4b8860:goto L4b8860;
case 0x4b8862:c.instructions+=2;goto B4b8862;
case 0x4b8864:c.instructions+=1;goto B4b8864;
case 0x4b8869:goto L4b8869;
case 0x4b886c:c.instructions+=2;goto B4b886c;
case 0x4b8871:c.instructions+=1;goto B4b8871;
case 0x4b8876:goto L4b8876;
case 0x4b8877:c.instructions+=2;goto B4b8877;
case 0x4b8878:c.instructions+=1;goto B4b8878;
case 0x4b887d:goto L4b887d;
case 0x4b8880:c.instructions+=8;goto B4b8880;
case 0x4b8881:c.instructions+=7;goto B4b8881;
case 0x4b8884:c.instructions+=6;goto B4b8884;
case 0x4b8888:c.instructions+=5;goto B4b8888;
case 0x4b8889:c.instructions+=4;goto B4b8889;
case 0x4b888a:c.instructions+=3;goto B4b888a;
case 0x4b888b:c.instructions+=2;goto B4b888b;
case 0x4b888e:c.instructions+=1;goto B4b888e;
case 0x4b8891:goto L4b8891;
case 0x4b8895:c.instructions+=7;goto B4b8895;
case 0x4b8896:c.instructions+=6;goto B4b8896;
case 0x4b8899:c.instructions+=5;goto B4b8899;
case 0x4b889a:c.instructions+=4;goto B4b889a;
case 0x4b889b:c.instructions+=3;goto B4b889b;
case 0x4b889c:c.instructions+=2;goto B4b889c;
case 0x4b889f:c.instructions+=1;goto B4b889f;
case 0x4b88a2:goto L4b88a2;
case 0x4b88a7:c.instructions+=1;goto B4b88a7;
case 0x4b88ad:goto L4b88ad;
case 0x4b88b2:c.instructions+=1;goto B4b88b2;
case 0x4b88b8:goto L4b88b8;
case 0x4b88bb:c.instructions+=2;goto B4b88bb;
case 0x4b88bd:c.instructions+=1;goto B4b88bd;
case 0x4b88c3:goto L4b88c3;
case 0x4b88c6:c.instructions+=2;goto B4b88c6;
case 0x4b88c8:c.instructions+=1;goto B4b88c8;
case 0x4b88cd:goto L4b88cd;
case 0x4b88cf:c.instructions+=2;goto B4b88cf;
case 0x4b88d1:c.instructions+=1;goto B4b88d1;
case 0x4b88d3:goto L4b88d3;
case 0x4b88d5:c.instructions+=1;goto B4b88d5;
case 0x4b88da:goto L4b88da;
case 0x4b88dc:c.instructions+=2;goto B4b88dc;
case 0x4b88de:c.instructions+=1;goto B4b88de;
case 0x4b88e4:goto L4b88e4;
case 0x4b88e7:c.instructions+=2;goto B4b88e7;
case 0x4b88e8:c.instructions+=1;goto B4b88e8;
case 0x4b88ed:goto L4b88ed;
case 0x4b88f0:c.instructions+=5;goto B4b88f0;
case 0x4b88f2:c.instructions+=4;goto B4b88f2;
case 0x4b88f5:c.instructions+=3;goto B4b88f5;
case 0x4b88f7:c.instructions+=2;goto B4b88f7;
case 0x4b88f9:c.instructions+=1;goto B4b88f9;
case 0x4b88fc:goto L4b88fc;
case 0x4b88fe:c.instructions+=6;goto B4b88fe;
case 0x4b8905:c.instructions+=5;goto B4b8905;
case 0x4b8908:c.instructions+=4;goto B4b8908;
case 0x4b890b:c.instructions+=3;goto B4b890b;
case 0x4b890c:c.instructions+=2;goto B4b890c;
case 0x4b890f:c.instructions+=1;goto B4b890f;
case 0x4b8914:goto L4b8914;
case 0x4b8915:c.instructions+=2;goto B4b8915;
case 0x4b8916:c.instructions+=1;goto B4b8916;
case 0x4b891b:goto L4b891b;
case 0x4b891e:c.instructions+=3;goto B4b891e;
case 0x4b8920:c.instructions+=2;goto B4b8920;
case 0x4b8925:c.instructions+=1;goto B4b8925;
case 0x4b892a:goto L4b892a;
case 0x4b892d:c.instructions+=3;goto B4b892d;
case 0x4b892e:c.instructions+=2;goto B4b892e;
case 0x4b8930:c.instructions+=1;goto B4b8930;
case 0x4b8935:goto L4b8935;
case 0x4b8936:c.instructions+=2;goto B4b8936;
case 0x4b8938:c.instructions+=1;goto B4b8938;
case 0x4b893d:goto L4b893d;
case 0x4b893e:c.instructions+=5;goto B4b893e;
case 0x4b893f:c.instructions+=4;goto B4b893f;
case 0x4b8940:c.instructions+=3;goto B4b8940;
case 0x4b8941:c.instructions+=2;goto B4b8941;
case 0x4b8944:c.instructions+=1;goto B4b8944;
case 0x4b8947:goto L4b8947;
case 0x4b894a:c.instructions+=1;goto B4b894a;
case 0x4b894f:goto L4b894f;
case 0x4b8953:goto L4b8953;
case 0x4b8956:c.instructions+=2;goto B4b8956;
case 0x4b8958:c.instructions+=1;goto B4b8958;
case 0x4b895a:goto L4b895a;
case 0x4b895d:c.instructions+=2;goto B4b895d;
case 0x4b895e:c.instructions+=1;goto B4b895e;
case 0x4b8963:goto L4b8963;
case 0x4b8966:c.instructions+=4;goto B4b8966;
case 0x4b8969:c.instructions+=3;goto B4b8969;
case 0x4b896a:c.instructions+=2;goto B4b896a;
case 0x4b896d:c.instructions+=1;goto B4b896d;
case 0x4b8972:goto L4b8972;
case 0x4b8975:c.instructions+=3;goto B4b8975;
case 0x4b8977:c.instructions+=2;goto B4b8977;
case 0x4b8978:c.instructions+=1;goto B4b8978;
case 0x4b897d:goto L4b897d;
case 0x4b897f:c.instructions+=1;goto B4b897f;
case 0x4b8984:goto L4b8984;
case 0x4b8987:c.instructions+=2;goto B4b8987;
case 0x4b8989:c.instructions+=1;goto B4b8989;
case 0x4b898b:goto L4b898b;
case 0x4b898d:c.instructions+=2;goto B4b898d;
case 0x4b898f:c.instructions+=1;goto B4b898f;
case 0x4b8991:goto L4b8991;
case 0x4b8998:goto L4b8998;
case 0x4b8999:c.instructions+=5;goto B4b8999;
case 0x4b899a:c.instructions+=4;goto B4b899a;
case 0x4b899b:c.instructions+=3;goto B4b899b;
case 0x4b899c:c.instructions+=2;goto B4b899c;
case 0x4b899f:c.instructions+=1;goto B4b899f;
case 0x4b89b0:goto L4b89b0;
case 0x4b89b2:c.instructions+=8;goto B4b89b2;
case 0x4b89b7:c.instructions+=7;goto B4b89b7;
case 0x4b89bd:c.instructions+=6;goto B4b89bd;
case 0x4b89be:c.instructions+=5;goto B4b89be;
case 0x4b89c5:c.instructions+=4;goto B4b89c5;
case 0x4b89c6:c.instructions+=3;goto B4b89c6;
case 0x4b89c7:c.instructions+=2;goto B4b89c7;
case 0x4b89c9:c.instructions+=1;goto B4b89c9;
case 0x4b89ce:goto L4b89ce;
case 0x4b89d0:c.instructions+=6;goto B4b89d0;
case 0x4b89d3:c.instructions+=5;goto B4b89d3;
case 0x4b89d7:c.instructions+=4;goto B4b89d7;
case 0x4b89d9:c.instructions+=3;goto B4b89d9;
case 0x4b89db:c.instructions+=2;goto B4b89db;
case 0x4b89df:c.instructions+=1;goto B4b89df;
case 0x4b89e1:goto L4b89e1;
case 0x4b89e5:c.instructions+=3;goto B4b89e5;
case 0x4b89e6:c.instructions+=2;goto B4b89e6;
case 0x4b89e8:c.instructions+=1;goto B4b89e8;
case 0x4b89ed:goto L4b89ed;
case 0x4b89f3:c.instructions+=1;goto B4b89f3;
case 0x4b89f5:goto L4b89f5;
case 0x4b89f9:c.instructions+=4;goto B4b89f9;
case 0x4b89fa:c.instructions+=3;goto B4b89fa;
case 0x4b8a01:c.instructions+=2;goto B4b8a01;
case 0x4b8a04:c.instructions+=1;goto B4b8a04;
case 0x4b8a10:goto L4b8a10;
case 0x4b8a12:c.instructions+=11;goto B4b8a12;
case 0x4b8a17:c.instructions+=10;goto B4b8a17;
case 0x4b8a1d:c.instructions+=9;goto B4b8a1d;
case 0x4b8a1e:c.instructions+=8;goto B4b8a1e;
case 0x4b8a25:c.instructions+=7;goto B4b8a25;
case 0x4b8a26:c.instructions+=6;goto B4b8a26;
case 0x4b8a27:c.instructions+=5;goto B4b8a27;
case 0x4b8a28:c.instructions+=4;goto B4b8a28;
case 0x4b8a29:c.instructions+=3;goto B4b8a29;
case 0x4b8a2e:c.instructions+=2;goto B4b8a2e;
case 0x4b8a30:c.instructions+=1;goto B4b8a30;
case 0x4b8a35:goto L4b8a35;
case 0x4b8a37:c.instructions+=5;goto B4b8a37;
case 0x4b8a3a:c.instructions+=4;goto B4b8a3a;
case 0x4b8a3e:c.instructions+=3;goto B4b8a3e;
case 0x4b8a40:c.instructions+=2;goto B4b8a40;
case 0x4b8a48:c.instructions+=1;goto B4b8a48;
case 0x4b8a4a:goto L4b8a4a;
case 0x4b8a50:c.instructions+=11;goto B4b8a50;
case 0x4b8a52:c.instructions+=10;goto B4b8a52;
case 0x4b8a58:c.instructions+=9;goto B4b8a58;
case 0x4b8a59:c.instructions+=8;goto B4b8a59;
case 0x4b8a5f:c.instructions+=7;goto B4b8a5f;
case 0x4b8a60:c.instructions+=6;goto B4b8a60;
case 0x4b8a66:c.instructions+=5;goto B4b8a66;
case 0x4b8a67:c.instructions+=4;goto B4b8a67;
case 0x4b8a6d:c.instructions+=3;goto B4b8a6d;
case 0x4b8a6e:c.instructions+=2;goto B4b8a6e;
case 0x4b8a70:c.instructions+=1;goto B4b8a70;
case 0x4b8a75:goto L4b8a75;
case 0x4b8a7b:c.instructions+=2;goto B4b8a7b;
case 0x4b8a81:c.instructions+=1;goto B4b8a81;
case 0x4b8a83:goto L4b8a83;
case 0x4b8a85:goto L4b8a85;
case 0x4b8a87:c.instructions+=4;goto B4b8a87;
case 0x4b8a88:c.instructions+=3;goto B4b8a88;
case 0x4b8a8a:c.instructions+=2;goto B4b8a8a;
case 0x4b8a92:c.instructions+=1;goto B4b8a92;
case 0x4b8a97:goto L4b8a97;
case 0x4b8a9c:c.instructions+=1;goto B4b8a9c;
case 0x4b8aa1:goto L4b8aa1;
case 0x4b8aa3:c.instructions+=5;goto B4b8aa3;
case 0x4b8aa6:c.instructions+=4;goto B4b8aa6;
case 0x4b8aaa:c.instructions+=3;goto B4b8aaa;
case 0x4b8aac:c.instructions+=2;goto B4b8aac;
case 0x4b8ab4:c.instructions+=1;goto B4b8ab4;
case 0x4b8ab6:goto L4b8ab6;
case 0x4b8abc:c.instructions+=11;goto B4b8abc;
case 0x4b8abe:c.instructions+=10;goto B4b8abe;
case 0x4b8ac4:c.instructions+=9;goto B4b8ac4;
case 0x4b8ac5:c.instructions+=8;goto B4b8ac5;
case 0x4b8acb:c.instructions+=7;goto B4b8acb;
case 0x4b8acc:c.instructions+=6;goto B4b8acc;
case 0x4b8ad2:c.instructions+=5;goto B4b8ad2;
case 0x4b8ad3:c.instructions+=4;goto B4b8ad3;
case 0x4b8ad9:c.instructions+=3;goto B4b8ad9;
case 0x4b8ada:c.instructions+=2;goto B4b8ada;
case 0x4b8adc:c.instructions+=1;goto B4b8adc;
case 0x4b8ae1:goto L4b8ae1;
case 0x4b8ae7:c.instructions+=2;goto B4b8ae7;
case 0x4b8aed:c.instructions+=1;goto B4b8aed;
case 0x4b8aef:goto L4b8aef;
case 0x4b8af1:goto L4b8af1;
case 0x4b8af3:c.instructions+=4;goto B4b8af3;
case 0x4b8af4:c.instructions+=3;goto B4b8af4;
case 0x4b8af6:c.instructions+=2;goto B4b8af6;
case 0x4b8afe:c.instructions+=1;goto B4b8afe;
case 0x4b8b03:goto L4b8b03;
case 0x4b8b08:c.instructions+=1;goto B4b8b08;
case 0x4b8b0d:goto L4b8b0d;
case 0x4b8b0f:c.instructions+=5;goto B4b8b0f;
case 0x4b8b12:c.instructions+=4;goto B4b8b12;
case 0x4b8b16:c.instructions+=3;goto B4b8b16;
case 0x4b8b18:c.instructions+=2;goto B4b8b18;
case 0x4b8b20:c.instructions+=1;goto B4b8b20;
case 0x4b8b22:goto L4b8b22;
case 0x4b8b28:c.instructions+=11;goto B4b8b28;
case 0x4b8b2a:c.instructions+=10;goto B4b8b2a;
case 0x4b8b30:c.instructions+=9;goto B4b8b30;
case 0x4b8b31:c.instructions+=8;goto B4b8b31;
case 0x4b8b37:c.instructions+=7;goto B4b8b37;
case 0x4b8b38:c.instructions+=6;goto B4b8b38;
case 0x4b8b3e:c.instructions+=5;goto B4b8b3e;
case 0x4b8b3f:c.instructions+=4;goto B4b8b3f;
case 0x4b8b45:c.instructions+=3;goto B4b8b45;
case 0x4b8b46:c.instructions+=2;goto B4b8b46;
case 0x4b8b48:c.instructions+=1;goto B4b8b48;
case 0x4b8b4d:goto L4b8b4d;
case 0x4b8b53:c.instructions+=2;goto B4b8b53;
case 0x4b8b59:c.instructions+=1;goto B4b8b59;
case 0x4b8b5b:goto L4b8b5b;
case 0x4b8b5d:goto L4b8b5d;
case 0x4b8b5f:c.instructions+=4;goto B4b8b5f;
case 0x4b8b60:c.instructions+=3;goto B4b8b60;
case 0x4b8b62:c.instructions+=2;goto B4b8b62;
case 0x4b8b6a:c.instructions+=1;goto B4b8b6a;
case 0x4b8b6f:goto L4b8b6f;
case 0x4b8b73:c.instructions+=6;goto B4b8b73;
case 0x4b8b74:c.instructions+=5;goto B4b8b74;
case 0x4b8b75:c.instructions+=4;goto B4b8b75;
case 0x4b8b76:c.instructions+=3;goto B4b8b76;
case 0x4b8b7d:c.instructions+=2;goto B4b8b7d;
case 0x4b8b80:c.instructions+=1;goto B4b8b80;
case 0x4b8b90:goto L4b8b90;
case 0x4b8b91:c.instructions+=2;goto B4b8b91;
case 0x4b8b93:c.instructions+=1;goto B4b8b93;
case 0x4b8b98:goto L4b8b98;
case 0x4b8b9d:c.instructions+=1;goto B4b8b9d;
case 0x4b8b9f:goto L4b8b9f;
case 0x4b8ba0:c.instructions+=1;goto B4b8ba0;
case 0x4b8ba5:goto L4b8ba5;
case 0x4b8ba8:goto L4b8ba8;
case 0x4b8baa:c.instructions+=2;goto B4b8baa;
case 0x4b8bab:c.instructions+=1;goto B4b8bab;
case 0x4b8bb0:goto L4b8bb0;
case 0x4b8bb4:c.instructions+=2;goto B4b8bb4;
case 0x4b8bb9:c.instructions+=1;goto B4b8bb9;
case 0x4b8bbf:goto L4b8bbf;
case 0x4b8bc5:goto L4b8bc5;
case 0x4b8bca:c.instructions+=1;goto B4b8bca;
case 0x4b8bcc:goto L4b8bcc;
case 0x4b8bce:goto L4b8bce;
case 0x4b8bd3:c.instructions+=1;goto B4b8bd3;
case 0x4b8bd5:goto L4b8bd5;
case 0x4b8bda:c.instructions+=1;goto B4b8bda;
case 0x4b8be0:goto L4b8be0;
case 0x4b8be4:c.instructions+=3;goto B4b8be4;
case 0x4b8be6:c.instructions+=2;goto B4b8be6;
case 0x4b8be8:c.instructions+=1;goto B4b8be8;
case 0x4b8bea:goto L4b8bea;
case 0x4b8bed:c.instructions+=3;goto B4b8bed;
case 0x4b8bf2:c.instructions+=2;goto B4b8bf2;
case 0x4b8bf3:c.instructions+=1;goto B4b8bf3;
case 0x4b8bf8:goto L4b8bf8;
case 0x4b8bfb:c.instructions+=1;goto B4b8bfb;
case 0x4b8bfe:goto L4b8bfe;
case 0x4b8c01:c.instructions+=3;goto B4b8c01;
case 0x4b8c06:c.instructions+=2;goto B4b8c06;
case 0x4b8c07:c.instructions+=1;goto B4b8c07;
case 0x4b8c0c:goto L4b8c0c;
case 0x4b8c0f:c.instructions+=1;goto B4b8c0f;
case 0x4b8c12:goto L4b8c12;
case 0x4b8c16:c.instructions+=3;goto B4b8c16;
case 0x4b8c18:c.instructions+=2;goto B4b8c18;
case 0x4b8c1e:c.instructions+=1;goto B4b8c1e;
case 0x4b8c24:goto L4b8c24;
case 0x4b8c2b:c.instructions+=1;goto B4b8c2b;
case 0x4b8c2e:goto L4b8c2e;
case 0x4b8c31:c.instructions+=1;goto B4b8c31;
case 0x4b8c36:goto L4b8c36;
case 0x4b8c39:goto L4b8c39;
case 0x4b8c3e:c.instructions+=1;goto B4b8c3e;
case 0x4b8c40:goto L4b8c40;
case 0x4b8c46:c.instructions+=2;goto B4b8c46;
case 0x4b8c48:c.instructions+=1;goto B4b8c48;
case 0x4b8c4e:goto L4b8c4e;
case 0x4b8c50:c.instructions+=5;goto B4b8c50;
case 0x4b8c58:c.instructions+=4;goto B4b8c58;
case 0x4b8c60:c.instructions+=3;goto B4b8c60;
case 0x4b8c68:c.instructions+=2;goto B4b8c68;
case 0x4b8c70:c.instructions+=1;goto B4b8c70;
case 0x4b8c73:goto L4b8c73;
case 0x4b8c78:c.instructions+=1;goto B4b8c78;
case 0x4b8c7a:goto L4b8c7a;
case 0x4b8c7c:goto L4b8c7c;
case 0x4b8c81:c.instructions+=1;goto B4b8c81;
case 0x4b8c83:goto L4b8c83;
case 0x4b8c88:c.instructions+=1;goto B4b8c88;
case 0x4b8c8a:goto L4b8c8a;
case 0x4b8c8b:c.instructions+=3;goto B4b8c8b;
case 0x4b8c8e:c.instructions+=2;goto B4b8c8e;
case 0x4b8c90:c.instructions+=1;goto B4b8c90;
case 0x4b8c95:goto L4b8c95;
case 0x4b8c97:c.instructions+=1;goto B4b8c97;
case 0x4b8c9c:goto L4b8c9c;
case 0x4b8c9d:c.instructions+=1;goto B4b8c9d;
case 0x4b8ca0:goto L4b8ca0;
case 0x4b8ca5:c.instructions+=1;goto B4b8ca5;
case 0x4b8ca7:goto L4b8ca7;
case 0x4b8ca9:c.instructions+=3;goto B4b8ca9;
case 0x4b8caf:c.instructions+=2;goto B4b8caf;
case 0x4b8cb5:c.instructions+=1;goto B4b8cb5;
case 0x4b8cb7:goto L4b8cb7;
case 0x4b8cbc:c.instructions+=2;goto B4b8cbc;
case 0x4b8cc2:c.instructions+=1;goto B4b8cc2;
case 0x4b8cc5:goto L4b8cc5;
case 0x4b8cc9:c.instructions+=1;goto B4b8cc9;
case 0x4b8ccf:goto L4b8ccf;
case 0x4b8ce0:goto L4b8ce0;
case 0x4b8ce1:c.instructions+=2;goto B4b8ce1;
case 0x4b8ce3:c.instructions+=1;goto B4b8ce3;
case 0x4b8ce8:goto L4b8ce8;
case 0x4b8ced:c.instructions+=1;goto B4b8ced;
case 0x4b8cef:goto L4b8cef;
case 0x4b8cf0:c.instructions+=1;goto B4b8cf0;
case 0x4b8cf5:goto L4b8cf5;
case 0x4b8cf8:goto L4b8cf8;
case 0x4b8cfa:c.instructions+=2;goto B4b8cfa;
case 0x4b8cfb:c.instructions+=1;goto B4b8cfb;
case 0x4b8d00:goto L4b8d00;
case 0x4b8d03:c.instructions+=10;goto B4b8d03;
case 0x4b8d04:c.instructions+=9;goto B4b8d04;
case 0x4b8d08:c.instructions+=8;goto B4b8d08;
case 0x4b8d09:c.instructions+=7;goto B4b8d09;
case 0x4b8d0a:c.instructions+=6;goto B4b8d0a;
case 0x4b8d0c:c.instructions+=5;goto B4b8d0c;
case 0x4b8d12:c.instructions+=4;goto B4b8d12;
case 0x4b8d13:c.instructions+=3;goto B4b8d13;
case 0x4b8d19:c.instructions+=2;goto B4b8d19;
case 0x4b8d1e:c.instructions+=1;goto B4b8d1e;
case 0x4b8d20:goto L4b8d20;
case 0x4b8d22:goto L4b8d22;
case 0x4b8d24:c.instructions+=4;goto B4b8d24;
case 0x4b8d26:c.instructions+=3;goto B4b8d26;
case 0x4b8d2d:c.instructions+=2;goto B4b8d2d;
case 0x4b8d32:c.instructions+=1;goto B4b8d32;
case 0x4b8d34:goto L4b8d34;
case 0x4b8d35:c.instructions+=1;goto B4b8d35;
case 0x4b8d3a:goto L4b8d3a;
case 0x4b8d3d:goto L4b8d3d;
case 0x4b8d43:c.instructions+=2;goto B4b8d43;
case 0x4b8d45:c.instructions+=1;goto B4b8d45;
case 0x4b8d47:goto L4b8d47;
case 0x4b8d4f:c.instructions+=2;goto B4b8d4f;
case 0x4b8d54:c.instructions+=1;goto B4b8d54;
case 0x4b8d59:goto L4b8d59;
case 0x4b8d5f:c.instructions+=2;goto B4b8d5f;
case 0x4b8d61:c.instructions+=1;goto B4b8d61;
case 0x4b8d63:goto L4b8d63;
case 0x4b8d65:c.instructions+=4;goto B4b8d65;
case 0x4b8d6a:c.instructions+=3;goto B4b8d6a;
case 0x4b8d6e:c.instructions+=2;goto B4b8d6e;
case 0x4b8d6f:c.instructions+=1;goto B4b8d6f;
case 0x4b8d70:goto L4b8d70;
case 0x4b8d76:c.instructions+=2;goto B4b8d76;
case 0x4b8d78:c.instructions+=1;goto B4b8d78;
case 0x4b8d7a:goto L4b8d7a;
case 0x4b8d7c:c.instructions+=4;goto B4b8d7c;
case 0x4b8d82:c.instructions+=3;goto B4b8d82;
case 0x4b8d86:c.instructions+=2;goto B4b8d86;
case 0x4b8d87:c.instructions+=1;goto B4b8d87;
case 0x4b8d88:goto L4b8d88;
case 0x4b8d8e:c.instructions+=2;goto B4b8d8e;
case 0x4b8d90:c.instructions+=1;goto B4b8d90;
case 0x4b8d92:goto L4b8d92;
case 0x4b8d98:c.instructions+=2;goto B4b8d98;
case 0x4b8d9c:c.instructions+=1;goto B4b8d9c;
case 0x4b8d9d:goto L4b8d9d;
case 0x4b8da0:c.instructions+=2;goto B4b8da0;
case 0x4b8da2:c.instructions+=1;goto B4b8da2;
case 0x4b8da4:goto L4b8da4;
case 0x4b8da7:c.instructions+=1;goto B4b8da7;
case 0x4b8da9:goto L4b8da9;
case 0x4b8dad:c.instructions+=1;goto B4b8dad;
case 0x4b8daf:goto L4b8daf;
case 0x4b8db0:c.instructions+=1;goto B4b8db0;
case 0x4b8db5:goto L4b8db5;
case 0x4b8db6:c.instructions+=2;goto B4b8db6;
case 0x4b8db8:c.instructions+=1;goto B4b8db8;
case 0x4b8dbd:goto L4b8dbd;
case 0x4b8dc0:c.instructions+=1;goto B4b8dc0;
case 0x4b8dc2:goto L4b8dc2;
case 0x4b8dc4:goto L4b8dc4;
case 0x4b8dc7:c.instructions+=1;goto B4b8dc7;
case 0x4b8dcd:goto L4b8dcd;
case 0x4b8dd4:goto L4b8dd4;
case 0x4b8dda:c.instructions+=5;goto B4b8dda;
case 0x4b8ddd:c.instructions+=4;goto B4b8ddd;
case 0x4b8dde:c.instructions+=3;goto B4b8dde;
case 0x4b8de3:c.instructions+=2;goto B4b8de3;
case 0x4b8de4:c.instructions+=1;goto B4b8de4;
case 0x4b8de9:goto L4b8de9;
case 0x4b8dec:c.instructions+=1;goto B4b8dec;
case 0x4b8dee:goto L4b8dee;
case 0x4b8df2:c.instructions+=8;goto B4b8df2;
case 0x4b8df8:c.instructions+=7;goto B4b8df8;
case 0x4b8dfb:c.instructions+=6;goto B4b8dfb;
case 0x4b8dfc:c.instructions+=5;goto B4b8dfc;
case 0x4b8dfd:c.instructions+=4;goto B4b8dfd;
case 0x4b8dff:c.instructions+=3;goto B4b8dff;
case 0x4b8e04:c.instructions+=2;goto B4b8e04;
case 0x4b8e05:c.instructions+=1;goto B4b8e05;
case 0x4b8e0a:goto L4b8e0a;
case 0x4b8e0d:c.instructions+=1;goto B4b8e0d;
case 0x4b8e0f:goto L4b8e0f;
case 0x4b8e13:c.instructions+=12;goto B4b8e13;
case 0x4b8e19:c.instructions+=11;goto B4b8e19;
case 0x4b8e1c:c.instructions+=10;goto B4b8e1c;
case 0x4b8e1d:c.instructions+=9;goto B4b8e1d;
case 0x4b8e21:c.instructions+=8;goto B4b8e21;
case 0x4b8e23:c.instructions+=7;goto B4b8e23;
case 0x4b8e24:c.instructions+=6;goto B4b8e24;
case 0x4b8e25:c.instructions+=5;goto B4b8e25;
case 0x4b8e27:c.instructions+=4;goto B4b8e27;
case 0x4b8e29:c.instructions+=3;goto B4b8e29;
case 0x4b8e2e:c.instructions+=2;goto B4b8e2e;
case 0x4b8e2f:c.instructions+=1;goto B4b8e2f;
case 0x4b8e34:goto L4b8e34;
case 0x4b8e37:c.instructions+=1;goto B4b8e37;
case 0x4b8e39:goto L4b8e39;
case 0x4b8e3d:c.instructions+=16;goto B4b8e3d;
case 0x4b8e43:c.instructions+=15;goto B4b8e43;
case 0x4b8e46:c.instructions+=14;goto B4b8e46;
case 0x4b8e47:c.instructions+=13;goto B4b8e47;
case 0x4b8e4b:c.instructions+=12;goto B4b8e4b;
case 0x4b8e4d:c.instructions+=11;goto B4b8e4d;
case 0x4b8e4f:c.instructions+=10;goto B4b8e4f;
case 0x4b8e50:c.instructions+=9;goto B4b8e50;
case 0x4b8e54:c.instructions+=8;goto B4b8e54;
case 0x4b8e55:c.instructions+=7;goto B4b8e55;
case 0x4b8e56:c.instructions+=6;goto B4b8e56;
case 0x4b8e58:c.instructions+=5;goto B4b8e58;
case 0x4b8e5a:c.instructions+=4;goto B4b8e5a;
case 0x4b8e5c:c.instructions+=3;goto B4b8e5c;
case 0x4b8e61:c.instructions+=2;goto B4b8e61;
case 0x4b8e62:c.instructions+=1;goto B4b8e62;
case 0x4b8e67:goto L4b8e67;
case 0x4b8e6a:goto L4b8e6a;
case 0x4b8e70:goto L4b8e70;
case 0x4b8e76:c.instructions+=2;goto B4b8e76;
case 0x4b8e78:c.instructions+=1;goto B4b8e78;
case 0x4b8e7a:goto L4b8e7a;
case 0x4b8e7c:c.instructions+=1;goto B4b8e7c;
case 0x4b8e7e:goto L4b8e7e;
case 0x4b8e83:goto L4b8e83;
case 0x4b8e85:c.instructions+=1;goto B4b8e85;
case 0x4b8e8a:goto L4b8e8a;
case 0x4b8e8b:c.instructions+=5;goto B4b8e8b;
case 0x4b8e8c:c.instructions+=4;goto B4b8e8c;
case 0x4b8e8d:c.instructions+=3;goto B4b8e8d;
case 0x4b8e8e:c.instructions+=2;goto B4b8e8e;
case 0x4b8e91:c.instructions+=1;goto B4b8e91;
case 0x4b8eb0:goto L4b8eb0;
case 0x4b8eb6:c.instructions+=5;goto B4b8eb6;
case 0x4b8eb8:c.instructions+=4;goto B4b8eb8;
case 0x4b8eb9:c.instructions+=3;goto B4b8eb9;
case 0x4b8ebf:c.instructions+=2;goto B4b8ebf;
case 0x4b8ec9:c.instructions+=1;goto B4b8ec9;
case 0x4b8ecb:goto L4b8ecb;
case 0x4b8ed0:goto L4b8ed0;
case 0x4b8ed2:c.instructions+=2;goto B4b8ed2;
case 0x4b8ed3:c.instructions+=1;goto B4b8ed3;
case 0x4b8ee0:goto L4b8ee0;
case 0x4b8ee1:c.instructions+=4;goto B4b8ee1;
case 0x4b8ee3:c.instructions+=3;goto B4b8ee3;
case 0x4b8ee5:c.instructions+=2;goto B4b8ee5;
case 0x4b8ee7:c.instructions+=1;goto B4b8ee7;
case 0x4b8ee9:goto L4b8ee9;
case 0x4b8eea:c.instructions+=1;goto B4b8eea;
case 0x4b8eef:goto L4b8eef;
case 0x4b8ef2:c.instructions+=1;goto B4b8ef2;
case 0x4b8ef8:goto L4b8ef8;
case 0x4b8efc:c.instructions+=2;goto B4b8efc;
case 0x4b8efe:c.instructions+=1;goto B4b8efe;
case 0x4b8f00:goto L4b8f00;
case 0x4b8f05:c.instructions+=1;goto B4b8f05;
case 0x4b8f0a:goto L4b8f0a;
case 0x4b8f0d:goto L4b8f0d;
case 0x4b8f10:c.instructions+=7;goto B4b8f10;
case 0x4b8f13:c.instructions+=6;goto B4b8f13;
case 0x4b8f14:c.instructions+=5;goto B4b8f14;
case 0x4b8f19:c.instructions+=4;goto B4b8f19;
case 0x4b8f1e:c.instructions+=3;goto B4b8f1e;
case 0x4b8f23:c.instructions+=2;goto B4b8f23;
case 0x4b8f24:c.instructions+=1;goto B4b8f24;
case 0x4b8f29:goto L4b8f29;
case 0x4b8f2c:c.instructions+=3;goto B4b8f2c;
case 0x4b8f2e:c.instructions+=2;goto B4b8f2e;
case 0x4b8f2f:c.instructions+=1;goto B4b8f2f;
case 0x4b8f40:goto L4b8f40;
case 0x4b8f41:c.instructions+=5;goto B4b8f41;
case 0x4b8f43:c.instructions+=4;goto B4b8f43;
case 0x4b8f45:c.instructions+=3;goto B4b8f45;
case 0x4b8f47:c.instructions+=2;goto B4b8f47;
case 0x4b8f48:c.instructions+=1;goto B4b8f48;
case 0x4b8f4a:goto L4b8f4a;
case 0x4b8f4b:c.instructions+=1;goto B4b8f4b;
case 0x4b8f50:goto L4b8f50;
case 0x4b8f53:c.instructions+=1;goto B4b8f53;
case 0x4b8f59:goto L4b8f59;
case 0x4b8f5c:c.instructions+=3;goto B4b8f5c;
case 0x4b8f5f:c.instructions+=2;goto B4b8f5f;
case 0x4b8f64:c.instructions+=1;goto B4b8f64;
case 0x4b8f69:goto L4b8f69;
case 0x4b8f6a:c.instructions+=9;goto B4b8f6a;
case 0x4b8f6c:c.instructions+=8;goto B4b8f6c;
case 0x4b8f71:c.instructions+=7;goto B4b8f71;
case 0x4b8f76:c.instructions+=6;goto B4b8f76;
case 0x4b8f7b:c.instructions+=5;goto B4b8f7b;
case 0x4b8f80:c.instructions+=4;goto B4b8f80;
case 0x4b8f85:c.instructions+=3;goto B4b8f85;
case 0x4b8f8a:c.instructions+=2;goto B4b8f8a;
case 0x4b8f8b:c.instructions+=1;goto B4b8f8b;
case 0x4b8f90:goto L4b8f90;
case 0x4b8f93:c.instructions+=4;goto B4b8f93;
case 0x4b8f94:c.instructions+=3;goto B4b8f94;
case 0x4b8f96:c.instructions+=2;goto B4b8f96;
case 0x4b8f97:c.instructions+=1;goto B4b8f97;
case 0x4b8fa0:goto L4b8fa0;
case 0x4b8fa1:c.instructions+=4;goto B4b8fa1;
case 0x4b8fa3:c.instructions+=3;goto B4b8fa3;
case 0x4b8fa5:c.instructions+=2;goto B4b8fa5;
case 0x4b8fa7:c.instructions+=1;goto B4b8fa7;
case 0x4b8fa9:goto L4b8fa9;
case 0x4b8faa:c.instructions+=1;goto B4b8faa;
case 0x4b8faf:goto L4b8faf;
case 0x4b8fb2:c.instructions+=1;goto B4b8fb2;
case 0x4b8fb8:goto L4b8fb8;
case 0x4b8fbc:c.instructions+=2;goto B4b8fbc;
case 0x4b8fc1:c.instructions+=1;goto B4b8fc1;
case 0x4b8fc3:goto L4b8fc3;
case 0x4b8fc8:c.instructions+=1;goto B4b8fc8;
case 0x4b8fca:goto L4b8fca;
case 0x4b8fcf:c.instructions+=1;goto B4b8fcf;
case 0x4b8fd1:goto L4b8fd1;
case 0x4b8fd5:c.instructions+=11;goto B4b8fd5;
case 0x4b8fd8:c.instructions+=10;goto B4b8fd8;
case 0x4b8fdb:c.instructions+=9;goto B4b8fdb;
case 0x4b8fdc:c.instructions+=8;goto B4b8fdc;
case 0x4b8fde:c.instructions+=7;goto B4b8fde;
case 0x4b8fdf:c.instructions+=6;goto B4b8fdf;
case 0x4b8fe4:c.instructions+=5;goto B4b8fe4;
case 0x4b8fe9:c.instructions+=4;goto B4b8fe9;
case 0x4b8fee:c.instructions+=3;goto B4b8fee;
case 0x4b8ff3:c.instructions+=2;goto B4b8ff3;
case 0x4b8ff4:c.instructions+=1;goto B4b8ff4;
case 0x4b8ff9:goto L4b8ff9;
case 0x4b8ffc:c.instructions+=3;goto B4b8ffc;
case 0x4b8ffe:c.instructions+=2;goto B4b8ffe;
case 0x4b8fff:c.instructions+=1;goto B4b8fff;
default:missing_instruction(c.pc);}
B4b8001:L4b8001:{c.instructions+=7;NFSU2_TR(0x4b8001);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4b8003:{NFSU2_TR(0x4b8003);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b8004:{NFSU2_TR(0x4b8004);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b8006:{NFSU2_TR(0x4b8006);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b8007:{NFSU2_TR(0x4b8007);
__builtin_memmove((R+4),(R+24),4);
}
B4b8009:{NFSU2_TR(0x4b8009);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b800d:{NFSU2_TR(0x4b800d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b8012ull));
TAIL_STATIC(0x54ef30u,54e);
}
B4b8012:L4b8012:{c.instructions+=2;NFSU2_TR(0x4b8012);
u8 U[4];
w4(U+0,u32(0x3cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b8014:{NFSU2_TR(0x4b8014);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b8019ull));
TAIL_STATIC(0x575620u,575);
}
B4b8019:L4b8019:{c.instructions+=6;NFSU2_TR(0x4b8019);
__builtin_memmove((R+28),(R+0),4);
}
B4b801b:{NFSU2_TR(0x4b801b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4b801e:{NFSU2_TR(0x4b801e);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b8022:{NFSU2_TR(0x4b8022);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b8024:{NFSU2_TR(0x4b8024);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0x9ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4b802c:{NFSU2_TR(0x4b802c);
if(r1(R+518)){{goto L4b8056;}}
}
B4b802e:L4b802e:{c.instructions+=8;NFSU2_TR(0x4b802e);
__builtin_memmove((R+20),gp(0x836364),4);
}
B4b8034:{NFSU2_TR(0x4b8034);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b8036:{NFSU2_TR(0x4b8036);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+0),(U+0),4);
}
B4b803c:{NFSU2_TR(0x4b803c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b803d:{NFSU2_TR(0x4b803d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+4),(U+0),4);
}
B4b8043:{NFSU2_TR(0x4b8043);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b8044:{NFSU2_TR(0x4b8044);
__builtin_memmove((R+4),(R+28),4);
}
B4b8046:{NFSU2_TR(0x4b8046);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b804bull));
TAIL_STATIC(0x51dfc0u,51d);
}
B4b804b:L4b804b:{c.instructions+=3;NFSU2_TR(0x4b804b);
u8 U[4];
w4(U+0,u32(0x791e00ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4b8051:{NFSU2_TR(0x4b8051);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b8054:{NFSU2_TR(0x4b8054);
{goto L4b8058;}
}
B4b8056:L4b8056:{c.instructions+=1;NFSU2_TR(0x4b8056);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4b8058:L4b8058:{c.instructions+=4;NFSU2_TR(0x4b8058);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b8059:{NFSU2_TR(0x4b8059);
__builtin_memmove((R+4),(R+24),4);
}
B4b805b:{NFSU2_TR(0x4b805b);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b805f:{NFSU2_TR(0x4b805f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b8064ull));
TAIL_STATIC(0x54ee40u,54e);
}
B4b8064:L4b8064:{c.instructions+=3;NFSU2_TR(0x4b8064);
u8 U[4];
w4(U+0,u32(0x58ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b8066:{NFSU2_TR(0x4b8066);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x154ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b806c:{NFSU2_TR(0x4b806c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b8071ull));
TAIL_STATIC(0x575620u,575);
}
B4b8071:L4b8071:{c.instructions+=6;NFSU2_TR(0x4b8071);
__builtin_memmove((R+28),(R+0),4);
}
B4b8073:{NFSU2_TR(0x4b8073);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4b8076:{NFSU2_TR(0x4b8076);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b807a:{NFSU2_TR(0x4b807a);
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
B4b807c:{NFSU2_TR(0x4b807c);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0xaull));
s4(u32(r4(U+0)),r4(U+4));
}
B4b8084:{NFSU2_TR(0x4b8084);
if(r1(R+518)){{goto L4b80c8;}}
}
B4b8086:L4b8086:{c.instructions+=2;NFSU2_TR(0x4b8086);
__builtin_memmove((R+20),gp(0x836364),4);
}
B4b808c:{NFSU2_TR(0x4b808c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b8091ull));
TAIL_STATIC(0x5b8240u,5b8);
}
B4b8091:L4b8091:{c.instructions+=13;NFSU2_TR(0x4b8091);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4b8095:{NFSU2_TR(0x4b8095);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4b8099:{NFSU2_TR(0x4b8099);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b809a:{NFSU2_TR(0x4b809a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((R+0),(U+0),4);
}
B4b80a0:{NFSU2_TR(0x4b80a0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b80a1:{NFSU2_TR(0x4b80a1);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4b80a7:{NFSU2_TR(0x4b80a7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b80a8:{NFSU2_TR(0x4b80a8);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+8),(U+0),4);
}
B4b80ae:{NFSU2_TR(0x4b80ae);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b80af:{NFSU2_TR(0x4b80af);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+0),(U+0),4);
}
B4b80b5:{NFSU2_TR(0x4b80b5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b80b6:{NFSU2_TR(0x4b80b6);
__builtin_memmove((R+4),(R+28),4);
}
B4b80b8:{NFSU2_TR(0x4b80b8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b80bdull));
TAIL_STATIC(0x51e230u,51e);
}
B4b80bd:L4b80bd:{c.instructions+=3;NFSU2_TR(0x4b80bd);
u8 U[4];
w4(U+0,u32(0x791db0ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4b80c3:{NFSU2_TR(0x4b80c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b80c6:{NFSU2_TR(0x4b80c6);
{goto L4b80ca;}
}
B4b80c8:L4b80c8:{c.instructions+=1;NFSU2_TR(0x4b80c8);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4b80ca:L4b80ca:{c.instructions+=5;NFSU2_TR(0x4b80ca);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b80cc:{NFSU2_TR(0x4b80cc);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b80cd:{NFSU2_TR(0x4b80cd);
__builtin_memmove((R+4),(R+24),4);
}
B4b80cf:{NFSU2_TR(0x4b80cf);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b80d3:{NFSU2_TR(0x4b80d3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b80d8ull));
TAIL_STATIC(0x54f170u,54f);
}
B4b80d8:L4b80d8:{c.instructions+=3;NFSU2_TR(0x4b80d8);
u8 U[4];
w4(U+0,u32(0x54ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b80da:{NFSU2_TR(0x4b80da);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x158ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b80e0:{NFSU2_TR(0x4b80e0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b80e5ull));
TAIL_STATIC(0x575620u,575);
}
B4b80e5:L4b80e5:{c.instructions+=7;NFSU2_TR(0x4b80e5);
__builtin_memmove((R+28),(R+0),4);
}
B4b80e7:{NFSU2_TR(0x4b80e7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4b80ea:{NFSU2_TR(0x4b80ea);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b80ee:{NFSU2_TR(0x4b80ee);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b80f0:{NFSU2_TR(0x4b80f0);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0xbull));
s4(u32(r4(U+0)),r4(U+4));
}
B4b80f8:{NFSU2_TR(0x4b80f8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4b80f9:{NFSU2_TR(0x4b80f9);
if(r1(R+518)){{goto L4b8128;}}
}
B4b80fb:L4b80fb:{c.instructions+=11;NFSU2_TR(0x4b80fb);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b80fd:{NFSU2_TR(0x4b80fd);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4b8103:{NFSU2_TR(0x4b8103);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b8104:{NFSU2_TR(0x4b8104);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+8),(U+0),4);
}
B4b810a:{NFSU2_TR(0x4b810a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b810b:{NFSU2_TR(0x4b810b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+0),(U+0),4);
}
B4b8111:{NFSU2_TR(0x4b8111);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b8112:{NFSU2_TR(0x4b8112);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+4),(U+0),4);
}
B4b8118:{NFSU2_TR(0x4b8118);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b8119:{NFSU2_TR(0x4b8119);
__builtin_memmove((R+4),(R+28),4);
}
B4b811b:{NFSU2_TR(0x4b811b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b8120ull));
TAIL_STATIC(0x51e230u,51e);
}
B4b8120:L4b8120:{c.instructions+=2;NFSU2_TR(0x4b8120);
u8 U[4];
w4(U+0,u32(0x794378ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4b8126:{NFSU2_TR(0x4b8126);
{goto L4b812a;}
}
B4b8128:L4b8128:{c.instructions+=1;NFSU2_TR(0x4b8128);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4b812a:L4b812a:{c.instructions+=5;NFSU2_TR(0x4b812a);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b812c:{NFSU2_TR(0x4b812c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b812d:{NFSU2_TR(0x4b812d);
__builtin_memmove((R+4),(R+24),4);
}
B4b812f:{NFSU2_TR(0x4b812f);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b8133:{NFSU2_TR(0x4b8133);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b8138ull));
TAIL_STATIC(0x54ef30u,54e);
}
B4b8138:L4b8138:{c.instructions+=4;NFSU2_TR(0x4b8138);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b813b:{NFSU2_TR(0x4b813b);
u8 U[4];
w4(U+0,u32(0xc90dc4abull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b8140:{NFSU2_TR(0x4b8140);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b8141:{NFSU2_TR(0x4b8141);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b8146ull));
TAIL_STATIC(0x5379c0u,537);
}
B4b8146:L4b8146:{c.instructions+=2;NFSU2_TR(0x4b8146);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b8147:{NFSU2_TR(0x4b8147);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b814cull));
TAIL_STATIC(0x50ca50u,50c);
}
B4b814c:L4b814c:{c.instructions+=5;NFSU2_TR(0x4b814c);
__builtin_memmove((R+0),gp(0x850078),4);
}
B4b8151:{NFSU2_TR(0x4b8151);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4b8154:{NFSU2_TR(0x4b8154);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4b8157:{NFSU2_TR(0x4b8157);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4b8158:{NFSU2_TR(0x4b8158);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b8179;}}
}
B4b815a:L4b815a:{c.instructions+=5;NFSU2_TR(0x4b815a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b815d:{NFSU2_TR(0x4b815d);
u8 U[4];
w4(U+0,u32(0xb0fcf98eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b8162:{NFSU2_TR(0x4b8162);
u8 U[4];
w4(U+0,u32(0xc90dc4abull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b8167:{NFSU2_TR(0x4b8167);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b8168:{NFSU2_TR(0x4b8168);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b816dull));
TAIL_STATIC(0x537a10u,537);
}
B4b816d:L4b816d:{c.instructions+=3;NFSU2_TR(0x4b816d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4b8170:{NFSU2_TR(0x4b8170);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b8171:{NFSU2_TR(0x4b8171);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b8176ull));
TAIL_STATIC(0x50c900u,50c);
}
B4b8176:L4b8176:{c.instructions+=1;NFSU2_TR(0x4b8176);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4b8179:L4b8179:{c.instructions+=8;NFSU2_TR(0x4b8179);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b817d:{NFSU2_TR(0x4b817d);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14eull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4b8184:{NFSU2_TR(0x4b8184);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
w4(U+4,u32(0xf35b6d7full));
s4(u32(r4(U+0)),r4(U+4));
}
B4b818b:{NFSU2_TR(0x4b818b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4b818c:{NFSU2_TR(0x4b818c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b818d:{NFSU2_TR(0x4b818d);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b8194:{NFSU2_TR(0x4b8194);
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
B4b8197:{NFSU2_TR(0x4b8197);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b81a0:L4b81a0:{c.instructions+=11;NFSU2_TR(0x4b81a0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b81a2:{NFSU2_TR(0x4b81a2);
u8 U[4];
w4(U+0,u32(0x7735e8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b81a7:{NFSU2_TR(0x4b81a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b81ad:{NFSU2_TR(0x4b81ad);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b81ae:{NFSU2_TR(0x4b81ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b81b5:{NFSU2_TR(0x4b81b5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b81b6:{NFSU2_TR(0x4b81b6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b81b7:{NFSU2_TR(0x4b81b7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b81b8:{NFSU2_TR(0x4b81b8);
u8 U[4];
w4(U+0,u32(0x54ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b81ba:{NFSU2_TR(0x4b81ba);
__builtin_memmove((R+24),(R+4),4);
}
B4b81bc:{NFSU2_TR(0x4b81bc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b81c1ull));
TAIL_STATIC(0x575620u,575);
}
B4b81c1:L4b81c1:{c.instructions+=6;NFSU2_TR(0x4b81c1);
__builtin_memmove((R+28),(R+0),4);
}
B4b81c3:{NFSU2_TR(0x4b81c3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4b81c6:{NFSU2_TR(0x4b81c6);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b81ca:{NFSU2_TR(0x4b81ca);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b81cc:{NFSU2_TR(0x4b81cc);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4b81d4:{NFSU2_TR(0x4b81d4);
if(r1(R+518)){{goto L4b8203;}}
}
B4b81d6:L4b81d6:{c.instructions+=11;NFSU2_TR(0x4b81d6);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b81d8:{NFSU2_TR(0x4b81d8);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((R+0),(U+0),4);
}
B4b81de:{NFSU2_TR(0x4b81de);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b81df:{NFSU2_TR(0x4b81df);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4b81e5:{NFSU2_TR(0x4b81e5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b81e6:{NFSU2_TR(0x4b81e6);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+8),(U+0),4);
}
B4b81ec:{NFSU2_TR(0x4b81ec);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b81ed:{NFSU2_TR(0x4b81ed);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+0),(U+0),4);
}
B4b81f3:{NFSU2_TR(0x4b81f3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b81f4:{NFSU2_TR(0x4b81f4);
__builtin_memmove((R+4),(R+28),4);
}
B4b81f6:{NFSU2_TR(0x4b81f6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b81fbull));
TAIL_STATIC(0x51e230u,51e);
}
B4b81fb:L4b81fb:{c.instructions+=2;NFSU2_TR(0x4b81fb);
u8 U[4];
w4(U+0,u32(0x791b70ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4b8201:{NFSU2_TR(0x4b8201);
{goto L4b8205;}
}
B4b8203:L4b8203:{c.instructions+=1;NFSU2_TR(0x4b8203);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4b8205:L4b8205:{c.instructions+=5;NFSU2_TR(0x4b8205);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b8207:{NFSU2_TR(0x4b8207);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b8208:{NFSU2_TR(0x4b8208);
__builtin_memmove((R+4),(R+24),4);
}
B4b820a:{NFSU2_TR(0x4b820a);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4b8212:{NFSU2_TR(0x4b8212);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b8217ull));
TAIL_STATIC(0x54ef30u,54e);
}
B4b8217:L4b8217:{c.instructions+=2;NFSU2_TR(0x4b8217);
u8 U[4];
w4(U+0,u32(0x54ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b8219:{NFSU2_TR(0x4b8219);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b821eull));
TAIL_STATIC(0x575620u,575);
}
B4b821e:L4b821e:{c.instructions+=6;NFSU2_TR(0x4b821e);
__builtin_memmove((R+28),(R+0),4);
}
B4b8220:{NFSU2_TR(0x4b8220);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4b8223:{NFSU2_TR(0x4b8223);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b8227:{NFSU2_TR(0x4b8227);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b8229:{NFSU2_TR(0x4b8229);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4b8231:{NFSU2_TR(0x4b8231);
if(r1(R+518)){{goto L4b8260;}}
}
B4b8233:L4b8233:{c.instructions+=11;NFSU2_TR(0x4b8233);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b8235:{NFSU2_TR(0x4b8235);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4b823b:{NFSU2_TR(0x4b823b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b823c:{NFSU2_TR(0x4b823c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+8),(U+0),4);
}
B4b8242:{NFSU2_TR(0x4b8242);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b8243:{NFSU2_TR(0x4b8243);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+0),(U+0),4);
}
B4b8249:{NFSU2_TR(0x4b8249);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b824a:{NFSU2_TR(0x4b824a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+4),(U+0),4);
}
B4b8250:{NFSU2_TR(0x4b8250);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b8251:{NFSU2_TR(0x4b8251);
__builtin_memmove((R+4),(R+28),4);
}
B4b8253:{NFSU2_TR(0x4b8253);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b8258ull));
TAIL_STATIC(0x51e230u,51e);
}
B4b8258:L4b8258:{c.instructions+=2;NFSU2_TR(0x4b8258);
u8 U[4];
w4(U+0,u32(0x791bb8ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4b825e:{NFSU2_TR(0x4b825e);
{goto L4b8262;}
}
B4b8260:L4b8260:{c.instructions+=1;NFSU2_TR(0x4b8260);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4b8262:L4b8262:{c.instructions+=5;NFSU2_TR(0x4b8262);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b8264:{NFSU2_TR(0x4b8264);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b8265:{NFSU2_TR(0x4b8265);
__builtin_memmove((R+4),(R+24),4);
}
B4b8267:{NFSU2_TR(0x4b8267);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4b826f:{NFSU2_TR(0x4b826f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b8274ull));
TAIL_STATIC(0x54ef30u,54e);
}
B4b8274:L4b8274:{c.instructions+=3;NFSU2_TR(0x4b8274);
u8 U[8];
__builtin_memmove((U+0),gp(0x850078),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x200ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4b827e:{NFSU2_TR(0x4b827e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b8281:{NFSU2_TR(0x4b8281);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b828a;}}
}
B4b8283:L4b8283:{c.instructions+=2;NFSU2_TR(0x4b8283);
u8 U[4];
w4(U+0,u32(0x19889765ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b8288:{NFSU2_TR(0x4b8288);
{goto L4b828f;}
}
B4b828a:L4b828a:{c.instructions+=1;NFSU2_TR(0x4b828a);
u8 U[4];
w4(U+0,u32(0x22b1c2e6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b828f:L4b828f:{c.instructions+=3;NFSU2_TR(0x4b828f);
u8 U[4];
w4(U+0,u32(0x42adb44cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b8294:{NFSU2_TR(0x4b8294);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b8295:{NFSU2_TR(0x4b8295);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b829aull));
TAIL_STATIC(0x537a10u,537);
}
B4b829a:L4b829a:{c.instructions+=3;NFSU2_TR(0x4b829a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4b829d:{NFSU2_TR(0x4b829d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b829e:{NFSU2_TR(0x4b829e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b82a3ull));
TAIL_STATIC(0x50c900u,50c);
}
B4b82a3:L4b82a3:{c.instructions+=8;NFSU2_TR(0x4b82a3);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b82a7:{NFSU2_TR(0x4b82a7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4b82aa:{NFSU2_TR(0x4b82aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
w4(U+4,u32(0xe683c971ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4b82b1:{NFSU2_TR(0x4b82b1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4b82b2:{NFSU2_TR(0x4b82b2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b82b3:{NFSU2_TR(0x4b82b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b82ba:{NFSU2_TR(0x4b82ba);
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
B4b82bd:{NFSU2_TR(0x4b82bd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b82c0:L4b82c0:{c.instructions+=4;NFSU2_TR(0x4b82c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b82c3:{NFSU2_TR(0x4b82c3);
u8 U[4];
w4(U+0,u32(0x7944c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b82c8:{NFSU2_TR(0x4b82c8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b82c9:{NFSU2_TR(0x4b82c9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b82ceull));
TAIL_STATIC(0x537be0u,537);
}
B4b82ce:L4b82ce:{c.instructions+=2;NFSU2_TR(0x4b82ce);
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
B4b82d1:{NFSU2_TR(0x4b82d1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b82e0:L4b82e0:{c.instructions+=4;NFSU2_TR(0x4b82e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b82e3:{NFSU2_TR(0x4b82e3);
u8 U[4];
w4(U+0,u32(0x794508ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b82e8:{NFSU2_TR(0x4b82e8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b82e9:{NFSU2_TR(0x4b82e9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b82eeull));
TAIL_STATIC(0x537be0u,537);
}
B4b82ee:L4b82ee:{c.instructions+=2;NFSU2_TR(0x4b82ee);
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
B4b82f1:{NFSU2_TR(0x4b82f1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b8300:L4b8300:{c.instructions+=2;NFSU2_TR(0x4b8300);
u8 U[22];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0xc407210ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0xc407210ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0xc407210ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B4b8308:{NFSU2_TR(0x4b8308);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b832d;}}
}
B4b830a:L4b830a:{c.instructions+=7;NFSU2_TR(0x4b830a);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b830e:{NFSU2_TR(0x4b830e);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b8310:{NFSU2_TR(0x4b8310);
u8 U[4];
w4(U+0,u32(0x78f5b8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b8315:{NFSU2_TR(0x4b8315);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b831a:{NFSU2_TR(0x4b831a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b831b:{NFSU2_TR(0x4b831b);
s4(0x7f4480,u32(0x7944c0ull));
}
B4b8325:{NFSU2_TR(0x4b8325);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b832aull));
TAIL_STATIC(0x537c00u,537);
}
B4b832a:L4b832a:{c.instructions+=1;NFSU2_TR(0x4b832a);
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
B4b832d:L4b832d:{c.instructions+=1;NFSU2_TR(0x4b832d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b8330:L4b8330:{c.instructions+=4;NFSU2_TR(0x4b8330);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b8333:{NFSU2_TR(0x4b8333);
u8 U[4];
w4(U+0,u32(0x794558ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b8338:{NFSU2_TR(0x4b8338);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b8339:{NFSU2_TR(0x4b8339);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b833eull));
TAIL_STATIC(0x537be0u,537);
}
B4b833e:L4b833e:{c.instructions+=2;NFSU2_TR(0x4b833e);
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
B4b8341:{NFSU2_TR(0x4b8341);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b8350:L4b8350:{c.instructions+=11;NFSU2_TR(0x4b8350);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b8352:{NFSU2_TR(0x4b8352);
u8 U[4];
w4(U+0,u32(0x77363cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b8357:{NFSU2_TR(0x4b8357);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b835d:{NFSU2_TR(0x4b835d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b835e:{NFSU2_TR(0x4b835e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b8365:{NFSU2_TR(0x4b8365);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b8366:{NFSU2_TR(0x4b8366);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b8367:{NFSU2_TR(0x4b8367);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b8368:{NFSU2_TR(0x4b8368);
u8 U[4];
w4(U+0,u32(0x38ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b836a:{NFSU2_TR(0x4b836a);
__builtin_memmove((R+24),(R+4),4);
}
B4b836c:{NFSU2_TR(0x4b836c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b8371ull));
TAIL_STATIC(0x575620u,575);
}
B4b8371:L4b8371:{c.instructions+=6;NFSU2_TR(0x4b8371);
__builtin_memmove((R+28),(R+0),4);
}
B4b8373:{NFSU2_TR(0x4b8373);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4b8376:{NFSU2_TR(0x4b8376);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b837a:{NFSU2_TR(0x4b837a);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b837c:{NFSU2_TR(0x4b837c);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4b8384:{NFSU2_TR(0x4b8384);
if(r1(R+518)){{goto L4b83a5;}}
}
B4b8386:L4b8386:{c.instructions+=7;NFSU2_TR(0x4b8386);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b8388:{NFSU2_TR(0x4b8388);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+0),(U+0),4);
}
B4b838e:{NFSU2_TR(0x4b838e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b838f:{NFSU2_TR(0x4b838f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+4),(U+0),4);
}
B4b8395:{NFSU2_TR(0x4b8395);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b8396:{NFSU2_TR(0x4b8396);
__builtin_memmove((R+4),(R+28),4);
}
B4b8398:{NFSU2_TR(0x4b8398);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b839dull));
TAIL_STATIC(0x51dfc0u,51d);
}
B4b839d:L4b839d:{c.instructions+=2;NFSU2_TR(0x4b839d);
u8 U[4];
w4(U+0,u32(0x794480ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4b83a3:{NFSU2_TR(0x4b83a3);
{goto L4b83a7;}
}
B4b83a5:L4b83a5:{c.instructions+=1;NFSU2_TR(0x4b83a5);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4b83a7:L4b83a7:{c.instructions+=4;NFSU2_TR(0x4b83a7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b83a8:{NFSU2_TR(0x4b83a8);
__builtin_memmove((R+4),(R+24),4);
}
B4b83aa:{NFSU2_TR(0x4b83aa);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4b83b2:{NFSU2_TR(0x4b83b2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b83b7ull));
TAIL_STATIC(0x54ee40u,54e);
}
B4b83b7:L4b83b7:{c.instructions+=2;NFSU2_TR(0x4b83b7);
u8 U[4];
w4(U+0,u32(0x38ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b83b9:{NFSU2_TR(0x4b83b9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b83beull));
TAIL_STATIC(0x575620u,575);
}
B4b83be:L4b83be:{c.instructions+=6;NFSU2_TR(0x4b83be);
__builtin_memmove((R+28),(R+0),4);
}
B4b83c0:{NFSU2_TR(0x4b83c0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4b83c3:{NFSU2_TR(0x4b83c3);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b83c7:{NFSU2_TR(0x4b83c7);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b83c9:{NFSU2_TR(0x4b83c9);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4b83d1:{NFSU2_TR(0x4b83d1);
if(r1(R+518)){{goto L4b83f2;}}
}
B4b83d3:L4b83d3:{c.instructions+=7;NFSU2_TR(0x4b83d3);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b83d5:{NFSU2_TR(0x4b83d5);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+8),(U+0),4);
}
B4b83db:{NFSU2_TR(0x4b83db);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b83dc:{NFSU2_TR(0x4b83dc);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+0),(U+0),4);
}
B4b83e2:{NFSU2_TR(0x4b83e2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b83e3:{NFSU2_TR(0x4b83e3);
__builtin_memmove((R+4),(R+28),4);
}
B4b83e5:{NFSU2_TR(0x4b83e5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b83eaull));
TAIL_STATIC(0x51dfc0u,51d);
}
B4b83ea:L4b83ea:{c.instructions+=2;NFSU2_TR(0x4b83ea);
u8 U[4];
w4(U+0,u32(0x7944c8ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4b83f0:{NFSU2_TR(0x4b83f0);
{goto L4b83f4;}
}
B4b83f2:L4b83f2:{c.instructions+=1;NFSU2_TR(0x4b83f2);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4b83f4:L4b83f4:{c.instructions+=4;NFSU2_TR(0x4b83f4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b83f5:{NFSU2_TR(0x4b83f5);
__builtin_memmove((R+4),(R+24),4);
}
B4b83f7:{NFSU2_TR(0x4b83f7);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4b83ff:{NFSU2_TR(0x4b83ff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b8404ull));
TAIL_STATIC(0x54ee40u,54e);
}
B4b8404:L4b8404:{c.instructions+=2;NFSU2_TR(0x4b8404);
u8 U[4];
w4(U+0,u32(0x38ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b8406:{NFSU2_TR(0x4b8406);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b840bull));
TAIL_STATIC(0x575620u,575);
}
B4b840b:L4b840b:{c.instructions+=6;NFSU2_TR(0x4b840b);
__builtin_memmove((R+28),(R+0),4);
}
B4b840d:{NFSU2_TR(0x4b840d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4b8410:{NFSU2_TR(0x4b8410);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b8414:{NFSU2_TR(0x4b8414);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b8416:{NFSU2_TR(0x4b8416);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4b841e:{NFSU2_TR(0x4b841e);
if(r1(R+518)){{goto L4b843f;}}
}
B4b8420:L4b8420:{c.instructions+=7;NFSU2_TR(0x4b8420);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b8422:{NFSU2_TR(0x4b8422);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4b8428:{NFSU2_TR(0x4b8428);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b8429:{NFSU2_TR(0x4b8429);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+8),(U+0),4);
}
B4b842f:{NFSU2_TR(0x4b842f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b8430:{NFSU2_TR(0x4b8430);
__builtin_memmove((R+4),(R+28),4);
}
B4b8432:{NFSU2_TR(0x4b8432);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b8437ull));
TAIL_STATIC(0x51dfc0u,51d);
}
B4b8437:L4b8437:{c.instructions+=2;NFSU2_TR(0x4b8437);
u8 U[4];
w4(U+0,u32(0x794518ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4b843d:{NFSU2_TR(0x4b843d);
{goto L4b8441;}
}
B4b843f:L4b843f:{c.instructions+=1;NFSU2_TR(0x4b843f);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4b8441:L4b8441:{c.instructions+=4;NFSU2_TR(0x4b8441);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b8442:{NFSU2_TR(0x4b8442);
__builtin_memmove((R+4),(R+24),4);
}
B4b8444:{NFSU2_TR(0x4b8444);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4b844c:{NFSU2_TR(0x4b844c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b8451ull));
TAIL_STATIC(0x54ee40u,54e);
}
B4b8451:L4b8451:{c.instructions+=6;NFSU2_TR(0x4b8451);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b8455:{NFSU2_TR(0x4b8455);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4b8456:{NFSU2_TR(0x4b8456);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b8457:{NFSU2_TR(0x4b8457);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b845e:{NFSU2_TR(0x4b845e);
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
B4b8461:{NFSU2_TR(0x4b8461);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b8470:L4b8470:{c.instructions+=7;NFSU2_TR(0x4b8470);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b8471:{NFSU2_TR(0x4b8471);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b8472:{NFSU2_TR(0x4b8472);
__builtin_memmove((R+24),(R+4),4);
}
B4b8474:{NFSU2_TR(0x4b8474);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b8477:{NFSU2_TR(0x4b8477);
u8 U[4];
w4(U+0,u32(0x10cba23ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b847c:{NFSU2_TR(0x4b847c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b847d:{NFSU2_TR(0x4b847d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b8482ull));
TAIL_STATIC(0x5379c0u,537);
}
B4b8482:L4b8482:{c.instructions+=2;NFSU2_TR(0x4b8482);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b8483:{NFSU2_TR(0x4b8483);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b8488ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4b8488:L4b8488:{c.instructions+=4;NFSU2_TR(0x4b8488);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b848b:{NFSU2_TR(0x4b848b);
u8 U[4];
w4(U+0,u32(0x97b71ddeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b8490:{NFSU2_TR(0x4b8490);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b8491:{NFSU2_TR(0x4b8491);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b8496ull));
TAIL_STATIC(0x5379c0u,537);
}
B4b8496:L4b8496:{c.instructions+=2;NFSU2_TR(0x4b8496);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b8497:{NFSU2_TR(0x4b8497);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b849cull));
TAIL_STATIC(0x50ca00u,50c);
}
B4b849c:L4b849c:{c.instructions+=4;NFSU2_TR(0x4b849c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b849f:{NFSU2_TR(0x4b849f);
u8 U[4];
w4(U+0,u32(0x7326e44cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b84a4:{NFSU2_TR(0x4b84a4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b84a5:{NFSU2_TR(0x4b84a5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b84aaull));
TAIL_STATIC(0x5379c0u,537);
}
B4b84aa:L4b84aa:{c.instructions+=2;NFSU2_TR(0x4b84aa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b84ab:{NFSU2_TR(0x4b84ab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b84b0ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4b84b0:L4b84b0:{c.instructions+=4;NFSU2_TR(0x4b84b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b84b3:{NFSU2_TR(0x4b84b3);
u8 U[4];
w4(U+0,u32(0xc90dc4abull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b84b8:{NFSU2_TR(0x4b84b8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b84b9:{NFSU2_TR(0x4b84b9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b84beull));
TAIL_STATIC(0x5379c0u,537);
}
B4b84be:L4b84be:{c.instructions+=2;NFSU2_TR(0x4b84be);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b84bf:{NFSU2_TR(0x4b84bf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b84c4ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4b84c4:L4b84c4:{c.instructions+=4;NFSU2_TR(0x4b84c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4b84c7:{NFSU2_TR(0x4b84c7);
u8 U[4];
w4(U+0,u32(0x7945b4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b84cc:{NFSU2_TR(0x4b84cc);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14cull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4b84d3:{NFSU2_TR(0x4b84d3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b84d8ull));
TAIL_STATIC(0x505450u,505);
}
B4b84d8:L4b84d8:{c.instructions+=3;NFSU2_TR(0x4b84d8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b84d9:{NFSU2_TR(0x4b84d9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b84da:{NFSU2_TR(0x4b84da);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b84dfull));
TAIL_STATIC(0x5379c0u,537);
}
B4b84df:L4b84df:{c.instructions+=2;NFSU2_TR(0x4b84df);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b84e0:{NFSU2_TR(0x4b84e0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b84e5ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4b84e5:L4b84e5:{c.instructions+=4;NFSU2_TR(0x4b84e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4b84e8:{NFSU2_TR(0x4b84e8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x40ull))));
}
B4b84eb:{NFSU2_TR(0x4b84eb);
u8 U[4];
w4(U+0,u32(0x7945a4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b84f0:{NFSU2_TR(0x4b84f0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b84f5ull));
TAIL_STATIC(0x505450u,505);
}
B4b84f5:L4b84f5:{c.instructions+=3;NFSU2_TR(0x4b84f5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b84f6:{NFSU2_TR(0x4b84f6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b84f7:{NFSU2_TR(0x4b84f7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b84fcull));
TAIL_STATIC(0x5379c0u,537);
}
B4b84fc:L4b84fc:{c.instructions+=2;NFSU2_TR(0x4b84fc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b84fd:{NFSU2_TR(0x4b84fd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b8502ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4b8502:L4b8502:{c.instructions+=3;NFSU2_TR(0x4b8502);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4b8505:{NFSU2_TR(0x4b8505);
u8 U[4];
w4(U+0,u32(0x794588ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b850a:{NFSU2_TR(0x4b850a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b850full));
TAIL_STATIC(0x505450u,505);
}
B4b850f:L4b850f:{c.instructions+=3;NFSU2_TR(0x4b850f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b8510:{NFSU2_TR(0x4b8510);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b8511:{NFSU2_TR(0x4b8511);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b8516ull));
TAIL_STATIC(0x5379c0u,537);
}
B4b8516:L4b8516:{c.instructions+=2;NFSU2_TR(0x4b8516);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b8517:{NFSU2_TR(0x4b8517);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b851cull));
TAIL_STATIC(0x50ca00u,50c);
}
B4b851c:L4b851c:{c.instructions+=4;NFSU2_TR(0x4b851c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b851f:{NFSU2_TR(0x4b851f);
u8 U[4];
w4(U+0,u32(0x444969fdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b8524:{NFSU2_TR(0x4b8524);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b8525:{NFSU2_TR(0x4b8525);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b852aull));
TAIL_STATIC(0x5379c0u,537);
}
B4b852a:L4b852a:{c.instructions+=2;NFSU2_TR(0x4b852a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b852b:{NFSU2_TR(0x4b852b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b8530ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4b8530:L4b8530:{c.instructions+=4;NFSU2_TR(0x4b8530);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b8533:{NFSU2_TR(0x4b8533);
u8 U[4];
w4(U+0,u32(0x444969feull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b8538:{NFSU2_TR(0x4b8538);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b8539:{NFSU2_TR(0x4b8539);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b853eull));
TAIL_STATIC(0x5379c0u,537);
}
B4b853e:L4b853e:{c.instructions+=2;NFSU2_TR(0x4b853e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b853f:{NFSU2_TR(0x4b853f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b8544ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4b8544:L4b8544:{c.instructions+=4;NFSU2_TR(0x4b8544);
__builtin_memmove((R+0),gp(0x83aa04),4);
}
B4b8549:{NFSU2_TR(0x4b8549);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x38ull))));
}
B4b854c:{NFSU2_TR(0x4b854c);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x7ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x7ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x7ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4b854f:{NFSU2_TR(0x4b854f);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4b85ed;}}
}
B4b8555:L4b8555:{c.instructions+=1;NFSU2_TR(0x4b8555);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x4b85fcull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4b855c:L4b855c:{c.instructions+=2;NFSU2_TR(0x4b855c);
__builtin_memmove((R+4),(R+24),4);
}
B4b855e:{NFSU2_TR(0x4b855e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b8563ull));
TAIL_STATIC(0x4b6e60u,4b6);
}
B4b8563:L4b8563:{c.instructions+=3;NFSU2_TR(0x4b8563);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b8565:{NFSU2_TR(0x4b8565);
__builtin_memmove((R+4),(R+24),4);
}
B4b8567:{NFSU2_TR(0x4b8567);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b856cull));
TAIL_STATIC(0x539650u,539);
}
B4b856c:L4b856c:{c.instructions+=3;NFSU2_TR(0x4b856c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4b856d:{NFSU2_TR(0x4b856d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b856e:{NFSU2_TR(0x4b856e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b856f:L4b856f:{c.instructions+=2;NFSU2_TR(0x4b856f);
__builtin_memmove((R+4),(R+24),4);
}
B4b8571:{NFSU2_TR(0x4b8571);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b8576ull));
TAIL_STATIC(0x4b7180u,4b7);
}
B4b8576:L4b8576:{c.instructions+=3;NFSU2_TR(0x4b8576);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b8578:{NFSU2_TR(0x4b8578);
__builtin_memmove((R+4),(R+24),4);
}
B4b857a:{NFSU2_TR(0x4b857a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b857full));
TAIL_STATIC(0x539650u,539);
}
B4b857f:L4b857f:{c.instructions+=3;NFSU2_TR(0x4b857f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4b8580:{NFSU2_TR(0x4b8580);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b8581:{NFSU2_TR(0x4b8581);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b8582:L4b8582:{c.instructions+=2;NFSU2_TR(0x4b8582);
__builtin_memmove((R+4),(R+24),4);
}
B4b8584:{NFSU2_TR(0x4b8584);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b8589ull));
TAIL_STATIC(0x4b7310u,4b7);
}
B4b8589:L4b8589:{c.instructions+=3;NFSU2_TR(0x4b8589);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b858b:{NFSU2_TR(0x4b858b);
__builtin_memmove((R+4),(R+24),4);
}
B4b858d:{NFSU2_TR(0x4b858d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b8592ull));
TAIL_STATIC(0x539650u,539);
}
B4b8592:L4b8592:{c.instructions+=3;NFSU2_TR(0x4b8592);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4b8593:{NFSU2_TR(0x4b8593);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b8594:{NFSU2_TR(0x4b8594);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b8595:L4b8595:{c.instructions+=2;NFSU2_TR(0x4b8595);
__builtin_memmove((R+4),(R+24),4);
}
B4b8597:{NFSU2_TR(0x4b8597);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b859cull));
TAIL_STATIC(0x4b7cd0u,4b7);
}
B4b859c:L4b859c:{c.instructions+=4;NFSU2_TR(0x4b859c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b859f:{NFSU2_TR(0x4b859f);
u8 U[4];
w4(U+0,u32(0x444969fdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b85a4:{NFSU2_TR(0x4b85a4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b85a5:{NFSU2_TR(0x4b85a5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b85aaull));
TAIL_STATIC(0x5379c0u,537);
}
B4b85aa:L4b85aa:{c.instructions+=2;NFSU2_TR(0x4b85aa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b85ab:{NFSU2_TR(0x4b85ab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b85b0ull));
TAIL_STATIC(0x50ca50u,50c);
}
B4b85b0:L4b85b0:{c.instructions+=4;NFSU2_TR(0x4b85b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b85b3:{NFSU2_TR(0x4b85b3);
u8 U[4];
w4(U+0,u32(0x444969feull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b85b8:{NFSU2_TR(0x4b85b8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b85b9:{NFSU2_TR(0x4b85b9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b85beull));
TAIL_STATIC(0x5379c0u,537);
}
B4b85be:L4b85be:{c.instructions+=2;NFSU2_TR(0x4b85be);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b85bf:{NFSU2_TR(0x4b85bf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b85c4ull));
TAIL_STATIC(0x50ca50u,50c);
}
B4b85c4:L4b85c4:{c.instructions+=4;NFSU2_TR(0x4b85c4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B4b85c7:{NFSU2_TR(0x4b85c7);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b85c9:{NFSU2_TR(0x4b85c9);
__builtin_memmove((R+4),(R+24),4);
}
B4b85cb:{NFSU2_TR(0x4b85cb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b85d0ull));
TAIL_STATIC(0x539650u,539);
}
B4b85d0:L4b85d0:{c.instructions+=3;NFSU2_TR(0x4b85d0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4b85d1:{NFSU2_TR(0x4b85d1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b85d2:{NFSU2_TR(0x4b85d2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b85d3:L4b85d3:{c.instructions+=2;NFSU2_TR(0x4b85d3);
__builtin_memmove((R+4),(R+24),4);
}
B4b85d5:{NFSU2_TR(0x4b85d5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b85daull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4b81a0u);}goto L4b81a0;}
}
B4b85da:L4b85da:{c.instructions+=3;NFSU2_TR(0x4b85da);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b85dc:{NFSU2_TR(0x4b85dc);
__builtin_memmove((R+4),(R+24),4);
}
B4b85de:{NFSU2_TR(0x4b85de);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b85e3ull));
TAIL_STATIC(0x539650u,539);
}
B4b85e3:L4b85e3:{c.instructions+=3;NFSU2_TR(0x4b85e3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4b85e4:{NFSU2_TR(0x4b85e4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b85e5:{NFSU2_TR(0x4b85e5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b85e6:L4b85e6:{c.instructions+=2;NFSU2_TR(0x4b85e6);
__builtin_memmove((R+4),(R+24),4);
}
B4b85e8:{NFSU2_TR(0x4b85e8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b85edull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4b8350u);}goto L4b8350;}
}
B4b85ed:L4b85ed:{c.instructions+=3;NFSU2_TR(0x4b85ed);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b85ef:{NFSU2_TR(0x4b85ef);
__builtin_memmove((R+4),(R+24),4);
}
B4b85f1:{NFSU2_TR(0x4b85f1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b85f6ull));
TAIL_STATIC(0x539650u,539);
}
B4b85f6:L4b85f6:{c.instructions+=3;NFSU2_TR(0x4b85f6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4b85f7:{NFSU2_TR(0x4b85f7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b85f8:{NFSU2_TR(0x4b85f8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b8620:L4b8620:{c.instructions+=12;NFSU2_TR(0x4b8620);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b8622:{NFSU2_TR(0x4b8622);
u8 U[4];
w4(U+0,u32(0x776418ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b8627:{NFSU2_TR(0x4b8627);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b862d:{NFSU2_TR(0x4b862d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b862e:{NFSU2_TR(0x4b862e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b8635:{NFSU2_TR(0x4b8635);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b8636:{NFSU2_TR(0x4b8636);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b863a:{NFSU2_TR(0x4b863a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b863b:{NFSU2_TR(0x4b863b);
__builtin_memmove((R+24),(R+4),4);
}
B4b863d:{NFSU2_TR(0x4b863d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b863e:{NFSU2_TR(0x4b863e);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b8642:{NFSU2_TR(0x4b8642);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b8647ull));
TAIL_STATIC(0x551de0u,551);
}
B4b8647:L4b8647:{c.instructions+=4;NFSU2_TR(0x4b8647);
u8 U[4];
w4(U+0,u32(0x78fcd8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b864c:{NFSU2_TR(0x4b864c);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4b8654:{NFSU2_TR(0x4b8654);
u8 U[4];
w4(U+0,u32(0x7945c4ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4b865a:{NFSU2_TR(0x4b865a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b865full));
TAIL_STATIC(0x52cf60u,52c);
}
B4b865f:L4b865f:{c.instructions+=3;NFSU2_TR(0x4b865f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4b8662:{NFSU2_TR(0x4b8662);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4b8664:{NFSU2_TR(0x4b8664);
if(r1(R+518)){{goto L4b8673;}}
}
B4b8666:L4b8666:{c.instructions+=2;NFSU2_TR(0x4b8666);
u8 U[4];
w4(U+0,u32(0x78fcd8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b866b:{NFSU2_TR(0x4b866b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b8670ull));
TAIL_STATIC(0x5379a0u,537);
}
B4b8670:L4b8670:{c.instructions+=1;NFSU2_TR(0x4b8670);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4b8673:L4b8673:{c.instructions+=6;NFSU2_TR(0x4b8673);
__builtin_memmove((R+4),gp(0x7f4480),4);
}
B4b8679:{NFSU2_TR(0x4b8679);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b867c:{NFSU2_TR(0x4b867c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b867d:{NFSU2_TR(0x4b867d);
u8 U[4];
w4(U+0,u32(0x4f7fd471ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b8682:{NFSU2_TR(0x4b8682);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b8683:{NFSU2_TR(0x4b8683);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b8688ull));
TAIL_STATIC(0x5379c0u,537);
}
B4b8688:L4b8688:{c.instructions+=3;NFSU2_TR(0x4b8688);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4b868b:{NFSU2_TR(0x4b868b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b868c:{NFSU2_TR(0x4b868c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b8691ull));
TAIL_STATIC(0x50c9b0u,50c);
}
B4b8691:L4b8691:{c.instructions+=7;NFSU2_TR(0x4b8691);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b8695:{NFSU2_TR(0x4b8695);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4b8698:{NFSU2_TR(0x4b8698);
__builtin_memmove((R+0),(R+24),4);
}
B4b869a:{NFSU2_TR(0x4b869a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b869b:{NFSU2_TR(0x4b869b);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b86a2:{NFSU2_TR(0x4b86a2);
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
B4b86a5:{NFSU2_TR(0x4b86a5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b86b0:L4b86b0:{c.instructions+=13;NFSU2_TR(0x4b86b0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b86b2:{NFSU2_TR(0x4b86b2);
u8 U[4];
w4(U+0,u32(0x776418ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b86b7:{NFSU2_TR(0x4b86b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b86bd:{NFSU2_TR(0x4b86bd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b86be:{NFSU2_TR(0x4b86be);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b86c5:{NFSU2_TR(0x4b86c5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b86c6:{NFSU2_TR(0x4b86c6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b86c7:{NFSU2_TR(0x4b86c7);
__builtin_memmove((R+24),(R+4),4);
}
B4b86c9:{NFSU2_TR(0x4b86c9);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b86cd:{NFSU2_TR(0x4b86cd);
u8 U[4];
w4(U+0,u32(0x7945c4ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4b86d3:{NFSU2_TR(0x4b86d3);
u8 U[4];
w4(U+0,u32(0x78fcd8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b86d8:{NFSU2_TR(0x4b86d8);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4b86e0:{NFSU2_TR(0x4b86e0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b86e5ull));
TAIL_STATIC(0x52cf60u,52c);
}
B4b86e5:L4b86e5:{c.instructions+=3;NFSU2_TR(0x4b86e5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4b86e8:{NFSU2_TR(0x4b86e8);
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
B4b86ea:{NFSU2_TR(0x4b86ea);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b8701;}}
}
B4b86ec:L4b86ec:{c.instructions+=6;NFSU2_TR(0x4b86ec);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b86ee:{NFSU2_TR(0x4b86ee);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b86f0:{NFSU2_TR(0x4b86f0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b86f2:{NFSU2_TR(0x4b86f2);
u8 U[4];
w4(U+0,u32(0x78fcd8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b86f7:{NFSU2_TR(0x4b86f7);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b86f9:{NFSU2_TR(0x4b86f9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b86feull));
TAIL_STATIC(0x555f50u,555);
}
B4b86fe:L4b86fe:{c.instructions+=1;NFSU2_TR(0x4b86fe);
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
B4b8701:L4b8701:{c.instructions+=3;NFSU2_TR(0x4b8701);
__builtin_memmove((R+4),(R+24),4);
}
B4b8703:{NFSU2_TR(0x4b8703);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4b870b:{NFSU2_TR(0x4b870b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b8710ull));
TAIL_STATIC(0x510d40u,510);
}
B4b8710:L4b8710:{c.instructions+=5;NFSU2_TR(0x4b8710);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b8714:{NFSU2_TR(0x4b8714);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b8715:{NFSU2_TR(0x4b8715);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b871c:{NFSU2_TR(0x4b871c);
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
B4b871f:{NFSU2_TR(0x4b871f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b8720:L4b8720:{c.instructions+=8;NFSU2_TR(0x4b8720);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b8722:{NFSU2_TR(0x4b8722);
u8 U[4];
w4(U+0,u32(0x773664ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b8727:{NFSU2_TR(0x4b8727);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b872d:{NFSU2_TR(0x4b872d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b872e:{NFSU2_TR(0x4b872e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b8735:{NFSU2_TR(0x4b8735);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b8736:{NFSU2_TR(0x4b8736);
u8 U[4];
w4(U+0,u32(0x68ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b8738:{NFSU2_TR(0x4b8738);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b873dull));
TAIL_STATIC(0x575620u,575);
}
B4b873d:L4b873d:{c.instructions+=5;NFSU2_TR(0x4b873d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4b8740:{NFSU2_TR(0x4b8740);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B4b8744:{NFSU2_TR(0x4b8744);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b8746:{NFSU2_TR(0x4b8746);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4b874e:{NFSU2_TR(0x4b874e);
if(r1(R+518)){{goto L4b876b;}}
}
B4b8750:L4b8750:{c.instructions+=4;NFSU2_TR(0x4b8750);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b8754:{NFSU2_TR(0x4b8754);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b8755:{NFSU2_TR(0x4b8755);
__builtin_memmove((R+4),(R+0),4);
}
B4b8757:{NFSU2_TR(0x4b8757);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b875cull));
TAIL_STATIC(0x49c9f0u,49c);
}
B4b875c:L4b875c:{c.instructions+=4;NFSU2_TR(0x4b875c);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b8760:{NFSU2_TR(0x4b8760);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b8767:{NFSU2_TR(0x4b8767);
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
B4b876a:{NFSU2_TR(0x4b876a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b876b:L4b876b:{c.instructions+=5;NFSU2_TR(0x4b876b);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b876f:{NFSU2_TR(0x4b876f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4b8771:{NFSU2_TR(0x4b8771);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b8778:{NFSU2_TR(0x4b8778);
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
B4b877b:{NFSU2_TR(0x4b877b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b8780:L4b8780:{c.instructions+=3;NFSU2_TR(0x4b8780);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b8781:{NFSU2_TR(0x4b8781);
__builtin_memmove((R+24),(R+4),4);
}
B4b8783:{NFSU2_TR(0x4b8783);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b8788ull));
TAIL_STATIC(0x49ca70u,49c);
}
B4b8788:L4b8788:{c.instructions+=2;NFSU2_TR(0x4b8788);
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
B4b878d:{NFSU2_TR(0x4b878d);
if(r1(R+518)){{goto L4b8798;}}
}
B4b878f:L4b878f:{c.instructions+=2;NFSU2_TR(0x4b878f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b8790:{NFSU2_TR(0x4b8790);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b8795ull));
TAIL_STATIC(0x575630u,575);
}
B4b8795:L4b8795:{c.instructions+=1;NFSU2_TR(0x4b8795);
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
B4b8798:L4b8798:{c.instructions+=3;NFSU2_TR(0x4b8798);
__builtin_memmove((R+0),(R+24),4);
}
B4b879a:{NFSU2_TR(0x4b879a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b879b:{NFSU2_TR(0x4b879b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b87a0:L4b87a0:{c.instructions+=9;NFSU2_TR(0x4b87a0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b87a4:{NFSU2_TR(0x4b87a4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x20ull))));
}
B4b87a7:{NFSU2_TR(0x4b87a7);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0xc98356baull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xc98356baull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b87ac:{NFSU2_TR(0x4b87ac);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b87ad:{NFSU2_TR(0x4b87ad);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b87ae:{NFSU2_TR(0x4b87ae);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b87af:{NFSU2_TR(0x4b87af);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b87b0:{NFSU2_TR(0x4b87b0);
__builtin_memmove((R+24),(R+4),4);
}
B4b87b2:{NFSU2_TR(0x4b87b2);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4b88a2;}}
}
B4b87b8:L4b87b8:{c.instructions+=1;NFSU2_TR(0x4b87b8);
if(r1(R+518)){{goto L4b8953;}}
}
B4b87be:L4b87be:{c.instructions+=2;NFSU2_TR(0x4b87be);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x29161540ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b87c3:{NFSU2_TR(0x4b87c3);
if(r1(R+518)){{goto L4b8891;}}
}
B4b87c9:L4b87c9:{c.instructions+=2;NFSU2_TR(0x4b87c9);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x35f8620bull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x35f8620bull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x35f8620bull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4b87ce:{NFSU2_TR(0x4b87ce);
if(r1(R+518)){{goto L4b87f8;}}
}
B4b87d0:L4b87d0:{c.instructions+=2;NFSU2_TR(0x4b87d0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x911ab364ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b87d5:{NFSU2_TR(0x4b87d5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b8998;}}
}
B4b87db:L4b87db:{c.instructions+=5;NFSU2_TR(0x4b87db);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b87de:{NFSU2_TR(0x4b87de);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b87e0:{NFSU2_TR(0x4b87e0);
u8 U[4];
w4(U+0,u32(0x78fa3cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b87e5:{NFSU2_TR(0x4b87e5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b87e6:{NFSU2_TR(0x4b87e6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b87ebull));
TAIL_STATIC(0x537980u,537);
}
B4b87eb:L4b87eb:{c.instructions+=7;NFSU2_TR(0x4b87eb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4b87ee:{NFSU2_TR(0x4b87ee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4b87ef:{NFSU2_TR(0x4b87ef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b87f0:{NFSU2_TR(0x4b87f0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4b87f1:{NFSU2_TR(0x4b87f1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4b87f2:{NFSU2_TR(0x4b87f2);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x20ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x20ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4b87f5:{NFSU2_TR(0x4b87f5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b87f8:L4b87f8:{c.instructions+=1;NFSU2_TR(0x4b87f8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b87fdull));
TAIL_STATIC(0x4ff970u,4ff);
}
B4b87fd:L4b87fd:{c.instructions+=2;NFSU2_TR(0x4b87fd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b87fe:{NFSU2_TR(0x4b87fe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b8803ull));
TAIL_STATIC(0x4ff640u,4ff);
}
B4b8803:L4b8803:{c.instructions+=4;NFSU2_TR(0x4b8803);
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
B4b8806:{NFSU2_TR(0x4b8806);
__builtin_memmove((R+12),(R+0),4);
}
B4b8808:{NFSU2_TR(0x4b8808);
w4(R+28,u32(0x783fe5ull));
}
B4b880d:{NFSU2_TR(0x4b880d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b8812ull));
TAIL_STATIC(0x4ff970u,4ff);
}
B4b8812:L4b8812:{c.instructions+=2;NFSU2_TR(0x4b8812);
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
B4b8814:{NFSU2_TR(0x4b8814);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b883b;}}
}
B4b8816:L4b8816:{c.instructions+=1;NFSU2_TR(0x4b8816);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b881bull));
TAIL_STATIC(0x570a30u,570);
}
B4b881b:L4b881b:{c.instructions+=2;NFSU2_TR(0x4b881b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b881d:{NFSU2_TR(0x4b881d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b8826;}}
}
B4b881f:L4b881f:{c.instructions+=2;NFSU2_TR(0x4b881f);
w4(R+28,u32(0x79461cull));
}
B4b8824:{NFSU2_TR(0x4b8824);
{goto L4b883b;}
}
B4b8826:L4b8826:{c.instructions+=1;NFSU2_TR(0x4b8826);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b882bull));
TAIL_STATIC(0x570a40u,570);
}
B4b882b:L4b882b:{c.instructions+=2;NFSU2_TR(0x4b882b);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4b882d:{NFSU2_TR(0x4b882d);
if(r1(R+518)){{goto L4b8836;}}
}
B4b882f:L4b882f:{c.instructions+=2;NFSU2_TR(0x4b882f);
w4(R+28,u32(0x794618ull));
}
B4b8834:{NFSU2_TR(0x4b8834);
{goto L4b883b;}
}
B4b8836:L4b8836:{c.instructions+=1;NFSU2_TR(0x4b8836);
w4(R+12,u32(0x794610ull));
}
B4b883b:L4b883b:{c.instructions+=7;NFSU2_TR(0x4b883b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b883c:{NFSU2_TR(0x4b883c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b883d:{NFSU2_TR(0x4b883d);
u8 U[4];
w4(U+0,u32(0x7945fcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b8842:{NFSU2_TR(0x4b8842);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4b8846:{NFSU2_TR(0x4b8846);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b8848:{NFSU2_TR(0x4b8848);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b8849:{NFSU2_TR(0x4b8849);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b884eull));
TAIL_STATIC(0x50c960u,50c);
}
B4b884e:L4b884e:{c.instructions+=6;NFSU2_TR(0x4b884e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B4b8851:{NFSU2_TR(0x4b8851);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4b8855:{NFSU2_TR(0x4b8855);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((R+28),(U+0),4);
}
B4b8858:{NFSU2_TR(0x4b8858);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b8859:{NFSU2_TR(0x4b8859);
__builtin_memmove((R+4),(R+28),4);
}
B4b885b:{NFSU2_TR(0x4b885b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b8860ull));
TAIL_STATIC(0x525a30u,525);
}
B4b8860:L4b8860:{c.instructions+=3;NFSU2_TR(0x4b8860);
u8 U[4];
w4(U+0,u32(0x2dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b8862:{NFSU2_TR(0x4b8862);
__builtin_memmove((R+4),(R+28),4);
}
B4b8864:{NFSU2_TR(0x4b8864);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b8869ull));
TAIL_STATIC(0x5113f0u,511);
}
B4b8869:L4b8869:{c.instructions+=3;NFSU2_TR(0x4b8869);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4b886c:{NFSU2_TR(0x4b886c);
u8 U[4];
w4(U+0,u32(0x7945f0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b8871:{NFSU2_TR(0x4b8871);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b8876ull));
TAIL_STATIC(0x505450u,505);
}
B4b8876:L4b8876:{c.instructions+=3;NFSU2_TR(0x4b8876);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b8877:{NFSU2_TR(0x4b8877);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b8878:{NFSU2_TR(0x4b8878);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b887dull));
TAIL_STATIC(0x537a10u,537);
}
B4b887d:L4b887d:{c.instructions+=9;NFSU2_TR(0x4b887d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4b8880:{NFSU2_TR(0x4b8880);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4b8881:{NFSU2_TR(0x4b8881);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b8884:{NFSU2_TR(0x4b8884);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4b8888:{NFSU2_TR(0x4b8888);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b8889:{NFSU2_TR(0x4b8889);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4b888a:{NFSU2_TR(0x4b888a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4b888b:{NFSU2_TR(0x4b888b);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x20ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x20ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4b888e:{NFSU2_TR(0x4b888e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b8891:L4b8891:{c.instructions+=8;NFSU2_TR(0x4b8891);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b8895:{NFSU2_TR(0x4b8895);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4b8896:{NFSU2_TR(0x4b8896);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b8899:{NFSU2_TR(0x4b8899);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b889a:{NFSU2_TR(0x4b889a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4b889b:{NFSU2_TR(0x4b889b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4b889c:{NFSU2_TR(0x4b889c);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x20ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x20ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4b889f:{NFSU2_TR(0x4b889f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b88a2:L4b88a2:{c.instructions+=2;NFSU2_TR(0x4b88a2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xe1fde1d1ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b88a7:{NFSU2_TR(0x4b88a7);
if(r1(R+518)){{goto L4b8947;}}
}
B4b88ad:L4b88ad:{c.instructions+=2;NFSU2_TR(0x4b88ad);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xe6e946b8ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b88b2:{NFSU2_TR(0x4b88b2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b8998;}}
}
B4b88b8:L4b88b8:{c.instructions+=3;NFSU2_TR(0x4b88b8);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4b88bb:{NFSU2_TR(0x4b88bb);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4b88bd:{NFSU2_TR(0x4b88bd);
if(r1(R+518)){{goto L4b8998;}}
}
B4b88c3:L4b88c3:{c.instructions+=3;NFSU2_TR(0x4b88c3);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((R+28),(U+0),4);
}
B4b88c6:{NFSU2_TR(0x4b88c6);
__builtin_memmove((R+4),(R+28),4);
}
B4b88c8:{NFSU2_TR(0x4b88c8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b88cdull));
TAIL_STATIC(0x511360u,511);
}
B4b88cd:L4b88cd:{c.instructions+=3;NFSU2_TR(0x4b88cd);
__builtin_memmove((R+20),(R+0),4);
}
B4b88cf:{NFSU2_TR(0x4b88cf);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b88d1:{NFSU2_TR(0x4b88d1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b88e4;}}
}
B4b88d3:L4b88d3:{c.instructions+=2;NFSU2_TR(0x4b88d3);
__builtin_memmove((R+4),(R+28),4);
}
B4b88d5:{NFSU2_TR(0x4b88d5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b88daull));
TAIL_STATIC(0x511340u,511);
}
B4b88da:L4b88da:{c.instructions+=3;NFSU2_TR(0x4b88da);
__builtin_memmove((R+20),(R+0),4);
}
B4b88dc:{NFSU2_TR(0x4b88dc);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b88de:{NFSU2_TR(0x4b88de);
if(r1(R+518)){{goto L4b8998;}}
}
B4b88e4:L4b88e4:{c.instructions+=3;NFSU2_TR(0x4b88e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b88e7:{NFSU2_TR(0x4b88e7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b88e8:{NFSU2_TR(0x4b88e8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b88edull));
TAIL_STATIC(0x52cef0u,52c);
}
B4b88ed:L4b88ed:{c.instructions+=6;NFSU2_TR(0x4b88ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b88f0:{NFSU2_TR(0x4b88f0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4b88f2:{NFSU2_TR(0x4b88f2);
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
B4b88f5:{NFSU2_TR(0x4b88f5);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b88f7:{NFSU2_TR(0x4b88f7);
__builtin_memmove((R+12),(R+0),4);
}
B4b88f9:{NFSU2_TR(0x4b88f9);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b88fcull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4b88fc:L4b88fc:{c.instructions+=7;NFSU2_TR(0x4b88fc);
__builtin_memmove((R+28),(R+0),4);
}
B4b88fe:{NFSU2_TR(0x4b88fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x58ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4b8905:{NFSU2_TR(0x4b8905);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b8908:{NFSU2_TR(0x4b8908);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b890b:{NFSU2_TR(0x4b890b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b890c:{NFSU2_TR(0x4b890c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b890f:{NFSU2_TR(0x4b890f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b8914ull));
TAIL_STATIC(0x49cad0u,49c);
}
B4b8914:L4b8914:{c.instructions+=3;NFSU2_TR(0x4b8914);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b8915:{NFSU2_TR(0x4b8915);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b8916:{NFSU2_TR(0x4b8916);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b891bull));
TAIL_STATIC(0x537ab0u,537);
}
B4b891b:L4b891b:{c.instructions+=4;NFSU2_TR(0x4b891b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4b891e:{NFSU2_TR(0x4b891e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b8920:{NFSU2_TR(0x4b8920);
u8 U[4];
w4(U+0,u32(0x7945e4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b8925:{NFSU2_TR(0x4b8925);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b892aull));
TAIL_STATIC(0x505450u,505);
}
B4b892a:L4b892a:{c.instructions+=4;NFSU2_TR(0x4b892a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4b892d:{NFSU2_TR(0x4b892d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b892e:{NFSU2_TR(0x4b892e);
__builtin_memmove((R+4),(R+28),4);
}
B4b8930:{NFSU2_TR(0x4b8930);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b8935ull));
TAIL_STATIC(0x52b030u,52b);
}
B4b8935:L4b8935:{c.instructions+=3;NFSU2_TR(0x4b8935);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b8936:{NFSU2_TR(0x4b8936);
__builtin_memmove((R+4),(R+12),4);
}
B4b8938:{NFSU2_TR(0x4b8938);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b893dull));
TAIL_STATIC(0x495610u,495);
}
B4b893d:L4b893d:{c.instructions+=6;NFSU2_TR(0x4b893d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4b893e:{NFSU2_TR(0x4b893e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b893f:{NFSU2_TR(0x4b893f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4b8940:{NFSU2_TR(0x4b8940);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4b8941:{NFSU2_TR(0x4b8941);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x20ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x20ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4b8944:{NFSU2_TR(0x4b8944);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b8947:L4b8947:{c.instructions+=2;NFSU2_TR(0x4b8947);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4b894a:{NFSU2_TR(0x4b894a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b894full));
TAIL_STATIC(0x511320u,511);
}
B4b894f:L4b894f:{c.instructions+=1;NFSU2_TR(0x4b894f);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4b8953:L4b8953:{c.instructions+=3;NFSU2_TR(0x4b8953);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b8956:{NFSU2_TR(0x4b8956);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b8958:{NFSU2_TR(0x4b8958);
if(r1(R+518)){{goto L4b8998;}}
}
B4b895a:L4b895a:{c.instructions+=3;NFSU2_TR(0x4b895a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b895d:{NFSU2_TR(0x4b895d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b895e:{NFSU2_TR(0x4b895e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b8963ull));
TAIL_STATIC(0x52cef0u,52c);
}
B4b8963:L4b8963:{c.instructions+=5;NFSU2_TR(0x4b8963);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4b8966:{NFSU2_TR(0x4b8966);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4b8969:{NFSU2_TR(0x4b8969);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b896a:{NFSU2_TR(0x4b896a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4b896d:{NFSU2_TR(0x4b896d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b8972ull));
TAIL_STATIC(0x505400u,505);
}
B4b8972:L4b8972:{c.instructions+=4;NFSU2_TR(0x4b8972);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b8975:{NFSU2_TR(0x4b8975);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b8977:{NFSU2_TR(0x4b8977);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b8978:{NFSU2_TR(0x4b8978);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b897dull));
TAIL_STATIC(0x50ce20u,50c);
}
B4b897d:L4b897d:{c.instructions+=2;NFSU2_TR(0x4b897d);
__builtin_memmove((R+4),(R+0),4);
}
B4b897f:{NFSU2_TR(0x4b897f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b8984ull));
TAIL_STATIC(0x5371a0u,537);
}
B4b8984:L4b8984:{c.instructions+=3;NFSU2_TR(0x4b8984);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b8987:{NFSU2_TR(0x4b8987);
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
B4b8989:{NFSU2_TR(0x4b8989);
if(r1(R+518)){{goto L4b8991;}}
}
B4b898b:L4b898b:{c.instructions+=3;NFSU2_TR(0x4b898b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4b898d:{NFSU2_TR(0x4b898d);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b898f:{NFSU2_TR(0x4b898f);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b8991ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B4b8991:L4b8991:{c.instructions+=1;NFSU2_TR(0x4b8991);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4b8998:L4b8998:{c.instructions+=6;NFSU2_TR(0x4b8998);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4b8999:{NFSU2_TR(0x4b8999);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b899a:{NFSU2_TR(0x4b899a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4b899b:{NFSU2_TR(0x4b899b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4b899c:{NFSU2_TR(0x4b899c);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x20ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x20ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4b899f:{NFSU2_TR(0x4b899f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b89b0:L4b89b0:{c.instructions+=9;NFSU2_TR(0x4b89b0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b89b2:{NFSU2_TR(0x4b89b2);
u8 U[4];
w4(U+0,u32(0x773684ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b89b7:{NFSU2_TR(0x4b89b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b89bd:{NFSU2_TR(0x4b89bd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b89be:{NFSU2_TR(0x4b89be);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b89c5:{NFSU2_TR(0x4b89c5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b89c6:{NFSU2_TR(0x4b89c6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b89c7:{NFSU2_TR(0x4b89c7);
u8 U[4];
w4(U+0,u32(0x4cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b89c9:{NFSU2_TR(0x4b89c9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b89ceull));
TAIL_STATIC(0x575620u,575);
}
B4b89ce:L4b89ce:{c.instructions+=7;NFSU2_TR(0x4b89ce);
__builtin_memmove((R+24),(R+0),4);
}
B4b89d0:{NFSU2_TR(0x4b89d0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4b89d3:{NFSU2_TR(0x4b89d3);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b89d7:{NFSU2_TR(0x4b89d7);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4b89d9:{NFSU2_TR(0x4b89d9);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4b89db:{NFSU2_TR(0x4b89db);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b89df:{NFSU2_TR(0x4b89df);
if(r1(R+518)){{goto L4b89f5;}}
}
B4b89e1:L4b89e1:{c.instructions+=4;NFSU2_TR(0x4b89e1);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b89e5:{NFSU2_TR(0x4b89e5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b89e6:{NFSU2_TR(0x4b89e6);
__builtin_memmove((R+4),(R+24),4);
}
B4b89e8:{NFSU2_TR(0x4b89e8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b89edull));
TAIL_STATIC(0x551de0u,551);
}
B4b89ed:L4b89ed:{c.instructions+=2;NFSU2_TR(0x4b89ed);
u8 U[4];
w4(U+0,u32(0x78fad0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4b89f3:{NFSU2_TR(0x4b89f3);
__builtin_memmove((R+0),(R+24),4);
}
B4b89f5:L4b89f5:{c.instructions+=5;NFSU2_TR(0x4b89f5);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b89f9:{NFSU2_TR(0x4b89f9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b89fa:{NFSU2_TR(0x4b89fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b8a01:{NFSU2_TR(0x4b8a01);
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
B4b8a04:{NFSU2_TR(0x4b8a04);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b8a10:L4b8a10:{c.instructions+=12;NFSU2_TR(0x4b8a10);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b8a12:{NFSU2_TR(0x4b8a12);
u8 U[4];
w4(U+0,u32(0x7736ccull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b8a17:{NFSU2_TR(0x4b8a17);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b8a1d:{NFSU2_TR(0x4b8a1d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b8a1e:{NFSU2_TR(0x4b8a1e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b8a25:{NFSU2_TR(0x4b8a25);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b8a26:{NFSU2_TR(0x4b8a26);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b8a27:{NFSU2_TR(0x4b8a27);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b8a28:{NFSU2_TR(0x4b8a28);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b8a29:{NFSU2_TR(0x4b8a29);
u8 U[4];
w4(U+0,u32(0x9cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b8a2e:{NFSU2_TR(0x4b8a2e);
__builtin_memmove((R+24),(R+4),4);
}
B4b8a30:{NFSU2_TR(0x4b8a30);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b8a35ull));
TAIL_STATIC(0x575620u,575);
}
B4b8a35:L4b8a35:{c.instructions+=6;NFSU2_TR(0x4b8a35);
__builtin_memmove((R+28),(R+0),4);
}
B4b8a37:{NFSU2_TR(0x4b8a37);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4b8a3a:{NFSU2_TR(0x4b8a3a);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b8a3e:{NFSU2_TR(0x4b8a3e);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b8a40:{NFSU2_TR(0x4b8a40);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4b8a48:{NFSU2_TR(0x4b8a48);
if(r1(R+518)){{goto L4b8a83;}}
}
B4b8a4a:L4b8a4a:{c.instructions+=12;NFSU2_TR(0x4b8a4a);
__builtin_memmove((R+12),gp(0x836364),4);
}
B4b8a50:{NFSU2_TR(0x4b8a50);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b8a52:{NFSU2_TR(0x4b8a52);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((R+0),(U+0),4);
}
B4b8a58:{NFSU2_TR(0x4b8a58);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b8a59:{NFSU2_TR(0x4b8a59);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4b8a5f:{NFSU2_TR(0x4b8a5f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b8a60:{NFSU2_TR(0x4b8a60);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+8),(U+0),4);
}
B4b8a66:{NFSU2_TR(0x4b8a66);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b8a67:{NFSU2_TR(0x4b8a67);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+0),(U+0),4);
}
B4b8a6d:{NFSU2_TR(0x4b8a6d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b8a6e:{NFSU2_TR(0x4b8a6e);
__builtin_memmove((R+4),(R+28),4);
}
B4b8a70:{NFSU2_TR(0x4b8a70);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b8a75ull));
TAIL_STATIC(0x51e840u,51e);
}
B4b8a75:L4b8a75:{c.instructions+=3;NFSU2_TR(0x4b8a75);
u8 U[4];
w4(U+0,u32(0x791e40ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4b8a7b:{NFSU2_TR(0x4b8a7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x98ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b8a81:{NFSU2_TR(0x4b8a81);
{goto L4b8a85;}
}
B4b8a83:L4b8a83:{c.instructions+=1;NFSU2_TR(0x4b8a83);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4b8a85:L4b8a85:{c.instructions+=5;NFSU2_TR(0x4b8a85);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b8a87:{NFSU2_TR(0x4b8a87);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b8a88:{NFSU2_TR(0x4b8a88);
__builtin_memmove((R+4),(R+24),4);
}
B4b8a8a:{NFSU2_TR(0x4b8a8a);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4b8a92:{NFSU2_TR(0x4b8a92);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b8a97ull));
TAIL_STATIC(0x54f410u,54f);
}
B4b8a97:L4b8a97:{c.instructions+=2;NFSU2_TR(0x4b8a97);
u8 U[4];
w4(U+0,u32(0x9cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b8a9c:{NFSU2_TR(0x4b8a9c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b8aa1ull));
TAIL_STATIC(0x575620u,575);
}
B4b8aa1:L4b8aa1:{c.instructions+=6;NFSU2_TR(0x4b8aa1);
__builtin_memmove((R+28),(R+0),4);
}
B4b8aa3:{NFSU2_TR(0x4b8aa3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4b8aa6:{NFSU2_TR(0x4b8aa6);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b8aaa:{NFSU2_TR(0x4b8aaa);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b8aac:{NFSU2_TR(0x4b8aac);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4b8ab4:{NFSU2_TR(0x4b8ab4);
if(r1(R+518)){{goto L4b8aef;}}
}
B4b8ab6:L4b8ab6:{c.instructions+=12;NFSU2_TR(0x4b8ab6);
__builtin_memmove((R+12),gp(0x836364),4);
}
B4b8abc:{NFSU2_TR(0x4b8abc);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b8abe:{NFSU2_TR(0x4b8abe);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4b8ac4:{NFSU2_TR(0x4b8ac4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b8ac5:{NFSU2_TR(0x4b8ac5);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+8),(U+0),4);
}
B4b8acb:{NFSU2_TR(0x4b8acb);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b8acc:{NFSU2_TR(0x4b8acc);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+0),(U+0),4);
}
B4b8ad2:{NFSU2_TR(0x4b8ad2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b8ad3:{NFSU2_TR(0x4b8ad3);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+4),(U+0),4);
}
B4b8ad9:{NFSU2_TR(0x4b8ad9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b8ada:{NFSU2_TR(0x4b8ada);
__builtin_memmove((R+4),(R+28),4);
}
B4b8adc:{NFSU2_TR(0x4b8adc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b8ae1ull));
TAIL_STATIC(0x51e840u,51e);
}
B4b8ae1:L4b8ae1:{c.instructions+=3;NFSU2_TR(0x4b8ae1);
u8 U[4];
w4(U+0,u32(0x791e90ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4b8ae7:{NFSU2_TR(0x4b8ae7);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x98ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b8aed:{NFSU2_TR(0x4b8aed);
{goto L4b8af1;}
}
B4b8aef:L4b8aef:{c.instructions+=1;NFSU2_TR(0x4b8aef);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4b8af1:L4b8af1:{c.instructions+=5;NFSU2_TR(0x4b8af1);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b8af3:{NFSU2_TR(0x4b8af3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b8af4:{NFSU2_TR(0x4b8af4);
__builtin_memmove((R+4),(R+24),4);
}
B4b8af6:{NFSU2_TR(0x4b8af6);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4b8afe:{NFSU2_TR(0x4b8afe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b8b03ull));
TAIL_STATIC(0x54f410u,54f);
}
B4b8b03:L4b8b03:{c.instructions+=2;NFSU2_TR(0x4b8b03);
u8 U[4];
w4(U+0,u32(0x9cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b8b08:{NFSU2_TR(0x4b8b08);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b8b0dull));
TAIL_STATIC(0x575620u,575);
}
B4b8b0d:L4b8b0d:{c.instructions+=6;NFSU2_TR(0x4b8b0d);
__builtin_memmove((R+28),(R+0),4);
}
B4b8b0f:{NFSU2_TR(0x4b8b0f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4b8b12:{NFSU2_TR(0x4b8b12);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b8b16:{NFSU2_TR(0x4b8b16);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b8b18:{NFSU2_TR(0x4b8b18);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4b8b20:{NFSU2_TR(0x4b8b20);
if(r1(R+518)){{goto L4b8b5b;}}
}
B4b8b22:L4b8b22:{c.instructions+=12;NFSU2_TR(0x4b8b22);
__builtin_memmove((R+12),gp(0x836364),4);
}
B4b8b28:{NFSU2_TR(0x4b8b28);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b8b2a:{NFSU2_TR(0x4b8b2a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x11cull))));
__builtin_memmove((R+8),(U+0),4);
}
B4b8b30:{NFSU2_TR(0x4b8b30);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b8b31:{NFSU2_TR(0x4b8b31);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x114ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4b8b37:{NFSU2_TR(0x4b8b37);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b8b38:{NFSU2_TR(0x4b8b38);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4b8b3e:{NFSU2_TR(0x4b8b3e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b8b3f:{NFSU2_TR(0x4b8b3f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((R+8),(U+0),4);
}
B4b8b45:{NFSU2_TR(0x4b8b45);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b8b46:{NFSU2_TR(0x4b8b46);
__builtin_memmove((R+4),(R+28),4);
}
B4b8b48:{NFSU2_TR(0x4b8b48);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b8b4dull));
TAIL_STATIC(0x51e840u,51e);
}
B4b8b4d:L4b8b4d:{c.instructions+=3;NFSU2_TR(0x4b8b4d);
u8 U[4];
w4(U+0,u32(0x791ee0ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4b8b53:{NFSU2_TR(0x4b8b53);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x98ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b8b59:{NFSU2_TR(0x4b8b59);
{goto L4b8b5d;}
}
B4b8b5b:L4b8b5b:{c.instructions+=1;NFSU2_TR(0x4b8b5b);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4b8b5d:L4b8b5d:{c.instructions+=5;NFSU2_TR(0x4b8b5d);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b8b5f:{NFSU2_TR(0x4b8b5f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b8b60:{NFSU2_TR(0x4b8b60);
__builtin_memmove((R+4),(R+24),4);
}
B4b8b62:{NFSU2_TR(0x4b8b62);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4b8b6a:{NFSU2_TR(0x4b8b6a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b8b6full));
TAIL_STATIC(0x54f410u,54f);
}
B4b8b6f:L4b8b6f:{c.instructions+=7;NFSU2_TR(0x4b8b6f);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b8b73:{NFSU2_TR(0x4b8b73);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4b8b74:{NFSU2_TR(0x4b8b74);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b8b75:{NFSU2_TR(0x4b8b75);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4b8b76:{NFSU2_TR(0x4b8b76);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b8b7d:{NFSU2_TR(0x4b8b7d);
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
B4b8b80:{NFSU2_TR(0x4b8b80);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b8b90:L4b8b90:{c.instructions+=3;NFSU2_TR(0x4b8b90);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b8b91:{NFSU2_TR(0x4b8b91);
__builtin_memmove((R+24),(R+4),4);
}
B4b8b93:{NFSU2_TR(0x4b8b93);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b8b98ull));
TAIL_STATIC(0x49cca0u,49c);
}
B4b8b98:L4b8b98:{c.instructions+=2;NFSU2_TR(0x4b8b98);
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
B4b8b9d:{NFSU2_TR(0x4b8b9d);
if(r1(R+518)){{goto L4b8ba8;}}
}
B4b8b9f:L4b8b9f:{c.instructions+=2;NFSU2_TR(0x4b8b9f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b8ba0:{NFSU2_TR(0x4b8ba0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b8ba5ull));
TAIL_STATIC(0x575630u,575);
}
B4b8ba5:L4b8ba5:{c.instructions+=1;NFSU2_TR(0x4b8ba5);
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
B4b8ba8:L4b8ba8:{c.instructions+=3;NFSU2_TR(0x4b8ba8);
__builtin_memmove((R+0),(R+24),4);
}
B4b8baa:{NFSU2_TR(0x4b8baa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b8bab:{NFSU2_TR(0x4b8bab);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b8bb0:L4b8bb0:{c.instructions+=3;NFSU2_TR(0x4b8bb0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b8bb4:{NFSU2_TR(0x4b8bb4);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xd15504ecull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xd15504ecull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xd15504ecull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4b8bb9:{NFSU2_TR(0x4b8bb9);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4b8c73;}}
}
B4b8bbf:L4b8bbf:{c.instructions+=1;NFSU2_TR(0x4b8bbf);
if(r1(R+518)){{goto L4b8ccf;}}
}
B4b8bc5:L4b8bc5:{c.instructions+=2;NFSU2_TR(0x4b8bc5);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0xc98356baull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xc98356baull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b8bca:{NFSU2_TR(0x4b8bca);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4b8c39;}}
}
B4b8bcc:L4b8bcc:{c.instructions+=1;NFSU2_TR(0x4b8bcc);
if(r1(R+518)){{goto L4b8c2e;}}
}
B4b8bce:L4b8bce:{c.instructions+=2;NFSU2_TR(0x4b8bce);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xb19b00b5ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b8bd3:{NFSU2_TR(0x4b8bd3);
if(r1(R+518)){{goto L4b8c12;}}
}
B4b8bd5:L4b8bd5:{c.instructions+=2;NFSU2_TR(0x4b8bd5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xb19ba115ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b8bda:{NFSU2_TR(0x4b8bda);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b8ca7;}}
}
B4b8be0:L4b8be0:{c.instructions+=4;NFSU2_TR(0x4b8be0);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b8be4:{NFSU2_TR(0x4b8be4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b8be6:{NFSU2_TR(0x4b8be6);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b8be8:{NFSU2_TR(0x4b8be8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b8bfe;}}
}
B4b8bea:L4b8bea:{c.instructions+=4;NFSU2_TR(0x4b8bea);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b8bed:{NFSU2_TR(0x4b8bed);
u8 U[4];
w4(U+0,u32(0x835b98ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b8bf2:{NFSU2_TR(0x4b8bf2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b8bf3:{NFSU2_TR(0x4b8bf3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b8bf8ull));
TAIL_STATIC(0x537980u,537);
}
B4b8bf8:L4b8bf8:{c.instructions+=2;NFSU2_TR(0x4b8bf8);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0xcull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0xcull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4b8bfb:{NFSU2_TR(0x4b8bfb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b8bfe:L4b8bfe:{c.instructions+=4;NFSU2_TR(0x4b8bfe);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b8c01:{NFSU2_TR(0x4b8c01);
u8 U[4];
w4(U+0,u32(0x836304ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b8c06:{NFSU2_TR(0x4b8c06);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b8c07:{NFSU2_TR(0x4b8c07);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b8c0cull));
TAIL_STATIC(0x537980u,537);
}
B4b8c0c:L4b8c0c:{c.instructions+=2;NFSU2_TR(0x4b8c0c);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0xcull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0xcull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4b8c0f:{NFSU2_TR(0x4b8c0f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b8c12:L4b8c12:{c.instructions+=4;NFSU2_TR(0x4b8c12);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b8c16:{NFSU2_TR(0x4b8c16);
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
B4b8c18:{NFSU2_TR(0x4b8c18);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x52cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b8c1e:{NFSU2_TR(0x4b8c1e);
if(r1(R+518)){{goto L4b8ccf;}}
}
B4b8c24:L4b8c24:{c.instructions+=2;NFSU2_TR(0x4b8c24);
s1(0x838528,u8(0x0ull));
}
B4b8c2b:{NFSU2_TR(0x4b8c2b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b8c2e:L4b8c2e:{c.instructions+=2;NFSU2_TR(0x4b8c2e);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4cull))));
}
B4b8c31:{NFSU2_TR(0x4b8c31);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b8c36ull));
TAIL_STATIC(0x588480u,588);
}
B4b8c36:L4b8c36:{c.instructions+=1;NFSU2_TR(0x4b8c36);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b8c39:L4b8c39:{c.instructions+=2;NFSU2_TR(0x4b8c39);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xd09f00d5ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b8c3e:{NFSU2_TR(0x4b8c3e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b8ca7;}}
}
B4b8c40:L4b8c40:{c.instructions+=3;NFSU2_TR(0x4b8c40);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x52cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b8c46:{NFSU2_TR(0x4b8c46);
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
B4b8c48:{NFSU2_TR(0x4b8c48);
if(r1(R+518)){{goto L4b8ccf;}}
}
B4b8c4e:L4b8c4e:{c.instructions+=6;NFSU2_TR(0x4b8c4e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4b8c50:{NFSU2_TR(0x4b8c50);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4b8c58:{NFSU2_TR(0x4b8c58);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4b8c60:{NFSU2_TR(0x4b8c60);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4b8c68:{NFSU2_TR(0x4b8c68);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
w4(U+4,u32(0xb19ba115ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4b8c70:{NFSU2_TR(0x4b8c70);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B4b8c73:L4b8c73:{c.instructions+=2;NFSU2_TR(0x4b8c73);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xd25504ecull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xd25504ecull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xd25504ecull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4b8c78:{NFSU2_TR(0x4b8c78);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4b8ca0;}}
}
B4b8c7a:L4b8c7a:{c.instructions+=1;NFSU2_TR(0x4b8c7a);
if(r1(R+518)){{goto L4b8ccf;}}
}
B4b8c7c:L4b8c7c:{c.instructions+=2;NFSU2_TR(0x4b8c7c);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xd15554ecull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xd15554ecull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xd15554ecull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4b8c81:{NFSU2_TR(0x4b8c81);
if(r1(R+518)){{goto L4b8ccf;}}
}
B4b8c83:L4b8c83:{c.instructions+=2;NFSU2_TR(0x4b8c83);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xd15c04ecull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b8c88:{NFSU2_TR(0x4b8c88);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b8ca7;}}
}
B4b8c8a:L4b8c8a:{c.instructions+=4;NFSU2_TR(0x4b8c8a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b8c8b:{NFSU2_TR(0x4b8c8b);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4cull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b8c8e:{NFSU2_TR(0x4b8c8e);
__builtin_memmove((R+4),(R+24),4);
}
B4b8c90:{NFSU2_TR(0x4b8c90);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b8c95ull));
TAIL_STATIC(0x49d5b0u,49d);
}
B4b8c95:L4b8c95:{c.instructions+=2;NFSU2_TR(0x4b8c95);
__builtin_memmove((R+4),(R+24),4);
}
B4b8c97:{NFSU2_TR(0x4b8c97);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b8c9cull));
TAIL_STATIC(0x583b30u,583);
}
B4b8c9c:L4b8c9c:{c.instructions+=2;NFSU2_TR(0x4b8c9c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b8c9d:{NFSU2_TR(0x4b8c9d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b8ca0:L4b8ca0:{c.instructions+=2;NFSU2_TR(0x4b8ca0);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xdead900dull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xdead900dull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xdead900dull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4b8ca5:{NFSU2_TR(0x4b8ca5);
if(r1(R+518)){{goto L4b8cc5;}}
}
B4b8ca7:L4b8ca7:{c.instructions+=4;NFSU2_TR(0x4b8ca7);
__builtin_memmove((R+8),(R+0),4);
}
B4b8ca9:{NFSU2_TR(0x4b8ca9);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xeb0ffe0ull))));
}
B4b8caf:{NFSU2_TR(0x4b8caf);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
w1(R+512,u8((r4(U+6))<(u32(0xeb0ffe0ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xeb0ffe0ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xeb0ffe0ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4b8cb5:{NFSU2_TR(0x4b8cb5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b8ccf;}}
}
B4b8cb7:L4b8cb7:{c.instructions+=3;NFSU2_TR(0x4b8cb7);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xf14f001full))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4b8cbc:{NFSU2_TR(0x4b8cbc);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x518ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b8cc2:{NFSU2_TR(0x4b8cc2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b8cc5:L4b8cc5:{c.instructions+=2;NFSU2_TR(0x4b8cc5);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b8cc9:{NFSU2_TR(0x4b8cc9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x518ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b8ccf:L4b8ccf:{c.instructions+=1;NFSU2_TR(0x4b8ccf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b8ce0:L4b8ce0:{c.instructions+=3;NFSU2_TR(0x4b8ce0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b8ce1:{NFSU2_TR(0x4b8ce1);
__builtin_memmove((R+24),(R+4),4);
}
B4b8ce3:{NFSU2_TR(0x4b8ce3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b8ce8ull));
TAIL_STATIC(0x49ce50u,49c);
}
B4b8ce8:L4b8ce8:{c.instructions+=2;NFSU2_TR(0x4b8ce8);
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
B4b8ced:{NFSU2_TR(0x4b8ced);
if(r1(R+518)){{goto L4b8cf8;}}
}
B4b8cef:L4b8cef:{c.instructions+=2;NFSU2_TR(0x4b8cef);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b8cf0:{NFSU2_TR(0x4b8cf0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b8cf5ull));
TAIL_STATIC(0x575630u,575);
}
B4b8cf5:L4b8cf5:{c.instructions+=1;NFSU2_TR(0x4b8cf5);
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
B4b8cf8:L4b8cf8:{c.instructions+=3;NFSU2_TR(0x4b8cf8);
__builtin_memmove((R+0),(R+24),4);
}
B4b8cfa:{NFSU2_TR(0x4b8cfa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b8cfb:{NFSU2_TR(0x4b8cfb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b8d00:L4b8d00:{c.instructions+=11;NFSU2_TR(0x4b8d00);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B4b8d03:{NFSU2_TR(0x4b8d03);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b8d04:{NFSU2_TR(0x4b8d04);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4b8d08:{NFSU2_TR(0x4b8d08);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b8d09:{NFSU2_TR(0x4b8d09);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b8d0a:{NFSU2_TR(0x4b8d0a);
__builtin_memmove((R+20),(R+4),4);
}
B4b8d0c:{NFSU2_TR(0x4b8d0c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4d8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b8d12:{NFSU2_TR(0x4b8d12);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b8d13:{NFSU2_TR(0x4b8d13);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1d4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4b8d19:{NFSU2_TR(0x4b8d19);
w4(R+4,u32(0xbeull));
}
B4b8d1e:{NFSU2_TR(0x4b8d1e);
__builtin_memmove((R+24),(R+12),4);
}
B4b8d20:L4b8d20:{c.instructions+=1;NFSU2_TR(0x4b8d20);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L4b8d22;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4b8d20u);}goto L4b8d20;}
}
B4b8d22:L4b8d22:{c.instructions+=5;NFSU2_TR(0x4b8d22);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4b8d24:{NFSU2_TR(0x4b8d24);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b8d26:{NFSU2_TR(0x4b8d26);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4dcull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4b8d2d:{NFSU2_TR(0x4b8d2d);
w4(R+24,u32(0x1ull));
}
B4b8d32:{NFSU2_TR(0x4b8d32);
if(r1(R+518)){{goto L4b8d3d;}}
}
B4b8d34:L4b8d34:{c.instructions+=2;NFSU2_TR(0x4b8d34);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b8d35:{NFSU2_TR(0x4b8d35);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b8d3aull));
TAIL_STATIC(0x540a60u,540);
}
B4b8d3a:L4b8d3a:{c.instructions+=1;NFSU2_TR(0x4b8d3a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4b8d3d:L4b8d3d:{c.instructions+=3;NFSU2_TR(0x4b8d3d);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x245ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4b8d43:{NFSU2_TR(0x4b8d43);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4b8d45:{NFSU2_TR(0x4b8d45);
if(r1(R+518)){{goto L4b8d59;}}
}
B4b8d47:L4b8d47:{c.instructions+=3;NFSU2_TR(0x4b8d47);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0xeb0ffe1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4b8d4f:{NFSU2_TR(0x4b8d4f);
w4(R+28,u32(0x1ull));
}
B4b8d54:{NFSU2_TR(0x4b8d54);
w4(R+24,u32(0x2ull));
}
B4b8d59:L4b8d59:{c.instructions+=3;NFSU2_TR(0x4b8d59);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x272ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4b8d5f:{NFSU2_TR(0x4b8d5f);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4b8d61:{NFSU2_TR(0x4b8d61);
if(r1(R+518)){{goto L4b8d70;}}
}
B4b8d63:L4b8d63:{c.instructions+=5;NFSU2_TR(0x4b8d63);
__builtin_memmove((R+0),(R+24),4);
}
B4b8d65:{NFSU2_TR(0x4b8d65);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xeb0ffe0ull))));
}
B4b8d6a:{NFSU2_TR(0x4b8d6a);
u8 U[16];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B4b8d6e:{NFSU2_TR(0x4b8d6e);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B4b8d6f:{NFSU2_TR(0x4b8d6f);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B4b8d70:L4b8d70:{c.instructions+=3;NFSU2_TR(0x4b8d70);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x29full))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4b8d76:{NFSU2_TR(0x4b8d76);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4b8d78:{NFSU2_TR(0x4b8d78);
if(r1(R+518)){{goto L4b8d88;}}
}
B4b8d7a:L4b8d7a:{c.instructions+=5;NFSU2_TR(0x4b8d7a);
__builtin_memmove((R+4),(R+24),4);
}
B4b8d7c:{NFSU2_TR(0x4b8d7c);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0xeb0ffe0ull))));
}
B4b8d82:{NFSU2_TR(0x4b8d82);
u8 U[16];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B4b8d86:{NFSU2_TR(0x4b8d86);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B4b8d87:{NFSU2_TR(0x4b8d87);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B4b8d88:L4b8d88:{c.instructions+=3;NFSU2_TR(0x4b8d88);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x2ccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4b8d8e:{NFSU2_TR(0x4b8d8e);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4b8d90:{NFSU2_TR(0x4b8d90);
if(r1(R+518)){{goto L4b8d9d;}}
}
B4b8d92:L4b8d92:{c.instructions+=3;NFSU2_TR(0x4b8d92);
w4(R+24,u32(u32(r4(R+24))|u32(u32(0xeb0ffe0ull))));
}
B4b8d98:{NFSU2_TR(0x4b8d98);
u8 U[16];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+24),4);
s4(u32(r4(U+8)),r4(U+12));
}
B4b8d9c:{NFSU2_TR(0x4b8d9c);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B4b8d9d:L4b8d9d:{c.instructions+=3;NFSU2_TR(0x4b8d9d);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x40ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4b8da0:{NFSU2_TR(0x4b8da0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b8da2:{NFSU2_TR(0x4b8da2);
if(r1(R+518)){{goto L4b8dc2;}}
}
B4b8da4:L4b8da4:{c.instructions+=2;NFSU2_TR(0x4b8da4);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((U+1),(U+0),1);
w1(U+2,u8(u32(r1(U+1))-u32(u8(0x30ull))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B4b8da7:{NFSU2_TR(0x4b8da7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b8dc2;}}
}
B4b8da9:L4b8da9:{c.instructions+=2;NFSU2_TR(0x4b8da9);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x78ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B4b8dad:{NFSU2_TR(0x4b8dad);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b8dc2;}}
}
B4b8daf:L4b8daf:{c.instructions+=2;NFSU2_TR(0x4b8daf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b8db0:{NFSU2_TR(0x4b8db0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b8db5ull));
TAIL_STATIC(0x43de50u,43d);
}
B4b8db5:L4b8db5:{c.instructions+=3;NFSU2_TR(0x4b8db5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b8db6:{NFSU2_TR(0x4b8db6);
w1(R+12,u8(0x1ull));
}
B4b8db8:{NFSU2_TR(0x4b8db8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b8dbdull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4b8dbd:L4b8dbd:{c.instructions+=2;NFSU2_TR(0x4b8dbd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4b8dc0:{NFSU2_TR(0x4b8dc0);
{goto L4b8dc4;}
}
B4b8dc2:L4b8dc2:{c.instructions+=1;NFSU2_TR(0x4b8dc2);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
}
B4b8dc4:L4b8dc4:{c.instructions+=2;NFSU2_TR(0x4b8dc4);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B4b8dc7:{NFSU2_TR(0x4b8dc7);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4b8e70;}}
}
B4b8dcd:L4b8dcd:{c.instructions+=1;NFSU2_TR(0x4b8dcd);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x4b8e94ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4b8dd4:L4b8dd4:{c.instructions+=6;NFSU2_TR(0x4b8dd4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4d4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4b8dda:{NFSU2_TR(0x4b8dda);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b8ddd:{NFSU2_TR(0x4b8ddd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b8dde:{NFSU2_TR(0x4b8dde);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b8de3:{NFSU2_TR(0x4b8de3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b8de4:{NFSU2_TR(0x4b8de4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b8de9ull));
TAIL_STATIC(0x558310u,558);
}
B4b8de9:L4b8de9:{c.instructions+=2;NFSU2_TR(0x4b8de9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4b8dec:{NFSU2_TR(0x4b8dec);
{goto L4b8e6a;}
}
B4b8dee:L4b8dee:{c.instructions+=9;NFSU2_TR(0x4b8dee);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4b8df2:{NFSU2_TR(0x4b8df2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4d4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b8df8:{NFSU2_TR(0x4b8df8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b8dfb:{NFSU2_TR(0x4b8dfb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b8dfc:{NFSU2_TR(0x4b8dfc);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b8dfd:{NFSU2_TR(0x4b8dfd);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b8dff:{NFSU2_TR(0x4b8dff);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b8e04:{NFSU2_TR(0x4b8e04);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b8e05:{NFSU2_TR(0x4b8e05);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b8e0aull));
TAIL_STATIC(0x5585e0u,558);
}
B4b8e0a:L4b8e0a:{c.instructions+=2;NFSU2_TR(0x4b8e0a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B4b8e0d:{NFSU2_TR(0x4b8e0d);
{goto L4b8e6a;}
}
B4b8e0f:L4b8e0f:{c.instructions+=13;NFSU2_TR(0x4b8e0f);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4b8e13:{NFSU2_TR(0x4b8e13);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4d4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b8e19:{NFSU2_TR(0x4b8e19);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b8e1c:{NFSU2_TR(0x4b8e1c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b8e1d:{NFSU2_TR(0x4b8e1d);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b8e21:{NFSU2_TR(0x4b8e21);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b8e23:{NFSU2_TR(0x4b8e23);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b8e24:{NFSU2_TR(0x4b8e24);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b8e25:{NFSU2_TR(0x4b8e25);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b8e27:{NFSU2_TR(0x4b8e27);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b8e29:{NFSU2_TR(0x4b8e29);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b8e2e:{NFSU2_TR(0x4b8e2e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b8e2f:{NFSU2_TR(0x4b8e2f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b8e34ull));
TAIL_STATIC(0x558820u,558);
}
B4b8e34:L4b8e34:{c.instructions+=2;NFSU2_TR(0x4b8e34);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B4b8e37:{NFSU2_TR(0x4b8e37);
{goto L4b8e6a;}
}
B4b8e39:L4b8e39:{c.instructions+=17;NFSU2_TR(0x4b8e39);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4b8e3d:{NFSU2_TR(0x4b8e3d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4d4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b8e43:{NFSU2_TR(0x4b8e43);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b8e46:{NFSU2_TR(0x4b8e46);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b8e47:{NFSU2_TR(0x4b8e47);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b8e4b:{NFSU2_TR(0x4b8e4b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b8e4d:{NFSU2_TR(0x4b8e4d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b8e4f:{NFSU2_TR(0x4b8e4f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b8e50:{NFSU2_TR(0x4b8e50);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4b8e54:{NFSU2_TR(0x4b8e54);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b8e55:{NFSU2_TR(0x4b8e55);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b8e56:{NFSU2_TR(0x4b8e56);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b8e58:{NFSU2_TR(0x4b8e58);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b8e5a:{NFSU2_TR(0x4b8e5a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b8e5c:{NFSU2_TR(0x4b8e5c);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b8e61:{NFSU2_TR(0x4b8e61);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b8e62:{NFSU2_TR(0x4b8e62);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b8e67ull));
TAIL_STATIC(0x5589d0u,558);
}
B4b8e67:L4b8e67:{c.instructions+=1;NFSU2_TR(0x4b8e67);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x2cull))));
}
B4b8e6a:L4b8e6a:{c.instructions+=1;NFSU2_TR(0x4b8e6a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4d8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4b8e70:L4b8e70:{c.instructions+=3;NFSU2_TR(0x4b8e70);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4d8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b8e76:{NFSU2_TR(0x4b8e76);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b8e78:{NFSU2_TR(0x4b8e78);
if(r1(R+518)){{goto L4b8e83;}}
}
B4b8e7a:L4b8e7a:{c.instructions+=2;NFSU2_TR(0x4b8e7a);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4b8e7c:{NFSU2_TR(0x4b8e7c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b8e83;}}
}
B4b8e7e:L4b8e7e:{c.instructions+=1;NFSU2_TR(0x4b8e7e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b8e83ull));
TAIL_STATIC(0x4ff2d0u,4ff);
}
B4b8e83:L4b8e83:{c.instructions+=2;NFSU2_TR(0x4b8e83);
__builtin_memmove((R+4),(R+20),4);
}
B4b8e85:{NFSU2_TR(0x4b8e85);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b8e8aull));
TAIL_STATIC(0x49d760u,49d);
}
B4b8e8a:L4b8e8a:{c.instructions+=6;NFSU2_TR(0x4b8e8a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4b8e8b:{NFSU2_TR(0x4b8e8b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b8e8c:{NFSU2_TR(0x4b8e8c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4b8e8d:{NFSU2_TR(0x4b8e8d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4b8e8e:{NFSU2_TR(0x4b8e8e);
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
B4b8e91:{NFSU2_TR(0x4b8e91);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b8eb0:L4b8eb0:{c.instructions+=6;NFSU2_TR(0x4b8eb0);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4dcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4b8eb6:{NFSU2_TR(0x4b8eb6);
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
B4b8eb8:{NFSU2_TR(0x4b8eb8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b8eb9:{NFSU2_TR(0x4b8eb9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4b8ebf:{NFSU2_TR(0x4b8ebf);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ccull))));
w4(U+4,u32(0x6ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4b8ec9:{NFSU2_TR(0x4b8ec9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b8ed0;}}
}
B4b8ecb:L4b8ecb:{c.instructions+=1;NFSU2_TR(0x4b8ecb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b8ed0ull));
TAIL_STATIC(0x49d760u,49d);
}
B4b8ed0:L4b8ed0:{c.instructions+=3;NFSU2_TR(0x4b8ed0);
__builtin_memmove((R+0),(R+24),4);
}
B4b8ed2:{NFSU2_TR(0x4b8ed2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b8ed3:{NFSU2_TR(0x4b8ed3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b8ee0:L4b8ee0:{c.instructions+=5;NFSU2_TR(0x4b8ee0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b8ee1:{NFSU2_TR(0x4b8ee1);
__builtin_memmove((R+24),(R+4),4);
}
B4b8ee3:{NFSU2_TR(0x4b8ee3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4b8ee5:{NFSU2_TR(0x4b8ee5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b8ee7:{NFSU2_TR(0x4b8ee7);
if(r1(R+518)){{goto L4b8ef8;}}
}
B4b8ee9:L4b8ee9:{c.instructions+=2;NFSU2_TR(0x4b8ee9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b8eea:{NFSU2_TR(0x4b8eea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b8eefull));
TAIL_STATIC(0x540a60u,540);
}
B4b8eef:L4b8eef:{c.instructions+=2;NFSU2_TR(0x4b8eef);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4b8ef2:{NFSU2_TR(0x4b8ef2);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4b8ef8:L4b8ef8:{c.instructions+=3;NFSU2_TR(0x4b8ef8);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b8efc:{NFSU2_TR(0x4b8efc);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b8efe:{NFSU2_TR(0x4b8efe);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4b8f0d;}}
}
B4b8f00:L4b8f00:{c.instructions+=2;NFSU2_TR(0x4b8f00);
u8 U[4];
w4(U+0,u32(0x23e142ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b8f05:{NFSU2_TR(0x4b8f05);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b8f0aull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4b8f0a:L4b8f0a:{c.instructions+=1;NFSU2_TR(0x4b8f0a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4b8f0d:L4b8f0d:{c.instructions+=8;NFSU2_TR(0x4b8f0d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b8f10:{NFSU2_TR(0x4b8f10);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b8f13:{NFSU2_TR(0x4b8f13);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b8f14:{NFSU2_TR(0x4b8f14);
u8 U[4];
w4(U+0,u32(0xca4c311bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b8f19:{NFSU2_TR(0x4b8f19);
u8 U[4];
w4(U+0,u32(0x541389e5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b8f1e:{NFSU2_TR(0x4b8f1e);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b8f23:{NFSU2_TR(0x4b8f23);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b8f24:{NFSU2_TR(0x4b8f24);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b8f29ull));
TAIL_STATIC(0x5585e0u,558);
}
B4b8f29:L4b8f29:{c.instructions+=4;NFSU2_TR(0x4b8f29);
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
B4b8f2c:{NFSU2_TR(0x4b8f2c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B4b8f2e:{NFSU2_TR(0x4b8f2e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b8f2f:{NFSU2_TR(0x4b8f2f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b8f40:L4b8f40:{c.instructions+=6;NFSU2_TR(0x4b8f40);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b8f41:{NFSU2_TR(0x4b8f41);
__builtin_memmove((R+24),(R+4),4);
}
B4b8f43:{NFSU2_TR(0x4b8f43);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4b8f45:{NFSU2_TR(0x4b8f45);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b8f47:{NFSU2_TR(0x4b8f47);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b8f48:{NFSU2_TR(0x4b8f48);
if(r1(R+518)){{goto L4b8f59;}}
}
B4b8f4a:L4b8f4a:{c.instructions+=2;NFSU2_TR(0x4b8f4a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b8f4b:{NFSU2_TR(0x4b8f4b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b8f50ull));
TAIL_STATIC(0x540a60u,540);
}
B4b8f50:L4b8f50:{c.instructions+=2;NFSU2_TR(0x4b8f50);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4b8f53:{NFSU2_TR(0x4b8f53);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4b8f59:L4b8f59:{c.instructions+=4;NFSU2_TR(0x4b8f59);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b8f5c:{NFSU2_TR(0x4b8f5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4b8f5f:{NFSU2_TR(0x4b8f5f);
u8 U[4];
w4(U+0,u32(0xd857ce14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b8f64:{NFSU2_TR(0x4b8f64);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b8f69ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4b8f69:L4b8f69:{c.instructions+=10;NFSU2_TR(0x4b8f69);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b8f6a:{NFSU2_TR(0x4b8f6a);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b8f6c:{NFSU2_TR(0x4b8f6c);
u8 U[4];
w4(U+0,u32(0xca4c3140ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b8f71:{NFSU2_TR(0x4b8f71);
u8 U[4];
w4(U+0,u32(0xca4c3140ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b8f76:{NFSU2_TR(0x4b8f76);
u8 U[4];
w4(U+0,u32(0x2c0e485aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b8f7b:{NFSU2_TR(0x4b8f7b);
u8 U[4];
w4(U+0,u32(0x61cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b8f80:{NFSU2_TR(0x4b8f80);
u8 U[4];
w4(U+0,u32(0xf770ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b8f85:{NFSU2_TR(0x4b8f85);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b8f8a:{NFSU2_TR(0x4b8f8a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b8f8b:{NFSU2_TR(0x4b8f8b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b8f90ull));
TAIL_STATIC(0x558750u,558);
}
B4b8f90:L4b8f90:{c.instructions+=5;NFSU2_TR(0x4b8f90);
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
B4b8f93:{NFSU2_TR(0x4b8f93);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4b8f94:{NFSU2_TR(0x4b8f94);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B4b8f96:{NFSU2_TR(0x4b8f96);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b8f97:{NFSU2_TR(0x4b8f97);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4b8fa0:L4b8fa0:{c.instructions+=5;NFSU2_TR(0x4b8fa0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b8fa1:{NFSU2_TR(0x4b8fa1);
__builtin_memmove((R+24),(R+4),4);
}
B4b8fa3:{NFSU2_TR(0x4b8fa3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4b8fa5:{NFSU2_TR(0x4b8fa5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b8fa7:{NFSU2_TR(0x4b8fa7);
if(r1(R+518)){{goto L4b8fb8;}}
}
B4b8fa9:L4b8fa9:{c.instructions+=2;NFSU2_TR(0x4b8fa9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b8faa:{NFSU2_TR(0x4b8faa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b8fafull));
TAIL_STATIC(0x540a60u,540);
}
B4b8faf:L4b8faf:{c.instructions+=2;NFSU2_TR(0x4b8faf);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4b8fb2:{NFSU2_TR(0x4b8fb2);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4b8fb8:L4b8fb8:{c.instructions+=3;NFSU2_TR(0x4b8fb8);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4b8fbc:{NFSU2_TR(0x4b8fbc);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x82159a60ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b8fc1:{NFSU2_TR(0x4b8fc1);
if(r1(R+518)){{goto L4b8fd1;}}
}
B4b8fc3:L4b8fc3:{c.instructions+=2;NFSU2_TR(0x4b8fc3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x5a6f817full))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b8fc8:{NFSU2_TR(0x4b8fc8);
if(r1(R+518)){{goto L4b8fd1;}}
}
B4b8fca:L4b8fca:{c.instructions+=2;NFSU2_TR(0x4b8fca);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xa3f55e1full))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4b8fcf:{NFSU2_TR(0x4b8fcf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x4b9002u,4b9);}
}
B4b8fd1:L4b8fd1:{c.instructions+=12;NFSU2_TR(0x4b8fd1);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4b8fd5:{NFSU2_TR(0x4b8fd5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b8fd8:{NFSU2_TR(0x4b8fd8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4b8fdb:{NFSU2_TR(0x4b8fdb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b8fdc:{NFSU2_TR(0x4b8fdc);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b8fde:{NFSU2_TR(0x4b8fde);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b8fdf:{NFSU2_TR(0x4b8fdf);
u8 U[4];
w4(U+0,u32(0x73c044ecull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b8fe4:{NFSU2_TR(0x4b8fe4);
u8 U[4];
w4(U+0,u32(0x541389e5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b8fe9:{NFSU2_TR(0x4b8fe9);
u8 U[4];
w4(U+0,u32(0x39df715ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b8fee:{NFSU2_TR(0x4b8fee);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b8ff3:{NFSU2_TR(0x4b8ff3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4b8ff4:{NFSU2_TR(0x4b8ff4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4b8ff9ull));
TAIL_STATIC(0x558860u,558);
}
B4b8ff9:L4b8ff9:{c.instructions+=4;NFSU2_TR(0x4b8ff9);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x20ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x20ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4b8ffc:{NFSU2_TR(0x4b8ffc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B4b8ffe:{NFSU2_TR(0x4b8ffe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4b8fff:{NFSU2_TR(0x4b8fff);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
XIT:NFSU2_TR_EXIT(0x4b8,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
