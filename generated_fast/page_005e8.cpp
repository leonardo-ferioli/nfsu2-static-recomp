#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_43e(u8* __restrict R,Cpu& c);
u32 body_43f(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_571(u8* __restrict R,Cpu& c);
u32 body_577(u8* __restrict R,Cpu& c);
u32 body_578(u8* __restrict R,Cpu& c);
u32 body_57a(u8* __restrict R,Cpu& c);
u32 body_57e(u8* __restrict R,Cpu& c);
u32 body_591(u8* __restrict R,Cpu& c);
u32 body_5d3(u8* __restrict R,Cpu& c);
u32 body_5d4(u8* __restrict R,Cpu& c);
u32 body_5d5(u8* __restrict R,Cpu& c);
u32 body_5d8(u8* __restrict R,Cpu& c);
u32 body_5d9(u8* __restrict R,Cpu& c);
u32 body_5da(u8* __restrict R,Cpu& c);
u32 body_5df(u8* __restrict R,Cpu& c);
u32 body_5e0(u8* __restrict R,Cpu& c);
u32 body_5e3(u8* __restrict R,Cpu& c);
u32 body_5e5(u8* __restrict R,Cpu& c);
u32 body_5e6(u8* __restrict R,Cpu& c);
u32 body_5e7(u8* __restrict R,Cpu& c);
u32 body_5e9(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x5e8,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x5e8,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_5e8(u8* __restrict R,Cpu& c);
u32 page_5e8(Cpu& c){return body_5e8(c.regs.data(),c);}
__attribute__((noinline)) u32 body_5e8(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x5e8000:goto L5e8000;
case 0x5e8004:c.instructions+=40;goto B5e8004;
case 0x5e8008:c.instructions+=39;goto B5e8008;
case 0x5e800a:c.instructions+=38;goto B5e800a;
case 0x5e800b:c.instructions+=37;goto B5e800b;
case 0x5e800f:c.instructions+=36;goto B5e800f;
case 0x5e8013:c.instructions+=35;goto B5e8013;
case 0x5e8014:c.instructions+=34;goto B5e8014;
case 0x5e8016:c.instructions+=33;goto B5e8016;
case 0x5e801a:c.instructions+=32;goto B5e801a;
case 0x5e801c:c.instructions+=31;goto B5e801c;
case 0x5e8020:c.instructions+=30;goto B5e8020;
case 0x5e8022:c.instructions+=29;goto B5e8022;
case 0x5e8026:c.instructions+=28;goto B5e8026;
case 0x5e802a:c.instructions+=27;goto B5e802a;
case 0x5e802c:c.instructions+=26;goto B5e802c;
case 0x5e8030:c.instructions+=25;goto B5e8030;
case 0x5e8032:c.instructions+=24;goto B5e8032;
case 0x5e8036:c.instructions+=23;goto B5e8036;
case 0x5e8038:c.instructions+=22;goto B5e8038;
case 0x5e803c:c.instructions+=21;goto B5e803c;
case 0x5e803f:c.instructions+=20;goto B5e803f;
case 0x5e8043:c.instructions+=19;goto B5e8043;
case 0x5e8047:c.instructions+=18;goto B5e8047;
case 0x5e804a:c.instructions+=17;goto B5e804a;
case 0x5e804e:c.instructions+=16;goto B5e804e;
case 0x5e8052:c.instructions+=15;goto B5e8052;
case 0x5e8056:c.instructions+=14;goto B5e8056;
case 0x5e805a:c.instructions+=13;goto B5e805a;
case 0x5e805e:c.instructions+=12;goto B5e805e;
case 0x5e8062:c.instructions+=11;goto B5e8062;
case 0x5e8066:c.instructions+=10;goto B5e8066;
case 0x5e806a:c.instructions+=9;goto B5e806a;
case 0x5e806c:c.instructions+=8;goto B5e806c;
case 0x5e8072:c.instructions+=7;goto B5e8072;
case 0x5e8076:c.instructions+=6;goto B5e8076;
case 0x5e807c:c.instructions+=5;goto B5e807c;
case 0x5e8080:c.instructions+=4;goto B5e8080;
case 0x5e8084:c.instructions+=3;goto B5e8084;
case 0x5e808a:c.instructions+=2;goto B5e808a;
case 0x5e808e:c.instructions+=1;goto B5e808e;
case 0x5e8093:goto L5e8093;
case 0x5e8096:c.instructions+=11;goto B5e8096;
case 0x5e8099:c.instructions+=10;goto B5e8099;
case 0x5e809a:c.instructions+=9;goto B5e809a;
case 0x5e809b:c.instructions+=8;goto B5e809b;
case 0x5e809c:c.instructions+=7;goto B5e809c;
case 0x5e80a1:c.instructions+=6;goto B5e80a1;
case 0x5e80a5:c.instructions+=5;goto B5e80a5;
case 0x5e80a6:c.instructions+=4;goto B5e80a6;
case 0x5e80aa:c.instructions+=3;goto B5e80aa;
case 0x5e80ab:c.instructions+=2;goto B5e80ab;
case 0x5e80ad:c.instructions+=1;goto B5e80ad;
case 0x5e80b2:goto L5e80b2;
case 0x5e80b4:c.instructions+=1;goto B5e80b4;
case 0x5e80b6:goto L5e80b6;
case 0x5e80ba:c.instructions+=11;goto B5e80ba;
case 0x5e80be:c.instructions+=10;goto B5e80be;
case 0x5e80c2:c.instructions+=9;goto B5e80c2;
case 0x5e80c6:c.instructions+=8;goto B5e80c6;
case 0x5e80ca:c.instructions+=7;goto B5e80ca;
case 0x5e80ce:c.instructions+=6;goto B5e80ce;
case 0x5e80d2:c.instructions+=5;goto B5e80d2;
case 0x5e80d3:c.instructions+=4;goto B5e80d3;
case 0x5e80d5:c.instructions+=3;goto B5e80d5;
case 0x5e80d9:c.instructions+=2;goto B5e80d9;
case 0x5e80dd:c.instructions+=1;goto B5e80dd;
case 0x5e80e3:goto L5e80e3;
case 0x5e80e5:c.instructions+=6;goto B5e80e5;
case 0x5e80e6:c.instructions+=5;goto B5e80e6;
case 0x5e80e7:c.instructions+=4;goto B5e80e7;
case 0x5e80e8:c.instructions+=3;goto B5e80e8;
case 0x5e80ea:c.instructions+=2;goto B5e80ea;
case 0x5e80eb:c.instructions+=1;goto B5e80eb;
case 0x5e80ee:goto L5e80ee;
case 0x5e80f0:c.instructions+=6;goto B5e80f0;
case 0x5e80f1:c.instructions+=5;goto B5e80f1;
case 0x5e80f2:c.instructions+=4;goto B5e80f2;
case 0x5e80f3:c.instructions+=3;goto B5e80f3;
case 0x5e80f5:c.instructions+=2;goto B5e80f5;
case 0x5e80f6:c.instructions+=1;goto B5e80f6;
case 0x5e80f9:goto L5e80f9;
case 0x5e80fa:c.instructions+=7;goto B5e80fa;
case 0x5e80fc:c.instructions+=6;goto B5e80fc;
case 0x5e80fd:c.instructions+=5;goto B5e80fd;
case 0x5e80ff:c.instructions+=4;goto B5e80ff;
case 0x5e8100:c.instructions+=3;goto B5e8100;
case 0x5e8102:c.instructions+=2;goto B5e8102;
case 0x5e8103:c.instructions+=1;goto B5e8103;
case 0x5e8110:goto L5e8110;
case 0x5e8114:c.instructions+=12;goto B5e8114;
case 0x5e8115:c.instructions+=11;goto B5e8115;
case 0x5e8116:c.instructions+=10;goto B5e8116;
case 0x5e8118:c.instructions+=9;goto B5e8118;
case 0x5e811c:c.instructions+=8;goto B5e811c;
case 0x5e811d:c.instructions+=7;goto B5e811d;
case 0x5e811e:c.instructions+=6;goto B5e811e;
case 0x5e8120:c.instructions+=5;goto B5e8120;
case 0x5e8121:c.instructions+=4;goto B5e8121;
case 0x5e8124:c.instructions+=3;goto B5e8124;
case 0x5e8125:c.instructions+=2;goto B5e8125;
case 0x5e8127:c.instructions+=1;goto B5e8127;
case 0x5e812c:goto L5e812c;
case 0x5e8132:c.instructions+=4;goto B5e8132;
case 0x5e8134:c.instructions+=3;goto B5e8134;
case 0x5e8136:c.instructions+=2;goto B5e8136;
case 0x5e8138:c.instructions+=1;goto B5e8138;
case 0x5e813a:goto L5e813a;
case 0x5e8140:goto L5e8140;
case 0x5e8146:c.instructions+=6;goto B5e8146;
case 0x5e814a:c.instructions+=5;goto B5e814a;
case 0x5e814c:c.instructions+=4;goto B5e814c;
case 0x5e8150:c.instructions+=3;goto B5e8150;
case 0x5e8151:c.instructions+=2;goto B5e8151;
case 0x5e8152:c.instructions+=1;goto B5e8152;
case 0x5e8157:goto L5e8157;
case 0x5e8159:c.instructions+=1;goto B5e8159;
case 0x5e815b:goto L5e815b;
case 0x5e815f:c.instructions+=6;goto B5e815f;
case 0x5e8161:c.instructions+=5;goto B5e8161;
case 0x5e8165:c.instructions+=4;goto B5e8165;
case 0x5e8167:c.instructions+=3;goto B5e8167;
case 0x5e8169:c.instructions+=2;goto B5e8169;
case 0x5e816c:c.instructions+=1;goto B5e816c;
case 0x5e816e:goto L5e816e;
case 0x5e8170:c.instructions+=1;goto B5e8170;
case 0x5e8174:goto L5e8174;
case 0x5e8178:c.instructions+=4;goto B5e8178;
case 0x5e817a:c.instructions+=3;goto B5e817a;
case 0x5e817c:c.instructions+=2;goto B5e817c;
case 0x5e817f:c.instructions+=1;goto B5e817f;
case 0x5e8181:goto L5e8181;
case 0x5e8183:c.instructions+=1;goto B5e8183;
case 0x5e8187:goto L5e8187;
case 0x5e818b:c.instructions+=5;goto B5e818b;
case 0x5e818d:c.instructions+=4;goto B5e818d;
case 0x5e818f:c.instructions+=3;goto B5e818f;
case 0x5e8191:c.instructions+=2;goto B5e8191;
case 0x5e8194:c.instructions+=1;goto B5e8194;
case 0x5e8196:goto L5e8196;
case 0x5e819c:c.instructions+=3;goto B5e819c;
case 0x5e819d:c.instructions+=2;goto B5e819d;
case 0x5e819f:c.instructions+=1;goto B5e819f;
case 0x5e81a1:goto L5e81a1;
case 0x5e81a2:c.instructions+=5;goto B5e81a2;
case 0x5e81a3:c.instructions+=4;goto B5e81a3;
case 0x5e81a4:c.instructions+=3;goto B5e81a4;
case 0x5e81a6:c.instructions+=2;goto B5e81a6;
case 0x5e81a7:c.instructions+=1;goto B5e81a7;
case 0x5e81aa:goto L5e81aa;
case 0x5e81ab:c.instructions+=5;goto B5e81ab;
case 0x5e81ac:c.instructions+=4;goto B5e81ac;
case 0x5e81ad:c.instructions+=3;goto B5e81ad;
case 0x5e81af:c.instructions+=2;goto B5e81af;
case 0x5e81b0:c.instructions+=1;goto B5e81b0;
case 0x5e81c0:goto L5e81c0;
case 0x5e81c4:c.instructions+=3;goto B5e81c4;
case 0x5e81c5:c.instructions+=2;goto B5e81c5;
case 0x5e81ca:c.instructions+=1;goto B5e81ca;
case 0x5e81cf:goto L5e81cf;
case 0x5e81d0:goto L5e81d0;
case 0x5e81d2:c.instructions+=6;goto B5e81d2;
case 0x5e81d3:c.instructions+=5;goto B5e81d3;
case 0x5e81d5:c.instructions+=4;goto B5e81d5;
case 0x5e81da:c.instructions+=3;goto B5e81da;
case 0x5e81dd:c.instructions+=2;goto B5e81dd;
case 0x5e81df:c.instructions+=1;goto B5e81df;
case 0x5e81e2:goto L5e81e2;
case 0x5e81e4:goto L5e81e4;
case 0x5e81ea:c.instructions+=4;goto B5e81ea;
case 0x5e81f0:c.instructions+=3;goto B5e81f0;
case 0x5e81f2:c.instructions+=2;goto B5e81f2;
case 0x5e81f3:c.instructions+=1;goto B5e81f3;
case 0x5e8200:goto L5e8200;
case 0x5e8202:c.instructions+=2;goto B5e8202;
case 0x5e8205:c.instructions+=1;goto B5e8205;
case 0x5e8210:goto L5e8210;
case 0x5e8211:c.instructions+=8;goto B5e8211;
case 0x5e8212:c.instructions+=7;goto B5e8212;
case 0x5e8216:c.instructions+=6;goto B5e8216;
case 0x5e8219:c.instructions+=5;goto B5e8219;
case 0x5e821e:c.instructions+=4;goto B5e821e;
case 0x5e821f:c.instructions+=3;goto B5e821f;
case 0x5e8220:c.instructions+=2;goto B5e8220;
case 0x5e8222:c.instructions+=1;goto B5e8222;
case 0x5e8228:goto L5e8228;
case 0x5e822b:c.instructions+=5;goto B5e822b;
case 0x5e822e:c.instructions+=4;goto B5e822e;
case 0x5e8230:c.instructions+=3;goto B5e8230;
case 0x5e8233:c.instructions+=2;goto B5e8233;
case 0x5e8234:c.instructions+=1;goto B5e8234;
case 0x5e8239:goto L5e8239;
case 0x5e823a:c.instructions+=3;goto B5e823a;
case 0x5e823c:c.instructions+=2;goto B5e823c;
case 0x5e823e:c.instructions+=1;goto B5e823e;
case 0x5e8243:goto L5e8243;
case 0x5e8245:c.instructions+=4;goto B5e8245;
case 0x5e824a:c.instructions+=3;goto B5e824a;
case 0x5e824c:c.instructions+=2;goto B5e824c;
case 0x5e824e:c.instructions+=1;goto B5e824e;
case 0x5e8250:goto L5e8250;
case 0x5e8251:c.instructions+=1;goto B5e8251;
case 0x5e8256:goto L5e8256;
case 0x5e8257:c.instructions+=5;goto B5e8257;
case 0x5e8258:c.instructions+=4;goto B5e8258;
case 0x5e8259:c.instructions+=3;goto B5e8259;
case 0x5e825e:c.instructions+=2;goto B5e825e;
case 0x5e825f:c.instructions+=1;goto B5e825f;
case 0x5e8262:goto L5e8262;
case 0x5e8267:goto L5e8267;
case 0x5e8268:c.instructions+=2;goto B5e8268;
case 0x5e826a:c.instructions+=1;goto B5e826a;
case 0x5e826f:goto L5e826f;
case 0x5e8271:c.instructions+=7;goto B5e8271;
case 0x5e8275:c.instructions+=6;goto B5e8275;
case 0x5e8277:c.instructions+=5;goto B5e8277;
case 0x5e827a:c.instructions+=4;goto B5e827a;
case 0x5e827c:c.instructions+=3;goto B5e827c;
case 0x5e827f:c.instructions+=2;goto B5e827f;
case 0x5e8287:c.instructions+=1;goto B5e8287;
case 0x5e8289:goto L5e8289;
case 0x5e828b:c.instructions+=1;goto B5e828b;
case 0x5e8290:goto L5e8290;
case 0x5e8295:c.instructions+=3;goto B5e8295;
case 0x5e8296:c.instructions+=2;goto B5e8296;
case 0x5e8297:c.instructions+=1;goto B5e8297;
case 0x5e829c:goto L5e829c;
case 0x5e829f:goto L5e829f;
case 0x5e82a0:c.instructions+=5;goto B5e82a0;
case 0x5e82a1:c.instructions+=4;goto B5e82a1;
case 0x5e82a2:c.instructions+=3;goto B5e82a2;
case 0x5e82a7:c.instructions+=2;goto B5e82a7;
case 0x5e82a8:c.instructions+=1;goto B5e82a8;
case 0x5e82ab:goto L5e82ab;
case 0x5e82b0:c.instructions+=1;goto B5e82b0;
case 0x5e82b2:goto L5e82b2;
case 0x5e82b4:c.instructions+=8;goto B5e82b4;
case 0x5e82b5:c.instructions+=7;goto B5e82b5;
case 0x5e82bb:c.instructions+=6;goto B5e82bb;
case 0x5e82c1:c.instructions+=5;goto B5e82c1;
case 0x5e82c2:c.instructions+=4;goto B5e82c2;
case 0x5e82c3:c.instructions+=3;goto B5e82c3;
case 0x5e82c8:c.instructions+=2;goto B5e82c8;
case 0x5e82c9:c.instructions+=1;goto B5e82c9;
case 0x5e82cc:goto L5e82cc;
case 0x5e82cd:c.instructions+=5;goto B5e82cd;
case 0x5e82ce:c.instructions+=4;goto B5e82ce;
case 0x5e82cf:c.instructions+=3;goto B5e82cf;
case 0x5e82d1:c.instructions+=2;goto B5e82d1;
case 0x5e82d2:c.instructions+=1;goto B5e82d2;
case 0x5e82e0:goto L5e82e0;
case 0x5e82e1:c.instructions+=11;goto B5e82e1;
case 0x5e82e2:c.instructions+=10;goto B5e82e2;
case 0x5e82e3:c.instructions+=9;goto B5e82e3;
case 0x5e82e4:c.instructions+=8;goto B5e82e4;
case 0x5e82e5:c.instructions+=7;goto B5e82e5;
case 0x5e82e9:c.instructions+=6;goto B5e82e9;
case 0x5e82eb:c.instructions+=5;goto B5e82eb;
case 0x5e82f0:c.instructions+=4;goto B5e82f0;
case 0x5e82f2:c.instructions+=3;goto B5e82f2;
case 0x5e82f4:c.instructions+=2;goto B5e82f4;
case 0x5e82f8:c.instructions+=1;goto B5e82f8;
case 0x5e82fd:goto L5e82fd;
case 0x5e82ff:c.instructions+=1;goto B5e82ff;
case 0x5e8305:goto L5e8305;
case 0x5e8308:c.instructions+=3;goto B5e8308;
case 0x5e8309:c.instructions+=2;goto B5e8309;
case 0x5e830b:c.instructions+=1;goto B5e830b;
case 0x5e8310:goto L5e8310;
case 0x5e8312:c.instructions+=6;goto B5e8312;
case 0x5e8314:c.instructions+=5;goto B5e8314;
case 0x5e8316:c.instructions+=4;goto B5e8316;
case 0x5e8319:c.instructions+=3;goto B5e8319;
case 0x5e831a:c.instructions+=2;goto B5e831a;
case 0x5e831c:c.instructions+=1;goto B5e831c;
case 0x5e8321:goto L5e8321;
case 0x5e8323:c.instructions+=5;goto B5e8323;
case 0x5e8325:c.instructions+=4;goto B5e8325;
case 0x5e8327:c.instructions+=3;goto B5e8327;
case 0x5e8328:c.instructions+=2;goto B5e8328;
case 0x5e832a:c.instructions+=1;goto B5e832a;
case 0x5e832f:goto L5e832f;
case 0x5e8331:c.instructions+=6;goto B5e8331;
case 0x5e8333:c.instructions+=5;goto B5e8333;
case 0x5e8335:c.instructions+=4;goto B5e8335;
case 0x5e8338:c.instructions+=3;goto B5e8338;
case 0x5e8339:c.instructions+=2;goto B5e8339;
case 0x5e833b:c.instructions+=1;goto B5e833b;
case 0x5e8340:goto L5e8340;
case 0x5e8343:c.instructions+=3;goto B5e8343;
case 0x5e8344:c.instructions+=2;goto B5e8344;
case 0x5e8346:c.instructions+=1;goto B5e8346;
case 0x5e834b:goto L5e834b;
case 0x5e834e:c.instructions+=3;goto B5e834e;
case 0x5e834f:c.instructions+=2;goto B5e834f;
case 0x5e8351:c.instructions+=1;goto B5e8351;
case 0x5e8356:goto L5e8356;
case 0x5e8359:c.instructions+=3;goto B5e8359;
case 0x5e835a:c.instructions+=2;goto B5e835a;
case 0x5e835c:c.instructions+=1;goto B5e835c;
case 0x5e8361:goto L5e8361;
case 0x5e8364:c.instructions+=5;goto B5e8364;
case 0x5e8369:c.instructions+=4;goto B5e8369;
case 0x5e836a:c.instructions+=3;goto B5e836a;
case 0x5e836d:c.instructions+=2;goto B5e836d;
case 0x5e8370:c.instructions+=1;goto B5e8370;
case 0x5e8372:goto L5e8372;
case 0x5e8375:c.instructions+=2;goto B5e8375;
case 0x5e8377:c.instructions+=1;goto B5e8377;
case 0x5e8379:goto L5e8379;
case 0x5e837e:c.instructions+=3;goto B5e837e;
case 0x5e8383:c.instructions+=2;goto B5e8383;
case 0x5e8387:c.instructions+=1;goto B5e8387;
case 0x5e838b:goto L5e838b;
case 0x5e838f:c.instructions+=3;goto B5e838f;
case 0x5e8395:c.instructions+=2;goto B5e8395;
case 0x5e839a:c.instructions+=1;goto B5e839a;
case 0x5e83a0:goto L5e83a0;
case 0x5e83a1:c.instructions+=2;goto B5e83a1;
case 0x5e83a3:c.instructions+=1;goto B5e83a3;
case 0x5e83a8:goto L5e83a8;
case 0x5e83ab:c.instructions+=2;goto B5e83ab;
case 0x5e83ac:c.instructions+=1;goto B5e83ac;
case 0x5e83ae:goto L5e83ae;
case 0x5e83b0:c.instructions+=7;goto B5e83b0;
case 0x5e83b1:c.instructions+=6;goto B5e83b1;
case 0x5e83b3:c.instructions+=5;goto B5e83b3;
case 0x5e83b5:c.instructions+=4;goto B5e83b5;
case 0x5e83bb:c.instructions+=3;goto B5e83bb;
case 0x5e83bc:c.instructions+=2;goto B5e83bc;
case 0x5e83be:c.instructions+=1;goto B5e83be;
case 0x5e83c3:goto L5e83c3;
case 0x5e83c6:c.instructions+=2;goto B5e83c6;
case 0x5e83c8:c.instructions+=1;goto B5e83c8;
case 0x5e83ce:goto L5e83ce;
case 0x5e83d2:c.instructions+=3;goto B5e83d2;
case 0x5e83d3:c.instructions+=2;goto B5e83d3;
case 0x5e83d5:c.instructions+=1;goto B5e83d5;
case 0x5e83da:goto L5e83da;
case 0x5e83e0:c.instructions+=1;goto B5e83e0;
case 0x5e83e2:goto L5e83e2;
case 0x5e83e4:c.instructions+=1;goto B5e83e4;
case 0x5e83e9:goto L5e83e9;
case 0x5e83ee:goto L5e83ee;
case 0x5e83f4:c.instructions+=1;goto B5e83f4;
case 0x5e83f6:goto L5e83f6;
case 0x5e83fc:c.instructions+=2;goto B5e83fc;
case 0x5e8400:c.instructions+=1;goto B5e8400;
case 0x5e8406:goto L5e8406;
case 0x5e840c:c.instructions+=1;goto B5e840c;
case 0x5e8410:goto L5e8410;
case 0x5e8413:c.instructions+=7;goto B5e8413;
case 0x5e8417:c.instructions+=6;goto B5e8417;
case 0x5e8418:c.instructions+=5;goto B5e8418;
case 0x5e841d:c.instructions+=4;goto B5e841d;
case 0x5e841f:c.instructions+=3;goto B5e841f;
case 0x5e8421:c.instructions+=2;goto B5e8421;
case 0x5e8423:c.instructions+=1;goto B5e8423;
case 0x5e8429:goto L5e8429;
case 0x5e842b:c.instructions+=1;goto B5e842b;
case 0x5e8431:goto L5e8431;
case 0x5e8436:c.instructions+=2;goto B5e8436;
case 0x5e8438:c.instructions+=1;goto B5e8438;
case 0x5e843a:goto L5e843a;
case 0x5e843c:c.instructions+=2;goto B5e843c;
case 0x5e843e:c.instructions+=1;goto B5e843e;
case 0x5e8440:goto L5e8440;
case 0x5e8442:c.instructions+=6;goto B5e8442;
case 0x5e8444:c.instructions+=5;goto B5e8444;
case 0x5e8446:c.instructions+=4;goto B5e8446;
case 0x5e844a:c.instructions+=3;goto B5e844a;
case 0x5e844b:c.instructions+=2;goto B5e844b;
case 0x5e844d:c.instructions+=1;goto B5e844d;
case 0x5e8452:goto L5e8452;
case 0x5e8456:c.instructions+=3;goto B5e8456;
case 0x5e8458:c.instructions+=2;goto B5e8458;
case 0x5e845b:c.instructions+=1;goto B5e845b;
case 0x5e845d:goto L5e845d;
case 0x5e8460:c.instructions+=1;goto B5e8460;
case 0x5e8462:goto L5e8462;
case 0x5e8469:c.instructions+=9;goto B5e8469;
case 0x5e846f:c.instructions+=8;goto B5e846f;
case 0x5e8476:c.instructions+=7;goto B5e8476;
case 0x5e8479:c.instructions+=6;goto B5e8479;
case 0x5e847c:c.instructions+=5;goto B5e847c;
case 0x5e847d:c.instructions+=4;goto B5e847d;
case 0x5e847e:c.instructions+=3;goto B5e847e;
case 0x5e847f:c.instructions+=2;goto B5e847f;
case 0x5e8482:c.instructions+=1;goto B5e8482;
case 0x5e8487:goto L5e8487;
case 0x5e848e:c.instructions+=8;goto B5e848e;
case 0x5e8491:c.instructions+=7;goto B5e8491;
case 0x5e8494:c.instructions+=6;goto B5e8494;
case 0x5e8495:c.instructions+=5;goto B5e8495;
case 0x5e8498:c.instructions+=4;goto B5e8498;
case 0x5e8499:c.instructions+=3;goto B5e8499;
case 0x5e849b:c.instructions+=2;goto B5e849b;
case 0x5e84a2:c.instructions+=1;goto B5e84a2;
case 0x5e84a7:goto L5e84a7;
case 0x5e84a9:goto L5e84a9;
case 0x5e84ac:c.instructions+=1;goto B5e84ac;
case 0x5e84ae:goto L5e84ae;
case 0x5e84af:c.instructions+=2;goto B5e84af;
case 0x5e84b1:c.instructions+=1;goto B5e84b1;
case 0x5e84b6:goto L5e84b6;
case 0x5e84ba:c.instructions+=6;goto B5e84ba;
case 0x5e84c0:c.instructions+=5;goto B5e84c0;
case 0x5e84c1:c.instructions+=4;goto B5e84c1;
case 0x5e84c4:c.instructions+=3;goto B5e84c4;
case 0x5e84c6:c.instructions+=2;goto B5e84c6;
case 0x5e84ca:c.instructions+=1;goto B5e84ca;
case 0x5e84d0:goto L5e84d0;
case 0x5e84d2:c.instructions+=1;goto B5e84d2;
case 0x5e84d7:goto L5e84d7;
case 0x5e84d8:c.instructions+=5;goto B5e84d8;
case 0x5e84d9:c.instructions+=4;goto B5e84d9;
case 0x5e84da:c.instructions+=3;goto B5e84da;
case 0x5e84db:c.instructions+=2;goto B5e84db;
case 0x5e84dc:c.instructions+=1;goto B5e84dc;
case 0x5e84df:goto L5e84df;
case 0x5e84e5:c.instructions+=2;goto B5e84e5;
case 0x5e84e9:c.instructions+=1;goto B5e84e9;
case 0x5e84eb:goto L5e84eb;
case 0x5e84f1:goto L5e84f1;
case 0x5e84f3:c.instructions+=7;goto B5e84f3;
case 0x5e84f7:c.instructions+=6;goto B5e84f7;
case 0x5e84f8:c.instructions+=5;goto B5e84f8;
case 0x5e84fd:c.instructions+=4;goto B5e84fd;
case 0x5e84ff:c.instructions+=3;goto B5e84ff;
case 0x5e8501:c.instructions+=2;goto B5e8501;
case 0x5e8503:c.instructions+=1;goto B5e8503;
case 0x5e8505:goto L5e8505;
case 0x5e8507:c.instructions+=1;goto B5e8507;
case 0x5e8509:goto L5e8509;
case 0x5e850e:c.instructions+=2;goto B5e850e;
case 0x5e8510:c.instructions+=1;goto B5e8510;
case 0x5e8512:goto L5e8512;
case 0x5e8514:c.instructions+=2;goto B5e8514;
case 0x5e8516:c.instructions+=1;goto B5e8516;
case 0x5e8518:goto L5e8518;
case 0x5e851b:c.instructions+=10;goto B5e851b;
case 0x5e851d:c.instructions+=9;goto B5e851d;
case 0x5e8520:c.instructions+=8;goto B5e8520;
case 0x5e8522:c.instructions+=7;goto B5e8522;
case 0x5e8525:c.instructions+=6;goto B5e8525;
case 0x5e8527:c.instructions+=5;goto B5e8527;
case 0x5e852b:c.instructions+=4;goto B5e852b;
case 0x5e852f:c.instructions+=3;goto B5e852f;
case 0x5e8530:c.instructions+=2;goto B5e8530;
case 0x5e8532:c.instructions+=1;goto B5e8532;
case 0x5e8537:goto L5e8537;
case 0x5e853b:c.instructions+=6;goto B5e853b;
case 0x5e8541:c.instructions+=5;goto B5e8541;
case 0x5e8542:c.instructions+=4;goto B5e8542;
case 0x5e8545:c.instructions+=3;goto B5e8545;
case 0x5e8547:c.instructions+=2;goto B5e8547;
case 0x5e854b:c.instructions+=1;goto B5e854b;
case 0x5e854d:goto L5e854d;
case 0x5e854f:c.instructions+=1;goto B5e854f;
case 0x5e8554:goto L5e8554;
case 0x5e8555:c.instructions+=5;goto B5e8555;
case 0x5e8556:c.instructions+=4;goto B5e8556;
case 0x5e8557:c.instructions+=3;goto B5e8557;
case 0x5e8558:c.instructions+=2;goto B5e8558;
case 0x5e8559:c.instructions+=1;goto B5e8559;
case 0x5e8560:goto L5e8560;
case 0x5e8561:c.instructions+=4;goto B5e8561;
case 0x5e8562:c.instructions+=3;goto B5e8562;
case 0x5e8564:c.instructions+=2;goto B5e8564;
case 0x5e8566:c.instructions+=1;goto B5e8566;
case 0x5e856b:goto L5e856b;
case 0x5e856f:c.instructions+=3;goto B5e856f;
case 0x5e8572:c.instructions+=2;goto B5e8572;
case 0x5e8574:c.instructions+=1;goto B5e8574;
case 0x5e8576:goto L5e8576;
case 0x5e8577:c.instructions+=3;goto B5e8577;
case 0x5e8579:c.instructions+=2;goto B5e8579;
case 0x5e857a:c.instructions+=1;goto B5e857a;
case 0x5e857d:goto L5e857d;
case 0x5e857e:c.instructions+=2;goto B5e857e;
case 0x5e8580:c.instructions+=1;goto B5e8580;
case 0x5e8585:goto L5e8585;
case 0x5e8587:c.instructions+=1;goto B5e8587;
case 0x5e858c:goto L5e858c;
case 0x5e8590:c.instructions+=3;goto B5e8590;
case 0x5e8593:c.instructions+=2;goto B5e8593;
case 0x5e8595:c.instructions+=1;goto B5e8595;
case 0x5e8597:goto L5e8597;
case 0x5e8598:goto L5e8598;
case 0x5e859b:c.instructions+=3;goto B5e859b;
case 0x5e859d:c.instructions+=2;goto B5e859d;
case 0x5e859f:c.instructions+=1;goto B5e859f;
case 0x5e85a1:goto L5e85a1;
case 0x5e85a3:goto L5e85a3;
case 0x5e85a7:c.instructions+=1;goto B5e85a7;
case 0x5e85a9:goto L5e85a9;
case 0x5e85ac:c.instructions+=2;goto B5e85ac;
case 0x5e85ae:c.instructions+=1;goto B5e85ae;
case 0x5e85b0:goto L5e85b0;
case 0x5e85b2:c.instructions+=1;goto B5e85b2;
case 0x5e85b4:goto L5e85b4;
case 0x5e85b7:c.instructions+=2;goto B5e85b7;
case 0x5e85ba:c.instructions+=1;goto B5e85ba;
case 0x5e85bc:goto L5e85bc;
case 0x5e85be:goto L5e85be;
case 0x5e85c1:c.instructions+=2;goto B5e85c1;
case 0x5e85c2:c.instructions+=1;goto B5e85c2;
case 0x5e85c4:goto L5e85c4;
case 0x5e85c6:c.instructions+=1;goto B5e85c6;
case 0x5e85c8:goto L5e85c8;
case 0x5e85c9:c.instructions+=2;goto B5e85c9;
case 0x5e85cb:c.instructions+=1;goto B5e85cb;
case 0x5e85d0:goto L5e85d0;
case 0x5e85d3:c.instructions+=2;goto B5e85d3;
case 0x5e85d5:c.instructions+=1;goto B5e85d5;
case 0x5e85d7:goto L5e85d7;
case 0x5e85d9:c.instructions+=1;goto B5e85d9;
case 0x5e85db:goto L5e85db;
case 0x5e85dc:c.instructions+=2;goto B5e85dc;
case 0x5e85de:c.instructions+=1;goto B5e85de;
case 0x5e85e3:goto L5e85e3;
case 0x5e85e5:c.instructions+=1;goto B5e85e5;
case 0x5e85e7:goto L5e85e7;
case 0x5e85e8:c.instructions+=2;goto B5e85e8;
case 0x5e85ea:c.instructions+=1;goto B5e85ea;
case 0x5e85ef:goto L5e85ef;
case 0x5e85f1:c.instructions+=1;goto B5e85f1;
case 0x5e85f6:goto L5e85f6;
case 0x5e85f9:c.instructions+=2;goto B5e85f9;
case 0x5e85fb:c.instructions+=1;goto B5e85fb;
case 0x5e85fd:goto L5e85fd;
case 0x5e85fe:goto L5e85fe;
case 0x5e8600:c.instructions+=1;goto B5e8600;
case 0x5e8605:goto L5e8605;
case 0x5e8608:c.instructions+=2;goto B5e8608;
case 0x5e860a:c.instructions+=1;goto B5e860a;
case 0x5e860c:goto L5e860c;
case 0x5e8610:goto L5e8610;
case 0x5e8612:c.instructions+=1;goto B5e8612;
case 0x5e8617:goto L5e8617;
case 0x5e8619:c.instructions+=1;goto B5e8619;
case 0x5e861b:goto L5e861b;
case 0x5e861d:c.instructions+=1;goto B5e861d;
case 0x5e861f:goto L5e861f;
case 0x5e8620:c.instructions+=2;goto B5e8620;
case 0x5e8622:c.instructions+=1;goto B5e8622;
case 0x5e8627:goto L5e8627;
case 0x5e8629:c.instructions+=1;goto B5e8629;
case 0x5e862b:goto L5e862b;
case 0x5e862c:c.instructions+=2;goto B5e862c;
case 0x5e862e:c.instructions+=1;goto B5e862e;
case 0x5e8633:goto L5e8633;
case 0x5e8635:c.instructions+=1;goto B5e8635;
case 0x5e863a:goto L5e863a;
case 0x5e863d:c.instructions+=2;goto B5e863d;
case 0x5e863f:c.instructions+=1;goto B5e863f;
case 0x5e8641:goto L5e8641;
case 0x5e8642:c.instructions+=4;goto B5e8642;
case 0x5e8643:c.instructions+=3;goto B5e8643;
case 0x5e8645:c.instructions+=2;goto B5e8645;
case 0x5e8646:c.instructions+=1;goto B5e8646;
case 0x5e8649:goto L5e8649;
case 0x5e864a:c.instructions+=4;goto B5e864a;
case 0x5e864b:c.instructions+=3;goto B5e864b;
case 0x5e864d:c.instructions+=2;goto B5e864d;
case 0x5e864e:c.instructions+=1;goto B5e864e;
case 0x5e8660:goto L5e8660;
case 0x5e8664:c.instructions+=3;goto B5e8664;
case 0x5e8665:c.instructions+=2;goto B5e8665;
case 0x5e866a:c.instructions+=1;goto B5e866a;
case 0x5e866f:goto L5e866f;
case 0x5e8670:goto L5e8670;
case 0x5e8671:c.instructions+=4;goto B5e8671;
case 0x5e8673:c.instructions+=3;goto B5e8673;
case 0x5e8679:c.instructions+=2;goto B5e8679;
case 0x5e867b:c.instructions+=1;goto B5e867b;
case 0x5e867d:goto L5e867d;
case 0x5e867f:c.instructions+=2;goto B5e867f;
case 0x5e8680:c.instructions+=1;goto B5e8680;
case 0x5e8683:goto L5e8683;
case 0x5e8689:c.instructions+=4;goto B5e8689;
case 0x5e868b:c.instructions+=3;goto B5e868b;
case 0x5e868c:c.instructions+=2;goto B5e868c;
case 0x5e8690:c.instructions+=1;goto B5e8690;
case 0x5e8692:goto L5e8692;
case 0x5e8694:c.instructions+=3;goto B5e8694;
case 0x5e8695:c.instructions+=2;goto B5e8695;
case 0x5e8697:c.instructions+=1;goto B5e8697;
case 0x5e869c:goto L5e869c;
case 0x5e869e:c.instructions+=1;goto B5e869e;
case 0x5e86a3:goto L5e86a3;
case 0x5e86a6:c.instructions+=2;goto B5e86a6;
case 0x5e86a8:c.instructions+=1;goto B5e86a8;
case 0x5e86aa:goto L5e86aa;
case 0x5e86ab:c.instructions+=3;goto B5e86ab;
case 0x5e86ad:c.instructions+=2;goto B5e86ad;
case 0x5e86ae:c.instructions+=1;goto B5e86ae;
case 0x5e86b1:goto L5e86b1;
case 0x5e86b5:c.instructions+=6;goto B5e86b5;
case 0x5e86ba:c.instructions+=5;goto B5e86ba;
case 0x5e86bd:c.instructions+=4;goto B5e86bd;
case 0x5e86c2:c.instructions+=3;goto B5e86c2;
case 0x5e86c3:c.instructions+=2;goto B5e86c3;
case 0x5e86c4:c.instructions+=1;goto B5e86c4;
case 0x5e86c9:goto L5e86c9;
case 0x5e86cf:c.instructions+=6;goto B5e86cf;
case 0x5e86d2:c.instructions+=5;goto B5e86d2;
case 0x5e86d3:c.instructions+=4;goto B5e86d3;
case 0x5e86d4:c.instructions+=3;goto B5e86d4;
case 0x5e86da:c.instructions+=2;goto B5e86da;
case 0x5e86db:c.instructions+=1;goto B5e86db;
case 0x5e86e0:goto L5e86e0;
case 0x5e86e1:c.instructions+=3;goto B5e86e1;
case 0x5e86e2:c.instructions+=2;goto B5e86e2;
case 0x5e86e4:c.instructions+=1;goto B5e86e4;
case 0x5e86e9:goto L5e86e9;
case 0x5e86eb:c.instructions+=3;goto B5e86eb;
case 0x5e86f1:c.instructions+=2;goto B5e86f1;
case 0x5e86f3:c.instructions+=1;goto B5e86f3;
case 0x5e86f5:goto L5e86f5;
case 0x5e86fb:c.instructions+=2;goto B5e86fb;
case 0x5e86fd:c.instructions+=1;goto B5e86fd;
case 0x5e86ff:goto L5e86ff;
case 0x5e8703:c.instructions+=3;goto B5e8703;
case 0x5e8704:c.instructions+=2;goto B5e8704;
case 0x5e8706:c.instructions+=1;goto B5e8706;
case 0x5e870b:goto L5e870b;
case 0x5e870d:c.instructions+=1;goto B5e870d;
case 0x5e870f:goto L5e870f;
case 0x5e8713:c.instructions+=3;goto B5e8713;
case 0x5e8714:c.instructions+=2;goto B5e8714;
case 0x5e8716:c.instructions+=1;goto B5e8716;
case 0x5e871b:goto L5e871b;
case 0x5e871d:c.instructions+=1;goto B5e871d;
case 0x5e8722:goto L5e8722;
case 0x5e8727:goto L5e8727;
case 0x5e8729:c.instructions+=3;goto B5e8729;
case 0x5e872a:c.instructions+=2;goto B5e872a;
case 0x5e872b:c.instructions+=1;goto B5e872b;
case 0x5e8730:goto L5e8730;
case 0x5e8731:c.instructions+=9;goto B5e8731;
case 0x5e8734:c.instructions+=8;goto B5e8734;
case 0x5e8735:c.instructions+=7;goto B5e8735;
case 0x5e8737:c.instructions+=6;goto B5e8737;
case 0x5e873e:c.instructions+=5;goto B5e873e;
case 0x5e8744:c.instructions+=4;goto B5e8744;
case 0x5e874a:c.instructions+=3;goto B5e874a;
case 0x5e8750:c.instructions+=2;goto B5e8750;
case 0x5e8752:c.instructions+=1;goto B5e8752;
case 0x5e8754:goto L5e8754;
case 0x5e875a:c.instructions+=2;goto B5e875a;
case 0x5e875c:c.instructions+=1;goto B5e875c;
case 0x5e875e:goto L5e875e;
case 0x5e8762:c.instructions+=2;goto B5e8762;
case 0x5e8763:c.instructions+=1;goto B5e8763;
case 0x5e8768:goto L5e8768;
case 0x5e876a:c.instructions+=1;goto B5e876a;
case 0x5e876c:goto L5e876c;
case 0x5e8770:c.instructions+=3;goto B5e8770;
case 0x5e8771:c.instructions+=2;goto B5e8771;
case 0x5e8773:c.instructions+=1;goto B5e8773;
case 0x5e8778:goto L5e8778;
case 0x5e8779:c.instructions+=2;goto B5e8779;
case 0x5e877a:c.instructions+=1;goto B5e877a;
case 0x5e8780:goto L5e8780;
case 0x5e8783:c.instructions+=10;goto B5e8783;
case 0x5e8784:c.instructions+=9;goto B5e8784;
case 0x5e8785:c.instructions+=8;goto B5e8785;
case 0x5e8786:c.instructions+=7;goto B5e8786;
case 0x5e8788:c.instructions+=6;goto B5e8788;
case 0x5e8789:c.instructions+=5;goto B5e8789;
case 0x5e878d:c.instructions+=4;goto B5e878d;
case 0x5e8791:c.instructions+=3;goto B5e8791;
case 0x5e8796:c.instructions+=2;goto B5e8796;
case 0x5e8799:c.instructions+=1;goto B5e8799;
case 0x5e87a0:goto L5e87a0;
case 0x5e87a3:c.instructions+=2;goto B5e87a3;
case 0x5e87a5:c.instructions+=1;goto B5e87a5;
case 0x5e87a7:goto L5e87a7;
case 0x5e87aa:c.instructions+=2;goto B5e87aa;
case 0x5e87ac:c.instructions+=1;goto B5e87ac;
case 0x5e87ae:goto L5e87ae;
case 0x5e87b1:c.instructions+=4;goto B5e87b1;
case 0x5e87b3:c.instructions+=3;goto B5e87b3;
case 0x5e87b6:c.instructions+=2;goto B5e87b6;
case 0x5e87b9:c.instructions+=1;goto B5e87b9;
case 0x5e87bb:goto L5e87bb;
case 0x5e87be:c.instructions+=2;goto B5e87be;
case 0x5e87c1:c.instructions+=1;goto B5e87c1;
case 0x5e87c3:goto L5e87c3;
case 0x5e87c7:c.instructions+=1;goto B5e87c7;
case 0x5e87c9:goto L5e87c9;
case 0x5e87cc:c.instructions+=2;goto B5e87cc;
case 0x5e87ce:c.instructions+=1;goto B5e87ce;
case 0x5e87d0:goto L5e87d0;
case 0x5e87d2:c.instructions+=2;goto B5e87d2;
case 0x5e87d4:c.instructions+=1;goto B5e87d4;
case 0x5e87d6:goto L5e87d6;
case 0x5e87d9:c.instructions+=4;goto B5e87d9;
case 0x5e87db:c.instructions+=3;goto B5e87db;
case 0x5e87de:c.instructions+=2;goto B5e87de;
case 0x5e87e1:c.instructions+=1;goto B5e87e1;
case 0x5e87e3:goto L5e87e3;
case 0x5e87e6:c.instructions+=2;goto B5e87e6;
case 0x5e87e9:c.instructions+=1;goto B5e87e9;
case 0x5e87eb:goto L5e87eb;
case 0x5e87ef:c.instructions+=1;goto B5e87ef;
case 0x5e87f1:goto L5e87f1;
case 0x5e87f3:c.instructions+=1;goto B5e87f3;
case 0x5e87f5:goto L5e87f5;
case 0x5e87f8:c.instructions+=2;goto B5e87f8;
case 0x5e87fa:c.instructions+=1;goto B5e87fa;
case 0x5e87fc:goto L5e87fc;
case 0x5e87ff:c.instructions+=4;goto B5e87ff;
case 0x5e8801:c.instructions+=3;goto B5e8801;
case 0x5e8804:c.instructions+=2;goto B5e8804;
case 0x5e8807:c.instructions+=1;goto B5e8807;
case 0x5e8809:goto L5e8809;
case 0x5e880c:c.instructions+=2;goto B5e880c;
case 0x5e880f:c.instructions+=1;goto B5e880f;
case 0x5e8811:goto L5e8811;
case 0x5e8815:c.instructions+=1;goto B5e8815;
case 0x5e8817:goto L5e8817;
case 0x5e881a:c.instructions+=2;goto B5e881a;
case 0x5e881c:c.instructions+=1;goto B5e881c;
case 0x5e881e:goto L5e881e;
case 0x5e8821:c.instructions+=2;goto B5e8821;
case 0x5e8823:c.instructions+=1;goto B5e8823;
case 0x5e8825:goto L5e8825;
case 0x5e8828:c.instructions+=4;goto B5e8828;
case 0x5e882a:c.instructions+=3;goto B5e882a;
case 0x5e882d:c.instructions+=2;goto B5e882d;
case 0x5e8830:c.instructions+=1;goto B5e8830;
case 0x5e8832:goto L5e8832;
case 0x5e8835:c.instructions+=2;goto B5e8835;
case 0x5e8838:c.instructions+=1;goto B5e8838;
case 0x5e883a:goto L5e883a;
case 0x5e883e:c.instructions+=1;goto B5e883e;
case 0x5e8840:goto L5e8840;
case 0x5e8843:c.instructions+=2;goto B5e8843;
case 0x5e8845:c.instructions+=1;goto B5e8845;
case 0x5e8847:goto L5e8847;
case 0x5e884a:c.instructions+=2;goto B5e884a;
case 0x5e884c:c.instructions+=1;goto B5e884c;
case 0x5e884e:goto L5e884e;
case 0x5e8851:c.instructions+=4;goto B5e8851;
case 0x5e8853:c.instructions+=3;goto B5e8853;
case 0x5e8856:c.instructions+=2;goto B5e8856;
case 0x5e8859:c.instructions+=1;goto B5e8859;
case 0x5e885b:goto L5e885b;
case 0x5e885e:c.instructions+=2;goto B5e885e;
case 0x5e8861:c.instructions+=1;goto B5e8861;
case 0x5e8863:goto L5e8863;
case 0x5e8867:c.instructions+=1;goto B5e8867;
case 0x5e8869:goto L5e8869;
case 0x5e886c:c.instructions+=2;goto B5e886c;
case 0x5e886e:c.instructions+=1;goto B5e886e;
case 0x5e8870:goto L5e8870;
case 0x5e8873:c.instructions+=2;goto B5e8873;
case 0x5e8875:c.instructions+=1;goto B5e8875;
case 0x5e8877:goto L5e8877;
case 0x5e887a:c.instructions+=4;goto B5e887a;
case 0x5e887c:c.instructions+=3;goto B5e887c;
case 0x5e887f:c.instructions+=2;goto B5e887f;
case 0x5e8882:c.instructions+=1;goto B5e8882;
case 0x5e8884:goto L5e8884;
case 0x5e8887:c.instructions+=2;goto B5e8887;
case 0x5e888a:c.instructions+=1;goto B5e888a;
case 0x5e888c:goto L5e888c;
case 0x5e8890:c.instructions+=1;goto B5e8890;
case 0x5e8892:goto L5e8892;
case 0x5e8895:c.instructions+=2;goto B5e8895;
case 0x5e8897:c.instructions+=1;goto B5e8897;
case 0x5e8899:goto L5e8899;
case 0x5e889c:c.instructions+=2;goto B5e889c;
case 0x5e889e:c.instructions+=1;goto B5e889e;
case 0x5e88a0:goto L5e88a0;
case 0x5e88a3:c.instructions+=4;goto B5e88a3;
case 0x5e88a5:c.instructions+=3;goto B5e88a5;
case 0x5e88a8:c.instructions+=2;goto B5e88a8;
case 0x5e88ab:c.instructions+=1;goto B5e88ab;
case 0x5e88ad:goto L5e88ad;
case 0x5e88b0:c.instructions+=2;goto B5e88b0;
case 0x5e88b3:c.instructions+=1;goto B5e88b3;
case 0x5e88b5:goto L5e88b5;
case 0x5e88b9:c.instructions+=1;goto B5e88b9;
case 0x5e88bb:goto L5e88bb;
case 0x5e88be:c.instructions+=2;goto B5e88be;
case 0x5e88c0:c.instructions+=1;goto B5e88c0;
case 0x5e88c2:goto L5e88c2;
case 0x5e88c5:c.instructions+=2;goto B5e88c5;
case 0x5e88c7:c.instructions+=1;goto B5e88c7;
case 0x5e88c9:goto L5e88c9;
case 0x5e88cc:c.instructions+=4;goto B5e88cc;
case 0x5e88ce:c.instructions+=3;goto B5e88ce;
case 0x5e88d1:c.instructions+=2;goto B5e88d1;
case 0x5e88d4:c.instructions+=1;goto B5e88d4;
case 0x5e88d6:goto L5e88d6;
case 0x5e88d9:c.instructions+=2;goto B5e88d9;
case 0x5e88dc:c.instructions+=1;goto B5e88dc;
case 0x5e88de:goto L5e88de;
case 0x5e88e2:c.instructions+=1;goto B5e88e2;
case 0x5e88e4:goto L5e88e4;
case 0x5e88e7:c.instructions+=2;goto B5e88e7;
case 0x5e88e9:c.instructions+=1;goto B5e88e9;
case 0x5e88eb:goto L5e88eb;
case 0x5e88ee:c.instructions+=2;goto B5e88ee;
case 0x5e88f0:c.instructions+=1;goto B5e88f0;
case 0x5e88f2:goto L5e88f2;
case 0x5e88f5:c.instructions+=4;goto B5e88f5;
case 0x5e88f7:c.instructions+=3;goto B5e88f7;
case 0x5e88fa:c.instructions+=2;goto B5e88fa;
case 0x5e88fd:c.instructions+=1;goto B5e88fd;
case 0x5e88ff:goto L5e88ff;
case 0x5e8902:c.instructions+=2;goto B5e8902;
case 0x5e8905:c.instructions+=1;goto B5e8905;
case 0x5e8907:goto L5e8907;
case 0x5e890b:c.instructions+=1;goto B5e890b;
case 0x5e890d:goto L5e890d;
case 0x5e8910:c.instructions+=2;goto B5e8910;
case 0x5e8912:c.instructions+=1;goto B5e8912;
case 0x5e8914:goto L5e8914;
case 0x5e8917:c.instructions+=2;goto B5e8917;
case 0x5e8919:c.instructions+=1;goto B5e8919;
case 0x5e891b:goto L5e891b;
case 0x5e891e:c.instructions+=4;goto B5e891e;
case 0x5e8920:c.instructions+=3;goto B5e8920;
case 0x5e8923:c.instructions+=2;goto B5e8923;
case 0x5e8926:c.instructions+=1;goto B5e8926;
case 0x5e8928:goto L5e8928;
case 0x5e892b:c.instructions+=2;goto B5e892b;
case 0x5e892e:c.instructions+=1;goto B5e892e;
case 0x5e8930:goto L5e8930;
case 0x5e8934:c.instructions+=1;goto B5e8934;
case 0x5e8936:goto L5e8936;
case 0x5e8939:c.instructions+=4;goto B5e8939;
case 0x5e893c:c.instructions+=3;goto B5e893c;
case 0x5e893f:c.instructions+=2;goto B5e893f;
case 0x5e8945:c.instructions+=1;goto B5e8945;
case 0x5e894b:goto L5e894b;
case 0x5e894f:c.instructions+=8;goto B5e894f;
case 0x5e8955:c.instructions+=7;goto B5e8955;
case 0x5e8957:c.instructions+=6;goto B5e8957;
case 0x5e895d:c.instructions+=5;goto B5e895d;
case 0x5e895e:c.instructions+=4;goto B5e895e;
case 0x5e8963:c.instructions+=3;goto B5e8963;
case 0x5e8965:c.instructions+=2;goto B5e8965;
case 0x5e8967:c.instructions+=1;goto B5e8967;
case 0x5e896c:goto L5e896c;
case 0x5e8972:c.instructions+=1;goto B5e8972;
case 0x5e8974:goto L5e8974;
case 0x5e8978:c.instructions+=2;goto B5e8978;
case 0x5e897a:c.instructions+=1;goto B5e897a;
case 0x5e897f:goto L5e897f;
case 0x5e8985:c.instructions+=1;goto B5e8985;
case 0x5e8987:goto L5e8987;
case 0x5e8988:c.instructions+=3;goto B5e8988;
case 0x5e898d:c.instructions+=2;goto B5e898d;
case 0x5e8992:c.instructions+=1;goto B5e8992;
case 0x5e8997:goto L5e8997;
case 0x5e8999:c.instructions+=1;goto B5e8999;
case 0x5e899e:goto L5e899e;
case 0x5e89a1:c.instructions+=2;goto B5e89a1;
case 0x5e89a6:c.instructions+=1;goto B5e89a6;
case 0x5e89a8:goto L5e89a8;
case 0x5e89ac:c.instructions+=1;goto B5e89ac;
case 0x5e89ae:goto L5e89ae;
case 0x5e89b3:c.instructions+=2;goto B5e89b3;
case 0x5e89b8:c.instructions+=1;goto B5e89b8;
case 0x5e89bd:goto L5e89bd;
case 0x5e89c3:c.instructions+=4;goto B5e89c3;
case 0x5e89c6:c.instructions+=3;goto B5e89c6;
case 0x5e89c7:c.instructions+=2;goto B5e89c7;
case 0x5e89cd:c.instructions+=1;goto B5e89cd;
case 0x5e89d1:goto L5e89d1;
case 0x5e89d7:c.instructions+=1;goto B5e89d7;
case 0x5e89d9:goto L5e89d9;
case 0x5e89db:c.instructions+=1;goto B5e89db;
case 0x5e89dd:goto L5e89dd;
case 0x5e89e3:c.instructions+=1;goto B5e89e3;
case 0x5e89e5:goto L5e89e5;
case 0x5e89e6:c.instructions+=3;goto B5e89e6;
case 0x5e89e7:c.instructions+=2;goto B5e89e7;
case 0x5e89ec:c.instructions+=1;goto B5e89ec;
case 0x5e89f1:goto L5e89f1;
case 0x5e89f3:c.instructions+=1;goto B5e89f3;
case 0x5e89f8:goto L5e89f8;
case 0x5e89fb:c.instructions+=2;goto B5e89fb;
case 0x5e89fd:c.instructions+=1;goto B5e89fd;
case 0x5e89ff:goto L5e89ff;
case 0x5e8a01:c.instructions+=1;goto B5e8a01;
case 0x5e8a03:goto L5e8a03;
case 0x5e8a08:c.instructions+=2;goto B5e8a08;
case 0x5e8a09:c.instructions+=1;goto B5e8a09;
case 0x5e8a0e:goto L5e8a0e;
case 0x5e8a14:c.instructions+=4;goto B5e8a14;
case 0x5e8a17:c.instructions+=3;goto B5e8a17;
case 0x5e8a18:c.instructions+=2;goto B5e8a18;
case 0x5e8a1e:c.instructions+=1;goto B5e8a1e;
case 0x5e8a20:goto L5e8a20;
case 0x5e8a24:c.instructions+=5;goto B5e8a24;
case 0x5e8a26:c.instructions+=4;goto B5e8a26;
case 0x5e8a29:c.instructions+=3;goto B5e8a29;
case 0x5e8a2d:c.instructions+=2;goto B5e8a2d;
case 0x5e8a31:c.instructions+=1;goto B5e8a31;
case 0x5e8a35:goto L5e8a35;
case 0x5e8a37:c.instructions+=1;goto B5e8a37;
case 0x5e8a3d:goto L5e8a3d;
case 0x5e8a41:c.instructions+=4;goto B5e8a41;
case 0x5e8a43:c.instructions+=3;goto B5e8a43;
case 0x5e8a45:c.instructions+=2;goto B5e8a45;
case 0x5e8a49:c.instructions+=1;goto B5e8a49;
case 0x5e8a4f:goto L5e8a4f;
case 0x5e8a52:c.instructions+=4;goto B5e8a52;
case 0x5e8a54:c.instructions+=3;goto B5e8a54;
case 0x5e8a57:c.instructions+=2;goto B5e8a57;
case 0x5e8a5a:c.instructions+=1;goto B5e8a5a;
case 0x5e8a5c:goto L5e8a5c;
case 0x5e8a5f:c.instructions+=2;goto B5e8a5f;
case 0x5e8a61:c.instructions+=1;goto B5e8a61;
case 0x5e8a63:goto L5e8a63;
case 0x5e8a67:c.instructions+=4;goto B5e8a67;
case 0x5e8a6b:c.instructions+=3;goto B5e8a6b;
case 0x5e8a6d:c.instructions+=2;goto B5e8a6d;
case 0x5e8a6f:c.instructions+=1;goto B5e8a6f;
case 0x5e8a71:goto L5e8a71;
case 0x5e8a74:c.instructions+=2;goto B5e8a74;
case 0x5e8a76:c.instructions+=1;goto B5e8a76;
case 0x5e8a78:goto L5e8a78;
case 0x5e8a7a:c.instructions+=1;goto B5e8a7a;
case 0x5e8a7c:goto L5e8a7c;
case 0x5e8a80:c.instructions+=2;goto B5e8a80;
case 0x5e8a86:c.instructions+=1;goto B5e8a86;
case 0x5e8a88:goto L5e8a88;
case 0x5e8a8a:c.instructions+=1;goto B5e8a8a;
case 0x5e8a8c:goto L5e8a8c;
case 0x5e8a8e:c.instructions+=1;goto B5e8a8e;
case 0x5e8a90:goto L5e8a90;
case 0x5e8a93:c.instructions+=2;goto B5e8a93;
case 0x5e8a99:c.instructions+=1;goto B5e8a99;
case 0x5e8aa0:goto L5e8aa0;
case 0x5e8aa2:c.instructions+=10;goto B5e8aa2;
case 0x5e8aa5:c.instructions+=9;goto B5e8aa5;
case 0x5e8aa6:c.instructions+=8;goto B5e8aa6;
case 0x5e8aa7:c.instructions+=7;goto B5e8aa7;
case 0x5e8aab:c.instructions+=6;goto B5e8aab;
case 0x5e8ab2:c.instructions+=5;goto B5e8ab2;
case 0x5e8ab3:c.instructions+=4;goto B5e8ab3;
case 0x5e8ab6:c.instructions+=3;goto B5e8ab6;
case 0x5e8abc:c.instructions+=2;goto B5e8abc;
case 0x5e8abe:c.instructions+=1;goto B5e8abe;
case 0x5e8ac3:goto L5e8ac3;
case 0x5e8ac4:c.instructions+=2;goto B5e8ac4;
case 0x5e8ac6:c.instructions+=1;goto B5e8ac6;
case 0x5e8ac8:goto L5e8ac8;
case 0x5e8acc:c.instructions+=5;goto B5e8acc;
case 0x5e8ad0:c.instructions+=4;goto B5e8ad0;
case 0x5e8ad3:c.instructions+=3;goto B5e8ad3;
case 0x5e8ad5:c.instructions+=2;goto B5e8ad5;
case 0x5e8ad7:c.instructions+=1;goto B5e8ad7;
case 0x5e8ad9:goto L5e8ad9;
case 0x5e8add:c.instructions+=6;goto B5e8add;
case 0x5e8ade:c.instructions+=5;goto B5e8ade;
case 0x5e8ae1:c.instructions+=4;goto B5e8ae1;
case 0x5e8ae7:c.instructions+=3;goto B5e8ae7;
case 0x5e8aeb:c.instructions+=2;goto B5e8aeb;
case 0x5e8aef:c.instructions+=1;goto B5e8aef;
case 0x5e8af5:goto L5e8af5;
case 0x5e8afb:c.instructions+=2;goto B5e8afb;
case 0x5e8aff:c.instructions+=1;goto B5e8aff;
case 0x5e8b05:goto L5e8b05;
case 0x5e8b09:c.instructions+=1;goto B5e8b09;
case 0x5e8b10:goto L5e8b10;
case 0x5e8b14:c.instructions+=8;goto B5e8b14;
case 0x5e8b1a:c.instructions+=7;goto B5e8b1a;
case 0x5e8b1e:c.instructions+=6;goto B5e8b1e;
case 0x5e8b20:c.instructions+=5;goto B5e8b20;
case 0x5e8b22:c.instructions+=4;goto B5e8b22;
case 0x5e8b25:c.instructions+=3;goto B5e8b25;
case 0x5e8b28:c.instructions+=2;goto B5e8b28;
case 0x5e8b2c:c.instructions+=1;goto B5e8b2c;
case 0x5e8b32:goto L5e8b32;
case 0x5e8b35:c.instructions+=1;goto B5e8b35;
case 0x5e8b3b:goto L5e8b3b;
case 0x5e8b3d:c.instructions+=3;goto B5e8b3d;
case 0x5e8b40:c.instructions+=2;goto B5e8b40;
case 0x5e8b43:c.instructions+=1;goto B5e8b43;
case 0x5e8b49:goto L5e8b49;
case 0x5e8b4d:c.instructions+=4;goto B5e8b4d;
case 0x5e8b50:c.instructions+=3;goto B5e8b50;
case 0x5e8b52:c.instructions+=2;goto B5e8b52;
case 0x5e8b56:c.instructions+=1;goto B5e8b56;
case 0x5e8b5c:goto L5e8b5c;
case 0x5e8b63:c.instructions+=2;goto B5e8b63;
case 0x5e8b65:c.instructions+=1;goto B5e8b65;
case 0x5e8b6b:goto L5e8b6b;
case 0x5e8b6e:c.instructions+=4;goto B5e8b6e;
case 0x5e8b70:c.instructions+=3;goto B5e8b70;
case 0x5e8b73:c.instructions+=2;goto B5e8b73;
case 0x5e8b76:c.instructions+=1;goto B5e8b76;
case 0x5e8b7c:goto L5e8b7c;
case 0x5e8b7e:c.instructions+=3;goto B5e8b7e;
case 0x5e8b81:c.instructions+=2;goto B5e8b81;
case 0x5e8b84:c.instructions+=1;goto B5e8b84;
case 0x5e8b8a:goto L5e8b8a;
case 0x5e8b8d:c.instructions+=1;goto B5e8b8d;
case 0x5e8b8f:goto L5e8b8f;
case 0x5e8b91:c.instructions+=1;goto B5e8b91;
case 0x5e8b93:goto L5e8b93;
case 0x5e8b97:goto L5e8b97;
case 0x5e8b9a:c.instructions+=2;goto B5e8b9a;
case 0x5e8b9c:c.instructions+=1;goto B5e8b9c;
case 0x5e8ba2:goto L5e8ba2;
case 0x5e8ba9:c.instructions+=2;goto B5e8ba9;
case 0x5e8bab:c.instructions+=1;goto B5e8bab;
case 0x5e8bb1:goto L5e8bb1;
case 0x5e8bb4:c.instructions+=4;goto B5e8bb4;
case 0x5e8bb6:c.instructions+=3;goto B5e8bb6;
case 0x5e8bb9:c.instructions+=2;goto B5e8bb9;
case 0x5e8bbc:c.instructions+=1;goto B5e8bbc;
case 0x5e8bc2:goto L5e8bc2;
case 0x5e8bc4:c.instructions+=3;goto B5e8bc4;
case 0x5e8bc7:c.instructions+=2;goto B5e8bc7;
case 0x5e8bca:c.instructions+=1;goto B5e8bca;
case 0x5e8bd0:goto L5e8bd0;
case 0x5e8bd3:c.instructions+=1;goto B5e8bd3;
case 0x5e8bd5:goto L5e8bd5;
case 0x5e8bd7:c.instructions+=1;goto B5e8bd7;
case 0x5e8bd9:goto L5e8bd9;
case 0x5e8bdd:goto L5e8bdd;
case 0x5e8be1:c.instructions+=4;goto B5e8be1;
case 0x5e8be4:c.instructions+=3;goto B5e8be4;
case 0x5e8be6:c.instructions+=2;goto B5e8be6;
case 0x5e8bea:c.instructions+=1;goto B5e8bea;
case 0x5e8bf0:goto L5e8bf0;
case 0x5e8bf2:c.instructions+=11;goto B5e8bf2;
case 0x5e8bf5:c.instructions+=10;goto B5e8bf5;
case 0x5e8bf8:c.instructions+=9;goto B5e8bf8;
case 0x5e8bfb:c.instructions+=8;goto B5e8bfb;
case 0x5e8bfd:c.instructions+=7;goto B5e8bfd;
case 0x5e8c00:c.instructions+=6;goto B5e8c00;
case 0x5e8c02:c.instructions+=5;goto B5e8c02;
case 0x5e8c04:c.instructions+=4;goto B5e8c04;
case 0x5e8c06:c.instructions+=3;goto B5e8c06;
case 0x5e8c09:c.instructions+=2;goto B5e8c09;
case 0x5e8c0b:c.instructions+=1;goto B5e8c0b;
case 0x5e8c0d:goto L5e8c0d;
case 0x5e8c14:c.instructions+=1;goto B5e8c14;
case 0x5e8c16:goto L5e8c16;
case 0x5e8c18:goto L5e8c18;
case 0x5e8c1c:c.instructions+=4;goto B5e8c1c;
case 0x5e8c1e:c.instructions+=3;goto B5e8c1e;
case 0x5e8c21:c.instructions+=2;goto B5e8c21;
case 0x5e8c28:c.instructions+=1;goto B5e8c28;
case 0x5e8c2d:goto L5e8c2d;
case 0x5e8c2f:c.instructions+=2;goto B5e8c2f;
case 0x5e8c32:c.instructions+=1;goto B5e8c32;
case 0x5e8c34:goto L5e8c34;
case 0x5e8c37:c.instructions+=1;goto B5e8c37;
case 0x5e8c39:goto L5e8c39;
case 0x5e8c3c:goto L5e8c3c;
case 0x5e8c3f:c.instructions+=2;goto B5e8c3f;
case 0x5e8c41:c.instructions+=1;goto B5e8c41;
case 0x5e8c47:goto L5e8c47;
case 0x5e8c49:c.instructions+=2;goto B5e8c49;
case 0x5e8c4c:c.instructions+=1;goto B5e8c4c;
case 0x5e8c4e:goto L5e8c4e;
case 0x5e8c51:c.instructions+=1;goto B5e8c51;
case 0x5e8c53:goto L5e8c53;
case 0x5e8c56:goto L5e8c56;
case 0x5e8c59:c.instructions+=2;goto B5e8c59;
case 0x5e8c5b:c.instructions+=1;goto B5e8c5b;
case 0x5e8c61:goto L5e8c61;
case 0x5e8c65:c.instructions+=8;goto B5e8c65;
case 0x5e8c69:c.instructions+=7;goto B5e8c69;
case 0x5e8c6c:c.instructions+=6;goto B5e8c6c;
case 0x5e8c6e:c.instructions+=5;goto B5e8c6e;
case 0x5e8c72:c.instructions+=4;goto B5e8c72;
case 0x5e8c78:c.instructions+=3;goto B5e8c78;
case 0x5e8c7a:c.instructions+=2;goto B5e8c7a;
case 0x5e8c7c:c.instructions+=1;goto B5e8c7c;
case 0x5e8c81:goto L5e8c81;
case 0x5e8c85:c.instructions+=13;goto B5e8c85;
case 0x5e8c87:c.instructions+=12;goto B5e8c87;
case 0x5e8c8b:c.instructions+=11;goto B5e8c8b;
case 0x5e8c8e:c.instructions+=10;goto B5e8c8e;
case 0x5e8c92:c.instructions+=9;goto B5e8c92;
case 0x5e8c94:c.instructions+=8;goto B5e8c94;
case 0x5e8c98:c.instructions+=7;goto B5e8c98;
case 0x5e8c9e:c.instructions+=6;goto B5e8c9e;
case 0x5e8ca0:c.instructions+=5;goto B5e8ca0;
case 0x5e8ca5:c.instructions+=4;goto B5e8ca5;
case 0x5e8caa:c.instructions+=3;goto B5e8caa;
case 0x5e8cae:c.instructions+=2;goto B5e8cae;
case 0x5e8cb2:c.instructions+=1;goto B5e8cb2;
case 0x5e8cb7:goto L5e8cb7;
case 0x5e8cb9:c.instructions+=1;goto B5e8cb9;
case 0x5e8cbb:goto L5e8cbb;
case 0x5e8cbe:c.instructions+=3;goto B5e8cbe;
case 0x5e8cc0:c.instructions+=2;goto B5e8cc0;
case 0x5e8cc2:c.instructions+=1;goto B5e8cc2;
case 0x5e8cc4:goto L5e8cc4;
case 0x5e8cc6:c.instructions+=1;goto B5e8cc6;
case 0x5e8cc8:goto L5e8cc8;
case 0x5e8cca:c.instructions+=3;goto B5e8cca;
case 0x5e8ccd:c.instructions+=2;goto B5e8ccd;
case 0x5e8ccf:c.instructions+=1;goto B5e8ccf;
case 0x5e8cd1:goto L5e8cd1;
case 0x5e8cd5:c.instructions+=5;goto B5e8cd5;
case 0x5e8cd8:c.instructions+=4;goto B5e8cd8;
case 0x5e8cdc:c.instructions+=3;goto B5e8cdc;
case 0x5e8cde:c.instructions+=2;goto B5e8cde;
case 0x5e8ce0:c.instructions+=1;goto B5e8ce0;
case 0x5e8ce2:goto L5e8ce2;
case 0x5e8ce6:c.instructions+=5;goto B5e8ce6;
case 0x5e8cea:c.instructions+=4;goto B5e8cea;
case 0x5e8cec:c.instructions+=3;goto B5e8cec;
case 0x5e8cf1:c.instructions+=2;goto B5e8cf1;
case 0x5e8cf5:c.instructions+=1;goto B5e8cf5;
case 0x5e8cf7:goto L5e8cf7;
case 0x5e8cfb:c.instructions+=1;goto B5e8cfb;
case 0x5e8d00:goto L5e8d00;
case 0x5e8d04:c.instructions+=8;goto B5e8d04;
case 0x5e8d05:c.instructions+=7;goto B5e8d05;
case 0x5e8d0c:c.instructions+=6;goto B5e8d0c;
case 0x5e8d12:c.instructions+=5;goto B5e8d12;
case 0x5e8d16:c.instructions+=4;goto B5e8d16;
case 0x5e8d1b:c.instructions+=3;goto B5e8d1b;
case 0x5e8d1e:c.instructions+=2;goto B5e8d1e;
case 0x5e8d22:c.instructions+=1;goto B5e8d22;
case 0x5e8d24:goto L5e8d24;
case 0x5e8d28:c.instructions+=6;goto B5e8d28;
case 0x5e8d2b:c.instructions+=5;goto B5e8d2b;
case 0x5e8d2e:c.instructions+=4;goto B5e8d2e;
case 0x5e8d31:c.instructions+=3;goto B5e8d31;
case 0x5e8d34:c.instructions+=2;goto B5e8d34;
case 0x5e8d36:c.instructions+=1;goto B5e8d36;
case 0x5e8d3c:goto L5e8d3c;
case 0x5e8d3f:c.instructions+=7;goto B5e8d3f;
case 0x5e8d42:c.instructions+=6;goto B5e8d42;
case 0x5e8d46:c.instructions+=5;goto B5e8d46;
case 0x5e8d48:c.instructions+=4;goto B5e8d48;
case 0x5e8d4c:c.instructions+=3;goto B5e8d4c;
case 0x5e8d50:c.instructions+=2;goto B5e8d50;
case 0x5e8d54:c.instructions+=1;goto B5e8d54;
case 0x5e8d56:goto L5e8d56;
case 0x5e8d58:c.instructions+=4;goto B5e8d58;
case 0x5e8d5e:c.instructions+=3;goto B5e8d5e;
case 0x5e8d62:c.instructions+=2;goto B5e8d62;
case 0x5e8d6a:c.instructions+=1;goto B5e8d6a;
case 0x5e8d6c:goto L5e8d6c;
case 0x5e8d70:goto L5e8d70;
case 0x5e8d74:c.instructions+=7;goto B5e8d74;
case 0x5e8d78:c.instructions+=6;goto B5e8d78;
case 0x5e8d7f:c.instructions+=5;goto B5e8d7f;
case 0x5e8d85:c.instructions+=4;goto B5e8d85;
case 0x5e8d8a:c.instructions+=3;goto B5e8d8a;
case 0x5e8d8d:c.instructions+=2;goto B5e8d8d;
case 0x5e8d91:c.instructions+=1;goto B5e8d91;
case 0x5e8d93:goto L5e8d93;
case 0x5e8d97:goto L5e8d97;
case 0x5e8d9b:c.instructions+=5;goto B5e8d9b;
case 0x5e8d9e:c.instructions+=4;goto B5e8d9e;
case 0x5e8da2:c.instructions+=3;goto B5e8da2;
case 0x5e8da4:c.instructions+=2;goto B5e8da4;
case 0x5e8da6:c.instructions+=1;goto B5e8da6;
case 0x5e8da8:goto L5e8da8;
case 0x5e8dac:c.instructions+=10;goto B5e8dac;
case 0x5e8daf:c.instructions+=9;goto B5e8daf;
case 0x5e8db1:c.instructions+=8;goto B5e8db1;
case 0x5e8db3:c.instructions+=7;goto B5e8db3;
case 0x5e8db6:c.instructions+=6;goto B5e8db6;
case 0x5e8db9:c.instructions+=5;goto B5e8db9;
case 0x5e8dbc:c.instructions+=4;goto B5e8dbc;
case 0x5e8dbf:c.instructions+=3;goto B5e8dbf;
case 0x5e8dc0:c.instructions+=2;goto B5e8dc0;
case 0x5e8dc2:c.instructions+=1;goto B5e8dc2;
case 0x5e8dc7:goto L5e8dc7;
case 0x5e8dcb:c.instructions+=4;goto B5e8dcb;
case 0x5e8dcf:c.instructions+=3;goto B5e8dcf;
case 0x5e8dd2:c.instructions+=2;goto B5e8dd2;
case 0x5e8dd7:c.instructions+=1;goto B5e8dd7;
case 0x5e8ddc:goto L5e8ddc;
case 0x5e8ddf:c.instructions+=4;goto B5e8ddf;
case 0x5e8de1:c.instructions+=3;goto B5e8de1;
case 0x5e8de5:c.instructions+=2;goto B5e8de5;
case 0x5e8de8:c.instructions+=1;goto B5e8de8;
case 0x5e8ded:goto L5e8ded;
case 0x5e8df1:c.instructions+=9;goto B5e8df1;
case 0x5e8df5:c.instructions+=8;goto B5e8df5;
case 0x5e8df8:c.instructions+=7;goto B5e8df8;
case 0x5e8dfb:c.instructions+=6;goto B5e8dfb;
case 0x5e8dfe:c.instructions+=5;goto B5e8dfe;
case 0x5e8e02:c.instructions+=4;goto B5e8e02;
case 0x5e8e04:c.instructions+=3;goto B5e8e04;
case 0x5e8e07:c.instructions+=2;goto B5e8e07;
case 0x5e8e09:c.instructions+=1;goto B5e8e09;
case 0x5e8e0b:goto L5e8e0b;
case 0x5e8e0d:c.instructions+=8;goto B5e8e0d;
case 0x5e8e10:c.instructions+=7;goto B5e8e10;
case 0x5e8e13:c.instructions+=6;goto B5e8e13;
case 0x5e8e16:c.instructions+=5;goto B5e8e16;
case 0x5e8e1a:c.instructions+=4;goto B5e8e1a;
case 0x5e8e1d:c.instructions+=3;goto B5e8e1d;
case 0x5e8e1e:c.instructions+=2;goto B5e8e1e;
case 0x5e8e22:c.instructions+=1;goto B5e8e22;
case 0x5e8e27:goto L5e8e27;
case 0x5e8e2b:c.instructions+=10;goto B5e8e2b;
case 0x5e8e2e:c.instructions+=9;goto B5e8e2e;
case 0x5e8e30:c.instructions+=8;goto B5e8e30;
case 0x5e8e32:c.instructions+=7;goto B5e8e32;
case 0x5e8e35:c.instructions+=6;goto B5e8e35;
case 0x5e8e38:c.instructions+=5;goto B5e8e38;
case 0x5e8e3c:c.instructions+=4;goto B5e8e3c;
case 0x5e8e3f:c.instructions+=3;goto B5e8e3f;
case 0x5e8e42:c.instructions+=2;goto B5e8e42;
case 0x5e8e43:c.instructions+=1;goto B5e8e43;
case 0x5e8e48:goto L5e8e48;
case 0x5e8e4c:c.instructions+=9;goto B5e8e4c;
case 0x5e8e50:c.instructions+=8;goto B5e8e50;
case 0x5e8e54:c.instructions+=7;goto B5e8e54;
case 0x5e8e57:c.instructions+=6;goto B5e8e57;
case 0x5e8e5a:c.instructions+=5;goto B5e8e5a;
case 0x5e8e5e:c.instructions+=4;goto B5e8e5e;
case 0x5e8e61:c.instructions+=3;goto B5e8e61;
case 0x5e8e66:c.instructions+=2;goto B5e8e66;
case 0x5e8e6b:c.instructions+=1;goto B5e8e6b;
case 0x5e8e6d:goto L5e8e6d;
case 0x5e8e6f:c.instructions+=7;goto B5e8e6f;
case 0x5e8e72:c.instructions+=6;goto B5e8e72;
case 0x5e8e75:c.instructions+=5;goto B5e8e75;
case 0x5e8e78:c.instructions+=4;goto B5e8e78;
case 0x5e8e7b:c.instructions+=3;goto B5e8e7b;
case 0x5e8e7c:c.instructions+=2;goto B5e8e7c;
case 0x5e8e7e:c.instructions+=1;goto B5e8e7e;
case 0x5e8e83:goto L5e8e83;
case 0x5e8e87:c.instructions+=4;goto B5e8e87;
case 0x5e8e8a:c.instructions+=3;goto B5e8e8a;
case 0x5e8e8d:c.instructions+=2;goto B5e8e8d;
case 0x5e8e90:c.instructions+=1;goto B5e8e90;
case 0x5e8e95:goto L5e8e95;
case 0x5e8e99:c.instructions+=8;goto B5e8e99;
case 0x5e8e9d:c.instructions+=7;goto B5e8e9d;
case 0x5e8ea3:c.instructions+=6;goto B5e8ea3;
case 0x5e8ea4:c.instructions+=5;goto B5e8ea4;
case 0x5e8ea7:c.instructions+=4;goto B5e8ea7;
case 0x5e8ea9:c.instructions+=3;goto B5e8ea9;
case 0x5e8ead:c.instructions+=2;goto B5e8ead;
case 0x5e8eb1:c.instructions+=1;goto B5e8eb1;
case 0x5e8eb7:goto L5e8eb7;
case 0x5e8ebb:c.instructions+=5;goto B5e8ebb;
case 0x5e8ec1:c.instructions+=4;goto B5e8ec1;
case 0x5e8ec2:c.instructions+=3;goto B5e8ec2;
case 0x5e8ec4:c.instructions+=2;goto B5e8ec4;
case 0x5e8ec8:c.instructions+=1;goto B5e8ec8;
case 0x5e8ecd:goto L5e8ecd;
case 0x5e8ed3:c.instructions+=3;goto B5e8ed3;
case 0x5e8ed5:c.instructions+=2;goto B5e8ed5;
case 0x5e8ed9:c.instructions+=1;goto B5e8ed9;
case 0x5e8edf:goto L5e8edf;
case 0x5e8ee3:c.instructions+=3;goto B5e8ee3;
case 0x5e8ee5:c.instructions+=2;goto B5e8ee5;
case 0x5e8eed:c.instructions+=1;goto B5e8eed;
case 0x5e8ef3:goto L5e8ef3;
case 0x5e8ef5:goto L5e8ef5;
case 0x5e8ef9:c.instructions+=1;goto B5e8ef9;
case 0x5e8f00:goto L5e8f00;
case 0x5e8f06:c.instructions+=13;goto B5e8f06;
case 0x5e8f0a:c.instructions+=12;goto B5e8f0a;
case 0x5e8f0e:c.instructions+=11;goto B5e8f0e;
case 0x5e8f0f:c.instructions+=10;goto B5e8f0f;
case 0x5e8f15:c.instructions+=9;goto B5e8f15;
case 0x5e8f17:c.instructions+=8;goto B5e8f17;
case 0x5e8f1b:c.instructions+=7;goto B5e8f1b;
case 0x5e8f1f:c.instructions+=6;goto B5e8f1f;
case 0x5e8f25:c.instructions+=5;goto B5e8f25;
case 0x5e8f2b:c.instructions+=4;goto B5e8f2b;
case 0x5e8f2d:c.instructions+=3;goto B5e8f2d;
case 0x5e8f33:c.instructions+=2;goto B5e8f33;
case 0x5e8f39:c.instructions+=1;goto B5e8f39;
case 0x5e8f3b:goto L5e8f3b;
case 0x5e8f3f:c.instructions+=1;goto B5e8f3f;
case 0x5e8f41:goto L5e8f41;
case 0x5e8f42:c.instructions+=2;goto B5e8f42;
case 0x5e8f44:c.instructions+=1;goto B5e8f44;
case 0x5e8f49:goto L5e8f49;
case 0x5e8f4f:c.instructions+=2;goto B5e8f4f;
case 0x5e8f50:c.instructions+=1;goto B5e8f50;
case 0x5e8f52:goto L5e8f52;
case 0x5e8f56:c.instructions+=1;goto B5e8f56;
case 0x5e8f58:goto L5e8f58;
case 0x5e8f59:c.instructions+=2;goto B5e8f59;
case 0x5e8f5b:c.instructions+=1;goto B5e8f5b;
case 0x5e8f60:goto L5e8f60;
case 0x5e8f66:c.instructions+=2;goto B5e8f66;
case 0x5e8f67:c.instructions+=1;goto B5e8f67;
case 0x5e8f69:goto L5e8f69;
case 0x5e8f6d:c.instructions+=2;goto B5e8f6d;
case 0x5e8f6f:c.instructions+=1;goto B5e8f6f;
case 0x5e8f70:goto L5e8f70;
case 0x5e8f71:c.instructions+=2;goto B5e8f71;
case 0x5e8f73:c.instructions+=1;goto B5e8f73;
case 0x5e8f78:goto L5e8f78;
case 0x5e8f7e:c.instructions+=2;goto B5e8f7e;
case 0x5e8f7f:c.instructions+=1;goto B5e8f7f;
case 0x5e8f81:goto L5e8f81;
case 0x5e8f85:c.instructions+=1;goto B5e8f85;
case 0x5e8f87:goto L5e8f87;
case 0x5e8f88:c.instructions+=2;goto B5e8f88;
case 0x5e8f8a:c.instructions+=1;goto B5e8f8a;
case 0x5e8f8f:goto L5e8f8f;
case 0x5e8f95:c.instructions+=2;goto B5e8f95;
case 0x5e8f96:c.instructions+=1;goto B5e8f96;
case 0x5e8f98:goto L5e8f98;
case 0x5e8f9c:c.instructions+=2;goto B5e8f9c;
case 0x5e8f9e:c.instructions+=1;goto B5e8f9e;
case 0x5e8fa0:goto L5e8fa0;
case 0x5e8fa1:c.instructions+=2;goto B5e8fa1;
case 0x5e8fa3:c.instructions+=1;goto B5e8fa3;
case 0x5e8fa8:goto L5e8fa8;
case 0x5e8fae:c.instructions+=2;goto B5e8fae;
case 0x5e8faf:c.instructions+=1;goto B5e8faf;
case 0x5e8fb1:goto L5e8fb1;
case 0x5e8fb5:c.instructions+=5;goto B5e8fb5;
case 0x5e8fb9:c.instructions+=4;goto B5e8fb9;
case 0x5e8fba:c.instructions+=3;goto B5e8fba;
case 0x5e8fbc:c.instructions+=2;goto B5e8fbc;
case 0x5e8fc0:c.instructions+=1;goto B5e8fc0;
case 0x5e8fc6:goto L5e8fc6;
case 0x5e8fca:goto L5e8fca;
case 0x5e8fce:c.instructions+=3;goto B5e8fce;
case 0x5e8fd4:c.instructions+=2;goto B5e8fd4;
case 0x5e8fd6:c.instructions+=1;goto B5e8fd6;
case 0x5e8fdc:goto L5e8fdc;
case 0x5e8fde:c.instructions+=3;goto B5e8fde;
case 0x5e8fe4:c.instructions+=2;goto B5e8fe4;
case 0x5e8fea:c.instructions+=1;goto B5e8fea;
case 0x5e8fec:goto L5e8fec;
case 0x5e8ff0:c.instructions+=4;goto B5e8ff0;
case 0x5e8ff2:c.instructions+=3;goto B5e8ff2;
case 0x5e8ff3:c.instructions+=2;goto B5e8ff3;
case 0x5e8ff5:c.instructions+=1;goto B5e8ff5;
case 0x5e8ffa:goto L5e8ffa;
default:missing_instruction(c.pc);}
B5e8000:L5e8000:{c.instructions+=41;NFSU2_TR(0x5e8000);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5e8004:{NFSU2_TR(0x5e8004);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5e8008:{NFSU2_TR(0x5e8008);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e800a:{NFSU2_TR(0x5e800a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e800b:{NFSU2_TR(0x5e800b);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B5e800f:{NFSU2_TR(0x5e800f);
u8 U[4];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5e8013:{NFSU2_TR(0x5e8013);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e8014:{NFSU2_TR(0x5e8014);
__builtin_memmove((R+4),(R+28),4);
}
B5e8016:{NFSU2_TR(0x5e8016);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e801a:{NFSU2_TR(0x5e801a);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5e801c:{NFSU2_TR(0x5e801c);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e8020:{NFSU2_TR(0x5e8020);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B5e8022:{NFSU2_TR(0x5e8022);
{u32 ea_=u32(r4(R+16)+u32(112u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5e8026:{NFSU2_TR(0x5e8026);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e802a:{NFSU2_TR(0x5e802a);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B5e802c:{NFSU2_TR(0x5e802c);
{u32 ea_=u32(r4(R+16)+u32(116u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5e8030:{NFSU2_TR(0x5e8030);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5e8032:{NFSU2_TR(0x5e8032);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5e8036:{NFSU2_TR(0x5e8036);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5e8038:{NFSU2_TR(0x5e8038);
{u32 ea_=u32(r4(R+16)+u32(112u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e803c:{NFSU2_TR(0x5e803c);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5e803f:{NFSU2_TR(0x5e803f);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5e8043:{NFSU2_TR(0x5e8043);
{u32 ea_=u32(r4(R+16)+u32(116u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e8047:{NFSU2_TR(0x5e8047);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5e804a:{NFSU2_TR(0x5e804a);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5e804e:{NFSU2_TR(0x5e804e);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e8052:{NFSU2_TR(0x5e8052);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5e8056:{NFSU2_TR(0x5e8056);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e805a:{NFSU2_TR(0x5e805a);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5e805e:{NFSU2_TR(0x5e805e);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e8062:{NFSU2_TR(0x5e8062);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5e8066:{NFSU2_TR(0x5e8066);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5e806a:{NFSU2_TR(0x5e806a);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5e806c:{NFSU2_TR(0x5e806c);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5e8072:{NFSU2_TR(0x5e8072);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5e8076:{NFSU2_TR(0x5e8076);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5e807c:{NFSU2_TR(0x5e807c);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5e8080:{NFSU2_TR(0x5e8080);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e8084:{NFSU2_TR(0x5e8084);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5e808a:{NFSU2_TR(0x5e808a);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5e808e:{NFSU2_TR(0x5e808e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e8093ull));
TAIL_STATIC(0x5e6fa0u,5e6);
}
B5e8093:L5e8093:{c.instructions+=12;NFSU2_TR(0x5e8093);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e8096:{NFSU2_TR(0x5e8096);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5e8099:{NFSU2_TR(0x5e8099);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e809a:{NFSU2_TR(0x5e809a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e809b:{NFSU2_TR(0x5e809b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e809c:{NFSU2_TR(0x5e809c);
u8 U[4];
w4(U+0,u32(0x3f000000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e80a1:{NFSU2_TR(0x5e80a1);
u8 U[4];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5e80a5:{NFSU2_TR(0x5e80a5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e80a6:{NFSU2_TR(0x5e80a6);
u8 U[4];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5e80aa:{NFSU2_TR(0x5e80aa);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e80ab:{NFSU2_TR(0x5e80ab);
__builtin_memmove((R+4),(R+28),4);
}
B5e80ad:{NFSU2_TR(0x5e80ad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e80b2ull));
TAIL_STATIC(0x5d3920u,5d3);
}
B5e80b2:L5e80b2:{c.instructions+=2;NFSU2_TR(0x5e80b2);
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
B5e80b4:{NFSU2_TR(0x5e80b4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e80ee;}}
}
B5e80b6:L5e80b6:{c.instructions+=12;NFSU2_TR(0x5e80b6);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e80ba:{NFSU2_TR(0x5e80ba);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e80be:{NFSU2_TR(0x5e80be);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5e80c2:{NFSU2_TR(0x5e80c2);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e80c6:{NFSU2_TR(0x5e80c6);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e80ca:{NFSU2_TR(0x5e80ca);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e80ce:{NFSU2_TR(0x5e80ce);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e80d2:{NFSU2_TR(0x5e80d2);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5e80d3:{NFSU2_TR(0x5e80d3);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5e80d5:{NFSU2_TR(0x5e80d5);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e80d9:{NFSU2_TR(0x5e80d9);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e80dd:{NFSU2_TR(0x5e80dd);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e8000u);}goto L5e8000;}}
}
B5e80e3:L5e80e3:{c.instructions+=7;NFSU2_TR(0x5e80e3);
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
B5e80e5:{NFSU2_TR(0x5e80e5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5e80e6:{NFSU2_TR(0x5e80e6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5e80e7:{NFSU2_TR(0x5e80e7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5e80e8:{NFSU2_TR(0x5e80e8);
__builtin_memmove((R+16),(R+20),4);
}
B5e80ea:{NFSU2_TR(0x5e80ea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5e80eb:{NFSU2_TR(0x5e80eb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5e80ee:L5e80ee:{c.instructions+=7;NFSU2_TR(0x5e80ee);
w1(R+0,u8(0x1ull));
}
B5e80f0:{NFSU2_TR(0x5e80f0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5e80f1:{NFSU2_TR(0x5e80f1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5e80f2:{NFSU2_TR(0x5e80f2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5e80f3:{NFSU2_TR(0x5e80f3);
__builtin_memmove((R+16),(R+20),4);
}
B5e80f5:{NFSU2_TR(0x5e80f5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5e80f6:{NFSU2_TR(0x5e80f6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5e80f9:L5e80f9:{c.instructions+=8;NFSU2_TR(0x5e80f9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5e80fa:{NFSU2_TR(0x5e80fa);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5e80fc:{NFSU2_TR(0x5e80fc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5e80fd:{NFSU2_TR(0x5e80fd);
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
B5e80ff:{NFSU2_TR(0x5e80ff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5e8100:{NFSU2_TR(0x5e8100);
__builtin_memmove((R+16),(R+20),4);
}
B5e8102:{NFSU2_TR(0x5e8102);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5e8103:{NFSU2_TR(0x5e8103);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5e8110:L5e8110:{c.instructions+=13;NFSU2_TR(0x5e8110);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e8114:{NFSU2_TR(0x5e8114);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e8115:{NFSU2_TR(0x5e8115);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e8116:{NFSU2_TR(0x5e8116);
__asm__ volatile(".byte 0xdc,0xc0":::"memory");
}
B5e8118:{NFSU2_TR(0x5e8118);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5e811c:{NFSU2_TR(0x5e811c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e811d:{NFSU2_TR(0x5e811d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e811e:{NFSU2_TR(0x5e811e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e8120:{NFSU2_TR(0x5e8120);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e8121:{NFSU2_TR(0x5e8121);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5e8124:{NFSU2_TR(0x5e8124);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e8125:{NFSU2_TR(0x5e8125);
__builtin_memmove((R+24),(R+4),4);
}
B5e8127:{NFSU2_TR(0x5e8127);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e812cull));
TAIL_STATIC(0x5e6fa0u,5e6);
}
B5e812c:L5e812c:{c.instructions+=5;NFSU2_TR(0x5e812c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2e8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e8132:{NFSU2_TR(0x5e8132);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
}
B5e8134:{NFSU2_TR(0x5e8134);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5e8136:{NFSU2_TR(0x5e8136);
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
B5e8138:{NFSU2_TR(0x5e8138);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5e81a1;}}
}
B5e813a:L5e813a:{c.instructions+=1;NFSU2_TR(0x5e813a);
__builtin_memmove((R+12),(R+12),4);
}
B5e8140:L5e8140:{c.instructions+=7;NFSU2_TR(0x5e8140);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2e4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e8146:{NFSU2_TR(0x5e8146);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5e814a:{NFSU2_TR(0x5e814a);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
}
B5e814c:{NFSU2_TR(0x5e814c);
u8 U[16];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B5e8150:{NFSU2_TR(0x5e8150);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e8151:{NFSU2_TR(0x5e8151);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e8152:{NFSU2_TR(0x5e8152);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e8157ull));
TAIL_STATIC(0x5d35b0u,5d3);
}
B5e8157:L5e8157:{c.instructions+=2;NFSU2_TR(0x5e8157);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e8159:{NFSU2_TR(0x5e8159);
if(r1(R+518)){{goto L5e8196;}}
}
B5e815b:L5e815b:{c.instructions+=7;NFSU2_TR(0x5e815b);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e815f:{NFSU2_TR(0x5e815f);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5e8161:{NFSU2_TR(0x5e8161);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e8165:{NFSU2_TR(0x5e8165);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B5e8167:{NFSU2_TR(0x5e8167);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5e8169:{NFSU2_TR(0x5e8169);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e816c:{NFSU2_TR(0x5e816c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e8174;}}
}
B5e816e:L5e816e:{c.instructions+=2;NFSU2_TR(0x5e816e);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5e8170:{NFSU2_TR(0x5e8170);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e8174:L5e8174:{c.instructions+=5;NFSU2_TR(0x5e8174);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e8178:{NFSU2_TR(0x5e8178);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B5e817a:{NFSU2_TR(0x5e817a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5e817c:{NFSU2_TR(0x5e817c);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5e817f:{NFSU2_TR(0x5e817f);
if(r1(R+514)){{goto L5e8187;}}
}
B5e8181:L5e8181:{c.instructions+=2;NFSU2_TR(0x5e8181);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5e8183:{NFSU2_TR(0x5e8183);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e8187:L5e8187:{c.instructions+=6;NFSU2_TR(0x5e8187);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e818b:{NFSU2_TR(0x5e818b);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B5e818d:{NFSU2_TR(0x5e818d);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5e818f:{NFSU2_TR(0x5e818f);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5e8191:{NFSU2_TR(0x5e8191);
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
B5e8194:{NFSU2_TR(0x5e8194);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L5e81aa;}}
}
B5e8196:L5e8196:{c.instructions+=4;NFSU2_TR(0x5e8196);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2e8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e819c:{NFSU2_TR(0x5e819c);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B5e819d:{NFSU2_TR(0x5e819d);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B5e819f:{NFSU2_TR(0x5e819f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e8140u);}goto L5e8140;}}
}
B5e81a1:L5e81a1:{c.instructions+=6;NFSU2_TR(0x5e81a1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5e81a2:{NFSU2_TR(0x5e81a2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5e81a3:{NFSU2_TR(0x5e81a3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5e81a4:{NFSU2_TR(0x5e81a4);
__builtin_memmove((R+0),(R+12),1);
}
B5e81a6:{NFSU2_TR(0x5e81a6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5e81a7:{NFSU2_TR(0x5e81a7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5e81aa:L5e81aa:{c.instructions+=6;NFSU2_TR(0x5e81aa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5e81ab:{NFSU2_TR(0x5e81ab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5e81ac:{NFSU2_TR(0x5e81ac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5e81ad:{NFSU2_TR(0x5e81ad);
w1(R+0,u8(0x1ull));
}
B5e81af:{NFSU2_TR(0x5e81af);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5e81b0:{NFSU2_TR(0x5e81b0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5e81c0:L5e81c0:{c.instructions+=4;NFSU2_TR(0x5e81c0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e81c4:{NFSU2_TR(0x5e81c4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e81c5:{NFSU2_TR(0x5e81c5);
w4(R+4,u32(0x88f768ull));
}
B5e81ca:{NFSU2_TR(0x5e81ca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e81cfull));
TAIL_STATIC(0x5e78a0u,5e7);
}
B5e81cf:L5e81cf:{c.instructions+=1;NFSU2_TR(0x5e81cf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5e81d0:L5e81d0:{c.instructions+=7;NFSU2_TR(0x5e81d0);
__builtin_memmove((R+8),(R+4),4);
}
B5e81d2:{NFSU2_TR(0x5e81d2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e81d3:{NFSU2_TR(0x5e81d3);
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
B5e81d5:{NFSU2_TR(0x5e81d5);
w4(R+4,u32(0x208ull));
}
B5e81da:{NFSU2_TR(0x5e81da);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5e81dd:{NFSU2_TR(0x5e81dd);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+8)),r4(U+0));
}
B5e81df:{NFSU2_TR(0x5e81df);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e81e2:L5e81e2:{c.instructions+=1;NFSU2_TR(0x5e81e2);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L5e81e4;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e81e2u);}goto L5e81e2;}
}
B5e81e4:L5e81e4:{c.instructions+=5;NFSU2_TR(0x5e81e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x828ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e81ea:{NFSU2_TR(0x5e81ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x82cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e81f0:{NFSU2_TR(0x5e81f0);
__builtin_memmove((R+0),(R+8),4);
}
B5e81f2:{NFSU2_TR(0x5e81f2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5e81f3:{NFSU2_TR(0x5e81f3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5e8200:L5e8200:{c.instructions+=3;NFSU2_TR(0x5e8200);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+4)),r4(U+0));
}
B5e8202:{NFSU2_TR(0x5e8202);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e8205:{NFSU2_TR(0x5e8205);
TAIL_STATIC(0x5e7e30u,5e7);
}
B5e8210:L5e8210:{c.instructions+=9;NFSU2_TR(0x5e8210);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e8211:{NFSU2_TR(0x5e8211);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e8212:{NFSU2_TR(0x5e8212);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5e8216:{NFSU2_TR(0x5e8216);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5e8219:{NFSU2_TR(0x5e8219);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x80034130ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e821e:{NFSU2_TR(0x5e821e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e821f:{NFSU2_TR(0x5e821f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e8220:{NFSU2_TR(0x5e8220);
__builtin_memmove((R+24),(R+4),4);
}
B5e8222:{NFSU2_TR(0x5e8222);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e82ab;}}
}
B5e8228:L5e8228:{c.instructions+=6;NFSU2_TR(0x5e8228);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1full))));
__builtin_memmove((R+0),(U+0),4);
}
B5e822b:{NFSU2_TR(0x5e822b);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffff0ull))));
}
B5e822e:{NFSU2_TR(0x5e822e);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5e8230:{NFSU2_TR(0x5e8230);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
__builtin_memmove((R+28),(U+0),2);
}
B5e8233:{NFSU2_TR(0x5e8233);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e8234:{NFSU2_TR(0x5e8234);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e8239ull));
TAIL_STATIC(0x5d3c10u,5d3);
}
B5e8239:L5e8239:{c.instructions+=4;NFSU2_TR(0x5e8239);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e823a:{NFSU2_TR(0x5e823a);
__builtin_memmove((R+4),(R+24),4);
}
B5e823c:{NFSU2_TR(0x5e823c);
__builtin_memmove((R+12),(R+0),4);
}
B5e823e:{NFSU2_TR(0x5e823e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e8243ull));
TAIL_STATIC(0x591380u,591);
}
B5e8243:L5e8243:{c.instructions+=5;NFSU2_TR(0x5e8243);
__builtin_memmove((R+28),(R+0),4);
}
B5e8245:{NFSU2_TR(0x5e8245);
__builtin_memmove((R+0),gp(0x864f60),4);
}
B5e824a:{NFSU2_TR(0x5e824a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e824c:{NFSU2_TR(0x5e824c);
__builtin_memmove((R+4),(R+28),4);
}
B5e824e:{NFSU2_TR(0x5e824e);
if(r1(R+518)){{goto L5e8262;}}
}
B5e8250:L5e8250:{c.instructions+=2;NFSU2_TR(0x5e8250);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e8251:{NFSU2_TR(0x5e8251);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e8256ull));
TAIL_STATIC(0x5d8250u,5d8);
}
B5e8256:L5e8256:{c.instructions+=6;NFSU2_TR(0x5e8256);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5e8257:{NFSU2_TR(0x5e8257);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5e8258:{NFSU2_TR(0x5e8258);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5e8259:{NFSU2_TR(0x5e8259);
w4(R+0,u32(0x1ull));
}
B5e825e:{NFSU2_TR(0x5e825e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5e825f:{NFSU2_TR(0x5e825f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5e8262:L5e8262:{c.instructions+=1;NFSU2_TR(0x5e8262);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e8267ull));
TAIL_STATIC(0x5e0c40u,5e0);
}
B5e8267:L5e8267:{c.instructions+=3;NFSU2_TR(0x5e8267);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e8268:{NFSU2_TR(0x5e8268);
__builtin_memmove((R+4),(R+28),4);
}
B5e826a:{NFSU2_TR(0x5e826a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e826full));
TAIL_STATIC(0x5d8250u,5d8);
}
B5e826f:L5e826f:{c.instructions+=8;NFSU2_TR(0x5e826f);
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
B5e8271:{NFSU2_TR(0x5e8271);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B5e8275:{NFSU2_TR(0x5e8275);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5e8277:{NFSU2_TR(0x5e8277);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e827a:{NFSU2_TR(0x5e827a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5e827c:{NFSU2_TR(0x5e827c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e827f:{NFSU2_TR(0x5e827f);
u8 U[16];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
w4(U+12,u32(0x0ull));
s4(u32(r4(U+8)),r4(U+12));
}
B5e8287:{NFSU2_TR(0x5e8287);
if(r1(R+518)){{goto L5e829f;}}
}
B5e8289:L5e8289:{c.instructions+=2;NFSU2_TR(0x5e8289);
__builtin_memmove((R+4),(R+28),4);
}
B5e828b:{NFSU2_TR(0x5e828b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e8290ull));
TAIL_STATIC(0x5e69f0u,5e6);
}
B5e8290:L5e8290:{c.instructions+=4;NFSU2_TR(0x5e8290);
__builtin_memmove((R+0),gp(0x883d98),4);
}
B5e8295:{NFSU2_TR(0x5e8295);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e8296:{NFSU2_TR(0x5e8296);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e8297:{NFSU2_TR(0x5e8297);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e829cull));
TAIL_STATIC(0x43f920u,43f);
}
B5e829c:L5e829c:{c.instructions+=1;NFSU2_TR(0x5e829c);
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
B5e829f:L5e829f:{c.instructions+=6;NFSU2_TR(0x5e829f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5e82a0:{NFSU2_TR(0x5e82a0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5e82a1:{NFSU2_TR(0x5e82a1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5e82a2:{NFSU2_TR(0x5e82a2);
w4(R+0,u32(0x1ull));
}
B5e82a7:{NFSU2_TR(0x5e82a7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5e82a8:{NFSU2_TR(0x5e82a8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5e82ab:L5e82ab:{c.instructions+=2;NFSU2_TR(0x5e82ab);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x3412full))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e82b0:{NFSU2_TR(0x5e82b0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e82cc;}}
}
B5e82b2:L5e82b2:{c.instructions+=9;NFSU2_TR(0x5e82b2);
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
B5e82b4:{NFSU2_TR(0x5e82b4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5e82b5:{NFSU2_TR(0x5e82b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x828ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e82bb:{NFSU2_TR(0x5e82bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x82cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e82c1:{NFSU2_TR(0x5e82c1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5e82c2:{NFSU2_TR(0x5e82c2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5e82c3:{NFSU2_TR(0x5e82c3);
w4(R+0,u32(0x1ull));
}
B5e82c8:{NFSU2_TR(0x5e82c8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5e82c9:{NFSU2_TR(0x5e82c9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5e82cc:L5e82cc:{c.instructions+=6;NFSU2_TR(0x5e82cc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5e82cd:{NFSU2_TR(0x5e82cd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5e82ce:{NFSU2_TR(0x5e82ce);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5e82cf:{NFSU2_TR(0x5e82cf);
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
B5e82d1:{NFSU2_TR(0x5e82d1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5e82d2:{NFSU2_TR(0x5e82d2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5e82e0:L5e82e0:{c.instructions+=12;NFSU2_TR(0x5e82e0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e82e1:{NFSU2_TR(0x5e82e1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e82e2:{NFSU2_TR(0x5e82e2);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e82e3:{NFSU2_TR(0x5e82e3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e82e4:{NFSU2_TR(0x5e82e4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e82e5:{NFSU2_TR(0x5e82e5);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5e82e9:{NFSU2_TR(0x5e82e9);
__builtin_memmove((R+24),(R+4),4);
}
B5e82eb:{NFSU2_TR(0x5e82eb);
u8 U[4];
w4(U+0,u32(0x7a533cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e82f0:{NFSU2_TR(0x5e82f0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e82f2:{NFSU2_TR(0x5e82f2);
__builtin_memmove((R+4),(R+28),4);
}
B5e82f4:{NFSU2_TR(0x5e82f4);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e82f8:{NFSU2_TR(0x5e82f8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e82fdull));
TAIL_STATIC(0x578ce0u,578);
}
B5e82fd:L5e82fd:{c.instructions+=2;NFSU2_TR(0x5e82fd);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B5e82ff:{NFSU2_TR(0x5e82ff);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xbcull))));
}
B5e8305:L5e8305:{c.instructions+=4;NFSU2_TR(0x5e8305);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffff4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5e8308:{NFSU2_TR(0x5e8308);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e8309:{NFSU2_TR(0x5e8309);
__builtin_memmove((R+4),(R+28),4);
}
B5e830b:{NFSU2_TR(0x5e830b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e8310ull));
TAIL_STATIC(0x571770u,571);
}
B5e8310:L5e8310:{c.instructions+=7;NFSU2_TR(0x5e8310);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e8312:{NFSU2_TR(0x5e8312);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e8314:{NFSU2_TR(0x5e8314);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e8316:{NFSU2_TR(0x5e8316);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffff8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5e8319:{NFSU2_TR(0x5e8319);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e831a:{NFSU2_TR(0x5e831a);
__builtin_memmove((R+4),(R+28),4);
}
B5e831c:{NFSU2_TR(0x5e831c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e8321ull));
TAIL_STATIC(0x571640u,571);
}
B5e8321:L5e8321:{c.instructions+=6;NFSU2_TR(0x5e8321);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e8323:{NFSU2_TR(0x5e8323);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e8325:{NFSU2_TR(0x5e8325);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e8327:{NFSU2_TR(0x5e8327);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e8328:{NFSU2_TR(0x5e8328);
__builtin_memmove((R+4),(R+28),4);
}
B5e832a:{NFSU2_TR(0x5e832a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e832full));
TAIL_STATIC(0x571640u,571);
}
B5e832f:L5e832f:{c.instructions+=7;NFSU2_TR(0x5e832f);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e8331:{NFSU2_TR(0x5e8331);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e8333:{NFSU2_TR(0x5e8333);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e8335:{NFSU2_TR(0x5e8335);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5e8338:{NFSU2_TR(0x5e8338);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e8339:{NFSU2_TR(0x5e8339);
__builtin_memmove((R+4),(R+28),4);
}
B5e833b:{NFSU2_TR(0x5e833b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e8340ull));
TAIL_STATIC(0x571640u,571);
}
B5e8340:L5e8340:{c.instructions+=4;NFSU2_TR(0x5e8340);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((R+0),(U+0),4);
}
B5e8343:{NFSU2_TR(0x5e8343);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e8344:{NFSU2_TR(0x5e8344);
__builtin_memmove((R+4),(R+28),4);
}
B5e8346:{NFSU2_TR(0x5e8346);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e834bull));
TAIL_STATIC(0x571710u,571);
}
B5e834b:L5e834b:{c.instructions+=4;NFSU2_TR(0x5e834b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5e834e:{NFSU2_TR(0x5e834e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e834f:{NFSU2_TR(0x5e834f);
__builtin_memmove((R+4),(R+28),4);
}
B5e8351:{NFSU2_TR(0x5e8351);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e8356ull));
TAIL_STATIC(0x571770u,571);
}
B5e8356:L5e8356:{c.instructions+=4;NFSU2_TR(0x5e8356);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xaull))));
__builtin_memmove((R+12),(U+0),4);
}
B5e8359:{NFSU2_TR(0x5e8359);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e835a:{NFSU2_TR(0x5e835a);
__builtin_memmove((R+4),(R+28),4);
}
B5e835c:{NFSU2_TR(0x5e835c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e8361ull));
TAIL_STATIC(0x571710u,571);
}
B5e8361:L5e8361:{c.instructions+=6;NFSU2_TR(0x5e8361);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+12))),2);
__builtin_memmove((R+8),(U+0),2);
}
B5e8364:{NFSU2_TR(0x5e8364);
u8 U[14];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),2);
s2(u32(r4(U+8)),r2(U+12));
}
B5e8369:{NFSU2_TR(0x5e8369);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B5e836a:{NFSU2_TR(0x5e836a);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x5cull))));
}
B5e836d:{NFSU2_TR(0x5e836d);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5e8370:{NFSU2_TR(0x5e8370);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e8305u);}goto L5e8305;}}
}
B5e8372:L5e8372:{c.instructions+=3;NFSU2_TR(0x5e8372);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5e8375:{NFSU2_TR(0x5e8375);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e8377:{NFSU2_TR(0x5e8377);
if(r1(R+518)){{goto L5e838b;}}
}
B5e8379:L5e8379:{c.instructions+=4;NFSU2_TR(0x5e8379);
u8 U[6];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B5e837e:{NFSU2_TR(0x5e837e);
u8 U[6];
w4(U+0,u32(u32(u32(0x1aull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B5e8383:{NFSU2_TR(0x5e8383);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B5e8387:{NFSU2_TR(0x5e8387);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3aull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B5e838b:L5e838b:{c.instructions+=4;NFSU2_TR(0x5e838b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5e838f:{NFSU2_TR(0x5e838f);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x6acull))));
__builtin_memmove((R+24),(U+0),4);
}
B5e8395:{NFSU2_TR(0x5e8395);
w4(R+20,u32(0x4ull));
}
B5e839a:{NFSU2_TR(0x5e839a);
__builtin_memmove((R+12),(R+12),4);
}
B5e83a0:L5e83a0:{c.instructions+=3;NFSU2_TR(0x5e83a0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e83a1:{NFSU2_TR(0x5e83a1);
__builtin_memmove((R+4),(R+28),4);
}
B5e83a3:{NFSU2_TR(0x5e83a3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e83a8ull));
TAIL_STATIC(0x571710u,571);
}
B5e83a8:L5e83a8:{c.instructions+=3;NFSU2_TR(0x5e83a8);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x2ull))));
}
B5e83ab:{NFSU2_TR(0x5e83ab);
w4(R+20,u32(u32(r4(R+20))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+20))==(u32(0x0ull))));
}
B5e83ac:{NFSU2_TR(0x5e83ac);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e83a0u);}goto L5e83a0;}}
}
B5e83ae:L5e83ae:{c.instructions+=8;NFSU2_TR(0x5e83ae);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5e83b0:{NFSU2_TR(0x5e83b0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e83b1:{NFSU2_TR(0x5e83b1);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e83b3:{NFSU2_TR(0x5e83b3);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e83b5:{NFSU2_TR(0x5e83b5);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x289ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5e83bb:{NFSU2_TR(0x5e83bb);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e83bc:{NFSU2_TR(0x5e83bc);
__builtin_memmove((R+4),(R+28),4);
}
B5e83be:{NFSU2_TR(0x5e83be);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e83c3ull));
TAIL_STATIC(0x571640u,571);
}
B5e83c3:L5e83c3:{c.instructions+=3;NFSU2_TR(0x5e83c3);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x41ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5e83c6:{NFSU2_TR(0x5e83c6);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e83c8:{NFSU2_TR(0x5e83c8);
if(r1(R+518)){{goto L5e84df;}}
}
B5e83ce:L5e83ce:{c.instructions+=4;NFSU2_TR(0x5e83ce);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5e83d2:{NFSU2_TR(0x5e83d2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e83d3:{NFSU2_TR(0x5e83d3);
__builtin_memmove((R+4),(R+12),4);
}
B5e83d5:{NFSU2_TR(0x5e83d5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e83daull));
TAIL_STATIC(0x5e7af0u,5e7);
}
B5e83da:L5e83da:{c.instructions+=2;NFSU2_TR(0x5e83da);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x168ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5e83e0:{NFSU2_TR(0x5e83e0);
if(r1(R+518)){{goto L5e83f6;}}
}
B5e83e2:L5e83e2:{c.instructions+=2;NFSU2_TR(0x5e83e2);
__builtin_memmove((R+4),(R+12),4);
}
B5e83e4:{NFSU2_TR(0x5e83e4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e83e9ull));
TAIL_STATIC(0x5e6a70u,5e6);
}
B5e83e9:L5e83e9:{c.instructions+=1;NFSU2_TR(0x5e83e9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e83eeull));
TAIL_STATIC(0x57ef60u,57e);
}
B5e83ee:L5e83ee:{c.instructions+=2;NFSU2_TR(0x5e83ee);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x168ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5e83f4:{NFSU2_TR(0x5e83f4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e83e2u);}goto L5e83e2;}}
}
B5e83f6:L5e83f6:{c.instructions+=3;NFSU2_TR(0x5e83f6);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x298ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+24)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5e83fc:{NFSU2_TR(0x5e83fc);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e8400:{NFSU2_TR(0x5e8400);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5e854d;}}
}
B5e8406:L5e8406:{c.instructions+=2;NFSU2_TR(0x5e8406);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x29cull))));
__builtin_memmove((R+20),(U+0),4);
}
B5e840c:{NFSU2_TR(0x5e840c);
__builtin_memmove((R+16),(R+16),4);
}
B5e8410:L5e8410:{c.instructions+=8;NFSU2_TR(0x5e8410);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+24),(U+0),4);
}
B5e8413:{NFSU2_TR(0x5e8413);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B5e8417:{NFSU2_TR(0x5e8417);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B5e8418:{NFSU2_TR(0x5e8418);
w4(R+4,u32(0x64ull));
}
B5e841d:{NFSU2_TR(0x5e841d);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x5e841d);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x5e841d);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B5e841f:{NFSU2_TR(0x5e841f);
w1(R+0,u8(u32(r1(R+0))+u32(u8(0x40ull))));
}
B5e8421:{NFSU2_TR(0x5e8421);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x41ull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x41ull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B5e8423:{NFSU2_TR(0x5e8423);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5e84b6;}}
}
B5e8429:L5e8429:{c.instructions+=2;NFSU2_TR(0x5e8429);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x54ull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x54ull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e842b:{NFSU2_TR(0x5e842b);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L5e84b6;}}
}
B5e8431:L5e8431:{c.instructions+=3;NFSU2_TR(0x5e8431);
__builtin_memmove((R+0),gp(0x800dfc),4);
}
B5e8436:{NFSU2_TR(0x5e8436);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5e8438:{NFSU2_TR(0x5e8438);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5e84b6;}}
}
B5e843a:L5e843a:{c.instructions+=3;NFSU2_TR(0x5e843a);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+0))));
}
B5e843c:{NFSU2_TR(0x5e843c);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5e843e:{NFSU2_TR(0x5e843e);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5e84b6;}}
}
B5e8440:L5e8440:{c.instructions+=7;NFSU2_TR(0x5e8440);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e8442:{NFSU2_TR(0x5e8442);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e8444:{NFSU2_TR(0x5e8444);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e8446:{NFSU2_TR(0x5e8446);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5e844a:{NFSU2_TR(0x5e844a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e844b:{NFSU2_TR(0x5e844b);
__builtin_memmove((R+4),(R+28),4);
}
B5e844d:{NFSU2_TR(0x5e844d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e8452ull));
TAIL_STATIC(0x571640u,571);
}
B5e8452:L5e8452:{c.instructions+=4;NFSU2_TR(0x5e8452);
u8 U[5];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5e8456:{NFSU2_TR(0x5e8456);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e8458:{NFSU2_TR(0x5e8458);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e845b:{NFSU2_TR(0x5e845b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e84a9;}}
}
B5e845d:L5e845d:{c.instructions+=2;NFSU2_TR(0x5e845d);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5e8460:{NFSU2_TR(0x5e8460);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e84b6;}}
}
B5e8462:L5e8462:{c.instructions+=10;NFSU2_TR(0x5e8462);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5e8469:{NFSU2_TR(0x5e8469);
__builtin_memmove((R+8),gp(0x870818),4);
}
B5e846f:{NFSU2_TR(0x5e846f);
s1(0x82da50,u8(0x1ull));
}
B5e8476:{NFSU2_TR(0x5e8476);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e8479:{NFSU2_TR(0x5e8479);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e847c:{NFSU2_TR(0x5e847c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e847d:{NFSU2_TR(0x5e847d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e847e:{NFSU2_TR(0x5e847e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e847f:{NFSU2_TR(0x5e847f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e8482:{NFSU2_TR(0x5e8482);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e8487ull));
TAIL_STATIC(0x577b10u,577);
}
B5e8487:L5e8487:{c.instructions+=9;NFSU2_TR(0x5e8487);
s1(0x82da50,u8(0x0ull));
}
B5e848e:{NFSU2_TR(0x5e848e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e8491:{NFSU2_TR(0x5e8491);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B5e8494:{NFSU2_TR(0x5e8494);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B5e8495:{NFSU2_TR(0x5e8495);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e8498:{NFSU2_TR(0x5e8498);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e8499:{NFSU2_TR(0x5e8499);
__builtin_memmove((R+4),(R+12),4);
}
B5e849b:{NFSU2_TR(0x5e849b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5e84a2:{NFSU2_TR(0x5e84a2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e84a7ull));
TAIL_STATIC(0x5daac0u,5da);
}
B5e84a7:L5e84a7:{c.instructions+=1;NFSU2_TR(0x5e84a7);
{goto L5e84b6;}
}
B5e84a9:L5e84a9:{c.instructions+=2;NFSU2_TR(0x5e84a9);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5e84ac:{NFSU2_TR(0x5e84ac);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e84b6;}}
}
B5e84ae:L5e84ae:{c.instructions+=3;NFSU2_TR(0x5e84ae);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e84af:{NFSU2_TR(0x5e84af);
__builtin_memmove((R+4),(R+12),4);
}
B5e84b1:{NFSU2_TR(0x5e84b1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e84b6ull));
TAIL_STATIC(0x5daa40u,5da);
}
B5e84b6:L5e84b6:{c.instructions+=7;NFSU2_TR(0x5e84b6);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e84ba:{NFSU2_TR(0x5e84ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x298ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e84c0:{NFSU2_TR(0x5e84c0);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5e84c1:{NFSU2_TR(0x5e84c1);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x4ull))));
}
B5e84c4:{NFSU2_TR(0x5e84c4);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5e84c6:{NFSU2_TR(0x5e84c6);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e84ca:{NFSU2_TR(0x5e84ca);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e8410u);}goto L5e8410;}}
}
B5e84d0:L5e84d0:{c.instructions+=2;NFSU2_TR(0x5e84d0);
__builtin_memmove((R+4),(R+28),4);
}
B5e84d2:{NFSU2_TR(0x5e84d2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e84d7ull));
TAIL_STATIC(0x578d90u,578);
}
B5e84d7:L5e84d7:{c.instructions+=6;NFSU2_TR(0x5e84d7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5e84d8:{NFSU2_TR(0x5e84d8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5e84d9:{NFSU2_TR(0x5e84d9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5e84da:{NFSU2_TR(0x5e84da);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5e84db:{NFSU2_TR(0x5e84db);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5e84dc:{NFSU2_TR(0x5e84dc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5e84df:L5e84df:{c.instructions+=3;NFSU2_TR(0x5e84df);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x298ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+24)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5e84e5:{NFSU2_TR(0x5e84e5);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e84e9:{NFSU2_TR(0x5e84e9);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5e854d;}}
}
B5e84eb:L5e84eb:{c.instructions+=1;NFSU2_TR(0x5e84eb);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x29cull))));
__builtin_memmove((R+24),(U+0),4);
}
B5e84f1:L5e84f1:{c.instructions+=8;NFSU2_TR(0x5e84f1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5e84f3:{NFSU2_TR(0x5e84f3);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B5e84f7:{NFSU2_TR(0x5e84f7);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B5e84f8:{NFSU2_TR(0x5e84f8);
w4(R+20,u32(0x64ull));
}
B5e84fd:{NFSU2_TR(0x5e84fd);
u8 U[56];
w8(U+0,u64(s64(s32(r4(R+20)))));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x5e84fd);w8(U+40,u64(x_/y_));}
w4(R+0,u32(r8(U+40)));
{s64 x_=s64(s64(r8(U+32))),y_=s64(s64(r8(U+0)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x5e84fd);w8(U+48,u64(x_%y_));}
w4(R+8,u32(r8(U+48)));
}
B5e84ff:{NFSU2_TR(0x5e84ff);
w1(R+0,u8(u32(r1(R+0))+u32(u8(0x40ull))));
}
B5e8501:{NFSU2_TR(0x5e8501);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x41ull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x41ull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B5e8503:{NFSU2_TR(0x5e8503);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5e8537;}}
}
B5e8505:L5e8505:{c.instructions+=2;NFSU2_TR(0x5e8505);
u8 U[1];
w1(R+523,sborrow<u8>(r1(R+0),u8(0x54ull)));
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x54ull))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e8507:{NFSU2_TR(0x5e8507);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L5e8537;}}
}
B5e8509:L5e8509:{c.instructions+=3;NFSU2_TR(0x5e8509);
__builtin_memmove((R+0),gp(0x800dfc),4);
}
B5e850e:{NFSU2_TR(0x5e850e);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5e8510:{NFSU2_TR(0x5e8510);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5e8537;}}
}
B5e8512:L5e8512:{c.instructions+=3;NFSU2_TR(0x5e8512);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+0))));
}
B5e8514:{NFSU2_TR(0x5e8514);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5e8516:{NFSU2_TR(0x5e8516);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5e8537;}}
}
B5e8518:L5e8518:{c.instructions+=11;NFSU2_TR(0x5e8518);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e851b:{NFSU2_TR(0x5e851b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e851d:{NFSU2_TR(0x5e851d);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5e8520:{NFSU2_TR(0x5e8520);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e8522:{NFSU2_TR(0x5e8522);
__builtin_memmove((R+4),(R+518),1);
}
B5e8525:{NFSU2_TR(0x5e8525);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e8527:{NFSU2_TR(0x5e8527);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5e852b:{NFSU2_TR(0x5e852b);
u8 U[5];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5e852f:{NFSU2_TR(0x5e852f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e8530:{NFSU2_TR(0x5e8530);
__builtin_memmove((R+4),(R+28),4);
}
B5e8532:{NFSU2_TR(0x5e8532);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e8537ull));
TAIL_STATIC(0x571640u,571);
}
B5e8537:L5e8537:{c.instructions+=7;NFSU2_TR(0x5e8537);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e853b:{NFSU2_TR(0x5e853b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x298ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e8541:{NFSU2_TR(0x5e8541);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5e8542:{NFSU2_TR(0x5e8542);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B5e8545:{NFSU2_TR(0x5e8545);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5e8547:{NFSU2_TR(0x5e8547);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e854b:{NFSU2_TR(0x5e854b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e84f1u);}goto L5e84f1;}}
}
B5e854d:L5e854d:{c.instructions+=2;NFSU2_TR(0x5e854d);
__builtin_memmove((R+4),(R+28),4);
}
B5e854f:{NFSU2_TR(0x5e854f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e8554ull));
TAIL_STATIC(0x578d90u,578);
}
B5e8554:L5e8554:{c.instructions+=6;NFSU2_TR(0x5e8554);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5e8555:{NFSU2_TR(0x5e8555);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5e8556:{NFSU2_TR(0x5e8556);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5e8557:{NFSU2_TR(0x5e8557);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5e8558:{NFSU2_TR(0x5e8558);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5e8559:{NFSU2_TR(0x5e8559);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5e8560:L5e8560:{c.instructions+=5;NFSU2_TR(0x5e8560);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e8561:{NFSU2_TR(0x5e8561);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e8562:{NFSU2_TR(0x5e8562);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e8564:{NFSU2_TR(0x5e8564);
__builtin_memmove((R+28),(R+4),4);
}
B5e8566:{NFSU2_TR(0x5e8566);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e856bull));
TAIL_STATIC(0x43e910u,43e);
}
B5e856b:L5e856b:{c.instructions+=4;NFSU2_TR(0x5e856b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5e856f:{NFSU2_TR(0x5e856f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5e8572:{NFSU2_TR(0x5e8572);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(R+20))<(r4(U+6))));
w1(R+523,sborrow<u32>(r4(R+20),r4(U+6)));
w4(U+10,u32(u32(r4(R+20))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5e8574:{NFSU2_TR(0x5e8574);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L5e857d;}}
}
B5e8576:L5e8576:{c.instructions+=4;NFSU2_TR(0x5e8576);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5e8577:{NFSU2_TR(0x5e8577);
w1(R+0,u8(0x1ull));
}
B5e8579:{NFSU2_TR(0x5e8579);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5e857a:{NFSU2_TR(0x5e857a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5e857d:L5e857d:{c.instructions+=3;NFSU2_TR(0x5e857d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e857e:{NFSU2_TR(0x5e857e);
__builtin_memmove((R+4),(R+28),4);
}
B5e8580:{NFSU2_TR(0x5e8580);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e8585ull));
TAIL_STATIC(0x5e79d0u,5e7);
}
B5e8585:L5e8585:{c.instructions+=2;NFSU2_TR(0x5e8585);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e8587:{NFSU2_TR(0x5e8587);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e858cull));
TAIL_STATIC(0x43e8e0u,43e);
}
B5e858c:L5e858c:{c.instructions+=4;NFSU2_TR(0x5e858c);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5e8590:{NFSU2_TR(0x5e8590);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5e8593:{NFSU2_TR(0x5e8593);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+20),r4(U+0)));
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5e8595:{NFSU2_TR(0x5e8595);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5e85fe;}}
}
B5e8597:L5e8597:{c.instructions+=1;NFSU2_TR(0x5e8597);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e8598:L5e8598:{c.instructions+=4;NFSU2_TR(0x5e8598);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e859b:{NFSU2_TR(0x5e859b);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5e859d:{NFSU2_TR(0x5e859d);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e859f:{NFSU2_TR(0x5e859f);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5e85d7;}}
}
B5e85a1:L5e85a1:{c.instructions+=1;NFSU2_TR(0x5e85a1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5e85a3:L5e85a3:{c.instructions+=2;NFSU2_TR(0x5e85a3);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5e85a7:{NFSU2_TR(0x5e85a7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e85be;}}
}
B5e85a9:L5e85a9:{c.instructions+=3;NFSU2_TR(0x5e85a9);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xbull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B5e85ac:{NFSU2_TR(0x5e85ac);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e85ae:{NFSU2_TR(0x5e85ae);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e85be;}}
}
B5e85b0:L5e85b0:{c.instructions+=2;NFSU2_TR(0x5e85b0);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e85b2:{NFSU2_TR(0x5e85b2);
if(r1(R+518)){{goto L5e85bc;}}
}
B5e85b4:L5e85b4:{c.instructions+=3;NFSU2_TR(0x5e85b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5e85b7:{NFSU2_TR(0x5e85b7);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+8)));
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B5e85ba:{NFSU2_TR(0x5e85ba);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5e85be;}}
}
B5e85bc:L5e85bc:{c.instructions+=1;NFSU2_TR(0x5e85bc);
__builtin_memmove((R+24),(R+0),4);
}
B5e85be:L5e85be:{c.instructions+=3;NFSU2_TR(0x5e85be);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x50ull))));
}
B5e85c1:{NFSU2_TR(0x5e85c1);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B5e85c2:{NFSU2_TR(0x5e85c2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e85a3u);}goto L5e85a3;}}
}
B5e85c4:L5e85c4:{c.instructions+=2;NFSU2_TR(0x5e85c4);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e85c6:{NFSU2_TR(0x5e85c6);
if(r1(R+518)){{goto L5e85d7;}}
}
B5e85c8:L5e85c8:{c.instructions+=3;NFSU2_TR(0x5e85c8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e85c9:{NFSU2_TR(0x5e85c9);
__builtin_memmove((R+4),(R+28),4);
}
B5e85cb:{NFSU2_TR(0x5e85cb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e85d0ull));
TAIL_STATIC(0x5daac0u,5da);
}
B5e85d0:L5e85d0:{c.instructions+=3;NFSU2_TR(0x5e85d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e85d3:{NFSU2_TR(0x5e85d3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e85d5:{NFSU2_TR(0x5e85d5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e85ef;}}
}
B5e85d7:L5e85d7:{c.instructions+=2;NFSU2_TR(0x5e85d7);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e85d9:{NFSU2_TR(0x5e85d9);
if(r1(R+518)){{goto L5e85fd;}}
}
B5e85db:L5e85db:{c.instructions+=3;NFSU2_TR(0x5e85db);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e85dc:{NFSU2_TR(0x5e85dc);
__builtin_memmove((R+4),(R+28),4);
}
B5e85de:{NFSU2_TR(0x5e85de);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e85e3ull));
TAIL_STATIC(0x5d5eb0u,5d5);
}
B5e85e3:L5e85e3:{c.instructions+=2;NFSU2_TR(0x5e85e3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e85e5:{NFSU2_TR(0x5e85e5);
if(r1(R+518)){{goto L5e85fd;}}
}
B5e85e7:L5e85e7:{c.instructions+=3;NFSU2_TR(0x5e85e7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e85e8:{NFSU2_TR(0x5e85e8);
__builtin_memmove((R+4),(R+28),4);
}
B5e85ea:{NFSU2_TR(0x5e85ea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e85efull));
TAIL_STATIC(0x5df120u,5df);
}
B5e85ef:L5e85ef:{c.instructions+=2;NFSU2_TR(0x5e85ef);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e85f1:{NFSU2_TR(0x5e85f1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e85f6ull));
TAIL_STATIC(0x43e8e0u,43e);
}
B5e85f6:L5e85f6:{c.instructions+=3;NFSU2_TR(0x5e85f6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5e85f9:{NFSU2_TR(0x5e85f9);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+20),r4(U+0)));
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5e85fb:{NFSU2_TR(0x5e85fb);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e8598u);}goto L5e8598;}}
}
B5e85fd:L5e85fd:{c.instructions+=1;NFSU2_TR(0x5e85fd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5e85fe:L5e85fe:{c.instructions+=2;NFSU2_TR(0x5e85fe);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e8600:{NFSU2_TR(0x5e8600);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e8605ull));
TAIL_STATIC(0x43e910u,43e);
}
B5e8605:L5e8605:{c.instructions+=3;NFSU2_TR(0x5e8605);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5e8608:{NFSU2_TR(0x5e8608);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(R+20))<(r4(U+6))));
w1(R+523,sborrow<u32>(r4(R+20),r4(U+6)));
w4(U+10,u32(u32(r4(R+20))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5e860a:{NFSU2_TR(0x5e860a);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5e8641;}}
}
B5e860c:L5e860c:{c.instructions+=1;NFSU2_TR(0x5e860c);
__builtin_memmove((R+16),(R+16),4);
}
B5e8610:L5e8610:{c.instructions+=2;NFSU2_TR(0x5e8610);
__builtin_memmove((R+4),(R+28),4);
}
B5e8612:{NFSU2_TR(0x5e8612);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e8617ull));
TAIL_STATIC(0x5dac00u,5da);
}
B5e8617:L5e8617:{c.instructions+=2;NFSU2_TR(0x5e8617);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e8619:{NFSU2_TR(0x5e8619);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e8633;}}
}
B5e861b:L5e861b:{c.instructions+=2;NFSU2_TR(0x5e861b);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e861d:{NFSU2_TR(0x5e861d);
if(r1(R+518)){{goto L5e8649;}}
}
B5e861f:L5e861f:{c.instructions+=3;NFSU2_TR(0x5e861f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e8620:{NFSU2_TR(0x5e8620);
__builtin_memmove((R+4),(R+28),4);
}
B5e8622:{NFSU2_TR(0x5e8622);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e8627ull));
TAIL_STATIC(0x5d5eb0u,5d5);
}
B5e8627:L5e8627:{c.instructions+=2;NFSU2_TR(0x5e8627);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e8629:{NFSU2_TR(0x5e8629);
if(r1(R+518)){{goto L5e8649;}}
}
B5e862b:L5e862b:{c.instructions+=3;NFSU2_TR(0x5e862b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e862c:{NFSU2_TR(0x5e862c);
__builtin_memmove((R+4),(R+28),4);
}
B5e862e:{NFSU2_TR(0x5e862e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e8633ull));
TAIL_STATIC(0x5df120u,5df);
}
B5e8633:L5e8633:{c.instructions+=2;NFSU2_TR(0x5e8633);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e8635:{NFSU2_TR(0x5e8635);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e863aull));
TAIL_STATIC(0x43e910u,43e);
}
B5e863a:L5e863a:{c.instructions+=3;NFSU2_TR(0x5e863a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5e863d:{NFSU2_TR(0x5e863d);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(R+20))<(r4(U+6))));
w1(R+523,sborrow<u32>(r4(R+20),r4(U+6)));
w4(U+10,u32(u32(r4(R+20))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5e863f:{NFSU2_TR(0x5e863f);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e8610u);}goto L5e8610;}}
}
B5e8641:L5e8641:{c.instructions+=5;NFSU2_TR(0x5e8641);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5e8642:{NFSU2_TR(0x5e8642);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5e8643:{NFSU2_TR(0x5e8643);
w1(R+0,u8(0x1ull));
}
B5e8645:{NFSU2_TR(0x5e8645);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5e8646:{NFSU2_TR(0x5e8646);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5e8649:L5e8649:{c.instructions+=5;NFSU2_TR(0x5e8649);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5e864a:{NFSU2_TR(0x5e864a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5e864b:{NFSU2_TR(0x5e864b);
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
B5e864d:{NFSU2_TR(0x5e864d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5e864e:{NFSU2_TR(0x5e864e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5e8660:L5e8660:{c.instructions+=4;NFSU2_TR(0x5e8660);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e8664:{NFSU2_TR(0x5e8664);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e8665:{NFSU2_TR(0x5e8665);
w4(R+4,u32(0x88f768ull));
}
B5e866a:{NFSU2_TR(0x5e866a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e866full));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e8210u);}goto L5e8210;}
}
B5e866f:L5e866f:{c.instructions+=1;NFSU2_TR(0x5e866f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5e8670:L5e8670:{c.instructions+=5;NFSU2_TR(0x5e8670);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e8671:{NFSU2_TR(0x5e8671);
__builtin_memmove((R+24),(R+4),4);
}
B5e8673:{NFSU2_TR(0x5e8673);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x69cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e8679:{NFSU2_TR(0x5e8679);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e867b:{NFSU2_TR(0x5e867b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e8683;}}
}
B5e867d:L5e867d:{c.instructions+=3;NFSU2_TR(0x5e867d);
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
B5e867f:{NFSU2_TR(0x5e867f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5e8680:{NFSU2_TR(0x5e8680);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5e8683:L5e8683:{c.instructions+=5;NFSU2_TR(0x5e8683);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6a8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e8689:{NFSU2_TR(0x5e8689);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e868b:{NFSU2_TR(0x5e868b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e868c:{NFSU2_TR(0x5e868c);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5e8690:{NFSU2_TR(0x5e8690);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e869c;}}
}
B5e8692:L5e8692:{c.instructions+=4;NFSU2_TR(0x5e8692);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e8694:{NFSU2_TR(0x5e8694);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e8695:{NFSU2_TR(0x5e8695);
__builtin_memmove((R+4),(R+24),4);
}
B5e8697:{NFSU2_TR(0x5e8697);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e869cull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e8560u);}goto L5e8560;}
}
B5e869c:L5e869c:{c.instructions+=2;NFSU2_TR(0x5e869c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e869e:{NFSU2_TR(0x5e869e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e86a3ull));
TAIL_STATIC(0x43e910u,43e);
}
B5e86a3:L5e86a3:{c.instructions+=3;NFSU2_TR(0x5e86a3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5e86a6:{NFSU2_TR(0x5e86a6);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5e86a8:{NFSU2_TR(0x5e86a8);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5e86b1;}}
}
B5e86aa:L5e86aa:{c.instructions+=4;NFSU2_TR(0x5e86aa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5e86ab:{NFSU2_TR(0x5e86ab);
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
B5e86ad:{NFSU2_TR(0x5e86ad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5e86ae:{NFSU2_TR(0x5e86ae);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5e86b1:L5e86b1:{c.instructions+=7;NFSU2_TR(0x5e86b1);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e86b5:{NFSU2_TR(0x5e86b5);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x1ffcull))));
}
B5e86ba:{NFSU2_TR(0x5e86ba);
u8 U[4];
w4(U+0,u32(u32(u32(0x11ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B5e86bd:{NFSU2_TR(0x5e86bd);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x2001ull))));
}
B5e86c2:{NFSU2_TR(0x5e86c2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e86c3:{NFSU2_TR(0x5e86c3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e86c4:{NFSU2_TR(0x5e86c4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e86c9ull));
TAIL_STATIC(0x440820u,440);
}
B5e86c9:L5e86c9:{c.instructions+=7;NFSU2_TR(0x5e86c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6a8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e86cf:{NFSU2_TR(0x5e86cf);
w1(R+512,carry<u32>(r4(R+16),u32(0x8ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5e86d2:{NFSU2_TR(0x5e86d2);
u8 U[6];
w1(R+523,scarry<u32>(r4(R+4),u32(0x1ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5e86d3:{NFSU2_TR(0x5e86d3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5e86d4:{NFSU2_TR(0x5e86d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6a8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e86da:{NFSU2_TR(0x5e86da);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5e86db:{NFSU2_TR(0x5e86db);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5e86e0:L5e86e0:{c.instructions+=4;NFSU2_TR(0x5e86e0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e86e1:{NFSU2_TR(0x5e86e1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e86e2:{NFSU2_TR(0x5e86e2);
__builtin_memmove((R+24),(R+4),4);
}
B5e86e4:{NFSU2_TR(0x5e86e4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e86e9ull));
TAIL_STATIC(0x57a1a0u,57a);
}
B5e86e9:L5e86e9:{c.instructions+=4;NFSU2_TR(0x5e86e9);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5e86eb:{NFSU2_TR(0x5e86eb);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x289ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5e86f1:{NFSU2_TR(0x5e86f1);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e86f3:{NFSU2_TR(0x5e86f3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e871b;}}
}
B5e86f5:L5e86f5:{c.instructions+=3;NFSU2_TR(0x5e86f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x69cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e86fb:{NFSU2_TR(0x5e86fb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e86fd:{NFSU2_TR(0x5e86fd);
if(r1(R+518)){{goto L5e871b;}}
}
B5e86ff:L5e86ff:{c.instructions+=4;NFSU2_TR(0x5e86ff);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5e8703:{NFSU2_TR(0x5e8703);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e8704:{NFSU2_TR(0x5e8704);
__builtin_memmove((R+4),(R+24),4);
}
B5e8706:{NFSU2_TR(0x5e8706);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e870bull));
TAIL_STATIC(0x5e5300u,5e5);
}
B5e870b:L5e870b:{c.instructions+=2;NFSU2_TR(0x5e870b);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e870d:{NFSU2_TR(0x5e870d);
if(r1(R+518)){{goto L5e871b;}}
}
B5e870f:L5e870f:{c.instructions+=4;NFSU2_TR(0x5e870f);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5e8713:{NFSU2_TR(0x5e8713);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e8714:{NFSU2_TR(0x5e8714);
__builtin_memmove((R+4),(R+24),4);
}
B5e8716:{NFSU2_TR(0x5e8716);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e871bull));
TAIL_STATIC(0x5e7af0u,5e7);
}
B5e871b:L5e871b:{c.instructions+=2;NFSU2_TR(0x5e871b);
__builtin_memmove((R+4),(R+24),4);
}
B5e871d:{NFSU2_TR(0x5e871d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e8722ull));
TAIL_STATIC(0x5e6c10u,5e6);
}
B5e8722:L5e8722:{c.instructions+=1;NFSU2_TR(0x5e8722);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e8727ull));
TAIL_STATIC(0x57a1a0u,57a);
}
B5e8727:L5e8727:{c.instructions+=4;NFSU2_TR(0x5e8727);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5e8729:{NFSU2_TR(0x5e8729);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5e872a:{NFSU2_TR(0x5e872a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5e872b:{NFSU2_TR(0x5e872b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5e8730:L5e8730:{c.instructions+=10;NFSU2_TR(0x5e8730);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e8731:{NFSU2_TR(0x5e8731);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B5e8734:{NFSU2_TR(0x5e8734);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e8735:{NFSU2_TR(0x5e8735);
__builtin_memmove((R+24),(R+4),4);
}
B5e8737:{NFSU2_TR(0x5e8737);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x288ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5e873e:{NFSU2_TR(0x5e873e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xccull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e8744:{NFSU2_TR(0x5e8744);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x128ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e874a:{NFSU2_TR(0x5e874a);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x289ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5e8750:{NFSU2_TR(0x5e8750);
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
B5e8752:{NFSU2_TR(0x5e8752);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e8778;}}
}
B5e8754:L5e8754:{c.instructions+=3;NFSU2_TR(0x5e8754);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x69cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e875a:{NFSU2_TR(0x5e875a);
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
B5e875c:{NFSU2_TR(0x5e875c);
if(r1(R+518)){{goto L5e8778;}}
}
B5e875e:L5e875e:{c.instructions+=3;NFSU2_TR(0x5e875e);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5e8762:{NFSU2_TR(0x5e8762);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e8763:{NFSU2_TR(0x5e8763);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e8768ull));
TAIL_STATIC(0x5e5300u,5e5);
}
B5e8768:L5e8768:{c.instructions+=2;NFSU2_TR(0x5e8768);
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
B5e876a:{NFSU2_TR(0x5e876a);
if(r1(R+518)){{goto L5e8778;}}
}
B5e876c:L5e876c:{c.instructions+=4;NFSU2_TR(0x5e876c);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5e8770:{NFSU2_TR(0x5e8770);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e8771:{NFSU2_TR(0x5e8771);
__builtin_memmove((R+4),(R+24),4);
}
B5e8773:{NFSU2_TR(0x5e8773);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e8778ull));
TAIL_STATIC(0x5e7af0u,5e7);
}
B5e8778:L5e8778:{c.instructions+=3;NFSU2_TR(0x5e8778);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5e8779:{NFSU2_TR(0x5e8779);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5e877a:{NFSU2_TR(0x5e877a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5e8780:L5e8780:{c.instructions+=11;NFSU2_TR(0x5e8780);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x30ull))));
}
B5e8783:{NFSU2_TR(0x5e8783);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e8784:{NFSU2_TR(0x5e8784);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e8785:{NFSU2_TR(0x5e8785);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e8786:{NFSU2_TR(0x5e8786);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5e8788:{NFSU2_TR(0x5e8788);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e8789:{NFSU2_TR(0x5e8789);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e878d:{NFSU2_TR(0x5e878d);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e8791:{NFSU2_TR(0x5e8791);
w4(R+20,u32(0x2ull));
}
B5e8796:{NFSU2_TR(0x5e8796);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5e8799:{NFSU2_TR(0x5e8799);
__builtin_memmove((R+16),(R+16),4);
}
B5e87a0:L5e87a0:{c.instructions+=3;NFSU2_TR(0x5e87a0);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffeull))));
__builtin_memmove((R+0),(U+0),4);
}
B5e87a3:{NFSU2_TR(0x5e87a3);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5e87a5:{NFSU2_TR(0x5e87a5);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5e87c9;}}
}
B5e87a7:L5e87a7:{c.instructions+=3;NFSU2_TR(0x5e87a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e87aa:{NFSU2_TR(0x5e87aa);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e87ac:{NFSU2_TR(0x5e87ac);
if(r1(R+518)){{goto L5e87c9;}}
}
B5e87ae:L5e87ae:{c.instructions+=5;NFSU2_TR(0x5e87ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e87b1:{NFSU2_TR(0x5e87b1);
__builtin_memmove((R+8),(R+4),4);
}
B5e87b3:{NFSU2_TR(0x5e87b3);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B5e87b6:{NFSU2_TR(0x5e87b6);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e87b9:{NFSU2_TR(0x5e87b9);
if(r1(R+518)){{goto L5e87c9;}}
}
B5e87bb:L5e87bb:{c.instructions+=3;NFSU2_TR(0x5e87bb);
u8 U[4];
w4(U+0,u32(u32(u32(0x9ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B5e87be:{NFSU2_TR(0x5e87be);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e87c1:{NFSU2_TR(0x5e87c1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e87c9;}}
}
B5e87c3:L5e87c3:{c.instructions+=2;NFSU2_TR(0x5e87c3);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B5e87c7:{NFSU2_TR(0x5e87c7);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+0))));
}
B5e87c9:L5e87c9:{c.instructions+=3;NFSU2_TR(0x5e87c9);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffffull))));
__builtin_memmove((R+4),(U+0),4);
}
B5e87cc:{NFSU2_TR(0x5e87cc);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5e87ce:{NFSU2_TR(0x5e87ce);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5e87f1;}}
}
B5e87d0:L5e87d0:{c.instructions+=3;NFSU2_TR(0x5e87d0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5e87d2:{NFSU2_TR(0x5e87d2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e87d4:{NFSU2_TR(0x5e87d4);
if(r1(R+518)){{goto L5e87f1;}}
}
B5e87d6:L5e87d6:{c.instructions+=5;NFSU2_TR(0x5e87d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e87d9:{NFSU2_TR(0x5e87d9);
__builtin_memmove((R+8),(R+4),4);
}
B5e87db:{NFSU2_TR(0x5e87db);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B5e87de:{NFSU2_TR(0x5e87de);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e87e1:{NFSU2_TR(0x5e87e1);
if(r1(R+518)){{goto L5e87f1;}}
}
B5e87e3:L5e87e3:{c.instructions+=3;NFSU2_TR(0x5e87e3);
u8 U[4];
w4(U+0,u32(u32(u32(0x9ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B5e87e6:{NFSU2_TR(0x5e87e6);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e87e9:{NFSU2_TR(0x5e87e9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e87f1;}}
}
B5e87eb:L5e87eb:{c.instructions+=2;NFSU2_TR(0x5e87eb);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B5e87ef:{NFSU2_TR(0x5e87ef);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+0))));
}
B5e87f1:L5e87f1:{c.instructions+=2;NFSU2_TR(0x5e87f1);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5e87f3:{NFSU2_TR(0x5e87f3);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5e8817;}}
}
B5e87f5:L5e87f5:{c.instructions+=3;NFSU2_TR(0x5e87f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e87f8:{NFSU2_TR(0x5e87f8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e87fa:{NFSU2_TR(0x5e87fa);
if(r1(R+518)){{goto L5e8817;}}
}
B5e87fc:L5e87fc:{c.instructions+=5;NFSU2_TR(0x5e87fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e87ff:{NFSU2_TR(0x5e87ff);
__builtin_memmove((R+8),(R+4),4);
}
B5e8801:{NFSU2_TR(0x5e8801);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B5e8804:{NFSU2_TR(0x5e8804);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e8807:{NFSU2_TR(0x5e8807);
if(r1(R+518)){{goto L5e8817;}}
}
B5e8809:L5e8809:{c.instructions+=3;NFSU2_TR(0x5e8809);
u8 U[4];
w4(U+0,u32(u32(u32(0x9ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B5e880c:{NFSU2_TR(0x5e880c);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e880f:{NFSU2_TR(0x5e880f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e8817;}}
}
B5e8811:L5e8811:{c.instructions+=2;NFSU2_TR(0x5e8811);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B5e8815:{NFSU2_TR(0x5e8815);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+0))));
}
B5e8817:L5e8817:{c.instructions+=3;NFSU2_TR(0x5e8817);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x1ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5e881a:{NFSU2_TR(0x5e881a);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5e881c:{NFSU2_TR(0x5e881c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5e8840;}}
}
B5e881e:L5e881e:{c.instructions+=3;NFSU2_TR(0x5e881e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e8821:{NFSU2_TR(0x5e8821);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e8823:{NFSU2_TR(0x5e8823);
if(r1(R+518)){{goto L5e8840;}}
}
B5e8825:L5e8825:{c.instructions+=5;NFSU2_TR(0x5e8825);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e8828:{NFSU2_TR(0x5e8828);
__builtin_memmove((R+8),(R+4),4);
}
B5e882a:{NFSU2_TR(0x5e882a);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B5e882d:{NFSU2_TR(0x5e882d);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e8830:{NFSU2_TR(0x5e8830);
if(r1(R+518)){{goto L5e8840;}}
}
B5e8832:L5e8832:{c.instructions+=3;NFSU2_TR(0x5e8832);
u8 U[4];
w4(U+0,u32(u32(u32(0x9ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B5e8835:{NFSU2_TR(0x5e8835);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e8838:{NFSU2_TR(0x5e8838);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e8840;}}
}
B5e883a:L5e883a:{c.instructions+=2;NFSU2_TR(0x5e883a);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B5e883e:{NFSU2_TR(0x5e883e);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+0))));
}
B5e8840:L5e8840:{c.instructions+=3;NFSU2_TR(0x5e8840);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x2ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5e8843:{NFSU2_TR(0x5e8843);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5e8845:{NFSU2_TR(0x5e8845);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5e8869;}}
}
B5e8847:L5e8847:{c.instructions+=3;NFSU2_TR(0x5e8847);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e884a:{NFSU2_TR(0x5e884a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e884c:{NFSU2_TR(0x5e884c);
if(r1(R+518)){{goto L5e8869;}}
}
B5e884e:L5e884e:{c.instructions+=5;NFSU2_TR(0x5e884e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e8851:{NFSU2_TR(0x5e8851);
__builtin_memmove((R+8),(R+4),4);
}
B5e8853:{NFSU2_TR(0x5e8853);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B5e8856:{NFSU2_TR(0x5e8856);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e8859:{NFSU2_TR(0x5e8859);
if(r1(R+518)){{goto L5e8869;}}
}
B5e885b:L5e885b:{c.instructions+=3;NFSU2_TR(0x5e885b);
u8 U[4];
w4(U+0,u32(u32(u32(0x9ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B5e885e:{NFSU2_TR(0x5e885e);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e8861:{NFSU2_TR(0x5e8861);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e8869;}}
}
B5e8863:L5e8863:{c.instructions+=2;NFSU2_TR(0x5e8863);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B5e8867:{NFSU2_TR(0x5e8867);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+0))));
}
B5e8869:L5e8869:{c.instructions+=3;NFSU2_TR(0x5e8869);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x3ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5e886c:{NFSU2_TR(0x5e886c);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5e886e:{NFSU2_TR(0x5e886e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5e8892;}}
}
B5e8870:L5e8870:{c.instructions+=3;NFSU2_TR(0x5e8870);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e8873:{NFSU2_TR(0x5e8873);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e8875:{NFSU2_TR(0x5e8875);
if(r1(R+518)){{goto L5e8892;}}
}
B5e8877:L5e8877:{c.instructions+=5;NFSU2_TR(0x5e8877);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e887a:{NFSU2_TR(0x5e887a);
__builtin_memmove((R+8),(R+4),4);
}
B5e887c:{NFSU2_TR(0x5e887c);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B5e887f:{NFSU2_TR(0x5e887f);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e8882:{NFSU2_TR(0x5e8882);
if(r1(R+518)){{goto L5e8892;}}
}
B5e8884:L5e8884:{c.instructions+=3;NFSU2_TR(0x5e8884);
u8 U[4];
w4(U+0,u32(u32(u32(0x9ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B5e8887:{NFSU2_TR(0x5e8887);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e888a:{NFSU2_TR(0x5e888a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e8892;}}
}
B5e888c:L5e888c:{c.instructions+=2;NFSU2_TR(0x5e888c);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B5e8890:{NFSU2_TR(0x5e8890);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+0))));
}
B5e8892:L5e8892:{c.instructions+=3;NFSU2_TR(0x5e8892);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5e8895:{NFSU2_TR(0x5e8895);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5e8897:{NFSU2_TR(0x5e8897);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5e88bb;}}
}
B5e8899:L5e8899:{c.instructions+=3;NFSU2_TR(0x5e8899);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e889c:{NFSU2_TR(0x5e889c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e889e:{NFSU2_TR(0x5e889e);
if(r1(R+518)){{goto L5e88bb;}}
}
B5e88a0:L5e88a0:{c.instructions+=5;NFSU2_TR(0x5e88a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e88a3:{NFSU2_TR(0x5e88a3);
__builtin_memmove((R+8),(R+4),4);
}
B5e88a5:{NFSU2_TR(0x5e88a5);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B5e88a8:{NFSU2_TR(0x5e88a8);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e88ab:{NFSU2_TR(0x5e88ab);
if(r1(R+518)){{goto L5e88bb;}}
}
B5e88ad:L5e88ad:{c.instructions+=3;NFSU2_TR(0x5e88ad);
u8 U[4];
w4(U+0,u32(u32(u32(0x9ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B5e88b0:{NFSU2_TR(0x5e88b0);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e88b3:{NFSU2_TR(0x5e88b3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e88bb;}}
}
B5e88b5:L5e88b5:{c.instructions+=2;NFSU2_TR(0x5e88b5);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B5e88b9:{NFSU2_TR(0x5e88b9);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+0))));
}
B5e88bb:L5e88bb:{c.instructions+=3;NFSU2_TR(0x5e88bb);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x5ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5e88be:{NFSU2_TR(0x5e88be);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5e88c0:{NFSU2_TR(0x5e88c0);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5e88e4;}}
}
B5e88c2:L5e88c2:{c.instructions+=3;NFSU2_TR(0x5e88c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e88c5:{NFSU2_TR(0x5e88c5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e88c7:{NFSU2_TR(0x5e88c7);
if(r1(R+518)){{goto L5e88e4;}}
}
B5e88c9:L5e88c9:{c.instructions+=5;NFSU2_TR(0x5e88c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e88cc:{NFSU2_TR(0x5e88cc);
__builtin_memmove((R+8),(R+4),4);
}
B5e88ce:{NFSU2_TR(0x5e88ce);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B5e88d1:{NFSU2_TR(0x5e88d1);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e88d4:{NFSU2_TR(0x5e88d4);
if(r1(R+518)){{goto L5e88e4;}}
}
B5e88d6:L5e88d6:{c.instructions+=3;NFSU2_TR(0x5e88d6);
u8 U[4];
w4(U+0,u32(u32(u32(0x9ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B5e88d9:{NFSU2_TR(0x5e88d9);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e88dc:{NFSU2_TR(0x5e88dc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e88e4;}}
}
B5e88de:L5e88de:{c.instructions+=2;NFSU2_TR(0x5e88de);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B5e88e2:{NFSU2_TR(0x5e88e2);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+0))));
}
B5e88e4:L5e88e4:{c.instructions+=3;NFSU2_TR(0x5e88e4);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x6ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5e88e7:{NFSU2_TR(0x5e88e7);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5e88e9:{NFSU2_TR(0x5e88e9);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5e890d;}}
}
B5e88eb:L5e88eb:{c.instructions+=3;NFSU2_TR(0x5e88eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e88ee:{NFSU2_TR(0x5e88ee);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e88f0:{NFSU2_TR(0x5e88f0);
if(r1(R+518)){{goto L5e890d;}}
}
B5e88f2:L5e88f2:{c.instructions+=5;NFSU2_TR(0x5e88f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e88f5:{NFSU2_TR(0x5e88f5);
__builtin_memmove((R+8),(R+4),4);
}
B5e88f7:{NFSU2_TR(0x5e88f7);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B5e88fa:{NFSU2_TR(0x5e88fa);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e88fd:{NFSU2_TR(0x5e88fd);
if(r1(R+518)){{goto L5e890d;}}
}
B5e88ff:L5e88ff:{c.instructions+=3;NFSU2_TR(0x5e88ff);
u8 U[4];
w4(U+0,u32(u32(u32(0x9ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B5e8902:{NFSU2_TR(0x5e8902);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e8905:{NFSU2_TR(0x5e8905);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e890d;}}
}
B5e8907:L5e8907:{c.instructions+=2;NFSU2_TR(0x5e8907);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B5e890b:{NFSU2_TR(0x5e890b);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+0))));
}
B5e890d:L5e890d:{c.instructions+=3;NFSU2_TR(0x5e890d);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x7ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5e8910:{NFSU2_TR(0x5e8910);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5e8912:{NFSU2_TR(0x5e8912);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5e8936;}}
}
B5e8914:L5e8914:{c.instructions+=3;NFSU2_TR(0x5e8914);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e8917:{NFSU2_TR(0x5e8917);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e8919:{NFSU2_TR(0x5e8919);
if(r1(R+518)){{goto L5e8936;}}
}
B5e891b:L5e891b:{c.instructions+=5;NFSU2_TR(0x5e891b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e891e:{NFSU2_TR(0x5e891e);
__builtin_memmove((R+8),(R+4),4);
}
B5e8920:{NFSU2_TR(0x5e8920);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B5e8923:{NFSU2_TR(0x5e8923);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e8926:{NFSU2_TR(0x5e8926);
if(r1(R+518)){{goto L5e8936;}}
}
B5e8928:L5e8928:{c.instructions+=3;NFSU2_TR(0x5e8928);
u8 U[4];
w4(U+0,u32(u32(u32(0x9ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B5e892b:{NFSU2_TR(0x5e892b);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e892e:{NFSU2_TR(0x5e892e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e8936;}}
}
B5e8930:L5e8930:{c.instructions+=2;NFSU2_TR(0x5e8930);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B5e8934:{NFSU2_TR(0x5e8934);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+0))));
}
B5e8936:L5e8936:{c.instructions+=5;NFSU2_TR(0x5e8936);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0xaull))));
}
B5e8939:{NFSU2_TR(0x5e8939);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffeull))));
__builtin_memmove((R+4),(U+0),4);
}
B5e893c:{NFSU2_TR(0x5e893c);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x28ull))));
}
B5e893f:{NFSU2_TR(0x5e893f);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x5dcull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5dcull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5e8945:{NFSU2_TR(0x5e8945);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e87a0u);}goto L5e87a0;}}
}
B5e894b:L5e894b:{c.instructions+=9;NFSU2_TR(0x5e894b);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e894f:{NFSU2_TR(0x5e894f);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(u32(0x190ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B5e8955:{NFSU2_TR(0x5e8955);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e8957:{NFSU2_TR(0x5e8957);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1770ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5e895d:{NFSU2_TR(0x5e895d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e895e:{NFSU2_TR(0x5e895e);
w4(R+4,u32(0x88eb00ull));
}
B5e8963:{NFSU2_TR(0x5e8963);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B5e8965:{NFSU2_TR(0x5e8965);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B5e8967:{NFSU2_TR(0x5e8967);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e896cull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e8560u);}goto L5e8560;}
}
B5e896c:L5e896c:{c.instructions+=2;NFSU2_TR(0x5e896c);
u8 U[8];
__builtin_memmove((U+0),gp(0x88f19c),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+20))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5e8972:{NFSU2_TR(0x5e8972);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e897f;}}
}
B5e8974:L5e8974:{c.instructions+=3;NFSU2_TR(0x5e8974);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e8978:{NFSU2_TR(0x5e8978);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5e897a:{NFSU2_TR(0x5e897a);
{goto L5e8a20;}
}
B5e897f:L5e897f:{c.instructions+=2;NFSU2_TR(0x5e897f);
u8 U[8];
__builtin_memmove((U+0),gp(0x88f1a8),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+20))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5e8985:{NFSU2_TR(0x5e8985);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e8997;}}
}
B5e8987:L5e8987:{c.instructions+=4;NFSU2_TR(0x5e8987);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e8988:{NFSU2_TR(0x5e8988);
u8 U[4];
w4(U+0,u32(0x1770ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e898d:{NFSU2_TR(0x5e898d);
w4(R+4,u32(0x88eb00ull));
}
B5e8992:{NFSU2_TR(0x5e8992);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e8997ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e8560u);}goto L5e8560;}
}
B5e8997:L5e8997:{c.instructions+=2;NFSU2_TR(0x5e8997);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e8999:{NFSU2_TR(0x5e8999);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e899eull));
TAIL_STATIC(0x43e910u,43e);
}
B5e899e:L5e899e:{c.instructions+=3;NFSU2_TR(0x5e899e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5e89a1:{NFSU2_TR(0x5e89a1);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x1770ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x1770ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5e89a6:{NFSU2_TR(0x5e89a6);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5e89ae;}}
}
B5e89a8:L5e89a8:{c.instructions+=2;NFSU2_TR(0x5e89a8);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e89ac:{NFSU2_TR(0x5e89ac);
{goto L5e89d1;}
}
B5e89ae:L5e89ae:{c.instructions+=3;NFSU2_TR(0x5e89ae);
u8 U[4];
w4(U+0,u32(0x2001ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e89b3:{NFSU2_TR(0x5e89b3);
u8 U[4];
w4(U+0,u32(0x1770ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e89b8:{NFSU2_TR(0x5e89b8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e89bdull));
TAIL_STATIC(0x440820u,440);
}
B5e89bd:L5e89bd:{c.instructions+=5;NFSU2_TR(0x5e89bd);
__builtin_memmove((R+4),gp(0x88f1a8),4);
}
B5e89c3:{NFSU2_TR(0x5e89c3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5e89c6:{NFSU2_TR(0x5e89c6);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B5e89c7:{NFSU2_TR(0x5e89c7);
__builtin_memmove(gp(0x88f1a8),(R+4),4);
}
B5e89cd:{NFSU2_TR(0x5e89cd);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e89d1:L5e89d1:{c.instructions+=2;NFSU2_TR(0x5e89d1);
u8 U[8];
__builtin_memmove((U+0),gp(0x88f19c),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+20))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5e89d7:{NFSU2_TR(0x5e89d7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e89dd;}}
}
B5e89d9:L5e89d9:{c.instructions+=2;NFSU2_TR(0x5e89d9);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5e89db:{NFSU2_TR(0x5e89db);
{goto L5e8a20;}
}
B5e89dd:L5e89dd:{c.instructions+=2;NFSU2_TR(0x5e89dd);
u8 U[8];
__builtin_memmove((U+0),gp(0x88f1a8),4);
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+20))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5e89e3:{NFSU2_TR(0x5e89e3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e89f1;}}
}
B5e89e5:L5e89e5:{c.instructions+=4;NFSU2_TR(0x5e89e5);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e89e6:{NFSU2_TR(0x5e89e6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e89e7:{NFSU2_TR(0x5e89e7);
w4(R+4,u32(0x88eb00ull));
}
B5e89ec:{NFSU2_TR(0x5e89ec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e89f1ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e8560u);}goto L5e8560;}
}
B5e89f1:L5e89f1:{c.instructions+=2;NFSU2_TR(0x5e89f1);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e89f3:{NFSU2_TR(0x5e89f3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e89f8ull));
TAIL_STATIC(0x43e910u,43e);
}
B5e89f8:L5e89f8:{c.instructions+=3;NFSU2_TR(0x5e89f8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5e89fb:{NFSU2_TR(0x5e89fb);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5e89fd:{NFSU2_TR(0x5e89fd);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5e8a03;}}
}
B5e89ff:L5e89ff:{c.instructions+=2;NFSU2_TR(0x5e89ff);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5e8a01:{NFSU2_TR(0x5e8a01);
{goto L5e8a20;}
}
B5e8a03:L5e8a03:{c.instructions+=3;NFSU2_TR(0x5e8a03);
u8 U[4];
w4(U+0,u32(0x2001ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e8a08:{NFSU2_TR(0x5e8a08);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e8a09:{NFSU2_TR(0x5e8a09);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e8a0eull));
TAIL_STATIC(0x440820u,440);
}
B5e8a0e:L5e8a0e:{c.instructions+=5;NFSU2_TR(0x5e8a0e);
__builtin_memmove((R+4),gp(0x88f1a8),4);
}
B5e8a14:{NFSU2_TR(0x5e8a14);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5e8a17:{NFSU2_TR(0x5e8a17);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B5e8a18:{NFSU2_TR(0x5e8a18);
__builtin_memmove(gp(0x88f1a8),(R+4),4);
}
B5e8a1e:{NFSU2_TR(0x5e8a1e);
__builtin_memmove((R+28),(R+0),4);
}
B5e8a20:L5e8a20:{c.instructions+=6;NFSU2_TR(0x5e8a20);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e8a24:{NFSU2_TR(0x5e8a24);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5e8a26:{NFSU2_TR(0x5e8a26);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
}
B5e8a29:{NFSU2_TR(0x5e8a29);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e8a2d:{NFSU2_TR(0x5e8a2d);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e8a31:{NFSU2_TR(0x5e8a31);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e8a35:L5e8a35:{c.instructions+=2;NFSU2_TR(0x5e8a35);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5e8a37:{NFSU2_TR(0x5e8a37);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5e8ad9;}}
}
B5e8a3d:L5e8a3d:{c.instructions+=5;NFSU2_TR(0x5e8a3d);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e8a41:{NFSU2_TR(0x5e8a41);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5e8a43:{NFSU2_TR(0x5e8a43);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5e8a45:{NFSU2_TR(0x5e8a45);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e8a49:{NFSU2_TR(0x5e8a49);
if(r1(R+518)){{goto L5e8ad9;}}
}
B5e8a4f:L5e8a4f:{c.instructions+=5;NFSU2_TR(0x5e8a4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e8a52:{NFSU2_TR(0x5e8a52);
__builtin_memmove((R+8),(R+0),4);
}
B5e8a54:{NFSU2_TR(0x5e8a54);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B5e8a57:{NFSU2_TR(0x5e8a57);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e8a5a:{NFSU2_TR(0x5e8a5a);
if(r1(R+518)){{goto L5e8ad9;}}
}
B5e8a5c:L5e8a5c:{c.instructions+=3;NFSU2_TR(0x5e8a5c);
u8 U[4];
w4(U+0,u32(u32(u32(0x9ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B5e8a5f:{NFSU2_TR(0x5e8a5f);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e8a61:{NFSU2_TR(0x5e8a61);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e8ad9;}}
}
B5e8a63:L5e8a63:{c.instructions+=5;NFSU2_TR(0x5e8a63);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e8a67:{NFSU2_TR(0x5e8a67);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+20,u32(s32(s16(r2(U+4)))));
}
B5e8a6b:{NFSU2_TR(0x5e8a6b);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5e8a6d:{NFSU2_TR(0x5e8a6d);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e8a6f:{NFSU2_TR(0x5e8a6f);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5e8ac8;}}
}
B5e8a71:L5e8a71:{c.instructions+=3;NFSU2_TR(0x5e8a71);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffffull))));
__builtin_memmove((R+0),(U+0),4);
}
B5e8a74:{NFSU2_TR(0x5e8a74);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5e8a76:{NFSU2_TR(0x5e8a76);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e8a7c;}}
}
B5e8a78:L5e8a78:{c.instructions+=2;NFSU2_TR(0x5e8a78);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5e8a7a:{NFSU2_TR(0x5e8a7a);
{goto L5e8a88;}
}
B5e8a7c:L5e8a7c:{c.instructions+=3;NFSU2_TR(0x5e8a7c);
u8 U[12];
w4(U+0,u32(u32(u32(0x1ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B5e8a80:{NFSU2_TR(0x5e8a80);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x190ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B5e8a86:{NFSU2_TR(0x5e8a86);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+28))));
}
B5e8a88:L5e8a88:{c.instructions+=2;NFSU2_TR(0x5e8a88);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e8a8a:{NFSU2_TR(0x5e8a8a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e8a90;}}
}
B5e8a8c:L5e8a8c:{c.instructions+=2;NFSU2_TR(0x5e8a8c);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5e8a8e:{NFSU2_TR(0x5e8a8e);
{goto L5e8aa0;}
}
B5e8a90:L5e8a90:{c.instructions+=3;NFSU2_TR(0x5e8a90);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B5e8a93:{NFSU2_TR(0x5e8a93);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x190ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B5e8a99:{NFSU2_TR(0x5e8a99);
u8 U[12];
w4(U+0,u32(u32(u32(0xfffffe70ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B5e8aa0:L5e8aa0:{c.instructions+=11;NFSU2_TR(0x5e8aa0);
__builtin_memmove((R+8),(R+24),4);
}
B5e8aa2:{NFSU2_TR(0x5e8aa2);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x38ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B5e8aa5:{NFSU2_TR(0x5e8aa5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e8aa6:{NFSU2_TR(0x5e8aa6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e8aa7:{NFSU2_TR(0x5e8aa7);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e8aab:{NFSU2_TR(0x5e8aab);
u8 U[12];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B5e8ab2:{NFSU2_TR(0x5e8ab2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e8ab3:{NFSU2_TR(0x5e8ab3);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B5e8ab6:{NFSU2_TR(0x5e8ab6);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x190ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B5e8abc:{NFSU2_TR(0x5e8abc);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+28))));
}
B5e8abe:{NFSU2_TR(0x5e8abe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e8ac3ull));
TAIL_STATIC(0x5d4a20u,5d4);
}
B5e8ac3:L5e8ac3:{c.instructions+=3;NFSU2_TR(0x5e8ac3);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B5e8ac4:{NFSU2_TR(0x5e8ac4);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5e8ac6:{NFSU2_TR(0x5e8ac6);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e8a71u);}goto L5e8a71;}}
}
B5e8ac8:L5e8ac8:{c.instructions+=6;NFSU2_TR(0x5e8ac8);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e8acc:{NFSU2_TR(0x5e8acc);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5e8ad0:{NFSU2_TR(0x5e8ad0);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+12),4);
s4(u32(r4(U+4)),r4(U+8));
}
B5e8ad3:{NFSU2_TR(0x5e8ad3);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+20))));
}
B5e8ad5:{NFSU2_TR(0x5e8ad5);
__builtin_memmove((R+24),(R+0),4);
}
B5e8ad7:{NFSU2_TR(0x5e8ad7);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B5e8ad9:L5e8ad9:{c.instructions+=7;NFSU2_TR(0x5e8ad9);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e8add:{NFSU2_TR(0x5e8add);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B5e8ade:{NFSU2_TR(0x5e8ade);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B5e8ae1:{NFSU2_TR(0x5e8ae1);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x5dcull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5dcull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5e8ae7:{NFSU2_TR(0x5e8ae7);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e8aeb:{NFSU2_TR(0x5e8aeb);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e8aef:{NFSU2_TR(0x5e8aef);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e8a35u);}goto L5e8a35;}}
}
B5e8af5:L5e8af5:{c.instructions+=3;NFSU2_TR(0x5e8af5);
u8 U[8];
__builtin_memmove((U+0),gp(0x883db4),4);
w1(R+512,u8((r4(U+0))<(r4(R+20))));
w4(U+4,u32(u32(r4(U+0))-u32(r4(R+20))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5e8afb:{NFSU2_TR(0x5e8afb);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e8aff:{NFSU2_TR(0x5e8aff);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L5e8eb7;}}
}
B5e8b05:L5e8b05:{c.instructions+=2;NFSU2_TR(0x5e8b05);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e8b09:{NFSU2_TR(0x5e8b09);
__builtin_memmove((R+16),(R+16),4);
}
B5e8b10:L5e8b10:{c.instructions+=9;NFSU2_TR(0x5e8b10);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5e8b14:{NFSU2_TR(0x5e8b14);
__builtin_memmove((R+4),gp(0x883db0),4);
}
B5e8b1a:{NFSU2_TR(0x5e8b1a);
u8 U[16];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B5e8b1e:{NFSU2_TR(0x5e8b1e);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B5e8b20:{NFSU2_TR(0x5e8b20);
__builtin_memmove((R+8),(R+0),1);
}
B5e8b22:{NFSU2_TR(0x5e8b22);
w1(R+8,u8(u32(r1(R+8))&u32(u8(0xfull))));
}
B5e8b25:{NFSU2_TR(0x5e8b25);
u8 U[2];
__builtin_memmove((U+0),(R+8),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x7ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5e8b28:{NFSU2_TR(0x5e8b28);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e8b2c:{NFSU2_TR(0x5e8b2c);
if(r1(R+518)){{goto L5e8e95;}}
}
B5e8b32:L5e8b32:{c.instructions+=2;NFSU2_TR(0x5e8b32);
u8 U[2];
__builtin_memmove((U+0),(R+8),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x8ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5e8b35:{NFSU2_TR(0x5e8b35);
if(r1(R+518)){{goto L5e8e95;}}
}
B5e8b3b:L5e8b3b:{c.instructions+=4;NFSU2_TR(0x5e8b3b);
__builtin_memmove((R+12),(R+0),4);
}
B5e8b3d:{NFSU2_TR(0x5e8b3d);
u8 U[4];
w4(U+0,u32(u32(u32(0x1aull))&u32(u32(0x1full))));
w4(R+12,shr<u32>(r4(R+12),u64(r4(U+0))));
}
B5e8b40:{NFSU2_TR(0x5e8b40);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e8b43:{NFSU2_TR(0x5e8b43);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e8e95;}}
}
B5e8b49:L5e8b49:{c.instructions+=5;NFSU2_TR(0x5e8b49);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+28),(U+4),2);
}
B5e8b4d:{NFSU2_TR(0x5e8b4d);
w4(R+24,u32(s32(s16(r2(R+28)))));
}
B5e8b50:{NFSU2_TR(0x5e8b50);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5e8b52:{NFSU2_TR(0x5e8b52);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e8b56:{NFSU2_TR(0x5e8b56);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5e8e95;}}
}
B5e8b5c:L5e8b5c:{c.instructions+=3;NFSU2_TR(0x5e8b5c);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x88a334ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B5e8b63:{NFSU2_TR(0x5e8b63);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e8b65:{NFSU2_TR(0x5e8b65);
if(r1(R+518)){{goto L5e8e95;}}
}
B5e8b6b:L5e8b6b:{c.instructions+=5;NFSU2_TR(0x5e8b6b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5e8b6e:{NFSU2_TR(0x5e8b6e);
__builtin_memmove((R+12),(R+24),4);
}
B5e8b70:{NFSU2_TR(0x5e8b70);
u8 U[4];
w4(U+0,u32(u32(u32(0x9ull))&u32(u32(0x1full))));
w4(R+12,shr<u32>(r4(R+12),u64(r4(U+0))));
}
B5e8b73:{NFSU2_TR(0x5e8b73);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e8b76:{NFSU2_TR(0x5e8b76);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e8e95;}}
}
B5e8b7c:L5e8b7c:{c.instructions+=4;NFSU2_TR(0x5e8b7c);
__builtin_memmove((R+12),(R+24),4);
}
B5e8b7e:{NFSU2_TR(0x5e8b7e);
u8 U[4];
w4(U+0,u32(u32(u32(0xaull))&u32(u32(0x1full))));
w4(R+12,shr<u32>(r4(R+12),u64(r4(U+0))));
}
B5e8b81:{NFSU2_TR(0x5e8b81);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e8b84:{NFSU2_TR(0x5e8b84);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e8e95;}}
}
B5e8b8a:L5e8b8a:{c.instructions+=2;NFSU2_TR(0x5e8b8a);
u8 U[2];
__builtin_memmove((U+0),(R+8),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x3ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5e8b8d:{NFSU2_TR(0x5e8b8d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e8b93;}}
}
B5e8b8f:L5e8b8f:{c.instructions+=2;NFSU2_TR(0x5e8b8f);
__builtin_memmove((R+24),(R+28),4);
}
B5e8b91:{NFSU2_TR(0x5e8b91);
{goto L5e8b97;}
}
B5e8b93:L5e8b93:{c.instructions+=1;NFSU2_TR(0x5e8b93);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+24),(U+4),2);
}
B5e8b97:L5e8b97:{c.instructions+=3;NFSU2_TR(0x5e8b97);
w4(R+24,u32(s32(s16(r2(R+24)))));
}
B5e8b9a:{NFSU2_TR(0x5e8b9a);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5e8b9c:{NFSU2_TR(0x5e8b9c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5e8e95;}}
}
B5e8ba2:L5e8ba2:{c.instructions+=3;NFSU2_TR(0x5e8ba2);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x88a334ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B5e8ba9:{NFSU2_TR(0x5e8ba9);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e8bab:{NFSU2_TR(0x5e8bab);
if(r1(R+518)){{goto L5e8e95;}}
}
B5e8bb1:L5e8bb1:{c.instructions+=5;NFSU2_TR(0x5e8bb1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5e8bb4:{NFSU2_TR(0x5e8bb4);
__builtin_memmove((R+12),(R+24),4);
}
B5e8bb6:{NFSU2_TR(0x5e8bb6);
u8 U[4];
w4(U+0,u32(u32(u32(0x9ull))&u32(u32(0x1full))));
w4(R+12,shr<u32>(r4(R+12),u64(r4(U+0))));
}
B5e8bb9:{NFSU2_TR(0x5e8bb9);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e8bbc:{NFSU2_TR(0x5e8bbc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e8e95;}}
}
B5e8bc2:L5e8bc2:{c.instructions+=4;NFSU2_TR(0x5e8bc2);
__builtin_memmove((R+12),(R+24),4);
}
B5e8bc4:{NFSU2_TR(0x5e8bc4);
u8 U[4];
w4(U+0,u32(u32(u32(0xaull))&u32(u32(0x1full))));
w4(R+12,shr<u32>(r4(R+12),u64(r4(U+0))));
}
B5e8bc7:{NFSU2_TR(0x5e8bc7);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e8bca:{NFSU2_TR(0x5e8bca);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e8e95;}}
}
B5e8bd0:L5e8bd0:{c.instructions+=2;NFSU2_TR(0x5e8bd0);
u8 U[2];
__builtin_memmove((U+0),(R+8),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x3ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5e8bd3:{NFSU2_TR(0x5e8bd3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5e8bd9;}}
}
B5e8bd5:L5e8bd5:{c.instructions+=2;NFSU2_TR(0x5e8bd5);
__builtin_memmove((R+8),(R+28),4);
}
B5e8bd7:{NFSU2_TR(0x5e8bd7);
{goto L5e8bdd;}
}
B5e8bd9:L5e8bd9:{c.instructions+=1;NFSU2_TR(0x5e8bd9);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+8),(U+4),2);
}
B5e8bdd:L5e8bdd:{c.instructions+=5;NFSU2_TR(0x5e8bdd);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5e8be1:{NFSU2_TR(0x5e8be1);
w4(R+8,u32(s32(s16(r2(R+8)))));
}
B5e8be4:{NFSU2_TR(0x5e8be4);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5e8be6:{NFSU2_TR(0x5e8be6);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e8bea:{NFSU2_TR(0x5e8bea);
if(r1(R+518)){{goto L5e8e95;}}
}
B5e8bf0:L5e8bf0:{c.instructions+=12;NFSU2_TR(0x5e8bf0);
__builtin_memmove((R+8),(R+0),4);
}
B5e8bf2:{NFSU2_TR(0x5e8bf2);
u8 U[4];
w4(U+0,u32(u32(u32(0x12ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B5e8bf5:{NFSU2_TR(0x5e8bf5);
w4(R+8,u32(r1(R+8)));
}
B5e8bf8:{NFSU2_TR(0x5e8bf8);
u8 U[4];
w4(U+0,u32(u32(u32(0x17ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B5e8bfb:{NFSU2_TR(0x5e8bfb);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+8))));
}
B5e8bfd:{NFSU2_TR(0x5e8bfd);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x1ull))));
}
B5e8c00:{NFSU2_TR(0x5e8c00);
__builtin_memmove((R+12),(R+8),4);
}
B5e8c02:{NFSU2_TR(0x5e8c02);
__builtin_memmove((R+20),(R+0),4);
}
B5e8c04:{NFSU2_TR(0x5e8c04);
__builtin_memmove((R+0),(R+24),4);
}
B5e8c06:{NFSU2_TR(0x5e8c06);
w4(R+12,u32(u32(r4(R+12))&u32(u32(0x1ull))));
}
B5e8c09:{NFSU2_TR(0x5e8c09);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5e8c0b:{NFSU2_TR(0x5e8c0b);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5e8c16;}}
}
B5e8c0d:L5e8c0d:{c.instructions+=2;NFSU2_TR(0x5e8c0d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x88a334ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B5e8c14:{NFSU2_TR(0x5e8c14);
{goto L5e8c18;}
}
B5e8c16:L5e8c16:{c.instructions+=1;NFSU2_TR(0x5e8c16);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5e8c18:L5e8c18:{c.instructions+=5;NFSU2_TR(0x5e8c18);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(s32(s16(r2(U+4)))));
}
B5e8c1c:{NFSU2_TR(0x5e8c1c);
__builtin_memmove((R+8),(R+24),4);
}
B5e8c1e:{NFSU2_TR(0x5e8c1e);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x38ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B5e8c21:{NFSU2_TR(0x5e8c21);
u8 U[12];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B5e8c28:{NFSU2_TR(0x5e8c28);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e8c2dull));
TAIL_STATIC(0x5d86d0u,5d8);
}
B5e8c2d:L5e8c2d:{c.instructions+=3;NFSU2_TR(0x5e8c2d);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e8c2f:{NFSU2_TR(0x5e8c2f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5e8c32:{NFSU2_TR(0x5e8c32);
if(r1(R+518)){{goto L5e8c39;}}
}
B5e8c34:L5e8c34:{c.instructions+=2;NFSU2_TR(0x5e8c34);
u8 U[4];
w4(U+0,u32(u32(u32(0xbull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B5e8c37:{NFSU2_TR(0x5e8c37);
{goto L5e8c3c;}
}
B5e8c39:L5e8c39:{c.instructions+=1;NFSU2_TR(0x5e8c39);
u8 U[4];
w4(U+0,u32(u32(u32(0x12ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B5e8c3c:L5e8c3c:{c.instructions+=3;NFSU2_TR(0x5e8c3c);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x1ull))));
}
B5e8c3f:{NFSU2_TR(0x5e8c3f);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e8c41:{NFSU2_TR(0x5e8c41);
if(r1(R+518)){{goto L5e8e95;}}
}
B5e8c47:L5e8c47:{c.instructions+=3;NFSU2_TR(0x5e8c47);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e8c49:{NFSU2_TR(0x5e8c49);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5e8c4c:{NFSU2_TR(0x5e8c4c);
if(r1(R+518)){{goto L5e8c53;}}
}
B5e8c4e:L5e8c4e:{c.instructions+=2;NFSU2_TR(0x5e8c4e);
u8 U[4];
w4(U+0,u32(u32(u32(0xbull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B5e8c51:{NFSU2_TR(0x5e8c51);
{goto L5e8c56;}
}
B5e8c53:L5e8c53:{c.instructions+=1;NFSU2_TR(0x5e8c53);
u8 U[4];
w4(U+0,u32(u32(u32(0x12ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B5e8c56:L5e8c56:{c.instructions+=3;NFSU2_TR(0x5e8c56);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x1ull))));
}
B5e8c59:{NFSU2_TR(0x5e8c59);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e8c5b:{NFSU2_TR(0x5e8c5b);
if(r1(R+518)){{goto L5e8e95;}}
}
B5e8c61:L5e8c61:{c.instructions+=9;NFSU2_TR(0x5e8c61);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e8c65:{NFSU2_TR(0x5e8c65);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5e8c69:{NFSU2_TR(0x5e8c69);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B5e8c6c:{NFSU2_TR(0x5e8c6c);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+24))));
}
B5e8c6e:{NFSU2_TR(0x5e8c6e);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5e8c72:{NFSU2_TR(0x5e8c72);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(s64(s32(u32(0x190ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+28,u32(r8(U+16)));
}
B5e8c78:{NFSU2_TR(0x5e8c78);
__builtin_memmove((R+4),(R+0),4);
}
B5e8c7a:{NFSU2_TR(0x5e8c7a);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+24))));
}
B5e8c7c:{NFSU2_TR(0x5e8c7c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e8c81ull));
TAIL_STATIC(0x5d89b0u,5d8);
}
B5e8c81:L5e8c81:{c.instructions+=14;NFSU2_TR(0x5e8c81);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e8c85:{NFSU2_TR(0x5e8c85);
__builtin_memmove((R+24),(R+0),4);
}
B5e8c87:{NFSU2_TR(0x5e8c87);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e8c8b:{NFSU2_TR(0x5e8c8b);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B5e8c8e:{NFSU2_TR(0x5e8c8e);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e8c92:{NFSU2_TR(0x5e8c92);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+8))));
}
B5e8c94:{NFSU2_TR(0x5e8c94);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5e8c98:{NFSU2_TR(0x5e8c98);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(u32(0x190ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B5e8c9e:{NFSU2_TR(0x5e8c9e);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+8))));
}
B5e8ca0:{NFSU2_TR(0x5e8ca0);
u8 U[14];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
w4(R+8,u32(s32(s16(r2(U+12)))));
}
B5e8ca5:{NFSU2_TR(0x5e8ca5);
u8 U[14];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
w4(R+0,u32(s32(s16(r2(U+12)))));
}
B5e8caa:{NFSU2_TR(0x5e8caa);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e8cae:{NFSU2_TR(0x5e8cae);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e8cb2:{NFSU2_TR(0x5e8cb2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e8cb7ull));
TAIL_STATIC(0x5d8760u,5d8);
}
B5e8cb7:L5e8cb7:{c.instructions+=2;NFSU2_TR(0x5e8cb7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e8cb9:{NFSU2_TR(0x5e8cb9);
if(r1(R+518)){{goto L5e8d24;}}
}
B5e8cbb:L5e8cbb:{c.instructions+=4;NFSU2_TR(0x5e8cbb);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5e8cbe:{NFSU2_TR(0x5e8cbe);
w1(R+0,u8(u32(r1(R+0))&u32(u8(0xfull))));
}
B5e8cc0:{NFSU2_TR(0x5e8cc0);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x7ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e8cc2:{NFSU2_TR(0x5e8cc2);
if(r1(R+518)){{goto L5e8d24;}}
}
B5e8cc4:L5e8cc4:{c.instructions+=2;NFSU2_TR(0x5e8cc4);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x8ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e8cc6:{NFSU2_TR(0x5e8cc6);
if(r1(R+518)){{goto L5e8d24;}}
}
B5e8cc8:L5e8cc8:{c.instructions+=4;NFSU2_TR(0x5e8cc8);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x2ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e8cca:{NFSU2_TR(0x5e8cca);
__builtin_memmove((R+0),(R+518),1);
}
B5e8ccd:{NFSU2_TR(0x5e8ccd);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e8ccf:{NFSU2_TR(0x5e8ccf);
if(r1(R+518)){{goto L5e8d24;}}
}
B5e8cd1:L5e8cd1:{c.instructions+=6;NFSU2_TR(0x5e8cd1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B5e8cd5:{NFSU2_TR(0x5e8cd5);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B5e8cd8:{NFSU2_TR(0x5e8cd8);
u8 U[16];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B5e8cdc:{NFSU2_TR(0x5e8cdc);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B5e8cde:{NFSU2_TR(0x5e8cde);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5e8ce0:{NFSU2_TR(0x5e8ce0);
if(r1(R+518)){{goto L5e8d24;}}
}
B5e8ce2:L5e8ce2:{c.instructions+=6;NFSU2_TR(0x5e8ce2);
u8 U[16];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),4);
s4(u32(r4(U+8)),r4(U+12));
}
B5e8ce6:{NFSU2_TR(0x5e8ce6);
u8 U[16];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),4);
s4(u32(r4(U+8)),r4(U+12));
}
B5e8cea:{NFSU2_TR(0x5e8cea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5e8cec:{NFSU2_TR(0x5e8cec);
u8 U[18];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
__builtin_memmove((U+14),(U+12),2);
w1(R+523,sborrow<u16>(r2(U+14),r2(R+8)));
w2(U+16,u16(u32(r2(U+14))-u32(r2(R+8))));
w1(R+519,u8(s16(r2(U+16))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+16))==(u16(0x0ull))));
}
B5e8cf1:{NFSU2_TR(0x5e8cf1);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e8cf5:{NFSU2_TR(0x5e8cf5);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5e8d24;}}
}
B5e8cf7:L5e8cf7:{c.instructions+=2;NFSU2_TR(0x5e8cf7);
u8 U[12];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B5e8cfb:{NFSU2_TR(0x5e8cfb);
{goto L5e8d00;}
}
B5e8d00:L5e8d00:{c.instructions+=9;NFSU2_TR(0x5e8d00);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5e8d04:{NFSU2_TR(0x5e8d04);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B5e8d05:{NFSU2_TR(0x5e8d05);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffff8ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5e8d0c:{NFSU2_TR(0x5e8d0c);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+0)),r4(U+0));
}
B5e8d12:{NFSU2_TR(0x5e8d12);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e8d16:{NFSU2_TR(0x5e8d16);
u8 U[14];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
w4(R+8,u32(s32(s16(r2(U+12)))));
}
B5e8d1b:{NFSU2_TR(0x5e8d1b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
}
B5e8d1e:{NFSU2_TR(0x5e8d1e);
u8 U[16];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+8)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B5e8d22:{NFSU2_TR(0x5e8d22);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e8d00u);}goto L5e8d00;}}
}
B5e8d24:L5e8d24:{c.instructions+=7;NFSU2_TR(0x5e8d24);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e8d28:{NFSU2_TR(0x5e8d28);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B5e8d2b:{NFSU2_TR(0x5e8d2b);
w1(R+4,u8(u32(r1(R+4))&u32(u8(0xfull))));
}
B5e8d2e:{NFSU2_TR(0x5e8d2e);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x2ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5e8d31:{NFSU2_TR(0x5e8d31);
__builtin_memmove((R+0),(R+518),1);
}
B5e8d34:{NFSU2_TR(0x5e8d34);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e8d36:{NFSU2_TR(0x5e8d36);
if(r1(R+518)){{goto L5e8ded;}}
}
B5e8d3c:L5e8d3c:{c.instructions+=8;NFSU2_TR(0x5e8d3c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B5e8d3f:{NFSU2_TR(0x5e8d3f);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B5e8d42:{NFSU2_TR(0x5e8d42);
u8 U[16];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B5e8d46:{NFSU2_TR(0x5e8d46);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e8d48:{NFSU2_TR(0x5e8d48);
u8 U[12];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B5e8d4c:{NFSU2_TR(0x5e8d4c);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e8d50:{NFSU2_TR(0x5e8d50);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e8d54:{NFSU2_TR(0x5e8d54);
if(r1(R+518)){{goto L5e8d97;}}
}
B5e8d56:L5e8d56:{c.instructions+=5;NFSU2_TR(0x5e8d56);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5e8d58:{NFSU2_TR(0x5e8d58);
u8 U[18];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
__builtin_memmove((U+14),(U+12),2);
w1(R+523,sborrow<u16>(r2(U+14),u16(0x0ull)));
w2(U+16,u16(u32(r2(U+14))-u32(u16(0x0ull))));
w1(R+519,u8(s16(r2(U+16))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+16))==(u16(0x0ull))));
}
B5e8d5e:{NFSU2_TR(0x5e8d5e);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e8d62:{NFSU2_TR(0x5e8d62);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5e8d6a:{NFSU2_TR(0x5e8d6a);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5e8d97;}}
}
B5e8d6c:L5e8d6c:{c.instructions+=1;NFSU2_TR(0x5e8d6c);
u8 U[12];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B5e8d70:L5e8d70:{c.instructions+=8;NFSU2_TR(0x5e8d70);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B5e8d74:{NFSU2_TR(0x5e8d74);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5e8d78:{NFSU2_TR(0x5e8d78);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffff8ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5e8d7f:{NFSU2_TR(0x5e8d7f);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+0)),r4(U+0));
}
B5e8d85:{NFSU2_TR(0x5e8d85);
u8 U[14];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
w4(R+8,u32(s32(s16(r2(U+12)))));
}
B5e8d8a:{NFSU2_TR(0x5e8d8a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
}
B5e8d8d:{NFSU2_TR(0x5e8d8d);
u8 U[16];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),r4(R+8)));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B5e8d91:{NFSU2_TR(0x5e8d91);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e8d70u);}goto L5e8d70;}}
}
B5e8d93:L5e8d93:{c.instructions+=1;NFSU2_TR(0x5e8d93);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e8d97:L5e8d97:{c.instructions+=6;NFSU2_TR(0x5e8d97);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B5e8d9b:{NFSU2_TR(0x5e8d9b);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B5e8d9e:{NFSU2_TR(0x5e8d9e);
u8 U[16];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+12),(U+12),4);
}
B5e8da2:{NFSU2_TR(0x5e8da2);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+24))));
}
B5e8da4:{NFSU2_TR(0x5e8da4);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e8da6:{NFSU2_TR(0x5e8da6);
if(r1(R+518)){{goto L5e8ddc;}}
}
B5e8da8:L5e8da8:{c.instructions+=11;NFSU2_TR(0x5e8da8);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e8dac:{NFSU2_TR(0x5e8dac);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B5e8daf:{NFSU2_TR(0x5e8daf);
__builtin_memmove((R+4),(R+20),4);
}
B5e8db1:{NFSU2_TR(0x5e8db1);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),r4(R+8)));
w1(R+523,scarry<u32>(r4(R+4),r4(R+8)));
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5e8db3:{NFSU2_TR(0x5e8db3);
u8 U[45];
w4(U+37,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
__builtin_memmove((U+41),(R+4),4);
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+37))));
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
w1(U+35,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(U+36,u8(u32(r1(R+512))^u32(r1(U+35))));
__builtin_memmove((U+0),(U+34),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(U+36))));
w1(U+2,u8(!(r1(U+34))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(R+523))));
w1(R+523,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+37))!=(u32(0x0ull))));
w1(U+6,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(U+7,u8(!(r1(U+5))));
w1(U+8,u8(u32(r1(U+7))&u32(r1(R+519))));
w1(U+9,u8(u32(r1(U+5))&u32(r1(U+6))));
w1(R+519,u8(u32(r1(U+8))|u32(r1(U+9))));
w1(U+10,u8((r4(R+4))==(u32(0x0ull))));
w1(U+11,u8(!(r1(U+5))));
w1(U+12,u8(u32(r1(U+11))&u32(r1(R+518))));
w1(U+13,u8(u32(r1(U+5))&u32(r1(U+10))));
w1(R+518,u8(u32(r1(U+12))|u32(r1(U+13))));
w4(U+14,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+18,u8(__builtin_popcountll(u64(r4(U+14)))));
w1(U+19,u8(u32(r1(U+18))&u32(u8(0x1ull))));
w1(U+20,u8((r1(U+19))==(u8(0x0ull))));
w1(U+21,u8(!(r1(U+5))));
w1(U+22,u8(u32(r1(U+21))&u32(r1(R+514))));
w1(U+23,u8(u32(r1(U+5))&u32(r1(U+20))));
w1(R+514,u8(u32(r1(U+22))|u32(r1(U+23))));
}
B5e8db6:{NFSU2_TR(0x5e8db6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+12),(U+4),4);
}
B5e8db9:{NFSU2_TR(0x5e8db9);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xffffffd0ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5e8dbc:{NFSU2_TR(0x5e8dbc);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5e8dbf:{NFSU2_TR(0x5e8dbf);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e8dc0:{NFSU2_TR(0x5e8dc0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5e8dc2:{NFSU2_TR(0x5e8dc2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e8dc7ull));
TAIL_STATIC(0x5d4ce0u,5d4);
}
B5e8dc7:L5e8dc7:{c.instructions+=5;NFSU2_TR(0x5e8dc7);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e8dcb:{NFSU2_TR(0x5e8dcb);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B5e8dcf:{NFSU2_TR(0x5e8dcf);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e8dd2:{NFSU2_TR(0x5e8dd2);
u8 U[14];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
w2(U+12,u16(u32(r2(U+12))+u32(u16(0x1ull))));
s2(u32(r4(U+8)),r2(U+12));
}
B5e8dd7:{NFSU2_TR(0x5e8dd7);
{goto L5e8e95;}
}
B5e8ddc:L5e8ddc:{c.instructions+=5;NFSU2_TR(0x5e8ddc);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5e8ddf:{NFSU2_TR(0x5e8ddf);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5e8de1:{NFSU2_TR(0x5e8de1);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B5e8de5:{NFSU2_TR(0x5e8de5);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e8de8:{NFSU2_TR(0x5e8de8);
{goto L5e8e95;}
}
B5e8ded:L5e8ded:{c.instructions+=10;NFSU2_TR(0x5e8ded);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5e8df1:{NFSU2_TR(0x5e8df1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B5e8df5:{NFSU2_TR(0x5e8df5);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B5e8df8:{NFSU2_TR(0x5e8df8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B5e8dfb:{NFSU2_TR(0x5e8dfb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e8dfe:{NFSU2_TR(0x5e8dfe);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e8e02:{NFSU2_TR(0x5e8e02);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e8e04:{NFSU2_TR(0x5e8e04);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B5e8e07:{NFSU2_TR(0x5e8e07);
__builtin_memmove((R+4),(R+12),4);
}
B5e8e09:{NFSU2_TR(0x5e8e09);
if(r1(R+518)){{goto L5e8e6d;}}
}
B5e8e0b:L5e8e0b:{c.instructions+=9;NFSU2_TR(0x5e8e0b);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B5e8e0d:{NFSU2_TR(0x5e8e0d);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B5e8e10:{NFSU2_TR(0x5e8e10);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B5e8e13:{NFSU2_TR(0x5e8e13);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5e8e16:{NFSU2_TR(0x5e8e16);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e8e1a:{NFSU2_TR(0x5e8e1a);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0xffffffd0ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0xffffffd0ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xffffffd0ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5e8e1d:{NFSU2_TR(0x5e8e1d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e8e1e:{NFSU2_TR(0x5e8e1e);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e8e22:{NFSU2_TR(0x5e8e22);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e8e27ull));
TAIL_STATIC(0x5d4ce0u,5d4);
}
B5e8e27:L5e8e27:{c.instructions+=11;NFSU2_TR(0x5e8e27);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5e8e2b:{NFSU2_TR(0x5e8e2b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B5e8e2e:{NFSU2_TR(0x5e8e2e);
__builtin_memmove((R+4),(R+20),4);
}
B5e8e30:{NFSU2_TR(0x5e8e30);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B5e8e32:{NFSU2_TR(0x5e8e32);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B5e8e35:{NFSU2_TR(0x5e8e35);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B5e8e38:{NFSU2_TR(0x5e8e38);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e8e3c:{NFSU2_TR(0x5e8e3c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5e8e3f:{NFSU2_TR(0x5e8e3f);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0xffffffd0ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0xffffffd0ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xffffffd0ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5e8e42:{NFSU2_TR(0x5e8e42);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e8e43:{NFSU2_TR(0x5e8e43);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e8e48ull));
TAIL_STATIC(0x5d4ce0u,5d4);
}
B5e8e48:L5e8e48:{c.instructions+=10;NFSU2_TR(0x5e8e48);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e8e4c:{NFSU2_TR(0x5e8e4c);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5e8e50:{NFSU2_TR(0x5e8e50);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e8e54:{NFSU2_TR(0x5e8e54);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
}
B5e8e57:{NFSU2_TR(0x5e8e57);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e8e5a:{NFSU2_TR(0x5e8e5a);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e8e5e:{NFSU2_TR(0x5e8e5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e8e61:{NFSU2_TR(0x5e8e61);
u8 U[14];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
w2(U+12,u16(u32(r2(U+12))+u32(u16(0x1ull))));
s2(u32(r4(U+8)),r2(U+12));
}
B5e8e66:{NFSU2_TR(0x5e8e66);
u8 U[14];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
w2(U+12,u16(u32(r2(U+12))+u32(u16(0x1ull))));
s2(u32(r4(U+8)),r2(U+12));
}
B5e8e6b:{NFSU2_TR(0x5e8e6b);
{goto L5e8e95;}
}
B5e8e6d:L5e8e6d:{c.instructions+=8;NFSU2_TR(0x5e8e6d);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),r4(R+0)));
w1(R+523,scarry<u32>(r4(R+4),r4(R+0)));
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5e8e6f:{NFSU2_TR(0x5e8e6f);
u8 U[45];
w4(U+37,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
__builtin_memmove((U+41),(R+4),4);
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+37))));
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
w1(U+35,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(U+36,u8(u32(r1(R+512))^u32(r1(U+35))));
__builtin_memmove((U+0),(U+34),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(U+36))));
w1(U+2,u8(!(r1(U+34))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(R+523))));
w1(R+523,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+37))!=(u32(0x0ull))));
w1(U+6,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(U+7,u8(!(r1(U+5))));
w1(U+8,u8(u32(r1(U+7))&u32(r1(R+519))));
w1(U+9,u8(u32(r1(U+5))&u32(r1(U+6))));
w1(R+519,u8(u32(r1(U+8))|u32(r1(U+9))));
w1(U+10,u8((r4(R+4))==(u32(0x0ull))));
w1(U+11,u8(!(r1(U+5))));
w1(U+12,u8(u32(r1(U+11))&u32(r1(R+518))));
w1(U+13,u8(u32(r1(U+5))&u32(r1(U+10))));
w1(R+518,u8(u32(r1(U+12))|u32(r1(U+13))));
w4(U+14,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+18,u8(__builtin_popcountll(u64(r4(U+14)))));
w1(U+19,u8(u32(r1(U+18))&u32(u8(0x1ull))));
w1(U+20,u8((r1(U+19))==(u8(0x0ull))));
w1(U+21,u8(!(r1(U+5))));
w1(U+22,u8(u32(r1(U+21))&u32(r1(R+514))));
w1(U+23,u8(u32(r1(U+5))&u32(r1(U+20))));
w1(R+514,u8(u32(r1(U+22))|u32(r1(U+23))));
}
B5e8e72:{NFSU2_TR(0x5e8e72);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B5e8e75:{NFSU2_TR(0x5e8e75);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffd0ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5e8e78:{NFSU2_TR(0x5e8e78);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5e8e7b:{NFSU2_TR(0x5e8e7b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e8e7c:{NFSU2_TR(0x5e8e7c);
__builtin_memmove((R+4),(R+20),4);
}
B5e8e7e:{NFSU2_TR(0x5e8e7e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e8e83ull));
TAIL_STATIC(0x5d4ce0u,5d4);
}
B5e8e83:L5e8e83:{c.instructions+=5;NFSU2_TR(0x5e8e83);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e8e87:{NFSU2_TR(0x5e8e87);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5e8e8a:{NFSU2_TR(0x5e8e8a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e8e8d:{NFSU2_TR(0x5e8e8d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e8e90:{NFSU2_TR(0x5e8e90);
u8 U[14];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+28))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
w2(U+12,u16(u32(r2(U+12))+u32(u16(0x1ull))));
s2(u32(r4(U+8)),r2(U+12));
}
B5e8e95:L5e8e95:{c.instructions+=9;NFSU2_TR(0x5e8e95);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e8e99:{NFSU2_TR(0x5e8e99);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5e8e9d:{NFSU2_TR(0x5e8e9d);
__builtin_memmove((R+4),gp(0x883db4),4);
}
B5e8ea3:{NFSU2_TR(0x5e8ea3);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5e8ea4:{NFSU2_TR(0x5e8ea4);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x20ull))));
}
B5e8ea7:{NFSU2_TR(0x5e8ea7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B5e8ea9:{NFSU2_TR(0x5e8ea9);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e8ead:{NFSU2_TR(0x5e8ead);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e8eb1:{NFSU2_TR(0x5e8eb1);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e8b10u);}goto L5e8b10;}}
}
B5e8eb7:L5e8eb7:{c.instructions+=6;NFSU2_TR(0x5e8eb7);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5e8ebb:{NFSU2_TR(0x5e8ebb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4674ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5e8ec1:{NFSU2_TR(0x5e8ec1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e8ec2:{NFSU2_TR(0x5e8ec2);
__builtin_memmove((R+4),(R+24),4);
}
B5e8ec4:{NFSU2_TR(0x5e8ec4);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e8ec8:{NFSU2_TR(0x5e8ec8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e8ecdull));
TAIL_STATIC(0x5d4c30u,5d4);
}
B5e8ecd:L5e8ecd:{c.instructions+=4;NFSU2_TR(0x5e8ecd);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4679ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5e8ed3:{NFSU2_TR(0x5e8ed3);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e8ed5:{NFSU2_TR(0x5e8ed5);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5e8ed9:{NFSU2_TR(0x5e8ed9);
if(r1(R+518)){{goto L5e8fca;}}
}
B5e8edf:L5e8edf:{c.instructions+=4;NFSU2_TR(0x5e8edf);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e8ee3:{NFSU2_TR(0x5e8ee3);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e8ee5:{NFSU2_TR(0x5e8ee5);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5e8eed:{NFSU2_TR(0x5e8eed);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5e8fca;}}
}
B5e8ef3:L5e8ef3:{c.instructions+=1;NFSU2_TR(0x5e8ef3);
{goto L5e8f00;}
}
B5e8ef5:L5e8ef5:{c.instructions+=2;NFSU2_TR(0x5e8ef5);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5e8ef9:{NFSU2_TR(0x5e8ef9);
__builtin_memmove((R+16),(R+16),4);
}
B5e8f00:L5e8f00:{c.instructions+=14;NFSU2_TR(0x5e8f00);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x468cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5e8f06:{NFSU2_TR(0x5e8f06);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e8f0a:{NFSU2_TR(0x5e8f0a);
u8 U[12];
w4(U+0,u32(u32(u32(0x1ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B5e8f0e:{NFSU2_TR(0x5e8f0e);
u8 U[8];
w8(U+0,u64(s64(s32(r4(R+0)))));
w4(R+8,u32(u64(r8(U+0))>>32));
}
B5e8f0f:{NFSU2_TR(0x5e8f0f);
u8 U[64];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4690ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+8,u64(s64(s32(r4(U+4)))));
w8(U+16,u64(r4(R+8)));
w8(U+24,shl<u64>(r8(U+16),u64(u32(0x20ull))));
w8(U+32,u64(r4(R+0)));
w8(U+40,u64(u64(r8(U+24))|u64(r8(U+32))));
{s64 x_=s64(s64(r8(U+40))),y_=s64(s64(r8(U+8)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x5e8f0f);w8(U+48,u64(x_/y_));}
w4(R+0,u32(r8(U+48)));
{s64 x_=s64(s64(r8(U+40))),y_=s64(s64(r8(U+8)));if(__builtin_expect(!y_||(x_==INT64_MIN&&y_==-1),0))NFSU2_FAULT("signed integer division fault",0x5e8f0f);w8(U+56,u64(x_%y_));}
w4(R+8,u32(r8(U+56)));
}
B5e8f15:{NFSU2_TR(0x5e8f15);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e8f17:{NFSU2_TR(0x5e8f17);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e8f1b:{NFSU2_TR(0x5e8f1b);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5e8f1f:{NFSU2_TR(0x5e8f1f);
{u32 ea_=u32(u32(8013700u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5e8f25:{NFSU2_TR(0x5e8f25);
{u32 ea_=u32(u32(8013696u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5e8f2b:{NFSU2_TR(0x5e8f2b);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B5e8f2d:{NFSU2_TR(0x5e8f2d);
{u32 ea_=u32(u32(8013696u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5e8f33:{NFSU2_TR(0x5e8f33);
{u32 ea_=u32(u32(8875300u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5e8f39:{NFSU2_TR(0x5e8f39);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5e8fb1;}}
}
B5e8f3b:L5e8f3b:{c.instructions+=2;NFSU2_TR(0x5e8f3b);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5e8f3f:{NFSU2_TR(0x5e8f3f);
__builtin_memmove((R+24),(R+20),4);
}
B5e8f41:L5e8f41:{c.instructions+=3;NFSU2_TR(0x5e8f41);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e8f42:{NFSU2_TR(0x5e8f42);
__builtin_memmove((R+4),(R+12),4);
}
B5e8f44:{NFSU2_TR(0x5e8f44);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e8f49ull));
TAIL_STATIC(0x5e3ea0u,5e3);
}
B5e8f49:L5e8f49:{c.instructions+=3;NFSU2_TR(0x5e8f49);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x190ull))));
}
B5e8f4f:{NFSU2_TR(0x5e8f4f);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B5e8f50:{NFSU2_TR(0x5e8f50);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e8f41u);}goto L5e8f41;}}
}
B5e8f52:L5e8f52:{c.instructions+=2;NFSU2_TR(0x5e8f52);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5e8f56:{NFSU2_TR(0x5e8f56);
__builtin_memmove((R+24),(R+20),4);
}
B5e8f58:L5e8f58:{c.instructions+=3;NFSU2_TR(0x5e8f58);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e8f59:{NFSU2_TR(0x5e8f59);
__builtin_memmove((R+4),(R+12),4);
}
B5e8f5b:{NFSU2_TR(0x5e8f5b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e8f60ull));
TAIL_STATIC(0x5e5aa0u,5e5);
}
B5e8f60:L5e8f60:{c.instructions+=3;NFSU2_TR(0x5e8f60);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x190ull))));
}
B5e8f66:{NFSU2_TR(0x5e8f66);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B5e8f67:{NFSU2_TR(0x5e8f67);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e8f58u);}goto L5e8f58;}}
}
B5e8f69:L5e8f69:{c.instructions+=3;NFSU2_TR(0x5e8f69);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5e8f6d:{NFSU2_TR(0x5e8f6d);
__builtin_memmove((R+24),(R+20),4);
}
B5e8f6f:{NFSU2_TR(0x5e8f6f);
}
B5e8f70:L5e8f70:{c.instructions+=3;NFSU2_TR(0x5e8f70);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e8f71:{NFSU2_TR(0x5e8f71);
__builtin_memmove((R+4),(R+12),4);
}
B5e8f73:{NFSU2_TR(0x5e8f73);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e8f78ull));
TAIL_STATIC(0x5d4ad0u,5d4);
}
B5e8f78:L5e8f78:{c.instructions+=3;NFSU2_TR(0x5e8f78);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x190ull))));
}
B5e8f7e:{NFSU2_TR(0x5e8f7e);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B5e8f7f:{NFSU2_TR(0x5e8f7f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e8f70u);}goto L5e8f70;}}
}
B5e8f81:L5e8f81:{c.instructions+=2;NFSU2_TR(0x5e8f81);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5e8f85:{NFSU2_TR(0x5e8f85);
__builtin_memmove((R+24),(R+20),4);
}
B5e8f87:L5e8f87:{c.instructions+=3;NFSU2_TR(0x5e8f87);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e8f88:{NFSU2_TR(0x5e8f88);
__builtin_memmove((R+4),(R+12),4);
}
B5e8f8a:{NFSU2_TR(0x5e8f8a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e8f8full));
TAIL_STATIC(0x5e3e40u,5e3);
}
B5e8f8f:L5e8f8f:{c.instructions+=3;NFSU2_TR(0x5e8f8f);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x190ull))));
}
B5e8f95:{NFSU2_TR(0x5e8f95);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B5e8f96:{NFSU2_TR(0x5e8f96);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e8f87u);}goto L5e8f87;}}
}
B5e8f98:L5e8f98:{c.instructions+=3;NFSU2_TR(0x5e8f98);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5e8f9c:{NFSU2_TR(0x5e8f9c);
__builtin_memmove((R+24),(R+20),4);
}
B5e8f9e:{NFSU2_TR(0x5e8f9e);
__builtin_memmove((R+28),(R+28),4);
}
B5e8fa0:L5e8fa0:{c.instructions+=3;NFSU2_TR(0x5e8fa0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e8fa1:{NFSU2_TR(0x5e8fa1);
__builtin_memmove((R+4),(R+12),4);
}
B5e8fa3:{NFSU2_TR(0x5e8fa3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e8fa8ull));
TAIL_STATIC(0x5d91e0u,5d9);
}
B5e8fa8:L5e8fa8:{c.instructions+=3;NFSU2_TR(0x5e8fa8);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x190ull))));
}
B5e8fae:{NFSU2_TR(0x5e8fae);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B5e8faf:{NFSU2_TR(0x5e8faf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e8fa0u);}goto L5e8fa0;}}
}
B5e8fb1:L5e8fb1:{c.instructions+=6;NFSU2_TR(0x5e8fb1);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5e8fb5:{NFSU2_TR(0x5e8fb5);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e8fb9:{NFSU2_TR(0x5e8fb9);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5e8fba:{NFSU2_TR(0x5e8fba);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5e8fbc:{NFSU2_TR(0x5e8fbc);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5e8fc0:{NFSU2_TR(0x5e8fc0);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5e8ef5u);}goto L5e8ef5;}}
}
B5e8fc6:L5e8fc6:{c.instructions+=1;NFSU2_TR(0x5e8fc6);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5e8fca:L5e8fca:{c.instructions+=4;NFSU2_TR(0x5e8fca);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5e8fce:{NFSU2_TR(0x5e8fce);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4678ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5e8fd4:{NFSU2_TR(0x5e8fd4);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5e8fd6:{NFSU2_TR(0x5e8fd6);
if(r1(R+518)){TAIL_STATIC(0x5e95feu,5e9);}
}
B5e8fdc:L5e8fdc:{c.instructions+=4;NFSU2_TR(0x5e8fdc);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5e8fde:{NFSU2_TR(0x5e8fde);
__builtin_memmove((R+8),gp(0x7a4788),4);
}
B5e8fe4:{NFSU2_TR(0x5e8fe4);
__builtin_memmove(gp(0x876d24),(R+8),4);
}
B5e8fea:{NFSU2_TR(0x5e8fea);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){TAIL_STATIC(0x5e9049u,5e9);}
}
B5e8fec:L5e8fec:{c.instructions+=5;NFSU2_TR(0x5e8fec);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5e8ff0:{NFSU2_TR(0x5e8ff0);
__builtin_memmove((R+12),(R+20),4);
}
B5e8ff2:{NFSU2_TR(0x5e8ff2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5e8ff3:{NFSU2_TR(0x5e8ff3);
__builtin_memmove((R+4),(R+24),4);
}
B5e8ff5:{NFSU2_TR(0x5e8ff5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5e8ffaull));
TAIL_STATIC(0x5e3ea0u,5e3);
}
B5e8ffa:L5e8ffa:{c.instructions+=1;NFSU2_TR(0x5e8ffa);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x190ull))));
TAIL_STATIC(0x5e9000u,5e9);
}
XIT:NFSU2_TR_EXIT(0x5e8,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
