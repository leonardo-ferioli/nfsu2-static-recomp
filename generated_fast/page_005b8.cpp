#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_5b9(u8* __restrict R,Cpu& c);
u32 body_5cf(u8* __restrict R,Cpu& c);
u32 body_75d(u8* __restrict R,Cpu& c);
u32 body_76a(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x5b8,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x5b8,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_5b8(u8* __restrict R,Cpu& c);
u32 page_5b8(Cpu& c){return body_5b8(c.regs.data(),c);}
__attribute__((noinline)) u32 body_5b8(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x5b8000:goto L5b8000;
case 0x5b8006:c.instructions+=1;goto B5b8006;
case 0x5b8010:goto L5b8010;
case 0x5b8011:c.instructions+=17;goto B5b8011;
case 0x5b8015:c.instructions+=16;goto B5b8015;
case 0x5b8017:c.instructions+=15;goto B5b8017;
case 0x5b8018:c.instructions+=14;goto B5b8018;
case 0x5b801c:c.instructions+=13;goto B5b801c;
case 0x5b801e:c.instructions+=12;goto B5b801e;
case 0x5b8020:c.instructions+=11;goto B5b8020;
case 0x5b8025:c.instructions+=10;goto B5b8025;
case 0x5b8026:c.instructions+=9;goto B5b8026;
case 0x5b8029:c.instructions+=8;goto B5b8029;
case 0x5b802a:c.instructions+=7;goto B5b802a;
case 0x5b802d:c.instructions+=6;goto B5b802d;
case 0x5b802f:c.instructions+=5;goto B5b802f;
case 0x5b8031:c.instructions+=4;goto B5b8031;
case 0x5b8033:c.instructions+=3;goto B5b8033;
case 0x5b8035:c.instructions+=2;goto B5b8035;
case 0x5b8037:c.instructions+=1;goto B5b8037;
case 0x5b803d:goto L5b803d;
case 0x5b8043:c.instructions+=2;goto B5b8043;
case 0x5b8045:c.instructions+=1;goto B5b8045;
case 0x5b8046:goto L5b8046;
case 0x5b804a:c.instructions+=1;goto B5b804a;
case 0x5b804c:goto L5b804c;
case 0x5b8050:c.instructions+=13;goto B5b8050;
case 0x5b8056:c.instructions+=12;goto B5b8056;
case 0x5b805c:c.instructions+=11;goto B5b805c;
case 0x5b8060:c.instructions+=10;goto B5b8060;
case 0x5b8062:c.instructions+=9;goto B5b8062;
case 0x5b8068:c.instructions+=8;goto B5b8068;
case 0x5b806b:c.instructions+=7;goto B5b806b;
case 0x5b8071:c.instructions+=6;goto B5b8071;
case 0x5b8074:c.instructions+=5;goto B5b8074;
case 0x5b807a:c.instructions+=4;goto B5b807a;
case 0x5b807d:c.instructions+=3;goto B5b807d;
case 0x5b8083:c.instructions+=2;goto B5b8083;
case 0x5b8087:c.instructions+=1;goto B5b8087;
case 0x5b808d:goto L5b808d;
case 0x5b8090:c.instructions+=2;goto B5b8090;
case 0x5b8094:c.instructions+=1;goto B5b8094;
case 0x5b8096:goto L5b8096;
case 0x5b809b:c.instructions+=1;goto B5b809b;
case 0x5b809d:goto L5b809d;
case 0x5b809f:c.instructions+=1;goto B5b809f;
case 0x5b80a1:goto L5b80a1;
case 0x5b80a3:goto L5b80a3;
case 0x5b80a9:c.instructions+=4;goto B5b80a9;
case 0x5b80aa:c.instructions+=3;goto B5b80aa;
case 0x5b80ad:c.instructions+=2;goto B5b80ad;
case 0x5b80af:c.instructions+=1;goto B5b80af;
case 0x5b80b1:goto L5b80b1;
case 0x5b80b2:c.instructions+=5;goto B5b80b2;
case 0x5b80b3:c.instructions+=4;goto B5b80b3;
case 0x5b80b4:c.instructions+=3;goto B5b80b4;
case 0x5b80b5:c.instructions+=2;goto B5b80b5;
case 0x5b80b6:c.instructions+=1;goto B5b80b6;
case 0x5b80b9:goto L5b80b9;
case 0x5b80bd:c.instructions+=17;goto B5b80bd;
case 0x5b80c0:c.instructions+=16;goto B5b80c0;
case 0x5b80c3:c.instructions+=15;goto B5b80c3;
case 0x5b80cb:c.instructions+=14;goto B5b80cb;
case 0x5b80d1:c.instructions+=13;goto B5b80d1;
case 0x5b80d7:c.instructions+=12;goto B5b80d7;
case 0x5b80d9:c.instructions+=11;goto B5b80d9;
case 0x5b80dd:c.instructions+=10;goto B5b80dd;
case 0x5b80df:c.instructions+=9;goto B5b80df;
case 0x5b80e2:c.instructions+=8;goto B5b80e2;
case 0x5b80e5:c.instructions+=7;goto B5b80e5;
case 0x5b80e8:c.instructions+=6;goto B5b80e8;
case 0x5b80eb:c.instructions+=5;goto B5b80eb;
case 0x5b80ee:c.instructions+=4;goto B5b80ee;
case 0x5b80f1:c.instructions+=3;goto B5b80f1;
case 0x5b80f7:c.instructions+=2;goto B5b80f7;
case 0x5b80fb:c.instructions+=1;goto B5b80fb;
case 0x5b80fc:goto L5b80fc;
case 0x5b80fd:c.instructions+=4;goto B5b80fd;
case 0x5b80fe:c.instructions+=3;goto B5b80fe;
case 0x5b80ff:c.instructions+=2;goto B5b80ff;
case 0x5b8100:c.instructions+=1;goto B5b8100;
case 0x5b8110:goto L5b8110;
case 0x5b8116:c.instructions+=3;goto B5b8116;
case 0x5b811c:c.instructions+=2;goto B5b811c;
case 0x5b811f:c.instructions+=1;goto B5b811f;
case 0x5b8121:goto L5b8121;
case 0x5b8127:c.instructions+=4;goto B5b8127;
case 0x5b812e:c.instructions+=3;goto B5b812e;
case 0x5b8130:c.instructions+=2;goto B5b8130;
case 0x5b8138:c.instructions+=1;goto B5b8138;
case 0x5b813a:goto L5b813a;
case 0x5b813c:c.instructions+=4;goto B5b813c;
case 0x5b8140:c.instructions+=3;goto B5b8140;
case 0x5b8141:c.instructions+=2;goto B5b8141;
case 0x5b8142:c.instructions+=1;goto B5b8142;
case 0x5b8145:goto L5b8145;
case 0x5b814c:c.instructions+=11;goto B5b814c;
case 0x5b8150:c.instructions+=10;goto B5b8150;
case 0x5b8152:c.instructions+=9;goto B5b8152;
case 0x5b8154:c.instructions+=8;goto B5b8154;
case 0x5b8158:c.instructions+=7;goto B5b8158;
case 0x5b815b:c.instructions+=6;goto B5b815b;
case 0x5b815f:c.instructions+=5;goto B5b815f;
case 0x5b8162:c.instructions+=4;goto B5b8162;
case 0x5b8166:c.instructions+=3;goto B5b8166;
case 0x5b8169:c.instructions+=2;goto B5b8169;
case 0x5b816f:c.instructions+=1;goto B5b816f;
case 0x5b8172:goto L5b8172;
case 0x5b8179:c.instructions+=14;goto B5b8179;
case 0x5b817f:c.instructions+=13;goto B5b817f;
case 0x5b8180:c.instructions+=12;goto B5b8180;
case 0x5b8182:c.instructions+=11;goto B5b8182;
case 0x5b8184:c.instructions+=10;goto B5b8184;
case 0x5b8186:c.instructions+=9;goto B5b8186;
case 0x5b8189:c.instructions+=8;goto B5b8189;
case 0x5b818c:c.instructions+=7;goto B5b818c;
case 0x5b818f:c.instructions+=6;goto B5b818f;
case 0x5b8192:c.instructions+=5;goto B5b8192;
case 0x5b8195:c.instructions+=4;goto B5b8195;
case 0x5b8198:c.instructions+=3;goto B5b8198;
case 0x5b8199:c.instructions+=2;goto B5b8199;
case 0x5b819f:c.instructions+=1;goto B5b819f;
case 0x5b81b0:goto L5b81b0;
case 0x5b81b1:c.instructions+=11;goto B5b81b1;
case 0x5b81b5:c.instructions+=10;goto B5b81b5;
case 0x5b81b6:c.instructions+=9;goto B5b81b6;
case 0x5b81b7:c.instructions+=8;goto B5b81b7;
case 0x5b81ba:c.instructions+=7;goto B5b81ba;
case 0x5b81bb:c.instructions+=6;goto B5b81bb;
case 0x5b81bd:c.instructions+=5;goto B5b81bd;
case 0x5b81be:c.instructions+=4;goto B5b81be;
case 0x5b81c2:c.instructions+=3;goto B5b81c2;
case 0x5b81c7:c.instructions+=2;goto B5b81c7;
case 0x5b81c9:c.instructions+=1;goto B5b81c9;
case 0x5b81d0:goto L5b81d0;
case 0x5b81d4:c.instructions+=3;goto B5b81d4;
case 0x5b81d9:c.instructions+=2;goto B5b81d9;
case 0x5b81db:c.instructions+=1;goto B5b81db;
case 0x5b81dd:goto L5b81dd;
case 0x5b81df:goto L5b81df;
case 0x5b81e1:goto L5b81e1;
case 0x5b81e7:c.instructions+=4;goto B5b81e7;
case 0x5b81e8:c.instructions+=3;goto B5b81e8;
case 0x5b81ee:c.instructions+=2;goto B5b81ee;
case 0x5b81f4:c.instructions+=1;goto B5b81f4;
case 0x5b81f6:goto L5b81f6;
case 0x5b81f7:c.instructions+=6;goto B5b81f7;
case 0x5b81f8:c.instructions+=5;goto B5b81f8;
case 0x5b81f9:c.instructions+=4;goto B5b81f9;
case 0x5b81fb:c.instructions+=3;goto B5b81fb;
case 0x5b81fc:c.instructions+=2;goto B5b81fc;
case 0x5b81fd:c.instructions+=1;goto B5b81fd;
case 0x5b81fe:goto L5b81fe;
case 0x5b8202:c.instructions+=5;goto B5b8202;
case 0x5b8208:c.instructions+=4;goto B5b8208;
case 0x5b820c:c.instructions+=3;goto B5b820c;
case 0x5b8211:c.instructions+=2;goto B5b8211;
case 0x5b8213:c.instructions+=1;goto B5b8213;
case 0x5b8218:goto L5b8218;
case 0x5b821b:c.instructions+=7;goto B5b821b;
case 0x5b821e:c.instructions+=6;goto B5b821e;
case 0x5b8220:c.instructions+=5;goto B5b8220;
case 0x5b8222:c.instructions+=4;goto B5b8222;
case 0x5b8225:c.instructions+=3;goto B5b8225;
case 0x5b8228:c.instructions+=2;goto B5b8228;
case 0x5b8229:c.instructions+=1;goto B5b8229;
case 0x5b822b:goto L5b822b;
case 0x5b822c:c.instructions+=6;goto B5b822c;
case 0x5b822d:c.instructions+=5;goto B5b822d;
case 0x5b822e:c.instructions+=4;goto B5b822e;
case 0x5b8230:c.instructions+=3;goto B5b8230;
case 0x5b8231:c.instructions+=2;goto B5b8231;
case 0x5b8232:c.instructions+=1;goto B5b8232;
case 0x5b8240:goto L5b8240;
case 0x5b8245:c.instructions+=1;goto B5b8245;
case 0x5b8250:goto L5b8250;
case 0x5b8254:c.instructions+=7;goto B5b8254;
case 0x5b8255:c.instructions+=6;goto B5b8255;
case 0x5b8256:c.instructions+=5;goto B5b8256;
case 0x5b8257:c.instructions+=4;goto B5b8257;
case 0x5b825d:c.instructions+=3;goto B5b825d;
case 0x5b825f:c.instructions+=2;goto B5b825f;
case 0x5b8261:c.instructions+=1;goto B5b8261;
case 0x5b8263:goto L5b8263;
case 0x5b8265:c.instructions+=1;goto B5b8265;
case 0x5b8267:goto L5b8267;
case 0x5b826e:goto L5b826e;
case 0x5b826f:c.instructions+=3;goto B5b826f;
case 0x5b8272:c.instructions+=2;goto B5b8272;
case 0x5b8275:c.instructions+=1;goto B5b8275;
case 0x5b8277:goto L5b8277;
case 0x5b827d:c.instructions+=3;goto B5b827d;
case 0x5b827e:c.instructions+=2;goto B5b827e;
case 0x5b8281:c.instructions+=1;goto B5b8281;
case 0x5b8287:goto L5b8287;
case 0x5b828e:goto L5b828e;
case 0x5b8292:c.instructions+=10;goto B5b8292;
case 0x5b8294:c.instructions+=9;goto B5b8294;
case 0x5b8295:c.instructions+=8;goto B5b8295;
case 0x5b8297:c.instructions+=7;goto B5b8297;
case 0x5b829d:c.instructions+=6;goto B5b829d;
case 0x5b82a3:c.instructions+=5;goto B5b82a3;
case 0x5b82aa:c.instructions+=4;goto B5b82aa;
case 0x5b82ab:c.instructions+=3;goto B5b82ab;
case 0x5b82b1:c.instructions+=2;goto B5b82b1;
case 0x5b82b2:c.instructions+=1;goto B5b82b2;
case 0x5b82b5:goto L5b82b5;
case 0x5b82b7:c.instructions+=9;goto B5b82b7;
case 0x5b82bb:c.instructions+=8;goto B5b82bb;
case 0x5b82bc:c.instructions+=7;goto B5b82bc;
case 0x5b82c2:c.instructions+=6;goto B5b82c2;
case 0x5b82c8:c.instructions+=5;goto B5b82c8;
case 0x5b82cf:c.instructions+=4;goto B5b82cf;
case 0x5b82d0:c.instructions+=3;goto B5b82d0;
case 0x5b82d6:c.instructions+=2;goto B5b82d6;
case 0x5b82d7:c.instructions+=1;goto B5b82d7;
case 0x5b82da:goto L5b82da;
case 0x5b82e0:c.instructions+=4;goto B5b82e0;
case 0x5b82e4:c.instructions+=3;goto B5b82e4;
case 0x5b82ea:c.instructions+=2;goto B5b82ea;
case 0x5b82f0:c.instructions+=1;goto B5b82f0;
case 0x5b82f2:goto L5b82f2;
case 0x5b82f8:c.instructions+=1;goto B5b82f8;
case 0x5b82fa:goto L5b82fa;
case 0x5b8300:c.instructions+=10;goto B5b8300;
case 0x5b8302:c.instructions+=9;goto B5b8302;
case 0x5b8303:c.instructions+=8;goto B5b8303;
case 0x5b8309:c.instructions+=7;goto B5b8309;
case 0x5b830f:c.instructions+=6;goto B5b830f;
case 0x5b8315:c.instructions+=5;goto B5b8315;
case 0x5b831b:c.instructions+=4;goto B5b831b;
case 0x5b831c:c.instructions+=3;goto B5b831c;
case 0x5b8322:c.instructions+=2;goto B5b8322;
case 0x5b8323:c.instructions+=1;goto B5b8323;
case 0x5b8326:goto L5b8326;
case 0x5b832d:c.instructions+=1;goto B5b832d;
case 0x5b832f:goto L5b832f;
case 0x5b8335:c.instructions+=4;goto B5b8335;
case 0x5b8339:c.instructions+=3;goto B5b8339;
case 0x5b833f:c.instructions+=2;goto B5b833f;
case 0x5b8345:c.instructions+=1;goto B5b8345;
case 0x5b8347:goto L5b8347;
case 0x5b834d:c.instructions+=1;goto B5b834d;
case 0x5b834f:goto L5b834f;
case 0x5b8351:c.instructions+=11;goto B5b8351;
case 0x5b8357:c.instructions+=10;goto B5b8357;
case 0x5b8359:c.instructions+=9;goto B5b8359;
case 0x5b835a:c.instructions+=8;goto B5b835a;
case 0x5b8360:c.instructions+=7;goto B5b8360;
case 0x5b8366:c.instructions+=6;goto B5b8366;
case 0x5b836c:c.instructions+=5;goto B5b836c;
case 0x5b8372:c.instructions+=4;goto B5b8372;
case 0x5b8373:c.instructions+=3;goto B5b8373;
case 0x5b8379:c.instructions+=2;goto B5b8379;
case 0x5b837a:c.instructions+=1;goto B5b837a;
case 0x5b837d:goto L5b837d;
case 0x5b8384:goto L5b8384;
case 0x5b838a:goto L5b838a;
case 0x5b838b:c.instructions+=5;goto B5b838b;
case 0x5b8391:c.instructions+=4;goto B5b8391;
case 0x5b8392:c.instructions+=3;goto B5b8392;
case 0x5b8398:c.instructions+=2;goto B5b8398;
case 0x5b8399:c.instructions+=1;goto B5b8399;
case 0x5b83b0:goto L5b83b0;
case 0x5b83b1:c.instructions+=4;goto B5b83b1;
case 0x5b83b5:c.instructions+=3;goto B5b83b5;
case 0x5b83b9:c.instructions+=2;goto B5b83b9;
case 0x5b83bb:c.instructions+=1;goto B5b83bb;
case 0x5b83bd:goto L5b83bd;
case 0x5b83c3:goto L5b83c3;
case 0x5b83c9:c.instructions+=7;goto B5b83c9;
case 0x5b83ca:c.instructions+=6;goto B5b83ca;
case 0x5b83d0:c.instructions+=5;goto B5b83d0;
case 0x5b83d6:c.instructions+=4;goto B5b83d6;
case 0x5b83da:c.instructions+=3;goto B5b83da;
case 0x5b83e0:c.instructions+=2;goto B5b83e0;
case 0x5b83e3:c.instructions+=1;goto B5b83e3;
case 0x5b83e8:goto L5b83e8;
case 0x5b83ec:c.instructions+=3;goto B5b83ec;
case 0x5b83f0:c.instructions+=2;goto B5b83f0;
case 0x5b83f1:c.instructions+=1;goto B5b83f1;
case 0x5b83f6:goto L5b83f6;
case 0x5b83fa:c.instructions+=10;goto B5b83fa;
case 0x5b83fc:c.instructions+=9;goto B5b83fc;
case 0x5b83ff:c.instructions+=8;goto B5b83ff;
case 0x5b8401:c.instructions+=7;goto B5b8401;
case 0x5b8403:c.instructions+=6;goto B5b8403;
case 0x5b8405:c.instructions+=5;goto B5b8405;
case 0x5b8407:c.instructions+=4;goto B5b8407;
case 0x5b8409:c.instructions+=3;goto B5b8409;
case 0x5b840b:c.instructions+=2;goto B5b840b;
case 0x5b840e:c.instructions+=1;goto B5b840e;
case 0x5b8410:goto L5b8410;
case 0x5b8412:c.instructions+=5;goto B5b8412;
case 0x5b8416:c.instructions+=4;goto B5b8416;
case 0x5b841c:c.instructions+=3;goto B5b841c;
case 0x5b841e:c.instructions+=2;goto B5b841e;
case 0x5b8421:c.instructions+=1;goto B5b8421;
case 0x5b8423:goto L5b8423;
case 0x5b8428:c.instructions+=2;goto B5b8428;
case 0x5b8429:c.instructions+=1;goto B5b8429;
case 0x5b842c:goto L5b842c;
case 0x5b842e:c.instructions+=2;goto B5b842e;
case 0x5b842f:c.instructions+=1;goto B5b842f;
case 0x5b8432:goto L5b8432;
case 0x5b8438:c.instructions+=3;goto B5b8438;
case 0x5b843a:c.instructions+=2;goto B5b843a;
case 0x5b843d:c.instructions+=1;goto B5b843d;
case 0x5b843f:goto L5b843f;
case 0x5b8444:c.instructions+=3;goto B5b8444;
case 0x5b8447:c.instructions+=2;goto B5b8447;
case 0x5b8448:c.instructions+=1;goto B5b8448;
case 0x5b844b:goto L5b844b;
case 0x5b844d:c.instructions+=3;goto B5b844d;
case 0x5b8452:c.instructions+=2;goto B5b8452;
case 0x5b8453:c.instructions+=1;goto B5b8453;
case 0x5b8460:goto L5b8460;
case 0x5b8466:c.instructions+=3;goto B5b8466;
case 0x5b8468:c.instructions+=2;goto B5b8468;
case 0x5b846a:c.instructions+=1;goto B5b846a;
case 0x5b846c:goto L5b846c;
case 0x5b8472:c.instructions+=2;goto B5b8472;
case 0x5b8475:c.instructions+=1;goto B5b8475;
case 0x5b8477:goto L5b8477;
case 0x5b847a:c.instructions+=1;goto B5b847a;
case 0x5b847c:goto L5b847c;
case 0x5b847e:goto L5b847e;
case 0x5b8484:c.instructions+=2;goto B5b8484;
case 0x5b8486:c.instructions+=1;goto B5b8486;
case 0x5b8488:goto L5b8488;
case 0x5b848e:c.instructions+=2;goto B5b848e;
case 0x5b8490:c.instructions+=1;goto B5b8490;
case 0x5b8492:goto L5b8492;
case 0x5b8499:c.instructions+=1;goto B5b8499;
case 0x5b849b:goto L5b849b;
case 0x5b849d:goto L5b849d;
case 0x5b84a3:c.instructions+=2;goto B5b84a3;
case 0x5b84a5:c.instructions+=1;goto B5b84a5;
case 0x5b84a7:goto L5b84a7;
case 0x5b84ad:c.instructions+=2;goto B5b84ad;
case 0x5b84af:c.instructions+=1;goto B5b84af;
case 0x5b84b1:goto L5b84b1;
case 0x5b84b8:c.instructions+=1;goto B5b84b8;
case 0x5b84ba:goto L5b84ba;
case 0x5b84bc:goto L5b84bc;
case 0x5b84c2:c.instructions+=2;goto B5b84c2;
case 0x5b84c4:c.instructions+=1;goto B5b84c4;
case 0x5b84c6:goto L5b84c6;
case 0x5b84cc:c.instructions+=2;goto B5b84cc;
case 0x5b84ce:c.instructions+=1;goto B5b84ce;
case 0x5b84d0:goto L5b84d0;
case 0x5b84d6:c.instructions+=2;goto B5b84d6;
case 0x5b84d9:c.instructions+=1;goto B5b84d9;
case 0x5b84db:goto L5b84db;
case 0x5b84de:c.instructions+=1;goto B5b84de;
case 0x5b84e0:goto L5b84e0;
case 0x5b84e2:goto L5b84e2;
case 0x5b84e3:c.instructions+=4;goto B5b84e3;
case 0x5b84e4:c.instructions+=3;goto B5b84e4;
case 0x5b84e7:c.instructions+=2;goto B5b84e7;
case 0x5b84ec:c.instructions+=1;goto B5b84ec;
case 0x5b84f0:goto L5b84f0;
case 0x5b84f6:c.instructions+=2;goto B5b84f6;
case 0x5b84f8:c.instructions+=1;goto B5b84f8;
case 0x5b84fa:goto L5b84fa;
case 0x5b8501:c.instructions+=1;goto B5b8501;
case 0x5b8503:goto L5b8503;
case 0x5b8505:c.instructions+=1;goto B5b8505;
case 0x5b8507:goto L5b8507;
case 0x5b850a:c.instructions+=1;goto B5b850a;
case 0x5b850c:goto L5b850c;
case 0x5b850f:c.instructions+=1;goto B5b850f;
case 0x5b8511:goto L5b8511;
case 0x5b8514:c.instructions+=1;goto B5b8514;
case 0x5b8516:goto L5b8516;
case 0x5b8519:c.instructions+=1;goto B5b8519;
case 0x5b851b:goto L5b851b;
case 0x5b851d:c.instructions+=1;goto B5b851d;
case 0x5b851f:goto L5b851f;
case 0x5b8525:goto L5b8525;
case 0x5b8528:c.instructions+=2;goto B5b8528;
case 0x5b8529:c.instructions+=1;goto B5b8529;
case 0x5b852b:goto L5b852b;
case 0x5b8531:c.instructions+=7;goto B5b8531;
case 0x5b8535:c.instructions+=6;goto B5b8535;
case 0x5b8539:c.instructions+=5;goto B5b8539;
case 0x5b853a:c.instructions+=4;goto B5b853a;
case 0x5b8544:c.instructions+=3;goto B5b8544;
case 0x5b854b:c.instructions+=2;goto B5b854b;
case 0x5b854c:c.instructions+=1;goto B5b854c;
case 0x5b8550:goto L5b8550;
case 0x5b8553:c.instructions+=15;goto B5b8553;
case 0x5b8559:c.instructions+=14;goto B5b8559;
case 0x5b855a:c.instructions+=13;goto B5b855a;
case 0x5b855b:c.instructions+=12;goto B5b855b;
case 0x5b855c:c.instructions+=11;goto B5b855c;
case 0x5b855e:c.instructions+=10;goto B5b855e;
case 0x5b8560:c.instructions+=9;goto B5b8560;
case 0x5b8561:c.instructions+=8;goto B5b8561;
case 0x5b8563:c.instructions+=7;goto B5b8563;
case 0x5b8565:c.instructions+=6;goto B5b8565;
case 0x5b8567:c.instructions+=5;goto B5b8567;
case 0x5b8569:c.instructions+=4;goto B5b8569;
case 0x5b856d:c.instructions+=3;goto B5b856d;
case 0x5b8571:c.instructions+=2;goto B5b8571;
case 0x5b8575:c.instructions+=1;goto B5b8575;
case 0x5b857b:goto L5b857b;
case 0x5b8581:c.instructions+=1;goto B5b8581;
case 0x5b8583:goto L5b8583;
case 0x5b8585:goto L5b8585;
case 0x5b8589:c.instructions+=2;goto B5b8589;
case 0x5b858d:c.instructions+=1;goto B5b858d;
case 0x5b858f:goto L5b858f;
case 0x5b8593:c.instructions+=13;goto B5b8593;
case 0x5b8599:c.instructions+=12;goto B5b8599;
case 0x5b859f:c.instructions+=11;goto B5b859f;
case 0x5b85a3:c.instructions+=10;goto B5b85a3;
case 0x5b85a5:c.instructions+=9;goto B5b85a5;
case 0x5b85ab:c.instructions+=8;goto B5b85ab;
case 0x5b85ae:c.instructions+=7;goto B5b85ae;
case 0x5b85b4:c.instructions+=6;goto B5b85b4;
case 0x5b85b7:c.instructions+=5;goto B5b85b7;
case 0x5b85bd:c.instructions+=4;goto B5b85bd;
case 0x5b85c0:c.instructions+=3;goto B5b85c0;
case 0x5b85c6:c.instructions+=2;goto B5b85c6;
case 0x5b85ca:c.instructions+=1;goto B5b85ca;
case 0x5b85d0:goto L5b85d0;
case 0x5b85d3:c.instructions+=3;goto B5b85d3;
case 0x5b85d9:c.instructions+=2;goto B5b85d9;
case 0x5b85dc:c.instructions+=1;goto B5b85dc;
case 0x5b85de:goto L5b85de;
case 0x5b85e1:c.instructions+=1;goto B5b85e1;
case 0x5b85e3:goto L5b85e3;
case 0x5b85e7:c.instructions+=2;goto B5b85e7;
case 0x5b85eb:c.instructions+=1;goto B5b85eb;
case 0x5b85ec:goto L5b85ec;
case 0x5b85f0:c.instructions+=6;goto B5b85f0;
case 0x5b85f6:c.instructions+=5;goto B5b85f6;
case 0x5b85f7:c.instructions+=4;goto B5b85f7;
case 0x5b85fa:c.instructions+=3;goto B5b85fa;
case 0x5b85fc:c.instructions+=2;goto B5b85fc;
case 0x5b8600:c.instructions+=1;goto B5b8600;
case 0x5b8602:goto L5b8602;
case 0x5b8606:c.instructions+=1;goto B5b8606;
case 0x5b8608:goto L5b8608;
case 0x5b860f:c.instructions+=1;goto B5b860f;
case 0x5b8611:goto L5b8611;
case 0x5b8613:c.instructions+=1;goto B5b8613;
case 0x5b8615:goto L5b8615;
case 0x5b861c:c.instructions+=13;goto B5b861c;
case 0x5b8622:c.instructions+=12;goto B5b8622;
case 0x5b8624:c.instructions+=11;goto B5b8624;
case 0x5b8627:c.instructions+=10;goto B5b8627;
case 0x5b8629:c.instructions+=9;goto B5b8629;
case 0x5b862c:c.instructions+=8;goto B5b862c;
case 0x5b862f:c.instructions+=7;goto B5b862f;
case 0x5b8632:c.instructions+=6;goto B5b8632;
case 0x5b8635:c.instructions+=5;goto B5b8635;
case 0x5b8638:c.instructions+=4;goto B5b8638;
case 0x5b863b:c.instructions+=3;goto B5b863b;
case 0x5b863f:c.instructions+=2;goto B5b863f;
case 0x5b8642:c.instructions+=1;goto B5b8642;
case 0x5b8644:goto L5b8644;
case 0x5b8646:c.instructions+=1;goto B5b8646;
case 0x5b864c:goto L5b864c;
case 0x5b8653:c.instructions+=12;goto B5b8653;
case 0x5b8659:c.instructions+=11;goto B5b8659;
case 0x5b865b:c.instructions+=10;goto B5b865b;
case 0x5b865e:c.instructions+=9;goto B5b865e;
case 0x5b8660:c.instructions+=8;goto B5b8660;
case 0x5b8663:c.instructions+=7;goto B5b8663;
case 0x5b8666:c.instructions+=6;goto B5b8666;
case 0x5b8669:c.instructions+=5;goto B5b8669;
case 0x5b866c:c.instructions+=4;goto B5b866c;
case 0x5b866f:c.instructions+=3;goto B5b866f;
case 0x5b8672:c.instructions+=2;goto B5b8672;
case 0x5b8676:c.instructions+=1;goto B5b8676;
case 0x5b8679:goto L5b8679;
case 0x5b867b:c.instructions+=1;goto B5b867b;
case 0x5b867d:goto L5b867d;
case 0x5b867f:c.instructions+=1;goto B5b867f;
case 0x5b8681:goto L5b8681;
case 0x5b8684:c.instructions+=1;goto B5b8684;
case 0x5b8686:goto L5b8686;
case 0x5b8689:c.instructions+=13;goto B5b8689;
case 0x5b868c:c.instructions+=12;goto B5b868c;
case 0x5b868f:c.instructions+=11;goto B5b868f;
case 0x5b8691:c.instructions+=10;goto B5b8691;
case 0x5b8694:c.instructions+=9;goto B5b8694;
case 0x5b8696:c.instructions+=8;goto B5b8696;
case 0x5b8699:c.instructions+=7;goto B5b8699;
case 0x5b869c:c.instructions+=6;goto B5b869c;
case 0x5b869f:c.instructions+=5;goto B5b869f;
case 0x5b86a2:c.instructions+=4;goto B5b86a2;
case 0x5b86a5:c.instructions+=3;goto B5b86a5;
case 0x5b86a8:c.instructions+=2;goto B5b86a8;
case 0x5b86ab:c.instructions+=1;goto B5b86ab;
case 0x5b86ae:goto L5b86ae;
case 0x5b86b1:c.instructions+=2;goto B5b86b1;
case 0x5b86b4:c.instructions+=1;goto B5b86b4;
case 0x5b86b6:goto L5b86b6;
case 0x5b86b9:c.instructions+=10;goto B5b86b9;
case 0x5b86be:c.instructions+=9;goto B5b86be;
case 0x5b86c1:c.instructions+=8;goto B5b86c1;
case 0x5b86c3:c.instructions+=7;goto B5b86c3;
case 0x5b86c8:c.instructions+=6;goto B5b86c8;
case 0x5b86cb:c.instructions+=5;goto B5b86cb;
case 0x5b86d0:c.instructions+=4;goto B5b86d0;
case 0x5b86d3:c.instructions+=3;goto B5b86d3;
case 0x5b86d8:c.instructions+=2;goto B5b86d8;
case 0x5b86db:c.instructions+=1;goto B5b86db;
case 0x5b86de:goto L5b86de;
case 0x5b86e4:c.instructions+=4;goto B5b86e4;
case 0x5b86ea:c.instructions+=3;goto B5b86ea;
case 0x5b86eb:c.instructions+=2;goto B5b86eb;
case 0x5b86ed:c.instructions+=1;goto B5b86ed;
case 0x5b86f2:goto L5b86f2;
case 0x5b86f4:c.instructions+=2;goto B5b86f4;
case 0x5b86f6:c.instructions+=1;goto B5b86f6;
case 0x5b86fb:goto L5b86fb;
case 0x5b86fd:c.instructions+=2;goto B5b86fd;
case 0x5b86ff:c.instructions+=1;goto B5b86ff;
case 0x5b8704:goto L5b8704;
case 0x5b8706:c.instructions+=2;goto B5b8706;
case 0x5b8708:c.instructions+=1;goto B5b8708;
case 0x5b870d:goto L5b870d;
case 0x5b870e:c.instructions+=5;goto B5b870e;
case 0x5b870f:c.instructions+=4;goto B5b870f;
case 0x5b8710:c.instructions+=3;goto B5b8710;
case 0x5b8711:c.instructions+=2;goto B5b8711;
case 0x5b8714:c.instructions+=1;goto B5b8714;
case 0x5b8720:goto L5b8720;
case 0x5b8727:c.instructions+=3;goto B5b8727;
case 0x5b872a:c.instructions+=2;goto B5b872a;
case 0x5b872d:c.instructions+=1;goto B5b872d;
case 0x5b872f:goto L5b872f;
case 0x5b8736:goto L5b8736;
case 0x5b873b:c.instructions+=1;goto B5b873b;
case 0x5b873c:goto L5b873c;
case 0x5b8741:c.instructions+=1;goto B5b8741;
case 0x5b8742:goto L5b8742;
case 0x5b8747:c.instructions+=1;goto B5b8747;
case 0x5b8748:goto L5b8748;
case 0x5b874a:c.instructions+=1;goto B5b874a;
case 0x5b8760:goto L5b8760;
case 0x5b8763:c.instructions+=72;goto B5b8763;
case 0x5b8764:c.instructions+=71;goto B5b8764;
case 0x5b8765:c.instructions+=70;goto B5b8765;
case 0x5b8767:c.instructions+=69;goto B5b8767;
case 0x5b8768:c.instructions+=68;goto B5b8768;
case 0x5b876a:c.instructions+=67;goto B5b876a;
case 0x5b876e:c.instructions+=66;goto B5b876e;
case 0x5b8772:c.instructions+=65;goto B5b8772;
case 0x5b8778:c.instructions+=64;goto B5b8778;
case 0x5b877c:c.instructions+=63;goto B5b877c;
case 0x5b8780:c.instructions+=62;goto B5b8780;
case 0x5b8787:c.instructions+=61;goto B5b8787;
case 0x5b8788:c.instructions+=60;goto B5b8788;
case 0x5b878d:c.instructions+=59;goto B5b878d;
case 0x5b8792:c.instructions+=58;goto B5b8792;
case 0x5b8798:c.instructions+=57;goto B5b8798;
case 0x5b879e:c.instructions+=56;goto B5b879e;
case 0x5b87a3:c.instructions+=55;goto B5b87a3;
case 0x5b87aa:c.instructions+=54;goto B5b87aa;
case 0x5b87b1:c.instructions+=53;goto B5b87b1;
case 0x5b87b5:c.instructions+=52;goto B5b87b5;
case 0x5b87ba:c.instructions+=51;goto B5b87ba;
case 0x5b87bf:c.instructions+=50;goto B5b87bf;
case 0x5b87c4:c.instructions+=49;goto B5b87c4;
case 0x5b87c8:c.instructions+=48;goto B5b87c8;
case 0x5b87cd:c.instructions+=47;goto B5b87cd;
case 0x5b87d2:c.instructions+=46;goto B5b87d2;
case 0x5b87d7:c.instructions+=45;goto B5b87d7;
case 0x5b87dc:c.instructions+=44;goto B5b87dc;
case 0x5b87e0:c.instructions+=43;goto B5b87e0;
case 0x5b87e5:c.instructions+=42;goto B5b87e5;
case 0x5b87ea:c.instructions+=41;goto B5b87ea;
case 0x5b87ef:c.instructions+=40;goto B5b87ef;
case 0x5b87f6:c.instructions+=39;goto B5b87f6;
case 0x5b87fd:c.instructions+=38;goto B5b87fd;
case 0x5b8802:c.instructions+=37;goto B5b8802;
case 0x5b8807:c.instructions+=36;goto B5b8807;
case 0x5b880c:c.instructions+=35;goto B5b880c;
case 0x5b8810:c.instructions+=34;goto B5b8810;
case 0x5b8815:c.instructions+=33;goto B5b8815;
case 0x5b881a:c.instructions+=32;goto B5b881a;
case 0x5b881f:c.instructions+=31;goto B5b881f;
case 0x5b8824:c.instructions+=30;goto B5b8824;
case 0x5b882b:c.instructions+=29;goto B5b882b;
case 0x5b8832:c.instructions+=28;goto B5b8832;
case 0x5b8837:c.instructions+=27;goto B5b8837;
case 0x5b883c:c.instructions+=26;goto B5b883c;
case 0x5b8841:c.instructions+=25;goto B5b8841;
case 0x5b8846:c.instructions+=24;goto B5b8846;
case 0x5b884b:c.instructions+=23;goto B5b884b;
case 0x5b8850:c.instructions+=22;goto B5b8850;
case 0x5b8855:c.instructions+=21;goto B5b8855;
case 0x5b885a:c.instructions+=20;goto B5b885a;
case 0x5b8861:c.instructions+=19;goto B5b8861;
case 0x5b8868:c.instructions+=18;goto B5b8868;
case 0x5b886d:c.instructions+=17;goto B5b886d;
case 0x5b8871:c.instructions+=16;goto B5b8871;
case 0x5b8876:c.instructions+=15;goto B5b8876;
case 0x5b887b:c.instructions+=14;goto B5b887b;
case 0x5b8880:c.instructions+=13;goto B5b8880;
case 0x5b8885:c.instructions+=12;goto B5b8885;
case 0x5b888a:c.instructions+=11;goto B5b888a;
case 0x5b8894:c.instructions+=10;goto B5b8894;
case 0x5b889a:c.instructions+=9;goto B5b889a;
case 0x5b889f:c.instructions+=8;goto B5b889f;
case 0x5b88a5:c.instructions+=7;goto B5b88a5;
case 0x5b88ab:c.instructions+=6;goto B5b88ab;
case 0x5b88b5:c.instructions+=5;goto B5b88b5;
case 0x5b88bf:c.instructions+=4;goto B5b88bf;
case 0x5b88c9:c.instructions+=3;goto B5b88c9;
case 0x5b88d3:c.instructions+=2;goto B5b88d3;
case 0x5b88dd:c.instructions+=1;goto B5b88dd;
case 0x5b88e2:goto L5b88e2;
case 0x5b88e7:c.instructions+=21;goto B5b88e7;
case 0x5b88eb:c.instructions+=20;goto B5b88eb;
case 0x5b88f2:c.instructions+=19;goto B5b88f2;
case 0x5b88fc:c.instructions+=18;goto B5b88fc;
case 0x5b8902:c.instructions+=17;goto B5b8902;
case 0x5b8908:c.instructions+=16;goto B5b8908;
case 0x5b890d:c.instructions+=15;goto B5b890d;
case 0x5b8913:c.instructions+=14;goto B5b8913;
case 0x5b8919:c.instructions+=13;goto B5b8919;
case 0x5b891d:c.instructions+=12;goto B5b891d;
case 0x5b8921:c.instructions+=11;goto B5b8921;
case 0x5b8926:c.instructions+=10;goto B5b8926;
case 0x5b8928:c.instructions+=9;goto B5b8928;
case 0x5b892d:c.instructions+=8;goto B5b892d;
case 0x5b8932:c.instructions+=7;goto B5b8932;
case 0x5b8938:c.instructions+=6;goto B5b8938;
case 0x5b8942:c.instructions+=5;goto B5b8942;
case 0x5b894c:c.instructions+=4;goto B5b894c;
case 0x5b8956:c.instructions+=3;goto B5b8956;
case 0x5b895c:c.instructions+=2;goto B5b895c;
case 0x5b8966:c.instructions+=1;goto B5b8966;
case 0x5b896b:goto L5b896b;
case 0x5b8970:c.instructions+=21;goto B5b8970;
case 0x5b8974:c.instructions+=20;goto B5b8974;
case 0x5b897b:c.instructions+=19;goto B5b897b;
case 0x5b8981:c.instructions+=18;goto B5b8981;
case 0x5b8985:c.instructions+=17;goto B5b8985;
case 0x5b898a:c.instructions+=16;goto B5b898a;
case 0x5b898e:c.instructions+=15;goto B5b898e;
case 0x5b8994:c.instructions+=14;goto B5b8994;
case 0x5b8999:c.instructions+=13;goto B5b8999;
case 0x5b899e:c.instructions+=12;goto B5b899e;
case 0x5b89a3:c.instructions+=11;goto B5b89a3;
case 0x5b89ad:c.instructions+=10;goto B5b89ad;
case 0x5b89b3:c.instructions+=9;goto B5b89b3;
case 0x5b89b8:c.instructions+=8;goto B5b89b8;
case 0x5b89be:c.instructions+=7;goto B5b89be;
case 0x5b89c4:c.instructions+=6;goto B5b89c4;
case 0x5b89ca:c.instructions+=5;goto B5b89ca;
case 0x5b89d4:c.instructions+=4;goto B5b89d4;
case 0x5b89de:c.instructions+=3;goto B5b89de;
case 0x5b89e4:c.instructions+=2;goto B5b89e4;
case 0x5b89ee:c.instructions+=1;goto B5b89ee;
case 0x5b89f3:goto L5b89f3;
case 0x5b89f8:c.instructions+=20;goto B5b89f8;
case 0x5b89fc:c.instructions+=19;goto B5b89fc;
case 0x5b8a03:c.instructions+=18;goto B5b8a03;
case 0x5b8a09:c.instructions+=17;goto B5b8a09;
case 0x5b8a0d:c.instructions+=16;goto B5b8a0d;
case 0x5b8a12:c.instructions+=15;goto B5b8a12;
case 0x5b8a16:c.instructions+=14;goto B5b8a16;
case 0x5b8a1b:c.instructions+=13;goto B5b8a1b;
case 0x5b8a20:c.instructions+=12;goto B5b8a20;
case 0x5b8a2a:c.instructions+=11;goto B5b8a2a;
case 0x5b8a30:c.instructions+=10;goto B5b8a30;
case 0x5b8a36:c.instructions+=9;goto B5b8a36;
case 0x5b8a3c:c.instructions+=8;goto B5b8a3c;
case 0x5b8a41:c.instructions+=7;goto B5b8a41;
case 0x5b8a47:c.instructions+=6;goto B5b8a47;
case 0x5b8a4d:c.instructions+=5;goto B5b8a4d;
case 0x5b8a57:c.instructions+=4;goto B5b8a57;
case 0x5b8a61:c.instructions+=3;goto B5b8a61;
case 0x5b8a67:c.instructions+=2;goto B5b8a67;
case 0x5b8a71:c.instructions+=1;goto B5b8a71;
case 0x5b8a76:goto L5b8a76;
case 0x5b8a79:c.instructions+=6;goto B5b8a79;
case 0x5b8a7a:c.instructions+=5;goto B5b8a7a;
case 0x5b8a7b:c.instructions+=4;goto B5b8a7b;
case 0x5b8a7c:c.instructions+=3;goto B5b8a7c;
case 0x5b8a7d:c.instructions+=2;goto B5b8a7d;
case 0x5b8a80:c.instructions+=1;goto B5b8a80;
case 0x5b8a90:goto L5b8a90;
case 0x5b8a93:c.instructions+=8;goto B5b8a93;
case 0x5b8a94:c.instructions+=7;goto B5b8a94;
case 0x5b8a95:c.instructions+=6;goto B5b8a95;
case 0x5b8a99:c.instructions+=5;goto B5b8a99;
case 0x5b8a9b:c.instructions+=4;goto B5b8a9b;
case 0x5b8a9c:c.instructions+=3;goto B5b8a9c;
case 0x5b8a9e:c.instructions+=2;goto B5b8a9e;
case 0x5b8aa3:c.instructions+=1;goto B5b8aa3;
case 0x5b8aa8:goto L5b8aa8;
case 0x5b8aaa:goto L5b8aaa;
case 0x5b8ab4:c.instructions+=5;goto B5b8ab4;
case 0x5b8aba:c.instructions+=4;goto B5b8aba;
case 0x5b8abd:c.instructions+=3;goto B5b8abd;
case 0x5b8abf:c.instructions+=2;goto B5b8abf;
case 0x5b8ac4:c.instructions+=1;goto B5b8ac4;
case 0x5b8ac6:goto L5b8ac6;
case 0x5b8ac9:c.instructions+=1;goto B5b8ac9;
case 0x5b8acb:goto L5b8acb;
case 0x5b8ace:c.instructions+=1;goto B5b8ace;
case 0x5b8ad0:goto L5b8ad0;
case 0x5b8ad4:c.instructions+=2;goto B5b8ad4;
case 0x5b8ad6:c.instructions+=1;goto B5b8ad6;
case 0x5b8ad8:goto L5b8ad8;
case 0x5b8ada:c.instructions+=1;goto B5b8ada;
case 0x5b8adc:goto L5b8adc;
case 0x5b8ae1:goto L5b8ae1;
case 0x5b8ae7:c.instructions+=2;goto B5b8ae7;
case 0x5b8ae9:c.instructions+=1;goto B5b8ae9;
case 0x5b8aeb:goto L5b8aeb;
case 0x5b8af1:c.instructions+=2;goto B5b8af1;
case 0x5b8af3:c.instructions+=1;goto B5b8af3;
case 0x5b8af5:goto L5b8af5;
case 0x5b8af8:c.instructions+=1;goto B5b8af8;
case 0x5b8afa:goto L5b8afa;
case 0x5b8afe:c.instructions+=2;goto B5b8afe;
case 0x5b8b00:c.instructions+=1;goto B5b8b00;
case 0x5b8b02:goto L5b8b02;
case 0x5b8b04:c.instructions+=1;goto B5b8b04;
case 0x5b8b06:goto L5b8b06;
case 0x5b8b0b:goto L5b8b0b;
case 0x5b8b11:c.instructions+=2;goto B5b8b11;
case 0x5b8b13:c.instructions+=1;goto B5b8b13;
case 0x5b8b15:goto L5b8b15;
case 0x5b8b1b:c.instructions+=2;goto B5b8b1b;
case 0x5b8b1d:c.instructions+=1;goto B5b8b1d;
case 0x5b8b1f:goto L5b8b1f;
case 0x5b8b22:c.instructions+=1;goto B5b8b22;
case 0x5b8b24:goto L5b8b24;
case 0x5b8b28:c.instructions+=2;goto B5b8b28;
case 0x5b8b2a:c.instructions+=1;goto B5b8b2a;
case 0x5b8b2c:goto L5b8b2c;
case 0x5b8b2e:c.instructions+=1;goto B5b8b2e;
case 0x5b8b30:goto L5b8b30;
case 0x5b8b35:goto L5b8b35;
case 0x5b8b3b:c.instructions+=2;goto B5b8b3b;
case 0x5b8b3d:c.instructions+=1;goto B5b8b3d;
case 0x5b8b3f:goto L5b8b3f;
case 0x5b8b45:c.instructions+=2;goto B5b8b45;
case 0x5b8b47:c.instructions+=1;goto B5b8b47;
case 0x5b8b49:goto L5b8b49;
case 0x5b8b4c:c.instructions+=1;goto B5b8b4c;
case 0x5b8b4e:goto L5b8b4e;
case 0x5b8b51:c.instructions+=1;goto B5b8b51;
case 0x5b8b53:goto L5b8b53;
case 0x5b8b57:c.instructions+=2;goto B5b8b57;
case 0x5b8b59:c.instructions+=1;goto B5b8b59;
case 0x5b8b5b:goto L5b8b5b;
case 0x5b8b60:c.instructions+=1;goto B5b8b60;
case 0x5b8b62:goto L5b8b62;
case 0x5b8b67:goto L5b8b67;
case 0x5b8b6a:c.instructions+=1;goto B5b8b6a;
case 0x5b8b6c:goto L5b8b6c;
case 0x5b8b72:c.instructions+=3;goto B5b8b72;
case 0x5b8b79:c.instructions+=2;goto B5b8b79;
case 0x5b8b7b:c.instructions+=1;goto B5b8b7b;
case 0x5b8b7d:goto L5b8b7d;
case 0x5b8b84:c.instructions+=6;goto B5b8b84;
case 0x5b8b86:c.instructions+=5;goto B5b8b86;
case 0x5b8b88:c.instructions+=4;goto B5b8b88;
case 0x5b8b89:c.instructions+=3;goto B5b8b89;
case 0x5b8b8e:c.instructions+=2;goto B5b8b8e;
case 0x5b8b8f:c.instructions+=1;goto B5b8b8f;
case 0x5b8b92:goto L5b8b92;
case 0x5b8b94:c.instructions+=1;goto B5b8b94;
case 0x5b8b96:goto L5b8b96;
case 0x5b8b97:c.instructions+=5;goto B5b8b97;
case 0x5b8b98:c.instructions+=4;goto B5b8b98;
case 0x5b8b9d:c.instructions+=3;goto B5b8b9d;
case 0x5b8b9e:c.instructions+=2;goto B5b8b9e;
case 0x5b8ba1:c.instructions+=1;goto B5b8ba1;
case 0x5b8ba4:goto L5b8ba4;
case 0x5b8ba5:c.instructions+=3;goto B5b8ba5;
case 0x5b8ba7:c.instructions+=2;goto B5b8ba7;
case 0x5b8baa:c.instructions+=1;goto B5b8baa;
case 0x5b8bb0:goto L5b8bb0;
case 0x5b8bb2:c.instructions+=1;goto B5b8bb2;
case 0x5b8bb4:goto L5b8bb4;
case 0x5b8bb9:c.instructions+=1;goto B5b8bb9;
case 0x5b8bbb:goto L5b8bbb;
case 0x5b8bbf:c.instructions+=2;goto B5b8bbf;
case 0x5b8bc1:c.instructions+=1;goto B5b8bc1;
case 0x5b8bc3:goto L5b8bc3;
case 0x5b8bc8:c.instructions+=1;goto B5b8bc8;
case 0x5b8bca:goto L5b8bca;
case 0x5b8bd0:c.instructions+=3;goto B5b8bd0;
case 0x5b8bd7:c.instructions+=2;goto B5b8bd7;
case 0x5b8bd9:c.instructions+=1;goto B5b8bd9;
case 0x5b8bdb:goto L5b8bdb;
case 0x5b8bdd:c.instructions+=6;goto B5b8bdd;
case 0x5b8bdf:c.instructions+=5;goto B5b8bdf;
case 0x5b8be2:c.instructions+=4;goto B5b8be2;
case 0x5b8be3:c.instructions+=3;goto B5b8be3;
case 0x5b8be8:c.instructions+=2;goto B5b8be8;
case 0x5b8be9:c.instructions+=1;goto B5b8be9;
case 0x5b8bec:goto L5b8bec;
case 0x5b8bee:c.instructions+=1;goto B5b8bee;
case 0x5b8bf0:goto L5b8bf0;
case 0x5b8bf1:c.instructions+=3;goto B5b8bf1;
case 0x5b8bf4:c.instructions+=2;goto B5b8bf4;
case 0x5b8bf7:c.instructions+=1;goto B5b8bf7;
case 0x5b8bf9:goto L5b8bf9;
case 0x5b8bfc:c.instructions+=2;goto B5b8bfc;
case 0x5b8c01:c.instructions+=1;goto B5b8c01;
case 0x5b8c05:goto L5b8c05;
case 0x5b8c07:c.instructions+=1;goto B5b8c07;
case 0x5b8c10:goto L5b8c10;
case 0x5b8c14:c.instructions+=2;goto B5b8c14;
case 0x5b8c17:c.instructions+=1;goto B5b8c17;
case 0x5b8c1d:goto L5b8c1d;
case 0x5b8c22:c.instructions+=1;goto B5b8c22;
case 0x5b8c28:goto L5b8c28;
case 0x5b8c2c:c.instructions+=2;goto B5b8c2c;
case 0x5b8c2e:c.instructions+=1;goto B5b8c2e;
case 0x5b8c34:goto L5b8c34;
case 0x5b8c39:c.instructions+=1;goto B5b8c39;
case 0x5b8c3e:goto L5b8c3e;
case 0x5b8c43:c.instructions+=2;goto B5b8c43;
case 0x5b8c45:c.instructions+=1;goto B5b8c45;
case 0x5b8c47:goto L5b8c47;
case 0x5b8c49:c.instructions+=3;goto B5b8c49;
case 0x5b8c4e:c.instructions+=2;goto B5b8c4e;
case 0x5b8c53:c.instructions+=1;goto B5b8c53;
case 0x5b8c58:goto L5b8c58;
case 0x5b8c5b:c.instructions+=2;goto B5b8c5b;
case 0x5b8c5d:c.instructions+=1;goto B5b8c5d;
case 0x5b8c5f:goto L5b8c5f;
case 0x5b8c64:c.instructions+=1;goto B5b8c64;
case 0x5b8c69:goto L5b8c69;
case 0x5b8c6b:c.instructions+=4;goto B5b8c6b;
case 0x5b8c70:c.instructions+=3;goto B5b8c70;
case 0x5b8c75:c.instructions+=2;goto B5b8c75;
case 0x5b8c76:c.instructions+=1;goto B5b8c76;
case 0x5b8c7b:goto L5b8c7b;
case 0x5b8c7d:c.instructions+=4;goto B5b8c7d;
case 0x5b8c81:c.instructions+=3;goto B5b8c81;
case 0x5b8c82:c.instructions+=2;goto B5b8c82;
case 0x5b8c83:c.instructions+=1;goto B5b8c83;
case 0x5b8c88:goto L5b8c88;
case 0x5b8c8c:c.instructions+=4;goto B5b8c8c;
case 0x5b8c8d:c.instructions+=3;goto B5b8c8d;
case 0x5b8c92:c.instructions+=2;goto B5b8c92;
case 0x5b8c97:c.instructions+=1;goto B5b8c97;
case 0x5b8c9c:goto L5b8c9c;
case 0x5b8c9f:c.instructions+=7;goto B5b8c9f;
case 0x5b8ca0:c.instructions+=6;goto B5b8ca0;
case 0x5b8ca1:c.instructions+=5;goto B5b8ca1;
case 0x5b8ca2:c.instructions+=4;goto B5b8ca2;
case 0x5b8ca7:c.instructions+=3;goto B5b8ca7;
case 0x5b8ca8:c.instructions+=2;goto B5b8ca8;
case 0x5b8cab:c.instructions+=1;goto B5b8cab;
case 0x5b8cae:goto L5b8cae;
case 0x5b8cb5:c.instructions+=1;goto B5b8cb5;
case 0x5b8cb7:goto L5b8cb7;
case 0x5b8cb9:c.instructions+=3;goto B5b8cb9;
case 0x5b8cbe:c.instructions+=2;goto B5b8cbe;
case 0x5b8cc3:c.instructions+=1;goto B5b8cc3;
case 0x5b8cc8:goto L5b8cc8;
case 0x5b8ccb:c.instructions+=2;goto B5b8ccb;
case 0x5b8ccd:c.instructions+=1;goto B5b8ccd;
case 0x5b8ccf:goto L5b8ccf;
case 0x5b8cd4:c.instructions+=1;goto B5b8cd4;
case 0x5b8cd9:goto L5b8cd9;
case 0x5b8cdf:c.instructions+=9;goto B5b8cdf;
case 0x5b8ce5:c.instructions+=8;goto B5b8ce5;
case 0x5b8ceb:c.instructions+=7;goto B5b8ceb;
case 0x5b8ced:c.instructions+=6;goto B5b8ced;
case 0x5b8cf1:c.instructions+=5;goto B5b8cf1;
case 0x5b8cf2:c.instructions+=4;goto B5b8cf2;
case 0x5b8cf3:c.instructions+=3;goto B5b8cf3;
case 0x5b8cf4:c.instructions+=2;goto B5b8cf4;
case 0x5b8cfa:c.instructions+=1;goto B5b8cfa;
case 0x5b8cff:goto L5b8cff;
case 0x5b8d03:c.instructions+=3;goto B5b8d03;
case 0x5b8d04:c.instructions+=2;goto B5b8d04;
case 0x5b8d09:c.instructions+=1;goto B5b8d09;
case 0x5b8d0e:goto L5b8d0e;
case 0x5b8d11:c.instructions+=7;goto B5b8d11;
case 0x5b8d12:c.instructions+=6;goto B5b8d12;
case 0x5b8d13:c.instructions+=5;goto B5b8d13;
case 0x5b8d14:c.instructions+=4;goto B5b8d14;
case 0x5b8d19:c.instructions+=3;goto B5b8d19;
case 0x5b8d1a:c.instructions+=2;goto B5b8d1a;
case 0x5b8d1d:c.instructions+=1;goto B5b8d1d;
case 0x5b8d20:goto L5b8d20;
case 0x5b8d21:c.instructions+=6;goto B5b8d21;
case 0x5b8d22:c.instructions+=5;goto B5b8d22;
case 0x5b8d23:c.instructions+=4;goto B5b8d23;
case 0x5b8d28:c.instructions+=3;goto B5b8d28;
case 0x5b8d29:c.instructions+=2;goto B5b8d29;
case 0x5b8d2c:c.instructions+=1;goto B5b8d2c;
case 0x5b8d2f:goto L5b8d2f;
case 0x5b8d35:c.instructions+=3;goto B5b8d35;
case 0x5b8d3c:c.instructions+=2;goto B5b8d3c;
case 0x5b8d3e:c.instructions+=1;goto B5b8d3e;
case 0x5b8d40:goto L5b8d40;
case 0x5b8d42:c.instructions+=5;goto B5b8d42;
case 0x5b8d44:c.instructions+=4;goto B5b8d44;
case 0x5b8d45:c.instructions+=3;goto B5b8d45;
case 0x5b8d4a:c.instructions+=2;goto B5b8d4a;
case 0x5b8d4b:c.instructions+=1;goto B5b8d4b;
case 0x5b8d4e:goto L5b8d4e;
case 0x5b8d50:c.instructions+=1;goto B5b8d50;
case 0x5b8d52:goto L5b8d52;
case 0x5b8d53:c.instructions+=3;goto B5b8d53;
case 0x5b8d56:c.instructions+=2;goto B5b8d56;
case 0x5b8d59:c.instructions+=1;goto B5b8d59;
case 0x5b8d5f:goto L5b8d5f;
case 0x5b8d63:c.instructions+=5;goto B5b8d63;
case 0x5b8d66:c.instructions+=4;goto B5b8d66;
case 0x5b8d69:c.instructions+=3;goto B5b8d69;
case 0x5b8d6c:c.instructions+=2;goto B5b8d6c;
case 0x5b8d70:c.instructions+=1;goto B5b8d70;
case 0x5b8d76:goto L5b8d76;
case 0x5b8d77:c.instructions+=6;goto B5b8d77;
case 0x5b8d78:c.instructions+=5;goto B5b8d78;
case 0x5b8d79:c.instructions+=4;goto B5b8d79;
case 0x5b8d7e:c.instructions+=3;goto B5b8d7e;
case 0x5b8d7f:c.instructions+=2;goto B5b8d7f;
case 0x5b8d82:c.instructions+=1;goto B5b8d82;
case 0x5b8d90:goto L5b8d90;
case 0x5b8d91:c.instructions+=6;goto B5b8d91;
case 0x5b8d92:c.instructions+=5;goto B5b8d92;
case 0x5b8d93:c.instructions+=4;goto B5b8d93;
case 0x5b8d94:c.instructions+=3;goto B5b8d94;
case 0x5b8d96:c.instructions+=2;goto B5b8d96;
case 0x5b8d9b:c.instructions+=1;goto B5b8d9b;
case 0x5b8da0:goto L5b8da0;
case 0x5b8da2:goto L5b8da2;
case 0x5b8da7:c.instructions+=5;goto B5b8da7;
case 0x5b8da9:c.instructions+=4;goto B5b8da9;
case 0x5b8dab:c.instructions+=3;goto B5b8dab;
case 0x5b8db5:c.instructions+=2;goto B5b8db5;
case 0x5b8db7:c.instructions+=1;goto B5b8db7;
case 0x5b8db9:goto L5b8db9;
case 0x5b8dbd:c.instructions+=2;goto B5b8dbd;
case 0x5b8dc3:c.instructions+=1;goto B5b8dc3;
case 0x5b8dc5:goto L5b8dc5;
case 0x5b8dc8:c.instructions+=1;goto B5b8dc8;
case 0x5b8dca:goto L5b8dca;
case 0x5b8dcf:c.instructions+=1;goto B5b8dcf;
case 0x5b8dd1:goto L5b8dd1;
case 0x5b8dd3:c.instructions+=1;goto B5b8dd3;
case 0x5b8dd5:goto L5b8dd5;
case 0x5b8dd7:c.instructions+=1;goto B5b8dd7;
case 0x5b8dd9:goto L5b8dd9;
case 0x5b8ddd:c.instructions+=2;goto B5b8ddd;
case 0x5b8ddf:c.instructions+=1;goto B5b8ddf;
case 0x5b8de1:goto L5b8de1;
case 0x5b8de7:c.instructions+=6;goto B5b8de7;
case 0x5b8de9:c.instructions+=5;goto B5b8de9;
case 0x5b8deb:c.instructions+=4;goto B5b8deb;
case 0x5b8dec:c.instructions+=3;goto B5b8dec;
case 0x5b8df1:c.instructions+=2;goto B5b8df1;
case 0x5b8df2:c.instructions+=1;goto B5b8df2;
case 0x5b8df5:goto L5b8df5;
case 0x5b8df7:c.instructions+=1;goto B5b8df7;
case 0x5b8df9:goto L5b8df9;
case 0x5b8dff:goto L5b8dff;
case 0x5b8e04:c.instructions+=4;goto B5b8e04;
case 0x5b8e05:c.instructions+=3;goto B5b8e05;
case 0x5b8e08:c.instructions+=2;goto B5b8e08;
case 0x5b8e0a:c.instructions+=1;goto B5b8e0a;
case 0x5b8e0c:goto L5b8e0c;
case 0x5b8e0d:c.instructions+=5;goto B5b8e0d;
case 0x5b8e0e:c.instructions+=4;goto B5b8e0e;
case 0x5b8e0f:c.instructions+=3;goto B5b8e0f;
case 0x5b8e14:c.instructions+=2;goto B5b8e14;
case 0x5b8e15:c.instructions+=1;goto B5b8e15;
case 0x5b8e18:goto L5b8e18;
case 0x5b8e1d:c.instructions+=1;goto B5b8e1d;
case 0x5b8e22:goto L5b8e22;
case 0x5b8e25:c.instructions+=2;goto B5b8e25;
case 0x5b8e28:c.instructions+=1;goto B5b8e28;
case 0x5b8e2a:goto L5b8e2a;
case 0x5b8e31:goto L5b8e31;
case 0x5b8e38:c.instructions+=1;goto B5b8e38;
case 0x5b8e3a:goto L5b8e3a;
case 0x5b8e3f:c.instructions+=2;goto B5b8e3f;
case 0x5b8e44:c.instructions+=1;goto B5b8e44;
case 0x5b8e49:goto L5b8e49;
case 0x5b8e4c:c.instructions+=2;goto B5b8e4c;
case 0x5b8e4e:c.instructions+=1;goto B5b8e4e;
case 0x5b8e50:goto L5b8e50;
case 0x5b8e55:c.instructions+=5;goto B5b8e55;
case 0x5b8e56:c.instructions+=4;goto B5b8e56;
case 0x5b8e57:c.instructions+=3;goto B5b8e57;
case 0x5b8e58:c.instructions+=2;goto B5b8e58;
case 0x5b8e59:c.instructions+=1;goto B5b8e59;
case 0x5b8e5c:goto L5b8e5c;
case 0x5b8e63:c.instructions+=1;goto B5b8e63;
case 0x5b8e65:goto L5b8e65;
case 0x5b8e6a:c.instructions+=2;goto B5b8e6a;
case 0x5b8e6f:c.instructions+=1;goto B5b8e6f;
case 0x5b8e74:goto L5b8e74;
case 0x5b8e77:c.instructions+=2;goto B5b8e77;
case 0x5b8e79:c.instructions+=1;goto B5b8e79;
case 0x5b8e7b:goto L5b8e7b;
case 0x5b8e80:c.instructions+=5;goto B5b8e80;
case 0x5b8e81:c.instructions+=4;goto B5b8e81;
case 0x5b8e82:c.instructions+=3;goto B5b8e82;
case 0x5b8e83:c.instructions+=2;goto B5b8e83;
case 0x5b8e84:c.instructions+=1;goto B5b8e84;
case 0x5b8e87:goto L5b8e87;
case 0x5b8e8e:c.instructions+=1;goto B5b8e8e;
case 0x5b8e94:goto L5b8e94;
case 0x5b8e99:c.instructions+=2;goto B5b8e99;
case 0x5b8e9e:c.instructions+=1;goto B5b8e9e;
case 0x5b8ea3:goto L5b8ea3;
case 0x5b8ea6:c.instructions+=2;goto B5b8ea6;
case 0x5b8ea8:c.instructions+=1;goto B5b8ea8;
case 0x5b8eaa:goto L5b8eaa;
case 0x5b8eab:c.instructions+=5;goto B5b8eab;
case 0x5b8eac:c.instructions+=4;goto B5b8eac;
case 0x5b8ead:c.instructions+=3;goto B5b8ead;
case 0x5b8eb2:c.instructions+=2;goto B5b8eb2;
case 0x5b8eb3:c.instructions+=1;goto B5b8eb3;
case 0x5b8eb6:goto L5b8eb6;
case 0x5b8ebb:c.instructions+=2;goto B5b8ebb;
case 0x5b8ec0:c.instructions+=1;goto B5b8ec0;
case 0x5b8ec5:goto L5b8ec5;
case 0x5b8ec8:c.instructions+=2;goto B5b8ec8;
case 0x5b8eca:c.instructions+=1;goto B5b8eca;
case 0x5b8ecc:goto L5b8ecc;
case 0x5b8ecd:c.instructions+=5;goto B5b8ecd;
case 0x5b8ece:c.instructions+=4;goto B5b8ece;
case 0x5b8ecf:c.instructions+=3;goto B5b8ecf;
case 0x5b8ed4:c.instructions+=2;goto B5b8ed4;
case 0x5b8ed5:c.instructions+=1;goto B5b8ed5;
case 0x5b8ed8:goto L5b8ed8;
case 0x5b8edd:c.instructions+=2;goto B5b8edd;
case 0x5b8ee2:c.instructions+=1;goto B5b8ee2;
case 0x5b8ee7:goto L5b8ee7;
case 0x5b8eea:c.instructions+=2;goto B5b8eea;
case 0x5b8eec:c.instructions+=1;goto B5b8eec;
case 0x5b8eee:goto L5b8eee;
case 0x5b8eef:c.instructions+=5;goto B5b8eef;
case 0x5b8ef0:c.instructions+=4;goto B5b8ef0;
case 0x5b8ef1:c.instructions+=3;goto B5b8ef1;
case 0x5b8ef6:c.instructions+=2;goto B5b8ef6;
case 0x5b8ef7:c.instructions+=1;goto B5b8ef7;
case 0x5b8efa:goto L5b8efa;
case 0x5b8eff:c.instructions+=2;goto B5b8eff;
case 0x5b8f04:c.instructions+=1;goto B5b8f04;
case 0x5b8f09:goto L5b8f09;
case 0x5b8f0c:c.instructions+=2;goto B5b8f0c;
case 0x5b8f0e:c.instructions+=1;goto B5b8f0e;
case 0x5b8f10:goto L5b8f10;
case 0x5b8f11:c.instructions+=5;goto B5b8f11;
case 0x5b8f12:c.instructions+=4;goto B5b8f12;
case 0x5b8f13:c.instructions+=3;goto B5b8f13;
case 0x5b8f18:c.instructions+=2;goto B5b8f18;
case 0x5b8f19:c.instructions+=1;goto B5b8f19;
case 0x5b8f1c:goto L5b8f1c;
case 0x5b8f21:c.instructions+=2;goto B5b8f21;
case 0x5b8f26:c.instructions+=1;goto B5b8f26;
case 0x5b8f2b:goto L5b8f2b;
case 0x5b8f2e:c.instructions+=2;goto B5b8f2e;
case 0x5b8f30:c.instructions+=1;goto B5b8f30;
case 0x5b8f32:goto L5b8f32;
case 0x5b8f33:c.instructions+=5;goto B5b8f33;
case 0x5b8f34:c.instructions+=4;goto B5b8f34;
case 0x5b8f35:c.instructions+=3;goto B5b8f35;
case 0x5b8f3a:c.instructions+=2;goto B5b8f3a;
case 0x5b8f3b:c.instructions+=1;goto B5b8f3b;
case 0x5b8f3e:goto L5b8f3e;
case 0x5b8f43:c.instructions+=2;goto B5b8f43;
case 0x5b8f48:c.instructions+=1;goto B5b8f48;
case 0x5b8f4d:goto L5b8f4d;
case 0x5b8f50:c.instructions+=2;goto B5b8f50;
case 0x5b8f52:c.instructions+=1;goto B5b8f52;
case 0x5b8f54:goto L5b8f54;
case 0x5b8f55:c.instructions+=5;goto B5b8f55;
case 0x5b8f56:c.instructions+=4;goto B5b8f56;
case 0x5b8f57:c.instructions+=3;goto B5b8f57;
case 0x5b8f5c:c.instructions+=2;goto B5b8f5c;
case 0x5b8f5d:c.instructions+=1;goto B5b8f5d;
case 0x5b8f60:goto L5b8f60;
case 0x5b8f65:c.instructions+=2;goto B5b8f65;
case 0x5b8f6a:c.instructions+=1;goto B5b8f6a;
case 0x5b8f6f:goto L5b8f6f;
case 0x5b8f72:c.instructions+=2;goto B5b8f72;
case 0x5b8f74:c.instructions+=1;goto B5b8f74;
case 0x5b8f76:goto L5b8f76;
case 0x5b8f77:c.instructions+=5;goto B5b8f77;
case 0x5b8f78:c.instructions+=4;goto B5b8f78;
case 0x5b8f79:c.instructions+=3;goto B5b8f79;
case 0x5b8f7e:c.instructions+=2;goto B5b8f7e;
case 0x5b8f7f:c.instructions+=1;goto B5b8f7f;
case 0x5b8f82:goto L5b8f82;
case 0x5b8f87:c.instructions+=2;goto B5b8f87;
case 0x5b8f8c:c.instructions+=1;goto B5b8f8c;
case 0x5b8f91:goto L5b8f91;
case 0x5b8f94:c.instructions+=2;goto B5b8f94;
case 0x5b8f96:c.instructions+=1;goto B5b8f96;
case 0x5b8f98:goto L5b8f98;
case 0x5b8f99:c.instructions+=5;goto B5b8f99;
case 0x5b8f9a:c.instructions+=4;goto B5b8f9a;
case 0x5b8f9b:c.instructions+=3;goto B5b8f9b;
case 0x5b8fa0:c.instructions+=2;goto B5b8fa0;
case 0x5b8fa1:c.instructions+=1;goto B5b8fa1;
case 0x5b8fa4:goto L5b8fa4;
case 0x5b8fa9:c.instructions+=2;goto B5b8fa9;
case 0x5b8fae:c.instructions+=1;goto B5b8fae;
case 0x5b8fb3:goto L5b8fb3;
case 0x5b8fb6:c.instructions+=2;goto B5b8fb6;
case 0x5b8fb8:c.instructions+=1;goto B5b8fb8;
case 0x5b8fba:goto L5b8fba;
case 0x5b8fbb:c.instructions+=5;goto B5b8fbb;
case 0x5b8fbc:c.instructions+=4;goto B5b8fbc;
case 0x5b8fbd:c.instructions+=3;goto B5b8fbd;
case 0x5b8fc2:c.instructions+=2;goto B5b8fc2;
case 0x5b8fc3:c.instructions+=1;goto B5b8fc3;
case 0x5b8fc6:goto L5b8fc6;
case 0x5b8fcb:c.instructions+=2;goto B5b8fcb;
case 0x5b8fd0:c.instructions+=1;goto B5b8fd0;
case 0x5b8fd5:goto L5b8fd5;
case 0x5b8fd8:c.instructions+=2;goto B5b8fd8;
case 0x5b8fda:c.instructions+=1;goto B5b8fda;
case 0x5b8fdc:goto L5b8fdc;
case 0x5b8fdd:c.instructions+=5;goto B5b8fdd;
case 0x5b8fde:c.instructions+=4;goto B5b8fde;
case 0x5b8fdf:c.instructions+=3;goto B5b8fdf;
case 0x5b8fe4:c.instructions+=2;goto B5b8fe4;
case 0x5b8fe5:c.instructions+=1;goto B5b8fe5;
case 0x5b8fe8:goto L5b8fe8;
case 0x5b8fed:c.instructions+=2;goto B5b8fed;
case 0x5b8ff2:c.instructions+=1;goto B5b8ff2;
case 0x5b8ff7:goto L5b8ff7;
case 0x5b8ffa:c.instructions+=2;goto B5b8ffa;
case 0x5b8ffc:c.instructions+=1;goto B5b8ffc;
case 0x5b8ffe:goto L5b8ffe;
case 0x5b8fff:c.instructions+=1;goto B5b8fff;
default:missing_instruction(c.pc);}
B5b8000:L5b8000:{c.instructions+=2;NFSU2_TR(0x5b8000);
u8 U[4];
w4(U+0,u32(0x7a3444ull));
s4(u32(r4(R+4)),r4(U+0));
}
B5b8006:{NFSU2_TR(0x5b8006);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b8010:L5b8010:{c.instructions+=18;NFSU2_TR(0x5b8010);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b8011:{NFSU2_TR(0x5b8011);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b8015:{NFSU2_TR(0x5b8015);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B5b8017:{NFSU2_TR(0x5b8017);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b8018:{NFSU2_TR(0x5b8018);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b801c:{NFSU2_TR(0x5b801c);
__builtin_memmove((R+4),(R+0),4);
}
B5b801e:{NFSU2_TR(0x5b801e);
__builtin_memmove((R+9),(R+0),1);
}
B5b8020:{NFSU2_TR(0x5b8020);
__builtin_memmove((R+0),gp(0x86f354),4);
}
B5b8025:{NFSU2_TR(0x5b8025);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b8026:{NFSU2_TR(0x5b8026);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B5b8029:{NFSU2_TR(0x5b8029);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b802a:{NFSU2_TR(0x5b802a);
w4(R+28,u32(r2(R+4)));
}
B5b802d:{NFSU2_TR(0x5b802d);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5b802f:{NFSU2_TR(0x5b802f);
w4(R+28,u32(u32(r4(R+28))|u32(r4(R+8))));
}
B5b8031:{NFSU2_TR(0x5b8031);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5b8033:{NFSU2_TR(0x5b8033);
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
B5b8035:{NFSU2_TR(0x5b8035);
w1(R+12,u8(0x1ull));
}
B5b8037:{NFSU2_TR(0x5b8037);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L5b80fc;}}
}
B5b803d:L5b803d:{c.instructions+=3;NFSU2_TR(0x5b803d);
__builtin_memmove((R+8),gp(0x86e89c),4);
}
B5b8043:{NFSU2_TR(0x5b8043);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5b8045:{NFSU2_TR(0x5b8045);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b8046:L5b8046:{c.instructions+=2;NFSU2_TR(0x5b8046);
u8 U[24];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w4(U+20,u32(u32(r4(U+16))-u32(r4(R+28))));
w1(R+518,u8((r4(U+20))==(u32(0x0ull))));
}
B5b804a:{NFSU2_TR(0x5b804a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b808d;}}
}
B5b804c:L5b804c:{c.instructions+=14;NFSU2_TR(0x5b804c);
u8 U[16];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B5b8050:{NFSU2_TR(0x5b8050);
__builtin_memmove((R+8),gp(0x86e89c),4);
}
B5b8056:{NFSU2_TR(0x5b8056);
__builtin_memmove((R+20),gp(0x7babc4),4);
}
B5b805c:{NFSU2_TR(0x5b805c);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B5b8060:{NFSU2_TR(0x5b8060);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
s4(u32(r4(R+8)),r4(U+0));
}
B5b8062:{NFSU2_TR(0x5b8062);
__builtin_memmove((R+20),gp(0x7babc8),4);
}
B5b8068:{NFSU2_TR(0x5b8068);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b806b:{NFSU2_TR(0x5b806b);
__builtin_memmove((R+20),gp(0x7babcc),4);
}
B5b8071:{NFSU2_TR(0x5b8071);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b8074:{NFSU2_TR(0x5b8074);
__builtin_memmove((R+20),gp(0x7babd0),4);
}
B5b807a:{NFSU2_TR(0x5b807a);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b807d:{NFSU2_TR(0x5b807d);
__builtin_memmove((R+8),gp(0x86e89c),4);
}
B5b8083:{NFSU2_TR(0x5b8083);
u8 U[16];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B5b8087:{NFSU2_TR(0x5b8087);
__builtin_memmove((R+8),gp(0x86e89c),4);
}
B5b808d:L5b808d:{c.instructions+=3;NFSU2_TR(0x5b808d);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+20),(U+8),4);
}
B5b8090:{NFSU2_TR(0x5b8090);
u8 U[16];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+20))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5b8094:{NFSU2_TR(0x5b8094);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b80a3;}}
}
B5b8096:L5b8096:{c.instructions+=2;NFSU2_TR(0x5b8096);
u8 U[16];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5b809b:{NFSU2_TR(0x5b809b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b80b9;}}
}
B5b809d:L5b809d:{c.instructions+=2;NFSU2_TR(0x5b809d);
u8 U[2];
__builtin_memmove((U+0),(R+4),1);
w1(U+1,u8(u32(r1(R+12))-u32(r1(U+0))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B5b809f:{NFSU2_TR(0x5b809f);
if(r1(R+518)){{goto L5b80b9;}}
}
B5b80a1:L5b80a1:{c.instructions+=1;NFSU2_TR(0x5b80a1);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
}
B5b80a3:L5b80a3:{c.instructions+=5;NFSU2_TR(0x5b80a3);
__builtin_memmove((R+20),gp(0x86f354),4);
}
B5b80a9:{NFSU2_TR(0x5b80a9);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B5b80aa:{NFSU2_TR(0x5b80aa);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
}
B5b80ad:{NFSU2_TR(0x5b80ad);
u8 U[14];
__builtin_memmove((U+6),(R+20),4);
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
B5b80af:{NFSU2_TR(0x5b80af);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5b8046u);}goto L5b8046;}}
}
B5b80b1:L5b80b1:{c.instructions+=6;NFSU2_TR(0x5b80b1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5b80b2:{NFSU2_TR(0x5b80b2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5b80b3:{NFSU2_TR(0x5b80b3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5b80b4:{NFSU2_TR(0x5b80b4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5b80b5:{NFSU2_TR(0x5b80b5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5b80b6:{NFSU2_TR(0x5b80b6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b80b9:L5b80b9:{c.instructions+=18;NFSU2_TR(0x5b80b9);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b80bd:{NFSU2_TR(0x5b80bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B5b80c0:{NFSU2_TR(0x5b80c0);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B5b80c3:{NFSU2_TR(0x5b80c3);
u8 U[16];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
w4(U+12,u32(0x20ull));
s4(u32(r4(U+8)),r4(U+12));
}
B5b80cb:{NFSU2_TR(0x5b80cb);
__builtin_memmove((R+8),gp(0x86e89c),4);
}
B5b80d1:{NFSU2_TR(0x5b80d1);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0x21cull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0x21cull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x21cull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5b80d7:{NFSU2_TR(0x5b80d7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+24),(U+0),4);
}
B5b80d9:{NFSU2_TR(0x5b80d9);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B5b80dd:{NFSU2_TR(0x5b80dd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+8)),r4(U+0));
}
B5b80df:{NFSU2_TR(0x5b80df);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5b80e2:{NFSU2_TR(0x5b80e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b80e5:{NFSU2_TR(0x5b80e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5b80e8:{NFSU2_TR(0x5b80e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b80eb:{NFSU2_TR(0x5b80eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b80ee:{NFSU2_TR(0x5b80ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b80f1:{NFSU2_TR(0x5b80f1);
__builtin_memmove((R+8),gp(0x86e89c),4);
}
B5b80f7:{NFSU2_TR(0x5b80f7);
u8 U[16];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+28),4);
s4(u32(r4(U+8)),r4(U+12));
}
B5b80fb:{NFSU2_TR(0x5b80fb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5b80fc:L5b80fc:{c.instructions+=5;NFSU2_TR(0x5b80fc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5b80fd:{NFSU2_TR(0x5b80fd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5b80fe:{NFSU2_TR(0x5b80fe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5b80ff:{NFSU2_TR(0x5b80ff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5b8100:{NFSU2_TR(0x5b8100);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b8110:L5b8110:{c.instructions+=4;NFSU2_TR(0x5b8110);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x234ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b8116:{NFSU2_TR(0x5b8116);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x244ull))));
}
B5b811c:{NFSU2_TR(0x5b811c);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x13ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5b811f:{NFSU2_TR(0x5b811f);
if(r1(R+518)){{goto L5b8172;}}
}
B5b8121:L5b8121:{c.instructions+=5;NFSU2_TR(0x5b8121);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x230ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b8127:{NFSU2_TR(0x5b8127);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x86ffb4ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B5b812e:{NFSU2_TR(0x5b812e);
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
B5b8130:{NFSU2_TR(0x5b8130);
u8 U[4];
w4(U+0,u32(0x244ull));
s4(u32(r4(R+16)),r4(U+0));
}
B5b8138:{NFSU2_TR(0x5b8138);
if(r1(R+518)){{goto L5b8145;}}
}
B5b813a:L5b813a:{c.instructions+=5;NFSU2_TR(0x5b813a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5b813c:{NFSU2_TR(0x5b813c);
__builtin_memmove((R+8),(R+16),4);
}
B5b8140:{NFSU2_TR(0x5b8140);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b8141:{NFSU2_TR(0x5b8141);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b8142:{NFSU2_TR(0x5b8142);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b8145ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5b8145:L5b8145:{c.instructions+=12;NFSU2_TR(0x5b8145);
u8 U[8];
w4(U+0,u32(u32(u32(0x248ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b814c:{NFSU2_TR(0x5b814c);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b8150:{NFSU2_TR(0x5b8150);
__builtin_memmove((R+4),(R+0),4);
}
B5b8152:{NFSU2_TR(0x5b8152);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B5b8154:{NFSU2_TR(0x5b8154);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b8158:{NFSU2_TR(0x5b8158);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b815b:{NFSU2_TR(0x5b815b);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b815f:{NFSU2_TR(0x5b815f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b8162:{NFSU2_TR(0x5b8162);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b8166:{NFSU2_TR(0x5b8166);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b8169:{NFSU2_TR(0x5b8169);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x244ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x244ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x244ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5b816f:{NFSU2_TR(0x5b816f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b8172:L5b8172:{c.instructions+=15;NFSU2_TR(0x5b8172);
u8 U[8];
w4(U+0,u32(u32(u32(0x248ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b8179:{NFSU2_TR(0x5b8179);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x21cull))));
}
B5b817f:{NFSU2_TR(0x5b817f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b8180:{NFSU2_TR(0x5b8180);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+24),(U+0),4);
}
B5b8182:{NFSU2_TR(0x5b8182);
__builtin_memmove((R+8),(R+0),4);
}
B5b8184:{NFSU2_TR(0x5b8184);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+8)),r4(U+0));
}
B5b8186:{NFSU2_TR(0x5b8186);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5b8189:{NFSU2_TR(0x5b8189);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b818c:{NFSU2_TR(0x5b818c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5b818f:{NFSU2_TR(0x5b818f);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b8192:{NFSU2_TR(0x5b8192);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b8195:{NFSU2_TR(0x5b8195);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b8198:{NFSU2_TR(0x5b8198);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5b8199:{NFSU2_TR(0x5b8199);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x244ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x244ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x244ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5b819f:{NFSU2_TR(0x5b819f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b81b0:L5b81b0:{c.instructions+=12;NFSU2_TR(0x5b81b0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b81b1:{NFSU2_TR(0x5b81b1);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b81b5:{NFSU2_TR(0x5b81b5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b81b6:{NFSU2_TR(0x5b81b6);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b81b7:{NFSU2_TR(0x5b81b7);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x14ull))));
}
B5b81ba:{NFSU2_TR(0x5b81ba);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b81bb:{NFSU2_TR(0x5b81bb);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5b81bd:{NFSU2_TR(0x5b81bd);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b81be:{NFSU2_TR(0x5b81be);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b81c2:{NFSU2_TR(0x5b81c2);
w4(R+12,u32(0x7fe7f8ull));
}
B5b81c7:{NFSU2_TR(0x5b81c7);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B5b81c9:{NFSU2_TR(0x5b81c9);
__builtin_memmove((R+16),(R+16),4);
}
B5b81d0:L5b81d0:{c.instructions+=4;NFSU2_TR(0x5b81d0);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5b81d4:{NFSU2_TR(0x5b81d4);
w4(R+4,u32(0x4ull));
}
B5b81d9:{NFSU2_TR(0x5b81d9);
__builtin_memmove((R+28),(R+12),4);
}
B5b81db:{NFSU2_TR(0x5b81db);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
w1(R+518,u8((r4(R+20))==(u32(0x0ull))));
}
B5b81dd:L5b81dd:{c.instructions+=1;NFSU2_TR(0x5b81dd);
u8 U[59];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L5b81df;}}
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
__builtin_memmove((U+36),gp(u32(r4(U+20))),4);
__builtin_memmove((U+47),(U+36),4);
__builtin_memmove((U+16),gp(u32(r4(U+0))),4);
__builtin_memmove((U+51),(U+16),4);
w1(R+512,u8((r4(U+51))<(r4(U+47))));
w1(R+523,sborrow<u32>(r4(U+51),r4(U+47)));
w4(U+55,u32(u32(r4(U+51))-u32(r4(U+47))));
w1(R+519,u8(s32(r4(U+55))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+55))==(u32(0x0ull))));
w4(U+41,u32(u32(r4(U+55))&u32(u32(0xffull))));
w1(U+45,u8(__builtin_popcountll(u64(r4(U+41)))));
w1(U+46,u8(u32(r1(U+45))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+46))==(u8(0x0ull))));
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5b81ddu);}goto L5b81dd;}}
}
B5b81df:L5b81df:{c.instructions+=1;NFSU2_TR(0x5b81df);
if(r1(R+518)){{goto L5b81fe;}}
}
B5b81e1:L5b81e1:{c.instructions+=5;NFSU2_TR(0x5b81e1);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0xb0ull))));
}
B5b81e7:{NFSU2_TR(0x5b81e7);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5b81e8:{NFSU2_TR(0x5b81e8);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0xb0ull))));
}
B5b81ee:{NFSU2_TR(0x5b81ee);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(U+0))<(u32(0x630ull))));
}
B5b81f4:{NFSU2_TR(0x5b81f4);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5b81d0u);}goto L5b81d0;}}
}
B5b81f6:L5b81f6:{c.instructions+=7;NFSU2_TR(0x5b81f6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5b81f7:{NFSU2_TR(0x5b81f7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5b81f8:{NFSU2_TR(0x5b81f8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5b81f9:{NFSU2_TR(0x5b81f9);
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
B5b81fb:{NFSU2_TR(0x5b81fb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5b81fc:{NFSU2_TR(0x5b81fc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5b81fd:{NFSU2_TR(0x5b81fd);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b81fe:L5b81fe:{c.instructions+=6;NFSU2_TR(0x5b81fe);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b8202:{NFSU2_TR(0x5b8202);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0xb0ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B5b8208:{NFSU2_TR(0x5b8208);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b820c:{NFSU2_TR(0x5b820c);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x7fe858ull))));
}
B5b8211:{NFSU2_TR(0x5b8211);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+4))));
}
B5b8213:{NFSU2_TR(0x5b8213);
w4(R+24,u32(0x14ull));
}
B5b8218:L5b8218:{c.instructions+=8;NFSU2_TR(0x5b8218);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffffb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5b821b:{NFSU2_TR(0x5b821b);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+28),4);
s4(u32(r4(U+4)),r4(U+8));
}
B5b821e:{NFSU2_TR(0x5b821e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+28),(U+0),4);
}
B5b8220:{NFSU2_TR(0x5b8220);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+4)),r4(U+0));
}
B5b8222:{NFSU2_TR(0x5b8222);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B5b8225:{NFSU2_TR(0x5b8225);
w1(R+512,carry<u32>(r4(R+4),u32(0x4ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B5b8228:{NFSU2_TR(0x5b8228);
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
B5b8229:{NFSU2_TR(0x5b8229);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5b8218u);}goto L5b8218;}}
}
B5b822b:L5b822b:{c.instructions+=7;NFSU2_TR(0x5b822b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5b822c:{NFSU2_TR(0x5b822c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5b822d:{NFSU2_TR(0x5b822d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5b822e:{NFSU2_TR(0x5b822e);
w1(R+0,u8(0x1ull));
}
B5b8230:{NFSU2_TR(0x5b8230);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5b8231:{NFSU2_TR(0x5b8231);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5b8232:{NFSU2_TR(0x5b8232);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b8240:L5b8240:{c.instructions+=2;NFSU2_TR(0x5b8240);
__builtin_memmove((R+0),gp(0x87078c),1);
}
B5b8245:{NFSU2_TR(0x5b8245);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b8250:L5b8250:{c.instructions+=8;NFSU2_TR(0x5b8250);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b8254:{NFSU2_TR(0x5b8254);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b8255:{NFSU2_TR(0x5b8255);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b8256:{NFSU2_TR(0x5b8256);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b8257:{NFSU2_TR(0x5b8257);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x344ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5b825d:{NFSU2_TR(0x5b825d);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B5b825f:{NFSU2_TR(0x5b825f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5b8261:{NFSU2_TR(0x5b8261);
__builtin_memmove((R+24),(R+28),4);
}
B5b8263:L5b8263:{c.instructions+=2;NFSU2_TR(0x5b8263);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(R+8))-u32(r4(U+4))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B5b8265:{NFSU2_TR(0x5b8265);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b826e;}}
}
B5b8267:L5b8267:{c.instructions+=1;NFSU2_TR(0x5b8267);
u8 U[13];
w4(U+0,u32(u32(u32(0x364ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+12),1);
s1(u32(r4(U+8)),r1(U+12));
}
B5b826e:L5b826e:{c.instructions+=4;NFSU2_TR(0x5b826e);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5b826f:{NFSU2_TR(0x5b826f);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B5b8272:{NFSU2_TR(0x5b8272);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5b8275:{NFSU2_TR(0x5b8275);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5b8263u);}goto L5b8263;}}
}
B5b8277:L5b8277:{c.instructions+=4;NFSU2_TR(0x5b8277);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x33cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b827d:{NFSU2_TR(0x5b827d);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B5b827e:{NFSU2_TR(0x5b827e);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B5b8281:{NFSU2_TR(0x5b8281);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L5b838a;}}
}
B5b8287:L5b8287:{c.instructions+=1;NFSU2_TR(0x5b8287);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x5b839cull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5b828e:L5b828e:{c.instructions+=11;NFSU2_TR(0x5b828e);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b8292:{NFSU2_TR(0x5b8292);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+28)),r4(U+0));
}
B5b8294:{NFSU2_TR(0x5b8294);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5b8295:{NFSU2_TR(0x5b8295);
u8 U[6];
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w1(R+523,sborrow<u32>(u32(0x0ull),r4(R+0)));
w4(R+0,u32(0-u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5b8297:{NFSU2_TR(0x5b8297);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x33cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b829d:{NFSU2_TR(0x5b829d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x354ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b82a3:{NFSU2_TR(0x5b82a3);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x364ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5b82aa:{NFSU2_TR(0x5b82aa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5b82ab:{NFSU2_TR(0x5b82ab);
__builtin_memmove(gp(0x870768),(R+12),1);
}
B5b82b1:{NFSU2_TR(0x5b82b1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5b82b2:{NFSU2_TR(0x5b82b2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b82b5:L5b82b5:{c.instructions+=10;NFSU2_TR(0x5b82b5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+28)),r4(U+0));
}
B5b82b7:{NFSU2_TR(0x5b82b7);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b82bb:{NFSU2_TR(0x5b82bb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5b82bc:{NFSU2_TR(0x5b82bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x33cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b82c2:{NFSU2_TR(0x5b82c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x354ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b82c8:{NFSU2_TR(0x5b82c8);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x364ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5b82cf:{NFSU2_TR(0x5b82cf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5b82d0:{NFSU2_TR(0x5b82d0);
__builtin_memmove(gp(0x870768),(R+12),1);
}
B5b82d6:{NFSU2_TR(0x5b82d6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5b82d7:{NFSU2_TR(0x5b82d7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b82da:L5b82da:{c.instructions+=5;NFSU2_TR(0x5b82da);
u8 U[22];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x348ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+8),r4(U+14)));
w4(U+18,u32(u32(r4(R+8))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B5b82e0:{NFSU2_TR(0x5b82e0);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b82e4:{NFSU2_TR(0x5b82e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b82ea:{NFSU2_TR(0x5b82ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x35cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b82f0:{NFSU2_TR(0x5b82f0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b8326;}}
}
B5b82f2:L5b82f2:{c.instructions+=2;NFSU2_TR(0x5b82f2);
u8 U[22];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x358ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+14))));
w1(R+523,sborrow<u32>(r4(R+0),r4(U+14)));
w4(U+18,u32(u32(r4(R+0))-u32(r4(U+14))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B5b82f8:{NFSU2_TR(0x5b82f8);
if(r1(R+518)){{goto L5b8326;}}
}
B5b82fa:L5b82fa:{c.instructions+=11;NFSU2_TR(0x5b82fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x360ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b8300:{NFSU2_TR(0x5b8300);
w1(R+0,u8(0x1ull));
}
B5b8302:{NFSU2_TR(0x5b8302);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5b8303:{NFSU2_TR(0x5b8303);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x33cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b8309:{NFSU2_TR(0x5b8309);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x350ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b830f:{NFSU2_TR(0x5b830f);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x367ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5b8315:{NFSU2_TR(0x5b8315);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x368ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5b831b:{NFSU2_TR(0x5b831b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5b831c:{NFSU2_TR(0x5b831c);
__builtin_memmove(gp(0x870768),(R+12),1);
}
B5b8322:{NFSU2_TR(0x5b8322);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5b8323:{NFSU2_TR(0x5b8323);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b8326:L5b8326:{c.instructions+=2;NFSU2_TR(0x5b8326);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x366ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5b832d:{NFSU2_TR(0x5b832d);
{goto L5b8384;}
}
B5b832f:L5b832f:{c.instructions+=5;NFSU2_TR(0x5b832f);
u8 U[22];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34cull))));
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
B5b8335:{NFSU2_TR(0x5b8335);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b8339:{NFSU2_TR(0x5b8339);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x348ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b833f:{NFSU2_TR(0x5b833f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x358ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b8345:{NFSU2_TR(0x5b8345);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b837d;}}
}
B5b8347:L5b8347:{c.instructions+=2;NFSU2_TR(0x5b8347);
u8 U[22];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x35cull))));
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
B5b834d:{NFSU2_TR(0x5b834d);
if(r1(R+518)){{goto L5b837d;}}
}
B5b834f:L5b834f:{c.instructions+=12;NFSU2_TR(0x5b834f);
u8 U[6];
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w1(R+523,sborrow<u32>(u32(0x0ull),r4(R+0)));
w4(R+0,u32(0-u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5b8351:{NFSU2_TR(0x5b8351);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x360ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b8357:{NFSU2_TR(0x5b8357);
w1(R+0,u8(0x1ull));
}
B5b8359:{NFSU2_TR(0x5b8359);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5b835a:{NFSU2_TR(0x5b835a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x33cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b8360:{NFSU2_TR(0x5b8360);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x350ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b8366:{NFSU2_TR(0x5b8366);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x367ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5b836c:{NFSU2_TR(0x5b836c);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x368ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5b8372:{NFSU2_TR(0x5b8372);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5b8373:{NFSU2_TR(0x5b8373);
__builtin_memmove(gp(0x870768),(R+12),1);
}
B5b8379:{NFSU2_TR(0x5b8379);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5b837a:{NFSU2_TR(0x5b837a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b837d:L5b837d:{c.instructions+=1;NFSU2_TR(0x5b837d);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x365ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5b8384:L5b8384:{c.instructions+=1;NFSU2_TR(0x5b8384);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x368ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5b838a:L5b838a:{c.instructions+=6;NFSU2_TR(0x5b838a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5b838b:{NFSU2_TR(0x5b838b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x33cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b8391:{NFSU2_TR(0x5b8391);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5b8392:{NFSU2_TR(0x5b8392);
__builtin_memmove(gp(0x870768),(R+12),1);
}
B5b8398:{NFSU2_TR(0x5b8398);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5b8399:{NFSU2_TR(0x5b8399);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b83b0:L5b83b0:{c.instructions+=5;NFSU2_TR(0x5b83b0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b83b1:{NFSU2_TR(0x5b83b1);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b83b5:{NFSU2_TR(0x5b83b5);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5b83b9:{NFSU2_TR(0x5b83b9);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5b83bb:{NFSU2_TR(0x5b83bb);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5b83c3;}}
}
B5b83bd:L5b83bd:{c.instructions+=1;NFSU2_TR(0x5b83bd);
{u32 ea_=u32(u32(7882060u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5b83c3:L5b83c3:{c.instructions+=8;NFSU2_TR(0x5b83c3);
{u32 ea_=u32(u32(7881308u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5b83c9:{NFSU2_TR(0x5b83c9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b83ca:{NFSU2_TR(0x5b83ca);
{u32 ea_=u32(u32(8005512u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5b83d0:{NFSU2_TR(0x5b83d0);
{u32 ea_=u32(u32(8008776u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5b83d6:{NFSU2_TR(0x5b83d6);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5b83da:{NFSU2_TR(0x5b83da);
{u32 ea_=u32(u32(7881300u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5b83e0:{NFSU2_TR(0x5b83e0);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b83e3:{NFSU2_TR(0x5b83e3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b83e8ull));
TAIL_STATIC(0x43c350u,43c);
}
B5b83e8:L5b83e8:{c.instructions+=4;NFSU2_TR(0x5b83e8);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b83ec:{NFSU2_TR(0x5b83ec);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5b83f0:{NFSU2_TR(0x5b83f0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b83f1:{NFSU2_TR(0x5b83f1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b83f6ull));
TAIL_STATIC(0x43c350u,43c);
}
B5b83f6:L5b83f6:{c.instructions+=11;NFSU2_TR(0x5b83f6);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b83fa:{NFSU2_TR(0x5b83fa);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B5b83fc:{NFSU2_TR(0x5b83fc);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5b83ff:{NFSU2_TR(0x5b83ff);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B5b8401:{NFSU2_TR(0x5b8401);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B5b8403:{NFSU2_TR(0x5b8403);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5b8405:{NFSU2_TR(0x5b8405);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5b8407:{NFSU2_TR(0x5b8407);
__asm__ volatile(".byte 0xde,0xd9":::"memory");
}
B5b8409:{NFSU2_TR(0x5b8409);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5b840b:{NFSU2_TR(0x5b840b);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5b840e:{NFSU2_TR(0x5b840e);
if(r1(R+514)){{goto L5b8432;}}
}
B5b8410:L5b8410:{c.instructions+=6;NFSU2_TR(0x5b8410);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5b8412:{NFSU2_TR(0x5b8412);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5b8416:{NFSU2_TR(0x5b8416);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5b841c:{NFSU2_TR(0x5b841c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5b841e:{NFSU2_TR(0x5b841e);
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
B5b8421:{NFSU2_TR(0x5b8421);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b842c;}}
}
B5b8423:L5b8423:{c.instructions+=3;NFSU2_TR(0x5b8423);
w4(R+0,u32(0x1ull));
}
B5b8428:{NFSU2_TR(0x5b8428);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5b8429:{NFSU2_TR(0x5b8429);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b842c:L5b842c:{c.instructions+=3;NFSU2_TR(0x5b842c);
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
B5b842e:{NFSU2_TR(0x5b842e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5b842f:{NFSU2_TR(0x5b842f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b8432:L5b8432:{c.instructions+=4;NFSU2_TR(0x5b8432);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5b8438:{NFSU2_TR(0x5b8438);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5b843a:{NFSU2_TR(0x5b843a);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5b843d:{NFSU2_TR(0x5b843d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b844b;}}
}
B5b843f:L5b843f:{c.instructions+=4;NFSU2_TR(0x5b843f);
w4(R+0,u32(0x1ull));
}
B5b8444:{NFSU2_TR(0x5b8444);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x2ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x2ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5b8447:{NFSU2_TR(0x5b8447);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5b8448:{NFSU2_TR(0x5b8448);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b844b:L5b844b:{c.instructions+=4;NFSU2_TR(0x5b844b);
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
B5b844d:{NFSU2_TR(0x5b844d);
w4(R+0,u32(0x2ull));
}
B5b8452:{NFSU2_TR(0x5b8452);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5b8453:{NFSU2_TR(0x5b8453);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b8460:L5b8460:{c.instructions+=4;NFSU2_TR(0x5b8460);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x364ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5b8466:{NFSU2_TR(0x5b8466);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5b8468:{NFSU2_TR(0x5b8468);
w1(R+8,u8(0x1ull));
}
B5b846a:{NFSU2_TR(0x5b846a);
if(r1(R+518)){{goto L5b847e;}}
}
B5b846c:L5b846c:{c.instructions+=3;NFSU2_TR(0x5b846c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x33cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b8472:{NFSU2_TR(0x5b8472);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5b8475:{NFSU2_TR(0x5b8475);
if(r1(R+518)){{goto L5b847c;}}
}
B5b8477:L5b8477:{c.instructions+=2;NFSU2_TR(0x5b8477);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5b847a:{NFSU2_TR(0x5b847a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b847e;}}
}
B5b847c:L5b847c:{c.instructions+=1;NFSU2_TR(0x5b847c);
w1(R+8,u8(u32(r1(R+8))^u32(r1(R+8))));
}
B5b847e:L5b847e:{c.instructions+=3;NFSU2_TR(0x5b847e);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x365ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5b8484:{NFSU2_TR(0x5b8484);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5b8486:{NFSU2_TR(0x5b8486);
if(r1(R+518)){{goto L5b849d;}}
}
B5b8488:L5b8488:{c.instructions+=3;NFSU2_TR(0x5b8488);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x368ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5b848e:{NFSU2_TR(0x5b848e);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5b8490:{NFSU2_TR(0x5b8490);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b849d;}}
}
B5b8492:L5b8492:{c.instructions+=2;NFSU2_TR(0x5b8492);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x33cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5b8499:{NFSU2_TR(0x5b8499);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b849d;}}
}
B5b849b:L5b849b:{c.instructions+=1;NFSU2_TR(0x5b849b);
w1(R+8,u8(u32(r1(R+8))^u32(r1(R+8))));
}
B5b849d:L5b849d:{c.instructions+=3;NFSU2_TR(0x5b849d);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x366ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5b84a3:{NFSU2_TR(0x5b84a3);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5b84a5:{NFSU2_TR(0x5b84a5);
if(r1(R+518)){{goto L5b84bc;}}
}
B5b84a7:L5b84a7:{c.instructions+=3;NFSU2_TR(0x5b84a7);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x368ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5b84ad:{NFSU2_TR(0x5b84ad);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5b84af:{NFSU2_TR(0x5b84af);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b84bc;}}
}
B5b84b1:L5b84b1:{c.instructions+=2;NFSU2_TR(0x5b84b1);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x33cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5b84b8:{NFSU2_TR(0x5b84b8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b84bc;}}
}
B5b84ba:L5b84ba:{c.instructions+=1;NFSU2_TR(0x5b84ba);
w1(R+8,u8(u32(r1(R+8))^u32(r1(R+8))));
}
B5b84bc:L5b84bc:{c.instructions+=3;NFSU2_TR(0x5b84bc);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x367ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5b84c2:{NFSU2_TR(0x5b84c2);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5b84c4:{NFSU2_TR(0x5b84c4);
if(r1(R+518)){{goto L5b84e2;}}
}
B5b84c6:L5b84c6:{c.instructions+=3;NFSU2_TR(0x5b84c6);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x368ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5b84cc:{NFSU2_TR(0x5b84cc);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5b84ce:{NFSU2_TR(0x5b84ce);
if(r1(R+518)){{goto L5b84e2;}}
}
B5b84d0:L5b84d0:{c.instructions+=3;NFSU2_TR(0x5b84d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x33cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b84d6:{NFSU2_TR(0x5b84d6);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5b84d9:{NFSU2_TR(0x5b84d9);
if(r1(R+518)){{goto L5b84e0;}}
}
B5b84db:L5b84db:{c.instructions+=2;NFSU2_TR(0x5b84db);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5b84de:{NFSU2_TR(0x5b84de);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b84e2;}}
}
B5b84e0:L5b84e0:{c.instructions+=1;NFSU2_TR(0x5b84e0);
w1(R+8,u8(u32(r1(R+8))^u32(r1(R+8))));
}
B5b84e2:L5b84e2:{c.instructions+=5;NFSU2_TR(0x5b84e2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b84e3:{NFSU2_TR(0x5b84e3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b84e4:{NFSU2_TR(0x5b84e4);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5b84e7:{NFSU2_TR(0x5b84e7);
w4(R+28,u32(0x20ull));
}
B5b84ec:{NFSU2_TR(0x5b84ec);
__builtin_memmove((R+16),(R+16),4);
}
B5b84f0:L5b84f0:{c.instructions+=3;NFSU2_TR(0x5b84f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x33cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b84f6:{NFSU2_TR(0x5b84f6);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+0))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B5b84f8:{NFSU2_TR(0x5b84f8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b8525;}}
}
B5b84fa:L5b84fa:{c.instructions+=2;NFSU2_TR(0x5b84fa);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x340ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5b8501:{NFSU2_TR(0x5b8501);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b851f;}}
}
B5b8503:L5b8503:{c.instructions+=2;NFSU2_TR(0x5b8503);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5b8505:{NFSU2_TR(0x5b8505);
if(r1(R+518)){{goto L5b851f;}}
}
B5b8507:L5b8507:{c.instructions+=2;NFSU2_TR(0x5b8507);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5b850a:{NFSU2_TR(0x5b850a);
if(r1(R+518)){{goto L5b851f;}}
}
B5b850c:L5b850c:{c.instructions+=2;NFSU2_TR(0x5b850c);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5b850f:{NFSU2_TR(0x5b850f);
if(r1(R+518)){{goto L5b851f;}}
}
B5b8511:L5b8511:{c.instructions+=2;NFSU2_TR(0x5b8511);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5b8514:{NFSU2_TR(0x5b8514);
if(r1(R+518)){{goto L5b851f;}}
}
B5b8516:L5b8516:{c.instructions+=2;NFSU2_TR(0x5b8516);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5b8519:{NFSU2_TR(0x5b8519);
if(r1(R+518)){{goto L5b851f;}}
}
B5b851b:L5b851b:{c.instructions+=2;NFSU2_TR(0x5b851b);
w1(R+8,u8(u32(r1(R+8))^u32(r1(R+8))));
}
B5b851d:{NFSU2_TR(0x5b851d);
{goto L5b8525;}
}
B5b851f:L5b851f:{c.instructions+=1;NFSU2_TR(0x5b851f);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B5b8525:L5b8525:{c.instructions+=3;NFSU2_TR(0x5b8525);
w1(R+512,carry<u32>(r4(R+24),u32(0x4ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B5b8528:{NFSU2_TR(0x5b8528);
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
B5b8529:{NFSU2_TR(0x5b8529);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5b84f0u);}goto L5b84f0;}}
}
B5b852b:L5b852b:{c.instructions+=8;NFSU2_TR(0x5b852b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x33cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b8531:{NFSU2_TR(0x5b8531);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b8535:{NFSU2_TR(0x5b8535);
u8 U[16];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),4);
s4(u32(r4(U+8)),r4(U+12));
}
B5b8539:{NFSU2_TR(0x5b8539);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5b853a:{NFSU2_TR(0x5b853a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x33cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5b8544:{NFSU2_TR(0x5b8544);
s1(0x870768,u8(0x0ull));
}
B5b854b:{NFSU2_TR(0x5b854b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5b854c:{NFSU2_TR(0x5b854c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b8550:L5b8550:{c.instructions+=16;NFSU2_TR(0x5b8550);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B5b8553:{NFSU2_TR(0x5b8553);
__builtin_memmove((R+8),gp(0x86f354),4);
}
B5b8559:{NFSU2_TR(0x5b8559);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b855a:{NFSU2_TR(0x5b855a);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b855b:{NFSU2_TR(0x5b855b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b855c:{NFSU2_TR(0x5b855c);
__builtin_memmove((R+24),(R+4),4);
}
B5b855e:{NFSU2_TR(0x5b855e);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5b8560:{NFSU2_TR(0x5b8560);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b8561:{NFSU2_TR(0x5b8561);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5b8563:{NFSU2_TR(0x5b8563);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B5b8565:{NFSU2_TR(0x5b8565);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5b8567:{NFSU2_TR(0x5b8567);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5b8569:{NFSU2_TR(0x5b8569);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b856d:{NFSU2_TR(0x5b856d);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b8571:{NFSU2_TR(0x5b8571);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b8575:{NFSU2_TR(0x5b8575);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L5b8608;}}
}
B5b857b:L5b857b:{c.instructions+=2;NFSU2_TR(0x5b857b);
__builtin_memmove((R+8),gp(0x86e89c),4);
}
B5b8581:{NFSU2_TR(0x5b8581);
{goto L5b8585;}
}
B5b8583:L5b8583:{c.instructions+=1;NFSU2_TR(0x5b8583);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5b8585:L5b8585:{c.instructions+=3;NFSU2_TR(0x5b8585);
u8 U[16];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+12),(U+12),4);
}
B5b8589:{NFSU2_TR(0x5b8589);
u8 U[16];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+12))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5b858d:{NFSU2_TR(0x5b858d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b85d0;}}
}
B5b858f:L5b858f:{c.instructions+=14;NFSU2_TR(0x5b858f);
u8 U[16];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B5b8593:{NFSU2_TR(0x5b8593);
__builtin_memmove((R+8),gp(0x86e89c),4);
}
B5b8599:{NFSU2_TR(0x5b8599);
__builtin_memmove((R+12),gp(0x7babc4),4);
}
B5b859f:{NFSU2_TR(0x5b859f);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B5b85a3:{NFSU2_TR(0x5b85a3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+8)),r4(U+0));
}
B5b85a5:{NFSU2_TR(0x5b85a5);
__builtin_memmove((R+12),gp(0x7babc8),4);
}
B5b85ab:{NFSU2_TR(0x5b85ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b85ae:{NFSU2_TR(0x5b85ae);
__builtin_memmove((R+12),gp(0x7babcc),4);
}
B5b85b4:{NFSU2_TR(0x5b85b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b85b7:{NFSU2_TR(0x5b85b7);
__builtin_memmove((R+12),gp(0x7babd0),4);
}
B5b85bd:{NFSU2_TR(0x5b85bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b85c0:{NFSU2_TR(0x5b85c0);
__builtin_memmove((R+8),gp(0x86e89c),4);
}
B5b85c6:{NFSU2_TR(0x5b85c6);
u8 U[16];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B5b85ca:{NFSU2_TR(0x5b85ca);
__builtin_memmove((R+8),gp(0x86e89c),4);
}
B5b85d0:L5b85d0:{c.instructions+=4;NFSU2_TR(0x5b85d0);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B5b85d3:{NFSU2_TR(0x5b85d3);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x33cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+12))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5b85d9:{NFSU2_TR(0x5b85d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B5b85dc:{NFSU2_TR(0x5b85dc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b85ec;}}
}
B5b85de:L5b85de:{c.instructions+=2;NFSU2_TR(0x5b85de);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x2ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5b85e1:{NFSU2_TR(0x5b85e1);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5b85ec;}}
}
B5b85e3:L5b85e3:{c.instructions+=3;NFSU2_TR(0x5b85e3);
u8 U[16];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B5b85e7:{NFSU2_TR(0x5b85e7);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5b85eb:{NFSU2_TR(0x5b85eb);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B5b85ec:L5b85ec:{c.instructions+=7;NFSU2_TR(0x5b85ec);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b85f0:{NFSU2_TR(0x5b85f0);
__builtin_memmove((R+12),gp(0x86f354),4);
}
B5b85f6:{NFSU2_TR(0x5b85f6);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B5b85f7:{NFSU2_TR(0x5b85f7);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
}
B5b85fa:{NFSU2_TR(0x5b85fa);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
}
B5b85fc:{NFSU2_TR(0x5b85fc);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b8600:{NFSU2_TR(0x5b8600);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5b8583u);}goto L5b8583;}}
}
B5b8602:L5b8602:{c.instructions+=2;NFSU2_TR(0x5b8602);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b8606:{NFSU2_TR(0x5b8606);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5b8608:L5b8608:{c.instructions+=2;NFSU2_TR(0x5b8608);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x340ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5b860f:{NFSU2_TR(0x5b860f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b8644;}}
}
B5b8611:L5b8611:{c.instructions+=2;NFSU2_TR(0x5b8611);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5b8613:{NFSU2_TR(0x5b8613);
if(r1(R+518)){{goto L5b8679;}}
}
B5b8615:L5b8615:{c.instructions+=14;NFSU2_TR(0x5b8615);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
w4(U+4,u32(0x20ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5b861c:{NFSU2_TR(0x5b861c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x21cull))));
__builtin_memmove((R+8),(U+0),4);
}
B5b8622:{NFSU2_TR(0x5b8622);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+12),(U+0),4);
}
B5b8624:{NFSU2_TR(0x5b8624);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5b8627:{NFSU2_TR(0x5b8627);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+28)),r4(U+0));
}
B5b8629:{NFSU2_TR(0x5b8629);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5b862c:{NFSU2_TR(0x5b862c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b862f:{NFSU2_TR(0x5b862f);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5b8632:{NFSU2_TR(0x5b8632);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b8635:{NFSU2_TR(0x5b8635);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b8638:{NFSU2_TR(0x5b8638);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b863b:{NFSU2_TR(0x5b863b);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b863f:{NFSU2_TR(0x5b863f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b8642:{NFSU2_TR(0x5b8642);
{goto L5b8679;}
}
B5b8644:L5b8644:{c.instructions+=2;NFSU2_TR(0x5b8644);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5b8646:{NFSU2_TR(0x5b8646);
if(r1(R+518)){{goto L5b86de;}}
}
B5b864c:L5b864c:{c.instructions+=13;NFSU2_TR(0x5b864c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
w4(U+4,u32(0x20ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5b8653:{NFSU2_TR(0x5b8653);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x21cull))));
__builtin_memmove((R+8),(U+0),4);
}
B5b8659:{NFSU2_TR(0x5b8659);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+12),(U+0),4);
}
B5b865b:{NFSU2_TR(0x5b865b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5b865e:{NFSU2_TR(0x5b865e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+28)),r4(U+0));
}
B5b8660:{NFSU2_TR(0x5b8660);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5b8663:{NFSU2_TR(0x5b8663);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b8666:{NFSU2_TR(0x5b8666);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5b8669:{NFSU2_TR(0x5b8669);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b866c:{NFSU2_TR(0x5b866c);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b866f:{NFSU2_TR(0x5b866f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b8672:{NFSU2_TR(0x5b8672);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b8676:{NFSU2_TR(0x5b8676);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b8679:L5b8679:{c.instructions+=2;NFSU2_TR(0x5b8679);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5b867b:{NFSU2_TR(0x5b867b);
if(r1(R+518)){{goto L5b86de;}}
}
B5b867d:L5b867d:{c.instructions+=2;NFSU2_TR(0x5b867d);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+20))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5b867f:{NFSU2_TR(0x5b867f);
if(r1(R+518)){{goto L5b86de;}}
}
B5b8681:L5b8681:{c.instructions+=2;NFSU2_TR(0x5b8681);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5b8684:{NFSU2_TR(0x5b8684);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b86ae;}}
}
B5b8686:L5b8686:{c.instructions+=14;NFSU2_TR(0x5b8686);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b8689:{NFSU2_TR(0x5b8689);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b868c:{NFSU2_TR(0x5b868c);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5b868f:{NFSU2_TR(0x5b868f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+12),(U+0),4);
}
B5b8691:{NFSU2_TR(0x5b8691);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5b8694:{NFSU2_TR(0x5b8694);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+28)),r4(U+0));
}
B5b8696:{NFSU2_TR(0x5b8696);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5b8699:{NFSU2_TR(0x5b8699);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b869c:{NFSU2_TR(0x5b869c);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5b869f:{NFSU2_TR(0x5b869f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b86a2:{NFSU2_TR(0x5b86a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b86a5:{NFSU2_TR(0x5b86a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b86a8:{NFSU2_TR(0x5b86a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b86ab:{NFSU2_TR(0x5b86ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b86ae:L5b86ae:{c.instructions+=3;NFSU2_TR(0x5b86ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b86b1:{NFSU2_TR(0x5b86b1);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5b86b4:{NFSU2_TR(0x5b86b4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b86de;}}
}
B5b86b6:L5b86b6:{c.instructions+=11;NFSU2_TR(0x5b86b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b86b9:{NFSU2_TR(0x5b86b9);
__builtin_memmove((R+0),gp(0x7babc4),4);
}
B5b86be:{NFSU2_TR(0x5b86be);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5b86c1:{NFSU2_TR(0x5b86c1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B5b86c3:{NFSU2_TR(0x5b86c3);
__builtin_memmove((R+0),gp(0x7babc8),4);
}
B5b86c8:{NFSU2_TR(0x5b86c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b86cb:{NFSU2_TR(0x5b86cb);
__builtin_memmove((R+0),gp(0x7babcc),4);
}
B5b86d0:{NFSU2_TR(0x5b86d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b86d3:{NFSU2_TR(0x5b86d3);
__builtin_memmove((R+0),gp(0x7babd0),4);
}
B5b86d8:{NFSU2_TR(0x5b86d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b86db:{NFSU2_TR(0x5b86db);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b86de:L5b86de:{c.instructions+=5;NFSU2_TR(0x5b86de);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x33cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b86e4:{NFSU2_TR(0x5b86e4);
__builtin_memmove(gp(0x870768),(R+4),1);
}
B5b86ea:{NFSU2_TR(0x5b86ea);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b86eb:{NFSU2_TR(0x5b86eb);
__builtin_memmove((R+4),(R+24),4);
}
B5b86ed:{NFSU2_TR(0x5b86ed);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b86f2ull));
TAIL_STATIC(0x5cf320u,5cf);
}
B5b86f2:L5b86f2:{c.instructions+=3;NFSU2_TR(0x5b86f2);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b86f4:{NFSU2_TR(0x5b86f4);
__builtin_memmove((R+4),(R+24),4);
}
B5b86f6:{NFSU2_TR(0x5b86f6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b86fbull));
TAIL_STATIC(0x5cf320u,5cf);
}
B5b86fb:L5b86fb:{c.instructions+=3;NFSU2_TR(0x5b86fb);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b86fd:{NFSU2_TR(0x5b86fd);
__builtin_memmove((R+4),(R+24),4);
}
B5b86ff:{NFSU2_TR(0x5b86ff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b8704ull));
TAIL_STATIC(0x5cf320u,5cf);
}
B5b8704:L5b8704:{c.instructions+=3;NFSU2_TR(0x5b8704);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b8706:{NFSU2_TR(0x5b8706);
__builtin_memmove((R+4),(R+24),4);
}
B5b8708:{NFSU2_TR(0x5b8708);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b870dull));
TAIL_STATIC(0x5cf320u,5cf);
}
B5b870d:L5b870d:{c.instructions+=6;NFSU2_TR(0x5b870d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5b870e:{NFSU2_TR(0x5b870e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5b870f:{NFSU2_TR(0x5b870f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5b8710:{NFSU2_TR(0x5b8710);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5b8711:{NFSU2_TR(0x5b8711);
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
B5b8714:{NFSU2_TR(0x5b8714);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b8720:L5b8720:{c.instructions+=4;NFSU2_TR(0x5b8720);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x234ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B5b8727:{NFSU2_TR(0x5b8727);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xffffffedull))));
}
B5b872a:{NFSU2_TR(0x5b872a);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B5b872d:{NFSU2_TR(0x5b872d);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L5b8748;}}
}
B5b872f:L5b872f:{c.instructions+=1;NFSU2_TR(0x5b872f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x5b874cull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5b8736:L5b8736:{c.instructions+=2;NFSU2_TR(0x5b8736);
w4(R+0,u32(0x1ull));
}
B5b873b:{NFSU2_TR(0x5b873b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b873c:L5b873c:{c.instructions+=2;NFSU2_TR(0x5b873c);
w4(R+0,u32(0x2ull));
}
B5b8741:{NFSU2_TR(0x5b8741);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b8742:L5b8742:{c.instructions+=2;NFSU2_TR(0x5b8742);
w4(R+0,u32(0x3ull));
}
B5b8747:{NFSU2_TR(0x5b8747);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b8748:L5b8748:{c.instructions+=2;NFSU2_TR(0x5b8748);
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
B5b874a:{NFSU2_TR(0x5b874a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b8760:L5b8760:{c.instructions+=73;NFSU2_TR(0x5b8760);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x40ull))));
}
B5b8763:{NFSU2_TR(0x5b8763);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b8764:{NFSU2_TR(0x5b8764);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b8765:{NFSU2_TR(0x5b8765);
w1(R+4,u8(0xd1ull));
}
B5b8767:{NFSU2_TR(0x5b8767);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b8768:{NFSU2_TR(0x5b8768);
w1(R+8,u8(0xfcull));
}
B5b876a:{NFSU2_TR(0x5b876a);
u8 U[5];
w4(U+0,u32(u32(u32(0x16ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5b876e:{NFSU2_TR(0x5b876e);
u8 U[5];
w4(U+0,u32(u32(u32(0x45ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5b8772:{NFSU2_TR(0x5b8772);
__builtin_memmove((R+4),gp(0x870778),4);
}
B5b8778:{NFSU2_TR(0x5b8778);
u8 U[5];
w4(U+0,u32(u32(u32(0x29ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5b877c:{NFSU2_TR(0x5b877c);
u8 U[5];
w4(U+0,u32(u32(u32(0x3bull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5b8780:{NFSU2_TR(0x5b8780);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x0ull))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B5b8787:{NFSU2_TR(0x5b8787);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b8788:{NFSU2_TR(0x5b8788);
w4(R+0,u32(0xea1a8c08ull));
}
B5b878d:{NFSU2_TR(0x5b878d);
w4(R+12,u32(0x28ull));
}
B5b8792:{NFSU2_TR(0x5b8792);
__builtin_memmove(gp(0x86fb50),(R+8),4);
}
B5b8798:{NFSU2_TR(0x5b8798);
__builtin_memmove(gp(0x86fb54),(R+4),4);
}
B5b879e:{NFSU2_TR(0x5b879e);
__builtin_memmove(gp(0x86fb5c),(R+0),4);
}
B5b87a3:{NFSU2_TR(0x5b87a3);
u8 U[6];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w2(U+4,u16(0x194aull));
s2(u32(r4(U+0)),r2(U+4));
}
B5b87aa:{NFSU2_TR(0x5b87aa);
u8 U[6];
w4(U+0,u32(u32(u32(0x16ull))+u32(r4(R+16))));
w2(U+4,u16(0x4f22ull));
s2(u32(r4(U+0)),r2(U+4));
}
B5b87b1:{NFSU2_TR(0x5b87b1);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b87b5:{NFSU2_TR(0x5b87b5);
u8 U[5];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w1(U+4,u8(0xa3ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5b87ba:{NFSU2_TR(0x5b87ba);
u8 U[5];
w4(U+0,u32(u32(u32(0x19ull))+u32(r4(R+16))));
w1(U+4,u8(0xf0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5b87bf:{NFSU2_TR(0x5b87bf);
u8 U[5];
w4(U+0,u32(u32(u32(0x1bull))+u32(r4(R+16))));
w1(U+4,u8(0xf6ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5b87c4:{NFSU2_TR(0x5b87c4);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b87c8:{NFSU2_TR(0x5b87c8);
u8 U[5];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w1(U+4,u8(0xdfull));
s1(u32(r4(U+0)),r1(U+4));
}
B5b87cd:{NFSU2_TR(0x5b87cd);
u8 U[5];
w4(U+0,u32(u32(u32(0x1dull))+u32(r4(R+16))));
w1(U+4,u8(0x4bull));
s1(u32(r4(U+0)),r1(U+4));
}
B5b87d2:{NFSU2_TR(0x5b87d2);
u8 U[5];
w4(U+0,u32(u32(u32(0x1eull))+u32(r4(R+16))));
w1(U+4,u8(0x62ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5b87d7:{NFSU2_TR(0x5b87d7);
u8 U[5];
w4(U+0,u32(u32(u32(0x1full))+u32(r4(R+16))));
w1(U+4,u8(0x39ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5b87dc:{NFSU2_TR(0x5b87dc);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b87e0:{NFSU2_TR(0x5b87e0);
u8 U[4];
w4(U+0,u32(0x78e8f4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b87e5:{NFSU2_TR(0x5b87e5);
u8 U[4];
w4(U+0,u32(0x86fb8cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b87ea:{NFSU2_TR(0x5b87ea);
w4(R+24,u32(0xf19dd539ull));
}
B5b87ef:{NFSU2_TR(0x5b87ef);
u8 U[6];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
w2(U+4,u16(0xcb04ull));
s2(u32(r4(U+0)),r2(U+4));
}
B5b87f6:{NFSU2_TR(0x5b87f6);
u8 U[6];
w4(U+0,u32(u32(u32(0x2eull))+u32(r4(R+16))));
w2(U+4,u16(0x4126ull));
s2(u32(r4(U+0)),r2(U+4));
}
B5b87fd:{NFSU2_TR(0x5b87fd);
u8 U[5];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
w1(U+4,u8(0x90ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5b8802:{NFSU2_TR(0x5b8802);
u8 U[5];
w4(U+0,u32(u32(u32(0x31ull))+u32(r4(R+16))));
w1(U+4,u8(0x8bull));
s1(u32(r4(U+0)),r1(U+4));
}
B5b8807:{NFSU2_TR(0x5b8807);
u8 U[5];
w4(U+0,u32(u32(u32(0x32ull))+u32(r4(R+16))));
w1(U+4,u8(0xcfull));
s1(u32(r4(U+0)),r1(U+4));
}
B5b880c:{NFSU2_TR(0x5b880c);
u8 U[5];
w4(U+0,u32(u32(u32(0x33ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5b8810:{NFSU2_TR(0x5b8810);
u8 U[5];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
w1(U+4,u8(0xfeull));
s1(u32(r4(U+0)),r1(U+4));
}
B5b8815:{NFSU2_TR(0x5b8815);
u8 U[5];
w4(U+0,u32(u32(u32(0x36ull))+u32(r4(R+16))));
w1(U+4,u8(0x69ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5b881a:{NFSU2_TR(0x5b881a);
u8 U[5];
w4(U+0,u32(u32(u32(0x37ull))+u32(r4(R+16))));
w1(U+4,u8(0xbdull));
s1(u32(r4(U+0)),r1(U+4));
}
B5b881f:{NFSU2_TR(0x5b881f);
w4(R+28,u32(0x189bcee1ull));
}
B5b8824:{NFSU2_TR(0x5b8824);
u8 U[6];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
w2(U+4,u16(0x460dull));
s2(u32(r4(U+0)),r2(U+4));
}
B5b882b:{NFSU2_TR(0x5b882b);
u8 U[6];
w4(U+0,u32(u32(u32(0x3eull))+u32(r4(R+16))));
w2(U+4,u16(0x4344ull));
s2(u32(r4(U+0)),r2(U+4));
}
B5b8832:{NFSU2_TR(0x5b8832);
u8 U[5];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
w1(U+4,u8(0x92ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5b8837:{NFSU2_TR(0x5b8837);
u8 U[5];
w4(U+0,u32(u32(u32(0x41ull))+u32(r4(R+16))));
w1(U+4,u8(0xceull));
s1(u32(r4(U+0)),r1(U+4));
}
B5b883c:{NFSU2_TR(0x5b883c);
u8 U[5];
w4(U+0,u32(u32(u32(0x42ull))+u32(r4(R+16))));
w1(U+4,u8(0x8dull));
s1(u32(r4(U+0)),r1(U+4));
}
B5b8841:{NFSU2_TR(0x5b8841);
u8 U[5];
w4(U+0,u32(u32(u32(0x43ull))+u32(r4(R+16))));
w1(U+4,u8(0x7dull));
s1(u32(r4(U+0)),r1(U+4));
}
B5b8846:{NFSU2_TR(0x5b8846);
u8 U[5];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
w1(U+4,u8(0x6cull));
s1(u32(r4(U+0)),r1(U+4));
}
B5b884b:{NFSU2_TR(0x5b884b);
u8 U[5];
w4(U+0,u32(u32(u32(0x45ull))+u32(r4(R+16))));
w1(U+4,u8(0x9eull));
s1(u32(r4(U+0)),r1(U+4));
}
B5b8850:{NFSU2_TR(0x5b8850);
u8 U[5];
w4(U+0,u32(u32(u32(0x46ull))+u32(r4(R+16))));
w1(U+4,u8(0xa8ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5b8855:{NFSU2_TR(0x5b8855);
w4(R+20,u32(0x58d20958ull));
}
B5b885a:{NFSU2_TR(0x5b885a);
u8 U[6];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
w2(U+4,u16(0xa878ull));
s2(u32(r4(U+0)),r2(U+4));
}
B5b8861:{NFSU2_TR(0x5b8861);
u8 U[6];
w4(U+0,u32(u32(u32(0x4eull))+u32(r4(R+16))));
w2(U+4,u16(0x4007ull));
s2(u32(r4(U+0)),r2(U+4));
}
B5b8868:{NFSU2_TR(0x5b8868);
u8 U[5];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
w1(U+4,u8(0x83ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5b886d:{NFSU2_TR(0x5b886d);
u8 U[5];
w4(U+0,u32(u32(u32(0x52ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5b8871:{NFSU2_TR(0x5b8871);
u8 U[5];
w4(U+0,u32(u32(u32(0x53ull))+u32(r4(R+16))));
w1(U+4,u8(0xb8ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5b8876:{NFSU2_TR(0x5b8876);
u8 U[5];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
w1(U+4,u8(0xe5ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5b887b:{NFSU2_TR(0x5b887b);
u8 U[5];
w4(U+0,u32(u32(u32(0x55ull))+u32(r4(R+16))));
w1(U+4,u8(0x22ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5b8880:{NFSU2_TR(0x5b8880);
u8 U[5];
w4(U+0,u32(u32(u32(0x56ull))+u32(r4(R+16))));
w1(U+4,u8(0x1bull));
s1(u32(r4(U+0)),r1(U+4));
}
B5b8885:{NFSU2_TR(0x5b8885);
u8 U[5];
w4(U+0,u32(u32(u32(0x57ull))+u32(r4(R+16))));
w1(U+4,u8(0x11ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5b888a:{NFSU2_TR(0x5b888a);
s4(0x86fb48,u32(0x148ull));
}
B5b8894:{NFSU2_TR(0x5b8894);
__builtin_memmove(gp(0x86fb4c),(R+12),4);
}
B5b889a:{NFSU2_TR(0x5b889a);
__builtin_memmove(gp(0x86fb60),(R+0),4);
}
B5b889f:{NFSU2_TR(0x5b889f);
__builtin_memmove(gp(0x86fb64),(R+4),4);
}
B5b88a5:{NFSU2_TR(0x5b88a5);
__builtin_memmove(gp(0x86fb68),(R+8),4);
}
B5b88ab:{NFSU2_TR(0x5b88ab);
s4(0x86fb6c,u32(0x1000000ull));
}
B5b88b5:{NFSU2_TR(0x5b88b5);
s4(0x86fb58,u32(0x7fd7e0ull));
}
B5b88bf:{NFSU2_TR(0x5b88bf);
s4(0x86fb70,u32(0x10ull));
}
B5b88c9:{NFSU2_TR(0x5b88c9);
s4(0x86fb74,u32(0x0ull));
}
B5b88d3:{NFSU2_TR(0x5b88d3);
s4(0x86fb78,u32(0xffull));
}
B5b88dd:{NFSU2_TR(0x5b88dd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b88e2ull));
TAIL_STATIC(0x43dbd0u,43d);
}
B5b88e2:L5b88e2:{c.instructions+=22;NFSU2_TR(0x5b88e2);
__builtin_memmove((R+0),gp(0x87076c),4);
}
B5b88e7:{NFSU2_TR(0x5b88e7);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b88eb:{NFSU2_TR(0x5b88eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x0ull))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B5b88f2:{NFSU2_TR(0x5b88f2);
s4(0x86fa00,u32(0x148ull));
}
B5b88fc:{NFSU2_TR(0x5b88fc);
__builtin_memmove(gp(0x86fa04),(R+12),4);
}
B5b8902:{NFSU2_TR(0x5b8902);
__builtin_memmove(gp(0x86fa08),(R+4),4);
}
B5b8908:{NFSU2_TR(0x5b8908);
__builtin_memmove(gp(0x86fa0c),(R+0),4);
}
B5b890d:{NFSU2_TR(0x5b890d);
__builtin_memmove(gp(0x86fa14),(R+24),4);
}
B5b8913:{NFSU2_TR(0x5b8913);
__builtin_memmove(gp(0x86fa18),(R+8),4);
}
B5b8919:{NFSU2_TR(0x5b8919);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b891d:{NFSU2_TR(0x5b891d);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b8921:{NFSU2_TR(0x5b8921);
u8 U[4];
w4(U+0,u32(0x78e8f4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b8926:{NFSU2_TR(0x5b8926);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5b8928:{NFSU2_TR(0x5b8928);
u8 U[4];
w4(U+0,u32(0x86fa44ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b892d:{NFSU2_TR(0x5b892d);
__builtin_memmove(gp(0x86fa1c),(R+0),4);
}
B5b8932:{NFSU2_TR(0x5b8932);
__builtin_memmove(gp(0x86fa20),(R+4),4);
}
B5b8938:{NFSU2_TR(0x5b8938);
s4(0x86fa24,u32(0x1000000ull));
}
B5b8942:{NFSU2_TR(0x5b8942);
s4(0x86fa10,u32(0x7fcac0ull));
}
B5b894c:{NFSU2_TR(0x5b894c);
s4(0x86fa28,u32(0x10ull));
}
B5b8956:{NFSU2_TR(0x5b8956);
__builtin_memmove(gp(0x86fa2c),(R+24),4);
}
B5b895c:{NFSU2_TR(0x5b895c);
s4(0x86fa30,u32(0xffull));
}
B5b8966:{NFSU2_TR(0x5b8966);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b896bull));
TAIL_STATIC(0x43dbd0u,43d);
}
B5b896b:L5b896b:{c.instructions+=22;NFSU2_TR(0x5b896b);
__builtin_memmove((R+0),gp(0x870770),4);
}
B5b8970:{NFSU2_TR(0x5b8970);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b8974:{NFSU2_TR(0x5b8974);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x0ull))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B5b897b:{NFSU2_TR(0x5b897b);
__builtin_memmove(gp(0x86fc98),(R+8),4);
}
B5b8981:{NFSU2_TR(0x5b8981);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b8985:{NFSU2_TR(0x5b8985);
__builtin_memmove(gp(0x86fc9c),(R+0),4);
}
B5b898a:{NFSU2_TR(0x5b898a);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b898e:{NFSU2_TR(0x5b898e);
__builtin_memmove(gp(0x86fca4),(R+28),4);
}
B5b8994:{NFSU2_TR(0x5b8994);
u8 U[4];
w4(U+0,u32(0x78e8f4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b8999:{NFSU2_TR(0x5b8999);
w4(R+28,u32(0x1000000ull));
}
B5b899e:{NFSU2_TR(0x5b899e);
u8 U[4];
w4(U+0,u32(0x86fcd4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b89a3:{NFSU2_TR(0x5b89a3);
s4(0x86fc90,u32(0x148ull));
}
B5b89ad:{NFSU2_TR(0x5b89ad);
__builtin_memmove(gp(0x86fc94),(R+12),4);
}
B5b89b3:{NFSU2_TR(0x5b89b3);
__builtin_memmove(gp(0x86fca8),(R+0),4);
}
B5b89b8:{NFSU2_TR(0x5b89b8);
__builtin_memmove(gp(0x86fcac),(R+4),4);
}
B5b89be:{NFSU2_TR(0x5b89be);
__builtin_memmove(gp(0x86fcb0),(R+8),4);
}
B5b89c4:{NFSU2_TR(0x5b89c4);
__builtin_memmove(gp(0x86fcb4),(R+28),4);
}
B5b89ca:{NFSU2_TR(0x5b89ca);
s4(0x86fca0,u32(0x7fd330ull));
}
B5b89d4:{NFSU2_TR(0x5b89d4);
s4(0x86fcb8,u32(0x10ull));
}
B5b89de:{NFSU2_TR(0x5b89de);
__builtin_memmove(gp(0x86fcbc),(R+24),4);
}
B5b89e4:{NFSU2_TR(0x5b89e4);
s4(0x86fcc0,u32(0xffull));
}
B5b89ee:{NFSU2_TR(0x5b89ee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b89f3ull));
TAIL_STATIC(0x43dbd0u,43d);
}
B5b89f3:L5b89f3:{c.instructions+=21;NFSU2_TR(0x5b89f3);
__builtin_memmove((R+0),gp(0x870774),4);
}
B5b89f8:{NFSU2_TR(0x5b89f8);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b89fc:{NFSU2_TR(0x5b89fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x0ull))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B5b8a03:{NFSU2_TR(0x5b8a03);
__builtin_memmove(gp(0x86fde0),(R+4),4);
}
B5b8a09:{NFSU2_TR(0x5b8a09);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b8a0d:{NFSU2_TR(0x5b8a0d);
__builtin_memmove(gp(0x86fde4),(R+0),4);
}
B5b8a12:{NFSU2_TR(0x5b8a12);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b8a16:{NFSU2_TR(0x5b8a16);
u8 U[4];
w4(U+0,u32(0x78e8f4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b8a1b:{NFSU2_TR(0x5b8a1b);
u8 U[4];
w4(U+0,u32(0x86fe1cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b8a20:{NFSU2_TR(0x5b8a20);
s4(0x86fdd8,u32(0x148ull));
}
B5b8a2a:{NFSU2_TR(0x5b8a2a);
__builtin_memmove(gp(0x86fddc),(R+12),4);
}
B5b8a30:{NFSU2_TR(0x5b8a30);
__builtin_memmove(gp(0x86fdec),(R+20),4);
}
B5b8a36:{NFSU2_TR(0x5b8a36);
__builtin_memmove(gp(0x86fdf0),(R+8),4);
}
B5b8a3c:{NFSU2_TR(0x5b8a3c);
__builtin_memmove(gp(0x86fdf4),(R+0),4);
}
B5b8a41:{NFSU2_TR(0x5b8a41);
__builtin_memmove(gp(0x86fdf8),(R+4),4);
}
B5b8a47:{NFSU2_TR(0x5b8a47);
__builtin_memmove(gp(0x86fdfc),(R+28),4);
}
B5b8a4d:{NFSU2_TR(0x5b8a4d);
s4(0x86fde8,u32(0x7fd650ull));
}
B5b8a57:{NFSU2_TR(0x5b8a57);
s4(0x86fe00,u32(0x10ull));
}
B5b8a61:{NFSU2_TR(0x5b8a61);
__builtin_memmove(gp(0x86fe04),(R+24),4);
}
B5b8a67:{NFSU2_TR(0x5b8a67);
s4(0x86fe08,u32(0xffull));
}
B5b8a71:{NFSU2_TR(0x5b8a71);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b8a76ull));
TAIL_STATIC(0x43dbd0u,43d);
}
B5b8a76:L5b8a76:{c.instructions+=7;NFSU2_TR(0x5b8a76);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B5b8a79:{NFSU2_TR(0x5b8a79);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5b8a7a:{NFSU2_TR(0x5b8a7a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5b8a7b:{NFSU2_TR(0x5b8a7b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5b8a7c:{NFSU2_TR(0x5b8a7c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5b8a7d:{NFSU2_TR(0x5b8a7d);
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
B5b8a80:{NFSU2_TR(0x5b8a80);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b8a90:L5b8a90:{c.instructions+=9;NFSU2_TR(0x5b8a90);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xcull))));
}
B5b8a93:{NFSU2_TR(0x5b8a93);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b8a94:{NFSU2_TR(0x5b8a94);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b8a95:{NFSU2_TR(0x5b8a95);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5b8a99:{NFSU2_TR(0x5b8a99);
__builtin_memmove((R+12),(R+4),4);
}
B5b8a9b:{NFSU2_TR(0x5b8a9b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b8a9c:{NFSU2_TR(0x5b8a9c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5b8a9e:{NFSU2_TR(0x5b8a9e);
w4(R+4,u32(0x4full));
}
B5b8aa3:{NFSU2_TR(0x5b8aa3);
w4(R+28,u32(0x8765c8ull));
}
B5b8aa8:L5b8aa8:{c.instructions+=1;NFSU2_TR(0x5b8aa8);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L5b8aaa;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5b8aa8u);}goto L5b8aa8;}
}
B5b8aaa:L5b8aaa:{c.instructions+=6;NFSU2_TR(0x5b8aaa);
s4(0x8765c8,u32(0x13cull));
}
B5b8ab4:{NFSU2_TR(0x5b8ab4);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x364ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5b8aba:{NFSU2_TR(0x5b8aba);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0xffffffffull))));
}
B5b8abd:{NFSU2_TR(0x5b8abd);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5b8abf:{NFSU2_TR(0x5b8abf);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5b8ac4:{NFSU2_TR(0x5b8ac4);
if(r1(R+518)){{goto L5b8ae1;}}
}
B5b8ac6:L5b8ac6:{c.instructions+=2;NFSU2_TR(0x5b8ac6);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5b8ac9:{NFSU2_TR(0x5b8ac9);
if(r1(R+518)){{goto L5b8ad0;}}
}
B5b8acb:L5b8acb:{c.instructions+=2;NFSU2_TR(0x5b8acb);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5b8ace:{NFSU2_TR(0x5b8ace);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b8ae1;}}
}
B5b8ad0:L5b8ad0:{c.instructions+=3;NFSU2_TR(0x5b8ad0);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b8ad4:{NFSU2_TR(0x5b8ad4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5b8ad6:{NFSU2_TR(0x5b8ad6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b8adc;}}
}
B5b8ad8:L5b8ad8:{c.instructions+=2;NFSU2_TR(0x5b8ad8);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B5b8ada:{NFSU2_TR(0x5b8ada);
{goto L5b8ae1;}
}
B5b8adc:L5b8adc:{c.instructions+=1;NFSU2_TR(0x5b8adc);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5b8ae1:L5b8ae1:{c.instructions+=3;NFSU2_TR(0x5b8ae1);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x365ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5b8ae7:{NFSU2_TR(0x5b8ae7);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5b8ae9:{NFSU2_TR(0x5b8ae9);
if(r1(R+518)){{goto L5b8b0b;}}
}
B5b8aeb:L5b8aeb:{c.instructions+=3;NFSU2_TR(0x5b8aeb);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x368ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5b8af1:{NFSU2_TR(0x5b8af1);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5b8af3:{NFSU2_TR(0x5b8af3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b8b0b;}}
}
B5b8af5:L5b8af5:{c.instructions+=2;NFSU2_TR(0x5b8af5);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5b8af8:{NFSU2_TR(0x5b8af8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b8b0b;}}
}
B5b8afa:L5b8afa:{c.instructions+=3;NFSU2_TR(0x5b8afa);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b8afe:{NFSU2_TR(0x5b8afe);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5b8b00:{NFSU2_TR(0x5b8b00);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b8b06;}}
}
B5b8b02:L5b8b02:{c.instructions+=2;NFSU2_TR(0x5b8b02);
__builtin_memmove((R+4),(R+20),4);
}
B5b8b04:{NFSU2_TR(0x5b8b04);
{goto L5b8b0b;}
}
B5b8b06:L5b8b06:{c.instructions+=1;NFSU2_TR(0x5b8b06);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5b8b0b:L5b8b0b:{c.instructions+=3;NFSU2_TR(0x5b8b0b);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x366ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5b8b11:{NFSU2_TR(0x5b8b11);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5b8b13:{NFSU2_TR(0x5b8b13);
if(r1(R+518)){{goto L5b8b35;}}
}
B5b8b15:L5b8b15:{c.instructions+=3;NFSU2_TR(0x5b8b15);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x368ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5b8b1b:{NFSU2_TR(0x5b8b1b);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5b8b1d:{NFSU2_TR(0x5b8b1d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b8b35;}}
}
B5b8b1f:L5b8b1f:{c.instructions+=2;NFSU2_TR(0x5b8b1f);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5b8b22:{NFSU2_TR(0x5b8b22);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b8b35;}}
}
B5b8b24:L5b8b24:{c.instructions+=3;NFSU2_TR(0x5b8b24);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b8b28:{NFSU2_TR(0x5b8b28);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5b8b2a:{NFSU2_TR(0x5b8b2a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b8b30;}}
}
B5b8b2c:L5b8b2c:{c.instructions+=2;NFSU2_TR(0x5b8b2c);
__builtin_memmove((R+4),(R+20),4);
}
B5b8b2e:{NFSU2_TR(0x5b8b2e);
{goto L5b8b35;}
}
B5b8b30:L5b8b30:{c.instructions+=1;NFSU2_TR(0x5b8b30);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5b8b35:L5b8b35:{c.instructions+=3;NFSU2_TR(0x5b8b35);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x367ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5b8b3b:{NFSU2_TR(0x5b8b3b);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5b8b3d:{NFSU2_TR(0x5b8b3d);
if(r1(R+518)){{goto L5b8b67;}}
}
B5b8b3f:L5b8b3f:{c.instructions+=3;NFSU2_TR(0x5b8b3f);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x368ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5b8b45:{NFSU2_TR(0x5b8b45);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5b8b47:{NFSU2_TR(0x5b8b47);
if(r1(R+518)){{goto L5b8b67;}}
}
B5b8b49:L5b8b49:{c.instructions+=2;NFSU2_TR(0x5b8b49);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5b8b4c:{NFSU2_TR(0x5b8b4c);
if(r1(R+518)){{goto L5b8b53;}}
}
B5b8b4e:L5b8b4e:{c.instructions+=2;NFSU2_TR(0x5b8b4e);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5b8b51:{NFSU2_TR(0x5b8b51);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b8b67;}}
}
B5b8b53:L5b8b53:{c.instructions+=3;NFSU2_TR(0x5b8b53);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b8b57:{NFSU2_TR(0x5b8b57);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5b8b59:{NFSU2_TR(0x5b8b59);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b8b62;}}
}
B5b8b5b:L5b8b5b:{c.instructions+=2;NFSU2_TR(0x5b8b5b);
w4(R+4,u32(0x3ull));
}
B5b8b60:{NFSU2_TR(0x5b8b60);
{goto L5b8b6c;}
}
B5b8b62:L5b8b62:{c.instructions+=1;NFSU2_TR(0x5b8b62);
u8 U[5];
w4(U+0,u32(u32(u32(0xfull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5b8b67:L5b8b67:{c.instructions+=2;NFSU2_TR(0x5b8b67);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xffffffffull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5b8b6a:{NFSU2_TR(0x5b8b6a);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5b8ba4;}}
}
B5b8b6c:L5b8b6c:{c.instructions+=4;NFSU2_TR(0x5b8b6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x230ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5b8b72:{NFSU2_TR(0x5b8b72);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x86ffb4ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B5b8b79:{NFSU2_TR(0x5b8b79);
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
B5b8b7b:{NFSU2_TR(0x5b8b7b);
if(r1(R+518)){{goto L5b8ba4;}}
}
B5b8b7d:L5b8b7d:{c.instructions+=7;NFSU2_TR(0x5b8b7d);
u8 U[16];
w4(U+0,u32(u32(u32(0x344ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B5b8b84:{NFSU2_TR(0x5b8b84);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5b8b86:{NFSU2_TR(0x5b8b86);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b8b88:{NFSU2_TR(0x5b8b88);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b8b89:{NFSU2_TR(0x5b8b89);
u8 U[4];
w4(U+0,u32(0x8765c8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b8b8e:{NFSU2_TR(0x5b8b8e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b8b8f:{NFSU2_TR(0x5b8b8f);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b8b92ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5b8b92:L5b8b92:{c.instructions+=2;NFSU2_TR(0x5b8b92);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5b8b94:{NFSU2_TR(0x5b8b94);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5b8ba4;}}
}
B5b8b96:L5b8b96:{c.instructions+=6;NFSU2_TR(0x5b8b96);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5b8b97:{NFSU2_TR(0x5b8b97);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5b8b98:{NFSU2_TR(0x5b8b98);
w4(R+0,u32(0x8765e8ull));
}
B5b8b9d:{NFSU2_TR(0x5b8b9d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5b8b9e:{NFSU2_TR(0x5b8b9e);
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
B5b8ba1:{NFSU2_TR(0x5b8ba1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b8ba4:L5b8ba4:{c.instructions+=4;NFSU2_TR(0x5b8ba4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b8ba5:{NFSU2_TR(0x5b8ba5);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5b8ba7:{NFSU2_TR(0x5b8ba7);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5b8baa:{NFSU2_TR(0x5b8baa);
__builtin_memmove((R+12),(R+12),4);
}
B5b8bb0:L5b8bb0:{c.instructions+=2;NFSU2_TR(0x5b8bb0);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+20))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B5b8bb2:{NFSU2_TR(0x5b8bb2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b8bf0;}}
}
B5b8bb4:L5b8bb4:{c.instructions+=2;NFSU2_TR(0x5b8bb4);
u8 U[16];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5b8bb9:{NFSU2_TR(0x5b8bb9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b8bca;}}
}
B5b8bbb:L5b8bbb:{c.instructions+=3;NFSU2_TR(0x5b8bbb);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5b8bbf:{NFSU2_TR(0x5b8bbf);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5b8bc1:{NFSU2_TR(0x5b8bc1);
if(r1(R+518)){{goto L5b8bca;}}
}
B5b8bc3:L5b8bc3:{c.instructions+=2;NFSU2_TR(0x5b8bc3);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5b8bc8:{NFSU2_TR(0x5b8bc8);
{goto L5b8bf0;}
}
B5b8bca:L5b8bca:{c.instructions+=4;NFSU2_TR(0x5b8bca);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x230ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b8bd0:{NFSU2_TR(0x5b8bd0);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x86ffb4ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B5b8bd7:{NFSU2_TR(0x5b8bd7);
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
B5b8bd9:{NFSU2_TR(0x5b8bd9);
if(r1(R+518)){{goto L5b8bf0;}}
}
B5b8bdb:L5b8bdb:{c.instructions+=7;NFSU2_TR(0x5b8bdb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5b8bdd:{NFSU2_TR(0x5b8bdd);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b8bdf:{NFSU2_TR(0x5b8bdf);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5b8be2:{NFSU2_TR(0x5b8be2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b8be3:{NFSU2_TR(0x5b8be3);
u8 U[4];
w4(U+0,u32(0x8765c8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b8be8:{NFSU2_TR(0x5b8be8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b8be9:{NFSU2_TR(0x5b8be9);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b8becull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5b8bec:L5b8bec:{c.instructions+=2;NFSU2_TR(0x5b8bec);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5b8bee:{NFSU2_TR(0x5b8bee);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5b8c3e;}}
}
B5b8bf0:L5b8bf0:{c.instructions+=4;NFSU2_TR(0x5b8bf0);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B5b8bf1:{NFSU2_TR(0x5b8bf1);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B5b8bf4:{NFSU2_TR(0x5b8bf4);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x10ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5b8bf7:{NFSU2_TR(0x5b8bf7);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5b8bb0u);}goto L5b8bb0;}}
}
B5b8bf9:L5b8bf9:{c.instructions+=3;NFSU2_TR(0x5b8bf9);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x58ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5b8bfc:{NFSU2_TR(0x5b8bfc);
w4(R+24,u32(0x20ull));
}
B5b8c01:{NFSU2_TR(0x5b8c01);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b8c05:L5b8c05:{c.instructions+=2;NFSU2_TR(0x5b8c05);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5b8c07:{NFSU2_TR(0x5b8c07);
{goto L5b8c10;}
}
B5b8c10:L5b8c10:{c.instructions+=3;NFSU2_TR(0x5b8c10);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5b8c14:{NFSU2_TR(0x5b8c14);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+4))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B5b8c17:{NFSU2_TR(0x5b8c17);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b8d52;}}
}
B5b8c1d:L5b8c1d:{c.instructions+=2;NFSU2_TR(0x5b8c1d);
u8 U[16];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5b8c22:{NFSU2_TR(0x5b8c22);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b8d2f;}}
}
B5b8c28:L5b8c28:{c.instructions+=3;NFSU2_TR(0x5b8c28);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5b8c2c:{NFSU2_TR(0x5b8c2c);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5b8c2e:{NFSU2_TR(0x5b8c2e);
if(r1(R+518)){{goto L5b8d2f;}}
}
B5b8c34:L5b8c34:{c.instructions+=2;NFSU2_TR(0x5b8c34);
u8 U[5];
w4(U+0,u32(u32(u32(0x13ull))+u32(r4(R+16))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5b8c39:{NFSU2_TR(0x5b8c39);
{goto L5b8d52;}
}
B5b8c3e:L5b8c3e:{c.instructions+=3;NFSU2_TR(0x5b8c3e);
__builtin_memmove((R+0),gp(0x7fca00),4);
}
B5b8c43:{NFSU2_TR(0x5b8c43);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5b8c45:{NFSU2_TR(0x5b8c45);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b8cae;}}
}
B5b8c47:L5b8c47:{c.instructions+=4;NFSU2_TR(0x5b8c47);
u8 U[4];
w4(U+0,u32(0x6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b8c49:{NFSU2_TR(0x5b8c49);
u8 U[4];
w4(U+0,u32(0x7a3464ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b8c4e:{NFSU2_TR(0x5b8c4e);
u8 U[4];
w4(U+0,u32(0x8765e8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b8c53:{NFSU2_TR(0x5b8c53);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b8c58ull));
TAIL_STATIC(0x43dc60u,43d);
}
B5b8c58:L5b8c58:{c.instructions+=3;NFSU2_TR(0x5b8c58);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B5b8c5b:{NFSU2_TR(0x5b8c5b);
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
B5b8c5d:{NFSU2_TR(0x5b8c5d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b8cae;}}
}
B5b8c5f:L5b8c5f:{c.instructions+=2;NFSU2_TR(0x5b8c5f);
u8 U[4];
w4(U+0,u32(0x8765eeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b8c64:{NFSU2_TR(0x5b8c64);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b8c69ull));
TAIL_STATIC(0x75d65bu,75d);
}
B5b8c69:L5b8c69:{c.instructions+=5;NFSU2_TR(0x5b8c69);
__builtin_memmove((R+24),(R+0),4);
}
B5b8c6b:{NFSU2_TR(0x5b8c6b);
u8 U[4];
w4(U+0,u32(0x7a345cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b8c70:{NFSU2_TR(0x5b8c70);
u8 U[4];
w4(U+0,u32(0x8765b4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b8c75:{NFSU2_TR(0x5b8c75);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B5b8c76:{NFSU2_TR(0x5b8c76);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b8c7bull));
TAIL_STATIC(0x43dbd0u,43d);
}
B5b8c7b:L5b8c7b:{c.instructions+=5;NFSU2_TR(0x5b8c7b);
u8 U[4];
w4(U+0,u32(0xaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b8c7d:{NFSU2_TR(0x5b8c7d);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5b8c81:{NFSU2_TR(0x5b8c81);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b8c82:{NFSU2_TR(0x5b8c82);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b8c83:{NFSU2_TR(0x5b8c83);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b8c88ull));
TAIL_STATIC(0x76af85u,76a);
}
B5b8c88:L5b8c88:{c.instructions+=5;NFSU2_TR(0x5b8c88);
u8 U[4];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5b8c8c:{NFSU2_TR(0x5b8c8c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b8c8d:{NFSU2_TR(0x5b8c8d);
u8 U[4];
w4(U+0,u32(0x8765b4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b8c92:{NFSU2_TR(0x5b8c92);
u8 U[4];
w4(U+0,u32(0x8765b4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b8c97:{NFSU2_TR(0x5b8c97);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b8c9cull));
TAIL_STATIC(0x43dda0u,43d);
}
B5b8c9c:L5b8c9c:{c.instructions+=8;NFSU2_TR(0x5b8c9c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
}
B5b8c9f:{NFSU2_TR(0x5b8c9f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5b8ca0:{NFSU2_TR(0x5b8ca0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5b8ca1:{NFSU2_TR(0x5b8ca1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5b8ca2:{NFSU2_TR(0x5b8ca2);
w4(R+0,u32(0x8765b4ull));
}
B5b8ca7:{NFSU2_TR(0x5b8ca7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5b8ca8:{NFSU2_TR(0x5b8ca8);
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
B5b8cab:{NFSU2_TR(0x5b8cab);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b8cae:L5b8cae:{c.instructions+=2;NFSU2_TR(0x5b8cae);
u8 U[8];
__builtin_memmove((U+0),gp(0x7fca00),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5b8cb5:{NFSU2_TR(0x5b8cb5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b8d20;}}
}
B5b8cb7:L5b8cb7:{c.instructions+=4;NFSU2_TR(0x5b8cb7);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b8cb9:{NFSU2_TR(0x5b8cb9);
u8 U[4];
w4(U+0,u32(0x7a3454ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b8cbe:{NFSU2_TR(0x5b8cbe);
u8 U[4];
w4(U+0,u32(0x8765e8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b8cc3:{NFSU2_TR(0x5b8cc3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b8cc8ull));
TAIL_STATIC(0x43dc60u,43d);
}
B5b8cc8:L5b8cc8:{c.instructions+=3;NFSU2_TR(0x5b8cc8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B5b8ccb:{NFSU2_TR(0x5b8ccb);
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
B5b8ccd:{NFSU2_TR(0x5b8ccd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b8d20;}}
}
B5b8ccf:L5b8ccf:{c.instructions+=2;NFSU2_TR(0x5b8ccf);
u8 U[4];
w4(U+0,u32(0x8765ecull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b8cd4:{NFSU2_TR(0x5b8cd4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b8cd9ull));
TAIL_STATIC(0x75d65bu,75d);
}
B5b8cd9:L5b8cd9:{c.instructions+=10;NFSU2_TR(0x5b8cd9);
__builtin_memmove((R+8),gp(0x7a344c),4);
}
B5b8cdf:{NFSU2_TR(0x5b8cdf);
__builtin_memmove((R+4),gp(0x7a3450),1);
}
B5b8ce5:{NFSU2_TR(0x5b8ce5);
__builtin_memmove(gp(0x8765b4),(R+8),4);
}
B5b8ceb:{NFSU2_TR(0x5b8ceb);
u8 U[4];
w4(U+0,u32(0xaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b8ced:{NFSU2_TR(0x5b8ced);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5b8cf1:{NFSU2_TR(0x5b8cf1);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B5b8cf2:{NFSU2_TR(0x5b8cf2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b8cf3:{NFSU2_TR(0x5b8cf3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b8cf4:{NFSU2_TR(0x5b8cf4);
__builtin_memmove(gp(0x8765b8),(R+4),1);
}
B5b8cfa:{NFSU2_TR(0x5b8cfa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b8cffull));
TAIL_STATIC(0x76af85u,76a);
}
B5b8cff:L5b8cff:{c.instructions+=4;NFSU2_TR(0x5b8cff);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5b8d03:{NFSU2_TR(0x5b8d03);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b8d04:{NFSU2_TR(0x5b8d04);
u8 U[4];
w4(U+0,u32(0x8765b9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b8d09:{NFSU2_TR(0x5b8d09);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b8d0eull));
TAIL_STATIC(0x43dbd0u,43d);
}
B5b8d0e:L5b8d0e:{c.instructions+=8;NFSU2_TR(0x5b8d0e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B5b8d11:{NFSU2_TR(0x5b8d11);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5b8d12:{NFSU2_TR(0x5b8d12);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5b8d13:{NFSU2_TR(0x5b8d13);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5b8d14:{NFSU2_TR(0x5b8d14);
w4(R+0,u32(0x8765b4ull));
}
B5b8d19:{NFSU2_TR(0x5b8d19);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5b8d1a:{NFSU2_TR(0x5b8d1a);
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
B5b8d1d:{NFSU2_TR(0x5b8d1d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b8d20:L5b8d20:{c.instructions+=7;NFSU2_TR(0x5b8d20);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5b8d21:{NFSU2_TR(0x5b8d21);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5b8d22:{NFSU2_TR(0x5b8d22);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5b8d23:{NFSU2_TR(0x5b8d23);
w4(R+0,u32(0x8765e8ull));
}
B5b8d28:{NFSU2_TR(0x5b8d28);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5b8d29:{NFSU2_TR(0x5b8d29);
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
B5b8d2c:{NFSU2_TR(0x5b8d2c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b8d2f:L5b8d2f:{c.instructions+=4;NFSU2_TR(0x5b8d2f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x230ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5b8d35:{NFSU2_TR(0x5b8d35);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x86ffb4ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B5b8d3c:{NFSU2_TR(0x5b8d3c);
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
B5b8d3e:{NFSU2_TR(0x5b8d3e);
if(r1(R+518)){{goto L5b8d52;}}
}
B5b8d40:L5b8d40:{c.instructions+=6;NFSU2_TR(0x5b8d40);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5b8d42:{NFSU2_TR(0x5b8d42);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b8d44:{NFSU2_TR(0x5b8d44);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b8d45:{NFSU2_TR(0x5b8d45);
u8 U[4];
w4(U+0,u32(0x8765c8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b8d4a:{NFSU2_TR(0x5b8d4a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b8d4b:{NFSU2_TR(0x5b8d4b);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b8d4eull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5b8d4e:L5b8d4e:{c.instructions+=2;NFSU2_TR(0x5b8d4e);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5b8d50:{NFSU2_TR(0x5b8d50);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5b8d20u);}goto L5b8d20;}}
}
B5b8d52:L5b8d52:{c.instructions+=4;NFSU2_TR(0x5b8d52);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B5b8d53:{NFSU2_TR(0x5b8d53);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x4ull))));
}
B5b8d56:{NFSU2_TR(0x5b8d56);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5b8d59:{NFSU2_TR(0x5b8d59);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5b8c10u);}goto L5b8c10;}}
}
B5b8d5f:L5b8d5f:{c.instructions+=6;NFSU2_TR(0x5b8d5f);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5b8d63:{NFSU2_TR(0x5b8d63);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x10ull))));
}
B5b8d66:{NFSU2_TR(0x5b8d66);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B5b8d69:{NFSU2_TR(0x5b8d69);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x30ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x30ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5b8d6c:{NFSU2_TR(0x5b8d6c);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5b8d70:{NFSU2_TR(0x5b8d70);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5b8c05u);}goto L5b8c05;}}
}
B5b8d76:L5b8d76:{c.instructions+=7;NFSU2_TR(0x5b8d76);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5b8d77:{NFSU2_TR(0x5b8d77);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5b8d78:{NFSU2_TR(0x5b8d78);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5b8d79:{NFSU2_TR(0x5b8d79);
w4(R+0,u32(0x783fe5ull));
}
B5b8d7e:{NFSU2_TR(0x5b8d7e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5b8d7f:{NFSU2_TR(0x5b8d7f);
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
B5b8d82:{NFSU2_TR(0x5b8d82);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b8d90:L5b8d90:{c.instructions+=7;NFSU2_TR(0x5b8d90);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b8d91:{NFSU2_TR(0x5b8d91);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b8d92:{NFSU2_TR(0x5b8d92);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b8d93:{NFSU2_TR(0x5b8d93);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b8d94:{NFSU2_TR(0x5b8d94);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5b8d96:{NFSU2_TR(0x5b8d96);
w4(R+4,u32(0x4full));
}
B5b8d9b:{NFSU2_TR(0x5b8d9b);
w4(R+28,u32(0x876708ull));
}
B5b8da0:L5b8da0:{c.instructions+=1;NFSU2_TR(0x5b8da0);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L5b8da2;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5b8da0u);}goto L5b8da0;}
}
B5b8da2:L5b8da2:{c.instructions+=6;NFSU2_TR(0x5b8da2);
__builtin_memmove((R+0),gp(0x86f354),4);
}
B5b8da7:{NFSU2_TR(0x5b8da7);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5b8da9:{NFSU2_TR(0x5b8da9);
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
B5b8dab:{NFSU2_TR(0x5b8dab);
s4(0x876708,u32(0x13cull));
}
B5b8db5:{NFSU2_TR(0x5b8db5);
w1(R+12,u8(0x1ull));
}
B5b8db7:{NFSU2_TR(0x5b8db7);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L5b8e0c;}}
}
B5b8db9:L5b8db9:{c.instructions+=3;NFSU2_TR(0x5b8db9);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B5b8dbd:{NFSU2_TR(0x5b8dbd);
__builtin_memmove((R+4),gp(0x86e89c),4);
}
B5b8dc3:{NFSU2_TR(0x5b8dc3);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5b8dc5:L5b8dc5:{c.instructions+=2;NFSU2_TR(0x5b8dc5);
u8 U[20];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(r4(R+20))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B5b8dc8:{NFSU2_TR(0x5b8dc8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b8dff;}}
}
B5b8dca:L5b8dca:{c.instructions+=2;NFSU2_TR(0x5b8dca);
u8 U[16];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5b8dcf:{NFSU2_TR(0x5b8dcf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b8dd9;}}
}
B5b8dd1:L5b8dd1:{c.instructions+=2;NFSU2_TR(0x5b8dd1);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5b8dd3:{NFSU2_TR(0x5b8dd3);
if(r1(R+518)){{goto L5b8dd9;}}
}
B5b8dd5:L5b8dd5:{c.instructions+=2;NFSU2_TR(0x5b8dd5);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
}
B5b8dd7:{NFSU2_TR(0x5b8dd7);
{goto L5b8dff;}
}
B5b8dd9:L5b8dd9:{c.instructions+=3;NFSU2_TR(0x5b8dd9);
u8 U[16];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B5b8ddd:{NFSU2_TR(0x5b8ddd);
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
B5b8ddf:{NFSU2_TR(0x5b8ddf);
if(r1(R+518)){{goto L5b8dff;}}
}
B5b8de1:L5b8de1:{c.instructions+=7;NFSU2_TR(0x5b8de1);
__builtin_memmove((R+4),gp(0x86e5c0),4);
}
B5b8de7:{NFSU2_TR(0x5b8de7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5b8de9:{NFSU2_TR(0x5b8de9);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b8deb:{NFSU2_TR(0x5b8deb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b8dec:{NFSU2_TR(0x5b8dec);
u8 U[4];
w4(U+0,u32(0x876708ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b8df1:{NFSU2_TR(0x5b8df1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b8df2:{NFSU2_TR(0x5b8df2);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b8df5ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5b8df5:L5b8df5:{c.instructions+=2;NFSU2_TR(0x5b8df5);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5b8df7:{NFSU2_TR(0x5b8df7);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5b8e18;}}
}
B5b8df9:L5b8df9:{c.instructions+=1;NFSU2_TR(0x5b8df9);
__builtin_memmove((R+4),gp(0x86e89c),4);
}
B5b8dff:L5b8dff:{c.instructions+=5;NFSU2_TR(0x5b8dff);
__builtin_memmove((R+0),gp(0x86f354),4);
}
B5b8e04:{NFSU2_TR(0x5b8e04);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B5b8e05:{NFSU2_TR(0x5b8e05);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x28ull))));
}
B5b8e08:{NFSU2_TR(0x5b8e08);
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
B5b8e0a:{NFSU2_TR(0x5b8e0a);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5b8dc5u);}goto L5b8dc5;}}
}
B5b8e0c:L5b8e0c:{c.instructions+=6;NFSU2_TR(0x5b8e0c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5b8e0d:{NFSU2_TR(0x5b8e0d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5b8e0e:{NFSU2_TR(0x5b8e0e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5b8e0f:{NFSU2_TR(0x5b8e0f);
w4(R+0,u32(0x783fe5ull));
}
B5b8e14:{NFSU2_TR(0x5b8e14);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5b8e15:{NFSU2_TR(0x5b8e15);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b8e18:L5b8e18:{c.instructions+=2;NFSU2_TR(0x5b8e18);
u8 U[4];
w4(U+0,u32(0x876728ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b8e1d:{NFSU2_TR(0x5b8e1d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b8e22ull));
TAIL_STATIC(0x43dbb0u,43d);
}
B5b8e22:L5b8e22:{c.instructions+=3;NFSU2_TR(0x5b8e22);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5b8e25:{NFSU2_TR(0x5b8e25);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x40ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x40ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5b8e28:{NFSU2_TR(0x5b8e28);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5b8e31;}}
}
B5b8e2a:L5b8e2a:{c.instructions+=1;NFSU2_TR(0x5b8e2a);
s1(0x876729,u8(0x0ull));
}
B5b8e31:L5b8e31:{c.instructions+=2;NFSU2_TR(0x5b8e31);
u8 U[8];
__builtin_memmove((U+0),gp(0x7fca00),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5b8e38:{NFSU2_TR(0x5b8e38);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b8e5c;}}
}
B5b8e3a:L5b8e3a:{c.instructions+=3;NFSU2_TR(0x5b8e3a);
u8 U[4];
w4(U+0,u32(0x7a3588ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b8e3f:{NFSU2_TR(0x5b8e3f);
u8 U[4];
w4(U+0,u32(0x876728ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b8e44:{NFSU2_TR(0x5b8e44);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b8e49ull));
TAIL_STATIC(0x43dc30u,43d);
}
B5b8e49:L5b8e49:{c.instructions+=3;NFSU2_TR(0x5b8e49);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5b8e4c:{NFSU2_TR(0x5b8e4c);
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
B5b8e4e:{NFSU2_TR(0x5b8e4e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b8e5c;}}
}
B5b8e50:L5b8e50:{c.instructions+=6;NFSU2_TR(0x5b8e50);
__builtin_memmove((R+0),gp(0x7fee30),4);
}
B5b8e55:{NFSU2_TR(0x5b8e55);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5b8e56:{NFSU2_TR(0x5b8e56);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5b8e57:{NFSU2_TR(0x5b8e57);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5b8e58:{NFSU2_TR(0x5b8e58);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5b8e59:{NFSU2_TR(0x5b8e59);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b8e5c:L5b8e5c:{c.instructions+=2;NFSU2_TR(0x5b8e5c);
u8 U[8];
__builtin_memmove((U+0),gp(0x7fca00),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5b8e63:{NFSU2_TR(0x5b8e63);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b8e87;}}
}
B5b8e65:L5b8e65:{c.instructions+=3;NFSU2_TR(0x5b8e65);
u8 U[4];
w4(U+0,u32(0x7a357cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b8e6a:{NFSU2_TR(0x5b8e6a);
u8 U[4];
w4(U+0,u32(0x876728ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b8e6f:{NFSU2_TR(0x5b8e6f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b8e74ull));
TAIL_STATIC(0x43dc30u,43d);
}
B5b8e74:L5b8e74:{c.instructions+=3;NFSU2_TR(0x5b8e74);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5b8e77:{NFSU2_TR(0x5b8e77);
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
B5b8e79:{NFSU2_TR(0x5b8e79);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b8e87;}}
}
B5b8e7b:L5b8e7b:{c.instructions+=6;NFSU2_TR(0x5b8e7b);
__builtin_memmove((R+0),gp(0x7fee34),4);
}
B5b8e80:{NFSU2_TR(0x5b8e80);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5b8e81:{NFSU2_TR(0x5b8e81);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5b8e82:{NFSU2_TR(0x5b8e82);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5b8e83:{NFSU2_TR(0x5b8e83);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5b8e84:{NFSU2_TR(0x5b8e84);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b8e87:L5b8e87:{c.instructions+=2;NFSU2_TR(0x5b8e87);
u8 U[8];
__builtin_memmove((U+0),gp(0x7fca00),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5b8e8e:{NFSU2_TR(0x5b8e8e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x5b900au,5b9);}
}
B5b8e94:L5b8e94:{c.instructions+=3;NFSU2_TR(0x5b8e94);
u8 U[4];
w4(U+0,u32(0x7a3574ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b8e99:{NFSU2_TR(0x5b8e99);
u8 U[4];
w4(U+0,u32(0x876728ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b8e9e:{NFSU2_TR(0x5b8e9e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b8ea3ull));
TAIL_STATIC(0x43dc30u,43d);
}
B5b8ea3:L5b8ea3:{c.instructions+=3;NFSU2_TR(0x5b8ea3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5b8ea6:{NFSU2_TR(0x5b8ea6);
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
B5b8ea8:{NFSU2_TR(0x5b8ea8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b8eb6;}}
}
B5b8eaa:L5b8eaa:{c.instructions+=6;NFSU2_TR(0x5b8eaa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5b8eab:{NFSU2_TR(0x5b8eab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5b8eac:{NFSU2_TR(0x5b8eac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5b8ead:{NFSU2_TR(0x5b8ead);
w4(R+0,u32(0x7a356cull));
}
B5b8eb2:{NFSU2_TR(0x5b8eb2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5b8eb3:{NFSU2_TR(0x5b8eb3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b8eb6:L5b8eb6:{c.instructions+=3;NFSU2_TR(0x5b8eb6);
u8 U[4];
w4(U+0,u32(0x7a2fd0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b8ebb:{NFSU2_TR(0x5b8ebb);
u8 U[4];
w4(U+0,u32(0x876728ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b8ec0:{NFSU2_TR(0x5b8ec0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b8ec5ull));
TAIL_STATIC(0x43dc30u,43d);
}
B5b8ec5:L5b8ec5:{c.instructions+=3;NFSU2_TR(0x5b8ec5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5b8ec8:{NFSU2_TR(0x5b8ec8);
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
B5b8eca:{NFSU2_TR(0x5b8eca);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b8ed8;}}
}
B5b8ecc:L5b8ecc:{c.instructions+=6;NFSU2_TR(0x5b8ecc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5b8ecd:{NFSU2_TR(0x5b8ecd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5b8ece:{NFSU2_TR(0x5b8ece);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5b8ecf:{NFSU2_TR(0x5b8ecf);
w4(R+0,u32(0x7a3564ull));
}
B5b8ed4:{NFSU2_TR(0x5b8ed4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5b8ed5:{NFSU2_TR(0x5b8ed5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b8ed8:L5b8ed8:{c.instructions+=3;NFSU2_TR(0x5b8ed8);
u8 U[4];
w4(U+0,u32(0x7a2fc8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b8edd:{NFSU2_TR(0x5b8edd);
u8 U[4];
w4(U+0,u32(0x876728ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b8ee2:{NFSU2_TR(0x5b8ee2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b8ee7ull));
TAIL_STATIC(0x43dc30u,43d);
}
B5b8ee7:L5b8ee7:{c.instructions+=3;NFSU2_TR(0x5b8ee7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5b8eea:{NFSU2_TR(0x5b8eea);
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
B5b8eec:{NFSU2_TR(0x5b8eec);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b8efa;}}
}
B5b8eee:L5b8eee:{c.instructions+=6;NFSU2_TR(0x5b8eee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5b8eef:{NFSU2_TR(0x5b8eef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5b8ef0:{NFSU2_TR(0x5b8ef0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5b8ef1:{NFSU2_TR(0x5b8ef1);
w4(R+0,u32(0x7a355cull));
}
B5b8ef6:{NFSU2_TR(0x5b8ef6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5b8ef7:{NFSU2_TR(0x5b8ef7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b8efa:L5b8efa:{c.instructions+=3;NFSU2_TR(0x5b8efa);
u8 U[4];
w4(U+0,u32(0x7a2e30ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b8eff:{NFSU2_TR(0x5b8eff);
u8 U[4];
w4(U+0,u32(0x876728ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b8f04:{NFSU2_TR(0x5b8f04);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b8f09ull));
TAIL_STATIC(0x43dc30u,43d);
}
B5b8f09:L5b8f09:{c.instructions+=3;NFSU2_TR(0x5b8f09);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5b8f0c:{NFSU2_TR(0x5b8f0c);
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
B5b8f0e:{NFSU2_TR(0x5b8f0e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b8f1c;}}
}
B5b8f10:L5b8f10:{c.instructions+=6;NFSU2_TR(0x5b8f10);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5b8f11:{NFSU2_TR(0x5b8f11);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5b8f12:{NFSU2_TR(0x5b8f12);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5b8f13:{NFSU2_TR(0x5b8f13);
w4(R+0,u32(0x7a3554ull));
}
B5b8f18:{NFSU2_TR(0x5b8f18);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5b8f19:{NFSU2_TR(0x5b8f19);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b8f1c:L5b8f1c:{c.instructions+=3;NFSU2_TR(0x5b8f1c);
u8 U[4];
w4(U+0,u32(0x7a2e28ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b8f21:{NFSU2_TR(0x5b8f21);
u8 U[4];
w4(U+0,u32(0x876728ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b8f26:{NFSU2_TR(0x5b8f26);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b8f2bull));
TAIL_STATIC(0x43dc30u,43d);
}
B5b8f2b:L5b8f2b:{c.instructions+=3;NFSU2_TR(0x5b8f2b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5b8f2e:{NFSU2_TR(0x5b8f2e);
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
B5b8f30:{NFSU2_TR(0x5b8f30);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b8f3e;}}
}
B5b8f32:L5b8f32:{c.instructions+=6;NFSU2_TR(0x5b8f32);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5b8f33:{NFSU2_TR(0x5b8f33);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5b8f34:{NFSU2_TR(0x5b8f34);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5b8f35:{NFSU2_TR(0x5b8f35);
w4(R+0,u32(0x7a354cull));
}
B5b8f3a:{NFSU2_TR(0x5b8f3a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5b8f3b:{NFSU2_TR(0x5b8f3b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b8f3e:L5b8f3e:{c.instructions+=3;NFSU2_TR(0x5b8f3e);
u8 U[4];
w4(U+0,u32(0x7a3540ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b8f43:{NFSU2_TR(0x5b8f43);
u8 U[4];
w4(U+0,u32(0x876728ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b8f48:{NFSU2_TR(0x5b8f48);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b8f4dull));
TAIL_STATIC(0x43dc30u,43d);
}
B5b8f4d:L5b8f4d:{c.instructions+=3;NFSU2_TR(0x5b8f4d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5b8f50:{NFSU2_TR(0x5b8f50);
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
B5b8f52:{NFSU2_TR(0x5b8f52);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b8f60;}}
}
B5b8f54:L5b8f54:{c.instructions+=6;NFSU2_TR(0x5b8f54);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5b8f55:{NFSU2_TR(0x5b8f55);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5b8f56:{NFSU2_TR(0x5b8f56);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5b8f57:{NFSU2_TR(0x5b8f57);
w4(R+0,u32(0x7a3530ull));
}
B5b8f5c:{NFSU2_TR(0x5b8f5c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5b8f5d:{NFSU2_TR(0x5b8f5d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b8f60:L5b8f60:{c.instructions+=3;NFSU2_TR(0x5b8f60);
u8 U[4];
w4(U+0,u32(0x7a3524ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b8f65:{NFSU2_TR(0x5b8f65);
u8 U[4];
w4(U+0,u32(0x876728ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b8f6a:{NFSU2_TR(0x5b8f6a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b8f6full));
TAIL_STATIC(0x43dc30u,43d);
}
B5b8f6f:L5b8f6f:{c.instructions+=3;NFSU2_TR(0x5b8f6f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5b8f72:{NFSU2_TR(0x5b8f72);
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
B5b8f74:{NFSU2_TR(0x5b8f74);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b8f82;}}
}
B5b8f76:L5b8f76:{c.instructions+=6;NFSU2_TR(0x5b8f76);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5b8f77:{NFSU2_TR(0x5b8f77);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5b8f78:{NFSU2_TR(0x5b8f78);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5b8f79:{NFSU2_TR(0x5b8f79);
w4(R+0,u32(0x7a3518ull));
}
B5b8f7e:{NFSU2_TR(0x5b8f7e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5b8f7f:{NFSU2_TR(0x5b8f7f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b8f82:L5b8f82:{c.instructions+=3;NFSU2_TR(0x5b8f82);
u8 U[4];
w4(U+0,u32(0x7a350cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b8f87:{NFSU2_TR(0x5b8f87);
u8 U[4];
w4(U+0,u32(0x876728ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b8f8c:{NFSU2_TR(0x5b8f8c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b8f91ull));
TAIL_STATIC(0x43dc30u,43d);
}
B5b8f91:L5b8f91:{c.instructions+=3;NFSU2_TR(0x5b8f91);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5b8f94:{NFSU2_TR(0x5b8f94);
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
B5b8f96:{NFSU2_TR(0x5b8f96);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b8fa4;}}
}
B5b8f98:L5b8f98:{c.instructions+=6;NFSU2_TR(0x5b8f98);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5b8f99:{NFSU2_TR(0x5b8f99);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5b8f9a:{NFSU2_TR(0x5b8f9a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5b8f9b:{NFSU2_TR(0x5b8f9b);
w4(R+0,u32(0x7a34fcull));
}
B5b8fa0:{NFSU2_TR(0x5b8fa0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5b8fa1:{NFSU2_TR(0x5b8fa1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b8fa4:L5b8fa4:{c.instructions+=3;NFSU2_TR(0x5b8fa4);
u8 U[4];
w4(U+0,u32(0x7a34ecull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b8fa9:{NFSU2_TR(0x5b8fa9);
u8 U[4];
w4(U+0,u32(0x876728ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b8fae:{NFSU2_TR(0x5b8fae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b8fb3ull));
TAIL_STATIC(0x43dc30u,43d);
}
B5b8fb3:L5b8fb3:{c.instructions+=3;NFSU2_TR(0x5b8fb3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5b8fb6:{NFSU2_TR(0x5b8fb6);
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
B5b8fb8:{NFSU2_TR(0x5b8fb8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b8fc6;}}
}
B5b8fba:L5b8fba:{c.instructions+=6;NFSU2_TR(0x5b8fba);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5b8fbb:{NFSU2_TR(0x5b8fbb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5b8fbc:{NFSU2_TR(0x5b8fbc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5b8fbd:{NFSU2_TR(0x5b8fbd);
w4(R+0,u32(0x7a34dcull));
}
B5b8fc2:{NFSU2_TR(0x5b8fc2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5b8fc3:{NFSU2_TR(0x5b8fc3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b8fc6:L5b8fc6:{c.instructions+=3;NFSU2_TR(0x5b8fc6);
u8 U[4];
w4(U+0,u32(0x7a34ccull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b8fcb:{NFSU2_TR(0x5b8fcb);
u8 U[4];
w4(U+0,u32(0x876728ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b8fd0:{NFSU2_TR(0x5b8fd0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b8fd5ull));
TAIL_STATIC(0x43dc30u,43d);
}
B5b8fd5:L5b8fd5:{c.instructions+=3;NFSU2_TR(0x5b8fd5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5b8fd8:{NFSU2_TR(0x5b8fd8);
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
B5b8fda:{NFSU2_TR(0x5b8fda);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5b8fe8;}}
}
B5b8fdc:L5b8fdc:{c.instructions+=6;NFSU2_TR(0x5b8fdc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5b8fdd:{NFSU2_TR(0x5b8fdd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5b8fde:{NFSU2_TR(0x5b8fde);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5b8fdf:{NFSU2_TR(0x5b8fdf);
w4(R+0,u32(0x7a34bcull));
}
B5b8fe4:{NFSU2_TR(0x5b8fe4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5b8fe5:{NFSU2_TR(0x5b8fe5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5b8fe8:L5b8fe8:{c.instructions+=3;NFSU2_TR(0x5b8fe8);
u8 U[4];
w4(U+0,u32(0x7a34b0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b8fed:{NFSU2_TR(0x5b8fed);
u8 U[4];
w4(U+0,u32(0x876728ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5b8ff2:{NFSU2_TR(0x5b8ff2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5b8ff7ull));
TAIL_STATIC(0x43dc30u,43d);
}
B5b8ff7:L5b8ff7:{c.instructions+=3;NFSU2_TR(0x5b8ff7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B5b8ffa:{NFSU2_TR(0x5b8ffa);
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
B5b8ffc:{NFSU2_TR(0x5b8ffc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x5b900au,5b9);}
}
B5b8ffe:L5b8ffe:{c.instructions+=2;NFSU2_TR(0x5b8ffe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5b8fff:{NFSU2_TR(0x5b8fff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
TAIL_STATIC(0x5b9000u,5b9);
}
XIT:NFSU2_TR_EXIT(0x5b8,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
