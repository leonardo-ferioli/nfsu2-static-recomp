#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_698(u8* __restrict R,Cpu& c);
u32 body_699(u8* __restrict R,Cpu& c);
u32 body_69a(u8* __restrict R,Cpu& c);
u32 body_69b(u8* __restrict R,Cpu& c);
u32 body_69e(u8* __restrict R,Cpu& c);
u32 body_6a1(u8* __restrict R,Cpu& c);
u32 body_6a7(u8* __restrict R,Cpu& c);
u32 body_6a9(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x6a8,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x6a8,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_6a8(u8* __restrict R,Cpu& c);
u32 page_6a8(Cpu& c){return body_6a8(c.regs.data(),c);}
__attribute__((noinline)) u32 body_6a8(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x6a8002:goto L6a8002;
case 0x6a8003:c.instructions+=4;goto B6a8003;
case 0x6a8004:c.instructions+=3;goto B6a8004;
case 0x6a8007:c.instructions+=2;goto B6a8007;
case 0x6a8009:c.instructions+=1;goto B6a8009;
case 0x6a800e:goto L6a800e;
case 0x6a8011:c.instructions+=6;goto B6a8011;
case 0x6a8014:c.instructions+=5;goto B6a8014;
case 0x6a8017:c.instructions+=4;goto B6a8017;
case 0x6a801a:c.instructions+=3;goto B6a801a;
case 0x6a801c:c.instructions+=2;goto B6a801c;
case 0x6a801f:c.instructions+=1;goto B6a801f;
case 0x6a8021:goto L6a8021;
case 0x6a8024:c.instructions+=7;goto B6a8024;
case 0x6a8027:c.instructions+=6;goto B6a8027;
case 0x6a802a:c.instructions+=5;goto B6a802a;
case 0x6a802d:c.instructions+=4;goto B6a802d;
case 0x6a802e:c.instructions+=3;goto B6a802e;
case 0x6a8031:c.instructions+=2;goto B6a8031;
case 0x6a8034:c.instructions+=1;goto B6a8034;
case 0x6a8036:goto L6a8036;
case 0x6a8038:goto L6a8038;
case 0x6a803a:c.instructions+=7;goto B6a803a;
case 0x6a803d:c.instructions+=6;goto B6a803d;
case 0x6a8040:c.instructions+=5;goto B6a8040;
case 0x6a8047:c.instructions+=4;goto B6a8047;
case 0x6a804a:c.instructions+=3;goto B6a804a;
case 0x6a804d:c.instructions+=2;goto B6a804d;
case 0x6a8050:c.instructions+=1;goto B6a8050;
case 0x6a8056:goto L6a8056;
case 0x6a805a:c.instructions+=1;goto B6a805a;
case 0x6a805c:goto L6a805c;
case 0x6a805e:c.instructions+=2;goto B6a805e;
case 0x6a805f:c.instructions+=1;goto B6a805f;
case 0x6a8061:goto L6a8061;
case 0x6a8063:c.instructions+=1;goto B6a8063;
case 0x6a8068:goto L6a8068;
case 0x6a806a:goto L6a806a;
case 0x6a806b:c.instructions+=4;goto B6a806b;
case 0x6a806c:c.instructions+=3;goto B6a806c;
case 0x6a806d:c.instructions+=2;goto B6a806d;
case 0x6a806e:c.instructions+=1;goto B6a806e;
case 0x6a806f:goto L6a806f;
case 0x6a8071:c.instructions+=10;goto B6a8071;
case 0x6a8072:c.instructions+=9;goto B6a8072;
case 0x6a8074:c.instructions+=8;goto B6a8074;
case 0x6a8077:c.instructions+=7;goto B6a8077;
case 0x6a8078:c.instructions+=6;goto B6a8078;
case 0x6a8079:c.instructions+=5;goto B6a8079;
case 0x6a807a:c.instructions+=4;goto B6a807a;
case 0x6a807c:c.instructions+=3;goto B6a807c;
case 0x6a807e:c.instructions+=2;goto B6a807e;
case 0x6a8081:c.instructions+=1;goto B6a8081;
case 0x6a8086:goto L6a8086;
case 0x6a8089:c.instructions+=3;goto B6a8089;
case 0x6a808c:c.instructions+=2;goto B6a808c;
case 0x6a808d:c.instructions+=1;goto B6a808d;
case 0x6a8092:goto L6a8092;
case 0x6a8094:c.instructions+=4;goto B6a8094;
case 0x6a8096:c.instructions+=3;goto B6a8096;
case 0x6a8097:c.instructions+=2;goto B6a8097;
case 0x6a809a:c.instructions+=1;goto B6a809a;
case 0x6a809c:goto L6a809c;
case 0x6a80a1:c.instructions+=1;goto B6a80a1;
case 0x6a80a6:goto L6a80a6;
case 0x6a80a8:c.instructions+=4;goto B6a80a8;
case 0x6a80ab:c.instructions+=3;goto B6a80ab;
case 0x6a80ae:c.instructions+=2;goto B6a80ae;
case 0x6a80b1:c.instructions+=1;goto B6a80b1;
case 0x6a80b3:goto L6a80b3;
case 0x6a80b6:c.instructions+=8;goto B6a80b6;
case 0x6a80b9:c.instructions+=7;goto B6a80b9;
case 0x6a80bc:c.instructions+=6;goto B6a80bc;
case 0x6a80bf:c.instructions+=5;goto B6a80bf;
case 0x6a80c2:c.instructions+=4;goto B6a80c2;
case 0x6a80c5:c.instructions+=3;goto B6a80c5;
case 0x6a80c8:c.instructions+=2;goto B6a80c8;
case 0x6a80cb:c.instructions+=1;goto B6a80cb;
case 0x6a80cd:goto L6a80cd;
case 0x6a80d0:c.instructions+=1;goto B6a80d0;
case 0x6a80d2:goto L6a80d2;
case 0x6a80d5:c.instructions+=1;goto B6a80d5;
case 0x6a80d6:goto L6a80d6;
case 0x6a80d7:c.instructions+=2;goto B6a80d7;
case 0x6a80da:c.instructions+=1;goto B6a80da;
case 0x6a80dc:goto L6a80dc;
case 0x6a80df:goto L6a80df;
case 0x6a80e0:c.instructions+=4;goto B6a80e0;
case 0x6a80e1:c.instructions+=3;goto B6a80e1;
case 0x6a80e2:c.instructions+=2;goto B6a80e2;
case 0x6a80e7:c.instructions+=1;goto B6a80e7;
case 0x6a80ec:goto L6a80ec;
case 0x6a80ee:c.instructions+=4;goto B6a80ee;
case 0x6a80ef:c.instructions+=3;goto B6a80ef;
case 0x6a80f1:c.instructions+=2;goto B6a80f1;
case 0x6a80f4:c.instructions+=1;goto B6a80f4;
case 0x6a80f6:goto L6a80f6;
case 0x6a80f8:goto L6a80f8;
case 0x6a80fb:goto L6a80fb;
case 0x6a80fe:c.instructions+=10;goto B6a80fe;
case 0x6a8101:c.instructions+=9;goto B6a8101;
case 0x6a8104:c.instructions+=8;goto B6a8104;
case 0x6a8107:c.instructions+=7;goto B6a8107;
case 0x6a810b:c.instructions+=6;goto B6a810b;
case 0x6a810d:c.instructions+=5;goto B6a810d;
case 0x6a8110:c.instructions+=4;goto B6a8110;
case 0x6a8111:c.instructions+=3;goto B6a8111;
case 0x6a8113:c.instructions+=2;goto B6a8113;
case 0x6a8116:c.instructions+=1;goto B6a8116;
case 0x6a811b:goto L6a811b;
case 0x6a811d:c.instructions+=1;goto B6a811d;
case 0x6a811f:goto L6a811f;
case 0x6a8122:c.instructions+=12;goto B6a8122;
case 0x6a8124:c.instructions+=11;goto B6a8124;
case 0x6a8127:c.instructions+=10;goto B6a8127;
case 0x6a812a:c.instructions+=9;goto B6a812a;
case 0x6a812d:c.instructions+=8;goto B6a812d;
case 0x6a8130:c.instructions+=7;goto B6a8130;
case 0x6a8132:c.instructions+=6;goto B6a8132;
case 0x6a8135:c.instructions+=5;goto B6a8135;
case 0x6a8137:c.instructions+=4;goto B6a8137;
case 0x6a813a:c.instructions+=3;goto B6a813a;
case 0x6a813d:c.instructions+=2;goto B6a813d;
case 0x6a8140:c.instructions+=1;goto B6a8140;
case 0x6a8147:goto L6a8147;
case 0x6a814a:c.instructions+=3;goto B6a814a;
case 0x6a814d:c.instructions+=2;goto B6a814d;
case 0x6a8150:c.instructions+=1;goto B6a8150;
case 0x6a8152:goto L6a8152;
case 0x6a8156:c.instructions+=1;goto B6a8156;
case 0x6a8158:goto L6a8158;
case 0x6a815a:c.instructions+=1;goto B6a815a;
case 0x6a815f:goto L6a815f;
case 0x6a8166:goto L6a8166;
case 0x6a8169:goto L6a8169;
case 0x6a816b:c.instructions+=5;goto B6a816b;
case 0x6a816d:c.instructions+=4;goto B6a816d;
case 0x6a8170:c.instructions+=3;goto B6a8170;
case 0x6a8173:c.instructions+=2;goto B6a8173;
case 0x6a8176:c.instructions+=1;goto B6a8176;
case 0x6a8178:goto L6a8178;
case 0x6a817b:c.instructions+=5;goto B6a817b;
case 0x6a817e:c.instructions+=4;goto B6a817e;
case 0x6a8181:c.instructions+=3;goto B6a8181;
case 0x6a8184:c.instructions+=2;goto B6a8184;
case 0x6a8187:c.instructions+=1;goto B6a8187;
case 0x6a8189:goto L6a8189;
case 0x6a818c:c.instructions+=3;goto B6a818c;
case 0x6a818f:c.instructions+=2;goto B6a818f;
case 0x6a8193:c.instructions+=1;goto B6a8193;
case 0x6a8195:goto L6a8195;
case 0x6a819c:c.instructions+=1;goto B6a819c;
case 0x6a819e:goto L6a819e;
case 0x6a81a1:c.instructions+=1;goto B6a81a1;
case 0x6a81a2:goto L6a81a2;
case 0x6a81a3:c.instructions+=2;goto B6a81a3;
case 0x6a81a6:c.instructions+=1;goto B6a81a6;
case 0x6a81a8:goto L6a81a8;
case 0x6a81ab:goto L6a81ab;
case 0x6a81ac:c.instructions+=4;goto B6a81ac;
case 0x6a81ad:c.instructions+=3;goto B6a81ad;
case 0x6a81ae:c.instructions+=2;goto B6a81ae;
case 0x6a81b3:c.instructions+=1;goto B6a81b3;
case 0x6a81b8:goto L6a81b8;
case 0x6a81ba:c.instructions+=1;goto B6a81ba;
case 0x6a81bc:goto L6a81bc;
case 0x6a81be:c.instructions+=1;goto B6a81be;
case 0x6a81c1:goto L6a81c1;
case 0x6a81c3:c.instructions+=4;goto B6a81c3;
case 0x6a81c4:c.instructions+=3;goto B6a81c4;
case 0x6a81c6:c.instructions+=2;goto B6a81c6;
case 0x6a81c9:c.instructions+=1;goto B6a81c9;
case 0x6a81cb:goto L6a81cb;
case 0x6a81ce:c.instructions+=5;goto B6a81ce;
case 0x6a81d1:c.instructions+=4;goto B6a81d1;
case 0x6a81d2:c.instructions+=3;goto B6a81d2;
case 0x6a81d3:c.instructions+=2;goto B6a81d3;
case 0x6a81d6:c.instructions+=1;goto B6a81d6;
case 0x6a81db:goto L6a81db;
case 0x6a81dd:c.instructions+=1;goto B6a81dd;
case 0x6a81df:goto L6a81df;
case 0x6a81e0:c.instructions+=3;goto B6a81e0;
case 0x6a81e3:c.instructions+=2;goto B6a81e3;
case 0x6a81e5:c.instructions+=1;goto B6a81e5;
case 0x6a81ea:goto L6a81ea;
case 0x6a81ed:c.instructions+=7;goto B6a81ed;
case 0x6a81f0:c.instructions+=6;goto B6a81f0;
case 0x6a81f3:c.instructions+=5;goto B6a81f3;
case 0x6a81f6:c.instructions+=4;goto B6a81f6;
case 0x6a81f9:c.instructions+=3;goto B6a81f9;
case 0x6a81fc:c.instructions+=2;goto B6a81fc;
case 0x6a8203:c.instructions+=1;goto B6a8203;
case 0x6a8205:goto L6a8205;
case 0x6a8208:goto L6a8208;
case 0x6a820b:c.instructions+=3;goto B6a820b;
case 0x6a820e:c.instructions+=2;goto B6a820e;
case 0x6a8211:c.instructions+=1;goto B6a8211;
case 0x6a8213:goto L6a8213;
case 0x6a8217:c.instructions+=1;goto B6a8217;
case 0x6a8219:goto L6a8219;
case 0x6a821b:c.instructions+=1;goto B6a821b;
case 0x6a8220:goto L6a8220;
case 0x6a8227:goto L6a8227;
case 0x6a8228:c.instructions+=1;goto B6a8228;
case 0x6a822d:goto L6a822d;
case 0x6a822f:c.instructions+=3;goto B6a822f;
case 0x6a8232:c.instructions+=2;goto B6a8232;
case 0x6a8233:c.instructions+=1;goto B6a8233;
case 0x6a8236:goto L6a8236;
case 0x6a8237:c.instructions+=4;goto B6a8237;
case 0x6a8238:c.instructions+=3;goto B6a8238;
case 0x6a8239:c.instructions+=2;goto B6a8239;
case 0x6a823a:c.instructions+=1;goto B6a823a;
case 0x6a823b:goto L6a823b;
case 0x6a823d:c.instructions+=10;goto B6a823d;
case 0x6a823e:c.instructions+=9;goto B6a823e;
case 0x6a8240:c.instructions+=8;goto B6a8240;
case 0x6a8243:c.instructions+=7;goto B6a8243;
case 0x6a8244:c.instructions+=6;goto B6a8244;
case 0x6a8245:c.instructions+=5;goto B6a8245;
case 0x6a8247:c.instructions+=4;goto B6a8247;
case 0x6a8249:c.instructions+=3;goto B6a8249;
case 0x6a824c:c.instructions+=2;goto B6a824c;
case 0x6a824f:c.instructions+=1;goto B6a824f;
case 0x6a8254:goto L6a8254;
case 0x6a8257:c.instructions+=2;goto B6a8257;
case 0x6a825a:c.instructions+=1;goto B6a825a;
case 0x6a8260:goto L6a8260;
case 0x6a8261:c.instructions+=1;goto B6a8261;
case 0x6a8264:goto L6a8264;
case 0x6a8267:c.instructions+=8;goto B6a8267;
case 0x6a826a:c.instructions+=7;goto B6a826a;
case 0x6a826d:c.instructions+=6;goto B6a826d;
case 0x6a826f:c.instructions+=5;goto B6a826f;
case 0x6a8271:c.instructions+=4;goto B6a8271;
case 0x6a8277:c.instructions+=3;goto B6a8277;
case 0x6a827d:c.instructions+=2;goto B6a827d;
case 0x6a8280:c.instructions+=1;goto B6a8280;
case 0x6a8286:goto L6a8286;
case 0x6a828c:c.instructions+=1;goto B6a828c;
case 0x6a8292:goto L6a8292;
case 0x6a8295:c.instructions+=7;goto B6a8295;
case 0x6a8298:c.instructions+=6;goto B6a8298;
case 0x6a829d:c.instructions+=5;goto B6a829d;
case 0x6a829f:c.instructions+=4;goto B6a829f;
case 0x6a82a2:c.instructions+=3;goto B6a82a2;
case 0x6a82a4:c.instructions+=2;goto B6a82a4;
case 0x6a82a7:c.instructions+=1;goto B6a82a7;
case 0x6a82ac:goto L6a82ac;
case 0x6a82ae:c.instructions+=7;goto B6a82ae;
case 0x6a82b1:c.instructions+=6;goto B6a82b1;
case 0x6a82b4:c.instructions+=5;goto B6a82b4;
case 0x6a82b5:c.instructions+=4;goto B6a82b5;
case 0x6a82b7:c.instructions+=3;goto B6a82b7;
case 0x6a82ba:c.instructions+=2;goto B6a82ba;
case 0x6a82bd:c.instructions+=1;goto B6a82bd;
case 0x6a82c3:goto L6a82c3;
case 0x6a82c6:c.instructions+=4;goto B6a82c6;
case 0x6a82c9:c.instructions+=3;goto B6a82c9;
case 0x6a82cc:c.instructions+=2;goto B6a82cc;
case 0x6a82d3:c.instructions+=1;goto B6a82d3;
case 0x6a82d6:goto L6a82d6;
case 0x6a82d9:c.instructions+=10;goto B6a82d9;
case 0x6a82dc:c.instructions+=9;goto B6a82dc;
case 0x6a82df:c.instructions+=8;goto B6a82df;
case 0x6a82e2:c.instructions+=7;goto B6a82e2;
case 0x6a82e5:c.instructions+=6;goto B6a82e5;
case 0x6a82e8:c.instructions+=5;goto B6a82e8;
case 0x6a82eb:c.instructions+=4;goto B6a82eb;
case 0x6a82ee:c.instructions+=3;goto B6a82ee;
case 0x6a82f1:c.instructions+=2;goto B6a82f1;
case 0x6a82f7:c.instructions+=1;goto B6a82f7;
case 0x6a82fd:goto L6a82fd;
case 0x6a8301:c.instructions+=2;goto B6a8301;
case 0x6a8305:c.instructions+=1;goto B6a8305;
case 0x6a830b:goto L6a830b;
case 0x6a830e:c.instructions+=1;goto B6a830e;
case 0x6a8311:goto L6a8311;
case 0x6a8314:c.instructions+=4;goto B6a8314;
case 0x6a8317:c.instructions+=3;goto B6a8317;
case 0x6a831a:c.instructions+=2;goto B6a831a;
case 0x6a831c:c.instructions+=1;goto B6a831c;
case 0x6a8322:goto L6a8322;
case 0x6a8325:c.instructions+=5;goto B6a8325;
case 0x6a8328:c.instructions+=4;goto B6a8328;
case 0x6a832b:c.instructions+=3;goto B6a832b;
case 0x6a832e:c.instructions+=2;goto B6a832e;
case 0x6a8334:c.instructions+=1;goto B6a8334;
case 0x6a833a:goto L6a833a;
case 0x6a833e:c.instructions+=1;goto B6a833e;
case 0x6a8340:goto L6a8340;
case 0x6a8343:c.instructions+=4;goto B6a8343;
case 0x6a8346:c.instructions+=3;goto B6a8346;
case 0x6a8349:c.instructions+=2;goto B6a8349;
case 0x6a834b:c.instructions+=1;goto B6a834b;
case 0x6a834d:goto L6a834d;
case 0x6a8350:c.instructions+=2;goto B6a8350;
case 0x6a8353:c.instructions+=1;goto B6a8353;
case 0x6a8355:goto L6a8355;
case 0x6a8357:goto L6a8357;
case 0x6a835a:c.instructions+=3;goto B6a835a;
case 0x6a835d:c.instructions+=2;goto B6a835d;
case 0x6a835f:c.instructions+=1;goto B6a835f;
case 0x6a8361:goto L6a8361;
case 0x6a8364:c.instructions+=2;goto B6a8364;
case 0x6a8367:c.instructions+=1;goto B6a8367;
case 0x6a8369:goto L6a8369;
case 0x6a836b:goto L6a836b;
case 0x6a836d:c.instructions+=1;goto B6a836d;
case 0x6a8373:goto L6a8373;
case 0x6a8377:c.instructions+=1;goto B6a8377;
case 0x6a837d:goto L6a837d;
case 0x6a8380:c.instructions+=4;goto B6a8380;
case 0x6a8383:c.instructions+=3;goto B6a8383;
case 0x6a8386:c.instructions+=2;goto B6a8386;
case 0x6a8388:c.instructions+=1;goto B6a8388;
case 0x6a838a:goto L6a838a;
case 0x6a838d:c.instructions+=2;goto B6a838d;
case 0x6a8390:c.instructions+=1;goto B6a8390;
case 0x6a8392:goto L6a8392;
case 0x6a8394:goto L6a8394;
case 0x6a8397:c.instructions+=4;goto B6a8397;
case 0x6a839a:c.instructions+=3;goto B6a839a;
case 0x6a839c:c.instructions+=2;goto B6a839c;
case 0x6a839f:c.instructions+=1;goto B6a839f;
case 0x6a83a1:goto L6a83a1;
case 0x6a83a4:c.instructions+=2;goto B6a83a4;
case 0x6a83a7:c.instructions+=1;goto B6a83a7;
case 0x6a83a9:goto L6a83a9;
case 0x6a83ab:goto L6a83ab;
case 0x6a83ad:c.instructions+=1;goto B6a83ad;
case 0x6a83af:goto L6a83af;
case 0x6a83b2:c.instructions+=3;goto B6a83b2;
case 0x6a83b5:c.instructions+=2;goto B6a83b5;
case 0x6a83b7:c.instructions+=1;goto B6a83b7;
case 0x6a83b9:goto L6a83b9;
case 0x6a83bc:c.instructions+=2;goto B6a83bc;
case 0x6a83bf:c.instructions+=1;goto B6a83bf;
case 0x6a83c1:goto L6a83c1;
case 0x6a83c3:goto L6a83c3;
case 0x6a83c6:c.instructions+=3;goto B6a83c6;
case 0x6a83c9:c.instructions+=2;goto B6a83c9;
case 0x6a83cb:c.instructions+=1;goto B6a83cb;
case 0x6a83cd:goto L6a83cd;
case 0x6a83d0:c.instructions+=2;goto B6a83d0;
case 0x6a83d3:c.instructions+=1;goto B6a83d3;
case 0x6a83d5:goto L6a83d5;
case 0x6a83d7:goto L6a83d7;
case 0x6a83d9:c.instructions+=1;goto B6a83d9;
case 0x6a83df:goto L6a83df;
case 0x6a83e3:c.instructions+=1;goto B6a83e3;
case 0x6a83e9:goto L6a83e9;
case 0x6a83ec:c.instructions+=3;goto B6a83ec;
case 0x6a83ef:c.instructions+=2;goto B6a83ef;
case 0x6a83f1:c.instructions+=1;goto B6a83f1;
case 0x6a83f3:goto L6a83f3;
case 0x6a83f6:c.instructions+=2;goto B6a83f6;
case 0x6a83f9:c.instructions+=1;goto B6a83f9;
case 0x6a83fb:goto L6a83fb;
case 0x6a83fd:goto L6a83fd;
case 0x6a8400:c.instructions+=3;goto B6a8400;
case 0x6a8403:c.instructions+=2;goto B6a8403;
case 0x6a8405:c.instructions+=1;goto B6a8405;
case 0x6a8407:goto L6a8407;
case 0x6a840a:c.instructions+=2;goto B6a840a;
case 0x6a840d:c.instructions+=1;goto B6a840d;
case 0x6a840f:goto L6a840f;
case 0x6a8411:goto L6a8411;
case 0x6a8413:c.instructions+=1;goto B6a8413;
case 0x6a8419:goto L6a8419;
case 0x6a841c:c.instructions+=3;goto B6a841c;
case 0x6a841f:c.instructions+=2;goto B6a841f;
case 0x6a8421:c.instructions+=1;goto B6a8421;
case 0x6a8423:goto L6a8423;
case 0x6a8426:c.instructions+=2;goto B6a8426;
case 0x6a8429:c.instructions+=1;goto B6a8429;
case 0x6a842b:goto L6a842b;
case 0x6a842d:goto L6a842d;
case 0x6a8430:c.instructions+=2;goto B6a8430;
case 0x6a8432:c.instructions+=1;goto B6a8432;
case 0x6a8434:goto L6a8434;
case 0x6a8437:c.instructions+=2;goto B6a8437;
case 0x6a843a:c.instructions+=1;goto B6a843a;
case 0x6a843c:goto L6a843c;
case 0x6a843e:goto L6a843e;
case 0x6a8440:c.instructions+=1;goto B6a8440;
case 0x6a8446:goto L6a8446;
case 0x6a844a:c.instructions+=1;goto B6a844a;
case 0x6a8450:goto L6a8450;
case 0x6a8453:c.instructions+=4;goto B6a8453;
case 0x6a8456:c.instructions+=3;goto B6a8456;
case 0x6a8459:c.instructions+=2;goto B6a8459;
case 0x6a845b:c.instructions+=1;goto B6a845b;
case 0x6a845d:goto L6a845d;
case 0x6a8460:c.instructions+=2;goto B6a8460;
case 0x6a8463:c.instructions+=1;goto B6a8463;
case 0x6a8465:goto L6a8465;
case 0x6a8467:goto L6a8467;
case 0x6a846a:c.instructions+=3;goto B6a846a;
case 0x6a846d:c.instructions+=2;goto B6a846d;
case 0x6a846f:c.instructions+=1;goto B6a846f;
case 0x6a8471:goto L6a8471;
case 0x6a8474:c.instructions+=2;goto B6a8474;
case 0x6a8477:c.instructions+=1;goto B6a8477;
case 0x6a8479:goto L6a8479;
case 0x6a847b:goto L6a847b;
case 0x6a847d:c.instructions+=1;goto B6a847d;
case 0x6a8483:goto L6a8483;
case 0x6a8486:c.instructions+=3;goto B6a8486;
case 0x6a8489:c.instructions+=2;goto B6a8489;
case 0x6a848b:c.instructions+=1;goto B6a848b;
case 0x6a848d:goto L6a848d;
case 0x6a8490:c.instructions+=2;goto B6a8490;
case 0x6a8493:c.instructions+=1;goto B6a8493;
case 0x6a8495:goto L6a8495;
case 0x6a8497:goto L6a8497;
case 0x6a849a:c.instructions+=3;goto B6a849a;
case 0x6a849d:c.instructions+=2;goto B6a849d;
case 0x6a849f:c.instructions+=1;goto B6a849f;
case 0x6a84a1:goto L6a84a1;
case 0x6a84a4:c.instructions+=2;goto B6a84a4;
case 0x6a84a7:c.instructions+=1;goto B6a84a7;
case 0x6a84a9:goto L6a84a9;
case 0x6a84ab:goto L6a84ab;
case 0x6a84ad:c.instructions+=1;goto B6a84ad;
case 0x6a84b3:goto L6a84b3;
case 0x6a84b6:c.instructions+=6;goto B6a84b6;
case 0x6a84b9:c.instructions+=5;goto B6a84b9;
case 0x6a84bb:c.instructions+=4;goto B6a84bb;
case 0x6a84bd:c.instructions+=3;goto B6a84bd;
case 0x6a84c0:c.instructions+=2;goto B6a84c0;
case 0x6a84c2:c.instructions+=1;goto B6a84c2;
case 0x6a84c4:goto L6a84c4;
case 0x6a84c7:c.instructions+=3;goto B6a84c7;
case 0x6a84ca:c.instructions+=2;goto B6a84ca;
case 0x6a84cd:c.instructions+=1;goto B6a84cd;
case 0x6a84cf:goto L6a84cf;
case 0x6a84d2:goto L6a84d2;
case 0x6a84d5:c.instructions+=4;goto B6a84d5;
case 0x6a84d7:c.instructions+=3;goto B6a84d7;
case 0x6a84da:c.instructions+=2;goto B6a84da;
case 0x6a84dc:c.instructions+=1;goto B6a84dc;
case 0x6a84de:goto L6a84de;
case 0x6a84e1:c.instructions+=2;goto B6a84e1;
case 0x6a84e4:c.instructions+=1;goto B6a84e4;
case 0x6a84e6:goto L6a84e6;
case 0x6a84e8:goto L6a84e8;
case 0x6a84eb:c.instructions+=1;goto B6a84eb;
case 0x6a84f1:goto L6a84f1;
case 0x6a84f5:c.instructions+=1;goto B6a84f5;
case 0x6a84fb:goto L6a84fb;
case 0x6a84fe:c.instructions+=4;goto B6a84fe;
case 0x6a8501:c.instructions+=3;goto B6a8501;
case 0x6a8504:c.instructions+=2;goto B6a8504;
case 0x6a8506:c.instructions+=1;goto B6a8506;
case 0x6a8508:goto L6a8508;
case 0x6a850b:c.instructions+=2;goto B6a850b;
case 0x6a850e:c.instructions+=1;goto B6a850e;
case 0x6a8510:goto L6a8510;
case 0x6a8512:goto L6a8512;
case 0x6a8515:c.instructions+=3;goto B6a8515;
case 0x6a8518:c.instructions+=2;goto B6a8518;
case 0x6a851a:c.instructions+=1;goto B6a851a;
case 0x6a851c:goto L6a851c;
case 0x6a851f:c.instructions+=2;goto B6a851f;
case 0x6a8522:c.instructions+=1;goto B6a8522;
case 0x6a8524:goto L6a8524;
case 0x6a8526:goto L6a8526;
case 0x6a8528:c.instructions+=1;goto B6a8528;
case 0x6a852e:goto L6a852e;
case 0x6a8531:c.instructions+=3;goto B6a8531;
case 0x6a8534:c.instructions+=2;goto B6a8534;
case 0x6a8536:c.instructions+=1;goto B6a8536;
case 0x6a8538:goto L6a8538;
case 0x6a853b:c.instructions+=2;goto B6a853b;
case 0x6a853e:c.instructions+=1;goto B6a853e;
case 0x6a8540:goto L6a8540;
case 0x6a8542:goto L6a8542;
case 0x6a8545:c.instructions+=3;goto B6a8545;
case 0x6a8548:c.instructions+=2;goto B6a8548;
case 0x6a854a:c.instructions+=1;goto B6a854a;
case 0x6a854c:goto L6a854c;
case 0x6a854f:c.instructions+=2;goto B6a854f;
case 0x6a8552:c.instructions+=1;goto B6a8552;
case 0x6a8554:goto L6a8554;
case 0x6a8556:goto L6a8556;
case 0x6a8558:c.instructions+=1;goto B6a8558;
case 0x6a855a:goto L6a855a;
case 0x6a855d:c.instructions+=6;goto B6a855d;
case 0x6a8560:c.instructions+=5;goto B6a8560;
case 0x6a8562:c.instructions+=4;goto B6a8562;
case 0x6a8564:c.instructions+=3;goto B6a8564;
case 0x6a8567:c.instructions+=2;goto B6a8567;
case 0x6a8569:c.instructions+=1;goto B6a8569;
case 0x6a856b:goto L6a856b;
case 0x6a856e:c.instructions+=3;goto B6a856e;
case 0x6a8571:c.instructions+=2;goto B6a8571;
case 0x6a8574:c.instructions+=1;goto B6a8574;
case 0x6a8576:goto L6a8576;
case 0x6a8579:goto L6a8579;
case 0x6a857c:c.instructions+=4;goto B6a857c;
case 0x6a857e:c.instructions+=3;goto B6a857e;
case 0x6a8581:c.instructions+=2;goto B6a8581;
case 0x6a8583:c.instructions+=1;goto B6a8583;
case 0x6a8585:goto L6a8585;
case 0x6a8588:c.instructions+=2;goto B6a8588;
case 0x6a858b:c.instructions+=1;goto B6a858b;
case 0x6a858d:goto L6a858d;
case 0x6a858f:goto L6a858f;
case 0x6a8592:c.instructions+=1;goto B6a8592;
case 0x6a8594:goto L6a8594;
case 0x6a8597:c.instructions+=6;goto B6a8597;
case 0x6a859a:c.instructions+=5;goto B6a859a;
case 0x6a859d:c.instructions+=4;goto B6a859d;
case 0x6a859f:c.instructions+=3;goto B6a859f;
case 0x6a85a2:c.instructions+=2;goto B6a85a2;
case 0x6a85a4:c.instructions+=1;goto B6a85a4;
case 0x6a85a6:goto L6a85a6;
case 0x6a85a9:c.instructions+=3;goto B6a85a9;
case 0x6a85ac:c.instructions+=2;goto B6a85ac;
case 0x6a85af:c.instructions+=1;goto B6a85af;
case 0x6a85b1:goto L6a85b1;
case 0x6a85b4:goto L6a85b4;
case 0x6a85b7:c.instructions+=4;goto B6a85b7;
case 0x6a85b9:c.instructions+=3;goto B6a85b9;
case 0x6a85bc:c.instructions+=2;goto B6a85bc;
case 0x6a85be:c.instructions+=1;goto B6a85be;
case 0x6a85c0:goto L6a85c0;
case 0x6a85c3:c.instructions+=2;goto B6a85c3;
case 0x6a85c6:c.instructions+=1;goto B6a85c6;
case 0x6a85c8:goto L6a85c8;
case 0x6a85ca:goto L6a85ca;
case 0x6a85cd:c.instructions+=1;goto B6a85cd;
case 0x6a85cf:goto L6a85cf;
case 0x6a85d2:c.instructions+=5;goto B6a85d2;
case 0x6a85d5:c.instructions+=4;goto B6a85d5;
case 0x6a85d9:c.instructions+=3;goto B6a85d9;
case 0x6a85dc:c.instructions+=2;goto B6a85dc;
case 0x6a85df:c.instructions+=1;goto B6a85df;
case 0x6a85e5:goto L6a85e5;
case 0x6a85e7:goto L6a85e7;
case 0x6a85ea:c.instructions+=6;goto B6a85ea;
case 0x6a85ed:c.instructions+=5;goto B6a85ed;
case 0x6a85f0:c.instructions+=4;goto B6a85f0;
case 0x6a85f3:c.instructions+=3;goto B6a85f3;
case 0x6a85f6:c.instructions+=2;goto B6a85f6;
case 0x6a85f8:c.instructions+=1;goto B6a85f8;
case 0x6a85fd:goto L6a85fd;
case 0x6a8600:c.instructions+=3;goto B6a8600;
case 0x6a8603:c.instructions+=2;goto B6a8603;
case 0x6a8606:c.instructions+=1;goto B6a8606;
case 0x6a8609:goto L6a8609;
case 0x6a860c:c.instructions+=5;goto B6a860c;
case 0x6a860f:c.instructions+=4;goto B6a860f;
case 0x6a8613:c.instructions+=3;goto B6a8613;
case 0x6a8617:c.instructions+=2;goto B6a8617;
case 0x6a861a:c.instructions+=1;goto B6a861a;
case 0x6a8620:goto L6a8620;
case 0x6a8623:c.instructions+=1;goto B6a8623;
case 0x6a8629:goto L6a8629;
case 0x6a862d:c.instructions+=2;goto B6a862d;
case 0x6a862f:c.instructions+=1;goto B6a862f;
case 0x6a8631:goto L6a8631;
case 0x6a8633:goto L6a8633;
case 0x6a8636:c.instructions+=5;goto B6a8636;
case 0x6a8639:c.instructions+=4;goto B6a8639;
case 0x6a863c:c.instructions+=3;goto B6a863c;
case 0x6a863f:c.instructions+=2;goto B6a863f;
case 0x6a8642:c.instructions+=1;goto B6a8642;
case 0x6a8644:goto L6a8644;
case 0x6a8648:c.instructions+=2;goto B6a8648;
case 0x6a864b:c.instructions+=1;goto B6a864b;
case 0x6a864d:goto L6a864d;
case 0x6a8650:c.instructions+=1;goto B6a8650;
case 0x6a8652:goto L6a8652;
case 0x6a8655:c.instructions+=7;goto B6a8655;
case 0x6a8658:c.instructions+=6;goto B6a8658;
case 0x6a865b:c.instructions+=5;goto B6a865b;
case 0x6a865e:c.instructions+=4;goto B6a865e;
case 0x6a8661:c.instructions+=3;goto B6a8661;
case 0x6a8662:c.instructions+=2;goto B6a8662;
case 0x6a8665:c.instructions+=1;goto B6a8665;
case 0x6a8667:goto L6a8667;
case 0x6a866a:goto L6a866a;
case 0x6a866d:c.instructions+=3;goto B6a866d;
case 0x6a8670:c.instructions+=2;goto B6a8670;
case 0x6a8673:c.instructions+=1;goto B6a8673;
case 0x6a8675:goto L6a8675;
case 0x6a8679:c.instructions+=1;goto B6a8679;
case 0x6a867b:goto L6a867b;
case 0x6a867e:c.instructions+=6;goto B6a867e;
case 0x6a8681:c.instructions+=5;goto B6a8681;
case 0x6a8684:c.instructions+=4;goto B6a8684;
case 0x6a8687:c.instructions+=3;goto B6a8687;
case 0x6a868a:c.instructions+=2;goto B6a868a;
case 0x6a868d:c.instructions+=1;goto B6a868d;
case 0x6a868e:goto L6a868e;
case 0x6a8692:c.instructions+=1;goto B6a8692;
case 0x6a8694:goto L6a8694;
case 0x6a8697:c.instructions+=2;goto B6a8697;
case 0x6a869a:c.instructions+=1;goto B6a869a;
case 0x6a869d:goto L6a869d;
case 0x6a86a0:c.instructions+=7;goto B6a86a0;
case 0x6a86a3:c.instructions+=6;goto B6a86a3;
case 0x6a86a6:c.instructions+=5;goto B6a86a6;
case 0x6a86a9:c.instructions+=4;goto B6a86a9;
case 0x6a86ac:c.instructions+=3;goto B6a86ac;
case 0x6a86af:c.instructions+=2;goto B6a86af;
case 0x6a86b2:c.instructions+=1;goto B6a86b2;
case 0x6a86b4:goto L6a86b4;
case 0x6a86b7:c.instructions+=5;goto B6a86b7;
case 0x6a86ba:c.instructions+=4;goto B6a86ba;
case 0x6a86bd:c.instructions+=3;goto B6a86bd;
case 0x6a86be:c.instructions+=2;goto B6a86be;
case 0x6a86c1:c.instructions+=1;goto B6a86c1;
case 0x6a86c3:goto L6a86c3;
case 0x6a86c6:c.instructions+=10;goto B6a86c6;
case 0x6a86c8:c.instructions+=9;goto B6a86c8;
case 0x6a86ca:c.instructions+=8;goto B6a86ca;
case 0x6a86d0:c.instructions+=7;goto B6a86d0;
case 0x6a86d2:c.instructions+=6;goto B6a86d2;
case 0x6a86d4:c.instructions+=5;goto B6a86d4;
case 0x6a86d8:c.instructions+=4;goto B6a86d8;
case 0x6a86db:c.instructions+=3;goto B6a86db;
case 0x6a86de:c.instructions+=2;goto B6a86de;
case 0x6a86e5:c.instructions+=1;goto B6a86e5;
case 0x6a86e8:goto L6a86e8;
case 0x6a86eb:c.instructions+=4;goto B6a86eb;
case 0x6a86ee:c.instructions+=3;goto B6a86ee;
case 0x6a86f1:c.instructions+=2;goto B6a86f1;
case 0x6a86f4:c.instructions+=1;goto B6a86f4;
case 0x6a86fa:goto L6a86fa;
case 0x6a86fe:c.instructions+=2;goto B6a86fe;
case 0x6a86ff:c.instructions+=1;goto B6a86ff;
case 0x6a8701:goto L6a8701;
case 0x6a8703:c.instructions+=2;goto B6a8703;
case 0x6a8704:c.instructions+=1;goto B6a8704;
case 0x6a8706:goto L6a8706;
case 0x6a8708:c.instructions+=1;goto B6a8708;
case 0x6a870d:goto L6a870d;
case 0x6a870f:goto L6a870f;
case 0x6a8710:c.instructions+=3;goto B6a8710;
case 0x6a8711:c.instructions+=2;goto B6a8711;
case 0x6a8712:c.instructions+=1;goto B6a8712;
case 0x6a8713:goto L6a8713;
case 0x6a8715:c.instructions+=12;goto B6a8715;
case 0x6a8716:c.instructions+=11;goto B6a8716;
case 0x6a8718:c.instructions+=10;goto B6a8718;
case 0x6a871b:c.instructions+=9;goto B6a871b;
case 0x6a871c:c.instructions+=8;goto B6a871c;
case 0x6a871d:c.instructions+=7;goto B6a871d;
case 0x6a871f:c.instructions+=6;goto B6a871f;
case 0x6a8722:c.instructions+=5;goto B6a8722;
case 0x6a8725:c.instructions+=4;goto B6a8725;
case 0x6a8727:c.instructions+=3;goto B6a8727;
case 0x6a8728:c.instructions+=2;goto B6a8728;
case 0x6a872b:c.instructions+=1;goto B6a872b;
case 0x6a8730:goto L6a8730;
case 0x6a8732:c.instructions+=3;goto B6a8732;
case 0x6a8733:c.instructions+=2;goto B6a8733;
case 0x6a8736:c.instructions+=1;goto B6a8736;
case 0x6a8738:goto L6a8738;
case 0x6a873d:c.instructions+=1;goto B6a873d;
case 0x6a8742:goto L6a8742;
case 0x6a8745:c.instructions+=3;goto B6a8745;
case 0x6a8746:c.instructions+=2;goto B6a8746;
case 0x6a8749:c.instructions+=1;goto B6a8749;
case 0x6a874f:goto L6a874f;
case 0x6a8752:c.instructions+=5;goto B6a8752;
case 0x6a8755:c.instructions+=4;goto B6a8755;
case 0x6a8758:c.instructions+=3;goto B6a8758;
case 0x6a875a:c.instructions+=2;goto B6a875a;
case 0x6a8760:c.instructions+=1;goto B6a8760;
case 0x6a8766:goto L6a8766;
case 0x6a8769:c.instructions+=1;goto B6a8769;
case 0x6a876b:goto L6a876b;
case 0x6a876e:c.instructions+=1;goto B6a876e;
case 0x6a8774:goto L6a8774;
case 0x6a877a:c.instructions+=1;goto B6a877a;
case 0x6a8780:goto L6a8780;
case 0x6a8786:c.instructions+=1;goto B6a8786;
case 0x6a8788:goto L6a8788;
case 0x6a878e:c.instructions+=1;goto B6a878e;
case 0x6a8790:goto L6a8790;
case 0x6a8796:c.instructions+=1;goto B6a8796;
case 0x6a8798:goto L6a8798;
case 0x6a879e:c.instructions+=1;goto B6a879e;
case 0x6a87a0:goto L6a87a0;
case 0x6a87a6:c.instructions+=1;goto B6a87a6;
case 0x6a87a8:goto L6a87a8;
case 0x6a87ae:c.instructions+=1;goto B6a87ae;
case 0x6a87b0:goto L6a87b0;
case 0x6a87b6:c.instructions+=1;goto B6a87b6;
case 0x6a87b8:goto L6a87b8;
case 0x6a87be:c.instructions+=1;goto B6a87be;
case 0x6a87c0:goto L6a87c0;
case 0x6a87c3:c.instructions+=3;goto B6a87c3;
case 0x6a87c5:c.instructions+=2;goto B6a87c5;
case 0x6a87c8:c.instructions+=1;goto B6a87c8;
case 0x6a87ca:goto L6a87ca;
case 0x6a87cd:c.instructions+=2;goto B6a87cd;
case 0x6a87d0:c.instructions+=1;goto B6a87d0;
case 0x6a87d3:goto L6a87d3;
case 0x6a87d5:c.instructions+=5;goto B6a87d5;
case 0x6a87d8:c.instructions+=4;goto B6a87d8;
case 0x6a87db:c.instructions+=3;goto B6a87db;
case 0x6a87de:c.instructions+=2;goto B6a87de;
case 0x6a87e4:c.instructions+=1;goto B6a87e4;
case 0x6a87e6:goto L6a87e6;
case 0x6a87e9:c.instructions+=3;goto B6a87e9;
case 0x6a87ec:c.instructions+=2;goto B6a87ec;
case 0x6a87ef:c.instructions+=1;goto B6a87ef;
case 0x6a87f1:goto L6a87f1;
case 0x6a87f4:c.instructions+=1;goto B6a87f4;
case 0x6a87f6:goto L6a87f6;
case 0x6a87f9:c.instructions+=4;goto B6a87f9;
case 0x6a87fc:c.instructions+=3;goto B6a87fc;
case 0x6a87ff:c.instructions+=2;goto B6a87ff;
case 0x6a8802:c.instructions+=1;goto B6a8802;
case 0x6a8805:goto L6a8805;
case 0x6a8807:goto L6a8807;
case 0x6a880a:c.instructions+=3;goto B6a880a;
case 0x6a880d:c.instructions+=2;goto B6a880d;
case 0x6a8810:c.instructions+=1;goto B6a8810;
case 0x6a8816:goto L6a8816;
case 0x6a8819:goto L6a8819;
case 0x6a881d:c.instructions+=2;goto B6a881d;
case 0x6a881f:c.instructions+=1;goto B6a881f;
case 0x6a8824:goto L6a8824;
case 0x6a8827:c.instructions+=6;goto B6a8827;
case 0x6a882a:c.instructions+=5;goto B6a882a;
case 0x6a882b:c.instructions+=4;goto B6a882b;
case 0x6a882c:c.instructions+=3;goto B6a882c;
case 0x6a882d:c.instructions+=2;goto B6a882d;
case 0x6a8832:c.instructions+=1;goto B6a8832;
case 0x6a8837:goto L6a8837;
case 0x6a8839:c.instructions+=2;goto B6a8839;
case 0x6a883b:c.instructions+=1;goto B6a883b;
case 0x6a8841:goto L6a8841;
case 0x6a8848:c.instructions+=2;goto B6a8848;
case 0x6a884b:c.instructions+=1;goto B6a884b;
case 0x6a884e:goto L6a884e;
case 0x6a8851:c.instructions+=4;goto B6a8851;
case 0x6a8853:c.instructions+=3;goto B6a8853;
case 0x6a8856:c.instructions+=2;goto B6a8856;
case 0x6a8859:c.instructions+=1;goto B6a8859;
case 0x6a885f:goto L6a885f;
case 0x6a8862:c.instructions+=1;goto B6a8862;
case 0x6a8864:goto L6a8864;
case 0x6a8867:c.instructions+=5;goto B6a8867;
case 0x6a886a:c.instructions+=4;goto B6a886a;
case 0x6a886c:c.instructions+=3;goto B6a886c;
case 0x6a886f:c.instructions+=2;goto B6a886f;
case 0x6a8872:c.instructions+=1;goto B6a8872;
case 0x6a8874:goto L6a8874;
case 0x6a8877:c.instructions+=2;goto B6a8877;
case 0x6a8879:c.instructions+=1;goto B6a8879;
case 0x6a887b:goto L6a887b;
case 0x6a887c:c.instructions+=2;goto B6a887c;
case 0x6a887d:c.instructions+=1;goto B6a887d;
case 0x6a8882:goto L6a8882;
case 0x6a8884:c.instructions+=1;goto B6a8884;
case 0x6a8886:goto L6a8886;
case 0x6a8889:c.instructions+=7;goto B6a8889;
case 0x6a888c:c.instructions+=6;goto B6a888c;
case 0x6a888f:c.instructions+=5;goto B6a888f;
case 0x6a8892:c.instructions+=4;goto B6a8892;
case 0x6a8894:c.instructions+=3;goto B6a8894;
case 0x6a8897:c.instructions+=2;goto B6a8897;
case 0x6a889a:c.instructions+=1;goto B6a889a;
case 0x6a889c:goto L6a889c;
case 0x6a889f:c.instructions+=12;goto B6a889f;
case 0x6a88a2:c.instructions+=11;goto B6a88a2;
case 0x6a88a5:c.instructions+=10;goto B6a88a5;
case 0x6a88a8:c.instructions+=9;goto B6a88a8;
case 0x6a88ab:c.instructions+=8;goto B6a88ab;
case 0x6a88ae:c.instructions+=7;goto B6a88ae;
case 0x6a88b1:c.instructions+=6;goto B6a88b1;
case 0x6a88b4:c.instructions+=5;goto B6a88b4;
case 0x6a88b7:c.instructions+=4;goto B6a88b7;
case 0x6a88ba:c.instructions+=3;goto B6a88ba;
case 0x6a88bd:c.instructions+=2;goto B6a88bd;
case 0x6a88c0:c.instructions+=1;goto B6a88c0;
case 0x6a88c2:goto L6a88c2;
case 0x6a88c5:c.instructions+=1;goto B6a88c5;
case 0x6a88c7:goto L6a88c7;
case 0x6a88ca:c.instructions+=8;goto B6a88ca;
case 0x6a88cc:c.instructions+=7;goto B6a88cc;
case 0x6a88cf:c.instructions+=6;goto B6a88cf;
case 0x6a88d2:c.instructions+=5;goto B6a88d2;
case 0x6a88d4:c.instructions+=4;goto B6a88d4;
case 0x6a88d5:c.instructions+=3;goto B6a88d5;
case 0x6a88d8:c.instructions+=2;goto B6a88d8;
case 0x6a88db:c.instructions+=1;goto B6a88db;
case 0x6a88de:goto L6a88de;
case 0x6a88df:goto L6a88df;
case 0x6a88e2:c.instructions+=2;goto B6a88e2;
case 0x6a88e5:c.instructions+=1;goto B6a88e5;
case 0x6a88eb:goto L6a88eb;
case 0x6a88ef:c.instructions+=3;goto B6a88ef;
case 0x6a88f2:c.instructions+=2;goto B6a88f2;
case 0x6a88f5:c.instructions+=1;goto B6a88f5;
case 0x6a88fb:goto L6a88fb;
case 0x6a88fd:c.instructions+=2;goto B6a88fd;
case 0x6a8900:c.instructions+=1;goto B6a8900;
case 0x6a8902:goto L6a8902;
case 0x6a8905:c.instructions+=5;goto B6a8905;
case 0x6a8907:c.instructions+=4;goto B6a8907;
case 0x6a890a:c.instructions+=3;goto B6a890a;
case 0x6a890d:c.instructions+=2;goto B6a890d;
case 0x6a8910:c.instructions+=1;goto B6a8910;
case 0x6a8912:goto L6a8912;
case 0x6a8915:c.instructions+=3;goto B6a8915;
case 0x6a8918:c.instructions+=2;goto B6a8918;
case 0x6a891b:c.instructions+=1;goto B6a891b;
case 0x6a891d:goto L6a891d;
case 0x6a8920:c.instructions+=5;goto B6a8920;
case 0x6a8923:c.instructions+=4;goto B6a8923;
case 0x6a8926:c.instructions+=3;goto B6a8926;
case 0x6a892a:c.instructions+=2;goto B6a892a;
case 0x6a892c:c.instructions+=1;goto B6a892c;
case 0x6a892e:goto L6a892e;
case 0x6a8931:goto L6a8931;
case 0x6a8933:c.instructions+=4;goto B6a8933;
case 0x6a8936:c.instructions+=3;goto B6a8936;
case 0x6a8939:c.instructions+=2;goto B6a8939;
case 0x6a893c:c.instructions+=1;goto B6a893c;
case 0x6a893e:goto L6a893e;
case 0x6a8941:c.instructions+=3;goto B6a8941;
case 0x6a8944:c.instructions+=2;goto B6a8944;
case 0x6a8947:c.instructions+=1;goto B6a8947;
case 0x6a8949:goto L6a8949;
case 0x6a894c:c.instructions+=1;goto B6a894c;
case 0x6a894e:goto L6a894e;
case 0x6a8951:c.instructions+=3;goto B6a8951;
case 0x6a8954:c.instructions+=2;goto B6a8954;
case 0x6a8957:c.instructions+=1;goto B6a8957;
case 0x6a895a:goto L6a895a;
case 0x6a895d:c.instructions+=4;goto B6a895d;
case 0x6a895e:c.instructions+=3;goto B6a895e;
case 0x6a8961:c.instructions+=2;goto B6a8961;
case 0x6a8964:c.instructions+=1;goto B6a8964;
case 0x6a8966:goto L6a8966;
case 0x6a8968:c.instructions+=1;goto B6a8968;
case 0x6a896d:goto L6a896d;
case 0x6a8972:goto L6a8972;
case 0x6a8975:c.instructions+=2;goto B6a8975;
case 0x6a8976:c.instructions+=1;goto B6a8976;
case 0x6a8978:goto L6a8978;
case 0x6a897a:c.instructions+=1;goto B6a897a;
case 0x6a897f:goto L6a897f;
case 0x6a8981:c.instructions+=3;goto B6a8981;
case 0x6a8984:c.instructions+=2;goto B6a8984;
case 0x6a8987:c.instructions+=1;goto B6a8987;
case 0x6a8989:goto L6a8989;
case 0x6a898c:c.instructions+=1;goto B6a898c;
case 0x6a8991:goto L6a8991;
case 0x6a8992:c.instructions+=5;goto B6a8992;
case 0x6a8994:c.instructions+=4;goto B6a8994;
case 0x6a8995:c.instructions+=3;goto B6a8995;
case 0x6a8996:c.instructions+=2;goto B6a8996;
case 0x6a8997:c.instructions+=1;goto B6a8997;
case 0x6a899a:goto L6a899a;
case 0x6a899c:c.instructions+=14;goto B6a899c;
case 0x6a899d:c.instructions+=13;goto B6a899d;
case 0x6a899f:c.instructions+=12;goto B6a899f;
case 0x6a89a2:c.instructions+=11;goto B6a89a2;
case 0x6a89a6:c.instructions+=10;goto B6a89a6;
case 0x6a89aa:c.instructions+=9;goto B6a89aa;
case 0x6a89ab:c.instructions+=8;goto B6a89ab;
case 0x6a89ac:c.instructions+=7;goto B6a89ac;
case 0x6a89ad:c.instructions+=6;goto B6a89ad;
case 0x6a89af:c.instructions+=5;goto B6a89af;
case 0x6a89b1:c.instructions+=4;goto B6a89b1;
case 0x6a89b4:c.instructions+=3;goto B6a89b4;
case 0x6a89b7:c.instructions+=2;goto B6a89b7;
case 0x6a89ba:c.instructions+=1;goto B6a89ba;
case 0x6a89bf:goto L6a89bf;
case 0x6a89c1:c.instructions+=3;goto B6a89c1;
case 0x6a89c4:c.instructions+=2;goto B6a89c4;
case 0x6a89c7:c.instructions+=1;goto B6a89c7;
case 0x6a89c9:goto L6a89c9;
case 0x6a89cc:c.instructions+=5;goto B6a89cc;
case 0x6a89cf:c.instructions+=4;goto B6a89cf;
case 0x6a89d3:c.instructions+=3;goto B6a89d3;
case 0x6a89d4:c.instructions+=2;goto B6a89d4;
case 0x6a89d7:c.instructions+=1;goto B6a89d7;
case 0x6a89d9:goto L6a89d9;
case 0x6a89dc:c.instructions+=2;goto B6a89dc;
case 0x6a89df:c.instructions+=1;goto B6a89df;
case 0x6a89e5:goto L6a89e5;
case 0x6a89e8:c.instructions+=6;goto B6a89e8;
case 0x6a89eb:c.instructions+=5;goto B6a89eb;
case 0x6a89ee:c.instructions+=4;goto B6a89ee;
case 0x6a89f0:c.instructions+=3;goto B6a89f0;
case 0x6a89f5:c.instructions+=2;goto B6a89f5;
case 0x6a89f8:c.instructions+=1;goto B6a89f8;
case 0x6a89fe:goto L6a89fe;
case 0x6a8a01:c.instructions+=2;goto B6a8a01;
case 0x6a8a03:c.instructions+=1;goto B6a8a03;
case 0x6a8a05:goto L6a8a05;
case 0x6a8a08:c.instructions+=5;goto B6a8a08;
case 0x6a8a0a:c.instructions+=4;goto B6a8a0a;
case 0x6a8a0d:c.instructions+=3;goto B6a8a0d;
case 0x6a8a10:c.instructions+=2;goto B6a8a10;
case 0x6a8a13:c.instructions+=1;goto B6a8a13;
case 0x6a8a19:goto L6a8a19;
case 0x6a8a1e:c.instructions+=1;goto B6a8a1e;
case 0x6a8a20:goto L6a8a20;
case 0x6a8a25:c.instructions+=1;goto B6a8a25;
case 0x6a8a2b:goto L6a8a2b;
case 0x6a8a2f:c.instructions+=2;goto B6a8a2f;
case 0x6a8a31:c.instructions+=1;goto B6a8a31;
case 0x6a8a37:goto L6a8a37;
case 0x6a8a3a:c.instructions+=7;goto B6a8a3a;
case 0x6a8a3d:c.instructions+=6;goto B6a8a3d;
case 0x6a8a3f:c.instructions+=5;goto B6a8a3f;
case 0x6a8a43:c.instructions+=4;goto B6a8a43;
case 0x6a8a46:c.instructions+=3;goto B6a8a46;
case 0x6a8a49:c.instructions+=2;goto B6a8a49;
case 0x6a8a4c:c.instructions+=1;goto B6a8a4c;
case 0x6a8a4f:goto L6a8a4f;
case 0x6a8a52:c.instructions+=18;goto B6a8a52;
case 0x6a8a54:c.instructions+=17;goto B6a8a54;
case 0x6a8a57:c.instructions+=16;goto B6a8a57;
case 0x6a8a5a:c.instructions+=15;goto B6a8a5a;
case 0x6a8a5d:c.instructions+=14;goto B6a8a5d;
case 0x6a8a60:c.instructions+=13;goto B6a8a60;
case 0x6a8a63:c.instructions+=12;goto B6a8a63;
case 0x6a8a65:c.instructions+=11;goto B6a8a65;
case 0x6a8a68:c.instructions+=10;goto B6a8a68;
case 0x6a8a6a:c.instructions+=9;goto B6a8a6a;
case 0x6a8a6b:c.instructions+=8;goto B6a8a6b;
case 0x6a8a6d:c.instructions+=7;goto B6a8a6d;
case 0x6a8a70:c.instructions+=6;goto B6a8a70;
case 0x6a8a74:c.instructions+=5;goto B6a8a74;
case 0x6a8a77:c.instructions+=4;goto B6a8a77;
case 0x6a8a7a:c.instructions+=3;goto B6a8a7a;
case 0x6a8a7d:c.instructions+=2;goto B6a8a7d;
case 0x6a8a81:c.instructions+=1;goto B6a8a81;
case 0x6a8a87:goto L6a8a87;
case 0x6a8a8a:c.instructions+=3;goto B6a8a8a;
case 0x6a8a8e:c.instructions+=2;goto B6a8a8e;
case 0x6a8a92:c.instructions+=1;goto B6a8a92;
case 0x6a8a98:goto L6a8a98;
case 0x6a8a9b:c.instructions+=7;goto B6a8a9b;
case 0x6a8a9e:c.instructions+=6;goto B6a8a9e;
case 0x6a8aa1:c.instructions+=5;goto B6a8aa1;
case 0x6a8aa3:c.instructions+=4;goto B6a8aa3;
case 0x6a8aa5:c.instructions+=3;goto B6a8aa5;
case 0x6a8aa8:c.instructions+=2;goto B6a8aa8;
case 0x6a8aae:c.instructions+=1;goto B6a8aae;
case 0x6a8ab4:goto L6a8ab4;
case 0x6a8ab7:c.instructions+=4;goto B6a8ab7;
case 0x6a8ab9:c.instructions+=3;goto B6a8ab9;
case 0x6a8abb:c.instructions+=2;goto B6a8abb;
case 0x6a8abe:c.instructions+=1;goto B6a8abe;
case 0x6a8ac0:goto L6a8ac0;
case 0x6a8ac3:c.instructions+=3;goto B6a8ac3;
case 0x6a8ac7:c.instructions+=2;goto B6a8ac7;
case 0x6a8ac9:c.instructions+=1;goto B6a8ac9;
case 0x6a8acc:goto L6a8acc;
case 0x6a8ace:c.instructions+=1;goto B6a8ace;
case 0x6a8ad0:goto L6a8ad0;
case 0x6a8ad1:c.instructions+=3;goto B6a8ad1;
case 0x6a8ad4:c.instructions+=2;goto B6a8ad4;
case 0x6a8ad7:c.instructions+=1;goto B6a8ad7;
case 0x6a8ad9:goto L6a8ad9;
case 0x6a8adc:goto L6a8adc;
case 0x6a8adf:c.instructions+=20;goto B6a8adf;
case 0x6a8ae3:c.instructions+=19;goto B6a8ae3;
case 0x6a8ae6:c.instructions+=18;goto B6a8ae6;
case 0x6a8ae9:c.instructions+=17;goto B6a8ae9;
case 0x6a8aec:c.instructions+=16;goto B6a8aec;
case 0x6a8af0:c.instructions+=15;goto B6a8af0;
case 0x6a8af2:c.instructions+=14;goto B6a8af2;
case 0x6a8af5:c.instructions+=13;goto B6a8af5;
case 0x6a8af7:c.instructions+=12;goto B6a8af7;
case 0x6a8afa:c.instructions+=11;goto B6a8afa;
case 0x6a8afd:c.instructions+=10;goto B6a8afd;
case 0x6a8b00:c.instructions+=9;goto B6a8b00;
case 0x6a8b02:c.instructions+=8;goto B6a8b02;
case 0x6a8b05:c.instructions+=7;goto B6a8b05;
case 0x6a8b08:c.instructions+=6;goto B6a8b08;
case 0x6a8b0b:c.instructions+=5;goto B6a8b0b;
case 0x6a8b0e:c.instructions+=4;goto B6a8b0e;
case 0x6a8b12:c.instructions+=3;goto B6a8b12;
case 0x6a8b16:c.instructions+=2;goto B6a8b16;
case 0x6a8b19:c.instructions+=1;goto B6a8b19;
case 0x6a8b1b:goto L6a8b1b;
case 0x6a8b1d:c.instructions+=1;goto B6a8b1d;
case 0x6a8b1f:goto L6a8b1f;
case 0x6a8b22:c.instructions+=7;goto B6a8b22;
case 0x6a8b23:c.instructions+=6;goto B6a8b23;
case 0x6a8b26:c.instructions+=5;goto B6a8b26;
case 0x6a8b27:c.instructions+=4;goto B6a8b27;
case 0x6a8b2b:c.instructions+=3;goto B6a8b2b;
case 0x6a8b2d:c.instructions+=2;goto B6a8b2d;
case 0x6a8b2f:c.instructions+=1;goto B6a8b2f;
case 0x6a8b34:goto L6a8b34;
case 0x6a8b37:c.instructions+=10;goto B6a8b37;
case 0x6a8b3a:c.instructions+=9;goto B6a8b3a;
case 0x6a8b3d:c.instructions+=8;goto B6a8b3d;
case 0x6a8b3e:c.instructions+=7;goto B6a8b3e;
case 0x6a8b41:c.instructions+=6;goto B6a8b41;
case 0x6a8b42:c.instructions+=5;goto B6a8b42;
case 0x6a8b45:c.instructions+=4;goto B6a8b45;
case 0x6a8b49:c.instructions+=3;goto B6a8b49;
case 0x6a8b4b:c.instructions+=2;goto B6a8b4b;
case 0x6a8b4d:c.instructions+=1;goto B6a8b4d;
case 0x6a8b52:goto L6a8b52;
case 0x6a8b54:c.instructions+=3;goto B6a8b54;
case 0x6a8b56:c.instructions+=2;goto B6a8b56;
case 0x6a8b59:c.instructions+=1;goto B6a8b59;
case 0x6a8b5c:goto L6a8b5c;
case 0x6a8b5e:c.instructions+=2;goto B6a8b5e;
case 0x6a8b5f:c.instructions+=1;goto B6a8b5f;
case 0x6a8b62:goto L6a8b62;
case 0x6a8b66:c.instructions+=11;goto B6a8b66;
case 0x6a8b69:c.instructions+=10;goto B6a8b69;
case 0x6a8b6c:c.instructions+=9;goto B6a8b6c;
case 0x6a8b6f:c.instructions+=8;goto B6a8b6f;
case 0x6a8b72:c.instructions+=7;goto B6a8b72;
case 0x6a8b74:c.instructions+=6;goto B6a8b74;
case 0x6a8b75:c.instructions+=5;goto B6a8b75;
case 0x6a8b77:c.instructions+=4;goto B6a8b77;
case 0x6a8b7d:c.instructions+=3;goto B6a8b7d;
case 0x6a8b80:c.instructions+=2;goto B6a8b80;
case 0x6a8b83:c.instructions+=1;goto B6a8b83;
case 0x6a8b85:goto L6a8b85;
case 0x6a8b89:c.instructions+=2;goto B6a8b89;
case 0x6a8b8d:c.instructions+=1;goto B6a8b8d;
case 0x6a8b8f:goto L6a8b8f;
case 0x6a8b93:c.instructions+=4;goto B6a8b93;
case 0x6a8b96:c.instructions+=3;goto B6a8b96;
case 0x6a8b99:c.instructions+=2;goto B6a8b99;
case 0x6a8b9d:c.instructions+=1;goto B6a8b9d;
case 0x6a8b9f:goto L6a8b9f;
case 0x6a8ba3:c.instructions+=2;goto B6a8ba3;
case 0x6a8ba7:c.instructions+=1;goto B6a8ba7;
case 0x6a8bad:goto L6a8bad;
case 0x6a8bb0:c.instructions+=2;goto B6a8bb0;
case 0x6a8bb4:c.instructions+=1;goto B6a8bb4;
case 0x6a8bba:goto L6a8bba;
case 0x6a8bbe:c.instructions+=3;goto B6a8bbe;
case 0x6a8bc1:c.instructions+=2;goto B6a8bc1;
case 0x6a8bc4:c.instructions+=1;goto B6a8bc4;
case 0x6a8bc6:goto L6a8bc6;
case 0x6a8bc9:c.instructions+=1;goto B6a8bc9;
case 0x6a8bcf:goto L6a8bcf;
case 0x6a8bd3:c.instructions+=2;goto B6a8bd3;
case 0x6a8bd7:c.instructions+=1;goto B6a8bd7;
case 0x6a8bd9:goto L6a8bd9;
case 0x6a8bdd:c.instructions+=1;goto B6a8bdd;
case 0x6a8bdf:goto L6a8bdf;
case 0x6a8be3:c.instructions+=2;goto B6a8be3;
case 0x6a8be7:c.instructions+=1;goto B6a8be7;
case 0x6a8be9:goto L6a8be9;
case 0x6a8bec:c.instructions+=4;goto B6a8bec;
case 0x6a8bef:c.instructions+=3;goto B6a8bef;
case 0x6a8bf2:c.instructions+=2;goto B6a8bf2;
case 0x6a8bf6:c.instructions+=1;goto B6a8bf6;
case 0x6a8bfc:goto L6a8bfc;
case 0x6a8c00:c.instructions+=5;goto B6a8c00;
case 0x6a8c04:c.instructions+=4;goto B6a8c04;
case 0x6a8c07:c.instructions+=3;goto B6a8c07;
case 0x6a8c09:c.instructions+=2;goto B6a8c09;
case 0x6a8c0b:c.instructions+=1;goto B6a8c0b;
case 0x6a8c0d:goto L6a8c0d;
case 0x6a8c11:c.instructions+=1;goto B6a8c11;
case 0x6a8c13:goto L6a8c13;
case 0x6a8c16:c.instructions+=8;goto B6a8c16;
case 0x6a8c19:c.instructions+=7;goto B6a8c19;
case 0x6a8c1c:c.instructions+=6;goto B6a8c1c;
case 0x6a8c1d:c.instructions+=5;goto B6a8c1d;
case 0x6a8c20:c.instructions+=4;goto B6a8c20;
case 0x6a8c21:c.instructions+=3;goto B6a8c21;
case 0x6a8c22:c.instructions+=2;goto B6a8c22;
case 0x6a8c24:c.instructions+=1;goto B6a8c24;
case 0x6a8c29:goto L6a8c29;
case 0x6a8c2b:c.instructions+=6;goto B6a8c2b;
case 0x6a8c2d:c.instructions+=5;goto B6a8c2d;
case 0x6a8c30:c.instructions+=4;goto B6a8c30;
case 0x6a8c32:c.instructions+=3;goto B6a8c32;
case 0x6a8c34:c.instructions+=2;goto B6a8c34;
case 0x6a8c37:c.instructions+=1;goto B6a8c37;
case 0x6a8c3d:goto L6a8c3d;
case 0x6a8c40:goto L6a8c40;
case 0x6a8c44:c.instructions+=4;goto B6a8c44;
case 0x6a8c46:c.instructions+=3;goto B6a8c46;
case 0x6a8c49:c.instructions+=2;goto B6a8c49;
case 0x6a8c4b:c.instructions+=1;goto B6a8c4b;
case 0x6a8c51:goto L6a8c51;
case 0x6a8c52:c.instructions+=3;goto B6a8c52;
case 0x6a8c55:c.instructions+=2;goto B6a8c55;
case 0x6a8c58:c.instructions+=1;goto B6a8c58;
case 0x6a8c5e:goto L6a8c5e;
case 0x6a8c61:c.instructions+=1;goto B6a8c61;
case 0x6a8c66:goto L6a8c66;
case 0x6a8c69:c.instructions+=5;goto B6a8c69;
case 0x6a8c6b:c.instructions+=4;goto B6a8c6b;
case 0x6a8c6d:c.instructions+=3;goto B6a8c6d;
case 0x6a8c72:c.instructions+=2;goto B6a8c72;
case 0x6a8c77:c.instructions+=1;goto B6a8c77;
case 0x6a8c79:goto L6a8c79;
case 0x6a8c7e:c.instructions+=1;goto B6a8c7e;
case 0x6a8c80:goto L6a8c80;
case 0x6a8c84:c.instructions+=5;goto B6a8c84;
case 0x6a8c86:c.instructions+=4;goto B6a8c86;
case 0x6a8c8a:c.instructions+=3;goto B6a8c8a;
case 0x6a8c8d:c.instructions+=2;goto B6a8c8d;
case 0x6a8c90:c.instructions+=1;goto B6a8c90;
case 0x6a8c92:goto L6a8c92;
case 0x6a8c96:c.instructions+=4;goto B6a8c96;
case 0x6a8c98:c.instructions+=3;goto B6a8c98;
case 0x6a8c9c:c.instructions+=2;goto B6a8c9c;
case 0x6a8c9f:c.instructions+=1;goto B6a8c9f;
case 0x6a8ca2:goto L6a8ca2;
case 0x6a8ca5:c.instructions+=13;goto B6a8ca5;
case 0x6a8ca9:c.instructions+=12;goto B6a8ca9;
case 0x6a8cac:c.instructions+=11;goto B6a8cac;
case 0x6a8cb0:c.instructions+=10;goto B6a8cb0;
case 0x6a8cb2:c.instructions+=9;goto B6a8cb2;
case 0x6a8cb3:c.instructions+=8;goto B6a8cb3;
case 0x6a8cb4:c.instructions+=7;goto B6a8cb4;
case 0x6a8cb7:c.instructions+=6;goto B6a8cb7;
case 0x6a8cb9:c.instructions+=5;goto B6a8cb9;
case 0x6a8cbb:c.instructions+=4;goto B6a8cbb;
case 0x6a8cbd:c.instructions+=3;goto B6a8cbd;
case 0x6a8cc0:c.instructions+=2;goto B6a8cc0;
case 0x6a8cc2:c.instructions+=1;goto B6a8cc2;
case 0x6a8cc7:goto L6a8cc7;
case 0x6a8ccb:c.instructions+=2;goto B6a8ccb;
case 0x6a8ccd:c.instructions+=1;goto B6a8ccd;
case 0x6a8ccf:goto L6a8ccf;
case 0x6a8cd3:c.instructions+=1;goto B6a8cd3;
case 0x6a8cd5:goto L6a8cd5;
case 0x6a8cd9:goto L6a8cd9;
case 0x6a8cdb:c.instructions+=10;goto B6a8cdb;
case 0x6a8cdf:c.instructions+=9;goto B6a8cdf;
case 0x6a8ce1:c.instructions+=8;goto B6a8ce1;
case 0x6a8ce4:c.instructions+=7;goto B6a8ce4;
case 0x6a8ce6:c.instructions+=6;goto B6a8ce6;
case 0x6a8ce8:c.instructions+=5;goto B6a8ce8;
case 0x6a8ceb:c.instructions+=4;goto B6a8ceb;
case 0x6a8cef:c.instructions+=3;goto B6a8cef;
case 0x6a8cf3:c.instructions+=2;goto B6a8cf3;
case 0x6a8cf7:c.instructions+=1;goto B6a8cf7;
case 0x6a8cfb:goto L6a8cfb;
case 0x6a8cfe:c.instructions+=6;goto B6a8cfe;
case 0x6a8d01:c.instructions+=5;goto B6a8d01;
case 0x6a8d04:c.instructions+=4;goto B6a8d04;
case 0x6a8d07:c.instructions+=3;goto B6a8d07;
case 0x6a8d0a:c.instructions+=2;goto B6a8d0a;
case 0x6a8d0e:c.instructions+=1;goto B6a8d0e;
case 0x6a8d15:goto L6a8d15;
case 0x6a8d18:c.instructions+=2;goto B6a8d18;
case 0x6a8d1c:c.instructions+=1;goto B6a8d1c;
case 0x6a8d22:goto L6a8d22;
case 0x6a8d25:c.instructions+=3;goto B6a8d25;
case 0x6a8d28:c.instructions+=2;goto B6a8d28;
case 0x6a8d2b:c.instructions+=1;goto B6a8d2b;
case 0x6a8d31:goto L6a8d31;
case 0x6a8d34:c.instructions+=3;goto B6a8d34;
case 0x6a8d37:c.instructions+=2;goto B6a8d37;
case 0x6a8d3a:c.instructions+=1;goto B6a8d3a;
case 0x6a8d40:goto L6a8d40;
case 0x6a8d44:c.instructions+=1;goto B6a8d44;
case 0x6a8d46:goto L6a8d46;
case 0x6a8d4a:c.instructions+=3;goto B6a8d4a;
case 0x6a8d4c:c.instructions+=2;goto B6a8d4c;
case 0x6a8d53:c.instructions+=1;goto B6a8d53;
case 0x6a8d58:goto L6a8d58;
case 0x6a8d5c:c.instructions+=2;goto B6a8d5c;
case 0x6a8d60:c.instructions+=1;goto B6a8d60;
case 0x6a8d66:goto L6a8d66;
case 0x6a8d69:c.instructions+=6;goto B6a8d69;
case 0x6a8d6c:c.instructions+=5;goto B6a8d6c;
case 0x6a8d6f:c.instructions+=4;goto B6a8d6f;
case 0x6a8d71:c.instructions+=3;goto B6a8d71;
case 0x6a8d76:c.instructions+=2;goto B6a8d76;
case 0x6a8d79:c.instructions+=1;goto B6a8d79;
case 0x6a8d7f:goto L6a8d7f;
case 0x6a8d82:c.instructions+=2;goto B6a8d82;
case 0x6a8d84:c.instructions+=1;goto B6a8d84;
case 0x6a8d86:goto L6a8d86;
case 0x6a8d89:c.instructions+=5;goto B6a8d89;
case 0x6a8d8b:c.instructions+=4;goto B6a8d8b;
case 0x6a8d8e:c.instructions+=3;goto B6a8d8e;
case 0x6a8d91:c.instructions+=2;goto B6a8d91;
case 0x6a8d94:c.instructions+=1;goto B6a8d94;
case 0x6a8d9a:goto L6a8d9a;
case 0x6a8d9f:c.instructions+=1;goto B6a8d9f;
case 0x6a8da1:goto L6a8da1;
case 0x6a8da6:c.instructions+=1;goto B6a8da6;
case 0x6a8dac:goto L6a8dac;
case 0x6a8db0:c.instructions+=2;goto B6a8db0;
case 0x6a8db2:c.instructions+=1;goto B6a8db2;
case 0x6a8db8:goto L6a8db8;
case 0x6a8dbb:c.instructions+=11;goto B6a8dbb;
case 0x6a8dbe:c.instructions+=10;goto B6a8dbe;
case 0x6a8dc1:c.instructions+=9;goto B6a8dc1;
case 0x6a8dc3:c.instructions+=8;goto B6a8dc3;
case 0x6a8dc6:c.instructions+=7;goto B6a8dc6;
case 0x6a8dc9:c.instructions+=6;goto B6a8dc9;
case 0x6a8dcc:c.instructions+=5;goto B6a8dcc;
case 0x6a8dcf:c.instructions+=4;goto B6a8dcf;
case 0x6a8dd2:c.instructions+=3;goto B6a8dd2;
case 0x6a8dd5:c.instructions+=2;goto B6a8dd5;
case 0x6a8dd8:c.instructions+=1;goto B6a8dd8;
case 0x6a8ddd:goto L6a8ddd;
case 0x6a8de1:c.instructions+=1;goto B6a8de1;
case 0x6a8de7:goto L6a8de7;
case 0x6a8dea:c.instructions+=2;goto B6a8dea;
case 0x6a8ded:c.instructions+=1;goto B6a8ded;
case 0x6a8def:goto L6a8def;
case 0x6a8df2:c.instructions+=2;goto B6a8df2;
case 0x6a8df5:c.instructions+=1;goto B6a8df5;
case 0x6a8df7:goto L6a8df7;
case 0x6a8dfa:goto L6a8dfa;
case 0x6a8dfc:c.instructions+=1;goto B6a8dfc;
case 0x6a8dfe:goto L6a8dfe;
case 0x6a8dff:c.instructions+=4;goto B6a8dff;
case 0x6a8e02:c.instructions+=3;goto B6a8e02;
case 0x6a8e05:c.instructions+=2;goto B6a8e05;
case 0x6a8e08:c.instructions+=1;goto B6a8e08;
case 0x6a8e0a:goto L6a8e0a;
case 0x6a8e0d:c.instructions+=1;goto B6a8e0d;
case 0x6a8e13:goto L6a8e13;
case 0x6a8e16:c.instructions+=6;goto B6a8e16;
case 0x6a8e19:c.instructions+=5;goto B6a8e19;
case 0x6a8e1c:c.instructions+=4;goto B6a8e1c;
case 0x6a8e1f:c.instructions+=3;goto B6a8e1f;
case 0x6a8e21:c.instructions+=2;goto B6a8e21;
case 0x6a8e23:c.instructions+=1;goto B6a8e23;
case 0x6a8e25:goto L6a8e25;
case 0x6a8e28:goto L6a8e28;
case 0x6a8e2a:c.instructions+=1;goto B6a8e2a;
case 0x6a8e2c:goto L6a8e2c;
case 0x6a8e2d:c.instructions+=3;goto B6a8e2d;
case 0x6a8e30:c.instructions+=2;goto B6a8e30;
case 0x6a8e32:c.instructions+=1;goto B6a8e32;
case 0x6a8e34:goto L6a8e34;
case 0x6a8e37:goto L6a8e37;
case 0x6a8e39:c.instructions+=3;goto B6a8e39;
case 0x6a8e3f:c.instructions+=2;goto B6a8e3f;
case 0x6a8e45:c.instructions+=1;goto B6a8e45;
case 0x6a8e47:goto L6a8e47;
case 0x6a8e4a:c.instructions+=4;goto B6a8e4a;
case 0x6a8e4d:c.instructions+=3;goto B6a8e4d;
case 0x6a8e4f:c.instructions+=2;goto B6a8e4f;
case 0x6a8e52:c.instructions+=1;goto B6a8e52;
case 0x6a8e58:goto L6a8e58;
case 0x6a8e5b:c.instructions+=1;goto B6a8e5b;
case 0x6a8e5d:goto L6a8e5d;
case 0x6a8e63:c.instructions+=1;goto B6a8e63;
case 0x6a8e65:goto L6a8e65;
case 0x6a8e68:c.instructions+=11;goto B6a8e68;
case 0x6a8e6b:c.instructions+=10;goto B6a8e6b;
case 0x6a8e6e:c.instructions+=9;goto B6a8e6e;
case 0x6a8e70:c.instructions+=8;goto B6a8e70;
case 0x6a8e73:c.instructions+=7;goto B6a8e73;
case 0x6a8e76:c.instructions+=6;goto B6a8e76;
case 0x6a8e79:c.instructions+=5;goto B6a8e79;
case 0x6a8e7c:c.instructions+=4;goto B6a8e7c;
case 0x6a8e7f:c.instructions+=3;goto B6a8e7f;
case 0x6a8e82:c.instructions+=2;goto B6a8e82;
case 0x6a8e86:c.instructions+=1;goto B6a8e86;
case 0x6a8e88:goto L6a8e88;
case 0x6a8e8b:c.instructions+=4;goto B6a8e8b;
case 0x6a8e91:c.instructions+=3;goto B6a8e91;
case 0x6a8e93:c.instructions+=2;goto B6a8e93;
case 0x6a8e96:c.instructions+=1;goto B6a8e96;
case 0x6a8e98:goto L6a8e98;
case 0x6a8e9b:c.instructions+=2;goto B6a8e9b;
case 0x6a8e9e:c.instructions+=1;goto B6a8e9e;
case 0x6a8ea0:goto L6a8ea0;
case 0x6a8ea3:c.instructions+=5;goto B6a8ea3;
case 0x6a8ea6:c.instructions+=4;goto B6a8ea6;
case 0x6a8ea9:c.instructions+=3;goto B6a8ea9;
case 0x6a8eac:c.instructions+=2;goto B6a8eac;
case 0x6a8eb0:c.instructions+=1;goto B6a8eb0;
case 0x6a8eb2:goto L6a8eb2;
case 0x6a8eb5:c.instructions+=4;goto B6a8eb5;
case 0x6a8ebb:c.instructions+=3;goto B6a8ebb;
case 0x6a8ebd:c.instructions+=2;goto B6a8ebd;
case 0x6a8ec0:c.instructions+=1;goto B6a8ec0;
case 0x6a8ec2:goto L6a8ec2;
case 0x6a8ec5:goto L6a8ec5;
case 0x6a8ec8:c.instructions+=1;goto B6a8ec8;
case 0x6a8ecb:goto L6a8ecb;
case 0x6a8ece:c.instructions+=4;goto B6a8ece;
case 0x6a8ed1:c.instructions+=3;goto B6a8ed1;
case 0x6a8ed4:c.instructions+=2;goto B6a8ed4;
case 0x6a8ed7:c.instructions+=1;goto B6a8ed7;
case 0x6a8eda:goto L6a8eda;
case 0x6a8ede:c.instructions+=1;goto B6a8ede;
case 0x6a8ee4:goto L6a8ee4;
case 0x6a8ee7:c.instructions+=3;goto B6a8ee7;
case 0x6a8eea:c.instructions+=2;goto B6a8eea;
case 0x6a8eec:c.instructions+=1;goto B6a8eec;
case 0x6a8eee:goto L6a8eee;
case 0x6a8ef0:c.instructions+=1;goto B6a8ef0;
case 0x6a8ef7:goto L6a8ef7;
case 0x6a8efa:c.instructions+=4;goto B6a8efa;
case 0x6a8efd:c.instructions+=3;goto B6a8efd;
case 0x6a8f00:c.instructions+=2;goto B6a8f00;
case 0x6a8f03:c.instructions+=1;goto B6a8f03;
case 0x6a8f09:goto L6a8f09;
case 0x6a8f0c:c.instructions+=3;goto B6a8f0c;
case 0x6a8f0f:c.instructions+=2;goto B6a8f0f;
case 0x6a8f12:c.instructions+=1;goto B6a8f12;
case 0x6a8f18:goto L6a8f18;
case 0x6a8f1c:c.instructions+=1;goto B6a8f1c;
case 0x6a8f1e:goto L6a8f1e;
case 0x6a8f22:c.instructions+=3;goto B6a8f22;
case 0x6a8f24:c.instructions+=2;goto B6a8f24;
case 0x6a8f2b:c.instructions+=1;goto B6a8f2b;
case 0x6a8f30:goto L6a8f30;
case 0x6a8f34:c.instructions+=2;goto B6a8f34;
case 0x6a8f38:c.instructions+=1;goto B6a8f38;
case 0x6a8f3e:goto L6a8f3e;
case 0x6a8f41:c.instructions+=5;goto B6a8f41;
case 0x6a8f44:c.instructions+=4;goto B6a8f44;
case 0x6a8f47:c.instructions+=3;goto B6a8f47;
case 0x6a8f49:c.instructions+=2;goto B6a8f49;
case 0x6a8f4e:c.instructions+=1;goto B6a8f4e;
case 0x6a8f54:goto L6a8f54;
case 0x6a8f57:c.instructions+=2;goto B6a8f57;
case 0x6a8f59:c.instructions+=1;goto B6a8f59;
case 0x6a8f5b:goto L6a8f5b;
case 0x6a8f5e:c.instructions+=5;goto B6a8f5e;
case 0x6a8f60:c.instructions+=4;goto B6a8f60;
case 0x6a8f63:c.instructions+=3;goto B6a8f63;
case 0x6a8f66:c.instructions+=2;goto B6a8f66;
case 0x6a8f69:c.instructions+=1;goto B6a8f69;
case 0x6a8f6f:goto L6a8f6f;
case 0x6a8f74:c.instructions+=1;goto B6a8f74;
case 0x6a8f7a:goto L6a8f7a;
case 0x6a8f7c:c.instructions+=3;goto B6a8f7c;
case 0x6a8f7e:c.instructions+=2;goto B6a8f7e;
case 0x6a8f81:c.instructions+=1;goto B6a8f81;
case 0x6a8f87:goto L6a8f87;
case 0x6a8f8a:c.instructions+=9;goto B6a8f8a;
case 0x6a8f8d:c.instructions+=8;goto B6a8f8d;
case 0x6a8f90:c.instructions+=7;goto B6a8f90;
case 0x6a8f93:c.instructions+=6;goto B6a8f93;
case 0x6a8f96:c.instructions+=5;goto B6a8f96;
case 0x6a8f99:c.instructions+=4;goto B6a8f99;
case 0x6a8f9c:c.instructions+=3;goto B6a8f9c;
case 0x6a8f9f:c.instructions+=2;goto B6a8f9f;
case 0x6a8fa3:c.instructions+=1;goto B6a8fa3;
case 0x6a8fa9:goto L6a8fa9;
case 0x6a8fad:c.instructions+=1;goto B6a8fad;
case 0x6a8fb3:goto L6a8fb3;
case 0x6a8fb6:c.instructions+=6;goto B6a8fb6;
case 0x6a8fb9:c.instructions+=5;goto B6a8fb9;
case 0x6a8fbc:c.instructions+=4;goto B6a8fbc;
case 0x6a8fbf:c.instructions+=3;goto B6a8fbf;
case 0x6a8fc3:c.instructions+=2;goto B6a8fc3;
case 0x6a8fc5:c.instructions+=1;goto B6a8fc5;
case 0x6a8fc7:goto L6a8fc7;
case 0x6a8fca:c.instructions+=1;goto B6a8fca;
case 0x6a8fcd:goto L6a8fcd;
case 0x6a8fd0:c.instructions+=3;goto B6a8fd0;
case 0x6a8fd2:c.instructions+=2;goto B6a8fd2;
case 0x6a8fd5:c.instructions+=1;goto B6a8fd5;
case 0x6a8fd7:goto L6a8fd7;
case 0x6a8fda:c.instructions+=3;goto B6a8fda;
case 0x6a8fde:c.instructions+=2;goto B6a8fde;
case 0x6a8fe1:c.instructions+=1;goto B6a8fe1;
case 0x6a8fe3:goto L6a8fe3;
case 0x6a8fe5:c.instructions+=4;goto B6a8fe5;
case 0x6a8feb:c.instructions+=3;goto B6a8feb;
case 0x6a8ff1:c.instructions+=2;goto B6a8ff1;
case 0x6a8ff4:c.instructions+=1;goto B6a8ff4;
case 0x6a8ff6:goto L6a8ff6;
case 0x6a8ffd:c.instructions+=1;goto B6a8ffd;
case 0x6a8fff:goto L6a8fff;
default:missing_instruction(c.pc);}
B6a8002:L6a8002:{c.instructions+=5;NFSU2_TR(0x6a8002);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a8003:{NFSU2_TR(0x6a8003);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a8004:{NFSU2_TR(0x6a8004);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6a8007:{NFSU2_TR(0x6a8007);
__builtin_memmove((R+4),(R+28),4);
}
B6a8009:{NFSU2_TR(0x6a8009);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a800eull));
TAIL_STATIC(0x699c39u,699);
}
B6a800e:L6a800e:{c.instructions+=7;NFSU2_TR(0x6a800e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a8011:{NFSU2_TR(0x6a8011);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a8014:{NFSU2_TR(0x6a8014);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a8017:{NFSU2_TR(0x6a8017);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a801a:{NFSU2_TR(0x6a801a);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6a801c:{NFSU2_TR(0x6a801c);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a801f:{NFSU2_TR(0x6a801f);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a8038;}}
}
B6a8021:L6a8021:{c.instructions+=8;NFSU2_TR(0x6a8021);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a8024:{NFSU2_TR(0x6a8024);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6a8027:{NFSU2_TR(0x6a8027);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6a802a:{NFSU2_TR(0x6a802a);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6a802d:{NFSU2_TR(0x6a802d);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6a802e:{NFSU2_TR(0x6a802e);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a8031:{NFSU2_TR(0x6a8031);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B6a8034:{NFSU2_TR(0x6a8034);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a8021u);}goto L6a8021;}}
}
B6a8036:L6a8036:{c.instructions+=1;NFSU2_TR(0x6a8036);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6a8038:L6a8038:{c.instructions+=8;NFSU2_TR(0x6a8038);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+24)),r4(U+0));
}
B6a803a:{NFSU2_TR(0x6a803a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a803d:{NFSU2_TR(0x6a803d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a8040:{NFSU2_TR(0x6a8040);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6a8047:{NFSU2_TR(0x6a8047);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a804a:{NFSU2_TR(0x6a804a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a804d:{NFSU2_TR(0x6a804d);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6a8050:{NFSU2_TR(0x6a8050);
if(r1(R+512)){TAIL_STATIC(0x6a74f8u,6a7);}
}
B6a8056:L6a8056:{c.instructions+=2;NFSU2_TR(0x6a8056);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a805a:{NFSU2_TR(0x6a805a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a8061;}}
}
B6a805c:L6a805c:{c.instructions+=3;NFSU2_TR(0x6a805c);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6a805e:{NFSU2_TR(0x6a805e);
u8 U[6];
w1(R+523,scarry<u32>(r4(R+0),u32(0x1ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6a805f:{NFSU2_TR(0x6a805f);
{goto L6a806a;}
}
B6a8061:L6a8061:{c.instructions+=2;NFSU2_TR(0x6a8061);
__builtin_memmove((R+4),(R+28),4);
}
B6a8063:{NFSU2_TR(0x6a8063);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a8068ull));
TAIL_STATIC(0x69e7c4u,69e);
}
B6a8068:L6a8068:{c.instructions+=1;NFSU2_TR(0x6a8068);
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
B6a806a:L6a806a:{c.instructions+=5;NFSU2_TR(0x6a806a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6a806b:{NFSU2_TR(0x6a806b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6a806c:{NFSU2_TR(0x6a806c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6a806d:{NFSU2_TR(0x6a806d);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6a806e:{NFSU2_TR(0x6a806e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6a806f:L6a806f:{c.instructions+=11;NFSU2_TR(0x6a806f);
__builtin_memmove((R+28),(R+28),4);
}
B6a8071:{NFSU2_TR(0x6a8071);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a8072:{NFSU2_TR(0x6a8072);
__builtin_memmove((R+20),(R+16),4);
}
B6a8074:{NFSU2_TR(0x6a8074);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x14ull))));
}
B6a8077:{NFSU2_TR(0x6a8077);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a8078:{NFSU2_TR(0x6a8078);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a8079:{NFSU2_TR(0x6a8079);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a807a:{NFSU2_TR(0x6a807a);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6a807c:{NFSU2_TR(0x6a807c);
__builtin_memmove((R+24),(R+4),4);
}
B6a807e:{NFSU2_TR(0x6a807e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a8081:{NFSU2_TR(0x6a8081);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a8086ull));
TAIL_STATIC(0x69e219u,69e);
}
B6a8086:L6a8086:{c.instructions+=4;NFSU2_TR(0x6a8086);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a8089:{NFSU2_TR(0x6a8089);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6a808c:{NFSU2_TR(0x6a808c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a808d:{NFSU2_TR(0x6a808d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a8092ull));
TAIL_STATIC(0x575620u,575);
}
B6a8092:L6a8092:{c.instructions+=5;NFSU2_TR(0x6a8092);
__builtin_memmove((R+12),(R+0),4);
}
B6a8094:{NFSU2_TR(0x6a8094);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B6a8096:{NFSU2_TR(0x6a8096);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6a8097:{NFSU2_TR(0x6a8097);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a809a:{NFSU2_TR(0x6a809a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a80a6;}}
}
B6a809c:L6a809c:{c.instructions+=2;NFSU2_TR(0x6a809c);
w4(R+0,u32(0x8007000eull));
}
B6a80a1:{NFSU2_TR(0x6a80a1);
{goto L6a8236;}
}
B6a80a6:L6a80a6:{c.instructions+=5;NFSU2_TR(0x6a80a6);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6a80a8:{NFSU2_TR(0x6a80a8);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a80ab:{NFSU2_TR(0x6a80ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a80ae:{NFSU2_TR(0x6a80ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a80b1:{NFSU2_TR(0x6a80b1);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a80df;}}
}
B6a80b3:L6a80b3:{c.instructions+=9;NFSU2_TR(0x6a80b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a80b6:{NFSU2_TR(0x6a80b6);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a80b9:{NFSU2_TR(0x6a80b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a80bc:{NFSU2_TR(0x6a80bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a80bf:{NFSU2_TR(0x6a80bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a80c2:{NFSU2_TR(0x6a80c2);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a80c5:{NFSU2_TR(0x6a80c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a80c8:{NFSU2_TR(0x6a80c8);
u8 U[1];
w1(U+0,u8(u32(r1(R+5))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6a80cb:{NFSU2_TR(0x6a80cb);
if(r1(R+518)){{goto L6a80d6;}}
}
B6a80cd:L6a80cd:{c.instructions+=2;NFSU2_TR(0x6a80cd);
u8 U[1];
w1(U+0,u8(u32(r1(R+5))&u32(u8(0xcull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6a80d0:{NFSU2_TR(0x6a80d0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a80d6;}}
}
B6a80d2:L6a80d2:{c.instructions+=2;NFSU2_TR(0x6a80d2);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6a80d5:{NFSU2_TR(0x6a80d5);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6a80d6:L6a80d6:{c.instructions+=3;NFSU2_TR(0x6a80d6);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6a80d7:{NFSU2_TR(0x6a80d7);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6a80da:{NFSU2_TR(0x6a80da);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a80b3u);}goto L6a80b3;}}
}
B6a80dc:L6a80dc:{c.instructions+=1;NFSU2_TR(0x6a80dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a80df:L6a80df:{c.instructions+=5;NFSU2_TR(0x6a80df);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a80e0:{NFSU2_TR(0x6a80e0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a80e1:{NFSU2_TR(0x6a80e1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a80e2:{NFSU2_TR(0x6a80e2);
u8 U[4];
w4(U+0,u32(0x699fe6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a80e7:{NFSU2_TR(0x6a80e7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a80ecull));
TAIL_STATIC(0x69a41du,69a);
}
B6a80ec:L6a80ec:{c.instructions+=5;NFSU2_TR(0x6a80ec);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6a80ee:{NFSU2_TR(0x6a80ee);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6a80ef:{NFSU2_TR(0x6a80ef);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+28))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a80f1:{NFSU2_TR(0x6a80f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a80f4:{NFSU2_TR(0x6a80f4);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a8169;}}
}
B6a80f6:L6a80f6:{c.instructions+=1;NFSU2_TR(0x6a80f6);
{goto L6a80fb;}
}
B6a80f8:L6a80f8:{c.instructions+=1;NFSU2_TR(0x6a80f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6a80fb:L6a80fb:{c.instructions+=11;NFSU2_TR(0x6a80fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a80fe:{NFSU2_TR(0x6a80fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a8101:{NFSU2_TR(0x6a8101);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6a8104:{NFSU2_TR(0x6a8104);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B6a8107:{NFSU2_TR(0x6a8107);
u8 U[12];
w4(U+0,u32(u32(u32(0xfffffffcull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+12),(U+8),4);
}
B6a810b:{NFSU2_TR(0x6a810b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6a810d:{NFSU2_TR(0x6a810d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a8110:{NFSU2_TR(0x6a8110);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a8111:{NFSU2_TR(0x6a8111);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B6a8113:{NFSU2_TR(0x6a8113);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6a8116:{NFSU2_TR(0x6a8116);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a811bull));
TAIL_STATIC(0x699fe6u,699);
}
B6a811b:L6a811b:{c.instructions+=2;NFSU2_TR(0x6a811b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a811d:{NFSU2_TR(0x6a811d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a8147;}}
}
B6a811f:L6a811f:{c.instructions+=13;NFSU2_TR(0x6a811f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a8122:{NFSU2_TR(0x6a8122);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6a8124:{NFSU2_TR(0x6a8124);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a8127:{NFSU2_TR(0x6a8127);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a812a:{NFSU2_TR(0x6a812a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a812d:{NFSU2_TR(0x6a812d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a8130:{NFSU2_TR(0x6a8130);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6a8132:{NFSU2_TR(0x6a8132);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a8135:{NFSU2_TR(0x6a8135);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6a8137:{NFSU2_TR(0x6a8137);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a813a:{NFSU2_TR(0x6a813a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a813d:{NFSU2_TR(0x6a813d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a8140:{NFSU2_TR(0x6a8140);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6a8147:L6a8147:{c.instructions+=4;NFSU2_TR(0x6a8147);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a814a:{NFSU2_TR(0x6a814a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a814d:{NFSU2_TR(0x6a814d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6a8150:{NFSU2_TR(0x6a8150);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a80f8u);}goto L6a80f8;}}
}
B6a8152:L6a8152:{c.instructions+=2;NFSU2_TR(0x6a8152);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a8156:{NFSU2_TR(0x6a8156);
if(r1(R+518)){{goto L6a8166;}}
}
B6a8158:L6a8158:{c.instructions+=2;NFSU2_TR(0x6a8158);
__builtin_memmove((R+4),(R+24),4);
}
B6a815a:{NFSU2_TR(0x6a815a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a815full));
TAIL_STATIC(0x69e7c4u,69e);
}
B6a815f:L6a815f:{c.instructions+=1;NFSU2_TR(0x6a815f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6a8166:L6a8166:{c.instructions+=1;NFSU2_TR(0x6a8166);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6a8169:L6a8169:{c.instructions+=6;NFSU2_TR(0x6a8169);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6a816b:{NFSU2_TR(0x6a816b);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6a816d:{NFSU2_TR(0x6a816d);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a8170:{NFSU2_TR(0x6a8170);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a8173:{NFSU2_TR(0x6a8173);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a8176:{NFSU2_TR(0x6a8176);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a81ab;}}
}
B6a8178:L6a8178:{c.instructions+=6;NFSU2_TR(0x6a8178);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a817b:{NFSU2_TR(0x6a817b);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a817e:{NFSU2_TR(0x6a817e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a8181:{NFSU2_TR(0x6a8181);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a8184:{NFSU2_TR(0x6a8184);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a8187:{NFSU2_TR(0x6a8187);
if(r1(R+518)){{goto L6a81a2;}}
}
B6a8189:L6a8189:{c.instructions+=4;NFSU2_TR(0x6a8189);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a818c:{NFSU2_TR(0x6a818c);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a818f:{NFSU2_TR(0x6a818f);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x40ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6a8193:{NFSU2_TR(0x6a8193);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a819e;}}
}
B6a8195:L6a8195:{c.instructions+=2;NFSU2_TR(0x6a8195);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a819c:{NFSU2_TR(0x6a819c);
if(r1(R+518)){{goto L6a81a2;}}
}
B6a819e:L6a819e:{c.instructions+=2;NFSU2_TR(0x6a819e);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+0),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6a81a1:{NFSU2_TR(0x6a81a1);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6a81a2:L6a81a2:{c.instructions+=3;NFSU2_TR(0x6a81a2);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6a81a3:{NFSU2_TR(0x6a81a3);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6a81a6:{NFSU2_TR(0x6a81a6);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a8178u);}goto L6a8178;}}
}
B6a81a8:L6a81a8:{c.instructions+=1;NFSU2_TR(0x6a81a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a81ab:L6a81ab:{c.instructions+=5;NFSU2_TR(0x6a81ab);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a81ac:{NFSU2_TR(0x6a81ac);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a81ad:{NFSU2_TR(0x6a81ad);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a81ae:{NFSU2_TR(0x6a81ae);
u8 U[4];
w4(U+0,u32(0x69a035ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a81b3:{NFSU2_TR(0x6a81b3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a81b8ull));
TAIL_STATIC(0x69a41du,69a);
}
B6a81b8:L6a81b8:{c.instructions+=2;NFSU2_TR(0x6a81b8);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a81ba:{NFSU2_TR(0x6a81ba);
if(r1(R+518)){{goto L6a81c1;}}
}
B6a81bc:L6a81bc:{c.instructions+=2;NFSU2_TR(0x6a81bc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6a81be:{NFSU2_TR(0x6a81be);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a81c1:L6a81c1:{c.instructions+=5;NFSU2_TR(0x6a81c1);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6a81c3:{NFSU2_TR(0x6a81c3);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6a81c4:{NFSU2_TR(0x6a81c4);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+28))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a81c6:{NFSU2_TR(0x6a81c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a81c9:{NFSU2_TR(0x6a81c9);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a8227;}}
}
B6a81cb:L6a81cb:{c.instructions+=6;NFSU2_TR(0x6a81cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a81ce:{NFSU2_TR(0x6a81ce);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6a81d1:{NFSU2_TR(0x6a81d1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a81d2:{NFSU2_TR(0x6a81d2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a81d3:{NFSU2_TR(0x6a81d3);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6a81d6:{NFSU2_TR(0x6a81d6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a81dbull));
TAIL_STATIC(0x69a035u,69a);
}
B6a81db:L6a81db:{c.instructions+=2;NFSU2_TR(0x6a81db);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a81dd:{NFSU2_TR(0x6a81dd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a8205;}}
}
B6a81df:L6a81df:{c.instructions+=4;NFSU2_TR(0x6a81df);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a81e0:{NFSU2_TR(0x6a81e0);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6a81e3:{NFSU2_TR(0x6a81e3);
__builtin_memmove((R+4),(R+24),4);
}
B6a81e5:{NFSU2_TR(0x6a81e5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a81eaull));
TAIL_STATIC(0x6a1164u,6a1);
}
B6a81ea:L6a81ea:{c.instructions+=8;NFSU2_TR(0x6a81ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a81ed:{NFSU2_TR(0x6a81ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a81f0:{NFSU2_TR(0x6a81f0);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a81f3:{NFSU2_TR(0x6a81f3);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a81f6:{NFSU2_TR(0x6a81f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a81f9:{NFSU2_TR(0x6a81f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a81fc:{NFSU2_TR(0x6a81fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6a8203:{NFSU2_TR(0x6a8203);
{goto L6a8208;}
}
B6a8205:L6a8205:{c.instructions+=1;NFSU2_TR(0x6a8205);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a8208:L6a8208:{c.instructions+=4;NFSU2_TR(0x6a8208);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a820b:{NFSU2_TR(0x6a820b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a820e:{NFSU2_TR(0x6a820e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6a8211:{NFSU2_TR(0x6a8211);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a81cbu);}goto L6a81cb;}}
}
B6a8213:L6a8213:{c.instructions+=2;NFSU2_TR(0x6a8213);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a8217:{NFSU2_TR(0x6a8217);
if(r1(R+518)){{goto L6a8227;}}
}
B6a8219:L6a8219:{c.instructions+=2;NFSU2_TR(0x6a8219);
__builtin_memmove((R+4),(R+24),4);
}
B6a821b:{NFSU2_TR(0x6a821b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a8220ull));
TAIL_STATIC(0x69e7c4u,69e);
}
B6a8220:L6a8220:{c.instructions+=1;NFSU2_TR(0x6a8220);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6a8227:L6a8227:{c.instructions+=2;NFSU2_TR(0x6a8227);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a8228:{NFSU2_TR(0x6a8228);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a822dull));
TAIL_STATIC(0x575630u,575);
}
B6a822d:L6a822d:{c.instructions+=4;NFSU2_TR(0x6a822d);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6a822f:{NFSU2_TR(0x6a822f);
u8 U[22];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
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
B6a8232:{NFSU2_TR(0x6a8232);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6a8233:{NFSU2_TR(0x6a8233);
__builtin_memmove((R+0),(R+518),1);
}
B6a8236:L6a8236:{c.instructions+=5;NFSU2_TR(0x6a8236);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6a8237:{NFSU2_TR(0x6a8237);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6a8238:{NFSU2_TR(0x6a8238);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6a8239:{NFSU2_TR(0x6a8239);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6a823a:{NFSU2_TR(0x6a823a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6a823b:L6a823b:{c.instructions+=11;NFSU2_TR(0x6a823b);
__builtin_memmove((R+28),(R+28),4);
}
B6a823d:{NFSU2_TR(0x6a823d);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a823e:{NFSU2_TR(0x6a823e);
__builtin_memmove((R+20),(R+16),4);
}
B6a8240:{NFSU2_TR(0x6a8240);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x40ull))));
}
B6a8243:{NFSU2_TR(0x6a8243);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a8244:{NFSU2_TR(0x6a8244);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a8245:{NFSU2_TR(0x6a8245);
__builtin_memmove((R+24),(R+4),4);
}
B6a8247:{NFSU2_TR(0x6a8247);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6a8249:{NFSU2_TR(0x6a8249);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a824c:{NFSU2_TR(0x6a824c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a824f:{NFSU2_TR(0x6a824f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a8254ull));
TAIL_STATIC(0x69e7abu,69e);
}
B6a8254:L6a8254:{c.instructions+=3;NFSU2_TR(0x6a8254);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a8257:{NFSU2_TR(0x6a8257);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a825a:{NFSU2_TR(0x6a825a);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a8701;}}
}
B6a8260:L6a8260:{c.instructions+=2;NFSU2_TR(0x6a8260);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a8261:{NFSU2_TR(0x6a8261);
w4(R+28,u32(u32(r4(R+28))|u32(u32(0xffffffffull))));
}
B6a8264:L6a8264:{c.instructions+=9;NFSU2_TR(0x6a8264);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a8267:{NFSU2_TR(0x6a8267);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a826a:{NFSU2_TR(0x6a826a);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B6a826d:{NFSU2_TR(0x6a826d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6a826f:{NFSU2_TR(0x6a826f);
__builtin_memmove((R+4),(R+0),4);
}
B6a8271:{NFSU2_TR(0x6a8271);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xf0000000ull))));
}
B6a8277:{NFSU2_TR(0x6a8277);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x10000000ull))));
}
B6a827d:{NFSU2_TR(0x6a827d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a8280:{NFSU2_TR(0x6a8280);
if(r1(R+512)){{goto L6a86e8;}}
}
B6a8286:L6a8286:{c.instructions+=2;NFSU2_TR(0x6a8286);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x40000000ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x40000000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a828c:{NFSU2_TR(0x6a828c);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6a86e8;}}
}
B6a8292:L6a8292:{c.instructions+=8;NFSU2_TR(0x6a8292);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a8295:{NFSU2_TR(0x6a8295);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a8298:{NFSU2_TR(0x6a8298);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+4,u16(u32(r2(U+4))&u32(u16(0xfull))));
s2(u32(r4(U+0)),r2(U+4));
}
B6a829d:{NFSU2_TR(0x6a829d);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6a829f:{NFSU2_TR(0x6a829f);
u8 U[64];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+8,u64(r4(U+4)));
w8(U+16,u64(r4(R+8)));
w8(U+24,shl<u64>(r8(U+16),u64(u32(0x20ull))));
w8(U+32,u64(r4(R+0)));
w8(U+40,u64(u64(r8(U+24))|u64(r8(U+32))));
{u64 d_=u64(r8(U+8));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x6a829f);w8(U+48,u64(u64(r8(U+40))/d_));}
w4(R+0,u32(r8(U+48)));
{u64 d_=u64(r8(U+8));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x6a829f);w8(U+56,u64(u64(r8(U+40))%d_));}
w4(R+8,u32(r8(U+56)));
}
B6a82a2:{NFSU2_TR(0x6a82a2);
__builtin_memmove((R+4),(R+12),4);
}
B6a82a4:{NFSU2_TR(0x6a82a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a82a7:{NFSU2_TR(0x6a82a7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a82acull));
TAIL_STATIC(0x698f6cu,698);
}
B6a82ac:L6a82ac:{c.instructions+=8;NFSU2_TR(0x6a82ac);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6a82ae:{NFSU2_TR(0x6a82ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a82b1:{NFSU2_TR(0x6a82b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a82b4:{NFSU2_TR(0x6a82b4);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6a82b5:{NFSU2_TR(0x6a82b5);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a82b7:{NFSU2_TR(0x6a82b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a82ba:{NFSU2_TR(0x6a82ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a82bd:{NFSU2_TR(0x6a82bd);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a86e8;}}
}
B6a82c3:L6a82c3:{c.instructions+=5;NFSU2_TR(0x6a82c3);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6a82c6:{NFSU2_TR(0x6a82c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a82c9:{NFSU2_TR(0x6a82c9);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B6a82cc:{NFSU2_TR(0x6a82cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6a82d3:{NFSU2_TR(0x6a82d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a82d6:L6a82d6:{c.instructions+=11;NFSU2_TR(0x6a82d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a82d9:{NFSU2_TR(0x6a82d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a82dc:{NFSU2_TR(0x6a82dc);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6a82df:{NFSU2_TR(0x6a82df);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a82e2:{NFSU2_TR(0x6a82e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a82e5:{NFSU2_TR(0x6a82e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a82e8:{NFSU2_TR(0x6a82e8);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6a82eb:{NFSU2_TR(0x6a82eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a82ee:{NFSU2_TR(0x6a82ee);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a82f1:{NFSU2_TR(0x6a82f1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+6,u16(u32(r2(U+4))&u32(u16(0x1020ull))));
w1(R+518,u8((r2(U+6))==(u16(0x0ull))));
}
B6a82f7:{NFSU2_TR(0x6a82f7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a8609;}}
}
B6a82fd:L6a82fd:{c.instructions+=3;NFSU2_TR(0x6a82fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a8301:{NFSU2_TR(0x6a8301);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a8305:{NFSU2_TR(0x6a8305);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a8609;}}
}
B6a830b:L6a830b:{c.instructions+=2;NFSU2_TR(0x6a830b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a830e:{NFSU2_TR(0x6a830e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a8311:L6a8311:{c.instructions+=5;NFSU2_TR(0x6a8311);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a8314:{NFSU2_TR(0x6a8314);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a8317:{NFSU2_TR(0x6a8317);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a831a:{NFSU2_TR(0x6a831a);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a831c:{NFSU2_TR(0x6a831c);
if(r1(R+518)){{goto L6a85cf;}}
}
B6a8322:L6a8322:{c.instructions+=6;NFSU2_TR(0x6a8322);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a8325:{NFSU2_TR(0x6a8325);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a8328:{NFSU2_TR(0x6a8328);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a832b:{NFSU2_TR(0x6a832b);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a832e:{NFSU2_TR(0x6a832e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+6,u16(u32(r2(U+4))&u32(u16(0x1020ull))));
w1(R+518,u8((r2(U+6))==(u16(0x0ull))));
}
B6a8334:{NFSU2_TR(0x6a8334);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a85cf;}}
}
B6a833a:L6a833a:{c.instructions+=2;NFSU2_TR(0x6a833a);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a833e:{NFSU2_TR(0x6a833e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a8373;}}
}
B6a8340:L6a8340:{c.instructions+=5;NFSU2_TR(0x6a8340);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a8343:{NFSU2_TR(0x6a8343);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a8346:{NFSU2_TR(0x6a8346);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6a8349:{NFSU2_TR(0x6a8349);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a834b:{NFSU2_TR(0x6a834b);
if(r1(R+518)){{goto L6a8355;}}
}
B6a834d:L6a834d:{c.instructions+=3;NFSU2_TR(0x6a834d);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6a8350:{NFSU2_TR(0x6a8350);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a8353:{NFSU2_TR(0x6a8353);
{goto L6a8357;}
}
B6a8355:L6a8355:{c.instructions+=1;NFSU2_TR(0x6a8355);
__builtin_memmove((R+8),(R+28),4);
}
B6a8357:L6a8357:{c.instructions+=4;NFSU2_TR(0x6a8357);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6a835a:{NFSU2_TR(0x6a835a);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a835d:{NFSU2_TR(0x6a835d);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a835f:{NFSU2_TR(0x6a835f);
if(r1(R+518)){{goto L6a8369;}}
}
B6a8361:L6a8361:{c.instructions+=3;NFSU2_TR(0x6a8361);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a8364:{NFSU2_TR(0x6a8364);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a8367:{NFSU2_TR(0x6a8367);
{goto L6a836b;}
}
B6a8369:L6a8369:{c.instructions+=1;NFSU2_TR(0x6a8369);
__builtin_memmove((R+0),(R+28),4);
}
B6a836b:L6a836b:{c.instructions+=2;NFSU2_TR(0x6a836b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a836d:{NFSU2_TR(0x6a836d);
if(r1(R+518)){{goto L6a85e7;}}
}
B6a8373:L6a8373:{c.instructions+=2;NFSU2_TR(0x6a8373);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a8377:{NFSU2_TR(0x6a8377);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a8446;}}
}
B6a837d:L6a837d:{c.instructions+=5;NFSU2_TR(0x6a837d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a8380:{NFSU2_TR(0x6a8380);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a8383:{NFSU2_TR(0x6a8383);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6a8386:{NFSU2_TR(0x6a8386);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a8388:{NFSU2_TR(0x6a8388);
if(r1(R+518)){{goto L6a8392;}}
}
B6a838a:L6a838a:{c.instructions+=3;NFSU2_TR(0x6a838a);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6a838d:{NFSU2_TR(0x6a838d);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6a8390:{NFSU2_TR(0x6a8390);
{goto L6a8394;}
}
B6a8392:L6a8392:{c.instructions+=1;NFSU2_TR(0x6a8392);
__builtin_memmove((R+24),(R+28),4);
}
B6a8394:L6a8394:{c.instructions+=5;NFSU2_TR(0x6a8394);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a8397:{NFSU2_TR(0x6a8397);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6a839a:{NFSU2_TR(0x6a839a);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a839c:{NFSU2_TR(0x6a839c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a839f:{NFSU2_TR(0x6a839f);
if(r1(R+518)){{goto L6a83a9;}}
}
B6a83a1:L6a83a1:{c.instructions+=3;NFSU2_TR(0x6a83a1);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6a83a4:{NFSU2_TR(0x6a83a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a83a7:{NFSU2_TR(0x6a83a7);
{goto L6a83ab;}
}
B6a83a9:L6a83a9:{c.instructions+=1;NFSU2_TR(0x6a83a9);
__builtin_memmove((R+8),(R+28),4);
}
B6a83ab:L6a83ab:{c.instructions+=2;NFSU2_TR(0x6a83ab);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a83ad:{NFSU2_TR(0x6a83ad);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a83df;}}
}
B6a83af:L6a83af:{c.instructions+=4;NFSU2_TR(0x6a83af);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a83b2:{NFSU2_TR(0x6a83b2);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6a83b5:{NFSU2_TR(0x6a83b5);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a83b7:{NFSU2_TR(0x6a83b7);
if(r1(R+518)){{goto L6a83c1;}}
}
B6a83b9:L6a83b9:{c.instructions+=3;NFSU2_TR(0x6a83b9);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6a83bc:{NFSU2_TR(0x6a83bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6a83bf:{NFSU2_TR(0x6a83bf);
{goto L6a83c3;}
}
B6a83c1:L6a83c1:{c.instructions+=1;NFSU2_TR(0x6a83c1);
__builtin_memmove((R+24),(R+28),4);
}
B6a83c3:L6a83c3:{c.instructions+=4;NFSU2_TR(0x6a83c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a83c6:{NFSU2_TR(0x6a83c6);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6a83c9:{NFSU2_TR(0x6a83c9);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a83cb:{NFSU2_TR(0x6a83cb);
if(r1(R+518)){{goto L6a83d5;}}
}
B6a83cd:L6a83cd:{c.instructions+=3;NFSU2_TR(0x6a83cd);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6a83d0:{NFSU2_TR(0x6a83d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a83d3:{NFSU2_TR(0x6a83d3);
{goto L6a83d7;}
}
B6a83d5:L6a83d5:{c.instructions+=1;NFSU2_TR(0x6a83d5);
__builtin_memmove((R+8),(R+28),4);
}
B6a83d7:L6a83d7:{c.instructions+=2;NFSU2_TR(0x6a83d7);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a83d9:{NFSU2_TR(0x6a83d9);
if(r1(R+518)){{goto L6a85e7;}}
}
B6a83df:L6a83df:{c.instructions+=2;NFSU2_TR(0x6a83df);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a83e3:{NFSU2_TR(0x6a83e3);
if(r1(R+518)){{goto L6a85cf;}}
}
B6a83e9:L6a83e9:{c.instructions+=4;NFSU2_TR(0x6a83e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a83ec:{NFSU2_TR(0x6a83ec);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6a83ef:{NFSU2_TR(0x6a83ef);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a83f1:{NFSU2_TR(0x6a83f1);
if(r1(R+518)){{goto L6a83fb;}}
}
B6a83f3:L6a83f3:{c.instructions+=3;NFSU2_TR(0x6a83f3);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6a83f6:{NFSU2_TR(0x6a83f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6a83f9:{NFSU2_TR(0x6a83f9);
{goto L6a83fd;}
}
B6a83fb:L6a83fb:{c.instructions+=1;NFSU2_TR(0x6a83fb);
__builtin_memmove((R+24),(R+28),4);
}
B6a83fd:L6a83fd:{c.instructions+=4;NFSU2_TR(0x6a83fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a8400:{NFSU2_TR(0x6a8400);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6a8403:{NFSU2_TR(0x6a8403);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a8405:{NFSU2_TR(0x6a8405);
if(r1(R+518)){{goto L6a840f;}}
}
B6a8407:L6a8407:{c.instructions+=3;NFSU2_TR(0x6a8407);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6a840a:{NFSU2_TR(0x6a840a);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a840d:{NFSU2_TR(0x6a840d);
{goto L6a8411;}
}
B6a840f:L6a840f:{c.instructions+=1;NFSU2_TR(0x6a840f);
__builtin_memmove((R+8),(R+28),4);
}
B6a8411:L6a8411:{c.instructions+=2;NFSU2_TR(0x6a8411);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a8413:{NFSU2_TR(0x6a8413);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a85cf;}}
}
B6a8419:L6a8419:{c.instructions+=4;NFSU2_TR(0x6a8419);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a841c:{NFSU2_TR(0x6a841c);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a841f:{NFSU2_TR(0x6a841f);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a8421:{NFSU2_TR(0x6a8421);
if(r1(R+518)){{goto L6a842b;}}
}
B6a8423:L6a8423:{c.instructions+=3;NFSU2_TR(0x6a8423);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a8426:{NFSU2_TR(0x6a8426);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a8429:{NFSU2_TR(0x6a8429);
{goto L6a842d;}
}
B6a842b:L6a842b:{c.instructions+=1;NFSU2_TR(0x6a842b);
__builtin_memmove((R+8),(R+28),4);
}
B6a842d:L6a842d:{c.instructions+=3;NFSU2_TR(0x6a842d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a8430:{NFSU2_TR(0x6a8430);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a8432:{NFSU2_TR(0x6a8432);
if(r1(R+518)){{goto L6a843c;}}
}
B6a8434:L6a8434:{c.instructions+=3;NFSU2_TR(0x6a8434);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a8437:{NFSU2_TR(0x6a8437);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a843a:{NFSU2_TR(0x6a843a);
{goto L6a843e;}
}
B6a843c:L6a843c:{c.instructions+=1;NFSU2_TR(0x6a843c);
__builtin_memmove((R+0),(R+28),4);
}
B6a843e:L6a843e:{c.instructions+=2;NFSU2_TR(0x6a843e);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a8440:{NFSU2_TR(0x6a8440);
if(r1(R+518)){{goto L6a85e7;}}
}
B6a8446:L6a8446:{c.instructions+=2;NFSU2_TR(0x6a8446);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a844a:{NFSU2_TR(0x6a844a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a84f1;}}
}
B6a8450:L6a8450:{c.instructions+=5;NFSU2_TR(0x6a8450);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a8453:{NFSU2_TR(0x6a8453);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a8456:{NFSU2_TR(0x6a8456);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6a8459:{NFSU2_TR(0x6a8459);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a845b:{NFSU2_TR(0x6a845b);
if(r1(R+518)){{goto L6a8465;}}
}
B6a845d:L6a845d:{c.instructions+=3;NFSU2_TR(0x6a845d);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6a8460:{NFSU2_TR(0x6a8460);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6a8463:{NFSU2_TR(0x6a8463);
{goto L6a8467;}
}
B6a8465:L6a8465:{c.instructions+=1;NFSU2_TR(0x6a8465);
__builtin_memmove((R+24),(R+28),4);
}
B6a8467:L6a8467:{c.instructions+=4;NFSU2_TR(0x6a8467);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a846a:{NFSU2_TR(0x6a846a);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6a846d:{NFSU2_TR(0x6a846d);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a846f:{NFSU2_TR(0x6a846f);
if(r1(R+518)){{goto L6a8479;}}
}
B6a8471:L6a8471:{c.instructions+=3;NFSU2_TR(0x6a8471);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6a8474:{NFSU2_TR(0x6a8474);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a8477:{NFSU2_TR(0x6a8477);
{goto L6a847b;}
}
B6a8479:L6a8479:{c.instructions+=1;NFSU2_TR(0x6a8479);
__builtin_memmove((R+8),(R+28),4);
}
B6a847b:L6a847b:{c.instructions+=2;NFSU2_TR(0x6a847b);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a847d:{NFSU2_TR(0x6a847d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a85cf;}}
}
B6a8483:L6a8483:{c.instructions+=4;NFSU2_TR(0x6a8483);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a8486:{NFSU2_TR(0x6a8486);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6a8489:{NFSU2_TR(0x6a8489);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a848b:{NFSU2_TR(0x6a848b);
if(r1(R+518)){{goto L6a8495;}}
}
B6a848d:L6a848d:{c.instructions+=3;NFSU2_TR(0x6a848d);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6a8490:{NFSU2_TR(0x6a8490);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6a8493:{NFSU2_TR(0x6a8493);
{goto L6a8497;}
}
B6a8495:L6a8495:{c.instructions+=1;NFSU2_TR(0x6a8495);
__builtin_memmove((R+24),(R+28),4);
}
B6a8497:L6a8497:{c.instructions+=4;NFSU2_TR(0x6a8497);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a849a:{NFSU2_TR(0x6a849a);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6a849d:{NFSU2_TR(0x6a849d);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a849f:{NFSU2_TR(0x6a849f);
if(r1(R+518)){{goto L6a84a9;}}
}
B6a84a1:L6a84a1:{c.instructions+=3;NFSU2_TR(0x6a84a1);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6a84a4:{NFSU2_TR(0x6a84a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a84a7:{NFSU2_TR(0x6a84a7);
{goto L6a84ab;}
}
B6a84a9:L6a84a9:{c.instructions+=1;NFSU2_TR(0x6a84a9);
__builtin_memmove((R+8),(R+28),4);
}
B6a84ab:L6a84ab:{c.instructions+=2;NFSU2_TR(0x6a84ab);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a84ad:{NFSU2_TR(0x6a84ad);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a85cf;}}
}
B6a84b3:L6a84b3:{c.instructions+=7;NFSU2_TR(0x6a84b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6a84b6:{NFSU2_TR(0x6a84b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a84b9:{NFSU2_TR(0x6a84b9);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+24))));
}
B6a84bb:{NFSU2_TR(0x6a84bb);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+24))));
}
B6a84bd:{NFSU2_TR(0x6a84bd);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6a84c0:{NFSU2_TR(0x6a84c0);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a84c2:{NFSU2_TR(0x6a84c2);
if(r1(R+518)){{goto L6a84cf;}}
}
B6a84c4:L6a84c4:{c.instructions+=4;NFSU2_TR(0x6a84c4);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6a84c7:{NFSU2_TR(0x6a84c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a84ca:{NFSU2_TR(0x6a84ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a84cd:{NFSU2_TR(0x6a84cd);
{goto L6a84d2;}
}
B6a84cf:L6a84cf:{c.instructions+=1;NFSU2_TR(0x6a84cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a84d2:L6a84d2:{c.instructions+=5;NFSU2_TR(0x6a84d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a84d5:{NFSU2_TR(0x6a84d5);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+8))));
}
B6a84d7:{NFSU2_TR(0x6a84d7);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a84da:{NFSU2_TR(0x6a84da);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a84dc:{NFSU2_TR(0x6a84dc);
if(r1(R+518)){{goto L6a84e6;}}
}
B6a84de:L6a84de:{c.instructions+=3;NFSU2_TR(0x6a84de);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a84e1:{NFSU2_TR(0x6a84e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a84e4:{NFSU2_TR(0x6a84e4);
{goto L6a84e8;}
}
B6a84e6:L6a84e6:{c.instructions+=1;NFSU2_TR(0x6a84e6);
__builtin_memmove((R+0),(R+28),4);
}
B6a84e8:L6a84e8:{c.instructions+=2;NFSU2_TR(0x6a84e8);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a84eb:{NFSU2_TR(0x6a84eb);
if(r1(R+518)){{goto L6a85e7;}}
}
B6a84f1:L6a84f1:{c.instructions+=2;NFSU2_TR(0x6a84f1);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a84f5:{NFSU2_TR(0x6a84f5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a85cf;}}
}
B6a84fb:L6a84fb:{c.instructions+=5;NFSU2_TR(0x6a84fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a84fe:{NFSU2_TR(0x6a84fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a8501:{NFSU2_TR(0x6a8501);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6a8504:{NFSU2_TR(0x6a8504);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a8506:{NFSU2_TR(0x6a8506);
if(r1(R+518)){{goto L6a8510;}}
}
B6a8508:L6a8508:{c.instructions+=3;NFSU2_TR(0x6a8508);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6a850b:{NFSU2_TR(0x6a850b);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6a850e:{NFSU2_TR(0x6a850e);
{goto L6a8512;}
}
B6a8510:L6a8510:{c.instructions+=1;NFSU2_TR(0x6a8510);
__builtin_memmove((R+24),(R+28),4);
}
B6a8512:L6a8512:{c.instructions+=4;NFSU2_TR(0x6a8512);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a8515:{NFSU2_TR(0x6a8515);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6a8518:{NFSU2_TR(0x6a8518);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a851a:{NFSU2_TR(0x6a851a);
if(r1(R+518)){{goto L6a8524;}}
}
B6a851c:L6a851c:{c.instructions+=3;NFSU2_TR(0x6a851c);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6a851f:{NFSU2_TR(0x6a851f);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a8522:{NFSU2_TR(0x6a8522);
{goto L6a8526;}
}
B6a8524:L6a8524:{c.instructions+=1;NFSU2_TR(0x6a8524);
__builtin_memmove((R+8),(R+28),4);
}
B6a8526:L6a8526:{c.instructions+=2;NFSU2_TR(0x6a8526);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a8528:{NFSU2_TR(0x6a8528);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a85cf;}}
}
B6a852e:L6a852e:{c.instructions+=4;NFSU2_TR(0x6a852e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a8531:{NFSU2_TR(0x6a8531);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6a8534:{NFSU2_TR(0x6a8534);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a8536:{NFSU2_TR(0x6a8536);
if(r1(R+518)){{goto L6a8540;}}
}
B6a8538:L6a8538:{c.instructions+=3;NFSU2_TR(0x6a8538);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6a853b:{NFSU2_TR(0x6a853b);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6a853e:{NFSU2_TR(0x6a853e);
{goto L6a8542;}
}
B6a8540:L6a8540:{c.instructions+=1;NFSU2_TR(0x6a8540);
__builtin_memmove((R+24),(R+28),4);
}
B6a8542:L6a8542:{c.instructions+=4;NFSU2_TR(0x6a8542);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a8545:{NFSU2_TR(0x6a8545);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6a8548:{NFSU2_TR(0x6a8548);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a854a:{NFSU2_TR(0x6a854a);
if(r1(R+518)){{goto L6a8554;}}
}
B6a854c:L6a854c:{c.instructions+=3;NFSU2_TR(0x6a854c);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6a854f:{NFSU2_TR(0x6a854f);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a8552:{NFSU2_TR(0x6a8552);
{goto L6a8556;}
}
B6a8554:L6a8554:{c.instructions+=1;NFSU2_TR(0x6a8554);
__builtin_memmove((R+8),(R+28),4);
}
B6a8556:L6a8556:{c.instructions+=2;NFSU2_TR(0x6a8556);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a8558:{NFSU2_TR(0x6a8558);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a85cf;}}
}
B6a855a:L6a855a:{c.instructions+=7;NFSU2_TR(0x6a855a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6a855d:{NFSU2_TR(0x6a855d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a8560:{NFSU2_TR(0x6a8560);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+24))));
}
B6a8562:{NFSU2_TR(0x6a8562);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+24))));
}
B6a8564:{NFSU2_TR(0x6a8564);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6a8567:{NFSU2_TR(0x6a8567);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a8569:{NFSU2_TR(0x6a8569);
if(r1(R+518)){{goto L6a8576;}}
}
B6a856b:L6a856b:{c.instructions+=4;NFSU2_TR(0x6a856b);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6a856e:{NFSU2_TR(0x6a856e);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a8571:{NFSU2_TR(0x6a8571);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a8574:{NFSU2_TR(0x6a8574);
{goto L6a8579;}
}
B6a8576:L6a8576:{c.instructions+=1;NFSU2_TR(0x6a8576);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a8579:L6a8579:{c.instructions+=5;NFSU2_TR(0x6a8579);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a857c:{NFSU2_TR(0x6a857c);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+8))));
}
B6a857e:{NFSU2_TR(0x6a857e);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6a8581:{NFSU2_TR(0x6a8581);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a8583:{NFSU2_TR(0x6a8583);
if(r1(R+518)){{goto L6a858d;}}
}
B6a8585:L6a8585:{c.instructions+=3;NFSU2_TR(0x6a8585);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6a8588:{NFSU2_TR(0x6a8588);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a858b:{NFSU2_TR(0x6a858b);
{goto L6a858f;}
}
B6a858d:L6a858d:{c.instructions+=1;NFSU2_TR(0x6a858d);
__builtin_memmove((R+8),(R+28),4);
}
B6a858f:L6a858f:{c.instructions+=2;NFSU2_TR(0x6a858f);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a8592:{NFSU2_TR(0x6a8592);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a85cf;}}
}
B6a8594:L6a8594:{c.instructions+=7;NFSU2_TR(0x6a8594);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a8597:{NFSU2_TR(0x6a8597);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6a859a:{NFSU2_TR(0x6a859a);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B6a859d:{NFSU2_TR(0x6a859d);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+8))));
}
B6a859f:{NFSU2_TR(0x6a859f);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B6a85a2:{NFSU2_TR(0x6a85a2);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a85a4:{NFSU2_TR(0x6a85a4);
if(r1(R+518)){{goto L6a85b1;}}
}
B6a85a6:L6a85a6:{c.instructions+=4;NFSU2_TR(0x6a85a6);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B6a85a9:{NFSU2_TR(0x6a85a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6a85ac:{NFSU2_TR(0x6a85ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a85af:{NFSU2_TR(0x6a85af);
{goto L6a85b4;}
}
B6a85b1:L6a85b1:{c.instructions+=1;NFSU2_TR(0x6a85b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a85b4:L6a85b4:{c.instructions+=5;NFSU2_TR(0x6a85b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6a85b7:{NFSU2_TR(0x6a85b7);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+24))));
}
B6a85b9:{NFSU2_TR(0x6a85b9);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a85bc:{NFSU2_TR(0x6a85bc);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a85be:{NFSU2_TR(0x6a85be);
if(r1(R+518)){{goto L6a85c8;}}
}
B6a85c0:L6a85c0:{c.instructions+=3;NFSU2_TR(0x6a85c0);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a85c3:{NFSU2_TR(0x6a85c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a85c6:{NFSU2_TR(0x6a85c6);
{goto L6a85ca;}
}
B6a85c8:L6a85c8:{c.instructions+=1;NFSU2_TR(0x6a85c8);
__builtin_memmove((R+0),(R+28),4);
}
B6a85ca:L6a85ca:{c.instructions+=2;NFSU2_TR(0x6a85ca);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a85cd:{NFSU2_TR(0x6a85cd);
if(r1(R+518)){{goto L6a85e7;}}
}
B6a85cf:L6a85cf:{c.instructions+=6;NFSU2_TR(0x6a85cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a85d2:{NFSU2_TR(0x6a85d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a85d5:{NFSU2_TR(0x6a85d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a85d9:{NFSU2_TR(0x6a85d9);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6a85dc:{NFSU2_TR(0x6a85dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6a85df:{NFSU2_TR(0x6a85df);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a8311u);}goto L6a8311;}}
}
B6a85e5:L6a85e5:{c.instructions+=1;NFSU2_TR(0x6a85e5);
{goto L6a8609;}
}
B6a85e7:L6a85e7:{c.instructions+=7;NFSU2_TR(0x6a85e7);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6a85ea:{NFSU2_TR(0x6a85ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a85ed:{NFSU2_TR(0x6a85ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a85f0:{NFSU2_TR(0x6a85f0);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+12));
}
B6a85f3:{NFSU2_TR(0x6a85f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6a85f6:{NFSU2_TR(0x6a85f6);
__builtin_memmove((R+4),(R+24),4);
}
B6a85f8:{NFSU2_TR(0x6a85f8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a85fdull));
TAIL_STATIC(0x6a1164u,6a1);
}
B6a85fd:L6a85fd:{c.instructions+=4;NFSU2_TR(0x6a85fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a8600:{NFSU2_TR(0x6a8600);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a8603:{NFSU2_TR(0x6a8603);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a8606:{NFSU2_TR(0x6a8606);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+28),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6a8609:L6a8609:{c.instructions+=6;NFSU2_TR(0x6a8609);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a860c:{NFSU2_TR(0x6a860c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a860f:{NFSU2_TR(0x6a860f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a8613:{NFSU2_TR(0x6a8613);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a8617:{NFSU2_TR(0x6a8617);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
}
B6a861a:{NFSU2_TR(0x6a861a);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a82d6u);}goto L6a82d6;}}
}
B6a8620:L6a8620:{c.instructions+=2;NFSU2_TR(0x6a8620);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
}
B6a8623:{NFSU2_TR(0x6a8623);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6a86e8;}}
}
B6a8629:L6a8629:{c.instructions+=3;NFSU2_TR(0x6a8629);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a862d:{NFSU2_TR(0x6a862d);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a862f:{NFSU2_TR(0x6a862f);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a8675;}}
}
B6a8631:L6a8631:{c.instructions+=1;NFSU2_TR(0x6a8631);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6a8633:L6a8633:{c.instructions+=6;NFSU2_TR(0x6a8633);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a8636:{NFSU2_TR(0x6a8636);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a8639:{NFSU2_TR(0x6a8639);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B6a863c:{NFSU2_TR(0x6a863c);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a863f:{NFSU2_TR(0x6a863f);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a8642:{NFSU2_TR(0x6a8642);
if(r1(R+518)){{goto L6a866a;}}
}
B6a8644:L6a8644:{c.instructions+=3;NFSU2_TR(0x6a8644);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a8648:{NFSU2_TR(0x6a8648);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6a864b:{NFSU2_TR(0x6a864b);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a8667;}}
}
B6a864d:L6a864d:{c.instructions+=2;NFSU2_TR(0x6a864d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6a8650:{NFSU2_TR(0x6a8650);
__builtin_memmove((R+4),(R+28),4);
}
B6a8652:L6a8652:{c.instructions+=8;NFSU2_TR(0x6a8652);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a8655:{NFSU2_TR(0x6a8655);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B6a8658:{NFSU2_TR(0x6a8658);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))+u32(r4(U+4))));
}
B6a865b:{NFSU2_TR(0x6a865b);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+12),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6a865e:{NFSU2_TR(0x6a865e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B6a8661:{NFSU2_TR(0x6a8661);
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B6a8662:{NFSU2_TR(0x6a8662);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6a8665:{NFSU2_TR(0x6a8665);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a8652u);}goto L6a8652;}}
}
B6a8667:L6a8667:{c.instructions+=1;NFSU2_TR(0x6a8667);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B6a866a:L6a866a:{c.instructions+=4;NFSU2_TR(0x6a866a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a866d:{NFSU2_TR(0x6a866d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a8670:{NFSU2_TR(0x6a8670);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6a8673:{NFSU2_TR(0x6a8673);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a8633u);}goto L6a8633;}}
}
B6a8675:L6a8675:{c.instructions+=2;NFSU2_TR(0x6a8675);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x1ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a8679:{NFSU2_TR(0x6a8679);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a86c3;}}
}
B6a867b:L6a867b:{c.instructions+=7;NFSU2_TR(0x6a867b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6a867e:{NFSU2_TR(0x6a867e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a8681:{NFSU2_TR(0x6a8681);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6a8684:{NFSU2_TR(0x6a8684);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B6a8687:{NFSU2_TR(0x6a8687);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a868a:{NFSU2_TR(0x6a868a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a868d:{NFSU2_TR(0x6a868d);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
}
B6a868e:L6a868e:{c.instructions+=2;NFSU2_TR(0x6a868e);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a8692:{NFSU2_TR(0x6a8692);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a86b4;}}
}
B6a8694:L6a8694:{c.instructions+=3;NFSU2_TR(0x6a8694);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a8697:{NFSU2_TR(0x6a8697);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a869a:{NFSU2_TR(0x6a869a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a869d:L6a869d:{c.instructions+=8;NFSU2_TR(0x6a869d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a86a0:{NFSU2_TR(0x6a86a0);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B6a86a3:{NFSU2_TR(0x6a86a3);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+12),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6a86a6:{NFSU2_TR(0x6a86a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6a86a9:{NFSU2_TR(0x6a86a9);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B6a86ac:{NFSU2_TR(0x6a86ac);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B6a86af:{NFSU2_TR(0x6a86af);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a86b2:{NFSU2_TR(0x6a86b2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a869du);}goto L6a869d;}}
}
B6a86b4:L6a86b4:{c.instructions+=6;NFSU2_TR(0x6a86b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a86b7:{NFSU2_TR(0x6a86b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B6a86ba:{NFSU2_TR(0x6a86ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+24))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a86bd:{NFSU2_TR(0x6a86bd);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
}
B6a86be:{NFSU2_TR(0x6a86be);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a86c1:{NFSU2_TR(0x6a86c1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a868eu);}goto L6a868e;}}
}
B6a86c3:L6a86c3:{c.instructions+=11;NFSU2_TR(0x6a86c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a86c6:{NFSU2_TR(0x6a86c6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6a86c8:{NFSU2_TR(0x6a86c8);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+0))));
}
B6a86ca:{NFSU2_TR(0x6a86ca);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfffffull))));
}
B6a86d0:{NFSU2_TR(0x6a86d0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
w4(U+0,u32(u32(r4(U+0))^u32(r4(R+4))));
s4(u32(r4(R+12)),r4(U+0));
}
B6a86d2:{NFSU2_TR(0x6a86d2);
__builtin_memmove((R+4),(R+0),4);
}
B6a86d4:{NFSU2_TR(0x6a86d4);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
w8(U+8,u64(s64(s32(r4(R+4)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+4,u32(r8(U+24)));
}
B6a86d8:{NFSU2_TR(0x6a86d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a86db:{NFSU2_TR(0x6a86db);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a86de:{NFSU2_TR(0x6a86de);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6a86e5:{NFSU2_TR(0x6a86e5);
w4(R+28,u32(u32(r4(R+28))|u32(u32(0xffffffffull))));
}
B6a86e8:L6a86e8:{c.instructions+=5;NFSU2_TR(0x6a86e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a86eb:{NFSU2_TR(0x6a86eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6a86ee:{NFSU2_TR(0x6a86ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a86f1:{NFSU2_TR(0x6a86f1);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6a86f4:{NFSU2_TR(0x6a86f4);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a8264u);}goto L6a8264;}}
}
B6a86fa:L6a86fa:{c.instructions+=3;NFSU2_TR(0x6a86fa);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a86fe:{NFSU2_TR(0x6a86fe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6a86ff:{NFSU2_TR(0x6a86ff);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a8706;}}
}
B6a8701:L6a8701:{c.instructions+=3;NFSU2_TR(0x6a8701);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6a8703:{NFSU2_TR(0x6a8703);
u8 U[6];
w1(R+523,scarry<u32>(r4(R+0),u32(0x1ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6a8704:{NFSU2_TR(0x6a8704);
{goto L6a870f;}
}
B6a8706:L6a8706:{c.instructions+=2;NFSU2_TR(0x6a8706);
__builtin_memmove((R+4),(R+24),4);
}
B6a8708:{NFSU2_TR(0x6a8708);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a870dull));
TAIL_STATIC(0x69e7c4u,69e);
}
B6a870d:L6a870d:{c.instructions+=1;NFSU2_TR(0x6a870d);
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
B6a870f:L6a870f:{c.instructions+=4;NFSU2_TR(0x6a870f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6a8710:{NFSU2_TR(0x6a8710);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6a8711:{NFSU2_TR(0x6a8711);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6a8712:{NFSU2_TR(0x6a8712);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6a8713:L6a8713:{c.instructions+=13;NFSU2_TR(0x6a8713);
__builtin_memmove((R+28),(R+28),4);
}
B6a8715:{NFSU2_TR(0x6a8715);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a8716:{NFSU2_TR(0x6a8716);
__builtin_memmove((R+20),(R+16),4);
}
B6a8718:{NFSU2_TR(0x6a8718);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x24ull))));
}
B6a871b:{NFSU2_TR(0x6a871b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a871c:{NFSU2_TR(0x6a871c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a871d:{NFSU2_TR(0x6a871d);
__builtin_memmove((R+24),(R+4),4);
}
B6a871f:{NFSU2_TR(0x6a871f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a8722:{NFSU2_TR(0x6a8722);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6a8725:{NFSU2_TR(0x6a8725);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6a8727:{NFSU2_TR(0x6a8727);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a8728:{NFSU2_TR(0x6a8728);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a872b:{NFSU2_TR(0x6a872b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a8730ull));
TAIL_STATIC(0x575620u,575);
}
B6a8730:L6a8730:{c.instructions+=4;NFSU2_TR(0x6a8730);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a8732:{NFSU2_TR(0x6a8732);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6a8733:{NFSU2_TR(0x6a8733);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a8736:{NFSU2_TR(0x6a8736);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a8742;}}
}
B6a8738:L6a8738:{c.instructions+=2;NFSU2_TR(0x6a8738);
w4(R+24,u32(0x8007000eull));
}
B6a873d:{NFSU2_TR(0x6a873d);
{goto L6a8989;}
}
B6a8742:L6a8742:{c.instructions+=4;NFSU2_TR(0x6a8742);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a8745:{NFSU2_TR(0x6a8745);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a8746:{NFSU2_TR(0x6a8746);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a8749:{NFSU2_TR(0x6a8749);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a8816;}}
}
B6a874f:L6a874f:{c.instructions+=6;NFSU2_TR(0x6a874f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a8752:{NFSU2_TR(0x6a8752);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a8755:{NFSU2_TR(0x6a8755);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a8758:{NFSU2_TR(0x6a8758);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6a875a:{NFSU2_TR(0x6a875a);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfff00000ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B6a8760:{NFSU2_TR(0x6a8760);
if(r1(R+518)){{goto L6a8807;}}
}
B6a8766:L6a8766:{c.instructions+=2;NFSU2_TR(0x6a8766);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a8769:{NFSU2_TR(0x6a8769);
if(r1(R+518)){{goto L6a8774;}}
}
B6a876b:L6a876b:{c.instructions+=2;NFSU2_TR(0x6a876b);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a876e:{NFSU2_TR(0x6a876e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a8807;}}
}
B6a8774:L6a8774:{c.instructions+=2;NFSU2_TR(0x6a8774);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10f00000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a877a:{NFSU2_TR(0x6a877a);
if(r1(R+518)){{goto L6a8807;}}
}
B6a8780:L6a8780:{c.instructions+=2;NFSU2_TR(0x6a8780);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x20700000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a8786:{NFSU2_TR(0x6a8786);
if(r1(R+518)){{goto L6a8807;}}
}
B6a8788:L6a8788:{c.instructions+=2;NFSU2_TR(0x6a8788);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x11100000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a878e:{NFSU2_TR(0x6a878e);
if(r1(R+518)){{goto L6a8807;}}
}
B6a8790:L6a8790:{c.instructions+=2;NFSU2_TR(0x6a8790);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x11200000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a8796:{NFSU2_TR(0x6a8796);
if(r1(R+518)){{goto L6a8807;}}
}
B6a8798:L6a8798:{c.instructions+=2;NFSU2_TR(0x6a8798);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x11300000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a879e:{NFSU2_TR(0x6a879e);
if(r1(R+518)){{goto L6a8807;}}
}
B6a87a0:L6a87a0:{c.instructions+=2;NFSU2_TR(0x6a87a0);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x11400000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a87a6:{NFSU2_TR(0x6a87a6);
if(r1(R+518)){{goto L6a8807;}}
}
B6a87a8:L6a87a8:{c.instructions+=2;NFSU2_TR(0x6a87a8);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x20800000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a87ae:{NFSU2_TR(0x6a87ae);
if(r1(R+518)){{goto L6a8807;}}
}
B6a87b0:L6a87b0:{c.instructions+=2;NFSU2_TR(0x6a87b0);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x20900000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a87b6:{NFSU2_TR(0x6a87b6);
if(r1(R+518)){{goto L6a8807;}}
}
B6a87b8:L6a87b8:{c.instructions+=2;NFSU2_TR(0x6a87b8);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x11500000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a87be:{NFSU2_TR(0x6a87be);
if(r1(R+518)){{goto L6a8807;}}
}
B6a87c0:L6a87c0:{c.instructions+=4;NFSU2_TR(0x6a87c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6a87c3:{NFSU2_TR(0x6a87c3);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(R+28))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a87c5:{NFSU2_TR(0x6a87c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a87c8:{NFSU2_TR(0x6a87c8);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a87f1;}}
}
B6a87ca:L6a87ca:{c.instructions+=3;NFSU2_TR(0x6a87ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a87cd:{NFSU2_TR(0x6a87cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a87d0:{NFSU2_TR(0x6a87d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a87d3:L6a87d3:{c.instructions+=6;NFSU2_TR(0x6a87d3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+12),(U+0),4);
}
B6a87d5:{NFSU2_TR(0x6a87d5);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B6a87d8:{NFSU2_TR(0x6a87d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6a87db:{NFSU2_TR(0x6a87db);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B6a87de:{NFSU2_TR(0x6a87de);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+6,u16(u32(r2(U+4))&u32(u16(0x1020ull))));
w1(R+518,u8((r2(U+6))==(u16(0x0ull))));
}
B6a87e4:{NFSU2_TR(0x6a87e4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a87f1;}}
}
B6a87e6:L6a87e6:{c.instructions+=4;NFSU2_TR(0x6a87e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a87e9:{NFSU2_TR(0x6a87e9);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B6a87ec:{NFSU2_TR(0x6a87ec);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
}
B6a87ef:{NFSU2_TR(0x6a87ef);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a87d3u);}goto L6a87d3;}}
}
B6a87f1:L6a87f1:{c.instructions+=2;NFSU2_TR(0x6a87f1);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
}
B6a87f4:{NFSU2_TR(0x6a87f4);
if(r1(R+512)){{goto L6a8805;}}
}
B6a87f6:L6a87f6:{c.instructions+=5;NFSU2_TR(0x6a87f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a87f9:{NFSU2_TR(0x6a87f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a87fc:{NFSU2_TR(0x6a87fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a87ff:{NFSU2_TR(0x6a87ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a8802:{NFSU2_TR(0x6a8802);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6a8805:L6a8805:{c.instructions+=1;NFSU2_TR(0x6a8805);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6a8807:L6a8807:{c.instructions+=4;NFSU2_TR(0x6a8807);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a880a:{NFSU2_TR(0x6a880a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a880d:{NFSU2_TR(0x6a880d);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6a8810:{NFSU2_TR(0x6a8810);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a874fu);}goto L6a874f;}}
}
B6a8816:L6a8816:{c.instructions+=1;NFSU2_TR(0x6a8816);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a8819:L6a8819:{c.instructions+=3;NFSU2_TR(0x6a8819);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a881d:{NFSU2_TR(0x6a881d);
__builtin_memmove((R+4),(R+24),4);
}
B6a881f:{NFSU2_TR(0x6a881f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a8824ull));
TAIL_STATIC(0x69e7abu,69e);
}
B6a8824:L6a8824:{c.instructions+=7;NFSU2_TR(0x6a8824);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6a8827:{NFSU2_TR(0x6a8827);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6a882a:{NFSU2_TR(0x6a882a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a882b:{NFSU2_TR(0x6a882b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a882c:{NFSU2_TR(0x6a882c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a882d:{NFSU2_TR(0x6a882d);
u8 U[4];
w4(U+0,u32(0x69ebd3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a8832:{NFSU2_TR(0x6a8832);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a8837ull));
TAIL_STATIC(0x69a41du,69a);
}
B6a8837:L6a8837:{c.instructions+=3;NFSU2_TR(0x6a8837);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6a8839:{NFSU2_TR(0x6a8839);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+28))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a883b:{NFSU2_TR(0x6a883b);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a8972;}}
}
B6a8841:L6a8841:{c.instructions+=3;NFSU2_TR(0x6a8841);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6a8848:{NFSU2_TR(0x6a8848);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a884b:{NFSU2_TR(0x6a884b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a884e:L6a884e:{c.instructions+=5;NFSU2_TR(0x6a884e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a8851:{NFSU2_TR(0x6a8851);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6a8853:{NFSU2_TR(0x6a8853);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a8856:{NFSU2_TR(0x6a8856);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a8859:{NFSU2_TR(0x6a8859);
if(r1(R+518)){{goto L6a88eb;}}
}
B6a885f:L6a885f:{c.instructions+=2;NFSU2_TR(0x6a885f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a8862:{NFSU2_TR(0x6a8862);
{goto L6a88df;}
}
B6a8864:L6a8864:{c.instructions+=6;NFSU2_TR(0x6a8864);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a8867:{NFSU2_TR(0x6a8867);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+12),(U+4),4);
}
B6a886a:{NFSU2_TR(0x6a886a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+28),(U+0),4);
}
B6a886c:{NFSU2_TR(0x6a886c);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a886f:{NFSU2_TR(0x6a886f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a8872:{NFSU2_TR(0x6a8872);
if(r1(R+518)){{goto L6a88de;}}
}
B6a8874:L6a8874:{c.instructions+=3;NFSU2_TR(0x6a8874);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a8877:{NFSU2_TR(0x6a8877);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
}
B6a8879:{NFSU2_TR(0x6a8879);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6a88eb;}}
}
B6a887b:L6a887b:{c.instructions+=3;NFSU2_TR(0x6a887b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a887c:{NFSU2_TR(0x6a887c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a887d:{NFSU2_TR(0x6a887d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a8882ull));
TAIL_STATIC(0x69ea34u,69e);
}
B6a8882:L6a8882:{c.instructions+=2;NFSU2_TR(0x6a8882);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a8884:{NFSU2_TR(0x6a8884);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a88eb;}}
}
B6a8886:L6a8886:{c.instructions+=8;NFSU2_TR(0x6a8886);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a8889:{NFSU2_TR(0x6a8889);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a888c:{NFSU2_TR(0x6a888c);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a888f:{NFSU2_TR(0x6a888f);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a8892:{NFSU2_TR(0x6a8892);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6a8894:{NFSU2_TR(0x6a8894);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+8))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a8897:{NFSU2_TR(0x6a8897);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a889a:{NFSU2_TR(0x6a889a);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a88c7;}}
}
B6a889c:L6a889c:{c.instructions+=13;NFSU2_TR(0x6a889c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6a889f:{NFSU2_TR(0x6a889f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6a88a2:{NFSU2_TR(0x6a88a2);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6a88a5:{NFSU2_TR(0x6a88a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6a88a8:{NFSU2_TR(0x6a88a8);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6a88ab:{NFSU2_TR(0x6a88ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a88ae:{NFSU2_TR(0x6a88ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6a88b1:{NFSU2_TR(0x6a88b1);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6a88b4:{NFSU2_TR(0x6a88b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a88b7:{NFSU2_TR(0x6a88b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a88ba:{NFSU2_TR(0x6a88ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a88bd:{NFSU2_TR(0x6a88bd);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+8))));
}
B6a88c0:{NFSU2_TR(0x6a88c0);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a889cu);}goto L6a889c;}}
}
B6a88c2:L6a88c2:{c.instructions+=2;NFSU2_TR(0x6a88c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6a88c5:{NFSU2_TR(0x6a88c5);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6a88c7:L6a88c7:{c.instructions+=9;NFSU2_TR(0x6a88c7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
w4(U+0,u32(u32(r4(U+0))|u32(u32(0xffffffffull))));
s4(u32(r4(R+12)),r4(U+0));
}
B6a88ca:{NFSU2_TR(0x6a88ca);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6a88cc:{NFSU2_TR(0x6a88cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a88cf:{NFSU2_TR(0x6a88cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a88d2:{NFSU2_TR(0x6a88d2);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6a88d4:{NFSU2_TR(0x6a88d4);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6a88d5:{NFSU2_TR(0x6a88d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a88d8:{NFSU2_TR(0x6a88d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a88db:{NFSU2_TR(0x6a88db);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a88de:L6a88de:{c.instructions+=1;NFSU2_TR(0x6a88de);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6a88df:L6a88df:{c.instructions+=3;NFSU2_TR(0x6a88df);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6a88e2:{NFSU2_TR(0x6a88e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a88e5:{NFSU2_TR(0x6a88e5);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a8864u);}goto L6a8864;}}
}
B6a88eb:L6a88eb:{c.instructions+=4;NFSU2_TR(0x6a88eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a88ef:{NFSU2_TR(0x6a88ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a88f2:{NFSU2_TR(0x6a88f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a88f5:{NFSU2_TR(0x6a88f5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a884eu);}goto L6a884e;}}
}
B6a88fb:L6a88fb:{c.instructions+=3;NFSU2_TR(0x6a88fb);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6a88fd:{NFSU2_TR(0x6a88fd);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a8900:{NFSU2_TR(0x6a8900);
if(r1(R+518)){{goto L6a8972;}}
}
B6a8902:L6a8902:{c.instructions+=6;NFSU2_TR(0x6a8902);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a8905:{NFSU2_TR(0x6a8905);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a8907:{NFSU2_TR(0x6a8907);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a890a:{NFSU2_TR(0x6a890a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a890d:{NFSU2_TR(0x6a890d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a8910:{NFSU2_TR(0x6a8910);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a8966;}}
}
B6a8912:L6a8912:{c.instructions+=4;NFSU2_TR(0x6a8912);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a8915:{NFSU2_TR(0x6a8915);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a8918:{NFSU2_TR(0x6a8918);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a891b:{NFSU2_TR(0x6a891b);
if(r1(R+518)){{goto L6a895a;}}
}
B6a891d:L6a891d:{c.instructions+=6;NFSU2_TR(0x6a891d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a8920:{NFSU2_TR(0x6a8920);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a8923:{NFSU2_TR(0x6a8923);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6a8926:{NFSU2_TR(0x6a8926);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a892a:{NFSU2_TR(0x6a892a);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a892c:{NFSU2_TR(0x6a892c);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a8949;}}
}
B6a892e:L6a892e:{c.instructions+=1;NFSU2_TR(0x6a892e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a8931:L6a8931:{c.instructions+=5;NFSU2_TR(0x6a8931);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6a8933:{NFSU2_TR(0x6a8933);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6a8936:{NFSU2_TR(0x6a8936);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B6a8939:{NFSU2_TR(0x6a8939);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a893c:{NFSU2_TR(0x6a893c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a8949;}}
}
B6a893e:L6a893e:{c.instructions+=4;NFSU2_TR(0x6a893e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a8941:{NFSU2_TR(0x6a8941);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B6a8944:{NFSU2_TR(0x6a8944);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
}
B6a8947:{NFSU2_TR(0x6a8947);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a8931u);}goto L6a8931;}}
}
B6a8949:L6a8949:{c.instructions+=2;NFSU2_TR(0x6a8949);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a894c:{NFSU2_TR(0x6a894c);
if(r1(R+518)){{goto L6a895a;}}
}
B6a894e:L6a894e:{c.instructions+=4;NFSU2_TR(0x6a894e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a8951:{NFSU2_TR(0x6a8951);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a8954:{NFSU2_TR(0x6a8954);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a8957:{NFSU2_TR(0x6a8957);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6a895a:L6a895a:{c.instructions+=5;NFSU2_TR(0x6a895a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a895d:{NFSU2_TR(0x6a895d);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6a895e:{NFSU2_TR(0x6a895e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6a8961:{NFSU2_TR(0x6a8961);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a8964:{NFSU2_TR(0x6a8964);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a8912u);}goto L6a8912;}}
}
B6a8966:L6a8966:{c.instructions+=2;NFSU2_TR(0x6a8966);
__builtin_memmove((R+4),(R+24),4);
}
B6a8968:{NFSU2_TR(0x6a8968);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a896dull));
TAIL_STATIC(0x69e7c4u,69e);
}
B6a896d:L6a896d:{c.instructions+=1;NFSU2_TR(0x6a896d);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a8819u);}goto L6a8819;}
}
B6a8972:L6a8972:{c.instructions+=3;NFSU2_TR(0x6a8972);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a8975:{NFSU2_TR(0x6a8975);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6a8976:{NFSU2_TR(0x6a8976);
if(r1(R+518)){{goto L6a897f;}}
}
B6a8978:L6a8978:{c.instructions+=2;NFSU2_TR(0x6a8978);
__builtin_memmove((R+4),(R+24),4);
}
B6a897a:{NFSU2_TR(0x6a897a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a897full));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a806fu);}goto L6a806f;}
}
B6a897f:L6a897f:{c.instructions+=4;NFSU2_TR(0x6a897f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6a8981:{NFSU2_TR(0x6a8981);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a8984:{NFSU2_TR(0x6a8984);
__builtin_memmove((R+0),(R+518),1);
}
B6a8987:{NFSU2_TR(0x6a8987);
__builtin_memmove((R+24),(R+0),4);
}
B6a8989:L6a8989:{c.instructions+=2;NFSU2_TR(0x6a8989);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6a898c:{NFSU2_TR(0x6a898c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a8991ull));
TAIL_STATIC(0x575630u,575);
}
B6a8991:L6a8991:{c.instructions+=6;NFSU2_TR(0x6a8991);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6a8992:{NFSU2_TR(0x6a8992);
__builtin_memmove((R+0),(R+24),4);
}
B6a8994:{NFSU2_TR(0x6a8994);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6a8995:{NFSU2_TR(0x6a8995);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6a8996:{NFSU2_TR(0x6a8996);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6a8997:{NFSU2_TR(0x6a8997);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6a899a:L6a899a:{c.instructions+=15;NFSU2_TR(0x6a899a);
__builtin_memmove((R+28),(R+28),4);
}
B6a899c:{NFSU2_TR(0x6a899c);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a899d:{NFSU2_TR(0x6a899d);
__builtin_memmove((R+20),(R+16),4);
}
B6a899f:{NFSU2_TR(0x6a899f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x70ull))));
}
B6a89a2:{NFSU2_TR(0x6a89a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a89a6:{NFSU2_TR(0x6a89a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a89aa:{NFSU2_TR(0x6a89aa);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a89ab:{NFSU2_TR(0x6a89ab);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a89ac:{NFSU2_TR(0x6a89ac);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a89ad:{NFSU2_TR(0x6a89ad);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6a89af:{NFSU2_TR(0x6a89af);
__builtin_memmove((R+24),(R+4),4);
}
B6a89b1:{NFSU2_TR(0x6a89b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a89b4:{NFSU2_TR(0x6a89b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a89b7:{NFSU2_TR(0x6a89b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a89ba:{NFSU2_TR(0x6a89ba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a89bfull));
TAIL_STATIC(0x69e219u,69e);
}
B6a89bf:L6a89bf:{c.instructions+=4;NFSU2_TR(0x6a89bf);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6a89c1:{NFSU2_TR(0x6a89c1);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a89c4:{NFSU2_TR(0x6a89c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a89c7:{NFSU2_TR(0x6a89c7);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a89d9;}}
}
B6a89c9:L6a89c9:{c.instructions+=6;NFSU2_TR(0x6a89c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a89cc:{NFSU2_TR(0x6a89cc);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a89cf:{NFSU2_TR(0x6a89cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a89d3:{NFSU2_TR(0x6a89d3);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6a89d4:{NFSU2_TR(0x6a89d4);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6a89d7:{NFSU2_TR(0x6a89d7);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a89c9u);}goto L6a89c9;}}
}
B6a89d9:L6a89d9:{c.instructions+=3;NFSU2_TR(0x6a89d9);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a89dc:{NFSU2_TR(0x6a89dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a89df:{NFSU2_TR(0x6a89df);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a8d58;}}
}
B6a89e5:L6a89e5:{c.instructions+=7;NFSU2_TR(0x6a89e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a89e8:{NFSU2_TR(0x6a89e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a89eb:{NFSU2_TR(0x6a89eb);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B6a89ee:{NFSU2_TR(0x6a89ee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6a89f0:{NFSU2_TR(0x6a89f0);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfff00000ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6a89f5:{NFSU2_TR(0x6a89f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a89f8:{NFSU2_TR(0x6a89f8);
if(r1(R+518)){{goto L6a8d31;}}
}
B6a89fe:L6a89fe:{c.instructions+=3;NFSU2_TR(0x6a89fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a8a01:{NFSU2_TR(0x6a8a01);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a8a03:{NFSU2_TR(0x6a8a03);
if(r1(R+518)){{goto L6a8a19;}}
}
B6a8a05:L6a8a05:{c.instructions+=6;NFSU2_TR(0x6a8a05);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a8a08:{NFSU2_TR(0x6a8a08);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6a8a0a:{NFSU2_TR(0x6a8a0a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6a8a0d:{NFSU2_TR(0x6a8a0d);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6a8a10:{NFSU2_TR(0x6a8a10);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
w1(U+1,u8(u32(r1(U+0))&u32(u8(0x40ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B6a8a13:{NFSU2_TR(0x6a8a13);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a8d31;}}
}
B6a8a19:L6a8a19:{c.instructions+=2;NFSU2_TR(0x6a8a19);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x20400000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a8a1e:{NFSU2_TR(0x6a8a1e);
if(r1(R+518)){{goto L6a8a2b;}}
}
B6a8a20:L6a8a20:{c.instructions+=2;NFSU2_TR(0x6a8a20);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x20500000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a8a25:{NFSU2_TR(0x6a8a25);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a8d31;}}
}
B6a8a2b:L6a8a2b:{c.instructions+=3;NFSU2_TR(0x6a8a2b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a8a2f:{NFSU2_TR(0x6a8a2f);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a8a31:{NFSU2_TR(0x6a8a31);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a8d31;}}
}
B6a8a37:L6a8a37:{c.instructions+=8;NFSU2_TR(0x6a8a37);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a8a3a:{NFSU2_TR(0x6a8a3a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a8a3d:{NFSU2_TR(0x6a8a3d);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+8))));
}
B6a8a3f:{NFSU2_TR(0x6a8a3f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a8a43:{NFSU2_TR(0x6a8a43);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B6a8a46:{NFSU2_TR(0x6a8a46);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6a8a49:{NFSU2_TR(0x6a8a49);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a8a4c:{NFSU2_TR(0x6a8a4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a8a4f:L6a8a4f:{c.instructions+=19;NFSU2_TR(0x6a8a4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a8a52:{NFSU2_TR(0x6a8a52);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6a8a54:{NFSU2_TR(0x6a8a54);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a8a57:{NFSU2_TR(0x6a8a57);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6a8a5a:{NFSU2_TR(0x6a8a5a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a8a5d:{NFSU2_TR(0x6a8a5d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff90ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a8a60:{NFSU2_TR(0x6a8a60);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a8a63:{NFSU2_TR(0x6a8a63);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6a8a65:{NFSU2_TR(0x6a8a65);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6a8a68:{NFSU2_TR(0x6a8a68);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6a8a6a:{NFSU2_TR(0x6a8a6a);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6a8a6b:{NFSU2_TR(0x6a8a6b);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+4))));
}
B6a8a6d:{NFSU2_TR(0x6a8a6d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff94ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a8a70:{NFSU2_TR(0x6a8a70);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff90ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B6a8a74:{NFSU2_TR(0x6a8a74);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a8a77:{NFSU2_TR(0x6a8a77);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a8a7a:{NFSU2_TR(0x6a8a7a);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a8a7d:{NFSU2_TR(0x6a8a7d);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6a8a81:{NFSU2_TR(0x6a8a81);
if(r1(R+518)){{goto L6a8d15;}}
}
B6a8a87:L6a8a87:{c.instructions+=4;NFSU2_TR(0x6a8a87);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a8a8a:{NFSU2_TR(0x6a8a8a);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff90ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B6a8a8e:{NFSU2_TR(0x6a8a8e);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a8a92:{NFSU2_TR(0x6a8a92);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a8d15;}}
}
B6a8a98:L6a8a98:{c.instructions+=8;NFSU2_TR(0x6a8a98);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a8a9b:{NFSU2_TR(0x6a8a9b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a8a9e:{NFSU2_TR(0x6a8a9e);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a8aa1:{NFSU2_TR(0x6a8aa1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6a8aa3:{NFSU2_TR(0x6a8aa3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
w4(R+8,u32(u32(r4(R+8))^u32(r4(U+0))));
}
B6a8aa5:{NFSU2_TR(0x6a8aa5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a8aa8:{NFSU2_TR(0x6a8aa8);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xfff00000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a8aae:{NFSU2_TR(0x6a8aae);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a8d15;}}
}
B6a8ab4:L6a8ab4:{c.instructions+=5;NFSU2_TR(0x6a8ab4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6a8ab7:{NFSU2_TR(0x6a8ab7);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6a8ab9:{NFSU2_TR(0x6a8ab9);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a8abb:{NFSU2_TR(0x6a8abb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a8abe:{NFSU2_TR(0x6a8abe);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a8adc;}}
}
B6a8ac0:L6a8ac0:{c.instructions+=4;NFSU2_TR(0x6a8ac0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6a8ac3:{NFSU2_TR(0x6a8ac3);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffa0ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+12),(U+12),4);
}
B6a8ac7:{NFSU2_TR(0x6a8ac7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+12),(U+0),4);
}
B6a8ac9:{NFSU2_TR(0x6a8ac9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a8acc:L6a8acc:{c.instructions+=2;NFSU2_TR(0x6a8acc);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+12))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6a8ace:{NFSU2_TR(0x6a8ace);
if(r1(R+518)){{goto L6a8ad9;}}
}
B6a8ad0:L6a8ad0:{c.instructions+=4;NFSU2_TR(0x6a8ad0);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6a8ad1:{NFSU2_TR(0x6a8ad1);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B6a8ad4:{NFSU2_TR(0x6a8ad4);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+8))));
}
B6a8ad7:{NFSU2_TR(0x6a8ad7);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a8accu);}goto L6a8acc;}}
}
B6a8ad9:L6a8ad9:{c.instructions+=1;NFSU2_TR(0x6a8ad9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a8adc:L6a8adc:{c.instructions+=21;NFSU2_TR(0x6a8adc);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a8adf:{NFSU2_TR(0x6a8adf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a8ae3:{NFSU2_TR(0x6a8ae3);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+12),(U+4),4);
}
B6a8ae6:{NFSU2_TR(0x6a8ae6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a8ae9:{NFSU2_TR(0x6a8ae9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6a8aec:{NFSU2_TR(0x6a8aec);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a8af0:{NFSU2_TR(0x6a8af0);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+8))));
}
B6a8af2:{NFSU2_TR(0x6a8af2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a8af5:{NFSU2_TR(0x6a8af5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6a8af7:{NFSU2_TR(0x6a8af7);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6a8afa:{NFSU2_TR(0x6a8afa);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B6a8afd:{NFSU2_TR(0x6a8afd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffacull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a8b00:{NFSU2_TR(0x6a8b00);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6a8b02:{NFSU2_TR(0x6a8b02);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a8b05:{NFSU2_TR(0x6a8b05);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff9cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a8b08:{NFSU2_TR(0x6a8b08);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a8b0b:{NFSU2_TR(0x6a8b0b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff98ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a8b0e:{NFSU2_TR(0x6a8b0e);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff90ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B6a8b12:{NFSU2_TR(0x6a8b12);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a8b16:{NFSU2_TR(0x6a8b16);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a8b19:{NFSU2_TR(0x6a8b19);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a8b5c;}}
}
B6a8b1b:L6a8b1b:{c.instructions+=2;NFSU2_TR(0x6a8b1b);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a8b1d:{NFSU2_TR(0x6a8b1d);
if(r1(R+518)){{goto L6a8b5c;}}
}
B6a8b1f:L6a8b1f:{c.instructions+=8;NFSU2_TR(0x6a8b1f);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6a8b22:{NFSU2_TR(0x6a8b22);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a8b23:{NFSU2_TR(0x6a8b23);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((R+0),(U+0),4);
}
B6a8b26:{NFSU2_TR(0x6a8b26);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a8b27:{NFSU2_TR(0x6a8b27);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffa0ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B6a8b2b:{NFSU2_TR(0x6a8b2b);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B6a8b2d:{NFSU2_TR(0x6a8b2d);
__builtin_memmove((R+4),(R+24),4);
}
B6a8b2f:{NFSU2_TR(0x6a8b2f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a8b34ull));
TAIL_STATIC(0x69b3dau,69b);
}
B6a8b34:L6a8b34:{c.instructions+=11;NFSU2_TR(0x6a8b34);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a8b37:{NFSU2_TR(0x6a8b37);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a8b3a:{NFSU2_TR(0x6a8b3a);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6a8b3d:{NFSU2_TR(0x6a8b3d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a8b3e:{NFSU2_TR(0x6a8b3e);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6a8b41:{NFSU2_TR(0x6a8b41);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a8b42:{NFSU2_TR(0x6a8b42);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a8b45:{NFSU2_TR(0x6a8b45);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffa0ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B6a8b49:{NFSU2_TR(0x6a8b49);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+4));
}
B6a8b4b:{NFSU2_TR(0x6a8b4b);
__builtin_memmove((R+4),(R+24),4);
}
B6a8b4d:{NFSU2_TR(0x6a8b4d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a8b52ull));
TAIL_STATIC(0x69b3dau,69b);
}
B6a8b52:L6a8b52:{c.instructions+=4;NFSU2_TR(0x6a8b52);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6a8b54:{NFSU2_TR(0x6a8b54);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6a8b56:{NFSU2_TR(0x6a8b56);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
__builtin_memmove((R+4),(U+0),1);
}
B6a8b59:{NFSU2_TR(0x6a8b59);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a8b5c:L6a8b5c:{c.instructions+=3;NFSU2_TR(0x6a8b5c);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a8b5e:{NFSU2_TR(0x6a8b5e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B6a8b5f:{NFSU2_TR(0x6a8b5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a8b62:L6a8b62:{c.instructions+=12;NFSU2_TR(0x6a8b62);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff90ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+12),(U+12),4);
}
B6a8b66:{NFSU2_TR(0x6a8b66);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6a8b69:{NFSU2_TR(0x6a8b69);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a8b6c:{NFSU2_TR(0x6a8b6c);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B6a8b6f:{NFSU2_TR(0x6a8b6f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6a8b72:{NFSU2_TR(0x6a8b72);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a8b74:{NFSU2_TR(0x6a8b74);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6a8b75:{NFSU2_TR(0x6a8b75);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B6a8b77:{NFSU2_TR(0x6a8b77);
w4(R+12,u32(u32(r4(R+12))&u32(u32(0x100ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
}
B6a8b7d:{NFSU2_TR(0x6a8b7d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a8b80:{NFSU2_TR(0x6a8b80);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a8b83:{NFSU2_TR(0x6a8b83);
if(r1(R+518)){{goto L6a8bad;}}
}
B6a8b85:L6a8b85:{c.instructions+=3;NFSU2_TR(0x6a8b85);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff90ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+12),(U+12),4);
}
B6a8b89:{NFSU2_TR(0x6a8b89);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a8b8d:{NFSU2_TR(0x6a8b8d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a8bad;}}
}
B6a8b8f:L6a8b8f:{c.instructions+=5;NFSU2_TR(0x6a8b8f);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff90ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+12),(U+12),4);
}
B6a8b93:{NFSU2_TR(0x6a8b93);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6a8b96:{NFSU2_TR(0x6a8b96);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a8b99:{NFSU2_TR(0x6a8b99);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6a8b9d:{NFSU2_TR(0x6a8b9d);
if(r1(R+518)){{goto L6a8bad;}}
}
B6a8b9f:L6a8b9f:{c.instructions+=3;NFSU2_TR(0x6a8b9f);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff90ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B6a8ba3:{NFSU2_TR(0x6a8ba3);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a8ba7:{NFSU2_TR(0x6a8ba7);
if(r1(R+518)){{goto L6a8c66;}}
}
B6a8bad:L6a8bad:{c.instructions+=3;NFSU2_TR(0x6a8bad);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6a8bb0:{NFSU2_TR(0x6a8bb0);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a8bb4:{NFSU2_TR(0x6a8bb4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a8c51;}}
}
B6a8bba:L6a8bba:{c.instructions+=4;NFSU2_TR(0x6a8bba);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff90ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B6a8bbe:{NFSU2_TR(0x6a8bbe);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a8bc1:{NFSU2_TR(0x6a8bc1);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a8bc4:{NFSU2_TR(0x6a8bc4);
if(r1(R+518)){{goto L6a8bcf;}}
}
B6a8bc6:L6a8bc6:{c.instructions+=2;NFSU2_TR(0x6a8bc6);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B6a8bc9:{NFSU2_TR(0x6a8bc9);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6a8c51;}}
}
B6a8bcf:L6a8bcf:{c.instructions+=3;NFSU2_TR(0x6a8bcf);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff90ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B6a8bd3:{NFSU2_TR(0x6a8bd3);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a8bd7:{NFSU2_TR(0x6a8bd7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a8c51;}}
}
B6a8bd9:L6a8bd9:{c.instructions+=2;NFSU2_TR(0x6a8bd9);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a8bdd:{NFSU2_TR(0x6a8bdd);
if(r1(R+518)){{goto L6a8bfc;}}
}
B6a8bdf:L6a8bdf:{c.instructions+=3;NFSU2_TR(0x6a8bdf);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff90ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+12),(U+12),4);
}
B6a8be3:{NFSU2_TR(0x6a8be3);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a8be7:{NFSU2_TR(0x6a8be7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a8bfc;}}
}
B6a8be9:L6a8be9:{c.instructions+=5;NFSU2_TR(0x6a8be9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6a8bec:{NFSU2_TR(0x6a8bec);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a8bef:{NFSU2_TR(0x6a8bef);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a8bf2:{NFSU2_TR(0x6a8bf2);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6a8bf6:{NFSU2_TR(0x6a8bf6);
if(r1(R+518)){{goto L6a8ccf;}}
}
B6a8bfc:L6a8bfc:{c.instructions+=6;NFSU2_TR(0x6a8bfc);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffa0ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B6a8c00:{NFSU2_TR(0x6a8c00);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffa0ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+12),(U+12),4);
}
B6a8c04:{NFSU2_TR(0x6a8c04);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a8c07:{NFSU2_TR(0x6a8c07);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6a8c09:{NFSU2_TR(0x6a8c09);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+4))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6a8c0b:{NFSU2_TR(0x6a8c0b);
if(r1(R+518)){{goto L6a8c51;}}
}
B6a8c0d:L6a8c0d:{c.instructions+=2;NFSU2_TR(0x6a8c0d);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a8c11:{NFSU2_TR(0x6a8c11);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a8c40;}}
}
B6a8c13:L6a8c13:{c.instructions+=9;NFSU2_TR(0x6a8c13);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a8c16:{NFSU2_TR(0x6a8c16);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a8c19:{NFSU2_TR(0x6a8c19);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6a8c1c:{NFSU2_TR(0x6a8c1c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a8c1d:{NFSU2_TR(0x6a8c1d);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6a8c20:{NFSU2_TR(0x6a8c20);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a8c21:{NFSU2_TR(0x6a8c21);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a8c22:{NFSU2_TR(0x6a8c22);
__builtin_memmove((R+4),(R+24),4);
}
B6a8c24:{NFSU2_TR(0x6a8c24);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a8c29ull));
TAIL_STATIC(0x69b3dau,69b);
}
B6a8c29:L6a8c29:{c.instructions+=7;NFSU2_TR(0x6a8c29);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6a8c2b:{NFSU2_TR(0x6a8c2b);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6a8c2d:{NFSU2_TR(0x6a8c2d);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
__builtin_memmove((R+4),(U+0),1);
}
B6a8c30:{NFSU2_TR(0x6a8c30);
__builtin_memmove((R+0),(R+4),4);
}
B6a8c32:{NFSU2_TR(0x6a8c32);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a8c34:{NFSU2_TR(0x6a8c34);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a8c37:{NFSU2_TR(0x6a8c37);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a8cd5;}}
}
B6a8c3d:L6a8c3d:{c.instructions+=1;NFSU2_TR(0x6a8c3d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a8c40:L6a8c40:{c.instructions+=5;NFSU2_TR(0x6a8c40);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffa0ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B6a8c44:{NFSU2_TR(0x6a8c44);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6a8c46:{NFSU2_TR(0x6a8c46);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6a8c49:{NFSU2_TR(0x6a8c49);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(R+4))-u32(r4(U+4))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6a8c4b:{NFSU2_TR(0x6a8c4b);
if(r1(R+518)){{goto L6a8cd5;}}
}
B6a8c51:L6a8c51:{c.instructions+=4;NFSU2_TR(0x6a8c51);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6a8c52:{NFSU2_TR(0x6a8c52);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(U+0))<(u32(0x4ull))));
}
B6a8c55:{NFSU2_TR(0x6a8c55);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a8c58:{NFSU2_TR(0x6a8c58);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a8b62u);}goto L6a8b62;}}
}
B6a8c5e:L6a8c5e:{c.instructions+=2;NFSU2_TR(0x6a8c5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6a8c61:{NFSU2_TR(0x6a8c61);
{goto L6a8d15;}
}
B6a8c66:L6a8c66:{c.instructions+=6;NFSU2_TR(0x6a8c66);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6a8c69:{NFSU2_TR(0x6a8c69);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B6a8c6b:{NFSU2_TR(0x6a8c6b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6a8c6d:{NFSU2_TR(0x6a8c6d);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfff00000ull))));
}
B6a8c72:{NFSU2_TR(0x6a8c72);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x20400000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a8c77:{NFSU2_TR(0x6a8c77);
if(r1(R+518)){{goto L6a8c92;}}
}
B6a8c79:L6a8c79:{c.instructions+=2;NFSU2_TR(0x6a8c79);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x20500000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a8c7e:{NFSU2_TR(0x6a8c7e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a8ca2;}}
}
B6a8c80:L6a8c80:{c.instructions+=6;NFSU2_TR(0x6a8c80);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff90ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B6a8c84:{NFSU2_TR(0x6a8c84);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B6a8c86:{NFSU2_TR(0x6a8c86);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff90ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B6a8c8a:{NFSU2_TR(0x6a8c8a);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6a8c8d:{NFSU2_TR(0x6a8c8d);
{u32 ea_=u32(r4(R+4)+u32(32u));__asm__ volatile(".byte 0xdc,0x08"::"a"(ea_):"memory");}
}
B6a8c90:{NFSU2_TR(0x6a8c90);
{goto L6a8ca2;}
}
B6a8c92:L6a8c92:{c.instructions+=5;NFSU2_TR(0x6a8c92);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff90ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B6a8c96:{NFSU2_TR(0x6a8c96);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B6a8c98:{NFSU2_TR(0x6a8c98);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff90ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B6a8c9c:{NFSU2_TR(0x6a8c9c);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6a8c9f:{NFSU2_TR(0x6a8c9f);
{u32 ea_=u32(r4(R+4)+u32(32u));__asm__ volatile(".byte 0xdc,0x00"::"a"(ea_):"memory");}
}
B6a8ca2:L6a8ca2:{c.instructions+=14;NFSU2_TR(0x6a8ca2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a8ca5:{NFSU2_TR(0x6a8ca5);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffa0ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B6a8ca9:{NFSU2_TR(0x6a8ca9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a8cac:{NFSU2_TR(0x6a8cac);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffa0ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B6a8cb0:{NFSU2_TR(0x6a8cb0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6a8cb2:{NFSU2_TR(0x6a8cb2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a8cb3:{NFSU2_TR(0x6a8cb3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a8cb4:{NFSU2_TR(0x6a8cb4);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6a8cb7:{NFSU2_TR(0x6a8cb7);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a8cb9:{NFSU2_TR(0x6a8cb9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6a8cbb:{NFSU2_TR(0x6a8cbb);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6a8cbd:{NFSU2_TR(0x6a8cbd);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6a8cc0:{NFSU2_TR(0x6a8cc0);
__builtin_memmove((R+4),(R+24),4);
}
B6a8cc2:{NFSU2_TR(0x6a8cc2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a8cc7ull));
TAIL_STATIC(0x699c39u,699);
}
B6a8cc7:L6a8cc7:{c.instructions+=3;NFSU2_TR(0x6a8cc7);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffa0ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B6a8ccb:{NFSU2_TR(0x6a8ccb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6a8ccd:{NFSU2_TR(0x6a8ccd);
{goto L6a8cfb;}
}
B6a8ccf:L6a8ccf:{c.instructions+=2;NFSU2_TR(0x6a8ccf);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffa0ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B6a8cd3:{NFSU2_TR(0x6a8cd3);
{goto L6a8cd9;}
}
B6a8cd5:L6a8cd5:{c.instructions+=1;NFSU2_TR(0x6a8cd5);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffa0ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B6a8cd9:L6a8cd9:{c.instructions+=11;NFSU2_TR(0x6a8cd9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6a8cdb:{NFSU2_TR(0x6a8cdb);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffa0ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+28),(U+12),4);
}
B6a8cdf:{NFSU2_TR(0x6a8cdf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6a8ce1:{NFSU2_TR(0x6a8ce1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6a8ce4:{NFSU2_TR(0x6a8ce4);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+28)),r4(U+0));
}
B6a8ce6:{NFSU2_TR(0x6a8ce6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6a8ce8:{NFSU2_TR(0x6a8ce8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a8ceb:{NFSU2_TR(0x6a8ceb);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff90ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B6a8cef:{NFSU2_TR(0x6a8cef);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a8cf3:{NFSU2_TR(0x6a8cf3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a8cf7:{NFSU2_TR(0x6a8cf7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a8cfb:L6a8cfb:{c.instructions+=7;NFSU2_TR(0x6a8cfb);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a8cfe:{NFSU2_TR(0x6a8cfe);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a8d01:{NFSU2_TR(0x6a8d01);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a8d04:{NFSU2_TR(0x6a8d04);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a8d07:{NFSU2_TR(0x6a8d07);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a8d0a:{NFSU2_TR(0x6a8d0a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a8d0e:{NFSU2_TR(0x6a8d0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6a8d15:L6a8d15:{c.instructions+=3;NFSU2_TR(0x6a8d15);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a8d18:{NFSU2_TR(0x6a8d18);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x2ull))));
}
B6a8d1c:{NFSU2_TR(0x6a8d1c);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a8a4fu);}goto L6a8a4f;}}
}
B6a8d22:L6a8d22:{c.instructions+=4;NFSU2_TR(0x6a8d22);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a8d25:{NFSU2_TR(0x6a8d25);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a8d28:{NFSU2_TR(0x6a8d28);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+4))));
}
B6a8d2b:{NFSU2_TR(0x6a8d2b);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a8a37u);}goto L6a8a37;}}
}
B6a8d31:L6a8d31:{c.instructions+=4;NFSU2_TR(0x6a8d31);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a8d34:{NFSU2_TR(0x6a8d34);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a8d37:{NFSU2_TR(0x6a8d37);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6a8d3a:{NFSU2_TR(0x6a8d3a);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a89e5u);}goto L6a89e5;}}
}
B6a8d40:L6a8d40:{c.instructions+=2;NFSU2_TR(0x6a8d40);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a8d44:{NFSU2_TR(0x6a8d44);
if(r1(R+518)){{goto L6a8d58;}}
}
B6a8d46:L6a8d46:{c.instructions+=4;NFSU2_TR(0x6a8d46);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a8d4a:{NFSU2_TR(0x6a8d4a);
__builtin_memmove((R+4),(R+24),4);
}
B6a8d4c:{NFSU2_TR(0x6a8d4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6a8d53:{NFSU2_TR(0x6a8d53);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a8d58ull));
TAIL_STATIC(0x69e219u,69e);
}
B6a8d58:L6a8d58:{c.instructions+=3;NFSU2_TR(0x6a8d58);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a8d5c:{NFSU2_TR(0x6a8d5c);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a8d60:{NFSU2_TR(0x6a8d60);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a8f18;}}
}
B6a8d66:L6a8d66:{c.instructions+=7;NFSU2_TR(0x6a8d66);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a8d69:{NFSU2_TR(0x6a8d69);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a8d6c:{NFSU2_TR(0x6a8d6c);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6a8d6f:{NFSU2_TR(0x6a8d6f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6a8d71:{NFSU2_TR(0x6a8d71);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfff00000ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6a8d76:{NFSU2_TR(0x6a8d76);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a8d79:{NFSU2_TR(0x6a8d79);
if(r1(R+518)){{goto L6a8f09;}}
}
B6a8d7f:L6a8d7f:{c.instructions+=3;NFSU2_TR(0x6a8d7f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a8d82:{NFSU2_TR(0x6a8d82);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a8d84:{NFSU2_TR(0x6a8d84);
if(r1(R+518)){{goto L6a8d9a;}}
}
B6a8d86:L6a8d86:{c.instructions+=6;NFSU2_TR(0x6a8d86);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a8d89:{NFSU2_TR(0x6a8d89);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6a8d8b:{NFSU2_TR(0x6a8d8b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6a8d8e:{NFSU2_TR(0x6a8d8e);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6a8d91:{NFSU2_TR(0x6a8d91);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
w1(U+1,u8(u32(r1(U+0))&u32(u8(0x40ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B6a8d94:{NFSU2_TR(0x6a8d94);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a8f09;}}
}
B6a8d9a:L6a8d9a:{c.instructions+=2;NFSU2_TR(0x6a8d9a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x30000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a8d9f:{NFSU2_TR(0x6a8d9f);
if(r1(R+518)){{goto L6a8dac;}}
}
B6a8da1:L6a8da1:{c.instructions+=2;NFSU2_TR(0x6a8da1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x11000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a8da6:{NFSU2_TR(0x6a8da6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a8f09;}}
}
B6a8dac:L6a8dac:{c.instructions+=3;NFSU2_TR(0x6a8dac);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a8db0:{NFSU2_TR(0x6a8db0);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a8db2:{NFSU2_TR(0x6a8db2);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a8f09;}}
}
B6a8db8:L6a8db8:{c.instructions+=12;NFSU2_TR(0x6a8db8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a8dbb:{NFSU2_TR(0x6a8dbb);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a8dbe:{NFSU2_TR(0x6a8dbe);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6a8dc1:{NFSU2_TR(0x6a8dc1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+12),(U+0),4);
}
B6a8dc3:{NFSU2_TR(0x6a8dc3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a8dc6:{NFSU2_TR(0x6a8dc6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a8dc9:{NFSU2_TR(0x6a8dc9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a8dcc:{NFSU2_TR(0x6a8dcc);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a8dcf:{NFSU2_TR(0x6a8dcf);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a8dd2:{NFSU2_TR(0x6a8dd2);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a8dd5:{NFSU2_TR(0x6a8dd5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a8dd8:{NFSU2_TR(0x6a8dd8);
{goto L6a8eda;}
}
B6a8ddd:L6a8ddd:{c.instructions+=2;NFSU2_TR(0x6a8ddd);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a8de1:{NFSU2_TR(0x6a8de1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a8ee4;}}
}
B6a8de7:L6a8de7:{c.instructions+=3;NFSU2_TR(0x6a8de7);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a8dea:{NFSU2_TR(0x6a8dea);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B6a8ded:{NFSU2_TR(0x6a8ded);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6a8e13;}}
}
B6a8def:L6a8def:{c.instructions+=3;NFSU2_TR(0x6a8def);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a8df2:{NFSU2_TR(0x6a8df2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B6a8df5:{NFSU2_TR(0x6a8df5);
{goto L6a8dfa;}
}
B6a8df7:L6a8df7:{c.instructions+=1;NFSU2_TR(0x6a8df7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a8dfa:L6a8dfa:{c.instructions+=2;NFSU2_TR(0x6a8dfa);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(R+12))-u32(r4(U+4))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6a8dfc:{NFSU2_TR(0x6a8dfc);
if(r1(R+518)){{goto L6a8e0a;}}
}
B6a8dfe:L6a8dfe:{c.instructions+=5;NFSU2_TR(0x6a8dfe);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6a8dff:{NFSU2_TR(0x6a8dff);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B6a8e02:{NFSU2_TR(0x6a8e02);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B6a8e05:{NFSU2_TR(0x6a8e05);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a8e08:{NFSU2_TR(0x6a8e08);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a8df7u);}goto L6a8df7;}}
}
B6a8e0a:L6a8e0a:{c.instructions+=2;NFSU2_TR(0x6a8e0a);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B6a8e0d:{NFSU2_TR(0x6a8e0d);
if(r1(R+512)){{goto L6a8ee4;}}
}
B6a8e13:L6a8e13:{c.instructions+=7;NFSU2_TR(0x6a8e13);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a8e16:{NFSU2_TR(0x6a8e16);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a8e19:{NFSU2_TR(0x6a8e19);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a8e1c:{NFSU2_TR(0x6a8e1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a8e1f:{NFSU2_TR(0x6a8e1f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6a8e21:{NFSU2_TR(0x6a8e21);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a8e23:{NFSU2_TR(0x6a8e23);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a8e37;}}
}
B6a8e25:L6a8e25:{c.instructions+=1;NFSU2_TR(0x6a8e25);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6a8e28:L6a8e28:{c.instructions+=2;NFSU2_TR(0x6a8e28);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+12))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6a8e2a:{NFSU2_TR(0x6a8e2a);
if(r1(R+518)){{goto L6a8e34;}}
}
B6a8e2c:L6a8e2c:{c.instructions+=4;NFSU2_TR(0x6a8e2c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6a8e2d:{NFSU2_TR(0x6a8e2d);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B6a8e30:{NFSU2_TR(0x6a8e30);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B6a8e32:{NFSU2_TR(0x6a8e32);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a8e28u);}goto L6a8e28;}}
}
B6a8e34:L6a8e34:{c.instructions+=1;NFSU2_TR(0x6a8e34);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6a8e37:L6a8e37:{c.instructions+=4;NFSU2_TR(0x6a8e37);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+12),(U+0),4);
}
B6a8e39:{NFSU2_TR(0x6a8e39);
w4(R+12,u32(u32(r4(R+12))&u32(u32(0xfff00000ull))));
}
B6a8e3f:{NFSU2_TR(0x6a8e3f);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x20400000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a8e45:{NFSU2_TR(0x6a8e45);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a8e5d;}}
}
B6a8e47:L6a8e47:{c.instructions+=5;NFSU2_TR(0x6a8e47);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a8e4a:{NFSU2_TR(0x6a8e4a);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B6a8e4d:{NFSU2_TR(0x6a8e4d);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B6a8e4f:{NFSU2_TR(0x6a8e4f);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(R+12))-u32(r4(U+12))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B6a8e52:{NFSU2_TR(0x6a8e52);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a8ee4;}}
}
B6a8e58:L6a8e58:{c.instructions+=2;NFSU2_TR(0x6a8e58);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a8e5b:{NFSU2_TR(0x6a8e5b);
{goto L6a8ecb;}
}
B6a8e5d:L6a8e5d:{c.instructions+=2;NFSU2_TR(0x6a8e5d);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x20500000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a8e63:{NFSU2_TR(0x6a8e63);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a8ee4;}}
}
B6a8e65:L6a8e65:{c.instructions+=12;NFSU2_TR(0x6a8e65);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a8e68:{NFSU2_TR(0x6a8e68);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B6a8e6b:{NFSU2_TR(0x6a8e6b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6a8e6e:{NFSU2_TR(0x6a8e6e);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B6a8e70:{NFSU2_TR(0x6a8e70);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a8e73:{NFSU2_TR(0x6a8e73);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a8e76:{NFSU2_TR(0x6a8e76);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a8e79:{NFSU2_TR(0x6a8e79);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a8e7c:{NFSU2_TR(0x6a8e7c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a8e7f:{NFSU2_TR(0x6a8e7f);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a8e82:{NFSU2_TR(0x6a8e82);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6a8e86:{NFSU2_TR(0x6a8e86);
if(r1(R+518)){{goto L6a8ea0;}}
}
B6a8e88:L6a8e88:{c.instructions+=5;NFSU2_TR(0x6a8e88);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6a8e8b:{NFSU2_TR(0x6a8e8b);
{u32 ea_=u32(u32(7892576u));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_):"memory");}
}
B6a8e91:{NFSU2_TR(0x6a8e91);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6a8e93:{NFSU2_TR(0x6a8e93);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6a8e96:{NFSU2_TR(0x6a8e96);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a8ea0;}}
}
B6a8e98:L6a8e98:{c.instructions+=3;NFSU2_TR(0x6a8e98);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a8e9b:{NFSU2_TR(0x6a8e9b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a8e9e:{NFSU2_TR(0x6a8e9e);
{goto L6a8ec5;}
}
B6a8ea0:L6a8ea0:{c.instructions+=6;NFSU2_TR(0x6a8ea0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a8ea3:{NFSU2_TR(0x6a8ea3);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6a8ea6:{NFSU2_TR(0x6a8ea6);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a8ea9:{NFSU2_TR(0x6a8ea9);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a8eac:{NFSU2_TR(0x6a8eac);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6a8eb0:{NFSU2_TR(0x6a8eb0);
if(r1(R+518)){{goto L6a8ee4;}}
}
B6a8eb2:L6a8eb2:{c.instructions+=5;NFSU2_TR(0x6a8eb2);
{u32 ea_=u32(r4(R+8)+u32(32u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6a8eb5:{NFSU2_TR(0x6a8eb5);
{u32 ea_=u32(u32(7892576u));__asm__ volatile(".byte 0xdc,0x18"::"a"(ea_):"memory");}
}
B6a8ebb:{NFSU2_TR(0x6a8ebb);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6a8ebd:{NFSU2_TR(0x6a8ebd);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6a8ec0:{NFSU2_TR(0x6a8ec0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a8ee4;}}
}
B6a8ec2:L6a8ec2:{c.instructions+=1;NFSU2_TR(0x6a8ec2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a8ec5:L6a8ec5:{c.instructions+=2;NFSU2_TR(0x6a8ec5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6a8ec8:{NFSU2_TR(0x6a8ec8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6a8ecb:L6a8ecb:{c.instructions+=5;NFSU2_TR(0x6a8ecb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a8ece:{NFSU2_TR(0x6a8ece);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a8ed1:{NFSU2_TR(0x6a8ed1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a8ed4:{NFSU2_TR(0x6a8ed4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a8ed7:{NFSU2_TR(0x6a8ed7);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a8eda:L6a8eda:{c.instructions+=2;NFSU2_TR(0x6a8eda);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6a8ede:{NFSU2_TR(0x6a8ede);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a8dddu);}goto L6a8ddd;}}
}
B6a8ee4:L6a8ee4:{c.instructions+=4;NFSU2_TR(0x6a8ee4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a8ee7:{NFSU2_TR(0x6a8ee7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a8eea:{NFSU2_TR(0x6a8eea);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+0))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6a8eec:{NFSU2_TR(0x6a8eec);
if(r1(R+518)){{goto L6a8ef7;}}
}
B6a8eee:L6a8eee:{c.instructions+=2;NFSU2_TR(0x6a8eee);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6a8ef0:{NFSU2_TR(0x6a8ef0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6a8ef7:L6a8ef7:{c.instructions+=5;NFSU2_TR(0x6a8ef7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a8efa:{NFSU2_TR(0x6a8efa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6a8efd:{NFSU2_TR(0x6a8efd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a8f00:{NFSU2_TR(0x6a8f00);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6a8f03:{NFSU2_TR(0x6a8f03);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a8db8u);}goto L6a8db8;}}
}
B6a8f09:L6a8f09:{c.instructions+=4;NFSU2_TR(0x6a8f09);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a8f0c:{NFSU2_TR(0x6a8f0c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a8f0f:{NFSU2_TR(0x6a8f0f);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6a8f12:{NFSU2_TR(0x6a8f12);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a8d66u);}goto L6a8d66;}}
}
B6a8f18:L6a8f18:{c.instructions+=2;NFSU2_TR(0x6a8f18);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a8f1c:{NFSU2_TR(0x6a8f1c);
if(r1(R+518)){{goto L6a8f30;}}
}
B6a8f1e:L6a8f1e:{c.instructions+=4;NFSU2_TR(0x6a8f1e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a8f22:{NFSU2_TR(0x6a8f22);
__builtin_memmove((R+4),(R+24),4);
}
B6a8f24:{NFSU2_TR(0x6a8f24);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6a8f2b:{NFSU2_TR(0x6a8f2b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6a8f30ull));
TAIL_STATIC(0x69e219u,69e);
}
B6a8f30:L6a8f30:{c.instructions+=3;NFSU2_TR(0x6a8f30);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a8f34:{NFSU2_TR(0x6a8f34);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a8f38:{NFSU2_TR(0x6a8f38);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6a92bdu,6a9);}
}
B6a8f3e:L6a8f3e:{c.instructions+=6;NFSU2_TR(0x6a8f3e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a8f41:{NFSU2_TR(0x6a8f41);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6a8f44:{NFSU2_TR(0x6a8f44);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6a8f47:{NFSU2_TR(0x6a8f47);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6a8f49:{NFSU2_TR(0x6a8f49);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfff00000ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6a8f4e:{NFSU2_TR(0x6a8f4e);
if(r1(R+518)){TAIL_STATIC(0x6a92aeu,6a9);}
}
B6a8f54:L6a8f54:{c.instructions+=3;NFSU2_TR(0x6a8f54);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a8f57:{NFSU2_TR(0x6a8f57);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a8f59:{NFSU2_TR(0x6a8f59);
if(r1(R+518)){{goto L6a8f6f;}}
}
B6a8f5b:L6a8f5b:{c.instructions+=6;NFSU2_TR(0x6a8f5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6a8f5e:{NFSU2_TR(0x6a8f5e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+28),(U+0),4);
}
B6a8f60:{NFSU2_TR(0x6a8f60);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6a8f63:{NFSU2_TR(0x6a8f63);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6a8f66:{NFSU2_TR(0x6a8f66);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+28))),1);
w1(U+1,u8(u32(r1(U+0))&u32(u8(0x40ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B6a8f69:{NFSU2_TR(0x6a8f69);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6a92aeu,6a9);}
}
B6a8f6f:L6a8f6f:{c.instructions+=2;NFSU2_TR(0x6a8f6f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x30000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a8f74:{NFSU2_TR(0x6a8f74);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6a92aeu,6a9);}
}
B6a8f7a:L6a8f7a:{c.instructions+=4;NFSU2_TR(0x6a8f7a);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6a8f7c:{NFSU2_TR(0x6a8f7c);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a8f7e:{NFSU2_TR(0x6a8f7e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a8f81:{NFSU2_TR(0x6a8f81);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6a92aeu,6a9);}
}
B6a8f87:L6a8f87:{c.instructions+=10;NFSU2_TR(0x6a8f87);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a8f8a:{NFSU2_TR(0x6a8f8a);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a8f8d:{NFSU2_TR(0x6a8f8d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a8f90:{NFSU2_TR(0x6a8f90);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a8f93:{NFSU2_TR(0x6a8f93);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a8f96:{NFSU2_TR(0x6a8f96);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a8f99:{NFSU2_TR(0x6a8f99);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6a8f9c:{NFSU2_TR(0x6a8f9c);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6a8f9f:{NFSU2_TR(0x6a8f9f);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6a8fa3:{NFSU2_TR(0x6a8fa3);
if(r1(R+518)){TAIL_STATIC(0x6a92a1u,6a9);}
}
B6a8fa9:L6a8fa9:{c.instructions+=2;NFSU2_TR(0x6a8fa9);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a8fad:{NFSU2_TR(0x6a8fad);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6a92a1u,6a9);}
}
B6a8fb3:L6a8fb3:{c.instructions+=7;NFSU2_TR(0x6a8fb3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a8fb6:{NFSU2_TR(0x6a8fb6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6a8fb9:{NFSU2_TR(0x6a8fb9);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6a8fbc:{NFSU2_TR(0x6a8fbc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6a8fbf:{NFSU2_TR(0x6a8fbf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a8fc3:{NFSU2_TR(0x6a8fc3);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6a8fc5:{NFSU2_TR(0x6a8fc5);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6a8fe3;}}
}
B6a8fc7:L6a8fc7:{c.instructions+=2;NFSU2_TR(0x6a8fc7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6a8fca:{NFSU2_TR(0x6a8fca);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a8fcd:L6a8fcd:{c.instructions+=4;NFSU2_TR(0x6a8fcd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6a8fd0:{NFSU2_TR(0x6a8fd0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+12),(U+0),4);
}
B6a8fd2:{NFSU2_TR(0x6a8fd2);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+12))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6a8fd5:{NFSU2_TR(0x6a8fd5);
if(r1(R+518)){{goto L6a8fe3;}}
}
B6a8fd7:L6a8fd7:{c.instructions+=4;NFSU2_TR(0x6a8fd7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a8fda:{NFSU2_TR(0x6a8fda);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6a8fde:{NFSU2_TR(0x6a8fde);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+8))));
}
B6a8fe1:{NFSU2_TR(0x6a8fe1);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6a8fcdu);}goto L6a8fcd;}}
}
B6a8fe3:L6a8fe3:{c.instructions+=5;NFSU2_TR(0x6a8fe3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+12),(U+0),4);
}
B6a8fe5:{NFSU2_TR(0x6a8fe5);
w4(R+12,u32(u32(r4(R+12))&u32(u32(0xfff00000ull))));
}
B6a8feb:{NFSU2_TR(0x6a8feb);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10100000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6a8ff1:{NFSU2_TR(0x6a8ff1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6a8ff4:{NFSU2_TR(0x6a8ff4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6a8fff;}}
}
B6a8ff6:L6a8ff6:{c.instructions+=2;NFSU2_TR(0x6a8ff6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6a8ffd:{NFSU2_TR(0x6a8ffd);
TAIL_STATIC(0x6a9012u,6a9);
}
B6a8fff:L6a8fff:{c.instructions+=1;NFSU2_TR(0x6a8fff);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x20500000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
TAIL_STATIC(0x6a9005u,6a9);
}
XIT:NFSU2_TR_EXIT(0x6a8,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
