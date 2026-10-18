#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_6e3(u8* __restrict R,Cpu& c);
u32 body_6e4(u8* __restrict R,Cpu& c);
u32 body_6e7(u8* __restrict R,Cpu& c);
u32 body_6e9(u8* __restrict R,Cpu& c);
u32 body_6ef(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x6e8,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x6e8,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_6e8(u8* __restrict R,Cpu& c);
u32 page_6e8(Cpu& c){return body_6e8(c.regs.data(),c);}
__attribute__((noinline)) u32 body_6e8(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x6e8002:goto L6e8002;
case 0x6e8008:goto L6e8008;
case 0x6e800a:c.instructions+=2;goto B6e800a;
case 0x6e800c:c.instructions+=1;goto B6e800c;
case 0x6e8012:goto L6e8012;
case 0x6e8014:goto L6e8014;
case 0x6e8019:c.instructions+=8;goto B6e8019;
case 0x6e801b:c.instructions+=7;goto B6e801b;
case 0x6e801e:c.instructions+=6;goto B6e801e;
case 0x6e8023:c.instructions+=5;goto B6e8023;
case 0x6e8025:c.instructions+=4;goto B6e8025;
case 0x6e802c:c.instructions+=3;goto B6e802c;
case 0x6e802f:c.instructions+=2;goto B6e802f;
case 0x6e8032:c.instructions+=1;goto B6e8032;
case 0x6e8034:goto L6e8034;
case 0x6e8038:c.instructions+=22;goto B6e8038;
case 0x6e803c:c.instructions+=21;goto B6e803c;
case 0x6e803f:c.instructions+=20;goto B6e803f;
case 0x6e8042:c.instructions+=19;goto B6e8042;
case 0x6e8044:c.instructions+=18;goto B6e8044;
case 0x6e8048:c.instructions+=17;goto B6e8048;
case 0x6e804c:c.instructions+=16;goto B6e804c;
case 0x6e804f:c.instructions+=15;goto B6e804f;
case 0x6e8051:c.instructions+=14;goto B6e8051;
case 0x6e8054:c.instructions+=13;goto B6e8054;
case 0x6e8058:c.instructions+=12;goto B6e8058;
case 0x6e805b:c.instructions+=11;goto B6e805b;
case 0x6e805e:c.instructions+=10;goto B6e805e;
case 0x6e8061:c.instructions+=9;goto B6e8061;
case 0x6e8064:c.instructions+=8;goto B6e8064;
case 0x6e8066:c.instructions+=7;goto B6e8066;
case 0x6e806a:c.instructions+=6;goto B6e806a;
case 0x6e806c:c.instructions+=5;goto B6e806c;
case 0x6e8070:c.instructions+=4;goto B6e8070;
case 0x6e8073:c.instructions+=3;goto B6e8073;
case 0x6e807a:c.instructions+=2;goto B6e807a;
case 0x6e807d:c.instructions+=1;goto B6e807d;
case 0x6e8081:goto L6e8081;
case 0x6e8085:c.instructions+=7;goto B6e8085;
case 0x6e8089:c.instructions+=6;goto B6e8089;
case 0x6e808c:c.instructions+=5;goto B6e808c;
case 0x6e808d:c.instructions+=4;goto B6e808d;
case 0x6e8090:c.instructions+=3;goto B6e8090;
case 0x6e8092:c.instructions+=2;goto B6e8092;
case 0x6e8096:c.instructions+=1;goto B6e8096;
case 0x6e809c:goto L6e809c;
case 0x6e80a0:c.instructions+=2;goto B6e80a0;
case 0x6e80a3:c.instructions+=1;goto B6e80a3;
case 0x6e80a8:goto L6e80a8;
case 0x6e80ac:c.instructions+=6;goto B6e80ac;
case 0x6e80af:c.instructions+=5;goto B6e80af;
case 0x6e80b2:c.instructions+=4;goto B6e80b2;
case 0x6e80b4:c.instructions+=3;goto B6e80b4;
case 0x6e80b6:c.instructions+=2;goto B6e80b6;
case 0x6e80b8:c.instructions+=1;goto B6e80b8;
case 0x6e80be:goto L6e80be;
case 0x6e80c2:c.instructions+=4;goto B6e80c2;
case 0x6e80c4:c.instructions+=3;goto B6e80c4;
case 0x6e80c8:c.instructions+=2;goto B6e80c8;
case 0x6e80cc:c.instructions+=1;goto B6e80cc;
case 0x6e80ce:goto L6e80ce;
case 0x6e80d2:goto L6e80d2;
case 0x6e80d6:c.instructions+=8;goto B6e80d6;
case 0x6e80d8:c.instructions+=7;goto B6e80d8;
case 0x6e80db:c.instructions+=6;goto B6e80db;
case 0x6e80e0:c.instructions+=5;goto B6e80e0;
case 0x6e80e2:c.instructions+=4;goto B6e80e2;
case 0x6e80e9:c.instructions+=3;goto B6e80e9;
case 0x6e80ec:c.instructions+=2;goto B6e80ec;
case 0x6e80ef:c.instructions+=1;goto B6e80ef;
case 0x6e80f1:goto L6e80f1;
case 0x6e80f4:c.instructions+=23;goto B6e80f4;
case 0x6e80f8:c.instructions+=22;goto B6e80f8;
case 0x6e80fb:c.instructions+=21;goto B6e80fb;
case 0x6e80ff:c.instructions+=20;goto B6e80ff;
case 0x6e8103:c.instructions+=19;goto B6e8103;
case 0x6e8106:c.instructions+=18;goto B6e8106;
case 0x6e8109:c.instructions+=17;goto B6e8109;
case 0x6e810c:c.instructions+=16;goto B6e810c;
case 0x6e810f:c.instructions+=15;goto B6e810f;
case 0x6e8112:c.instructions+=14;goto B6e8112;
case 0x6e8115:c.instructions+=13;goto B6e8115;
case 0x6e8119:c.instructions+=12;goto B6e8119;
case 0x6e811c:c.instructions+=11;goto B6e811c;
case 0x6e811f:c.instructions+=10;goto B6e811f;
case 0x6e8122:c.instructions+=9;goto B6e8122;
case 0x6e8125:c.instructions+=8;goto B6e8125;
case 0x6e8127:c.instructions+=7;goto B6e8127;
case 0x6e812b:c.instructions+=6;goto B6e812b;
case 0x6e812d:c.instructions+=5;goto B6e812d;
case 0x6e8131:c.instructions+=4;goto B6e8131;
case 0x6e8134:c.instructions+=3;goto B6e8134;
case 0x6e813b:c.instructions+=2;goto B6e813b;
case 0x6e813e:c.instructions+=1;goto B6e813e;
case 0x6e8142:goto L6e8142;
case 0x6e8146:c.instructions+=10;goto B6e8146;
case 0x6e814a:c.instructions+=9;goto B6e814a;
case 0x6e814d:c.instructions+=8;goto B6e814d;
case 0x6e8150:c.instructions+=7;goto B6e8150;
case 0x6e8154:c.instructions+=6;goto B6e8154;
case 0x6e8158:c.instructions+=5;goto B6e8158;
case 0x6e8159:c.instructions+=4;goto B6e8159;
case 0x6e815a:c.instructions+=3;goto B6e815a;
case 0x6e815c:c.instructions+=2;goto B6e815c;
case 0x6e8160:c.instructions+=1;goto B6e8160;
case 0x6e8166:goto L6e8166;
case 0x6e816a:goto L6e816a;
case 0x6e816d:c.instructions+=1;goto B6e816d;
case 0x6e816f:goto L6e816f;
case 0x6e8171:c.instructions+=2;goto B6e8171;
case 0x6e8175:c.instructions+=1;goto B6e8175;
case 0x6e8177:goto L6e8177;
case 0x6e8180:goto L6e8180;
case 0x6e8185:c.instructions+=8;goto B6e8185;
case 0x6e8187:c.instructions+=7;goto B6e8187;
case 0x6e818a:c.instructions+=6;goto B6e818a;
case 0x6e818f:c.instructions+=5;goto B6e818f;
case 0x6e8191:c.instructions+=4;goto B6e8191;
case 0x6e8198:c.instructions+=3;goto B6e8198;
case 0x6e819b:c.instructions+=2;goto B6e819b;
case 0x6e819e:c.instructions+=1;goto B6e819e;
case 0x6e81a0:goto L6e81a0;
case 0x6e81a4:c.instructions+=5;goto B6e81a4;
case 0x6e81a7:c.instructions+=4;goto B6e81a7;
case 0x6e81ab:c.instructions+=3;goto B6e81ab;
case 0x6e81ae:c.instructions+=2;goto B6e81ae;
case 0x6e81b5:c.instructions+=1;goto B6e81b5;
case 0x6e81b8:goto L6e81b8;
case 0x6e81bc:c.instructions+=3;goto B6e81bc;
case 0x6e81bd:c.instructions+=2;goto B6e81bd;
case 0x6e81bf:c.instructions+=1;goto B6e81bf;
case 0x6e81c1:goto L6e81c1;
case 0x6e81c4:c.instructions+=2;goto B6e81c4;
case 0x6e81c6:c.instructions+=1;goto B6e81c6;
case 0x6e81cc:goto L6e81cc;
case 0x6e81d0:c.instructions+=23;goto B6e81d0;
case 0x6e81d4:c.instructions+=22;goto B6e81d4;
case 0x6e81d8:c.instructions+=21;goto B6e81d8;
case 0x6e81da:c.instructions+=20;goto B6e81da;
case 0x6e81df:c.instructions+=19;goto B6e81df;
case 0x6e81e1:c.instructions+=18;goto B6e81e1;
case 0x6e81e3:c.instructions+=17;goto B6e81e3;
case 0x6e81e5:c.instructions+=16;goto B6e81e5;
case 0x6e81e8:c.instructions+=15;goto B6e81e8;
case 0x6e81e9:c.instructions+=14;goto B6e81e9;
case 0x6e81ec:c.instructions+=13;goto B6e81ec;
case 0x6e81ed:c.instructions+=12;goto B6e81ed;
case 0x6e81f0:c.instructions+=11;goto B6e81f0;
case 0x6e81f3:c.instructions+=10;goto B6e81f3;
case 0x6e81f5:c.instructions+=9;goto B6e81f5;
case 0x6e81f7:c.instructions+=8;goto B6e81f7;
case 0x6e81fb:c.instructions+=7;goto B6e81fb;
case 0x6e8200:c.instructions+=6;goto B6e8200;
case 0x6e8202:c.instructions+=5;goto B6e8202;
case 0x6e8207:c.instructions+=4;goto B6e8207;
case 0x6e8209:c.instructions+=3;goto B6e8209;
case 0x6e820b:c.instructions+=2;goto B6e820b;
case 0x6e820d:c.instructions+=1;goto B6e820d;
case 0x6e820f:goto L6e820f;
case 0x6e8212:c.instructions+=3;goto B6e8212;
case 0x6e8215:c.instructions+=2;goto B6e8215;
case 0x6e8219:c.instructions+=1;goto B6e8219;
case 0x6e821c:goto L6e821c;
case 0x6e8220:c.instructions+=2;goto B6e8220;
case 0x6e8223:c.instructions+=1;goto B6e8223;
case 0x6e8225:goto L6e8225;
case 0x6e8226:c.instructions+=1;goto B6e8226;
case 0x6e8229:goto L6e8229;
case 0x6e822b:c.instructions+=2;goto B6e822b;
case 0x6e822d:c.instructions+=1;goto B6e822d;
case 0x6e822f:goto L6e822f;
case 0x6e8230:c.instructions+=3;goto B6e8230;
case 0x6e8233:c.instructions+=2;goto B6e8233;
case 0x6e8237:c.instructions+=1;goto B6e8237;
case 0x6e823a:goto L6e823a;
case 0x6e823d:c.instructions+=1;goto B6e823d;
case 0x6e823f:goto L6e823f;
case 0x6e8240:c.instructions+=1;goto B6e8240;
case 0x6e8243:goto L6e8243;
case 0x6e8247:c.instructions+=5;goto B6e8247;
case 0x6e824b:c.instructions+=4;goto B6e824b;
case 0x6e824e:c.instructions+=3;goto B6e824e;
case 0x6e8250:c.instructions+=2;goto B6e8250;
case 0x6e8258:c.instructions+=1;goto B6e8258;
case 0x6e825a:goto L6e825a;
case 0x6e8260:goto L6e8260;
case 0x6e8263:c.instructions+=17;goto B6e8263;
case 0x6e8266:c.instructions+=16;goto B6e8266;
case 0x6e826b:c.instructions+=15;goto B6e826b;
case 0x6e826d:c.instructions+=14;goto B6e826d;
case 0x6e826f:c.instructions+=13;goto B6e826f;
case 0x6e8271:c.instructions+=12;goto B6e8271;
case 0x6e8274:c.instructions+=11;goto B6e8274;
case 0x6e8276:c.instructions+=10;goto B6e8276;
case 0x6e8279:c.instructions+=9;goto B6e8279;
case 0x6e827b:c.instructions+=8;goto B6e827b;
case 0x6e827e:c.instructions+=7;goto B6e827e;
case 0x6e8283:c.instructions+=6;goto B6e8283;
case 0x6e8285:c.instructions+=5;goto B6e8285;
case 0x6e828c:c.instructions+=4;goto B6e828c;
case 0x6e828f:c.instructions+=3;goto B6e828f;
case 0x6e8292:c.instructions+=2;goto B6e8292;
case 0x6e8295:c.instructions+=1;goto B6e8295;
case 0x6e8297:goto L6e8297;
case 0x6e829a:c.instructions+=2;goto B6e829a;
case 0x6e82a1:c.instructions+=1;goto B6e82a1;
case 0x6e82a4:goto L6e82a4;
case 0x6e82a8:c.instructions+=6;goto B6e82a8;
case 0x6e82ac:c.instructions+=5;goto B6e82ac;
case 0x6e82af:c.instructions+=4;goto B6e82af;
case 0x6e82b0:c.instructions+=3;goto B6e82b0;
case 0x6e82b2:c.instructions+=2;goto B6e82b2;
case 0x6e82b6:c.instructions+=1;goto B6e82b6;
case 0x6e82b8:goto L6e82b8;
case 0x6e82b9:c.instructions+=6;goto B6e82b9;
case 0x6e82ba:c.instructions+=5;goto B6e82ba;
case 0x6e82bb:c.instructions+=4;goto B6e82bb;
case 0x6e82bd:c.instructions+=3;goto B6e82bd;
case 0x6e82be:c.instructions+=2;goto B6e82be;
case 0x6e82c4:c.instructions+=1;goto B6e82c4;
case 0x6e82d0:goto L6e82d0;
case 0x6e82d3:c.instructions+=5;goto B6e82d3;
case 0x6e82d4:c.instructions+=4;goto B6e82d4;
case 0x6e82d6:c.instructions+=3;goto B6e82d6;
case 0x6e82d9:c.instructions+=2;goto B6e82d9;
case 0x6e82db:c.instructions+=1;goto B6e82db;
case 0x6e82dd:goto L6e82dd;
case 0x6e82e2:goto L6e82e2;
case 0x6e82e6:c.instructions+=2;goto B6e82e6;
case 0x6e82e8:c.instructions+=1;goto B6e82e8;
case 0x6e82ea:goto L6e82ea;
case 0x6e82ee:c.instructions+=6;goto B6e82ee;
case 0x6e82ef:c.instructions+=5;goto B6e82ef;
case 0x6e82f3:c.instructions+=4;goto B6e82f3;
case 0x6e82f4:c.instructions+=3;goto B6e82f4;
case 0x6e82f5:c.instructions+=2;goto B6e82f5;
case 0x6e82f7:c.instructions+=1;goto B6e82f7;
case 0x6e82fc:goto L6e82fc;
case 0x6e82fd:c.instructions+=2;goto B6e82fd;
case 0x6e8300:c.instructions+=1;goto B6e8300;
case 0x6e8303:goto L6e8303;
case 0x6e8306:c.instructions+=3;goto B6e8306;
case 0x6e8309:c.instructions+=2;goto B6e8309;
case 0x6e830b:c.instructions+=1;goto B6e830b;
case 0x6e830d:goto L6e830d;
case 0x6e8310:c.instructions+=2;goto B6e8310;
case 0x6e8313:c.instructions+=1;goto B6e8313;
case 0x6e831a:goto L6e831a;
case 0x6e831e:c.instructions+=6;goto B6e831e;
case 0x6e831f:c.instructions+=5;goto B6e831f;
case 0x6e8320:c.instructions+=4;goto B6e8320;
case 0x6e8321:c.instructions+=3;goto B6e8321;
case 0x6e8324:c.instructions+=2;goto B6e8324;
case 0x6e8325:c.instructions+=1;goto B6e8325;
case 0x6e832a:goto L6e832a;
case 0x6e832d:c.instructions+=4;goto B6e832d;
case 0x6e8330:c.instructions+=3;goto B6e8330;
case 0x6e8332:c.instructions+=2;goto B6e8332;
case 0x6e8336:c.instructions+=1;goto B6e8336;
case 0x6e8338:goto L6e8338;
case 0x6e833a:c.instructions+=1;goto B6e833a;
case 0x6e833c:goto L6e833c;
case 0x6e833e:c.instructions+=1;goto B6e833e;
case 0x6e8340:goto L6e8340;
case 0x6e8344:c.instructions+=2;goto B6e8344;
case 0x6e8346:c.instructions+=1;goto B6e8346;
case 0x6e8348:goto L6e8348;
case 0x6e834b:c.instructions+=1;goto B6e834b;
case 0x6e834d:goto L6e834d;
case 0x6e8350:c.instructions+=2;goto B6e8350;
case 0x6e8352:c.instructions+=1;goto B6e8352;
case 0x6e8354:goto L6e8354;
case 0x6e8356:c.instructions+=1;goto B6e8356;
case 0x6e8358:goto L6e8358;
case 0x6e835b:c.instructions+=2;goto B6e835b;
case 0x6e835e:c.instructions+=1;goto B6e835e;
case 0x6e8360:goto L6e8360;
case 0x6e8362:c.instructions+=1;goto B6e8362;
case 0x6e8364:goto L6e8364;
case 0x6e8365:goto L6e8365;
case 0x6e8369:c.instructions+=3;goto B6e8369;
case 0x6e836b:c.instructions+=2;goto B6e836b;
case 0x6e836e:c.instructions+=1;goto B6e836e;
case 0x6e8370:goto L6e8370;
case 0x6e8374:c.instructions+=3;goto B6e8374;
case 0x6e8377:c.instructions+=2;goto B6e8377;
case 0x6e8379:c.instructions+=1;goto B6e8379;
case 0x6e837b:goto L6e837b;
case 0x6e837e:c.instructions+=1;goto B6e837e;
case 0x6e8380:goto L6e8380;
case 0x6e8383:c.instructions+=2;goto B6e8383;
case 0x6e8385:c.instructions+=1;goto B6e8385;
case 0x6e8387:goto L6e8387;
case 0x6e8388:c.instructions+=3;goto B6e8388;
case 0x6e838b:c.instructions+=2;goto B6e838b;
case 0x6e838d:c.instructions+=1;goto B6e838d;
case 0x6e838f:goto L6e838f;
case 0x6e8391:goto L6e8391;
case 0x6e8393:c.instructions+=1;goto B6e8393;
case 0x6e8395:goto L6e8395;
case 0x6e8398:c.instructions+=2;goto B6e8398;
case 0x6e839a:c.instructions+=1;goto B6e839a;
case 0x6e839c:goto L6e839c;
case 0x6e839d:c.instructions+=3;goto B6e839d;
case 0x6e83a0:c.instructions+=2;goto B6e83a0;
case 0x6e83a2:c.instructions+=1;goto B6e83a2;
case 0x6e83a4:goto L6e83a4;
case 0x6e83a7:goto L6e83a7;
case 0x6e83ab:c.instructions+=37;goto B6e83ab;
case 0x6e83b0:c.instructions+=36;goto B6e83b0;
case 0x6e83b2:c.instructions+=35;goto B6e83b2;
case 0x6e83b7:c.instructions+=34;goto B6e83b7;
case 0x6e83b9:c.instructions+=33;goto B6e83b9;
case 0x6e83bb:c.instructions+=32;goto B6e83bb;
case 0x6e83bd:c.instructions+=31;goto B6e83bd;
case 0x6e83bf:c.instructions+=30;goto B6e83bf;
case 0x6e83c3:c.instructions+=29;goto B6e83c3;
case 0x6e83c5:c.instructions+=28;goto B6e83c5;
case 0x6e83c7:c.instructions+=27;goto B6e83c7;
case 0x6e83ca:c.instructions+=26;goto B6e83ca;
case 0x6e83ce:c.instructions+=25;goto B6e83ce;
case 0x6e83d0:c.instructions+=24;goto B6e83d0;
case 0x6e83d4:c.instructions+=23;goto B6e83d4;
case 0x6e83d8:c.instructions+=22;goto B6e83d8;
case 0x6e83da:c.instructions+=21;goto B6e83da;
case 0x6e83df:c.instructions+=20;goto B6e83df;
case 0x6e83e3:c.instructions+=19;goto B6e83e3;
case 0x6e83e5:c.instructions+=18;goto B6e83e5;
case 0x6e83e9:c.instructions+=17;goto B6e83e9;
case 0x6e83eb:c.instructions+=16;goto B6e83eb;
case 0x6e83ef:c.instructions+=15;goto B6e83ef;
case 0x6e83f3:c.instructions+=14;goto B6e83f3;
case 0x6e83f4:c.instructions+=13;goto B6e83f4;
case 0x6e83f7:c.instructions+=12;goto B6e83f7;
case 0x6e83f8:c.instructions+=11;goto B6e83f8;
case 0x6e83fb:c.instructions+=10;goto B6e83fb;
case 0x6e83fe:c.instructions+=9;goto B6e83fe;
case 0x6e8402:c.instructions+=8;goto B6e8402;
case 0x6e8404:c.instructions+=7;goto B6e8404;
case 0x6e8406:c.instructions+=6;goto B6e8406;
case 0x6e8409:c.instructions+=5;goto B6e8409;
case 0x6e840d:c.instructions+=4;goto B6e840d;
case 0x6e8411:c.instructions+=3;goto B6e8411;
case 0x6e8415:c.instructions+=2;goto B6e8415;
case 0x6e8419:c.instructions+=1;goto B6e8419;
case 0x6e841b:goto L6e841b;
case 0x6e8421:c.instructions+=3;goto B6e8421;
case 0x6e8423:c.instructions+=2;goto B6e8423;
case 0x6e8428:c.instructions+=1;goto B6e8428;
case 0x6e842a:goto L6e842a;
case 0x6e842f:goto L6e842f;
case 0x6e8432:c.instructions+=2;goto B6e8432;
case 0x6e8434:c.instructions+=1;goto B6e8434;
case 0x6e8436:goto L6e8436;
case 0x6e8439:c.instructions+=6;goto B6e8439;
case 0x6e843c:c.instructions+=5;goto B6e843c;
case 0x6e843f:c.instructions+=4;goto B6e843f;
case 0x6e8442:c.instructions+=3;goto B6e8442;
case 0x6e8445:c.instructions+=2;goto B6e8445;
case 0x6e844c:c.instructions+=1;goto B6e844c;
case 0x6e8451:goto L6e8451;
case 0x6e8456:c.instructions+=1;goto B6e8456;
case 0x6e8458:goto L6e8458;
case 0x6e845c:c.instructions+=2;goto B6e845c;
case 0x6e8460:c.instructions+=1;goto B6e8460;
case 0x6e8462:goto L6e8462;
case 0x6e8466:c.instructions+=2;goto B6e8466;
case 0x6e8468:c.instructions+=1;goto B6e8468;
case 0x6e846a:goto L6e846a;
case 0x6e846e:c.instructions+=2;goto B6e846e;
case 0x6e8470:c.instructions+=1;goto B6e8470;
case 0x6e8472:goto L6e8472;
case 0x6e8476:c.instructions+=2;goto B6e8476;
case 0x6e8478:c.instructions+=1;goto B6e8478;
case 0x6e847a:goto L6e847a;
case 0x6e847c:c.instructions+=2;goto B6e847c;
case 0x6e847e:c.instructions+=1;goto B6e847e;
case 0x6e8480:goto L6e8480;
case 0x6e8482:goto L6e8482;
case 0x6e8486:c.instructions+=13;goto B6e8486;
case 0x6e8489:c.instructions+=12;goto B6e8489;
case 0x6e848b:c.instructions+=11;goto B6e848b;
case 0x6e848f:c.instructions+=10;goto B6e848f;
case 0x6e8490:c.instructions+=9;goto B6e8490;
case 0x6e8493:c.instructions+=8;goto B6e8493;
case 0x6e8497:c.instructions+=7;goto B6e8497;
case 0x6e849a:c.instructions+=6;goto B6e849a;
case 0x6e849c:c.instructions+=5;goto B6e849c;
case 0x6e849f:c.instructions+=4;goto B6e849f;
case 0x6e84a3:c.instructions+=3;goto B6e84a3;
case 0x6e84a7:c.instructions+=2;goto B6e84a7;
case 0x6e84a9:c.instructions+=1;goto B6e84a9;
case 0x6e84ab:goto L6e84ab;
case 0x6e84af:goto L6e84af;
case 0x6e84b1:goto L6e84b1;
case 0x6e84b5:c.instructions+=2;goto B6e84b5;
case 0x6e84b7:c.instructions+=1;goto B6e84b7;
case 0x6e84b9:goto L6e84b9;
case 0x6e84bd:c.instructions+=7;goto B6e84bd;
case 0x6e84c1:c.instructions+=6;goto B6e84c1;
case 0x6e84c4:c.instructions+=5;goto B6e84c4;
case 0x6e84c7:c.instructions+=4;goto B6e84c7;
case 0x6e84c9:c.instructions+=3;goto B6e84c9;
case 0x6e84cb:c.instructions+=2;goto B6e84cb;
case 0x6e84cf:c.instructions+=1;goto B6e84cf;
case 0x6e84d3:goto L6e84d3;
case 0x6e84d5:c.instructions+=2;goto B6e84d5;
case 0x6e84d7:c.instructions+=1;goto B6e84d7;
case 0x6e84d9:goto L6e84d9;
case 0x6e84db:c.instructions+=1;goto B6e84db;
case 0x6e84e0:goto L6e84e0;
case 0x6e84e4:c.instructions+=16;goto B6e84e4;
case 0x6e84e7:c.instructions+=15;goto B6e84e7;
case 0x6e84ea:c.instructions+=14;goto B6e84ea;
case 0x6e84ec:c.instructions+=13;goto B6e84ec;
case 0x6e84f0:c.instructions+=12;goto B6e84f0;
case 0x6e84f4:c.instructions+=11;goto B6e84f4;
case 0x6e84f7:c.instructions+=10;goto B6e84f7;
case 0x6e84fb:c.instructions+=9;goto B6e84fb;
case 0x6e84fc:c.instructions+=8;goto B6e84fc;
case 0x6e84ff:c.instructions+=7;goto B6e84ff;
case 0x6e8502:c.instructions+=6;goto B6e8502;
case 0x6e8505:c.instructions+=5;goto B6e8505;
case 0x6e8507:c.instructions+=4;goto B6e8507;
case 0x6e8509:c.instructions+=3;goto B6e8509;
case 0x6e850d:c.instructions+=2;goto B6e850d;
case 0x6e850f:c.instructions+=1;goto B6e850f;
case 0x6e8511:goto L6e8511;
case 0x6e8515:c.instructions+=6;goto B6e8515;
case 0x6e8519:c.instructions+=5;goto B6e8519;
case 0x6e851b:c.instructions+=4;goto B6e851b;
case 0x6e851c:c.instructions+=3;goto B6e851c;
case 0x6e8520:c.instructions+=2;goto B6e8520;
case 0x6e8524:c.instructions+=1;goto B6e8524;
case 0x6e8526:goto L6e8526;
case 0x6e852b:goto L6e852b;
case 0x6e8531:goto L6e8531;
case 0x6e8535:c.instructions+=8;goto B6e8535;
case 0x6e8539:c.instructions+=7;goto B6e8539;
case 0x6e853c:c.instructions+=6;goto B6e853c;
case 0x6e853f:c.instructions+=5;goto B6e853f;
case 0x6e8541:c.instructions+=4;goto B6e8541;
case 0x6e8542:c.instructions+=3;goto B6e8542;
case 0x6e8544:c.instructions+=2;goto B6e8544;
case 0x6e8548:c.instructions+=1;goto B6e8548;
case 0x6e854a:goto L6e854a;
case 0x6e854c:c.instructions+=2;goto B6e854c;
case 0x6e854d:c.instructions+=1;goto B6e854d;
case 0x6e8551:goto L6e8551;
case 0x6e8553:c.instructions+=2;goto B6e8553;
case 0x6e8555:c.instructions+=1;goto B6e8555;
case 0x6e8557:goto L6e8557;
case 0x6e8559:c.instructions+=1;goto B6e8559;
case 0x6e8560:goto L6e8560;
case 0x6e8564:c.instructions+=16;goto B6e8564;
case 0x6e8567:c.instructions+=15;goto B6e8567;
case 0x6e856a:c.instructions+=14;goto B6e856a;
case 0x6e856c:c.instructions+=13;goto B6e856c;
case 0x6e8570:c.instructions+=12;goto B6e8570;
case 0x6e8574:c.instructions+=11;goto B6e8574;
case 0x6e8577:c.instructions+=10;goto B6e8577;
case 0x6e857b:c.instructions+=9;goto B6e857b;
case 0x6e857c:c.instructions+=8;goto B6e857c;
case 0x6e857f:c.instructions+=7;goto B6e857f;
case 0x6e8582:c.instructions+=6;goto B6e8582;
case 0x6e8585:c.instructions+=5;goto B6e8585;
case 0x6e8587:c.instructions+=4;goto B6e8587;
case 0x6e8589:c.instructions+=3;goto B6e8589;
case 0x6e858d:c.instructions+=2;goto B6e858d;
case 0x6e858f:c.instructions+=1;goto B6e858f;
case 0x6e8591:goto L6e8591;
case 0x6e8595:c.instructions+=6;goto B6e8595;
case 0x6e8599:c.instructions+=5;goto B6e8599;
case 0x6e859b:c.instructions+=4;goto B6e859b;
case 0x6e859c:c.instructions+=3;goto B6e859c;
case 0x6e85a0:c.instructions+=2;goto B6e85a0;
case 0x6e85a4:c.instructions+=1;goto B6e85a4;
case 0x6e85a6:goto L6e85a6;
case 0x6e85aa:goto L6e85aa;
case 0x6e85ad:c.instructions+=6;goto B6e85ad;
case 0x6e85b0:c.instructions+=5;goto B6e85b0;
case 0x6e85b2:c.instructions+=4;goto B6e85b2;
case 0x6e85b5:c.instructions+=3;goto B6e85b5;
case 0x6e85b9:c.instructions+=2;goto B6e85b9;
case 0x6e85c1:c.instructions+=1;goto B6e85c1;
case 0x6e85c3:goto L6e85c3;
case 0x6e85c7:c.instructions+=5;goto B6e85c7;
case 0x6e85cb:c.instructions+=4;goto B6e85cb;
case 0x6e85cd:c.instructions+=3;goto B6e85cd;
case 0x6e85cf:c.instructions+=2;goto B6e85cf;
case 0x6e85d2:c.instructions+=1;goto B6e85d2;
case 0x6e85d8:goto L6e85d8;
case 0x6e85dc:c.instructions+=3;goto B6e85dc;
case 0x6e85de:c.instructions+=2;goto B6e85de;
case 0x6e85e0:c.instructions+=1;goto B6e85e0;
case 0x6e85e2:goto L6e85e2;
case 0x6e85e4:c.instructions+=1;goto B6e85e4;
case 0x6e85e6:goto L6e85e6;
case 0x6e85ea:c.instructions+=4;goto B6e85ea;
case 0x6e85f0:c.instructions+=3;goto B6e85f0;
case 0x6e85f2:c.instructions+=2;goto B6e85f2;
case 0x6e85f5:c.instructions+=1;goto B6e85f5;
case 0x6e85f7:goto L6e85f7;
case 0x6e85fa:c.instructions+=6;goto B6e85fa;
case 0x6e85fe:c.instructions+=5;goto B6e85fe;
case 0x6e8600:c.instructions+=4;goto B6e8600;
case 0x6e8604:c.instructions+=3;goto B6e8604;
case 0x6e8608:c.instructions+=2;goto B6e8608;
case 0x6e860c:c.instructions+=1;goto B6e860c;
case 0x6e860e:goto L6e860e;
case 0x6e8610:c.instructions+=1;goto B6e8610;
case 0x6e8612:goto L6e8612;
case 0x6e8617:c.instructions+=7;goto B6e8617;
case 0x6e861b:c.instructions+=6;goto B6e861b;
case 0x6e861f:c.instructions+=5;goto B6e861f;
case 0x6e8623:c.instructions+=4;goto B6e8623;
case 0x6e8625:c.instructions+=3;goto B6e8625;
case 0x6e8627:c.instructions+=2;goto B6e8627;
case 0x6e862a:c.instructions+=1;goto B6e862a;
case 0x6e8630:goto L6e8630;
case 0x6e8634:c.instructions+=7;goto B6e8634;
case 0x6e8638:c.instructions+=6;goto B6e8638;
case 0x6e863a:c.instructions+=5;goto B6e863a;
case 0x6e863e:c.instructions+=4;goto B6e863e;
case 0x6e8640:c.instructions+=3;goto B6e8640;
case 0x6e8644:c.instructions+=2;goto B6e8644;
case 0x6e8646:c.instructions+=1;goto B6e8646;
case 0x6e8648:goto L6e8648;
case 0x6e864c:goto L6e864c;
case 0x6e864e:goto L6e864e;
case 0x6e8650:c.instructions+=3;goto B6e8650;
case 0x6e8653:c.instructions+=2;goto B6e8653;
case 0x6e8657:c.instructions+=1;goto B6e8657;
case 0x6e865d:goto L6e865d;
case 0x6e8661:c.instructions+=3;goto B6e8661;
case 0x6e8662:c.instructions+=2;goto B6e8662;
case 0x6e8664:c.instructions+=1;goto B6e8664;
case 0x6e866a:goto L6e866a;
case 0x6e866e:c.instructions+=21;goto B6e866e;
case 0x6e8670:c.instructions+=20;goto B6e8670;
case 0x6e8674:c.instructions+=19;goto B6e8674;
case 0x6e8676:c.instructions+=18;goto B6e8676;
case 0x6e8679:c.instructions+=17;goto B6e8679;
case 0x6e867e:c.instructions+=16;goto B6e867e;
case 0x6e8680:c.instructions+=15;goto B6e8680;
case 0x6e8684:c.instructions+=14;goto B6e8684;
case 0x6e8687:c.instructions+=13;goto B6e8687;
case 0x6e8688:c.instructions+=12;goto B6e8688;
case 0x6e868b:c.instructions+=11;goto B6e868b;
case 0x6e868c:c.instructions+=10;goto B6e868c;
case 0x6e868f:c.instructions+=9;goto B6e868f;
case 0x6e8692:c.instructions+=8;goto B6e8692;
case 0x6e8694:c.instructions+=7;goto B6e8694;
case 0x6e8696:c.instructions+=6;goto B6e8696;
case 0x6e8699:c.instructions+=5;goto B6e8699;
case 0x6e869d:c.instructions+=4;goto B6e869d;
case 0x6e86a1:c.instructions+=3;goto B6e86a1;
case 0x6e86a3:c.instructions+=2;goto B6e86a3;
case 0x6e86a7:c.instructions+=1;goto B6e86a7;
case 0x6e86a9:goto L6e86a9;
case 0x6e86ab:c.instructions+=3;goto B6e86ab;
case 0x6e86ad:c.instructions+=2;goto B6e86ad;
case 0x6e86b1:c.instructions+=1;goto B6e86b1;
case 0x6e86b7:goto L6e86b7;
case 0x6e86c0:goto L6e86c0;
case 0x6e86c3:c.instructions+=13;goto B6e86c3;
case 0x6e86c6:c.instructions+=12;goto B6e86c6;
case 0x6e86ca:c.instructions+=11;goto B6e86ca;
case 0x6e86cd:c.instructions+=10;goto B6e86cd;
case 0x6e86cf:c.instructions+=9;goto B6e86cf;
case 0x6e86d2:c.instructions+=8;goto B6e86d2;
case 0x6e86d3:c.instructions+=7;goto B6e86d3;
case 0x6e86d7:c.instructions+=6;goto B6e86d7;
case 0x6e86d9:c.instructions+=5;goto B6e86d9;
case 0x6e86dd:c.instructions+=4;goto B6e86dd;
case 0x6e86e0:c.instructions+=3;goto B6e86e0;
case 0x6e86e4:c.instructions+=2;goto B6e86e4;
case 0x6e86e6:c.instructions+=1;goto B6e86e6;
case 0x6e86e8:goto L6e86e8;
case 0x6e86ed:goto L6e86ed;
case 0x6e86ef:c.instructions+=1;goto B6e86ef;
case 0x6e86f4:goto L6e86f4;
case 0x6e86f8:c.instructions+=2;goto B6e86f8;
case 0x6e86fc:c.instructions+=1;goto B6e86fc;
case 0x6e86fe:goto L6e86fe;
case 0x6e8700:c.instructions+=2;goto B6e8700;
case 0x6e8702:c.instructions+=1;goto B6e8702;
case 0x6e8708:goto L6e8708;
case 0x6e870c:c.instructions+=1;goto B6e870c;
case 0x6e8710:goto L6e8710;
case 0x6e8713:c.instructions+=26;goto B6e8713;
case 0x6e8717:c.instructions+=25;goto B6e8717;
case 0x6e871b:c.instructions+=24;goto B6e871b;
case 0x6e8720:c.instructions+=23;goto B6e8720;
case 0x6e8724:c.instructions+=22;goto B6e8724;
case 0x6e8727:c.instructions+=21;goto B6e8727;
case 0x6e872b:c.instructions+=20;goto B6e872b;
case 0x6e872e:c.instructions+=19;goto B6e872e;
case 0x6e8730:c.instructions+=18;goto B6e8730;
case 0x6e8733:c.instructions+=17;goto B6e8733;
case 0x6e8736:c.instructions+=16;goto B6e8736;
case 0x6e8739:c.instructions+=15;goto B6e8739;
case 0x6e873c:c.instructions+=14;goto B6e873c;
case 0x6e8740:c.instructions+=13;goto B6e8740;
case 0x6e8743:c.instructions+=12;goto B6e8743;
case 0x6e8745:c.instructions+=11;goto B6e8745;
case 0x6e8746:c.instructions+=10;goto B6e8746;
case 0x6e874a:c.instructions+=9;goto B6e874a;
case 0x6e874c:c.instructions+=8;goto B6e874c;
case 0x6e8750:c.instructions+=7;goto B6e8750;
case 0x6e8753:c.instructions+=6;goto B6e8753;
case 0x6e8757:c.instructions+=5;goto B6e8757;
case 0x6e875a:c.instructions+=4;goto B6e875a;
case 0x6e875e:c.instructions+=3;goto B6e875e;
case 0x6e8762:c.instructions+=2;goto B6e8762;
case 0x6e8764:c.instructions+=1;goto B6e8764;
case 0x6e8766:goto L6e8766;
case 0x6e876a:c.instructions+=2;goto B6e876a;
case 0x6e876d:c.instructions+=1;goto B6e876d;
case 0x6e8772:goto L6e8772;
case 0x6e8776:c.instructions+=7;goto B6e8776;
case 0x6e8779:c.instructions+=6;goto B6e8779;
case 0x6e877c:c.instructions+=5;goto B6e877c;
case 0x6e877e:c.instructions+=4;goto B6e877e;
case 0x6e8782:c.instructions+=3;goto B6e8782;
case 0x6e8784:c.instructions+=2;goto B6e8784;
case 0x6e8786:c.instructions+=1;goto B6e8786;
case 0x6e8788:goto L6e8788;
case 0x6e878c:c.instructions+=1;goto B6e878c;
case 0x6e8790:goto L6e8790;
case 0x6e8793:c.instructions+=28;goto B6e8793;
case 0x6e8797:c.instructions+=27;goto B6e8797;
case 0x6e879b:c.instructions+=26;goto B6e879b;
case 0x6e879f:c.instructions+=25;goto B6e879f;
case 0x6e87a3:c.instructions+=24;goto B6e87a3;
case 0x6e87a6:c.instructions+=23;goto B6e87a6;
case 0x6e87aa:c.instructions+=22;goto B6e87aa;
case 0x6e87ad:c.instructions+=21;goto B6e87ad;
case 0x6e87b0:c.instructions+=20;goto B6e87b0;
case 0x6e87b3:c.instructions+=19;goto B6e87b3;
case 0x6e87b6:c.instructions+=18;goto B6e87b6;
case 0x6e87b9:c.instructions+=17;goto B6e87b9;
case 0x6e87bc:c.instructions+=16;goto B6e87bc;
case 0x6e87bf:c.instructions+=15;goto B6e87bf;
case 0x6e87c2:c.instructions+=14;goto B6e87c2;
case 0x6e87c6:c.instructions+=13;goto B6e87c6;
case 0x6e87c9:c.instructions+=12;goto B6e87c9;
case 0x6e87cb:c.instructions+=11;goto B6e87cb;
case 0x6e87cc:c.instructions+=10;goto B6e87cc;
case 0x6e87d0:c.instructions+=9;goto B6e87d0;
case 0x6e87d2:c.instructions+=8;goto B6e87d2;
case 0x6e87d6:c.instructions+=7;goto B6e87d6;
case 0x6e87d9:c.instructions+=6;goto B6e87d9;
case 0x6e87dd:c.instructions+=5;goto B6e87dd;
case 0x6e87e0:c.instructions+=4;goto B6e87e0;
case 0x6e87e4:c.instructions+=3;goto B6e87e4;
case 0x6e87e8:c.instructions+=2;goto B6e87e8;
case 0x6e87ea:c.instructions+=1;goto B6e87ea;
case 0x6e87ec:goto L6e87ec;
case 0x6e87f0:c.instructions+=2;goto B6e87f0;
case 0x6e87f3:c.instructions+=1;goto B6e87f3;
case 0x6e87f5:goto L6e87f5;
case 0x6e87f9:c.instructions+=3;goto B6e87f9;
case 0x6e87fd:c.instructions+=2;goto B6e87fd;
case 0x6e8800:c.instructions+=1;goto B6e8800;
case 0x6e8802:goto L6e8802;
case 0x6e8804:c.instructions+=2;goto B6e8804;
case 0x6e8808:c.instructions+=1;goto B6e8808;
case 0x6e880a:goto L6e880a;
case 0x6e8810:goto L6e8810;
case 0x6e8813:c.instructions+=7;goto B6e8813;
case 0x6e8817:c.instructions+=6;goto B6e8817;
case 0x6e881a:c.instructions+=5;goto B6e881a;
case 0x6e881d:c.instructions+=4;goto B6e881d;
case 0x6e8821:c.instructions+=3;goto B6e8821;
case 0x6e8822:c.instructions+=2;goto B6e8822;
case 0x6e8824:c.instructions+=1;goto B6e8824;
case 0x6e8826:goto L6e8826;
case 0x6e8829:c.instructions+=2;goto B6e8829;
case 0x6e882b:c.instructions+=1;goto B6e882b;
case 0x6e8831:goto L6e8831;
case 0x6e8835:c.instructions+=23;goto B6e8835;
case 0x6e8839:c.instructions+=22;goto B6e8839;
case 0x6e883d:c.instructions+=21;goto B6e883d;
case 0x6e883f:c.instructions+=20;goto B6e883f;
case 0x6e8844:c.instructions+=19;goto B6e8844;
case 0x6e8846:c.instructions+=18;goto B6e8846;
case 0x6e8848:c.instructions+=17;goto B6e8848;
case 0x6e884a:c.instructions+=16;goto B6e884a;
case 0x6e884b:c.instructions+=15;goto B6e884b;
case 0x6e884e:c.instructions+=14;goto B6e884e;
case 0x6e884f:c.instructions+=13;goto B6e884f;
case 0x6e8852:c.instructions+=12;goto B6e8852;
case 0x6e8855:c.instructions+=11;goto B6e8855;
case 0x6e8857:c.instructions+=10;goto B6e8857;
case 0x6e885a:c.instructions+=9;goto B6e885a;
case 0x6e885e:c.instructions+=8;goto B6e885e;
case 0x6e8863:c.instructions+=7;goto B6e8863;
case 0x6e8865:c.instructions+=6;goto B6e8865;
case 0x6e886a:c.instructions+=5;goto B6e886a;
case 0x6e886c:c.instructions+=4;goto B6e886c;
case 0x6e8870:c.instructions+=3;goto B6e8870;
case 0x6e8872:c.instructions+=2;goto B6e8872;
case 0x6e8874:c.instructions+=1;goto B6e8874;
case 0x6e8876:goto L6e8876;
case 0x6e8879:c.instructions+=3;goto B6e8879;
case 0x6e887c:c.instructions+=2;goto B6e887c;
case 0x6e8880:c.instructions+=1;goto B6e8880;
case 0x6e8883:goto L6e8883;
case 0x6e8887:c.instructions+=2;goto B6e8887;
case 0x6e888a:c.instructions+=1;goto B6e888a;
case 0x6e888c:goto L6e888c;
case 0x6e888d:c.instructions+=1;goto B6e888d;
case 0x6e8890:goto L6e8890;
case 0x6e8892:c.instructions+=1;goto B6e8892;
case 0x6e8894:goto L6e8894;
case 0x6e8895:c.instructions+=3;goto B6e8895;
case 0x6e8898:c.instructions+=2;goto B6e8898;
case 0x6e889c:c.instructions+=1;goto B6e889c;
case 0x6e889f:goto L6e889f;
case 0x6e88a2:c.instructions+=1;goto B6e88a2;
case 0x6e88a4:goto L6e88a4;
case 0x6e88a5:c.instructions+=1;goto B6e88a5;
case 0x6e88a8:goto L6e88a8;
case 0x6e88ac:c.instructions+=5;goto B6e88ac;
case 0x6e88b0:c.instructions+=4;goto B6e88b0;
case 0x6e88b3:c.instructions+=3;goto B6e88b3;
case 0x6e88b5:c.instructions+=2;goto B6e88b5;
case 0x6e88b7:c.instructions+=1;goto B6e88b7;
case 0x6e88b9:goto L6e88b9;
case 0x6e88c0:goto L6e88c0;
case 0x6e88c3:c.instructions+=8;goto B6e88c3;
case 0x6e88c5:c.instructions+=7;goto B6e88c5;
case 0x6e88c8:c.instructions+=6;goto B6e88c8;
case 0x6e88cc:c.instructions+=5;goto B6e88cc;
case 0x6e88cf:c.instructions+=4;goto B6e88cf;
case 0x6e88d2:c.instructions+=3;goto B6e88d2;
case 0x6e88d3:c.instructions+=2;goto B6e88d3;
case 0x6e88d5:c.instructions+=1;goto B6e88d5;
case 0x6e88d7:goto L6e88d7;
case 0x6e88d8:c.instructions+=6;goto B6e88d8;
case 0x6e88d9:c.instructions+=5;goto B6e88d9;
case 0x6e88da:c.instructions+=4;goto B6e88da;
case 0x6e88dc:c.instructions+=3;goto B6e88dc;
case 0x6e88dd:c.instructions+=2;goto B6e88dd;
case 0x6e88e0:c.instructions+=1;goto B6e88e0;
case 0x6e88f0:goto L6e88f0;
case 0x6e88f1:c.instructions+=30;goto B6e88f1;
case 0x6e88f3:c.instructions+=29;goto B6e88f3;
case 0x6e88f5:c.instructions+=28;goto B6e88f5;
case 0x6e88f9:c.instructions+=27;goto B6e88f9;
case 0x6e88fa:c.instructions+=26;goto B6e88fa;
case 0x6e88fe:c.instructions+=25;goto B6e88fe;
case 0x6e88ff:c.instructions+=24;goto B6e88ff;
case 0x6e8900:c.instructions+=23;goto B6e8900;
case 0x6e8901:c.instructions+=22;goto B6e8901;
case 0x6e8905:c.instructions+=21;goto B6e8905;
case 0x6e8908:c.instructions+=20;goto B6e8908;
case 0x6e890c:c.instructions+=19;goto B6e890c;
case 0x6e890e:c.instructions+=18;goto B6e890e;
case 0x6e8913:c.instructions+=17;goto B6e8913;
case 0x6e8915:c.instructions+=16;goto B6e8915;
case 0x6e8917:c.instructions+=15;goto B6e8917;
case 0x6e8919:c.instructions+=14;goto B6e8919;
case 0x6e891c:c.instructions+=13;goto B6e891c;
case 0x6e891d:c.instructions+=12;goto B6e891d;
case 0x6e8920:c.instructions+=11;goto B6e8920;
case 0x6e8924:c.instructions+=10;goto B6e8924;
case 0x6e8927:c.instructions+=9;goto B6e8927;
case 0x6e892a:c.instructions+=8;goto B6e892a;
case 0x6e892c:c.instructions+=7;goto B6e892c;
case 0x6e8930:c.instructions+=6;goto B6e8930;
case 0x6e8935:c.instructions+=5;goto B6e8935;
case 0x6e8937:c.instructions+=4;goto B6e8937;
case 0x6e893c:c.instructions+=3;goto B6e893c;
case 0x6e893e:c.instructions+=2;goto B6e893e;
case 0x6e8940:c.instructions+=1;goto B6e8940;
case 0x6e8942:goto L6e8942;
case 0x6e8943:c.instructions+=4;goto B6e8943;
case 0x6e8946:c.instructions+=3;goto B6e8946;
case 0x6e8949:c.instructions+=2;goto B6e8949;
case 0x6e894d:c.instructions+=1;goto B6e894d;
case 0x6e8950:goto L6e8950;
case 0x6e8956:c.instructions+=5;goto B6e8956;
case 0x6e8957:c.instructions+=4;goto B6e8957;
case 0x6e8958:c.instructions+=3;goto B6e8958;
case 0x6e8959:c.instructions+=2;goto B6e8959;
case 0x6e895a:c.instructions+=1;goto B6e895a;
case 0x6e895c:goto L6e895c;
case 0x6e895d:c.instructions+=1;goto B6e895d;
case 0x6e8960:goto L6e8960;
case 0x6e8961:c.instructions+=1;goto B6e8961;
case 0x6e8970:goto L6e8970;
case 0x6e8971:c.instructions+=2;goto B6e8971;
case 0x6e8973:c.instructions+=1;goto B6e8973;
case 0x6e8978:goto L6e8978;
case 0x6e897a:c.instructions+=12;goto B6e897a;
case 0x6e897d:c.instructions+=11;goto B6e897d;
case 0x6e8980:c.instructions+=10;goto B6e8980;
case 0x6e8983:c.instructions+=9;goto B6e8983;
case 0x6e8986:c.instructions+=8;goto B6e8986;
case 0x6e8989:c.instructions+=7;goto B6e8989;
case 0x6e898f:c.instructions+=6;goto B6e898f;
case 0x6e8992:c.instructions+=5;goto B6e8992;
case 0x6e8995:c.instructions+=4;goto B6e8995;
case 0x6e899c:c.instructions+=3;goto B6e899c;
case 0x6e899e:c.instructions+=2;goto B6e899e;
case 0x6e899f:c.instructions+=1;goto B6e899f;
case 0x6e89a0:goto L6e89a0;
case 0x6e89a4:c.instructions+=5;goto B6e89a4;
case 0x6e89a7:c.instructions+=4;goto B6e89a7;
case 0x6e89aa:c.instructions+=3;goto B6e89aa;
case 0x6e89ad:c.instructions+=2;goto B6e89ad;
case 0x6e89b0:c.instructions+=1;goto B6e89b0;
case 0x6e89c0:goto L6e89c0;
case 0x6e89c1:c.instructions+=7;goto B6e89c1;
case 0x6e89c2:c.instructions+=6;goto B6e89c2;
case 0x6e89c4:c.instructions+=5;goto B6e89c4;
case 0x6e89c5:c.instructions+=4;goto B6e89c5;
case 0x6e89c8:c.instructions+=3;goto B6e89c8;
case 0x6e89cc:c.instructions+=2;goto B6e89cc;
case 0x6e89cf:c.instructions+=1;goto B6e89cf;
case 0x6e89d5:goto L6e89d5;
case 0x6e89db:c.instructions+=6;goto B6e89db;
case 0x6e89dd:c.instructions+=5;goto B6e89dd;
case 0x6e89e0:c.instructions+=4;goto B6e89e0;
case 0x6e89e1:c.instructions+=3;goto B6e89e1;
case 0x6e89e4:c.instructions+=2;goto B6e89e4;
case 0x6e89e5:c.instructions+=1;goto B6e89e5;
case 0x6e89e8:goto L6e89e8;
case 0x6e89eb:c.instructions+=8;goto B6e89eb;
case 0x6e89ee:c.instructions+=7;goto B6e89ee;
case 0x6e89f2:c.instructions+=6;goto B6e89f2;
case 0x6e89f8:c.instructions+=5;goto B6e89f8;
case 0x6e89fa:c.instructions+=4;goto B6e89fa;
case 0x6e89fd:c.instructions+=3;goto B6e89fd;
case 0x6e8a00:c.instructions+=2;goto B6e8a00;
case 0x6e8a01:c.instructions+=1;goto B6e8a01;
case 0x6e8a04:goto L6e8a04;
case 0x6e8a07:c.instructions+=9;goto B6e8a07;
case 0x6e8a0a:c.instructions+=8;goto B6e8a0a;
case 0x6e8a0e:c.instructions+=7;goto B6e8a0e;
case 0x6e8a14:c.instructions+=6;goto B6e8a14;
case 0x6e8a16:c.instructions+=5;goto B6e8a16;
case 0x6e8a19:c.instructions+=4;goto B6e8a19;
case 0x6e8a1c:c.instructions+=3;goto B6e8a1c;
case 0x6e8a1f:c.instructions+=2;goto B6e8a1f;
case 0x6e8a20:c.instructions+=1;goto B6e8a20;
case 0x6e8a23:goto L6e8a23;
case 0x6e8a26:c.instructions+=4;goto B6e8a26;
case 0x6e8a28:c.instructions+=3;goto B6e8a28;
case 0x6e8a2c:c.instructions+=2;goto B6e8a2c;
case 0x6e8a2f:c.instructions+=1;goto B6e8a2f;
case 0x6e8a35:goto L6e8a35;
case 0x6e8a3a:c.instructions+=2;goto B6e8a3a;
case 0x6e8a3b:c.instructions+=1;goto B6e8a3b;
case 0x6e8a40:goto L6e8a40;
case 0x6e8a43:c.instructions+=104;goto B6e8a43;
case 0x6e8a49:c.instructions+=103;goto B6e8a49;
case 0x6e8a4b:c.instructions+=102;goto B6e8a4b;
case 0x6e8a4f:c.instructions+=101;goto B6e8a4f;
case 0x6e8a52:c.instructions+=100;goto B6e8a52;
case 0x6e8a55:c.instructions+=99;goto B6e8a55;
case 0x6e8a58:c.instructions+=98;goto B6e8a58;
case 0x6e8a5b:c.instructions+=97;goto B6e8a5b;
case 0x6e8a5e:c.instructions+=96;goto B6e8a5e;
case 0x6e8a60:c.instructions+=95;goto B6e8a60;
case 0x6e8a62:c.instructions+=94;goto B6e8a62;
case 0x6e8a66:c.instructions+=93;goto B6e8a66;
case 0x6e8a6a:c.instructions+=92;goto B6e8a6a;
case 0x6e8a6d:c.instructions+=91;goto B6e8a6d;
case 0x6e8a71:c.instructions+=90;goto B6e8a71;
case 0x6e8a74:c.instructions+=89;goto B6e8a74;
case 0x6e8a7a:c.instructions+=88;goto B6e8a7a;
case 0x6e8a7c:c.instructions+=87;goto B6e8a7c;
case 0x6e8a7f:c.instructions+=86;goto B6e8a7f;
case 0x6e8a83:c.instructions+=85;goto B6e8a83;
case 0x6e8a87:c.instructions+=84;goto B6e8a87;
case 0x6e8a8b:c.instructions+=83;goto B6e8a8b;
case 0x6e8a8e:c.instructions+=82;goto B6e8a8e;
case 0x6e8a92:c.instructions+=81;goto B6e8a92;
case 0x6e8a95:c.instructions+=80;goto B6e8a95;
case 0x6e8a9b:c.instructions+=79;goto B6e8a9b;
case 0x6e8a9d:c.instructions+=78;goto B6e8a9d;
case 0x6e8aa1:c.instructions+=77;goto B6e8aa1;
case 0x6e8aa4:c.instructions+=76;goto B6e8aa4;
case 0x6e8aaa:c.instructions+=75;goto B6e8aaa;
case 0x6e8aae:c.instructions+=74;goto B6e8aae;
case 0x6e8ab0:c.instructions+=73;goto B6e8ab0;
case 0x6e8ab2:c.instructions+=72;goto B6e8ab2;
case 0x6e8ab5:c.instructions+=71;goto B6e8ab5;
case 0x6e8ab8:c.instructions+=70;goto B6e8ab8;
case 0x6e8abe:c.instructions+=69;goto B6e8abe;
case 0x6e8ac2:c.instructions+=68;goto B6e8ac2;
case 0x6e8ac5:c.instructions+=67;goto B6e8ac5;
case 0x6e8ac8:c.instructions+=66;goto B6e8ac8;
case 0x6e8acc:c.instructions+=65;goto B6e8acc;
case 0x6e8acf:c.instructions+=64;goto B6e8acf;
case 0x6e8ad3:c.instructions+=63;goto B6e8ad3;
case 0x6e8ad7:c.instructions+=62;goto B6e8ad7;
case 0x6e8ad9:c.instructions+=61;goto B6e8ad9;
case 0x6e8add:c.instructions+=60;goto B6e8add;
case 0x6e8ae1:c.instructions+=59;goto B6e8ae1;
case 0x6e8ae4:c.instructions+=58;goto B6e8ae4;
case 0x6e8ae8:c.instructions+=57;goto B6e8ae8;
case 0x6e8aeb:c.instructions+=56;goto B6e8aeb;
case 0x6e8af1:c.instructions+=55;goto B6e8af1;
case 0x6e8af3:c.instructions+=54;goto B6e8af3;
case 0x6e8af6:c.instructions+=53;goto B6e8af6;
case 0x6e8afa:c.instructions+=52;goto B6e8afa;
case 0x6e8afe:c.instructions+=51;goto B6e8afe;
case 0x6e8b02:c.instructions+=50;goto B6e8b02;
case 0x6e8b05:c.instructions+=49;goto B6e8b05;
case 0x6e8b09:c.instructions+=48;goto B6e8b09;
case 0x6e8b0c:c.instructions+=47;goto B6e8b0c;
case 0x6e8b12:c.instructions+=46;goto B6e8b12;
case 0x6e8b14:c.instructions+=45;goto B6e8b14;
case 0x6e8b18:c.instructions+=44;goto B6e8b18;
case 0x6e8b1b:c.instructions+=43;goto B6e8b1b;
case 0x6e8b21:c.instructions+=42;goto B6e8b21;
case 0x6e8b25:c.instructions+=41;goto B6e8b25;
case 0x6e8b27:c.instructions+=40;goto B6e8b27;
case 0x6e8b29:c.instructions+=39;goto B6e8b29;
case 0x6e8b2c:c.instructions+=38;goto B6e8b2c;
case 0x6e8b2f:c.instructions+=37;goto B6e8b2f;
case 0x6e8b35:c.instructions+=36;goto B6e8b35;
case 0x6e8b39:c.instructions+=35;goto B6e8b39;
case 0x6e8b3c:c.instructions+=34;goto B6e8b3c;
case 0x6e8b3f:c.instructions+=33;goto B6e8b3f;
case 0x6e8b43:c.instructions+=32;goto B6e8b43;
case 0x6e8b46:c.instructions+=31;goto B6e8b46;
case 0x6e8b4a:c.instructions+=30;goto B6e8b4a;
case 0x6e8b4e:c.instructions+=29;goto B6e8b4e;
case 0x6e8b50:c.instructions+=28;goto B6e8b50;
case 0x6e8b54:c.instructions+=27;goto B6e8b54;
case 0x6e8b58:c.instructions+=26;goto B6e8b58;
case 0x6e8b5c:c.instructions+=25;goto B6e8b5c;
case 0x6e8b5f:c.instructions+=24;goto B6e8b5f;
case 0x6e8b65:c.instructions+=23;goto B6e8b65;
case 0x6e8b68:c.instructions+=22;goto B6e8b68;
case 0x6e8b6b:c.instructions+=21;goto B6e8b6b;
case 0x6e8b6c:c.instructions+=20;goto B6e8b6c;
case 0x6e8b6e:c.instructions+=19;goto B6e8b6e;
case 0x6e8b71:c.instructions+=18;goto B6e8b71;
case 0x6e8b75:c.instructions+=17;goto B6e8b75;
case 0x6e8b79:c.instructions+=16;goto B6e8b79;
case 0x6e8b7d:c.instructions+=15;goto B6e8b7d;
case 0x6e8b80:c.instructions+=14;goto B6e8b80;
case 0x6e8b84:c.instructions+=13;goto B6e8b84;
case 0x6e8b87:c.instructions+=12;goto B6e8b87;
case 0x6e8b8d:c.instructions+=11;goto B6e8b8d;
case 0x6e8b8f:c.instructions+=10;goto B6e8b8f;
case 0x6e8b93:c.instructions+=9;goto B6e8b93;
case 0x6e8b96:c.instructions+=8;goto B6e8b96;
case 0x6e8b9c:c.instructions+=7;goto B6e8b9c;
case 0x6e8ba0:c.instructions+=6;goto B6e8ba0;
case 0x6e8ba2:c.instructions+=5;goto B6e8ba2;
case 0x6e8ba5:c.instructions+=4;goto B6e8ba5;
case 0x6e8ba7:c.instructions+=3;goto B6e8ba7;
case 0x6e8bab:c.instructions+=2;goto B6e8bab;
case 0x6e8bad:c.instructions+=1;goto B6e8bad;
case 0x6e8bb3:goto L6e8bb3;
case 0x6e8bb4:goto L6e8bb4;
case 0x6e8bb5:goto L6e8bb5;
case 0x6e8bb6:c.instructions+=3;goto B6e8bb6;
case 0x6e8bb7:c.instructions+=2;goto B6e8bb7;
case 0x6e8bb8:c.instructions+=1;goto B6e8bb8;
case 0x6e8bc0:goto L6e8bc0;
case 0x6e8bc1:c.instructions+=5;goto B6e8bc1;
case 0x6e8bc4:c.instructions+=4;goto B6e8bc4;
case 0x6e8bc5:c.instructions+=3;goto B6e8bc5;
case 0x6e8bc9:c.instructions+=2;goto B6e8bc9;
case 0x6e8bca:c.instructions+=1;goto B6e8bca;
case 0x6e8bcc:goto L6e8bcc;
case 0x6e8bcd:c.instructions+=4;goto B6e8bcd;
case 0x6e8bd1:c.instructions+=3;goto B6e8bd1;
case 0x6e8bd2:c.instructions+=2;goto B6e8bd2;
case 0x6e8bd6:c.instructions+=1;goto B6e8bd6;
case 0x6e8be0:goto L6e8be0;
case 0x6e8be3:c.instructions+=15;goto B6e8be3;
case 0x6e8be7:c.instructions+=14;goto B6e8be7;
case 0x6e8bec:c.instructions+=13;goto B6e8bec;
case 0x6e8bee:c.instructions+=12;goto B6e8bee;
case 0x6e8bf0:c.instructions+=11;goto B6e8bf0;
case 0x6e8bf2:c.instructions+=10;goto B6e8bf2;
case 0x6e8bf5:c.instructions+=9;goto B6e8bf5;
case 0x6e8bf7:c.instructions+=8;goto B6e8bf7;
case 0x6e8bf9:c.instructions+=7;goto B6e8bf9;
case 0x6e8bfc:c.instructions+=6;goto B6e8bfc;
case 0x6e8c01:c.instructions+=5;goto B6e8c01;
case 0x6e8c03:c.instructions+=4;goto B6e8c03;
case 0x6e8c05:c.instructions+=3;goto B6e8c05;
case 0x6e8c08:c.instructions+=2;goto B6e8c08;
case 0x6e8c0b:c.instructions+=1;goto B6e8c0b;
case 0x6e8c0d:goto L6e8c0d;
case 0x6e8c11:c.instructions+=2;goto B6e8c11;
case 0x6e8c15:c.instructions+=1;goto B6e8c15;
case 0x6e8c17:goto L6e8c17;
case 0x6e8c19:c.instructions+=1;goto B6e8c19;
case 0x6e8c1b:goto L6e8c1b;
case 0x6e8c1d:c.instructions+=1;goto B6e8c1d;
case 0x6e8c1f:goto L6e8c1f;
case 0x6e8c21:goto L6e8c21;
case 0x6e8c25:c.instructions+=2;goto B6e8c25;
case 0x6e8c27:c.instructions+=1;goto B6e8c27;
case 0x6e8c29:goto L6e8c29;
case 0x6e8c2d:c.instructions+=1;goto B6e8c2d;
case 0x6e8c2f:goto L6e8c2f;
case 0x6e8c32:c.instructions+=6;goto B6e8c32;
case 0x6e8c34:c.instructions+=5;goto B6e8c34;
case 0x6e8c35:c.instructions+=4;goto B6e8c35;
case 0x6e8c36:c.instructions+=3;goto B6e8c36;
case 0x6e8c38:c.instructions+=2;goto B6e8c38;
case 0x6e8c3b:c.instructions+=1;goto B6e8c3b;
case 0x6e8c40:goto L6e8c40;
case 0x6e8c41:c.instructions+=1;goto B6e8c41;
case 0x6e8c43:goto L6e8c43;
case 0x6e8c44:c.instructions+=1;goto B6e8c44;
case 0x6e8c45:goto L6e8c45;
case 0x6e8c46:c.instructions+=3;goto B6e8c46;
case 0x6e8c48:c.instructions+=2;goto B6e8c48;
case 0x6e8c49:c.instructions+=1;goto B6e8c49;
case 0x6e8c50:goto L6e8c50;
case 0x6e8c51:c.instructions+=2;goto B6e8c51;
case 0x6e8c53:c.instructions+=1;goto B6e8c53;
case 0x6e8c58:goto L6e8c58;
case 0x6e8c5d:c.instructions+=1;goto B6e8c5d;
case 0x6e8c5f:goto L6e8c5f;
case 0x6e8c61:c.instructions+=2;goto B6e8c61;
case 0x6e8c62:c.instructions+=1;goto B6e8c62;
case 0x6e8c68:goto L6e8c68;
case 0x6e8c6b:goto L6e8c6b;
case 0x6e8c6d:c.instructions+=2;goto B6e8c6d;
case 0x6e8c6e:c.instructions+=1;goto B6e8c6e;
case 0x6e8c80:goto L6e8c80;
case 0x6e8c81:c.instructions+=5;goto B6e8c81;
case 0x6e8c83:c.instructions+=4;goto B6e8c83;
case 0x6e8c86:c.instructions+=3;goto B6e8c86;
case 0x6e8c88:c.instructions+=2;goto B6e8c88;
case 0x6e8c8e:c.instructions+=1;goto B6e8c8e;
case 0x6e8c90:goto L6e8c90;
case 0x6e8c96:c.instructions+=4;goto B6e8c96;
case 0x6e8c99:c.instructions+=3;goto B6e8c99;
case 0x6e8c9b:c.instructions+=2;goto B6e8c9b;
case 0x6e8c9c:c.instructions+=1;goto B6e8c9c;
case 0x6e8c9f:goto L6e8c9f;
case 0x6e8ca5:c.instructions+=4;goto B6e8ca5;
case 0x6e8ca8:c.instructions+=3;goto B6e8ca8;
case 0x6e8caa:c.instructions+=2;goto B6e8caa;
case 0x6e8cab:c.instructions+=1;goto B6e8cab;
case 0x6e8cae:goto L6e8cae;
case 0x6e8cb4:c.instructions+=4;goto B6e8cb4;
case 0x6e8cb7:c.instructions+=3;goto B6e8cb7;
case 0x6e8cb9:c.instructions+=2;goto B6e8cb9;
case 0x6e8cba:c.instructions+=1;goto B6e8cba;
case 0x6e8cbd:goto L6e8cbd;
case 0x6e8cbf:c.instructions+=2;goto B6e8cbf;
case 0x6e8cc0:c.instructions+=1;goto B6e8cc0;
case 0x6e8cd0:goto L6e8cd0;
case 0x6e8cd6:c.instructions+=10;goto B6e8cd6;
case 0x6e8cdd:c.instructions+=9;goto B6e8cdd;
case 0x6e8cde:c.instructions+=8;goto B6e8cde;
case 0x6e8cdf:c.instructions+=7;goto B6e8cdf;
case 0x6e8ce0:c.instructions+=6;goto B6e8ce0;
case 0x6e8ce4:c.instructions+=5;goto B6e8ce4;
case 0x6e8ce7:c.instructions+=4;goto B6e8ce7;
case 0x6e8cea:c.instructions+=3;goto B6e8cea;
case 0x6e8cec:c.instructions+=2;goto B6e8cec;
case 0x6e8ced:c.instructions+=1;goto B6e8ced;
case 0x6e8cef:goto L6e8cef;
case 0x6e8cf2:c.instructions+=6;goto B6e8cf2;
case 0x6e8cf6:c.instructions+=5;goto B6e8cf6;
case 0x6e8cf9:c.instructions+=4;goto B6e8cf9;
case 0x6e8cfd:c.instructions+=3;goto B6e8cfd;
case 0x6e8d04:c.instructions+=2;goto B6e8d04;
case 0x6e8d07:c.instructions+=1;goto B6e8d07;
case 0x6e8d0b:goto L6e8d0b;
case 0x6e8d12:c.instructions+=7;goto B6e8d12;
case 0x6e8d15:c.instructions+=6;goto B6e8d15;
case 0x6e8d1b:c.instructions+=5;goto B6e8d1b;
case 0x6e8d1f:c.instructions+=4;goto B6e8d1f;
case 0x6e8d26:c.instructions+=3;goto B6e8d26;
case 0x6e8d28:c.instructions+=2;goto B6e8d28;
case 0x6e8d2b:c.instructions+=1;goto B6e8d2b;
case 0x6e8d2d:goto L6e8d2d;
case 0x6e8d33:c.instructions+=4;goto B6e8d33;
case 0x6e8d37:c.instructions+=3;goto B6e8d37;
case 0x6e8d3b:c.instructions+=2;goto B6e8d3b;
case 0x6e8d3f:c.instructions+=1;goto B6e8d3f;
case 0x6e8d41:goto L6e8d41;
case 0x6e8d47:c.instructions+=3;goto B6e8d47;
case 0x6e8d4b:c.instructions+=2;goto B6e8d4b;
case 0x6e8d4f:c.instructions+=1;goto B6e8d4f;
case 0x6e8d53:goto L6e8d53;
case 0x6e8d56:c.instructions+=5;goto B6e8d56;
case 0x6e8d58:c.instructions+=4;goto B6e8d58;
case 0x6e8d5c:c.instructions+=3;goto B6e8d5c;
case 0x6e8d60:c.instructions+=2;goto B6e8d60;
case 0x6e8d64:c.instructions+=1;goto B6e8d64;
case 0x6e8d66:goto L6e8d66;
case 0x6e8d68:c.instructions+=1;goto B6e8d68;
case 0x6e8d6a:goto L6e8d6a;
case 0x6e8d6c:c.instructions+=1;goto B6e8d6c;
case 0x6e8d6e:goto L6e8d6e;
case 0x6e8d72:c.instructions+=2;goto B6e8d72;
case 0x6e8d74:c.instructions+=1;goto B6e8d74;
case 0x6e8d76:goto L6e8d76;
case 0x6e8d79:c.instructions+=1;goto B6e8d79;
case 0x6e8d7b:goto L6e8d7b;
case 0x6e8d7e:c.instructions+=2;goto B6e8d7e;
case 0x6e8d80:c.instructions+=1;goto B6e8d80;
case 0x6e8d82:goto L6e8d82;
case 0x6e8d84:c.instructions+=1;goto B6e8d84;
case 0x6e8d86:goto L6e8d86;
case 0x6e8d89:c.instructions+=2;goto B6e8d89;
case 0x6e8d8c:c.instructions+=1;goto B6e8d8c;
case 0x6e8d8e:goto L6e8d8e;
case 0x6e8d90:c.instructions+=1;goto B6e8d90;
case 0x6e8d92:goto L6e8d92;
case 0x6e8d93:goto L6e8d93;
case 0x6e8d97:c.instructions+=3;goto B6e8d97;
case 0x6e8d99:c.instructions+=2;goto B6e8d99;
case 0x6e8d9c:c.instructions+=1;goto B6e8d9c;
case 0x6e8d9e:goto L6e8d9e;
case 0x6e8da2:c.instructions+=3;goto B6e8da2;
case 0x6e8da5:c.instructions+=2;goto B6e8da5;
case 0x6e8da7:c.instructions+=1;goto B6e8da7;
case 0x6e8da9:goto L6e8da9;
case 0x6e8dac:c.instructions+=1;goto B6e8dac;
case 0x6e8db0:goto L6e8db0;
case 0x6e8db3:c.instructions+=2;goto B6e8db3;
case 0x6e8db5:c.instructions+=1;goto B6e8db5;
case 0x6e8db7:goto L6e8db7;
case 0x6e8db8:c.instructions+=3;goto B6e8db8;
case 0x6e8dbb:c.instructions+=2;goto B6e8dbb;
case 0x6e8dbd:c.instructions+=1;goto B6e8dbd;
case 0x6e8dbf:goto L6e8dbf;
case 0x6e8dc1:goto L6e8dc1;
case 0x6e8dc3:c.instructions+=1;goto B6e8dc3;
case 0x6e8dc5:goto L6e8dc5;
case 0x6e8dc8:c.instructions+=2;goto B6e8dc8;
case 0x6e8dca:c.instructions+=1;goto B6e8dca;
case 0x6e8dcc:goto L6e8dcc;
case 0x6e8dcd:c.instructions+=3;goto B6e8dcd;
case 0x6e8dd0:c.instructions+=2;goto B6e8dd0;
case 0x6e8dd2:c.instructions+=1;goto B6e8dd2;
case 0x6e8dd4:goto L6e8dd4;
case 0x6e8dd7:goto L6e8dd7;
case 0x6e8ddb:c.instructions+=34;goto B6e8ddb;
case 0x6e8dde:c.instructions+=33;goto B6e8dde;
case 0x6e8de3:c.instructions+=32;goto B6e8de3;
case 0x6e8de5:c.instructions+=31;goto B6e8de5;
case 0x6e8dea:c.instructions+=30;goto B6e8dea;
case 0x6e8dec:c.instructions+=29;goto B6e8dec;
case 0x6e8dee:c.instructions+=28;goto B6e8dee;
case 0x6e8df0:c.instructions+=27;goto B6e8df0;
case 0x6e8df2:c.instructions+=26;goto B6e8df2;
case 0x6e8df6:c.instructions+=25;goto B6e8df6;
case 0x6e8dfa:c.instructions+=24;goto B6e8dfa;
case 0x6e8dfc:c.instructions+=23;goto B6e8dfc;
case 0x6e8e00:c.instructions+=22;goto B6e8e00;
case 0x6e8e02:c.instructions+=21;goto B6e8e02;
case 0x6e8e04:c.instructions+=20;goto B6e8e04;
case 0x6e8e08:c.instructions+=19;goto B6e8e08;
case 0x6e8e0c:c.instructions+=18;goto B6e8e0c;
case 0x6e8e11:c.instructions+=17;goto B6e8e11;
case 0x6e8e13:c.instructions+=16;goto B6e8e13;
case 0x6e8e17:c.instructions+=15;goto B6e8e17;
case 0x6e8e19:c.instructions+=14;goto B6e8e19;
case 0x6e8e1c:c.instructions+=13;goto B6e8e1c;
case 0x6e8e1d:c.instructions+=12;goto B6e8e1d;
case 0x6e8e20:c.instructions+=11;goto B6e8e20;
case 0x6e8e24:c.instructions+=10;goto B6e8e24;
case 0x6e8e27:c.instructions+=9;goto B6e8e27;
case 0x6e8e2c:c.instructions+=8;goto B6e8e2c;
case 0x6e8e2e:c.instructions+=7;goto B6e8e2e;
case 0x6e8e32:c.instructions+=6;goto B6e8e32;
case 0x6e8e35:c.instructions+=5;goto B6e8e35;
case 0x6e8e39:c.instructions+=4;goto B6e8e39;
case 0x6e8e3b:c.instructions+=3;goto B6e8e3b;
case 0x6e8e3d:c.instructions+=2;goto B6e8e3d;
case 0x6e8e41:c.instructions+=1;goto B6e8e41;
case 0x6e8e43:goto L6e8e43;
case 0x6e8e46:c.instructions+=8;goto B6e8e46;
case 0x6e8e4a:c.instructions+=7;goto B6e8e4a;
case 0x6e8e4f:c.instructions+=6;goto B6e8e4f;
case 0x6e8e51:c.instructions+=5;goto B6e8e51;
case 0x6e8e54:c.instructions+=4;goto B6e8e54;
case 0x6e8e58:c.instructions+=3;goto B6e8e58;
case 0x6e8e59:c.instructions+=2;goto B6e8e59;
case 0x6e8e5b:c.instructions+=1;goto B6e8e5b;
case 0x6e8e5d:goto L6e8e5d;
case 0x6e8e61:c.instructions+=3;goto B6e8e61;
case 0x6e8e65:c.instructions+=2;goto B6e8e65;
case 0x6e8e67:c.instructions+=1;goto B6e8e67;
case 0x6e8e69:goto L6e8e69;
case 0x6e8e6e:c.instructions+=3;goto B6e8e6e;
case 0x6e8e70:c.instructions+=2;goto B6e8e70;
case 0x6e8e75:c.instructions+=1;goto B6e8e75;
case 0x6e8e77:goto L6e8e77;
case 0x6e8e7c:goto L6e8e7c;
case 0x6e8e80:c.instructions+=2;goto B6e8e80;
case 0x6e8e83:c.instructions+=1;goto B6e8e83;
case 0x6e8e85:goto L6e8e85;
case 0x6e8e88:c.instructions+=10;goto B6e8e88;
case 0x6e8e8b:c.instructions+=9;goto B6e8e8b;
case 0x6e8e8e:c.instructions+=8;goto B6e8e8e;
case 0x6e8e92:c.instructions+=7;goto B6e8e92;
case 0x6e8e95:c.instructions+=6;goto B6e8e95;
case 0x6e8e99:c.instructions+=5;goto B6e8e99;
case 0x6e8e9c:c.instructions+=4;goto B6e8e9c;
case 0x6e8e9f:c.instructions+=3;goto B6e8e9f;
case 0x6e8ea3:c.instructions+=2;goto B6e8ea3;
case 0x6e8eaa:c.instructions+=1;goto B6e8eaa;
case 0x6e8eaf:goto L6e8eaf;
case 0x6e8eb2:c.instructions+=1;goto B6e8eb2;
case 0x6e8eb4:goto L6e8eb4;
case 0x6e8eb8:c.instructions+=1;goto B6e8eb8;
case 0x6e8eba:goto L6e8eba;
case 0x6e8ebe:c.instructions+=2;goto B6e8ebe;
case 0x6e8ec0:c.instructions+=1;goto B6e8ec0;
case 0x6e8ec2:goto L6e8ec2;
case 0x6e8ec4:c.instructions+=1;goto B6e8ec4;
case 0x6e8ec9:goto L6e8ec9;
case 0x6e8ecb:c.instructions+=2;goto B6e8ecb;
case 0x6e8ecd:c.instructions+=1;goto B6e8ecd;
case 0x6e8ed3:goto L6e8ed3;
case 0x6e8ed7:c.instructions+=3;goto B6e8ed7;
case 0x6e8ed9:c.instructions+=2;goto B6e8ed9;
case 0x6e8edd:c.instructions+=1;goto B6e8edd;
case 0x6e8ee0:goto L6e8ee0;
case 0x6e8ee5:c.instructions+=8;goto B6e8ee5;
case 0x6e8ee7:c.instructions+=7;goto B6e8ee7;
case 0x6e8eea:c.instructions+=6;goto B6e8eea;
case 0x6e8eef:c.instructions+=5;goto B6e8eef;
case 0x6e8ef1:c.instructions+=4;goto B6e8ef1;
case 0x6e8ef8:c.instructions+=3;goto B6e8ef8;
case 0x6e8efb:c.instructions+=2;goto B6e8efb;
case 0x6e8efe:c.instructions+=1;goto B6e8efe;
case 0x6e8f00:goto L6e8f00;
case 0x6e8f04:c.instructions+=23;goto B6e8f04;
case 0x6e8f07:c.instructions+=22;goto B6e8f07;
case 0x6e8f0a:c.instructions+=21;goto B6e8f0a;
case 0x6e8f0e:c.instructions+=20;goto B6e8f0e;
case 0x6e8f10:c.instructions+=19;goto B6e8f10;
case 0x6e8f12:c.instructions+=18;goto B6e8f12;
case 0x6e8f16:c.instructions+=17;goto B6e8f16;
case 0x6e8f1a:c.instructions+=16;goto B6e8f1a;
case 0x6e8f1e:c.instructions+=15;goto B6e8f1e;
case 0x6e8f21:c.instructions+=14;goto B6e8f21;
case 0x6e8f23:c.instructions+=13;goto B6e8f23;
case 0x6e8f25:c.instructions+=12;goto B6e8f25;
case 0x6e8f29:c.instructions+=11;goto B6e8f29;
case 0x6e8f2d:c.instructions+=10;goto B6e8f2d;
case 0x6e8f31:c.instructions+=9;goto B6e8f31;
case 0x6e8f34:c.instructions+=8;goto B6e8f34;
case 0x6e8f37:c.instructions+=7;goto B6e8f37;
case 0x6e8f3a:c.instructions+=6;goto B6e8f3a;
case 0x6e8f3d:c.instructions+=5;goto B6e8f3d;
case 0x6e8f41:c.instructions+=4;goto B6e8f41;
case 0x6e8f45:c.instructions+=3;goto B6e8f45;
case 0x6e8f48:c.instructions+=2;goto B6e8f48;
case 0x6e8f4b:c.instructions+=1;goto B6e8f4b;
case 0x6e8f4e:goto L6e8f4e;
case 0x6e8f52:c.instructions+=8;goto B6e8f52;
case 0x6e8f56:c.instructions+=7;goto B6e8f56;
case 0x6e8f57:c.instructions+=6;goto B6e8f57;
case 0x6e8f5a:c.instructions+=5;goto B6e8f5a;
case 0x6e8f5d:c.instructions+=4;goto B6e8f5d;
case 0x6e8f60:c.instructions+=3;goto B6e8f60;
case 0x6e8f62:c.instructions+=2;goto B6e8f62;
case 0x6e8f66:c.instructions+=1;goto B6e8f66;
case 0x6e8f6c:goto L6e8f6c;
case 0x6e8f6e:goto L6e8f6e;
case 0x6e8f72:c.instructions+=2;goto B6e8f72;
case 0x6e8f74:c.instructions+=1;goto B6e8f74;
case 0x6e8f7a:goto L6e8f7a;
case 0x6e8f7e:c.instructions+=10;goto B6e8f7e;
case 0x6e8f82:c.instructions+=9;goto B6e8f82;
case 0x6e8f85:c.instructions+=8;goto B6e8f85;
case 0x6e8f88:c.instructions+=7;goto B6e8f88;
case 0x6e8f8b:c.instructions+=6;goto B6e8f8b;
case 0x6e8f8d:c.instructions+=5;goto B6e8f8d;
case 0x6e8f91:c.instructions+=4;goto B6e8f91;
case 0x6e8f93:c.instructions+=3;goto B6e8f93;
case 0x6e8f97:c.instructions+=2;goto B6e8f97;
case 0x6e8f9b:c.instructions+=1;goto B6e8f9b;
case 0x6e8fa0:goto L6e8fa0;
case 0x6e8fa2:c.instructions+=2;goto B6e8fa2;
case 0x6e8fa4:c.instructions+=1;goto B6e8fa4;
case 0x6e8faa:goto L6e8faa;
case 0x6e8fac:c.instructions+=11;goto B6e8fac;
case 0x6e8fb0:c.instructions+=10;goto B6e8fb0;
case 0x6e8fb3:c.instructions+=9;goto B6e8fb3;
case 0x6e8fb8:c.instructions+=8;goto B6e8fb8;
case 0x6e8fba:c.instructions+=7;goto B6e8fba;
case 0x6e8fbd:c.instructions+=6;goto B6e8fbd;
case 0x6e8fc2:c.instructions+=5;goto B6e8fc2;
case 0x6e8fc4:c.instructions+=4;goto B6e8fc4;
case 0x6e8fcb:c.instructions+=3;goto B6e8fcb;
case 0x6e8fce:c.instructions+=2;goto B6e8fce;
case 0x6e8fd1:c.instructions+=1;goto B6e8fd1;
case 0x6e8fd3:goto L6e8fd3;
case 0x6e8fd7:c.instructions+=12;goto B6e8fd7;
case 0x6e8fda:c.instructions+=11;goto B6e8fda;
case 0x6e8fde:c.instructions+=10;goto B6e8fde;
case 0x6e8fe2:c.instructions+=9;goto B6e8fe2;
case 0x6e8fe6:c.instructions+=8;goto B6e8fe6;
case 0x6e8fea:c.instructions+=7;goto B6e8fea;
case 0x6e8fee:c.instructions+=6;goto B6e8fee;
case 0x6e8ff2:c.instructions+=5;goto B6e8ff2;
case 0x6e8ff5:c.instructions+=4;goto B6e8ff5;
case 0x6e8ff8:c.instructions+=3;goto B6e8ff8;
case 0x6e8ffb:c.instructions+=2;goto B6e8ffb;
case 0x6e8fff:c.instructions+=1;goto B6e8fff;
default:missing_instruction(c.pc);}
B6e8002:L6e8002:{c.instructions+=1;NFSU2_TR(0x6e8002);
if(r1(R+518)){{goto L6e80a8;}}
}
B6e8008:L6e8008:{c.instructions+=3;NFSU2_TR(0x6e8008);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6e800a:{NFSU2_TR(0x6e800a);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6e800c:{NFSU2_TR(0x6e800c);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6e816a;}}
}
B6e8012:L6e8012:{c.instructions+=1;NFSU2_TR(0x6e8012);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6e8014:L6e8014:{c.instructions+=9;NFSU2_TR(0x6e8014);
u8 U[13];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+24,u32(r1(U+12)));
}
B6e8019:{NFSU2_TR(0x6e8019);
__builtin_memmove((R+4),(R+24),4);
}
B6e801b:{NFSU2_TR(0x6e801b);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x1full))));
}
B6e801e:{NFSU2_TR(0x6e801e);
w4(R+20,u32(0x1ull));
}
B6e8023:{NFSU2_TR(0x6e8023);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+20,shl<u32>(r4(R+20),u64(r1(U+0))));
}
B6e8025:{NFSU2_TR(0x6e8025);
u8 U[8];
w4(U+0,u32(u32(u32(0xa0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e802c:{NFSU2_TR(0x6e802c);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+24,sar<u32>(r4(R+24),u64(r4(U+0))));
}
B6e802f:{NFSU2_TR(0x6e802f);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w4(U+12,u32(u32(r4(U+8))&u32(r4(R+20))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6e8032:{NFSU2_TR(0x6e8032);
if(r1(R+518)){{goto L6e8081;}}
}
B6e8034:L6e8034:{c.instructions+=23;NFSU2_TR(0x6e8034);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6e8038:{NFSU2_TR(0x6e8038);
u8 U[10];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+24,u32(r2(U+8)));
}
B6e803c:{NFSU2_TR(0x6e803c);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e803f:{NFSU2_TR(0x6e803f);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e8042:{NFSU2_TR(0x6e8042);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+28))));
}
B6e8044:{NFSU2_TR(0x6e8044);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e8048:{NFSU2_TR(0x6e8048);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6e804c:{NFSU2_TR(0x6e804c);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e804f:{NFSU2_TR(0x6e804f);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6e8051:{NFSU2_TR(0x6e8051);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+8));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e8054:{NFSU2_TR(0x6e8054);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e8058:{NFSU2_TR(0x6e8058);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e805b:{NFSU2_TR(0x6e805b);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e805e:{NFSU2_TR(0x6e805e);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+8));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e8061:{NFSU2_TR(0x6e8061);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6e8064:{NFSU2_TR(0x6e8064);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6e8066:{NFSU2_TR(0x6e8066);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e806a:{NFSU2_TR(0x6e806a);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6e806c:{NFSU2_TR(0x6e806c);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e8070:{NFSU2_TR(0x6e8070);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
w4(R+8,u32(r2(U+0)));
}
B6e8073:{NFSU2_TR(0x6e8073);
u8 U[8];
w4(U+0,u32(u32(u32(0x9cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e807a:{NFSU2_TR(0x6e807a);
{u32 ea_=u32((r4(R+8)*4u)+r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e807d:{NFSU2_TR(0x6e807d);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e8081:L6e8081:{c.instructions+=8;NFSU2_TR(0x6e8081);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6e8085:{NFSU2_TR(0x6e8085);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B6e8089:{NFSU2_TR(0x6e8089);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x2ull))));
}
B6e808c:{NFSU2_TR(0x6e808c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6e808d:{NFSU2_TR(0x6e808d);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x10ull))));
}
B6e8090:{NFSU2_TR(0x6e8090);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6e8092:{NFSU2_TR(0x6e8092);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e8096:{NFSU2_TR(0x6e8096);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e8014u);}goto L6e8014;}}
}
B6e809c:L6e809c:{c.instructions+=3;NFSU2_TR(0x6e809c);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6e80a0:{NFSU2_TR(0x6e80a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e80a3:{NFSU2_TR(0x6e80a3);
{goto L6e81c1;}
}
B6e80a8:L6e80a8:{c.instructions+=7;NFSU2_TR(0x6e80a8);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6e80ac:{NFSU2_TR(0x6e80ac);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x2ull))));
}
B6e80af:{NFSU2_TR(0x6e80af);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(s64(s32(r4(R+24)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+28,u32(r8(U+16)));
}
B6e80b2:{NFSU2_TR(0x6e80b2);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+4))));
}
B6e80b4:{NFSU2_TR(0x6e80b4);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6e80b6:{NFSU2_TR(0x6e80b6);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6e80b8:{NFSU2_TR(0x6e80b8);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6e816a;}}
}
B6e80be:L6e80be:{c.instructions+=5;NFSU2_TR(0x6e80be);
u8 U[4];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B6e80c2:{NFSU2_TR(0x6e80c2);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+28))));
}
B6e80c4:{NFSU2_TR(0x6e80c4);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e80c8:{NFSU2_TR(0x6e80c8);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e80cc:{NFSU2_TR(0x6e80cc);
{goto L6e80d2;}
}
B6e80ce:L6e80ce:{c.instructions+=1;NFSU2_TR(0x6e80ce);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e80d2:L6e80d2:{c.instructions+=9;NFSU2_TR(0x6e80d2);
u8 U[9];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+24,u32(r1(U+8)));
}
B6e80d6:{NFSU2_TR(0x6e80d6);
__builtin_memmove((R+4),(R+24),4);
}
B6e80d8:{NFSU2_TR(0x6e80d8);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x1full))));
}
B6e80db:{NFSU2_TR(0x6e80db);
w4(R+20,u32(0x1ull));
}
B6e80e0:{NFSU2_TR(0x6e80e0);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+20,shl<u32>(r4(R+20),u64(r1(U+0))));
}
B6e80e2:{NFSU2_TR(0x6e80e2);
u8 U[8];
w4(U+0,u32(u32(u32(0xa0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e80e9:{NFSU2_TR(0x6e80e9);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+24,sar<u32>(r4(R+24),u64(r4(U+0))));
}
B6e80ec:{NFSU2_TR(0x6e80ec);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w4(U+12,u32(u32(r4(U+8))&u32(r4(R+20))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6e80ef:{NFSU2_TR(0x6e80ef);
if(r1(R+518)){{goto L6e8142;}}
}
B6e80f1:L6e80f1:{c.instructions+=24;NFSU2_TR(0x6e80f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e80f4:{NFSU2_TR(0x6e80f4);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B6e80f8:{NFSU2_TR(0x6e80f8);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
w4(R+24,u32(r1(U+0)));
}
B6e80fb:{NFSU2_TR(0x6e80fb);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e80ff:{NFSU2_TR(0x6e80ff);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6e8103:{NFSU2_TR(0x6e8103);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e8106:{NFSU2_TR(0x6e8106);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6e8109:{NFSU2_TR(0x6e8109);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e810c:{NFSU2_TR(0x6e810c);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e810f:{NFSU2_TR(0x6e810f);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+4));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6e8112:{NFSU2_TR(0x6e8112);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+8));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e8115:{NFSU2_TR(0x6e8115);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e8119:{NFSU2_TR(0x6e8119);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e811c:{NFSU2_TR(0x6e811c);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e811f:{NFSU2_TR(0x6e811f);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+8));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e8122:{NFSU2_TR(0x6e8122);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6e8125:{NFSU2_TR(0x6e8125);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6e8127:{NFSU2_TR(0x6e8127);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e812b:{NFSU2_TR(0x6e812b);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6e812d:{NFSU2_TR(0x6e812d);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e8131:{NFSU2_TR(0x6e8131);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
w4(R+8,u32(r2(U+0)));
}
B6e8134:{NFSU2_TR(0x6e8134);
u8 U[8];
w4(U+0,u32(u32(u32(0x9cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e813b:{NFSU2_TR(0x6e813b);
{u32 ea_=u32((r4(R+8)*4u)+r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e813e:{NFSU2_TR(0x6e813e);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e8142:L6e8142:{c.instructions+=11;NFSU2_TR(0x6e8142);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e8146:{NFSU2_TR(0x6e8146);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6e814a:{NFSU2_TR(0x6e814a);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B6e814d:{NFSU2_TR(0x6e814d);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x2ull))));
}
B6e8150:{NFSU2_TR(0x6e8150);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e8154:{NFSU2_TR(0x6e8154);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B6e8158:{NFSU2_TR(0x6e8158);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6e8159:{NFSU2_TR(0x6e8159);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6e815a:{NFSU2_TR(0x6e815a);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6e815c:{NFSU2_TR(0x6e815c);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e8160:{NFSU2_TR(0x6e8160);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e80ceu);}goto L6e80ce;}}
}
B6e8166:L6e8166:{c.instructions+=1;NFSU2_TR(0x6e8166);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6e816a:L6e816a:{c.instructions+=2;NFSU2_TR(0x6e816a);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e816d:{NFSU2_TR(0x6e816d);
{goto L6e81c1;}
}
B6e816f:L6e816f:{c.instructions+=3;NFSU2_TR(0x6e816f);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6e8171:{NFSU2_TR(0x6e8171);
u8 U[10];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w1(R+512,u8((r2(U+6))<(r2(R+8))));
w2(U+8,u16(u32(r2(U+6))-u32(r2(R+8))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B6e8175:{NFSU2_TR(0x6e8175);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6e81c1;}}
}
B6e8177:L6e8177:{c.instructions+=1;NFSU2_TR(0x6e8177);
{goto L6e8180;}
}
B6e8180:L6e8180:{c.instructions+=9;NFSU2_TR(0x6e8180);
u8 U[13];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+0,u32(r1(U+12)));
}
B6e8185:{NFSU2_TR(0x6e8185);
__builtin_memmove((R+4),(R+0),4);
}
B6e8187:{NFSU2_TR(0x6e8187);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x1full))));
}
B6e818a:{NFSU2_TR(0x6e818a);
w4(R+28,u32(0x1ull));
}
B6e818f:{NFSU2_TR(0x6e818f);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r1(U+0))));
}
B6e8191:{NFSU2_TR(0x6e8191);
u8 U[8];
w4(U+0,u32(u32(u32(0xa0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e8198:{NFSU2_TR(0x6e8198);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B6e819b:{NFSU2_TR(0x6e819b);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w4(U+12,u32(u32(r4(U+8))&u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6e819e:{NFSU2_TR(0x6e819e);
if(r1(R+518)){{goto L6e81b8;}}
}
B6e81a0:L6e81a0:{c.instructions+=6;NFSU2_TR(0x6e81a0);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e81a4:{NFSU2_TR(0x6e81a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e81a7:{NFSU2_TR(0x6e81a7);
u8 U[10];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+0,u32(r2(U+8)));
}
B6e81ab:{NFSU2_TR(0x6e81ab);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6e81ae:{NFSU2_TR(0x6e81ae);
u8 U[8];
w4(U+0,u32(u32(u32(0x9cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6e81b5:{NFSU2_TR(0x6e81b5);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6e81b8:L6e81b8:{c.instructions+=4;NFSU2_TR(0x6e81b8);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B6e81bc:{NFSU2_TR(0x6e81bc);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6e81bd:{NFSU2_TR(0x6e81bd);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6e81bf:{NFSU2_TR(0x6e81bf);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e8180u);}goto L6e8180;}}
}
B6e81c1:L6e81c1:{c.instructions+=3;NFSU2_TR(0x6e81c1);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x11ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B6e81c4:{NFSU2_TR(0x6e81c4);
u8 U[1];
w1(R+512,u8(0x0ull));
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6e81c6:{NFSU2_TR(0x6e81c6);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6e82b8;}}
}
B6e81cc:L6e81cc:{c.instructions+=24;NFSU2_TR(0x6e81cc);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B6e81d0:{NFSU2_TR(0x6e81d0);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(r2(U+4)));
}
B6e81d4:{NFSU2_TR(0x6e81d4);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(r2(U+4)));
}
B6e81d8:{NFSU2_TR(0x6e81d8);
__builtin_memmove((R+4),(R+0),4);
}
B6e81da:{NFSU2_TR(0x6e81da);
w4(R+8,u32(0x1ull));
}
B6e81df:{NFSU2_TR(0x6e81df);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r1(U+0))));
}
B6e81e1:{NFSU2_TR(0x6e81e1);
__builtin_memmove((R+20),(R+28),4);
}
B6e81e3:{NFSU2_TR(0x6e81e3);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+20,shr<u32>(r4(R+20),u64(r1(U+0))));
}
B6e81e5:{NFSU2_TR(0x6e81e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6e81e8:{NFSU2_TR(0x6e81e8);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6e81e9:{NFSU2_TR(0x6e81e9);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(r4(R+24)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B6e81ec:{NFSU2_TR(0x6e81ec);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6e81ed:{NFSU2_TR(0x6e81ed);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xfffffffeull))));
}
B6e81f0:{NFSU2_TR(0x6e81f0);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(r4(R+20)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B6e81f3:{NFSU2_TR(0x6e81f3);
__builtin_memmove((R+20),(R+12),4);
}
B6e81f5:{NFSU2_TR(0x6e81f5);
w4(R+20,u32(u32(r4(R+20))+u32(r4(R+8))));
}
B6e81f7:{NFSU2_TR(0x6e81f7);
u8 U[12];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+20),(U+8),4);
}
B6e81fb:{NFSU2_TR(0x6e81fb);
w4(R+4,u32(0x1full));
}
B6e8200:{NFSU2_TR(0x6e8200);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B6e8202:{NFSU2_TR(0x6e8202);
w4(R+0,u32(0x7fffffffull));
}
B6e8207:{NFSU2_TR(0x6e8207);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r1(U+0))));
}
B6e8209:{NFSU2_TR(0x6e8209);
__builtin_memmove((R+8),(R+20),4);
}
B6e820b:{NFSU2_TR(0x6e820b);
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6e820d:{NFSU2_TR(0x6e820d);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6e821c;}}
}
B6e820f:L6e820f:{c.instructions+=4;NFSU2_TR(0x6e820f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6e8212:{NFSU2_TR(0x6e8212);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(r4(R+24)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B6e8215:{NFSU2_TR(0x6e8215);
u8 U[12];
w4(U+0,u32(u32(u32(0x1ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B6e8219:{NFSU2_TR(0x6e8219);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xfffffffeull))));
}
B6e821c:L6e821c:{c.instructions+=3;NFSU2_TR(0x6e821c);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B6e8220:{NFSU2_TR(0x6e8220);
u8 U[2];
w2(U+0,u16(u32(r2(R+4))&u32(r2(R+4))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B6e8223:{NFSU2_TR(0x6e8223);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6e8229;}}
}
B6e8225:L6e8225:{c.instructions+=2;NFSU2_TR(0x6e8225);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6e8226:{NFSU2_TR(0x6e8226);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xfffffffeull))));
}
B6e8229:L6e8229:{c.instructions+=3;NFSU2_TR(0x6e8229);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6e822b:{NFSU2_TR(0x6e822b);
__builtin_memmove((R+28),(R+8),4);
}
B6e822d:{NFSU2_TR(0x6e822d);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6e823a;}}
}
B6e822f:L6e822f:{c.instructions+=4;NFSU2_TR(0x6e822f);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6e8230:{NFSU2_TR(0x6e8230);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+24)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B6e8233:{NFSU2_TR(0x6e8233);
u8 U[12];
w4(U+0,u32(u32(u32(0x1ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+20),(U+8),4);
}
B6e8237:{NFSU2_TR(0x6e8237);
w4(R+20,u32(u32(r4(R+20))&u32(u32(0xfffffffeull))));
}
B6e823a:L6e823a:{c.instructions+=2;NFSU2_TR(0x6e823a);
u8 U[2];
w2(U+0,u16(u32(r2(R+4))&u32(r2(R+4))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B6e823d:{NFSU2_TR(0x6e823d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6e8243;}}
}
B6e823f:L6e823f:{c.instructions+=2;NFSU2_TR(0x6e823f);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B6e8240:{NFSU2_TR(0x6e8240);
w4(R+20,u32(u32(r4(R+20))&u32(u32(0xfffffffeull))));
}
B6e8243:L6e8243:{c.instructions+=6;NFSU2_TR(0x6e8243);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x11ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B6e8247:{NFSU2_TR(0x6e8247);
u8 U[12];
w4(U+0,u32(u32(u32(0x3ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+20),(U+8),4);
}
B6e824b:{NFSU2_TR(0x6e824b);
w4(R+20,u32(u32(r4(R+20))&u32(u32(0xfffffffcull))));
}
B6e824e:{NFSU2_TR(0x6e824e);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6e8250:{NFSU2_TR(0x6e8250);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6e8258:{NFSU2_TR(0x6e8258);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6e82b8;}}
}
B6e825a:L6e825a:{c.instructions+=1;NFSU2_TR(0x6e825a);
__builtin_memmove((R+12),(R+12),4);
}
B6e8260:L6e8260:{c.instructions+=18;NFSU2_TR(0x6e8260);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+28))),2);
__builtin_memmove((R+0),(U+0),2);
}
B6e8263:{NFSU2_TR(0x6e8263);
w4(R+24,u32(r2(R+0)));
}
B6e8266:{NFSU2_TR(0x6e8266);
w4(R+0,u32(0x2aaaaaabull));
}
B6e826b:{NFSU2_TR(0x6e826b);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+24)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(u64(r8(U+16))>>32));
w4(R+0,u32(r8(U+16)));
}
B6e826d:{NFSU2_TR(0x6e826d);
w4(R+8,sar<u32>(r4(R+8),u64(u32(0x1ull))));
}
B6e826f:{NFSU2_TR(0x6e826f);
__builtin_memmove((R+0),(R+8),4);
}
B6e8271:{NFSU2_TR(0x6e8271);
u8 U[4];
w4(U+0,u32(u32(u32(0x1full))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B6e8274:{NFSU2_TR(0x6e8274);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B6e8276:{NFSU2_TR(0x6e8276);
w4(R+0,u32(r2(R+8)));
}
B6e8279:{NFSU2_TR(0x6e8279);
__builtin_memmove((R+4),(R+0),4);
}
B6e827b:{NFSU2_TR(0x6e827b);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x1full))));
}
B6e827e:{NFSU2_TR(0x6e827e);
w4(R+8,u32(0x1ull));
}
B6e8283:{NFSU2_TR(0x6e8283);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r1(U+0))));
}
B6e8285:{NFSU2_TR(0x6e8285);
u8 U[8];
w4(U+0,u32(u32(u32(0xa0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e828c:{NFSU2_TR(0x6e828c);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B6e828f:{NFSU2_TR(0x6e828f);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x2ull))));
}
B6e8292:{NFSU2_TR(0x6e8292);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w4(U+12,u32(u32(r4(U+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6e8295:{NFSU2_TR(0x6e8295);
if(r1(R+518)){{goto L6e82a4;}}
}
B6e8297:L6e8297:{c.instructions+=3;NFSU2_TR(0x6e8297);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6e829a:{NFSU2_TR(0x6e829a);
u8 U[8];
w4(U+0,u32(u32(u32(0x9cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e82a1:{NFSU2_TR(0x6e82a1);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6e82a4:L6e82a4:{c.instructions+=7;NFSU2_TR(0x6e82a4);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e82a8:{NFSU2_TR(0x6e82a8);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x11ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B6e82ac:{NFSU2_TR(0x6e82ac);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x4ull))));
}
B6e82af:{NFSU2_TR(0x6e82af);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6e82b0:{NFSU2_TR(0x6e82b0);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6e82b2:{NFSU2_TR(0x6e82b2);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e82b6:{NFSU2_TR(0x6e82b6);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e8260u);}goto L6e8260;}}
}
B6e82b8:L6e82b8:{c.instructions+=7;NFSU2_TR(0x6e82b8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6e82b9:{NFSU2_TR(0x6e82b9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e82ba:{NFSU2_TR(0x6e82ba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6e82bb:{NFSU2_TR(0x6e82bb);
w1(R+0,u8(0x1ull));
}
B6e82bd:{NFSU2_TR(0x6e82bd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6e82be:{NFSU2_TR(0x6e82be);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x84ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x84ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x84ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6e82c4:{NFSU2_TR(0x6e82c4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e82d0:L6e82d0:{c.instructions+=6;NFSU2_TR(0x6e82d0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x20ull))));
}
B6e82d3:{NFSU2_TR(0x6e82d3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e82d4:{NFSU2_TR(0x6e82d4);
__builtin_memmove((R+24),(R+4),4);
}
B6e82d6:{NFSU2_TR(0x6e82d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e82d9:{NFSU2_TR(0x6e82d9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6e82db:{NFSU2_TR(0x6e82db);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6e82e2;}}
}
B6e82dd:L6e82dd:{c.instructions+=1;NFSU2_TR(0x6e82dd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e82e2ull));
TAIL_STATIC(0x6e78f0u,6e7);
}
B6e82e2:L6e82e2:{c.instructions+=3;NFSU2_TR(0x6e82e2);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e82e6:{NFSU2_TR(0x6e82e6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6e82e8:{NFSU2_TR(0x6e82e8);
if(r1(R+518)){{goto L6e8303;}}
}
B6e82ea:L6e82ea:{c.instructions+=7;NFSU2_TR(0x6e82ea);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e82ee:{NFSU2_TR(0x6e82ee);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e82ef:{NFSU2_TR(0x6e82ef);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e82f3:{NFSU2_TR(0x6e82f3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e82f4:{NFSU2_TR(0x6e82f4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e82f5:{NFSU2_TR(0x6e82f5);
__builtin_memmove((R+4),(R+24),4);
}
B6e82f7:{NFSU2_TR(0x6e82f7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e82fcull));
TAIL_STATIC(0x6e7a80u,6e7);
}
B6e82fc:L6e82fc:{c.instructions+=3;NFSU2_TR(0x6e82fc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e82fd:{NFSU2_TR(0x6e82fd);
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
B6e8300:{NFSU2_TR(0x6e8300);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e8303:L6e8303:{c.instructions+=4;NFSU2_TR(0x6e8303);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e8306:{NFSU2_TR(0x6e8306);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B6e8309:{NFSU2_TR(0x6e8309);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6e830b:{NFSU2_TR(0x6e830b);
if(r1(R+518)){{goto L6e831a;}}
}
B6e830d:L6e830d:{c.instructions+=3;NFSU2_TR(0x6e830d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e8310:{NFSU2_TR(0x6e8310);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e8313:{NFSU2_TR(0x6e8313);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6e831a:L6e831a:{c.instructions+=7;NFSU2_TR(0x6e831a);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e831e:{NFSU2_TR(0x6e831e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e831f:{NFSU2_TR(0x6e831f);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e8320:{NFSU2_TR(0x6e8320);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e8321:{NFSU2_TR(0x6e8321);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6e8324:{NFSU2_TR(0x6e8324);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e8325:{NFSU2_TR(0x6e8325);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e832aull));
TAIL_STATIC(0x6e4900u,6e4);
}
B6e832a:L6e832a:{c.instructions+=5;NFSU2_TR(0x6e832a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e832d:{NFSU2_TR(0x6e832d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6e8330:{NFSU2_TR(0x6e8330);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6e8332:{NFSU2_TR(0x6e8332);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e8336:{NFSU2_TR(0x6e8336);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6e834d;}}
}
B6e8338:L6e8338:{c.instructions+=2;NFSU2_TR(0x6e8338);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6e833a:{NFSU2_TR(0x6e833a);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6e8340;}}
}
B6e833c:L6e833c:{c.instructions+=2;NFSU2_TR(0x6e833c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6e833e:{NFSU2_TR(0x6e833e);
{goto L6e83a7;}
}
B6e8340:L6e8340:{c.instructions+=3;NFSU2_TR(0x6e8340);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B6e8344:{NFSU2_TR(0x6e8344);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6e8346:{NFSU2_TR(0x6e8346);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6e83a7;}}
}
B6e8348:L6e8348:{c.instructions+=2;NFSU2_TR(0x6e8348);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xffffffffull))));
__builtin_memmove((R+0),(U+0),4);
}
B6e834b:{NFSU2_TR(0x6e834b);
{goto L6e83a7;}
}
B6e834d:L6e834d:{c.instructions+=3;NFSU2_TR(0x6e834d);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+8))),2);
w4(R+4,u32(r2(U+0)));
}
B6e8350:{NFSU2_TR(0x6e8350);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6e8352:{NFSU2_TR(0x6e8352);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6e8358;}}
}
B6e8354:L6e8354:{c.instructions+=2;NFSU2_TR(0x6e8354);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6e8356:{NFSU2_TR(0x6e8356);
{goto L6e83a7;}
}
B6e8358:L6e8358:{c.instructions+=3;NFSU2_TR(0x6e8358);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e835b:{NFSU2_TR(0x6e835b);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6e835e:{NFSU2_TR(0x6e835e);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6e8364;}}
}
B6e8360:L6e8360:{c.instructions+=2;NFSU2_TR(0x6e8360);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6e8362:{NFSU2_TR(0x6e8362);
{goto L6e8365;}
}
B6e8364:L6e8364:{c.instructions+=1;NFSU2_TR(0x6e8364);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B6e8365:L6e8365:{c.instructions+=4;NFSU2_TR(0x6e8365);
u8 U[10];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+12,u32(r2(U+8)));
}
B6e8369:{NFSU2_TR(0x6e8369);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6e836b:{NFSU2_TR(0x6e836b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B6e836e:{NFSU2_TR(0x6e836e);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L6e8391;}}
}
B6e8370:L6e8370:{c.instructions+=4;NFSU2_TR(0x6e8370);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+12,u32(r2(U+4)));
}
B6e8374:{NFSU2_TR(0x6e8374);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0xfffffffeull))));
}
B6e8377:{NFSU2_TR(0x6e8377);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6e8379:{NFSU2_TR(0x6e8379);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6e83a4;}}
}
B6e837b:L6e837b:{c.instructions+=2;NFSU2_TR(0x6e837b);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x2ull))));
}
B6e837e:{NFSU2_TR(0x6e837e);
__builtin_memmove((R+28),(R+28),4);
}
B6e8380:L6e8380:{c.instructions+=3;NFSU2_TR(0x6e8380);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+8))),2);
w4(R+20,u32(r2(U+0)));
}
B6e8383:{NFSU2_TR(0x6e8383);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+20),r4(U+0)));
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6e8385:{NFSU2_TR(0x6e8385);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L6e83a4;}}
}
B6e8387:L6e8387:{c.instructions+=4;NFSU2_TR(0x6e8387);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6e8388:{NFSU2_TR(0x6e8388);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x2ull))));
}
B6e838b:{NFSU2_TR(0x6e838b);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6e838d:{NFSU2_TR(0x6e838d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e8380u);}goto L6e8380;}}
}
B6e838f:L6e838f:{c.instructions+=1;NFSU2_TR(0x6e838f);
{goto L6e83a4;}
}
B6e8391:L6e8391:{c.instructions+=2;NFSU2_TR(0x6e8391);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6e8393:{NFSU2_TR(0x6e8393);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6e83a4;}}
}
B6e8395:L6e8395:{c.instructions+=3;NFSU2_TR(0x6e8395);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+8))),2);
w4(R+12,u32(r2(U+0)));
}
B6e8398:{NFSU2_TR(0x6e8398);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6e839a:{NFSU2_TR(0x6e839a);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6e83a4;}}
}
B6e839c:L6e839c:{c.instructions+=4;NFSU2_TR(0x6e839c);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B6e839d:{NFSU2_TR(0x6e839d);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x2ull))));
}
B6e83a0:{NFSU2_TR(0x6e83a0);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6e83a2:{NFSU2_TR(0x6e83a2);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e8395u);}goto L6e8395;}}
}
B6e83a4:L6e83a4:{c.instructions+=1;NFSU2_TR(0x6e83a4);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6e83a7:L6e83a7:{c.instructions+=38;NFSU2_TR(0x6e83a7);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+12,u32(r1(U+4)));
}
B6e83ab:{NFSU2_TR(0x6e83ab);
w4(R+4,u32(0x1full));
}
B6e83b0:{NFSU2_TR(0x6e83b0);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+12))));
}
B6e83b2:{NFSU2_TR(0x6e83b2);
w4(R+8,u32(0x7fffffffull));
}
B6e83b7:{NFSU2_TR(0x6e83b7);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r1(U+0))));
}
B6e83b9:{NFSU2_TR(0x6e83b9);
__builtin_memmove((R+4),(R+12),4);
}
B6e83bb:{NFSU2_TR(0x6e83bb);
__builtin_memmove((R+20),(R+0),4);
}
B6e83bd:{NFSU2_TR(0x6e83bd);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+20,sar<u32>(r4(R+20),u64(r1(U+0))));
}
B6e83bf:{NFSU2_TR(0x6e83bf);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e83c3:{NFSU2_TR(0x6e83c3);
__builtin_memmove((R+4),(R+8),4);
}
B6e83c5:{NFSU2_TR(0x6e83c5);
w4(R+4,u32(u32(r4(R+4))&u32(r4(R+0))));
}
B6e83c7:{NFSU2_TR(0x6e83c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e83ca:{NFSU2_TR(0x6e83ca);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e83ce:{NFSU2_TR(0x6e83ce);
__builtin_memmove((R+4),(R+12),4);
}
B6e83d0:{NFSU2_TR(0x6e83d0);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e83d4:{NFSU2_TR(0x6e83d4);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e83d8:{NFSU2_TR(0x6e83d8);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r1(U+0))));
}
B6e83da:{NFSU2_TR(0x6e83da);
w4(R+4,u32(0x1ull));
}
B6e83df:{NFSU2_TR(0x6e83df);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e83e3:{NFSU2_TR(0x6e83e3);
__builtin_memmove((R+4),(R+12),4);
}
B6e83e5:{NFSU2_TR(0x6e83e5);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6e83e9:{NFSU2_TR(0x6e83e9);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+12,shl<u32>(r4(R+12),u64(r1(U+0))));
}
B6e83eb:{NFSU2_TR(0x6e83eb);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e83ef:{NFSU2_TR(0x6e83ef);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B6e83f3:{NFSU2_TR(0x6e83f3);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B6e83f4:{NFSU2_TR(0x6e83f4);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+12)))));
w8(U+8,u64(s64(s32(r4(R+0)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+12,u32(r8(U+16)));
}
B6e83f7:{NFSU2_TR(0x6e83f7);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B6e83f8:{NFSU2_TR(0x6e83f8);
w4(R+12,u32(u32(r4(R+12))&u32(u32(0xfffffffeull))));
}
B6e83fb:{NFSU2_TR(0x6e83fb);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+12)))));
w8(U+8,u64(s64(s32(r4(R+20)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+12,u32(r8(U+16)));
}
B6e83fe:{NFSU2_TR(0x6e83fe);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e8402:{NFSU2_TR(0x6e8402);
__builtin_memmove((R+20),(R+28),4);
}
B6e8404:{NFSU2_TR(0x6e8404);
w4(R+20,u32(u32(r4(R+20))+u32(r4(R+12))));
}
B6e8406:{NFSU2_TR(0x6e8406);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6e8409:{NFSU2_TR(0x6e8409);
u8 U[12];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+12),(U+8),4);
}
B6e840d:{NFSU2_TR(0x6e840d);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6e8411:{NFSU2_TR(0x6e8411);
u8 U[16];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+20),r4(U+8)));
w4(U+12,u32(u32(r4(R+20))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B6e8415:{NFSU2_TR(0x6e8415);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e8419:{NFSU2_TR(0x6e8419);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6e842a;}}
}
B6e841b:L6e841b:{c.instructions+=4;NFSU2_TR(0x6e841b);
__builtin_memmove((R+4),gp(0x811e32),1);
}
B6e8421:{NFSU2_TR(0x6e8421);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6e8423:{NFSU2_TR(0x6e8423);
u8 U[5];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B6e8428:{NFSU2_TR(0x6e8428);
if(r1(R+518)){{goto L6e842f;}}
}
B6e842a:L6e842a:{c.instructions+=1;NFSU2_TR(0x6e842a);
u8 U[5];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B6e842f:L6e842f:{c.instructions+=3;NFSU2_TR(0x6e842f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e8432:{NFSU2_TR(0x6e8432);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6e8434:{NFSU2_TR(0x6e8434);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6e8451;}}
}
B6e8436:L6e8436:{c.instructions+=7;NFSU2_TR(0x6e8436);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e8439:{NFSU2_TR(0x6e8439);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e843c:{NFSU2_TR(0x6e843c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e843f:{NFSU2_TR(0x6e843f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e8442:{NFSU2_TR(0x6e8442);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e8445:{NFSU2_TR(0x6e8445);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B6e844c:{NFSU2_TR(0x6e844c);
{goto L6e85aa;}
}
B6e8451:L6e8451:{c.instructions+=2;NFSU2_TR(0x6e8451);
u8 U[16];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6e8456:{NFSU2_TR(0x6e8456);
if(r1(R+518)){{goto L6e847a;}}
}
B6e8458:L6e8458:{c.instructions+=3;NFSU2_TR(0x6e8458);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e845c:{NFSU2_TR(0x6e845c);
u8 U[16];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6e8460:{NFSU2_TR(0x6e8460);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6e847a;}}
}
B6e8462:L6e8462:{c.instructions+=3;NFSU2_TR(0x6e8462);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e8466:{NFSU2_TR(0x6e8466);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6e8468:{NFSU2_TR(0x6e8468);
if(r1(R+518)){{goto L6e847a;}}
}
B6e846a:L6e846a:{c.instructions+=3;NFSU2_TR(0x6e846a);
u8 U[5];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B6e846e:{NFSU2_TR(0x6e846e);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6e8470:{NFSU2_TR(0x6e8470);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6e847a;}}
}
B6e8472:L6e8472:{c.instructions+=3;NFSU2_TR(0x6e8472);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e8476:{NFSU2_TR(0x6e8476);
w4(R+4,u32(u32(r4(R+4))&u32(r4(R+8))));
}
B6e8478:{NFSU2_TR(0x6e8478);
{goto L6e84b1;}
}
B6e847a:L6e847a:{c.instructions+=3;NFSU2_TR(0x6e847a);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6e847c:{NFSU2_TR(0x6e847c);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6e847e:{NFSU2_TR(0x6e847e);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6e84af;}}
}
B6e8480:L6e8480:{c.instructions+=1;NFSU2_TR(0x6e8480);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6e8482:L6e8482:{c.instructions+=14;NFSU2_TR(0x6e8482);
u8 U[10];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+20,u32(r2(U+8)));
}
B6e8486:{NFSU2_TR(0x6e8486);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e8489:{NFSU2_TR(0x6e8489);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B6e848b:{NFSU2_TR(0x6e848b);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e848f:{NFSU2_TR(0x6e848f);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6e8490:{NFSU2_TR(0x6e8490);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x10ull))));
}
B6e8493:{NFSU2_TR(0x6e8493);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6e8497:{NFSU2_TR(0x6e8497);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e849a:{NFSU2_TR(0x6e849a);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6e849c:{NFSU2_TR(0x6e849c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e849f:{NFSU2_TR(0x6e849f);
{u32 ea_=u32((r4(R+4)*4u)+r4(R+0)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e84a3:{NFSU2_TR(0x6e84a3);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B6e84a7:{NFSU2_TR(0x6e84a7);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6e84a9:{NFSU2_TR(0x6e84a9);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e8482u);}goto L6e8482;}}
}
B6e84ab:L6e84ab:{c.instructions+=1;NFSU2_TR(0x6e84ab);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6e84af:L6e84af:{c.instructions+=1;NFSU2_TR(0x6e84af);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6e84b1:L6e84b1:{c.instructions+=3;NFSU2_TR(0x6e84b1);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e84b5:{NFSU2_TR(0x6e84b5);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6e84b7:{NFSU2_TR(0x6e84b7);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6e852b;}}
}
B6e84b9:L6e84b9:{c.instructions+=8;NFSU2_TR(0x6e84b9);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B6e84bd:{NFSU2_TR(0x6e84bd);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e84c1:{NFSU2_TR(0x6e84c1);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6e84c4:{NFSU2_TR(0x6e84c4);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+20)))));
w8(U+8,u64(s64(s32(r4(R+0)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+20,u32(r8(U+16)));
}
B6e84c7:{NFSU2_TR(0x6e84c7);
w4(R+20,u32(u32(r4(R+20))+u32(r4(R+12))));
}
B6e84c9:{NFSU2_TR(0x6e84c9);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+4))));
}
B6e84cb:{NFSU2_TR(0x6e84cb);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e84cf:{NFSU2_TR(0x6e84cf);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e84d3:L6e84d3:{c.instructions+=3;NFSU2_TR(0x6e84d3);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6e84d5:{NFSU2_TR(0x6e84d5);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6e84d7:{NFSU2_TR(0x6e84d7);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6e8511;}}
}
B6e84d9:L6e84d9:{c.instructions+=2;NFSU2_TR(0x6e84d9);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6e84db:{NFSU2_TR(0x6e84db);
{goto L6e84e0;}
}
B6e84e0:L6e84e0:{c.instructions+=17;NFSU2_TR(0x6e84e0);
u8 U[9];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+20,u32(r1(U+8)));
}
B6e84e4:{NFSU2_TR(0x6e84e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e84e7:{NFSU2_TR(0x6e84e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e84ea:{NFSU2_TR(0x6e84ea);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+12))));
}
B6e84ec:{NFSU2_TR(0x6e84ec);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e84f0:{NFSU2_TR(0x6e84f0);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6e84f4:{NFSU2_TR(0x6e84f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B6e84f7:{NFSU2_TR(0x6e84f7);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6e84fb:{NFSU2_TR(0x6e84fb);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6e84fc:{NFSU2_TR(0x6e84fc);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x10ull))));
}
B6e84ff:{NFSU2_TR(0x6e84ff);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e8502:{NFSU2_TR(0x6e8502);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6e8505:{NFSU2_TR(0x6e8505);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6e8507:{NFSU2_TR(0x6e8507);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e8509:{NFSU2_TR(0x6e8509);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B6e850d:{NFSU2_TR(0x6e850d);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6e850f:{NFSU2_TR(0x6e850f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e84e0u);}goto L6e84e0;}}
}
B6e8511:L6e8511:{c.instructions+=7;NFSU2_TR(0x6e8511);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e8515:{NFSU2_TR(0x6e8515);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e8519:{NFSU2_TR(0x6e8519);
w4(R+20,u32(u32(r4(R+20))+u32(r4(R+8))));
}
B6e851b:{NFSU2_TR(0x6e851b);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B6e851c:{NFSU2_TR(0x6e851c);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e8520:{NFSU2_TR(0x6e8520);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e8524:{NFSU2_TR(0x6e8524);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e84d3u);}goto L6e84d3;}}
}
B6e8526:L6e8526:{c.instructions+=1;NFSU2_TR(0x6e8526);
{goto L6e85a6;}
}
B6e852b:L6e852b:{c.instructions+=1;NFSU2_TR(0x6e852b);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6e85aa;}}
}
B6e8531:L6e8531:{c.instructions+=9;NFSU2_TR(0x6e8531);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B6e8535:{NFSU2_TR(0x6e8535);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e8539:{NFSU2_TR(0x6e8539);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6e853c:{NFSU2_TR(0x6e853c);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+20)))));
w8(U+8,u64(s64(s32(r4(R+0)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+20,u32(r8(U+16)));
}
B6e853f:{NFSU2_TR(0x6e853f);
w4(R+20,u32(u32(r4(R+20))+u32(r4(R+12))));
}
B6e8541:{NFSU2_TR(0x6e8541);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B6e8542:{NFSU2_TR(0x6e8542);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6e8544:{NFSU2_TR(0x6e8544);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e8548:{NFSU2_TR(0x6e8548);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6e85a6;}}
}
B6e854a:L6e854a:{c.instructions+=3;NFSU2_TR(0x6e854a);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+8))));
}
B6e854c:{NFSU2_TR(0x6e854c);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6e854d:{NFSU2_TR(0x6e854d);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e8551:L6e8551:{c.instructions+=3;NFSU2_TR(0x6e8551);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6e8553:{NFSU2_TR(0x6e8553);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6e8555:{NFSU2_TR(0x6e8555);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6e8591;}}
}
B6e8557:L6e8557:{c.instructions+=2;NFSU2_TR(0x6e8557);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6e8559:{NFSU2_TR(0x6e8559);
__builtin_memmove((R+16),(R+16),4);
}
B6e8560:L6e8560:{c.instructions+=17;NFSU2_TR(0x6e8560);
u8 U[9];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+20,u32(r1(U+8)));
}
B6e8564:{NFSU2_TR(0x6e8564);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e8567:{NFSU2_TR(0x6e8567);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e856a:{NFSU2_TR(0x6e856a);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+12))));
}
B6e856c:{NFSU2_TR(0x6e856c);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e8570:{NFSU2_TR(0x6e8570);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6e8574:{NFSU2_TR(0x6e8574);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B6e8577:{NFSU2_TR(0x6e8577);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6e857b:{NFSU2_TR(0x6e857b);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6e857c:{NFSU2_TR(0x6e857c);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x10ull))));
}
B6e857f:{NFSU2_TR(0x6e857f);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e8582:{NFSU2_TR(0x6e8582);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6e8585:{NFSU2_TR(0x6e8585);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B6e8587:{NFSU2_TR(0x6e8587);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e8589:{NFSU2_TR(0x6e8589);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B6e858d:{NFSU2_TR(0x6e858d);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6e858f:{NFSU2_TR(0x6e858f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e8560u);}goto L6e8560;}}
}
B6e8591:L6e8591:{c.instructions+=7;NFSU2_TR(0x6e8591);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e8595:{NFSU2_TR(0x6e8595);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e8599:{NFSU2_TR(0x6e8599);
w4(R+20,u32(u32(r4(R+20))-u32(r4(R+8))));
}
B6e859b:{NFSU2_TR(0x6e859b);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B6e859c:{NFSU2_TR(0x6e859c);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e85a0:{NFSU2_TR(0x6e85a0);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e85a4:{NFSU2_TR(0x6e85a4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e8551u);}goto L6e8551;}}
}
B6e85a6:L6e85a6:{c.instructions+=1;NFSU2_TR(0x6e85a6);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6e85aa:L6e85aa:{c.instructions+=7;NFSU2_TR(0x6e85aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e85ad:{NFSU2_TR(0x6e85ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e85b0:{NFSU2_TR(0x6e85b0);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6e85b2:{NFSU2_TR(0x6e85b2);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6e85b5:{NFSU2_TR(0x6e85b5);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e85b9:{NFSU2_TR(0x6e85b9);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6e85c1:{NFSU2_TR(0x6e85c1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6e85e2;}}
}
B6e85c3:L6e85c3:{c.instructions+=6;NFSU2_TR(0x6e85c3);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6e85c7:{NFSU2_TR(0x6e85c7);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e85cb:{NFSU2_TR(0x6e85cb);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B6e85cd:{NFSU2_TR(0x6e85cd);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6e85cf:{NFSU2_TR(0x6e85cf);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6e85d2:{NFSU2_TR(0x6e85d2);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L6e86ed;}}
}
B6e85d8:L6e85d8:{c.instructions+=4;NFSU2_TR(0x6e85d8);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e85dc:{NFSU2_TR(0x6e85dc);
w1(R+0,u8(0x1ull));
}
B6e85de:{NFSU2_TR(0x6e85de);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B6e85e0:{NFSU2_TR(0x6e85e0);
{goto L6e8648;}
}
B6e85e2:L6e85e2:{c.instructions+=2;NFSU2_TR(0x6e85e2);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6e85e4:{NFSU2_TR(0x6e85e4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6e8612;}}
}
B6e85e6:L6e85e6:{c.instructions+=5;NFSU2_TR(0x6e85e6);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e85ea:{NFSU2_TR(0x6e85ea);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B6e85f0:{NFSU2_TR(0x6e85f0);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6e85f2:{NFSU2_TR(0x6e85f2);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6e85f5:{NFSU2_TR(0x6e85f5);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L6e860e;}}
}
B6e85f7:L6e85f7:{c.instructions+=7;NFSU2_TR(0x6e85f7);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+8))),2);
w4(R+8,u32(r2(U+0)));
}
B6e85fa:{NFSU2_TR(0x6e85fa);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e85fe:{NFSU2_TR(0x6e85fe);
w1(R+0,u8(0x1ull));
}
B6e8600:{NFSU2_TR(0x6e8600);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6e8604:{NFSU2_TR(0x6e8604);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B6e8608:{NFSU2_TR(0x6e8608);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e860c:{NFSU2_TR(0x6e860c);
{goto L6e864e;}
}
B6e860e:L6e860e:{c.instructions+=2;NFSU2_TR(0x6e860e);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B6e8610:{NFSU2_TR(0x6e8610);
{goto L6e864e;}
}
B6e8612:L6e8612:{c.instructions+=8;NFSU2_TR(0x6e8612);
u8 U[14];
w4(U+0,u32(u32(u32(0xfffffffeull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
w4(R+0,u32(r2(U+12)));
}
B6e8617:{NFSU2_TR(0x6e8617);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e861b:{NFSU2_TR(0x6e861b);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6e861f:{NFSU2_TR(0x6e861f);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e8623:{NFSU2_TR(0x6e8623);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B6e8625:{NFSU2_TR(0x6e8625);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6e8627:{NFSU2_TR(0x6e8627);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6e862a:{NFSU2_TR(0x6e862a);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L6e86ed;}}
}
B6e8630:L6e8630:{c.instructions+=8;NFSU2_TR(0x6e8630);
u8 U[10];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+8,u32(r2(U+8)));
}
B6e8634:{NFSU2_TR(0x6e8634);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e8638:{NFSU2_TR(0x6e8638);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B6e863a:{NFSU2_TR(0x6e863a);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e863e:{NFSU2_TR(0x6e863e);
w1(R+0,u8(0x1ull));
}
B6e8640:{NFSU2_TR(0x6e8640);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6e8644:{NFSU2_TR(0x6e8644);
__asm__ volatile(".byte 0xd8,0xe2":::"memory");
}
B6e8646:{NFSU2_TR(0x6e8646);
__asm__ volatile(".byte 0xde,0xf9":::"memory");
}
B6e8648:L6e8648:{c.instructions+=1;NFSU2_TR(0x6e8648);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e864c:L6e864c:{c.instructions+=1;NFSU2_TR(0x6e864c);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B6e864e:L6e864e:{c.instructions+=4;NFSU2_TR(0x6e864e);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6e8650:{NFSU2_TR(0x6e8650);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e8653:{NFSU2_TR(0x6e8653);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6e8657:{NFSU2_TR(0x6e8657);
if(r1(R+518)){{goto L6e8802;}}
}
B6e865d:L6e865d:{c.instructions+=4;NFSU2_TR(0x6e865d);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B6e8661:{NFSU2_TR(0x6e8661);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B6e8662:{NFSU2_TR(0x6e8662);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+20),r4(U+0)));
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6e8664:{NFSU2_TR(0x6e8664);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6e8802;}}
}
B6e866a:L6e866a:{c.instructions+=22;NFSU2_TR(0x6e866a);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+12,u32(r2(U+4)));
}
B6e866e:{NFSU2_TR(0x6e866e);
__builtin_memmove((R+0),(R+4),4);
}
B6e8670:{NFSU2_TR(0x6e8670);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e8674:{NFSU2_TR(0x6e8674);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r1(U+0))));
}
B6e8676:{NFSU2_TR(0x6e8676);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B6e8679:{NFSU2_TR(0x6e8679);
w4(R+20,u32(0x1ull));
}
B6e867e:{NFSU2_TR(0x6e867e);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+20,shl<u32>(r4(R+20),u64(r1(U+0))));
}
B6e8680:{NFSU2_TR(0x6e8680);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e8684:{NFSU2_TR(0x6e8684);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6e8687:{NFSU2_TR(0x6e8687);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B6e8688:{NFSU2_TR(0x6e8688);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+20)))));
w8(U+8,u64(s64(s32(r4(R+12)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+20,u32(r8(U+16)));
}
B6e868b:{NFSU2_TR(0x6e868b);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B6e868c:{NFSU2_TR(0x6e868c);
w4(R+20,u32(u32(r4(R+20))&u32(u32(0xfffffffeull))));
}
B6e868f:{NFSU2_TR(0x6e868f);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+20)))));
w8(U+8,u64(s64(s32(r4(R+0)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+20,u32(r8(U+16)));
}
B6e8692:{NFSU2_TR(0x6e8692);
__builtin_memmove((R+0),(R+28),4);
}
B6e8694:{NFSU2_TR(0x6e8694);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+20))));
}
B6e8696:{NFSU2_TR(0x6e8696);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6e8699:{NFSU2_TR(0x6e8699);
u8 U[12];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B6e869d:{NFSU2_TR(0x6e869d);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e86a1:{NFSU2_TR(0x6e86a1);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6e86a3:{NFSU2_TR(0x6e86a3);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e86a7:{NFSU2_TR(0x6e86a7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6e86f4;}}
}
B6e86a9:L6e86a9:{c.instructions+=4;NFSU2_TR(0x6e86a9);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6e86ab:{NFSU2_TR(0x6e86ab);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6e86ad:{NFSU2_TR(0x6e86ad);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6e86b1:{NFSU2_TR(0x6e86b1);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6e8826;}}
}
B6e86b7:L6e86b7:{c.instructions+=1;NFSU2_TR(0x6e86b7);
{goto L6e86c0;}
}
B6e86c0:L6e86c0:{c.instructions+=14;NFSU2_TR(0x6e86c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e86c3:{NFSU2_TR(0x6e86c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6e86c6:{NFSU2_TR(0x6e86c6);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+20));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e86ca:{NFSU2_TR(0x6e86ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6e86cd:{NFSU2_TR(0x6e86cd);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6e86cf:{NFSU2_TR(0x6e86cf);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x2ull))));
}
B6e86d2:{NFSU2_TR(0x6e86d2);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6e86d3:{NFSU2_TR(0x6e86d3);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e86d7:{NFSU2_TR(0x6e86d7);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6e86d9:{NFSU2_TR(0x6e86d9);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B6e86dd:{NFSU2_TR(0x6e86dd);
{u32 ea_=u32((r4(R+4)*4u)+r4(R+12));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e86e0:{NFSU2_TR(0x6e86e0);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B6e86e4:{NFSU2_TR(0x6e86e4);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6e86e6:{NFSU2_TR(0x6e86e6);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e86c0u);}goto L6e86c0;}}
}
B6e86e8:L6e86e8:{c.instructions+=1;NFSU2_TR(0x6e86e8);
{goto L6e8826;}
}
B6e86ed:L6e86ed:{c.instructions+=2;NFSU2_TR(0x6e86ed);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B6e86ef:{NFSU2_TR(0x6e86ef);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e864cu);}goto L6e864c;}
}
B6e86f4:L6e86f4:{c.instructions+=3;NFSU2_TR(0x6e86f4);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e86f8:{NFSU2_TR(0x6e86f8);
u8 U[16];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6e86fc:{NFSU2_TR(0x6e86fc);
if(r1(R+518)){{goto L6e8772;}}
}
B6e86fe:L6e86fe:{c.instructions+=3;NFSU2_TR(0x6e86fe);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6e8700:{NFSU2_TR(0x6e8700);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6e8702:{NFSU2_TR(0x6e8702);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6e87f5;}}
}
B6e8708:L6e8708:{c.instructions+=2;NFSU2_TR(0x6e8708);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6e870c:{NFSU2_TR(0x6e870c);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e8710:L6e8710:{c.instructions+=27;NFSU2_TR(0x6e8710);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e8713:{NFSU2_TR(0x6e8713);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B6e8717:{NFSU2_TR(0x6e8717);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6e871b:{NFSU2_TR(0x6e871b);
u8 U[10];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+20,u32(r2(U+8)));
}
B6e8720:{NFSU2_TR(0x6e8720);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e8724:{NFSU2_TR(0x6e8724);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x2ull))));
}
B6e8727:{NFSU2_TR(0x6e8727);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6e872b:{NFSU2_TR(0x6e872b);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e872e:{NFSU2_TR(0x6e872e);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6e8730:{NFSU2_TR(0x6e8730);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e8733:{NFSU2_TR(0x6e8733);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e8736:{NFSU2_TR(0x6e8736);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e8739:{NFSU2_TR(0x6e8739);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6e873c:{NFSU2_TR(0x6e873c);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+20));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e8740:{NFSU2_TR(0x6e8740);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6e8743:{NFSU2_TR(0x6e8743);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6e8745:{NFSU2_TR(0x6e8745);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6e8746:{NFSU2_TR(0x6e8746);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e874a:{NFSU2_TR(0x6e874a);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6e874c:{NFSU2_TR(0x6e874c);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B6e8750:{NFSU2_TR(0x6e8750);
{u32 ea_=u32((r4(R+4)*4u)+r4(R+12));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e8753:{NFSU2_TR(0x6e8753);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e8757:{NFSU2_TR(0x6e8757);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B6e875a:{NFSU2_TR(0x6e875a);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e875e:{NFSU2_TR(0x6e875e);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B6e8762:{NFSU2_TR(0x6e8762);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6e8764:{NFSU2_TR(0x6e8764);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e8710u);}goto L6e8710;}}
}
B6e8766:L6e8766:{c.instructions+=3;NFSU2_TR(0x6e8766);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e876a:{NFSU2_TR(0x6e876a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e876d:{NFSU2_TR(0x6e876d);
{goto L6e8826;}
}
B6e8772:L6e8772:{c.instructions+=8;NFSU2_TR(0x6e8772);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e8776:{NFSU2_TR(0x6e8776);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
}
B6e8779:{NFSU2_TR(0x6e8779);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+12)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B6e877c:{NFSU2_TR(0x6e877c);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B6e877e:{NFSU2_TR(0x6e877e);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e8782:{NFSU2_TR(0x6e8782);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6e8784:{NFSU2_TR(0x6e8784);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6e8786:{NFSU2_TR(0x6e8786);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6e87f5;}}
}
B6e8788:L6e8788:{c.instructions+=2;NFSU2_TR(0x6e8788);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6e878c:{NFSU2_TR(0x6e878c);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e8790:L6e8790:{c.instructions+=29;NFSU2_TR(0x6e8790);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e8793:{NFSU2_TR(0x6e8793);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B6e8797:{NFSU2_TR(0x6e8797);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6e879b:{NFSU2_TR(0x6e879b);
u8 U[9];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
w4(R+20,u32(r1(U+8)));
}
B6e879f:{NFSU2_TR(0x6e879f);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e87a3:{NFSU2_TR(0x6e87a3);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x2ull))));
}
B6e87a6:{NFSU2_TR(0x6e87a6);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6e87aa:{NFSU2_TR(0x6e87aa);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e87ad:{NFSU2_TR(0x6e87ad);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6e87b0:{NFSU2_TR(0x6e87b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e87b3:{NFSU2_TR(0x6e87b3);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+4));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6e87b6:{NFSU2_TR(0x6e87b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e87b9:{NFSU2_TR(0x6e87b9);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e87bc:{NFSU2_TR(0x6e87bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e87bf:{NFSU2_TR(0x6e87bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6e87c2:{NFSU2_TR(0x6e87c2);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+20));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e87c6:{NFSU2_TR(0x6e87c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6e87c9:{NFSU2_TR(0x6e87c9);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6e87cb:{NFSU2_TR(0x6e87cb);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6e87cc:{NFSU2_TR(0x6e87cc);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e87d0:{NFSU2_TR(0x6e87d0);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6e87d2:{NFSU2_TR(0x6e87d2);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B6e87d6:{NFSU2_TR(0x6e87d6);
{u32 ea_=u32((r4(R+4)*4u)+r4(R+12));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e87d9:{NFSU2_TR(0x6e87d9);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e87dd:{NFSU2_TR(0x6e87dd);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B6e87e0:{NFSU2_TR(0x6e87e0);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e87e4:{NFSU2_TR(0x6e87e4);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B6e87e8:{NFSU2_TR(0x6e87e8);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6e87ea:{NFSU2_TR(0x6e87ea);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e8790u);}goto L6e8790;}}
}
B6e87ec:L6e87ec:{c.instructions+=3;NFSU2_TR(0x6e87ec);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e87f0:{NFSU2_TR(0x6e87f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e87f3:{NFSU2_TR(0x6e87f3);
{goto L6e8826;}
}
B6e87f5:L6e87f5:{c.instructions+=4;NFSU2_TR(0x6e87f5);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e87f9:{NFSU2_TR(0x6e87f9);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6e87fd:{NFSU2_TR(0x6e87fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e8800:{NFSU2_TR(0x6e8800);
{goto L6e8826;}
}
B6e8802:L6e8802:{c.instructions+=3;NFSU2_TR(0x6e8802);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6e8804:{NFSU2_TR(0x6e8804);
u8 U[10];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+6),(U+4),2);
w1(R+512,u8((r2(U+6))<(r2(R+0))));
w2(U+8,u16(u32(r2(U+6))-u32(r2(R+0))));
w1(R+518,u8((r2(U+8))==(u16(0x0ull))));
}
B6e8808:{NFSU2_TR(0x6e8808);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6e8826;}}
}
B6e880a:L6e880a:{c.instructions+=1;NFSU2_TR(0x6e880a);
__builtin_memmove((R+12),(R+12),4);
}
B6e8810:L6e8810:{c.instructions+=8;NFSU2_TR(0x6e8810);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e8813:{NFSU2_TR(0x6e8813);
u8 U[10];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+20,u32(r2(U+8)));
}
B6e8817:{NFSU2_TR(0x6e8817);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6e881a:{NFSU2_TR(0x6e881a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6e881d:{NFSU2_TR(0x6e881d);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B6e8821:{NFSU2_TR(0x6e8821);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6e8822:{NFSU2_TR(0x6e8822);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6e8824:{NFSU2_TR(0x6e8824);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e8810u);}goto L6e8810;}}
}
B6e8826:L6e8826:{c.instructions+=3;NFSU2_TR(0x6e8826);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x11ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B6e8829:{NFSU2_TR(0x6e8829);
u8 U[1];
w1(R+512,u8(0x0ull));
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6e882b:{NFSU2_TR(0x6e882b);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6e88d7;}}
}
B6e8831:L6e8831:{c.instructions+=24;NFSU2_TR(0x6e8831);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B6e8835:{NFSU2_TR(0x6e8835);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(r2(U+4)));
}
B6e8839:{NFSU2_TR(0x6e8839);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B6e883d:{NFSU2_TR(0x6e883d);
__builtin_memmove((R+4),(R+0),4);
}
B6e883f:{NFSU2_TR(0x6e883f);
w4(R+20,u32(0x1ull));
}
B6e8844:{NFSU2_TR(0x6e8844);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+20,shl<u32>(r4(R+20),u64(r1(U+0))));
}
B6e8846:{NFSU2_TR(0x6e8846);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r1(U+0))));
}
B6e8848:{NFSU2_TR(0x6e8848);
__builtin_memmove((R+4),(R+28),4);
}
B6e884a:{NFSU2_TR(0x6e884a);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B6e884b:{NFSU2_TR(0x6e884b);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+20)))));
w8(U+8,u64(s64(s32(r4(R+24)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+20,u32(r8(U+16)));
}
B6e884e:{NFSU2_TR(0x6e884e);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B6e884f:{NFSU2_TR(0x6e884f);
w4(R+20,u32(u32(r4(R+20))&u32(u32(0xfffffffeull))));
}
B6e8852:{NFSU2_TR(0x6e8852);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+20)))));
w8(U+8,u64(s64(s32(r4(R+8)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+20,u32(r8(U+16)));
}
B6e8855:{NFSU2_TR(0x6e8855);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+20))));
}
B6e8857:{NFSU2_TR(0x6e8857);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B6e885a:{NFSU2_TR(0x6e885a);
u8 U[12];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+20),(U+8),4);
}
B6e885e:{NFSU2_TR(0x6e885e);
w4(R+4,u32(0x1full));
}
B6e8863:{NFSU2_TR(0x6e8863);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B6e8865:{NFSU2_TR(0x6e8865);
w4(R+0,u32(0x7fffffffull));
}
B6e886a:{NFSU2_TR(0x6e886a);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r1(U+0))));
}
B6e886c:{NFSU2_TR(0x6e886c);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B6e8870:{NFSU2_TR(0x6e8870);
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6e8872:{NFSU2_TR(0x6e8872);
__builtin_memmove((R+8),(R+20),4);
}
B6e8874:{NFSU2_TR(0x6e8874);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6e8883;}}
}
B6e8876:L6e8876:{c.instructions+=4;NFSU2_TR(0x6e8876);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6e8879:{NFSU2_TR(0x6e8879);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(r4(R+24)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B6e887c:{NFSU2_TR(0x6e887c);
u8 U[12];
w4(U+0,u32(u32(u32(0x1ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B6e8880:{NFSU2_TR(0x6e8880);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xfffffffeull))));
}
B6e8883:L6e8883:{c.instructions+=3;NFSU2_TR(0x6e8883);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B6e8887:{NFSU2_TR(0x6e8887);
u8 U[2];
w2(U+0,u16(u32(r2(R+4))&u32(r2(R+4))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B6e888a:{NFSU2_TR(0x6e888a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6e8890;}}
}
B6e888c:L6e888c:{c.instructions+=2;NFSU2_TR(0x6e888c);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6e888d:{NFSU2_TR(0x6e888d);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xfffffffeull))));
}
B6e8890:L6e8890:{c.instructions+=2;NFSU2_TR(0x6e8890);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6e8892:{NFSU2_TR(0x6e8892);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6e889f;}}
}
B6e8894:L6e8894:{c.instructions+=4;NFSU2_TR(0x6e8894);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6e8895:{NFSU2_TR(0x6e8895);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+24)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B6e8898:{NFSU2_TR(0x6e8898);
u8 U[12];
w4(U+0,u32(u32(u32(0x1ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+20),(U+8),4);
}
B6e889c:{NFSU2_TR(0x6e889c);
w4(R+20,u32(u32(r4(R+20))&u32(u32(0xfffffffeull))));
}
B6e889f:L6e889f:{c.instructions+=2;NFSU2_TR(0x6e889f);
u8 U[2];
w2(U+0,u16(u32(r2(R+4))&u32(r2(R+4))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B6e88a2:{NFSU2_TR(0x6e88a2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6e88a8;}}
}
B6e88a4:L6e88a4:{c.instructions+=2;NFSU2_TR(0x6e88a4);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B6e88a5:{NFSU2_TR(0x6e88a5);
w4(R+20,u32(u32(r4(R+20))&u32(u32(0xfffffffeull))));
}
B6e88a8:L6e88a8:{c.instructions+=6;NFSU2_TR(0x6e88a8);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x11ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+24,u32(r1(U+4)));
}
B6e88ac:{NFSU2_TR(0x6e88ac);
u8 U[12];
w4(U+0,u32(u32(u32(0x3ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B6e88b0:{NFSU2_TR(0x6e88b0);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffffcull))));
}
B6e88b3:{NFSU2_TR(0x6e88b3);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6e88b5:{NFSU2_TR(0x6e88b5);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6e88b7:{NFSU2_TR(0x6e88b7);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6e88d7;}}
}
B6e88b9:L6e88b9:{c.instructions+=1;NFSU2_TR(0x6e88b9);
__builtin_memmove((R+16),(R+16),4);
}
B6e88c0:L6e88c0:{c.instructions+=9;NFSU2_TR(0x6e88c0);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+8))),2);
w4(R+24,u32(r2(U+0)));
}
B6e88c3:{NFSU2_TR(0x6e88c3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+20),(U+0),4);
}
B6e88c5:{NFSU2_TR(0x6e88c5);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+20),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6e88c8:{NFSU2_TR(0x6e88c8);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x11ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+24,u32(r1(U+4)));
}
B6e88cc:{NFSU2_TR(0x6e88cc);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x2ull))));
}
B6e88cf:{NFSU2_TR(0x6e88cf);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B6e88d2:{NFSU2_TR(0x6e88d2);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6e88d3:{NFSU2_TR(0x6e88d3);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6e88d5:{NFSU2_TR(0x6e88d5);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e88c0u);}goto L6e88c0;}}
}
B6e88d7:L6e88d7:{c.instructions+=7;NFSU2_TR(0x6e88d7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6e88d8:{NFSU2_TR(0x6e88d8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6e88d9:{NFSU2_TR(0x6e88d9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6e88da:{NFSU2_TR(0x6e88da);
w1(R+0,u8(0x1ull));
}
B6e88dc:{NFSU2_TR(0x6e88dc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e88dd:{NFSU2_TR(0x6e88dd);
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
B6e88e0:{NFSU2_TR(0x6e88e0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e88f0:L6e88f0:{c.instructions+=31;NFSU2_TR(0x6e88f0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e88f1:{NFSU2_TR(0x6e88f1);
__builtin_memmove((R+0),(R+4),4);
}
B6e88f3:{NFSU2_TR(0x6e88f3);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6e88f5:{NFSU2_TR(0x6e88f5);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B6e88f9:{NFSU2_TR(0x6e88f9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e88fa:{NFSU2_TR(0x6e88fa);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+12,u32(r2(U+4)));
}
B6e88fe:{NFSU2_TR(0x6e88fe);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e88ff:{NFSU2_TR(0x6e88ff);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e8900:{NFSU2_TR(0x6e8900);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e8901:{NFSU2_TR(0x6e8901);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+28,u32(r1(U+4)));
}
B6e8905:{NFSU2_TR(0x6e8905);
w4(R+24,u32(r2(R+4)));
}
B6e8908:{NFSU2_TR(0x6e8908);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e890c:{NFSU2_TR(0x6e890c);
__builtin_memmove((R+4),(R+28),4);
}
B6e890e:{NFSU2_TR(0x6e890e);
w4(R+8,u32(0x1ull));
}
B6e8913:{NFSU2_TR(0x6e8913);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r1(U+0))));
}
B6e8915:{NFSU2_TR(0x6e8915);
__builtin_memmove((R+20),(R+12),4);
}
B6e8917:{NFSU2_TR(0x6e8917);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+20,shr<u32>(r4(R+20),u64(r1(U+0))));
}
B6e8919:{NFSU2_TR(0x6e8919);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6e891c:{NFSU2_TR(0x6e891c);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6e891d:{NFSU2_TR(0x6e891d);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(r4(R+24)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B6e8920:{NFSU2_TR(0x6e8920);
u8 U[12];
w4(U+0,u32(u32(u32(0x1ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B6e8924:{NFSU2_TR(0x6e8924);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xfffffffeull))));
}
B6e8927:{NFSU2_TR(0x6e8927);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(r4(R+20)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B6e892a:{NFSU2_TR(0x6e892a);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B6e892c:{NFSU2_TR(0x6e892c);
u8 U[12];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B6e8930:{NFSU2_TR(0x6e8930);
w4(R+4,u32(0x1full));
}
B6e8935:{NFSU2_TR(0x6e8935);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+28))));
}
B6e8937:{NFSU2_TR(0x6e8937);
w4(R+8,u32(0x7fffffffull));
}
B6e893c:{NFSU2_TR(0x6e893c);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r1(U+0))));
}
B6e893e:{NFSU2_TR(0x6e893e);
w1(R+523,u8(0x0ull));
w4(R+8,u32(u32(r4(R+8))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B6e8940:{NFSU2_TR(0x6e8940);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6e8950;}}
}
B6e8942:L6e8942:{c.instructions+=5;NFSU2_TR(0x6e8942);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6e8943:{NFSU2_TR(0x6e8943);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(r4(R+24)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B6e8946:{NFSU2_TR(0x6e8946);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6e8949:{NFSU2_TR(0x6e8949);
u8 U[12];
w4(U+0,u32(u32(u32(0x1ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B6e894d:{NFSU2_TR(0x6e894d);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffffeull))));
}
B6e8950:L6e8950:{c.instructions+=6;NFSU2_TR(0x6e8950);
u8 U[14];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+10),(U+4),2);
w1(R+512,u8((r2(U+10))<(u16(0x0ull))));
w1(R+523,sborrow<u16>(r2(U+10),u16(0x0ull)));
w2(U+12,u16(u32(r2(U+10))-u32(u16(0x0ull))));
w1(R+519,u8(s16(r2(U+12))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+12))==(u16(0x0ull))));
w2(U+6,u16(u32(r2(U+12))&u32(u16(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r2(U+6)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B6e8956:{NFSU2_TR(0x6e8956);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6e8957:{NFSU2_TR(0x6e8957);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e8958:{NFSU2_TR(0x6e8958);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6e8959:{NFSU2_TR(0x6e8959);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6e895a:{NFSU2_TR(0x6e895a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6e8960;}}
}
B6e895c:L6e895c:{c.instructions+=2;NFSU2_TR(0x6e895c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6e895d:{NFSU2_TR(0x6e895d);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffffeull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6e8960:L6e8960:{c.instructions+=2;NFSU2_TR(0x6e8960);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6e8961:{NFSU2_TR(0x6e8961);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e8970:L6e8970:{c.instructions+=3;NFSU2_TR(0x6e8970);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e8971:{NFSU2_TR(0x6e8971);
__builtin_memmove((R+24),(R+4),4);
}
B6e8973:{NFSU2_TR(0x6e8973);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e8978ull));
TAIL_STATIC(0x6e3ed0u,6e3);
}
B6e8978:L6e8978:{c.instructions+=13;NFSU2_TR(0x6e8978);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6e897a:{NFSU2_TR(0x6e897a);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+4,u32(u32(r4(R+4))|u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6e897d:{NFSU2_TR(0x6e897d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e8980:{NFSU2_TR(0x6e8980);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e8983:{NFSU2_TR(0x6e8983);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e8986:{NFSU2_TR(0x6e8986);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e8989:{NFSU2_TR(0x6e8989);
u8 U[4];
w4(U+0,u32(0x7c1db0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B6e898f:{NFSU2_TR(0x6e898f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e8992:{NFSU2_TR(0x6e8992);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e8995:{NFSU2_TR(0x6e8995);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w4(U+4,u32(0x14ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6e899c:{NFSU2_TR(0x6e899c);
__builtin_memmove((R+0),(R+24),4);
}
B6e899e:{NFSU2_TR(0x6e899e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e899f:{NFSU2_TR(0x6e899f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e89a0:L6e89a0:{c.instructions+=6;NFSU2_TR(0x6e89a0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e89a4:{NFSU2_TR(0x6e89a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e89a7:{NFSU2_TR(0x6e89a7);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6e89aa:{NFSU2_TR(0x6e89aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e89ad:{NFSU2_TR(0x6e89ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e89b0:{NFSU2_TR(0x6e89b0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e89c0:L6e89c0:{c.instructions+=8;NFSU2_TR(0x6e89c0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e89c1:{NFSU2_TR(0x6e89c1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e89c2:{NFSU2_TR(0x6e89c2);
__builtin_memmove((R+24),(R+4),4);
}
B6e89c4:{NFSU2_TR(0x6e89c4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e89c5:{NFSU2_TR(0x6e89c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6e89c8:{NFSU2_TR(0x6e89c8);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B6e89cc:{NFSU2_TR(0x6e89cc);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w2(U+4,u16(u32(r2(R+0))&u32(r2(R+0))));
w1(R+519,u8(s16(r2(U+4))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+4))==(u16(0x0ull))));
w2(U+0,u16(u32(r2(U+4))&u32(u16(0xffull))));
w1(U+2,u8(__builtin_popcountll(u64(r2(U+0)))));
w1(U+3,u8(u32(r1(U+2))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+3))==(u8(0x0ull))));
}
B6e89cf:{NFSU2_TR(0x6e89cf);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6e8bb5;}}
}
B6e89d5:L6e89d5:{c.instructions+=7;NFSU2_TR(0x6e89d5);
__builtin_memmove((R+4),gp(0x8ab294),4);
}
B6e89db:{NFSU2_TR(0x6e89db);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6e89dd:{NFSU2_TR(0x6e89dd);
w4(R+0,u32(r2(R+0)));
}
B6e89e0:{NFSU2_TR(0x6e89e0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e89e1:{NFSU2_TR(0x6e89e1);
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
B6e89e4:{NFSU2_TR(0x6e89e4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e89e5:{NFSU2_TR(0x6e89e5);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e89e8ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6e89e8:L6e89e8:{c.instructions+=9;NFSU2_TR(0x6e89e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e89eb:{NFSU2_TR(0x6e89eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e89ee:{NFSU2_TR(0x6e89ee);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B6e89f2:{NFSU2_TR(0x6e89f2);
__builtin_memmove((R+4),gp(0x8ab294),4);
}
B6e89f8:{NFSU2_TR(0x6e89f8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6e89fa:{NFSU2_TR(0x6e89fa);
w4(R+0,u32(r2(R+0)));
}
B6e89fd:{NFSU2_TR(0x6e89fd);
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
B6e8a00:{NFSU2_TR(0x6e8a00);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e8a01:{NFSU2_TR(0x6e8a01);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e8a04ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6e8a04:L6e8a04:{c.instructions+=10;NFSU2_TR(0x6e8a04);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e8a07:{NFSU2_TR(0x6e8a07);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e8a0a:{NFSU2_TR(0x6e8a0a);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B6e8a0e:{NFSU2_TR(0x6e8a0e);
__builtin_memmove((R+4),gp(0x8ab294),4);
}
B6e8a14:{NFSU2_TR(0x6e8a14);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6e8a16:{NFSU2_TR(0x6e8a16);
w4(R+0,u32(r2(R+0)));
}
B6e8a19:{NFSU2_TR(0x6e8a19);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6e8a1c:{NFSU2_TR(0x6e8a1c);
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
B6e8a1f:{NFSU2_TR(0x6e8a1f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e8a20:{NFSU2_TR(0x6e8a20);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e8a23ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6e8a23:L6e8a23:{c.instructions+=5;NFSU2_TR(0x6e8a23);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e8a26:{NFSU2_TR(0x6e8a26);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6e8a28:{NFSU2_TR(0x6e8a28);
u8 U[14];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((U+10),(U+4),2);
w1(R+512,u8((r2(U+10))<(r2(R+12))));
w1(R+523,sborrow<u16>(r2(U+10),r2(R+12)));
w2(U+12,u16(u32(r2(U+10))-u32(r2(R+12))));
w1(R+519,u8(s16(r2(U+12))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+12))==(u16(0x0ull))));
w2(U+6,u16(u32(r2(U+12))&u32(u16(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r2(U+6)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B6e8a2c:{NFSU2_TR(0x6e8a2c);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6e8a2f:{NFSU2_TR(0x6e8a2f);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6e8bb4;}}
}
B6e8a35:L6e8a35:{c.instructions+=3;NFSU2_TR(0x6e8a35);
w4(R+4,u32(0xcull));
}
B6e8a3a:{NFSU2_TR(0x6e8a3a);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e8a3b:{NFSU2_TR(0x6e8a3b);
{goto L6e8a40;}
}
B6e8a40:L6e8a40:{c.instructions+=105;NFSU2_TR(0x6e8a40);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e8a43:{NFSU2_TR(0x6e8a43);
{u32 ea_=u32(u32(8134048u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e8a49:{NFSU2_TR(0x6e8a49);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+20),(U+0),4);
}
B6e8a4b:{NFSU2_TR(0x6e8a4b);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffff4ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+20),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6e8a4f:{NFSU2_TR(0x6e8a4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e8a52:{NFSU2_TR(0x6e8a52);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6e8a55:{NFSU2_TR(0x6e8a55);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+20),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6e8a58:{NFSU2_TR(0x6e8a58);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e8a5b:{NFSU2_TR(0x6e8a5b);
{u32 ea_=u32(r4(R+4)+r4(R+8));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e8a5e:{NFSU2_TR(0x6e8a5e);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B6e8a60:{NFSU2_TR(0x6e8a60);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e8a62:{NFSU2_TR(0x6e8a62);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B6e8a66:{NFSU2_TR(0x6e8a66);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e8a6a:{NFSU2_TR(0x6e8a6a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e8a6d:{NFSU2_TR(0x6e8a6d);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6e8a71:{NFSU2_TR(0x6e8a71);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e8a74:{NFSU2_TR(0x6e8a74);
{u32 ea_=u32(u32(8134048u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e8a7a:{NFSU2_TR(0x6e8a7a);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B6e8a7c:{NFSU2_TR(0x6e8a7c);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6e8a7f:{NFSU2_TR(0x6e8a7f);
{u32 ea_=u32(r4(R+8)+r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e8a83:{NFSU2_TR(0x6e8a83);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B6e8a87:{NFSU2_TR(0x6e8a87);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e8a8b:{NFSU2_TR(0x6e8a8b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e8a8e:{NFSU2_TR(0x6e8a8e);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6e8a92:{NFSU2_TR(0x6e8a92);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e8a95:{NFSU2_TR(0x6e8a95);
{u32 ea_=u32(u32(8134048u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e8a9b:{NFSU2_TR(0x6e8a9b);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B6e8a9d:{NFSU2_TR(0x6e8a9d);
{u32 ea_=u32(r4(R+8)+r4(R+4)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e8aa1:{NFSU2_TR(0x6e8aa1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e8aa4:{NFSU2_TR(0x6e8aa4);
{u32 ea_=u32(u32(8134040u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e8aaa:{NFSU2_TR(0x6e8aaa);
u8 U[12];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B6e8aae:{NFSU2_TR(0x6e8aae);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e8ab0:{NFSU2_TR(0x6e8ab0);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e8ab2:{NFSU2_TR(0x6e8ab2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e8ab5:{NFSU2_TR(0x6e8ab5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6e8ab8:{NFSU2_TR(0x6e8ab8);
{u32 ea_=u32(u32(8134048u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e8abe:{NFSU2_TR(0x6e8abe);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffff8ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+20),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6e8ac2:{NFSU2_TR(0x6e8ac2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e8ac5:{NFSU2_TR(0x6e8ac5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6e8ac8:{NFSU2_TR(0x6e8ac8);
u8 U[16];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+20),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6e8acc:{NFSU2_TR(0x6e8acc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e8acf:{NFSU2_TR(0x6e8acf);
{u32 ea_=u32(r4(R+8)+r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e8ad3:{NFSU2_TR(0x6e8ad3);
u8 U[12];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B6e8ad7:{NFSU2_TR(0x6e8ad7);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e8ad9:{NFSU2_TR(0x6e8ad9);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B6e8add:{NFSU2_TR(0x6e8add);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e8ae1:{NFSU2_TR(0x6e8ae1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e8ae4:{NFSU2_TR(0x6e8ae4);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6e8ae8:{NFSU2_TR(0x6e8ae8);
{u32 ea_=u32(r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e8aeb:{NFSU2_TR(0x6e8aeb);
{u32 ea_=u32(u32(8134048u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e8af1:{NFSU2_TR(0x6e8af1);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B6e8af3:{NFSU2_TR(0x6e8af3);
{u32 ea_=u32(r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6e8af6:{NFSU2_TR(0x6e8af6);
{u32 ea_=u32(r4(R+8)+r4(R+4)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e8afa:{NFSU2_TR(0x6e8afa);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B6e8afe:{NFSU2_TR(0x6e8afe);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e8b02:{NFSU2_TR(0x6e8b02);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e8b05:{NFSU2_TR(0x6e8b05);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6e8b09:{NFSU2_TR(0x6e8b09);
{u32 ea_=u32(r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e8b0c:{NFSU2_TR(0x6e8b0c);
{u32 ea_=u32(u32(8134048u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e8b12:{NFSU2_TR(0x6e8b12);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B6e8b14:{NFSU2_TR(0x6e8b14);
{u32 ea_=u32(r4(R+8)+r4(R+4)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e8b18:{NFSU2_TR(0x6e8b18);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e8b1b:{NFSU2_TR(0x6e8b1b);
{u32 ea_=u32(u32(8134040u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e8b21:{NFSU2_TR(0x6e8b21);
u8 U[12];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B6e8b25:{NFSU2_TR(0x6e8b25);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e8b27:{NFSU2_TR(0x6e8b27);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e8b29:{NFSU2_TR(0x6e8b29);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e8b2c:{NFSU2_TR(0x6e8b2c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6e8b2f:{NFSU2_TR(0x6e8b2f);
{u32 ea_=u32(u32(8134048u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e8b35:{NFSU2_TR(0x6e8b35);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffffcull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+20),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6e8b39:{NFSU2_TR(0x6e8b39);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e8b3c:{NFSU2_TR(0x6e8b3c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6e8b3f:{NFSU2_TR(0x6e8b3f);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+20),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6e8b43:{NFSU2_TR(0x6e8b43);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e8b46:{NFSU2_TR(0x6e8b46);
{u32 ea_=u32(r4(R+8)+r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e8b4a:{NFSU2_TR(0x6e8b4a);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B6e8b4e:{NFSU2_TR(0x6e8b4e);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e8b50:{NFSU2_TR(0x6e8b50);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B6e8b54:{NFSU2_TR(0x6e8b54);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e8b58:{NFSU2_TR(0x6e8b58);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6e8b5c:{NFSU2_TR(0x6e8b5c);
{u32 ea_=u32(r4(R+0)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e8b5f:{NFSU2_TR(0x6e8b5f);
{u32 ea_=u32(u32(8134048u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e8b65:{NFSU2_TR(0x6e8b65);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e8b68:{NFSU2_TR(0x6e8b68);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
}
B6e8b6b:{NFSU2_TR(0x6e8b6b);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B6e8b6c:{NFSU2_TR(0x6e8b6c);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B6e8b6e:{NFSU2_TR(0x6e8b6e);
{u32 ea_=u32(r4(R+0)+u32(4294967280u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6e8b71:{NFSU2_TR(0x6e8b71);
{u32 ea_=u32(r4(R+8)+r4(R+4)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e8b75:{NFSU2_TR(0x6e8b75);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B6e8b79:{NFSU2_TR(0x6e8b79);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e8b7d:{NFSU2_TR(0x6e8b7d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e8b80:{NFSU2_TR(0x6e8b80);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6e8b84:{NFSU2_TR(0x6e8b84);
{u32 ea_=u32(r4(R+0)+u32(4294967280u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e8b87:{NFSU2_TR(0x6e8b87);
{u32 ea_=u32(u32(8134048u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e8b8d:{NFSU2_TR(0x6e8b8d);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B6e8b8f:{NFSU2_TR(0x6e8b8f);
{u32 ea_=u32(r4(R+8)+r4(R+4)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e8b93:{NFSU2_TR(0x6e8b93);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e8b96:{NFSU2_TR(0x6e8b96);
{u32 ea_=u32(u32(8134040u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e8b9c:{NFSU2_TR(0x6e8b9c);
u8 U[12];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B6e8ba0:{NFSU2_TR(0x6e8ba0);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e8ba2:{NFSU2_TR(0x6e8ba2);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x30ull))));
}
B6e8ba5:{NFSU2_TR(0x6e8ba5);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e8ba7:{NFSU2_TR(0x6e8ba7);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B6e8bab:{NFSU2_TR(0x6e8bab);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
w1(R+512,u8((r4(R+12))<(r4(U+6))));
w1(R+523,sborrow<u32>(r4(R+12),r4(U+6)));
w4(U+10,u32(u32(r4(R+12))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6e8bad:{NFSU2_TR(0x6e8bad);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e8a40u);}goto L6e8a40;}}
}
B6e8bb3:L6e8bb3:{c.instructions+=1;NFSU2_TR(0x6e8bb3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6e8bb4:L6e8bb4:{c.instructions+=1;NFSU2_TR(0x6e8bb4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6e8bb5:L6e8bb5:{c.instructions+=4;NFSU2_TR(0x6e8bb5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6e8bb6:{NFSU2_TR(0x6e8bb6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e8bb7:{NFSU2_TR(0x6e8bb7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6e8bb8:{NFSU2_TR(0x6e8bb8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e8bc0:L6e8bc0:{c.instructions+=6;NFSU2_TR(0x6e8bc0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e8bc1:{NFSU2_TR(0x6e8bc1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6e8bc4:{NFSU2_TR(0x6e8bc4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e8bc5:{NFSU2_TR(0x6e8bc5);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+28,u32(r2(U+4)));
}
B6e8bc9:{NFSU2_TR(0x6e8bc9);
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
B6e8bca:{NFSU2_TR(0x6e8bca);
if(r1(R+519)){{goto L6e8c45;}}
}
B6e8bcc:L6e8bcc:{c.instructions+=5;NFSU2_TR(0x6e8bcc);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e8bcd:{NFSU2_TR(0x6e8bcd);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6e8bd1:{NFSU2_TR(0x6e8bd1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e8bd2:{NFSU2_TR(0x6e8bd2);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6e8bd6:{NFSU2_TR(0x6e8bd6);
{goto L6e8be0;}
}
B6e8be0:L6e8be0:{c.instructions+=16;NFSU2_TR(0x6e8be0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e8be3:{NFSU2_TR(0x6e8be3);
u8 U[10];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+4,u32(r2(U+8)));
}
B6e8be7:{NFSU2_TR(0x6e8be7);
w4(R+0,u32(0x2aaaaaabull));
}
B6e8bec:{NFSU2_TR(0x6e8bec);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(u64(r8(U+16))>>32));
w4(R+0,u32(r8(U+16)));
}
B6e8bee:{NFSU2_TR(0x6e8bee);
w4(R+8,sar<u32>(r4(R+8),u64(u32(0x1ull))));
}
B6e8bf0:{NFSU2_TR(0x6e8bf0);
__builtin_memmove((R+4),(R+8),4);
}
B6e8bf2:{NFSU2_TR(0x6e8bf2);
u8 U[4];
w4(U+0,u32(u32(u32(0x1full))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6e8bf5:{NFSU2_TR(0x6e8bf5);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B6e8bf7:{NFSU2_TR(0x6e8bf7);
__builtin_memmove((R+4),(R+8),4);
}
B6e8bf9:{NFSU2_TR(0x6e8bf9);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x1full))));
}
B6e8bfc:{NFSU2_TR(0x6e8bfc);
w4(R+0,u32(0x1ull));
}
B6e8c01:{NFSU2_TR(0x6e8c01);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r1(U+0))));
}
B6e8c03:{NFSU2_TR(0x6e8c03);
__builtin_memmove((R+4),(R+8),4);
}
B6e8c05:{NFSU2_TR(0x6e8c05);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+4,sar<u32>(r4(R+4),u64(r4(U+0))));
}
B6e8c08:{NFSU2_TR(0x6e8c08);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
w1(R+512,u8(0x0ull));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w4(U+12,u32(u32(r4(U+8))&u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6e8c0b:{NFSU2_TR(0x6e8c0b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6e8c40;}}
}
B6e8c0d:L6e8c0d:{c.instructions+=3;NFSU2_TR(0x6e8c0d);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6e8c11:{NFSU2_TR(0x6e8c11);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e8c15:{NFSU2_TR(0x6e8c15);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6e8c1b;}}
}
B6e8c17:L6e8c17:{c.instructions+=2;NFSU2_TR(0x6e8c17);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6e8c19:{NFSU2_TR(0x6e8c19);
{goto L6e8c29;}
}
B6e8c1b:L6e8c1b:{c.instructions+=2;NFSU2_TR(0x6e8c1b);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+4)));
w4(U+8,u32(u32(r4(R+8))-u32(r4(U+4))));
w1(R+519,u8(s32(r4(U+8))<s32(u32(0x0ull))));
}
B6e8c1d:{NFSU2_TR(0x6e8c1d);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6e8c21;}}
}
B6e8c1f:L6e8c1f:{c.instructions+=1;NFSU2_TR(0x6e8c1f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6e8c21:L6e8c21:{c.instructions+=3;NFSU2_TR(0x6e8c21);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e8c25:{NFSU2_TR(0x6e8c25);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+4)));
w4(U+8,u32(u32(r4(R+8))-u32(r4(U+4))));
w1(R+519,u8(s32(r4(U+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6e8c27:{NFSU2_TR(0x6e8c27);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6e8c2f;}}
}
B6e8c29:L6e8c29:{c.instructions+=2;NFSU2_TR(0x6e8c29);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e8c2d:{NFSU2_TR(0x6e8c2d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6e8c2f:L6e8c2f:{c.instructions+=7;NFSU2_TR(0x6e8c2f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6e8c32:{NFSU2_TR(0x6e8c32);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e8c34:{NFSU2_TR(0x6e8c34);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6e8c35:{NFSU2_TR(0x6e8c35);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e8c36:{NFSU2_TR(0x6e8c36);
__builtin_memmove((R+4),(R+24),4);
}
B6e8c38:{NFSU2_TR(0x6e8c38);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+20)),r4(U+0));
}
B6e8c3b:{NFSU2_TR(0x6e8c3b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e8c40ull));
TAIL_STATIC(0x6ef9c0u,6ef);
}
B6e8c40:L6e8c40:{c.instructions+=2;NFSU2_TR(0x6e8c40);
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
B6e8c41:{NFSU2_TR(0x6e8c41);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e8be0u);}goto L6e8be0;}}
}
B6e8c43:L6e8c43:{c.instructions+=2;NFSU2_TR(0x6e8c43);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e8c44:{NFSU2_TR(0x6e8c44);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6e8c45:L6e8c45:{c.instructions+=4;NFSU2_TR(0x6e8c45);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6e8c46:{NFSU2_TR(0x6e8c46);
w1(R+0,u8(0x1ull));
}
B6e8c48:{NFSU2_TR(0x6e8c48);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6e8c49:{NFSU2_TR(0x6e8c49);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e8c50:L6e8c50:{c.instructions+=3;NFSU2_TR(0x6e8c50);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e8c51:{NFSU2_TR(0x6e8c51);
__builtin_memmove((R+24),(R+4),4);
}
B6e8c53:{NFSU2_TR(0x6e8c53);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e8c58ull));
{goto L6e8c80;}
}
B6e8c58:L6e8c58:{c.instructions+=2;NFSU2_TR(0x6e8c58);
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
B6e8c5d:{NFSU2_TR(0x6e8c5d);
if(r1(R+518)){{goto L6e8c6b;}}
}
B6e8c5f:L6e8c5f:{c.instructions+=3;NFSU2_TR(0x6e8c5f);
u8 U[4];
w4(U+0,u32(0x30ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e8c61:{NFSU2_TR(0x6e8c61);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e8c62:{NFSU2_TR(0x6e8c62);
u8 U[4];
__builtin_memmove((U+0),gp(0x80bfdc),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e8c68ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6e8c68:L6e8c68:{c.instructions+=1;NFSU2_TR(0x6e8c68);
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
B6e8c6b:L6e8c6b:{c.instructions+=3;NFSU2_TR(0x6e8c6b);
__builtin_memmove((R+0),(R+24),4);
}
B6e8c6d:{NFSU2_TR(0x6e8c6d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e8c6e:{NFSU2_TR(0x6e8c6e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6e8c80:L6e8c80:{c.instructions+=6;NFSU2_TR(0x6e8c80);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e8c81:{NFSU2_TR(0x6e8c81);
__builtin_memmove((R+24),(R+4),4);
}
B6e8c83:{NFSU2_TR(0x6e8c83);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e8c86:{NFSU2_TR(0x6e8c86);
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
B6e8c88:{NFSU2_TR(0x6e8c88);
u8 U[4];
w4(U+0,u32(0x7c1db0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B6e8c8e:{NFSU2_TR(0x6e8c8e);
if(r1(R+518)){{goto L6e8cbd;}}
}
B6e8c90:L6e8c90:{c.instructions+=5;NFSU2_TR(0x6e8c90);
__builtin_memmove((R+4),gp(0x8ab294),4);
}
B6e8c96:{NFSU2_TR(0x6e8c96);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e8c99:{NFSU2_TR(0x6e8c99);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6e8c9b:{NFSU2_TR(0x6e8c9b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e8c9c:{NFSU2_TR(0x6e8c9c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e8c9full));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6e8c9f:L6e8c9f:{c.instructions+=5;NFSU2_TR(0x6e8c9f);
__builtin_memmove((R+4),gp(0x8ab294),4);
}
B6e8ca5:{NFSU2_TR(0x6e8ca5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e8ca8:{NFSU2_TR(0x6e8ca8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6e8caa:{NFSU2_TR(0x6e8caa);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e8cab:{NFSU2_TR(0x6e8cab);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e8caeull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6e8cae:L6e8cae:{c.instructions+=5;NFSU2_TR(0x6e8cae);
__builtin_memmove((R+4),gp(0x8ab294),4);
}
B6e8cb4:{NFSU2_TR(0x6e8cb4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e8cb7:{NFSU2_TR(0x6e8cb7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6e8cb9:{NFSU2_TR(0x6e8cb9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e8cba:{NFSU2_TR(0x6e8cba);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6e8cbdull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6e8cbd:L6e8cbd:{c.instructions+=3;NFSU2_TR(0x6e8cbd);
__builtin_memmove((R+4),(R+24),4);
}
B6e8cbf:{NFSU2_TR(0x6e8cbf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e8cc0:{NFSU2_TR(0x6e8cc0);
TAIL_STATIC(0x6e3ef0u,6e3);
}
B6e8cd0:L6e8cd0:{c.instructions+=11;NFSU2_TR(0x6e8cd0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x90ull))));
}
B6e8cd6:{NFSU2_TR(0x6e8cd6);
u8 U[8];
w4(U+0,u32(u32(u32(0x9cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e8cdd:{NFSU2_TR(0x6e8cdd);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e8cde:{NFSU2_TR(0x6e8cde);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e8cdf:{NFSU2_TR(0x6e8cdf);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e8ce0:{NFSU2_TR(0x6e8ce0);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e8ce4:{NFSU2_TR(0x6e8ce4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6e8ce7:{NFSU2_TR(0x6e8ce7);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B6e8cea:{NFSU2_TR(0x6e8cea);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6e8cec:{NFSU2_TR(0x6e8cec);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6e8ced:{NFSU2_TR(0x6e8ced);
if(r1(R+518)){{goto L6e8d0b;}}
}
B6e8cef:L6e8cef:{c.instructions+=7;NFSU2_TR(0x6e8cef);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e8cf2:{NFSU2_TR(0x6e8cf2);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e8cf6:{NFSU2_TR(0x6e8cf6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e8cf9:{NFSU2_TR(0x6e8cf9);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e8cfd:{NFSU2_TR(0x6e8cfd);
u8 U[8];
w4(U+0,u32(u32(u32(0xacull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e8d04:{NFSU2_TR(0x6e8d04);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e8d07:{NFSU2_TR(0x6e8d07);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e8d0b:L6e8d0b:{c.instructions+=8;NFSU2_TR(0x6e8d0b);
{u32 ea_=u32(r4(R+16)+u32(164u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e8d12:{NFSU2_TR(0x6e8d12);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6e8d15:{NFSU2_TR(0x6e8d15);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B6e8d1b:{NFSU2_TR(0x6e8d1b);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e8d1f:{NFSU2_TR(0x6e8d1f);
{u32 ea_=u32(r4(R+16)+u32(164u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e8d26:{NFSU2_TR(0x6e8d26);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6e8d28:{NFSU2_TR(0x6e8d28);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6e8d2b:{NFSU2_TR(0x6e8d2b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6e8d41;}}
}
B6e8d2d:L6e8d2d:{c.instructions+=5;NFSU2_TR(0x6e8d2d);
{u32 ea_=u32(u32(8133180u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6e8d33:{NFSU2_TR(0x6e8d33);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e8d37:{NFSU2_TR(0x6e8d37);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e8d3b:{NFSU2_TR(0x6e8d3b);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xdb,0x18"::"a"(ea_):"memory");}
}
B6e8d3f:{NFSU2_TR(0x6e8d3f);
{goto L6e8d53;}
}
B6e8d41:L6e8d41:{c.instructions+=4;NFSU2_TR(0x6e8d41);
{u32 ea_=u32(u32(8133180u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6e8d47:{NFSU2_TR(0x6e8d47);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e8d4b:{NFSU2_TR(0x6e8d4b);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6e8d4f:{NFSU2_TR(0x6e8d4f);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xdb,0x18"::"a"(ea_):"memory");}
}
B6e8d53:L6e8d53:{c.instructions+=6;NFSU2_TR(0x6e8d53);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e8d56:{NFSU2_TR(0x6e8d56);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6e8d58:{NFSU2_TR(0x6e8d58);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6e8d5c:{NFSU2_TR(0x6e8d5c);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6e8d60:{NFSU2_TR(0x6e8d60);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e8d64:{NFSU2_TR(0x6e8d64);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6e8d7b;}}
}
B6e8d66:L6e8d66:{c.instructions+=2;NFSU2_TR(0x6e8d66);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6e8d68:{NFSU2_TR(0x6e8d68);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6e8d6e;}}
}
B6e8d6a:L6e8d6a:{c.instructions+=2;NFSU2_TR(0x6e8d6a);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6e8d6c:{NFSU2_TR(0x6e8d6c);
{goto L6e8dd7;}
}
B6e8d6e:L6e8d6e:{c.instructions+=3;NFSU2_TR(0x6e8d6e);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B6e8d72:{NFSU2_TR(0x6e8d72);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6e8d74:{NFSU2_TR(0x6e8d74);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6e8dd7;}}
}
B6e8d76:L6e8d76:{c.instructions+=2;NFSU2_TR(0x6e8d76);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffffffull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e8d79:{NFSU2_TR(0x6e8d79);
{goto L6e8dd7;}
}
B6e8d7b:L6e8d7b:{c.instructions+=3;NFSU2_TR(0x6e8d7b);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
w4(R+8,u32(r2(U+0)));
}
B6e8d7e:{NFSU2_TR(0x6e8d7e);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6e8d80:{NFSU2_TR(0x6e8d80);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6e8d86;}}
}
B6e8d82:L6e8d82:{c.instructions+=2;NFSU2_TR(0x6e8d82);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6e8d84:{NFSU2_TR(0x6e8d84);
{goto L6e8dd7;}
}
B6e8d86:L6e8d86:{c.instructions+=3;NFSU2_TR(0x6e8d86);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e8d89:{NFSU2_TR(0x6e8d89);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6e8d8c:{NFSU2_TR(0x6e8d8c);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6e8d92;}}
}
B6e8d8e:L6e8d8e:{c.instructions+=2;NFSU2_TR(0x6e8d8e);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6e8d90:{NFSU2_TR(0x6e8d90);
{goto L6e8d93;}
}
B6e8d92:L6e8d92:{c.instructions+=1;NFSU2_TR(0x6e8d92);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B6e8d93:L6e8d93:{c.instructions+=4;NFSU2_TR(0x6e8d93);
u8 U[10];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+8,u32(r2(U+8)));
}
B6e8d97:{NFSU2_TR(0x6e8d97);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6e8d99:{NFSU2_TR(0x6e8d99);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6e8d9c:{NFSU2_TR(0x6e8d9c);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L6e8dc1;}}
}
B6e8d9e:L6e8d9e:{c.instructions+=4;NFSU2_TR(0x6e8d9e);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B6e8da2:{NFSU2_TR(0x6e8da2);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0xfffffffeull))));
}
B6e8da5:{NFSU2_TR(0x6e8da5);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6e8da7:{NFSU2_TR(0x6e8da7);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6e8dd4;}}
}
B6e8da9:L6e8da9:{c.instructions+=2;NFSU2_TR(0x6e8da9);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x2ull))));
}
B6e8dac:{NFSU2_TR(0x6e8dac);
__builtin_memmove((R+16),(R+16),4);
}
B6e8db0:L6e8db0:{c.instructions+=3;NFSU2_TR(0x6e8db0);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
w4(R+12,u32(r2(U+0)));
}
B6e8db3:{NFSU2_TR(0x6e8db3);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+12),r4(U+0)));
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6e8db5:{NFSU2_TR(0x6e8db5);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L6e8dd4;}}
}
B6e8db7:L6e8db7:{c.instructions+=4;NFSU2_TR(0x6e8db7);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6e8db8:{NFSU2_TR(0x6e8db8);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x2ull))));
}
B6e8dbb:{NFSU2_TR(0x6e8dbb);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6e8dbd:{NFSU2_TR(0x6e8dbd);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e8db0u);}goto L6e8db0;}}
}
B6e8dbf:L6e8dbf:{c.instructions+=1;NFSU2_TR(0x6e8dbf);
{goto L6e8dd4;}
}
B6e8dc1:L6e8dc1:{c.instructions+=2;NFSU2_TR(0x6e8dc1);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6e8dc3:{NFSU2_TR(0x6e8dc3);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6e8dd4;}}
}
B6e8dc5:L6e8dc5:{c.instructions+=3;NFSU2_TR(0x6e8dc5);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+4))),2);
w4(R+8,u32(r2(U+0)));
}
B6e8dc8:{NFSU2_TR(0x6e8dc8);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6e8dca:{NFSU2_TR(0x6e8dca);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6e8dd4;}}
}
B6e8dcc:L6e8dcc:{c.instructions+=4;NFSU2_TR(0x6e8dcc);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B6e8dcd:{NFSU2_TR(0x6e8dcd);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x2ull))));
}
B6e8dd0:{NFSU2_TR(0x6e8dd0);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6e8dd2:{NFSU2_TR(0x6e8dd2);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e8dc5u);}goto L6e8dc5;}}
}
B6e8dd4:L6e8dd4:{c.instructions+=1;NFSU2_TR(0x6e8dd4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6e8dd7:L6e8dd7:{c.instructions+=35;NFSU2_TR(0x6e8dd7);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+8,u32(r1(U+4)));
}
B6e8ddb:{NFSU2_TR(0x6e8ddb);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6e8dde:{NFSU2_TR(0x6e8dde);
w4(R+4,u32(0x1full));
}
B6e8de3:{NFSU2_TR(0x6e8de3);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+8))));
}
B6e8de5:{NFSU2_TR(0x6e8de5);
w4(R+12,u32(0x7fffffffull));
}
B6e8dea:{NFSU2_TR(0x6e8dea);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+12,shr<u32>(r4(R+12),u64(r1(U+0))));
}
B6e8dec:{NFSU2_TR(0x6e8dec);
__builtin_memmove((R+4),(R+8),4);
}
B6e8dee:{NFSU2_TR(0x6e8dee);
__builtin_memmove((R+0),(R+24),4);
}
B6e8df0:{NFSU2_TR(0x6e8df0);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r1(U+0))));
}
B6e8df2:{NFSU2_TR(0x6e8df2);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e8df6:{NFSU2_TR(0x6e8df6);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e8dfa:{NFSU2_TR(0x6e8dfa);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+28,sar<u32>(r4(R+28),u64(r1(U+0))));
}
B6e8dfc:{NFSU2_TR(0x6e8dfc);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e8e00:{NFSU2_TR(0x6e8e00);
__builtin_memmove((R+0),(R+12),4);
}
B6e8e02:{NFSU2_TR(0x6e8e02);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+24))));
}
B6e8e04:{NFSU2_TR(0x6e8e04);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(r2(U+4)));
}
B6e8e08:{NFSU2_TR(0x6e8e08);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e8e0c:{NFSU2_TR(0x6e8e0c);
w4(R+0,u32(0x1ull));
}
B6e8e11:{NFSU2_TR(0x6e8e11);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r1(U+0))));
}
B6e8e13:{NFSU2_TR(0x6e8e13);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e8e17:{NFSU2_TR(0x6e8e17);
__builtin_memmove((R+8),(R+20),4);
}
B6e8e19:{NFSU2_TR(0x6e8e19);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6e8e1c:{NFSU2_TR(0x6e8e1c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6e8e1d:{NFSU2_TR(0x6e8e1d);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+24)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B6e8e20:{NFSU2_TR(0x6e8e20);
u8 U[12];
w4(U+0,u32(u32(u32(0x1ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B6e8e24:{NFSU2_TR(0x6e8e24);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffffeull))));
}
B6e8e27:{NFSU2_TR(0x6e8e27);
u8 U[32];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
w8(U+8,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
}
B6e8e2c:{NFSU2_TR(0x6e8e2c);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B6e8e2e:{NFSU2_TR(0x6e8e2e);
u8 U[12];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B6e8e32:{NFSU2_TR(0x6e8e32);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6e8e35:{NFSU2_TR(0x6e8e35);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e8e39:{NFSU2_TR(0x6e8e39);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6e8e3b:{NFSU2_TR(0x6e8e3b);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6e8e3d:{NFSU2_TR(0x6e8e3d);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e8e41:{NFSU2_TR(0x6e8e41);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6e8e5d;}}
}
B6e8e43:L6e8e43:{c.instructions+=9;NFSU2_TR(0x6e8e43);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e8e46:{NFSU2_TR(0x6e8e46);
u8 U[10];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+8,u32(r2(U+8)));
}
B6e8e4a:{NFSU2_TR(0x6e8e4a);
w4(R+0,u32(0xaaaaaaabull));
}
B6e8e4f:{NFSU2_TR(0x6e8e4f);
u8 U[24];
w8(U+0,u64(r4(R+0)));
w8(U+8,u64(r4(R+8)));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(u64(r8(U+16))>>32));
w4(R+0,u32(r8(U+16)));
}
B6e8e51:{NFSU2_TR(0x6e8e51);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B6e8e54:{NFSU2_TR(0x6e8e54);
u8 U[13];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),1);
s1(u32(r4(U+8)),r1(U+12));
}
B6e8e58:{NFSU2_TR(0x6e8e58);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6e8e59:{NFSU2_TR(0x6e8e59);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6e8e5b:{NFSU2_TR(0x6e8e5b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e8e43u);}goto L6e8e43;}}
}
B6e8e5d:L6e8e5d:{c.instructions+=4;NFSU2_TR(0x6e8e5d);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e8e61:{NFSU2_TR(0x6e8e61);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e8e65:{NFSU2_TR(0x6e8e65);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6e8e67:{NFSU2_TR(0x6e8e67);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6e8e77;}}
}
B6e8e69:L6e8e69:{c.instructions+=4;NFSU2_TR(0x6e8e69);
__builtin_memmove((R+0),gp(0x811e32),1);
}
B6e8e6e:{NFSU2_TR(0x6e8e6e);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6e8e70:{NFSU2_TR(0x6e8e70);
u8 U[5];
w4(U+0,u32(u32(u32(0x33ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B6e8e75:{NFSU2_TR(0x6e8e75);
if(r1(R+518)){{goto L6e8e7c;}}
}
B6e8e77:L6e8e77:{c.instructions+=1;NFSU2_TR(0x6e8e77);
u8 U[5];
w4(U+0,u32(u32(u32(0x33ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B6e8e7c:L6e8e7c:{c.instructions+=3;NFSU2_TR(0x6e8e7c);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e8e80:{NFSU2_TR(0x6e8e80);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6e8e83:{NFSU2_TR(0x6e8e83);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6e8eaf;}}
}
B6e8e85:L6e8e85:{c.instructions+=11;NFSU2_TR(0x6e8e85);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e8e88:{NFSU2_TR(0x6e8e88);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e8e8b:{NFSU2_TR(0x6e8e8b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e8e8e:{NFSU2_TR(0x6e8e8e);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e8e92:{NFSU2_TR(0x6e8e92);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e8e95:{NFSU2_TR(0x6e8e95);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e8e99:{NFSU2_TR(0x6e8e99);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e8e9c:{NFSU2_TR(0x6e8e9c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e8e9f:{NFSU2_TR(0x6e8e9f);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e8ea3:{NFSU2_TR(0x6e8ea3);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B6e8eaa:{NFSU2_TR(0x6e8eaa);
TAIL_STATIC(0x6e91a6u,6e9);
}
B6e8eaf:L6e8eaf:{c.instructions+=2;NFSU2_TR(0x6e8eaf);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6e8eb2:{NFSU2_TR(0x6e8eb2);
if(r1(R+518)){{goto L6e8ec9;}}
}
B6e8eb4:L6e8eb4:{c.instructions+=2;NFSU2_TR(0x6e8eb4);
u8 U[16];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6e8eb8:{NFSU2_TR(0x6e8eb8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6e8ec9;}}
}
B6e8eba:L6e8eba:{c.instructions+=3;NFSU2_TR(0x6e8eba);
u8 U[5];
w4(U+0,u32(u32(u32(0x33ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B6e8ebe:{NFSU2_TR(0x6e8ebe);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6e8ec0:{NFSU2_TR(0x6e8ec0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6e8ec9;}}
}
B6e8ec2:L6e8ec2:{c.instructions+=2;NFSU2_TR(0x6e8ec2);
w4(R+8,u32(u32(r4(R+8))&u32(r4(R+12))));
}
B6e8ec4:{NFSU2_TR(0x6e8ec4);
{goto L6e8f6e;}
}
B6e8ec9:L6e8ec9:{c.instructions+=3;NFSU2_TR(0x6e8ec9);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6e8ecb:{NFSU2_TR(0x6e8ecb);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6e8ecd:{NFSU2_TR(0x6e8ecd);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6e8f6c;}}
}
B6e8ed3:L6e8ed3:{c.instructions+=4;NFSU2_TR(0x6e8ed3);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6e8ed7:{NFSU2_TR(0x6e8ed7);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6e8ed9:{NFSU2_TR(0x6e8ed9);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e8edd:{NFSU2_TR(0x6e8edd);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B6e8ee0:L6e8ee0:{c.instructions+=9;NFSU2_TR(0x6e8ee0);
u8 U[13];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+0,u32(r1(U+12)));
}
B6e8ee5:{NFSU2_TR(0x6e8ee5);
__builtin_memmove((R+4),(R+0),4);
}
B6e8ee7:{NFSU2_TR(0x6e8ee7);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x1full))));
}
B6e8eea:{NFSU2_TR(0x6e8eea);
w4(R+12,u32(0x1ull));
}
B6e8eef:{NFSU2_TR(0x6e8eef);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+12,shl<u32>(r4(R+12),u64(r1(U+0))));
}
B6e8ef1:{NFSU2_TR(0x6e8ef1);
u8 U[8];
w4(U+0,u32(u32(u32(0xacull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e8ef8:{NFSU2_TR(0x6e8ef8);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B6e8efb:{NFSU2_TR(0x6e8efb);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w4(U+12,u32(u32(r4(U+8))&u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6e8efe:{NFSU2_TR(0x6e8efe);
if(r1(R+518)){{goto L6e8f4e;}}
}
B6e8f00:L6e8f00:{c.instructions+=24;NFSU2_TR(0x6e8f00);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e8f04:{NFSU2_TR(0x6e8f04);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e8f07:{NFSU2_TR(0x6e8f07);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e8f0a:{NFSU2_TR(0x6e8f0a);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6e8f0e:{NFSU2_TR(0x6e8f0e);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+24))));
}
B6e8f10:{NFSU2_TR(0x6e8f10);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+12))));
}
B6e8f12:{NFSU2_TR(0x6e8f12);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+12,u32(r2(U+4)));
}
B6e8f16:{NFSU2_TR(0x6e8f16);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e8f1a:{NFSU2_TR(0x6e8f1a);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6e8f1e:{NFSU2_TR(0x6e8f1e);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e8f21:{NFSU2_TR(0x6e8f21);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6e8f23:{NFSU2_TR(0x6e8f23);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e8f25:{NFSU2_TR(0x6e8f25);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+12,u32(r2(U+4)));
}
B6e8f29:{NFSU2_TR(0x6e8f29);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e8f2d:{NFSU2_TR(0x6e8f2d);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6e8f31:{NFSU2_TR(0x6e8f31);
{u32 ea_=u32(r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e8f34:{NFSU2_TR(0x6e8f34);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6e8f37:{NFSU2_TR(0x6e8f37);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e8f3a:{NFSU2_TR(0x6e8f3a);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+8))),2);
w4(R+12,u32(r2(U+0)));
}
B6e8f3d:{NFSU2_TR(0x6e8f3d);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e8f41:{NFSU2_TR(0x6e8f41);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6e8f45:{NFSU2_TR(0x6e8f45);
{u32 ea_=u32(r4(R+0)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e8f48:{NFSU2_TR(0x6e8f48);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6e8f4b:{NFSU2_TR(0x6e8f4b);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6e8f4e:L6e8f4e:{c.instructions+=9;NFSU2_TR(0x6e8f4e);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6e8f52:{NFSU2_TR(0x6e8f52);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B6e8f56:{NFSU2_TR(0x6e8f56);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6e8f57:{NFSU2_TR(0x6e8f57);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x30ull))));
}
B6e8f5a:{NFSU2_TR(0x6e8f5a);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
}
B6e8f5d:{NFSU2_TR(0x6e8f5d);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x6ull))));
}
B6e8f60:{NFSU2_TR(0x6e8f60);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6e8f62:{NFSU2_TR(0x6e8f62);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e8f66:{NFSU2_TR(0x6e8f66);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6e8ee0u);}goto L6e8ee0;}}
}
B6e8f6c:L6e8f6c:{c.instructions+=1;NFSU2_TR(0x6e8f6c);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6e8f6e:L6e8f6e:{c.instructions+=3;NFSU2_TR(0x6e8f6e);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e8f72:{NFSU2_TR(0x6e8f72);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6e8f74:{NFSU2_TR(0x6e8f74);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x6e9088u,6e9);}
}
B6e8f7a:L6e8f7a:{c.instructions+=11;NFSU2_TR(0x6e8f7a);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B6e8f7e:{NFSU2_TR(0x6e8f7e);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6e8f82:{NFSU2_TR(0x6e8f82);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x2ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6e8f85:{NFSU2_TR(0x6e8f85);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(r4(R+0)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B6e8f88:{NFSU2_TR(0x6e8f88);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B6e8f8b:{NFSU2_TR(0x6e8f8b);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+24))));
}
B6e8f8d:{NFSU2_TR(0x6e8f8d);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6e8f91:{NFSU2_TR(0x6e8f91);
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+8))));
}
B6e8f93:{NFSU2_TR(0x6e8f93);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e8f97:{NFSU2_TR(0x6e8f97);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e8f9b:{NFSU2_TR(0x6e8f9b);
{goto L6e8fa0;}
}
B6e8fa0:L6e8fa0:{c.instructions+=3;NFSU2_TR(0x6e8fa0);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6e8fa2:{NFSU2_TR(0x6e8fa2);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6e8fa4:{NFSU2_TR(0x6e8fa4);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){TAIL_STATIC(0x6e9066u,6e9);}
}
B6e8faa:L6e8faa:{c.instructions+=12;NFSU2_TR(0x6e8faa);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6e8fac:{NFSU2_TR(0x6e8fac);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e8fb0:{NFSU2_TR(0x6e8fb0);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2ull))));
__builtin_memmove((R+8),(U+0),4);
}
B6e8fb3:{NFSU2_TR(0x6e8fb3);
u8 U[13];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
w4(R+0,u32(r1(U+12)));
}
B6e8fb8:{NFSU2_TR(0x6e8fb8);
__builtin_memmove((R+4),(R+0),4);
}
B6e8fba:{NFSU2_TR(0x6e8fba);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x1full))));
}
B6e8fbd:{NFSU2_TR(0x6e8fbd);
w4(R+28,u32(0x1ull));
}
B6e8fc2:{NFSU2_TR(0x6e8fc2);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r1(U+0))));
}
B6e8fc4:{NFSU2_TR(0x6e8fc4);
u8 U[8];
w4(U+0,u32(u32(u32(0xacull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e8fcb:{NFSU2_TR(0x6e8fcb);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B6e8fce:{NFSU2_TR(0x6e8fce);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w4(U+12,u32(u32(r4(U+8))&u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6e8fd1:{NFSU2_TR(0x6e8fd1);
if(r1(R+518)){TAIL_STATIC(0x6e9048u,6e9);}
}
B6e8fd3:L6e8fd3:{c.instructions+=13;NFSU2_TR(0x6e8fd3);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6e8fd7:{NFSU2_TR(0x6e8fd7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6e8fda:{NFSU2_TR(0x6e8fda);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B6e8fde:{NFSU2_TR(0x6e8fde);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xfffffffeull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+28,u32(r1(U+4)));
}
B6e8fe2:{NFSU2_TR(0x6e8fe2);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e8fe6:{NFSU2_TR(0x6e8fe6);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+28,u32(r1(U+4)));
}
B6e8fea:{NFSU2_TR(0x6e8fea);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6e8fee:{NFSU2_TR(0x6e8fee);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6e8ff2:{NFSU2_TR(0x6e8ff2);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
w4(R+28,u32(r1(U+0)));
}
B6e8ff5:{NFSU2_TR(0x6e8ff5);
{u32 ea_=u32(r4(R+0)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6e8ff8:{NFSU2_TR(0x6e8ff8);
{u32 ea_=u32(r4(R+0)+u32(24u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6e8ffb:{NFSU2_TR(0x6e8ffb);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6e8fff:{NFSU2_TR(0x6e8fff);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
TAIL_STATIC(0x6e9003u,6e9);
}
XIT:NFSU2_TR_EXIT(0x6e8,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
