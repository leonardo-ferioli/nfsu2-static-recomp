#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_457(u8* __restrict R,Cpu& c);
u32 body_458(u8* __restrict R,Cpu& c);
u32 body_4ab(u8* __restrict R,Cpu& c);
u32 body_4ae(u8* __restrict R,Cpu& c);
u32 body_4c7(u8* __restrict R,Cpu& c);
u32 body_4c9(u8* __restrict R,Cpu& c);
u32 body_4ff(u8* __restrict R,Cpu& c);
u32 body_500(u8* __restrict R,Cpu& c);
u32 body_501(u8* __restrict R,Cpu& c);
u32 body_502(u8* __restrict R,Cpu& c);
u32 body_50c(u8* __restrict R,Cpu& c);
u32 body_51c(u8* __restrict R,Cpu& c);
u32 body_51d(u8* __restrict R,Cpu& c);
u32 body_537(u8* __restrict R,Cpu& c);
u32 body_56c(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_5f0(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x4c8,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x4c8,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_4c8(u8* __restrict R,Cpu& c);
u32 page_4c8(Cpu& c){return body_4c8(c.regs.data(),c);}
__attribute__((noinline)) u32 body_4c8(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x4c8001:goto L4c8001;
case 0x4c8003:c.instructions+=1;goto B4c8003;
case 0x4c8005:goto L4c8005;
case 0x4c800a:c.instructions+=1;goto B4c800a;
case 0x4c800f:goto L4c800f;
case 0x4c8011:c.instructions+=1;goto B4c8011;
case 0x4c8017:goto L4c8017;
case 0x4c801a:c.instructions+=3;goto B4c801a;
case 0x4c801b:c.instructions+=2;goto B4c801b;
case 0x4c8020:c.instructions+=1;goto B4c8020;
case 0x4c8025:goto L4c8025;
case 0x4c8028:c.instructions+=5;goto B4c8028;
case 0x4c8029:c.instructions+=4;goto B4c8029;
case 0x4c802e:c.instructions+=3;goto B4c802e;
case 0x4c8033:c.instructions+=2;goto B4c8033;
case 0x4c8034:c.instructions+=1;goto B4c8034;
case 0x4c8039:goto L4c8039;
case 0x4c803c:c.instructions+=6;goto B4c803c;
case 0x4c803d:c.instructions+=5;goto B4c803d;
case 0x4c803e:c.instructions+=4;goto B4c803e;
case 0x4c803f:c.instructions+=3;goto B4c803f;
case 0x4c8041:c.instructions+=2;goto B4c8041;
case 0x4c8042:c.instructions+=1;goto B4c8042;
case 0x4c8045:goto L4c8045;
case 0x4c8048:c.instructions+=3;goto B4c8048;
case 0x4c8049:c.instructions+=2;goto B4c8049;
case 0x4c804b:c.instructions+=1;goto B4c804b;
case 0x4c8050:goto L4c8050;
case 0x4c8051:c.instructions+=1;goto B4c8051;
case 0x4c8056:goto L4c8056;
case 0x4c805b:c.instructions+=2;goto B4c805b;
case 0x4c805d:c.instructions+=1;goto B4c805d;
case 0x4c8062:goto L4c8062;
case 0x4c8068:c.instructions+=10;goto B4c8068;
case 0x4c806e:c.instructions+=9;goto B4c806e;
case 0x4c8070:c.instructions+=8;goto B4c8070;
case 0x4c8076:c.instructions+=7;goto B4c8076;
case 0x4c807c:c.instructions+=6;goto B4c807c;
case 0x4c807f:c.instructions+=5;goto B4c807f;
case 0x4c8081:c.instructions+=4;goto B4c8081;
case 0x4c8084:c.instructions+=3;goto B4c8084;
case 0x4c8085:c.instructions+=2;goto B4c8085;
case 0x4c8086:c.instructions+=1;goto B4c8086;
case 0x4c8088:goto L4c8088;
case 0x4c808b:c.instructions+=4;goto B4c808b;
case 0x4c8090:c.instructions+=3;goto B4c8090;
case 0x4c8095:c.instructions+=2;goto B4c8095;
case 0x4c8096:c.instructions+=1;goto B4c8096;
case 0x4c809b:goto L4c809b;
case 0x4c809e:c.instructions+=6;goto B4c809e;
case 0x4c809f:c.instructions+=5;goto B4c809f;
case 0x4c80a0:c.instructions+=4;goto B4c80a0;
case 0x4c80a1:c.instructions+=3;goto B4c80a1;
case 0x4c80a3:c.instructions+=2;goto B4c80a3;
case 0x4c80a4:c.instructions+=1;goto B4c80a4;
case 0x4c80a7:goto L4c80a7;
case 0x4c80aa:c.instructions+=5;goto B4c80aa;
case 0x4c80ab:c.instructions+=4;goto B4c80ab;
case 0x4c80b0:c.instructions+=3;goto B4c80b0;
case 0x4c80b5:c.instructions+=2;goto B4c80b5;
case 0x4c80b6:c.instructions+=1;goto B4c80b6;
case 0x4c80bb:goto L4c80bb;
case 0x4c80be:c.instructions+=6;goto B4c80be;
case 0x4c80bf:c.instructions+=5;goto B4c80bf;
case 0x4c80c0:c.instructions+=4;goto B4c80c0;
case 0x4c80c1:c.instructions+=3;goto B4c80c1;
case 0x4c80c3:c.instructions+=2;goto B4c80c3;
case 0x4c80c4:c.instructions+=1;goto B4c80c4;
case 0x4c80c7:goto L4c80c7;
case 0x4c80ca:c.instructions+=3;goto B4c80ca;
case 0x4c80cb:c.instructions+=2;goto B4c80cb;
case 0x4c80cd:c.instructions+=1;goto B4c80cd;
case 0x4c80d2:goto L4c80d2;
case 0x4c80d8:c.instructions+=4;goto B4c80d8;
case 0x4c80da:c.instructions+=3;goto B4c80da;
case 0x4c80dc:c.instructions+=2;goto B4c80dc;
case 0x4c80df:c.instructions+=1;goto B4c80df;
case 0x4c80e4:goto L4c80e4;
case 0x4c80e5:c.instructions+=2;goto B4c80e5;
case 0x4c80e7:c.instructions+=1;goto B4c80e7;
case 0x4c80ec:goto L4c80ec;
case 0x4c80f1:c.instructions+=2;goto B4c80f1;
case 0x4c80f3:c.instructions+=1;goto B4c80f3;
case 0x4c80f8:goto L4c80f8;
case 0x4c80fe:c.instructions+=10;goto B4c80fe;
case 0x4c8104:c.instructions+=9;goto B4c8104;
case 0x4c8106:c.instructions+=8;goto B4c8106;
case 0x4c810c:c.instructions+=7;goto B4c810c;
case 0x4c8112:c.instructions+=6;goto B4c8112;
case 0x4c8115:c.instructions+=5;goto B4c8115;
case 0x4c8117:c.instructions+=4;goto B4c8117;
case 0x4c811a:c.instructions+=3;goto B4c811a;
case 0x4c811b:c.instructions+=2;goto B4c811b;
case 0x4c811c:c.instructions+=1;goto B4c811c;
case 0x4c811e:goto L4c811e;
case 0x4c8121:c.instructions+=4;goto B4c8121;
case 0x4c8126:c.instructions+=3;goto B4c8126;
case 0x4c812b:c.instructions+=2;goto B4c812b;
case 0x4c812c:c.instructions+=1;goto B4c812c;
case 0x4c8131:goto L4c8131;
case 0x4c8134:c.instructions+=6;goto B4c8134;
case 0x4c8135:c.instructions+=5;goto B4c8135;
case 0x4c8136:c.instructions+=4;goto B4c8136;
case 0x4c8137:c.instructions+=3;goto B4c8137;
case 0x4c8139:c.instructions+=2;goto B4c8139;
case 0x4c813a:c.instructions+=1;goto B4c813a;
case 0x4c813d:goto L4c813d;
case 0x4c8140:c.instructions+=5;goto B4c8140;
case 0x4c8141:c.instructions+=4;goto B4c8141;
case 0x4c8146:c.instructions+=3;goto B4c8146;
case 0x4c814b:c.instructions+=2;goto B4c814b;
case 0x4c814c:c.instructions+=1;goto B4c814c;
case 0x4c8151:goto L4c8151;
case 0x4c8154:c.instructions+=6;goto B4c8154;
case 0x4c8155:c.instructions+=5;goto B4c8155;
case 0x4c8156:c.instructions+=4;goto B4c8156;
case 0x4c8157:c.instructions+=3;goto B4c8157;
case 0x4c8159:c.instructions+=2;goto B4c8159;
case 0x4c815a:c.instructions+=1;goto B4c815a;
case 0x4c815d:goto L4c815d;
case 0x4c8160:c.instructions+=3;goto B4c8160;
case 0x4c8165:c.instructions+=2;goto B4c8165;
case 0x4c8166:c.instructions+=1;goto B4c8166;
case 0x4c816b:goto L4c816b;
case 0x4c816e:c.instructions+=6;goto B4c816e;
case 0x4c816f:c.instructions+=5;goto B4c816f;
case 0x4c8170:c.instructions+=4;goto B4c8170;
case 0x4c8171:c.instructions+=3;goto B4c8171;
case 0x4c8173:c.instructions+=2;goto B4c8173;
case 0x4c8174:c.instructions+=1;goto B4c8174;
case 0x4c8177:goto L4c8177;
case 0x4c817e:c.instructions+=1;goto B4c817e;
case 0x4c8180:goto L4c8180;
case 0x4c8185:c.instructions+=1;goto B4c8185;
case 0x4c818a:goto L4c818a;
case 0x4c818c:c.instructions+=1;goto B4c818c;
case 0x4c818e:goto L4c818e;
case 0x4c8193:c.instructions+=1;goto B4c8193;
case 0x4c8198:goto L4c8198;
case 0x4c819a:c.instructions+=1;goto B4c819a;
case 0x4c819c:goto L4c819c;
case 0x4c81a1:c.instructions+=3;goto B4c81a1;
case 0x4c81a2:c.instructions+=2;goto B4c81a2;
case 0x4c81a7:c.instructions+=1;goto B4c81a7;
case 0x4c81ac:goto L4c81ac;
case 0x4c81ad:c.instructions+=2;goto B4c81ad;
case 0x4c81b2:c.instructions+=1;goto B4c81b2;
case 0x4c81b7:goto L4c81b7;
case 0x4c81ba:c.instructions+=4;goto B4c81ba;
case 0x4c81bb:c.instructions+=3;goto B4c81bb;
case 0x4c81bc:c.instructions+=2;goto B4c81bc;
case 0x4c81c1:c.instructions+=1;goto B4c81c1;
case 0x4c81c6:goto L4c81c6;
case 0x4c81c9:c.instructions+=3;goto B4c81c9;
case 0x4c81ca:c.instructions+=2;goto B4c81ca;
case 0x4c81cf:c.instructions+=1;goto B4c81cf;
case 0x4c81d4:goto L4c81d4;
case 0x4c81d7:c.instructions+=5;goto B4c81d7;
case 0x4c81da:c.instructions+=4;goto B4c81da;
case 0x4c81db:c.instructions+=3;goto B4c81db;
case 0x4c81e0:c.instructions+=2;goto B4c81e0;
case 0x4c81e1:c.instructions+=1;goto B4c81e1;
case 0x4c81e6:goto L4c81e6;
case 0x4c81e9:c.instructions+=6;goto B4c81e9;
case 0x4c81ea:c.instructions+=5;goto B4c81ea;
case 0x4c81eb:c.instructions+=4;goto B4c81eb;
case 0x4c81ec:c.instructions+=3;goto B4c81ec;
case 0x4c81ee:c.instructions+=2;goto B4c81ee;
case 0x4c81ef:c.instructions+=1;goto B4c81ef;
case 0x4c81f2:goto L4c81f2;
case 0x4c81f3:c.instructions+=2;goto B4c81f3;
case 0x4c81f8:c.instructions+=1;goto B4c81f8;
case 0x4c81fd:goto L4c81fd;
case 0x4c8200:c.instructions+=3;goto B4c8200;
case 0x4c8201:c.instructions+=2;goto B4c8201;
case 0x4c8206:c.instructions+=1;goto B4c8206;
case 0x4c820b:goto L4c820b;
case 0x4c820e:c.instructions+=5;goto B4c820e;
case 0x4c8211:c.instructions+=4;goto B4c8211;
case 0x4c8212:c.instructions+=3;goto B4c8212;
case 0x4c8217:c.instructions+=2;goto B4c8217;
case 0x4c8218:c.instructions+=1;goto B4c8218;
case 0x4c821d:goto L4c821d;
case 0x4c8220:c.instructions+=6;goto B4c8220;
case 0x4c8221:c.instructions+=5;goto B4c8221;
case 0x4c8222:c.instructions+=4;goto B4c8222;
case 0x4c8223:c.instructions+=3;goto B4c8223;
case 0x4c8225:c.instructions+=2;goto B4c8225;
case 0x4c8226:c.instructions+=1;goto B4c8226;
case 0x4c8229:goto L4c8229;
case 0x4c822e:c.instructions+=4;goto B4c822e;
case 0x4c8231:c.instructions+=3;goto B4c8231;
case 0x4c8233:c.instructions+=2;goto B4c8233;
case 0x4c8234:c.instructions+=1;goto B4c8234;
case 0x4c8239:goto L4c8239;
case 0x4c823e:c.instructions+=4;goto B4c823e;
case 0x4c8244:c.instructions+=3;goto B4c8244;
case 0x4c8246:c.instructions+=2;goto B4c8246;
case 0x4c8247:c.instructions+=1;goto B4c8247;
case 0x4c824c:goto L4c824c;
case 0x4c824f:c.instructions+=8;goto B4c824f;
case 0x4c8250:c.instructions+=7;goto B4c8250;
case 0x4c8253:c.instructions+=6;goto B4c8253;
case 0x4c8254:c.instructions+=5;goto B4c8254;
case 0x4c825a:c.instructions+=4;goto B4c825a;
case 0x4c825b:c.instructions+=3;goto B4c825b;
case 0x4c8260:c.instructions+=2;goto B4c8260;
case 0x4c8261:c.instructions+=1;goto B4c8261;
case 0x4c8266:goto L4c8266;
case 0x4c8269:c.instructions+=6;goto B4c8269;
case 0x4c826a:c.instructions+=5;goto B4c826a;
case 0x4c826b:c.instructions+=4;goto B4c826b;
case 0x4c826c:c.instructions+=3;goto B4c826c;
case 0x4c826e:c.instructions+=2;goto B4c826e;
case 0x4c826f:c.instructions+=1;goto B4c826f;
case 0x4c8272:goto L4c8272;
case 0x4c8277:c.instructions+=2;goto B4c8277;
case 0x4c827a:c.instructions+=1;goto B4c827a;
case 0x4c827c:goto L4c827c;
case 0x4c8281:c.instructions+=1;goto B4c8281;
case 0x4c8283:goto L4c8283;
case 0x4c8286:c.instructions+=3;goto B4c8286;
case 0x4c828b:c.instructions+=2;goto B4c828b;
case 0x4c828c:c.instructions+=1;goto B4c828c;
case 0x4c8291:goto L4c8291;
case 0x4c8294:c.instructions+=6;goto B4c8294;
case 0x4c8295:c.instructions+=5;goto B4c8295;
case 0x4c8296:c.instructions+=4;goto B4c8296;
case 0x4c8297:c.instructions+=3;goto B4c8297;
case 0x4c8299:c.instructions+=2;goto B4c8299;
case 0x4c829a:c.instructions+=1;goto B4c829a;
case 0x4c829d:goto L4c829d;
case 0x4c82a2:c.instructions+=4;goto B4c82a2;
case 0x4c82a5:c.instructions+=3;goto B4c82a5;
case 0x4c82a7:c.instructions+=2;goto B4c82a7;
case 0x4c82a8:c.instructions+=1;goto B4c82a8;
case 0x4c82ad:goto L4c82ad;
case 0x4c82b2:c.instructions+=4;goto B4c82b2;
case 0x4c82b8:c.instructions+=3;goto B4c82b8;
case 0x4c82ba:c.instructions+=2;goto B4c82ba;
case 0x4c82bb:c.instructions+=1;goto B4c82bb;
case 0x4c82c0:goto L4c82c0;
case 0x4c82c3:c.instructions+=7;goto B4c82c3;
case 0x4c82c9:c.instructions+=6;goto B4c82c9;
case 0x4c82ca:c.instructions+=5;goto B4c82ca;
case 0x4c82cd:c.instructions+=4;goto B4c82cd;
case 0x4c82ce:c.instructions+=3;goto B4c82ce;
case 0x4c82d3:c.instructions+=2;goto B4c82d3;
case 0x4c82d4:c.instructions+=1;goto B4c82d4;
case 0x4c82d9:goto L4c82d9;
case 0x4c82dc:c.instructions+=6;goto B4c82dc;
case 0x4c82dd:c.instructions+=5;goto B4c82dd;
case 0x4c82de:c.instructions+=4;goto B4c82de;
case 0x4c82df:c.instructions+=3;goto B4c82df;
case 0x4c82e1:c.instructions+=2;goto B4c82e1;
case 0x4c82e2:c.instructions+=1;goto B4c82e2;
case 0x4c82e5:goto L4c82e5;
case 0x4c82ea:c.instructions+=2;goto B4c82ea;
case 0x4c82ed:c.instructions+=1;goto B4c82ed;
case 0x4c82ef:goto L4c82ef;
case 0x4c82f4:c.instructions+=1;goto B4c82f4;
case 0x4c82f6:goto L4c82f6;
case 0x4c82f9:c.instructions+=3;goto B4c82f9;
case 0x4c82fe:c.instructions+=2;goto B4c82fe;
case 0x4c82ff:c.instructions+=1;goto B4c82ff;
case 0x4c8304:goto L4c8304;
case 0x4c8307:c.instructions+=6;goto B4c8307;
case 0x4c8308:c.instructions+=5;goto B4c8308;
case 0x4c8309:c.instructions+=4;goto B4c8309;
case 0x4c830a:c.instructions+=3;goto B4c830a;
case 0x4c830c:c.instructions+=2;goto B4c830c;
case 0x4c830d:c.instructions+=1;goto B4c830d;
case 0x4c8310:goto L4c8310;
case 0x4c8315:c.instructions+=4;goto B4c8315;
case 0x4c8318:c.instructions+=3;goto B4c8318;
case 0x4c831a:c.instructions+=2;goto B4c831a;
case 0x4c831b:c.instructions+=1;goto B4c831b;
case 0x4c8320:goto L4c8320;
case 0x4c8325:c.instructions+=4;goto B4c8325;
case 0x4c832b:c.instructions+=3;goto B4c832b;
case 0x4c832d:c.instructions+=2;goto B4c832d;
case 0x4c832e:c.instructions+=1;goto B4c832e;
case 0x4c8333:goto L4c8333;
case 0x4c8336:c.instructions+=7;goto B4c8336;
case 0x4c833c:c.instructions+=6;goto B4c833c;
case 0x4c833d:c.instructions+=5;goto B4c833d;
case 0x4c8340:c.instructions+=4;goto B4c8340;
case 0x4c8341:c.instructions+=3;goto B4c8341;
case 0x4c8346:c.instructions+=2;goto B4c8346;
case 0x4c8347:c.instructions+=1;goto B4c8347;
case 0x4c834c:goto L4c834c;
case 0x4c834f:c.instructions+=6;goto B4c834f;
case 0x4c8350:c.instructions+=5;goto B4c8350;
case 0x4c8351:c.instructions+=4;goto B4c8351;
case 0x4c8352:c.instructions+=3;goto B4c8352;
case 0x4c8354:c.instructions+=2;goto B4c8354;
case 0x4c8355:c.instructions+=1;goto B4c8355;
case 0x4c8358:goto L4c8358;
case 0x4c835b:c.instructions+=3;goto B4c835b;
case 0x4c8360:c.instructions+=2;goto B4c8360;
case 0x4c8361:c.instructions+=1;goto B4c8361;
case 0x4c8366:goto L4c8366;
case 0x4c8369:c.instructions+=6;goto B4c8369;
case 0x4c836a:c.instructions+=5;goto B4c836a;
case 0x4c836b:c.instructions+=4;goto B4c836b;
case 0x4c836c:c.instructions+=3;goto B4c836c;
case 0x4c836e:c.instructions+=2;goto B4c836e;
case 0x4c836f:c.instructions+=1;goto B4c836f;
case 0x4c8372:goto L4c8372;
case 0x4c8377:c.instructions+=1;goto B4c8377;
case 0x4c837c:goto L4c837c;
case 0x4c837e:c.instructions+=2;goto B4c837e;
case 0x4c8383:c.instructions+=1;goto B4c8383;
case 0x4c8385:goto L4c8385;
case 0x4c8388:c.instructions+=2;goto B4c8388;
case 0x4c8389:c.instructions+=1;goto B4c8389;
case 0x4c838e:goto L4c838e;
case 0x4c8391:c.instructions+=6;goto B4c8391;
case 0x4c8392:c.instructions+=5;goto B4c8392;
case 0x4c8393:c.instructions+=4;goto B4c8393;
case 0x4c8394:c.instructions+=3;goto B4c8394;
case 0x4c8396:c.instructions+=2;goto B4c8396;
case 0x4c8397:c.instructions+=1;goto B4c8397;
case 0x4c839a:goto L4c839a;
case 0x4c839d:c.instructions+=2;goto B4c839d;
case 0x4c839e:c.instructions+=1;goto B4c839e;
case 0x4c83a3:goto L4c83a3;
case 0x4c83a6:c.instructions+=6;goto B4c83a6;
case 0x4c83a7:c.instructions+=5;goto B4c83a7;
case 0x4c83a8:c.instructions+=4;goto B4c83a8;
case 0x4c83a9:c.instructions+=3;goto B4c83a9;
case 0x4c83ab:c.instructions+=2;goto B4c83ab;
case 0x4c83ac:c.instructions+=1;goto B4c83ac;
case 0x4c83af:goto L4c83af;
case 0x4c83b2:c.instructions+=3;goto B4c83b2;
case 0x4c83b7:c.instructions+=2;goto B4c83b7;
case 0x4c83b8:c.instructions+=1;goto B4c83b8;
case 0x4c83bd:goto L4c83bd;
case 0x4c83c0:c.instructions+=6;goto B4c83c0;
case 0x4c83c1:c.instructions+=5;goto B4c83c1;
case 0x4c83c2:c.instructions+=4;goto B4c83c2;
case 0x4c83c3:c.instructions+=3;goto B4c83c3;
case 0x4c83c5:c.instructions+=2;goto B4c83c5;
case 0x4c83c6:c.instructions+=1;goto B4c83c6;
case 0x4c83c9:goto L4c83c9;
case 0x4c83cd:goto L4c83cd;
case 0x4c83ce:c.instructions+=5;goto B4c83ce;
case 0x4c83cf:c.instructions+=4;goto B4c83cf;
case 0x4c83d0:c.instructions+=3;goto B4c83d0;
case 0x4c83d2:c.instructions+=2;goto B4c83d2;
case 0x4c83d3:c.instructions+=1;goto B4c83d3;
case 0x4c8410:goto L4c8410;
case 0x4c8411:c.instructions+=7;goto B4c8411;
case 0x4c8413:c.instructions+=6;goto B4c8413;
case 0x4c8416:c.instructions+=5;goto B4c8416;
case 0x4c8417:c.instructions+=4;goto B4c8417;
case 0x4c8418:c.instructions+=3;goto B4c8418;
case 0x4c841a:c.instructions+=2;goto B4c841a;
case 0x4c841f:c.instructions+=1;goto B4c841f;
case 0x4c8424:goto L4c8424;
case 0x4c8427:c.instructions+=1;goto B4c8427;
case 0x4c8429:goto L4c8429;
case 0x4c842c:c.instructions+=2;goto B4c842c;
case 0x4c842d:c.instructions+=1;goto B4c842d;
case 0x4c8432:goto L4c8432;
case 0x4c8435:c.instructions+=3;goto B4c8435;
case 0x4c843a:c.instructions+=2;goto B4c843a;
case 0x4c843b:c.instructions+=1;goto B4c843b;
case 0x4c8440:goto L4c8440;
case 0x4c8443:c.instructions+=1;goto B4c8443;
case 0x4c8445:goto L4c8445;
case 0x4c844a:c.instructions+=1;goto B4c844a;
case 0x4c844f:goto L4c844f;
case 0x4c8452:c.instructions+=1;goto B4c8452;
case 0x4c8454:goto L4c8454;
case 0x4c8457:c.instructions+=2;goto B4c8457;
case 0x4c8458:c.instructions+=1;goto B4c8458;
case 0x4c845d:goto L4c845d;
case 0x4c8460:c.instructions+=3;goto B4c8460;
case 0x4c8465:c.instructions+=2;goto B4c8465;
case 0x4c8466:c.instructions+=1;goto B4c8466;
case 0x4c846b:goto L4c846b;
case 0x4c846e:c.instructions+=1;goto B4c846e;
case 0x4c8470:goto L4c8470;
case 0x4c8473:c.instructions+=2;goto B4c8473;
case 0x4c8474:c.instructions+=1;goto B4c8474;
case 0x4c8479:goto L4c8479;
case 0x4c847c:goto L4c847c;
case 0x4c8481:c.instructions+=2;goto B4c8481;
case 0x4c8485:c.instructions+=1;goto B4c8485;
case 0x4c848a:goto L4c848a;
case 0x4c848c:c.instructions+=1;goto B4c848c;
case 0x4c848e:goto L4c848e;
case 0x4c8493:c.instructions+=1;goto B4c8493;
case 0x4c8498:goto L4c8498;
case 0x4c849b:c.instructions+=1;goto B4c849b;
case 0x4c849d:goto L4c849d;
case 0x4c84a2:c.instructions+=1;goto B4c84a2;
case 0x4c84a7:goto L4c84a7;
case 0x4c84aa:c.instructions+=1;goto B4c84aa;
case 0x4c84ac:goto L4c84ac;
case 0x4c84af:c.instructions+=2;goto B4c84af;
case 0x4c84b0:c.instructions+=1;goto B4c84b0;
case 0x4c84b5:goto L4c84b5;
case 0x4c84b8:c.instructions+=2;goto B4c84b8;
case 0x4c84b9:c.instructions+=1;goto B4c84b9;
case 0x4c84be:goto L4c84be;
case 0x4c84c1:goto L4c84c1;
case 0x4c84c6:c.instructions+=1;goto B4c84c6;
case 0x4c84cb:goto L4c84cb;
case 0x4c84ce:c.instructions+=1;goto B4c84ce;
case 0x4c84d0:goto L4c84d0;
case 0x4c84d3:c.instructions+=3;goto B4c84d3;
case 0x4c84d4:c.instructions+=2;goto B4c84d4;
case 0x4c84d8:c.instructions+=1;goto B4c84d8;
case 0x4c84dd:goto L4c84dd;
case 0x4c84e0:c.instructions+=2;goto B4c84e0;
case 0x4c84e1:c.instructions+=1;goto B4c84e1;
case 0x4c84e6:goto L4c84e6;
case 0x4c84e9:goto L4c84e9;
case 0x4c84ec:c.instructions+=4;goto B4c84ec;
case 0x4c84ef:c.instructions+=3;goto B4c84ef;
case 0x4c84f3:c.instructions+=2;goto B4c84f3;
case 0x4c84f5:c.instructions+=1;goto B4c84f5;
case 0x4c84f7:goto L4c84f7;
case 0x4c84fa:c.instructions+=3;goto B4c84fa;
case 0x4c8500:c.instructions+=2;goto B4c8500;
case 0x4c8503:c.instructions+=1;goto B4c8503;
case 0x4c8505:goto L4c8505;
case 0x4c8508:c.instructions+=1;goto B4c8508;
case 0x4c850a:goto L4c850a;
case 0x4c850c:c.instructions+=1;goto B4c850c;
case 0x4c850e:goto L4c850e;
case 0x4c8510:goto L4c8510;
case 0x4c8515:c.instructions+=1;goto B4c8515;
case 0x4c851a:goto L4c851a;
case 0x4c851c:c.instructions+=1;goto B4c851c;
case 0x4c851e:goto L4c851e;
case 0x4c8523:c.instructions+=1;goto B4c8523;
case 0x4c8528:goto L4c8528;
case 0x4c852b:c.instructions+=1;goto B4c852b;
case 0x4c852d:goto L4c852d;
case 0x4c8532:c.instructions+=1;goto B4c8532;
case 0x4c8537:goto L4c8537;
case 0x4c853a:c.instructions+=1;goto B4c853a;
case 0x4c853c:goto L4c853c;
case 0x4c8541:c.instructions+=1;goto B4c8541;
case 0x4c8546:goto L4c8546;
case 0x4c8549:c.instructions+=1;goto B4c8549;
case 0x4c854b:goto L4c854b;
case 0x4c854d:c.instructions+=1;goto B4c854d;
case 0x4c854f:goto L4c854f;
case 0x4c8552:c.instructions+=2;goto B4c8552;
case 0x4c8553:c.instructions+=1;goto B4c8553;
case 0x4c8558:goto L4c8558;
case 0x4c855b:c.instructions+=2;goto B4c855b;
case 0x4c855c:c.instructions+=1;goto B4c855c;
case 0x4c8561:goto L4c8561;
case 0x4c8564:goto L4c8564;
case 0x4c8567:c.instructions+=5;goto B4c8567;
case 0x4c8568:c.instructions+=4;goto B4c8568;
case 0x4c856b:c.instructions+=3;goto B4c856b;
case 0x4c856c:c.instructions+=2;goto B4c856c;
case 0x4c8571:c.instructions+=1;goto B4c8571;
case 0x4c8576:goto L4c8576;
case 0x4c8579:c.instructions+=6;goto B4c8579;
case 0x4c857c:c.instructions+=5;goto B4c857c;
case 0x4c857f:c.instructions+=4;goto B4c857f;
case 0x4c8580:c.instructions+=3;goto B4c8580;
case 0x4c8581:c.instructions+=2;goto B4c8581;
case 0x4c8582:c.instructions+=1;goto B4c8582;
case 0x4c8587:goto L4c8587;
case 0x4c858a:c.instructions+=3;goto B4c858a;
case 0x4c858d:c.instructions+=2;goto B4c858d;
case 0x4c858f:c.instructions+=1;goto B4c858f;
case 0x4c8591:goto L4c8591;
case 0x4c8594:c.instructions+=2;goto B4c8594;
case 0x4c8596:c.instructions+=1;goto B4c8596;
case 0x4c8598:goto L4c8598;
case 0x4c859e:c.instructions+=2;goto B4c859e;
case 0x4c85a0:c.instructions+=1;goto B4c85a0;
case 0x4c85a2:goto L4c85a2;
case 0x4c85a4:c.instructions+=1;goto B4c85a4;
case 0x4c85a9:goto L4c85a9;
case 0x4c85ac:c.instructions+=5;goto B4c85ac;
case 0x4c85ad:c.instructions+=4;goto B4c85ad;
case 0x4c85ae:c.instructions+=3;goto B4c85ae;
case 0x4c85b0:c.instructions+=2;goto B4c85b0;
case 0x4c85b1:c.instructions+=1;goto B4c85b1;
case 0x4c85b4:goto L4c85b4;
case 0x4c85b7:c.instructions+=6;goto B4c85b7;
case 0x4c85ba:c.instructions+=5;goto B4c85ba;
case 0x4c85bb:c.instructions+=4;goto B4c85bb;
case 0x4c85bc:c.instructions+=3;goto B4c85bc;
case 0x4c85be:c.instructions+=2;goto B4c85be;
case 0x4c85bf:c.instructions+=1;goto B4c85bf;
case 0x4c85d0:goto L4c85d0;
case 0x4c85d3:c.instructions+=16;goto B4c85d3;
case 0x4c85d4:c.instructions+=15;goto B4c85d4;
case 0x4c85d5:c.instructions+=14;goto B4c85d5;
case 0x4c85d6:c.instructions+=13;goto B4c85d6;
case 0x4c85d8:c.instructions+=12;goto B4c85d8;
case 0x4c85db:c.instructions+=11;goto B4c85db;
case 0x4c85e2:c.instructions+=10;goto B4c85e2;
case 0x4c85e8:c.instructions+=9;goto B4c85e8;
case 0x4c85ec:c.instructions+=8;goto B4c85ec;
case 0x4c85ef:c.instructions+=7;goto B4c85ef;
case 0x4c85f0:c.instructions+=6;goto B4c85f0;
case 0x4c85f3:c.instructions+=5;goto B4c85f3;
case 0x4c85f6:c.instructions+=4;goto B4c85f6;
case 0x4c85fc:c.instructions+=3;goto B4c85fc;
case 0x4c85fe:c.instructions+=2;goto B4c85fe;
case 0x4c8601:c.instructions+=1;goto B4c8601;
case 0x4c8606:goto L4c8606;
case 0x4c8609:c.instructions+=4;goto B4c8609;
case 0x4c860a:c.instructions+=3;goto B4c860a;
case 0x4c860f:c.instructions+=2;goto B4c860f;
case 0x4c8610:c.instructions+=1;goto B4c8610;
case 0x4c8615:goto L4c8615;
case 0x4c8618:c.instructions+=2;goto B4c8618;
case 0x4c8619:c.instructions+=1;goto B4c8619;
case 0x4c861e:goto L4c861e;
case 0x4c8621:c.instructions+=2;goto B4c8621;
case 0x4c8622:c.instructions+=1;goto B4c8622;
case 0x4c8627:goto L4c8627;
case 0x4c862a:c.instructions+=4;goto B4c862a;
case 0x4c862d:c.instructions+=3;goto B4c862d;
case 0x4c8630:c.instructions+=2;goto B4c8630;
case 0x4c8632:c.instructions+=1;goto B4c8632;
case 0x4c8634:goto L4c8634;
case 0x4c8637:c.instructions+=2;goto B4c8637;
case 0x4c8638:c.instructions+=1;goto B4c8638;
case 0x4c863d:goto L4c863d;
case 0x4c8640:c.instructions+=2;goto B4c8640;
case 0x4c8641:c.instructions+=1;goto B4c8641;
case 0x4c8646:goto L4c8646;
case 0x4c8649:c.instructions+=7;goto B4c8649;
case 0x4c864c:c.instructions+=6;goto B4c864c;
case 0x4c864f:c.instructions+=5;goto B4c864f;
case 0x4c8650:c.instructions+=4;goto B4c8650;
case 0x4c8651:c.instructions+=3;goto B4c8651;
case 0x4c8652:c.instructions+=2;goto B4c8652;
case 0x4c8654:c.instructions+=1;goto B4c8654;
case 0x4c8659:goto L4c8659;
case 0x4c865c:c.instructions+=2;goto B4c865c;
case 0x4c865e:c.instructions+=1;goto B4c865e;
case 0x4c8660:goto L4c8660;
case 0x4c8663:c.instructions+=9;goto B4c8663;
case 0x4c8669:c.instructions+=8;goto B4c8669;
case 0x4c866b:c.instructions+=7;goto B4c866b;
case 0x4c866f:c.instructions+=6;goto B4c866f;
case 0x4c8673:c.instructions+=5;goto B4c8673;
case 0x4c8679:c.instructions+=4;goto B4c8679;
case 0x4c867f:c.instructions+=3;goto B4c867f;
case 0x4c8681:c.instructions+=2;goto B4c8681;
case 0x4c8684:c.instructions+=1;goto B4c8684;
case 0x4c8686:goto L4c8686;
case 0x4c868a:c.instructions+=4;goto B4c868a;
case 0x4c8691:c.instructions+=3;goto B4c8691;
case 0x4c8694:c.instructions+=2;goto B4c8694;
case 0x4c8695:c.instructions+=1;goto B4c8695;
case 0x4c869a:goto L4c869a;
case 0x4c869d:c.instructions+=2;goto B4c869d;
case 0x4c869e:c.instructions+=1;goto B4c869e;
case 0x4c86a3:goto L4c86a3;
case 0x4c86a6:c.instructions+=1;goto B4c86a6;
case 0x4c86a8:goto L4c86a8;
case 0x4c86ac:c.instructions+=1;goto B4c86ac;
case 0x4c86b3:goto L4c86b3;
case 0x4c86b7:c.instructions+=1;goto B4c86b7;
case 0x4c86b9:goto L4c86b9;
case 0x4c86bc:c.instructions+=1;goto B4c86bc;
case 0x4c86c1:goto L4c86c1;
case 0x4c86c4:c.instructions+=4;goto B4c86c4;
case 0x4c86c5:c.instructions+=3;goto B4c86c5;
case 0x4c86ca:c.instructions+=2;goto B4c86ca;
case 0x4c86cb:c.instructions+=1;goto B4c86cb;
case 0x4c86d0:goto L4c86d0;
case 0x4c86d3:c.instructions+=4;goto B4c86d3;
case 0x4c86d5:c.instructions+=3;goto B4c86d5;
case 0x4c86da:c.instructions+=2;goto B4c86da;
case 0x4c86db:c.instructions+=1;goto B4c86db;
case 0x4c86e0:goto L4c86e0;
case 0x4c86e3:c.instructions+=4;goto B4c86e3;
case 0x4c86e5:c.instructions+=3;goto B4c86e5;
case 0x4c86ea:c.instructions+=2;goto B4c86ea;
case 0x4c86eb:c.instructions+=1;goto B4c86eb;
case 0x4c86f0:goto L4c86f0;
case 0x4c86f3:goto L4c86f3;
case 0x4c86f7:c.instructions+=9;goto B4c86f7;
case 0x4c86fa:c.instructions+=8;goto B4c86fa;
case 0x4c86fd:c.instructions+=7;goto B4c86fd;
case 0x4c8703:c.instructions+=6;goto B4c8703;
case 0x4c8705:c.instructions+=5;goto B4c8705;
case 0x4c8707:c.instructions+=4;goto B4c8707;
case 0x4c870a:c.instructions+=3;goto B4c870a;
case 0x4c870d:c.instructions+=2;goto B4c870d;
case 0x4c8711:c.instructions+=1;goto B4c8711;
case 0x4c8716:goto L4c8716;
case 0x4c871c:c.instructions+=4;goto B4c871c;
case 0x4c871f:c.instructions+=3;goto B4c871f;
case 0x4c8721:c.instructions+=2;goto B4c8721;
case 0x4c8725:c.instructions+=1;goto B4c8725;
case 0x4c872a:goto L4c872a;
case 0x4c872c:c.instructions+=2;goto B4c872c;
case 0x4c872e:c.instructions+=1;goto B4c872e;
case 0x4c8734:goto L4c8734;
case 0x4c8737:c.instructions+=4;goto B4c8737;
case 0x4c8738:c.instructions+=3;goto B4c8738;
case 0x4c873d:c.instructions+=2;goto B4c873d;
case 0x4c873e:c.instructions+=1;goto B4c873e;
case 0x4c8743:goto L4c8743;
case 0x4c8748:c.instructions+=4;goto B4c8748;
case 0x4c874c:c.instructions+=3;goto B4c874c;
case 0x4c874e:c.instructions+=2;goto B4c874e;
case 0x4c874f:c.instructions+=1;goto B4c874f;
case 0x4c8754:goto L4c8754;
case 0x4c8757:c.instructions+=7;goto B4c8757;
case 0x4c8758:c.instructions+=6;goto B4c8758;
case 0x4c875c:c.instructions+=5;goto B4c875c;
case 0x4c875d:c.instructions+=4;goto B4c875d;
case 0x4c8761:c.instructions+=3;goto B4c8761;
case 0x4c8763:c.instructions+=2;goto B4c8763;
case 0x4c8764:c.instructions+=1;goto B4c8764;
case 0x4c8769:goto L4c8769;
case 0x4c876c:c.instructions+=5;goto B4c876c;
case 0x4c8770:c.instructions+=4;goto B4c8770;
case 0x4c8771:c.instructions+=3;goto B4c8771;
case 0x4c8776:c.instructions+=2;goto B4c8776;
case 0x4c8777:c.instructions+=1;goto B4c8777;
case 0x4c877c:goto L4c877c;
case 0x4c877f:c.instructions+=3;goto B4c877f;
case 0x4c8782:c.instructions+=2;goto B4c8782;
case 0x4c8784:c.instructions+=1;goto B4c8784;
case 0x4c8786:goto L4c8786;
case 0x4c8789:c.instructions+=4;goto B4c8789;
case 0x4c878b:c.instructions+=3;goto B4c878b;
case 0x4c8790:c.instructions+=2;goto B4c8790;
case 0x4c8791:c.instructions+=1;goto B4c8791;
case 0x4c8796:goto L4c8796;
case 0x4c8799:goto L4c8799;
case 0x4c879c:c.instructions+=4;goto B4c879c;
case 0x4c879d:c.instructions+=3;goto B4c879d;
case 0x4c87a2:c.instructions+=2;goto B4c87a2;
case 0x4c87a3:c.instructions+=1;goto B4c87a3;
case 0x4c87a8:goto L4c87a8;
case 0x4c87ac:c.instructions+=4;goto B4c87ac;
case 0x4c87af:c.instructions+=3;goto B4c87af;
case 0x4c87b1:c.instructions+=2;goto B4c87b1;
case 0x4c87b4:c.instructions+=1;goto B4c87b4;
case 0x4c87ba:goto L4c87ba;
case 0x4c87bc:c.instructions+=2;goto B4c87bc;
case 0x4c87c2:c.instructions+=1;goto B4c87c2;
case 0x4c87c4:goto L4c87c4;
case 0x4c87c6:c.instructions+=8;goto B4c87c6;
case 0x4c87ca:c.instructions+=7;goto B4c87ca;
case 0x4c87ce:c.instructions+=6;goto B4c87ce;
case 0x4c87d0:c.instructions+=5;goto B4c87d0;
case 0x4c87d3:c.instructions+=4;goto B4c87d3;
case 0x4c87d9:c.instructions+=3;goto B4c87d9;
case 0x4c87db:c.instructions+=2;goto B4c87db;
case 0x4c87de:c.instructions+=1;goto B4c87de;
case 0x4c87e0:goto L4c87e0;
case 0x4c87e2:c.instructions+=1;goto B4c87e2;
case 0x4c87e8:goto L4c87e8;
case 0x4c87ed:c.instructions+=9;goto B4c87ed;
case 0x4c87f0:c.instructions+=8;goto B4c87f0;
case 0x4c87f4:c.instructions+=7;goto B4c87f4;
case 0x4c87f8:c.instructions+=6;goto B4c87f8;
case 0x4c87fe:c.instructions+=5;goto B4c87fe;
case 0x4c8800:c.instructions+=4;goto B4c8800;
case 0x4c8802:c.instructions+=3;goto B4c8802;
case 0x4c8804:c.instructions+=2;goto B4c8804;
case 0x4c8807:c.instructions+=1;goto B4c8807;
case 0x4c880d:goto L4c880d;
case 0x4c8810:c.instructions+=8;goto B4c8810;
case 0x4c8812:c.instructions+=7;goto B4c8812;
case 0x4c8815:c.instructions+=6;goto B4c8815;
case 0x4c8818:c.instructions+=5;goto B4c8818;
case 0x4c881e:c.instructions+=4;goto B4c881e;
case 0x4c8821:c.instructions+=3;goto B4c8821;
case 0x4c8824:c.instructions+=2;goto B4c8824;
case 0x4c8826:c.instructions+=1;goto B4c8826;
case 0x4c8828:goto L4c8828;
case 0x4c882b:c.instructions+=3;goto B4c882b;
case 0x4c8830:c.instructions+=2;goto B4c8830;
case 0x4c8831:c.instructions+=1;goto B4c8831;
case 0x4c8836:goto L4c8836;
case 0x4c8839:c.instructions+=6;goto B4c8839;
case 0x4c883a:c.instructions+=5;goto B4c883a;
case 0x4c883b:c.instructions+=4;goto B4c883b;
case 0x4c883c:c.instructions+=3;goto B4c883c;
case 0x4c883d:c.instructions+=2;goto B4c883d;
case 0x4c8840:c.instructions+=1;goto B4c8840;
case 0x4c8843:goto L4c8843;
case 0x4c8846:c.instructions+=3;goto B4c8846;
case 0x4c884b:c.instructions+=2;goto B4c884b;
case 0x4c884c:c.instructions+=1;goto B4c884c;
case 0x4c8851:goto L4c8851;
case 0x4c8854:c.instructions+=6;goto B4c8854;
case 0x4c8855:c.instructions+=5;goto B4c8855;
case 0x4c8856:c.instructions+=4;goto B4c8856;
case 0x4c8857:c.instructions+=3;goto B4c8857;
case 0x4c8858:c.instructions+=2;goto B4c8858;
case 0x4c885b:c.instructions+=1;goto B4c885b;
case 0x4c885e:goto L4c885e;
case 0x4c8861:c.instructions+=3;goto B4c8861;
case 0x4c8866:c.instructions+=2;goto B4c8866;
case 0x4c8867:c.instructions+=1;goto B4c8867;
case 0x4c886c:goto L4c886c;
case 0x4c886f:c.instructions+=6;goto B4c886f;
case 0x4c8870:c.instructions+=5;goto B4c8870;
case 0x4c8871:c.instructions+=4;goto B4c8871;
case 0x4c8872:c.instructions+=3;goto B4c8872;
case 0x4c8873:c.instructions+=2;goto B4c8873;
case 0x4c8876:c.instructions+=1;goto B4c8876;
case 0x4c8879:goto L4c8879;
case 0x4c887c:c.instructions+=1;goto B4c887c;
case 0x4c887e:goto L4c887e;
case 0x4c8881:c.instructions+=4;goto B4c8881;
case 0x4c8883:c.instructions+=3;goto B4c8883;
case 0x4c8888:c.instructions+=2;goto B4c8888;
case 0x4c8889:c.instructions+=1;goto B4c8889;
case 0x4c888e:goto L4c888e;
case 0x4c8891:goto L4c8891;
case 0x4c8894:c.instructions+=4;goto B4c8894;
case 0x4c8895:c.instructions+=3;goto B4c8895;
case 0x4c889a:c.instructions+=2;goto B4c889a;
case 0x4c889b:c.instructions+=1;goto B4c889b;
case 0x4c88a0:goto L4c88a0;
case 0x4c88a3:c.instructions+=4;goto B4c88a3;
case 0x4c88a8:c.instructions+=3;goto B4c88a8;
case 0x4c88a9:c.instructions+=2;goto B4c88a9;
case 0x4c88ac:c.instructions+=1;goto B4c88ac;
case 0x4c88b1:goto L4c88b1;
case 0x4c88b4:c.instructions+=3;goto B4c88b4;
case 0x4c88b9:c.instructions+=2;goto B4c88b9;
case 0x4c88ba:c.instructions+=1;goto B4c88ba;
case 0x4c88bf:goto L4c88bf;
case 0x4c88c2:c.instructions+=3;goto B4c88c2;
case 0x4c88c7:c.instructions+=2;goto B4c88c7;
case 0x4c88c8:c.instructions+=1;goto B4c88c8;
case 0x4c88cd:goto L4c88cd;
case 0x4c88d0:goto L4c88d0;
case 0x4c88d1:c.instructions+=5;goto B4c88d1;
case 0x4c88d2:c.instructions+=4;goto B4c88d2;
case 0x4c88d3:c.instructions+=3;goto B4c88d3;
case 0x4c88d4:c.instructions+=2;goto B4c88d4;
case 0x4c88d7:c.instructions+=1;goto B4c88d7;
case 0x4c88e0:goto L4c88e0;
case 0x4c88e3:c.instructions+=8;goto B4c88e3;
case 0x4c88e4:c.instructions+=7;goto B4c88e4;
case 0x4c88e6:c.instructions+=6;goto B4c88e6;
case 0x4c88ea:c.instructions+=5;goto B4c88ea;
case 0x4c88eb:c.instructions+=4;goto B4c88eb;
case 0x4c88ed:c.instructions+=3;goto B4c88ed;
case 0x4c88ef:c.instructions+=2;goto B4c88ef;
case 0x4c88f3:c.instructions+=1;goto B4c88f3;
case 0x4c88f9:goto L4c88f9;
case 0x4c88fe:goto L4c88fe;
case 0x4c8900:c.instructions+=2;goto B4c8900;
case 0x4c8904:c.instructions+=1;goto B4c8904;
case 0x4c890a:goto L4c890a;
case 0x4c890b:c.instructions+=3;goto B4c890b;
case 0x4c890c:c.instructions+=2;goto B4c890c;
case 0x4c890e:c.instructions+=1;goto B4c890e;
case 0x4c8910:goto L4c8910;
case 0x4c8914:goto L4c8914;
case 0x4c891a:c.instructions+=1;goto B4c891a;
case 0x4c891c:goto L4c891c;
case 0x4c8922:c.instructions+=1;goto B4c8922;
case 0x4c8928:goto L4c8928;
case 0x4c892b:c.instructions+=1;goto B4c892b;
case 0x4c8931:goto L4c8931;
case 0x4c8934:c.instructions+=8;goto B4c8934;
case 0x4c893b:c.instructions+=7;goto B4c893b;
case 0x4c8941:c.instructions+=6;goto B4c8941;
case 0x4c8944:c.instructions+=5;goto B4c8944;
case 0x4c8947:c.instructions+=4;goto B4c8947;
case 0x4c8948:c.instructions+=3;goto B4c8948;
case 0x4c894c:c.instructions+=2;goto B4c894c;
case 0x4c8950:c.instructions+=1;goto B4c8950;
case 0x4c8955:goto L4c8955;
case 0x4c8957:c.instructions+=25;goto B4c8957;
case 0x4c895a:c.instructions+=24;goto B4c895a;
case 0x4c895d:c.instructions+=23;goto B4c895d;
case 0x4c8960:c.instructions+=22;goto B4c8960;
case 0x4c8963:c.instructions+=21;goto B4c8963;
case 0x4c8966:c.instructions+=20;goto B4c8966;
case 0x4c8969:c.instructions+=19;goto B4c8969;
case 0x4c896c:c.instructions+=18;goto B4c896c;
case 0x4c896f:c.instructions+=17;goto B4c896f;
case 0x4c8972:c.instructions+=16;goto B4c8972;
case 0x4c8975:c.instructions+=15;goto B4c8975;
case 0x4c8978:c.instructions+=14;goto B4c8978;
case 0x4c897b:c.instructions+=13;goto B4c897b;
case 0x4c897e:c.instructions+=12;goto B4c897e;
case 0x4c8981:c.instructions+=11;goto B4c8981;
case 0x4c8984:c.instructions+=10;goto B4c8984;
case 0x4c8987:c.instructions+=9;goto B4c8987;
case 0x4c898a:c.instructions+=8;goto B4c898a;
case 0x4c898d:c.instructions+=7;goto B4c898d;
case 0x4c8990:c.instructions+=6;goto B4c8990;
case 0x4c8993:c.instructions+=5;goto B4c8993;
case 0x4c8996:c.instructions+=4;goto B4c8996;
case 0x4c899a:c.instructions+=3;goto B4c899a;
case 0x4c899d:c.instructions+=2;goto B4c899d;
case 0x4c89a1:c.instructions+=1;goto B4c89a1;
case 0x4c89a7:goto L4c89a7;
case 0x4c89aa:c.instructions+=4;goto B4c89aa;
case 0x4c89ae:c.instructions+=3;goto B4c89ae;
case 0x4c89af:c.instructions+=2;goto B4c89af;
case 0x4c89b2:c.instructions+=1;goto B4c89b2;
case 0x4c89b7:goto L4c89b7;
case 0x4c89ba:c.instructions+=1;goto B4c89ba;
case 0x4c89bf:goto L4c89bf;
case 0x4c89c2:c.instructions+=3;goto B4c89c2;
case 0x4c89c5:c.instructions+=2;goto B4c89c5;
case 0x4c89c7:c.instructions+=1;goto B4c89c7;
case 0x4c89c9:goto L4c89c9;
case 0x4c89cb:c.instructions+=2;goto B4c89cb;
case 0x4c89cd:c.instructions+=1;goto B4c89cd;
case 0x4c89cf:goto L4c89cf;
case 0x4c89d0:goto L4c89d0;
case 0x4c89d2:c.instructions+=1;goto B4c89d2;
case 0x4c89d4:goto L4c89d4;
case 0x4c89d6:c.instructions+=1;goto B4c89d6;
case 0x4c89d8:goto L4c89d8;
case 0x4c89db:c.instructions+=2;goto B4c89db;
case 0x4c89de:c.instructions+=1;goto B4c89de;
case 0x4c89e0:goto L4c89e0;
case 0x4c89e3:c.instructions+=4;goto B4c89e3;
case 0x4c89e9:c.instructions+=3;goto B4c89e9;
case 0x4c89eb:c.instructions+=2;goto B4c89eb;
case 0x4c89ee:c.instructions+=1;goto B4c89ee;
case 0x4c89f0:goto L4c89f0;
case 0x4c89f2:c.instructions+=2;goto B4c89f2;
case 0x4c89f4:c.instructions+=1;goto B4c89f4;
case 0x4c89f6:goto L4c89f6;
case 0x4c89f9:c.instructions+=4;goto B4c89f9;
case 0x4c89ff:c.instructions+=3;goto B4c89ff;
case 0x4c8a01:c.instructions+=2;goto B4c8a01;
case 0x4c8a04:c.instructions+=1;goto B4c8a04;
case 0x4c8a0a:goto L4c8a0a;
case 0x4c8a0d:c.instructions+=5;goto B4c8a0d;
case 0x4c8a0f:c.instructions+=4;goto B4c8a0f;
case 0x4c8a15:c.instructions+=3;goto B4c8a15;
case 0x4c8a17:c.instructions+=2;goto B4c8a17;
case 0x4c8a1a:c.instructions+=1;goto B4c8a1a;
case 0x4c8a1c:goto L4c8a1c;
case 0x4c8a21:goto L4c8a21;
case 0x4c8a24:c.instructions+=2;goto B4c8a24;
case 0x4c8a26:c.instructions+=1;goto B4c8a26;
case 0x4c8a28:goto L4c8a28;
case 0x4c8a29:c.instructions+=2;goto B4c8a29;
case 0x4c8a2b:c.instructions+=1;goto B4c8a2b;
case 0x4c8a30:goto L4c8a30;
case 0x4c8a33:c.instructions+=5;goto B4c8a33;
case 0x4c8a36:c.instructions+=4;goto B4c8a36;
case 0x4c8a39:c.instructions+=3;goto B4c8a39;
case 0x4c8a3c:c.instructions+=2;goto B4c8a3c;
case 0x4c8a3e:c.instructions+=1;goto B4c8a3e;
case 0x4c8a40:goto L4c8a40;
case 0x4c8a44:c.instructions+=8;goto B4c8a44;
case 0x4c8a47:c.instructions+=7;goto B4c8a47;
case 0x4c8a4a:c.instructions+=6;goto B4c8a4a;
case 0x4c8a4d:c.instructions+=5;goto B4c8a4d;
case 0x4c8a50:c.instructions+=4;goto B4c8a50;
case 0x4c8a53:c.instructions+=3;goto B4c8a53;
case 0x4c8a56:c.instructions+=2;goto B4c8a56;
case 0x4c8a5a:c.instructions+=1;goto B4c8a5a;
case 0x4c8a5c:goto L4c8a5c;
case 0x4c8a5f:c.instructions+=2;goto B4c8a5f;
case 0x4c8a65:c.instructions+=1;goto B4c8a65;
case 0x4c8a6a:goto L4c8a6a;
case 0x4c8a6d:goto L4c8a6d;
case 0x4c8a70:c.instructions+=1;goto B4c8a70;
case 0x4c8a72:goto L4c8a72;
case 0x4c8a75:c.instructions+=6;goto B4c8a75;
case 0x4c8a77:c.instructions+=5;goto B4c8a77;
case 0x4c8a7a:c.instructions+=4;goto B4c8a7a;
case 0x4c8a7d:c.instructions+=3;goto B4c8a7d;
case 0x4c8a80:c.instructions+=2;goto B4c8a80;
case 0x4c8a82:c.instructions+=1;goto B4c8a82;
case 0x4c8a84:goto L4c8a84;
case 0x4c8a89:goto L4c8a89;
case 0x4c8a8c:c.instructions+=2;goto B4c8a8c;
case 0x4c8a8e:c.instructions+=1;goto B4c8a8e;
case 0x4c8a90:goto L4c8a90;
case 0x4c8a91:c.instructions+=2;goto B4c8a91;
case 0x4c8a93:c.instructions+=1;goto B4c8a93;
case 0x4c8a98:goto L4c8a98;
case 0x4c8a9a:goto L4c8a9a;
case 0x4c8a9c:goto L4c8a9c;
case 0x4c8a9f:c.instructions+=4;goto B4c8a9f;
case 0x4c8aa1:c.instructions+=3;goto B4c8aa1;
case 0x4c8aa4:c.instructions+=2;goto B4c8aa4;
case 0x4c8aa7:c.instructions+=1;goto B4c8aa7;
case 0x4c8aa9:goto L4c8aa9;
case 0x4c8aab:c.instructions+=2;goto B4c8aab;
case 0x4c8aaf:c.instructions+=1;goto B4c8aaf;
case 0x4c8ab5:goto L4c8ab5;
case 0x4c8ab6:c.instructions+=1;goto B4c8ab6;
case 0x4c8ab7:goto L4c8ab7;
case 0x4c8ab8:c.instructions+=3;goto B4c8ab8;
case 0x4c8ab9:c.instructions+=2;goto B4c8ab9;
case 0x4c8abc:c.instructions+=1;goto B4c8abc;
case 0x4c8ac0:goto L4c8ac0;
case 0x4c8ac3:c.instructions+=5;goto B4c8ac3;
case 0x4c8ac4:c.instructions+=4;goto B4c8ac4;
case 0x4c8ac6:c.instructions+=3;goto B4c8ac6;
case 0x4c8ac9:c.instructions+=2;goto B4c8ac9;
case 0x4c8acc:c.instructions+=1;goto B4c8acc;
case 0x4c8ace:goto L4c8ace;
case 0x4c8acf:c.instructions+=1;goto B4c8acf;
case 0x4c8ad5:goto L4c8ad5;
case 0x4c8ada:c.instructions+=8;goto B4c8ada;
case 0x4c8add:c.instructions+=7;goto B4c8add;
case 0x4c8ae1:c.instructions+=6;goto B4c8ae1;
case 0x4c8ae5:c.instructions+=5;goto B4c8ae5;
case 0x4c8aeb:c.instructions+=4;goto B4c8aeb;
case 0x4c8af1:c.instructions+=3;goto B4c8af1;
case 0x4c8af3:c.instructions+=2;goto B4c8af3;
case 0x4c8af6:c.instructions+=1;goto B4c8af6;
case 0x4c8af8:goto L4c8af8;
case 0x4c8afc:c.instructions+=1;goto B4c8afc;
case 0x4c8afe:goto L4c8afe;
case 0x4c8b00:c.instructions+=2;goto B4c8b00;
case 0x4c8b02:c.instructions+=1;goto B4c8b02;
case 0x4c8b07:goto L4c8b07;
case 0x4c8b0a:c.instructions+=3;goto B4c8b0a;
case 0x4c8b0b:c.instructions+=2;goto B4c8b0b;
case 0x4c8b0e:c.instructions+=1;goto B4c8b0e;
case 0x4c8b0f:goto L4c8b0f;
case 0x4c8b12:c.instructions+=6;goto B4c8b12;
case 0x4c8b14:c.instructions+=5;goto B4c8b14;
case 0x4c8b1a:c.instructions+=4;goto B4c8b1a;
case 0x4c8b1b:c.instructions+=3;goto B4c8b1b;
case 0x4c8b21:c.instructions+=2;goto B4c8b21;
case 0x4c8b25:c.instructions+=1;goto B4c8b25;
case 0x4c8b27:goto L4c8b27;
case 0x4c8b2a:c.instructions+=1;goto B4c8b2a;
case 0x4c8b2e:goto L4c8b2e;
case 0x4c8b30:c.instructions+=1;goto B4c8b30;
case 0x4c8b32:goto L4c8b32;
case 0x4c8b37:c.instructions+=1;goto B4c8b37;
case 0x4c8b3c:goto L4c8b3c;
case 0x4c8b3e:c.instructions+=1;goto B4c8b3e;
case 0x4c8b40:goto L4c8b40;
case 0x4c8b43:c.instructions+=7;goto B4c8b43;
case 0x4c8b47:c.instructions+=6;goto B4c8b47;
case 0x4c8b4b:c.instructions+=5;goto B4c8b4b;
case 0x4c8b51:c.instructions+=4;goto B4c8b51;
case 0x4c8b55:c.instructions+=3;goto B4c8b55;
case 0x4c8b57:c.instructions+=2;goto B4c8b57;
case 0x4c8b5a:c.instructions+=1;goto B4c8b5a;
case 0x4c8b5c:goto L4c8b5c;
case 0x4c8b60:c.instructions+=1;goto B4c8b60;
case 0x4c8b62:goto L4c8b62;
case 0x4c8b64:c.instructions+=2;goto B4c8b64;
case 0x4c8b66:c.instructions+=1;goto B4c8b66;
case 0x4c8b6b:goto L4c8b6b;
case 0x4c8b6e:goto L4c8b6e;
case 0x4c8b6f:goto L4c8b6f;
case 0x4c8b70:c.instructions+=2;goto B4c8b70;
case 0x4c8b73:c.instructions+=1;goto B4c8b73;
case 0x4c8b80:goto L4c8b80;
case 0x4c8b81:c.instructions+=5;goto B4c8b81;
case 0x4c8b83:c.instructions+=4;goto B4c8b83;
case 0x4c8b86:c.instructions+=3;goto B4c8b86;
case 0x4c8b89:c.instructions+=2;goto B4c8b89;
case 0x4c8b8c:c.instructions+=1;goto B4c8b8c;
case 0x4c8b92:goto L4c8b92;
case 0x4c8b93:goto L4c8b93;
case 0x4c8b9a:goto L4c8b9a;
case 0x4c8b9d:c.instructions+=4;goto B4c8b9d;
case 0x4c8ba0:c.instructions+=3;goto B4c8ba0;
case 0x4c8ba3:c.instructions+=2;goto B4c8ba3;
case 0x4c8ba6:c.instructions+=1;goto B4c8ba6;
case 0x4c8ba8:goto L4c8ba8;
case 0x4c8ba9:c.instructions+=2;goto B4c8ba9;
case 0x4c8baa:c.instructions+=1;goto B4c8baa;
case 0x4c8bad:goto L4c8bad;
case 0x4c8bb0:c.instructions+=4;goto B4c8bb0;
case 0x4c8bb2:c.instructions+=3;goto B4c8bb2;
case 0x4c8bb7:c.instructions+=2;goto B4c8bb7;
case 0x4c8bb8:c.instructions+=1;goto B4c8bb8;
case 0x4c8bbd:goto L4c8bbd;
case 0x4c8bc1:c.instructions+=2;goto B4c8bc1;
case 0x4c8bc2:c.instructions+=1;goto B4c8bc2;
case 0x4c8bc7:goto L4c8bc7;
case 0x4c8bc8:c.instructions+=4;goto B4c8bc8;
case 0x4c8bcb:c.instructions+=3;goto B4c8bcb;
case 0x4c8bce:c.instructions+=2;goto B4c8bce;
case 0x4c8bcf:c.instructions+=1;goto B4c8bcf;
case 0x4c8bd4:goto L4c8bd4;
case 0x4c8bd7:c.instructions+=3;goto B4c8bd7;
case 0x4c8bda:c.instructions+=2;goto B4c8bda;
case 0x4c8bdb:c.instructions+=1;goto B4c8bdb;
case 0x4c8be0:goto L4c8be0;
case 0x4c8be3:c.instructions+=3;goto B4c8be3;
case 0x4c8be6:c.instructions+=2;goto B4c8be6;
case 0x4c8be7:c.instructions+=1;goto B4c8be7;
case 0x4c8bec:goto L4c8bec;
case 0x4c8bef:c.instructions+=4;goto B4c8bef;
case 0x4c8bf2:c.instructions+=3;goto B4c8bf2;
case 0x4c8bf7:c.instructions+=2;goto B4c8bf7;
case 0x4c8bf8:c.instructions+=1;goto B4c8bf8;
case 0x4c8bfd:goto L4c8bfd;
case 0x4c8c00:c.instructions+=2;goto B4c8c00;
case 0x4c8c02:c.instructions+=1;goto B4c8c02;
case 0x4c8c04:goto L4c8c04;
case 0x4c8c06:c.instructions+=3;goto B4c8c06;
case 0x4c8c0b:c.instructions+=2;goto B4c8c0b;
case 0x4c8c0c:c.instructions+=1;goto B4c8c0c;
case 0x4c8c11:goto L4c8c11;
case 0x4c8c14:goto L4c8c14;
case 0x4c8c17:c.instructions+=4;goto B4c8c17;
case 0x4c8c1a:c.instructions+=3;goto B4c8c1a;
case 0x4c8c1f:c.instructions+=2;goto B4c8c1f;
case 0x4c8c20:c.instructions+=1;goto B4c8c20;
case 0x4c8c25:goto L4c8c25;
case 0x4c8c28:c.instructions+=2;goto B4c8c28;
case 0x4c8c2a:c.instructions+=1;goto B4c8c2a;
case 0x4c8c2c:goto L4c8c2c;
case 0x4c8c2e:c.instructions+=3;goto B4c8c2e;
case 0x4c8c33:c.instructions+=2;goto B4c8c33;
case 0x4c8c34:c.instructions+=1;goto B4c8c34;
case 0x4c8c39:goto L4c8c39;
case 0x4c8c3c:goto L4c8c3c;
case 0x4c8c3f:c.instructions+=4;goto B4c8c3f;
case 0x4c8c41:c.instructions+=3;goto B4c8c41;
case 0x4c8c46:c.instructions+=2;goto B4c8c46;
case 0x4c8c47:c.instructions+=1;goto B4c8c47;
case 0x4c8c4c:goto L4c8c4c;
case 0x4c8c4f:c.instructions+=2;goto B4c8c4f;
case 0x4c8c51:c.instructions+=1;goto B4c8c51;
case 0x4c8c53:goto L4c8c53;
case 0x4c8c55:c.instructions+=3;goto B4c8c55;
case 0x4c8c5a:c.instructions+=2;goto B4c8c5a;
case 0x4c8c5b:c.instructions+=1;goto B4c8c5b;
case 0x4c8c60:goto L4c8c60;
case 0x4c8c63:c.instructions+=1;goto B4c8c63;
case 0x4c8c65:goto L4c8c65;
case 0x4c8c68:c.instructions+=4;goto B4c8c68;
case 0x4c8c6a:c.instructions+=3;goto B4c8c6a;
case 0x4c8c6f:c.instructions+=2;goto B4c8c6f;
case 0x4c8c70:c.instructions+=1;goto B4c8c70;
case 0x4c8c75:goto L4c8c75;
case 0x4c8c78:goto L4c8c78;
case 0x4c8c7b:c.instructions+=3;goto B4c8c7b;
case 0x4c8c7e:c.instructions+=2;goto B4c8c7e;
case 0x4c8c7f:c.instructions+=1;goto B4c8c7f;
case 0x4c8c84:goto L4c8c84;
case 0x4c8c87:c.instructions+=3;goto B4c8c87;
case 0x4c8c8a:c.instructions+=2;goto B4c8c8a;
case 0x4c8c8b:c.instructions+=1;goto B4c8c8b;
case 0x4c8c90:goto L4c8c90;
case 0x4c8c93:c.instructions+=4;goto B4c8c93;
case 0x4c8c96:c.instructions+=3;goto B4c8c96;
case 0x4c8c9b:c.instructions+=2;goto B4c8c9b;
case 0x4c8c9c:c.instructions+=1;goto B4c8c9c;
case 0x4c8ca1:goto L4c8ca1;
case 0x4c8ca4:c.instructions+=2;goto B4c8ca4;
case 0x4c8ca6:c.instructions+=1;goto B4c8ca6;
case 0x4c8ca8:goto L4c8ca8;
case 0x4c8caa:c.instructions+=3;goto B4c8caa;
case 0x4c8caf:c.instructions+=2;goto B4c8caf;
case 0x4c8cb0:c.instructions+=1;goto B4c8cb0;
case 0x4c8cb5:goto L4c8cb5;
case 0x4c8cb8:goto L4c8cb8;
case 0x4c8cbb:c.instructions+=4;goto B4c8cbb;
case 0x4c8cbe:c.instructions+=3;goto B4c8cbe;
case 0x4c8cc3:c.instructions+=2;goto B4c8cc3;
case 0x4c8cc4:c.instructions+=1;goto B4c8cc4;
case 0x4c8cc9:goto L4c8cc9;
case 0x4c8ccc:c.instructions+=2;goto B4c8ccc;
case 0x4c8cce:c.instructions+=1;goto B4c8cce;
case 0x4c8cd0:goto L4c8cd0;
case 0x4c8cd2:c.instructions+=3;goto B4c8cd2;
case 0x4c8cd7:c.instructions+=2;goto B4c8cd7;
case 0x4c8cd8:c.instructions+=1;goto B4c8cd8;
case 0x4c8cdd:goto L4c8cdd;
case 0x4c8ce0:goto L4c8ce0;
case 0x4c8ce3:c.instructions+=4;goto B4c8ce3;
case 0x4c8ce5:c.instructions+=3;goto B4c8ce5;
case 0x4c8cea:c.instructions+=2;goto B4c8cea;
case 0x4c8ceb:c.instructions+=1;goto B4c8ceb;
case 0x4c8cf0:goto L4c8cf0;
case 0x4c8cf3:c.instructions+=2;goto B4c8cf3;
case 0x4c8cf5:c.instructions+=1;goto B4c8cf5;
case 0x4c8cfb:goto L4c8cfb;
case 0x4c8cfd:c.instructions+=3;goto B4c8cfd;
case 0x4c8d02:c.instructions+=2;goto B4c8d02;
case 0x4c8d03:c.instructions+=1;goto B4c8d03;
case 0x4c8d08:goto L4c8d08;
case 0x4c8d0b:c.instructions+=3;goto B4c8d0b;
case 0x4c8d0c:c.instructions+=2;goto B4c8d0c;
case 0x4c8d0d:c.instructions+=1;goto B4c8d0d;
case 0x4c8d10:goto L4c8d10;
case 0x4c8d13:c.instructions+=3;goto B4c8d13;
case 0x4c8d16:c.instructions+=2;goto B4c8d16;
case 0x4c8d17:c.instructions+=1;goto B4c8d17;
case 0x4c8d1c:goto L4c8d1c;
case 0x4c8d1f:c.instructions+=3;goto B4c8d1f;
case 0x4c8d22:c.instructions+=2;goto B4c8d22;
case 0x4c8d23:c.instructions+=1;goto B4c8d23;
case 0x4c8d28:goto L4c8d28;
case 0x4c8d2b:c.instructions+=4;goto B4c8d2b;
case 0x4c8d2d:c.instructions+=3;goto B4c8d2d;
case 0x4c8d32:c.instructions+=2;goto B4c8d32;
case 0x4c8d33:c.instructions+=1;goto B4c8d33;
case 0x4c8d38:goto L4c8d38;
case 0x4c8d3b:c.instructions+=4;goto B4c8d3b;
case 0x4c8d3d:c.instructions+=3;goto B4c8d3d;
case 0x4c8d42:c.instructions+=2;goto B4c8d42;
case 0x4c8d43:c.instructions+=1;goto B4c8d43;
case 0x4c8d48:goto L4c8d48;
case 0x4c8d4b:c.instructions+=2;goto B4c8d4b;
case 0x4c8d4d:c.instructions+=1;goto B4c8d4d;
case 0x4c8d4f:goto L4c8d4f;
case 0x4c8d51:c.instructions+=3;goto B4c8d51;
case 0x4c8d56:c.instructions+=2;goto B4c8d56;
case 0x4c8d57:c.instructions+=1;goto B4c8d57;
case 0x4c8d5c:goto L4c8d5c;
case 0x4c8d5f:goto L4c8d5f;
case 0x4c8d62:c.instructions+=4;goto B4c8d62;
case 0x4c8d65:c.instructions+=3;goto B4c8d65;
case 0x4c8d6a:c.instructions+=2;goto B4c8d6a;
case 0x4c8d6b:c.instructions+=1;goto B4c8d6b;
case 0x4c8d70:goto L4c8d70;
case 0x4c8d73:c.instructions+=2;goto B4c8d73;
case 0x4c8d75:c.instructions+=1;goto B4c8d75;
case 0x4c8d77:goto L4c8d77;
case 0x4c8d79:c.instructions+=3;goto B4c8d79;
case 0x4c8d7e:c.instructions+=2;goto B4c8d7e;
case 0x4c8d7f:c.instructions+=1;goto B4c8d7f;
case 0x4c8d84:goto L4c8d84;
case 0x4c8d87:goto L4c8d87;
case 0x4c8d8a:c.instructions+=4;goto B4c8d8a;
case 0x4c8d8d:c.instructions+=3;goto B4c8d8d;
case 0x4c8d92:c.instructions+=2;goto B4c8d92;
case 0x4c8d93:c.instructions+=1;goto B4c8d93;
case 0x4c8d98:goto L4c8d98;
case 0x4c8d9b:c.instructions+=2;goto B4c8d9b;
case 0x4c8d9d:c.instructions+=1;goto B4c8d9d;
case 0x4c8d9f:goto L4c8d9f;
case 0x4c8da1:c.instructions+=3;goto B4c8da1;
case 0x4c8da6:c.instructions+=2;goto B4c8da6;
case 0x4c8da7:c.instructions+=1;goto B4c8da7;
case 0x4c8dac:goto L4c8dac;
case 0x4c8daf:goto L4c8daf;
case 0x4c8db0:goto L4c8db0;
case 0x4c8db1:c.instructions+=1;goto B4c8db1;
case 0x4c8dd0:goto L4c8dd0;
case 0x4c8dd1:c.instructions+=5;goto B4c8dd1;
case 0x4c8dd3:c.instructions+=4;goto B4c8dd3;
case 0x4c8dd6:c.instructions+=3;goto B4c8dd6;
case 0x4c8dd9:c.instructions+=2;goto B4c8dd9;
case 0x4c8ddc:c.instructions+=1;goto B4c8ddc;
case 0x4c8de2:goto L4c8de2;
case 0x4c8de3:goto L4c8de3;
case 0x4c8dea:goto L4c8dea;
case 0x4c8ded:c.instructions+=4;goto B4c8ded;
case 0x4c8df0:c.instructions+=3;goto B4c8df0;
case 0x4c8df3:c.instructions+=2;goto B4c8df3;
case 0x4c8df6:c.instructions+=1;goto B4c8df6;
case 0x4c8df8:goto L4c8df8;
case 0x4c8df9:c.instructions+=2;goto B4c8df9;
case 0x4c8dfa:c.instructions+=1;goto B4c8dfa;
case 0x4c8dfd:goto L4c8dfd;
case 0x4c8e00:c.instructions+=4;goto B4c8e00;
case 0x4c8e02:c.instructions+=3;goto B4c8e02;
case 0x4c8e07:c.instructions+=2;goto B4c8e07;
case 0x4c8e08:c.instructions+=1;goto B4c8e08;
case 0x4c8e0d:goto L4c8e0d;
case 0x4c8e10:c.instructions+=3;goto B4c8e10;
case 0x4c8e13:c.instructions+=2;goto B4c8e13;
case 0x4c8e14:c.instructions+=1;goto B4c8e14;
case 0x4c8e19:goto L4c8e19;
case 0x4c8e1c:c.instructions+=3;goto B4c8e1c;
case 0x4c8e1f:c.instructions+=2;goto B4c8e1f;
case 0x4c8e20:c.instructions+=1;goto B4c8e20;
case 0x4c8e25:goto L4c8e25;
case 0x4c8e28:c.instructions+=4;goto B4c8e28;
case 0x4c8e2b:c.instructions+=3;goto B4c8e2b;
case 0x4c8e30:c.instructions+=2;goto B4c8e30;
case 0x4c8e31:c.instructions+=1;goto B4c8e31;
case 0x4c8e36:goto L4c8e36;
case 0x4c8e39:c.instructions+=2;goto B4c8e39;
case 0x4c8e3b:c.instructions+=1;goto B4c8e3b;
case 0x4c8e3d:goto L4c8e3d;
case 0x4c8e3f:c.instructions+=3;goto B4c8e3f;
case 0x4c8e44:c.instructions+=2;goto B4c8e44;
case 0x4c8e45:c.instructions+=1;goto B4c8e45;
case 0x4c8e4a:goto L4c8e4a;
case 0x4c8e4d:goto L4c8e4d;
case 0x4c8e50:c.instructions+=4;goto B4c8e50;
case 0x4c8e53:c.instructions+=3;goto B4c8e53;
case 0x4c8e58:c.instructions+=2;goto B4c8e58;
case 0x4c8e59:c.instructions+=1;goto B4c8e59;
case 0x4c8e5e:goto L4c8e5e;
case 0x4c8e61:c.instructions+=2;goto B4c8e61;
case 0x4c8e63:c.instructions+=1;goto B4c8e63;
case 0x4c8e65:goto L4c8e65;
case 0x4c8e67:c.instructions+=3;goto B4c8e67;
case 0x4c8e6c:c.instructions+=2;goto B4c8e6c;
case 0x4c8e6d:c.instructions+=1;goto B4c8e6d;
case 0x4c8e72:goto L4c8e72;
case 0x4c8e75:goto L4c8e75;
case 0x4c8e78:c.instructions+=4;goto B4c8e78;
case 0x4c8e7a:c.instructions+=3;goto B4c8e7a;
case 0x4c8e7f:c.instructions+=2;goto B4c8e7f;
case 0x4c8e80:c.instructions+=1;goto B4c8e80;
case 0x4c8e85:goto L4c8e85;
case 0x4c8e88:c.instructions+=2;goto B4c8e88;
case 0x4c8e8a:c.instructions+=1;goto B4c8e8a;
case 0x4c8e8c:goto L4c8e8c;
case 0x4c8e8e:c.instructions+=3;goto B4c8e8e;
case 0x4c8e93:c.instructions+=2;goto B4c8e93;
case 0x4c8e94:c.instructions+=1;goto B4c8e94;
case 0x4c8e99:goto L4c8e99;
case 0x4c8e9c:c.instructions+=1;goto B4c8e9c;
case 0x4c8e9e:goto L4c8e9e;
case 0x4c8ea1:c.instructions+=4;goto B4c8ea1;
case 0x4c8ea3:c.instructions+=3;goto B4c8ea3;
case 0x4c8ea8:c.instructions+=2;goto B4c8ea8;
case 0x4c8ea9:c.instructions+=1;goto B4c8ea9;
case 0x4c8eae:goto L4c8eae;
case 0x4c8eb1:goto L4c8eb1;
case 0x4c8eb5:c.instructions+=2;goto B4c8eb5;
case 0x4c8eb6:c.instructions+=1;goto B4c8eb6;
case 0x4c8ebb:goto L4c8ebb;
case 0x4c8ebc:c.instructions+=4;goto B4c8ebc;
case 0x4c8ebf:c.instructions+=3;goto B4c8ebf;
case 0x4c8ec2:c.instructions+=2;goto B4c8ec2;
case 0x4c8ec3:c.instructions+=1;goto B4c8ec3;
case 0x4c8ec8:goto L4c8ec8;
case 0x4c8ecb:c.instructions+=3;goto B4c8ecb;
case 0x4c8ece:c.instructions+=2;goto B4c8ece;
case 0x4c8ecf:c.instructions+=1;goto B4c8ecf;
case 0x4c8ed4:goto L4c8ed4;
case 0x4c8ed7:c.instructions+=3;goto B4c8ed7;
case 0x4c8eda:c.instructions+=2;goto B4c8eda;
case 0x4c8edb:c.instructions+=1;goto B4c8edb;
case 0x4c8ee0:goto L4c8ee0;
case 0x4c8ee3:c.instructions+=4;goto B4c8ee3;
case 0x4c8ee6:c.instructions+=3;goto B4c8ee6;
case 0x4c8eeb:c.instructions+=2;goto B4c8eeb;
case 0x4c8eec:c.instructions+=1;goto B4c8eec;
case 0x4c8ef1:goto L4c8ef1;
case 0x4c8ef4:c.instructions+=2;goto B4c8ef4;
case 0x4c8ef6:c.instructions+=1;goto B4c8ef6;
case 0x4c8ef8:goto L4c8ef8;
case 0x4c8efa:c.instructions+=3;goto B4c8efa;
case 0x4c8eff:c.instructions+=2;goto B4c8eff;
case 0x4c8f00:c.instructions+=1;goto B4c8f00;
case 0x4c8f05:goto L4c8f05;
case 0x4c8f08:goto L4c8f08;
case 0x4c8f0b:c.instructions+=4;goto B4c8f0b;
case 0x4c8f0e:c.instructions+=3;goto B4c8f0e;
case 0x4c8f13:c.instructions+=2;goto B4c8f13;
case 0x4c8f14:c.instructions+=1;goto B4c8f14;
case 0x4c8f19:goto L4c8f19;
case 0x4c8f1c:c.instructions+=2;goto B4c8f1c;
case 0x4c8f1e:c.instructions+=1;goto B4c8f1e;
case 0x4c8f20:goto L4c8f20;
case 0x4c8f22:c.instructions+=3;goto B4c8f22;
case 0x4c8f27:c.instructions+=2;goto B4c8f27;
case 0x4c8f28:c.instructions+=1;goto B4c8f28;
case 0x4c8f2d:goto L4c8f2d;
case 0x4c8f30:goto L4c8f30;
case 0x4c8f33:c.instructions+=4;goto B4c8f33;
case 0x4c8f35:c.instructions+=3;goto B4c8f35;
case 0x4c8f3a:c.instructions+=2;goto B4c8f3a;
case 0x4c8f3b:c.instructions+=1;goto B4c8f3b;
case 0x4c8f40:goto L4c8f40;
case 0x4c8f43:c.instructions+=2;goto B4c8f43;
case 0x4c8f45:c.instructions+=1;goto B4c8f45;
case 0x4c8f47:goto L4c8f47;
case 0x4c8f49:c.instructions+=3;goto B4c8f49;
case 0x4c8f4e:c.instructions+=2;goto B4c8f4e;
case 0x4c8f4f:c.instructions+=1;goto B4c8f4f;
case 0x4c8f54:goto L4c8f54;
case 0x4c8f57:goto L4c8f57;
case 0x4c8f5c:c.instructions+=1;goto B4c8f5c;
case 0x4c8f61:goto L4c8f61;
case 0x4c8f62:c.instructions+=2;goto B4c8f62;
case 0x4c8f63:c.instructions+=1;goto B4c8f63;
case 0x4c8f66:goto L4c8f66;
case 0x4c8f69:c.instructions+=3;goto B4c8f69;
case 0x4c8f6c:c.instructions+=2;goto B4c8f6c;
case 0x4c8f6d:c.instructions+=1;goto B4c8f6d;
case 0x4c8f72:goto L4c8f72;
case 0x4c8f75:c.instructions+=3;goto B4c8f75;
case 0x4c8f78:c.instructions+=2;goto B4c8f78;
case 0x4c8f79:c.instructions+=1;goto B4c8f79;
case 0x4c8f7e:goto L4c8f7e;
case 0x4c8f81:c.instructions+=4;goto B4c8f81;
case 0x4c8f84:c.instructions+=3;goto B4c8f84;
case 0x4c8f89:c.instructions+=2;goto B4c8f89;
case 0x4c8f8a:c.instructions+=1;goto B4c8f8a;
case 0x4c8f8f:goto L4c8f8f;
case 0x4c8f92:c.instructions+=2;goto B4c8f92;
case 0x4c8f94:c.instructions+=1;goto B4c8f94;
case 0x4c8f96:goto L4c8f96;
case 0x4c8f98:c.instructions+=3;goto B4c8f98;
case 0x4c8f9d:c.instructions+=2;goto B4c8f9d;
case 0x4c8f9e:c.instructions+=1;goto B4c8f9e;
case 0x4c8fa3:goto L4c8fa3;
case 0x4c8fa6:goto L4c8fa6;
case 0x4c8fa9:c.instructions+=4;goto B4c8fa9;
case 0x4c8fac:c.instructions+=3;goto B4c8fac;
case 0x4c8fb1:c.instructions+=2;goto B4c8fb1;
case 0x4c8fb2:c.instructions+=1;goto B4c8fb2;
case 0x4c8fb7:goto L4c8fb7;
case 0x4c8fba:c.instructions+=2;goto B4c8fba;
case 0x4c8fbc:c.instructions+=1;goto B4c8fbc;
case 0x4c8fbe:goto L4c8fbe;
case 0x4c8fc0:c.instructions+=3;goto B4c8fc0;
case 0x4c8fc5:c.instructions+=2;goto B4c8fc5;
case 0x4c8fc6:c.instructions+=1;goto B4c8fc6;
case 0x4c8fcb:goto L4c8fcb;
case 0x4c8fce:goto L4c8fce;
case 0x4c8fd1:c.instructions+=4;goto B4c8fd1;
case 0x4c8fd3:c.instructions+=3;goto B4c8fd3;
case 0x4c8fd8:c.instructions+=2;goto B4c8fd8;
case 0x4c8fd9:c.instructions+=1;goto B4c8fd9;
case 0x4c8fde:goto L4c8fde;
case 0x4c8fe1:c.instructions+=2;goto B4c8fe1;
case 0x4c8fe3:c.instructions+=1;goto B4c8fe3;
case 0x4c8fe5:goto L4c8fe5;
case 0x4c8fe7:c.instructions+=3;goto B4c8fe7;
case 0x4c8fec:c.instructions+=2;goto B4c8fec;
case 0x4c8fed:c.instructions+=1;goto B4c8fed;
case 0x4c8ff2:goto L4c8ff2;
case 0x4c8ff5:goto L4c8ff5;
case 0x4c8ff8:c.instructions+=3;goto B4c8ff8;
case 0x4c8ffa:c.instructions+=2;goto B4c8ffa;
case 0x4c8fff:c.instructions+=1;goto B4c8fff;
default:missing_instruction(c.pc);}
B4c8001:L4c8001:{c.instructions+=2;NFSU2_TR(0x4c8001);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4c8003:{NFSU2_TR(0x4c8003);
if(r1(R+518)){{goto L4c8045;}}
}
B4c8005:L4c8005:{c.instructions+=2;NFSU2_TR(0x4c8005);
w4(R+4,u32(0x89e7a0ull));
}
B4c800a:{NFSU2_TR(0x4c800a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c800full));
TAIL_STATIC(0x4018f0u,401);
}
B4c800f:L4c800f:{c.instructions+=2;NFSU2_TR(0x4c800f);
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
B4c8011:{NFSU2_TR(0x4c8011);
if(r1(R+518)){{goto L4c83cd;}}
}
B4c8017:L4c8017:{c.instructions+=4;NFSU2_TR(0x4c8017);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4c801a:{NFSU2_TR(0x4c801a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c801b:{NFSU2_TR(0x4c801b);
u8 U[4];
w4(U+0,u32(0xc2878ebcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8020:{NFSU2_TR(0x4c8020);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c8025ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4c8025:L4c8025:{c.instructions+=6;NFSU2_TR(0x4c8025);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4c8028:{NFSU2_TR(0x4c8028);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8029:{NFSU2_TR(0x4c8029);
u8 U[4];
w4(U+0,u32(0x794fd8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c802e:{NFSU2_TR(0x4c802e);
u8 U[4];
w4(U+0,u32(0xa7806ddbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8033:{NFSU2_TR(0x4c8033);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8034:{NFSU2_TR(0x4c8034);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c8039ull));
TAIL_STATIC(0x537b80u,537);
}
B4c8039:L4c8039:{c.instructions+=7;NFSU2_TR(0x4c8039);
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
B4c803c:{NFSU2_TR(0x4c803c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4c803d:{NFSU2_TR(0x4c803d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c803e:{NFSU2_TR(0x4c803e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4c803f:{NFSU2_TR(0x4c803f);
__builtin_memmove((R+16),(R+20),4);
}
B4c8041:{NFSU2_TR(0x4c8041);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4c8042:{NFSU2_TR(0x4c8042);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c8045:L4c8045:{c.instructions+=4;NFSU2_TR(0x4c8045);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c8048:{NFSU2_TR(0x4c8048);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8049:{NFSU2_TR(0x4c8049);
__builtin_memmove((R+4),(R+24),4);
}
B4c804b:{NFSU2_TR(0x4c804b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c8050ull));
TAIL_STATIC(0x4ab4b0u,4ab);
}
B4c8050:L4c8050:{c.instructions+=2;NFSU2_TR(0x4c8050);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8051:{NFSU2_TR(0x4c8051);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c8056ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4c8056:L4c8056:{c.instructions+=3;NFSU2_TR(0x4c8056);
u8 U[4];
w4(U+0,u32(0xc2878ebcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c805b:{NFSU2_TR(0x4c805b);
__builtin_memmove((R+28),(R+0),4);
}
B4c805d:{NFSU2_TR(0x4c805d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c8062ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4c8062:L4c8062:{c.instructions+=11;NFSU2_TR(0x4c8062);
__builtin_memmove((R+4),gp(0x89e7cc),4);
}
B4c8068:{NFSU2_TR(0x4c8068);
__builtin_memmove((R+8),gp(0x89e7c8),4);
}
B4c806e:{NFSU2_TR(0x4c806e);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B4c8070:{NFSU2_TR(0x4c8070);
w4(R+8,u32(u32(r4(R+8))+u32(m4(0x89e7c4))));
}
B4c8076:{NFSU2_TR(0x4c8076);
__builtin_memmove((R+4),gp(0x89e7c0),4);
}
B4c807c:{NFSU2_TR(0x4c807c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4c807f:{NFSU2_TR(0x4c807f);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B4c8081:{NFSU2_TR(0x4c8081);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c8084:{NFSU2_TR(0x4c8084);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8085:{NFSU2_TR(0x4c8085);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8086:{NFSU2_TR(0x4c8086);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c80a7;}}
}
B4c8088:L4c8088:{c.instructions+=5;NFSU2_TR(0x4c8088);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4c808b:{NFSU2_TR(0x4c808b);
u8 U[4];
w4(U+0,u32(0x794fd8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8090:{NFSU2_TR(0x4c8090);
u8 U[4];
w4(U+0,u32(0xa7806ddbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8095:{NFSU2_TR(0x4c8095);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8096:{NFSU2_TR(0x4c8096);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c809bull));
TAIL_STATIC(0x537b80u,537);
}
B4c809b:L4c809b:{c.instructions+=7;NFSU2_TR(0x4c809b);
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
B4c809e:{NFSU2_TR(0x4c809e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4c809f:{NFSU2_TR(0x4c809f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c80a0:{NFSU2_TR(0x4c80a0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4c80a1:{NFSU2_TR(0x4c80a1);
__builtin_memmove((R+16),(R+20),4);
}
B4c80a3:{NFSU2_TR(0x4c80a3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4c80a4:{NFSU2_TR(0x4c80a4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c80a7:L4c80a7:{c.instructions+=6;NFSU2_TR(0x4c80a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c80aa:{NFSU2_TR(0x4c80aa);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c80ab:{NFSU2_TR(0x4c80ab);
u8 U[4];
w4(U+0,u32(0x795b20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c80b0:{NFSU2_TR(0x4c80b0);
u8 U[4];
w4(U+0,u32(0xa7806ddbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c80b5:{NFSU2_TR(0x4c80b5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c80b6:{NFSU2_TR(0x4c80b6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c80bbull));
TAIL_STATIC(0x537b80u,537);
}
B4c80bb:L4c80bb:{c.instructions+=7;NFSU2_TR(0x4c80bb);
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
B4c80be:{NFSU2_TR(0x4c80be);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4c80bf:{NFSU2_TR(0x4c80bf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c80c0:{NFSU2_TR(0x4c80c0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4c80c1:{NFSU2_TR(0x4c80c1);
__builtin_memmove((R+16),(R+20),4);
}
B4c80c3:{NFSU2_TR(0x4c80c3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4c80c4:{NFSU2_TR(0x4c80c4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c80c7:L4c80c7:{c.instructions+=4;NFSU2_TR(0x4c80c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c80ca:{NFSU2_TR(0x4c80ca);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c80cb:{NFSU2_TR(0x4c80cb);
__builtin_memmove((R+4),(R+24),4);
}
B4c80cd:{NFSU2_TR(0x4c80cd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c80d2ull));
TAIL_STATIC(0x4ab4b0u,4ab);
}
B4c80d2:L4c80d2:{c.instructions+=5;NFSU2_TR(0x4c80d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1d4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4c80d8:{NFSU2_TR(0x4c80d8);
__builtin_memmove((R+12),(R+0),4);
}
B4c80da:{NFSU2_TR(0x4c80da);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4c80dc:{NFSU2_TR(0x4c80dc);
{u32 ea_=u32(r4(R+0)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4c80df:{NFSU2_TR(0x4c80df);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c80e4ull));
TAIL_STATIC(0x75bed4u,75b);
}
B4c80e4:L4c80e4:{c.instructions+=3;NFSU2_TR(0x4c80e4);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c80e5:{NFSU2_TR(0x4c80e5);
__builtin_memmove((R+28),(R+0),4);
}
B4c80e7:{NFSU2_TR(0x4c80e7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c80ecull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4c80ec:L4c80ec:{c.instructions+=3;NFSU2_TR(0x4c80ec);
u8 U[4];
w4(U+0,u32(0x13640de9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c80f1:{NFSU2_TR(0x4c80f1);
__builtin_memmove((R+12),(R+0),4);
}
B4c80f3:{NFSU2_TR(0x4c80f3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c80f8ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4c80f8:L4c80f8:{c.instructions+=11;NFSU2_TR(0x4c80f8);
__builtin_memmove((R+8),gp(0x89e7cc),4);
}
B4c80fe:{NFSU2_TR(0x4c80fe);
__builtin_memmove((R+4),gp(0x89e7c8),4);
}
B4c8104:{NFSU2_TR(0x4c8104);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B4c8106:{NFSU2_TR(0x4c8106);
w4(R+4,u32(u32(r4(R+4))+u32(m4(0x89e7c4))));
}
B4c810c:{NFSU2_TR(0x4c810c);
__builtin_memmove((R+8),gp(0x89e7c0),4);
}
B4c8112:{NFSU2_TR(0x4c8112);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4c8115:{NFSU2_TR(0x4c8115);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B4c8117:{NFSU2_TR(0x4c8117);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c811a:{NFSU2_TR(0x4c811a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c811b:{NFSU2_TR(0x4c811b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c811c:{NFSU2_TR(0x4c811c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c813d;}}
}
B4c811e:L4c811e:{c.instructions+=5;NFSU2_TR(0x4c811e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c8121:{NFSU2_TR(0x4c8121);
u8 U[4];
w4(U+0,u32(0x790980ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8126:{NFSU2_TR(0x4c8126);
u8 U[4];
w4(U+0,u32(0xa7806ddbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c812b:{NFSU2_TR(0x4c812b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c812c:{NFSU2_TR(0x4c812c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c8131ull));
TAIL_STATIC(0x537b80u,537);
}
B4c8131:L4c8131:{c.instructions+=7;NFSU2_TR(0x4c8131);
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
B4c8134:{NFSU2_TR(0x4c8134);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4c8135:{NFSU2_TR(0x4c8135);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c8136:{NFSU2_TR(0x4c8136);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4c8137:{NFSU2_TR(0x4c8137);
__builtin_memmove((R+16),(R+20),4);
}
B4c8139:{NFSU2_TR(0x4c8139);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4c813a:{NFSU2_TR(0x4c813a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c813d:L4c813d:{c.instructions+=6;NFSU2_TR(0x4c813d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c8140:{NFSU2_TR(0x4c8140);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8141:{NFSU2_TR(0x4c8141);
u8 U[4];
w4(U+0,u32(0x795b14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8146:{NFSU2_TR(0x4c8146);
u8 U[4];
w4(U+0,u32(0xa7806ddbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c814b:{NFSU2_TR(0x4c814b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c814c:{NFSU2_TR(0x4c814c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c8151ull));
TAIL_STATIC(0x537b80u,537);
}
B4c8151:L4c8151:{c.instructions+=7;NFSU2_TR(0x4c8151);
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
B4c8154:{NFSU2_TR(0x4c8154);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4c8155:{NFSU2_TR(0x4c8155);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c8156:{NFSU2_TR(0x4c8156);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4c8157:{NFSU2_TR(0x4c8157);
__builtin_memmove((R+16),(R+20),4);
}
B4c8159:{NFSU2_TR(0x4c8159);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4c815a:{NFSU2_TR(0x4c815a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c815d:L4c815d:{c.instructions+=4;NFSU2_TR(0x4c815d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4c8160:{NFSU2_TR(0x4c8160);
u8 U[4];
w4(U+0,u32(0x1b59940cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8165:{NFSU2_TR(0x4c8165);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8166:{NFSU2_TR(0x4c8166);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c816bull));
TAIL_STATIC(0x50c900u,50c);
}
B4c816b:L4c816b:{c.instructions+=7;NFSU2_TR(0x4c816b);
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
B4c816e:{NFSU2_TR(0x4c816e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4c816f:{NFSU2_TR(0x4c816f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c8170:{NFSU2_TR(0x4c8170);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4c8171:{NFSU2_TR(0x4c8171);
__builtin_memmove((R+16),(R+20),4);
}
B4c8173:{NFSU2_TR(0x4c8173);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4c8174:{NFSU2_TR(0x4c8174);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c8177:L4c8177:{c.instructions+=2;NFSU2_TR(0x4c8177);
u8 U[8];
__builtin_memmove((U+0),gp(0x850078),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c817e:{NFSU2_TR(0x4c817e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c81f2;}}
}
B4c8180:L4c8180:{c.instructions+=2;NFSU2_TR(0x4c8180);
w4(R+4,u32(0x83a9d0ull));
}
B4c8185:{NFSU2_TR(0x4c8185);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c818aull));
TAIL_STATIC(0x4ae8d0u,4ae);
}
B4c818a:L4c818a:{c.instructions+=2;NFSU2_TR(0x4c818a);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4c818c:{NFSU2_TR(0x4c818c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c81f2;}}
}
B4c818e:L4c818e:{c.instructions+=2;NFSU2_TR(0x4c818e);
w4(R+4,u32(0x83a9d0ull));
}
B4c8193:{NFSU2_TR(0x4c8193);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c8198ull));
TAIL_STATIC(0x457ba0u,457);
}
B4c8198:L4c8198:{c.instructions+=2;NFSU2_TR(0x4c8198);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4c819a:{NFSU2_TR(0x4c819a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c81f2;}}
}
B4c819c:L4c819c:{c.instructions+=4;NFSU2_TR(0x4c819c);
__builtin_memmove((R+0),gp(0x862838),4);
}
B4c81a1:{NFSU2_TR(0x4c81a1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c81a2:{NFSU2_TR(0x4c81a2);
w4(R+4,u32(0x85ad40ull));
}
B4c81a7:{NFSU2_TR(0x4c81a7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c81acull));
TAIL_STATIC(0x500c60u,500);
}
B4c81ac:L4c81ac:{c.instructions+=3;NFSU2_TR(0x4c81ac);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c81ad:{NFSU2_TR(0x4c81ad);
u8 U[4];
w4(U+0,u32(0x5d10f6afull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c81b2:{NFSU2_TR(0x4c81b2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c81b7ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4c81b7:L4c81b7:{c.instructions+=5;NFSU2_TR(0x4c81b7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4c81ba:{NFSU2_TR(0x4c81ba);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c81bb:{NFSU2_TR(0x4c81bb);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c81bc:{NFSU2_TR(0x4c81bc);
u8 U[4];
w4(U+0,u32(0xc2878ebcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c81c1:{NFSU2_TR(0x4c81c1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c81c6ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4c81c6:L4c81c6:{c.instructions+=4;NFSU2_TR(0x4c81c6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4c81c9:{NFSU2_TR(0x4c81c9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c81ca:{NFSU2_TR(0x4c81ca);
u8 U[4];
w4(U+0,u32(0xdc089c64ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c81cf:{NFSU2_TR(0x4c81cf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c81d4ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4c81d4:L4c81d4:{c.instructions+=6;NFSU2_TR(0x4c81d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c81d7:{NFSU2_TR(0x4c81d7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4c81da:{NFSU2_TR(0x4c81da);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c81db:{NFSU2_TR(0x4c81db);
u8 U[4];
w4(U+0,u32(0x795b04ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c81e0:{NFSU2_TR(0x4c81e0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c81e1:{NFSU2_TR(0x4c81e1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c81e6ull));
TAIL_STATIC(0x537be0u,537);
}
B4c81e6:L4c81e6:{c.instructions+=7;NFSU2_TR(0x4c81e6);
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
B4c81e9:{NFSU2_TR(0x4c81e9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4c81ea:{NFSU2_TR(0x4c81ea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c81eb:{NFSU2_TR(0x4c81eb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4c81ec:{NFSU2_TR(0x4c81ec);
__builtin_memmove((R+16),(R+20),4);
}
B4c81ee:{NFSU2_TR(0x4c81ee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4c81ef:{NFSU2_TR(0x4c81ef);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c81f2:L4c81f2:{c.instructions+=3;NFSU2_TR(0x4c81f2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c81f3:{NFSU2_TR(0x4c81f3);
u8 U[4];
w4(U+0,u32(0xc2878ebcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c81f8:{NFSU2_TR(0x4c81f8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c81fdull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4c81fd:L4c81fd:{c.instructions+=4;NFSU2_TR(0x4c81fd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4c8200:{NFSU2_TR(0x4c8200);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8201:{NFSU2_TR(0x4c8201);
u8 U[4];
w4(U+0,u32(0xdc089c64ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8206:{NFSU2_TR(0x4c8206);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c820bull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4c820b:L4c820b:{c.instructions+=6;NFSU2_TR(0x4c820b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4c820e:{NFSU2_TR(0x4c820e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4c8211:{NFSU2_TR(0x4c8211);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8212:{NFSU2_TR(0x4c8212);
u8 U[4];
w4(U+0,u32(0x795b20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8217:{NFSU2_TR(0x4c8217);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8218:{NFSU2_TR(0x4c8218);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c821dull));
TAIL_STATIC(0x537be0u,537);
}
B4c821d:L4c821d:{c.instructions+=7;NFSU2_TR(0x4c821d);
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
B4c8220:{NFSU2_TR(0x4c8220);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4c8221:{NFSU2_TR(0x4c8221);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c8222:{NFSU2_TR(0x4c8222);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4c8223:{NFSU2_TR(0x4c8223);
__builtin_memmove((R+16),(R+20),4);
}
B4c8225:{NFSU2_TR(0x4c8225);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4c8226:{NFSU2_TR(0x4c8226);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c8229:L4c8229:{c.instructions+=5;NFSU2_TR(0x4c8229);
u8 U[4];
w4(U+0,u32(0xc2878ebcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c822e:{NFSU2_TR(0x4c822e);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4c8231:{NFSU2_TR(0x4c8231);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8233:{NFSU2_TR(0x4c8233);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8234:{NFSU2_TR(0x4c8234);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c8239ull));
TAIL_STATIC(0x4ffa50u,4ff);
}
B4c8239:L4c8239:{c.instructions+=5;NFSU2_TR(0x4c8239);
u8 U[4];
w4(U+0,u32(0x5d1621b2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c823e:{NFSU2_TR(0x4c823e);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff78ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4c8244:{NFSU2_TR(0x4c8244);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8246:{NFSU2_TR(0x4c8246);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8247:{NFSU2_TR(0x4c8247);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c824cull));
TAIL_STATIC(0x4ffa50u,4ff);
}
B4c824c:L4c824c:{c.instructions+=9;NFSU2_TR(0x4c824c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c824f:{NFSU2_TR(0x4c824f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8250:{NFSU2_TR(0x4c8250);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((R+8),(U+0),4);
}
B4c8253:{NFSU2_TR(0x4c8253);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8254:{NFSU2_TR(0x4c8254);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff78ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4c825a:{NFSU2_TR(0x4c825a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c825b:{NFSU2_TR(0x4c825b);
u8 U[4];
w4(U+0,u32(0x795b20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8260:{NFSU2_TR(0x4c8260);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8261:{NFSU2_TR(0x4c8261);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c8266ull));
TAIL_STATIC(0x537be0u,537);
}
B4c8266:L4c8266:{c.instructions+=7;NFSU2_TR(0x4c8266);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x2cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x2cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x2cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4c8269:{NFSU2_TR(0x4c8269);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4c826a:{NFSU2_TR(0x4c826a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c826b:{NFSU2_TR(0x4c826b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4c826c:{NFSU2_TR(0x4c826c);
__builtin_memmove((R+16),(R+20),4);
}
B4c826e:{NFSU2_TR(0x4c826e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4c826f:{NFSU2_TR(0x4c826f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c8272:L4c8272:{c.instructions+=3;NFSU2_TR(0x4c8272);
__builtin_memmove((R+0),gp(0x850078),4);
}
B4c8277:{NFSU2_TR(0x4c8277);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c827a:{NFSU2_TR(0x4c827a);
if(r1(R+518)){{goto L4c829d;}}
}
B4c827c:L4c827c:{c.instructions+=2;NFSU2_TR(0x4c827c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x200ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c8281:{NFSU2_TR(0x4c8281);
if(r1(R+518)){{goto L4c829d;}}
}
B4c8283:L4c8283:{c.instructions+=4;NFSU2_TR(0x4c8283);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4c8286:{NFSU2_TR(0x4c8286);
u8 U[4];
w4(U+0,u32(0x7449d26dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c828b:{NFSU2_TR(0x4c828b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c828c:{NFSU2_TR(0x4c828c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c8291ull));
TAIL_STATIC(0x50c900u,50c);
}
B4c8291:L4c8291:{c.instructions+=7;NFSU2_TR(0x4c8291);
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
B4c8294:{NFSU2_TR(0x4c8294);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4c8295:{NFSU2_TR(0x4c8295);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c8296:{NFSU2_TR(0x4c8296);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4c8297:{NFSU2_TR(0x4c8297);
__builtin_memmove((R+16),(R+20),4);
}
B4c8299:{NFSU2_TR(0x4c8299);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4c829a:{NFSU2_TR(0x4c829a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c829d:L4c829d:{c.instructions+=5;NFSU2_TR(0x4c829d);
u8 U[4];
w4(U+0,u32(0x7449d26dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c82a2:{NFSU2_TR(0x4c82a2);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4c82a5:{NFSU2_TR(0x4c82a5);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c82a7:{NFSU2_TR(0x4c82a7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c82a8:{NFSU2_TR(0x4c82a8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c82adull));
TAIL_STATIC(0x4ffa50u,4ff);
}
B4c82ad:L4c82ad:{c.instructions+=5;NFSU2_TR(0x4c82ad);
u8 U[4];
w4(U+0,u32(0xe863dd5cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c82b2:{NFSU2_TR(0x4c82b2);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff78ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4c82b8:{NFSU2_TR(0x4c82b8);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c82ba:{NFSU2_TR(0x4c82ba);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c82bb:{NFSU2_TR(0x4c82bb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c82c0ull));
TAIL_STATIC(0x4ffa50u,4ff);
}
B4c82c0:L4c82c0:{c.instructions+=8;NFSU2_TR(0x4c82c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c82c3:{NFSU2_TR(0x4c82c3);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff78ull))));
__builtin_memmove((R+8),(U+0),4);
}
B4c82c9:{NFSU2_TR(0x4c82c9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c82ca:{NFSU2_TR(0x4c82ca);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4c82cd:{NFSU2_TR(0x4c82cd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c82ce:{NFSU2_TR(0x4c82ce);
u8 U[4];
w4(U+0,u32(0x795afcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c82d3:{NFSU2_TR(0x4c82d3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c82d4:{NFSU2_TR(0x4c82d4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c82d9ull));
TAIL_STATIC(0x537be0u,537);
}
B4c82d9:L4c82d9:{c.instructions+=7;NFSU2_TR(0x4c82d9);
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
B4c82dc:{NFSU2_TR(0x4c82dc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4c82dd:{NFSU2_TR(0x4c82dd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c82de:{NFSU2_TR(0x4c82de);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4c82df:{NFSU2_TR(0x4c82df);
__builtin_memmove((R+16),(R+20),4);
}
B4c82e1:{NFSU2_TR(0x4c82e1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4c82e2:{NFSU2_TR(0x4c82e2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c82e5:L4c82e5:{c.instructions+=3;NFSU2_TR(0x4c82e5);
__builtin_memmove((R+0),gp(0x850078),4);
}
B4c82ea:{NFSU2_TR(0x4c82ea);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c82ed:{NFSU2_TR(0x4c82ed);
if(r1(R+518)){{goto L4c8310;}}
}
B4c82ef:L4c82ef:{c.instructions+=2;NFSU2_TR(0x4c82ef);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x200ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c82f4:{NFSU2_TR(0x4c82f4);
if(r1(R+518)){{goto L4c8310;}}
}
B4c82f6:L4c82f6:{c.instructions+=4;NFSU2_TR(0x4c82f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4c82f9:{NFSU2_TR(0x4c82f9);
u8 U[4];
w4(U+0,u32(0x4ba0d22full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c82fe:{NFSU2_TR(0x4c82fe);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c82ff:{NFSU2_TR(0x4c82ff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c8304ull));
TAIL_STATIC(0x50c900u,50c);
}
B4c8304:L4c8304:{c.instructions+=7;NFSU2_TR(0x4c8304);
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
B4c8307:{NFSU2_TR(0x4c8307);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4c8308:{NFSU2_TR(0x4c8308);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c8309:{NFSU2_TR(0x4c8309);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4c830a:{NFSU2_TR(0x4c830a);
__builtin_memmove((R+16),(R+20),4);
}
B4c830c:{NFSU2_TR(0x4c830c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4c830d:{NFSU2_TR(0x4c830d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c8310:L4c8310:{c.instructions+=5;NFSU2_TR(0x4c8310);
u8 U[4];
w4(U+0,u32(0x4ba0d22full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8315:{NFSU2_TR(0x4c8315);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4c8318:{NFSU2_TR(0x4c8318);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c831a:{NFSU2_TR(0x4c831a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c831b:{NFSU2_TR(0x4c831b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c8320ull));
TAIL_STATIC(0x4ffa50u,4ff);
}
B4c8320:L4c8320:{c.instructions+=5;NFSU2_TR(0x4c8320);
u8 U[4];
w4(U+0,u32(0xe863dd5cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8325:{NFSU2_TR(0x4c8325);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff78ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4c832b:{NFSU2_TR(0x4c832b);
u8 U[4];
w4(U+0,u32(0x40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c832d:{NFSU2_TR(0x4c832d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c832e:{NFSU2_TR(0x4c832e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c8333ull));
TAIL_STATIC(0x4ffa50u,4ff);
}
B4c8333:L4c8333:{c.instructions+=8;NFSU2_TR(0x4c8333);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c8336:{NFSU2_TR(0x4c8336);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff78ull))));
__builtin_memmove((R+8),(U+0),4);
}
B4c833c:{NFSU2_TR(0x4c833c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c833d:{NFSU2_TR(0x4c833d);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4c8340:{NFSU2_TR(0x4c8340);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8341:{NFSU2_TR(0x4c8341);
u8 U[4];
w4(U+0,u32(0x795af4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8346:{NFSU2_TR(0x4c8346);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8347:{NFSU2_TR(0x4c8347);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c834cull));
TAIL_STATIC(0x537be0u,537);
}
B4c834c:L4c834c:{c.instructions+=7;NFSU2_TR(0x4c834c);
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
B4c834f:{NFSU2_TR(0x4c834f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4c8350:{NFSU2_TR(0x4c8350);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c8351:{NFSU2_TR(0x4c8351);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4c8352:{NFSU2_TR(0x4c8352);
__builtin_memmove((R+16),(R+20),4);
}
B4c8354:{NFSU2_TR(0x4c8354);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4c8355:{NFSU2_TR(0x4c8355);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c8358:L4c8358:{c.instructions+=4;NFSU2_TR(0x4c8358);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4c835b:{NFSU2_TR(0x4c835b);
u8 U[4];
w4(U+0,u32(0x668c7453ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8360:{NFSU2_TR(0x4c8360);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8361:{NFSU2_TR(0x4c8361);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c8366ull));
TAIL_STATIC(0x50c900u,50c);
}
B4c8366:L4c8366:{c.instructions+=7;NFSU2_TR(0x4c8366);
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
B4c8369:{NFSU2_TR(0x4c8369);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4c836a:{NFSU2_TR(0x4c836a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c836b:{NFSU2_TR(0x4c836b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4c836c:{NFSU2_TR(0x4c836c);
__builtin_memmove((R+16),(R+20),4);
}
B4c836e:{NFSU2_TR(0x4c836e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4c836f:{NFSU2_TR(0x4c836f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c8372:L4c8372:{c.instructions+=2;NFSU2_TR(0x4c8372);
w4(R+4,u32(0x89cf48ull));
}
B4c8377:{NFSU2_TR(0x4c8377);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c837cull));
TAIL_STATIC(0x5f0120u,5f0);
}
B4c837c:L4c837c:{c.instructions+=3;NFSU2_TR(0x4c837c);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4c837e:{NFSU2_TR(0x4c837e);
u8 U[4];
w4(U+0,u32(0x4a8764a8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8383:{NFSU2_TR(0x4c8383);
if(r1(R+518)){{goto L4c839a;}}
}
B4c8385:L4c8385:{c.instructions+=3;NFSU2_TR(0x4c8385);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c8388:{NFSU2_TR(0x4c8388);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8389:{NFSU2_TR(0x4c8389);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c838eull));
TAIL_STATIC(0x50c900u,50c);
}
B4c838e:L4c838e:{c.instructions+=7;NFSU2_TR(0x4c838e);
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
B4c8391:{NFSU2_TR(0x4c8391);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4c8392:{NFSU2_TR(0x4c8392);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c8393:{NFSU2_TR(0x4c8393);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4c8394:{NFSU2_TR(0x4c8394);
__builtin_memmove((R+16),(R+20),4);
}
B4c8396:{NFSU2_TR(0x4c8396);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4c8397:{NFSU2_TR(0x4c8397);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c839a:L4c839a:{c.instructions+=3;NFSU2_TR(0x4c839a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c839d:{NFSU2_TR(0x4c839d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c839e:{NFSU2_TR(0x4c839e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c83a3ull));
TAIL_STATIC(0x50c900u,50c);
}
B4c83a3:L4c83a3:{c.instructions+=7;NFSU2_TR(0x4c83a3);
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
B4c83a6:{NFSU2_TR(0x4c83a6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4c83a7:{NFSU2_TR(0x4c83a7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c83a8:{NFSU2_TR(0x4c83a8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4c83a9:{NFSU2_TR(0x4c83a9);
__builtin_memmove((R+16),(R+20),4);
}
B4c83ab:{NFSU2_TR(0x4c83ab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4c83ac:{NFSU2_TR(0x4c83ac);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c83af:L4c83af:{c.instructions+=4;NFSU2_TR(0x4c83af);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4c83b2:{NFSU2_TR(0x4c83b2);
u8 U[4];
w4(U+0,u32(0xa074449full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c83b7:{NFSU2_TR(0x4c83b7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c83b8:{NFSU2_TR(0x4c83b8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c83bdull));
TAIL_STATIC(0x50c900u,50c);
}
B4c83bd:L4c83bd:{c.instructions+=7;NFSU2_TR(0x4c83bd);
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
B4c83c0:{NFSU2_TR(0x4c83c0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4c83c1:{NFSU2_TR(0x4c83c1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c83c2:{NFSU2_TR(0x4c83c2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4c83c3:{NFSU2_TR(0x4c83c3);
__builtin_memmove((R+16),(R+20),4);
}
B4c83c5:{NFSU2_TR(0x4c83c5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4c83c6:{NFSU2_TR(0x4c83c6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c83c9:L4c83c9:{c.instructions+=1;NFSU2_TR(0x4c83c9);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x29ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4c83cd:L4c83cd:{c.instructions+=6;NFSU2_TR(0x4c83cd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4c83ce:{NFSU2_TR(0x4c83ce);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c83cf:{NFSU2_TR(0x4c83cf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4c83d0:{NFSU2_TR(0x4c83d0);
__builtin_memmove((R+16),(R+20),4);
}
B4c83d2:{NFSU2_TR(0x4c83d2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4c83d3:{NFSU2_TR(0x4c83d3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c8410:L4c8410:{c.instructions+=8;NFSU2_TR(0x4c8410);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8411:{NFSU2_TR(0x4c8411);
__builtin_memmove((R+20),(R+16),4);
}
B4c8413:{NFSU2_TR(0x4c8413);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B4c8416:{NFSU2_TR(0x4c8416);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8417:{NFSU2_TR(0x4c8417);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8418:{NFSU2_TR(0x4c8418);
__builtin_memmove((R+24),(R+4),4);
}
B4c841a:{NFSU2_TR(0x4c841a);
w4(R+4,u32(0x838590ull));
}
B4c841f:{NFSU2_TR(0x4c841f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c8424ull));
TAIL_STATIC(0x501100u,501);
}
B4c8424:L4c8424:{c.instructions+=2;NFSU2_TR(0x4c8424);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c8427:{NFSU2_TR(0x4c8427);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c8445;}}
}
B4c8429:L4c8429:{c.instructions+=3;NFSU2_TR(0x4c8429);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c842c:{NFSU2_TR(0x4c842c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c842d:{NFSU2_TR(0x4c842d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c8432ull));
TAIL_STATIC(0x50ca50u,50c);
}
B4c8432:L4c8432:{c.instructions+=4;NFSU2_TR(0x4c8432);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c8435:{NFSU2_TR(0x4c8435);
u8 U[4];
w4(U+0,u32(0x155409e8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c843a:{NFSU2_TR(0x4c843a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c843b:{NFSU2_TR(0x4c843b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c8440ull));
TAIL_STATIC(0x50c900u,50c);
}
B4c8440:L4c8440:{c.instructions+=2;NFSU2_TR(0x4c8440);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4c8443:{NFSU2_TR(0x4c8443);
{goto L4c847c;}
}
B4c8445:L4c8445:{c.instructions+=2;NFSU2_TR(0x4c8445);
w4(R+4,u32(0x838590ull));
}
B4c844a:{NFSU2_TR(0x4c844a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c844full));
TAIL_STATIC(0x501100u,501);
}
B4c844f:L4c844f:{c.instructions+=2;NFSU2_TR(0x4c844f);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c8452:{NFSU2_TR(0x4c8452);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c8470;}}
}
B4c8454:L4c8454:{c.instructions+=3;NFSU2_TR(0x4c8454);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4c8457:{NFSU2_TR(0x4c8457);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8458:{NFSU2_TR(0x4c8458);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c845dull));
TAIL_STATIC(0x50ca50u,50c);
}
B4c845d:L4c845d:{c.instructions+=4;NFSU2_TR(0x4c845d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c8460:{NFSU2_TR(0x4c8460);
u8 U[4];
w4(U+0,u32(0x31139b65ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8465:{NFSU2_TR(0x4c8465);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8466:{NFSU2_TR(0x4c8466);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c846bull));
TAIL_STATIC(0x50c900u,50c);
}
B4c846b:L4c846b:{c.instructions+=2;NFSU2_TR(0x4c846b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4c846e:{NFSU2_TR(0x4c846e);
{goto L4c847c;}
}
B4c8470:L4c8470:{c.instructions+=3;NFSU2_TR(0x4c8470);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c8473:{NFSU2_TR(0x4c8473);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8474:{NFSU2_TR(0x4c8474);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c8479ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4c8479:L4c8479:{c.instructions+=1;NFSU2_TR(0x4c8479);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4c847c:L4c847c:{c.instructions+=3;NFSU2_TR(0x4c847c);
w4(R+4,u32(0x838590ull));
}
B4c8481:{NFSU2_TR(0x4c8481);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffffull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4c8485:{NFSU2_TR(0x4c8485);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c848aull));
TAIL_STATIC(0x501100u,501);
}
B4c848a:L4c848a:{c.instructions+=2;NFSU2_TR(0x4c848a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c848c:{NFSU2_TR(0x4c848c);
if(r1(R+518)){{goto L4c84ac;}}
}
B4c848e:L4c848e:{c.instructions+=2;NFSU2_TR(0x4c848e);
w4(R+4,u32(0x838590ull));
}
B4c8493:{NFSU2_TR(0x4c8493);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c8498ull));
TAIL_STATIC(0x501100u,501);
}
B4c8498:L4c8498:{c.instructions+=2;NFSU2_TR(0x4c8498);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c849b:{NFSU2_TR(0x4c849b);
if(r1(R+518)){{goto L4c84ac;}}
}
B4c849d:L4c849d:{c.instructions+=2;NFSU2_TR(0x4c849d);
w4(R+4,u32(0x838590ull));
}
B4c84a2:{NFSU2_TR(0x4c84a2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c84a7ull));
TAIL_STATIC(0x501100u,501);
}
B4c84a7:L4c84a7:{c.instructions+=2;NFSU2_TR(0x4c84a7);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c84aa:{NFSU2_TR(0x4c84aa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c84c1;}}
}
B4c84ac:L4c84ac:{c.instructions+=3;NFSU2_TR(0x4c84ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4c84af:{NFSU2_TR(0x4c84af);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c84b0:{NFSU2_TR(0x4c84b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c84b5ull));
TAIL_STATIC(0x50ca50u,50c);
}
B4c84b5:L4c84b5:{c.instructions+=3;NFSU2_TR(0x4c84b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c84b8:{NFSU2_TR(0x4c84b8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c84b9:{NFSU2_TR(0x4c84b9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c84beull));
TAIL_STATIC(0x50ca50u,50c);
}
B4c84be:L4c84be:{c.instructions+=1;NFSU2_TR(0x4c84be);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4c84c1:L4c84c1:{c.instructions+=2;NFSU2_TR(0x4c84c1);
w4(R+4,u32(0x838590ull));
}
B4c84c6:{NFSU2_TR(0x4c84c6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c84cbull));
TAIL_STATIC(0x501100u,501);
}
B4c84cb:L4c84cb:{c.instructions+=2;NFSU2_TR(0x4c84cb);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c84ce:{NFSU2_TR(0x4c84ce);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c84e9;}}
}
B4c84d0:L4c84d0:{c.instructions+=4;NFSU2_TR(0x4c84d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c84d3:{NFSU2_TR(0x4c84d3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c84d4:{NFSU2_TR(0x4c84d4);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffffull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4c84d8:{NFSU2_TR(0x4c84d8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c84ddull));
TAIL_STATIC(0x50ca00u,50c);
}
B4c84dd:L4c84dd:{c.instructions+=3;NFSU2_TR(0x4c84dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4c84e0:{NFSU2_TR(0x4c84e0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c84e1:{NFSU2_TR(0x4c84e1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c84e6ull));
TAIL_STATIC(0x50ca50u,50c);
}
B4c84e6:L4c84e6:{c.instructions+=1;NFSU2_TR(0x4c84e6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4c84e9:L4c84e9:{c.instructions+=5;NFSU2_TR(0x4c84e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c84ec:{NFSU2_TR(0x4c84ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c84ef:{NFSU2_TR(0x4c84ef);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4c84f3:{NFSU2_TR(0x4c84f3);
w1(R+12,u8(0x1ull));
}
B4c84f5:{NFSU2_TR(0x4c84f5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c8510;}}
}
B4c84f7:L4c84f7:{c.instructions+=4;NFSU2_TR(0x4c84f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c84fa:{NFSU2_TR(0x4c84fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3e4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c8500:{NFSU2_TR(0x4c8500);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c8503:{NFSU2_TR(0x4c8503);
if(r1(R+518)){{goto L4c850e;}}
}
B4c8505:L4c8505:{c.instructions+=2;NFSU2_TR(0x4c8505);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c8508:{NFSU2_TR(0x4c8508);
if(r1(R+518)){{goto L4c850e;}}
}
B4c850a:L4c850a:{c.instructions+=2;NFSU2_TR(0x4c850a);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
}
B4c850c:{NFSU2_TR(0x4c850c);
{goto L4c8510;}
}
B4c850e:L4c850e:{c.instructions+=1;NFSU2_TR(0x4c850e);
w1(R+12,u8(0x1ull));
}
B4c8510:L4c8510:{c.instructions+=2;NFSU2_TR(0x4c8510);
w4(R+4,u32(0x838590ull));
}
B4c8515:{NFSU2_TR(0x4c8515);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c851aull));
TAIL_STATIC(0x501100u,501);
}
B4c851a:L4c851a:{c.instructions+=2;NFSU2_TR(0x4c851a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c851c:{NFSU2_TR(0x4c851c);
if(r1(R+518)){{goto L4c854b;}}
}
B4c851e:L4c851e:{c.instructions+=2;NFSU2_TR(0x4c851e);
w4(R+4,u32(0x838590ull));
}
B4c8523:{NFSU2_TR(0x4c8523);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c8528ull));
TAIL_STATIC(0x501100u,501);
}
B4c8528:L4c8528:{c.instructions+=2;NFSU2_TR(0x4c8528);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c852b:{NFSU2_TR(0x4c852b);
if(r1(R+518)){{goto L4c854b;}}
}
B4c852d:L4c852d:{c.instructions+=2;NFSU2_TR(0x4c852d);
w4(R+4,u32(0x838590ull));
}
B4c8532:{NFSU2_TR(0x4c8532);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c8537ull));
TAIL_STATIC(0x501100u,501);
}
B4c8537:L4c8537:{c.instructions+=2;NFSU2_TR(0x4c8537);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c853a:{NFSU2_TR(0x4c853a);
if(r1(R+518)){{goto L4c854b;}}
}
B4c853c:L4c853c:{c.instructions+=2;NFSU2_TR(0x4c853c);
w4(R+4,u32(0x838590ull));
}
B4c8541:{NFSU2_TR(0x4c8541);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c8546ull));
TAIL_STATIC(0x501100u,501);
}
B4c8546:L4c8546:{c.instructions+=2;NFSU2_TR(0x4c8546);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c8549:{NFSU2_TR(0x4c8549);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c854f;}}
}
B4c854b:L4c854b:{c.instructions+=2;NFSU2_TR(0x4c854b);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4c854d:{NFSU2_TR(0x4c854d);
if(r1(R+518)){{goto L4c8564;}}
}
B4c854f:L4c854f:{c.instructions+=3;NFSU2_TR(0x4c854f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c8552:{NFSU2_TR(0x4c8552);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8553:{NFSU2_TR(0x4c8553);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c8558ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4c8558:L4c8558:{c.instructions+=3;NFSU2_TR(0x4c8558);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4c855b:{NFSU2_TR(0x4c855b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c855c:{NFSU2_TR(0x4c855c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c8561ull));
TAIL_STATIC(0x50ca50u,50c);
}
B4c8561:L4c8561:{c.instructions+=1;NFSU2_TR(0x4c8561);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4c8564:L4c8564:{c.instructions+=6;NFSU2_TR(0x4c8564);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4c8567:{NFSU2_TR(0x4c8567);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8568:{NFSU2_TR(0x4c8568);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4c856b:{NFSU2_TR(0x4c856b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c856c:{NFSU2_TR(0x4c856c);
w4(R+4,u32(0x838590ull));
}
B4c8571:{NFSU2_TR(0x4c8571);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c8576ull));
TAIL_STATIC(0x5010c0u,501);
}
B4c8576:L4c8576:{c.instructions+=7;NFSU2_TR(0x4c8576);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4c8579:{NFSU2_TR(0x4c8579);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c857c:{NFSU2_TR(0x4c857c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c857f:{NFSU2_TR(0x4c857f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8580:{NFSU2_TR(0x4c8580);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8581:{NFSU2_TR(0x4c8581);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8582:{NFSU2_TR(0x4c8582);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c8587ull));
TAIL_STATIC(0x51d4d0u,51d);
}
B4c8587:L4c8587:{c.instructions+=4;NFSU2_TR(0x4c8587);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x35ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4c858a:{NFSU2_TR(0x4c858a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4c858d:{NFSU2_TR(0x4c858d);
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
B4c858f:{NFSU2_TR(0x4c858f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c85b4;}}
}
B4c8591:L4c8591:{c.instructions+=3;NFSU2_TR(0x4c8591);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B4c8594:{NFSU2_TR(0x4c8594);
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
B4c8596:{NFSU2_TR(0x4c8596);
if(r1(R+518)){{goto L4c85a9;}}
}
B4c8598:L4c8598:{c.instructions+=3;NFSU2_TR(0x4c8598);
__builtin_memmove((R+4),gp(0x82b884),4);
}
B4c859e:{NFSU2_TR(0x4c859e);
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
B4c85a0:{NFSU2_TR(0x4c85a0);
if(r1(R+518)){{goto L4c85a9;}}
}
B4c85a2:L4c85a2:{c.instructions+=2;NFSU2_TR(0x4c85a2);
u8 U[4];
w4(U+0,u32(0x12ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c85a4:{NFSU2_TR(0x4c85a4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c85a9ull));
TAIL_STATIC(0x458520u,458);
}
B4c85a9:L4c85a9:{c.instructions+=6;NFSU2_TR(0x4c85a9);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x35ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4c85ac:{NFSU2_TR(0x4c85ac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c85ad:{NFSU2_TR(0x4c85ad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4c85ae:{NFSU2_TR(0x4c85ae);
__builtin_memmove((R+16),(R+20),4);
}
B4c85b0:{NFSU2_TR(0x4c85b0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4c85b1:{NFSU2_TR(0x4c85b1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c85b4:L4c85b4:{c.instructions+=7;NFSU2_TR(0x4c85b4);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B4c85b7:{NFSU2_TR(0x4c85b7);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x35ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4c85ba:{NFSU2_TR(0x4c85ba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c85bb:{NFSU2_TR(0x4c85bb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4c85bc:{NFSU2_TR(0x4c85bc);
__builtin_memmove((R+16),(R+20),4);
}
B4c85be:{NFSU2_TR(0x4c85be);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4c85bf:{NFSU2_TR(0x4c85bf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c85d0:L4c85d0:{c.instructions+=17;NFSU2_TR(0x4c85d0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x24ull))));
}
B4c85d3:{NFSU2_TR(0x4c85d3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c85d4:{NFSU2_TR(0x4c85d4);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c85d5:{NFSU2_TR(0x4c85d5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c85d6:{NFSU2_TR(0x4c85d6);
__builtin_memmove((R+24),(R+4),4);
}
B4c85d8:{NFSU2_TR(0x4c85d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c85db:{NFSU2_TR(0x4c85db);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8900acull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B4c85e2:{NFSU2_TR(0x4c85e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x9a4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4c85e8:{NFSU2_TR(0x4c85e8);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c85ec:{NFSU2_TR(0x4c85ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c85ef:{NFSU2_TR(0x4c85ef);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c85f0:{NFSU2_TR(0x4c85f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4c85f3:{NFSU2_TR(0x4c85f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4c85f6:{NFSU2_TR(0x4c85f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1d4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c85fc:{NFSU2_TR(0x4c85fc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+12),(U+0),4);
}
B4c85fe:{NFSU2_TR(0x4c85fe);
{u32 ea_=u32(r4(R+12)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4c8601:{NFSU2_TR(0x4c8601);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c8606ull));
TAIL_STATIC(0x75bed4u,75b);
}
B4c8606:L4c8606:{c.instructions+=5;NFSU2_TR(0x4c8606);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c8609:{NFSU2_TR(0x4c8609);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c860a:{NFSU2_TR(0x4c860a);
u8 U[4];
w4(U+0,u32(0x78f744ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c860f:{NFSU2_TR(0x4c860f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8610:{NFSU2_TR(0x4c8610);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c8615ull));
TAIL_STATIC(0x537be0u,537);
}
B4c8615:L4c8615:{c.instructions+=3;NFSU2_TR(0x4c8615);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4c8618:{NFSU2_TR(0x4c8618);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8619:{NFSU2_TR(0x4c8619);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c861eull));
TAIL_STATIC(0x50ca00u,50c);
}
B4c861e:L4c861e:{c.instructions+=3;NFSU2_TR(0x4c861e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c8621:{NFSU2_TR(0x4c8621);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8622:{NFSU2_TR(0x4c8622);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c8627ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4c8627:L4c8627:{c.instructions+=5;NFSU2_TR(0x4c8627);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4c862a:{NFSU2_TR(0x4c862a);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4c862d:{NFSU2_TR(0x4c862d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B4c8630:{NFSU2_TR(0x4c8630);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4c8632:{NFSU2_TR(0x4c8632);
if(r1(R+518)){{goto L4c86b3;}}
}
B4c8634:L4c8634:{c.instructions+=3;NFSU2_TR(0x4c8634);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c8637:{NFSU2_TR(0x4c8637);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8638:{NFSU2_TR(0x4c8638);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c863dull));
TAIL_STATIC(0x50ca50u,50c);
}
B4c863d:L4c863d:{c.instructions+=3;NFSU2_TR(0x4c863d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4c8640:{NFSU2_TR(0x4c8640);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8641:{NFSU2_TR(0x4c8641);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c8646ull));
TAIL_STATIC(0x50ca50u,50c);
}
B4c8646:L4c8646:{c.instructions+=8;NFSU2_TR(0x4c8646);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c8649:{NFSU2_TR(0x4c8649);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c864c:{NFSU2_TR(0x4c864c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4c864f:{NFSU2_TR(0x4c864f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8650:{NFSU2_TR(0x4c8650);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8651:{NFSU2_TR(0x4c8651);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8652:{NFSU2_TR(0x4c8652);
__builtin_memmove((R+4),(R+24),4);
}
B4c8654:{NFSU2_TR(0x4c8654);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c8659ull));
TAIL_STATIC(0x4ab780u,4ab);
}
B4c8659:L4c8659:{c.instructions+=3;NFSU2_TR(0x4c8659);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4c865c:{NFSU2_TR(0x4c865c);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4c865e:{NFSU2_TR(0x4c865e);
if(r1(R+518)){{goto L4c86a8;}}
}
B4c8660:L4c8660:{c.instructions+=10;NFSU2_TR(0x4c8660);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c8663:{NFSU2_TR(0x4c8663);
__builtin_memmove((R+8),gp(0x86518c),4);
}
B4c8669:{NFSU2_TR(0x4c8669);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+0))));
}
B4c866b:{NFSU2_TR(0x4c866b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c866f:{NFSU2_TR(0x4c866f);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4c8673:{NFSU2_TR(0x4c8673);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4c8679:{NFSU2_TR(0x4c8679);
{u32 ea_=u32(u32(7921784u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4c867f:{NFSU2_TR(0x4c867f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4c8681:{NFSU2_TR(0x4c8681);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4c8684:{NFSU2_TR(0x4c8684);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c86b3;}}
}
B4c8686:L4c8686:{c.instructions+=5;NFSU2_TR(0x4c8686);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4c868a:{NFSU2_TR(0x4c868a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4c8691:{NFSU2_TR(0x4c8691);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c8694:{NFSU2_TR(0x4c8694);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8695:{NFSU2_TR(0x4c8695);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c869aull));
TAIL_STATIC(0x50ca00u,50c);
}
B4c869a:L4c869a:{c.instructions+=3;NFSU2_TR(0x4c869a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c869d:{NFSU2_TR(0x4c869d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c869e:{NFSU2_TR(0x4c869e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c86a3ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4c86a3:L4c86a3:{c.instructions+=2;NFSU2_TR(0x4c86a3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4c86a6:{NFSU2_TR(0x4c86a6);
{goto L4c86b3;}
}
B4c86a8:L4c86a8:{c.instructions+=2;NFSU2_TR(0x4c86a8);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4c86ac:{NFSU2_TR(0x4c86ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4c86b3:L4c86b3:{c.instructions+=2;NFSU2_TR(0x4c86b3);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4c86b7:{NFSU2_TR(0x4c86b7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c86f3;}}
}
B4c86b9:L4c86b9:{c.instructions+=2;NFSU2_TR(0x4c86b9);
{u32 ea_=u32(r4(R+12)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4c86bc:{NFSU2_TR(0x4c86bc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c86c1ull));
TAIL_STATIC(0x75bed4u,75b);
}
B4c86c1:L4c86c1:{c.instructions+=5;NFSU2_TR(0x4c86c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4c86c4:{NFSU2_TR(0x4c86c4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c86c5:{NFSU2_TR(0x4c86c5);
u8 U[4];
w4(U+0,u32(0x78f744ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c86ca:{NFSU2_TR(0x4c86ca);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c86cb:{NFSU2_TR(0x4c86cb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c86d0ull));
TAIL_STATIC(0x537be0u,537);
}
B4c86d0:L4c86d0:{c.instructions+=5;NFSU2_TR(0x4c86d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c86d3:{NFSU2_TR(0x4c86d3);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c86d5:{NFSU2_TR(0x4c86d5);
u8 U[4];
w4(U+0,u32(0x78f228ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c86da:{NFSU2_TR(0x4c86da);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c86db:{NFSU2_TR(0x4c86db);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c86e0ull));
TAIL_STATIC(0x51cf70u,51c);
}
B4c86e0:L4c86e0:{c.instructions+=5;NFSU2_TR(0x4c86e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c86e3:{NFSU2_TR(0x4c86e3);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c86e5:{NFSU2_TR(0x4c86e5);
u8 U[4];
w4(U+0,u32(0x78f228ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c86ea:{NFSU2_TR(0x4c86ea);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c86eb:{NFSU2_TR(0x4c86eb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c86f0ull));
TAIL_STATIC(0x51cf70u,51c);
}
B4c86f0:L4c86f0:{c.instructions+=1;NFSU2_TR(0x4c86f0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
}
B4c86f3:L4c86f3:{c.instructions+=10;NFSU2_TR(0x4c86f3);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4c86f7:{NFSU2_TR(0x4c86f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c86fa:{NFSU2_TR(0x4c86fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4c86fd:{NFSU2_TR(0x4c86fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1d8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4c8703:{NFSU2_TR(0x4c8703);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4c8705:{NFSU2_TR(0x4c8705);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4c8707:{NFSU2_TR(0x4c8707);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B4c870a:{NFSU2_TR(0x4c870a);
{u32 ea_=u32(r4(R+8)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4c870d:{NFSU2_TR(0x4c870d);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c8711:{NFSU2_TR(0x4c8711);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c8716ull));
TAIL_STATIC(0x75bed4u,75b);
}
B4c8716:L4c8716:{c.instructions+=5;NFSU2_TR(0x4c8716);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1d4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c871c:{NFSU2_TR(0x4c871c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4c871f:{NFSU2_TR(0x4c871f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8721:{NFSU2_TR(0x4c8721);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c8725:{NFSU2_TR(0x4c8725);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c872aull));
TAIL_STATIC(0x56c7d0u,56c);
}
B4c872a:L4c872a:{c.instructions+=3;NFSU2_TR(0x4c872a);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4c872c:{NFSU2_TR(0x4c872c);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c872e:{NFSU2_TR(0x4c872e);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4c8879;}}
}
B4c8734:L4c8734:{c.instructions+=5;NFSU2_TR(0x4c8734);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c8737:{NFSU2_TR(0x4c8737);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8738:{NFSU2_TR(0x4c8738);
u8 U[4];
w4(U+0,u32(0x78f744ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c873d:{NFSU2_TR(0x4c873d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c873e:{NFSU2_TR(0x4c873e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c8743ull));
TAIL_STATIC(0x537be0u,537);
}
B4c8743:L4c8743:{c.instructions+=5;NFSU2_TR(0x4c8743);
u8 U[4];
w4(U+0,u32(0xe03ef7a4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8748:{NFSU2_TR(0x4c8748);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4c874c:{NFSU2_TR(0x4c874c);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c874e:{NFSU2_TR(0x4c874e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c874f:{NFSU2_TR(0x4c874f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c8754ull));
TAIL_STATIC(0x4ffa50u,4ff);
}
B4c8754:L4c8754:{c.instructions+=8;NFSU2_TR(0x4c8754);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((R+8),(U+0),4);
}
B4c8757:{NFSU2_TR(0x4c8757);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8758:{NFSU2_TR(0x4c8758);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4c875c:{NFSU2_TR(0x4c875c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c875d:{NFSU2_TR(0x4c875d);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4c8761:{NFSU2_TR(0x4c8761);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8763:{NFSU2_TR(0x4c8763);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8764:{NFSU2_TR(0x4c8764);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c8769ull));
TAIL_STATIC(0x50c960u,50c);
}
B4c8769:L4c8769:{c.instructions+=6;NFSU2_TR(0x4c8769);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c876c:{NFSU2_TR(0x4c876c);
u8 U[4];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4c8770:{NFSU2_TR(0x4c8770);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8771:{NFSU2_TR(0x4c8771);
u8 U[4];
w4(U+0,u32(0x786e70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8776:{NFSU2_TR(0x4c8776);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8777:{NFSU2_TR(0x4c8777);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c877cull));
TAIL_STATIC(0x537be0u,537);
}
B4c877c:L4c877c:{c.instructions+=4;NFSU2_TR(0x4c877c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c877f:{NFSU2_TR(0x4c877f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x34ull))));
}
B4c8782:{NFSU2_TR(0x4c8782);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c8784:{NFSU2_TR(0x4c8784);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4c8799;}}
}
B4c8786:L4c8786:{c.instructions+=5;NFSU2_TR(0x4c8786);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c8789:{NFSU2_TR(0x4c8789);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c878b:{NFSU2_TR(0x4c878b);
u8 U[4];
w4(U+0,u32(0x78f228ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8790:{NFSU2_TR(0x4c8790);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8791:{NFSU2_TR(0x4c8791);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c8796ull));
TAIL_STATIC(0x51cf70u,51c);
}
B4c8796:L4c8796:{c.instructions+=1;NFSU2_TR(0x4c8796);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4c8799:L4c8799:{c.instructions+=5;NFSU2_TR(0x4c8799);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4c879c:{NFSU2_TR(0x4c879c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c879d:{NFSU2_TR(0x4c879d);
u8 U[4];
w4(U+0,u32(0x790a84ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c87a2:{NFSU2_TR(0x4c87a2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c87a3:{NFSU2_TR(0x4c87a3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c87a8ull));
TAIL_STATIC(0x537be0u,537);
}
B4c87a8:L4c87a8:{c.instructions+=5;NFSU2_TR(0x4c87a8);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c87ac:{NFSU2_TR(0x4c87ac);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4c87af:{NFSU2_TR(0x4c87af);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4c87b1:{NFSU2_TR(0x4c87b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c87b4:{NFSU2_TR(0x4c87b4);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4c885e;}}
}
B4c87ba:L4c87ba:{c.instructions+=3;NFSU2_TR(0x4c87ba);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4c87bc:{NFSU2_TR(0x4c87bc);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4c87c2:{NFSU2_TR(0x4c87c2);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4c87e8;}}
}
B4c87c4:L4c87c4:{c.instructions+=9;NFSU2_TR(0x4c87c4);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4c87c6:{NFSU2_TR(0x4c87c6);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4c87ca:{NFSU2_TR(0x4c87ca);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4c87ce:{NFSU2_TR(0x4c87ce);
__asm__ volatile(".byte 0xde,0xf9":::"memory");
}
B4c87d0:{NFSU2_TR(0x4c87d0);
{u32 ea_=u32(r4(R+24)+u32(112u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4c87d3:{NFSU2_TR(0x4c87d3);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B4c87d9:{NFSU2_TR(0x4c87d9);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4c87db:{NFSU2_TR(0x4c87db);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4c87de:{NFSU2_TR(0x4c87de);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c87e8;}}
}
B4c87e0:L4c87e0:{c.instructions+=2;NFSU2_TR(0x4c87e0);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4c87e2:{NFSU2_TR(0x4c87e2);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4c87e8:L4c87e8:{c.instructions+=10;NFSU2_TR(0x4c87e8);
__builtin_memmove((R+0),gp(0x86518c),4);
}
B4c87ed:{NFSU2_TR(0x4c87ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B4c87f0:{NFSU2_TR(0x4c87f0);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c87f4:{NFSU2_TR(0x4c87f4);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4c87f8:{NFSU2_TR(0x4c87f8);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4c87fe:{NFSU2_TR(0x4c87fe);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B4c8800:{NFSU2_TR(0x4c8800);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4c8802:{NFSU2_TR(0x4c8802);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4c8804:{NFSU2_TR(0x4c8804);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4c8807:{NFSU2_TR(0x4c8807);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c88d0;}}
}
B4c880d:L4c880d:{c.instructions+=9;NFSU2_TR(0x4c880d);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B4c8810:{NFSU2_TR(0x4c8810);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4c8812:{NFSU2_TR(0x4c8812);
__builtin_memmove((R+4),(R+518),1);
}
B4c8815:{NFSU2_TR(0x4c8815);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4c8818:{NFSU2_TR(0x4c8818);
__builtin_memmove((R+8),gp(0x86518c),4);
}
B4c881e:{NFSU2_TR(0x4c881e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c8821:{NFSU2_TR(0x4c8821);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4c8824:{NFSU2_TR(0x4c8824);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4c8826:{NFSU2_TR(0x4c8826);
if(r1(R+518)){{goto L4c8843;}}
}
B4c8828:L4c8828:{c.instructions+=4;NFSU2_TR(0x4c8828);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c882b:{NFSU2_TR(0x4c882b);
u8 U[4];
w4(U+0,u32(0xffcaf48aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8830:{NFSU2_TR(0x4c8830);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8831:{NFSU2_TR(0x4c8831);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c8836ull));
TAIL_STATIC(0x51d7f0u,51d);
}
B4c8836:L4c8836:{c.instructions+=7;NFSU2_TR(0x4c8836);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4c8839:{NFSU2_TR(0x4c8839);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4c883a:{NFSU2_TR(0x4c883a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c883b:{NFSU2_TR(0x4c883b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4c883c:{NFSU2_TR(0x4c883c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4c883d:{NFSU2_TR(0x4c883d);
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
B4c8840:{NFSU2_TR(0x4c8840);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c8843:L4c8843:{c.instructions+=4;NFSU2_TR(0x4c8843);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c8846:{NFSU2_TR(0x4c8846);
u8 U[4];
w4(U+0,u32(0xffaa8000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c884b:{NFSU2_TR(0x4c884b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c884c:{NFSU2_TR(0x4c884c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c8851ull));
TAIL_STATIC(0x51d7f0u,51d);
}
B4c8851:L4c8851:{c.instructions+=7;NFSU2_TR(0x4c8851);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4c8854:{NFSU2_TR(0x4c8854);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4c8855:{NFSU2_TR(0x4c8855);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c8856:{NFSU2_TR(0x4c8856);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4c8857:{NFSU2_TR(0x4c8857);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4c8858:{NFSU2_TR(0x4c8858);
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
B4c885b:{NFSU2_TR(0x4c885b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c885e:L4c885e:{c.instructions+=4;NFSU2_TR(0x4c885e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4c8861:{NFSU2_TR(0x4c8861);
u8 U[4];
w4(U+0,u32(0xffaa8000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8866:{NFSU2_TR(0x4c8866);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8867:{NFSU2_TR(0x4c8867);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c886cull));
TAIL_STATIC(0x51d7f0u,51d);
}
B4c886c:L4c886c:{c.instructions+=7;NFSU2_TR(0x4c886c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4c886f:{NFSU2_TR(0x4c886f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4c8870:{NFSU2_TR(0x4c8870);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c8871:{NFSU2_TR(0x4c8871);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4c8872:{NFSU2_TR(0x4c8872);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4c8873:{NFSU2_TR(0x4c8873);
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
B4c8876:{NFSU2_TR(0x4c8876);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c8879:L4c8879:{c.instructions+=2;NFSU2_TR(0x4c8879);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+8)));
w4(U+12,u32(u32(r4(R+28))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4c887c:{NFSU2_TR(0x4c887c);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4c8891;}}
}
B4c887e:L4c887e:{c.instructions+=5;NFSU2_TR(0x4c887e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c8881:{NFSU2_TR(0x4c8881);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8883:{NFSU2_TR(0x4c8883);
u8 U[4];
w4(U+0,u32(0x78f228ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8888:{NFSU2_TR(0x4c8888);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8889:{NFSU2_TR(0x4c8889);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c888eull));
TAIL_STATIC(0x51cf70u,51c);
}
B4c888e:L4c888e:{c.instructions+=1;NFSU2_TR(0x4c888e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4c8891:L4c8891:{c.instructions+=5;NFSU2_TR(0x4c8891);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c8894:{NFSU2_TR(0x4c8894);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8895:{NFSU2_TR(0x4c8895);
u8 U[4];
w4(U+0,u32(0x790a84ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c889a:{NFSU2_TR(0x4c889a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c889b:{NFSU2_TR(0x4c889b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c88a0ull));
TAIL_STATIC(0x537be0u,537);
}
B4c88a0:L4c88a0:{c.instructions+=5;NFSU2_TR(0x4c88a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4c88a3:{NFSU2_TR(0x4c88a3);
u8 U[4];
w4(U+0,u32(0x795b2cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c88a8:{NFSU2_TR(0x4c88a8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c88a9:{NFSU2_TR(0x4c88a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c88ac:{NFSU2_TR(0x4c88ac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c88b1ull));
TAIL_STATIC(0x537be0u,537);
}
B4c88b1:L4c88b1:{c.instructions+=4;NFSU2_TR(0x4c88b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c88b4:{NFSU2_TR(0x4c88b4);
u8 U[4];
w4(U+0,u32(0xcc62c8beull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c88b9:{NFSU2_TR(0x4c88b9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c88ba:{NFSU2_TR(0x4c88ba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c88bfull));
TAIL_STATIC(0x50c900u,50c);
}
B4c88bf:L4c88bf:{c.instructions+=4;NFSU2_TR(0x4c88bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c88c2:{NFSU2_TR(0x4c88c2);
u8 U[4];
w4(U+0,u32(0xffaa8000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c88c7:{NFSU2_TR(0x4c88c7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c88c8:{NFSU2_TR(0x4c88c8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c88cdull));
TAIL_STATIC(0x51d7f0u,51d);
}
B4c88cd:L4c88cd:{c.instructions+=1;NFSU2_TR(0x4c88cd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
}
B4c88d0:L4c88d0:{c.instructions+=6;NFSU2_TR(0x4c88d0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4c88d1:{NFSU2_TR(0x4c88d1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c88d2:{NFSU2_TR(0x4c88d2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4c88d3:{NFSU2_TR(0x4c88d3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4c88d4:{NFSU2_TR(0x4c88d4);
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
B4c88d7:{NFSU2_TR(0x4c88d7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c88e0:L4c88e0:{c.instructions+=9;NFSU2_TR(0x4c88e0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x34ull))));
}
B4c88e3:{NFSU2_TR(0x4c88e3);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c88e4:{NFSU2_TR(0x4c88e4);
__builtin_memmove((R+20),(R+4),4);
}
B4c88e6:{NFSU2_TR(0x4c88e6);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c88ea:{NFSU2_TR(0x4c88ea);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c88eb:{NFSU2_TR(0x4c88eb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+28),(U+0),4);
}
B4c88ed:{NFSU2_TR(0x4c88ed);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+6))));
w1(R+523,sborrow<u32>(r4(R+28),r4(U+6)));
w4(U+10,u32(u32(r4(R+28))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4c88ef:{NFSU2_TR(0x4c88ef);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c88f3:{NFSU2_TR(0x4c88f3);
if(r1(R+518)){{goto L4c8ab7;}}
}
B4c88f9:L4c88f9:{c.instructions+=1;NFSU2_TR(0x4c88f9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c88feull));
TAIL_STATIC(0x502fd0u,502);
}
B4c88fe:L4c88fe:{c.instructions+=3;NFSU2_TR(0x4c88fe);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c8900:{NFSU2_TR(0x4c8900);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c8904:{NFSU2_TR(0x4c8904);
if(r1(R+518)){{goto L4c8ab7;}}
}
B4c890a:L4c890a:{c.instructions+=4;NFSU2_TR(0x4c890a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c890b:{NFSU2_TR(0x4c890b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c890c:{NFSU2_TR(0x4c890c);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4c890e:{NFSU2_TR(0x4c890e);
{goto L4c8914;}
}
B4c8910:L4c8910:{c.instructions+=1;NFSU2_TR(0x4c8910);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B4c8914:L4c8914:{c.instructions+=2;NFSU2_TR(0x4c8914);
u8 U[2];
__builtin_memmove((U+0),gp(0x89e7d9),1);
w1(U+1,u8(u32(r1(U+0))-u32(r1(R+12))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B4c891a:{NFSU2_TR(0x4c891a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c8928;}}
}
B4c891c:L4c891c:{c.instructions+=2;NFSU2_TR(0x4c891c);
u8 U[8];
__builtin_memmove((U+0),gp(0x890104),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+12))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c8922:{NFSU2_TR(0x4c8922);
if(r1(R+518)){{goto L4c89bf;}}
}
B4c8928:L4c8928:{c.instructions+=2;NFSU2_TR(0x4c8928);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4c892b:{NFSU2_TR(0x4c892b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c89bf;}}
}
B4c8931:L4c8931:{c.instructions+=9;NFSU2_TR(0x4c8931);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c8934:{NFSU2_TR(0x4c8934);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8900acull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B4c893b:{NFSU2_TR(0x4c893b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x9a4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4c8941:{NFSU2_TR(0x4c8941);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4c8944:{NFSU2_TR(0x4c8944);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c8947:{NFSU2_TR(0x4c8947);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8948:{NFSU2_TR(0x4c8948);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4c894c:{NFSU2_TR(0x4c894c);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c8950:{NFSU2_TR(0x4c8950);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c8955ull));
TAIL_STATIC(0x4c7e20u,4c7);
}
B4c8955:L4c8955:{c.instructions+=26;NFSU2_TR(0x4c8955);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4c8957:{NFSU2_TR(0x4c8957);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c895a:{NFSU2_TR(0x4c895a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4c895d:{NFSU2_TR(0x4c895d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c8960:{NFSU2_TR(0x4c8960);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B4c8963:{NFSU2_TR(0x4c8963);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4c8966:{NFSU2_TR(0x4c8966);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4c8969:{NFSU2_TR(0x4c8969);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c896c:{NFSU2_TR(0x4c896c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c896f:{NFSU2_TR(0x4c896f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c8972:{NFSU2_TR(0x4c8972);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4c8975:{NFSU2_TR(0x4c8975);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c8978:{NFSU2_TR(0x4c8978);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c897b:{NFSU2_TR(0x4c897b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c897e:{NFSU2_TR(0x4c897e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4c8981:{NFSU2_TR(0x4c8981);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c8984:{NFSU2_TR(0x4c8984);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B4c8987:{NFSU2_TR(0x4c8987);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4c898a:{NFSU2_TR(0x4c898a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4c898d:{NFSU2_TR(0x4c898d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c8990:{NFSU2_TR(0x4c8990);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4c8993:{NFSU2_TR(0x4c8993);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4c8996:{NFSU2_TR(0x4c8996);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4c899a:{NFSU2_TR(0x4c899a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c899d:{NFSU2_TR(0x4c899d);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4c89a1:{NFSU2_TR(0x4c89a1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c8aa9;}}
}
B4c89a7:L4c89a7:{c.instructions+=5;NFSU2_TR(0x4c89a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4c89aa:{NFSU2_TR(0x4c89aa);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c89ae:{NFSU2_TR(0x4c89ae);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c89af:{NFSU2_TR(0x4c89af);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c89b2:{NFSU2_TR(0x4c89b2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c89b7ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4c89b7:L4c89b7:{c.instructions+=2;NFSU2_TR(0x4c89b7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4c89ba:{NFSU2_TR(0x4c89ba);
{goto L4c8aa9;}
}
B4c89bf:L4c89bf:{c.instructions+=4;NFSU2_TR(0x4c89bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c89c2:{NFSU2_TR(0x4c89c2);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x20ull))));
}
B4c89c5:{NFSU2_TR(0x4c89c5);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c89c7:{NFSU2_TR(0x4c89c7);
if(r1(R+518)){{goto L4c89f6;}}
}
B4c89c9:L4c89c9:{c.instructions+=3;NFSU2_TR(0x4c89c9);
__builtin_memmove((R+24),(R+0),4);
}
B4c89cb:{NFSU2_TR(0x4c89cb);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c89cd:{NFSU2_TR(0x4c89cd);
if(r1(R+518)){{goto L4c89f6;}}
}
B4c89cf:L4c89cf:{c.instructions+=1;NFSU2_TR(0x4c89cf);
}
B4c89d0:L4c89d0:{c.instructions+=2;NFSU2_TR(0x4c89d0);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c89d2:{NFSU2_TR(0x4c89d2);
if(r1(R+518)){{goto L4c89f0;}}
}
B4c89d4:L4c89d4:{c.instructions+=2;NFSU2_TR(0x4c89d4);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c89d6:{NFSU2_TR(0x4c89d6);
if(r1(R+518)){{goto L4c89f0;}}
}
B4c89d8:L4c89d8:{c.instructions+=3;NFSU2_TR(0x4c89d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c89db:{NFSU2_TR(0x4c89db);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4c89de:{NFSU2_TR(0x4c89de);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c89f0;}}
}
B4c89e0:L4c89e0:{c.instructions+=5;NFSU2_TR(0x4c89e0);
{u32 ea_=u32(r4(R+28)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4c89e3:{NFSU2_TR(0x4c89e3);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4c89e9:{NFSU2_TR(0x4c89e9);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4c89eb:{NFSU2_TR(0x4c89eb);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4c89ee:{NFSU2_TR(0x4c89ee);
if(r1(R+514)){{goto L4c8a40;}}
}
B4c89f0:L4c89f0:{c.instructions+=3;NFSU2_TR(0x4c89f0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B4c89f2:{NFSU2_TR(0x4c89f2);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c89f4:{NFSU2_TR(0x4c89f4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4c89d0u);}goto L4c89d0;}}
}
B4c89f6:L4c89f6:{c.instructions+=5;NFSU2_TR(0x4c89f6);
{u32 ea_=u32(r4(R+28)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4c89f9:{NFSU2_TR(0x4c89f9);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4c89ff:{NFSU2_TR(0x4c89ff);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4c8a01:{NFSU2_TR(0x4c8a01);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4c8a04:{NFSU2_TR(0x4c8a04);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L4c8aa9;}}
}
B4c8a0a:L4c8a0a:{c.instructions+=6;NFSU2_TR(0x4c8a0a);
{u32 ea_=u32(r4(R+28)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4c8a0d:{NFSU2_TR(0x4c8a0d);
u8 U[4];
w4(U+0,u32(0x2cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8a0f:{NFSU2_TR(0x4c8a0f);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4c8a15:{NFSU2_TR(0x4c8a15);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4c8a17:{NFSU2_TR(0x4c8a17);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4c8a1a:{NFSU2_TR(0x4c8a1a);
if(r1(R+514)){{goto L4c8a84;}}
}
B4c8a1c:L4c8a1c:{c.instructions+=1;NFSU2_TR(0x4c8a1c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c8a21ull));
TAIL_STATIC(0x575620u,575);
}
B4c8a21:L4c8a21:{c.instructions+=3;NFSU2_TR(0x4c8a21);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4c8a24:{NFSU2_TR(0x4c8a24);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c8a26:{NFSU2_TR(0x4c8a26);
if(r1(R+518)){{goto L4c8a72;}}
}
B4c8a28:L4c8a28:{c.instructions+=3;NFSU2_TR(0x4c8a28);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8a29:{NFSU2_TR(0x4c8a29);
__builtin_memmove((R+4),(R+0),4);
}
B4c8a2b:{NFSU2_TR(0x4c8a2b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c8a30ull));
TAIL_STATIC(0x4c7e20u,4c7);
}
B4c8a30:L4c8a30:{c.instructions+=6;NFSU2_TR(0x4c8a30);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4c8a33:{NFSU2_TR(0x4c8a33);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+20)),r4(U+0));
}
B4c8a36:{NFSU2_TR(0x4c8a36);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c8a39:{NFSU2_TR(0x4c8a39);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c8a3c:{NFSU2_TR(0x4c8a3c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4c8a3e:{NFSU2_TR(0x4c8a3e);
{goto L4c8aa9;}
}
B4c8a40:L4c8a40:{c.instructions+=9;NFSU2_TR(0x4c8a40);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4c8a44:{NFSU2_TR(0x4c8a44);
__builtin_memmove((R+4),(R+518),1);
}
B4c8a47:{NFSU2_TR(0x4c8a47);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4c8a4a:{NFSU2_TR(0x4c8a4a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4c8a4d:{NFSU2_TR(0x4c8a4d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c8a50:{NFSU2_TR(0x4c8a50);
{u32 ea_=u32(r4(R+28)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4c8a53:{NFSU2_TR(0x4c8a53);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4c8a56:{NFSU2_TR(0x4c8a56);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4c8a5a:{NFSU2_TR(0x4c8a5a);
if(r1(R+518)){{goto L4c8a6d;}}
}
B4c8a5c:L4c8a5c:{c.instructions+=3;NFSU2_TR(0x4c8a5c);
{u32 ea_=u32(r4(R+28)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4c8a5f:{NFSU2_TR(0x4c8a5f);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4c8a65:{NFSU2_TR(0x4c8a65);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c8a6aull));
TAIL_STATIC(0x75bed4u,75b);
}
B4c8a6a:L4c8a6a:{c.instructions+=1;NFSU2_TR(0x4c8a6a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c8a6d:L4c8a6d:{c.instructions+=2;NFSU2_TR(0x4c8a6d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c8a70:{NFSU2_TR(0x4c8a70);
{goto L4c8aa9;}
}
B4c8a72:L4c8a72:{c.instructions+=7;NFSU2_TR(0x4c8a72);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4c8a75:{NFSU2_TR(0x4c8a75);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4c8a77:{NFSU2_TR(0x4c8a77);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+20)),r4(U+0));
}
B4c8a7a:{NFSU2_TR(0x4c8a7a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c8a7d:{NFSU2_TR(0x4c8a7d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c8a80:{NFSU2_TR(0x4c8a80);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4c8a82:{NFSU2_TR(0x4c8a82);
{goto L4c8aa9;}
}
B4c8a84:L4c8a84:{c.instructions+=1;NFSU2_TR(0x4c8a84);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c8a89ull));
TAIL_STATIC(0x575620u,575);
}
B4c8a89:L4c8a89:{c.instructions+=3;NFSU2_TR(0x4c8a89);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4c8a8c:{NFSU2_TR(0x4c8a8c);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4c8a8e:{NFSU2_TR(0x4c8a8e);
if(r1(R+518)){{goto L4c8a9a;}}
}
B4c8a90:L4c8a90:{c.instructions+=3;NFSU2_TR(0x4c8a90);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8a91:{NFSU2_TR(0x4c8a91);
__builtin_memmove((R+4),(R+0),4);
}
B4c8a93:{NFSU2_TR(0x4c8a93);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c8a98ull));
TAIL_STATIC(0x4c7e20u,4c7);
}
B4c8a98:L4c8a98:{c.instructions+=1;NFSU2_TR(0x4c8a98);
{goto L4c8a9c;}
}
B4c8a9a:L4c8a9a:{c.instructions+=1;NFSU2_TR(0x4c8a9a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4c8a9c:L4c8a9c:{c.instructions+=5;NFSU2_TR(0x4c8a9c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c8a9f:{NFSU2_TR(0x4c8a9f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4c8aa1:{NFSU2_TR(0x4c8aa1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c8aa4:{NFSU2_TR(0x4c8aa4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c8aa7:{NFSU2_TR(0x4c8aa7);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4c8aa9:L4c8aa9:{c.instructions+=3;NFSU2_TR(0x4c8aa9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+28),(U+0),4);
}
B4c8aab:{NFSU2_TR(0x4c8aab);
u8 U[16];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+28))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4c8aaf:{NFSU2_TR(0x4c8aaf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4c8910u);}goto L4c8910;}}
}
B4c8ab5:L4c8ab5:{c.instructions+=2;NFSU2_TR(0x4c8ab5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c8ab6:{NFSU2_TR(0x4c8ab6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4c8ab7:L4c8ab7:{c.instructions+=4;NFSU2_TR(0x4c8ab7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4c8ab8:{NFSU2_TR(0x4c8ab8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4c8ab9:{NFSU2_TR(0x4c8ab9);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x34ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x34ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x34ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4c8abc:{NFSU2_TR(0x4c8abc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c8ac0:L4c8ac0:{c.instructions+=6;NFSU2_TR(0x4c8ac0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B4c8ac3:{NFSU2_TR(0x4c8ac3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8ac4:{NFSU2_TR(0x4c8ac4);
__builtin_memmove((R+24),(R+4),4);
}
B4c8ac6:{NFSU2_TR(0x4c8ac6);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
w4(R+0,u32(s32(s8(r1(U+0)))));
}
B4c8ac9:{NFSU2_TR(0x4c8ac9);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B4c8acc:{NFSU2_TR(0x4c8acc);
if(r1(R+518)){{goto L4c8b0f;}}
}
B4c8ace:L4c8ace:{c.instructions+=2;NFSU2_TR(0x4c8ace);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B4c8acf:{NFSU2_TR(0x4c8acf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c8b6f;}}
}
B4c8ad5:L4c8ad5:{c.instructions+=9;NFSU2_TR(0x4c8ad5);
__builtin_memmove((R+0),gp(0x86518c),4);
}
B4c8ada:{NFSU2_TR(0x4c8ada);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B4c8add:{NFSU2_TR(0x4c8add);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c8ae1:{NFSU2_TR(0x4c8ae1);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4c8ae5:{NFSU2_TR(0x4c8ae5);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4c8aeb:{NFSU2_TR(0x4c8aeb);
{u32 ea_=u32(u32(7921792u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4c8af1:{NFSU2_TR(0x4c8af1);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4c8af3:{NFSU2_TR(0x4c8af3);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4c8af6:{NFSU2_TR(0x4c8af6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c8b6f;}}
}
B4c8af8:L4c8af8:{c.instructions+=2;NFSU2_TR(0x4c8af8);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x14ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B4c8afc:{NFSU2_TR(0x4c8afc);
if(r1(R+518)){{goto L4c8b07;}}
}
B4c8afe:L4c8afe:{c.instructions+=3;NFSU2_TR(0x4c8afe);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8b00:{NFSU2_TR(0x4c8b00);
__builtin_memmove((R+4),(R+24),4);
}
B4c8b02:{NFSU2_TR(0x4c8b02);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c8b07ull));
TAIL_STATIC(0x4ab9f0u,4ab);
}
B4c8b07:L4c8b07:{c.instructions+=4;NFSU2_TR(0x4c8b07);
u8 U[1];
w1(U+0,u8(0x4ull));
s1(u32(r4(R+24)),r1(U+0));
}
B4c8b0a:{NFSU2_TR(0x4c8b0a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c8b0b:{NFSU2_TR(0x4c8b0b);
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
B4c8b0e:{NFSU2_TR(0x4c8b0e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c8b0f:L4c8b0f:{c.instructions+=7;NFSU2_TR(0x4c8b0f);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4c8b12:{NFSU2_TR(0x4c8b12);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x14ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4c8b14:{NFSU2_TR(0x4c8b14);
__builtin_memmove((R+4),gp(0x78e07c),4);
}
B4c8b1a:{NFSU2_TR(0x4c8b1a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8b1b:{NFSU2_TR(0x4c8b1b);
__builtin_memmove((R+28),gp(0x86518c),4);
}
B4c8b21:{NFSU2_TR(0x4c8b21);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c8b25:{NFSU2_TR(0x4c8b25);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c8b2e;}}
}
B4c8b27:L4c8b27:{c.instructions+=2;NFSU2_TR(0x4c8b27);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4c8b2a:{NFSU2_TR(0x4c8b2a);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4c8b2e:L4c8b2e:{c.instructions+=2;NFSU2_TR(0x4c8b2e);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x13ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4c8b30:{NFSU2_TR(0x4c8b30);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c8b40;}}
}
B4c8b32:L4c8b32:{c.instructions+=2;NFSU2_TR(0x4c8b32);
w4(R+4,u32(0x861e7cull));
}
B4c8b37:{NFSU2_TR(0x4c8b37);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c8b3cull));
TAIL_STATIC(0x502420u,502);
}
B4c8b3c:L4c8b3c:{c.instructions+=2;NFSU2_TR(0x4c8b3c);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4c8b3e:{NFSU2_TR(0x4c8b3e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c8b6e;}}
}
B4c8b40:L4c8b40:{c.instructions+=8;NFSU2_TR(0x4c8b40);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+28,u32(u32(r4(R+28))-u32(r4(U+4))));
}
B4c8b43:{NFSU2_TR(0x4c8b43);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4c8b47:{NFSU2_TR(0x4c8b47);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4c8b4b:{NFSU2_TR(0x4c8b4b);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4c8b51:{NFSU2_TR(0x4c8b51);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4c8b55:{NFSU2_TR(0x4c8b55);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4c8b57:{NFSU2_TR(0x4c8b57);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4c8b5a:{NFSU2_TR(0x4c8b5a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c8b6e;}}
}
B4c8b5c:L4c8b5c:{c.instructions+=2;NFSU2_TR(0x4c8b5c);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x14ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B4c8b60:{NFSU2_TR(0x4c8b60);
if(r1(R+518)){{goto L4c8b6b;}}
}
B4c8b62:L4c8b62:{c.instructions+=3;NFSU2_TR(0x4c8b62);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8b64:{NFSU2_TR(0x4c8b64);
__builtin_memmove((R+4),(R+24),4);
}
B4c8b66:{NFSU2_TR(0x4c8b66);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c8b6bull));
TAIL_STATIC(0x4ab9f0u,4ab);
}
B4c8b6b:L4c8b6b:{c.instructions+=1;NFSU2_TR(0x4c8b6b);
u8 U[1];
w1(U+0,u8(0x3ull));
s1(u32(r4(R+24)),r1(U+0));
}
B4c8b6e:L4c8b6e:{c.instructions+=1;NFSU2_TR(0x4c8b6e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4c8b6f:L4c8b6f:{c.instructions+=3;NFSU2_TR(0x4c8b6f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c8b70:{NFSU2_TR(0x4c8b70);
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
B4c8b73:{NFSU2_TR(0x4c8b73);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c8b80:L4c8b80:{c.instructions+=6;NFSU2_TR(0x4c8b80);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8b81:{NFSU2_TR(0x4c8b81);
__builtin_memmove((R+24),(R+4),4);
}
B4c8b83:{NFSU2_TR(0x4c8b83);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
w4(R+0,u32(s32(s8(r1(U+0)))));
}
B4c8b86:{NFSU2_TR(0x4c8b86);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x2ull))));
}
B4c8b89:{NFSU2_TR(0x4c8b89);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x4ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x4ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4c8b8c:{NFSU2_TR(0x4c8b8c);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4c8db0;}}
}
B4c8b92:L4c8b92:{c.instructions+=1;NFSU2_TR(0x4c8b92);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8b93:L4c8b93:{c.instructions+=1;NFSU2_TR(0x4c8b93);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x4c8db4ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4c8b9a:L4c8b9a:{c.instructions+=5;NFSU2_TR(0x4c8b9a);
u8 U[1];
w1(U+0,u8(0x3ull));
s1(u32(r4(R+24)),r1(U+0));
}
B4c8b9d:{NFSU2_TR(0x4c8b9d);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
w4(R+0,u32(s32(s8(r1(U+0)))));
}
B4c8ba0:{NFSU2_TR(0x4c8ba0);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x2ull))));
}
B4c8ba3:{NFSU2_TR(0x4c8ba3);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x4ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x4ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4c8ba6:{NFSU2_TR(0x4c8ba6);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4c8b93u);}goto L4c8b93;}}
}
B4c8ba8:L4c8ba8:{c.instructions+=3;NFSU2_TR(0x4c8ba8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4c8ba9:{NFSU2_TR(0x4c8ba9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c8baa:{NFSU2_TR(0x4c8baa);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c8bad:L4c8bad:{c.instructions+=5;NFSU2_TR(0x4c8bad);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c8bb0:{NFSU2_TR(0x4c8bb0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4c8bb2:{NFSU2_TR(0x4c8bb2);
u8 U[4];
w4(U+0,u32(0x6fff0767ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8bb7:{NFSU2_TR(0x4c8bb7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8bb8:{NFSU2_TR(0x4c8bb8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c8bbdull));
TAIL_STATIC(0x50c990u,50c);
}
B4c8bbd:L4c8bbd:{c.instructions+=3;NFSU2_TR(0x4c8bbd);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(s32(s8(r1(U+4)))));
}
B4c8bc1:{NFSU2_TR(0x4c8bc1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8bc2:{NFSU2_TR(0x4c8bc2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c8bc7ull));
TAIL_STATIC(0x4abe50u,4ab);
}
B4c8bc7:L4c8bc7:{c.instructions+=5;NFSU2_TR(0x4c8bc7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8bc8:{NFSU2_TR(0x4c8bc8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c8bcb:{NFSU2_TR(0x4c8bcb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c8bce:{NFSU2_TR(0x4c8bce);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8bcf:{NFSU2_TR(0x4c8bcf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c8bd4ull));
TAIL_STATIC(0x50c990u,50c);
}
B4c8bd4:L4c8bd4:{c.instructions+=4;NFSU2_TR(0x4c8bd4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4c8bd7:{NFSU2_TR(0x4c8bd7);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c8bda:{NFSU2_TR(0x4c8bda);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8bdb:{NFSU2_TR(0x4c8bdb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c8be0ull));
TAIL_STATIC(0x50ca50u,50c);
}
B4c8be0:L4c8be0:{c.instructions+=4;NFSU2_TR(0x4c8be0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c8be3:{NFSU2_TR(0x4c8be3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4c8be6:{NFSU2_TR(0x4c8be6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8be7:{NFSU2_TR(0x4c8be7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c8becull));
TAIL_STATIC(0x50ca50u,50c);
}
B4c8bec:L4c8bec:{c.instructions+=5;NFSU2_TR(0x4c8bec);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c8bef:{NFSU2_TR(0x4c8bef);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4c8bf2:{NFSU2_TR(0x4c8bf2);
u8 U[4];
w4(U+0,u32(0x790ad0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8bf7:{NFSU2_TR(0x4c8bf7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8bf8:{NFSU2_TR(0x4c8bf8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c8bfdull));
TAIL_STATIC(0x51d040u,51d);
}
B4c8bfd:L4c8bfd:{c.instructions+=3;NFSU2_TR(0x4c8bfd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
}
B4c8c00:{NFSU2_TR(0x4c8c00);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4c8c02:{NFSU2_TR(0x4c8c02);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c8c14;}}
}
B4c8c04:L4c8c04:{c.instructions+=4;NFSU2_TR(0x4c8c04);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8c06:{NFSU2_TR(0x4c8c06);
u8 U[4];
w4(U+0,u32(0x790ad0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8c0b:{NFSU2_TR(0x4c8c0b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8c0c:{NFSU2_TR(0x4c8c0c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c8c11ull));
TAIL_STATIC(0x51cf70u,51c);
}
B4c8c11:L4c8c11:{c.instructions+=1;NFSU2_TR(0x4c8c11);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4c8c14:L4c8c14:{c.instructions+=5;NFSU2_TR(0x4c8c14);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c8c17:{NFSU2_TR(0x4c8c17);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4c8c1a:{NFSU2_TR(0x4c8c1a);
u8 U[4];
w4(U+0,u32(0x78f568ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8c1f:{NFSU2_TR(0x4c8c1f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8c20:{NFSU2_TR(0x4c8c20);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c8c25ull));
TAIL_STATIC(0x51d040u,51d);
}
B4c8c25:L4c8c25:{c.instructions+=3;NFSU2_TR(0x4c8c25);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4c8c28:{NFSU2_TR(0x4c8c28);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4c8c2a:{NFSU2_TR(0x4c8c2a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c8c3c;}}
}
B4c8c2c:L4c8c2c:{c.instructions+=4;NFSU2_TR(0x4c8c2c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8c2e:{NFSU2_TR(0x4c8c2e);
u8 U[4];
w4(U+0,u32(0x78f568ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8c33:{NFSU2_TR(0x4c8c33);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8c34:{NFSU2_TR(0x4c8c34);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c8c39ull));
TAIL_STATIC(0x51cf70u,51c);
}
B4c8c39:L4c8c39:{c.instructions+=1;NFSU2_TR(0x4c8c39);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4c8c3c:L4c8c3c:{c.instructions+=5;NFSU2_TR(0x4c8c3c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4c8c3f:{NFSU2_TR(0x4c8c3f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+28),(U+0),4);
}
B4c8c41:{NFSU2_TR(0x4c8c41);
u8 U[4];
w4(U+0,u32(0x78f6bcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8c46:{NFSU2_TR(0x4c8c46);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8c47:{NFSU2_TR(0x4c8c47);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c8c4cull));
TAIL_STATIC(0x51d040u,51d);
}
B4c8c4c:L4c8c4c:{c.instructions+=3;NFSU2_TR(0x4c8c4c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4c8c4f:{NFSU2_TR(0x4c8c4f);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4c8c51:{NFSU2_TR(0x4c8c51);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c8c78;}}
}
B4c8c53:L4c8c53:{c.instructions+=4;NFSU2_TR(0x4c8c53);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8c55:{NFSU2_TR(0x4c8c55);
u8 U[4];
w4(U+0,u32(0x78f6bcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8c5a:{NFSU2_TR(0x4c8c5a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8c5b:{NFSU2_TR(0x4c8c5b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c8c60ull));
TAIL_STATIC(0x51cf70u,51c);
}
B4c8c60:L4c8c60:{c.instructions+=2;NFSU2_TR(0x4c8c60);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4c8c63:{NFSU2_TR(0x4c8c63);
{goto L4c8c78;}
}
B4c8c65:L4c8c65:{c.instructions+=5;NFSU2_TR(0x4c8c65);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c8c68:{NFSU2_TR(0x4c8c68);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4c8c6a:{NFSU2_TR(0x4c8c6a);
u8 U[4];
w4(U+0,u32(0x6fff0767ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8c6f:{NFSU2_TR(0x4c8c6f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8c70:{NFSU2_TR(0x4c8c70);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c8c75ull));
TAIL_STATIC(0x50c990u,50c);
}
B4c8c75:L4c8c75:{c.instructions+=1;NFSU2_TR(0x4c8c75);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4c8c78:L4c8c78:{c.instructions+=4;NFSU2_TR(0x4c8c78);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4c8c7b:{NFSU2_TR(0x4c8c7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c8c7e:{NFSU2_TR(0x4c8c7e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8c7f:{NFSU2_TR(0x4c8c7f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c8c84ull));
TAIL_STATIC(0x50ca50u,50c);
}
B4c8c84:L4c8c84:{c.instructions+=4;NFSU2_TR(0x4c8c84);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c8c87:{NFSU2_TR(0x4c8c87);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4c8c8a:{NFSU2_TR(0x4c8c8a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8c8b:{NFSU2_TR(0x4c8c8b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c8c90ull));
TAIL_STATIC(0x50ca50u,50c);
}
B4c8c90:L4c8c90:{c.instructions+=5;NFSU2_TR(0x4c8c90);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c8c93:{NFSU2_TR(0x4c8c93);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4c8c96:{NFSU2_TR(0x4c8c96);
u8 U[4];
w4(U+0,u32(0x790ad0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8c9b:{NFSU2_TR(0x4c8c9b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8c9c:{NFSU2_TR(0x4c8c9c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c8ca1ull));
TAIL_STATIC(0x51d040u,51d);
}
B4c8ca1:L4c8ca1:{c.instructions+=3;NFSU2_TR(0x4c8ca1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4c8ca4:{NFSU2_TR(0x4c8ca4);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4c8ca6:{NFSU2_TR(0x4c8ca6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c8cb8;}}
}
B4c8ca8:L4c8ca8:{c.instructions+=4;NFSU2_TR(0x4c8ca8);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8caa:{NFSU2_TR(0x4c8caa);
u8 U[4];
w4(U+0,u32(0x790ad0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8caf:{NFSU2_TR(0x4c8caf);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8cb0:{NFSU2_TR(0x4c8cb0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c8cb5ull));
TAIL_STATIC(0x51cf70u,51c);
}
B4c8cb5:L4c8cb5:{c.instructions+=1;NFSU2_TR(0x4c8cb5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4c8cb8:L4c8cb8:{c.instructions+=5;NFSU2_TR(0x4c8cb8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c8cbb:{NFSU2_TR(0x4c8cbb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4c8cbe:{NFSU2_TR(0x4c8cbe);
u8 U[4];
w4(U+0,u32(0x78f568ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8cc3:{NFSU2_TR(0x4c8cc3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8cc4:{NFSU2_TR(0x4c8cc4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c8cc9ull));
TAIL_STATIC(0x51d040u,51d);
}
B4c8cc9:L4c8cc9:{c.instructions+=3;NFSU2_TR(0x4c8cc9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4c8ccc:{NFSU2_TR(0x4c8ccc);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4c8cce:{NFSU2_TR(0x4c8cce);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c8ce0;}}
}
B4c8cd0:L4c8cd0:{c.instructions+=4;NFSU2_TR(0x4c8cd0);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8cd2:{NFSU2_TR(0x4c8cd2);
u8 U[4];
w4(U+0,u32(0x78f568ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8cd7:{NFSU2_TR(0x4c8cd7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8cd8:{NFSU2_TR(0x4c8cd8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c8cddull));
TAIL_STATIC(0x51cf70u,51c);
}
B4c8cdd:L4c8cdd:{c.instructions+=1;NFSU2_TR(0x4c8cdd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4c8ce0:L4c8ce0:{c.instructions+=5;NFSU2_TR(0x4c8ce0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4c8ce3:{NFSU2_TR(0x4c8ce3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+24),(U+0),4);
}
B4c8ce5:{NFSU2_TR(0x4c8ce5);
u8 U[4];
w4(U+0,u32(0x78f6bcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8cea:{NFSU2_TR(0x4c8cea);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8ceb:{NFSU2_TR(0x4c8ceb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c8cf0ull));
TAIL_STATIC(0x51d040u,51d);
}
B4c8cf0:L4c8cf0:{c.instructions+=3;NFSU2_TR(0x4c8cf0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4c8cf3:{NFSU2_TR(0x4c8cf3);
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
B4c8cf5:{NFSU2_TR(0x4c8cf5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c8daf;}}
}
B4c8cfb:L4c8cfb:{c.instructions+=4;NFSU2_TR(0x4c8cfb);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8cfd:{NFSU2_TR(0x4c8cfd);
u8 U[4];
w4(U+0,u32(0x78f6bcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8d02:{NFSU2_TR(0x4c8d02);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8d03:{NFSU2_TR(0x4c8d03);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c8d08ull));
TAIL_STATIC(0x51cf70u,51c);
}
B4c8d08:L4c8d08:{c.instructions+=4;NFSU2_TR(0x4c8d08);
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
B4c8d0b:{NFSU2_TR(0x4c8d0b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4c8d0c:{NFSU2_TR(0x4c8d0c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c8d0d:{NFSU2_TR(0x4c8d0d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c8d10:L4c8d10:{c.instructions+=4;NFSU2_TR(0x4c8d10);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c8d13:{NFSU2_TR(0x4c8d13);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c8d16:{NFSU2_TR(0x4c8d16);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8d17:{NFSU2_TR(0x4c8d17);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c8d1cull));
TAIL_STATIC(0x50ca00u,50c);
}
B4c8d1c:L4c8d1c:{c.instructions+=4;NFSU2_TR(0x4c8d1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4c8d1f:{NFSU2_TR(0x4c8d1f);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c8d22:{NFSU2_TR(0x4c8d22);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8d23:{NFSU2_TR(0x4c8d23);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c8d28ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4c8d28:L4c8d28:{c.instructions+=5;NFSU2_TR(0x4c8d28);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c8d2b:{NFSU2_TR(0x4c8d2b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4c8d2d:{NFSU2_TR(0x4c8d2d);
u8 U[4];
w4(U+0,u32(0xea570722ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8d32:{NFSU2_TR(0x4c8d32);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8d33:{NFSU2_TR(0x4c8d33);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c8d38ull));
TAIL_STATIC(0x50c990u,50c);
}
B4c8d38:L4c8d38:{c.instructions+=5;NFSU2_TR(0x4c8d38);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c8d3b:{NFSU2_TR(0x4c8d3b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+28),(U+0),4);
}
B4c8d3d:{NFSU2_TR(0x4c8d3d);
u8 U[4];
w4(U+0,u32(0x78f9d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8d42:{NFSU2_TR(0x4c8d42);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8d43:{NFSU2_TR(0x4c8d43);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c8d48ull));
TAIL_STATIC(0x51d040u,51d);
}
B4c8d48:L4c8d48:{c.instructions+=3;NFSU2_TR(0x4c8d48);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B4c8d4b:{NFSU2_TR(0x4c8d4b);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4c8d4d:{NFSU2_TR(0x4c8d4d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c8d5f;}}
}
B4c8d4f:L4c8d4f:{c.instructions+=4;NFSU2_TR(0x4c8d4f);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8d51:{NFSU2_TR(0x4c8d51);
u8 U[4];
w4(U+0,u32(0x78f9d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8d56:{NFSU2_TR(0x4c8d56);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8d57:{NFSU2_TR(0x4c8d57);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c8d5cull));
TAIL_STATIC(0x51cf70u,51c);
}
B4c8d5c:L4c8d5c:{c.instructions+=1;NFSU2_TR(0x4c8d5c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4c8d5f:L4c8d5f:{c.instructions+=5;NFSU2_TR(0x4c8d5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c8d62:{NFSU2_TR(0x4c8d62);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4c8d65:{NFSU2_TR(0x4c8d65);
u8 U[4];
w4(U+0,u32(0x78f9d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8d6a:{NFSU2_TR(0x4c8d6a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8d6b:{NFSU2_TR(0x4c8d6b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c8d70ull));
TAIL_STATIC(0x51d040u,51d);
}
B4c8d70:L4c8d70:{c.instructions+=3;NFSU2_TR(0x4c8d70);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4c8d73:{NFSU2_TR(0x4c8d73);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4c8d75:{NFSU2_TR(0x4c8d75);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c8d87;}}
}
B4c8d77:L4c8d77:{c.instructions+=4;NFSU2_TR(0x4c8d77);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8d79:{NFSU2_TR(0x4c8d79);
u8 U[4];
w4(U+0,u32(0x78f9d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8d7e:{NFSU2_TR(0x4c8d7e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8d7f:{NFSU2_TR(0x4c8d7f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c8d84ull));
TAIL_STATIC(0x51cf70u,51c);
}
B4c8d84:L4c8d84:{c.instructions+=1;NFSU2_TR(0x4c8d84);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4c8d87:L4c8d87:{c.instructions+=5;NFSU2_TR(0x4c8d87);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4c8d8a:{NFSU2_TR(0x4c8d8a);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4c8d8d:{NFSU2_TR(0x4c8d8d);
u8 U[4];
w4(U+0,u32(0x78f9d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8d92:{NFSU2_TR(0x4c8d92);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8d93:{NFSU2_TR(0x4c8d93);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c8d98ull));
TAIL_STATIC(0x51d040u,51d);
}
B4c8d98:L4c8d98:{c.instructions+=3;NFSU2_TR(0x4c8d98);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4c8d9b:{NFSU2_TR(0x4c8d9b);
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
B4c8d9d:{NFSU2_TR(0x4c8d9d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c8daf;}}
}
B4c8d9f:L4c8d9f:{c.instructions+=4;NFSU2_TR(0x4c8d9f);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8da1:{NFSU2_TR(0x4c8da1);
u8 U[4];
w4(U+0,u32(0x78f9d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8da6:{NFSU2_TR(0x4c8da6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8da7:{NFSU2_TR(0x4c8da7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c8dacull));
TAIL_STATIC(0x51cf70u,51c);
}
B4c8dac:L4c8dac:{c.instructions+=1;NFSU2_TR(0x4c8dac);
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
B4c8daf:L4c8daf:{c.instructions+=1;NFSU2_TR(0x4c8daf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4c8db0:L4c8db0:{c.instructions+=2;NFSU2_TR(0x4c8db0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c8db1:{NFSU2_TR(0x4c8db1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c8dd0:L4c8dd0:{c.instructions+=6;NFSU2_TR(0x4c8dd0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8dd1:{NFSU2_TR(0x4c8dd1);
__builtin_memmove((R+24),(R+4),4);
}
B4c8dd3:{NFSU2_TR(0x4c8dd3);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
w4(R+0,u32(s32(s8(r1(U+0)))));
}
B4c8dd6:{NFSU2_TR(0x4c8dd6);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x2ull))));
}
B4c8dd9:{NFSU2_TR(0x4c8dd9);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x4ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x4ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4c8ddc:{NFSU2_TR(0x4c8ddc);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){TAIL_STATIC(0x4c9009u,4c9);}
}
B4c8de2:L4c8de2:{c.instructions+=1;NFSU2_TR(0x4c8de2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8de3:L4c8de3:{c.instructions+=1;NFSU2_TR(0x4c8de3);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x4c9010ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4c8dea:L4c8dea:{c.instructions+=5;NFSU2_TR(0x4c8dea);
u8 U[1];
w1(U+0,u8(0x3ull));
s1(u32(r4(R+24)),r1(U+0));
}
B4c8ded:{NFSU2_TR(0x4c8ded);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
w4(R+0,u32(s32(s8(r1(U+0)))));
}
B4c8df0:{NFSU2_TR(0x4c8df0);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x2ull))));
}
B4c8df3:{NFSU2_TR(0x4c8df3);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x4ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x4ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4c8df6:{NFSU2_TR(0x4c8df6);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4c8de3u);}goto L4c8de3;}}
}
B4c8df8:L4c8df8:{c.instructions+=3;NFSU2_TR(0x4c8df8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4c8df9:{NFSU2_TR(0x4c8df9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c8dfa:{NFSU2_TR(0x4c8dfa);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c8dfd:L4c8dfd:{c.instructions+=5;NFSU2_TR(0x4c8dfd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c8e00:{NFSU2_TR(0x4c8e00);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4c8e02:{NFSU2_TR(0x4c8e02);
u8 U[4];
w4(U+0,u32(0x6fff0767ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8e07:{NFSU2_TR(0x4c8e07);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8e08:{NFSU2_TR(0x4c8e08);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c8e0dull));
TAIL_STATIC(0x50c990u,50c);
}
B4c8e0d:L4c8e0d:{c.instructions+=4;NFSU2_TR(0x4c8e0d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4c8e10:{NFSU2_TR(0x4c8e10);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c8e13:{NFSU2_TR(0x4c8e13);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8e14:{NFSU2_TR(0x4c8e14);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c8e19ull));
TAIL_STATIC(0x50ca50u,50c);
}
B4c8e19:L4c8e19:{c.instructions+=4;NFSU2_TR(0x4c8e19);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c8e1c:{NFSU2_TR(0x4c8e1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4c8e1f:{NFSU2_TR(0x4c8e1f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8e20:{NFSU2_TR(0x4c8e20);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c8e25ull));
TAIL_STATIC(0x50ca50u,50c);
}
B4c8e25:L4c8e25:{c.instructions+=5;NFSU2_TR(0x4c8e25);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c8e28:{NFSU2_TR(0x4c8e28);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4c8e2b:{NFSU2_TR(0x4c8e2b);
u8 U[4];
w4(U+0,u32(0x790ad0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8e30:{NFSU2_TR(0x4c8e30);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8e31:{NFSU2_TR(0x4c8e31);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c8e36ull));
TAIL_STATIC(0x51d040u,51d);
}
B4c8e36:L4c8e36:{c.instructions+=3;NFSU2_TR(0x4c8e36);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B4c8e39:{NFSU2_TR(0x4c8e39);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4c8e3b:{NFSU2_TR(0x4c8e3b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c8e4d;}}
}
B4c8e3d:L4c8e3d:{c.instructions+=4;NFSU2_TR(0x4c8e3d);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8e3f:{NFSU2_TR(0x4c8e3f);
u8 U[4];
w4(U+0,u32(0x790ad0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8e44:{NFSU2_TR(0x4c8e44);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8e45:{NFSU2_TR(0x4c8e45);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c8e4aull));
TAIL_STATIC(0x51cf70u,51c);
}
B4c8e4a:L4c8e4a:{c.instructions+=1;NFSU2_TR(0x4c8e4a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4c8e4d:L4c8e4d:{c.instructions+=5;NFSU2_TR(0x4c8e4d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c8e50:{NFSU2_TR(0x4c8e50);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4c8e53:{NFSU2_TR(0x4c8e53);
u8 U[4];
w4(U+0,u32(0x78f568ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8e58:{NFSU2_TR(0x4c8e58);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8e59:{NFSU2_TR(0x4c8e59);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c8e5eull));
TAIL_STATIC(0x51d040u,51d);
}
B4c8e5e:L4c8e5e:{c.instructions+=3;NFSU2_TR(0x4c8e5e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4c8e61:{NFSU2_TR(0x4c8e61);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4c8e63:{NFSU2_TR(0x4c8e63);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c8e75;}}
}
B4c8e65:L4c8e65:{c.instructions+=4;NFSU2_TR(0x4c8e65);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8e67:{NFSU2_TR(0x4c8e67);
u8 U[4];
w4(U+0,u32(0x78f568ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8e6c:{NFSU2_TR(0x4c8e6c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8e6d:{NFSU2_TR(0x4c8e6d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c8e72ull));
TAIL_STATIC(0x51cf70u,51c);
}
B4c8e72:L4c8e72:{c.instructions+=1;NFSU2_TR(0x4c8e72);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4c8e75:L4c8e75:{c.instructions+=5;NFSU2_TR(0x4c8e75);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4c8e78:{NFSU2_TR(0x4c8e78);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+28),(U+0),4);
}
B4c8e7a:{NFSU2_TR(0x4c8e7a);
u8 U[4];
w4(U+0,u32(0x78f6bcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8e7f:{NFSU2_TR(0x4c8e7f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8e80:{NFSU2_TR(0x4c8e80);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c8e85ull));
TAIL_STATIC(0x51d040u,51d);
}
B4c8e85:L4c8e85:{c.instructions+=3;NFSU2_TR(0x4c8e85);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4c8e88:{NFSU2_TR(0x4c8e88);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4c8e8a:{NFSU2_TR(0x4c8e8a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c8eb1;}}
}
B4c8e8c:L4c8e8c:{c.instructions+=4;NFSU2_TR(0x4c8e8c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8e8e:{NFSU2_TR(0x4c8e8e);
u8 U[4];
w4(U+0,u32(0x78f6bcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8e93:{NFSU2_TR(0x4c8e93);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8e94:{NFSU2_TR(0x4c8e94);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c8e99ull));
TAIL_STATIC(0x51cf70u,51c);
}
B4c8e99:L4c8e99:{c.instructions+=2;NFSU2_TR(0x4c8e99);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4c8e9c:{NFSU2_TR(0x4c8e9c);
{goto L4c8eb1;}
}
B4c8e9e:L4c8e9e:{c.instructions+=5;NFSU2_TR(0x4c8e9e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c8ea1:{NFSU2_TR(0x4c8ea1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4c8ea3:{NFSU2_TR(0x4c8ea3);
u8 U[4];
w4(U+0,u32(0x6fff0767ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8ea8:{NFSU2_TR(0x4c8ea8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8ea9:{NFSU2_TR(0x4c8ea9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c8eaeull));
TAIL_STATIC(0x50c990u,50c);
}
B4c8eae:L4c8eae:{c.instructions+=1;NFSU2_TR(0x4c8eae);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4c8eb1:L4c8eb1:{c.instructions+=3;NFSU2_TR(0x4c8eb1);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(s32(s8(r1(U+4)))));
}
B4c8eb5:{NFSU2_TR(0x4c8eb5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8eb6:{NFSU2_TR(0x4c8eb6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c8ebbull));
TAIL_STATIC(0x4abe50u,4ab);
}
B4c8ebb:L4c8ebb:{c.instructions+=5;NFSU2_TR(0x4c8ebb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8ebc:{NFSU2_TR(0x4c8ebc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c8ebf:{NFSU2_TR(0x4c8ebf);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c8ec2:{NFSU2_TR(0x4c8ec2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8ec3:{NFSU2_TR(0x4c8ec3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c8ec8ull));
TAIL_STATIC(0x50c990u,50c);
}
B4c8ec8:L4c8ec8:{c.instructions+=4;NFSU2_TR(0x4c8ec8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4c8ecb:{NFSU2_TR(0x4c8ecb);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c8ece:{NFSU2_TR(0x4c8ece);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8ecf:{NFSU2_TR(0x4c8ecf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c8ed4ull));
TAIL_STATIC(0x50ca50u,50c);
}
B4c8ed4:L4c8ed4:{c.instructions+=4;NFSU2_TR(0x4c8ed4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c8ed7:{NFSU2_TR(0x4c8ed7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4c8eda:{NFSU2_TR(0x4c8eda);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8edb:{NFSU2_TR(0x4c8edb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c8ee0ull));
TAIL_STATIC(0x50ca50u,50c);
}
B4c8ee0:L4c8ee0:{c.instructions+=5;NFSU2_TR(0x4c8ee0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c8ee3:{NFSU2_TR(0x4c8ee3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4c8ee6:{NFSU2_TR(0x4c8ee6);
u8 U[4];
w4(U+0,u32(0x790ad0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8eeb:{NFSU2_TR(0x4c8eeb);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8eec:{NFSU2_TR(0x4c8eec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c8ef1ull));
TAIL_STATIC(0x51d040u,51d);
}
B4c8ef1:L4c8ef1:{c.instructions+=3;NFSU2_TR(0x4c8ef1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B4c8ef4:{NFSU2_TR(0x4c8ef4);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4c8ef6:{NFSU2_TR(0x4c8ef6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c8f08;}}
}
B4c8ef8:L4c8ef8:{c.instructions+=4;NFSU2_TR(0x4c8ef8);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8efa:{NFSU2_TR(0x4c8efa);
u8 U[4];
w4(U+0,u32(0x790ad0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8eff:{NFSU2_TR(0x4c8eff);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8f00:{NFSU2_TR(0x4c8f00);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c8f05ull));
TAIL_STATIC(0x51cf70u,51c);
}
B4c8f05:L4c8f05:{c.instructions+=1;NFSU2_TR(0x4c8f05);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4c8f08:L4c8f08:{c.instructions+=5;NFSU2_TR(0x4c8f08);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c8f0b:{NFSU2_TR(0x4c8f0b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4c8f0e:{NFSU2_TR(0x4c8f0e);
u8 U[4];
w4(U+0,u32(0x78f568ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8f13:{NFSU2_TR(0x4c8f13);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8f14:{NFSU2_TR(0x4c8f14);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c8f19ull));
TAIL_STATIC(0x51d040u,51d);
}
B4c8f19:L4c8f19:{c.instructions+=3;NFSU2_TR(0x4c8f19);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4c8f1c:{NFSU2_TR(0x4c8f1c);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4c8f1e:{NFSU2_TR(0x4c8f1e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c8f30;}}
}
B4c8f20:L4c8f20:{c.instructions+=4;NFSU2_TR(0x4c8f20);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8f22:{NFSU2_TR(0x4c8f22);
u8 U[4];
w4(U+0,u32(0x78f568ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8f27:{NFSU2_TR(0x4c8f27);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8f28:{NFSU2_TR(0x4c8f28);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c8f2dull));
TAIL_STATIC(0x51cf70u,51c);
}
B4c8f2d:L4c8f2d:{c.instructions+=1;NFSU2_TR(0x4c8f2d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4c8f30:L4c8f30:{c.instructions+=5;NFSU2_TR(0x4c8f30);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4c8f33:{NFSU2_TR(0x4c8f33);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+24),(U+0),4);
}
B4c8f35:{NFSU2_TR(0x4c8f35);
u8 U[4];
w4(U+0,u32(0x78f6bcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8f3a:{NFSU2_TR(0x4c8f3a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8f3b:{NFSU2_TR(0x4c8f3b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c8f40ull));
TAIL_STATIC(0x51d040u,51d);
}
B4c8f40:L4c8f40:{c.instructions+=3;NFSU2_TR(0x4c8f40);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4c8f43:{NFSU2_TR(0x4c8f43);
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
B4c8f45:{NFSU2_TR(0x4c8f45);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c8f57;}}
}
B4c8f47:L4c8f47:{c.instructions+=4;NFSU2_TR(0x4c8f47);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8f49:{NFSU2_TR(0x4c8f49);
u8 U[4];
w4(U+0,u32(0x78f6bcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8f4e:{NFSU2_TR(0x4c8f4e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8f4f:{NFSU2_TR(0x4c8f4f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c8f54ull));
TAIL_STATIC(0x51cf70u,51c);
}
B4c8f54:L4c8f54:{c.instructions+=1;NFSU2_TR(0x4c8f54);
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
B4c8f57:L4c8f57:{c.instructions+=2;NFSU2_TR(0x4c8f57);
w4(R+4,u32(0x85ef50ull));
}
B4c8f5c:{NFSU2_TR(0x4c8f5c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c8f61ull));
TAIL_STATIC(0x5012c0u,501);
}
B4c8f61:L4c8f61:{c.instructions+=3;NFSU2_TR(0x4c8f61);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4c8f62:{NFSU2_TR(0x4c8f62);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4c8f63:{NFSU2_TR(0x4c8f63);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4c8f66:L4c8f66:{c.instructions+=4;NFSU2_TR(0x4c8f66);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c8f69:{NFSU2_TR(0x4c8f69);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c8f6c:{NFSU2_TR(0x4c8f6c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8f6d:{NFSU2_TR(0x4c8f6d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c8f72ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4c8f72:L4c8f72:{c.instructions+=4;NFSU2_TR(0x4c8f72);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4c8f75:{NFSU2_TR(0x4c8f75);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c8f78:{NFSU2_TR(0x4c8f78);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8f79:{NFSU2_TR(0x4c8f79);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c8f7eull));
TAIL_STATIC(0x50ca00u,50c);
}
B4c8f7e:L4c8f7e:{c.instructions+=5;NFSU2_TR(0x4c8f7e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c8f81:{NFSU2_TR(0x4c8f81);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4c8f84:{NFSU2_TR(0x4c8f84);
u8 U[4];
w4(U+0,u32(0x78f9d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8f89:{NFSU2_TR(0x4c8f89);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8f8a:{NFSU2_TR(0x4c8f8a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c8f8full));
TAIL_STATIC(0x51d040u,51d);
}
B4c8f8f:L4c8f8f:{c.instructions+=3;NFSU2_TR(0x4c8f8f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4c8f92:{NFSU2_TR(0x4c8f92);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4c8f94:{NFSU2_TR(0x4c8f94);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c8fa6;}}
}
B4c8f96:L4c8f96:{c.instructions+=4;NFSU2_TR(0x4c8f96);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8f98:{NFSU2_TR(0x4c8f98);
u8 U[4];
w4(U+0,u32(0x78f9d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8f9d:{NFSU2_TR(0x4c8f9d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8f9e:{NFSU2_TR(0x4c8f9e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c8fa3ull));
TAIL_STATIC(0x51cf70u,51c);
}
B4c8fa3:L4c8fa3:{c.instructions+=1;NFSU2_TR(0x4c8fa3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4c8fa6:L4c8fa6:{c.instructions+=5;NFSU2_TR(0x4c8fa6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4c8fa9:{NFSU2_TR(0x4c8fa9);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4c8fac:{NFSU2_TR(0x4c8fac);
u8 U[4];
w4(U+0,u32(0x78f9d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8fb1:{NFSU2_TR(0x4c8fb1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8fb2:{NFSU2_TR(0x4c8fb2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c8fb7ull));
TAIL_STATIC(0x51d040u,51d);
}
B4c8fb7:L4c8fb7:{c.instructions+=3;NFSU2_TR(0x4c8fb7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4c8fba:{NFSU2_TR(0x4c8fba);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4c8fbc:{NFSU2_TR(0x4c8fbc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c8fce;}}
}
B4c8fbe:L4c8fbe:{c.instructions+=4;NFSU2_TR(0x4c8fbe);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8fc0:{NFSU2_TR(0x4c8fc0);
u8 U[4];
w4(U+0,u32(0x78f9d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8fc5:{NFSU2_TR(0x4c8fc5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8fc6:{NFSU2_TR(0x4c8fc6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c8fcbull));
TAIL_STATIC(0x51cf70u,51c);
}
B4c8fcb:L4c8fcb:{c.instructions+=1;NFSU2_TR(0x4c8fcb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4c8fce:L4c8fce:{c.instructions+=5;NFSU2_TR(0x4c8fce);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4c8fd1:{NFSU2_TR(0x4c8fd1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+28),(U+0),4);
}
B4c8fd3:{NFSU2_TR(0x4c8fd3);
u8 U[4];
w4(U+0,u32(0x78f9d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8fd8:{NFSU2_TR(0x4c8fd8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8fd9:{NFSU2_TR(0x4c8fd9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c8fdeull));
TAIL_STATIC(0x51d040u,51d);
}
B4c8fde:L4c8fde:{c.instructions+=3;NFSU2_TR(0x4c8fde);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4c8fe1:{NFSU2_TR(0x4c8fe1);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4c8fe3:{NFSU2_TR(0x4c8fe3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4c8ff5;}}
}
B4c8fe5:L4c8fe5:{c.instructions+=4;NFSU2_TR(0x4c8fe5);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8fe7:{NFSU2_TR(0x4c8fe7);
u8 U[4];
w4(U+0,u32(0x78f9d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8fec:{NFSU2_TR(0x4c8fec);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8fed:{NFSU2_TR(0x4c8fed);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4c8ff2ull));
TAIL_STATIC(0x51cf70u,51c);
}
B4c8ff2:L4c8ff2:{c.instructions+=1;NFSU2_TR(0x4c8ff2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4c8ff5:L4c8ff5:{c.instructions+=4;NFSU2_TR(0x4c8ff5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4c8ff8:{NFSU2_TR(0x4c8ff8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4c8ffa:{NFSU2_TR(0x4c8ffa);
u8 U[4];
w4(U+0,u32(0xea570722ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4c8fff:{NFSU2_TR(0x4c8fff);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
TAIL_STATIC(0x4c9000u,4c9);
}
XIT:NFSU2_TR_EXIT(0x4c8,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
