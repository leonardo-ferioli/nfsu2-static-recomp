#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_402(u8* __restrict R,Cpu& c);
u32 body_40c(u8* __restrict R,Cpu& c);
u32 body_413(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_497(u8* __restrict R,Cpu& c);
u32 body_4a2(u8* __restrict R,Cpu& c);
u32 body_4a3(u8* __restrict R,Cpu& c);
u32 body_4a5(u8* __restrict R,Cpu& c);
u32 body_4ae(u8* __restrict R,Cpu& c);
u32 body_4b4(u8* __restrict R,Cpu& c);
u32 body_4be(u8* __restrict R,Cpu& c);
u32 body_4ce(u8* __restrict R,Cpu& c);
u32 body_4d6(u8* __restrict R,Cpu& c);
u32 body_4d7(u8* __restrict R,Cpu& c);
u32 body_4d8(u8* __restrict R,Cpu& c);
u32 body_4d9(u8* __restrict R,Cpu& c);
u32 body_4e2(u8* __restrict R,Cpu& c);
u32 body_4e9(u8* __restrict R,Cpu& c);
u32 body_4ff(u8* __restrict R,Cpu& c);
u32 body_502(u8* __restrict R,Cpu& c);
u32 body_503(u8* __restrict R,Cpu& c);
u32 body_504(u8* __restrict R,Cpu& c);
u32 body_505(u8* __restrict R,Cpu& c);
u32 body_50b(u8* __restrict R,Cpu& c);
u32 body_50c(u8* __restrict R,Cpu& c);
u32 body_50d(u8* __restrict R,Cpu& c);
u32 body_50e(u8* __restrict R,Cpu& c);
u32 body_510(u8* __restrict R,Cpu& c);
u32 body_516(u8* __restrict R,Cpu& c);
u32 body_51b(u8* __restrict R,Cpu& c);
u32 body_51d(u8* __restrict R,Cpu& c);
u32 body_51e(u8* __restrict R,Cpu& c);
u32 body_51f(u8* __restrict R,Cpu& c);
u32 body_52c(u8* __restrict R,Cpu& c);
u32 body_52e(u8* __restrict R,Cpu& c);
u32 body_537(u8* __restrict R,Cpu& c);
u32 body_538(u8* __restrict R,Cpu& c);
u32 body_542(u8* __restrict R,Cpu& c);
u32 body_543(u8* __restrict R,Cpu& c);
u32 body_54e(u8* __restrict R,Cpu& c);
u32 body_551(u8* __restrict R,Cpu& c);
u32 body_552(u8* __restrict R,Cpu& c);
u32 body_556(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_587(u8* __restrict R,Cpu& c);
u32 body_58b(u8* __restrict R,Cpu& c);
u32 body_58e(u8* __restrict R,Cpu& c);
u32 body_5d3(u8* __restrict R,Cpu& c);
u32 body_610(u8* __restrict R,Cpu& c);
u32 body_61c(u8* __restrict R,Cpu& c);
u32 body_637(u8* __restrict R,Cpu& c);
u32 body_6fb(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x4e8,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x4e8,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_4e8(u8* __restrict R,Cpu& c);
u32 page_4e8(Cpu& c){return body_4e8(c.regs.data(),c);}
__attribute__((noinline)) u32 body_4e8(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x4e8000:goto L4e8000;
case 0x4e8010:goto L4e8010;
case 0x4e8011:c.instructions+=6;goto B4e8011;
case 0x4e8012:c.instructions+=5;goto B4e8012;
case 0x4e8014:c.instructions+=4;goto B4e8014;
case 0x4e8017:c.instructions+=3;goto B4e8017;
case 0x4e801a:c.instructions+=2;goto B4e801a;
case 0x4e801c:c.instructions+=1;goto B4e801c;
case 0x4e801e:goto L4e801e;
case 0x4e8020:goto L4e8020;
case 0x4e8022:c.instructions+=5;goto B4e8022;
case 0x4e8025:c.instructions+=4;goto B4e8025;
case 0x4e8027:c.instructions+=3;goto B4e8027;
case 0x4e8028:c.instructions+=2;goto B4e8028;
case 0x4e802b:c.instructions+=1;goto B4e802b;
case 0x4e8030:goto L4e8030;
case 0x4e8032:c.instructions+=3;goto B4e8032;
case 0x4e8035:c.instructions+=2;goto B4e8035;
case 0x4e8037:c.instructions+=1;goto B4e8037;
case 0x4e8039:goto L4e8039;
case 0x4e8040:c.instructions+=2;goto B4e8040;
case 0x4e8041:c.instructions+=1;goto B4e8041;
case 0x4e8046:goto L4e8046;
case 0x4e8049:c.instructions+=3;goto B4e8049;
case 0x4e804a:c.instructions+=2;goto B4e804a;
case 0x4e804c:c.instructions+=1;goto B4e804c;
case 0x4e8051:goto L4e8051;
case 0x4e8053:c.instructions+=3;goto B4e8053;
case 0x4e8055:c.instructions+=2;goto B4e8055;
case 0x4e8058:c.instructions+=1;goto B4e8058;
case 0x4e805a:goto L4e805a;
case 0x4e8060:c.instructions+=3;goto B4e8060;
case 0x4e8063:c.instructions+=2;goto B4e8063;
case 0x4e8065:c.instructions+=1;goto B4e8065;
case 0x4e8067:goto L4e8067;
case 0x4e806a:c.instructions+=5;goto B4e806a;
case 0x4e8070:c.instructions+=4;goto B4e8070;
case 0x4e8072:c.instructions+=3;goto B4e8072;
case 0x4e8073:c.instructions+=2;goto B4e8073;
case 0x4e8074:c.instructions+=1;goto B4e8074;
case 0x4e8079:goto L4e8079;
case 0x4e8080:c.instructions+=1;goto B4e8080;
case 0x4e8086:goto L4e8086;
case 0x4e8088:c.instructions+=3;goto B4e8088;
case 0x4e8089:c.instructions+=2;goto B4e8089;
case 0x4e808a:c.instructions+=1;goto B4e808a;
case 0x4e8090:goto L4e8090;
case 0x4e8092:c.instructions+=14;goto B4e8092;
case 0x4e8097:c.instructions+=13;goto B4e8097;
case 0x4e809d:c.instructions+=12;goto B4e809d;
case 0x4e809e:c.instructions+=11;goto B4e809e;
case 0x4e80a5:c.instructions+=10;goto B4e80a5;
case 0x4e80a6:c.instructions+=9;goto B4e80a6;
case 0x4e80a7:c.instructions+=8;goto B4e80a7;
case 0x4e80a8:c.instructions+=7;goto B4e80a8;
case 0x4e80ac:c.instructions+=6;goto B4e80ac;
case 0x4e80ad:c.instructions+=5;goto B4e80ad;
case 0x4e80ae:c.instructions+=4;goto B4e80ae;
case 0x4e80b0:c.instructions+=3;goto B4e80b0;
case 0x4e80b1:c.instructions+=2;goto B4e80b1;
case 0x4e80b5:c.instructions+=1;goto B4e80b5;
case 0x4e80ba:goto L4e80ba;
case 0x4e80bd:c.instructions+=15;goto B4e80bd;
case 0x4e80bf:c.instructions+=14;goto B4e80bf;
case 0x4e80c1:c.instructions+=13;goto B4e80c1;
case 0x4e80c2:c.instructions+=12;goto B4e80c2;
case 0x4e80c3:c.instructions+=11;goto B4e80c3;
case 0x4e80c5:c.instructions+=10;goto B4e80c5;
case 0x4e80ca:c.instructions+=9;goto B4e80ca;
case 0x4e80cf:c.instructions+=8;goto B4e80cf;
case 0x4e80d2:c.instructions+=7;goto B4e80d2;
case 0x4e80d3:c.instructions+=6;goto B4e80d3;
case 0x4e80d5:c.instructions+=5;goto B4e80d5;
case 0x4e80d9:c.instructions+=4;goto B4e80d9;
case 0x4e80df:c.instructions+=3;goto B4e80df;
case 0x4e80e2:c.instructions+=2;goto B4e80e2;
case 0x4e80e5:c.instructions+=1;goto B4e80e5;
case 0x4e80ea:goto L4e80ea;
case 0x4e80f0:c.instructions+=4;goto B4e80f0;
case 0x4e80f3:c.instructions+=3;goto B4e80f3;
case 0x4e80f4:c.instructions+=2;goto B4e80f4;
case 0x4e80f9:c.instructions+=1;goto B4e80f9;
case 0x4e80fe:goto L4e80fe;
case 0x4e8101:c.instructions+=3;goto B4e8101;
case 0x4e8106:c.instructions+=2;goto B4e8106;
case 0x4e810b:c.instructions+=1;goto B4e810b;
case 0x4e8110:goto L4e8110;
case 0x4e8111:c.instructions+=2;goto B4e8111;
case 0x4e8112:c.instructions+=1;goto B4e8112;
case 0x4e8117:goto L4e8117;
case 0x4e811a:c.instructions+=2;goto B4e811a;
case 0x4e811b:c.instructions+=1;goto B4e811b;
case 0x4e8120:goto L4e8120;
case 0x4e8123:c.instructions+=2;goto B4e8123;
case 0x4e8125:c.instructions+=1;goto B4e8125;
case 0x4e812a:goto L4e812a;
case 0x4e812d:c.instructions+=5;goto B4e812d;
case 0x4e8132:c.instructions+=4;goto B4e8132;
case 0x4e8137:c.instructions+=3;goto B4e8137;
case 0x4e813c:c.instructions+=2;goto B4e813c;
case 0x4e813d:c.instructions+=1;goto B4e813d;
case 0x4e8142:goto L4e8142;
case 0x4e8145:c.instructions+=4;goto B4e8145;
case 0x4e8148:c.instructions+=3;goto B4e8148;
case 0x4e8149:c.instructions+=2;goto B4e8149;
case 0x4e814b:c.instructions+=1;goto B4e814b;
case 0x4e8150:goto L4e8150;
case 0x4e8153:c.instructions+=4;goto B4e8153;
case 0x4e8155:c.instructions+=3;goto B4e8155;
case 0x4e815c:c.instructions+=2;goto B4e815c;
case 0x4e815d:c.instructions+=1;goto B4e815d;
case 0x4e8162:goto L4e8162;
case 0x4e8165:c.instructions+=3;goto B4e8165;
case 0x4e8166:c.instructions+=2;goto B4e8166;
case 0x4e816b:c.instructions+=1;goto B4e816b;
case 0x4e8170:goto L4e8170;
case 0x4e8173:c.instructions+=3;goto B4e8173;
case 0x4e8174:c.instructions+=2;goto B4e8174;
case 0x4e8175:c.instructions+=1;goto B4e8175;
case 0x4e817a:goto L4e817a;
case 0x4e817d:c.instructions+=3;goto B4e817d;
case 0x4e8180:c.instructions+=2;goto B4e8180;
case 0x4e8182:c.instructions+=1;goto B4e8182;
case 0x4e8184:goto L4e8184;
case 0x4e8187:c.instructions+=3;goto B4e8187;
case 0x4e818c:c.instructions+=2;goto B4e818c;
case 0x4e818d:c.instructions+=1;goto B4e818d;
case 0x4e8192:goto L4e8192;
case 0x4e8194:c.instructions+=2;goto B4e8194;
case 0x4e8196:c.instructions+=1;goto B4e8196;
case 0x4e819b:goto L4e819b;
case 0x4e819c:c.instructions+=5;goto B4e819c;
case 0x4e819e:c.instructions+=4;goto B4e819e;
case 0x4e81a4:c.instructions+=3;goto B4e81a4;
case 0x4e81a6:c.instructions+=2;goto B4e81a6;
case 0x4e81a8:c.instructions+=1;goto B4e81a8;
case 0x4e81ad:goto L4e81ad;
case 0x4e81af:c.instructions+=3;goto B4e81af;
case 0x4e81b1:c.instructions+=2;goto B4e81b1;
case 0x4e81b3:c.instructions+=1;goto B4e81b3;
case 0x4e81b8:goto L4e81b8;
case 0x4e81ba:c.instructions+=3;goto B4e81ba;
case 0x4e81bc:c.instructions+=2;goto B4e81bc;
case 0x4e81be:c.instructions+=1;goto B4e81be;
case 0x4e81c3:goto L4e81c3;
case 0x4e81c6:c.instructions+=4;goto B4e81c6;
case 0x4e81cb:c.instructions+=3;goto B4e81cb;
case 0x4e81d5:c.instructions+=2;goto B4e81d5;
case 0x4e81dc:c.instructions+=1;goto B4e81dc;
case 0x4e81e1:goto L4e81e1;
case 0x4e81e2:c.instructions+=2;goto B4e81e2;
case 0x4e81e3:c.instructions+=1;goto B4e81e3;
case 0x4e81e8:goto L4e81e8;
case 0x4e81ec:c.instructions+=10;goto B4e81ec;
case 0x4e81ef:c.instructions+=9;goto B4e81ef;
case 0x4e81f5:c.instructions+=8;goto B4e81f5;
case 0x4e81f6:c.instructions+=7;goto B4e81f6;
case 0x4e81f8:c.instructions+=6;goto B4e81f8;
case 0x4e81f9:c.instructions+=5;goto B4e81f9;
case 0x4e81fa:c.instructions+=4;goto B4e81fa;
case 0x4e81fb:c.instructions+=3;goto B4e81fb;
case 0x4e8202:c.instructions+=2;goto B4e8202;
case 0x4e8205:c.instructions+=1;goto B4e8205;
case 0x4e8210:goto L4e8210;
case 0x4e8211:c.instructions+=2;goto B4e8211;
case 0x4e8213:c.instructions+=1;goto B4e8213;
case 0x4e8218:goto L4e8218;
case 0x4e821d:c.instructions+=1;goto B4e821d;
case 0x4e821f:goto L4e821f;
case 0x4e8220:c.instructions+=1;goto B4e8220;
case 0x4e8225:goto L4e8225;
case 0x4e8228:goto L4e8228;
case 0x4e822a:c.instructions+=2;goto B4e822a;
case 0x4e822b:c.instructions+=1;goto B4e822b;
case 0x4e8230:goto L4e8230;
case 0x4e8231:c.instructions+=13;goto B4e8231;
case 0x4e8233:c.instructions+=12;goto B4e8233;
case 0x4e8236:c.instructions+=11;goto B4e8236;
case 0x4e8238:c.instructions+=10;goto B4e8238;
case 0x4e823d:c.instructions+=9;goto B4e823d;
case 0x4e8243:c.instructions+=8;goto B4e8243;
case 0x4e8244:c.instructions+=7;goto B4e8244;
case 0x4e824b:c.instructions+=6;goto B4e824b;
case 0x4e8251:c.instructions+=5;goto B4e8251;
case 0x4e8252:c.instructions+=4;goto B4e8252;
case 0x4e8253:c.instructions+=3;goto B4e8253;
case 0x4e8255:c.instructions+=2;goto B4e8255;
case 0x4e8259:c.instructions+=1;goto B4e8259;
case 0x4e825f:goto L4e825f;
case 0x4e8262:c.instructions+=2;goto B4e8262;
case 0x4e8264:c.instructions+=1;goto B4e8264;
case 0x4e826a:goto L4e826a;
case 0x4e826c:c.instructions+=3;goto B4e826c;
case 0x4e826e:c.instructions+=2;goto B4e826e;
case 0x4e8273:c.instructions+=1;goto B4e8273;
case 0x4e8278:goto L4e8278;
case 0x4e827a:c.instructions+=2;goto B4e827a;
case 0x4e827c:c.instructions+=1;goto B4e827c;
case 0x4e827e:goto L4e827e;
case 0x4e8280:goto L4e8280;
case 0x4e8286:c.instructions+=2;goto B4e8286;
case 0x4e8289:c.instructions+=1;goto B4e8289;
case 0x4e828b:goto L4e828b;
case 0x4e828c:c.instructions+=3;goto B4e828c;
case 0x4e828e:c.instructions+=2;goto B4e828e;
case 0x4e8293:c.instructions+=1;goto B4e8293;
case 0x4e8298:goto L4e8298;
case 0x4e829a:c.instructions+=2;goto B4e829a;
case 0x4e829c:c.instructions+=1;goto B4e829c;
case 0x4e829e:goto L4e829e;
case 0x4e82a2:c.instructions+=1;goto B4e82a2;
case 0x4e82a7:goto L4e82a7;
case 0x4e82a9:c.instructions+=7;goto B4e82a9;
case 0x4e82ab:c.instructions+=6;goto B4e82ab;
case 0x4e82af:c.instructions+=5;goto B4e82af;
case 0x4e82b0:c.instructions+=4;goto B4e82b0;
case 0x4e82b2:c.instructions+=3;goto B4e82b2;
case 0x4e82b4:c.instructions+=2;goto B4e82b4;
case 0x4e82bf:c.instructions+=1;goto B4e82bf;
case 0x4e82c2:goto L4e82c2;
case 0x4e82c5:c.instructions+=4;goto B4e82c5;
case 0x4e82c7:c.instructions+=3;goto B4e82c7;
case 0x4e82c8:c.instructions+=2;goto B4e82c8;
case 0x4e82cd:c.instructions+=1;goto B4e82cd;
case 0x4e82d2:goto L4e82d2;
case 0x4e82d7:c.instructions+=1;goto B4e82d7;
case 0x4e82dc:goto L4e82dc;
case 0x4e82df:c.instructions+=2;goto B4e82df;
case 0x4e82e1:c.instructions+=1;goto B4e82e1;
case 0x4e82e3:goto L4e82e3;
case 0x4e82e8:c.instructions+=1;goto B4e82e8;
case 0x4e82ed:goto L4e82ed;
case 0x4e82f0:c.instructions+=2;goto B4e82f0;
case 0x4e82f2:c.instructions+=1;goto B4e82f2;
case 0x4e82f4:goto L4e82f4;
case 0x4e82f9:c.instructions+=1;goto B4e82f9;
case 0x4e82fe:goto L4e82fe;
case 0x4e8301:c.instructions+=2;goto B4e8301;
case 0x4e8303:c.instructions+=1;goto B4e8303;
case 0x4e8305:goto L4e8305;
case 0x4e830a:c.instructions+=1;goto B4e830a;
case 0x4e830f:goto L4e830f;
case 0x4e8312:c.instructions+=2;goto B4e8312;
case 0x4e8314:c.instructions+=1;goto B4e8314;
case 0x4e8316:goto L4e8316;
case 0x4e8319:c.instructions+=1;goto B4e8319;
case 0x4e831b:goto L4e831b;
case 0x4e831d:goto L4e831d;
case 0x4e8321:c.instructions+=3;goto B4e8321;
case 0x4e8322:c.instructions+=2;goto B4e8322;
case 0x4e8327:c.instructions+=1;goto B4e8327;
case 0x4e832c:goto L4e832c;
case 0x4e832e:c.instructions+=2;goto B4e832e;
case 0x4e8338:c.instructions+=1;goto B4e8338;
case 0x4e833a:goto L4e833a;
case 0x4e833c:c.instructions+=3;goto B4e833c;
case 0x4e8341:c.instructions+=2;goto B4e8341;
case 0x4e8343:c.instructions+=1;goto B4e8343;
case 0x4e8348:goto L4e8348;
case 0x4e834c:c.instructions+=2;goto B4e834c;
case 0x4e834d:c.instructions+=1;goto B4e834d;
case 0x4e8352:goto L4e8352;
case 0x4e8354:c.instructions+=1;goto B4e8354;
case 0x4e8359:goto L4e8359;
case 0x4e835b:c.instructions+=2;goto B4e835b;
case 0x4e835d:c.instructions+=1;goto B4e835d;
case 0x4e8362:goto L4e8362;
case 0x4e8364:c.instructions+=1;goto B4e8364;
case 0x4e8369:goto L4e8369;
case 0x4e8370:c.instructions+=2;goto B4e8370;
case 0x4e837b:c.instructions+=1;goto B4e837b;
case 0x4e8380:goto L4e8380;
case 0x4e8387:c.instructions+=6;goto B4e8387;
case 0x4e8388:c.instructions+=5;goto B4e8388;
case 0x4e838f:c.instructions+=4;goto B4e838f;
case 0x4e8390:c.instructions+=3;goto B4e8390;
case 0x4e8392:c.instructions+=2;goto B4e8392;
case 0x4e8393:c.instructions+=1;goto B4e8393;
case 0x4e83a0:goto L4e83a0;
case 0x4e83a1:c.instructions+=19;goto B4e83a1;
case 0x4e83a3:c.instructions+=18;goto B4e83a3;
case 0x4e83a6:c.instructions+=17;goto B4e83a6;
case 0x4e83a8:c.instructions+=16;goto B4e83a8;
case 0x4e83ad:c.instructions+=15;goto B4e83ad;
case 0x4e83b3:c.instructions+=14;goto B4e83b3;
case 0x4e83b4:c.instructions+=13;goto B4e83b4;
case 0x4e83bb:c.instructions+=12;goto B4e83bb;
case 0x4e83c1:c.instructions+=11;goto B4e83c1;
case 0x4e83c2:c.instructions+=10;goto B4e83c2;
case 0x4e83c4:c.instructions+=9;goto B4e83c4;
case 0x4e83c5:c.instructions+=8;goto B4e83c5;
case 0x4e83c9:c.instructions+=7;goto B4e83c9;
case 0x4e83cf:c.instructions+=6;goto B4e83cf;
case 0x4e83d5:c.instructions+=5;goto B4e83d5;
case 0x4e83d7:c.instructions+=4;goto B4e83d7;
case 0x4e83d8:c.instructions+=3;goto B4e83d8;
case 0x4e83dd:c.instructions+=2;goto B4e83dd;
case 0x4e83e4:c.instructions+=1;goto B4e83e4;
case 0x4e83e9:goto L4e83e9;
case 0x4e83ef:c.instructions+=2;goto B4e83ef;
case 0x4e83f1:c.instructions+=1;goto B4e83f1;
case 0x4e83f7:goto L4e83f7;
case 0x4e83fa:c.instructions+=2;goto B4e83fa;
case 0x4e8400:c.instructions+=1;goto B4e8400;
case 0x4e8402:goto L4e8402;
case 0x4e8403:c.instructions+=2;goto B4e8403;
case 0x4e8404:c.instructions+=1;goto B4e8404;
case 0x4e8409:goto L4e8409;
case 0x4e840f:c.instructions+=1;goto B4e840f;
case 0x4e8416:goto L4e8416;
case 0x4e841a:c.instructions+=1;goto B4e841a;
case 0x4e841f:goto L4e841f;
case 0x4e8425:c.instructions+=7;goto B4e8425;
case 0x4e8427:c.instructions+=6;goto B4e8427;
case 0x4e8428:c.instructions+=5;goto B4e8428;
case 0x4e842c:c.instructions+=4;goto B4e842c;
case 0x4e842d:c.instructions+=3;goto B4e842d;
case 0x4e842e:c.instructions+=2;goto B4e842e;
case 0x4e8436:c.instructions+=1;goto B4e8436;
case 0x4e8439:goto L4e8439;
case 0x4e843f:c.instructions+=5;goto B4e843f;
case 0x4e8442:c.instructions+=4;goto B4e8442;
case 0x4e8443:c.instructions+=3;goto B4e8443;
case 0x4e8444:c.instructions+=2;goto B4e8444;
case 0x4e8449:c.instructions+=1;goto B4e8449;
case 0x4e844e:goto L4e844e;
case 0x4e8453:c.instructions+=1;goto B4e8453;
case 0x4e8458:goto L4e8458;
case 0x4e845b:c.instructions+=2;goto B4e845b;
case 0x4e845d:c.instructions+=1;goto B4e845d;
case 0x4e845f:goto L4e845f;
case 0x4e8464:c.instructions+=1;goto B4e8464;
case 0x4e8469:goto L4e8469;
case 0x4e846c:c.instructions+=2;goto B4e846c;
case 0x4e846e:c.instructions+=1;goto B4e846e;
case 0x4e8470:goto L4e8470;
case 0x4e8475:c.instructions+=1;goto B4e8475;
case 0x4e847a:goto L4e847a;
case 0x4e847d:c.instructions+=2;goto B4e847d;
case 0x4e847f:c.instructions+=1;goto B4e847f;
case 0x4e8481:goto L4e8481;
case 0x4e8486:c.instructions+=1;goto B4e8486;
case 0x4e848b:goto L4e848b;
case 0x4e848e:c.instructions+=2;goto B4e848e;
case 0x4e8490:c.instructions+=1;goto B4e8490;
case 0x4e8492:goto L4e8492;
case 0x4e8495:goto L4e8495;
case 0x4e8499:c.instructions+=3;goto B4e8499;
case 0x4e849a:c.instructions+=2;goto B4e849a;
case 0x4e849f:c.instructions+=1;goto B4e849f;
case 0x4e84a4:goto L4e84a4;
case 0x4e84a6:c.instructions+=2;goto B4e84a6;
case 0x4e84b0:c.instructions+=1;goto B4e84b0;
case 0x4e84b2:goto L4e84b2;
case 0x4e84b4:c.instructions+=3;goto B4e84b4;
case 0x4e84b9:c.instructions+=2;goto B4e84b9;
case 0x4e84bb:c.instructions+=1;goto B4e84bb;
case 0x4e84c0:goto L4e84c0;
case 0x4e84c6:c.instructions+=8;goto B4e84c6;
case 0x4e84c9:c.instructions+=7;goto B4e84c9;
case 0x4e84cb:c.instructions+=6;goto B4e84cb;
case 0x4e84d1:c.instructions+=5;goto B4e84d1;
case 0x4e84d2:c.instructions+=4;goto B4e84d2;
case 0x4e84d4:c.instructions+=3;goto B4e84d4;
case 0x4e84d9:c.instructions+=2;goto B4e84d9;
case 0x4e84de:c.instructions+=1;goto B4e84de;
case 0x4e84e3:goto L4e84e3;
case 0x4e84ea:c.instructions+=3;goto B4e84ea;
case 0x4e84f1:c.instructions+=2;goto B4e84f1;
case 0x4e84f9:c.instructions+=1;goto B4e84f9;
case 0x4e84fe:goto L4e84fe;
case 0x4e8500:c.instructions+=2;goto B4e8500;
case 0x4e850b:c.instructions+=1;goto B4e850b;
case 0x4e8510:goto L4e8510;
case 0x4e8517:c.instructions+=6;goto B4e8517;
case 0x4e8518:c.instructions+=5;goto B4e8518;
case 0x4e8519:c.instructions+=4;goto B4e8519;
case 0x4e8520:c.instructions+=3;goto B4e8520;
case 0x4e8522:c.instructions+=2;goto B4e8522;
case 0x4e8523:c.instructions+=1;goto B4e8523;
case 0x4e8530:goto L4e8530;
case 0x4e8531:c.instructions+=15;goto B4e8531;
case 0x4e8533:c.instructions+=14;goto B4e8533;
case 0x4e8536:c.instructions+=13;goto B4e8536;
case 0x4e8538:c.instructions+=12;goto B4e8538;
case 0x4e853d:c.instructions+=11;goto B4e853d;
case 0x4e8543:c.instructions+=10;goto B4e8543;
case 0x4e8544:c.instructions+=9;goto B4e8544;
case 0x4e854b:c.instructions+=8;goto B4e854b;
case 0x4e8551:c.instructions+=7;goto B4e8551;
case 0x4e8554:c.instructions+=6;goto B4e8554;
case 0x4e8559:c.instructions+=5;goto B4e8559;
case 0x4e855a:c.instructions+=4;goto B4e855a;
case 0x4e855c:c.instructions+=3;goto B4e855c;
case 0x4e855d:c.instructions+=2;goto B4e855d;
case 0x4e8560:c.instructions+=1;goto B4e8560;
case 0x4e8566:goto L4e8566;
case 0x4e8569:c.instructions+=2;goto B4e8569;
case 0x4e856b:c.instructions+=1;goto B4e856b;
case 0x4e856d:goto L4e856d;
case 0x4e8570:c.instructions+=1;goto B4e8570;
case 0x4e8572:goto L4e8572;
case 0x4e8574:goto L4e8574;
case 0x4e8576:c.instructions+=1;goto B4e8576;
case 0x4e857c:goto L4e857c;
case 0x4e857f:c.instructions+=5;goto B4e857f;
case 0x4e8581:c.instructions+=4;goto B4e8581;
case 0x4e8586:c.instructions+=3;goto B4e8586;
case 0x4e858b:c.instructions+=2;goto B4e858b;
case 0x4e858c:c.instructions+=1;goto B4e858c;
case 0x4e8591:goto L4e8591;
case 0x4e8594:c.instructions+=4;goto B4e8594;
case 0x4e8597:c.instructions+=3;goto B4e8597;
case 0x4e859a:c.instructions+=2;goto B4e859a;
case 0x4e859c:c.instructions+=1;goto B4e859c;
case 0x4e859e:goto L4e859e;
case 0x4e85a1:c.instructions+=1;goto B4e85a1;
case 0x4e85a3:goto L4e85a3;
case 0x4e85a5:goto L4e85a5;
case 0x4e85a8:c.instructions+=6;goto B4e85a8;
case 0x4e85ab:c.instructions+=5;goto B4e85ab;
case 0x4e85b1:c.instructions+=4;goto B4e85b1;
case 0x4e85b2:c.instructions+=3;goto B4e85b2;
case 0x4e85b3:c.instructions+=2;goto B4e85b3;
case 0x4e85b8:c.instructions+=1;goto B4e85b8;
case 0x4e85bd:goto L4e85bd;
case 0x4e85c0:c.instructions+=4;goto B4e85c0;
case 0x4e85c1:c.instructions+=3;goto B4e85c1;
case 0x4e85c6:c.instructions+=2;goto B4e85c6;
case 0x4e85c9:c.instructions+=1;goto B4e85c9;
case 0x4e85ce:goto L4e85ce;
case 0x4e85d1:c.instructions+=2;goto B4e85d1;
case 0x4e85d3:c.instructions+=1;goto B4e85d3;
case 0x4e85d5:goto L4e85d5;
case 0x4e85da:c.instructions+=1;goto B4e85da;
case 0x4e85df:goto L4e85df;
case 0x4e85e2:c.instructions+=2;goto B4e85e2;
case 0x4e85ec:c.instructions+=1;goto B4e85ec;
case 0x4e85f1:goto L4e85f1;
case 0x4e85f6:c.instructions+=1;goto B4e85f6;
case 0x4e85fb:goto L4e85fb;
case 0x4e85fe:c.instructions+=2;goto B4e85fe;
case 0x4e8600:c.instructions+=1;goto B4e8600;
case 0x4e8602:goto L4e8602;
case 0x4e8607:c.instructions+=1;goto B4e8607;
case 0x4e860c:goto L4e860c;
case 0x4e860f:c.instructions+=2;goto B4e860f;
case 0x4e8611:c.instructions+=1;goto B4e8611;
case 0x4e8613:goto L4e8613;
case 0x4e8616:c.instructions+=2;goto B4e8616;
case 0x4e8620:c.instructions+=1;goto B4e8620;
case 0x4e8625:goto L4e8625;
case 0x4e8627:c.instructions+=2;goto B4e8627;
case 0x4e8631:c.instructions+=1;goto B4e8631;
case 0x4e8636:goto L4e8636;
case 0x4e863b:c.instructions+=1;goto B4e863b;
case 0x4e8641:goto L4e8641;
case 0x4e8644:c.instructions+=2;goto B4e8644;
case 0x4e8646:c.instructions+=1;goto B4e8646;
case 0x4e8648:goto L4e8648;
case 0x4e864b:c.instructions+=1;goto B4e864b;
case 0x4e864d:goto L4e864d;
case 0x4e864f:goto L4e864f;
case 0x4e8651:c.instructions+=1;goto B4e8651;
case 0x4e8657:goto L4e8657;
case 0x4e865a:c.instructions+=5;goto B4e865a;
case 0x4e865c:c.instructions+=4;goto B4e865c;
case 0x4e8661:c.instructions+=3;goto B4e8661;
case 0x4e8666:c.instructions+=2;goto B4e8666;
case 0x4e8667:c.instructions+=1;goto B4e8667;
case 0x4e866c:goto L4e866c;
case 0x4e866f:c.instructions+=4;goto B4e866f;
case 0x4e8672:c.instructions+=3;goto B4e8672;
case 0x4e8675:c.instructions+=2;goto B4e8675;
case 0x4e8677:c.instructions+=1;goto B4e8677;
case 0x4e8679:goto L4e8679;
case 0x4e867c:c.instructions+=1;goto B4e867c;
case 0x4e867e:goto L4e867e;
case 0x4e8680:goto L4e8680;
case 0x4e8683:c.instructions+=6;goto B4e8683;
case 0x4e8686:c.instructions+=5;goto B4e8686;
case 0x4e868c:c.instructions+=4;goto B4e868c;
case 0x4e868d:c.instructions+=3;goto B4e868d;
case 0x4e868e:c.instructions+=2;goto B4e868e;
case 0x4e8693:c.instructions+=1;goto B4e8693;
case 0x4e8698:goto L4e8698;
case 0x4e869b:c.instructions+=4;goto B4e869b;
case 0x4e869c:c.instructions+=3;goto B4e869c;
case 0x4e86a1:c.instructions+=2;goto B4e86a1;
case 0x4e86a4:c.instructions+=1;goto B4e86a4;
case 0x4e86a9:goto L4e86a9;
case 0x4e86ac:c.instructions+=2;goto B4e86ac;
case 0x4e86ae:c.instructions+=1;goto B4e86ae;
case 0x4e86b0:goto L4e86b0;
case 0x4e86b5:c.instructions+=1;goto B4e86b5;
case 0x4e86ba:goto L4e86ba;
case 0x4e86bd:c.instructions+=1;goto B4e86bd;
case 0x4e86bf:goto L4e86bf;
case 0x4e86c4:c.instructions+=1;goto B4e86c4;
case 0x4e86c9:goto L4e86c9;
case 0x4e86cc:c.instructions+=2;goto B4e86cc;
case 0x4e86ce:c.instructions+=1;goto B4e86ce;
case 0x4e86d0:goto L4e86d0;
case 0x4e86d5:c.instructions+=1;goto B4e86d5;
case 0x4e86da:goto L4e86da;
case 0x4e86dd:c.instructions+=2;goto B4e86dd;
case 0x4e86df:c.instructions+=1;goto B4e86df;
case 0x4e86e1:goto L4e86e1;
case 0x4e86e4:c.instructions+=1;goto B4e86e4;
case 0x4e86e6:goto L4e86e6;
case 0x4e86e8:goto L4e86e8;
case 0x4e86f2:goto L4e86f2;
case 0x4e86f5:c.instructions+=1;goto B4e86f5;
case 0x4e86fb:goto L4e86fb;
case 0x4e86fe:c.instructions+=5;goto B4e86fe;
case 0x4e8701:c.instructions+=4;goto B4e8701;
case 0x4e8703:c.instructions+=3;goto B4e8703;
case 0x4e8705:c.instructions+=2;goto B4e8705;
case 0x4e8706:c.instructions+=1;goto B4e8706;
case 0x4e870b:goto L4e870b;
case 0x4e870c:c.instructions+=2;goto B4e870c;
case 0x4e870d:c.instructions+=1;goto B4e870d;
case 0x4e8712:goto L4e8712;
case 0x4e8715:c.instructions+=5;goto B4e8715;
case 0x4e871b:c.instructions+=4;goto B4e871b;
case 0x4e8721:c.instructions+=3;goto B4e8721;
case 0x4e8724:c.instructions+=2;goto B4e8724;
case 0x4e8726:c.instructions+=1;goto B4e8726;
case 0x4e872c:goto L4e872c;
case 0x4e872e:c.instructions+=3;goto B4e872e;
case 0x4e8734:c.instructions+=2;goto B4e8734;
case 0x4e8739:c.instructions+=1;goto B4e8739;
case 0x4e873e:goto L4e873e;
case 0x4e8741:c.instructions+=2;goto B4e8741;
case 0x4e8743:c.instructions+=1;goto B4e8743;
case 0x4e8745:goto L4e8745;
case 0x4e874a:c.instructions+=1;goto B4e874a;
case 0x4e874f:goto L4e874f;
case 0x4e8752:c.instructions+=1;goto B4e8752;
case 0x4e8754:goto L4e8754;
case 0x4e8759:c.instructions+=1;goto B4e8759;
case 0x4e875e:goto L4e875e;
case 0x4e8761:c.instructions+=2;goto B4e8761;
case 0x4e8763:c.instructions+=1;goto B4e8763;
case 0x4e8765:goto L4e8765;
case 0x4e876a:c.instructions+=1;goto B4e876a;
case 0x4e876f:goto L4e876f;
case 0x4e8772:c.instructions+=2;goto B4e8772;
case 0x4e8774:c.instructions+=1;goto B4e8774;
case 0x4e8776:goto L4e8776;
case 0x4e8779:goto L4e8779;
case 0x4e877b:c.instructions+=1;goto B4e877b;
case 0x4e877d:goto L4e877d;
case 0x4e877e:c.instructions+=2;goto B4e877e;
case 0x4e8780:c.instructions+=1;goto B4e8780;
case 0x4e8785:goto L4e8785;
case 0x4e878c:c.instructions+=1;goto B4e878c;
case 0x4e878e:goto L4e878e;
case 0x4e8791:c.instructions+=4;goto B4e8791;
case 0x4e8797:c.instructions+=3;goto B4e8797;
case 0x4e8798:c.instructions+=2;goto B4e8798;
case 0x4e879d:c.instructions+=1;goto B4e879d;
case 0x4e87a2:goto L4e87a2;
case 0x4e87a3:c.instructions+=2;goto B4e87a3;
case 0x4e87a5:c.instructions+=1;goto B4e87a5;
case 0x4e87aa:goto L4e87aa;
case 0x4e87b0:c.instructions+=2;goto B4e87b0;
case 0x4e87b6:c.instructions+=1;goto B4e87b6;
case 0x4e87bb:goto L4e87bb;
case 0x4e87bf:c.instructions+=1;goto B4e87bf;
case 0x4e87c4:goto L4e87c4;
case 0x4e87c7:c.instructions+=9;goto B4e87c7;
case 0x4e87cd:c.instructions+=8;goto B4e87cd;
case 0x4e87d3:c.instructions+=7;goto B4e87d3;
case 0x4e87d5:c.instructions+=6;goto B4e87d5;
case 0x4e87d7:c.instructions+=5;goto B4e87d7;
case 0x4e87d9:c.instructions+=4;goto B4e87d9;
case 0x4e87da:c.instructions+=3;goto B4e87da;
case 0x4e87de:c.instructions+=2;goto B4e87de;
case 0x4e87e9:c.instructions+=1;goto B4e87e9;
case 0x4e87ee:goto L4e87ee;
case 0x4e87f0:c.instructions+=2;goto B4e87f0;
case 0x4e87f4:c.instructions+=1;goto B4e87f4;
case 0x4e87f9:goto L4e87f9;
case 0x4e87fd:c.instructions+=1;goto B4e87fd;
case 0x4e8802:goto L4e8802;
case 0x4e8806:c.instructions+=1;goto B4e8806;
case 0x4e880b:goto L4e880b;
case 0x4e8810:c.instructions+=1;goto B4e8810;
case 0x4e8815:goto L4e8815;
case 0x4e8818:c.instructions+=2;goto B4e8818;
case 0x4e881a:c.instructions+=1;goto B4e881a;
case 0x4e881c:goto L4e881c;
case 0x4e8821:c.instructions+=1;goto B4e8821;
case 0x4e8826:goto L4e8826;
case 0x4e8829:c.instructions+=2;goto B4e8829;
case 0x4e882b:c.instructions+=1;goto B4e882b;
case 0x4e882d:goto L4e882d;
case 0x4e8832:c.instructions+=1;goto B4e8832;
case 0x4e8837:goto L4e8837;
case 0x4e883a:c.instructions+=2;goto B4e883a;
case 0x4e883c:c.instructions+=1;goto B4e883c;
case 0x4e883e:goto L4e883e;
case 0x4e8843:c.instructions+=1;goto B4e8843;
case 0x4e8848:goto L4e8848;
case 0x4e884b:c.instructions+=2;goto B4e884b;
case 0x4e884d:c.instructions+=1;goto B4e884d;
case 0x4e884f:goto L4e884f;
case 0x4e8852:c.instructions+=1;goto B4e8852;
case 0x4e8854:goto L4e8854;
case 0x4e8856:goto L4e8856;
case 0x4e885a:c.instructions+=3;goto B4e885a;
case 0x4e885b:c.instructions+=2;goto B4e885b;
case 0x4e8860:c.instructions+=1;goto B4e8860;
case 0x4e8865:goto L4e8865;
case 0x4e8867:c.instructions+=2;goto B4e8867;
case 0x4e8871:c.instructions+=1;goto B4e8871;
case 0x4e8873:goto L4e8873;
case 0x4e8875:c.instructions+=3;goto B4e8875;
case 0x4e887a:c.instructions+=2;goto B4e887a;
case 0x4e887c:c.instructions+=1;goto B4e887c;
case 0x4e8881:goto L4e8881;
case 0x4e8888:c.instructions+=2;goto B4e8888;
case 0x4e8893:c.instructions+=1;goto B4e8893;
case 0x4e8898:goto L4e8898;
case 0x4e889a:c.instructions+=1;goto B4e889a;
case 0x4e889f:goto L4e889f;
case 0x4e88a6:c.instructions+=6;goto B4e88a6;
case 0x4e88a7:c.instructions+=5;goto B4e88a7;
case 0x4e88ae:c.instructions+=4;goto B4e88ae;
case 0x4e88af:c.instructions+=3;goto B4e88af;
case 0x4e88b1:c.instructions+=2;goto B4e88b1;
case 0x4e88b2:c.instructions+=1;goto B4e88b2;
case 0x4e88c0:goto L4e88c0;
case 0x4e88c2:c.instructions+=7;goto B4e88c2;
case 0x4e88c7:c.instructions+=6;goto B4e88c7;
case 0x4e88cd:c.instructions+=5;goto B4e88cd;
case 0x4e88ce:c.instructions+=4;goto B4e88ce;
case 0x4e88d5:c.instructions+=3;goto B4e88d5;
case 0x4e88d6:c.instructions+=2;goto B4e88d6;
case 0x4e88db:c.instructions+=1;goto B4e88db;
case 0x4e88e0:goto L4e88e0;
case 0x4e88e3:c.instructions+=4;goto B4e88e3;
case 0x4e88e7:c.instructions+=3;goto B4e88e7;
case 0x4e88e9:c.instructions+=2;goto B4e88e9;
case 0x4e88f1:c.instructions+=1;goto B4e88f1;
case 0x4e88f3:goto L4e88f3;
case 0x4e88f7:c.instructions+=3;goto B4e88f7;
case 0x4e88f8:c.instructions+=2;goto B4e88f8;
case 0x4e88fa:c.instructions+=1;goto B4e88fa;
case 0x4e88ff:goto L4e88ff;
case 0x4e8903:c.instructions+=3;goto B4e8903;
case 0x4e890a:c.instructions+=2;goto B4e890a;
case 0x4e890d:c.instructions+=1;goto B4e890d;
case 0x4e890e:goto L4e890e;
case 0x4e8912:c.instructions+=4;goto B4e8912;
case 0x4e8914:c.instructions+=3;goto B4e8914;
case 0x4e891b:c.instructions+=2;goto B4e891b;
case 0x4e891e:c.instructions+=1;goto B4e891e;
case 0x4e8920:goto L4e8920;
case 0x4e8921:c.instructions+=2;goto B4e8921;
case 0x4e8923:c.instructions+=1;goto B4e8923;
case 0x4e8928:goto L4e8928;
case 0x4e892d:c.instructions+=1;goto B4e892d;
case 0x4e892f:goto L4e892f;
case 0x4e8930:c.instructions+=1;goto B4e8930;
case 0x4e8935:goto L4e8935;
case 0x4e8938:goto L4e8938;
case 0x4e893a:c.instructions+=2;goto B4e893a;
case 0x4e893b:c.instructions+=1;goto B4e893b;
case 0x4e8940:goto L4e8940;
case 0x4e8941:c.instructions+=2;goto B4e8941;
case 0x4e8943:c.instructions+=1;goto B4e8943;
case 0x4e8948:goto L4e8948;
case 0x4e894d:c.instructions+=1;goto B4e894d;
case 0x4e894f:goto L4e894f;
case 0x4e8950:c.instructions+=1;goto B4e8950;
case 0x4e8955:goto L4e8955;
case 0x4e8958:goto L4e8958;
case 0x4e895a:c.instructions+=2;goto B4e895a;
case 0x4e895b:c.instructions+=1;goto B4e895b;
case 0x4e8960:goto L4e8960;
case 0x4e8963:c.instructions+=6;goto B4e8963;
case 0x4e8964:c.instructions+=5;goto B4e8964;
case 0x4e8965:c.instructions+=4;goto B4e8965;
case 0x4e8966:c.instructions+=3;goto B4e8966;
case 0x4e8968:c.instructions+=2;goto B4e8968;
case 0x4e896a:c.instructions+=1;goto B4e896a;
case 0x4e896f:goto L4e896f;
case 0x4e8972:c.instructions+=2;goto B4e8972;
case 0x4e8974:c.instructions+=1;goto B4e8974;
case 0x4e8976:goto L4e8976;
case 0x4e8979:c.instructions+=6;goto B4e8979;
case 0x4e897b:c.instructions+=5;goto B4e897b;
case 0x4e897e:c.instructions+=4;goto B4e897e;
case 0x4e8982:c.instructions+=3;goto B4e8982;
case 0x4e8988:c.instructions+=2;goto B4e8988;
case 0x4e898a:c.instructions+=1;goto B4e898a;
case 0x4e898c:goto L4e898c;
case 0x4e898e:goto L4e898e;
case 0x4e8992:c.instructions+=7;goto B4e8992;
case 0x4e8994:c.instructions+=6;goto B4e8994;
case 0x4e8996:c.instructions+=5;goto B4e8996;
case 0x4e8999:c.instructions+=4;goto B4e8999;
case 0x4e899a:c.instructions+=3;goto B4e899a;
case 0x4e899c:c.instructions+=2;goto B4e899c;
case 0x4e899f:c.instructions+=1;goto B4e899f;
case 0x4e89a4:goto L4e89a4;
case 0x4e89a7:c.instructions+=11;goto B4e89a7;
case 0x4e89a9:c.instructions+=10;goto B4e89a9;
case 0x4e89ad:c.instructions+=9;goto B4e89ad;
case 0x4e89ae:c.instructions+=8;goto B4e89ae;
case 0x4e89b2:c.instructions+=7;goto B4e89b2;
case 0x4e89b6:c.instructions+=6;goto B4e89b6;
case 0x4e89bb:c.instructions+=5;goto B4e89bb;
case 0x4e89c0:c.instructions+=4;goto B4e89c0;
case 0x4e89c1:c.instructions+=3;goto B4e89c1;
case 0x4e89c6:c.instructions+=2;goto B4e89c6;
case 0x4e89ca:c.instructions+=1;goto B4e89ca;
case 0x4e89cf:goto L4e89cf;
case 0x4e89d2:c.instructions+=6;goto B4e89d2;
case 0x4e89d4:c.instructions+=5;goto B4e89d4;
case 0x4e89d6:c.instructions+=4;goto B4e89d6;
case 0x4e89da:c.instructions+=3;goto B4e89da;
case 0x4e89db:c.instructions+=2;goto B4e89db;
case 0x4e89dd:c.instructions+=1;goto B4e89dd;
case 0x4e89e2:goto L4e89e2;
case 0x4e89e5:c.instructions+=3;goto B4e89e5;
case 0x4e89e6:c.instructions+=2;goto B4e89e6;
case 0x4e89e8:c.instructions+=1;goto B4e89e8;
case 0x4e89ed:goto L4e89ed;
case 0x4e89ee:c.instructions+=2;goto B4e89ee;
case 0x4e89f0:c.instructions+=1;goto B4e89f0;
case 0x4e89f5:goto L4e89f5;
case 0x4e89f6:c.instructions+=4;goto B4e89f6;
case 0x4e89f7:c.instructions+=3;goto B4e89f7;
case 0x4e89f8:c.instructions+=2;goto B4e89f8;
case 0x4e89fb:c.instructions+=1;goto B4e89fb;
case 0x4e8a00:goto L4e8a00;
case 0x4e8a03:c.instructions+=8;goto B4e8a03;
case 0x4e8a04:c.instructions+=7;goto B4e8a04;
case 0x4e8a05:c.instructions+=6;goto B4e8a05;
case 0x4e8a06:c.instructions+=5;goto B4e8a06;
case 0x4e8a08:c.instructions+=4;goto B4e8a08;
case 0x4e8a0a:c.instructions+=3;goto B4e8a0a;
case 0x4e8a0f:c.instructions+=2;goto B4e8a0f;
case 0x4e8a14:c.instructions+=1;goto B4e8a14;
case 0x4e8a18:goto L4e8a18;
case 0x4e8a1a:goto L4e8a1a;
case 0x4e8a1c:c.instructions+=4;goto B4e8a1c;
case 0x4e8a1d:c.instructions+=3;goto B4e8a1d;
case 0x4e8a23:c.instructions+=2;goto B4e8a23;
case 0x4e8a25:c.instructions+=1;goto B4e8a25;
case 0x4e8a27:goto L4e8a27;
case 0x4e8a2a:c.instructions+=2;goto B4e8a2a;
case 0x4e8a2c:c.instructions+=1;goto B4e8a2c;
case 0x4e8a31:goto L4e8a31;
case 0x4e8a32:c.instructions+=3;goto B4e8a32;
case 0x4e8a36:c.instructions+=2;goto B4e8a36;
case 0x4e8a37:c.instructions+=1;goto B4e8a37;
case 0x4e8a3c:goto L4e8a3c;
case 0x4e8a3f:c.instructions+=3;goto B4e8a3f;
case 0x4e8a42:c.instructions+=2;goto B4e8a42;
case 0x4e8a44:c.instructions+=1;goto B4e8a44;
case 0x4e8a46:goto L4e8a46;
case 0x4e8a49:c.instructions+=3;goto B4e8a49;
case 0x4e8a4e:c.instructions+=2;goto B4e8a4e;
case 0x4e8a4f:c.instructions+=1;goto B4e8a4f;
case 0x4e8a54:goto L4e8a54;
case 0x4e8a57:c.instructions+=3;goto B4e8a57;
case 0x4e8a58:c.instructions+=2;goto B4e8a58;
case 0x4e8a5a:c.instructions+=1;goto B4e8a5a;
case 0x4e8a5f:goto L4e8a5f;
case 0x4e8a65:c.instructions+=5;goto B4e8a65;
case 0x4e8a6b:c.instructions+=4;goto B4e8a6b;
case 0x4e8a6d:c.instructions+=3;goto B4e8a6d;
case 0x4e8a6f:c.instructions+=2;goto B4e8a6f;
case 0x4e8a73:c.instructions+=1;goto B4e8a73;
case 0x4e8a75:goto L4e8a75;
case 0x4e8a78:c.instructions+=3;goto B4e8a78;
case 0x4e8a79:c.instructions+=2;goto B4e8a79;
case 0x4e8a7b:c.instructions+=1;goto B4e8a7b;
case 0x4e8a80:goto L4e8a80;
case 0x4e8a82:c.instructions+=1;goto B4e8a82;
case 0x4e8a84:goto L4e8a84;
case 0x4e8a85:c.instructions+=2;goto B4e8a85;
case 0x4e8a87:c.instructions+=1;goto B4e8a87;
case 0x4e8a8c:goto L4e8a8c;
case 0x4e8a90:goto L4e8a90;
case 0x4e8a92:c.instructions+=2;goto B4e8a92;
case 0x4e8a94:c.instructions+=1;goto B4e8a94;
case 0x4e8a96:goto L4e8a96;
case 0x4e8a9a:goto L4e8a9a;
case 0x4e8a9d:c.instructions+=2;goto B4e8a9d;
case 0x4e8aa2:c.instructions+=1;goto B4e8aa2;
case 0x4e8aa4:goto L4e8aa4;
case 0x4e8aa9:c.instructions+=2;goto B4e8aa9;
case 0x4e8aab:c.instructions+=1;goto B4e8aab;
case 0x4e8ab0:goto L4e8ab0;
case 0x4e8ab2:c.instructions+=1;goto B4e8ab2;
case 0x4e8ab7:goto L4e8ab7;
case 0x4e8aba:c.instructions+=2;goto B4e8aba;
case 0x4e8abc:c.instructions+=1;goto B4e8abc;
case 0x4e8abe:goto L4e8abe;
case 0x4e8ac1:c.instructions+=6;goto B4e8ac1;
case 0x4e8ac3:c.instructions+=5;goto B4e8ac3;
case 0x4e8ac6:c.instructions+=4;goto B4e8ac6;
case 0x4e8ac9:c.instructions+=3;goto B4e8ac9;
case 0x4e8acf:c.instructions+=2;goto B4e8acf;
case 0x4e8ad1:c.instructions+=1;goto B4e8ad1;
case 0x4e8ad3:goto L4e8ad3;
case 0x4e8ad5:goto L4e8ad5;
case 0x4e8ad7:c.instructions+=4;goto B4e8ad7;
case 0x4e8ad9:c.instructions+=3;goto B4e8ad9;
case 0x4e8ade:c.instructions+=2;goto B4e8ade;
case 0x4e8ae0:c.instructions+=1;goto B4e8ae0;
case 0x4e8ae5:goto L4e8ae5;
case 0x4e8ae7:c.instructions+=4;goto B4e8ae7;
case 0x4e8ae9:c.instructions+=3;goto B4e8ae9;
case 0x4e8aee:c.instructions+=2;goto B4e8aee;
case 0x4e8af0:c.instructions+=1;goto B4e8af0;
case 0x4e8af5:goto L4e8af5;
case 0x4e8af6:c.instructions+=2;goto B4e8af6;
case 0x4e8af8:c.instructions+=1;goto B4e8af8;
case 0x4e8afd:goto L4e8afd;
case 0x4e8afe:c.instructions+=2;goto B4e8afe;
case 0x4e8b00:c.instructions+=1;goto B4e8b00;
case 0x4e8b05:goto L4e8b05;
case 0x4e8b06:c.instructions+=1;goto B4e8b06;
case 0x4e8b08:goto L4e8b08;
case 0x4e8b0c:goto L4e8b0c;
case 0x4e8b0e:c.instructions+=2;goto B4e8b0e;
case 0x4e8b0f:c.instructions+=1;goto B4e8b0f;
case 0x4e8b11:goto L4e8b11;
case 0x4e8b14:c.instructions+=2;goto B4e8b14;
case 0x4e8b16:c.instructions+=1;goto B4e8b16;
case 0x4e8b18:goto L4e8b18;
case 0x4e8b1b:c.instructions+=2;goto B4e8b1b;
case 0x4e8b20:c.instructions+=1;goto B4e8b20;
case 0x4e8b22:goto L4e8b22;
case 0x4e8b26:c.instructions+=3;goto B4e8b26;
case 0x4e8b27:c.instructions+=2;goto B4e8b27;
case 0x4e8b29:c.instructions+=1;goto B4e8b29;
case 0x4e8b2e:goto L4e8b2e;
case 0x4e8b30:c.instructions+=2;goto B4e8b30;
case 0x4e8b32:c.instructions+=1;goto B4e8b32;
case 0x4e8b34:goto L4e8b34;
case 0x4e8b35:c.instructions+=1;goto B4e8b35;
case 0x4e8b3a:goto L4e8b3a;
case 0x4e8b3b:c.instructions+=3;goto B4e8b3b;
case 0x4e8b3c:c.instructions+=2;goto B4e8b3c;
case 0x4e8b3e:c.instructions+=1;goto B4e8b3e;
case 0x4e8b40:goto L4e8b40;
case 0x4e8b42:goto L4e8b42;
case 0x4e8b47:goto L4e8b47;
case 0x4e8b4a:c.instructions+=2;goto B4e8b4a;
case 0x4e8b4c:c.instructions+=1;goto B4e8b4c;
case 0x4e8b4e:goto L4e8b4e;
case 0x4e8b51:c.instructions+=1;goto B4e8b51;
case 0x4e8b56:goto L4e8b56;
case 0x4e8b57:c.instructions+=1;goto B4e8b57;
case 0x4e8b5c:goto L4e8b5c;
case 0x4e8b5d:c.instructions+=2;goto B4e8b5d;
case 0x4e8b5f:c.instructions+=1;goto B4e8b5f;
case 0x4e8b64:goto L4e8b64;
case 0x4e8b65:c.instructions+=4;goto B4e8b65;
case 0x4e8b66:c.instructions+=3;goto B4e8b66;
case 0x4e8b67:c.instructions+=2;goto B4e8b67;
case 0x4e8b6a:c.instructions+=1;goto B4e8b6a;
case 0x4e8b70:goto L4e8b70;
case 0x4e8b72:c.instructions+=11;goto B4e8b72;
case 0x4e8b77:c.instructions+=10;goto B4e8b77;
case 0x4e8b7d:c.instructions+=9;goto B4e8b7d;
case 0x4e8b7e:c.instructions+=8;goto B4e8b7e;
case 0x4e8b85:c.instructions+=7;goto B4e8b85;
case 0x4e8b86:c.instructions+=6;goto B4e8b86;
case 0x4e8b8a:c.instructions+=5;goto B4e8b8a;
case 0x4e8b8b:c.instructions+=4;goto B4e8b8b;
case 0x4e8b8d:c.instructions+=3;goto B4e8b8d;
case 0x4e8b8e:c.instructions+=2;goto B4e8b8e;
case 0x4e8b92:c.instructions+=1;goto B4e8b92;
case 0x4e8b97:goto L4e8b97;
case 0x4e8b99:c.instructions+=15;goto B4e8b99;
case 0x4e8b9e:c.instructions+=14;goto B4e8b9e;
case 0x4e8ba4:c.instructions+=13;goto B4e8ba4;
case 0x4e8baa:c.instructions+=12;goto B4e8baa;
case 0x4e8bad:c.instructions+=11;goto B4e8bad;
case 0x4e8bb0:c.instructions+=10;goto B4e8bb0;
case 0x4e8bb3:c.instructions+=9;goto B4e8bb3;
case 0x4e8bb9:c.instructions+=8;goto B4e8bb9;
case 0x4e8bbd:c.instructions+=7;goto B4e8bbd;
case 0x4e8bbf:c.instructions+=6;goto B4e8bbf;
case 0x4e8bc2:c.instructions+=5;goto B4e8bc2;
case 0x4e8bc5:c.instructions+=4;goto B4e8bc5;
case 0x4e8bc6:c.instructions+=3;goto B4e8bc6;
case 0x4e8bc7:c.instructions+=2;goto B4e8bc7;
case 0x4e8bcb:c.instructions+=1;goto B4e8bcb;
case 0x4e8bd0:goto L4e8bd0;
case 0x4e8bd3:c.instructions+=2;goto B4e8bd3;
case 0x4e8bd5:c.instructions+=1;goto B4e8bd5;
case 0x4e8bda:goto L4e8bda;
case 0x4e8bde:c.instructions+=5;goto B4e8bde;
case 0x4e8be0:c.instructions+=4;goto B4e8be0;
case 0x4e8be1:c.instructions+=3;goto B4e8be1;
case 0x4e8be8:c.instructions+=2;goto B4e8be8;
case 0x4e8beb:c.instructions+=1;goto B4e8beb;
case 0x4e8bf0:goto L4e8bf0;
case 0x4e8bf2:c.instructions+=19;goto B4e8bf2;
case 0x4e8bf7:c.instructions+=18;goto B4e8bf7;
case 0x4e8bfd:c.instructions+=17;goto B4e8bfd;
case 0x4e8bfe:c.instructions+=16;goto B4e8bfe;
case 0x4e8c05:c.instructions+=15;goto B4e8c05;
case 0x4e8c06:c.instructions+=14;goto B4e8c06;
case 0x4e8c07:c.instructions+=13;goto B4e8c07;
case 0x4e8c08:c.instructions+=12;goto B4e8c08;
case 0x4e8c09:c.instructions+=11;goto B4e8c09;
case 0x4e8c0b:c.instructions+=10;goto B4e8c0b;
case 0x4e8c0f:c.instructions+=9;goto B4e8c0f;
case 0x4e8c15:c.instructions+=8;goto B4e8c15;
case 0x4e8c17:c.instructions+=7;goto B4e8c17;
case 0x4e8c1a:c.instructions+=6;goto B4e8c1a;
case 0x4e8c1f:c.instructions+=5;goto B4e8c1f;
case 0x4e8c22:c.instructions+=4;goto B4e8c22;
case 0x4e8c27:c.instructions+=3;goto B4e8c27;
case 0x4e8c2a:c.instructions+=2;goto B4e8c2a;
case 0x4e8c32:c.instructions+=1;goto B4e8c32;
case 0x4e8c34:goto L4e8c34;
case 0x4e8c39:c.instructions+=3;goto B4e8c39;
case 0x4e8c3b:c.instructions+=2;goto B4e8c3b;
case 0x4e8c41:c.instructions+=1;goto B4e8c41;
case 0x4e8c43:goto L4e8c43;
case 0x4e8c49:c.instructions+=2;goto B4e8c49;
case 0x4e8c4a:c.instructions+=1;goto B4e8c4a;
case 0x4e8c4c:goto L4e8c4c;
case 0x4e8c4f:goto L4e8c4f;
case 0x4e8c55:c.instructions+=8;goto B4e8c55;
case 0x4e8c5b:c.instructions+=7;goto B4e8c5b;
case 0x4e8c61:c.instructions+=6;goto B4e8c61;
case 0x4e8c67:c.instructions+=5;goto B4e8c67;
case 0x4e8c6d:c.instructions+=4;goto B4e8c6d;
case 0x4e8c73:c.instructions+=3;goto B4e8c73;
case 0x4e8c79:c.instructions+=2;goto B4e8c79;
case 0x4e8c7f:c.instructions+=1;goto B4e8c7f;
case 0x4e8c85:goto L4e8c85;
case 0x4e8c8b:c.instructions+=4;goto B4e8c8b;
case 0x4e8c91:c.instructions+=3;goto B4e8c91;
case 0x4e8c93:c.instructions+=2;goto B4e8c93;
case 0x4e8c97:c.instructions+=1;goto B4e8c97;
case 0x4e8c99:goto L4e8c99;
case 0x4e8ca0:goto L4e8ca0;
case 0x4e8ca2:c.instructions+=5;goto B4e8ca2;
case 0x4e8ca5:c.instructions+=4;goto B4e8ca5;
case 0x4e8ca7:c.instructions+=3;goto B4e8ca7;
case 0x4e8ca8:c.instructions+=2;goto B4e8ca8;
case 0x4e8cab:c.instructions+=1;goto B4e8cab;
case 0x4e8cb0:goto L4e8cb0;
case 0x4e8cb2:c.instructions+=3;goto B4e8cb2;
case 0x4e8cb5:c.instructions+=2;goto B4e8cb5;
case 0x4e8cb7:c.instructions+=1;goto B4e8cb7;
case 0x4e8cb9:goto L4e8cb9;
case 0x4e8cbb:c.instructions+=3;goto B4e8cbb;
case 0x4e8cc3:c.instructions+=2;goto B4e8cc3;
case 0x4e8cc9:c.instructions+=1;goto B4e8cc9;
case 0x4e8cce:goto L4e8cce;
case 0x4e8cd2:c.instructions+=6;goto B4e8cd2;
case 0x4e8cd3:c.instructions+=5;goto B4e8cd3;
case 0x4e8cd4:c.instructions+=4;goto B4e8cd4;
case 0x4e8cd5:c.instructions+=3;goto B4e8cd5;
case 0x4e8cdc:c.instructions+=2;goto B4e8cdc;
case 0x4e8cdf:c.instructions+=1;goto B4e8cdf;
case 0x4e8ce0:goto L4e8ce0;
case 0x4e8ce1:c.instructions+=6;goto B4e8ce1;
case 0x4e8ce2:c.instructions+=5;goto B4e8ce2;
case 0x4e8ce4:c.instructions+=4;goto B4e8ce4;
case 0x4e8cea:c.instructions+=3;goto B4e8cea;
case 0x4e8cf0:c.instructions+=2;goto B4e8cf0;
case 0x4e8cf2:c.instructions+=1;goto B4e8cf2;
case 0x4e8cf4:goto L4e8cf4;
case 0x4e8cf6:c.instructions+=5;goto B4e8cf6;
case 0x4e8cf9:c.instructions+=4;goto B4e8cf9;
case 0x4e8cfb:c.instructions+=3;goto B4e8cfb;
case 0x4e8cfc:c.instructions+=2;goto B4e8cfc;
case 0x4e8cff:c.instructions+=1;goto B4e8cff;
case 0x4e8d04:goto L4e8d04;
case 0x4e8d06:c.instructions+=3;goto B4e8d06;
case 0x4e8d09:c.instructions+=2;goto B4e8d09;
case 0x4e8d0b:c.instructions+=1;goto B4e8d0b;
case 0x4e8d0d:goto L4e8d0d;
case 0x4e8d0f:c.instructions+=1;goto B4e8d0f;
case 0x4e8d14:goto L4e8d14;
case 0x4e8d19:c.instructions+=5;goto B4e8d19;
case 0x4e8d1a:c.instructions+=4;goto B4e8d1a;
case 0x4e8d21:c.instructions+=3;goto B4e8d21;
case 0x4e8d28:c.instructions+=2;goto B4e8d28;
case 0x4e8d29:c.instructions+=1;goto B4e8d29;
case 0x4e8d30:goto L4e8d30;
case 0x4e8d34:c.instructions+=4;goto B4e8d34;
case 0x4e8d36:c.instructions+=3;goto B4e8d36;
case 0x4e8d37:c.instructions+=2;goto B4e8d37;
case 0x4e8d39:c.instructions+=1;goto B4e8d39;
case 0x4e8d3b:goto L4e8d3b;
case 0x4e8d3e:c.instructions+=1;goto B4e8d3e;
case 0x4e8d40:goto L4e8d40;
case 0x4e8d45:c.instructions+=1;goto B4e8d45;
case 0x4e8d4a:goto L4e8d4a;
case 0x4e8d4c:c.instructions+=1;goto B4e8d4c;
case 0x4e8d4e:goto L4e8d4e;
case 0x4e8d55:goto L4e8d55;
case 0x4e8d59:c.instructions+=1;goto B4e8d59;
case 0x4e8d5b:goto L4e8d5b;
case 0x4e8d60:c.instructions+=1;goto B4e8d60;
case 0x4e8d65:goto L4e8d65;
case 0x4e8d67:c.instructions+=1;goto B4e8d67;
case 0x4e8d69:goto L4e8d69;
case 0x4e8d70:goto L4e8d70;
case 0x4e8d74:c.instructions+=4;goto B4e8d74;
case 0x4e8d75:c.instructions+=3;goto B4e8d75;
case 0x4e8d7a:c.instructions+=2;goto B4e8d7a;
case 0x4e8d7f:c.instructions+=1;goto B4e8d7f;
case 0x4e8d81:goto L4e8d81;
case 0x4e8d87:c.instructions+=2;goto B4e8d87;
case 0x4e8d8a:c.instructions+=1;goto B4e8d8a;
case 0x4e8d8c:goto L4e8d8c;
case 0x4e8d8f:c.instructions+=1;goto B4e8d8f;
case 0x4e8d91:goto L4e8d91;
case 0x4e8d97:c.instructions+=3;goto B4e8d97;
case 0x4e8d9a:c.instructions+=2;goto B4e8d9a;
case 0x4e8d9c:c.instructions+=1;goto B4e8d9c;
case 0x4e8d9e:goto L4e8d9e;
case 0x4e8da1:c.instructions+=2;goto B4e8da1;
case 0x4e8da3:c.instructions+=1;goto B4e8da3;
case 0x4e8da5:goto L4e8da5;
case 0x4e8dab:c.instructions+=2;goto B4e8dab;
case 0x4e8dad:c.instructions+=1;goto B4e8dad;
case 0x4e8daf:goto L4e8daf;
case 0x4e8db2:goto L4e8db2;
case 0x4e8dbc:c.instructions+=1;goto B4e8dbc;
case 0x4e8dbe:goto L4e8dbe;
case 0x4e8dc1:c.instructions+=3;goto B4e8dc1;
case 0x4e8dc7:c.instructions+=2;goto B4e8dc7;
case 0x4e8dc9:c.instructions+=1;goto B4e8dc9;
case 0x4e8dcb:goto L4e8dcb;
case 0x4e8dce:goto L4e8dce;
case 0x4e8dd1:c.instructions+=1;goto B4e8dd1;
case 0x4e8dd3:goto L4e8dd3;
case 0x4e8dd8:c.instructions+=2;goto B4e8dd8;
case 0x4e8ddb:c.instructions+=1;goto B4e8ddb;
case 0x4e8ddd:goto L4e8ddd;
case 0x4e8de2:c.instructions+=2;goto B4e8de2;
case 0x4e8de4:c.instructions+=1;goto B4e8de4;
case 0x4e8de6:goto L4e8de6;
case 0x4e8de9:goto L4e8de9;
case 0x4e8dec:c.instructions+=1;goto B4e8dec;
case 0x4e8dee:goto L4e8dee;
case 0x4e8df3:c.instructions+=2;goto B4e8df3;
case 0x4e8df6:c.instructions+=1;goto B4e8df6;
case 0x4e8df8:goto L4e8df8;
case 0x4e8dfd:c.instructions+=1;goto B4e8dfd;
case 0x4e8dff:goto L4e8dff;
case 0x4e8e04:c.instructions+=3;goto B4e8e04;
case 0x4e8e07:c.instructions+=2;goto B4e8e07;
case 0x4e8e09:c.instructions+=1;goto B4e8e09;
case 0x4e8e0b:goto L4e8e0b;
case 0x4e8e11:c.instructions+=2;goto B4e8e11;
case 0x4e8e14:c.instructions+=1;goto B4e8e14;
case 0x4e8e16:goto L4e8e16;
case 0x4e8e1d:goto L4e8e1d;
case 0x4e8e20:c.instructions+=3;goto B4e8e20;
case 0x4e8e25:c.instructions+=2;goto B4e8e25;
case 0x4e8e26:c.instructions+=1;goto B4e8e26;
case 0x4e8e2c:goto L4e8e2c;
case 0x4e8e32:goto L4e8e32;
case 0x4e8e33:c.instructions+=2;goto B4e8e33;
case 0x4e8e35:c.instructions+=1;goto B4e8e35;
case 0x4e8e3b:goto L4e8e3b;
case 0x4e8e42:goto L4e8e42;
case 0x4e8e47:c.instructions+=5;goto B4e8e47;
case 0x4e8e4c:c.instructions+=4;goto B4e8e4c;
case 0x4e8e51:c.instructions+=3;goto B4e8e51;
case 0x4e8e56:c.instructions+=2;goto B4e8e56;
case 0x4e8e58:c.instructions+=1;goto B4e8e58;
case 0x4e8e5d:goto L4e8e5d;
case 0x4e8e5e:c.instructions+=1;goto B4e8e5e;
case 0x4e8e61:goto L4e8e61;
case 0x4e8e66:c.instructions+=8;goto B4e8e66;
case 0x4e8e6b:c.instructions+=7;goto B4e8e6b;
case 0x4e8e70:c.instructions+=6;goto B4e8e70;
case 0x4e8e75:c.instructions+=5;goto B4e8e75;
case 0x4e8e7a:c.instructions+=4;goto B4e8e7a;
case 0x4e8e7f:c.instructions+=3;goto B4e8e7f;
case 0x4e8e81:c.instructions+=2;goto B4e8e81;
case 0x4e8e86:c.instructions+=1;goto B4e8e86;
case 0x4e8e88:goto L4e8e88;
case 0x4e8e8d:c.instructions+=1;goto B4e8e8d;
case 0x4e8e92:goto L4e8e92;
case 0x4e8e93:c.instructions+=1;goto B4e8e93;
case 0x4e8e96:goto L4e8e96;
case 0x4e8e9b:c.instructions+=1;goto B4e8e9b;
case 0x4e8ea0:goto L4e8ea0;
case 0x4e8ea1:c.instructions+=1;goto B4e8ea1;
case 0x4e8ea4:goto L4e8ea4;
case 0x4e8ea6:c.instructions+=1;goto B4e8ea6;
case 0x4e8eab:goto L4e8eab;
case 0x4e8ead:c.instructions+=4;goto B4e8ead;
case 0x4e8eaf:c.instructions+=3;goto B4e8eaf;
case 0x4e8eb1:c.instructions+=2;goto B4e8eb1;
case 0x4e8eb3:c.instructions+=1;goto B4e8eb3;
case 0x4e8eb8:goto L4e8eb8;
case 0x4e8eba:c.instructions+=4;goto B4e8eba;
case 0x4e8ebc:c.instructions+=3;goto B4e8ebc;
case 0x4e8ebe:c.instructions+=2;goto B4e8ebe;
case 0x4e8ec0:c.instructions+=1;goto B4e8ec0;
case 0x4e8ec5:goto L4e8ec5;
case 0x4e8ec6:c.instructions+=1;goto B4e8ec6;
case 0x4e8ec9:goto L4e8ec9;
case 0x4e8ecb:c.instructions+=1;goto B4e8ecb;
case 0x4e8ed0:goto L4e8ed0;
case 0x4e8ed1:c.instructions+=1;goto B4e8ed1;
case 0x4e8ed4:goto L4e8ed4;
case 0x4e8ed8:c.instructions+=3;goto B4e8ed8;
case 0x4e8edd:c.instructions+=2;goto B4e8edd;
case 0x4e8edf:c.instructions+=1;goto B4e8edf;
case 0x4e8ee1:goto L4e8ee1;
case 0x4e8ee6:c.instructions+=3;goto B4e8ee6;
case 0x4e8ee9:c.instructions+=2;goto B4e8ee9;
case 0x4e8eeb:c.instructions+=1;goto B4e8eeb;
case 0x4e8eed:goto L4e8eed;
case 0x4e8ef7:goto L4e8ef7;
case 0x4e8ef9:c.instructions+=4;goto B4e8ef9;
case 0x4e8efc:c.instructions+=3;goto B4e8efc;
case 0x4e8efd:c.instructions+=2;goto B4e8efd;
case 0x4e8f02:c.instructions+=1;goto B4e8f02;
case 0x4e8f07:goto L4e8f07;
case 0x4e8f0d:c.instructions+=2;goto B4e8f0d;
case 0x4e8f0e:c.instructions+=1;goto B4e8f0e;
case 0x4e8f13:goto L4e8f13;
case 0x4e8f14:c.instructions+=1;goto B4e8f14;
case 0x4e8f17:goto L4e8f17;
case 0x4e8f21:c.instructions+=1;goto B4e8f21;
case 0x4e8f23:goto L4e8f23;
case 0x4e8f28:c.instructions+=2;goto B4e8f28;
case 0x4e8f2a:c.instructions+=1;goto B4e8f2a;
case 0x4e8f2c:goto L4e8f2c;
case 0x4e8f2f:c.instructions+=3;goto B4e8f2f;
case 0x4e8f34:c.instructions+=2;goto B4e8f34;
case 0x4e8f36:c.instructions+=1;goto B4e8f36;
case 0x4e8f3b:goto L4e8f3b;
case 0x4e8f3d:c.instructions+=4;goto B4e8f3d;
case 0x4e8f40:c.instructions+=3;goto B4e8f40;
case 0x4e8f41:c.instructions+=2;goto B4e8f41;
case 0x4e8f46:c.instructions+=1;goto B4e8f46;
case 0x4e8f4b:goto L4e8f4b;
case 0x4e8f51:c.instructions+=2;goto B4e8f51;
case 0x4e8f52:c.instructions+=1;goto B4e8f52;
case 0x4e8f57:goto L4e8f57;
case 0x4e8f58:c.instructions+=1;goto B4e8f58;
case 0x4e8f5b:goto L4e8f5b;
case 0x4e8f60:c.instructions+=4;goto B4e8f60;
case 0x4e8f65:c.instructions+=3;goto B4e8f65;
case 0x4e8f6a:c.instructions+=2;goto B4e8f6a;
case 0x4e8f6c:c.instructions+=1;goto B4e8f6c;
case 0x4e8f71:goto L4e8f71;
case 0x4e8f72:c.instructions+=1;goto B4e8f72;
case 0x4e8fa0:goto L4e8fa0;
case 0x4e8fa1:c.instructions+=2;goto B4e8fa1;
case 0x4e8fa3:c.instructions+=1;goto B4e8fa3;
case 0x4e8fa8:goto L4e8fa8;
case 0x4e8fad:c.instructions+=1;goto B4e8fad;
case 0x4e8faf:goto L4e8faf;
case 0x4e8fb0:c.instructions+=1;goto B4e8fb0;
case 0x4e8fb5:goto L4e8fb5;
case 0x4e8fb8:goto L4e8fb8;
case 0x4e8fba:c.instructions+=2;goto B4e8fba;
case 0x4e8fbb:c.instructions+=1;goto B4e8fbb;
case 0x4e8fc0:goto L4e8fc0;
case 0x4e8fc4:c.instructions+=4;goto B4e8fc4;
case 0x4e8fc9:c.instructions+=3;goto B4e8fc9;
case 0x4e8fca:c.instructions+=2;goto B4e8fca;
case 0x4e8fcc:c.instructions+=1;goto B4e8fcc;
case 0x4e8fd2:goto L4e8fd2;
case 0x4e8fd8:goto L4e8fd8;
case 0x4e8fdd:c.instructions+=1;goto B4e8fdd;
case 0x4e8fdf:goto L4e8fdf;
case 0x4e8fe4:c.instructions+=1;goto B4e8fe4;
case 0x4e8fe6:goto L4e8fe6;
case 0x4e8feb:c.instructions+=1;goto B4e8feb;
case 0x4e8ff1:goto L4e8ff1;
case 0x4e8ff5:c.instructions+=3;goto B4e8ff5;
case 0x4e8ff8:c.instructions+=2;goto B4e8ff8;
case 0x4e8ffd:c.instructions+=1;goto B4e8ffd;
default:missing_instruction(c.pc);}
B4e8000:L4e8000:{c.instructions+=1;NFSU2_TR(0x4e8000);
TAIL_STATIC(0x4a23f0u,4a2);
}
B4e8010:L4e8010:{c.instructions+=7;NFSU2_TR(0x4e8010);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e8011:{NFSU2_TR(0x4e8011);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e8012:{NFSU2_TR(0x4e8012);
__builtin_memmove((R+28),(R+4),4);
}
B4e8014:{NFSU2_TR(0x4e8014);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e8017:{NFSU2_TR(0x4e8017);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e801a:{NFSU2_TR(0x4e801a);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4e801c:{NFSU2_TR(0x4e801c);
if(r1(R+518)){{goto L4e8039;}}
}
B4e801e:L4e801e:{c.instructions+=1;NFSU2_TR(0x4e801e);
__builtin_memmove((R+28),(R+28),4);
}
B4e8020:L4e8020:{c.instructions+=6;NFSU2_TR(0x4e8020);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4e8022:{NFSU2_TR(0x4e8022);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4e8025:{NFSU2_TR(0x4e8025);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B4e8027:{NFSU2_TR(0x4e8027);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e8028:{NFSU2_TR(0x4e8028);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e802b:{NFSU2_TR(0x4e802b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e8030ull));
TAIL_STATIC(0x575630u,575);
}
B4e8030:L4e8030:{c.instructions+=4;NFSU2_TR(0x4e8030);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4e8032:{NFSU2_TR(0x4e8032);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e8035:{NFSU2_TR(0x4e8035);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4e8037:{NFSU2_TR(0x4e8037);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4e8020u);}goto L4e8020;}}
}
B4e8039:L4e8039:{c.instructions+=3;NFSU2_TR(0x4e8039);
w4(R+0,u32(m2(0x8500b8)));
}
B4e8040:{NFSU2_TR(0x4e8040);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e8041:{NFSU2_TR(0x4e8041);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e8046ull));
TAIL_STATIC(0x5d3e40u,5d3);
}
B4e8046:L4e8046:{c.instructions+=4;NFSU2_TR(0x4e8046);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e8049:{NFSU2_TR(0x4e8049);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e804a:{NFSU2_TR(0x4e804a);
__builtin_memmove((R+4),(R+28),4);
}
B4e804c:{NFSU2_TR(0x4e804c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e8051ull));
TAIL_STATIC(0x4b4c10u,4b4);
}
B4e8051:L4e8051:{c.instructions+=4;NFSU2_TR(0x4e8051);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B4e8053:{NFSU2_TR(0x4e8053);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e8055:{NFSU2_TR(0x4e8055);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e8058:{NFSU2_TR(0x4e8058);
if(r1(R+518)){{goto L4e8086;}}
}
B4e805a:L4e805a:{c.instructions+=4;NFSU2_TR(0x4e805a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x120ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e8060:{NFSU2_TR(0x4e8060);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e8063:{NFSU2_TR(0x4e8063);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e8065:{NFSU2_TR(0x4e8065);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4e8079;}}
}
B4e8067:L4e8067:{c.instructions+=6;NFSU2_TR(0x4e8067);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4e806a:{NFSU2_TR(0x4e806a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x124ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e8070:{NFSU2_TR(0x4e8070);
__builtin_memmove((R+4),(R+28),4);
}
B4e8072:{NFSU2_TR(0x4e8072);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4e8073:{NFSU2_TR(0x4e8073);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e8074:{NFSU2_TR(0x4e8074);
TAIL_STATIC(0x4ce170u,4ce);
}
B4e8079:L4e8079:{c.instructions+=2;NFSU2_TR(0x4e8079);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+24,u32(s32(s16(r2(U+4)))));
}
B4e8080:{NFSU2_TR(0x4e8080);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x124ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e8086:L4e8086:{c.instructions+=4;NFSU2_TR(0x4e8086);
__builtin_memmove((R+4),(R+28),4);
}
B4e8088:{NFSU2_TR(0x4e8088);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4e8089:{NFSU2_TR(0x4e8089);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e808a:{NFSU2_TR(0x4e808a);
TAIL_STATIC(0x4ce170u,4ce);
}
B4e8090:L4e8090:{c.instructions+=15;NFSU2_TR(0x4e8090);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e8092:{NFSU2_TR(0x4e8092);
u8 U[4];
w4(U+0,u32(0x7749d3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e8097:{NFSU2_TR(0x4e8097);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e809d:{NFSU2_TR(0x4e809d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e809e:{NFSU2_TR(0x4e809e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e80a5:{NFSU2_TR(0x4e80a5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e80a6:{NFSU2_TR(0x4e80a6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e80a7:{NFSU2_TR(0x4e80a7);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e80a8:{NFSU2_TR(0x4e80a8);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B4e80ac:{NFSU2_TR(0x4e80ac);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e80ad:{NFSU2_TR(0x4e80ad);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e80ae:{NFSU2_TR(0x4e80ae);
__builtin_memmove((R+24),(R+4),4);
}
B4e80b0:{NFSU2_TR(0x4e80b0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e80b1:{NFSU2_TR(0x4e80b1);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e80b5:{NFSU2_TR(0x4e80b5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e80baull));
TAIL_STATIC(0x551de0u,551);
}
B4e80ba:L4e80ba:{c.instructions+=16;NFSU2_TR(0x4e80ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e80bd:{NFSU2_TR(0x4e80bd);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e80bf:{NFSU2_TR(0x4e80bf);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4e80c1:{NFSU2_TR(0x4e80c1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e80c2:{NFSU2_TR(0x4e80c2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e80c3:{NFSU2_TR(0x4e80c3);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e80c5:{NFSU2_TR(0x4e80c5);
u8 U[4];
w4(U+0,u32(0x796484ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e80ca:{NFSU2_TR(0x4e80ca);
u8 U[4];
w4(U+0,u32(0x796484ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e80cf:{NFSU2_TR(0x4e80cf);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4e80d2:{NFSU2_TR(0x4e80d2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e80d3:{NFSU2_TR(0x4e80d3);
__builtin_memmove((R+4),(R+28),4);
}
B4e80d5:{NFSU2_TR(0x4e80d5);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e80d9:{NFSU2_TR(0x4e80d9);
u8 U[4];
w4(U+0,u32(0x79636cull));
s4(u32(r4(R+24)),r4(U+0));
}
B4e80df:{NFSU2_TR(0x4e80df);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e80e2:{NFSU2_TR(0x4e80e2);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4e80e5:{NFSU2_TR(0x4e80e5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e80eaull));
TAIL_STATIC(0x542ca0u,542);
}
B4e80ea:L4e80ea:{c.instructions+=5;NFSU2_TR(0x4e80ea);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4e80f0:{NFSU2_TR(0x4e80f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e80f3:{NFSU2_TR(0x4e80f3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e80f4:{NFSU2_TR(0x4e80f4);
u8 U[5];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4e80f9:{NFSU2_TR(0x4e80f9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e80feull));
TAIL_STATIC(0x504820u,504);
}
B4e80fe:L4e80fe:{c.instructions+=4;NFSU2_TR(0x4e80fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B4e8101:{NFSU2_TR(0x4e8101);
u8 U[4];
w4(U+0,u32(0x3e10eab2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e8106:{NFSU2_TR(0x4e8106);
u8 U[4];
w4(U+0,u32(0x797a20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e810b:{NFSU2_TR(0x4e810b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e8110ull));
TAIL_STATIC(0x505450u,505);
}
B4e8110:L4e8110:{c.instructions+=3;NFSU2_TR(0x4e8110);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e8111:{NFSU2_TR(0x4e8111);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e8112:{NFSU2_TR(0x4e8112);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e8117ull));
TAIL_STATIC(0x537a10u,537);
}
B4e8117:L4e8117:{c.instructions+=3;NFSU2_TR(0x4e8117);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4e811a:{NFSU2_TR(0x4e811a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e811b:{NFSU2_TR(0x4e811b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e8120ull));
TAIL_STATIC(0x50c900u,50c);
}
B4e8120:L4e8120:{c.instructions+=3;NFSU2_TR(0x4e8120);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4e8123:{NFSU2_TR(0x4e8123);
__builtin_memmove((R+4),(R+24),4);
}
B4e8125:{NFSU2_TR(0x4e8125);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e812aull));
TAIL_STATIC(0x4d64b0u,4d6);
}
B4e812a:L4e812a:{c.instructions+=6;NFSU2_TR(0x4e812a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e812d:{NFSU2_TR(0x4e812d);
u8 U[4];
w4(U+0,u32(0x836014ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e8132:{NFSU2_TR(0x4e8132);
u8 U[4];
w4(U+0,u32(0x786e70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e8137:{NFSU2_TR(0x4e8137);
u8 U[4];
w4(U+0,u32(0x797a14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e813c:{NFSU2_TR(0x4e813c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e813d:{NFSU2_TR(0x4e813d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e8142ull));
TAIL_STATIC(0x542600u,542);
}
B4e8142:L4e8142:{c.instructions+=5;NFSU2_TR(0x4e8142);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e8145:{NFSU2_TR(0x4e8145);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4e8148:{NFSU2_TR(0x4e8148);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e8149:{NFSU2_TR(0x4e8149);
__builtin_memmove((R+4),(R+28),4);
}
B4e814b:{NFSU2_TR(0x4e814b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e8150ull));
TAIL_STATIC(0x51f440u,51f);
}
B4e8150:L4e8150:{c.instructions+=5;NFSU2_TR(0x4e8150);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4e8153:{NFSU2_TR(0x4e8153);
__builtin_memmove((R+20),(R+0),4);
}
B4e8155:{NFSU2_TR(0x4e8155);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7f4524ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B4e815c:{NFSU2_TR(0x4e815c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e815d:{NFSU2_TR(0x4e815d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e8162ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B4e8162:L4e8162:{c.instructions+=4;NFSU2_TR(0x4e8162);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e8165:{NFSU2_TR(0x4e8165);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e8166:{NFSU2_TR(0x4e8166);
u8 U[4];
w4(U+0,u32(0x790348ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e816b:{NFSU2_TR(0x4e816b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e8170ull));
TAIL_STATIC(0x50b9c0u,50b);
}
B4e8170:L4e8170:{c.instructions+=4;NFSU2_TR(0x4e8170);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e8173:{NFSU2_TR(0x4e8173);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e8174:{NFSU2_TR(0x4e8174);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e8175:{NFSU2_TR(0x4e8175);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e817aull));
TAIL_STATIC(0x537b80u,537);
}
B4e817a:L4e817a:{c.instructions+=4;NFSU2_TR(0x4e817a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e817d:{NFSU2_TR(0x4e817d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4e8180:{NFSU2_TR(0x4e8180);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e8182:{NFSU2_TR(0x4e8182);
if(r1(R+518)){{goto L4e8192;}}
}
B4e8184:L4e8184:{c.instructions+=4;NFSU2_TR(0x4e8184);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4e8187:{NFSU2_TR(0x4e8187);
u8 U[4];
w4(U+0,u32(0x78f228ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e818c:{NFSU2_TR(0x4e818c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e818d:{NFSU2_TR(0x4e818d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e8192ull));
TAIL_STATIC(0x51ee80u,51e);
}
B4e8192:L4e8192:{c.instructions+=3;NFSU2_TR(0x4e8192);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e8194:{NFSU2_TR(0x4e8194);
__builtin_memmove((R+4),(R+28),4);
}
B4e8196:{NFSU2_TR(0x4e8196);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e819bull));
TAIL_STATIC(0x538500u,538);
}
B4e819b:L4e819b:{c.instructions+=6;NFSU2_TR(0x4e819b);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e819c:{NFSU2_TR(0x4e819c);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e819e:{NFSU2_TR(0x4e819e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x88ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4e81a4:{NFSU2_TR(0x4e81a4);
u8 U[4];
w4(U+0,u32(0x7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e81a6:{NFSU2_TR(0x4e81a6);
__builtin_memmove((R+4),(R+28),4);
}
B4e81a8:{NFSU2_TR(0x4e81a8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e81adull));
TAIL_STATIC(0x538080u,538);
}
B4e81ad:L4e81ad:{c.instructions+=4;NFSU2_TR(0x4e81ad);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e81af:{NFSU2_TR(0x4e81af);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e81b1:{NFSU2_TR(0x4e81b1);
__builtin_memmove((R+4),(R+28),4);
}
B4e81b3:{NFSU2_TR(0x4e81b3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e81b8ull));
TAIL_STATIC(0x50d820u,50d);
}
B4e81b8:L4e81b8:{c.instructions+=4;NFSU2_TR(0x4e81b8);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e81ba:{NFSU2_TR(0x4e81ba);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e81bc:{NFSU2_TR(0x4e81bc);
__builtin_memmove((R+4),(R+28),4);
}
B4e81be:{NFSU2_TR(0x4e81be);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e81c3ull));
TAIL_STATIC(0x50d820u,50d);
}
B4e81c3:L4e81c3:{c.instructions+=5;NFSU2_TR(0x4e81c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4e81c6:{NFSU2_TR(0x4e81c6);
u8 U[4];
w4(U+0,u32(0x796404ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e81cb:{NFSU2_TR(0x4e81cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf8ull))));
w4(U+4,u32(0xc407210ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4e81d5:{NFSU2_TR(0x4e81d5);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4e81dc:{NFSU2_TR(0x4e81dc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e81e1ull));
TAIL_STATIC(0x505450u,505);
}
B4e81e1:L4e81e1:{c.instructions+=3;NFSU2_TR(0x4e81e1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e81e2:{NFSU2_TR(0x4e81e2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e81e3:{NFSU2_TR(0x4e81e3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e81e8ull));
TAIL_STATIC(0x537a60u,537);
}
B4e81e8:L4e81e8:{c.instructions+=11;NFSU2_TR(0x4e81e8);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e81ec:{NFSU2_TR(0x4e81ec);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4e81ef:{NFSU2_TR(0x4e81ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x104ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e81f5:{NFSU2_TR(0x4e81f5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4e81f6:{NFSU2_TR(0x4e81f6);
__builtin_memmove((R+0),(R+24),4);
}
B4e81f8:{NFSU2_TR(0x4e81f8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e81f9:{NFSU2_TR(0x4e81f9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4e81fa:{NFSU2_TR(0x4e81fa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4e81fb:{NFSU2_TR(0x4e81fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e8202:{NFSU2_TR(0x4e8202);
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
B4e8205:{NFSU2_TR(0x4e8205);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e8210:L4e8210:{c.instructions+=3;NFSU2_TR(0x4e8210);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e8211:{NFSU2_TR(0x4e8211);
__builtin_memmove((R+24),(R+4),4);
}
B4e8213:{NFSU2_TR(0x4e8213);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e8218ull));
TAIL_STATIC(0x4d6220u,4d6);
}
B4e8218:L4e8218:{c.instructions+=2;NFSU2_TR(0x4e8218);
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
B4e821d:{NFSU2_TR(0x4e821d);
if(r1(R+518)){{goto L4e8228;}}
}
B4e821f:L4e821f:{c.instructions+=2;NFSU2_TR(0x4e821f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e8220:{NFSU2_TR(0x4e8220);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e8225ull));
TAIL_STATIC(0x575630u,575);
}
B4e8225:L4e8225:{c.instructions+=1;NFSU2_TR(0x4e8225);
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
B4e8228:L4e8228:{c.instructions+=3;NFSU2_TR(0x4e8228);
__builtin_memmove((R+0),(R+24),4);
}
B4e822a:{NFSU2_TR(0x4e822a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e822b:{NFSU2_TR(0x4e822b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e8230:L4e8230:{c.instructions+=14;NFSU2_TR(0x4e8230);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e8231:{NFSU2_TR(0x4e8231);
__builtin_memmove((R+20),(R+16),4);
}
B4e8233:{NFSU2_TR(0x4e8233);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B4e8236:{NFSU2_TR(0x4e8236);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e8238:{NFSU2_TR(0x4e8238);
u8 U[4];
w4(U+0,u32(0x77389bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e823d:{NFSU2_TR(0x4e823d);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e8243:{NFSU2_TR(0x4e8243);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e8244:{NFSU2_TR(0x4e8244);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e824b:{NFSU2_TR(0x4e824b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8fcull))));
}
B4e8251:{NFSU2_TR(0x4e8251);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e8252:{NFSU2_TR(0x4e8252);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e8253:{NFSU2_TR(0x4e8253);
__builtin_memmove((R+28),(R+4),4);
}
B4e8255:{NFSU2_TR(0x4e8255);
u8 U[22];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x8ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x8ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x8ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B4e8259:{NFSU2_TR(0x4e8259);
if(r1(R+518)){{goto L4e8380;}}
}
B4e825f:L4e825f:{c.instructions+=3;NFSU2_TR(0x4e825f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e8262:{NFSU2_TR(0x4e8262);
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
B4e8264:{NFSU2_TR(0x4e8264);
if(r1(R+518)){{goto L4e8380;}}
}
B4e826a:L4e826a:{c.instructions+=4;NFSU2_TR(0x4e826a);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e826c:{NFSU2_TR(0x4e826c);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e826e:{NFSU2_TR(0x4e826e);
w4(R+4,u32(0x83ad90ull));
}
B4e8273:{NFSU2_TR(0x4e8273);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e8278ull));
TAIL_STATIC(0x5162d0u,516);
}
B4e8278:L4e8278:{c.instructions+=3;NFSU2_TR(0x4e8278);
__builtin_memmove((R+24),(R+0),4);
}
B4e827a:{NFSU2_TR(0x4e827a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e827c:{NFSU2_TR(0x4e827c);
if(r1(R+518)){{goto L4e829e;}}
}
B4e827e:L4e827e:{c.instructions+=1;NFSU2_TR(0x4e827e);
__builtin_memmove((R+28),(R+28),4);
}
B4e8280:L4e8280:{c.instructions+=3;NFSU2_TR(0x4e8280);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x434ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e8286:{NFSU2_TR(0x4e8286);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4e8289:{NFSU2_TR(0x4e8289);
if(r1(R+518)){{goto L4e829e;}}
}
B4e828b:L4e828b:{c.instructions+=4;NFSU2_TR(0x4e828b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e828c:{NFSU2_TR(0x4e828c);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e828e:{NFSU2_TR(0x4e828e);
w4(R+4,u32(0x83ad90ull));
}
B4e8293:{NFSU2_TR(0x4e8293);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e8298ull));
TAIL_STATIC(0x5162d0u,516);
}
B4e8298:L4e8298:{c.instructions+=3;NFSU2_TR(0x4e8298);
__builtin_memmove((R+24),(R+0),4);
}
B4e829a:{NFSU2_TR(0x4e829a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e829c:{NFSU2_TR(0x4e829c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4e8280u);}goto L4e8280;}}
}
B4e829e:L4e829e:{c.instructions+=2;NFSU2_TR(0x4e829e);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4e82a2:{NFSU2_TR(0x4e82a2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e82a7ull));
TAIL_STATIC(0x40c910u,40c);
}
B4e82a7:L4e82a7:{c.instructions+=8;NFSU2_TR(0x4e82a7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4e82a9:{NFSU2_TR(0x4e82a9);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e82ab:{NFSU2_TR(0x4e82ab);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4e82af:{NFSU2_TR(0x4e82af);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e82b0:{NFSU2_TR(0x4e82b0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e82b2:{NFSU2_TR(0x4e82b2);
__builtin_memmove((R+4),(R+24),4);
}
B4e82b4:{NFSU2_TR(0x4e82b4);
u8 U[8];
w4(U+0,u32(u32(u32(0x918ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4e82bf:{NFSU2_TR(0x4e82bf);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e82c2ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4e82c2:L4e82c2:{c.instructions+=5;NFSU2_TR(0x4e82c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4e82c5:{NFSU2_TR(0x4e82c5);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e82c7:{NFSU2_TR(0x4e82c7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e82c8:{NFSU2_TR(0x4e82c8);
w4(R+4,u32(0x83aab4ull));
}
B4e82cd:{NFSU2_TR(0x4e82cd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e82d2ull));
TAIL_STATIC(0x502a40u,502);
}
B4e82d2:L4e82d2:{c.instructions+=2;NFSU2_TR(0x4e82d2);
u8 U[4];
w4(U+0,u32(0x78fcd8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e82d7:{NFSU2_TR(0x4e82d7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e82dcull));
TAIL_STATIC(0x52cf60u,52c);
}
B4e82dc:L4e82dc:{c.instructions+=3;NFSU2_TR(0x4e82dc);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e82df:{NFSU2_TR(0x4e82df);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4e82e1:{NFSU2_TR(0x4e82e1);
if(r1(R+518)){{goto L4e82f4;}}
}
B4e82e3:L4e82e3:{c.instructions+=2;NFSU2_TR(0x4e82e3);
u8 U[4];
w4(U+0,u32(0x78fcd8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e82e8:{NFSU2_TR(0x4e82e8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e82edull));
TAIL_STATIC(0x51bd10u,51b);
}
B4e82ed:L4e82ed:{c.instructions+=3;NFSU2_TR(0x4e82ed);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e82f0:{NFSU2_TR(0x4e82f0);
__builtin_memmove((R+24),(R+0),4);
}
B4e82f2:{NFSU2_TR(0x4e82f2);
{goto L4e831d;}
}
B4e82f4:L4e82f4:{c.instructions+=2;NFSU2_TR(0x4e82f4);
u8 U[4];
w4(U+0,u32(0x7906dcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e82f9:{NFSU2_TR(0x4e82f9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e82feull));
TAIL_STATIC(0x52cf60u,52c);
}
B4e82fe:L4e82fe:{c.instructions+=3;NFSU2_TR(0x4e82fe);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e8301:{NFSU2_TR(0x4e8301);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4e8303:{NFSU2_TR(0x4e8303);
if(r1(R+518)){{goto L4e831b;}}
}
B4e8305:L4e8305:{c.instructions+=2;NFSU2_TR(0x4e8305);
u8 U[4];
w4(U+0,u32(0x7906dcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e830a:{NFSU2_TR(0x4e830a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e830full));
TAIL_STATIC(0x51bd10u,51b);
}
B4e830f:L4e830f:{c.instructions+=3;NFSU2_TR(0x4e830f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e8312:{NFSU2_TR(0x4e8312);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e8314:{NFSU2_TR(0x4e8314);
if(r1(R+518)){{goto L4e831b;}}
}
B4e8316:L4e8316:{c.instructions+=2;NFSU2_TR(0x4e8316);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4e8319:{NFSU2_TR(0x4e8319);
{goto L4e831d;}
}
B4e831b:L4e831b:{c.instructions+=1;NFSU2_TR(0x4e831b);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B4e831d:L4e831d:{c.instructions+=4;NFSU2_TR(0x4e831d);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4e8321:{NFSU2_TR(0x4e8321);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e8322:{NFSU2_TR(0x4e8322);
w4(R+4,u32(0x8371b0ull));
}
B4e8327:{NFSU2_TR(0x4e8327);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e832cull));
TAIL_STATIC(0x413440u,413);
}
B4e832c:L4e832c:{c.instructions+=3;NFSU2_TR(0x4e832c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e832e:{NFSU2_TR(0x4e832e);
s4(0x83623c,u32(0x1ull));
}
B4e8338:{NFSU2_TR(0x4e8338);
if(r1(R+518)){{goto L4e8348;}}
}
B4e833a:L4e833a:{c.instructions+=4;NFSU2_TR(0x4e833a);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e833c:{NFSU2_TR(0x4e833c);
u8 U[4];
w4(U+0,u32(0x8371b0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e8341:{NFSU2_TR(0x4e8341);
__builtin_memmove((R+4),(R+24),4);
}
B4e8343:{NFSU2_TR(0x4e8343);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e8348ull));
TAIL_STATIC(0x4d8c70u,4d8);
}
B4e8348:L4e8348:{c.instructions+=3;NFSU2_TR(0x4e8348);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4e834c:{NFSU2_TR(0x4e834c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e834d:{NFSU2_TR(0x4e834d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e8352ull));
TAIL_STATIC(0x58b9a0u,58b);
}
B4e8352:L4e8352:{c.instructions+=2;NFSU2_TR(0x4e8352);
__builtin_memmove((R+4),(R+0),4);
}
B4e8354:{NFSU2_TR(0x4e8354);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e8359ull));
TAIL_STATIC(0x587630u,587);
}
B4e8359:L4e8359:{c.instructions+=3;NFSU2_TR(0x4e8359);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e835b:{NFSU2_TR(0x4e835b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e835d:{NFSU2_TR(0x4e835d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e8362ull));
TAIL_STATIC(0x58b9a0u,58b);
}
B4e8362:L4e8362:{c.instructions+=2;NFSU2_TR(0x4e8362);
__builtin_memmove((R+4),(R+0),4);
}
B4e8364:{NFSU2_TR(0x4e8364);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e8369ull));
TAIL_STATIC(0x58e080u,58e);
}
B4e8369:L4e8369:{c.instructions+=3;NFSU2_TR(0x4e8369);
u8 U[4];
w4(U+0,u32(u32(u32(0x394ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4e8370:{NFSU2_TR(0x4e8370);
u8 U[8];
w4(U+0,u32(u32(u32(0x90cull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4e837b:{NFSU2_TR(0x4e837b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e8380ull));
TAIL_STATIC(0x4022c0u,402);
}
B4e8380:L4e8380:{c.instructions+=7;NFSU2_TR(0x4e8380);
u8 U[8];
w4(U+0,u32(u32(u32(0x904ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e8387:{NFSU2_TR(0x4e8387);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4e8388:{NFSU2_TR(0x4e8388);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e838f:{NFSU2_TR(0x4e838f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e8390:{NFSU2_TR(0x4e8390);
__builtin_memmove((R+16),(R+20),4);
}
B4e8392:{NFSU2_TR(0x4e8392);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4e8393:{NFSU2_TR(0x4e8393);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e83a0:L4e83a0:{c.instructions+=20;NFSU2_TR(0x4e83a0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e83a1:{NFSU2_TR(0x4e83a1);
__builtin_memmove((R+20),(R+16),4);
}
B4e83a3:{NFSU2_TR(0x4e83a3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B4e83a6:{NFSU2_TR(0x4e83a6);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e83a8:{NFSU2_TR(0x4e83a8);
u8 U[4];
w4(U+0,u32(0x775ed6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e83ad:{NFSU2_TR(0x4e83ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e83b3:{NFSU2_TR(0x4e83b3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e83b4:{NFSU2_TR(0x4e83b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e83bb:{NFSU2_TR(0x4e83bb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8f8ull))));
}
B4e83c1:{NFSU2_TR(0x4e83c1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e83c2:{NFSU2_TR(0x4e83c2);
__builtin_memmove((R+24),(R+4),4);
}
B4e83c4:{NFSU2_TR(0x4e83c4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e83c5:{NFSU2_TR(0x4e83c5);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e83c9:{NFSU2_TR(0x4e83c9);
u8 U[4];
w4(U+0,u32(0x797a30ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4e83cf:{NFSU2_TR(0x4e83cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1a8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e83d5:{NFSU2_TR(0x4e83d5);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4e83d7:{NFSU2_TR(0x4e83d7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e83d8:{NFSU2_TR(0x4e83d8);
w4(R+4,u32(0x83ad90ull));
}
B4e83dd:{NFSU2_TR(0x4e83dd);
u8 U[8];
w4(U+0,u32(u32(u32(0x90cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e83e4:{NFSU2_TR(0x4e83e4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e83e9ull));
TAIL_STATIC(0x503510u,503);
}
B4e83e9:L4e83e9:{c.instructions+=3;NFSU2_TR(0x4e83e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1b8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e83ef:{NFSU2_TR(0x4e83ef);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4e83f1:{NFSU2_TR(0x4e83f1);
if(r1(R+518)){{goto L4e84fe;}}
}
B4e83f7:L4e83f7:{c.instructions+=3;NFSU2_TR(0x4e83f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4e83fa:{NFSU2_TR(0x4e83fa);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1a8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4e8400:{NFSU2_TR(0x4e8400);
if(r1(R+518)){{goto L4e8416;}}
}
B4e8402:L4e8402:{c.instructions+=3;NFSU2_TR(0x4e8402);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e8403:{NFSU2_TR(0x4e8403);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e8404:{NFSU2_TR(0x4e8404);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e8409ull));
TAIL_STATIC(0x516b90u,516);
}
B4e8409:L4e8409:{c.instructions+=2;NFSU2_TR(0x4e8409);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1b8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e840f:{NFSU2_TR(0x4e840f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
w4(U+4,u32(0x10ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4e8416:L4e8416:{c.instructions+=2;NFSU2_TR(0x4e8416);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4e841a:{NFSU2_TR(0x4e841a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e841full));
TAIL_STATIC(0x40c910u,40c);
}
B4e841f:L4e841f:{c.instructions+=8;NFSU2_TR(0x4e841f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1b8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e8425:{NFSU2_TR(0x4e8425);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4e8427:{NFSU2_TR(0x4e8427);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e8428:{NFSU2_TR(0x4e8428);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4e842c:{NFSU2_TR(0x4e842c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e842d:{NFSU2_TR(0x4e842d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e842e:{NFSU2_TR(0x4e842e);
u8 U[5];
w4(U+0,u32(u32(u32(0x914ull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4e8436:{NFSU2_TR(0x4e8436);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e8439ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4e8439:L4e8439:{c.instructions+=6;NFSU2_TR(0x4e8439);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1b8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e843f:{NFSU2_TR(0x4e843f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e8442:{NFSU2_TR(0x4e8442);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e8443:{NFSU2_TR(0x4e8443);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e8444:{NFSU2_TR(0x4e8444);
w4(R+4,u32(0x83aab4ull));
}
B4e8449:{NFSU2_TR(0x4e8449);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e844eull));
TAIL_STATIC(0x502a40u,502);
}
B4e844e:L4e844e:{c.instructions+=2;NFSU2_TR(0x4e844e);
u8 U[4];
w4(U+0,u32(0x78fcd8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e8453:{NFSU2_TR(0x4e8453);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e8458ull));
TAIL_STATIC(0x52cf60u,52c);
}
B4e8458:L4e8458:{c.instructions+=3;NFSU2_TR(0x4e8458);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e845b:{NFSU2_TR(0x4e845b);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4e845d:{NFSU2_TR(0x4e845d);
if(r1(R+518)){{goto L4e8470;}}
}
B4e845f:L4e845f:{c.instructions+=2;NFSU2_TR(0x4e845f);
u8 U[4];
w4(U+0,u32(0x78fcd8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e8464:{NFSU2_TR(0x4e8464);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e8469ull));
TAIL_STATIC(0x51bd10u,51b);
}
B4e8469:L4e8469:{c.instructions+=3;NFSU2_TR(0x4e8469);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e846c:{NFSU2_TR(0x4e846c);
__builtin_memmove((R+28),(R+0),4);
}
B4e846e:{NFSU2_TR(0x4e846e);
{goto L4e8495;}
}
B4e8470:L4e8470:{c.instructions+=2;NFSU2_TR(0x4e8470);
u8 U[4];
w4(U+0,u32(0x7906dcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e8475:{NFSU2_TR(0x4e8475);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e847aull));
TAIL_STATIC(0x52cf60u,52c);
}
B4e847a:L4e847a:{c.instructions+=3;NFSU2_TR(0x4e847a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e847d:{NFSU2_TR(0x4e847d);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4e847f:{NFSU2_TR(0x4e847f);
if(r1(R+518)){{goto L4e8495;}}
}
B4e8481:L4e8481:{c.instructions+=2;NFSU2_TR(0x4e8481);
u8 U[4];
w4(U+0,u32(0x7906dcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e8486:{NFSU2_TR(0x4e8486);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e848bull));
TAIL_STATIC(0x51bd10u,51b);
}
B4e848b:L4e848b:{c.instructions+=3;NFSU2_TR(0x4e848b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e848e:{NFSU2_TR(0x4e848e);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4e8490:{NFSU2_TR(0x4e8490);
if(r1(R+518)){{goto L4e8495;}}
}
B4e8492:L4e8492:{c.instructions+=1;NFSU2_TR(0x4e8492);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4e8495:L4e8495:{c.instructions+=4;NFSU2_TR(0x4e8495);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4e8499:{NFSU2_TR(0x4e8499);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e849a:{NFSU2_TR(0x4e849a);
w4(R+4,u32(0x8371b0ull));
}
B4e849f:{NFSU2_TR(0x4e849f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e84a4ull));
TAIL_STATIC(0x413440u,413);
}
B4e84a4:L4e84a4:{c.instructions+=3;NFSU2_TR(0x4e84a4);
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
B4e84a6:{NFSU2_TR(0x4e84a6);
s4(0x83623c,u32(0x1ull));
}
B4e84b0:{NFSU2_TR(0x4e84b0);
if(r1(R+518)){{goto L4e84c0;}}
}
B4e84b2:L4e84b2:{c.instructions+=4;NFSU2_TR(0x4e84b2);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e84b4:{NFSU2_TR(0x4e84b4);
u8 U[4];
w4(U+0,u32(0x8371b0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e84b9:{NFSU2_TR(0x4e84b9);
__builtin_memmove((R+4),(R+28),4);
}
B4e84bb:{NFSU2_TR(0x4e84bb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e84c0ull));
TAIL_STATIC(0x4d8c70u,4d8);
}
B4e84c0:L4e84c0:{c.instructions+=9;NFSU2_TR(0x4e84c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1b8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e84c6:{NFSU2_TR(0x4e84c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e84c9:{NFSU2_TR(0x4e84c9);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e84cb:{NFSU2_TR(0x4e84cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1a8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e84d1:{NFSU2_TR(0x4e84d1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e84d2:{NFSU2_TR(0x4e84d2);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e84d4:{NFSU2_TR(0x4e84d4);
w4(R+4,u32(0x838980ull));
}
B4e84d9:{NFSU2_TR(0x4e84d9);
__builtin_memmove(gp(0x836338),(R+0),4);
}
B4e84de:{NFSU2_TR(0x4e84de);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e84e3ull));
TAIL_STATIC(0x50e8b0u,50e);
}
B4e84e3:L4e84e3:{c.instructions+=4;NFSU2_TR(0x4e84e3);
u8 U[4];
w4(U+0,u32(u32(u32(0x390ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4e84ea:{NFSU2_TR(0x4e84ea);
s1(0x7f4450,u8(0x1ull));
}
B4e84f1:{NFSU2_TR(0x4e84f1);
u8 U[5];
w4(U+0,u32(u32(u32(0x908ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4e84f9:{NFSU2_TR(0x4e84f9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e84feull));
TAIL_STATIC(0x4022c0u,402);
}
B4e84fe:L4e84fe:{c.instructions+=3;NFSU2_TR(0x4e84fe);
__builtin_memmove((R+4),(R+24),4);
}
B4e8500:{NFSU2_TR(0x4e8500);
u8 U[8];
w4(U+0,u32(u32(u32(0x908ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4e850b:{NFSU2_TR(0x4e850b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e8510ull));
TAIL_STATIC(0x4e20b0u,4e2);
}
B4e8510:L4e8510:{c.instructions+=7;NFSU2_TR(0x4e8510);
u8 U[8];
w4(U+0,u32(u32(u32(0x900ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e8517:{NFSU2_TR(0x4e8517);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4e8518:{NFSU2_TR(0x4e8518);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e8519:{NFSU2_TR(0x4e8519);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e8520:{NFSU2_TR(0x4e8520);
__builtin_memmove((R+16),(R+20),4);
}
B4e8522:{NFSU2_TR(0x4e8522);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4e8523:{NFSU2_TR(0x4e8523);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e8530:L4e8530:{c.instructions+=16;NFSU2_TR(0x4e8530);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e8531:{NFSU2_TR(0x4e8531);
__builtin_memmove((R+20),(R+16),4);
}
B4e8533:{NFSU2_TR(0x4e8533);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B4e8536:{NFSU2_TR(0x4e8536);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e8538:{NFSU2_TR(0x4e8538);
u8 U[4];
w4(U+0,u32(0x77389bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e853d:{NFSU2_TR(0x4e853d);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e8543:{NFSU2_TR(0x4e8543);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e8544:{NFSU2_TR(0x4e8544);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e854b:{NFSU2_TR(0x4e854b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8fcull))));
}
B4e8551:{NFSU2_TR(0x4e8551);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e8554:{NFSU2_TR(0x4e8554);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x9120409eull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e8559:{NFSU2_TR(0x4e8559);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e855a:{NFSU2_TR(0x4e855a);
__builtin_memmove((R+24),(R+4),4);
}
B4e855c:{NFSU2_TR(0x4e855c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e855d:{NFSU2_TR(0x4e855d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4e8560:{NFSU2_TR(0x4e8560);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4e8636;}}
}
B4e8566:L4e8566:{c.instructions+=3;NFSU2_TR(0x4e8566);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e8569:{NFSU2_TR(0x4e8569);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e856b:{NFSU2_TR(0x4e856b);
if(r1(R+518)){{goto L4e8572;}}
}
B4e856d:L4e856d:{c.instructions+=2;NFSU2_TR(0x4e856d);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffff0ull))));
}
B4e8570:{NFSU2_TR(0x4e8570);
{goto L4e8574;}
}
B4e8572:L4e8572:{c.instructions+=1;NFSU2_TR(0x4e8572);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4e8574:L4e8574:{c.instructions+=2;NFSU2_TR(0x4e8574);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4e8576:{NFSU2_TR(0x4e8576);
if(r1(R+518)){{goto L4e86f2;}}
}
B4e857c:L4e857c:{c.instructions+=6;NFSU2_TR(0x4e857c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e857f:{NFSU2_TR(0x4e857f);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e8581:{NFSU2_TR(0x4e8581);
u8 U[4];
w4(U+0,u32(0x78f568ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e8586:{NFSU2_TR(0x4e8586);
u8 U[4];
w4(U+0,u32(0x790e98ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e858b:{NFSU2_TR(0x4e858b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e858c:{NFSU2_TR(0x4e858c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e8591ull));
TAIL_STATIC(0x5426c0u,542);
}
B4e8591:L4e8591:{c.instructions+=5;NFSU2_TR(0x4e8591);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e8594:{NFSU2_TR(0x4e8594);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e8597:{NFSU2_TR(0x4e8597);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4e859a:{NFSU2_TR(0x4e859a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e859c:{NFSU2_TR(0x4e859c);
if(r1(R+518)){{goto L4e85a3;}}
}
B4e859e:L4e859e:{c.instructions+=2;NFSU2_TR(0x4e859e);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0xfffffff0ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0xfffffff0ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffff0ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4e85a1:{NFSU2_TR(0x4e85a1);
{goto L4e85a5;}
}
B4e85a3:L4e85a3:{c.instructions+=1;NFSU2_TR(0x4e85a3);
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
B4e85a5:L4e85a5:{c.instructions+=7;NFSU2_TR(0x4e85a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e85a8:{NFSU2_TR(0x4e85a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e85ab:{NFSU2_TR(0x4e85ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x920ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e85b1:{NFSU2_TR(0x4e85b1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e85b2:{NFSU2_TR(0x4e85b2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e85b3:{NFSU2_TR(0x4e85b3);
w4(R+4,u32(0x83aab4ull));
}
B4e85b8:{NFSU2_TR(0x4e85b8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e85bdull));
TAIL_STATIC(0x502a40u,502);
}
B4e85bd:L4e85bd:{c.instructions+=5;NFSU2_TR(0x4e85bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e85c0:{NFSU2_TR(0x4e85c0);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
}
B4e85c1:{NFSU2_TR(0x4e85c1);
u8 U[4];
w4(U+0,u32(0x78fcd8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e85c6:{NFSU2_TR(0x4e85c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e85c9:{NFSU2_TR(0x4e85c9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e85ceull));
TAIL_STATIC(0x52cf60u,52c);
}
B4e85ce:L4e85ce:{c.instructions+=3;NFSU2_TR(0x4e85ce);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e85d1:{NFSU2_TR(0x4e85d1);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4e85d3:{NFSU2_TR(0x4e85d3);
if(r1(R+518)){{goto L4e85f1;}}
}
B4e85d5:L4e85d5:{c.instructions+=2;NFSU2_TR(0x4e85d5);
u8 U[4];
w4(U+0,u32(0x78fcd8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e85da:{NFSU2_TR(0x4e85da);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e85dfull));
TAIL_STATIC(0x51bd10u,51b);
}
B4e85df:L4e85df:{c.instructions+=3;NFSU2_TR(0x4e85df);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e85e2:{NFSU2_TR(0x4e85e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x148ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4e85ec:{NFSU2_TR(0x4e85ec);
{goto L4e86f2;}
}
B4e85f1:L4e85f1:{c.instructions+=2;NFSU2_TR(0x4e85f1);
u8 U[4];
w4(U+0,u32(0x7906dcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e85f6:{NFSU2_TR(0x4e85f6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e85fbull));
TAIL_STATIC(0x52cf60u,52c);
}
B4e85fb:L4e85fb:{c.instructions+=3;NFSU2_TR(0x4e85fb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e85fe:{NFSU2_TR(0x4e85fe);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4e8600:{NFSU2_TR(0x4e8600);
if(r1(R+518)){{goto L4e8625;}}
}
B4e8602:L4e8602:{c.instructions+=2;NFSU2_TR(0x4e8602);
u8 U[4];
w4(U+0,u32(0x7906dcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e8607:{NFSU2_TR(0x4e8607);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e860cull));
TAIL_STATIC(0x51bd10u,51b);
}
B4e860c:L4e860c:{c.instructions+=3;NFSU2_TR(0x4e860c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e860f:{NFSU2_TR(0x4e860f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e8611:{NFSU2_TR(0x4e8611);
if(r1(R+518)){{goto L4e8625;}}
}
B4e8613:L4e8613:{c.instructions+=3;NFSU2_TR(0x4e8613);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e8616:{NFSU2_TR(0x4e8616);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x148ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4e8620:{NFSU2_TR(0x4e8620);
{goto L4e86f2;}
}
B4e8625:L4e8625:{c.instructions+=3;NFSU2_TR(0x4e8625);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4e8627:{NFSU2_TR(0x4e8627);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x148ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4e8631:{NFSU2_TR(0x4e8631);
{goto L4e86f2;}
}
B4e8636:L4e8636:{c.instructions+=2;NFSU2_TR(0x4e8636);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xb5971bf1ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e863b:{NFSU2_TR(0x4e863b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4e86f2;}}
}
B4e8641:L4e8641:{c.instructions+=3;NFSU2_TR(0x4e8641);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e8644:{NFSU2_TR(0x4e8644);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e8646:{NFSU2_TR(0x4e8646);
if(r1(R+518)){{goto L4e864d;}}
}
B4e8648:L4e8648:{c.instructions+=2;NFSU2_TR(0x4e8648);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffff0ull))));
}
B4e864b:{NFSU2_TR(0x4e864b);
{goto L4e864f;}
}
B4e864d:L4e864d:{c.instructions+=1;NFSU2_TR(0x4e864d);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4e864f:L4e864f:{c.instructions+=2;NFSU2_TR(0x4e864f);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4e8651:{NFSU2_TR(0x4e8651);
if(r1(R+518)){{goto L4e86f2;}}
}
B4e8657:L4e8657:{c.instructions+=6;NFSU2_TR(0x4e8657);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e865a:{NFSU2_TR(0x4e865a);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e865c:{NFSU2_TR(0x4e865c);
u8 U[4];
w4(U+0,u32(0x78f568ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e8661:{NFSU2_TR(0x4e8661);
u8 U[4];
w4(U+0,u32(0x790e84ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e8666:{NFSU2_TR(0x4e8666);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e8667:{NFSU2_TR(0x4e8667);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e866cull));
TAIL_STATIC(0x5426c0u,542);
}
B4e866c:L4e866c:{c.instructions+=5;NFSU2_TR(0x4e866c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e866f:{NFSU2_TR(0x4e866f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e8672:{NFSU2_TR(0x4e8672);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4e8675:{NFSU2_TR(0x4e8675);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e8677:{NFSU2_TR(0x4e8677);
if(r1(R+518)){{goto L4e867e;}}
}
B4e8679:L4e8679:{c.instructions+=2;NFSU2_TR(0x4e8679);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0xfffffff0ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0xfffffff0ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffff0ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4e867c:{NFSU2_TR(0x4e867c);
{goto L4e8680;}
}
B4e867e:L4e867e:{c.instructions+=1;NFSU2_TR(0x4e867e);
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
B4e8680:L4e8680:{c.instructions+=7;NFSU2_TR(0x4e8680);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e8683:{NFSU2_TR(0x4e8683);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e8686:{NFSU2_TR(0x4e8686);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x920ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e868c:{NFSU2_TR(0x4e868c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e868d:{NFSU2_TR(0x4e868d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e868e:{NFSU2_TR(0x4e868e);
w4(R+4,u32(0x83aab4ull));
}
B4e8693:{NFSU2_TR(0x4e8693);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e8698ull));
TAIL_STATIC(0x502a40u,502);
}
B4e8698:L4e8698:{c.instructions+=5;NFSU2_TR(0x4e8698);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e869b:{NFSU2_TR(0x4e869b);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B4e869c:{NFSU2_TR(0x4e869c);
u8 U[4];
w4(U+0,u32(0x78fcd8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e86a1:{NFSU2_TR(0x4e86a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e86a4:{NFSU2_TR(0x4e86a4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e86a9ull));
TAIL_STATIC(0x52cf60u,52c);
}
B4e86a9:L4e86a9:{c.instructions+=3;NFSU2_TR(0x4e86a9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e86ac:{NFSU2_TR(0x4e86ac);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4e86ae:{NFSU2_TR(0x4e86ae);
if(r1(R+518)){{goto L4e86bf;}}
}
B4e86b0:L4e86b0:{c.instructions+=2;NFSU2_TR(0x4e86b0);
u8 U[4];
w4(U+0,u32(0x78fcd8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e86b5:{NFSU2_TR(0x4e86b5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e86baull));
TAIL_STATIC(0x51bd10u,51b);
}
B4e86ba:L4e86ba:{c.instructions+=2;NFSU2_TR(0x4e86ba);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e86bd:{NFSU2_TR(0x4e86bd);
{goto L4e86e8;}
}
B4e86bf:L4e86bf:{c.instructions+=2;NFSU2_TR(0x4e86bf);
u8 U[4];
w4(U+0,u32(0x7906dcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e86c4:{NFSU2_TR(0x4e86c4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e86c9ull));
TAIL_STATIC(0x52cf60u,52c);
}
B4e86c9:L4e86c9:{c.instructions+=3;NFSU2_TR(0x4e86c9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e86cc:{NFSU2_TR(0x4e86cc);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4e86ce:{NFSU2_TR(0x4e86ce);
if(r1(R+518)){{goto L4e86e6;}}
}
B4e86d0:L4e86d0:{c.instructions+=2;NFSU2_TR(0x4e86d0);
u8 U[4];
w4(U+0,u32(0x7906dcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e86d5:{NFSU2_TR(0x4e86d5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e86daull));
TAIL_STATIC(0x51bd10u,51b);
}
B4e86da:L4e86da:{c.instructions+=3;NFSU2_TR(0x4e86da);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e86dd:{NFSU2_TR(0x4e86dd);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e86df:{NFSU2_TR(0x4e86df);
if(r1(R+518)){{goto L4e86e6;}}
}
B4e86e1:L4e86e1:{c.instructions+=2;NFSU2_TR(0x4e86e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e86e4:{NFSU2_TR(0x4e86e4);
{goto L4e86e8;}
}
B4e86e6:L4e86e6:{c.instructions+=1;NFSU2_TR(0x4e86e6);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4e86e8:L4e86e8:{c.instructions+=1;NFSU2_TR(0x4e86e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x148ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4e86f2:L4e86f2:{c.instructions+=2;NFSU2_TR(0x4e86f2);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+28))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+28)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B4e86f5:{NFSU2_TR(0x4e86f5);
if(r1(R+518)){{goto L4e889f;}}
}
B4e86fb:L4e86fb:{c.instructions+=6;NFSU2_TR(0x4e86fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e86fe:{NFSU2_TR(0x4e86fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4e8701:{NFSU2_TR(0x4e8701);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e8703:{NFSU2_TR(0x4e8703);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e8705:{NFSU2_TR(0x4e8705);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e8706:{NFSU2_TR(0x4e8706);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e870bull));
TAIL_STATIC(0x50d260u,50d);
}
B4e870b:L4e870b:{c.instructions+=3;NFSU2_TR(0x4e870b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e870c:{NFSU2_TR(0x4e870c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e870d:{NFSU2_TR(0x4e870d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e8712ull));
TAIL_STATIC(0x51de60u,51d);
}
B4e8712:L4e8712:{c.instructions+=6;NFSU2_TR(0x4e8712);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e8715:{NFSU2_TR(0x4e8715);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x918ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e871b:{NFSU2_TR(0x4e871b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x844ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4e8721:{NFSU2_TR(0x4e8721);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B4e8724:{NFSU2_TR(0x4e8724);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e8726:{NFSU2_TR(0x4e8726);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4e87bb;}}
}
B4e872c:L4e872c:{c.instructions+=4;NFSU2_TR(0x4e872c);
__builtin_memmove((R+8),(R+4),4);
}
B4e872e:{NFSU2_TR(0x4e872e);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x840ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4e8734:{NFSU2_TR(0x4e8734);
u8 U[4];
w4(U+0,u32(0x78fcd8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e8739:{NFSU2_TR(0x4e8739);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e873eull));
TAIL_STATIC(0x52cf60u,52c);
}
B4e873e:L4e873e:{c.instructions+=3;NFSU2_TR(0x4e873e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e8741:{NFSU2_TR(0x4e8741);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4e8743:{NFSU2_TR(0x4e8743);
if(r1(R+518)){{goto L4e8754;}}
}
B4e8745:L4e8745:{c.instructions+=2;NFSU2_TR(0x4e8745);
u8 U[4];
w4(U+0,u32(0x78fcd8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e874a:{NFSU2_TR(0x4e874a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e874full));
TAIL_STATIC(0x51bd10u,51b);
}
B4e874f:L4e874f:{c.instructions+=2;NFSU2_TR(0x4e874f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e8752:{NFSU2_TR(0x4e8752);
{goto L4e8779;}
}
B4e8754:L4e8754:{c.instructions+=2;NFSU2_TR(0x4e8754);
u8 U[4];
w4(U+0,u32(0x7906dcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e8759:{NFSU2_TR(0x4e8759);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e875eull));
TAIL_STATIC(0x52cf60u,52c);
}
B4e875e:L4e875e:{c.instructions+=3;NFSU2_TR(0x4e875e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e8761:{NFSU2_TR(0x4e8761);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4e8763:{NFSU2_TR(0x4e8763);
if(r1(R+518)){{goto L4e8785;}}
}
B4e8765:L4e8765:{c.instructions+=2;NFSU2_TR(0x4e8765);
u8 U[4];
w4(U+0,u32(0x7906dcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e876a:{NFSU2_TR(0x4e876a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e876full));
TAIL_STATIC(0x51bd10u,51b);
}
B4e876f:L4e876f:{c.instructions+=3;NFSU2_TR(0x4e876f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e8772:{NFSU2_TR(0x4e8772);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e8774:{NFSU2_TR(0x4e8774);
if(r1(R+518)){{goto L4e8785;}}
}
B4e8776:L4e8776:{c.instructions+=1;NFSU2_TR(0x4e8776);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e8779:L4e8779:{c.instructions+=2;NFSU2_TR(0x4e8779);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e877b:{NFSU2_TR(0x4e877b);
if(r1(R+518)){{goto L4e8785;}}
}
B4e877d:L4e877d:{c.instructions+=3;NFSU2_TR(0x4e877d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e877e:{NFSU2_TR(0x4e877e);
__builtin_memmove((R+4),(R+0),4);
}
B4e8780:{NFSU2_TR(0x4e8780);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e8785ull));
TAIL_STATIC(0x4a5ee0u,4a5);
}
B4e8785:L4e8785:{c.instructions+=2;NFSU2_TR(0x4e8785);
u8 U[8];
__builtin_memmove((U+0),gp(0x7f444c),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4e878c:{NFSU2_TR(0x4e878c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4e87aa;}}
}
B4e878e:L4e878e:{c.instructions+=5;NFSU2_TR(0x4e878e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e8791:{NFSU2_TR(0x4e8791);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x920ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e8797:{NFSU2_TR(0x4e8797);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e8798:{NFSU2_TR(0x4e8798);
w4(R+4,u32(0x83ad90ull));
}
B4e879d:{NFSU2_TR(0x4e879d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e87a2ull));
TAIL_STATIC(0x503510u,503);
}
B4e87a2:L4e87a2:{c.instructions+=3;NFSU2_TR(0x4e87a2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e87a3:{NFSU2_TR(0x4e87a3);
__builtin_memmove((R+4),(R+24),4);
}
B4e87a5:{NFSU2_TR(0x4e87a5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e87aaull));
TAIL_STATIC(0x497f20u,497);
}
B4e87aa:L4e87aa:{c.instructions+=3;NFSU2_TR(0x4e87aa);
__builtin_memmove((R+4),gp(0x8651ac),4);
}
B4e87b0:{NFSU2_TR(0x4e87b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e87b6:{NFSU2_TR(0x4e87b6);
{goto L4e8898;}
}
B4e87bb:L4e87bb:{c.instructions+=2;NFSU2_TR(0x4e87bb);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4e87bf:{NFSU2_TR(0x4e87bf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e87c4ull));
TAIL_STATIC(0x40c910u,40c);
}
B4e87c4:L4e87c4:{c.instructions+=10;NFSU2_TR(0x4e87c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e87c7:{NFSU2_TR(0x4e87c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x918ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4e87cd:{NFSU2_TR(0x4e87cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x840ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e87d3:{NFSU2_TR(0x4e87d3);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e87d5:{NFSU2_TR(0x4e87d5);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e87d7:{NFSU2_TR(0x4e87d7);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e87d9:{NFSU2_TR(0x4e87d9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e87da:{NFSU2_TR(0x4e87da);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4e87de:{NFSU2_TR(0x4e87de);
u8 U[8];
w4(U+0,u32(u32(u32(0x91cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4e87e9:{NFSU2_TR(0x4e87e9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e87eeull));
TAIL_STATIC(0x610270u,610);
}
B4e87ee:L4e87ee:{c.instructions+=3;NFSU2_TR(0x4e87ee);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e87f0:{NFSU2_TR(0x4e87f0);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4e87f4:{NFSU2_TR(0x4e87f4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e87f9ull));
TAIL_STATIC(0x61c280u,61c);
}
B4e87f9:L4e87f9:{c.instructions+=2;NFSU2_TR(0x4e87f9);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4e87fd:{NFSU2_TR(0x4e87fd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e8802ull));
TAIL_STATIC(0x637190u,637);
}
B4e8802:L4e8802:{c.instructions+=2;NFSU2_TR(0x4e8802);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4e8806:{NFSU2_TR(0x4e8806);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e880bull));
TAIL_STATIC(0x6371e0u,637);
}
B4e880b:L4e880b:{c.instructions+=2;NFSU2_TR(0x4e880b);
u8 U[4];
w4(U+0,u32(0x78fcd8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e8810:{NFSU2_TR(0x4e8810);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e8815ull));
TAIL_STATIC(0x52cf60u,52c);
}
B4e8815:L4e8815:{c.instructions+=3;NFSU2_TR(0x4e8815);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e8818:{NFSU2_TR(0x4e8818);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4e881a:{NFSU2_TR(0x4e881a);
if(r1(R+518)){{goto L4e882d;}}
}
B4e881c:L4e881c:{c.instructions+=2;NFSU2_TR(0x4e881c);
u8 U[4];
w4(U+0,u32(0x78fcd8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e8821:{NFSU2_TR(0x4e8821);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e8826ull));
TAIL_STATIC(0x51bd10u,51b);
}
B4e8826:L4e8826:{c.instructions+=3;NFSU2_TR(0x4e8826);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e8829:{NFSU2_TR(0x4e8829);
__builtin_memmove((R+28),(R+0),4);
}
B4e882b:{NFSU2_TR(0x4e882b);
{goto L4e8856;}
}
B4e882d:L4e882d:{c.instructions+=2;NFSU2_TR(0x4e882d);
u8 U[4];
w4(U+0,u32(0x7906dcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e8832:{NFSU2_TR(0x4e8832);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e8837ull));
TAIL_STATIC(0x52cf60u,52c);
}
B4e8837:L4e8837:{c.instructions+=3;NFSU2_TR(0x4e8837);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e883a:{NFSU2_TR(0x4e883a);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4e883c:{NFSU2_TR(0x4e883c);
if(r1(R+518)){{goto L4e8854;}}
}
B4e883e:L4e883e:{c.instructions+=2;NFSU2_TR(0x4e883e);
u8 U[4];
w4(U+0,u32(0x7906dcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e8843:{NFSU2_TR(0x4e8843);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e8848ull));
TAIL_STATIC(0x51bd10u,51b);
}
B4e8848:L4e8848:{c.instructions+=3;NFSU2_TR(0x4e8848);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e884b:{NFSU2_TR(0x4e884b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e884d:{NFSU2_TR(0x4e884d);
if(r1(R+518)){{goto L4e8854;}}
}
B4e884f:L4e884f:{c.instructions+=2;NFSU2_TR(0x4e884f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4e8852:{NFSU2_TR(0x4e8852);
{goto L4e8856;}
}
B4e8854:L4e8854:{c.instructions+=1;NFSU2_TR(0x4e8854);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B4e8856:L4e8856:{c.instructions+=4;NFSU2_TR(0x4e8856);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4e885a:{NFSU2_TR(0x4e885a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e885b:{NFSU2_TR(0x4e885b);
w4(R+4,u32(0x8371b0ull));
}
B4e8860:{NFSU2_TR(0x4e8860);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e8865ull));
TAIL_STATIC(0x413440u,413);
}
B4e8865:L4e8865:{c.instructions+=3;NFSU2_TR(0x4e8865);
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
B4e8867:{NFSU2_TR(0x4e8867);
s4(0x83623c,u32(0x1ull));
}
B4e8871:{NFSU2_TR(0x4e8871);
if(r1(R+518)){{goto L4e8881;}}
}
B4e8873:L4e8873:{c.instructions+=4;NFSU2_TR(0x4e8873);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e8875:{NFSU2_TR(0x4e8875);
u8 U[4];
w4(U+0,u32(0x8371b0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e887a:{NFSU2_TR(0x4e887a);
__builtin_memmove((R+4),(R+28),4);
}
B4e887c:{NFSU2_TR(0x4e887c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e8881ull));
TAIL_STATIC(0x4d8c70u,4d8);
}
B4e8881:L4e8881:{c.instructions+=3;NFSU2_TR(0x4e8881);
u8 U[4];
w4(U+0,u32(u32(u32(0x394ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4e8888:{NFSU2_TR(0x4e8888);
u8 U[8];
w4(U+0,u32(u32(u32(0x90cull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4e8893:{NFSU2_TR(0x4e8893);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e8898ull));
TAIL_STATIC(0x4022c0u,402);
}
B4e8898:L4e8898:{c.instructions+=2;NFSU2_TR(0x4e8898);
__builtin_memmove((R+4),(R+24),4);
}
B4e889a:{NFSU2_TR(0x4e889a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e889full));
TAIL_STATIC(0x4be440u,4be);
}
B4e889f:L4e889f:{c.instructions+=7;NFSU2_TR(0x4e889f);
u8 U[8];
w4(U+0,u32(u32(u32(0x904ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e88a6:{NFSU2_TR(0x4e88a6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4e88a7:{NFSU2_TR(0x4e88a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e88ae:{NFSU2_TR(0x4e88ae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e88af:{NFSU2_TR(0x4e88af);
__builtin_memmove((R+16),(R+20),4);
}
B4e88b1:{NFSU2_TR(0x4e88b1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4e88b2:{NFSU2_TR(0x4e88b2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e88c0:L4e88c0:{c.instructions+=8;NFSU2_TR(0x4e88c0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e88c2:{NFSU2_TR(0x4e88c2);
u8 U[4];
w4(U+0,u32(0x775ef4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e88c7:{NFSU2_TR(0x4e88c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e88cd:{NFSU2_TR(0x4e88cd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e88ce:{NFSU2_TR(0x4e88ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e88d5:{NFSU2_TR(0x4e88d5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e88d6:{NFSU2_TR(0x4e88d6);
u8 U[4];
w4(U+0,u32(0x1e8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e88db:{NFSU2_TR(0x4e88db);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e88e0ull));
TAIL_STATIC(0x575620u,575);
}
B4e88e0:L4e88e0:{c.instructions+=5;NFSU2_TR(0x4e88e0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e88e3:{NFSU2_TR(0x4e88e3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B4e88e7:{NFSU2_TR(0x4e88e7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e88e9:{NFSU2_TR(0x4e88e9);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4e88f1:{NFSU2_TR(0x4e88f1);
if(r1(R+518)){{goto L4e890e;}}
}
B4e88f3:L4e88f3:{c.instructions+=4;NFSU2_TR(0x4e88f3);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e88f7:{NFSU2_TR(0x4e88f7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e88f8:{NFSU2_TR(0x4e88f8);
__builtin_memmove((R+4),(R+0),4);
}
B4e88fa:{NFSU2_TR(0x4e88fa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e88ffull));
TAIL_STATIC(0x4d69c0u,4d6);
}
B4e88ff:L4e88ff:{c.instructions+=4;NFSU2_TR(0x4e88ff);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e8903:{NFSU2_TR(0x4e8903);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e890a:{NFSU2_TR(0x4e890a);
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
B4e890d:{NFSU2_TR(0x4e890d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e890e:L4e890e:{c.instructions+=5;NFSU2_TR(0x4e890e);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e8912:{NFSU2_TR(0x4e8912);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4e8914:{NFSU2_TR(0x4e8914);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e891b:{NFSU2_TR(0x4e891b);
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
B4e891e:{NFSU2_TR(0x4e891e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e8920:L4e8920:{c.instructions+=3;NFSU2_TR(0x4e8920);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e8921:{NFSU2_TR(0x4e8921);
__builtin_memmove((R+24),(R+4),4);
}
B4e8923:{NFSU2_TR(0x4e8923);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e8928ull));
TAIL_STATIC(0x4d6b10u,4d6);
}
B4e8928:L4e8928:{c.instructions+=2;NFSU2_TR(0x4e8928);
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
B4e892d:{NFSU2_TR(0x4e892d);
if(r1(R+518)){{goto L4e8938;}}
}
B4e892f:L4e892f:{c.instructions+=2;NFSU2_TR(0x4e892f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e8930:{NFSU2_TR(0x4e8930);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e8935ull));
TAIL_STATIC(0x575630u,575);
}
B4e8935:L4e8935:{c.instructions+=1;NFSU2_TR(0x4e8935);
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
B4e8938:L4e8938:{c.instructions+=3;NFSU2_TR(0x4e8938);
__builtin_memmove((R+0),(R+24),4);
}
B4e893a:{NFSU2_TR(0x4e893a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e893b:{NFSU2_TR(0x4e893b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e8940:L4e8940:{c.instructions+=3;NFSU2_TR(0x4e8940);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e8941:{NFSU2_TR(0x4e8941);
__builtin_memmove((R+24),(R+4),4);
}
B4e8943:{NFSU2_TR(0x4e8943);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e8948ull));
TAIL_STATIC(0x4d6bc0u,4d6);
}
B4e8948:L4e8948:{c.instructions+=2;NFSU2_TR(0x4e8948);
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
B4e894d:{NFSU2_TR(0x4e894d);
if(r1(R+518)){{goto L4e8958;}}
}
B4e894f:L4e894f:{c.instructions+=2;NFSU2_TR(0x4e894f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e8950:{NFSU2_TR(0x4e8950);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e8955ull));
TAIL_STATIC(0x575630u,575);
}
B4e8955:L4e8955:{c.instructions+=1;NFSU2_TR(0x4e8955);
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
B4e8958:L4e8958:{c.instructions+=3;NFSU2_TR(0x4e8958);
__builtin_memmove((R+0),(R+24),4);
}
B4e895a:{NFSU2_TR(0x4e895a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e895b:{NFSU2_TR(0x4e895b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e8960:L4e8960:{c.instructions+=7;NFSU2_TR(0x4e8960);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B4e8963:{NFSU2_TR(0x4e8963);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e8964:{NFSU2_TR(0x4e8964);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e8965:{NFSU2_TR(0x4e8965);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e8966:{NFSU2_TR(0x4e8966);
u8 U[4];
w4(U+0,u32(0x1cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e8968:{NFSU2_TR(0x4e8968);
__builtin_memmove((R+12),(R+4),4);
}
B4e896a:{NFSU2_TR(0x4e896a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e896full));
TAIL_STATIC(0x575620u,575);
}
B4e896f:L4e896f:{c.instructions+=3;NFSU2_TR(0x4e896f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e8972:{NFSU2_TR(0x4e8972);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e8974:{NFSU2_TR(0x4e8974);
if(r1(R+518)){{goto L4e898c;}}
}
B4e8976:L4e8976:{c.instructions+=7;NFSU2_TR(0x4e8976);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((R+4),(U+0),4);
}
B4e8979:{NFSU2_TR(0x4e8979);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4e897b:{NFSU2_TR(0x4e897b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e897e:{NFSU2_TR(0x4e897e);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4e8982:{NFSU2_TR(0x4e8982);
u8 U[4];
w4(U+0,u32(0x795cb0ull));
s4(u32(r4(R+0)),r4(U+0));
}
B4e8988:{NFSU2_TR(0x4e8988);
__builtin_memmove((R+24),(R+0),4);
}
B4e898a:{NFSU2_TR(0x4e898a);
{goto L4e898e;}
}
B4e898c:L4e898c:{c.instructions+=1;NFSU2_TR(0x4e898c);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B4e898e:L4e898e:{c.instructions+=8;NFSU2_TR(0x4e898e);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4e8992:{NFSU2_TR(0x4e8992);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e8994:{NFSU2_TR(0x4e8994);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e8996:{NFSU2_TR(0x4e8996);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4e8999:{NFSU2_TR(0x4e8999);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e899a:{NFSU2_TR(0x4e899a);
__builtin_memmove((R+4),(R+24),4);
}
B4e899c:{NFSU2_TR(0x4e899c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e899f:{NFSU2_TR(0x4e899f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e89a4ull));
TAIL_STATIC(0x4aea60u,4ae);
}
B4e89a4:L4e89a4:{c.instructions+=12;NFSU2_TR(0x4e89a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4e89a7:{NFSU2_TR(0x4e89a7);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B4e89a9:{NFSU2_TR(0x4e89a9);
u8 U[8];
w4(U+0,u32(u32(u32(0xdull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e89ad:{NFSU2_TR(0x4e89ad);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e89ae:{NFSU2_TR(0x4e89ae);
u8 U[8];
w4(U+0,u32(u32(u32(0x15ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e89b2:{NFSU2_TR(0x4e89b2);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4e89b6:{NFSU2_TR(0x4e89b6);
u8 U[6];
w4(U+0,u32(u32(u32(0x19ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B4e89bb:{NFSU2_TR(0x4e89bb);
u8 U[4];
w4(U+0,u32(0x7845d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e89c0:{NFSU2_TR(0x4e89c0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e89c1:{NFSU2_TR(0x4e89c1);
u8 U[5];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4e89c6:{NFSU2_TR(0x4e89c6);
u8 U[5];
w4(U+0,u32(u32(u32(0x23ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4e89ca:{NFSU2_TR(0x4e89ca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e89cfull));
TAIL_STATIC(0x4400d0u,440);
}
B4e89cf:L4e89cf:{c.instructions+=7;NFSU2_TR(0x4e89cf);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4e89d2:{NFSU2_TR(0x4e89d2);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e89d4:{NFSU2_TR(0x4e89d4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e89d6:{NFSU2_TR(0x4e89d6);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4e89da:{NFSU2_TR(0x4e89da);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e89db:{NFSU2_TR(0x4e89db);
__builtin_memmove((R+4),(R+24),4);
}
B4e89dd:{NFSU2_TR(0x4e89dd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e89e2ull));
TAIL_STATIC(0x4aea60u,4ae);
}
B4e89e2:L4e89e2:{c.instructions+=4;NFSU2_TR(0x4e89e2);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4cull))));
__builtin_memmove((R+28),(U+0),4);
}
B4e89e5:{NFSU2_TR(0x4e89e5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e89e6:{NFSU2_TR(0x4e89e6);
__builtin_memmove((R+4),(R+28),4);
}
B4e89e8:{NFSU2_TR(0x4e89e8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e89edull));
TAIL_STATIC(0x51f2e0u,51f);
}
B4e89ed:L4e89ed:{c.instructions+=3;NFSU2_TR(0x4e89ed);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e89ee:{NFSU2_TR(0x4e89ee);
__builtin_memmove((R+4),(R+28),4);
}
B4e89f0:{NFSU2_TR(0x4e89f0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e89f5ull));
TAIL_STATIC(0x52ea50u,52e);
}
B4e89f5:L4e89f5:{c.instructions+=5;NFSU2_TR(0x4e89f5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4e89f6:{NFSU2_TR(0x4e89f6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e89f7:{NFSU2_TR(0x4e89f7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4e89f8:{NFSU2_TR(0x4e89f8);
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
B4e89fb:{NFSU2_TR(0x4e89fb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e8a00:L4e8a00:{c.instructions+=9;NFSU2_TR(0x4e8a00);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x44ull))));
}
B4e8a03:{NFSU2_TR(0x4e8a03);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e8a04:{NFSU2_TR(0x4e8a04);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e8a05:{NFSU2_TR(0x4e8a05);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e8a06:{NFSU2_TR(0x4e8a06);
__builtin_memmove((R+12),(R+4),4);
}
B4e8a08:{NFSU2_TR(0x4e8a08);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4e8a0a:{NFSU2_TR(0x4e8a0a);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4e8a0f:{NFSU2_TR(0x4e8a0f);
w4(R+4,u32(0xfull));
}
B4e8a14:{NFSU2_TR(0x4e8a14);
u8 U[4];
w4(U+0,u32(u32(u32(0x11ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B4e8a18:L4e8a18:{c.instructions+=1;NFSU2_TR(0x4e8a18);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L4e8a1a;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4e8a18u);}goto L4e8a18;}
}
B4e8a1a:L4e8a1a:{c.instructions+=5;NFSU2_TR(0x4e8a1a);
u8 U[18];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x2ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x4ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),2);
s2(u32(r4(U+0)),r2(U+16));
}
B4e8a1c:{NFSU2_TR(0x4e8a1c);
u8 U[17];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
}
B4e8a1d:{NFSU2_TR(0x4e8a1d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x914ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e8a23:{NFSU2_TR(0x4e8a23);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e8a25:{NFSU2_TR(0x4e8a25);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L4e8a54;}}
}
B4e8a27:L4e8a27:{c.instructions+=3;NFSU2_TR(0x4e8a27);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4cull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e8a2a:{NFSU2_TR(0x4e8a2a);
__builtin_memmove((R+4),(R+24),4);
}
B4e8a2c:{NFSU2_TR(0x4e8a2c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e8a31ull));
TAIL_STATIC(0x51f530u,51f);
}
B4e8a31:L4e8a31:{c.instructions+=4;NFSU2_TR(0x4e8a31);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e8a32:{NFSU2_TR(0x4e8a32);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4e8a36:{NFSU2_TR(0x4e8a36);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e8a37:{NFSU2_TR(0x4e8a37);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e8a3cull));
TAIL_STATIC(0x43dbd0u,43d);
}
B4e8a3c:L4e8a3c:{c.instructions+=4;NFSU2_TR(0x4e8a3c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e8a3f:{NFSU2_TR(0x4e8a3f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4e8a42:{NFSU2_TR(0x4e8a42);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e8a44:{NFSU2_TR(0x4e8a44);
if(r1(R+518)){{goto L4e8a54;}}
}
B4e8a46:L4e8a46:{c.instructions+=4;NFSU2_TR(0x4e8a46);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4e8a49:{NFSU2_TR(0x4e8a49);
u8 U[4];
w4(U+0,u32(0x78f21cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e8a4e:{NFSU2_TR(0x4e8a4e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e8a4f:{NFSU2_TR(0x4e8a4f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e8a54ull));
TAIL_STATIC(0x51ee80u,51e);
}
B4e8a54:L4e8a54:{c.instructions+=4;NFSU2_TR(0x4e8a54);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4cull))));
__builtin_memmove((R+28),(U+0),4);
}
B4e8a57:{NFSU2_TR(0x4e8a57);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e8a58:{NFSU2_TR(0x4e8a58);
__builtin_memmove((R+4),(R+28),4);
}
B4e8a5a:{NFSU2_TR(0x4e8a5a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e8a5full));
TAIL_STATIC(0x51f4e0u,51f);
}
B4e8a5f:L4e8a5f:{c.instructions+=6;NFSU2_TR(0x4e8a5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x908ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4e8a65:{NFSU2_TR(0x4e8a65);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x908ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4e8a6b:{NFSU2_TR(0x4e8a6b);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B4e8a6d:{NFSU2_TR(0x4e8a6d);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4e8a6f:{NFSU2_TR(0x4e8a6f);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e8a73:{NFSU2_TR(0x4e8a73);
if(r1(R+518)){{goto L4e8a9a;}}
}
B4e8a75:L4e8a75:{c.instructions+=4;NFSU2_TR(0x4e8a75);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4e8a78:{NFSU2_TR(0x4e8a78);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e8a79:{NFSU2_TR(0x4e8a79);
__builtin_memmove((R+4),(R+28),4);
}
B4e8a7b:{NFSU2_TR(0x4e8a7b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e8a80ull));
TAIL_STATIC(0x51f350u,51f);
}
B4e8a80:L4e8a80:{c.instructions+=2;NFSU2_TR(0x4e8a80);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e8a82:{NFSU2_TR(0x4e8a82);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4e8a90;}}
}
B4e8a84:L4e8a84:{c.instructions+=3;NFSU2_TR(0x4e8a84);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e8a85:{NFSU2_TR(0x4e8a85);
__builtin_memmove((R+4),(R+12),4);
}
B4e8a87:{NFSU2_TR(0x4e8a87);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e8a8cull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4e8960u);}goto L4e8960;}
}
B4e8a8c:L4e8a8c:{c.instructions+=1;NFSU2_TR(0x4e8a8c);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B4e8a90:L4e8a90:{c.instructions+=3;NFSU2_TR(0x4e8a90);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B4e8a92:{NFSU2_TR(0x4e8a92);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4e8a94:{NFSU2_TR(0x4e8a94);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4e8a75u);}goto L4e8a75;}}
}
B4e8a96:L4e8a96:{c.instructions+=1;NFSU2_TR(0x4e8a96);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e8a9a:L4e8a9a:{c.instructions+=3;NFSU2_TR(0x4e8a9a);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xfull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xfull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4e8a9d:{NFSU2_TR(0x4e8a9d);
w4(R+12,u32(0x1ull));
}
B4e8aa2:{NFSU2_TR(0x4e8aa2);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L4e8b0c;}}
}
B4e8aa4:L4e8aa4:{c.instructions+=3;NFSU2_TR(0x4e8aa4);
w4(R+20,u32(0xfull));
}
B4e8aa9:{NFSU2_TR(0x4e8aa9);
w4(R+20,u32(u32(r4(R+20))-u32(r4(R+0))));
}
B4e8aab:{NFSU2_TR(0x4e8aab);
{goto L4e8ab0;}
}
B4e8ab0:L4e8ab0:{c.instructions+=2;NFSU2_TR(0x4e8ab0);
u8 U[4];
w4(U+0,u32(0x1cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e8ab2:{NFSU2_TR(0x4e8ab2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e8ab7ull));
TAIL_STATIC(0x575620u,575);
}
B4e8ab7:L4e8ab7:{c.instructions+=3;NFSU2_TR(0x4e8ab7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e8aba:{NFSU2_TR(0x4e8aba);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e8abc:{NFSU2_TR(0x4e8abc);
if(r1(R+518)){{goto L4e8ad3;}}
}
B4e8abe:L4e8abe:{c.instructions+=7;NFSU2_TR(0x4e8abe);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((R+4),(U+0),4);
}
B4e8ac1:{NFSU2_TR(0x4e8ac1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+4)),r4(U+0));
}
B4e8ac3:{NFSU2_TR(0x4e8ac3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e8ac6:{NFSU2_TR(0x4e8ac6);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4e8ac9:{NFSU2_TR(0x4e8ac9);
u8 U[4];
w4(U+0,u32(0x795cb0ull));
s4(u32(r4(R+0)),r4(U+0));
}
B4e8acf:{NFSU2_TR(0x4e8acf);
__builtin_memmove((R+24),(R+0),4);
}
B4e8ad1:{NFSU2_TR(0x4e8ad1);
{goto L4e8ad5;}
}
B4e8ad3:L4e8ad3:{c.instructions+=1;NFSU2_TR(0x4e8ad3);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B4e8ad5:L4e8ad5:{c.instructions+=5;NFSU2_TR(0x4e8ad5);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e8ad7:{NFSU2_TR(0x4e8ad7);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e8ad9:{NFSU2_TR(0x4e8ad9);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e8ade:{NFSU2_TR(0x4e8ade);
__builtin_memmove((R+4),(R+24),4);
}
B4e8ae0:{NFSU2_TR(0x4e8ae0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e8ae5ull));
TAIL_STATIC(0x4aea60u,4ae);
}
B4e8ae5:L4e8ae5:{c.instructions+=5;NFSU2_TR(0x4e8ae5);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e8ae7:{NFSU2_TR(0x4e8ae7);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e8ae9:{NFSU2_TR(0x4e8ae9);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e8aee:{NFSU2_TR(0x4e8aee);
__builtin_memmove((R+4),(R+24),4);
}
B4e8af0:{NFSU2_TR(0x4e8af0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e8af5ull));
TAIL_STATIC(0x4aea60u,4ae);
}
B4e8af5:L4e8af5:{c.instructions+=3;NFSU2_TR(0x4e8af5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e8af6:{NFSU2_TR(0x4e8af6);
__builtin_memmove((R+4),(R+28),4);
}
B4e8af8:{NFSU2_TR(0x4e8af8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e8afdull));
TAIL_STATIC(0x51f2e0u,51f);
}
B4e8afd:L4e8afd:{c.instructions+=3;NFSU2_TR(0x4e8afd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e8afe:{NFSU2_TR(0x4e8afe);
__builtin_memmove((R+4),(R+28),4);
}
B4e8b00:{NFSU2_TR(0x4e8b00);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e8b05ull));
TAIL_STATIC(0x5434d0u,543);
}
B4e8b05:L4e8b05:{c.instructions+=2;NFSU2_TR(0x4e8b05);
w4(R+20,u32(u32(r4(R+20))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+20))==(u32(0x0ull))));
}
B4e8b06:{NFSU2_TR(0x4e8b06);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4e8ab0u);}goto L4e8ab0;}}
}
B4e8b08:L4e8b08:{c.instructions+=1;NFSU2_TR(0x4e8b08);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e8b0c:L4e8b0c:{c.instructions+=3;NFSU2_TR(0x4e8b0c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e8b0e:{NFSU2_TR(0x4e8b0e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4e8b0f:{NFSU2_TR(0x4e8b0f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4e8b22;}}
}
B4e8b11:L4e8b11:{c.instructions+=3;NFSU2_TR(0x4e8b11);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e8b14:{NFSU2_TR(0x4e8b14);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e8b16:{NFSU2_TR(0x4e8b16);
if(r1(R+518)){{goto L4e8b5c;}}
}
B4e8b18:L4e8b18:{c.instructions+=3;NFSU2_TR(0x4e8b18);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4e8b1b:{NFSU2_TR(0x4e8b1b);
u8 U[4];
w4(U+0,u32(0x78f21cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e8b20:{NFSU2_TR(0x4e8b20);
{goto L4e8b56;}
}
B4e8b22:L4e8b22:{c.instructions+=4;NFSU2_TR(0x4e8b22);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4e8b26:{NFSU2_TR(0x4e8b26);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e8b27:{NFSU2_TR(0x4e8b27);
__builtin_memmove((R+4),(R+28),4);
}
B4e8b29:{NFSU2_TR(0x4e8b29);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e8b2eull));
TAIL_STATIC(0x51f350u,51f);
}
B4e8b2e:L4e8b2e:{c.instructions+=3;NFSU2_TR(0x4e8b2e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e8b30:{NFSU2_TR(0x4e8b30);
__builtin_memmove((R+4),(R+28),4);
}
B4e8b32:{NFSU2_TR(0x4e8b32);
if(r1(R+518)){{goto L4e8b40;}}
}
B4e8b34:L4e8b34:{c.instructions+=2;NFSU2_TR(0x4e8b34);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e8b35:{NFSU2_TR(0x4e8b35);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e8b3aull));
TAIL_STATIC(0x51f440u,51f);
}
B4e8b3a:L4e8b3a:{c.instructions+=4;NFSU2_TR(0x4e8b3a);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B4e8b3b:{NFSU2_TR(0x4e8b3b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e8b3c:{NFSU2_TR(0x4e8b3c);
__builtin_memmove((R+4),(R+28),4);
}
B4e8b3e:{NFSU2_TR(0x4e8b3e);
{goto L4e8b42;}
}
B4e8b40:L4e8b40:{c.instructions+=1;NFSU2_TR(0x4e8b40);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e8b42:L4e8b42:{c.instructions+=1;NFSU2_TR(0x4e8b42);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e8b47ull));
TAIL_STATIC(0x54edd0u,54e);
}
B4e8b47:L4e8b47:{c.instructions+=3;NFSU2_TR(0x4e8b47);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e8b4a:{NFSU2_TR(0x4e8b4a);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e8b4c:{NFSU2_TR(0x4e8b4c);
if(r1(R+518)){{goto L4e8b5c;}}
}
B4e8b4e:L4e8b4e:{c.instructions+=2;NFSU2_TR(0x4e8b4e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4e8b51:{NFSU2_TR(0x4e8b51);
u8 U[4];
w4(U+0,u32(0x78f228ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e8b56:L4e8b56:{c.instructions+=2;NFSU2_TR(0x4e8b56);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e8b57:{NFSU2_TR(0x4e8b57);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e8b5cull));
TAIL_STATIC(0x51ee80u,51e);
}
B4e8b5c:L4e8b5c:{c.instructions+=3;NFSU2_TR(0x4e8b5c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e8b5d:{NFSU2_TR(0x4e8b5d);
__builtin_memmove((R+4),(R+28),4);
}
B4e8b5f:{NFSU2_TR(0x4e8b5f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e8b64ull));
TAIL_STATIC(0x538500u,538);
}
B4e8b64:L4e8b64:{c.instructions+=5;NFSU2_TR(0x4e8b64);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4e8b65:{NFSU2_TR(0x4e8b65);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e8b66:{NFSU2_TR(0x4e8b66);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4e8b67:{NFSU2_TR(0x4e8b67);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x44ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x44ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x44ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4e8b6a:{NFSU2_TR(0x4e8b6a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e8b70:L4e8b70:{c.instructions+=12;NFSU2_TR(0x4e8b70);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e8b72:{NFSU2_TR(0x4e8b72);
u8 U[4];
w4(U+0,u32(0x775f16ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e8b77:{NFSU2_TR(0x4e8b77);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e8b7d:{NFSU2_TR(0x4e8b7d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e8b7e:{NFSU2_TR(0x4e8b7e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e8b85:{NFSU2_TR(0x4e8b85);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e8b86:{NFSU2_TR(0x4e8b86);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e8b8a:{NFSU2_TR(0x4e8b8a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e8b8b:{NFSU2_TR(0x4e8b8b);
__builtin_memmove((R+24),(R+4),4);
}
B4e8b8d:{NFSU2_TR(0x4e8b8d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e8b8e:{NFSU2_TR(0x4e8b8e);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e8b92:{NFSU2_TR(0x4e8b92);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e8b97ull));
TAIL_STATIC(0x552a90u,552);
}
B4e8b97:L4e8b97:{c.instructions+=16;NFSU2_TR(0x4e8b97);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B4e8b99:{NFSU2_TR(0x4e8b99);
w4(R+8,u32(0x1ull));
}
B4e8b9e:{NFSU2_TR(0x4e8b9e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x90ull))));
__builtin_memmove((R+0),(U+0),4);
}
B4e8ba4:{NFSU2_TR(0x4e8ba4);
u8 U[4];
w4(U+0,u32(0x797a54ull));
s4(u32(r4(R+24)),r4(U+0));
}
B4e8baa:{NFSU2_TR(0x4e8baa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e8bad:{NFSU2_TR(0x4e8bad);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4e8bb0:{NFSU2_TR(0x4e8bb0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e8bb3:{NFSU2_TR(0x4e8bb3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e8bb9:{NFSU2_TR(0x4e8bb9);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e8bbd:{NFSU2_TR(0x4e8bbd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+0)),r4(U+0));
}
B4e8bbf:{NFSU2_TR(0x4e8bbf);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e8bc2:{NFSU2_TR(0x4e8bc2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e8bc5:{NFSU2_TR(0x4e8bc5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e8bc6:{NFSU2_TR(0x4e8bc6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e8bc7:{NFSU2_TR(0x4e8bc7);
u8 U[5];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4e8bcb:{NFSU2_TR(0x4e8bcb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e8bd0ull));
TAIL_STATIC(0x52cef0u,52c);
}
B4e8bd0:L4e8bd0:{c.instructions+=3;NFSU2_TR(0x4e8bd0);
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
B4e8bd3:{NFSU2_TR(0x4e8bd3);
__builtin_memmove((R+4),(R+0),4);
}
B4e8bd5:{NFSU2_TR(0x4e8bd5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e8bdaull));
TAIL_STATIC(0x5047e0u,504);
}
B4e8bda:L4e8bda:{c.instructions+=6;NFSU2_TR(0x4e8bda);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e8bde:{NFSU2_TR(0x4e8bde);
__builtin_memmove((R+0),(R+24),4);
}
B4e8be0:{NFSU2_TR(0x4e8be0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e8be1:{NFSU2_TR(0x4e8be1);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e8be8:{NFSU2_TR(0x4e8be8);
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
B4e8beb:{NFSU2_TR(0x4e8beb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e8bf0:L4e8bf0:{c.instructions+=20;NFSU2_TR(0x4e8bf0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e8bf2:{NFSU2_TR(0x4e8bf2);
u8 U[4];
w4(U+0,u32(0x775f16ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e8bf7:{NFSU2_TR(0x4e8bf7);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e8bfd:{NFSU2_TR(0x4e8bfd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e8bfe:{NFSU2_TR(0x4e8bfe);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e8c05:{NFSU2_TR(0x4e8c05);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e8c06:{NFSU2_TR(0x4e8c06);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e8c07:{NFSU2_TR(0x4e8c07);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e8c08:{NFSU2_TR(0x4e8c08);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e8c09:{NFSU2_TR(0x4e8c09);
__builtin_memmove((R+28),(R+4),4);
}
B4e8c0b:{NFSU2_TR(0x4e8c0b);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e8c0f:{NFSU2_TR(0x4e8c0f);
u8 U[4];
w4(U+0,u32(0x797a54ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4e8c15:{NFSU2_TR(0x4e8c15);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B4e8c17:{NFSU2_TR(0x4e8c17);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e8c1a:{NFSU2_TR(0x4e8c1a);
__builtin_memmove((R+0),gp(0x836498),4);
}
B4e8c1f:{NFSU2_TR(0x4e8c1f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e8c22:{NFSU2_TR(0x4e8c22);
__builtin_memmove((R+0),gp(0x836514),4);
}
B4e8c27:{NFSU2_TR(0x4e8c27);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x20ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4e8c2a:{NFSU2_TR(0x4e8c2a);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4e8c32:{NFSU2_TR(0x4e8c32);
if(r1(R+518)){{goto L4e8c85;}}
}
B4e8c34:L4e8c34:{c.instructions+=4;NFSU2_TR(0x4e8c34);
__builtin_memmove((R+0),gp(0x836524),4);
}
B4e8c39:{NFSU2_TR(0x4e8c39);
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
B4e8c3b:{NFSU2_TR(0x4e8c3b);
__builtin_memmove((R+24),gp(0x83652c),4);
}
B4e8c41:{NFSU2_TR(0x4e8c41);
if(r1(R+518)){{goto L4e8c4f;}}
}
B4e8c43:L4e8c43:{c.instructions+=3;NFSU2_TR(0x4e8c43);
__builtin_memmove((R+4),gp(0x836528),4);
}
B4e8c49:{NFSU2_TR(0x4e8c49);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e8c4a:{NFSU2_TR(0x4e8c4a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e8c4cull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B4e8c4c:L4e8c4c:{c.instructions+=1;NFSU2_TR(0x4e8c4c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e8c4f:L4e8c4f:{c.instructions+=9;NFSU2_TR(0x4e8c4f);
__builtin_memmove(gp(0x836514),(R+12),4);
}
B4e8c55:{NFSU2_TR(0x4e8c55);
__builtin_memmove(gp(0x836520),(R+12),4);
}
B4e8c5b:{NFSU2_TR(0x4e8c5b);
__builtin_memmove(gp(0x83651c),(R+12),4);
}
B4e8c61:{NFSU2_TR(0x4e8c61);
__builtin_memmove(gp(0x836518),(R+12),4);
}
B4e8c67:{NFSU2_TR(0x4e8c67);
__builtin_memmove(gp(0x836524),(R+12),4);
}
B4e8c6d:{NFSU2_TR(0x4e8c6d);
__builtin_memmove(gp(0x836528),(R+12),4);
}
B4e8c73:{NFSU2_TR(0x4e8c73);
__builtin_memmove(gp(0x836530),(R+12),4);
}
B4e8c79:{NFSU2_TR(0x4e8c79);
__builtin_memmove(gp(0x836534),(R+12),4);
}
B4e8c7f:{NFSU2_TR(0x4e8c7f);
__builtin_memmove(gp(0x83652c),(R+24),4);
}
B4e8c85:L4e8c85:{c.instructions+=5;NFSU2_TR(0x4e8c85);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e8c8b:{NFSU2_TR(0x4e8c8b);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x90ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e8c91:{NFSU2_TR(0x4e8c91);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B4e8c93:{NFSU2_TR(0x4e8c93);
u8 U[5];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4e8c97:{NFSU2_TR(0x4e8c97);
if(r1(R+518)){{goto L4e8cb9;}}
}
B4e8c99:L4e8c99:{c.instructions+=1;NFSU2_TR(0x4e8c99);
__builtin_memmove((R+16),(R+16),4);
}
B4e8ca0:L4e8ca0:{c.instructions+=6;NFSU2_TR(0x4e8ca0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4e8ca2:{NFSU2_TR(0x4e8ca2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4e8ca5:{NFSU2_TR(0x4e8ca5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B4e8ca7:{NFSU2_TR(0x4e8ca7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e8ca8:{NFSU2_TR(0x4e8ca8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e8cab:{NFSU2_TR(0x4e8cab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e8cb0ull));
TAIL_STATIC(0x575630u,575);
}
B4e8cb0:L4e8cb0:{c.instructions+=4;NFSU2_TR(0x4e8cb0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4e8cb2:{NFSU2_TR(0x4e8cb2);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e8cb5:{NFSU2_TR(0x4e8cb5);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B4e8cb7:{NFSU2_TR(0x4e8cb7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4e8ca0u);}goto L4e8ca0;}}
}
B4e8cb9:L4e8cb9:{c.instructions+=4;NFSU2_TR(0x4e8cb9);
__builtin_memmove((R+4),(R+28),4);
}
B4e8cbb:{NFSU2_TR(0x4e8cbb);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0xffffffffull));
s4(u32(r4(U+0)),r4(U+4));
}
B4e8cc3:{NFSU2_TR(0x4e8cc3);
u8 U[4];
w4(U+0,u32(0x78f578ull));
s4(u32(r4(R+28)),r4(U+0));
}
B4e8cc9:{NFSU2_TR(0x4e8cc9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e8cceull));
TAIL_STATIC(0x510d40u,510);
}
B4e8cce:L4e8cce:{c.instructions+=7;NFSU2_TR(0x4e8cce);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e8cd2:{NFSU2_TR(0x4e8cd2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4e8cd3:{NFSU2_TR(0x4e8cd3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e8cd4:{NFSU2_TR(0x4e8cd4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4e8cd5:{NFSU2_TR(0x4e8cd5);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e8cdc:{NFSU2_TR(0x4e8cdc);
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
B4e8cdf:{NFSU2_TR(0x4e8cdf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e8ce0:L4e8ce0:{c.instructions+=7;NFSU2_TR(0x4e8ce0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e8ce1:{NFSU2_TR(0x4e8ce1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e8ce2:{NFSU2_TR(0x4e8ce2);
__builtin_memmove((R+28),(R+4),4);
}
B4e8ce4:{NFSU2_TR(0x4e8ce4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e8cea:{NFSU2_TR(0x4e8cea);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x90ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e8cf0:{NFSU2_TR(0x4e8cf0);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4e8cf2:{NFSU2_TR(0x4e8cf2);
if(r1(R+518)){{goto L4e8d0d;}}
}
B4e8cf4:L4e8cf4:{c.instructions+=6;NFSU2_TR(0x4e8cf4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4e8cf6:{NFSU2_TR(0x4e8cf6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4e8cf9:{NFSU2_TR(0x4e8cf9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B4e8cfb:{NFSU2_TR(0x4e8cfb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e8cfc:{NFSU2_TR(0x4e8cfc);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e8cff:{NFSU2_TR(0x4e8cff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e8d04ull));
TAIL_STATIC(0x575630u,575);
}
B4e8d04:L4e8d04:{c.instructions+=4;NFSU2_TR(0x4e8d04);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4e8d06:{NFSU2_TR(0x4e8d06);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4e8d09:{NFSU2_TR(0x4e8d09);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4e8d0b:{NFSU2_TR(0x4e8d0b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4e8cf4u);}goto L4e8cf4;}}
}
B4e8d0d:L4e8d0d:{c.instructions+=2;NFSU2_TR(0x4e8d0d);
__builtin_memmove((R+4),(R+28),4);
}
B4e8d0f:{NFSU2_TR(0x4e8d0f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e8d14ull));
TAIL_STATIC(0x4a3c80u,4a3);
}
B4e8d14:L4e8d14:{c.instructions+=6;NFSU2_TR(0x4e8d14);
__builtin_memmove((R+0),gp(0x836498),4);
}
B4e8d19:{NFSU2_TR(0x4e8d19);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4e8d1a:{NFSU2_TR(0x4e8d1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4e8d21:{NFSU2_TR(0x4e8d21);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
w4(U+4,u32(0x8ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4e8d28:{NFSU2_TR(0x4e8d28);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e8d29:{NFSU2_TR(0x4e8d29);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e8d30:L4e8d30:{c.instructions+=5;NFSU2_TR(0x4e8d30);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e8d34:{NFSU2_TR(0x4e8d34);
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
B4e8d36:{NFSU2_TR(0x4e8d36);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e8d37:{NFSU2_TR(0x4e8d37);
__builtin_memmove((R+24),(R+4),4);
}
B4e8d39:{NFSU2_TR(0x4e8d39);
if(r1(R+518)){{goto L4e8d40;}}
}
B4e8d3b:L4e8d3b:{c.instructions+=2;NFSU2_TR(0x4e8d3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e8d3e:{NFSU2_TR(0x4e8d3e);
{goto L4e8d55;}
}
B4e8d40:L4e8d40:{c.instructions+=2;NFSU2_TR(0x4e8d40);
w4(R+4,u32(0x83a9e0ull));
}
B4e8d45:{NFSU2_TR(0x4e8d45);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e8d4aull));
TAIL_STATIC(0x502fe0u,502);
}
B4e8d4a:L4e8d4a:{c.instructions+=2;NFSU2_TR(0x4e8d4a);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4e8d4c:{NFSU2_TR(0x4e8d4c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4e8d55;}}
}
B4e8d4e:L4e8d4e:{c.instructions+=1;NFSU2_TR(0x4e8d4e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4e8d55:L4e8d55:{c.instructions+=2;NFSU2_TR(0x4e8d55);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x2ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x2ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B4e8d59:{NFSU2_TR(0x4e8d59);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4e8d70;}}
}
B4e8d5b:L4e8d5b:{c.instructions+=2;NFSU2_TR(0x4e8d5b);
w4(R+4,u32(0x83a9e0ull));
}
B4e8d60:{NFSU2_TR(0x4e8d60);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e8d65ull));
TAIL_STATIC(0x502fe0u,502);
}
B4e8d65:L4e8d65:{c.instructions+=2;NFSU2_TR(0x4e8d65);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4e8d67:{NFSU2_TR(0x4e8d67);
if(r1(R+518)){{goto L4e8d70;}}
}
B4e8d69:L4e8d69:{c.instructions+=1;NFSU2_TR(0x4e8d69);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4e8d70:L4e8d70:{c.instructions+=5;NFSU2_TR(0x4e8d70);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4e8d74:{NFSU2_TR(0x4e8d74);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e8d75:{NFSU2_TR(0x4e8d75);
w4(R+4,u32(0x6ull));
}
B4e8d7a:{NFSU2_TR(0x4e8d7a);
w4(R+0,u32(0x5ull));
}
B4e8d7f:{NFSU2_TR(0x4e8d7f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4e8dce;}}
}
B4e8d81:L4e8d81:{c.instructions+=3;NFSU2_TR(0x4e8d81);
__builtin_memmove((R+8),gp(0x836514),4);
}
B4e8d87:{NFSU2_TR(0x4e8d87);
u8 U[1];
w1(U+0,u8(u32(r1(R+9))&u32(u8(0x40ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4e8d8a:{NFSU2_TR(0x4e8d8a);
if(r1(R+518)){{goto L4e8d91;}}
}
B4e8d8c:L4e8d8c:{c.instructions+=2;NFSU2_TR(0x4e8d8c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e8d8f:{NFSU2_TR(0x4e8d8f);
{goto L4e8dce;}
}
B4e8d91:L4e8d91:{c.instructions+=4;NFSU2_TR(0x4e8d91);
__builtin_memmove((R+8),gp(0x836498),4);
}
B4e8d97:{NFSU2_TR(0x4e8d97);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B4e8d9a:{NFSU2_TR(0x4e8d9a);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4e8d9c:{NFSU2_TR(0x4e8d9c);
if(r1(R+518)){{goto L4e8dbe;}}
}
B4e8d9e:L4e8d9e:{c.instructions+=3;NFSU2_TR(0x4e8d9e);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B4e8da1:{NFSU2_TR(0x4e8da1);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4e8da3:{NFSU2_TR(0x4e8da3);
if(r1(R+518)){{goto L4e8dbe;}}
}
B4e8da5:L4e8da5:{c.instructions+=3;NFSU2_TR(0x4e8da5);
__builtin_memmove((R+8),gp(0x844ad9),1);
}
B4e8dab:{NFSU2_TR(0x4e8dab);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4e8dad:{NFSU2_TR(0x4e8dad);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4e8db2;}}
}
B4e8daf:L4e8daf:{c.instructions+=1;NFSU2_TR(0x4e8daf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e8db2:L4e8db2:{c.instructions+=2;NFSU2_TR(0x4e8db2);
s4(0x836514,u32(u32(m4(0x836514))|u32(u32(0x100000ull))));
}
B4e8dbc:{NFSU2_TR(0x4e8dbc);
{goto L4e8dce;}
}
B4e8dbe:L4e8dbe:{c.instructions+=4;NFSU2_TR(0x4e8dbe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e8dc1:{NFSU2_TR(0x4e8dc1);
__builtin_memmove((R+8),gp(0x844ad9),1);
}
B4e8dc7:{NFSU2_TR(0x4e8dc7);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4e8dc9:{NFSU2_TR(0x4e8dc9);
if(r1(R+518)){{goto L4e8dce;}}
}
B4e8dcb:L4e8dcb:{c.instructions+=1;NFSU2_TR(0x4e8dcb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e8dce:L4e8dce:{c.instructions+=2;NFSU2_TR(0x4e8dce);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4e8dd1:{NFSU2_TR(0x4e8dd1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4e8de9;}}
}
B4e8dd3:L4e8dd3:{c.instructions+=3;NFSU2_TR(0x4e8dd3);
__builtin_memmove((R+0),gp(0x836514),4);
}
B4e8dd8:{NFSU2_TR(0x4e8dd8);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4e8ddb:{NFSU2_TR(0x4e8ddb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4e8de9;}}
}
B4e8ddd:L4e8ddd:{c.instructions+=3;NFSU2_TR(0x4e8ddd);
__builtin_memmove((R+0),gp(0x844ad9),1);
}
B4e8de2:{NFSU2_TR(0x4e8de2);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4e8de4:{NFSU2_TR(0x4e8de4);
if(r1(R+518)){{goto L4e8de9;}}
}
B4e8de6:L4e8de6:{c.instructions+=1;NFSU2_TR(0x4e8de6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4e8de9:L4e8de9:{c.instructions+=2;NFSU2_TR(0x4e8de9);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B4e8dec:{NFSU2_TR(0x4e8dec);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4e8e1d;}}
}
B4e8dee:L4e8dee:{c.instructions+=3;NFSU2_TR(0x4e8dee);
__builtin_memmove((R+0),gp(0x836514),4);
}
B4e8df3:{NFSU2_TR(0x4e8df3);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x40ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4e8df6:{NFSU2_TR(0x4e8df6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4e8e16;}}
}
B4e8df8:L4e8df8:{c.instructions+=2;NFSU2_TR(0x4e8df8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(u32(0x100000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e8dfd:{NFSU2_TR(0x4e8dfd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4e8e1d;}}
}
B4e8dff:L4e8dff:{c.instructions+=4;NFSU2_TR(0x4e8dff);
__builtin_memmove((R+0),gp(0x836498),4);
}
B4e8e04:{NFSU2_TR(0x4e8e04);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B4e8e07:{NFSU2_TR(0x4e8e07);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4e8e09:{NFSU2_TR(0x4e8e09);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4e8e1d;}}
}
B4e8e0b:L4e8e0b:{c.instructions+=3;NFSU2_TR(0x4e8e0b);
__builtin_memmove((R+8),gp(0x844ad9),1);
}
B4e8e11:{NFSU2_TR(0x4e8e11);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(R+8))-u32(r1(U+5))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B4e8e14:{NFSU2_TR(0x4e8e14);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4e8e1d;}}
}
B4e8e16:L4e8e16:{c.instructions+=1;NFSU2_TR(0x4e8e16);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
w4(U+4,u32(0x7ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4e8e1d:L4e8e1d:{c.instructions+=4;NFSU2_TR(0x4e8e1d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e8e20:{NFSU2_TR(0x4e8e20);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x7000000ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x7000000ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x7000000ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4e8e25:{NFSU2_TR(0x4e8e25);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4e8e26:{NFSU2_TR(0x4e8e26);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L4e8f71;}}
}
B4e8e2c:L4e8e2c:{c.instructions+=1;NFSU2_TR(0x4e8e2c);
if(r1(R+518)){{goto L4e8f5b;}}
}
B4e8e32:L4e8e32:{c.instructions+=3;NFSU2_TR(0x4e8e32);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B4e8e33:{NFSU2_TR(0x4e8e33);
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
B4e8e35:{NFSU2_TR(0x4e8e35);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4e8f71;}}
}
B4e8e3b:L4e8e3b:{c.instructions+=1;NFSU2_TR(0x4e8e3b);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x4e8f78ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4e8e42:L4e8e42:{c.instructions+=6;NFSU2_TR(0x4e8e42);
u8 U[4];
w4(U+0,u32(0x5000000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e8e47:{NFSU2_TR(0x4e8e47);
u8 U[4];
w4(U+0,u32(0x61cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e8e4c:{NFSU2_TR(0x4e8e4c);
u8 U[4];
w4(U+0,u32(0xf770ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e8e51:{NFSU2_TR(0x4e8e51);
u8 U[4];
w4(U+0,u32(0xd36620feull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e8e56:{NFSU2_TR(0x4e8e56);
__builtin_memmove((R+4),(R+24),4);
}
B4e8e58:{NFSU2_TR(0x4e8e58);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e8e5dull));
TAIL_STATIC(0x4a3890u,4a3);
}
B4e8e5d:L4e8e5d:{c.instructions+=2;NFSU2_TR(0x4e8e5d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e8e5e:{NFSU2_TR(0x4e8e5e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e8e61:L4e8e61:{c.instructions+=9;NFSU2_TR(0x4e8e61);
__builtin_memmove((R+0),gp(0x836514),4);
}
B4e8e66:{NFSU2_TR(0x4e8e66);
u8 U[4];
w4(U+0,u32(0x1000000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e8e6b:{NFSU2_TR(0x4e8e6b);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x200000ull))));
}
B4e8e70:{NFSU2_TR(0x4e8e70);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(u32(0x10000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e8e75:{NFSU2_TR(0x4e8e75);
u8 U[4];
w4(U+0,u32(0x61cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e8e7a:{NFSU2_TR(0x4e8e7a);
__builtin_memmove(gp(0x836514),(R+0),4);
}
B4e8e7f:{NFSU2_TR(0x4e8e7f);
__builtin_memmove((R+4),(R+24),4);
}
B4e8e81:{NFSU2_TR(0x4e8e81);
u8 U[4];
w4(U+0,u32(0xf770ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e8e86:{NFSU2_TR(0x4e8e86);
if(r1(R+518)){{goto L4e8e96;}}
}
B4e8e88:L4e8e88:{c.instructions+=2;NFSU2_TR(0x4e8e88);
u8 U[4];
w4(U+0,u32(0x7d90c187ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e8e8d:{NFSU2_TR(0x4e8e8d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e8e92ull));
TAIL_STATIC(0x4a3890u,4a3);
}
B4e8e92:L4e8e92:{c.instructions+=2;NFSU2_TR(0x4e8e92);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e8e93:{NFSU2_TR(0x4e8e93);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e8e96:L4e8e96:{c.instructions+=2;NFSU2_TR(0x4e8e96);
u8 U[4];
w4(U+0,u32(0x2b641c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e8e9b:{NFSU2_TR(0x4e8e9b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e8ea0ull));
TAIL_STATIC(0x4a3890u,4a3);
}
B4e8ea0:L4e8ea0:{c.instructions+=2;NFSU2_TR(0x4e8ea0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e8ea1:{NFSU2_TR(0x4e8ea1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e8ea4:L4e8ea4:{c.instructions+=2;NFSU2_TR(0x4e8ea4);
__builtin_memmove((R+4),(R+24),4);
}
B4e8ea6:{NFSU2_TR(0x4e8ea6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e8eabull));
TAIL_STATIC(0x556490u,556);
}
B4e8eab:L4e8eab:{c.instructions+=5;NFSU2_TR(0x4e8eab);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e8ead:{NFSU2_TR(0x4e8ead);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e8eaf:{NFSU2_TR(0x4e8eaf);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e8eb1:{NFSU2_TR(0x4e8eb1);
__builtin_memmove((R+4),(R+24),4);
}
B4e8eb3:{NFSU2_TR(0x4e8eb3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e8eb8ull));
TAIL_STATIC(0x4a3460u,4a3);
}
B4e8eb8:L4e8eb8:{c.instructions+=5;NFSU2_TR(0x4e8eb8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e8eba:{NFSU2_TR(0x4e8eba);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e8ebc:{NFSU2_TR(0x4e8ebc);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e8ebe:{NFSU2_TR(0x4e8ebe);
__builtin_memmove((R+4),(R+24),4);
}
B4e8ec0:{NFSU2_TR(0x4e8ec0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e8ec5ull));
TAIL_STATIC(0x4a3460u,4a3);
}
B4e8ec5:L4e8ec5:{c.instructions+=2;NFSU2_TR(0x4e8ec5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e8ec6:{NFSU2_TR(0x4e8ec6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e8ec9:L4e8ec9:{c.instructions+=2;NFSU2_TR(0x4e8ec9);
__builtin_memmove((R+4),(R+24),4);
}
B4e8ecb:{NFSU2_TR(0x4e8ecb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e8ed0ull));
TAIL_STATIC(0x4a3c10u,4a3);
}
B4e8ed0:L4e8ed0:{c.instructions+=2;NFSU2_TR(0x4e8ed0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e8ed1:{NFSU2_TR(0x4e8ed1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e8ed4:L4e8ed4:{c.instructions+=4;NFSU2_TR(0x4e8ed4);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4e8ed8:{NFSU2_TR(0x4e8ed8);
__builtin_memmove((R+0),gp(0x844ad9),1);
}
B4e8edd:{NFSU2_TR(0x4e8edd);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4e8edf:{NFSU2_TR(0x4e8edf);
if(r1(R+518)){{goto L4e8ef7;}}
}
B4e8ee1:L4e8ee1:{c.instructions+=4;NFSU2_TR(0x4e8ee1);
__builtin_memmove((R+0),gp(0x836498),4);
}
B4e8ee6:{NFSU2_TR(0x4e8ee6);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B4e8ee9:{NFSU2_TR(0x4e8ee9);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4e8eeb:{NFSU2_TR(0x4e8eeb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4e8ef7;}}
}
B4e8eed:L4e8eed:{c.instructions+=1;NFSU2_TR(0x4e8eed);
s4(0x836514,u32(u32(m4(0x836514))|u32(u32(0x100000ull))));
}
B4e8ef7:L4e8ef7:{c.instructions+=5;NFSU2_TR(0x4e8ef7);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e8ef9:{NFSU2_TR(0x4e8ef9);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x6cull))));
}
B4e8efc:{NFSU2_TR(0x4e8efc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e8efd:{NFSU2_TR(0x4e8efd);
w4(R+4,u32(0x83a9e0ull));
}
B4e8f02:{NFSU2_TR(0x4e8f02);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e8f07ull));
TAIL_STATIC(0x502f40u,502);
}
B4e8f07:L4e8f07:{c.instructions+=3;NFSU2_TR(0x4e8f07);
__builtin_memmove((R+4),gp(0x836498),4);
}
B4e8f0d:{NFSU2_TR(0x4e8f0d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e8f0e:{NFSU2_TR(0x4e8f0e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e8f13ull));
TAIL_STATIC(0x4d9ab0u,4d9);
}
B4e8f13:L4e8f13:{c.instructions+=2;NFSU2_TR(0x4e8f13);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e8f14:{NFSU2_TR(0x4e8f14);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e8f17:L4e8f17:{c.instructions+=2;NFSU2_TR(0x4e8f17);
u8 U[4];
w4(U+0,u32(u32(m4(0x836514))&u32(u32(0x100000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e8f21:{NFSU2_TR(0x4e8f21);
if(r1(R+518)){{goto L4e8f3b;}}
}
B4e8f23:L4e8f23:{c.instructions+=3;NFSU2_TR(0x4e8f23);
__builtin_memmove((R+0),gp(0x836498),4);
}
B4e8f28:{NFSU2_TR(0x4e8f28);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e8f2a:{NFSU2_TR(0x4e8f2a);
if(r1(R+518)){{goto L4e8f3b;}}
}
B4e8f2c:L4e8f2c:{c.instructions+=4;NFSU2_TR(0x4e8f2c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4e8f2f:{NFSU2_TR(0x4e8f2f);
u8 U[4];
w4(U+0,u32(0x100ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e8f34:{NFSU2_TR(0x4e8f34);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e8f36:{NFSU2_TR(0x4e8f36);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e8f3bull));
TAIL_STATIC(0x6fbfccu,6fb);
}
B4e8f3b:L4e8f3b:{c.instructions+=5;NFSU2_TR(0x4e8f3b);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e8f3d:{NFSU2_TR(0x4e8f3d);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x6cull))));
}
B4e8f40:{NFSU2_TR(0x4e8f40);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e8f41:{NFSU2_TR(0x4e8f41);
w4(R+4,u32(0x83a9e0ull));
}
B4e8f46:{NFSU2_TR(0x4e8f46);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e8f4bull));
TAIL_STATIC(0x502f40u,502);
}
B4e8f4b:L4e8f4b:{c.instructions+=3;NFSU2_TR(0x4e8f4b);
__builtin_memmove((R+4),gp(0x836498),4);
}
B4e8f51:{NFSU2_TR(0x4e8f51);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e8f52:{NFSU2_TR(0x4e8f52);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e8f57ull));
TAIL_STATIC(0x4d9b80u,4d9);
}
B4e8f57:L4e8f57:{c.instructions+=2;NFSU2_TR(0x4e8f57);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e8f58:{NFSU2_TR(0x4e8f58);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e8f5b:L4e8f5b:{c.instructions+=5;NFSU2_TR(0x4e8f5b);
u8 U[4];
w4(U+0,u32(0x3000000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e8f60:{NFSU2_TR(0x4e8f60);
u8 U[4];
w4(U+0,u32(0x639ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e8f65:{NFSU2_TR(0x4e8f65);
u8 U[4];
w4(U+0,u32(0xb786af76ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e8f6a:{NFSU2_TR(0x4e8f6a);
__builtin_memmove((R+4),(R+24),4);
}
B4e8f6c:{NFSU2_TR(0x4e8f6c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e8f71ull));
TAIL_STATIC(0x4a39c0u,4a3);
}
B4e8f71:L4e8f71:{c.instructions+=2;NFSU2_TR(0x4e8f71);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e8f72:{NFSU2_TR(0x4e8f72);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e8fa0:L4e8fa0:{c.instructions+=3;NFSU2_TR(0x4e8fa0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e8fa1:{NFSU2_TR(0x4e8fa1);
__builtin_memmove((R+24),(R+4),4);
}
B4e8fa3:{NFSU2_TR(0x4e8fa3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e8fa8ull));
TAIL_STATIC(0x4d7010u,4d7);
}
B4e8fa8:L4e8fa8:{c.instructions+=2;NFSU2_TR(0x4e8fa8);
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
B4e8fad:{NFSU2_TR(0x4e8fad);
if(r1(R+518)){{goto L4e8fb8;}}
}
B4e8faf:L4e8faf:{c.instructions+=2;NFSU2_TR(0x4e8faf);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e8fb0:{NFSU2_TR(0x4e8fb0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e8fb5ull));
TAIL_STATIC(0x575630u,575);
}
B4e8fb5:L4e8fb5:{c.instructions+=1;NFSU2_TR(0x4e8fb5);
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
B4e8fb8:L4e8fb8:{c.instructions+=3;NFSU2_TR(0x4e8fb8);
__builtin_memmove((R+0),(R+24),4);
}
B4e8fba:{NFSU2_TR(0x4e8fba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4e8fbb:{NFSU2_TR(0x4e8fbb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4e8fc0:L4e8fc0:{c.instructions+=5;NFSU2_TR(0x4e8fc0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e8fc4:{NFSU2_TR(0x4e8fc4);
u8 U[4];
w1(R+512,u8((r4(R+0))<(u32(0x911ab364ull))));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x911ab364ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e8fc9:{NFSU2_TR(0x4e8fc9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4e8fca:{NFSU2_TR(0x4e8fca);
__builtin_memmove((R+28),(R+4),4);
}
B4e8fcc:{NFSU2_TR(0x4e8fcc);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){TAIL_STATIC(0x4e9095u,4e9);}
}
B4e8fd2:L4e8fd2:{c.instructions+=1;NFSU2_TR(0x4e8fd2);
if(r1(R+518)){TAIL_STATIC(0x4e906du,4e9);}
}
B4e8fd8:L4e8fd8:{c.instructions+=2;NFSU2_TR(0x4e8fd8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x35f8620bull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e8fdd:{NFSU2_TR(0x4e8fdd);
if(r1(R+518)){TAIL_STATIC(0x4e9025u,4e9);}
}
B4e8fdf:L4e8fdf:{c.instructions+=2;NFSU2_TR(0x4e8fdf);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x406415e3ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4e8fe4:{NFSU2_TR(0x4e8fe4);
if(r1(R+518)){TAIL_STATIC(0x4e9006u,4e9);}
}
B4e8fe6:L4e8fe6:{c.instructions+=2;NFSU2_TR(0x4e8fe6);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x72619778ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x72619778ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x72619778ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4e8feb:{NFSU2_TR(0x4e8feb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x4e9175u,4e9);}
}
B4e8ff1:L4e8ff1:{c.instructions+=4;NFSU2_TR(0x4e8ff1);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4e8ff5:{NFSU2_TR(0x4e8ff5);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4cull))));
__builtin_memmove((R+4),(U+0),4);
}
B4e8ff8:{NFSU2_TR(0x4e8ff8);
__builtin_memmove(gp(0x836538),(R+0),4);
}
B4e8ffd:{NFSU2_TR(0x4e8ffd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4e9002ull));
TAIL_STATIC(0x54eb60u,54e);
}
XIT:NFSU2_TR_EXIT(0x4e8,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
