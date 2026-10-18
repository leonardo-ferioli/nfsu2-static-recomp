#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_673(u8* __restrict R,Cpu& c);
u32 body_675(u8* __restrict R,Cpu& c);
u32 body_698(u8* __restrict R,Cpu& c);
u32 body_699(u8* __restrict R,Cpu& c);
u32 body_69a(u8* __restrict R,Cpu& c);
u32 body_69e(u8* __restrict R,Cpu& c);
u32 body_69f(u8* __restrict R,Cpu& c);
u32 body_6a0(u8* __restrict R,Cpu& c);
u32 body_6a8(u8* __restrict R,Cpu& c);
u32 body_6af(u8* __restrict R,Cpu& c);
u32 body_6b4(u8* __restrict R,Cpu& c);
u32 body_6b9(u8* __restrict R,Cpu& c);
u32 body_6bb(u8* __restrict R,Cpu& c);
u32 body_6c2(u8* __restrict R,Cpu& c);
u32 body_6cd(u8* __restrict R,Cpu& c);
u32 body_75d(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x6b8,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x6b8,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_6b8(u8* __restrict R,Cpu& c);
u32 page_6b8(Cpu& c){return body_6b8(c.regs.data(),c);}
__attribute__((noinline)) u32 body_6b8(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x6b8000:goto L6b8000;
case 0x6b8006:c.instructions+=2;goto B6b8006;
case 0x6b8009:c.instructions+=1;goto B6b8009;
case 0x6b800f:goto L6b800f;
case 0x6b8013:c.instructions+=1;goto B6b8013;
case 0x6b8019:goto L6b8019;
case 0x6b801b:c.instructions+=10;goto B6b801b;
case 0x6b801c:c.instructions+=9;goto B6b801c;
case 0x6b801d:c.instructions+=8;goto B6b801d;
case 0x6b801f:c.instructions+=7;goto B6b801f;
case 0x6b8022:c.instructions+=6;goto B6b8022;
case 0x6b8023:c.instructions+=5;goto B6b8023;
case 0x6b8028:c.instructions+=4;goto B6b8028;
case 0x6b8029:c.instructions+=3;goto B6b8029;
case 0x6b802c:c.instructions+=2;goto B6b802c;
case 0x6b802d:c.instructions+=1;goto B6b802d;
case 0x6b8032:goto L6b8032;
case 0x6b8035:c.instructions+=5;goto B6b8035;
case 0x6b8038:c.instructions+=4;goto B6b8038;
case 0x6b803b:c.instructions+=3;goto B6b803b;
case 0x6b803e:c.instructions+=2;goto B6b803e;
case 0x6b803f:c.instructions+=1;goto B6b803f;
case 0x6b8044:goto L6b8044;
case 0x6b8047:c.instructions+=3;goto B6b8047;
case 0x6b804a:c.instructions+=2;goto B6b804a;
case 0x6b804c:c.instructions+=1;goto B6b804c;
case 0x6b8052:goto L6b8052;
case 0x6b8055:c.instructions+=1;goto B6b8055;
case 0x6b805b:goto L6b805b;
case 0x6b805e:c.instructions+=3;goto B6b805e;
case 0x6b8063:c.instructions+=2;goto B6b8063;
case 0x6b8064:c.instructions+=1;goto B6b8064;
case 0x6b8069:goto L6b8069;
case 0x6b806b:c.instructions+=3;goto B6b806b;
case 0x6b806c:c.instructions+=2;goto B6b806c;
case 0x6b806d:c.instructions+=1;goto B6b806d;
case 0x6b806f:goto L6b806f;
case 0x6b8072:c.instructions+=2;goto B6b8072;
case 0x6b8079:c.instructions+=1;goto B6b8079;
case 0x6b807b:goto L6b807b;
case 0x6b807d:c.instructions+=1;goto B6b807d;
case 0x6b807f:goto L6b807f;
case 0x6b8082:c.instructions+=1;goto B6b8082;
case 0x6b8085:goto L6b8085;
case 0x6b8088:c.instructions+=1;goto B6b8088;
case 0x6b808a:goto L6b808a;
case 0x6b808d:c.instructions+=3;goto B6b808d;
case 0x6b8092:c.instructions+=2;goto B6b8092;
case 0x6b8093:c.instructions+=1;goto B6b8093;
case 0x6b8098:goto L6b8098;
case 0x6b809a:c.instructions+=3;goto B6b809a;
case 0x6b809b:c.instructions+=2;goto B6b809b;
case 0x6b809c:c.instructions+=1;goto B6b809c;
case 0x6b809e:goto L6b809e;
case 0x6b80a1:c.instructions+=2;goto B6b80a1;
case 0x6b80a8:c.instructions+=1;goto B6b80a8;
case 0x6b80aa:goto L6b80aa;
case 0x6b80ac:goto L6b80ac;
case 0x6b80ad:c.instructions+=1;goto B6b80ad;
case 0x6b80af:goto L6b80af;
case 0x6b80b2:c.instructions+=2;goto B6b80b2;
case 0x6b80b5:c.instructions+=1;goto B6b80b5;
case 0x6b80b7:goto L6b80b7;
case 0x6b80ba:c.instructions+=3;goto B6b80ba;
case 0x6b80bf:c.instructions+=2;goto B6b80bf;
case 0x6b80c0:c.instructions+=1;goto B6b80c0;
case 0x6b80c5:goto L6b80c5;
case 0x6b80c7:c.instructions+=3;goto B6b80c7;
case 0x6b80c8:c.instructions+=2;goto B6b80c8;
case 0x6b80c9:c.instructions+=1;goto B6b80c9;
case 0x6b80cb:goto L6b80cb;
case 0x6b80ce:c.instructions+=3;goto B6b80ce;
case 0x6b80d3:c.instructions+=2;goto B6b80d3;
case 0x6b80d4:c.instructions+=1;goto B6b80d4;
case 0x6b80d9:goto L6b80d9;
case 0x6b80db:c.instructions+=3;goto B6b80db;
case 0x6b80dc:c.instructions+=2;goto B6b80dc;
case 0x6b80dd:c.instructions+=1;goto B6b80dd;
case 0x6b80df:goto L6b80df;
case 0x6b80e2:c.instructions+=3;goto B6b80e2;
case 0x6b80e7:c.instructions+=2;goto B6b80e7;
case 0x6b80e8:c.instructions+=1;goto B6b80e8;
case 0x6b80ed:goto L6b80ed;
case 0x6b80ef:c.instructions+=3;goto B6b80ef;
case 0x6b80f0:c.instructions+=2;goto B6b80f0;
case 0x6b80f1:c.instructions+=1;goto B6b80f1;
case 0x6b80f3:goto L6b80f3;
case 0x6b80f7:c.instructions+=1;goto B6b80f7;
case 0x6b80fe:goto L6b80fe;
case 0x6b8100:c.instructions+=2;goto B6b8100;
case 0x6b8101:c.instructions+=1;goto B6b8101;
case 0x6b8103:goto L6b8103;
case 0x6b8106:c.instructions+=3;goto B6b8106;
case 0x6b810b:c.instructions+=2;goto B6b810b;
case 0x6b810c:c.instructions+=1;goto B6b810c;
case 0x6b8111:goto L6b8111;
case 0x6b8113:c.instructions+=3;goto B6b8113;
case 0x6b8114:c.instructions+=2;goto B6b8114;
case 0x6b8115:c.instructions+=1;goto B6b8115;
case 0x6b8117:goto L6b8117;
case 0x6b8118:c.instructions+=6;goto B6b8118;
case 0x6b811b:c.instructions+=5;goto B6b811b;
case 0x6b811e:c.instructions+=4;goto B6b811e;
case 0x6b8120:c.instructions+=3;goto B6b8120;
case 0x6b8121:c.instructions+=2;goto B6b8121;
case 0x6b8124:c.instructions+=1;goto B6b8124;
case 0x6b8126:goto L6b8126;
case 0x6b812a:c.instructions+=1;goto B6b812a;
case 0x6b812c:goto L6b812c;
case 0x6b812f:c.instructions+=3;goto B6b812f;
case 0x6b8134:c.instructions+=2;goto B6b8134;
case 0x6b8135:c.instructions+=1;goto B6b8135;
case 0x6b813a:goto L6b813a;
case 0x6b813c:c.instructions+=3;goto B6b813c;
case 0x6b813d:c.instructions+=2;goto B6b813d;
case 0x6b813e:c.instructions+=1;goto B6b813e;
case 0x6b8140:goto L6b8140;
case 0x6b8141:c.instructions+=6;goto B6b8141;
case 0x6b8144:c.instructions+=5;goto B6b8144;
case 0x6b8147:c.instructions+=4;goto B6b8147;
case 0x6b8149:c.instructions+=3;goto B6b8149;
case 0x6b814a:c.instructions+=2;goto B6b814a;
case 0x6b814d:c.instructions+=1;goto B6b814d;
case 0x6b814f:goto L6b814f;
case 0x6b8152:c.instructions+=1;goto B6b8152;
case 0x6b8154:goto L6b8154;
case 0x6b8158:c.instructions+=2;goto B6b8158;
case 0x6b815a:c.instructions+=1;goto B6b815a;
case 0x6b815b:goto L6b815b;
case 0x6b815d:c.instructions+=2;goto B6b815d;
case 0x6b8160:c.instructions+=1;goto B6b8160;
case 0x6b8162:goto L6b8162;
case 0x6b8165:c.instructions+=1;goto B6b8165;
case 0x6b8167:goto L6b8167;
case 0x6b8169:c.instructions+=1;goto B6b8169;
case 0x6b816b:goto L6b816b;
case 0x6b816e:c.instructions+=6;goto B6b816e;
case 0x6b8171:c.instructions+=5;goto B6b8171;
case 0x6b8176:c.instructions+=4;goto B6b8176;
case 0x6b8177:c.instructions+=3;goto B6b8177;
case 0x6b817a:c.instructions+=2;goto B6b817a;
case 0x6b817d:c.instructions+=1;goto B6b817d;
case 0x6b8182:goto L6b8182;
case 0x6b8185:c.instructions+=1;goto B6b8185;
case 0x6b8187:goto L6b8187;
case 0x6b818a:c.instructions+=1;goto B6b818a;
case 0x6b818c:goto L6b818c;
case 0x6b818f:c.instructions+=9;goto B6b818f;
case 0x6b8192:c.instructions+=8;goto B6b8192;
case 0x6b8199:c.instructions+=7;goto B6b8199;
case 0x6b819c:c.instructions+=6;goto B6b819c;
case 0x6b819f:c.instructions+=5;goto B6b819f;
case 0x6b81a4:c.instructions+=4;goto B6b81a4;
case 0x6b81a9:c.instructions+=3;goto B6b81a9;
case 0x6b81ac:c.instructions+=2;goto B6b81ac;
case 0x6b81af:c.instructions+=1;goto B6b81af;
case 0x6b81b4:goto L6b81b4;
case 0x6b81b7:goto L6b81b7;
case 0x6b81bb:c.instructions+=1;goto B6b81bb;
case 0x6b81bd:goto L6b81bd;
case 0x6b81bf:c.instructions+=1;goto B6b81bf;
case 0x6b81c5:goto L6b81c5;
case 0x6b81c8:c.instructions+=3;goto B6b81c8;
case 0x6b81cd:c.instructions+=2;goto B6b81cd;
case 0x6b81d0:c.instructions+=1;goto B6b81d0;
case 0x6b81d6:goto L6b81d6;
case 0x6b81da:c.instructions+=1;goto B6b81da;
case 0x6b81e0:goto L6b81e0;
case 0x6b81e3:c.instructions+=7;goto B6b81e3;
case 0x6b81e9:c.instructions+=6;goto B6b81e9;
case 0x6b81ec:c.instructions+=5;goto B6b81ec;
case 0x6b81f1:c.instructions+=4;goto B6b81f1;
case 0x6b81f2:c.instructions+=3;goto B6b81f2;
case 0x6b81f5:c.instructions+=2;goto B6b81f5;
case 0x6b81f8:c.instructions+=1;goto B6b81f8;
case 0x6b81fd:goto L6b81fd;
case 0x6b81ff:c.instructions+=3;goto B6b81ff;
case 0x6b8202:c.instructions+=2;goto B6b8202;
case 0x6b8203:c.instructions+=1;goto B6b8203;
case 0x6b8208:goto L6b8208;
case 0x6b820a:c.instructions+=1;goto B6b820a;
case 0x6b8210:goto L6b8210;
case 0x6b8213:c.instructions+=3;goto B6b8213;
case 0x6b8218:c.instructions+=2;goto B6b8218;
case 0x6b8219:c.instructions+=1;goto B6b8219;
case 0x6b821e:goto L6b821e;
case 0x6b8220:c.instructions+=3;goto B6b8220;
case 0x6b8221:c.instructions+=2;goto B6b8221;
case 0x6b8222:c.instructions+=1;goto B6b8222;
case 0x6b8224:goto L6b8224;
case 0x6b8227:c.instructions+=6;goto B6b8227;
case 0x6b822a:c.instructions+=5;goto B6b822a;
case 0x6b822d:c.instructions+=4;goto B6b822d;
case 0x6b8234:c.instructions+=3;goto B6b8234;
case 0x6b8236:c.instructions+=2;goto B6b8236;
case 0x6b8237:c.instructions+=1;goto B6b8237;
case 0x6b8239:goto L6b8239;
case 0x6b823c:c.instructions+=3;goto B6b823c;
case 0x6b8241:c.instructions+=2;goto B6b8241;
case 0x6b8242:c.instructions+=1;goto B6b8242;
case 0x6b8247:goto L6b8247;
case 0x6b8248:c.instructions+=4;goto B6b8248;
case 0x6b824a:c.instructions+=3;goto B6b824a;
case 0x6b824c:c.instructions+=2;goto B6b824c;
case 0x6b824d:c.instructions+=1;goto B6b824d;
case 0x6b824f:goto L6b824f;
case 0x6b8256:c.instructions+=2;goto B6b8256;
case 0x6b8257:c.instructions+=1;goto B6b8257;
case 0x6b8259:goto L6b8259;
case 0x6b825d:c.instructions+=1;goto B6b825d;
case 0x6b825e:goto L6b825e;
case 0x6b8260:c.instructions+=1;goto B6b8260;
case 0x6b8262:goto L6b8262;
case 0x6b8266:c.instructions+=1;goto B6b8266;
case 0x6b8268:goto L6b8268;
case 0x6b826c:c.instructions+=1;goto B6b826c;
case 0x6b826e:goto L6b826e;
case 0x6b8271:c.instructions+=6;goto B6b8271;
case 0x6b8274:c.instructions+=5;goto B6b8274;
case 0x6b8279:c.instructions+=4;goto B6b8279;
case 0x6b827a:c.instructions+=3;goto B6b827a;
case 0x6b827d:c.instructions+=2;goto B6b827d;
case 0x6b8280:c.instructions+=1;goto B6b8280;
case 0x6b8285:goto L6b8285;
case 0x6b8288:goto L6b8288;
case 0x6b828c:c.instructions+=1;goto B6b828c;
case 0x6b828e:goto L6b828e;
case 0x6b8292:c.instructions+=1;goto B6b8292;
case 0x6b8298:goto L6b8298;
case 0x6b829b:c.instructions+=5;goto B6b829b;
case 0x6b829e:c.instructions+=4;goto B6b829e;
case 0x6b82a3:c.instructions+=3;goto B6b82a3;
case 0x6b82a4:c.instructions+=2;goto B6b82a4;
case 0x6b82a7:c.instructions+=1;goto B6b82a7;
case 0x6b82aa:goto L6b82aa;
case 0x6b82af:goto L6b82af;
case 0x6b82b2:goto L6b82b2;
case 0x6b82b6:c.instructions+=1;goto B6b82b6;
case 0x6b82bc:goto L6b82bc;
case 0x6b82c0:c.instructions+=1;goto B6b82c0;
case 0x6b82c2:goto L6b82c2;
case 0x6b82c6:c.instructions+=1;goto B6b82c6;
case 0x6b82c8:goto L6b82c8;
case 0x6b82cc:c.instructions+=1;goto B6b82cc;
case 0x6b82ce:goto L6b82ce;
case 0x6b82d1:c.instructions+=4;goto B6b82d1;
case 0x6b82d7:c.instructions+=3;goto B6b82d7;
case 0x6b82dc:c.instructions+=2;goto B6b82dc;
case 0x6b82e1:c.instructions+=1;goto B6b82e1;
case 0x6b82e3:goto L6b82e3;
case 0x6b82e9:c.instructions+=2;goto B6b82e9;
case 0x6b82ec:c.instructions+=1;goto B6b82ec;
case 0x6b82ee:goto L6b82ee;
case 0x6b82f0:c.instructions+=5;goto B6b82f0;
case 0x6b82f2:c.instructions+=4;goto B6b82f2;
case 0x6b82f4:c.instructions+=3;goto B6b82f4;
case 0x6b82f9:c.instructions+=2;goto B6b82f9;
case 0x6b82fb:c.instructions+=1;goto B6b82fb;
case 0x6b8300:goto L6b8300;
case 0x6b8302:goto L6b8302;
case 0x6b8304:c.instructions+=2;goto B6b8304;
case 0x6b8307:c.instructions+=1;goto B6b8307;
case 0x6b8309:goto L6b8309;
case 0x6b830e:c.instructions+=1;goto B6b830e;
case 0x6b8313:goto L6b8313;
case 0x6b8316:c.instructions+=6;goto B6b8316;
case 0x6b831a:c.instructions+=5;goto B6b831a;
case 0x6b831b:c.instructions+=4;goto B6b831b;
case 0x6b8322:c.instructions+=3;goto B6b8322;
case 0x6b8325:c.instructions+=2;goto B6b8325;
case 0x6b8328:c.instructions+=1;goto B6b8328;
case 0x6b832a:goto L6b832a;
case 0x6b832d:goto L6b832d;
case 0x6b8330:c.instructions+=2;goto B6b8330;
case 0x6b8333:c.instructions+=1;goto B6b8333;
case 0x6b8335:goto L6b8335;
case 0x6b8339:c.instructions+=1;goto B6b8339;
case 0x6b833b:goto L6b833b;
case 0x6b8341:c.instructions+=2;goto B6b8341;
case 0x6b8344:c.instructions+=1;goto B6b8344;
case 0x6b8346:goto L6b8346;
case 0x6b8347:c.instructions+=8;goto B6b8347;
case 0x6b834c:c.instructions+=7;goto B6b834c;
case 0x6b834e:c.instructions+=6;goto B6b834e;
case 0x6b834f:c.instructions+=5;goto B6b834f;
case 0x6b8350:c.instructions+=4;goto B6b8350;
case 0x6b8352:c.instructions+=3;goto B6b8352;
case 0x6b8355:c.instructions+=2;goto B6b8355;
case 0x6b8356:c.instructions+=1;goto B6b8356;
case 0x6b835b:goto L6b835b;
case 0x6b835e:goto L6b835e;
case 0x6b8362:c.instructions+=1;goto B6b8362;
case 0x6b8364:goto L6b8364;
case 0x6b8369:c.instructions+=4;goto B6b8369;
case 0x6b836b:c.instructions+=3;goto B6b836b;
case 0x6b836e:c.instructions+=2;goto B6b836e;
case 0x6b8370:c.instructions+=1;goto B6b8370;
case 0x6b8373:goto L6b8373;
case 0x6b8377:c.instructions+=1;goto B6b8377;
case 0x6b8379:goto L6b8379;
case 0x6b837b:c.instructions+=1;goto B6b837b;
case 0x6b837c:goto L6b837c;
case 0x6b837f:c.instructions+=2;goto B6b837f;
case 0x6b8385:c.instructions+=1;goto B6b8385;
case 0x6b8387:goto L6b8387;
case 0x6b8389:c.instructions+=1;goto B6b8389;
case 0x6b838a:goto L6b838a;
case 0x6b838d:c.instructions+=8;goto B6b838d;
case 0x6b8392:c.instructions+=7;goto B6b8392;
case 0x6b8395:c.instructions+=6;goto B6b8395;
case 0x6b8397:c.instructions+=5;goto B6b8397;
case 0x6b839a:c.instructions+=4;goto B6b839a;
case 0x6b839c:c.instructions+=3;goto B6b839c;
case 0x6b839e:c.instructions+=2;goto B6b839e;
case 0x6b83a0:c.instructions+=1;goto B6b83a0;
case 0x6b83a5:goto L6b83a5;
case 0x6b83a6:c.instructions+=4;goto B6b83a6;
case 0x6b83a7:c.instructions+=3;goto B6b83a7;
case 0x6b83a8:c.instructions+=2;goto B6b83a8;
case 0x6b83a9:c.instructions+=1;goto B6b83a9;
case 0x6b83ac:goto L6b83ac;
case 0x6b83ae:c.instructions+=12;goto B6b83ae;
case 0x6b83af:c.instructions+=11;goto B6b83af;
case 0x6b83b1:c.instructions+=10;goto B6b83b1;
case 0x6b83b4:c.instructions+=9;goto B6b83b4;
case 0x6b83b7:c.instructions+=8;goto B6b83b7;
case 0x6b83bb:c.instructions+=7;goto B6b83bb;
case 0x6b83be:c.instructions+=6;goto B6b83be;
case 0x6b83c0:c.instructions+=5;goto B6b83c0;
case 0x6b83c2:c.instructions+=4;goto B6b83c2;
case 0x6b83c7:c.instructions+=3;goto B6b83c7;
case 0x6b83c8:c.instructions+=2;goto B6b83c8;
case 0x6b83ca:c.instructions+=1;goto B6b83ca;
case 0x6b83cc:goto L6b83cc;
case 0x6b83ce:c.instructions+=1;goto B6b83ce;
case 0x6b83d0:goto L6b83d0;
case 0x6b83d3:c.instructions+=4;goto B6b83d3;
case 0x6b83d6:c.instructions+=3;goto B6b83d6;
case 0x6b83d9:c.instructions+=2;goto B6b83d9;
case 0x6b83db:c.instructions+=1;goto B6b83db;
case 0x6b83dd:goto L6b83dd;
case 0x6b83e0:c.instructions+=1;goto B6b83e0;
case 0x6b83e2:goto L6b83e2;
case 0x6b83e5:c.instructions+=1;goto B6b83e5;
case 0x6b83e7:goto L6b83e7;
case 0x6b83e9:c.instructions+=1;goto B6b83e9;
case 0x6b83eb:goto L6b83eb;
case 0x6b83ee:c.instructions+=4;goto B6b83ee;
case 0x6b83f4:c.instructions+=3;goto B6b83f4;
case 0x6b83f7:c.instructions+=2;goto B6b83f7;
case 0x6b83f9:c.instructions+=1;goto B6b83f9;
case 0x6b83fb:goto L6b83fb;
case 0x6b83fd:goto L6b83fd;
case 0x6b83ff:c.instructions+=1;goto B6b83ff;
case 0x6b8401:goto L6b8401;
case 0x6b8406:goto L6b8406;
case 0x6b8407:c.instructions+=1;goto B6b8407;
case 0x6b840a:goto L6b840a;
case 0x6b840c:c.instructions+=8;goto B6b840c;
case 0x6b840d:c.instructions+=7;goto B6b840d;
case 0x6b840f:c.instructions+=6;goto B6b840f;
case 0x6b8415:c.instructions+=5;goto B6b8415;
case 0x6b8418:c.instructions+=4;goto B6b8418;
case 0x6b8419:c.instructions+=3;goto B6b8419;
case 0x6b841b:c.instructions+=2;goto B6b841b;
case 0x6b841d:c.instructions+=1;goto B6b841d;
case 0x6b841f:goto L6b841f;
case 0x6b8421:c.instructions+=2;goto B6b8421;
case 0x6b8422:c.instructions+=1;goto B6b8422;
case 0x6b8427:goto L6b8427;
case 0x6b8429:c.instructions+=4;goto B6b8429;
case 0x6b842a:c.instructions+=3;goto B6b842a;
case 0x6b842c:c.instructions+=2;goto B6b842c;
case 0x6b8432:c.instructions+=1;goto B6b8432;
case 0x6b8434:goto L6b8434;
case 0x6b8436:c.instructions+=1;goto B6b8436;
case 0x6b843b:goto L6b843b;
case 0x6b8441:c.instructions+=1;goto B6b8441;
case 0x6b8443:goto L6b8443;
case 0x6b8448:c.instructions+=8;goto B6b8448;
case 0x6b844b:c.instructions+=7;goto B6b844b;
case 0x6b844e:c.instructions+=6;goto B6b844e;
case 0x6b8450:c.instructions+=5;goto B6b8450;
case 0x6b8453:c.instructions+=4;goto B6b8453;
case 0x6b8454:c.instructions+=3;goto B6b8454;
case 0x6b8457:c.instructions+=2;goto B6b8457;
case 0x6b845a:c.instructions+=1;goto B6b845a;
case 0x6b8460:goto L6b8460;
case 0x6b8466:c.instructions+=22;goto B6b8466;
case 0x6b846c:c.instructions+=21;goto B6b846c;
case 0x6b846f:c.instructions+=20;goto B6b846f;
case 0x6b8475:c.instructions+=19;goto B6b8475;
case 0x6b8479:c.instructions+=18;goto B6b8479;
case 0x6b847c:c.instructions+=17;goto B6b847c;
case 0x6b8480:c.instructions+=16;goto B6b8480;
case 0x6b8483:c.instructions+=15;goto B6b8483;
case 0x6b8487:c.instructions+=14;goto B6b8487;
case 0x6b848a:c.instructions+=13;goto B6b848a;
case 0x6b848d:c.instructions+=12;goto B6b848d;
case 0x6b8491:c.instructions+=11;goto B6b8491;
case 0x6b8495:c.instructions+=10;goto B6b8495;
case 0x6b8497:c.instructions+=9;goto B6b8497;
case 0x6b8498:c.instructions+=8;goto B6b8498;
case 0x6b849f:c.instructions+=7;goto B6b849f;
case 0x6b84aa:c.instructions+=6;goto B6b84aa;
case 0x6b84b1:c.instructions+=5;goto B6b84b1;
case 0x6b84b3:c.instructions+=4;goto B6b84b3;
case 0x6b84b6:c.instructions+=3;goto B6b84b6;
case 0x6b84c1:c.instructions+=2;goto B6b84c1;
case 0x6b84c4:c.instructions+=1;goto B6b84c4;
case 0x6b84ca:goto L6b84ca;
case 0x6b84cd:c.instructions+=6;goto B6b84cd;
case 0x6b84d0:c.instructions+=5;goto B6b84d0;
case 0x6b84d3:c.instructions+=4;goto B6b84d3;
case 0x6b84d6:c.instructions+=3;goto B6b84d6;
case 0x6b84d9:c.instructions+=2;goto B6b84d9;
case 0x6b84dc:c.instructions+=1;goto B6b84dc;
case 0x6b84df:goto L6b84df;
case 0x6b84e1:c.instructions+=6;goto B6b84e1;
case 0x6b84e4:c.instructions+=5;goto B6b84e4;
case 0x6b84e7:c.instructions+=4;goto B6b84e7;
case 0x6b84eb:c.instructions+=3;goto B6b84eb;
case 0x6b84ed:c.instructions+=2;goto B6b84ed;
case 0x6b84f0:c.instructions+=1;goto B6b84f0;
case 0x6b84f2:goto L6b84f2;
case 0x6b84f5:c.instructions+=1;goto B6b84f5;
case 0x6b84f8:goto L6b84f8;
case 0x6b84fa:c.instructions+=4;goto B6b84fa;
case 0x6b84fd:c.instructions+=3;goto B6b84fd;
case 0x6b8500:c.instructions+=2;goto B6b8500;
case 0x6b8503:c.instructions+=1;goto B6b8503;
case 0x6b8505:goto L6b8505;
case 0x6b8508:c.instructions+=2;goto B6b8508;
case 0x6b850b:c.instructions+=1;goto B6b850b;
case 0x6b850d:goto L6b850d;
case 0x6b8510:c.instructions+=2;goto B6b8510;
case 0x6b8513:c.instructions+=1;goto B6b8513;
case 0x6b8515:goto L6b8515;
case 0x6b8518:c.instructions+=3;goto B6b8518;
case 0x6b851b:c.instructions+=2;goto B6b851b;
case 0x6b851f:c.instructions+=1;goto B6b851f;
case 0x6b8521:goto L6b8521;
case 0x6b8524:c.instructions+=3;goto B6b8524;
case 0x6b8527:c.instructions+=2;goto B6b8527;
case 0x6b852b:c.instructions+=1;goto B6b852b;
case 0x6b852d:goto L6b852d;
case 0x6b8530:c.instructions+=5;goto B6b8530;
case 0x6b8533:c.instructions+=4;goto B6b8533;
case 0x6b8535:c.instructions+=3;goto B6b8535;
case 0x6b8537:c.instructions+=2;goto B6b8537;
case 0x6b853a:c.instructions+=1;goto B6b853a;
case 0x6b853c:goto L6b853c;
case 0x6b853f:c.instructions+=6;goto B6b853f;
case 0x6b8542:c.instructions+=5;goto B6b8542;
case 0x6b8545:c.instructions+=4;goto B6b8545;
case 0x6b8548:c.instructions+=3;goto B6b8548;
case 0x6b854b:c.instructions+=2;goto B6b854b;
case 0x6b854e:c.instructions+=1;goto B6b854e;
case 0x6b8550:goto L6b8550;
case 0x6b8553:c.instructions+=2;goto B6b8553;
case 0x6b8556:c.instructions+=1;goto B6b8556;
case 0x6b855c:goto L6b855c;
case 0x6b8562:c.instructions+=2;goto B6b8562;
case 0x6b8564:c.instructions+=1;goto B6b8564;
case 0x6b8566:goto L6b8566;
case 0x6b856a:c.instructions+=1;goto B6b856a;
case 0x6b856c:goto L6b856c;
case 0x6b8572:c.instructions+=3;goto B6b8572;
case 0x6b8577:c.instructions+=2;goto B6b8577;
case 0x6b857c:c.instructions+=1;goto B6b857c;
case 0x6b857e:goto L6b857e;
case 0x6b8581:c.instructions+=2;goto B6b8581;
case 0x6b8585:c.instructions+=1;goto B6b8585;
case 0x6b8587:goto L6b8587;
case 0x6b858b:c.instructions+=1;goto B6b858b;
case 0x6b8591:goto L6b8591;
case 0x6b8597:c.instructions+=1;goto B6b8597;
case 0x6b8599:goto L6b8599;
case 0x6b859c:c.instructions+=4;goto B6b859c;
case 0x6b859f:c.instructions+=3;goto B6b859f;
case 0x6b85a2:c.instructions+=2;goto B6b85a2;
case 0x6b85a5:c.instructions+=1;goto B6b85a5;
case 0x6b85a7:goto L6b85a7;
case 0x6b85a9:c.instructions+=1;goto B6b85a9;
case 0x6b85ab:goto L6b85ab;
case 0x6b85ae:c.instructions+=1;goto B6b85ae;
case 0x6b85b0:goto L6b85b0;
case 0x6b85b2:c.instructions+=1;goto B6b85b2;
case 0x6b85b4:goto L6b85b4;
case 0x6b85ba:c.instructions+=1;goto B6b85ba;
case 0x6b85bc:goto L6b85bc;
case 0x6b85be:goto L6b85be;
case 0x6b85c1:c.instructions+=2;goto B6b85c1;
case 0x6b85c4:c.instructions+=1;goto B6b85c4;
case 0x6b85c6:goto L6b85c6;
case 0x6b85cc:c.instructions+=2;goto B6b85cc;
case 0x6b85ce:c.instructions+=1;goto B6b85ce;
case 0x6b85d0:goto L6b85d0;
case 0x6b85d6:c.instructions+=3;goto B6b85d6;
case 0x6b85dc:c.instructions+=2;goto B6b85dc;
case 0x6b85e2:c.instructions+=1;goto B6b85e2;
case 0x6b85e4:goto L6b85e4;
case 0x6b85e7:c.instructions+=3;goto B6b85e7;
case 0x6b85ea:c.instructions+=2;goto B6b85ea;
case 0x6b85ec:c.instructions+=1;goto B6b85ec;
case 0x6b85ee:goto L6b85ee;
case 0x6b85f0:c.instructions+=3;goto B6b85f0;
case 0x6b85f5:c.instructions+=2;goto B6b85f5;
case 0x6b85fa:c.instructions+=1;goto B6b85fa;
case 0x6b85fc:goto L6b85fc;
case 0x6b8601:c.instructions+=1;goto B6b8601;
case 0x6b8603:goto L6b8603;
case 0x6b8608:c.instructions+=1;goto B6b8608;
case 0x6b860a:goto L6b860a;
case 0x6b860f:c.instructions+=1;goto B6b860f;
case 0x6b8611:goto L6b8611;
case 0x6b8614:c.instructions+=2;goto B6b8614;
case 0x6b8618:c.instructions+=1;goto B6b8618;
case 0x6b861a:goto L6b861a;
case 0x6b861e:c.instructions+=1;goto B6b861e;
case 0x6b8620:goto L6b8620;
case 0x6b8622:goto L6b8622;
case 0x6b8625:c.instructions+=1;goto B6b8625;
case 0x6b8627:goto L6b8627;
case 0x6b8629:c.instructions+=6;goto B6b8629;
case 0x6b862c:c.instructions+=5;goto B6b862c;
case 0x6b8630:c.instructions+=4;goto B6b8630;
case 0x6b8632:c.instructions+=3;goto B6b8632;
case 0x6b8634:c.instructions+=2;goto B6b8634;
case 0x6b863b:c.instructions+=1;goto B6b863b;
case 0x6b863d:goto L6b863d;
case 0x6b8640:c.instructions+=6;goto B6b8640;
case 0x6b8643:c.instructions+=5;goto B6b8643;
case 0x6b8644:c.instructions+=4;goto B6b8644;
case 0x6b8647:c.instructions+=3;goto B6b8647;
case 0x6b864a:c.instructions+=2;goto B6b864a;
case 0x6b864d:c.instructions+=1;goto B6b864d;
case 0x6b8653:goto L6b8653;
case 0x6b8655:goto L6b8655;
case 0x6b8656:goto L6b8656;
case 0x6b8657:goto L6b8657;
case 0x6b8658:c.instructions+=2;goto B6b8658;
case 0x6b8659:c.instructions+=1;goto B6b8659;
case 0x6b865c:goto L6b865c;
case 0x6b865e:c.instructions+=2;goto B6b865e;
case 0x6b865f:c.instructions+=1;goto B6b865f;
case 0x6b8661:goto L6b8661;
case 0x6b8664:c.instructions+=2;goto B6b8664;
case 0x6b8666:c.instructions+=1;goto B6b8666;
case 0x6b8668:goto L6b8668;
case 0x6b866a:c.instructions+=1;goto B6b866a;
case 0x6b866c:goto L6b866c;
case 0x6b866e:c.instructions+=9;goto B6b866e;
case 0x6b866f:c.instructions+=8;goto B6b866f;
case 0x6b8671:c.instructions+=7;goto B6b8671;
case 0x6b8674:c.instructions+=6;goto B6b8674;
case 0x6b8675:c.instructions+=5;goto B6b8675;
case 0x6b8676:c.instructions+=4;goto B6b8676;
case 0x6b8679:c.instructions+=3;goto B6b8679;
case 0x6b867b:c.instructions+=2;goto B6b867b;
case 0x6b867e:c.instructions+=1;goto B6b867e;
case 0x6b8680:goto L6b8680;
case 0x6b8683:goto L6b8683;
case 0x6b8686:c.instructions+=2;goto B6b8686;
case 0x6b8688:c.instructions+=1;goto B6b8688;
case 0x6b868e:goto L6b868e;
case 0x6b8690:c.instructions+=2;goto B6b8690;
case 0x6b8693:c.instructions+=1;goto B6b8693;
case 0x6b8695:goto L6b8695;
case 0x6b8697:c.instructions+=2;goto B6b8697;
case 0x6b8699:c.instructions+=1;goto B6b8699;
case 0x6b869b:goto L6b869b;
case 0x6b869e:c.instructions+=3;goto B6b869e;
case 0x6b86a1:c.instructions+=2;goto B6b86a1;
case 0x6b86a3:c.instructions+=1;goto B6b86a3;
case 0x6b86a5:goto L6b86a5;
case 0x6b86a9:goto L6b86a9;
case 0x6b86aa:c.instructions+=2;goto B6b86aa;
case 0x6b86ac:c.instructions+=1;goto B6b86ac;
case 0x6b86ae:goto L6b86ae;
case 0x6b86b1:c.instructions+=4;goto B6b86b1;
case 0x6b86b3:c.instructions+=3;goto B6b86b3;
case 0x6b86b4:c.instructions+=2;goto B6b86b4;
case 0x6b86b6:c.instructions+=1;goto B6b86b6;
case 0x6b86bc:goto L6b86bc;
case 0x6b86bf:c.instructions+=3;goto B6b86bf;
case 0x6b86c2:c.instructions+=2;goto B6b86c2;
case 0x6b86c4:c.instructions+=1;goto B6b86c4;
case 0x6b86ca:goto L6b86ca;
case 0x6b86cd:c.instructions+=3;goto B6b86cd;
case 0x6b86cf:c.instructions+=2;goto B6b86cf;
case 0x6b86d1:c.instructions+=1;goto B6b86d1;
case 0x6b86d3:goto L6b86d3;
case 0x6b86d5:goto L6b86d5;
case 0x6b86d7:c.instructions+=1;goto B6b86d7;
case 0x6b86d9:goto L6b86d9;
case 0x6b86dc:c.instructions+=4;goto B6b86dc;
case 0x6b86dd:c.instructions+=3;goto B6b86dd;
case 0x6b86e0:c.instructions+=2;goto B6b86e0;
case 0x6b86e2:c.instructions+=1;goto B6b86e2;
case 0x6b86e4:goto L6b86e4;
case 0x6b86e8:c.instructions+=4;goto B6b86e8;
case 0x6b86e9:c.instructions+=3;goto B6b86e9;
case 0x6b86eb:c.instructions+=2;goto B6b86eb;
case 0x6b86ee:c.instructions+=1;goto B6b86ee;
case 0x6b86f4:goto L6b86f4;
case 0x6b86f6:c.instructions+=3;goto B6b86f6;
case 0x6b86f9:c.instructions+=2;goto B6b86f9;
case 0x6b86fc:c.instructions+=1;goto B6b86fc;
case 0x6b86fe:goto L6b86fe;
case 0x6b8701:c.instructions+=1;goto B6b8701;
case 0x6b8704:goto L6b8704;
case 0x6b8706:c.instructions+=4;goto B6b8706;
case 0x6b870b:c.instructions+=3;goto B6b870b;
case 0x6b870d:c.instructions+=2;goto B6b870d;
case 0x6b8710:c.instructions+=1;goto B6b8710;
case 0x6b8712:goto L6b8712;
case 0x6b8714:c.instructions+=3;goto B6b8714;
case 0x6b8716:c.instructions+=2;goto B6b8716;
case 0x6b8719:c.instructions+=1;goto B6b8719;
case 0x6b871b:goto L6b871b;
case 0x6b871d:c.instructions+=4;goto B6b871d;
case 0x6b871f:c.instructions+=3;goto B6b871f;
case 0x6b8721:c.instructions+=2;goto B6b8721;
case 0x6b8728:c.instructions+=1;goto B6b8728;
case 0x6b872a:goto L6b872a;
case 0x6b872d:c.instructions+=1;goto B6b872d;
case 0x6b8733:goto L6b8733;
case 0x6b8735:c.instructions+=3;goto B6b8735;
case 0x6b8737:c.instructions+=2;goto B6b8737;
case 0x6b873a:c.instructions+=1;goto B6b873a;
case 0x6b8740:goto L6b8740;
case 0x6b8743:c.instructions+=4;goto B6b8743;
case 0x6b8749:c.instructions+=3;goto B6b8749;
case 0x6b874e:c.instructions+=2;goto B6b874e;
case 0x6b8753:c.instructions+=1;goto B6b8753;
case 0x6b8755:goto L6b8755;
case 0x6b8757:c.instructions+=3;goto B6b8757;
case 0x6b8758:c.instructions+=2;goto B6b8758;
case 0x6b8759:c.instructions+=1;goto B6b8759;
case 0x6b875f:goto L6b875f;
case 0x6b8761:c.instructions+=1;goto B6b8761;
case 0x6b8767:goto L6b8767;
case 0x6b8769:c.instructions+=3;goto B6b8769;
case 0x6b876e:c.instructions+=2;goto B6b876e;
case 0x6b8773:c.instructions+=1;goto B6b8773;
case 0x6b8779:goto L6b8779;
case 0x6b877e:c.instructions+=1;goto B6b877e;
case 0x6b8784:goto L6b8784;
case 0x6b8789:c.instructions+=1;goto B6b8789;
case 0x6b878f:goto L6b878f;
case 0x6b8794:c.instructions+=1;goto B6b8794;
case 0x6b879a:goto L6b879a;
case 0x6b879f:c.instructions+=1;goto B6b879f;
case 0x6b87a5:goto L6b87a5;
case 0x6b87aa:c.instructions+=1;goto B6b87aa;
case 0x6b87b0:goto L6b87b0;
case 0x6b87b5:c.instructions+=1;goto B6b87b5;
case 0x6b87bb:goto L6b87bb;
case 0x6b87bd:c.instructions+=1;goto B6b87bd;
case 0x6b87c3:goto L6b87c3;
case 0x6b87c7:c.instructions+=2;goto B6b87c7;
case 0x6b87cb:c.instructions+=1;goto B6b87cb;
case 0x6b87cd:goto L6b87cd;
case 0x6b87d0:c.instructions+=5;goto B6b87d0;
case 0x6b87d3:c.instructions+=4;goto B6b87d3;
case 0x6b87d6:c.instructions+=3;goto B6b87d6;
case 0x6b87d9:c.instructions+=2;goto B6b87d9;
case 0x6b87dc:c.instructions+=1;goto B6b87dc;
case 0x6b87df:goto L6b87df;
case 0x6b87e2:c.instructions+=4;goto B6b87e2;
case 0x6b87e4:c.instructions+=3;goto B6b87e4;
case 0x6b87e7:c.instructions+=2;goto B6b87e7;
case 0x6b87eb:c.instructions+=1;goto B6b87eb;
case 0x6b87ed:goto L6b87ed;
case 0x6b87f4:goto L6b87f4;
case 0x6b87f8:c.instructions+=1;goto B6b87f8;
case 0x6b87fa:goto L6b87fa;
case 0x6b87fd:c.instructions+=3;goto B6b87fd;
case 0x6b8800:c.instructions+=2;goto B6b8800;
case 0x6b8803:c.instructions+=1;goto B6b8803;
case 0x6b8806:goto L6b8806;
case 0x6b8809:c.instructions+=4;goto B6b8809;
case 0x6b880b:c.instructions+=3;goto B6b880b;
case 0x6b880e:c.instructions+=2;goto B6b880e;
case 0x6b8811:c.instructions+=1;goto B6b8811;
case 0x6b8813:goto L6b8813;
case 0x6b8815:c.instructions+=1;goto B6b8815;
case 0x6b8817:goto L6b8817;
case 0x6b881e:goto L6b881e;
case 0x6b8822:c.instructions+=2;goto B6b8822;
case 0x6b8825:c.instructions+=1;goto B6b8825;
case 0x6b8827:goto L6b8827;
case 0x6b882a:goto L6b882a;
case 0x6b882e:c.instructions+=2;goto B6b882e;
case 0x6b8831:c.instructions+=1;goto B6b8831;
case 0x6b8833:goto L6b8833;
case 0x6b8837:c.instructions+=2;goto B6b8837;
case 0x6b883b:c.instructions+=1;goto B6b883b;
case 0x6b883d:goto L6b883d;
case 0x6b8841:c.instructions+=1;goto B6b8841;
case 0x6b8843:goto L6b8843;
case 0x6b8846:c.instructions+=7;goto B6b8846;
case 0x6b8849:c.instructions+=6;goto B6b8849;
case 0x6b884c:c.instructions+=5;goto B6b884c;
case 0x6b884f:c.instructions+=4;goto B6b884f;
case 0x6b8852:c.instructions+=3;goto B6b8852;
case 0x6b8855:c.instructions+=2;goto B6b8855;
case 0x6b8858:c.instructions+=1;goto B6b8858;
case 0x6b885b:goto L6b885b;
case 0x6b885d:c.instructions+=3;goto B6b885d;
case 0x6b8860:c.instructions+=2;goto B6b8860;
case 0x6b8863:c.instructions+=1;goto B6b8863;
case 0x6b8865:goto L6b8865;
case 0x6b8867:c.instructions+=1;goto B6b8867;
case 0x6b8869:goto L6b8869;
case 0x6b8870:goto L6b8870;
case 0x6b8873:c.instructions+=2;goto B6b8873;
case 0x6b8876:c.instructions+=1;goto B6b8876;
case 0x6b8878:goto L6b8878;
case 0x6b887b:goto L6b887b;
case 0x6b887e:c.instructions+=3;goto B6b887e;
case 0x6b8881:c.instructions+=2;goto B6b8881;
case 0x6b8884:c.instructions+=1;goto B6b8884;
case 0x6b8886:goto L6b8886;
case 0x6b888a:c.instructions+=1;goto B6b888a;
case 0x6b888c:goto L6b888c;
case 0x6b8890:c.instructions+=1;goto B6b8890;
case 0x6b8892:goto L6b8892;
case 0x6b8895:c.instructions+=6;goto B6b8895;
case 0x6b8898:c.instructions+=5;goto B6b8898;
case 0x6b889a:c.instructions+=4;goto B6b889a;
case 0x6b889d:c.instructions+=3;goto B6b889d;
case 0x6b88a0:c.instructions+=2;goto B6b88a0;
case 0x6b88a4:c.instructions+=1;goto B6b88a4;
case 0x6b88a6:goto L6b88a6;
case 0x6b88aa:c.instructions+=1;goto B6b88aa;
case 0x6b88ac:goto L6b88ac;
case 0x6b88b0:c.instructions+=1;goto B6b88b0;
case 0x6b88b2:goto L6b88b2;
case 0x6b88b9:c.instructions+=1;goto B6b88b9;
case 0x6b88bb:goto L6b88bb;
case 0x6b88c2:goto L6b88c2;
case 0x6b88c3:goto L6b88c3;
case 0x6b88c6:goto L6b88c6;
case 0x6b88c7:c.instructions+=3;goto B6b88c7;
case 0x6b88ca:c.instructions+=2;goto B6b88ca;
case 0x6b88cc:c.instructions+=1;goto B6b88cc;
case 0x6b88d2:goto L6b88d2;
case 0x6b88d5:goto L6b88d5;
case 0x6b88d7:c.instructions+=2;goto B6b88d7;
case 0x6b88d8:c.instructions+=1;goto B6b88d8;
case 0x6b88da:goto L6b88da;
case 0x6b88dc:c.instructions+=1;goto B6b88dc;
case 0x6b88de:goto L6b88de;
case 0x6b88e0:goto L6b88e0;
case 0x6b88e1:c.instructions+=4;goto B6b88e1;
case 0x6b88e3:c.instructions+=3;goto B6b88e3;
case 0x6b88e4:c.instructions+=2;goto B6b88e4;
case 0x6b88e5:c.instructions+=1;goto B6b88e5;
case 0x6b88e8:goto L6b88e8;
case 0x6b88ea:c.instructions+=8;goto B6b88ea;
case 0x6b88eb:c.instructions+=7;goto B6b88eb;
case 0x6b88ed:c.instructions+=6;goto B6b88ed;
case 0x6b88f3:c.instructions+=5;goto B6b88f3;
case 0x6b88f6:c.instructions+=4;goto B6b88f6;
case 0x6b88f7:c.instructions+=3;goto B6b88f7;
case 0x6b88f9:c.instructions+=2;goto B6b88f9;
case 0x6b88fb:c.instructions+=1;goto B6b88fb;
case 0x6b88fd:goto L6b88fd;
case 0x6b88ff:c.instructions+=2;goto B6b88ff;
case 0x6b8900:c.instructions+=1;goto B6b8900;
case 0x6b8905:goto L6b8905;
case 0x6b8907:c.instructions+=2;goto B6b8907;
case 0x6b890c:c.instructions+=1;goto B6b890c;
case 0x6b890e:goto L6b890e;
case 0x6b8910:c.instructions+=1;goto B6b8910;
case 0x6b8915:goto L6b8915;
case 0x6b8916:c.instructions+=33;goto B6b8916;
case 0x6b8917:c.instructions+=32;goto B6b8917;
case 0x6b891c:c.instructions+=31;goto B6b891c;
case 0x6b891e:c.instructions+=30;goto B6b891e;
case 0x6b8921:c.instructions+=29;goto B6b8921;
case 0x6b8924:c.instructions+=28;goto B6b8924;
case 0x6b8926:c.instructions+=27;goto B6b8926;
case 0x6b8929:c.instructions+=26;goto B6b8929;
case 0x6b892b:c.instructions+=25;goto B6b892b;
case 0x6b892f:c.instructions+=24;goto B6b892f;
case 0x6b8932:c.instructions+=23;goto B6b8932;
case 0x6b8935:c.instructions+=22;goto B6b8935;
case 0x6b8938:c.instructions+=21;goto B6b8938;
case 0x6b893b:c.instructions+=20;goto B6b893b;
case 0x6b893d:c.instructions+=19;goto B6b893d;
case 0x6b8940:c.instructions+=18;goto B6b8940;
case 0x6b8942:c.instructions+=17;goto B6b8942;
case 0x6b8944:c.instructions+=16;goto B6b8944;
case 0x6b894a:c.instructions+=15;goto B6b894a;
case 0x6b8950:c.instructions+=14;goto B6b8950;
case 0x6b8953:c.instructions+=13;goto B6b8953;
case 0x6b8957:c.instructions+=12;goto B6b8957;
case 0x6b895a:c.instructions+=11;goto B6b895a;
case 0x6b895e:c.instructions+=10;goto B6b895e;
case 0x6b8961:c.instructions+=9;goto B6b8961;
case 0x6b8964:c.instructions+=8;goto B6b8964;
case 0x6b8969:c.instructions+=7;goto B6b8969;
case 0x6b8974:c.instructions+=6;goto B6b8974;
case 0x6b8977:c.instructions+=5;goto B6b8977;
case 0x6b8982:c.instructions+=4;goto B6b8982;
case 0x6b898d:c.instructions+=3;goto B6b898d;
case 0x6b898f:c.instructions+=2;goto B6b898f;
case 0x6b8992:c.instructions+=1;goto B6b8992;
case 0x6b8998:goto L6b8998;
case 0x6b899b:c.instructions+=12;goto B6b899b;
case 0x6b899f:c.instructions+=11;goto B6b899f;
case 0x6b89a2:c.instructions+=10;goto B6b89a2;
case 0x6b89a5:c.instructions+=9;goto B6b89a5;
case 0x6b89a7:c.instructions+=8;goto B6b89a7;
case 0x6b89aa:c.instructions+=7;goto B6b89aa;
case 0x6b89ad:c.instructions+=6;goto B6b89ad;
case 0x6b89af:c.instructions+=5;goto B6b89af;
case 0x6b89b2:c.instructions+=4;goto B6b89b2;
case 0x6b89b5:c.instructions+=3;goto B6b89b5;
case 0x6b89b7:c.instructions+=2;goto B6b89b7;
case 0x6b89ba:c.instructions+=1;goto B6b89ba;
case 0x6b89bd:goto L6b89bd;
case 0x6b89c0:c.instructions+=3;goto B6b89c0;
case 0x6b89c3:c.instructions+=2;goto B6b89c3;
case 0x6b89c6:c.instructions+=1;goto B6b89c6;
case 0x6b89c8:goto L6b89c8;
case 0x6b89cb:c.instructions+=4;goto B6b89cb;
case 0x6b89ce:c.instructions+=3;goto B6b89ce;
case 0x6b89d1:c.instructions+=2;goto B6b89d1;
case 0x6b89d4:c.instructions+=1;goto B6b89d4;
case 0x6b89d6:goto L6b89d6;
case 0x6b89d9:c.instructions+=2;goto B6b89d9;
case 0x6b89dc:c.instructions+=1;goto B6b89dc;
case 0x6b89df:goto L6b89df;
case 0x6b89e2:c.instructions+=8;goto B6b89e2;
case 0x6b89e5:c.instructions+=7;goto B6b89e5;
case 0x6b89e8:c.instructions+=6;goto B6b89e8;
case 0x6b89eb:c.instructions+=5;goto B6b89eb;
case 0x6b89ee:c.instructions+=4;goto B6b89ee;
case 0x6b89f0:c.instructions+=3;goto B6b89f0;
case 0x6b89f3:c.instructions+=2;goto B6b89f3;
case 0x6b89f6:c.instructions+=1;goto B6b89f6;
case 0x6b89f8:goto L6b89f8;
case 0x6b89fb:c.instructions+=2;goto B6b89fb;
case 0x6b89fe:c.instructions+=1;goto B6b89fe;
case 0x6b8a01:goto L6b8a01;
case 0x6b8a04:c.instructions+=1;goto B6b8a04;
case 0x6b8a06:goto L6b8a06;
case 0x6b8a09:c.instructions+=2;goto B6b8a09;
case 0x6b8a0c:c.instructions+=1;goto B6b8a0c;
case 0x6b8a0e:goto L6b8a0e;
case 0x6b8a11:c.instructions+=1;goto B6b8a11;
case 0x6b8a14:goto L6b8a14;
case 0x6b8a17:c.instructions+=4;goto B6b8a17;
case 0x6b8a1a:c.instructions+=3;goto B6b8a1a;
case 0x6b8a1d:c.instructions+=2;goto B6b8a1d;
case 0x6b8a20:c.instructions+=1;goto B6b8a20;
case 0x6b8a22:goto L6b8a22;
case 0x6b8a25:c.instructions+=2;goto B6b8a25;
case 0x6b8a28:c.instructions+=1;goto B6b8a28;
case 0x6b8a2a:goto L6b8a2a;
case 0x6b8a2d:c.instructions+=2;goto B6b8a2d;
case 0x6b8a30:c.instructions+=1;goto B6b8a30;
case 0x6b8a32:goto L6b8a32;
case 0x6b8a35:c.instructions+=7;goto B6b8a35;
case 0x6b8a38:c.instructions+=6;goto B6b8a38;
case 0x6b8a3b:c.instructions+=5;goto B6b8a3b;
case 0x6b8a3e:c.instructions+=4;goto B6b8a3e;
case 0x6b8a41:c.instructions+=3;goto B6b8a41;
case 0x6b8a44:c.instructions+=2;goto B6b8a44;
case 0x6b8a47:c.instructions+=1;goto B6b8a47;
case 0x6b8a49:goto L6b8a49;
case 0x6b8a4c:c.instructions+=2;goto B6b8a4c;
case 0x6b8a4f:c.instructions+=1;goto B6b8a4f;
case 0x6b8a55:goto L6b8a55;
case 0x6b8a5b:c.instructions+=2;goto B6b8a5b;
case 0x6b8a5d:c.instructions+=1;goto B6b8a5d;
case 0x6b8a5f:goto L6b8a5f;
case 0x6b8a63:c.instructions+=1;goto B6b8a63;
case 0x6b8a65:goto L6b8a65;
case 0x6b8a68:c.instructions+=2;goto B6b8a68;
case 0x6b8a6c:c.instructions+=1;goto B6b8a6c;
case 0x6b8a72:goto L6b8a72;
case 0x6b8a78:c.instructions+=2;goto B6b8a78;
case 0x6b8a7a:c.instructions+=1;goto B6b8a7a;
case 0x6b8a7c:goto L6b8a7c;
case 0x6b8a80:c.instructions+=1;goto B6b8a80;
case 0x6b8a82:goto L6b8a82;
case 0x6b8a88:c.instructions+=3;goto B6b8a88;
case 0x6b8a8d:c.instructions+=2;goto B6b8a8d;
case 0x6b8a92:c.instructions+=1;goto B6b8a92;
case 0x6b8a94:goto L6b8a94;
case 0x6b8a97:c.instructions+=2;goto B6b8a97;
case 0x6b8a9b:c.instructions+=1;goto B6b8a9b;
case 0x6b8a9d:goto L6b8a9d;
case 0x6b8a9f:c.instructions+=1;goto B6b8a9f;
case 0x6b8aa1:goto L6b8aa1;
case 0x6b8aa3:goto L6b8aa3;
case 0x6b8aa5:c.instructions+=6;goto B6b8aa5;
case 0x6b8aa8:c.instructions+=5;goto B6b8aa8;
case 0x6b8aac:c.instructions+=4;goto B6b8aac;
case 0x6b8aae:c.instructions+=3;goto B6b8aae;
case 0x6b8ab0:c.instructions+=2;goto B6b8ab0;
case 0x6b8ab7:c.instructions+=1;goto B6b8ab7;
case 0x6b8ab9:goto L6b8ab9;
case 0x6b8abc:c.instructions+=3;goto B6b8abc;
case 0x6b8abf:c.instructions+=2;goto B6b8abf;
case 0x6b8ac1:c.instructions+=1;goto B6b8ac1;
case 0x6b8ac3:goto L6b8ac3;
case 0x6b8ac6:c.instructions+=1;goto B6b8ac6;
case 0x6b8ac8:goto L6b8ac8;
case 0x6b8acb:c.instructions+=2;goto B6b8acb;
case 0x6b8acf:c.instructions+=1;goto B6b8acf;
case 0x6b8ad1:goto L6b8ad1;
case 0x6b8ad4:c.instructions+=5;goto B6b8ad4;
case 0x6b8ad7:c.instructions+=4;goto B6b8ad7;
case 0x6b8adb:c.instructions+=3;goto B6b8adb;
case 0x6b8add:c.instructions+=2;goto B6b8add;
case 0x6b8adf:c.instructions+=1;goto B6b8adf;
case 0x6b8ae6:goto L6b8ae6;
case 0x6b8ae8:goto L6b8ae8;
case 0x6b8aeb:c.instructions+=8;goto B6b8aeb;
case 0x6b8aee:c.instructions+=7;goto B6b8aee;
case 0x6b8af1:c.instructions+=6;goto B6b8af1;
case 0x6b8af4:c.instructions+=5;goto B6b8af4;
case 0x6b8af7:c.instructions+=4;goto B6b8af7;
case 0x6b8afa:c.instructions+=3;goto B6b8afa;
case 0x6b8afd:c.instructions+=2;goto B6b8afd;
case 0x6b8b00:c.instructions+=1;goto B6b8b00;
case 0x6b8b06:goto L6b8b06;
case 0x6b8b08:goto L6b8b08;
case 0x6b8b09:c.instructions+=1;goto B6b8b09;
case 0x6b8b0a:goto L6b8b0a;
case 0x6b8b0b:c.instructions+=2;goto B6b8b0b;
case 0x6b8b0c:c.instructions+=1;goto B6b8b0c;
case 0x6b8b0f:goto L6b8b0f;
case 0x6b8b11:c.instructions+=2;goto B6b8b11;
case 0x6b8b12:c.instructions+=1;goto B6b8b12;
case 0x6b8b14:goto L6b8b14;
case 0x6b8b16:c.instructions+=14;goto B6b8b16;
case 0x6b8b17:c.instructions+=13;goto B6b8b17;
case 0x6b8b19:c.instructions+=12;goto B6b8b19;
case 0x6b8b1c:c.instructions+=11;goto B6b8b1c;
case 0x6b8b1f:c.instructions+=10;goto B6b8b1f;
case 0x6b8b20:c.instructions+=9;goto B6b8b20;
case 0x6b8b22:c.instructions+=8;goto B6b8b22;
case 0x6b8b24:c.instructions+=7;goto B6b8b24;
case 0x6b8b25:c.instructions+=6;goto B6b8b25;
case 0x6b8b27:c.instructions+=5;goto B6b8b27;
case 0x6b8b28:c.instructions+=4;goto B6b8b28;
case 0x6b8b2e:c.instructions+=3;goto B6b8b2e;
case 0x6b8b2f:c.instructions+=2;goto B6b8b2f;
case 0x6b8b32:c.instructions+=1;goto B6b8b32;
case 0x6b8b34:goto L6b8b34;
case 0x6b8b37:c.instructions+=1;goto B6b8b37;
case 0x6b8b39:goto L6b8b39;
case 0x6b8b3f:c.instructions+=1;goto B6b8b3f;
case 0x6b8b41:goto L6b8b41;
case 0x6b8b45:c.instructions+=1;goto B6b8b45;
case 0x6b8b46:goto L6b8b46;
case 0x6b8b4c:c.instructions+=1;goto B6b8b4c;
case 0x6b8b4e:goto L6b8b4e;
case 0x6b8b56:c.instructions+=1;goto B6b8b56;
case 0x6b8b57:goto L6b8b57;
case 0x6b8b5d:c.instructions+=1;goto B6b8b5d;
case 0x6b8b5f:goto L6b8b5f;
case 0x6b8b67:c.instructions+=1;goto B6b8b67;
case 0x6b8b68:goto L6b8b68;
case 0x6b8b6b:c.instructions+=2;goto B6b8b6b;
case 0x6b8b6d:c.instructions+=1;goto B6b8b6d;
case 0x6b8b6f:goto L6b8b6f;
case 0x6b8b71:goto L6b8b71;
case 0x6b8b74:c.instructions+=8;goto B6b8b74;
case 0x6b8b77:c.instructions+=7;goto B6b8b77;
case 0x6b8b78:c.instructions+=6;goto B6b8b78;
case 0x6b8b79:c.instructions+=5;goto B6b8b79;
case 0x6b8b7a:c.instructions+=4;goto B6b8b7a;
case 0x6b8b7c:c.instructions+=3;goto B6b8b7c;
case 0x6b8b7e:c.instructions+=2;goto B6b8b7e;
case 0x6b8b7f:c.instructions+=1;goto B6b8b7f;
case 0x6b8b81:goto L6b8b81;
case 0x6b8b84:c.instructions+=3;goto B6b8b84;
case 0x6b8b87:c.instructions+=2;goto B6b8b87;
case 0x6b8b8a:c.instructions+=1;goto B6b8b8a;
case 0x6b8b8c:goto L6b8b8c;
case 0x6b8b90:c.instructions+=8;goto B6b8b90;
case 0x6b8b93:c.instructions+=7;goto B6b8b93;
case 0x6b8b97:c.instructions+=6;goto B6b8b97;
case 0x6b8b9a:c.instructions+=5;goto B6b8b9a;
case 0x6b8b9d:c.instructions+=4;goto B6b8b9d;
case 0x6b8b9e:c.instructions+=3;goto B6b8b9e;
case 0x6b8ba0:c.instructions+=2;goto B6b8ba0;
case 0x6b8ba4:c.instructions+=1;goto B6b8ba4;
case 0x6b8ba6:goto L6b8ba6;
case 0x6b8ba9:goto L6b8ba9;
case 0x6b8baf:c.instructions+=3;goto B6b8baf;
case 0x6b8bb4:c.instructions+=2;goto B6b8bb4;
case 0x6b8bb9:c.instructions+=1;goto B6b8bb9;
case 0x6b8bbb:goto L6b8bbb;
case 0x6b8bc0:c.instructions+=2;goto B6b8bc0;
case 0x6b8bc2:c.instructions+=1;goto B6b8bc2;
case 0x6b8bc4:goto L6b8bc4;
case 0x6b8bc7:c.instructions+=4;goto B6b8bc7;
case 0x6b8bc8:c.instructions+=3;goto B6b8bc8;
case 0x6b8bcb:c.instructions+=2;goto B6b8bcb;
case 0x6b8bcc:c.instructions+=1;goto B6b8bcc;
case 0x6b8bd1:goto L6b8bd1;
case 0x6b8bd3:c.instructions+=1;goto B6b8bd3;
case 0x6b8bd5:goto L6b8bd5;
case 0x6b8bd6:c.instructions+=3;goto B6b8bd6;
case 0x6b8bd9:c.instructions+=2;goto B6b8bd9;
case 0x6b8bdc:c.instructions+=1;goto B6b8bdc;
case 0x6b8bde:goto L6b8bde;
case 0x6b8be0:goto L6b8be0;
case 0x6b8be3:c.instructions+=2;goto B6b8be3;
case 0x6b8be5:c.instructions+=1;goto B6b8be5;
case 0x6b8be7:goto L6b8be7;
case 0x6b8bea:c.instructions+=6;goto B6b8bea;
case 0x6b8bf0:c.instructions+=5;goto B6b8bf0;
case 0x6b8bf5:c.instructions+=4;goto B6b8bf5;
case 0x6b8bfa:c.instructions+=3;goto B6b8bfa;
case 0x6b8bfd:c.instructions+=2;goto B6b8bfd;
case 0x6b8bfe:c.instructions+=1;goto B6b8bfe;
case 0x6b8c03:goto L6b8c03;
case 0x6b8c06:c.instructions+=2;goto B6b8c06;
case 0x6b8c0b:c.instructions+=1;goto B6b8c0b;
case 0x6b8c0d:goto L6b8c0d;
case 0x6b8c12:c.instructions+=5;goto B6b8c12;
case 0x6b8c13:c.instructions+=4;goto B6b8c13;
case 0x6b8c16:c.instructions+=3;goto B6b8c16;
case 0x6b8c17:c.instructions+=2;goto B6b8c17;
case 0x6b8c19:c.instructions+=1;goto B6b8c19;
case 0x6b8c1e:goto L6b8c1e;
case 0x6b8c20:c.instructions+=1;goto B6b8c20;
case 0x6b8c22:goto L6b8c22;
case 0x6b8c27:c.instructions+=5;goto B6b8c27;
case 0x6b8c28:c.instructions+=4;goto B6b8c28;
case 0x6b8c2b:c.instructions+=3;goto B6b8c2b;
case 0x6b8c2c:c.instructions+=2;goto B6b8c2c;
case 0x6b8c2e:c.instructions+=1;goto B6b8c2e;
case 0x6b8c33:goto L6b8c33;
case 0x6b8c35:c.instructions+=1;goto B6b8c35;
case 0x6b8c37:goto L6b8c37;
case 0x6b8c3c:c.instructions+=5;goto B6b8c3c;
case 0x6b8c3d:c.instructions+=4;goto B6b8c3d;
case 0x6b8c40:c.instructions+=3;goto B6b8c40;
case 0x6b8c41:c.instructions+=2;goto B6b8c41;
case 0x6b8c43:c.instructions+=1;goto B6b8c43;
case 0x6b8c48:goto L6b8c48;
case 0x6b8c4a:c.instructions+=1;goto B6b8c4a;
case 0x6b8c4c:goto L6b8c4c;
case 0x6b8c4f:c.instructions+=3;goto B6b8c4f;
case 0x6b8c54:c.instructions+=2;goto B6b8c54;
case 0x6b8c59:c.instructions+=1;goto B6b8c59;
case 0x6b8c5b:goto L6b8c5b;
case 0x6b8c5d:goto L6b8c5d;
case 0x6b8c5f:c.instructions+=3;goto B6b8c5f;
case 0x6b8c61:c.instructions+=2;goto B6b8c61;
case 0x6b8c62:c.instructions+=1;goto B6b8c62;
case 0x6b8c64:goto L6b8c64;
case 0x6b8c66:c.instructions+=7;goto B6b8c66;
case 0x6b8c68:c.instructions+=6;goto B6b8c68;
case 0x6b8c6b:c.instructions+=5;goto B6b8c6b;
case 0x6b8c6d:c.instructions+=4;goto B6b8c6d;
case 0x6b8c6e:c.instructions+=3;goto B6b8c6e;
case 0x6b8c6f:c.instructions+=2;goto B6b8c6f;
case 0x6b8c72:c.instructions+=1;goto B6b8c72;
case 0x6b8c74:goto L6b8c74;
case 0x6b8c77:c.instructions+=2;goto B6b8c77;
case 0x6b8c79:c.instructions+=1;goto B6b8c79;
case 0x6b8c7b:goto L6b8c7b;
case 0x6b8c7c:c.instructions+=4;goto B6b8c7c;
case 0x6b8c7d:c.instructions+=3;goto B6b8c7d;
case 0x6b8c7e:c.instructions+=2;goto B6b8c7e;
case 0x6b8c7f:c.instructions+=1;goto B6b8c7f;
case 0x6b8c82:goto L6b8c82;
case 0x6b8c84:c.instructions+=7;goto B6b8c84;
case 0x6b8c85:c.instructions+=6;goto B6b8c85;
case 0x6b8c86:c.instructions+=5;goto B6b8c86;
case 0x6b8c88:c.instructions+=4;goto B6b8c88;
case 0x6b8c89:c.instructions+=3;goto B6b8c89;
case 0x6b8c8f:c.instructions+=2;goto B6b8c8f;
case 0x6b8c95:c.instructions+=1;goto B6b8c95;
case 0x6b8c9a:goto L6b8c9a;
case 0x6b8ca0:c.instructions+=1;goto B6b8ca0;
case 0x6b8ca5:goto L6b8ca5;
case 0x6b8ca7:c.instructions+=4;goto B6b8ca7;
case 0x6b8cad:c.instructions+=3;goto B6b8cad;
case 0x6b8cae:c.instructions+=2;goto B6b8cae;
case 0x6b8caf:c.instructions+=1;goto B6b8caf;
case 0x6b8cb1:goto L6b8cb1;
case 0x6b8cb7:c.instructions+=1;goto B6b8cb7;
case 0x6b8cb9:goto L6b8cb9;
case 0x6b8cbf:c.instructions+=3;goto B6b8cbf;
case 0x6b8cc2:c.instructions+=2;goto B6b8cc2;
case 0x6b8cc4:c.instructions+=1;goto B6b8cc4;
case 0x6b8cc6:goto L6b8cc6;
case 0x6b8cc8:c.instructions+=1;goto B6b8cc8;
case 0x6b8ccd:goto L6b8ccd;
case 0x6b8cce:c.instructions+=2;goto B6b8cce;
case 0x6b8cd4:c.instructions+=1;goto B6b8cd4;
case 0x6b8cd6:goto L6b8cd6;
case 0x6b8cd8:c.instructions+=2;goto B6b8cd8;
case 0x6b8cde:c.instructions+=1;goto B6b8cde;
case 0x6b8ce0:goto L6b8ce0;
case 0x6b8ce6:c.instructions+=1;goto B6b8ce6;
case 0x6b8ce8:goto L6b8ce8;
case 0x6b8cee:c.instructions+=3;goto B6b8cee;
case 0x6b8cf1:c.instructions+=2;goto B6b8cf1;
case 0x6b8cf3:c.instructions+=1;goto B6b8cf3;
case 0x6b8cf5:goto L6b8cf5;
case 0x6b8cf7:c.instructions+=1;goto B6b8cf7;
case 0x6b8cfc:goto L6b8cfc;
case 0x6b8cfd:c.instructions+=2;goto B6b8cfd;
case 0x6b8d03:c.instructions+=1;goto B6b8d03;
case 0x6b8d05:goto L6b8d05;
case 0x6b8d07:c.instructions+=2;goto B6b8d07;
case 0x6b8d0d:c.instructions+=1;goto B6b8d0d;
case 0x6b8d0e:goto L6b8d0e;
case 0x6b8d10:c.instructions+=2;goto B6b8d10;
case 0x6b8d12:c.instructions+=1;goto B6b8d12;
case 0x6b8d14:goto L6b8d14;
case 0x6b8d16:c.instructions+=1;goto B6b8d16;
case 0x6b8d1b:goto L6b8d1b;
case 0x6b8d1e:c.instructions+=3;goto B6b8d1e;
case 0x6b8d21:c.instructions+=2;goto B6b8d21;
case 0x6b8d22:c.instructions+=1;goto B6b8d22;
case 0x6b8d24:goto L6b8d24;
case 0x6b8d2a:c.instructions+=1;goto B6b8d2a;
case 0x6b8d2f:goto L6b8d2f;
case 0x6b8d35:c.instructions+=1;goto B6b8d35;
case 0x6b8d3a:goto L6b8d3a;
case 0x6b8d3b:c.instructions+=6;goto B6b8d3b;
case 0x6b8d3c:c.instructions+=5;goto B6b8d3c;
case 0x6b8d3d:c.instructions+=4;goto B6b8d3d;
case 0x6b8d3f:c.instructions+=3;goto B6b8d3f;
case 0x6b8d40:c.instructions+=2;goto B6b8d40;
case 0x6b8d41:c.instructions+=1;goto B6b8d41;
case 0x6b8d46:goto L6b8d46;
case 0x6b8d48:c.instructions+=8;goto B6b8d48;
case 0x6b8d49:c.instructions+=7;goto B6b8d49;
case 0x6b8d4a:c.instructions+=6;goto B6b8d4a;
case 0x6b8d4b:c.instructions+=5;goto B6b8d4b;
case 0x6b8d4d:c.instructions+=4;goto B6b8d4d;
case 0x6b8d4f:c.instructions+=3;goto B6b8d4f;
case 0x6b8d52:c.instructions+=2;goto B6b8d52;
case 0x6b8d57:c.instructions+=1;goto B6b8d57;
case 0x6b8d59:goto L6b8d59;
case 0x6b8d5c:c.instructions+=7;goto B6b8d5c;
case 0x6b8d62:c.instructions+=6;goto B6b8d62;
case 0x6b8d65:c.instructions+=5;goto B6b8d65;
case 0x6b8d6b:c.instructions+=4;goto B6b8d6b;
case 0x6b8d6d:c.instructions+=3;goto B6b8d6d;
case 0x6b8d72:c.instructions+=2;goto B6b8d72;
case 0x6b8d74:c.instructions+=1;goto B6b8d74;
case 0x6b8d76:goto L6b8d76;
case 0x6b8d78:c.instructions+=1;goto B6b8d78;
case 0x6b8d7d:goto L6b8d7d;
case 0x6b8d7f:c.instructions+=1;goto B6b8d7f;
case 0x6b8d81:goto L6b8d81;
case 0x6b8d82:c.instructions+=2;goto B6b8d82;
case 0x6b8d85:c.instructions+=1;goto B6b8d85;
case 0x6b8d87:goto L6b8d87;
case 0x6b8d89:c.instructions+=1;goto B6b8d89;
case 0x6b8d8e:goto L6b8d8e;
case 0x6b8d90:c.instructions+=2;goto B6b8d90;
case 0x6b8d93:c.instructions+=1;goto B6b8d93;
case 0x6b8d95:goto L6b8d95;
case 0x6b8d98:c.instructions+=7;goto B6b8d98;
case 0x6b8d9e:c.instructions+=6;goto B6b8d9e;
case 0x6b8da1:c.instructions+=5;goto B6b8da1;
case 0x6b8da7:c.instructions+=4;goto B6b8da7;
case 0x6b8da9:c.instructions+=3;goto B6b8da9;
case 0x6b8dae:c.instructions+=2;goto B6b8dae;
case 0x6b8db0:c.instructions+=1;goto B6b8db0;
case 0x6b8db2:goto L6b8db2;
case 0x6b8db4:c.instructions+=1;goto B6b8db4;
case 0x6b8db9:goto L6b8db9;
case 0x6b8dbb:c.instructions+=1;goto B6b8dbb;
case 0x6b8dbd:goto L6b8dbd;
case 0x6b8dbe:c.instructions+=2;goto B6b8dbe;
case 0x6b8dc1:c.instructions+=1;goto B6b8dc1;
case 0x6b8dc3:goto L6b8dc3;
case 0x6b8dc5:c.instructions+=1;goto B6b8dc5;
case 0x6b8dca:goto L6b8dca;
case 0x6b8dcc:c.instructions+=1;goto B6b8dcc;
case 0x6b8dd1:goto L6b8dd1;
case 0x6b8dd3:c.instructions+=1;goto B6b8dd3;
case 0x6b8dd5:goto L6b8dd5;
case 0x6b8dd7:c.instructions+=1;goto B6b8dd7;
case 0x6b8ddc:goto L6b8ddc;
case 0x6b8dde:c.instructions+=1;goto B6b8dde;
case 0x6b8de0:goto L6b8de0;
case 0x6b8de2:c.instructions+=1;goto B6b8de2;
case 0x6b8de7:goto L6b8de7;
case 0x6b8de9:c.instructions+=1;goto B6b8de9;
case 0x6b8deb:goto L6b8deb;
case 0x6b8ded:c.instructions+=1;goto B6b8ded;
case 0x6b8df2:goto L6b8df2;
case 0x6b8df4:c.instructions+=1;goto B6b8df4;
case 0x6b8df6:goto L6b8df6;
case 0x6b8df8:c.instructions+=1;goto B6b8df8;
case 0x6b8dfd:goto L6b8dfd;
case 0x6b8dff:goto L6b8dff;
case 0x6b8e00:c.instructions+=3;goto B6b8e00;
case 0x6b8e01:c.instructions+=2;goto B6b8e01;
case 0x6b8e02:c.instructions+=1;goto B6b8e02;
case 0x6b8e03:goto L6b8e03;
case 0x6b8e05:c.instructions+=13;goto B6b8e05;
case 0x6b8e06:c.instructions+=12;goto B6b8e06;
case 0x6b8e08:c.instructions+=11;goto B6b8e08;
case 0x6b8e0e:c.instructions+=10;goto B6b8e0e;
case 0x6b8e0f:c.instructions+=9;goto B6b8e0f;
case 0x6b8e10:c.instructions+=8;goto B6b8e10;
case 0x6b8e12:c.instructions+=7;goto B6b8e12;
case 0x6b8e14:c.instructions+=6;goto B6b8e14;
case 0x6b8e16:c.instructions+=5;goto B6b8e16;
case 0x6b8e19:c.instructions+=4;goto B6b8e19;
case 0x6b8e1a:c.instructions+=3;goto B6b8e1a;
case 0x6b8e1d:c.instructions+=2;goto B6b8e1d;
case 0x6b8e20:c.instructions+=1;goto B6b8e20;
case 0x6b8e22:goto L6b8e22;
case 0x6b8e25:c.instructions+=5;goto B6b8e25;
case 0x6b8e28:c.instructions+=4;goto B6b8e28;
case 0x6b8e2b:c.instructions+=3;goto B6b8e2b;
case 0x6b8e2e:c.instructions+=2;goto B6b8e2e;
case 0x6b8e34:c.instructions+=1;goto B6b8e34;
case 0x6b8e36:goto L6b8e36;
case 0x6b8e3a:goto L6b8e3a;
case 0x6b8e3b:c.instructions+=2;goto B6b8e3b;
case 0x6b8e3e:c.instructions+=1;goto B6b8e3e;
case 0x6b8e40:goto L6b8e40;
case 0x6b8e43:c.instructions+=1;goto B6b8e43;
case 0x6b8e45:goto L6b8e45;
case 0x6b8e4b:c.instructions+=3;goto B6b8e4b;
case 0x6b8e4e:c.instructions+=2;goto B6b8e4e;
case 0x6b8e50:c.instructions+=1;goto B6b8e50;
case 0x6b8e52:goto L6b8e52;
case 0x6b8e54:c.instructions+=1;goto B6b8e54;
case 0x6b8e56:goto L6b8e56;
case 0x6b8e59:c.instructions+=1;goto B6b8e59;
case 0x6b8e5b:goto L6b8e5b;
case 0x6b8e5e:c.instructions+=7;goto B6b8e5e;
case 0x6b8e61:c.instructions+=6;goto B6b8e61;
case 0x6b8e64:c.instructions+=5;goto B6b8e64;
case 0x6b8e67:c.instructions+=4;goto B6b8e67;
case 0x6b8e68:c.instructions+=3;goto B6b8e68;
case 0x6b8e6b:c.instructions+=2;goto B6b8e6b;
case 0x6b8e6e:c.instructions+=1;goto B6b8e6e;
case 0x6b8e70:goto L6b8e70;
case 0x6b8e72:goto L6b8e72;
case 0x6b8e73:goto L6b8e73;
case 0x6b8e79:c.instructions+=1;goto B6b8e79;
case 0x6b8e7b:goto L6b8e7b;
case 0x6b8e81:c.instructions+=5;goto B6b8e81;
case 0x6b8e84:c.instructions+=4;goto B6b8e84;
case 0x6b8e86:c.instructions+=3;goto B6b8e86;
case 0x6b8e89:c.instructions+=2;goto B6b8e89;
case 0x6b8e8c:c.instructions+=1;goto B6b8e8c;
case 0x6b8e92:goto L6b8e92;
case 0x6b8e98:c.instructions+=5;goto B6b8e98;
case 0x6b8e9b:c.instructions+=4;goto B6b8e9b;
case 0x6b8e9e:c.instructions+=3;goto B6b8e9e;
case 0x6b8ea0:c.instructions+=2;goto B6b8ea0;
case 0x6b8ea3:c.instructions+=1;goto B6b8ea3;
case 0x6b8ea9:goto L6b8ea9;
case 0x6b8eac:c.instructions+=1;goto B6b8eac;
case 0x6b8eb2:goto L6b8eb2;
case 0x6b8eb4:c.instructions+=1;goto B6b8eb4;
case 0x6b8eb9:goto L6b8eb9;
case 0x6b8ebb:c.instructions+=1;goto B6b8ebb;
case 0x6b8ebd:goto L6b8ebd;
case 0x6b8ebf:c.instructions+=1;goto B6b8ebf;
case 0x6b8ec4:goto L6b8ec4;
case 0x6b8ec7:c.instructions+=1;goto B6b8ec7;
case 0x6b8ec9:goto L6b8ec9;
case 0x6b8ecd:goto L6b8ecd;
case 0x6b8ed1:c.instructions+=1;goto B6b8ed1;
case 0x6b8ed7:goto L6b8ed7;
case 0x6b8eda:c.instructions+=2;goto B6b8eda;
case 0x6b8edd:c.instructions+=1;goto B6b8edd;
case 0x6b8ee2:goto L6b8ee2;
case 0x6b8ee4:c.instructions+=2;goto B6b8ee4;
case 0x6b8ee7:c.instructions+=1;goto B6b8ee7;
case 0x6b8eed:goto L6b8eed;
case 0x6b8ef7:c.instructions+=1;goto B6b8ef7;
case 0x6b8efd:goto L6b8efd;
case 0x6b8f00:c.instructions+=6;goto B6b8f00;
case 0x6b8f02:c.instructions+=5;goto B6b8f02;
case 0x6b8f06:c.instructions+=4;goto B6b8f06;
case 0x6b8f0a:c.instructions+=3;goto B6b8f0a;
case 0x6b8f10:c.instructions+=2;goto B6b8f10;
case 0x6b8f16:c.instructions+=1;goto B6b8f16;
case 0x6b8f1c:goto L6b8f1c;
case 0x6b8f20:c.instructions+=1;goto B6b8f20;
case 0x6b8f26:goto L6b8f26;
case 0x6b8f29:c.instructions+=6;goto B6b8f29;
case 0x6b8f2b:c.instructions+=5;goto B6b8f2b;
case 0x6b8f2e:c.instructions+=4;goto B6b8f2e;
case 0x6b8f31:c.instructions+=3;goto B6b8f31;
case 0x6b8f35:c.instructions+=2;goto B6b8f35;
case 0x6b8f38:c.instructions+=1;goto B6b8f38;
case 0x6b8f3e:goto L6b8f3e;
case 0x6b8f41:c.instructions+=12;goto B6b8f41;
case 0x6b8f42:c.instructions+=11;goto B6b8f42;
case 0x6b8f45:c.instructions+=10;goto B6b8f45;
case 0x6b8f46:c.instructions+=9;goto B6b8f46;
case 0x6b8f49:c.instructions+=8;goto B6b8f49;
case 0x6b8f4a:c.instructions+=7;goto B6b8f4a;
case 0x6b8f4c:c.instructions+=6;goto B6b8f4c;
case 0x6b8f4d:c.instructions+=5;goto B6b8f4d;
case 0x6b8f50:c.instructions+=4;goto B6b8f50;
case 0x6b8f52:c.instructions+=3;goto B6b8f52;
case 0x6b8f55:c.instructions+=2;goto B6b8f55;
case 0x6b8f5b:c.instructions+=1;goto B6b8f5b;
case 0x6b8f60:goto L6b8f60;
case 0x6b8f64:c.instructions+=1;goto B6b8f64;
case 0x6b8f6a:goto L6b8f6a;
case 0x6b8f6b:c.instructions+=8;goto B6b8f6b;
case 0x6b8f6d:c.instructions+=7;goto B6b8f6d;
case 0x6b8f6e:c.instructions+=6;goto B6b8f6e;
case 0x6b8f71:c.instructions+=5;goto B6b8f71;
case 0x6b8f73:c.instructions+=4;goto B6b8f73;
case 0x6b8f75:c.instructions+=3;goto B6b8f75;
case 0x6b8f7b:c.instructions+=2;goto B6b8f7b;
case 0x6b8f7d:c.instructions+=1;goto B6b8f7d;
case 0x6b8f82:goto L6b8f82;
case 0x6b8f84:c.instructions+=2;goto B6b8f84;
case 0x6b8f87:c.instructions+=1;goto B6b8f87;
case 0x6b8f8d:goto L6b8f8d;
case 0x6b8f90:c.instructions+=4;goto B6b8f90;
case 0x6b8f93:c.instructions+=3;goto B6b8f93;
case 0x6b8f96:c.instructions+=2;goto B6b8f96;
case 0x6b8f98:c.instructions+=1;goto B6b8f98;
case 0x6b8f9d:goto L6b8f9d;
case 0x6b8fa3:c.instructions+=5;goto B6b8fa3;
case 0x6b8fa7:c.instructions+=4;goto B6b8fa7;
case 0x6b8fa9:c.instructions+=3;goto B6b8fa9;
case 0x6b8fac:c.instructions+=2;goto B6b8fac;
case 0x6b8fb3:c.instructions+=1;goto B6b8fb3;
case 0x6b8fb8:goto L6b8fb8;
case 0x6b8fba:c.instructions+=1;goto B6b8fba;
case 0x6b8fbc:goto L6b8fbc;
case 0x6b8fbe:c.instructions+=1;goto B6b8fbe;
case 0x6b8fc3:goto L6b8fc3;
case 0x6b8fc5:c.instructions+=1;goto B6b8fc5;
case 0x6b8fc7:goto L6b8fc7;
case 0x6b8fc9:goto L6b8fc9;
case 0x6b8fcb:c.instructions+=1;goto B6b8fcb;
case 0x6b8fd1:goto L6b8fd1;
case 0x6b8fd3:c.instructions+=5;goto B6b8fd3;
case 0x6b8fd5:c.instructions+=4;goto B6b8fd5;
case 0x6b8fd7:c.instructions+=3;goto B6b8fd7;
case 0x6b8fdc:c.instructions+=2;goto B6b8fdc;
case 0x6b8fde:c.instructions+=1;goto B6b8fde;
case 0x6b8fe3:goto L6b8fe3;
case 0x6b8fe5:c.instructions+=2;goto B6b8fe5;
case 0x6b8fe8:c.instructions+=1;goto B6b8fe8;
case 0x6b8fee:goto L6b8fee;
case 0x6b8ff1:c.instructions+=2;goto B6b8ff1;
case 0x6b8ff3:c.instructions+=1;goto B6b8ff3;
case 0x6b8ff8:goto L6b8ff8;
case 0x6b8ffa:c.instructions+=2;goto B6b8ffa;
case 0x6b8ffd:c.instructions+=1;goto B6b8ffd;
default:missing_instruction(c.pc);}
B6b8000:L6b8000:{c.instructions+=3;NFSU2_TR(0x6b8000);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x448ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6b8006:{NFSU2_TR(0x6b8006);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6b8009:{NFSU2_TR(0x6b8009);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b837c;}}
}
B6b800f:L6b800f:{c.instructions+=2;NFSU2_TR(0x6b800f);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b8013:{NFSU2_TR(0x6b8013);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b837c;}}
}
B6b8019:L6b8019:{c.instructions+=11;NFSU2_TR(0x6b8019);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6b801b:{NFSU2_TR(0x6b801b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b801c:{NFSU2_TR(0x6b801c);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6b801d:{NFSU2_TR(0x6b801d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6b801f:{NFSU2_TR(0x6b801f);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((R+0),(U+0),4);
}
B6b8022:{NFSU2_TR(0x6b8022);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b8023:{NFSU2_TR(0x6b8023);
u8 U[4];
w4(U+0,u32(0x7bcd80ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b8028:{NFSU2_TR(0x6b8028);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b8029:{NFSU2_TR(0x6b8029);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b802c:{NFSU2_TR(0x6b802c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b802d:{NFSU2_TR(0x6b802d);
{goto L6b82aa;}
}
B6b8032:L6b8032:{c.instructions+=6;NFSU2_TR(0x6b8032);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b8035:{NFSU2_TR(0x6b8035);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b8038:{NFSU2_TR(0x6b8038);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b803b:{NFSU2_TR(0x6b803b);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B6b803e:{NFSU2_TR(0x6b803e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b803f:{NFSU2_TR(0x6b803f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b8044ull));
TAIL_STATIC(0x699de1u,699);
}
B6b8044:L6b8044:{c.instructions+=4;NFSU2_TR(0x6b8044);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b8047:{NFSU2_TR(0x6b8047);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b804a:{NFSU2_TR(0x6b804a);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x10ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6b804c:{NFSU2_TR(0x6b804c);
if(r1(R+518)){{goto L6b8208;}}
}
B6b8052:L6b8052:{c.instructions+=2;NFSU2_TR(0x6b8052);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x2ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6b8055:{NFSU2_TR(0x6b8055);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b8208;}}
}
B6b805b:L6b805b:{c.instructions+=4;NFSU2_TR(0x6b805b);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((R+0),(U+0),4);
}
B6b805e:{NFSU2_TR(0x6b805e);
u8 U[4];
w4(U+0,u32(0x7b9e4cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b8063:{NFSU2_TR(0x6b8063);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b8064:{NFSU2_TR(0x6b8064);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b8069ull));
TAIL_STATIC(0x75dd6fu,75d);
}
B6b8069:L6b8069:{c.instructions+=4;NFSU2_TR(0x6b8069);
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
B6b806b:{NFSU2_TR(0x6b806b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6b806c:{NFSU2_TR(0x6b806c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6b806d:{NFSU2_TR(0x6b806d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b808a;}}
}
B6b806f:L6b806f:{c.instructions+=3;NFSU2_TR(0x6b806f);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b8072:{NFSU2_TR(0x6b8072);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6b8079:{NFSU2_TR(0x6b8079);
if(r1(R+518)){{goto L6b807f;}}
}
B6b807b:L6b807b:{c.instructions+=2;NFSU2_TR(0x6b807b);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b807d:{NFSU2_TR(0x6b807d);
{goto L6b80ac;}
}
B6b807f:L6b807f:{c.instructions+=2;NFSU2_TR(0x6b807f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b8082:{NFSU2_TR(0x6b8082);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b8085:L6b8085:{c.instructions+=2;NFSU2_TR(0x6b8085);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
}
B6b8088:{NFSU2_TR(0x6b8088);
{goto L6b80fe;}
}
B6b808a:L6b808a:{c.instructions+=4;NFSU2_TR(0x6b808a);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((R+0),(U+0),4);
}
B6b808d:{NFSU2_TR(0x6b808d);
u8 U[4];
w4(U+0,u32(0x7b9c88ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b8092:{NFSU2_TR(0x6b8092);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b8093:{NFSU2_TR(0x6b8093);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b8098ull));
TAIL_STATIC(0x75dd6fu,75d);
}
B6b8098:L6b8098:{c.instructions+=4;NFSU2_TR(0x6b8098);
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
B6b809a:{NFSU2_TR(0x6b809a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6b809b:{NFSU2_TR(0x6b809b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6b809c:{NFSU2_TR(0x6b809c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b80b7;}}
}
B6b809e:L6b809e:{c.instructions+=3;NFSU2_TR(0x6b809e);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b80a1:{NFSU2_TR(0x6b80a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6b80a8:{NFSU2_TR(0x6b80a8);
if(r1(R+518)){{goto L6b80af;}}
}
B6b80aa:L6b80aa:{c.instructions+=1;NFSU2_TR(0x6b80aa);
u8 U[4];
w4(U+0,u32(0x8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b80ac:L6b80ac:{c.instructions+=2;NFSU2_TR(0x6b80ac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6b80ad:{NFSU2_TR(0x6b80ad);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b8085u);}goto L6b8085;}
}
B6b80af:L6b80af:{c.instructions+=3;NFSU2_TR(0x6b80af);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b80b2:{NFSU2_TR(0x6b80b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b80b5:{NFSU2_TR(0x6b80b5);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b8085u);}goto L6b8085;}
}
B6b80b7:L6b80b7:{c.instructions+=4;NFSU2_TR(0x6b80b7);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((R+0),(U+0),4);
}
B6b80ba:{NFSU2_TR(0x6b80ba);
u8 U[4];
w4(U+0,u32(0x7b9eacull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b80bf:{NFSU2_TR(0x6b80bf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b80c0:{NFSU2_TR(0x6b80c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b80c5ull));
TAIL_STATIC(0x75dd6fu,75d);
}
B6b80c5:L6b80c5:{c.instructions+=4;NFSU2_TR(0x6b80c5);
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
B6b80c7:{NFSU2_TR(0x6b80c7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6b80c8:{NFSU2_TR(0x6b80c8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6b80c9:{NFSU2_TR(0x6b80c9);
if(r1(R+518)){{goto L6b80f3;}}
}
B6b80cb:L6b80cb:{c.instructions+=4;NFSU2_TR(0x6b80cb);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((R+0),(U+0),4);
}
B6b80ce:{NFSU2_TR(0x6b80ce);
u8 U[4];
w4(U+0,u32(0x7b9e48ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b80d3:{NFSU2_TR(0x6b80d3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b80d4:{NFSU2_TR(0x6b80d4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b80d9ull));
TAIL_STATIC(0x75dd6fu,75d);
}
B6b80d9:L6b80d9:{c.instructions+=4;NFSU2_TR(0x6b80d9);
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
B6b80db:{NFSU2_TR(0x6b80db);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6b80dc:{NFSU2_TR(0x6b80dc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6b80dd:{NFSU2_TR(0x6b80dd);
if(r1(R+518)){{goto L6b80f3;}}
}
B6b80df:L6b80df:{c.instructions+=4;NFSU2_TR(0x6b80df);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((R+0),(U+0),4);
}
B6b80e2:{NFSU2_TR(0x6b80e2);
u8 U[4];
w4(U+0,u32(0x7b9e80ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b80e7:{NFSU2_TR(0x6b80e7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b80e8:{NFSU2_TR(0x6b80e8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b80edull));
TAIL_STATIC(0x75dd6fu,75d);
}
B6b80ed:L6b80ed:{c.instructions+=4;NFSU2_TR(0x6b80ed);
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
B6b80ef:{NFSU2_TR(0x6b80ef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6b80f0:{NFSU2_TR(0x6b80f0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6b80f1:{NFSU2_TR(0x6b80f1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b8103;}}
}
B6b80f3:L6b80f3:{c.instructions+=2;NFSU2_TR(0x6b80f3);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x1ull))));
}
B6b80f7:{NFSU2_TR(0x6b80f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6b80fe:L6b80fe:{c.instructions+=3;NFSU2_TR(0x6b80fe);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(R+24))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B6b8100:{NFSU2_TR(0x6b8100);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6b8101:{NFSU2_TR(0x6b8101);
{goto L6b815b;}
}
B6b8103:L6b8103:{c.instructions+=4;NFSU2_TR(0x6b8103);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((R+0),(U+0),4);
}
B6b8106:{NFSU2_TR(0x6b8106);
u8 U[4];
w4(U+0,u32(0x7bcd78ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b810b:{NFSU2_TR(0x6b810b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b810c:{NFSU2_TR(0x6b810c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b8111ull));
TAIL_STATIC(0x75dd6fu,75d);
}
B6b8111:L6b8111:{c.instructions+=4;NFSU2_TR(0x6b8111);
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
B6b8113:{NFSU2_TR(0x6b8113);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6b8114:{NFSU2_TR(0x6b8114);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6b8115:{NFSU2_TR(0x6b8115);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b812c;}}
}
B6b8117:L6b8117:{c.instructions+=7;NFSU2_TR(0x6b8117);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6b8118:{NFSU2_TR(0x6b8118);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
}
B6b811b:{NFSU2_TR(0x6b811b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b811e:{NFSU2_TR(0x6b811e);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(R+24))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B6b8120:{NFSU2_TR(0x6b8120);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B6b8121:{NFSU2_TR(0x6b8121);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b8124:{NFSU2_TR(0x6b8124);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b815b;}}
}
B6b8126:L6b8126:{c.instructions+=2;NFSU2_TR(0x6b8126);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b812a:{NFSU2_TR(0x6b812a);
{goto L6b815b;}
}
B6b812c:L6b812c:{c.instructions+=4;NFSU2_TR(0x6b812c);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((R+0),(U+0),4);
}
B6b812f:{NFSU2_TR(0x6b812f);
u8 U[4];
w4(U+0,u32(0x7bcd6cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b8134:{NFSU2_TR(0x6b8134);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b8135:{NFSU2_TR(0x6b8135);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b813aull));
TAIL_STATIC(0x75dd6fu,75d);
}
B6b813a:L6b813a:{c.instructions+=4;NFSU2_TR(0x6b813a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b813c:{NFSU2_TR(0x6b813c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6b813d:{NFSU2_TR(0x6b813d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6b813e:{NFSU2_TR(0x6b813e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b8154;}}
}
B6b8140:L6b8140:{c.instructions+=7;NFSU2_TR(0x6b8140);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6b8141:{NFSU2_TR(0x6b8141);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
}
B6b8144:{NFSU2_TR(0x6b8144);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b8147:{NFSU2_TR(0x6b8147);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(R+24))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B6b8149:{NFSU2_TR(0x6b8149);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B6b814a:{NFSU2_TR(0x6b814a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b814d:{NFSU2_TR(0x6b814d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b815b;}}
}
B6b814f:L6b814f:{c.instructions+=2;NFSU2_TR(0x6b814f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b8152:{NFSU2_TR(0x6b8152);
{goto L6b815b;}
}
B6b8154:L6b8154:{c.instructions+=3;NFSU2_TR(0x6b8154);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b8158:{NFSU2_TR(0x6b8158);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6b815a:{NFSU2_TR(0x6b815a);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6b815b:L6b815b:{c.instructions+=3;NFSU2_TR(0x6b815b);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6b815d:{NFSU2_TR(0x6b815d);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b8160:{NFSU2_TR(0x6b8160);
if(r1(R+518)){{goto L6b8167;}}
}
B6b8162:L6b8162:{c.instructions+=2;NFSU2_TR(0x6b8162);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b8165:{NFSU2_TR(0x6b8165);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b81b7;}}
}
B6b8167:L6b8167:{c.instructions+=2;NFSU2_TR(0x6b8167);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b8169:{NFSU2_TR(0x6b8169);
if(r1(R+518)){{goto L6b8187;}}
}
B6b816b:L6b816b:{c.instructions+=7;NFSU2_TR(0x6b816b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b816e:{NFSU2_TR(0x6b816e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b8171:{NFSU2_TR(0x6b8171);
u8 U[4];
w4(U+0,u32(0x7bcd50ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b8176:{NFSU2_TR(0x6b8176);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b8177:{NFSU2_TR(0x6b8177);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b817a:{NFSU2_TR(0x6b817a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b817d:{NFSU2_TR(0x6b817d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b8182ull));
TAIL_STATIC(0x69e936u,69e);
}
B6b8182:L6b8182:{c.instructions+=2;NFSU2_TR(0x6b8182);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B6b8185:{NFSU2_TR(0x6b8185);
{goto L6b81b7;}
}
B6b8187:L6b8187:{c.instructions+=2;NFSU2_TR(0x6b8187);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b818a:{NFSU2_TR(0x6b818a);
if(r1(R+518)){{goto L6b81b7;}}
}
B6b818c:L6b818c:{c.instructions+=10;NFSU2_TR(0x6b818c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b818f:{NFSU2_TR(0x6b818f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b8192:{NFSU2_TR(0x6b8192);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x80b550ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+12));
}
B6b8199:{NFSU2_TR(0x6b8199);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b819c:{NFSU2_TR(0x6b819c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b819f:{NFSU2_TR(0x6b819f);
u8 U[4];
w4(U+0,u32(0x7bcd14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b81a4:{NFSU2_TR(0x6b81a4);
u8 U[4];
w4(U+0,u32(0x1261ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b81a9:{NFSU2_TR(0x6b81a9);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b81ac:{NFSU2_TR(0x6b81ac);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b81af:{NFSU2_TR(0x6b81af);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b81b4ull));
TAIL_STATIC(0x69e9bbu,69e);
}
B6b81b4:L6b81b4:{c.instructions+=1;NFSU2_TR(0x6b81b4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B6b81b7:L6b81b7:{c.instructions+=2;NFSU2_TR(0x6b81b7);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b81bb:{NFSU2_TR(0x6b81bb);
if(r1(R+518)){{goto L6b81c5;}}
}
B6b81bd:L6b81bd:{c.instructions+=2;NFSU2_TR(0x6b81bd);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b81bf:{NFSU2_TR(0x6b81bf);
if(r1(R+518)){{goto L6b82b2;}}
}
B6b81c5:L6b81c5:{c.instructions+=4;NFSU2_TR(0x6b81c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b81c8:{NFSU2_TR(0x6b81c8);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x448ull))));
}
B6b81cd:{NFSU2_TR(0x6b81cd);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6b81d0:{NFSU2_TR(0x6b81d0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b82b2;}}
}
B6b81d6:L6b81d6:{c.instructions+=2;NFSU2_TR(0x6b81d6);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b81da:{NFSU2_TR(0x6b81da);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b82b2;}}
}
B6b81e0:L6b81e0:{c.instructions+=8;NFSU2_TR(0x6b81e0);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b81e3:{NFSU2_TR(0x6b81e3);
u8 U[4];
w4(U+0,u32(0x1ull));
s4(u32(r4(R+0)),r4(U+0));
}
B6b81e9:{NFSU2_TR(0x6b81e9);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b81ec:{NFSU2_TR(0x6b81ec);
u8 U[4];
w4(U+0,u32(0x7bccecull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b81f1:{NFSU2_TR(0x6b81f1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b81f2:{NFSU2_TR(0x6b81f2);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b81f5:{NFSU2_TR(0x6b81f5);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b81f8:{NFSU2_TR(0x6b81f8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b81fdull));
TAIL_STATIC(0x69e936u,69e);
}
B6b81fd:L6b81fd:{c.instructions+=4;NFSU2_TR(0x6b81fd);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6b81ff:{NFSU2_TR(0x6b81ff);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B6b8202:{NFSU2_TR(0x6b8202);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6b8203:{NFSU2_TR(0x6b8203);
{goto L6b82b2;}
}
B6b8208:L6b8208:{c.instructions+=2;NFSU2_TR(0x6b8208);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+0))&u32(u8(0x20ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6b820a:{NFSU2_TR(0x6b820a);
if(r1(R+518)){{goto L6b8379;}}
}
B6b8210:L6b8210:{c.instructions+=4;NFSU2_TR(0x6b8210);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((R+0),(U+0),4);
}
B6b8213:{NFSU2_TR(0x6b8213);
u8 U[4];
w4(U+0,u32(0x7b9e4cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b8218:{NFSU2_TR(0x6b8218);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b8219:{NFSU2_TR(0x6b8219);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b821eull));
TAIL_STATIC(0x75dd6fu,75d);
}
B6b821e:L6b821e:{c.instructions+=4;NFSU2_TR(0x6b821e);
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
B6b8220:{NFSU2_TR(0x6b8220);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6b8221:{NFSU2_TR(0x6b8221);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6b8222:{NFSU2_TR(0x6b8222);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b8239;}}
}
B6b8224:L6b8224:{c.instructions+=7;NFSU2_TR(0x6b8224);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b8227:{NFSU2_TR(0x6b8227);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b822a:{NFSU2_TR(0x6b822a);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6b822d:{NFSU2_TR(0x6b822d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6b8234:{NFSU2_TR(0x6b8234);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(R+24))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B6b8236:{NFSU2_TR(0x6b8236);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6b8237:{NFSU2_TR(0x6b8237);
{goto L6b825e;}
}
B6b8239:L6b8239:{c.instructions+=4;NFSU2_TR(0x6b8239);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((R+0),(U+0),4);
}
B6b823c:{NFSU2_TR(0x6b823c);
u8 U[4];
w4(U+0,u32(0x7b9e40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b8241:{NFSU2_TR(0x6b8241);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b8242:{NFSU2_TR(0x6b8242);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b8247ull));
TAIL_STATIC(0x75dd6fu,75d);
}
B6b8247:L6b8247:{c.instructions+=5;NFSU2_TR(0x6b8247);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6b8248:{NFSU2_TR(0x6b8248);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6b824a:{NFSU2_TR(0x6b824a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b824c:{NFSU2_TR(0x6b824c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6b824d:{NFSU2_TR(0x6b824d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b8259;}}
}
B6b824f:L6b824f:{c.instructions+=3;NFSU2_TR(0x6b824f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6b8256:{NFSU2_TR(0x6b8256);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6b8257:{NFSU2_TR(0x6b8257);
{goto L6b8262;}
}
B6b8259:L6b8259:{c.instructions+=2;NFSU2_TR(0x6b8259);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b825d:{NFSU2_TR(0x6b825d);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6b825e:L6b825e:{c.instructions+=2;NFSU2_TR(0x6b825e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b8260:{NFSU2_TR(0x6b8260);
if(r1(R+518)){{goto L6b8288;}}
}
B6b8262:L6b8262:{c.instructions+=2;NFSU2_TR(0x6b8262);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b8266:{NFSU2_TR(0x6b8266);
if(r1(R+518)){{goto L6b826e;}}
}
B6b8268:L6b8268:{c.instructions+=2;NFSU2_TR(0x6b8268);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b826c:{NFSU2_TR(0x6b826c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b8288;}}
}
B6b826e:L6b826e:{c.instructions+=7;NFSU2_TR(0x6b826e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b8271:{NFSU2_TR(0x6b8271);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b8274:{NFSU2_TR(0x6b8274);
u8 U[4];
w4(U+0,u32(0x7bcd50ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b8279:{NFSU2_TR(0x6b8279);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b827a:{NFSU2_TR(0x6b827a);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b827d:{NFSU2_TR(0x6b827d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b8280:{NFSU2_TR(0x6b8280);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b8285ull));
TAIL_STATIC(0x69e936u,69e);
}
B6b8285:L6b8285:{c.instructions+=1;NFSU2_TR(0x6b8285);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B6b8288:L6b8288:{c.instructions+=2;NFSU2_TR(0x6b8288);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b828c:{NFSU2_TR(0x6b828c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b82b2;}}
}
B6b828e:L6b828e:{c.instructions+=2;NFSU2_TR(0x6b828e);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b8292:{NFSU2_TR(0x6b8292);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b837c;}}
}
B6b8298:L6b8298:{c.instructions+=6;NFSU2_TR(0x6b8298);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b829b:{NFSU2_TR(0x6b829b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b829e:{NFSU2_TR(0x6b829e);
u8 U[4];
w4(U+0,u32(0x7bccbcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b82a3:{NFSU2_TR(0x6b82a3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b82a4:{NFSU2_TR(0x6b82a4);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b82a7:{NFSU2_TR(0x6b82a7);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b82aa:L6b82aa:{c.instructions+=1;NFSU2_TR(0x6b82aa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b82afull));
TAIL_STATIC(0x69e936u,69e);
}
B6b82af:L6b82af:{c.instructions+=1;NFSU2_TR(0x6b82af);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B6b82b2:L6b82b2:{c.instructions+=2;NFSU2_TR(0x6b82b2);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b82b6:{NFSU2_TR(0x6b82b6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b835e;}}
}
B6b82bc:L6b82bc:{c.instructions+=2;NFSU2_TR(0x6b82bc);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b82c0:{NFSU2_TR(0x6b82c0);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b832a;}}
}
B6b82c2:L6b82c2:{c.instructions+=2;NFSU2_TR(0x6b82c2);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x4ull))));
}
B6b82c6:{NFSU2_TR(0x6b82c6);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6b832a;}}
}
B6b82c8:L6b82c8:{c.instructions+=2;NFSU2_TR(0x6b82c8);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b82cc:{NFSU2_TR(0x6b82cc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b832a;}}
}
B6b82ce:L6b82ce:{c.instructions+=5;NFSU2_TR(0x6b82ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b82d1:{NFSU2_TR(0x6b82d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b82d7:{NFSU2_TR(0x6b82d7);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffffull))));
}
B6b82dc:{NFSU2_TR(0x6b82dc);
w1(R+512,u8((r4(R+0))<(u32(0x104ull))));
}
B6b82e1:{NFSU2_TR(0x6b82e1);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6b832d;}}
}
B6b82e3:L6b82e3:{c.instructions+=3;NFSU2_TR(0x6b82e3);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x43cull))));
__builtin_memmove((R+12),(U+0),4);
}
B6b82e9:{NFSU2_TR(0x6b82e9);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6b82ec:{NFSU2_TR(0x6b82ec);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b8302;}}
}
B6b82ee:L6b82ee:{c.instructions+=6;NFSU2_TR(0x6b82ee);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b82f0:{NFSU2_TR(0x6b82f0);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b82f2:{NFSU2_TR(0x6b82f2);
u8 U[4];
w4(U+0,u32(0x51ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b82f4:{NFSU2_TR(0x6b82f4);
u8 U[4];
w4(U+0,u32(0x7bccb4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b82f9:{NFSU2_TR(0x6b82f9);
__builtin_memmove((R+4),(R+8),4);
}
B6b82fb:{NFSU2_TR(0x6b82fb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b8300ull));
TAIL_STATIC(0x699be0u,699);
}
B6b8300:L6b8300:{c.instructions+=1;NFSU2_TR(0x6b8300);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+12)),r4(U+0));
}
B6b8302:L6b8302:{c.instructions+=3;NFSU2_TR(0x6b8302);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+12),(U+0),4);
}
B6b8304:{NFSU2_TR(0x6b8304);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
w1(R+512,u8((r4(U+6))<(u32(0xffffffffull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xffffffffull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6b8307:{NFSU2_TR(0x6b8307);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b8313;}}
}
B6b8309:L6b8309:{c.instructions+=2;NFSU2_TR(0x6b8309);
w4(R+0,u32(0x8007000eull));
}
B6b830e:{NFSU2_TR(0x6b830e);
{goto L6b83a5;}
}
B6b8313:L6b8313:{c.instructions+=7;NFSU2_TR(0x6b8313);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b8316:{NFSU2_TR(0x6b8316);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b831a:{NFSU2_TR(0x6b831a);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B6b831b:{NFSU2_TR(0x6b831b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x5ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6b8322:{NFSU2_TR(0x6b8322);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b8325:{NFSU2_TR(0x6b8325);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b8328:{NFSU2_TR(0x6b8328);
{goto L6b837c;}
}
B6b832a:L6b832a:{c.instructions+=1;NFSU2_TR(0x6b832a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b832d:L6b832d:{c.instructions+=3;NFSU2_TR(0x6b832d);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b8330:{NFSU2_TR(0x6b8330);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+4))));
}
B6b8333:{NFSU2_TR(0x6b8333);
if(r1(R+512)){{goto L6b837c;}}
}
B6b8335:L6b8335:{c.instructions+=2;NFSU2_TR(0x6b8335);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b8339:{NFSU2_TR(0x6b8339);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b837c;}}
}
B6b833b:L6b833b:{c.instructions+=3;NFSU2_TR(0x6b833b);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x448ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6b8341:{NFSU2_TR(0x6b8341);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6b8344:{NFSU2_TR(0x6b8344);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b837c;}}
}
B6b8346:L6b8346:{c.instructions+=9;NFSU2_TR(0x6b8346);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b8347:{NFSU2_TR(0x6b8347);
u8 U[4];
w4(U+0,u32(0x7bcc68ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b834c:{NFSU2_TR(0x6b834c);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6b834e:{NFSU2_TR(0x6b834e);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6b834f:{NFSU2_TR(0x6b834f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b8350:{NFSU2_TR(0x6b8350);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6b8352:{NFSU2_TR(0x6b8352);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b8355:{NFSU2_TR(0x6b8355);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b8356:{NFSU2_TR(0x6b8356);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b835bull));
TAIL_STATIC(0x69e936u,69e);
}
B6b835b:L6b835b:{c.instructions+=1;NFSU2_TR(0x6b835b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B6b835e:L6b835e:{c.instructions+=2;NFSU2_TR(0x6b835e);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b8362:{NFSU2_TR(0x6b8362);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b8373;}}
}
B6b8364:L6b8364:{c.instructions+=5;NFSU2_TR(0x6b8364);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+28))),2);
w2(U+0,u16(u32(r2(U+0))|u32(u16(0x114ull))));
s2(u32(r4(R+28)),r2(U+0));
}
B6b8369:{NFSU2_TR(0x6b8369);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B6b836b:{NFSU2_TR(0x6b836b);
{u32 ea_=u32(r4(R+28)+u32(32u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6b836e:{NFSU2_TR(0x6b836e);
__asm__ volatile(".byte 0xd9,0xe8":::"memory");
}
B6b8370:{NFSU2_TR(0x6b8370);
{u32 ea_=u32(r4(R+28)+u32(40u));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6b8373:L6b8373:{c.instructions+=2;NFSU2_TR(0x6b8373);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b8377:{NFSU2_TR(0x6b8377);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b837c;}}
}
B6b8379:L6b8379:{c.instructions+=2;NFSU2_TR(0x6b8379);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6b837b:{NFSU2_TR(0x6b837b);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6b837c:L6b837c:{c.instructions+=3;NFSU2_TR(0x6b837c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b837f:{NFSU2_TR(0x6b837f);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0xffffull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b8385:{NFSU2_TR(0x6b8385);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b838a;}}
}
B6b8387:L6b8387:{c.instructions+=2;NFSU2_TR(0x6b8387);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6b8389:{NFSU2_TR(0x6b8389);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6b838a:L6b838a:{c.instructions+=9;NFSU2_TR(0x6b838a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b838d:{NFSU2_TR(0x6b838d);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
}
B6b8392:{NFSU2_TR(0x6b8392);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6b8395:{NFSU2_TR(0x6b8395);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+4))));
}
B6b8397:{NFSU2_TR(0x6b8397);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b839a:{NFSU2_TR(0x6b839a);
__builtin_memmove((R+0),(R+24),4);
}
B6b839c:{NFSU2_TR(0x6b839c);
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w4(R+0,u32(0-u32(r4(R+0))));
}
B6b839e:{NFSU2_TR(0x6b839e);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B6b83a0:{NFSU2_TR(0x6b83a0);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x80004005ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6b83a5:L6b83a5:{c.instructions+=5;NFSU2_TR(0x6b83a5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6b83a6:{NFSU2_TR(0x6b83a6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6b83a7:{NFSU2_TR(0x6b83a7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6b83a8:{NFSU2_TR(0x6b83a8);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6b83a9:{NFSU2_TR(0x6b83a9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6b83ac:L6b83ac:{c.instructions+=13;NFSU2_TR(0x6b83ac);
__builtin_memmove((R+28),(R+28),4);
}
B6b83ae:{NFSU2_TR(0x6b83ae);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b83af:{NFSU2_TR(0x6b83af);
__builtin_memmove((R+20),(R+16),4);
}
B6b83b1:{NFSU2_TR(0x6b83b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b83b4:{NFSU2_TR(0x6b83b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b83b7:{NFSU2_TR(0x6b83b7);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6dull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B6b83bb:{NFSU2_TR(0x6b83bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b83be:{NFSU2_TR(0x6b83be);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B6b83c0:{NFSU2_TR(0x6b83c0);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6b83c2:{NFSU2_TR(0x6b83c2);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
}
B6b83c7:{NFSU2_TR(0x6b83c7);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6b83c8:{NFSU2_TR(0x6b83c8);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b83ca:{NFSU2_TR(0x6b83ca);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b83e2;}}
}
B6b83cc:L6b83cc:{c.instructions+=2;NFSU2_TR(0x6b83cc);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B6b83ce:{NFSU2_TR(0x6b83ce);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6b8401;}}
}
B6b83d0:L6b83d0:{c.instructions+=5;NFSU2_TR(0x6b83d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b83d3:{NFSU2_TR(0x6b83d3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0x0ull))));
s4(u32(r4(R+0)),r4(U+0));
}
B6b83d6:{NFSU2_TR(0x6b83d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b83d9:{NFSU2_TR(0x6b83d9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b83db:{NFSU2_TR(0x6b83db);
if(r1(R+518)){{goto L6b83fd;}}
}
B6b83dd:L6b83dd:{c.instructions+=2;NFSU2_TR(0x6b83dd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0x0ull))));
s4(u32(r4(R+0)),r4(U+0));
}
B6b83e0:{NFSU2_TR(0x6b83e0);
{goto L6b83fd;}
}
B6b83e2:L6b83e2:{c.instructions+=2;NFSU2_TR(0x6b83e2);
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
B6b83e5:{NFSU2_TR(0x6b83e5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b8401;}}
}
B6b83e7:L6b83e7:{c.instructions+=2;NFSU2_TR(0x6b83e7);
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
B6b83e9:{NFSU2_TR(0x6b83e9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b8401;}}
}
B6b83eb:L6b83eb:{c.instructions+=5;NFSU2_TR(0x6b83eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b83ee:{NFSU2_TR(0x6b83ee);
u8 U[4];
w4(U+0,u32(0x9ull));
s4(u32(r4(R+0)),r4(U+0));
}
B6b83f4:{NFSU2_TR(0x6b83f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b83f7:{NFSU2_TR(0x6b83f7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b83f9:{NFSU2_TR(0x6b83f9);
if(r1(R+518)){{goto L6b83fd;}}
}
B6b83fb:L6b83fb:{c.instructions+=1;NFSU2_TR(0x6b83fb);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6b83fd:L6b83fd:{c.instructions+=2;NFSU2_TR(0x6b83fd);
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
B6b83ff:{NFSU2_TR(0x6b83ff);
{goto L6b8406;}
}
B6b8401:L6b8401:{c.instructions+=1;NFSU2_TR(0x6b8401);
w4(R+0,u32(0x80004005ull));
}
B6b8406:L6b8406:{c.instructions+=2;NFSU2_TR(0x6b8406);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6b8407:{NFSU2_TR(0x6b8407);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6b840a:L6b840a:{c.instructions+=9;NFSU2_TR(0x6b840a);
__builtin_memmove((R+28),(R+28),4);
}
B6b840c:{NFSU2_TR(0x6b840c);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b840d:{NFSU2_TR(0x6b840d);
__builtin_memmove((R+20),(R+16),4);
}
B6b840f:{NFSU2_TR(0x6b840f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xacull))));
}
B6b8415:{NFSU2_TR(0x6b8415);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b8418:{NFSU2_TR(0x6b8418);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b8419:{NFSU2_TR(0x6b8419);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6b841b:{NFSU2_TR(0x6b841b);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b841d:{NFSU2_TR(0x6b841d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b8427;}}
}
B6b841f:L6b841f:{c.instructions+=3;NFSU2_TR(0x6b841f);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6b8421:{NFSU2_TR(0x6b8421);
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
B6b8422:{NFSU2_TR(0x6b8422);
{goto L6b8657;}
}
B6b8427:L6b8427:{c.instructions+=5;NFSU2_TR(0x6b8427);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6b8429:{NFSU2_TR(0x6b8429);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b842a:{NFSU2_TR(0x6b842a);
__builtin_memmove((R+24),(R+0),4);
}
B6b842c:{NFSU2_TR(0x6b842c);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0xfff00000ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B6b8432:{NFSU2_TR(0x6b8432);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b843b;}}
}
B6b8434:L6b8434:{c.instructions+=2;NFSU2_TR(0x6b8434);
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
B6b8436:{NFSU2_TR(0x6b8436);
{goto L6b8656;}
}
B6b843b:L6b843b:{c.instructions+=2;NFSU2_TR(0x6b843b);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x20700000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b8441:{NFSU2_TR(0x6b8441);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b8434u);}goto L6b8434;}}
}
B6b8443:L6b8443:{c.instructions+=9;NFSU2_TR(0x6b8443);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffull))));
}
B6b8448:{NFSU2_TR(0x6b8448);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b844b:{NFSU2_TR(0x6b844b);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b844e:{NFSU2_TR(0x6b844e);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6b8450:{NFSU2_TR(0x6b8450);
u8 U[64];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+8,u64(r4(U+4)));
w8(U+16,u64(r4(R+8)));
w8(U+24,shl<u64>(r8(U+16),u64(u32(0x20ull))));
w8(U+32,u64(r4(R+0)));
w8(U+40,u64(u64(r8(U+24))|u64(r8(U+32))));
{u64 d_=u64(r8(U+8));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x6b8450);w8(U+48,u64(u64(r8(U+40))/d_));}
w4(R+0,u32(r8(U+48)));
{u64 d_=u64(r8(U+8));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x6b8450);w8(U+56,u64(u64(r8(U+40))%d_));}
w4(R+8,u32(r8(U+56)));
}
B6b8453:{NFSU2_TR(0x6b8453);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b8454:{NFSU2_TR(0x6b8454);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(U+0))<(u32(0x1ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b8457:{NFSU2_TR(0x6b8457);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b845a:{NFSU2_TR(0x6b845a);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b8653;}}
}
B6b8460:L6b8460:{c.instructions+=23;NFSU2_TR(0x6b8460);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b8466:{NFSU2_TR(0x6b8466);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b846c:{NFSU2_TR(0x6b846c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6b846f:{NFSU2_TR(0x6b846f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6b8475:{NFSU2_TR(0x6b8475);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b8479:{NFSU2_TR(0x6b8479);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6b847c:{NFSU2_TR(0x6b847c);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff9cull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+12),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6b8480:{NFSU2_TR(0x6b8480);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B6b8483:{NFSU2_TR(0x6b8483);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff9cull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+12),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6b8487:{NFSU2_TR(0x6b8487);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B6b848a:{NFSU2_TR(0x6b848a);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B6b848d:{NFSU2_TR(0x6b848d);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff9cull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+12),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6b8491:{NFSU2_TR(0x6b8491);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff9cull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+12),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6b8495:{NFSU2_TR(0x6b8495);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b8497:{NFSU2_TR(0x6b8497);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6b8498:{NFSU2_TR(0x6b8498);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff54ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+12),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6b849f:{NFSU2_TR(0x6b849f);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff54ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
w4(U+12,u32(0x3ull));
s4(u32(r4(U+8)),r4(U+12));
}
B6b84aa:{NFSU2_TR(0x6b84aa);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff54ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+12),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6b84b1:{NFSU2_TR(0x6b84b1);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6b84b3:{NFSU2_TR(0x6b84b3);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b84b6:{NFSU2_TR(0x6b84b6);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff54ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
w4(U+12,u32(0x1ull));
s4(u32(r4(U+8)),r4(U+12));
}
B6b84c1:{NFSU2_TR(0x6b84c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b84c4:{NFSU2_TR(0x6b84c4);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b8653;}}
}
B6b84ca:L6b84ca:{c.instructions+=7;NFSU2_TR(0x6b84ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b84cd:{NFSU2_TR(0x6b84cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b84d0:{NFSU2_TR(0x6b84d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b84d3:{NFSU2_TR(0x6b84d3);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B6b84d6:{NFSU2_TR(0x6b84d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b84d9:{NFSU2_TR(0x6b84d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b84dc:{NFSU2_TR(0x6b84dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b84df:L6b84df:{c.instructions+=7;NFSU2_TR(0x6b84df);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6b84e1:{NFSU2_TR(0x6b84e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b84e4:{NFSU2_TR(0x6b84e4);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6b84e7:{NFSU2_TR(0x6b84e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b84eb:{NFSU2_TR(0x6b84eb);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b84ed:{NFSU2_TR(0x6b84ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6b84f0:{NFSU2_TR(0x6b84f0);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b8550;}}
}
B6b84f2:L6b84f2:{c.instructions+=2;NFSU2_TR(0x6b84f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b84f5:{NFSU2_TR(0x6b84f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b84f8:L6b84f8:{c.instructions+=5;NFSU2_TR(0x6b84f8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+24),(U+0),4);
}
B6b84fa:{NFSU2_TR(0x6b84fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b84fd:{NFSU2_TR(0x6b84fd);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6b8500:{NFSU2_TR(0x6b8500);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+28))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b8503:{NFSU2_TR(0x6b8503);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b853c;}}
}
B6b8505:L6b8505:{c.instructions+=3;NFSU2_TR(0x6b8505);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6b8508:{NFSU2_TR(0x6b8508);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b850b:{NFSU2_TR(0x6b850b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b853c;}}
}
B6b850d:L6b850d:{c.instructions+=3;NFSU2_TR(0x6b850d);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6b8510:{NFSU2_TR(0x6b8510);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b8513:{NFSU2_TR(0x6b8513);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b853c;}}
}
B6b8515:L6b8515:{c.instructions+=4;NFSU2_TR(0x6b8515);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6b8518:{NFSU2_TR(0x6b8518);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B6b851b:{NFSU2_TR(0x6b851b);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6b851f:{NFSU2_TR(0x6b851f);
if(r1(R+518)){{goto L6b8550;}}
}
B6b8521:L6b8521:{c.instructions+=4;NFSU2_TR(0x6b8521);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6b8524:{NFSU2_TR(0x6b8524);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B6b8527:{NFSU2_TR(0x6b8527);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6b852b:{NFSU2_TR(0x6b852b);
if(r1(R+518)){{goto L6b8550;}}
}
B6b852d:L6b852d:{c.instructions+=6;NFSU2_TR(0x6b852d);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6b8530:{NFSU2_TR(0x6b8530);
{u32 ea_=u32(r4(R+8)+u32(32u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6b8533:{NFSU2_TR(0x6b8533);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B6b8535:{NFSU2_TR(0x6b8535);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6b8537:{NFSU2_TR(0x6b8537);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6b853a:{NFSU2_TR(0x6b853a);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L6b8550;}}
}
B6b853c:L6b853c:{c.instructions+=7;NFSU2_TR(0x6b853c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b853f:{NFSU2_TR(0x6b853f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b8542:{NFSU2_TR(0x6b8542);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B6b8545:{NFSU2_TR(0x6b8545);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6b8548:{NFSU2_TR(0x6b8548);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+24))<(r4(U+8))));
}
B6b854b:{NFSU2_TR(0x6b854b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b854e:{NFSU2_TR(0x6b854e);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b84f8u);}goto L6b84f8;}}
}
B6b8550:L6b8550:{c.instructions+=3;NFSU2_TR(0x6b8550);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6b8553:{NFSU2_TR(0x6b8553);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b8556:{NFSU2_TR(0x6b8556);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b863d;}}
}
B6b855c:L6b855c:{c.instructions+=3;NFSU2_TR(0x6b855c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b8562:{NFSU2_TR(0x6b8562);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b8564:{NFSU2_TR(0x6b8564);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b8599;}}
}
B6b8566:L6b8566:{c.instructions+=2;NFSU2_TR(0x6b8566);
u8 U[7];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x3ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B6b856a:{NFSU2_TR(0x6b856a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b85be;}}
}
B6b856c:L6b856c:{c.instructions+=4;NFSU2_TR(0x6b856c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b8572:{NFSU2_TR(0x6b8572);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffffull))));
}
B6b8577:{NFSU2_TR(0x6b8577);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x101ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b857c:{NFSU2_TR(0x6b857c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b8591;}}
}
B6b857e:L6b857e:{c.instructions+=3;NFSU2_TR(0x6b857e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b8581:{NFSU2_TR(0x6b8581);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x2ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b8585:{NFSU2_TR(0x6b8585);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b8591;}}
}
B6b8587:L6b8587:{c.instructions+=2;NFSU2_TR(0x6b8587);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b858b:{NFSU2_TR(0x6b858b);
if(r1(R+518)){{goto L6b865c;}}
}
B6b8591:L6b8591:{c.instructions+=2;NFSU2_TR(0x6b8591);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b8597:{NFSU2_TR(0x6b8597);
{goto L6b85be;}
}
B6b8599:L6b8599:{c.instructions+=5;NFSU2_TR(0x6b8599);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b859c:{NFSU2_TR(0x6b859c);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B6b859f:{NFSU2_TR(0x6b859f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b85a2:{NFSU2_TR(0x6b85a2);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6b85a5:{NFSU2_TR(0x6b85a5);
if(r1(R+518)){{goto L6b85b0;}}
}
B6b85a7:L6b85a7:{c.instructions+=2;NFSU2_TR(0x6b85a7);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B6b85a9:{NFSU2_TR(0x6b85a9);
if(r1(R+519)){{goto L6b85b4;}}
}
B6b85ab:L6b85ab:{c.instructions+=2;NFSU2_TR(0x6b85ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b85ae:{NFSU2_TR(0x6b85ae);
{goto L6b85be;}
}
B6b85b0:L6b85b0:{c.instructions+=2;NFSU2_TR(0x6b85b0);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B6b85b2:{NFSU2_TR(0x6b85b2);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L6b85bc;}}
}
B6b85b4:L6b85b4:{c.instructions+=2;NFSU2_TR(0x6b85b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b85ba:{NFSU2_TR(0x6b85ba);
{goto L6b85be;}
}
B6b85bc:L6b85bc:{c.instructions+=1;NFSU2_TR(0x6b85bc);
__builtin_memmove((R+0),(R+28),4);
}
B6b85be:L6b85be:{c.instructions+=3;NFSU2_TR(0x6b85be);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b85c1:{NFSU2_TR(0x6b85c1);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b85c4:{NFSU2_TR(0x6b85c4);
if(r1(R+518)){{goto L6b8622;}}
}
B6b85c6:L6b85c6:{c.instructions+=3;NFSU2_TR(0x6b85c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6b85cc:{NFSU2_TR(0x6b85cc);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b85ce:{NFSU2_TR(0x6b85ce);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b8622;}}
}
B6b85d0:L6b85d0:{c.instructions+=4;NFSU2_TR(0x6b85d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6b85d6:{NFSU2_TR(0x6b85d6);
w4(R+28,u32(u32(r4(R+28))&u32(u32(0xffffull))));
}
B6b85dc:{NFSU2_TR(0x6b85dc);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x101ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b85e2:{NFSU2_TR(0x6b85e2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b8622;}}
}
B6b85e4:L6b85e4:{c.instructions+=4;NFSU2_TR(0x6b85e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b85e7:{NFSU2_TR(0x6b85e7);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6b85ea:{NFSU2_TR(0x6b85ea);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b85ec:{NFSU2_TR(0x6b85ec);
if(r1(R+518)){{goto L6b8620;}}
}
B6b85ee:L6b85ee:{c.instructions+=4;NFSU2_TR(0x6b85ee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6b85f0:{NFSU2_TR(0x6b85f0);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfff00000ull))));
}
B6b85f5:{NFSU2_TR(0x6b85f5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x60f00000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b85fa:{NFSU2_TR(0x6b85fa);
if(r1(R+518)){{goto L6b8611;}}
}
B6b85fc:L6b85fc:{c.instructions+=2;NFSU2_TR(0x6b85fc);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x60500000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b8601:{NFSU2_TR(0x6b8601);
if(r1(R+518)){{goto L6b8611;}}
}
B6b8603:L6b8603:{c.instructions+=2;NFSU2_TR(0x6b8603);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x60a00000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b8608:{NFSU2_TR(0x6b8608);
if(r1(R+518)){{goto L6b8611;}}
}
B6b860a:L6b860a:{c.instructions+=2;NFSU2_TR(0x6b860a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x60000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b860f:{NFSU2_TR(0x6b860f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b8620;}}
}
B6b8611:L6b8611:{c.instructions+=3;NFSU2_TR(0x6b8611);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b8614:{NFSU2_TR(0x6b8614);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x2ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b8618:{NFSU2_TR(0x6b8618);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b8620;}}
}
B6b861a:L6b861a:{c.instructions+=2;NFSU2_TR(0x6b861a);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b861e:{NFSU2_TR(0x6b861e);
if(r1(R+518)){{goto L6b865c;}}
}
B6b8620:L6b8620:{c.instructions+=1;NFSU2_TR(0x6b8620);
__builtin_memmove((R+0),(R+24),4);
}
B6b8622:L6b8622:{c.instructions+=2;NFSU2_TR(0x6b8622);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(U+0))<(u32(0x12ull))));
}
B6b8625:{NFSU2_TR(0x6b8625);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6b863d;}}
}
B6b8627:L6b8627:{c.instructions+=7;NFSU2_TR(0x6b8627);
__builtin_memmove((R+8),(R+0),4);
}
B6b8629:{NFSU2_TR(0x6b8629);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B6b862c:{NFSU2_TR(0x6b862c);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffff9cull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B6b8630:{NFSU2_TR(0x6b8630);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x1ull))));
s4(u32(r4(R+0)),r4(U+0));
}
B6b8632:{NFSU2_TR(0x6b8632);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6b8634:{NFSU2_TR(0x6b8634);
u8 U[24];
w4(U+0,u32(u32(u32(0xffffff54ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w1(R+512,u8((r4(R+0))<(r4(U+16))));
w4(U+20,u32(u32(r4(R+0))-u32(r4(U+16))));
w1(R+518,u8((r4(U+20))==(u32(0x0ull))));
}
B6b863b:{NFSU2_TR(0x6b863b);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6b8661;}}
}
B6b863d:L6b863d:{c.instructions+=7;NFSU2_TR(0x6b863d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b8640:{NFSU2_TR(0x6b8640);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B6b8643:{NFSU2_TR(0x6b8643);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B6b8644:{NFSU2_TR(0x6b8644);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+12))<(r4(U+8))));
}
B6b8647:{NFSU2_TR(0x6b8647);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b864a:{NFSU2_TR(0x6b864a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b864d:{NFSU2_TR(0x6b864d);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b84dfu);}goto L6b84df;}}
}
B6b8653:L6b8653:{c.instructions+=1;NFSU2_TR(0x6b8653);
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
B6b8655:L6b8655:{c.instructions+=1;NFSU2_TR(0x6b8655);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6b8656:L6b8656:{c.instructions+=1;NFSU2_TR(0x6b8656);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6b8657:L6b8657:{c.instructions+=3;NFSU2_TR(0x6b8657);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6b8658:{NFSU2_TR(0x6b8658);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6b8659:{NFSU2_TR(0x6b8659);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6b865c:L6b865c:{c.instructions+=3;NFSU2_TR(0x6b865c);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6b865e:{NFSU2_TR(0x6b865e);
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
B6b865f:{NFSU2_TR(0x6b865f);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b8655u);}goto L6b8655;}
}
B6b8661:L6b8661:{c.instructions+=3;NFSU2_TR(0x6b8661);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b8664:{NFSU2_TR(0x6b8664);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b8666:{NFSU2_TR(0x6b8666);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b865cu);}goto L6b865c;}}
}
B6b8668:L6b8668:{c.instructions+=2;NFSU2_TR(0x6b8668);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6b866a:{NFSU2_TR(0x6b866a);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b865cu);}goto L6b865c;}
}
B6b866c:L6b866c:{c.instructions+=10;NFSU2_TR(0x6b866c);
__builtin_memmove((R+28),(R+28),4);
}
B6b866e:{NFSU2_TR(0x6b866e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b866f:{NFSU2_TR(0x6b866f);
__builtin_memmove((R+20),(R+16),4);
}
B6b8671:{NFSU2_TR(0x6b8671);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x20ull))));
}
B6b8674:{NFSU2_TR(0x6b8674);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b8675:{NFSU2_TR(0x6b8675);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b8676:{NFSU2_TR(0x6b8676);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6b8679:{NFSU2_TR(0x6b8679);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b867b:{NFSU2_TR(0x6b867b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b867e:{NFSU2_TR(0x6b867e);
if(r1(R+518)){{goto L6b8683;}}
}
B6b8680:L6b8680:{c.instructions+=1;NFSU2_TR(0x6b8680);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0x0ull))));
s4(u32(r4(R+28)),r4(U+0));
}
B6b8683:L6b8683:{c.instructions+=3;NFSU2_TR(0x6b8683);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6b8686:{NFSU2_TR(0x6b8686);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b8688:{NFSU2_TR(0x6b8688);
if(r1(R+518)){{goto L6b88e0;}}
}
B6b868e:L6b868e:{c.instructions+=3;NFSU2_TR(0x6b868e);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b8690:{NFSU2_TR(0x6b8690);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b8693:{NFSU2_TR(0x6b8693);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b86ae;}}
}
B6b8695:L6b8695:{c.instructions+=3;NFSU2_TR(0x6b8695);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(R+8))<(r4(U+0))));
}
B6b8697:{NFSU2_TR(0x6b8697);
__builtin_memmove((R+4),(R+8),4);
}
B6b8699:{NFSU2_TR(0x6b8699);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6b86ae;}}
}
B6b869b:L6b869b:{c.instructions+=4;NFSU2_TR(0x6b869b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b869e:{NFSU2_TR(0x6b869e);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6b86a1:{NFSU2_TR(0x6b86a1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b86a3:{NFSU2_TR(0x6b86a3);
if(r1(R+518)){{goto L6b86a9;}}
}
B6b86a5:L6b86a5:{c.instructions+=1;NFSU2_TR(0x6b86a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b86a9:L6b86a9:{c.instructions+=3;NFSU2_TR(0x6b86a9);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6b86aa:{NFSU2_TR(0x6b86aa);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
}
B6b86ac:{NFSU2_TR(0x6b86ac);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b869bu);}goto L6b869b;}}
}
B6b86ae:L6b86ae:{c.instructions+=5;NFSU2_TR(0x6b86ae);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffffull))));
__builtin_memmove((R+0),(U+0),4);
}
B6b86b1:{NFSU2_TR(0x6b86b1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+8))<(r4(U+0))));
}
B6b86b3:{NFSU2_TR(0x6b86b3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b86b4:{NFSU2_TR(0x6b86b4);
__builtin_memmove((R+12),(R+8),4);
}
B6b86b6:{NFSU2_TR(0x6b86b6);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6b88d5;}}
}
B6b86bc:L6b86bc:{c.instructions+=4;NFSU2_TR(0x6b86bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b86bf:{NFSU2_TR(0x6b86bf);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6b86c2:{NFSU2_TR(0x6b86c2);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b86c4:{NFSU2_TR(0x6b86c4);
if(r1(R+518)){{goto L6b88c6;}}
}
B6b86ca:L6b86ca:{c.instructions+=4;NFSU2_TR(0x6b86ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b86cd:{NFSU2_TR(0x6b86cd);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6b86cf:{NFSU2_TR(0x6b86cf);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b86d1:{NFSU2_TR(0x6b86d1);
if(r1(R+518)){{goto L6b86d5;}}
}
B6b86d3:L6b86d3:{c.instructions+=1;NFSU2_TR(0x6b86d3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x1ull))));
s4(u32(r4(R+4)),r4(U+0));
}
B6b86d5:L6b86d5:{c.instructions+=2;NFSU2_TR(0x6b86d5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+12))<(r4(U+0))));
}
B6b86d7:{NFSU2_TR(0x6b86d7);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6b86e4;}}
}
B6b86d9:L6b86d9:{c.instructions+=5;NFSU2_TR(0x6b86d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b86dc:{NFSU2_TR(0x6b86dc);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B6b86dd:{NFSU2_TR(0x6b86dd);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B6b86e0:{NFSU2_TR(0x6b86e0);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b86e2:{NFSU2_TR(0x6b86e2);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b86d5u);}goto L6b86d5;}}
}
B6b86e4:L6b86e4:{c.instructions+=5;NFSU2_TR(0x6b86e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b86e8:{NFSU2_TR(0x6b86e8);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
}
B6b86e9:{NFSU2_TR(0x6b86e9);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b86eb:{NFSU2_TR(0x6b86eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b86ee:{NFSU2_TR(0x6b86ee);
if(r1(R+518)){{goto L6b88c3;}}
}
B6b86f4:L6b86f4:{c.instructions+=4;NFSU2_TR(0x6b86f4);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6b86f6:{NFSU2_TR(0x6b86f6);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b86f9:{NFSU2_TR(0x6b86f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b86fc:{NFSU2_TR(0x6b86fc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b8704;}}
}
B6b86fe:L6b86fe:{c.instructions+=2;NFSU2_TR(0x6b86fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b8701:{NFSU2_TR(0x6b8701);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b8704:L6b8704:{c.instructions+=5;NFSU2_TR(0x6b8704);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6b8706:{NFSU2_TR(0x6b8706);
w4(R+4,u32(0xfffffull));
}
B6b870b:{NFSU2_TR(0x6b870b);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+4))));
}
B6b870d:{NFSU2_TR(0x6b870d);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b8710:{NFSU2_TR(0x6b8710);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b872a;}}
}
B6b8712:L6b8712:{c.instructions+=4;NFSU2_TR(0x6b8712);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6b8714:{NFSU2_TR(0x6b8714);
w4(R+8,u32(u32(r4(R+8))&u32(r4(R+4))));
}
B6b8716:{NFSU2_TR(0x6b8716);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(U+0))<(u32(0x4ull))));
}
B6b8719:{NFSU2_TR(0x6b8719);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6b872a;}}
}
B6b871b:L6b871b:{c.instructions+=5;NFSU2_TR(0x6b871b);
__builtin_memmove((R+0),(R+28),4);
}
B6b871d:{NFSU2_TR(0x6b871d);
__builtin_memmove((R+28),(R+24),4);
}
B6b871f:{NFSU2_TR(0x6b871f);
__builtin_memmove((R+24),(R+0),4);
}
B6b8721:{NFSU2_TR(0x6b8721);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6b8728:{NFSU2_TR(0x6b8728);
{goto L6b8740;}
}
B6b872a:L6b872a:{c.instructions+=2;NFSU2_TR(0x6b872a);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b872d:{NFSU2_TR(0x6b872d);
if(r1(R+518)){{goto L6b88c3;}}
}
B6b8733:L6b8733:{c.instructions+=4;NFSU2_TR(0x6b8733);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6b8735:{NFSU2_TR(0x6b8735);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+4))));
}
B6b8737:{NFSU2_TR(0x6b8737);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b873a:{NFSU2_TR(0x6b873a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b88c3;}}
}
B6b8740:L6b8740:{c.instructions+=5;NFSU2_TR(0x6b8740);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b8743:{NFSU2_TR(0x6b8743);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b8749:{NFSU2_TR(0x6b8749);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffffull))));
}
B6b874e:{NFSU2_TR(0x6b874e);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x104ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x104ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x104ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6b8753:{NFSU2_TR(0x6b8753);
if(r1(R+518)){{goto L6b8767;}}
}
B6b8755:L6b8755:{c.instructions+=4;NFSU2_TR(0x6b8755);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6b8757:{NFSU2_TR(0x6b8757);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b8758:{NFSU2_TR(0x6b8758);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b8759:{NFSU2_TR(0x6b8759);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b875full));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6b875f:L6b875f:{c.instructions+=2;NFSU2_TR(0x6b875f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b8761:{NFSU2_TR(0x6b8761);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b88c3;}}
}
B6b8767:L6b8767:{c.instructions+=4;NFSU2_TR(0x6b8767);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6b8769:{NFSU2_TR(0x6b8769);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfff00000ull))));
}
B6b876e:{NFSU2_TR(0x6b876e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x72100000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b8773:{NFSU2_TR(0x6b8773);
if(r1(R+518)){{goto L6b88c3;}}
}
B6b8779:L6b8779:{c.instructions+=2;NFSU2_TR(0x6b8779);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x72000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b877e:{NFSU2_TR(0x6b877e);
if(r1(R+518)){{goto L6b88c3;}}
}
B6b8784:L6b8784:{c.instructions+=2;NFSU2_TR(0x6b8784);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x60500000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b8789:{NFSU2_TR(0x6b8789);
if(r1(R+518)){{goto L6b88c3;}}
}
B6b878f:L6b878f:{c.instructions+=2;NFSU2_TR(0x6b878f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x60a00000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b8794:{NFSU2_TR(0x6b8794);
if(r1(R+518)){{goto L6b88c3;}}
}
B6b879a:L6b879a:{c.instructions+=2;NFSU2_TR(0x6b879a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x60000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b879f:{NFSU2_TR(0x6b879f);
if(r1(R+518)){{goto L6b88c3;}}
}
B6b87a5:L6b87a5:{c.instructions+=2;NFSU2_TR(0x6b87a5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x60f00000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b87aa:{NFSU2_TR(0x6b87aa);
if(r1(R+518)){{goto L6b88c3;}}
}
B6b87b0:L6b87b0:{c.instructions+=2;NFSU2_TR(0x6b87b0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x11000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b87b5:{NFSU2_TR(0x6b87b5);
if(r1(R+518)){{goto L6b88c3;}}
}
B6b87bb:L6b87bb:{c.instructions+=2;NFSU2_TR(0x6b87bb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b87bd:{NFSU2_TR(0x6b87bd);
if(r1(R+518)){{goto L6b88c3;}}
}
B6b87c3:L6b87c3:{c.instructions+=3;NFSU2_TR(0x6b87c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b87c7:{NFSU2_TR(0x6b87c7);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b87cb:{NFSU2_TR(0x6b87cb);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b8833;}}
}
B6b87cd:L6b87cd:{c.instructions+=6;NFSU2_TR(0x6b87cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b87d0:{NFSU2_TR(0x6b87d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b87d3:{NFSU2_TR(0x6b87d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b87d6:{NFSU2_TR(0x6b87d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b87d9:{NFSU2_TR(0x6b87d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b87dc:{NFSU2_TR(0x6b87dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b87df:L6b87df:{c.instructions+=5;NFSU2_TR(0x6b87df);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b87e2:{NFSU2_TR(0x6b87e2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6b87e4:{NFSU2_TR(0x6b87e4);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6b87e7:{NFSU2_TR(0x6b87e7);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b87eb:{NFSU2_TR(0x6b87eb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b87f4;}}
}
B6b87ed:L6b87ed:{c.instructions+=1;NFSU2_TR(0x6b87ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6b87f4:L6b87f4:{c.instructions+=2;NFSU2_TR(0x6b87f4);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b87f8:{NFSU2_TR(0x6b87f8);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b882a;}}
}
B6b87fa:L6b87fa:{c.instructions+=4;NFSU2_TR(0x6b87fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b87fd:{NFSU2_TR(0x6b87fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b8800:{NFSU2_TR(0x6b8800);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b8803:{NFSU2_TR(0x6b8803);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b8806:L6b8806:{c.instructions+=5;NFSU2_TR(0x6b8806);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b8809:{NFSU2_TR(0x6b8809);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6b880b:{NFSU2_TR(0x6b880b);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B6b880e:{NFSU2_TR(0x6b880e);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b8811:{NFSU2_TR(0x6b8811);
if(r1(R+518)){{goto L6b8817;}}
}
B6b8813:L6b8813:{c.instructions+=2;NFSU2_TR(0x6b8813);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b8815:{NFSU2_TR(0x6b8815);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b881e;}}
}
B6b8817:L6b8817:{c.instructions+=1;NFSU2_TR(0x6b8817);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6b881e:L6b881e:{c.instructions+=3;NFSU2_TR(0x6b881e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b8822:{NFSU2_TR(0x6b8822);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b8825:{NFSU2_TR(0x6b8825);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b8806u);}goto L6b8806;}}
}
B6b8827:L6b8827:{c.instructions+=1;NFSU2_TR(0x6b8827);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6b882a:L6b882a:{c.instructions+=3;NFSU2_TR(0x6b882a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b882e:{NFSU2_TR(0x6b882e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b8831:{NFSU2_TR(0x6b8831);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b87dfu);}goto L6b87df;}}
}
B6b8833:L6b8833:{c.instructions+=3;NFSU2_TR(0x6b8833);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b8837:{NFSU2_TR(0x6b8837);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b883b:{NFSU2_TR(0x6b883b);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b8886;}}
}
B6b883d:L6b883d:{c.instructions+=2;NFSU2_TR(0x6b883d);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b8841:{NFSU2_TR(0x6b8841);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b887b;}}
}
B6b8843:L6b8843:{c.instructions+=8;NFSU2_TR(0x6b8843);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b8846:{NFSU2_TR(0x6b8846);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b8849:{NFSU2_TR(0x6b8849);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b884c:{NFSU2_TR(0x6b884c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b884f:{NFSU2_TR(0x6b884f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6b8852:{NFSU2_TR(0x6b8852);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6b8855:{NFSU2_TR(0x6b8855);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b8858:{NFSU2_TR(0x6b8858);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b885b:L6b885b:{c.instructions+=4;NFSU2_TR(0x6b885b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+12),(U+0),4);
}
B6b885d:{NFSU2_TR(0x6b885d);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B6b8860:{NFSU2_TR(0x6b8860);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b8863:{NFSU2_TR(0x6b8863);
if(r1(R+518)){{goto L6b8869;}}
}
B6b8865:L6b8865:{c.instructions+=2;NFSU2_TR(0x6b8865);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+4))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6b8867:{NFSU2_TR(0x6b8867);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b8870;}}
}
B6b8869:L6b8869:{c.instructions+=1;NFSU2_TR(0x6b8869);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6b8870:L6b8870:{c.instructions+=3;NFSU2_TR(0x6b8870);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B6b8873:{NFSU2_TR(0x6b8873);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b8876:{NFSU2_TR(0x6b8876);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b885bu);}goto L6b885b;}}
}
B6b8878:L6b8878:{c.instructions+=1;NFSU2_TR(0x6b8878);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6b887b:L6b887b:{c.instructions+=4;NFSU2_TR(0x6b887b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b887e:{NFSU2_TR(0x6b887e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b8881:{NFSU2_TR(0x6b8881);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6b8884:{NFSU2_TR(0x6b8884);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b883du);}goto L6b883d;}}
}
B6b8886:L6b8886:{c.instructions+=2;NFSU2_TR(0x6b8886);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b888a:{NFSU2_TR(0x6b888a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b88c3;}}
}
B6b888c:L6b888c:{c.instructions+=2;NFSU2_TR(0x6b888c);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b8890:{NFSU2_TR(0x6b8890);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b88c3;}}
}
B6b8892:L6b8892:{c.instructions+=7;NFSU2_TR(0x6b8892);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b8895:{NFSU2_TR(0x6b8895);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b8898:{NFSU2_TR(0x6b8898);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6b889a:{NFSU2_TR(0x6b889a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b889d:{NFSU2_TR(0x6b889d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6b88a0:{NFSU2_TR(0x6b88a0);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b88a4:{NFSU2_TR(0x6b88a4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b88c3;}}
}
B6b88a6:L6b88a6:{c.instructions+=2;NFSU2_TR(0x6b88a6);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b88aa:{NFSU2_TR(0x6b88aa);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b88c2;}}
}
B6b88ac:L6b88ac:{c.instructions+=2;NFSU2_TR(0x6b88ac);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b88b0:{NFSU2_TR(0x6b88b0);
if(r1(R+518)){{goto L6b88bb;}}
}
B6b88b2:L6b88b2:{c.instructions+=2;NFSU2_TR(0x6b88b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6b88b9:{NFSU2_TR(0x6b88b9);
{goto L6b88c2;}
}
B6b88bb:L6b88bb:{c.instructions+=1;NFSU2_TR(0x6b88bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6b88c2:L6b88c2:{c.instructions+=1;NFSU2_TR(0x6b88c2);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B6b88c3:L6b88c3:{c.instructions+=1;NFSU2_TR(0x6b88c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6b88c6:L6b88c6:{c.instructions+=4;NFSU2_TR(0x6b88c6);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B6b88c7:{NFSU2_TR(0x6b88c7);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffffull))));
__builtin_memmove((R+0),(U+0),4);
}
B6b88ca:{NFSU2_TR(0x6b88ca);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+12))<(r4(U+0))));
}
B6b88cc:{NFSU2_TR(0x6b88cc);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b86bcu);}goto L6b86bc;}}
}
B6b88d2:L6b88d2:{c.instructions+=1;NFSU2_TR(0x6b88d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6b88d5:L6b88d5:{c.instructions+=3;NFSU2_TR(0x6b88d5);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b88d7:{NFSU2_TR(0x6b88d7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6b88d8:{NFSU2_TR(0x6b88d8);
if(r1(R+518)){{goto L6b88e0;}}
}
B6b88da:L6b88da:{c.instructions+=2;NFSU2_TR(0x6b88da);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b88dc:{NFSU2_TR(0x6b88dc);
if(r1(R+518)){{goto L6b88e0;}}
}
B6b88de:L6b88de:{c.instructions+=1;NFSU2_TR(0x6b88de);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x1ull))));
s4(u32(r4(R+28)),r4(U+0));
}
B6b88e0:L6b88e0:{c.instructions+=5;NFSU2_TR(0x6b88e0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6b88e1:{NFSU2_TR(0x6b88e1);
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
B6b88e3:{NFSU2_TR(0x6b88e3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6b88e4:{NFSU2_TR(0x6b88e4);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6b88e5:{NFSU2_TR(0x6b88e5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6b88e8:L6b88e8:{c.instructions+=9;NFSU2_TR(0x6b88e8);
__builtin_memmove((R+28),(R+28),4);
}
B6b88ea:{NFSU2_TR(0x6b88ea);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b88eb:{NFSU2_TR(0x6b88eb);
__builtin_memmove((R+20),(R+16),4);
}
B6b88ed:{NFSU2_TR(0x6b88ed);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xc8ull))));
}
B6b88f3:{NFSU2_TR(0x6b88f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b88f6:{NFSU2_TR(0x6b88f6);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b88f7:{NFSU2_TR(0x6b88f7);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B6b88f9:{NFSU2_TR(0x6b88f9);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b88fb:{NFSU2_TR(0x6b88fb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b8905;}}
}
B6b88fd:L6b88fd:{c.instructions+=3;NFSU2_TR(0x6b88fd);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6b88ff:{NFSU2_TR(0x6b88ff);
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
B6b8900:{NFSU2_TR(0x6b8900);
{goto L6b8b0a;}
}
B6b8905:L6b8905:{c.instructions+=3;NFSU2_TR(0x6b8905);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6b8907:{NFSU2_TR(0x6b8907);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xfff00000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b890c:{NFSU2_TR(0x6b890c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b8915;}}
}
B6b890e:L6b890e:{c.instructions+=2;NFSU2_TR(0x6b890e);
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
B6b8910:{NFSU2_TR(0x6b8910);
{goto L6b8b0a;}
}
B6b8915:L6b8915:{c.instructions+=34;NFSU2_TR(0x6b8915);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b8916:{NFSU2_TR(0x6b8916);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b8917:{NFSU2_TR(0x6b8917);
w4(R+28,u32(0xfffffull));
}
B6b891c:{NFSU2_TR(0x6b891c);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+28))));
}
B6b891e:{NFSU2_TR(0x6b891e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b8921:{NFSU2_TR(0x6b8921);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b8924:{NFSU2_TR(0x6b8924);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6b8926:{NFSU2_TR(0x6b8926);
u8 U[64];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+8,u64(r4(U+4)));
w8(U+16,u64(r4(R+8)));
w8(U+24,shl<u64>(r8(U+16),u64(u32(0x20ull))));
w8(U+32,u64(r4(R+0)));
w8(U+40,u64(u64(r8(U+24))|u64(r8(U+32))));
{u64 d_=u64(r8(U+8));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x6b8926);w8(U+48,u64(u64(r8(U+40))/d_));}
w4(R+0,u32(r8(U+48)));
{u64 d_=u64(r8(U+8));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x6b8926);w8(U+56,u64(u64(r8(U+40))%d_));}
w4(R+8,u32(r8(U+56)));
}
B6b8929:{NFSU2_TR(0x6b8929);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6b892b:{NFSU2_TR(0x6b892b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b892f:{NFSU2_TR(0x6b892f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b8932:{NFSU2_TR(0x6b8932);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b8935:{NFSU2_TR(0x6b8935);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b8938:{NFSU2_TR(0x6b8938);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b893b:{NFSU2_TR(0x6b893b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+24),(U+0),4);
}
B6b893d:{NFSU2_TR(0x6b893d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b8940:{NFSU2_TR(0x6b8940);
w4(R+24,u32(u32(r4(R+24))&u32(r4(R+28))));
}
B6b8942:{NFSU2_TR(0x6b8942);
u8 U[56];
w8(U+0,u64(r4(R+24)));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x6b8942);w8(U+40,u64(u64(r8(U+32))/d_));}
w4(R+0,u32(r8(U+40)));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x6b8942);w8(U+48,u64(u64(r8(U+32))%d_));}
w4(R+8,u32(r8(U+48)));
}
B6b8944:{NFSU2_TR(0x6b8944);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b894a:{NFSU2_TR(0x6b894a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6b8950:{NFSU2_TR(0x6b8950);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B6b8953:{NFSU2_TR(0x6b8953);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff80ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+12),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6b8957:{NFSU2_TR(0x6b8957);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B6b895a:{NFSU2_TR(0x6b895a);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff80ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+12),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6b895e:{NFSU2_TR(0x6b895e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6b8961:{NFSU2_TR(0x6b8961);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+12,shl<u32>(r4(R+12),u64(r4(U+0))));
}
B6b8964:{NFSU2_TR(0x6b8964);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff80ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
w4(U+12,u32(u32(r4(U+12))&u32(u32(0x0ull))));
s4(u32(r4(U+8)),r4(U+12));
}
B6b8969:{NFSU2_TR(0x6b8969);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff38ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
w4(U+12,u32(0x2ull));
s4(u32(r4(U+8)),r4(U+12));
}
B6b8974:{NFSU2_TR(0x6b8974);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b8977:{NFSU2_TR(0x6b8977);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff38ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
w4(U+12,u32(0x5ull));
s4(u32(r4(U+8)),r4(U+12));
}
B6b8982:{NFSU2_TR(0x6b8982);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff38ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
w4(U+12,u32(0x3ull));
s4(u32(r4(U+8)),r4(U+12));
}
B6b898d:{NFSU2_TR(0x6b898d);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6b898f:{NFSU2_TR(0x6b898f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b8992:{NFSU2_TR(0x6b8992);
if(r1(R+518)){{goto L6b8b06;}}
}
B6b8998:L6b8998:{c.instructions+=13;NFSU2_TR(0x6b8998);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b899b:{NFSU2_TR(0x6b899b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b899f:{NFSU2_TR(0x6b899f);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6b89a2:{NFSU2_TR(0x6b89a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b89a5:{NFSU2_TR(0x6b89a5);
__builtin_memmove((R+0),(R+24),4);
}
B6b89a7:{NFSU2_TR(0x6b89a7);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+24)))));
w8(U+8,u64(s64(s32(r4(R+8)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+24,u32(r8(U+16)));
}
B6b89aa:{NFSU2_TR(0x6b89aa);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6b89ad:{NFSU2_TR(0x6b89ad);
w4(R+24,u32(0-u32(r4(R+24))));
}
B6b89af:{NFSU2_TR(0x6b89af);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B6b89b2:{NFSU2_TR(0x6b89b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b89b5:{NFSU2_TR(0x6b89b5);
__builtin_memmove((R+0),(R+24),4);
}
B6b89b7:{NFSU2_TR(0x6b89b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b89ba:{NFSU2_TR(0x6b89ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b89bd:L6b89bd:{c.instructions+=4;NFSU2_TR(0x6b89bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b89c0:{NFSU2_TR(0x6b89c0);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+8))));
}
B6b89c3:{NFSU2_TR(0x6b89c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6b89c6:{NFSU2_TR(0x6b89c6);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6b89d6;}}
}
B6b89c8:L6b89c8:{c.instructions+=5;NFSU2_TR(0x6b89c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b89cb:{NFSU2_TR(0x6b89cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b89ce:{NFSU2_TR(0x6b89ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b89d1:{NFSU2_TR(0x6b89d1);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6b89d4:{NFSU2_TR(0x6b89d4);
{goto L6b89df;}
}
B6b89d6:L6b89d6:{c.instructions+=3;NFSU2_TR(0x6b89d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b89d9:{NFSU2_TR(0x6b89d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b89dc:{NFSU2_TR(0x6b89dc);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6b89df:L6b89df:{c.instructions+=9;NFSU2_TR(0x6b89df);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B6b89e2:{NFSU2_TR(0x6b89e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b89e5:{NFSU2_TR(0x6b89e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b89e8:{NFSU2_TR(0x6b89e8);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6b89eb:{NFSU2_TR(0x6b89eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b89ee:{NFSU2_TR(0x6b89ee);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6b89f0:{NFSU2_TR(0x6b89f0);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+8))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b89f3:{NFSU2_TR(0x6b89f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b89f6:{NFSU2_TR(0x6b89f6);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b8a49;}}
}
B6b89f8:L6b89f8:{c.instructions+=3;NFSU2_TR(0x6b89f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6b89fb:{NFSU2_TR(0x6b89fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b89fe:{NFSU2_TR(0x6b89fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b8a01:L6b8a01:{c.instructions+=2;NFSU2_TR(0x6b8a01);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+8))));
}
B6b8a04:{NFSU2_TR(0x6b8a04);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6b8a0e;}}
}
B6b8a06:L6b8a06:{c.instructions+=3;NFSU2_TR(0x6b8a06);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b8a09:{NFSU2_TR(0x6b8a09);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6b8a0c:{NFSU2_TR(0x6b8a0c);
{goto L6b8a14;}
}
B6b8a0e:L6b8a0e:{c.instructions+=2;NFSU2_TR(0x6b8a0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b8a11:{NFSU2_TR(0x6b8a11);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6b8a14:L6b8a14:{c.instructions+=5;NFSU2_TR(0x6b8a14);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b8a17:{NFSU2_TR(0x6b8a17);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6b8a1a:{NFSU2_TR(0x6b8a1a);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B6b8a1d:{NFSU2_TR(0x6b8a1d);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b8a20:{NFSU2_TR(0x6b8a20);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b8a32;}}
}
B6b8a22:L6b8a22:{c.instructions+=3;NFSU2_TR(0x6b8a22);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b8a25:{NFSU2_TR(0x6b8a25);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b8a28:{NFSU2_TR(0x6b8a28);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b8a32;}}
}
B6b8a2a:L6b8a2a:{c.instructions+=3;NFSU2_TR(0x6b8a2a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b8a2d:{NFSU2_TR(0x6b8a2d);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b8a30:{NFSU2_TR(0x6b8a30);
if(r1(R+518)){{goto L6b8a49;}}
}
B6b8a32:L6b8a32:{c.instructions+=8;NFSU2_TR(0x6b8a32);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b8a35:{NFSU2_TR(0x6b8a35);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+8))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b8a38:{NFSU2_TR(0x6b8a38);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b8a3b:{NFSU2_TR(0x6b8a3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b8a3e:{NFSU2_TR(0x6b8a3e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+8))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b8a41:{NFSU2_TR(0x6b8a41);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b8a44:{NFSU2_TR(0x6b8a44);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+8))));
}
B6b8a47:{NFSU2_TR(0x6b8a47);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b8a01u);}goto L6b8a01;}}
}
B6b8a49:L6b8a49:{c.instructions+=3;NFSU2_TR(0x6b8a49);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b8a4c:{NFSU2_TR(0x6b8a4c);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b8a4f:{NFSU2_TR(0x6b8a4f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b8ae8;}}
}
B6b8a55:L6b8a55:{c.instructions+=3;NFSU2_TR(0x6b8a55);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6b8a5b:{NFSU2_TR(0x6b8a5b);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b8a5d:{NFSU2_TR(0x6b8a5d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b8a72;}}
}
B6b8a5f:L6b8a5f:{c.instructions+=2;NFSU2_TR(0x6b8a5f);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x1ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b8a63:{NFSU2_TR(0x6b8a63);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b8a72;}}
}
B6b8a65:L6b8a65:{c.instructions+=3;NFSU2_TR(0x6b8a65);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b8a68:{NFSU2_TR(0x6b8a68);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x3ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b8a6c:{NFSU2_TR(0x6b8a6c);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6b8b0f;}}
}
B6b8a72:L6b8a72:{c.instructions+=3;NFSU2_TR(0x6b8a72);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b8a78:{NFSU2_TR(0x6b8a78);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b8a7a:{NFSU2_TR(0x6b8a7a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b8ab9;}}
}
B6b8a7c:L6b8a7c:{c.instructions+=2;NFSU2_TR(0x6b8a7c);
u8 U[7];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x3ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B6b8a80:{NFSU2_TR(0x6b8a80);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b8aa1;}}
}
B6b8a82:L6b8a82:{c.instructions+=4;NFSU2_TR(0x6b8a82);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b8a88:{NFSU2_TR(0x6b8a88);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffffull))));
}
B6b8a8d:{NFSU2_TR(0x6b8a8d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x101ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b8a92:{NFSU2_TR(0x6b8a92);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b8a9d;}}
}
B6b8a94:L6b8a94:{c.instructions+=3;NFSU2_TR(0x6b8a94);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b8a97:{NFSU2_TR(0x6b8a97);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x3ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b8a9b:{NFSU2_TR(0x6b8a9b);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6b8b0f;}}
}
B6b8a9d:L6b8a9d:{c.instructions+=2;NFSU2_TR(0x6b8a9d);
__builtin_memmove((R+0),(R+24),4);
}
B6b8a9f:{NFSU2_TR(0x6b8a9f);
{goto L6b8aa3;}
}
B6b8aa1:L6b8aa1:{c.instructions+=1;NFSU2_TR(0x6b8aa1);
__builtin_memmove((R+0),(R+8),4);
}
B6b8aa3:L6b8aa3:{c.instructions+=7;NFSU2_TR(0x6b8aa3);
__builtin_memmove((R+24),(R+0),4);
}
B6b8aa5:{NFSU2_TR(0x6b8aa5);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B6b8aa8:{NFSU2_TR(0x6b8aa8);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffff80ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B6b8aac:{NFSU2_TR(0x6b8aac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x1ull))));
s4(u32(r4(R+28)),r4(U+0));
}
B6b8aae:{NFSU2_TR(0x6b8aae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+28),(U+0),4);
}
B6b8ab0:{NFSU2_TR(0x6b8ab0);
u8 U[24];
w4(U+0,u32(u32(u32(0xffffff38ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w1(R+512,u8((r4(R+28))<(r4(U+16))));
w4(U+20,u32(u32(r4(R+28))-u32(r4(U+16))));
w1(R+518,u8((r4(U+20))==(u32(0x0ull))));
}
B6b8ab7:{NFSU2_TR(0x6b8ab7);
{goto L6b8ae6;}
}
B6b8ab9:L6b8ab9:{c.instructions+=4;NFSU2_TR(0x6b8ab9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b8abc:{NFSU2_TR(0x6b8abc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b8abf:{NFSU2_TR(0x6b8abf);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B6b8ac1:{NFSU2_TR(0x6b8ac1);
if(r1(R+519)){{goto L6b8b06;}}
}
B6b8ac3:L6b8ac3:{c.instructions+=2;NFSU2_TR(0x6b8ac3);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6b8ac6:{NFSU2_TR(0x6b8ac6);
if(r1(R+518)){{goto L6b8ad1;}}
}
B6b8ac8:L6b8ac8:{c.instructions+=3;NFSU2_TR(0x6b8ac8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b8acb:{NFSU2_TR(0x6b8acb);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x3ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b8acf:{NFSU2_TR(0x6b8acf);
{goto L6b8ae6;}
}
B6b8ad1:L6b8ad1:{c.instructions+=6;NFSU2_TR(0x6b8ad1);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6b8ad4:{NFSU2_TR(0x6b8ad4);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B6b8ad7:{NFSU2_TR(0x6b8ad7);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffff80ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+12),(U+8),4);
}
B6b8adb:{NFSU2_TR(0x6b8adb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
w4(U+0,u32(u32(r4(U+0))+u32(u32(0x1ull))));
s4(u32(r4(R+12)),r4(U+0));
}
B6b8add:{NFSU2_TR(0x6b8add);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+12),(U+0),4);
}
B6b8adf:{NFSU2_TR(0x6b8adf);
u8 U[24];
w4(U+0,u32(u32(u32(0xffffff38ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w1(R+512,u8((r4(R+12))<(r4(U+16))));
w4(U+20,u32(u32(r4(R+12))-u32(r4(U+16))));
w1(R+518,u8((r4(U+20))==(u32(0x0ull))));
}
B6b8ae6:L6b8ae6:{c.instructions+=1;NFSU2_TR(0x6b8ae6);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6b8b0f;}}
}
B6b8ae8:L6b8ae8:{c.instructions+=9;NFSU2_TR(0x6b8ae8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b8aeb:{NFSU2_TR(0x6b8aeb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b8aee:{NFSU2_TR(0x6b8aee);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b8af1:{NFSU2_TR(0x6b8af1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+8))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b8af4:{NFSU2_TR(0x6b8af4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B6b8af7:{NFSU2_TR(0x6b8af7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b8afa:{NFSU2_TR(0x6b8afa);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+8))));
}
B6b8afd:{NFSU2_TR(0x6b8afd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b8b00:{NFSU2_TR(0x6b8b00);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b89bdu);}goto L6b89bd;}}
}
B6b8b06:L6b8b06:{c.instructions+=1;NFSU2_TR(0x6b8b06);
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
B6b8b08:L6b8b08:{c.instructions+=2;NFSU2_TR(0x6b8b08);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6b8b09:{NFSU2_TR(0x6b8b09);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6b8b0a:L6b8b0a:{c.instructions+=3;NFSU2_TR(0x6b8b0a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6b8b0b:{NFSU2_TR(0x6b8b0b);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6b8b0c:{NFSU2_TR(0x6b8b0c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6b8b0f:L6b8b0f:{c.instructions+=3;NFSU2_TR(0x6b8b0f);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6b8b11:{NFSU2_TR(0x6b8b11);
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
B6b8b12:{NFSU2_TR(0x6b8b12);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b8b08u);}goto L6b8b08;}
}
B6b8b14:L6b8b14:{c.instructions+=15;NFSU2_TR(0x6b8b14);
__builtin_memmove((R+28),(R+28),4);
}
B6b8b16:{NFSU2_TR(0x6b8b16);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b8b17:{NFSU2_TR(0x6b8b17);
__builtin_memmove((R+20),(R+16),4);
}
B6b8b19:{NFSU2_TR(0x6b8b19);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x24ull))));
}
B6b8b1c:{NFSU2_TR(0x6b8b1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b8b1f:{NFSU2_TR(0x6b8b1f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b8b20:{NFSU2_TR(0x6b8b20);
__builtin_memmove((R+12),(R+4),4);
}
B6b8b22:{NFSU2_TR(0x6b8b22);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6b8b24:{NFSU2_TR(0x6b8b24);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b8b25:{NFSU2_TR(0x6b8b25);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6b8b27:{NFSU2_TR(0x6b8b27);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6b8b28:{NFSU2_TR(0x6b8b28);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(u32(0x10000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b8b2e:{NFSU2_TR(0x6b8b2e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b8b2f:{NFSU2_TR(0x6b8b2f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b8b32:{NFSU2_TR(0x6b8b32);
if(r1(R+518)){{goto L6b8b39;}}
}
B6b8b34:L6b8b34:{c.instructions+=2;NFSU2_TR(0x6b8b34);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b8b37:{NFSU2_TR(0x6b8b37);
__builtin_memmove((R+0),(R+4),4);
}
B6b8b39:L6b8b39:{c.instructions+=2;NFSU2_TR(0x6b8b39);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(u32(0x20000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b8b3f:{NFSU2_TR(0x6b8b3f);
if(r1(R+518)){{goto L6b8b46;}}
}
B6b8b41:L6b8b41:{c.instructions+=2;NFSU2_TR(0x6b8b41);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffecull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6b8b45:{NFSU2_TR(0x6b8b45);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6b8b46:L6b8b46:{c.instructions+=2;NFSU2_TR(0x6b8b46);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(u32(0x40000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b8b4c:{NFSU2_TR(0x6b8b4c);
if(r1(R+518)){{goto L6b8b57;}}
}
B6b8b4e:L6b8b4e:{c.instructions+=2;NFSU2_TR(0x6b8b4e);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffecull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
w4(U+12,u32(0x2ull));
s4(u32(r4(U+8)),r4(U+12));
}
B6b8b56:{NFSU2_TR(0x6b8b56);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6b8b57:L6b8b57:{c.instructions+=2;NFSU2_TR(0x6b8b57);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(u32(0x80000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b8b5d:{NFSU2_TR(0x6b8b5d);
if(r1(R+518)){{goto L6b8b68;}}
}
B6b8b5f:L6b8b5f:{c.instructions+=2;NFSU2_TR(0x6b8b5f);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffecull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
w4(U+12,u32(0x3ull));
s4(u32(r4(U+8)),r4(U+12));
}
B6b8b67:{NFSU2_TR(0x6b8b67);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6b8b68:L6b8b68:{c.instructions+=3;NFSU2_TR(0x6b8b68);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6b8b6b:{NFSU2_TR(0x6b8b6b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+24))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b8b6d:{NFSU2_TR(0x6b8b6d);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b8b71;}}
}
B6b8b6f:L6b8b6f:{c.instructions+=1;NFSU2_TR(0x6b8b6f);
__builtin_memmove((R+24),(R+0),4);
}
B6b8b71:L6b8b71:{c.instructions+=9;NFSU2_TR(0x6b8b71);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B6b8b74:{NFSU2_TR(0x6b8b74);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((R+28),(U+0),4);
}
B6b8b77:{NFSU2_TR(0x6b8b77);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6b8b78:{NFSU2_TR(0x6b8b78);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6b8b79:{NFSU2_TR(0x6b8b79);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6b8b7a:{NFSU2_TR(0x6b8b7a);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6b8b7c:{NFSU2_TR(0x6b8b7c);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b8b7e:{NFSU2_TR(0x6b8b7e);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6b8b7f:{NFSU2_TR(0x6b8b7f);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b8ba9;}}
}
B6b8b81:L6b8b81:{c.instructions+=4;NFSU2_TR(0x6b8b81);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b8b84:{NFSU2_TR(0x6b8b84);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6b8b87:{NFSU2_TR(0x6b8b87);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((R+28),(U+0),4);
}
B6b8b8a:{NFSU2_TR(0x6b8b8a);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+28))));
}
B6b8b8c:L6b8b8c:{c.instructions+=9;NFSU2_TR(0x6b8b8c);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffecull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+12),(U+12),4);
}
B6b8b90:{NFSU2_TR(0x6b8b90);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B6b8b93:{NFSU2_TR(0x6b8b93);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffecull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+28),(U+12),4);
}
B6b8b97:{NFSU2_TR(0x6b8b97);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6b8b9a:{NFSU2_TR(0x6b8b9a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6b8b9d:{NFSU2_TR(0x6b8b9d);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6b8b9e:{NFSU2_TR(0x6b8b9e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
}
B6b8ba0:{NFSU2_TR(0x6b8ba0);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffdcull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+28),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6b8ba4:{NFSU2_TR(0x6b8ba4);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b8b8cu);}goto L6b8b8c;}}
}
B6b8ba6:L6b8ba6:{c.instructions+=1;NFSU2_TR(0x6b8ba6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6b8ba9:L6b8ba9:{c.instructions+=4;NFSU2_TR(0x6b8ba9);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b8baf:{NFSU2_TR(0x6b8baf);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffffull))));
}
B6b8bb4:{NFSU2_TR(0x6b8bb4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x104ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b8bb9:{NFSU2_TR(0x6b8bb9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b8c0d;}}
}
B6b8bbb:L6b8bbb:{c.instructions+=3;NFSU2_TR(0x6b8bbb);
w4(R+28,u32(0x80b598ull));
}
B6b8bc0:{NFSU2_TR(0x6b8bc0);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6b8bc2:{NFSU2_TR(0x6b8bc2);
__builtin_memmove((R+12),(R+28),4);
}
B6b8bc4:L6b8bc4:{c.instructions+=5;NFSU2_TR(0x6b8bc4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b8bc7:{NFSU2_TR(0x6b8bc7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b8bc8:{NFSU2_TR(0x6b8bc8);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((R+0),(U+0),4);
}
B6b8bcb:{NFSU2_TR(0x6b8bcb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b8bcc:{NFSU2_TR(0x6b8bcc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b8bd1ull));
TAIL_STATIC(0x6bbdc2u,6bb);
}
B6b8bd1:L6b8bd1:{c.instructions+=2;NFSU2_TR(0x6b8bd1);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b8bd3:{NFSU2_TR(0x6b8bd3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b8be0;}}
}
B6b8bd5:L6b8bd5:{c.instructions+=4;NFSU2_TR(0x6b8bd5);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6b8bd6:{NFSU2_TR(0x6b8bd6);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x10ull))));
}
B6b8bd9:{NFSU2_TR(0x6b8bd9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(U+0))<(u32(0x5ull))));
}
B6b8bdc:{NFSU2_TR(0x6b8bdc);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b8bc4u);}goto L6b8bc4;}}
}
B6b8bde:L6b8bde:{c.instructions+=1;NFSU2_TR(0x6b8bde);
{goto L6b8be7;}
}
B6b8be0:L6b8be0:{c.instructions+=3;NFSU2_TR(0x6b8be0);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B6b8be3:{NFSU2_TR(0x6b8be3);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+28))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
}
B6b8be5:{NFSU2_TR(0x6b8be5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b8c5d;}}
}
B6b8be7:L6b8be7:{c.instructions+=7;NFSU2_TR(0x6b8be7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b8bea:{NFSU2_TR(0x6b8bea);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b8bf0:{NFSU2_TR(0x6b8bf0);
u8 U[4];
w4(U+0,u32(0x7bcdacull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b8bf5:{NFSU2_TR(0x6b8bf5);
u8 U[4];
w4(U+0,u32(0x11b5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b8bfa:{NFSU2_TR(0x6b8bfa);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b8bfd:{NFSU2_TR(0x6b8bfd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b8bfe:{NFSU2_TR(0x6b8bfe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b8c03ull));
TAIL_STATIC(0x69e936u,69e);
}
B6b8c03:L6b8c03:{c.instructions+=3;NFSU2_TR(0x6b8c03);
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
B6b8c06:{NFSU2_TR(0x6b8c06);
w4(R+0,u32(0x80004005ull));
}
B6b8c0b:{NFSU2_TR(0x6b8c0b);
{goto L6b8c7b;}
}
B6b8c0d:L6b8c0d:{c.instructions+=6;NFSU2_TR(0x6b8c0d);
w4(R+24,u32(0x80b5c8ull));
}
B6b8c12:{NFSU2_TR(0x6b8c12);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b8c13:{NFSU2_TR(0x6b8c13);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((R+0),(U+0),4);
}
B6b8c16:{NFSU2_TR(0x6b8c16);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b8c17:{NFSU2_TR(0x6b8c17);
__builtin_memmove((R+4),(R+12),4);
}
B6b8c19:{NFSU2_TR(0x6b8c19);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b8c1eull));
TAIL_STATIC(0x6bbdc2u,6bb);
}
B6b8c1e:L6b8c1e:{c.instructions+=2;NFSU2_TR(0x6b8c1e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b8c20:{NFSU2_TR(0x6b8c20);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b8c5d;}}
}
B6b8c22:L6b8c22:{c.instructions+=6;NFSU2_TR(0x6b8c22);
w4(R+24,u32(0x80b5d8ull));
}
B6b8c27:{NFSU2_TR(0x6b8c27);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b8c28:{NFSU2_TR(0x6b8c28);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((R+0),(U+0),4);
}
B6b8c2b:{NFSU2_TR(0x6b8c2b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b8c2c:{NFSU2_TR(0x6b8c2c);
__builtin_memmove((R+4),(R+12),4);
}
B6b8c2e:{NFSU2_TR(0x6b8c2e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b8c33ull));
TAIL_STATIC(0x6bbdc2u,6bb);
}
B6b8c33:L6b8c33:{c.instructions+=2;NFSU2_TR(0x6b8c33);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b8c35:{NFSU2_TR(0x6b8c35);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b8c5d;}}
}
B6b8c37:L6b8c37:{c.instructions+=6;NFSU2_TR(0x6b8c37);
w4(R+28,u32(0x80b5b8ull));
}
B6b8c3c:{NFSU2_TR(0x6b8c3c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b8c3d:{NFSU2_TR(0x6b8c3d);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((R+0),(U+0),4);
}
B6b8c40:{NFSU2_TR(0x6b8c40);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b8c41:{NFSU2_TR(0x6b8c41);
__builtin_memmove((R+4),(R+12),4);
}
B6b8c43:{NFSU2_TR(0x6b8c43);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b8c48ull));
TAIL_STATIC(0x6bbdc2u,6bb);
}
B6b8c48:L6b8c48:{c.instructions+=2;NFSU2_TR(0x6b8c48);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b8c4a:{NFSU2_TR(0x6b8c4a);
if(r1(R+518)){{goto L6b8c5d;}}
}
B6b8c4c:L6b8c4c:{c.instructions+=4;NFSU2_TR(0x6b8c4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b8c4f:{NFSU2_TR(0x6b8c4f);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xf0000ull))));
}
B6b8c54:{NFSU2_TR(0x6b8c54);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x80000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b8c59:{NFSU2_TR(0x6b8c59);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b8c5d;}}
}
B6b8c5b:L6b8c5b:{c.instructions+=1;NFSU2_TR(0x6b8c5b);
__builtin_memmove((R+24),(R+28),4);
}
B6b8c5d:L6b8c5d:{c.instructions+=4;NFSU2_TR(0x6b8c5d);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b8c5f:{NFSU2_TR(0x6b8c5f);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6b8c61:{NFSU2_TR(0x6b8c61);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6b8c62:{NFSU2_TR(0x6b8c62);
__builtin_memmove((R+0),(R+24),4);
}
B6b8c64:L6b8c64:{c.instructions+=8;NFSU2_TR(0x6b8c64);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+24),(U+0),4);
}
B6b8c66:{NFSU2_TR(0x6b8c66);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r1(U+0))));
}
B6b8c68:{NFSU2_TR(0x6b8c68);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B6b8c6b:{NFSU2_TR(0x6b8c6b);
w4(R+8,u32(u32(r4(R+8))|u32(r4(R+24))));
}
B6b8c6d:{NFSU2_TR(0x6b8c6d);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6b8c6e:{NFSU2_TR(0x6b8c6e);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6b8c6f:{NFSU2_TR(0x6b8c6f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x18ull))));
}
B6b8c72:{NFSU2_TR(0x6b8c72);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b8c64u);}goto L6b8c64;}}
}
B6b8c74:L6b8c74:{c.instructions+=3;NFSU2_TR(0x6b8c74);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b8c77:{NFSU2_TR(0x6b8c77);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6b8c79:{NFSU2_TR(0x6b8c79);
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
B6b8c7b:L6b8c7b:{c.instructions+=5;NFSU2_TR(0x6b8c7b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6b8c7c:{NFSU2_TR(0x6b8c7c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6b8c7d:{NFSU2_TR(0x6b8c7d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6b8c7e:{NFSU2_TR(0x6b8c7e);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6b8c7f:{NFSU2_TR(0x6b8c7f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6b8c82:L6b8c82:{c.instructions+=8;NFSU2_TR(0x6b8c82);
__builtin_memmove((R+28),(R+28),4);
}
B6b8c84:{NFSU2_TR(0x6b8c84);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b8c85:{NFSU2_TR(0x6b8c85);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b8c86:{NFSU2_TR(0x6b8c86);
__builtin_memmove((R+24),(R+4),4);
}
B6b8c88:{NFSU2_TR(0x6b8c88);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b8c89:{NFSU2_TR(0x6b8c89);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x22cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b8c8f:{NFSU2_TR(0x6b8c8f);
u8 U[4];
w4(U+0,u32(0x7bbfe0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B6b8c95:{NFSU2_TR(0x6b8c95);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b8c9aull));
TAIL_STATIC(0x575630u,575);
}
B6b8c9a:L6b8c9a:{c.instructions+=2;NFSU2_TR(0x6b8c9a);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x230ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b8ca0:{NFSU2_TR(0x6b8ca0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b8ca5ull));
TAIL_STATIC(0x575630u,575);
}
B6b8ca5:L6b8ca5:{c.instructions+=5;NFSU2_TR(0x6b8ca5);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6b8ca7:{NFSU2_TR(0x6b8ca7);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2b4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b8cad:{NFSU2_TR(0x6b8cad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6b8cae:{NFSU2_TR(0x6b8cae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6b8caf:{NFSU2_TR(0x6b8caf);
if(r1(R+518)){{goto L6b8cd6;}}
}
B6b8cb1:L6b8cb1:{c.instructions+=2;NFSU2_TR(0x6b8cb1);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2c0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b8cb7:{NFSU2_TR(0x6b8cb7);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b8cd6;}}
}
B6b8cb9:L6b8cb9:{c.instructions+=4;NFSU2_TR(0x6b8cb9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2b4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b8cbf:{NFSU2_TR(0x6b8cbf);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6b8cc2:{NFSU2_TR(0x6b8cc2);
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
B6b8cc4:{NFSU2_TR(0x6b8cc4);
if(r1(R+518)){{goto L6b8ccd;}}
}
B6b8cc6:L6b8cc6:{c.instructions+=2;NFSU2_TR(0x6b8cc6);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b8cc8:{NFSU2_TR(0x6b8cc8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b8ccdull));
TAIL_STATIC(0x6739efu,673);
}
B6b8ccd:L6b8ccd:{c.instructions+=3;NFSU2_TR(0x6b8ccd);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6b8cce:{NFSU2_TR(0x6b8cce);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2c0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B6b8cd4:{NFSU2_TR(0x6b8cd4);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b8cb9u);}goto L6b8cb9;}}
}
B6b8cd6:L6b8cd6:{c.instructions+=3;NFSU2_TR(0x6b8cd6);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6b8cd8:{NFSU2_TR(0x6b8cd8);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2b8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b8cde:{NFSU2_TR(0x6b8cde);
if(r1(R+518)){{goto L6b8d05;}}
}
B6b8ce0:L6b8ce0:{c.instructions+=2;NFSU2_TR(0x6b8ce0);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2bcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b8ce6:{NFSU2_TR(0x6b8ce6);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b8d05;}}
}
B6b8ce8:L6b8ce8:{c.instructions+=4;NFSU2_TR(0x6b8ce8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2b8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b8cee:{NFSU2_TR(0x6b8cee);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6b8cf1:{NFSU2_TR(0x6b8cf1);
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
B6b8cf3:{NFSU2_TR(0x6b8cf3);
if(r1(R+518)){{goto L6b8cfc;}}
}
B6b8cf5:L6b8cf5:{c.instructions+=2;NFSU2_TR(0x6b8cf5);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b8cf7:{NFSU2_TR(0x6b8cf7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b8cfcull));
TAIL_STATIC(0x6750fbu,675);
}
B6b8cfc:L6b8cfc:{c.instructions+=3;NFSU2_TR(0x6b8cfc);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6b8cfd:{NFSU2_TR(0x6b8cfd);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2bcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B6b8d03:{NFSU2_TR(0x6b8d03);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b8ce8u);}goto L6b8ce8;}}
}
B6b8d05:L6b8d05:{c.instructions+=3;NFSU2_TR(0x6b8d05);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b8d07:{NFSU2_TR(0x6b8d07);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2c4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6b8d0d:{NFSU2_TR(0x6b8d0d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6b8d0e:L6b8d0e:{c.instructions+=3;NFSU2_TR(0x6b8d0e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6b8d10:{NFSU2_TR(0x6b8d10);
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
B6b8d12:{NFSU2_TR(0x6b8d12);
if(r1(R+518)){{goto L6b8d1b;}}
}
B6b8d14:L6b8d14:{c.instructions+=2;NFSU2_TR(0x6b8d14);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b8d16:{NFSU2_TR(0x6b8d16);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b8d1bull));
TAIL_STATIC(0x6739efu,673);
}
B6b8d1b:L6b8d1b:{c.instructions+=4;NFSU2_TR(0x6b8d1b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0x0ull))));
s4(u32(r4(R+28)),r4(U+0));
}
B6b8d1e:{NFSU2_TR(0x6b8d1e);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B6b8d21:{NFSU2_TR(0x6b8d21);
w4(R+12,u32(u32(r4(R+12))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
}
B6b8d22:{NFSU2_TR(0x6b8d22);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b8d0eu);}goto L6b8d0e;}}
}
B6b8d24:L6b8d24:{c.instructions+=2;NFSU2_TR(0x6b8d24);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2b4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b8d2a:{NFSU2_TR(0x6b8d2a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b8d2full));
TAIL_STATIC(0x575630u,575);
}
B6b8d2f:L6b8d2f:{c.instructions+=2;NFSU2_TR(0x6b8d2f);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2b8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b8d35:{NFSU2_TR(0x6b8d35);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b8d3aull));
TAIL_STATIC(0x575630u,575);
}
B6b8d3a:L6b8d3a:{c.instructions+=7;NFSU2_TR(0x6b8d3a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6b8d3b:{NFSU2_TR(0x6b8d3b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6b8d3c:{NFSU2_TR(0x6b8d3c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6b8d3d:{NFSU2_TR(0x6b8d3d);
__builtin_memmove((R+4),(R+24),4);
}
B6b8d3f:{NFSU2_TR(0x6b8d3f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6b8d40:{NFSU2_TR(0x6b8d40);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6b8d41:{NFSU2_TR(0x6b8d41);
TAIL_STATIC(0x6cd245u,6cd);
}
B6b8d46:L6b8d46:{c.instructions+=9;NFSU2_TR(0x6b8d46);
__builtin_memmove((R+28),(R+28),4);
}
B6b8d48:{NFSU2_TR(0x6b8d48);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b8d49:{NFSU2_TR(0x6b8d49);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b8d4a:{NFSU2_TR(0x6b8d4a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b8d4b:{NFSU2_TR(0x6b8d4b);
__builtin_memmove((R+24),(R+4),4);
}
B6b8d4d:{NFSU2_TR(0x6b8d4d);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6b8d4f:{NFSU2_TR(0x6b8d4f);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b8d52:{NFSU2_TR(0x6b8d52);
w4(R+12,u32(0x11000000ull));
}
B6b8d57:{NFSU2_TR(0x6b8d57);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b8d87;}}
}
B6b8d59:L6b8d59:{c.instructions+=8;NFSU2_TR(0x6b8d59);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b8d5c:{NFSU2_TR(0x6b8d5c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b8d62:{NFSU2_TR(0x6b8d62);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6b8d65:{NFSU2_TR(0x6b8d65);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b8d6b:{NFSU2_TR(0x6b8d6b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6b8d6d:{NFSU2_TR(0x6b8d6d);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfff00000ull))));
}
B6b8d72:{NFSU2_TR(0x6b8d72);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b8d74:{NFSU2_TR(0x6b8d74);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b8d81;}}
}
B6b8d76:L6b8d76:{c.instructions+=2;NFSU2_TR(0x6b8d76);
__builtin_memmove((R+4),(R+24),4);
}
B6b8d78:{NFSU2_TR(0x6b8d78);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b8d7dull));
TAIL_STATIC(0x6af4d7u,6af);
}
B6b8d7d:L6b8d7d:{c.instructions+=2;NFSU2_TR(0x6b8d7d);
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
B6b8d7f:{NFSU2_TR(0x6b8d7f);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6b8dff;}}
}
B6b8d81:L6b8d81:{c.instructions+=3;NFSU2_TR(0x6b8d81);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6b8d82:{NFSU2_TR(0x6b8d82);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B6b8d85:{NFSU2_TR(0x6b8d85);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b8d59u);}goto L6b8d59;}}
}
B6b8d87:L6b8d87:{c.instructions+=2;NFSU2_TR(0x6b8d87);
__builtin_memmove((R+4),(R+24),4);
}
B6b8d89:{NFSU2_TR(0x6b8d89);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b8d8eull));
TAIL_STATIC(0x6c29d2u,6c2);
}
B6b8d8e:L6b8d8e:{c.instructions+=3;NFSU2_TR(0x6b8d8e);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6b8d90:{NFSU2_TR(0x6b8d90);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b8d93:{NFSU2_TR(0x6b8d93);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b8dc3;}}
}
B6b8d95:L6b8d95:{c.instructions+=8;NFSU2_TR(0x6b8d95);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b8d98:{NFSU2_TR(0x6b8d98);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b8d9e:{NFSU2_TR(0x6b8d9e);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6b8da1:{NFSU2_TR(0x6b8da1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b8da7:{NFSU2_TR(0x6b8da7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6b8da9:{NFSU2_TR(0x6b8da9);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfff00000ull))));
}
B6b8dae:{NFSU2_TR(0x6b8dae);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b8db0:{NFSU2_TR(0x6b8db0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b8dbd;}}
}
B6b8db2:L6b8db2:{c.instructions+=2;NFSU2_TR(0x6b8db2);
__builtin_memmove((R+4),(R+24),4);
}
B6b8db4:{NFSU2_TR(0x6b8db4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b8db9ull));
TAIL_STATIC(0x6af75fu,6af);
}
B6b8db9:L6b8db9:{c.instructions+=2;NFSU2_TR(0x6b8db9);
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
B6b8dbb:{NFSU2_TR(0x6b8dbb);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6b8dff;}}
}
B6b8dbd:L6b8dbd:{c.instructions+=3;NFSU2_TR(0x6b8dbd);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6b8dbe:{NFSU2_TR(0x6b8dbe);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B6b8dc1:{NFSU2_TR(0x6b8dc1);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b8d95u);}goto L6b8d95;}}
}
B6b8dc3:L6b8dc3:{c.instructions+=2;NFSU2_TR(0x6b8dc3);
__builtin_memmove((R+4),(R+24),4);
}
B6b8dc5:{NFSU2_TR(0x6b8dc5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b8dcaull));
TAIL_STATIC(0x6c29d2u,6c2);
}
B6b8dca:L6b8dca:{c.instructions+=2;NFSU2_TR(0x6b8dca);
__builtin_memmove((R+4),(R+24),4);
}
B6b8dcc:{NFSU2_TR(0x6b8dcc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b8dd1ull));
TAIL_STATIC(0x69f745u,69f);
}
B6b8dd1:L6b8dd1:{c.instructions+=2;NFSU2_TR(0x6b8dd1);
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
B6b8dd3:{NFSU2_TR(0x6b8dd3);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6b8dff;}}
}
B6b8dd5:L6b8dd5:{c.instructions+=2;NFSU2_TR(0x6b8dd5);
__builtin_memmove((R+4),(R+24),4);
}
B6b8dd7:{NFSU2_TR(0x6b8dd7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b8ddcull));
TAIL_STATIC(0x6a806fu,6a8);
}
B6b8ddc:L6b8ddc:{c.instructions+=2;NFSU2_TR(0x6b8ddc);
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
B6b8dde:{NFSU2_TR(0x6b8dde);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6b8dff;}}
}
B6b8de0:L6b8de0:{c.instructions+=2;NFSU2_TR(0x6b8de0);
__builtin_memmove((R+4),(R+24),4);
}
B6b8de2:{NFSU2_TR(0x6b8de2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b8de7ull));
TAIL_STATIC(0x69a74eu,69a);
}
B6b8de7:L6b8de7:{c.instructions+=2;NFSU2_TR(0x6b8de7);
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
B6b8de9:{NFSU2_TR(0x6b8de9);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6b8dff;}}
}
B6b8deb:L6b8deb:{c.instructions+=2;NFSU2_TR(0x6b8deb);
__builtin_memmove((R+4),(R+24),4);
}
B6b8ded:{NFSU2_TR(0x6b8ded);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b8df2ull));
TAIL_STATIC(0x6a0d84u,6a0);
}
B6b8df2:L6b8df2:{c.instructions+=2;NFSU2_TR(0x6b8df2);
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
B6b8df4:{NFSU2_TR(0x6b8df4);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6b8dff;}}
}
B6b8df6:L6b8df6:{c.instructions+=2;NFSU2_TR(0x6b8df6);
__builtin_memmove((R+4),(R+24),4);
}
B6b8df8:{NFSU2_TR(0x6b8df8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b8dfdull));
TAIL_STATIC(0x6c29d2u,6c2);
}
B6b8dfd:L6b8dfd:{c.instructions+=1;NFSU2_TR(0x6b8dfd);
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
B6b8dff:L6b8dff:{c.instructions+=4;NFSU2_TR(0x6b8dff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6b8e00:{NFSU2_TR(0x6b8e00);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6b8e01:{NFSU2_TR(0x6b8e01);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6b8e02:{NFSU2_TR(0x6b8e02);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6b8e03:L6b8e03:{c.instructions+=14;NFSU2_TR(0x6b8e03);
__builtin_memmove((R+28),(R+28),4);
}
B6b8e05:{NFSU2_TR(0x6b8e05);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b8e06:{NFSU2_TR(0x6b8e06);
__builtin_memmove((R+20),(R+16),4);
}
B6b8e08:{NFSU2_TR(0x6b8e08);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x104ull))));
}
B6b8e0e:{NFSU2_TR(0x6b8e0e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b8e0f:{NFSU2_TR(0x6b8e0f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b8e10:{NFSU2_TR(0x6b8e10);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6b8e12:{NFSU2_TR(0x6b8e12);
__builtin_memmove((R+24),(R+4),4);
}
B6b8e14:{NFSU2_TR(0x6b8e14);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6b8e16:{NFSU2_TR(0x6b8e16);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+8))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b8e19:{NFSU2_TR(0x6b8e19);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b8e1a:{NFSU2_TR(0x6b8e1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b8e1d:{NFSU2_TR(0x6b8e1d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b8e20:{NFSU2_TR(0x6b8e20);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b8e40;}}
}
B6b8e22:L6b8e22:{c.instructions+=6;NFSU2_TR(0x6b8e22);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b8e25:{NFSU2_TR(0x6b8e25);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6b8e28:{NFSU2_TR(0x6b8e28);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6b8e2b:{NFSU2_TR(0x6b8e2b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b8e2e:{NFSU2_TR(0x6b8e2e);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+28))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b8e34:{NFSU2_TR(0x6b8e34);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6b8e3a;}}
}
B6b8e36:L6b8e36:{c.instructions+=1;NFSU2_TR(0x6b8e36);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b8e3a:L6b8e3a:{c.instructions+=3;NFSU2_TR(0x6b8e3a);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6b8e3b:{NFSU2_TR(0x6b8e3b);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B6b8e3e:{NFSU2_TR(0x6b8e3e);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b8e22u);}goto L6b8e22;}}
}
B6b8e40:L6b8e40:{c.instructions+=2;NFSU2_TR(0x6b8e40);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b8e43:{NFSU2_TR(0x6b8e43);
{goto L6b8e73;}
}
B6b8e45:L6b8e45:{c.instructions+=4;NFSU2_TR(0x6b8e45);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x230ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b8e4b:{NFSU2_TR(0x6b8e4b);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6b8e4e:{NFSU2_TR(0x6b8e4e);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b8e50:{NFSU2_TR(0x6b8e50);
if(r1(R+518)){{goto L6b8e72;}}
}
B6b8e52:L6b8e52:{c.instructions+=2;NFSU2_TR(0x6b8e52);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+8))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6b8e54:{NFSU2_TR(0x6b8e54);
if(r1(R+518)){{goto L6b8e72;}}
}
B6b8e56:L6b8e56:{c.instructions+=2;NFSU2_TR(0x6b8e56);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+8))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b8e59:{NFSU2_TR(0x6b8e59);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6b8e72;}}
}
B6b8e5b:L6b8e5b:{c.instructions+=8;NFSU2_TR(0x6b8e5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6b8e5e:{NFSU2_TR(0x6b8e5e);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6b8e61:{NFSU2_TR(0x6b8e61);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6b8e64:{NFSU2_TR(0x6b8e64);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6b8e67:{NFSU2_TR(0x6b8e67);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6b8e68:{NFSU2_TR(0x6b8e68);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b8e6b:{NFSU2_TR(0x6b8e6b);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+8))));
}
B6b8e6e:{NFSU2_TR(0x6b8e6e);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b8e5bu);}goto L6b8e5b;}}
}
B6b8e70:L6b8e70:{c.instructions+=1;NFSU2_TR(0x6b8e70);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6b8e72:L6b8e72:{c.instructions+=1;NFSU2_TR(0x6b8e72);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6b8e73:L6b8e73:{c.instructions+=2;NFSU2_TR(0x6b8e73);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x224ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B6b8e79:{NFSU2_TR(0x6b8e79);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6b8e45u);}goto L6b8e45;}}
}
B6b8e7b:L6b8e7b:{c.instructions+=6;NFSU2_TR(0x6b8e7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x224ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b8e81:{NFSU2_TR(0x6b8e81);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b8e84:{NFSU2_TR(0x6b8e84);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B6b8e86:{NFSU2_TR(0x6b8e86);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b8e89:{NFSU2_TR(0x6b8e89);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b8e8c:{NFSU2_TR(0x6b8e8c);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){TAIL_STATIC(0x6b9678u,6b9);}
}
B6b8e92:L6b8e92:{c.instructions+=6;NFSU2_TR(0x6b8e92);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x230ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b8e98:{NFSU2_TR(0x6b8e98);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b8e9b:{NFSU2_TR(0x6b8e9b);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6b8e9e:{NFSU2_TR(0x6b8e9e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b8ea0:{NFSU2_TR(0x6b8ea0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b8ea3:{NFSU2_TR(0x6b8ea3);
if(r1(R+518)){TAIL_STATIC(0x6b9667u,6b9);}
}
B6b8ea9:L6b8ea9:{c.instructions+=2;NFSU2_TR(0x6b8ea9);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6b8eac:{NFSU2_TR(0x6b8eac);
if(r1(R+518)){TAIL_STATIC(0x6b9667u,6b9);}
}
B6b8eb2:L6b8eb2:{c.instructions+=2;NFSU2_TR(0x6b8eb2);
u8 U[4];
w4(U+0,u32(0x74ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b8eb4:{NFSU2_TR(0x6b8eb4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b8eb9ull));
TAIL_STATIC(0x699317u,699);
}
B6b8eb9:L6b8eb9:{c.instructions+=2;NFSU2_TR(0x6b8eb9);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b8ebb:{NFSU2_TR(0x6b8ebb);
if(r1(R+518)){{goto L6b8ec9;}}
}
B6b8ebd:L6b8ebd:{c.instructions+=2;NFSU2_TR(0x6b8ebd);
__builtin_memmove((R+4),(R+0),4);
}
B6b8ebf:{NFSU2_TR(0x6b8ebf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b8ec4ull));
TAIL_STATIC(0x698e7du,698);
}
B6b8ec4:L6b8ec4:{c.instructions+=2;NFSU2_TR(0x6b8ec4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b8ec7:{NFSU2_TR(0x6b8ec7);
{goto L6b8ecd;}
}
B6b8ec9:L6b8ec9:{c.instructions+=1;NFSU2_TR(0x6b8ec9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b8ecd:L6b8ecd:{c.instructions+=2;NFSU2_TR(0x6b8ecd);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b8ed1:{NFSU2_TR(0x6b8ed1);
if(r1(R+518)){TAIL_STATIC(0x6b96d0u,6b9);}
}
B6b8ed7:L6b8ed7:{c.instructions+=3;NFSU2_TR(0x6b8ed7);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b8eda:{NFSU2_TR(0x6b8eda);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6b8edd:{NFSU2_TR(0x6b8edd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b8ee2ull));
TAIL_STATIC(0x6995c1u,699);
}
B6b8ee2:L6b8ee2:{c.instructions+=3;NFSU2_TR(0x6b8ee2);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6b8ee4:{NFSU2_TR(0x6b8ee4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b8ee7:{NFSU2_TR(0x6b8ee7);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x6b96fbu,6b9);}
}
B6b8eed:L6b8eed:{c.instructions+=2;NFSU2_TR(0x6b8eed);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x224ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x200ull))));
}
B6b8ef7:{NFSU2_TR(0x6b8ef7);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){TAIL_STATIC(0x6b96d0u,6b9);}
}
B6b8efd:L6b8efd:{c.instructions+=7;NFSU2_TR(0x6b8efd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6b8f00:{NFSU2_TR(0x6b8f00);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6b8f02:{NFSU2_TR(0x6b8f02);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b8f06:{NFSU2_TR(0x6b8f06);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b8f0a:{NFSU2_TR(0x6b8f0a);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xfff00000ull))));
}
B6b8f10:{NFSU2_TR(0x6b8f10);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x50000000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b8f16:{NFSU2_TR(0x6b8f16);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6b907du,6b9);}
}
B6b8f1c:L6b8f1c:{c.instructions+=2;NFSU2_TR(0x6b8f1c);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b8f20:{NFSU2_TR(0x6b8f20);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6b907du,6b9);}
}
B6b8f26:L6b8f26:{c.instructions+=7;NFSU2_TR(0x6b8f26);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b8f29:{NFSU2_TR(0x6b8f29);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6b8f2b:{NFSU2_TR(0x6b8f2b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6b8f2e:{NFSU2_TR(0x6b8f2e);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6b8f31:{NFSU2_TR(0x6b8f31);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b8f35:{NFSU2_TR(0x6b8f35);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b8f38:{NFSU2_TR(0x6b8f38);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6b907du,6b9);}
}
B6b8f3e:L6b8f3e:{c.instructions+=13;NFSU2_TR(0x6b8f3e);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((R+4),(U+0),4);
}
B6b8f41:{NFSU2_TR(0x6b8f41);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b8f42:{NFSU2_TR(0x6b8f42);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6b8f45:{NFSU2_TR(0x6b8f45);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b8f46:{NFSU2_TR(0x6b8f46);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6b8f49:{NFSU2_TR(0x6b8f49);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b8f4a:{NFSU2_TR(0x6b8f4a);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b8f4c:{NFSU2_TR(0x6b8f4c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b8f4d:{NFSU2_TR(0x6b8f4d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b8f50:{NFSU2_TR(0x6b8f50);
__builtin_memmove((R+4),(R+24),4);
}
B6b8f52:{NFSU2_TR(0x6b8f52);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b8f55:{NFSU2_TR(0x6b8f55);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x230ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b8f5b:{NFSU2_TR(0x6b8f5b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b8f60ull));
TAIL_STATIC(0x6b4cb9u,6b4);
}
B6b8f60:L6b8f60:{c.instructions+=2;NFSU2_TR(0x6b8f60);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6b8f64:{NFSU2_TR(0x6b8f64);
if(r1(R+518)){TAIL_STATIC(0x6b90c0u,6b9);}
}
B6b8f6a:L6b8f6a:{c.instructions+=9;NFSU2_TR(0x6b8f6a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b8f6b:{NFSU2_TR(0x6b8f6b);
__asm__ volatile(".byte 0xd9,0xee":::"memory");
}
B6b8f6d:{NFSU2_TR(0x6b8f6d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b8f6e:{NFSU2_TR(0x6b8f6e);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6b8f71:{NFSU2_TR(0x6b8f71);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b8f73:{NFSU2_TR(0x6b8f73);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b8f75:{NFSU2_TR(0x6b8f75);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b8f7b:{NFSU2_TR(0x6b8f7b);
__builtin_memmove((R+4),(R+24),4);
}
B6b8f7d:{NFSU2_TR(0x6b8f7d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b8f82ull));
TAIL_STATIC(0x699c39u,699);
}
B6b8f82:L6b8f82:{c.instructions+=3;NFSU2_TR(0x6b8f82);
__builtin_memmove((R+12),(R+0),4);
}
B6b8f84:{NFSU2_TR(0x6b8f84);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6b8f87:{NFSU2_TR(0x6b8f87);
if(r1(R+518)){TAIL_STATIC(0x6b96d0u,6b9);}
}
B6b8f8d:L6b8f8d:{c.instructions+=5;NFSU2_TR(0x6b8f8d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b8f90:{NFSU2_TR(0x6b8f90);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6b8f93:{NFSU2_TR(0x6b8f93);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b8f96:{NFSU2_TR(0x6b8f96);
__builtin_memmove((R+4),(R+28),4);
}
B6b8f98:{NFSU2_TR(0x6b8f98);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b8f9dull));
TAIL_STATIC(0x699765u,699);
}
B6b8f9d:L6b8f9d:{c.instructions+=6;NFSU2_TR(0x6b8f9d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6b8fa3:{NFSU2_TR(0x6b8fa3);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6b8fa7:{NFSU2_TR(0x6b8fa7);
u8 U[4];
w4(U+0,u32(0x74ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b8fa9:{NFSU2_TR(0x6b8fa9);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b8fac:{NFSU2_TR(0x6b8fac);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6b8fb3:{NFSU2_TR(0x6b8fb3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b8fb8ull));
TAIL_STATIC(0x699317u,699);
}
B6b8fb8:L6b8fb8:{c.instructions+=2;NFSU2_TR(0x6b8fb8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b8fba:{NFSU2_TR(0x6b8fba);
if(r1(R+518)){{goto L6b8fc7;}}
}
B6b8fbc:L6b8fbc:{c.instructions+=2;NFSU2_TR(0x6b8fbc);
__builtin_memmove((R+4),(R+0),4);
}
B6b8fbe:{NFSU2_TR(0x6b8fbe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b8fc3ull));
TAIL_STATIC(0x698e7du,698);
}
B6b8fc3:L6b8fc3:{c.instructions+=2;NFSU2_TR(0x6b8fc3);
__builtin_memmove((R+28),(R+0),4);
}
B6b8fc5:{NFSU2_TR(0x6b8fc5);
{goto L6b8fc9;}
}
B6b8fc7:L6b8fc7:{c.instructions+=1;NFSU2_TR(0x6b8fc7);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6b8fc9:L6b8fc9:{c.instructions+=2;NFSU2_TR(0x6b8fc9);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6b8fcb:{NFSU2_TR(0x6b8fcb);
if(r1(R+518)){TAIL_STATIC(0x6b96d0u,6b9);}
}
B6b8fd1:L6b8fd1:{c.instructions+=6;NFSU2_TR(0x6b8fd1);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b8fd3:{NFSU2_TR(0x6b8fd3);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b8fd5:{NFSU2_TR(0x6b8fd5);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b8fd7:{NFSU2_TR(0x6b8fd7);
u8 U[4];
w4(U+0,u32(0x10000001ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6b8fdc:{NFSU2_TR(0x6b8fdc);
__builtin_memmove((R+4),(R+28),4);
}
B6b8fde:{NFSU2_TR(0x6b8fde);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b8fe3ull));
TAIL_STATIC(0x699362u,699);
}
B6b8fe3:L6b8fe3:{c.instructions+=3;NFSU2_TR(0x6b8fe3);
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
B6b8fe5:{NFSU2_TR(0x6b8fe5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b8fe8:{NFSU2_TR(0x6b8fe8);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x6b967du,6b9);}
}
B6b8fee:L6b8fee:{c.instructions+=3;NFSU2_TR(0x6b8fee);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6b8ff1:{NFSU2_TR(0x6b8ff1);
__builtin_memmove((R+4),(R+28),4);
}
B6b8ff3:{NFSU2_TR(0x6b8ff3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6b8ff8ull));
TAIL_STATIC(0x698eb3u,698);
}
B6b8ff8:L6b8ff8:{c.instructions+=3;NFSU2_TR(0x6b8ff8);
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
B6b8ffa:{NFSU2_TR(0x6b8ffa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6b8ffd:{NFSU2_TR(0x6b8ffd);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x6b967du,6b9);}
TAIL_STATIC(0x6b9003u,6b9);
}
XIT:NFSU2_TR_EXIT(0x6b8,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
