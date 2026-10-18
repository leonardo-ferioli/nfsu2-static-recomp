#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_673(u8* __restrict R,Cpu& c);
u32 body_698(u8* __restrict R,Cpu& c);
u32 body_699(u8* __restrict R,Cpu& c);
u32 body_69d(u8* __restrict R,Cpu& c);
u32 body_69e(u8* __restrict R,Cpu& c);
u32 body_6a4(u8* __restrict R,Cpu& c);
u32 body_6ac(u8* __restrict R,Cpu& c);
u32 body_75c(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x6ab,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x6ab,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_6ab(u8* __restrict R,Cpu& c);
u32 page_6ab(Cpu& c){return body_6ab(c.regs.data(),c);}
__attribute__((noinline)) u32 body_6ab(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x6ab004:goto L6ab004;
case 0x6ab006:c.instructions+=1;goto B6ab006;
case 0x6ab00b:goto L6ab00b;
case 0x6ab00f:c.instructions+=2;goto B6ab00f;
case 0x6ab013:c.instructions+=1;goto B6ab013;
case 0x6ab019:goto L6ab019;
case 0x6ab01c:c.instructions+=5;goto B6ab01c;
case 0x6ab01f:c.instructions+=4;goto B6ab01f;
case 0x6ab022:c.instructions+=3;goto B6ab022;
case 0x6ab028:c.instructions+=2;goto B6ab028;
case 0x6ab02b:c.instructions+=1;goto B6ab02b;
case 0x6ab031:goto L6ab031;
case 0x6ab034:c.instructions+=11;goto B6ab034;
case 0x6ab036:c.instructions+=10;goto B6ab036;
case 0x6ab039:c.instructions+=9;goto B6ab039;
case 0x6ab03c:c.instructions+=8;goto B6ab03c;
case 0x6ab03f:c.instructions+=7;goto B6ab03f;
case 0x6ab042:c.instructions+=6;goto B6ab042;
case 0x6ab045:c.instructions+=5;goto B6ab045;
case 0x6ab048:c.instructions+=4;goto B6ab048;
case 0x6ab04b:c.instructions+=3;goto B6ab04b;
case 0x6ab04e:c.instructions+=2;goto B6ab04e;
case 0x6ab052:c.instructions+=1;goto B6ab052;
case 0x6ab058:goto L6ab058;
case 0x6ab05b:c.instructions+=4;goto B6ab05b;
case 0x6ab05e:c.instructions+=3;goto B6ab05e;
case 0x6ab061:c.instructions+=2;goto B6ab061;
case 0x6ab065:c.instructions+=1;goto B6ab065;
case 0x6ab06b:goto L6ab06b;
case 0x6ab06e:c.instructions+=9;goto B6ab06e;
case 0x6ab071:c.instructions+=8;goto B6ab071;
case 0x6ab074:c.instructions+=7;goto B6ab074;
case 0x6ab077:c.instructions+=6;goto B6ab077;
case 0x6ab07a:c.instructions+=5;goto B6ab07a;
case 0x6ab07c:c.instructions+=4;goto B6ab07c;
case 0x6ab081:c.instructions+=3;goto B6ab081;
case 0x6ab084:c.instructions+=2;goto B6ab084;
case 0x6ab087:c.instructions+=1;goto B6ab087;
case 0x6ab089:goto L6ab089;
case 0x6ab08e:c.instructions+=2;goto B6ab08e;
case 0x6ab093:c.instructions+=1;goto B6ab093;
case 0x6ab099:goto L6ab099;
case 0x6ab09b:c.instructions+=2;goto B6ab09b;
case 0x6ab0a0:c.instructions+=1;goto B6ab0a0;
case 0x6ab0a2:goto L6ab0a2;
case 0x6ab0a7:c.instructions+=2;goto B6ab0a7;
case 0x6ab0ac:c.instructions+=1;goto B6ab0ac;
case 0x6ab0b2:goto L6ab0b2;
case 0x6ab0b5:c.instructions+=13;goto B6ab0b5;
case 0x6ab0b8:c.instructions+=12;goto B6ab0b8;
case 0x6ab0ba:c.instructions+=11;goto B6ab0ba;
case 0x6ab0bd:c.instructions+=10;goto B6ab0bd;
case 0x6ab0bf:c.instructions+=9;goto B6ab0bf;
case 0x6ab0c1:c.instructions+=8;goto B6ab0c1;
case 0x6ab0c4:c.instructions+=7;goto B6ab0c4;
case 0x6ab0c7:c.instructions+=6;goto B6ab0c7;
case 0x6ab0c9:c.instructions+=5;goto B6ab0c9;
case 0x6ab0cc:c.instructions+=4;goto B6ab0cc;
case 0x6ab0cf:c.instructions+=3;goto B6ab0cf;
case 0x6ab0d2:c.instructions+=2;goto B6ab0d2;
case 0x6ab0d5:c.instructions+=1;goto B6ab0d5;
case 0x6ab0db:goto L6ab0db;
case 0x6ab0df:c.instructions+=1;goto B6ab0df;
case 0x6ab0e5:goto L6ab0e5;
case 0x6ab0e8:c.instructions+=5;goto B6ab0e8;
case 0x6ab0ea:c.instructions+=4;goto B6ab0ea;
case 0x6ab0ed:c.instructions+=3;goto B6ab0ed;
case 0x6ab0f0:c.instructions+=2;goto B6ab0f0;
case 0x6ab0f3:c.instructions+=1;goto B6ab0f3;
case 0x6ab0f9:goto L6ab0f9;
case 0x6ab0fc:c.instructions+=1;goto B6ab0fc;
case 0x6ab102:goto L6ab102;
case 0x6ab105:c.instructions+=5;goto B6ab105;
case 0x6ab107:c.instructions+=4;goto B6ab107;
case 0x6ab10a:c.instructions+=3;goto B6ab10a;
case 0x6ab10c:c.instructions+=2;goto B6ab10c;
case 0x6ab10f:c.instructions+=1;goto B6ab10f;
case 0x6ab115:goto L6ab115;
case 0x6ab118:c.instructions+=1;goto B6ab118;
case 0x6ab11e:goto L6ab11e;
case 0x6ab121:c.instructions+=7;goto B6ab121;
case 0x6ab124:c.instructions+=6;goto B6ab124;
case 0x6ab127:c.instructions+=5;goto B6ab127;
case 0x6ab12a:c.instructions+=4;goto B6ab12a;
case 0x6ab12c:c.instructions+=3;goto B6ab12c;
case 0x6ab12e:c.instructions+=2;goto B6ab12e;
case 0x6ab131:c.instructions+=1;goto B6ab131;
case 0x6ab134:goto L6ab134;
case 0x6ab136:goto L6ab136;
case 0x6ab138:c.instructions+=2;goto B6ab138;
case 0x6ab13b:c.instructions+=1;goto B6ab13b;
case 0x6ab13e:goto L6ab13e;
case 0x6ab140:goto L6ab140;
case 0x6ab143:c.instructions+=7;goto B6ab143;
case 0x6ab146:c.instructions+=6;goto B6ab146;
case 0x6ab149:c.instructions+=5;goto B6ab149;
case 0x6ab14c:c.instructions+=4;goto B6ab14c;
case 0x6ab14e:c.instructions+=3;goto B6ab14e;
case 0x6ab151:c.instructions+=2;goto B6ab151;
case 0x6ab154:c.instructions+=1;goto B6ab154;
case 0x6ab158:goto L6ab158;
case 0x6ab15a:goto L6ab15a;
case 0x6ab15c:c.instructions+=2;goto B6ab15c;
case 0x6ab15f:c.instructions+=1;goto B6ab15f;
case 0x6ab162:goto L6ab162;
case 0x6ab164:goto L6ab164;
case 0x6ab167:c.instructions+=4;goto B6ab167;
case 0x6ab169:c.instructions+=3;goto B6ab169;
case 0x6ab16b:c.instructions+=2;goto B6ab16b;
case 0x6ab16e:c.instructions+=1;goto B6ab16e;
case 0x6ab174:goto L6ab174;
case 0x6ab176:goto L6ab176;
case 0x6ab178:c.instructions+=2;goto B6ab178;
case 0x6ab17b:c.instructions+=1;goto B6ab17b;
case 0x6ab17e:goto L6ab17e;
case 0x6ab180:goto L6ab180;
case 0x6ab183:c.instructions+=5;goto B6ab183;
case 0x6ab186:c.instructions+=4;goto B6ab186;
case 0x6ab18d:c.instructions+=3;goto B6ab18d;
case 0x6ab190:c.instructions+=2;goto B6ab190;
case 0x6ab192:c.instructions+=1;goto B6ab192;
case 0x6ab195:goto L6ab195;
case 0x6ab197:goto L6ab197;
case 0x6ab199:c.instructions+=9;goto B6ab199;
case 0x6ab19b:c.instructions+=8;goto B6ab19b;
case 0x6ab19d:c.instructions+=7;goto B6ab19d;
case 0x6ab19e:c.instructions+=6;goto B6ab19e;
case 0x6ab1a1:c.instructions+=5;goto B6ab1a1;
case 0x6ab1a4:c.instructions+=4;goto B6ab1a4;
case 0x6ab1a5:c.instructions+=3;goto B6ab1a5;
case 0x6ab1a6:c.instructions+=2;goto B6ab1a6;
case 0x6ab1a9:c.instructions+=1;goto B6ab1a9;
case 0x6ab1ac:goto L6ab1ac;
case 0x6ab1ae:goto L6ab1ae;
case 0x6ab1af:c.instructions+=2;goto B6ab1af;
case 0x6ab1b1:c.instructions+=1;goto B6ab1b1;
case 0x6ab1b6:goto L6ab1b6;
case 0x6ab1b8:c.instructions+=1;goto B6ab1b8;
case 0x6ab1ba:goto L6ab1ba;
case 0x6ab1bc:c.instructions+=10;goto B6ab1bc;
case 0x6ab1be:c.instructions+=9;goto B6ab1be;
case 0x6ab1bf:c.instructions+=8;goto B6ab1bf;
case 0x6ab1c2:c.instructions+=7;goto B6ab1c2;
case 0x6ab1c8:c.instructions+=6;goto B6ab1c8;
case 0x6ab1c9:c.instructions+=5;goto B6ab1c9;
case 0x6ab1ca:c.instructions+=4;goto B6ab1ca;
case 0x6ab1cd:c.instructions+=3;goto B6ab1cd;
case 0x6ab1cf:c.instructions+=2;goto B6ab1cf;
case 0x6ab1d0:c.instructions+=1;goto B6ab1d0;
case 0x6ab1d5:goto L6ab1d5;
case 0x6ab1d7:c.instructions+=1;goto B6ab1d7;
case 0x6ab1d9:goto L6ab1d9;
case 0x6ab1dc:c.instructions+=1;goto B6ab1dc;
case 0x6ab1e1:goto L6ab1e1;
case 0x6ab1e4:c.instructions+=6;goto B6ab1e4;
case 0x6ab1e7:c.instructions+=5;goto B6ab1e7;
case 0x6ab1ea:c.instructions+=4;goto B6ab1ea;
case 0x6ab1ec:c.instructions+=3;goto B6ab1ec;
case 0x6ab1ef:c.instructions+=2;goto B6ab1ef;
case 0x6ab1f1:c.instructions+=1;goto B6ab1f1;
case 0x6ab1f4:goto L6ab1f4;
case 0x6ab1f6:goto L6ab1f6;
case 0x6ab1f8:c.instructions+=1;goto B6ab1f8;
case 0x6ab1fb:goto L6ab1fb;
case 0x6ab1fd:goto L6ab1fd;
case 0x6ab200:c.instructions+=8;goto B6ab200;
case 0x6ab203:c.instructions+=7;goto B6ab203;
case 0x6ab206:c.instructions+=6;goto B6ab206;
case 0x6ab209:c.instructions+=5;goto B6ab209;
case 0x6ab20c:c.instructions+=4;goto B6ab20c;
case 0x6ab210:c.instructions+=3;goto B6ab210;
case 0x6ab213:c.instructions+=2;goto B6ab213;
case 0x6ab215:c.instructions+=1;goto B6ab215;
case 0x6ab218:goto L6ab218;
case 0x6ab21a:goto L6ab21a;
case 0x6ab21c:c.instructions+=2;goto B6ab21c;
case 0x6ab21f:c.instructions+=1;goto B6ab21f;
case 0x6ab222:goto L6ab222;
case 0x6ab224:goto L6ab224;
case 0x6ab227:c.instructions+=4;goto B6ab227;
case 0x6ab229:c.instructions+=3;goto B6ab229;
case 0x6ab22b:c.instructions+=2;goto B6ab22b;
case 0x6ab22e:c.instructions+=1;goto B6ab22e;
case 0x6ab234:goto L6ab234;
case 0x6ab236:goto L6ab236;
case 0x6ab238:c.instructions+=1;goto B6ab238;
case 0x6ab23b:goto L6ab23b;
case 0x6ab23d:goto L6ab23d;
case 0x6ab240:c.instructions+=5;goto B6ab240;
case 0x6ab243:c.instructions+=4;goto B6ab243;
case 0x6ab245:c.instructions+=3;goto B6ab245;
case 0x6ab248:c.instructions+=2;goto B6ab248;
case 0x6ab24a:c.instructions+=1;goto B6ab24a;
case 0x6ab251:goto L6ab251;
case 0x6ab253:goto L6ab253;
case 0x6ab255:c.instructions+=8;goto B6ab255;
case 0x6ab257:c.instructions+=7;goto B6ab257;
case 0x6ab258:c.instructions+=6;goto B6ab258;
case 0x6ab25b:c.instructions+=5;goto B6ab25b;
case 0x6ab25e:c.instructions+=4;goto B6ab25e;
case 0x6ab25f:c.instructions+=3;goto B6ab25f;
case 0x6ab260:c.instructions+=2;goto B6ab260;
case 0x6ab263:c.instructions+=1;goto B6ab263;
case 0x6ab266:goto L6ab266;
case 0x6ab268:goto L6ab268;
case 0x6ab269:c.instructions+=2;goto B6ab269;
case 0x6ab26b:c.instructions+=1;goto B6ab26b;
case 0x6ab270:goto L6ab270;
case 0x6ab272:c.instructions+=1;goto B6ab272;
case 0x6ab278:goto L6ab278;
case 0x6ab27a:c.instructions+=10;goto B6ab27a;
case 0x6ab27c:c.instructions+=9;goto B6ab27c;
case 0x6ab27d:c.instructions+=8;goto B6ab27d;
case 0x6ab280:c.instructions+=7;goto B6ab280;
case 0x6ab282:c.instructions+=6;goto B6ab282;
case 0x6ab283:c.instructions+=5;goto B6ab283;
case 0x6ab284:c.instructions+=4;goto B6ab284;
case 0x6ab287:c.instructions+=3;goto B6ab287;
case 0x6ab28d:c.instructions+=2;goto B6ab28d;
case 0x6ab28e:c.instructions+=1;goto B6ab28e;
case 0x6ab293:goto L6ab293;
case 0x6ab295:c.instructions+=1;goto B6ab295;
case 0x6ab29b:goto L6ab29b;
case 0x6ab2a2:c.instructions+=1;goto B6ab2a2;
case 0x6ab2a4:goto L6ab2a4;
case 0x6ab2a6:c.instructions+=1;goto B6ab2a6;
case 0x6ab2ab:goto L6ab2ab;
case 0x6ab2ad:c.instructions+=1;goto B6ab2ad;
case 0x6ab2af:goto L6ab2af;
case 0x6ab2b1:c.instructions+=1;goto B6ab2b1;
case 0x6ab2b6:goto L6ab2b6;
case 0x6ab2b9:c.instructions+=1;goto B6ab2b9;
case 0x6ab2bb:goto L6ab2bb;
case 0x6ab2be:goto L6ab2be;
case 0x6ab2c1:c.instructions+=1;goto B6ab2c1;
case 0x6ab2c7:goto L6ab2c7;
case 0x6ab2ca:c.instructions+=10;goto B6ab2ca;
case 0x6ab2cd:c.instructions+=9;goto B6ab2cd;
case 0x6ab2cf:c.instructions+=8;goto B6ab2cf;
case 0x6ab2d2:c.instructions+=7;goto B6ab2d2;
case 0x6ab2d4:c.instructions+=6;goto B6ab2d4;
case 0x6ab2d9:c.instructions+=5;goto B6ab2d9;
case 0x6ab2da:c.instructions+=4;goto B6ab2da;
case 0x6ab2df:c.instructions+=3;goto B6ab2df;
case 0x6ab2e0:c.instructions+=2;goto B6ab2e0;
case 0x6ab2e2:c.instructions+=1;goto B6ab2e2;
case 0x6ab2e7:goto L6ab2e7;
case 0x6ab2e9:c.instructions+=2;goto B6ab2e9;
case 0x6ab2eb:c.instructions+=1;goto B6ab2eb;
case 0x6ab2f1:goto L6ab2f1;
case 0x6ab2f4:c.instructions+=2;goto B6ab2f4;
case 0x6ab2f6:c.instructions+=1;goto B6ab2f6;
case 0x6ab2fb:goto L6ab2fb;
case 0x6ab2fd:c.instructions+=2;goto B6ab2fd;
case 0x6ab2ff:c.instructions+=1;goto B6ab2ff;
case 0x6ab305:goto L6ab305;
case 0x6ab309:c.instructions+=7;goto B6ab309;
case 0x6ab30c:c.instructions+=6;goto B6ab30c;
case 0x6ab30f:c.instructions+=5;goto B6ab30f;
case 0x6ab312:c.instructions+=4;goto B6ab312;
case 0x6ab314:c.instructions+=3;goto B6ab314;
case 0x6ab316:c.instructions+=2;goto B6ab316;
case 0x6ab319:c.instructions+=1;goto B6ab319;
case 0x6ab31b:goto L6ab31b;
case 0x6ab31e:goto L6ab31e;
case 0x6ab321:c.instructions+=6;goto B6ab321;
case 0x6ab324:c.instructions+=5;goto B6ab324;
case 0x6ab327:c.instructions+=4;goto B6ab327;
case 0x6ab32a:c.instructions+=3;goto B6ab32a;
case 0x6ab32c:c.instructions+=2;goto B6ab32c;
case 0x6ab32e:c.instructions+=1;goto B6ab32e;
case 0x6ab331:goto L6ab331;
case 0x6ab333:goto L6ab333;
case 0x6ab335:c.instructions+=2;goto B6ab335;
case 0x6ab338:c.instructions+=1;goto B6ab338;
case 0x6ab33c:goto L6ab33c;
case 0x6ab33e:goto L6ab33e;
case 0x6ab344:c.instructions+=1;goto B6ab344;
case 0x6ab346:goto L6ab346;
case 0x6ab34c:goto L6ab34c;
case 0x6ab34f:c.instructions+=4;goto B6ab34f;
case 0x6ab352:c.instructions+=3;goto B6ab352;
case 0x6ab354:c.instructions+=2;goto B6ab354;
case 0x6ab357:c.instructions+=1;goto B6ab357;
case 0x6ab359:goto L6ab359;
case 0x6ab35b:goto L6ab35b;
case 0x6ab35d:c.instructions+=1;goto B6ab35d;
case 0x6ab360:goto L6ab360;
case 0x6ab362:goto L6ab362;
case 0x6ab365:c.instructions+=5;goto B6ab365;
case 0x6ab368:c.instructions+=4;goto B6ab368;
case 0x6ab36b:c.instructions+=3;goto B6ab36b;
case 0x6ab36e:c.instructions+=2;goto B6ab36e;
case 0x6ab370:c.instructions+=1;goto B6ab370;
case 0x6ab375:goto L6ab375;
case 0x6ab378:c.instructions+=3;goto B6ab378;
case 0x6ab37b:c.instructions+=2;goto B6ab37b;
case 0x6ab37e:c.instructions+=1;goto B6ab37e;
case 0x6ab381:goto L6ab381;
case 0x6ab384:c.instructions+=3;goto B6ab384;
case 0x6ab387:c.instructions+=2;goto B6ab387;
case 0x6ab38a:c.instructions+=1;goto B6ab38a;
case 0x6ab390:goto L6ab390;
case 0x6ab392:c.instructions+=1;goto B6ab392;
case 0x6ab397:goto L6ab397;
case 0x6ab39b:c.instructions+=2;goto B6ab39b;
case 0x6ab39f:c.instructions+=1;goto B6ab39f;
case 0x6ab3a5:goto L6ab3a5;
case 0x6ab3a8:c.instructions+=8;goto B6ab3a8;
case 0x6ab3ab:c.instructions+=7;goto B6ab3ab;
case 0x6ab3ae:c.instructions+=6;goto B6ab3ae;
case 0x6ab3b0:c.instructions+=5;goto B6ab3b0;
case 0x6ab3b2:c.instructions+=4;goto B6ab3b2;
case 0x6ab3b8:c.instructions+=3;goto B6ab3b8;
case 0x6ab3be:c.instructions+=2;goto B6ab3be;
case 0x6ab3c1:c.instructions+=1;goto B6ab3c1;
case 0x6ab3c7:goto L6ab3c7;
case 0x6ab3cd:c.instructions+=1;goto B6ab3cd;
case 0x6ab3d3:goto L6ab3d3;
case 0x6ab3d8:c.instructions+=2;goto B6ab3d8;
case 0x6ab3dd:c.instructions+=1;goto B6ab3dd;
case 0x6ab3df:goto L6ab3df;
case 0x6ab3e3:c.instructions+=1;goto B6ab3e3;
case 0x6ab3e9:goto L6ab3e9;
case 0x6ab3eb:c.instructions+=1;goto B6ab3eb;
case 0x6ab3f0:goto L6ab3f0;
case 0x6ab3f2:c.instructions+=1;goto B6ab3f2;
case 0x6ab3f8:goto L6ab3f8;
case 0x6ab3fb:c.instructions+=11;goto B6ab3fb;
case 0x6ab3fd:c.instructions+=10;goto B6ab3fd;
case 0x6ab400:c.instructions+=9;goto B6ab400;
case 0x6ab403:c.instructions+=8;goto B6ab403;
case 0x6ab406:c.instructions+=7;goto B6ab406;
case 0x6ab409:c.instructions+=6;goto B6ab409;
case 0x6ab40c:c.instructions+=5;goto B6ab40c;
case 0x6ab40f:c.instructions+=4;goto B6ab40f;
case 0x6ab412:c.instructions+=3;goto B6ab412;
case 0x6ab414:c.instructions+=2;goto B6ab414;
case 0x6ab417:c.instructions+=1;goto B6ab417;
case 0x6ab41d:goto L6ab41d;
case 0x6ab420:c.instructions+=5;goto B6ab420;
case 0x6ab424:c.instructions+=4;goto B6ab424;
case 0x6ab428:c.instructions+=3;goto B6ab428;
case 0x6ab42b:c.instructions+=2;goto B6ab42b;
case 0x6ab42e:c.instructions+=1;goto B6ab42e;
case 0x6ab430:goto L6ab430;
case 0x6ab433:c.instructions+=3;goto B6ab433;
case 0x6ab436:c.instructions+=2;goto B6ab436;
case 0x6ab439:c.instructions+=1;goto B6ab439;
case 0x6ab43c:goto L6ab43c;
case 0x6ab43f:c.instructions+=2;goto B6ab43f;
case 0x6ab441:c.instructions+=1;goto B6ab441;
case 0x6ab443:goto L6ab443;
case 0x6ab445:goto L6ab445;
case 0x6ab447:c.instructions+=1;goto B6ab447;
case 0x6ab44c:goto L6ab44c;
case 0x6ab451:goto L6ab451;
case 0x6ab454:c.instructions+=5;goto B6ab454;
case 0x6ab457:c.instructions+=4;goto B6ab457;
case 0x6ab45a:c.instructions+=3;goto B6ab45a;
case 0x6ab45d:c.instructions+=2;goto B6ab45d;
case 0x6ab461:c.instructions+=1;goto B6ab461;
case 0x6ab463:goto L6ab463;
case 0x6ab466:c.instructions+=3;goto B6ab466;
case 0x6ab467:c.instructions+=2;goto B6ab467;
case 0x6ab46a:c.instructions+=1;goto B6ab46a;
case 0x6ab46c:goto L6ab46c;
case 0x6ab46f:goto L6ab46f;
case 0x6ab472:goto L6ab472;
case 0x6ab475:c.instructions+=1;goto B6ab475;
case 0x6ab477:goto L6ab477;
case 0x6ab47b:c.instructions+=2;goto B6ab47b;
case 0x6ab47e:c.instructions+=1;goto B6ab47e;
case 0x6ab480:goto L6ab480;
case 0x6ab484:c.instructions+=1;goto B6ab484;
case 0x6ab486:goto L6ab486;
case 0x6ab489:c.instructions+=2;goto B6ab489;
case 0x6ab48c:c.instructions+=1;goto B6ab48c;
case 0x6ab48f:goto L6ab48f;
case 0x6ab491:c.instructions+=4;goto B6ab491;
case 0x6ab494:c.instructions+=3;goto B6ab494;
case 0x6ab497:c.instructions+=2;goto B6ab497;
case 0x6ab49a:c.instructions+=1;goto B6ab49a;
case 0x6ab49c:goto L6ab49c;
case 0x6ab49f:c.instructions+=1;goto B6ab49f;
case 0x6ab4a1:goto L6ab4a1;
case 0x6ab4a4:c.instructions+=5;goto B6ab4a4;
case 0x6ab4a7:c.instructions+=4;goto B6ab4a7;
case 0x6ab4aa:c.instructions+=3;goto B6ab4aa;
case 0x6ab4ad:c.instructions+=2;goto B6ab4ad;
case 0x6ab4b1:c.instructions+=1;goto B6ab4b1;
case 0x6ab4b3:goto L6ab4b3;
case 0x6ab4b6:c.instructions+=3;goto B6ab4b6;
case 0x6ab4b7:c.instructions+=2;goto B6ab4b7;
case 0x6ab4ba:c.instructions+=1;goto B6ab4ba;
case 0x6ab4bc:goto L6ab4bc;
case 0x6ab4bf:goto L6ab4bf;
case 0x6ab4c2:c.instructions+=2;goto B6ab4c2;
case 0x6ab4c5:c.instructions+=1;goto B6ab4c5;
case 0x6ab4c7:goto L6ab4c7;
case 0x6ab4ca:c.instructions+=2;goto B6ab4ca;
case 0x6ab4cd:c.instructions+=1;goto B6ab4cd;
case 0x6ab4cf:goto L6ab4cf;
case 0x6ab4d2:c.instructions+=2;goto B6ab4d2;
case 0x6ab4d5:c.instructions+=1;goto B6ab4d5;
case 0x6ab4da:goto L6ab4da;
case 0x6ab4dd:c.instructions+=2;goto B6ab4dd;
case 0x6ab4e0:c.instructions+=1;goto B6ab4e0;
case 0x6ab4e6:goto L6ab4e6;
case 0x6ab4e9:c.instructions+=4;goto B6ab4e9;
case 0x6ab4ec:c.instructions+=3;goto B6ab4ec;
case 0x6ab4ef:c.instructions+=2;goto B6ab4ef;
case 0x6ab4f2:c.instructions+=1;goto B6ab4f2;
case 0x6ab4f4:goto L6ab4f4;
case 0x6ab4f7:c.instructions+=1;goto B6ab4f7;
case 0x6ab4f9:goto L6ab4f9;
case 0x6ab4fc:c.instructions+=1;goto B6ab4fc;
case 0x6ab4ff:goto L6ab4ff;
case 0x6ab502:c.instructions+=1;goto B6ab502;
case 0x6ab504:goto L6ab504;
case 0x6ab507:c.instructions+=2;goto B6ab507;
case 0x6ab50a:c.instructions+=1;goto B6ab50a;
case 0x6ab50c:goto L6ab50c;
case 0x6ab50f:goto L6ab50f;
case 0x6ab512:c.instructions+=10;goto B6ab512;
case 0x6ab514:c.instructions+=9;goto B6ab514;
case 0x6ab517:c.instructions+=8;goto B6ab517;
case 0x6ab519:c.instructions+=7;goto B6ab519;
case 0x6ab51c:c.instructions+=6;goto B6ab51c;
case 0x6ab51f:c.instructions+=5;goto B6ab51f;
case 0x6ab524:c.instructions+=4;goto B6ab524;
case 0x6ab527:c.instructions+=3;goto B6ab527;
case 0x6ab529:c.instructions+=2;goto B6ab529;
case 0x6ab52c:c.instructions+=1;goto B6ab52c;
case 0x6ab532:goto L6ab532;
case 0x6ab535:c.instructions+=12;goto B6ab535;
case 0x6ab538:c.instructions+=11;goto B6ab538;
case 0x6ab53a:c.instructions+=10;goto B6ab53a;
case 0x6ab53d:c.instructions+=9;goto B6ab53d;
case 0x6ab540:c.instructions+=8;goto B6ab540;
case 0x6ab543:c.instructions+=7;goto B6ab543;
case 0x6ab546:c.instructions+=6;goto B6ab546;
case 0x6ab548:c.instructions+=5;goto B6ab548;
case 0x6ab54b:c.instructions+=4;goto B6ab54b;
case 0x6ab54e:c.instructions+=3;goto B6ab54e;
case 0x6ab551:c.instructions+=2;goto B6ab551;
case 0x6ab554:c.instructions+=1;goto B6ab554;
case 0x6ab55a:goto L6ab55a;
case 0x6ab55d:c.instructions+=2;goto B6ab55d;
case 0x6ab560:c.instructions+=1;goto B6ab560;
case 0x6ab566:goto L6ab566;
case 0x6ab569:c.instructions+=2;goto B6ab569;
case 0x6ab56c:c.instructions+=1;goto B6ab56c;
case 0x6ab572:goto L6ab572;
case 0x6ab575:c.instructions+=2;goto B6ab575;
case 0x6ab578:c.instructions+=1;goto B6ab578;
case 0x6ab57e:goto L6ab57e;
case 0x6ab581:c.instructions+=13;goto B6ab581;
case 0x6ab584:c.instructions+=12;goto B6ab584;
case 0x6ab587:c.instructions+=11;goto B6ab587;
case 0x6ab58a:c.instructions+=10;goto B6ab58a;
case 0x6ab58d:c.instructions+=9;goto B6ab58d;
case 0x6ab590:c.instructions+=8;goto B6ab590;
case 0x6ab593:c.instructions+=7;goto B6ab593;
case 0x6ab596:c.instructions+=6;goto B6ab596;
case 0x6ab599:c.instructions+=5;goto B6ab599;
case 0x6ab59b:c.instructions+=4;goto B6ab59b;
case 0x6ab59e:c.instructions+=3;goto B6ab59e;
case 0x6ab5a1:c.instructions+=2;goto B6ab5a1;
case 0x6ab5a4:c.instructions+=1;goto B6ab5a4;
case 0x6ab5aa:goto L6ab5aa;
case 0x6ab5ad:c.instructions+=5;goto B6ab5ad;
case 0x6ab5b0:c.instructions+=4;goto B6ab5b0;
case 0x6ab5b2:c.instructions+=3;goto B6ab5b2;
case 0x6ab5b5:c.instructions+=2;goto B6ab5b5;
case 0x6ab5b8:c.instructions+=1;goto B6ab5b8;
case 0x6ab5ba:goto L6ab5ba;
case 0x6ab5be:c.instructions+=1;goto B6ab5be;
case 0x6ab5c4:goto L6ab5c4;
case 0x6ab5c7:c.instructions+=4;goto B6ab5c7;
case 0x6ab5ca:c.instructions+=3;goto B6ab5ca;
case 0x6ab5cd:c.instructions+=2;goto B6ab5cd;
case 0x6ab5d1:c.instructions+=1;goto B6ab5d1;
case 0x6ab5d7:goto L6ab5d7;
case 0x6ab5da:c.instructions+=5;goto B6ab5da;
case 0x6ab5dd:c.instructions+=4;goto B6ab5dd;
case 0x6ab5e0:c.instructions+=3;goto B6ab5e0;
case 0x6ab5e3:c.instructions+=2;goto B6ab5e3;
case 0x6ab5e6:c.instructions+=1;goto B6ab5e6;
case 0x6ab5ec:goto L6ab5ec;
case 0x6ab5ef:c.instructions+=4;goto B6ab5ef;
case 0x6ab5f2:c.instructions+=3;goto B6ab5f2;
case 0x6ab5f4:c.instructions+=2;goto B6ab5f4;
case 0x6ab5f7:c.instructions+=1;goto B6ab5f7;
case 0x6ab5f9:goto L6ab5f9;
case 0x6ab5fc:goto L6ab5fc;
case 0x6ab601:c.instructions+=2;goto B6ab601;
case 0x6ab604:c.instructions+=1;goto B6ab604;
case 0x6ab60a:goto L6ab60a;
case 0x6ab611:c.instructions+=1;goto B6ab611;
case 0x6ab617:goto L6ab617;
case 0x6ab61a:c.instructions+=3;goto B6ab61a;
case 0x6ab620:c.instructions+=2;goto B6ab620;
case 0x6ab622:c.instructions+=1;goto B6ab622;
case 0x6ab624:goto L6ab624;
case 0x6ab627:c.instructions+=7;goto B6ab627;
case 0x6ab62a:c.instructions+=6;goto B6ab62a;
case 0x6ab62d:c.instructions+=5;goto B6ab62d;
case 0x6ab630:c.instructions+=4;goto B6ab630;
case 0x6ab632:c.instructions+=3;goto B6ab632;
case 0x6ab634:c.instructions+=2;goto B6ab634;
case 0x6ab637:c.instructions+=1;goto B6ab637;
case 0x6ab63a:goto L6ab63a;
case 0x6ab63c:goto L6ab63c;
case 0x6ab63e:c.instructions+=2;goto B6ab63e;
case 0x6ab641:c.instructions+=1;goto B6ab641;
case 0x6ab644:goto L6ab644;
case 0x6ab646:goto L6ab646;
case 0x6ab649:c.instructions+=5;goto B6ab649;
case 0x6ab64c:c.instructions+=4;goto B6ab64c;
case 0x6ab650:c.instructions+=3;goto B6ab650;
case 0x6ab652:c.instructions+=2;goto B6ab652;
case 0x6ab653:c.instructions+=1;goto B6ab653;
case 0x6ab656:goto L6ab656;
case 0x6ab658:goto L6ab658;
case 0x6ab659:c.instructions+=6;goto B6ab659;
case 0x6ab65a:c.instructions+=5;goto B6ab65a;
case 0x6ab65d:c.instructions+=4;goto B6ab65d;
case 0x6ab660:c.instructions+=3;goto B6ab660;
case 0x6ab661:c.instructions+=2;goto B6ab661;
case 0x6ab663:c.instructions+=1;goto B6ab663;
case 0x6ab668:goto L6ab668;
case 0x6ab66d:goto L6ab66d;
case 0x6ab673:c.instructions+=1;goto B6ab673;
case 0x6ab679:goto L6ab679;
case 0x6ab67c:c.instructions+=6;goto B6ab67c;
case 0x6ab67f:c.instructions+=5;goto B6ab67f;
case 0x6ab682:c.instructions+=4;goto B6ab682;
case 0x6ab684:c.instructions+=3;goto B6ab684;
case 0x6ab686:c.instructions+=2;goto B6ab686;
case 0x6ab689:c.instructions+=1;goto B6ab689;
case 0x6ab68c:goto L6ab68c;
case 0x6ab68e:goto L6ab68e;
case 0x6ab690:c.instructions+=2;goto B6ab690;
case 0x6ab693:c.instructions+=1;goto B6ab693;
case 0x6ab696:goto L6ab696;
case 0x6ab698:goto L6ab698;
case 0x6ab69b:c.instructions+=7;goto B6ab69b;
case 0x6ab69e:c.instructions+=6;goto B6ab69e;
case 0x6ab6a1:c.instructions+=5;goto B6ab6a1;
case 0x6ab6a4:c.instructions+=4;goto B6ab6a4;
case 0x6ab6a6:c.instructions+=3;goto B6ab6a6;
case 0x6ab6a9:c.instructions+=2;goto B6ab6a9;
case 0x6ab6ac:c.instructions+=1;goto B6ab6ac;
case 0x6ab6b0:goto L6ab6b0;
case 0x6ab6b2:goto L6ab6b2;
case 0x6ab6b4:c.instructions+=3;goto B6ab6b4;
case 0x6ab6b7:c.instructions+=2;goto B6ab6b7;
case 0x6ab6ba:c.instructions+=1;goto B6ab6ba;
case 0x6ab6bd:goto L6ab6bd;
case 0x6ab6bf:goto L6ab6bf;
case 0x6ab6c2:c.instructions+=5;goto B6ab6c2;
case 0x6ab6c5:c.instructions+=4;goto B6ab6c5;
case 0x6ab6c7:c.instructions+=3;goto B6ab6c7;
case 0x6ab6c9:c.instructions+=2;goto B6ab6c9;
case 0x6ab6cc:c.instructions+=1;goto B6ab6cc;
case 0x6ab6cf:goto L6ab6cf;
case 0x6ab6d1:goto L6ab6d1;
case 0x6ab6d3:c.instructions+=2;goto B6ab6d3;
case 0x6ab6d6:c.instructions+=1;goto B6ab6d6;
case 0x6ab6d9:goto L6ab6d9;
case 0x6ab6db:goto L6ab6db;
case 0x6ab6de:c.instructions+=5;goto B6ab6de;
case 0x6ab6e1:c.instructions+=4;goto B6ab6e1;
case 0x6ab6e5:c.instructions+=3;goto B6ab6e5;
case 0x6ab6e8:c.instructions+=2;goto B6ab6e8;
case 0x6ab6ea:c.instructions+=1;goto B6ab6ea;
case 0x6ab6ed:goto L6ab6ed;
case 0x6ab6ef:goto L6ab6ef;
case 0x6ab6f1:c.instructions+=8;goto B6ab6f1;
case 0x6ab6f3:c.instructions+=7;goto B6ab6f3;
case 0x6ab6f4:c.instructions+=6;goto B6ab6f4;
case 0x6ab6f7:c.instructions+=5;goto B6ab6f7;
case 0x6ab6fa:c.instructions+=4;goto B6ab6fa;
case 0x6ab6fb:c.instructions+=3;goto B6ab6fb;
case 0x6ab6fc:c.instructions+=2;goto B6ab6fc;
case 0x6ab6ff:c.instructions+=1;goto B6ab6ff;
case 0x6ab702:goto L6ab702;
case 0x6ab704:goto L6ab704;
case 0x6ab705:c.instructions+=2;goto B6ab705;
case 0x6ab707:c.instructions+=1;goto B6ab707;
case 0x6ab70c:goto L6ab70c;
case 0x6ab70f:c.instructions+=11;goto B6ab70f;
case 0x6ab711:c.instructions+=10;goto B6ab711;
case 0x6ab712:c.instructions+=9;goto B6ab712;
case 0x6ab715:c.instructions+=8;goto B6ab715;
case 0x6ab717:c.instructions+=7;goto B6ab717;
case 0x6ab718:c.instructions+=6;goto B6ab718;
case 0x6ab719:c.instructions+=5;goto B6ab719;
case 0x6ab71c:c.instructions+=4;goto B6ab71c;
case 0x6ab71f:c.instructions+=3;goto B6ab71f;
case 0x6ab720:c.instructions+=2;goto B6ab720;
case 0x6ab722:c.instructions+=1;goto B6ab722;
case 0x6ab727:goto L6ab727;
case 0x6ab729:c.instructions+=1;goto B6ab729;
case 0x6ab72b:goto L6ab72b;
case 0x6ab72d:c.instructions+=1;goto B6ab72d;
case 0x6ab733:goto L6ab733;
case 0x6ab736:c.instructions+=1;goto B6ab736;
case 0x6ab73b:goto L6ab73b;
case 0x6ab73d:c.instructions+=1;goto B6ab73d;
case 0x6ab743:goto L6ab743;
case 0x6ab746:c.instructions+=6;goto B6ab746;
case 0x6ab749:c.instructions+=5;goto B6ab749;
case 0x6ab74c:c.instructions+=4;goto B6ab74c;
case 0x6ab74e:c.instructions+=3;goto B6ab74e;
case 0x6ab750:c.instructions+=2;goto B6ab750;
case 0x6ab753:c.instructions+=1;goto B6ab753;
case 0x6ab759:goto L6ab759;
case 0x6ab75b:goto L6ab75b;
case 0x6ab75d:c.instructions+=1;goto B6ab75d;
case 0x6ab760:goto L6ab760;
case 0x6ab762:goto L6ab762;
case 0x6ab765:c.instructions+=7;goto B6ab765;
case 0x6ab768:c.instructions+=6;goto B6ab768;
case 0x6ab76b:c.instructions+=5;goto B6ab76b;
case 0x6ab76e:c.instructions+=4;goto B6ab76e;
case 0x6ab771:c.instructions+=3;goto B6ab771;
case 0x6ab773:c.instructions+=2;goto B6ab773;
case 0x6ab776:c.instructions+=1;goto B6ab776;
case 0x6ab77d:goto L6ab77d;
case 0x6ab77f:goto L6ab77f;
case 0x6ab782:c.instructions+=4;goto B6ab782;
case 0x6ab784:c.instructions+=3;goto B6ab784;
case 0x6ab787:c.instructions+=2;goto B6ab787;
case 0x6ab78a:c.instructions+=1;goto B6ab78a;
case 0x6ab78d:goto L6ab78d;
case 0x6ab78f:goto L6ab78f;
case 0x6ab791:c.instructions+=4;goto B6ab791;
case 0x6ab794:c.instructions+=3;goto B6ab794;
case 0x6ab796:c.instructions+=2;goto B6ab796;
case 0x6ab799:c.instructions+=1;goto B6ab799;
case 0x6ab79f:goto L6ab79f;
case 0x6ab7a1:goto L6ab7a1;
case 0x6ab7a3:c.instructions+=1;goto B6ab7a3;
case 0x6ab7a6:goto L6ab7a6;
case 0x6ab7a8:goto L6ab7a8;
case 0x6ab7ab:c.instructions+=4;goto B6ab7ab;
case 0x6ab7ae:c.instructions+=3;goto B6ab7ae;
case 0x6ab7b5:c.instructions+=2;goto B6ab7b5;
case 0x6ab7b7:c.instructions+=1;goto B6ab7b7;
case 0x6ab7ba:goto L6ab7ba;
case 0x6ab7bc:goto L6ab7bc;
case 0x6ab7be:c.instructions+=8;goto B6ab7be;
case 0x6ab7c0:c.instructions+=7;goto B6ab7c0;
case 0x6ab7c1:c.instructions+=6;goto B6ab7c1;
case 0x6ab7c4:c.instructions+=5;goto B6ab7c4;
case 0x6ab7c7:c.instructions+=4;goto B6ab7c7;
case 0x6ab7c8:c.instructions+=3;goto B6ab7c8;
case 0x6ab7c9:c.instructions+=2;goto B6ab7c9;
case 0x6ab7cc:c.instructions+=1;goto B6ab7cc;
case 0x6ab7d2:goto L6ab7d2;
case 0x6ab7d4:goto L6ab7d4;
case 0x6ab7d5:c.instructions+=2;goto B6ab7d5;
case 0x6ab7d7:c.instructions+=1;goto B6ab7d7;
case 0x6ab7dc:goto L6ab7dc;
case 0x6ab7df:c.instructions+=11;goto B6ab7df;
case 0x6ab7e1:c.instructions+=10;goto B6ab7e1;
case 0x6ab7e2:c.instructions+=9;goto B6ab7e2;
case 0x6ab7e5:c.instructions+=8;goto B6ab7e5;
case 0x6ab7e7:c.instructions+=7;goto B6ab7e7;
case 0x6ab7e8:c.instructions+=6;goto B6ab7e8;
case 0x6ab7e9:c.instructions+=5;goto B6ab7e9;
case 0x6ab7ec:c.instructions+=4;goto B6ab7ec;
case 0x6ab7f2:c.instructions+=3;goto B6ab7f2;
case 0x6ab7f3:c.instructions+=2;goto B6ab7f3;
case 0x6ab7f5:c.instructions+=1;goto B6ab7f5;
case 0x6ab7fa:goto L6ab7fa;
case 0x6ab7fc:c.instructions+=1;goto B6ab7fc;
case 0x6ab802:goto L6ab802;
case 0x6ab804:c.instructions+=1;goto B6ab804;
case 0x6ab80a:goto L6ab80a;
case 0x6ab811:c.instructions+=1;goto B6ab811;
case 0x6ab816:goto L6ab816;
case 0x6ab81c:c.instructions+=1;goto B6ab81c;
case 0x6ab822:goto L6ab822;
case 0x6ab825:c.instructions+=6;goto B6ab825;
case 0x6ab828:c.instructions+=5;goto B6ab828;
case 0x6ab82b:c.instructions+=4;goto B6ab82b;
case 0x6ab82d:c.instructions+=3;goto B6ab82d;
case 0x6ab82f:c.instructions+=2;goto B6ab82f;
case 0x6ab832:c.instructions+=1;goto B6ab832;
case 0x6ab835:goto L6ab835;
case 0x6ab837:goto L6ab837;
case 0x6ab839:c.instructions+=1;goto B6ab839;
case 0x6ab83c:goto L6ab83c;
case 0x6ab83e:goto L6ab83e;
case 0x6ab841:c.instructions+=7;goto B6ab841;
case 0x6ab844:c.instructions+=6;goto B6ab844;
case 0x6ab847:c.instructions+=5;goto B6ab847;
case 0x6ab84a:c.instructions+=4;goto B6ab84a;
case 0x6ab84c:c.instructions+=3;goto B6ab84c;
case 0x6ab84f:c.instructions+=2;goto B6ab84f;
case 0x6ab852:c.instructions+=1;goto B6ab852;
case 0x6ab856:goto L6ab856;
case 0x6ab858:goto L6ab858;
case 0x6ab85a:c.instructions+=1;goto B6ab85a;
case 0x6ab85d:goto L6ab85d;
case 0x6ab85f:goto L6ab85f;
case 0x6ab862:c.instructions+=6;goto B6ab862;
case 0x6ab865:c.instructions+=5;goto B6ab865;
case 0x6ab868:c.instructions+=4;goto B6ab868;
case 0x6ab86a:c.instructions+=3;goto B6ab86a;
case 0x6ab86c:c.instructions+=2;goto B6ab86c;
case 0x6ab86f:c.instructions+=1;goto B6ab86f;
case 0x6ab872:goto L6ab872;
case 0x6ab874:goto L6ab874;
case 0x6ab876:c.instructions+=2;goto B6ab876;
case 0x6ab879:c.instructions+=1;goto B6ab879;
case 0x6ab87c:goto L6ab87c;
case 0x6ab87e:goto L6ab87e;
case 0x6ab881:c.instructions+=5;goto B6ab881;
case 0x6ab884:c.instructions+=4;goto B6ab884;
case 0x6ab887:c.instructions+=3;goto B6ab887;
case 0x6ab889:c.instructions+=2;goto B6ab889;
case 0x6ab88c:c.instructions+=1;goto B6ab88c;
case 0x6ab890:goto L6ab890;
case 0x6ab892:goto L6ab892;
case 0x6ab894:c.instructions+=3;goto B6ab894;
case 0x6ab897:c.instructions+=2;goto B6ab897;
case 0x6ab89a:c.instructions+=1;goto B6ab89a;
case 0x6ab89d:goto L6ab89d;
case 0x6ab89f:goto L6ab89f;
case 0x6ab8a2:c.instructions+=6;goto B6ab8a2;
case 0x6ab8a5:c.instructions+=5;goto B6ab8a5;
case 0x6ab8a8:c.instructions+=4;goto B6ab8a8;
case 0x6ab8aa:c.instructions+=3;goto B6ab8aa;
case 0x6ab8ac:c.instructions+=2;goto B6ab8ac;
case 0x6ab8af:c.instructions+=1;goto B6ab8af;
case 0x6ab8b5:goto L6ab8b5;
case 0x6ab8b7:goto L6ab8b7;
case 0x6ab8b9:c.instructions+=2;goto B6ab8b9;
case 0x6ab8bc:c.instructions+=1;goto B6ab8bc;
case 0x6ab8bf:goto L6ab8bf;
case 0x6ab8c1:goto L6ab8c1;
case 0x6ab8c4:c.instructions+=6;goto B6ab8c4;
case 0x6ab8c6:c.instructions+=5;goto B6ab8c6;
case 0x6ab8c9:c.instructions+=4;goto B6ab8c9;
case 0x6ab8d0:c.instructions+=3;goto B6ab8d0;
case 0x6ab8d2:c.instructions+=2;goto B6ab8d2;
case 0x6ab8d5:c.instructions+=1;goto B6ab8d5;
case 0x6ab8d8:goto L6ab8d8;
case 0x6ab8da:goto L6ab8da;
case 0x6ab8dc:c.instructions+=8;goto B6ab8dc;
case 0x6ab8de:c.instructions+=7;goto B6ab8de;
case 0x6ab8df:c.instructions+=6;goto B6ab8df;
case 0x6ab8e2:c.instructions+=5;goto B6ab8e2;
case 0x6ab8e5:c.instructions+=4;goto B6ab8e5;
case 0x6ab8e6:c.instructions+=3;goto B6ab8e6;
case 0x6ab8e7:c.instructions+=2;goto B6ab8e7;
case 0x6ab8ea:c.instructions+=1;goto B6ab8ea;
case 0x6ab8ed:goto L6ab8ed;
case 0x6ab8ef:goto L6ab8ef;
case 0x6ab8f0:c.instructions+=2;goto B6ab8f0;
case 0x6ab8f2:c.instructions+=1;goto B6ab8f2;
case 0x6ab8f7:goto L6ab8f7;
case 0x6ab8f9:c.instructions+=11;goto B6ab8f9;
case 0x6ab8fc:c.instructions+=10;goto B6ab8fc;
case 0x6ab8fe:c.instructions+=9;goto B6ab8fe;
case 0x6ab8ff:c.instructions+=8;goto B6ab8ff;
case 0x6ab902:c.instructions+=7;goto B6ab902;
case 0x6ab905:c.instructions+=6;goto B6ab905;
case 0x6ab906:c.instructions+=5;goto B6ab906;
case 0x6ab907:c.instructions+=4;goto B6ab907;
case 0x6ab90a:c.instructions+=3;goto B6ab90a;
case 0x6ab90c:c.instructions+=2;goto B6ab90c;
case 0x6ab90d:c.instructions+=1;goto B6ab90d;
case 0x6ab912:goto L6ab912;
case 0x6ab915:c.instructions+=10;goto B6ab915;
case 0x6ab918:c.instructions+=9;goto B6ab918;
case 0x6ab919:c.instructions+=8;goto B6ab919;
case 0x6ab91c:c.instructions+=7;goto B6ab91c;
case 0x6ab922:c.instructions+=6;goto B6ab922;
case 0x6ab923:c.instructions+=5;goto B6ab923;
case 0x6ab924:c.instructions+=4;goto B6ab924;
case 0x6ab927:c.instructions+=3;goto B6ab927;
case 0x6ab929:c.instructions+=2;goto B6ab929;
case 0x6ab92a:c.instructions+=1;goto B6ab92a;
case 0x6ab92f:goto L6ab92f;
case 0x6ab931:c.instructions+=1;goto B6ab931;
case 0x6ab933:goto L6ab933;
case 0x6ab936:c.instructions+=1;goto B6ab936;
case 0x6ab938:goto L6ab938;
case 0x6ab93a:c.instructions+=1;goto B6ab93a;
case 0x6ab93c:goto L6ab93c;
case 0x6ab93e:goto L6ab93e;
case 0x6ab941:c.instructions+=11;goto B6ab941;
case 0x6ab944:c.instructions+=10;goto B6ab944;
case 0x6ab947:c.instructions+=9;goto B6ab947;
case 0x6ab94a:c.instructions+=8;goto B6ab94a;
case 0x6ab94c:c.instructions+=7;goto B6ab94c;
case 0x6ab94f:c.instructions+=6;goto B6ab94f;
case 0x6ab951:c.instructions+=5;goto B6ab951;
case 0x6ab954:c.instructions+=4;goto B6ab954;
case 0x6ab957:c.instructions+=3;goto B6ab957;
case 0x6ab95a:c.instructions+=2;goto B6ab95a;
case 0x6ab95d:c.instructions+=1;goto B6ab95d;
case 0x6ab95f:goto L6ab95f;
case 0x6ab962:c.instructions+=2;goto B6ab962;
case 0x6ab965:c.instructions+=1;goto B6ab965;
case 0x6ab967:goto L6ab967;
case 0x6ab96a:c.instructions+=2;goto B6ab96a;
case 0x6ab96d:c.instructions+=1;goto B6ab96d;
case 0x6ab96f:goto L6ab96f;
case 0x6ab972:c.instructions+=4;goto B6ab972;
case 0x6ab974:c.instructions+=3;goto B6ab974;
case 0x6ab976:c.instructions+=2;goto B6ab976;
case 0x6ab979:c.instructions+=1;goto B6ab979;
case 0x6ab97c:goto L6ab97c;
case 0x6ab97e:goto L6ab97e;
case 0x6ab980:c.instructions+=1;goto B6ab980;
case 0x6ab983:goto L6ab983;
case 0x6ab985:goto L6ab985;
case 0x6ab988:c.instructions+=2;goto B6ab988;
case 0x6ab98b:c.instructions+=1;goto B6ab98b;
case 0x6ab98f:goto L6ab98f;
case 0x6ab991:goto L6ab991;
case 0x6ab995:goto L6ab995;
case 0x6ab998:c.instructions+=3;goto B6ab998;
case 0x6ab99b:c.instructions+=2;goto B6ab99b;
case 0x6ab99d:c.instructions+=1;goto B6ab99d;
case 0x6ab99f:goto L6ab99f;
case 0x6ab9a2:c.instructions+=4;goto B6ab9a2;
case 0x6ab9a5:c.instructions+=3;goto B6ab9a5;
case 0x6ab9a8:c.instructions+=2;goto B6ab9a8;
case 0x6ab9ab:c.instructions+=1;goto B6ab9ab;
case 0x6ab9ad:goto L6ab9ad;
case 0x6ab9b0:c.instructions+=1;goto B6ab9b0;
case 0x6ab9b2:goto L6ab9b2;
case 0x6ab9b5:c.instructions+=5;goto B6ab9b5;
case 0x6ab9b8:c.instructions+=4;goto B6ab9b8;
case 0x6ab9bb:c.instructions+=3;goto B6ab9bb;
case 0x6ab9be:c.instructions+=2;goto B6ab9be;
case 0x6ab9c0:c.instructions+=1;goto B6ab9c0;
case 0x6ab9c2:goto L6ab9c2;
case 0x6ab9c4:c.instructions+=2;goto B6ab9c4;
case 0x6ab9c6:c.instructions+=1;goto B6ab9c6;
case 0x6ab9cb:goto L6ab9cb;
case 0x6ab9ce:c.instructions+=1;goto B6ab9ce;
case 0x6ab9d0:goto L6ab9d0;
case 0x6ab9d3:c.instructions+=1;goto B6ab9d3;
case 0x6ab9d6:goto L6ab9d6;
case 0x6ab9d9:c.instructions+=1;goto B6ab9d9;
case 0x6ab9df:goto L6ab9df;
case 0x6ab9e4:goto L6ab9e4;
case 0x6ab9e6:c.instructions+=1;goto B6ab9e6;
case 0x6ab9eb:goto L6ab9eb;
case 0x6ab9ed:c.instructions+=1;goto B6ab9ed;
case 0x6ab9ef:goto L6ab9ef;
case 0x6ab9f1:c.instructions+=1;goto B6ab9f1;
case 0x6ab9f6:goto L6ab9f6;
case 0x6ab9f9:c.instructions+=1;goto B6ab9f9;
case 0x6ab9fb:goto L6ab9fb;
case 0x6ab9ff:goto L6ab9ff;
case 0x6aba03:c.instructions+=1;goto B6aba03;
case 0x6aba09:goto L6aba09;
case 0x6aba0c:c.instructions+=10;goto B6aba0c;
case 0x6aba0e:c.instructions+=9;goto B6aba0e;
case 0x6aba11:c.instructions+=8;goto B6aba11;
case 0x6aba14:c.instructions+=7;goto B6aba14;
case 0x6aba16:c.instructions+=6;goto B6aba16;
case 0x6aba19:c.instructions+=5;goto B6aba19;
case 0x6aba1e:c.instructions+=4;goto B6aba1e;
case 0x6aba21:c.instructions+=3;goto B6aba21;
case 0x6aba23:c.instructions+=2;goto B6aba23;
case 0x6aba24:c.instructions+=1;goto B6aba24;
case 0x6aba29:goto L6aba29;
case 0x6aba2b:c.instructions+=2;goto B6aba2b;
case 0x6aba2d:c.instructions+=1;goto B6aba2d;
case 0x6aba33:goto L6aba33;
case 0x6aba36:c.instructions+=2;goto B6aba36;
case 0x6aba37:c.instructions+=1;goto B6aba37;
case 0x6aba3c:goto L6aba3c;
case 0x6aba3e:c.instructions+=2;goto B6aba3e;
case 0x6aba40:c.instructions+=1;goto B6aba40;
case 0x6aba46:goto L6aba46;
case 0x6aba49:c.instructions+=2;goto B6aba49;
case 0x6aba4c:c.instructions+=1;goto B6aba4c;
case 0x6aba4e:goto L6aba4e;
case 0x6aba51:c.instructions+=3;goto B6aba51;
case 0x6aba53:c.instructions+=2;goto B6aba53;
case 0x6aba56:c.instructions+=1;goto B6aba56;
case 0x6aba58:goto L6aba58;
case 0x6aba5b:c.instructions+=4;goto B6aba5b;
case 0x6aba5e:c.instructions+=3;goto B6aba5e;
case 0x6aba61:c.instructions+=2;goto B6aba61;
case 0x6aba64:c.instructions+=1;goto B6aba64;
case 0x6aba66:goto L6aba66;
case 0x6aba69:c.instructions+=2;goto B6aba69;
case 0x6aba6c:c.instructions+=1;goto B6aba6c;
case 0x6aba6e:goto L6aba6e;
case 0x6aba71:c.instructions+=2;goto B6aba71;
case 0x6aba74:c.instructions+=1;goto B6aba74;
case 0x6aba77:goto L6aba77;
case 0x6aba78:c.instructions+=2;goto B6aba78;
case 0x6aba7b:c.instructions+=1;goto B6aba7b;
case 0x6aba7d:goto L6aba7d;
case 0x6aba80:c.instructions+=5;goto B6aba80;
case 0x6aba83:c.instructions+=4;goto B6aba83;
case 0x6aba86:c.instructions+=3;goto B6aba86;
case 0x6aba88:c.instructions+=2;goto B6aba88;
case 0x6aba8a:c.instructions+=1;goto B6aba8a;
case 0x6aba8d:goto L6aba8d;
case 0x6aba90:c.instructions+=7;goto B6aba90;
case 0x6aba93:c.instructions+=6;goto B6aba93;
case 0x6aba96:c.instructions+=5;goto B6aba96;
case 0x6aba99:c.instructions+=4;goto B6aba99;
case 0x6aba9c:c.instructions+=3;goto B6aba9c;
case 0x6aba9f:c.instructions+=2;goto B6aba9f;
case 0x6abaa1:c.instructions+=1;goto B6abaa1;
case 0x6abaa4:goto L6abaa4;
case 0x6abaa6:goto L6abaa6;
case 0x6abaa8:c.instructions+=2;goto B6abaa8;
case 0x6abaab:c.instructions+=1;goto B6abaab;
case 0x6abaae:goto L6abaae;
case 0x6abab0:goto L6abab0;
case 0x6abab3:c.instructions+=8;goto B6abab3;
case 0x6abab6:c.instructions+=7;goto B6abab6;
case 0x6abab9:c.instructions+=6;goto B6abab9;
case 0x6ababc:c.instructions+=5;goto B6ababc;
case 0x6ababf:c.instructions+=4;goto B6ababf;
case 0x6abac2:c.instructions+=3;goto B6abac2;
case 0x6abac5:c.instructions+=2;goto B6abac5;
case 0x6abac7:c.instructions+=1;goto B6abac7;
case 0x6abaca:goto L6abaca;
case 0x6abacc:goto L6abacc;
case 0x6abace:c.instructions+=2;goto B6abace;
case 0x6abad1:c.instructions+=1;goto B6abad1;
case 0x6abad4:goto L6abad4;
case 0x6abad6:goto L6abad6;
case 0x6abad9:c.instructions+=4;goto B6abad9;
case 0x6abadb:c.instructions+=3;goto B6abadb;
case 0x6abae1:c.instructions+=2;goto B6abae1;
case 0x6abae7:c.instructions+=1;goto B6abae7;
case 0x6abae9:goto L6abae9;
case 0x6abaec:c.instructions+=2;goto B6abaec;
case 0x6abaee:c.instructions+=1;goto B6abaee;
case 0x6abaf1:goto L6abaf1;
case 0x6abaf3:goto L6abaf3;
case 0x6abaf6:c.instructions+=4;goto B6abaf6;
case 0x6abaf8:c.instructions+=3;goto B6abaf8;
case 0x6abafe:c.instructions+=2;goto B6abafe;
case 0x6abb04:c.instructions+=1;goto B6abb04;
case 0x6abb06:goto L6abb06;
case 0x6abb0a:c.instructions+=2;goto B6abb0a;
case 0x6abb0d:c.instructions+=1;goto B6abb0d;
case 0x6abb0f:goto L6abb0f;
case 0x6abb15:goto L6abb15;
case 0x6abb18:c.instructions+=5;goto B6abb18;
case 0x6abb1a:c.instructions+=4;goto B6abb1a;
case 0x6abb1d:c.instructions+=3;goto B6abb1d;
case 0x6abb20:c.instructions+=2;goto B6abb20;
case 0x6abb22:c.instructions+=1;goto B6abb22;
case 0x6abb25:goto L6abb25;
case 0x6abb27:goto L6abb27;
case 0x6abb29:c.instructions+=2;goto B6abb29;
case 0x6abb2c:c.instructions+=1;goto B6abb2c;
case 0x6abb30:goto L6abb30;
case 0x6abb32:goto L6abb32;
case 0x6abb35:c.instructions+=1;goto B6abb35;
case 0x6abb37:goto L6abb37;
case 0x6abb3d:goto L6abb3d;
case 0x6abb40:c.instructions+=3;goto B6abb40;
case 0x6abb43:c.instructions+=2;goto B6abb43;
case 0x6abb45:c.instructions+=1;goto B6abb45;
case 0x6abb47:goto L6abb47;
case 0x6abb4d:c.instructions+=1;goto B6abb4d;
case 0x6abb4f:goto L6abb4f;
case 0x6abb52:c.instructions+=5;goto B6abb52;
case 0x6abb54:c.instructions+=4;goto B6abb54;
case 0x6abb57:c.instructions+=3;goto B6abb57;
case 0x6abb59:c.instructions+=2;goto B6abb59;
case 0x6abb5c:c.instructions+=1;goto B6abb5c;
case 0x6abb5f:goto L6abb5f;
case 0x6abb61:goto L6abb61;
case 0x6abb63:c.instructions+=1;goto B6abb63;
case 0x6abb66:goto L6abb66;
case 0x6abb68:goto L6abb68;
case 0x6abb6b:c.instructions+=6;goto B6abb6b;
case 0x6abb6e:c.instructions+=5;goto B6abb6e;
case 0x6abb71:c.instructions+=4;goto B6abb71;
case 0x6abb73:c.instructions+=3;goto B6abb73;
case 0x6abb75:c.instructions+=2;goto B6abb75;
case 0x6abb78:c.instructions+=1;goto B6abb78;
case 0x6abb7b:goto L6abb7b;
case 0x6abb7d:goto L6abb7d;
case 0x6abb7f:c.instructions+=2;goto B6abb7f;
case 0x6abb82:c.instructions+=1;goto B6abb82;
case 0x6abb85:goto L6abb85;
case 0x6abb87:goto L6abb87;
case 0x6abb8a:c.instructions+=4;goto B6abb8a;
case 0x6abb8c:c.instructions+=3;goto B6abb8c;
case 0x6abb8f:c.instructions+=2;goto B6abb8f;
case 0x6abb95:c.instructions+=1;goto B6abb95;
case 0x6abb98:goto L6abb98;
case 0x6abb9a:c.instructions+=1;goto B6abb9a;
case 0x6abb9d:goto L6abb9d;
case 0x6abb9f:goto L6abb9f;
case 0x6abba1:c.instructions+=1;goto B6abba1;
case 0x6abba4:goto L6abba4;
case 0x6abba6:goto L6abba6;
case 0x6abba9:c.instructions+=14;goto B6abba9;
case 0x6abbab:c.instructions+=13;goto B6abbab;
case 0x6abbae:c.instructions+=12;goto B6abbae;
case 0x6abbb4:c.instructions+=11;goto B6abbb4;
case 0x6abbb6:c.instructions+=10;goto B6abbb6;
case 0x6abbb8:c.instructions+=9;goto B6abbb8;
case 0x6abbbb:c.instructions+=8;goto B6abbbb;
case 0x6abbbd:c.instructions+=7;goto B6abbbd;
case 0x6abbc0:c.instructions+=6;goto B6abbc0;
case 0x6abbc2:c.instructions+=5;goto B6abbc2;
case 0x6abbc5:c.instructions+=4;goto B6abbc5;
case 0x6abbcb:c.instructions+=3;goto B6abbcb;
case 0x6abbcc:c.instructions+=2;goto B6abbcc;
case 0x6abbcf:c.instructions+=1;goto B6abbcf;
case 0x6abbd4:goto L6abbd4;
case 0x6abbd8:c.instructions+=2;goto B6abbd8;
case 0x6abbdc:c.instructions+=1;goto B6abbdc;
case 0x6abbde:goto L6abbde;
case 0x6abbe1:c.instructions+=10;goto B6abbe1;
case 0x6abbe3:c.instructions+=9;goto B6abbe3;
case 0x6abbe6:c.instructions+=8;goto B6abbe6;
case 0x6abbec:c.instructions+=7;goto B6abbec;
case 0x6abbed:c.instructions+=6;goto B6abbed;
case 0x6abbf0:c.instructions+=5;goto B6abbf0;
case 0x6abbf4:c.instructions+=4;goto B6abbf4;
case 0x6abbf7:c.instructions+=3;goto B6abbf7;
case 0x6abbf8:c.instructions+=2;goto B6abbf8;
case 0x6abbfa:c.instructions+=1;goto B6abbfa;
case 0x6abbff:goto L6abbff;
case 0x6abc02:c.instructions+=3;goto B6abc02;
case 0x6abc05:c.instructions+=2;goto B6abc05;
case 0x6abc08:c.instructions+=1;goto B6abc08;
case 0x6abc0a:goto L6abc0a;
case 0x6abc0d:c.instructions+=2;goto B6abc0d;
case 0x6abc0f:c.instructions+=1;goto B6abc0f;
case 0x6abc11:goto L6abc11;
case 0x6abc13:c.instructions+=1;goto B6abc13;
case 0x6abc18:goto L6abc18;
case 0x6abc1b:c.instructions+=11;goto B6abc1b;
case 0x6abc1e:c.instructions+=10;goto B6abc1e;
case 0x6abc21:c.instructions+=9;goto B6abc21;
case 0x6abc24:c.instructions+=8;goto B6abc24;
case 0x6abc27:c.instructions+=7;goto B6abc27;
case 0x6abc29:c.instructions+=6;goto B6abc29;
case 0x6abc2b:c.instructions+=5;goto B6abc2b;
case 0x6abc2e:c.instructions+=4;goto B6abc2e;
case 0x6abc31:c.instructions+=3;goto B6abc31;
case 0x6abc34:c.instructions+=2;goto B6abc34;
case 0x6abc37:c.instructions+=1;goto B6abc37;
case 0x6abc3d:goto L6abc3d;
case 0x6abc40:c.instructions+=5;goto B6abc40;
case 0x6abc43:c.instructions+=4;goto B6abc43;
case 0x6abc46:c.instructions+=3;goto B6abc46;
case 0x6abc47:c.instructions+=2;goto B6abc47;
case 0x6abc4a:c.instructions+=1;goto B6abc4a;
case 0x6abc4f:goto L6abc4f;
case 0x6abc51:c.instructions+=3;goto B6abc51;
case 0x6abc52:c.instructions+=2;goto B6abc52;
case 0x6abc55:c.instructions+=1;goto B6abc55;
case 0x6abc5b:goto L6abc5b;
case 0x6abc5e:c.instructions+=6;goto B6abc5e;
case 0x6abc61:c.instructions+=5;goto B6abc61;
case 0x6abc64:c.instructions+=4;goto B6abc64;
case 0x6abc67:c.instructions+=3;goto B6abc67;
case 0x6abc6a:c.instructions+=2;goto B6abc6a;
case 0x6abc6c:c.instructions+=1;goto B6abc6c;
case 0x6abc6f:goto L6abc6f;
case 0x6abc71:goto L6abc71;
case 0x6abc73:c.instructions+=1;goto B6abc73;
case 0x6abc76:goto L6abc76;
case 0x6abc78:goto L6abc78;
case 0x6abc7b:c.instructions+=12;goto B6abc7b;
case 0x6abc7e:c.instructions+=11;goto B6abc7e;
case 0x6abc80:c.instructions+=10;goto B6abc80;
case 0x6abc83:c.instructions+=9;goto B6abc83;
case 0x6abc84:c.instructions+=8;goto B6abc84;
case 0x6abc87:c.instructions+=7;goto B6abc87;
case 0x6abc89:c.instructions+=6;goto B6abc89;
case 0x6abc8a:c.instructions+=5;goto B6abc8a;
case 0x6abc8d:c.instructions+=4;goto B6abc8d;
case 0x6abc8f:c.instructions+=3;goto B6abc8f;
case 0x6abc92:c.instructions+=2;goto B6abc92;
case 0x6abc93:c.instructions+=1;goto B6abc93;
case 0x6abc98:goto L6abc98;
case 0x6abc9b:c.instructions+=6;goto B6abc9b;
case 0x6abc9e:c.instructions+=5;goto B6abc9e;
case 0x6abca1:c.instructions+=4;goto B6abca1;
case 0x6abca4:c.instructions+=3;goto B6abca4;
case 0x6abca7:c.instructions+=2;goto B6abca7;
case 0x6abca9:c.instructions+=1;goto B6abca9;
case 0x6abcac:goto L6abcac;
case 0x6abcae:goto L6abcae;
case 0x6abcb0:c.instructions+=1;goto B6abcb0;
case 0x6abcb3:goto L6abcb3;
case 0x6abcb5:goto L6abcb5;
case 0x6abcba:goto L6abcba;
case 0x6abcbd:goto L6abcbd;
case 0x6abcbf:c.instructions+=1;goto B6abcbf;
case 0x6abcc4:goto L6abcc4;
case 0x6abcc7:c.instructions+=3;goto B6abcc7;
case 0x6abcc8:c.instructions+=2;goto B6abcc8;
case 0x6abccf:c.instructions+=1;goto B6abccf;
case 0x6abcd2:goto L6abcd2;
case 0x6abcd5:c.instructions+=3;goto B6abcd5;
case 0x6abcd8:c.instructions+=2;goto B6abcd8;
case 0x6abcdb:c.instructions+=1;goto B6abcdb;
case 0x6abce1:goto L6abce1;
case 0x6abce3:c.instructions+=3;goto B6abce3;
case 0x6abce6:c.instructions+=2;goto B6abce6;
case 0x6abce9:c.instructions+=1;goto B6abce9;
case 0x6abceb:goto L6abceb;
case 0x6abcee:c.instructions+=1;goto B6abcee;
case 0x6abcf3:goto L6abcf3;
case 0x6abcf4:c.instructions+=6;goto B6abcf4;
case 0x6abcf5:c.instructions+=5;goto B6abcf5;
case 0x6abcf7:c.instructions+=4;goto B6abcf7;
case 0x6abcf8:c.instructions+=3;goto B6abcf8;
case 0x6abcf9:c.instructions+=2;goto B6abcf9;
case 0x6abcfa:c.instructions+=1;goto B6abcfa;
case 0x6abcfb:goto L6abcfb;
case 0x6abd00:c.instructions+=1;goto B6abd00;
case 0x6abd02:goto L6abd02;
case 0x6abd05:c.instructions+=1;goto B6abd05;
case 0x6abd0a:goto L6abd0a;
case 0x6abd0c:c.instructions+=11;goto B6abd0c;
case 0x6abd0d:c.instructions+=10;goto B6abd0d;
case 0x6abd0f:c.instructions+=9;goto B6abd0f;
case 0x6abd12:c.instructions+=8;goto B6abd12;
case 0x6abd13:c.instructions+=7;goto B6abd13;
case 0x6abd14:c.instructions+=6;goto B6abd14;
case 0x6abd16:c.instructions+=5;goto B6abd16;
case 0x6abd18:c.instructions+=4;goto B6abd18;
case 0x6abd1b:c.instructions+=3;goto B6abd1b;
case 0x6abd1c:c.instructions+=2;goto B6abd1c;
case 0x6abd1f:c.instructions+=1;goto B6abd1f;
case 0x6abd21:goto L6abd21;
case 0x6abd24:c.instructions+=1;goto B6abd24;
case 0x6abd27:goto L6abd27;
case 0x6abd29:c.instructions+=3;goto B6abd29;
case 0x6abd2c:c.instructions+=2;goto B6abd2c;
case 0x6abd2f:c.instructions+=1;goto B6abd2f;
case 0x6abd31:goto L6abd31;
case 0x6abd34:c.instructions+=1;goto B6abd34;
case 0x6abd36:goto L6abd36;
case 0x6abd39:goto L6abd39;
case 0x6abd3c:c.instructions+=2;goto B6abd3c;
case 0x6abd3d:c.instructions+=1;goto B6abd3d;
case 0x6abd3f:goto L6abd3f;
case 0x6abd42:goto L6abd42;
case 0x6abd45:c.instructions+=6;goto B6abd45;
case 0x6abd48:c.instructions+=5;goto B6abd48;
case 0x6abd4b:c.instructions+=4;goto B6abd4b;
case 0x6abd4d:c.instructions+=3;goto B6abd4d;
case 0x6abd50:c.instructions+=2;goto B6abd50;
case 0x6abd51:c.instructions+=1;goto B6abd51;
case 0x6abd56:goto L6abd56;
case 0x6abd58:c.instructions+=3;goto B6abd58;
case 0x6abd59:c.instructions+=2;goto B6abd59;
case 0x6abd5c:c.instructions+=1;goto B6abd5c;
case 0x6abd5e:goto L6abd5e;
case 0x6abd63:c.instructions+=1;goto B6abd63;
case 0x6abd68:goto L6abd68;
case 0x6abd6a:c.instructions+=4;goto B6abd6a;
case 0x6abd6d:c.instructions+=3;goto B6abd6d;
case 0x6abd6f:c.instructions+=2;goto B6abd6f;
case 0x6abd72:c.instructions+=1;goto B6abd72;
case 0x6abd75:goto L6abd75;
case 0x6abd77:goto L6abd77;
case 0x6abd79:c.instructions+=1;goto B6abd79;
case 0x6abd7c:goto L6abd7c;
case 0x6abd7e:goto L6abd7e;
case 0x6abd80:c.instructions+=3;goto B6abd80;
case 0x6abd82:c.instructions+=2;goto B6abd82;
case 0x6abd85:c.instructions+=1;goto B6abd85;
case 0x6abd8a:goto L6abd8a;
case 0x6abd8d:c.instructions+=2;goto B6abd8d;
case 0x6abd90:c.instructions+=1;goto B6abd90;
case 0x6abd96:goto L6abd96;
case 0x6abd99:c.instructions+=5;goto B6abd99;
case 0x6abd9c:c.instructions+=4;goto B6abd9c;
case 0x6abd9f:c.instructions+=3;goto B6abd9f;
case 0x6abda2:c.instructions+=2;goto B6abda2;
case 0x6abda5:c.instructions+=1;goto B6abda5;
case 0x6abdab:goto L6abdab;
case 0x6abdaf:c.instructions+=1;goto B6abdaf;
case 0x6abdb5:goto L6abdb5;
case 0x6abdb9:c.instructions+=2;goto B6abdb9;
case 0x6abdbd:c.instructions+=1;goto B6abdbd;
case 0x6abdbf:goto L6abdbf;
case 0x6abdc2:goto L6abdc2;
case 0x6abdc4:c.instructions+=2;goto B6abdc4;
case 0x6abdc6:c.instructions+=1;goto B6abdc6;
case 0x6abdc8:goto L6abdc8;
case 0x6abdcb:goto L6abdcb;
case 0x6abdce:c.instructions+=2;goto B6abdce;
case 0x6abdd1:c.instructions+=1;goto B6abdd1;
case 0x6abdd3:goto L6abdd3;
case 0x6abdd7:c.instructions+=1;goto B6abdd7;
case 0x6abdd9:goto L6abdd9;
case 0x6abddc:c.instructions+=7;goto B6abddc;
case 0x6abddf:c.instructions+=6;goto B6abddf;
case 0x6abde2:c.instructions+=5;goto B6abde2;
case 0x6abde5:c.instructions+=4;goto B6abde5;
case 0x6abde8:c.instructions+=3;goto B6abde8;
case 0x6abdeb:c.instructions+=2;goto B6abdeb;
case 0x6abdee:c.instructions+=1;goto B6abdee;
case 0x6abdf0:goto L6abdf0;
case 0x6abdf4:c.instructions+=1;goto B6abdf4;
case 0x6abdf6:goto L6abdf6;
case 0x6abdf9:c.instructions+=6;goto B6abdf9;
case 0x6abdfc:c.instructions+=5;goto B6abdfc;
case 0x6abdff:c.instructions+=4;goto B6abdff;
case 0x6abe01:c.instructions+=3;goto B6abe01;
case 0x6abe03:c.instructions+=2;goto B6abe03;
case 0x6abe06:c.instructions+=1;goto B6abe06;
case 0x6abe08:goto L6abe08;
case 0x6abe0b:goto L6abe0b;
case 0x6abe0c:c.instructions+=2;goto B6abe0c;
case 0x6abe0f:c.instructions+=1;goto B6abe0f;
case 0x6abe11:goto L6abe11;
case 0x6abe13:goto L6abe13;
case 0x6abe16:goto L6abe16;
case 0x6abe19:c.instructions+=2;goto B6abe19;
case 0x6abe1b:c.instructions+=1;goto B6abe1b;
case 0x6abe1d:goto L6abe1d;
case 0x6abe20:c.instructions+=3;goto B6abe20;
case 0x6abe23:c.instructions+=2;goto B6abe23;
case 0x6abe26:c.instructions+=1;goto B6abe26;
case 0x6abe28:goto L6abe28;
case 0x6abe2c:c.instructions+=1;goto B6abe2c;
case 0x6abe2e:goto L6abe2e;
case 0x6abe30:c.instructions+=2;goto B6abe30;
case 0x6abe33:c.instructions+=1;goto B6abe33;
case 0x6abe35:goto L6abe35;
case 0x6abe38:c.instructions+=3;goto B6abe38;
case 0x6abe3b:c.instructions+=2;goto B6abe3b;
case 0x6abe3e:c.instructions+=1;goto B6abe3e;
case 0x6abe40:goto L6abe40;
case 0x6abe43:c.instructions+=4;goto B6abe43;
case 0x6abe46:c.instructions+=3;goto B6abe46;
case 0x6abe4a:c.instructions+=2;goto B6abe4a;
case 0x6abe4d:c.instructions+=1;goto B6abe4d;
case 0x6abe4f:goto L6abe4f;
case 0x6abe52:c.instructions+=5;goto B6abe52;
case 0x6abe55:c.instructions+=4;goto B6abe55;
case 0x6abe58:c.instructions+=3;goto B6abe58;
case 0x6abe5b:c.instructions+=2;goto B6abe5b;
case 0x6abe5e:c.instructions+=1;goto B6abe5e;
case 0x6abe60:goto L6abe60;
case 0x6abe62:c.instructions+=1;goto B6abe62;
case 0x6abe64:goto L6abe64;
case 0x6abe67:c.instructions+=4;goto B6abe67;
case 0x6abe6a:c.instructions+=3;goto B6abe6a;
case 0x6abe6c:c.instructions+=2;goto B6abe6c;
case 0x6abe6f:c.instructions+=1;goto B6abe6f;
case 0x6abe76:goto L6abe76;
case 0x6abe77:c.instructions+=2;goto B6abe77;
case 0x6abe7a:c.instructions+=1;goto B6abe7a;
case 0x6abe7c:goto L6abe7c;
case 0x6abe7e:goto L6abe7e;
case 0x6abe80:c.instructions+=2;goto B6abe80;
case 0x6abe83:c.instructions+=1;goto B6abe83;
case 0x6abe85:goto L6abe85;
case 0x6abe88:c.instructions+=3;goto B6abe88;
case 0x6abe8b:c.instructions+=2;goto B6abe8b;
case 0x6abe8e:c.instructions+=1;goto B6abe8e;
case 0x6abe90:goto L6abe90;
case 0x6abe93:c.instructions+=5;goto B6abe93;
case 0x6abe96:c.instructions+=4;goto B6abe96;
case 0x6abe99:c.instructions+=3;goto B6abe99;
case 0x6abe9c:c.instructions+=2;goto B6abe9c;
case 0x6abe9f:c.instructions+=1;goto B6abe9f;
case 0x6abea2:goto L6abea2;
case 0x6abea3:c.instructions+=2;goto B6abea3;
case 0x6abea6:c.instructions+=1;goto B6abea6;
case 0x6abea8:goto L6abea8;
case 0x6abea9:c.instructions+=3;goto B6abea9;
case 0x6abeac:c.instructions+=2;goto B6abeac;
case 0x6abeaf:c.instructions+=1;goto B6abeaf;
case 0x6abeb5:goto L6abeb5;
case 0x6abeb9:c.instructions+=1;goto B6abeb9;
case 0x6abebb:goto L6abebb;
case 0x6abebd:c.instructions+=1;goto B6abebd;
case 0x6abec2:goto L6abec2;
case 0x6abec4:c.instructions+=3;goto B6abec4;
case 0x6abec6:c.instructions+=2;goto B6abec6;
case 0x6abec9:c.instructions+=1;goto B6abec9;
case 0x6abecb:goto L6abecb;
case 0x6abece:c.instructions+=7;goto B6abece;
case 0x6abed1:c.instructions+=6;goto B6abed1;
case 0x6abed4:c.instructions+=5;goto B6abed4;
case 0x6abed7:c.instructions+=4;goto B6abed7;
case 0x6abeda:c.instructions+=3;goto B6abeda;
case 0x6abedd:c.instructions+=2;goto B6abedd;
case 0x6abee0:c.instructions+=1;goto B6abee0;
case 0x6abee2:goto L6abee2;
case 0x6abee5:c.instructions+=1;goto B6abee5;
case 0x6abee7:goto L6abee7;
case 0x6abeeb:c.instructions+=2;goto B6abeeb;
case 0x6abeee:c.instructions+=1;goto B6abeee;
case 0x6abef1:goto L6abef1;
case 0x6abef2:c.instructions+=2;goto B6abef2;
case 0x6abef5:c.instructions+=1;goto B6abef5;
case 0x6abef7:goto L6abef7;
case 0x6abefa:c.instructions+=2;goto B6abefa;
case 0x6abefd:c.instructions+=1;goto B6abefd;
case 0x6abf03:goto L6abf03;
case 0x6abf06:c.instructions+=5;goto B6abf06;
case 0x6abf09:c.instructions+=4;goto B6abf09;
case 0x6abf0c:c.instructions+=3;goto B6abf0c;
case 0x6abf12:c.instructions+=2;goto B6abf12;
case 0x6abf15:c.instructions+=1;goto B6abf15;
case 0x6abf1b:goto L6abf1b;
case 0x6abf1e:c.instructions+=20;goto B6abf1e;
case 0x6abf21:c.instructions+=19;goto B6abf21;
case 0x6abf22:c.instructions+=18;goto B6abf22;
case 0x6abf23:c.instructions+=17;goto B6abf23;
case 0x6abf24:c.instructions+=16;goto B6abf24;
case 0x6abf27:c.instructions+=15;goto B6abf27;
case 0x6abf28:c.instructions+=14;goto B6abf28;
case 0x6abf2a:c.instructions+=13;goto B6abf2a;
case 0x6abf2d:c.instructions+=12;goto B6abf2d;
case 0x6abf2e:c.instructions+=11;goto B6abf2e;
case 0x6abf2f:c.instructions+=10;goto B6abf2f;
case 0x6abf30:c.instructions+=9;goto B6abf30;
case 0x6abf31:c.instructions+=8;goto B6abf31;
case 0x6abf33:c.instructions+=7;goto B6abf33;
case 0x6abf36:c.instructions+=6;goto B6abf36;
case 0x6abf37:c.instructions+=5;goto B6abf37;
case 0x6abf38:c.instructions+=4;goto B6abf38;
case 0x6abf3b:c.instructions+=3;goto B6abf3b;
case 0x6abf3e:c.instructions+=2;goto B6abf3e;
case 0x6abf41:c.instructions+=1;goto B6abf41;
case 0x6abf46:goto L6abf46;
case 0x6abf48:c.instructions+=2;goto B6abf48;
case 0x6abf4b:c.instructions+=1;goto B6abf4b;
case 0x6abf51:goto L6abf51;
case 0x6abf54:c.instructions+=8;goto B6abf54;
case 0x6abf57:c.instructions+=7;goto B6abf57;
case 0x6abf5a:c.instructions+=6;goto B6abf5a;
case 0x6abf5d:c.instructions+=5;goto B6abf5d;
case 0x6abf5f:c.instructions+=4;goto B6abf5f;
case 0x6abf62:c.instructions+=3;goto B6abf62;
case 0x6abf65:c.instructions+=2;goto B6abf65;
case 0x6abf68:c.instructions+=1;goto B6abf68;
case 0x6abf6e:goto L6abf6e;
case 0x6abf72:c.instructions+=1;goto B6abf72;
case 0x6abf78:goto L6abf78;
case 0x6abf7b:c.instructions+=8;goto B6abf7b;
case 0x6abf7d:c.instructions+=7;goto B6abf7d;
case 0x6abf80:c.instructions+=6;goto B6abf80;
case 0x6abf83:c.instructions+=5;goto B6abf83;
case 0x6abf85:c.instructions+=4;goto B6abf85;
case 0x6abf87:c.instructions+=3;goto B6abf87;
case 0x6abf88:c.instructions+=2;goto B6abf88;
case 0x6abf8a:c.instructions+=1;goto B6abf8a;
case 0x6abf8c:goto L6abf8c;
case 0x6abf8f:c.instructions+=1;goto B6abf8f;
case 0x6abf91:goto L6abf91;
case 0x6abf94:c.instructions+=8;goto B6abf94;
case 0x6abf97:c.instructions+=7;goto B6abf97;
case 0x6abf9a:c.instructions+=6;goto B6abf9a;
case 0x6abf9d:c.instructions+=5;goto B6abf9d;
case 0x6abfa0:c.instructions+=4;goto B6abfa0;
case 0x6abfa2:c.instructions+=3;goto B6abfa2;
case 0x6abfa4:c.instructions+=2;goto B6abfa4;
case 0x6abfa7:c.instructions+=1;goto B6abfa7;
case 0x6abfa9:goto L6abfa9;
case 0x6abfac:goto L6abfac;
case 0x6abfaf:c.instructions+=3;goto B6abfaf;
case 0x6abfb0:c.instructions+=2;goto B6abfb0;
case 0x6abfb2:c.instructions+=1;goto B6abfb2;
case 0x6abfb4:goto L6abfb4;
case 0x6abfb8:c.instructions+=2;goto B6abfb8;
case 0x6abfba:c.instructions+=1;goto B6abfba;
case 0x6abfbc:goto L6abfbc;
case 0x6abfbf:c.instructions+=6;goto B6abfbf;
case 0x6abfc2:c.instructions+=5;goto B6abfc2;
case 0x6abfc5:c.instructions+=4;goto B6abfc5;
case 0x6abfc8:c.instructions+=3;goto B6abfc8;
case 0x6abfca:c.instructions+=2;goto B6abfca;
case 0x6abfcd:c.instructions+=1;goto B6abfcd;
case 0x6abfcf:goto L6abfcf;
case 0x6abfd3:c.instructions+=7;goto B6abfd3;
case 0x6abfd6:c.instructions+=6;goto B6abfd6;
case 0x6abfd9:c.instructions+=5;goto B6abfd9;
case 0x6abfdc:c.instructions+=4;goto B6abfdc;
case 0x6abfde:c.instructions+=3;goto B6abfde;
case 0x6abfe0:c.instructions+=2;goto B6abfe0;
case 0x6abfe3:c.instructions+=1;goto B6abfe3;
case 0x6abfe5:goto L6abfe5;
case 0x6abfe6:c.instructions+=2;goto B6abfe6;
case 0x6abfe9:c.instructions+=1;goto B6abfe9;
case 0x6abfeb:goto L6abfeb;
case 0x6abfee:c.instructions+=1;goto B6abfee;
case 0x6abff0:goto L6abff0;
case 0x6abff3:c.instructions+=1;goto B6abff3;
case 0x6abff5:goto L6abff5;
case 0x6abff8:c.instructions+=2;goto B6abff8;
case 0x6abffb:c.instructions+=1;goto B6abffb;
case 0x6abfff:goto L6abfff;
default:missing_instruction(c.pc);}
B6ab004:L6ab004:{c.instructions+=2;NFSU2_TR(0x6ab004);
__builtin_memmove((R+4),(R+12),4);
}
B6ab006:{NFSU2_TR(0x6ab006);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ab00bull));
TAIL_STATIC(0x69e219u,69e);
}
B6ab00b:L6ab00b:{c.instructions+=3;NFSU2_TR(0x6ab00b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6ab00f:{NFSU2_TR(0x6ab00f);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ab013:{NFSU2_TR(0x6ab013);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6ab390;}}
}
B6ab019:L6ab019:{c.instructions+=6;NFSU2_TR(0x6ab019);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6ab01c:{NFSU2_TR(0x6ab01c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ab01f:{NFSU2_TR(0x6ab01f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6ab022:{NFSU2_TR(0x6ab022);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x20400001ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6ab028:{NFSU2_TR(0x6ab028);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ab02b:{NFSU2_TR(0x6ab02b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ab381;}}
}
B6ab031:L6ab031:{c.instructions+=12;NFSU2_TR(0x6ab031);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ab034:{NFSU2_TR(0x6ab034);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6ab036:{NFSU2_TR(0x6ab036);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ab039:{NFSU2_TR(0x6ab039);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ab03c:{NFSU2_TR(0x6ab03c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6ab03f:{NFSU2_TR(0x6ab03f);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6ab042:{NFSU2_TR(0x6ab042);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6ab045:{NFSU2_TR(0x6ab045);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ab048:{NFSU2_TR(0x6ab048);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ab04b:{NFSU2_TR(0x6ab04b);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B6ab04e:{NFSU2_TR(0x6ab04e);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6ab052:{NFSU2_TR(0x6ab052);
if(r1(R+518)){{goto L6ab381;}}
}
B6ab058:L6ab058:{c.instructions+=5;NFSU2_TR(0x6ab058);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6ab05b:{NFSU2_TR(0x6ab05b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6ab05e:{NFSU2_TR(0x6ab05e);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6ab061:{NFSU2_TR(0x6ab061);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6ab065:{NFSU2_TR(0x6ab065);
if(r1(R+518)){{goto L6ab381;}}
}
B6ab06b:L6ab06b:{c.instructions+=10;NFSU2_TR(0x6ab06b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ab06e:{NFSU2_TR(0x6ab06e);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B6ab071:{NFSU2_TR(0x6ab071);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ab074:{NFSU2_TR(0x6ab074);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ab077:{NFSU2_TR(0x6ab077);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6ab07a:{NFSU2_TR(0x6ab07a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6ab07c:{NFSU2_TR(0x6ab07c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x20500001ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ab081:{NFSU2_TR(0x6ab081);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ab084:{NFSU2_TR(0x6ab084);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ab087:{NFSU2_TR(0x6ab087);
if(r1(R+518)){{goto L6ab099;}}
}
B6ab089:L6ab089:{c.instructions+=3;NFSU2_TR(0x6ab089);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfff00000ull))));
}
B6ab08e:{NFSU2_TR(0x6ab08e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x50000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ab093:{NFSU2_TR(0x6ab093);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ab381;}}
}
B6ab099:L6ab099:{c.instructions+=3;NFSU2_TR(0x6ab099);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6ab09b:{NFSU2_TR(0x6ab09b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x20500001ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ab0a0:{NFSU2_TR(0x6ab0a0);
if(r1(R+518)){{goto L6ab0b2;}}
}
B6ab0a2:L6ab0a2:{c.instructions+=3;NFSU2_TR(0x6ab0a2);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfff00000ull))));
}
B6ab0a7:{NFSU2_TR(0x6ab0a7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x50000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ab0ac:{NFSU2_TR(0x6ab0ac);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ab381;}}
}
B6ab0b2:L6ab0b2:{c.instructions+=14;NFSU2_TR(0x6ab0b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ab0b5:{NFSU2_TR(0x6ab0b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ab0b8:{NFSU2_TR(0x6ab0b8);
w4(R+4,shr<u32>(r4(R+4),u64(u32(0x1ull))));
}
B6ab0ba:{NFSU2_TR(0x6ab0ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ab0bd:{NFSU2_TR(0x6ab0bd);
w4(R+0,shr<u32>(r4(R+0),u64(u32(0x1ull))));
}
B6ab0bf:{NFSU2_TR(0x6ab0bf);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B6ab0c1:{NFSU2_TR(0x6ab0c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ab0c4:{NFSU2_TR(0x6ab0c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ab0c7:{NFSU2_TR(0x6ab0c7);
w4(R+4,u32(~u32(r4(R+4))));
}
B6ab0c9:{NFSU2_TR(0x6ab0c9);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x20ull))));
}
B6ab0cc:{NFSU2_TR(0x6ab0cc);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x40ull))));
}
B6ab0cf:{NFSU2_TR(0x6ab0cf);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6ab0d2:{NFSU2_TR(0x6ab0d2);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+4))));
}
B6ab0d5:{NFSU2_TR(0x6ab0d5);
if(r1(R+512)){{goto L6ab381;}}
}
B6ab0db:L6ab0db:{c.instructions+=2;NFSU2_TR(0x6ab0db);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x4ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ab0df:{NFSU2_TR(0x6ab0df);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6ab381;}}
}
B6ab0e5:L6ab0e5:{c.instructions+=6;NFSU2_TR(0x6ab0e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ab0e8:{NFSU2_TR(0x6ab0e8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6ab0ea:{NFSU2_TR(0x6ab0ea);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6ab0ed:{NFSU2_TR(0x6ab0ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6ab0f0:{NFSU2_TR(0x6ab0f0);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ab0f3:{NFSU2_TR(0x6ab0f3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ab381;}}
}
B6ab0f9:L6ab0f9:{c.instructions+=2;NFSU2_TR(0x6ab0f9);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+24))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ab0fc:{NFSU2_TR(0x6ab0fc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ab381;}}
}
B6ab102:L6ab102:{c.instructions+=6;NFSU2_TR(0x6ab102);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ab105:{NFSU2_TR(0x6ab105);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6ab107:{NFSU2_TR(0x6ab107);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6ab10a:{NFSU2_TR(0x6ab10a);
__builtin_memmove((R+4),(R+24),4);
}
B6ab10c:{NFSU2_TR(0x6ab10c);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ab10f:{NFSU2_TR(0x6ab10f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ab381;}}
}
B6ab115:L6ab115:{c.instructions+=2;NFSU2_TR(0x6ab115);
u8 U[16];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ab118:{NFSU2_TR(0x6ab118);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ab381;}}
}
B6ab11e:L6ab11e:{c.instructions+=8;NFSU2_TR(0x6ab11e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ab121:{NFSU2_TR(0x6ab121);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6ab124:{NFSU2_TR(0x6ab124);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6ab127:{NFSU2_TR(0x6ab127);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ab12a:{NFSU2_TR(0x6ab12a);
__builtin_memmove((R+4),(R+0),4);
}
B6ab12c:{NFSU2_TR(0x6ab12c);
__builtin_memmove((R+8),(R+4),4);
}
B6ab12e:{NFSU2_TR(0x6ab12e);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6ab131:{NFSU2_TR(0x6ab131);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff8cull))));
__builtin_memmove((R+28),(U+0),4);
}
B6ab134:L6ab134:{c.instructions+=1;NFSU2_TR(0x6ab134);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6ab136;}}
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
__builtin_memmove((U+16),gp(u32(r4(U+0))),4);
__builtin_memmove((U+36),(U+16),4);
s4(u32(r4(U+20)),r4(U+36));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ab134u);}goto L6ab134;}
}
B6ab136:L6ab136:{c.instructions+=3;NFSU2_TR(0x6ab136);
__builtin_memmove((R+4),(R+8),4);
}
B6ab138:{NFSU2_TR(0x6ab138);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ab13b:{NFSU2_TR(0x6ab13b);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6ab13e:L6ab13e:{c.instructions+=1;NFSU2_TR(0x6ab13e);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6ab140;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+17),(R+28),4);
w4(U+21,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+25,u32(r1(R+522)));
w4(U+29,u32(u32(u32(0x2ull))*u32(r4(U+25))));
w4(R+28,u32(u32(r4(U+21))-u32(r4(U+29))));
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+24))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),gp(u32(r4(U+0))),1);
__builtin_memmove((U+33),(U+16),1);
s1(u32(r4(U+17)),r1(U+33));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ab13eu);}goto L6ab13e;}
}
B6ab140:L6ab140:{c.instructions+=8;NFSU2_TR(0x6ab140);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6ab143:{NFSU2_TR(0x6ab143);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ab146:{NFSU2_TR(0x6ab146);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6ab149:{NFSU2_TR(0x6ab149);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ab14c:{NFSU2_TR(0x6ab14c);
__builtin_memmove((R+8),(R+4),4);
}
B6ab14e:{NFSU2_TR(0x6ab14e);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6ab151:{NFSU2_TR(0x6ab151);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ab154:{NFSU2_TR(0x6ab154);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffff8cull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B6ab158:L6ab158:{c.instructions+=1;NFSU2_TR(0x6ab158);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6ab15a;}}
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
__builtin_memmove((U+16),gp(u32(r4(U+0))),4);
__builtin_memmove((U+36),(U+16),4);
s4(u32(r4(U+20)),r4(U+36));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ab158u);}goto L6ab158;}
}
B6ab15a:L6ab15a:{c.instructions+=3;NFSU2_TR(0x6ab15a);
__builtin_memmove((R+4),(R+8),4);
}
B6ab15c:{NFSU2_TR(0x6ab15c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ab15f:{NFSU2_TR(0x6ab15f);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6ab162:L6ab162:{c.instructions+=1;NFSU2_TR(0x6ab162);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6ab164;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+17),(R+28),4);
w4(U+21,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+25,u32(r1(R+522)));
w4(U+29,u32(u32(u32(0x2ull))*u32(r4(U+25))));
w4(R+28,u32(u32(r4(U+21))-u32(r4(U+29))));
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+24))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),gp(u32(r4(U+0))),1);
__builtin_memmove((U+33),(U+16),1);
s1(u32(r4(U+17)),r1(U+33));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ab162u);}goto L6ab162;}
}
B6ab164:L6ab164:{c.instructions+=5;NFSU2_TR(0x6ab164);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B6ab167:{NFSU2_TR(0x6ab167);
__builtin_memmove((R+4),(R+0),4);
}
B6ab169:{NFSU2_TR(0x6ab169);
__builtin_memmove((R+8),(R+4),4);
}
B6ab16b:{NFSU2_TR(0x6ab16b);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6ab16e:{NFSU2_TR(0x6ab16e);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff68ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6ab174:L6ab174:{c.instructions+=1;NFSU2_TR(0x6ab174);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6ab176;}}
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
__builtin_memmove((U+16),gp(u32(r4(U+0))),4);
__builtin_memmove((U+36),(U+16),4);
s4(u32(r4(U+20)),r4(U+36));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ab174u);}goto L6ab174;}
}
B6ab176:L6ab176:{c.instructions+=3;NFSU2_TR(0x6ab176);
__builtin_memmove((R+4),(R+8),4);
}
B6ab178:{NFSU2_TR(0x6ab178);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ab17b:{NFSU2_TR(0x6ab17b);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6ab17e:L6ab17e:{c.instructions+=1;NFSU2_TR(0x6ab17e);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6ab180;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+17),(R+28),4);
w4(U+21,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+25,u32(r1(R+522)));
w4(U+29,u32(u32(u32(0x2ull))*u32(r4(U+25))));
w4(R+28,u32(u32(r4(U+21))-u32(r4(U+29))));
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+24))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),gp(u32(r4(U+0))),1);
__builtin_memmove((U+33),(U+16),1);
s1(u32(r4(U+17)),r1(U+33));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ab17eu);}goto L6ab17e;}
}
B6ab180:L6ab180:{c.instructions+=6;NFSU2_TR(0x6ab180);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ab183:{NFSU2_TR(0x6ab183);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B6ab186:{NFSU2_TR(0x6ab186);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffff68ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B6ab18d:{NFSU2_TR(0x6ab18d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ab190:{NFSU2_TR(0x6ab190);
__builtin_memmove((R+0),(R+4),4);
}
B6ab192:{NFSU2_TR(0x6ab192);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6ab195:L6ab195:{c.instructions+=1;NFSU2_TR(0x6ab195);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6ab197;}}
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
__builtin_memmove((U+16),gp(u32(r4(U+0))),4);
__builtin_memmove((U+36),(U+16),4);
s4(u32(r4(U+20)),r4(U+36));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ab195u);}goto L6ab195;}
}
B6ab197:L6ab197:{c.instructions+=10;NFSU2_TR(0x6ab197);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ab199:{NFSU2_TR(0x6ab199);
__builtin_memmove((R+4),(R+0),4);
}
B6ab19b:{NFSU2_TR(0x6ab19b);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6ab19d:{NFSU2_TR(0x6ab19d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ab19e:{NFSU2_TR(0x6ab19e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6ab1a1:{NFSU2_TR(0x6ab1a1);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6ab1a4:{NFSU2_TR(0x6ab1a4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ab1a5:{NFSU2_TR(0x6ab1a5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ab1a6:{NFSU2_TR(0x6ab1a6);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6ab1a9:{NFSU2_TR(0x6ab1a9);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff8cull))));
__builtin_memmove((R+0),(U+0),4);
}
B6ab1ac:L6ab1ac:{c.instructions+=1;NFSU2_TR(0x6ab1ac);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6ab1ae;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+17),(R+28),4);
w4(U+21,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+25,u32(r1(R+522)));
w4(U+29,u32(u32(u32(0x2ull))*u32(r4(U+25))));
w4(R+28,u32(u32(r4(U+21))-u32(r4(U+29))));
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+24))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),gp(u32(r4(U+0))),1);
__builtin_memmove((U+33),(U+16),1);
s1(u32(r4(U+17)),r1(U+33));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ab1acu);}goto L6ab1ac;}
}
B6ab1ae:L6ab1ae:{c.instructions+=3;NFSU2_TR(0x6ab1ae);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ab1af:{NFSU2_TR(0x6ab1af);
__builtin_memmove((R+4),(R+12),4);
}
B6ab1b1:{NFSU2_TR(0x6ab1b1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ab1b6ull));
TAIL_STATIC(0x6a4e92u,6a4);
}
B6ab1b6:L6ab1b6:{c.instructions+=2;NFSU2_TR(0x6ab1b6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ab1b8:{NFSU2_TR(0x6ab1b8);
if(r1(R+518)){{goto L6ab1e1;}}
}
B6ab1ba:L6ab1ba:{c.instructions+=11;NFSU2_TR(0x6ab1ba);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ab1bc:{NFSU2_TR(0x6ab1bc);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6ab1be:{NFSU2_TR(0x6ab1be);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ab1bf:{NFSU2_TR(0x6ab1bf);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6ab1c2:{NFSU2_TR(0x6ab1c2);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff68ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6ab1c8:{NFSU2_TR(0x6ab1c8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ab1c9:{NFSU2_TR(0x6ab1c9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ab1ca:{NFSU2_TR(0x6ab1ca);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6ab1cd:{NFSU2_TR(0x6ab1cd);
__builtin_memmove((R+4),(R+12),4);
}
B6ab1cf:{NFSU2_TR(0x6ab1cf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ab1d0:{NFSU2_TR(0x6ab1d0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ab1d5ull));
TAIL_STATIC(0x6a4e92u,6a4);
}
B6ab1d5:L6ab1d5:{c.instructions+=2;NFSU2_TR(0x6ab1d5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ab1d7:{NFSU2_TR(0x6ab1d7);
if(r1(R+518)){{goto L6ab1e1;}}
}
B6ab1d9:L6ab1d9:{c.instructions+=2;NFSU2_TR(0x6ab1d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ab1dc:{NFSU2_TR(0x6ab1dc);
{goto L6ab2a4;}
}
B6ab1e1:L6ab1e1:{c.instructions+=7;NFSU2_TR(0x6ab1e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ab1e4:{NFSU2_TR(0x6ab1e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ab1e7:{NFSU2_TR(0x6ab1e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ab1ea:{NFSU2_TR(0x6ab1ea);
__builtin_memmove((R+8),(R+4),4);
}
B6ab1ec:{NFSU2_TR(0x6ab1ec);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6ab1ef:{NFSU2_TR(0x6ab1ef);
__builtin_memmove((R+24),(R+0),4);
}
B6ab1f1:{NFSU2_TR(0x6ab1f1);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6ab1f4:L6ab1f4:{c.instructions+=1;NFSU2_TR(0x6ab1f4);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6ab1f6;}}
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
__builtin_memmove((U+16),gp(u32(r4(U+0))),4);
__builtin_memmove((U+36),(U+16),4);
s4(u32(r4(U+20)),r4(U+36));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ab1f4u);}goto L6ab1f4;}
}
B6ab1f6:L6ab1f6:{c.instructions+=2;NFSU2_TR(0x6ab1f6);
__builtin_memmove((R+4),(R+8),4);
}
B6ab1f8:{NFSU2_TR(0x6ab1f8);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6ab1fb:L6ab1fb:{c.instructions+=1;NFSU2_TR(0x6ab1fb);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6ab1fd;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+17),(R+28),4);
w4(U+21,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+25,u32(r1(R+522)));
w4(U+29,u32(u32(u32(0x2ull))*u32(r4(U+25))));
w4(R+28,u32(u32(r4(U+21))-u32(r4(U+29))));
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+24))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),gp(u32(r4(U+0))),1);
__builtin_memmove((U+33),(U+16),1);
s1(u32(r4(U+17)),r1(U+33));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ab1fbu);}goto L6ab1fb;}
}
B6ab1fd:L6ab1fd:{c.instructions+=9;NFSU2_TR(0x6ab1fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ab200:{NFSU2_TR(0x6ab200);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ab203:{NFSU2_TR(0x6ab203);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ab206:{NFSU2_TR(0x6ab206);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6ab209:{NFSU2_TR(0x6ab209);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B6ab20c:{NFSU2_TR(0x6ab20c);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffffb4ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B6ab210:{NFSU2_TR(0x6ab210);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ab213:{NFSU2_TR(0x6ab213);
__builtin_memmove((R+8),(R+4),4);
}
B6ab215:{NFSU2_TR(0x6ab215);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6ab218:L6ab218:{c.instructions+=1;NFSU2_TR(0x6ab218);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6ab21a;}}
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
__builtin_memmove((U+16),gp(u32(r4(U+0))),4);
__builtin_memmove((U+36),(U+16),4);
s4(u32(r4(U+20)),r4(U+36));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ab218u);}goto L6ab218;}
}
B6ab21a:L6ab21a:{c.instructions+=3;NFSU2_TR(0x6ab21a);
__builtin_memmove((R+4),(R+8),4);
}
B6ab21c:{NFSU2_TR(0x6ab21c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ab21f:{NFSU2_TR(0x6ab21f);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6ab222:L6ab222:{c.instructions+=1;NFSU2_TR(0x6ab222);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6ab224;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+17),(R+28),4);
w4(U+21,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+25,u32(r1(R+522)));
w4(U+29,u32(u32(u32(0x2ull))*u32(r4(U+25))));
w4(R+28,u32(u32(r4(U+21))-u32(r4(U+29))));
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+24))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),gp(u32(r4(U+0))),1);
__builtin_memmove((U+33),(U+16),1);
s1(u32(r4(U+17)),r1(U+33));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ab222u);}goto L6ab222;}
}
B6ab224:L6ab224:{c.instructions+=5;NFSU2_TR(0x6ab224);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B6ab227:{NFSU2_TR(0x6ab227);
__builtin_memmove((R+4),(R+8),4);
}
B6ab229:{NFSU2_TR(0x6ab229);
__builtin_memmove((R+0),(R+4),4);
}
B6ab22b:{NFSU2_TR(0x6ab22b);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6ab22e:{NFSU2_TR(0x6ab22e);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff78ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6ab234:L6ab234:{c.instructions+=1;NFSU2_TR(0x6ab234);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6ab236;}}
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
__builtin_memmove((U+16),gp(u32(r4(U+0))),4);
__builtin_memmove((U+36),(U+16),4);
s4(u32(r4(U+20)),r4(U+36));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ab234u);}goto L6ab234;}
}
B6ab236:L6ab236:{c.instructions+=2;NFSU2_TR(0x6ab236);
__builtin_memmove((R+4),(R+0),4);
}
B6ab238:{NFSU2_TR(0x6ab238);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6ab23b:L6ab23b:{c.instructions+=1;NFSU2_TR(0x6ab23b);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6ab23d;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+17),(R+28),4);
w4(U+21,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+25,u32(r1(R+522)));
w4(U+29,u32(u32(u32(0x2ull))*u32(r4(U+25))));
w4(R+28,u32(u32(r4(U+21))-u32(r4(U+29))));
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+24))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),gp(u32(r4(U+0))),1);
__builtin_memmove((U+33),(U+16),1);
s1(u32(r4(U+17)),r1(U+33));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ab23bu);}goto L6ab23b;}
}
B6ab23d:L6ab23d:{c.instructions+=6;NFSU2_TR(0x6ab23d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ab240:{NFSU2_TR(0x6ab240);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6ab243:{NFSU2_TR(0x6ab243);
__builtin_memmove((R+0),(R+4),4);
}
B6ab245:{NFSU2_TR(0x6ab245);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6ab248:{NFSU2_TR(0x6ab248);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ab24a:{NFSU2_TR(0x6ab24a);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffff78ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B6ab251:L6ab251:{c.instructions+=1;NFSU2_TR(0x6ab251);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6ab253;}}
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
__builtin_memmove((U+16),gp(u32(r4(U+0))),4);
__builtin_memmove((U+36),(U+16),4);
s4(u32(r4(U+20)),r4(U+36));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ab251u);}goto L6ab251;}
}
B6ab253:L6ab253:{c.instructions+=9;NFSU2_TR(0x6ab253);
__builtin_memmove((R+4),(R+0),4);
}
B6ab255:{NFSU2_TR(0x6ab255);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6ab257:{NFSU2_TR(0x6ab257);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ab258:{NFSU2_TR(0x6ab258);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6ab25b:{NFSU2_TR(0x6ab25b);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6ab25e:{NFSU2_TR(0x6ab25e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ab25f:{NFSU2_TR(0x6ab25f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ab260:{NFSU2_TR(0x6ab260);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6ab263:{NFSU2_TR(0x6ab263);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6ab266:L6ab266:{c.instructions+=1;NFSU2_TR(0x6ab266);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6ab268;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+17),(R+28),4);
w4(U+21,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+25,u32(r1(R+522)));
w4(U+29,u32(u32(u32(0x2ull))*u32(r4(U+25))));
w4(R+28,u32(u32(r4(U+21))-u32(r4(U+29))));
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+24))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),gp(u32(r4(U+0))),1);
__builtin_memmove((U+33),(U+16),1);
s1(u32(r4(U+17)),r1(U+33));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ab266u);}goto L6ab266;}
}
B6ab268:L6ab268:{c.instructions+=3;NFSU2_TR(0x6ab268);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ab269:{NFSU2_TR(0x6ab269);
__builtin_memmove((R+4),(R+12),4);
}
B6ab26b:{NFSU2_TR(0x6ab26b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ab270ull));
TAIL_STATIC(0x6a4e92u,6a4);
}
B6ab270:L6ab270:{c.instructions+=2;NFSU2_TR(0x6ab270);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ab272:{NFSU2_TR(0x6ab272);
if(r1(R+518)){{goto L6ab381;}}
}
B6ab278:L6ab278:{c.instructions+=11;NFSU2_TR(0x6ab278);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ab27a:{NFSU2_TR(0x6ab27a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6ab27c:{NFSU2_TR(0x6ab27c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ab27d:{NFSU2_TR(0x6ab27d);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6ab280:{NFSU2_TR(0x6ab280);
__builtin_memmove((R+4),(R+12),4);
}
B6ab282:{NFSU2_TR(0x6ab282);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ab283:{NFSU2_TR(0x6ab283);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ab284:{NFSU2_TR(0x6ab284);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6ab287:{NFSU2_TR(0x6ab287);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff78ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6ab28d:{NFSU2_TR(0x6ab28d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ab28e:{NFSU2_TR(0x6ab28e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ab293ull));
TAIL_STATIC(0x6a4e92u,6a4);
}
B6ab293:L6ab293:{c.instructions+=2;NFSU2_TR(0x6ab293);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ab295:{NFSU2_TR(0x6ab295);
if(r1(R+518)){{goto L6ab381;}}
}
B6ab29b:L6ab29b:{c.instructions+=2;NFSU2_TR(0x6ab29b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6ab2a2:{NFSU2_TR(0x6ab2a2);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6ab2a4:L6ab2a4:{c.instructions+=2;NFSU2_TR(0x6ab2a4);
u8 U[4];
w4(U+0,u32(0x74ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ab2a6:{NFSU2_TR(0x6ab2a6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ab2abull));
TAIL_STATIC(0x699317u,699);
}
B6ab2ab:L6ab2ab:{c.instructions+=2;NFSU2_TR(0x6ab2ab);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6ab2ad:{NFSU2_TR(0x6ab2ad);
if(r1(R+518)){{goto L6ab2bb;}}
}
B6ab2af:L6ab2af:{c.instructions+=2;NFSU2_TR(0x6ab2af);
__builtin_memmove((R+4),(R+0),4);
}
B6ab2b1:{NFSU2_TR(0x6ab2b1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ab2b6ull));
TAIL_STATIC(0x698e7du,698);
}
B6ab2b6:L6ab2b6:{c.instructions+=2;NFSU2_TR(0x6ab2b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ab2b9:{NFSU2_TR(0x6ab2b9);
{goto L6ab2be;}
}
B6ab2bb:L6ab2bb:{c.instructions+=1;NFSU2_TR(0x6ab2bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ab2be:L6ab2be:{c.instructions+=2;NFSU2_TR(0x6ab2be);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ab2c1:{NFSU2_TR(0x6ab2c1);
if(r1(R+518)){{goto L6abcfb;}}
}
B6ab2c7:L6ab2c7:{c.instructions+=11;NFSU2_TR(0x6ab2c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ab2ca:{NFSU2_TR(0x6ab2ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6ab2cd:{NFSU2_TR(0x6ab2cd);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ab2cf:{NFSU2_TR(0x6ab2cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6ab2d2:{NFSU2_TR(0x6ab2d2);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ab2d4:{NFSU2_TR(0x6ab2d4);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffull))));
}
B6ab2d9:{NFSU2_TR(0x6ab2d9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ab2da:{NFSU2_TR(0x6ab2da);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x50000000ull))));
}
B6ab2df:{NFSU2_TR(0x6ab2df);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ab2e0:{NFSU2_TR(0x6ab2e0);
__builtin_memmove((R+4),(R+28),4);
}
B6ab2e2:{NFSU2_TR(0x6ab2e2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ab2e7ull));
TAIL_STATIC(0x699362u,699);
}
B6ab2e7:L6ab2e7:{c.instructions+=3;NFSU2_TR(0x6ab2e7);
__builtin_memmove((R+24),(R+0),4);
}
B6ab2e9:{NFSU2_TR(0x6ab2e9);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6ab2eb:{NFSU2_TR(0x6ab2eb);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6ab443;}}
}
B6ab2f1:L6ab2f1:{c.instructions+=3;NFSU2_TR(0x6ab2f1);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6ab2f4:{NFSU2_TR(0x6ab2f4);
__builtin_memmove((R+4),(R+28),4);
}
B6ab2f6:{NFSU2_TR(0x6ab2f6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ab2fbull));
TAIL_STATIC(0x698eb3u,698);
}
B6ab2fb:L6ab2fb:{c.instructions+=3;NFSU2_TR(0x6ab2fb);
__builtin_memmove((R+24),(R+0),4);
}
B6ab2fd:{NFSU2_TR(0x6ab2fd);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6ab2ff:{NFSU2_TR(0x6ab2ff);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6ab443;}}
}
B6ab305:L6ab305:{c.instructions+=8;NFSU2_TR(0x6ab305);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ab309:{NFSU2_TR(0x6ab309);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ab30c:{NFSU2_TR(0x6ab30c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ab30f:{NFSU2_TR(0x6ab30f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ab312:{NFSU2_TR(0x6ab312);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6ab314:{NFSU2_TR(0x6ab314);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6ab316:{NFSU2_TR(0x6ab316);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff8cull))));
__builtin_memmove((R+24),(U+0),4);
}
B6ab319:{NFSU2_TR(0x6ab319);
if(r1(R+518)){{goto L6ab31e;}}
}
B6ab31b:L6ab31b:{c.instructions+=1;NFSU2_TR(0x6ab31b);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6ab31e:L6ab31e:{c.instructions+=7;NFSU2_TR(0x6ab31e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ab321:{NFSU2_TR(0x6ab321);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ab324:{NFSU2_TR(0x6ab324);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6ab327:{NFSU2_TR(0x6ab327);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6ab32a:{NFSU2_TR(0x6ab32a);
__builtin_memmove((R+4),(R+0),4);
}
B6ab32c:{NFSU2_TR(0x6ab32c);
__builtin_memmove((R+8),(R+4),4);
}
B6ab32e:{NFSU2_TR(0x6ab32e);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6ab331:L6ab331:{c.instructions+=1;NFSU2_TR(0x6ab331);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6ab333;}}
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
__builtin_memmove((U+16),gp(u32(r4(U+0))),4);
__builtin_memmove((U+36),(U+16),4);
s4(u32(r4(U+20)),r4(U+36));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ab331u);}goto L6ab331;}
}
B6ab333:L6ab333:{c.instructions+=3;NFSU2_TR(0x6ab333);
__builtin_memmove((R+4),(R+8),4);
}
B6ab335:{NFSU2_TR(0x6ab335);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6ab338:{NFSU2_TR(0x6ab338);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ab33c:L6ab33c:{c.instructions+=1;NFSU2_TR(0x6ab33c);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6ab33e;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+17),(R+28),4);
w4(U+21,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+25,u32(r1(R+522)));
w4(U+29,u32(u32(u32(0x2ull))*u32(r4(U+25))));
w4(R+28,u32(u32(r4(U+21))-u32(r4(U+29))));
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+24))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),gp(u32(r4(U+0))),1);
__builtin_memmove((U+33),(U+16),1);
s1(u32(r4(U+17)),r1(U+33));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ab33cu);}goto L6ab33c;}
}
B6ab33e:L6ab33e:{c.instructions+=2;NFSU2_TR(0x6ab33e);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff68ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6ab344:{NFSU2_TR(0x6ab344);
if(r1(R+518)){{goto L6ab34c;}}
}
B6ab346:L6ab346:{c.instructions+=1;NFSU2_TR(0x6ab346);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff78ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6ab34c:L6ab34c:{c.instructions+=5;NFSU2_TR(0x6ab34c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ab34f:{NFSU2_TR(0x6ab34f);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6ab352:{NFSU2_TR(0x6ab352);
__builtin_memmove((R+4),(R+0),4);
}
B6ab354:{NFSU2_TR(0x6ab354);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6ab357:{NFSU2_TR(0x6ab357);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+0))));
}
B6ab359:L6ab359:{c.instructions+=1;NFSU2_TR(0x6ab359);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6ab35b;}}
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
__builtin_memmove((U+16),gp(u32(r4(U+0))),4);
__builtin_memmove((U+36),(U+16),4);
s4(u32(r4(U+20)),r4(U+36));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ab359u);}goto L6ab359;}
}
B6ab35b:L6ab35b:{c.instructions+=2;NFSU2_TR(0x6ab35b);
__builtin_memmove((R+4),(R+0),4);
}
B6ab35d:{NFSU2_TR(0x6ab35d);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6ab360:L6ab360:{c.instructions+=1;NFSU2_TR(0x6ab360);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6ab362;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+17),(R+28),4);
w4(U+21,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+25,u32(r1(R+522)));
w4(U+29,u32(u32(u32(0x2ull))*u32(r4(U+25))));
w4(R+28,u32(u32(r4(U+21))-u32(r4(U+29))));
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+24))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),gp(u32(r4(U+0))),1);
__builtin_memmove((U+33),(U+16),1);
s1(u32(r4(U+17)),r1(U+33));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ab360u);}goto L6ab360;}
}
B6ab362:L6ab362:{c.instructions+=6;NFSU2_TR(0x6ab362);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ab365:{NFSU2_TR(0x6ab365);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ab368:{NFSU2_TR(0x6ab368);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6ab36b:{NFSU2_TR(0x6ab36b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ab36e:{NFSU2_TR(0x6ab36e);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ab370:{NFSU2_TR(0x6ab370);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ab375ull));
TAIL_STATIC(0x6739efu,673);
}
B6ab375:L6ab375:{c.instructions+=4;NFSU2_TR(0x6ab375);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ab378:{NFSU2_TR(0x6ab378);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0x0ull))));
s4(u32(r4(R+0)),r4(U+0));
}
B6ab37b:{NFSU2_TR(0x6ab37b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ab37e:{NFSU2_TR(0x6ab37e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0x0ull))));
s4(u32(r4(R+0)),r4(U+0));
}
B6ab381:L6ab381:{c.instructions+=4;NFSU2_TR(0x6ab381);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6ab384:{NFSU2_TR(0x6ab384);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ab387:{NFSU2_TR(0x6ab387);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6ab38a:{NFSU2_TR(0x6ab38a);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ab019u);}goto L6ab019;}}
}
B6ab390:L6ab390:{c.instructions+=2;NFSU2_TR(0x6ab390);
__builtin_memmove((R+4),(R+12),4);
}
B6ab392:{NFSU2_TR(0x6ab392);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ab397ull));
TAIL_STATIC(0x69e219u,69e);
}
B6ab397:L6ab397:{c.instructions+=3;NFSU2_TR(0x6ab397);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6ab39b:{NFSU2_TR(0x6ab39b);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ab39f:{NFSU2_TR(0x6ab39f);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6abce1;}}
}
B6ab3a5:L6ab3a5:{c.instructions+=9;NFSU2_TR(0x6ab3a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ab3a8:{NFSU2_TR(0x6ab3a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ab3ab:{NFSU2_TR(0x6ab3ab);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6ab3ae:{NFSU2_TR(0x6ab3ae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6ab3b0:{NFSU2_TR(0x6ab3b0);
__builtin_memmove((R+4),(R+0),4);
}
B6ab3b2:{NFSU2_TR(0x6ab3b2);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xf0000000ull))));
}
B6ab3b8:{NFSU2_TR(0x6ab3b8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x10000000ull))));
}
B6ab3be:{NFSU2_TR(0x6ab3be);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ab3c1:{NFSU2_TR(0x6ab3c1);
if(r1(R+512)){{goto L6abcd2;}}
}
B6ab3c7:L6ab3c7:{c.instructions+=2;NFSU2_TR(0x6ab3c7);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x40000000ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x40000000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6ab3cd:{NFSU2_TR(0x6ab3cd);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6abcd2;}}
}
B6ab3d3:L6ab3d3:{c.instructions+=3;NFSU2_TR(0x6ab3d3);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfff00000ull))));
}
B6ab3d8:{NFSU2_TR(0x6ab3d8);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x10000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ab3dd:{NFSU2_TR(0x6ab3dd);
if(r1(R+518)){{goto L6ab3e9;}}
}
B6ab3df:L6ab3df:{c.instructions+=2;NFSU2_TR(0x6ab3df);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x6ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6ab3e3:{NFSU2_TR(0x6ab3e3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6abcd2;}}
}
B6ab3e9:L6ab3e9:{c.instructions+=2;NFSU2_TR(0x6ab3e9);
__builtin_memmove((R+4),(R+28),4);
}
B6ab3eb:{NFSU2_TR(0x6ab3eb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ab3f0ull));
TAIL_STATIC(0x699107u,699);
}
B6ab3f0:L6ab3f0:{c.instructions+=2;NFSU2_TR(0x6ab3f0);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ab3f2:{NFSU2_TR(0x6ab3f2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6abcd2;}}
}
B6ab3f8:L6ab3f8:{c.instructions+=12;NFSU2_TR(0x6ab3f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ab3fb:{NFSU2_TR(0x6ab3fb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6ab3fd:{NFSU2_TR(0x6ab3fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ab400:{NFSU2_TR(0x6ab400);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6ab403:{NFSU2_TR(0x6ab403);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ab406:{NFSU2_TR(0x6ab406);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ab409:{NFSU2_TR(0x6ab409);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ab40c:{NFSU2_TR(0x6ab40c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6ab40f:{NFSU2_TR(0x6ab40f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ab412:{NFSU2_TR(0x6ab412);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ab414:{NFSU2_TR(0x6ab414);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ab417:{NFSU2_TR(0x6ab417);
if(r1(R+518)){{goto L6abcd2;}}
}
B6ab41d:L6ab41d:{c.instructions+=6;NFSU2_TR(0x6ab41d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ab420:{NFSU2_TR(0x6ab420);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6ab424:{NFSU2_TR(0x6ab424);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ab428:{NFSU2_TR(0x6ab428);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ab42b:{NFSU2_TR(0x6ab42b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ab42e:{NFSU2_TR(0x6ab42e);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6ab480;}}
}
B6ab430:L6ab430:{c.instructions+=4;NFSU2_TR(0x6ab430);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ab433:{NFSU2_TR(0x6ab433);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ab436:{NFSU2_TR(0x6ab436);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ab439:{NFSU2_TR(0x6ab439);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ab43c:L6ab43c:{c.instructions+=3;NFSU2_TR(0x6ab43c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ab43f:{NFSU2_TR(0x6ab43f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6ab441:{NFSU2_TR(0x6ab441);
{goto L6ab472;}
}
B6ab443:L6ab443:{c.instructions+=1;NFSU2_TR(0x6ab443);
__builtin_memmove((R+4),(R+28),4);
}
B6ab445:L6ab445:{c.instructions+=2;NFSU2_TR(0x6ab445);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ab447:{NFSU2_TR(0x6ab447);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ab44cull));
TAIL_STATIC(0x6739efu,673);
}
B6ab44c:L6ab44c:{c.instructions+=1;NFSU2_TR(0x6ab44c);
{goto L6abceb;}
}
B6ab451:L6ab451:{c.instructions+=6;NFSU2_TR(0x6ab451);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6ab454:{NFSU2_TR(0x6ab454);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6ab457:{NFSU2_TR(0x6ab457);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ab45a:{NFSU2_TR(0x6ab45a);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6ab45d:{NFSU2_TR(0x6ab45d);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6ab461:{NFSU2_TR(0x6ab461);
if(r1(R+518)){{goto L6ab46f;}}
}
B6ab463:L6ab463:{c.instructions+=4;NFSU2_TR(0x6ab463);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ab466:{NFSU2_TR(0x6ab466);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6ab467:{NFSU2_TR(0x6ab467);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+8))));
}
B6ab46a:{NFSU2_TR(0x6ab46a);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6ab46f;}}
}
B6ab46c:L6ab46c:{c.instructions+=1;NFSU2_TR(0x6ab46c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ab46f:L6ab46f:{c.instructions+=1;NFSU2_TR(0x6ab46f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ab472:L6ab472:{c.instructions+=2;NFSU2_TR(0x6ab472);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6ab475:{NFSU2_TR(0x6ab475);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ab451u);}goto L6ab451;}}
}
B6ab477:L6ab477:{c.instructions+=3;NFSU2_TR(0x6ab477);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6ab47b:{NFSU2_TR(0x6ab47b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6ab47e:{NFSU2_TR(0x6ab47e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ab43cu);}goto L6ab43c;}}
}
B6ab480:L6ab480:{c.instructions+=2;NFSU2_TR(0x6ab480);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ab484:{NFSU2_TR(0x6ab484);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6ab4cf;}}
}
B6ab486:L6ab486:{c.instructions+=3;NFSU2_TR(0x6ab486);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ab489:{NFSU2_TR(0x6ab489);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6ab48c:{NFSU2_TR(0x6ab48c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ab48f:L6ab48f:{c.instructions+=5;NFSU2_TR(0x6ab48f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6ab491:{NFSU2_TR(0x6ab491);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6ab494:{NFSU2_TR(0x6ab494);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ab497:{NFSU2_TR(0x6ab497);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+8))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ab49a:{NFSU2_TR(0x6ab49a);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6ab4bf;}}
}
B6ab49c:L6ab49c:{c.instructions+=2;NFSU2_TR(0x6ab49c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ab49f:{NFSU2_TR(0x6ab49f);
{goto L6ab4bf;}
}
B6ab4a1:L6ab4a1:{c.instructions+=6;NFSU2_TR(0x6ab4a1);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6ab4a4:{NFSU2_TR(0x6ab4a4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6ab4a7:{NFSU2_TR(0x6ab4a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ab4aa:{NFSU2_TR(0x6ab4aa);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6ab4ad:{NFSU2_TR(0x6ab4ad);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6ab4b1:{NFSU2_TR(0x6ab4b1);
if(r1(R+518)){{goto L6ab4bf;}}
}
B6ab4b3:L6ab4b3:{c.instructions+=4;NFSU2_TR(0x6ab4b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ab4b6:{NFSU2_TR(0x6ab4b6);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6ab4b7:{NFSU2_TR(0x6ab4b7);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+8))));
}
B6ab4ba:{NFSU2_TR(0x6ab4ba);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6ab4bf;}}
}
B6ab4bc:L6ab4bc:{c.instructions+=1;NFSU2_TR(0x6ab4bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ab4bf:L6ab4bf:{c.instructions+=3;NFSU2_TR(0x6ab4bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ab4c2:{NFSU2_TR(0x6ab4c2);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6ab4c5:{NFSU2_TR(0x6ab4c5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ab4a1u);}goto L6ab4a1;}}
}
B6ab4c7:L6ab4c7:{c.instructions+=3;NFSU2_TR(0x6ab4c7);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B6ab4ca:{NFSU2_TR(0x6ab4ca);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6ab4cd:{NFSU2_TR(0x6ab4cd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ab48fu);}goto L6ab48f;}}
}
B6ab4cf:L6ab4cf:{c.instructions+=3;NFSU2_TR(0x6ab4cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ab4d2:{NFSU2_TR(0x6ab4d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ab4d5:{NFSU2_TR(0x6ab4d5);
{goto L6ab9d6;}
}
B6ab4da:L6ab4da:{c.instructions+=3;NFSU2_TR(0x6ab4da);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ab4dd:{NFSU2_TR(0x6ab4dd);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ab4e0:{NFSU2_TR(0x6ab4e0);
if(r1(R+518)){{goto L6ab9d0;}}
}
B6ab4e6:L6ab4e6:{c.instructions+=5;NFSU2_TR(0x6ab4e6);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
}
B6ab4e9:{NFSU2_TR(0x6ab4e9);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ab4ec:{NFSU2_TR(0x6ab4ec);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6ab4ef:{NFSU2_TR(0x6ab4ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ab4f2:{NFSU2_TR(0x6ab4f2);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6ab4f9;}}
}
B6ab4f4:L6ab4f4:{c.instructions+=2;NFSU2_TR(0x6ab4f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ab4f7:{NFSU2_TR(0x6ab4f7);
{goto L6ab4ff;}
}
B6ab4f9:L6ab4f9:{c.instructions+=2;NFSU2_TR(0x6ab4f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ab4fc:{NFSU2_TR(0x6ab4fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ab4ff:L6ab4ff:{c.instructions+=2;NFSU2_TR(0x6ab4ff);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
}
B6ab502:{NFSU2_TR(0x6ab502);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6ab50c;}}
}
B6ab504:L6ab504:{c.instructions+=3;NFSU2_TR(0x6ab504);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ab507:{NFSU2_TR(0x6ab507);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ab50a:{NFSU2_TR(0x6ab50a);
{goto L6ab50f;}
}
B6ab50c:L6ab50c:{c.instructions+=1;NFSU2_TR(0x6ab50c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ab50f:L6ab50f:{c.instructions+=11;NFSU2_TR(0x6ab50f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ab512:{NFSU2_TR(0x6ab512);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6ab514:{NFSU2_TR(0x6ab514);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ab517:{NFSU2_TR(0x6ab517);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6ab519:{NFSU2_TR(0x6ab519);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ab51c:{NFSU2_TR(0x6ab51c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffacull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ab51f:{NFSU2_TR(0x6ab51f);
w4(R+0,u32(0xfff00000ull));
}
B6ab524:{NFSU2_TR(0x6ab524);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B6ab527:{NFSU2_TR(0x6ab527);
w4(R+4,u32(u32(r4(R+4))&u32(r4(R+0))));
}
B6ab529:{NFSU2_TR(0x6ab529);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ab52c:{NFSU2_TR(0x6ab52c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ab9d0;}}
}
B6ab532:L6ab532:{c.instructions+=13;NFSU2_TR(0x6ab532);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ab535:{NFSU2_TR(0x6ab535);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ab538:{NFSU2_TR(0x6ab538);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6ab53a:{NFSU2_TR(0x6ab53a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ab53d:{NFSU2_TR(0x6ab53d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B6ab540:{NFSU2_TR(0x6ab540);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ab543:{NFSU2_TR(0x6ab543);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ab546:{NFSU2_TR(0x6ab546);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6ab548:{NFSU2_TR(0x6ab548);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6ab54b:{NFSU2_TR(0x6ab54b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ab54e:{NFSU2_TR(0x6ab54e);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ab551:{NFSU2_TR(0x6ab551);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ab554:{NFSU2_TR(0x6ab554);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ab9d0;}}
}
B6ab55a:L6ab55a:{c.instructions+=3;NFSU2_TR(0x6ab55a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ab55d:{NFSU2_TR(0x6ab55d);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ab560:{NFSU2_TR(0x6ab560);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ab9d0;}}
}
B6ab566:L6ab566:{c.instructions+=3;NFSU2_TR(0x6ab566);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ab569:{NFSU2_TR(0x6ab569);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ab56c:{NFSU2_TR(0x6ab56c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ab9d0;}}
}
B6ab572:L6ab572:{c.instructions+=3;NFSU2_TR(0x6ab572);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ab575:{NFSU2_TR(0x6ab575);
u8 U[16];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ab578:{NFSU2_TR(0x6ab578);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ab9d0;}}
}
B6ab57e:L6ab57e:{c.instructions+=14;NFSU2_TR(0x6ab57e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ab581:{NFSU2_TR(0x6ab581);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ab584:{NFSU2_TR(0x6ab584);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ab587:{NFSU2_TR(0x6ab587);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B6ab58a:{NFSU2_TR(0x6ab58a);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ab58d:{NFSU2_TR(0x6ab58d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff88ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ab590:{NFSU2_TR(0x6ab590);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ab593:{NFSU2_TR(0x6ab593);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ab596:{NFSU2_TR(0x6ab596);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ab599:{NFSU2_TR(0x6ab599);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B6ab59b:{NFSU2_TR(0x6ab59b);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(U+0))<(u32(0x4ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6ab59e:{NFSU2_TR(0x6ab59e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ab5a1:{NFSU2_TR(0x6ab5a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ab5a4:{NFSU2_TR(0x6ab5a4);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6ab9d0;}}
}
B6ab5aa:L6ab5aa:{c.instructions+=6;NFSU2_TR(0x6ab5aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6ab5ad:{NFSU2_TR(0x6ab5ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6ab5b0:{NFSU2_TR(0x6ab5b0);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6ab5b2:{NFSU2_TR(0x6ab5b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ab5b5:{NFSU2_TR(0x6ab5b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ab5b8:{NFSU2_TR(0x6ab5b8);
if(r1(R+518)){{goto L6ab5ec;}}
}
B6ab5ba:L6ab5ba:{c.instructions+=2;NFSU2_TR(0x6ab5ba);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x6ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6ab5be:{NFSU2_TR(0x6ab5be);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ab9d0;}}
}
B6ab5c4:L6ab5c4:{c.instructions+=5;NFSU2_TR(0x6ab5c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ab5c7:{NFSU2_TR(0x6ab5c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6ab5ca:{NFSU2_TR(0x6ab5ca);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6ab5cd:{NFSU2_TR(0x6ab5cd);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x20ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6ab5d1:{NFSU2_TR(0x6ab5d1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ab9d0;}}
}
B6ab5d7:L6ab5d7:{c.instructions+=6;NFSU2_TR(0x6ab5d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ab5da:{NFSU2_TR(0x6ab5da);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6ab5dd:{NFSU2_TR(0x6ab5dd);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B6ab5e0:{NFSU2_TR(0x6ab5e0);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w4(R+24,u32(u32(r4(R+24))+u32(r4(U+8))));
}
B6ab5e3:{NFSU2_TR(0x6ab5e3);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(U+0))<(u32(0x4ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6ab5e6:{NFSU2_TR(0x6ab5e6);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6ab9d0;}}
}
B6ab5ec:L6ab5ec:{c.instructions+=5;NFSU2_TR(0x6ab5ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ab5ef:{NFSU2_TR(0x6ab5ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6ab5f2:{NFSU2_TR(0x6ab5f2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w1(R+512,u8((r4(R+8))<(r4(U+0))));
}
B6ab5f4:{NFSU2_TR(0x6ab5f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ab5f7:{NFSU2_TR(0x6ab5f7);
if(r1(R+512)){{goto L6ab5fc;}}
}
B6ab5f9:L6ab5f9:{c.instructions+=1;NFSU2_TR(0x6ab5f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ab5fc:L6ab5fc:{c.instructions+=3;NFSU2_TR(0x6ab5fc);
w4(R+8,u32(0x10000000ull));
}
B6ab601:{NFSU2_TR(0x6ab601);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ab604:{NFSU2_TR(0x6ab604);
if(r1(R+518)){{goto L6ab93e;}}
}
B6ab60a:L6ab60a:{c.instructions+=2;NFSU2_TR(0x6ab60a);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x10100000ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ab611:{NFSU2_TR(0x6ab611);
if(r1(R+518)){{goto L6ab93e;}}
}
B6ab617:L6ab617:{c.instructions+=4;NFSU2_TR(0x6ab617);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffacull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ab61a:{NFSU2_TR(0x6ab61a);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xf0000000ull))));
}
B6ab620:{NFSU2_TR(0x6ab620);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6ab622:{NFSU2_TR(0x6ab622);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ab66d;}}
}
B6ab624:L6ab624:{c.instructions+=8;NFSU2_TR(0x6ab624);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ab627:{NFSU2_TR(0x6ab627);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6ab62a:{NFSU2_TR(0x6ab62a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6ab62d:{NFSU2_TR(0x6ab62d);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6ab630:{NFSU2_TR(0x6ab630);
__builtin_memmove((R+4),(R+0),4);
}
B6ab632:{NFSU2_TR(0x6ab632);
__builtin_memmove((R+8),(R+4),4);
}
B6ab634:{NFSU2_TR(0x6ab634);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6ab637:{NFSU2_TR(0x6ab637);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6ab63a:L6ab63a:{c.instructions+=1;NFSU2_TR(0x6ab63a);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6ab63c;}}
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
__builtin_memmove((U+16),gp(u32(r4(U+0))),4);
__builtin_memmove((U+36),(U+16),4);
s4(u32(r4(U+20)),r4(U+36));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ab63au);}goto L6ab63a;}
}
B6ab63c:L6ab63c:{c.instructions+=3;NFSU2_TR(0x6ab63c);
__builtin_memmove((R+4),(R+8),4);
}
B6ab63e:{NFSU2_TR(0x6ab63e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ab641:{NFSU2_TR(0x6ab641);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6ab644:L6ab644:{c.instructions+=1;NFSU2_TR(0x6ab644);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6ab646;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+17),(R+28),4);
w4(U+21,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+25,u32(r1(R+522)));
w4(U+29,u32(u32(u32(0x2ull))*u32(r4(U+25))));
w4(R+28,u32(u32(r4(U+21))-u32(r4(U+29))));
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+24))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),gp(u32(r4(U+0))),1);
__builtin_memmove((U+33),(U+16),1);
s1(u32(r4(U+17)),r1(U+33));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ab644u);}goto L6ab644;}
}
B6ab646:L6ab646:{c.instructions+=6;NFSU2_TR(0x6ab646);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6ab649:{NFSU2_TR(0x6ab649);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ab64c:{NFSU2_TR(0x6ab64c);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffffb4ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B6ab650:{NFSU2_TR(0x6ab650);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6ab652:{NFSU2_TR(0x6ab652);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ab653:{NFSU2_TR(0x6ab653);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6ab656:L6ab656:{c.instructions+=1;NFSU2_TR(0x6ab656);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6ab658;}}
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
__builtin_memmove((U+16),gp(u32(r4(U+0))),4);
__builtin_memmove((U+36),(U+16),4);
s4(u32(r4(U+20)),r4(U+36));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ab656u);}goto L6ab656;}
}
B6ab658:L6ab658:{c.instructions+=7;NFSU2_TR(0x6ab658);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ab659:{NFSU2_TR(0x6ab659);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ab65a:{NFSU2_TR(0x6ab65a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6ab65d:{NFSU2_TR(0x6ab65d);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6ab660:{NFSU2_TR(0x6ab660);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ab661:{NFSU2_TR(0x6ab661);
__builtin_memmove((R+4),(R+12),4);
}
B6ab663:{NFSU2_TR(0x6ab663);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ab668ull));
TAIL_STATIC(0x6a4e92u,6a4);
}
B6ab668:L6ab668:{c.instructions+=1;NFSU2_TR(0x6ab668);
{goto L6ab938;}
}
B6ab66d:L6ab66d:{c.instructions+=2;NFSU2_TR(0x6ab66d);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x20000000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6ab673:{NFSU2_TR(0x6ab673);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ab816;}}
}
B6ab679:L6ab679:{c.instructions+=7;NFSU2_TR(0x6ab679);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ab67c:{NFSU2_TR(0x6ab67c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6ab67f:{NFSU2_TR(0x6ab67f);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6ab682:{NFSU2_TR(0x6ab682);
__builtin_memmove((R+4),(R+0),4);
}
B6ab684:{NFSU2_TR(0x6ab684);
__builtin_memmove((R+8),(R+4),4);
}
B6ab686:{NFSU2_TR(0x6ab686);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6ab689:{NFSU2_TR(0x6ab689);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6ab68c:L6ab68c:{c.instructions+=1;NFSU2_TR(0x6ab68c);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6ab68e;}}
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
__builtin_memmove((U+16),gp(u32(r4(U+0))),4);
__builtin_memmove((U+36),(U+16),4);
s4(u32(r4(U+20)),r4(U+36));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ab68cu);}goto L6ab68c;}
}
B6ab68e:L6ab68e:{c.instructions+=3;NFSU2_TR(0x6ab68e);
__builtin_memmove((R+4),(R+8),4);
}
B6ab690:{NFSU2_TR(0x6ab690);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ab693:{NFSU2_TR(0x6ab693);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6ab696:L6ab696:{c.instructions+=1;NFSU2_TR(0x6ab696);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6ab698;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+17),(R+28),4);
w4(U+21,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+25,u32(r1(R+522)));
w4(U+29,u32(u32(u32(0x2ull))*u32(r4(U+25))));
w4(R+28,u32(u32(r4(U+21))-u32(r4(U+29))));
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+24))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),gp(u32(r4(U+0))),1);
__builtin_memmove((U+33),(U+16),1);
s1(u32(r4(U+17)),r1(U+33));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ab696u);}goto L6ab696;}
}
B6ab698:L6ab698:{c.instructions+=8;NFSU2_TR(0x6ab698);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6ab69b:{NFSU2_TR(0x6ab69b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ab69e:{NFSU2_TR(0x6ab69e);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6ab6a1:{NFSU2_TR(0x6ab6a1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ab6a4:{NFSU2_TR(0x6ab6a4);
__builtin_memmove((R+8),(R+4),4);
}
B6ab6a6:{NFSU2_TR(0x6ab6a6);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6ab6a9:{NFSU2_TR(0x6ab6a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ab6ac:{NFSU2_TR(0x6ab6ac);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffffb4ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B6ab6b0:L6ab6b0:{c.instructions+=1;NFSU2_TR(0x6ab6b0);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6ab6b2;}}
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
__builtin_memmove((U+16),gp(u32(r4(U+0))),4);
__builtin_memmove((U+36),(U+16),4);
s4(u32(r4(U+20)),r4(U+36));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ab6b0u);}goto L6ab6b0;}
}
B6ab6b2:L6ab6b2:{c.instructions+=4;NFSU2_TR(0x6ab6b2);
__builtin_memmove((R+4),(R+8),4);
}
B6ab6b4:{NFSU2_TR(0x6ab6b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ab6b7:{NFSU2_TR(0x6ab6b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ab6ba:{NFSU2_TR(0x6ab6ba);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6ab6bd:L6ab6bd:{c.instructions+=1;NFSU2_TR(0x6ab6bd);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6ab6bf;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+17),(R+28),4);
w4(U+21,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+25,u32(r1(R+522)));
w4(U+29,u32(u32(u32(0x2ull))*u32(r4(U+25))));
w4(R+28,u32(u32(r4(U+21))-u32(r4(U+29))));
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+24))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),gp(u32(r4(U+0))),1);
__builtin_memmove((U+33),(U+16),1);
s1(u32(r4(U+17)),r1(U+33));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ab6bdu);}goto L6ab6bd;}
}
B6ab6bf:L6ab6bf:{c.instructions+=6;NFSU2_TR(0x6ab6bf);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6ab6c2:{NFSU2_TR(0x6ab6c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B6ab6c5:{NFSU2_TR(0x6ab6c5);
__builtin_memmove((R+4),(R+0),4);
}
B6ab6c7:{NFSU2_TR(0x6ab6c7);
__builtin_memmove((R+8),(R+4),4);
}
B6ab6c9:{NFSU2_TR(0x6ab6c9);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6ab6cc:{NFSU2_TR(0x6ab6cc);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff8cull))));
__builtin_memmove((R+28),(U+0),4);
}
B6ab6cf:L6ab6cf:{c.instructions+=1;NFSU2_TR(0x6ab6cf);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6ab6d1;}}
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
__builtin_memmove((U+16),gp(u32(r4(U+0))),4);
__builtin_memmove((U+36),(U+16),4);
s4(u32(r4(U+20)),r4(U+36));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ab6cfu);}goto L6ab6cf;}
}
B6ab6d1:L6ab6d1:{c.instructions+=3;NFSU2_TR(0x6ab6d1);
__builtin_memmove((R+4),(R+8),4);
}
B6ab6d3:{NFSU2_TR(0x6ab6d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ab6d6:{NFSU2_TR(0x6ab6d6);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6ab6d9:L6ab6d9:{c.instructions+=1;NFSU2_TR(0x6ab6d9);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6ab6db;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+17),(R+28),4);
w4(U+21,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+25,u32(r1(R+522)));
w4(U+29,u32(u32(u32(0x2ull))*u32(r4(U+25))));
w4(R+28,u32(u32(r4(U+21))-u32(r4(U+29))));
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+24))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),gp(u32(r4(U+0))),1);
__builtin_memmove((U+33),(U+16),1);
s1(u32(r4(U+17)),r1(U+33));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ab6d9u);}goto L6ab6d9;}
}
B6ab6db:L6ab6db:{c.instructions+=6;NFSU2_TR(0x6ab6db);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ab6de:{NFSU2_TR(0x6ab6de);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B6ab6e1:{NFSU2_TR(0x6ab6e1);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffff8cull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B6ab6e5:{NFSU2_TR(0x6ab6e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffacull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ab6e8:{NFSU2_TR(0x6ab6e8);
__builtin_memmove((R+0),(R+4),4);
}
B6ab6ea:{NFSU2_TR(0x6ab6ea);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6ab6ed:L6ab6ed:{c.instructions+=1;NFSU2_TR(0x6ab6ed);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6ab6ef;}}
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
__builtin_memmove((U+16),gp(u32(r4(U+0))),4);
__builtin_memmove((U+36),(U+16),4);
s4(u32(r4(U+20)),r4(U+36));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ab6edu);}goto L6ab6ed;}
}
B6ab6ef:L6ab6ef:{c.instructions+=9;NFSU2_TR(0x6ab6ef);
__builtin_memmove((R+4),(R+0),4);
}
B6ab6f1:{NFSU2_TR(0x6ab6f1);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6ab6f3:{NFSU2_TR(0x6ab6f3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ab6f4:{NFSU2_TR(0x6ab6f4);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6ab6f7:{NFSU2_TR(0x6ab6f7);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6ab6fa:{NFSU2_TR(0x6ab6fa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ab6fb:{NFSU2_TR(0x6ab6fb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ab6fc:{NFSU2_TR(0x6ab6fc);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6ab6ff:{NFSU2_TR(0x6ab6ff);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6ab702:L6ab702:{c.instructions+=1;NFSU2_TR(0x6ab702);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6ab704;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+17),(R+28),4);
w4(U+21,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+25,u32(r1(R+522)));
w4(U+29,u32(u32(u32(0x2ull))*u32(r4(U+25))));
w4(R+28,u32(u32(r4(U+21))-u32(r4(U+29))));
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+24))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),gp(u32(r4(U+0))),1);
__builtin_memmove((U+33),(U+16),1);
s1(u32(r4(U+17)),r1(U+33));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ab702u);}goto L6ab702;}
}
B6ab704:L6ab704:{c.instructions+=3;NFSU2_TR(0x6ab704);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ab705:{NFSU2_TR(0x6ab705);
__builtin_memmove((R+4),(R+12),4);
}
B6ab707:{NFSU2_TR(0x6ab707);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ab70cull));
TAIL_STATIC(0x6a4e92u,6a4);
}
B6ab70c:L6ab70c:{c.instructions+=12;NFSU2_TR(0x6ab70c);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6ab70f:{NFSU2_TR(0x6ab70f);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6ab711:{NFSU2_TR(0x6ab711);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ab712:{NFSU2_TR(0x6ab712);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6ab715:{NFSU2_TR(0x6ab715);
__builtin_memmove((R+28),(R+0),4);
}
B6ab717:{NFSU2_TR(0x6ab717);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ab718:{NFSU2_TR(0x6ab718);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ab719:{NFSU2_TR(0x6ab719);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6ab71c:{NFSU2_TR(0x6ab71c);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff8cull))));
__builtin_memmove((R+0),(U+0),4);
}
B6ab71f:{NFSU2_TR(0x6ab71f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ab720:{NFSU2_TR(0x6ab720);
__builtin_memmove((R+4),(R+12),4);
}
B6ab722:{NFSU2_TR(0x6ab722);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ab727ull));
TAIL_STATIC(0x6a4e92u,6a4);
}
B6ab727:L6ab727:{c.instructions+=2;NFSU2_TR(0x6ab727);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6ab729:{NFSU2_TR(0x6ab729);
if(r1(R+518)){{goto L6ab733;}}
}
B6ab72b:L6ab72b:{c.instructions+=2;NFSU2_TR(0x6ab72b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ab72d:{NFSU2_TR(0x6ab72d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ab991;}}
}
B6ab733:L6ab733:{c.instructions+=2;NFSU2_TR(0x6ab733);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ab736:{NFSU2_TR(0x6ab736);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ab73bull));
TAIL_STATIC(0x698f6cu,698);
}
B6ab73b:L6ab73b:{c.instructions+=2;NFSU2_TR(0x6ab73b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ab73d:{NFSU2_TR(0x6ab73d);
if(r1(R+518)){{goto L6ab9ad;}}
}
B6ab743:L6ab743:{c.instructions+=7;NFSU2_TR(0x6ab743);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ab746:{NFSU2_TR(0x6ab746);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6ab749:{NFSU2_TR(0x6ab749);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffacull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ab74c:{NFSU2_TR(0x6ab74c);
__builtin_memmove((R+4),(R+0),4);
}
B6ab74e:{NFSU2_TR(0x6ab74e);
__builtin_memmove((R+8),(R+4),4);
}
B6ab750:{NFSU2_TR(0x6ab750);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6ab753:{NFSU2_TR(0x6ab753);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff78ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6ab759:L6ab759:{c.instructions+=1;NFSU2_TR(0x6ab759);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6ab75b;}}
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
__builtin_memmove((U+16),gp(u32(r4(U+0))),4);
__builtin_memmove((U+36),(U+16),4);
s4(u32(r4(U+20)),r4(U+36));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ab759u);}goto L6ab759;}
}
B6ab75b:L6ab75b:{c.instructions+=2;NFSU2_TR(0x6ab75b);
__builtin_memmove((R+4),(R+8),4);
}
B6ab75d:{NFSU2_TR(0x6ab75d);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6ab760:L6ab760:{c.instructions+=1;NFSU2_TR(0x6ab760);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6ab762;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+17),(R+28),4);
w4(U+21,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+25,u32(r1(R+522)));
w4(U+29,u32(u32(u32(0x2ull))*u32(r4(U+25))));
w4(R+28,u32(u32(r4(U+21))-u32(r4(U+29))));
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+24))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),gp(u32(r4(U+0))),1);
__builtin_memmove((U+33),(U+16),1);
s1(u32(r4(U+17)),r1(U+33));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ab760u);}goto L6ab760;}
}
B6ab762:L6ab762:{c.instructions+=8;NFSU2_TR(0x6ab762);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ab765:{NFSU2_TR(0x6ab765);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ab768:{NFSU2_TR(0x6ab768);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ab76b:{NFSU2_TR(0x6ab76b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B6ab76e:{NFSU2_TR(0x6ab76e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ab771:{NFSU2_TR(0x6ab771);
__builtin_memmove((R+8),(R+4),4);
}
B6ab773:{NFSU2_TR(0x6ab773);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6ab776:{NFSU2_TR(0x6ab776);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffff78ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B6ab77d:L6ab77d:{c.instructions+=1;NFSU2_TR(0x6ab77d);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6ab77f;}}
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
__builtin_memmove((U+16),gp(u32(r4(U+0))),4);
__builtin_memmove((U+36),(U+16),4);
s4(u32(r4(U+20)),r4(U+36));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ab77du);}goto L6ab77d;}
}
B6ab77f:L6ab77f:{c.instructions+=5;NFSU2_TR(0x6ab77f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6ab782:{NFSU2_TR(0x6ab782);
__builtin_memmove((R+4),(R+8),4);
}
B6ab784:{NFSU2_TR(0x6ab784);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ab787:{NFSU2_TR(0x6ab787);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ab78a:{NFSU2_TR(0x6ab78a);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6ab78d:L6ab78d:{c.instructions+=1;NFSU2_TR(0x6ab78d);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6ab78f;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+17),(R+28),4);
w4(U+21,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+25,u32(r1(R+522)));
w4(U+29,u32(u32(u32(0x2ull))*u32(r4(U+25))));
w4(R+28,u32(u32(r4(U+21))-u32(r4(U+29))));
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+24))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),gp(u32(r4(U+0))),1);
__builtin_memmove((U+33),(U+16),1);
s1(u32(r4(U+17)),r1(U+33));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ab78du);}goto L6ab78d;}
}
B6ab78f:L6ab78f:{c.instructions+=5;NFSU2_TR(0x6ab78f);
__builtin_memmove((R+4),(R+0),4);
}
B6ab791:{NFSU2_TR(0x6ab791);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B6ab794:{NFSU2_TR(0x6ab794);
__builtin_memmove((R+8),(R+4),4);
}
B6ab796:{NFSU2_TR(0x6ab796);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6ab799:{NFSU2_TR(0x6ab799);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff68ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6ab79f:L6ab79f:{c.instructions+=1;NFSU2_TR(0x6ab79f);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6ab7a1;}}
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
__builtin_memmove((U+16),gp(u32(r4(U+0))),4);
__builtin_memmove((U+36),(U+16),4);
s4(u32(r4(U+20)),r4(U+36));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ab79fu);}goto L6ab79f;}
}
B6ab7a1:L6ab7a1:{c.instructions+=2;NFSU2_TR(0x6ab7a1);
__builtin_memmove((R+4),(R+8),4);
}
B6ab7a3:{NFSU2_TR(0x6ab7a3);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6ab7a6:L6ab7a6:{c.instructions+=1;NFSU2_TR(0x6ab7a6);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6ab7a8;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+17),(R+28),4);
w4(U+21,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+25,u32(r1(R+522)));
w4(U+29,u32(u32(u32(0x2ull))*u32(r4(U+25))));
w4(R+28,u32(u32(r4(U+21))-u32(r4(U+29))));
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+24))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),gp(u32(r4(U+0))),1);
__builtin_memmove((U+33),(U+16),1);
s1(u32(r4(U+17)),r1(U+33));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ab7a6u);}goto L6ab7a6;}
}
B6ab7a8:L6ab7a8:{c.instructions+=5;NFSU2_TR(0x6ab7a8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ab7ab:{NFSU2_TR(0x6ab7ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6ab7ae:{NFSU2_TR(0x6ab7ae);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffff68ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B6ab7b5:{NFSU2_TR(0x6ab7b5);
__builtin_memmove((R+0),(R+4),4);
}
B6ab7b7:{NFSU2_TR(0x6ab7b7);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6ab7ba:L6ab7ba:{c.instructions+=1;NFSU2_TR(0x6ab7ba);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6ab7bc;}}
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
__builtin_memmove((U+16),gp(u32(r4(U+0))),4);
__builtin_memmove((U+36),(U+16),4);
s4(u32(r4(U+20)),r4(U+36));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ab7bau);}goto L6ab7ba;}
}
B6ab7bc:L6ab7bc:{c.instructions+=9;NFSU2_TR(0x6ab7bc);
__builtin_memmove((R+4),(R+0),4);
}
B6ab7be:{NFSU2_TR(0x6ab7be);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6ab7c0:{NFSU2_TR(0x6ab7c0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ab7c1:{NFSU2_TR(0x6ab7c1);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6ab7c4:{NFSU2_TR(0x6ab7c4);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6ab7c7:{NFSU2_TR(0x6ab7c7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ab7c8:{NFSU2_TR(0x6ab7c8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ab7c9:{NFSU2_TR(0x6ab7c9);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6ab7cc:{NFSU2_TR(0x6ab7cc);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff78ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6ab7d2:L6ab7d2:{c.instructions+=1;NFSU2_TR(0x6ab7d2);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6ab7d4;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+17),(R+28),4);
w4(U+21,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+25,u32(r1(R+522)));
w4(U+29,u32(u32(u32(0x2ull))*u32(r4(U+25))));
w4(R+28,u32(u32(r4(U+21))-u32(r4(U+29))));
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+24))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),gp(u32(r4(U+0))),1);
__builtin_memmove((U+33),(U+16),1);
s1(u32(r4(U+17)),r1(U+33));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ab7d2u);}goto L6ab7d2;}
}
B6ab7d4:L6ab7d4:{c.instructions+=3;NFSU2_TR(0x6ab7d4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ab7d5:{NFSU2_TR(0x6ab7d5);
__builtin_memmove((R+4),(R+12),4);
}
B6ab7d7:{NFSU2_TR(0x6ab7d7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ab7dcull));
TAIL_STATIC(0x6a4e92u,6a4);
}
B6ab7dc:L6ab7dc:{c.instructions+=12;NFSU2_TR(0x6ab7dc);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6ab7df:{NFSU2_TR(0x6ab7df);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6ab7e1:{NFSU2_TR(0x6ab7e1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ab7e2:{NFSU2_TR(0x6ab7e2);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6ab7e5:{NFSU2_TR(0x6ab7e5);
__builtin_memmove((R+28),(R+0),4);
}
B6ab7e7:{NFSU2_TR(0x6ab7e7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ab7e8:{NFSU2_TR(0x6ab7e8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ab7e9:{NFSU2_TR(0x6ab7e9);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6ab7ec:{NFSU2_TR(0x6ab7ec);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff68ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6ab7f2:{NFSU2_TR(0x6ab7f2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ab7f3:{NFSU2_TR(0x6ab7f3);
__builtin_memmove((R+4),(R+12),4);
}
B6ab7f5:{NFSU2_TR(0x6ab7f5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ab7faull));
TAIL_STATIC(0x6a4e92u,6a4);
}
B6ab7fa:L6ab7fa:{c.instructions+=2;NFSU2_TR(0x6ab7fa);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6ab7fc:{NFSU2_TR(0x6ab7fc);
if(r1(R+518)){{goto L6ab9ad;}}
}
B6ab802:L6ab802:{c.instructions+=2;NFSU2_TR(0x6ab802);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ab804:{NFSU2_TR(0x6ab804);
if(r1(R+518)){{goto L6ab9ad;}}
}
B6ab80a:L6ab80a:{c.instructions+=2;NFSU2_TR(0x6ab80a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6ab811:{NFSU2_TR(0x6ab811);
{goto L6ab995;}
}
B6ab816:L6ab816:{c.instructions+=2;NFSU2_TR(0x6ab816);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x30000000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6ab81c:{NFSU2_TR(0x6ab81c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ab9ad;}}
}
B6ab822:L6ab822:{c.instructions+=7;NFSU2_TR(0x6ab822);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ab825:{NFSU2_TR(0x6ab825);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6ab828:{NFSU2_TR(0x6ab828);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6ab82b:{NFSU2_TR(0x6ab82b);
__builtin_memmove((R+4),(R+0),4);
}
B6ab82d:{NFSU2_TR(0x6ab82d);
__builtin_memmove((R+8),(R+4),4);
}
B6ab82f:{NFSU2_TR(0x6ab82f);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6ab832:{NFSU2_TR(0x6ab832);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6ab835:L6ab835:{c.instructions+=1;NFSU2_TR(0x6ab835);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6ab837;}}
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
__builtin_memmove((U+16),gp(u32(r4(U+0))),4);
__builtin_memmove((U+36),(U+16),4);
s4(u32(r4(U+20)),r4(U+36));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ab835u);}goto L6ab835;}
}
B6ab837:L6ab837:{c.instructions+=2;NFSU2_TR(0x6ab837);
__builtin_memmove((R+4),(R+8),4);
}
B6ab839:{NFSU2_TR(0x6ab839);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6ab83c:L6ab83c:{c.instructions+=1;NFSU2_TR(0x6ab83c);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6ab83e;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+17),(R+28),4);
w4(U+21,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+25,u32(r1(R+522)));
w4(U+29,u32(u32(u32(0x2ull))*u32(r4(U+25))));
w4(R+28,u32(u32(r4(U+21))-u32(r4(U+29))));
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+24))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),gp(u32(r4(U+0))),1);
__builtin_memmove((U+33),(U+16),1);
s1(u32(r4(U+17)),r1(U+33));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ab83cu);}goto L6ab83c;}
}
B6ab83e:L6ab83e:{c.instructions+=8;NFSU2_TR(0x6ab83e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ab841:{NFSU2_TR(0x6ab841);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6ab844:{NFSU2_TR(0x6ab844);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ab847:{NFSU2_TR(0x6ab847);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6ab84a:{NFSU2_TR(0x6ab84a);
__builtin_memmove((R+8),(R+4),4);
}
B6ab84c:{NFSU2_TR(0x6ab84c);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6ab84f:{NFSU2_TR(0x6ab84f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ab852:{NFSU2_TR(0x6ab852);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffffb4ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B6ab856:L6ab856:{c.instructions+=1;NFSU2_TR(0x6ab856);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6ab858;}}
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
__builtin_memmove((U+16),gp(u32(r4(U+0))),4);
__builtin_memmove((U+36),(U+16),4);
s4(u32(r4(U+20)),r4(U+36));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ab856u);}goto L6ab856;}
}
B6ab858:L6ab858:{c.instructions+=2;NFSU2_TR(0x6ab858);
__builtin_memmove((R+4),(R+8),4);
}
B6ab85a:{NFSU2_TR(0x6ab85a);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6ab85d:L6ab85d:{c.instructions+=1;NFSU2_TR(0x6ab85d);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6ab85f;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+17),(R+28),4);
w4(U+21,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+25,u32(r1(R+522)));
w4(U+29,u32(u32(u32(0x2ull))*u32(r4(U+25))));
w4(R+28,u32(u32(r4(U+21))-u32(r4(U+29))));
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+24))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),gp(u32(r4(U+0))),1);
__builtin_memmove((U+33),(U+16),1);
s1(u32(r4(U+17)),r1(U+33));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ab85du);}goto L6ab85d;}
}
B6ab85f:L6ab85f:{c.instructions+=7;NFSU2_TR(0x6ab85f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ab862:{NFSU2_TR(0x6ab862);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ab865:{NFSU2_TR(0x6ab865);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B6ab868:{NFSU2_TR(0x6ab868);
__builtin_memmove((R+4),(R+0),4);
}
B6ab86a:{NFSU2_TR(0x6ab86a);
__builtin_memmove((R+8),(R+4),4);
}
B6ab86c:{NFSU2_TR(0x6ab86c);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6ab86f:{NFSU2_TR(0x6ab86f);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff8cull))));
__builtin_memmove((R+28),(U+0),4);
}
B6ab872:L6ab872:{c.instructions+=1;NFSU2_TR(0x6ab872);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6ab874;}}
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
__builtin_memmove((U+16),gp(u32(r4(U+0))),4);
__builtin_memmove((U+36),(U+16),4);
s4(u32(r4(U+20)),r4(U+36));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ab872u);}goto L6ab872;}
}
B6ab874:L6ab874:{c.instructions+=3;NFSU2_TR(0x6ab874);
__builtin_memmove((R+4),(R+8),4);
}
B6ab876:{NFSU2_TR(0x6ab876);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ab879:{NFSU2_TR(0x6ab879);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6ab87c:L6ab87c:{c.instructions+=1;NFSU2_TR(0x6ab87c);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6ab87e;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+17),(R+28),4);
w4(U+21,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+25,u32(r1(R+522)));
w4(U+29,u32(u32(u32(0x2ull))*u32(r4(U+25))));
w4(R+28,u32(u32(r4(U+21))-u32(r4(U+29))));
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+24))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),gp(u32(r4(U+0))),1);
__builtin_memmove((U+33),(U+16),1);
s1(u32(r4(U+17)),r1(U+33));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ab87cu);}goto L6ab87c;}
}
B6ab87e:L6ab87e:{c.instructions+=6;NFSU2_TR(0x6ab87e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ab881:{NFSU2_TR(0x6ab881);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6ab884:{NFSU2_TR(0x6ab884);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B6ab887:{NFSU2_TR(0x6ab887);
__builtin_memmove((R+8),(R+4),4);
}
B6ab889:{NFSU2_TR(0x6ab889);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6ab88c:{NFSU2_TR(0x6ab88c);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffff8cull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B6ab890:L6ab890:{c.instructions+=1;NFSU2_TR(0x6ab890);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6ab892;}}
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
__builtin_memmove((U+16),gp(u32(r4(U+0))),4);
__builtin_memmove((U+36),(U+16),4);
s4(u32(r4(U+20)),r4(U+36));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ab890u);}goto L6ab890;}
}
B6ab892:L6ab892:{c.instructions+=4;NFSU2_TR(0x6ab892);
__builtin_memmove((R+4),(R+8),4);
}
B6ab894:{NFSU2_TR(0x6ab894);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ab897:{NFSU2_TR(0x6ab897);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ab89a:{NFSU2_TR(0x6ab89a);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6ab89d:L6ab89d:{c.instructions+=1;NFSU2_TR(0x6ab89d);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6ab89f;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+17),(R+28),4);
w4(U+21,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+25,u32(r1(R+522)));
w4(U+29,u32(u32(u32(0x2ull))*u32(r4(U+25))));
w4(R+28,u32(u32(r4(U+21))-u32(r4(U+29))));
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+24))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),gp(u32(r4(U+0))),1);
__builtin_memmove((U+33),(U+16),1);
s1(u32(r4(U+17)),r1(U+33));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ab89du);}goto L6ab89d;}
}
B6ab89f:L6ab89f:{c.instructions+=7;NFSU2_TR(0x6ab89f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6ab8a2:{NFSU2_TR(0x6ab8a2);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6ab8a5:{NFSU2_TR(0x6ab8a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B6ab8a8:{NFSU2_TR(0x6ab8a8);
__builtin_memmove((R+4),(R+0),4);
}
B6ab8aa:{NFSU2_TR(0x6ab8aa);
__builtin_memmove((R+8),(R+4),4);
}
B6ab8ac:{NFSU2_TR(0x6ab8ac);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6ab8af:{NFSU2_TR(0x6ab8af);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff58ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6ab8b5:L6ab8b5:{c.instructions+=1;NFSU2_TR(0x6ab8b5);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6ab8b7;}}
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
__builtin_memmove((U+16),gp(u32(r4(U+0))),4);
__builtin_memmove((U+36),(U+16),4);
s4(u32(r4(U+20)),r4(U+36));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ab8b5u);}goto L6ab8b5;}
}
B6ab8b7:L6ab8b7:{c.instructions+=3;NFSU2_TR(0x6ab8b7);
__builtin_memmove((R+4),(R+8),4);
}
B6ab8b9:{NFSU2_TR(0x6ab8b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ab8bc:{NFSU2_TR(0x6ab8bc);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6ab8bf:L6ab8bf:{c.instructions+=1;NFSU2_TR(0x6ab8bf);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6ab8c1;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+17),(R+28),4);
w4(U+21,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+25,u32(r1(R+522)));
w4(U+29,u32(u32(u32(0x2ull))*u32(r4(U+25))));
w4(R+28,u32(u32(r4(U+21))-u32(r4(U+29))));
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+24))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),gp(u32(r4(U+0))),1);
__builtin_memmove((U+33),(U+16),1);
s1(u32(r4(U+17)),r1(U+33));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ab8bfu);}goto L6ab8bf;}
}
B6ab8c1:L6ab8c1:{c.instructions+=7;NFSU2_TR(0x6ab8c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6ab8c4:{NFSU2_TR(0x6ab8c4);
__builtin_memmove((R+4),(R+8),4);
}
B6ab8c6:{NFSU2_TR(0x6ab8c6);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6ab8c9:{NFSU2_TR(0x6ab8c9);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffff58ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B6ab8d0:{NFSU2_TR(0x6ab8d0);
__builtin_memmove((R+0),(R+4),4);
}
B6ab8d2:{NFSU2_TR(0x6ab8d2);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6ab8d5:{NFSU2_TR(0x6ab8d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B6ab8d8:L6ab8d8:{c.instructions+=1;NFSU2_TR(0x6ab8d8);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6ab8da;}}
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
__builtin_memmove((U+16),gp(u32(r4(U+0))),4);
__builtin_memmove((U+36),(U+16),4);
s4(u32(r4(U+20)),r4(U+36));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ab8d8u);}goto L6ab8d8;}
}
B6ab8da:L6ab8da:{c.instructions+=9;NFSU2_TR(0x6ab8da);
__builtin_memmove((R+4),(R+0),4);
}
B6ab8dc:{NFSU2_TR(0x6ab8dc);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6ab8de:{NFSU2_TR(0x6ab8de);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ab8df:{NFSU2_TR(0x6ab8df);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6ab8e2:{NFSU2_TR(0x6ab8e2);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6ab8e5:{NFSU2_TR(0x6ab8e5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ab8e6:{NFSU2_TR(0x6ab8e6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ab8e7:{NFSU2_TR(0x6ab8e7);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6ab8ea:{NFSU2_TR(0x6ab8ea);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6ab8ed:L6ab8ed:{c.instructions+=1;NFSU2_TR(0x6ab8ed);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6ab8ef;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+17),(R+28),4);
w4(U+21,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+25,u32(r1(R+522)));
w4(U+29,u32(u32(u32(0x2ull))*u32(r4(U+25))));
w4(R+28,u32(u32(r4(U+21))-u32(r4(U+29))));
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+24))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),gp(u32(r4(U+0))),1);
__builtin_memmove((U+33),(U+16),1);
s1(u32(r4(U+17)),r1(U+33));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ab8edu);}goto L6ab8ed;}
}
B6ab8ef:L6ab8ef:{c.instructions+=3;NFSU2_TR(0x6ab8ef);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ab8f0:{NFSU2_TR(0x6ab8f0);
__builtin_memmove((R+4),(R+12),4);
}
B6ab8f2:{NFSU2_TR(0x6ab8f2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ab8f7ull));
TAIL_STATIC(0x6a4e92u,6a4);
}
B6ab8f7:L6ab8f7:{c.instructions+=12;NFSU2_TR(0x6ab8f7);
__builtin_memmove((R+28),(R+0),4);
}
B6ab8f9:{NFSU2_TR(0x6ab8f9);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6ab8fc:{NFSU2_TR(0x6ab8fc);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6ab8fe:{NFSU2_TR(0x6ab8fe);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ab8ff:{NFSU2_TR(0x6ab8ff);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6ab902:{NFSU2_TR(0x6ab902);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff8cull))));
__builtin_memmove((R+0),(U+0),4);
}
B6ab905:{NFSU2_TR(0x6ab905);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ab906:{NFSU2_TR(0x6ab906);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ab907:{NFSU2_TR(0x6ab907);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6ab90a:{NFSU2_TR(0x6ab90a);
__builtin_memmove((R+4),(R+12),4);
}
B6ab90c:{NFSU2_TR(0x6ab90c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ab90d:{NFSU2_TR(0x6ab90d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ab912ull));
TAIL_STATIC(0x6a4e92u,6a4);
}
B6ab912:L6ab912:{c.instructions+=11;NFSU2_TR(0x6ab912);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6ab915:{NFSU2_TR(0x6ab915);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ab918:{NFSU2_TR(0x6ab918);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ab919:{NFSU2_TR(0x6ab919);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6ab91c:{NFSU2_TR(0x6ab91c);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff58ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6ab922:{NFSU2_TR(0x6ab922);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ab923:{NFSU2_TR(0x6ab923);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ab924:{NFSU2_TR(0x6ab924);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6ab927:{NFSU2_TR(0x6ab927);
__builtin_memmove((R+4),(R+12),4);
}
B6ab929:{NFSU2_TR(0x6ab929);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ab92a:{NFSU2_TR(0x6ab92a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ab92full));
TAIL_STATIC(0x6a4e92u,6a4);
}
B6ab92f:L6ab92f:{c.instructions+=2;NFSU2_TR(0x6ab92f);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6ab931:{NFSU2_TR(0x6ab931);
if(r1(R+518)){{goto L6ab9ad;}}
}
B6ab933:L6ab933:{c.instructions+=2;NFSU2_TR(0x6ab933);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ab936:{NFSU2_TR(0x6ab936);
if(r1(R+518)){{goto L6ab9ad;}}
}
B6ab938:L6ab938:{c.instructions+=2;NFSU2_TR(0x6ab938);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ab93a:{NFSU2_TR(0x6ab93a);
if(r1(R+518)){{goto L6ab9ad;}}
}
B6ab93c:L6ab93c:{c.instructions+=1;NFSU2_TR(0x6ab93c);
{goto L6ab991;}
}
B6ab93e:L6ab93e:{c.instructions+=12;NFSU2_TR(0x6ab93e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ab941:{NFSU2_TR(0x6ab941);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ab944:{NFSU2_TR(0x6ab944);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6ab947:{NFSU2_TR(0x6ab947);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6ab94a:{NFSU2_TR(0x6ab94a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+28),(U+0),4);
}
B6ab94c:{NFSU2_TR(0x6ab94c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ab94f:{NFSU2_TR(0x6ab94f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6ab951:{NFSU2_TR(0x6ab951);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6ab954:{NFSU2_TR(0x6ab954);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6ab957:{NFSU2_TR(0x6ab957);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6ab95a:{NFSU2_TR(0x6ab95a);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+28))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ab95d:{NFSU2_TR(0x6ab95d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ab9ad;}}
}
B6ab95f:L6ab95f:{c.instructions+=3;NFSU2_TR(0x6ab95f);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6ab962:{NFSU2_TR(0x6ab962);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+28))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ab965:{NFSU2_TR(0x6ab965);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ab9ad;}}
}
B6ab967:L6ab967:{c.instructions+=3;NFSU2_TR(0x6ab967);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ab96a:{NFSU2_TR(0x6ab96a);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ab96d:{NFSU2_TR(0x6ab96d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ab9ad;}}
}
B6ab96f:L6ab96f:{c.instructions+=5;NFSU2_TR(0x6ab96f);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6ab972:{NFSU2_TR(0x6ab972);
__builtin_memmove((R+4),(R+0),4);
}
B6ab974:{NFSU2_TR(0x6ab974);
__builtin_memmove((R+8),(R+4),4);
}
B6ab976:{NFSU2_TR(0x6ab976);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6ab979:{NFSU2_TR(0x6ab979);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6ab97c:L6ab97c:{c.instructions+=1;NFSU2_TR(0x6ab97c);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6ab97e;}}
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
__builtin_memmove((U+16),gp(u32(r4(U+0))),4);
__builtin_memmove((U+36),(U+16),4);
s4(u32(r4(U+20)),r4(U+36));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ab97cu);}goto L6ab97c;}
}
B6ab97e:L6ab97e:{c.instructions+=2;NFSU2_TR(0x6ab97e);
__builtin_memmove((R+4),(R+8),4);
}
B6ab980:{NFSU2_TR(0x6ab980);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6ab983:L6ab983:{c.instructions+=1;NFSU2_TR(0x6ab983);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6ab985;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+17),(R+28),4);
w4(U+21,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+25,u32(r1(R+522)));
w4(U+29,u32(u32(u32(0x2ull))*u32(r4(U+25))));
w4(R+28,u32(u32(r4(U+21))-u32(r4(U+29))));
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+24))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),gp(u32(r4(U+0))),1);
__builtin_memmove((U+33),(U+16),1);
s1(u32(r4(U+17)),r1(U+33));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ab983u);}goto L6ab983;}
}
B6ab985:L6ab985:{c.instructions+=3;NFSU2_TR(0x6ab985);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ab988:{NFSU2_TR(0x6ab988);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6ab98b:{NFSU2_TR(0x6ab98b);
u8 U[12];
w4(U+0,u32(u32(u32(0xffffffb4ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+28),(U+8),4);
}
B6ab98f:L6ab98f:{c.instructions+=1;NFSU2_TR(0x6ab98f);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6ab991;}}
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
__builtin_memmove((U+16),gp(u32(r4(U+0))),4);
__builtin_memmove((U+36),(U+16),4);
s4(u32(r4(U+20)),r4(U+36));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ab98fu);}goto L6ab98f;}
}
B6ab991:L6ab991:{c.instructions+=1;NFSU2_TR(0x6ab991);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6ab995:L6ab995:{c.instructions+=4;NFSU2_TR(0x6ab995);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ab998:{NFSU2_TR(0x6ab998);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ab99b:{NFSU2_TR(0x6ab99b);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6ab99d:{NFSU2_TR(0x6ab99d);
if(r1(R+518)){{goto L6ab9e4;}}
}
B6ab99f:L6ab99f:{c.instructions+=5;NFSU2_TR(0x6ab99f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ab9a2:{NFSU2_TR(0x6ab9a2);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6ab9a5:{NFSU2_TR(0x6ab9a5);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
w4(R+8,u32(u32(r4(R+8))+u32(r4(U+8))));
}
B6ab9a8:{NFSU2_TR(0x6ab9a8);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(U+0))<(u32(0x4ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6ab9ab:{NFSU2_TR(0x6ab9ab);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6ab9e4;}}
}
B6ab9ad:L6ab9ad:{c.instructions+=2;NFSU2_TR(0x6ab9ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6ab9b0:{NFSU2_TR(0x6ab9b0);
{goto L6ab9cb;}
}
B6ab9b2:L6ab9b2:{c.instructions+=6;NFSU2_TR(0x6ab9b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6ab9b5:{NFSU2_TR(0x6ab9b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ab9b8:{NFSU2_TR(0x6ab9b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ab9bb:{NFSU2_TR(0x6ab9bb);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6ab9be:{NFSU2_TR(0x6ab9be);
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
B6ab9c0:{NFSU2_TR(0x6ab9c0);
if(r1(R+518)){{goto L6ab9cb;}}
}
B6ab9c2:L6ab9c2:{c.instructions+=3;NFSU2_TR(0x6ab9c2);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ab9c4:{NFSU2_TR(0x6ab9c4);
__builtin_memmove((R+4),(R+0),4);
}
B6ab9c6:{NFSU2_TR(0x6ab9c6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ab9cbull));
TAIL_STATIC(0x6739efu,673);
}
B6ab9cb:L6ab9cb:{c.instructions+=2;NFSU2_TR(0x6ab9cb);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+24))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ab9ce:{NFSU2_TR(0x6ab9ce);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ab9b2u);}goto L6ab9b2;}}
}
B6ab9d0:L6ab9d0:{c.instructions+=2;NFSU2_TR(0x6ab9d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6ab9d3:{NFSU2_TR(0x6ab9d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ab9d6:L6ab9d6:{c.instructions+=2;NFSU2_TR(0x6ab9d6);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6ab9d9:{NFSU2_TR(0x6ab9d9);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ab4dau);}goto L6ab4da;}}
}
B6ab9df:L6ab9df:{c.instructions+=1;NFSU2_TR(0x6ab9df);
{goto L6abcd2;}
}
B6ab9e4:L6ab9e4:{c.instructions+=2;NFSU2_TR(0x6ab9e4);
u8 U[4];
w4(U+0,u32(0x74ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ab9e6:{NFSU2_TR(0x6ab9e6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ab9ebull));
TAIL_STATIC(0x699317u,699);
}
B6ab9eb:L6ab9eb:{c.instructions+=2;NFSU2_TR(0x6ab9eb);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ab9ed:{NFSU2_TR(0x6ab9ed);
if(r1(R+518)){{goto L6ab9fb;}}
}
B6ab9ef:L6ab9ef:{c.instructions+=2;NFSU2_TR(0x6ab9ef);
__builtin_memmove((R+4),(R+0),4);
}
B6ab9f1:{NFSU2_TR(0x6ab9f1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ab9f6ull));
TAIL_STATIC(0x698e7du,698);
}
B6ab9f6:L6ab9f6:{c.instructions+=2;NFSU2_TR(0x6ab9f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ab9f9:{NFSU2_TR(0x6ab9f9);
{goto L6ab9ff;}
}
B6ab9fb:L6ab9fb:{c.instructions+=1;NFSU2_TR(0x6ab9fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6ab9ff:L6ab9ff:{c.instructions+=2;NFSU2_TR(0x6ab9ff);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6aba03:{NFSU2_TR(0x6aba03);
if(r1(R+518)){{goto L6abcfb;}}
}
B6aba09:L6aba09:{c.instructions+=11;NFSU2_TR(0x6aba09);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6aba0c:{NFSU2_TR(0x6aba0c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6aba0e:{NFSU2_TR(0x6aba0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))^u32(r4(U+4))));
}
B6aba11:{NFSU2_TR(0x6aba11);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6aba14:{NFSU2_TR(0x6aba14);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6aba16:{NFSU2_TR(0x6aba16);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6aba19:{NFSU2_TR(0x6aba19);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffull))));
}
B6aba1e:{NFSU2_TR(0x6aba1e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6aba21:{NFSU2_TR(0x6aba21);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
w4(R+0,u32(u32(r4(R+0))^u32(r4(U+0))));
}
B6aba23:{NFSU2_TR(0x6aba23);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6aba24:{NFSU2_TR(0x6aba24);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6aba29ull));
TAIL_STATIC(0x699362u,699);
}
B6aba29:L6aba29:{c.instructions+=3;NFSU2_TR(0x6aba29);
__builtin_memmove((R+24),(R+0),4);
}
B6aba2b:{NFSU2_TR(0x6aba2b);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6aba2d:{NFSU2_TR(0x6aba2d);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6abd02;}}
}
B6aba33:L6aba33:{c.instructions+=3;NFSU2_TR(0x6aba33);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6aba36:{NFSU2_TR(0x6aba36);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6aba37:{NFSU2_TR(0x6aba37);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6aba3cull));
TAIL_STATIC(0x698eb3u,698);
}
B6aba3c:L6aba3c:{c.instructions+=3;NFSU2_TR(0x6aba3c);
__builtin_memmove((R+24),(R+0),4);
}
B6aba3e:{NFSU2_TR(0x6aba3e);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6aba40:{NFSU2_TR(0x6aba40);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6abd02;}}
}
B6aba46:L6aba46:{c.instructions+=3;NFSU2_TR(0x6aba46);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6aba49:{NFSU2_TR(0x6aba49);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6aba4c:{NFSU2_TR(0x6aba4c);
if(r1(R+518)){{goto L6aba8d;}}
}
B6aba4e:L6aba4e:{c.instructions+=4;NFSU2_TR(0x6aba4e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6aba51:{NFSU2_TR(0x6aba51);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6aba53:{NFSU2_TR(0x6aba53);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+24))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6aba56:{NFSU2_TR(0x6aba56);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6aba7d;}}
}
B6aba58:L6aba58:{c.instructions+=5;NFSU2_TR(0x6aba58);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6aba5b:{NFSU2_TR(0x6aba5b);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6aba5e:{NFSU2_TR(0x6aba5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6aba61:{NFSU2_TR(0x6aba61);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+28))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6aba64:{NFSU2_TR(0x6aba64);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6aba77;}}
}
B6aba66:L6aba66:{c.instructions+=3;NFSU2_TR(0x6aba66);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6aba69:{NFSU2_TR(0x6aba69);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+28))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6aba6c:{NFSU2_TR(0x6aba6c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6aba77;}}
}
B6aba6e:L6aba6e:{c.instructions+=3;NFSU2_TR(0x6aba6e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6aba71:{NFSU2_TR(0x6aba71);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6aba74:{NFSU2_TR(0x6aba74);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+28))));
s4(u32(r4(U+0)),r4(U+4));
}
B6aba77:L6aba77:{c.instructions+=3;NFSU2_TR(0x6aba77);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6aba78:{NFSU2_TR(0x6aba78);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+24))<(r4(U+8))));
}
B6aba7b:{NFSU2_TR(0x6aba7b);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6aba58u);}goto L6aba58;}}
}
B6aba7d:L6aba7d:{c.instructions+=6;NFSU2_TR(0x6aba7d);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6aba80:{NFSU2_TR(0x6aba80);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6aba83:{NFSU2_TR(0x6aba83);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6aba86:{NFSU2_TR(0x6aba86);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6aba88:{NFSU2_TR(0x6aba88);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))+u32(r4(R+8))));
s4(u32(r4(R+0)),r4(U+0));
}
B6aba8a:{NFSU2_TR(0x6aba8a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0x0ull))));
s4(u32(r4(R+4)),r4(U+0));
}
B6aba8d:L6aba8d:{c.instructions+=8;NFSU2_TR(0x6aba8d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6aba90:{NFSU2_TR(0x6aba90);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6aba93:{NFSU2_TR(0x6aba93);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6aba96:{NFSU2_TR(0x6aba96);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6aba99:{NFSU2_TR(0x6aba99);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6aba9c:{NFSU2_TR(0x6aba9c);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6aba9f:{NFSU2_TR(0x6aba9f);
__builtin_memmove((R+8),(R+4),4);
}
B6abaa1:{NFSU2_TR(0x6abaa1);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6abaa4:L6abaa4:{c.instructions+=1;NFSU2_TR(0x6abaa4);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6abaa6;}}
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
__builtin_memmove((U+16),gp(u32(r4(U+0))),4);
__builtin_memmove((U+36),(U+16),4);
s4(u32(r4(U+20)),r4(U+36));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6abaa4u);}goto L6abaa4;}
}
B6abaa6:L6abaa6:{c.instructions+=3;NFSU2_TR(0x6abaa6);
__builtin_memmove((R+4),(R+8),4);
}
B6abaa8:{NFSU2_TR(0x6abaa8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6abaab:{NFSU2_TR(0x6abaab);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6abaae:L6abaae:{c.instructions+=1;NFSU2_TR(0x6abaae);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6abab0;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+17),(R+28),4);
w4(U+21,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+25,u32(r1(R+522)));
w4(U+29,u32(u32(u32(0x2ull))*u32(r4(U+25))));
w4(R+28,u32(u32(r4(U+21))-u32(r4(U+29))));
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+24))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),gp(u32(r4(U+0))),1);
__builtin_memmove((U+33),(U+16),1);
s1(u32(r4(U+17)),r1(U+33));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6abaaeu);}goto L6abaae;}
}
B6abab0:L6abab0:{c.instructions+=9;NFSU2_TR(0x6abab0);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6abab3:{NFSU2_TR(0x6abab3);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6abab6:{NFSU2_TR(0x6abab6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6abab9:{NFSU2_TR(0x6abab9);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ababc:{NFSU2_TR(0x6ababc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6ababf:{NFSU2_TR(0x6ababf);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6abac2:{NFSU2_TR(0x6abac2);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B6abac5:{NFSU2_TR(0x6abac5);
__builtin_memmove((R+8),(R+4),4);
}
B6abac7:{NFSU2_TR(0x6abac7);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6abaca:L6abaca:{c.instructions+=1;NFSU2_TR(0x6abaca);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6abacc;}}
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
__builtin_memmove((U+16),gp(u32(r4(U+0))),4);
__builtin_memmove((U+36),(U+16),4);
s4(u32(r4(U+20)),r4(U+36));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6abacau);}goto L6abaca;}
}
B6abacc:L6abacc:{c.instructions+=3;NFSU2_TR(0x6abacc);
__builtin_memmove((R+4),(R+8),4);
}
B6abace:{NFSU2_TR(0x6abace);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6abad1:{NFSU2_TR(0x6abad1);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6abad4:L6abad4:{c.instructions+=1;NFSU2_TR(0x6abad4);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6abad6;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+17),(R+28),4);
w4(U+21,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+25,u32(r1(R+522)));
w4(U+29,u32(u32(u32(0x2ull))*u32(r4(U+25))));
w4(R+28,u32(u32(r4(U+21))-u32(r4(U+29))));
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+24))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),gp(u32(r4(U+0))),1);
__builtin_memmove((U+33),(U+16),1);
s1(u32(r4(U+17)),r1(U+33));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6abad4u);}goto L6abad4;}
}
B6abad6:L6abad6:{c.instructions+=5;NFSU2_TR(0x6abad6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6abad9:{NFSU2_TR(0x6abad9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6abadb:{NFSU2_TR(0x6abadb);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xf0000000ull))));
}
B6abae1:{NFSU2_TR(0x6abae1);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x10000000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6abae7:{NFSU2_TR(0x6abae7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6abaf3;}}
}
B6abae9:L6abae9:{c.instructions+=3;NFSU2_TR(0x6abae9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6abaec:{NFSU2_TR(0x6abaec);
__builtin_memmove((R+4),(R+8),4);
}
B6abaee:{NFSU2_TR(0x6abaee);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6abaf1:L6abaf1:{c.instructions+=1;NFSU2_TR(0x6abaf1);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6abaf3;}}
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
__builtin_memmove((U+16),gp(u32(r4(U+0))),4);
__builtin_memmove((U+36),(U+16),4);
s4(u32(r4(U+20)),r4(U+36));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6abaf1u);}goto L6abaf1;}
}
B6abaf3:L6abaf3:{c.instructions+=5;NFSU2_TR(0x6abaf3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6abaf6:{NFSU2_TR(0x6abaf6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6abaf8:{NFSU2_TR(0x6abaf8);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xf0000000ull))));
}
B6abafe:{NFSU2_TR(0x6abafe);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x20000000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6abb04:{NFSU2_TR(0x6abb04);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6abb47;}}
}
B6abb06:L6abb06:{c.instructions+=3;NFSU2_TR(0x6abb06);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6abb0a:{NFSU2_TR(0x6abb0a);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6abb0d:{NFSU2_TR(0x6abb0d);
if(r1(R+518)){{goto L6abb15;}}
}
B6abb0f:L6abb0f:{c.instructions+=1;NFSU2_TR(0x6abb0f);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff78ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6abb15:L6abb15:{c.instructions+=6;NFSU2_TR(0x6abb15);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6abb18:{NFSU2_TR(0x6abb18);
__builtin_memmove((R+4),(R+8),4);
}
B6abb1a:{NFSU2_TR(0x6abb1a);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6abb1d:{NFSU2_TR(0x6abb1d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6abb20:{NFSU2_TR(0x6abb20);
__builtin_memmove((R+8),(R+4),4);
}
B6abb22:{NFSU2_TR(0x6abb22);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6abb25:L6abb25:{c.instructions+=1;NFSU2_TR(0x6abb25);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6abb27;}}
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
__builtin_memmove((U+16),gp(u32(r4(U+0))),4);
__builtin_memmove((U+36),(U+16),4);
s4(u32(r4(U+20)),r4(U+36));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6abb25u);}goto L6abb25;}
}
B6abb27:L6abb27:{c.instructions+=3;NFSU2_TR(0x6abb27);
__builtin_memmove((R+4),(R+8),4);
}
B6abb29:{NFSU2_TR(0x6abb29);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6abb2c:{NFSU2_TR(0x6abb2c);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6abb30:L6abb30:{c.instructions+=1;NFSU2_TR(0x6abb30);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6abb32;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+17),(R+28),4);
w4(U+21,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+25,u32(r1(R+522)));
w4(U+29,u32(u32(u32(0x2ull))*u32(r4(U+25))));
w4(R+28,u32(u32(r4(U+21))-u32(r4(U+29))));
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+24))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),gp(u32(r4(U+0))),1);
__builtin_memmove((U+33),(U+16),1);
s1(u32(r4(U+17)),r1(U+33));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6abb30u);}goto L6abb30;}
}
B6abb32:L6abb32:{c.instructions+=2;NFSU2_TR(0x6abb32);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff8cull))));
__builtin_memmove((R+24),(U+0),4);
}
B6abb35:{NFSU2_TR(0x6abb35);
if(r1(R+518)){{goto L6abb3d;}}
}
B6abb37:L6abb37:{c.instructions+=1;NFSU2_TR(0x6abb37);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff68ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6abb3d:L6abb3d:{c.instructions+=4;NFSU2_TR(0x6abb3d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6abb40:{NFSU2_TR(0x6abb40);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6abb43:{NFSU2_TR(0x6abb43);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+4))));
}
B6abb45:{NFSU2_TR(0x6abb45);
{goto L6abb98;}
}
B6abb47:L6abb47:{c.instructions+=2;NFSU2_TR(0x6abb47);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x30000000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6abb4d:{NFSU2_TR(0x6abb4d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6abba6;}}
}
B6abb4f:L6abb4f:{c.instructions+=6;NFSU2_TR(0x6abb4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6abb52:{NFSU2_TR(0x6abb52);
__builtin_memmove((R+4),(R+8),4);
}
B6abb54:{NFSU2_TR(0x6abb54);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6abb57:{NFSU2_TR(0x6abb57);
__builtin_memmove((R+8),(R+4),4);
}
B6abb59:{NFSU2_TR(0x6abb59);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6abb5c:{NFSU2_TR(0x6abb5c);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6abb5f:L6abb5f:{c.instructions+=1;NFSU2_TR(0x6abb5f);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6abb61;}}
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
__builtin_memmove((U+16),gp(u32(r4(U+0))),4);
__builtin_memmove((U+36),(U+16),4);
s4(u32(r4(U+20)),r4(U+36));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6abb5fu);}goto L6abb5f;}
}
B6abb61:L6abb61:{c.instructions+=2;NFSU2_TR(0x6abb61);
__builtin_memmove((R+4),(R+8),4);
}
B6abb63:{NFSU2_TR(0x6abb63);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6abb66:L6abb66:{c.instructions+=1;NFSU2_TR(0x6abb66);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6abb68;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+17),(R+28),4);
w4(U+21,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+25,u32(r1(R+522)));
w4(U+29,u32(u32(u32(0x2ull))*u32(r4(U+25))));
w4(R+28,u32(u32(r4(U+21))-u32(r4(U+29))));
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+24))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),gp(u32(r4(U+0))),1);
__builtin_memmove((U+33),(U+16),1);
s1(u32(r4(U+17)),r1(U+33));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6abb66u);}goto L6abb66;}
}
B6abb68:L6abb68:{c.instructions+=7;NFSU2_TR(0x6abb68);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6abb6b:{NFSU2_TR(0x6abb6b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6abb6e:{NFSU2_TR(0x6abb6e);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6abb71:{NFSU2_TR(0x6abb71);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+4))));
}
B6abb73:{NFSU2_TR(0x6abb73);
__builtin_memmove((R+8),(R+4),4);
}
B6abb75:{NFSU2_TR(0x6abb75);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6abb78:{NFSU2_TR(0x6abb78);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff8cull))));
__builtin_memmove((R+24),(U+0),4);
}
B6abb7b:L6abb7b:{c.instructions+=1;NFSU2_TR(0x6abb7b);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6abb7d;}}
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
__builtin_memmove((U+16),gp(u32(r4(U+0))),4);
__builtin_memmove((U+36),(U+16),4);
s4(u32(r4(U+20)),r4(U+36));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6abb7bu);}goto L6abb7b;}
}
B6abb7d:L6abb7d:{c.instructions+=3;NFSU2_TR(0x6abb7d);
__builtin_memmove((R+4),(R+8),4);
}
B6abb7f:{NFSU2_TR(0x6abb7f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6abb82:{NFSU2_TR(0x6abb82);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6abb85:L6abb85:{c.instructions+=1;NFSU2_TR(0x6abb85);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6abb87;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+17),(R+28),4);
w4(U+21,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+25,u32(r1(R+522)));
w4(U+29,u32(u32(u32(0x2ull))*u32(r4(U+25))));
w4(R+28,u32(u32(r4(U+21))-u32(r4(U+29))));
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+24))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),gp(u32(r4(U+0))),1);
__builtin_memmove((U+33),(U+16),1);
s1(u32(r4(U+17)),r1(U+33));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6abb85u);}goto L6abb85;}
}
B6abb87:L6abb87:{c.instructions+=5;NFSU2_TR(0x6abb87);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6abb8a:{NFSU2_TR(0x6abb8a);
__builtin_memmove((R+4),(R+8),4);
}
B6abb8c:{NFSU2_TR(0x6abb8c);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6abb8f:{NFSU2_TR(0x6abb8f);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff58ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6abb95:{NFSU2_TR(0x6abb95);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B6abb98:L6abb98:{c.instructions+=2;NFSU2_TR(0x6abb98);
__builtin_memmove((R+0),(R+4),4);
}
B6abb9a:{NFSU2_TR(0x6abb9a);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6abb9d:L6abb9d:{c.instructions+=1;NFSU2_TR(0x6abb9d);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6abb9f;}}
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
__builtin_memmove((U+16),gp(u32(r4(U+0))),4);
__builtin_memmove((U+36),(U+16),4);
s4(u32(r4(U+20)),r4(U+36));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6abb9du);}goto L6abb9d;}
}
B6abb9f:L6abb9f:{c.instructions+=2;NFSU2_TR(0x6abb9f);
__builtin_memmove((R+4),(R+0),4);
}
B6abba1:{NFSU2_TR(0x6abba1);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6abba4:L6abba4:{c.instructions+=1;NFSU2_TR(0x6abba4);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6abba6;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+17),(R+28),4);
w4(U+21,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+25,u32(r1(R+522)));
w4(U+29,u32(u32(u32(0x2ull))*u32(r4(U+25))));
w4(R+28,u32(u32(r4(U+21))-u32(r4(U+29))));
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+24))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),gp(u32(r4(U+0))),1);
__builtin_memmove((U+33),(U+16),1);
s1(u32(r4(U+17)),r1(U+33));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6abba4u);}goto L6abba4;}
}
B6abba6:L6abba6:{c.instructions+=15;NFSU2_TR(0x6abba6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6abba9:{NFSU2_TR(0x6abba9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6abbab:{NFSU2_TR(0x6abbab);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6abbae:{NFSU2_TR(0x6abbae);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfffffull))));
}
B6abbb4:{NFSU2_TR(0x6abbb4);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6abbb6:{NFSU2_TR(0x6abbb6);
u8 U[56];
w8(U+0,u64(r4(R+4)));
w8(U+8,u64(r4(R+8)));
w8(U+16,shl<u64>(r8(U+8),u64(u32(0x20ull))));
w8(U+24,u64(r4(R+0)));
w8(U+32,u64(u64(r8(U+16))|u64(r8(U+24))));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x6abbb6);w8(U+40,u64(u64(r8(U+32))/d_));}
w4(R+0,u32(r8(U+40)));
{u64 d_=u64(r8(U+0));if(__builtin_expect(!d_,0))NFSU2_FAULT("integer division by zero",0x6abbb6);w8(U+48,u64(u64(r8(U+32))%d_));}
w4(R+8,u32(r8(U+48)));
}
B6abbb8:{NFSU2_TR(0x6abbb8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6abbbb:{NFSU2_TR(0x6abbbb);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6abbbd:{NFSU2_TR(0x6abbbd);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6abbc0:{NFSU2_TR(0x6abbc0);
__builtin_memmove((R+4),(R+12),4);
}
B6abbc2:{NFSU2_TR(0x6abbc2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6abbc5:{NFSU2_TR(0x6abbc5);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff48ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6abbcb:{NFSU2_TR(0x6abbcb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6abbcc:{NFSU2_TR(0x6abbcc);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6abbcf:{NFSU2_TR(0x6abbcf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6abbd4ull));
TAIL_STATIC(0x69dfadu,69d);
}
B6abbd4:L6abbd4:{c.instructions+=3;NFSU2_TR(0x6abbd4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6abbd8:{NFSU2_TR(0x6abbd8);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6abbdc:{NFSU2_TR(0x6abbdc);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6abc0a;}}
}
B6abbde:L6abbde:{c.instructions+=11;NFSU2_TR(0x6abbde);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6abbe1:{NFSU2_TR(0x6abbe1);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6abbe3:{NFSU2_TR(0x6abbe3);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6abbe6:{NFSU2_TR(0x6abbe6);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff48ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6abbec:{NFSU2_TR(0x6abbec);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6abbed:{NFSU2_TR(0x6abbed);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6abbf0:{NFSU2_TR(0x6abbf0);
u8 U[32];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
w8(U+8,u64(s64(s32(r4(R+0)))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w8(U+16,u64(s64(s32(r4(U+4)))));
w8(U+24,u64(u64(r8(U+8))*u64(r8(U+16))));
w4(R+0,u32(r8(U+24)));
}
B6abbf4:{NFSU2_TR(0x6abbf4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6abbf7:{NFSU2_TR(0x6abbf7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6abbf8:{NFSU2_TR(0x6abbf8);
__builtin_memmove((R+4),(R+12),4);
}
B6abbfa:{NFSU2_TR(0x6abbfa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6abbffull));
TAIL_STATIC(0x69dfadu,69d);
}
B6abbff:L6abbff:{c.instructions+=4;NFSU2_TR(0x6abbff);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6abc02:{NFSU2_TR(0x6abc02);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6abc05:{NFSU2_TR(0x6abc05);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6abc08:{NFSU2_TR(0x6abc08);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6abbdeu);}goto L6abbde;}}
}
B6abc0a:L6abc0a:{c.instructions+=3;NFSU2_TR(0x6abc0a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6abc0d:{NFSU2_TR(0x6abc0d);
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
B6abc0f:{NFSU2_TR(0x6abc0f);
if(r1(R+518)){{goto L6abc18;}}
}
B6abc11:L6abc11:{c.instructions+=2;NFSU2_TR(0x6abc11);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6abc13:{NFSU2_TR(0x6abc13);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6abc18ull));
TAIL_STATIC(0x6739efu,673);
}
B6abc18:L6abc18:{c.instructions+=12;NFSU2_TR(0x6abc18);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6abc1b:{NFSU2_TR(0x6abc1b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6abc1e:{NFSU2_TR(0x6abc1e);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6abc21:{NFSU2_TR(0x6abc21);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+28),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6abc24:{NFSU2_TR(0x6abc24);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6abc27:{NFSU2_TR(0x6abc27);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6abc29:{NFSU2_TR(0x6abc29);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B6abc2b:{NFSU2_TR(0x6abc2b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6abc2e:{NFSU2_TR(0x6abc2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6abc31:{NFSU2_TR(0x6abc31);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6abc34:{NFSU2_TR(0x6abc34);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6abc37:{NFSU2_TR(0x6abc37);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6abcbd;}}
}
B6abc3d:L6abc3d:{c.instructions+=6;NFSU2_TR(0x6abc3d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B6abc40:{NFSU2_TR(0x6abc40);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6abc43:{NFSU2_TR(0x6abc43);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6abc46:{NFSU2_TR(0x6abc46);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6abc47:{NFSU2_TR(0x6abc47);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6abc4a:{NFSU2_TR(0x6abc4a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6abc4full));
TAIL_STATIC(0x575620u,575);
}
B6abc4f:L6abc4f:{c.instructions+=4;NFSU2_TR(0x6abc4f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6abc51:{NFSU2_TR(0x6abc51);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6abc52:{NFSU2_TR(0x6abc52);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6abc55:{NFSU2_TR(0x6abc55);
if(r1(R+518)){{goto L6abcfb;}}
}
B6abc5b:L6abc5b:{c.instructions+=7;NFSU2_TR(0x6abc5b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6abc5e:{NFSU2_TR(0x6abc5e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6abc61:{NFSU2_TR(0x6abc61);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6abc64:{NFSU2_TR(0x6abc64);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6abc67:{NFSU2_TR(0x6abc67);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B6abc6a:{NFSU2_TR(0x6abc6a);
__builtin_memmove((R+0),(R+4),4);
}
B6abc6c:{NFSU2_TR(0x6abc6c);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6abc6f:L6abc6f:{c.instructions+=1;NFSU2_TR(0x6abc6f);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6abc71;}}
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
__builtin_memmove((U+16),gp(u32(r4(U+0))),4);
__builtin_memmove((U+36),(U+16),4);
s4(u32(r4(U+20)),r4(U+36));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6abc6fu);}goto L6abc6f;}
}
B6abc71:L6abc71:{c.instructions+=2;NFSU2_TR(0x6abc71);
__builtin_memmove((R+4),(R+0),4);
}
B6abc73:{NFSU2_TR(0x6abc73);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6abc76:L6abc76:{c.instructions+=1;NFSU2_TR(0x6abc76);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6abc78;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+17),(R+28),4);
w4(U+21,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+25,u32(r1(R+522)));
w4(U+29,u32(u32(u32(0x2ull))*u32(r4(U+25))));
w4(R+28,u32(u32(r4(U+21))-u32(r4(U+29))));
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+24))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),gp(u32(r4(U+0))),1);
__builtin_memmove((U+33),(U+16),1);
s1(u32(r4(U+17)),r1(U+33));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6abc76u);}goto L6abc76;}
}
B6abc78:L6abc78:{c.instructions+=13;NFSU2_TR(0x6abc78);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6abc7b:{NFSU2_TR(0x6abc7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6abc7e:{NFSU2_TR(0x6abc7e);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+4))));
}
B6abc80:{NFSU2_TR(0x6abc80);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B6abc83:{NFSU2_TR(0x6abc83);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6abc84:{NFSU2_TR(0x6abc84);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6abc87:{NFSU2_TR(0x6abc87);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B6abc89:{NFSU2_TR(0x6abc89);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6abc8a:{NFSU2_TR(0x6abc8a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6abc8d:{NFSU2_TR(0x6abc8d);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B6abc8f:{NFSU2_TR(0x6abc8f);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6abc92:{NFSU2_TR(0x6abc92);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6abc93:{NFSU2_TR(0x6abc93);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6abc98ull));
TAIL_STATIC(0x75cfd0u,75c);
}
B6abc98:L6abc98:{c.instructions+=7;NFSU2_TR(0x6abc98);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6abc9b:{NFSU2_TR(0x6abc9b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6abc9e:{NFSU2_TR(0x6abc9e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+28,u32(u32(r4(R+28))+u32(r4(U+4))));
}
B6abca1:{NFSU2_TR(0x6abca1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6abca4:{NFSU2_TR(0x6abca4);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6abca7:{NFSU2_TR(0x6abca7);
__builtin_memmove((R+0),(R+4),4);
}
B6abca9:{NFSU2_TR(0x6abca9);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6abcac:L6abcac:{c.instructions+=1;NFSU2_TR(0x6abcac);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6abcae;}}
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
__builtin_memmove((U+16),gp(u32(r4(U+0))),4);
__builtin_memmove((U+36),(U+16),4);
s4(u32(r4(U+20)),r4(U+36));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6abcacu);}goto L6abcac;}
}
B6abcae:L6abcae:{c.instructions+=2;NFSU2_TR(0x6abcae);
__builtin_memmove((R+4),(R+0),4);
}
B6abcb0:{NFSU2_TR(0x6abcb0);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6abcb3:L6abcb3:{c.instructions+=1;NFSU2_TR(0x6abcb3);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6abcb5;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+17),(R+28),4);
w4(U+21,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+25,u32(r1(R+522)));
w4(U+29,u32(u32(u32(0x2ull))*u32(r4(U+25))));
w4(R+28,u32(u32(r4(U+21))-u32(r4(U+29))));
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+24))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+24,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),gp(u32(r4(U+0))),1);
__builtin_memmove((U+33),(U+16),1);
s1(u32(r4(U+17)),r1(U+33));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6abcb3u);}goto L6abcb3;}
}
B6abcb5:L6abcb5:{c.instructions+=1;NFSU2_TR(0x6abcb5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6abcbaull));
TAIL_STATIC(0x575630u,575);
}
B6abcba:L6abcba:{c.instructions+=1;NFSU2_TR(0x6abcba);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B6abcbd:L6abcbd:{c.instructions+=2;NFSU2_TR(0x6abcbd);
__builtin_memmove((R+4),(R+12),4);
}
B6abcbf:{NFSU2_TR(0x6abcbf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6abcc4ull));
TAIL_STATIC(0x69e219u,69e);
}
B6abcc4:L6abcc4:{c.instructions+=4;NFSU2_TR(0x6abcc4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6abcc7:{NFSU2_TR(0x6abcc7);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B6abcc8:{NFSU2_TR(0x6abcc8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff9cull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6abccf:{NFSU2_TR(0x6abccf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6abcd2:L6abcd2:{c.instructions+=4;NFSU2_TR(0x6abcd2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6abcd5:{NFSU2_TR(0x6abcd5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6abcd8:{NFSU2_TR(0x6abcd8);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6abcdb:{NFSU2_TR(0x6abcdb);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ab3a5u);}goto L6ab3a5;}}
}
B6abce1:L6abce1:{c.instructions+=4;NFSU2_TR(0x6abce1);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6abce3:{NFSU2_TR(0x6abce3);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6abce6:{NFSU2_TR(0x6abce6);
__builtin_memmove((R+0),(R+518),1);
}
B6abce9:{NFSU2_TR(0x6abce9);
__builtin_memmove((R+24),(R+0),4);
}
B6abceb:L6abceb:{c.instructions+=2;NFSU2_TR(0x6abceb);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6abcee:{NFSU2_TR(0x6abcee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6abcf3ull));
TAIL_STATIC(0x575630u,575);
}
B6abcf3:L6abcf3:{c.instructions+=7;NFSU2_TR(0x6abcf3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6abcf4:{NFSU2_TR(0x6abcf4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6abcf5:{NFSU2_TR(0x6abcf5);
__builtin_memmove((R+0),(R+24),4);
}
B6abcf7:{NFSU2_TR(0x6abcf7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6abcf8:{NFSU2_TR(0x6abcf8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6abcf9:{NFSU2_TR(0x6abcf9);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6abcfa:{NFSU2_TR(0x6abcfa);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6abcfb:L6abcfb:{c.instructions+=2;NFSU2_TR(0x6abcfb);
w4(R+24,u32(0x8007000eull));
}
B6abd00:{NFSU2_TR(0x6abd00);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6abcebu);}goto L6abceb;}
}
B6abd02:L6abd02:{c.instructions+=2;NFSU2_TR(0x6abd02);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6abd05:{NFSU2_TR(0x6abd05);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ab445u);}goto L6ab445;}
}
B6abd0a:L6abd0a:{c.instructions+=12;NFSU2_TR(0x6abd0a);
__builtin_memmove((R+28),(R+28),4);
}
B6abd0c:{NFSU2_TR(0x6abd0c);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6abd0d:{NFSU2_TR(0x6abd0d);
__builtin_memmove((R+20),(R+16),4);
}
B6abd0f:{NFSU2_TR(0x6abd0f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x64ull))));
}
B6abd12:{NFSU2_TR(0x6abd12);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6abd13:{NFSU2_TR(0x6abd13);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6abd14:{NFSU2_TR(0x6abd14);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6abd16:{NFSU2_TR(0x6abd16);
__builtin_memmove((R+12),(R+4),4);
}
B6abd18:{NFSU2_TR(0x6abd18);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+24))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6abd1b:{NFSU2_TR(0x6abd1b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6abd1c:{NFSU2_TR(0x6abd1c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6abd1f:{NFSU2_TR(0x6abd1f);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6abd42;}}
}
B6abd21:L6abd21:{c.instructions+=2;NFSU2_TR(0x6abd21);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6abd24:{NFSU2_TR(0x6abd24);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6abd27:L6abd27:{c.instructions+=4;NFSU2_TR(0x6abd27);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6abd29:{NFSU2_TR(0x6abd29);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6abd2c:{NFSU2_TR(0x6abd2c);
u8 U[1];
w1(U+0,u8(u32(r1(R+9))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6abd2f:{NFSU2_TR(0x6abd2f);
if(r1(R+518)){{goto L6abd39;}}
}
B6abd31:L6abd31:{c.instructions+=2;NFSU2_TR(0x6abd31);
u8 U[1];
w1(U+0,u8(u32(r1(R+9))&u32(u8(0xcull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6abd34:{NFSU2_TR(0x6abd34);
if(r1(R+518)){{goto L6abd39;}}
}
B6abd36:L6abd36:{c.instructions+=1;NFSU2_TR(0x6abd36);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+24,u32(u32(r4(R+24))+u32(r4(U+4))));
}
B6abd39:L6abd39:{c.instructions+=3;NFSU2_TR(0x6abd39);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B6abd3c:{NFSU2_TR(0x6abd3c);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
}
B6abd3d:{NFSU2_TR(0x6abd3d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6abd27u);}goto L6abd27;}}
}
B6abd3f:L6abd3f:{c.instructions+=1;NFSU2_TR(0x6abd3f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6abd42:L6abd42:{c.instructions+=7;NFSU2_TR(0x6abd42);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6abd45:{NFSU2_TR(0x6abd45);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6abd48:{NFSU2_TR(0x6abd48);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6abd4b:{NFSU2_TR(0x6abd4b);
__builtin_memmove((R+28),(R+0),4);
}
B6abd4d:{NFSU2_TR(0x6abd4d);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+28,shl<u32>(r4(R+28),u64(r4(U+0))));
}
B6abd50:{NFSU2_TR(0x6abd50);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6abd51:{NFSU2_TR(0x6abd51);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6abd56ull));
TAIL_STATIC(0x575620u,575);
}
B6abd56:L6abd56:{c.instructions+=4;NFSU2_TR(0x6abd56);
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
B6abd58:{NFSU2_TR(0x6abd58);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6abd59:{NFSU2_TR(0x6abd59);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6abd5c:{NFSU2_TR(0x6abd5c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6abd68;}}
}
B6abd5e:L6abd5e:{c.instructions+=2;NFSU2_TR(0x6abd5e);
w4(R+0,u32(0x8007000eull));
}
B6abd63:{NFSU2_TR(0x6abd63);
TAIL_STATIC(0x6ac25fu,6ac);
}
B6abd68:L6abd68:{c.instructions+=5;NFSU2_TR(0x6abd68);
__builtin_memmove((R+4),(R+28),4);
}
B6abd6a:{NFSU2_TR(0x6abd6a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6abd6d:{NFSU2_TR(0x6abd6d);
__builtin_memmove((R+8),(R+4),4);
}
B6abd6f:{NFSU2_TR(0x6abd6f);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6abd72:{NFSU2_TR(0x6abd72);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B6abd75:L6abd75:{c.instructions+=1;NFSU2_TR(0x6abd75);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L6abd77;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6abd75u);}goto L6abd75;}
}
B6abd77:L6abd77:{c.instructions+=2;NFSU2_TR(0x6abd77);
__builtin_memmove((R+4),(R+8),4);
}
B6abd79:{NFSU2_TR(0x6abd79);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6abd7c:L6abd7c:{c.instructions+=1;NFSU2_TR(0x6abd7c);
u8 U[18];
w1(U+17,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+17)){{goto L6abd7e;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x1ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x2ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),1);
s1(u32(r4(U+0)),r1(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6abd7cu);}goto L6abd7c;}
}
B6abd7e:L6abd7e:{c.instructions+=4;NFSU2_TR(0x6abd7e);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6abd80:{NFSU2_TR(0x6abd80);
__builtin_memmove((R+4),(R+12),4);
}
B6abd82:{NFSU2_TR(0x6abd82);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6abd85:{NFSU2_TR(0x6abd85);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6abd8aull));
TAIL_STATIC(0x69e7abu,69e);
}
B6abd8a:L6abd8a:{c.instructions+=3;NFSU2_TR(0x6abd8a);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+24))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6abd8d:{NFSU2_TR(0x6abd8d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6abd90:{NFSU2_TR(0x6abd90);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6abec2;}}
}
B6abd96:L6abd96:{c.instructions+=6;NFSU2_TR(0x6abd96);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6abd99:{NFSU2_TR(0x6abd99);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6abd9c:{NFSU2_TR(0x6abd9c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6abd9f:{NFSU2_TR(0x6abd9f);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6abda2:{NFSU2_TR(0x6abda2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6abda5:{NFSU2_TR(0x6abda5);
if(r1(R+518)){{goto L6abea8;}}
}
B6abdab:L6abdab:{c.instructions+=2;NFSU2_TR(0x6abdab);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe9ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0xcull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6abdaf:{NFSU2_TR(0x6abdaf);
if(r1(R+518)){{goto L6abea8;}}
}
B6abdb5:L6abdb5:{c.instructions+=3;NFSU2_TR(0x6abdb5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6abdb9:{NFSU2_TR(0x6abdb9);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6abdbd:{NFSU2_TR(0x6abdbd);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6abe28;}}
}
B6abdbf:L6abdbf:{c.instructions+=1;NFSU2_TR(0x6abdbf);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6abdc2:L6abdc2:{c.instructions+=3;NFSU2_TR(0x6abdc2);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6abdc4:{NFSU2_TR(0x6abdc4);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6abdc6:{NFSU2_TR(0x6abdc6);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6abe16;}}
}
B6abdc8:L6abdc8:{c.instructions+=1;NFSU2_TR(0x6abdc8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6abdcb:L6abdcb:{c.instructions+=3;NFSU2_TR(0x6abdcb);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6abdce:{NFSU2_TR(0x6abdce);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6abdd1:{NFSU2_TR(0x6abdd1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6abe0b;}}
}
B6abdd3:L6abdd3:{c.instructions+=2;NFSU2_TR(0x6abdd3);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6abdd7:{NFSU2_TR(0x6abdd7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6abe0b;}}
}
B6abdd9:L6abdd9:{c.instructions+=8;NFSU2_TR(0x6abdd9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6abddc:{NFSU2_TR(0x6abddc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))+u32(r4(U+4))));
}
B6abddf:{NFSU2_TR(0x6abddf);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6abde2:{NFSU2_TR(0x6abde2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6abde5:{NFSU2_TR(0x6abde5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6abde8:{NFSU2_TR(0x6abde8);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6abdeb:{NFSU2_TR(0x6abdeb);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6abdee:{NFSU2_TR(0x6abdee);
if(r1(R+518)){{goto L6abe08;}}
}
B6abdf0:L6abdf0:{c.instructions+=2;NFSU2_TR(0x6abdf0);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe9ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x8ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6abdf4:{NFSU2_TR(0x6abdf4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6abe13;}}
}
B6abdf6:L6abdf6:{c.instructions+=7;NFSU2_TR(0x6abdf6);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6abdf9:{NFSU2_TR(0x6abdf9);
{u32 ea_=u32(r4(R+4)+u32(32u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6abdfc:{NFSU2_TR(0x6abdfc);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6abdff:{NFSU2_TR(0x6abdff);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B6abe01:{NFSU2_TR(0x6abe01);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6abe03:{NFSU2_TR(0x6abe03);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6abe06:{NFSU2_TR(0x6abe06);
if(r1(R+514)){{goto L6abe13;}}
}
B6abe08:L6abe08:{c.instructions+=1;NFSU2_TR(0x6abe08);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6abe0b:L6abe0b:{c.instructions+=3;NFSU2_TR(0x6abe0b);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6abe0c:{NFSU2_TR(0x6abe0c);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B6abe0f:{NFSU2_TR(0x6abe0f);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6abdcbu);}goto L6abdcb;}}
}
B6abe11:L6abe11:{c.instructions+=1;NFSU2_TR(0x6abe11);
{goto L6abe16;}
}
B6abe13:L6abe13:{c.instructions+=1;NFSU2_TR(0x6abe13);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6abe16:L6abe16:{c.instructions+=3;NFSU2_TR(0x6abe16);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6abe19:{NFSU2_TR(0x6abe19);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6abe1b:{NFSU2_TR(0x6abe1b);
if(r1(R+518)){{goto L6abe28;}}
}
B6abe1d:L6abe1d:{c.instructions+=4;NFSU2_TR(0x6abe1d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6abe20:{NFSU2_TR(0x6abe20);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6abe23:{NFSU2_TR(0x6abe23);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B6abe26:{NFSU2_TR(0x6abe26);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6abdc2u);}goto L6abdc2;}}
}
B6abe28:L6abe28:{c.instructions+=2;NFSU2_TR(0x6abe28);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe9ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x8ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6abe2c:{NFSU2_TR(0x6abe2c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6abe7e;}}
}
B6abe2e:L6abe2e:{c.instructions+=3;NFSU2_TR(0x6abe2e);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6abe30:{NFSU2_TR(0x6abe30);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+8))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6abe33:{NFSU2_TR(0x6abe33);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6abea8;}}
}
B6abe35:L6abe35:{c.instructions+=4;NFSU2_TR(0x6abe35);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6abe38:{NFSU2_TR(0x6abe38);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6abe3b:{NFSU2_TR(0x6abe3b);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6abe3e:{NFSU2_TR(0x6abe3e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6abe76;}}
}
B6abe40:L6abe40:{c.instructions+=5;NFSU2_TR(0x6abe40);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6abe43:{NFSU2_TR(0x6abe43);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+4))));
s4(u32(r4(U+0)),r4(U+4));
}
B6abe46:{NFSU2_TR(0x6abe46);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6abe4a:{NFSU2_TR(0x6abe4a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6abe4d:{NFSU2_TR(0x6abe4d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6abe76;}}
}
B6abe4f:L6abe4f:{c.instructions+=6;NFSU2_TR(0x6abe4f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6abe52:{NFSU2_TR(0x6abe52);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6abe55:{NFSU2_TR(0x6abe55);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6abe58:{NFSU2_TR(0x6abe58);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6abe5b:{NFSU2_TR(0x6abe5b);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6abe5e:{NFSU2_TR(0x6abe5e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6abe64;}}
}
B6abe60:L6abe60:{c.instructions+=2;NFSU2_TR(0x6abe60);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6abe62:{NFSU2_TR(0x6abe62);
{goto L6abe76;}
}
B6abe64:L6abe64:{c.instructions+=5;NFSU2_TR(0x6abe64);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6abe67:{NFSU2_TR(0x6abe67);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6abe6a:{NFSU2_TR(0x6abe6a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6abe6c:{NFSU2_TR(0x6abe6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6abe6f:{NFSU2_TR(0x6abe6f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6abe76:L6abe76:{c.instructions+=3;NFSU2_TR(0x6abe76);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6abe77:{NFSU2_TR(0x6abe77);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+8))));
}
B6abe7a:{NFSU2_TR(0x6abe7a);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6abe35u);}goto L6abe35;}}
}
B6abe7c:L6abe7c:{c.instructions+=1;NFSU2_TR(0x6abe7c);
{goto L6abea8;}
}
B6abe7e:L6abe7e:{c.instructions+=3;NFSU2_TR(0x6abe7e);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6abe80:{NFSU2_TR(0x6abe80);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+4))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6abe83:{NFSU2_TR(0x6abe83);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6abea8;}}
}
B6abe85:L6abe85:{c.instructions+=4;NFSU2_TR(0x6abe85);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6abe88:{NFSU2_TR(0x6abe88);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6abe8b:{NFSU2_TR(0x6abe8b);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6abe8e:{NFSU2_TR(0x6abe8e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6abea2;}}
}
B6abe90:L6abe90:{c.instructions+=6;NFSU2_TR(0x6abe90);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6abe93:{NFSU2_TR(0x6abe93);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+8,u32(u32(r4(R+8))+u32(r4(U+4))));
}
B6abe96:{NFSU2_TR(0x6abe96);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6abe99:{NFSU2_TR(0x6abe99);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B6abe9c:{NFSU2_TR(0x6abe9c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6abe9f:{NFSU2_TR(0x6abe9f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6abea2:L6abea2:{c.instructions+=3;NFSU2_TR(0x6abea2);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6abea3:{NFSU2_TR(0x6abea3);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B6abea6:{NFSU2_TR(0x6abea6);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6abe85u);}goto L6abe85;}}
}
B6abea8:L6abea8:{c.instructions+=4;NFSU2_TR(0x6abea8);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6abea9:{NFSU2_TR(0x6abea9);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+24))<(r4(U+8))));
}
B6abeac:{NFSU2_TR(0x6abeac);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6abeaf:{NFSU2_TR(0x6abeaf);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6abd96u);}goto L6abd96;}}
}
B6abeb5:L6abeb5:{c.instructions+=2;NFSU2_TR(0x6abeb5);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6abeb9:{NFSU2_TR(0x6abeb9);
if(r1(R+518)){{goto L6abec2;}}
}
B6abebb:L6abebb:{c.instructions+=2;NFSU2_TR(0x6abebb);
__builtin_memmove((R+4),(R+12),4);
}
B6abebd:{NFSU2_TR(0x6abebd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6abec2ull));
TAIL_STATIC(0x69e7c4u,69e);
}
B6abec2:L6abec2:{c.instructions+=4;NFSU2_TR(0x6abec2);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6abec4:{NFSU2_TR(0x6abec4);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6abec6:{NFSU2_TR(0x6abec6);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+24))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6abec9:{NFSU2_TR(0x6abec9);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6abef7;}}
}
B6abecb:L6abecb:{c.instructions+=8;NFSU2_TR(0x6abecb);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6abece:{NFSU2_TR(0x6abece);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6abed1:{NFSU2_TR(0x6abed1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6abed4:{NFSU2_TR(0x6abed4);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6abed7:{NFSU2_TR(0x6abed7);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6abeda:{NFSU2_TR(0x6abeda);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6abedd:{NFSU2_TR(0x6abedd);
u8 U[1];
w1(U+0,u8(u32(r1(R+5))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6abee0:{NFSU2_TR(0x6abee0);
if(r1(R+518)){{goto L6abef1;}}
}
B6abee2:L6abee2:{c.instructions+=2;NFSU2_TR(0x6abee2);
u8 U[1];
w1(U+0,u8(u32(r1(R+5))&u32(u8(0xcull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6abee5:{NFSU2_TR(0x6abee5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6abef1;}}
}
B6abee7:L6abee7:{c.instructions+=3;NFSU2_TR(0x6abee7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))|u32(u32(0xffffffffull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6abeeb:{NFSU2_TR(0x6abeeb);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6abeee:{NFSU2_TR(0x6abeee);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6abef1:L6abef1:{c.instructions+=3;NFSU2_TR(0x6abef1);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6abef2:{NFSU2_TR(0x6abef2);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+8))));
}
B6abef5:{NFSU2_TR(0x6abef5);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6abecbu);}goto L6abecb;}}
}
B6abef7:L6abef7:{c.instructions+=3;NFSU2_TR(0x6abef7);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+24))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6abefa:{NFSU2_TR(0x6abefa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6abefd:{NFSU2_TR(0x6abefd);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6ac188u,6ac);}
}
B6abf03:L6abf03:{c.instructions+=6;NFSU2_TR(0x6abf03);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6abf06:{NFSU2_TR(0x6abf06);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6abf09:{NFSU2_TR(0x6abf09);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6abf0c:{NFSU2_TR(0x6abf0c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w2(U+6,u16(u32(r2(U+4))&u32(u16(0xfff0ull))));
w1(R+518,u8((r2(U+6))==(u16(0x0ull))));
}
B6abf12:{NFSU2_TR(0x6abf12);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6abf15:{NFSU2_TR(0x6abf15);
if(r1(R+518)){TAIL_STATIC(0x6ac179u,6ac);}
}
B6abf1b:L6abf1b:{c.instructions+=21;NFSU2_TR(0x6abf1b);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B6abf1e:{NFSU2_TR(0x6abf1e);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
__builtin_memmove((R+28),(U+0),4);
}
B6abf21:{NFSU2_TR(0x6abf21);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6abf22:{NFSU2_TR(0x6abf22);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6abf23:{NFSU2_TR(0x6abf23);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6abf24:{NFSU2_TR(0x6abf24);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6abf27:{NFSU2_TR(0x6abf27);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6abf28:{NFSU2_TR(0x6abf28);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6abf2a:{NFSU2_TR(0x6abf2a);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffacull))));
__builtin_memmove((R+28),(U+0),4);
}
B6abf2d:{NFSU2_TR(0x6abf2d);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6abf2e:{NFSU2_TR(0x6abf2e);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6abf2f:{NFSU2_TR(0x6abf2f);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6abf30:{NFSU2_TR(0x6abf30);
u8 U[20];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
}
B6abf31:{NFSU2_TR(0x6abf31);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6abf33:{NFSU2_TR(0x6abf33);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6abf36:{NFSU2_TR(0x6abf36);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6abf37:{NFSU2_TR(0x6abf37);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6abf38:{NFSU2_TR(0x6abf38);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6abf3b:{NFSU2_TR(0x6abf3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6abf3e:{NFSU2_TR(0x6abf3e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6abf41:{NFSU2_TR(0x6abf41);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6abf46ull));
TAIL_STATIC(0x698ed2u,698);
}
B6abf46:L6abf46:{c.instructions+=3;NFSU2_TR(0x6abf46);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6abf48:{NFSU2_TR(0x6abf48);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6abf4b:{NFSU2_TR(0x6abf4b);
if(r1(R+518)){TAIL_STATIC(0x6ac05eu,6ac);}
}
B6abf51:L6abf51:{c.instructions+=9;NFSU2_TR(0x6abf51);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff9cull))));
__builtin_memmove((R+24),(U+0),4);
}
B6abf54:{NFSU2_TR(0x6abf54);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6abf57:{NFSU2_TR(0x6abf57);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6abf5a:{NFSU2_TR(0x6abf5a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6abf5d:{NFSU2_TR(0x6abf5d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6abf5f:{NFSU2_TR(0x6abf5f);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6abf62:{NFSU2_TR(0x6abf62);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6abf65:{NFSU2_TR(0x6abf65);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6abf68:{NFSU2_TR(0x6abf68);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6ac036u,6ac);}
}
B6abf6e:L6abf6e:{c.instructions+=2;NFSU2_TR(0x6abf6e);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6abf72:{NFSU2_TR(0x6abf72);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6ac036u,6ac);}
}
B6abf78:L6abf78:{c.instructions+=9;NFSU2_TR(0x6abf78);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6abf7b:{NFSU2_TR(0x6abf7b);
w4(R+8,u32(~u32(r4(R+8))));
}
B6abf7d:{NFSU2_TR(0x6abf7d);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0x4ull))));
}
B6abf80:{NFSU2_TR(0x6abf80);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+0))));
}
B6abf83:{NFSU2_TR(0x6abf83);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+24)),r4(U+0));
}
B6abf85:{NFSU2_TR(0x6abf85);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6abf87:{NFSU2_TR(0x6abf87);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6abf88:{NFSU2_TR(0x6abf88);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6abf8a:{NFSU2_TR(0x6abf8a);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6abfb4;}}
}
B6abf8c:L6abf8c:{c.instructions+=2;NFSU2_TR(0x6abf8c);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6abf8f:{NFSU2_TR(0x6abf8f);
if(r1(R+518)){{goto L6abfb4;}}
}
B6abf91:L6abf91:{c.instructions+=9;NFSU2_TR(0x6abf91);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6abf94:{NFSU2_TR(0x6abf94);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6abf97:{NFSU2_TR(0x6abf97);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6abf9a:{NFSU2_TR(0x6abf9a);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6abf9d:{NFSU2_TR(0x6abf9d);
{u32 ea_=u32(r4(R+4)+u32(32u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6abfa0:{NFSU2_TR(0x6abfa0);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B6abfa2:{NFSU2_TR(0x6abfa2);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6abfa4:{NFSU2_TR(0x6abfa4);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6abfa7:{NFSU2_TR(0x6abfa7);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L6abfac;}}
}
B6abfa9:L6abfa9:{c.instructions+=1;NFSU2_TR(0x6abfa9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0x0ull))));
s4(u32(r4(R+24)),r4(U+0));
}
B6abfac:L6abfac:{c.instructions+=4;NFSU2_TR(0x6abfac);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6abfaf:{NFSU2_TR(0x6abfaf);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6abfb0:{NFSU2_TR(0x6abfb0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w1(R+512,u8((r4(R+8))<(r4(U+0))));
}
B6abfb2:{NFSU2_TR(0x6abfb2);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6abf8cu);}goto L6abf8c;}}
}
B6abfb4:L6abfb4:{c.instructions+=3;NFSU2_TR(0x6abfb4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6abfb8:{NFSU2_TR(0x6abfb8);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6abfba:{NFSU2_TR(0x6abfba);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6ac02cu,6ac);}
}
B6abfbc:L6abfbc:{c.instructions+=7;NFSU2_TR(0x6abfbc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6abfbf:{NFSU2_TR(0x6abfbf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6abfc2:{NFSU2_TR(0x6abfc2);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6abfc5:{NFSU2_TR(0x6abfc5);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B6abfc8:{NFSU2_TR(0x6abfc8);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6abfca:{NFSU2_TR(0x6abfca);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+4))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6abfcd:{NFSU2_TR(0x6abfcd);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6abff0;}}
}
B6abfcf:L6abfcf:{c.instructions+=8;NFSU2_TR(0x6abfcf);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffbcull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B6abfd3:{NFSU2_TR(0x6abfd3);
{u32 ea_=u32(r4(R+24)+u32(32u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6abfd6:{NFSU2_TR(0x6abfd6);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6abfd9:{NFSU2_TR(0x6abfd9);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6abfdc:{NFSU2_TR(0x6abfdc);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B6abfde:{NFSU2_TR(0x6abfde);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6abfe0:{NFSU2_TR(0x6abfe0);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6abfe3:{NFSU2_TR(0x6abfe3);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L6abfeb;}}
}
B6abfe5:L6abfe5:{c.instructions+=3;NFSU2_TR(0x6abfe5);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6abfe6:{NFSU2_TR(0x6abfe6);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+4))<(r4(U+8))));
}
B6abfe9:{NFSU2_TR(0x6abfe9);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6abfcfu);}goto L6abfcf;}}
}
B6abfeb:L6abfeb:{c.instructions+=2;NFSU2_TR(0x6abfeb);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6abfee:{NFSU2_TR(0x6abfee);
if(r1(R+518)){TAIL_STATIC(0x6ac022u,6ac);}
}
B6abff0:L6abff0:{c.instructions+=2;NFSU2_TR(0x6abff0);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6abff3:{NFSU2_TR(0x6abff3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6abfff;}}
}
B6abff5:L6abff5:{c.instructions+=3;NFSU2_TR(0x6abff5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6abff8:{NFSU2_TR(0x6abff8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6abffb:{NFSU2_TR(0x6abffb);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffbcull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6abfff:L6abfff:{c.instructions+=1;NFSU2_TR(0x6abfff);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
TAIL_STATIC(0x6ac002u,6ac);
}
XIT:NFSU2_TR_EXIT(0x6ab,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
