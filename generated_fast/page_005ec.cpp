#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_402(u8* __restrict R,Cpu& c);
u32 body_40f(u8* __restrict R,Cpu& c);
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_441(u8* __restrict R,Cpu& c);
u32 body_576(u8* __restrict R,Cpu& c);
u32 body_594(u8* __restrict R,Cpu& c);
u32 body_59f(u8* __restrict R,Cpu& c);
u32 body_5ba(u8* __restrict R,Cpu& c);
u32 body_5e7(u8* __restrict R,Cpu& c);
u32 body_5ed(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x5ec,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x5ec,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_5ec(u8* __restrict R,Cpu& c);
u32 page_5ec(Cpu& c){return body_5ec(c.regs.data(),c);}
__attribute__((noinline)) u32 body_5ec(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x5ec002:goto L5ec002;
case 0x5ec004:c.instructions+=2;goto B5ec004;
case 0x5ec006:c.instructions+=1;goto B5ec006;
case 0x5ec008:goto L5ec008;
case 0x5ec00a:c.instructions+=2;goto B5ec00a;
case 0x5ec00b:c.instructions+=1;goto B5ec00b;
case 0x5ec00e:goto L5ec00e;
case 0x5ec014:c.instructions+=2;goto B5ec014;
case 0x5ec016:c.instructions+=1;goto B5ec016;
case 0x5ec018:goto L5ec018;
case 0x5ec01d:c.instructions+=1;goto B5ec01d;
case 0x5ec01f:goto L5ec01f;
case 0x5ec024:c.instructions+=8;goto B5ec024;
case 0x5ec02a:c.instructions+=7;goto B5ec02a;
case 0x5ec02e:c.instructions+=6;goto B5ec02e;
case 0x5ec032:c.instructions+=5;goto B5ec032;
case 0x5ec038:c.instructions+=4;goto B5ec038;
case 0x5ec03e:c.instructions+=3;goto B5ec03e;
case 0x5ec040:c.instructions+=2;goto B5ec040;
case 0x5ec043:c.instructions+=1;goto B5ec043;
case 0x5ec045:goto L5ec045;
case 0x5ec04b:c.instructions+=1;goto B5ec04b;
case 0x5ec04d:goto L5ec04d;
case 0x5ec04f:c.instructions+=2;goto B5ec04f;
case 0x5ec050:c.instructions+=1;goto B5ec050;
case 0x5ec053:goto L5ec053;
case 0x5ec058:c.instructions+=2;goto B5ec058;
case 0x5ec059:c.instructions+=1;goto B5ec059;
case 0x5ec060:goto L5ec060;
case 0x5ec066:c.instructions+=1;goto B5ec066;
case 0x5ec070:goto L5ec070;
case 0x5ec073:c.instructions+=2;goto B5ec073;
case 0x5ec076:c.instructions+=1;goto B5ec076;
case 0x5ec078:goto L5ec078;
case 0x5ec07b:c.instructions+=1;goto B5ec07b;
case 0x5ec07d:goto L5ec07d;
case 0x5ec080:c.instructions+=1;goto B5ec080;
case 0x5ec082:goto L5ec082;
case 0x5ec085:c.instructions+=1;goto B5ec085;
case 0x5ec08a:goto L5ec08a;
case 0x5ec090:c.instructions+=1;goto B5ec090;
case 0x5ec0a0:goto L5ec0a0;
case 0x5ec0a3:c.instructions+=1;goto B5ec0a3;
case 0x5ec0b0:goto L5ec0b0;
case 0x5ec0b3:c.instructions+=2;goto B5ec0b3;
case 0x5ec0b6:c.instructions+=1;goto B5ec0b6;
case 0x5ec0c0:goto L5ec0c0;
case 0x5ec0c3:c.instructions+=2;goto B5ec0c3;
case 0x5ec0c5:c.instructions+=1;goto B5ec0c5;
case 0x5ec0d0:goto L5ec0d0;
case 0x5ec0d3:c.instructions+=2;goto B5ec0d3;
case 0x5ec0d5:c.instructions+=1;goto B5ec0d5;
case 0x5ec0e0:goto L5ec0e0;
case 0x5ec0e6:c.instructions+=2;goto B5ec0e6;
case 0x5ec0e8:c.instructions+=1;goto B5ec0e8;
case 0x5ec0ea:goto L5ec0ea;
case 0x5ec0f0:c.instructions+=3;goto B5ec0f0;
case 0x5ec0f6:c.instructions+=2;goto B5ec0f6;
case 0x5ec0f8:c.instructions+=1;goto B5ec0f8;
case 0x5ec0fa:goto L5ec0fa;
case 0x5ec0fe:c.instructions+=2;goto B5ec0fe;
case 0x5ec100:c.instructions+=1;goto B5ec100;
case 0x5ec102:goto L5ec102;
case 0x5ec108:c.instructions+=1;goto B5ec108;
case 0x5ec10a:goto L5ec10a;
case 0x5ec110:c.instructions+=1;goto B5ec110;
case 0x5ec112:goto L5ec112;
case 0x5ec116:c.instructions+=1;goto B5ec116;
case 0x5ec11c:goto L5ec11c;
case 0x5ec120:c.instructions+=2;goto B5ec120;
case 0x5ec126:c.instructions+=1;goto B5ec126;
case 0x5ec128:goto L5ec128;
case 0x5ec12e:goto L5ec12e;
case 0x5ec134:c.instructions+=14;goto B5ec134;
case 0x5ec135:c.instructions+=13;goto B5ec135;
case 0x5ec13b:c.instructions+=12;goto B5ec13b;
case 0x5ec13d:c.instructions+=11;goto B5ec13d;
case 0x5ec140:c.instructions+=10;goto B5ec140;
case 0x5ec145:c.instructions+=9;goto B5ec145;
case 0x5ec147:c.instructions+=8;goto B5ec147;
case 0x5ec14a:c.instructions+=7;goto B5ec14a;
case 0x5ec14c:c.instructions+=6;goto B5ec14c;
case 0x5ec14f:c.instructions+=5;goto B5ec14f;
case 0x5ec151:c.instructions+=4;goto B5ec151;
case 0x5ec154:c.instructions+=3;goto B5ec154;
case 0x5ec156:c.instructions+=2;goto B5ec156;
case 0x5ec15c:c.instructions+=1;goto B5ec15c;
case 0x5ec15d:goto L5ec15d;
case 0x5ec160:goto L5ec160;
case 0x5ec161:c.instructions+=16;goto B5ec161;
case 0x5ec167:c.instructions+=15;goto B5ec167;
case 0x5ec168:c.instructions+=14;goto B5ec168;
case 0x5ec16e:c.instructions+=13;goto B5ec16e;
case 0x5ec170:c.instructions+=12;goto B5ec170;
case 0x5ec172:c.instructions+=11;goto B5ec172;
case 0x5ec176:c.instructions+=10;goto B5ec176;
case 0x5ec17a:c.instructions+=9;goto B5ec17a;
case 0x5ec17b:c.instructions+=8;goto B5ec17b;
case 0x5ec181:c.instructions+=7;goto B5ec181;
case 0x5ec187:c.instructions+=6;goto B5ec187;
case 0x5ec18d:c.instructions+=5;goto B5ec18d;
case 0x5ec193:c.instructions+=4;goto B5ec193;
case 0x5ec195:c.instructions+=3;goto B5ec195;
case 0x5ec197:c.instructions+=2;goto B5ec197;
case 0x5ec19a:c.instructions+=1;goto B5ec19a;
case 0x5ec19c:goto L5ec19c;
case 0x5ec1a0:c.instructions+=12;goto B5ec1a0;
case 0x5ec1a6:c.instructions+=11;goto B5ec1a6;
case 0x5ec1aa:c.instructions+=10;goto B5ec1aa;
case 0x5ec1b0:c.instructions+=9;goto B5ec1b0;
case 0x5ec1b4:c.instructions+=8;goto B5ec1b4;
case 0x5ec1ba:c.instructions+=7;goto B5ec1ba;
case 0x5ec1be:c.instructions+=6;goto B5ec1be;
case 0x5ec1c4:c.instructions+=5;goto B5ec1c4;
case 0x5ec1c8:c.instructions+=4;goto B5ec1c8;
case 0x5ec1ce:c.instructions+=3;goto B5ec1ce;
case 0x5ec1d2:c.instructions+=2;goto B5ec1d2;
case 0x5ec1d8:c.instructions+=1;goto B5ec1d8;
case 0x5ec1de:goto L5ec1de;
case 0x5ec1df:c.instructions+=1;goto B5ec1df;
case 0x5ec1f0:goto L5ec1f0;
case 0x5ec1f6:c.instructions+=3;goto B5ec1f6;
case 0x5ec1fc:c.instructions+=2;goto B5ec1fc;
case 0x5ec1fe:c.instructions+=1;goto B5ec1fe;
case 0x5ec200:goto L5ec200;
case 0x5ec202:c.instructions+=1;goto B5ec202;
case 0x5ec208:goto L5ec208;
case 0x5ec20e:c.instructions+=2;goto B5ec20e;
case 0x5ec210:c.instructions+=1;goto B5ec210;
case 0x5ec212:goto L5ec212;
case 0x5ec218:goto L5ec218;
case 0x5ec21e:c.instructions+=2;goto B5ec21e;
case 0x5ec220:c.instructions+=1;goto B5ec220;
case 0x5ec222:goto L5ec222;
case 0x5ec228:goto L5ec228;
case 0x5ec22e:c.instructions+=2;goto B5ec22e;
case 0x5ec230:c.instructions+=1;goto B5ec230;
case 0x5ec232:goto L5ec232;
case 0x5ec238:goto L5ec238;
case 0x5ec240:goto L5ec240;
case 0x5ec243:c.instructions+=2;goto B5ec243;
case 0x5ec248:c.instructions+=1;goto B5ec248;
case 0x5ec250:goto L5ec250;
case 0x5ec253:c.instructions+=17;goto B5ec253;
case 0x5ec259:c.instructions+=16;goto B5ec259;
case 0x5ec25f:c.instructions+=15;goto B5ec25f;
case 0x5ec265:c.instructions+=14;goto B5ec265;
case 0x5ec269:c.instructions+=13;goto B5ec269;
case 0x5ec26b:c.instructions+=12;goto B5ec26b;
case 0x5ec26d:c.instructions+=11;goto B5ec26d;
case 0x5ec270:c.instructions+=10;goto B5ec270;
case 0x5ec273:c.instructions+=9;goto B5ec273;
case 0x5ec279:c.instructions+=8;goto B5ec279;
case 0x5ec27f:c.instructions+=7;goto B5ec27f;
case 0x5ec285:c.instructions+=6;goto B5ec285;
case 0x5ec289:c.instructions+=5;goto B5ec289;
case 0x5ec28b:c.instructions+=4;goto B5ec28b;
case 0x5ec28d:c.instructions+=3;goto B5ec28d;
case 0x5ec290:c.instructions+=2;goto B5ec290;
case 0x5ec293:c.instructions+=1;goto B5ec293;
case 0x5ec2a0:goto L5ec2a0;
case 0x5ec2a1:c.instructions+=42;goto B5ec2a1;
case 0x5ec2a3:c.instructions+=41;goto B5ec2a3;
case 0x5ec2a6:c.instructions+=40;goto B5ec2a6;
case 0x5ec2a9:c.instructions+=39;goto B5ec2a9;
case 0x5ec2ac:c.instructions+=38;goto B5ec2ac;
case 0x5ec2ae:c.instructions+=37;goto B5ec2ae;
case 0x5ec2b2:c.instructions+=36;goto B5ec2b2;
case 0x5ec2b5:c.instructions+=35;goto B5ec2b5;
case 0x5ec2b8:c.instructions+=34;goto B5ec2b8;
case 0x5ec2bc:c.instructions+=33;goto B5ec2bc;
case 0x5ec2c0:c.instructions+=32;goto B5ec2c0;
case 0x5ec2c2:c.instructions+=31;goto B5ec2c2;
case 0x5ec2c3:c.instructions+=30;goto B5ec2c3;
case 0x5ec2c6:c.instructions+=29;goto B5ec2c6;
case 0x5ec2ca:c.instructions+=28;goto B5ec2ca;
case 0x5ec2cd:c.instructions+=27;goto B5ec2cd;
case 0x5ec2d0:c.instructions+=26;goto B5ec2d0;
case 0x5ec2d3:c.instructions+=25;goto B5ec2d3;
case 0x5ec2d7:c.instructions+=24;goto B5ec2d7;
case 0x5ec2d8:c.instructions+=23;goto B5ec2d8;
case 0x5ec2d9:c.instructions+=22;goto B5ec2d9;
case 0x5ec2db:c.instructions+=21;goto B5ec2db;
case 0x5ec2dd:c.instructions+=20;goto B5ec2dd;
case 0x5ec2e1:c.instructions+=19;goto B5ec2e1;
case 0x5ec2e5:c.instructions+=18;goto B5ec2e5;
case 0x5ec2e7:c.instructions+=17;goto B5ec2e7;
case 0x5ec2e9:c.instructions+=16;goto B5ec2e9;
case 0x5ec2eb:c.instructions+=15;goto B5ec2eb;
case 0x5ec2ed:c.instructions+=14;goto B5ec2ed;
case 0x5ec2ef:c.instructions+=13;goto B5ec2ef;
case 0x5ec2f5:c.instructions+=12;goto B5ec2f5;
case 0x5ec2f9:c.instructions+=11;goto B5ec2f9;
case 0x5ec2fb:c.instructions+=10;goto B5ec2fb;
case 0x5ec2ff:c.instructions+=9;goto B5ec2ff;
case 0x5ec301:c.instructions+=8;goto B5ec301;
case 0x5ec303:c.instructions+=7;goto B5ec303;
case 0x5ec307:c.instructions+=6;goto B5ec307;
case 0x5ec309:c.instructions+=5;goto B5ec309;
case 0x5ec30b:c.instructions+=4;goto B5ec30b;
case 0x5ec30f:c.instructions+=3;goto B5ec30f;
case 0x5ec311:c.instructions+=2;goto B5ec311;
case 0x5ec313:c.instructions+=1;goto B5ec313;
case 0x5ec318:goto L5ec318;
case 0x5ec31b:c.instructions+=3;goto B5ec31b;
case 0x5ec31d:c.instructions+=2;goto B5ec31d;
case 0x5ec31e:c.instructions+=1;goto B5ec31e;
case 0x5ec330:goto L5ec330;
case 0x5ec331:c.instructions+=8;goto B5ec331;
case 0x5ec333:c.instructions+=7;goto B5ec333;
case 0x5ec336:c.instructions+=6;goto B5ec336;
case 0x5ec339:c.instructions+=5;goto B5ec339;
case 0x5ec33c:c.instructions+=4;goto B5ec33c;
case 0x5ec342:c.instructions+=3;goto B5ec342;
case 0x5ec344:c.instructions+=2;goto B5ec344;
case 0x5ec347:c.instructions+=1;goto B5ec347;
case 0x5ec349:goto L5ec349;
case 0x5ec34c:c.instructions+=18;goto B5ec34c;
case 0x5ec34f:c.instructions+=17;goto B5ec34f;
case 0x5ec352:c.instructions+=16;goto B5ec352;
case 0x5ec354:c.instructions+=15;goto B5ec354;
case 0x5ec356:c.instructions+=14;goto B5ec356;
case 0x5ec358:c.instructions+=13;goto B5ec358;
case 0x5ec35a:c.instructions+=12;goto B5ec35a;
case 0x5ec35c:c.instructions+=11;goto B5ec35c;
case 0x5ec35e:c.instructions+=10;goto B5ec35e;
case 0x5ec360:c.instructions+=9;goto B5ec360;
case 0x5ec362:c.instructions+=8;goto B5ec362;
case 0x5ec364:c.instructions+=7;goto B5ec364;
case 0x5ec366:c.instructions+=6;goto B5ec366;
case 0x5ec368:c.instructions+=5;goto B5ec368;
case 0x5ec36a:c.instructions+=4;goto B5ec36a;
case 0x5ec36c:c.instructions+=3;goto B5ec36c;
case 0x5ec36e:c.instructions+=2;goto B5ec36e;
case 0x5ec36f:c.instructions+=1;goto B5ec36f;
case 0x5ec370:goto L5ec370;
case 0x5ec373:c.instructions+=4;goto B5ec373;
case 0x5ec374:c.instructions+=3;goto B5ec374;
case 0x5ec378:c.instructions+=2;goto B5ec378;
case 0x5ec379:c.instructions+=1;goto B5ec379;
case 0x5ec37e:goto L5ec37e;
case 0x5ec382:c.instructions+=12;goto B5ec382;
case 0x5ec385:c.instructions+=11;goto B5ec385;
case 0x5ec388:c.instructions+=10;goto B5ec388;
case 0x5ec38b:c.instructions+=9;goto B5ec38b;
case 0x5ec38f:c.instructions+=8;goto B5ec38f;
case 0x5ec392:c.instructions+=7;goto B5ec392;
case 0x5ec394:c.instructions+=6;goto B5ec394;
case 0x5ec398:c.instructions+=5;goto B5ec398;
case 0x5ec39a:c.instructions+=4;goto B5ec39a;
case 0x5ec39c:c.instructions+=3;goto B5ec39c;
case 0x5ec39e:c.instructions+=2;goto B5ec39e;
case 0x5ec39f:c.instructions+=1;goto B5ec39f;
case 0x5ec3a0:goto L5ec3a0;
case 0x5ec3a6:c.instructions+=8;goto B5ec3a6;
case 0x5ec3ac:c.instructions+=7;goto B5ec3ac;
case 0x5ec3b2:c.instructions+=6;goto B5ec3b2;
case 0x5ec3b8:c.instructions+=5;goto B5ec3b8;
case 0x5ec3ba:c.instructions+=4;goto B5ec3ba;
case 0x5ec3c0:c.instructions+=3;goto B5ec3c0;
case 0x5ec3c6:c.instructions+=2;goto B5ec3c6;
case 0x5ec3c8:c.instructions+=1;goto B5ec3c8;
case 0x5ec3d0:goto L5ec3d0;
case 0x5ec3d1:c.instructions+=13;goto B5ec3d1;
case 0x5ec3d3:c.instructions+=12;goto B5ec3d3;
case 0x5ec3d6:c.instructions+=11;goto B5ec3d6;
case 0x5ec3dc:c.instructions+=10;goto B5ec3dc;
case 0x5ec3dd:c.instructions+=9;goto B5ec3dd;
case 0x5ec3de:c.instructions+=8;goto B5ec3de;
case 0x5ec3df:c.instructions+=7;goto B5ec3df;
case 0x5ec3e1:c.instructions+=6;goto B5ec3e1;
case 0x5ec3e7:c.instructions+=5;goto B5ec3e7;
case 0x5ec3eb:c.instructions+=4;goto B5ec3eb;
case 0x5ec3ef:c.instructions+=3;goto B5ec3ef;
case 0x5ec3f5:c.instructions+=2;goto B5ec3f5;
case 0x5ec3f8:c.instructions+=1;goto B5ec3f8;
case 0x5ec3fd:goto L5ec3fd;
case 0x5ec400:c.instructions+=2;goto B5ec400;
case 0x5ec404:c.instructions+=1;goto B5ec404;
case 0x5ec406:goto L5ec406;
case 0x5ec40c:c.instructions+=6;goto B5ec40c;
case 0x5ec40d:c.instructions+=5;goto B5ec40d;
case 0x5ec40e:c.instructions+=4;goto B5ec40e;
case 0x5ec40f:c.instructions+=3;goto B5ec40f;
case 0x5ec411:c.instructions+=2;goto B5ec411;
case 0x5ec412:c.instructions+=1;goto B5ec412;
case 0x5ec415:goto L5ec415;
case 0x5ec418:c.instructions+=6;goto B5ec418;
case 0x5ec419:c.instructions+=5;goto B5ec419;
case 0x5ec41f:c.instructions+=4;goto B5ec41f;
case 0x5ec420:c.instructions+=3;goto B5ec420;
case 0x5ec427:c.instructions+=2;goto B5ec427;
case 0x5ec428:c.instructions+=1;goto B5ec428;
case 0x5ec42d:goto L5ec42d;
case 0x5ec430:c.instructions+=5;goto B5ec430;
case 0x5ec438:c.instructions+=4;goto B5ec438;
case 0x5ec440:c.instructions+=3;goto B5ec440;
case 0x5ec448:c.instructions+=2;goto B5ec448;
case 0x5ec44a:c.instructions+=1;goto B5ec44a;
case 0x5ec450:goto L5ec450;
case 0x5ec453:c.instructions+=11;goto B5ec453;
case 0x5ec457:c.instructions+=10;goto B5ec457;
case 0x5ec45b:c.instructions+=9;goto B5ec45b;
case 0x5ec45c:c.instructions+=8;goto B5ec45c;
case 0x5ec45e:c.instructions+=7;goto B5ec45e;
case 0x5ec462:c.instructions+=6;goto B5ec462;
case 0x5ec466:c.instructions+=5;goto B5ec466;
case 0x5ec467:c.instructions+=4;goto B5ec467;
case 0x5ec468:c.instructions+=3;goto B5ec468;
case 0x5ec470:c.instructions+=2;goto B5ec470;
case 0x5ec478:c.instructions+=1;goto B5ec478;
case 0x5ec47d:goto L5ec47d;
case 0x5ec481:c.instructions+=6;goto B5ec481;
case 0x5ec482:c.instructions+=5;goto B5ec482;
case 0x5ec489:c.instructions+=4;goto B5ec489;
case 0x5ec48a:c.instructions+=3;goto B5ec48a;
case 0x5ec48e:c.instructions+=2;goto B5ec48e;
case 0x5ec48f:c.instructions+=1;goto B5ec48f;
case 0x5ec494:goto L5ec494;
case 0x5ec499:c.instructions+=7;goto B5ec499;
case 0x5ec49d:c.instructions+=6;goto B5ec49d;
case 0x5ec49e:c.instructions+=5;goto B5ec49e;
case 0x5ec4a2:c.instructions+=4;goto B5ec4a2;
case 0x5ec4a3:c.instructions+=3;goto B5ec4a3;
case 0x5ec4a7:c.instructions+=2;goto B5ec4a7;
case 0x5ec4a8:c.instructions+=1;goto B5ec4a8;
case 0x5ec4ad:goto L5ec4ad;
case 0x5ec4b0:c.instructions+=4;goto B5ec4b0;
case 0x5ec4b3:c.instructions+=3;goto B5ec4b3;
case 0x5ec4b6:c.instructions+=2;goto B5ec4b6;
case 0x5ec4bc:c.instructions+=1;goto B5ec4bc;
case 0x5ec4be:goto L5ec4be;
case 0x5ec4c0:c.instructions+=7;goto B5ec4c0;
case 0x5ec4c2:c.instructions+=6;goto B5ec4c2;
case 0x5ec4c4:c.instructions+=5;goto B5ec4c4;
case 0x5ec4c8:c.instructions+=4;goto B5ec4c8;
case 0x5ec4ce:c.instructions+=3;goto B5ec4ce;
case 0x5ec4cf:c.instructions+=2;goto B5ec4cf;
case 0x5ec4d1:c.instructions+=1;goto B5ec4d1;
case 0x5ec4d6:goto L5ec4d6;
case 0x5ec4da:c.instructions+=5;goto B5ec4da;
case 0x5ec4e0:c.instructions+=4;goto B5ec4e0;
case 0x5ec4e2:c.instructions+=3;goto B5ec4e2;
case 0x5ec4e4:c.instructions+=2;goto B5ec4e4;
case 0x5ec4e7:c.instructions+=1;goto B5ec4e7;
case 0x5ec4e9:goto L5ec4e9;
case 0x5ec4eb:c.instructions+=2;goto B5ec4eb;
case 0x5ec4f3:c.instructions+=1;goto B5ec4f3;
case 0x5ec4f5:goto L5ec4f5;
case 0x5ec4f9:goto L5ec4f9;
case 0x5ec4fd:c.instructions+=9;goto B5ec4fd;
case 0x5ec501:c.instructions+=8;goto B5ec501;
case 0x5ec505:c.instructions+=7;goto B5ec505;
case 0x5ec508:c.instructions+=6;goto B5ec508;
case 0x5ec50c:c.instructions+=5;goto B5ec50c;
case 0x5ec510:c.instructions+=4;goto B5ec510;
case 0x5ec516:c.instructions+=3;goto B5ec516;
case 0x5ec518:c.instructions+=2;goto B5ec518;
case 0x5ec51b:c.instructions+=1;goto B5ec51b;
case 0x5ec51d:goto L5ec51d;
case 0x5ec521:c.instructions+=2;goto B5ec521;
case 0x5ec525:c.instructions+=1;goto B5ec525;
case 0x5ec527:goto L5ec527;
case 0x5ec52f:goto L5ec52f;
case 0x5ec533:c.instructions+=4;goto B5ec533;
case 0x5ec539:c.instructions+=3;goto B5ec539;
case 0x5ec53b:c.instructions+=2;goto B5ec53b;
case 0x5ec53e:c.instructions+=1;goto B5ec53e;
case 0x5ec540:goto L5ec540;
case 0x5ec544:c.instructions+=3;goto B5ec544;
case 0x5ec546:c.instructions+=2;goto B5ec546;
case 0x5ec54a:c.instructions+=1;goto B5ec54a;
case 0x5ec54c:goto L5ec54c;
case 0x5ec554:goto L5ec554;
case 0x5ec557:c.instructions+=17;goto B5ec557;
case 0x5ec55d:c.instructions+=16;goto B5ec55d;
case 0x5ec560:c.instructions+=15;goto B5ec560;
case 0x5ec566:c.instructions+=14;goto B5ec566;
case 0x5ec56c:c.instructions+=13;goto B5ec56c;
case 0x5ec570:c.instructions+=12;goto B5ec570;
case 0x5ec576:c.instructions+=11;goto B5ec576;
case 0x5ec57a:c.instructions+=10;goto B5ec57a;
case 0x5ec57e:c.instructions+=9;goto B5ec57e;
case 0x5ec581:c.instructions+=8;goto B5ec581;
case 0x5ec585:c.instructions+=7;goto B5ec585;
case 0x5ec588:c.instructions+=6;goto B5ec588;
case 0x5ec58c:c.instructions+=5;goto B5ec58c;
case 0x5ec590:c.instructions+=4;goto B5ec590;
case 0x5ec596:c.instructions+=3;goto B5ec596;
case 0x5ec598:c.instructions+=2;goto B5ec598;
case 0x5ec59b:c.instructions+=1;goto B5ec59b;
case 0x5ec59d:goto L5ec59d;
case 0x5ec5a3:c.instructions+=1;goto B5ec5a3;
case 0x5ec5a5:goto L5ec5a5;
case 0x5ec5ab:c.instructions+=1;goto B5ec5ab;
case 0x5ec5af:goto L5ec5af;
case 0x5ec5b3:c.instructions+=8;goto B5ec5b3;
case 0x5ec5b5:c.instructions+=7;goto B5ec5b5;
case 0x5ec5ba:c.instructions+=6;goto B5ec5ba;
case 0x5ec5be:c.instructions+=5;goto B5ec5be;
case 0x5ec5c0:c.instructions+=4;goto B5ec5c0;
case 0x5ec5c8:c.instructions+=3;goto B5ec5c8;
case 0x5ec5d0:c.instructions+=2;goto B5ec5d0;
case 0x5ec5d4:c.instructions+=1;goto B5ec5d4;
case 0x5ec5da:goto L5ec5da;
case 0x5ec5e0:goto L5ec5e0;
case 0x5ec5e4:c.instructions+=14;goto B5ec5e4;
case 0x5ec5e5:c.instructions+=13;goto B5ec5e5;
case 0x5ec5e9:c.instructions+=12;goto B5ec5e9;
case 0x5ec5ed:c.instructions+=11;goto B5ec5ed;
case 0x5ec5f1:c.instructions+=10;goto B5ec5f1;
case 0x5ec5f5:c.instructions+=9;goto B5ec5f5;
case 0x5ec5f9:c.instructions+=8;goto B5ec5f9;
case 0x5ec5fd:c.instructions+=7;goto B5ec5fd;
case 0x5ec601:c.instructions+=6;goto B5ec601;
case 0x5ec607:c.instructions+=5;goto B5ec607;
case 0x5ec60a:c.instructions+=4;goto B5ec60a;
case 0x5ec60b:c.instructions+=3;goto B5ec60b;
case 0x5ec60c:c.instructions+=2;goto B5ec60c;
case 0x5ec60d:c.instructions+=1;goto B5ec60d;
case 0x5ec612:goto L5ec612;
case 0x5ec616:c.instructions+=8;goto B5ec616;
case 0x5ec617:c.instructions+=7;goto B5ec617;
case 0x5ec61b:c.instructions+=6;goto B5ec61b;
case 0x5ec61c:c.instructions+=5;goto B5ec61c;
case 0x5ec620:c.instructions+=4;goto B5ec620;
case 0x5ec621:c.instructions+=3;goto B5ec621;
case 0x5ec625:c.instructions+=2;goto B5ec625;
case 0x5ec626:c.instructions+=1;goto B5ec626;
case 0x5ec62b:goto L5ec62b;
case 0x5ec62e:c.instructions+=8;goto B5ec62e;
case 0x5ec630:c.instructions+=7;goto B5ec630;
case 0x5ec637:c.instructions+=6;goto B5ec637;
case 0x5ec638:c.instructions+=5;goto B5ec638;
case 0x5ec63a:c.instructions+=4;goto B5ec63a;
case 0x5ec63e:c.instructions+=3;goto B5ec63e;
case 0x5ec63f:c.instructions+=2;goto B5ec63f;
case 0x5ec641:c.instructions+=1;goto B5ec641;
case 0x5ec646:goto L5ec646;
case 0x5ec64a:c.instructions+=6;goto B5ec64a;
case 0x5ec64c:c.instructions+=5;goto B5ec64c;
case 0x5ec650:c.instructions+=4;goto B5ec650;
case 0x5ec656:c.instructions+=3;goto B5ec656;
case 0x5ec658:c.instructions+=2;goto B5ec658;
case 0x5ec65b:c.instructions+=1;goto B5ec65b;
case 0x5ec65d:goto L5ec65d;
case 0x5ec65f:c.instructions+=8;goto B5ec65f;
case 0x5ec663:c.instructions+=7;goto B5ec663;
case 0x5ec667:c.instructions+=6;goto B5ec667;
case 0x5ec66b:c.instructions+=5;goto B5ec66b;
case 0x5ec66f:c.instructions+=4;goto B5ec66f;
case 0x5ec673:c.instructions+=3;goto B5ec673;
case 0x5ec675:c.instructions+=2;goto B5ec675;
case 0x5ec678:c.instructions+=1;goto B5ec678;
case 0x5ec67a:goto L5ec67a;
case 0x5ec67e:c.instructions+=1;goto B5ec67e;
case 0x5ec682:goto L5ec682;
case 0x5ec686:c.instructions+=4;goto B5ec686;
case 0x5ec68a:c.instructions+=3;goto B5ec68a;
case 0x5ec68c:c.instructions+=2;goto B5ec68c;
case 0x5ec68f:c.instructions+=1;goto B5ec68f;
case 0x5ec691:goto L5ec691;
case 0x5ec695:c.instructions+=1;goto B5ec695;
case 0x5ec699:goto L5ec699;
case 0x5ec69f:c.instructions+=3;goto B5ec69f;
case 0x5ec6a1:c.instructions+=2;goto B5ec6a1;
case 0x5ec6a5:c.instructions+=1;goto B5ec6a5;
case 0x5ec6aa:goto L5ec6aa;
case 0x5ec6ad:c.instructions+=2;goto B5ec6ad;
case 0x5ec6af:c.instructions+=1;goto B5ec6af;
case 0x5ec6b1:goto L5ec6b1;
case 0x5ec6b5:c.instructions+=4;goto B5ec6b5;
case 0x5ec6bb:c.instructions+=3;goto B5ec6bb;
case 0x5ec6bd:c.instructions+=2;goto B5ec6bd;
case 0x5ec6c0:c.instructions+=1;goto B5ec6c0;
case 0x5ec6c6:goto L5ec6c6;
case 0x5ec6ca:c.instructions+=15;goto B5ec6ca;
case 0x5ec6ce:c.instructions+=14;goto B5ec6ce;
case 0x5ec6d4:c.instructions+=13;goto B5ec6d4;
case 0x5ec6d8:c.instructions+=12;goto B5ec6d8;
case 0x5ec6dc:c.instructions+=11;goto B5ec6dc;
case 0x5ec6e0:c.instructions+=10;goto B5ec6e0;
case 0x5ec6e4:c.instructions+=9;goto B5ec6e4;
case 0x5ec6e5:c.instructions+=8;goto B5ec6e5;
case 0x5ec6ec:c.instructions+=7;goto B5ec6ec;
case 0x5ec6f0:c.instructions+=6;goto B5ec6f0;
case 0x5ec6f1:c.instructions+=5;goto B5ec6f1;
case 0x5ec6f8:c.instructions+=4;goto B5ec6f8;
case 0x5ec6fa:c.instructions+=3;goto B5ec6fa;
case 0x5ec6fb:c.instructions+=2;goto B5ec6fb;
case 0x5ec702:c.instructions+=1;goto B5ec702;
case 0x5ec707:goto L5ec707;
case 0x5ec70e:c.instructions+=6;goto B5ec70e;
case 0x5ec70f:c.instructions+=5;goto B5ec70f;
case 0x5ec716:c.instructions+=4;goto B5ec716;
case 0x5ec717:c.instructions+=3;goto B5ec717;
case 0x5ec71b:c.instructions+=2;goto B5ec71b;
case 0x5ec71c:c.instructions+=1;goto B5ec71c;
case 0x5ec721:goto L5ec721;
case 0x5ec725:c.instructions+=6;goto B5ec725;
case 0x5ec726:c.instructions+=5;goto B5ec726;
case 0x5ec72a:c.instructions+=4;goto B5ec72a;
case 0x5ec72b:c.instructions+=3;goto B5ec72b;
case 0x5ec732:c.instructions+=2;goto B5ec732;
case 0x5ec733:c.instructions+=1;goto B5ec733;
case 0x5ec738:goto L5ec738;
case 0x5ec73c:c.instructions+=2;goto B5ec73c;
case 0x5ec73f:c.instructions+=1;goto B5ec73f;
case 0x5ec743:goto L5ec743;
case 0x5ec744:c.instructions+=3;goto B5ec744;
case 0x5ec746:c.instructions+=2;goto B5ec746;
case 0x5ec74a:c.instructions+=1;goto B5ec74a;
case 0x5ec750:goto L5ec750;
case 0x5ec752:goto L5ec752;
case 0x5ec756:c.instructions+=2;goto B5ec756;
case 0x5ec758:c.instructions+=1;goto B5ec758;
case 0x5ec75c:goto L5ec75c;
case 0x5ec75f:c.instructions+=2;goto B5ec75f;
case 0x5ec761:c.instructions+=1;goto B5ec761;
case 0x5ec763:goto L5ec763;
case 0x5ec767:c.instructions+=1;goto B5ec767;
case 0x5ec769:goto L5ec769;
case 0x5ec76c:c.instructions+=2;goto B5ec76c;
case 0x5ec76e:c.instructions+=1;goto B5ec76e;
case 0x5ec770:goto L5ec770;
case 0x5ec774:c.instructions+=1;goto B5ec774;
case 0x5ec776:goto L5ec776;
case 0x5ec77a:c.instructions+=7;goto B5ec77a;
case 0x5ec77b:c.instructions+=6;goto B5ec77b;
case 0x5ec77c:c.instructions+=5;goto B5ec77c;
case 0x5ec77d:c.instructions+=4;goto B5ec77d;
case 0x5ec781:c.instructions+=3;goto B5ec781;
case 0x5ec783:c.instructions+=2;goto B5ec783;
case 0x5ec784:c.instructions+=1;goto B5ec784;
case 0x5ec790:goto L5ec790;
case 0x5ec791:c.instructions+=4;goto B5ec791;
case 0x5ec794:c.instructions+=3;goto B5ec794;
case 0x5ec79a:c.instructions+=2;goto B5ec79a;
case 0x5ec79c:c.instructions+=1;goto B5ec79c;
case 0x5ec79e:goto L5ec79e;
case 0x5ec7a3:c.instructions+=1;goto B5ec7a3;
case 0x5ec7a5:goto L5ec7a5;
case 0x5ec7ab:c.instructions+=9;goto B5ec7ab;
case 0x5ec7ad:c.instructions+=8;goto B5ec7ad;
case 0x5ec7b1:c.instructions+=7;goto B5ec7b1;
case 0x5ec7b5:c.instructions+=6;goto B5ec7b5;
case 0x5ec7bb:c.instructions+=5;goto B5ec7bb;
case 0x5ec7bf:c.instructions+=4;goto B5ec7bf;
case 0x5ec7c5:c.instructions+=3;goto B5ec7c5;
case 0x5ec7c7:c.instructions+=2;goto B5ec7c7;
case 0x5ec7ca:c.instructions+=1;goto B5ec7ca;
case 0x5ec7cc:goto L5ec7cc;
case 0x5ec7d0:c.instructions+=3;goto B5ec7d0;
case 0x5ec7d1:c.instructions+=2;goto B5ec7d1;
case 0x5ec7d6:c.instructions+=1;goto B5ec7d6;
case 0x5ec7db:goto L5ec7db;
case 0x5ec7dc:c.instructions+=1;goto B5ec7dc;
case 0x5ec7dd:goto L5ec7dd;
case 0x5ec7e3:c.instructions+=2;goto B5ec7e3;
case 0x5ec7e4:c.instructions+=1;goto B5ec7e4;
case 0x5ec7f0:goto L5ec7f0;
case 0x5ec7f1:c.instructions+=12;goto B5ec7f1;
case 0x5ec7f3:c.instructions+=11;goto B5ec7f3;
case 0x5ec7f7:c.instructions+=10;goto B5ec7f7;
case 0x5ec7fc:c.instructions+=9;goto B5ec7fc;
case 0x5ec7fe:c.instructions+=8;goto B5ec7fe;
case 0x5ec804:c.instructions+=7;goto B5ec804;
case 0x5ec805:c.instructions+=6;goto B5ec805;
case 0x5ec806:c.instructions+=5;goto B5ec806;
case 0x5ec808:c.instructions+=4;goto B5ec808;
case 0x5ec80a:c.instructions+=3;goto B5ec80a;
case 0x5ec80e:c.instructions+=2;goto B5ec80e;
case 0x5ec813:c.instructions+=1;goto B5ec813;
case 0x5ec819:goto L5ec819;
case 0x5ec81d:c.instructions+=108;goto B5ec81d;
case 0x5ec81f:c.instructions+=107;goto B5ec81f;
case 0x5ec822:c.instructions+=106;goto B5ec822;
case 0x5ec825:c.instructions+=105;goto B5ec825;
case 0x5ec828:c.instructions+=104;goto B5ec828;
case 0x5ec82b:c.instructions+=103;goto B5ec82b;
case 0x5ec82e:c.instructions+=102;goto B5ec82e;
case 0x5ec831:c.instructions+=101;goto B5ec831;
case 0x5ec834:c.instructions+=100;goto B5ec834;
case 0x5ec837:c.instructions+=99;goto B5ec837;
case 0x5ec83a:c.instructions+=98;goto B5ec83a;
case 0x5ec83d:c.instructions+=97;goto B5ec83d;
case 0x5ec840:c.instructions+=96;goto B5ec840;
case 0x5ec843:c.instructions+=95;goto B5ec843;
case 0x5ec846:c.instructions+=94;goto B5ec846;
case 0x5ec849:c.instructions+=93;goto B5ec849;
case 0x5ec84c:c.instructions+=92;goto B5ec84c;
case 0x5ec84f:c.instructions+=91;goto B5ec84f;
case 0x5ec852:c.instructions+=90;goto B5ec852;
case 0x5ec855:c.instructions+=89;goto B5ec855;
case 0x5ec858:c.instructions+=88;goto B5ec858;
case 0x5ec85a:c.instructions+=87;goto B5ec85a;
case 0x5ec85d:c.instructions+=86;goto B5ec85d;
case 0x5ec85f:c.instructions+=85;goto B5ec85f;
case 0x5ec862:c.instructions+=84;goto B5ec862;
case 0x5ec865:c.instructions+=83;goto B5ec865;
case 0x5ec868:c.instructions+=82;goto B5ec868;
case 0x5ec86b:c.instructions+=81;goto B5ec86b;
case 0x5ec86e:c.instructions+=80;goto B5ec86e;
case 0x5ec871:c.instructions+=79;goto B5ec871;
case 0x5ec874:c.instructions+=78;goto B5ec874;
case 0x5ec877:c.instructions+=77;goto B5ec877;
case 0x5ec87a:c.instructions+=76;goto B5ec87a;
case 0x5ec87d:c.instructions+=75;goto B5ec87d;
case 0x5ec880:c.instructions+=74;goto B5ec880;
case 0x5ec883:c.instructions+=73;goto B5ec883;
case 0x5ec886:c.instructions+=72;goto B5ec886;
case 0x5ec889:c.instructions+=71;goto B5ec889;
case 0x5ec88c:c.instructions+=70;goto B5ec88c;
case 0x5ec88f:c.instructions+=69;goto B5ec88f;
case 0x5ec892:c.instructions+=68;goto B5ec892;
case 0x5ec895:c.instructions+=67;goto B5ec895;
case 0x5ec898:c.instructions+=66;goto B5ec898;
case 0x5ec89b:c.instructions+=65;goto B5ec89b;
case 0x5ec89e:c.instructions+=64;goto B5ec89e;
case 0x5ec8a1:c.instructions+=63;goto B5ec8a1;
case 0x5ec8a4:c.instructions+=62;goto B5ec8a4;
case 0x5ec8a6:c.instructions+=61;goto B5ec8a6;
case 0x5ec8a9:c.instructions+=60;goto B5ec8a9;
case 0x5ec8ab:c.instructions+=59;goto B5ec8ab;
case 0x5ec8ae:c.instructions+=58;goto B5ec8ae;
case 0x5ec8b1:c.instructions+=57;goto B5ec8b1;
case 0x5ec8b4:c.instructions+=56;goto B5ec8b4;
case 0x5ec8ba:c.instructions+=55;goto B5ec8ba;
case 0x5ec8c0:c.instructions+=54;goto B5ec8c0;
case 0x5ec8c6:c.instructions+=53;goto B5ec8c6;
case 0x5ec8cc:c.instructions+=52;goto B5ec8cc;
case 0x5ec8d2:c.instructions+=51;goto B5ec8d2;
case 0x5ec8d8:c.instructions+=50;goto B5ec8d8;
case 0x5ec8de:c.instructions+=49;goto B5ec8de;
case 0x5ec8e4:c.instructions+=48;goto B5ec8e4;
case 0x5ec8ea:c.instructions+=47;goto B5ec8ea;
case 0x5ec8f0:c.instructions+=46;goto B5ec8f0;
case 0x5ec8f6:c.instructions+=45;goto B5ec8f6;
case 0x5ec8fc:c.instructions+=44;goto B5ec8fc;
case 0x5ec902:c.instructions+=43;goto B5ec902;
case 0x5ec908:c.instructions+=42;goto B5ec908;
case 0x5ec90e:c.instructions+=41;goto B5ec90e;
case 0x5ec914:c.instructions+=40;goto B5ec914;
case 0x5ec917:c.instructions+=39;goto B5ec917;
case 0x5ec91a:c.instructions+=38;goto B5ec91a;
case 0x5ec91d:c.instructions+=37;goto B5ec91d;
case 0x5ec920:c.instructions+=36;goto B5ec920;
case 0x5ec922:c.instructions+=35;goto B5ec922;
case 0x5ec924:c.instructions+=34;goto B5ec924;
case 0x5ec92a:c.instructions+=33;goto B5ec92a;
case 0x5ec930:c.instructions+=32;goto B5ec930;
case 0x5ec936:c.instructions+=31;goto B5ec936;
case 0x5ec93c:c.instructions+=30;goto B5ec93c;
case 0x5ec942:c.instructions+=29;goto B5ec942;
case 0x5ec948:c.instructions+=28;goto B5ec948;
case 0x5ec94e:c.instructions+=27;goto B5ec94e;
case 0x5ec954:c.instructions+=26;goto B5ec954;
case 0x5ec95a:c.instructions+=25;goto B5ec95a;
case 0x5ec960:c.instructions+=24;goto B5ec960;
case 0x5ec966:c.instructions+=23;goto B5ec966;
case 0x5ec96c:c.instructions+=22;goto B5ec96c;
case 0x5ec972:c.instructions+=21;goto B5ec972;
case 0x5ec978:c.instructions+=20;goto B5ec978;
case 0x5ec97e:c.instructions+=19;goto B5ec97e;
case 0x5ec984:c.instructions+=18;goto B5ec984;
case 0x5ec98a:c.instructions+=17;goto B5ec98a;
case 0x5ec990:c.instructions+=16;goto B5ec990;
case 0x5ec996:c.instructions+=15;goto B5ec996;
case 0x5ec99c:c.instructions+=14;goto B5ec99c;
case 0x5ec99f:c.instructions+=13;goto B5ec99f;
case 0x5ec9a5:c.instructions+=12;goto B5ec9a5;
case 0x5ec9ab:c.instructions+=11;goto B5ec9ab;
case 0x5ec9b1:c.instructions+=10;goto B5ec9b1;
case 0x5ec9b7:c.instructions+=9;goto B5ec9b7;
case 0x5ec9b9:c.instructions+=8;goto B5ec9b9;
case 0x5ec9ba:c.instructions+=7;goto B5ec9ba;
case 0x5ec9c0:c.instructions+=6;goto B5ec9c0;
case 0x5ec9c6:c.instructions+=5;goto B5ec9c6;
case 0x5ec9cc:c.instructions+=4;goto B5ec9cc;
case 0x5ec9d2:c.instructions+=3;goto B5ec9d2;
case 0x5ec9d3:c.instructions+=2;goto B5ec9d3;
case 0x5ec9d4:c.instructions+=1;goto B5ec9d4;
case 0x5ec9d7:goto L5ec9d7;
case 0x5ec9d8:c.instructions+=7;goto B5ec9d8;
case 0x5ec9d9:c.instructions+=6;goto B5ec9d9;
case 0x5ec9dd:c.instructions+=5;goto B5ec9dd;
case 0x5ec9e3:c.instructions+=4;goto B5ec9e3;
case 0x5ec9e5:c.instructions+=3;goto B5ec9e5;
case 0x5ec9e9:c.instructions+=2;goto B5ec9e9;
case 0x5ec9ec:c.instructions+=1;goto B5ec9ec;
case 0x5ec9f0:goto L5ec9f0;
case 0x5ec9f4:c.instructions+=19;goto B5ec9f4;
case 0x5ec9f7:c.instructions+=18;goto B5ec9f7;
case 0x5ec9fa:c.instructions+=17;goto B5ec9fa;
case 0x5ec9fd:c.instructions+=16;goto B5ec9fd;
case 0x5eca00:c.instructions+=15;goto B5eca00;
case 0x5eca03:c.instructions+=14;goto B5eca03;
case 0x5eca06:c.instructions+=13;goto B5eca06;
case 0x5eca09:c.instructions+=12;goto B5eca09;
case 0x5eca0c:c.instructions+=11;goto B5eca0c;
case 0x5eca0f:c.instructions+=10;goto B5eca0f;
case 0x5eca12:c.instructions+=9;goto B5eca12;
case 0x5eca15:c.instructions+=8;goto B5eca15;
case 0x5eca18:c.instructions+=7;goto B5eca18;
case 0x5eca1b:c.instructions+=6;goto B5eca1b;
case 0x5eca1e:c.instructions+=5;goto B5eca1e;
case 0x5eca20:c.instructions+=4;goto B5eca20;
case 0x5eca23:c.instructions+=3;goto B5eca23;
case 0x5eca29:c.instructions+=2;goto B5eca29;
case 0x5eca2f:c.instructions+=1;goto B5eca2f;
case 0x5eca34:goto L5eca34;
case 0x5eca35:c.instructions+=4;goto B5eca35;
case 0x5eca38:c.instructions+=3;goto B5eca38;
case 0x5eca39:c.instructions+=2;goto B5eca39;
case 0x5eca3a:c.instructions+=1;goto B5eca3a;
case 0x5eca3f:goto L5eca3f;
case 0x5eca42:c.instructions+=2;goto B5eca42;
case 0x5eca45:c.instructions+=1;goto B5eca45;
case 0x5eca47:goto L5eca47;
case 0x5eca4b:c.instructions+=7;goto B5eca4b;
case 0x5eca4d:c.instructions+=6;goto B5eca4d;
case 0x5eca54:c.instructions+=5;goto B5eca54;
case 0x5eca57:c.instructions+=4;goto B5eca57;
case 0x5eca58:c.instructions+=3;goto B5eca58;
case 0x5eca59:c.instructions+=2;goto B5eca59;
case 0x5eca5a:c.instructions+=1;goto B5eca5a;
case 0x5eca5f:goto L5eca5f;
case 0x5eca62:goto L5eca62;
case 0x5eca66:c.instructions+=20;goto B5eca66;
case 0x5eca69:c.instructions+=19;goto B5eca69;
case 0x5eca6d:c.instructions+=18;goto B5eca6d;
case 0x5eca71:c.instructions+=17;goto B5eca71;
case 0x5eca75:c.instructions+=16;goto B5eca75;
case 0x5eca79:c.instructions+=15;goto B5eca79;
case 0x5eca7d:c.instructions+=14;goto B5eca7d;
case 0x5eca7f:c.instructions+=13;goto B5eca7f;
case 0x5eca82:c.instructions+=12;goto B5eca82;
case 0x5eca85:c.instructions+=11;goto B5eca85;
case 0x5eca88:c.instructions+=10;goto B5eca88;
case 0x5eca8a:c.instructions+=9;goto B5eca8a;
case 0x5eca8d:c.instructions+=8;goto B5eca8d;
case 0x5eca90:c.instructions+=7;goto B5eca90;
case 0x5eca93:c.instructions+=6;goto B5eca93;
case 0x5eca95:c.instructions+=5;goto B5eca95;
case 0x5eca98:c.instructions+=4;goto B5eca98;
case 0x5eca9e:c.instructions+=3;goto B5eca9e;
case 0x5ecaa2:c.instructions+=2;goto B5ecaa2;
case 0x5ecaa5:c.instructions+=1;goto B5ecaa5;
case 0x5ecaab:goto L5ecaab;
case 0x5ecaac:c.instructions+=5;goto B5ecaac;
case 0x5ecaad:c.instructions+=4;goto B5ecaad;
case 0x5ecaae:c.instructions+=3;goto B5ecaae;
case 0x5ecaaf:c.instructions+=2;goto B5ecaaf;
case 0x5ecab0:c.instructions+=1;goto B5ecab0;
case 0x5ecac0:goto L5ecac0;
case 0x5ecac6:c.instructions+=42;goto B5ecac6;
case 0x5ecacc:c.instructions+=41;goto B5ecacc;
case 0x5ecad2:c.instructions+=40;goto B5ecad2;
case 0x5ecad8:c.instructions+=39;goto B5ecad8;
case 0x5ecade:c.instructions+=38;goto B5ecade;
case 0x5ecae0:c.instructions+=37;goto B5ecae0;
case 0x5ecae4:c.instructions+=36;goto B5ecae4;
case 0x5ecaea:c.instructions+=35;goto B5ecaea;
case 0x5ecaf0:c.instructions+=34;goto B5ecaf0;
case 0x5ecaf4:c.instructions+=33;goto B5ecaf4;
case 0x5ecafa:c.instructions+=32;goto B5ecafa;
case 0x5ecb00:c.instructions+=31;goto B5ecb00;
case 0x5ecb06:c.instructions+=30;goto B5ecb06;
case 0x5ecb0c:c.instructions+=29;goto B5ecb0c;
case 0x5ecb12:c.instructions+=28;goto B5ecb12;
case 0x5ecb14:c.instructions+=27;goto B5ecb14;
case 0x5ecb18:c.instructions+=26;goto B5ecb18;
case 0x5ecb1e:c.instructions+=25;goto B5ecb1e;
case 0x5ecb24:c.instructions+=24;goto B5ecb24;
case 0x5ecb28:c.instructions+=23;goto B5ecb28;
case 0x5ecb2e:c.instructions+=22;goto B5ecb2e;
case 0x5ecb34:c.instructions+=21;goto B5ecb34;
case 0x5ecb3a:c.instructions+=20;goto B5ecb3a;
case 0x5ecb40:c.instructions+=19;goto B5ecb40;
case 0x5ecb46:c.instructions+=18;goto B5ecb46;
case 0x5ecb48:c.instructions+=17;goto B5ecb48;
case 0x5ecb4c:c.instructions+=16;goto B5ecb4c;
case 0x5ecb52:c.instructions+=15;goto B5ecb52;
case 0x5ecb58:c.instructions+=14;goto B5ecb58;
case 0x5ecb5c:c.instructions+=13;goto B5ecb5c;
case 0x5ecb62:c.instructions+=12;goto B5ecb62;
case 0x5ecb68:c.instructions+=11;goto B5ecb68;
case 0x5ecb6e:c.instructions+=10;goto B5ecb6e;
case 0x5ecb74:c.instructions+=9;goto B5ecb74;
case 0x5ecb7a:c.instructions+=8;goto B5ecb7a;
case 0x5ecb7c:c.instructions+=7;goto B5ecb7c;
case 0x5ecb80:c.instructions+=6;goto B5ecb80;
case 0x5ecb86:c.instructions+=5;goto B5ecb86;
case 0x5ecb8c:c.instructions+=4;goto B5ecb8c;
case 0x5ecb90:c.instructions+=3;goto B5ecb90;
case 0x5ecb96:c.instructions+=2;goto B5ecb96;
case 0x5ecb9c:c.instructions+=1;goto B5ecb9c;
case 0x5ecba0:goto L5ecba0;
case 0x5ecba1:c.instructions+=6;goto B5ecba1;
case 0x5ecba2:c.instructions+=5;goto B5ecba2;
case 0x5ecba4:c.instructions+=4;goto B5ecba4;
case 0x5ecba7:c.instructions+=3;goto B5ecba7;
case 0x5ecbaa:c.instructions+=2;goto B5ecbaa;
case 0x5ecbac:c.instructions+=1;goto B5ecbac;
case 0x5ecbae:goto L5ecbae;
case 0x5ecbb5:c.instructions+=1;goto B5ecbb5;
case 0x5ecbb7:goto L5ecbb7;
case 0x5ecbbb:c.instructions+=7;goto B5ecbbb;
case 0x5ecbbc:c.instructions+=6;goto B5ecbbc;
case 0x5ecbbe:c.instructions+=5;goto B5ecbbe;
case 0x5ecbc0:c.instructions+=4;goto B5ecbc0;
case 0x5ecbc3:c.instructions+=3;goto B5ecbc3;
case 0x5ecbc4:c.instructions+=2;goto B5ecbc4;
case 0x5ecbca:c.instructions+=1;goto B5ecbca;
case 0x5ecbcf:goto L5ecbcf;
case 0x5ecbd3:c.instructions+=2;goto B5ecbd3;
case 0x5ecbd5:c.instructions+=1;goto B5ecbd5;
case 0x5ecbd7:goto L5ecbd7;
case 0x5ecbda:c.instructions+=6;goto B5ecbda;
case 0x5ecbe0:c.instructions+=5;goto B5ecbe0;
case 0x5ecbe2:c.instructions+=4;goto B5ecbe2;
case 0x5ecbe4:c.instructions+=3;goto B5ecbe4;
case 0x5ecbe6:c.instructions+=2;goto B5ecbe6;
case 0x5ecbe9:c.instructions+=1;goto B5ecbe9;
case 0x5ecbeb:goto L5ecbeb;
case 0x5ecbf5:c.instructions+=3;goto B5ecbf5;
case 0x5ecbf6:c.instructions+=2;goto B5ecbf6;
case 0x5ecbf7:c.instructions+=1;goto B5ecbf7;
case 0x5ecbf8:goto L5ecbf8;
case 0x5ecbfa:goto L5ecbfa;
case 0x5ecbfb:c.instructions+=2;goto B5ecbfb;
case 0x5ecbfc:c.instructions+=1;goto B5ecbfc;
case 0x5ecc00:goto L5ecc00;
case 0x5ecc01:c.instructions+=5;goto B5ecc01;
case 0x5ecc05:c.instructions+=4;goto B5ecc05;
case 0x5ecc06:c.instructions+=3;goto B5ecc06;
case 0x5ecc07:c.instructions+=2;goto B5ecc07;
case 0x5ecc09:c.instructions+=1;goto B5ecc09;
case 0x5ecc0e:goto L5ecc0e;
case 0x5ecc15:c.instructions+=8;goto B5ecc15;
case 0x5ecc1b:c.instructions+=7;goto B5ecc1b;
case 0x5ecc21:c.instructions+=6;goto B5ecc21;
case 0x5ecc24:c.instructions+=5;goto B5ecc24;
case 0x5ecc26:c.instructions+=4;goto B5ecc26;
case 0x5ecc2c:c.instructions+=3;goto B5ecc2c;
case 0x5ecc2e:c.instructions+=2;goto B5ecc2e;
case 0x5ecc31:c.instructions+=1;goto B5ecc31;
case 0x5ecc33:goto L5ecc33;
case 0x5ecc39:c.instructions+=6;goto B5ecc39;
case 0x5ecc3b:c.instructions+=5;goto B5ecc3b;
case 0x5ecc3d:c.instructions+=4;goto B5ecc3d;
case 0x5ecc43:c.instructions+=3;goto B5ecc43;
case 0x5ecc45:c.instructions+=2;goto B5ecc45;
case 0x5ecc48:c.instructions+=1;goto B5ecc48;
case 0x5ecc4a:goto L5ecc4a;
case 0x5ecc50:c.instructions+=3;goto B5ecc50;
case 0x5ecc52:c.instructions+=2;goto B5ecc52;
case 0x5ecc58:c.instructions+=1;goto B5ecc58;
case 0x5ecc5b:goto L5ecc5b;
case 0x5ecc5c:c.instructions+=2;goto B5ecc5c;
case 0x5ecc5d:c.instructions+=1;goto B5ecc5d;
case 0x5ecc62:goto L5ecc62;
case 0x5ecc63:c.instructions+=5;goto B5ecc63;
case 0x5ecc66:c.instructions+=4;goto B5ecc66;
case 0x5ecc67:c.instructions+=3;goto B5ecc67;
case 0x5ecc6a:c.instructions+=2;goto B5ecc6a;
case 0x5ecc6b:c.instructions+=1;goto B5ecc6b;
case 0x5ecc70:goto L5ecc70;
case 0x5ecc73:c.instructions+=11;goto B5ecc73;
case 0x5ecc76:c.instructions+=10;goto B5ecc76;
case 0x5ecc79:c.instructions+=9;goto B5ecc79;
case 0x5ecc7b:c.instructions+=8;goto B5ecc7b;
case 0x5ecc7e:c.instructions+=7;goto B5ecc7e;
case 0x5ecc81:c.instructions+=6;goto B5ecc81;
case 0x5ecc82:c.instructions+=5;goto B5ecc82;
case 0x5ecc85:c.instructions+=4;goto B5ecc85;
case 0x5ecc88:c.instructions+=3;goto B5ecc88;
case 0x5ecc8f:c.instructions+=2;goto B5ecc8f;
case 0x5ecc90:c.instructions+=1;goto B5ecc90;
case 0x5ecca0:goto L5ecca0;
case 0x5ecca4:c.instructions+=6;goto B5ecca4;
case 0x5ecca5:c.instructions+=5;goto B5ecca5;
case 0x5ecca8:c.instructions+=4;goto B5ecca8;
case 0x5eccae:c.instructions+=3;goto B5eccae;
case 0x5eccaf:c.instructions+=2;goto B5eccaf;
case 0x5eccb1:c.instructions+=1;goto B5eccb1;
case 0x5eccb6:goto L5eccb6;
case 0x5eccb8:c.instructions+=1;goto B5eccb8;
case 0x5eccba:goto L5eccba;
case 0x5eccbb:c.instructions+=2;goto B5eccbb;
case 0x5eccbd:c.instructions+=1;goto B5eccbd;
case 0x5eccc2:goto L5eccc2;
case 0x5eccc3:c.instructions+=1;goto B5eccc3;
case 0x5eccd0:goto L5eccd0;
case 0x5eccd1:c.instructions+=2;goto B5eccd1;
case 0x5eccd5:c.instructions+=1;goto B5eccd5;
case 0x5eccd7:goto L5eccd7;
case 0x5eccda:c.instructions+=8;goto B5eccda;
case 0x5eccdd:c.instructions+=7;goto B5eccdd;
case 0x5ecce3:c.instructions+=6;goto B5ecce3;
case 0x5ecce7:c.instructions+=5;goto B5ecce7;
case 0x5ecceb:c.instructions+=4;goto B5ecceb;
case 0x5eccf1:c.instructions+=3;goto B5eccf1;
case 0x5eccf3:c.instructions+=2;goto B5eccf3;
case 0x5eccf6:c.instructions+=1;goto B5eccf6;
case 0x5eccf8:goto L5eccf8;
case 0x5eccfc:c.instructions+=5;goto B5eccfc;
case 0x5ecd02:c.instructions+=4;goto B5ecd02;
case 0x5ecd06:c.instructions+=3;goto B5ecd06;
case 0x5ecd08:c.instructions+=2;goto B5ecd08;
case 0x5ecd0b:c.instructions+=1;goto B5ecd0b;
case 0x5ecd0d:goto L5ecd0d;
case 0x5ecd0f:c.instructions+=3;goto B5ecd0f;
case 0x5ecd15:c.instructions+=2;goto B5ecd15;
case 0x5ecd16:c.instructions+=1;goto B5ecd16;
case 0x5ecd17:goto L5ecd17;
case 0x5ecd1d:c.instructions+=2;goto B5ecd1d;
case 0x5ecd1e:c.instructions+=1;goto B5ecd1e;
case 0x5ecd1f:goto L5ecd1f;
case 0x5ecd25:goto L5ecd25;
case 0x5ecd26:c.instructions+=1;goto B5ecd26;
case 0x5ecd30:goto L5ecd30;
case 0x5ecd33:c.instructions+=2;goto B5ecd33;
case 0x5ecd36:c.instructions+=1;goto B5ecd36;
case 0x5ecd38:goto L5ecd38;
case 0x5ecd3b:c.instructions+=2;goto B5ecd3b;
case 0x5ecd3e:c.instructions+=1;goto B5ecd3e;
case 0x5ecd43:goto L5ecd43;
case 0x5ecd46:c.instructions+=1;goto B5ecd46;
case 0x5ecd48:goto L5ecd48;
case 0x5ecd4b:c.instructions+=4;goto B5ecd4b;
case 0x5ecd4e:c.instructions+=3;goto B5ecd4e;
case 0x5ecd52:c.instructions+=2;goto B5ecd52;
case 0x5ecd59:c.instructions+=1;goto B5ecd59;
case 0x5ecd5c:goto L5ecd5c;
case 0x5ecd62:c.instructions+=1;goto B5ecd62;
case 0x5ecd70:goto L5ecd70;
case 0x5ecd74:c.instructions+=1;goto B5ecd74;
case 0x5ecd76:goto L5ecd76;
case 0x5ecd79:c.instructions+=6;goto B5ecd79;
case 0x5ecd7c:c.instructions+=5;goto B5ecd7c;
case 0x5ecd7f:c.instructions+=4;goto B5ecd7f;
case 0x5ecd81:c.instructions+=3;goto B5ecd81;
case 0x5ecd83:c.instructions+=2;goto B5ecd83;
case 0x5ecd86:c.instructions+=1;goto B5ecd86;
case 0x5ecd87:goto L5ecd87;
case 0x5ecd89:c.instructions+=1;goto B5ecd89;
case 0x5ecd90:goto L5ecd90;
case 0x5ecd94:c.instructions+=1;goto B5ecd94;
case 0x5ecd96:goto L5ecd96;
case 0x5ecd99:c.instructions+=3;goto B5ecd99;
case 0x5ecd9c:c.instructions+=2;goto B5ecd9c;
case 0x5ecd9f:c.instructions+=1;goto B5ecd9f;
case 0x5ecda0:goto L5ecda0;
case 0x5ecda6:c.instructions+=1;goto B5ecda6;
case 0x5ecdb0:goto L5ecdb0;
case 0x5ecdb6:c.instructions+=8;goto B5ecdb6;
case 0x5ecdb9:c.instructions+=7;goto B5ecdb9;
case 0x5ecdbf:c.instructions+=6;goto B5ecdbf;
case 0x5ecdc5:c.instructions+=5;goto B5ecdc5;
case 0x5ecdc7:c.instructions+=4;goto B5ecdc7;
case 0x5ecdcd:c.instructions+=3;goto B5ecdcd;
case 0x5ecdcf:c.instructions+=2;goto B5ecdcf;
case 0x5ecdd2:c.instructions+=1;goto B5ecdd2;
case 0x5ecdd4:goto L5ecdd4;
case 0x5ecdda:c.instructions+=3;goto B5ecdda;
case 0x5ecddc:c.instructions+=2;goto B5ecddc;
case 0x5ecddf:c.instructions+=1;goto B5ecddf;
case 0x5ecde1:goto L5ecde1;
case 0x5ecde3:c.instructions+=1;goto B5ecde3;
case 0x5ecde4:goto L5ecde4;
case 0x5ecde6:goto L5ecde6;
case 0x5ecde9:c.instructions+=1;goto B5ecde9;
case 0x5ecdf0:goto L5ecdf0;
case 0x5ecdf3:c.instructions+=1;goto B5ecdf3;
case 0x5ece00:goto L5ece00;
case 0x5ece04:c.instructions+=1;goto B5ece04;
case 0x5ece06:goto L5ece06;
case 0x5ece09:c.instructions+=2;goto B5ece09;
case 0x5ece0c:c.instructions+=1;goto B5ece0c;
case 0x5ece11:goto L5ece11;
case 0x5ece13:c.instructions+=3;goto B5ece13;
case 0x5ece15:c.instructions+=2;goto B5ece15;
case 0x5ece17:c.instructions+=1;goto B5ece17;
case 0x5ece18:goto L5ece18;
case 0x5ece1a:c.instructions+=1;goto B5ece1a;
case 0x5ece20:goto L5ece20;
case 0x5ece24:c.instructions+=1;goto B5ece24;
case 0x5ece26:goto L5ece26;
case 0x5ece29:c.instructions+=6;goto B5ece29;
case 0x5ece2c:c.instructions+=5;goto B5ece2c;
case 0x5ece2f:c.instructions+=4;goto B5ece2f;
case 0x5ece35:c.instructions+=3;goto B5ece35;
case 0x5ece37:c.instructions+=2;goto B5ece37;
case 0x5ece3a:c.instructions+=1;goto B5ece3a;
case 0x5ece3c:goto L5ece3c;
case 0x5ece41:c.instructions+=5;goto B5ece41;
case 0x5ece43:c.instructions+=4;goto B5ece43;
case 0x5ece45:c.instructions+=3;goto B5ece45;
case 0x5ece48:c.instructions+=2;goto B5ece48;
case 0x5ece4a:c.instructions+=1;goto B5ece4a;
case 0x5ece4b:goto L5ece4b;
case 0x5ece4d:c.instructions+=5;goto B5ece4d;
case 0x5ece4f:c.instructions+=4;goto B5ece4f;
case 0x5ece51:c.instructions+=3;goto B5ece51;
case 0x5ece54:c.instructions+=2;goto B5ece54;
case 0x5ece56:c.instructions+=1;goto B5ece56;
case 0x5ece57:goto L5ece57;
case 0x5ece59:c.instructions+=1;goto B5ece59;
case 0x5ece60:goto L5ece60;
case 0x5ece64:c.instructions+=1;goto B5ece64;
case 0x5ece66:goto L5ece66;
case 0x5ece69:c.instructions+=6;goto B5ece69;
case 0x5ece6c:c.instructions+=5;goto B5ece6c;
case 0x5ece6f:c.instructions+=4;goto B5ece6f;
case 0x5ece75:c.instructions+=3;goto B5ece75;
case 0x5ece77:c.instructions+=2;goto B5ece77;
case 0x5ece7a:c.instructions+=1;goto B5ece7a;
case 0x5ece7c:goto L5ece7c;
case 0x5ece81:c.instructions+=5;goto B5ece81;
case 0x5ece83:c.instructions+=4;goto B5ece83;
case 0x5ece85:c.instructions+=3;goto B5ece85;
case 0x5ece88:c.instructions+=2;goto B5ece88;
case 0x5ece8a:c.instructions+=1;goto B5ece8a;
case 0x5ece8b:goto L5ece8b;
case 0x5ece8d:c.instructions+=5;goto B5ece8d;
case 0x5ece8f:c.instructions+=4;goto B5ece8f;
case 0x5ece91:c.instructions+=3;goto B5ece91;
case 0x5ece94:c.instructions+=2;goto B5ece94;
case 0x5ece96:c.instructions+=1;goto B5ece96;
case 0x5ece97:goto L5ece97;
case 0x5ece99:c.instructions+=1;goto B5ece99;
case 0x5ecea0:goto L5ecea0;
case 0x5ecea4:c.instructions+=1;goto B5ecea4;
case 0x5ecea6:goto L5ecea6;
case 0x5ecea9:c.instructions+=3;goto B5ecea9;
case 0x5eceac:c.instructions+=2;goto B5eceac;
case 0x5eceaf:c.instructions+=1;goto B5eceaf;
case 0x5eceb0:goto L5eceb0;
case 0x5eceb6:c.instructions+=1;goto B5eceb6;
case 0x5ecec0:goto L5ecec0;
case 0x5ecec4:c.instructions+=2;goto B5ecec4;
case 0x5ecec6:c.instructions+=1;goto B5ecec6;
case 0x5ecec8:goto L5ecec8;
case 0x5ececb:goto L5ececb;
case 0x5ececf:c.instructions+=1;goto B5ececf;
case 0x5eced1:goto L5eced1;
case 0x5eced3:c.instructions+=3;goto B5eced3;
case 0x5eced6:c.instructions+=2;goto B5eced6;
case 0x5eced9:c.instructions+=1;goto B5eced9;
case 0x5ecedb:goto L5ecedb;
case 0x5ecee1:c.instructions+=4;goto B5ecee1;
case 0x5ecee7:c.instructions+=3;goto B5ecee7;
case 0x5ecee9:c.instructions+=2;goto B5ecee9;
case 0x5eceec:c.instructions+=1;goto B5eceec;
case 0x5eceee:goto L5eceee;
case 0x5ecef3:c.instructions+=5;goto B5ecef3;
case 0x5ecef5:c.instructions+=4;goto B5ecef5;
case 0x5ecef8:c.instructions+=3;goto B5ecef8;
case 0x5ecefa:c.instructions+=2;goto B5ecefa;
case 0x5ecf00:c.instructions+=1;goto B5ecf00;
case 0x5ecf03:goto L5ecf03;
case 0x5ecf05:c.instructions+=3;goto B5ecf05;
case 0x5ecf07:c.instructions+=2;goto B5ecf07;
case 0x5ecf0a:c.instructions+=1;goto B5ecf0a;
case 0x5ecf0c:goto L5ecf0c;
case 0x5ecf12:c.instructions+=1;goto B5ecf12;
case 0x5ecf15:goto L5ecf15;
case 0x5ecf1b:c.instructions+=1;goto B5ecf1b;
case 0x5ecf20:goto L5ecf20;
case 0x5ecf24:c.instructions+=2;goto B5ecf24;
case 0x5ecf26:c.instructions+=1;goto B5ecf26;
case 0x5ecf28:goto L5ecf28;
case 0x5ecf2c:c.instructions+=2;goto B5ecf2c;
case 0x5ecf2e:c.instructions+=1;goto B5ecf2e;
case 0x5ecf30:goto L5ecf30;
case 0x5ecf37:c.instructions+=11;goto B5ecf37;
case 0x5ecf3a:c.instructions+=10;goto B5ecf3a;
case 0x5ecf3d:c.instructions+=9;goto B5ecf3d;
case 0x5ecf40:c.instructions+=8;goto B5ecf40;
case 0x5ecf42:c.instructions+=7;goto B5ecf42;
case 0x5ecf44:c.instructions+=6;goto B5ecf44;
case 0x5ecf4a:c.instructions+=5;goto B5ecf4a;
case 0x5ecf4e:c.instructions+=4;goto B5ecf4e;
case 0x5ecf54:c.instructions+=3;goto B5ecf54;
case 0x5ecf5a:c.instructions+=2;goto B5ecf5a;
case 0x5ecf60:c.instructions+=1;goto B5ecf60;
case 0x5ecf63:goto L5ecf63;
case 0x5ecf6a:c.instructions+=1;goto B5ecf6a;
case 0x5ecf70:goto L5ecf70;
case 0x5ecf71:c.instructions+=10;goto B5ecf71;
case 0x5ecf73:c.instructions+=9;goto B5ecf73;
case 0x5ecf76:c.instructions+=8;goto B5ecf76;
case 0x5ecf79:c.instructions+=7;goto B5ecf79;
case 0x5ecf7a:c.instructions+=6;goto B5ecf7a;
case 0x5ecf7b:c.instructions+=5;goto B5ecf7b;
case 0x5ecf7d:c.instructions+=4;goto B5ecf7d;
case 0x5ecf80:c.instructions+=3;goto B5ecf80;
case 0x5ecf82:c.instructions+=2;goto B5ecf82;
case 0x5ecf83:c.instructions+=1;goto B5ecf83;
case 0x5ecf89:goto L5ecf89;
case 0x5ecf8c:c.instructions+=2;goto B5ecf8c;
case 0x5ecf8e:c.instructions+=1;goto B5ecf8e;
case 0x5ecf94:goto L5ecf94;
case 0x5ecf97:c.instructions+=2;goto B5ecf97;
case 0x5ecf99:c.instructions+=1;goto B5ecf99;
case 0x5ecf9f:goto L5ecf9f;
case 0x5ecfa1:c.instructions+=1;goto B5ecfa1;
case 0x5ecfa4:goto L5ecfa4;
case 0x5ecfa6:c.instructions+=2;goto B5ecfa6;
case 0x5ecfa8:c.instructions+=1;goto B5ecfa8;
case 0x5ecfae:goto L5ecfae;
case 0x5ecfb4:c.instructions+=7;goto B5ecfb4;
case 0x5ecfb9:c.instructions+=6;goto B5ecfb9;
case 0x5ecfbf:c.instructions+=5;goto B5ecfbf;
case 0x5ecfc0:c.instructions+=4;goto B5ecfc0;
case 0x5ecfc1:c.instructions+=3;goto B5ecfc1;
case 0x5ecfc2:c.instructions+=2;goto B5ecfc2;
case 0x5ecfc6:c.instructions+=1;goto B5ecfc6;
case 0x5ecfcb:goto L5ecfcb;
case 0x5ecfcf:c.instructions+=4;goto B5ecfcf;
case 0x5ecfd2:c.instructions+=3;goto B5ecfd2;
case 0x5ecfd4:c.instructions+=2;goto B5ecfd4;
case 0x5ecfd7:c.instructions+=1;goto B5ecfd7;
case 0x5ecfdd:goto L5ecfdd;
case 0x5ecfe3:c.instructions+=4;goto B5ecfe3;
case 0x5ecfe9:c.instructions+=3;goto B5ecfe9;
case 0x5ecfeb:c.instructions+=2;goto B5ecfeb;
case 0x5ecfee:c.instructions+=1;goto B5ecfee;
case 0x5ecff4:goto L5ecff4;
case 0x5ecffb:c.instructions+=1;goto B5ecffb;
default:missing_instruction(c.pc);}
B5ec002:L5ec002:{c.instructions+=3;NFSU2_TR(0x5ec002);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r1(U+0))));
}
B5ec004:{NFSU2_TR(0x5ec004);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5ec006:{NFSU2_TR(0x5ec006);
if(r1(R+518)){{goto L5ec00e;}}
}
B5ec008:L5ec008:{c.instructions+=3;NFSU2_TR(0x5ec008);
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
B5ec00a:{NFSU2_TR(0x5ec00a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5ec00b:{NFSU2_TR(0x5ec00b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ec00e:L5ec00e:{c.instructions+=3;NFSU2_TR(0x5ec00e);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x974ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ec014:{NFSU2_TR(0x5ec014);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5ec016:{NFSU2_TR(0x5ec016);
if(r1(R+518)){{goto L5ec045;}}
}
B5ec018:L5ec018:{c.instructions+=2;NFSU2_TR(0x5ec018);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x7fffffffull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5ec01d:{NFSU2_TR(0x5ec01d);
if(r1(R+518)){{goto L5ec045;}}
}
B5ec01f:L5ec01f:{c.instructions+=9;NFSU2_TR(0x5ec01f);
__builtin_memmove((R+0),gp(0x86518c),4);
}
B5ec024:{NFSU2_TR(0x5ec024);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x974ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B5ec02a:{NFSU2_TR(0x5ec02a);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ec02e:{NFSU2_TR(0x5ec02e);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5ec032:{NFSU2_TR(0x5ec032);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ec038:{NFSU2_TR(0x5ec038);
{u32 ea_=u32(r4(R+8)+u32(2424u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5ec03e:{NFSU2_TR(0x5ec03e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5ec040:{NFSU2_TR(0x5ec040);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5ec043:{NFSU2_TR(0x5ec043);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L5ec053;}}
}
B5ec045:L5ec045:{c.instructions+=2;NFSU2_TR(0x5ec045);
u8 U[18];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x5b8ull))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+14,u32(u32(r4(U+4))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B5ec04b:{NFSU2_TR(0x5ec04b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ec053;}}
}
B5ec04d:L5ec04d:{c.instructions+=3;NFSU2_TR(0x5ec04d);
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
B5ec04f:{NFSU2_TR(0x5ec04f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5ec050:{NFSU2_TR(0x5ec050);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ec053:L5ec053:{c.instructions+=3;NFSU2_TR(0x5ec053);
w4(R+0,u32(0x1ull));
}
B5ec058:{NFSU2_TR(0x5ec058);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5ec059:{NFSU2_TR(0x5ec059);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ec060:L5ec060:{c.instructions+=2;NFSU2_TR(0x5ec060);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x998ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5ec066:{NFSU2_TR(0x5ec066);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ec070:L5ec070:{c.instructions+=3;NFSU2_TR(0x5ec070);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ec073:{NFSU2_TR(0x5ec073);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5ec076:{NFSU2_TR(0x5ec076);
if(r1(R+518)){{goto L5ec082;}}
}
B5ec078:L5ec078:{c.instructions+=2;NFSU2_TR(0x5ec078);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5ec07b:{NFSU2_TR(0x5ec07b);
if(r1(R+518)){{goto L5ec082;}}
}
B5ec07d:L5ec07d:{c.instructions+=2;NFSU2_TR(0x5ec07d);
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
B5ec080:{NFSU2_TR(0x5ec080);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ec08a;}}
}
B5ec082:L5ec082:{c.instructions+=2;NFSU2_TR(0x5ec082);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ec085:{NFSU2_TR(0x5ec085);
TAIL_STATIC(0x4024f0u,402);
}
B5ec08a:L5ec08a:{c.instructions+=2;NFSU2_TR(0x5ec08a);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ec090:{NFSU2_TR(0x5ec090);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ec0a0:L5ec0a0:{c.instructions+=2;NFSU2_TR(0x5ec0a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ec0a3:{NFSU2_TR(0x5ec0a3);
TAIL_STATIC(0x40f690u,40f);
}
B5ec0b0:L5ec0b0:{c.instructions+=3;NFSU2_TR(0x5ec0b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ec0b3:{NFSU2_TR(0x5ec0b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ec0b6:{NFSU2_TR(0x5ec0b6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ec0c0:L5ec0c0:{c.instructions+=3;NFSU2_TR(0x5ec0c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ec0c3:{NFSU2_TR(0x5ec0c3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5ec0c5:{NFSU2_TR(0x5ec0c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B5ec0d0:L5ec0d0:{c.instructions+=3;NFSU2_TR(0x5ec0d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ec0d3:{NFSU2_TR(0x5ec0d3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5ec0d5:{NFSU2_TR(0x5ec0d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
{u32 t_=u32(r4(U+4));TAIL_DYNAMIC(t_);}
}
B5ec0e0:L5ec0e0:{c.instructions+=3;NFSU2_TR(0x5ec0e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x954ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ec0e6:{NFSU2_TR(0x5ec0e6);
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
B5ec0e8:{NFSU2_TR(0x5ec0e8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ec15d;}}
}
B5ec0ea:L5ec0ea:{c.instructions+=4;NFSU2_TR(0x5ec0ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x94cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ec0f0:{NFSU2_TR(0x5ec0f0);
__builtin_memmove((R+8),gp(0x7fb720),4);
}
B5ec0f6:{NFSU2_TR(0x5ec0f6);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5ec0f8:{NFSU2_TR(0x5ec0f8);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L5ec10a;}}
}
B5ec0fa:L5ec0fa:{c.instructions+=3;NFSU2_TR(0x5ec0fa);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5ec0fe:{NFSU2_TR(0x5ec0fe);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+0)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5ec100:{NFSU2_TR(0x5ec100);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5ec11c;}}
}
B5ec102:L5ec102:{c.instructions+=2;NFSU2_TR(0x5ec102);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x94cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ec108:{NFSU2_TR(0x5ec108);
{goto L5ec11c;}
}
B5ec10a:L5ec10a:{c.instructions+=2;NFSU2_TR(0x5ec10a);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x950ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+8),r4(U+8)));
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
}
B5ec110:{NFSU2_TR(0x5ec110);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L5ec11c;}}
}
B5ec112:L5ec112:{c.instructions+=2;NFSU2_TR(0x5ec112);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ec116:{NFSU2_TR(0x5ec116);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x94cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ec11c:L5ec11c:{c.instructions+=3;NFSU2_TR(0x5ec11c);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ec120:{NFSU2_TR(0x5ec120);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x950ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+8)));
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+519,u8(s32(r4(U+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5ec126:{NFSU2_TR(0x5ec126);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5ec12e;}}
}
B5ec128:L5ec128:{c.instructions+=1;NFSU2_TR(0x5ec128);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x950ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ec12e:L5ec12e:{c.instructions+=15;NFSU2_TR(0x5ec12e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x950ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5ec134:{NFSU2_TR(0x5ec134);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ec135:{NFSU2_TR(0x5ec135);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x94cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5ec13b:{NFSU2_TR(0x5ec13b);
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+24))));
}
B5ec13d:{NFSU2_TR(0x5ec13d);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x51ull))));
}
B5ec140:{NFSU2_TR(0x5ec140);
w4(R+0,u32(0x63e7063full));
}
B5ec145:{NFSU2_TR(0x5ec145);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+8)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(u64(r8(U+16))>>32));
w4(R+0,u32(r8(U+16)));
}
B5ec147:{NFSU2_TR(0x5ec147);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B5ec14a:{NFSU2_TR(0x5ec14a);
__builtin_memmove((R+0),(R+8),4);
}
B5ec14c:{NFSU2_TR(0x5ec14c);
u8 U[4];
w4(U+0,u32(u32(u32(0x1full))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B5ec14f:{NFSU2_TR(0x5ec14f);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B5ec151:{NFSU2_TR(0x5ec151);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(u32(0x52ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B5ec154:{NFSU2_TR(0x5ec154);
u8 U[6];
w1(R+512,carry<u32>(r4(R+8),r4(R+24)));
w1(R+523,scarry<u32>(r4(R+8),r4(R+24)));
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+24))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5ec156:{NFSU2_TR(0x5ec156);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x950ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ec15c:{NFSU2_TR(0x5ec15c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5ec15d:L5ec15d:{c.instructions+=1;NFSU2_TR(0x5ec15d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ec160:L5ec160:{c.instructions+=17;NFSU2_TR(0x5ec160);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ec161:{NFSU2_TR(0x5ec161);
__builtin_memmove((R+8),gp(0x86518c),4);
}
B5ec167:{NFSU2_TR(0x5ec167);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ec168:{NFSU2_TR(0x5ec168);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x92cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5ec16e:{NFSU2_TR(0x5ec16e);
__builtin_memmove((R+0),(R+8),4);
}
B5ec170:{NFSU2_TR(0x5ec170);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+24))));
}
B5ec172:{NFSU2_TR(0x5ec172);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ec176:{NFSU2_TR(0x5ec176);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5ec17a:{NFSU2_TR(0x5ec17a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5ec17b:{NFSU2_TR(0x5ec17b);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ec181:{NFSU2_TR(0x5ec181);
{u32 ea_=u32(r4(R+4)+u32(2356u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ec187:{NFSU2_TR(0x5ec187);
{u32 ea_=u32(r4(R+4)+u32(2352u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5ec18d:{NFSU2_TR(0x5ec18d);
{u32 ea_=u32(r4(R+4)+u32(2360u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5ec193:{NFSU2_TR(0x5ec193);
__asm__ volatile(".byte 0xde,0xd9":::"memory");
}
B5ec195:{NFSU2_TR(0x5ec195);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5ec197:{NFSU2_TR(0x5ec197);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5ec19a:{NFSU2_TR(0x5ec19a);
if(r1(R+514)){{goto L5ec1de;}}
}
B5ec19c:L5ec19c:{c.instructions+=13;NFSU2_TR(0x5ec19c);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ec1a0:{NFSU2_TR(0x5ec1a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x92cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ec1a6:{NFSU2_TR(0x5ec1a6);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5ec1aa:{NFSU2_TR(0x5ec1aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x930ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ec1b0:{NFSU2_TR(0x5ec1b0);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5ec1b4:{NFSU2_TR(0x5ec1b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x938ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ec1ba:{NFSU2_TR(0x5ec1ba);
u8 U[5];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5ec1be:{NFSU2_TR(0x5ec1be);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x934ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ec1c4:{NFSU2_TR(0x5ec1c4);
u8 U[5];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B5ec1c8:{NFSU2_TR(0x5ec1c8);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x926ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5ec1ce:{NFSU2_TR(0x5ec1ce);
u8 U[5];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5ec1d2:{NFSU2_TR(0x5ec1d2);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x927ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5ec1d8:{NFSU2_TR(0x5ec1d8);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x928ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B5ec1de:L5ec1de:{c.instructions+=2;NFSU2_TR(0x5ec1de);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5ec1df:{NFSU2_TR(0x5ec1df);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ec1f0:L5ec1f0:{c.instructions+=4;NFSU2_TR(0x5ec1f0);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x390ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5ec1f6:{NFSU2_TR(0x5ec1f6);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ec1fc:{NFSU2_TR(0x5ec1fc);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5ec1fe:{NFSU2_TR(0x5ec1fe);
if(r1(R+518)){{goto L5ec208;}}
}
B5ec200:L5ec200:{c.instructions+=2;NFSU2_TR(0x5ec200);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5ec202:{NFSU2_TR(0x5ec202);
{u32 ea_=u32(u32(7884072u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ec208:L5ec208:{c.instructions+=3;NFSU2_TR(0x5ec208);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x391ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5ec20e:{NFSU2_TR(0x5ec20e);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5ec210:{NFSU2_TR(0x5ec210);
if(r1(R+518)){{goto L5ec218;}}
}
B5ec212:L5ec212:{c.instructions+=1;NFSU2_TR(0x5ec212);
{u32 ea_=u32(u32(7884072u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5ec218:L5ec218:{c.instructions+=3;NFSU2_TR(0x5ec218);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x392ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5ec21e:{NFSU2_TR(0x5ec21e);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5ec220:{NFSU2_TR(0x5ec220);
if(r1(R+518)){{goto L5ec228;}}
}
B5ec222:L5ec222:{c.instructions+=1;NFSU2_TR(0x5ec222);
{u32 ea_=u32(u32(7884072u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5ec228:L5ec228:{c.instructions+=3;NFSU2_TR(0x5ec228);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x393ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5ec22e:{NFSU2_TR(0x5ec22e);
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
B5ec230:{NFSU2_TR(0x5ec230);
if(r1(R+518)){{goto L5ec238;}}
}
B5ec232:L5ec232:{c.instructions+=1;NFSU2_TR(0x5ec232);
{u32 ea_=u32(u32(7884072u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5ec238:L5ec238:{c.instructions+=1;NFSU2_TR(0x5ec238);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ec240:L5ec240:{c.instructions+=3;NFSU2_TR(0x5ec240);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ec243:{NFSU2_TR(0x5ec243);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x110ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x110ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x110ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5ec248:{NFSU2_TR(0x5ec248);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ec250:L5ec250:{c.instructions+=18;NFSU2_TR(0x5ec250);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ec253:{NFSU2_TR(0x5ec253);
{u32 ea_=u32(r4(R+0)+u32(228u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ec259:{NFSU2_TR(0x5ec259);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5ec25f:{NFSU2_TR(0x5ec25f);
{u32 ea_=u32(r4(R+0)+u32(232u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ec265:{NFSU2_TR(0x5ec265);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ec269:{NFSU2_TR(0x5ec269);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B5ec26b:{NFSU2_TR(0x5ec26b);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5ec26d:{NFSU2_TR(0x5ec26d);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ec270:{NFSU2_TR(0x5ec270);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ec273:{NFSU2_TR(0x5ec273);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xf0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ec279:{NFSU2_TR(0x5ec279);
{u32 ea_=u32(r4(R+0)+u32(244u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ec27f:{NFSU2_TR(0x5ec27f);
{u32 ea_=u32(r4(R+0)+u32(248u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ec285:{NFSU2_TR(0x5ec285);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ec289:{NFSU2_TR(0x5ec289);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5ec28b:{NFSU2_TR(0x5ec28b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5ec28d:{NFSU2_TR(0x5ec28d);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ec290:{NFSU2_TR(0x5ec290);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ec293:{NFSU2_TR(0x5ec293);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ec2a0:L5ec2a0:{c.instructions+=43;NFSU2_TR(0x5ec2a0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ec2a1:{NFSU2_TR(0x5ec2a1);
__builtin_memmove((R+20),(R+16),4);
}
B5ec2a3:{NFSU2_TR(0x5ec2a3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B5ec2a6:{NFSU2_TR(0x5ec2a6);
u8 U[6];
w1(R+512,u8((r4(R+16))<(u32(0x20ull))));
w1(R+523,sborrow<u32>(r4(R+16),u32(0x20ull)));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x20ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5ec2a9:{NFSU2_TR(0x5ec2a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ec2ac:{NFSU2_TR(0x5ec2ac);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ec2ae:{NFSU2_TR(0x5ec2ae);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5ec2b2:{NFSU2_TR(0x5ec2b2);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ec2b5:{NFSU2_TR(0x5ec2b5);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ec2b8:{NFSU2_TR(0x5ec2b8);
__builtin_memmove((R+0),(R+16),4);
}
B5ec2bc:{NFSU2_TR(0x5ec2bc);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ec2c0:{NFSU2_TR(0x5ec2c0);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5ec2c2:{NFSU2_TR(0x5ec2c2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ec2c3:{NFSU2_TR(0x5ec2c3);
{u32 ea_=u32(r4(R+4)+u32(96u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5ec2c6:{NFSU2_TR(0x5ec2c6);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ec2ca:{NFSU2_TR(0x5ec2ca);
{u32 ea_=u32(r4(R+4)+u32(100u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5ec2cd:{NFSU2_TR(0x5ec2cd);
{u32 ea_=u32(r4(R+4)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ec2d0:{NFSU2_TR(0x5ec2d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ec2d3:{NFSU2_TR(0x5ec2d3);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B5ec2d7:{NFSU2_TR(0x5ec2d7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ec2d8:{NFSU2_TR(0x5ec2d8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ec2d9:{NFSU2_TR(0x5ec2d9);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5ec2db:{NFSU2_TR(0x5ec2db);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5ec2dd:{NFSU2_TR(0x5ec2dd);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ec2e1:{NFSU2_TR(0x5ec2e1);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ec2e5:{NFSU2_TR(0x5ec2e5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5ec2e7:{NFSU2_TR(0x5ec2e7);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B5ec2e9:{NFSU2_TR(0x5ec2e9);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B5ec2eb:{NFSU2_TR(0x5ec2eb);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5ec2ed:{NFSU2_TR(0x5ec2ed);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B5ec2ef:{NFSU2_TR(0x5ec2ef);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B5ec2f5:{NFSU2_TR(0x5ec2f5);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ec2f9:{NFSU2_TR(0x5ec2f9);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5ec2fb:{NFSU2_TR(0x5ec2fb);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ec2ff:{NFSU2_TR(0x5ec2ff);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5ec301:{NFSU2_TR(0x5ec301);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B5ec303:{NFSU2_TR(0x5ec303);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ec307:{NFSU2_TR(0x5ec307);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5ec309:{NFSU2_TR(0x5ec309);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5ec30b:{NFSU2_TR(0x5ec30b);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ec30f:{NFSU2_TR(0x5ec30f);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5ec311:{NFSU2_TR(0x5ec311);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5ec313:{NFSU2_TR(0x5ec313);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ec318ull));
TAIL_STATIC(0x43d1e0u,43d);
}
B5ec318:L5ec318:{c.instructions+=4;NFSU2_TR(0x5ec318);
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
B5ec31b:{NFSU2_TR(0x5ec31b);
__builtin_memmove((R+16),(R+20),4);
}
B5ec31d:{NFSU2_TR(0x5ec31d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5ec31e:{NFSU2_TR(0x5ec31e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ec330:L5ec330:{c.instructions+=9;NFSU2_TR(0x5ec330);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ec331:{NFSU2_TR(0x5ec331);
__builtin_memmove((R+20),(R+16),4);
}
B5ec333:{NFSU2_TR(0x5ec333);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B5ec336:{NFSU2_TR(0x5ec336);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B5ec339:{NFSU2_TR(0x5ec339);
{u32 ea_=u32(r4(R+20)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ec33c:{NFSU2_TR(0x5ec33c);
{u32 ea_=u32(u32(7881560u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5ec342:{NFSU2_TR(0x5ec342);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5ec344:{NFSU2_TR(0x5ec344);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5ec347:{NFSU2_TR(0x5ec347);
if(r1(R+514)){{goto L5ec370;}}
}
B5ec349:L5ec349:{c.instructions+=19;NFSU2_TR(0x5ec349);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ec34c:{NFSU2_TR(0x5ec34c);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ec34f:{NFSU2_TR(0x5ec34f);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ec352:{NFSU2_TR(0x5ec352);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ec354:{NFSU2_TR(0x5ec354);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B5ec356:{NFSU2_TR(0x5ec356);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5ec358:{NFSU2_TR(0x5ec358);
__asm__ volatile(".byte 0xd9,0xc2":::"memory");
}
B5ec35a:{NFSU2_TR(0x5ec35a);
__asm__ volatile(".byte 0xd8,0xcb":::"memory");
}
B5ec35c:{NFSU2_TR(0x5ec35c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5ec35e:{NFSU2_TR(0x5ec35e);
__asm__ volatile(".byte 0xd9,0xc3":::"memory");
}
B5ec360:{NFSU2_TR(0x5ec360);
__asm__ volatile(".byte 0xd8,0xcc":::"memory");
}
B5ec362:{NFSU2_TR(0x5ec362);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5ec364:{NFSU2_TR(0x5ec364);
__asm__ volatile(".byte 0xd9,0xfa":::"memory");
}
B5ec366:{NFSU2_TR(0x5ec366);
__asm__ volatile(".byte 0xdd,0xdb":::"memory");
}
B5ec368:{NFSU2_TR(0x5ec368);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5ec36a:{NFSU2_TR(0x5ec36a);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5ec36c:{NFSU2_TR(0x5ec36c);
__builtin_memmove((R+16),(R+20),4);
}
B5ec36e:{NFSU2_TR(0x5ec36e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5ec36f:{NFSU2_TR(0x5ec36f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ec370:L5ec370:{c.instructions+=5;NFSU2_TR(0x5ec370);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ec373:{NFSU2_TR(0x5ec373);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ec374:{NFSU2_TR(0x5ec374);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5ec378:{NFSU2_TR(0x5ec378);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ec379:{NFSU2_TR(0x5ec379);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ec37eull));
TAIL_STATIC(0x43cf10u,43c);
}
B5ec37e:L5ec37e:{c.instructions+=13;NFSU2_TR(0x5ec37e);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ec382:{NFSU2_TR(0x5ec382);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ec385:{NFSU2_TR(0x5ec385);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ec388:{NFSU2_TR(0x5ec388);
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
B5ec38b:{NFSU2_TR(0x5ec38b);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ec38f:{NFSU2_TR(0x5ec38f);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ec392:{NFSU2_TR(0x5ec392);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5ec394:{NFSU2_TR(0x5ec394);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ec398:{NFSU2_TR(0x5ec398);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ec39a:{NFSU2_TR(0x5ec39a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5ec39c:{NFSU2_TR(0x5ec39c);
__builtin_memmove((R+16),(R+20),4);
}
B5ec39e:{NFSU2_TR(0x5ec39e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5ec39f:{NFSU2_TR(0x5ec39f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ec3a0:L5ec3a0:{c.instructions+=9;NFSU2_TR(0x5ec3a0);
{u32 ea_=u32(r4(R+4)+u32(136u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ec3a6:{NFSU2_TR(0x5ec3a6);
{u32 ea_=u32(r4(R+4)+u32(152u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ec3ac:{NFSU2_TR(0x5ec3ac);
{u32 ea_=u32(r4(R+4)+u32(132u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ec3b2:{NFSU2_TR(0x5ec3b2);
{u32 ea_=u32(r4(R+4)+u32(148u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ec3b8:{NFSU2_TR(0x5ec3b8);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5ec3ba:{NFSU2_TR(0x5ec3ba);
{u32 ea_=u32(r4(R+4)+u32(128u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ec3c0:{NFSU2_TR(0x5ec3c0);
{u32 ea_=u32(r4(R+4)+u32(144u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ec3c6:{NFSU2_TR(0x5ec3c6);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5ec3c8:{NFSU2_TR(0x5ec3c8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ec3d0:L5ec3d0:{c.instructions+=14;NFSU2_TR(0x5ec3d0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ec3d1:{NFSU2_TR(0x5ec3d1);
__builtin_memmove((R+20),(R+16),4);
}
B5ec3d3:{NFSU2_TR(0x5ec3d3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B5ec3d6:{NFSU2_TR(0x5ec3d6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xd4ull))));
}
B5ec3dc:{NFSU2_TR(0x5ec3dc);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ec3dd:{NFSU2_TR(0x5ec3dd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ec3de:{NFSU2_TR(0x5ec3de);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ec3df:{NFSU2_TR(0x5ec3df);
__builtin_memmove((R+28),(R+4),4);
}
B5ec3e1:{NFSU2_TR(0x5ec3e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x430ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ec3e7:{NFSU2_TR(0x5ec3e7);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ec3eb:{NFSU2_TR(0x5ec3eb);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ec3ef:{NFSU2_TR(0x5ec3ef);
{u32 ea_=u32(u32(8017480u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B5ec3f5:{NFSU2_TR(0x5ec3f5);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ec3f8:{NFSU2_TR(0x5ec3f8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ec3fdull));
TAIL_STATIC(0x75bed4u,75b);
}
B5ec3fd:L5ec3fd:{c.instructions+=3;NFSU2_TR(0x5ec3fd);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x1ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x1ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5ec400:{NFSU2_TR(0x5ec400);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ec404:{NFSU2_TR(0x5ec404);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5ec415;}}
}
B5ec406:L5ec406:{c.instructions+=7;NFSU2_TR(0x5ec406);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ec40c:{NFSU2_TR(0x5ec40c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5ec40d:{NFSU2_TR(0x5ec40d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5ec40e:{NFSU2_TR(0x5ec40e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5ec40f:{NFSU2_TR(0x5ec40f);
__builtin_memmove((R+16),(R+20),4);
}
B5ec411:{NFSU2_TR(0x5ec411);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5ec412:{NFSU2_TR(0x5ec412);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ec415:L5ec415:{c.instructions+=7;NFSU2_TR(0x5ec415);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x60ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5ec418:{NFSU2_TR(0x5ec418);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ec419:{NFSU2_TR(0x5ec419);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x90ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5ec41f:{NFSU2_TR(0x5ec41f);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ec420:{NFSU2_TR(0x5ec420);
u8 U[4];
w4(U+0,u32(u32(u32(0xa8ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5ec427:{NFSU2_TR(0x5ec427);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ec428:{NFSU2_TR(0x5ec428);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ec42dull));
TAIL_STATIC(0x401340u,401);
}
B5ec42d:L5ec42d:{c.instructions+=6;NFSU2_TR(0x5ec42d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B5ec430:{NFSU2_TR(0x5ec430);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5ec438:{NFSU2_TR(0x5ec438);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5ec440:{NFSU2_TR(0x5ec440);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5ec448:{NFSU2_TR(0x5ec448);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5ec44a:{NFSU2_TR(0x5ec44a);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x130ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5ec450:L5ec450:{c.instructions+=12;NFSU2_TR(0x5ec450);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ec453:{NFSU2_TR(0x5ec453);
{u32 ea_=u32(r4(R+4)+r4(R+24)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ec457:{NFSU2_TR(0x5ec457);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5ec45b:{NFSU2_TR(0x5ec45b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ec45c:{NFSU2_TR(0x5ec45c);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5ec45e:{NFSU2_TR(0x5ec45e);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5ec462:{NFSU2_TR(0x5ec462);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ec466:{NFSU2_TR(0x5ec466);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ec467:{NFSU2_TR(0x5ec467);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ec468:{NFSU2_TR(0x5ec468);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5ec470:{NFSU2_TR(0x5ec470);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5ec478:{NFSU2_TR(0x5ec478);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ec47dull));
TAIL_STATIC(0x43c9c0u,43c);
}
B5ec47d:L5ec47d:{c.instructions+=7;NFSU2_TR(0x5ec47d);
u8 U[4];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5ec481:{NFSU2_TR(0x5ec481);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ec482:{NFSU2_TR(0x5ec482);
u8 U[4];
w4(U+0,u32(u32(u32(0xb0ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5ec489:{NFSU2_TR(0x5ec489);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ec48a:{NFSU2_TR(0x5ec48a);
u8 U[4];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5ec48e:{NFSU2_TR(0x5ec48e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ec48f:{NFSU2_TR(0x5ec48f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ec494ull));
TAIL_STATIC(0x43c9c0u,43c);
}
B5ec494:L5ec494:{c.instructions+=8;NFSU2_TR(0x5ec494);
u8 U[4];
w4(U+0,u32(0x3e800000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ec499:{NFSU2_TR(0x5ec499);
u8 U[4];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5ec49d:{NFSU2_TR(0x5ec49d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ec49e:{NFSU2_TR(0x5ec49e);
u8 U[4];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5ec4a2:{NFSU2_TR(0x5ec4a2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ec4a3:{NFSU2_TR(0x5ec4a3);
u8 U[4];
w4(U+0,u32(u32(u32(0x74ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5ec4a7:{NFSU2_TR(0x5ec4a7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ec4a8:{NFSU2_TR(0x5ec4a8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ec4adull));
TAIL_STATIC(0x43d0c0u,43d);
}
B5ec4ad:L5ec4ad:{c.instructions+=5;NFSU2_TR(0x5ec4ad);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x30ull))));
}
B5ec4b0:{NFSU2_TR(0x5ec4b0);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x28ull))));
}
B5ec4b3:{NFSU2_TR(0x5ec4b3);
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x40ull))));
}
B5ec4b6:{NFSU2_TR(0x5ec4b6);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xc0ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xc0ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5ec4bc:{NFSU2_TR(0x5ec4bc);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5ec450u);}goto L5ec450;}}
}
B5ec4be:L5ec4be:{c.instructions+=8;NFSU2_TR(0x5ec4be);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ec4c0:{NFSU2_TR(0x5ec4c0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ec4c2:{NFSU2_TR(0x5ec4c2);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ec4c4:{NFSU2_TR(0x5ec4c4);
u8 U[4];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5ec4c8:{NFSU2_TR(0x5ec4c8);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x5c4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5ec4ce:{NFSU2_TR(0x5ec4ce);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ec4cf:{NFSU2_TR(0x5ec4cf);
__builtin_memmove((R+4),(R+12),4);
}
B5ec4d1:{NFSU2_TR(0x5ec4d1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ec4d6ull));
TAIL_STATIC(0x5e7e70u,5e7);
}
B5ec4d6:L5ec4d6:{c.instructions+=6;NFSU2_TR(0x5ec4d6);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B5ec4da:{NFSU2_TR(0x5ec4da);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ec4e0:{NFSU2_TR(0x5ec4e0);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B5ec4e2:{NFSU2_TR(0x5ec4e2);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5ec4e4:{NFSU2_TR(0x5ec4e4);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5ec4e7:{NFSU2_TR(0x5ec4e7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ec4f5;}}
}
B5ec4e9:L5ec4e9:{c.instructions+=3;NFSU2_TR(0x5ec4e9);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5ec4eb:{NFSU2_TR(0x5ec4eb);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5ec4f3:{NFSU2_TR(0x5ec4f3);
{goto L5ec4f9;}
}
B5ec4f5:L5ec4f5:{c.instructions+=1;NFSU2_TR(0x5ec4f5);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ec4f9:L5ec4f9:{c.instructions+=10;NFSU2_TR(0x5ec4f9);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5ec4fd:{NFSU2_TR(0x5ec4fd);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5ec501:{NFSU2_TR(0x5ec501);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ec505:{NFSU2_TR(0x5ec505);
{u32 ea_=u32(r4(R+20)+u32(8u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B5ec508:{NFSU2_TR(0x5ec508);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ec50c:{NFSU2_TR(0x5ec50c);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ec510:{NFSU2_TR(0x5ec510);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5ec516:{NFSU2_TR(0x5ec516);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5ec518:{NFSU2_TR(0x5ec518);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5ec51b:{NFSU2_TR(0x5ec51b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ec527;}}
}
B5ec51d:L5ec51d:{c.instructions+=3;NFSU2_TR(0x5ec51d);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ec521:{NFSU2_TR(0x5ec521);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ec525:{NFSU2_TR(0x5ec525);
{goto L5ec52f;}
}
B5ec527:L5ec527:{c.instructions+=1;NFSU2_TR(0x5ec527);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5ec52f:L5ec52f:{c.instructions+=5;NFSU2_TR(0x5ec52f);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ec533:{NFSU2_TR(0x5ec533);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5ec539:{NFSU2_TR(0x5ec539);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5ec53b:{NFSU2_TR(0x5ec53b);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5ec53e:{NFSU2_TR(0x5ec53e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ec54c;}}
}
B5ec540:L5ec540:{c.instructions+=4;NFSU2_TR(0x5ec540);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ec544:{NFSU2_TR(0x5ec544);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5ec546:{NFSU2_TR(0x5ec546);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ec54a:{NFSU2_TR(0x5ec54a);
{goto L5ec554;}
}
B5ec54c:L5ec54c:{c.instructions+=1;NFSU2_TR(0x5ec54c);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5ec554:L5ec554:{c.instructions+=18;NFSU2_TR(0x5ec554);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ec557:{NFSU2_TR(0x5ec557);
{u32 ea_=u32(r4(R+0)+u32(616u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ec55d:{NFSU2_TR(0x5ec55d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ec560:{NFSU2_TR(0x5ec560);
{u32 ea_=u32(r4(R+0)+u32(612u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5ec566:{NFSU2_TR(0x5ec566);
{u32 ea_=u32(u32(8017484u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ec56c:{NFSU2_TR(0x5ec56c);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ec570:{NFSU2_TR(0x5ec570);
{u32 ea_=u32(r4(R+0)+u32(272u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B5ec576:{NFSU2_TR(0x5ec576);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ec57a:{NFSU2_TR(0x5ec57a);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ec57e:{NFSU2_TR(0x5ec57e);
{u32 ea_=u32(r4(R+28)+u32(116u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ec581:{NFSU2_TR(0x5ec581);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ec585:{NFSU2_TR(0x5ec585);
{u32 ea_=u32(r4(R+28)+u32(120u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ec588:{NFSU2_TR(0x5ec588);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ec58c:{NFSU2_TR(0x5ec58c);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ec590:{NFSU2_TR(0x5ec590);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5ec596:{NFSU2_TR(0x5ec596);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5ec598:{NFSU2_TR(0x5ec598);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5ec59b:{NFSU2_TR(0x5ec59b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ec5a5;}}
}
B5ec59d:L5ec59d:{c.instructions+=2;NFSU2_TR(0x5ec59d);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ec5a3:{NFSU2_TR(0x5ec5a3);
{goto L5ec5af;}
}
B5ec5a5:L5ec5a5:{c.instructions+=2;NFSU2_TR(0x5ec5a5);
{u32 ea_=u32(u32(8371952u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ec5ab:{NFSU2_TR(0x5ec5ab);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5ec5af:L5ec5af:{c.instructions+=9;NFSU2_TR(0x5ec5af);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5ec5b3:{NFSU2_TR(0x5ec5b3);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5ec5b5:{NFSU2_TR(0x5ec5b5);
w4(R+24,u32(0x1ull));
}
B5ec5ba:{NFSU2_TR(0x5ec5ba);
{u32 ea_=u32(r4(R+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ec5be:{NFSU2_TR(0x5ec5be);
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
B5ec5c0:{NFSU2_TR(0x5ec5c0);
u8 U[8];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5ec5c8:{NFSU2_TR(0x5ec5c8);
u8 U[8];
w4(U+0,u32(u32(u32(0x74ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5ec5d0:{NFSU2_TR(0x5ec5d0);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ec5d4:{NFSU2_TR(0x5ec5d4);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L5ec75c;}}
}
B5ec5da:L5ec5da:{c.instructions+=1;NFSU2_TR(0x5ec5da);
__builtin_memmove((R+12),(R+12),4);
}
B5ec5e0:L5ec5e0:{c.instructions+=15;NFSU2_TR(0x5ec5e0);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5ec5e4:{NFSU2_TR(0x5ec5e4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ec5e5:{NFSU2_TR(0x5ec5e5);
u8 U[4];
w4(U+0,u32(u32(u32(0x74ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5ec5e9:{NFSU2_TR(0x5ec5e9);
u8 U[4];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5ec5ed:{NFSU2_TR(0x5ec5ed);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ec5f1:{NFSU2_TR(0x5ec5f1);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5ec5f5:{NFSU2_TR(0x5ec5f5);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5ec5f9:{NFSU2_TR(0x5ec5f9);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5ec5fd:{NFSU2_TR(0x5ec5fd);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5ec601:{NFSU2_TR(0x5ec601);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ec607:{NFSU2_TR(0x5ec607);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ec60a:{NFSU2_TR(0x5ec60a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ec60b:{NFSU2_TR(0x5ec60b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ec60c:{NFSU2_TR(0x5ec60c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ec60d:{NFSU2_TR(0x5ec60d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ec612ull));
TAIL_STATIC(0x43d0c0u,43d);
}
B5ec612:L5ec612:{c.instructions+=9;NFSU2_TR(0x5ec612);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5ec616:{NFSU2_TR(0x5ec616);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ec617:{NFSU2_TR(0x5ec617);
u8 U[4];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5ec61b:{NFSU2_TR(0x5ec61b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ec61c:{NFSU2_TR(0x5ec61c);
u8 U[4];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5ec620:{NFSU2_TR(0x5ec620);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ec621:{NFSU2_TR(0x5ec621);
u8 U[4];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5ec625:{NFSU2_TR(0x5ec625);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ec626:{NFSU2_TR(0x5ec626);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ec62bull));
TAIL_STATIC(0x43d0c0u,43d);
}
B5ec62b:L5ec62b:{c.instructions+=9;NFSU2_TR(0x5ec62b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
}
B5ec62e:{NFSU2_TR(0x5ec62e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ec630:{NFSU2_TR(0x5ec630);
u8 U[4];
w4(U+0,u32(u32(u32(0x84ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5ec637:{NFSU2_TR(0x5ec637);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ec638:{NFSU2_TR(0x5ec638);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ec63a:{NFSU2_TR(0x5ec63a);
u8 U[4];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5ec63e:{NFSU2_TR(0x5ec63e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ec63f:{NFSU2_TR(0x5ec63f);
__builtin_memmove((R+4),(R+12),4);
}
B5ec641:{NFSU2_TR(0x5ec641);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ec646ull));
TAIL_STATIC(0x5e7e70u,5e7);
}
B5ec646:L5ec646:{c.instructions+=7;NFSU2_TR(0x5ec646);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ec64a:{NFSU2_TR(0x5ec64a);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B5ec64c:{NFSU2_TR(0x5ec64c);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5ec650:{NFSU2_TR(0x5ec650);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5ec656:{NFSU2_TR(0x5ec656);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5ec658:{NFSU2_TR(0x5ec658);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5ec65b:{NFSU2_TR(0x5ec65b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ec6aa;}}
}
B5ec65d:L5ec65d:{c.instructions+=9;NFSU2_TR(0x5ec65d);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5ec65f:{NFSU2_TR(0x5ec65f);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ec663:{NFSU2_TR(0x5ec663);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5ec667:{NFSU2_TR(0x5ec667);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ec66b:{NFSU2_TR(0x5ec66b);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ec66f:{NFSU2_TR(0x5ec66f);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5ec673:{NFSU2_TR(0x5ec673);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5ec675:{NFSU2_TR(0x5ec675);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5ec678:{NFSU2_TR(0x5ec678);
if(r1(R+518)){{goto L5ec682;}}
}
B5ec67a:L5ec67a:{c.instructions+=2;NFSU2_TR(0x5ec67a);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5ec67e:{NFSU2_TR(0x5ec67e);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ec682:L5ec682:{c.instructions+=5;NFSU2_TR(0x5ec682);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ec686:{NFSU2_TR(0x5ec686);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5ec68a:{NFSU2_TR(0x5ec68a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5ec68c:{NFSU2_TR(0x5ec68c);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5ec68f:{NFSU2_TR(0x5ec68f);
if(r1(R+518)){{goto L5ec699;}}
}
B5ec691:L5ec691:{c.instructions+=2;NFSU2_TR(0x5ec691);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ec695:{NFSU2_TR(0x5ec695);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ec699:L5ec699:{c.instructions+=4;NFSU2_TR(0x5ec699);
{u32 ea_=u32(u32(8371952u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ec69f:{NFSU2_TR(0x5ec69f);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5ec6a1:{NFSU2_TR(0x5ec6a1);
{u32 ea_=u32(r4(R+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ec6a5:{NFSU2_TR(0x5ec6a5);
{goto L5ec743;}
}
B5ec6aa:L5ec6aa:{c.instructions+=3;NFSU2_TR(0x5ec6aa);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5ec6ad:{NFSU2_TR(0x5ec6ad);
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
B5ec6af:{NFSU2_TR(0x5ec6af);
if(r1(R+518)){{goto L5ec6c6;}}
}
B5ec6b1:L5ec6b1:{c.instructions+=5;NFSU2_TR(0x5ec6b1);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ec6b5:{NFSU2_TR(0x5ec6b5);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5ec6bb:{NFSU2_TR(0x5ec6bb);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5ec6bd:{NFSU2_TR(0x5ec6bd);
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
B5ec6c0:{NFSU2_TR(0x5ec6c0);
if(r1(R+518)){{goto L5ec752;}}
}
B5ec6c6:L5ec6c6:{c.instructions+=16;NFSU2_TR(0x5ec6c6);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ec6ca:{NFSU2_TR(0x5ec6ca);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ec6ce:{NFSU2_TR(0x5ec6ce);
{u32 ea_=u32(u32(8371952u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ec6d4:{NFSU2_TR(0x5ec6d4);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5ec6d8:{NFSU2_TR(0x5ec6d8);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5ec6dc:{NFSU2_TR(0x5ec6dc);
u8 U[4];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5ec6e0:{NFSU2_TR(0x5ec6e0);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ec6e4:{NFSU2_TR(0x5ec6e4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ec6e5:{NFSU2_TR(0x5ec6e5);
u8 U[4];
w4(U+0,u32(u32(u32(0x84ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5ec6ec:{NFSU2_TR(0x5ec6ec);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ec6f0:{NFSU2_TR(0x5ec6f0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ec6f1:{NFSU2_TR(0x5ec6f1);
u8 U[4];
w4(U+0,u32(u32(u32(0x98ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5ec6f8:{NFSU2_TR(0x5ec6f8);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5ec6fa:{NFSU2_TR(0x5ec6fa);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ec6fb:{NFSU2_TR(0x5ec6fb);
{u32 ea_=u32(r4(R+16)+u32(132u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ec702:{NFSU2_TR(0x5ec702);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ec707ull));
TAIL_STATIC(0x43d1e0u,43d);
}
B5ec707:L5ec707:{c.instructions+=7;NFSU2_TR(0x5ec707);
u8 U[4];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5ec70e:{NFSU2_TR(0x5ec70e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ec70f:{NFSU2_TR(0x5ec70f);
u8 U[4];
w4(U+0,u32(u32(u32(0xa0ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5ec716:{NFSU2_TR(0x5ec716);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ec717:{NFSU2_TR(0x5ec717);
u8 U[4];
w4(U+0,u32(u32(u32(0x74ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5ec71b:{NFSU2_TR(0x5ec71b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ec71c:{NFSU2_TR(0x5ec71c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ec721ull));
TAIL_STATIC(0x43d1e0u,43d);
}
B5ec721:L5ec721:{c.instructions+=7;NFSU2_TR(0x5ec721);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ec725:{NFSU2_TR(0x5ec725);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ec726:{NFSU2_TR(0x5ec726);
u8 U[4];
w4(U+0,u32(u32(u32(0x7cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5ec72a:{NFSU2_TR(0x5ec72a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ec72b:{NFSU2_TR(0x5ec72b);
u8 U[4];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5ec732:{NFSU2_TR(0x5ec732);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ec733:{NFSU2_TR(0x5ec733);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ec738ull));
TAIL_STATIC(0x43cf90u,43c);
}
B5ec738:L5ec738:{c.instructions+=3;NFSU2_TR(0x5ec738);
u8 U[8];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ec73c:{NFSU2_TR(0x5ec73c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
}
B5ec73f:{NFSU2_TR(0x5ec73f);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ec743:L5ec743:{c.instructions+=4;NFSU2_TR(0x5ec743);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B5ec744:{NFSU2_TR(0x5ec744);
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
B5ec746:{NFSU2_TR(0x5ec746);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ec74a:{NFSU2_TR(0x5ec74a);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5ec5e0u);}goto L5ec5e0;}}
}
B5ec750:L5ec750:{c.instructions+=1;NFSU2_TR(0x5ec750);
{goto L5ec75c;}
}
B5ec752:L5ec752:{c.instructions+=3;NFSU2_TR(0x5ec752);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ec756:{NFSU2_TR(0x5ec756);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5ec758:{NFSU2_TR(0x5ec758);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ec75c:L5ec75c:{c.instructions+=3;NFSU2_TR(0x5ec75c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ec75f:{NFSU2_TR(0x5ec75f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5ec761:{NFSU2_TR(0x5ec761);
if(r1(R+518)){{goto L5ec769;}}
}
B5ec763:L5ec763:{c.instructions+=2;NFSU2_TR(0x5ec763);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5ec767:{NFSU2_TR(0x5ec767);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5ec769:L5ec769:{c.instructions+=3;NFSU2_TR(0x5ec769);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ec76c:{NFSU2_TR(0x5ec76c);
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
B5ec76e:{NFSU2_TR(0x5ec76e);
if(r1(R+518)){{goto L5ec776;}}
}
B5ec770:L5ec770:{c.instructions+=2;NFSU2_TR(0x5ec770);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ec774:{NFSU2_TR(0x5ec774);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5ec776:L5ec776:{c.instructions+=8;NFSU2_TR(0x5ec776);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5ec77a:{NFSU2_TR(0x5ec77a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5ec77b:{NFSU2_TR(0x5ec77b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5ec77c:{NFSU2_TR(0x5ec77c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5ec77d:{NFSU2_TR(0x5ec77d);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B5ec781:{NFSU2_TR(0x5ec781);
__builtin_memmove((R+16),(R+20),4);
}
B5ec783:{NFSU2_TR(0x5ec783);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5ec784:{NFSU2_TR(0x5ec784);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ec790:L5ec790:{c.instructions+=5;NFSU2_TR(0x5ec790);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ec791:{NFSU2_TR(0x5ec791);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ec794:{NFSU2_TR(0x5ec794);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x140ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ec79a:{NFSU2_TR(0x5ec79a);
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
B5ec79c:{NFSU2_TR(0x5ec79c);
if(r1(R+518)){{goto L5ec7dd;}}
}
B5ec79e:L5ec79e:{c.instructions+=2;NFSU2_TR(0x5ec79e);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x7fffffffull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x7fffffffull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x7fffffffull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5ec7a3:{NFSU2_TR(0x5ec7a3);
if(r1(R+518)){{goto L5ec7dd;}}
}
B5ec7a5:L5ec7a5:{c.instructions+=10;NFSU2_TR(0x5ec7a5);
__builtin_memmove((R+4),gp(0x86518c),4);
}
B5ec7ab:{NFSU2_TR(0x5ec7ab);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+0))));
}
B5ec7ad:{NFSU2_TR(0x5ec7ad);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+16)),r4(U+0));
}
B5ec7b1:{NFSU2_TR(0x5ec7b1);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5ec7b5:{NFSU2_TR(0x5ec7b5);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ec7bb:{NFSU2_TR(0x5ec7bb);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5ec7bf:{NFSU2_TR(0x5ec7bf);
{u32 ea_=u32(u32(8017488u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5ec7c5:{NFSU2_TR(0x5ec7c5);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5ec7c7:{NFSU2_TR(0x5ec7c7);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5ec7ca:{NFSU2_TR(0x5ec7ca);
if(r1(R+514)){{goto L5ec7dd;}}
}
B5ec7cc:L5ec7cc:{c.instructions+=4;NFSU2_TR(0x5ec7cc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5ec7d0:{NFSU2_TR(0x5ec7d0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ec7d1:{NFSU2_TR(0x5ec7d1);
w4(R+4,u32(0x89cce4ull));
}
B5ec7d6:{NFSU2_TR(0x5ec7d6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ec7dbull));
TAIL_STATIC(0x576790u,576);
}
B5ec7db:L5ec7db:{c.instructions+=2;NFSU2_TR(0x5ec7db);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5ec7dc:{NFSU2_TR(0x5ec7dc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ec7dd:L5ec7dd:{c.instructions+=3;NFSU2_TR(0x5ec7dd);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ec7e3:{NFSU2_TR(0x5ec7e3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5ec7e4:{NFSU2_TR(0x5ec7e4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ec7f0:L5ec7f0:{c.instructions+=13;NFSU2_TR(0x5ec7f0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ec7f1:{NFSU2_TR(0x5ec7f1);
__builtin_memmove((R+8),(R+4),4);
}
B5ec7f3:{NFSU2_TR(0x5ec7f3);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ec7f7:{NFSU2_TR(0x5ec7f7);
w4(R+0,u32(0x1ull));
}
B5ec7fc:{NFSU2_TR(0x5ec7fc);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r1(U+0))));
}
B5ec7fe:{NFSU2_TR(0x5ec7fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x5b0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ec804:{NFSU2_TR(0x5ec804);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ec805:{NFSU2_TR(0x5ec805);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ec806:{NFSU2_TR(0x5ec806);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5ec808:{NFSU2_TR(0x5ec808);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5ec80a:{NFSU2_TR(0x5ec80a);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ec80e:{NFSU2_TR(0x5ec80e);
w4(R+12,u32(0x3f800000ull));
}
B5ec813:{NFSU2_TR(0x5ec813);
if(r1(R+518)){{goto L5ec9d7;}}
}
B5ec819:L5ec819:{c.instructions+=109;NFSU2_TR(0x5ec819);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ec81d:{NFSU2_TR(0x5ec81d);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
s4(u32(r4(R+0)),r4(U+0));
}
B5ec81f:{NFSU2_TR(0x5ec81f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ec822:{NFSU2_TR(0x5ec822);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ec825:{NFSU2_TR(0x5ec825);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ec828:{NFSU2_TR(0x5ec828);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ec82b:{NFSU2_TR(0x5ec82b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ec82e:{NFSU2_TR(0x5ec82e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ec831:{NFSU2_TR(0x5ec831);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ec834:{NFSU2_TR(0x5ec834);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ec837:{NFSU2_TR(0x5ec837);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ec83a:{NFSU2_TR(0x5ec83a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ec83d:{NFSU2_TR(0x5ec83d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ec840:{NFSU2_TR(0x5ec840);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ec843:{NFSU2_TR(0x5ec843);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ec846:{NFSU2_TR(0x5ec846);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ec849:{NFSU2_TR(0x5ec849);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ec84c:{NFSU2_TR(0x5ec84c);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ec84f:{NFSU2_TR(0x5ec84f);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ec852:{NFSU2_TR(0x5ec852);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x10ull))));
}
B5ec855:{NFSU2_TR(0x5ec855);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ec858:{NFSU2_TR(0x5ec858);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5ec85a:{NFSU2_TR(0x5ec85a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ec85d:{NFSU2_TR(0x5ec85d);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5ec85f:{NFSU2_TR(0x5ec85f);
{u32 ea_=u32(r4(R+0)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ec862:{NFSU2_TR(0x5ec862);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ec865:{NFSU2_TR(0x5ec865);
{u32 ea_=u32(r4(R+0)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ec868:{NFSU2_TR(0x5ec868);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ec86b:{NFSU2_TR(0x5ec86b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ec86e:{NFSU2_TR(0x5ec86e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ec871:{NFSU2_TR(0x5ec871);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ec874:{NFSU2_TR(0x5ec874);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x50ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ec877:{NFSU2_TR(0x5ec877);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ec87a:{NFSU2_TR(0x5ec87a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x58ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ec87d:{NFSU2_TR(0x5ec87d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ec880:{NFSU2_TR(0x5ec880);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ec883:{NFSU2_TR(0x5ec883);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ec886:{NFSU2_TR(0x5ec886);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ec889:{NFSU2_TR(0x5ec889);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ec88c:{NFSU2_TR(0x5ec88c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ec88f:{NFSU2_TR(0x5ec88f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x74ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ec892:{NFSU2_TR(0x5ec892);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x78ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ec895:{NFSU2_TR(0x5ec895);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ec898:{NFSU2_TR(0x5ec898);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ec89b:{NFSU2_TR(0x5ec89b);
{u32 ea_=u32(r4(R+4)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ec89e:{NFSU2_TR(0x5ec89e);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x40ull))));
}
B5ec8a1:{NFSU2_TR(0x5ec8a1);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ec8a4:{NFSU2_TR(0x5ec8a4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5ec8a6:{NFSU2_TR(0x5ec8a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ec8a9:{NFSU2_TR(0x5ec8a9);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5ec8ab:{NFSU2_TR(0x5ec8ab);
{u32 ea_=u32(r4(R+0)+u32(116u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ec8ae:{NFSU2_TR(0x5ec8ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x7cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ec8b1:{NFSU2_TR(0x5ec8b1);
{u32 ea_=u32(r4(R+0)+u32(120u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ec8b4:{NFSU2_TR(0x5ec8b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x80ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ec8ba:{NFSU2_TR(0x5ec8ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x84ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ec8c0:{NFSU2_TR(0x5ec8c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x88ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ec8c6:{NFSU2_TR(0x5ec8c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ec8cc:{NFSU2_TR(0x5ec8cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x90ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ec8d2:{NFSU2_TR(0x5ec8d2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x94ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ec8d8:{NFSU2_TR(0x5ec8d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x98ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ec8de:{NFSU2_TR(0x5ec8de);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x9cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ec8e4:{NFSU2_TR(0x5ec8e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ec8ea:{NFSU2_TR(0x5ec8ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ec8f0:{NFSU2_TR(0x5ec8f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xa8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ec8f6:{NFSU2_TR(0x5ec8f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xacull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ec8fc:{NFSU2_TR(0x5ec8fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ec902:{NFSU2_TR(0x5ec902);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xb4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ec908:{NFSU2_TR(0x5ec908);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ec90e:{NFSU2_TR(0x5ec90e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xbcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ec914:{NFSU2_TR(0x5ec914);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ec917:{NFSU2_TR(0x5ec917);
{u32 ea_=u32(r4(R+4)+u32(116u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ec91a:{NFSU2_TR(0x5ec91a);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x70ull))));
}
B5ec91d:{NFSU2_TR(0x5ec91d);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ec920:{NFSU2_TR(0x5ec920);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5ec922:{NFSU2_TR(0x5ec922);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5ec924:{NFSU2_TR(0x5ec924);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ec92a:{NFSU2_TR(0x5ec92a);
{u32 ea_=u32(r4(R+0)+u32(180u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ec930:{NFSU2_TR(0x5ec930);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xbcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ec936:{NFSU2_TR(0x5ec936);
{u32 ea_=u32(r4(R+0)+u32(184u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ec93c:{NFSU2_TR(0x5ec93c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ec942:{NFSU2_TR(0x5ec942);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ec948:{NFSU2_TR(0x5ec948);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ec94e:{NFSU2_TR(0x5ec94e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xccull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ec954:{NFSU2_TR(0x5ec954);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ec95a:{NFSU2_TR(0x5ec95a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xd4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ec960:{NFSU2_TR(0x5ec960);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ec966:{NFSU2_TR(0x5ec966);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xdcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ec96c:{NFSU2_TR(0x5ec96c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xe0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ec972:{NFSU2_TR(0x5ec972);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ec978:{NFSU2_TR(0x5ec978);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xe8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ec97e:{NFSU2_TR(0x5ec97e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xecull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ec984:{NFSU2_TR(0x5ec984);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xf0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ec98a:{NFSU2_TR(0x5ec98a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xf4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ec990:{NFSU2_TR(0x5ec990);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ec996:{NFSU2_TR(0x5ec996);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ec99c:{NFSU2_TR(0x5ec99c);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ec99f:{NFSU2_TR(0x5ec99f);
{u32 ea_=u32(r4(R+4)+u32(164u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ec9a5:{NFSU2_TR(0x5ec9a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5ec9ab:{NFSU2_TR(0x5ec9ab);
{u32 ea_=u32(r4(R+4)+u32(168u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ec9b1:{NFSU2_TR(0x5ec9b1);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0xa0ull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0xa0ull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xa0ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5ec9b7:{NFSU2_TR(0x5ec9b7);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5ec9b9:{NFSU2_TR(0x5ec9b9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5ec9ba:{NFSU2_TR(0x5ec9ba);
{u32 ea_=u32(r4(R+0)+u32(244u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ec9c0:{NFSU2_TR(0x5ec9c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xfcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ec9c6:{NFSU2_TR(0x5ec9c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xf0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ec9cc:{NFSU2_TR(0x5ec9cc);
{u32 ea_=u32(r4(R+0)+u32(248u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ec9d2:{NFSU2_TR(0x5ec9d2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5ec9d3:{NFSU2_TR(0x5ec9d3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5ec9d4:{NFSU2_TR(0x5ec9d4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ec9d7:L5ec9d7:{c.instructions+=8;NFSU2_TR(0x5ec9d7);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ec9d8:{NFSU2_TR(0x5ec9d8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ec9d9:{NFSU2_TR(0x5ec9d9);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5ec9dd:{NFSU2_TR(0x5ec9dd);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x380ull))));
}
B5ec9e3:{NFSU2_TR(0x5ec9e3);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B5ec9e5:{NFSU2_TR(0x5ec9e5);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ec9e9:{NFSU2_TR(0x5ec9e9);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x38ull))));
}
B5ec9ec:{NFSU2_TR(0x5ec9ec);
__builtin_memmove((R+16),(R+16),4);
}
B5ec9f0:L5ec9f0:{c.instructions+=20;NFSU2_TR(0x5ec9f0);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ec9f4:{NFSU2_TR(0x5ec9f4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ec9f7:{NFSU2_TR(0x5ec9f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ec9fa:{NFSU2_TR(0x5ec9fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ec9fd:{NFSU2_TR(0x5ec9fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5eca00:{NFSU2_TR(0x5eca00);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5eca03:{NFSU2_TR(0x5eca03);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5eca06:{NFSU2_TR(0x5eca06);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5eca09:{NFSU2_TR(0x5eca09);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5eca0c:{NFSU2_TR(0x5eca0c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5eca0f:{NFSU2_TR(0x5eca0f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5eca12:{NFSU2_TR(0x5eca12);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5eca15:{NFSU2_TR(0x5eca15);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5eca18:{NFSU2_TR(0x5eca18);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5eca1b:{NFSU2_TR(0x5eca1b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5eca1e:{NFSU2_TR(0x5eca1e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+24)),r4(U+0));
}
B5eca20:{NFSU2_TR(0x5eca20);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5eca23:{NFSU2_TR(0x5eca23);
{u32 ea_=u32(r4(R+0)+u32(360u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5eca29:{NFSU2_TR(0x5eca29);
{u32 ea_=u32(u32(7881276u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5eca2f:{NFSU2_TR(0x5eca2f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5eca34ull));
TAIL_STATIC(0x75bed4u,75b);
}
B5eca34:L5eca34:{c.instructions+=5;NFSU2_TR(0x5eca34);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eca35:{NFSU2_TR(0x5eca35);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffc8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5eca38:{NFSU2_TR(0x5eca38);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eca39:{NFSU2_TR(0x5eca39);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eca3a:{NFSU2_TR(0x5eca3a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5eca3full));
TAIL_STATIC(0x5bada0u,5ba);
}
B5eca3f:L5eca3f:{c.instructions+=3;NFSU2_TR(0x5eca3f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B5eca42:{NFSU2_TR(0x5eca42);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x60ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x60ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B5eca45:{NFSU2_TR(0x5eca45);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5eca62;}}
}
B5eca47:L5eca47:{c.instructions+=8;NFSU2_TR(0x5eca47);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5eca4b:{NFSU2_TR(0x5eca4b);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B5eca4d:{NFSU2_TR(0x5eca4d);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x40eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+8),(U+4),2);
}
B5eca54:{NFSU2_TR(0x5eca54);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xffffffc8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5eca57:{NFSU2_TR(0x5eca57);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eca58:{NFSU2_TR(0x5eca58);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eca59:{NFSU2_TR(0x5eca59);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eca5a:{NFSU2_TR(0x5eca5a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5eca5full));
TAIL_STATIC(0x5bae60u,5ba);
}
B5eca5f:L5eca5f:{c.instructions+=1;NFSU2_TR(0x5eca5f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B5eca62:L5eca62:{c.instructions+=21;NFSU2_TR(0x5eca62);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5eca66:{NFSU2_TR(0x5eca66);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5eca69:{NFSU2_TR(0x5eca69);
{u32 ea_=u32(r4(R+20)+r4(R+4)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5eca6d:{NFSU2_TR(0x5eca6d);
u8 U[16];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B5eca71:{NFSU2_TR(0x5eca71);
{u32 ea_=u32(r4(R+20)+r4(R+4)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5eca75:{NFSU2_TR(0x5eca75);
u8 U[12];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B5eca79:{NFSU2_TR(0x5eca79);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5eca7d:{NFSU2_TR(0x5eca7d);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5eca7f:{NFSU2_TR(0x5eca7f);
{u32 ea_=u32(r4(R+24)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5eca82:{NFSU2_TR(0x5eca82);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5eca85:{NFSU2_TR(0x5eca85);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5eca88:{NFSU2_TR(0x5eca88);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5eca8a:{NFSU2_TR(0x5eca8a);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B5eca8d:{NFSU2_TR(0x5eca8d);
{u32 ea_=u32(r4(R+0)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5eca90:{NFSU2_TR(0x5eca90);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x30ull))));
}
B5eca93:{NFSU2_TR(0x5eca93);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5eca95:{NFSU2_TR(0x5eca95);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x40ull))));
}
B5eca98:{NFSU2_TR(0x5eca98);
u8 U[14];
__builtin_memmove((U+6),(R+20),4);
w1(R+512,u8((r4(U+6))<(u32(0xc0ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xc0ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xc0ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5eca9e:{NFSU2_TR(0x5eca9e);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ecaa2:{NFSU2_TR(0x5ecaa2);
{u32 ea_=u32(r4(R+24)+u32(4294967232u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ecaa5:{NFSU2_TR(0x5ecaa5);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5ec9f0u);}goto L5ec9f0;}}
}
B5ecaab:L5ecaab:{c.instructions+=6;NFSU2_TR(0x5ecaab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5ecaac:{NFSU2_TR(0x5ecaac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5ecaad:{NFSU2_TR(0x5ecaad);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5ecaae:{NFSU2_TR(0x5ecaae);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5ecaaf:{NFSU2_TR(0x5ecaaf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5ecab0:{NFSU2_TR(0x5ecab0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ecac0:L5ecac0:{c.instructions+=43;NFSU2_TR(0x5ecac0);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ecac6:{NFSU2_TR(0x5ecac6);
{u32 ea_=u32(u32(8017492u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B5ecacc:{NFSU2_TR(0x5ecacc);
{u32 ea_=u32(r4(R+4)+u32(816u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ecad2:{NFSU2_TR(0x5ecad2);
{u32 ea_=u32(r4(R+4)+u32(1272u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5ecad8:{NFSU2_TR(0x5ecad8);
{u32 ea_=u32(u32(8017496u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ecade:{NFSU2_TR(0x5ecade);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5ecae0:{NFSU2_TR(0x5ecae0);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ecae4:{NFSU2_TR(0x5ecae4);
{u32 ea_=u32(r4(R+4)+u32(1272u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5ecaea:{NFSU2_TR(0x5ecaea);
{u32 ea_=u32(r4(R+4)+u32(1272u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5ecaf0:{NFSU2_TR(0x5ecaf0);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ecaf4:{NFSU2_TR(0x5ecaf4);
{u32 ea_=u32(r4(R+4)+u32(1256u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5ecafa:{NFSU2_TR(0x5ecafa);
{u32 ea_=u32(r4(R+4)+u32(1256u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ecb00:{NFSU2_TR(0x5ecb00);
{u32 ea_=u32(r4(R+4)+u32(820u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ecb06:{NFSU2_TR(0x5ecb06);
{u32 ea_=u32(r4(R+4)+u32(1276u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5ecb0c:{NFSU2_TR(0x5ecb0c);
{u32 ea_=u32(u32(8017496u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ecb12:{NFSU2_TR(0x5ecb12);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5ecb14:{NFSU2_TR(0x5ecb14);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ecb18:{NFSU2_TR(0x5ecb18);
{u32 ea_=u32(r4(R+4)+u32(1276u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5ecb1e:{NFSU2_TR(0x5ecb1e);
{u32 ea_=u32(r4(R+4)+u32(1276u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5ecb24:{NFSU2_TR(0x5ecb24);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ecb28:{NFSU2_TR(0x5ecb28);
{u32 ea_=u32(r4(R+4)+u32(1260u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5ecb2e:{NFSU2_TR(0x5ecb2e);
{u32 ea_=u32(r4(R+4)+u32(1260u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ecb34:{NFSU2_TR(0x5ecb34);
{u32 ea_=u32(r4(R+4)+u32(824u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ecb3a:{NFSU2_TR(0x5ecb3a);
{u32 ea_=u32(r4(R+4)+u32(1280u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5ecb40:{NFSU2_TR(0x5ecb40);
{u32 ea_=u32(u32(8017496u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ecb46:{NFSU2_TR(0x5ecb46);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B5ecb48:{NFSU2_TR(0x5ecb48);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ecb4c:{NFSU2_TR(0x5ecb4c);
{u32 ea_=u32(r4(R+4)+u32(1280u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5ecb52:{NFSU2_TR(0x5ecb52);
{u32 ea_=u32(r4(R+4)+u32(1280u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5ecb58:{NFSU2_TR(0x5ecb58);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ecb5c:{NFSU2_TR(0x5ecb5c);
{u32 ea_=u32(r4(R+4)+u32(1264u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5ecb62:{NFSU2_TR(0x5ecb62);
{u32 ea_=u32(r4(R+4)+u32(1264u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ecb68:{NFSU2_TR(0x5ecb68);
{u32 ea_=u32(r4(R+4)+u32(828u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ecb6e:{NFSU2_TR(0x5ecb6e);
{u32 ea_=u32(r4(R+4)+u32(1284u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5ecb74:{NFSU2_TR(0x5ecb74);
{u32 ea_=u32(u32(8017496u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ecb7a:{NFSU2_TR(0x5ecb7a);
__asm__ volatile(".byte 0xde,0xc9":::"memory");
}
B5ecb7c:{NFSU2_TR(0x5ecb7c);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ecb80:{NFSU2_TR(0x5ecb80);
{u32 ea_=u32(r4(R+4)+u32(1284u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5ecb86:{NFSU2_TR(0x5ecb86);
{u32 ea_=u32(r4(R+4)+u32(1284u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5ecb8c:{NFSU2_TR(0x5ecb8c);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ecb90:{NFSU2_TR(0x5ecb90);
{u32 ea_=u32(r4(R+4)+u32(1268u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5ecb96:{NFSU2_TR(0x5ecb96);
{u32 ea_=u32(r4(R+4)+u32(1268u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ecb9c:{NFSU2_TR(0x5ecb9c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ecba0:L5ecba0:{c.instructions+=7;NFSU2_TR(0x5ecba0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ecba1:{NFSU2_TR(0x5ecba1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ecba2:{NFSU2_TR(0x5ecba2);
__builtin_memmove((R+24),(R+4),4);
}
B5ecba4:{NFSU2_TR(0x5ecba4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ecba7:{NFSU2_TR(0x5ecba7);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B5ecbaa:{NFSU2_TR(0x5ecbaa);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5ecbac:{NFSU2_TR(0x5ecbac);
if(r1(R+518)){{goto L5ecbfa;}}
}
B5ecbae:L5ecbae:{c.instructions+=2;NFSU2_TR(0x5ecbae);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x424ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x4ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x4ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x4ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B5ecbb5:{NFSU2_TR(0x5ecbb5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ecbfa;}}
}
B5ecbb7:L5ecbb7:{c.instructions+=8;NFSU2_TR(0x5ecbb7);
u8 U[4];
w4(U+0,u32(u32(u32(0x7ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5ecbbb:{NFSU2_TR(0x5ecbbb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ecbbc:{NFSU2_TR(0x5ecbbc);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ecbbe:{NFSU2_TR(0x5ecbbe);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ecbc0:{NFSU2_TR(0x5ecbc0);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x60ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5ecbc3:{NFSU2_TR(0x5ecbc3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ecbc4:{NFSU2_TR(0x5ecbc4);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5c4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5ecbca:{NFSU2_TR(0x5ecbca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ecbcfull));
TAIL_STATIC(0x5e7e70u,5e7);
}
B5ecbcf:L5ecbcf:{c.instructions+=3;NFSU2_TR(0x5ecbcf);
u8 U[5];
w4(U+0,u32(u32(u32(0x7ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B5ecbd3:{NFSU2_TR(0x5ecbd3);
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
B5ecbd5:{NFSU2_TR(0x5ecbd5);
if(r1(R+518)){{goto L5ecbf8;}}
}
B5ecbd7:L5ecbd7:{c.instructions+=7;NFSU2_TR(0x5ecbd7);
{u32 ea_=u32(r4(R+24)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ecbda:{NFSU2_TR(0x5ecbda);
{u32 ea_=u32(u32(7884072u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5ecbe0:{NFSU2_TR(0x5ecbe0);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5ecbe2:{NFSU2_TR(0x5ecbe2);
__asm__ volatile(".byte 0xde,0xd9":::"memory");
}
B5ecbe4:{NFSU2_TR(0x5ecbe4);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5ecbe6:{NFSU2_TR(0x5ecbe6);
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
B5ecbe9:{NFSU2_TR(0x5ecbe9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ecbfa;}}
}
B5ecbeb:L5ecbeb:{c.instructions+=4;NFSU2_TR(0x5ecbeb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x96cull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5ecbf5:{NFSU2_TR(0x5ecbf5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5ecbf6:{NFSU2_TR(0x5ecbf6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5ecbf7:{NFSU2_TR(0x5ecbf7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ecbf8:L5ecbf8:{c.instructions+=1;NFSU2_TR(0x5ecbf8);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5ecbfa:L5ecbfa:{c.instructions+=3;NFSU2_TR(0x5ecbfa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5ecbfb:{NFSU2_TR(0x5ecbfb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5ecbfc:{NFSU2_TR(0x5ecbfc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ecc00:L5ecc00:{c.instructions+=6;NFSU2_TR(0x5ecc00);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ecc01:{NFSU2_TR(0x5ecc01);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5ecc05:{NFSU2_TR(0x5ecc05);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ecc06:{NFSU2_TR(0x5ecc06);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ecc07:{NFSU2_TR(0x5ecc07);
__builtin_memmove((R+28),(R+4),4);
}
B5ecc09:{NFSU2_TR(0x5ecc09);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ecc0eull));
TAIL_STATIC(0x43c780u,43c);
}
B5ecc0e:L5ecc0e:{c.instructions+=9;NFSU2_TR(0x5ecc0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5ecc15:{NFSU2_TR(0x5ecc15);
{u32 ea_=u32(r4(R+28)+u32(152u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ecc1b:{NFSU2_TR(0x5ecc1b);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B5ecc21:{NFSU2_TR(0x5ecc21);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5ecc24:{NFSU2_TR(0x5ecc24);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B5ecc26:{NFSU2_TR(0x5ecc26);
{u32 ea_=u32(u32(7881564u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5ecc2c:{NFSU2_TR(0x5ecc2c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5ecc2e:{NFSU2_TR(0x5ecc2e);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5ecc31:{NFSU2_TR(0x5ecc31);
if(r1(R+514)){{goto L5ecc4a;}}
}
B5ecc33:L5ecc33:{c.instructions+=7;NFSU2_TR(0x5ecc33);
{u32 ea_=u32(r4(R+28)+u32(176u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ecc39:{NFSU2_TR(0x5ecc39);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5ecc3b:{NFSU2_TR(0x5ecc3b);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ecc3d:{NFSU2_TR(0x5ecc3d);
{u32 ea_=u32(r4(R+28)+u32(180u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ecc43:{NFSU2_TR(0x5ecc43);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5ecc45:{NFSU2_TR(0x5ecc45);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ecc48:{NFSU2_TR(0x5ecc48);
{goto L5ecc5b;}
}
B5ecc4a:L5ecc4a:{c.instructions+=4;NFSU2_TR(0x5ecc4a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ecc50:{NFSU2_TR(0x5ecc50);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B5ecc52:{NFSU2_TR(0x5ecc52);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x94ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ecc58:{NFSU2_TR(0x5ecc58);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ecc5b:L5ecc5b:{c.instructions+=3;NFSU2_TR(0x5ecc5b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ecc5c:{NFSU2_TR(0x5ecc5c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ecc5d:{NFSU2_TR(0x5ecc5d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ecc62ull));
TAIL_STATIC(0x43ce50u,43c);
}
B5ecc62:L5ecc62:{c.instructions+=6;NFSU2_TR(0x5ecc62);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ecc63:{NFSU2_TR(0x5ecc63);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((R+8),(U+0),4);
}
B5ecc66:{NFSU2_TR(0x5ecc66);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ecc67:{NFSU2_TR(0x5ecc67);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((R+0),(U+0),4);
}
B5ecc6a:{NFSU2_TR(0x5ecc6a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ecc6b:{NFSU2_TR(0x5ecc6b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ecc70ull));
TAIL_STATIC(0x43d1e0u,43d);
}
B5ecc70:L5ecc70:{c.instructions+=12;NFSU2_TR(0x5ecc70);
{u32 ea_=u32(r4(R+28)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ecc73:{NFSU2_TR(0x5ecc73);
{u32 ea_=u32(r4(R+28)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ecc76:{NFSU2_TR(0x5ecc76);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ecc79:{NFSU2_TR(0x5ecc79);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5ecc7b:{NFSU2_TR(0x5ecc7b);
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
B5ecc7e:{NFSU2_TR(0x5ecc7e);
{u32 ea_=u32(r4(R+24)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ecc81:{NFSU2_TR(0x5ecc81);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5ecc82:{NFSU2_TR(0x5ecc82);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ecc85:{NFSU2_TR(0x5ecc85);
{u32 ea_=u32(r4(R+24)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ecc88:{NFSU2_TR(0x5ecc88);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x3cull))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5ecc8f:{NFSU2_TR(0x5ecc8f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5ecc90:{NFSU2_TR(0x5ecc90);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ecca0:L5ecca0:{c.instructions+=7;NFSU2_TR(0x5ecca0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ecca4:{NFSU2_TR(0x5ecca4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ecca5:{NFSU2_TR(0x5ecca5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5ecca8:{NFSU2_TR(0x5ecca8);
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0x720ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0x720ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x720ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5eccae:{NFSU2_TR(0x5eccae);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eccaf:{NFSU2_TR(0x5eccaf);
__builtin_memmove((R+4),(R+24),4);
}
B5eccb1:{NFSU2_TR(0x5eccb1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5eccb6ull));
TAIL_STATIC(0x441140u,441);
}
B5eccb6:L5eccb6:{c.instructions+=2;NFSU2_TR(0x5eccb6);
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
B5eccb8:{NFSU2_TR(0x5eccb8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5eccc2;}}
}
B5eccba:L5eccba:{c.instructions+=3;NFSU2_TR(0x5eccba);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eccbb:{NFSU2_TR(0x5eccbb);
__builtin_memmove((R+4),(R+24),4);
}
B5eccbd:{NFSU2_TR(0x5eccbd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5eccc2ull));
TAIL_STATIC(0x441140u,441);
}
B5eccc2:L5eccc2:{c.instructions+=2;NFSU2_TR(0x5eccc2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5eccc3:{NFSU2_TR(0x5eccc3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5eccd0:L5eccd0:{c.instructions+=3;NFSU2_TR(0x5eccd0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5eccd1:{NFSU2_TR(0x5eccd1);
u8 U[22];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x1ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x1ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B5eccd5:{NFSU2_TR(0x5eccd5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ecd1f;}}
}
B5eccd7:L5eccd7:{c.instructions+=9;NFSU2_TR(0x5eccd7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5eccda:{NFSU2_TR(0x5eccda);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5eccdd:{NFSU2_TR(0x5eccdd);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5ecce3:{NFSU2_TR(0x5ecce3);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+16)),r4(U+0));
}
B5ecce7:{NFSU2_TR(0x5ecce7);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ecceb:{NFSU2_TR(0x5ecceb);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5eccf1:{NFSU2_TR(0x5eccf1);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5eccf3:{NFSU2_TR(0x5eccf3);
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
B5eccf6:{NFSU2_TR(0x5eccf6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ecd17;}}
}
B5eccf8:L5eccf8:{c.instructions+=6;NFSU2_TR(0x5eccf8);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5eccfc:{NFSU2_TR(0x5eccfc);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ecd02:{NFSU2_TR(0x5ecd02);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5ecd06:{NFSU2_TR(0x5ecd06);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5ecd08:{NFSU2_TR(0x5ecd08);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5ecd0b:{NFSU2_TR(0x5ecd0b);
if(r1(R+514)){{goto L5ecd25;}}
}
B5ecd0d:L5ecd0d:{c.instructions+=4;NFSU2_TR(0x5ecd0d);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5ecd0f:{NFSU2_TR(0x5ecd0f);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ecd15:{NFSU2_TR(0x5ecd15);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5ecd16:{NFSU2_TR(0x5ecd16);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ecd17:L5ecd17:{c.instructions+=3;NFSU2_TR(0x5ecd17);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ecd1d:{NFSU2_TR(0x5ecd1d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5ecd1e:{NFSU2_TR(0x5ecd1e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ecd1f:L5ecd1f:{c.instructions+=1;NFSU2_TR(0x5ecd1f);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ecd25:L5ecd25:{c.instructions+=2;NFSU2_TR(0x5ecd25);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5ecd26:{NFSU2_TR(0x5ecd26);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ecd30:L5ecd30:{c.instructions+=3;NFSU2_TR(0x5ecd30);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ecd33:{NFSU2_TR(0x5ecd33);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x1ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x1ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5ecd36:{NFSU2_TR(0x5ecd36);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ecd43;}}
}
B5ecd38:L5ecd38:{c.instructions+=3;NFSU2_TR(0x5ecd38);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ecd3b:{NFSU2_TR(0x5ecd3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ecd3e:{NFSU2_TR(0x5ecd3e);
TAIL_STATIC(0x5947b0u,594);
}
B5ecd43:L5ecd43:{c.instructions+=2;NFSU2_TR(0x5ecd43);
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
B5ecd46:{NFSU2_TR(0x5ecd46);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ecd5c;}}
}
B5ecd48:L5ecd48:{c.instructions+=5;NFSU2_TR(0x5ecd48);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ecd4b:{NFSU2_TR(0x5ecd4b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5ecd4e:{NFSU2_TR(0x5ecd4e);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ecd52:{NFSU2_TR(0x5ecd52);
{u32 ea_=u32((r4(R+0)*4u)+r4(R+8)+u32(412u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ecd59:{NFSU2_TR(0x5ecd59);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ecd5c:L5ecd5c:{c.instructions+=2;NFSU2_TR(0x5ecd5c);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ecd62:{NFSU2_TR(0x5ecd62);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ecd70:L5ecd70:{c.instructions+=2;NFSU2_TR(0x5ecd70);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5ecd74:{NFSU2_TR(0x5ecd74);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ecd87;}}
}
B5ecd76:L5ecd76:{c.instructions+=7;NFSU2_TR(0x5ecd76);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ecd79:{NFSU2_TR(0x5ecd79);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ecd7c:{NFSU2_TR(0x5ecd7c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5ecd7f:{NFSU2_TR(0x5ecd7f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5ecd81:{NFSU2_TR(0x5ecd81);
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
B5ecd83:{NFSU2_TR(0x5ecd83);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B5ecd86:{NFSU2_TR(0x5ecd86);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ecd87:L5ecd87:{c.instructions+=2;NFSU2_TR(0x5ecd87);
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
B5ecd89:{NFSU2_TR(0x5ecd89);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ecd90:L5ecd90:{c.instructions+=2;NFSU2_TR(0x5ecd90);
u8 U[22];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x1ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x1ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B5ecd94:{NFSU2_TR(0x5ecd94);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ecda0;}}
}
B5ecd96:L5ecd96:{c.instructions+=4;NFSU2_TR(0x5ecd96);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ecd99:{NFSU2_TR(0x5ecd99);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ecd9c:{NFSU2_TR(0x5ecd9c);
{u32 ea_=u32(r4(R+4)+u32(108u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ecd9f:{NFSU2_TR(0x5ecd9f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ecda0:L5ecda0:{c.instructions+=2;NFSU2_TR(0x5ecda0);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ecda6:{NFSU2_TR(0x5ecda6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ecdb0:L5ecdb0:{c.instructions+=9;NFSU2_TR(0x5ecdb0);
{u32 ea_=u32(r4(R+4)+u32(1072u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ecdb6:{NFSU2_TR(0x5ecdb6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ecdb9:{NFSU2_TR(0x5ecdb9);
{u32 ea_=u32(u32(7881324u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5ecdbf:{NFSU2_TR(0x5ecdbf);
{u32 ea_=u32(r4(R+0)+u32(524u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ecdc5:{NFSU2_TR(0x5ecdc5);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B5ecdc7:{NFSU2_TR(0x5ecdc7);
{u32 ea_=u32(u32(7881564u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5ecdcd:{NFSU2_TR(0x5ecdcd);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5ecdcf:{NFSU2_TR(0x5ecdcf);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5ecdd2:{NFSU2_TR(0x5ecdd2);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L5ecde4;}}
}
B5ecdd4:L5ecdd4:{c.instructions+=4;NFSU2_TR(0x5ecdd4);
{u32 ea_=u32(u32(8017504u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5ecdda:{NFSU2_TR(0x5ecdda);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5ecddc:{NFSU2_TR(0x5ecddc);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5ecddf:{NFSU2_TR(0x5ecddf);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L5ecde6;}}
}
B5ecde1:L5ecde1:{c.instructions+=2;NFSU2_TR(0x5ecde1);
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
B5ecde3:{NFSU2_TR(0x5ecde3);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ecde4:L5ecde4:{c.instructions+=1;NFSU2_TR(0x5ecde4);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5ecde6:L5ecde6:{c.instructions+=2;NFSU2_TR(0x5ecde6);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x40ull))));
}
B5ecde9:{NFSU2_TR(0x5ecde9);
TAIL_STATIC(0x59fa30u,59f);
}
B5ecdf0:L5ecdf0:{c.instructions+=2;NFSU2_TR(0x5ecdf0);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x40ull))));
}
B5ecdf3:{NFSU2_TR(0x5ecdf3);
TAIL_STATIC(0x59fa30u,59f);
}
B5ece00:L5ece00:{c.instructions+=2;NFSU2_TR(0x5ece00);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5ece04:{NFSU2_TR(0x5ece04);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ece18;}}
}
B5ece06:L5ece06:{c.instructions+=3;NFSU2_TR(0x5ece06);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ece09:{NFSU2_TR(0x5ece09);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ece0c:{NFSU2_TR(0x5ece0c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ece11ull));
TAIL_STATIC(0x5942c0u,594);
}
B5ece11:L5ece11:{c.instructions+=4;NFSU2_TR(0x5ece11);
w1(R+512,u8((r4(R+0))!=(u32(0x0ull))));
w4(R+0,u32(0-u32(r4(R+0))));
}
B5ece13:{NFSU2_TR(0x5ece13);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B5ece15:{NFSU2_TR(0x5ece15);
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
B5ece17:{NFSU2_TR(0x5ece17);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ece18:L5ece18:{c.instructions+=2;NFSU2_TR(0x5ece18);
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
B5ece1a:{NFSU2_TR(0x5ece1a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ece20:L5ece20:{c.instructions+=2;NFSU2_TR(0x5ece20);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5ece24:{NFSU2_TR(0x5ece24);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ece57;}}
}
B5ece26:L5ece26:{c.instructions+=7;NFSU2_TR(0x5ece26);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ece29:{NFSU2_TR(0x5ece29);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ece2c:{NFSU2_TR(0x5ece2c);
{u32 ea_=u32(r4(R+4)+u32(92u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ece2f:{NFSU2_TR(0x5ece2f);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5ece35:{NFSU2_TR(0x5ece35);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5ece37:{NFSU2_TR(0x5ece37);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5ece3a:{NFSU2_TR(0x5ece3a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ece4b;}}
}
B5ece3c:L5ece3c:{c.instructions+=6;NFSU2_TR(0x5ece3c);
w4(R+0,u32(0x1ull));
}
B5ece41:{NFSU2_TR(0x5ece41);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B5ece43:{NFSU2_TR(0x5ece43);
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
B5ece45:{NFSU2_TR(0x5ece45);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+8),(U+0),1);
}
B5ece48:{NFSU2_TR(0x5ece48);
__builtin_memmove((R+0),(R+8),1);
}
B5ece4a:{NFSU2_TR(0x5ece4a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ece4b:L5ece4b:{c.instructions+=6;NFSU2_TR(0x5ece4b);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5ece4d:{NFSU2_TR(0x5ece4d);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B5ece4f:{NFSU2_TR(0x5ece4f);
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
B5ece51:{NFSU2_TR(0x5ece51);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+8),(U+0),1);
}
B5ece54:{NFSU2_TR(0x5ece54);
__builtin_memmove((R+0),(R+8),1);
}
B5ece56:{NFSU2_TR(0x5ece56);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ece57:L5ece57:{c.instructions+=2;NFSU2_TR(0x5ece57);
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
B5ece59:{NFSU2_TR(0x5ece59);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ece60:L5ece60:{c.instructions+=2;NFSU2_TR(0x5ece60);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B5ece64:{NFSU2_TR(0x5ece64);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ece97;}}
}
B5ece66:L5ece66:{c.instructions+=7;NFSU2_TR(0x5ece66);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ece69:{NFSU2_TR(0x5ece69);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ece6c:{NFSU2_TR(0x5ece6c);
{u32 ea_=u32(r4(R+4)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ece6f:{NFSU2_TR(0x5ece6f);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5ece75:{NFSU2_TR(0x5ece75);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5ece77:{NFSU2_TR(0x5ece77);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5ece7a:{NFSU2_TR(0x5ece7a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ece8b;}}
}
B5ece7c:L5ece7c:{c.instructions+=6;NFSU2_TR(0x5ece7c);
w4(R+0,u32(0x1ull));
}
B5ece81:{NFSU2_TR(0x5ece81);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B5ece83:{NFSU2_TR(0x5ece83);
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
B5ece85:{NFSU2_TR(0x5ece85);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+8),(U+0),1);
}
B5ece88:{NFSU2_TR(0x5ece88);
__builtin_memmove((R+0),(R+8),1);
}
B5ece8a:{NFSU2_TR(0x5ece8a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ece8b:L5ece8b:{c.instructions+=6;NFSU2_TR(0x5ece8b);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5ece8d:{NFSU2_TR(0x5ece8d);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B5ece8f:{NFSU2_TR(0x5ece8f);
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
B5ece91:{NFSU2_TR(0x5ece91);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+8),(U+0),1);
}
B5ece94:{NFSU2_TR(0x5ece94);
__builtin_memmove((R+0),(R+8),1);
}
B5ece96:{NFSU2_TR(0x5ece96);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ece97:L5ece97:{c.instructions+=2;NFSU2_TR(0x5ece97);
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
B5ece99:{NFSU2_TR(0x5ece99);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ecea0:L5ecea0:{c.instructions+=2;NFSU2_TR(0x5ecea0);
u8 U[22];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x1ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x1ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B5ecea4:{NFSU2_TR(0x5ecea4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5eceb0;}}
}
B5ecea6:L5ecea6:{c.instructions+=4;NFSU2_TR(0x5ecea6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ecea9:{NFSU2_TR(0x5ecea9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5eceac:{NFSU2_TR(0x5eceac);
{u32 ea_=u32(r4(R+4)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5eceaf:{NFSU2_TR(0x5eceaf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5eceb0:L5eceb0:{c.instructions+=2;NFSU2_TR(0x5eceb0);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5eceb6:{NFSU2_TR(0x5eceb6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ecec0:L5ecec0:{c.instructions+=3;NFSU2_TR(0x5ecec0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5ecec4:{NFSU2_TR(0x5ecec4);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5ecec6:{NFSU2_TR(0x5ecec6);
if(r1(R+518)){{goto L5ececb;}}
}
B5ecec8:L5ecec8:{c.instructions+=1;NFSU2_TR(0x5ecec8);
u8 U[1];
w1(U+0,u8(0x0ull));
s1(u32(r4(R+8)),r1(U+0));
}
B5ececb:L5ececb:{c.instructions+=2;NFSU2_TR(0x5ececb);
u8 U[22];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x1ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x1ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B5ececf:{NFSU2_TR(0x5ececf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ecf15;}}
}
B5eced1:L5eced1:{c.instructions+=4;NFSU2_TR(0x5eced1);
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
B5eced3:{NFSU2_TR(0x5eced3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5eced6:{NFSU2_TR(0x5eced6);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5eced9:{NFSU2_TR(0x5eced9);
if(r1(R+518)){{goto L5ecf0c;}}
}
B5ecedb:L5ecedb:{c.instructions+=5;NFSU2_TR(0x5ecedb);
{u32 ea_=u32(r4(R+4)+u32(152u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ecee1:{NFSU2_TR(0x5ecee1);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5ecee7:{NFSU2_TR(0x5ecee7);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5ecee9:{NFSU2_TR(0x5ecee9);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5eceec:{NFSU2_TR(0x5eceec);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5ecf03;}}
}
B5eceee:L5eceee:{c.instructions+=6;NFSU2_TR(0x5eceee);
w4(R+0,u32(0x1ull));
}
B5ecef3:{NFSU2_TR(0x5ecef3);
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
B5ecef5:{NFSU2_TR(0x5ecef5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B5ecef8:{NFSU2_TR(0x5ecef8);
u8 U[1];
__builtin_memmove((U+0),(R+0),1);
s1(u32(r4(R+8)),r1(U+0));
}
B5ecefa:{NFSU2_TR(0x5ecefa);
{u32 ea_=u32(r4(R+4)+u32(156u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ecf00:{NFSU2_TR(0x5ecf00);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ecf03:L5ecf03:{c.instructions+=4;NFSU2_TR(0x5ecf03);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5ecf05:{NFSU2_TR(0x5ecf05);
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
B5ecf07:{NFSU2_TR(0x5ecf07);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B5ecf0a:{NFSU2_TR(0x5ecf0a);
u8 U[1];
__builtin_memmove((U+0),(R+0),1);
s1(u32(r4(R+8)),r1(U+0));
}
B5ecf0c:L5ecf0c:{c.instructions+=2;NFSU2_TR(0x5ecf0c);
{u32 ea_=u32(r4(R+4)+u32(156u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ecf12:{NFSU2_TR(0x5ecf12);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ecf15:L5ecf15:{c.instructions+=2;NFSU2_TR(0x5ecf15);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ecf1b:{NFSU2_TR(0x5ecf1b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ecf20:L5ecf20:{c.instructions+=3;NFSU2_TR(0x5ecf20);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ecf24:{NFSU2_TR(0x5ecf24);
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
B5ecf26:{NFSU2_TR(0x5ecf26);
if(r1(R+518)){{goto L5ecf63;}}
}
B5ecf28:L5ecf28:{c.instructions+=3;NFSU2_TR(0x5ecf28);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5ecf2c:{NFSU2_TR(0x5ecf2c);
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
B5ecf2e:{NFSU2_TR(0x5ecf2e);
if(r1(R+518)){{goto L5ecf63;}}
}
B5ecf30:L5ecf30:{c.instructions+=12;NFSU2_TR(0x5ecf30);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x97cull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5ecf37:{NFSU2_TR(0x5ecf37);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ecf3a:{NFSU2_TR(0x5ecf3a);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ecf3d:{NFSU2_TR(0x5ecf3d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5ecf40:{NFSU2_TR(0x5ecf40);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5ecf42:{NFSU2_TR(0x5ecf42);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5ecf44:{NFSU2_TR(0x5ecf44);
{u32 ea_=u32(r4(R+4)+u32(2436u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ecf4a:{NFSU2_TR(0x5ecf4a);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ecf4e:{NFSU2_TR(0x5ecf4e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x980ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ecf54:{NFSU2_TR(0x5ecf54);
{u32 ea_=u32(r4(R+4)+u32(2440u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5ecf5a:{NFSU2_TR(0x5ecf5a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x98cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ecf60:{NFSU2_TR(0x5ecf60);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ecf63:L5ecf63:{c.instructions+=2;NFSU2_TR(0x5ecf63);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x97cull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B5ecf6a:{NFSU2_TR(0x5ecf6a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5ecf70:L5ecf70:{c.instructions+=11;NFSU2_TR(0x5ecf70);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ecf71:{NFSU2_TR(0x5ecf71);
__builtin_memmove((R+20),(R+16),4);
}
B5ecf73:{NFSU2_TR(0x5ecf73);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B5ecf76:{NFSU2_TR(0x5ecf76);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x64ull))));
}
B5ecf79:{NFSU2_TR(0x5ecf79);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ecf7a:{NFSU2_TR(0x5ecf7a);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ecf7b:{NFSU2_TR(0x5ecf7b);
__builtin_memmove((R+24),(R+4),4);
}
B5ecf7d:{NFSU2_TR(0x5ecf7d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ecf80:{NFSU2_TR(0x5ecf80);
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
B5ecf82:{NFSU2_TR(0x5ecf82);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ecf83:{NFSU2_TR(0x5ecf83);
if(r1(R+518)){TAIL_STATIC(0x5ed19cu,5ed);}
}
B5ecf89:L5ecf89:{c.instructions+=3;NFSU2_TR(0x5ecf89);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ecf8c:{NFSU2_TR(0x5ecf8c);
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
B5ecf8e:{NFSU2_TR(0x5ecf8e);
if(r1(R+518)){TAIL_STATIC(0x5ed19cu,5ed);}
}
B5ecf94:L5ecf94:{c.instructions+=3;NFSU2_TR(0x5ecf94);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5ecf97:{NFSU2_TR(0x5ecf97);
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
B5ecf99:{NFSU2_TR(0x5ecf99);
if(r1(R+518)){TAIL_STATIC(0x5ed19cu,5ed);}
}
B5ecf9f:L5ecf9f:{c.instructions+=2;NFSU2_TR(0x5ecf9f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5ecfa1:{NFSU2_TR(0x5ecfa1);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ecfa4ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5ecfa4:L5ecfa4:{c.instructions+=3;NFSU2_TR(0x5ecfa4);
__builtin_memmove((R+28),(R+0),4);
}
B5ecfa6:{NFSU2_TR(0x5ecfa6);
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
B5ecfa8:{NFSU2_TR(0x5ecfa8);
if(r1(R+518)){TAIL_STATIC(0x5ed19cu,5ed);}
}
B5ecfae:L5ecfae:{c.instructions+=8;NFSU2_TR(0x5ecfae);
__builtin_memmove((R+8),gp(0x7a566c),4);
}
B5ecfb4:{NFSU2_TR(0x5ecfb4);
__builtin_memmove((R+0),gp(0x7a5668),4);
}
B5ecfb9:{NFSU2_TR(0x5ecfb9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x430ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5ecfbf:{NFSU2_TR(0x5ecfbf);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ecfc0:{NFSU2_TR(0x5ecfc0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ecfc1:{NFSU2_TR(0x5ecfc1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5ecfc2:{NFSU2_TR(0x5ecfc2);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5ecfc6:{NFSU2_TR(0x5ecfc6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5ecfcbull));
TAIL_STATIC(0x401090u,401);
}
B5ecfcb:L5ecfcb:{c.instructions+=5;NFSU2_TR(0x5ecfcb);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5ecfcf:{NFSU2_TR(0x5ecfcf);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B5ecfd2:{NFSU2_TR(0x5ecfd2);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5ecfd4:{NFSU2_TR(0x5ecfd4);
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
B5ecfd7:{NFSU2_TR(0x5ecfd7);
if(r1(R+514)){TAIL_STATIC(0x5ed19cu,5ed);}
}
B5ecfdd:L5ecfdd:{c.instructions+=5;NFSU2_TR(0x5ecfdd);
{u32 ea_=u32(r4(R+24)+u32(184u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5ecfe3:{NFSU2_TR(0x5ecfe3);
{u32 ea_=u32(u32(7881560u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5ecfe9:{NFSU2_TR(0x5ecfe9);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5ecfeb:{NFSU2_TR(0x5ecfeb);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5ecfee:{NFSU2_TR(0x5ecfee);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){TAIL_STATIC(0x5ed19cu,5ed);}
}
B5ecff4:L5ecff4:{c.instructions+=2;NFSU2_TR(0x5ecff4);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x424ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x3ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x3ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x3ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B5ecffb:{NFSU2_TR(0x5ecffb);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){TAIL_STATIC(0x5ed19cu,5ed);}
TAIL_STATIC(0x5ed001u,5ed);
}
XIT:NFSU2_TR_EXIT(0x5ec,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
