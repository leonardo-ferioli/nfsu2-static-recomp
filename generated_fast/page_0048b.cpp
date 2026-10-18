#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_402(u8* __restrict R,Cpu& c);
u32 body_43b(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_487(u8* __restrict R,Cpu& c);
u32 body_488(u8* __restrict R,Cpu& c);
u32 body_48c(u8* __restrict R,Cpu& c);
u32 body_502(u8* __restrict R,Cpu& c);
u32 body_575(u8* __restrict R,Cpu& c);
u32 body_5b7(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x48b,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x48b,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_48b(u8* __restrict R,Cpu& c);
u32 page_48b(Cpu& c){return body_48b(c.regs.data(),c);}
__attribute__((noinline)) u32 body_48b(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x48b003:goto L48b003;
case 0x48b007:c.instructions+=95;goto B48b007;
case 0x48b00a:c.instructions+=94;goto B48b00a;
case 0x48b00e:c.instructions+=93;goto B48b00e;
case 0x48b011:c.instructions+=92;goto B48b011;
case 0x48b013:c.instructions+=91;goto B48b013;
case 0x48b016:c.instructions+=90;goto B48b016;
case 0x48b019:c.instructions+=89;goto B48b019;
case 0x48b01b:c.instructions+=88;goto B48b01b;
case 0x48b01f:c.instructions+=87;goto B48b01f;
case 0x48b022:c.instructions+=86;goto B48b022;
case 0x48b024:c.instructions+=85;goto B48b024;
case 0x48b02b:c.instructions+=84;goto B48b02b;
case 0x48b02f:c.instructions+=83;goto B48b02f;
case 0x48b032:c.instructions+=82;goto B48b032;
case 0x48b035:c.instructions+=81;goto B48b035;
case 0x48b038:c.instructions+=80;goto B48b038;
case 0x48b03a:c.instructions+=79;goto B48b03a;
case 0x48b03e:c.instructions+=78;goto B48b03e;
case 0x48b041:c.instructions+=77;goto B48b041;
case 0x48b043:c.instructions+=76;goto B48b043;
case 0x48b047:c.instructions+=75;goto B48b047;
case 0x48b04a:c.instructions+=74;goto B48b04a;
case 0x48b04c:c.instructions+=73;goto B48b04c;
case 0x48b053:c.instructions+=72;goto B48b053;
case 0x48b057:c.instructions+=71;goto B48b057;
case 0x48b05a:c.instructions+=70;goto B48b05a;
case 0x48b05e:c.instructions+=69;goto B48b05e;
case 0x48b061:c.instructions+=68;goto B48b061;
case 0x48b063:c.instructions+=67;goto B48b063;
case 0x48b067:c.instructions+=66;goto B48b067;
case 0x48b06a:c.instructions+=65;goto B48b06a;
case 0x48b06c:c.instructions+=64;goto B48b06c;
case 0x48b06f:c.instructions+=63;goto B48b06f;
case 0x48b072:c.instructions+=62;goto B48b072;
case 0x48b074:c.instructions+=61;goto B48b074;
case 0x48b07b:c.instructions+=60;goto B48b07b;
case 0x48b07f:c.instructions+=59;goto B48b07f;
case 0x48b082:c.instructions+=58;goto B48b082;
case 0x48b086:c.instructions+=57;goto B48b086;
case 0x48b089:c.instructions+=56;goto B48b089;
case 0x48b08b:c.instructions+=55;goto B48b08b;
case 0x48b08f:c.instructions+=54;goto B48b08f;
case 0x48b092:c.instructions+=53;goto B48b092;
case 0x48b094:c.instructions+=52;goto B48b094;
case 0x48b097:c.instructions+=51;goto B48b097;
case 0x48b09e:c.instructions+=50;goto B48b09e;
case 0x48b0a2:c.instructions+=49;goto B48b0a2;
case 0x48b0a5:c.instructions+=48;goto B48b0a5;
case 0x48b0a9:c.instructions+=47;goto B48b0a9;
case 0x48b0ac:c.instructions+=46;goto B48b0ac;
case 0x48b0ae:c.instructions+=45;goto B48b0ae;
case 0x48b0b2:c.instructions+=44;goto B48b0b2;
case 0x48b0b5:c.instructions+=43;goto B48b0b5;
case 0x48b0b7:c.instructions+=42;goto B48b0b7;
case 0x48b0bb:c.instructions+=41;goto B48b0bb;
case 0x48b0be:c.instructions+=40;goto B48b0be;
case 0x48b0bf:c.instructions+=39;goto B48b0bf;
case 0x48b0c2:c.instructions+=38;goto B48b0c2;
case 0x48b0c3:c.instructions+=37;goto B48b0c3;
case 0x48b0c5:c.instructions+=36;goto B48b0c5;
case 0x48b0cc:c.instructions+=35;goto B48b0cc;
case 0x48b0cf:c.instructions+=34;goto B48b0cf;
case 0x48b0d2:c.instructions+=33;goto B48b0d2;
case 0x48b0d6:c.instructions+=32;goto B48b0d6;
case 0x48b0d9:c.instructions+=31;goto B48b0d9;
case 0x48b0db:c.instructions+=30;goto B48b0db;
case 0x48b0df:c.instructions+=29;goto B48b0df;
case 0x48b0e2:c.instructions+=28;goto B48b0e2;
case 0x48b0e4:c.instructions+=27;goto B48b0e4;
case 0x48b0e8:c.instructions+=26;goto B48b0e8;
case 0x48b0eb:c.instructions+=25;goto B48b0eb;
case 0x48b0ed:c.instructions+=24;goto B48b0ed;
case 0x48b0f4:c.instructions+=23;goto B48b0f4;
case 0x48b0f8:c.instructions+=22;goto B48b0f8;
case 0x48b0fb:c.instructions+=21;goto B48b0fb;
case 0x48b0ff:c.instructions+=20;goto B48b0ff;
case 0x48b102:c.instructions+=19;goto B48b102;
case 0x48b104:c.instructions+=18;goto B48b104;
case 0x48b108:c.instructions+=17;goto B48b108;
case 0x48b10b:c.instructions+=16;goto B48b10b;
case 0x48b10d:c.instructions+=15;goto B48b10d;
case 0x48b110:c.instructions+=14;goto B48b110;
case 0x48b113:c.instructions+=13;goto B48b113;
case 0x48b115:c.instructions+=12;goto B48b115;
case 0x48b11c:c.instructions+=11;goto B48b11c;
case 0x48b120:c.instructions+=10;goto B48b120;
case 0x48b123:c.instructions+=9;goto B48b123;
case 0x48b127:c.instructions+=8;goto B48b127;
case 0x48b12a:c.instructions+=7;goto B48b12a;
case 0x48b12c:c.instructions+=6;goto B48b12c;
case 0x48b130:c.instructions+=5;goto B48b130;
case 0x48b133:c.instructions+=4;goto B48b133;
case 0x48b135:c.instructions+=3;goto B48b135;
case 0x48b138:c.instructions+=2;goto B48b138;
case 0x48b13f:c.instructions+=1;goto B48b13f;
case 0x48b144:goto L48b144;
case 0x48b147:c.instructions+=4;goto B48b147;
case 0x48b148:c.instructions+=3;goto B48b148;
case 0x48b14a:c.instructions+=2;goto B48b14a;
case 0x48b14b:c.instructions+=1;goto B48b14b;
case 0x48b150:goto L48b150;
case 0x48b153:c.instructions+=3;goto B48b153;
case 0x48b156:c.instructions+=2;goto B48b156;
case 0x48b159:c.instructions+=1;goto B48b159;
case 0x48b15b:goto L48b15b;
case 0x48b162:c.instructions+=1;goto B48b162;
case 0x48b169:goto L48b169;
case 0x48b16e:c.instructions+=1;goto B48b16e;
case 0x48b16f:goto L48b16f;
case 0x48b171:c.instructions+=1;goto B48b171;
case 0x48b190:goto L48b190;
case 0x48b193:c.instructions+=3;goto B48b193;
case 0x48b196:c.instructions+=2;goto B48b196;
case 0x48b199:c.instructions+=1;goto B48b199;
case 0x48b19b:goto L48b19b;
case 0x48b1a2:c.instructions+=1;goto B48b1a2;
case 0x48b1a9:goto L48b1a9;
case 0x48b1ae:c.instructions+=2;goto B48b1ae;
case 0x48b1b5:c.instructions+=1;goto B48b1b5;
case 0x48b1b6:goto L48b1b6;
case 0x48b1b8:c.instructions+=2;goto B48b1b8;
case 0x48b1bf:c.instructions+=1;goto B48b1bf;
case 0x48b1e0:goto L48b1e0;
case 0x48b1e1:c.instructions+=6;goto B48b1e1;
case 0x48b1e3:c.instructions+=5;goto B48b1e3;
case 0x48b1e6:c.instructions+=4;goto B48b1e6;
case 0x48b1e9:c.instructions+=3;goto B48b1e9;
case 0x48b1ee:c.instructions+=2;goto B48b1ee;
case 0x48b1ef:c.instructions+=1;goto B48b1ef;
case 0x48b1f0:goto L48b1f0;
case 0x48b1f2:c.instructions+=4;goto B48b1f2;
case 0x48b1f7:c.instructions+=3;goto B48b1f7;
case 0x48b1fc:c.instructions+=2;goto B48b1fc;
case 0x48b1fe:c.instructions+=1;goto B48b1fe;
case 0x48b203:goto L48b203;
case 0x48b206:c.instructions+=2;goto B48b206;
case 0x48b20b:c.instructions+=1;goto B48b20b;
case 0x48b210:goto L48b210;
case 0x48b214:c.instructions+=2;goto B48b214;
case 0x48b219:c.instructions+=1;goto B48b219;
case 0x48b220:goto L48b220;
case 0x48b223:c.instructions+=10;goto B48b223;
case 0x48b227:c.instructions+=9;goto B48b227;
case 0x48b228:c.instructions+=8;goto B48b228;
case 0x48b229:c.instructions+=7;goto B48b229;
case 0x48b22b:c.instructions+=6;goto B48b22b;
case 0x48b22d:c.instructions+=5;goto B48b22d;
case 0x48b230:c.instructions+=4;goto B48b230;
case 0x48b231:c.instructions+=3;goto B48b231;
case 0x48b232:c.instructions+=2;goto B48b232;
case 0x48b236:c.instructions+=1;goto B48b236;
case 0x48b238:goto L48b238;
case 0x48b239:c.instructions+=4;goto B48b239;
case 0x48b23e:c.instructions+=3;goto B48b23e;
case 0x48b240:c.instructions+=2;goto B48b240;
case 0x48b242:c.instructions+=1;goto B48b242;
case 0x48b244:goto L48b244;
case 0x48b248:goto L48b248;
case 0x48b24c:c.instructions+=4;goto B48b24c;
case 0x48b24e:c.instructions+=3;goto B48b24e;
case 0x48b251:c.instructions+=2;goto B48b251;
case 0x48b255:c.instructions+=1;goto B48b255;
case 0x48b257:goto L48b257;
case 0x48b258:c.instructions+=4;goto B48b258;
case 0x48b25d:c.instructions+=3;goto B48b25d;
case 0x48b25f:c.instructions+=2;goto B48b25f;
case 0x48b261:c.instructions+=1;goto B48b261;
case 0x48b263:goto L48b263;
case 0x48b267:goto L48b267;
case 0x48b26b:c.instructions+=4;goto B48b26b;
case 0x48b26e:c.instructions+=3;goto B48b26e;
case 0x48b270:c.instructions+=2;goto B48b270;
case 0x48b273:c.instructions+=1;goto B48b273;
case 0x48b275:goto L48b275;
case 0x48b27c:c.instructions+=1;goto B48b27c;
case 0x48b283:goto L48b283;
case 0x48b285:c.instructions+=1;goto B48b285;
case 0x48b287:goto L48b287;
case 0x48b289:c.instructions+=3;goto B48b289;
case 0x48b28c:c.instructions+=2;goto B48b28c;
case 0x48b28e:c.instructions+=1;goto B48b28e;
case 0x48b290:goto L48b290;
case 0x48b293:c.instructions+=2;goto B48b293;
case 0x48b296:c.instructions+=1;goto B48b296;
case 0x48b298:goto L48b298;
case 0x48b29a:c.instructions+=3;goto B48b29a;
case 0x48b29d:c.instructions+=2;goto B48b29d;
case 0x48b2a0:c.instructions+=1;goto B48b2a0;
case 0x48b2a2:goto L48b2a2;
case 0x48b2a5:c.instructions+=1;goto B48b2a5;
case 0x48b2a8:goto L48b2a8;
case 0x48b2ab:goto L48b2ab;
case 0x48b2af:c.instructions+=3;goto B48b2af;
case 0x48b2b1:c.instructions+=2;goto B48b2b1;
case 0x48b2b4:c.instructions+=1;goto B48b2b4;
case 0x48b2b9:goto L48b2b9;
case 0x48b2bb:goto L48b2bb;
case 0x48b2bc:c.instructions+=2;goto B48b2bc;
case 0x48b2c0:c.instructions+=1;goto B48b2c0;
case 0x48b2c5:goto L48b2c5;
case 0x48b2c9:c.instructions+=48;goto B48b2c9;
case 0x48b2ce:c.instructions+=47;goto B48b2ce;
case 0x48b2d1:c.instructions+=46;goto B48b2d1;
case 0x48b2d5:c.instructions+=45;goto B48b2d5;
case 0x48b2d8:c.instructions+=44;goto B48b2d8;
case 0x48b2dd:c.instructions+=43;goto B48b2dd;
case 0x48b2e1:c.instructions+=42;goto B48b2e1;
case 0x48b2e6:c.instructions+=41;goto B48b2e6;
case 0x48b2e9:c.instructions+=40;goto B48b2e9;
case 0x48b2ed:c.instructions+=39;goto B48b2ed;
case 0x48b2f0:c.instructions+=38;goto B48b2f0;
case 0x48b2f4:c.instructions+=37;goto B48b2f4;
case 0x48b2f6:c.instructions+=36;goto B48b2f6;
case 0x48b2fa:c.instructions+=35;goto B48b2fa;
case 0x48b2fe:c.instructions+=34;goto B48b2fe;
case 0x48b301:c.instructions+=33;goto B48b301;
case 0x48b306:c.instructions+=32;goto B48b306;
case 0x48b307:c.instructions+=31;goto B48b307;
case 0x48b30a:c.instructions+=30;goto B48b30a;
case 0x48b30d:c.instructions+=29;goto B48b30d;
case 0x48b310:c.instructions+=28;goto B48b310;
case 0x48b313:c.instructions+=27;goto B48b313;
case 0x48b316:c.instructions+=26;goto B48b316;
case 0x48b31a:c.instructions+=25;goto B48b31a;
case 0x48b31d:c.instructions+=24;goto B48b31d;
case 0x48b320:c.instructions+=23;goto B48b320;
case 0x48b323:c.instructions+=22;goto B48b323;
case 0x48b326:c.instructions+=21;goto B48b326;
case 0x48b329:c.instructions+=20;goto B48b329;
case 0x48b32d:c.instructions+=19;goto B48b32d;
case 0x48b331:c.instructions+=18;goto B48b331;
case 0x48b335:c.instructions+=17;goto B48b335;
case 0x48b339:c.instructions+=16;goto B48b339;
case 0x48b33d:c.instructions+=15;goto B48b33d;
case 0x48b340:c.instructions+=14;goto B48b340;
case 0x48b344:c.instructions+=13;goto B48b344;
case 0x48b345:c.instructions+=12;goto B48b345;
case 0x48b348:c.instructions+=11;goto B48b348;
case 0x48b34b:c.instructions+=10;goto B48b34b;
case 0x48b34f:c.instructions+=9;goto B48b34f;
case 0x48b352:c.instructions+=8;goto B48b352;
case 0x48b355:c.instructions+=7;goto B48b355;
case 0x48b358:c.instructions+=6;goto B48b358;
case 0x48b35b:c.instructions+=5;goto B48b35b;
case 0x48b362:c.instructions+=4;goto B48b362;
case 0x48b363:c.instructions+=3;goto B48b363;
case 0x48b364:c.instructions+=2;goto B48b364;
case 0x48b367:c.instructions+=1;goto B48b367;
case 0x48b410:goto L48b410;
case 0x48b411:c.instructions+=6;goto B48b411;
case 0x48b415:c.instructions+=5;goto B48b415;
case 0x48b416:c.instructions+=4;goto B48b416;
case 0x48b417:c.instructions+=3;goto B48b417;
case 0x48b41a:c.instructions+=2;goto B48b41a;
case 0x48b41b:c.instructions+=1;goto B48b41b;
case 0x48b420:goto L48b420;
case 0x48b423:c.instructions+=2;goto B48b423;
case 0x48b424:c.instructions+=1;goto B48b424;
case 0x48b429:goto L48b429;
case 0x48b42c:c.instructions+=3;goto B48b42c;
case 0x48b430:c.instructions+=2;goto B48b430;
case 0x48b431:c.instructions+=1;goto B48b431;
case 0x48b436:goto L48b436;
case 0x48b439:c.instructions+=9;goto B48b439;
case 0x48b43c:c.instructions+=8;goto B48b43c;
case 0x48b43e:c.instructions+=7;goto B48b43e;
case 0x48b43f:c.instructions+=6;goto B48b43f;
case 0x48b442:c.instructions+=5;goto B48b442;
case 0x48b445:c.instructions+=4;goto B48b445;
case 0x48b446:c.instructions+=3;goto B48b446;
case 0x48b449:c.instructions+=2;goto B48b449;
case 0x48b44a:c.instructions+=1;goto B48b44a;
case 0x48b450:goto L48b450;
case 0x48b454:c.instructions+=2;goto B48b454;
case 0x48b456:c.instructions+=1;goto B48b456;
case 0x48b458:goto L48b458;
case 0x48b45e:c.instructions+=1;goto B48b45e;
case 0x48b461:goto L48b461;
case 0x48b464:c.instructions+=2;goto B48b464;
case 0x48b468:c.instructions+=1;goto B48b468;
case 0x48b46a:goto L48b46a;
case 0x48b46e:c.instructions+=1;goto B48b46e;
case 0x48b473:goto L48b473;
case 0x48b477:c.instructions+=1;goto B48b477;
case 0x48b47b:goto L48b47b;
case 0x48b47f:c.instructions+=2;goto B48b47f;
case 0x48b481:c.instructions+=1;goto B48b481;
case 0x48b486:goto L48b486;
case 0x48b48a:c.instructions+=2;goto B48b48a;
case 0x48b48e:c.instructions+=1;goto B48b48e;
case 0x48b4a0:goto L48b4a0;
case 0x48b4a4:c.instructions+=2;goto B48b4a4;
case 0x48b4aa:c.instructions+=1;goto B48b4aa;
case 0x48b4ac:goto L48b4ac;
case 0x48b4ae:c.instructions+=1;goto B48b4ae;
case 0x48b4af:goto L48b4af;
case 0x48b4b2:c.instructions+=13;goto B48b4b2;
case 0x48b4b4:c.instructions+=12;goto B48b4b4;
case 0x48b4b7:c.instructions+=11;goto B48b4b7;
case 0x48b4bd:c.instructions+=10;goto B48b4bd;
case 0x48b4c0:c.instructions+=9;goto B48b4c0;
case 0x48b4c3:c.instructions+=8;goto B48b4c3;
case 0x48b4c5:c.instructions+=7;goto B48b4c5;
case 0x48b4c9:c.instructions+=6;goto B48b4c9;
case 0x48b4ce:c.instructions+=5;goto B48b4ce;
case 0x48b4d0:c.instructions+=4;goto B48b4d0;
case 0x48b4d3:c.instructions+=3;goto B48b4d3;
case 0x48b4d9:c.instructions+=2;goto B48b4d9;
case 0x48b4de:c.instructions+=1;goto B48b4de;
case 0x48b4e0:goto L48b4e0;
case 0x48b4e1:c.instructions+=9;goto B48b4e1;
case 0x48b4e3:c.instructions+=8;goto B48b4e3;
case 0x48b4e4:c.instructions+=7;goto B48b4e4;
case 0x48b4e5:c.instructions+=6;goto B48b4e5;
case 0x48b4e8:c.instructions+=5;goto B48b4e8;
case 0x48b4ea:c.instructions+=4;goto B48b4ea;
case 0x48b4ec:c.instructions+=3;goto B48b4ec;
case 0x48b4ee:c.instructions+=2;goto B48b4ee;
case 0x48b4f4:c.instructions+=1;goto B48b4f4;
case 0x48b4f6:goto L48b4f6;
case 0x48b4fc:c.instructions+=2;goto B48b4fc;
case 0x48b4fe:c.instructions+=1;goto B48b4fe;
case 0x48b500:goto L48b500;
case 0x48b505:goto L48b505;
case 0x48b508:c.instructions+=1;goto B48b508;
case 0x48b50a:goto L48b50a;
case 0x48b50c:c.instructions+=1;goto B48b50c;
case 0x48b512:goto L48b512;
case 0x48b517:c.instructions+=2;goto B48b517;
case 0x48b518:c.instructions+=1;goto B48b518;
case 0x48b51a:goto L48b51a;
case 0x48b51c:c.instructions+=1;goto B48b51c;
case 0x48b51e:goto L48b51e;
case 0x48b51f:c.instructions+=6;goto B48b51f;
case 0x48b529:c.instructions+=5;goto B48b529;
case 0x48b533:c.instructions+=4;goto B48b533;
case 0x48b53d:c.instructions+=3;goto B48b53d;
case 0x48b53e:c.instructions+=2;goto B48b53e;
case 0x48b53f:c.instructions+=1;goto B48b53f;
case 0x48b540:goto L48b540;
case 0x48b542:c.instructions+=3;goto B48b542;
case 0x48b547:c.instructions+=2;goto B48b547;
case 0x48b549:c.instructions+=1;goto B48b549;
case 0x48b54b:goto L48b54b;
case 0x48b551:c.instructions+=4;goto B48b551;
case 0x48b55b:c.instructions+=3;goto B48b55b;
case 0x48b565:c.instructions+=2;goto B48b565;
case 0x48b56f:c.instructions+=1;goto B48b56f;
case 0x48b571:goto L48b571;
case 0x48b574:c.instructions+=5;goto B48b574;
case 0x48b579:c.instructions+=4;goto B48b579;
case 0x48b57c:c.instructions+=3;goto B48b57c;
case 0x48b581:c.instructions+=2;goto B48b581;
case 0x48b584:c.instructions+=1;goto B48b584;
case 0x48b58a:goto L48b58a;
case 0x48b58c:c.instructions+=2;goto B48b58c;
case 0x48b591:c.instructions+=1;goto B48b591;
case 0x48b596:goto L48b596;
case 0x48b598:goto L48b598;
case 0x48b59d:c.instructions+=60;goto B48b59d;
case 0x48b5a2:c.instructions+=59;goto B48b5a2;
case 0x48b5a7:c.instructions+=58;goto B48b5a7;
case 0x48b5ac:c.instructions+=57;goto B48b5ac;
case 0x48b5b1:c.instructions+=56;goto B48b5b1;
case 0x48b5b6:c.instructions+=55;goto B48b5b6;
case 0x48b5bb:c.instructions+=54;goto B48b5bb;
case 0x48b5c0:c.instructions+=53;goto B48b5c0;
case 0x48b5c5:c.instructions+=52;goto B48b5c5;
case 0x48b5c7:c.instructions+=51;goto B48b5c7;
case 0x48b5c8:c.instructions+=50;goto B48b5c8;
case 0x48b5ce:c.instructions+=49;goto B48b5ce;
case 0x48b5d4:c.instructions+=48;goto B48b5d4;
case 0x48b5da:c.instructions+=47;goto B48b5da;
case 0x48b5e0:c.instructions+=46;goto B48b5e0;
case 0x48b5e6:c.instructions+=45;goto B48b5e6;
case 0x48b5ec:c.instructions+=44;goto B48b5ec;
case 0x48b5f2:c.instructions+=43;goto B48b5f2;
case 0x48b5fc:c.instructions+=42;goto B48b5fc;
case 0x48b606:c.instructions+=41;goto B48b606;
case 0x48b60d:c.instructions+=40;goto B48b60d;
case 0x48b614:c.instructions+=39;goto B48b614;
case 0x48b61b:c.instructions+=38;goto B48b61b;
case 0x48b620:c.instructions+=37;goto B48b620;
case 0x48b62a:c.instructions+=36;goto B48b62a;
case 0x48b630:c.instructions+=35;goto B48b630;
case 0x48b63a:c.instructions+=34;goto B48b63a;
case 0x48b644:c.instructions+=33;goto B48b644;
case 0x48b64e:c.instructions+=32;goto B48b64e;
case 0x48b658:c.instructions+=31;goto B48b658;
case 0x48b65f:c.instructions+=30;goto B48b65f;
case 0x48b666:c.instructions+=29;goto B48b666;
case 0x48b66d:c.instructions+=28;goto B48b66d;
case 0x48b672:c.instructions+=27;goto B48b672;
case 0x48b67c:c.instructions+=26;goto B48b67c;
case 0x48b682:c.instructions+=25;goto B48b682;
case 0x48b688:c.instructions+=24;goto B48b688;
case 0x48b692:c.instructions+=23;goto B48b692;
case 0x48b69c:c.instructions+=22;goto B48b69c;
case 0x48b6a6:c.instructions+=21;goto B48b6a6;
case 0x48b6b0:c.instructions+=20;goto B48b6b0;
case 0x48b6b7:c.instructions+=19;goto B48b6b7;
case 0x48b6be:c.instructions+=18;goto B48b6be;
case 0x48b6c5:c.instructions+=17;goto B48b6c5;
case 0x48b6ca:c.instructions+=16;goto B48b6ca;
case 0x48b6d4:c.instructions+=15;goto B48b6d4;
case 0x48b6da:c.instructions+=14;goto B48b6da;
case 0x48b6e0:c.instructions+=13;goto B48b6e0;
case 0x48b6ea:c.instructions+=12;goto B48b6ea;
case 0x48b6f4:c.instructions+=11;goto B48b6f4;
case 0x48b6fe:c.instructions+=10;goto B48b6fe;
case 0x48b708:c.instructions+=9;goto B48b708;
case 0x48b70f:c.instructions+=8;goto B48b70f;
case 0x48b716:c.instructions+=7;goto B48b716;
case 0x48b71d:c.instructions+=6;goto B48b71d;
case 0x48b722:c.instructions+=5;goto B48b722;
case 0x48b72c:c.instructions+=4;goto B48b72c;
case 0x48b736:c.instructions+=3;goto B48b736;
case 0x48b737:c.instructions+=2;goto B48b737;
case 0x48b738:c.instructions+=1;goto B48b738;
case 0x48b740:goto L48b740;
case 0x48b744:c.instructions+=4;goto B48b744;
case 0x48b746:c.instructions+=3;goto B48b746;
case 0x48b748:c.instructions+=2;goto B48b748;
case 0x48b74e:c.instructions+=1;goto B48b74e;
case 0x48b750:goto L48b750;
case 0x48b755:c.instructions+=2;goto B48b755;
case 0x48b75a:c.instructions+=1;goto B48b75a;
case 0x48b75f:goto L48b75f;
case 0x48b760:goto L48b760;
case 0x48b762:c.instructions+=10;goto B48b762;
case 0x48b767:c.instructions+=9;goto B48b767;
case 0x48b76c:c.instructions+=8;goto B48b76c;
case 0x48b771:c.instructions+=7;goto B48b771;
case 0x48b776:c.instructions+=6;goto B48b776;
case 0x48b77b:c.instructions+=5;goto B48b77b;
case 0x48b780:c.instructions+=4;goto B48b780;
case 0x48b785:c.instructions+=3;goto B48b785;
case 0x48b78a:c.instructions+=2;goto B48b78a;
case 0x48b78f:c.instructions+=1;goto B48b78f;
case 0x48b790:goto L48b790;
case 0x48b792:c.instructions+=8;goto B48b792;
case 0x48b794:c.instructions+=7;goto B48b794;
case 0x48b797:c.instructions+=6;goto B48b797;
case 0x48b79a:c.instructions+=5;goto B48b79a;
case 0x48b79d:c.instructions+=4;goto B48b79d;
case 0x48b7a0:c.instructions+=3;goto B48b7a0;
case 0x48b7a3:c.instructions+=2;goto B48b7a3;
case 0x48b7a6:c.instructions+=1;goto B48b7a6;
case 0x48b7b0:goto L48b7b0;
case 0x48b7b4:c.instructions+=19;goto B48b7b4;
case 0x48b7b8:c.instructions+=18;goto B48b7b8;
case 0x48b7bb:c.instructions+=17;goto B48b7bb;
case 0x48b7bf:c.instructions+=16;goto B48b7bf;
case 0x48b7c2:c.instructions+=15;goto B48b7c2;
case 0x48b7c4:c.instructions+=14;goto B48b7c4;
case 0x48b7c8:c.instructions+=13;goto B48b7c8;
case 0x48b7ca:c.instructions+=12;goto B48b7ca;
case 0x48b7cc:c.instructions+=11;goto B48b7cc;
case 0x48b7ce:c.instructions+=10;goto B48b7ce;
case 0x48b7d2:c.instructions+=9;goto B48b7d2;
case 0x48b7d6:c.instructions+=8;goto B48b7d6;
case 0x48b7d8:c.instructions+=7;goto B48b7d8;
case 0x48b7dc:c.instructions+=6;goto B48b7dc;
case 0x48b7df:c.instructions+=5;goto B48b7df;
case 0x48b7e3:c.instructions+=4;goto B48b7e3;
case 0x48b7e6:c.instructions+=3;goto B48b7e6;
case 0x48b7ea:c.instructions+=2;goto B48b7ea;
case 0x48b7ed:c.instructions+=1;goto B48b7ed;
case 0x48b7f0:goto L48b7f0;
case 0x48b7f3:c.instructions+=14;goto B48b7f3;
case 0x48b7f6:c.instructions+=13;goto B48b7f6;
case 0x48b7fa:c.instructions+=12;goto B48b7fa;
case 0x48b7fe:c.instructions+=11;goto B48b7fe;
case 0x48b802:c.instructions+=10;goto B48b802;
case 0x48b804:c.instructions+=9;goto B48b804;
case 0x48b806:c.instructions+=8;goto B48b806;
case 0x48b80a:c.instructions+=7;goto B48b80a;
case 0x48b80d:c.instructions+=6;goto B48b80d;
case 0x48b811:c.instructions+=5;goto B48b811;
case 0x48b814:c.instructions+=4;goto B48b814;
case 0x48b818:c.instructions+=3;goto B48b818;
case 0x48b81b:c.instructions+=2;goto B48b81b;
case 0x48b81e:c.instructions+=1;goto B48b81e;
case 0x48b830:goto L48b830;
case 0x48b831:c.instructions+=2;goto B48b831;
case 0x48b836:c.instructions+=1;goto B48b836;
case 0x48b83b:goto L48b83b;
case 0x48b83d:c.instructions+=4;goto B48b83d;
case 0x48b840:c.instructions+=3;goto B48b840;
case 0x48b842:c.instructions+=2;goto B48b842;
case 0x48b844:c.instructions+=1;goto B48b844;
case 0x48b846:goto L48b846;
case 0x48b847:c.instructions+=6;goto B48b847;
case 0x48b84b:c.instructions+=5;goto B48b84b;
case 0x48b84c:c.instructions+=4;goto B48b84c;
case 0x48b84d:c.instructions+=3;goto B48b84d;
case 0x48b850:c.instructions+=2;goto B48b850;
case 0x48b855:c.instructions+=1;goto B48b855;
case 0x48b857:goto L48b857;
case 0x48b859:goto L48b859;
case 0x48b85e:c.instructions+=5;goto B48b85e;
case 0x48b85f:c.instructions+=4;goto B48b85f;
case 0x48b865:c.instructions+=3;goto B48b865;
case 0x48b866:c.instructions+=2;goto B48b866;
case 0x48b86b:c.instructions+=1;goto B48b86b;
case 0x48b870:goto L48b870;
case 0x48b872:c.instructions+=5;goto B48b872;
case 0x48b875:c.instructions+=4;goto B48b875;
case 0x48b87b:c.instructions+=3;goto B48b87b;
case 0x48b87c:c.instructions+=2;goto B48b87c;
case 0x48b87d:c.instructions+=1;goto B48b87d;
case 0x48b882:goto L48b882;
case 0x48b889:c.instructions+=4;goto B48b889;
case 0x48b88c:c.instructions+=3;goto B48b88c;
case 0x48b88f:c.instructions+=2;goto B48b88f;
case 0x48b891:c.instructions+=1;goto B48b891;
case 0x48b893:goto L48b893;
case 0x48b896:goto L48b896;
case 0x48b899:c.instructions+=4;goto B48b899;
case 0x48b89c:c.instructions+=3;goto B48b89c;
case 0x48b89d:c.instructions+=2;goto B48b89d;
case 0x48b89e:c.instructions+=1;goto B48b89e;
case 0x48b8a3:goto L48b8a3;
case 0x48b8a6:c.instructions+=4;goto B48b8a6;
case 0x48b8a7:c.instructions+=3;goto B48b8a7;
case 0x48b8a8:c.instructions+=2;goto B48b8a8;
case 0x48b8aa:c.instructions+=1;goto B48b8aa;
case 0x48b8ab:goto L48b8ab;
case 0x48b8ac:c.instructions+=1;goto B48b8ac;
case 0x48b8b0:goto L48b8b0;
case 0x48b8b1:c.instructions+=8;goto B48b8b1;
case 0x48b8b3:c.instructions+=7;goto B48b8b3;
case 0x48b8b4:c.instructions+=6;goto B48b8b4;
case 0x48b8b7:c.instructions+=5;goto B48b8b7;
case 0x48b8b8:c.instructions+=4;goto B48b8b8;
case 0x48b8b9:c.instructions+=3;goto B48b8b9;
case 0x48b8bc:c.instructions+=2;goto B48b8bc;
case 0x48b8be:c.instructions+=1;goto B48b8be;
case 0x48b8c0:goto L48b8c0;
case 0x48b8c2:c.instructions+=1;goto B48b8c2;
case 0x48b8c4:goto L48b8c4;
case 0x48b8c6:c.instructions+=1;goto B48b8c6;
case 0x48b8c8:goto L48b8c8;
case 0x48b8ca:c.instructions+=1;goto B48b8ca;
case 0x48b8cc:goto L48b8cc;
case 0x48b8d2:goto L48b8d2;
case 0x48b8d7:c.instructions+=1;goto B48b8d7;
case 0x48b8dc:goto L48b8dc;
case 0x48b8de:c.instructions+=1;goto B48b8de;
case 0x48b8e0:goto L48b8e0;
case 0x48b8e3:c.instructions+=2;goto B48b8e3;
case 0x48b8e5:c.instructions+=1;goto B48b8e5;
case 0x48b8e7:goto L48b8e7;
case 0x48b8ea:c.instructions+=1;goto B48b8ea;
case 0x48b8ec:goto L48b8ec;
case 0x48b8ee:c.instructions+=2;goto B48b8ee;
case 0x48b8f0:c.instructions+=1;goto B48b8f0;
case 0x48b8f2:goto L48b8f2;
case 0x48b8f3:c.instructions+=4;goto B48b8f3;
case 0x48b8f4:c.instructions+=3;goto B48b8f4;
case 0x48b8f5:c.instructions+=2;goto B48b8f5;
case 0x48b8f6:c.instructions+=1;goto B48b8f6;
case 0x48b8f7:goto L48b8f7;
case 0x48b8f8:c.instructions+=1;goto B48b8f8;
case 0x48b8fd:goto L48b8fd;
case 0x48b900:c.instructions+=2;goto B48b900;
case 0x48b902:c.instructions+=1;goto B48b902;
case 0x48b904:goto L48b904;
case 0x48b907:c.instructions+=5;goto B48b907;
case 0x48b909:c.instructions+=4;goto B48b909;
case 0x48b90c:c.instructions+=3;goto B48b90c;
case 0x48b90f:c.instructions+=2;goto B48b90f;
case 0x48b911:c.instructions+=1;goto B48b911;
case 0x48b920:goto L48b920;
case 0x48b921:c.instructions+=11;goto B48b921;
case 0x48b923:c.instructions+=10;goto B48b923;
case 0x48b926:c.instructions+=9;goto B48b926;
case 0x48b929:c.instructions+=8;goto B48b929;
case 0x48b92c:c.instructions+=7;goto B48b92c;
case 0x48b92d:c.instructions+=6;goto B48b92d;
case 0x48b933:c.instructions+=5;goto B48b933;
case 0x48b934:c.instructions+=4;goto B48b934;
case 0x48b935:c.instructions+=3;goto B48b935;
case 0x48b937:c.instructions+=2;goto B48b937;
case 0x48b93a:c.instructions+=1;goto B48b93a;
case 0x48b93c:goto L48b93c;
case 0x48b93f:c.instructions+=5;goto B48b93f;
case 0x48b945:c.instructions+=4;goto B48b945;
case 0x48b948:c.instructions+=3;goto B48b948;
case 0x48b94a:c.instructions+=2;goto B48b94a;
case 0x48b94d:c.instructions+=1;goto B48b94d;
case 0x48b94f:goto L48b94f;
case 0x48b951:c.instructions+=2;goto B48b951;
case 0x48b959:c.instructions+=1;goto B48b959;
case 0x48b95b:goto L48b95b;
case 0x48b961:goto L48b961;
case 0x48b965:goto L48b965;
case 0x48b968:c.instructions+=4;goto B48b968;
case 0x48b96e:c.instructions+=3;goto B48b96e;
case 0x48b970:c.instructions+=2;goto B48b970;
case 0x48b973:c.instructions+=1;goto B48b973;
case 0x48b975:goto L48b975;
case 0x48b978:c.instructions+=5;goto B48b978;
case 0x48b97e:c.instructions+=4;goto B48b97e;
case 0x48b981:c.instructions+=3;goto B48b981;
case 0x48b983:c.instructions+=2;goto B48b983;
case 0x48b986:c.instructions+=1;goto B48b986;
case 0x48b988:goto L48b988;
case 0x48b98a:c.instructions+=2;goto B48b98a;
case 0x48b992:c.instructions+=1;goto B48b992;
case 0x48b994:goto L48b994;
case 0x48b99a:goto L48b99a;
case 0x48b99e:goto L48b99e;
case 0x48b9a1:c.instructions+=2;goto B48b9a1;
case 0x48b9a3:c.instructions+=1;goto B48b9a3;
case 0x48b9a8:goto L48b9a8;
case 0x48b9aa:c.instructions+=2;goto B48b9aa;
case 0x48b9ae:c.instructions+=1;goto B48b9ae;
case 0x48b9b4:goto L48b9b4;
case 0x48b9b7:c.instructions+=5;goto B48b9b7;
case 0x48b9bd:c.instructions+=4;goto B48b9bd;
case 0x48b9be:c.instructions+=3;goto B48b9be;
case 0x48b9c2:c.instructions+=2;goto B48b9c2;
case 0x48b9c3:c.instructions+=1;goto B48b9c3;
case 0x48b9c8:goto L48b9c8;
case 0x48b9cb:c.instructions+=3;goto B48b9cb;
case 0x48b9cf:c.instructions+=2;goto B48b9cf;
case 0x48b9d7:c.instructions+=1;goto B48b9d7;
case 0x48b9e0:goto L48b9e0;
case 0x48b9e3:c.instructions+=21;goto B48b9e3;
case 0x48b9e7:c.instructions+=20;goto B48b9e7;
case 0x48b9ed:c.instructions+=19;goto B48b9ed;
case 0x48b9ee:c.instructions+=18;goto B48b9ee;
case 0x48b9f2:c.instructions+=17;goto B48b9f2;
case 0x48b9f3:c.instructions+=16;goto B48b9f3;
case 0x48b9f7:c.instructions+=15;goto B48b9f7;
case 0x48b9fb:c.instructions+=14;goto B48b9fb;
case 0x48b9fd:c.instructions+=13;goto B48b9fd;
case 0x48b9fe:c.instructions+=12;goto B48b9fe;
case 0x48ba04:c.instructions+=11;goto B48ba04;
case 0x48ba08:c.instructions+=10;goto B48ba08;
case 0x48ba0c:c.instructions+=9;goto B48ba0c;
case 0x48ba10:c.instructions+=8;goto B48ba10;
case 0x48ba13:c.instructions+=7;goto B48ba13;
case 0x48ba19:c.instructions+=6;goto B48ba19;
case 0x48ba1d:c.instructions+=5;goto B48ba1d;
case 0x48ba21:c.instructions+=4;goto B48ba21;
case 0x48ba22:c.instructions+=3;goto B48ba22;
case 0x48ba23:c.instructions+=2;goto B48ba23;
case 0x48ba24:c.instructions+=1;goto B48ba24;
case 0x48ba29:goto L48ba29;
case 0x48ba2d:c.instructions+=7;goto B48ba2d;
case 0x48ba31:c.instructions+=6;goto B48ba31;
case 0x48ba34:c.instructions+=5;goto B48ba34;
case 0x48ba3a:c.instructions+=4;goto B48ba3a;
case 0x48ba3e:c.instructions+=3;goto B48ba3e;
case 0x48ba40:c.instructions+=2;goto B48ba40;
case 0x48ba43:c.instructions+=1;goto B48ba43;
case 0x48ba45:goto L48ba45;
case 0x48ba50:goto L48ba50;
case 0x48ba56:c.instructions+=4;goto B48ba56;
case 0x48ba5c:c.instructions+=3;goto B48ba5c;
case 0x48ba5e:c.instructions+=2;goto B48ba5e;
case 0x48ba61:c.instructions+=1;goto B48ba61;
case 0x48ba63:goto L48ba63;
case 0x48ba67:goto L48ba67;
case 0x48ba6d:c.instructions+=3;goto B48ba6d;
case 0x48ba6f:c.instructions+=2;goto B48ba6f;
case 0x48ba72:c.instructions+=1;goto B48ba72;
case 0x48ba74:goto L48ba74;
case 0x48ba80:goto L48ba80;
case 0x48ba86:c.instructions+=4;goto B48ba86;
case 0x48ba8c:c.instructions+=3;goto B48ba8c;
case 0x48ba8e:c.instructions+=2;goto B48ba8e;
case 0x48ba91:c.instructions+=1;goto B48ba91;
case 0x48ba93:goto L48ba93;
case 0x48ba97:c.instructions+=1;goto B48ba97;
case 0x48ba99:goto L48ba99;
case 0x48ba9b:goto L48ba9b;
case 0x48ba9f:c.instructions+=6;goto B48ba9f;
case 0x48baa3:c.instructions+=5;goto B48baa3;
case 0x48baa7:c.instructions+=4;goto B48baa7;
case 0x48baad:c.instructions+=3;goto B48baad;
case 0x48baaf:c.instructions+=2;goto B48baaf;
case 0x48bab2:c.instructions+=1;goto B48bab2;
case 0x48bab8:goto L48bab8;
case 0x48babc:c.instructions+=5;goto B48babc;
case 0x48bac2:c.instructions+=4;goto B48bac2;
case 0x48bac6:c.instructions+=3;goto B48bac6;
case 0x48bac8:c.instructions+=2;goto B48bac8;
case 0x48bacb:c.instructions+=1;goto B48bacb;
case 0x48bacd:goto L48bacd;
case 0x48bacf:c.instructions+=1;goto B48bacf;
case 0x48bad5:goto L48bad5;
case 0x48bad9:c.instructions+=8;goto B48bad9;
case 0x48badd:c.instructions+=7;goto B48badd;
case 0x48bae1:c.instructions+=6;goto B48bae1;
case 0x48bae4:c.instructions+=5;goto B48bae4;
case 0x48bae8:c.instructions+=4;goto B48bae8;
case 0x48baee:c.instructions+=3;goto B48baee;
case 0x48baf0:c.instructions+=2;goto B48baf0;
case 0x48baf3:c.instructions+=1;goto B48baf3;
case 0x48baf9:goto L48baf9;
case 0x48bafd:c.instructions+=5;goto B48bafd;
case 0x48bb03:c.instructions+=4;goto B48bb03;
case 0x48bb07:c.instructions+=3;goto B48bb07;
case 0x48bb09:c.instructions+=2;goto B48bb09;
case 0x48bb0c:c.instructions+=1;goto B48bb0c;
case 0x48bb0e:goto L48bb0e;
case 0x48bb10:c.instructions+=1;goto B48bb10;
case 0x48bb16:goto L48bb16;
case 0x48bb1a:c.instructions+=14;goto B48bb1a;
case 0x48bb1e:c.instructions+=13;goto B48bb1e;
case 0x48bb1f:c.instructions+=12;goto B48bb1f;
case 0x48bb23:c.instructions+=11;goto B48bb23;
case 0x48bb27:c.instructions+=10;goto B48bb27;
case 0x48bb2b:c.instructions+=9;goto B48bb2b;
case 0x48bb2c:c.instructions+=8;goto B48bb2c;
case 0x48bb30:c.instructions+=7;goto B48bb30;
case 0x48bb34:c.instructions+=6;goto B48bb34;
case 0x48bb35:c.instructions+=5;goto B48bb35;
case 0x48bb39:c.instructions+=4;goto B48bb39;
case 0x48bb3a:c.instructions+=3;goto B48bb3a;
case 0x48bb3b:c.instructions+=2;goto B48bb3b;
case 0x48bb3c:c.instructions+=1;goto B48bb3c;
case 0x48bb41:goto L48bb41;
case 0x48bb45:c.instructions+=14;goto B48bb45;
case 0x48bb4b:c.instructions+=13;goto B48bb4b;
case 0x48bb4f:c.instructions+=12;goto B48bb4f;
case 0x48bb52:c.instructions+=11;goto B48bb52;
case 0x48bb55:c.instructions+=10;goto B48bb55;
case 0x48bb58:c.instructions+=9;goto B48bb58;
case 0x48bb59:c.instructions+=8;goto B48bb59;
case 0x48bb5d:c.instructions+=7;goto B48bb5d;
case 0x48bb61:c.instructions+=6;goto B48bb61;
case 0x48bb67:c.instructions+=5;goto B48bb67;
case 0x48bb6a:c.instructions+=4;goto B48bb6a;
case 0x48bb6e:c.instructions+=3;goto B48bb6e;
case 0x48bb74:c.instructions+=2;goto B48bb74;
case 0x48bb77:c.instructions+=1;goto B48bb77;
case 0x48bb7d:goto L48bb7d;
case 0x48bb83:c.instructions+=17;goto B48bb83;
case 0x48bb86:c.instructions+=16;goto B48bb86;
case 0x48bb8c:c.instructions+=15;goto B48bb8c;
case 0x48bb8f:c.instructions+=14;goto B48bb8f;
case 0x48bb93:c.instructions+=13;goto B48bb93;
case 0x48bb97:c.instructions+=12;goto B48bb97;
case 0x48bb9d:c.instructions+=11;goto B48bb9d;
case 0x48bba3:c.instructions+=10;goto B48bba3;
case 0x48bba7:c.instructions+=9;goto B48bba7;
case 0x48bbad:c.instructions+=8;goto B48bbad;
case 0x48bbb3:c.instructions+=7;goto B48bbb3;
case 0x48bbb7:c.instructions+=6;goto B48bbb7;
case 0x48bbbd:c.instructions+=5;goto B48bbbd;
case 0x48bbc3:c.instructions+=4;goto B48bbc3;
case 0x48bbc6:c.instructions+=3;goto B48bbc6;
case 0x48bbc7:c.instructions+=2;goto B48bbc7;
case 0x48bbc8:c.instructions+=1;goto B48bbc8;
case 0x48bbcd:goto L48bbcd;
case 0x48bbd1:c.instructions+=5;goto B48bbd1;
case 0x48bbd4:c.instructions+=4;goto B48bbd4;
case 0x48bbd6:c.instructions+=3;goto B48bbd6;
case 0x48bbd9:c.instructions+=2;goto B48bbd9;
case 0x48bbdb:c.instructions+=1;goto B48bbdb;
case 0x48bbe1:goto L48bbe1;
case 0x48bbe2:c.instructions+=5;goto B48bbe2;
case 0x48bbe3:c.instructions+=4;goto B48bbe3;
case 0x48bbe4:c.instructions+=3;goto B48bbe4;
case 0x48bbe6:c.instructions+=2;goto B48bbe6;
case 0x48bbe7:c.instructions+=1;goto B48bbe7;
case 0x48bbe8:goto L48bbe8;
case 0x48bbee:c.instructions+=1;goto B48bbee;
case 0x48bbf3:goto L48bbf3;
case 0x48bbf9:c.instructions+=1;goto B48bbf9;
case 0x48bc00:goto L48bc00;
case 0x48bc01:c.instructions+=6;goto B48bc01;
case 0x48bc02:c.instructions+=5;goto B48bc02;
case 0x48bc03:c.instructions+=4;goto B48bc03;
case 0x48bc07:c.instructions+=3;goto B48bc07;
case 0x48bc09:c.instructions+=2;goto B48bc09;
case 0x48bc0b:c.instructions+=1;goto B48bc0b;
case 0x48bc0d:goto L48bc0d;
case 0x48bc13:c.instructions+=2;goto B48bc13;
case 0x48bc18:c.instructions+=1;goto B48bc18;
case 0x48bc1d:goto L48bc1d;
case 0x48bc1f:c.instructions+=1;goto B48bc1f;
case 0x48bc21:goto L48bc21;
case 0x48bc24:c.instructions+=1;goto B48bc24;
case 0x48bc26:goto L48bc26;
case 0x48bc28:c.instructions+=2;goto B48bc28;
case 0x48bc2a:c.instructions+=1;goto B48bc2a;
case 0x48bc2c:goto L48bc2c;
case 0x48bc2d:c.instructions+=4;goto B48bc2d;
case 0x48bc2e:c.instructions+=3;goto B48bc2e;
case 0x48bc30:c.instructions+=2;goto B48bc30;
case 0x48bc31:c.instructions+=1;goto B48bc31;
case 0x48bc34:goto L48bc34;
case 0x48bc35:c.instructions+=5;goto B48bc35;
case 0x48bc38:c.instructions+=4;goto B48bc38;
case 0x48bc39:c.instructions+=3;goto B48bc39;
case 0x48bc3e:c.instructions+=2;goto B48bc3e;
case 0x48bc3f:c.instructions+=1;goto B48bc3f;
case 0x48bc50:goto L48bc50;
case 0x48bc51:c.instructions+=9;goto B48bc51;
case 0x48bc52:c.instructions+=8;goto B48bc52;
case 0x48bc53:c.instructions+=7;goto B48bc53;
case 0x48bc57:c.instructions+=6;goto B48bc57;
case 0x48bc5a:c.instructions+=5;goto B48bc5a;
case 0x48bc5c:c.instructions+=4;goto B48bc5c;
case 0x48bc5f:c.instructions+=3;goto B48bc5f;
case 0x48bc60:c.instructions+=2;goto B48bc60;
case 0x48bc62:c.instructions+=1;goto B48bc62;
case 0x48bc64:goto L48bc64;
case 0x48bc6a:c.instructions+=15;goto B48bc6a;
case 0x48bc6c:c.instructions+=14;goto B48bc6c;
case 0x48bc6f:c.instructions+=13;goto B48bc6f;
case 0x48bc71:c.instructions+=12;goto B48bc71;
case 0x48bc73:c.instructions+=11;goto B48bc73;
case 0x48bc76:c.instructions+=10;goto B48bc76;
case 0x48bc78:c.instructions+=9;goto B48bc78;
case 0x48bc7a:c.instructions+=8;goto B48bc7a;
case 0x48bc7d:c.instructions+=7;goto B48bc7d;
case 0x48bc7f:c.instructions+=6;goto B48bc7f;
case 0x48bc84:c.instructions+=5;goto B48bc84;
case 0x48bc89:c.instructions+=4;goto B48bc89;
case 0x48bc8b:c.instructions+=3;goto B48bc8b;
case 0x48bc8f:c.instructions+=2;goto B48bc8f;
case 0x48bc93:c.instructions+=1;goto B48bc93;
case 0x48bc95:goto L48bc95;
case 0x48bc9b:goto L48bc9b;
case 0x48bca1:c.instructions+=2;goto B48bca1;
case 0x48bca7:c.instructions+=1;goto B48bca7;
case 0x48bcac:goto L48bcac;
case 0x48bcae:goto L48bcae;
case 0x48bcb1:c.instructions+=4;goto B48bcb1;
case 0x48bcb3:c.instructions+=3;goto B48bcb3;
case 0x48bcb6:c.instructions+=2;goto B48bcb6;
case 0x48bcbb:c.instructions+=1;goto B48bcbb;
case 0x48bcc1:goto L48bcc1;
case 0x48bcc3:c.instructions+=1;goto B48bcc3;
case 0x48bcc9:goto L48bcc9;
case 0x48bccb:c.instructions+=1;goto B48bccb;
case 0x48bccd:goto L48bccd;
case 0x48bcd0:c.instructions+=1;goto B48bcd0;
case 0x48bcd2:goto L48bcd2;
case 0x48bcd5:c.instructions+=2;goto B48bcd5;
case 0x48bcd8:c.instructions+=1;goto B48bcd8;
case 0x48bcda:goto L48bcda;
case 0x48bcdc:goto L48bcdc;
case 0x48bcde:c.instructions+=4;goto B48bcde;
case 0x48bce1:c.instructions+=3;goto B48bce1;
case 0x48bce5:c.instructions+=2;goto B48bce5;
case 0x48bce8:c.instructions+=1;goto B48bce8;
case 0x48bcea:goto L48bcea;
case 0x48bcec:c.instructions+=4;goto B48bcec;
case 0x48bcee:c.instructions+=3;goto B48bcee;
case 0x48bcf1:c.instructions+=2;goto B48bcf1;
case 0x48bcf5:c.instructions+=1;goto B48bcf5;
case 0x48bcf8:goto L48bcf8;
case 0x48bcfa:c.instructions+=4;goto B48bcfa;
case 0x48bd00:c.instructions+=3;goto B48bd00;
case 0x48bd02:c.instructions+=2;goto B48bd02;
case 0x48bd05:c.instructions+=1;goto B48bd05;
case 0x48bd07:goto L48bd07;
case 0x48bd09:c.instructions+=6;goto B48bd09;
case 0x48bd0a:c.instructions+=5;goto B48bd0a;
case 0x48bd0e:c.instructions+=4;goto B48bd0e;
case 0x48bd12:c.instructions+=3;goto B48bd12;
case 0x48bd13:c.instructions+=2;goto B48bd13;
case 0x48bd15:c.instructions+=1;goto B48bd15;
case 0x48bd1a:goto L48bd1a;
case 0x48bd1e:c.instructions+=4;goto B48bd1e;
case 0x48bd22:c.instructions+=3;goto B48bd22;
case 0x48bd25:c.instructions+=2;goto B48bd25;
case 0x48bd27:c.instructions+=1;goto B48bd27;
case 0x48bd29:goto L48bd29;
case 0x48bd2b:goto L48bd2b;
case 0x48bd2e:c.instructions+=13;goto B48bd2e;
case 0x48bd35:c.instructions+=12;goto B48bd35;
case 0x48bd38:c.instructions+=11;goto B48bd38;
case 0x48bd3b:c.instructions+=10;goto B48bd3b;
case 0x48bd3d:c.instructions+=9;goto B48bd3d;
case 0x48bd40:c.instructions+=8;goto B48bd40;
case 0x48bd43:c.instructions+=7;goto B48bd43;
case 0x48bd45:c.instructions+=6;goto B48bd45;
case 0x48bd48:c.instructions+=5;goto B48bd48;
case 0x48bd49:c.instructions+=4;goto B48bd49;
case 0x48bd4a:c.instructions+=3;goto B48bd4a;
case 0x48bd4b:c.instructions+=2;goto B48bd4b;
case 0x48bd4c:c.instructions+=1;goto B48bd4c;
case 0x48bd4f:goto L48bd4f;
case 0x48bd52:goto L48bd52;
case 0x48bd55:goto L48bd55;
case 0x48bd58:c.instructions+=10;goto B48bd58;
case 0x48bd5a:c.instructions+=9;goto B48bd5a;
case 0x48bd5d:c.instructions+=8;goto B48bd5d;
case 0x48bd5f:c.instructions+=7;goto B48bd5f;
case 0x48bd62:c.instructions+=6;goto B48bd62;
case 0x48bd65:c.instructions+=5;goto B48bd65;
case 0x48bd66:c.instructions+=4;goto B48bd66;
case 0x48bd67:c.instructions+=3;goto B48bd67;
case 0x48bd68:c.instructions+=2;goto B48bd68;
case 0x48bd69:c.instructions+=1;goto B48bd69;
case 0x48bd70:goto L48bd70;
case 0x48bd74:c.instructions+=6;goto B48bd74;
case 0x48bd76:c.instructions+=5;goto B48bd76;
case 0x48bd79:c.instructions+=4;goto B48bd79;
case 0x48bd7b:c.instructions+=3;goto B48bd7b;
case 0x48bd7e:c.instructions+=2;goto B48bd7e;
case 0x48bd81:c.instructions+=1;goto B48bd81;
case 0x48bd90:goto L48bd90;
case 0x48bd95:c.instructions+=2;goto B48bd95;
case 0x48bd97:c.instructions+=1;goto B48bd97;
case 0x48bd99:goto L48bd99;
case 0x48bd9c:c.instructions+=6;goto B48bd9c;
case 0x48bd9f:c.instructions+=5;goto B48bd9f;
case 0x48bda2:c.instructions+=4;goto B48bda2;
case 0x48bda4:c.instructions+=3;goto B48bda4;
case 0x48bda7:c.instructions+=2;goto B48bda7;
case 0x48bdaa:c.instructions+=1;goto B48bdaa;
case 0x48bdad:goto L48bdad;
case 0x48bdb2:c.instructions+=2;goto B48bdb2;
case 0x48bdb4:c.instructions+=1;goto B48bdb4;
case 0x48bdb6:goto L48bdb6;
case 0x48bdb9:c.instructions+=6;goto B48bdb9;
case 0x48bdbc:c.instructions+=5;goto B48bdbc;
case 0x48bdbf:c.instructions+=4;goto B48bdbf;
case 0x48bdc2:c.instructions+=3;goto B48bdc2;
case 0x48bdc4:c.instructions+=2;goto B48bdc4;
case 0x48bdc7:c.instructions+=1;goto B48bdc7;
case 0x48bdca:goto L48bdca;
case 0x48bdcf:c.instructions+=2;goto B48bdcf;
case 0x48bdd1:c.instructions+=1;goto B48bdd1;
case 0x48bdd3:goto L48bdd3;
case 0x48bdd6:c.instructions+=6;goto B48bdd6;
case 0x48bdd9:c.instructions+=5;goto B48bdd9;
case 0x48bddc:c.instructions+=4;goto B48bddc;
case 0x48bdde:c.instructions+=3;goto B48bdde;
case 0x48bde1:c.instructions+=2;goto B48bde1;
case 0x48bde4:c.instructions+=1;goto B48bde4;
case 0x48bde7:goto L48bde7;
case 0x48bdf0:goto L48bdf0;
case 0x48bdf1:c.instructions+=9;goto B48bdf1;
case 0x48bdf3:c.instructions+=8;goto B48bdf3;
case 0x48bdf6:c.instructions+=7;goto B48bdf6;
case 0x48bdfc:c.instructions+=6;goto B48bdfc;
case 0x48bdfd:c.instructions+=5;goto B48bdfd;
case 0x48bdfe:c.instructions+=4;goto B48bdfe;
case 0x48bdff:c.instructions+=3;goto B48bdff;
case 0x48be01:c.instructions+=2;goto B48be01;
case 0x48be08:c.instructions+=1;goto B48be08;
case 0x48be0d:goto L48be0d;
case 0x48be10:c.instructions+=4;goto B48be10;
case 0x48be13:c.instructions+=3;goto B48be13;
case 0x48be15:c.instructions+=2;goto B48be15;
case 0x48be18:c.instructions+=1;goto B48be18;
case 0x48be1a:goto L48be1a;
case 0x48be1d:goto L48be1d;
case 0x48be1f:c.instructions+=1;goto B48be1f;
case 0x48be25:goto L48be25;
case 0x48be26:c.instructions+=2;goto B48be26;
case 0x48be28:c.instructions+=1;goto B48be28;
case 0x48be2d:goto L48be2d;
case 0x48be30:c.instructions+=7;goto B48be30;
case 0x48be36:c.instructions+=6;goto B48be36;
case 0x48be3d:c.instructions+=5;goto B48be3d;
case 0x48be3e:c.instructions+=4;goto B48be3e;
case 0x48be3f:c.instructions+=3;goto B48be3f;
case 0x48be46:c.instructions+=2;goto B48be46;
case 0x48be4d:c.instructions+=1;goto B48be4d;
case 0x48be52:goto L48be52;
case 0x48be55:c.instructions+=6;goto B48be55;
case 0x48be5a:c.instructions+=5;goto B48be5a;
case 0x48be5c:c.instructions+=4;goto B48be5c;
case 0x48be5e:c.instructions+=3;goto B48be5e;
case 0x48be65:c.instructions+=2;goto B48be65;
case 0x48be66:c.instructions+=1;goto B48be66;
case 0x48be6b:goto L48be6b;
case 0x48be70:c.instructions+=5;goto B48be70;
case 0x48be72:c.instructions+=4;goto B48be72;
case 0x48be74:c.instructions+=3;goto B48be74;
case 0x48be7b:c.instructions+=2;goto B48be7b;
case 0x48be7c:c.instructions+=1;goto B48be7c;
case 0x48be81:goto L48be81;
case 0x48be88:c.instructions+=42;goto B48be88;
case 0x48be8f:c.instructions+=41;goto B48be8f;
case 0x48be96:c.instructions+=40;goto B48be96;
case 0x48be9d:c.instructions+=39;goto B48be9d;
case 0x48bea4:c.instructions+=38;goto B48bea4;
case 0x48beab:c.instructions+=37;goto B48beab;
case 0x48beae:c.instructions+=36;goto B48beae;
case 0x48beb5:c.instructions+=35;goto B48beb5;
case 0x48bebc:c.instructions+=34;goto B48bebc;
case 0x48bec3:c.instructions+=33;goto B48bec3;
case 0x48bec6:c.instructions+=32;goto B48bec6;
case 0x48bec8:c.instructions+=31;goto B48bec8;
case 0x48becf:c.instructions+=30;goto B48becf;
case 0x48bed6:c.instructions+=29;goto B48bed6;
case 0x48bedd:c.instructions+=28;goto B48bedd;
case 0x48bee0:c.instructions+=27;goto B48bee0;
case 0x48beeb:c.instructions+=26;goto B48beeb;
case 0x48bef6:c.instructions+=25;goto B48bef6;
case 0x48bf01:c.instructions+=24;goto B48bf01;
case 0x48bf0c:c.instructions+=23;goto B48bf0c;
case 0x48bf17:c.instructions+=22;goto B48bf17;
case 0x48bf22:c.instructions+=21;goto B48bf22;
case 0x48bf2d:c.instructions+=20;goto B48bf2d;
case 0x48bf38:c.instructions+=19;goto B48bf38;
case 0x48bf43:c.instructions+=18;goto B48bf43;
case 0x48bf4e:c.instructions+=17;goto B48bf4e;
case 0x48bf59:c.instructions+=16;goto B48bf59;
case 0x48bf64:c.instructions+=15;goto B48bf64;
case 0x48bf6f:c.instructions+=14;goto B48bf6f;
case 0x48bf7a:c.instructions+=13;goto B48bf7a;
case 0x48bf85:c.instructions+=12;goto B48bf85;
case 0x48bf90:c.instructions+=11;goto B48bf90;
case 0x48bf9b:c.instructions+=10;goto B48bf9b;
case 0x48bfa6:c.instructions+=9;goto B48bfa6;
case 0x48bfb1:c.instructions+=8;goto B48bfb1;
case 0x48bfbc:c.instructions+=7;goto B48bfbc;
case 0x48bfc7:c.instructions+=6;goto B48bfc7;
case 0x48bfd2:c.instructions+=5;goto B48bfd2;
case 0x48bfdd:c.instructions+=4;goto B48bfdd;
case 0x48bfe8:c.instructions+=3;goto B48bfe8;
case 0x48bff3:c.instructions+=2;goto B48bff3;
case 0x48bffa:c.instructions+=1;goto B48bffa;
default:missing_instruction(c.pc);}
B48b003:L48b003:{c.instructions+=96;NFSU2_TR(0x48b003);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48b007:{NFSU2_TR(0x48b007);
{u32 ea_=u32(r4(R+0)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48b00a:{NFSU2_TR(0x48b00a);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48b00e:{NFSU2_TR(0x48b00e);
{u32 ea_=u32(r4(R+0)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48b011:{NFSU2_TR(0x48b011);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48b013:{NFSU2_TR(0x48b013);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48b016:{NFSU2_TR(0x48b016);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48b019:{NFSU2_TR(0x48b019);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48b01b:{NFSU2_TR(0x48b01b);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48b01f:{NFSU2_TR(0x48b01f);
{u32 ea_=u32(r4(R+0)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48b022:{NFSU2_TR(0x48b022);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48b024:{NFSU2_TR(0x48b024);
{u32 ea_=u32(r4(R+16)+u32(132u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48b02b:{NFSU2_TR(0x48b02b);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48b02f:{NFSU2_TR(0x48b02f);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48b032:{NFSU2_TR(0x48b032);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48b035:{NFSU2_TR(0x48b035);
{u32 ea_=u32(r4(R+0)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48b038:{NFSU2_TR(0x48b038);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48b03a:{NFSU2_TR(0x48b03a);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48b03e:{NFSU2_TR(0x48b03e);
{u32 ea_=u32(r4(R+0)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48b041:{NFSU2_TR(0x48b041);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48b043:{NFSU2_TR(0x48b043);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48b047:{NFSU2_TR(0x48b047);
{u32 ea_=u32(r4(R+0)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48b04a:{NFSU2_TR(0x48b04a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48b04c:{NFSU2_TR(0x48b04c);
{u32 ea_=u32(r4(R+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48b053:{NFSU2_TR(0x48b053);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48b057:{NFSU2_TR(0x48b057);
{u32 ea_=u32(r4(R+0)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48b05a:{NFSU2_TR(0x48b05a);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48b05e:{NFSU2_TR(0x48b05e);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48b061:{NFSU2_TR(0x48b061);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48b063:{NFSU2_TR(0x48b063);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48b067:{NFSU2_TR(0x48b067);
{u32 ea_=u32(r4(R+0)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48b06a:{NFSU2_TR(0x48b06a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48b06c:{NFSU2_TR(0x48b06c);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48b06f:{NFSU2_TR(0x48b06f);
{u32 ea_=u32(r4(R+0)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48b072:{NFSU2_TR(0x48b072);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48b074:{NFSU2_TR(0x48b074);
{u32 ea_=u32(r4(R+16)+u32(140u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48b07b:{NFSU2_TR(0x48b07b);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48b07f:{NFSU2_TR(0x48b07f);
{u32 ea_=u32(r4(R+0)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48b082:{NFSU2_TR(0x48b082);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48b086:{NFSU2_TR(0x48b086);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48b089:{NFSU2_TR(0x48b089);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48b08b:{NFSU2_TR(0x48b08b);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48b08f:{NFSU2_TR(0x48b08f);
{u32 ea_=u32(r4(R+0)+u32(40u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48b092:{NFSU2_TR(0x48b092);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48b094:{NFSU2_TR(0x48b094);
{u32 ea_=u32(r4(R+0)+u32(44u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B48b097:{NFSU2_TR(0x48b097);
{u32 ea_=u32(r4(R+16)+u32(144u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48b09e:{NFSU2_TR(0x48b09e);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48b0a2:{NFSU2_TR(0x48b0a2);
{u32 ea_=u32(r4(R+0)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48b0a5:{NFSU2_TR(0x48b0a5);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48b0a9:{NFSU2_TR(0x48b0a9);
{u32 ea_=u32(r4(R+0)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48b0ac:{NFSU2_TR(0x48b0ac);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48b0ae:{NFSU2_TR(0x48b0ae);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48b0b2:{NFSU2_TR(0x48b0b2);
{u32 ea_=u32(r4(R+0)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48b0b5:{NFSU2_TR(0x48b0b5);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48b0b7:{NFSU2_TR(0x48b0b7);
u8 U[4];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B48b0bb:{NFSU2_TR(0x48b0bb);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48b0be:{NFSU2_TR(0x48b0be);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48b0bf:{NFSU2_TR(0x48b0bf);
{u32 ea_=u32(r4(R+0)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48b0c2:{NFSU2_TR(0x48b0c2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48b0c3:{NFSU2_TR(0x48b0c3);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48b0c5:{NFSU2_TR(0x48b0c5);
{u32 ea_=u32(r4(R+16)+u32(156u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48b0cc:{NFSU2_TR(0x48b0cc);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48b0cf:{NFSU2_TR(0x48b0cf);
{u32 ea_=u32(r4(R+0)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48b0d2:{NFSU2_TR(0x48b0d2);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48b0d6:{NFSU2_TR(0x48b0d6);
{u32 ea_=u32(r4(R+0)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48b0d9:{NFSU2_TR(0x48b0d9);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48b0db:{NFSU2_TR(0x48b0db);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48b0df:{NFSU2_TR(0x48b0df);
{u32 ea_=u32(r4(R+0)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48b0e2:{NFSU2_TR(0x48b0e2);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48b0e4:{NFSU2_TR(0x48b0e4);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48b0e8:{NFSU2_TR(0x48b0e8);
{u32 ea_=u32(r4(R+0)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48b0eb:{NFSU2_TR(0x48b0eb);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48b0ed:{NFSU2_TR(0x48b0ed);
{u32 ea_=u32(r4(R+16)+u32(160u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48b0f4:{NFSU2_TR(0x48b0f4);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48b0f8:{NFSU2_TR(0x48b0f8);
{u32 ea_=u32(r4(R+0)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48b0fb:{NFSU2_TR(0x48b0fb);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48b0ff:{NFSU2_TR(0x48b0ff);
{u32 ea_=u32(r4(R+0)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48b102:{NFSU2_TR(0x48b102);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48b104:{NFSU2_TR(0x48b104);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48b108:{NFSU2_TR(0x48b108);
{u32 ea_=u32(r4(R+0)+u32(60u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48b10b:{NFSU2_TR(0x48b10b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48b10d:{NFSU2_TR(0x48b10d);
{u32 ea_=u32(r4(R+20)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48b110:{NFSU2_TR(0x48b110);
{u32 ea_=u32(r4(R+0)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48b113:{NFSU2_TR(0x48b113);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48b115:{NFSU2_TR(0x48b115);
{u32 ea_=u32(r4(R+16)+u32(164u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48b11c:{NFSU2_TR(0x48b11c);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48b120:{NFSU2_TR(0x48b120);
{u32 ea_=u32(r4(R+0)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48b123:{NFSU2_TR(0x48b123);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48b127:{NFSU2_TR(0x48b127);
{u32 ea_=u32(r4(R+0)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48b12a:{NFSU2_TR(0x48b12a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48b12c:{NFSU2_TR(0x48b12c);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48b130:{NFSU2_TR(0x48b130);
{u32 ea_=u32(r4(R+0)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48b133:{NFSU2_TR(0x48b133);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48b135:{NFSU2_TR(0x48b135);
{u32 ea_=u32(r4(R+0)+u32(60u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B48b138:{NFSU2_TR(0x48b138);
{u32 ea_=u32(r4(R+16)+u32(168u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48b13f:{NFSU2_TR(0x48b13f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48b144ull));
TAIL_STATIC(0x4012b0u,401);
}
B48b144:L48b144:{c.instructions+=5;NFSU2_TR(0x48b144);
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
B48b147:{NFSU2_TR(0x48b147);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B48b148:{NFSU2_TR(0x48b148);
__builtin_memmove((R+16),(R+20),4);
}
B48b14a:{NFSU2_TR(0x48b14a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B48b14b:{NFSU2_TR(0x48b14b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B48b150:L48b150:{c.instructions+=4;NFSU2_TR(0x48b150);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48b153:{NFSU2_TR(0x48b153);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xffffffffull))));
__builtin_memmove((R+0),(U+0),4);
}
B48b156:{NFSU2_TR(0x48b156);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x9ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x9ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x9ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B48b159:{NFSU2_TR(0x48b159);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L48b16f;}}
}
B48b15b:L48b15b:{c.instructions+=2;NFSU2_TR(0x48b15b);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48b17cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B48b162:{NFSU2_TR(0x48b162);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x48b174ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B48b169:L48b169:{c.instructions+=2;NFSU2_TR(0x48b169);
w4(R+0,u32(0x1ull));
}
B48b16e:{NFSU2_TR(0x48b16e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B48b16f:L48b16f:{c.instructions+=2;NFSU2_TR(0x48b16f);
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
B48b171:{NFSU2_TR(0x48b171);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B48b190:L48b190:{c.instructions+=4;NFSU2_TR(0x48b190);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48b193:{NFSU2_TR(0x48b193);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xffffffffull))));
__builtin_memmove((R+0),(U+0),4);
}
B48b196:{NFSU2_TR(0x48b196);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x9ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x9ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x9ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B48b199:{NFSU2_TR(0x48b199);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L48b1b6;}}
}
B48b19b:L48b19b:{c.instructions+=2;NFSU2_TR(0x48b19b);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48b1ccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B48b1a2:{NFSU2_TR(0x48b1a2);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x48b1c0ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B48b1a9:L48b1a9:{c.instructions+=3;NFSU2_TR(0x48b1a9);
w4(R+0,u32(0x1ull));
}
B48b1ae:{NFSU2_TR(0x48b1ae);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8900acull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B48b1b5:{NFSU2_TR(0x48b1b5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B48b1b6:L48b1b6:{c.instructions+=3;NFSU2_TR(0x48b1b6);
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
B48b1b8:{NFSU2_TR(0x48b1b8);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8900acull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B48b1bf:{NFSU2_TR(0x48b1bf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B48b1e0:L48b1e0:{c.instructions+=7;NFSU2_TR(0x48b1e0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48b1e1:{NFSU2_TR(0x48b1e1);
__builtin_memmove((R+20),(R+16),4);
}
B48b1e3:{NFSU2_TR(0x48b1e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48b1e6:{NFSU2_TR(0x48b1e6);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x70ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B48b1e9:{NFSU2_TR(0x48b1e9);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x832de0ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x832de0ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x832de0ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B48b1ee:{NFSU2_TR(0x48b1ee);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B48b1ef:{NFSU2_TR(0x48b1ef);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B48b1f0:L48b1f0:{c.instructions+=5;NFSU2_TR(0x48b1f0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48b1f2:{NFSU2_TR(0x48b1f2);
u8 U[4];
w4(U+0,u32(0x78d950ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48b1f7:{NFSU2_TR(0x48b1f7);
u8 U[4];
w4(U+0,u32(0x80ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48b1fc:{NFSU2_TR(0x48b1fc);
u8 U[4];
w4(U+0,u32(0x7cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48b1fe:{NFSU2_TR(0x48b1fe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48b203ull));
TAIL_STATIC(0x440df0u,440);
}
B48b203:L48b203:{c.instructions+=3;NFSU2_TR(0x48b203);
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
B48b206:{NFSU2_TR(0x48b206);
__builtin_memmove(gp(0x82db0c),(R+0),4);
}
B48b20b:{NFSU2_TR(0x48b20b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B48b210:L48b210:{c.instructions+=3;NFSU2_TR(0x48b210);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48b214:{NFSU2_TR(0x48b214);
__builtin_memmove(gp(0x7f3d54),(R+0),4);
}
B48b219:{NFSU2_TR(0x48b219);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B48b220:L48b220:{c.instructions+=11;NFSU2_TR(0x48b220);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B48b223:{NFSU2_TR(0x48b223);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B48b227:{NFSU2_TR(0x48b227);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48b228:{NFSU2_TR(0x48b228);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48b229:{NFSU2_TR(0x48b229);
__builtin_memmove((R+20),(R+4),4);
}
B48b22b:{NFSU2_TR(0x48b22b);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B48b22d:{NFSU2_TR(0x48b22d);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B48b230:{NFSU2_TR(0x48b230);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48b231:{NFSU2_TR(0x48b231);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48b232:{NFSU2_TR(0x48b232);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48b236:{NFSU2_TR(0x48b236);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L48b248;}}
}
B48b238:L48b238:{c.instructions+=5;NFSU2_TR(0x48b238);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B48b239:{NFSU2_TR(0x48b239);
w4(R+0,u32(0x1ull));
}
B48b23e:{NFSU2_TR(0x48b23e);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r1(U+0))));
}
B48b240:{NFSU2_TR(0x48b240);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B48b242:{NFSU2_TR(0x48b242);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x48b238u);}goto L48b238;}}
}
B48b244:L48b244:{c.instructions+=1;NFSU2_TR(0x48b244);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48b248:L48b248:{c.instructions+=5;NFSU2_TR(0x48b248);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48b24c:{NFSU2_TR(0x48b24c);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B48b24e:{NFSU2_TR(0x48b24e);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B48b251:{NFSU2_TR(0x48b251);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48b255:{NFSU2_TR(0x48b255);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L48b267;}}
}
B48b257:L48b257:{c.instructions+=5;NFSU2_TR(0x48b257);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B48b258:{NFSU2_TR(0x48b258);
w4(R+24,u32(0x1ull));
}
B48b25d:{NFSU2_TR(0x48b25d);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r1(U+0))));
}
B48b25f:{NFSU2_TR(0x48b25f);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(R+24),r4(U+0)));
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B48b261:{NFSU2_TR(0x48b261);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x48b257u);}goto L48b257;}}
}
B48b263:L48b263:{c.instructions+=1;NFSU2_TR(0x48b263);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48b267:L48b267:{c.instructions+=5;NFSU2_TR(0x48b267);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48b26b:{NFSU2_TR(0x48b26b);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xfffffffcull))));
}
B48b26e:{NFSU2_TR(0x48b26e);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B48b270:{NFSU2_TR(0x48b270);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0x7dull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x7dull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x7dull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B48b273:{NFSU2_TR(0x48b273);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L48b2ab;}}
}
B48b275:L48b275:{c.instructions+=2;NFSU2_TR(0x48b275);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x48b384ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(r1(U+4)));
}
B48b27c:{NFSU2_TR(0x48b27c);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x48b36cull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B48b283:L48b283:{c.instructions+=2;NFSU2_TR(0x48b283);
__builtin_memmove((R+12),(R+8),4);
}
B48b285:{NFSU2_TR(0x48b285);
{goto L48b2a8;}
}
B48b287:L48b287:{c.instructions+=4;NFSU2_TR(0x48b287);
__builtin_memmove((R+12),(R+8),4);
}
B48b289:{NFSU2_TR(0x48b289);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+12)))));
w8(U+8,u64(s64(s32(r4(R+0)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+12,u32(r8(U+16)));
}
B48b28c:{NFSU2_TR(0x48b28c);
w4(R+12,shl<u32>(r4(R+12),u64(u32(0x1ull))));
}
B48b28e:{NFSU2_TR(0x48b28e);
{goto L48b2ab;}
}
B48b290:L48b290:{c.instructions+=3;NFSU2_TR(0x48b290);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+8)))));
w8(U+8,u64(s64(s32(r4(R+0)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(r8(U+16)));
}
B48b293:{NFSU2_TR(0x48b293);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((R+12),(U+4),4);
}
B48b296:{NFSU2_TR(0x48b296);
{goto L48b2ab;}
}
B48b298:L48b298:{c.instructions+=4;NFSU2_TR(0x48b298);
__builtin_memmove((R+12),(R+8),4);
}
B48b29a:{NFSU2_TR(0x48b29a);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+12)))));
w8(U+8,u64(s64(s32(r4(R+0)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+12,u32(r8(U+16)));
}
B48b29d:{NFSU2_TR(0x48b29d);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+12,shl<u32>(r4(R+12),u64(r4(U+0))));
}
B48b2a0:{NFSU2_TR(0x48b2a0);
{goto L48b2ab;}
}
B48b2a2:L48b2a2:{c.instructions+=2;NFSU2_TR(0x48b2a2);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xffffffffull))));
__builtin_memmove((R+12),(U+0),4);
}
B48b2a5:{NFSU2_TR(0x48b2a5);
w4(R+12,u32(u32(r4(R+12))&u32(u32(0x1ull))));
}
B48b2a8:L48b2a8:{c.instructions+=1;NFSU2_TR(0x48b2a8);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+12)))));
w8(U+8,u64(s64(s32(r4(R+0)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+12,u32(r8(U+16)));
}
B48b2ab:L48b2ab:{c.instructions+=4;NFSU2_TR(0x48b2ab);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48b2af:{NFSU2_TR(0x48b2af);
__builtin_memmove((R+24),(R+0),4);
}
B48b2b1:{NFSU2_TR(0x48b2b1);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((R+28),(U+0),4);
}
B48b2b4:{NFSU2_TR(0x48b2b4);
w4(R+4,u32(0x6ull));
}
B48b2b9:L48b2b9:{c.instructions+=1;NFSU2_TR(0x48b2b9);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L48b2bb;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x48b2b9u);}goto L48b2b9;}
}
B48b2bb:L48b2bb:{c.instructions+=3;NFSU2_TR(0x48b2bb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48b2bc:{NFSU2_TR(0x48b2bc);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x23ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B48b2c0:{NFSU2_TR(0x48b2c0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48b2c5ull));
TAIL_STATIC(0x43db50u,43d);
}
B48b2c5:L48b2c5:{c.instructions+=49;NFSU2_TR(0x48b2c5);
u8 U[5];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B48b2c9:{NFSU2_TR(0x48b2c9);
u8 U[6];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+8),(U+4),2);
}
B48b2ce:{NFSU2_TR(0x48b2ce);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4aull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B48b2d1:{NFSU2_TR(0x48b2d1);
u8 U[5];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B48b2d5:{NFSU2_TR(0x48b2d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x24ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48b2d8:{NFSU2_TR(0x48b2d8);
u8 U[6];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+0),(U+4),2);
}
B48b2dd:{NFSU2_TR(0x48b2dd);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x44ull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B48b2e1:{NFSU2_TR(0x48b2e1);
u8 U[6];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+8),(U+4),2);
}
B48b2e6:{NFSU2_TR(0x48b2e6);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B48b2e9:{NFSU2_TR(0x48b2e9);
u8 U[5];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B48b2ed:{NFSU2_TR(0x48b2ed);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B48b2f0:{NFSU2_TR(0x48b2f0);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x46ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B48b2f4:{NFSU2_TR(0x48b2f4);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B48b2f6:{NFSU2_TR(0x48b2f6);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4cull))));
__builtin_memmove((U+4),(R+8),2);
s2(u32(r4(U+0)),r2(U+4));
}
B48b2fa:{NFSU2_TR(0x48b2fa);
u8 U[5];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B48b2fe:{NFSU2_TR(0x48b2fe);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x55ull))));
__builtin_memmove((U+4),(R+4),1);
s1(u32(r4(U+0)),r1(U+4));
}
B48b301:{NFSU2_TR(0x48b301);
w4(R+4,u32(0x100ull));
}
B48b306:{NFSU2_TR(0x48b306);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B48b307:{NFSU2_TR(0x48b307);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48b30a:{NFSU2_TR(0x48b30a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x34ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48b30d:{NFSU2_TR(0x48b30d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48b310:{NFSU2_TR(0x48b310);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4bull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B48b313:{NFSU2_TR(0x48b313);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x49ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B48b316:{NFSU2_TR(0x48b316);
u8 U[5];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B48b31a:{NFSU2_TR(0x48b31a);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B48b31d:{NFSU2_TR(0x48b31d);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x51ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B48b320:{NFSU2_TR(0x48b320);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4full))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B48b323:{NFSU2_TR(0x48b323);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x57ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B48b326:{NFSU2_TR(0x48b326);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x52ull))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B48b329:{NFSU2_TR(0x48b329);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x5eull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B48b32d:{NFSU2_TR(0x48b32d);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x60ull))));
__builtin_memmove((U+4),(R+0),2);
s2(u32(r4(U+0)),r2(U+4));
}
B48b331:{NFSU2_TR(0x48b331);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x62ull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B48b335:{NFSU2_TR(0x48b335);
u8 U[6];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x64ull))));
__builtin_memmove((U+4),(R+4),2);
s2(u32(r4(U+0)),r2(U+4));
}
B48b339:{NFSU2_TR(0x48b339);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48b33d:{NFSU2_TR(0x48b33d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48b340:{NFSU2_TR(0x48b340);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48b344:{NFSU2_TR(0x48b344);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B48b345:{NFSU2_TR(0x48b345);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x40ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48b348:{NFSU2_TR(0x48b348);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48b34b:{NFSU2_TR(0x48b34b);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x4eull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B48b34f:{NFSU2_TR(0x48b34f);
u8 U[5];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x56ull))));
__builtin_memmove((U+4),(R+8),1);
s1(u32(r4(U+0)),r1(U+4));
}
B48b352:{NFSU2_TR(0x48b352);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x6cull))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48b355:{NFSU2_TR(0x48b355);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x70ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48b358:{NFSU2_TR(0x48b358);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x74ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48b35b:{NFSU2_TR(0x48b35b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x78ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B48b362:{NFSU2_TR(0x48b362);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B48b363:{NFSU2_TR(0x48b363);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B48b364:{NFSU2_TR(0x48b364);
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
B48b367:{NFSU2_TR(0x48b367);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x28ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B48b410:L48b410:{c.instructions+=7;NFSU2_TR(0x48b410);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48b411:{NFSU2_TR(0x48b411);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B48b415:{NFSU2_TR(0x48b415);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48b416:{NFSU2_TR(0x48b416);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48b417:{NFSU2_TR(0x48b417);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B48b41a:{NFSU2_TR(0x48b41a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48b41b:{NFSU2_TR(0x48b41b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48b420ull));
TAIL_STATIC(0x4022c0u,402);
}
B48b420:L48b420:{c.instructions+=3;NFSU2_TR(0x48b420);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((R+24),(U+0),4);
}
B48b423:{NFSU2_TR(0x48b423);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48b424:{NFSU2_TR(0x48b424);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48b429ull));
TAIL_STATIC(0x4022c0u,402);
}
B48b429:L48b429:{c.instructions+=4;NFSU2_TR(0x48b429);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48b42c:{NFSU2_TR(0x48b42c);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B48b430:{NFSU2_TR(0x48b430);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48b431:{NFSU2_TR(0x48b431);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48b436ull));
TAIL_STATIC(0x4022c0u,402);
}
B48b436:L48b436:{c.instructions+=10;NFSU2_TR(0x48b436);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48b439:{NFSU2_TR(0x48b439);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B48b43c:{NFSU2_TR(0x48b43c);
w4(R+24,u32(u32(r4(R+24))-u32(r4(R+28))));
}
B48b43e:{NFSU2_TR(0x48b43e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B48b43f:{NFSU2_TR(0x48b43f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48b442:{NFSU2_TR(0x48b442);
u8 U[6];
w1(R+512,carry<u32>(r4(R+0),u32(0x10ull)));
w1(R+523,scarry<u32>(r4(R+0),u32(0x10ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B48b445:{NFSU2_TR(0x48b445);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B48b446:{NFSU2_TR(0x48b446);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48b449:{NFSU2_TR(0x48b449);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B48b44a:{NFSU2_TR(0x48b44a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B48b450:L48b450:{c.instructions+=3;NFSU2_TR(0x48b450);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48b454:{NFSU2_TR(0x48b454);
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
B48b456:{NFSU2_TR(0x48b456);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L48b461;}}
}
B48b458:L48b458:{c.instructions+=2;NFSU2_TR(0x48b458);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48b45e:{NFSU2_TR(0x48b45e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B48b461:L48b461:{c.instructions+=3;NFSU2_TR(0x48b461);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B48b464:{NFSU2_TR(0x48b464);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48b468:{NFSU2_TR(0x48b468);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L48b47b;}}
}
B48b46a:L48b46a:{c.instructions+=2;NFSU2_TR(0x48b46a);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B48b46e:{NFSU2_TR(0x48b46e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48b473ull));
TAIL_STATIC(0x75bed4u,75b);
}
B48b473:L48b473:{c.instructions+=2;NFSU2_TR(0x48b473);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48b477:{NFSU2_TR(0x48b477);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B48b47b:L48b47b:{c.instructions+=3;NFSU2_TR(0x48b47b);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48b47f:{NFSU2_TR(0x48b47f);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B48b481:{NFSU2_TR(0x48b481);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48b486ull));
TAIL_STATIC(0x75bed4u,75b);
}
B48b486:L48b486:{c.instructions+=3;NFSU2_TR(0x48b486);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48b48a:{NFSU2_TR(0x48b48a);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xda,0x20"::"a"(ea_):"memory");}
}
B48b48e:{NFSU2_TR(0x48b48e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B48b4a0:L48b4a0:{c.instructions+=3;NFSU2_TR(0x48b4a0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48b4a4:{NFSU2_TR(0x48b4a4);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x34202ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B48b4aa:{NFSU2_TR(0x48b4aa);
if(r1(R+518)){{goto L48b4af;}}
}
B48b4ac:L48b4ac:{c.instructions+=2;NFSU2_TR(0x48b4ac);
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
B48b4ae:{NFSU2_TR(0x48b4ae);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B48b4af:L48b4af:{c.instructions+=14;NFSU2_TR(0x48b4af);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x17ull))));
__builtin_memmove((R+0),(U+0),4);
}
B48b4b2:{NFSU2_TR(0x48b4b2);
__builtin_memmove((R+8),(R+0),4);
}
B48b4b4:{NFSU2_TR(0x48b4b4);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xfffffff0ull))));
}
B48b4b7:{NFSU2_TR(0x48b4b7);
__builtin_memmove(gp(0x82db14),(R+8),4);
}
B48b4bd:{NFSU2_TR(0x48b4bd);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B48b4c0:{NFSU2_TR(0x48b4c0);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffff0ull))));
}
B48b4c3:{NFSU2_TR(0x48b4c3);
u8 U[6];
w4(R+8,u32(u32(r4(R+8))-u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+8))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+8))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B48b4c5:{NFSU2_TR(0x48b4c5);
u8 U[12];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+8))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B48b4c9:{NFSU2_TR(0x48b4c9);
w4(R+0,u32(0xf0f0f0f1ull));
}
B48b4ce:{NFSU2_TR(0x48b4ce);
u8 U[24];
w8(U+0,u64(r4(R+0)));
w8(U+8,u64(r4(R+4)));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(u64(r8(U+16))>>32));
w1(R+512,u8((r4(R+8))!=(u32(0x0ull))));
w4(R+0,u32(r8(U+16)));
}
B48b4d0:{NFSU2_TR(0x48b4d0);
u8 U[48];
w4(U+40,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
__builtin_memmove((U+44),(R+8),4);
w4(R+8,shr<u32>(r4(R+8),u64(r4(U+40))));
w1(U+24,u8((r4(U+40))==(u32(0x0ull))));
w4(U+25,u32(u32(r4(U+40))-u32(u32(0x1ull))));
w4(U+29,shr<u32>(r4(U+44),u64(r4(U+25))));
w4(U+33,u32(u32(r4(U+29))&u32(u32(0x1ull))));
w1(U+37,u8((r4(U+33))!=(u32(0x0ull))));
__builtin_memmove((U+0),(U+24),1);
w1(U+1,u8(u32(r1(U+0))*u32(r1(R+512))));
w1(U+2,u8(!(r1(U+24))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+37))));
w1(R+512,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+38,u8((r4(U+40))==(u32(0x1ull))));
w1(U+39,u8(s32(r4(U+44))<s32(u32(0x0ull))));
__builtin_memmove((U+0),(U+38),1);
w1(U+1,u8(u32(r1(U+0))*u32(u8(0x0ull))));
w1(U+2,u8(!(r1(U+38))));
__builtin_memmove((U+3),(U+2),1);
w1(U+4,u8(u32(r1(U+3))*u32(r1(U+39))));
w1(R+523,u8(u32(r1(U+1))|u32(r1(U+4))));
w1(U+5,u8((r4(U+40))!=(u32(0x0ull))));
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
B48b4d3:{NFSU2_TR(0x48b4d3);
__builtin_memmove(gp(0x82db18),(R+8),4);
}
B48b4d9:{NFSU2_TR(0x48b4d9);
w4(R+0,u32(0x1ull));
}
B48b4de:{NFSU2_TR(0x48b4de);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B48b4e0:L48b4e0:{c.instructions+=10;NFSU2_TR(0x48b4e0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48b4e1:{NFSU2_TR(0x48b4e1);
__builtin_memmove((R+20),(R+16),4);
}
B48b4e3:{NFSU2_TR(0x48b4e3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48b4e4:{NFSU2_TR(0x48b4e4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48b4e5:{NFSU2_TR(0x48b4e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B48b4e8:{NFSU2_TR(0x48b4e8);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B48b4ea:{NFSU2_TR(0x48b4ea);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B48b4ec:{NFSU2_TR(0x48b4ec);
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
B48b4ee:{NFSU2_TR(0x48b4ee);
__builtin_memmove(gp(0x82db1c),(R+4),4);
}
B48b4f4:{NFSU2_TR(0x48b4f4);
if(r1(R+518)){{goto L48b51e;}}
}
B48b4f6:L48b4f6:{c.instructions+=3;NFSU2_TR(0x48b4f6);
__builtin_memmove((R+8),gp(0x82db18),4);
}
B48b4fc:{NFSU2_TR(0x48b4fc);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
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
B48b4fe:{NFSU2_TR(0x48b4fe);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L48b51e;}}
}
B48b500:L48b500:{c.instructions+=1;NFSU2_TR(0x48b500);
__builtin_memmove((R+0),gp(0x82db14),4);
}
B48b505:L48b505:{c.instructions+=2;NFSU2_TR(0x48b505);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B48b508:{NFSU2_TR(0x48b508);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L48b512;}}
}
B48b50a:L48b50a:{c.instructions+=2;NFSU2_TR(0x48b50a);
__builtin_memmove((R+4),(R+0),4);
}
B48b50c:{NFSU2_TR(0x48b50c);
__builtin_memmove(gp(0x82db1c),(R+4),4);
}
B48b512:L48b512:{c.instructions+=3;NFSU2_TR(0x48b512);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x110ull))));
}
B48b517:{NFSU2_TR(0x48b517);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+8))==(u32(0x0ull))));
}
B48b518:{NFSU2_TR(0x48b518);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x48b505u);}goto L48b505;}}
}
B48b51a:L48b51a:{c.instructions+=2;NFSU2_TR(0x48b51a);
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
B48b51c:{NFSU2_TR(0x48b51c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L48b540;}}
}
B48b51e:L48b51e:{c.instructions+=7;NFSU2_TR(0x48b51e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B48b51f:{NFSU2_TR(0x48b51f);
s4(0x830d90,u32(0x0ull));
}
B48b529:{NFSU2_TR(0x48b529);
s4(0x830d94,u32(0x0ull));
}
B48b533:{NFSU2_TR(0x48b533);
s4(0x830d98,u32(0x0ull));
}
B48b53d:{NFSU2_TR(0x48b53d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B48b53e:{NFSU2_TR(0x48b53e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B48b53f:{NFSU2_TR(0x48b53f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B48b540:L48b540:{c.instructions+=4;NFSU2_TR(0x48b540);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B48b542:{NFSU2_TR(0x48b542);
w4(R+8,u32(0x2ull));
}
B48b547:{NFSU2_TR(0x48b547);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B48b549:{NFSU2_TR(0x48b549);
if(r1(R+518)){{goto L48b571;}}
}
B48b54b:L48b54b:{c.instructions+=5;NFSU2_TR(0x48b54b);
__builtin_memmove(gp(0x82db1c),(R+24),4);
}
B48b551:{NFSU2_TR(0x48b551);
s4(0x830d90,u32(0x0ull));
}
B48b55b:{NFSU2_TR(0x48b55b);
s4(0x830d94,u32(0x0ull));
}
B48b565:{NFSU2_TR(0x48b565);
s4(0x830d98,u32(0x0ull));
}
B48b56f:{NFSU2_TR(0x48b56f);
{goto L48b58a;}
}
B48b571:L48b571:{c.instructions+=6;NFSU2_TR(0x48b571);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48b574:{NFSU2_TR(0x48b574);
__builtin_memmove(gp(0x830d90),(R+0),4);
}
B48b579:{NFSU2_TR(0x48b579);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48b57c:{NFSU2_TR(0x48b57c);
__builtin_memmove(gp(0x830d94),(R+0),4);
}
B48b581:{NFSU2_TR(0x48b581);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48b584:{NFSU2_TR(0x48b584);
__builtin_memmove(gp(0x830d98),(R+4),4);
}
B48b58a:L48b58a:{c.instructions+=3;NFSU2_TR(0x48b58a);
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
B48b58c:{NFSU2_TR(0x48b58c);
w4(R+4,u32(0x44ull));
}
B48b591:{NFSU2_TR(0x48b591);
w4(R+28,u32(0x82d270ull));
}
B48b596:L48b596:{c.instructions+=1;NFSU2_TR(0x48b596);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L48b598;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x48b596u);}goto L48b596;}
}
B48b598:L48b598:{c.instructions+=61;NFSU2_TR(0x48b598);
w4(R+4,u32(0x1ull));
}
B48b59d:{NFSU2_TR(0x48b59d);
__builtin_memmove(gp(0x82d290),(R+0),4);
}
B48b5a2:{NFSU2_TR(0x48b5a2);
__builtin_memmove(gp(0x82d294),(R+0),4);
}
B48b5a7:{NFSU2_TR(0x48b5a7);
__builtin_memmove(gp(0x82d298),(R+0),4);
}
B48b5ac:{NFSU2_TR(0x48b5ac);
__builtin_memmove(gp(0x82d29c),(R+0),4);
}
B48b5b1:{NFSU2_TR(0x48b5b1);
__builtin_memmove(gp(0x82d2a0),(R+0),4);
}
B48b5b6:{NFSU2_TR(0x48b5b6);
__builtin_memmove(gp(0x82d2a4),(R+0),4);
}
B48b5bb:{NFSU2_TR(0x48b5bb);
__builtin_memmove(gp(0x82d2b8),(R+0),4);
}
B48b5c0:{NFSU2_TR(0x48b5c0);
__builtin_memmove(gp(0x82d2bc),(R+0),4);
}
B48b5c5:{NFSU2_TR(0x48b5c5);
w1(R+0,u8(0x80ull));
}
B48b5c7:{NFSU2_TR(0x48b5c7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B48b5c8:{NFSU2_TR(0x48b5c8);
__builtin_memmove(gp(0x82d2a8),(R+24),4);
}
B48b5ce:{NFSU2_TR(0x48b5ce);
__builtin_memmove(gp(0x82d2c4),(R+24),4);
}
B48b5d4:{NFSU2_TR(0x48b5d4);
__builtin_memmove(gp(0x82d2cc),(R+24),4);
}
B48b5da:{NFSU2_TR(0x48b5da);
__builtin_memmove(gp(0x82d2e8),(R+24),4);
}
B48b5e0:{NFSU2_TR(0x48b5e0);
__builtin_memmove(gp(0x82d30c),(R+24),4);
}
B48b5e6:{NFSU2_TR(0x48b5e6);
__builtin_memmove(gp(0x82d270),(R+8),4);
}
B48b5ec:{NFSU2_TR(0x48b5ec);
__builtin_memmove(gp(0x82d2ac),(R+4),4);
}
B48b5f2:{NFSU2_TR(0x48b5f2);
s4(0x82d2b0,u32(0x3f800000ull));
}
B48b5fc:{NFSU2_TR(0x48b5fc);
s4(0x82d2b4,u32(0x42700000ull));
}
B48b606:{NFSU2_TR(0x48b606);
s1(0x82d2c0,u8(0xffull));
}
B48b60d:{NFSU2_TR(0x48b60d);
s1(0x82d2c1,u8(0xc8ull));
}
B48b614:{NFSU2_TR(0x48b614);
s1(0x82d2c2,u8(0x64ull));
}
B48b61b:{NFSU2_TR(0x48b61b);
__builtin_memmove(gp(0x82d2c3),(R+0),1);
}
B48b620:{NFSU2_TR(0x48b620);
s4(0x82d2c8,u32(0x0ull));
}
B48b62a:{NFSU2_TR(0x48b62a);
__builtin_memmove(gp(0x82d2d0),(R+4),4);
}
B48b630:{NFSU2_TR(0x48b630);
s4(0x82d2d4,u32(0x3f000000ull));
}
B48b63a:{NFSU2_TR(0x48b63a);
__builtin_memmove(gp(0x82d2d8),(MODV+220),4);
}
B48b644:{NFSU2_TR(0x48b644);
s4(0x82d2dc,u32(0x0ull));
}
B48b64e:{NFSU2_TR(0x48b64e);
s4(0x82d2e0,u32(0x0ull));
}
B48b658:{NFSU2_TR(0x48b658);
s1(0x82d2e4,u8(0x82ull));
}
B48b65f:{NFSU2_TR(0x48b65f);
s1(0x82d2e5,u8(0x9full));
}
B48b666:{NFSU2_TR(0x48b666);
s1(0x82d2e6,u8(0x7aull));
}
B48b66d:{NFSU2_TR(0x48b66d);
__builtin_memmove(gp(0x82d2e7),(R+0),1);
}
B48b672:{NFSU2_TR(0x48b672);
s4(0x82d2ec,u32(0x0ull));
}
B48b67c:{NFSU2_TR(0x48b67c);
__builtin_memmove(gp(0x82d2f0),(R+8),4);
}
B48b682:{NFSU2_TR(0x48b682);
__builtin_memmove(gp(0x82d2f4),(R+4),4);
}
B48b688:{NFSU2_TR(0x48b688);
s4(0x82d2f8,u32(0x3f333333ull));
}
B48b692:{NFSU2_TR(0x48b692);
s4(0x82d2fc,u32(0x44480000ull));
}
B48b69c:{NFSU2_TR(0x48b69c);
s4(0x82d300,u32(0xc1100000ull));
}
B48b6a6:{NFSU2_TR(0x48b6a6);
s4(0x82d304,u32(0x41e00000ull));
}
B48b6b0:{NFSU2_TR(0x48b6b0);
s1(0x82d308,u8(0x9full));
}
B48b6b7:{NFSU2_TR(0x48b6b7);
s1(0x82d309,u8(0x7aull));
}
B48b6be:{NFSU2_TR(0x48b6be);
s1(0x82d30a,u8(0x4bull));
}
B48b6c5:{NFSU2_TR(0x48b6c5);
__builtin_memmove(gp(0x82d30b),(R+0),1);
}
B48b6ca:{NFSU2_TR(0x48b6ca);
s4(0x82d310,u32(0x3e4ccccdull));
}
B48b6d4:{NFSU2_TR(0x48b6d4);
__builtin_memmove(gp(0x82d314),(R+8),4);
}
B48b6da:{NFSU2_TR(0x48b6da);
__builtin_memmove(gp(0x82d318),(R+4),4);
}
B48b6e0:{NFSU2_TR(0x48b6e0);
s4(0x82d31c,u32(0x3e99999aull));
}
B48b6ea:{NFSU2_TR(0x48b6ea);
s4(0x82d320,u32(0x44480000ull));
}
B48b6f4:{NFSU2_TR(0x48b6f4);
s4(0x82d324,u32(0x41e00000ull));
}
B48b6fe:{NFSU2_TR(0x48b6fe);
s4(0x82d328,u32(0x41100000ull));
}
B48b708:{NFSU2_TR(0x48b708);
s1(0x82d32c,u8(0xa6ull));
}
B48b70f:{NFSU2_TR(0x48b70f);
s1(0x82d32d,u8(0x77ull));
}
B48b716:{NFSU2_TR(0x48b716);
s1(0x82d32e,u8(0x48ull));
}
B48b71d:{NFSU2_TR(0x48b71d);
__builtin_memmove(gp(0x82d32f),(R+0),1);
}
B48b722:{NFSU2_TR(0x48b722);
s4(0x82d330,u32(0x4000ull));
}
B48b72c:{NFSU2_TR(0x48b72c);
s4(0x82d334,u32(0x3e4ccccdull));
}
B48b736:{NFSU2_TR(0x48b736);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B48b737:{NFSU2_TR(0x48b737);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B48b738:{NFSU2_TR(0x48b738);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B48b740:L48b740:{c.instructions+=5;NFSU2_TR(0x48b740);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48b744:{NFSU2_TR(0x48b744);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B48b746:{NFSU2_TR(0x48b746);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B48b748:{NFSU2_TR(0x48b748);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0x34202ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x34202ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x34202ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B48b74e:{NFSU2_TR(0x48b74e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L48b75f;}}
}
B48b750:L48b750:{c.instructions+=3;NFSU2_TR(0x48b750);
__builtin_memmove(gp(0x82db14),(R+0),4);
}
B48b755:{NFSU2_TR(0x48b755);
__builtin_memmove(gp(0x82db18),(R+0),4);
}
B48b75a:{NFSU2_TR(0x48b75a);
w4(R+0,u32(0x1ull));
}
B48b75f:L48b75f:{c.instructions+=1;NFSU2_TR(0x48b75f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B48b760:L48b760:{c.instructions+=11;NFSU2_TR(0x48b760);
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
B48b762:{NFSU2_TR(0x48b762);
__builtin_memmove(gp(0x82db1c),(R+0),4);
}
B48b767:{NFSU2_TR(0x48b767);
__builtin_memmove(gp(0x830d90),(R+0),4);
}
B48b76c:{NFSU2_TR(0x48b76c);
__builtin_memmove(gp(0x830d94),(R+0),4);
}
B48b771:{NFSU2_TR(0x48b771);
__builtin_memmove(gp(0x830d98),(R+0),4);
}
B48b776:{NFSU2_TR(0x48b776);
__builtin_memmove(gp(0x82d5a8),(R+0),4);
}
B48b77b:{NFSU2_TR(0x48b77b);
__builtin_memmove(gp(0x82d5ac),(R+0),4);
}
B48b780:{NFSU2_TR(0x48b780);
__builtin_memmove(gp(0x82d5b0),(R+0),4);
}
B48b785:{NFSU2_TR(0x48b785);
__builtin_memmove(gp(0x82d5b4),(R+0),4);
}
B48b78a:{NFSU2_TR(0x48b78a);
__builtin_memmove(gp(0x82d5b8),(R+0),4);
}
B48b78f:{NFSU2_TR(0x48b78f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B48b790:L48b790:{c.instructions+=9;NFSU2_TR(0x48b790);
__builtin_memmove((R+0),(R+4),4);
}
B48b792:{NFSU2_TR(0x48b792);
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
B48b794:{NFSU2_TR(0x48b794);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48b797:{NFSU2_TR(0x48b797);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48b79a:{NFSU2_TR(0x48b79a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48b79d:{NFSU2_TR(0x48b79d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48b7a0:{NFSU2_TR(0x48b7a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48b7a3:{NFSU2_TR(0x48b7a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48b7a6:{NFSU2_TR(0x48b7a6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B48b7b0:L48b7b0:{c.instructions+=20;NFSU2_TR(0x48b7b0);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48b7b4:{NFSU2_TR(0x48b7b4);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48b7b8:{NFSU2_TR(0x48b7b8);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48b7bb:{NFSU2_TR(0x48b7bb);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48b7bf:{NFSU2_TR(0x48b7bf);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48b7c2:{NFSU2_TR(0x48b7c2);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48b7c4:{NFSU2_TR(0x48b7c4);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48b7c8:{NFSU2_TR(0x48b7c8);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48b7ca:{NFSU2_TR(0x48b7ca);
__builtin_memmove((R+4),(R+0),4);
}
B48b7cc:{NFSU2_TR(0x48b7cc);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48b7ce:{NFSU2_TR(0x48b7ce);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48b7d2:{NFSU2_TR(0x48b7d2);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B48b7d6:{NFSU2_TR(0x48b7d6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B48b7d8:{NFSU2_TR(0x48b7d8);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B48b7dc:{NFSU2_TR(0x48b7dc);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48b7df:{NFSU2_TR(0x48b7df);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B48b7e3:{NFSU2_TR(0x48b7e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48b7e6:{NFSU2_TR(0x48b7e6);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B48b7ea:{NFSU2_TR(0x48b7ea);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48b7ed:{NFSU2_TR(0x48b7ed);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B48b7f0:L48b7f0:{c.instructions+=15;NFSU2_TR(0x48b7f0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B48b7f3:{NFSU2_TR(0x48b7f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48b7f6:{NFSU2_TR(0x48b7f6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
__builtin_memmove((R+8),(U+0),4);
}
B48b7fa:{NFSU2_TR(0x48b7fa);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48b7fe:{NFSU2_TR(0x48b7fe);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48b802:{NFSU2_TR(0x48b802);
__builtin_memmove((R+4),(R+0),4);
}
B48b804:{NFSU2_TR(0x48b804);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B48b806:{NFSU2_TR(0x48b806);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B48b80a:{NFSU2_TR(0x48b80a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48b80d:{NFSU2_TR(0x48b80d);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B48b811:{NFSU2_TR(0x48b811);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48b814:{NFSU2_TR(0x48b814);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B48b818:{NFSU2_TR(0x48b818);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48b81b:{NFSU2_TR(0x48b81b);
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
B48b81e:{NFSU2_TR(0x48b81e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B48b830:L48b830:{c.instructions+=3;NFSU2_TR(0x48b830);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48b831:{NFSU2_TR(0x48b831);
u8 U[4];
w4(U+0,u32(0xd0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48b836:{NFSU2_TR(0x48b836);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48b83bull));
TAIL_STATIC(0x575620u,575);
}
B48b83b:L48b83b:{c.instructions+=5;NFSU2_TR(0x48b83b);
__builtin_memmove((R+24),(R+0),4);
}
B48b83d:{NFSU2_TR(0x48b83d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B48b840:{NFSU2_TR(0x48b840);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B48b842:{NFSU2_TR(0x48b842);
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
B48b844:{NFSU2_TR(0x48b844);
if(r1(R+518)){{goto L48b8ab;}}
}
B48b846:L48b846:{c.instructions+=7;NFSU2_TR(0x48b846);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48b847:{NFSU2_TR(0x48b847);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B48b84b:{NFSU2_TR(0x48b84b);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48b84c:{NFSU2_TR(0x48b84c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48b84d:{NFSU2_TR(0x48b84d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((R+20),(U+0),4);
}
B48b850:{NFSU2_TR(0x48b850);
w4(R+4,u32(0x32ull));
}
B48b855:{NFSU2_TR(0x48b855);
__builtin_memmove((R+28),(R+20),4);
}
B48b857:L48b857:{c.instructions+=1;NFSU2_TR(0x48b857);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L48b859;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x48b857u);}goto L48b857;}
}
B48b859:L48b859:{c.instructions+=6;NFSU2_TR(0x48b859);
__builtin_memmove((R+0),gp(0x82da44),4);
}
B48b85e:{NFSU2_TR(0x48b85e);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B48b85f:{NFSU2_TR(0x48b85f);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x90ull))));
__builtin_memmove((R+28),(U+0),4);
}
B48b865:{NFSU2_TR(0x48b865);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48b866:{NFSU2_TR(0x48b866);
__builtin_memmove(gp(0x82da44),(R+0),4);
}
B48b86b:{NFSU2_TR(0x48b86b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48b870ull));
TAIL_STATIC(0x43db50u,43d);
}
B48b870:L48b870:{c.instructions+=6;NFSU2_TR(0x48b870);
u8 U[4];
w4(U+0,u32(0x3full));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48b872:{NFSU2_TR(0x48b872);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+20)),r4(U+0));
}
B48b875:{NFSU2_TR(0x48b875);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x90ull))));
__builtin_memmove((R+0),(U+0),4);
}
B48b87b:{NFSU2_TR(0x48b87b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48b87c:{NFSU2_TR(0x48b87c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48b87d:{NFSU2_TR(0x48b87d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48b882ull));
TAIL_STATIC(0x43dc00u,43d);
}
B48b882:L48b882:{c.instructions+=5;NFSU2_TR(0x48b882);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcfull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B48b889:{NFSU2_TR(0x48b889);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48b88c:{NFSU2_TR(0x48b88c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B48b88f:{NFSU2_TR(0x48b88f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B48b891:{NFSU2_TR(0x48b891);
if(r1(R+518)){{goto L48b896;}}
}
B48b893:L48b893:{c.instructions+=1;NFSU2_TR(0x48b893);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48b896:L48b896:{c.instructions+=5;NFSU2_TR(0x48b896);
u8 U[6];
w1(R+512,carry<u32>(r4(R+12),u32(0x40ull)));
w1(R+523,scarry<u32>(r4(R+12),u32(0x40ull)));
w4(R+12,u32(u32(r4(R+12))+u32(u32(0x40ull))));
w1(R+519,u8(s32(r4(R+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+12))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B48b899:{NFSU2_TR(0x48b899);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((R+4),(U+0),4);
}
B48b89c:{NFSU2_TR(0x48b89c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48b89d:{NFSU2_TR(0x48b89d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48b89e:{NFSU2_TR(0x48b89e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48b8a3ull));
TAIL_STATIC(0x4012b0u,401);
}
B48b8a3:L48b8a3:{c.instructions+=5;NFSU2_TR(0x48b8a3);
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
B48b8a6:{NFSU2_TR(0x48b8a6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B48b8a7:{NFSU2_TR(0x48b8a7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B48b8a8:{NFSU2_TR(0x48b8a8);
__builtin_memmove((R+0),(R+24),4);
}
B48b8aa:{NFSU2_TR(0x48b8aa);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B48b8ab:L48b8ab:{c.instructions+=2;NFSU2_TR(0x48b8ab);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B48b8ac:{NFSU2_TR(0x48b8ac);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B48b8b0:L48b8b0:{c.instructions+=9;NFSU2_TR(0x48b8b0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48b8b1:{NFSU2_TR(0x48b8b1);
__builtin_memmove((R+20),(R+16),4);
}
B48b8b3:{NFSU2_TR(0x48b8b3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48b8b4:{NFSU2_TR(0x48b8b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B48b8b7:{NFSU2_TR(0x48b8b7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48b8b8:{NFSU2_TR(0x48b8b8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48b8b9:{NFSU2_TR(0x48b8b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B48b8bc:{NFSU2_TR(0x48b8bc);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B48b8be:{NFSU2_TR(0x48b8be);
__builtin_memmove((R+28),(R+28),4);
}
B48b8c0:L48b8c0:{c.instructions+=2;NFSU2_TR(0x48b8c0);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B48b8c2:{NFSU2_TR(0x48b8c2);
if(r1(R+518)){{goto L48b8f2;}}
}
B48b8c4:L48b8c4:{c.instructions+=2;NFSU2_TR(0x48b8c4);
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
B48b8c6:{NFSU2_TR(0x48b8c6);
if(r1(R+518)){{goto L48b8cc;}}
}
B48b8c8:L48b8c8:{c.instructions+=2;NFSU2_TR(0x48b8c8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B48b8ca:{NFSU2_TR(0x48b8ca);
{goto L48b8d2;}
}
B48b8cc:L48b8cc:{c.instructions+=1;NFSU2_TR(0x48b8cc);
__builtin_memmove((R+24),gp(0x8357e8),4);
}
B48b8d2:L48b8d2:{c.instructions+=2;NFSU2_TR(0x48b8d2);
w4(R+4,u32(0x8357e8ull));
}
B48b8d7:{NFSU2_TR(0x48b8d7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48b8dcull));
TAIL_STATIC(0x502fd0u,502);
}
B48b8dc:L48b8dc:{c.instructions+=2;NFSU2_TR(0x48b8dc);
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
B48b8de:{NFSU2_TR(0x48b8de);
if(r1(R+518)){{goto L48b8f2;}}
}
B48b8e0:L48b8e0:{c.instructions+=3;NFSU2_TR(0x48b8e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48b8e3:{NFSU2_TR(0x48b8e3);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B48b8e5:{NFSU2_TR(0x48b8e5);
if(r1(R+518)){{goto L48b8ec;}}
}
B48b8e7:L48b8e7:{c.instructions+=2;NFSU2_TR(0x48b8e7);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+12))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B48b8ea:{NFSU2_TR(0x48b8ea);
if(r1(R+518)){{goto L48b8f7;}}
}
B48b8ec:L48b8ec:{c.instructions+=3;NFSU2_TR(0x48b8ec);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B48b8ee:{NFSU2_TR(0x48b8ee);
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
B48b8f0:{NFSU2_TR(0x48b8f0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x48b8e0u);}goto L48b8e0;}}
}
B48b8f2:L48b8f2:{c.instructions+=5;NFSU2_TR(0x48b8f2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B48b8f3:{NFSU2_TR(0x48b8f3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B48b8f4:{NFSU2_TR(0x48b8f4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B48b8f5:{NFSU2_TR(0x48b8f5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B48b8f6:{NFSU2_TR(0x48b8f6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B48b8f7:L48b8f7:{c.instructions+=2;NFSU2_TR(0x48b8f7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48b8f8:{NFSU2_TR(0x48b8f8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48b8fdull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x48b830u);}goto L48b830;}
}
B48b8fd:L48b8fd:{c.instructions+=3;NFSU2_TR(0x48b8fd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B48b900:{NFSU2_TR(0x48b900);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B48b902:{NFSU2_TR(0x48b902);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x48b8c0u);}goto L48b8c0;}}
}
B48b904:L48b904:{c.instructions+=6;NFSU2_TR(0x48b904);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48b907:{NFSU2_TR(0x48b907);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B48b909:{NFSU2_TR(0x48b909);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48b90c:{NFSU2_TR(0x48b90c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48b90f:{NFSU2_TR(0x48b90f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+0)),r4(U+0));
}
B48b911:{NFSU2_TR(0x48b911);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x48b8c0u);}goto L48b8c0;}
}
B48b920:L48b920:{c.instructions+=12;NFSU2_TR(0x48b920);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48b921:{NFSU2_TR(0x48b921);
__builtin_memmove((R+20),(R+16),4);
}
B48b923:{NFSU2_TR(0x48b923);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B48b926:{NFSU2_TR(0x48b926);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x74ull))));
}
B48b929:{NFSU2_TR(0x48b929);
{u32 ea_=u32(r4(R+20)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48b92c:{NFSU2_TR(0x48b92c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48b92d:{NFSU2_TR(0x48b92d);
{u32 ea_=u32(u32(7881376u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B48b933:{NFSU2_TR(0x48b933);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48b934:{NFSU2_TR(0x48b934);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48b935:{NFSU2_TR(0x48b935);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B48b937:{NFSU2_TR(0x48b937);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B48b93a:{NFSU2_TR(0x48b93a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L48b95b;}}
}
B48b93c:L48b93c:{c.instructions+=6;NFSU2_TR(0x48b93c);
{u32 ea_=u32(r4(R+20)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48b93f:{NFSU2_TR(0x48b93f);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48b945:{NFSU2_TR(0x48b945);
{u32 ea_=u32(r4(R+20)+u32(16u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B48b948:{NFSU2_TR(0x48b948);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B48b94a:{NFSU2_TR(0x48b94a);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B48b94d:{NFSU2_TR(0x48b94d);
if(r1(R+514)){{goto L48b961;}}
}
B48b94f:L48b94f:{c.instructions+=3;NFSU2_TR(0x48b94f);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B48b951:{NFSU2_TR(0x48b951);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B48b959:{NFSU2_TR(0x48b959);
{goto L48b965;}
}
B48b95b:L48b95b:{c.instructions+=1;NFSU2_TR(0x48b95b);
{u32 ea_=u32(u32(7881376u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48b961:L48b961:{c.instructions+=1;NFSU2_TR(0x48b961);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48b965:L48b965:{c.instructions+=5;NFSU2_TR(0x48b965);
{u32 ea_=u32(r4(R+20)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48b968:{NFSU2_TR(0x48b968);
{u32 ea_=u32(u32(7881376u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B48b96e:{NFSU2_TR(0x48b96e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B48b970:{NFSU2_TR(0x48b970);
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
B48b973:{NFSU2_TR(0x48b973);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L48b994;}}
}
B48b975:L48b975:{c.instructions+=6;NFSU2_TR(0x48b975);
{u32 ea_=u32(r4(R+20)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48b978:{NFSU2_TR(0x48b978);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48b97e:{NFSU2_TR(0x48b97e);
{u32 ea_=u32(r4(R+20)+u32(20u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B48b981:{NFSU2_TR(0x48b981);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B48b983:{NFSU2_TR(0x48b983);
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
B48b986:{NFSU2_TR(0x48b986);
if(r1(R+514)){{goto L48b99a;}}
}
B48b988:L48b988:{c.instructions+=3;NFSU2_TR(0x48b988);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B48b98a:{NFSU2_TR(0x48b98a);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B48b992:{NFSU2_TR(0x48b992);
{goto L48b99e;}
}
B48b994:L48b994:{c.instructions+=1;NFSU2_TR(0x48b994);
{u32 ea_=u32(u32(7881376u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48b99a:L48b99a:{c.instructions+=1;NFSU2_TR(0x48b99a);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48b99e:L48b99e:{c.instructions+=3;NFSU2_TR(0x48b99e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48b9a1:{NFSU2_TR(0x48b9a1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+12),(U+0),4);
}
B48b9a3:{NFSU2_TR(0x48b9a3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48b9a8ull));
TAIL_STATIC(0x502fd0u,502);
}
B48b9a8:L48b9a8:{c.instructions+=3;NFSU2_TR(0x48b9a8);
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
B48b9aa:{NFSU2_TR(0x48b9aa);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48b9ae:{NFSU2_TR(0x48b9ae);
if(r1(R+518)){{goto L48bbe1;}}
}
B48b9b4:L48b9b4:{c.instructions+=6;NFSU2_TR(0x48b9b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B48b9b7:{NFSU2_TR(0x48b9b7);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xa0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B48b9bd:{NFSU2_TR(0x48b9bd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48b9be:{NFSU2_TR(0x48b9be);
u8 U[4];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B48b9c2:{NFSU2_TR(0x48b9c2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48b9c3:{NFSU2_TR(0x48b9c3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48b9c8ull));
TAIL_STATIC(0x4012b0u,401);
}
B48b9c8:L48b9c8:{c.instructions+=4;NFSU2_TR(0x48b9c8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B48b9cb:{NFSU2_TR(0x48b9cb);
u8 U[4];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((R+24),(U+0),4);
}
B48b9cf:{NFSU2_TR(0x48b9cf);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
w4(U+4,u32(0x4ull));
s4(u32(r4(U+0)),r4(U+4));
}
B48b9d7:{NFSU2_TR(0x48b9d7);
{goto L48b9e0;}
}
B48b9e0:L48b9e0:{c.instructions+=22;NFSU2_TR(0x48b9e0);
{u32 ea_=u32(r4(R+24)+u32(4294967292u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48b9e3:{NFSU2_TR(0x48b9e3);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B48b9e7:{NFSU2_TR(0x48b9e7);
{u32 ea_=u32(u32(7882056u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48b9ed:{NFSU2_TR(0x48b9ed);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48b9ee:{NFSU2_TR(0x48b9ee);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B48b9f2:{NFSU2_TR(0x48b9f2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48b9f3:{NFSU2_TR(0x48b9f3);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48b9f7:{NFSU2_TR(0x48b9f7);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B48b9fb:{NFSU2_TR(0x48b9fb);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48b9fd:{NFSU2_TR(0x48b9fd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48b9fe:{NFSU2_TR(0x48b9fe);
{u32 ea_=u32(u32(7882056u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48ba04:{NFSU2_TR(0x48ba04);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48ba08:{NFSU2_TR(0x48ba08);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48ba0c:{NFSU2_TR(0x48ba0c);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48ba10:{NFSU2_TR(0x48ba10);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48ba13:{NFSU2_TR(0x48ba13);
{u32 ea_=u32(u32(7882056u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48ba19:{NFSU2_TR(0x48ba19);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48ba1d:{NFSU2_TR(0x48ba1d);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B48ba21:{NFSU2_TR(0x48ba21);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48ba22:{NFSU2_TR(0x48ba22);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48ba23:{NFSU2_TR(0x48ba23);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48ba24:{NFSU2_TR(0x48ba24);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48ba29ull));
TAIL_STATIC(0x488270u,488);
}
B48ba29:L48ba29:{c.instructions+=8;NFSU2_TR(0x48ba29);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48ba2d:{NFSU2_TR(0x48ba2d);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B48ba31:{NFSU2_TR(0x48ba31);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B48ba34:{NFSU2_TR(0x48ba34);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B48ba3a:{NFSU2_TR(0x48ba3a);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B48ba3e:{NFSU2_TR(0x48ba3e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B48ba40:{NFSU2_TR(0x48ba40);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B48ba43:{NFSU2_TR(0x48ba43);
if(r1(R+514)){{goto L48ba67;}}
}
B48ba45:L48ba45:{c.instructions+=1;NFSU2_TR(0x48ba45);
{goto L48ba50;}
}
B48ba50:L48ba50:{c.instructions+=5;NFSU2_TR(0x48ba50);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B48ba56:{NFSU2_TR(0x48ba56);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B48ba5c:{NFSU2_TR(0x48ba5c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B48ba5e:{NFSU2_TR(0x48ba5e);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B48ba61:{NFSU2_TR(0x48ba61);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x48ba50u);}goto L48ba50;}}
}
B48ba63:L48ba63:{c.instructions+=1;NFSU2_TR(0x48ba63);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B48ba67:L48ba67:{c.instructions+=4;NFSU2_TR(0x48ba67);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B48ba6d:{NFSU2_TR(0x48ba6d);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B48ba6f:{NFSU2_TR(0x48ba6f);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B48ba72:{NFSU2_TR(0x48ba72);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L48ba99;}}
}
B48ba74:L48ba74:{c.instructions+=1;NFSU2_TR(0x48ba74);
{goto L48ba80;}
}
B48ba80:L48ba80:{c.instructions+=5;NFSU2_TR(0x48ba80);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B48ba86:{NFSU2_TR(0x48ba86);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B48ba8c:{NFSU2_TR(0x48ba8c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B48ba8e:{NFSU2_TR(0x48ba8e);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B48ba91:{NFSU2_TR(0x48ba91);
if(r1(R+518)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x48ba80u);}goto L48ba80;}}
}
B48ba93:L48ba93:{c.instructions+=2;NFSU2_TR(0x48ba93);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48ba97:{NFSU2_TR(0x48ba97);
{goto L48ba9b;}
}
B48ba99:L48ba99:{c.instructions+=1;NFSU2_TR(0x48ba99);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B48ba9b:L48ba9b:{c.instructions+=7;NFSU2_TR(0x48ba9b);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48ba9f:{NFSU2_TR(0x48ba9f);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B48baa3:{NFSU2_TR(0x48baa3);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B48baa7:{NFSU2_TR(0x48baa7);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B48baad:{NFSU2_TR(0x48baad);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B48baaf:{NFSU2_TR(0x48baaf);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B48bab2:{NFSU2_TR(0x48bab2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L48bbe8;}}
}
B48bab8:L48bab8:{c.instructions+=6;NFSU2_TR(0x48bab8);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48babc:{NFSU2_TR(0x48babc);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48bac2:{NFSU2_TR(0x48bac2);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B48bac6:{NFSU2_TR(0x48bac6);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B48bac8:{NFSU2_TR(0x48bac8);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B48bacb:{NFSU2_TR(0x48bacb);
if(r1(R+514)){{goto L48bad5;}}
}
B48bacd:L48bacd:{c.instructions+=2;NFSU2_TR(0x48bacd);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B48bacf:{NFSU2_TR(0x48bacf);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48bad5:L48bad5:{c.instructions+=9;NFSU2_TR(0x48bad5);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B48bad9:{NFSU2_TR(0x48bad9);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48badd:{NFSU2_TR(0x48badd);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48bae1:{NFSU2_TR(0x48bae1);
{u32 ea_=u32(r4(R+20)+u32(24u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B48bae4:{NFSU2_TR(0x48bae4);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B48bae8:{NFSU2_TR(0x48bae8);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B48baee:{NFSU2_TR(0x48baee);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B48baf0:{NFSU2_TR(0x48baf0);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B48baf3:{NFSU2_TR(0x48baf3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L48bbf3;}}
}
B48baf9:L48baf9:{c.instructions+=6;NFSU2_TR(0x48baf9);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48bafd:{NFSU2_TR(0x48bafd);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48bb03:{NFSU2_TR(0x48bb03);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B48bb07:{NFSU2_TR(0x48bb07);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B48bb09:{NFSU2_TR(0x48bb09);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B48bb0c:{NFSU2_TR(0x48bb0c);
if(r1(R+514)){{goto L48bb16;}}
}
B48bb0e:L48bb0e:{c.instructions+=2;NFSU2_TR(0x48bb0e);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B48bb10:{NFSU2_TR(0x48bb10);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48bb16:L48bb16:{c.instructions+=15;NFSU2_TR(0x48bb16);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B48bb1a:{NFSU2_TR(0x48bb1a);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B48bb1e:{NFSU2_TR(0x48bb1e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48bb1f:{NFSU2_TR(0x48bb1f);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48bb23:{NFSU2_TR(0x48bb23);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B48bb27:{NFSU2_TR(0x48bb27);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B48bb2b:{NFSU2_TR(0x48bb2b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48bb2c:{NFSU2_TR(0x48bb2c);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48bb30:{NFSU2_TR(0x48bb30);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B48bb34:{NFSU2_TR(0x48bb34);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48bb35:{NFSU2_TR(0x48bb35);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48bb39:{NFSU2_TR(0x48bb39);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48bb3a:{NFSU2_TR(0x48bb3a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48bb3b:{NFSU2_TR(0x48bb3b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48bb3c:{NFSU2_TR(0x48bb3c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48bb41ull));
TAIL_STATIC(0x4883f0u,488);
}
B48bb41:L48bb41:{c.instructions+=15;NFSU2_TR(0x48bb41);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48bb45:{NFSU2_TR(0x48bb45);
{u32 ea_=u32(u32(7882052u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48bb4b:{NFSU2_TR(0x48bb4b);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48bb4f:{NFSU2_TR(0x48bb4f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B48bb52:{NFSU2_TR(0x48bb52);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
}
B48bb55:{NFSU2_TR(0x48bb55);
{u32 ea_=u32(r4(R+24)+u32(4294967276u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48bb58:{NFSU2_TR(0x48bb58);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B48bb59:{NFSU2_TR(0x48bb59);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48bb5d:{NFSU2_TR(0x48bb5d);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48bb61:{NFSU2_TR(0x48bb61);
{u32 ea_=u32(u32(7882052u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48bb67:{NFSU2_TR(0x48bb67);
{u32 ea_=u32(r4(R+24)+u32(4294967280u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48bb6a:{NFSU2_TR(0x48bb6a);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48bb6e:{NFSU2_TR(0x48bb6e);
{u32 ea_=u32(u32(7882052u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48bb74:{NFSU2_TR(0x48bb74);
{u32 ea_=u32(r4(R+24)+u32(4294967284u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48bb77:{NFSU2_TR(0x48bb77);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x48b9e0u);}goto L48b9e0;}}
}
B48bb7d:L48bb7d:{c.instructions+=18;NFSU2_TR(0x48bb7d);
{u32 ea_=u32(r4(R+28)+u32(156u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48bb83:{NFSU2_TR(0x48bb83);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B48bb86:{NFSU2_TR(0x48bb86);
{u32 ea_=u32(u32(7889736u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48bb8c:{NFSU2_TR(0x48bb8c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B48bb8f:{NFSU2_TR(0x48bb8f);
u8 U[4];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B48bb93:{NFSU2_TR(0x48bb93);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48bb97:{NFSU2_TR(0x48bb97);
{u32 ea_=u32(r4(R+28)+u32(152u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48bb9d:{NFSU2_TR(0x48bb9d);
{u32 ea_=u32(u32(7889736u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48bba3:{NFSU2_TR(0x48bba3);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48bba7:{NFSU2_TR(0x48bba7);
{u32 ea_=u32(r4(R+28)+u32(148u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48bbad:{NFSU2_TR(0x48bbad);
{u32 ea_=u32(u32(7889736u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48bbb3:{NFSU2_TR(0x48bbb3);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48bbb7:{NFSU2_TR(0x48bbb7);
{u32 ea_=u32(r4(R+28)+u32(144u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48bbbd:{NFSU2_TR(0x48bbbd);
{u32 ea_=u32(u32(7889736u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48bbc3:{NFSU2_TR(0x48bbc3);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48bbc6:{NFSU2_TR(0x48bbc6);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48bbc7:{NFSU2_TR(0x48bbc7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48bbc8:{NFSU2_TR(0x48bbc8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48bbcdull));
TAIL_STATIC(0x487940u,487);
}
B48bbcd:L48bbcd:{c.instructions+=6;NFSU2_TR(0x48bbcd);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48bbd1:{NFSU2_TR(0x48bbd1);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48bbd4:{NFSU2_TR(0x48bbd4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+12))),4);
__builtin_memmove((R+12),(U+0),4);
}
B48bbd6:{NFSU2_TR(0x48bbd6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B48bbd9:{NFSU2_TR(0x48bbd9);
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
B48bbdb:{NFSU2_TR(0x48bbdb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x48b9b4u);}goto L48b9b4;}}
}
B48bbe1:L48bbe1:{c.instructions+=6;NFSU2_TR(0x48bbe1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B48bbe2:{NFSU2_TR(0x48bbe2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B48bbe3:{NFSU2_TR(0x48bbe3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B48bbe4:{NFSU2_TR(0x48bbe4);
__builtin_memmove((R+16),(R+20),4);
}
B48bbe6:{NFSU2_TR(0x48bbe6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B48bbe7:{NFSU2_TR(0x48bbe7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B48bbe8:L48bbe8:{c.instructions+=2;NFSU2_TR(0x48bbe8);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48bbee:{NFSU2_TR(0x48bbee);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x48bad5u);}goto L48bad5;}
}
B48bbf3:L48bbf3:{c.instructions+=2;NFSU2_TR(0x48bbf3);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48bbf9:{NFSU2_TR(0x48bbf9);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x48bb16u);}goto L48bb16;}
}
B48bc00:L48bc00:{c.instructions+=7;NFSU2_TR(0x48bc00);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48bc01:{NFSU2_TR(0x48bc01);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48bc02:{NFSU2_TR(0x48bc02);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48bc03:{NFSU2_TR(0x48bc03);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B48bc07:{NFSU2_TR(0x48bc07);
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
B48bc09:{NFSU2_TR(0x48bc09);
__builtin_memmove((R+12),(R+4),4);
}
B48bc0b:{NFSU2_TR(0x48bc0b);
if(r1(R+518)){{goto L48bc2c;}}
}
B48bc0d:L48bc0d:{c.instructions+=3;NFSU2_TR(0x48bc0d);
__builtin_memmove((R+24),gp(0x830d08),4);
}
B48bc13:{NFSU2_TR(0x48bc13);
w4(R+4,u32(0x830d08ull));
}
B48bc18:{NFSU2_TR(0x48bc18);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48bc1dull));
TAIL_STATIC(0x502fd0u,502);
}
B48bc1d:L48bc1d:{c.instructions+=2;NFSU2_TR(0x48bc1d);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B48bc1f:{NFSU2_TR(0x48bc1f);
if(r1(R+518)){{goto L48bc2c;}}
}
B48bc21:L48bc21:{c.instructions+=2;NFSU2_TR(0x48bc21);
u8 U[22];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
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
B48bc24:{NFSU2_TR(0x48bc24);
if(r1(R+518)){{goto L48bc34;}}
}
B48bc26:L48bc26:{c.instructions+=3;NFSU2_TR(0x48bc26);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B48bc28:{NFSU2_TR(0x48bc28);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B48bc2a:{NFSU2_TR(0x48bc2a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x48bc21u);}goto L48bc21;}}
}
B48bc2c:L48bc2c:{c.instructions+=5;NFSU2_TR(0x48bc2c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B48bc2d:{NFSU2_TR(0x48bc2d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B48bc2e:{NFSU2_TR(0x48bc2e);
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
B48bc30:{NFSU2_TR(0x48bc30);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B48bc31:{NFSU2_TR(0x48bc31);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B48bc34:L48bc34:{c.instructions+=6;NFSU2_TR(0x48bc34);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B48bc35:{NFSU2_TR(0x48bc35);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48bc38:{NFSU2_TR(0x48bc38);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B48bc39:{NFSU2_TR(0x48bc39);
w4(R+0,u32(0x1ull));
}
B48bc3e:{NFSU2_TR(0x48bc3e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B48bc3f:{NFSU2_TR(0x48bc3f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B48bc50:L48bc50:{c.instructions+=10;NFSU2_TR(0x48bc50);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48bc51:{NFSU2_TR(0x48bc51);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48bc52:{NFSU2_TR(0x48bc52);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48bc53:{NFSU2_TR(0x48bc53);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B48bc57:{NFSU2_TR(0x48bc57);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48bc5a:{NFSU2_TR(0x48bc5a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B48bc5c:{NFSU2_TR(0x48bc5c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((R+12),(U+0),4);
}
B48bc5f:{NFSU2_TR(0x48bc5f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48bc60:{NFSU2_TR(0x48bc60);
__builtin_memmove((R+28),(R+4),4);
}
B48bc62:{NFSU2_TR(0x48bc62);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L48bcae;}}
}
B48bc64:L48bc64:{c.instructions+=16;NFSU2_TR(0x48bc64);
__builtin_memmove((R+4),gp(0x7f3940),4);
}
B48bc6a:{NFSU2_TR(0x48bc6a);
__builtin_memmove((R+0),(R+4),4);
}
B48bc6c:{NFSU2_TR(0x48bc6c);
u8 U[4];
w4(U+0,u32(u32(u32(0x11ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B48bc6f:{NFSU2_TR(0x48bc6f);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+4))));
}
B48bc71:{NFSU2_TR(0x48bc71);
__builtin_memmove((R+4),(R+0),4);
}
B48bc73:{NFSU2_TR(0x48bc73);
u8 U[4];
w4(U+0,u32(u32(u32(0xdull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B48bc76:{NFSU2_TR(0x48bc76);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+4))));
}
B48bc78:{NFSU2_TR(0x48bc78);
__builtin_memmove((R+8),(R+0),4);
}
B48bc7a:{NFSU2_TR(0x48bc7a);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B48bc7d:{NFSU2_TR(0x48bc7d);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+8))));
}
B48bc7f:{NFSU2_TR(0x48bc7f);
__builtin_memmove(gp(0x7f3940),(R+0),4);
}
B48bc84:{NFSU2_TR(0x48bc84);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0x7fffffffull))));
}
B48bc89:{NFSU2_TR(0x48bc89);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B48bc8b:{NFSU2_TR(0x48bc8b);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48bc8f:{NFSU2_TR(0x48bc8f);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B48bc93:{NFSU2_TR(0x48bc93);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L48bc9b;}}
}
B48bc95:L48bc95:{c.instructions+=1;NFSU2_TR(0x48bc95);
{u32 ea_=u32(u32(7882060u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B48bc9b:L48bc9b:{c.instructions+=3;NFSU2_TR(0x48bc9b);
{u32 ea_=u32(u32(7919716u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48bca1:{NFSU2_TR(0x48bca1);
{u32 ea_=u32(u32(7892356u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B48bca7:{NFSU2_TR(0x48bca7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48bcacull));
TAIL_STATIC(0x75bed4u,75b);
}
B48bcac:L48bcac:{c.instructions+=1;NFSU2_TR(0x48bcac);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+12)),r4(U+0));
}
B48bcae:L48bcae:{c.instructions+=5;NFSU2_TR(0x48bcae);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48bcb1:{NFSU2_TR(0x48bcb1);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B48bcb3:{NFSU2_TR(0x48bcb3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48bcb6:{NFSU2_TR(0x48bcb6);
w4(R+8,u32(0x2ull));
}
B48bcbb:{NFSU2_TR(0x48bcbb);
if(r1(R+518)){{goto L48bd4f;}}
}
B48bcc1:L48bcc1:{c.instructions+=2;NFSU2_TR(0x48bcc1);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B48bcc3:{NFSU2_TR(0x48bcc3);
if(r1(R+518)){{goto L48bd4f;}}
}
B48bcc9:L48bcc9:{c.instructions+=2;NFSU2_TR(0x48bcc9);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B48bccb:{NFSU2_TR(0x48bccb);
if(r1(R+518)){{goto L48bcdc;}}
}
B48bccd:L48bccd:{c.instructions+=2;NFSU2_TR(0x48bccd);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B48bcd0:{NFSU2_TR(0x48bcd0);
if(r1(R+518)){{goto L48bcdc;}}
}
B48bcd2:L48bcd2:{c.instructions+=3;NFSU2_TR(0x48bcd2);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x3ull))));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B48bcd5:{NFSU2_TR(0x48bcd5);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B48bcd8:{NFSU2_TR(0x48bcd8);
if(r1(R+518)){{goto L48bd55;}}
}
B48bcda:L48bcda:{c.instructions+=1;NFSU2_TR(0x48bcda);
{goto L48bd52;}
}
B48bcdc:L48bcdc:{c.instructions+=5;NFSU2_TR(0x48bcdc);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B48bcde:{NFSU2_TR(0x48bcde);
{u32 ea_=u32(r4(R+0)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48bce1:{NFSU2_TR(0x48bce1);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B48bce5:{NFSU2_TR(0x48bce5);
{u32 ea_=u32(r4(R+0)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48bce8:{NFSU2_TR(0x48bce8);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L48bcf8;}}
}
B48bcea:L48bcea:{c.instructions+=5;NFSU2_TR(0x48bcea);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B48bcec:{NFSU2_TR(0x48bcec);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B48bcee:{NFSU2_TR(0x48bcee);
{u32 ea_=u32(r4(R+0)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48bcf1:{NFSU2_TR(0x48bcf1);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B48bcf5:{NFSU2_TR(0x48bcf5);
{u32 ea_=u32(r4(R+0)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48bcf8:L48bcf8:{c.instructions+=5;NFSU2_TR(0x48bcf8);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B48bcfa:{NFSU2_TR(0x48bcfa);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B48bd00:{NFSU2_TR(0x48bd00);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B48bd02:{NFSU2_TR(0x48bd02);
u8 U[4];
w1(R+512,u8(0x0ull));
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B48bd05:{NFSU2_TR(0x48bd05);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L48bd29;}}
}
B48bd07:L48bd07:{c.instructions+=7;NFSU2_TR(0x48bd07);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B48bd09:{NFSU2_TR(0x48bd09);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48bd0a:{NFSU2_TR(0x48bd0a);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48bd0e:{NFSU2_TR(0x48bd0e);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48bd12:{NFSU2_TR(0x48bd12);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48bd13:{NFSU2_TR(0x48bd13);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B48bd15:{NFSU2_TR(0x48bd15);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48bd1aull));
TAIL_STATIC(0x487360u,487);
}
B48bd1a:L48bd1a:{c.instructions+=5;NFSU2_TR(0x48bd1a);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48bd1e:{NFSU2_TR(0x48bd1e);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B48bd22:{NFSU2_TR(0x48bd22);
w1(R+512,carry<u32>(r4(R+16),u32(0x8ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B48bd25:{NFSU2_TR(0x48bd25);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B48bd27:{NFSU2_TR(0x48bd27);
{goto L48bd2b;}
}
B48bd29:L48bd29:{c.instructions+=1;NFSU2_TR(0x48bd29);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B48bd2b:L48bd2b:{c.instructions+=14;NFSU2_TR(0x48bd2b);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48bd2e:{NFSU2_TR(0x48bd2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B48bd35:{NFSU2_TR(0x48bd35);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48bd38:{NFSU2_TR(0x48bd38);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B48bd3b:{NFSU2_TR(0x48bd3b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B48bd3d:{NFSU2_TR(0x48bd3d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48bd40:{NFSU2_TR(0x48bd40);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48bd43:{NFSU2_TR(0x48bd43);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+24)),r4(U+0));
}
B48bd45:{NFSU2_TR(0x48bd45);
u8 U[14];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
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
B48bd48:{NFSU2_TR(0x48bd48);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B48bd49:{NFSU2_TR(0x48bd49);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B48bd4a:{NFSU2_TR(0x48bd4a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B48bd4b:{NFSU2_TR(0x48bd4b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B48bd4c:{NFSU2_TR(0x48bd4c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B48bd4f:L48bd4f:{c.instructions+=1;NFSU2_TR(0x48bd4f);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((R+0),(U+0),4);
}
B48bd52:L48bd52:{c.instructions+=1;NFSU2_TR(0x48bd52);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48bd55:L48bd55:{c.instructions+=11;NFSU2_TR(0x48bd55);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48bd58:{NFSU2_TR(0x48bd58);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+4)),r4(U+0));
}
B48bd5a:{NFSU2_TR(0x48bd5a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48bd5d:{NFSU2_TR(0x48bd5d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B48bd5f:{NFSU2_TR(0x48bd5f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48bd62:{NFSU2_TR(0x48bd62);
u8 U[14];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x50ull))));
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
B48bd65:{NFSU2_TR(0x48bd65);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B48bd66:{NFSU2_TR(0x48bd66);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B48bd67:{NFSU2_TR(0x48bd67);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B48bd68:{NFSU2_TR(0x48bd68);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B48bd69:{NFSU2_TR(0x48bd69);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B48bd70:L48bd70:{c.instructions+=7;NFSU2_TR(0x48bd70);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B48bd74:{NFSU2_TR(0x48bd74);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B48bd76:{NFSU2_TR(0x48bd76);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B48bd79:{NFSU2_TR(0x48bd79);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+8)),r4(U+0));
}
B48bd7b:{NFSU2_TR(0x48bd7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48bd7e:{NFSU2_TR(0x48bd7e);
u8 U[14];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+523,sborrow<u32>(r4(U+4),u32(0x1ull)));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
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
B48bd81:{NFSU2_TR(0x48bd81);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B48bd90:L48bd90:{c.instructions+=3;NFSU2_TR(0x48bd90);
__builtin_memmove((R+0),gp(0x832e90),4);
}
B48bd95:{NFSU2_TR(0x48bd95);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B48bd97:{NFSU2_TR(0x48bd97);
if(r1(R+518)){{goto L48bdad;}}
}
B48bd99:L48bd99:{c.instructions+=7;NFSU2_TR(0x48bd99);
{u32 ea_=u32(r4(R+0)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48bd9c:{NFSU2_TR(0x48bd9c);
{u32 ea_=u32(r4(R+0)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48bd9f:{NFSU2_TR(0x48bd9f);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48bda2:{NFSU2_TR(0x48bda2);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B48bda4:{NFSU2_TR(0x48bda4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48bda7:{NFSU2_TR(0x48bda7);
{u32 ea_=u32(r4(R+4)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48bdaa:{NFSU2_TR(0x48bdaa);
{u32 ea_=u32(r4(R+4)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48bdad:L48bdad:{c.instructions+=3;NFSU2_TR(0x48bdad);
__builtin_memmove((R+0),gp(0x832f00),4);
}
B48bdb2:{NFSU2_TR(0x48bdb2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B48bdb4:{NFSU2_TR(0x48bdb4);
if(r1(R+518)){{goto L48bdca;}}
}
B48bdb6:L48bdb6:{c.instructions+=7;NFSU2_TR(0x48bdb6);
{u32 ea_=u32(r4(R+0)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48bdb9:{NFSU2_TR(0x48bdb9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B48bdbc:{NFSU2_TR(0x48bdbc);
{u32 ea_=u32(r4(R+0)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48bdbf:{NFSU2_TR(0x48bdbf);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48bdc2:{NFSU2_TR(0x48bdc2);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B48bdc4:{NFSU2_TR(0x48bdc4);
{u32 ea_=u32(r4(R+4)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48bdc7:{NFSU2_TR(0x48bdc7);
{u32 ea_=u32(r4(R+4)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48bdca:L48bdca:{c.instructions+=3;NFSU2_TR(0x48bdca);
__builtin_memmove((R+0),gp(0x832e20),4);
}
B48bdcf:{NFSU2_TR(0x48bdcf);
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
B48bdd1:{NFSU2_TR(0x48bdd1);
if(r1(R+518)){{goto L48bde7;}}
}
B48bdd3:L48bdd3:{c.instructions+=7;NFSU2_TR(0x48bdd3);
{u32 ea_=u32(r4(R+0)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48bdd6:{NFSU2_TR(0x48bdd6);
{u32 ea_=u32(r4(R+0)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B48bdd9:{NFSU2_TR(0x48bdd9);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48bddc:{NFSU2_TR(0x48bddc);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B48bdde:{NFSU2_TR(0x48bdde);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x30ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48bde1:{NFSU2_TR(0x48bde1);
{u32 ea_=u32(r4(R+4)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48bde4:{NFSU2_TR(0x48bde4);
{u32 ea_=u32(r4(R+4)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B48bde7:L48bde7:{c.instructions+=1;NFSU2_TR(0x48bde7);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B48bdf0:L48bdf0:{c.instructions+=10;NFSU2_TR(0x48bdf0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48bdf1:{NFSU2_TR(0x48bdf1);
__builtin_memmove((R+20),(R+16),4);
}
B48bdf3:{NFSU2_TR(0x48bdf3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B48bdf6:{NFSU2_TR(0x48bdf6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x3e4ull))));
}
B48bdfc:{NFSU2_TR(0x48bdfc);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48bdfd:{NFSU2_TR(0x48bdfd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48bdfe:{NFSU2_TR(0x48bdfe);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48bdff:{NFSU2_TR(0x48bdff);
__builtin_memmove((R+28),(R+4),4);
}
B48be01:{NFSU2_TR(0x48be01);
u8 U[8];
w4(U+0,u32(u32(u32(0xccull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48be08:{NFSU2_TR(0x48be08);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48be0dull));
TAIL_STATIC(0x43bdf0u,43b);
}
B48be0d:L48be0d:{c.instructions+=5;NFSU2_TR(0x48be0d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B48be10:{NFSU2_TR(0x48be10);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48be13:{NFSU2_TR(0x48be13);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B48be15:{NFSU2_TR(0x48be15);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B48be18:{NFSU2_TR(0x48be18);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L48be1d;}}
}
B48be1a:L48be1a:{c.instructions+=1;NFSU2_TR(0x48be1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x54ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48be1d:L48be1d:{c.instructions+=2;NFSU2_TR(0x48be1d);
u8 U[18];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((U+10),(U+0),4);
w1(R+512,u8((r4(U+10))<(r4(R+28))));
w1(R+523,sborrow<u32>(r4(U+10),r4(R+28)));
w4(U+14,u32(u32(r4(U+10))-u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+14))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+14))==(u32(0x0ull))));
w4(U+4,u32(u32(r4(U+14))&u32(u32(0xffull))));
w1(U+8,u8(__builtin_popcountll(u64(r4(U+4)))));
w1(U+9,u8(u32(r1(U+8))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+9))==(u8(0x0ull))));
}
B48be1f:{NFSU2_TR(0x48be1f);
if(r1(R+518)){TAIL_STATIC(0x48cd27u,48c);}
}
B48be25:L48be25:{c.instructions+=3;NFSU2_TR(0x48be25);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48be26:{NFSU2_TR(0x48be26);
__builtin_memmove((R+4),(R+28),4);
}
B48be28:{NFSU2_TR(0x48be28);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48be2dull));
TAIL_STATIC(0x43be80u,43b);
}
B48be2d:L48be2d:{c.instructions+=8;NFSU2_TR(0x48be2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48be30:{NFSU2_TR(0x48be30);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x280ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48be36:{NFSU2_TR(0x48be36);
u8 U[4];
w4(U+0,u32(u32(u32(0x320ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B48be3d:{NFSU2_TR(0x48be3d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48be3e:{NFSU2_TR(0x48be3e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48be3f:{NFSU2_TR(0x48be3f);
u8 U[8];
w4(U+0,u32(u32(u32(0xa8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48be46:{NFSU2_TR(0x48be46);
u8 U[8];
w4(U+0,u32(u32(u32(0x238ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48be4d:{NFSU2_TR(0x48be4d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48be52ull));
TAIL_STATIC(0x5b7dc0u,5b7);
}
B48be52:L48be52:{c.instructions+=7;NFSU2_TR(0x48be52);
w1(R+512,carry<u32>(r4(R+16),u32(0x8ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B48be55:{NFSU2_TR(0x48be55);
u8 U[4];
w4(U+0,u32(0x502fd0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48be5a:{NFSU2_TR(0x48be5a);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48be5c:{NFSU2_TR(0x48be5c);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48be5e:{NFSU2_TR(0x48be5e);
u8 U[4];
w4(U+0,u32(u32(u32(0x18cull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B48be65:{NFSU2_TR(0x48be65);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48be66:{NFSU2_TR(0x48be66);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48be6bull));
TAIL_STATIC(0x401650u,401);
}
B48be6b:L48be6b:{c.instructions+=6;NFSU2_TR(0x48be6b);
u8 U[4];
w4(U+0,u32(0x502fd0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48be70:{NFSU2_TR(0x48be70);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48be72:{NFSU2_TR(0x48be72);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48be74:{NFSU2_TR(0x48be74);
u8 U[4];
w4(U+0,u32(u32(u32(0x1ecull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B48be7b:{NFSU2_TR(0x48be7b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B48be7c:{NFSU2_TR(0x48be7c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x48be81ull));
TAIL_STATIC(0x401650u,401);
}
B48be81:L48be81:{c.instructions+=43;NFSU2_TR(0x48be81);
u8 U[8];
w4(U+0,u32(u32(u32(0x330ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48be88:{NFSU2_TR(0x48be88);
u8 U[8];
w4(U+0,u32(u32(u32(0x320ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B48be8f:{NFSU2_TR(0x48be8f);
u8 U[8];
w4(U+0,u32(u32(u32(0x340ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48be96:{NFSU2_TR(0x48be96);
u8 U[8];
w4(U+0,u32(u32(u32(0x184ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48be9d:{NFSU2_TR(0x48be9d);
u8 U[8];
w4(U+0,u32(u32(u32(0x334ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48bea4:{NFSU2_TR(0x48bea4);
u8 U[8];
w4(U+0,u32(u32(u32(0x1e4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48beab:{NFSU2_TR(0x48beab);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B48beae:{NFSU2_TR(0x48beae);
u8 U[8];
w4(U+0,u32(u32(u32(0x180ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48beb5:{NFSU2_TR(0x48beb5);
u8 U[8];
w4(U+0,u32(u32(u32(0x324ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B48bebc:{NFSU2_TR(0x48bebc);
u8 U[8];
w4(U+0,u32(u32(u32(0xb4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48bec3:{NFSU2_TR(0x48bec3);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4dull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B48bec6:{NFSU2_TR(0x48bec6);
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
B48bec8:{NFSU2_TR(0x48bec8);
u8 U[8];
w4(U+0,u32(u32(u32(0x188ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48becf:{NFSU2_TR(0x48becf);
u8 U[8];
w4(U+0,u32(u32(u32(0x344ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B48bed6:{NFSU2_TR(0x48bed6);
u8 U[8];
w4(U+0,u32(u32(u32(0x1e0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48bedd:{NFSU2_TR(0x48bedd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B48bee0:{NFSU2_TR(0x48bee0);
u8 U[8];
w4(U+0,u32(u32(u32(0x190ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B48beeb:{NFSU2_TR(0x48beeb);
u8 U[8];
w4(U+0,u32(u32(u32(0x194ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B48bef6:{NFSU2_TR(0x48bef6);
u8 U[8];
w4(U+0,u32(u32(u32(0x198ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B48bf01:{NFSU2_TR(0x48bf01);
u8 U[8];
w4(U+0,u32(u32(u32(0x19cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B48bf0c:{NFSU2_TR(0x48bf0c);
u8 U[8];
w4(U+0,u32(u32(u32(0x1f0ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B48bf17:{NFSU2_TR(0x48bf17);
u8 U[8];
w4(U+0,u32(u32(u32(0x1f4ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B48bf22:{NFSU2_TR(0x48bf22);
u8 U[8];
w4(U+0,u32(u32(u32(0x1f8ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B48bf2d:{NFSU2_TR(0x48bf2d);
u8 U[8];
w4(U+0,u32(u32(u32(0x1fcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B48bf38:{NFSU2_TR(0x48bf38);
u8 U[8];
w4(U+0,u32(u32(u32(0x1a0ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B48bf43:{NFSU2_TR(0x48bf43);
u8 U[8];
w4(U+0,u32(u32(u32(0x1a4ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B48bf4e:{NFSU2_TR(0x48bf4e);
u8 U[8];
w4(U+0,u32(u32(u32(0x1a8ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B48bf59:{NFSU2_TR(0x48bf59);
u8 U[8];
w4(U+0,u32(u32(u32(0x1acull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B48bf64:{NFSU2_TR(0x48bf64);
u8 U[8];
w4(U+0,u32(u32(u32(0x200ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B48bf6f:{NFSU2_TR(0x48bf6f);
u8 U[8];
w4(U+0,u32(u32(u32(0x204ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B48bf7a:{NFSU2_TR(0x48bf7a);
u8 U[8];
w4(U+0,u32(u32(u32(0x208ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B48bf85:{NFSU2_TR(0x48bf85);
u8 U[8];
w4(U+0,u32(u32(u32(0x20cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B48bf90:{NFSU2_TR(0x48bf90);
u8 U[8];
w4(U+0,u32(u32(u32(0x1b0ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B48bf9b:{NFSU2_TR(0x48bf9b);
u8 U[8];
w4(U+0,u32(u32(u32(0x1b4ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B48bfa6:{NFSU2_TR(0x48bfa6);
u8 U[8];
w4(U+0,u32(u32(u32(0x1b8ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B48bfb1:{NFSU2_TR(0x48bfb1);
u8 U[8];
w4(U+0,u32(u32(u32(0x1bcull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B48bfbc:{NFSU2_TR(0x48bfbc);
u8 U[8];
w4(U+0,u32(u32(u32(0x210ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B48bfc7:{NFSU2_TR(0x48bfc7);
u8 U[8];
w4(U+0,u32(u32(u32(0x214ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B48bfd2:{NFSU2_TR(0x48bfd2);
u8 U[8];
w4(U+0,u32(u32(u32(0x218ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B48bfdd:{NFSU2_TR(0x48bfdd);
u8 U[8];
w4(U+0,u32(u32(u32(0x21cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B48bfe8:{NFSU2_TR(0x48bfe8);
u8 U[8];
w4(U+0,u32(u32(u32(0x18cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B48bff3:{NFSU2_TR(0x48bff3);
u8 U[8];
w4(U+0,u32(u32(u32(0x1e8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B48bffa:{NFSU2_TR(0x48bffa);
u8 U[8];
w4(U+0,u32(u32(u32(0x1ecull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
TAIL_STATIC(0x48c005u,48c);
}
XIT:NFSU2_TR_EXIT(0x48b,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
