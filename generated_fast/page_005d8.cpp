#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_410(u8* __restrict R,Cpu& c);
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_502(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_5d4(u8* __restrict R,Cpu& c);
u32 body_5d9(u8* __restrict R,Cpu& c);
u32 body_5e5(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_75c(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x5d8,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x5d8,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_5d8(u8* __restrict R,Cpu& c);
u32 page_5d8(Cpu& c){return body_5d8(c.regs.data(),c);}
__attribute__((noinline)) u32 body_5d8(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x5d8000:goto L5d8000;
case 0x5d8003:c.instructions+=16;goto B5d8003;
case 0x5d8004:c.instructions+=15;goto B5d8004;
case 0x5d8007:c.instructions+=14;goto B5d8007;
case 0x5d800b:c.instructions+=13;goto B5d800b;
case 0x5d800e:c.instructions+=12;goto B5d800e;
case 0x5d8011:c.instructions+=11;goto B5d8011;
case 0x5d8015:c.instructions+=10;goto B5d8015;
case 0x5d8018:c.instructions+=9;goto B5d8018;
case 0x5d801a:c.instructions+=8;goto B5d801a;
case 0x5d801e:c.instructions+=7;goto B5d801e;
case 0x5d8021:c.instructions+=6;goto B5d8021;
case 0x5d8024:c.instructions+=5;goto B5d8024;
case 0x5d8028:c.instructions+=4;goto B5d8028;
case 0x5d802b:c.instructions+=3;goto B5d802b;
case 0x5d802e:c.instructions+=2;goto B5d802e;
case 0x5d8032:c.instructions+=1;goto B5d8032;
case 0x5d8037:goto L5d8037;
case 0x5d803b:c.instructions+=4;goto B5d803b;
case 0x5d803c:c.instructions+=3;goto B5d803c;
case 0x5d8040:c.instructions+=2;goto B5d8040;
case 0x5d8041:c.instructions+=1;goto B5d8041;
case 0x5d8046:goto L5d8046;
case 0x5d804a:c.instructions+=28;goto B5d804a;
case 0x5d804e:c.instructions+=27;goto B5d804e;
case 0x5d8052:c.instructions+=26;goto B5d8052;
case 0x5d8055:c.instructions+=25;goto B5d8055;
case 0x5d8058:c.instructions+=24;goto B5d8058;
case 0x5d805b:c.instructions+=23;goto B5d805b;
case 0x5d805e:c.instructions+=22;goto B5d805e;
case 0x5d8061:c.instructions+=21;goto B5d8061;
case 0x5d8063:c.instructions+=20;goto B5d8063;
case 0x5d8066:c.instructions+=19;goto B5d8066;
case 0x5d8069:c.instructions+=18;goto B5d8069;
case 0x5d806c:c.instructions+=17;goto B5d806c;
case 0x5d806e:c.instructions+=16;goto B5d806e;
case 0x5d8070:c.instructions+=15;goto B5d8070;
case 0x5d8072:c.instructions+=14;goto B5d8072;
case 0x5d8075:c.instructions+=13;goto B5d8075;
case 0x5d8077:c.instructions+=12;goto B5d8077;
case 0x5d807a:c.instructions+=11;goto B5d807a;
case 0x5d8080:c.instructions+=10;goto B5d8080;
case 0x5d8082:c.instructions+=9;goto B5d8082;
case 0x5d8085:c.instructions+=8;goto B5d8085;
case 0x5d8089:c.instructions+=7;goto B5d8089;
case 0x5d808c:c.instructions+=6;goto B5d808c;
case 0x5d808d:c.instructions+=5;goto B5d808d;
case 0x5d808e:c.instructions+=4;goto B5d808e;
case 0x5d808f:c.instructions+=3;goto B5d808f;
case 0x5d8091:c.instructions+=2;goto B5d8091;
case 0x5d8092:c.instructions+=1;goto B5d8092;
case 0x5d80a0:goto L5d80a0;
case 0x5d80a6:c.instructions+=4;goto B5d80a6;
case 0x5d80a7:c.instructions+=3;goto B5d80a7;
case 0x5d80a9:c.instructions+=2;goto B5d80a9;
case 0x5d80ab:c.instructions+=1;goto B5d80ab;
case 0x5d80ad:goto L5d80ad;
case 0x5d80af:goto L5d80af;
case 0x5d80b0:c.instructions+=3;goto B5d80b0;
case 0x5d80b1:c.instructions+=2;goto B5d80b1;
case 0x5d80b4:c.instructions+=1;goto B5d80b4;
case 0x5d80b6:goto L5d80b6;
case 0x5d80b8:c.instructions+=6;goto B5d80b8;
case 0x5d80bb:c.instructions+=5;goto B5d80bb;
case 0x5d80bd:c.instructions+=4;goto B5d80bd;
case 0x5d80c0:c.instructions+=3;goto B5d80c0;
case 0x5d80c1:c.instructions+=2;goto B5d80c1;
case 0x5d80c4:c.instructions+=1;goto B5d80c4;
case 0x5d80c6:goto L5d80c6;
case 0x5d80c7:c.instructions+=1;goto B5d80c7;
case 0x5d80c8:goto L5d80c8;
case 0x5d80ce:c.instructions+=4;goto B5d80ce;
case 0x5d80d4:c.instructions+=3;goto B5d80d4;
case 0x5d80da:c.instructions+=2;goto B5d80da;
case 0x5d80e0:c.instructions+=1;goto B5d80e0;
case 0x5d80e6:goto L5d80e6;
case 0x5d80e7:c.instructions+=1;goto B5d80e7;
case 0x5d80f0:goto L5d80f0;
case 0x5d80f1:c.instructions+=3;goto B5d80f1;
case 0x5d80f5:c.instructions+=2;goto B5d80f5;
case 0x5d80f7:c.instructions+=1;goto B5d80f7;
case 0x5d80f9:goto L5d80f9;
case 0x5d80fa:c.instructions+=4;goto B5d80fa;
case 0x5d8100:c.instructions+=3;goto B5d8100;
case 0x5d8105:c.instructions+=2;goto B5d8105;
case 0x5d8107:c.instructions+=1;goto B5d8107;
case 0x5d8109:goto L5d8109;
case 0x5d810f:c.instructions+=1;goto B5d810f;
case 0x5d8112:goto L5d8112;
case 0x5d8114:c.instructions+=1;goto B5d8114;
case 0x5d8116:goto L5d8116;
case 0x5d8117:c.instructions+=3;goto B5d8117;
case 0x5d811a:c.instructions+=2;goto B5d811a;
case 0x5d811c:c.instructions+=1;goto B5d811c;
case 0x5d811e:goto L5d811e;
case 0x5d811f:c.instructions+=2;goto B5d811f;
case 0x5d8120:c.instructions+=1;goto B5d8120;
case 0x5d8123:goto L5d8123;
case 0x5d8129:c.instructions+=2;goto B5d8129;
case 0x5d8130:c.instructions+=1;goto B5d8130;
case 0x5d8136:goto L5d8136;
case 0x5d8137:goto L5d8137;
case 0x5d8138:c.instructions+=1;goto B5d8138;
case 0x5d8140:goto L5d8140;
case 0x5d8141:c.instructions+=7;goto B5d8141;
case 0x5d8142:c.instructions+=6;goto B5d8142;
case 0x5d8146:c.instructions+=5;goto B5d8146;
case 0x5d8149:c.instructions+=4;goto B5d8149;
case 0x5d814c:c.instructions+=3;goto B5d814c;
case 0x5d8150:c.instructions+=2;goto B5d8150;
case 0x5d8152:c.instructions+=1;goto B5d8152;
case 0x5d8158:goto L5d8158;
case 0x5d815a:c.instructions+=2;goto B5d815a;
case 0x5d815b:c.instructions+=1;goto B5d815b;
case 0x5d8160:goto L5d8160;
case 0x5d8162:c.instructions+=2;goto B5d8162;
case 0x5d8167:c.instructions+=1;goto B5d8167;
case 0x5d8169:goto L5d8169;
case 0x5d816c:c.instructions+=31;goto B5d816c;
case 0x5d816f:c.instructions+=30;goto B5d816f;
case 0x5d8172:c.instructions+=29;goto B5d8172;
case 0x5d8176:c.instructions+=28;goto B5d8176;
case 0x5d8179:c.instructions+=27;goto B5d8179;
case 0x5d817c:c.instructions+=26;goto B5d817c;
case 0x5d817f:c.instructions+=25;goto B5d817f;
case 0x5d8182:c.instructions+=24;goto B5d8182;
case 0x5d8186:c.instructions+=23;goto B5d8186;
case 0x5d818a:c.instructions+=22;goto B5d818a;
case 0x5d818e:c.instructions+=21;goto B5d818e;
case 0x5d8192:c.instructions+=20;goto B5d8192;
case 0x5d8195:c.instructions+=19;goto B5d8195;
case 0x5d8198:c.instructions+=18;goto B5d8198;
case 0x5d819b:c.instructions+=17;goto B5d819b;
case 0x5d819e:c.instructions+=16;goto B5d819e;
case 0x5d81a1:c.instructions+=15;goto B5d81a1;
case 0x5d81a4:c.instructions+=14;goto B5d81a4;
case 0x5d81a7:c.instructions+=13;goto B5d81a7;
case 0x5d81aa:c.instructions+=12;goto B5d81aa;
case 0x5d81ac:c.instructions+=11;goto B5d81ac;
case 0x5d81af:c.instructions+=10;goto B5d81af;
case 0x5d81b2:c.instructions+=9;goto B5d81b2;
case 0x5d81b5:c.instructions+=8;goto B5d81b5;
case 0x5d81b8:c.instructions+=7;goto B5d81b8;
case 0x5d81bb:c.instructions+=6;goto B5d81bb;
case 0x5d81be:c.instructions+=5;goto B5d81be;
case 0x5d81c0:c.instructions+=4;goto B5d81c0;
case 0x5d81c3:c.instructions+=3;goto B5d81c3;
case 0x5d81c6:c.instructions+=2;goto B5d81c6;
case 0x5d81c9:c.instructions+=1;goto B5d81c9;
case 0x5d81cb:goto L5d81cb;
case 0x5d81d0:c.instructions+=1;goto B5d81d0;
case 0x5d81d2:goto L5d81d2;
case 0x5d81d5:c.instructions+=5;goto B5d81d5;
case 0x5d81d8:c.instructions+=4;goto B5d81d8;
case 0x5d81db:c.instructions+=3;goto B5d81db;
case 0x5d81de:c.instructions+=2;goto B5d81de;
case 0x5d81e1:c.instructions+=1;goto B5d81e1;
case 0x5d81e3:goto L5d81e3;
case 0x5d81e8:c.instructions+=1;goto B5d81e8;
case 0x5d81ea:goto L5d81ea;
case 0x5d81ed:c.instructions+=5;goto B5d81ed;
case 0x5d81f0:c.instructions+=4;goto B5d81f0;
case 0x5d81f3:c.instructions+=3;goto B5d81f3;
case 0x5d81f5:c.instructions+=2;goto B5d81f5;
case 0x5d81f8:c.instructions+=1;goto B5d81f8;
case 0x5d81fa:goto L5d81fa;
case 0x5d81ff:c.instructions+=1;goto B5d81ff;
case 0x5d8201:goto L5d8201;
case 0x5d8204:c.instructions+=5;goto B5d8204;
case 0x5d8207:c.instructions+=4;goto B5d8207;
case 0x5d820a:c.instructions+=3;goto B5d820a;
case 0x5d820d:c.instructions+=2;goto B5d820d;
case 0x5d8210:c.instructions+=1;goto B5d8210;
case 0x5d8212:goto L5d8212;
case 0x5d8217:c.instructions+=1;goto B5d8217;
case 0x5d8219:goto L5d8219;
case 0x5d821c:c.instructions+=4;goto B5d821c;
case 0x5d821f:c.instructions+=3;goto B5d821f;
case 0x5d8222:c.instructions+=2;goto B5d8222;
case 0x5d8225:c.instructions+=1;goto B5d8225;
case 0x5d8228:goto L5d8228;
case 0x5d822b:c.instructions+=5;goto B5d822b;
case 0x5d822f:c.instructions+=4;goto B5d822f;
case 0x5d8232:c.instructions+=3;goto B5d8232;
case 0x5d8236:c.instructions+=2;goto B5d8236;
case 0x5d8238:c.instructions+=1;goto B5d8238;
case 0x5d823e:goto L5d823e;
case 0x5d823f:goto L5d823f;
case 0x5d8240:c.instructions+=2;goto B5d8240;
case 0x5d8241:c.instructions+=1;goto B5d8241;
case 0x5d8250:goto L5d8250;
case 0x5d8251:c.instructions+=6;goto B5d8251;
case 0x5d8255:c.instructions+=5;goto B5d8255;
case 0x5d8258:c.instructions+=4;goto B5d8258;
case 0x5d825b:c.instructions+=3;goto B5d825b;
case 0x5d825f:c.instructions+=2;goto B5d825f;
case 0x5d8261:c.instructions+=1;goto B5d8261;
case 0x5d8263:goto L5d8263;
case 0x5d8264:c.instructions+=1;goto B5d8264;
case 0x5d8266:goto L5d8266;
case 0x5d8268:c.instructions+=2;goto B5d8268;
case 0x5d826d:c.instructions+=1;goto B5d826d;
case 0x5d826f:goto L5d826f;
case 0x5d8274:c.instructions+=1;goto B5d8274;
case 0x5d8276:goto L5d8276;
case 0x5d8279:c.instructions+=2;goto B5d8279;
case 0x5d827c:c.instructions+=1;goto B5d827c;
case 0x5d827e:goto L5d827e;
case 0x5d8283:c.instructions+=1;goto B5d8283;
case 0x5d8285:goto L5d8285;
case 0x5d8288:c.instructions+=2;goto B5d8288;
case 0x5d828b:c.instructions+=1;goto B5d828b;
case 0x5d828d:goto L5d828d;
case 0x5d8292:c.instructions+=1;goto B5d8292;
case 0x5d8294:goto L5d8294;
case 0x5d8297:c.instructions+=2;goto B5d8297;
case 0x5d829a:c.instructions+=1;goto B5d829a;
case 0x5d829c:goto L5d829c;
case 0x5d82a1:c.instructions+=1;goto B5d82a1;
case 0x5d82a3:goto L5d82a3;
case 0x5d82a6:c.instructions+=1;goto B5d82a6;
case 0x5d82a9:goto L5d82a9;
case 0x5d82ac:c.instructions+=5;goto B5d82ac;
case 0x5d82b0:c.instructions+=4;goto B5d82b0;
case 0x5d82b3:c.instructions+=3;goto B5d82b3;
case 0x5d82b7:c.instructions+=2;goto B5d82b7;
case 0x5d82b9:c.instructions+=1;goto B5d82b9;
case 0x5d82bb:goto L5d82bb;
case 0x5d82bc:goto L5d82bc;
case 0x5d82bd:c.instructions+=1;goto B5d82bd;
case 0x5d82c0:goto L5d82c0;
case 0x5d82c1:c.instructions+=5;goto B5d82c1;
case 0x5d82c4:c.instructions+=4;goto B5d82c4;
case 0x5d82c5:c.instructions+=3;goto B5d82c5;
case 0x5d82c8:c.instructions+=2;goto B5d82c8;
case 0x5d82ca:c.instructions+=1;goto B5d82ca;
case 0x5d82cc:goto L5d82cc;
case 0x5d82d0:goto L5d82d0;
case 0x5d82d6:c.instructions+=2;goto B5d82d6;
case 0x5d82d8:c.instructions+=1;goto B5d82d8;
case 0x5d82da:goto L5d82da;
case 0x5d82dd:c.instructions+=14;goto B5d82dd;
case 0x5d82e0:c.instructions+=13;goto B5d82e0;
case 0x5d82e3:c.instructions+=12;goto B5d82e3;
case 0x5d82e6:c.instructions+=11;goto B5d82e6;
case 0x5d82e8:c.instructions+=10;goto B5d82e8;
case 0x5d82eb:c.instructions+=9;goto B5d82eb;
case 0x5d82ee:c.instructions+=8;goto B5d82ee;
case 0x5d82f1:c.instructions+=7;goto B5d82f1;
case 0x5d82f4:c.instructions+=6;goto B5d82f4;
case 0x5d82f6:c.instructions+=5;goto B5d82f6;
case 0x5d82fc:c.instructions+=4;goto B5d82fc;
case 0x5d82fe:c.instructions+=3;goto B5d82fe;
case 0x5d8300:c.instructions+=2;goto B5d8300;
case 0x5d8303:c.instructions+=1;goto B5d8303;
case 0x5d8305:goto L5d8305;
case 0x5d8307:c.instructions+=1;goto B5d8307;
case 0x5d830c:goto L5d830c;
case 0x5d830f:c.instructions+=12;goto B5d830f;
case 0x5d8315:c.instructions+=11;goto B5d8315;
case 0x5d8318:c.instructions+=10;goto B5d8318;
case 0x5d831b:c.instructions+=9;goto B5d831b;
case 0x5d8321:c.instructions+=8;goto B5d8321;
case 0x5d8324:c.instructions+=7;goto B5d8324;
case 0x5d8327:c.instructions+=6;goto B5d8327;
case 0x5d832d:c.instructions+=5;goto B5d832d;
case 0x5d8330:c.instructions+=4;goto B5d8330;
case 0x5d8333:c.instructions+=3;goto B5d8333;
case 0x5d8339:c.instructions+=2;goto B5d8339;
case 0x5d833c:c.instructions+=1;goto B5d833c;
case 0x5d8341:goto L5d8341;
case 0x5d8343:c.instructions+=2;goto B5d8343;
case 0x5d8345:c.instructions+=1;goto B5d8345;
case 0x5d8347:goto L5d8347;
case 0x5d8348:c.instructions+=2;goto B5d8348;
case 0x5d8349:c.instructions+=1;goto B5d8349;
case 0x5d8350:goto L5d8350;
case 0x5d8356:c.instructions+=11;goto B5d8356;
case 0x5d8358:c.instructions+=10;goto B5d8358;
case 0x5d835d:c.instructions+=9;goto B5d835d;
case 0x5d835e:c.instructions+=8;goto B5d835e;
case 0x5d8365:c.instructions+=7;goto B5d8365;
case 0x5d8366:c.instructions+=6;goto B5d8366;
case 0x5d8367:c.instructions+=5;goto B5d8367;
case 0x5d8369:c.instructions+=4;goto B5d8369;
case 0x5d836d:c.instructions+=3;goto B5d836d;
case 0x5d836f:c.instructions+=2;goto B5d836f;
case 0x5d8374:c.instructions+=1;goto B5d8374;
case 0x5d8376:goto L5d8376;
case 0x5d837b:goto L5d837b;
case 0x5d837d:c.instructions+=4;goto B5d837d;
case 0x5d8382:c.instructions+=3;goto B5d8382;
case 0x5d8383:c.instructions+=2;goto B5d8383;
case 0x5d8385:c.instructions+=1;goto B5d8385;
case 0x5d838a:goto L5d838a;
case 0x5d838f:c.instructions+=2;goto B5d838f;
case 0x5d8394:c.instructions+=1;goto B5d8394;
case 0x5d8399:goto L5d8399;
case 0x5d839c:c.instructions+=4;goto B5d839c;
case 0x5d83a0:c.instructions+=3;goto B5d83a0;
case 0x5d83a2:c.instructions+=2;goto B5d83a2;
case 0x5d83aa:c.instructions+=1;goto B5d83aa;
case 0x5d83ac:goto L5d83ac;
case 0x5d83b1:c.instructions+=7;goto B5d83b1;
case 0x5d83b6:c.instructions+=6;goto B5d83b6;
case 0x5d83bb:c.instructions+=5;goto B5d83bb;
case 0x5d83be:c.instructions+=4;goto B5d83be;
case 0x5d83c3:c.instructions+=3;goto B5d83c3;
case 0x5d83c4:c.instructions+=2;goto B5d83c4;
case 0x5d83ca:c.instructions+=1;goto B5d83ca;
case 0x5d83cf:goto L5d83cf;
case 0x5d83d1:goto L5d83d1;
case 0x5d83d3:goto L5d83d3;
case 0x5d83d9:c.instructions+=2;goto B5d83d9;
case 0x5d83db:c.instructions+=1;goto B5d83db;
case 0x5d83e0:goto L5d83e0;
case 0x5d83e5:c.instructions+=9;goto B5d83e5;
case 0x5d83eb:c.instructions+=8;goto B5d83eb;
case 0x5d83ed:c.instructions+=7;goto B5d83ed;
case 0x5d83ef:c.instructions+=6;goto B5d83ef;
case 0x5d83f5:c.instructions+=5;goto B5d83f5;
case 0x5d83fb:c.instructions+=4;goto B5d83fb;
case 0x5d8400:c.instructions+=3;goto B5d8400;
case 0x5d8403:c.instructions+=2;goto B5d8403;
case 0x5d8409:c.instructions+=1;goto B5d8409;
case 0x5d840b:goto L5d840b;
case 0x5d8415:c.instructions+=5;goto B5d8415;
case 0x5d841f:c.instructions+=4;goto B5d841f;
case 0x5d8425:c.instructions+=3;goto B5d8425;
case 0x5d8427:c.instructions+=2;goto B5d8427;
case 0x5d8429:c.instructions+=1;goto B5d8429;
case 0x5d842b:goto L5d842b;
case 0x5d8430:goto L5d8430;
case 0x5d8436:c.instructions+=10;goto B5d8436;
case 0x5d8438:c.instructions+=9;goto B5d8438;
case 0x5d843b:c.instructions+=8;goto B5d843b;
case 0x5d843d:c.instructions+=7;goto B5d843d;
case 0x5d843f:c.instructions+=6;goto B5d843f;
case 0x5d8442:c.instructions+=5;goto B5d8442;
case 0x5d8445:c.instructions+=4;goto B5d8445;
case 0x5d844b:c.instructions+=3;goto B5d844b;
case 0x5d844c:c.instructions+=2;goto B5d844c;
case 0x5d844e:c.instructions+=1;goto B5d844e;
case 0x5d8450:goto L5d8450;
case 0x5d8454:c.instructions+=5;goto B5d8454;
case 0x5d8455:c.instructions+=4;goto B5d8455;
case 0x5d845c:c.instructions+=3;goto B5d845c;
case 0x5d845d:c.instructions+=2;goto B5d845d;
case 0x5d8460:c.instructions+=1;goto B5d8460;
case 0x5d8470:goto L5d8470;
case 0x5d8474:c.instructions+=2;goto B5d8474;
case 0x5d847a:c.instructions+=1;goto B5d847a;
case 0x5d847c:goto L5d847c;
case 0x5d847f:c.instructions+=13;goto B5d847f;
case 0x5d8481:c.instructions+=12;goto B5d8481;
case 0x5d8482:c.instructions+=11;goto B5d8482;
case 0x5d8485:c.instructions+=10;goto B5d8485;
case 0x5d8488:c.instructions+=9;goto B5d8488;
case 0x5d848a:c.instructions+=8;goto B5d848a;
case 0x5d848e:c.instructions+=7;goto B5d848e;
case 0x5d8493:c.instructions+=6;goto B5d8493;
case 0x5d8495:c.instructions+=5;goto B5d8495;
case 0x5d8498:c.instructions+=4;goto B5d8498;
case 0x5d849b:c.instructions+=3;goto B5d849b;
case 0x5d849d:c.instructions+=2;goto B5d849d;
case 0x5d849e:c.instructions+=1;goto B5d849e;
case 0x5d84a0:goto L5d84a0;
case 0x5d84a2:goto L5d84a2;
case 0x5d84a8:c.instructions+=7;goto B5d84a8;
case 0x5d84aa:c.instructions+=6;goto B5d84aa;
case 0x5d84af:c.instructions+=5;goto B5d84af;
case 0x5d84b2:c.instructions+=4;goto B5d84b2;
case 0x5d84b8:c.instructions+=3;goto B5d84b8;
case 0x5d84bb:c.instructions+=2;goto B5d84bb;
case 0x5d84bc:c.instructions+=1;goto B5d84bc;
case 0x5d84be:goto L5d84be;
case 0x5d84c3:c.instructions+=1;goto B5d84c3;
case 0x5d84c4:goto L5d84c4;
case 0x5d84c6:c.instructions+=1;goto B5d84c6;
case 0x5d84d0:goto L5d84d0;
case 0x5d84d4:c.instructions+=2;goto B5d84d4;
case 0x5d84da:c.instructions+=1;goto B5d84da;
case 0x5d84dc:goto L5d84dc;
case 0x5d84df:c.instructions+=12;goto B5d84df;
case 0x5d84e1:c.instructions+=11;goto B5d84e1;
case 0x5d84e4:c.instructions+=10;goto B5d84e4;
case 0x5d84e5:c.instructions+=9;goto B5d84e5;
case 0x5d84e8:c.instructions+=8;goto B5d84e8;
case 0x5d84ea:c.instructions+=7;goto B5d84ea;
case 0x5d84ee:c.instructions+=6;goto B5d84ee;
case 0x5d84f3:c.instructions+=5;goto B5d84f3;
case 0x5d84f5:c.instructions+=4;goto B5d84f5;
case 0x5d84f8:c.instructions+=3;goto B5d84f8;
case 0x5d84fb:c.instructions+=2;goto B5d84fb;
case 0x5d84fd:c.instructions+=1;goto B5d84fd;
case 0x5d84ff:goto L5d84ff;
case 0x5d8501:c.instructions+=1;goto B5d8501;
case 0x5d8503:goto L5d8503;
case 0x5d8505:c.instructions+=6;goto B5d8505;
case 0x5d8508:c.instructions+=5;goto B5d8508;
case 0x5d850b:c.instructions+=4;goto B5d850b;
case 0x5d850c:c.instructions+=3;goto B5d850c;
case 0x5d850e:c.instructions+=2;goto B5d850e;
case 0x5d8511:c.instructions+=1;goto B5d8511;
case 0x5d8513:goto L5d8513;
case 0x5d8518:c.instructions+=2;goto B5d8518;
case 0x5d8519:c.instructions+=1;goto B5d8519;
case 0x5d851a:goto L5d851a;
case 0x5d851c:c.instructions+=1;goto B5d851c;
case 0x5d8520:goto L5d8520;
case 0x5d8521:c.instructions+=5;goto B5d8521;
case 0x5d8527:c.instructions+=4;goto B5d8527;
case 0x5d8528:c.instructions+=3;goto B5d8528;
case 0x5d852d:c.instructions+=2;goto B5d852d;
case 0x5d852f:c.instructions+=1;goto B5d852f;
case 0x5d8534:goto L5d8534;
case 0x5d8536:c.instructions+=1;goto B5d8536;
case 0x5d8538:goto L5d8538;
case 0x5d853c:c.instructions+=1;goto B5d853c;
case 0x5d8540:goto L5d8540;
case 0x5d8543:c.instructions+=1;goto B5d8543;
case 0x5d8545:goto L5d8545;
case 0x5d8547:c.instructions+=1;goto B5d8547;
case 0x5d8549:goto L5d8549;
case 0x5d854c:c.instructions+=1;goto B5d854c;
case 0x5d854e:goto L5d854e;
case 0x5d854f:goto L5d854f;
case 0x5d8551:c.instructions+=2;goto B5d8551;
case 0x5d8553:c.instructions+=1;goto B5d8553;
case 0x5d8555:goto L5d8555;
case 0x5d8557:c.instructions+=3;goto B5d8557;
case 0x5d8558:c.instructions+=2;goto B5d8558;
case 0x5d8559:c.instructions+=1;goto B5d8559;
case 0x5d8560:goto L5d8560;
case 0x5d8565:c.instructions+=2;goto B5d8565;
case 0x5d8567:c.instructions+=1;goto B5d8567;
case 0x5d8569:goto L5d8569;
case 0x5d8570:c.instructions+=4;goto B5d8570;
case 0x5d8574:c.instructions+=3;goto B5d8574;
case 0x5d8575:c.instructions+=2;goto B5d8575;
case 0x5d8576:c.instructions+=1;goto B5d8576;
case 0x5d857b:goto L5d857b;
case 0x5d857e:c.instructions+=1;goto B5d857e;
case 0x5d857f:goto L5d857f;
case 0x5d8583:c.instructions+=4;goto B5d8583;
case 0x5d8585:c.instructions+=3;goto B5d8585;
case 0x5d8586:c.instructions+=2;goto B5d8586;
case 0x5d8587:c.instructions+=1;goto B5d8587;
case 0x5d858c:goto L5d858c;
case 0x5d858f:c.instructions+=1;goto B5d858f;
case 0x5d8590:goto L5d8590;
case 0x5d8594:c.instructions+=2;goto B5d8594;
case 0x5d8595:c.instructions+=1;goto B5d8595;
case 0x5d859a:goto L5d859a;
case 0x5d85a0:c.instructions+=3;goto B5d85a0;
case 0x5d85a3:c.instructions+=2;goto B5d85a3;
case 0x5d85a5:c.instructions+=1;goto B5d85a5;
case 0x5d85a7:goto L5d85a7;
case 0x5d85ae:c.instructions+=3;goto B5d85ae;
case 0x5d85af:c.instructions+=2;goto B5d85af;
case 0x5d85b0:c.instructions+=1;goto B5d85b0;
case 0x5d85b5:goto L5d85b5;
case 0x5d85b8:c.instructions+=1;goto B5d85b8;
case 0x5d85b9:goto L5d85b9;
case 0x5d85bb:c.instructions+=3;goto B5d85bb;
case 0x5d85bc:c.instructions+=2;goto B5d85bc;
case 0x5d85bd:c.instructions+=1;goto B5d85bd;
case 0x5d85c2:goto L5d85c2;
case 0x5d85c5:c.instructions+=1;goto B5d85c5;
case 0x5d85d0:goto L5d85d0;
case 0x5d85d1:c.instructions+=6;goto B5d85d1;
case 0x5d85d2:c.instructions+=5;goto B5d85d2;
case 0x5d85d8:c.instructions+=4;goto B5d85d8;
case 0x5d85d9:c.instructions+=3;goto B5d85d9;
case 0x5d85de:c.instructions+=2;goto B5d85de;
case 0x5d85e0:c.instructions+=1;goto B5d85e0;
case 0x5d85e5:goto L5d85e5;
case 0x5d85e7:c.instructions+=1;goto B5d85e7;
case 0x5d85e9:goto L5d85e9;
case 0x5d85ed:c.instructions+=2;goto B5d85ed;
case 0x5d85f1:c.instructions+=1;goto B5d85f1;
case 0x5d85f5:goto L5d85f5;
case 0x5d85f8:c.instructions+=1;goto B5d85f8;
case 0x5d85fa:goto L5d85fa;
case 0x5d85fc:c.instructions+=1;goto B5d85fc;
case 0x5d85fe:goto L5d85fe;
case 0x5d8601:c.instructions+=1;goto B5d8601;
case 0x5d8603:goto L5d8603;
case 0x5d8605:c.instructions+=1;goto B5d8605;
case 0x5d8607:goto L5d8607;
case 0x5d8608:goto L5d8608;
case 0x5d860a:c.instructions+=2;goto B5d860a;
case 0x5d860c:c.instructions+=1;goto B5d860c;
case 0x5d860e:goto L5d860e;
case 0x5d860f:c.instructions+=4;goto B5d860f;
case 0x5d8610:c.instructions+=3;goto B5d8610;
case 0x5d8612:c.instructions+=2;goto B5d8612;
case 0x5d8613:c.instructions+=1;goto B5d8613;
case 0x5d8614:goto L5d8614;
case 0x5d8615:c.instructions+=4;goto B5d8615;
case 0x5d8617:c.instructions+=3;goto B5d8617;
case 0x5d8618:c.instructions+=2;goto B5d8618;
case 0x5d8619:c.instructions+=1;goto B5d8619;
case 0x5d8620:goto L5d8620;
case 0x5d8625:c.instructions+=2;goto B5d8625;
case 0x5d8627:c.instructions+=1;goto B5d8627;
case 0x5d8629:goto L5d8629;
case 0x5d862d:c.instructions+=6;goto B5d862d;
case 0x5d8634:c.instructions+=5;goto B5d8634;
case 0x5d8638:c.instructions+=4;goto B5d8638;
case 0x5d8639:c.instructions+=3;goto B5d8639;
case 0x5d863a:c.instructions+=2;goto B5d863a;
case 0x5d863b:c.instructions+=1;goto B5d863b;
case 0x5d8640:goto L5d8640;
case 0x5d8643:c.instructions+=1;goto B5d8643;
case 0x5d8644:goto L5d8644;
case 0x5d8648:c.instructions+=6;goto B5d8648;
case 0x5d864c:c.instructions+=5;goto B5d864c;
case 0x5d864d:c.instructions+=4;goto B5d864d;
case 0x5d864f:c.instructions+=3;goto B5d864f;
case 0x5d8650:c.instructions+=2;goto B5d8650;
case 0x5d8651:c.instructions+=1;goto B5d8651;
case 0x5d8656:goto L5d8656;
case 0x5d8659:c.instructions+=1;goto B5d8659;
case 0x5d8660:goto L5d8660;
case 0x5d8664:c.instructions+=2;goto B5d8664;
case 0x5d8665:c.instructions+=1;goto B5d8665;
case 0x5d866a:goto L5d866a;
case 0x5d8670:c.instructions+=3;goto B5d8670;
case 0x5d8673:c.instructions+=2;goto B5d8673;
case 0x5d8675:c.instructions+=1;goto B5d8675;
case 0x5d8677:goto L5d8677;
case 0x5d867b:c.instructions+=5;goto B5d867b;
case 0x5d8682:c.instructions+=4;goto B5d8682;
case 0x5d8683:c.instructions+=3;goto B5d8683;
case 0x5d8684:c.instructions+=2;goto B5d8684;
case 0x5d8685:c.instructions+=1;goto B5d8685;
case 0x5d868a:goto L5d868a;
case 0x5d868d:c.instructions+=1;goto B5d868d;
case 0x5d868e:goto L5d868e;
case 0x5d8692:c.instructions+=5;goto B5d8692;
case 0x5d8693:c.instructions+=4;goto B5d8693;
case 0x5d8695:c.instructions+=3;goto B5d8695;
case 0x5d8696:c.instructions+=2;goto B5d8696;
case 0x5d8697:c.instructions+=1;goto B5d8697;
case 0x5d869c:goto L5d869c;
case 0x5d869f:c.instructions+=1;goto B5d869f;
case 0x5d86a0:goto L5d86a0;
case 0x5d86a3:c.instructions+=3;goto B5d86a3;
case 0x5d86a5:c.instructions+=2;goto B5d86a5;
case 0x5d86a7:c.instructions+=1;goto B5d86a7;
case 0x5d86a9:goto L5d86a9;
case 0x5d86ad:c.instructions+=1;goto B5d86ad;
case 0x5d86af:goto L5d86af;
case 0x5d86b3:goto L5d86b3;
case 0x5d86b6:c.instructions+=2;goto B5d86b6;
case 0x5d86b8:c.instructions+=1;goto B5d86b8;
case 0x5d86ba:goto L5d86ba;
case 0x5d86c1:c.instructions+=1;goto B5d86c1;
case 0x5d86c2:goto L5d86c2;
case 0x5d86c4:c.instructions+=1;goto B5d86c4;
case 0x5d86d0:goto L5d86d0;
case 0x5d86d3:c.instructions+=3;goto B5d86d3;
case 0x5d86d5:c.instructions+=2;goto B5d86d5;
case 0x5d86d7:c.instructions+=1;goto B5d86d7;
case 0x5d86d9:goto L5d86d9;
case 0x5d86dd:c.instructions+=1;goto B5d86dd;
case 0x5d86df:goto L5d86df;
case 0x5d86e3:goto L5d86e3;
case 0x5d86e5:c.instructions+=1;goto B5d86e5;
case 0x5d86e7:goto L5d86e7;
case 0x5d86eb:c.instructions+=1;goto B5d86eb;
case 0x5d86ed:goto L5d86ed;
case 0x5d86f1:goto L5d86f1;
case 0x5d86f4:c.instructions+=2;goto B5d86f4;
case 0x5d86f6:c.instructions+=1;goto B5d86f6;
case 0x5d86f8:goto L5d86f8;
case 0x5d86ff:c.instructions+=4;goto B5d86ff;
case 0x5d8702:c.instructions+=3;goto B5d8702;
case 0x5d8705:c.instructions+=2;goto B5d8705;
case 0x5d870c:c.instructions+=1;goto B5d870c;
case 0x5d870d:goto L5d870d;
case 0x5d8710:c.instructions+=4;goto B5d8710;
case 0x5d8713:c.instructions+=3;goto B5d8713;
case 0x5d8715:c.instructions+=2;goto B5d8715;
case 0x5d871c:c.instructions+=1;goto B5d871c;
case 0x5d8720:goto L5d8720;
case 0x5d8724:c.instructions+=2;goto B5d8724;
case 0x5d8727:c.instructions+=1;goto B5d8727;
case 0x5d8729:goto L5d8729;
case 0x5d872a:c.instructions+=1;goto B5d872a;
case 0x5d872c:goto L5d872c;
case 0x5d872d:c.instructions+=1;goto B5d872d;
case 0x5d872f:goto L5d872f;
case 0x5d8732:c.instructions+=5;goto B5d8732;
case 0x5d8736:c.instructions+=4;goto B5d8736;
case 0x5d8739:c.instructions+=3;goto B5d8739;
case 0x5d873c:c.instructions+=2;goto B5d873c;
case 0x5d873e:c.instructions+=1;goto B5d873e;
case 0x5d8741:goto L5d8741;
case 0x5d8744:goto L5d8744;
case 0x5d8748:c.instructions+=7;goto B5d8748;
case 0x5d874b:c.instructions+=6;goto B5d874b;
case 0x5d874e:c.instructions+=5;goto B5d874e;
case 0x5d8750:c.instructions+=4;goto B5d8750;
case 0x5d8755:c.instructions+=3;goto B5d8755;
case 0x5d8757:c.instructions+=2;goto B5d8757;
case 0x5d875a:c.instructions+=1;goto B5d875a;
case 0x5d8760:goto L5d8760;
case 0x5d8761:c.instructions+=7;goto B5d8761;
case 0x5d8762:c.instructions+=6;goto B5d8762;
case 0x5d8763:c.instructions+=5;goto B5d8763;
case 0x5d8765:c.instructions+=4;goto B5d8765;
case 0x5d8769:c.instructions+=3;goto B5d8769;
case 0x5d876b:c.instructions+=2;goto B5d876b;
case 0x5d876c:c.instructions+=1;goto B5d876c;
case 0x5d876e:goto L5d876e;
case 0x5d8775:c.instructions+=1;goto B5d8775;
case 0x5d8777:goto L5d8777;
case 0x5d8779:goto L5d8779;
case 0x5d877d:c.instructions+=5;goto B5d877d;
case 0x5d8780:c.instructions+=4;goto B5d8780;
case 0x5d8787:c.instructions+=3;goto B5d8787;
case 0x5d8789:c.instructions+=2;goto B5d8789;
case 0x5d878d:c.instructions+=1;goto B5d878d;
case 0x5d8792:goto L5d8792;
case 0x5d8794:c.instructions+=2;goto B5d8794;
case 0x5d8796:c.instructions+=1;goto B5d8796;
case 0x5d8798:goto L5d8798;
case 0x5d8799:c.instructions+=5;goto B5d8799;
case 0x5d879b:c.instructions+=4;goto B5d879b;
case 0x5d879c:c.instructions+=3;goto B5d879c;
case 0x5d879d:c.instructions+=2;goto B5d879d;
case 0x5d879e:c.instructions+=1;goto B5d879e;
case 0x5d879f:goto L5d879f;
case 0x5d87a2:c.instructions+=8;goto B5d87a2;
case 0x5d87a4:c.instructions+=7;goto B5d87a4;
case 0x5d87a7:c.instructions+=6;goto B5d87a7;
case 0x5d87a9:c.instructions+=5;goto B5d87a9;
case 0x5d87ac:c.instructions+=4;goto B5d87ac;
case 0x5d87ae:c.instructions+=3;goto B5d87ae;
case 0x5d87af:c.instructions+=2;goto B5d87af;
case 0x5d87b2:c.instructions+=1;goto B5d87b2;
case 0x5d87b4:goto L5d87b4;
case 0x5d87b8:c.instructions+=3;goto B5d87b8;
case 0x5d87ba:c.instructions+=2;goto B5d87ba;
case 0x5d87bf:c.instructions+=1;goto B5d87bf;
case 0x5d87c1:goto L5d87c1;
case 0x5d87c7:c.instructions+=1;goto B5d87c7;
case 0x5d87c9:goto L5d87c9;
case 0x5d87ce:goto L5d87ce;
case 0x5d87d2:c.instructions+=2;goto B5d87d2;
case 0x5d87d7:c.instructions+=1;goto B5d87d7;
case 0x5d87d9:goto L5d87d9;
case 0x5d87df:c.instructions+=1;goto B5d87df;
case 0x5d87e1:goto L5d87e1;
case 0x5d87e2:goto L5d87e2;
case 0x5d87e4:c.instructions+=1;goto B5d87e4;
case 0x5d87e6:goto L5d87e6;
case 0x5d87e7:c.instructions+=2;goto B5d87e7;
case 0x5d87e9:c.instructions+=1;goto B5d87e9;
case 0x5d87ee:goto L5d87ee;
case 0x5d87f0:c.instructions+=6;goto B5d87f0;
case 0x5d87f3:c.instructions+=5;goto B5d87f3;
case 0x5d87f5:c.instructions+=4;goto B5d87f5;
case 0x5d87f8:c.instructions+=3;goto B5d87f8;
case 0x5d87fa:c.instructions+=2;goto B5d87fa;
case 0x5d87fc:c.instructions+=1;goto B5d87fc;
case 0x5d87fe:goto L5d87fe;
case 0x5d8801:c.instructions+=2;goto B5d8801;
case 0x5d8804:c.instructions+=1;goto B5d8804;
case 0x5d8806:goto L5d8806;
case 0x5d880a:c.instructions+=1;goto B5d880a;
case 0x5d880c:goto L5d880c;
case 0x5d8810:goto L5d8810;
case 0x5d8813:c.instructions+=1;goto B5d8813;
case 0x5d8815:goto L5d8815;
case 0x5d8819:c.instructions+=1;goto B5d8819;
case 0x5d881b:goto L5d881b;
case 0x5d881f:goto L5d881f;
case 0x5d8822:c.instructions+=2;goto B5d8822;
case 0x5d8824:c.instructions+=1;goto B5d8824;
case 0x5d8826:goto L5d8826;
case 0x5d882d:c.instructions+=1;goto B5d882d;
case 0x5d882f:goto L5d882f;
case 0x5d8831:goto L5d8831;
case 0x5d8834:c.instructions+=4;goto B5d8834;
case 0x5d8837:c.instructions+=3;goto B5d8837;
case 0x5d883e:c.instructions+=2;goto B5d883e;
case 0x5d8842:c.instructions+=1;goto B5d8842;
case 0x5d8844:goto L5d8844;
case 0x5d8845:c.instructions+=1;goto B5d8845;
case 0x5d884a:goto L5d884a;
case 0x5d884b:c.instructions+=6;goto B5d884b;
case 0x5d884c:c.instructions+=5;goto B5d884c;
case 0x5d884e:c.instructions+=4;goto B5d884e;
case 0x5d884f:c.instructions+=3;goto B5d884f;
case 0x5d8850:c.instructions+=2;goto B5d8850;
case 0x5d8851:c.instructions+=1;goto B5d8851;
case 0x5d8852:goto L5d8852;
case 0x5d8853:c.instructions+=6;goto B5d8853;
case 0x5d8854:c.instructions+=5;goto B5d8854;
case 0x5d8855:c.instructions+=4;goto B5d8855;
case 0x5d8857:c.instructions+=3;goto B5d8857;
case 0x5d8858:c.instructions+=2;goto B5d8858;
case 0x5d8859:c.instructions+=1;goto B5d8859;
case 0x5d8860:goto L5d8860;
case 0x5d8861:c.instructions+=7;goto B5d8861;
case 0x5d8866:c.instructions+=6;goto B5d8866;
case 0x5d8867:c.instructions+=5;goto B5d8867;
case 0x5d8868:c.instructions+=4;goto B5d8868;
case 0x5d886a:c.instructions+=3;goto B5d886a;
case 0x5d886c:c.instructions+=2;goto B5d886c;
case 0x5d886e:c.instructions+=1;goto B5d886e;
case 0x5d8874:goto L5d8874;
case 0x5d8875:c.instructions+=4;goto B5d8875;
case 0x5d8876:c.instructions+=3;goto B5d8876;
case 0x5d887c:c.instructions+=2;goto B5d887c;
case 0x5d887e:c.instructions+=1;goto B5d887e;
case 0x5d8880:goto L5d8880;
case 0x5d8885:c.instructions+=3;goto B5d8885;
case 0x5d8888:c.instructions+=2;goto B5d8888;
case 0x5d888a:c.instructions+=1;goto B5d888a;
case 0x5d888c:goto L5d888c;
case 0x5d8893:c.instructions+=1;goto B5d8893;
case 0x5d8895:goto L5d8895;
case 0x5d8897:goto L5d8897;
case 0x5d889a:c.instructions+=3;goto B5d889a;
case 0x5d889d:c.instructions+=2;goto B5d889d;
case 0x5d889f:c.instructions+=1;goto B5d889f;
case 0x5d88a1:goto L5d88a1;
case 0x5d88a5:c.instructions+=3;goto B5d88a5;
case 0x5d88a8:c.instructions+=2;goto B5d88a8;
case 0x5d88ab:c.instructions+=1;goto B5d88ab;
case 0x5d88ad:goto L5d88ad;
case 0x5d88af:c.instructions+=1;goto B5d88af;
case 0x5d88b1:goto L5d88b1;
case 0x5d88b6:goto L5d88b6;
case 0x5d88b9:c.instructions+=2;goto B5d88b9;
case 0x5d88bb:c.instructions+=1;goto B5d88bb;
case 0x5d88bd:goto L5d88bd;
case 0x5d88c4:c.instructions+=1;goto B5d88c4;
case 0x5d88c6:goto L5d88c6;
case 0x5d88c8:goto L5d88c8;
case 0x5d88cb:c.instructions+=3;goto B5d88cb;
case 0x5d88ce:c.instructions+=2;goto B5d88ce;
case 0x5d88d0:c.instructions+=1;goto B5d88d0;
case 0x5d88d2:goto L5d88d2;
case 0x5d88d4:c.instructions+=5;goto B5d88d4;
case 0x5d88da:c.instructions+=4;goto B5d88da;
case 0x5d88e0:c.instructions+=3;goto B5d88e0;
case 0x5d88e4:c.instructions+=2;goto B5d88e4;
case 0x5d88e8:c.instructions+=1;goto B5d88e8;
case 0x5d88ea:goto L5d88ea;
case 0x5d88f0:goto L5d88f0;
case 0x5d88f2:c.instructions+=3;goto B5d88f2;
case 0x5d88f3:c.instructions+=2;goto B5d88f3;
case 0x5d88f6:c.instructions+=1;goto B5d88f6;
case 0x5d88fc:goto L5d88fc;
case 0x5d8901:c.instructions+=4;goto B5d8901;
case 0x5d8902:c.instructions+=3;goto B5d8902;
case 0x5d8905:c.instructions+=2;goto B5d8905;
case 0x5d8907:c.instructions+=1;goto B5d8907;
case 0x5d890d:goto L5d890d;
case 0x5d890e:c.instructions+=1;goto B5d890e;
case 0x5d890f:goto L5d890f;
case 0x5d8911:c.instructions+=4;goto B5d8911;
case 0x5d8912:c.instructions+=3;goto B5d8912;
case 0x5d8913:c.instructions+=2;goto B5d8913;
case 0x5d8914:c.instructions+=1;goto B5d8914;
case 0x5d8920:goto L5d8920;
case 0x5d8923:c.instructions+=4;goto B5d8923;
case 0x5d8926:c.instructions+=3;goto B5d8926;
case 0x5d8929:c.instructions+=2;goto B5d8929;
case 0x5d892c:c.instructions+=1;goto B5d892c;
case 0x5d892e:goto L5d892e;
case 0x5d8934:c.instructions+=1;goto B5d8934;
case 0x5d8936:goto L5d8936;
case 0x5d893c:c.instructions+=4;goto B5d893c;
case 0x5d8942:c.instructions+=3;goto B5d8942;
case 0x5d8944:c.instructions+=2;goto B5d8944;
case 0x5d8946:c.instructions+=1;goto B5d8946;
case 0x5d894b:goto L5d894b;
case 0x5d894d:c.instructions+=1;goto B5d894d;
case 0x5d8950:goto L5d8950;
case 0x5d8953:c.instructions+=5;goto B5d8953;
case 0x5d8956:c.instructions+=4;goto B5d8956;
case 0x5d8959:c.instructions+=3;goto B5d8959;
case 0x5d895c:c.instructions+=2;goto B5d895c;
case 0x5d895d:c.instructions+=1;goto B5d895d;
case 0x5d895f:goto L5d895f;
case 0x5d8965:c.instructions+=1;goto B5d8965;
case 0x5d8967:goto L5d8967;
case 0x5d896d:c.instructions+=5;goto B5d896d;
case 0x5d8973:c.instructions+=4;goto B5d8973;
case 0x5d8975:c.instructions+=3;goto B5d8975;
case 0x5d8977:c.instructions+=2;goto B5d8977;
case 0x5d8979:c.instructions+=1;goto B5d8979;
case 0x5d897e:goto L5d897e;
case 0x5d8980:c.instructions+=1;goto B5d8980;
case 0x5d8982:goto L5d8982;
case 0x5d8984:c.instructions+=2;goto B5d8984;
case 0x5d8985:c.instructions+=1;goto B5d8985;
case 0x5d8986:goto L5d8986;
case 0x5d8988:c.instructions+=2;goto B5d8988;
case 0x5d8989:c.instructions+=1;goto B5d8989;
case 0x5d8990:goto L5d8990;
case 0x5d8992:c.instructions+=1;goto B5d8992;
case 0x5d8994:goto L5d8994;
case 0x5d8997:c.instructions+=3;goto B5d8997;
case 0x5d899c:c.instructions+=2;goto B5d899c;
case 0x5d89a3:c.instructions+=1;goto B5d89a3;
case 0x5d89a4:goto L5d89a4;
case 0x5d89a6:c.instructions+=1;goto B5d89a6;
case 0x5d89b0:goto L5d89b0;
case 0x5d89b2:c.instructions+=1;goto B5d89b2;
case 0x5d89b4:goto L5d89b4;
case 0x5d89b7:c.instructions+=3;goto B5d89b7;
case 0x5d89bc:c.instructions+=2;goto B5d89bc;
case 0x5d89c3:c.instructions+=1;goto B5d89c3;
case 0x5d89c5:goto L5d89c5;
case 0x5d89c7:goto L5d89c7;
case 0x5d89c9:c.instructions+=10;goto B5d89c9;
case 0x5d89cf:c.instructions+=9;goto B5d89cf;
case 0x5d89d4:c.instructions+=8;goto B5d89d4;
case 0x5d89d6:c.instructions+=7;goto B5d89d6;
case 0x5d89d8:c.instructions+=6;goto B5d89d8;
case 0x5d89da:c.instructions+=5;goto B5d89da;
case 0x5d89dd:c.instructions+=4;goto B5d89dd;
case 0x5d89df:c.instructions+=3;goto B5d89df;
case 0x5d89e2:c.instructions+=2;goto B5d89e2;
case 0x5d89e4:c.instructions+=1;goto B5d89e4;
case 0x5d89f0:goto L5d89f0;
case 0x5d89f2:c.instructions+=2;goto B5d89f2;
case 0x5d89f3:c.instructions+=1;goto B5d89f3;
case 0x5d89f5:goto L5d89f5;
case 0x5d89f8:c.instructions+=3;goto B5d89f8;
case 0x5d89fd:c.instructions+=2;goto B5d89fd;
case 0x5d8a04:c.instructions+=1;goto B5d8a04;
case 0x5d8a06:goto L5d8a06;
case 0x5d8a08:goto L5d8a08;
case 0x5d8a0a:c.instructions+=9;goto B5d8a0a;
case 0x5d8a10:c.instructions+=8;goto B5d8a10;
case 0x5d8a15:c.instructions+=7;goto B5d8a15;
case 0x5d8a17:c.instructions+=6;goto B5d8a17;
case 0x5d8a19:c.instructions+=5;goto B5d8a19;
case 0x5d8a1c:c.instructions+=4;goto B5d8a1c;
case 0x5d8a1e:c.instructions+=3;goto B5d8a1e;
case 0x5d8a21:c.instructions+=2;goto B5d8a21;
case 0x5d8a23:c.instructions+=1;goto B5d8a23;
case 0x5d8a25:goto L5d8a25;
case 0x5d8a28:c.instructions+=3;goto B5d8a28;
case 0x5d8a2c:c.instructions+=2;goto B5d8a2c;
case 0x5d8a2d:c.instructions+=1;goto B5d8a2d;
case 0x5d8a2e:goto L5d8a2e;
case 0x5d8a30:c.instructions+=2;goto B5d8a30;
case 0x5d8a31:c.instructions+=1;goto B5d8a31;
case 0x5d8a40:goto L5d8a40;
case 0x5d8a42:c.instructions+=2;goto B5d8a42;
case 0x5d8a44:c.instructions+=1;goto B5d8a44;
case 0x5d8a46:goto L5d8a46;
case 0x5d8a49:c.instructions+=6;goto B5d8a49;
case 0x5d8a4d:c.instructions+=5;goto B5d8a4d;
case 0x5d8a53:c.instructions+=4;goto B5d8a53;
case 0x5d8a5a:c.instructions+=3;goto B5d8a5a;
case 0x5d8a5b:c.instructions+=2;goto B5d8a5b;
case 0x5d8a5c:c.instructions+=1;goto B5d8a5c;
case 0x5d8a61:goto L5d8a61;
case 0x5d8a64:goto L5d8a64;
case 0x5d8a68:c.instructions+=4;goto B5d8a68;
case 0x5d8a69:c.instructions+=3;goto B5d8a69;
case 0x5d8a6b:c.instructions+=2;goto B5d8a6b;
case 0x5d8a6c:c.instructions+=1;goto B5d8a6c;
case 0x5d8a71:goto L5d8a71;
case 0x5d8a80:goto L5d8a80;
case 0x5d8a84:c.instructions+=18;goto B5d8a84;
case 0x5d8a86:c.instructions+=17;goto B5d8a86;
case 0x5d8a88:c.instructions+=16;goto B5d8a88;
case 0x5d8a8b:c.instructions+=15;goto B5d8a8b;
case 0x5d8a8e:c.instructions+=14;goto B5d8a8e;
case 0x5d8a93:c.instructions+=13;goto B5d8a93;
case 0x5d8a95:c.instructions+=12;goto B5d8a95;
case 0x5d8a97:c.instructions+=11;goto B5d8a97;
case 0x5d8a99:c.instructions+=10;goto B5d8a99;
case 0x5d8a9b:c.instructions+=9;goto B5d8a9b;
case 0x5d8a9d:c.instructions+=8;goto B5d8a9d;
case 0x5d8a9f:c.instructions+=7;goto B5d8a9f;
case 0x5d8aa1:c.instructions+=6;goto B5d8aa1;
case 0x5d8aa3:c.instructions+=5;goto B5d8aa3;
case 0x5d8aa5:c.instructions+=4;goto B5d8aa5;
case 0x5d8aa9:c.instructions+=3;goto B5d8aa9;
case 0x5d8aac:c.instructions+=2;goto B5d8aac;
case 0x5d8ab0:c.instructions+=1;goto B5d8ab0;
case 0x5d8ab2:goto L5d8ab2;
case 0x5d8ab8:c.instructions+=6;goto B5d8ab8;
case 0x5d8aba:c.instructions+=5;goto B5d8aba;
case 0x5d8abc:c.instructions+=4;goto B5d8abc;
case 0x5d8abe:c.instructions+=3;goto B5d8abe;
case 0x5d8ac0:c.instructions+=2;goto B5d8ac0;
case 0x5d8ac3:c.instructions+=1;goto B5d8ac3;
case 0x5d8ac5:goto L5d8ac5;
case 0x5d8acb:c.instructions+=1;goto B5d8acb;
case 0x5d8acd:goto L5d8acd;
case 0x5d8ad3:c.instructions+=3;goto B5d8ad3;
case 0x5d8ad5:c.instructions+=2;goto B5d8ad5;
case 0x5d8ad8:c.instructions+=1;goto B5d8ad8;
case 0x5d8ada:goto L5d8ada;
case 0x5d8ae0:goto L5d8ae0;
case 0x5d8ae2:c.instructions+=6;goto B5d8ae2;
case 0x5d8ae8:c.instructions+=5;goto B5d8ae8;
case 0x5d8aec:c.instructions+=4;goto B5d8aec;
case 0x5d8aee:c.instructions+=3;goto B5d8aee;
case 0x5d8af0:c.instructions+=2;goto B5d8af0;
case 0x5d8af3:c.instructions+=1;goto B5d8af3;
case 0x5d8af5:goto L5d8af5;
case 0x5d8af7:c.instructions+=1;goto B5d8af7;
case 0x5d8afb:goto L5d8afb;
case 0x5d8b00:goto L5d8b00;
case 0x5d8b01:c.instructions+=20;goto B5d8b01;
case 0x5d8b03:c.instructions+=19;goto B5d8b03;
case 0x5d8b06:c.instructions+=18;goto B5d8b06;
case 0x5d8b09:c.instructions+=17;goto B5d8b09;
case 0x5d8b0a:c.instructions+=16;goto B5d8b0a;
case 0x5d8b0c:c.instructions+=15;goto B5d8b0c;
case 0x5d8b10:c.instructions+=14;goto B5d8b10;
case 0x5d8b12:c.instructions+=13;goto B5d8b12;
case 0x5d8b15:c.instructions+=12;goto B5d8b15;
case 0x5d8b18:c.instructions+=11;goto B5d8b18;
case 0x5d8b1c:c.instructions+=10;goto B5d8b1c;
case 0x5d8b20:c.instructions+=9;goto B5d8b20;
case 0x5d8b23:c.instructions+=8;goto B5d8b23;
case 0x5d8b27:c.instructions+=7;goto B5d8b27;
case 0x5d8b2b:c.instructions+=6;goto B5d8b2b;
case 0x5d8b2c:c.instructions+=5;goto B5d8b2c;
case 0x5d8b32:c.instructions+=4;goto B5d8b32;
case 0x5d8b36:c.instructions+=3;goto B5d8b36;
case 0x5d8b37:c.instructions+=2;goto B5d8b37;
case 0x5d8b3b:c.instructions+=1;goto B5d8b3b;
case 0x5d8b40:goto L5d8b40;
case 0x5d8b45:c.instructions+=6;goto B5d8b45;
case 0x5d8b49:c.instructions+=5;goto B5d8b49;
case 0x5d8b4c:c.instructions+=4;goto B5d8b4c;
case 0x5d8b4f:c.instructions+=3;goto B5d8b4f;
case 0x5d8b51:c.instructions+=2;goto B5d8b51;
case 0x5d8b54:c.instructions+=1;goto B5d8b54;
case 0x5d8b56:goto L5d8b56;
case 0x5d8b5c:c.instructions+=6;goto B5d8b5c;
case 0x5d8b5e:c.instructions+=5;goto B5d8b5e;
case 0x5d8b60:c.instructions+=4;goto B5d8b60;
case 0x5d8b62:c.instructions+=3;goto B5d8b62;
case 0x5d8b64:c.instructions+=2;goto B5d8b64;
case 0x5d8b67:c.instructions+=1;goto B5d8b67;
case 0x5d8b69:goto L5d8b69;
case 0x5d8b6f:c.instructions+=1;goto B5d8b6f;
case 0x5d8b71:goto L5d8b71;
case 0x5d8b77:c.instructions+=3;goto B5d8b77;
case 0x5d8b79:c.instructions+=2;goto B5d8b79;
case 0x5d8b7c:c.instructions+=1;goto B5d8b7c;
case 0x5d8b7e:goto L5d8b7e;
case 0x5d8b84:goto L5d8b84;
case 0x5d8b86:c.instructions+=6;goto B5d8b86;
case 0x5d8b8c:c.instructions+=5;goto B5d8b8c;
case 0x5d8b90:c.instructions+=4;goto B5d8b90;
case 0x5d8b92:c.instructions+=3;goto B5d8b92;
case 0x5d8b94:c.instructions+=2;goto B5d8b94;
case 0x5d8b97:c.instructions+=1;goto B5d8b97;
case 0x5d8b99:goto L5d8b99;
case 0x5d8b9b:c.instructions+=1;goto B5d8b9b;
case 0x5d8b9f:goto L5d8b9f;
case 0x5d8ba0:c.instructions+=3;goto B5d8ba0;
case 0x5d8ba2:c.instructions+=2;goto B5d8ba2;
case 0x5d8ba3:c.instructions+=1;goto B5d8ba3;
case 0x5d8bb0:goto L5d8bb0;
case 0x5d8bb4:c.instructions+=2;goto B5d8bb4;
case 0x5d8bb7:c.instructions+=1;goto B5d8bb7;
case 0x5d8bb9:goto L5d8bb9;
case 0x5d8bba:c.instructions+=1;goto B5d8bba;
case 0x5d8bbc:goto L5d8bbc;
case 0x5d8bbd:c.instructions+=1;goto B5d8bbd;
case 0x5d8bbf:goto L5d8bbf;
case 0x5d8bc1:c.instructions+=1;goto B5d8bc1;
case 0x5d8bc4:goto L5d8bc4;
case 0x5d8bc7:c.instructions+=3;goto B5d8bc7;
case 0x5d8bca:c.instructions+=2;goto B5d8bca;
case 0x5d8bcd:c.instructions+=1;goto B5d8bcd;
case 0x5d8bd0:goto L5d8bd0;
case 0x5d8bd3:c.instructions+=3;goto B5d8bd3;
case 0x5d8bd6:c.instructions+=2;goto B5d8bd6;
case 0x5d8bd9:c.instructions+=1;goto B5d8bd9;
case 0x5d8bdc:goto L5d8bdc;
case 0x5d8bdf:c.instructions+=3;goto B5d8bdf;
case 0x5d8be2:c.instructions+=2;goto B5d8be2;
case 0x5d8be5:c.instructions+=1;goto B5d8be5;
case 0x5d8bf0:goto L5d8bf0;
case 0x5d8bf2:c.instructions+=1;goto B5d8bf2;
case 0x5d8bf4:goto L5d8bf4;
case 0x5d8bf6:c.instructions+=1;goto B5d8bf6;
case 0x5d8bf8:goto L5d8bf8;
case 0x5d8bfa:c.instructions+=2;goto B5d8bfa;
case 0x5d8bfd:c.instructions+=1;goto B5d8bfd;
case 0x5d8bff:goto L5d8bff;
case 0x5d8c00:c.instructions+=1;goto B5d8c00;
case 0x5d8c02:goto L5d8c02;
case 0x5d8c03:c.instructions+=1;goto B5d8c03;
case 0x5d8c05:goto L5d8c05;
case 0x5d8c08:c.instructions+=2;goto B5d8c08;
case 0x5d8c0b:c.instructions+=1;goto B5d8c0b;
case 0x5d8c0d:goto L5d8c0d;
case 0x5d8c10:c.instructions+=2;goto B5d8c10;
case 0x5d8c13:c.instructions+=1;goto B5d8c13;
case 0x5d8c15:goto L5d8c15;
case 0x5d8c18:c.instructions+=1;goto B5d8c18;
case 0x5d8c1b:goto L5d8c1b;
case 0x5d8c1e:c.instructions+=2;goto B5d8c1e;
case 0x5d8c20:c.instructions+=1;goto B5d8c20;
case 0x5d8c22:goto L5d8c22;
case 0x5d8c24:c.instructions+=1;goto B5d8c24;
case 0x5d8c26:goto L5d8c26;
case 0x5d8c28:goto L5d8c28;
case 0x5d8c29:c.instructions+=2;goto B5d8c29;
case 0x5d8c2c:c.instructions+=1;goto B5d8c2c;
case 0x5d8c2e:goto L5d8c2e;
case 0x5d8c31:c.instructions+=1;goto B5d8c31;
case 0x5d8c40:goto L5d8c40;
case 0x5d8c42:c.instructions+=1;goto B5d8c42;
case 0x5d8c44:goto L5d8c44;
case 0x5d8c46:c.instructions+=1;goto B5d8c46;
case 0x5d8c48:goto L5d8c48;
case 0x5d8c4a:c.instructions+=2;goto B5d8c4a;
case 0x5d8c4d:c.instructions+=1;goto B5d8c4d;
case 0x5d8c4f:goto L5d8c4f;
case 0x5d8c50:c.instructions+=1;goto B5d8c50;
case 0x5d8c52:goto L5d8c52;
case 0x5d8c53:c.instructions+=1;goto B5d8c53;
case 0x5d8c55:goto L5d8c55;
case 0x5d8c58:c.instructions+=2;goto B5d8c58;
case 0x5d8c5b:c.instructions+=1;goto B5d8c5b;
case 0x5d8c5d:goto L5d8c5d;
case 0x5d8c60:c.instructions+=2;goto B5d8c60;
case 0x5d8c63:c.instructions+=1;goto B5d8c63;
case 0x5d8c65:goto L5d8c65;
case 0x5d8c68:c.instructions+=1;goto B5d8c68;
case 0x5d8c6b:goto L5d8c6b;
case 0x5d8c6e:c.instructions+=2;goto B5d8c6e;
case 0x5d8c70:c.instructions+=1;goto B5d8c70;
case 0x5d8c72:goto L5d8c72;
case 0x5d8c74:c.instructions+=1;goto B5d8c74;
case 0x5d8c76:goto L5d8c76;
case 0x5d8c78:goto L5d8c78;
case 0x5d8c79:c.instructions+=2;goto B5d8c79;
case 0x5d8c7c:c.instructions+=1;goto B5d8c7c;
case 0x5d8c7e:goto L5d8c7e;
case 0x5d8c81:c.instructions+=1;goto B5d8c81;
case 0x5d8c90:goto L5d8c90;
case 0x5d8c93:c.instructions+=11;goto B5d8c93;
case 0x5d8c94:c.instructions+=10;goto B5d8c94;
case 0x5d8c96:c.instructions+=9;goto B5d8c96;
case 0x5d8c9a:c.instructions+=8;goto B5d8c9a;
case 0x5d8c9b:c.instructions+=7;goto B5d8c9b;
case 0x5d8c9d:c.instructions+=6;goto B5d8c9d;
case 0x5d8c9f:c.instructions+=5;goto B5d8c9f;
case 0x5d8ca1:c.instructions+=4;goto B5d8ca1;
case 0x5d8ca5:c.instructions+=3;goto B5d8ca5;
case 0x5d8cad:c.instructions+=2;goto B5d8cad;
case 0x5d8cb1:c.instructions+=1;goto B5d8cb1;
case 0x5d8cb7:goto L5d8cb7;
case 0x5d8cb8:c.instructions+=3;goto B5d8cb8;
case 0x5d8cbe:c.instructions+=2;goto B5d8cbe;
case 0x5d8cbf:c.instructions+=1;goto B5d8cbf;
case 0x5d8cc3:goto L5d8cc3;
case 0x5d8cc5:c.instructions+=4;goto B5d8cc5;
case 0x5d8cc8:c.instructions+=3;goto B5d8cc8;
case 0x5d8cca:c.instructions+=2;goto B5d8cca;
case 0x5d8cd1:c.instructions+=1;goto B5d8cd1;
case 0x5d8cd3:goto L5d8cd3;
case 0x5d8cd7:c.instructions+=3;goto B5d8cd7;
case 0x5d8cd8:c.instructions+=2;goto B5d8cd8;
case 0x5d8cd9:c.instructions+=1;goto B5d8cd9;
case 0x5d8cde:goto L5d8cde;
case 0x5d8ce0:goto L5d8ce0;
case 0x5d8ce2:c.instructions+=3;goto B5d8ce2;
case 0x5d8ce5:c.instructions+=2;goto B5d8ce5;
case 0x5d8ce9:c.instructions+=1;goto B5d8ce9;
case 0x5d8ceb:goto L5d8ceb;
case 0x5d8cf1:c.instructions+=6;goto B5d8cf1;
case 0x5d8cf3:c.instructions+=5;goto B5d8cf3;
case 0x5d8cf5:c.instructions+=4;goto B5d8cf5;
case 0x5d8cf7:c.instructions+=3;goto B5d8cf7;
case 0x5d8cf9:c.instructions+=2;goto B5d8cf9;
case 0x5d8cfc:c.instructions+=1;goto B5d8cfc;
case 0x5d8cfe:goto L5d8cfe;
case 0x5d8d04:c.instructions+=1;goto B5d8d04;
case 0x5d8d06:goto L5d8d06;
case 0x5d8d0c:c.instructions+=3;goto B5d8d0c;
case 0x5d8d0e:c.instructions+=2;goto B5d8d0e;
case 0x5d8d11:c.instructions+=1;goto B5d8d11;
case 0x5d8d13:goto L5d8d13;
case 0x5d8d19:goto L5d8d19;
case 0x5d8d1b:c.instructions+=4;goto B5d8d1b;
case 0x5d8d1f:c.instructions+=3;goto B5d8d1f;
case 0x5d8d22:c.instructions+=2;goto B5d8d22;
case 0x5d8d26:c.instructions+=1;goto B5d8d26;
case 0x5d8d28:goto L5d8d28;
case 0x5d8d2e:c.instructions+=6;goto B5d8d2e;
case 0x5d8d30:c.instructions+=5;goto B5d8d30;
case 0x5d8d32:c.instructions+=4;goto B5d8d32;
case 0x5d8d34:c.instructions+=3;goto B5d8d34;
case 0x5d8d36:c.instructions+=2;goto B5d8d36;
case 0x5d8d39:c.instructions+=1;goto B5d8d39;
case 0x5d8d3b:goto L5d8d3b;
case 0x5d8d41:c.instructions+=1;goto B5d8d41;
case 0x5d8d43:goto L5d8d43;
case 0x5d8d49:c.instructions+=3;goto B5d8d49;
case 0x5d8d4b:c.instructions+=2;goto B5d8d4b;
case 0x5d8d4e:c.instructions+=1;goto B5d8d4e;
case 0x5d8d50:goto L5d8d50;
case 0x5d8d56:goto L5d8d56;
case 0x5d8d5c:c.instructions+=3;goto B5d8d5c;
case 0x5d8d5e:c.instructions+=2;goto B5d8d5e;
case 0x5d8d61:c.instructions+=1;goto B5d8d61;
case 0x5d8d63:goto L5d8d63;
case 0x5d8d65:c.instructions+=1;goto B5d8d65;
case 0x5d8d67:goto L5d8d67;
case 0x5d8d69:goto L5d8d69;
case 0x5d8d6f:c.instructions+=3;goto B5d8d6f;
case 0x5d8d71:c.instructions+=2;goto B5d8d71;
case 0x5d8d74:c.instructions+=1;goto B5d8d74;
case 0x5d8d76:goto L5d8d76;
case 0x5d8d7a:c.instructions+=3;goto B5d8d7a;
case 0x5d8d7c:c.instructions+=2;goto B5d8d7c;
case 0x5d8d7f:c.instructions+=1;goto B5d8d7f;
case 0x5d8d81:goto L5d8d81;
case 0x5d8d83:c.instructions+=1;goto B5d8d83;
case 0x5d8d85:goto L5d8d85;
case 0x5d8d89:c.instructions+=1;goto B5d8d89;
case 0x5d8d8d:goto L5d8d8d;
case 0x5d8d93:c.instructions+=1;goto B5d8d93;
case 0x5d8d98:goto L5d8d98;
case 0x5d8d9d:c.instructions+=3;goto B5d8d9d;
case 0x5d8d9f:c.instructions+=2;goto B5d8d9f;
case 0x5d8da1:c.instructions+=1;goto B5d8da1;
case 0x5d8da3:goto L5d8da3;
case 0x5d8da5:goto L5d8da5;
case 0x5d8da9:c.instructions+=3;goto B5d8da9;
case 0x5d8daa:c.instructions+=2;goto B5d8daa;
case 0x5d8dac:c.instructions+=1;goto B5d8dac;
case 0x5d8db2:goto L5d8db2;
case 0x5d8db6:c.instructions+=2;goto B5d8db6;
case 0x5d8db7:c.instructions+=1;goto B5d8db7;
case 0x5d8db8:goto L5d8db8;
case 0x5d8db9:c.instructions+=3;goto B5d8db9;
case 0x5d8dba:c.instructions+=2;goto B5d8dba;
case 0x5d8dbd:c.instructions+=1;goto B5d8dbd;
case 0x5d8dc0:goto L5d8dc0;
case 0x5d8dc2:c.instructions+=5;goto B5d8dc2;
case 0x5d8dc5:c.instructions+=4;goto B5d8dc5;
case 0x5d8dc7:c.instructions+=3;goto B5d8dc7;
case 0x5d8dca:c.instructions+=2;goto B5d8dca;
case 0x5d8dcc:c.instructions+=1;goto B5d8dcc;
case 0x5d8dce:goto L5d8dce;
case 0x5d8dd2:c.instructions+=4;goto B5d8dd2;
case 0x5d8dd5:c.instructions+=3;goto B5d8dd5;
case 0x5d8dd9:c.instructions+=2;goto B5d8dd9;
case 0x5d8ddd:c.instructions+=1;goto B5d8ddd;
case 0x5d8ddf:goto L5d8ddf;
case 0x5d8de3:c.instructions+=3;goto B5d8de3;
case 0x5d8de6:c.instructions+=2;goto B5d8de6;
case 0x5d8dea:c.instructions+=1;goto B5d8dea;
case 0x5d8dee:goto L5d8dee;
case 0x5d8df1:c.instructions+=3;goto B5d8df1;
case 0x5d8df7:c.instructions+=2;goto B5d8df7;
case 0x5d8df9:c.instructions+=1;goto B5d8df9;
case 0x5d8dfb:goto L5d8dfb;
case 0x5d8dff:c.instructions+=4;goto B5d8dff;
case 0x5d8e02:c.instructions+=3;goto B5d8e02;
case 0x5d8e06:c.instructions+=2;goto B5d8e06;
case 0x5d8e0a:c.instructions+=1;goto B5d8e0a;
case 0x5d8e0c:goto L5d8e0c;
case 0x5d8e10:c.instructions+=3;goto B5d8e10;
case 0x5d8e13:c.instructions+=2;goto B5d8e13;
case 0x5d8e17:c.instructions+=1;goto B5d8e17;
case 0x5d8e1b:goto L5d8e1b;
case 0x5d8e1d:c.instructions+=6;goto B5d8e1d;
case 0x5d8e23:c.instructions+=5;goto B5d8e23;
case 0x5d8e25:c.instructions+=4;goto B5d8e25;
case 0x5d8e2b:c.instructions+=3;goto B5d8e2b;
case 0x5d8e2f:c.instructions+=2;goto B5d8e2f;
case 0x5d8e31:c.instructions+=1;goto B5d8e31;
case 0x5d8e33:goto L5d8e33;
case 0x5d8e37:c.instructions+=4;goto B5d8e37;
case 0x5d8e3a:c.instructions+=3;goto B5d8e3a;
case 0x5d8e3e:c.instructions+=2;goto B5d8e3e;
case 0x5d8e42:c.instructions+=1;goto B5d8e42;
case 0x5d8e44:goto L5d8e44;
case 0x5d8e48:c.instructions+=3;goto B5d8e48;
case 0x5d8e4b:c.instructions+=2;goto B5d8e4b;
case 0x5d8e4f:c.instructions+=1;goto B5d8e4f;
case 0x5d8e53:goto L5d8e53;
case 0x5d8e59:c.instructions+=6;goto B5d8e59;
case 0x5d8e5f:c.instructions+=5;goto B5d8e5f;
case 0x5d8e63:c.instructions+=4;goto B5d8e63;
case 0x5d8e65:c.instructions+=3;goto B5d8e65;
case 0x5d8e67:c.instructions+=2;goto B5d8e67;
case 0x5d8e6a:c.instructions+=1;goto B5d8e6a;
case 0x5d8e6c:goto L5d8e6c;
case 0x5d8e6e:c.instructions+=1;goto B5d8e6e;
case 0x5d8e72:goto L5d8e72;
case 0x5d8e75:c.instructions+=1;goto B5d8e75;
case 0x5d8e77:goto L5d8e77;
case 0x5d8e7b:c.instructions+=4;goto B5d8e7b;
case 0x5d8e7e:c.instructions+=3;goto B5d8e7e;
case 0x5d8e82:c.instructions+=2;goto B5d8e82;
case 0x5d8e86:c.instructions+=1;goto B5d8e86;
case 0x5d8e88:goto L5d8e88;
case 0x5d8e8c:c.instructions+=3;goto B5d8e8c;
case 0x5d8e8f:c.instructions+=2;goto B5d8e8f;
case 0x5d8e93:c.instructions+=1;goto B5d8e93;
case 0x5d8e97:goto L5d8e97;
case 0x5d8e9d:c.instructions+=6;goto B5d8e9d;
case 0x5d8ea3:c.instructions+=5;goto B5d8ea3;
case 0x5d8ea7:c.instructions+=4;goto B5d8ea7;
case 0x5d8ea9:c.instructions+=3;goto B5d8ea9;
case 0x5d8eab:c.instructions+=2;goto B5d8eab;
case 0x5d8eae:c.instructions+=1;goto B5d8eae;
case 0x5d8eb0:goto L5d8eb0;
case 0x5d8eb4:c.instructions+=3;goto B5d8eb4;
case 0x5d8eb6:c.instructions+=2;goto B5d8eb6;
case 0x5d8eba:c.instructions+=1;goto B5d8eba;
case 0x5d8ebc:goto L5d8ebc;
case 0x5d8ec0:goto L5d8ec0;
case 0x5d8ec4:c.instructions+=6;goto B5d8ec4;
case 0x5d8ec8:c.instructions+=5;goto B5d8ec8;
case 0x5d8ecc:c.instructions+=4;goto B5d8ecc;
case 0x5d8ece:c.instructions+=3;goto B5d8ece;
case 0x5d8ed0:c.instructions+=2;goto B5d8ed0;
case 0x5d8ed3:c.instructions+=1;goto B5d8ed3;
case 0x5d8ed5:goto L5d8ed5;
case 0x5d8ed7:c.instructions+=1;goto B5d8ed7;
case 0x5d8edb:goto L5d8edb;
case 0x5d8edf:c.instructions+=4;goto B5d8edf;
case 0x5d8ee1:c.instructions+=3;goto B5d8ee1;
case 0x5d8ee3:c.instructions+=2;goto B5d8ee3;
case 0x5d8ee6:c.instructions+=1;goto B5d8ee6;
case 0x5d8ee8:goto L5d8ee8;
case 0x5d8eea:c.instructions+=1;goto B5d8eea;
case 0x5d8eee:goto L5d8eee;
case 0x5d8ef2:c.instructions+=2;goto B5d8ef2;
case 0x5d8ef5:c.instructions+=1;goto B5d8ef5;
case 0x5d8f00:goto L5d8f00;
case 0x5d8f04:c.instructions+=12;goto B5d8f04;
case 0x5d8f0a:c.instructions+=11;goto B5d8f0a;
case 0x5d8f0b:c.instructions+=10;goto B5d8f0b;
case 0x5d8f0c:c.instructions+=9;goto B5d8f0c;
case 0x5d8f0d:c.instructions+=8;goto B5d8f0d;
case 0x5d8f0e:c.instructions+=7;goto B5d8f0e;
case 0x5d8f10:c.instructions+=6;goto B5d8f10;
case 0x5d8f16:c.instructions+=5;goto B5d8f16;
case 0x5d8f19:c.instructions+=4;goto B5d8f19;
case 0x5d8f1d:c.instructions+=3;goto B5d8f1d;
case 0x5d8f1f:c.instructions+=2;goto B5d8f1f;
case 0x5d8f21:c.instructions+=1;goto B5d8f21;
case 0x5d8f24:goto L5d8f24;
case 0x5d8f28:c.instructions+=4;goto B5d8f28;
case 0x5d8f2a:c.instructions+=3;goto B5d8f2a;
case 0x5d8f2c:c.instructions+=2;goto B5d8f2c;
case 0x5d8f34:c.instructions+=1;goto B5d8f34;
case 0x5d8f36:goto L5d8f36;
case 0x5d8f38:c.instructions+=4;goto B5d8f38;
case 0x5d8f3e:c.instructions+=3;goto B5d8f3e;
case 0x5d8f40:c.instructions+=2;goto B5d8f40;
case 0x5d8f42:c.instructions+=1;goto B5d8f42;
case 0x5d8f44:goto L5d8f44;
case 0x5d8f47:c.instructions+=8;goto B5d8f47;
case 0x5d8f4a:c.instructions+=7;goto B5d8f4a;
case 0x5d8f4e:c.instructions+=6;goto B5d8f4e;
case 0x5d8f50:c.instructions+=5;goto B5d8f50;
case 0x5d8f52:c.instructions+=4;goto B5d8f52;
case 0x5d8f54:c.instructions+=3;goto B5d8f54;
case 0x5d8f56:c.instructions+=2;goto B5d8f56;
case 0x5d8f59:c.instructions+=1;goto B5d8f59;
case 0x5d8f5b:goto L5d8f5b;
case 0x5d8f5d:c.instructions+=1;goto B5d8f5d;
case 0x5d8f5f:goto L5d8f5f;
case 0x5d8f61:c.instructions+=4;goto B5d8f61;
case 0x5d8f63:c.instructions+=3;goto B5d8f63;
case 0x5d8f65:c.instructions+=2;goto B5d8f65;
case 0x5d8f67:c.instructions+=1;goto B5d8f67;
case 0x5d8f69:goto L5d8f69;
case 0x5d8f6d:c.instructions+=4;goto B5d8f6d;
case 0x5d8f6f:c.instructions+=3;goto B5d8f6f;
case 0x5d8f71:c.instructions+=2;goto B5d8f71;
case 0x5d8f74:c.instructions+=1;goto B5d8f74;
case 0x5d8f76:goto L5d8f76;
case 0x5d8f78:c.instructions+=1;goto B5d8f78;
case 0x5d8f7c:goto L5d8f7c;
case 0x5d8f7d:c.instructions+=3;goto B5d8f7d;
case 0x5d8f81:c.instructions+=2;goto B5d8f81;
case 0x5d8f83:c.instructions+=1;goto B5d8f83;
case 0x5d8f85:goto L5d8f85;
case 0x5d8f87:c.instructions+=1;goto B5d8f87;
case 0x5d8f89:goto L5d8f89;
case 0x5d8f8d:c.instructions+=2;goto B5d8f8d;
case 0x5d8f93:c.instructions+=1;goto B5d8f93;
case 0x5d8f98:goto L5d8f98;
case 0x5d8f9a:c.instructions+=7;goto B5d8f9a;
case 0x5d8f9d:c.instructions+=6;goto B5d8f9d;
case 0x5d8fa1:c.instructions+=5;goto B5d8fa1;
case 0x5d8fa4:c.instructions+=4;goto B5d8fa4;
case 0x5d8fa5:c.instructions+=3;goto B5d8fa5;
case 0x5d8fa8:c.instructions+=2;goto B5d8fa8;
case 0x5d8fab:c.instructions+=1;goto B5d8fab;
case 0x5d8fb1:goto L5d8fb1;
case 0x5d8fb2:c.instructions+=6;goto B5d8fb2;
case 0x5d8fb4:c.instructions+=5;goto B5d8fb4;
case 0x5d8fb5:c.instructions+=4;goto B5d8fb5;
case 0x5d8fb7:c.instructions+=3;goto B5d8fb7;
case 0x5d8fb8:c.instructions+=2;goto B5d8fb8;
case 0x5d8fb9:c.instructions+=1;goto B5d8fb9;
case 0x5d8fc0:goto L5d8fc0;
case 0x5d8fc3:c.instructions+=7;goto B5d8fc3;
case 0x5d8fc7:c.instructions+=6;goto B5d8fc7;
case 0x5d8fc8:c.instructions+=5;goto B5d8fc8;
case 0x5d8fca:c.instructions+=4;goto B5d8fca;
case 0x5d8fd0:c.instructions+=3;goto B5d8fd0;
case 0x5d8fd4:c.instructions+=2;goto B5d8fd4;
case 0x5d8fdc:c.instructions+=1;goto B5d8fdc;
case 0x5d8fe2:goto L5d8fe2;
case 0x5d8fe3:c.instructions+=10;goto B5d8fe3;
case 0x5d8fe7:c.instructions+=9;goto B5d8fe7;
case 0x5d8fea:c.instructions+=8;goto B5d8fea;
case 0x5d8feb:c.instructions+=7;goto B5d8feb;
case 0x5d8fee:c.instructions+=6;goto B5d8fee;
case 0x5d8ff2:c.instructions+=5;goto B5d8ff2;
case 0x5d8ff3:c.instructions+=4;goto B5d8ff3;
case 0x5d8ff7:c.instructions+=3;goto B5d8ff7;
case 0x5d8ffa:c.instructions+=2;goto B5d8ffa;
case 0x5d8ffc:c.instructions+=1;goto B5d8ffc;
case 0x5d8ffe:goto L5d8ffe;
default:missing_instruction(c.pc);}
B5d8000:L5d8000:{c.instructions+=17;NFSU2_TR(0x5d8000);
{u32 ea_=u32(r4(R+24)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d8003:{NFSU2_TR(0x5d8003);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d8004:{NFSU2_TR(0x5d8004);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5d8007:{NFSU2_TR(0x5d8007);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d800b:{NFSU2_TR(0x5d800b);
{u32 ea_=u32(r4(R+24)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d800e:{NFSU2_TR(0x5d800e);
{u32 ea_=u32(r4(R+12)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5d8011:{NFSU2_TR(0x5d8011);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d8015:{NFSU2_TR(0x5d8015);
{u32 ea_=u32(r4(R+24)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d8018:{NFSU2_TR(0x5d8018);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5d801a:{NFSU2_TR(0x5d801a);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d801e:{NFSU2_TR(0x5d801e);
{u32 ea_=u32(r4(R+24)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d8021:{NFSU2_TR(0x5d8021);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5d8024:{NFSU2_TR(0x5d8024);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d8028:{NFSU2_TR(0x5d8028);
{u32 ea_=u32(r4(R+24)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d802b:{NFSU2_TR(0x5d802b);
{u32 ea_=u32(r4(R+12)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5d802e:{NFSU2_TR(0x5d802e);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d8032:{NFSU2_TR(0x5d8032);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d8037ull));
TAIL_STATIC(0x43d1e0u,43d);
}
B5d8037:L5d8037:{c.instructions+=5;NFSU2_TR(0x5d8037);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5d803b:{NFSU2_TR(0x5d803b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d803c:{NFSU2_TR(0x5d803c);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5d8040:{NFSU2_TR(0x5d8040);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d8041:{NFSU2_TR(0x5d8041);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d8046ull));
TAIL_STATIC(0x43cf10u,43c);
}
B5d8046:L5d8046:{c.instructions+=29;NFSU2_TR(0x5d8046);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d804a:{NFSU2_TR(0x5d804a);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d804e:{NFSU2_TR(0x5d804e);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d8052:{NFSU2_TR(0x5d8052);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d8055:{NFSU2_TR(0x5d8055);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d8058:{NFSU2_TR(0x5d8058);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d805b:{NFSU2_TR(0x5d805b);
{u32 ea_=u32(r4(R+12)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d805e:{NFSU2_TR(0x5d805e);
{u32 ea_=u32(r4(R+24)+u32(120u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5d8061:{NFSU2_TR(0x5d8061);
__builtin_memmove((R+8),(R+24),4);
}
B5d8063:{NFSU2_TR(0x5d8063);
{u32 ea_=u32(r4(R+12)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d8066:{NFSU2_TR(0x5d8066);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B5d8069:{NFSU2_TR(0x5d8069);
{u32 ea_=u32(r4(R+24)+u32(116u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5d806c:{NFSU2_TR(0x5d806c);
__builtin_memmove((R+0),(R+24),4);
}
B5d806e:{NFSU2_TR(0x5d806e);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5d8070:{NFSU2_TR(0x5d8070);
{u32 ea_=u32(r4(R+12));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d8072:{NFSU2_TR(0x5d8072);
{u32 ea_=u32(r4(R+24)+u32(112u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5d8075:{NFSU2_TR(0x5d8075);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5d8077:{NFSU2_TR(0x5d8077);
{u32 ea_=u32(r4(R+24)+u32(124u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d807a:{NFSU2_TR(0x5d807a);
__builtin_memmove((R+4),gp(0x883d90),4);
}
B5d8080:{NFSU2_TR(0x5d8080);
u8 U[6];
w1(R+512,u8((r4(R+8))<(r4(R+4))));
w1(R+523,sborrow<u32>(r4(R+8),r4(R+4)));
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5d8082:{NFSU2_TR(0x5d8082);
u8 U[47];
w4(U+39,u32(u32(u32(0x7ull))&u32(u32(0x1full))));
__builtin_memmove((U+43),(R+8),4);
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+39))));
w1(U+24,u8((r4(U+39))==(u32(0x0ull))));
w4(U+25,u32(u32(r4(U+39))-u32(u32(0x1ull))));
w4(U+29,sar<u32>(r4(U+43),u64(r4(U+25))));
w4(U+33,u32(u32(r4(U+29))&u32(u32(0x1ull))));
w1(U+37,u8((r4(U+33))!=(u32(0x0ull))));
__builtin_memmove((U+0),(U+24),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(R+512))));
w1(U+2,u8(!(r1(U+24))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+37))));
w1(R+512,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+38,u8((r4(U+39))==(u32(0x1ull))));
__builtin_memmove((U+0),(U+38),1);
w1(U+1,u8(u32(r1(U+0))*u32(u8(0x0ull))));
w1(U+2,u8(!(r1(U+38))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(R+523))));
w1(R+523,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+39))!=(u32(0x0ull))));
w1(U+6,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(U+7,u8(!(r1(U+5))));
w1(U+8,u8(u32(r1(U+7))&u32(r1(R+519))));
w1(U+9,u8(u32(r1(U+5))&u32(r1(U+6))));
w1(R+519,u8(u32(r1(U+8))|u32(r1(U+9))));
w1(U+10,u8((r4(R+8))==(u32(0x0ull))));
w1(U+11,u8(!(r1(U+5))));
w1(U+12,u8(u32(r1(U+11))&u32(r1(R+518))));
w1(U+13,u8(u32(r1(U+5))&u32(r1(U+10))));
w1(R+518,u8(u32(r1(U+12))|u32(r1(U+13))));
w4(U+14,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+18,u8(__builtin_popcountll(u64(r4(U+14)))));
w1(U+19,u8(u32(r1(U+18))&u32(u8(0x1ull))));
w1(U+20,u8((r1(U+19))==(u8(0x0ull))));
w1(U+21,u8(!(r1(U+5))));
w1(U+22,u8(u32(r1(U+21))&u32(r1(R+514))));
w1(U+23,u8(u32(r1(U+5))&u32(r1(U+20))));
w1(R+514,u8(u32(r1(U+22))|u32(r1(U+23))));
}
B5d8085:{NFSU2_TR(0x5d8085);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6ull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B5d8089:{NFSU2_TR(0x5d8089);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d808c:{NFSU2_TR(0x5d808c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5d808d:{NFSU2_TR(0x5d808d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d808e:{NFSU2_TR(0x5d808e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5d808f:{NFSU2_TR(0x5d808f);
__builtin_memmove((R+16),(R+20),4);
}
B5d8091:{NFSU2_TR(0x5d8091);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5d8092:{NFSU2_TR(0x5d8092);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d80a0:L5d80a0:{c.instructions+=5;NFSU2_TR(0x5d80a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2e0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d80a6:{NFSU2_TR(0x5d80a6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d80a7:{NFSU2_TR(0x5d80a7);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5d80a9:{NFSU2_TR(0x5d80a9);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B5d80ab:{NFSU2_TR(0x5d80ab);
if(r1(R+518)){{goto L5d80e6;}}
}
B5d80ad:L5d80ad:{c.instructions+=1;NFSU2_TR(0x5d80ad);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5d80c8;}}
}
B5d80af:L5d80af:{c.instructions+=4;NFSU2_TR(0x5d80af);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d80b0:{NFSU2_TR(0x5d80b0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d80b1:{NFSU2_TR(0x5d80b1);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3cull))));
__builtin_memmove((R+8),(U+0),4);
}
B5d80b4:{NFSU2_TR(0x5d80b4);
__builtin_memmove((R+24),(R+0),4);
}
B5d80b6:L5d80b6:{c.instructions+=7;NFSU2_TR(0x5d80b6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5d80b8:{NFSU2_TR(0x5d80b8);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B5d80bb:{NFSU2_TR(0x5d80bb);
w1(R+12,u8(u32(r1(R+12))-u32(u8(0x1ull))));
}
B5d80bd:{NFSU2_TR(0x5d80bd);
w1(R+512,carry<u32>(r4(R+8),u32(0x4ull)));
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B5d80c0:{NFSU2_TR(0x5d80c0);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+24),u32(0x1ull)));
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5d80c1:{NFSU2_TR(0x5d80c1);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5d80c4:{NFSU2_TR(0x5d80c4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d80b6u);}goto L5d80b6;}}
}
B5d80c6:L5d80c6:{c.instructions+=2;NFSU2_TR(0x5d80c6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d80c7:{NFSU2_TR(0x5d80c7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5d80c8:L5d80c8:{c.instructions+=5;NFSU2_TR(0x5d80c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2e0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d80ce:{NFSU2_TR(0x5d80ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2e4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d80d4:{NFSU2_TR(0x5d80d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2e8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d80da:{NFSU2_TR(0x5d80da);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2ecull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d80e0:{NFSU2_TR(0x5d80e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x304ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d80e6:L5d80e6:{c.instructions+=2;NFSU2_TR(0x5d80e6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5d80e7:{NFSU2_TR(0x5d80e7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d80f0:L5d80f0:{c.instructions+=4;NFSU2_TR(0x5d80f0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d80f1:{NFSU2_TR(0x5d80f1);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5d80f5:{NFSU2_TR(0x5d80f5);
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
B5d80f7:{NFSU2_TR(0x5d80f7);
if(r1(R+518)){{goto L5d8137;}}
}
B5d80f9:L5d80f9:{c.instructions+=5;NFSU2_TR(0x5d80f9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d80fa:{NFSU2_TR(0x5d80fa);
__builtin_memmove((R+24),gp(0x88ff90),4);
}
B5d8100:{NFSU2_TR(0x5d8100);
w4(R+0,u32(0x1ull));
}
B5d8105:{NFSU2_TR(0x5d8105);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(R+24))<(r4(U+6))));
w1(R+523,sborrow<u32>(r4(R+24),r4(U+6)));
w4(U+10,u32(u32(r4(R+24))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5d8107:{NFSU2_TR(0x5d8107);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5d8136;}}
}
B5d8109:L5d8109:{c.instructions+=2;NFSU2_TR(0x5d8109);
__builtin_memmove((R+8),gp(0x88ff94),4);
}
B5d810f:{NFSU2_TR(0x5d810f);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x20ull))));
}
B5d8112:L5d8112:{c.instructions+=2;NFSU2_TR(0x5d8112);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w1(R+512,u8((r4(U+4))<(r4(R+28))));
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+28))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B5d8114:{NFSU2_TR(0x5d8114);
if(r1(R+518)){{goto L5d8123;}}
}
B5d8116:L5d8116:{c.instructions+=4;NFSU2_TR(0x5d8116);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5d8117:{NFSU2_TR(0x5d8117);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x20ull))));
}
B5d811a:{NFSU2_TR(0x5d811a);
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
B5d811c:{NFSU2_TR(0x5d811c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d8112u);}goto L5d8112;}}
}
B5d811e:L5d811e:{c.instructions+=3;NFSU2_TR(0x5d811e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d811f:{NFSU2_TR(0x5d811f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5d8120:{NFSU2_TR(0x5d8120);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d8123:L5d8123:{c.instructions+=3;NFSU2_TR(0x5d8123);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2f0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d8129:{NFSU2_TR(0x5d8129);
u8 U[16];
w4(U+0,u32(u32(u32(0x2f4ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),4);
s4(u32(r4(U+8)),r4(U+12));
}
B5d8130:{NFSU2_TR(0x5d8130);
u8 U[14];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2f0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,scarry<u32>(r4(U+4),u32(0x1ull)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+8,u32(u32(r4(U+4))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B5d8136:L5d8136:{c.instructions+=1;NFSU2_TR(0x5d8136);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d8137:L5d8137:{c.instructions+=2;NFSU2_TR(0x5d8137);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5d8138:{NFSU2_TR(0x5d8138);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d8140:L5d8140:{c.instructions+=8;NFSU2_TR(0x5d8140);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d8141:{NFSU2_TR(0x5d8141);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d8142:{NFSU2_TR(0x5d8142);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5d8146:{NFSU2_TR(0x5d8146);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d8149:{NFSU2_TR(0x5d8149);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d814c:{NFSU2_TR(0x5d814c);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B5d8150:{NFSU2_TR(0x5d8150);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
w1(R+512,u8((r4(R+24))<(r4(U+6))));
w1(R+523,sborrow<u32>(r4(R+24),r4(U+6)));
w4(U+10,u32(u32(r4(R+24))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5d8152:{NFSU2_TR(0x5d8152);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L5d823f;}}
}
B5d8158:L5d8158:{c.instructions+=3;NFSU2_TR(0x5d8158);
w1(R+8,u8(0x1ull));
}
B5d815a:{NFSU2_TR(0x5d815a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d815b:{NFSU2_TR(0x5d815b);
{goto L5d8160;}
}
B5d8160:L5d8160:{c.instructions+=3;NFSU2_TR(0x5d8160);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5d8162:{NFSU2_TR(0x5d8162);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x34131ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5d8167:{NFSU2_TR(0x5d8167);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5d81cb;}}
}
B5d8169:L5d8169:{c.instructions+=32;NFSU2_TR(0x5d8169);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x17ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5d816c:{NFSU2_TR(0x5d816c);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffff0ull))));
}
B5d816f:{NFSU2_TR(0x5d816f);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),2);
__builtin_memmove((R+12),(U+0),2);
}
B5d8172:{NFSU2_TR(0x5d8172);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+12),2);
s2(u32(r4(U+0)),r2(U+4));
}
B5d8176:{NFSU2_TR(0x5d8176);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B5d8179:{NFSU2_TR(0x5d8179);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x32ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5d817c:{NFSU2_TR(0x5d817c);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+12),(U+4),1);
}
B5d817f:{NFSU2_TR(0x5d817f);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x33ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5d8182:{NFSU2_TR(0x5d8182);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+12),(U+4),2);
}
B5d8186:{NFSU2_TR(0x5d8186);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+12),2);
s2(u32(r4(U+0)),r2(U+4));
}
B5d818a:{NFSU2_TR(0x5d818a);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+12),(U+4),2);
}
B5d818e:{NFSU2_TR(0x5d818e);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x36ull))));
__builtin_memmove((U+4),(R+12),2);
s2(u32(r4(U+0)),r2(U+4));
}
B5d8192:{NFSU2_TR(0x5d8192);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d8195:{NFSU2_TR(0x5d8195);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5d8198:{NFSU2_TR(0x5d8198);
{u32 ea_=u32(r4(R+4)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d819b:{NFSU2_TR(0x5d819b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d819e:{NFSU2_TR(0x5d819e);
{u32 ea_=u32(r4(R+0)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d81a1:{NFSU2_TR(0x5d81a1);
{u32 ea_=u32(r4(R+0)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d81a4:{NFSU2_TR(0x5d81a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5d81a7:{NFSU2_TR(0x5d81a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d81aa:{NFSU2_TR(0x5d81aa);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5d81ac:{NFSU2_TR(0x5d81ac);
{u32 ea_=u32(r4(R+4)+u32(68u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d81af:{NFSU2_TR(0x5d81af);
{u32 ea_=u32(r4(R+4)+u32(72u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d81b2:{NFSU2_TR(0x5d81b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5d81b5:{NFSU2_TR(0x5d81b5);
{u32 ea_=u32(r4(R+0)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d81b8:{NFSU2_TR(0x5d81b8);
{u32 ea_=u32(r4(R+0)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d81bb:{NFSU2_TR(0x5d81bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d81be:{NFSU2_TR(0x5d81be);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5d81c0:{NFSU2_TR(0x5d81c0);
{u32 ea_=u32(r4(R+4)+u32(84u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d81c3:{NFSU2_TR(0x5d81c3);
{u32 ea_=u32(r4(R+4)+u32(88u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d81c6:{NFSU2_TR(0x5d81c6);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5d81c9:{NFSU2_TR(0x5d81c9);
{goto L5d8228;}
}
B5d81cb:L5d81cb:{c.instructions+=2;NFSU2_TR(0x5d81cb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x34134ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5d81d0:{NFSU2_TR(0x5d81d0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5d81e3;}}
}
B5d81d2:L5d81d2:{c.instructions+=6;NFSU2_TR(0x5d81d2);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5d81d5:{NFSU2_TR(0x5d81d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d81d8:{NFSU2_TR(0x5d81d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d81db:{NFSU2_TR(0x5d81db);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B5d81de:{NFSU2_TR(0x5d81de);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d81e1:{NFSU2_TR(0x5d81e1);
{goto L5d8228;}
}
B5d81e3:L5d81e3:{c.instructions+=2;NFSU2_TR(0x5d81e3);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x34135ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5d81e8:{NFSU2_TR(0x5d81e8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5d81fa;}}
}
B5d81ea:L5d81ea:{c.instructions+=6;NFSU2_TR(0x5d81ea);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5d81ed:{NFSU2_TR(0x5d81ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d81f0:{NFSU2_TR(0x5d81f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d81f3:{NFSU2_TR(0x5d81f3);
w4(R+0,shr<u32>(r4(R+0),u64(u32(0x1ull))));
}
B5d81f5:{NFSU2_TR(0x5d81f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d81f8:{NFSU2_TR(0x5d81f8);
{goto L5d8228;}
}
B5d81fa:L5d81fa:{c.instructions+=2;NFSU2_TR(0x5d81fa);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x34136ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5d81ff:{NFSU2_TR(0x5d81ff);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5d8212;}}
}
B5d8201:L5d8201:{c.instructions+=6;NFSU2_TR(0x5d8201);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5d8204:{NFSU2_TR(0x5d8204);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d8207:{NFSU2_TR(0x5d8207);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d820a:{NFSU2_TR(0x5d820a);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B5d820d:{NFSU2_TR(0x5d820d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d8210:{NFSU2_TR(0x5d8210);
{goto L5d8228;}
}
B5d8212:L5d8212:{c.instructions+=2;NFSU2_TR(0x5d8212);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x34137ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5d8217:{NFSU2_TR(0x5d8217);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5d8228;}}
}
B5d8219:L5d8219:{c.instructions+=5;NFSU2_TR(0x5d8219);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5d821c:{NFSU2_TR(0x5d821c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d821f:{NFSU2_TR(0x5d821f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d8222:{NFSU2_TR(0x5d8222);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B5d8225:{NFSU2_TR(0x5d8225);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d8228:L5d8228:{c.instructions+=6;NFSU2_TR(0x5d8228);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d822b:{NFSU2_TR(0x5d822b);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B5d822f:{NFSU2_TR(0x5d822f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d8232:{NFSU2_TR(0x5d8232);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B5d8236:{NFSU2_TR(0x5d8236);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(R+24))<(r4(U+6))));
w1(R+523,sborrow<u32>(r4(R+24),r4(U+6)));
w4(U+10,u32(u32(r4(R+24))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5d8238:{NFSU2_TR(0x5d8238);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d8160u);}goto L5d8160;}}
}
B5d823e:L5d823e:{c.instructions+=1;NFSU2_TR(0x5d823e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5d823f:L5d823f:{c.instructions+=3;NFSU2_TR(0x5d823f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5d8240:{NFSU2_TR(0x5d8240);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d8241:{NFSU2_TR(0x5d8241);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d8250:L5d8250:{c.instructions+=7;NFSU2_TR(0x5d8250);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d8251:{NFSU2_TR(0x5d8251);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5d8255:{NFSU2_TR(0x5d8255);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d8258:{NFSU2_TR(0x5d8258);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5d825b:{NFSU2_TR(0x5d825b);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B5d825f:{NFSU2_TR(0x5d825f);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(R+8))<(r4(U+6))));
w1(R+523,sborrow<u32>(r4(R+8),r4(U+6)));
w4(U+10,u32(u32(r4(R+8))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5d8261:{NFSU2_TR(0x5d8261);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L5d82bc;}}
}
B5d8263:L5d8263:{c.instructions+=2;NFSU2_TR(0x5d8263);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d8264:{NFSU2_TR(0x5d8264);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5d8266:L5d8266:{c.instructions+=3;NFSU2_TR(0x5d8266);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5d8268:{NFSU2_TR(0x5d8268);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x34131ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5d826d:{NFSU2_TR(0x5d826d);
if(r1(R+518)){{goto L5d82a9;}}
}
B5d826f:L5d826f:{c.instructions+=2;NFSU2_TR(0x5d826f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x34134ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5d8274:{NFSU2_TR(0x5d8274);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5d827e;}}
}
B5d8276:L5d8276:{c.instructions+=3;NFSU2_TR(0x5d8276);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d8279:{NFSU2_TR(0x5d8279);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d827c:{NFSU2_TR(0x5d827c);
{goto L5d82a9;}
}
B5d827e:L5d827e:{c.instructions+=2;NFSU2_TR(0x5d827e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x34135ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5d8283:{NFSU2_TR(0x5d8283);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5d828d;}}
}
B5d8285:L5d8285:{c.instructions+=3;NFSU2_TR(0x5d8285);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d8288:{NFSU2_TR(0x5d8288);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d828b:{NFSU2_TR(0x5d828b);
{goto L5d82a9;}
}
B5d828d:L5d828d:{c.instructions+=2;NFSU2_TR(0x5d828d);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x34136ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5d8292:{NFSU2_TR(0x5d8292);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5d829c;}}
}
B5d8294:L5d8294:{c.instructions+=3;NFSU2_TR(0x5d8294);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d8297:{NFSU2_TR(0x5d8297);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d829a:{NFSU2_TR(0x5d829a);
{goto L5d82a9;}
}
B5d829c:L5d829c:{c.instructions+=2;NFSU2_TR(0x5d829c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x34137ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5d82a1:{NFSU2_TR(0x5d82a1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5d82a9;}}
}
B5d82a3:L5d82a3:{c.instructions+=2;NFSU2_TR(0x5d82a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d82a6:{NFSU2_TR(0x5d82a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d82a9:L5d82a9:{c.instructions+=6;NFSU2_TR(0x5d82a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d82ac:{NFSU2_TR(0x5d82ac);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B5d82b0:{NFSU2_TR(0x5d82b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d82b3:{NFSU2_TR(0x5d82b3);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B5d82b7:{NFSU2_TR(0x5d82b7);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(R+8))<(r4(U+6))));
w1(R+523,sborrow<u32>(r4(R+8),r4(U+6)));
w4(U+10,u32(u32(r4(R+8))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5d82b9:{NFSU2_TR(0x5d82b9);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d8266u);}goto L5d8266;}}
}
B5d82bb:L5d82bb:{c.instructions+=1;NFSU2_TR(0x5d82bb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d82bc:L5d82bc:{c.instructions+=2;NFSU2_TR(0x5d82bc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5d82bd:{NFSU2_TR(0x5d82bd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d82c0:L5d82c0:{c.instructions+=6;NFSU2_TR(0x5d82c0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d82c1:{NFSU2_TR(0x5d82c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5d82c4:{NFSU2_TR(0x5d82c4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d82c5:{NFSU2_TR(0x5d82c5);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x68ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5d82c8:{NFSU2_TR(0x5d82c8);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(R+24))<(r4(U+6))));
w1(R+523,sborrow<u32>(r4(R+24),r4(U+6)));
w4(U+10,u32(u32(r4(R+24))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5d82ca:{NFSU2_TR(0x5d82ca);
if(r1(R+518)){{goto L5d8347;}}
}
B5d82cc:L5d82cc:{c.instructions+=1;NFSU2_TR(0x5d82cc);
__builtin_memmove((R+16),(R+16),4);
}
B5d82d0:L5d82d0:{c.instructions+=3;NFSU2_TR(0x5d82d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2e4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d82d6:{NFSU2_TR(0x5d82d6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5d82d8:{NFSU2_TR(0x5d82d8);
if(r1(R+518)){{goto L5d8341;}}
}
B5d82da:L5d82da:{c.instructions+=15;NFSU2_TR(0x5d82da);
{u32 ea_=u32(r4(R+24)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d82dd:{NFSU2_TR(0x5d82dd);
{u32 ea_=u32(r4(R+24)+u32(48u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5d82e0:{NFSU2_TR(0x5d82e0);
{u32 ea_=u32(r4(R+24)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d82e3:{NFSU2_TR(0x5d82e3);
{u32 ea_=u32(r4(R+24)+u32(44u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5d82e6:{NFSU2_TR(0x5d82e6);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B5d82e8:{NFSU2_TR(0x5d82e8);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d82eb:{NFSU2_TR(0x5d82eb);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5d82ee:{NFSU2_TR(0x5d82ee);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d82f1:{NFSU2_TR(0x5d82f1);
{u32 ea_=u32(r4(R+24)+u32(28u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5d82f4:{NFSU2_TR(0x5d82f4);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B5d82f6:{NFSU2_TR(0x5d82f6);
{u32 ea_=u32(u32(7894424u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5d82fc:{NFSU2_TR(0x5d82fc);
__asm__ volatile(".byte 0xde,0xd9":::"memory");
}
B5d82fe:{NFSU2_TR(0x5d82fe);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5d8300:{NFSU2_TR(0x5d8300);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5d8303:{NFSU2_TR(0x5d8303);
if(r1(R+514)){{goto L5d8341;}}
}
B5d8305:L5d8305:{c.instructions+=2;NFSU2_TR(0x5d8305);
__builtin_memmove((R+4),(R+24),4);
}
B5d8307:{NFSU2_TR(0x5d8307);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d830cull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d80a0u);}goto L5d80a0;}
}
B5d830c:L5d830c:{c.instructions+=13;NFSU2_TR(0x5d830c);
{u32 ea_=u32(r4(R+24)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d830f:{NFSU2_TR(0x5d830f);
{u32 ea_=u32(u32(7881308u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5d8315:{NFSU2_TR(0x5d8315);
{u32 ea_=u32(r4(R+24)+u32(44u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d8318:{NFSU2_TR(0x5d8318);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d831b:{NFSU2_TR(0x5d831b);
{u32 ea_=u32(u32(7881308u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5d8321:{NFSU2_TR(0x5d8321);
{u32 ea_=u32(r4(R+24)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d8324:{NFSU2_TR(0x5d8324);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d8327:{NFSU2_TR(0x5d8327);
{u32 ea_=u32(u32(7881308u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5d832d:{NFSU2_TR(0x5d832d);
{u32 ea_=u32(r4(R+24)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d8330:{NFSU2_TR(0x5d8330);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d8333:{NFSU2_TR(0x5d8333);
{u32 ea_=u32(u32(7881308u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5d8339:{NFSU2_TR(0x5d8339);
{u32 ea_=u32(r4(R+24)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d833c:{NFSU2_TR(0x5d833c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d8341ull));
TAIL_STATIC(0x5e5890u,5e5);
}
B5d8341:L5d8341:{c.instructions+=3;NFSU2_TR(0x5d8341);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B5d8343:{NFSU2_TR(0x5d8343);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(R+24))<(r4(U+6))));
w1(R+523,sborrow<u32>(r4(R+24),r4(U+6)));
w4(U+10,u32(u32(r4(R+24))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5d8345:{NFSU2_TR(0x5d8345);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d82d0u);}goto L5d82d0;}}
}
B5d8347:L5d8347:{c.instructions+=3;NFSU2_TR(0x5d8347);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5d8348:{NFSU2_TR(0x5d8348);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d8349:{NFSU2_TR(0x5d8349);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d8350:L5d8350:{c.instructions+=12;NFSU2_TR(0x5d8350);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d8356:{NFSU2_TR(0x5d8356);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d8358:{NFSU2_TR(0x5d8358);
u8 U[4];
w4(U+0,u32(0x779344ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d835d:{NFSU2_TR(0x5d835d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d835e:{NFSU2_TR(0x5d835e);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+16),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d8365:{NFSU2_TR(0x5d8365);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d8366:{NFSU2_TR(0x5d8366);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d8367:{NFSU2_TR(0x5d8367);
__builtin_memmove((R+28),(R+4),4);
}
B5d8369:{NFSU2_TR(0x5d8369);
u8 U[5];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B5d836d:{NFSU2_TR(0x5d836d);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5d836f:{NFSU2_TR(0x5d836f);
w4(R+0,u32(0x30ull));
}
B5d8374:{NFSU2_TR(0x5d8374);
if(r1(R+518)){{goto L5d837b;}}
}
B5d8376:L5d8376:{c.instructions+=1;NFSU2_TR(0x5d8376);
w4(R+0,u32(0x60ull));
}
B5d837b:L5d837b:{c.instructions+=5;NFSU2_TR(0x5d837b);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d837d:{NFSU2_TR(0x5d837d);
u8 U[4];
w4(U+0,u32(0x7a5228ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d8382:{NFSU2_TR(0x5d8382);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d8383:{NFSU2_TR(0x5d8383);
u8 U[4];
w4(U+0,u32(0x70ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d8385:{NFSU2_TR(0x5d8385);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d838aull));
TAIL_STATIC(0x440df0u,440);
}
B5d838a:L5d838a:{c.instructions+=3;NFSU2_TR(0x5d838a);
u8 U[4];
w4(U+0,u32(0x20010ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d838f:{NFSU2_TR(0x5d838f);
__builtin_memmove(gp(0x883d98),(R+0),4);
}
B5d8394:{NFSU2_TR(0x5d8394);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d8399ull));
TAIL_STATIC(0x575620u,575);
}
B5d8399:L5d8399:{c.instructions+=5;NFSU2_TR(0x5d8399);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B5d839c:{NFSU2_TR(0x5d839c);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d83a0:{NFSU2_TR(0x5d83a0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5d83a2:{NFSU2_TR(0x5d83a2);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5d83aa:{NFSU2_TR(0x5d83aa);
if(r1(R+518)){{goto L5d83d1;}}
}
B5d83ac:L5d83ac:{c.instructions+=8;NFSU2_TR(0x5d83ac);
u8 U[4];
w4(U+0,u32(0x4022c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d83b1:{NFSU2_TR(0x5d83b1);
u8 U[4];
w4(U+0,u32(0x502fd0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d83b6:{NFSU2_TR(0x5d83b6);
u8 U[4];
w4(U+0,u32(0x400ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d83bb:{NFSU2_TR(0x5d83bb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d83be:{NFSU2_TR(0x5d83be);
u8 U[4];
w4(U+0,u32(0x80ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d83c3:{NFSU2_TR(0x5d83c3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d83c4:{NFSU2_TR(0x5d83c4);
u8 U[4];
w4(U+0,u32(0x400ull));
s4(u32(r4(R+0)),r4(U+0));
}
B5d83ca:{NFSU2_TR(0x5d83ca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d83cfull));
TAIL_STATIC(0x75c461u,75c);
}
B5d83cf:L5d83cf:{c.instructions+=1;NFSU2_TR(0x5d83cf);
{goto L5d83d3;}
}
B5d83d1:L5d83d1:{c.instructions+=1;NFSU2_TR(0x5d83d1);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5d83d3:L5d83d3:{c.instructions+=3;NFSU2_TR(0x5d83d3);
__builtin_memmove(gp(0x883d90),(R+24),4);
}
B5d83d9:{NFSU2_TR(0x5d83d9);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5d83db:{NFSU2_TR(0x5d83db);
{goto L5d83e0;}
}
B5d83e0:L5d83e0:{c.instructions+=10;NFSU2_TR(0x5d83e0);
__builtin_memmove((R+0),gp(0x883d90),4);
}
B5d83e5:{NFSU2_TR(0x5d83e5);
__builtin_memmove((R+8),gp(0x88ea90),4);
}
B5d83eb:{NFSU2_TR(0x5d83eb);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B5d83ed:{NFSU2_TR(0x5d83ed);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B5d83ef:{NFSU2_TR(0x5d83ef);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x80ull))));
}
B5d83f5:{NFSU2_TR(0x5d83f5);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x20000ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x20000ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5d83fb:{NFSU2_TR(0x5d83fb);
__builtin_memmove(gp(0x88ea90),(R+0),4);
}
B5d8400:{NFSU2_TR(0x5d8400);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d8403:{NFSU2_TR(0x5d8403);
u8 U[4];
w4(U+0,u32(0x88ea8cull));
s4(u32(r4(R+0)),r4(U+0));
}
B5d8409:{NFSU2_TR(0x5d8409);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d83e0u);}goto L5d83e0;}}
}
B5d840b:L5d840b:{c.instructions+=6;NFSU2_TR(0x5d840b);
s4(0x883d84,u32(0x0ull));
}
B5d8415:{NFSU2_TR(0x5d8415);
s4(0x883d88,u32(0x0ull));
}
B5d841f:{NFSU2_TR(0x5d841f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x828ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d8425:{NFSU2_TR(0x5d8425);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5d8427:{NFSU2_TR(0x5d8427);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5d8429:{NFSU2_TR(0x5d8429);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5d8450;}}
}
B5d842b:L5d842b:{c.instructions+=1;NFSU2_TR(0x5d842b);
{goto L5d8430;}
}
B5d8430:L5d8430:{c.instructions+=11;NFSU2_TR(0x5d8430);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x82cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d8436:{NFSU2_TR(0x5d8436);
__builtin_memmove((R+0),(R+4),4);
}
B5d8438:{NFSU2_TR(0x5d8438);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B5d843b:{NFSU2_TR(0x5d843b);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B5d843d:{NFSU2_TR(0x5d843d);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5d843f:{NFSU2_TR(0x5d843f);
__builtin_memmove((R+8),(R+518),1);
}
B5d8442:{NFSU2_TR(0x5d8442);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5d8445:{NFSU2_TR(0x5d8445);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x828ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d844b:{NFSU2_TR(0x5d844b);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B5d844c:{NFSU2_TR(0x5d844c);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5d844e:{NFSU2_TR(0x5d844e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d8430u);}goto L5d8430;}}
}
B5d8450:L5d8450:{c.instructions+=6;NFSU2_TR(0x5d8450);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d8454:{NFSU2_TR(0x5d8454);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5d8455:{NFSU2_TR(0x5d8455);
u8 U[8];
w4(U+0,u32(u32(r4(R+272))+u32(u32(0x0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d845c:{NFSU2_TR(0x5d845c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d845d:{NFSU2_TR(0x5d845d);
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
B5d8460:{NFSU2_TR(0x5d8460);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d8470:L5d8470:{c.instructions+=3;NFSU2_TR(0x5d8470);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d8474:{NFSU2_TR(0x5d8474);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x34146ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B5d847a:{NFSU2_TR(0x5d847a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5d84c4;}}
}
B5d847c:L5d847c:{c.instructions+=14;NFSU2_TR(0x5d847c);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x17ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5d847f:{NFSU2_TR(0x5d847f);
__builtin_memmove((R+4),(R+0),4);
}
B5d8481:{NFSU2_TR(0x5d8481);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d8482:{NFSU2_TR(0x5d8482);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5d8485:{NFSU2_TR(0x5d8485);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffff0ull))));
}
B5d8488:{NFSU2_TR(0x5d8488);
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+0))));
}
B5d848a:{NFSU2_TR(0x5d848a);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B5d848e:{NFSU2_TR(0x5d848e);
w4(R+0,u32(0xaaaaaaabull));
}
B5d8493:{NFSU2_TR(0x5d8493);
u8 U[24];
w8(U+0,u64(r4(R+0)));
w8(U+8,u64(r4(R+8)));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(u64(r8(U+16))>>32));
w4(R+0,u32(r8(U+16)));
}
B5d8495:{NFSU2_TR(0x5d8495);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B5d8498:{NFSU2_TR(0x5d8498);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfffffff0ull))));
}
B5d849b:{NFSU2_TR(0x5d849b);
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
B5d849d:{NFSU2_TR(0x5d849d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d849e:{NFSU2_TR(0x5d849e);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5d84be;}}
}
B5d84a0:L5d84a0:{c.instructions+=1;NFSU2_TR(0x5d84a0);
__builtin_memmove((R+0),(R+4),4);
}
B5d84a2:L5d84a2:{c.instructions+=8;NFSU2_TR(0x5d84a2);
__builtin_memmove((R+4),gp(0x88f744),4);
}
B5d84a8:{NFSU2_TR(0x5d84a8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B5d84aa:{NFSU2_TR(0x5d84aa);
__builtin_memmove(gp(0x88f744),(R+0),4);
}
B5d84af:{NFSU2_TR(0x5d84af);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d84b2:{NFSU2_TR(0x5d84b2);
u8 U[4];
w4(U+0,u32(0x88f740ull));
s4(u32(r4(R+0)),r4(U+0));
}
B5d84b8:{NFSU2_TR(0x5d84b8);
w1(R+512,carry<u32>(r4(R+0),u32(0x30ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
}
B5d84bb:{NFSU2_TR(0x5d84bb);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+8),u32(0x1ull)));
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5d84bc:{NFSU2_TR(0x5d84bc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d84a2u);}goto L5d84a2;}}
}
B5d84be:L5d84be:{c.instructions+=2;NFSU2_TR(0x5d84be);
w4(R+0,u32(0x1ull));
}
B5d84c3:{NFSU2_TR(0x5d84c3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d84c4:L5d84c4:{c.instructions+=2;NFSU2_TR(0x5d84c4);
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
B5d84c6:{NFSU2_TR(0x5d84c6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d84d0:L5d84d0:{c.instructions+=3;NFSU2_TR(0x5d84d0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d84d4:{NFSU2_TR(0x5d84d4);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x34146ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B5d84da:{NFSU2_TR(0x5d84da);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5d851a;}}
}
B5d84dc:L5d84dc:{c.instructions+=13;NFSU2_TR(0x5d84dc);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x17ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5d84df:{NFSU2_TR(0x5d84df);
__builtin_memmove((R+4),(R+0),4);
}
B5d84e1:{NFSU2_TR(0x5d84e1);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffff0ull))));
}
B5d84e4:{NFSU2_TR(0x5d84e4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d84e5:{NFSU2_TR(0x5d84e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5d84e8:{NFSU2_TR(0x5d84e8);
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+0))));
}
B5d84ea:{NFSU2_TR(0x5d84ea);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B5d84ee:{NFSU2_TR(0x5d84ee);
w4(R+0,u32(0xaaaaaaabull));
}
B5d84f3:{NFSU2_TR(0x5d84f3);
u8 U[24];
w8(U+0,u64(r4(R+0)));
w8(U+8,u64(r4(R+8)));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(u64(r8(U+16))>>32));
w4(R+0,u32(r8(U+16)));
}
B5d84f5:{NFSU2_TR(0x5d84f5);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B5d84f8:{NFSU2_TR(0x5d84f8);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfffffff0ull))));
}
B5d84fb:{NFSU2_TR(0x5d84fb);
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
B5d84fd:{NFSU2_TR(0x5d84fd);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5d8513;}}
}
B5d84ff:L5d84ff:{c.instructions+=2;NFSU2_TR(0x5d84ff);
__builtin_memmove((R+0),(R+4),4);
}
B5d8501:{NFSU2_TR(0x5d8501);
__builtin_memmove((R+24),(R+8),4);
}
B5d8503:L5d8503:{c.instructions+=7;NFSU2_TR(0x5d8503);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5d8505:{NFSU2_TR(0x5d8505);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d8508:{NFSU2_TR(0x5d8508);
w1(R+512,carry<u32>(r4(R+0),u32(0x30ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
}
B5d850b:{NFSU2_TR(0x5d850b);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+24),u32(0x1ull)));
w4(R+24,u32(u32(r4(R+24))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5d850c:{NFSU2_TR(0x5d850c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B5d850e:{NFSU2_TR(0x5d850e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d8511:{NFSU2_TR(0x5d8511);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d8503u);}goto L5d8503;}}
}
B5d8513:L5d8513:{c.instructions+=3;NFSU2_TR(0x5d8513);
w4(R+0,u32(0x1ull));
}
B5d8518:{NFSU2_TR(0x5d8518);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d8519:{NFSU2_TR(0x5d8519);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d851a:L5d851a:{c.instructions+=2;NFSU2_TR(0x5d851a);
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
B5d851c:{NFSU2_TR(0x5d851c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d8520:L5d8520:{c.instructions+=6;NFSU2_TR(0x5d8520);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d8521:{NFSU2_TR(0x5d8521);
__builtin_memmove((R+24),gp(0x88f740),4);
}
B5d8527:{NFSU2_TR(0x5d8527);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d8528:{NFSU2_TR(0x5d8528);
w4(R+4,u32(0x88f740ull));
}
B5d852d:{NFSU2_TR(0x5d852d);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5d852f:{NFSU2_TR(0x5d852f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d8534ull));
TAIL_STATIC(0x502fd0u,502);
}
B5d8534:L5d8534:{c.instructions+=2;NFSU2_TR(0x5d8534);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(R+24))<(r4(U+6))));
w1(R+523,sborrow<u32>(r4(R+24),r4(U+6)));
w4(U+10,u32(u32(r4(R+24))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5d8536:{NFSU2_TR(0x5d8536);
if(r1(R+518)){{goto L5d8555;}}
}
B5d8538:L5d8538:{c.instructions+=2;NFSU2_TR(0x5d8538);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d853c:{NFSU2_TR(0x5d853c);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d8540:L5d8540:{c.instructions+=2;NFSU2_TR(0x5d8540);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5d8543:{NFSU2_TR(0x5d8543);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5d854f;}}
}
B5d8545:L5d8545:{c.instructions+=2;NFSU2_TR(0x5d8545);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5d8547:{NFSU2_TR(0x5d8547);
if(r1(R+518)){{goto L5d854e;}}
}
B5d8549:L5d8549:{c.instructions+=2;NFSU2_TR(0x5d8549);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5d854c:{NFSU2_TR(0x5d854c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5d854f;}}
}
B5d854e:L5d854e:{c.instructions+=1;NFSU2_TR(0x5d854e);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B5d854f:L5d854f:{c.instructions+=3;NFSU2_TR(0x5d854f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B5d8551:{NFSU2_TR(0x5d8551);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(R+24))<(r4(U+6))));
w1(R+523,sborrow<u32>(r4(R+24),r4(U+6)));
w4(U+10,u32(u32(r4(R+24))-u32(r4(U+6))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5d8553:{NFSU2_TR(0x5d8553);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d8540u);}goto L5d8540;}}
}
B5d8555:L5d8555:{c.instructions+=4;NFSU2_TR(0x5d8555);
__builtin_memmove((R+0),(R+28),4);
}
B5d8557:{NFSU2_TR(0x5d8557);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5d8558:{NFSU2_TR(0x5d8558);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d8559:{NFSU2_TR(0x5d8559);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d8560:L5d8560:{c.instructions+=3;NFSU2_TR(0x5d8560);
__builtin_memmove((R+0),gp(0x883dac),4);
}
B5d8565:{NFSU2_TR(0x5d8565);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5d8567:{NFSU2_TR(0x5d8567);
if(r1(R+518)){{goto L5d857f;}}
}
B5d8569:L5d8569:{c.instructions+=5;NFSU2_TR(0x5d8569);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B5d8570:{NFSU2_TR(0x5d8570);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d8574:{NFSU2_TR(0x5d8574);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d8575:{NFSU2_TR(0x5d8575);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d8576:{NFSU2_TR(0x5d8576);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d857bull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d8520u);}goto L5d8520;}
}
B5d857b:L5d857b:{c.instructions+=2;NFSU2_TR(0x5d857b);
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
B5d857e:{NFSU2_TR(0x5d857e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d857f:L5d857f:{c.instructions+=5;NFSU2_TR(0x5d857f);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d8583:{NFSU2_TR(0x5d8583);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5d8585:{NFSU2_TR(0x5d8585);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d8586:{NFSU2_TR(0x5d8586);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d8587:{NFSU2_TR(0x5d8587);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d858cull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d8520u);}goto L5d8520;}
}
B5d858c:L5d858c:{c.instructions+=2;NFSU2_TR(0x5d858c);
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
B5d858f:{NFSU2_TR(0x5d858f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d8590:L5d8590:{c.instructions+=3;NFSU2_TR(0x5d8590);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d8594:{NFSU2_TR(0x5d8594);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d8595:{NFSU2_TR(0x5d8595);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d859aull));
TAIL_STATIC(0x43db50u,43d);
}
B5d859a:L5d859a:{c.instructions+=4;NFSU2_TR(0x5d859a);
__builtin_memmove((R+4),gp(0x883dac),4);
}
B5d85a0:{NFSU2_TR(0x5d85a0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5d85a3:{NFSU2_TR(0x5d85a3);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5d85a5:{NFSU2_TR(0x5d85a5);
if(r1(R+518)){{goto L5d85b9;}}
}
B5d85a7:L5d85a7:{c.instructions+=4;NFSU2_TR(0x5d85a7);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B5d85ae:{NFSU2_TR(0x5d85ae);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d85af:{NFSU2_TR(0x5d85af);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d85b0:{NFSU2_TR(0x5d85b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d85b5ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d8520u);}goto L5d8520;}
}
B5d85b5:L5d85b5:{c.instructions+=2;NFSU2_TR(0x5d85b5);
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
B5d85b8:{NFSU2_TR(0x5d85b8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d85b9:L5d85b9:{c.instructions+=4;NFSU2_TR(0x5d85b9);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5d85bb:{NFSU2_TR(0x5d85bb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d85bc:{NFSU2_TR(0x5d85bc);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d85bd:{NFSU2_TR(0x5d85bd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d85c2ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d8520u);}goto L5d8520;}
}
B5d85c2:L5d85c2:{c.instructions+=2;NFSU2_TR(0x5d85c2);
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
B5d85c5:{NFSU2_TR(0x5d85c5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d85d0:L5d85d0:{c.instructions+=7;NFSU2_TR(0x5d85d0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d85d1:{NFSU2_TR(0x5d85d1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d85d2:{NFSU2_TR(0x5d85d2);
__builtin_memmove((R+24),gp(0x88f740),4);
}
B5d85d8:{NFSU2_TR(0x5d85d8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d85d9:{NFSU2_TR(0x5d85d9);
w4(R+4,u32(0x88f740ull));
}
B5d85de:{NFSU2_TR(0x5d85de);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
w1(R+519,u8(s32(r4(R+28))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+28))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5d85e0:{NFSU2_TR(0x5d85e0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d85e5ull));
TAIL_STATIC(0x502fd0u,502);
}
B5d85e5:L5d85e5:{c.instructions+=2;NFSU2_TR(0x5d85e5);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5d85e7:{NFSU2_TR(0x5d85e7);
if(r1(R+518)){{goto L5d860e;}}
}
B5d85e9:L5d85e9:{c.instructions+=3;NFSU2_TR(0x5d85e9);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d85ed:{NFSU2_TR(0x5d85ed);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5d85f1:{NFSU2_TR(0x5d85f1);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d85f5:L5d85f5:{c.instructions+=2;NFSU2_TR(0x5d85f5);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5d85f8:{NFSU2_TR(0x5d85f8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5d8608;}}
}
B5d85fa:L5d85fa:{c.instructions+=2;NFSU2_TR(0x5d85fa);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5d85fc:{NFSU2_TR(0x5d85fc);
if(r1(R+518)){{goto L5d8603;}}
}
B5d85fe:L5d85fe:{c.instructions+=2;NFSU2_TR(0x5d85fe);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5d8601:{NFSU2_TR(0x5d8601);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5d8608;}}
}
B5d8603:L5d8603:{c.instructions+=2;NFSU2_TR(0x5d8603);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B5d8605:{NFSU2_TR(0x5d8605);
if(r1(R+518)){{goto L5d8614;}}
}
B5d8607:L5d8607:{c.instructions+=1;NFSU2_TR(0x5d8607);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B5d8608:L5d8608:{c.instructions+=3;NFSU2_TR(0x5d8608);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B5d860a:{NFSU2_TR(0x5d860a);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5d860c:{NFSU2_TR(0x5d860c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d85f5u);}goto L5d85f5;}}
}
B5d860e:L5d860e:{c.instructions+=5;NFSU2_TR(0x5d860e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5d860f:{NFSU2_TR(0x5d860f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d8610:{NFSU2_TR(0x5d8610);
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
B5d8612:{NFSU2_TR(0x5d8612);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5d8613:{NFSU2_TR(0x5d8613);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d8614:L5d8614:{c.instructions+=5;NFSU2_TR(0x5d8614);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5d8615:{NFSU2_TR(0x5d8615);
__builtin_memmove((R+0),(R+24),4);
}
B5d8617:{NFSU2_TR(0x5d8617);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d8618:{NFSU2_TR(0x5d8618);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5d8619:{NFSU2_TR(0x5d8619);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d8620:L5d8620:{c.instructions+=3;NFSU2_TR(0x5d8620);
__builtin_memmove((R+0),gp(0x883dac),4);
}
B5d8625:{NFSU2_TR(0x5d8625);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5d8627:{NFSU2_TR(0x5d8627);
if(r1(R+518)){{goto L5d8644;}}
}
B5d8629:L5d8629:{c.instructions+=7;NFSU2_TR(0x5d8629);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d862d:{NFSU2_TR(0x5d862d);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B5d8634:{NFSU2_TR(0x5d8634);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d8638:{NFSU2_TR(0x5d8638);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d8639:{NFSU2_TR(0x5d8639);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d863a:{NFSU2_TR(0x5d863a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d863b:{NFSU2_TR(0x5d863b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d8640ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d85d0u);}goto L5d85d0;}
}
B5d8640:L5d8640:{c.instructions+=2;NFSU2_TR(0x5d8640);
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
B5d8643:{NFSU2_TR(0x5d8643);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d8644:L5d8644:{c.instructions+=7;NFSU2_TR(0x5d8644);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d8648:{NFSU2_TR(0x5d8648);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d864c:{NFSU2_TR(0x5d864c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d864d:{NFSU2_TR(0x5d864d);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5d864f:{NFSU2_TR(0x5d864f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d8650:{NFSU2_TR(0x5d8650);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d8651:{NFSU2_TR(0x5d8651);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d8656ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d85d0u);}goto L5d85d0;}
}
B5d8656:L5d8656:{c.instructions+=2;NFSU2_TR(0x5d8656);
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
B5d8659:{NFSU2_TR(0x5d8659);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d8660:L5d8660:{c.instructions+=3;NFSU2_TR(0x5d8660);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d8664:{NFSU2_TR(0x5d8664);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d8665:{NFSU2_TR(0x5d8665);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d866aull));
TAIL_STATIC(0x43db50u,43d);
}
B5d866a:L5d866a:{c.instructions+=4;NFSU2_TR(0x5d866a);
__builtin_memmove((R+4),gp(0x883dac),4);
}
B5d8670:{NFSU2_TR(0x5d8670);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5d8673:{NFSU2_TR(0x5d8673);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5d8675:{NFSU2_TR(0x5d8675);
if(r1(R+518)){{goto L5d868e;}}
}
B5d8677:L5d8677:{c.instructions+=6;NFSU2_TR(0x5d8677);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d867b:{NFSU2_TR(0x5d867b);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8aull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B5d8682:{NFSU2_TR(0x5d8682);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d8683:{NFSU2_TR(0x5d8683);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d8684:{NFSU2_TR(0x5d8684);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d8685:{NFSU2_TR(0x5d8685);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d868aull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d85d0u);}goto L5d85d0;}
}
B5d868a:L5d868a:{c.instructions+=2;NFSU2_TR(0x5d868a);
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
B5d868d:{NFSU2_TR(0x5d868d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d868e:L5d868e:{c.instructions+=6;NFSU2_TR(0x5d868e);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d8692:{NFSU2_TR(0x5d8692);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d8693:{NFSU2_TR(0x5d8693);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5d8695:{NFSU2_TR(0x5d8695);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d8696:{NFSU2_TR(0x5d8696);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d8697:{NFSU2_TR(0x5d8697);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d869cull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d85d0u);}goto L5d85d0;}
}
B5d869c:L5d869c:{c.instructions+=2;NFSU2_TR(0x5d869c);
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
B5d869f:{NFSU2_TR(0x5d869f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d86a0:L5d86a0:{c.instructions+=4;NFSU2_TR(0x5d86a0);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5d86a3:{NFSU2_TR(0x5d86a3);
w1(R+0,u8(u32(r1(R+0))&u32(u8(0xfull))));
}
B5d86a5:{NFSU2_TR(0x5d86a5);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x3ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5d86a7:{NFSU2_TR(0x5d86a7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5d86af;}}
}
B5d86a9:L5d86a9:{c.instructions+=2;NFSU2_TR(0x5d86a9);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B5d86ad:{NFSU2_TR(0x5d86ad);
{goto L5d86b3;}
}
B5d86af:L5d86af:{c.instructions+=1;NFSU2_TR(0x5d86af);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B5d86b3:L5d86b3:{c.instructions+=3;NFSU2_TR(0x5d86b3);
w4(R+0,u32(s32(s16(r2(R+0)))));
}
B5d86b6:{NFSU2_TR(0x5d86b6);
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
B5d86b8:{NFSU2_TR(0x5d86b8);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5d86c2;}}
}
B5d86ba:L5d86ba:{c.instructions+=2;NFSU2_TR(0x5d86ba);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x88a334ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B5d86c1:{NFSU2_TR(0x5d86c1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d86c2:L5d86c2:{c.instructions+=2;NFSU2_TR(0x5d86c2);
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
B5d86c4:{NFSU2_TR(0x5d86c4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d86d0:L5d86d0:{c.instructions+=4;NFSU2_TR(0x5d86d0);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5d86d3:{NFSU2_TR(0x5d86d3);
w1(R+0,u8(u32(r1(R+0))&u32(u8(0xfull))));
}
B5d86d5:{NFSU2_TR(0x5d86d5);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x3ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5d86d7:{NFSU2_TR(0x5d86d7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5d86df;}}
}
B5d86d9:L5d86d9:{c.instructions+=2;NFSU2_TR(0x5d86d9);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+8),(U+4),2);
}
B5d86dd:{NFSU2_TR(0x5d86dd);
{goto L5d86e3;}
}
B5d86df:L5d86df:{c.instructions+=1;NFSU2_TR(0x5d86df);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+8),(U+4),2);
}
B5d86e3:L5d86e3:{c.instructions+=2;NFSU2_TR(0x5d86e3);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))-u32(u8(0x3ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5d86e5:{NFSU2_TR(0x5d86e5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5d86ed;}}
}
B5d86e7:L5d86e7:{c.instructions+=2;NFSU2_TR(0x5d86e7);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B5d86eb:{NFSU2_TR(0x5d86eb);
{goto L5d86f1;}
}
B5d86ed:L5d86ed:{c.instructions+=1;NFSU2_TR(0x5d86ed);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+4),(U+4),2);
}
B5d86f1:L5d86f1:{c.instructions+=3;NFSU2_TR(0x5d86f1);
w4(R+0,u32(s32(s16(r2(R+4)))));
}
B5d86f4:{NFSU2_TR(0x5d86f4);
u8 U[10];
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5d86f6:{NFSU2_TR(0x5d86f6);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5d870d;}}
}
B5d86f8:L5d86f8:{c.instructions+=5;NFSU2_TR(0x5d86f8);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x88a334ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B5d86ff:{NFSU2_TR(0x5d86ff);
w4(R+4,u32(s32(s16(r2(R+8)))));
}
B5d8702:{NFSU2_TR(0x5d8702);
u8 U[32];
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(s64(s32(u32(0x38ull)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+4,u32(r8(U+24)));
w8(U+0,u64(s64(s32(r4(R+4)))));
w1(R+512,u8((r8(U+0))!=(r8(U+24))));
__builtin_memmove((R+523),(R+512),1);
}
B5d8705:{NFSU2_TR(0x5d8705);
u8 U[12];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B5d870c:{NFSU2_TR(0x5d870c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d870d:L5d870d:{c.instructions+=5;NFSU2_TR(0x5d870d);
w4(R+4,u32(s32(s16(r2(R+8)))));
}
B5d8710:{NFSU2_TR(0x5d8710);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x38ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B5d8713:{NFSU2_TR(0x5d8713);
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
B5d8715:{NFSU2_TR(0x5d8715);
u8 U[12];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B5d871c:{NFSU2_TR(0x5d871c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d8720:L5d8720:{c.instructions+=3;NFSU2_TR(0x5d8720);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d8724:{NFSU2_TR(0x5d8724);
w1(R+512,u8((r4(R+0))<(u32(0x0ull))));
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B5d8727:{NFSU2_TR(0x5d8727);
if(r1(R+518)){{goto L5d872f;}}
}
B5d8729:L5d8729:{c.instructions+=2;NFSU2_TR(0x5d8729);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B5d872a:{NFSU2_TR(0x5d872a);
if(r1(R+518)){{goto L5d8744;}}
}
B5d872c:L5d872c:{c.instructions+=2;NFSU2_TR(0x5d872c);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x1ull)));
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5d872d:{NFSU2_TR(0x5d872d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5d8741;}}
}
B5d872f:L5d872f:{c.instructions+=6;NFSU2_TR(0x5d872f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d8732:{NFSU2_TR(0x5d8732);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))^u32(r4(U+4))));
}
B5d8736:{NFSU2_TR(0x5d8736);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d8739:{NFSU2_TR(0x5d8739);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xfull))));
}
B5d873c:{NFSU2_TR(0x5d873c);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+8))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5d873e:{NFSU2_TR(0x5d873e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d8741:L5d8741:{c.instructions+=1;NFSU2_TR(0x5d8741);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d8744:L5d8744:{c.instructions+=8;NFSU2_TR(0x5d8744);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d8748:{NFSU2_TR(0x5d8748);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d874b:{NFSU2_TR(0x5d874b);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B5d874e:{NFSU2_TR(0x5d874e);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+8))));
}
B5d8750:{NFSU2_TR(0x5d8750);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xf0ull))));
}
B5d8755:{NFSU2_TR(0x5d8755);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5d8757:{NFSU2_TR(0x5d8757);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d875a:{NFSU2_TR(0x5d875a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d8760:L5d8760:{c.instructions+=8;NFSU2_TR(0x5d8760);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d8761:{NFSU2_TR(0x5d8761);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d8762:{NFSU2_TR(0x5d8762);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d8763:{NFSU2_TR(0x5d8763);
__builtin_memmove((R+24),(R+4),4);
}
B5d8765:{NFSU2_TR(0x5d8765);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(s32(s16(r2(U+4)))));
}
B5d8769:{NFSU2_TR(0x5d8769);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5d876b:{NFSU2_TR(0x5d876b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d876c:{NFSU2_TR(0x5d876c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5d8777;}}
}
B5d876e:L5d876e:{c.instructions+=2;NFSU2_TR(0x5d876e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x88a334ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B5d8775:{NFSU2_TR(0x5d8775);
{goto L5d8779;}
}
B5d8777:L5d8777:{c.instructions+=1;NFSU2_TR(0x5d8777);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5d8779:L5d8779:{c.instructions+=6;NFSU2_TR(0x5d8779);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B5d877d:{NFSU2_TR(0x5d877d);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x38ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B5d8780:{NFSU2_TR(0x5d8780);
u8 U[12];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+12),(U+8),4);
}
B5d8787:{NFSU2_TR(0x5d8787);
__builtin_memmove((R+4),(R+24),4);
}
B5d8789:{NFSU2_TR(0x5d8789);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d878d:{NFSU2_TR(0x5d878d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d8792ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d86d0u);}goto L5d86d0;}
}
B5d8792:L5d8792:{c.instructions+=3;NFSU2_TR(0x5d8792);
__builtin_memmove((R+28),(R+0),4);
}
B5d8794:{NFSU2_TR(0x5d8794);
u8 U[14];
__builtin_memmove((U+6),(R+12),4);
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
B5d8796:{NFSU2_TR(0x5d8796);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5d879f;}}
}
B5d8798:L5d8798:{c.instructions+=6;NFSU2_TR(0x5d8798);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5d8799:{NFSU2_TR(0x5d8799);
__builtin_memmove((R+0),(R+24),4);
}
B5d879b:{NFSU2_TR(0x5d879b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d879c:{NFSU2_TR(0x5d879c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5d879d:{NFSU2_TR(0x5d879d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5d879e:{NFSU2_TR(0x5d879e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d879f:L5d879f:{c.instructions+=9;NFSU2_TR(0x5d879f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5d87a2:{NFSU2_TR(0x5d87a2);
__builtin_memmove((R+12),(R+24),4);
}
B5d87a4:{NFSU2_TR(0x5d87a4);
u8 U[4];
w4(U+0,u32(u32(u32(0x17ull))&u32(u32(0x1full))));
w4(R+12,shr<u32>(r4(R+12),u64(r4(U+0))));
}
B5d87a7:{NFSU2_TR(0x5d87a7);
__builtin_memmove((R+8),(R+24),4);
}
B5d87a9:{NFSU2_TR(0x5d87a9);
u8 U[4];
w4(U+0,u32(u32(u32(0x12ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B5d87ac:{NFSU2_TR(0x5d87ac);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+8))));
}
B5d87ae:{NFSU2_TR(0x5d87ae);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d87af:{NFSU2_TR(0x5d87af);
w1(R+12,u8(u32(r1(R+12))&u32(u8(0x1ull))));
}
B5d87b2:{NFSU2_TR(0x5d87b2);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B5d87b4:L5d87b4:{c.instructions+=4;NFSU2_TR(0x5d87b4);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B5d87b8:{NFSU2_TR(0x5d87b8);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5d87ba:{NFSU2_TR(0x5d87ba);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xffffull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5d87bf:{NFSU2_TR(0x5d87bf);
if(r1(R+518)){{goto L5d87ce;}}
}
B5d87c1:L5d87c1:{c.instructions+=2;NFSU2_TR(0x5d87c1);
u8 U[8];
__builtin_memmove((U+0),gp(0x883db4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5d87c7:{NFSU2_TR(0x5d87c7);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5d87ce;}}
}
B5d87c9:L5d87c9:{c.instructions+=1;NFSU2_TR(0x5d87c9);
w4(R+4,u32(0x1ull));
}
B5d87ce:L5d87ce:{c.instructions+=3;NFSU2_TR(0x5d87ce);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B5d87d2:{NFSU2_TR(0x5d87d2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xffffull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5d87d7:{NFSU2_TR(0x5d87d7);
if(r1(R+518)){{goto L5d87e2;}}
}
B5d87d9:L5d87d9:{c.instructions+=2;NFSU2_TR(0x5d87d9);
u8 U[8];
__builtin_memmove((U+0),gp(0x883db4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5d87df:{NFSU2_TR(0x5d87df);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5d87e2;}}
}
B5d87e1:L5d87e1:{c.instructions+=1;NFSU2_TR(0x5d87e1);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B5d87e2:L5d87e2:{c.instructions+=2;NFSU2_TR(0x5d87e2);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+20),r4(U+0)));
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5d87e4:{NFSU2_TR(0x5d87e4);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5d8852;}}
}
B5d87e6:L5d87e6:{c.instructions+=3;NFSU2_TR(0x5d87e6);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d87e7:{NFSU2_TR(0x5d87e7);
__builtin_memmove((R+4),(R+28),4);
}
B5d87e9:{NFSU2_TR(0x5d87e9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d87eeull));
TAIL_STATIC(0x5d43c0u,5d4);
}
B5d87ee:L5d87ee:{c.instructions+=7;NFSU2_TR(0x5d87ee);
__builtin_memmove((R+24),(R+0),4);
}
B5d87f0:{NFSU2_TR(0x5d87f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d87f3:{NFSU2_TR(0x5d87f3);
__builtin_memmove((R+0),(R+4),4);
}
B5d87f5:{NFSU2_TR(0x5d87f5);
u8 U[4];
w4(U+0,u32(u32(u32(0x12ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B5d87f8:{NFSU2_TR(0x5d87f8);
w1(R+0,u8(u32(r1(R+0))&u32(u8(0x1ull))));
}
B5d87fa:{NFSU2_TR(0x5d87fa);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+12))));
w1(R+518,u8((r1(R+0))==(u8(0x0ull))));
}
B5d87fc:{NFSU2_TR(0x5d87fc);
if(r1(R+518)){{goto L5d8844;}}
}
B5d87fe:L5d87fe:{c.instructions+=3;NFSU2_TR(0x5d87fe);
w1(R+4,u8(u32(r1(R+4))&u32(u8(0xfull))));
}
B5d8801:{NFSU2_TR(0x5d8801);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x3ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5d8804:{NFSU2_TR(0x5d8804);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5d880c;}}
}
B5d8806:L5d8806:{c.instructions+=2;NFSU2_TR(0x5d8806);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+8),(U+4),2);
}
B5d880a:{NFSU2_TR(0x5d880a);
{goto L5d8810;}
}
B5d880c:L5d880c:{c.instructions+=1;NFSU2_TR(0x5d880c);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+8),(U+4),2);
}
B5d8810:L5d8810:{c.instructions+=2;NFSU2_TR(0x5d8810);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x3ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5d8813:{NFSU2_TR(0x5d8813);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5d881b;}}
}
B5d8815:L5d8815:{c.instructions+=2;NFSU2_TR(0x5d8815);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B5d8819:{NFSU2_TR(0x5d8819);
{goto L5d881f;}
}
B5d881b:L5d881b:{c.instructions+=1;NFSU2_TR(0x5d881b);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B5d881f:L5d881f:{c.instructions+=3;NFSU2_TR(0x5d881f);
w4(R+0,u32(s32(s16(r2(R+0)))));
}
B5d8822:{NFSU2_TR(0x5d8822);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5d8824:{NFSU2_TR(0x5d8824);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5d882f;}}
}
B5d8826:L5d8826:{c.instructions+=2;NFSU2_TR(0x5d8826);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x88a334ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B5d882d:{NFSU2_TR(0x5d882d);
{goto L5d8831;}
}
B5d882f:L5d882f:{c.instructions+=1;NFSU2_TR(0x5d882f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5d8831:L5d8831:{c.instructions+=5;NFSU2_TR(0x5d8831);
w4(R+4,u32(s32(s16(r2(R+8)))));
}
B5d8834:{NFSU2_TR(0x5d8834);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+4)))));
w8(U+8,u64(s64(s32(u32(0x38ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+4,u32(r8(U+16)));
}
B5d8837:{NFSU2_TR(0x5d8837);
u8 U[12];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B5d883e:{NFSU2_TR(0x5d883e);
u8 U[22];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+8))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+8)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B5d8842:{NFSU2_TR(0x5d8842);
if(r1(R+518)){{goto L5d884a;}}
}
B5d8844:L5d8844:{c.instructions+=2;NFSU2_TR(0x5d8844);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B5d8845:{NFSU2_TR(0x5d8845);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d87b4u);}goto L5d87b4;}
}
B5d884a:L5d884a:{c.instructions+=7;NFSU2_TR(0x5d884a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5d884b:{NFSU2_TR(0x5d884b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5d884c:{NFSU2_TR(0x5d884c);
__builtin_memmove((R+0),(R+24),4);
}
B5d884e:{NFSU2_TR(0x5d884e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d884f:{NFSU2_TR(0x5d884f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5d8850:{NFSU2_TR(0x5d8850);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5d8851:{NFSU2_TR(0x5d8851);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d8852:L5d8852:{c.instructions+=7;NFSU2_TR(0x5d8852);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5d8853:{NFSU2_TR(0x5d8853);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5d8854:{NFSU2_TR(0x5d8854);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d8855:{NFSU2_TR(0x5d8855);
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
B5d8857:{NFSU2_TR(0x5d8857);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5d8858:{NFSU2_TR(0x5d8858);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5d8859:{NFSU2_TR(0x5d8859);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d8860:L5d8860:{c.instructions+=8;NFSU2_TR(0x5d8860);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d8861:{NFSU2_TR(0x5d8861);
__builtin_memmove((R+0),gp(0x883db4),4);
}
B5d8866:{NFSU2_TR(0x5d8866);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d8867:{NFSU2_TR(0x5d8867);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d8868:{NFSU2_TR(0x5d8868);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B5d886a:{NFSU2_TR(0x5d886a);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B5d886c:{NFSU2_TR(0x5d886c);
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
B5d886e:{NFSU2_TR(0x5d886e);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L5d890f;}}
}
B5d8874:L5d8874:{c.instructions+=5;NFSU2_TR(0x5d8874);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d8875:{NFSU2_TR(0x5d8875);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d8876:{NFSU2_TR(0x5d8876);
__builtin_memmove((R+28),gp(0x883db0),4);
}
B5d887c:{NFSU2_TR(0x5d887c);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5d887e:{NFSU2_TR(0x5d887e);
__builtin_memmove((R+28),(R+28),4);
}
B5d8880:L5d8880:{c.instructions+=4;NFSU2_TR(0x5d8880);
u8 U[14];
w4(U+0,u32(u32(u32(0xaull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
__builtin_memmove((R+24),(U+12),2);
}
B5d8885:{NFSU2_TR(0x5d8885);
w4(R+8,u32(s32(s16(r2(R+24)))));
}
B5d8888:{NFSU2_TR(0x5d8888);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5d888a:{NFSU2_TR(0x5d888a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5d8895;}}
}
B5d888c:L5d888c:{c.instructions+=2;NFSU2_TR(0x5d888c);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x88a334ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B5d8893:{NFSU2_TR(0x5d8893);
{goto L5d8897;}
}
B5d8895:L5d8895:{c.instructions+=1;NFSU2_TR(0x5d8895);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B5d8897:L5d8897:{c.instructions+=4;NFSU2_TR(0x5d8897);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d889a:{NFSU2_TR(0x5d889a);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B5d889d:{NFSU2_TR(0x5d889d);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5d889f:{NFSU2_TR(0x5d889f);
if(r1(R+518)){{goto L5d88d2;}}
}
B5d88a1:L5d88a1:{c.instructions+=4;NFSU2_TR(0x5d88a1);
u8 U[13];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((R+8),(U+12),1);
}
B5d88a5:{NFSU2_TR(0x5d88a5);
w1(R+8,u8(u32(r1(R+8))&u32(u8(0xfull))));
}
B5d88a8:{NFSU2_TR(0x5d88a8);
u8 U[2];
__builtin_memmove((U+0),(R+8),1);
w1(U+1,u8(u32(r1(U+0))-u32(u8(0x3ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5d88ab:{NFSU2_TR(0x5d88ab);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5d88b1;}}
}
B5d88ad:L5d88ad:{c.instructions+=2;NFSU2_TR(0x5d88ad);
__builtin_memmove((R+8),(R+24),4);
}
B5d88af:{NFSU2_TR(0x5d88af);
{goto L5d88b6;}
}
B5d88b1:L5d88b1:{c.instructions+=1;NFSU2_TR(0x5d88b1);
u8 U[14];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
__builtin_memmove((R+8),(U+12),2);
}
B5d88b6:L5d88b6:{c.instructions+=3;NFSU2_TR(0x5d88b6);
w4(R+8,u32(s32(s16(r2(R+8)))));
}
B5d88b9:{NFSU2_TR(0x5d88b9);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5d88bb:{NFSU2_TR(0x5d88bb);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5d88c6;}}
}
B5d88bd:L5d88bd:{c.instructions+=2;NFSU2_TR(0x5d88bd);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x88a334ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B5d88c4:{NFSU2_TR(0x5d88c4);
{goto L5d88c8;}
}
B5d88c6:L5d88c6:{c.instructions+=1;NFSU2_TR(0x5d88c6);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B5d88c8:L5d88c8:{c.instructions+=4;NFSU2_TR(0x5d88c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d88cb:{NFSU2_TR(0x5d88cb);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B5d88ce:{NFSU2_TR(0x5d88ce);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5d88d0:{NFSU2_TR(0x5d88d0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5d88fc;}}
}
B5d88d2:L5d88d2:{c.instructions+=6;NFSU2_TR(0x5d88d2);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5d88d4:{NFSU2_TR(0x5d88d4);
{u32 ea_=u32(u32(8975024u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d88da:{NFSU2_TR(0x5d88da);
{u32 ea_=u32(u32(7882080u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5d88e0:{NFSU2_TR(0x5d88e0);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d88e4:{NFSU2_TR(0x5d88e4);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5d88e8:{NFSU2_TR(0x5d88e8);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5d88f0;}}
}
B5d88ea:L5d88ea:{c.instructions+=1;NFSU2_TR(0x5d88ea);
{u32 ea_=u32(u32(7882060u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5d88f0:L5d88f0:{c.instructions+=4;NFSU2_TR(0x5d88f0);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5d88f2:{NFSU2_TR(0x5d88f2);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B5d88f3:{NFSU2_TR(0x5d88f3);
{u32 ea_=u32(r4(R+28)+r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d88f6:{NFSU2_TR(0x5d88f6);
__builtin_memmove((R+28),gp(0x883db0),4);
}
B5d88fc:L5d88fc:{c.instructions+=5;NFSU2_TR(0x5d88fc);
__builtin_memmove((R+0),gp(0x883db4),4);
}
B5d8901:{NFSU2_TR(0x5d8901);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B5d8902:{NFSU2_TR(0x5d8902);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x20ull))));
}
B5d8905:{NFSU2_TR(0x5d8905);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B5d8907:{NFSU2_TR(0x5d8907);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d8880u);}goto L5d8880;}}
}
B5d890d:L5d890d:{c.instructions+=2;NFSU2_TR(0x5d890d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5d890e:{NFSU2_TR(0x5d890e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d890f:L5d890f:{c.instructions+=5;NFSU2_TR(0x5d890f);
__builtin_memmove((R+0),(R+20),4);
}
B5d8911:{NFSU2_TR(0x5d8911);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5d8912:{NFSU2_TR(0x5d8912);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5d8913:{NFSU2_TR(0x5d8913);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5d8914:{NFSU2_TR(0x5d8914);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d8920:L5d8920:{c.instructions+=5;NFSU2_TR(0x5d8920);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d8923:{NFSU2_TR(0x5d8923);
u8 U[4];
w4(U+0,u32(u32(u32(0x13ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B5d8926:{NFSU2_TR(0x5d8926);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x3full))));
}
B5d8929:{NFSU2_TR(0x5d8929);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3full))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5d892c:{NFSU2_TR(0x5d892c);
if(r1(R+518)){{goto L5d894b;}}
}
B5d892e:L5d892e:{c.instructions+=2;NFSU2_TR(0x5d892e);
u8 U[8];
__builtin_memmove((U+0),gp(0x883dc0),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5d8934:{NFSU2_TR(0x5d8934);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5d894b;}}
}
B5d8936:L5d8936:{c.instructions+=5;NFSU2_TR(0x5d8936);
__builtin_memmove((R+4),gp(0x883dbc),4);
}
B5d893c:{NFSU2_TR(0x5d893c);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x114ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B5d8942:{NFSU2_TR(0x5d8942);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B5d8944:{NFSU2_TR(0x5d8944);
__builtin_memmove((R+4),(R+0),4);
}
B5d8946:{NFSU2_TR(0x5d8946);
TAIL_STATIC(0x410bf0u,410);
}
B5d894b:L5d894b:{c.instructions+=2;NFSU2_TR(0x5d894b);
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
B5d894d:{NFSU2_TR(0x5d894d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d8950:L5d8950:{c.instructions+=6;NFSU2_TR(0x5d8950);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d8953:{NFSU2_TR(0x5d8953);
u8 U[4];
w4(U+0,u32(u32(u32(0x13ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B5d8956:{NFSU2_TR(0x5d8956);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x3full))));
}
B5d8959:{NFSU2_TR(0x5d8959);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3full))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5d895c:{NFSU2_TR(0x5d895c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d895d:{NFSU2_TR(0x5d895d);
if(r1(R+518)){{goto L5d8986;}}
}
B5d895f:L5d895f:{c.instructions+=2;NFSU2_TR(0x5d895f);
u8 U[8];
__builtin_memmove((U+0),gp(0x883dc0),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5d8965:{NFSU2_TR(0x5d8965);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5d8986;}}
}
B5d8967:L5d8967:{c.instructions+=6;NFSU2_TR(0x5d8967);
__builtin_memmove((R+8),gp(0x883dbc),4);
}
B5d896d:{NFSU2_TR(0x5d896d);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x114ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B5d8973:{NFSU2_TR(0x5d8973);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+8))));
}
B5d8975:{NFSU2_TR(0x5d8975);
__builtin_memmove((R+24),(R+0),4);
}
B5d8977:{NFSU2_TR(0x5d8977);
__builtin_memmove((R+4),(R+24),4);
}
B5d8979:{NFSU2_TR(0x5d8979);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d897eull));
TAIL_STATIC(0x410bf0u,410);
}
B5d897e:L5d897e:{c.instructions+=2;NFSU2_TR(0x5d897e);
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
B5d8980:{NFSU2_TR(0x5d8980);
if(r1(R+518)){{goto L5d8986;}}
}
B5d8982:L5d8982:{c.instructions+=3;NFSU2_TR(0x5d8982);
__builtin_memmove((R+0),(R+24),4);
}
B5d8984:{NFSU2_TR(0x5d8984);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d8985:{NFSU2_TR(0x5d8985);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d8986:L5d8986:{c.instructions+=3;NFSU2_TR(0x5d8986);
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
B5d8988:{NFSU2_TR(0x5d8988);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d8989:{NFSU2_TR(0x5d8989);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d8990:L5d8990:{c.instructions+=2;NFSU2_TR(0x5d8990);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5d8992:{NFSU2_TR(0x5d8992);
if(r1(R+518)){{goto L5d89a4;}}
}
B5d8994:L5d8994:{c.instructions+=4;NFSU2_TR(0x5d8994);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d8997:{NFSU2_TR(0x5d8997);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x7ffull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5d899c:{NFSU2_TR(0x5d899c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x88a334ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B5d89a3:{NFSU2_TR(0x5d89a3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d89a4:L5d89a4:{c.instructions+=2;NFSU2_TR(0x5d89a4);
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
B5d89a6:{NFSU2_TR(0x5d89a6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d89b0:L5d89b0:{c.instructions+=2;NFSU2_TR(0x5d89b0);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5d89b2:{NFSU2_TR(0x5d89b2);
if(r1(R+518)){{goto L5d89c5;}}
}
B5d89b4:L5d89b4:{c.instructions+=4;NFSU2_TR(0x5d89b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d89b7:{NFSU2_TR(0x5d89b7);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x7ffull))));
}
B5d89bc:{NFSU2_TR(0x5d89bc);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x88a334ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B5d89c3:{NFSU2_TR(0x5d89c3);
{goto L5d89c7;}
}
B5d89c5:L5d89c5:{c.instructions+=1;NFSU2_TR(0x5d89c5);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5d89c7:L5d89c7:{c.instructions+=11;NFSU2_TR(0x5d89c7);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B5d89c9:{NFSU2_TR(0x5d89c9);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x8cull))));
}
B5d89cf:{NFSU2_TR(0x5d89cf);
w4(R+0,u32(0x92492493ull));
}
B5d89d4:{NFSU2_TR(0x5d89d4);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(u64(r8(U+16))>>32));
w4(R+0,u32(r8(U+16)));
}
B5d89d6:{NFSU2_TR(0x5d89d6);
__builtin_memmove((R+0),(R+8),4);
}
B5d89d8:{NFSU2_TR(0x5d89d8);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
}
B5d89da:{NFSU2_TR(0x5d89da);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B5d89dd:{NFSU2_TR(0x5d89dd);
__builtin_memmove((R+4),(R+0),4);
}
B5d89df:{NFSU2_TR(0x5d89df);
u8 U[4];
w4(U+0,u32(u32(u32(0x1full))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B5d89e2:{NFSU2_TR(0x5d89e2);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),r4(R+4)));
w1(R+523,scarry<u32>(r4(R+0),r4(R+4)));
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5d89e4:{NFSU2_TR(0x5d89e4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d89f0:L5d89f0:{c.instructions+=3;NFSU2_TR(0x5d89f0);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5d89f2:{NFSU2_TR(0x5d89f2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d89f3:{NFSU2_TR(0x5d89f3);
if(r1(R+518)){{goto L5d8a06;}}
}
B5d89f5:L5d89f5:{c.instructions+=4;NFSU2_TR(0x5d89f5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d89f8:{NFSU2_TR(0x5d89f8);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x7ffull))));
}
B5d89fd:{NFSU2_TR(0x5d89fd);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x88a334ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B5d8a04:{NFSU2_TR(0x5d8a04);
{goto L5d8a08;}
}
B5d8a06:L5d8a06:{c.instructions+=1;NFSU2_TR(0x5d8a06);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5d8a08:L5d8a08:{c.instructions+=10;NFSU2_TR(0x5d8a08);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+24))));
}
B5d8a0a:{NFSU2_TR(0x5d8a0a);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x8cull))));
}
B5d8a10:{NFSU2_TR(0x5d8a10);
w4(R+0,u32(0x92492493ull));
}
B5d8a15:{NFSU2_TR(0x5d8a15);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(u64(r8(U+16))>>32));
w4(R+0,u32(r8(U+16)));
}
B5d8a17:{NFSU2_TR(0x5d8a17);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B5d8a19:{NFSU2_TR(0x5d8a19);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B5d8a1c:{NFSU2_TR(0x5d8a1c);
__builtin_memmove((R+4),(R+8),4);
}
B5d8a1e:{NFSU2_TR(0x5d8a1e);
u8 U[4];
w4(U+0,u32(u32(u32(0x1full))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B5d8a21:{NFSU2_TR(0x5d8a21);
u8 U[6];
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5d8a23:{NFSU2_TR(0x5d8a23);
if(r1(R+518)){{goto L5d8a2e;}}
}
B5d8a25:L5d8a25:{c.instructions+=4;NFSU2_TR(0x5d8a25);
u8 U[32];
w8(U+8,u64(s64(s32(r4(R+8)))));
w8(U+16,u64(s64(s32(u32(0x38ull)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+8,u32(r8(U+24)));
w8(U+0,u64(s64(s32(r4(R+8)))));
w1(R+512,u8((r8(U+0))!=(r8(U+24))));
__builtin_memmove((R+523),(R+512),1);
}
B5d8a28:{NFSU2_TR(0x5d8a28);
u8 U[12];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B5d8a2c:{NFSU2_TR(0x5d8a2c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d8a2d:{NFSU2_TR(0x5d8a2d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d8a2e:L5d8a2e:{c.instructions+=3;NFSU2_TR(0x5d8a2e);
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
B5d8a30:{NFSU2_TR(0x5d8a30);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d8a31:{NFSU2_TR(0x5d8a31);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d8a40:L5d8a40:{c.instructions+=3;NFSU2_TR(0x5d8a40);
__builtin_memmove((R+0),(R+4),4);
}
B5d8a42:{NFSU2_TR(0x5d8a42);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5d8a44:{NFSU2_TR(0x5d8a44);
if(r1(R+518)){{goto L5d8a64;}}
}
B5d8a46:L5d8a46:{c.instructions+=7;NFSU2_TR(0x5d8a46);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d8a49:{NFSU2_TR(0x5d8a49);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d8a4d:{NFSU2_TR(0x5d8a4d);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x7ffull))));
}
B5d8a53:{NFSU2_TR(0x5d8a53);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x88a334ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B5d8a5a:{NFSU2_TR(0x5d8a5a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d8a5b:{NFSU2_TR(0x5d8a5b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d8a5c:{NFSU2_TR(0x5d8a5c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d8a61ull));
TAIL_STATIC(0x401cc0u,401);
}
B5d8a61:L5d8a61:{c.instructions+=1;NFSU2_TR(0x5d8a61);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d8a64:L5d8a64:{c.instructions+=5;NFSU2_TR(0x5d8a64);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d8a68:{NFSU2_TR(0x5d8a68);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d8a69:{NFSU2_TR(0x5d8a69);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5d8a6b:{NFSU2_TR(0x5d8a6b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d8a6c:{NFSU2_TR(0x5d8a6c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d8a71ull));
TAIL_STATIC(0x401cc0u,401);
}
B5d8a71:L5d8a71:{c.instructions+=1;NFSU2_TR(0x5d8a71);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d8a80:L5d8a80:{c.instructions+=19;NFSU2_TR(0x5d8a80);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d8a84:{NFSU2_TR(0x5d8a84);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d8a86:{NFSU2_TR(0x5d8a86);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5d8a88:{NFSU2_TR(0x5d8a88);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d8a8b:{NFSU2_TR(0x5d8a8b);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5d8a8e:{NFSU2_TR(0x5d8a8e);
__builtin_memmove((R+0),gp(0x88f2bc),1);
}
B5d8a93:{NFSU2_TR(0x5d8a93);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5d8a95:{NFSU2_TR(0x5d8a95);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5d8a97:{NFSU2_TR(0x5d8a97);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5d8a99:{NFSU2_TR(0x5d8a99);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B5d8a9b:{NFSU2_TR(0x5d8a9b);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B5d8a9d:{NFSU2_TR(0x5d8a9d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5d8a9f:{NFSU2_TR(0x5d8a9f);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B5d8aa1:{NFSU2_TR(0x5d8aa1);
__asm__ volatile(".byte 0xdd,0xda":::"memory");
}
B5d8aa3:{NFSU2_TR(0x5d8aa3);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5d8aa5:{NFSU2_TR(0x5d8aa5);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d8aa9:{NFSU2_TR(0x5d8aa9);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d8aac:{NFSU2_TR(0x5d8aac);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5d8ab0:{NFSU2_TR(0x5d8ab0);
if(r1(R+518)){{goto L5d8ae0;}}
}
B5d8ab2:L5d8ab2:{c.instructions+=7;NFSU2_TR(0x5d8ab2);
{u32 ea_=u32(u32(8975028u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d8ab8:{NFSU2_TR(0x5d8ab8);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5d8aba:{NFSU2_TR(0x5d8aba);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B5d8abc:{NFSU2_TR(0x5d8abc);
__asm__ volatile(".byte 0xde,0xd9":::"memory");
}
B5d8abe:{NFSU2_TR(0x5d8abe);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5d8ac0:{NFSU2_TR(0x5d8ac0);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5d8ac3:{NFSU2_TR(0x5d8ac3);
if(r1(R+514)){{goto L5d8acd;}}
}
B5d8ac5:L5d8ac5:{c.instructions+=2;NFSU2_TR(0x5d8ac5);
{u32 ea_=u32(u32(8975024u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5d8acb:{NFSU2_TR(0x5d8acb);
{goto L5d8ae0;}
}
B5d8acd:L5d8acd:{c.instructions+=4;NFSU2_TR(0x5d8acd);
{u32 ea_=u32(u32(8975028u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5d8ad3:{NFSU2_TR(0x5d8ad3);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5d8ad5:{NFSU2_TR(0x5d8ad5);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5d8ad8:{NFSU2_TR(0x5d8ad8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5d8ae0;}}
}
B5d8ada:L5d8ada:{c.instructions+=1;NFSU2_TR(0x5d8ada);
{u32 ea_=u32(u32(8975024u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5d8ae0:L5d8ae0:{c.instructions+=7;NFSU2_TR(0x5d8ae0);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B5d8ae2:{NFSU2_TR(0x5d8ae2);
{u32 ea_=u32(u32(7887744u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5d8ae8:{NFSU2_TR(0x5d8ae8);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d8aec:{NFSU2_TR(0x5d8aec);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B5d8aee:{NFSU2_TR(0x5d8aee);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5d8af0:{NFSU2_TR(0x5d8af0);
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
B5d8af3:{NFSU2_TR(0x5d8af3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5d8afb;}}
}
B5d8af5:L5d8af5:{c.instructions+=2;NFSU2_TR(0x5d8af5);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5d8af7:{NFSU2_TR(0x5d8af7);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d8afb:L5d8afb:{c.instructions+=1;NFSU2_TR(0x5d8afb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d8b00:L5d8b00:{c.instructions+=21;NFSU2_TR(0x5d8b00);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d8b01:{NFSU2_TR(0x5d8b01);
__builtin_memmove((R+20),(R+16),4);
}
B5d8b03:{NFSU2_TR(0x5d8b03);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B5d8b06:{NFSU2_TR(0x5d8b06);
u8 U[6];
w1(R+512,u8((r4(R+16))<(u32(0x1cull))));
w1(R+523,sborrow<u32>(r4(R+16),u32(0x1cull)));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x1cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5d8b09:{NFSU2_TR(0x5d8b09);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d8b0a:{NFSU2_TR(0x5d8b0a);
__builtin_memmove((R+24),(R+4),4);
}
B5d8b0c:{NFSU2_TR(0x5d8b0c);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x12ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B5d8b10:{NFSU2_TR(0x5d8b10);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5d8b12:{NFSU2_TR(0x5d8b12);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d8b15:{NFSU2_TR(0x5d8b15);
u8 U[45];
w4(U+37,u32(u32(u32(0xdull))&u32(u32(0x1full))));
__builtin_memmove((U+41),(R+8),4);
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+37))));
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
w1(U+35,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(U+36,u8(u32(r1(R+512))^u32(r1(U+35))));
__builtin_memmove((U+0),(U+34),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(U+36))));
w1(U+2,u8(!(r1(U+34))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(R+523))));
w1(R+523,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+37))!=(u32(0x0ull))));
w1(U+6,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(U+7,u8(!(r1(U+5))));
w1(U+8,u8(u32(r1(U+7))&u32(r1(R+519))));
w1(U+9,u8(u32(r1(U+5))&u32(r1(U+6))));
w1(R+519,u8(u32(r1(U+8))|u32(r1(U+9))));
w1(U+10,u8((r4(R+8))==(u32(0x0ull))));
w1(U+11,u8(!(r1(U+5))));
w1(U+12,u8(u32(r1(U+11))&u32(r1(R+518))));
w1(U+13,u8(u32(r1(U+5))&u32(r1(U+10))));
w1(R+518,u8(u32(r1(U+12))|u32(r1(U+13))));
w4(U+14,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+18,u8(__builtin_popcountll(u64(r4(U+14)))));
w1(U+19,u8(u32(r1(U+18))&u32(u8(0x1ull))));
w1(U+20,u8((r1(U+19))==(u8(0x0ull))));
w1(U+21,u8(!(r1(U+5))));
w1(U+22,u8(u32(r1(U+21))&u32(r1(R+514))));
w1(U+23,u8(u32(r1(U+5))&u32(r1(U+20))));
w1(R+514,u8(u32(r1(U+22))|u32(r1(U+23))));
}
B5d8b18:{NFSU2_TR(0x5d8b18);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d8b1c:{NFSU2_TR(0x5d8b1c);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d8b20:{NFSU2_TR(0x5d8b20);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d8b23:{NFSU2_TR(0x5d8b23);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5d8b27:{NFSU2_TR(0x5d8b27);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d8b2b:{NFSU2_TR(0x5d8b2b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d8b2c:{NFSU2_TR(0x5d8b2c);
{u32 ea_=u32(u32(7881336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5d8b32:{NFSU2_TR(0x5d8b32);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5d8b36:{NFSU2_TR(0x5d8b36);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d8b37:{NFSU2_TR(0x5d8b37);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d8b3b:{NFSU2_TR(0x5d8b3b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d8b40ull));
TAIL_STATIC(0x43ce10u,43c);
}
B5d8b40:L5d8b40:{c.instructions+=7;NFSU2_TR(0x5d8b40);
__builtin_memmove((R+0),gp(0x88f2bc),1);
}
B5d8b45:{NFSU2_TR(0x5d8b45);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d8b49:{NFSU2_TR(0x5d8b49);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d8b4c:{NFSU2_TR(0x5d8b4c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5d8b4f:{NFSU2_TR(0x5d8b4f);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5d8b51:{NFSU2_TR(0x5d8b51);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5d8b54:{NFSU2_TR(0x5d8b54);
if(r1(R+518)){{goto L5d8b84;}}
}
B5d8b56:L5d8b56:{c.instructions+=7;NFSU2_TR(0x5d8b56);
{u32 ea_=u32(u32(8975028u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d8b5c:{NFSU2_TR(0x5d8b5c);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5d8b5e:{NFSU2_TR(0x5d8b5e);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B5d8b60:{NFSU2_TR(0x5d8b60);
__asm__ volatile(".byte 0xde,0xd9":::"memory");
}
B5d8b62:{NFSU2_TR(0x5d8b62);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5d8b64:{NFSU2_TR(0x5d8b64);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5d8b67:{NFSU2_TR(0x5d8b67);
if(r1(R+514)){{goto L5d8b71;}}
}
B5d8b69:L5d8b69:{c.instructions+=2;NFSU2_TR(0x5d8b69);
{u32 ea_=u32(u32(8975024u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5d8b6f:{NFSU2_TR(0x5d8b6f);
{goto L5d8b84;}
}
B5d8b71:L5d8b71:{c.instructions+=4;NFSU2_TR(0x5d8b71);
{u32 ea_=u32(u32(8975028u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5d8b77:{NFSU2_TR(0x5d8b77);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5d8b79:{NFSU2_TR(0x5d8b79);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5d8b7c:{NFSU2_TR(0x5d8b7c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5d8b84;}}
}
B5d8b7e:L5d8b7e:{c.instructions+=1;NFSU2_TR(0x5d8b7e);
{u32 ea_=u32(u32(8975024u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5d8b84:L5d8b84:{c.instructions+=7;NFSU2_TR(0x5d8b84);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B5d8b86:{NFSU2_TR(0x5d8b86);
{u32 ea_=u32(u32(7887744u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5d8b8c:{NFSU2_TR(0x5d8b8c);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d8b90:{NFSU2_TR(0x5d8b90);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B5d8b92:{NFSU2_TR(0x5d8b92);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5d8b94:{NFSU2_TR(0x5d8b94);
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
B5d8b97:{NFSU2_TR(0x5d8b97);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5d8b9f;}}
}
B5d8b99:L5d8b99:{c.instructions+=2;NFSU2_TR(0x5d8b99);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5d8b9b:{NFSU2_TR(0x5d8b9b);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d8b9f:L5d8b9f:{c.instructions+=4;NFSU2_TR(0x5d8b9f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d8ba0:{NFSU2_TR(0x5d8ba0);
__builtin_memmove((R+16),(R+20),4);
}
B5d8ba2:{NFSU2_TR(0x5d8ba2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5d8ba3:{NFSU2_TR(0x5d8ba3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d8bb0:L5d8bb0:{c.instructions+=3;NFSU2_TR(0x5d8bb0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d8bb4:{NFSU2_TR(0x5d8bb4);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B5d8bb7:{NFSU2_TR(0x5d8bb7);
if(r1(R+518)){{goto L5d8bdc;}}
}
B5d8bb9:L5d8bb9:{c.instructions+=2;NFSU2_TR(0x5d8bb9);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B5d8bba:{NFSU2_TR(0x5d8bba);
if(r1(R+518)){{goto L5d8bd0;}}
}
B5d8bbc:L5d8bbc:{c.instructions+=2;NFSU2_TR(0x5d8bbc);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B5d8bbd:{NFSU2_TR(0x5d8bbd);
if(r1(R+518)){{goto L5d8bc4;}}
}
B5d8bbf:L5d8bbf:{c.instructions+=2;NFSU2_TR(0x5d8bbf);
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
B5d8bc1:{NFSU2_TR(0x5d8bc1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d8bc4:L5d8bc4:{c.instructions+=4;NFSU2_TR(0x5d8bc4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d8bc7:{NFSU2_TR(0x5d8bc7);
u8 U[4];
w4(U+0,u32(u32(u32(0x1bull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B5d8bca:{NFSU2_TR(0x5d8bca);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5d8bcd:{NFSU2_TR(0x5d8bcd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d8bd0:L5d8bd0:{c.instructions+=4;NFSU2_TR(0x5d8bd0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d8bd3:{NFSU2_TR(0x5d8bd3);
u8 U[4];
w4(U+0,u32(u32(u32(0x19ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B5d8bd6:{NFSU2_TR(0x5d8bd6);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5d8bd9:{NFSU2_TR(0x5d8bd9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d8bdc:L5d8bdc:{c.instructions+=4;NFSU2_TR(0x5d8bdc);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d8bdf:{NFSU2_TR(0x5d8bdf);
u8 U[4];
w4(U+0,u32(u32(u32(0xbull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B5d8be2:{NFSU2_TR(0x5d8be2);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5d8be5:{NFSU2_TR(0x5d8be5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d8bf0:L5d8bf0:{c.instructions+=2;NFSU2_TR(0x5d8bf0);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B5d8bf2:{NFSU2_TR(0x5d8bf2);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B5d8bf4:L5d8bf4:{c.instructions+=2;NFSU2_TR(0x5d8bf4);
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
B5d8bf6:{NFSU2_TR(0x5d8bf6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5d8c2e;}}
}
B5d8bf8:L5d8bf8:{c.instructions+=3;NFSU2_TR(0x5d8bf8);
__builtin_memmove((R+0),(R+8),4);
}
B5d8bfa:{NFSU2_TR(0x5d8bfa);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B5d8bfd:{NFSU2_TR(0x5d8bfd);
if(r1(R+518)){{goto L5d8c15;}}
}
B5d8bff:L5d8bff:{c.instructions+=2;NFSU2_TR(0x5d8bff);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B5d8c00:{NFSU2_TR(0x5d8c00);
if(r1(R+518)){{goto L5d8c0d;}}
}
B5d8c02:L5d8c02:{c.instructions+=2;NFSU2_TR(0x5d8c02);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B5d8c03:{NFSU2_TR(0x5d8c03);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5d8c22;}}
}
B5d8c05:L5d8c05:{c.instructions+=3;NFSU2_TR(0x5d8c05);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d8c08:{NFSU2_TR(0x5d8c08);
u8 U[4];
w4(U+0,u32(u32(u32(0x1bull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B5d8c0b:{NFSU2_TR(0x5d8c0b);
{goto L5d8c1b;}
}
B5d8c0d:L5d8c0d:{c.instructions+=3;NFSU2_TR(0x5d8c0d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d8c10:{NFSU2_TR(0x5d8c10);
u8 U[4];
w4(U+0,u32(u32(u32(0x19ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B5d8c13:{NFSU2_TR(0x5d8c13);
{goto L5d8c1b;}
}
B5d8c15:L5d8c15:{c.instructions+=2;NFSU2_TR(0x5d8c15);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d8c18:{NFSU2_TR(0x5d8c18);
u8 U[4];
w4(U+0,u32(u32(u32(0xbull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B5d8c1b:L5d8c1b:{c.instructions+=3;NFSU2_TR(0x5d8c1b);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x1ull))));
}
B5d8c1e:{NFSU2_TR(0x5d8c1e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5d8c20:{NFSU2_TR(0x5d8c20);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5d8c26;}}
}
B5d8c22:L5d8c22:{c.instructions+=2;NFSU2_TR(0x5d8c22);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B5d8c24:{NFSU2_TR(0x5d8c24);
{goto L5d8c28;}
}
B5d8c26:L5d8c26:{c.instructions+=1;NFSU2_TR(0x5d8c26);
w1(R+0,u8(0x1ull));
}
B5d8c28:L5d8c28:{c.instructions+=3;NFSU2_TR(0x5d8c28);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B5d8c29:{NFSU2_TR(0x5d8c29);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B5d8c2c:{NFSU2_TR(0x5d8c2c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d8bf4u);}goto L5d8bf4;}}
}
B5d8c2e:L5d8c2e:{c.instructions+=2;NFSU2_TR(0x5d8c2e);
w4(R+0,u32(r1(R+0)));
}
B5d8c31:{NFSU2_TR(0x5d8c31);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d8c40:L5d8c40:{c.instructions+=2;NFSU2_TR(0x5d8c40);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B5d8c42:{NFSU2_TR(0x5d8c42);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B5d8c44:L5d8c44:{c.instructions+=2;NFSU2_TR(0x5d8c44);
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
B5d8c46:{NFSU2_TR(0x5d8c46);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5d8c7e;}}
}
B5d8c48:L5d8c48:{c.instructions+=3;NFSU2_TR(0x5d8c48);
__builtin_memmove((R+0),(R+8),4);
}
B5d8c4a:{NFSU2_TR(0x5d8c4a);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B5d8c4d:{NFSU2_TR(0x5d8c4d);
if(r1(R+518)){{goto L5d8c65;}}
}
B5d8c4f:L5d8c4f:{c.instructions+=2;NFSU2_TR(0x5d8c4f);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B5d8c50:{NFSU2_TR(0x5d8c50);
if(r1(R+518)){{goto L5d8c5d;}}
}
B5d8c52:L5d8c52:{c.instructions+=2;NFSU2_TR(0x5d8c52);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B5d8c53:{NFSU2_TR(0x5d8c53);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5d8c72;}}
}
B5d8c55:L5d8c55:{c.instructions+=3;NFSU2_TR(0x5d8c55);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d8c58:{NFSU2_TR(0x5d8c58);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B5d8c5b:{NFSU2_TR(0x5d8c5b);
{goto L5d8c6b;}
}
B5d8c5d:L5d8c5d:{c.instructions+=3;NFSU2_TR(0x5d8c5d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d8c60:{NFSU2_TR(0x5d8c60);
u8 U[4];
w4(U+0,u32(u32(u32(0x1aull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B5d8c63:{NFSU2_TR(0x5d8c63);
{goto L5d8c6b;}
}
B5d8c65:L5d8c65:{c.instructions+=2;NFSU2_TR(0x5d8c65);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d8c68:{NFSU2_TR(0x5d8c68);
u8 U[4];
w4(U+0,u32(u32(u32(0x12ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B5d8c6b:L5d8c6b:{c.instructions+=3;NFSU2_TR(0x5d8c6b);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x1ull))));
}
B5d8c6e:{NFSU2_TR(0x5d8c6e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5d8c70:{NFSU2_TR(0x5d8c70);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5d8c76;}}
}
B5d8c72:L5d8c72:{c.instructions+=2;NFSU2_TR(0x5d8c72);
w1(R+0,u8(u32(r1(R+0))^u32(r1(R+0))));
}
B5d8c74:{NFSU2_TR(0x5d8c74);
{goto L5d8c78;}
}
B5d8c76:L5d8c76:{c.instructions+=1;NFSU2_TR(0x5d8c76);
w1(R+0,u8(0x1ull));
}
B5d8c78:L5d8c78:{c.instructions+=3;NFSU2_TR(0x5d8c78);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B5d8c79:{NFSU2_TR(0x5d8c79);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B5d8c7c:{NFSU2_TR(0x5d8c7c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d8c44u);}goto L5d8c44;}}
}
B5d8c7e:L5d8c7e:{c.instructions+=2;NFSU2_TR(0x5d8c7e);
w4(R+0,u32(r1(R+0)));
}
B5d8c81:{NFSU2_TR(0x5d8c81);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d8c90:L5d8c90:{c.instructions+=12;NFSU2_TR(0x5d8c90);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B5d8c93:{NFSU2_TR(0x5d8c93);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d8c94:{NFSU2_TR(0x5d8c94);
__builtin_memmove((R+20),(R+4),4);
}
B5d8c96:{NFSU2_TR(0x5d8c96);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B5d8c9a:{NFSU2_TR(0x5d8c9a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d8c9b:{NFSU2_TR(0x5d8c9b);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5d8c9d:{NFSU2_TR(0x5d8c9d);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5d8c9f:{NFSU2_TR(0x5d8c9f);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5d8ca1:{NFSU2_TR(0x5d8ca1);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d8ca5:{NFSU2_TR(0x5d8ca5);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
w4(U+4,u32(0x497423f0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5d8cad:{NFSU2_TR(0x5d8cad);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d8cb1:{NFSU2_TR(0x5d8cb1);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5d8db8;}}
}
B5d8cb7:L5d8cb7:{c.instructions+=4;NFSU2_TR(0x5d8cb7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d8cb8:{NFSU2_TR(0x5d8cb8);
__builtin_memmove((R+12),gp(0x88f2bc),1);
}
B5d8cbe:{NFSU2_TR(0x5d8cbe);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d8cbf:{NFSU2_TR(0x5d8cbf);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5d8cc3:L5d8cc3:{c.instructions+=5;NFSU2_TR(0x5d8cc3);
__builtin_memmove((R+0),(R+24),4);
}
B5d8cc5:{NFSU2_TR(0x5d8cc5);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x38ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B5d8cc8:{NFSU2_TR(0x5d8cc8);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5d8cca:{NFSU2_TR(0x5d8cca);
u8 U[12];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B5d8cd1:{NFSU2_TR(0x5d8cd1);
if(r1(R+518)){{goto L5d8ce0;}}
}
B5d8cd3:L5d8cd3:{c.instructions+=4;NFSU2_TR(0x5d8cd3);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5d8cd7:{NFSU2_TR(0x5d8cd7);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d8cd8:{NFSU2_TR(0x5d8cd8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d8cd9:{NFSU2_TR(0x5d8cd9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d8cdeull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d8a80u);}goto L5d8a80;}
}
B5d8cde:L5d8cde:{c.instructions+=1;NFSU2_TR(0x5d8cde);
{goto L5d8d19;}
}
B5d8ce0:L5d8ce0:{c.instructions+=4;NFSU2_TR(0x5d8ce0);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5d8ce2:{NFSU2_TR(0x5d8ce2);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d8ce5:{NFSU2_TR(0x5d8ce5);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5d8ce9:{NFSU2_TR(0x5d8ce9);
if(r1(R+518)){{goto L5d8d19;}}
}
B5d8ceb:L5d8ceb:{c.instructions+=7;NFSU2_TR(0x5d8ceb);
{u32 ea_=u32(u32(8975028u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d8cf1:{NFSU2_TR(0x5d8cf1);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5d8cf3:{NFSU2_TR(0x5d8cf3);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B5d8cf5:{NFSU2_TR(0x5d8cf5);
__asm__ volatile(".byte 0xde,0xd9":::"memory");
}
B5d8cf7:{NFSU2_TR(0x5d8cf7);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5d8cf9:{NFSU2_TR(0x5d8cf9);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5d8cfc:{NFSU2_TR(0x5d8cfc);
if(r1(R+514)){{goto L5d8d06;}}
}
B5d8cfe:L5d8cfe:{c.instructions+=2;NFSU2_TR(0x5d8cfe);
{u32 ea_=u32(u32(8975024u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5d8d04:{NFSU2_TR(0x5d8d04);
{goto L5d8d19;}
}
B5d8d06:L5d8d06:{c.instructions+=4;NFSU2_TR(0x5d8d06);
{u32 ea_=u32(u32(8975028u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5d8d0c:{NFSU2_TR(0x5d8d0c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5d8d0e:{NFSU2_TR(0x5d8d0e);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5d8d11:{NFSU2_TR(0x5d8d11);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5d8d19;}}
}
B5d8d13:L5d8d13:{c.instructions+=1;NFSU2_TR(0x5d8d13);
{u32 ea_=u32(u32(8975024u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5d8d19:L5d8d19:{c.instructions+=5;NFSU2_TR(0x5d8d19);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5d8d1b:{NFSU2_TR(0x5d8d1b);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5d8d1f:{NFSU2_TR(0x5d8d1f);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d8d22:{NFSU2_TR(0x5d8d22);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5d8d26:{NFSU2_TR(0x5d8d26);
if(r1(R+518)){{goto L5d8d56;}}
}
B5d8d28:L5d8d28:{c.instructions+=7;NFSU2_TR(0x5d8d28);
{u32 ea_=u32(u32(8975028u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d8d2e:{NFSU2_TR(0x5d8d2e);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5d8d30:{NFSU2_TR(0x5d8d30);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B5d8d32:{NFSU2_TR(0x5d8d32);
__asm__ volatile(".byte 0xde,0xd9":::"memory");
}
B5d8d34:{NFSU2_TR(0x5d8d34);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5d8d36:{NFSU2_TR(0x5d8d36);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5d8d39:{NFSU2_TR(0x5d8d39);
if(r1(R+514)){{goto L5d8d43;}}
}
B5d8d3b:L5d8d3b:{c.instructions+=2;NFSU2_TR(0x5d8d3b);
{u32 ea_=u32(u32(8975024u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5d8d41:{NFSU2_TR(0x5d8d41);
{goto L5d8d56;}
}
B5d8d43:L5d8d43:{c.instructions+=4;NFSU2_TR(0x5d8d43);
{u32 ea_=u32(u32(8975028u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5d8d49:{NFSU2_TR(0x5d8d49);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5d8d4b:{NFSU2_TR(0x5d8d4b);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5d8d4e:{NFSU2_TR(0x5d8d4e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5d8d56;}}
}
B5d8d50:L5d8d50:{c.instructions+=1;NFSU2_TR(0x5d8d50);
{u32 ea_=u32(u32(8975024u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5d8d56:L5d8d56:{c.instructions+=4;NFSU2_TR(0x5d8d56);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5d8d5c:{NFSU2_TR(0x5d8d5c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5d8d5e:{NFSU2_TR(0x5d8d5e);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5d8d61:{NFSU2_TR(0x5d8d61);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5d8d67;}}
}
B5d8d63:L5d8d63:{c.instructions+=2;NFSU2_TR(0x5d8d63);
w1(R+8,u8(0x1ull));
}
B5d8d65:{NFSU2_TR(0x5d8d65);
{goto L5d8d69;}
}
B5d8d67:L5d8d67:{c.instructions+=1;NFSU2_TR(0x5d8d67);
w1(R+8,u8(u32(r1(R+8))^u32(r1(R+8))));
}
B5d8d69:L5d8d69:{c.instructions+=4;NFSU2_TR(0x5d8d69);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5d8d6f:{NFSU2_TR(0x5d8d6f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5d8d71:{NFSU2_TR(0x5d8d71);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5d8d74:{NFSU2_TR(0x5d8d74);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5d8d8d;}}
}
B5d8d76:L5d8d76:{c.instructions+=4;NFSU2_TR(0x5d8d76);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5d8d7a:{NFSU2_TR(0x5d8d7a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5d8d7c:{NFSU2_TR(0x5d8d7c);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5d8d7f:{NFSU2_TR(0x5d8d7f);
if(r1(R+514)){{goto L5d8d8d;}}
}
B5d8d81:L5d8d81:{c.instructions+=2;NFSU2_TR(0x5d8d81);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5d8d83:{NFSU2_TR(0x5d8d83);
if(r1(R+518)){{goto L5d8d8d;}}
}
B5d8d85:L5d8d85:{c.instructions+=2;NFSU2_TR(0x5d8d85);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5d8d89:{NFSU2_TR(0x5d8d89);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d8d8d:L5d8d8d:{c.instructions+=2;NFSU2_TR(0x5d8d8d);
{u32 ea_=u32(u32(7885484u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5d8d93:{NFSU2_TR(0x5d8d93);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d8d98ull));
TAIL_STATIC(0x75bed4u,75b);
}
B5d8d98:L5d8d98:{c.instructions+=4;NFSU2_TR(0x5d8d98);
w4(R+4,u32(0xfffffffeull));
}
B5d8d9d:{NFSU2_TR(0x5d8d9d);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B5d8d9f:{NFSU2_TR(0x5d8d9f);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5d8da1:{NFSU2_TR(0x5d8da1);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5d8da5;}}
}
B5d8da3:L5d8da3:{c.instructions+=1;NFSU2_TR(0x5d8da3);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+4))));
}
B5d8da5:L5d8da5:{c.instructions+=4;NFSU2_TR(0x5d8da5);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d8da9:{NFSU2_TR(0x5d8da9);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B5d8daa:{NFSU2_TR(0x5d8daa);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5d8dac:{NFSU2_TR(0x5d8dac);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d8cc3u);}goto L5d8cc3;}}
}
B5d8db2:L5d8db2:{c.instructions+=3;NFSU2_TR(0x5d8db2);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d8db6:{NFSU2_TR(0x5d8db6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5d8db7:{NFSU2_TR(0x5d8db7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5d8db8:L5d8db8:{c.instructions+=4;NFSU2_TR(0x5d8db8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d8db9:{NFSU2_TR(0x5d8db9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5d8dba:{NFSU2_TR(0x5d8dba);
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
B5d8dbd:{NFSU2_TR(0x5d8dbd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d8dc0:L5d8dc0:{c.instructions+=6;NFSU2_TR(0x5d8dc0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5d8dc2:{NFSU2_TR(0x5d8dc2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5d8dc5:{NFSU2_TR(0x5d8dc5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5d8dc7:{NFSU2_TR(0x5d8dc7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B5d8dca:{NFSU2_TR(0x5d8dca);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5d8dcc:{NFSU2_TR(0x5d8dcc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5d8ddf;}}
}
B5d8dce:L5d8dce:{c.instructions+=5;NFSU2_TR(0x5d8dce);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B5d8dd2:{NFSU2_TR(0x5d8dd2);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B5d8dd5:{NFSU2_TR(0x5d8dd5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B5d8dd9:{NFSU2_TR(0x5d8dd9);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5d8ddd:{NFSU2_TR(0x5d8ddd);
{goto L5d8dee;}
}
B5d8ddf:L5d8ddf:{c.instructions+=4;NFSU2_TR(0x5d8ddf);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x16ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B5d8de3:{NFSU2_TR(0x5d8de3);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B5d8de6:{NFSU2_TR(0x5d8de6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B5d8dea:{NFSU2_TR(0x5d8dea);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5d8dee:L5d8dee:{c.instructions+=4;NFSU2_TR(0x5d8dee);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5d8df1:{NFSU2_TR(0x5d8df1);
{u32 ea_=u32(u32(7881336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5d8df7:{NFSU2_TR(0x5d8df7);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5d8df9:{NFSU2_TR(0x5d8df9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5d8e0c;}}
}
B5d8dfb:L5d8dfb:{c.instructions+=5;NFSU2_TR(0x5d8dfb);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B5d8dff:{NFSU2_TR(0x5d8dff);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B5d8e02:{NFSU2_TR(0x5d8e02);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B5d8e06:{NFSU2_TR(0x5d8e06);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5d8e0a:{NFSU2_TR(0x5d8e0a);
{goto L5d8e1b;}
}
B5d8e0c:L5d8e0c:{c.instructions+=4;NFSU2_TR(0x5d8e0c);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x16ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B5d8e10:{NFSU2_TR(0x5d8e10);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B5d8e13:{NFSU2_TR(0x5d8e13);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B5d8e17:{NFSU2_TR(0x5d8e17);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5d8e1b:L5d8e1b:{c.instructions+=7;NFSU2_TR(0x5d8e1b);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5d8e1d:{NFSU2_TR(0x5d8e1d);
{u32 ea_=u32(u32(7881336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5d8e23:{NFSU2_TR(0x5d8e23);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B5d8e25:{NFSU2_TR(0x5d8e25);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5d8e2b:{NFSU2_TR(0x5d8e2b);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d8e2f:{NFSU2_TR(0x5d8e2f);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5d8e31:{NFSU2_TR(0x5d8e31);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5d8e44;}}
}
B5d8e33:L5d8e33:{c.instructions+=5;NFSU2_TR(0x5d8e33);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B5d8e37:{NFSU2_TR(0x5d8e37);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B5d8e3a:{NFSU2_TR(0x5d8e3a);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d8e3e:{NFSU2_TR(0x5d8e3e);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5d8e42:{NFSU2_TR(0x5d8e42);
{goto L5d8e53;}
}
B5d8e44:L5d8e44:{c.instructions+=4;NFSU2_TR(0x5d8e44);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x16ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+0,u32(r2(U+4)));
}
B5d8e48:{NFSU2_TR(0x5d8e48);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B5d8e4b:{NFSU2_TR(0x5d8e4b);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d8e4f:{NFSU2_TR(0x5d8e4f);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5d8e53:L5d8e53:{c.instructions+=7;NFSU2_TR(0x5d8e53);
{u32 ea_=u32(u32(7881336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5d8e59:{NFSU2_TR(0x5d8e59);
{u32 ea_=u32(u32(8875280u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B5d8e5f:{NFSU2_TR(0x5d8e5f);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d8e63:{NFSU2_TR(0x5d8e63);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B5d8e65:{NFSU2_TR(0x5d8e65);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5d8e67:{NFSU2_TR(0x5d8e67);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5d8e6a:{NFSU2_TR(0x5d8e6a);
if(r1(R+514)){{goto L5d8e72;}}
}
B5d8e6c:L5d8e6c:{c.instructions+=2;NFSU2_TR(0x5d8e6c);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5d8e6e:{NFSU2_TR(0x5d8e6e);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d8e72:L5d8e72:{c.instructions+=2;NFSU2_TR(0x5d8e72);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5d8e75:{NFSU2_TR(0x5d8e75);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5d8e88;}}
}
B5d8e77:L5d8e77:{c.instructions+=5;NFSU2_TR(0x5d8e77);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(r2(U+4)));
}
B5d8e7b:{NFSU2_TR(0x5d8e7b);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B5d8e7e:{NFSU2_TR(0x5d8e7e);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d8e82:{NFSU2_TR(0x5d8e82);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5d8e86:{NFSU2_TR(0x5d8e86);
{goto L5d8e97;}
}
B5d8e88:L5d8e88:{c.instructions+=4;NFSU2_TR(0x5d8e88);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x16ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B5d8e8c:{NFSU2_TR(0x5d8e8c);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B5d8e8f:{NFSU2_TR(0x5d8e8f);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d8e93:{NFSU2_TR(0x5d8e93);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5d8e97:L5d8e97:{c.instructions+=7;NFSU2_TR(0x5d8e97);
{u32 ea_=u32(u32(7881336u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5d8e9d:{NFSU2_TR(0x5d8e9d);
{u32 ea_=u32(u32(8875280u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5d8ea3:{NFSU2_TR(0x5d8ea3);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d8ea7:{NFSU2_TR(0x5d8ea7);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B5d8ea9:{NFSU2_TR(0x5d8ea9);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5d8eab:{NFSU2_TR(0x5d8eab);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5d8eae:{NFSU2_TR(0x5d8eae);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5d8ebc;}}
}
B5d8eb0:L5d8eb0:{c.instructions+=4;NFSU2_TR(0x5d8eb0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5d8eb4:{NFSU2_TR(0x5d8eb4);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5d8eb6:{NFSU2_TR(0x5d8eb6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B5d8eba:{NFSU2_TR(0x5d8eba);
{goto L5d8ec0;}
}
B5d8ebc:L5d8ebc:{c.instructions+=1;NFSU2_TR(0x5d8ebc);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d8ec0:L5d8ec0:{c.instructions+=7;NFSU2_TR(0x5d8ec0);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d8ec4:{NFSU2_TR(0x5d8ec4);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5d8ec8:{NFSU2_TR(0x5d8ec8);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5d8ecc:{NFSU2_TR(0x5d8ecc);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B5d8ece:{NFSU2_TR(0x5d8ece);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5d8ed0:{NFSU2_TR(0x5d8ed0);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5d8ed3:{NFSU2_TR(0x5d8ed3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5d8edb;}}
}
B5d8ed5:L5d8ed5:{c.instructions+=2;NFSU2_TR(0x5d8ed5);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5d8ed7:{NFSU2_TR(0x5d8ed7);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d8edb:L5d8edb:{c.instructions+=5;NFSU2_TR(0x5d8edb);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d8edf:{NFSU2_TR(0x5d8edf);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B5d8ee1:{NFSU2_TR(0x5d8ee1);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5d8ee3:{NFSU2_TR(0x5d8ee3);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5d8ee6:{NFSU2_TR(0x5d8ee6);
if(r1(R+514)){{goto L5d8eee;}}
}
B5d8ee8:L5d8ee8:{c.instructions+=2;NFSU2_TR(0x5d8ee8);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5d8eea:{NFSU2_TR(0x5d8eea);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d8eee:L5d8eee:{c.instructions+=3;NFSU2_TR(0x5d8eee);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5d8ef2:{NFSU2_TR(0x5d8ef2);
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
B5d8ef5:{NFSU2_TR(0x5d8ef5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d8f00:L5d8f00:{c.instructions+=13;NFSU2_TR(0x5d8f00);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d8f04:{NFSU2_TR(0x5d8f04);
{u32 ea_=u32(u32(8875308u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d8f0a:{NFSU2_TR(0x5d8f0a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d8f0b:{NFSU2_TR(0x5d8f0b);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d8f0c:{NFSU2_TR(0x5d8f0c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d8f0d:{NFSU2_TR(0x5d8f0d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d8f0e:{NFSU2_TR(0x5d8f0e);
__builtin_memmove((R+28),(R+4),4);
}
B5d8f10:{NFSU2_TR(0x5d8f10);
__builtin_memmove((R+4),gp(0x88e990),4);
}
B5d8f16:{NFSU2_TR(0x5d8f16);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B5d8f19:{NFSU2_TR(0x5d8f19);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d8f1d:{NFSU2_TR(0x5d8f1d);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B5d8f1f:{NFSU2_TR(0x5d8f1f);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5d8f21:{NFSU2_TR(0x5d8f21);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5d8f24:L5d8f24:{c.instructions+=5;NFSU2_TR(0x5d8f24);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+20))),2);
w4(R+8,u32(s32(s16(r2(U+0)))));
}
B5d8f28:{NFSU2_TR(0x5d8f28);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5d8f2a:{NFSU2_TR(0x5d8f2a);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5d8f2c:{NFSU2_TR(0x5d8f2c);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5d8f34:{NFSU2_TR(0x5d8f34);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5d8f89;}}
}
B5d8f36:L5d8f36:{c.instructions+=5;NFSU2_TR(0x5d8f36);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B5d8f38:{NFSU2_TR(0x5d8f38);
{u32 ea_=u32(u32(8016312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5d8f3e:{NFSU2_TR(0x5d8f3e);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B5d8f40:{NFSU2_TR(0x5d8f40);
__asm__ volatile(".byte 0xd8,0xca":::"memory");
}
B5d8f42:{NFSU2_TR(0x5d8f42);
__asm__ volatile(".byte 0xd8,0xf9":::"memory");
}
B5d8f44:L5d8f44:{c.instructions+=9;NFSU2_TR(0x5d8f44);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B5d8f47:{NFSU2_TR(0x5d8f47);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B5d8f4a:{NFSU2_TR(0x5d8f4a);
{u32 ea_=u32(r4(R+28)+r4(R+0)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d8f4e:{NFSU2_TR(0x5d8f4e);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B5d8f50:{NFSU2_TR(0x5d8f50);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B5d8f52:{NFSU2_TR(0x5d8f52);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B5d8f54:{NFSU2_TR(0x5d8f54);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5d8f56:{NFSU2_TR(0x5d8f56);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5d8f59:{NFSU2_TR(0x5d8f59);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5d8f5f;}}
}
B5d8f5b:L5d8f5b:{c.instructions+=2;NFSU2_TR(0x5d8f5b);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5d8f5d:{NFSU2_TR(0x5d8f5d);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5d8f5f:L5d8f5f:{c.instructions+=5;NFSU2_TR(0x5d8f5f);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5d8f61:{NFSU2_TR(0x5d8f61);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B5d8f63:{NFSU2_TR(0x5d8f63);
__asm__ volatile(".byte 0xde,0xf1":::"memory");
}
B5d8f65:{NFSU2_TR(0x5d8f65);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B5d8f67:{NFSU2_TR(0x5d8f67);
if(r1(R+518)){{goto L5d8f7c;}}
}
B5d8f69:L5d8f69:{c.instructions+=5;NFSU2_TR(0x5d8f69);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d8f6d:{NFSU2_TR(0x5d8f6d);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B5d8f6f:{NFSU2_TR(0x5d8f6f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5d8f71:{NFSU2_TR(0x5d8f71);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5d8f74:{NFSU2_TR(0x5d8f74);
if(r1(R+514)){{goto L5d8f7c;}}
}
B5d8f76:L5d8f76:{c.instructions+=2;NFSU2_TR(0x5d8f76);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5d8f78:{NFSU2_TR(0x5d8f78);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d8f7c:L5d8f7c:{c.instructions+=4;NFSU2_TR(0x5d8f7c);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B5d8f7d:{NFSU2_TR(0x5d8f7d);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5d8f81:{NFSU2_TR(0x5d8f81);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+4),r4(U+0)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5d8f83:{NFSU2_TR(0x5d8f83);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d8f44u);}goto L5d8f44;}}
}
B5d8f85:L5d8f85:{c.instructions+=2;NFSU2_TR(0x5d8f85);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5d8f87:{NFSU2_TR(0x5d8f87);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5d8f89:L5d8f89:{c.instructions+=3;NFSU2_TR(0x5d8f89);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5d8f8d:{NFSU2_TR(0x5d8f8d);
{u32 ea_=u32(u32(7881272u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5d8f93:{NFSU2_TR(0x5d8f93);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5d8f98ull));
TAIL_STATIC(0x75bed4u,75b);
}
B5d8f98:L5d8f98:{c.instructions+=8;NFSU2_TR(0x5d8f98);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5d8f9a:{NFSU2_TR(0x5d8f9a);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B5d8f9d:{NFSU2_TR(0x5d8f9d);
u8 U[13];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),1);
s1(u32(r4(U+8)),r1(U+12));
}
B5d8fa1:{NFSU2_TR(0x5d8fa1);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x3ull))));
}
B5d8fa4:{NFSU2_TR(0x5d8fa4);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x1ull))));
}
B5d8fa5:{NFSU2_TR(0x5d8fa5);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x2ull))));
}
B5d8fa8:{NFSU2_TR(0x5d8fa8);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(R+512,u8((r4(U+6))<(u32(0x6ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x6ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x6ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5d8fab:{NFSU2_TR(0x5d8fab);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5d8f24u);}goto L5d8f24;}}
}
B5d8fb1:L5d8fb1:{c.instructions+=7;NFSU2_TR(0x5d8fb1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5d8fb2:{NFSU2_TR(0x5d8fb2);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5d8fb4:{NFSU2_TR(0x5d8fb4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5d8fb5:{NFSU2_TR(0x5d8fb5);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5d8fb7:{NFSU2_TR(0x5d8fb7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5d8fb8:{NFSU2_TR(0x5d8fb8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5d8fb9:{NFSU2_TR(0x5d8fb9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5d8fc0:L5d8fc0:{c.instructions+=8;NFSU2_TR(0x5d8fc0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B5d8fc3:{NFSU2_TR(0x5d8fc3);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5d8fc7:{NFSU2_TR(0x5d8fc7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d8fc8:{NFSU2_TR(0x5d8fc8);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
}
B5d8fca:{NFSU2_TR(0x5d8fca);
u8 U[18];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
__builtin_memmove((U+14),(U+12),2);
w1(R+523,sborrow<u16>(r2(U+14),u16(0x0ull)));
w2(U+16,u16(u32(r2(U+14))-u32(u16(0x0ull))));
w1(R+519,u8(s16(r2(U+16))<s16(u16(0x0ull))));
w1(R+518,u8((r2(U+16))==(u16(0x0ull))));
}
B5d8fd0:{NFSU2_TR(0x5d8fd0);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d8fd4:{NFSU2_TR(0x5d8fd4);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5d8fdc:{NFSU2_TR(0x5d8fdc);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){TAIL_STATIC(0x5d9063u,5d9);}
}
B5d8fe2:L5d8fe2:{c.instructions+=11;NFSU2_TR(0x5d8fe2);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d8fe3:{NFSU2_TR(0x5d8fe3);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5d8fe7:{NFSU2_TR(0x5d8fe7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B5d8fea:{NFSU2_TR(0x5d8fea);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d8feb:{NFSU2_TR(0x5d8feb);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B5d8fee:{NFSU2_TR(0x5d8fee);
u8 U[12];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B5d8ff2:{NFSU2_TR(0x5d8ff2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5d8ff3:{NFSU2_TR(0x5d8ff3);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5d8ff7:{NFSU2_TR(0x5d8ff7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5d8ffa:{NFSU2_TR(0x5d8ffa);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5d8ffc:{NFSU2_TR(0x5d8ffc);
if(r1(R+518)){TAIL_STATIC(0x5d903fu,5d9);}
}
B5d8ffe:L5d8ffe:{c.instructions+=1;NFSU2_TR(0x5d8ffe);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
TAIL_STATIC(0x5d9002u,5d9);
}
XIT:NFSU2_TR_EXIT(0x5d8,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
