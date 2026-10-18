#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_6d7(u8* __restrict R,Cpu& c);
u32 body_6d9(u8* __restrict R,Cpu& c);
u32 body_6da(u8* __restrict R,Cpu& c);
u32 body_6dc(u8* __restrict R,Cpu& c);
u32 body_75f(u8* __restrict R,Cpu& c);
u32 body_81c(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x6d8,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x6d8,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_6d8(u8* __restrict R,Cpu& c);
u32 page_6d8(Cpu& c){return body_6d8(c.regs.data(),c);}
__attribute__((noinline)) u32 body_6d8(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x6d8001:goto L6d8001;
case 0x6d8002:c.instructions+=3;goto B6d8002;
case 0x6d8006:c.instructions+=2;goto B6d8006;
case 0x6d800a:c.instructions+=1;goto B6d800a;
case 0x6d8010:goto L6d8010;
case 0x6d8014:c.instructions+=10;goto B6d8014;
case 0x6d8018:c.instructions+=9;goto B6d8018;
case 0x6d801c:c.instructions+=8;goto B6d801c;
case 0x6d8020:c.instructions+=7;goto B6d8020;
case 0x6d8024:c.instructions+=6;goto B6d8024;
case 0x6d8025:c.instructions+=5;goto B6d8025;
case 0x6d8028:c.instructions+=4;goto B6d8028;
case 0x6d802a:c.instructions+=3;goto B6d802a;
case 0x6d802e:c.instructions+=2;goto B6d802e;
case 0x6d8032:c.instructions+=1;goto B6d8032;
case 0x6d8038:goto L6d8038;
case 0x6d803c:c.instructions+=3;goto B6d803c;
case 0x6d803e:c.instructions+=2;goto B6d803e;
case 0x6d803f:c.instructions+=1;goto B6d803f;
case 0x6d8041:goto L6d8041;
case 0x6d8046:c.instructions+=2;goto B6d8046;
case 0x6d8048:c.instructions+=1;goto B6d8048;
case 0x6d804d:goto L6d804d;
case 0x6d8052:c.instructions+=2;goto B6d8052;
case 0x6d8054:c.instructions+=1;goto B6d8054;
case 0x6d8059:goto L6d8059;
case 0x6d805c:goto L6d805c;
case 0x6d805e:c.instructions+=1;goto B6d805e;
case 0x6d8063:goto L6d8063;
case 0x6d8067:c.instructions+=5;goto B6d8067;
case 0x6d8068:c.instructions+=4;goto B6d8068;
case 0x6d8069:c.instructions+=3;goto B6d8069;
case 0x6d806a:c.instructions+=2;goto B6d806a;
case 0x6d8070:c.instructions+=1;goto B6d8070;
case 0x6d80b0:goto L6d80b0;
case 0x6d80b4:c.instructions+=20;goto B6d80b4;
case 0x6d80b5:c.instructions+=19;goto B6d80b5;
case 0x6d80b7:c.instructions+=18;goto B6d80b7;
case 0x6d80bb:c.instructions+=17;goto B6d80bb;
case 0x6d80bd:c.instructions+=16;goto B6d80bd;
case 0x6d80c0:c.instructions+=15;goto B6d80c0;
case 0x6d80c4:c.instructions+=14;goto B6d80c4;
case 0x6d80c7:c.instructions+=13;goto B6d80c7;
case 0x6d80c8:c.instructions+=12;goto B6d80c8;
case 0x6d80ca:c.instructions+=11;goto B6d80ca;
case 0x6d80cc:c.instructions+=10;goto B6d80cc;
case 0x6d80cf:c.instructions+=9;goto B6d80cf;
case 0x6d80d2:c.instructions+=8;goto B6d80d2;
case 0x6d80d5:c.instructions+=7;goto B6d80d5;
case 0x6d80d8:c.instructions+=6;goto B6d80d8;
case 0x6d80db:c.instructions+=5;goto B6d80db;
case 0x6d80de:c.instructions+=4;goto B6d80de;
case 0x6d80e1:c.instructions+=3;goto B6d80e1;
case 0x6d80e4:c.instructions+=2;goto B6d80e4;
case 0x6d80e7:c.instructions+=1;goto B6d80e7;
case 0x6d80ec:goto L6d80ec;
case 0x6d80ee:c.instructions+=1;goto B6d80ee;
case 0x6d80f3:goto L6d80f3;
case 0x6d80f5:c.instructions+=2;goto B6d80f5;
case 0x6d80f6:c.instructions+=1;goto B6d80f6;
case 0x6d8100:goto L6d8100;
case 0x6d8101:c.instructions+=2;goto B6d8101;
case 0x6d8103:c.instructions+=1;goto B6d8103;
case 0x6d8108:goto L6d8108;
case 0x6d810a:c.instructions+=1;goto B6d810a;
case 0x6d810f:goto L6d810f;
case 0x6d8112:c.instructions+=2;goto B6d8112;
case 0x6d8114:c.instructions+=1;goto B6d8114;
case 0x6d8116:goto L6d8116;
case 0x6d8119:c.instructions+=3;goto B6d8119;
case 0x6d811a:c.instructions+=2;goto B6d811a;
case 0x6d811b:c.instructions+=1;goto B6d811b;
case 0x6d8121:goto L6d8121;
case 0x6d8124:goto L6d8124;
case 0x6d812b:c.instructions+=2;goto B6d812b;
case 0x6d812c:c.instructions+=1;goto B6d812c;
case 0x6d8130:goto L6d8130;
case 0x6d8133:c.instructions+=4;goto B6d8133;
case 0x6d8134:c.instructions+=3;goto B6d8134;
case 0x6d8138:c.instructions+=2;goto B6d8138;
case 0x6d813a:c.instructions+=1;goto B6d813a;
case 0x6d813c:goto L6d813c;
case 0x6d813f:c.instructions+=6;goto B6d813f;
case 0x6d8142:c.instructions+=5;goto B6d8142;
case 0x6d8145:c.instructions+=4;goto B6d8145;
case 0x6d8147:c.instructions+=3;goto B6d8147;
case 0x6d8149:c.instructions+=2;goto B6d8149;
case 0x6d814b:c.instructions+=1;goto B6d814b;
case 0x6d814e:goto L6d814e;
case 0x6d8150:goto L6d8150;
case 0x6d8152:c.instructions+=1;goto B6d8152;
case 0x6d8154:goto L6d8154;
case 0x6d8157:c.instructions+=3;goto B6d8157;
case 0x6d815a:c.instructions+=2;goto B6d815a;
case 0x6d815c:c.instructions+=1;goto B6d815c;
case 0x6d815e:goto L6d815e;
case 0x6d8160:c.instructions+=2;goto B6d8160;
case 0x6d8162:c.instructions+=1;goto B6d8162;
case 0x6d8164:goto L6d8164;
case 0x6d8167:c.instructions+=7;goto B6d8167;
case 0x6d816a:c.instructions+=6;goto B6d816a;
case 0x6d816d:c.instructions+=5;goto B6d816d;
case 0x6d8170:c.instructions+=4;goto B6d8170;
case 0x6d8173:c.instructions+=3;goto B6d8173;
case 0x6d8175:c.instructions+=2;goto B6d8175;
case 0x6d8177:c.instructions+=1;goto B6d8177;
case 0x6d817a:goto L6d817a;
case 0x6d8180:c.instructions+=2;goto B6d8180;
case 0x6d8181:c.instructions+=1;goto B6d8181;
case 0x6d8183:goto L6d8183;
case 0x6d818d:goto L6d818d;
case 0x6d8190:goto L6d8190;
case 0x6d8195:c.instructions+=1;goto B6d8195;
case 0x6d81a0:goto L6d81a0;
case 0x6d81a5:c.instructions+=1;goto B6d81a5;
case 0x6d81b0:goto L6d81b0;
case 0x6d81b4:c.instructions+=3;goto B6d81b4;
case 0x6d81b9:c.instructions+=2;goto B6d81b9;
case 0x6d81be:c.instructions+=1;goto B6d81be;
case 0x6d81d0:goto L6d81d0;
case 0x6d81d4:c.instructions+=2;goto B6d81d4;
case 0x6d81d9:c.instructions+=1;goto B6d81d9;
case 0x6d81e0:goto L6d81e0;
case 0x6d81e4:c.instructions+=2;goto B6d81e4;
case 0x6d81e9:c.instructions+=1;goto B6d81e9;
case 0x6d81f0:goto L6d81f0;
case 0x6d81f5:c.instructions+=1;goto B6d81f5;
case 0x6d8200:goto L6d8200;
case 0x6d8201:c.instructions+=4;goto B6d8201;
case 0x6d8203:c.instructions+=3;goto B6d8203;
case 0x6d8208:c.instructions+=2;goto B6d8208;
case 0x6d820a:c.instructions+=1;goto B6d820a;
case 0x6d8210:goto L6d8210;
case 0x6d8213:c.instructions+=2;goto B6d8213;
case 0x6d8215:c.instructions+=1;goto B6d8215;
case 0x6d8217:goto L6d8217;
case 0x6d8218:c.instructions+=2;goto B6d8218;
case 0x6d821a:c.instructions+=1;goto B6d821a;
case 0x6d821f:goto L6d821f;
case 0x6d8221:goto L6d8221;
case 0x6d8223:goto L6d8223;
case 0x6d8226:c.instructions+=7;goto B6d8226;
case 0x6d8229:c.instructions+=6;goto B6d8229;
case 0x6d822c:c.instructions+=5;goto B6d822c;
case 0x6d822f:c.instructions+=4;goto B6d822f;
case 0x6d8234:c.instructions+=3;goto B6d8234;
case 0x6d8239:c.instructions+=2;goto B6d8239;
case 0x6d823a:c.instructions+=1;goto B6d823a;
case 0x6d8240:goto L6d8240;
case 0x6d8241:c.instructions+=5;goto B6d8241;
case 0x6d8242:c.instructions+=4;goto B6d8242;
case 0x6d8246:c.instructions+=3;goto B6d8246;
case 0x6d8247:c.instructions+=2;goto B6d8247;
case 0x6d8249:c.instructions+=1;goto B6d8249;
case 0x6d824e:goto L6d824e;
case 0x6d8254:c.instructions+=1;goto B6d8254;
case 0x6d8256:goto L6d8256;
case 0x6d8259:c.instructions+=2;goto B6d8259;
case 0x6d825b:c.instructions+=1;goto B6d825b;
case 0x6d825d:goto L6d825d;
case 0x6d8260:goto L6d8260;
case 0x6d8263:c.instructions+=2;goto B6d8263;
case 0x6d8265:c.instructions+=1;goto B6d8265;
case 0x6d8267:goto L6d8267;
case 0x6d826a:c.instructions+=3;goto B6d826a;
case 0x6d826d:c.instructions+=2;goto B6d826d;
case 0x6d826f:c.instructions+=1;goto B6d826f;
case 0x6d8271:goto L6d8271;
case 0x6d8276:goto L6d8276;
case 0x6d8277:c.instructions+=2;goto B6d8277;
case 0x6d8278:c.instructions+=1;goto B6d8278;
case 0x6d8280:goto L6d8280;
case 0x6d8281:c.instructions+=4;goto B6d8281;
case 0x6d8283:c.instructions+=3;goto B6d8283;
case 0x6d8288:c.instructions+=2;goto B6d8288;
case 0x6d828a:c.instructions+=1;goto B6d828a;
case 0x6d8290:goto L6d8290;
case 0x6d8293:c.instructions+=2;goto B6d8293;
case 0x6d8295:c.instructions+=1;goto B6d8295;
case 0x6d8297:goto L6d8297;
case 0x6d8298:c.instructions+=2;goto B6d8298;
case 0x6d829a:c.instructions+=1;goto B6d829a;
case 0x6d829f:goto L6d829f;
case 0x6d82a2:c.instructions+=6;goto B6d82a2;
case 0x6d82a5:c.instructions+=5;goto B6d82a5;
case 0x6d82ab:c.instructions+=4;goto B6d82ab;
case 0x6d82ae:c.instructions+=3;goto B6d82ae;
case 0x6d82b1:c.instructions+=2;goto B6d82b1;
case 0x6d82b2:c.instructions+=1;goto B6d82b2;
case 0x6d82b3:goto L6d82b3;
case 0x6d82b6:c.instructions+=7;goto B6d82b6;
case 0x6d82b9:c.instructions+=6;goto B6d82b9;
case 0x6d82bb:c.instructions+=5;goto B6d82bb;
case 0x6d82c1:c.instructions+=4;goto B6d82c1;
case 0x6d82c4:c.instructions+=3;goto B6d82c4;
case 0x6d82c7:c.instructions+=2;goto B6d82c7;
case 0x6d82c8:c.instructions+=1;goto B6d82c8;
case 0x6d82d0:goto L6d82d0;
case 0x6d82d3:c.instructions+=2;goto B6d82d3;
case 0x6d82d6:c.instructions+=1;goto B6d82d6;
case 0x6d82e0:goto L6d82e0;
case 0x6d82e1:c.instructions+=8;goto B6d82e1;
case 0x6d82e2:c.instructions+=7;goto B6d82e2;
case 0x6d82e4:c.instructions+=6;goto B6d82e4;
case 0x6d82e7:c.instructions+=5;goto B6d82e7;
case 0x6d82ea:c.instructions+=4;goto B6d82ea;
case 0x6d82eb:c.instructions+=3;goto B6d82eb;
case 0x6d82ef:c.instructions+=2;goto B6d82ef;
case 0x6d82f1:c.instructions+=1;goto B6d82f1;
case 0x6d82f3:goto L6d82f3;
case 0x6d82f9:c.instructions+=2;goto B6d82f9;
case 0x6d82fc:c.instructions+=1;goto B6d82fc;
case 0x6d82fe:goto L6d82fe;
case 0x6d8300:c.instructions+=2;goto B6d8300;
case 0x6d8302:c.instructions+=1;goto B6d8302;
case 0x6d8304:goto L6d8304;
case 0x6d830a:c.instructions+=2;goto B6d830a;
case 0x6d830c:c.instructions+=1;goto B6d830c;
case 0x6d830e:goto L6d830e;
case 0x6d8310:c.instructions+=2;goto B6d8310;
case 0x6d8312:c.instructions+=1;goto B6d8312;
case 0x6d8314:goto L6d8314;
case 0x6d831a:c.instructions+=2;goto B6d831a;
case 0x6d8320:c.instructions+=1;goto B6d8320;
case 0x6d8326:goto L6d8326;
case 0x6d8328:c.instructions+=1;goto B6d8328;
case 0x6d832d:goto L6d832d;
case 0x6d8332:c.instructions+=2;goto B6d8332;
case 0x6d8333:c.instructions+=1;goto B6d8333;
case 0x6d8339:goto L6d8339;
case 0x6d833c:c.instructions+=7;goto B6d833c;
case 0x6d833f:c.instructions+=6;goto B6d833f;
case 0x6d8342:c.instructions+=5;goto B6d8342;
case 0x6d8344:c.instructions+=4;goto B6d8344;
case 0x6d8345:c.instructions+=3;goto B6d8345;
case 0x6d8346:c.instructions+=2;goto B6d8346;
case 0x6d8347:c.instructions+=1;goto B6d8347;
case 0x6d8349:goto L6d8349;
case 0x6d8350:goto L6d8350;
case 0x6d8360:goto L6d8360;
case 0x6d8362:c.instructions+=7;goto B6d8362;
case 0x6d8364:c.instructions+=6;goto B6d8364;
case 0x6d8366:c.instructions+=5;goto B6d8366;
case 0x6d836c:c.instructions+=4;goto B6d836c;
case 0x6d836f:c.instructions+=3;goto B6d836f;
case 0x6d8372:c.instructions+=2;goto B6d8372;
case 0x6d8375:c.instructions+=1;goto B6d8375;
case 0x6d8380:goto L6d8380;
case 0x6d8381:c.instructions+=5;goto B6d8381;
case 0x6d8385:c.instructions+=4;goto B6d8385;
case 0x6d8387:c.instructions+=3;goto B6d8387;
case 0x6d8389:c.instructions+=2;goto B6d8389;
case 0x6d838b:c.instructions+=1;goto B6d838b;
case 0x6d838d:goto L6d838d;
case 0x6d838e:c.instructions+=1;goto B6d838e;
case 0x6d8390:goto L6d8390;
case 0x6d8392:c.instructions+=8;goto B6d8392;
case 0x6d8395:c.instructions+=7;goto B6d8395;
case 0x6d8398:c.instructions+=6;goto B6d8398;
case 0x6d839a:c.instructions+=5;goto B6d839a;
case 0x6d839d:c.instructions+=4;goto B6d839d;
case 0x6d839f:c.instructions+=3;goto B6d839f;
case 0x6d83a0:c.instructions+=2;goto B6d83a0;
case 0x6d83a2:c.instructions+=1;goto B6d83a2;
case 0x6d83a4:goto L6d83a4;
case 0x6d83a5:goto L6d83a5;
case 0x6d83a7:c.instructions+=4;goto B6d83a7;
case 0x6d83aa:c.instructions+=3;goto B6d83aa;
case 0x6d83ab:c.instructions+=2;goto B6d83ab;
case 0x6d83ad:c.instructions+=1;goto B6d83ad;
case 0x6d83b0:goto L6d83b0;
case 0x6d83b1:c.instructions+=6;goto B6d83b1;
case 0x6d83b2:c.instructions+=5;goto B6d83b2;
case 0x6d83b4:c.instructions+=4;goto B6d83b4;
case 0x6d83b7:c.instructions+=3;goto B6d83b7;
case 0x6d83b9:c.instructions+=2;goto B6d83b9;
case 0x6d83ba:c.instructions+=1;goto B6d83ba;
case 0x6d83bc:goto L6d83bc;
case 0x6d83c1:c.instructions+=6;goto B6d83c1;
case 0x6d83c3:c.instructions+=5;goto B6d83c3;
case 0x6d83c6:c.instructions+=4;goto B6d83c6;
case 0x6d83cb:c.instructions+=3;goto B6d83cb;
case 0x6d83cc:c.instructions+=2;goto B6d83cc;
case 0x6d83cf:c.instructions+=1;goto B6d83cf;
case 0x6d83d5:goto L6d83d5;
case 0x6d83d8:c.instructions+=5;goto B6d83d8;
case 0x6d83db:c.instructions+=4;goto B6d83db;
case 0x6d83de:c.instructions+=3;goto B6d83de;
case 0x6d83e0:c.instructions+=2;goto B6d83e0;
case 0x6d83e2:c.instructions+=1;goto B6d83e2;
case 0x6d83e4:goto L6d83e4;
case 0x6d83f0:goto L6d83f0;
case 0x6d83f3:c.instructions+=5;goto B6d83f3;
case 0x6d83fa:c.instructions+=4;goto B6d83fa;
case 0x6d83fd:c.instructions+=3;goto B6d83fd;
case 0x6d83fe:c.instructions+=2;goto B6d83fe;
case 0x6d8400:c.instructions+=1;goto B6d8400;
case 0x6d8402:goto L6d8402;
case 0x6d8406:c.instructions+=4;goto B6d8406;
case 0x6d8408:c.instructions+=3;goto B6d8408;
case 0x6d840a:c.instructions+=2;goto B6d840a;
case 0x6d840c:c.instructions+=1;goto B6d840c;
case 0x6d840e:goto L6d840e;
case 0x6d8410:goto L6d8410;
case 0x6d8412:c.instructions+=8;goto B6d8412;
case 0x6d8415:c.instructions+=7;goto B6d8415;
case 0x6d8418:c.instructions+=6;goto B6d8418;
case 0x6d841a:c.instructions+=5;goto B6d841a;
case 0x6d841d:c.instructions+=4;goto B6d841d;
case 0x6d841f:c.instructions+=3;goto B6d841f;
case 0x6d8420:c.instructions+=2;goto B6d8420;
case 0x6d8422:c.instructions+=1;goto B6d8422;
case 0x6d8424:goto L6d8424;
case 0x6d8427:c.instructions+=5;goto B6d8427;
case 0x6d8429:c.instructions+=4;goto B6d8429;
case 0x6d842b:c.instructions+=3;goto B6d842b;
case 0x6d842e:c.instructions+=2;goto B6d842e;
case 0x6d8432:c.instructions+=1;goto B6d8432;
case 0x6d8434:goto L6d8434;
case 0x6d8436:goto L6d8436;
case 0x6d8437:c.instructions+=2;goto B6d8437;
case 0x6d8439:c.instructions+=1;goto B6d8439;
case 0x6d843b:goto L6d843b;
case 0x6d843d:goto L6d843d;
case 0x6d8441:c.instructions+=1;goto B6d8441;
case 0x6d8443:goto L6d8443;
case 0x6d8447:c.instructions+=8;goto B6d8447;
case 0x6d844a:c.instructions+=7;goto B6d844a;
case 0x6d844c:c.instructions+=6;goto B6d844c;
case 0x6d844f:c.instructions+=5;goto B6d844f;
case 0x6d8450:c.instructions+=4;goto B6d8450;
case 0x6d8452:c.instructions+=3;goto B6d8452;
case 0x6d8454:c.instructions+=2;goto B6d8454;
case 0x6d8456:c.instructions+=1;goto B6d8456;
case 0x6d845c:goto L6d845c;
case 0x6d845d:c.instructions+=7;goto B6d845d;
case 0x6d8460:c.instructions+=6;goto B6d8460;
case 0x6d8463:c.instructions+=5;goto B6d8463;
case 0x6d846a:c.instructions+=4;goto B6d846a;
case 0x6d846f:c.instructions+=3;goto B6d846f;
case 0x6d8470:c.instructions+=2;goto B6d8470;
case 0x6d8473:c.instructions+=1;goto B6d8473;
case 0x6d8479:goto L6d8479;
case 0x6d847c:c.instructions+=5;goto B6d847c;
case 0x6d847f:c.instructions+=4;goto B6d847f;
case 0x6d8482:c.instructions+=3;goto B6d8482;
case 0x6d8484:c.instructions+=2;goto B6d8484;
case 0x6d8486:c.instructions+=1;goto B6d8486;
case 0x6d8488:goto L6d8488;
case 0x6d8490:goto L6d8490;
case 0x6d8493:c.instructions+=5;goto B6d8493;
case 0x6d849a:c.instructions+=4;goto B6d849a;
case 0x6d849d:c.instructions+=3;goto B6d849d;
case 0x6d849e:c.instructions+=2;goto B6d849e;
case 0x6d84a0:c.instructions+=1;goto B6d84a0;
case 0x6d84a2:goto L6d84a2;
case 0x6d84a4:c.instructions+=3;goto B6d84a4;
case 0x6d84a6:c.instructions+=2;goto B6d84a6;
case 0x6d84ac:c.instructions+=1;goto B6d84ac;
case 0x6d84ae:goto L6d84ae;
case 0x6d84b0:goto L6d84b0;
case 0x6d84b4:c.instructions+=5;goto B6d84b4;
case 0x6d84b5:c.instructions+=4;goto B6d84b5;
case 0x6d84b8:c.instructions+=3;goto B6d84b8;
case 0x6d84b9:c.instructions+=2;goto B6d84b9;
case 0x6d84bb:c.instructions+=1;goto B6d84bb;
case 0x6d84c0:goto L6d84c0;
case 0x6d84c1:c.instructions+=2;goto B6d84c1;
case 0x6d84c3:c.instructions+=1;goto B6d84c3;
case 0x6d84c5:goto L6d84c5;
case 0x6d84c7:c.instructions+=1;goto B6d84c7;
case 0x6d84c9:goto L6d84c9;
case 0x6d84d0:c.instructions+=3;goto B6d84d0;
case 0x6d84d1:c.instructions+=2;goto B6d84d1;
case 0x6d84d2:c.instructions+=1;goto B6d84d2;
case 0x6d84d8:goto L6d84d8;
case 0x6d84db:goto L6d84db;
case 0x6d84dc:goto L6d84dc;
case 0x6d84dd:c.instructions+=3;goto B6d84dd;
case 0x6d84de:c.instructions+=2;goto B6d84de;
case 0x6d84df:c.instructions+=1;goto B6d84df;
case 0x6d84f0:goto L6d84f0;
case 0x6d84f1:c.instructions+=8;goto B6d84f1;
case 0x6d84f2:c.instructions+=7;goto B6d84f2;
case 0x6d84f3:c.instructions+=6;goto B6d84f3;
case 0x6d84f4:c.instructions+=5;goto B6d84f4;
case 0x6d84f8:c.instructions+=4;goto B6d84f8;
case 0x6d84fa:c.instructions+=3;goto B6d84fa;
case 0x6d84fc:c.instructions+=2;goto B6d84fc;
case 0x6d84ff:c.instructions+=1;goto B6d84ff;
case 0x6d8500:goto L6d8500;
case 0x6d8502:c.instructions+=3;goto B6d8502;
case 0x6d8503:c.instructions+=2;goto B6d8503;
case 0x6d8505:c.instructions+=1;goto B6d8505;
case 0x6d8507:goto L6d8507;
case 0x6d8509:c.instructions+=4;goto B6d8509;
case 0x6d850c:c.instructions+=3;goto B6d850c;
case 0x6d8511:c.instructions+=2;goto B6d8511;
case 0x6d8512:c.instructions+=1;goto B6d8512;
case 0x6d8518:goto L6d8518;
case 0x6d851c:c.instructions+=7;goto B6d851c;
case 0x6d851f:c.instructions+=6;goto B6d851f;
case 0x6d8521:c.instructions+=5;goto B6d8521;
case 0x6d8524:c.instructions+=4;goto B6d8524;
case 0x6d8526:c.instructions+=3;goto B6d8526;
case 0x6d8528:c.instructions+=2;goto B6d8528;
case 0x6d852a:c.instructions+=1;goto B6d852a;
case 0x6d8530:goto L6d8530;
case 0x6d8532:c.instructions+=4;goto B6d8532;
case 0x6d8535:c.instructions+=3;goto B6d8535;
case 0x6d8536:c.instructions+=2;goto B6d8536;
case 0x6d8538:c.instructions+=1;goto B6d8538;
case 0x6d853a:goto L6d853a;
case 0x6d853b:c.instructions+=3;goto B6d853b;
case 0x6d853c:c.instructions+=2;goto B6d853c;
case 0x6d853e:c.instructions+=1;goto B6d853e;
case 0x6d8543:goto L6d8543;
case 0x6d8544:c.instructions+=5;goto B6d8544;
case 0x6d8545:c.instructions+=4;goto B6d8545;
case 0x6d8546:c.instructions+=3;goto B6d8546;
case 0x6d8548:c.instructions+=2;goto B6d8548;
case 0x6d8549:c.instructions+=1;goto B6d8549;
case 0x6d8550:goto L6d8550;
case 0x6d8553:c.instructions+=5;goto B6d8553;
case 0x6d8554:c.instructions+=4;goto B6d8554;
case 0x6d8557:c.instructions+=3;goto B6d8557;
case 0x6d8559:c.instructions+=2;goto B6d8559;
case 0x6d855d:c.instructions+=1;goto B6d855d;
case 0x6d855f:goto L6d855f;
case 0x6d8563:c.instructions+=5;goto B6d8563;
case 0x6d8566:c.instructions+=4;goto B6d8566;
case 0x6d8568:c.instructions+=3;goto B6d8568;
case 0x6d8569:c.instructions+=2;goto B6d8569;
case 0x6d856c:c.instructions+=1;goto B6d856c;
case 0x6d856f:goto L6d856f;
case 0x6d8573:c.instructions+=5;goto B6d8573;
case 0x6d8574:c.instructions+=4;goto B6d8574;
case 0x6d8575:c.instructions+=3;goto B6d8575;
case 0x6d8576:c.instructions+=2;goto B6d8576;
case 0x6d8577:c.instructions+=1;goto B6d8577;
case 0x6d857c:goto L6d857c;
case 0x6d857e:c.instructions+=1;goto B6d857e;
case 0x6d8586:goto L6d8586;
case 0x6d8589:c.instructions+=2;goto B6d8589;
case 0x6d858b:c.instructions+=1;goto B6d858b;
case 0x6d858d:goto L6d858d;
case 0x6d8591:c.instructions+=1;goto B6d8591;
case 0x6d8594:goto L6d8594;
case 0x6d8596:c.instructions+=3;goto B6d8596;
case 0x6d8598:c.instructions+=2;goto B6d8598;
case 0x6d859a:c.instructions+=1;goto B6d859a;
case 0x6d859c:goto L6d859c;
case 0x6d859e:c.instructions+=1;goto B6d859e;
case 0x6d85a0:goto L6d85a0;
case 0x6d85a3:c.instructions+=3;goto B6d85a3;
case 0x6d85a5:c.instructions+=2;goto B6d85a5;
case 0x6d85a8:c.instructions+=1;goto B6d85a8;
case 0x6d85aa:goto L6d85aa;
case 0x6d85ad:c.instructions+=3;goto B6d85ad;
case 0x6d85b0:c.instructions+=2;goto B6d85b0;
case 0x6d85b2:c.instructions+=1;goto B6d85b2;
case 0x6d85b4:goto L6d85b4;
case 0x6d85b6:c.instructions+=1;goto B6d85b6;
case 0x6d85b8:goto L6d85b8;
case 0x6d85ba:c.instructions+=1;goto B6d85ba;
case 0x6d85bd:goto L6d85bd;
case 0x6d85bf:c.instructions+=1;goto B6d85bf;
case 0x6d85c1:goto L6d85c1;
case 0x6d85c3:c.instructions+=1;goto B6d85c3;
case 0x6d85c5:goto L6d85c5;
case 0x6d85c8:c.instructions+=2;goto B6d85c8;
case 0x6d85cc:c.instructions+=1;goto B6d85cc;
case 0x6d85ce:goto L6d85ce;
case 0x6d85cf:c.instructions+=2;goto B6d85cf;
case 0x6d85d1:c.instructions+=1;goto B6d85d1;
case 0x6d85d3:goto L6d85d3;
case 0x6d85d5:goto L6d85d5;
case 0x6d85d9:c.instructions+=4;goto B6d85d9;
case 0x6d85dd:c.instructions+=3;goto B6d85dd;
case 0x6d85de:c.instructions+=2;goto B6d85de;
case 0x6d85e2:c.instructions+=1;goto B6d85e2;
case 0x6d85e4:goto L6d85e4;
case 0x6d85e8:c.instructions+=8;goto B6d85e8;
case 0x6d85e9:c.instructions+=7;goto B6d85e9;
case 0x6d85ea:c.instructions+=6;goto B6d85ea;
case 0x6d85eb:c.instructions+=5;goto B6d85eb;
case 0x6d85ee:c.instructions+=4;goto B6d85ee;
case 0x6d85f0:c.instructions+=3;goto B6d85f0;
case 0x6d85f1:c.instructions+=2;goto B6d85f1;
case 0x6d85f4:c.instructions+=1;goto B6d85f4;
case 0x6d85f7:goto L6d85f7;
case 0x6d85fb:c.instructions+=3;goto B6d85fb;
case 0x6d85fe:c.instructions+=2;goto B6d85fe;
case 0x6d8600:c.instructions+=1;goto B6d8600;
case 0x6d8602:goto L6d8602;
case 0x6d8606:c.instructions+=8;goto B6d8606;
case 0x6d8607:c.instructions+=7;goto B6d8607;
case 0x6d8608:c.instructions+=6;goto B6d8608;
case 0x6d8609:c.instructions+=5;goto B6d8609;
case 0x6d860c:c.instructions+=4;goto B6d860c;
case 0x6d860e:c.instructions+=3;goto B6d860e;
case 0x6d860f:c.instructions+=2;goto B6d860f;
case 0x6d8612:c.instructions+=1;goto B6d8612;
case 0x6d8615:goto L6d8615;
case 0x6d8619:c.instructions+=5;goto B6d8619;
case 0x6d861c:c.instructions+=4;goto B6d861c;
case 0x6d861f:c.instructions+=3;goto B6d861f;
case 0x6d8621:c.instructions+=2;goto B6d8621;
case 0x6d8623:c.instructions+=1;goto B6d8623;
case 0x6d8625:goto L6d8625;
case 0x6d8629:c.instructions+=1;goto B6d8629;
case 0x6d8630:goto L6d8630;
case 0x6d8632:c.instructions+=1;goto B6d8632;
case 0x6d8634:goto L6d8634;
case 0x6d8635:c.instructions+=2;goto B6d8635;
case 0x6d8636:c.instructions+=1;goto B6d8636;
case 0x6d8638:goto L6d8638;
case 0x6d863b:c.instructions+=3;goto B6d863b;
case 0x6d863e:c.instructions+=2;goto B6d863e;
case 0x6d8640:c.instructions+=1;goto B6d8640;
case 0x6d8642:goto L6d8642;
case 0x6d8643:c.instructions+=5;goto B6d8643;
case 0x6d8644:c.instructions+=4;goto B6d8644;
case 0x6d8645:c.instructions+=3;goto B6d8645;
case 0x6d8646:c.instructions+=2;goto B6d8646;
case 0x6d8649:c.instructions+=1;goto B6d8649;
case 0x6d8650:goto L6d8650;
case 0x6d8651:c.instructions+=4;goto B6d8651;
case 0x6d8653:c.instructions+=3;goto B6d8653;
case 0x6d8656:c.instructions+=2;goto B6d8656;
case 0x6d8658:c.instructions+=1;goto B6d8658;
case 0x6d865a:goto L6d865a;
case 0x6d865d:c.instructions+=4;goto B6d865d;
case 0x6d865e:c.instructions+=3;goto B6d865e;
case 0x6d8660:c.instructions+=2;goto B6d8660;
case 0x6d8662:c.instructions+=1;goto B6d8662;
case 0x6d8664:goto L6d8664;
case 0x6d8665:goto L6d8665;
case 0x6d8668:c.instructions+=3;goto B6d8668;
case 0x6d866b:c.instructions+=2;goto B6d866b;
case 0x6d866d:c.instructions+=1;goto B6d866d;
case 0x6d866f:goto L6d866f;
case 0x6d8672:c.instructions+=1;goto B6d8672;
case 0x6d8675:goto L6d8675;
case 0x6d8677:c.instructions+=3;goto B6d8677;
case 0x6d8678:c.instructions+=2;goto B6d8678;
case 0x6d867a:c.instructions+=1;goto B6d867a;
case 0x6d867c:goto L6d867c;
case 0x6d867e:c.instructions+=4;goto B6d867e;
case 0x6d8681:c.instructions+=3;goto B6d8681;
case 0x6d8682:c.instructions+=2;goto B6d8682;
case 0x6d8683:c.instructions+=1;goto B6d8683;
case 0x6d8689:goto L6d8689;
case 0x6d868c:goto L6d868c;
case 0x6d868f:c.instructions+=5;goto B6d868f;
case 0x6d8696:c.instructions+=4;goto B6d8696;
case 0x6d8699:c.instructions+=3;goto B6d8699;
case 0x6d869a:c.instructions+=2;goto B6d869a;
case 0x6d869c:c.instructions+=1;goto B6d869c;
case 0x6d869e:goto L6d869e;
case 0x6d869f:goto L6d869f;
case 0x6d86a0:goto L6d86a0;
case 0x6d86a3:c.instructions+=3;goto B6d86a3;
case 0x6d86a5:c.instructions+=2;goto B6d86a5;
case 0x6d86ab:c.instructions+=1;goto B6d86ab;
case 0x6d86ad:goto L6d86ad;
case 0x6d86b0:goto L6d86b0;
case 0x6d86b3:c.instructions+=5;goto B6d86b3;
case 0x6d86b6:c.instructions+=4;goto B6d86b6;
case 0x6d86b8:c.instructions+=3;goto B6d86b8;
case 0x6d86b9:c.instructions+=2;goto B6d86b9;
case 0x6d86bc:c.instructions+=1;goto B6d86bc;
case 0x6d86c2:goto L6d86c2;
case 0x6d86c5:c.instructions+=3;goto B6d86c5;
case 0x6d86c8:c.instructions+=2;goto B6d86c8;
case 0x6d86ca:c.instructions+=1;goto B6d86ca;
case 0x6d86cc:goto L6d86cc;
case 0x6d86d3:c.instructions+=2;goto B6d86d3;
case 0x6d86d4:c.instructions+=1;goto B6d86d4;
case 0x6d86e0:goto L6d86e0;
case 0x6d86e1:c.instructions+=2;goto B6d86e1;
case 0x6d86e3:c.instructions+=1;goto B6d86e3;
case 0x6d86e8:goto L6d86e8;
case 0x6d86eb:c.instructions+=2;goto B6d86eb;
case 0x6d86ed:c.instructions+=1;goto B6d86ed;
case 0x6d86ef:goto L6d86ef;
case 0x6d86f2:c.instructions+=4;goto B6d86f2;
case 0x6d86f5:c.instructions+=3;goto B6d86f5;
case 0x6d86f6:c.instructions+=2;goto B6d86f6;
case 0x6d86f7:c.instructions+=1;goto B6d86f7;
case 0x6d86fd:goto L6d86fd;
case 0x6d8700:c.instructions+=1;goto B6d8700;
case 0x6d8707:goto L6d8707;
case 0x6d8708:c.instructions+=1;goto B6d8708;
case 0x6d8710:goto L6d8710;
case 0x6d8714:c.instructions+=4;goto B6d8714;
case 0x6d871a:c.instructions+=3;goto B6d871a;
case 0x6d871c:c.instructions+=2;goto B6d871c;
case 0x6d871e:c.instructions+=1;goto B6d871e;
case 0x6d8720:goto L6d8720;
case 0x6d8725:c.instructions+=4;goto B6d8725;
case 0x6d8727:c.instructions+=3;goto B6d8727;
case 0x6d872b:c.instructions+=2;goto B6d872b;
case 0x6d872c:c.instructions+=1;goto B6d872c;
case 0x6d872e:goto L6d872e;
case 0x6d8732:c.instructions+=2;goto B6d8732;
case 0x6d8733:c.instructions+=1;goto B6d8733;
case 0x6d8735:goto L6d8735;
case 0x6d8738:c.instructions+=1;goto B6d8738;
case 0x6d8739:goto L6d8739;
case 0x6d873d:c.instructions+=3;goto B6d873d;
case 0x6d873e:c.instructions+=2;goto B6d873e;
case 0x6d8743:c.instructions+=1;goto B6d8743;
case 0x6d8748:goto L6d8748;
case 0x6d874b:goto L6d874b;
case 0x6d8750:goto L6d8750;
case 0x6d8754:c.instructions+=7;goto B6d8754;
case 0x6d8755:c.instructions+=6;goto B6d8755;
case 0x6d8756:c.instructions+=5;goto B6d8756;
case 0x6d875a:c.instructions+=4;goto B6d875a;
case 0x6d875b:c.instructions+=3;goto B6d875b;
case 0x6d875c:c.instructions+=2;goto B6d875c;
case 0x6d875e:c.instructions+=1;goto B6d875e;
case 0x6d8763:goto L6d8763;
case 0x6d8767:c.instructions+=4;goto B6d8767;
case 0x6d8768:c.instructions+=3;goto B6d8768;
case 0x6d8769:c.instructions+=2;goto B6d8769;
case 0x6d876c:c.instructions+=1;goto B6d876c;
case 0x6d8771:goto L6d8771;
case 0x6d8772:c.instructions+=2;goto B6d8772;
case 0x6d8773:c.instructions+=1;goto B6d8773;
case 0x6d8780:goto L6d8780;
case 0x6d8784:c.instructions+=4;goto B6d8784;
case 0x6d8788:c.instructions+=3;goto B6d8788;
case 0x6d8789:c.instructions+=2;goto B6d8789;
case 0x6d878a:c.instructions+=1;goto B6d878a;
case 0x6d878f:goto L6d878f;
case 0x6d8793:c.instructions+=4;goto B6d8793;
case 0x6d8795:c.instructions+=3;goto B6d8795;
case 0x6d8797:c.instructions+=2;goto B6d8797;
case 0x6d8799:c.instructions+=1;goto B6d8799;
case 0x6d87a0:goto L6d87a0;
case 0x6d87a4:c.instructions+=5;goto B6d87a4;
case 0x6d87a8:c.instructions+=4;goto B6d87a8;
case 0x6d87a9:c.instructions+=3;goto B6d87a9;
case 0x6d87aa:c.instructions+=2;goto B6d87aa;
case 0x6d87ad:c.instructions+=1;goto B6d87ad;
case 0x6d87b2:goto L6d87b2;
case 0x6d87b6:c.instructions+=4;goto B6d87b6;
case 0x6d87b8:c.instructions+=3;goto B6d87b8;
case 0x6d87ba:c.instructions+=2;goto B6d87ba;
case 0x6d87bc:c.instructions+=1;goto B6d87bc;
case 0x6d87c0:goto L6d87c0;
case 0x6d87c1:c.instructions+=3;goto B6d87c1;
case 0x6d87c2:c.instructions+=2;goto B6d87c2;
case 0x6d87c4:c.instructions+=1;goto B6d87c4;
case 0x6d87c9:goto L6d87c9;
case 0x6d87cc:c.instructions+=2;goto B6d87cc;
case 0x6d87ce:c.instructions+=1;goto B6d87ce;
case 0x6d87d3:goto L6d87d3;
case 0x6d87d5:c.instructions+=1;goto B6d87d5;
case 0x6d87da:goto L6d87da;
case 0x6d87db:c.instructions+=3;goto B6d87db;
case 0x6d87dd:c.instructions+=2;goto B6d87dd;
case 0x6d87de:c.instructions+=1;goto B6d87de;
case 0x6d87f0:goto L6d87f0;
case 0x6d87f2:c.instructions+=2;goto B6d87f2;
case 0x6d87f5:c.instructions+=1;goto B6d87f5;
case 0x6d8800:goto L6d8800;
case 0x6d8802:c.instructions+=1;goto B6d8802;
case 0x6d8808:goto L6d8808;
case 0x6d8810:goto L6d8810;
case 0x6d8815:c.instructions+=5;goto B6d8815;
case 0x6d8817:c.instructions+=4;goto B6d8817;
case 0x6d8819:c.instructions+=3;goto B6d8819;
case 0x6d881b:c.instructions+=2;goto B6d881b;
case 0x6d881c:c.instructions+=1;goto B6d881c;
case 0x6d8822:goto L6d8822;
case 0x6d8830:goto L6d8830;
case 0x6d8831:c.instructions+=2;goto B6d8831;
case 0x6d8832:c.instructions+=1;goto B6d8832;
case 0x6d8837:goto L6d8837;
case 0x6d8839:c.instructions+=2;goto B6d8839;
case 0x6d883c:c.instructions+=1;goto B6d883c;
case 0x6d8841:goto L6d8841;
case 0x6d8846:goto L6d8846;
case 0x6d884b:goto L6d884b;
case 0x6d8851:c.instructions+=6;goto B6d8851;
case 0x6d8853:c.instructions+=5;goto B6d8853;
case 0x6d8855:c.instructions+=4;goto B6d8855;
case 0x6d8857:c.instructions+=3;goto B6d8857;
case 0x6d8859:c.instructions+=2;goto B6d8859;
case 0x6d885e:c.instructions+=1;goto B6d885e;
case 0x6d8860:goto L6d8860;
case 0x6d8862:c.instructions+=1;goto B6d8862;
case 0x6d8864:goto L6d8864;
case 0x6d8865:c.instructions+=3;goto B6d8865;
case 0x6d886b:c.instructions+=2;goto B6d886b;
case 0x6d886c:c.instructions+=1;goto B6d886c;
case 0x6d8872:goto L6d8872;
case 0x6d8877:c.instructions+=1;goto B6d8877;
case 0x6d8879:goto L6d8879;
case 0x6d887e:c.instructions+=1;goto B6d887e;
case 0x6d8880:goto L6d8880;
case 0x6d8882:c.instructions+=5;goto B6d8882;
case 0x6d8884:c.instructions+=4;goto B6d8884;
case 0x6d8886:c.instructions+=3;goto B6d8886;
case 0x6d8888:c.instructions+=2;goto B6d8888;
case 0x6d888d:c.instructions+=1;goto B6d888d;
case 0x6d888f:goto L6d888f;
case 0x6d8891:c.instructions+=1;goto B6d8891;
case 0x6d8893:goto L6d8893;
case 0x6d8894:c.instructions+=1;goto B6d8894;
case 0x6d8895:goto L6d8895;
case 0x6d8896:c.instructions+=1;goto B6d8896;
case 0x6d88a0:goto L6d88a0;
case 0x6d88a1:c.instructions+=4;goto B6d88a1;
case 0x6d88a4:c.instructions+=3;goto B6d88a4;
case 0x6d88a7:c.instructions+=2;goto B6d88a7;
case 0x6d88a9:c.instructions+=1;goto B6d88a9;
case 0x6d88ab:goto L6d88ab;
case 0x6d88b1:goto L6d88b1;
case 0x6d88b5:c.instructions+=5;goto B6d88b5;
case 0x6d88b7:c.instructions+=4;goto B6d88b7;
case 0x6d88ba:c.instructions+=3;goto B6d88ba;
case 0x6d88bc:c.instructions+=2;goto B6d88bc;
case 0x6d88bf:c.instructions+=1;goto B6d88bf;
case 0x6d88c1:goto L6d88c1;
case 0x6d88c7:goto L6d88c7;
case 0x6d88cb:c.instructions+=3;goto B6d88cb;
case 0x6d88cd:c.instructions+=2;goto B6d88cd;
case 0x6d88ce:c.instructions+=1;goto B6d88ce;
case 0x6d88e0:goto L6d88e0;
case 0x6d88e5:c.instructions+=10;goto B6d88e5;
case 0x6d88e7:c.instructions+=9;goto B6d88e7;
case 0x6d88e8:c.instructions+=8;goto B6d88e8;
case 0x6d88ec:c.instructions+=7;goto B6d88ec;
case 0x6d88ed:c.instructions+=6;goto B6d88ed;
case 0x6d88f1:c.instructions+=5;goto B6d88f1;
case 0x6d88f2:c.instructions+=4;goto B6d88f2;
case 0x6d88f6:c.instructions+=3;goto B6d88f6;
case 0x6d88f7:c.instructions+=2;goto B6d88f7;
case 0x6d88fb:c.instructions+=1;goto B6d88fb;
case 0x6d88fd:goto L6d88fd;
case 0x6d8901:c.instructions+=6;goto B6d8901;
case 0x6d8902:c.instructions+=5;goto B6d8902;
case 0x6d8903:c.instructions+=4;goto B6d8903;
case 0x6d8904:c.instructions+=3;goto B6d8904;
case 0x6d8905:c.instructions+=2;goto B6d8905;
case 0x6d8906:c.instructions+=1;goto B6d8906;
case 0x6d890b:goto L6d890b;
case 0x6d890e:c.instructions+=2;goto B6d890e;
case 0x6d8910:c.instructions+=1;goto B6d8910;
case 0x6d8912:goto L6d8912;
case 0x6d8916:c.instructions+=5;goto B6d8916;
case 0x6d8917:c.instructions+=4;goto B6d8917;
case 0x6d8918:c.instructions+=3;goto B6d8918;
case 0x6d8919:c.instructions+=2;goto B6d8919;
case 0x6d891a:c.instructions+=1;goto B6d891a;
case 0x6d891d:goto L6d891d;
case 0x6d891e:c.instructions+=4;goto B6d891e;
case 0x6d891f:c.instructions+=3;goto B6d891f;
case 0x6d8920:c.instructions+=2;goto B6d8920;
case 0x6d8921:c.instructions+=1;goto B6d8921;
case 0x6d8927:goto L6d8927;
case 0x6d8928:c.instructions+=4;goto B6d8928;
case 0x6d8929:c.instructions+=3;goto B6d8929;
case 0x6d892a:c.instructions+=2;goto B6d892a;
case 0x6d892b:c.instructions+=1;goto B6d892b;
case 0x6d8930:goto L6d8930;
case 0x6d8934:c.instructions+=5;goto B6d8934;
case 0x6d893a:c.instructions+=4;goto B6d893a;
case 0x6d8940:c.instructions+=3;goto B6d8940;
case 0x6d8943:c.instructions+=2;goto B6d8943;
case 0x6d8945:c.instructions+=1;goto B6d8945;
case 0x6d8947:goto L6d8947;
case 0x6d894c:c.instructions+=3;goto B6d894c;
case 0x6d8951:c.instructions+=2;goto B6d8951;
case 0x6d8953:c.instructions+=1;goto B6d8953;
case 0x6d8955:goto L6d8955;
case 0x6d895c:c.instructions+=5;goto B6d895c;
case 0x6d895e:c.instructions+=4;goto B6d895e;
case 0x6d895f:c.instructions+=3;goto B6d895f;
case 0x6d8961:c.instructions+=2;goto B6d8961;
case 0x6d8962:c.instructions+=1;goto B6d8962;
case 0x6d8968:goto L6d8968;
case 0x6d896a:c.instructions+=1;goto B6d896a;
case 0x6d8970:goto L6d8970;
case 0x6d8976:c.instructions+=4;goto B6d8976;
case 0x6d897a:c.instructions+=3;goto B6d897a;
case 0x6d897c:c.instructions+=2;goto B6d897c;
case 0x6d897e:c.instructions+=1;goto B6d897e;
case 0x6d8990:goto L6d8990;
case 0x6d8993:c.instructions+=5;goto B6d8993;
case 0x6d8996:c.instructions+=4;goto B6d8996;
case 0x6d899a:c.instructions+=3;goto B6d899a;
case 0x6d899c:c.instructions+=2;goto B6d899c;
case 0x6d899e:c.instructions+=1;goto B6d899e;
case 0x6d89b0:goto L6d89b0;
case 0x6d89b5:c.instructions+=4;goto B6d89b5;
case 0x6d89b6:c.instructions+=3;goto B6d89b6;
case 0x6d89ba:c.instructions+=2;goto B6d89ba;
case 0x6d89bc:c.instructions+=1;goto B6d89bc;
case 0x6d89be:goto L6d89be;
case 0x6d89c3:goto L6d89c3;
case 0x6d89c8:c.instructions+=6;goto B6d89c8;
case 0x6d89ca:c.instructions+=5;goto B6d89ca;
case 0x6d89cb:c.instructions+=4;goto B6d89cb;
case 0x6d89d0:c.instructions+=3;goto B6d89d0;
case 0x6d89d1:c.instructions+=2;goto B6d89d1;
case 0x6d89d7:c.instructions+=1;goto B6d89d7;
case 0x6d89dd:goto L6d89dd;
case 0x6d89df:c.instructions+=2;goto B6d89df;
case 0x6d89e0:c.instructions+=1;goto B6d89e0;
case 0x6d89f0:goto L6d89f0;
case 0x6d89f3:c.instructions+=8;goto B6d89f3;
case 0x6d89f4:c.instructions+=7;goto B6d89f4;
case 0x6d89f5:c.instructions+=6;goto B6d89f5;
case 0x6d89f6:c.instructions+=5;goto B6d89f6;
case 0x6d89f7:c.instructions+=4;goto B6d89f7;
case 0x6d89f9:c.instructions+=3;goto B6d89f9;
case 0x6d89fc:c.instructions+=2;goto B6d89fc;
case 0x6d8a00:c.instructions+=1;goto B6d8a00;
case 0x6d8a02:goto L6d8a02;
case 0x6d8a07:c.instructions+=3;goto B6d8a07;
case 0x6d8a0c:c.instructions+=2;goto B6d8a0c;
case 0x6d8a0e:c.instructions+=1;goto B6d8a0e;
case 0x6d8a10:goto L6d8a10;
case 0x6d8a15:c.instructions+=2;goto B6d8a15;
case 0x6d8a1a:c.instructions+=1;goto B6d8a1a;
case 0x6d8a1c:goto L6d8a1c;
case 0x6d8a1e:c.instructions+=6;goto B6d8a1e;
case 0x6d8a20:c.instructions+=5;goto B6d8a20;
case 0x6d8a24:c.instructions+=4;goto B6d8a24;
case 0x6d8a28:c.instructions+=3;goto B6d8a28;
case 0x6d8a2c:c.instructions+=2;goto B6d8a2c;
case 0x6d8a30:c.instructions+=1;goto B6d8a30;
case 0x6d8a36:goto L6d8a36;
case 0x6d8a40:goto L6d8a40;
case 0x6d8a42:c.instructions+=1;goto B6d8a42;
case 0x6d8a50:goto L6d8a50;
case 0x6d8a53:c.instructions+=14;goto B6d8a53;
case 0x6d8a5d:c.instructions+=13;goto B6d8a5d;
case 0x6d8a60:c.instructions+=12;goto B6d8a60;
case 0x6d8a65:c.instructions+=11;goto B6d8a65;
case 0x6d8a67:c.instructions+=10;goto B6d8a67;
case 0x6d8a69:c.instructions+=9;goto B6d8a69;
case 0x6d8a6a:c.instructions+=8;goto B6d8a6a;
case 0x6d8a6d:c.instructions+=7;goto B6d8a6d;
case 0x6d8a6e:c.instructions+=6;goto B6d8a6e;
case 0x6d8a71:c.instructions+=5;goto B6d8a71;
case 0x6d8a77:c.instructions+=4;goto B6d8a77;
case 0x6d8a79:c.instructions+=3;goto B6d8a79;
case 0x6d8a7a:c.instructions+=2;goto B6d8a7a;
case 0x6d8a7b:c.instructions+=1;goto B6d8a7b;
case 0x6d8a7e:goto L6d8a7e;
case 0x6d8a80:c.instructions+=1;goto B6d8a80;
case 0x6d8a82:goto L6d8a82;
case 0x6d8a86:c.instructions+=3;goto B6d8a86;
case 0x6d8a87:c.instructions+=2;goto B6d8a87;
case 0x6d8a89:c.instructions+=1;goto B6d8a89;
case 0x6d8a8b:goto L6d8a8b;
case 0x6d8a8d:goto L6d8a8d;
case 0x6d8a90:c.instructions+=3;goto B6d8a90;
case 0x6d8a93:c.instructions+=2;goto B6d8a93;
case 0x6d8a97:c.instructions+=1;goto B6d8a97;
case 0x6d8a9b:goto L6d8a9b;
case 0x6d8a9f:c.instructions+=2;goto B6d8a9f;
case 0x6d8aa1:c.instructions+=1;goto B6d8aa1;
case 0x6d8aa3:goto L6d8aa3;
case 0x6d8aa7:c.instructions+=2;goto B6d8aa7;
case 0x6d8aa9:c.instructions+=1;goto B6d8aa9;
case 0x6d8aab:goto L6d8aab;
case 0x6d8aaf:c.instructions+=6;goto B6d8aaf;
case 0x6d8ab3:c.instructions+=5;goto B6d8ab3;
case 0x6d8ab4:c.instructions+=4;goto B6d8ab4;
case 0x6d8ab7:c.instructions+=3;goto B6d8ab7;
case 0x6d8ab9:c.instructions+=2;goto B6d8ab9;
case 0x6d8abd:c.instructions+=1;goto B6d8abd;
case 0x6d8abf:goto L6d8abf;
case 0x6d8ac2:c.instructions+=2;goto B6d8ac2;
case 0x6d8ac6:c.instructions+=1;goto B6d8ac6;
case 0x6d8acc:goto L6d8acc;
case 0x6d8ad0:c.instructions+=2;goto B6d8ad0;
case 0x6d8ad2:c.instructions+=1;goto B6d8ad2;
case 0x6d8ad8:goto L6d8ad8;
case 0x6d8adc:c.instructions+=3;goto B6d8adc;
case 0x6d8ade:c.instructions+=2;goto B6d8ade;
case 0x6d8ae6:c.instructions+=1;goto B6d8ae6;
case 0x6d8aec:goto L6d8aec;
case 0x6d8af1:goto L6d8af1;
case 0x6d8af3:c.instructions+=2;goto B6d8af3;
case 0x6d8af8:c.instructions+=1;goto B6d8af8;
case 0x6d8b00:goto L6d8b00;
case 0x6d8b03:c.instructions+=14;goto B6d8b03;
case 0x6d8b09:c.instructions+=13;goto B6d8b09;
case 0x6d8b10:c.instructions+=12;goto B6d8b10;
case 0x6d8b15:c.instructions+=11;goto B6d8b15;
case 0x6d8b17:c.instructions+=10;goto B6d8b17;
case 0x6d8b19:c.instructions+=9;goto B6d8b19;
case 0x6d8b1a:c.instructions+=8;goto B6d8b1a;
case 0x6d8b1d:c.instructions+=7;goto B6d8b1d;
case 0x6d8b1e:c.instructions+=6;goto B6d8b1e;
case 0x6d8b21:c.instructions+=5;goto B6d8b21;
case 0x6d8b27:c.instructions+=4;goto B6d8b27;
case 0x6d8b28:c.instructions+=3;goto B6d8b28;
case 0x6d8b29:c.instructions+=2;goto B6d8b29;
case 0x6d8b2a:c.instructions+=1;goto B6d8b2a;
case 0x6d8b2d:goto L6d8b2d;
case 0x6d8b2f:c.instructions+=1;goto B6d8b2f;
case 0x6d8b31:goto L6d8b31;
case 0x6d8b35:c.instructions+=3;goto B6d8b35;
case 0x6d8b36:c.instructions+=2;goto B6d8b36;
case 0x6d8b38:c.instructions+=1;goto B6d8b38;
case 0x6d8b3a:goto L6d8b3a;
case 0x6d8b3c:goto L6d8b3c;
case 0x6d8b3f:c.instructions+=3;goto B6d8b3f;
case 0x6d8b46:c.instructions+=2;goto B6d8b46;
case 0x6d8b4a:c.instructions+=1;goto B6d8b4a;
case 0x6d8b4e:goto L6d8b4e;
case 0x6d8b52:c.instructions+=2;goto B6d8b52;
case 0x6d8b54:c.instructions+=1;goto B6d8b54;
case 0x6d8b56:goto L6d8b56;
case 0x6d8b5a:c.instructions+=2;goto B6d8b5a;
case 0x6d8b5c:c.instructions+=1;goto B6d8b5c;
case 0x6d8b5e:goto L6d8b5e;
case 0x6d8b62:c.instructions+=6;goto B6d8b62;
case 0x6d8b66:c.instructions+=5;goto B6d8b66;
case 0x6d8b67:c.instructions+=4;goto B6d8b67;
case 0x6d8b6a:c.instructions+=3;goto B6d8b6a;
case 0x6d8b6c:c.instructions+=2;goto B6d8b6c;
case 0x6d8b70:c.instructions+=1;goto B6d8b70;
case 0x6d8b76:goto L6d8b76;
case 0x6d8b7a:c.instructions+=2;goto B6d8b7a;
case 0x6d8b7c:c.instructions+=1;goto B6d8b7c;
case 0x6d8b82:goto L6d8b82;
case 0x6d8b86:c.instructions+=2;goto B6d8b86;
case 0x6d8b88:c.instructions+=1;goto B6d8b88;
case 0x6d8b8e:goto L6d8b8e;
case 0x6d8b91:c.instructions+=4;goto B6d8b91;
case 0x6d8b96:c.instructions+=3;goto B6d8b96;
case 0x6d8b99:c.instructions+=2;goto B6d8b99;
case 0x6d8b9c:c.instructions+=1;goto B6d8b9c;
case 0x6d8b9f:goto L6d8b9f;
case 0x6d8ba3:c.instructions+=11;goto B6d8ba3;
case 0x6d8ba5:c.instructions+=10;goto B6d8ba5;
case 0x6d8bab:c.instructions+=9;goto B6d8bab;
case 0x6d8bae:c.instructions+=8;goto B6d8bae;
case 0x6d8bb1:c.instructions+=7;goto B6d8bb1;
case 0x6d8bb5:c.instructions+=6;goto B6d8bb5;
case 0x6d8bb8:c.instructions+=5;goto B6d8bb8;
case 0x6d8bbb:c.instructions+=4;goto B6d8bbb;
case 0x6d8bc0:c.instructions+=3;goto B6d8bc0;
case 0x6d8bc4:c.instructions+=2;goto B6d8bc4;
case 0x6d8bc6:c.instructions+=1;goto B6d8bc6;
case 0x6d8bc8:goto L6d8bc8;
case 0x6d8bcd:c.instructions+=9;goto B6d8bcd;
case 0x6d8bce:c.instructions+=8;goto B6d8bce;
case 0x6d8bd0:c.instructions+=7;goto B6d8bd0;
case 0x6d8bd1:c.instructions+=6;goto B6d8bd1;
case 0x6d8bd2:c.instructions+=5;goto B6d8bd2;
case 0x6d8bd8:c.instructions+=4;goto B6d8bd8;
case 0x6d8be2:c.instructions+=3;goto B6d8be2;
case 0x6d8be3:c.instructions+=2;goto B6d8be3;
case 0x6d8be6:c.instructions+=1;goto B6d8be6;
case 0x6d8be9:goto L6d8be9;
case 0x6d8bee:goto L6d8bee;
case 0x6d8bf1:c.instructions+=4;goto B6d8bf1;
case 0x6d8bf7:c.instructions+=3;goto B6d8bf7;
case 0x6d8bf8:c.instructions+=2;goto B6d8bf8;
case 0x6d8bfd:c.instructions+=1;goto B6d8bfd;
case 0x6d8c03:goto L6d8c03;
case 0x6d8c04:c.instructions+=1;goto B6d8c04;
case 0x6d8c06:goto L6d8c06;
case 0x6d8c10:goto L6d8c10;
case 0x6d8c15:goto L6d8c15;
case 0x6d8c17:c.instructions+=1;goto B6d8c17;
case 0x6d8c1d:goto L6d8c1d;
case 0x6d8c20:c.instructions+=4;goto B6d8c20;
case 0x6d8c23:c.instructions+=3;goto B6d8c23;
case 0x6d8c25:c.instructions+=2;goto B6d8c25;
case 0x6d8c2b:c.instructions+=1;goto B6d8c2b;
case 0x6d8c31:goto L6d8c31;
case 0x6d8c33:c.instructions+=1;goto B6d8c33;
case 0x6d8c39:goto L6d8c39;
case 0x6d8c3a:c.instructions+=7;goto B6d8c3a;
case 0x6d8c3c:c.instructions+=6;goto B6d8c3c;
case 0x6d8c3d:c.instructions+=5;goto B6d8c3d;
case 0x6d8c3e:c.instructions+=4;goto B6d8c3e;
case 0x6d8c48:c.instructions+=3;goto B6d8c48;
case 0x6d8c49:c.instructions+=2;goto B6d8c49;
case 0x6d8c4c:c.instructions+=1;goto B6d8c4c;
case 0x6d8c4f:goto L6d8c4f;
case 0x6d8c54:c.instructions+=2;goto B6d8c54;
case 0x6d8c59:c.instructions+=1;goto B6d8c59;
case 0x6d8c60:goto L6d8c60;
case 0x6d8c63:c.instructions+=1;goto B6d8c63;
case 0x6d8c65:goto L6d8c65;
case 0x6d8c68:c.instructions+=3;goto B6d8c68;
case 0x6d8c6a:c.instructions+=2;goto B6d8c6a;
case 0x6d8c6d:c.instructions+=1;goto B6d8c6d;
case 0x6d8c6f:goto L6d8c6f;
case 0x6d8c72:c.instructions+=2;goto B6d8c72;
case 0x6d8c75:c.instructions+=1;goto B6d8c75;
case 0x6d8c77:goto L6d8c77;
case 0x6d8c7a:c.instructions+=2;goto B6d8c7a;
case 0x6d8c7d:c.instructions+=1;goto B6d8c7d;
case 0x6d8c7f:goto L6d8c7f;
case 0x6d8c82:c.instructions+=1;goto B6d8c82;
case 0x6d8c88:goto L6d8c88;
case 0x6d8c8b:c.instructions+=1;goto B6d8c8b;
case 0x6d8c8d:goto L6d8c8d;
case 0x6d8c90:c.instructions+=3;goto B6d8c90;
case 0x6d8c93:c.instructions+=2;goto B6d8c93;
case 0x6d8c96:c.instructions+=1;goto B6d8c96;
case 0x6d8c98:goto L6d8c98;
case 0x6d8c9b:c.instructions+=2;goto B6d8c9b;
case 0x6d8c9e:c.instructions+=1;goto B6d8c9e;
case 0x6d8ca0:goto L6d8ca0;
case 0x6d8ca3:c.instructions+=2;goto B6d8ca3;
case 0x6d8ca6:c.instructions+=1;goto B6d8ca6;
case 0x6d8ca8:goto L6d8ca8;
case 0x6d8cab:c.instructions+=1;goto B6d8cab;
case 0x6d8cb1:goto L6d8cb1;
case 0x6d8cb4:c.instructions+=1;goto B6d8cb4;
case 0x6d8cb6:goto L6d8cb6;
case 0x6d8cb9:c.instructions+=3;goto B6d8cb9;
case 0x6d8cbc:c.instructions+=2;goto B6d8cbc;
case 0x6d8cbf:c.instructions+=1;goto B6d8cbf;
case 0x6d8cc1:goto L6d8cc1;
case 0x6d8cc4:c.instructions+=2;goto B6d8cc4;
case 0x6d8cc7:c.instructions+=1;goto B6d8cc7;
case 0x6d8cc9:goto L6d8cc9;
case 0x6d8ccc:c.instructions+=2;goto B6d8ccc;
case 0x6d8ccf:c.instructions+=1;goto B6d8ccf;
case 0x6d8cd1:goto L6d8cd1;
case 0x6d8cd4:c.instructions+=1;goto B6d8cd4;
case 0x6d8cda:goto L6d8cda;
case 0x6d8cdd:c.instructions+=1;goto B6d8cdd;
case 0x6d8cdf:goto L6d8cdf;
case 0x6d8ce2:c.instructions+=3;goto B6d8ce2;
case 0x6d8ce5:c.instructions+=2;goto B6d8ce5;
case 0x6d8ce8:c.instructions+=1;goto B6d8ce8;
case 0x6d8cea:goto L6d8cea;
case 0x6d8ced:c.instructions+=2;goto B6d8ced;
case 0x6d8cf0:c.instructions+=1;goto B6d8cf0;
case 0x6d8cf2:goto L6d8cf2;
case 0x6d8cf5:c.instructions+=2;goto B6d8cf5;
case 0x6d8cf8:c.instructions+=1;goto B6d8cf8;
case 0x6d8cfa:goto L6d8cfa;
case 0x6d8cfd:c.instructions+=1;goto B6d8cfd;
case 0x6d8d03:goto L6d8d03;
case 0x6d8d06:c.instructions+=1;goto B6d8d06;
case 0x6d8d08:goto L6d8d08;
case 0x6d8d0b:c.instructions+=3;goto B6d8d0b;
case 0x6d8d0e:c.instructions+=2;goto B6d8d0e;
case 0x6d8d11:c.instructions+=1;goto B6d8d11;
case 0x6d8d13:goto L6d8d13;
case 0x6d8d16:c.instructions+=2;goto B6d8d16;
case 0x6d8d19:c.instructions+=1;goto B6d8d19;
case 0x6d8d1b:goto L6d8d1b;
case 0x6d8d1e:c.instructions+=2;goto B6d8d1e;
case 0x6d8d21:c.instructions+=1;goto B6d8d21;
case 0x6d8d23:goto L6d8d23;
case 0x6d8d26:c.instructions+=1;goto B6d8d26;
case 0x6d8d2c:goto L6d8d2c;
case 0x6d8d2f:c.instructions+=1;goto B6d8d2f;
case 0x6d8d31:goto L6d8d31;
case 0x6d8d34:c.instructions+=3;goto B6d8d34;
case 0x6d8d37:c.instructions+=2;goto B6d8d37;
case 0x6d8d3a:c.instructions+=1;goto B6d8d3a;
case 0x6d8d3c:goto L6d8d3c;
case 0x6d8d3f:c.instructions+=2;goto B6d8d3f;
case 0x6d8d42:c.instructions+=1;goto B6d8d42;
case 0x6d8d44:goto L6d8d44;
case 0x6d8d4a:c.instructions+=2;goto B6d8d4a;
case 0x6d8d4d:c.instructions+=1;goto B6d8d4d;
case 0x6d8d4f:goto L6d8d4f;
case 0x6d8d55:c.instructions+=1;goto B6d8d55;
case 0x6d8d5b:goto L6d8d5b;
case 0x6d8d61:c.instructions+=1;goto B6d8d61;
case 0x6d8d63:goto L6d8d63;
case 0x6d8d66:c.instructions+=3;goto B6d8d66;
case 0x6d8d6c:c.instructions+=2;goto B6d8d6c;
case 0x6d8d6f:c.instructions+=1;goto B6d8d6f;
case 0x6d8d71:goto L6d8d71;
case 0x6d8d77:c.instructions+=2;goto B6d8d77;
case 0x6d8d7a:c.instructions+=1;goto B6d8d7a;
case 0x6d8d7c:goto L6d8d7c;
case 0x6d8d82:c.instructions+=2;goto B6d8d82;
case 0x6d8d85:c.instructions+=1;goto B6d8d85;
case 0x6d8d87:goto L6d8d87;
case 0x6d8d8d:c.instructions+=1;goto B6d8d8d;
case 0x6d8d93:goto L6d8d93;
case 0x6d8d99:c.instructions+=1;goto B6d8d99;
case 0x6d8d9b:goto L6d8d9b;
case 0x6d8d9e:c.instructions+=3;goto B6d8d9e;
case 0x6d8da4:c.instructions+=2;goto B6d8da4;
case 0x6d8da7:c.instructions+=1;goto B6d8da7;
case 0x6d8da9:goto L6d8da9;
case 0x6d8daf:c.instructions+=2;goto B6d8daf;
case 0x6d8db2:c.instructions+=1;goto B6d8db2;
case 0x6d8db4:goto L6d8db4;
case 0x6d8dba:c.instructions+=2;goto B6d8dba;
case 0x6d8dbd:c.instructions+=1;goto B6d8dbd;
case 0x6d8dbf:goto L6d8dbf;
case 0x6d8dc5:c.instructions+=1;goto B6d8dc5;
case 0x6d8dcb:goto L6d8dcb;
case 0x6d8dd0:c.instructions+=2;goto B6d8dd0;
case 0x6d8dd1:c.instructions+=1;goto B6d8dd1;
case 0x6d8dd7:goto L6d8dd7;
case 0x6d8ddc:goto L6d8ddc;
case 0x6d8de1:c.instructions+=1;goto B6d8de1;
case 0x6d8de6:goto L6d8de6;
case 0x6d8de9:c.instructions+=1;goto B6d8de9;
case 0x6d8deb:goto L6d8deb;
case 0x6d8dee:c.instructions+=3;goto B6d8dee;
case 0x6d8df0:c.instructions+=2;goto B6d8df0;
case 0x6d8df3:c.instructions+=1;goto B6d8df3;
case 0x6d8df5:goto L6d8df5;
case 0x6d8df8:c.instructions+=2;goto B6d8df8;
case 0x6d8dfb:c.instructions+=1;goto B6d8dfb;
case 0x6d8dfd:goto L6d8dfd;
case 0x6d8e00:c.instructions+=2;goto B6d8e00;
case 0x6d8e03:c.instructions+=1;goto B6d8e03;
case 0x6d8e05:goto L6d8e05;
case 0x6d8e08:c.instructions+=1;goto B6d8e08;
case 0x6d8e0e:goto L6d8e0e;
case 0x6d8e11:c.instructions+=1;goto B6d8e11;
case 0x6d8e13:goto L6d8e13;
case 0x6d8e16:c.instructions+=3;goto B6d8e16;
case 0x6d8e19:c.instructions+=2;goto B6d8e19;
case 0x6d8e1c:c.instructions+=1;goto B6d8e1c;
case 0x6d8e1e:goto L6d8e1e;
case 0x6d8e21:c.instructions+=2;goto B6d8e21;
case 0x6d8e24:c.instructions+=1;goto B6d8e24;
case 0x6d8e26:goto L6d8e26;
case 0x6d8e29:c.instructions+=2;goto B6d8e29;
case 0x6d8e2c:c.instructions+=1;goto B6d8e2c;
case 0x6d8e2e:goto L6d8e2e;
case 0x6d8e31:c.instructions+=1;goto B6d8e31;
case 0x6d8e37:goto L6d8e37;
case 0x6d8e3a:c.instructions+=1;goto B6d8e3a;
case 0x6d8e3c:goto L6d8e3c;
case 0x6d8e3f:c.instructions+=3;goto B6d8e3f;
case 0x6d8e42:c.instructions+=2;goto B6d8e42;
case 0x6d8e45:c.instructions+=1;goto B6d8e45;
case 0x6d8e47:goto L6d8e47;
case 0x6d8e4a:c.instructions+=2;goto B6d8e4a;
case 0x6d8e4d:c.instructions+=1;goto B6d8e4d;
case 0x6d8e4f:goto L6d8e4f;
case 0x6d8e52:c.instructions+=2;goto B6d8e52;
case 0x6d8e55:c.instructions+=1;goto B6d8e55;
case 0x6d8e57:goto L6d8e57;
case 0x6d8e5a:c.instructions+=1;goto B6d8e5a;
case 0x6d8e60:goto L6d8e60;
case 0x6d8e63:c.instructions+=1;goto B6d8e63;
case 0x6d8e65:goto L6d8e65;
case 0x6d8e68:c.instructions+=3;goto B6d8e68;
case 0x6d8e6b:c.instructions+=2;goto B6d8e6b;
case 0x6d8e6e:c.instructions+=1;goto B6d8e6e;
case 0x6d8e70:goto L6d8e70;
case 0x6d8e73:c.instructions+=2;goto B6d8e73;
case 0x6d8e76:c.instructions+=1;goto B6d8e76;
case 0x6d8e78:goto L6d8e78;
case 0x6d8e7b:c.instructions+=2;goto B6d8e7b;
case 0x6d8e7e:c.instructions+=1;goto B6d8e7e;
case 0x6d8e80:goto L6d8e80;
case 0x6d8e83:c.instructions+=1;goto B6d8e83;
case 0x6d8e89:goto L6d8e89;
case 0x6d8e8c:c.instructions+=1;goto B6d8e8c;
case 0x6d8e8e:goto L6d8e8e;
case 0x6d8e91:c.instructions+=3;goto B6d8e91;
case 0x6d8e94:c.instructions+=2;goto B6d8e94;
case 0x6d8e97:c.instructions+=1;goto B6d8e97;
case 0x6d8e99:goto L6d8e99;
case 0x6d8e9c:c.instructions+=2;goto B6d8e9c;
case 0x6d8e9f:c.instructions+=1;goto B6d8e9f;
case 0x6d8ea1:goto L6d8ea1;
case 0x6d8ea4:c.instructions+=2;goto B6d8ea4;
case 0x6d8ea7:c.instructions+=1;goto B6d8ea7;
case 0x6d8ea9:goto L6d8ea9;
case 0x6d8eac:c.instructions+=1;goto B6d8eac;
case 0x6d8eb2:goto L6d8eb2;
case 0x6d8eb5:c.instructions+=1;goto B6d8eb5;
case 0x6d8eb7:goto L6d8eb7;
case 0x6d8eba:c.instructions+=3;goto B6d8eba;
case 0x6d8ebd:c.instructions+=2;goto B6d8ebd;
case 0x6d8ec0:c.instructions+=1;goto B6d8ec0;
case 0x6d8ec2:goto L6d8ec2;
case 0x6d8ec5:c.instructions+=2;goto B6d8ec5;
case 0x6d8ec8:c.instructions+=1;goto B6d8ec8;
case 0x6d8eca:goto L6d8eca;
case 0x6d8ed0:c.instructions+=2;goto B6d8ed0;
case 0x6d8ed3:c.instructions+=1;goto B6d8ed3;
case 0x6d8ed5:goto L6d8ed5;
case 0x6d8edb:c.instructions+=1;goto B6d8edb;
case 0x6d8ee1:goto L6d8ee1;
case 0x6d8ee7:c.instructions+=1;goto B6d8ee7;
case 0x6d8ee9:goto L6d8ee9;
case 0x6d8eec:c.instructions+=3;goto B6d8eec;
case 0x6d8ef2:c.instructions+=2;goto B6d8ef2;
case 0x6d8ef5:c.instructions+=1;goto B6d8ef5;
case 0x6d8ef7:goto L6d8ef7;
case 0x6d8efd:c.instructions+=2;goto B6d8efd;
case 0x6d8f00:c.instructions+=1;goto B6d8f00;
case 0x6d8f02:goto L6d8f02;
case 0x6d8f08:c.instructions+=2;goto B6d8f08;
case 0x6d8f0b:c.instructions+=1;goto B6d8f0b;
case 0x6d8f0d:goto L6d8f0d;
case 0x6d8f13:c.instructions+=1;goto B6d8f13;
case 0x6d8f19:goto L6d8f19;
case 0x6d8f1f:c.instructions+=1;goto B6d8f1f;
case 0x6d8f21:goto L6d8f21;
case 0x6d8f24:c.instructions+=3;goto B6d8f24;
case 0x6d8f2a:c.instructions+=2;goto B6d8f2a;
case 0x6d8f2d:c.instructions+=1;goto B6d8f2d;
case 0x6d8f2f:goto L6d8f2f;
case 0x6d8f35:c.instructions+=2;goto B6d8f35;
case 0x6d8f38:c.instructions+=1;goto B6d8f38;
case 0x6d8f3a:goto L6d8f3a;
case 0x6d8f40:c.instructions+=2;goto B6d8f40;
case 0x6d8f43:c.instructions+=1;goto B6d8f43;
case 0x6d8f45:goto L6d8f45;
case 0x6d8f4b:c.instructions+=1;goto B6d8f4b;
case 0x6d8f51:goto L6d8f51;
case 0x6d8f56:c.instructions+=2;goto B6d8f56;
case 0x6d8f57:c.instructions+=1;goto B6d8f57;
case 0x6d8f5d:goto L6d8f5d;
case 0x6d8f62:goto L6d8f62;
case 0x6d8f64:c.instructions+=1;goto B6d8f64;
case 0x6d8f66:goto L6d8f66;
case 0x6d8f67:c.instructions+=6;goto B6d8f67;
case 0x6d8f68:c.instructions+=5;goto B6d8f68;
case 0x6d8f69:c.instructions+=4;goto B6d8f69;
case 0x6d8f6b:c.instructions+=3;goto B6d8f6b;
case 0x6d8f6c:c.instructions+=2;goto B6d8f6c;
case 0x6d8f6f:c.instructions+=1;goto B6d8f6f;
case 0x6d8f72:goto L6d8f72;
case 0x6d8f73:c.instructions+=7;goto B6d8f73;
case 0x6d8f79:c.instructions+=6;goto B6d8f79;
case 0x6d8f7b:c.instructions+=5;goto B6d8f7b;
case 0x6d8f7c:c.instructions+=4;goto B6d8f7c;
case 0x6d8f7d:c.instructions+=3;goto B6d8f7d;
case 0x6d8f7e:c.instructions+=2;goto B6d8f7e;
case 0x6d8f81:c.instructions+=1;goto B6d8f81;
case 0x6d8f90:goto L6d8f90;
case 0x6d8f91:c.instructions+=1;goto B6d8f91;
case 0x6d8f96:goto L6d8f96;
case 0x6d8f98:c.instructions+=3;goto B6d8f98;
case 0x6d8f9e:c.instructions+=2;goto B6d8f9e;
case 0x6d8fa3:c.instructions+=1;goto B6d8fa3;
case 0x6d8fa5:goto L6d8fa5;
case 0x6d8faa:c.instructions+=1;goto B6d8faa;
case 0x6d8fac:goto L6d8fac;
case 0x6d8fb1:c.instructions+=1;goto B6d8fb1;
case 0x6d8fb3:goto L6d8fb3;
case 0x6d8fb8:goto L6d8fb8;
case 0x6d8fbe:c.instructions+=2;goto B6d8fbe;
case 0x6d8fc3:c.instructions+=1;goto B6d8fc3;
case 0x6d8fc5:goto L6d8fc5;
case 0x6d8fc7:goto L6d8fc7;
case 0x6d8fcc:c.instructions+=1;goto B6d8fcc;
case 0x6d8fce:goto L6d8fce;
case 0x6d8fd3:c.instructions+=1;goto B6d8fd3;
case 0x6d8fd5:goto L6d8fd5;
case 0x6d8fda:c.instructions+=1;goto B6d8fda;
case 0x6d8fdc:goto L6d8fdc;
case 0x6d8fe1:c.instructions+=1;goto B6d8fe1;
case 0x6d8fe3:goto L6d8fe3;
case 0x6d8fe8:goto L6d8fe8;
case 0x6d8fea:goto L6d8fea;
case 0x6d8ff1:c.instructions+=5;goto B6d8ff1;
case 0x6d8ff3:c.instructions+=4;goto B6d8ff3;
case 0x6d8ff5:c.instructions+=3;goto B6d8ff5;
case 0x6d8ffa:c.instructions+=2;goto B6d8ffa;
case 0x6d8ffb:c.instructions+=1;goto B6d8ffb;
case 0x6d8ffc:goto L6d8ffc;
default:missing_instruction(c.pc);}
B6d8001:L6d8001:{c.instructions+=4;NFSU2_TR(0x6d8001);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B6d8002:{NFSU2_TR(0x6d8002);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d8006:{NFSU2_TR(0x6d8006);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d800a:{NFSU2_TR(0x6d800a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6d7c70u,6d7);}
}
B6d8010:L6d8010:{c.instructions+=11;NFSU2_TR(0x6d8010);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6d8014:{NFSU2_TR(0x6d8014);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6d8018:{NFSU2_TR(0x6d8018);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d801c:{NFSU2_TR(0x6d801c);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d8020:{NFSU2_TR(0x6d8020);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(r2(U+4)));
}
B6d8024:{NFSU2_TR(0x6d8024);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6d8025:{NFSU2_TR(0x6d8025);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x28ull))));
}
B6d8028:{NFSU2_TR(0x6d8028);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6d802a:{NFSU2_TR(0x6d802a);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d802e:{NFSU2_TR(0x6d802e);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d8032:{NFSU2_TR(0x6d8032);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x6d7c30u,6d7);}
}
B6d8038:L6d8038:{c.instructions+=4;NFSU2_TR(0x6d8038);
u8 U[5];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B6d803c:{NFSU2_TR(0x6d803c);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6d803e:{NFSU2_TR(0x6d803e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6d803f:{NFSU2_TR(0x6d803f);
if(r1(R+518)){{goto L6d805c;}}
}
B6d8041:L6d8041:{c.instructions+=3;NFSU2_TR(0x6d8041);
u8 U[4];
w4(U+0,u32(0x7c0218ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d8046:{NFSU2_TR(0x6d8046);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d8048:{NFSU2_TR(0x6d8048);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d804dull));
{goto L6d8710;}
}
B6d804d:L6d804d:{c.instructions+=3;NFSU2_TR(0x6d804d);
u8 U[4];
w4(U+0,u32(0x7c01ecull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d8052:{NFSU2_TR(0x6d8052);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d8054:{NFSU2_TR(0x6d8054);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d8059ull));
{goto L6d8710;}
}
B6d8059:L6d8059:{c.instructions+=1;NFSU2_TR(0x6d8059);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B6d805c:L6d805c:{c.instructions+=2;NFSU2_TR(0x6d805c);
__builtin_memmove((R+4),(R+28),4);
}
B6d805e:{NFSU2_TR(0x6d805e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d8063ull));
TAIL_STATIC(0x6d7a20u,6d7);
}
B6d8063:L6d8063:{c.instructions+=6;NFSU2_TR(0x6d8063);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x2cull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B6d8067:{NFSU2_TR(0x6d8067);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6d8068:{NFSU2_TR(0x6d8068);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6d8069:{NFSU2_TR(0x6d8069);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6d806a:{NFSU2_TR(0x6d806a);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0xbcull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0xbcull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xbcull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6d8070:{NFSU2_TR(0x6d8070);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6d80b0:L6d80b0:{c.instructions+=21;NFSU2_TR(0x6d80b0);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d80b4:{NFSU2_TR(0x6d80b4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d80b5:{NFSU2_TR(0x6d80b5);
__builtin_memmove((R+24),(R+4),4);
}
B6d80b7:{NFSU2_TR(0x6d80b7);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d80bb:{NFSU2_TR(0x6d80bb);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6d80bd:{NFSU2_TR(0x6d80bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d80c0:{NFSU2_TR(0x6d80c0);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d80c4:{NFSU2_TR(0x6d80c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d80c7:{NFSU2_TR(0x6d80c7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d80c8:{NFSU2_TR(0x6d80c8);
__builtin_memmove((R+4),(R+24),4);
}
B6d80ca:{NFSU2_TR(0x6d80ca);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B6d80cc:{NFSU2_TR(0x6d80cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d80cf:{NFSU2_TR(0x6d80cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d80d2:{NFSU2_TR(0x6d80d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d80d5:{NFSU2_TR(0x6d80d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d80d8:{NFSU2_TR(0x6d80d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d80db:{NFSU2_TR(0x6d80db);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d80de:{NFSU2_TR(0x6d80de);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d80e1:{NFSU2_TR(0x6d80e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d80e4:{NFSU2_TR(0x6d80e4);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B6d80e7:{NFSU2_TR(0x6d80e7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d80ecull));
TAIL_STATIC(0x6d71f0u,6d7);
}
B6d80ec:L6d80ec:{c.instructions+=2;NFSU2_TR(0x6d80ec);
__builtin_memmove((R+4),(R+24),4);
}
B6d80ee:{NFSU2_TR(0x6d80ee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d80f3ull));
TAIL_STATIC(0x6d7bd0u,6d7);
}
B6d80f3:L6d80f3:{c.instructions+=3;NFSU2_TR(0x6d80f3);
__builtin_memmove((R+0),(R+24),4);
}
B6d80f5:{NFSU2_TR(0x6d80f5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6d80f6:{NFSU2_TR(0x6d80f6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6d8100:L6d8100:{c.instructions+=3;NFSU2_TR(0x6d8100);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d8101:{NFSU2_TR(0x6d8101);
__builtin_memmove((R+24),(R+4),4);
}
B6d8103:{NFSU2_TR(0x6d8103);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d8108ull));
TAIL_STATIC(0x6d79a0u,6d7);
}
B6d8108:L6d8108:{c.instructions+=2;NFSU2_TR(0x6d8108);
__builtin_memmove((R+4),(R+24),4);
}
B6d810a:{NFSU2_TR(0x6d810a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d810full));
TAIL_STATIC(0x6d7170u,6d7);
}
B6d810f:L6d810f:{c.instructions+=3;NFSU2_TR(0x6d810f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d8112:{NFSU2_TR(0x6d8112);
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
B6d8114:{NFSU2_TR(0x6d8114);
if(r1(R+518)){{goto L6d8124;}}
}
B6d8116:L6d8116:{c.instructions+=4;NFSU2_TR(0x6d8116);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d8119:{NFSU2_TR(0x6d8119);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d811a:{NFSU2_TR(0x6d811a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d811b:{NFSU2_TR(0x6d811b);
u8 U[4];
__builtin_memmove((U+0),gp(0x80bfdc),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d8121ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6d8121:L6d8121:{c.instructions+=1;NFSU2_TR(0x6d8121);
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
B6d8124:L6d8124:{c.instructions+=3;NFSU2_TR(0x6d8124);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6d812b:{NFSU2_TR(0x6d812b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6d812c:{NFSU2_TR(0x6d812c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6d8130:L6d8130:{c.instructions+=5;NFSU2_TR(0x6d8130);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d8133:{NFSU2_TR(0x6d8133);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d8134:{NFSU2_TR(0x6d8134);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6d8138:{NFSU2_TR(0x6d8138);
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
B6d813a:{NFSU2_TR(0x6d813a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d8150;}}
}
B6d813c:L6d813c:{c.instructions+=7;NFSU2_TR(0x6d813c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d813f:{NFSU2_TR(0x6d813f);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d8142:{NFSU2_TR(0x6d8142);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d8145:{NFSU2_TR(0x6d8145);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6d8147:{NFSU2_TR(0x6d8147);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d8149:{NFSU2_TR(0x6d8149);
__builtin_memmove((R+4),(R+0),4);
}
B6d814b:{NFSU2_TR(0x6d814b);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d814eull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6d814e:L6d814e:{c.instructions+=1;NFSU2_TR(0x6d814e);
{goto L6d817a;}
}
B6d8150:L6d8150:{c.instructions+=2;NFSU2_TR(0x6d8150);
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
B6d8152:{NFSU2_TR(0x6d8152);
if(r1(R+518)){{goto L6d8164;}}
}
B6d8154:L6d8154:{c.instructions+=4;NFSU2_TR(0x6d8154);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d8157:{NFSU2_TR(0x6d8157);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d815a:{NFSU2_TR(0x6d815a);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B6d815c:{NFSU2_TR(0x6d815c);
if(r1(R+518)){{goto L6d8164;}}
}
B6d815e:L6d815e:{c.instructions+=3;NFSU2_TR(0x6d815e);
__builtin_memmove((R+0),(R+4),4);
}
B6d8160:{NFSU2_TR(0x6d8160);
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
B6d8162:{NFSU2_TR(0x6d8162);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d8154u);}goto L6d8154;}}
}
B6d8164:L6d8164:{c.instructions+=8;NFSU2_TR(0x6d8164);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d8167:{NFSU2_TR(0x6d8167);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d816a:{NFSU2_TR(0x6d816a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d816d:{NFSU2_TR(0x6d816d);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d8170:{NFSU2_TR(0x6d8170);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d8173:{NFSU2_TR(0x6d8173);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6d8175:{NFSU2_TR(0x6d8175);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d8177:{NFSU2_TR(0x6d8177);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d817aull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6d817a:L6d817a:{c.instructions+=3;NFSU2_TR(0x6d817a);
u8 U[14];
__builtin_memmove((U+6),gp(0x8a72ec),4);
w1(R+512,u8((r4(U+6))<(r4(R+24))));
w1(R+523,sborrow<u32>(r4(U+6),r4(R+24)));
w4(U+10,u32(u32(r4(U+6))-u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6d8180:{NFSU2_TR(0x6d8180);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6d8181:{NFSU2_TR(0x6d8181);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d818d;}}
}
B6d8183:L6d8183:{c.instructions+=1;NFSU2_TR(0x6d8183);
s4(0x8a72ec,u32(0x0ull));
}
B6d818d:L6d818d:{c.instructions+=1;NFSU2_TR(0x6d818d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6d8190:L6d8190:{c.instructions+=2;NFSU2_TR(0x6d8190);
__builtin_memmove((R+0),gp(0x8a72e4),4);
}
B6d8195:{NFSU2_TR(0x6d8195);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6d81a0:L6d81a0:{c.instructions+=2;NFSU2_TR(0x6d81a0);
__builtin_memmove((R+0),gp(0x8a72e8),4);
}
B6d81a5:{NFSU2_TR(0x6d81a5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6d81b0:L6d81b0:{c.instructions+=4;NFSU2_TR(0x6d81b0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d81b4:{NFSU2_TR(0x6d81b4);
__builtin_memmove(gp(0x8a72e4),(R+0),4);
}
B6d81b9:{NFSU2_TR(0x6d81b9);
__builtin_memmove(gp(0x8a72ec),(R+0),4);
}
B6d81be:{NFSU2_TR(0x6d81be);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6d81d0:L6d81d0:{c.instructions+=3;NFSU2_TR(0x6d81d0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d81d4:{NFSU2_TR(0x6d81d4);
__builtin_memmove(gp(0x80bfd8),(R+0),4);
}
B6d81d9:{NFSU2_TR(0x6d81d9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6d81e0:L6d81e0:{c.instructions+=3;NFSU2_TR(0x6d81e0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d81e4:{NFSU2_TR(0x6d81e4);
__builtin_memmove(gp(0x80bfdc),(R+0),4);
}
B6d81e9:{NFSU2_TR(0x6d81e9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6d81f0:L6d81f0:{c.instructions+=2;NFSU2_TR(0x6d81f0);
__builtin_memmove((R+0),gp(0x8a72e0),4);
}
B6d81f5:{NFSU2_TR(0x6d81f5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6d8200:L6d8200:{c.instructions+=5;NFSU2_TR(0x6d8200);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d8201:{NFSU2_TR(0x6d8201);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d8203:{NFSU2_TR(0x6d8203);
u8 U[4];
w4(U+0,u32(0x100ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d8208:{NFSU2_TR(0x6d8208);
__builtin_memmove((R+24),(R+4),4);
}
B6d820a:{NFSU2_TR(0x6d820a);
u8 U[4];
__builtin_memmove((U+0),gp(0x80bfd8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d8210ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6d8210:L6d8210:{c.instructions+=3;NFSU2_TR(0x6d8210);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B6d8213:{NFSU2_TR(0x6d8213);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6d8215:{NFSU2_TR(0x6d8215);
if(r1(R+518)){{goto L6d8221;}}
}
B6d8217:L6d8217:{c.instructions+=3;NFSU2_TR(0x6d8217);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d8218:{NFSU2_TR(0x6d8218);
__builtin_memmove((R+4),(R+0),4);
}
B6d821a:{NFSU2_TR(0x6d821a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d821full));
TAIL_STATIC(0x6d9e00u,6d9);
}
B6d821f:L6d821f:{c.instructions+=1;NFSU2_TR(0x6d821f);
{goto L6d8223;}
}
B6d8221:L6d8221:{c.instructions+=1;NFSU2_TR(0x6d8221);
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
B6d8223:L6d8223:{c.instructions+=8;NFSU2_TR(0x6d8223);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d8226:{NFSU2_TR(0x6d8226);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d8229:{NFSU2_TR(0x6d8229);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d822c:{NFSU2_TR(0x6d822c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d822f:{NFSU2_TR(0x6d822f);
__builtin_memmove(gp(0x8a72e4),(R+0),4);
}
B6d8234:{NFSU2_TR(0x6d8234);
__builtin_memmove(gp(0x8a72ec),(R+0),4);
}
B6d8239:{NFSU2_TR(0x6d8239);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6d823a:{NFSU2_TR(0x6d823a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6d8240:L6d8240:{c.instructions+=6;NFSU2_TR(0x6d8240);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d8241:{NFSU2_TR(0x6d8241);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d8242:{NFSU2_TR(0x6d8242);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6d8246:{NFSU2_TR(0x6d8246);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d8247:{NFSU2_TR(0x6d8247);
__builtin_memmove((R+24),(R+4),4);
}
B6d8249:{NFSU2_TR(0x6d8249);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d824eull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d8130u);}goto L6d8130;}
}
B6d824e:L6d824e:{c.instructions+=2;NFSU2_TR(0x6d824e);
u8 U[14];
__builtin_memmove((U+6),gp(0x8a72e4),4);
w1(R+512,u8((r4(U+6))<(r4(R+28))));
w1(R+523,sborrow<u32>(r4(U+6),r4(R+28)));
w4(U+10,u32(u32(r4(U+6))-u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6d8254:{NFSU2_TR(0x6d8254);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d8276;}}
}
B6d8256:L6d8256:{c.instructions+=3;NFSU2_TR(0x6d8256);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d8259:{NFSU2_TR(0x6d8259);
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
B6d825b:{NFSU2_TR(0x6d825b);
if(r1(R+518)){{goto L6d8271;}}
}
B6d825d:L6d825d:{c.instructions+=1;NFSU2_TR(0x6d825d);
__builtin_memmove((R+4),(R+4),4);
}
B6d8260:L6d8260:{c.instructions+=3;NFSU2_TR(0x6d8260);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d8263:{NFSU2_TR(0x6d8263);
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
B6d8265:{NFSU2_TR(0x6d8265);
if(r1(R+518)){{goto L6d8271;}}
}
B6d8267:L6d8267:{c.instructions+=4;NFSU2_TR(0x6d8267);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d826a:{NFSU2_TR(0x6d826a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d826d:{NFSU2_TR(0x6d826d);
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
B6d826f:{NFSU2_TR(0x6d826f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d8260u);}goto L6d8260;}}
}
B6d8271:L6d8271:{c.instructions+=1;NFSU2_TR(0x6d8271);
__builtin_memmove(gp(0x8a72e4),(R+0),4);
}
B6d8276:L6d8276:{c.instructions+=3;NFSU2_TR(0x6d8276);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6d8277:{NFSU2_TR(0x6d8277);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6d8278:{NFSU2_TR(0x6d8278);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6d8280:L6d8280:{c.instructions+=5;NFSU2_TR(0x6d8280);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d8281:{NFSU2_TR(0x6d8281);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d8283:{NFSU2_TR(0x6d8283);
u8 U[4];
w4(U+0,u32(0x170ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d8288:{NFSU2_TR(0x6d8288);
__builtin_memmove((R+24),(R+4),4);
}
B6d828a:{NFSU2_TR(0x6d828a);
u8 U[4];
__builtin_memmove((U+0),gp(0x80bfd8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d8290ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6d8290:L6d8290:{c.instructions+=3;NFSU2_TR(0x6d8290);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B6d8293:{NFSU2_TR(0x6d8293);
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
B6d8295:{NFSU2_TR(0x6d8295);
if(r1(R+518)){{goto L6d82b3;}}
}
B6d8297:L6d8297:{c.instructions+=3;NFSU2_TR(0x6d8297);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d8298:{NFSU2_TR(0x6d8298);
__builtin_memmove((R+4),(R+0),4);
}
B6d829a:{NFSU2_TR(0x6d829a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d829full));
TAIL_STATIC(0x6da500u,6da);
}
B6d829f:L6d829f:{c.instructions+=7;NFSU2_TR(0x6d829f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d82a2:{NFSU2_TR(0x6d82a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d82a5:{NFSU2_TR(0x6d82a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x168ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d82ab:{NFSU2_TR(0x6d82ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d82ae:{NFSU2_TR(0x6d82ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d82b1:{NFSU2_TR(0x6d82b1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6d82b2:{NFSU2_TR(0x6d82b2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6d82b3:L6d82b3:{c.instructions+=8;NFSU2_TR(0x6d82b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d82b6:{NFSU2_TR(0x6d82b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d82b9:{NFSU2_TR(0x6d82b9);
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
B6d82bb:{NFSU2_TR(0x6d82bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x168ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d82c1:{NFSU2_TR(0x6d82c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d82c4:{NFSU2_TR(0x6d82c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d82c7:{NFSU2_TR(0x6d82c7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6d82c8:{NFSU2_TR(0x6d82c8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6d82d0:L6d82d0:{c.instructions+=3;NFSU2_TR(0x6d82d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d82d3:{NFSU2_TR(0x6d82d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d82d6:{NFSU2_TR(0x6d82d6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6d82e0:L6d82e0:{c.instructions+=9;NFSU2_TR(0x6d82e0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d82e1:{NFSU2_TR(0x6d82e1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d82e2:{NFSU2_TR(0x6d82e2);
__builtin_memmove((R+12),(R+4),4);
}
B6d82e4:{NFSU2_TR(0x6d82e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d82e7:{NFSU2_TR(0x6d82e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6d82ea:{NFSU2_TR(0x6d82ea);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d82eb:{NFSU2_TR(0x6d82eb);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6d82ef:{NFSU2_TR(0x6d82ef);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B6d82f1:{NFSU2_TR(0x6d82f1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d82fe;}}
}
B6d82f3:L6d82f3:{c.instructions+=3;NFSU2_TR(0x6d82f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x168ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d82f9:{NFSU2_TR(0x6d82f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d82fc:{NFSU2_TR(0x6d82fc);
{goto L6d8326;}
}
B6d82fe:L6d82fe:{c.instructions+=3;NFSU2_TR(0x6d82fe);
__builtin_memmove((R+0),(R+24),4);
}
B6d8300:{NFSU2_TR(0x6d8300);
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
B6d8302:{NFSU2_TR(0x6d8302);
if(r1(R+518)){{goto L6d8314;}}
}
B6d8304:L6d8304:{c.instructions+=3;NFSU2_TR(0x6d8304);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x168ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d830a:{NFSU2_TR(0x6d830a);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
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
B6d830c:{NFSU2_TR(0x6d830c);
if(r1(R+518)){{goto L6d8314;}}
}
B6d830e:L6d830e:{c.instructions+=3;NFSU2_TR(0x6d830e);
__builtin_memmove((R+0),(R+4),4);
}
B6d8310:{NFSU2_TR(0x6d8310);
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
B6d8312:{NFSU2_TR(0x6d8312);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d8304u);}goto L6d8304;}}
}
B6d8314:L6d8314:{c.instructions+=3;NFSU2_TR(0x6d8314);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x168ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6d831a:{NFSU2_TR(0x6d831a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x168ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d8320:{NFSU2_TR(0x6d8320);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x168ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d8326:L6d8326:{c.instructions+=2;NFSU2_TR(0x6d8326);
__builtin_memmove((R+4),(R+24),4);
}
B6d8328:{NFSU2_TR(0x6d8328);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d832dull));
TAIL_STATIC(0x6da560u,6da);
}
B6d832d:L6d832d:{c.instructions+=3;NFSU2_TR(0x6d832d);
u8 U[4];
w4(U+0,u32(0x170ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d8332:{NFSU2_TR(0x6d8332);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d8333:{NFSU2_TR(0x6d8333);
u8 U[4];
__builtin_memmove((U+0),gp(0x80bfdc),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d8339ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6d8339:L6d8339:{c.instructions+=8;NFSU2_TR(0x6d8339);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d833c:{NFSU2_TR(0x6d833c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d833f:{NFSU2_TR(0x6d833f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B6d8342:{NFSU2_TR(0x6d8342);
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
B6d8344:{NFSU2_TR(0x6d8344);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6d8345:{NFSU2_TR(0x6d8345);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6d8346:{NFSU2_TR(0x6d8346);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6d8347:{NFSU2_TR(0x6d8347);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d8350;}}
}
B6d8349:L6d8349:{c.instructions+=1;NFSU2_TR(0x6d8349);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6d8350:L6d8350:{c.instructions+=1;NFSU2_TR(0x6d8350);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6d8360:L6d8360:{c.instructions+=8;NFSU2_TR(0x6d8360);
__builtin_memmove((R+0),(R+4),4);
}
B6d8362:{NFSU2_TR(0x6d8362);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6d8364:{NFSU2_TR(0x6d8364);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6d8366:{NFSU2_TR(0x6d8366);
__builtin_memmove((R+8),gp(0x80c008),4);
}
B6d836c:{NFSU2_TR(0x6d836c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d836f:{NFSU2_TR(0x6d836f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d8372:{NFSU2_TR(0x6d8372);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d8375:{NFSU2_TR(0x6d8375);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6d8380:L6d8380:{c.instructions+=6;NFSU2_TR(0x6d8380);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d8381:{NFSU2_TR(0x6d8381);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6d8385:{NFSU2_TR(0x6d8385);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((R+8),(U+0),1);
}
B6d8387:{NFSU2_TR(0x6d8387);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6d8389:{NFSU2_TR(0x6d8389);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6d838b:{NFSU2_TR(0x6d838b);
if(r1(R+518)){{goto L6d83a5;}}
}
B6d838d:L6d838d:{c.instructions+=2;NFSU2_TR(0x6d838d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d838e:{NFSU2_TR(0x6d838e);
__builtin_memmove((R+28),(R+28),4);
}
B6d8390:L6d8390:{c.instructions+=9;NFSU2_TR(0x6d8390);
__builtin_memmove((R+28),(R+0),4);
}
B6d8392:{NFSU2_TR(0x6d8392);
w4(R+8,u32(s32(s8(r1(R+8)))));
}
B6d8395:{NFSU2_TR(0x6d8395);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B6d8398:{NFSU2_TR(0x6d8398);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+8))));
}
B6d839a:{NFSU2_TR(0x6d839a);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B6d839d:{NFSU2_TR(0x6d839d);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+28))));
}
B6d839f:{NFSU2_TR(0x6d839f);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6d83a0:{NFSU2_TR(0x6d83a0);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6d83a2:{NFSU2_TR(0x6d83a2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d8390u);}goto L6d8390;}}
}
B6d83a4:L6d83a4:{c.instructions+=1;NFSU2_TR(0x6d83a4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6d83a5:L6d83a5:{c.instructions+=5;NFSU2_TR(0x6d83a5);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6d83a7:{NFSU2_TR(0x6d83a7);
u8 U[64];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+8,u64(r4(U+4)));
w8(U+16,u64(r4(R+8)));
w8(U+24,shl<u64>(r8(U+16),u64(u32(0x20ull))));
w8(U+32,u64(r4(R+0)));
w8(U+40,u64(u64(r8(U+24))|u64(r8(U+32))));
{u64 d_=u64(r8(U+8));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x6d83a7);w8(U+48,u64(u64(r8(U+40))/d_));}
w4(R+0,u32(r8(U+48)));
{u64 d_=u64(r8(U+8));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x6d83a7);w8(U+56,u64(u64(r8(U+40))%d_));}
w4(R+8,u32(r8(U+56)));
}
B6d83aa:{NFSU2_TR(0x6d83aa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6d83ab:{NFSU2_TR(0x6d83ab);
__builtin_memmove((R+0),(R+8),4);
}
B6d83ad:{NFSU2_TR(0x6d83ad);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6d83b0:L6d83b0:{c.instructions+=7;NFSU2_TR(0x6d83b0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d83b1:{NFSU2_TR(0x6d83b1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d83b2:{NFSU2_TR(0x6d83b2);
__builtin_memmove((R+24),(R+4),4);
}
B6d83b4:{NFSU2_TR(0x6d83b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d83b7:{NFSU2_TR(0x6d83b7);
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
B6d83b9:{NFSU2_TR(0x6d83b9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d83ba:{NFSU2_TR(0x6d83ba);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d8402;}}
}
B6d83bc:L6d83bc:{c.instructions+=7;NFSU2_TR(0x6d83bc);
__builtin_memmove((R+0),gp(0x80c008),4);
}
B6d83c1:{NFSU2_TR(0x6d83c1);
__builtin_memmove((R+4),(R+0),4);
}
B6d83c3:{NFSU2_TR(0x6d83c3);
u8 U[45];
w4(U+37,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
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
B6d83c6:{NFSU2_TR(0x6d83c6);
u8 U[4];
w4(U+0,u32(0x7c0600ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d83cb:{NFSU2_TR(0x6d83cb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d83cc:{NFSU2_TR(0x6d83cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d83cf:{NFSU2_TR(0x6d83cf);
u8 U[4];
__builtin_memmove((U+0),gp(0x80bfd8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d83d5ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6d83d5:L6d83d5:{c.instructions+=6;NFSU2_TR(0x6d83d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d83d8:{NFSU2_TR(0x6d83d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d83db:{NFSU2_TR(0x6d83db);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B6d83de:{NFSU2_TR(0x6d83de);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6d83e0:{NFSU2_TR(0x6d83e0);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6d83e2:{NFSU2_TR(0x6d83e2);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6d8402;}}
}
B6d83e4:L6d83e4:{c.instructions+=1;NFSU2_TR(0x6d83e4);
{goto L6d83f0;}
}
B6d83f0:L6d83f0:{c.instructions+=6;NFSU2_TR(0x6d83f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d83f3:{NFSU2_TR(0x6d83f3);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
w4(U+8,u32(0x0ull));
s4(u32(r4(U+4)),r4(U+8));
}
B6d83fa:{NFSU2_TR(0x6d83fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d83fd:{NFSU2_TR(0x6d83fd);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6d83fe:{NFSU2_TR(0x6d83fe);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B6d8400:{NFSU2_TR(0x6d8400);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d83f0u);}goto L6d83f0;}}
}
B6d8402:L6d8402:{c.instructions+=5;NFSU2_TR(0x6d8402);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d8406:{NFSU2_TR(0x6d8406);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
__builtin_memmove((R+4),(U+0),1);
}
B6d8408:{NFSU2_TR(0x6d8408);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6d840a:{NFSU2_TR(0x6d840a);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6d840c:{NFSU2_TR(0x6d840c);
if(r1(R+518)){{goto L6d8424;}}
}
B6d840e:L6d840e:{c.instructions+=1;NFSU2_TR(0x6d840e);
__builtin_memmove((R+28),(R+28),4);
}
B6d8410:L6d8410:{c.instructions+=9;NFSU2_TR(0x6d8410);
__builtin_memmove((R+28),(R+0),4);
}
B6d8412:{NFSU2_TR(0x6d8412);
w4(R+4,u32(s32(s8(r1(R+4)))));
}
B6d8415:{NFSU2_TR(0x6d8415);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B6d8418:{NFSU2_TR(0x6d8418);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+4))));
}
B6d841a:{NFSU2_TR(0x6d841a);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B6d841d:{NFSU2_TR(0x6d841d);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+28))));
}
B6d841f:{NFSU2_TR(0x6d841f);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6d8420:{NFSU2_TR(0x6d8420);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6d8422:{NFSU2_TR(0x6d8422);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d8410u);}goto L6d8410;}}
}
B6d8424:L6d8424:{c.instructions+=6;NFSU2_TR(0x6d8424);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d8427:{NFSU2_TR(0x6d8427);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6d8429:{NFSU2_TR(0x6d8429);
u8 U[56];
w8(U+0,u64(r4(R+4)));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x6d8429);w8(U+40,u64(u64(r8(U+32))/d_));}
w4(R+0,u32(r8(U+40)));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x6d8429);w8(U+48,u64(u64(r8(U+32))%d_));}
w4(R+8,u32(r8(U+48)));
}
B6d842b:{NFSU2_TR(0x6d842b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d842e:{NFSU2_TR(0x6d842e);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B6d8432:{NFSU2_TR(0x6d8432);
if(r1(R+518)){{goto L6d8443;}}
}
B6d8434:L6d8434:{c.instructions+=1;NFSU2_TR(0x6d8434);
__builtin_memmove((R+28),(R+0),4);
}
B6d8436:L6d8436:{c.instructions+=3;NFSU2_TR(0x6d8436);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6d8437:{NFSU2_TR(0x6d8437);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+0))));
}
B6d8439:{NFSU2_TR(0x6d8439);
if(r1(R+512)){{goto L6d843d;}}
}
B6d843b:L6d843b:{c.instructions+=1;NFSU2_TR(0x6d843b);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6d843d:L6d843d:{c.instructions+=2;NFSU2_TR(0x6d843d);
u8 U[20];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w4(U+16,u32(u32(r4(U+12))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+16))==(u32(0x0ull))));
}
B6d8441:{NFSU2_TR(0x6d8441);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d8436u);}goto L6d8436;}}
}
B6d8443:L6d8443:{c.instructions+=9;NFSU2_TR(0x6d8443);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d8447:{NFSU2_TR(0x6d8447);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6d844a:{NFSU2_TR(0x6d844a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6d844c:{NFSU2_TR(0x6d844c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6d844f:{NFSU2_TR(0x6d844f);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6d8450:{NFSU2_TR(0x6d8450);
__builtin_memmove((R+0),(R+8),4);
}
B6d8452:{NFSU2_TR(0x6d8452);
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
B6d8454:{NFSU2_TR(0x6d8454);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+24)),r4(U+0));
}
B6d8456:{NFSU2_TR(0x6d8456);
if(r1(R+512)){{goto L6d84dc;}}
}
B6d845c:L6d845c:{c.instructions+=8;NFSU2_TR(0x6d845c);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d845d:{NFSU2_TR(0x6d845d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6d8460:{NFSU2_TR(0x6d8460);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6d8463:{NFSU2_TR(0x6d8463);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x0ull))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B6d846a:{NFSU2_TR(0x6d846a);
u8 U[4];
w4(U+0,u32(0x7c0600ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d846f:{NFSU2_TR(0x6d846f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d8470:{NFSU2_TR(0x6d8470);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d8473:{NFSU2_TR(0x6d8473);
u8 U[4];
__builtin_memmove((U+0),gp(0x80bfd8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d8479ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6d8479:L6d8479:{c.instructions+=6;NFSU2_TR(0x6d8479);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d847c:{NFSU2_TR(0x6d847c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d847f:{NFSU2_TR(0x6d847f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B6d8482:{NFSU2_TR(0x6d8482);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6d8484:{NFSU2_TR(0x6d8484);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6d8486:{NFSU2_TR(0x6d8486);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6d84a2;}}
}
B6d8488:L6d8488:{c.instructions+=1;NFSU2_TR(0x6d8488);
{goto L6d8490;}
}
B6d8490:L6d8490:{c.instructions+=6;NFSU2_TR(0x6d8490);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d8493:{NFSU2_TR(0x6d8493);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
w4(U+8,u32(0x0ull));
s4(u32(r4(U+4)),r4(U+8));
}
B6d849a:{NFSU2_TR(0x6d849a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d849d:{NFSU2_TR(0x6d849d);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6d849e:{NFSU2_TR(0x6d849e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B6d84a0:{NFSU2_TR(0x6d84a0);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d8490u);}goto L6d8490;}}
}
B6d84a2:L6d84a2:{c.instructions+=4;NFSU2_TR(0x6d84a2);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6d84a4:{NFSU2_TR(0x6d84a4);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6d84a6:{NFSU2_TR(0x6d84a6);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B6d84ac:{NFSU2_TR(0x6d84ac);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6d84c5;}}
}
B6d84ae:L6d84ae:{c.instructions+=1;NFSU2_TR(0x6d84ae);
__builtin_memmove((R+28),(R+28),4);
}
B6d84b0:L6d84b0:{c.instructions+=6;NFSU2_TR(0x6d84b0);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+20))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6d84b4:{NFSU2_TR(0x6d84b4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d84b5:{NFSU2_TR(0x6d84b5);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B6d84b8:{NFSU2_TR(0x6d84b8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d84b9:{NFSU2_TR(0x6d84b9);
__builtin_memmove((R+4),(R+24),4);
}
B6d84bb:{NFSU2_TR(0x6d84bb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d84c0ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d83b0u);}goto L6d83b0;}
}
B6d84c0:L6d84c0:{c.instructions+=3;NFSU2_TR(0x6d84c0);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6d84c1:{NFSU2_TR(0x6d84c1);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6d84c3:{NFSU2_TR(0x6d84c3);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d84b0u);}goto L6d84b0;}}
}
B6d84c5:L6d84c5:{c.instructions+=2;NFSU2_TR(0x6d84c5);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+20))&u32(r4(R+20))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6d84c7:{NFSU2_TR(0x6d84c7);
if(r1(R+518)){{goto L6d84db;}}
}
B6d84c9:L6d84c9:{c.instructions+=4;NFSU2_TR(0x6d84c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x0ull))+u32(r4(U+0))));
__builtin_memmove((R+8),(U+4),4);
}
B6d84d0:{NFSU2_TR(0x6d84d0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d84d1:{NFSU2_TR(0x6d84d1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d84d2:{NFSU2_TR(0x6d84d2);
u8 U[4];
__builtin_memmove((U+0),gp(0x80bfdc),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d84d8ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6d84d8:L6d84d8:{c.instructions+=1;NFSU2_TR(0x6d84d8);
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
B6d84db:L6d84db:{c.instructions+=1;NFSU2_TR(0x6d84db);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6d84dc:L6d84dc:{c.instructions+=4;NFSU2_TR(0x6d84dc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6d84dd:{NFSU2_TR(0x6d84dd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6d84de:{NFSU2_TR(0x6d84de);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6d84df:{NFSU2_TR(0x6d84df);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6d84f0:L6d84f0:{c.instructions+=9;NFSU2_TR(0x6d84f0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d84f1:{NFSU2_TR(0x6d84f1);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d84f2:{NFSU2_TR(0x6d84f2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d84f3:{NFSU2_TR(0x6d84f3);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d84f4:{NFSU2_TR(0x6d84f4);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6d84f8:{NFSU2_TR(0x6d84f8);
__builtin_memmove((R+0),(R+28),4);
}
B6d84fa:{NFSU2_TR(0x6d84fa);
__builtin_memmove((R+20),(R+4),4);
}
B6d84fc:{NFSU2_TR(0x6d84fc);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+8),(U+0),4);
}
B6d84ff:{NFSU2_TR(0x6d84ff);
}
B6d8500:L6d8500:{c.instructions+=4;NFSU2_TR(0x6d8500);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B6d8502:{NFSU2_TR(0x6d8502);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6d8503:{NFSU2_TR(0x6d8503);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6d8505:{NFSU2_TR(0x6d8505);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d8500u);}goto L6d8500;}}
}
B6d8507:L6d8507:{c.instructions+=5;NFSU2_TR(0x6d8507);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+8))));
}
B6d8509:{NFSU2_TR(0x6d8509);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x5ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x5ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x5ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6d850c:{NFSU2_TR(0x6d850c);
u8 U[4];
w4(U+0,u32(0x7c0620ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d8511:{NFSU2_TR(0x6d8511);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d8512:{NFSU2_TR(0x6d8512);
u8 U[4];
__builtin_memmove((U+0),gp(0x80bfd8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d8518ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6d8518:L6d8518:{c.instructions+=8;NFSU2_TR(0x6d8518);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d851c:{NFSU2_TR(0x6d851c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6d851f:{NFSU2_TR(0x6d851f);
__builtin_memmove((R+24),(R+12),4);
}
B6d8521:{NFSU2_TR(0x6d8521);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B6d8524:{NFSU2_TR(0x6d8524);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B6d8526:{NFSU2_TR(0x6d8526);
__builtin_memmove((R+4),(R+28),4);
}
B6d8528:{NFSU2_TR(0x6d8528);
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+28))));
}
B6d852a:{NFSU2_TR(0x6d852a);
__builtin_memmove((R+12),(R+12),4);
}
B6d8530:L6d8530:{c.instructions+=5;NFSU2_TR(0x6d8530);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+4))),1);
__builtin_memmove((R+8),(U+0),1);
}
B6d8532:{NFSU2_TR(0x6d8532);
u8 U[9];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),1);
s1(u32(r4(U+4)),r1(U+8));
}
B6d8535:{NFSU2_TR(0x6d8535);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6d8536:{NFSU2_TR(0x6d8536);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6d8538:{NFSU2_TR(0x6d8538);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d8530u);}goto L6d8530;}}
}
B6d853a:L6d853a:{c.instructions+=4;NFSU2_TR(0x6d853a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d853b:{NFSU2_TR(0x6d853b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d853c:{NFSU2_TR(0x6d853c);
__builtin_memmove((R+4),(R+20),4);
}
B6d853e:{NFSU2_TR(0x6d853e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d8543ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d83b0u);}goto L6d83b0;}
}
B6d8543:L6d8543:{c.instructions+=6;NFSU2_TR(0x6d8543);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6d8544:{NFSU2_TR(0x6d8544);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6d8545:{NFSU2_TR(0x6d8545);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6d8546:{NFSU2_TR(0x6d8546);
__builtin_memmove((R+0),(R+12),4);
}
B6d8548:{NFSU2_TR(0x6d8548);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6d8549:{NFSU2_TR(0x6d8549);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6d8550:L6d8550:{c.instructions+=6;NFSU2_TR(0x6d8550);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B6d8553:{NFSU2_TR(0x6d8553);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d8554:{NFSU2_TR(0x6d8554);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6d8557:{NFSU2_TR(0x6d8557);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6d8559:{NFSU2_TR(0x6d8559);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d855d:{NFSU2_TR(0x6d855d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d856f;}}
}
B6d855f:L6d855f:{c.instructions+=6;NFSU2_TR(0x6d855f);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d8563:{NFSU2_TR(0x6d8563);
u8 U[1];
w1(U+0,u8(0x0ull));
s1(u32(r4(R+0)),r1(U+0));
}
B6d8566:{NFSU2_TR(0x6d8566);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6d8568:{NFSU2_TR(0x6d8568);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6d8569:{NFSU2_TR(0x6d8569);
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
B6d856c:{NFSU2_TR(0x6d856c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6d856f:L6d856f:{c.instructions+=6;NFSU2_TR(0x6d856f);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d8573:{NFSU2_TR(0x6d8573);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d8574:{NFSU2_TR(0x6d8574);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d8575:{NFSU2_TR(0x6d8575);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d8576:{NFSU2_TR(0x6d8576);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d8577:{NFSU2_TR(0x6d8577);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d857cull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d8380u);}goto L6d8380;}
}
B6d857c:L6d857c:{c.instructions+=2;NFSU2_TR(0x6d857c);
__builtin_memmove((R+20),(R+0),4);
}
B6d857e:{NFSU2_TR(0x6d857e);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6d8586:L6d8586:{c.instructions+=3;NFSU2_TR(0x6d8586);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6d8589:{NFSU2_TR(0x6d8589);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6d858b:{NFSU2_TR(0x6d858b);
if(r1(R+518)){{goto L6d85c5;}}
}
B6d858d:L6d858d:{c.instructions+=2;NFSU2_TR(0x6d858d);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d8591:{NFSU2_TR(0x6d8591);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6d8594:L6d8594:{c.instructions+=4;NFSU2_TR(0x6d8594);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+8))),1);
__builtin_memmove((R+0),(U+0),1);
}
B6d8596:{NFSU2_TR(0x6d8596);
__builtin_memmove((R+12),(R+0),1);
}
B6d8598:{NFSU2_TR(0x6d8598);
u8 U[3];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
__builtin_memmove((U+1),(U+0),1);
w1(R+512,u8((r1(R+0))<(r1(U+1))));
w1(U+2,u8(u32(r1(R+0))-u32(r1(U+1))));
w1(R+518,u8((r1(U+2))==(u8(0x0ull))));
}
B6d859a:{NFSU2_TR(0x6d859a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d85b8;}}
}
B6d859c:L6d859c:{c.instructions+=2;NFSU2_TR(0x6d859c);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6d859e:{NFSU2_TR(0x6d859e);
if(r1(R+518)){{goto L6d85b4;}}
}
B6d85a0:L6d85a0:{c.instructions+=4;NFSU2_TR(0x6d85a0);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B6d85a3:{NFSU2_TR(0x6d85a3);
__builtin_memmove((R+12),(R+0),1);
}
B6d85a5:{NFSU2_TR(0x6d85a5);
u8 U[7];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(R+512,u8((r1(R+0))<(r1(U+5))));
w1(U+6,u8(u32(r1(R+0))-u32(r1(U+5))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B6d85a8:{NFSU2_TR(0x6d85a8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d85b8;}}
}
B6d85aa:L6d85aa:{c.instructions+=4;NFSU2_TR(0x6d85aa);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x2ull))));
}
B6d85ad:{NFSU2_TR(0x6d85ad);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x2ull))));
}
B6d85b0:{NFSU2_TR(0x6d85b0);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6d85b2:{NFSU2_TR(0x6d85b2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d8594u);}goto L6d8594;}}
}
B6d85b4:L6d85b4:{c.instructions+=2;NFSU2_TR(0x6d85b4);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6d85b6:{NFSU2_TR(0x6d85b6);
{goto L6d85bd;}
}
B6d85b8:L6d85b8:{c.instructions+=2;NFSU2_TR(0x6d85b8);
u8 U[9];
w4(U+0,u32(r1(R+512)));
w1(R+512,u8((r4(R+8))<(r4(R+8))));
w4(U+4,u32(u32(r4(R+8))-u32(r4(R+8))));
w1(U+8,u8((r4(U+4))<(r4(U+0))));
w1(R+512,u8((r1(R+512))||(r1(U+8))));
w4(R+8,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B6d85ba:{NFSU2_TR(0x6d85ba);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+8))-u32(u32(0xffffffffull))));
w4(R+8,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B6d85bd:L6d85bd:{c.instructions+=2;NFSU2_TR(0x6d85bd);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6d85bf:{NFSU2_TR(0x6d85bf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d85c5;}}
}
B6d85c1:L6d85c1:{c.instructions+=2;NFSU2_TR(0x6d85c1);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6d85c3:{NFSU2_TR(0x6d85c3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d85f7;}}
}
B6d85c5:L6d85c5:{c.instructions+=3;NFSU2_TR(0x6d85c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d85c8:{NFSU2_TR(0x6d85c8);
u8 U[16];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+8))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d85cc:{NFSU2_TR(0x6d85cc);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6d85e4;}}
}
B6d85ce:L6d85ce:{c.instructions+=3;NFSU2_TR(0x6d85ce);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B6d85cf:{NFSU2_TR(0x6d85cf);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+20))<(r4(U+0))));
}
B6d85d1:{NFSU2_TR(0x6d85d1);
if(r1(R+512)){{goto L6d85d5;}}
}
B6d85d3:L6d85d3:{c.instructions+=1;NFSU2_TR(0x6d85d3);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B6d85d5:L6d85d5:{c.instructions+=5;NFSU2_TR(0x6d85d5);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d85d9:{NFSU2_TR(0x6d85d9);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6d85dd:{NFSU2_TR(0x6d85dd);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6d85de:{NFSU2_TR(0x6d85de);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d85e2:{NFSU2_TR(0x6d85e2);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d8586u);}goto L6d8586;}
}
B6d85e4:L6d85e4:{c.instructions+=9;NFSU2_TR(0x6d85e4);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d85e8:{NFSU2_TR(0x6d85e8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6d85e9:{NFSU2_TR(0x6d85e9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6d85ea:{NFSU2_TR(0x6d85ea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6d85eb:{NFSU2_TR(0x6d85eb);
u8 U[1];
w1(U+0,u8(0x0ull));
s1(u32(r4(R+4)),r1(U+0));
}
B6d85ee:{NFSU2_TR(0x6d85ee);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6d85f0:{NFSU2_TR(0x6d85f0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6d85f1:{NFSU2_TR(0x6d85f1);
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
B6d85f4:{NFSU2_TR(0x6d85f4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6d85f7:L6d85f7:{c.instructions+=4;NFSU2_TR(0x6d85f7);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d85fb:{NFSU2_TR(0x6d85fb);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6d85fe:{NFSU2_TR(0x6d85fe);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6d8600:{NFSU2_TR(0x6d8600);
if(r1(R+518)){{goto L6d8615;}}
}
B6d8602:L6d8602:{c.instructions+=9;NFSU2_TR(0x6d8602);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d8606:{NFSU2_TR(0x6d8606);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6d8607:{NFSU2_TR(0x6d8607);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6d8608:{NFSU2_TR(0x6d8608);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6d8609:{NFSU2_TR(0x6d8609);
u8 U[1];
w1(U+0,u8(0x1ull));
s1(u32(r4(R+4)),r1(U+0));
}
B6d860c:{NFSU2_TR(0x6d860c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6d860e:{NFSU2_TR(0x6d860e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6d860f:{NFSU2_TR(0x6d860f);
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
B6d8612:{NFSU2_TR(0x6d8612);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6d8615:L6d8615:{c.instructions+=6;NFSU2_TR(0x6d8615);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6d8619:{NFSU2_TR(0x6d8619);
u8 U[1];
w1(U+0,u8(0x0ull));
s1(u32(r4(R+28)),r1(U+0));
}
B6d861c:{NFSU2_TR(0x6d861c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6d861f:{NFSU2_TR(0x6d861f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6d8621:{NFSU2_TR(0x6d8621);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6d8623:{NFSU2_TR(0x6d8623);
if(r1(R+518)){{goto L6d8642;}}
}
B6d8625:L6d8625:{c.instructions+=2;NFSU2_TR(0x6d8625);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6d8629:{NFSU2_TR(0x6d8629);
__builtin_memmove((R+16),(R+16),4);
}
B6d8630:L6d8630:{c.instructions+=2;NFSU2_TR(0x6d8630);
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
B6d8632:{NFSU2_TR(0x6d8632);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d8642;}}
}
B6d8634:L6d8634:{c.instructions+=3;NFSU2_TR(0x6d8634);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d8635:{NFSU2_TR(0x6d8635);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d8636:{NFSU2_TR(0x6d8636);
u8 U[8];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d8638ull));
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B6d8638:L6d8638:{c.instructions+=4;NFSU2_TR(0x6d8638);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6d863b:{NFSU2_TR(0x6d863b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B6d863e:{NFSU2_TR(0x6d863e);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6d8640:{NFSU2_TR(0x6d8640);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d8630u);}goto L6d8630;}}
}
B6d8642:L6d8642:{c.instructions+=6;NFSU2_TR(0x6d8642);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6d8643:{NFSU2_TR(0x6d8643);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6d8644:{NFSU2_TR(0x6d8644);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6d8645:{NFSU2_TR(0x6d8645);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6d8646:{NFSU2_TR(0x6d8646);
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
B6d8649:{NFSU2_TR(0x6d8649);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6d8650:L6d8650:{c.instructions+=5;NFSU2_TR(0x6d8650);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d8651:{NFSU2_TR(0x6d8651);
__builtin_memmove((R+24),(R+4),4);
}
B6d8653:{NFSU2_TR(0x6d8653);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d8656:{NFSU2_TR(0x6d8656);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6d8658:{NFSU2_TR(0x6d8658);
if(r1(R+518)){{goto L6d86a0;}}
}
B6d865a:L6d865a:{c.instructions+=5;NFSU2_TR(0x6d865a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d865d:{NFSU2_TR(0x6d865d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d865e:{NFSU2_TR(0x6d865e);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6d8660:{NFSU2_TR(0x6d8660);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6d8662:{NFSU2_TR(0x6d8662);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6d869f;}}
}
B6d8664:L6d8664:{c.instructions+=1;NFSU2_TR(0x6d8664);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d8665:L6d8665:{c.instructions+=4;NFSU2_TR(0x6d8665);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d8668:{NFSU2_TR(0x6d8668);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6d866b:{NFSU2_TR(0x6d866b);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6d866d:{NFSU2_TR(0x6d866d);
if(r1(R+518)){{goto L6d868c;}}
}
B6d866f:L6d866f:{c.instructions+=2;NFSU2_TR(0x6d866f);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6d8672:{NFSU2_TR(0x6d8672);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6d8675:L6d8675:{c.instructions+=4;NFSU2_TR(0x6d8675);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
__builtin_memmove((R+4),(U+0),1);
}
B6d8677:{NFSU2_TR(0x6d8677);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6d8678:{NFSU2_TR(0x6d8678);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6d867a:{NFSU2_TR(0x6d867a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d8675u);}goto L6d8675;}}
}
B6d867c:L6d867c:{c.instructions+=5;NFSU2_TR(0x6d867c);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+20))));
}
B6d867e:{NFSU2_TR(0x6d867e);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x5ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x5ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x5ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6d8681:{NFSU2_TR(0x6d8681);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d8682:{NFSU2_TR(0x6d8682);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d8683:{NFSU2_TR(0x6d8683);
u8 U[4];
__builtin_memmove((U+0),gp(0x80bfdc),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d8689ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6d8689:L6d8689:{c.instructions+=1;NFSU2_TR(0x6d8689);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B6d868c:L6d868c:{c.instructions+=6;NFSU2_TR(0x6d868c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d868f:{NFSU2_TR(0x6d868f);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
w4(U+8,u32(0x0ull));
s4(u32(r4(U+4)),r4(U+8));
}
B6d8696:{NFSU2_TR(0x6d8696);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d8699:{NFSU2_TR(0x6d8699);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6d869a:{NFSU2_TR(0x6d869a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+28))<(r4(U+0))));
}
B6d869c:{NFSU2_TR(0x6d869c);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d8665u);}goto L6d8665;}}
}
B6d869e:L6d869e:{c.instructions+=1;NFSU2_TR(0x6d869e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6d869f:L6d869f:{c.instructions+=1;NFSU2_TR(0x6d869f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6d86a0:L6d86a0:{c.instructions+=4;NFSU2_TR(0x6d86a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d86a3:{NFSU2_TR(0x6d86a3);
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
B6d86a5:{NFSU2_TR(0x6d86a5);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+24)),r4(U+0));
}
B6d86ab:{NFSU2_TR(0x6d86ab);
if(r1(R+518)){{goto L6d86cc;}}
}
B6d86ad:L6d86ad:{c.instructions+=1;NFSU2_TR(0x6d86ad);
__builtin_memmove((R+4),(R+4),4);
}
B6d86b0:L6d86b0:{c.instructions+=6;NFSU2_TR(0x6d86b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d86b3:{NFSU2_TR(0x6d86b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d86b6:{NFSU2_TR(0x6d86b6);
u8 U[4];
w4(U+0,u32(0xcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d86b8:{NFSU2_TR(0x6d86b8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d86b9:{NFSU2_TR(0x6d86b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d86bc:{NFSU2_TR(0x6d86bc);
u8 U[4];
__builtin_memmove((U+0),gp(0x80bfdc),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d86c2ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6d86c2:L6d86c2:{c.instructions+=4;NFSU2_TR(0x6d86c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d86c5:{NFSU2_TR(0x6d86c5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B6d86c8:{NFSU2_TR(0x6d86c8);
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
B6d86ca:{NFSU2_TR(0x6d86ca);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d86b0u);}goto L6d86b0;}}
}
B6d86cc:L6d86cc:{c.instructions+=3;NFSU2_TR(0x6d86cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6d86d3:{NFSU2_TR(0x6d86d3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6d86d4:{NFSU2_TR(0x6d86d4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6d86e0:L6d86e0:{c.instructions+=3;NFSU2_TR(0x6d86e0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d86e1:{NFSU2_TR(0x6d86e1);
__builtin_memmove((R+24),(R+4),4);
}
B6d86e3:{NFSU2_TR(0x6d86e3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d86e8ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d8650u);}goto L6d8650;}
}
B6d86e8:L6d86e8:{c.instructions+=3;NFSU2_TR(0x6d86e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d86eb:{NFSU2_TR(0x6d86eb);
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
B6d86ed:{NFSU2_TR(0x6d86ed);
if(r1(R+518)){{goto L6d8707;}}
}
B6d86ef:L6d86ef:{c.instructions+=5;NFSU2_TR(0x6d86ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d86f2:{NFSU2_TR(0x6d86f2);
u8 U[45];
w4(U+37,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
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
B6d86f5:{NFSU2_TR(0x6d86f5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d86f6:{NFSU2_TR(0x6d86f6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d86f7:{NFSU2_TR(0x6d86f7);
u8 U[4];
__builtin_memmove((U+0),gp(0x80bfdc),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d86fdull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6d86fd:L6d86fd:{c.instructions+=2;NFSU2_TR(0x6d86fd);
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
B6d8700:{NFSU2_TR(0x6d8700);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6d8707:L6d8707:{c.instructions+=2;NFSU2_TR(0x6d8707);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6d8708:{NFSU2_TR(0x6d8708);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6d8710:L6d8710:{c.instructions+=5;NFSU2_TR(0x6d8710);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d8714:{NFSU2_TR(0x6d8714);
__builtin_memmove((R+8),gp(0x80c00c),4);
}
B6d871a:{NFSU2_TR(0x6d871a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6d871c:{NFSU2_TR(0x6d871c);
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
B6d871e:{NFSU2_TR(0x6d871e);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L6d874b;}}
}
B6d8720:L6d8720:{c.instructions+=5;NFSU2_TR(0x6d8720);
__builtin_memmove((R+0),gp(0x8a71e8),4);
}
B6d8725:{NFSU2_TR(0x6d8725);
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
B6d8727:{NFSU2_TR(0x6d8727);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B6d872b:{NFSU2_TR(0x6d872b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d872c:{NFSU2_TR(0x6d872c);
if(r1(R+518)){{goto L6d8739;}}
}
B6d872e:L6d872e:{c.instructions+=3;NFSU2_TR(0x6d872e);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d8732:{NFSU2_TR(0x6d8732);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d8733:{NFSU2_TR(0x6d8733);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d8735ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6d8735:L6d8735:{c.instructions+=2;NFSU2_TR(0x6d8735);
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
B6d8738:{NFSU2_TR(0x6d8738);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6d8739:L6d8739:{c.instructions+=4;NFSU2_TR(0x6d8739);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d873d:{NFSU2_TR(0x6d873d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d873e:{NFSU2_TR(0x6d873e);
u8 U[4];
w4(U+0,u32(0x819f30ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d8743:{NFSU2_TR(0x6d8743);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d8748ull));
TAIL_STATIC(0x75f209u,75f);
}
B6d8748:L6d8748:{c.instructions+=1;NFSU2_TR(0x6d8748);
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
B6d874b:L6d874b:{c.instructions+=1;NFSU2_TR(0x6d874b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6d8750:L6d8750:{c.instructions+=8;NFSU2_TR(0x6d8750);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d8754:{NFSU2_TR(0x6d8754);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d8755:{NFSU2_TR(0x6d8755);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d8756:{NFSU2_TR(0x6d8756);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6d875a:{NFSU2_TR(0x6d875a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d875b:{NFSU2_TR(0x6d875b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d875c:{NFSU2_TR(0x6d875c);
__builtin_memmove((R+24),(R+4),4);
}
B6d875e:{NFSU2_TR(0x6d875e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d8763ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d84f0u);}goto L6d84f0;}
}
B6d8763:L6d8763:{c.instructions+=5;NFSU2_TR(0x6d8763);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d8767:{NFSU2_TR(0x6d8767);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d8768:{NFSU2_TR(0x6d8768);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d8769:{NFSU2_TR(0x6d8769);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6d876c:{NFSU2_TR(0x6d876c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d8771ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d84f0u);}goto L6d84f0;}
}
B6d8771:L6d8771:{c.instructions+=3;NFSU2_TR(0x6d8771);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6d8772:{NFSU2_TR(0x6d8772);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6d8773:{NFSU2_TR(0x6d8773);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6d8780:L6d8780:{c.instructions+=5;NFSU2_TR(0x6d8780);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d8784:{NFSU2_TR(0x6d8784);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B6d8788:{NFSU2_TR(0x6d8788);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d8789:{NFSU2_TR(0x6d8789);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d878a:{NFSU2_TR(0x6d878a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d878full));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d8550u);}goto L6d8550;}
}
B6d878f:L6d878f:{c.instructions+=5;NFSU2_TR(0x6d878f);
u8 U[5];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B6d8793:{NFSU2_TR(0x6d8793);
w1(R+512,u8((r1(R+4))!=(u8(0x0ull))));
w1(R+4,u8(0-u32(r1(R+4))));
}
B6d8795:{NFSU2_TR(0x6d8795);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(R+4))));
w4(R+4,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B6d8797:{NFSU2_TR(0x6d8797);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6d8799:{NFSU2_TR(0x6d8799);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6d87a0:L6d87a0:{c.instructions+=6;NFSU2_TR(0x6d87a0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d87a4:{NFSU2_TR(0x6d87a4);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B6d87a8:{NFSU2_TR(0x6d87a8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d87a9:{NFSU2_TR(0x6d87a9);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d87aa:{NFSU2_TR(0x6d87aa);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x14ull))));
}
B6d87ad:{NFSU2_TR(0x6d87ad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d87b2ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d8550u);}goto L6d8550;}
}
B6d87b2:L6d87b2:{c.instructions+=5;NFSU2_TR(0x6d87b2);
u8 U[5];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B6d87b6:{NFSU2_TR(0x6d87b6);
w1(R+512,u8((r1(R+4))!=(u8(0x0ull))));
w1(R+4,u8(0-u32(r1(R+4))));
}
B6d87b8:{NFSU2_TR(0x6d87b8);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(R+4))));
w4(R+4,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B6d87ba:{NFSU2_TR(0x6d87ba);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6d87bc:{NFSU2_TR(0x6d87bc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6d87c0:L6d87c0:{c.instructions+=4;NFSU2_TR(0x6d87c0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d87c1:{NFSU2_TR(0x6d87c1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d87c2:{NFSU2_TR(0x6d87c2);
__builtin_memmove((R+24),(R+4),4);
}
B6d87c4:{NFSU2_TR(0x6d87c4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d87c9ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d86e0u);}goto L6d86e0;}
}
B6d87c9:L6d87c9:{c.instructions+=3;NFSU2_TR(0x6d87c9);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6d87cc:{NFSU2_TR(0x6d87cc);
__builtin_memmove((R+4),(R+28),4);
}
B6d87ce:{NFSU2_TR(0x6d87ce);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d87d3ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d86e0u);}goto L6d86e0;}
}
B6d87d3:L6d87d3:{c.instructions+=2;NFSU2_TR(0x6d87d3);
__builtin_memmove((R+4),(R+28),4);
}
B6d87d5:{NFSU2_TR(0x6d87d5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d87daull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d86e0u);}goto L6d86e0;}
}
B6d87da:L6d87da:{c.instructions+=4;NFSU2_TR(0x6d87da);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6d87db:{NFSU2_TR(0x6d87db);
__builtin_memmove((R+4),(R+24),4);
}
B6d87dd:{NFSU2_TR(0x6d87dd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6d87de:{NFSU2_TR(0x6d87de);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d86e0u);}goto L6d86e0;}
}
B6d87f0:L6d87f0:{c.instructions+=3;NFSU2_TR(0x6d87f0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6d87f2:{NFSU2_TR(0x6d87f2);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B6d87f5:{NFSU2_TR(0x6d87f5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6d8800:L6d8800:{c.instructions+=2;NFSU2_TR(0x6d8800);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d8802:{NFSU2_TR(0x6d8802);
u8 U[4];
__builtin_memmove((U+0),gp(0x783150),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d8808ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6d8808:L6d8808:{c.instructions+=1;NFSU2_TR(0x6d8808);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6d8810:L6d8810:{c.instructions+=6;NFSU2_TR(0x6d8810);
__builtin_memmove((R+0),gp(0x8a730c),4);
}
B6d8815:{NFSU2_TR(0x6d8815);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d8817:{NFSU2_TR(0x6d8817);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d8819:{NFSU2_TR(0x6d8819);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d881b:{NFSU2_TR(0x6d881b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d881c:{NFSU2_TR(0x6d881c);
u8 U[4];
__builtin_memmove((U+0),gp(0x783374),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d8822ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6d8822:L6d8822:{c.instructions+=1;NFSU2_TR(0x6d8822);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6d8830:L6d8830:{c.instructions+=3;NFSU2_TR(0x6d8830);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d8831:{NFSU2_TR(0x6d8831);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d8832:{NFSU2_TR(0x6d8832);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d8837ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d81f0u);}goto L6d81f0;}
}
B6d8837:L6d8837:{c.instructions+=3;NFSU2_TR(0x6d8837);
__builtin_memmove((R+4),(R+0),4);
}
B6d8839:{NFSU2_TR(0x6d8839);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0x4ull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0x4ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6d883c:{NFSU2_TR(0x6d883c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d8841ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d81b0u);}goto L6d81b0;}
}
B6d8841:L6d8841:{c.instructions+=1;NFSU2_TR(0x6d8841);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d8846ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d81f0u);}goto L6d81f0;}
}
B6d8846:L6d8846:{c.instructions+=1;NFSU2_TR(0x6d8846);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d884bull));
TAIL_STATIC(0x6dc2c0u,6dc);
}
B6d884b:L6d884b:{c.instructions+=7;NFSU2_TR(0x6d884b);
__builtin_memmove((R+24),gp(0x783330),4);
}
B6d8851:{NFSU2_TR(0x6d8851);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d8853:{NFSU2_TR(0x6d8853);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d8855:{NFSU2_TR(0x6d8855);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d8857:{NFSU2_TR(0x6d8857);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d8859:{NFSU2_TR(0x6d8859);
u8 U[4];
w4(U+0,u32(0x8a7360ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d885e:{NFSU2_TR(0x6d885e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d8860ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6d8860:L6d8860:{c.instructions+=2;NFSU2_TR(0x6d8860);
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
B6d8862:{NFSU2_TR(0x6d8862);
if(r1(R+518)){{goto L6d8895;}}
}
B6d8864:L6d8864:{c.instructions+=4;NFSU2_TR(0x6d8864);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d8865:{NFSU2_TR(0x6d8865);
__builtin_memmove((R+12),gp(0x78332c),4);
}
B6d886b:{NFSU2_TR(0x6d886b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d886c:{NFSU2_TR(0x6d886c);
__builtin_memmove((R+28),gp(0x783334),4);
}
B6d8872:L6d8872:{c.instructions+=2;NFSU2_TR(0x6d8872);
u8 U[4];
w4(U+0,u32(0x8a7360ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d8877:{NFSU2_TR(0x6d8877);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d8879ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6d8879:L6d8879:{c.instructions+=2;NFSU2_TR(0x6d8879);
u8 U[4];
w4(U+0,u32(0x8a7360ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d887e:{NFSU2_TR(0x6d887e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d8880ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6d8880:L6d8880:{c.instructions+=6;NFSU2_TR(0x6d8880);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d8882:{NFSU2_TR(0x6d8882);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d8884:{NFSU2_TR(0x6d8884);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d8886:{NFSU2_TR(0x6d8886);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d8888:{NFSU2_TR(0x6d8888);
u8 U[4];
w4(U+0,u32(0x8a7360ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d888d:{NFSU2_TR(0x6d888d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d888full));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6d888f:L6d888f:{c.instructions+=2;NFSU2_TR(0x6d888f);
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
B6d8891:{NFSU2_TR(0x6d8891);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d8872u);}goto L6d8872;}}
}
B6d8893:L6d8893:{c.instructions+=2;NFSU2_TR(0x6d8893);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6d8894:{NFSU2_TR(0x6d8894);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6d8895:L6d8895:{c.instructions+=2;NFSU2_TR(0x6d8895);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6d8896:{NFSU2_TR(0x6d8896);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6d88a0:L6d88a0:{c.instructions+=5;NFSU2_TR(0x6d88a0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d88a1:{NFSU2_TR(0x6d88a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d88a4:{NFSU2_TR(0x6d88a4);
{u32 ea_=u32(r4(R+4)+u32(76u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6d88a7:{NFSU2_TR(0x6d88a7);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6d88a9:{NFSU2_TR(0x6d88a9);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6d88b1;}}
}
B6d88ab:L6d88ab:{c.instructions+=1;NFSU2_TR(0x6d88ab);
{u32 ea_=u32(u32(7882060u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6d88b1:L6d88b1:{c.instructions+=6;NFSU2_TR(0x6d88b1);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d88b5:{NFSU2_TR(0x6d88b5);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6d88b7:{NFSU2_TR(0x6d88b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d88ba:{NFSU2_TR(0x6d88ba);
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
B6d88bc:{NFSU2_TR(0x6d88bc);
{u32 ea_=u32(r4(R+4)+u32(80u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B6d88bf:{NFSU2_TR(0x6d88bf);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6d88c7;}}
}
B6d88c1:L6d88c1:{c.instructions+=1;NFSU2_TR(0x6d88c1);
{u32 ea_=u32(u32(7882060u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6d88c7:L6d88c7:{c.instructions+=4;NFSU2_TR(0x6d88c7);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d88cb:{NFSU2_TR(0x6d88cb);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6d88cd:{NFSU2_TR(0x6d88cd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6d88ce:{NFSU2_TR(0x6d88ce);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6d88e0:L6d88e0:{c.instructions+=11;NFSU2_TR(0x6d88e0);
__builtin_memmove((R+0),gp(0x8a79b8),1);
}
B6d88e5:{NFSU2_TR(0x6d88e5);
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
B6d88e7:{NFSU2_TR(0x6d88e7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d88e8:{NFSU2_TR(0x6d88e8);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6d88ec:{NFSU2_TR(0x6d88ec);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d88ed:{NFSU2_TR(0x6d88ed);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B6d88f1:{NFSU2_TR(0x6d88f1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d88f2:{NFSU2_TR(0x6d88f2);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6d88f6:{NFSU2_TR(0x6d88f6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d88f7:{NFSU2_TR(0x6d88f7);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6d88fb:{NFSU2_TR(0x6d88fb);
if(r1(R+518)){{goto L6d891d;}}
}
B6d88fd:L6d88fd:{c.instructions+=7;NFSU2_TR(0x6d88fd);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B6d8901:{NFSU2_TR(0x6d8901);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d8902:{NFSU2_TR(0x6d8902);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d8903:{NFSU2_TR(0x6d8903);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d8904:{NFSU2_TR(0x6d8904);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d8905:{NFSU2_TR(0x6d8905);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d8906:{NFSU2_TR(0x6d8906);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d890bull));
TAIL_STATIC(0x81cb28u,81c);
}
B6d890b:L6d890b:{c.instructions+=3;NFSU2_TR(0x6d890b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B6d890e:{NFSU2_TR(0x6d890e);
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
B6d8910:{NFSU2_TR(0x6d8910);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6d891d;}}
}
B6d8912:L6d8912:{c.instructions+=6;NFSU2_TR(0x6d8912);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d8916:{NFSU2_TR(0x6d8916);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6d8917:{NFSU2_TR(0x6d8917);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6d8918:{NFSU2_TR(0x6d8918);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6d8919:{NFSU2_TR(0x6d8919);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6d891a:{NFSU2_TR(0x6d891a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6d891d:L6d891d:{c.instructions+=5;NFSU2_TR(0x6d891d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d891e:{NFSU2_TR(0x6d891e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d891f:{NFSU2_TR(0x6d891f);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d8920:{NFSU2_TR(0x6d8920);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d8921:{NFSU2_TR(0x6d8921);
u8 U[4];
__builtin_memmove((U+0),gp(0x783320),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d8927ull));
{u32 t_=u32(r4(U+0));TAIL_DYNAMIC(t_);}
}
B6d8927:L6d8927:{c.instructions+=5;NFSU2_TR(0x6d8927);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6d8928:{NFSU2_TR(0x6d8928);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6d8929:{NFSU2_TR(0x6d8929);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6d892a:{NFSU2_TR(0x6d892a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6d892b:{NFSU2_TR(0x6d892b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6d8930:L6d8930:{c.instructions+=6;NFSU2_TR(0x6d8930);
u8 U[5];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B6d8934:{NFSU2_TR(0x6d8934);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x99ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B6d893a:{NFSU2_TR(0x6d893a);
__builtin_memmove((R+8),gp(0x80eef4),4);
}
B6d8940:{NFSU2_TR(0x6d8940);
w4(R+0,u32(r1(R+0)));
}
B6d8943:{NFSU2_TR(0x6d8943);
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
B6d8945:{NFSU2_TR(0x6d8945);
if(r1(R+518)){{goto L6d8968;}}
}
B6d8947:L6d8947:{c.instructions+=4;NFSU2_TR(0x6d8947);
__builtin_memmove(gp(0x80eef4),(R+0),4);
}
B6d894c:{NFSU2_TR(0x6d894c);
__builtin_memmove((R+0),gp(0x8a79a0),4);
}
B6d8951:{NFSU2_TR(0x6d8951);
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
B6d8953:{NFSU2_TR(0x6d8953);
if(r1(R+518)){{goto L6d8968;}}
}
B6d8955:L6d8955:{c.instructions+=6;NFSU2_TR(0x6d8955);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x99ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B6d895c:{NFSU2_TR(0x6d895c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6d895e:{NFSU2_TR(0x6d895e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d895f:{NFSU2_TR(0x6d895f);
u8 U[4];
w4(U+0,u32(0xeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d8961:{NFSU2_TR(0x6d8961);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d8962:{NFSU2_TR(0x6d8962);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d8968ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6d8968:L6d8968:{c.instructions+=2;NFSU2_TR(0x6d8968);
w1(R+0,u8(0x1ull));
}
B6d896a:{NFSU2_TR(0x6d896a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6d8970:L6d8970:{c.instructions+=5;NFSU2_TR(0x6d8970);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x99ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B6d8976:{NFSU2_TR(0x6d8976);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d897a:{NFSU2_TR(0x6d897a);
u8 U[1];
__builtin_memmove((U+0),(R+0),1);
s1(u32(r4(R+4)),r1(U+0));
}
B6d897c:{NFSU2_TR(0x6d897c);
w1(R+0,u8(0x1ull));
}
B6d897e:{NFSU2_TR(0x6d897e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6d8990:L6d8990:{c.instructions+=6;NFSU2_TR(0x6d8990);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d8993:{NFSU2_TR(0x6d8993);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d8996:{NFSU2_TR(0x6d8996);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d899a:{NFSU2_TR(0x6d899a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+8)),r4(U+0));
}
B6d899c:{NFSU2_TR(0x6d899c);
w1(R+0,u8(0x1ull));
}
B6d899e:{NFSU2_TR(0x6d899e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6d89b0:L6d89b0:{c.instructions+=5;NFSU2_TR(0x6d89b0);
__builtin_memmove((R+0),gp(0x80c08c),4);
}
B6d89b5:{NFSU2_TR(0x6d89b5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d89b6:{NFSU2_TR(0x6d89b6);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6d89ba:{NFSU2_TR(0x6d89ba);
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
B6d89bc:{NFSU2_TR(0x6d89bc);
if(r1(R+518)){{goto L6d89dd;}}
}
B6d89be:L6d89be:{c.instructions+=1;NFSU2_TR(0x6d89be);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d89c3ull));
TAIL_STATIC(0x6dc250u,6dc);
}
B6d89c3:L6d89c3:{c.instructions+=7;NFSU2_TR(0x6d89c3);
__builtin_memmove((R+0),gp(0x8a79a0),4);
}
B6d89c8:{NFSU2_TR(0x6d89c8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6d89ca:{NFSU2_TR(0x6d89ca);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d89cb:{NFSU2_TR(0x6d89cb);
u8 U[4];
w4(U+0,u32(0x99ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d89d0:{NFSU2_TR(0x6d89d0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d89d1:{NFSU2_TR(0x6d89d1);
__builtin_memmove(gp(0x80c08c),(R+24),4);
}
B6d89d7:{NFSU2_TR(0x6d89d7);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d89ddull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6d89dd:L6d89dd:{c.instructions+=3;NFSU2_TR(0x6d89dd);
w1(R+0,u8(0x1ull));
}
B6d89df:{NFSU2_TR(0x6d89df);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6d89e0:{NFSU2_TR(0x6d89e0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6d89f0:L6d89f0:{c.instructions+=9;NFSU2_TR(0x6d89f0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B6d89f3:{NFSU2_TR(0x6d89f3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d89f4:{NFSU2_TR(0x6d89f4);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d89f5:{NFSU2_TR(0x6d89f5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d89f6:{NFSU2_TR(0x6d89f6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d89f7:{NFSU2_TR(0x6d89f7);
__builtin_memmove((R+28),(R+4),4);
}
B6d89f9:{NFSU2_TR(0x6d89f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d89fc:{NFSU2_TR(0x6d89fc);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x10ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d8a00:{NFSU2_TR(0x6d8a00);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L6d8a10;}}
}
B6d8a02:L6d8a02:{c.instructions+=4;NFSU2_TR(0x6d8a02);
w4(R+20,u32(0x7c0884ull));
}
B6d8a07:{NFSU2_TR(0x6d8a07);
w4(R+0,u32(0x5ull));
}
B6d8a0c:{NFSU2_TR(0x6d8a0c);
__builtin_memmove((R+12),(R+20),4);
}
B6d8a0e:{NFSU2_TR(0x6d8a0e);
{goto L6d8a1c;}
}
B6d8a10:L6d8a10:{c.instructions+=3;NFSU2_TR(0x6d8a10);
w4(R+20,u32(0x7c089cull));
}
B6d8a15:{NFSU2_TR(0x6d8a15);
w4(R+0,u32(0x2ull));
}
B6d8a1a:{NFSU2_TR(0x6d8a1a);
__builtin_memmove((R+12),(R+20),4);
}
B6d8a1c:L6d8a1c:{c.instructions+=7;NFSU2_TR(0x6d8a1c);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6d8a1e:{NFSU2_TR(0x6d8a1e);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6d8a20:{NFSU2_TR(0x6d8a20);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d8a24:{NFSU2_TR(0x6d8a24);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d8a28:{NFSU2_TR(0x6d8a28);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d8a2c:{NFSU2_TR(0x6d8a2c);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d8a30:{NFSU2_TR(0x6d8a30);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6d8abf;}}
}
B6d8a36:L6d8a36:{c.instructions+=1;NFSU2_TR(0x6d8a36);
{goto L6d8a40;}
}
B6d8a40:L6d8a40:{c.instructions+=2;NFSU2_TR(0x6d8a40);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6d8a42:{NFSU2_TR(0x6d8a42);
{goto L6d8a50;}
}
B6d8a50:L6d8a50:{c.instructions+=15;NFSU2_TR(0x6d8a50);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d8a53:{NFSU2_TR(0x6d8a53);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xd0ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6d8a5d:{NFSU2_TR(0x6d8a5d);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6d8a60:{NFSU2_TR(0x6d8a60);
__builtin_memmove((R+0),gp(0x8a799c),4);
}
B6d8a65:{NFSU2_TR(0x6d8a65);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6d8a67:{NFSU2_TR(0x6d8a67);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d8a69:{NFSU2_TR(0x6d8a69);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d8a6a:{NFSU2_TR(0x6d8a6a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6d8a6d:{NFSU2_TR(0x6d8a6d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d8a6e:{NFSU2_TR(0x6d8a6e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d8a71:{NFSU2_TR(0x6d8a71);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d8a77:{NFSU2_TR(0x6d8a77);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d8a79:{NFSU2_TR(0x6d8a79);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d8a7a:{NFSU2_TR(0x6d8a7a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d8a7b:{NFSU2_TR(0x6d8a7b);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d8a7eull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6d8a7e:L6d8a7e:{c.instructions+=2;NFSU2_TR(0x6d8a7e);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6d8a80:{NFSU2_TR(0x6d8a80);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6d8a8d;}}
}
B6d8a82:L6d8a82:{c.instructions+=4;NFSU2_TR(0x6d8a82);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d8a86:{NFSU2_TR(0x6d8a86);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6d8a87:{NFSU2_TR(0x6d8a87);
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
B6d8a89:{NFSU2_TR(0x6d8a89);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d8a50u);}goto L6d8a50;}}
}
B6d8a8b:L6d8a8b:{c.instructions+=1;NFSU2_TR(0x6d8a8b);
{goto L6d8a9b;}
}
B6d8a8d:L6d8a8d:{c.instructions+=4;NFSU2_TR(0x6d8a8d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6d8a90:{NFSU2_TR(0x6d8a90);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+12))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6d8a93:{NFSU2_TR(0x6d8a93);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d8a97:{NFSU2_TR(0x6d8a97);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d8a9b:L6d8a9b:{c.instructions+=3;NFSU2_TR(0x6d8a9b);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d8a9f:{NFSU2_TR(0x6d8a9f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6d8aa1:{NFSU2_TR(0x6d8aa1);
if(r1(R+518)){{goto L6d8aab;}}
}
B6d8aa3:L6d8aa3:{c.instructions+=3;NFSU2_TR(0x6d8aa3);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d8aa7:{NFSU2_TR(0x6d8aa7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6d8aa9:{NFSU2_TR(0x6d8aa9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d8abf;}}
}
B6d8aab:L6d8aab:{c.instructions+=7;NFSU2_TR(0x6d8aab);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d8aaf:{NFSU2_TR(0x6d8aaf);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d8ab3:{NFSU2_TR(0x6d8ab3);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6d8ab4:{NFSU2_TR(0x6d8ab4);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x4ull))));
}
B6d8ab7:{NFSU2_TR(0x6d8ab7);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6d8ab9:{NFSU2_TR(0x6d8ab9);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d8abd:{NFSU2_TR(0x6d8abd);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d8a40u);}goto L6d8a40;}}
}
B6d8abf:L6d8abf:{c.instructions+=3;NFSU2_TR(0x6d8abf);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d8ac2:{NFSU2_TR(0x6d8ac2);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(U+8),u32(0x10ull)));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d8ac6:{NFSU2_TR(0x6d8ac6);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6d8b9f;}}
}
B6d8acc:L6d8acc:{c.instructions+=3;NFSU2_TR(0x6d8acc);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d8ad0:{NFSU2_TR(0x6d8ad0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6d8ad2:{NFSU2_TR(0x6d8ad2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d8b9f;}}
}
B6d8ad8:L6d8ad8:{c.instructions+=4;NFSU2_TR(0x6d8ad8);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d8adc:{NFSU2_TR(0x6d8adc);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6d8ade:{NFSU2_TR(0x6d8ade);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6d8ae6:{NFSU2_TR(0x6d8ae6);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6d8f66;}}
}
B6d8aec:L6d8aec:{c.instructions+=1;NFSU2_TR(0x6d8aec);
w4(R+20,u32(0x7c0884ull));
}
B6d8af1:L6d8af1:{c.instructions+=3;NFSU2_TR(0x6d8af1);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6d8af3:{NFSU2_TR(0x6d8af3);
w4(R+12,u32(0x1ull));
}
B6d8af8:{NFSU2_TR(0x6d8af8);
{goto L6d8b00;}
}
B6d8b00:L6d8b00:{c.instructions+=15;NFSU2_TR(0x6d8b00);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d8b03:{NFSU2_TR(0x6d8b03);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d8b09:{NFSU2_TR(0x6d8b09);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7c0884ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6d8b10:{NFSU2_TR(0x6d8b10);
__builtin_memmove((R+0),gp(0x8a799c),4);
}
B6d8b15:{NFSU2_TR(0x6d8b15);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6d8b17:{NFSU2_TR(0x6d8b17);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d8b19:{NFSU2_TR(0x6d8b19);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d8b1a:{NFSU2_TR(0x6d8b1a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6d8b1d:{NFSU2_TR(0x6d8b1d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d8b1e:{NFSU2_TR(0x6d8b1e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d8b21:{NFSU2_TR(0x6d8b21);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d8b27:{NFSU2_TR(0x6d8b27);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d8b28:{NFSU2_TR(0x6d8b28);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d8b29:{NFSU2_TR(0x6d8b29);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d8b2a:{NFSU2_TR(0x6d8b2a);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d8b2dull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B6d8b2d:L6d8b2d:{c.instructions+=2;NFSU2_TR(0x6d8b2d);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6d8b2f:{NFSU2_TR(0x6d8b2f);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6d8b3c;}}
}
B6d8b31:L6d8b31:{c.instructions+=4;NFSU2_TR(0x6d8b31);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d8b35:{NFSU2_TR(0x6d8b35);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6d8b36:{NFSU2_TR(0x6d8b36);
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
B6d8b38:{NFSU2_TR(0x6d8b38);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d8b00u);}goto L6d8b00;}}
}
B6d8b3a:L6d8b3a:{c.instructions+=1;NFSU2_TR(0x6d8b3a);
{goto L6d8b4e;}
}
B6d8b3c:L6d8b3c:{c.instructions+=4;NFSU2_TR(0x6d8b3c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6d8b3f:{NFSU2_TR(0x6d8b3f);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7c0884ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6d8b46:{NFSU2_TR(0x6d8b46);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d8b4a:{NFSU2_TR(0x6d8b4a);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d8b4e:L6d8b4e:{c.instructions+=3;NFSU2_TR(0x6d8b4e);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d8b52:{NFSU2_TR(0x6d8b52);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6d8b54:{NFSU2_TR(0x6d8b54);
if(r1(R+518)){{goto L6d8b5e;}}
}
B6d8b56:L6d8b56:{c.instructions+=3;NFSU2_TR(0x6d8b56);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d8b5a:{NFSU2_TR(0x6d8b5a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6d8b5c:{NFSU2_TR(0x6d8b5c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d8b76;}}
}
B6d8b5e:L6d8b5e:{c.instructions+=7;NFSU2_TR(0x6d8b5e);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d8b62:{NFSU2_TR(0x6d8b62);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d8b66:{NFSU2_TR(0x6d8b66);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6d8b67:{NFSU2_TR(0x6d8b67);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x4ull))));
}
B6d8b6a:{NFSU2_TR(0x6d8b6a);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6d8b6c:{NFSU2_TR(0x6d8b6c);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d8b70:{NFSU2_TR(0x6d8b70);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d8af1u);}goto L6d8af1;}}
}
B6d8b76:L6d8b76:{c.instructions+=3;NFSU2_TR(0x6d8b76);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d8b7a:{NFSU2_TR(0x6d8b7a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6d8b7c:{NFSU2_TR(0x6d8b7c);
if(r1(R+518)){{goto L6d8f66;}}
}
B6d8b82:L6d8b82:{c.instructions+=3;NFSU2_TR(0x6d8b82);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d8b86:{NFSU2_TR(0x6d8b86);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6d8b88:{NFSU2_TR(0x6d8b88);
if(r1(R+518)){{goto L6d8f66;}}
}
B6d8b8e:L6d8b8e:{c.instructions+=5;NFSU2_TR(0x6d8b8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d8b91:{NFSU2_TR(0x6d8b91);
w4(R+0,u32(0x10ull));
}
B6d8b96:{NFSU2_TR(0x6d8b96);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d8b99:{NFSU2_TR(0x6d8b99);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d8b9c:{NFSU2_TR(0x6d8b9c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d8b9f:L6d8b9f:{c.instructions+=12;NFSU2_TR(0x6d8b9f);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d8ba3:{NFSU2_TR(0x6d8ba3);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6d8ba5:{NFSU2_TR(0x6d8ba5);
__builtin_memmove(gp(0x8a7348),(R+4),4);
}
B6d8bab:{NFSU2_TR(0x6d8bab);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d8bae:{NFSU2_TR(0x6d8bae);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d8bb1:{NFSU2_TR(0x6d8bb1);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d8bb5:{NFSU2_TR(0x6d8bb5);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d8bb8:{NFSU2_TR(0x6d8bb8);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6d8bbb:{NFSU2_TR(0x6d8bbb);
__builtin_memmove(gp(0x8a7334),(R+0),4);
}
B6d8bc0:{NFSU2_TR(0x6d8bc0);
u8 U[5];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B6d8bc4:{NFSU2_TR(0x6d8bc4);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6d8bc6:{NFSU2_TR(0x6d8bc6);
if(r1(R+518)){{goto L6d8be9;}}
}
B6d8bc8:L6d8bc8:{c.instructions+=10;NFSU2_TR(0x6d8bc8);
w4(R+24,u32(0x1ull));
}
B6d8bcd:{NFSU2_TR(0x6d8bcd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6d8bce:{NFSU2_TR(0x6d8bce);
__builtin_memmove((R+0),(R+24),4);
}
B6d8bd0:{NFSU2_TR(0x6d8bd0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6d8bd1:{NFSU2_TR(0x6d8bd1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6d8bd2:{NFSU2_TR(0x6d8bd2);
__builtin_memmove(gp(0x8a7358),(R+4),4);
}
B6d8bd8:{NFSU2_TR(0x6d8bd8);
s4(0x8a735c,u32(0x1ull));
}
B6d8be2:{NFSU2_TR(0x6d8be2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6d8be3:{NFSU2_TR(0x6d8be3);
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
B6d8be6:{NFSU2_TR(0x6d8be6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6d8be9:L6d8be9:{c.instructions+=1;NFSU2_TR(0x6d8be9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d8beeull));
TAIL_STATIC(0x6da260u,6da);
}
B6d8bee:L6d8bee:{c.instructions+=5;NFSU2_TR(0x6d8bee);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d8bf1:{NFSU2_TR(0x6d8bf1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d8bf7:{NFSU2_TR(0x6d8bf7);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B6d8bf8:{NFSU2_TR(0x6d8bf8);
w4(R+24,u32(0x1ull));
}
B6d8bfd:{NFSU2_TR(0x6d8bfd);
if(r1(R+518)){{goto L6d8ddc;}}
}
B6d8c03:L6d8c03:{c.instructions+=2;NFSU2_TR(0x6d8c03);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
}
B6d8c04:{NFSU2_TR(0x6d8c04);
if(r1(R+518)){{goto L6d8c4f;}}
}
B6d8c06:L6d8c06:{c.instructions+=1;NFSU2_TR(0x6d8c06);
s4(0x8a7358,u32(0x0ull));
}
B6d8c10:L6d8c10:{c.instructions+=1;NFSU2_TR(0x6d8c10);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d8c15ull));
TAIL_STATIC(0x6da260u,6da);
}
B6d8c15:L6d8c15:{c.instructions+=2;NFSU2_TR(0x6d8c15);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6d8c17:{NFSU2_TR(0x6d8c17);
if(r1(R+518)){{goto L6d8f72;}}
}
B6d8c1d:L6d8c1d:{c.instructions+=5;NFSU2_TR(0x6d8c1d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6d8c20:{NFSU2_TR(0x6d8c20);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B6d8c23:{NFSU2_TR(0x6d8c23);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6d8c25:{NFSU2_TR(0x6d8c25);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x238ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d8c2b:{NFSU2_TR(0x6d8c2b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d8f62;}}
}
B6d8c31:L6d8c31:{c.instructions+=2;NFSU2_TR(0x6d8c31);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6d8c33:{NFSU2_TR(0x6d8c33);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L6d8f62;}}
}
B6d8c39:L6d8c39:{c.instructions+=8;NFSU2_TR(0x6d8c39);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6d8c3a:{NFSU2_TR(0x6d8c3a);
__builtin_memmove((R+0),(R+24),4);
}
B6d8c3c:{NFSU2_TR(0x6d8c3c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6d8c3d:{NFSU2_TR(0x6d8c3d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6d8c3e:{NFSU2_TR(0x6d8c3e);
s4(0x8a735c,u32(0x80000000ull));
}
B6d8c48:{NFSU2_TR(0x6d8c48);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6d8c49:{NFSU2_TR(0x6d8c49);
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
B6d8c4c:{NFSU2_TR(0x6d8c4c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6d8c4f:L6d8c4f:{c.instructions+=3;NFSU2_TR(0x6d8c4f);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x304ull))));
}
B6d8c54:{NFSU2_TR(0x6d8c54);
w4(R+8,u32(0x20ull));
}
B6d8c59:{NFSU2_TR(0x6d8c59);
__builtin_memmove((R+16),(R+16),4);
}
B6d8c60:L6d8c60:{c.instructions+=2;NFSU2_TR(0x6d8c60);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d8c63:{NFSU2_TR(0x6d8c63);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d8c88;}}
}
B6d8c65:L6d8c65:{c.instructions+=4;NFSU2_TR(0x6d8c65);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d8c68:{NFSU2_TR(0x6d8c68);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+12),(U+0),4);
}
B6d8c6a:{NFSU2_TR(0x6d8c6a);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+12))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d8c6d:{NFSU2_TR(0x6d8c6d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d8c88;}}
}
B6d8c6f:L6d8c6f:{c.instructions+=3;NFSU2_TR(0x6d8c6f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6d8c72:{NFSU2_TR(0x6d8c72);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+12))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d8c75:{NFSU2_TR(0x6d8c75);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d8c88;}}
}
B6d8c77:L6d8c77:{c.instructions+=3;NFSU2_TR(0x6d8c77);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6d8c7a:{NFSU2_TR(0x6d8c7a);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+12))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d8c7d:{NFSU2_TR(0x6d8c7d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d8c88;}}
}
B6d8c7f:L6d8c7f:{c.instructions+=2;NFSU2_TR(0x6d8c7f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d8c82:{NFSU2_TR(0x6d8c82);
__builtin_memmove(gp(0x8a7358),(R+4),4);
}
B6d8c88:L6d8c88:{c.instructions+=2;NFSU2_TR(0x6d8c88);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d8c8b:{NFSU2_TR(0x6d8c8b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d8cb1;}}
}
B6d8c8d:L6d8c8d:{c.instructions+=4;NFSU2_TR(0x6d8c8d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d8c90:{NFSU2_TR(0x6d8c90);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6d8c93:{NFSU2_TR(0x6d8c93);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+12))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d8c96:{NFSU2_TR(0x6d8c96);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d8cb1;}}
}
B6d8c98:L6d8c98:{c.instructions+=3;NFSU2_TR(0x6d8c98);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6d8c9b:{NFSU2_TR(0x6d8c9b);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+12))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d8c9e:{NFSU2_TR(0x6d8c9e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d8cb1;}}
}
B6d8ca0:L6d8ca0:{c.instructions+=3;NFSU2_TR(0x6d8ca0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6d8ca3:{NFSU2_TR(0x6d8ca3);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+12))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d8ca6:{NFSU2_TR(0x6d8ca6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d8cb1;}}
}
B6d8ca8:L6d8ca8:{c.instructions+=2;NFSU2_TR(0x6d8ca8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d8cab:{NFSU2_TR(0x6d8cab);
__builtin_memmove(gp(0x8a7358),(R+4),4);
}
B6d8cb1:L6d8cb1:{c.instructions+=2;NFSU2_TR(0x6d8cb1);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d8cb4:{NFSU2_TR(0x6d8cb4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d8cda;}}
}
B6d8cb6:L6d8cb6:{c.instructions+=4;NFSU2_TR(0x6d8cb6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d8cb9:{NFSU2_TR(0x6d8cb9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6d8cbc:{NFSU2_TR(0x6d8cbc);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+12))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d8cbf:{NFSU2_TR(0x6d8cbf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d8cda;}}
}
B6d8cc1:L6d8cc1:{c.instructions+=3;NFSU2_TR(0x6d8cc1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6d8cc4:{NFSU2_TR(0x6d8cc4);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+12))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d8cc7:{NFSU2_TR(0x6d8cc7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d8cda;}}
}
B6d8cc9:L6d8cc9:{c.instructions+=3;NFSU2_TR(0x6d8cc9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6d8ccc:{NFSU2_TR(0x6d8ccc);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+12))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d8ccf:{NFSU2_TR(0x6d8ccf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d8cda;}}
}
B6d8cd1:L6d8cd1:{c.instructions+=2;NFSU2_TR(0x6d8cd1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d8cd4:{NFSU2_TR(0x6d8cd4);
__builtin_memmove(gp(0x8a7358),(R+4),4);
}
B6d8cda:L6d8cda:{c.instructions+=2;NFSU2_TR(0x6d8cda);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d8cdd:{NFSU2_TR(0x6d8cdd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d8d03;}}
}
B6d8cdf:L6d8cdf:{c.instructions+=4;NFSU2_TR(0x6d8cdf);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d8ce2:{NFSU2_TR(0x6d8ce2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6d8ce5:{NFSU2_TR(0x6d8ce5);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+12))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d8ce8:{NFSU2_TR(0x6d8ce8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d8d03;}}
}
B6d8cea:L6d8cea:{c.instructions+=3;NFSU2_TR(0x6d8cea);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6d8ced:{NFSU2_TR(0x6d8ced);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+12))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d8cf0:{NFSU2_TR(0x6d8cf0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d8d03;}}
}
B6d8cf2:L6d8cf2:{c.instructions+=3;NFSU2_TR(0x6d8cf2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6d8cf5:{NFSU2_TR(0x6d8cf5);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+12))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d8cf8:{NFSU2_TR(0x6d8cf8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d8d03;}}
}
B6d8cfa:L6d8cfa:{c.instructions+=2;NFSU2_TR(0x6d8cfa);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d8cfd:{NFSU2_TR(0x6d8cfd);
__builtin_memmove(gp(0x8a7358),(R+4),4);
}
B6d8d03:L6d8d03:{c.instructions+=2;NFSU2_TR(0x6d8d03);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d8d06:{NFSU2_TR(0x6d8d06);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d8d2c;}}
}
B6d8d08:L6d8d08:{c.instructions+=4;NFSU2_TR(0x6d8d08);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d8d0b:{NFSU2_TR(0x6d8d0b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6d8d0e:{NFSU2_TR(0x6d8d0e);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+12))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d8d11:{NFSU2_TR(0x6d8d11);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d8d2c;}}
}
B6d8d13:L6d8d13:{c.instructions+=3;NFSU2_TR(0x6d8d13);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6d8d16:{NFSU2_TR(0x6d8d16);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+12))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d8d19:{NFSU2_TR(0x6d8d19);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d8d2c;}}
}
B6d8d1b:L6d8d1b:{c.instructions+=3;NFSU2_TR(0x6d8d1b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6d8d1e:{NFSU2_TR(0x6d8d1e);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+12))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d8d21:{NFSU2_TR(0x6d8d21);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d8d2c;}}
}
B6d8d23:L6d8d23:{c.instructions+=2;NFSU2_TR(0x6d8d23);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d8d26:{NFSU2_TR(0x6d8d26);
__builtin_memmove(gp(0x8a7358),(R+4),4);
}
B6d8d2c:L6d8d2c:{c.instructions+=2;NFSU2_TR(0x6d8d2c);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d8d2f:{NFSU2_TR(0x6d8d2f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d8d5b;}}
}
B6d8d31:L6d8d31:{c.instructions+=4;NFSU2_TR(0x6d8d31);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d8d34:{NFSU2_TR(0x6d8d34);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6d8d37:{NFSU2_TR(0x6d8d37);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+12))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d8d3a:{NFSU2_TR(0x6d8d3a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d8d5b;}}
}
B6d8d3c:L6d8d3c:{c.instructions+=3;NFSU2_TR(0x6d8d3c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6d8d3f:{NFSU2_TR(0x6d8d3f);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+12))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d8d42:{NFSU2_TR(0x6d8d42);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d8d5b;}}
}
B6d8d44:L6d8d44:{c.instructions+=3;NFSU2_TR(0x6d8d44);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6d8d4a:{NFSU2_TR(0x6d8d4a);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+12))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d8d4d:{NFSU2_TR(0x6d8d4d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d8d5b;}}
}
B6d8d4f:L6d8d4f:{c.instructions+=2;NFSU2_TR(0x6d8d4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d8d55:{NFSU2_TR(0x6d8d55);
__builtin_memmove(gp(0x8a7358),(R+4),4);
}
B6d8d5b:L6d8d5b:{c.instructions+=2;NFSU2_TR(0x6d8d5b);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d8d61:{NFSU2_TR(0x6d8d61);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d8d93;}}
}
B6d8d63:L6d8d63:{c.instructions+=4;NFSU2_TR(0x6d8d63);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d8d66:{NFSU2_TR(0x6d8d66);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6d8d6c:{NFSU2_TR(0x6d8d6c);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+12))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d8d6f:{NFSU2_TR(0x6d8d6f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d8d93;}}
}
B6d8d71:L6d8d71:{c.instructions+=3;NFSU2_TR(0x6d8d71);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6d8d77:{NFSU2_TR(0x6d8d77);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+12))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d8d7a:{NFSU2_TR(0x6d8d7a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d8d93;}}
}
B6d8d7c:L6d8d7c:{c.instructions+=3;NFSU2_TR(0x6d8d7c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6d8d82:{NFSU2_TR(0x6d8d82);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+12))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d8d85:{NFSU2_TR(0x6d8d85);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d8d93;}}
}
B6d8d87:L6d8d87:{c.instructions+=2;NFSU2_TR(0x6d8d87);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d8d8d:{NFSU2_TR(0x6d8d8d);
__builtin_memmove(gp(0x8a7358),(R+4),4);
}
B6d8d93:L6d8d93:{c.instructions+=2;NFSU2_TR(0x6d8d93);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d8d99:{NFSU2_TR(0x6d8d99);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d8dcb;}}
}
B6d8d9b:L6d8d9b:{c.instructions+=4;NFSU2_TR(0x6d8d9b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d8d9e:{NFSU2_TR(0x6d8d9e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6d8da4:{NFSU2_TR(0x6d8da4);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+12))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d8da7:{NFSU2_TR(0x6d8da7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d8dcb;}}
}
B6d8da9:L6d8da9:{c.instructions+=3;NFSU2_TR(0x6d8da9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xacull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6d8daf:{NFSU2_TR(0x6d8daf);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+12))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d8db2:{NFSU2_TR(0x6d8db2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d8dcb;}}
}
B6d8db4:L6d8db4:{c.instructions+=3;NFSU2_TR(0x6d8db4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6d8dba:{NFSU2_TR(0x6d8dba);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+12))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d8dbd:{NFSU2_TR(0x6d8dbd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d8dcb;}}
}
B6d8dbf:L6d8dbf:{c.instructions+=2;NFSU2_TR(0x6d8dbf);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d8dc5:{NFSU2_TR(0x6d8dc5);
__builtin_memmove(gp(0x8a7358),(R+4),4);
}
B6d8dcb:L6d8dcb:{c.instructions+=3;NFSU2_TR(0x6d8dcb);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xc0ull))));
}
B6d8dd0:{NFSU2_TR(0x6d8dd0);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B6d8dd1:{NFSU2_TR(0x6d8dd1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d8c60u);}goto L6d8c60;}}
}
B6d8dd7:L6d8dd7:{c.instructions+=1;NFSU2_TR(0x6d8dd7);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d8c10u);}goto L6d8c10;}
}
B6d8ddc:L6d8ddc:{c.instructions+=2;NFSU2_TR(0x6d8ddc);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x304ull))));
}
B6d8de1:{NFSU2_TR(0x6d8de1);
w4(R+8,u32(0x20ull));
}
B6d8de6:L6d8de6:{c.instructions+=2;NFSU2_TR(0x6d8de6);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d8de9:{NFSU2_TR(0x6d8de9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d8e0e;}}
}
B6d8deb:L6d8deb:{c.instructions+=4;NFSU2_TR(0x6d8deb);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d8dee:{NFSU2_TR(0x6d8dee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+12),(U+0),4);
}
B6d8df0:{NFSU2_TR(0x6d8df0);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+12))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d8df3:{NFSU2_TR(0x6d8df3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d8e0e;}}
}
B6d8df5:L6d8df5:{c.instructions+=3;NFSU2_TR(0x6d8df5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6d8df8:{NFSU2_TR(0x6d8df8);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+12))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d8dfb:{NFSU2_TR(0x6d8dfb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d8e0e;}}
}
B6d8dfd:L6d8dfd:{c.instructions+=3;NFSU2_TR(0x6d8dfd);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6d8e00:{NFSU2_TR(0x6d8e00);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+12))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d8e03:{NFSU2_TR(0x6d8e03);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d8e0e;}}
}
B6d8e05:L6d8e05:{c.instructions+=2;NFSU2_TR(0x6d8e05);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d8e08:{NFSU2_TR(0x6d8e08);
__builtin_memmove(gp(0x8a7358),(R+4),4);
}
B6d8e0e:L6d8e0e:{c.instructions+=2;NFSU2_TR(0x6d8e0e);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d8e11:{NFSU2_TR(0x6d8e11);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d8e37;}}
}
B6d8e13:L6d8e13:{c.instructions+=4;NFSU2_TR(0x6d8e13);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d8e16:{NFSU2_TR(0x6d8e16);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6d8e19:{NFSU2_TR(0x6d8e19);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+12))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d8e1c:{NFSU2_TR(0x6d8e1c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d8e37;}}
}
B6d8e1e:L6d8e1e:{c.instructions+=3;NFSU2_TR(0x6d8e1e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6d8e21:{NFSU2_TR(0x6d8e21);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+12))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d8e24:{NFSU2_TR(0x6d8e24);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d8e37;}}
}
B6d8e26:L6d8e26:{c.instructions+=3;NFSU2_TR(0x6d8e26);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6d8e29:{NFSU2_TR(0x6d8e29);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+12))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d8e2c:{NFSU2_TR(0x6d8e2c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d8e37;}}
}
B6d8e2e:L6d8e2e:{c.instructions+=2;NFSU2_TR(0x6d8e2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d8e31:{NFSU2_TR(0x6d8e31);
__builtin_memmove(gp(0x8a7358),(R+4),4);
}
B6d8e37:L6d8e37:{c.instructions+=2;NFSU2_TR(0x6d8e37);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d8e3a:{NFSU2_TR(0x6d8e3a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d8e60;}}
}
B6d8e3c:L6d8e3c:{c.instructions+=4;NFSU2_TR(0x6d8e3c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d8e3f:{NFSU2_TR(0x6d8e3f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6d8e42:{NFSU2_TR(0x6d8e42);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+12))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d8e45:{NFSU2_TR(0x6d8e45);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d8e60;}}
}
B6d8e47:L6d8e47:{c.instructions+=3;NFSU2_TR(0x6d8e47);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6d8e4a:{NFSU2_TR(0x6d8e4a);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+12))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d8e4d:{NFSU2_TR(0x6d8e4d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d8e60;}}
}
B6d8e4f:L6d8e4f:{c.instructions+=3;NFSU2_TR(0x6d8e4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6d8e52:{NFSU2_TR(0x6d8e52);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+12))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d8e55:{NFSU2_TR(0x6d8e55);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d8e60;}}
}
B6d8e57:L6d8e57:{c.instructions+=2;NFSU2_TR(0x6d8e57);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d8e5a:{NFSU2_TR(0x6d8e5a);
__builtin_memmove(gp(0x8a7358),(R+4),4);
}
B6d8e60:L6d8e60:{c.instructions+=2;NFSU2_TR(0x6d8e60);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d8e63:{NFSU2_TR(0x6d8e63);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d8e89;}}
}
B6d8e65:L6d8e65:{c.instructions+=4;NFSU2_TR(0x6d8e65);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d8e68:{NFSU2_TR(0x6d8e68);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6d8e6b:{NFSU2_TR(0x6d8e6b);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+12))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d8e6e:{NFSU2_TR(0x6d8e6e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d8e89;}}
}
B6d8e70:L6d8e70:{c.instructions+=3;NFSU2_TR(0x6d8e70);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6d8e73:{NFSU2_TR(0x6d8e73);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+12))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d8e76:{NFSU2_TR(0x6d8e76);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d8e89;}}
}
B6d8e78:L6d8e78:{c.instructions+=3;NFSU2_TR(0x6d8e78);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6d8e7b:{NFSU2_TR(0x6d8e7b);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+12))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d8e7e:{NFSU2_TR(0x6d8e7e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d8e89;}}
}
B6d8e80:L6d8e80:{c.instructions+=2;NFSU2_TR(0x6d8e80);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d8e83:{NFSU2_TR(0x6d8e83);
__builtin_memmove(gp(0x8a7358),(R+4),4);
}
B6d8e89:L6d8e89:{c.instructions+=2;NFSU2_TR(0x6d8e89);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d8e8c:{NFSU2_TR(0x6d8e8c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d8eb2;}}
}
B6d8e8e:L6d8e8e:{c.instructions+=4;NFSU2_TR(0x6d8e8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d8e91:{NFSU2_TR(0x6d8e91);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6d8e94:{NFSU2_TR(0x6d8e94);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+12))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d8e97:{NFSU2_TR(0x6d8e97);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d8eb2;}}
}
B6d8e99:L6d8e99:{c.instructions+=3;NFSU2_TR(0x6d8e99);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6d8e9c:{NFSU2_TR(0x6d8e9c);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+12))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d8e9f:{NFSU2_TR(0x6d8e9f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d8eb2;}}
}
B6d8ea1:L6d8ea1:{c.instructions+=3;NFSU2_TR(0x6d8ea1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6d8ea4:{NFSU2_TR(0x6d8ea4);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+12))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d8ea7:{NFSU2_TR(0x6d8ea7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d8eb2;}}
}
B6d8ea9:L6d8ea9:{c.instructions+=2;NFSU2_TR(0x6d8ea9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d8eac:{NFSU2_TR(0x6d8eac);
__builtin_memmove(gp(0x8a7358),(R+4),4);
}
B6d8eb2:L6d8eb2:{c.instructions+=2;NFSU2_TR(0x6d8eb2);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d8eb5:{NFSU2_TR(0x6d8eb5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d8ee1;}}
}
B6d8eb7:L6d8eb7:{c.instructions+=4;NFSU2_TR(0x6d8eb7);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d8eba:{NFSU2_TR(0x6d8eba);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6d8ebd:{NFSU2_TR(0x6d8ebd);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+12))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d8ec0:{NFSU2_TR(0x6d8ec0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d8ee1;}}
}
B6d8ec2:L6d8ec2:{c.instructions+=3;NFSU2_TR(0x6d8ec2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6d8ec5:{NFSU2_TR(0x6d8ec5);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+12))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d8ec8:{NFSU2_TR(0x6d8ec8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d8ee1;}}
}
B6d8eca:L6d8eca:{c.instructions+=3;NFSU2_TR(0x6d8eca);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6d8ed0:{NFSU2_TR(0x6d8ed0);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+12))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d8ed3:{NFSU2_TR(0x6d8ed3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d8ee1;}}
}
B6d8ed5:L6d8ed5:{c.instructions+=2;NFSU2_TR(0x6d8ed5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x84ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d8edb:{NFSU2_TR(0x6d8edb);
__builtin_memmove(gp(0x8a7358),(R+4),4);
}
B6d8ee1:L6d8ee1:{c.instructions+=2;NFSU2_TR(0x6d8ee1);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d8ee7:{NFSU2_TR(0x6d8ee7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d8f19;}}
}
B6d8ee9:L6d8ee9:{c.instructions+=4;NFSU2_TR(0x6d8ee9);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d8eec:{NFSU2_TR(0x6d8eec);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6d8ef2:{NFSU2_TR(0x6d8ef2);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+12))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d8ef5:{NFSU2_TR(0x6d8ef5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d8f19;}}
}
B6d8ef7:L6d8ef7:{c.instructions+=3;NFSU2_TR(0x6d8ef7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6d8efd:{NFSU2_TR(0x6d8efd);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+12))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d8f00:{NFSU2_TR(0x6d8f00);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d8f19;}}
}
B6d8f02:L6d8f02:{c.instructions+=3;NFSU2_TR(0x6d8f02);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6d8f08:{NFSU2_TR(0x6d8f08);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+12))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d8f0b:{NFSU2_TR(0x6d8f0b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d8f19;}}
}
B6d8f0d:L6d8f0d:{c.instructions+=2;NFSU2_TR(0x6d8f0d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d8f13:{NFSU2_TR(0x6d8f13);
__builtin_memmove(gp(0x8a7358),(R+4),4);
}
B6d8f19:L6d8f19:{c.instructions+=2;NFSU2_TR(0x6d8f19);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d8f1f:{NFSU2_TR(0x6d8f1f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d8f51;}}
}
B6d8f21:L6d8f21:{c.instructions+=4;NFSU2_TR(0x6d8f21);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d8f24:{NFSU2_TR(0x6d8f24);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6d8f2a:{NFSU2_TR(0x6d8f2a);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+12))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d8f2d:{NFSU2_TR(0x6d8f2d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d8f51;}}
}
B6d8f2f:L6d8f2f:{c.instructions+=3;NFSU2_TR(0x6d8f2f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xacull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6d8f35:{NFSU2_TR(0x6d8f35);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+12))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d8f38:{NFSU2_TR(0x6d8f38);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d8f51;}}
}
B6d8f3a:L6d8f3a:{c.instructions+=3;NFSU2_TR(0x6d8f3a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6d8f40:{NFSU2_TR(0x6d8f40);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+12))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6d8f43:{NFSU2_TR(0x6d8f43);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d8f51;}}
}
B6d8f45:L6d8f45:{c.instructions+=2;NFSU2_TR(0x6d8f45);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6d8f4b:{NFSU2_TR(0x6d8f4b);
__builtin_memmove(gp(0x8a7358),(R+4),4);
}
B6d8f51:L6d8f51:{c.instructions+=3;NFSU2_TR(0x6d8f51);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xc0ull))));
}
B6d8f56:{NFSU2_TR(0x6d8f56);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B6d8f57:{NFSU2_TR(0x6d8f57);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d8de6u);}goto L6d8de6;}}
}
B6d8f5d:L6d8f5d:{c.instructions+=1;NFSU2_TR(0x6d8f5d);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6d8c10u);}goto L6d8c10;}
}
B6d8f62:L6d8f62:{c.instructions+=2;NFSU2_TR(0x6d8f62);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6d8f64:{NFSU2_TR(0x6d8f64);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6d8f72;}}
}
B6d8f66:L6d8f66:{c.instructions+=7;NFSU2_TR(0x6d8f66);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6d8f67:{NFSU2_TR(0x6d8f67);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6d8f68:{NFSU2_TR(0x6d8f68);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6d8f69:{NFSU2_TR(0x6d8f69);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6d8f6b:{NFSU2_TR(0x6d8f6b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6d8f6c:{NFSU2_TR(0x6d8f6c);
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
B6d8f6f:{NFSU2_TR(0x6d8f6f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6d8f72:L6d8f72:{c.instructions+=8;NFSU2_TR(0x6d8f72);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6d8f73:{NFSU2_TR(0x6d8f73);
__builtin_memmove(gp(0x8a735c),(R+24),4);
}
B6d8f79:{NFSU2_TR(0x6d8f79);
__builtin_memmove((R+0),(R+24),4);
}
B6d8f7b:{NFSU2_TR(0x6d8f7b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6d8f7c:{NFSU2_TR(0x6d8f7c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6d8f7d:{NFSU2_TR(0x6d8f7d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6d8f7e:{NFSU2_TR(0x6d8f7e);
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
B6d8f81:{NFSU2_TR(0x6d8f81);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6d8f90:L6d8f90:{c.instructions+=2;NFSU2_TR(0x6d8f90);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6d8f91:{NFSU2_TR(0x6d8f91);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d8f96ull));
TAIL_STATIC(0x6da260u,6da);
}
B6d8f96:L6d8f96:{c.instructions+=4;NFSU2_TR(0x6d8f96);
__builtin_memmove((R+24),(R+0),4);
}
B6d8f98:{NFSU2_TR(0x6d8f98);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x240ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d8f9e:{NFSU2_TR(0x6d8f9e);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+0))&u32(u32(0x80000ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6d8fa3:{NFSU2_TR(0x6d8fa3);
if(r1(R+518)){TAIL_STATIC(0x6d9003u,6d9);}
}
B6d8fa5:L6d8fa5:{c.instructions+=2;NFSU2_TR(0x6d8fa5);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+0))&u32(u32(0x10000ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6d8faa:{NFSU2_TR(0x6d8faa);
if(r1(R+518)){TAIL_STATIC(0x6d9003u,6d9);}
}
B6d8fac:L6d8fac:{c.instructions+=2;NFSU2_TR(0x6d8fac);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+0))&u32(u32(0x100000ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6d8fb1:{NFSU2_TR(0x6d8fb1);
if(r1(R+518)){TAIL_STATIC(0x6d9003u,6d9);}
}
B6d8fb3:L6d8fb3:{c.instructions+=1;NFSU2_TR(0x6d8fb3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6d8fb8ull));
TAIL_STATIC(0x6da260u,6da);
}
B6d8fb8:L6d8fb8:{c.instructions+=3;NFSU2_TR(0x6d8fb8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x204ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6d8fbe:{NFSU2_TR(0x6d8fbe);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x104a0010ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x104a0010ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x104a0010ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6d8fc3:{NFSU2_TR(0x6d8fc3);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6d8fdc;}}
}
B6d8fc5:L6d8fc5:{c.instructions+=1;NFSU2_TR(0x6d8fc5);
if(r1(R+518)){{goto L6d8ffc;}}
}
B6d8fc7:L6d8fc7:{c.instructions+=2;NFSU2_TR(0x6d8fc7);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x10024c57ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x10024c57ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x10024c57ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6d8fcc:{NFSU2_TR(0x6d8fcc);
if(r1(R+518)){{goto L6d8ffc;}}
}
B6d8fce:L6d8fce:{c.instructions+=2;NFSU2_TR(0x6d8fce);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x10025157ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x10025157ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x10025157ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6d8fd3:{NFSU2_TR(0x6d8fd3);
if(r1(R+518)){{goto L6d8ffc;}}
}
B6d8fd5:L6d8fd5:{c.instructions+=2;NFSU2_TR(0x6d8fd5);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x10390330ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x10390330ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x10390330ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6d8fda:{NFSU2_TR(0x6d8fda);
{goto L6d8fe8;}
}
B6d8fdc:L6d8fdc:{c.instructions+=2;NFSU2_TR(0x6d8fdc);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x10de0171ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x10de0171ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x10de0171ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6d8fe1:{NFSU2_TR(0x6d8fe1);
if(r1(R+518)){{goto L6d8ffc;}}
}
B6d8fe3:L6d8fe3:{c.instructions+=1;NFSU2_TR(0x6d8fe3);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x53339102ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x53339102ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x53339102ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6d8fe8:L6d8fe8:{c.instructions+=1;NFSU2_TR(0x6d8fe8);
if(r1(R+518)){{goto L6d8ffc;}}
}
B6d8fea:L6d8fea:{c.instructions+=6;NFSU2_TR(0x6d8fea);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2e9ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(R+512,u8((r1(U+5))<(u8(0x1ull))));
}
B6d8ff1:{NFSU2_TR(0x6d8ff1);
u8 U[3];
__builtin_memmove((U+0),(R+512),1);
w1(R+512,u8((r1(R+0))<(r1(R+0))));
w1(U+1,u8(u32(r1(R+0))-u32(r1(R+0))));
w1(U+2,u8((r1(U+1))<(r1(U+0))));
w1(R+512,u8((r1(R+512))||(r1(U+2))));
w1(R+0,u8(u32(r1(U+1))-u32(r1(U+0))));
}
B6d8ff3:{NFSU2_TR(0x6d8ff3);
u8 U[3];
w1(R+523,scarry<u8>(r1(R+0),u8(0x1ull)));
w1(R+0,u8(u32(r1(R+0))+u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(R+0))<s8(u8(0x0ull))));
w1(R+518,u8((r1(R+0))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(R+0))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6d8ff5:{NFSU2_TR(0x6d8ff5);
__builtin_memmove(gp(0x8a79ac),(R+0),1);
}
B6d8ffa:{NFSU2_TR(0x6d8ffa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6d8ffb:{NFSU2_TR(0x6d8ffb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6d8ffc:L6d8ffc:{c.instructions+=1;NFSU2_TR(0x6d8ffc);
s1(0x8a79ac,u8(0x0ull));
TAIL_STATIC(0x6d9003u,6d9);
}
XIT:NFSU2_TR_EXIT(0x6d8,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
