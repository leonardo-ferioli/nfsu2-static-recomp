#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_480(u8* __restrict R,Cpu& c);
u32 body_490(u8* __restrict R,Cpu& c);
u32 body_4a7(u8* __restrict R,Cpu& c);
u32 body_4a9(u8* __restrict R,Cpu& c);
u32 body_50b(u8* __restrict R,Cpu& c);
u32 body_50c(u8* __restrict R,Cpu& c);
u32 body_50d(u8* __restrict R,Cpu& c);
u32 body_510(u8* __restrict R,Cpu& c);
u32 body_51f(u8* __restrict R,Cpu& c);
u32 body_52c(u8* __restrict R,Cpu& c);
u32 body_537(u8* __restrict R,Cpu& c);
u32 body_551(u8* __restrict R,Cpu& c);
u32 body_556(u8* __restrict R,Cpu& c);
u32 body_558(u8* __restrict R,Cpu& c);
u32 body_55d(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_576(u8* __restrict R,Cpu& c);
u32 body_579(u8* __restrict R,Cpu& c);
u32 body_57d(u8* __restrict R,Cpu& c);
u32 body_5be(u8* __restrict R,Cpu& c);
u32 body_5ce(u8* __restrict R,Cpu& c);
u32 body_5f4(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x4a8,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x4a8,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_4a8(u8* __restrict R,Cpu& c);
u32 page_4a8(Cpu& c){return body_4a8(c.regs.data(),c);}
__attribute__((noinline)) u32 body_4a8(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x4a8001:goto L4a8001;
case 0x4a8002:c.instructions+=1;goto B4a8002;
case 0x4a8007:goto L4a8007;
case 0x4a800a:c.instructions+=2;goto B4a800a;
case 0x4a800c:c.instructions+=1;goto B4a800c;
case 0x4a8010:goto L4a8010;
case 0x4a8011:c.instructions+=6;goto B4a8011;
case 0x4a8013:c.instructions+=5;goto B4a8013;
case 0x4a8019:c.instructions+=4;goto B4a8019;
case 0x4a801b:c.instructions+=3;goto B4a801b;
case 0x4a801c:c.instructions+=2;goto B4a801c;
case 0x4a8020:c.instructions+=1;goto B4a8020;
case 0x4a8022:goto L4a8022;
case 0x4a8028:c.instructions+=1;goto B4a8028;
case 0x4a802e:goto L4a802e;
case 0x4a8034:c.instructions+=1;goto B4a8034;
case 0x4a803a:goto L4a803a;
case 0x4a8040:c.instructions+=5;goto B4a8040;
case 0x4a8041:c.instructions+=4;goto B4a8041;
case 0x4a8045:c.instructions+=3;goto B4a8045;
case 0x4a8046:c.instructions+=2;goto B4a8046;
case 0x4a804a:c.instructions+=1;goto B4a804a;
case 0x4a804c:goto L4a804c;
case 0x4a8052:c.instructions+=2;goto B4a8052;
case 0x4a8054:c.instructions+=1;goto B4a8054;
case 0x4a8056:goto L4a8056;
case 0x4a805b:goto L4a805b;
case 0x4a805c:c.instructions+=1;goto B4a805c;
case 0x4a8061:goto L4a8061;
case 0x4a8064:c.instructions+=2;goto B4a8064;
case 0x4a8066:c.instructions+=1;goto B4a8066;
case 0x4a8068:goto L4a8068;
case 0x4a806d:goto L4a806d;
case 0x4a806e:c.instructions+=1;goto B4a806e;
case 0x4a8073:goto L4a8073;
case 0x4a8076:goto L4a8076;
case 0x4a8079:c.instructions+=2;goto B4a8079;
case 0x4a807a:c.instructions+=1;goto B4a807a;
case 0x4a807f:goto L4a807f;
case 0x4a8085:c.instructions+=3;goto B4a8085;
case 0x4a8088:c.instructions+=2;goto B4a8088;
case 0x4a808a:c.instructions+=1;goto B4a808a;
case 0x4a808f:goto L4a808f;
case 0x4a8090:c.instructions+=4;goto B4a8090;
case 0x4a8091:c.instructions+=3;goto B4a8091;
case 0x4a8092:c.instructions+=2;goto B4a8092;
case 0x4a8093:c.instructions+=1;goto B4a8093;
case 0x4a8096:goto L4a8096;
case 0x4a809c:c.instructions+=1;goto B4a809c;
case 0x4a80a2:goto L4a80a2;
case 0x4a80a6:c.instructions+=6;goto B4a80a6;
case 0x4a80a7:c.instructions+=5;goto B4a80a7;
case 0x4a80a8:c.instructions+=4;goto B4a80a8;
case 0x4a80a9:c.instructions+=3;goto B4a80a9;
case 0x4a80aa:c.instructions+=2;goto B4a80aa;
case 0x4a80ac:c.instructions+=1;goto B4a80ac;
case 0x4a80b1:goto L4a80b1;
case 0x4a80b7:c.instructions+=1;goto B4a80b7;
case 0x4a80bd:goto L4a80bd;
case 0x4a80c3:goto L4a80c3;
case 0x4a80c9:c.instructions+=1;goto B4a80c9;
case 0x4a80cf:goto L4a80cf;
case 0x4a80d5:goto L4a80d5;
case 0x4a80db:c.instructions+=1;goto B4a80db;
case 0x4a80dd:goto L4a80dd;
case 0x4a80e3:c.instructions+=1;goto B4a80e3;
case 0x4a80e9:goto L4a80e9;
case 0x4a80ec:c.instructions+=6;goto B4a80ec;
case 0x4a80ee:c.instructions+=5;goto B4a80ee;
case 0x4a80f3:c.instructions+=4;goto B4a80f3;
case 0x4a80f8:c.instructions+=3;goto B4a80f8;
case 0x4a80f9:c.instructions+=2;goto B4a80f9;
case 0x4a8103:c.instructions+=1;goto B4a8103;
case 0x4a8108:goto L4a8108;
case 0x4a810b:c.instructions+=6;goto B4a810b;
case 0x4a810c:c.instructions+=5;goto B4a810c;
case 0x4a810d:c.instructions+=4;goto B4a810d;
case 0x4a810e:c.instructions+=3;goto B4a810e;
case 0x4a8115:c.instructions+=2;goto B4a8115;
case 0x4a8116:c.instructions+=1;goto B4a8116;
case 0x4a8119:goto L4a8119;
case 0x4a811c:c.instructions+=7;goto B4a811c;
case 0x4a811e:c.instructions+=6;goto B4a811e;
case 0x4a8123:c.instructions+=5;goto B4a8123;
case 0x4a8128:c.instructions+=4;goto B4a8128;
case 0x4a8129:c.instructions+=3;goto B4a8129;
case 0x4a8130:c.instructions+=2;goto B4a8130;
case 0x4a813a:c.instructions+=1;goto B4a813a;
case 0x4a813f:goto L4a813f;
case 0x4a8142:c.instructions+=3;goto B4a8142;
case 0x4a8144:c.instructions+=2;goto B4a8144;
case 0x4a8145:c.instructions+=1;goto B4a8145;
case 0x4a814a:goto L4a814a;
case 0x4a814d:c.instructions+=4;goto B4a814d;
case 0x4a814f:c.instructions+=3;goto B4a814f;
case 0x4a8154:c.instructions+=2;goto B4a8154;
case 0x4a8155:c.instructions+=1;goto B4a8155;
case 0x4a815a:goto L4a815a;
case 0x4a815d:c.instructions+=5;goto B4a815d;
case 0x4a815e:c.instructions+=4;goto B4a815e;
case 0x4a815f:c.instructions+=3;goto B4a815f;
case 0x4a8160:c.instructions+=2;goto B4a8160;
case 0x4a8161:c.instructions+=1;goto B4a8161;
case 0x4a8164:goto L4a8164;
case 0x4a8167:c.instructions+=5;goto B4a8167;
case 0x4a8169:c.instructions+=4;goto B4a8169;
case 0x4a816a:c.instructions+=3;goto B4a816a;
case 0x4a8171:c.instructions+=2;goto B4a8171;
case 0x4a8178:c.instructions+=1;goto B4a8178;
case 0x4a817d:goto L4a817d;
case 0x4a817f:c.instructions+=2;goto B4a817f;
case 0x4a8184:c.instructions+=1;goto B4a8184;
case 0x4a8189:goto L4a8189;
case 0x4a818b:c.instructions+=2;goto B4a818b;
case 0x4a8190:c.instructions+=1;goto B4a8190;
case 0x4a8195:goto L4a8195;
case 0x4a8198:c.instructions+=5;goto B4a8198;
case 0x4a8199:c.instructions+=4;goto B4a8199;
case 0x4a819a:c.instructions+=3;goto B4a819a;
case 0x4a819b:c.instructions+=2;goto B4a819b;
case 0x4a819c:c.instructions+=1;goto B4a819c;
case 0x4a819f:goto L4a819f;
case 0x4a81a5:c.instructions+=1;goto B4a81a5;
case 0x4a81ab:goto L4a81ab;
case 0x4a81b1:c.instructions+=3;goto B4a81b1;
case 0x4a81b2:c.instructions+=2;goto B4a81b2;
case 0x4a81b4:c.instructions+=1;goto B4a81b4;
case 0x4a81b9:goto L4a81b9;
case 0x4a81bb:c.instructions+=2;goto B4a81bb;
case 0x4a81bd:c.instructions+=1;goto B4a81bd;
case 0x4a81c3:goto L4a81c3;
case 0x4a81c6:c.instructions+=2;goto B4a81c6;
case 0x4a81c8:c.instructions+=1;goto B4a81c8;
case 0x4a81ce:goto L4a81ce;
case 0x4a81d0:c.instructions+=2;goto B4a81d0;
case 0x4a81d2:c.instructions+=1;goto B4a81d2;
case 0x4a81d5:goto L4a81d5;
case 0x4a81d7:c.instructions+=2;goto B4a81d7;
case 0x4a81d9:c.instructions+=1;goto B4a81d9;
case 0x4a81dc:goto L4a81dc;
case 0x4a81e1:goto L4a81e1;
case 0x4a81e8:c.instructions+=1;goto B4a81e8;
case 0x4a81ea:goto L4a81ea;
case 0x4a81ef:c.instructions+=2;goto B4a81ef;
case 0x4a81f1:c.instructions+=1;goto B4a81f1;
case 0x4a81f6:goto L4a81f6;
case 0x4a81f8:c.instructions+=1;goto B4a81f8;
case 0x4a81fe:goto L4a81fe;
case 0x4a8201:c.instructions+=4;goto B4a8201;
case 0x4a8206:c.instructions+=3;goto B4a8206;
case 0x4a820b:c.instructions+=2;goto B4a820b;
case 0x4a820c:c.instructions+=1;goto B4a820c;
case 0x4a8211:goto L4a8211;
case 0x4a8214:c.instructions+=2;goto B4a8214;
case 0x4a8216:c.instructions+=1;goto B4a8216;
case 0x4a8218:goto L4a8218;
case 0x4a821b:c.instructions+=5;goto B4a821b;
case 0x4a821d:c.instructions+=4;goto B4a821d;
case 0x4a8222:c.instructions+=3;goto B4a8222;
case 0x4a8227:c.instructions+=2;goto B4a8227;
case 0x4a8228:c.instructions+=1;goto B4a8228;
case 0x4a822d:goto L4a822d;
case 0x4a8230:goto L4a8230;
case 0x4a8234:c.instructions+=6;goto B4a8234;
case 0x4a8235:c.instructions+=5;goto B4a8235;
case 0x4a8236:c.instructions+=4;goto B4a8236;
case 0x4a8237:c.instructions+=3;goto B4a8237;
case 0x4a823c:c.instructions+=2;goto B4a823c;
case 0x4a823e:c.instructions+=1;goto B4a823e;
case 0x4a8243:goto L4a8243;
case 0x4a8244:c.instructions+=4;goto B4a8244;
case 0x4a8245:c.instructions+=3;goto B4a8245;
case 0x4a8246:c.instructions+=2;goto B4a8246;
case 0x4a8247:c.instructions+=1;goto B4a8247;
case 0x4a824a:goto L4a824a;
case 0x4a8250:c.instructions+=1;goto B4a8250;
case 0x4a8256:goto L4a8256;
case 0x4a825c:c.instructions+=1;goto B4a825c;
case 0x4a8262:goto L4a8262;
case 0x4a8268:c.instructions+=1;goto B4a8268;
case 0x4a826e:goto L4a826e;
case 0x4a8274:c.instructions+=2;goto B4a8274;
case 0x4a8279:c.instructions+=1;goto B4a8279;
case 0x4a827b:goto L4a827b;
case 0x4a8280:c.instructions+=1;goto B4a8280;
case 0x4a8282:goto L4a8282;
case 0x4a8287:c.instructions+=1;goto B4a8287;
case 0x4a828d:goto L4a828d;
case 0x4a8293:c.instructions+=2;goto B4a8293;
case 0x4a8295:c.instructions+=1;goto B4a8295;
case 0x4a829b:goto L4a829b;
case 0x4a829c:c.instructions+=5;goto B4a829c;
case 0x4a829d:c.instructions+=4;goto B4a829d;
case 0x4a829e:c.instructions+=3;goto B4a829e;
case 0x4a82a5:c.instructions+=2;goto B4a82a5;
case 0x4a82a6:c.instructions+=1;goto B4a82a6;
case 0x4a82a9:goto L4a82a9;
case 0x4a82af:c.instructions+=2;goto B4a82af;
case 0x4a82b1:c.instructions+=1;goto B4a82b1;
case 0x4a82b7:goto L4a82b7;
case 0x4a82be:c.instructions+=1;goto B4a82be;
case 0x4a82c0:goto L4a82c0;
case 0x4a82c5:goto L4a82c5;
case 0x4a82c8:c.instructions+=3;goto B4a82c8;
case 0x4a82ca:c.instructions+=2;goto B4a82ca;
case 0x4a82cb:c.instructions+=1;goto B4a82cb;
case 0x4a82d0:goto L4a82d0;
case 0x4a82d3:c.instructions+=4;goto B4a82d3;
case 0x4a82d5:c.instructions+=3;goto B4a82d5;
case 0x4a82da:c.instructions+=2;goto B4a82da;
case 0x4a82db:c.instructions+=1;goto B4a82db;
case 0x4a82e0:goto L4a82e0;
case 0x4a82e3:c.instructions+=5;goto B4a82e3;
case 0x4a82e4:c.instructions+=4;goto B4a82e4;
case 0x4a82e5:c.instructions+=3;goto B4a82e5;
case 0x4a82e6:c.instructions+=2;goto B4a82e6;
case 0x4a82e7:c.instructions+=1;goto B4a82e7;
case 0x4a82ea:goto L4a82ea;
case 0x4a82ed:c.instructions+=3;goto B4a82ed;
case 0x4a82ef:c.instructions+=2;goto B4a82ef;
case 0x4a82f0:c.instructions+=1;goto B4a82f0;
case 0x4a82f5:goto L4a82f5;
case 0x4a82f8:c.instructions+=4;goto B4a82f8;
case 0x4a82fa:c.instructions+=3;goto B4a82fa;
case 0x4a82ff:c.instructions+=2;goto B4a82ff;
case 0x4a8300:c.instructions+=1;goto B4a8300;
case 0x4a8305:goto L4a8305;
case 0x4a8308:c.instructions+=5;goto B4a8308;
case 0x4a8309:c.instructions+=4;goto B4a8309;
case 0x4a830a:c.instructions+=3;goto B4a830a;
case 0x4a830b:c.instructions+=2;goto B4a830b;
case 0x4a830c:c.instructions+=1;goto B4a830c;
case 0x4a830f:goto L4a830f;
case 0x4a8314:c.instructions+=3;goto B4a8314;
case 0x4a8319:c.instructions+=2;goto B4a8319;
case 0x4a831b:c.instructions+=1;goto B4a831b;
case 0x4a8321:goto L4a8321;
case 0x4a8326:goto L4a8326;
case 0x4a832c:c.instructions+=4;goto B4a832c;
case 0x4a832f:c.instructions+=3;goto B4a832f;
case 0x4a8330:c.instructions+=2;goto B4a8330;
case 0x4a8335:c.instructions+=1;goto B4a8335;
case 0x4a833a:goto L4a833a;
case 0x4a833d:c.instructions+=5;goto B4a833d;
case 0x4a833e:c.instructions+=4;goto B4a833e;
case 0x4a833f:c.instructions+=3;goto B4a833f;
case 0x4a8340:c.instructions+=2;goto B4a8340;
case 0x4a8341:c.instructions+=1;goto B4a8341;
case 0x4a8344:goto L4a8344;
case 0x4a8348:c.instructions+=6;goto B4a8348;
case 0x4a8349:c.instructions+=5;goto B4a8349;
case 0x4a834a:c.instructions+=4;goto B4a834a;
case 0x4a834b:c.instructions+=3;goto B4a834b;
case 0x4a8350:c.instructions+=2;goto B4a8350;
case 0x4a8352:c.instructions+=1;goto B4a8352;
case 0x4a8357:goto L4a8357;
case 0x4a835a:c.instructions+=5;goto B4a835a;
case 0x4a835c:c.instructions+=4;goto B4a835c;
case 0x4a8361:c.instructions+=3;goto B4a8361;
case 0x4a8366:c.instructions+=2;goto B4a8366;
case 0x4a8367:c.instructions+=1;goto B4a8367;
case 0x4a836c:goto L4a836c;
case 0x4a8371:c.instructions+=3;goto B4a8371;
case 0x4a8374:c.instructions+=2;goto B4a8374;
case 0x4a8377:c.instructions+=1;goto B4a8377;
case 0x4a8379:goto L4a8379;
case 0x4a837e:c.instructions+=2;goto B4a837e;
case 0x4a8380:c.instructions+=1;goto B4a8380;
case 0x4a8385:goto L4a8385;
case 0x4a8387:c.instructions+=1;goto B4a8387;
case 0x4a8389:goto L4a8389;
case 0x4a838e:goto L4a838e;
case 0x4a838f:c.instructions+=1;goto B4a838f;
case 0x4a8394:goto L4a8394;
case 0x4a8397:c.instructions+=2;goto B4a8397;
case 0x4a8399:c.instructions+=1;goto B4a8399;
case 0x4a839b:goto L4a839b;
case 0x4a83a0:goto L4a83a0;
case 0x4a83a1:c.instructions+=1;goto B4a83a1;
case 0x4a83a6:goto L4a83a6;
case 0x4a83a9:goto L4a83a9;
case 0x4a83ac:c.instructions+=3;goto B4a83ac;
case 0x4a83ad:c.instructions+=2;goto B4a83ad;
case 0x4a83b2:c.instructions+=1;goto B4a83b2;
case 0x4a83b7:goto L4a83b7;
case 0x4a83ba:goto L4a83ba;
case 0x4a83bb:c.instructions+=1;goto B4a83bb;
case 0x4a83bc:goto L4a83bc;
case 0x4a83bd:c.instructions+=2;goto B4a83bd;
case 0x4a83be:c.instructions+=1;goto B4a83be;
case 0x4a83d0:goto L4a83d0;
case 0x4a83d2:c.instructions+=2;goto B4a83d2;
case 0x4a83d4:c.instructions+=1;goto B4a83d4;
case 0x4a83d9:goto L4a83d9;
case 0x4a83dc:c.instructions+=2;goto B4a83dc;
case 0x4a83e1:c.instructions+=1;goto B4a83e1;
case 0x4a83f0:goto L4a83f0;
case 0x4a83f2:c.instructions+=2;goto B4a83f2;
case 0x4a83f4:c.instructions+=1;goto B4a83f4;
case 0x4a83f9:goto L4a83f9;
case 0x4a83fc:c.instructions+=2;goto B4a83fc;
case 0x4a8401:c.instructions+=1;goto B4a8401;
case 0x4a8410:goto L4a8410;
case 0x4a8412:c.instructions+=13;goto B4a8412;
case 0x4a8417:c.instructions+=12;goto B4a8417;
case 0x4a841d:c.instructions+=11;goto B4a841d;
case 0x4a841e:c.instructions+=10;goto B4a841e;
case 0x4a8425:c.instructions+=9;goto B4a8425;
case 0x4a8426:c.instructions+=8;goto B4a8426;
case 0x4a8427:c.instructions+=7;goto B4a8427;
case 0x4a8429:c.instructions+=6;goto B4a8429;
case 0x4a842d:c.instructions+=5;goto B4a842d;
case 0x4a8433:c.instructions+=4;goto B4a8433;
case 0x4a8436:c.instructions+=3;goto B4a8436;
case 0x4a8438:c.instructions+=2;goto B4a8438;
case 0x4a8440:c.instructions+=1;goto B4a8440;
case 0x4a8442:goto L4a8442;
case 0x4a8443:c.instructions+=1;goto B4a8443;
case 0x4a8448:goto L4a8448;
case 0x4a844b:goto L4a844b;
case 0x4a844d:c.instructions+=3;goto B4a844d;
case 0x4a8454:c.instructions+=2;goto B4a8454;
case 0x4a845c:c.instructions+=1;goto B4a845c;
case 0x4a8461:goto L4a8461;
case 0x4a8465:c.instructions+=4;goto B4a8465;
case 0x4a8466:c.instructions+=3;goto B4a8466;
case 0x4a846d:c.instructions+=2;goto B4a846d;
case 0x4a8470:c.instructions+=1;goto B4a8470;
case 0x4a8480:goto L4a8480;
case 0x4a8481:c.instructions+=5;goto B4a8481;
case 0x4a8482:c.instructions+=4;goto B4a8482;
case 0x4a8486:c.instructions+=3;goto B4a8486;
case 0x4a8488:c.instructions+=2;goto B4a8488;
case 0x4a848a:c.instructions+=1;goto B4a848a;
case 0x4a8490:goto L4a8490;
case 0x4a8493:c.instructions+=2;goto B4a8493;
case 0x4a8495:c.instructions+=1;goto B4a8495;
case 0x4a8497:goto L4a8497;
case 0x4a849a:c.instructions+=3;goto B4a849a;
case 0x4a849f:c.instructions+=2;goto B4a849f;
case 0x4a84a0:c.instructions+=1;goto B4a84a0;
case 0x4a84a5:goto L4a84a5;
case 0x4a84a6:c.instructions+=1;goto B4a84a6;
case 0x4a84ab:goto L4a84ab;
case 0x4a84ae:c.instructions+=6;goto B4a84ae;
case 0x4a84b1:c.instructions+=5;goto B4a84b1;
case 0x4a84b4:c.instructions+=4;goto B4a84b4;
case 0x4a84b5:c.instructions+=3;goto B4a84b5;
case 0x4a84ba:c.instructions+=2;goto B4a84ba;
case 0x4a84bb:c.instructions+=1;goto B4a84bb;
case 0x4a84c0:goto L4a84c0;
case 0x4a84c3:c.instructions+=2;goto B4a84c3;
case 0x4a84c4:c.instructions+=1;goto B4a84c4;
case 0x4a84c9:goto L4a84c9;
case 0x4a84cc:goto L4a84cc;
case 0x4a84cf:c.instructions+=2;goto B4a84cf;
case 0x4a84d1:c.instructions+=1;goto B4a84d1;
case 0x4a84d3:goto L4a84d3;
case 0x4a84d6:c.instructions+=3;goto B4a84d6;
case 0x4a84db:c.instructions+=2;goto B4a84db;
case 0x4a84dc:c.instructions+=1;goto B4a84dc;
case 0x4a84e1:goto L4a84e1;
case 0x4a84e2:c.instructions+=1;goto B4a84e2;
case 0x4a84e7:goto L4a84e7;
case 0x4a84ea:c.instructions+=6;goto B4a84ea;
case 0x4a84ed:c.instructions+=5;goto B4a84ed;
case 0x4a84f0:c.instructions+=4;goto B4a84f0;
case 0x4a84f1:c.instructions+=3;goto B4a84f1;
case 0x4a84f6:c.instructions+=2;goto B4a84f6;
case 0x4a84f7:c.instructions+=1;goto B4a84f7;
case 0x4a84fc:goto L4a84fc;
case 0x4a84ff:c.instructions+=2;goto B4a84ff;
case 0x4a8500:c.instructions+=1;goto B4a8500;
case 0x4a8505:goto L4a8505;
case 0x4a8508:goto L4a8508;
case 0x4a850b:c.instructions+=2;goto B4a850b;
case 0x4a850d:c.instructions+=1;goto B4a850d;
case 0x4a850f:goto L4a850f;
case 0x4a8512:c.instructions+=3;goto B4a8512;
case 0x4a8517:c.instructions+=2;goto B4a8517;
case 0x4a8518:c.instructions+=1;goto B4a8518;
case 0x4a851d:goto L4a851d;
case 0x4a851e:c.instructions+=1;goto B4a851e;
case 0x4a8523:goto L4a8523;
case 0x4a8526:c.instructions+=5;goto B4a8526;
case 0x4a8528:c.instructions+=4;goto B4a8528;
case 0x4a852d:c.instructions+=3;goto B4a852d;
case 0x4a8532:c.instructions+=2;goto B4a8532;
case 0x4a8533:c.instructions+=1;goto B4a8533;
case 0x4a8538:goto L4a8538;
case 0x4a853b:goto L4a853b;
case 0x4a8541:c.instructions+=4;goto B4a8541;
case 0x4a8542:c.instructions+=3;goto B4a8542;
case 0x4a8545:c.instructions+=2;goto B4a8545;
case 0x4a8546:c.instructions+=1;goto B4a8546;
case 0x4a8549:goto L4a8549;
case 0x4a854c:c.instructions+=3;goto B4a854c;
case 0x4a8551:c.instructions+=2;goto B4a8551;
case 0x4a8552:c.instructions+=1;goto B4a8552;
case 0x4a8557:goto L4a8557;
case 0x4a8558:c.instructions+=1;goto B4a8558;
case 0x4a855d:goto L4a855d;
case 0x4a8560:c.instructions+=3;goto B4a8560;
case 0x4a8565:c.instructions+=2;goto B4a8565;
case 0x4a8566:c.instructions+=1;goto B4a8566;
case 0x4a856b:goto L4a856b;
case 0x4a856c:c.instructions+=1;goto B4a856c;
case 0x4a8571:goto L4a8571;
case 0x4a8574:c.instructions+=3;goto B4a8574;
case 0x4a8579:c.instructions+=2;goto B4a8579;
case 0x4a857a:c.instructions+=1;goto B4a857a;
case 0x4a857f:goto L4a857f;
case 0x4a8580:c.instructions+=1;goto B4a8580;
case 0x4a8585:goto L4a8585;
case 0x4a8588:c.instructions+=3;goto B4a8588;
case 0x4a8589:c.instructions+=2;goto B4a8589;
case 0x4a858a:c.instructions+=1;goto B4a858a;
case 0x4a8590:goto L4a8590;
case 0x4a8591:c.instructions+=5;goto B4a8591;
case 0x4a8595:c.instructions+=4;goto B4a8595;
case 0x4a8596:c.instructions+=3;goto B4a8596;
case 0x4a8598:c.instructions+=2;goto B4a8598;
case 0x4a859d:c.instructions+=1;goto B4a859d;
case 0x4a85a0:goto L4a85a0;
case 0x4a85a2:c.instructions+=4;goto B4a85a2;
case 0x4a85a5:c.instructions+=3;goto B4a85a5;
case 0x4a85a7:c.instructions+=2;goto B4a85a7;
case 0x4a85aa:c.instructions+=1;goto B4a85aa;
case 0x4a85ac:goto L4a85ac;
case 0x4a85ad:goto L4a85ad;
case 0x4a85b0:c.instructions+=2;goto B4a85b0;
case 0x4a85b5:c.instructions+=1;goto B4a85b5;
case 0x4a85b7:goto L4a85b7;
case 0x4a85b9:c.instructions+=1;goto B4a85b9;
case 0x4a85bb:goto L4a85bb;
case 0x4a85bc:c.instructions+=1;goto B4a85bc;
case 0x4a85c1:goto L4a85c1;
case 0x4a85c4:c.instructions+=4;goto B4a85c4;
case 0x4a85c6:c.instructions+=3;goto B4a85c6;
case 0x4a85c8:c.instructions+=2;goto B4a85c8;
case 0x4a85cd:c.instructions+=1;goto B4a85cd;
case 0x4a85d0:goto L4a85d0;
case 0x4a85d2:c.instructions+=4;goto B4a85d2;
case 0x4a85d5:c.instructions+=3;goto B4a85d5;
case 0x4a85d7:c.instructions+=2;goto B4a85d7;
case 0x4a85da:c.instructions+=1;goto B4a85da;
case 0x4a85dc:goto L4a85dc;
case 0x4a85de:c.instructions+=1;goto B4a85de;
case 0x4a85e0:goto L4a85e0;
case 0x4a85e1:goto L4a85e1;
case 0x4a85e4:c.instructions+=3;goto B4a85e4;
case 0x4a85e5:c.instructions+=2;goto B4a85e5;
case 0x4a85eb:c.instructions+=1;goto B4a85eb;
case 0x4a85ed:goto L4a85ed;
case 0x4a85ee:c.instructions+=3;goto B4a85ee;
case 0x4a85f0:c.instructions+=2;goto B4a85f0;
case 0x4a85f1:c.instructions+=1;goto B4a85f1;
case 0x4a85f4:goto L4a85f4;
case 0x4a85f7:c.instructions+=4;goto B4a85f7;
case 0x4a85f8:c.instructions+=3;goto B4a85f8;
case 0x4a85fd:c.instructions+=2;goto B4a85fd;
case 0x4a85fe:c.instructions+=1;goto B4a85fe;
case 0x4a8610:goto L4a8610;
case 0x4a8612:c.instructions+=2;goto B4a8612;
case 0x4a8614:c.instructions+=1;goto B4a8614;
case 0x4a8619:goto L4a8619;
case 0x4a861c:c.instructions+=2;goto B4a861c;
case 0x4a8621:c.instructions+=1;goto B4a8621;
case 0x4a8630:goto L4a8630;
case 0x4a8636:c.instructions+=2;goto B4a8636;
case 0x4a8638:c.instructions+=1;goto B4a8638;
case 0x4a863a:goto L4a863a;
case 0x4a863c:c.instructions+=2;goto B4a863c;
case 0x4a863e:c.instructions+=1;goto B4a863e;
case 0x4a8640:goto L4a8640;
case 0x4a864a:c.instructions+=1;goto B4a864a;
case 0x4a8650:goto L4a8650;
case 0x4a8652:c.instructions+=11;goto B4a8652;
case 0x4a8657:c.instructions+=10;goto B4a8657;
case 0x4a865d:c.instructions+=9;goto B4a865d;
case 0x4a865e:c.instructions+=8;goto B4a865e;
case 0x4a8665:c.instructions+=7;goto B4a8665;
case 0x4a8666:c.instructions+=6;goto B4a8666;
case 0x4a866a:c.instructions+=5;goto B4a866a;
case 0x4a866b:c.instructions+=4;goto B4a866b;
case 0x4a866d:c.instructions+=3;goto B4a866d;
case 0x4a866e:c.instructions+=2;goto B4a866e;
case 0x4a8672:c.instructions+=1;goto B4a8672;
case 0x4a8677:goto L4a8677;
case 0x4a8679:c.instructions+=12;goto B4a8679;
case 0x4a867f:c.instructions+=11;goto B4a867f;
case 0x4a8682:c.instructions+=10;goto B4a8682;
case 0x4a8688:c.instructions+=9;goto B4a8688;
case 0x4a868a:c.instructions+=8;goto B4a868a;
case 0x4a868d:c.instructions+=7;goto B4a868d;
case 0x4a8690:c.instructions+=6;goto B4a8690;
case 0x4a8695:c.instructions+=5;goto B4a8695;
case 0x4a869a:c.instructions+=4;goto B4a869a;
case 0x4a869b:c.instructions+=3;goto B4a869b;
case 0x4a869f:c.instructions+=2;goto B4a869f;
case 0x4a86a2:c.instructions+=1;goto B4a86a2;
case 0x4a86a7:goto L4a86a7;
case 0x4a86aa:c.instructions+=5;goto B4a86aa;
case 0x4a86ac:c.instructions+=4;goto B4a86ac;
case 0x4a86b1:c.instructions+=3;goto B4a86b1;
case 0x4a86b6:c.instructions+=2;goto B4a86b6;
case 0x4a86b7:c.instructions+=1;goto B4a86b7;
case 0x4a86bc:goto L4a86bc;
case 0x4a86c0:c.instructions+=6;goto B4a86c0;
case 0x4a86c3:c.instructions+=5;goto B4a86c3;
case 0x4a86c5:c.instructions+=4;goto B4a86c5;
case 0x4a86c6:c.instructions+=3;goto B4a86c6;
case 0x4a86cd:c.instructions+=2;goto B4a86cd;
case 0x4a86d0:c.instructions+=1;goto B4a86d0;
case 0x4a86e0:goto L4a86e0;
case 0x4a86e1:c.instructions+=2;goto B4a86e1;
case 0x4a86e3:c.instructions+=1;goto B4a86e3;
case 0x4a86e8:goto L4a86e8;
case 0x4a86ed:c.instructions+=1;goto B4a86ed;
case 0x4a86ef:goto L4a86ef;
case 0x4a86f0:c.instructions+=1;goto B4a86f0;
case 0x4a86f5:goto L4a86f5;
case 0x4a86f8:goto L4a86f8;
case 0x4a86fa:c.instructions+=2;goto B4a86fa;
case 0x4a86fb:c.instructions+=1;goto B4a86fb;
case 0x4a8700:goto L4a8700;
case 0x4a8706:c.instructions+=1;goto B4a8706;
case 0x4a8710:goto L4a8710;
case 0x4a8711:c.instructions+=2;goto B4a8711;
case 0x4a8713:c.instructions+=1;goto B4a8713;
case 0x4a8718:goto L4a8718;
case 0x4a871d:c.instructions+=1;goto B4a871d;
case 0x4a871f:goto L4a871f;
case 0x4a8720:c.instructions+=1;goto B4a8720;
case 0x4a8725:goto L4a8725;
case 0x4a8728:goto L4a8728;
case 0x4a872a:c.instructions+=2;goto B4a872a;
case 0x4a872b:c.instructions+=1;goto B4a872b;
case 0x4a8730:goto L4a8730;
case 0x4a8736:c.instructions+=1;goto B4a8736;
case 0x4a8740:goto L4a8740;
case 0x4a8742:c.instructions+=8;goto B4a8742;
case 0x4a8747:c.instructions+=7;goto B4a8747;
case 0x4a874d:c.instructions+=6;goto B4a874d;
case 0x4a874e:c.instructions+=5;goto B4a874e;
case 0x4a8755:c.instructions+=4;goto B4a8755;
case 0x4a8756:c.instructions+=3;goto B4a8756;
case 0x4a8757:c.instructions+=2;goto B4a8757;
case 0x4a8759:c.instructions+=1;goto B4a8759;
case 0x4a875e:goto L4a875e;
case 0x4a8760:c.instructions+=5;goto B4a8760;
case 0x4a8763:c.instructions+=4;goto B4a8763;
case 0x4a8767:c.instructions+=3;goto B4a8767;
case 0x4a8769:c.instructions+=2;goto B4a8769;
case 0x4a8771:c.instructions+=1;goto B4a8771;
case 0x4a8773:goto L4a8773;
case 0x4a8777:c.instructions+=3;goto B4a8777;
case 0x4a8778:c.instructions+=2;goto B4a8778;
case 0x4a877a:c.instructions+=1;goto B4a877a;
case 0x4a877f:goto L4a877f;
case 0x4a8785:c.instructions+=7;goto B4a8785;
case 0x4a8789:c.instructions+=6;goto B4a8789;
case 0x4a878b:c.instructions+=5;goto B4a878b;
case 0x4a878c:c.instructions+=4;goto B4a878c;
case 0x4a8790:c.instructions+=3;goto B4a8790;
case 0x4a8797:c.instructions+=2;goto B4a8797;
case 0x4a879a:c.instructions+=1;goto B4a879a;
case 0x4a879b:goto L4a879b;
case 0x4a879f:c.instructions+=5;goto B4a879f;
case 0x4a87a1:c.instructions+=4;goto B4a87a1;
case 0x4a87a2:c.instructions+=3;goto B4a87a2;
case 0x4a87a9:c.instructions+=2;goto B4a87a9;
case 0x4a87ac:c.instructions+=1;goto B4a87ac;
case 0x4a87b0:goto L4a87b0;
case 0x4a87b1:c.instructions+=2;goto B4a87b1;
case 0x4a87b3:c.instructions+=1;goto B4a87b3;
case 0x4a87b8:goto L4a87b8;
case 0x4a87bd:c.instructions+=1;goto B4a87bd;
case 0x4a87bf:goto L4a87bf;
case 0x4a87c0:c.instructions+=1;goto B4a87c0;
case 0x4a87c5:goto L4a87c5;
case 0x4a87c8:goto L4a87c8;
case 0x4a87ca:c.instructions+=2;goto B4a87ca;
case 0x4a87cb:c.instructions+=1;goto B4a87cb;
case 0x4a87d0:goto L4a87d0;
case 0x4a87d6:c.instructions+=1;goto B4a87d6;
case 0x4a87e0:goto L4a87e0;
case 0x4a87e2:c.instructions+=8;goto B4a87e2;
case 0x4a87e7:c.instructions+=7;goto B4a87e7;
case 0x4a87ed:c.instructions+=6;goto B4a87ed;
case 0x4a87ee:c.instructions+=5;goto B4a87ee;
case 0x4a87f5:c.instructions+=4;goto B4a87f5;
case 0x4a87f6:c.instructions+=3;goto B4a87f6;
case 0x4a87f7:c.instructions+=2;goto B4a87f7;
case 0x4a87f9:c.instructions+=1;goto B4a87f9;
case 0x4a87fe:goto L4a87fe;
case 0x4a8800:c.instructions+=5;goto B4a8800;
case 0x4a8803:c.instructions+=4;goto B4a8803;
case 0x4a8807:c.instructions+=3;goto B4a8807;
case 0x4a8809:c.instructions+=2;goto B4a8809;
case 0x4a8811:c.instructions+=1;goto B4a8811;
case 0x4a8813:goto L4a8813;
case 0x4a8817:c.instructions+=3;goto B4a8817;
case 0x4a8818:c.instructions+=2;goto B4a8818;
case 0x4a881a:c.instructions+=1;goto B4a881a;
case 0x4a881f:goto L4a881f;
case 0x4a8825:c.instructions+=9;goto B4a8825;
case 0x4a882c:c.instructions+=8;goto B4a882c;
case 0x4a8832:c.instructions+=7;goto B4a8832;
case 0x4a8835:c.instructions+=6;goto B4a8835;
case 0x4a8837:c.instructions+=5;goto B4a8837;
case 0x4a8838:c.instructions+=4;goto B4a8838;
case 0x4a883c:c.instructions+=3;goto B4a883c;
case 0x4a8843:c.instructions+=2;goto B4a8843;
case 0x4a8846:c.instructions+=1;goto B4a8846;
case 0x4a8847:goto L4a8847;
case 0x4a884b:c.instructions+=5;goto B4a884b;
case 0x4a884d:c.instructions+=4;goto B4a884d;
case 0x4a884e:c.instructions+=3;goto B4a884e;
case 0x4a8855:c.instructions+=2;goto B4a8855;
case 0x4a8858:c.instructions+=1;goto B4a8858;
case 0x4a8860:goto L4a8860;
case 0x4a8862:c.instructions+=11;goto B4a8862;
case 0x4a8867:c.instructions+=10;goto B4a8867;
case 0x4a886d:c.instructions+=9;goto B4a886d;
case 0x4a886e:c.instructions+=8;goto B4a886e;
case 0x4a8875:c.instructions+=7;goto B4a8875;
case 0x4a8876:c.instructions+=6;goto B4a8876;
case 0x4a887a:c.instructions+=5;goto B4a887a;
case 0x4a887b:c.instructions+=4;goto B4a887b;
case 0x4a887d:c.instructions+=3;goto B4a887d;
case 0x4a887e:c.instructions+=2;goto B4a887e;
case 0x4a8882:c.instructions+=1;goto B4a8882;
case 0x4a8887:goto L4a8887;
case 0x4a888a:c.instructions+=6;goto B4a888a;
case 0x4a888f:c.instructions+=5;goto B4a888f;
case 0x4a8894:c.instructions+=4;goto B4a8894;
case 0x4a8895:c.instructions+=3;goto B4a8895;
case 0x4a889d:c.instructions+=2;goto B4a889d;
case 0x4a88a3:c.instructions+=1;goto B4a88a3;
case 0x4a88a8:goto L4a88a8;
case 0x4a88ab:c.instructions+=2;goto B4a88ab;
case 0x4a88ac:c.instructions+=1;goto B4a88ac;
case 0x4a88b1:goto L4a88b1;
case 0x4a88b7:c.instructions+=3;goto B4a88b7;
case 0x4a88ba:c.instructions+=2;goto B4a88ba;
case 0x4a88bf:c.instructions+=1;goto B4a88bf;
case 0x4a88c4:goto L4a88c4;
case 0x4a88c9:c.instructions+=2;goto B4a88c9;
case 0x4a88cb:c.instructions+=1;goto B4a88cb;
case 0x4a88cd:goto L4a88cd;
case 0x4a88d2:c.instructions+=1;goto B4a88d2;
case 0x4a88d7:goto L4a88d7;
case 0x4a88da:c.instructions+=2;goto B4a88da;
case 0x4a88dc:c.instructions+=1;goto B4a88dc;
case 0x4a88de:goto L4a88de;
case 0x4a88e3:c.instructions+=1;goto B4a88e3;
case 0x4a88e8:goto L4a88e8;
case 0x4a88eb:goto L4a88eb;
case 0x4a88ef:c.instructions+=5;goto B4a88ef;
case 0x4a88f1:c.instructions+=4;goto B4a88f1;
case 0x4a88f2:c.instructions+=3;goto B4a88f2;
case 0x4a88f9:c.instructions+=2;goto B4a88f9;
case 0x4a88fc:c.instructions+=1;goto B4a88fc;
case 0x4a8900:goto L4a8900;
case 0x4a8901:c.instructions+=2;goto B4a8901;
case 0x4a8903:c.instructions+=1;goto B4a8903;
case 0x4a8908:goto L4a8908;
case 0x4a890d:c.instructions+=1;goto B4a890d;
case 0x4a890f:goto L4a890f;
case 0x4a8910:c.instructions+=1;goto B4a8910;
case 0x4a8915:goto L4a8915;
case 0x4a8918:goto L4a8918;
case 0x4a891a:c.instructions+=2;goto B4a891a;
case 0x4a891b:c.instructions+=1;goto B4a891b;
case 0x4a8920:goto L4a8920;
case 0x4a8926:c.instructions+=1;goto B4a8926;
case 0x4a8930:goto L4a8930;
case 0x4a8932:c.instructions+=11;goto B4a8932;
case 0x4a8937:c.instructions+=10;goto B4a8937;
case 0x4a893d:c.instructions+=9;goto B4a893d;
case 0x4a893e:c.instructions+=8;goto B4a893e;
case 0x4a8945:c.instructions+=7;goto B4a8945;
case 0x4a8946:c.instructions+=6;goto B4a8946;
case 0x4a894a:c.instructions+=5;goto B4a894a;
case 0x4a894b:c.instructions+=4;goto B4a894b;
case 0x4a894d:c.instructions+=3;goto B4a894d;
case 0x4a894e:c.instructions+=2;goto B4a894e;
case 0x4a8952:c.instructions+=1;goto B4a8952;
case 0x4a8957:goto L4a8957;
case 0x4a895a:c.instructions+=6;goto B4a895a;
case 0x4a895f:c.instructions+=5;goto B4a895f;
case 0x4a8964:c.instructions+=4;goto B4a8964;
case 0x4a8965:c.instructions+=3;goto B4a8965;
case 0x4a896d:c.instructions+=2;goto B4a896d;
case 0x4a8973:c.instructions+=1;goto B4a8973;
case 0x4a8978:goto L4a8978;
case 0x4a897b:c.instructions+=2;goto B4a897b;
case 0x4a897c:c.instructions+=1;goto B4a897c;
case 0x4a8981:goto L4a8981;
case 0x4a8985:c.instructions+=8;goto B4a8985;
case 0x4a8988:c.instructions+=7;goto B4a8988;
case 0x4a898c:c.instructions+=6;goto B4a898c;
case 0x4a8990:c.instructions+=5;goto B4a8990;
case 0x4a8992:c.instructions+=4;goto B4a8992;
case 0x4a8993:c.instructions+=3;goto B4a8993;
case 0x4a899a:c.instructions+=2;goto B4a899a;
case 0x4a899d:c.instructions+=1;goto B4a899d;
case 0x4a89a0:goto L4a89a0;
case 0x4a89a1:c.instructions+=2;goto B4a89a1;
case 0x4a89a3:c.instructions+=1;goto B4a89a3;
case 0x4a89a8:goto L4a89a8;
case 0x4a89ad:c.instructions+=1;goto B4a89ad;
case 0x4a89af:goto L4a89af;
case 0x4a89b0:c.instructions+=1;goto B4a89b0;
case 0x4a89b5:goto L4a89b5;
case 0x4a89b8:goto L4a89b8;
case 0x4a89ba:c.instructions+=2;goto B4a89ba;
case 0x4a89bb:c.instructions+=1;goto B4a89bb;
case 0x4a89c0:goto L4a89c0;
case 0x4a89c6:c.instructions+=1;goto B4a89c6;
case 0x4a89d0:goto L4a89d0;
case 0x4a89d2:c.instructions+=7;goto B4a89d2;
case 0x4a89d7:c.instructions+=6;goto B4a89d7;
case 0x4a89dd:c.instructions+=5;goto B4a89dd;
case 0x4a89de:c.instructions+=4;goto B4a89de;
case 0x4a89e5:c.instructions+=3;goto B4a89e5;
case 0x4a89e6:c.instructions+=2;goto B4a89e6;
case 0x4a89e8:c.instructions+=1;goto B4a89e8;
case 0x4a89ed:goto L4a89ed;
case 0x4a89f0:c.instructions+=4;goto B4a89f0;
case 0x4a89f4:c.instructions+=3;goto B4a89f4;
case 0x4a89f6:c.instructions+=2;goto B4a89f6;
case 0x4a89fe:c.instructions+=1;goto B4a89fe;
case 0x4a8a00:goto L4a8a00;
case 0x4a8a04:c.instructions+=3;goto B4a8a04;
case 0x4a8a05:c.instructions+=2;goto B4a8a05;
case 0x4a8a07:c.instructions+=1;goto B4a8a07;
case 0x4a8a0c:goto L4a8a0c;
case 0x4a8a10:c.instructions+=3;goto B4a8a10;
case 0x4a8a17:c.instructions+=2;goto B4a8a17;
case 0x4a8a1a:c.instructions+=1;goto B4a8a1a;
case 0x4a8a1b:goto L4a8a1b;
case 0x4a8a1f:c.instructions+=4;goto B4a8a1f;
case 0x4a8a21:c.instructions+=3;goto B4a8a21;
case 0x4a8a28:c.instructions+=2;goto B4a8a28;
case 0x4a8a2b:c.instructions+=1;goto B4a8a2b;
case 0x4a8a30:goto L4a8a30;
case 0x4a8a32:c.instructions+=11;goto B4a8a32;
case 0x4a8a37:c.instructions+=10;goto B4a8a37;
case 0x4a8a3d:c.instructions+=9;goto B4a8a3d;
case 0x4a8a3e:c.instructions+=8;goto B4a8a3e;
case 0x4a8a45:c.instructions+=7;goto B4a8a45;
case 0x4a8a46:c.instructions+=6;goto B4a8a46;
case 0x4a8a4a:c.instructions+=5;goto B4a8a4a;
case 0x4a8a4b:c.instructions+=4;goto B4a8a4b;
case 0x4a8a4d:c.instructions+=3;goto B4a8a4d;
case 0x4a8a4e:c.instructions+=2;goto B4a8a4e;
case 0x4a8a52:c.instructions+=1;goto B4a8a52;
case 0x4a8a57:goto L4a8a57;
case 0x4a8a5a:c.instructions+=6;goto B4a8a5a;
case 0x4a8a5f:c.instructions+=5;goto B4a8a5f;
case 0x4a8a64:c.instructions+=4;goto B4a8a64;
case 0x4a8a65:c.instructions+=3;goto B4a8a65;
case 0x4a8a6d:c.instructions+=2;goto B4a8a6d;
case 0x4a8a73:c.instructions+=1;goto B4a8a73;
case 0x4a8a78:goto L4a8a78;
case 0x4a8a7b:c.instructions+=2;goto B4a8a7b;
case 0x4a8a7c:c.instructions+=1;goto B4a8a7c;
case 0x4a8a81:goto L4a8a81;
case 0x4a8a85:c.instructions+=6;goto B4a8a85;
case 0x4a8a88:c.instructions+=5;goto B4a8a88;
case 0x4a8a8a:c.instructions+=4;goto B4a8a8a;
case 0x4a8a8b:c.instructions+=3;goto B4a8a8b;
case 0x4a8a92:c.instructions+=2;goto B4a8a92;
case 0x4a8a95:c.instructions+=1;goto B4a8a95;
case 0x4a8aa0:goto L4a8aa0;
case 0x4a8aa1:c.instructions+=2;goto B4a8aa1;
case 0x4a8aa3:c.instructions+=1;goto B4a8aa3;
case 0x4a8aa8:goto L4a8aa8;
case 0x4a8aad:c.instructions+=1;goto B4a8aad;
case 0x4a8aaf:goto L4a8aaf;
case 0x4a8ab0:c.instructions+=1;goto B4a8ab0;
case 0x4a8ab5:goto L4a8ab5;
case 0x4a8ab8:goto L4a8ab8;
case 0x4a8aba:c.instructions+=2;goto B4a8aba;
case 0x4a8abb:c.instructions+=1;goto B4a8abb;
case 0x4a8ac0:goto L4a8ac0;
case 0x4a8ac6:c.instructions+=1;goto B4a8ac6;
case 0x4a8ad0:goto L4a8ad0;
case 0x4a8ad2:c.instructions+=7;goto B4a8ad2;
case 0x4a8ad7:c.instructions+=6;goto B4a8ad7;
case 0x4a8add:c.instructions+=5;goto B4a8add;
case 0x4a8ade:c.instructions+=4;goto B4a8ade;
case 0x4a8ae5:c.instructions+=3;goto B4a8ae5;
case 0x4a8ae6:c.instructions+=2;goto B4a8ae6;
case 0x4a8ae8:c.instructions+=1;goto B4a8ae8;
case 0x4a8aed:goto L4a8aed;
case 0x4a8af0:c.instructions+=4;goto B4a8af0;
case 0x4a8af4:c.instructions+=3;goto B4a8af4;
case 0x4a8af6:c.instructions+=2;goto B4a8af6;
case 0x4a8afe:c.instructions+=1;goto B4a8afe;
case 0x4a8b00:goto L4a8b00;
case 0x4a8b04:c.instructions+=3;goto B4a8b04;
case 0x4a8b05:c.instructions+=2;goto B4a8b05;
case 0x4a8b07:c.instructions+=1;goto B4a8b07;
case 0x4a8b0c:goto L4a8b0c;
case 0x4a8b10:c.instructions+=3;goto B4a8b10;
case 0x4a8b17:c.instructions+=2;goto B4a8b17;
case 0x4a8b1a:c.instructions+=1;goto B4a8b1a;
case 0x4a8b1b:goto L4a8b1b;
case 0x4a8b1f:c.instructions+=4;goto B4a8b1f;
case 0x4a8b21:c.instructions+=3;goto B4a8b21;
case 0x4a8b28:c.instructions+=2;goto B4a8b28;
case 0x4a8b2b:c.instructions+=1;goto B4a8b2b;
case 0x4a8b30:goto L4a8b30;
case 0x4a8b32:c.instructions+=12;goto B4a8b32;
case 0x4a8b37:c.instructions+=11;goto B4a8b37;
case 0x4a8b3d:c.instructions+=10;goto B4a8b3d;
case 0x4a8b3e:c.instructions+=9;goto B4a8b3e;
case 0x4a8b45:c.instructions+=8;goto B4a8b45;
case 0x4a8b46:c.instructions+=7;goto B4a8b46;
case 0x4a8b4a:c.instructions+=6;goto B4a8b4a;
case 0x4a8b4b:c.instructions+=5;goto B4a8b4b;
case 0x4a8b4c:c.instructions+=4;goto B4a8b4c;
case 0x4a8b4e:c.instructions+=3;goto B4a8b4e;
case 0x4a8b4f:c.instructions+=2;goto B4a8b4f;
case 0x4a8b53:c.instructions+=1;goto B4a8b53;
case 0x4a8b58:goto L4a8b58;
case 0x4a8b5b:c.instructions+=4;goto B4a8b5b;
case 0x4a8b5d:c.instructions+=3;goto B4a8b5d;
case 0x4a8b65:c.instructions+=2;goto B4a8b65;
case 0x4a8b6b:c.instructions+=1;goto B4a8b6b;
case 0x4a8b70:goto L4a8b70;
case 0x4a8b73:c.instructions+=5;goto B4a8b73;
case 0x4a8b78:c.instructions+=4;goto B4a8b78;
case 0x4a8b7d:c.instructions+=3;goto B4a8b7d;
case 0x4a8b7e:c.instructions+=2;goto B4a8b7e;
case 0x4a8b83:c.instructions+=1;goto B4a8b83;
case 0x4a8b88:goto L4a8b88;
case 0x4a8b8b:c.instructions+=2;goto B4a8b8b;
case 0x4a8b8c:c.instructions+=1;goto B4a8b8c;
case 0x4a8b91:goto L4a8b91;
case 0x4a8b96:c.instructions+=1;goto B4a8b96;
case 0x4a8b9b:goto L4a8b9b;
case 0x4a8b9e:c.instructions+=2;goto B4a8b9e;
case 0x4a8ba0:c.instructions+=1;goto B4a8ba0;
case 0x4a8ba2:goto L4a8ba2;
case 0x4a8ba5:c.instructions+=4;goto B4a8ba5;
case 0x4a8ba6:c.instructions+=3;goto B4a8ba6;
case 0x4a8bab:c.instructions+=2;goto B4a8bab;
case 0x4a8bad:c.instructions+=1;goto B4a8bad;
case 0x4a8bb2:goto L4a8bb2;
case 0x4a8bb6:c.instructions+=6;goto B4a8bb6;
case 0x4a8bb7:c.instructions+=5;goto B4a8bb7;
case 0x4a8bb9:c.instructions+=4;goto B4a8bb9;
case 0x4a8bba:c.instructions+=3;goto B4a8bba;
case 0x4a8bc1:c.instructions+=2;goto B4a8bc1;
case 0x4a8bc4:c.instructions+=1;goto B4a8bc4;
case 0x4a8bd0:goto L4a8bd0;
case 0x4a8bd1:c.instructions+=2;goto B4a8bd1;
case 0x4a8bd3:c.instructions+=1;goto B4a8bd3;
case 0x4a8bd8:goto L4a8bd8;
case 0x4a8bdd:c.instructions+=1;goto B4a8bdd;
case 0x4a8bdf:goto L4a8bdf;
case 0x4a8be0:c.instructions+=1;goto B4a8be0;
case 0x4a8be5:goto L4a8be5;
case 0x4a8be8:goto L4a8be8;
case 0x4a8bea:c.instructions+=2;goto B4a8bea;
case 0x4a8beb:c.instructions+=1;goto B4a8beb;
case 0x4a8bf0:goto L4a8bf0;
case 0x4a8bf2:c.instructions+=12;goto B4a8bf2;
case 0x4a8bf7:c.instructions+=11;goto B4a8bf7;
case 0x4a8bfd:c.instructions+=10;goto B4a8bfd;
case 0x4a8bfe:c.instructions+=9;goto B4a8bfe;
case 0x4a8c05:c.instructions+=8;goto B4a8c05;
case 0x4a8c06:c.instructions+=7;goto B4a8c06;
case 0x4a8c07:c.instructions+=6;goto B4a8c07;
case 0x4a8c09:c.instructions+=5;goto B4a8c09;
case 0x4a8c0d:c.instructions+=4;goto B4a8c0d;
case 0x4a8c13:c.instructions+=3;goto B4a8c13;
case 0x4a8c16:c.instructions+=2;goto B4a8c16;
case 0x4a8c1e:c.instructions+=1;goto B4a8c1e;
case 0x4a8c23:goto L4a8c23;
case 0x4a8c25:c.instructions+=2;goto B4a8c25;
case 0x4a8c2d:c.instructions+=1;goto B4a8c2d;
case 0x4a8c32:goto L4a8c32;
case 0x4a8c36:c.instructions+=4;goto B4a8c36;
case 0x4a8c37:c.instructions+=3;goto B4a8c37;
case 0x4a8c3e:c.instructions+=2;goto B4a8c3e;
case 0x4a8c41:c.instructions+=1;goto B4a8c41;
case 0x4a8c50:goto L4a8c50;
case 0x4a8c55:c.instructions+=1;goto B4a8c55;
case 0x4a8c60:goto L4a8c60;
case 0x4a8c62:c.instructions+=7;goto B4a8c62;
case 0x4a8c67:c.instructions+=6;goto B4a8c67;
case 0x4a8c6d:c.instructions+=5;goto B4a8c6d;
case 0x4a8c6e:c.instructions+=4;goto B4a8c6e;
case 0x4a8c75:c.instructions+=3;goto B4a8c75;
case 0x4a8c76:c.instructions+=2;goto B4a8c76;
case 0x4a8c78:c.instructions+=1;goto B4a8c78;
case 0x4a8c7d:goto L4a8c7d;
case 0x4a8c80:c.instructions+=4;goto B4a8c80;
case 0x4a8c84:c.instructions+=3;goto B4a8c84;
case 0x4a8c86:c.instructions+=2;goto B4a8c86;
case 0x4a8c8e:c.instructions+=1;goto B4a8c8e;
case 0x4a8c90:goto L4a8c90;
case 0x4a8c94:c.instructions+=3;goto B4a8c94;
case 0x4a8c95:c.instructions+=2;goto B4a8c95;
case 0x4a8c97:c.instructions+=1;goto B4a8c97;
case 0x4a8c9c:goto L4a8c9c;
case 0x4a8ca0:c.instructions+=3;goto B4a8ca0;
case 0x4a8ca7:c.instructions+=2;goto B4a8ca7;
case 0x4a8caa:c.instructions+=1;goto B4a8caa;
case 0x4a8cab:goto L4a8cab;
case 0x4a8caf:c.instructions+=4;goto B4a8caf;
case 0x4a8cb1:c.instructions+=3;goto B4a8cb1;
case 0x4a8cb8:c.instructions+=2;goto B4a8cb8;
case 0x4a8cbb:c.instructions+=1;goto B4a8cbb;
case 0x4a8cc0:goto L4a8cc0;
case 0x4a8cc2:c.instructions+=12;goto B4a8cc2;
case 0x4a8cc7:c.instructions+=11;goto B4a8cc7;
case 0x4a8ccd:c.instructions+=10;goto B4a8ccd;
case 0x4a8cce:c.instructions+=9;goto B4a8cce;
case 0x4a8cd5:c.instructions+=8;goto B4a8cd5;
case 0x4a8cd8:c.instructions+=7;goto B4a8cd8;
case 0x4a8cdc:c.instructions+=6;goto B4a8cdc;
case 0x4a8cdd:c.instructions+=5;goto B4a8cdd;
case 0x4a8cde:c.instructions+=4;goto B4a8cde;
case 0x4a8ce0:c.instructions+=3;goto B4a8ce0;
case 0x4a8ce1:c.instructions+=2;goto B4a8ce1;
case 0x4a8ce5:c.instructions+=1;goto B4a8ce5;
case 0x4a8cea:goto L4a8cea;
case 0x4a8cef:c.instructions+=4;goto B4a8cef;
case 0x4a8cf1:c.instructions+=3;goto B4a8cf1;
case 0x4a8cf6:c.instructions+=2;goto B4a8cf6;
case 0x4a8cfa:c.instructions+=1;goto B4a8cfa;
case 0x4a8cff:goto L4a8cff;
case 0x4a8d01:goto L4a8d01;
case 0x4a8d05:c.instructions+=5;goto B4a8d05;
case 0x4a8d07:c.instructions+=4;goto B4a8d07;
case 0x4a8d08:c.instructions+=3;goto B4a8d08;
case 0x4a8d10:c.instructions+=2;goto B4a8d10;
case 0x4a8d16:c.instructions+=1;goto B4a8d16;
case 0x4a8d1b:goto L4a8d1b;
case 0x4a8d1e:c.instructions+=6;goto B4a8d1e;
case 0x4a8d21:c.instructions+=5;goto B4a8d21;
case 0x4a8d25:c.instructions+=4;goto B4a8d25;
case 0x4a8d26:c.instructions+=3;goto B4a8d26;
case 0x4a8d2b:c.instructions+=2;goto B4a8d2b;
case 0x4a8d2c:c.instructions+=1;goto B4a8d2c;
case 0x4a8d31:goto L4a8d31;
case 0x4a8d34:c.instructions+=2;goto B4a8d34;
case 0x4a8d35:c.instructions+=1;goto B4a8d35;
case 0x4a8d3a:goto L4a8d3a;
case 0x4a8d3e:c.instructions+=7;goto B4a8d3e;
case 0x4a8d41:c.instructions+=6;goto B4a8d41;
case 0x4a8d42:c.instructions+=5;goto B4a8d42;
case 0x4a8d44:c.instructions+=4;goto B4a8d44;
case 0x4a8d45:c.instructions+=3;goto B4a8d45;
case 0x4a8d4c:c.instructions+=2;goto B4a8d4c;
case 0x4a8d4f:c.instructions+=1;goto B4a8d4f;
case 0x4a8d60:goto L4a8d60;
case 0x4a8d61:c.instructions+=2;goto B4a8d61;
case 0x4a8d63:c.instructions+=1;goto B4a8d63;
case 0x4a8d68:goto L4a8d68;
case 0x4a8d6d:c.instructions+=1;goto B4a8d6d;
case 0x4a8d6f:goto L4a8d6f;
case 0x4a8d70:c.instructions+=1;goto B4a8d70;
case 0x4a8d75:goto L4a8d75;
case 0x4a8d78:goto L4a8d78;
case 0x4a8d7a:c.instructions+=2;goto B4a8d7a;
case 0x4a8d7b:c.instructions+=1;goto B4a8d7b;
case 0x4a8d80:goto L4a8d80;
case 0x4a8d86:c.instructions+=1;goto B4a8d86;
case 0x4a8d90:goto L4a8d90;
case 0x4a8d92:c.instructions+=7;goto B4a8d92;
case 0x4a8d97:c.instructions+=6;goto B4a8d97;
case 0x4a8d9d:c.instructions+=5;goto B4a8d9d;
case 0x4a8d9e:c.instructions+=4;goto B4a8d9e;
case 0x4a8da5:c.instructions+=3;goto B4a8da5;
case 0x4a8da6:c.instructions+=2;goto B4a8da6;
case 0x4a8da8:c.instructions+=1;goto B4a8da8;
case 0x4a8dad:goto L4a8dad;
case 0x4a8db0:c.instructions+=4;goto B4a8db0;
case 0x4a8db4:c.instructions+=3;goto B4a8db4;
case 0x4a8db6:c.instructions+=2;goto B4a8db6;
case 0x4a8dbe:c.instructions+=1;goto B4a8dbe;
case 0x4a8dc0:goto L4a8dc0;
case 0x4a8dc4:c.instructions+=3;goto B4a8dc4;
case 0x4a8dc5:c.instructions+=2;goto B4a8dc5;
case 0x4a8dc7:c.instructions+=1;goto B4a8dc7;
case 0x4a8dcc:goto L4a8dcc;
case 0x4a8dd0:c.instructions+=3;goto B4a8dd0;
case 0x4a8dd7:c.instructions+=2;goto B4a8dd7;
case 0x4a8dda:c.instructions+=1;goto B4a8dda;
case 0x4a8ddb:goto L4a8ddb;
case 0x4a8ddf:c.instructions+=4;goto B4a8ddf;
case 0x4a8de1:c.instructions+=3;goto B4a8de1;
case 0x4a8de8:c.instructions+=2;goto B4a8de8;
case 0x4a8deb:c.instructions+=1;goto B4a8deb;
case 0x4a8df0:goto L4a8df0;
case 0x4a8df2:c.instructions+=11;goto B4a8df2;
case 0x4a8df7:c.instructions+=10;goto B4a8df7;
case 0x4a8dfd:c.instructions+=9;goto B4a8dfd;
case 0x4a8dfe:c.instructions+=8;goto B4a8dfe;
case 0x4a8e05:c.instructions+=7;goto B4a8e05;
case 0x4a8e06:c.instructions+=6;goto B4a8e06;
case 0x4a8e0a:c.instructions+=5;goto B4a8e0a;
case 0x4a8e0b:c.instructions+=4;goto B4a8e0b;
case 0x4a8e0d:c.instructions+=3;goto B4a8e0d;
case 0x4a8e0e:c.instructions+=2;goto B4a8e0e;
case 0x4a8e12:c.instructions+=1;goto B4a8e12;
case 0x4a8e17:goto L4a8e17;
case 0x4a8e19:c.instructions+=10;goto B4a8e19;
case 0x4a8e1f:c.instructions+=9;goto B4a8e1f;
case 0x4a8e22:c.instructions+=8;goto B4a8e22;
case 0x4a8e28:c.instructions+=7;goto B4a8e28;
case 0x4a8e2d:c.instructions+=6;goto B4a8e2d;
case 0x4a8e31:c.instructions+=5;goto B4a8e31;
case 0x4a8e34:c.instructions+=4;goto B4a8e34;
case 0x4a8e37:c.instructions+=3;goto B4a8e37;
case 0x4a8e3c:c.instructions+=2;goto B4a8e3c;
case 0x4a8e3d:c.instructions+=1;goto B4a8e3d;
case 0x4a8e42:goto L4a8e42;
case 0x4a8e45:c.instructions+=2;goto B4a8e45;
case 0x4a8e46:c.instructions+=1;goto B4a8e46;
case 0x4a8e4b:goto L4a8e4b;
case 0x4a8e4e:c.instructions+=5;goto B4a8e4e;
case 0x4a8e51:c.instructions+=4;goto B4a8e51;
case 0x4a8e56:c.instructions+=3;goto B4a8e56;
case 0x4a8e5b:c.instructions+=2;goto B4a8e5b;
case 0x4a8e5c:c.instructions+=1;goto B4a8e5c;
case 0x4a8e61:goto L4a8e61;
case 0x4a8e64:c.instructions+=2;goto B4a8e64;
case 0x4a8e65:c.instructions+=1;goto B4a8e65;
case 0x4a8e6a:goto L4a8e6a;
case 0x4a8e6e:c.instructions+=6;goto B4a8e6e;
case 0x4a8e71:c.instructions+=5;goto B4a8e71;
case 0x4a8e73:c.instructions+=4;goto B4a8e73;
case 0x4a8e74:c.instructions+=3;goto B4a8e74;
case 0x4a8e7b:c.instructions+=2;goto B4a8e7b;
case 0x4a8e7e:c.instructions+=1;goto B4a8e7e;
case 0x4a8e90:goto L4a8e90;
case 0x4a8e91:c.instructions+=2;goto B4a8e91;
case 0x4a8e93:c.instructions+=1;goto B4a8e93;
case 0x4a8e98:goto L4a8e98;
case 0x4a8e9d:c.instructions+=1;goto B4a8e9d;
case 0x4a8e9f:goto L4a8e9f;
case 0x4a8ea0:c.instructions+=1;goto B4a8ea0;
case 0x4a8ea5:goto L4a8ea5;
case 0x4a8ea8:goto L4a8ea8;
case 0x4a8eaa:c.instructions+=2;goto B4a8eaa;
case 0x4a8eab:c.instructions+=1;goto B4a8eab;
case 0x4a8eb0:goto L4a8eb0;
case 0x4a8eb6:c.instructions+=1;goto B4a8eb6;
case 0x4a8ec0:goto L4a8ec0;
case 0x4a8ec2:c.instructions+=7;goto B4a8ec2;
case 0x4a8ec7:c.instructions+=6;goto B4a8ec7;
case 0x4a8ecd:c.instructions+=5;goto B4a8ecd;
case 0x4a8ece:c.instructions+=4;goto B4a8ece;
case 0x4a8ed5:c.instructions+=3;goto B4a8ed5;
case 0x4a8ed6:c.instructions+=2;goto B4a8ed6;
case 0x4a8ed8:c.instructions+=1;goto B4a8ed8;
case 0x4a8edd:goto L4a8edd;
case 0x4a8ee0:c.instructions+=4;goto B4a8ee0;
case 0x4a8ee4:c.instructions+=3;goto B4a8ee4;
case 0x4a8ee6:c.instructions+=2;goto B4a8ee6;
case 0x4a8eee:c.instructions+=1;goto B4a8eee;
case 0x4a8ef0:goto L4a8ef0;
case 0x4a8ef4:c.instructions+=3;goto B4a8ef4;
case 0x4a8ef5:c.instructions+=2;goto B4a8ef5;
case 0x4a8ef7:c.instructions+=1;goto B4a8ef7;
case 0x4a8efc:goto L4a8efc;
case 0x4a8f00:c.instructions+=3;goto B4a8f00;
case 0x4a8f07:c.instructions+=2;goto B4a8f07;
case 0x4a8f0a:c.instructions+=1;goto B4a8f0a;
case 0x4a8f0b:goto L4a8f0b;
case 0x4a8f0f:c.instructions+=4;goto B4a8f0f;
case 0x4a8f11:c.instructions+=3;goto B4a8f11;
case 0x4a8f18:c.instructions+=2;goto B4a8f18;
case 0x4a8f1b:c.instructions+=1;goto B4a8f1b;
case 0x4a8f20:goto L4a8f20;
case 0x4a8f21:c.instructions+=2;goto B4a8f21;
case 0x4a8f23:c.instructions+=1;goto B4a8f23;
case 0x4a8f28:goto L4a8f28;
case 0x4a8f2d:c.instructions+=1;goto B4a8f2d;
case 0x4a8f2f:goto L4a8f2f;
case 0x4a8f30:c.instructions+=1;goto B4a8f30;
case 0x4a8f35:goto L4a8f35;
case 0x4a8f38:goto L4a8f38;
case 0x4a8f3a:c.instructions+=2;goto B4a8f3a;
case 0x4a8f3b:c.instructions+=1;goto B4a8f3b;
case 0x4a8f40:goto L4a8f40;
case 0x4a8f46:c.instructions+=1;goto B4a8f46;
case 0x4a8f50:goto L4a8f50;
case 0x4a8f52:c.instructions+=8;goto B4a8f52;
case 0x4a8f57:c.instructions+=7;goto B4a8f57;
case 0x4a8f5d:c.instructions+=6;goto B4a8f5d;
case 0x4a8f5e:c.instructions+=5;goto B4a8f5e;
case 0x4a8f65:c.instructions+=4;goto B4a8f65;
case 0x4a8f66:c.instructions+=3;goto B4a8f66;
case 0x4a8f67:c.instructions+=2;goto B4a8f67;
case 0x4a8f69:c.instructions+=1;goto B4a8f69;
case 0x4a8f6e:goto L4a8f6e;
case 0x4a8f70:c.instructions+=5;goto B4a8f70;
case 0x4a8f73:c.instructions+=4;goto B4a8f73;
case 0x4a8f77:c.instructions+=3;goto B4a8f77;
case 0x4a8f79:c.instructions+=2;goto B4a8f79;
case 0x4a8f81:c.instructions+=1;goto B4a8f81;
case 0x4a8f83:goto L4a8f83;
case 0x4a8f87:c.instructions+=3;goto B4a8f87;
case 0x4a8f88:c.instructions+=2;goto B4a8f88;
case 0x4a8f8a:c.instructions+=1;goto B4a8f8a;
case 0x4a8f8f:goto L4a8f8f;
case 0x4a8f95:c.instructions+=9;goto B4a8f95;
case 0x4a8f9c:c.instructions+=8;goto B4a8f9c;
case 0x4a8fa2:c.instructions+=7;goto B4a8fa2;
case 0x4a8fa5:c.instructions+=6;goto B4a8fa5;
case 0x4a8fa7:c.instructions+=5;goto B4a8fa7;
case 0x4a8fa8:c.instructions+=4;goto B4a8fa8;
case 0x4a8fac:c.instructions+=3;goto B4a8fac;
case 0x4a8fb3:c.instructions+=2;goto B4a8fb3;
case 0x4a8fb6:c.instructions+=1;goto B4a8fb6;
case 0x4a8fb7:goto L4a8fb7;
case 0x4a8fbb:c.instructions+=5;goto B4a8fbb;
case 0x4a8fbd:c.instructions+=4;goto B4a8fbd;
case 0x4a8fbe:c.instructions+=3;goto B4a8fbe;
case 0x4a8fc5:c.instructions+=2;goto B4a8fc5;
case 0x4a8fc8:c.instructions+=1;goto B4a8fc8;
case 0x4a8fd0:goto L4a8fd0;
case 0x4a8fd2:c.instructions+=11;goto B4a8fd2;
case 0x4a8fd7:c.instructions+=10;goto B4a8fd7;
case 0x4a8fdd:c.instructions+=9;goto B4a8fdd;
case 0x4a8fde:c.instructions+=8;goto B4a8fde;
case 0x4a8fe5:c.instructions+=7;goto B4a8fe5;
case 0x4a8fe6:c.instructions+=6;goto B4a8fe6;
case 0x4a8fea:c.instructions+=5;goto B4a8fea;
case 0x4a8feb:c.instructions+=4;goto B4a8feb;
case 0x4a8fed:c.instructions+=3;goto B4a8fed;
case 0x4a8fee:c.instructions+=2;goto B4a8fee;
case 0x4a8ff2:c.instructions+=1;goto B4a8ff2;
case 0x4a8ff7:goto L4a8ff7;
case 0x4a8ff9:c.instructions+=2;goto B4a8ff9;
case 0x4a8fff:c.instructions+=1;goto B4a8fff;
default:missing_instruction(c.pc);}
B4a8001:L4a8001:{c.instructions+=2;NFSU2_TR(0x4a8001);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a8002:{NFSU2_TR(0x4a8002);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a8007ull));
TAIL_STATIC(0x558790u,558);
}
B4a8007:L4a8007:{c.instructions+=3;NFSU2_TR(0x4a8007);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
}
B4a800a:{NFSU2_TR(0x4a800a);
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
B4a800c:{NFSU2_TR(0x4a800c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a8010:L4a8010:{c.instructions+=7;NFSU2_TR(0x4a8010);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a8011:{NFSU2_TR(0x4a8011);
__builtin_memmove((R+24),(R+4),4);
}
B4a8013:{NFSU2_TR(0x4a8013);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x15bull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4a8019:{NFSU2_TR(0x4a8019);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4a801b:{NFSU2_TR(0x4a801b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a801c:{NFSU2_TR(0x4a801c);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4a8020:{NFSU2_TR(0x4a8020);
if(r1(R+518)){{goto L4a803a;}}
}
B4a8022:L4a8022:{c.instructions+=2;NFSU2_TR(0x4a8022);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0x911ab364ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x911ab364ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x911ab364ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4a8028:{NFSU2_TR(0x4a8028);
if(r1(R+518)){{goto L4a83bc;}}
}
B4a802e:L4a802e:{c.instructions+=2;NFSU2_TR(0x4a802e);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0xc407210ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xc407210ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xc407210ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4a8034:{NFSU2_TR(0x4a8034);
if(r1(R+518)){{goto L4a83bc;}}
}
B4a803a:L4a803a:{c.instructions+=6;NFSU2_TR(0x4a803a);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xc98356baull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4a8040:{NFSU2_TR(0x4a8040);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a8041:{NFSU2_TR(0x4a8041);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4a8045:{NFSU2_TR(0x4a8045);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a8046:{NFSU2_TR(0x4a8046);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B4a804a:{NFSU2_TR(0x4a804a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a8096;}}
}
B4a804c:L4a804c:{c.instructions+=3;NFSU2_TR(0x4a804c);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x158ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4a8052:{NFSU2_TR(0x4a8052);
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
B4a8054:{NFSU2_TR(0x4a8054);
if(r1(R+518)){{goto L4a80a2;}}
}
B4a8056:L4a8056:{c.instructions+=1;NFSU2_TR(0x4a8056);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a805bull));
TAIL_STATIC(0x50cea0u,50c);
}
B4a805b:L4a805b:{c.instructions+=2;NFSU2_TR(0x4a805b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a805c:{NFSU2_TR(0x4a805c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a8061ull));
TAIL_STATIC(0x52cf60u,52c);
}
B4a8061:L4a8061:{c.instructions+=3;NFSU2_TR(0x4a8061);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4a8064:{NFSU2_TR(0x4a8064);
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
B4a8066:{NFSU2_TR(0x4a8066);
if(r1(R+518)){{goto L4a8076;}}
}
B4a8068:L4a8068:{c.instructions+=1;NFSU2_TR(0x4a8068);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a806dull));
TAIL_STATIC(0x50cea0u,50c);
}
B4a806d:L4a806d:{c.instructions+=2;NFSU2_TR(0x4a806d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a806e:{NFSU2_TR(0x4a806e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a8073ull));
TAIL_STATIC(0x5379a0u,537);
}
B4a8073:L4a8073:{c.instructions+=1;NFSU2_TR(0x4a8073);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4a8076:L4a8076:{c.instructions+=3;NFSU2_TR(0x4a8076);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a8079:{NFSU2_TR(0x4a8079);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a807a:{NFSU2_TR(0x4a807a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a807full));
TAIL_STATIC(0x5379a0u,537);
}
B4a807f:L4a807f:{c.instructions+=4;NFSU2_TR(0x4a807f);
__builtin_memmove((R+4),gp(0x8900d8),4);
}
B4a8085:{NFSU2_TR(0x4a8085);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4a8088:{NFSU2_TR(0x4a8088);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a808a:{NFSU2_TR(0x4a808a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a808full));
TAIL_STATIC(0x5f4240u,5f4);
}
B4a808f:L4a808f:{c.instructions+=5;NFSU2_TR(0x4a808f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4a8090:{NFSU2_TR(0x4a8090);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4a8091:{NFSU2_TR(0x4a8091);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4a8092:{NFSU2_TR(0x4a8092);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a8093:{NFSU2_TR(0x4a8093);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a8096:L4a8096:{c.instructions+=2;NFSU2_TR(0x4a8096);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x911ab364ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4a809c:{NFSU2_TR(0x4a809c);
if(r1(R+518)){{goto L4a81e1;}}
}
B4a80a2:L4a80a2:{c.instructions+=7;NFSU2_TR(0x4a80a2);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a80a6:{NFSU2_TR(0x4a80a6);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a80a7:{NFSU2_TR(0x4a80a7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a80a8:{NFSU2_TR(0x4a80a8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a80a9:{NFSU2_TR(0x4a80a9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a80aa:{NFSU2_TR(0x4a80aa);
__builtin_memmove((R+4),(R+24),4);
}
B4a80ac:{NFSU2_TR(0x4a80ac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a80b1ull));
TAIL_STATIC(0x556020u,556);
}
B4a80b1:L4a80b1:{c.instructions+=2;NFSU2_TR(0x4a80b1);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(U+0))<(u32(0x911ab364ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x911ab364ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4a80b7:{NFSU2_TR(0x4a80b7);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4a824a;}}
}
B4a80bd:L4a80bd:{c.instructions+=1;NFSU2_TR(0x4a80bd);
if(r1(R+518)){{goto L4a81e1;}}
}
B4a80c3:L4a80c3:{c.instructions+=2;NFSU2_TR(0x4a80c3);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(U+0))<(u32(0x33333333ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x33333333ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4a80c9:{NFSU2_TR(0x4a80c9);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4a819f;}}
}
B4a80cf:L4a80cf:{c.instructions+=1;NFSU2_TR(0x4a80cf);
if(r1(R+518)){{goto L4a8164;}}
}
B4a80d5:L4a80d5:{c.instructions+=2;NFSU2_TR(0x4a80d5);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x11111111ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4a80db:{NFSU2_TR(0x4a80db);
if(r1(R+518)){{goto L4a8119;}}
}
B4a80dd:L4a80dd:{c.instructions+=2;NFSU2_TR(0x4a80dd);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0x22222222ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x22222222ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x22222222ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4a80e3:{NFSU2_TR(0x4a80e3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a83ba;}}
}
B4a80e9:L4a80e9:{c.instructions+=7;NFSU2_TR(0x4a80e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4a80ec:{NFSU2_TR(0x4a80ec);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a80ee:{NFSU2_TR(0x4a80ee);
u8 U[4];
w4(U+0,u32(0x78fab8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a80f3:{NFSU2_TR(0x4a80f3);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a80f8:{NFSU2_TR(0x4a80f8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a80f9:{NFSU2_TR(0x4a80f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x138ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a8103:{NFSU2_TR(0x4a8103);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a8108ull));
TAIL_STATIC(0x537c00u,537);
}
B4a8108:L4a8108:{c.instructions+=7;NFSU2_TR(0x4a8108);
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
B4a810b:{NFSU2_TR(0x4a810b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4a810c:{NFSU2_TR(0x4a810c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4a810d:{NFSU2_TR(0x4a810d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4a810e:{NFSU2_TR(0x4a810e);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x15bull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4a8115:{NFSU2_TR(0x4a8115);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a8116:{NFSU2_TR(0x4a8116);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a8119:L4a8119:{c.instructions+=8;NFSU2_TR(0x4a8119);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a811c:{NFSU2_TR(0x4a811c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a811e:{NFSU2_TR(0x4a811e);
u8 U[4];
w4(U+0,u32(0x78f5b8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a8123:{NFSU2_TR(0x4a8123);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a8128:{NFSU2_TR(0x4a8128);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a8129:{NFSU2_TR(0x4a8129);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x15bull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4a8130:{NFSU2_TR(0x4a8130);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x138ull))));
w4(U+4,u32(0x911ab364ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a813a:{NFSU2_TR(0x4a813a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a813full));
TAIL_STATIC(0x537c00u,537);
}
B4a813f:L4a813f:{c.instructions+=4;NFSU2_TR(0x4a813f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a8142:{NFSU2_TR(0x4a8142);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a8144:{NFSU2_TR(0x4a8144);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a8145:{NFSU2_TR(0x4a8145);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a814aull));
TAIL_STATIC(0x50b8c0u,50b);
}
B4a814a:L4a814a:{c.instructions+=5;NFSU2_TR(0x4a814a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4a814d:{NFSU2_TR(0x4a814d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a814f:{NFSU2_TR(0x4a814f);
u8 U[4];
w4(U+0,u32(0x79071cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a8154:{NFSU2_TR(0x4a8154);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a8155:{NFSU2_TR(0x4a8155);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a815aull));
TAIL_STATIC(0x537980u,537);
}
B4a815a:L4a815a:{c.instructions+=6;NFSU2_TR(0x4a815a);
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
B4a815d:{NFSU2_TR(0x4a815d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4a815e:{NFSU2_TR(0x4a815e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4a815f:{NFSU2_TR(0x4a815f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4a8160:{NFSU2_TR(0x4a8160);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a8161:{NFSU2_TR(0x4a8161);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a8164:L4a8164:{c.instructions+=6;NFSU2_TR(0x4a8164);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a8167:{NFSU2_TR(0x4a8167);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a8169:{NFSU2_TR(0x4a8169);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a816a:{NFSU2_TR(0x4a816a);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x15bull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4a8171:{NFSU2_TR(0x4a8171);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x158ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4a8178:{NFSU2_TR(0x4a8178);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a817dull));
TAIL_STATIC(0x50b8c0u,50b);
}
B4a817d:L4a817d:{c.instructions+=3;NFSU2_TR(0x4a817d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a817f:{NFSU2_TR(0x4a817f);
u8 U[4];
w4(U+0,u32(0x79071cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a8184:{NFSU2_TR(0x4a8184);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a8189ull));
TAIL_STATIC(0x50b8c0u,50b);
}
B4a8189:L4a8189:{c.instructions+=3;NFSU2_TR(0x4a8189);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a818b:{NFSU2_TR(0x4a818b);
u8 U[4];
w4(U+0,u32(0x79070cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a8190:{NFSU2_TR(0x4a8190);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a8195ull));
TAIL_STATIC(0x50b8c0u,50b);
}
B4a8195:L4a8195:{c.instructions+=6;NFSU2_TR(0x4a8195);
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
B4a8198:{NFSU2_TR(0x4a8198);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4a8199:{NFSU2_TR(0x4a8199);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4a819a:{NFSU2_TR(0x4a819a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4a819b:{NFSU2_TR(0x4a819b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a819c:{NFSU2_TR(0x4a819c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a819f:L4a819f:{c.instructions+=2;NFSU2_TR(0x4a819f);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0x35f8620bull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x35f8620bull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x35f8620bull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4a81a5:{NFSU2_TR(0x4a81a5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a83ba;}}
}
B4a81ab:L4a81ab:{c.instructions+=4;NFSU2_TR(0x4a81ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x154ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a81b1:{NFSU2_TR(0x4a81b1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a81b2:{NFSU2_TR(0x4a81b2);
__builtin_memmove((R+4),(R+24),4);
}
B4a81b4:{NFSU2_TR(0x4a81b4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a81b9ull));
TAIL_STATIC(0x51fe70u,51f);
}
B4a81b9:L4a81b9:{c.instructions+=3;NFSU2_TR(0x4a81b9);
__builtin_memmove((R+28),(R+0),4);
}
B4a81bb:{NFSU2_TR(0x4a81bb);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4a81bd:{NFSU2_TR(0x4a81bd);
if(r1(R+518)){{goto L4a826e;}}
}
B4a81c3:L4a81c3:{c.instructions+=3;NFSU2_TR(0x4a81c3);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4a81c6:{NFSU2_TR(0x4a81c6);
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
B4a81c8:{NFSU2_TR(0x4a81c8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a826e;}}
}
B4a81ce:L4a81ce:{c.instructions+=3;NFSU2_TR(0x4a81ce);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4a81d0:{NFSU2_TR(0x4a81d0);
__builtin_memmove((R+4),(R+28),4);
}
B4a81d2:{NFSU2_TR(0x4a81d2);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a81d5ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4a81d5:L4a81d5:{c.instructions+=3;NFSU2_TR(0x4a81d5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4a81d7:{NFSU2_TR(0x4a81d7);
__builtin_memmove((R+4),(R+28),4);
}
B4a81d9:{NFSU2_TR(0x4a81d9);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a81dcull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4a81dc:L4a81dc:{c.instructions+=1;NFSU2_TR(0x4a81dc);
{goto L4a826e;}
}
B4a81e1:L4a81e1:{c.instructions+=2;NFSU2_TR(0x4a81e1);
u8 U[8];
__builtin_memmove((U+0),gp(0x83aa04),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4a81e8:{NFSU2_TR(0x4a81e8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a81fe;}}
}
B4a81ea:L4a81ea:{c.instructions+=3;NFSU2_TR(0x4a81ea);
u8 U[4];
w4(U+0,u32(0x11111111ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a81ef:{NFSU2_TR(0x4a81ef);
__builtin_memmove((R+4),(R+24),4);
}
B4a81f1:{NFSU2_TR(0x4a81f1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a81f6ull));
TAIL_STATIC(0x4a7f70u,4a7);
}
B4a81f6:L4a81f6:{c.instructions+=2;NFSU2_TR(0x4a81f6);
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
B4a81f8:{NFSU2_TR(0x4a81f8);
if(r1(R+518)){{goto L4a83ba;}}
}
B4a81fe:L4a81fe:{c.instructions+=5;NFSU2_TR(0x4a81fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a8201:{NFSU2_TR(0x4a8201);
u8 U[4];
w4(U+0,u32(0xde6eff34ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a8206:{NFSU2_TR(0x4a8206);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a820b:{NFSU2_TR(0x4a820b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a820c:{NFSU2_TR(0x4a820c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a8211ull));
TAIL_STATIC(0x537d40u,537);
}
B4a8211:L4a8211:{c.instructions+=3;NFSU2_TR(0x4a8211);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4a8214:{NFSU2_TR(0x4a8214);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4a8216:{NFSU2_TR(0x4a8216);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a8230;}}
}
B4a8218:L4a8218:{c.instructions+=6;NFSU2_TR(0x4a8218);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a821b:{NFSU2_TR(0x4a821b);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a821d:{NFSU2_TR(0x4a821d);
u8 U[4];
w4(U+0,u32(0xde6eff34ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a8222:{NFSU2_TR(0x4a8222);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a8227:{NFSU2_TR(0x4a8227);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a8228:{NFSU2_TR(0x4a8228);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a822dull));
TAIL_STATIC(0x537c60u,537);
}
B4a822d:L4a822d:{c.instructions+=1;NFSU2_TR(0x4a822d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4a8230:L4a8230:{c.instructions+=7;NFSU2_TR(0x4a8230);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4a8234:{NFSU2_TR(0x4a8234);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a8235:{NFSU2_TR(0x4a8235);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a8236:{NFSU2_TR(0x4a8236);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a8237:{NFSU2_TR(0x4a8237);
u8 U[4];
w4(U+0,u32(0x911ab364ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a823c:{NFSU2_TR(0x4a823c);
__builtin_memmove((R+4),(R+24),4);
}
B4a823e:{NFSU2_TR(0x4a823e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a8243ull));
TAIL_STATIC(0x556020u,556);
}
B4a8243:L4a8243:{c.instructions+=5;NFSU2_TR(0x4a8243);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4a8244:{NFSU2_TR(0x4a8244);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4a8245:{NFSU2_TR(0x4a8245);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4a8246:{NFSU2_TR(0x4a8246);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a8247:{NFSU2_TR(0x4a8247);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a824a:L4a824a:{c.instructions+=2;NFSU2_TR(0x4a824a);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0xb5af2461ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xb5af2461ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xb5af2461ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4a8250:{NFSU2_TR(0x4a8250);
if(r1(R+518)){{goto L4a8344;}}
}
B4a8256:L4a8256:{c.instructions+=2;NFSU2_TR(0x4a8256);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xd05fc3a3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4a825c:{NFSU2_TR(0x4a825c);
if(r1(R+518)){{goto L4a830f;}}
}
B4a8262:L4a8262:{c.instructions+=2;NFSU2_TR(0x4a8262);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0xe1fde1d1ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xe1fde1d1ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xe1fde1d1ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4a8268:{NFSU2_TR(0x4a8268);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a83ba;}}
}
B4a826e:L4a826e:{c.instructions+=3;NFSU2_TR(0x4a826e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x138ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a8274:{NFSU2_TR(0x4a8274);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xc407210ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4a8279:{NFSU2_TR(0x4a8279);
if(r1(R+518)){{goto L4a82ea;}}
}
B4a827b:L4a827b:{c.instructions+=2;NFSU2_TR(0x4a827b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x911ab364ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4a8280:{NFSU2_TR(0x4a8280);
if(r1(R+518)){{goto L4a82a9;}}
}
B4a8282:L4a8282:{c.instructions+=2;NFSU2_TR(0x4a8282);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xb5af2461ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xb5af2461ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xb5af2461ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4a8287:{NFSU2_TR(0x4a8287);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a83ba;}}
}
B4a828d:L4a828d:{c.instructions+=3;NFSU2_TR(0x4a828d);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x15bull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4a8293:{NFSU2_TR(0x4a8293);
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
B4a8295:{NFSU2_TR(0x4a8295);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a83ba;}}
}
B4a829b:L4a829b:{c.instructions+=6;NFSU2_TR(0x4a829b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4a829c:{NFSU2_TR(0x4a829c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4a829d:{NFSU2_TR(0x4a829d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4a829e:{NFSU2_TR(0x4a829e);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x158ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4a82a5:{NFSU2_TR(0x4a82a5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a82a6:{NFSU2_TR(0x4a82a6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a82a9:L4a82a9:{c.instructions+=3;NFSU2_TR(0x4a82a9);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x15bull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4a82af:{NFSU2_TR(0x4a82af);
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
B4a82b1:{NFSU2_TR(0x4a82b1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a83ba;}}
}
B4a82b7:L4a82b7:{c.instructions+=2;NFSU2_TR(0x4a82b7);
u8 U[14];
__builtin_memmove((U+6),gp(0x83aa04),4);
w1(R+512,u8((r4(U+6))<(u32(0x1ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x1ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4a82be:{NFSU2_TR(0x4a82be);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a82c5;}}
}
B4a82c0:L4a82c0:{c.instructions+=1;NFSU2_TR(0x4a82c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a82c5ull));
TAIL_STATIC(0x5beea0u,5be);
}
B4a82c5:L4a82c5:{c.instructions+=4;NFSU2_TR(0x4a82c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a82c8:{NFSU2_TR(0x4a82c8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a82ca:{NFSU2_TR(0x4a82ca);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a82cb:{NFSU2_TR(0x4a82cb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a82d0ull));
TAIL_STATIC(0x50b8c0u,50b);
}
B4a82d0:L4a82d0:{c.instructions+=5;NFSU2_TR(0x4a82d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a82d3:{NFSU2_TR(0x4a82d3);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a82d5:{NFSU2_TR(0x4a82d5);
u8 U[4];
w4(U+0,u32(0x79071cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a82da:{NFSU2_TR(0x4a82da);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a82db:{NFSU2_TR(0x4a82db);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a82e0ull));
TAIL_STATIC(0x537980u,537);
}
B4a82e0:L4a82e0:{c.instructions+=6;NFSU2_TR(0x4a82e0);
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
B4a82e3:{NFSU2_TR(0x4a82e3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4a82e4:{NFSU2_TR(0x4a82e4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4a82e5:{NFSU2_TR(0x4a82e5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4a82e6:{NFSU2_TR(0x4a82e6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a82e7:{NFSU2_TR(0x4a82e7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a82ea:L4a82ea:{c.instructions+=4;NFSU2_TR(0x4a82ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4a82ed:{NFSU2_TR(0x4a82ed);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a82ef:{NFSU2_TR(0x4a82ef);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a82f0:{NFSU2_TR(0x4a82f0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a82f5ull));
TAIL_STATIC(0x50b8c0u,50b);
}
B4a82f5:L4a82f5:{c.instructions+=5;NFSU2_TR(0x4a82f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a82f8:{NFSU2_TR(0x4a82f8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a82fa:{NFSU2_TR(0x4a82fa);
u8 U[4];
w4(U+0,u32(0x78fa8cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a82ff:{NFSU2_TR(0x4a82ff);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a8300:{NFSU2_TR(0x4a8300);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a8305ull));
TAIL_STATIC(0x537980u,537);
}
B4a8305:L4a8305:{c.instructions+=6;NFSU2_TR(0x4a8305);
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
B4a8308:{NFSU2_TR(0x4a8308);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4a8309:{NFSU2_TR(0x4a8309);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4a830a:{NFSU2_TR(0x4a830a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4a830b:{NFSU2_TR(0x4a830b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a830c:{NFSU2_TR(0x4a830c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a830f:L4a830f:{c.instructions+=4;NFSU2_TR(0x4a830f);
__builtin_memmove((R+0),gp(0x83aa04),4);
}
B4a8314:{NFSU2_TR(0x4a8314);
w4(R+12,u32(0x1ull));
}
B4a8319:{NFSU2_TR(0x4a8319);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B4a831b:{NFSU2_TR(0x4a831b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a83ba;}}
}
B4a8321:L4a8321:{c.instructions+=1;NFSU2_TR(0x4a8321);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a8326ull));
TAIL_STATIC(0x5cec90u,5ce);
}
B4a8326:L4a8326:{c.instructions+=5;NFSU2_TR(0x4a8326);
__builtin_memmove(gp(0x8709d1),(R+12),1);
}
B4a832c:{NFSU2_TR(0x4a832c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a832f:{NFSU2_TR(0x4a832f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a8330:{NFSU2_TR(0x4a8330);
u8 U[4];
w4(U+0,u32(0xaf0bbd92ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a8335:{NFSU2_TR(0x4a8335);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a833aull));
TAIL_STATIC(0x55dda0u,55d);
}
B4a833a:L4a833a:{c.instructions+=6;NFSU2_TR(0x4a833a);
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
B4a833d:{NFSU2_TR(0x4a833d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4a833e:{NFSU2_TR(0x4a833e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4a833f:{NFSU2_TR(0x4a833f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4a8340:{NFSU2_TR(0x4a8340);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a8341:{NFSU2_TR(0x4a8341);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a8344:L4a8344:{c.instructions+=7;NFSU2_TR(0x4a8344);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4a8348:{NFSU2_TR(0x4a8348);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a8349:{NFSU2_TR(0x4a8349);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a834a:{NFSU2_TR(0x4a834a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a834b:{NFSU2_TR(0x4a834b);
u8 U[4];
w4(U+0,u32(0xb5af2461ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a8350:{NFSU2_TR(0x4a8350);
__builtin_memmove((R+4),(R+24),4);
}
B4a8352:{NFSU2_TR(0x4a8352);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a8357ull));
TAIL_STATIC(0x50dae0u,50d);
}
B4a8357:L4a8357:{c.instructions+=6;NFSU2_TR(0x4a8357);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a835a:{NFSU2_TR(0x4a835a);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a835c:{NFSU2_TR(0x4a835c);
u8 U[4];
w4(U+0,u32(0x78f5b8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a8361:{NFSU2_TR(0x4a8361);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a8366:{NFSU2_TR(0x4a8366);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a8367:{NFSU2_TR(0x4a8367);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a836cull));
TAIL_STATIC(0x537c00u,537);
}
B4a836c:L4a836c:{c.instructions+=4;NFSU2_TR(0x4a836c);
__builtin_memmove((R+0),gp(0x83aa04),4);
}
B4a8371:{NFSU2_TR(0x4a8371);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4a8374:{NFSU2_TR(0x4a8374);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x2ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x2ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4a8377:{NFSU2_TR(0x4a8377);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4a8389;}}
}
B4a8379:L4a8379:{c.instructions+=3;NFSU2_TR(0x4a8379);
u8 U[4];
w4(U+0,u32(0x33333333ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a837e:{NFSU2_TR(0x4a837e);
__builtin_memmove((R+4),(R+24),4);
}
B4a8380:{NFSU2_TR(0x4a8380);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a8385ull));
TAIL_STATIC(0x4a7f70u,4a7);
}
B4a8385:L4a8385:{c.instructions+=2;NFSU2_TR(0x4a8385);
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
B4a8387:{NFSU2_TR(0x4a8387);
if(r1(R+518)){{goto L4a83ba;}}
}
B4a8389:L4a8389:{c.instructions+=1;NFSU2_TR(0x4a8389);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a838eull));
TAIL_STATIC(0x50cea0u,50c);
}
B4a838e:L4a838e:{c.instructions+=2;NFSU2_TR(0x4a838e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a838f:{NFSU2_TR(0x4a838f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a8394ull));
TAIL_STATIC(0x52cf60u,52c);
}
B4a8394:L4a8394:{c.instructions+=3;NFSU2_TR(0x4a8394);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4a8397:{NFSU2_TR(0x4a8397);
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
B4a8399:{NFSU2_TR(0x4a8399);
if(r1(R+518)){{goto L4a83a9;}}
}
B4a839b:L4a839b:{c.instructions+=1;NFSU2_TR(0x4a839b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a83a0ull));
TAIL_STATIC(0x50cea0u,50c);
}
B4a83a0:L4a83a0:{c.instructions+=2;NFSU2_TR(0x4a83a0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a83a1:{NFSU2_TR(0x4a83a1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a83a6ull));
TAIL_STATIC(0x5379a0u,537);
}
B4a83a6:L4a83a6:{c.instructions+=1;NFSU2_TR(0x4a83a6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4a83a9:L4a83a9:{c.instructions+=4;NFSU2_TR(0x4a83a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a83ac:{NFSU2_TR(0x4a83ac);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a83ad:{NFSU2_TR(0x4a83ad);
u8 U[4];
w4(U+0,u32(0x33333333ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a83b2:{NFSU2_TR(0x4a83b2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a83b7ull));
TAIL_STATIC(0x55dda0u,55d);
}
B4a83b7:L4a83b7:{c.instructions+=1;NFSU2_TR(0x4a83b7);
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
B4a83ba:L4a83ba:{c.instructions+=2;NFSU2_TR(0x4a83ba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4a83bb:{NFSU2_TR(0x4a83bb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4a83bc:L4a83bc:{c.instructions+=3;NFSU2_TR(0x4a83bc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4a83bd:{NFSU2_TR(0x4a83bd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a83be:{NFSU2_TR(0x4a83be);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a83d0:L4a83d0:{c.instructions+=3;NFSU2_TR(0x4a83d0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a83d2:{NFSU2_TR(0x4a83d2);
u8 U[4];
w4(U+0,u32(0x4cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a83d4:{NFSU2_TR(0x4a83d4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a83d9ull));
TAIL_STATIC(0x440820u,440);
}
B4a83d9:L4a83d9:{c.instructions+=3;NFSU2_TR(0x4a83d9);
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
B4a83dc:{NFSU2_TR(0x4a83dc);
__builtin_memmove(gp(0x83647c),(R+0),4);
}
B4a83e1:{NFSU2_TR(0x4a83e1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a83f0:L4a83f0:{c.instructions+=3;NFSU2_TR(0x4a83f0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a83f2:{NFSU2_TR(0x4a83f2);
u8 U[4];
w4(U+0,u32(0x5cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a83f4:{NFSU2_TR(0x4a83f4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a83f9ull));
TAIL_STATIC(0x440820u,440);
}
B4a83f9:L4a83f9:{c.instructions+=3;NFSU2_TR(0x4a83f9);
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
B4a83fc:{NFSU2_TR(0x4a83fc);
__builtin_memmove(gp(0x836480),(R+0),4);
}
B4a8401:{NFSU2_TR(0x4a8401);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a8410:L4a8410:{c.instructions+=14;NFSU2_TR(0x4a8410);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a8412:{NFSU2_TR(0x4a8412);
u8 U[4];
w4(U+0,u32(0x776418ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a8417:{NFSU2_TR(0x4a8417);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a841d:{NFSU2_TR(0x4a841d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a841e:{NFSU2_TR(0x4a841e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a8425:{NFSU2_TR(0x4a8425);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a8426:{NFSU2_TR(0x4a8426);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a8427:{NFSU2_TR(0x4a8427);
__builtin_memmove((R+24),(R+4),4);
}
B4a8429:{NFSU2_TR(0x4a8429);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a842d:{NFSU2_TR(0x4a842d);
u8 U[4];
w4(U+0,u32(0x790758ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4a8433:{NFSU2_TR(0x4a8433);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a8436:{NFSU2_TR(0x4a8436);
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
B4a8438:{NFSU2_TR(0x4a8438);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a8440:{NFSU2_TR(0x4a8440);
if(r1(R+518)){{goto L4a844b;}}
}
B4a8442:L4a8442:{c.instructions+=2;NFSU2_TR(0x4a8442);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a8443:{NFSU2_TR(0x4a8443);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a8448ull));
TAIL_STATIC(0x490130u,490);
}
B4a8448:L4a8448:{c.instructions+=1;NFSU2_TR(0x4a8448);
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
B4a844b:L4a844b:{c.instructions+=4;NFSU2_TR(0x4a844b);
__builtin_memmove((R+4),(R+24),4);
}
B4a844d:{NFSU2_TR(0x4a844d);
s1(0x7f63e0,u8(0x1ull));
}
B4a8454:{NFSU2_TR(0x4a8454);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a845c:{NFSU2_TR(0x4a845c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a8461ull));
TAIL_STATIC(0x510d40u,510);
}
B4a8461:L4a8461:{c.instructions+=5;NFSU2_TR(0x4a8461);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a8465:{NFSU2_TR(0x4a8465);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a8466:{NFSU2_TR(0x4a8466);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a846d:{NFSU2_TR(0x4a846d);
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
B4a8470:{NFSU2_TR(0x4a8470);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a8480:L4a8480:{c.instructions+=6;NFSU2_TR(0x4a8480);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a8481:{NFSU2_TR(0x4a8481);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a8482:{NFSU2_TR(0x4a8482);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4a8486:{NFSU2_TR(0x4a8486);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4a8488:{NFSU2_TR(0x4a8488);
__builtin_memmove((R+24),(R+4),4);
}
B4a848a:{NFSU2_TR(0x4a848a);
if(r1(R+518)){{goto L4a8549;}}
}
B4a8490:L4a8490:{c.instructions+=3;NFSU2_TR(0x4a8490);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a8493:{NFSU2_TR(0x4a8493);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4a8495:{NFSU2_TR(0x4a8495);
if(r1(R+518)){{goto L4a84cc;}}
}
B4a8497:L4a8497:{c.instructions+=4;NFSU2_TR(0x4a8497);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a849a:{NFSU2_TR(0x4a849a);
u8 U[4];
w4(U+0,u32(0x3c44a2cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a849f:{NFSU2_TR(0x4a849f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a84a0:{NFSU2_TR(0x4a84a0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a84a5ull));
TAIL_STATIC(0x5379c0u,537);
}
B4a84a5:L4a84a5:{c.instructions+=2;NFSU2_TR(0x4a84a5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a84a6:{NFSU2_TR(0x4a84a6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a84abull));
TAIL_STATIC(0x50ca50u,50c);
}
B4a84ab:L4a84ab:{c.instructions+=7;NFSU2_TR(0x4a84ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a84ae:{NFSU2_TR(0x4a84ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a84b1:{NFSU2_TR(0x4a84b1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4a84b4:{NFSU2_TR(0x4a84b4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a84b5:{NFSU2_TR(0x4a84b5);
u8 U[4];
w4(U+0,u32(0x3c44a2cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a84ba:{NFSU2_TR(0x4a84ba);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a84bb:{NFSU2_TR(0x4a84bb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a84c0ull));
TAIL_STATIC(0x537a10u,537);
}
B4a84c0:L4a84c0:{c.instructions+=3;NFSU2_TR(0x4a84c0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4a84c3:{NFSU2_TR(0x4a84c3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a84c4:{NFSU2_TR(0x4a84c4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a84c9ull));
TAIL_STATIC(0x50c900u,50c);
}
B4a84c9:L4a84c9:{c.instructions+=1;NFSU2_TR(0x4a84c9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4a84cc:L4a84cc:{c.instructions+=3;NFSU2_TR(0x4a84cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a84cf:{NFSU2_TR(0x4a84cf);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4a84d1:{NFSU2_TR(0x4a84d1);
if(r1(R+518)){{goto L4a8508;}}
}
B4a84d3:L4a84d3:{c.instructions+=4;NFSU2_TR(0x4a84d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a84d6:{NFSU2_TR(0x4a84d6);
u8 U[4];
w4(U+0,u32(0x3b35a98eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a84db:{NFSU2_TR(0x4a84db);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a84dc:{NFSU2_TR(0x4a84dc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a84e1ull));
TAIL_STATIC(0x5379c0u,537);
}
B4a84e1:L4a84e1:{c.instructions+=2;NFSU2_TR(0x4a84e1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a84e2:{NFSU2_TR(0x4a84e2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a84e7ull));
TAIL_STATIC(0x50ca50u,50c);
}
B4a84e7:L4a84e7:{c.instructions+=7;NFSU2_TR(0x4a84e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a84ea:{NFSU2_TR(0x4a84ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a84ed:{NFSU2_TR(0x4a84ed);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4a84f0:{NFSU2_TR(0x4a84f0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a84f1:{NFSU2_TR(0x4a84f1);
u8 U[4];
w4(U+0,u32(0x3b35a98eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a84f6:{NFSU2_TR(0x4a84f6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a84f7:{NFSU2_TR(0x4a84f7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a84fcull));
TAIL_STATIC(0x537a10u,537);
}
B4a84fc:L4a84fc:{c.instructions+=3;NFSU2_TR(0x4a84fc);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4a84ff:{NFSU2_TR(0x4a84ff);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a8500:{NFSU2_TR(0x4a8500);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a8505ull));
TAIL_STATIC(0x50c900u,50c);
}
B4a8505:L4a8505:{c.instructions+=1;NFSU2_TR(0x4a8505);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4a8508:L4a8508:{c.instructions+=3;NFSU2_TR(0x4a8508);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a850b:{NFSU2_TR(0x4a850b);
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
B4a850d:{NFSU2_TR(0x4a850d);
if(r1(R+518)){{goto L4a853b;}}
}
B4a850f:L4a850f:{c.instructions+=4;NFSU2_TR(0x4a850f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a8512:{NFSU2_TR(0x4a8512);
u8 U[4];
w4(U+0,u32(0xb08e7468ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a8517:{NFSU2_TR(0x4a8517);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a8518:{NFSU2_TR(0x4a8518);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a851dull));
TAIL_STATIC(0x5379c0u,537);
}
B4a851d:L4a851d:{c.instructions+=2;NFSU2_TR(0x4a851d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a851e:{NFSU2_TR(0x4a851e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a8523ull));
TAIL_STATIC(0x50ca50u,50c);
}
B4a8523:L4a8523:{c.instructions+=6;NFSU2_TR(0x4a8523);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a8526:{NFSU2_TR(0x4a8526);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a8528:{NFSU2_TR(0x4a8528);
u8 U[4];
w4(U+0,u32(0x78ffd0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a852d:{NFSU2_TR(0x4a852d);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a8532:{NFSU2_TR(0x4a8532);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a8533:{NFSU2_TR(0x4a8533);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a8538ull));
TAIL_STATIC(0x537c00u,537);
}
B4a8538:L4a8538:{c.instructions+=1;NFSU2_TR(0x4a8538);
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
B4a853b:L4a853b:{c.instructions+=5;NFSU2_TR(0x4a853b);
__builtin_memmove((R+4),gp(0x8651ac),4);
}
B4a8541:{NFSU2_TR(0x4a8541);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4a8542:{NFSU2_TR(0x4a8542);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a8545:{NFSU2_TR(0x4a8545);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a8546:{NFSU2_TR(0x4a8546);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a8549:L4a8549:{c.instructions+=4;NFSU2_TR(0x4a8549);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a854c:{NFSU2_TR(0x4a854c);
u8 U[4];
w4(U+0,u32(0x3c44a2cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a8551:{NFSU2_TR(0x4a8551);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a8552:{NFSU2_TR(0x4a8552);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a8557ull));
TAIL_STATIC(0x5379c0u,537);
}
B4a8557:L4a8557:{c.instructions+=2;NFSU2_TR(0x4a8557);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a8558:{NFSU2_TR(0x4a8558);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a855dull));
TAIL_STATIC(0x50ca00u,50c);
}
B4a855d:L4a855d:{c.instructions+=4;NFSU2_TR(0x4a855d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a8560:{NFSU2_TR(0x4a8560);
u8 U[4];
w4(U+0,u32(0x3b35a98eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a8565:{NFSU2_TR(0x4a8565);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a8566:{NFSU2_TR(0x4a8566);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a856bull));
TAIL_STATIC(0x5379c0u,537);
}
B4a856b:L4a856b:{c.instructions+=2;NFSU2_TR(0x4a856b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a856c:{NFSU2_TR(0x4a856c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a8571ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4a8571:L4a8571:{c.instructions+=4;NFSU2_TR(0x4a8571);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4a8574:{NFSU2_TR(0x4a8574);
u8 U[4];
w4(U+0,u32(0xb08e7468ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a8579:{NFSU2_TR(0x4a8579);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a857a:{NFSU2_TR(0x4a857a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a857full));
TAIL_STATIC(0x5379c0u,537);
}
B4a857f:L4a857f:{c.instructions+=2;NFSU2_TR(0x4a857f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a8580:{NFSU2_TR(0x4a8580);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a8585ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4a8585:L4a8585:{c.instructions+=4;NFSU2_TR(0x4a8585);
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
B4a8588:{NFSU2_TR(0x4a8588);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4a8589:{NFSU2_TR(0x4a8589);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a858a:{NFSU2_TR(0x4a858a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a8590:L4a8590:{c.instructions+=6;NFSU2_TR(0x4a8590);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a8591:{NFSU2_TR(0x4a8591);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4a8595:{NFSU2_TR(0x4a8595);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a8596:{NFSU2_TR(0x4a8596);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B4a8598:{NFSU2_TR(0x4a8598);
w4(R+0,u32(0x7f63e8ull));
}
B4a859d:{NFSU2_TR(0x4a859d);
__builtin_memmove((R+4),(R+4),4);
}
B4a85a0:L4a85a0:{c.instructions+=5;NFSU2_TR(0x4a85a0);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B4a85a2:{NFSU2_TR(0x4a85a2);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
__builtin_memmove((R+8),(U+0),2);
}
B4a85a5:{NFSU2_TR(0x4a85a5);
w4(R+8,u32(u32(r4(R+8))&u32(r4(R+24))));
}
B4a85a7:{NFSU2_TR(0x4a85a7);
u8 U[2];
w2(U+0,u16(u32(r2(R+8))&u32(r2(R+8))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B4a85aa:{NFSU2_TR(0x4a85aa);
if(r1(R+518)){{goto L4a85ad;}}
}
B4a85ac:L4a85ac:{c.instructions+=1;NFSU2_TR(0x4a85ac);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B4a85ad:L4a85ad:{c.instructions+=3;NFSU2_TR(0x4a85ad);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
}
B4a85b0:{NFSU2_TR(0x4a85b0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7f65e8ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4a85b5:{NFSU2_TR(0x4a85b5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4a85a0u);}goto L4a85a0;}}
}
B4a85b7:L4a85b7:{c.instructions+=2;NFSU2_TR(0x4a85b7);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4a85b9:{NFSU2_TR(0x4a85b9);
if(r1(R+518)){{goto L4a85ed;}}
}
B4a85bb:L4a85bb:{c.instructions+=2;NFSU2_TR(0x4a85bb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a85bc:{NFSU2_TR(0x4a85bc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a85c1ull));
TAIL_STATIC(0x43c1c0u,43c);
}
B4a85c1:L4a85c1:{c.instructions+=5;NFSU2_TR(0x4a85c1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4a85c4:{NFSU2_TR(0x4a85c4);
__builtin_memmove((R+8),(R+0),4);
}
B4a85c6:{NFSU2_TR(0x4a85c6);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4a85c8:{NFSU2_TR(0x4a85c8);
w4(R+4,u32(0x7f63e8ull));
}
B4a85cd:{NFSU2_TR(0x4a85cd);
__builtin_memmove((R+4),(R+4),4);
}
B4a85d0:L4a85d0:{c.instructions+=5;NFSU2_TR(0x4a85d0);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4a85d2:{NFSU2_TR(0x4a85d2);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
__builtin_memmove((R+28),(U+0),2);
}
B4a85d5:{NFSU2_TR(0x4a85d5);
w4(R+28,u32(u32(r4(R+28))&u32(r4(R+24))));
}
B4a85d7:{NFSU2_TR(0x4a85d7);
u8 U[2];
w2(U+0,u16(u32(r2(R+28))&u32(r2(R+28))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B4a85da:{NFSU2_TR(0x4a85da);
if(r1(R+518)){{goto L4a85e1;}}
}
B4a85dc:L4a85dc:{c.instructions+=2;NFSU2_TR(0x4a85dc);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4a85de:{NFSU2_TR(0x4a85de);
if(r1(R+518)){{goto L4a85f4;}}
}
B4a85e0:L4a85e0:{c.instructions+=1;NFSU2_TR(0x4a85e0);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B4a85e1:L4a85e1:{c.instructions+=4;NFSU2_TR(0x4a85e1);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B4a85e4:{NFSU2_TR(0x4a85e4);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B4a85e5:{NFSU2_TR(0x4a85e5);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7f65e8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4a85eb:{NFSU2_TR(0x4a85eb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4a85d0u);}goto L4a85d0;}}
}
B4a85ed:L4a85ed:{c.instructions+=4;NFSU2_TR(0x4a85ed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4a85ee:{NFSU2_TR(0x4a85ee);
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
B4a85f0:{NFSU2_TR(0x4a85f0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a85f1:{NFSU2_TR(0x4a85f1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a85f4:L4a85f4:{c.instructions+=5;NFSU2_TR(0x4a85f4);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B4a85f7:{NFSU2_TR(0x4a85f7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4a85f8:{NFSU2_TR(0x4a85f8);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x7f63e8ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x7f63e8ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x7f63e8ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4a85fd:{NFSU2_TR(0x4a85fd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a85fe:{NFSU2_TR(0x4a85fe);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a8610:L4a8610:{c.instructions+=3;NFSU2_TR(0x4a8610);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a8612:{NFSU2_TR(0x4a8612);
u8 U[4];
w4(U+0,u32(0x54ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a8614:{NFSU2_TR(0x4a8614);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a8619ull));
TAIL_STATIC(0x440820u,440);
}
B4a8619:L4a8619:{c.instructions+=3;NFSU2_TR(0x4a8619);
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
B4a861c:{NFSU2_TR(0x4a861c);
__builtin_memmove(gp(0x836484),(R+0),4);
}
B4a8621:{NFSU2_TR(0x4a8621);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a8630:L4a8630:{c.instructions+=3;NFSU2_TR(0x4a8630);
__builtin_memmove((R+4),gp(0x836488),4);
}
B4a8636:{NFSU2_TR(0x4a8636);
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
B4a8638:{NFSU2_TR(0x4a8638);
if(r1(R+518)){{goto L4a8640;}}
}
B4a863a:L4a863a:{c.instructions+=3;NFSU2_TR(0x4a863a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4a863c:{NFSU2_TR(0x4a863c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a863e:{NFSU2_TR(0x4a863e);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a8640ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B4a8640:L4a8640:{c.instructions+=2;NFSU2_TR(0x4a8640);
s4(0x836488,u32(0x0ull));
}
B4a864a:{NFSU2_TR(0x4a864a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a8650:L4a8650:{c.instructions+=12;NFSU2_TR(0x4a8650);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a8652:{NFSU2_TR(0x4a8652);
u8 U[4];
w4(U+0,u32(0x776418ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a8657:{NFSU2_TR(0x4a8657);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a865d:{NFSU2_TR(0x4a865d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a865e:{NFSU2_TR(0x4a865e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a8665:{NFSU2_TR(0x4a8665);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a8666:{NFSU2_TR(0x4a8666);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a866a:{NFSU2_TR(0x4a866a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a866b:{NFSU2_TR(0x4a866b);
__builtin_memmove((R+24),(R+4),4);
}
B4a866d:{NFSU2_TR(0x4a866d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a866e:{NFSU2_TR(0x4a866e);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a8672:{NFSU2_TR(0x4a8672);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a8677ull));
TAIL_STATIC(0x551de0u,551);
}
B4a8677:L4a8677:{c.instructions+=13;NFSU2_TR(0x4a8677);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4a8679:{NFSU2_TR(0x4a8679);
u8 U[4];
w4(U+0,u32(0x790774ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4a867f:{NFSU2_TR(0x4a867f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a8682:{NFSU2_TR(0x4a8682);
__builtin_memmove((R+4),gp(0x8651ac),4);
}
B4a8688:{NFSU2_TR(0x4a8688);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a868a:{NFSU2_TR(0x4a868a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a868d:{NFSU2_TR(0x4a868d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4a8690:{NFSU2_TR(0x4a8690);
u8 U[4];
w4(U+0,u32(0x790768ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a8695:{NFSU2_TR(0x4a8695);
u8 U[4];
w4(U+0,u32(0x4b98c4b9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a869a:{NFSU2_TR(0x4a869a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a869b:{NFSU2_TR(0x4a869b);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a869f:{NFSU2_TR(0x4a869f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a86a2:{NFSU2_TR(0x4a86a2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a86a7ull));
TAIL_STATIC(0x537c00u,537);
}
B4a86a7:L4a86a7:{c.instructions+=6;NFSU2_TR(0x4a86a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a86aa:{NFSU2_TR(0x4a86aa);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a86ac:{NFSU2_TR(0x4a86ac);
u8 U[4];
w4(U+0,u32(0x78fc44ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a86b1:{NFSU2_TR(0x4a86b1);
u8 U[4];
w4(U+0,u32(0x94dce36aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a86b6:{NFSU2_TR(0x4a86b6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a86b7:{NFSU2_TR(0x4a86b7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a86bcull));
TAIL_STATIC(0x537c00u,537);
}
B4a86bc:L4a86bc:{c.instructions+=7;NFSU2_TR(0x4a86bc);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a86c0:{NFSU2_TR(0x4a86c0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B4a86c3:{NFSU2_TR(0x4a86c3);
__builtin_memmove((R+0),(R+24),4);
}
B4a86c5:{NFSU2_TR(0x4a86c5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a86c6:{NFSU2_TR(0x4a86c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a86cd:{NFSU2_TR(0x4a86cd);
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
B4a86d0:{NFSU2_TR(0x4a86d0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a86e0:L4a86e0:{c.instructions+=3;NFSU2_TR(0x4a86e0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a86e1:{NFSU2_TR(0x4a86e1);
__builtin_memmove((R+24),(R+4),4);
}
B4a86e3:{NFSU2_TR(0x4a86e3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a86e8ull));
{goto L4a8700;}
}
B4a86e8:L4a86e8:{c.instructions+=2;NFSU2_TR(0x4a86e8);
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
B4a86ed:{NFSU2_TR(0x4a86ed);
if(r1(R+518)){{goto L4a86f8;}}
}
B4a86ef:L4a86ef:{c.instructions+=2;NFSU2_TR(0x4a86ef);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a86f0:{NFSU2_TR(0x4a86f0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a86f5ull));
TAIL_STATIC(0x575630u,575);
}
B4a86f5:L4a86f5:{c.instructions+=1;NFSU2_TR(0x4a86f5);
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
B4a86f8:L4a86f8:{c.instructions+=3;NFSU2_TR(0x4a86f8);
__builtin_memmove((R+0),(R+24),4);
}
B4a86fa:{NFSU2_TR(0x4a86fa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a86fb:{NFSU2_TR(0x4a86fb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a8700:L4a8700:{c.instructions+=2;NFSU2_TR(0x4a8700);
u8 U[4];
w4(U+0,u32(0x790774ull));
s4(u32(r4(R+4)),r4(U+0));
}
B4a8706:{NFSU2_TR(0x4a8706);
TAIL_STATIC(0x510d40u,510);
}
B4a8710:L4a8710:{c.instructions+=3;NFSU2_TR(0x4a8710);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a8711:{NFSU2_TR(0x4a8711);
__builtin_memmove((R+24),(R+4),4);
}
B4a8713:{NFSU2_TR(0x4a8713);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a8718ull));
{goto L4a8730;}
}
B4a8718:L4a8718:{c.instructions+=2;NFSU2_TR(0x4a8718);
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
B4a871d:{NFSU2_TR(0x4a871d);
if(r1(R+518)){{goto L4a8728;}}
}
B4a871f:L4a871f:{c.instructions+=2;NFSU2_TR(0x4a871f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a8720:{NFSU2_TR(0x4a8720);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a8725ull));
TAIL_STATIC(0x575630u,575);
}
B4a8725:L4a8725:{c.instructions+=1;NFSU2_TR(0x4a8725);
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
B4a8728:L4a8728:{c.instructions+=3;NFSU2_TR(0x4a8728);
__builtin_memmove((R+0),(R+24),4);
}
B4a872a:{NFSU2_TR(0x4a872a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a872b:{NFSU2_TR(0x4a872b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a8730:L4a8730:{c.instructions+=2;NFSU2_TR(0x4a8730);
u8 U[4];
w4(U+0,u32(0x790784ull));
s4(u32(r4(R+4)),r4(U+0));
}
B4a8736:{NFSU2_TR(0x4a8736);
TAIL_STATIC(0x510d40u,510);
}
B4a8740:L4a8740:{c.instructions+=9;NFSU2_TR(0x4a8740);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a8742:{NFSU2_TR(0x4a8742);
u8 U[4];
w4(U+0,u32(0x772a64ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a8747:{NFSU2_TR(0x4a8747);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a874d:{NFSU2_TR(0x4a874d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a874e:{NFSU2_TR(0x4a874e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a8755:{NFSU2_TR(0x4a8755);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a8756:{NFSU2_TR(0x4a8756);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a8757:{NFSU2_TR(0x4a8757);
u8 U[4];
w4(U+0,u32(0x50ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a8759:{NFSU2_TR(0x4a8759);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a875eull));
TAIL_STATIC(0x575620u,575);
}
B4a875e:L4a875e:{c.instructions+=6;NFSU2_TR(0x4a875e);
__builtin_memmove((R+24),(R+0),4);
}
B4a8760:{NFSU2_TR(0x4a8760);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4a8763:{NFSU2_TR(0x4a8763);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a8767:{NFSU2_TR(0x4a8767);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4a8769:{NFSU2_TR(0x4a8769);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a8771:{NFSU2_TR(0x4a8771);
if(r1(R+518)){{goto L4a879b;}}
}
B4a8773:L4a8773:{c.instructions+=4;NFSU2_TR(0x4a8773);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a8777:{NFSU2_TR(0x4a8777);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a8778:{NFSU2_TR(0x4a8778);
__builtin_memmove((R+4),(R+24),4);
}
B4a877a:{NFSU2_TR(0x4a877a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a877full));
TAIL_STATIC(0x551de0u,551);
}
B4a877f:L4a877f:{c.instructions+=8;NFSU2_TR(0x4a877f);
u8 U[4];
w4(U+0,u32(0x790784ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4a8785:{NFSU2_TR(0x4a8785);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4a8789:{NFSU2_TR(0x4a8789);
__builtin_memmove((R+0),(R+24),4);
}
B4a878b:{NFSU2_TR(0x4a878b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a878c:{NFSU2_TR(0x4a878c);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a8790:{NFSU2_TR(0x4a8790);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a8797:{NFSU2_TR(0x4a8797);
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
B4a879a:{NFSU2_TR(0x4a879a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a879b:L4a879b:{c.instructions+=6;NFSU2_TR(0x4a879b);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a879f:{NFSU2_TR(0x4a879f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4a87a1:{NFSU2_TR(0x4a87a1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a87a2:{NFSU2_TR(0x4a87a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a87a9:{NFSU2_TR(0x4a87a9);
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
B4a87ac:{NFSU2_TR(0x4a87ac);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a87b0:L4a87b0:{c.instructions+=3;NFSU2_TR(0x4a87b0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a87b1:{NFSU2_TR(0x4a87b1);
__builtin_memmove((R+24),(R+4),4);
}
B4a87b3:{NFSU2_TR(0x4a87b3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a87b8ull));
{goto L4a87d0;}
}
B4a87b8:L4a87b8:{c.instructions+=2;NFSU2_TR(0x4a87b8);
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
B4a87bd:{NFSU2_TR(0x4a87bd);
if(r1(R+518)){{goto L4a87c8;}}
}
B4a87bf:L4a87bf:{c.instructions+=2;NFSU2_TR(0x4a87bf);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a87c0:{NFSU2_TR(0x4a87c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a87c5ull));
TAIL_STATIC(0x575630u,575);
}
B4a87c5:L4a87c5:{c.instructions+=1;NFSU2_TR(0x4a87c5);
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
B4a87c8:L4a87c8:{c.instructions+=3;NFSU2_TR(0x4a87c8);
__builtin_memmove((R+0),(R+24),4);
}
B4a87ca:{NFSU2_TR(0x4a87ca);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a87cb:{NFSU2_TR(0x4a87cb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a87d0:L4a87d0:{c.instructions+=2;NFSU2_TR(0x4a87d0);
u8 U[4];
w4(U+0,u32(0x7907acull));
s4(u32(r4(R+4)),r4(U+0));
}
B4a87d6:{NFSU2_TR(0x4a87d6);
TAIL_STATIC(0x510d40u,510);
}
B4a87e0:L4a87e0:{c.instructions+=9;NFSU2_TR(0x4a87e0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a87e2:{NFSU2_TR(0x4a87e2);
u8 U[4];
w4(U+0,u32(0x772a84ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a87e7:{NFSU2_TR(0x4a87e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a87ed:{NFSU2_TR(0x4a87ed);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a87ee:{NFSU2_TR(0x4a87ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a87f5:{NFSU2_TR(0x4a87f5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a87f6:{NFSU2_TR(0x4a87f6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a87f7:{NFSU2_TR(0x4a87f7);
u8 U[4];
w4(U+0,u32(0x50ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a87f9:{NFSU2_TR(0x4a87f9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a87feull));
TAIL_STATIC(0x575620u,575);
}
B4a87fe:L4a87fe:{c.instructions+=6;NFSU2_TR(0x4a87fe);
__builtin_memmove((R+24),(R+0),4);
}
B4a8800:{NFSU2_TR(0x4a8800);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4a8803:{NFSU2_TR(0x4a8803);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a8807:{NFSU2_TR(0x4a8807);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4a8809:{NFSU2_TR(0x4a8809);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a8811:{NFSU2_TR(0x4a8811);
if(r1(R+518)){{goto L4a8847;}}
}
B4a8813:L4a8813:{c.instructions+=4;NFSU2_TR(0x4a8813);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a8817:{NFSU2_TR(0x4a8817);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a8818:{NFSU2_TR(0x4a8818);
__builtin_memmove((R+4),(R+24),4);
}
B4a881a:{NFSU2_TR(0x4a881a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a881full));
TAIL_STATIC(0x551de0u,551);
}
B4a881f:L4a881f:{c.instructions+=10;NFSU2_TR(0x4a881f);
u8 U[4];
w4(U+0,u32(0x7907acull));
s4(u32(r4(R+24)),r4(U+0));
}
B4a8825:{NFSU2_TR(0x4a8825);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a882c:{NFSU2_TR(0x4a882c);
__builtin_memmove((R+4),gp(0x8651ac),4);
}
B4a8832:{NFSU2_TR(0x4a8832);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a8835:{NFSU2_TR(0x4a8835);
__builtin_memmove((R+0),(R+24),4);
}
B4a8837:{NFSU2_TR(0x4a8837);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a8838:{NFSU2_TR(0x4a8838);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a883c:{NFSU2_TR(0x4a883c);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a8843:{NFSU2_TR(0x4a8843);
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
B4a8846:{NFSU2_TR(0x4a8846);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a8847:L4a8847:{c.instructions+=6;NFSU2_TR(0x4a8847);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a884b:{NFSU2_TR(0x4a884b);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4a884d:{NFSU2_TR(0x4a884d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a884e:{NFSU2_TR(0x4a884e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a8855:{NFSU2_TR(0x4a8855);
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
B4a8858:{NFSU2_TR(0x4a8858);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a8860:L4a8860:{c.instructions+=12;NFSU2_TR(0x4a8860);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a8862:{NFSU2_TR(0x4a8862);
u8 U[4];
w4(U+0,u32(0x776418ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a8867:{NFSU2_TR(0x4a8867);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a886d:{NFSU2_TR(0x4a886d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a886e:{NFSU2_TR(0x4a886e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a8875:{NFSU2_TR(0x4a8875);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a8876:{NFSU2_TR(0x4a8876);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a887a:{NFSU2_TR(0x4a887a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a887b:{NFSU2_TR(0x4a887b);
__builtin_memmove((R+24),(R+4),4);
}
B4a887d:{NFSU2_TR(0x4a887d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a887e:{NFSU2_TR(0x4a887e);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a8882:{NFSU2_TR(0x4a8882);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a8887ull));
TAIL_STATIC(0x551de0u,551);
}
B4a8887:L4a8887:{c.instructions+=7;NFSU2_TR(0x4a8887);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a888a:{NFSU2_TR(0x4a888a);
u8 U[4];
__builtin_memmove((U+0),(MODV+260),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a888f:{NFSU2_TR(0x4a888f);
u8 U[4];
w4(U+0,u32(0x72cf9f38ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a8894:{NFSU2_TR(0x4a8894);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a8895:{NFSU2_TR(0x4a8895);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a889d:{NFSU2_TR(0x4a889d);
u8 U[4];
w4(U+0,u32(0x7907d8ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4a88a3:{NFSU2_TR(0x4a88a3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a88a8ull));
TAIL_STATIC(0x5379c0u,537);
}
B4a88a8:L4a88a8:{c.instructions+=3;NFSU2_TR(0x4a88a8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4a88ab:{NFSU2_TR(0x4a88ab);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a88ac:{NFSU2_TR(0x4a88ac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a88b1ull));
TAIL_STATIC(0x50c9b0u,50c);
}
B4a88b1:L4a88b1:{c.instructions+=4;NFSU2_TR(0x4a88b1);
__builtin_memmove((R+4),gp(0x82b884),4);
}
B4a88b7:{NFSU2_TR(0x4a88b7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4a88ba:{NFSU2_TR(0x4a88ba);
u8 U[4];
w4(U+0,u32(0x7907e8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a88bf:{NFSU2_TR(0x4a88bf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a88c4ull));
TAIL_STATIC(0x480c50u,480);
}
B4a88c4:L4a88c4:{c.instructions+=3;NFSU2_TR(0x4a88c4);
__builtin_memmove((R+0),gp(0x836490),4);
}
B4a88c9:{NFSU2_TR(0x4a88c9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4a88cb:{NFSU2_TR(0x4a88cb);
if(r1(R+518)){{goto L4a88eb;}}
}
B4a88cd:L4a88cd:{c.instructions+=2;NFSU2_TR(0x4a88cd);
u8 U[4];
w4(U+0,u32(0x78fcd8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a88d2:{NFSU2_TR(0x4a88d2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a88d7ull));
TAIL_STATIC(0x52cf60u,52c);
}
B4a88d7:L4a88d7:{c.instructions+=3;NFSU2_TR(0x4a88d7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4a88da:{NFSU2_TR(0x4a88da);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4a88dc:{NFSU2_TR(0x4a88dc);
if(r1(R+518)){{goto L4a88eb;}}
}
B4a88de:L4a88de:{c.instructions+=2;NFSU2_TR(0x4a88de);
u8 U[4];
w4(U+0,u32(0x78fcd8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a88e3:{NFSU2_TR(0x4a88e3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a88e8ull));
TAIL_STATIC(0x5379a0u,537);
}
B4a88e8:L4a88e8:{c.instructions+=1;NFSU2_TR(0x4a88e8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4a88eb:L4a88eb:{c.instructions+=6;NFSU2_TR(0x4a88eb);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a88ef:{NFSU2_TR(0x4a88ef);
__builtin_memmove((R+0),(R+24),4);
}
B4a88f1:{NFSU2_TR(0x4a88f1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a88f2:{NFSU2_TR(0x4a88f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a88f9:{NFSU2_TR(0x4a88f9);
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
B4a88fc:{NFSU2_TR(0x4a88fc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a8900:L4a8900:{c.instructions+=3;NFSU2_TR(0x4a8900);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a8901:{NFSU2_TR(0x4a8901);
__builtin_memmove((R+24),(R+4),4);
}
B4a8903:{NFSU2_TR(0x4a8903);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a8908ull));
{goto L4a8920;}
}
B4a8908:L4a8908:{c.instructions+=2;NFSU2_TR(0x4a8908);
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
B4a890d:{NFSU2_TR(0x4a890d);
if(r1(R+518)){{goto L4a8918;}}
}
B4a890f:L4a890f:{c.instructions+=2;NFSU2_TR(0x4a890f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a8910:{NFSU2_TR(0x4a8910);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a8915ull));
TAIL_STATIC(0x575630u,575);
}
B4a8915:L4a8915:{c.instructions+=1;NFSU2_TR(0x4a8915);
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
B4a8918:L4a8918:{c.instructions+=3;NFSU2_TR(0x4a8918);
__builtin_memmove((R+0),(R+24),4);
}
B4a891a:{NFSU2_TR(0x4a891a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a891b:{NFSU2_TR(0x4a891b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a8920:L4a8920:{c.instructions+=2;NFSU2_TR(0x4a8920);
u8 U[4];
w4(U+0,u32(0x7907d8ull));
s4(u32(r4(R+4)),r4(U+0));
}
B4a8926:{NFSU2_TR(0x4a8926);
TAIL_STATIC(0x510d40u,510);
}
B4a8930:L4a8930:{c.instructions+=12;NFSU2_TR(0x4a8930);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a8932:{NFSU2_TR(0x4a8932);
u8 U[4];
w4(U+0,u32(0x776418ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a8937:{NFSU2_TR(0x4a8937);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a893d:{NFSU2_TR(0x4a893d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a893e:{NFSU2_TR(0x4a893e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a8945:{NFSU2_TR(0x4a8945);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a8946:{NFSU2_TR(0x4a8946);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a894a:{NFSU2_TR(0x4a894a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a894b:{NFSU2_TR(0x4a894b);
__builtin_memmove((R+24),(R+4),4);
}
B4a894d:{NFSU2_TR(0x4a894d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a894e:{NFSU2_TR(0x4a894e);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a8952:{NFSU2_TR(0x4a8952);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a8957ull));
TAIL_STATIC(0x551de0u,551);
}
B4a8957:L4a8957:{c.instructions+=7;NFSU2_TR(0x4a8957);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a895a:{NFSU2_TR(0x4a895a);
u8 U[4];
__builtin_memmove((U+0),(MODV+264),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a895f:{NFSU2_TR(0x4a895f);
u8 U[4];
w4(U+0,u32(0x58bcf5b6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a8964:{NFSU2_TR(0x4a8964);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a8965:{NFSU2_TR(0x4a8965);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a896d:{NFSU2_TR(0x4a896d);
u8 U[4];
w4(U+0,u32(0x7907f4ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4a8973:{NFSU2_TR(0x4a8973);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a8978ull));
TAIL_STATIC(0x5379c0u,537);
}
B4a8978:L4a8978:{c.instructions+=3;NFSU2_TR(0x4a8978);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4a897b:{NFSU2_TR(0x4a897b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a897c:{NFSU2_TR(0x4a897c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a8981ull));
TAIL_STATIC(0x50c9b0u,50c);
}
B4a8981:L4a8981:{c.instructions+=9;NFSU2_TR(0x4a8981);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a8985:{NFSU2_TR(0x4a8985);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4a8988:{NFSU2_TR(0x4a8988);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4a898c:{NFSU2_TR(0x4a898c);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4dull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4a8990:{NFSU2_TR(0x4a8990);
__builtin_memmove((R+0),(R+24),4);
}
B4a8992:{NFSU2_TR(0x4a8992);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a8993:{NFSU2_TR(0x4a8993);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a899a:{NFSU2_TR(0x4a899a);
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
B4a899d:{NFSU2_TR(0x4a899d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a89a0:L4a89a0:{c.instructions+=3;NFSU2_TR(0x4a89a0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a89a1:{NFSU2_TR(0x4a89a1);
__builtin_memmove((R+24),(R+4),4);
}
B4a89a3:{NFSU2_TR(0x4a89a3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a89a8ull));
{goto L4a89c0;}
}
B4a89a8:L4a89a8:{c.instructions+=2;NFSU2_TR(0x4a89a8);
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
B4a89ad:{NFSU2_TR(0x4a89ad);
if(r1(R+518)){{goto L4a89b8;}}
}
B4a89af:L4a89af:{c.instructions+=2;NFSU2_TR(0x4a89af);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a89b0:{NFSU2_TR(0x4a89b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a89b5ull));
TAIL_STATIC(0x575630u,575);
}
B4a89b5:L4a89b5:{c.instructions+=1;NFSU2_TR(0x4a89b5);
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
B4a89b8:L4a89b8:{c.instructions+=3;NFSU2_TR(0x4a89b8);
__builtin_memmove((R+0),(R+24),4);
}
B4a89ba:{NFSU2_TR(0x4a89ba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a89bb:{NFSU2_TR(0x4a89bb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a89c0:L4a89c0:{c.instructions+=2;NFSU2_TR(0x4a89c0);
u8 U[4];
w4(U+0,u32(0x7907f4ull));
s4(u32(r4(R+4)),r4(U+0));
}
B4a89c6:{NFSU2_TR(0x4a89c6);
TAIL_STATIC(0x510d40u,510);
}
B4a89d0:L4a89d0:{c.instructions+=8;NFSU2_TR(0x4a89d0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a89d2:{NFSU2_TR(0x4a89d2);
u8 U[4];
w4(U+0,u32(0x772aa4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a89d7:{NFSU2_TR(0x4a89d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a89dd:{NFSU2_TR(0x4a89dd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a89de:{NFSU2_TR(0x4a89de);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a89e5:{NFSU2_TR(0x4a89e5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a89e6:{NFSU2_TR(0x4a89e6);
u8 U[4];
w4(U+0,u32(0x50ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a89e8:{NFSU2_TR(0x4a89e8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a89edull));
TAIL_STATIC(0x575620u,575);
}
B4a89ed:L4a89ed:{c.instructions+=5;NFSU2_TR(0x4a89ed);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4a89f0:{NFSU2_TR(0x4a89f0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B4a89f4:{NFSU2_TR(0x4a89f4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4a89f6:{NFSU2_TR(0x4a89f6);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a89fe:{NFSU2_TR(0x4a89fe);
if(r1(R+518)){{goto L4a8a1b;}}
}
B4a8a00:L4a8a00:{c.instructions+=4;NFSU2_TR(0x4a8a00);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a8a04:{NFSU2_TR(0x4a8a04);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a8a05:{NFSU2_TR(0x4a8a05);
__builtin_memmove((R+4),(R+0),4);
}
B4a8a07:{NFSU2_TR(0x4a8a07);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a8a0cull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4a8930u);}goto L4a8930;}
}
B4a8a0c:L4a8a0c:{c.instructions+=4;NFSU2_TR(0x4a8a0c);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a8a10:{NFSU2_TR(0x4a8a10);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a8a17:{NFSU2_TR(0x4a8a17);
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
B4a8a1a:{NFSU2_TR(0x4a8a1a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a8a1b:L4a8a1b:{c.instructions+=5;NFSU2_TR(0x4a8a1b);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a8a1f:{NFSU2_TR(0x4a8a1f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4a8a21:{NFSU2_TR(0x4a8a21);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a8a28:{NFSU2_TR(0x4a8a28);
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
B4a8a2b:{NFSU2_TR(0x4a8a2b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a8a30:L4a8a30:{c.instructions+=12;NFSU2_TR(0x4a8a30);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a8a32:{NFSU2_TR(0x4a8a32);
u8 U[4];
w4(U+0,u32(0x776418ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a8a37:{NFSU2_TR(0x4a8a37);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a8a3d:{NFSU2_TR(0x4a8a3d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a8a3e:{NFSU2_TR(0x4a8a3e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a8a45:{NFSU2_TR(0x4a8a45);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a8a46:{NFSU2_TR(0x4a8a46);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a8a4a:{NFSU2_TR(0x4a8a4a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a8a4b:{NFSU2_TR(0x4a8a4b);
__builtin_memmove((R+24),(R+4),4);
}
B4a8a4d:{NFSU2_TR(0x4a8a4d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a8a4e:{NFSU2_TR(0x4a8a4e);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a8a52:{NFSU2_TR(0x4a8a52);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a8a57ull));
TAIL_STATIC(0x551de0u,551);
}
B4a8a57:L4a8a57:{c.instructions+=7;NFSU2_TR(0x4a8a57);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a8a5a:{NFSU2_TR(0x4a8a5a);
u8 U[4];
w4(U+0,u32(0x79082cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a8a5f:{NFSU2_TR(0x4a8a5f);
u8 U[4];
w4(U+0,u32(0x58bcf5b6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a8a64:{NFSU2_TR(0x4a8a64);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a8a65:{NFSU2_TR(0x4a8a65);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a8a6d:{NFSU2_TR(0x4a8a6d);
u8 U[4];
w4(U+0,u32(0x79081cull));
s4(u32(r4(R+24)),r4(U+0));
}
B4a8a73:{NFSU2_TR(0x4a8a73);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a8a78ull));
TAIL_STATIC(0x5379c0u,537);
}
B4a8a78:L4a8a78:{c.instructions+=3;NFSU2_TR(0x4a8a78);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4a8a7b:{NFSU2_TR(0x4a8a7b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a8a7c:{NFSU2_TR(0x4a8a7c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a8a81ull));
TAIL_STATIC(0x50c9b0u,50c);
}
B4a8a81:L4a8a81:{c.instructions+=7;NFSU2_TR(0x4a8a81);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a8a85:{NFSU2_TR(0x4a8a85);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4a8a88:{NFSU2_TR(0x4a8a88);
__builtin_memmove((R+0),(R+24),4);
}
B4a8a8a:{NFSU2_TR(0x4a8a8a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a8a8b:{NFSU2_TR(0x4a8a8b);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a8a92:{NFSU2_TR(0x4a8a92);
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
B4a8a95:{NFSU2_TR(0x4a8a95);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a8aa0:L4a8aa0:{c.instructions+=3;NFSU2_TR(0x4a8aa0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a8aa1:{NFSU2_TR(0x4a8aa1);
__builtin_memmove((R+24),(R+4),4);
}
B4a8aa3:{NFSU2_TR(0x4a8aa3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a8aa8ull));
{goto L4a8ac0;}
}
B4a8aa8:L4a8aa8:{c.instructions+=2;NFSU2_TR(0x4a8aa8);
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
B4a8aad:{NFSU2_TR(0x4a8aad);
if(r1(R+518)){{goto L4a8ab8;}}
}
B4a8aaf:L4a8aaf:{c.instructions+=2;NFSU2_TR(0x4a8aaf);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a8ab0:{NFSU2_TR(0x4a8ab0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a8ab5ull));
TAIL_STATIC(0x575630u,575);
}
B4a8ab5:L4a8ab5:{c.instructions+=1;NFSU2_TR(0x4a8ab5);
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
B4a8ab8:L4a8ab8:{c.instructions+=3;NFSU2_TR(0x4a8ab8);
__builtin_memmove((R+0),(R+24),4);
}
B4a8aba:{NFSU2_TR(0x4a8aba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a8abb:{NFSU2_TR(0x4a8abb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a8ac0:L4a8ac0:{c.instructions+=2;NFSU2_TR(0x4a8ac0);
u8 U[4];
w4(U+0,u32(0x79081cull));
s4(u32(r4(R+4)),r4(U+0));
}
B4a8ac6:{NFSU2_TR(0x4a8ac6);
TAIL_STATIC(0x510d40u,510);
}
B4a8ad0:L4a8ad0:{c.instructions+=8;NFSU2_TR(0x4a8ad0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a8ad2:{NFSU2_TR(0x4a8ad2);
u8 U[4];
w4(U+0,u32(0x772ac4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a8ad7:{NFSU2_TR(0x4a8ad7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a8add:{NFSU2_TR(0x4a8add);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a8ade:{NFSU2_TR(0x4a8ade);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a8ae5:{NFSU2_TR(0x4a8ae5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a8ae6:{NFSU2_TR(0x4a8ae6);
u8 U[4];
w4(U+0,u32(0x4cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a8ae8:{NFSU2_TR(0x4a8ae8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a8aedull));
TAIL_STATIC(0x575620u,575);
}
B4a8aed:L4a8aed:{c.instructions+=5;NFSU2_TR(0x4a8aed);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4a8af0:{NFSU2_TR(0x4a8af0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B4a8af4:{NFSU2_TR(0x4a8af4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4a8af6:{NFSU2_TR(0x4a8af6);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a8afe:{NFSU2_TR(0x4a8afe);
if(r1(R+518)){{goto L4a8b1b;}}
}
B4a8b00:L4a8b00:{c.instructions+=4;NFSU2_TR(0x4a8b00);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a8b04:{NFSU2_TR(0x4a8b04);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a8b05:{NFSU2_TR(0x4a8b05);
__builtin_memmove((R+4),(R+0),4);
}
B4a8b07:{NFSU2_TR(0x4a8b07);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a8b0cull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4a8a30u);}goto L4a8a30;}
}
B4a8b0c:L4a8b0c:{c.instructions+=4;NFSU2_TR(0x4a8b0c);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a8b10:{NFSU2_TR(0x4a8b10);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a8b17:{NFSU2_TR(0x4a8b17);
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
B4a8b1a:{NFSU2_TR(0x4a8b1a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a8b1b:L4a8b1b:{c.instructions+=5;NFSU2_TR(0x4a8b1b);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a8b1f:{NFSU2_TR(0x4a8b1f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4a8b21:{NFSU2_TR(0x4a8b21);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a8b28:{NFSU2_TR(0x4a8b28);
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
B4a8b2b:{NFSU2_TR(0x4a8b2b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a8b30:L4a8b30:{c.instructions+=13;NFSU2_TR(0x4a8b30);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a8b32:{NFSU2_TR(0x4a8b32);
u8 U[4];
w4(U+0,u32(0x772ae3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a8b37:{NFSU2_TR(0x4a8b37);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a8b3d:{NFSU2_TR(0x4a8b3d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a8b3e:{NFSU2_TR(0x4a8b3e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a8b45:{NFSU2_TR(0x4a8b45);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a8b46:{NFSU2_TR(0x4a8b46);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a8b4a:{NFSU2_TR(0x4a8b4a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a8b4b:{NFSU2_TR(0x4a8b4b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a8b4c:{NFSU2_TR(0x4a8b4c);
__builtin_memmove((R+24),(R+4),4);
}
B4a8b4e:{NFSU2_TR(0x4a8b4e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a8b4f:{NFSU2_TR(0x4a8b4f);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a8b53:{NFSU2_TR(0x4a8b53);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a8b58ull));
TAIL_STATIC(0x551de0u,551);
}
B4a8b58:L4a8b58:{c.instructions+=5;NFSU2_TR(0x4a8b58);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((R+28),(U+0),4);
}
B4a8b5b:{NFSU2_TR(0x4a8b5b);
__builtin_memmove((R+4),(R+28),4);
}
B4a8b5d:{NFSU2_TR(0x4a8b5d);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a8b65:{NFSU2_TR(0x4a8b65);
u8 U[4];
w4(U+0,u32(0x79084cull));
s4(u32(r4(R+24)),r4(U+0));
}
B4a8b6b:{NFSU2_TR(0x4a8b6b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a8b70ull));
TAIL_STATIC(0x5763e0u,576);
}
B4a8b70:L4a8b70:{c.instructions+=6;NFSU2_TR(0x4a8b70);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a8b73:{NFSU2_TR(0x4a8b73);
u8 U[4];
__builtin_memmove((U+0),(MODV+272),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a8b78:{NFSU2_TR(0x4a8b78);
u8 U[4];
w4(U+0,u32(0xf2754103ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a8b7d:{NFSU2_TR(0x4a8b7d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a8b7e:{NFSU2_TR(0x4a8b7e);
u8 U[5];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4a8b83:{NFSU2_TR(0x4a8b83);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a8b88ull));
TAIL_STATIC(0x5379c0u,537);
}
B4a8b88:L4a8b88:{c.instructions+=3;NFSU2_TR(0x4a8b88);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4a8b8b:{NFSU2_TR(0x4a8b8b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a8b8c:{NFSU2_TR(0x4a8b8c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a8b91ull));
TAIL_STATIC(0x50c9b0u,50c);
}
B4a8b91:L4a8b91:{c.instructions+=2;NFSU2_TR(0x4a8b91);
u8 U[4];
w4(U+0,u32(0x790848ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a8b96:{NFSU2_TR(0x4a8b96);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a8b9bull));
TAIL_STATIC(0x50d350u,50d);
}
B4a8b9b:L4a8b9b:{c.instructions+=3;NFSU2_TR(0x4a8b9b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4a8b9e:{NFSU2_TR(0x4a8b9e);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4a8ba0:{NFSU2_TR(0x4a8ba0);
if(r1(R+518)){{goto L4a8bb2;}}
}
B4a8ba2:L4a8ba2:{c.instructions+=5;NFSU2_TR(0x4a8ba2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a8ba5:{NFSU2_TR(0x4a8ba5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a8ba6:{NFSU2_TR(0x4a8ba6);
u8 U[4];
w4(U+0,u32(0x790848ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a8bab:{NFSU2_TR(0x4a8bab);
__builtin_memmove((R+4),(R+28),4);
}
B4a8bad:{NFSU2_TR(0x4a8bad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a8bb2ull));
TAIL_STATIC(0x57daa0u,57d);
}
B4a8bb2:L4a8bb2:{c.instructions+=7;NFSU2_TR(0x4a8bb2);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a8bb6:{NFSU2_TR(0x4a8bb6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4a8bb7:{NFSU2_TR(0x4a8bb7);
__builtin_memmove((R+0),(R+24),4);
}
B4a8bb9:{NFSU2_TR(0x4a8bb9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a8bba:{NFSU2_TR(0x4a8bba);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a8bc1:{NFSU2_TR(0x4a8bc1);
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
B4a8bc4:{NFSU2_TR(0x4a8bc4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a8bd0:L4a8bd0:{c.instructions+=3;NFSU2_TR(0x4a8bd0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a8bd1:{NFSU2_TR(0x4a8bd1);
__builtin_memmove((R+24),(R+4),4);
}
B4a8bd3:{NFSU2_TR(0x4a8bd3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a8bd8ull));
{goto L4a8bf0;}
}
B4a8bd8:L4a8bd8:{c.instructions+=2;NFSU2_TR(0x4a8bd8);
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
B4a8bdd:{NFSU2_TR(0x4a8bdd);
if(r1(R+518)){{goto L4a8be8;}}
}
B4a8bdf:L4a8bdf:{c.instructions+=2;NFSU2_TR(0x4a8bdf);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a8be0:{NFSU2_TR(0x4a8be0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a8be5ull));
TAIL_STATIC(0x575630u,575);
}
B4a8be5:L4a8be5:{c.instructions+=1;NFSU2_TR(0x4a8be5);
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
B4a8be8:L4a8be8:{c.instructions+=3;NFSU2_TR(0x4a8be8);
__builtin_memmove((R+0),(R+24),4);
}
B4a8bea:{NFSU2_TR(0x4a8bea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a8beb:{NFSU2_TR(0x4a8beb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a8bf0:L4a8bf0:{c.instructions+=13;NFSU2_TR(0x4a8bf0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a8bf2:{NFSU2_TR(0x4a8bf2);
u8 U[4];
w4(U+0,u32(0x776418ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a8bf7:{NFSU2_TR(0x4a8bf7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a8bfd:{NFSU2_TR(0x4a8bfd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a8bfe:{NFSU2_TR(0x4a8bfe);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a8c05:{NFSU2_TR(0x4a8c05);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a8c06:{NFSU2_TR(0x4a8c06);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a8c07:{NFSU2_TR(0x4a8c07);
__builtin_memmove((R+24),(R+4),4);
}
B4a8c09:{NFSU2_TR(0x4a8c09);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a8c0d:{NFSU2_TR(0x4a8c0d);
u8 U[4];
w4(U+0,u32(0x79084cull));
s4(u32(r4(R+24)),r4(U+0));
}
B4a8c13:{NFSU2_TR(0x4a8c13);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4a8c16:{NFSU2_TR(0x4a8c16);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a8c1e:{NFSU2_TR(0x4a8c1e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a8c23ull));
TAIL_STATIC(0x579dc0u,579);
}
B4a8c23:L4a8c23:{c.instructions+=3;NFSU2_TR(0x4a8c23);
__builtin_memmove((R+4),(R+24),4);
}
B4a8c25:{NFSU2_TR(0x4a8c25);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a8c2d:{NFSU2_TR(0x4a8c2d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a8c32ull));
TAIL_STATIC(0x510d40u,510);
}
B4a8c32:L4a8c32:{c.instructions+=5;NFSU2_TR(0x4a8c32);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a8c36:{NFSU2_TR(0x4a8c36);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a8c37:{NFSU2_TR(0x4a8c37);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a8c3e:{NFSU2_TR(0x4a8c3e);
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
B4a8c41:{NFSU2_TR(0x4a8c41);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a8c50:L4a8c50:{c.instructions+=2;NFSU2_TR(0x4a8c50);
__builtin_memmove((R+0),gp(0x836494),1);
}
B4a8c55:{NFSU2_TR(0x4a8c55);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a8c60:L4a8c60:{c.instructions+=8;NFSU2_TR(0x4a8c60);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a8c62:{NFSU2_TR(0x4a8c62);
u8 U[4];
w4(U+0,u32(0x772b04ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a8c67:{NFSU2_TR(0x4a8c67);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a8c6d:{NFSU2_TR(0x4a8c6d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a8c6e:{NFSU2_TR(0x4a8c6e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a8c75:{NFSU2_TR(0x4a8c75);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a8c76:{NFSU2_TR(0x4a8c76);
u8 U[4];
w4(U+0,u32(0x60ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a8c78:{NFSU2_TR(0x4a8c78);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a8c7dull));
TAIL_STATIC(0x575620u,575);
}
B4a8c7d:L4a8c7d:{c.instructions+=5;NFSU2_TR(0x4a8c7d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4a8c80:{NFSU2_TR(0x4a8c80);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B4a8c84:{NFSU2_TR(0x4a8c84);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4a8c86:{NFSU2_TR(0x4a8c86);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a8c8e:{NFSU2_TR(0x4a8c8e);
if(r1(R+518)){{goto L4a8cab;}}
}
B4a8c90:L4a8c90:{c.instructions+=4;NFSU2_TR(0x4a8c90);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a8c94:{NFSU2_TR(0x4a8c94);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a8c95:{NFSU2_TR(0x4a8c95);
__builtin_memmove((R+4),(R+0),4);
}
B4a8c97:{NFSU2_TR(0x4a8c97);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a8c9cull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4a8b30u);}goto L4a8b30;}
}
B4a8c9c:L4a8c9c:{c.instructions+=4;NFSU2_TR(0x4a8c9c);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a8ca0:{NFSU2_TR(0x4a8ca0);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a8ca7:{NFSU2_TR(0x4a8ca7);
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
B4a8caa:{NFSU2_TR(0x4a8caa);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a8cab:L4a8cab:{c.instructions+=5;NFSU2_TR(0x4a8cab);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a8caf:{NFSU2_TR(0x4a8caf);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4a8cb1:{NFSU2_TR(0x4a8cb1);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a8cb8:{NFSU2_TR(0x4a8cb8);
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
B4a8cbb:{NFSU2_TR(0x4a8cbb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a8cc0:L4a8cc0:{c.instructions+=13;NFSU2_TR(0x4a8cc0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a8cc2:{NFSU2_TR(0x4a8cc2);
u8 U[4];
w4(U+0,u32(0x772b18ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a8cc7:{NFSU2_TR(0x4a8cc7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a8ccd:{NFSU2_TR(0x4a8ccd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a8cce:{NFSU2_TR(0x4a8cce);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a8cd5:{NFSU2_TR(0x4a8cd5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x44ull))));
}
B4a8cd8:{NFSU2_TR(0x4a8cd8);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a8cdc:{NFSU2_TR(0x4a8cdc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a8cdd:{NFSU2_TR(0x4a8cdd);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a8cde:{NFSU2_TR(0x4a8cde);
__builtin_memmove((R+24),(R+4),4);
}
B4a8ce0:{NFSU2_TR(0x4a8ce0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a8ce1:{NFSU2_TR(0x4a8ce1);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a8ce5:{NFSU2_TR(0x4a8ce5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a8ceaull));
TAIL_STATIC(0x551de0u,551);
}
B4a8cea:L4a8cea:{c.instructions+=5;NFSU2_TR(0x4a8cea);
u8 U[4];
__builtin_memmove((U+0),(MODV+268),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a8cef:{NFSU2_TR(0x4a8cef);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4a8cf1:{NFSU2_TR(0x4a8cf1);
w4(R+4,u32(0x10ull));
}
B4a8cf6:{NFSU2_TR(0x4a8cf6);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B4a8cfa:{NFSU2_TR(0x4a8cfa);
u8 U[4];
w4(U+0,u32(0x786e70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a8cff:L4a8cff:{c.instructions+=1;NFSU2_TR(0x4a8cff);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L4a8d01;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4a8cffu);}goto L4a8cff;}
}
B4a8d01:L4a8d01:{c.instructions+=6;NFSU2_TR(0x4a8d01);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4a8d05:{NFSU2_TR(0x4a8d05);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a8d07:{NFSU2_TR(0x4a8d07);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a8d08:{NFSU2_TR(0x4a8d08);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a8d10:{NFSU2_TR(0x4a8d10);
u8 U[4];
w4(U+0,u32(0x790868ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4a8d16:{NFSU2_TR(0x4a8d16);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a8d1bull));
TAIL_STATIC(0x50c960u,50c);
}
B4a8d1b:L4a8d1b:{c.instructions+=7;NFSU2_TR(0x4a8d1b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a8d1e:{NFSU2_TR(0x4a8d1e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4a8d21:{NFSU2_TR(0x4a8d21);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4a8d25:{NFSU2_TR(0x4a8d25);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a8d26:{NFSU2_TR(0x4a8d26);
u8 U[4];
w4(U+0,u32(0x8ba694a3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a8d2b:{NFSU2_TR(0x4a8d2b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a8d2c:{NFSU2_TR(0x4a8d2c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a8d31ull));
TAIL_STATIC(0x5379c0u,537);
}
B4a8d31:L4a8d31:{c.instructions+=3;NFSU2_TR(0x4a8d31);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4a8d34:{NFSU2_TR(0x4a8d34);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a8d35:{NFSU2_TR(0x4a8d35);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a8d3aull));
TAIL_STATIC(0x50c9b0u,50c);
}
B4a8d3a:L4a8d3a:{c.instructions+=8;NFSU2_TR(0x4a8d3a);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a8d3e:{NFSU2_TR(0x4a8d3e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4a8d41:{NFSU2_TR(0x4a8d41);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4a8d42:{NFSU2_TR(0x4a8d42);
__builtin_memmove((R+0),(R+24),4);
}
B4a8d44:{NFSU2_TR(0x4a8d44);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a8d45:{NFSU2_TR(0x4a8d45);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a8d4c:{NFSU2_TR(0x4a8d4c);
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
B4a8d4f:{NFSU2_TR(0x4a8d4f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a8d60:L4a8d60:{c.instructions+=3;NFSU2_TR(0x4a8d60);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a8d61:{NFSU2_TR(0x4a8d61);
__builtin_memmove((R+24),(R+4),4);
}
B4a8d63:{NFSU2_TR(0x4a8d63);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a8d68ull));
{goto L4a8d80;}
}
B4a8d68:L4a8d68:{c.instructions+=2;NFSU2_TR(0x4a8d68);
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
B4a8d6d:{NFSU2_TR(0x4a8d6d);
if(r1(R+518)){{goto L4a8d78;}}
}
B4a8d6f:L4a8d6f:{c.instructions+=2;NFSU2_TR(0x4a8d6f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a8d70:{NFSU2_TR(0x4a8d70);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a8d75ull));
TAIL_STATIC(0x575630u,575);
}
B4a8d75:L4a8d75:{c.instructions+=1;NFSU2_TR(0x4a8d75);
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
B4a8d78:L4a8d78:{c.instructions+=3;NFSU2_TR(0x4a8d78);
__builtin_memmove((R+0),(R+24),4);
}
B4a8d7a:{NFSU2_TR(0x4a8d7a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a8d7b:{NFSU2_TR(0x4a8d7b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a8d80:L4a8d80:{c.instructions+=2;NFSU2_TR(0x4a8d80);
u8 U[4];
w4(U+0,u32(0x790868ull));
s4(u32(r4(R+4)),r4(U+0));
}
B4a8d86:{NFSU2_TR(0x4a8d86);
TAIL_STATIC(0x510d40u,510);
}
B4a8d90:L4a8d90:{c.instructions+=8;NFSU2_TR(0x4a8d90);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a8d92:{NFSU2_TR(0x4a8d92);
u8 U[4];
w4(U+0,u32(0x772b44ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a8d97:{NFSU2_TR(0x4a8d97);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a8d9d:{NFSU2_TR(0x4a8d9d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a8d9e:{NFSU2_TR(0x4a8d9e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a8da5:{NFSU2_TR(0x4a8da5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a8da6:{NFSU2_TR(0x4a8da6);
u8 U[4];
w4(U+0,u32(0x4cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a8da8:{NFSU2_TR(0x4a8da8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a8dadull));
TAIL_STATIC(0x575620u,575);
}
B4a8dad:L4a8dad:{c.instructions+=5;NFSU2_TR(0x4a8dad);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4a8db0:{NFSU2_TR(0x4a8db0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B4a8db4:{NFSU2_TR(0x4a8db4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4a8db6:{NFSU2_TR(0x4a8db6);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a8dbe:{NFSU2_TR(0x4a8dbe);
if(r1(R+518)){{goto L4a8ddb;}}
}
B4a8dc0:L4a8dc0:{c.instructions+=4;NFSU2_TR(0x4a8dc0);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a8dc4:{NFSU2_TR(0x4a8dc4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a8dc5:{NFSU2_TR(0x4a8dc5);
__builtin_memmove((R+4),(R+0),4);
}
B4a8dc7:{NFSU2_TR(0x4a8dc7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a8dccull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4a8cc0u);}goto L4a8cc0;}
}
B4a8dcc:L4a8dcc:{c.instructions+=4;NFSU2_TR(0x4a8dcc);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a8dd0:{NFSU2_TR(0x4a8dd0);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a8dd7:{NFSU2_TR(0x4a8dd7);
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
B4a8dda:{NFSU2_TR(0x4a8dda);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a8ddb:L4a8ddb:{c.instructions+=5;NFSU2_TR(0x4a8ddb);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a8ddf:{NFSU2_TR(0x4a8ddf);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4a8de1:{NFSU2_TR(0x4a8de1);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a8de8:{NFSU2_TR(0x4a8de8);
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
B4a8deb:{NFSU2_TR(0x4a8deb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a8df0:L4a8df0:{c.instructions+=12;NFSU2_TR(0x4a8df0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a8df2:{NFSU2_TR(0x4a8df2);
u8 U[4];
w4(U+0,u32(0x776418ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a8df7:{NFSU2_TR(0x4a8df7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a8dfd:{NFSU2_TR(0x4a8dfd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a8dfe:{NFSU2_TR(0x4a8dfe);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a8e05:{NFSU2_TR(0x4a8e05);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a8e06:{NFSU2_TR(0x4a8e06);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a8e0a:{NFSU2_TR(0x4a8e0a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a8e0b:{NFSU2_TR(0x4a8e0b);
__builtin_memmove((R+24),(R+4),4);
}
B4a8e0d:{NFSU2_TR(0x4a8e0d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a8e0e:{NFSU2_TR(0x4a8e0e);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a8e12:{NFSU2_TR(0x4a8e12);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a8e17ull));
TAIL_STATIC(0x551de0u,551);
}
B4a8e17:L4a8e17:{c.instructions+=11;NFSU2_TR(0x4a8e17);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4a8e19:{NFSU2_TR(0x4a8e19);
u8 U[4];
w4(U+0,u32(0x790894ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4a8e1f:{NFSU2_TR(0x4a8e1f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a8e22:{NFSU2_TR(0x4a8e22);
__builtin_memmove((R+4),gp(0x8651ac),4);
}
B4a8e28:{NFSU2_TR(0x4a8e28);
u8 U[4];
w4(U+0,u32(0xa23978bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a8e2d:{NFSU2_TR(0x4a8e2d);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a8e31:{NFSU2_TR(0x4a8e31);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a8e34:{NFSU2_TR(0x4a8e34);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a8e37:{NFSU2_TR(0x4a8e37);
u8 U[4];
w4(U+0,u32(0x4b98c4b9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a8e3c:{NFSU2_TR(0x4a8e3c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a8e3d:{NFSU2_TR(0x4a8e3d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a8e42ull));
TAIL_STATIC(0x537a10u,537);
}
B4a8e42:L4a8e42:{c.instructions+=3;NFSU2_TR(0x4a8e42);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4a8e45:{NFSU2_TR(0x4a8e45);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a8e46:{NFSU2_TR(0x4a8e46);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a8e4bull));
TAIL_STATIC(0x50c900u,50c);
}
B4a8e4b:L4a8e4b:{c.instructions+=6;NFSU2_TR(0x4a8e4b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a8e4e:{NFSU2_TR(0x4a8e4e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4a8e51:{NFSU2_TR(0x4a8e51);
u8 U[4];
w4(U+0,u32(0x4e98a8a8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a8e56:{NFSU2_TR(0x4a8e56);
u8 U[4];
w4(U+0,u32(0x3f8558b1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a8e5b:{NFSU2_TR(0x4a8e5b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a8e5c:{NFSU2_TR(0x4a8e5c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a8e61ull));
TAIL_STATIC(0x537a10u,537);
}
B4a8e61:L4a8e61:{c.instructions+=3;NFSU2_TR(0x4a8e61);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4a8e64:{NFSU2_TR(0x4a8e64);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a8e65:{NFSU2_TR(0x4a8e65);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a8e6aull));
TAIL_STATIC(0x50c900u,50c);
}
B4a8e6a:L4a8e6a:{c.instructions+=7;NFSU2_TR(0x4a8e6a);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a8e6e:{NFSU2_TR(0x4a8e6e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4a8e71:{NFSU2_TR(0x4a8e71);
__builtin_memmove((R+0),(R+24),4);
}
B4a8e73:{NFSU2_TR(0x4a8e73);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a8e74:{NFSU2_TR(0x4a8e74);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a8e7b:{NFSU2_TR(0x4a8e7b);
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
B4a8e7e:{NFSU2_TR(0x4a8e7e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a8e90:L4a8e90:{c.instructions+=3;NFSU2_TR(0x4a8e90);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a8e91:{NFSU2_TR(0x4a8e91);
__builtin_memmove((R+24),(R+4),4);
}
B4a8e93:{NFSU2_TR(0x4a8e93);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a8e98ull));
{goto L4a8eb0;}
}
B4a8e98:L4a8e98:{c.instructions+=2;NFSU2_TR(0x4a8e98);
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
B4a8e9d:{NFSU2_TR(0x4a8e9d);
if(r1(R+518)){{goto L4a8ea8;}}
}
B4a8e9f:L4a8e9f:{c.instructions+=2;NFSU2_TR(0x4a8e9f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a8ea0:{NFSU2_TR(0x4a8ea0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a8ea5ull));
TAIL_STATIC(0x575630u,575);
}
B4a8ea5:L4a8ea5:{c.instructions+=1;NFSU2_TR(0x4a8ea5);
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
B4a8ea8:L4a8ea8:{c.instructions+=3;NFSU2_TR(0x4a8ea8);
__builtin_memmove((R+0),(R+24),4);
}
B4a8eaa:{NFSU2_TR(0x4a8eaa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a8eab:{NFSU2_TR(0x4a8eab);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a8eb0:L4a8eb0:{c.instructions+=2;NFSU2_TR(0x4a8eb0);
u8 U[4];
w4(U+0,u32(0x790894ull));
s4(u32(r4(R+4)),r4(U+0));
}
B4a8eb6:{NFSU2_TR(0x4a8eb6);
TAIL_STATIC(0x510d40u,510);
}
B4a8ec0:L4a8ec0:{c.instructions+=8;NFSU2_TR(0x4a8ec0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a8ec2:{NFSU2_TR(0x4a8ec2);
u8 U[4];
w4(U+0,u32(0x772b64ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a8ec7:{NFSU2_TR(0x4a8ec7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a8ecd:{NFSU2_TR(0x4a8ecd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a8ece:{NFSU2_TR(0x4a8ece);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a8ed5:{NFSU2_TR(0x4a8ed5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a8ed6:{NFSU2_TR(0x4a8ed6);
u8 U[4];
w4(U+0,u32(0x50ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a8ed8:{NFSU2_TR(0x4a8ed8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a8eddull));
TAIL_STATIC(0x575620u,575);
}
B4a8edd:L4a8edd:{c.instructions+=5;NFSU2_TR(0x4a8edd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4a8ee0:{NFSU2_TR(0x4a8ee0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B4a8ee4:{NFSU2_TR(0x4a8ee4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4a8ee6:{NFSU2_TR(0x4a8ee6);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a8eee:{NFSU2_TR(0x4a8eee);
if(r1(R+518)){{goto L4a8f0b;}}
}
B4a8ef0:L4a8ef0:{c.instructions+=4;NFSU2_TR(0x4a8ef0);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a8ef4:{NFSU2_TR(0x4a8ef4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a8ef5:{NFSU2_TR(0x4a8ef5);
__builtin_memmove((R+4),(R+0),4);
}
B4a8ef7:{NFSU2_TR(0x4a8ef7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a8efcull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4a8df0u);}goto L4a8df0;}
}
B4a8efc:L4a8efc:{c.instructions+=4;NFSU2_TR(0x4a8efc);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a8f00:{NFSU2_TR(0x4a8f00);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a8f07:{NFSU2_TR(0x4a8f07);
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
B4a8f0a:{NFSU2_TR(0x4a8f0a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a8f0b:L4a8f0b:{c.instructions+=5;NFSU2_TR(0x4a8f0b);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a8f0f:{NFSU2_TR(0x4a8f0f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4a8f11:{NFSU2_TR(0x4a8f11);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a8f18:{NFSU2_TR(0x4a8f18);
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
B4a8f1b:{NFSU2_TR(0x4a8f1b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a8f20:L4a8f20:{c.instructions+=3;NFSU2_TR(0x4a8f20);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a8f21:{NFSU2_TR(0x4a8f21);
__builtin_memmove((R+24),(R+4),4);
}
B4a8f23:{NFSU2_TR(0x4a8f23);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a8f28ull));
{goto L4a8f40;}
}
B4a8f28:L4a8f28:{c.instructions+=2;NFSU2_TR(0x4a8f28);
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
B4a8f2d:{NFSU2_TR(0x4a8f2d);
if(r1(R+518)){{goto L4a8f38;}}
}
B4a8f2f:L4a8f2f:{c.instructions+=2;NFSU2_TR(0x4a8f2f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a8f30:{NFSU2_TR(0x4a8f30);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a8f35ull));
TAIL_STATIC(0x575630u,575);
}
B4a8f35:L4a8f35:{c.instructions+=1;NFSU2_TR(0x4a8f35);
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
B4a8f38:L4a8f38:{c.instructions+=3;NFSU2_TR(0x4a8f38);
__builtin_memmove((R+0),(R+24),4);
}
B4a8f3a:{NFSU2_TR(0x4a8f3a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a8f3b:{NFSU2_TR(0x4a8f3b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a8f40:L4a8f40:{c.instructions+=2;NFSU2_TR(0x4a8f40);
u8 U[4];
w4(U+0,u32(0x7908b4ull));
s4(u32(r4(R+4)),r4(U+0));
}
B4a8f46:{NFSU2_TR(0x4a8f46);
TAIL_STATIC(0x510d40u,510);
}
B4a8f50:L4a8f50:{c.instructions+=9;NFSU2_TR(0x4a8f50);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a8f52:{NFSU2_TR(0x4a8f52);
u8 U[4];
w4(U+0,u32(0x772b84ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a8f57:{NFSU2_TR(0x4a8f57);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a8f5d:{NFSU2_TR(0x4a8f5d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a8f5e:{NFSU2_TR(0x4a8f5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a8f65:{NFSU2_TR(0x4a8f65);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a8f66:{NFSU2_TR(0x4a8f66);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a8f67:{NFSU2_TR(0x4a8f67);
u8 U[4];
w4(U+0,u32(0x50ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a8f69:{NFSU2_TR(0x4a8f69);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a8f6eull));
TAIL_STATIC(0x575620u,575);
}
B4a8f6e:L4a8f6e:{c.instructions+=6;NFSU2_TR(0x4a8f6e);
__builtin_memmove((R+24),(R+0),4);
}
B4a8f70:{NFSU2_TR(0x4a8f70);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4a8f73:{NFSU2_TR(0x4a8f73);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a8f77:{NFSU2_TR(0x4a8f77);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4a8f79:{NFSU2_TR(0x4a8f79);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a8f81:{NFSU2_TR(0x4a8f81);
if(r1(R+518)){{goto L4a8fb7;}}
}
B4a8f83:L4a8f83:{c.instructions+=4;NFSU2_TR(0x4a8f83);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a8f87:{NFSU2_TR(0x4a8f87);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a8f88:{NFSU2_TR(0x4a8f88);
__builtin_memmove((R+4),(R+24),4);
}
B4a8f8a:{NFSU2_TR(0x4a8f8a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a8f8full));
TAIL_STATIC(0x551de0u,551);
}
B4a8f8f:L4a8f8f:{c.instructions+=10;NFSU2_TR(0x4a8f8f);
u8 U[4];
w4(U+0,u32(0x7908b4ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4a8f95:{NFSU2_TR(0x4a8f95);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4a8f9c:{NFSU2_TR(0x4a8f9c);
__builtin_memmove((R+4),gp(0x8651ac),4);
}
B4a8fa2:{NFSU2_TR(0x4a8fa2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a8fa5:{NFSU2_TR(0x4a8fa5);
__builtin_memmove((R+0),(R+24),4);
}
B4a8fa7:{NFSU2_TR(0x4a8fa7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a8fa8:{NFSU2_TR(0x4a8fa8);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a8fac:{NFSU2_TR(0x4a8fac);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a8fb3:{NFSU2_TR(0x4a8fb3);
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
B4a8fb6:{NFSU2_TR(0x4a8fb6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a8fb7:L4a8fb7:{c.instructions+=6;NFSU2_TR(0x4a8fb7);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4a8fbb:{NFSU2_TR(0x4a8fbb);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4a8fbd:{NFSU2_TR(0x4a8fbd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4a8fbe:{NFSU2_TR(0x4a8fbe);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a8fc5:{NFSU2_TR(0x4a8fc5);
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
B4a8fc8:{NFSU2_TR(0x4a8fc8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4a8fd0:L4a8fd0:{c.instructions+=12;NFSU2_TR(0x4a8fd0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a8fd2:{NFSU2_TR(0x4a8fd2);
u8 U[4];
w4(U+0,u32(0x776418ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a8fd7:{NFSU2_TR(0x4a8fd7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a8fdd:{NFSU2_TR(0x4a8fdd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a8fde:{NFSU2_TR(0x4a8fde);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a8fe5:{NFSU2_TR(0x4a8fe5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a8fe6:{NFSU2_TR(0x4a8fe6);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4a8fea:{NFSU2_TR(0x4a8fea);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a8feb:{NFSU2_TR(0x4a8feb);
__builtin_memmove((R+24),(R+4),4);
}
B4a8fed:{NFSU2_TR(0x4a8fed);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4a8fee:{NFSU2_TR(0x4a8fee);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4a8ff2:{NFSU2_TR(0x4a8ff2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4a8ff7ull));
TAIL_STATIC(0x551de0u,551);
}
B4a8ff7:L4a8ff7:{c.instructions+=3;NFSU2_TR(0x4a8ff7);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4a8ff9:{NFSU2_TR(0x4a8ff9);
u8 U[4];
w4(U+0,u32(0x7908d4ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4a8fff:{NFSU2_TR(0x4a8fff);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
TAIL_STATIC(0x4a9002u,4a9);
}
XIT:NFSU2_TR_EXIT(0x4a8,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
