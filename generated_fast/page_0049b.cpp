#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_4ff(u8* __restrict R,Cpu& c);
u32 body_502(u8* __restrict R,Cpu& c);
u32 body_50c(u8* __restrict R,Cpu& c);
u32 body_50d(u8* __restrict R,Cpu& c);
u32 body_537(u8* __restrict R,Cpu& c);
u32 body_558(u8* __restrict R,Cpu& c);
u32 body_5be(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x49b,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x49b,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_49b(u8* __restrict R,Cpu& c);
u32 page_49b(Cpu& c){return body_49b(c.regs.data(),c);}
__attribute__((noinline)) u32 body_49b(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x49b003:goto L49b003;
case 0x49b005:goto L49b005;
case 0x49b006:c.instructions+=1;goto B49b006;
case 0x49b008:goto L49b008;
case 0x49b00a:c.instructions+=1;goto B49b00a;
case 0x49b00c:goto L49b00c;
case 0x49b012:c.instructions+=1;goto B49b012;
case 0x49b014:goto L49b014;
case 0x49b015:c.instructions+=2;goto B49b015;
case 0x49b017:c.instructions+=1;goto B49b017;
case 0x49b019:goto L49b019;
case 0x49b01b:goto L49b01b;
case 0x49b020:c.instructions+=4;goto B49b020;
case 0x49b022:c.instructions+=3;goto B49b022;
case 0x49b023:c.instructions+=2;goto B49b023;
case 0x49b025:c.instructions+=1;goto B49b025;
case 0x49b028:goto L49b028;
case 0x49b02a:c.instructions+=2;goto B49b02a;
case 0x49b02c:c.instructions+=1;goto B49b02c;
case 0x49b02f:goto L49b02f;
case 0x49b030:c.instructions+=1;goto B49b030;
case 0x49b040:goto L49b040;
case 0x49b041:c.instructions+=5;goto B49b041;
case 0x49b043:c.instructions+=4;goto B49b043;
case 0x49b046:c.instructions+=3;goto B49b046;
case 0x49b04b:c.instructions+=2;goto B49b04b;
case 0x49b04c:c.instructions+=1;goto B49b04c;
case 0x49b051:goto L49b051;
case 0x49b058:c.instructions+=4;goto B49b058;
case 0x49b05a:c.instructions+=3;goto B49b05a;
case 0x49b05d:c.instructions+=2;goto B49b05d;
case 0x49b05f:c.instructions+=1;goto B49b05f;
case 0x49b061:goto L49b061;
case 0x49b062:c.instructions+=1;goto B49b062;
case 0x49b064:goto L49b064;
case 0x49b065:c.instructions+=1;goto B49b065;
case 0x49b067:goto L49b067;
case 0x49b06c:c.instructions+=4;goto B49b06c;
case 0x49b06d:c.instructions+=3;goto B49b06d;
case 0x49b070:c.instructions+=2;goto B49b070;
case 0x49b071:c.instructions+=1;goto B49b071;
case 0x49b076:goto L49b076;
case 0x49b079:c.instructions+=2;goto B49b079;
case 0x49b07a:c.instructions+=1;goto B49b07a;
case 0x49b07b:goto L49b07b;
case 0x49b080:c.instructions+=4;goto B49b080;
case 0x49b081:c.instructions+=3;goto B49b081;
case 0x49b084:c.instructions+=2;goto B49b084;
case 0x49b085:c.instructions+=1;goto B49b085;
case 0x49b08a:goto L49b08a;
case 0x49b08d:c.instructions+=2;goto B49b08d;
case 0x49b08e:c.instructions+=1;goto B49b08e;
case 0x49b08f:goto L49b08f;
case 0x49b094:goto L49b094;
case 0x49b095:c.instructions+=3;goto B49b095;
case 0x49b098:c.instructions+=2;goto B49b098;
case 0x49b099:c.instructions+=1;goto B49b099;
case 0x49b09e:goto L49b09e;
case 0x49b0a1:c.instructions+=2;goto B49b0a1;
case 0x49b0a2:c.instructions+=1;goto B49b0a2;
case 0x49b0b0:goto L49b0b0;
case 0x49b0b7:c.instructions+=5;goto B49b0b7;
case 0x49b0b8:c.instructions+=4;goto B49b0b8;
case 0x49b0ba:c.instructions+=3;goto B49b0ba;
case 0x49b0be:c.instructions+=2;goto B49b0be;
case 0x49b0c4:c.instructions+=1;goto B49b0c4;
case 0x49b0c6:goto L49b0c6;
case 0x49b0c7:c.instructions+=1;goto B49b0c7;
case 0x49b0c9:goto L49b0c9;
case 0x49b0ce:c.instructions+=1;goto B49b0ce;
case 0x49b0d0:goto L49b0d0;
case 0x49b0d6:c.instructions+=1;goto B49b0d6;
case 0x49b0d8:goto L49b0d8;
case 0x49b0d9:c.instructions+=2;goto B49b0d9;
case 0x49b0dc:c.instructions+=1;goto B49b0dc;
case 0x49b0de:goto L49b0de;
case 0x49b0e0:goto L49b0e0;
case 0x49b0e5:c.instructions+=4;goto B49b0e5;
case 0x49b0e7:c.instructions+=3;goto B49b0e7;
case 0x49b0e8:c.instructions+=2;goto B49b0e8;
case 0x49b0ea:c.instructions+=1;goto B49b0ea;
case 0x49b0ed:goto L49b0ed;
case 0x49b0ef:c.instructions+=2;goto B49b0ef;
case 0x49b0f1:c.instructions+=1;goto B49b0f1;
case 0x49b0f4:goto L49b0f4;
case 0x49b0f5:c.instructions+=1;goto B49b0f5;
case 0x49b100:goto L49b100;
case 0x49b101:c.instructions+=5;goto B49b101;
case 0x49b103:c.instructions+=4;goto B49b103;
case 0x49b106:c.instructions+=3;goto B49b106;
case 0x49b10b:c.instructions+=2;goto B49b10b;
case 0x49b10c:c.instructions+=1;goto B49b10c;
case 0x49b111:goto L49b111;
case 0x49b118:c.instructions+=4;goto B49b118;
case 0x49b11a:c.instructions+=3;goto B49b11a;
case 0x49b11d:c.instructions+=2;goto B49b11d;
case 0x49b11f:c.instructions+=1;goto B49b11f;
case 0x49b121:goto L49b121;
case 0x49b122:c.instructions+=1;goto B49b122;
case 0x49b124:goto L49b124;
case 0x49b125:c.instructions+=1;goto B49b125;
case 0x49b127:goto L49b127;
case 0x49b12c:c.instructions+=4;goto B49b12c;
case 0x49b12d:c.instructions+=3;goto B49b12d;
case 0x49b130:c.instructions+=2;goto B49b130;
case 0x49b131:c.instructions+=1;goto B49b131;
case 0x49b136:goto L49b136;
case 0x49b139:c.instructions+=2;goto B49b139;
case 0x49b13a:c.instructions+=1;goto B49b13a;
case 0x49b13b:goto L49b13b;
case 0x49b140:c.instructions+=4;goto B49b140;
case 0x49b141:c.instructions+=3;goto B49b141;
case 0x49b144:c.instructions+=2;goto B49b144;
case 0x49b145:c.instructions+=1;goto B49b145;
case 0x49b14a:goto L49b14a;
case 0x49b14d:c.instructions+=2;goto B49b14d;
case 0x49b14e:c.instructions+=1;goto B49b14e;
case 0x49b14f:goto L49b14f;
case 0x49b154:goto L49b154;
case 0x49b155:c.instructions+=3;goto B49b155;
case 0x49b158:c.instructions+=2;goto B49b158;
case 0x49b159:c.instructions+=1;goto B49b159;
case 0x49b15e:goto L49b15e;
case 0x49b161:c.instructions+=2;goto B49b161;
case 0x49b162:c.instructions+=1;goto B49b162;
case 0x49b170:goto L49b170;
case 0x49b171:c.instructions+=6;goto B49b171;
case 0x49b172:c.instructions+=5;goto B49b172;
case 0x49b173:c.instructions+=4;goto B49b173;
case 0x49b177:c.instructions+=3;goto B49b177;
case 0x49b17d:c.instructions+=2;goto B49b17d;
case 0x49b17f:c.instructions+=1;goto B49b17f;
case 0x49b181:goto L49b181;
case 0x49b186:c.instructions+=3;goto B49b186;
case 0x49b188:c.instructions+=2;goto B49b188;
case 0x49b18a:c.instructions+=1;goto B49b18a;
case 0x49b18c:goto L49b18c;
case 0x49b192:c.instructions+=1;goto B49b192;
case 0x49b194:goto L49b194;
case 0x49b199:c.instructions+=1;goto B49b199;
case 0x49b19e:goto L49b19e;
case 0x49b1a0:c.instructions+=1;goto B49b1a0;
case 0x49b1a2:goto L49b1a2;
case 0x49b1a4:c.instructions+=3;goto B49b1a4;
case 0x49b1a9:c.instructions+=2;goto B49b1a9;
case 0x49b1ae:c.instructions+=1;goto B49b1ae;
case 0x49b1b0:goto L49b1b0;
case 0x49b1b6:c.instructions+=1;goto B49b1b6;
case 0x49b1b8:goto L49b1b8;
case 0x49b1bd:c.instructions+=3;goto B49b1bd;
case 0x49b1bf:c.instructions+=2;goto B49b1bf;
case 0x49b1c1:c.instructions+=1;goto B49b1c1;
case 0x49b1c3:goto L49b1c3;
case 0x49b1c9:c.instructions+=1;goto B49b1c9;
case 0x49b1cb:goto L49b1cb;
case 0x49b1d0:c.instructions+=1;goto B49b1d0;
case 0x49b1d5:goto L49b1d5;
case 0x49b1d7:c.instructions+=1;goto B49b1d7;
case 0x49b1d9:goto L49b1d9;
case 0x49b1df:c.instructions+=1;goto B49b1df;
case 0x49b1e1:goto L49b1e1;
case 0x49b1e8:goto L49b1e8;
case 0x49b1ee:goto L49b1ee;
case 0x49b1f0:c.instructions+=3;goto B49b1f0;
case 0x49b1f1:c.instructions+=2;goto B49b1f1;
case 0x49b1f3:c.instructions+=1;goto B49b1f3;
case 0x49b1f6:goto L49b1f6;
case 0x49b1f8:c.instructions+=2;goto B49b1f8;
case 0x49b1fa:c.instructions+=1;goto B49b1fa;
case 0x49b1fd:goto L49b1fd;
case 0x49b1fe:c.instructions+=3;goto B49b1fe;
case 0x49b1ff:c.instructions+=2;goto B49b1ff;
case 0x49b200:c.instructions+=1;goto B49b200;
case 0x49b210:goto L49b210;
case 0x49b211:c.instructions+=5;goto B49b211;
case 0x49b213:c.instructions+=4;goto B49b213;
case 0x49b216:c.instructions+=3;goto B49b216;
case 0x49b21b:c.instructions+=2;goto B49b21b;
case 0x49b21c:c.instructions+=1;goto B49b21c;
case 0x49b221:goto L49b221;
case 0x49b226:c.instructions+=3;goto B49b226;
case 0x49b229:c.instructions+=2;goto B49b229;
case 0x49b22b:c.instructions+=1;goto B49b22b;
case 0x49b22d:goto L49b22d;
case 0x49b230:c.instructions+=4;goto B49b230;
case 0x49b235:c.instructions+=3;goto B49b235;
case 0x49b236:c.instructions+=2;goto B49b236;
case 0x49b237:c.instructions+=1;goto B49b237;
case 0x49b23c:goto L49b23c;
case 0x49b23f:c.instructions+=2;goto B49b23f;
case 0x49b240:c.instructions+=1;goto B49b240;
case 0x49b241:goto L49b241;
case 0x49b246:c.instructions+=7;goto B49b246;
case 0x49b249:c.instructions+=6;goto B49b249;
case 0x49b24b:c.instructions+=5;goto B49b24b;
case 0x49b24d:c.instructions+=4;goto B49b24d;
case 0x49b252:c.instructions+=3;goto B49b252;
case 0x49b253:c.instructions+=2;goto B49b253;
case 0x49b254:c.instructions+=1;goto B49b254;
case 0x49b259:goto L49b259;
case 0x49b25c:c.instructions+=2;goto B49b25c;
case 0x49b25d:c.instructions+=1;goto B49b25d;
case 0x49b260:goto L49b260;
case 0x49b261:c.instructions+=4;goto B49b261;
case 0x49b263:c.instructions+=3;goto B49b263;
case 0x49b267:c.instructions+=2;goto B49b267;
case 0x49b26d:c.instructions+=1;goto B49b26d;
case 0x49b26f:goto L49b26f;
case 0x49b275:c.instructions+=1;goto B49b275;
case 0x49b277:goto L49b277;
case 0x49b27a:c.instructions+=5;goto B49b27a;
case 0x49b27d:c.instructions+=4;goto B49b27d;
case 0x49b284:c.instructions+=3;goto B49b284;
case 0x49b286:c.instructions+=2;goto B49b286;
case 0x49b289:c.instructions+=1;goto B49b289;
case 0x49b290:goto L49b290;
case 0x49b292:c.instructions+=3;goto B49b292;
case 0x49b293:c.instructions+=2;goto B49b293;
case 0x49b295:c.instructions+=1;goto B49b295;
case 0x49b298:goto L49b298;
case 0x49b29a:c.instructions+=2;goto B49b29a;
case 0x49b29c:c.instructions+=1;goto B49b29c;
case 0x49b29f:goto L49b29f;
case 0x49b2a0:c.instructions+=1;goto B49b2a0;
case 0x49b2b0:goto L49b2b0;
case 0x49b2b1:c.instructions+=5;goto B49b2b1;
case 0x49b2b3:c.instructions+=4;goto B49b2b3;
case 0x49b2b6:c.instructions+=3;goto B49b2b6;
case 0x49b2bb:c.instructions+=2;goto B49b2bb;
case 0x49b2bc:c.instructions+=1;goto B49b2bc;
case 0x49b2c1:goto L49b2c1;
case 0x49b2c4:c.instructions+=10;goto B49b2c4;
case 0x49b2c7:c.instructions+=9;goto B49b2c7;
case 0x49b2ce:c.instructions+=8;goto B49b2ce;
case 0x49b2d1:c.instructions+=7;goto B49b2d1;
case 0x49b2d3:c.instructions+=6;goto B49b2d3;
case 0x49b2d5:c.instructions+=5;goto B49b2d5;
case 0x49b2db:c.instructions+=4;goto B49b2db;
case 0x49b2e1:c.instructions+=3;goto B49b2e1;
case 0x49b2e2:c.instructions+=2;goto B49b2e2;
case 0x49b2e3:c.instructions+=1;goto B49b2e3;
case 0x49b2e8:goto L49b2e8;
case 0x49b2eb:c.instructions+=2;goto B49b2eb;
case 0x49b2ec:c.instructions+=1;goto B49b2ec;
case 0x49b2f0:goto L49b2f0;
case 0x49b2f4:c.instructions+=4;goto B49b2f4;
case 0x49b2f9:c.instructions+=3;goto B49b2f9;
case 0x49b2fa:c.instructions+=2;goto B49b2fa;
case 0x49b2fc:c.instructions+=1;goto B49b2fc;
case 0x49b2fe:goto L49b2fe;
case 0x49b303:c.instructions+=1;goto B49b303;
case 0x49b305:goto L49b305;
case 0x49b309:c.instructions+=5;goto B49b309;
case 0x49b30b:c.instructions+=4;goto B49b30b;
case 0x49b310:c.instructions+=3;goto B49b310;
case 0x49b315:c.instructions+=2;goto B49b315;
case 0x49b316:c.instructions+=1;goto B49b316;
case 0x49b31b:goto L49b31b;
case 0x49b31e:goto L49b31e;
case 0x49b320:c.instructions+=2;goto B49b320;
case 0x49b322:c.instructions+=1;goto B49b322;
case 0x49b325:goto L49b325;
case 0x49b326:c.instructions+=1;goto B49b326;
case 0x49b330:goto L49b330;
case 0x49b333:c.instructions+=3;goto B49b333;
case 0x49b338:c.instructions+=2;goto B49b338;
case 0x49b339:c.instructions+=1;goto B49b339;
case 0x49b33e:goto L49b33e;
case 0x49b341:c.instructions+=1;goto B49b341;
case 0x49b350:goto L49b350;
case 0x49b351:c.instructions+=7;goto B49b351;
case 0x49b352:c.instructions+=6;goto B49b352;
case 0x49b356:c.instructions+=5;goto B49b356;
case 0x49b358:c.instructions+=4;goto B49b358;
case 0x49b35b:c.instructions+=3;goto B49b35b;
case 0x49b35e:c.instructions+=2;goto B49b35e;
case 0x49b35f:c.instructions+=1;goto B49b35f;
case 0x49b362:goto L49b362;
case 0x49b364:c.instructions+=1;goto B49b364;
case 0x49b366:goto L49b366;
case 0x49b368:c.instructions+=3;goto B49b368;
case 0x49b369:c.instructions+=2;goto B49b369;
case 0x49b36b:c.instructions+=1;goto B49b36b;
case 0x49b36e:goto L49b36e;
case 0x49b374:c.instructions+=5;goto B49b374;
case 0x49b377:c.instructions+=4;goto B49b377;
case 0x49b379:c.instructions+=3;goto B49b379;
case 0x49b37b:c.instructions+=2;goto B49b37b;
case 0x49b382:c.instructions+=1;goto B49b382;
case 0x49b385:goto L49b385;
case 0x49b388:c.instructions+=3;goto B49b388;
case 0x49b38a:c.instructions+=2;goto B49b38a;
case 0x49b38c:c.instructions+=1;goto B49b38c;
case 0x49b38f:goto L49b38f;
case 0x49b390:c.instructions+=2;goto B49b390;
case 0x49b391:c.instructions+=1;goto B49b391;
case 0x49b3a0:goto L49b3a0;
case 0x49b3a3:c.instructions+=3;goto B49b3a3;
case 0x49b3a8:c.instructions+=2;goto B49b3a8;
case 0x49b3a9:c.instructions+=1;goto B49b3a9;
case 0x49b3ae:goto L49b3ae;
case 0x49b3b1:c.instructions+=1;goto B49b3b1;
case 0x49b3c0:goto L49b3c0;
case 0x49b3c1:c.instructions+=12;goto B49b3c1;
case 0x49b3c7:c.instructions+=11;goto B49b3c7;
case 0x49b3ca:c.instructions+=10;goto B49b3ca;
case 0x49b3d1:c.instructions+=9;goto B49b3d1;
case 0x49b3d6:c.instructions+=8;goto B49b3d6;
case 0x49b3da:c.instructions+=7;goto B49b3da;
case 0x49b3dd:c.instructions+=6;goto B49b3dd;
case 0x49b3e1:c.instructions+=5;goto B49b3e1;
case 0x49b3e8:c.instructions+=4;goto B49b3e8;
case 0x49b3ee:c.instructions+=3;goto B49b3ee;
case 0x49b3ef:c.instructions+=2;goto B49b3ef;
case 0x49b3f2:c.instructions+=1;goto B49b3f2;
case 0x49b3f7:goto L49b3f7;
case 0x49b3f8:c.instructions+=1;goto B49b3f8;
case 0x49b400:goto L49b400;
case 0x49b401:c.instructions+=7;goto B49b401;
case 0x49b402:c.instructions+=6;goto B49b402;
case 0x49b406:c.instructions+=5;goto B49b406;
case 0x49b408:c.instructions+=4;goto B49b408;
case 0x49b40b:c.instructions+=3;goto B49b40b;
case 0x49b40e:c.instructions+=2;goto B49b40e;
case 0x49b40f:c.instructions+=1;goto B49b40f;
case 0x49b412:goto L49b412;
case 0x49b414:c.instructions+=1;goto B49b414;
case 0x49b416:goto L49b416;
case 0x49b418:c.instructions+=3;goto B49b418;
case 0x49b419:c.instructions+=2;goto B49b419;
case 0x49b41b:c.instructions+=1;goto B49b41b;
case 0x49b41e:goto L49b41e;
case 0x49b424:c.instructions+=5;goto B49b424;
case 0x49b427:c.instructions+=4;goto B49b427;
case 0x49b429:c.instructions+=3;goto B49b429;
case 0x49b42b:c.instructions+=2;goto B49b42b;
case 0x49b432:c.instructions+=1;goto B49b432;
case 0x49b435:goto L49b435;
case 0x49b438:c.instructions+=3;goto B49b438;
case 0x49b43a:c.instructions+=2;goto B49b43a;
case 0x49b43c:c.instructions+=1;goto B49b43c;
case 0x49b43f:goto L49b43f;
case 0x49b440:c.instructions+=2;goto B49b440;
case 0x49b441:c.instructions+=1;goto B49b441;
case 0x49b450:goto L49b450;
case 0x49b451:c.instructions+=7;goto B49b451;
case 0x49b457:c.instructions+=6;goto B49b457;
case 0x49b45b:c.instructions+=5;goto B49b45b;
case 0x49b45f:c.instructions+=4;goto B49b45f;
case 0x49b465:c.instructions+=3;goto B49b465;
case 0x49b467:c.instructions+=2;goto B49b467;
case 0x49b46a:c.instructions+=1;goto B49b46a;
case 0x49b46c:goto L49b46c;
case 0x49b470:c.instructions+=5;goto B49b470;
case 0x49b476:c.instructions+=4;goto B49b476;
case 0x49b47a:c.instructions+=3;goto B49b47a;
case 0x49b47c:c.instructions+=2;goto B49b47c;
case 0x49b47f:c.instructions+=1;goto B49b47f;
case 0x49b481:goto L49b481;
case 0x49b483:c.instructions+=1;goto B49b483;
case 0x49b489:goto L49b489;
case 0x49b48f:c.instructions+=3;goto B49b48f;
case 0x49b495:c.instructions+=2;goto B49b495;
case 0x49b496:c.instructions+=1;goto B49b496;
case 0x49b497:goto L49b497;
case 0x49b49d:c.instructions+=4;goto B49b49d;
case 0x49b4a3:c.instructions+=3;goto B49b4a3;
case 0x49b4a9:c.instructions+=2;goto B49b4a9;
case 0x49b4aa:c.instructions+=1;goto B49b4aa;
case 0x49b4b0:goto L49b4b0;
case 0x49b4b3:c.instructions+=3;goto B49b4b3;
case 0x49b4b8:c.instructions+=2;goto B49b4b8;
case 0x49b4b9:c.instructions+=1;goto B49b4b9;
case 0x49b4be:goto L49b4be;
case 0x49b4c1:c.instructions+=1;goto B49b4c1;
case 0x49b4d0:goto L49b4d0;
case 0x49b4d1:c.instructions+=8;goto B49b4d1;
case 0x49b4d7:c.instructions+=7;goto B49b4d7;
case 0x49b4da:c.instructions+=6;goto B49b4da;
case 0x49b4e1:c.instructions+=5;goto B49b4e1;
case 0x49b4e5:c.instructions+=4;goto B49b4e5;
case 0x49b4eb:c.instructions+=3;goto B49b4eb;
case 0x49b4ed:c.instructions+=2;goto B49b4ed;
case 0x49b4f0:c.instructions+=1;goto B49b4f0;
case 0x49b4f2:goto L49b4f2;
case 0x49b4f6:c.instructions+=5;goto B49b4f6;
case 0x49b4fc:c.instructions+=4;goto B49b4fc;
case 0x49b500:c.instructions+=3;goto B49b500;
case 0x49b502:c.instructions+=2;goto B49b502;
case 0x49b505:c.instructions+=1;goto B49b505;
case 0x49b507:goto L49b507;
case 0x49b509:c.instructions+=1;goto B49b509;
case 0x49b50f:goto L49b50f;
case 0x49b515:c.instructions+=9;goto B49b515;
case 0x49b516:c.instructions+=8;goto B49b516;
case 0x49b51d:c.instructions+=7;goto B49b51d;
case 0x49b524:c.instructions+=6;goto B49b524;
case 0x49b52a:c.instructions+=5;goto B49b52a;
case 0x49b534:c.instructions+=4;goto B49b534;
case 0x49b537:c.instructions+=3;goto B49b537;
case 0x49b53d:c.instructions+=2;goto B49b53d;
case 0x49b540:c.instructions+=1;goto B49b540;
case 0x49b545:goto L49b545;
case 0x49b546:c.instructions+=1;goto B49b546;
case 0x49b547:goto L49b547;
case 0x49b54d:c.instructions+=1;goto B49b54d;
case 0x49b550:goto L49b550;
case 0x49b551:c.instructions+=7;goto B49b551;
case 0x49b552:c.instructions+=6;goto B49b552;
case 0x49b556:c.instructions+=5;goto B49b556;
case 0x49b558:c.instructions+=4;goto B49b558;
case 0x49b55b:c.instructions+=3;goto B49b55b;
case 0x49b55e:c.instructions+=2;goto B49b55e;
case 0x49b55f:c.instructions+=1;goto B49b55f;
case 0x49b562:goto L49b562;
case 0x49b564:c.instructions+=1;goto B49b564;
case 0x49b566:goto L49b566;
case 0x49b568:c.instructions+=3;goto B49b568;
case 0x49b569:c.instructions+=2;goto B49b569;
case 0x49b56b:c.instructions+=1;goto B49b56b;
case 0x49b56e:goto L49b56e;
case 0x49b574:c.instructions+=5;goto B49b574;
case 0x49b577:c.instructions+=4;goto B49b577;
case 0x49b579:c.instructions+=3;goto B49b579;
case 0x49b57b:c.instructions+=2;goto B49b57b;
case 0x49b582:c.instructions+=1;goto B49b582;
case 0x49b585:goto L49b585;
case 0x49b588:c.instructions+=3;goto B49b588;
case 0x49b58a:c.instructions+=2;goto B49b58a;
case 0x49b58c:c.instructions+=1;goto B49b58c;
case 0x49b58f:goto L49b58f;
case 0x49b590:c.instructions+=2;goto B49b590;
case 0x49b591:c.instructions+=1;goto B49b591;
case 0x49b5a0:goto L49b5a0;
case 0x49b5a3:c.instructions+=3;goto B49b5a3;
case 0x49b5a8:c.instructions+=2;goto B49b5a8;
case 0x49b5a9:c.instructions+=1;goto B49b5a9;
case 0x49b5ae:goto L49b5ae;
case 0x49b5b1:c.instructions+=1;goto B49b5b1;
case 0x49b5c0:goto L49b5c0;
case 0x49b5c1:c.instructions+=11;goto B49b5c1;
case 0x49b5c7:c.instructions+=10;goto B49b5c7;
case 0x49b5ca:c.instructions+=9;goto B49b5ca;
case 0x49b5d1:c.instructions+=8;goto B49b5d1;
case 0x49b5d8:c.instructions+=7;goto B49b5d8;
case 0x49b5dc:c.instructions+=6;goto B49b5dc;
case 0x49b5e3:c.instructions+=5;goto B49b5e3;
case 0x49b5e7:c.instructions+=4;goto B49b5e7;
case 0x49b5f1:c.instructions+=3;goto B49b5f1;
case 0x49b5f2:c.instructions+=2;goto B49b5f2;
case 0x49b5f5:c.instructions+=1;goto B49b5f5;
case 0x49b5fa:goto L49b5fa;
case 0x49b5fb:c.instructions+=1;goto B49b5fb;
case 0x49b600:goto L49b600;
case 0x49b604:c.instructions+=5;goto B49b604;
case 0x49b60a:c.instructions+=4;goto B49b60a;
case 0x49b60f:c.instructions+=3;goto B49b60f;
case 0x49b610:c.instructions+=2;goto B49b610;
case 0x49b612:c.instructions+=1;goto B49b612;
case 0x49b614:goto L49b614;
case 0x49b617:c.instructions+=1;goto B49b617;
case 0x49b619:goto L49b619;
case 0x49b620:goto L49b620;
case 0x49b627:c.instructions+=3;goto B49b627;
case 0x49b628:c.instructions+=2;goto B49b628;
case 0x49b62a:c.instructions+=1;goto B49b62a;
case 0x49b62c:goto L49b62c;
case 0x49b62f:c.instructions+=1;goto B49b62f;
case 0x49b631:goto L49b631;
case 0x49b633:goto L49b633;
case 0x49b639:c.instructions+=1;goto B49b639;
case 0x49b63b:goto L49b63b;
case 0x49b63d:c.instructions+=1;goto B49b63d;
case 0x49b63f:goto L49b63f;
case 0x49b640:goto L49b640;
case 0x49b647:c.instructions+=3;goto B49b647;
case 0x49b648:c.instructions+=2;goto B49b648;
case 0x49b64a:c.instructions+=1;goto B49b64a;
case 0x49b64c:goto L49b64c;
case 0x49b64e:c.instructions+=1;goto B49b64e;
case 0x49b650:goto L49b650;
case 0x49b655:goto L49b655;
case 0x49b65c:c.instructions+=2;goto B49b65c;
case 0x49b65e:c.instructions+=1;goto B49b65e;
case 0x49b660:goto L49b660;
case 0x49b666:c.instructions+=2;goto B49b666;
case 0x49b668:c.instructions+=1;goto B49b668;
case 0x49b66b:goto L49b66b;
case 0x49b66c:c.instructions+=1;goto B49b66c;
case 0x49b66f:goto L49b66f;
case 0x49b671:c.instructions+=1;goto B49b671;
case 0x49b673:goto L49b673;
case 0x49b67a:goto L49b67a;
case 0x49b67c:c.instructions+=1;goto B49b67c;
case 0x49b67f:goto L49b67f;
case 0x49b680:c.instructions+=1;goto B49b680;
case 0x49b690:goto L49b690;
case 0x49b691:c.instructions+=5;goto B49b691;
case 0x49b693:c.instructions+=4;goto B49b693;
case 0x49b696:c.instructions+=3;goto B49b696;
case 0x49b69b:c.instructions+=2;goto B49b69b;
case 0x49b69c:c.instructions+=1;goto B49b69c;
case 0x49b6a1:goto L49b6a1;
case 0x49b6a6:c.instructions+=3;goto B49b6a6;
case 0x49b6a9:c.instructions+=2;goto B49b6a9;
case 0x49b6ac:c.instructions+=1;goto B49b6ac;
case 0x49b6ae:goto L49b6ae;
case 0x49b6b5:goto L49b6b5;
case 0x49b6b8:c.instructions+=3;goto B49b6b8;
case 0x49b6bd:c.instructions+=2;goto B49b6bd;
case 0x49b6be:c.instructions+=1;goto B49b6be;
case 0x49b6c3:goto L49b6c3;
case 0x49b6c6:c.instructions+=2;goto B49b6c6;
case 0x49b6c7:c.instructions+=1;goto B49b6c7;
case 0x49b6c8:goto L49b6c8;
case 0x49b6cb:c.instructions+=3;goto B49b6cb;
case 0x49b6d0:c.instructions+=2;goto B49b6d0;
case 0x49b6d1:c.instructions+=1;goto B49b6d1;
case 0x49b6d6:goto L49b6d6;
case 0x49b6d9:c.instructions+=2;goto B49b6d9;
case 0x49b6da:c.instructions+=1;goto B49b6da;
case 0x49b6db:goto L49b6db;
case 0x49b6de:c.instructions+=3;goto B49b6de;
case 0x49b6e3:c.instructions+=2;goto B49b6e3;
case 0x49b6e4:c.instructions+=1;goto B49b6e4;
case 0x49b6e9:goto L49b6e9;
case 0x49b6ec:c.instructions+=2;goto B49b6ec;
case 0x49b6ed:c.instructions+=1;goto B49b6ed;
case 0x49b6ee:goto L49b6ee;
case 0x49b6f1:c.instructions+=3;goto B49b6f1;
case 0x49b6f6:c.instructions+=2;goto B49b6f6;
case 0x49b6f7:c.instructions+=1;goto B49b6f7;
case 0x49b6fc:goto L49b6fc;
case 0x49b6ff:c.instructions+=2;goto B49b6ff;
case 0x49b700:c.instructions+=1;goto B49b700;
case 0x49b701:goto L49b701;
case 0x49b704:c.instructions+=3;goto B49b704;
case 0x49b709:c.instructions+=2;goto B49b709;
case 0x49b70a:c.instructions+=1;goto B49b70a;
case 0x49b70f:goto L49b70f;
case 0x49b712:c.instructions+=2;goto B49b712;
case 0x49b713:c.instructions+=1;goto B49b713;
case 0x49b714:goto L49b714;
case 0x49b717:c.instructions+=3;goto B49b717;
case 0x49b71c:c.instructions+=2;goto B49b71c;
case 0x49b71d:c.instructions+=1;goto B49b71d;
case 0x49b722:goto L49b722;
case 0x49b725:goto L49b725;
case 0x49b726:c.instructions+=1;goto B49b726;
case 0x49b740:goto L49b740;
case 0x49b741:c.instructions+=7;goto B49b741;
case 0x49b742:c.instructions+=6;goto B49b742;
case 0x49b746:c.instructions+=5;goto B49b746;
case 0x49b748:c.instructions+=4;goto B49b748;
case 0x49b74b:c.instructions+=3;goto B49b74b;
case 0x49b74e:c.instructions+=2;goto B49b74e;
case 0x49b74f:c.instructions+=1;goto B49b74f;
case 0x49b752:goto L49b752;
case 0x49b754:c.instructions+=1;goto B49b754;
case 0x49b756:goto L49b756;
case 0x49b758:c.instructions+=3;goto B49b758;
case 0x49b759:c.instructions+=2;goto B49b759;
case 0x49b75b:c.instructions+=1;goto B49b75b;
case 0x49b75e:goto L49b75e;
case 0x49b760:c.instructions+=2;goto B49b760;
case 0x49b762:c.instructions+=1;goto B49b762;
case 0x49b765:goto L49b765;
case 0x49b76a:goto L49b76a;
case 0x49b76f:c.instructions+=1;goto B49b76f;
case 0x49b774:goto L49b774;
case 0x49b77b:c.instructions+=3;goto B49b77b;
case 0x49b781:c.instructions+=2;goto B49b781;
case 0x49b783:c.instructions+=1;goto B49b783;
case 0x49b786:goto L49b786;
case 0x49b788:c.instructions+=2;goto B49b788;
case 0x49b78a:c.instructions+=1;goto B49b78a;
case 0x49b78d:goto L49b78d;
case 0x49b78e:c.instructions+=2;goto B49b78e;
case 0x49b78f:c.instructions+=1;goto B49b78f;
case 0x49b7a0:goto L49b7a0;
case 0x49b7a3:c.instructions+=3;goto B49b7a3;
case 0x49b7a8:c.instructions+=2;goto B49b7a8;
case 0x49b7a9:c.instructions+=1;goto B49b7a9;
case 0x49b7ae:goto L49b7ae;
case 0x49b7b1:c.instructions+=1;goto B49b7b1;
case 0x49b7c0:goto L49b7c0;
case 0x49b7c1:c.instructions+=10;goto B49b7c1;
case 0x49b7c7:c.instructions+=9;goto B49b7c7;
case 0x49b7cc:c.instructions+=8;goto B49b7cc;
case 0x49b7cf:c.instructions+=7;goto B49b7cf;
case 0x49b7d5:c.instructions+=6;goto B49b7d5;
case 0x49b7d9:c.instructions+=5;goto B49b7d9;
case 0x49b7e0:c.instructions+=4;goto B49b7e0;
case 0x49b7e4:c.instructions+=3;goto B49b7e4;
case 0x49b7e5:c.instructions+=2;goto B49b7e5;
case 0x49b7e8:c.instructions+=1;goto B49b7e8;
case 0x49b7ed:goto L49b7ed;
case 0x49b7ee:c.instructions+=1;goto B49b7ee;
case 0x49b7f0:goto L49b7f0;
case 0x49b7f1:c.instructions+=7;goto B49b7f1;
case 0x49b7f2:c.instructions+=6;goto B49b7f2;
case 0x49b7f6:c.instructions+=5;goto B49b7f6;
case 0x49b7f8:c.instructions+=4;goto B49b7f8;
case 0x49b7fb:c.instructions+=3;goto B49b7fb;
case 0x49b7fe:c.instructions+=2;goto B49b7fe;
case 0x49b7ff:c.instructions+=1;goto B49b7ff;
case 0x49b802:goto L49b802;
case 0x49b804:c.instructions+=1;goto B49b804;
case 0x49b806:goto L49b806;
case 0x49b808:c.instructions+=3;goto B49b808;
case 0x49b809:c.instructions+=2;goto B49b809;
case 0x49b80b:c.instructions+=1;goto B49b80b;
case 0x49b80e:goto L49b80e;
case 0x49b810:c.instructions+=2;goto B49b810;
case 0x49b812:c.instructions+=1;goto B49b812;
case 0x49b815:goto L49b815;
case 0x49b81a:goto L49b81a;
case 0x49b81f:c.instructions+=4;goto B49b81f;
case 0x49b826:c.instructions+=3;goto B49b826;
case 0x49b828:c.instructions+=2;goto B49b828;
case 0x49b82a:c.instructions+=1;goto B49b82a;
case 0x49b82d:goto L49b82d;
case 0x49b82e:c.instructions+=2;goto B49b82e;
case 0x49b82f:c.instructions+=1;goto B49b82f;
case 0x49b840:goto L49b840;
case 0x49b843:c.instructions+=3;goto B49b843;
case 0x49b848:c.instructions+=2;goto B49b848;
case 0x49b849:c.instructions+=1;goto B49b849;
case 0x49b84e:goto L49b84e;
case 0x49b851:c.instructions+=1;goto B49b851;
case 0x49b860:goto L49b860;
case 0x49b861:c.instructions+=10;goto B49b861;
case 0x49b867:c.instructions+=9;goto B49b867;
case 0x49b86a:c.instructions+=8;goto B49b86a;
case 0x49b86e:c.instructions+=7;goto B49b86e;
case 0x49b874:c.instructions+=6;goto B49b874;
case 0x49b878:c.instructions+=5;goto B49b878;
case 0x49b87f:c.instructions+=4;goto B49b87f;
case 0x49b886:c.instructions+=3;goto B49b886;
case 0x49b889:c.instructions+=2;goto B49b889;
case 0x49b88a:c.instructions+=1;goto B49b88a;
case 0x49b88f:goto L49b88f;
case 0x49b890:c.instructions+=1;goto B49b890;
case 0x49b8a0:goto L49b8a0;
case 0x49b8a4:c.instructions+=2;goto B49b8a4;
case 0x49b8a9:c.instructions+=1;goto B49b8a9;
case 0x49b8ab:goto L49b8ab;
case 0x49b8b0:c.instructions+=1;goto B49b8b0;
case 0x49b8b2:goto L49b8b2;
case 0x49b8b8:c.instructions+=5;goto B49b8b8;
case 0x49b8ba:c.instructions+=4;goto B49b8ba;
case 0x49b8bc:c.instructions+=3;goto B49b8bc;
case 0x49b8bf:c.instructions+=2;goto B49b8bf;
case 0x49b8c6:c.instructions+=1;goto B49b8c6;
case 0x49b8cb:goto L49b8cb;
case 0x49b8cd:c.instructions+=1;goto B49b8cd;
case 0x49b8d0:goto L49b8d0;
case 0x49b8e0:goto L49b8e0;
case 0x49b8e1:c.instructions+=5;goto B49b8e1;
case 0x49b8e3:c.instructions+=4;goto B49b8e3;
case 0x49b8e6:c.instructions+=3;goto B49b8e6;
case 0x49b8eb:c.instructions+=2;goto B49b8eb;
case 0x49b8ec:c.instructions+=1;goto B49b8ec;
case 0x49b8f1:goto L49b8f1;
case 0x49b8f6:c.instructions+=4;goto B49b8f6;
case 0x49b8f9:c.instructions+=3;goto B49b8f9;
case 0x49b8fc:c.instructions+=2;goto B49b8fc;
case 0x49b8fe:c.instructions+=1;goto B49b8fe;
case 0x49b900:goto L49b900;
case 0x49b905:c.instructions+=1;goto B49b905;
case 0x49b90a:goto L49b90a;
case 0x49b90b:c.instructions+=2;goto B49b90b;
case 0x49b90c:c.instructions+=1;goto B49b90c;
case 0x49b911:goto L49b911;
case 0x49b914:c.instructions+=2;goto B49b914;
case 0x49b915:c.instructions+=1;goto B49b915;
case 0x49b916:goto L49b916;
case 0x49b91b:c.instructions+=1;goto B49b91b;
case 0x49b920:goto L49b920;
case 0x49b921:c.instructions+=2;goto B49b921;
case 0x49b922:c.instructions+=1;goto B49b922;
case 0x49b927:goto L49b927;
case 0x49b92a:c.instructions+=2;goto B49b92a;
case 0x49b92b:c.instructions+=1;goto B49b92b;
case 0x49b930:goto L49b930;
case 0x49b938:c.instructions+=1;goto B49b938;
case 0x49b93a:goto L49b93a;
case 0x49b93e:c.instructions+=5;goto B49b93e;
case 0x49b940:c.instructions+=4;goto B49b940;
case 0x49b945:c.instructions+=3;goto B49b945;
case 0x49b94a:c.instructions+=2;goto B49b94a;
case 0x49b94b:c.instructions+=1;goto B49b94b;
case 0x49b950:goto L49b950;
case 0x49b953:goto L49b953;
case 0x49b960:goto L49b960;
case 0x49b963:c.instructions+=3;goto B49b963;
case 0x49b968:c.instructions+=2;goto B49b968;
case 0x49b969:c.instructions+=1;goto B49b969;
case 0x49b96e:goto L49b96e;
case 0x49b971:c.instructions+=1;goto B49b971;
case 0x49b980:goto L49b980;
case 0x49b984:c.instructions+=2;goto B49b984;
case 0x49b989:c.instructions+=1;goto B49b989;
case 0x49b98b:goto L49b98b;
case 0x49b990:c.instructions+=1;goto B49b990;
case 0x49b992:goto L49b992;
case 0x49b993:c.instructions+=5;goto B49b993;
case 0x49b997:c.instructions+=4;goto B49b997;
case 0x49b999:c.instructions+=3;goto B49b999;
case 0x49b99b:c.instructions+=2;goto B49b99b;
case 0x49b99c:c.instructions+=1;goto B49b99c;
case 0x49b9a1:goto L49b9a1;
case 0x49b9a6:c.instructions+=9;goto B49b9a6;
case 0x49b9a8:c.instructions+=8;goto B49b9a8;
case 0x49b9ad:c.instructions+=7;goto B49b9ad;
case 0x49b9b2:c.instructions+=6;goto B49b9b2;
case 0x49b9b7:c.instructions+=5;goto B49b9b7;
case 0x49b9bc:c.instructions+=4;goto B49b9bc;
case 0x49b9c1:c.instructions+=3;goto B49b9c1;
case 0x49b9c6:c.instructions+=2;goto B49b9c6;
case 0x49b9c7:c.instructions+=1;goto B49b9c7;
case 0x49b9cc:goto L49b9cc;
case 0x49b9cf:c.instructions+=1;goto B49b9cf;
case 0x49b9d0:goto L49b9d0;
case 0x49b9e0:goto L49b9e0;
case 0x49b9e3:c.instructions+=3;goto B49b9e3;
case 0x49b9e8:c.instructions+=2;goto B49b9e8;
case 0x49b9e9:c.instructions+=1;goto B49b9e9;
case 0x49b9ee:goto L49b9ee;
case 0x49b9f1:c.instructions+=1;goto B49b9f1;
case 0x49ba00:goto L49ba00;
case 0x49ba01:c.instructions+=7;goto B49ba01;
case 0x49ba02:c.instructions+=6;goto B49ba02;
case 0x49ba06:c.instructions+=5;goto B49ba06;
case 0x49ba08:c.instructions+=4;goto B49ba08;
case 0x49ba0b:c.instructions+=3;goto B49ba0b;
case 0x49ba0e:c.instructions+=2;goto B49ba0e;
case 0x49ba0f:c.instructions+=1;goto B49ba0f;
case 0x49ba12:goto L49ba12;
case 0x49ba14:c.instructions+=1;goto B49ba14;
case 0x49ba16:goto L49ba16;
case 0x49ba18:c.instructions+=3;goto B49ba18;
case 0x49ba19:c.instructions+=2;goto B49ba19;
case 0x49ba1b:c.instructions+=1;goto B49ba1b;
case 0x49ba1e:goto L49ba1e;
case 0x49ba20:c.instructions+=2;goto B49ba20;
case 0x49ba22:c.instructions+=1;goto B49ba22;
case 0x49ba25:goto L49ba25;
case 0x49ba2a:goto L49ba2a;
case 0x49ba2f:c.instructions+=4;goto B49ba2f;
case 0x49ba36:c.instructions+=3;goto B49ba36;
case 0x49ba38:c.instructions+=2;goto B49ba38;
case 0x49ba3a:c.instructions+=1;goto B49ba3a;
case 0x49ba3d:goto L49ba3d;
case 0x49ba3e:c.instructions+=2;goto B49ba3e;
case 0x49ba3f:c.instructions+=1;goto B49ba3f;
case 0x49ba50:goto L49ba50;
case 0x49ba53:c.instructions+=3;goto B49ba53;
case 0x49ba58:c.instructions+=2;goto B49ba58;
case 0x49ba59:c.instructions+=1;goto B49ba59;
case 0x49ba5e:goto L49ba5e;
case 0x49ba61:c.instructions+=1;goto B49ba61;
case 0x49ba70:goto L49ba70;
case 0x49ba71:c.instructions+=10;goto B49ba71;
case 0x49ba77:c.instructions+=9;goto B49ba77;
case 0x49ba7a:c.instructions+=8;goto B49ba7a;
case 0x49ba7e:c.instructions+=7;goto B49ba7e;
case 0x49ba84:c.instructions+=6;goto B49ba84;
case 0x49ba88:c.instructions+=5;goto B49ba88;
case 0x49ba8f:c.instructions+=4;goto B49ba8f;
case 0x49ba96:c.instructions+=3;goto B49ba96;
case 0x49ba99:c.instructions+=2;goto B49ba99;
case 0x49ba9a:c.instructions+=1;goto B49ba9a;
case 0x49ba9f:goto L49ba9f;
case 0x49baa0:c.instructions+=1;goto B49baa0;
case 0x49bab0:goto L49bab0;
case 0x49bab4:c.instructions+=4;goto B49bab4;
case 0x49bab9:c.instructions+=3;goto B49bab9;
case 0x49baba:c.instructions+=2;goto B49baba;
case 0x49babc:c.instructions+=1;goto B49babc;
case 0x49babe:goto L49babe;
case 0x49bac3:c.instructions+=1;goto B49bac3;
case 0x49bac5:goto L49bac5;
case 0x49baca:c.instructions+=1;goto B49baca;
case 0x49bacc:goto L49bacc;
case 0x49bace:c.instructions+=3;goto B49bace;
case 0x49bacf:c.instructions+=2;goto B49bacf;
case 0x49bad1:c.instructions+=1;goto B49bad1;
case 0x49bad4:goto L49bad4;
case 0x49bad9:c.instructions+=2;goto B49bad9;
case 0x49badb:c.instructions+=1;goto B49badb;
case 0x49badd:goto L49badd;
case 0x49bae4:goto L49bae4;
case 0x49bae6:c.instructions+=2;goto B49bae6;
case 0x49bae8:c.instructions+=1;goto B49bae8;
case 0x49baeb:goto L49baeb;
case 0x49baec:c.instructions+=1;goto B49baec;
case 0x49baf0:goto L49baf0;
case 0x49baf1:c.instructions+=5;goto B49baf1;
case 0x49baf3:c.instructions+=4;goto B49baf3;
case 0x49baf6:c.instructions+=3;goto B49baf6;
case 0x49bafb:c.instructions+=2;goto B49bafb;
case 0x49bafc:c.instructions+=1;goto B49bafc;
case 0x49bb01:goto L49bb01;
case 0x49bb07:c.instructions+=8;goto B49bb07;
case 0x49bb0a:c.instructions+=7;goto B49bb0a;
case 0x49bb0c:c.instructions+=6;goto B49bb0c;
case 0x49bb0e:c.instructions+=5;goto B49bb0e;
case 0x49bb14:c.instructions+=4;goto B49bb14;
case 0x49bb1a:c.instructions+=3;goto B49bb1a;
case 0x49bb1b:c.instructions+=2;goto B49bb1b;
case 0x49bb1c:c.instructions+=1;goto B49bb1c;
case 0x49bb21:goto L49bb21;
case 0x49bb24:c.instructions+=2;goto B49bb24;
case 0x49bb25:c.instructions+=1;goto B49bb25;
case 0x49bb30:goto L49bb30;
case 0x49bb31:c.instructions+=7;goto B49bb31;
case 0x49bb32:c.instructions+=6;goto B49bb32;
case 0x49bb36:c.instructions+=5;goto B49bb36;
case 0x49bb38:c.instructions+=4;goto B49bb38;
case 0x49bb3b:c.instructions+=3;goto B49bb3b;
case 0x49bb3e:c.instructions+=2;goto B49bb3e;
case 0x49bb3f:c.instructions+=1;goto B49bb3f;
case 0x49bb42:goto L49bb42;
case 0x49bb44:c.instructions+=1;goto B49bb44;
case 0x49bb46:goto L49bb46;
case 0x49bb48:c.instructions+=3;goto B49bb48;
case 0x49bb49:c.instructions+=2;goto B49bb49;
case 0x49bb4b:c.instructions+=1;goto B49bb4b;
case 0x49bb4e:goto L49bb4e;
case 0x49bb50:c.instructions+=2;goto B49bb50;
case 0x49bb52:c.instructions+=1;goto B49bb52;
case 0x49bb55:goto L49bb55;
case 0x49bb5a:goto L49bb5a;
case 0x49bb5f:c.instructions+=3;goto B49bb5f;
case 0x49bb61:c.instructions+=2;goto B49bb61;
case 0x49bb63:c.instructions+=1;goto B49bb63;
case 0x49bb66:goto L49bb66;
case 0x49bb67:c.instructions+=2;goto B49bb67;
case 0x49bb68:c.instructions+=1;goto B49bb68;
case 0x49bb70:goto L49bb70;
case 0x49bb73:c.instructions+=3;goto B49bb73;
case 0x49bb78:c.instructions+=2;goto B49bb78;
case 0x49bb79:c.instructions+=1;goto B49bb79;
case 0x49bb7e:goto L49bb7e;
case 0x49bb81:c.instructions+=1;goto B49bb81;
case 0x49bb90:goto L49bb90;
case 0x49bb91:c.instructions+=10;goto B49bb91;
case 0x49bb97:c.instructions+=9;goto B49bb97;
case 0x49bb9a:c.instructions+=8;goto B49bb9a;
case 0x49bb9e:c.instructions+=7;goto B49bb9e;
case 0x49bba4:c.instructions+=6;goto B49bba4;
case 0x49bba8:c.instructions+=5;goto B49bba8;
case 0x49bbaf:c.instructions+=4;goto B49bbaf;
case 0x49bbb6:c.instructions+=3;goto B49bbb6;
case 0x49bbb9:c.instructions+=2;goto B49bbb9;
case 0x49bbba:c.instructions+=1;goto B49bbba;
case 0x49bbbf:goto L49bbbf;
case 0x49bbc0:c.instructions+=1;goto B49bbc0;
case 0x49bbd0:goto L49bbd0;
case 0x49bbd4:c.instructions+=4;goto B49bbd4;
case 0x49bbd9:c.instructions+=3;goto B49bbd9;
case 0x49bbda:c.instructions+=2;goto B49bbda;
case 0x49bbdc:c.instructions+=1;goto B49bbdc;
case 0x49bbde:goto L49bbde;
case 0x49bbe3:c.instructions+=1;goto B49bbe3;
case 0x49bbe5:goto L49bbe5;
case 0x49bbea:c.instructions+=1;goto B49bbea;
case 0x49bbec:goto L49bbec;
case 0x49bbee:c.instructions+=3;goto B49bbee;
case 0x49bbef:c.instructions+=2;goto B49bbef;
case 0x49bbf1:c.instructions+=1;goto B49bbf1;
case 0x49bbf4:goto L49bbf4;
case 0x49bbf9:c.instructions+=2;goto B49bbf9;
case 0x49bbfb:c.instructions+=1;goto B49bbfb;
case 0x49bbfd:goto L49bbfd;
case 0x49bc04:goto L49bc04;
case 0x49bc06:c.instructions+=2;goto B49bc06;
case 0x49bc08:c.instructions+=1;goto B49bc08;
case 0x49bc0b:goto L49bc0b;
case 0x49bc0c:c.instructions+=1;goto B49bc0c;
case 0x49bc10:goto L49bc10;
case 0x49bc11:c.instructions+=5;goto B49bc11;
case 0x49bc13:c.instructions+=4;goto B49bc13;
case 0x49bc16:c.instructions+=3;goto B49bc16;
case 0x49bc1b:c.instructions+=2;goto B49bc1b;
case 0x49bc1c:c.instructions+=1;goto B49bc1c;
case 0x49bc21:goto L49bc21;
case 0x49bc27:c.instructions+=8;goto B49bc27;
case 0x49bc2a:c.instructions+=7;goto B49bc2a;
case 0x49bc2c:c.instructions+=6;goto B49bc2c;
case 0x49bc2e:c.instructions+=5;goto B49bc2e;
case 0x49bc34:c.instructions+=4;goto B49bc34;
case 0x49bc3a:c.instructions+=3;goto B49bc3a;
case 0x49bc3b:c.instructions+=2;goto B49bc3b;
case 0x49bc3c:c.instructions+=1;goto B49bc3c;
case 0x49bc41:goto L49bc41;
case 0x49bc44:c.instructions+=2;goto B49bc44;
case 0x49bc45:c.instructions+=1;goto B49bc45;
case 0x49bc50:goto L49bc50;
case 0x49bc54:c.instructions+=4;goto B49bc54;
case 0x49bc59:c.instructions+=3;goto B49bc59;
case 0x49bc5a:c.instructions+=2;goto B49bc5a;
case 0x49bc5c:c.instructions+=1;goto B49bc5c;
case 0x49bc5e:goto L49bc5e;
case 0x49bc63:c.instructions+=1;goto B49bc63;
case 0x49bc65:goto L49bc65;
case 0x49bc6a:c.instructions+=1;goto B49bc6a;
case 0x49bc6c:goto L49bc6c;
case 0x49bc6e:c.instructions+=3;goto B49bc6e;
case 0x49bc6f:c.instructions+=2;goto B49bc6f;
case 0x49bc71:c.instructions+=1;goto B49bc71;
case 0x49bc74:goto L49bc74;
case 0x49bc79:c.instructions+=2;goto B49bc79;
case 0x49bc7b:c.instructions+=1;goto B49bc7b;
case 0x49bc7d:goto L49bc7d;
case 0x49bc84:goto L49bc84;
case 0x49bc86:c.instructions+=2;goto B49bc86;
case 0x49bc88:c.instructions+=1;goto B49bc88;
case 0x49bc8b:goto L49bc8b;
case 0x49bc8c:c.instructions+=1;goto B49bc8c;
case 0x49bc90:goto L49bc90;
case 0x49bc91:c.instructions+=5;goto B49bc91;
case 0x49bc93:c.instructions+=4;goto B49bc93;
case 0x49bc96:c.instructions+=3;goto B49bc96;
case 0x49bc9b:c.instructions+=2;goto B49bc9b;
case 0x49bc9c:c.instructions+=1;goto B49bc9c;
case 0x49bca1:goto L49bca1;
case 0x49bca7:c.instructions+=8;goto B49bca7;
case 0x49bcaa:c.instructions+=7;goto B49bcaa;
case 0x49bcac:c.instructions+=6;goto B49bcac;
case 0x49bcae:c.instructions+=5;goto B49bcae;
case 0x49bcb4:c.instructions+=4;goto B49bcb4;
case 0x49bcba:c.instructions+=3;goto B49bcba;
case 0x49bcbb:c.instructions+=2;goto B49bcbb;
case 0x49bcbc:c.instructions+=1;goto B49bcbc;
case 0x49bcc1:goto L49bcc1;
case 0x49bcc4:c.instructions+=2;goto B49bcc4;
case 0x49bcc5:c.instructions+=1;goto B49bcc5;
case 0x49bcd0:goto L49bcd0;
case 0x49bcd4:c.instructions+=4;goto B49bcd4;
case 0x49bcd9:c.instructions+=3;goto B49bcd9;
case 0x49bcda:c.instructions+=2;goto B49bcda;
case 0x49bcdc:c.instructions+=1;goto B49bcdc;
case 0x49bcde:goto L49bcde;
case 0x49bce3:c.instructions+=1;goto B49bce3;
case 0x49bce5:goto L49bce5;
case 0x49bcea:c.instructions+=1;goto B49bcea;
case 0x49bcec:goto L49bcec;
case 0x49bcee:c.instructions+=3;goto B49bcee;
case 0x49bcef:c.instructions+=2;goto B49bcef;
case 0x49bcf1:c.instructions+=1;goto B49bcf1;
case 0x49bcf4:goto L49bcf4;
case 0x49bcf9:c.instructions+=2;goto B49bcf9;
case 0x49bcfb:c.instructions+=1;goto B49bcfb;
case 0x49bcfd:goto L49bcfd;
case 0x49bd04:goto L49bd04;
case 0x49bd06:c.instructions+=2;goto B49bd06;
case 0x49bd08:c.instructions+=1;goto B49bd08;
case 0x49bd0b:goto L49bd0b;
case 0x49bd0c:c.instructions+=1;goto B49bd0c;
case 0x49bd10:goto L49bd10;
case 0x49bd11:c.instructions+=5;goto B49bd11;
case 0x49bd13:c.instructions+=4;goto B49bd13;
case 0x49bd16:c.instructions+=3;goto B49bd16;
case 0x49bd1b:c.instructions+=2;goto B49bd1b;
case 0x49bd1c:c.instructions+=1;goto B49bd1c;
case 0x49bd21:goto L49bd21;
case 0x49bd27:c.instructions+=8;goto B49bd27;
case 0x49bd2a:c.instructions+=7;goto B49bd2a;
case 0x49bd2c:c.instructions+=6;goto B49bd2c;
case 0x49bd2e:c.instructions+=5;goto B49bd2e;
case 0x49bd34:c.instructions+=4;goto B49bd34;
case 0x49bd3a:c.instructions+=3;goto B49bd3a;
case 0x49bd3b:c.instructions+=2;goto B49bd3b;
case 0x49bd3c:c.instructions+=1;goto B49bd3c;
case 0x49bd41:goto L49bd41;
case 0x49bd44:c.instructions+=2;goto B49bd44;
case 0x49bd45:c.instructions+=1;goto B49bd45;
case 0x49bd50:goto L49bd50;
case 0x49bd51:c.instructions+=7;goto B49bd51;
case 0x49bd52:c.instructions+=6;goto B49bd52;
case 0x49bd56:c.instructions+=5;goto B49bd56;
case 0x49bd58:c.instructions+=4;goto B49bd58;
case 0x49bd5b:c.instructions+=3;goto B49bd5b;
case 0x49bd5e:c.instructions+=2;goto B49bd5e;
case 0x49bd5f:c.instructions+=1;goto B49bd5f;
case 0x49bd62:goto L49bd62;
case 0x49bd64:c.instructions+=1;goto B49bd64;
case 0x49bd66:goto L49bd66;
case 0x49bd68:c.instructions+=3;goto B49bd68;
case 0x49bd69:c.instructions+=2;goto B49bd69;
case 0x49bd6b:c.instructions+=1;goto B49bd6b;
case 0x49bd6e:goto L49bd6e;
case 0x49bd70:c.instructions+=2;goto B49bd70;
case 0x49bd72:c.instructions+=1;goto B49bd72;
case 0x49bd75:goto L49bd75;
case 0x49bd7a:goto L49bd7a;
case 0x49bd7f:c.instructions+=3;goto B49bd7f;
case 0x49bd81:c.instructions+=2;goto B49bd81;
case 0x49bd83:c.instructions+=1;goto B49bd83;
case 0x49bd86:goto L49bd86;
case 0x49bd87:c.instructions+=2;goto B49bd87;
case 0x49bd88:c.instructions+=1;goto B49bd88;
case 0x49bd90:goto L49bd90;
case 0x49bd93:c.instructions+=3;goto B49bd93;
case 0x49bd98:c.instructions+=2;goto B49bd98;
case 0x49bd99:c.instructions+=1;goto B49bd99;
case 0x49bd9e:goto L49bd9e;
case 0x49bda1:c.instructions+=1;goto B49bda1;
case 0x49bdb0:goto L49bdb0;
case 0x49bdb1:c.instructions+=10;goto B49bdb1;
case 0x49bdb7:c.instructions+=9;goto B49bdb7;
case 0x49bdba:c.instructions+=8;goto B49bdba;
case 0x49bdbe:c.instructions+=7;goto B49bdbe;
case 0x49bdc4:c.instructions+=6;goto B49bdc4;
case 0x49bdc8:c.instructions+=5;goto B49bdc8;
case 0x49bdcf:c.instructions+=4;goto B49bdcf;
case 0x49bdd6:c.instructions+=3;goto B49bdd6;
case 0x49bdd9:c.instructions+=2;goto B49bdd9;
case 0x49bdda:c.instructions+=1;goto B49bdda;
case 0x49bddf:goto L49bddf;
case 0x49bde0:c.instructions+=1;goto B49bde0;
case 0x49bdf0:goto L49bdf0;
case 0x49bdf1:c.instructions+=7;goto B49bdf1;
case 0x49bdf2:c.instructions+=6;goto B49bdf2;
case 0x49bdf6:c.instructions+=5;goto B49bdf6;
case 0x49bdf8:c.instructions+=4;goto B49bdf8;
case 0x49bdfb:c.instructions+=3;goto B49bdfb;
case 0x49bdfe:c.instructions+=2;goto B49bdfe;
case 0x49bdff:c.instructions+=1;goto B49bdff;
case 0x49be02:goto L49be02;
case 0x49be04:c.instructions+=1;goto B49be04;
case 0x49be06:goto L49be06;
case 0x49be08:c.instructions+=3;goto B49be08;
case 0x49be09:c.instructions+=2;goto B49be09;
case 0x49be0b:c.instructions+=1;goto B49be0b;
case 0x49be0e:goto L49be0e;
case 0x49be10:c.instructions+=2;goto B49be10;
case 0x49be12:c.instructions+=1;goto B49be12;
case 0x49be15:goto L49be15;
case 0x49be1a:goto L49be1a;
case 0x49be1f:c.instructions+=4;goto B49be1f;
case 0x49be26:c.instructions+=3;goto B49be26;
case 0x49be28:c.instructions+=2;goto B49be28;
case 0x49be2a:c.instructions+=1;goto B49be2a;
case 0x49be2d:goto L49be2d;
case 0x49be2e:c.instructions+=2;goto B49be2e;
case 0x49be2f:c.instructions+=1;goto B49be2f;
case 0x49be40:goto L49be40;
case 0x49be43:c.instructions+=3;goto B49be43;
case 0x49be48:c.instructions+=2;goto B49be48;
case 0x49be49:c.instructions+=1;goto B49be49;
case 0x49be4e:goto L49be4e;
case 0x49be51:c.instructions+=1;goto B49be51;
case 0x49be60:goto L49be60;
case 0x49be61:c.instructions+=10;goto B49be61;
case 0x49be67:c.instructions+=9;goto B49be67;
case 0x49be6a:c.instructions+=8;goto B49be6a;
case 0x49be6e:c.instructions+=7;goto B49be6e;
case 0x49be74:c.instructions+=6;goto B49be74;
case 0x49be78:c.instructions+=5;goto B49be78;
case 0x49be7f:c.instructions+=4;goto B49be7f;
case 0x49be86:c.instructions+=3;goto B49be86;
case 0x49be89:c.instructions+=2;goto B49be89;
case 0x49be8a:c.instructions+=1;goto B49be8a;
case 0x49be8f:goto L49be8f;
case 0x49be90:c.instructions+=1;goto B49be90;
case 0x49bea0:goto L49bea0;
case 0x49bea4:c.instructions+=4;goto B49bea4;
case 0x49bea9:c.instructions+=3;goto B49bea9;
case 0x49beaa:c.instructions+=2;goto B49beaa;
case 0x49beac:c.instructions+=1;goto B49beac;
case 0x49beae:goto L49beae;
case 0x49beb3:c.instructions+=1;goto B49beb3;
case 0x49beb5:goto L49beb5;
case 0x49beba:c.instructions+=1;goto B49beba;
case 0x49bebc:goto L49bebc;
case 0x49bebe:c.instructions+=3;goto B49bebe;
case 0x49bebf:c.instructions+=2;goto B49bebf;
case 0x49bec1:c.instructions+=1;goto B49bec1;
case 0x49bec4:goto L49bec4;
case 0x49bec9:c.instructions+=2;goto B49bec9;
case 0x49becb:c.instructions+=1;goto B49becb;
case 0x49becd:goto L49becd;
case 0x49bed3:c.instructions+=4;goto B49bed3;
case 0x49bed8:c.instructions+=3;goto B49bed8;
case 0x49beda:c.instructions+=2;goto B49beda;
case 0x49bee0:c.instructions+=1;goto B49bee0;
case 0x49bee5:goto L49bee5;
case 0x49bee7:c.instructions+=2;goto B49bee7;
case 0x49bee9:c.instructions+=1;goto B49bee9;
case 0x49beec:goto L49beec;
case 0x49beed:c.instructions+=1;goto B49beed;
case 0x49bef0:goto L49bef0;
case 0x49bef1:c.instructions+=5;goto B49bef1;
case 0x49bef3:c.instructions+=4;goto B49bef3;
case 0x49bef6:c.instructions+=3;goto B49bef6;
case 0x49befb:c.instructions+=2;goto B49befb;
case 0x49befc:c.instructions+=1;goto B49befc;
case 0x49bf01:goto L49bf01;
case 0x49bf07:c.instructions+=8;goto B49bf07;
case 0x49bf0a:c.instructions+=7;goto B49bf0a;
case 0x49bf0c:c.instructions+=6;goto B49bf0c;
case 0x49bf0e:c.instructions+=5;goto B49bf0e;
case 0x49bf14:c.instructions+=4;goto B49bf14;
case 0x49bf1a:c.instructions+=3;goto B49bf1a;
case 0x49bf1b:c.instructions+=2;goto B49bf1b;
case 0x49bf1c:c.instructions+=1;goto B49bf1c;
case 0x49bf21:goto L49bf21;
case 0x49bf24:c.instructions+=2;goto B49bf24;
case 0x49bf25:c.instructions+=1;goto B49bf25;
case 0x49bf30:goto L49bf30;
case 0x49bf34:c.instructions+=4;goto B49bf34;
case 0x49bf39:c.instructions+=3;goto B49bf39;
case 0x49bf3a:c.instructions+=2;goto B49bf3a;
case 0x49bf3c:c.instructions+=1;goto B49bf3c;
case 0x49bf3e:goto L49bf3e;
case 0x49bf43:c.instructions+=1;goto B49bf43;
case 0x49bf45:goto L49bf45;
case 0x49bf4a:c.instructions+=1;goto B49bf4a;
case 0x49bf4c:goto L49bf4c;
case 0x49bf4e:c.instructions+=3;goto B49bf4e;
case 0x49bf4f:c.instructions+=2;goto B49bf4f;
case 0x49bf51:c.instructions+=1;goto B49bf51;
case 0x49bf54:goto L49bf54;
case 0x49bf59:c.instructions+=2;goto B49bf59;
case 0x49bf5b:c.instructions+=1;goto B49bf5b;
case 0x49bf5d:goto L49bf5d;
case 0x49bf63:c.instructions+=4;goto B49bf63;
case 0x49bf68:c.instructions+=3;goto B49bf68;
case 0x49bf6a:c.instructions+=2;goto B49bf6a;
case 0x49bf70:c.instructions+=1;goto B49bf70;
case 0x49bf75:goto L49bf75;
case 0x49bf77:c.instructions+=2;goto B49bf77;
case 0x49bf79:c.instructions+=1;goto B49bf79;
case 0x49bf7c:goto L49bf7c;
case 0x49bf7d:c.instructions+=1;goto B49bf7d;
case 0x49bf80:goto L49bf80;
case 0x49bf81:c.instructions+=5;goto B49bf81;
case 0x49bf83:c.instructions+=4;goto B49bf83;
case 0x49bf86:c.instructions+=3;goto B49bf86;
case 0x49bf8b:c.instructions+=2;goto B49bf8b;
case 0x49bf8c:c.instructions+=1;goto B49bf8c;
case 0x49bf91:goto L49bf91;
case 0x49bf97:c.instructions+=8;goto B49bf97;
case 0x49bf9a:c.instructions+=7;goto B49bf9a;
case 0x49bf9c:c.instructions+=6;goto B49bf9c;
case 0x49bf9e:c.instructions+=5;goto B49bf9e;
case 0x49bfa4:c.instructions+=4;goto B49bfa4;
case 0x49bfaa:c.instructions+=3;goto B49bfaa;
case 0x49bfab:c.instructions+=2;goto B49bfab;
case 0x49bfac:c.instructions+=1;goto B49bfac;
case 0x49bfb1:goto L49bfb1;
case 0x49bfb4:c.instructions+=2;goto B49bfb4;
case 0x49bfb5:c.instructions+=1;goto B49bfb5;
case 0x49bfc0:goto L49bfc0;
case 0x49bfc4:c.instructions+=4;goto B49bfc4;
case 0x49bfc9:c.instructions+=3;goto B49bfc9;
case 0x49bfca:c.instructions+=2;goto B49bfca;
case 0x49bfcc:c.instructions+=1;goto B49bfcc;
case 0x49bfce:goto L49bfce;
case 0x49bfd3:c.instructions+=1;goto B49bfd3;
case 0x49bfd5:goto L49bfd5;
case 0x49bfda:c.instructions+=1;goto B49bfda;
case 0x49bfdc:goto L49bfdc;
case 0x49bfde:c.instructions+=3;goto B49bfde;
case 0x49bfdf:c.instructions+=2;goto B49bfdf;
case 0x49bfe1:c.instructions+=1;goto B49bfe1;
case 0x49bfe4:goto L49bfe4;
case 0x49bfe9:c.instructions+=2;goto B49bfe9;
case 0x49bfeb:c.instructions+=1;goto B49bfeb;
case 0x49bfed:goto L49bfed;
case 0x49bff4:goto L49bff4;
case 0x49bff6:c.instructions+=2;goto B49bff6;
case 0x49bff8:c.instructions+=1;goto B49bff8;
case 0x49bffb:goto L49bffb;
case 0x49bffc:c.instructions+=1;goto B49bffc;
default:missing_instruction(c.pc);}
B49b003:L49b003:{c.instructions+=1;NFSU2_TR(0x49b003);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49b00c;}}
}
B49b005:L49b005:{c.instructions+=2;NFSU2_TR(0x49b005);
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
B49b006:{NFSU2_TR(0x49b006);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L49b01b;}}
}
B49b008:L49b008:{c.instructions+=2;NFSU2_TR(0x49b008);
__builtin_memmove((R+0),(R+4),4);
}
B49b00a:{NFSU2_TR(0x49b00a);
{goto L49b01b;}
}
B49b00c:L49b00c:{c.instructions+=2;NFSU2_TR(0x49b00c);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
w1(R+512,u8((r4(U+6))<(u32(0xb5971bf1ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xb5971bf1ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xb5971bf1ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B49b012:{NFSU2_TR(0x49b012);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49b01b;}}
}
B49b014:L49b014:{c.instructions+=3;NFSU2_TR(0x49b014);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B49b015:{NFSU2_TR(0x49b015);
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
B49b017:{NFSU2_TR(0x49b017);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L49b01b;}}
}
B49b019:L49b019:{c.instructions+=1;NFSU2_TR(0x49b019);
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
B49b01b:L49b01b:{c.instructions+=5;NFSU2_TR(0x49b01b);
__builtin_memmove(gp(0x83aa1b),(R+0),1);
}
B49b020:{NFSU2_TR(0x49b020);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B49b022:{NFSU2_TR(0x49b022);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49b023:{NFSU2_TR(0x49b023);
__builtin_memmove((R+4),(R+24),4);
}
B49b025:{NFSU2_TR(0x49b025);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49b028ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B49b028:L49b028:{c.instructions+=3;NFSU2_TR(0x49b028);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B49b02a:{NFSU2_TR(0x49b02a);
__builtin_memmove((R+4),(R+24),4);
}
B49b02c:{NFSU2_TR(0x49b02c);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49b02full));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B49b02f:L49b02f:{c.instructions+=2;NFSU2_TR(0x49b02f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49b030:{NFSU2_TR(0x49b030);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49b040:L49b040:{c.instructions+=6;NFSU2_TR(0x49b040);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49b041:{NFSU2_TR(0x49b041);
__builtin_memmove((R+24),(R+4),4);
}
B49b043:{NFSU2_TR(0x49b043);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49b046:{NFSU2_TR(0x49b046);
u8 U[4];
w4(U+0,u32(0x9fa5ec9eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49b04b:{NFSU2_TR(0x49b04b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49b04c:{NFSU2_TR(0x49b04c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49b051ull));
TAIL_STATIC(0x50c900u,50c);
}
B49b051:L49b051:{c.instructions+=5;NFSU2_TR(0x49b051);
w4(R+0,u32(m1(0x83aa1b)));
}
B49b058:{NFSU2_TR(0x49b058);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B49b05a:{NFSU2_TR(0x49b05a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B49b05d:{NFSU2_TR(0x49b05d);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B49b05f:{NFSU2_TR(0x49b05f);
if(r1(R+518)){{goto L49b08f;}}
}
B49b061:L49b061:{c.instructions+=2;NFSU2_TR(0x49b061);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B49b062:{NFSU2_TR(0x49b062);
if(r1(R+518)){{goto L49b07b;}}
}
B49b064:L49b064:{c.instructions+=2;NFSU2_TR(0x49b064);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B49b065:{NFSU2_TR(0x49b065);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49b094;}}
}
B49b067:L49b067:{c.instructions+=5;NFSU2_TR(0x49b067);
w4(R+4,u32(0xf4b00e99ull));
}
B49b06c:{NFSU2_TR(0x49b06c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49b06d:{NFSU2_TR(0x49b06d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49b070:{NFSU2_TR(0x49b070);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49b071:{NFSU2_TR(0x49b071);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49b076ull));
TAIL_STATIC(0x50c900u,50c);
}
B49b076:L49b076:{c.instructions+=3;NFSU2_TR(0x49b076);
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
B49b079:{NFSU2_TR(0x49b079);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49b07a:{NFSU2_TR(0x49b07a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49b07b:L49b07b:{c.instructions+=5;NFSU2_TR(0x49b07b);
w4(R+4,u32(0xf75595f2ull));
}
B49b080:{NFSU2_TR(0x49b080);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49b081:{NFSU2_TR(0x49b081);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49b084:{NFSU2_TR(0x49b084);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49b085:{NFSU2_TR(0x49b085);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49b08aull));
TAIL_STATIC(0x50c900u,50c);
}
B49b08a:L49b08a:{c.instructions+=3;NFSU2_TR(0x49b08a);
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
B49b08d:{NFSU2_TR(0x49b08d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49b08e:{NFSU2_TR(0x49b08e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49b08f:L49b08f:{c.instructions+=1;NFSU2_TR(0x49b08f);
w4(R+4,u32(0xccfaull));
}
B49b094:L49b094:{c.instructions+=4;NFSU2_TR(0x49b094);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49b095:{NFSU2_TR(0x49b095);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49b098:{NFSU2_TR(0x49b098);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49b099:{NFSU2_TR(0x49b099);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49b09eull));
TAIL_STATIC(0x50c900u,50c);
}
B49b09e:L49b09e:{c.instructions+=3;NFSU2_TR(0x49b09e);
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
B49b0a1:{NFSU2_TR(0x49b0a1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49b0a2:{NFSU2_TR(0x49b0a2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49b0b0:L49b0b0:{c.instructions+=6;NFSU2_TR(0x49b0b0);
w4(R+0,u32(m1(0x83aa1c)));
}
B49b0b7:{NFSU2_TR(0x49b0b7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49b0b8:{NFSU2_TR(0x49b0b8);
__builtin_memmove((R+24),(R+4),4);
}
B49b0ba:{NFSU2_TR(0x49b0ba);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49b0be:{NFSU2_TR(0x49b0be);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x9120409eull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x9120409eull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B49b0c4:{NFSU2_TR(0x49b0c4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49b0d0;}}
}
B49b0c6:L49b0c6:{c.instructions+=2;NFSU2_TR(0x49b0c6);
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
B49b0c7:{NFSU2_TR(0x49b0c7);
u8 U[1];
w1(U+0,u8(!(r1(R+519))));
if(r1(U+0)){{goto L49b0e0;}}
}
B49b0c9:L49b0c9:{c.instructions+=2;NFSU2_TR(0x49b0c9);
w4(R+0,u32(0x2ull));
}
B49b0ce:{NFSU2_TR(0x49b0ce);
{goto L49b0e0;}
}
B49b0d0:L49b0d0:{c.instructions+=2;NFSU2_TR(0x49b0d0);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0xb5971bf1ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xb5971bf1ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xb5971bf1ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B49b0d6:{NFSU2_TR(0x49b0d6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49b0e0;}}
}
B49b0d8:L49b0d8:{c.instructions+=3;NFSU2_TR(0x49b0d8);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B49b0d9:{NFSU2_TR(0x49b0d9);
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
B49b0dc:{NFSU2_TR(0x49b0dc);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L49b0e0;}}
}
B49b0de:L49b0de:{c.instructions+=1;NFSU2_TR(0x49b0de);
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
B49b0e0:L49b0e0:{c.instructions+=5;NFSU2_TR(0x49b0e0);
__builtin_memmove(gp(0x83aa1c),(R+0),1);
}
B49b0e5:{NFSU2_TR(0x49b0e5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B49b0e7:{NFSU2_TR(0x49b0e7);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49b0e8:{NFSU2_TR(0x49b0e8);
__builtin_memmove((R+4),(R+24),4);
}
B49b0ea:{NFSU2_TR(0x49b0ea);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49b0edull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B49b0ed:L49b0ed:{c.instructions+=3;NFSU2_TR(0x49b0ed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B49b0ef:{NFSU2_TR(0x49b0ef);
__builtin_memmove((R+4),(R+24),4);
}
B49b0f1:{NFSU2_TR(0x49b0f1);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49b0f4ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B49b0f4:L49b0f4:{c.instructions+=2;NFSU2_TR(0x49b0f4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49b0f5:{NFSU2_TR(0x49b0f5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49b100:L49b100:{c.instructions+=6;NFSU2_TR(0x49b100);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49b101:{NFSU2_TR(0x49b101);
__builtin_memmove((R+24),(R+4),4);
}
B49b103:{NFSU2_TR(0x49b103);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49b106:{NFSU2_TR(0x49b106);
u8 U[4];
w4(U+0,u32(0xc6269082ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49b10b:{NFSU2_TR(0x49b10b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49b10c:{NFSU2_TR(0x49b10c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49b111ull));
TAIL_STATIC(0x50c900u,50c);
}
B49b111:L49b111:{c.instructions+=5;NFSU2_TR(0x49b111);
w4(R+0,u32(m1(0x83aa1c)));
}
B49b118:{NFSU2_TR(0x49b118);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B49b11a:{NFSU2_TR(0x49b11a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B49b11d:{NFSU2_TR(0x49b11d);
w4(R+0,u32(u32(r4(R+0))-u32(r4(R+4))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B49b11f:{NFSU2_TR(0x49b11f);
if(r1(R+518)){{goto L49b14f;}}
}
B49b121:L49b121:{c.instructions+=2;NFSU2_TR(0x49b121);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B49b122:{NFSU2_TR(0x49b122);
if(r1(R+518)){{goto L49b13b;}}
}
B49b124:L49b124:{c.instructions+=2;NFSU2_TR(0x49b124);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B49b125:{NFSU2_TR(0x49b125);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49b154;}}
}
B49b127:L49b127:{c.instructions+=5;NFSU2_TR(0x49b127);
w4(R+4,u32(0xf4b00e99ull));
}
B49b12c:{NFSU2_TR(0x49b12c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49b12d:{NFSU2_TR(0x49b12d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49b130:{NFSU2_TR(0x49b130);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49b131:{NFSU2_TR(0x49b131);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49b136ull));
TAIL_STATIC(0x50c900u,50c);
}
B49b136:L49b136:{c.instructions+=3;NFSU2_TR(0x49b136);
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
B49b139:{NFSU2_TR(0x49b139);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49b13a:{NFSU2_TR(0x49b13a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49b13b:L49b13b:{c.instructions+=5;NFSU2_TR(0x49b13b);
w4(R+4,u32(0xf75595f2ull));
}
B49b140:{NFSU2_TR(0x49b140);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49b141:{NFSU2_TR(0x49b141);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49b144:{NFSU2_TR(0x49b144);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49b145:{NFSU2_TR(0x49b145);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49b14aull));
TAIL_STATIC(0x50c900u,50c);
}
B49b14a:L49b14a:{c.instructions+=3;NFSU2_TR(0x49b14a);
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
B49b14d:{NFSU2_TR(0x49b14d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49b14e:{NFSU2_TR(0x49b14e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49b14f:L49b14f:{c.instructions+=1;NFSU2_TR(0x49b14f);
w4(R+4,u32(0xccfaull));
}
B49b154:L49b154:{c.instructions+=4;NFSU2_TR(0x49b154);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49b155:{NFSU2_TR(0x49b155);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49b158:{NFSU2_TR(0x49b158);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49b159:{NFSU2_TR(0x49b159);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49b15eull));
TAIL_STATIC(0x50c900u,50c);
}
B49b15e:L49b15e:{c.instructions+=3;NFSU2_TR(0x49b15e);
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
B49b161:{NFSU2_TR(0x49b161);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49b162:{NFSU2_TR(0x49b162);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49b170:L49b170:{c.instructions+=7;NFSU2_TR(0x49b170);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49b171:{NFSU2_TR(0x49b171);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49b172:{NFSU2_TR(0x49b172);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49b173:{NFSU2_TR(0x49b173);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B49b177:{NFSU2_TR(0x49b177);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xb5971bf1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B49b17d:{NFSU2_TR(0x49b17d);
__builtin_memmove((R+24),(R+4),4);
}
B49b17f:{NFSU2_TR(0x49b17f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49b1b0;}}
}
B49b181:L49b181:{c.instructions+=4;NFSU2_TR(0x49b181);
__builtin_memmove((R+0),gp(0x844ad9),1);
}
B49b186:{NFSU2_TR(0x49b186);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
}
B49b188:{NFSU2_TR(0x49b188);
u8 U[5];
__builtin_memmove((U+3),(R+12),1);
w1(R+512,u8((r1(R+0))<(r1(U+3))));
w1(R+523,sborrow<u8>(r1(R+0),r1(U+3)));
w1(U+4,u8(u32(r1(R+0))-u32(r1(U+3))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B49b18a:{NFSU2_TR(0x49b18a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49b1e1;}}
}
B49b18c:L49b18c:{c.instructions+=2;NFSU2_TR(0x49b18c);
u8 U[5];
__builtin_memmove((U+3),gp(0x844ad8),1);
w1(R+512,u8((r1(U+3))<(r1(R+12))));
w1(R+523,sborrow<u8>(r1(U+3),r1(R+12)));
w1(U+4,u8(u32(r1(U+3))-u32(r1(R+12))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B49b192:{NFSU2_TR(0x49b192);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49b1d9;}}
}
B49b194:L49b194:{c.instructions+=2;NFSU2_TR(0x49b194);
w4(R+4,u32(0x83a9e0ull));
}
B49b199:{NFSU2_TR(0x49b199);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49b19eull));
TAIL_STATIC(0x502fe0u,502);
}
B49b19e:L49b19e:{c.instructions+=2;NFSU2_TR(0x49b19e);
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
B49b1a0:{NFSU2_TR(0x49b1a0);
if(r1(R+518)){{goto L49b1e1;}}
}
B49b1a2:L49b1a2:{c.instructions+=4;NFSU2_TR(0x49b1a2);
w1(R+0,u8(0x1ull));
}
B49b1a4:{NFSU2_TR(0x49b1a4);
__builtin_memmove(gp(0x844ad8),(R+0),1);
}
B49b1a9:{NFSU2_TR(0x49b1a9);
__builtin_memmove(gp(0x844ad9),(R+0),1);
}
B49b1ae:{NFSU2_TR(0x49b1ae);
{goto L49b1ee;}
}
B49b1b0:L49b1b0:{c.instructions+=2;NFSU2_TR(0x49b1b0);
u8 U[14];
__builtin_memmove((U+6),(R+28),4);
w1(R+512,u8((r4(U+6))<(u32(0x9120409eull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x9120409eull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x9120409eull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B49b1b6:{NFSU2_TR(0x49b1b6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49b1ee;}}
}
B49b1b8:L49b1b8:{c.instructions+=4;NFSU2_TR(0x49b1b8);
__builtin_memmove((R+0),gp(0x844ad9),1);
}
B49b1bd:{NFSU2_TR(0x49b1bd);
w1(R+12,u8(u32(r1(R+12))^u32(r1(R+12))));
}
B49b1bf:{NFSU2_TR(0x49b1bf);
u8 U[5];
__builtin_memmove((U+3),(R+12),1);
w1(R+512,u8((r1(R+0))<(r1(U+3))));
w1(R+523,sborrow<u8>(r1(R+0),r1(U+3)));
w1(U+4,u8(u32(r1(R+0))-u32(r1(U+3))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B49b1c1:{NFSU2_TR(0x49b1c1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49b1d9;}}
}
B49b1c3:L49b1c3:{c.instructions+=2;NFSU2_TR(0x49b1c3);
u8 U[5];
__builtin_memmove((U+3),gp(0x844ad8),1);
w1(R+512,u8((r1(U+3))<(r1(R+12))));
w1(R+523,sborrow<u8>(r1(U+3),r1(R+12)));
w1(U+4,u8(u32(r1(U+3))-u32(r1(R+12))));
w1(R+519,u8(s8(r1(U+4))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+4))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+4))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B49b1c9:{NFSU2_TR(0x49b1c9);
if(r1(R+518)){{goto L49b1e1;}}
}
B49b1cb:L49b1cb:{c.instructions+=2;NFSU2_TR(0x49b1cb);
w4(R+4,u32(0x83a9e0ull));
}
B49b1d0:{NFSU2_TR(0x49b1d0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49b1d5ull));
TAIL_STATIC(0x502fe0u,502);
}
B49b1d5:L49b1d5:{c.instructions+=2;NFSU2_TR(0x49b1d5);
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
B49b1d7:{NFSU2_TR(0x49b1d7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x49b1a2u);}goto L49b1a2;}}
}
B49b1d9:L49b1d9:{c.instructions+=2;NFSU2_TR(0x49b1d9);
__builtin_memmove(gp(0x844ad8),(R+12),1);
}
B49b1df:{NFSU2_TR(0x49b1df);
{goto L49b1e8;}
}
B49b1e1:L49b1e1:{c.instructions+=1;NFSU2_TR(0x49b1e1);
s1(0x844ad8,u8(0x1ull));
}
B49b1e8:L49b1e8:{c.instructions+=1;NFSU2_TR(0x49b1e8);
__builtin_memmove(gp(0x844ad9),(R+12),1);
}
B49b1ee:L49b1ee:{c.instructions+=4;NFSU2_TR(0x49b1ee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B49b1f0:{NFSU2_TR(0x49b1f0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49b1f1:{NFSU2_TR(0x49b1f1);
__builtin_memmove((R+4),(R+24),4);
}
B49b1f3:{NFSU2_TR(0x49b1f3);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49b1f6ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B49b1f6:L49b1f6:{c.instructions+=3;NFSU2_TR(0x49b1f6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B49b1f8:{NFSU2_TR(0x49b1f8);
__builtin_memmove((R+4),(R+24),4);
}
B49b1fa:{NFSU2_TR(0x49b1fa);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49b1fdull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B49b1fd:L49b1fd:{c.instructions+=4;NFSU2_TR(0x49b1fd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B49b1fe:{NFSU2_TR(0x49b1fe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49b1ff:{NFSU2_TR(0x49b1ff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B49b200:{NFSU2_TR(0x49b200);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49b210:L49b210:{c.instructions+=6;NFSU2_TR(0x49b210);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49b211:{NFSU2_TR(0x49b211);
__builtin_memmove((R+24),(R+4),4);
}
B49b213:{NFSU2_TR(0x49b213);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49b216:{NFSU2_TR(0x49b216);
u8 U[4];
w4(U+0,u32(0x996463e6ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49b21b:{NFSU2_TR(0x49b21b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49b21c:{NFSU2_TR(0x49b21c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49b221ull));
TAIL_STATIC(0x50c900u,50c);
}
B49b221:L49b221:{c.instructions+=4;NFSU2_TR(0x49b221);
__builtin_memmove((R+0),gp(0x844ad9),1);
}
B49b226:{NFSU2_TR(0x49b226);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B49b229:{NFSU2_TR(0x49b229);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B49b22b:{NFSU2_TR(0x49b22b);
if(r1(R+518)){{goto L49b241;}}
}
B49b22d:L49b22d:{c.instructions+=5;NFSU2_TR(0x49b22d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49b230:{NFSU2_TR(0x49b230);
w4(R+0,u32(0x1b7abf8eull));
}
B49b235:{NFSU2_TR(0x49b235);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49b236:{NFSU2_TR(0x49b236);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49b237:{NFSU2_TR(0x49b237);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49b23cull));
TAIL_STATIC(0x50c900u,50c);
}
B49b23c:L49b23c:{c.instructions+=3;NFSU2_TR(0x49b23c);
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
B49b23f:{NFSU2_TR(0x49b23f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49b240:{NFSU2_TR(0x49b240);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49b241:L49b241:{c.instructions+=8;NFSU2_TR(0x49b241);
__builtin_memmove((R+0),gp(0x844ad8),1);
}
B49b246:{NFSU2_TR(0x49b246);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49b249:{NFSU2_TR(0x49b249);
w1(R+512,u8((r1(R+0))!=(u8(0x0ull))));
w1(R+0,u8(0-u32(r1(R+0))));
}
B49b24b:{NFSU2_TR(0x49b24b);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(R+0))));
w4(R+0,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B49b24d:{NFSU2_TR(0x49b24d);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1b7abf90ull))));
}
B49b252:{NFSU2_TR(0x49b252);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49b253:{NFSU2_TR(0x49b253);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49b254:{NFSU2_TR(0x49b254);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49b259ull));
TAIL_STATIC(0x50c900u,50c);
}
B49b259:L49b259:{c.instructions+=3;NFSU2_TR(0x49b259);
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
B49b25c:{NFSU2_TR(0x49b25c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49b25d:{NFSU2_TR(0x49b25d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49b260:L49b260:{c.instructions+=5;NFSU2_TR(0x49b260);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49b261:{NFSU2_TR(0x49b261);
__builtin_memmove((R+24),(R+4),4);
}
B49b263:{NFSU2_TR(0x49b263);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49b267:{NFSU2_TR(0x49b267);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x9120409eull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B49b26d:{NFSU2_TR(0x49b26d);
if(r1(R+518)){{goto L49b277;}}
}
B49b26f:L49b26f:{c.instructions+=2;NFSU2_TR(0x49b26f);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0xb5971bf1ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xb5971bf1ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xb5971bf1ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B49b275:{NFSU2_TR(0x49b275);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49b290;}}
}
B49b277:L49b277:{c.instructions+=6;NFSU2_TR(0x49b277);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49b27a:{NFSU2_TR(0x49b27a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B49b27d:{NFSU2_TR(0x49b27d);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x83aa68ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((R+8),(U+8),1);
}
B49b284:{NFSU2_TR(0x49b284);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w1(U+3,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+519,u8(s8(r1(U+3))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+3))==(u8(0x0ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B49b286:{NFSU2_TR(0x49b286);
__builtin_memmove((R+8),(R+518),1);
}
B49b289:{NFSU2_TR(0x49b289);
u8 U[9];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x83aa68ull))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),1);
s1(u32(r4(U+4)),r1(U+8));
}
B49b290:L49b290:{c.instructions+=4;NFSU2_TR(0x49b290);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B49b292:{NFSU2_TR(0x49b292);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49b293:{NFSU2_TR(0x49b293);
__builtin_memmove((R+4),(R+24),4);
}
B49b295:{NFSU2_TR(0x49b295);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49b298ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B49b298:L49b298:{c.instructions+=3;NFSU2_TR(0x49b298);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B49b29a:{NFSU2_TR(0x49b29a);
__builtin_memmove((R+4),(R+24),4);
}
B49b29c:{NFSU2_TR(0x49b29c);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49b29full));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B49b29f:L49b29f:{c.instructions+=2;NFSU2_TR(0x49b29f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49b2a0:{NFSU2_TR(0x49b2a0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49b2b0:L49b2b0:{c.instructions+=6;NFSU2_TR(0x49b2b0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49b2b1:{NFSU2_TR(0x49b2b1);
__builtin_memmove((R+24),(R+4),4);
}
B49b2b3:{NFSU2_TR(0x49b2b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49b2b6:{NFSU2_TR(0x49b2b6);
u8 U[4];
w4(U+0,u32(0x358cdcfdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49b2bb:{NFSU2_TR(0x49b2bb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49b2bc:{NFSU2_TR(0x49b2bc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49b2c1ull));
TAIL_STATIC(0x50c900u,50c);
}
B49b2c1:L49b2c1:{c.instructions+=11;NFSU2_TR(0x49b2c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49b2c4:{NFSU2_TR(0x49b2c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B49b2c7:{NFSU2_TR(0x49b2c7);
u8 U[9];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x83aa68ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),1);
__builtin_memmove((R+8),(U+8),1);
}
B49b2ce:{NFSU2_TR(0x49b2ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49b2d1:{NFSU2_TR(0x49b2d1);
w1(R+512,u8((r1(R+8))!=(u8(0x0ull))));
w1(R+8,u8(0-u32(r1(R+8))));
}
B49b2d3:{NFSU2_TR(0x49b2d3);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+8))-u32(r4(R+8))));
w4(R+8,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B49b2d5:{NFSU2_TR(0x49b2d5);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xffff3942ull))));
}
B49b2db:{NFSU2_TR(0x49b2db);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0xccfaull))));
}
B49b2e1:{NFSU2_TR(0x49b2e1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49b2e2:{NFSU2_TR(0x49b2e2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49b2e3:{NFSU2_TR(0x49b2e3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49b2e8ull));
TAIL_STATIC(0x50c900u,50c);
}
B49b2e8:L49b2e8:{c.instructions+=3;NFSU2_TR(0x49b2e8);
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
B49b2eb:{NFSU2_TR(0x49b2eb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49b2ec:{NFSU2_TR(0x49b2ec);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49b2f0:L49b2f0:{c.instructions+=5;NFSU2_TR(0x49b2f0);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49b2f4:{NFSU2_TR(0x49b2f4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x406415e3ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B49b2f9:{NFSU2_TR(0x49b2f9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49b2fa:{NFSU2_TR(0x49b2fa);
__builtin_memmove((R+24),(R+4),4);
}
B49b2fc:{NFSU2_TR(0x49b2fc);
if(r1(R+518)){{goto L49b305;}}
}
B49b2fe:L49b2fe:{c.instructions+=2;NFSU2_TR(0x49b2fe);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xc407210ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xc407210ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xc407210ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B49b303:{NFSU2_TR(0x49b303);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49b31e;}}
}
B49b305:L49b305:{c.instructions+=6;NFSU2_TR(0x49b305);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49b309:{NFSU2_TR(0x49b309);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49b30b:{NFSU2_TR(0x49b30b);
u8 U[4];
w4(U+0,u32(0x78f5b8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49b310:{NFSU2_TR(0x49b310);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49b315:{NFSU2_TR(0x49b315);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49b316:{NFSU2_TR(0x49b316);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49b31bull));
TAIL_STATIC(0x537c00u,537);
}
B49b31b:L49b31b:{c.instructions+=1;NFSU2_TR(0x49b31b);
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
B49b31e:L49b31e:{c.instructions+=3;NFSU2_TR(0x49b31e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B49b320:{NFSU2_TR(0x49b320);
__builtin_memmove((R+4),(R+24),4);
}
B49b322:{NFSU2_TR(0x49b322);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49b325ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B49b325:L49b325:{c.instructions+=2;NFSU2_TR(0x49b325);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49b326:{NFSU2_TR(0x49b326);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49b330:L49b330:{c.instructions+=4;NFSU2_TR(0x49b330);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49b333:{NFSU2_TR(0x49b333);
u8 U[4];
w4(U+0,u32(0x4deab931ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49b338:{NFSU2_TR(0x49b338);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49b339:{NFSU2_TR(0x49b339);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49b33eull));
TAIL_STATIC(0x50c900u,50c);
}
B49b33e:L49b33e:{c.instructions+=2;NFSU2_TR(0x49b33e);
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
B49b341:{NFSU2_TR(0x49b341);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49b350:L49b350:{c.instructions+=8;NFSU2_TR(0x49b350);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49b351:{NFSU2_TR(0x49b351);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49b352:{NFSU2_TR(0x49b352);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B49b356:{NFSU2_TR(0x49b356);
__builtin_memmove((R+24),(R+4),4);
}
B49b358:{NFSU2_TR(0x49b358);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49b35b:{NFSU2_TR(0x49b35b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((R+4),(U+0),4);
}
B49b35e:{NFSU2_TR(0x49b35e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49b35f:{NFSU2_TR(0x49b35f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49b362ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B49b362:L49b362:{c.instructions+=2;NFSU2_TR(0x49b362);
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
B49b364:{NFSU2_TR(0x49b364);
if(r1(R+518)){{goto L49b36e;}}
}
B49b366:L49b366:{c.instructions+=4;NFSU2_TR(0x49b366);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B49b368:{NFSU2_TR(0x49b368);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49b369:{NFSU2_TR(0x49b369);
__builtin_memmove((R+4),(R+24),4);
}
B49b36b:{NFSU2_TR(0x49b36b);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49b36eull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B49b36e:L49b36e:{c.instructions+=6;NFSU2_TR(0x49b36e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49b374:{NFSU2_TR(0x49b374);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B49b377:{NFSU2_TR(0x49b377);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B49b379:{NFSU2_TR(0x49b379);
__builtin_memmove((R+4),(R+24),4);
}
B49b37b:{NFSU2_TR(0x49b37b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x83aa64ull))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B49b382:{NFSU2_TR(0x49b382);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49b385ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B49b385:L49b385:{c.instructions+=4;NFSU2_TR(0x49b385);
{u32 ea_=u32(r4(R+28)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B49b388:{NFSU2_TR(0x49b388);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B49b38a:{NFSU2_TR(0x49b38a);
__builtin_memmove((R+4),(R+24),4);
}
B49b38c:{NFSU2_TR(0x49b38c);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49b38full));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B49b38f:L49b38f:{c.instructions+=3;NFSU2_TR(0x49b38f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B49b390:{NFSU2_TR(0x49b390);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49b391:{NFSU2_TR(0x49b391);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49b3a0:L49b3a0:{c.instructions+=4;NFSU2_TR(0x49b3a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49b3a3:{NFSU2_TR(0x49b3a3);
u8 U[4];
w4(U+0,u32(0x56feb0d2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49b3a8:{NFSU2_TR(0x49b3a8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49b3a9:{NFSU2_TR(0x49b3a9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49b3aeull));
TAIL_STATIC(0x50c900u,50c);
}
B49b3ae:L49b3ae:{c.instructions+=2;NFSU2_TR(0x49b3ae);
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
B49b3b1:{NFSU2_TR(0x49b3b1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49b3c0:L49b3c0:{c.instructions+=13;NFSU2_TR(0x49b3c0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49b3c1:{NFSU2_TR(0x49b3c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49b3c7:{NFSU2_TR(0x49b3c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B49b3ca:{NFSU2_TR(0x49b3ca);
{u32 ea_=u32((r4(R+0)*8u)+u32(8628864u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B49b3d1:{NFSU2_TR(0x49b3d1);
w4(R+0,u32(0x3dcccccdull));
}
B49b3d6:{NFSU2_TR(0x49b3d6);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B49b3da:{NFSU2_TR(0x49b3da);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x7cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49b3dd:{NFSU2_TR(0x49b3dd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
__builtin_memmove((R+8),(U+0),4);
}
B49b3e1:{NFSU2_TR(0x49b3e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x78ull))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B49b3e8:{NFSU2_TR(0x49b3e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49b3ee:{NFSU2_TR(0x49b3ee);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49b3ef:{NFSU2_TR(0x49b3ef);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x54ull))));
}
B49b3f2:{NFSU2_TR(0x49b3f2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49b3f7ull));
TAIL_STATIC(0x4ff550u,4ff);
}
B49b3f7:L49b3f7:{c.instructions+=2;NFSU2_TR(0x49b3f7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B49b3f8:{NFSU2_TR(0x49b3f8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49b400:L49b400:{c.instructions+=8;NFSU2_TR(0x49b400);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49b401:{NFSU2_TR(0x49b401);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49b402:{NFSU2_TR(0x49b402);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B49b406:{NFSU2_TR(0x49b406);
__builtin_memmove((R+24),(R+4),4);
}
B49b408:{NFSU2_TR(0x49b408);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49b40b:{NFSU2_TR(0x49b40b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((R+4),(U+0),4);
}
B49b40e:{NFSU2_TR(0x49b40e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49b40f:{NFSU2_TR(0x49b40f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49b412ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B49b412:L49b412:{c.instructions+=2;NFSU2_TR(0x49b412);
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
B49b414:{NFSU2_TR(0x49b414);
if(r1(R+518)){{goto L49b41e;}}
}
B49b416:L49b416:{c.instructions+=4;NFSU2_TR(0x49b416);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B49b418:{NFSU2_TR(0x49b418);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49b419:{NFSU2_TR(0x49b419);
__builtin_memmove((R+4),(R+24),4);
}
B49b41b:{NFSU2_TR(0x49b41b);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49b41eull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B49b41e:L49b41e:{c.instructions+=6;NFSU2_TR(0x49b41e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49b424:{NFSU2_TR(0x49b424);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B49b427:{NFSU2_TR(0x49b427);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B49b429:{NFSU2_TR(0x49b429);
__builtin_memmove((R+4),(R+24),4);
}
B49b42b:{NFSU2_TR(0x49b42b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x83aa64ull))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B49b432:{NFSU2_TR(0x49b432);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49b435ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B49b435:L49b435:{c.instructions+=4;NFSU2_TR(0x49b435);
{u32 ea_=u32(r4(R+28)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B49b438:{NFSU2_TR(0x49b438);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B49b43a:{NFSU2_TR(0x49b43a);
__builtin_memmove((R+4),(R+24),4);
}
B49b43c:{NFSU2_TR(0x49b43c);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49b43full));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B49b43f:L49b43f:{c.instructions+=3;NFSU2_TR(0x49b43f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B49b440:{NFSU2_TR(0x49b440);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49b441:{NFSU2_TR(0x49b441);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49b450:L49b450:{c.instructions+=8;NFSU2_TR(0x49b450);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49b451:{NFSU2_TR(0x49b451);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x84ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49b457:{NFSU2_TR(0x49b457);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B49b45b:{NFSU2_TR(0x49b45b);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B49b45f:{NFSU2_TR(0x49b45f);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B49b465:{NFSU2_TR(0x49b465);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B49b467:{NFSU2_TR(0x49b467);
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
B49b46a:{NFSU2_TR(0x49b46a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49b497;}}
}
B49b46c:L49b46c:{c.instructions+=6;NFSU2_TR(0x49b46c);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B49b470:{NFSU2_TR(0x49b470);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B49b476:{NFSU2_TR(0x49b476);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B49b47a:{NFSU2_TR(0x49b47a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B49b47c:{NFSU2_TR(0x49b47c);
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
B49b47f:{NFSU2_TR(0x49b47f);
if(r1(R+514)){{goto L49b489;}}
}
B49b481:L49b481:{c.instructions+=2;NFSU2_TR(0x49b481);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B49b483:{NFSU2_TR(0x49b483);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B49b489:L49b489:{c.instructions+=4;NFSU2_TR(0x49b489);
{u32 ea_=u32(u32(7928284u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B49b48f:{NFSU2_TR(0x49b48f);
{u32 ea_=u32(u32(7885016u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B49b495:{NFSU2_TR(0x49b495);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B49b496:{NFSU2_TR(0x49b496);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49b497:L49b497:{c.instructions+=5;NFSU2_TR(0x49b497);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B49b49d:{NFSU2_TR(0x49b49d);
{u32 ea_=u32(u32(7928284u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B49b4a3:{NFSU2_TR(0x49b4a3);
{u32 ea_=u32(u32(7885016u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B49b4a9:{NFSU2_TR(0x49b4a9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B49b4aa:{NFSU2_TR(0x49b4aa);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49b4b0:L49b4b0:{c.instructions+=4;NFSU2_TR(0x49b4b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49b4b3:{NFSU2_TR(0x49b4b3);
u8 U[4];
w4(U+0,u32(0x1cc4b396ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49b4b8:{NFSU2_TR(0x49b4b8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49b4b9:{NFSU2_TR(0x49b4b9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49b4beull));
TAIL_STATIC(0x50c900u,50c);
}
B49b4be:L49b4be:{c.instructions+=2;NFSU2_TR(0x49b4be);
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
B49b4c1:{NFSU2_TR(0x49b4c1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49b4d0:L49b4d0:{c.instructions+=9;NFSU2_TR(0x49b4d0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49b4d1:{NFSU2_TR(0x49b4d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49b4d7:{NFSU2_TR(0x49b4d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B49b4da:{NFSU2_TR(0x49b4da);
{u32 ea_=u32((r4(R+0)*8u)+u32(8628868u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B49b4e1:{NFSU2_TR(0x49b4e1);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B49b4e5:{NFSU2_TR(0x49b4e5);
{u32 ea_=u32(u32(7881920u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B49b4eb:{NFSU2_TR(0x49b4eb);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B49b4ed:{NFSU2_TR(0x49b4ed);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B49b4f0:{NFSU2_TR(0x49b4f0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49b547;}}
}
B49b4f2:L49b4f2:{c.instructions+=6;NFSU2_TR(0x49b4f2);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B49b4f6:{NFSU2_TR(0x49b4f6);
{u32 ea_=u32(u32(7885016u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B49b4fc:{NFSU2_TR(0x49b4fc);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B49b500:{NFSU2_TR(0x49b500);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B49b502:{NFSU2_TR(0x49b502);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B49b505:{NFSU2_TR(0x49b505);
if(r1(R+514)){{goto L49b50f;}}
}
B49b507:L49b507:{c.instructions+=2;NFSU2_TR(0x49b507);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B49b509:{NFSU2_TR(0x49b509);
{u32 ea_=u32(u32(7885016u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B49b50f:L49b50f:{c.instructions+=10;NFSU2_TR(0x49b50f);
{u32 ea_=u32(u32(7881920u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B49b515:{NFSU2_TR(0x49b515);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49b516:{NFSU2_TR(0x49b516);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x7cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B49b51d:{NFSU2_TR(0x49b51d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x78ull))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B49b524:{NFSU2_TR(0x49b524);
{u32 ea_=u32(u32(7928288u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B49b52a:{NFSU2_TR(0x49b52a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8cull))));
w4(U+4,u32(0x3dcccccdull));
s4(u32(r4(U+0)),r4(U+4));
}
B49b534:{NFSU2_TR(0x49b534);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x54ull))));
}
B49b537:{NFSU2_TR(0x49b537);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B49b53d:{NFSU2_TR(0x49b53d);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B49b540:{NFSU2_TR(0x49b540);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49b545ull));
TAIL_STATIC(0x4ff550u,4ff);
}
B49b545:L49b545:{c.instructions+=2;NFSU2_TR(0x49b545);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B49b546:{NFSU2_TR(0x49b546);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49b547:L49b547:{c.instructions+=2;NFSU2_TR(0x49b547);
{u32 ea_=u32(u32(7881920u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B49b54d:{NFSU2_TR(0x49b54d);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x49b50fu);}goto L49b50f;}
}
B49b550:L49b550:{c.instructions+=8;NFSU2_TR(0x49b550);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49b551:{NFSU2_TR(0x49b551);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49b552:{NFSU2_TR(0x49b552);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B49b556:{NFSU2_TR(0x49b556);
__builtin_memmove((R+24),(R+4),4);
}
B49b558:{NFSU2_TR(0x49b558);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49b55b:{NFSU2_TR(0x49b55b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((R+4),(U+0),4);
}
B49b55e:{NFSU2_TR(0x49b55e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49b55f:{NFSU2_TR(0x49b55f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49b562ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B49b562:L49b562:{c.instructions+=2;NFSU2_TR(0x49b562);
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
B49b564:{NFSU2_TR(0x49b564);
if(r1(R+518)){{goto L49b56e;}}
}
B49b566:L49b566:{c.instructions+=4;NFSU2_TR(0x49b566);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B49b568:{NFSU2_TR(0x49b568);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49b569:{NFSU2_TR(0x49b569);
__builtin_memmove((R+4),(R+24),4);
}
B49b56b:{NFSU2_TR(0x49b56b);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49b56eull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B49b56e:L49b56e:{c.instructions+=6;NFSU2_TR(0x49b56e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49b574:{NFSU2_TR(0x49b574);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B49b577:{NFSU2_TR(0x49b577);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B49b579:{NFSU2_TR(0x49b579);
__builtin_memmove((R+4),(R+24),4);
}
B49b57b:{NFSU2_TR(0x49b57b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x8ull))));
w4(U+4,u32(u32(u32(0x83aa64ull))+u32(r4(U+0))));
__builtin_memmove((R+28),(U+4),4);
}
B49b582:{NFSU2_TR(0x49b582);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49b585ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B49b585:L49b585:{c.instructions+=4;NFSU2_TR(0x49b585);
{u32 ea_=u32(r4(R+28)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B49b588:{NFSU2_TR(0x49b588);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B49b58a:{NFSU2_TR(0x49b58a);
__builtin_memmove((R+4),(R+24),4);
}
B49b58c:{NFSU2_TR(0x49b58c);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49b58full));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B49b58f:L49b58f:{c.instructions+=3;NFSU2_TR(0x49b58f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B49b590:{NFSU2_TR(0x49b590);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49b591:{NFSU2_TR(0x49b591);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49b5a0:L49b5a0:{c.instructions+=4;NFSU2_TR(0x49b5a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49b5a3:{NFSU2_TR(0x49b5a3);
u8 U[4];
w4(U+0,u32(0x28f42ae8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49b5a8:{NFSU2_TR(0x49b5a8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49b5a9:{NFSU2_TR(0x49b5a9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49b5aeull));
TAIL_STATIC(0x50c900u,50c);
}
B49b5ae:L49b5ae:{c.instructions+=2;NFSU2_TR(0x49b5ae);
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
B49b5b1:{NFSU2_TR(0x49b5b1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49b5c0:L49b5c0:{c.instructions+=12;NFSU2_TR(0x49b5c0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49b5c1:{NFSU2_TR(0x49b5c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49b5c7:{NFSU2_TR(0x49b5c7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B49b5ca:{NFSU2_TR(0x49b5ca);
{u32 ea_=u32((r4(R+0)*8u)+u32(8628872u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B49b5d1:{NFSU2_TR(0x49b5d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x7cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B49b5d8:{NFSU2_TR(0x49b5d8);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B49b5dc:{NFSU2_TR(0x49b5dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x78ull))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B49b5e3:{NFSU2_TR(0x49b5e3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
__builtin_memmove((R+8),(U+0),4);
}
B49b5e7:{NFSU2_TR(0x49b5e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8cull))));
w4(U+4,u32(0x3dcccccdull));
s4(u32(r4(U+0)),r4(U+4));
}
B49b5f1:{NFSU2_TR(0x49b5f1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49b5f2:{NFSU2_TR(0x49b5f2);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x54ull))));
}
B49b5f5:{NFSU2_TR(0x49b5f5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49b5faull));
TAIL_STATIC(0x4ff550u,4ff);
}
B49b5fa:L49b5fa:{c.instructions+=2;NFSU2_TR(0x49b5fa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B49b5fb:{NFSU2_TR(0x49b5fb);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49b600:L49b600:{c.instructions+=6;NFSU2_TR(0x49b600);
if(mod_hook_table[4]&&!mod_bypass_take(4)){SPILL();c.pc=0x49b600u;mod_hook_table[4](c);SPILL();{u32 sp_=r4(R+16);u32 ra_=m4(sp_);w4(R+16,sp_+12u);TAIL_DYNAMIC(ra_);}}
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B49b604:{NFSU2_TR(0x49b604);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xb5971bf1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B49b60a:{NFSU2_TR(0x49b60a);
__builtin_memmove((R+0),gp(0x870d1c),4);
}
B49b60f:{NFSU2_TR(0x49b60f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49b610:{NFSU2_TR(0x49b610);
__builtin_memmove((R+24),(R+0),4);
}
B49b612:{NFSU2_TR(0x49b612);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49b633;}}
}
B49b614:L49b614:{c.instructions+=2;NFSU2_TR(0x49b614);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B49b617:{NFSU2_TR(0x49b617);
if(r1(R+518)){{goto L49b655;}}
}
B49b619:L49b619:{c.instructions+=1;NFSU2_TR(0x49b619);
__builtin_memmove((R+16),(R+16),4);
}
B49b620:L49b620:{c.instructions+=4;NFSU2_TR(0x49b620);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x86e884ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B49b627:{NFSU2_TR(0x49b627);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B49b628:{NFSU2_TR(0x49b628);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B49b62a:{NFSU2_TR(0x49b62a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49b650;}}
}
B49b62c:L49b62c:{c.instructions+=2;NFSU2_TR(0x49b62c);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B49b62f:{NFSU2_TR(0x49b62f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x49b620u);}goto L49b620;}}
}
B49b631:L49b631:{c.instructions+=1;NFSU2_TR(0x49b631);
{goto L49b650;}
}
B49b633:L49b633:{c.instructions+=2;NFSU2_TR(0x49b633);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x9120409eull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B49b639:{NFSU2_TR(0x49b639);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49b655;}}
}
B49b63b:L49b63b:{c.instructions+=2;NFSU2_TR(0x49b63b);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B49b63d:{NFSU2_TR(0x49b63d);
if(r1(R+518)){{goto L49b655;}}
}
B49b63f:L49b63f:{c.instructions+=1;NFSU2_TR(0x49b63f);
}
B49b640:L49b640:{c.instructions+=4;NFSU2_TR(0x49b640);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x86e87cull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B49b647:{NFSU2_TR(0x49b647);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B49b648:{NFSU2_TR(0x49b648);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B49b64a:{NFSU2_TR(0x49b64a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49b650;}}
}
B49b64c:L49b64c:{c.instructions+=2;NFSU2_TR(0x49b64c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B49b64e:{NFSU2_TR(0x49b64e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x49b640u);}goto L49b640;}}
}
B49b650:L49b650:{c.instructions+=1;NFSU2_TR(0x49b650);
__builtin_memmove(gp(0x870d1c),(R+0),4);
}
B49b655:L49b655:{c.instructions+=3;NFSU2_TR(0x49b655);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x86e880ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B49b65c:{NFSU2_TR(0x49b65c);
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
B49b65e:{NFSU2_TR(0x49b65e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49b66f;}}
}
B49b660:L49b660:{c.instructions+=3;NFSU2_TR(0x49b660);
__builtin_memmove(gp(0x870d1c),(R+24),4);
}
B49b666:{NFSU2_TR(0x49b666);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B49b668:{NFSU2_TR(0x49b668);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49b66bull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B49b66b:L49b66b:{c.instructions+=2;NFSU2_TR(0x49b66b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49b66c:{NFSU2_TR(0x49b66c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49b66f:L49b66f:{c.instructions+=2;NFSU2_TR(0x49b66f);
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
B49b671:{NFSU2_TR(0x49b671);
if(r1(R+518)){{goto L49b67a;}}
}
B49b673:L49b673:{c.instructions+=1;NFSU2_TR(0x49b673);
s1(0x8709d1,u8(0x1ull));
}
B49b67a:L49b67a:{c.instructions+=2;NFSU2_TR(0x49b67a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B49b67c:{NFSU2_TR(0x49b67c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49b67full));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B49b67f:L49b67f:{c.instructions+=2;NFSU2_TR(0x49b67f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49b680:{NFSU2_TR(0x49b680);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49b690:L49b690:{c.instructions+=6;NFSU2_TR(0x49b690);
if(mod_hook_table[6]&&!mod_bypass_take(6)){SPILL();c.pc=0x49b690u;mod_hook_table[6](c);SPILL();{u32 sp_=r4(R+16);u32 ra_=m4(sp_);w4(R+16,sp_+4u);TAIL_DYNAMIC(ra_);}}
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49b691:{NFSU2_TR(0x49b691);
__builtin_memmove((R+24),(R+4),4);
}
B49b693:{NFSU2_TR(0x49b693);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49b696:{NFSU2_TR(0x49b696);
u8 U[4];
w4(U+0,u32(0xa9a76bbaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49b69b:{NFSU2_TR(0x49b69b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49b69c:{NFSU2_TR(0x49b69c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49b6a1ull));
TAIL_STATIC(0x50c900u,50c);
}
B49b6a1:L49b6a1:{c.instructions+=4;NFSU2_TR(0x49b6a1);
__builtin_memmove((R+0),gp(0x870d1c),4);
}
B49b6a6:{NFSU2_TR(0x49b6a6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B49b6a9:{NFSU2_TR(0x49b6a9);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x5ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x5ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x5ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B49b6ac:{NFSU2_TR(0x49b6ac);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L49b725;}}
}
B49b6ae:L49b6ae:{c.instructions+=1;NFSU2_TR(0x49b6ae);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x49b728ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B49b6b5:L49b6b5:{c.instructions+=4;NFSU2_TR(0x49b6b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49b6b8:{NFSU2_TR(0x49b6b8);
u8 U[4];
w4(U+0,u32(0x78fa1cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49b6bd:{NFSU2_TR(0x49b6bd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49b6be:{NFSU2_TR(0x49b6be);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49b6c3ull));
TAIL_STATIC(0x537be0u,537);
}
B49b6c3:L49b6c3:{c.instructions+=3;NFSU2_TR(0x49b6c3);
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
B49b6c6:{NFSU2_TR(0x49b6c6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49b6c7:{NFSU2_TR(0x49b6c7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49b6c8:L49b6c8:{c.instructions+=4;NFSU2_TR(0x49b6c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B49b6cb:{NFSU2_TR(0x49b6cb);
u8 U[4];
w4(U+0,u32(0x78fa14ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49b6d0:{NFSU2_TR(0x49b6d0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49b6d1:{NFSU2_TR(0x49b6d1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49b6d6ull));
TAIL_STATIC(0x537be0u,537);
}
B49b6d6:L49b6d6:{c.instructions+=3;NFSU2_TR(0x49b6d6);
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
B49b6d9:{NFSU2_TR(0x49b6d9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49b6da:{NFSU2_TR(0x49b6da);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49b6db:L49b6db:{c.instructions+=4;NFSU2_TR(0x49b6db);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49b6de:{NFSU2_TR(0x49b6de);
u8 U[4];
w4(U+0,u32(0x78fa08ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49b6e3:{NFSU2_TR(0x49b6e3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49b6e4:{NFSU2_TR(0x49b6e4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49b6e9ull));
TAIL_STATIC(0x537be0u,537);
}
B49b6e9:L49b6e9:{c.instructions+=3;NFSU2_TR(0x49b6e9);
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
B49b6ec:{NFSU2_TR(0x49b6ec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49b6ed:{NFSU2_TR(0x49b6ed);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49b6ee:L49b6ee:{c.instructions+=4;NFSU2_TR(0x49b6ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49b6f1:{NFSU2_TR(0x49b6f1);
u8 U[4];
w4(U+0,u32(0x78f9fcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49b6f6:{NFSU2_TR(0x49b6f6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49b6f7:{NFSU2_TR(0x49b6f7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49b6fcull));
TAIL_STATIC(0x537be0u,537);
}
B49b6fc:L49b6fc:{c.instructions+=3;NFSU2_TR(0x49b6fc);
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
B49b6ff:{NFSU2_TR(0x49b6ff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49b700:{NFSU2_TR(0x49b700);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49b701:L49b701:{c.instructions+=4;NFSU2_TR(0x49b701);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B49b704:{NFSU2_TR(0x49b704);
u8 U[4];
w4(U+0,u32(0x78f9f0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49b709:{NFSU2_TR(0x49b709);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49b70a:{NFSU2_TR(0x49b70a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49b70full));
TAIL_STATIC(0x537be0u,537);
}
B49b70f:L49b70f:{c.instructions+=3;NFSU2_TR(0x49b70f);
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
B49b712:{NFSU2_TR(0x49b712);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49b713:{NFSU2_TR(0x49b713);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49b714:L49b714:{c.instructions+=4;NFSU2_TR(0x49b714);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49b717:{NFSU2_TR(0x49b717);
u8 U[4];
w4(U+0,u32(0x78f9e4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49b71c:{NFSU2_TR(0x49b71c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49b71d:{NFSU2_TR(0x49b71d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49b722ull));
TAIL_STATIC(0x537be0u,537);
}
B49b722:L49b722:{c.instructions+=1;NFSU2_TR(0x49b722);
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
B49b725:L49b725:{c.instructions+=2;NFSU2_TR(0x49b725);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49b726:{NFSU2_TR(0x49b726);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49b740:L49b740:{c.instructions+=8;NFSU2_TR(0x49b740);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49b741:{NFSU2_TR(0x49b741);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49b742:{NFSU2_TR(0x49b742);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B49b746:{NFSU2_TR(0x49b746);
__builtin_memmove((R+24),(R+4),4);
}
B49b748:{NFSU2_TR(0x49b748);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49b74b:{NFSU2_TR(0x49b74b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((R+4),(U+0),4);
}
B49b74e:{NFSU2_TR(0x49b74e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49b74f:{NFSU2_TR(0x49b74f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49b752ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B49b752:L49b752:{c.instructions+=2;NFSU2_TR(0x49b752);
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
B49b754:{NFSU2_TR(0x49b754);
if(r1(R+518)){{goto L49b78d;}}
}
B49b756:L49b756:{c.instructions+=4;NFSU2_TR(0x49b756);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B49b758:{NFSU2_TR(0x49b758);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49b759:{NFSU2_TR(0x49b759);
__builtin_memmove((R+4),(R+24),4);
}
B49b75b:{NFSU2_TR(0x49b75b);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49b75eull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B49b75e:L49b75e:{c.instructions+=3;NFSU2_TR(0x49b75e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B49b760:{NFSU2_TR(0x49b760);
__builtin_memmove((R+4),(R+24),4);
}
B49b762:{NFSU2_TR(0x49b762);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49b765ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B49b765:L49b765:{c.instructions+=1;NFSU2_TR(0x49b765);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49b76aull));
TAIL_STATIC(0x75bed4u,75b);
}
B49b76a:L49b76a:{c.instructions+=2;NFSU2_TR(0x49b76a);
__builtin_memmove(gp(0x87099c),(R+0),4);
}
B49b76f:{NFSU2_TR(0x49b76f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49b774ull));
TAIL_STATIC(0x5be9f0u,5be);
}
B49b774:L49b774:{c.instructions+=4;NFSU2_TR(0x49b774);
s1(0x8709d1,u8(0x1ull));
}
B49b77b:{NFSU2_TR(0x49b77b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B49b781:{NFSU2_TR(0x49b781);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B49b783:{NFSU2_TR(0x49b783);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49b786ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B49b786:L49b786:{c.instructions+=3;NFSU2_TR(0x49b786);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B49b788:{NFSU2_TR(0x49b788);
__builtin_memmove((R+4),(R+24),4);
}
B49b78a:{NFSU2_TR(0x49b78a);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49b78dull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B49b78d:L49b78d:{c.instructions+=3;NFSU2_TR(0x49b78d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B49b78e:{NFSU2_TR(0x49b78e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49b78f:{NFSU2_TR(0x49b78f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49b7a0:L49b7a0:{c.instructions+=4;NFSU2_TR(0x49b7a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49b7a3:{NFSU2_TR(0x49b7a3);
u8 U[4];
w4(U+0,u32(0xb55e7665ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49b7a8:{NFSU2_TR(0x49b7a8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49b7a9:{NFSU2_TR(0x49b7a9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49b7aeull));
TAIL_STATIC(0x50c900u,50c);
}
B49b7ae:L49b7ae:{c.instructions+=2;NFSU2_TR(0x49b7ae);
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
B49b7b1:{NFSU2_TR(0x49b7b1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49b7c0:L49b7c0:{c.instructions+=11;NFSU2_TR(0x49b7c0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49b7c1:{NFSU2_TR(0x49b7c1);
{u32 ea_=u32(u32(8849820u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B49b7c7:{NFSU2_TR(0x49b7c7);
w4(R+0,u32(0x3f800000ull));
}
B49b7cc:{NFSU2_TR(0x49b7cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x7cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49b7cf:{NFSU2_TR(0x49b7cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B49b7d5:{NFSU2_TR(0x49b7d5);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B49b7d9:{NFSU2_TR(0x49b7d9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x78ull))));
w4(U+4,u32(0x40a00000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B49b7e0:{NFSU2_TR(0x49b7e0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
__builtin_memmove((R+0),(U+0),4);
}
B49b7e4:{NFSU2_TR(0x49b7e4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49b7e5:{NFSU2_TR(0x49b7e5);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x54ull))));
}
B49b7e8:{NFSU2_TR(0x49b7e8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49b7edull));
TAIL_STATIC(0x4ff550u,4ff);
}
B49b7ed:L49b7ed:{c.instructions+=2;NFSU2_TR(0x49b7ed);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B49b7ee:{NFSU2_TR(0x49b7ee);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49b7f0:L49b7f0:{c.instructions+=8;NFSU2_TR(0x49b7f0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49b7f1:{NFSU2_TR(0x49b7f1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49b7f2:{NFSU2_TR(0x49b7f2);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B49b7f6:{NFSU2_TR(0x49b7f6);
__builtin_memmove((R+24),(R+4),4);
}
B49b7f8:{NFSU2_TR(0x49b7f8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49b7fb:{NFSU2_TR(0x49b7fb);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((R+4),(U+0),4);
}
B49b7fe:{NFSU2_TR(0x49b7fe);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49b7ff:{NFSU2_TR(0x49b7ff);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49b802ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B49b802:L49b802:{c.instructions+=2;NFSU2_TR(0x49b802);
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
B49b804:{NFSU2_TR(0x49b804);
if(r1(R+518)){{goto L49b82d;}}
}
B49b806:L49b806:{c.instructions+=4;NFSU2_TR(0x49b806);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B49b808:{NFSU2_TR(0x49b808);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49b809:{NFSU2_TR(0x49b809);
__builtin_memmove((R+4),(R+24),4);
}
B49b80b:{NFSU2_TR(0x49b80b);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49b80eull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B49b80e:L49b80e:{c.instructions+=3;NFSU2_TR(0x49b80e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B49b810:{NFSU2_TR(0x49b810);
__builtin_memmove((R+4),(R+24),4);
}
B49b812:{NFSU2_TR(0x49b812);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49b815ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B49b815:L49b815:{c.instructions+=1;NFSU2_TR(0x49b815);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49b81aull));
TAIL_STATIC(0x75bed4u,75b);
}
B49b81a:L49b81a:{c.instructions+=5;NFSU2_TR(0x49b81a);
__builtin_memmove(gp(0x870d18),(R+0),4);
}
B49b81f:{NFSU2_TR(0x49b81f);
s1(0x8709d1,u8(0x1ull));
}
B49b826:{NFSU2_TR(0x49b826);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B49b828:{NFSU2_TR(0x49b828);
__builtin_memmove((R+4),(R+24),4);
}
B49b82a:{NFSU2_TR(0x49b82a);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49b82dull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B49b82d:L49b82d:{c.instructions+=3;NFSU2_TR(0x49b82d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B49b82e:{NFSU2_TR(0x49b82e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49b82f:{NFSU2_TR(0x49b82f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49b840:L49b840:{c.instructions+=4;NFSU2_TR(0x49b840);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49b843:{NFSU2_TR(0x49b843);
u8 U[4];
w4(U+0,u32(0x61a50b8full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49b848:{NFSU2_TR(0x49b848);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49b849:{NFSU2_TR(0x49b849);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49b84eull));
TAIL_STATIC(0x50c900u,50c);
}
B49b84e:L49b84e:{c.instructions+=2;NFSU2_TR(0x49b84e);
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
B49b851:{NFSU2_TR(0x49b851);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49b860:L49b860:{c.instructions+=11;NFSU2_TR(0x49b860);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49b861:{NFSU2_TR(0x49b861);
{u32 ea_=u32(u32(8850712u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B49b867:{NFSU2_TR(0x49b867);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x54ull))));
}
B49b86a:{NFSU2_TR(0x49b86a);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B49b86e:{NFSU2_TR(0x49b86e);
{u32 ea_=u32(u32(8873264u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B49b874:{NFSU2_TR(0x49b874);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
__builtin_memmove((R+0),(U+0),4);
}
B49b878:{NFSU2_TR(0x49b878);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B49b87f:{NFSU2_TR(0x49b87f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B49b886:{NFSU2_TR(0x49b886);
{u32 ea_=u32(r4(R+4)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B49b889:{NFSU2_TR(0x49b889);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49b88a:{NFSU2_TR(0x49b88a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49b88full));
TAIL_STATIC(0x4ff550u,4ff);
}
B49b88f:L49b88f:{c.instructions+=2;NFSU2_TR(0x49b88f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B49b890:{NFSU2_TR(0x49b890);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49b8a0:L49b8a0:{c.instructions+=3;NFSU2_TR(0x49b8a0);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49b8a4:{NFSU2_TR(0x49b8a4);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xb5971bf1ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B49b8a9:{NFSU2_TR(0x49b8a9);
if(r1(R+518)){{goto L49b8b2;}}
}
B49b8ab:L49b8ab:{c.instructions+=2;NFSU2_TR(0x49b8ab);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x9120409eull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x9120409eull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x9120409eull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B49b8b0:{NFSU2_TR(0x49b8b0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49b8cb;}}
}
B49b8b2:L49b8b2:{c.instructions+=6;NFSU2_TR(0x49b8b2);
__builtin_memmove((R+8),gp(0x870d24),4);
}
B49b8b8:{NFSU2_TR(0x49b8b8);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B49b8ba:{NFSU2_TR(0x49b8ba);
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
B49b8bc:{NFSU2_TR(0x49b8bc);
__builtin_memmove((R+0),(R+518),1);
}
B49b8bf:{NFSU2_TR(0x49b8bf);
s1(0x8709d1,u8(0x1ull));
}
B49b8c6:{NFSU2_TR(0x49b8c6);
__builtin_memmove(gp(0x870d24),(R+0),4);
}
B49b8cb:L49b8cb:{c.instructions+=2;NFSU2_TR(0x49b8cb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B49b8cd:{NFSU2_TR(0x49b8cd);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49b8d0ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B49b8d0:L49b8d0:{c.instructions+=1;NFSU2_TR(0x49b8d0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49b8e0:L49b8e0:{c.instructions+=6;NFSU2_TR(0x49b8e0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49b8e1:{NFSU2_TR(0x49b8e1);
__builtin_memmove((R+24),(R+4),4);
}
B49b8e3:{NFSU2_TR(0x49b8e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49b8e6:{NFSU2_TR(0x49b8e6);
u8 U[4];
w4(U+0,u32(0x5b4aa6e4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49b8eb:{NFSU2_TR(0x49b8eb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49b8ec:{NFSU2_TR(0x49b8ec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49b8f1ull));
TAIL_STATIC(0x50c900u,50c);
}
B49b8f1:L49b8f1:{c.instructions+=5;NFSU2_TR(0x49b8f1);
__builtin_memmove((R+0),gp(0x870d24),4);
}
B49b8f6:{NFSU2_TR(0x49b8f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B49b8f9:{NFSU2_TR(0x49b8f9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B49b8fc:{NFSU2_TR(0x49b8fc);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B49b8fe:{NFSU2_TR(0x49b8fe);
if(r1(R+518)){{goto L49b916;}}
}
B49b900:L49b900:{c.instructions+=2;NFSU2_TR(0x49b900);
u8 U[4];
w4(U+0,u32(0x63cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49b905:{NFSU2_TR(0x49b905);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49b90aull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B49b90a:L49b90a:{c.instructions+=3;NFSU2_TR(0x49b90a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49b90b:{NFSU2_TR(0x49b90b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49b90c:{NFSU2_TR(0x49b90c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49b911ull));
TAIL_STATIC(0x537be0u,537);
}
B49b911:L49b911:{c.instructions+=3;NFSU2_TR(0x49b911);
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
B49b914:{NFSU2_TR(0x49b914);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49b915:{NFSU2_TR(0x49b915);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49b916:L49b916:{c.instructions+=2;NFSU2_TR(0x49b916);
u8 U[4];
w4(U+0,u32(0x88576cffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49b91b:{NFSU2_TR(0x49b91b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49b920ull));
TAIL_STATIC(0x4ffa80u,4ff);
}
B49b920:L49b920:{c.instructions+=3;NFSU2_TR(0x49b920);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49b921:{NFSU2_TR(0x49b921);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49b922:{NFSU2_TR(0x49b922);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49b927ull));
TAIL_STATIC(0x537be0u,537);
}
B49b927:L49b927:{c.instructions+=3;NFSU2_TR(0x49b927);
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
B49b92a:{NFSU2_TR(0x49b92a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49b92b:{NFSU2_TR(0x49b92b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49b930:L49b930:{c.instructions+=2;NFSU2_TR(0x49b930);
u8 U[22];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0xc407210ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0xc407210ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0xc407210ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B49b938:{NFSU2_TR(0x49b938);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49b953;}}
}
B49b93a:L49b93a:{c.instructions+=6;NFSU2_TR(0x49b93a);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49b93e:{NFSU2_TR(0x49b93e);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49b940:{NFSU2_TR(0x49b940);
u8 U[4];
w4(U+0,u32(0x78f5b8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49b945:{NFSU2_TR(0x49b945);
u8 U[4];
w4(U+0,u32(0x47ff4e7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49b94a:{NFSU2_TR(0x49b94a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49b94b:{NFSU2_TR(0x49b94b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49b950ull));
TAIL_STATIC(0x537c00u,537);
}
B49b950:L49b950:{c.instructions+=1;NFSU2_TR(0x49b950);
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
B49b953:L49b953:{c.instructions+=1;NFSU2_TR(0x49b953);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49b960:L49b960:{c.instructions+=4;NFSU2_TR(0x49b960);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49b963:{NFSU2_TR(0x49b963);
u8 U[4];
w4(U+0,u32(0x381fe1e9ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49b968:{NFSU2_TR(0x49b968);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49b969:{NFSU2_TR(0x49b969);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49b96eull));
TAIL_STATIC(0x50c900u,50c);
}
B49b96e:L49b96e:{c.instructions+=2;NFSU2_TR(0x49b96e);
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
B49b971:{NFSU2_TR(0x49b971);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49b980:L49b980:{c.instructions+=3;NFSU2_TR(0x49b980);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49b984:{NFSU2_TR(0x49b984);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0xc407210ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B49b989:{NFSU2_TR(0x49b989);
if(r1(R+518)){{goto L49b992;}}
}
B49b98b:L49b98b:{c.instructions+=2;NFSU2_TR(0x49b98b);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x406415e3ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x406415e3ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x406415e3ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B49b990:{NFSU2_TR(0x49b990);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49b9d0;}}
}
B49b992:L49b992:{c.instructions+=6;NFSU2_TR(0x49b992);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49b993:{NFSU2_TR(0x49b993);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B49b997:{NFSU2_TR(0x49b997);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49b999:{NFSU2_TR(0x49b999);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49b99b:{NFSU2_TR(0x49b99b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49b99c:{NFSU2_TR(0x49b99c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49b9a1ull));
TAIL_STATIC(0x50d150u,50d);
}
B49b9a1:L49b9a1:{c.instructions+=10;NFSU2_TR(0x49b9a1);
u8 U[4];
w4(U+0,u32(0x2bbcca6bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49b9a6:{NFSU2_TR(0x49b9a6);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49b9a8:{NFSU2_TR(0x49b9a8);
u8 U[4];
w4(U+0,u32(0x34dc1bcfull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49b9ad:{NFSU2_TR(0x49b9ad);
u8 U[4];
w4(U+0,u32(0x34dc1bcfull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49b9b2:{NFSU2_TR(0x49b9b2);
u8 U[4];
w4(U+0,u32(0xd05fc3a3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49b9b7:{NFSU2_TR(0x49b9b7);
u8 U[4];
w4(U+0,u32(0x61cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49b9bc:{NFSU2_TR(0x49b9bc);
u8 U[4];
w4(U+0,u32(0xf770ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49b9c1:{NFSU2_TR(0x49b9c1);
u8 U[4];
w4(U+0,u32(0x78fa24ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49b9c6:{NFSU2_TR(0x49b9c6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49b9c7:{NFSU2_TR(0x49b9c7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49b9ccull));
TAIL_STATIC(0x558790u,558);
}
B49b9cc:L49b9cc:{c.instructions+=2;NFSU2_TR(0x49b9cc);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x30ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x30ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x30ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B49b9cf:{NFSU2_TR(0x49b9cf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49b9d0:L49b9d0:{c.instructions+=1;NFSU2_TR(0x49b9d0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49b9e0:L49b9e0:{c.instructions+=4;NFSU2_TR(0x49b9e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49b9e3:{NFSU2_TR(0x49b9e3);
u8 U[4];
w4(U+0,u32(0x13f0edebull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49b9e8:{NFSU2_TR(0x49b9e8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49b9e9:{NFSU2_TR(0x49b9e9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49b9eeull));
TAIL_STATIC(0x50c900u,50c);
}
B49b9ee:L49b9ee:{c.instructions+=2;NFSU2_TR(0x49b9ee);
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
B49b9f1:{NFSU2_TR(0x49b9f1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49ba00:L49ba00:{c.instructions+=8;NFSU2_TR(0x49ba00);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49ba01:{NFSU2_TR(0x49ba01);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49ba02:{NFSU2_TR(0x49ba02);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B49ba06:{NFSU2_TR(0x49ba06);
__builtin_memmove((R+24),(R+4),4);
}
B49ba08:{NFSU2_TR(0x49ba08);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49ba0b:{NFSU2_TR(0x49ba0b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((R+4),(U+0),4);
}
B49ba0e:{NFSU2_TR(0x49ba0e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49ba0f:{NFSU2_TR(0x49ba0f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49ba12ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B49ba12:L49ba12:{c.instructions+=2;NFSU2_TR(0x49ba12);
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
B49ba14:{NFSU2_TR(0x49ba14);
if(r1(R+518)){{goto L49ba3d;}}
}
B49ba16:L49ba16:{c.instructions+=4;NFSU2_TR(0x49ba16);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B49ba18:{NFSU2_TR(0x49ba18);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49ba19:{NFSU2_TR(0x49ba19);
__builtin_memmove((R+4),(R+24),4);
}
B49ba1b:{NFSU2_TR(0x49ba1b);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49ba1eull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B49ba1e:L49ba1e:{c.instructions+=3;NFSU2_TR(0x49ba1e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B49ba20:{NFSU2_TR(0x49ba20);
__builtin_memmove((R+4),(R+24),4);
}
B49ba22:{NFSU2_TR(0x49ba22);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49ba25ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B49ba25:L49ba25:{c.instructions+=1;NFSU2_TR(0x49ba25);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49ba2aull));
TAIL_STATIC(0x75bed4u,75b);
}
B49ba2a:L49ba2a:{c.instructions+=5;NFSU2_TR(0x49ba2a);
__builtin_memmove(gp(0x870cb8),(R+0),4);
}
B49ba2f:{NFSU2_TR(0x49ba2f);
s1(0x8709d1,u8(0x1ull));
}
B49ba36:{NFSU2_TR(0x49ba36);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B49ba38:{NFSU2_TR(0x49ba38);
__builtin_memmove((R+4),(R+24),4);
}
B49ba3a:{NFSU2_TR(0x49ba3a);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49ba3dull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B49ba3d:L49ba3d:{c.instructions+=3;NFSU2_TR(0x49ba3d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B49ba3e:{NFSU2_TR(0x49ba3e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49ba3f:{NFSU2_TR(0x49ba3f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49ba50:L49ba50:{c.instructions+=4;NFSU2_TR(0x49ba50);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49ba53:{NFSU2_TR(0x49ba53);
u8 U[4];
w4(U+0,u32(0x7d3930e7ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49ba58:{NFSU2_TR(0x49ba58);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49ba59:{NFSU2_TR(0x49ba59);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49ba5eull));
TAIL_STATIC(0x50c900u,50c);
}
B49ba5e:L49ba5e:{c.instructions+=2;NFSU2_TR(0x49ba5e);
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
B49ba61:{NFSU2_TR(0x49ba61);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49ba70:L49ba70:{c.instructions+=11;NFSU2_TR(0x49ba70);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49ba71:{NFSU2_TR(0x49ba71);
{u32 ea_=u32(u32(8850616u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B49ba77:{NFSU2_TR(0x49ba77);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x54ull))));
}
B49ba7a:{NFSU2_TR(0x49ba7a);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B49ba7e:{NFSU2_TR(0x49ba7e);
{u32 ea_=u32(u32(8873168u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B49ba84:{NFSU2_TR(0x49ba84);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
__builtin_memmove((R+0),(U+0),4);
}
B49ba88:{NFSU2_TR(0x49ba88);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B49ba8f:{NFSU2_TR(0x49ba8f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B49ba96:{NFSU2_TR(0x49ba96);
{u32 ea_=u32(r4(R+4)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B49ba99:{NFSU2_TR(0x49ba99);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49ba9a:{NFSU2_TR(0x49ba9a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49ba9full));
TAIL_STATIC(0x4ff550u,4ff);
}
B49ba9f:L49ba9f:{c.instructions+=2;NFSU2_TR(0x49ba9f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B49baa0:{NFSU2_TR(0x49baa0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49bab0:L49bab0:{c.instructions+=5;NFSU2_TR(0x49bab0);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49bab4:{NFSU2_TR(0x49bab4);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xc407210ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xc407210ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xc407210ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B49bab9:{NFSU2_TR(0x49bab9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49baba:{NFSU2_TR(0x49baba);
__builtin_memmove((R+24),(R+4),4);
}
B49babc:{NFSU2_TR(0x49babc);
if(r1(R+518)){{goto L49bacc;}}
}
B49babe:L49babe:{c.instructions+=2;NFSU2_TR(0x49babe);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x9120409eull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x9120409eull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x9120409eull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B49bac3:{NFSU2_TR(0x49bac3);
if(r1(R+518)){{goto L49bacc;}}
}
B49bac5:L49bac5:{c.instructions+=2;NFSU2_TR(0x49bac5);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xb5971bf1ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xb5971bf1ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xb5971bf1ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B49baca:{NFSU2_TR(0x49baca);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49bae4;}}
}
B49bacc:L49bacc:{c.instructions+=4;NFSU2_TR(0x49bacc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B49bace:{NFSU2_TR(0x49bace);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49bacf:{NFSU2_TR(0x49bacf);
__builtin_memmove((R+4),(R+24),4);
}
B49bad1:{NFSU2_TR(0x49bad1);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49bad4ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B49bad4:L49bad4:{c.instructions+=3;NFSU2_TR(0x49bad4);
__builtin_memmove((R+0),gp(0x8764d4),4);
}
B49bad9:{NFSU2_TR(0x49bad9);
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
B49badb:{NFSU2_TR(0x49badb);
if(r1(R+518)){{goto L49bae4;}}
}
B49badd:L49badd:{c.instructions+=1;NFSU2_TR(0x49badd);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
s4(0x870cbc,u32(u32(m4(0x870cbc))^u32(u32(0x1ull))));
w1(R+519,u8(s32(m4(0x870cbc))<s32(u32(0x0ull))));
w1(R+518,u8((m4(0x870cbc))==(u32(0x0ull))));
w4(U+0,u32(u32(m4(0x870cbc))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B49bae4:L49bae4:{c.instructions+=3;NFSU2_TR(0x49bae4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B49bae6:{NFSU2_TR(0x49bae6);
__builtin_memmove((R+4),(R+24),4);
}
B49bae8:{NFSU2_TR(0x49bae8);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49baebull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B49baeb:L49baeb:{c.instructions+=2;NFSU2_TR(0x49baeb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49baec:{NFSU2_TR(0x49baec);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49baf0:L49baf0:{c.instructions+=6;NFSU2_TR(0x49baf0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49baf1:{NFSU2_TR(0x49baf1);
__builtin_memmove((R+24),(R+4),4);
}
B49baf3:{NFSU2_TR(0x49baf3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49baf6:{NFSU2_TR(0x49baf6);
u8 U[4];
w4(U+0,u32(0x8fe9288eull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49bafb:{NFSU2_TR(0x49bafb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49bafc:{NFSU2_TR(0x49bafc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49bb01ull));
TAIL_STATIC(0x50c900u,50c);
}
B49bb01:L49bb01:{c.instructions+=9;NFSU2_TR(0x49bb01);
__builtin_memmove((R+4),gp(0x870cbc),4);
}
B49bb07:{NFSU2_TR(0x49bb07);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B49bb0a:{NFSU2_TR(0x49bb0a);
w1(R+512,u8((r4(R+4))!=(u32(0x0ull))));
w4(R+4,u32(0-u32(r4(R+4))));
}
B49bb0c:{NFSU2_TR(0x49bb0c);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(R+4))));
w4(R+4,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B49bb0e:{NFSU2_TR(0x49bb0e);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xabcc822eull))));
}
B49bb14:{NFSU2_TR(0x49bb14);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xb55e7678ull))));
}
B49bb1a:{NFSU2_TR(0x49bb1a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49bb1b:{NFSU2_TR(0x49bb1b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49bb1c:{NFSU2_TR(0x49bb1c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49bb21ull));
TAIL_STATIC(0x50c900u,50c);
}
B49bb21:L49bb21:{c.instructions+=3;NFSU2_TR(0x49bb21);
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
B49bb24:{NFSU2_TR(0x49bb24);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49bb25:{NFSU2_TR(0x49bb25);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49bb30:L49bb30:{c.instructions+=8;NFSU2_TR(0x49bb30);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49bb31:{NFSU2_TR(0x49bb31);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49bb32:{NFSU2_TR(0x49bb32);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B49bb36:{NFSU2_TR(0x49bb36);
__builtin_memmove((R+24),(R+4),4);
}
B49bb38:{NFSU2_TR(0x49bb38);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49bb3b:{NFSU2_TR(0x49bb3b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((R+4),(U+0),4);
}
B49bb3e:{NFSU2_TR(0x49bb3e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49bb3f:{NFSU2_TR(0x49bb3f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49bb42ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B49bb42:L49bb42:{c.instructions+=2;NFSU2_TR(0x49bb42);
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
B49bb44:{NFSU2_TR(0x49bb44);
if(r1(R+518)){{goto L49bb66;}}
}
B49bb46:L49bb46:{c.instructions+=4;NFSU2_TR(0x49bb46);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B49bb48:{NFSU2_TR(0x49bb48);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49bb49:{NFSU2_TR(0x49bb49);
__builtin_memmove((R+4),(R+24),4);
}
B49bb4b:{NFSU2_TR(0x49bb4b);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49bb4eull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B49bb4e:L49bb4e:{c.instructions+=3;NFSU2_TR(0x49bb4e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B49bb50:{NFSU2_TR(0x49bb50);
__builtin_memmove((R+4),(R+24),4);
}
B49bb52:{NFSU2_TR(0x49bb52);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49bb55ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B49bb55:L49bb55:{c.instructions+=1;NFSU2_TR(0x49bb55);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49bb5aull));
TAIL_STATIC(0x75bed4u,75b);
}
B49bb5a:L49bb5a:{c.instructions+=4;NFSU2_TR(0x49bb5a);
__builtin_memmove(gp(0x870cc0),(R+0),4);
}
B49bb5f:{NFSU2_TR(0x49bb5f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B49bb61:{NFSU2_TR(0x49bb61);
__builtin_memmove((R+4),(R+24),4);
}
B49bb63:{NFSU2_TR(0x49bb63);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49bb66ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B49bb66:L49bb66:{c.instructions+=3;NFSU2_TR(0x49bb66);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B49bb67:{NFSU2_TR(0x49bb67);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49bb68:{NFSU2_TR(0x49bb68);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49bb70:L49bb70:{c.instructions+=4;NFSU2_TR(0x49bb70);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49bb73:{NFSU2_TR(0x49bb73);
u8 U[4];
w4(U+0,u32(0xa7a683acull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49bb78:{NFSU2_TR(0x49bb78);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49bb79:{NFSU2_TR(0x49bb79);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49bb7eull));
TAIL_STATIC(0x50c900u,50c);
}
B49bb7e:L49bb7e:{c.instructions+=2;NFSU2_TR(0x49bb7e);
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
B49bb81:{NFSU2_TR(0x49bb81);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49bb90:L49bb90:{c.instructions+=11;NFSU2_TR(0x49bb90);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49bb91:{NFSU2_TR(0x49bb91);
{u32 ea_=u32(u32(8850624u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B49bb97:{NFSU2_TR(0x49bb97);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x54ull))));
}
B49bb9a:{NFSU2_TR(0x49bb9a);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B49bb9e:{NFSU2_TR(0x49bb9e);
{u32 ea_=u32(u32(8873176u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B49bba4:{NFSU2_TR(0x49bba4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
__builtin_memmove((R+0),(U+0),4);
}
B49bba8:{NFSU2_TR(0x49bba8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B49bbaf:{NFSU2_TR(0x49bbaf);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B49bbb6:{NFSU2_TR(0x49bbb6);
{u32 ea_=u32(r4(R+4)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B49bbb9:{NFSU2_TR(0x49bbb9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49bbba:{NFSU2_TR(0x49bbba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49bbbfull));
TAIL_STATIC(0x4ff550u,4ff);
}
B49bbbf:L49bbbf:{c.instructions+=2;NFSU2_TR(0x49bbbf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B49bbc0:{NFSU2_TR(0x49bbc0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49bbd0:L49bbd0:{c.instructions+=5;NFSU2_TR(0x49bbd0);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49bbd4:{NFSU2_TR(0x49bbd4);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xc407210ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xc407210ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xc407210ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B49bbd9:{NFSU2_TR(0x49bbd9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49bbda:{NFSU2_TR(0x49bbda);
__builtin_memmove((R+24),(R+4),4);
}
B49bbdc:{NFSU2_TR(0x49bbdc);
if(r1(R+518)){{goto L49bbec;}}
}
B49bbde:L49bbde:{c.instructions+=2;NFSU2_TR(0x49bbde);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x9120409eull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x9120409eull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x9120409eull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B49bbe3:{NFSU2_TR(0x49bbe3);
if(r1(R+518)){{goto L49bbec;}}
}
B49bbe5:L49bbe5:{c.instructions+=2;NFSU2_TR(0x49bbe5);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xb5971bf1ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xb5971bf1ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xb5971bf1ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B49bbea:{NFSU2_TR(0x49bbea);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49bc04;}}
}
B49bbec:L49bbec:{c.instructions+=4;NFSU2_TR(0x49bbec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B49bbee:{NFSU2_TR(0x49bbee);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49bbef:{NFSU2_TR(0x49bbef);
__builtin_memmove((R+4),(R+24),4);
}
B49bbf1:{NFSU2_TR(0x49bbf1);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49bbf4ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B49bbf4:L49bbf4:{c.instructions+=3;NFSU2_TR(0x49bbf4);
__builtin_memmove((R+0),gp(0x8764dc),4);
}
B49bbf9:{NFSU2_TR(0x49bbf9);
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
B49bbfb:{NFSU2_TR(0x49bbfb);
if(r1(R+518)){{goto L49bc04;}}
}
B49bbfd:L49bbfd:{c.instructions+=1;NFSU2_TR(0x49bbfd);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
s4(0x870cc4,u32(u32(m4(0x870cc4))^u32(u32(0x1ull))));
w1(R+519,u8(s32(m4(0x870cc4))<s32(u32(0x0ull))));
w1(R+518,u8((m4(0x870cc4))==(u32(0x0ull))));
w4(U+0,u32(u32(m4(0x870cc4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B49bc04:L49bc04:{c.instructions+=3;NFSU2_TR(0x49bc04);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B49bc06:{NFSU2_TR(0x49bc06);
__builtin_memmove((R+4),(R+24),4);
}
B49bc08:{NFSU2_TR(0x49bc08);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49bc0bull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B49bc0b:L49bc0b:{c.instructions+=2;NFSU2_TR(0x49bc0b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49bc0c:{NFSU2_TR(0x49bc0c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49bc10:L49bc10:{c.instructions+=6;NFSU2_TR(0x49bc10);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49bc11:{NFSU2_TR(0x49bc11);
__builtin_memmove((R+24),(R+4),4);
}
B49bc13:{NFSU2_TR(0x49bc13);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49bc16:{NFSU2_TR(0x49bc16);
u8 U[4];
w4(U+0,u32(0xcfbedb50ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49bc1b:{NFSU2_TR(0x49bc1b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49bc1c:{NFSU2_TR(0x49bc1c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49bc21ull));
TAIL_STATIC(0x50c900u,50c);
}
B49bc21:L49bc21:{c.instructions+=9;NFSU2_TR(0x49bc21);
__builtin_memmove((R+4),gp(0x870cc4),4);
}
B49bc27:{NFSU2_TR(0x49bc27);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B49bc2a:{NFSU2_TR(0x49bc2a);
w1(R+512,u8((r4(R+4))!=(u32(0x0ull))));
w4(R+4,u32(0-u32(r4(R+4))));
}
B49bc2c:{NFSU2_TR(0x49bc2c);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(R+4))));
w4(R+4,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B49bc2e:{NFSU2_TR(0x49bc2e);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xffff3942ull))));
}
B49bc34:{NFSU2_TR(0x49bc34);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xccfaull))));
}
B49bc3a:{NFSU2_TR(0x49bc3a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49bc3b:{NFSU2_TR(0x49bc3b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49bc3c:{NFSU2_TR(0x49bc3c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49bc41ull));
TAIL_STATIC(0x50c900u,50c);
}
B49bc41:L49bc41:{c.instructions+=3;NFSU2_TR(0x49bc41);
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
B49bc44:{NFSU2_TR(0x49bc44);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49bc45:{NFSU2_TR(0x49bc45);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49bc50:L49bc50:{c.instructions+=5;NFSU2_TR(0x49bc50);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49bc54:{NFSU2_TR(0x49bc54);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xc407210ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xc407210ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xc407210ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B49bc59:{NFSU2_TR(0x49bc59);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49bc5a:{NFSU2_TR(0x49bc5a);
__builtin_memmove((R+24),(R+4),4);
}
B49bc5c:{NFSU2_TR(0x49bc5c);
if(r1(R+518)){{goto L49bc6c;}}
}
B49bc5e:L49bc5e:{c.instructions+=2;NFSU2_TR(0x49bc5e);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x9120409eull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x9120409eull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x9120409eull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B49bc63:{NFSU2_TR(0x49bc63);
if(r1(R+518)){{goto L49bc6c;}}
}
B49bc65:L49bc65:{c.instructions+=2;NFSU2_TR(0x49bc65);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xb5971bf1ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xb5971bf1ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xb5971bf1ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B49bc6a:{NFSU2_TR(0x49bc6a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49bc84;}}
}
B49bc6c:L49bc6c:{c.instructions+=4;NFSU2_TR(0x49bc6c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B49bc6e:{NFSU2_TR(0x49bc6e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49bc6f:{NFSU2_TR(0x49bc6f);
__builtin_memmove((R+4),(R+24),4);
}
B49bc71:{NFSU2_TR(0x49bc71);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49bc74ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B49bc74:L49bc74:{c.instructions+=3;NFSU2_TR(0x49bc74);
__builtin_memmove((R+0),gp(0x876510),4);
}
B49bc79:{NFSU2_TR(0x49bc79);
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
B49bc7b:{NFSU2_TR(0x49bc7b);
if(r1(R+518)){{goto L49bc84;}}
}
B49bc7d:L49bc7d:{c.instructions+=1;NFSU2_TR(0x49bc7d);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
s4(0x870cf8,u32(u32(m4(0x870cf8))^u32(u32(0x1ull))));
w1(R+519,u8(s32(m4(0x870cf8))<s32(u32(0x0ull))));
w1(R+518,u8((m4(0x870cf8))==(u32(0x0ull))));
w4(U+0,u32(u32(m4(0x870cf8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B49bc84:L49bc84:{c.instructions+=3;NFSU2_TR(0x49bc84);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B49bc86:{NFSU2_TR(0x49bc86);
__builtin_memmove((R+4),(R+24),4);
}
B49bc88:{NFSU2_TR(0x49bc88);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49bc8bull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B49bc8b:L49bc8b:{c.instructions+=2;NFSU2_TR(0x49bc8b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49bc8c:{NFSU2_TR(0x49bc8c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49bc90:L49bc90:{c.instructions+=6;NFSU2_TR(0x49bc90);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49bc91:{NFSU2_TR(0x49bc91);
__builtin_memmove((R+24),(R+4),4);
}
B49bc93:{NFSU2_TR(0x49bc93);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49bc96:{NFSU2_TR(0x49bc96);
u8 U[4];
w4(U+0,u32(0x4ac50bcfull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49bc9b:{NFSU2_TR(0x49bc9b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49bc9c:{NFSU2_TR(0x49bc9c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49bca1ull));
TAIL_STATIC(0x50c900u,50c);
}
B49bca1:L49bca1:{c.instructions+=9;NFSU2_TR(0x49bca1);
__builtin_memmove((R+4),gp(0x870cf8),4);
}
B49bca7:{NFSU2_TR(0x49bca7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B49bcaa:{NFSU2_TR(0x49bcaa);
w1(R+512,u8((r4(R+4))!=(u32(0x0ull))));
w4(R+4,u32(0-u32(r4(R+4))));
}
B49bcac:{NFSU2_TR(0x49bcac);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(R+4))));
w4(R+4,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B49bcae:{NFSU2_TR(0x49bcae);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xabcc822eull))));
}
B49bcb4:{NFSU2_TR(0x49bcb4);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xb55e7678ull))));
}
B49bcba:{NFSU2_TR(0x49bcba);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49bcbb:{NFSU2_TR(0x49bcbb);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49bcbc:{NFSU2_TR(0x49bcbc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49bcc1ull));
TAIL_STATIC(0x50c900u,50c);
}
B49bcc1:L49bcc1:{c.instructions+=3;NFSU2_TR(0x49bcc1);
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
B49bcc4:{NFSU2_TR(0x49bcc4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49bcc5:{NFSU2_TR(0x49bcc5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49bcd0:L49bcd0:{c.instructions+=5;NFSU2_TR(0x49bcd0);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49bcd4:{NFSU2_TR(0x49bcd4);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xc407210ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xc407210ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xc407210ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B49bcd9:{NFSU2_TR(0x49bcd9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49bcda:{NFSU2_TR(0x49bcda);
__builtin_memmove((R+24),(R+4),4);
}
B49bcdc:{NFSU2_TR(0x49bcdc);
if(r1(R+518)){{goto L49bcec;}}
}
B49bcde:L49bcde:{c.instructions+=2;NFSU2_TR(0x49bcde);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x9120409eull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x9120409eull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x9120409eull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B49bce3:{NFSU2_TR(0x49bce3);
if(r1(R+518)){{goto L49bcec;}}
}
B49bce5:L49bce5:{c.instructions+=2;NFSU2_TR(0x49bce5);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xb5971bf1ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xb5971bf1ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xb5971bf1ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B49bcea:{NFSU2_TR(0x49bcea);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49bd04;}}
}
B49bcec:L49bcec:{c.instructions+=4;NFSU2_TR(0x49bcec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B49bcee:{NFSU2_TR(0x49bcee);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49bcef:{NFSU2_TR(0x49bcef);
__builtin_memmove((R+4),(R+24),4);
}
B49bcf1:{NFSU2_TR(0x49bcf1);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49bcf4ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B49bcf4:L49bcf4:{c.instructions+=3;NFSU2_TR(0x49bcf4);
__builtin_memmove((R+0),gp(0x8764e8),4);
}
B49bcf9:{NFSU2_TR(0x49bcf9);
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
B49bcfb:{NFSU2_TR(0x49bcfb);
if(r1(R+518)){{goto L49bd04;}}
}
B49bcfd:L49bcfd:{c.instructions+=1;NFSU2_TR(0x49bcfd);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
s4(0x870cd0,u32(u32(m4(0x870cd0))^u32(u32(0x1ull))));
w1(R+519,u8(s32(m4(0x870cd0))<s32(u32(0x0ull))));
w1(R+518,u8((m4(0x870cd0))==(u32(0x0ull))));
w4(U+0,u32(u32(m4(0x870cd0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B49bd04:L49bd04:{c.instructions+=3;NFSU2_TR(0x49bd04);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B49bd06:{NFSU2_TR(0x49bd06);
__builtin_memmove((R+4),(R+24),4);
}
B49bd08:{NFSU2_TR(0x49bd08);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49bd0bull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B49bd0b:L49bd0b:{c.instructions+=2;NFSU2_TR(0x49bd0b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49bd0c:{NFSU2_TR(0x49bd0c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49bd10:L49bd10:{c.instructions+=6;NFSU2_TR(0x49bd10);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49bd11:{NFSU2_TR(0x49bd11);
__builtin_memmove((R+24),(R+4),4);
}
B49bd13:{NFSU2_TR(0x49bd13);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49bd16:{NFSU2_TR(0x49bd16);
u8 U[4];
w4(U+0,u32(0x6cc3750ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49bd1b:{NFSU2_TR(0x49bd1b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49bd1c:{NFSU2_TR(0x49bd1c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49bd21ull));
TAIL_STATIC(0x50c900u,50c);
}
B49bd21:L49bd21:{c.instructions+=9;NFSU2_TR(0x49bd21);
__builtin_memmove((R+4),gp(0x870cd0),4);
}
B49bd27:{NFSU2_TR(0x49bd27);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B49bd2a:{NFSU2_TR(0x49bd2a);
w1(R+512,u8((r4(R+4))!=(u32(0x0ull))));
w4(R+4,u32(0-u32(r4(R+4))));
}
B49bd2c:{NFSU2_TR(0x49bd2c);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(R+4))));
w4(R+4,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B49bd2e:{NFSU2_TR(0x49bd2e);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xffff3942ull))));
}
B49bd34:{NFSU2_TR(0x49bd34);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xccfaull))));
}
B49bd3a:{NFSU2_TR(0x49bd3a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49bd3b:{NFSU2_TR(0x49bd3b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49bd3c:{NFSU2_TR(0x49bd3c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49bd41ull));
TAIL_STATIC(0x50c900u,50c);
}
B49bd41:L49bd41:{c.instructions+=3;NFSU2_TR(0x49bd41);
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
B49bd44:{NFSU2_TR(0x49bd44);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49bd45:{NFSU2_TR(0x49bd45);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49bd50:L49bd50:{c.instructions+=8;NFSU2_TR(0x49bd50);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49bd51:{NFSU2_TR(0x49bd51);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49bd52:{NFSU2_TR(0x49bd52);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B49bd56:{NFSU2_TR(0x49bd56);
__builtin_memmove((R+24),(R+4),4);
}
B49bd58:{NFSU2_TR(0x49bd58);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49bd5b:{NFSU2_TR(0x49bd5b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((R+4),(U+0),4);
}
B49bd5e:{NFSU2_TR(0x49bd5e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49bd5f:{NFSU2_TR(0x49bd5f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49bd62ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B49bd62:L49bd62:{c.instructions+=2;NFSU2_TR(0x49bd62);
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
B49bd64:{NFSU2_TR(0x49bd64);
if(r1(R+518)){{goto L49bd86;}}
}
B49bd66:L49bd66:{c.instructions+=4;NFSU2_TR(0x49bd66);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B49bd68:{NFSU2_TR(0x49bd68);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49bd69:{NFSU2_TR(0x49bd69);
__builtin_memmove((R+4),(R+24),4);
}
B49bd6b:{NFSU2_TR(0x49bd6b);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49bd6eull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B49bd6e:L49bd6e:{c.instructions+=3;NFSU2_TR(0x49bd6e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B49bd70:{NFSU2_TR(0x49bd70);
__builtin_memmove((R+4),(R+24),4);
}
B49bd72:{NFSU2_TR(0x49bd72);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49bd75ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B49bd75:L49bd75:{c.instructions+=1;NFSU2_TR(0x49bd75);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49bd7aull));
TAIL_STATIC(0x75bed4u,75b);
}
B49bd7a:L49bd7a:{c.instructions+=4;NFSU2_TR(0x49bd7a);
__builtin_memmove(gp(0x870cf4),(R+0),4);
}
B49bd7f:{NFSU2_TR(0x49bd7f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B49bd81:{NFSU2_TR(0x49bd81);
__builtin_memmove((R+4),(R+24),4);
}
B49bd83:{NFSU2_TR(0x49bd83);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49bd86ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B49bd86:L49bd86:{c.instructions+=3;NFSU2_TR(0x49bd86);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B49bd87:{NFSU2_TR(0x49bd87);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49bd88:{NFSU2_TR(0x49bd88);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49bd90:L49bd90:{c.instructions+=4;NFSU2_TR(0x49bd90);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49bd93:{NFSU2_TR(0x49bd93);
u8 U[4];
w4(U+0,u32(0xbde2e94bull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49bd98:{NFSU2_TR(0x49bd98);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49bd99:{NFSU2_TR(0x49bd99);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49bd9eull));
TAIL_STATIC(0x50c900u,50c);
}
B49bd9e:L49bd9e:{c.instructions+=2;NFSU2_TR(0x49bd9e);
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
B49bda1:{NFSU2_TR(0x49bda1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49bdb0:L49bdb0:{c.instructions+=11;NFSU2_TR(0x49bdb0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49bdb1:{NFSU2_TR(0x49bdb1);
{u32 ea_=u32(u32(8850676u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B49bdb7:{NFSU2_TR(0x49bdb7);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x54ull))));
}
B49bdba:{NFSU2_TR(0x49bdba);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B49bdbe:{NFSU2_TR(0x49bdbe);
{u32 ea_=u32(u32(8873228u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B49bdc4:{NFSU2_TR(0x49bdc4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
__builtin_memmove((R+0),(U+0),4);
}
B49bdc8:{NFSU2_TR(0x49bdc8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B49bdcf:{NFSU2_TR(0x49bdcf);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B49bdd6:{NFSU2_TR(0x49bdd6);
{u32 ea_=u32(r4(R+4)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B49bdd9:{NFSU2_TR(0x49bdd9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49bdda:{NFSU2_TR(0x49bdda);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49bddfull));
TAIL_STATIC(0x4ff550u,4ff);
}
B49bddf:L49bddf:{c.instructions+=2;NFSU2_TR(0x49bddf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B49bde0:{NFSU2_TR(0x49bde0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49bdf0:L49bdf0:{c.instructions+=8;NFSU2_TR(0x49bdf0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49bdf1:{NFSU2_TR(0x49bdf1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49bdf2:{NFSU2_TR(0x49bdf2);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B49bdf6:{NFSU2_TR(0x49bdf6);
__builtin_memmove((R+24),(R+4),4);
}
B49bdf8:{NFSU2_TR(0x49bdf8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49bdfb:{NFSU2_TR(0x49bdfb);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x54ull))));
__builtin_memmove((R+4),(U+0),4);
}
B49bdfe:{NFSU2_TR(0x49bdfe);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49bdff:{NFSU2_TR(0x49bdff);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49be02ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B49be02:L49be02:{c.instructions+=2;NFSU2_TR(0x49be02);
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
B49be04:{NFSU2_TR(0x49be04);
if(r1(R+518)){{goto L49be2d;}}
}
B49be06:L49be06:{c.instructions+=4;NFSU2_TR(0x49be06);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B49be08:{NFSU2_TR(0x49be08);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49be09:{NFSU2_TR(0x49be09);
__builtin_memmove((R+4),(R+24),4);
}
B49be0b:{NFSU2_TR(0x49be0b);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49be0eull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B49be0e:L49be0e:{c.instructions+=3;NFSU2_TR(0x49be0e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B49be10:{NFSU2_TR(0x49be10);
__builtin_memmove((R+4),(R+24),4);
}
B49be12:{NFSU2_TR(0x49be12);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49be15ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B49be15:L49be15:{c.instructions+=1;NFSU2_TR(0x49be15);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49be1aull));
TAIL_STATIC(0x75bed4u,75b);
}
B49be1a:L49be1a:{c.instructions+=5;NFSU2_TR(0x49be1a);
__builtin_memmove(gp(0x870cd4),(R+0),4);
}
B49be1f:{NFSU2_TR(0x49be1f);
s1(0x8709d1,u8(0x1ull));
}
B49be26:{NFSU2_TR(0x49be26);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B49be28:{NFSU2_TR(0x49be28);
__builtin_memmove((R+4),(R+24),4);
}
B49be2a:{NFSU2_TR(0x49be2a);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49be2dull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B49be2d:L49be2d:{c.instructions+=3;NFSU2_TR(0x49be2d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B49be2e:{NFSU2_TR(0x49be2e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49be2f:{NFSU2_TR(0x49be2f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49be40:L49be40:{c.instructions+=4;NFSU2_TR(0x49be40);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49be43:{NFSU2_TR(0x49be43);
u8 U[4];
w4(U+0,u32(0x2a2a4ab3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49be48:{NFSU2_TR(0x49be48);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49be49:{NFSU2_TR(0x49be49);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49be4eull));
TAIL_STATIC(0x50c900u,50c);
}
B49be4e:L49be4e:{c.instructions+=2;NFSU2_TR(0x49be4e);
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
B49be51:{NFSU2_TR(0x49be51);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49be60:L49be60:{c.instructions+=11;NFSU2_TR(0x49be60);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49be61:{NFSU2_TR(0x49be61);
{u32 ea_=u32(u32(8850644u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B49be67:{NFSU2_TR(0x49be67);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x54ull))));
}
B49be6a:{NFSU2_TR(0x49be6a);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B49be6e:{NFSU2_TR(0x49be6e);
{u32 ea_=u32(u32(8873196u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B49be74:{NFSU2_TR(0x49be74);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
__builtin_memmove((R+0),(U+0),4);
}
B49be78:{NFSU2_TR(0x49be78);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B49be7f:{NFSU2_TR(0x49be7f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B49be86:{NFSU2_TR(0x49be86);
{u32 ea_=u32(r4(R+4)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B49be89:{NFSU2_TR(0x49be89);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49be8a:{NFSU2_TR(0x49be8a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49be8full));
TAIL_STATIC(0x4ff550u,4ff);
}
B49be8f:L49be8f:{c.instructions+=2;NFSU2_TR(0x49be8f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B49be90:{NFSU2_TR(0x49be90);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49bea0:L49bea0:{c.instructions+=5;NFSU2_TR(0x49bea0);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49bea4:{NFSU2_TR(0x49bea4);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xc407210ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xc407210ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xc407210ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B49bea9:{NFSU2_TR(0x49bea9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49beaa:{NFSU2_TR(0x49beaa);
__builtin_memmove((R+24),(R+4),4);
}
B49beac:{NFSU2_TR(0x49beac);
if(r1(R+518)){{goto L49bebc;}}
}
B49beae:L49beae:{c.instructions+=2;NFSU2_TR(0x49beae);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x9120409eull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x9120409eull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x9120409eull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B49beb3:{NFSU2_TR(0x49beb3);
if(r1(R+518)){{goto L49bebc;}}
}
B49beb5:L49beb5:{c.instructions+=2;NFSU2_TR(0x49beb5);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xb5971bf1ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xb5971bf1ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xb5971bf1ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B49beba:{NFSU2_TR(0x49beba);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49bee5;}}
}
B49bebc:L49bebc:{c.instructions+=4;NFSU2_TR(0x49bebc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B49bebe:{NFSU2_TR(0x49bebe);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49bebf:{NFSU2_TR(0x49bebf);
__builtin_memmove((R+4),(R+24),4);
}
B49bec1:{NFSU2_TR(0x49bec1);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49bec4ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B49bec4:L49bec4:{c.instructions+=3;NFSU2_TR(0x49bec4);
__builtin_memmove((R+0),gp(0x8764f8),4);
}
B49bec9:{NFSU2_TR(0x49bec9);
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
B49becb:{NFSU2_TR(0x49becb);
if(r1(R+518)){{goto L49bee5;}}
}
B49becd:L49becd:{c.instructions+=5;NFSU2_TR(0x49becd);
__builtin_memmove((R+4),gp(0x870ce0),4);
}
B49bed3:{NFSU2_TR(0x49bed3);
w4(R+0,u32(0x1ull));
}
B49bed8:{NFSU2_TR(0x49bed8);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B49beda:{NFSU2_TR(0x49beda);
__builtin_memmove(gp(0x870ce0),(R+4),4);
}
B49bee0:{NFSU2_TR(0x49bee0);
__builtin_memmove(gp(0x8709d1),(R+0),1);
}
B49bee5:L49bee5:{c.instructions+=3;NFSU2_TR(0x49bee5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B49bee7:{NFSU2_TR(0x49bee7);
__builtin_memmove((R+4),(R+24),4);
}
B49bee9:{NFSU2_TR(0x49bee9);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49beecull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B49beec:L49beec:{c.instructions+=2;NFSU2_TR(0x49beec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49beed:{NFSU2_TR(0x49beed);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49bef0:L49bef0:{c.instructions+=6;NFSU2_TR(0x49bef0);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49bef1:{NFSU2_TR(0x49bef1);
__builtin_memmove((R+24),(R+4),4);
}
B49bef3:{NFSU2_TR(0x49bef3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49bef6:{NFSU2_TR(0x49bef6);
u8 U[4];
w4(U+0,u32(0x6f2c7417ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49befb:{NFSU2_TR(0x49befb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49befc:{NFSU2_TR(0x49befc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49bf01ull));
TAIL_STATIC(0x50c900u,50c);
}
B49bf01:L49bf01:{c.instructions+=9;NFSU2_TR(0x49bf01);
__builtin_memmove((R+4),gp(0x870ce0),4);
}
B49bf07:{NFSU2_TR(0x49bf07);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B49bf0a:{NFSU2_TR(0x49bf0a);
w1(R+512,u8((r4(R+4))!=(u32(0x0ull))));
w4(R+4,u32(0-u32(r4(R+4))));
}
B49bf0c:{NFSU2_TR(0x49bf0c);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(R+4))));
w4(R+4,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B49bf0e:{NFSU2_TR(0x49bf0e);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xffff3942ull))));
}
B49bf14:{NFSU2_TR(0x49bf14);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xccfaull))));
}
B49bf1a:{NFSU2_TR(0x49bf1a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49bf1b:{NFSU2_TR(0x49bf1b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49bf1c:{NFSU2_TR(0x49bf1c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49bf21ull));
TAIL_STATIC(0x50c900u,50c);
}
B49bf21:L49bf21:{c.instructions+=3;NFSU2_TR(0x49bf21);
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
B49bf24:{NFSU2_TR(0x49bf24);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49bf25:{NFSU2_TR(0x49bf25);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49bf30:L49bf30:{c.instructions+=5;NFSU2_TR(0x49bf30);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49bf34:{NFSU2_TR(0x49bf34);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xc407210ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xc407210ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xc407210ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B49bf39:{NFSU2_TR(0x49bf39);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49bf3a:{NFSU2_TR(0x49bf3a);
__builtin_memmove((R+24),(R+4),4);
}
B49bf3c:{NFSU2_TR(0x49bf3c);
if(r1(R+518)){{goto L49bf4c;}}
}
B49bf3e:L49bf3e:{c.instructions+=2;NFSU2_TR(0x49bf3e);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x9120409eull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x9120409eull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x9120409eull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B49bf43:{NFSU2_TR(0x49bf43);
if(r1(R+518)){{goto L49bf4c;}}
}
B49bf45:L49bf45:{c.instructions+=2;NFSU2_TR(0x49bf45);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xb5971bf1ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xb5971bf1ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xb5971bf1ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B49bf4a:{NFSU2_TR(0x49bf4a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49bf75;}}
}
B49bf4c:L49bf4c:{c.instructions+=4;NFSU2_TR(0x49bf4c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B49bf4e:{NFSU2_TR(0x49bf4e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49bf4f:{NFSU2_TR(0x49bf4f);
__builtin_memmove((R+4),(R+24),4);
}
B49bf51:{NFSU2_TR(0x49bf51);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49bf54ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B49bf54:L49bf54:{c.instructions+=3;NFSU2_TR(0x49bf54);
__builtin_memmove((R+0),gp(0x8764fc),4);
}
B49bf59:{NFSU2_TR(0x49bf59);
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
B49bf5b:{NFSU2_TR(0x49bf5b);
if(r1(R+518)){{goto L49bf75;}}
}
B49bf5d:L49bf5d:{c.instructions+=5;NFSU2_TR(0x49bf5d);
__builtin_memmove((R+4),gp(0x870ce4),4);
}
B49bf63:{NFSU2_TR(0x49bf63);
w4(R+0,u32(0x1ull));
}
B49bf68:{NFSU2_TR(0x49bf68);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B49bf6a:{NFSU2_TR(0x49bf6a);
__builtin_memmove(gp(0x870ce4),(R+4),4);
}
B49bf70:{NFSU2_TR(0x49bf70);
__builtin_memmove(gp(0x8709d1),(R+0),1);
}
B49bf75:L49bf75:{c.instructions+=3;NFSU2_TR(0x49bf75);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B49bf77:{NFSU2_TR(0x49bf77);
__builtin_memmove((R+4),(R+24),4);
}
B49bf79:{NFSU2_TR(0x49bf79);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49bf7cull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B49bf7c:L49bf7c:{c.instructions+=2;NFSU2_TR(0x49bf7c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49bf7d:{NFSU2_TR(0x49bf7d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49bf80:L49bf80:{c.instructions+=6;NFSU2_TR(0x49bf80);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49bf81:{NFSU2_TR(0x49bf81);
__builtin_memmove((R+24),(R+4),4);
}
B49bf83:{NFSU2_TR(0x49bf83);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49bf86:{NFSU2_TR(0x49bf86);
u8 U[4];
w4(U+0,u32(0x62925361ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49bf8b:{NFSU2_TR(0x49bf8b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49bf8c:{NFSU2_TR(0x49bf8c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49bf91ull));
TAIL_STATIC(0x50c900u,50c);
}
B49bf91:L49bf91:{c.instructions+=9;NFSU2_TR(0x49bf91);
__builtin_memmove((R+4),gp(0x870ce4),4);
}
B49bf97:{NFSU2_TR(0x49bf97);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B49bf9a:{NFSU2_TR(0x49bf9a);
w1(R+512,u8((r4(R+4))!=(u32(0x0ull))));
w4(R+4,u32(0-u32(r4(R+4))));
}
B49bf9c:{NFSU2_TR(0x49bf9c);
u8 U[8];
w4(U+0,u32(r1(R+512)));
w4(U+4,u32(u32(r4(R+4))-u32(r4(R+4))));
w4(R+4,u32(u32(r4(U+4))-u32(r4(U+0))));
}
B49bf9e:{NFSU2_TR(0x49bf9e);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xffff3942ull))));
}
B49bfa4:{NFSU2_TR(0x49bfa4);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xccfaull))));
}
B49bfaa:{NFSU2_TR(0x49bfaa);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49bfab:{NFSU2_TR(0x49bfab);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49bfac:{NFSU2_TR(0x49bfac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49bfb1ull));
TAIL_STATIC(0x50c900u,50c);
}
B49bfb1:L49bfb1:{c.instructions+=3;NFSU2_TR(0x49bfb1);
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
B49bfb4:{NFSU2_TR(0x49bfb4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49bfb5:{NFSU2_TR(0x49bfb5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B49bfc0:L49bfc0:{c.instructions+=5;NFSU2_TR(0x49bfc0);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B49bfc4:{NFSU2_TR(0x49bfc4);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xc407210ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xc407210ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xc407210ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B49bfc9:{NFSU2_TR(0x49bfc9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49bfca:{NFSU2_TR(0x49bfca);
__builtin_memmove((R+24),(R+4),4);
}
B49bfcc:{NFSU2_TR(0x49bfcc);
if(r1(R+518)){{goto L49bfdc;}}
}
B49bfce:L49bfce:{c.instructions+=2;NFSU2_TR(0x49bfce);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x9120409eull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x9120409eull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x9120409eull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B49bfd3:{NFSU2_TR(0x49bfd3);
if(r1(R+518)){{goto L49bfdc;}}
}
B49bfd5:L49bfd5:{c.instructions+=2;NFSU2_TR(0x49bfd5);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0xb5971bf1ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xb5971bf1ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0xb5971bf1ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B49bfda:{NFSU2_TR(0x49bfda);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L49bff4;}}
}
B49bfdc:L49bfdc:{c.instructions+=4;NFSU2_TR(0x49bfdc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+8),(U+0),4);
}
B49bfde:{NFSU2_TR(0x49bfde);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B49bfdf:{NFSU2_TR(0x49bfdf);
__builtin_memmove((R+4),(R+24),4);
}
B49bfe1:{NFSU2_TR(0x49bfe1);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49bfe4ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B49bfe4:L49bfe4:{c.instructions+=3;NFSU2_TR(0x49bfe4);
__builtin_memmove((R+0),gp(0x876504),4);
}
B49bfe9:{NFSU2_TR(0x49bfe9);
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
B49bfeb:{NFSU2_TR(0x49bfeb);
if(r1(R+518)){{goto L49bff4;}}
}
B49bfed:L49bfed:{c.instructions+=1;NFSU2_TR(0x49bfed);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
s4(0x870cec,u32(u32(m4(0x870cec))^u32(u32(0x1ull))));
w1(R+519,u8(s32(m4(0x870cec))<s32(u32(0x0ull))));
w1(R+518,u8((m4(0x870cec))==(u32(0x0ull))));
w4(U+0,u32(u32(m4(0x870cec))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B49bff4:L49bff4:{c.instructions+=3;NFSU2_TR(0x49bff4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B49bff6:{NFSU2_TR(0x49bff6);
__builtin_memmove((R+4),(R+24),4);
}
B49bff8:{NFSU2_TR(0x49bff8);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x49bffbull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B49bffb:L49bffb:{c.instructions+=2;NFSU2_TR(0x49bffb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B49bffc:{NFSU2_TR(0x49bffc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
XIT:NFSU2_TR_EXIT(0x49b,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
