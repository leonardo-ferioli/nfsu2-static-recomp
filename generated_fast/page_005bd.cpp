#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_48b(u8* __restrict R,Cpu& c);
u32 body_5ba(u8* __restrict R,Cpu& c);
u32 body_5be(u8* __restrict R,Cpu& c);
u32 body_60f(u8* __restrict R,Cpu& c);
u32 body_63c(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x5bd,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x5bd,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_5bd(u8* __restrict R,Cpu& c);
u32 page_5bd(Cpu& c){return body_5bd(c.regs.data(),c);}
__attribute__((noinline)) u32 body_5bd(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x5bd003:goto L5bd003;
case 0x5bd005:c.instructions+=8;goto B5bd005;
case 0x5bd00a:c.instructions+=7;goto B5bd00a;
case 0x5bd00d:c.instructions+=6;goto B5bd00d;
case 0x5bd012:c.instructions+=5;goto B5bd012;
case 0x5bd015:c.instructions+=4;goto B5bd015;
case 0x5bd01a:c.instructions+=3;goto B5bd01a;
case 0x5bd01c:c.instructions+=2;goto B5bd01c;
case 0x5bd01f:c.instructions+=1;goto B5bd01f;
case 0x5bd024:goto L5bd024;
case 0x5bd026:c.instructions+=8;goto B5bd026;
case 0x5bd02b:c.instructions+=7;goto B5bd02b;
case 0x5bd02e:c.instructions+=6;goto B5bd02e;
case 0x5bd033:c.instructions+=5;goto B5bd033;
case 0x5bd036:c.instructions+=4;goto B5bd036;
case 0x5bd03b:c.instructions+=3;goto B5bd03b;
case 0x5bd03d:c.instructions+=2;goto B5bd03d;
case 0x5bd040:c.instructions+=1;goto B5bd040;
case 0x5bd045:goto L5bd045;
case 0x5bd04a:c.instructions+=5;goto B5bd04a;
case 0x5bd04d:c.instructions+=4;goto B5bd04d;
case 0x5bd050:c.instructions+=3;goto B5bd050;
case 0x5bd053:c.instructions+=2;goto B5bd053;
case 0x5bd056:c.instructions+=1;goto B5bd056;
case 0x5bd060:goto L5bd060;
case 0x5bd064:c.instructions+=5;goto B5bd064;
case 0x5bd066:c.instructions+=4;goto B5bd066;
case 0x5bd06c:c.instructions+=3;goto B5bd06c;
case 0x5bd06e:c.instructions+=2;goto B5bd06e;
case 0x5bd071:c.instructions+=1;goto B5bd071;
case 0x5bd073:goto L5bd073;
case 0x5bd075:c.instructions+=1;goto B5bd075;
case 0x5bd077:goto L5bd077;
case 0x5bd07d:goto L5bd07d;
case 0x5bd083:c.instructions+=4;goto B5bd083;
case 0x5bd085:c.instructions+=3;goto B5bd085;
case 0x5bd087:c.instructions+=2;goto B5bd087;
case 0x5bd08a:c.instructions+=1;goto B5bd08a;
case 0x5bd08c:goto L5bd08c;
case 0x5bd08e:c.instructions+=1;goto B5bd08e;
case 0x5bd094:goto L5bd094;
case 0x5bd096:c.instructions+=5;goto B5bd096;
case 0x5bd099:c.instructions+=4;goto B5bd099;
case 0x5bd09f:c.instructions+=3;goto B5bd09f;
case 0x5bd0a1:c.instructions+=2;goto B5bd0a1;
case 0x5bd0a4:c.instructions+=1;goto B5bd0a4;
case 0x5bd0a6:goto L5bd0a6;
case 0x5bd0a9:c.instructions+=1;goto B5bd0a9;
case 0x5bd0ab:goto L5bd0ab;
case 0x5bd0b1:goto L5bd0b1;
case 0x5bd0b7:c.instructions+=4;goto B5bd0b7;
case 0x5bd0ba:c.instructions+=3;goto B5bd0ba;
case 0x5bd0bc:c.instructions+=2;goto B5bd0bc;
case 0x5bd0bf:c.instructions+=1;goto B5bd0bf;
case 0x5bd0c1:goto L5bd0c1;
case 0x5bd0c3:c.instructions+=1;goto B5bd0c3;
case 0x5bd0c9:goto L5bd0c9;
case 0x5bd0cc:c.instructions+=5;goto B5bd0cc;
case 0x5bd0cf:c.instructions+=4;goto B5bd0cf;
case 0x5bd0d5:c.instructions+=3;goto B5bd0d5;
case 0x5bd0d7:c.instructions+=2;goto B5bd0d7;
case 0x5bd0da:c.instructions+=1;goto B5bd0da;
case 0x5bd0dc:goto L5bd0dc;
case 0x5bd0df:c.instructions+=1;goto B5bd0df;
case 0x5bd0e1:goto L5bd0e1;
case 0x5bd0e7:goto L5bd0e7;
case 0x5bd0ed:c.instructions+=4;goto B5bd0ed;
case 0x5bd0f0:c.instructions+=3;goto B5bd0f0;
case 0x5bd0f2:c.instructions+=2;goto B5bd0f2;
case 0x5bd0f5:c.instructions+=1;goto B5bd0f5;
case 0x5bd0f7:goto L5bd0f7;
case 0x5bd0f9:c.instructions+=1;goto B5bd0f9;
case 0x5bd0ff:goto L5bd0ff;
case 0x5bd102:c.instructions+=5;goto B5bd102;
case 0x5bd105:c.instructions+=4;goto B5bd105;
case 0x5bd10b:c.instructions+=3;goto B5bd10b;
case 0x5bd10d:c.instructions+=2;goto B5bd10d;
case 0x5bd110:c.instructions+=1;goto B5bd110;
case 0x5bd112:goto L5bd112;
case 0x5bd115:c.instructions+=1;goto B5bd115;
case 0x5bd117:goto L5bd117;
case 0x5bd11d:goto L5bd11d;
case 0x5bd123:c.instructions+=4;goto B5bd123;
case 0x5bd126:c.instructions+=3;goto B5bd126;
case 0x5bd128:c.instructions+=2;goto B5bd128;
case 0x5bd12b:c.instructions+=1;goto B5bd12b;
case 0x5bd12d:goto L5bd12d;
case 0x5bd130:c.instructions+=1;goto B5bd130;
case 0x5bd131:goto L5bd131;
case 0x5bd133:c.instructions+=2;goto B5bd133;
case 0x5bd13a:c.instructions+=1;goto B5bd13a;
case 0x5bd140:goto L5bd140;
case 0x5bd141:c.instructions+=10;goto B5bd141;
case 0x5bd143:c.instructions+=9;goto B5bd143;
case 0x5bd146:c.instructions+=8;goto B5bd146;
case 0x5bd14c:c.instructions+=7;goto B5bd14c;
case 0x5bd152:c.instructions+=6;goto B5bd152;
case 0x5bd155:c.instructions+=5;goto B5bd155;
case 0x5bd158:c.instructions+=4;goto B5bd158;
case 0x5bd159:c.instructions+=3;goto B5bd159;
case 0x5bd15a:c.instructions+=2;goto B5bd15a;
case 0x5bd15b:c.instructions+=1;goto B5bd15b;
case 0x5bd161:goto L5bd161;
case 0x5bd164:c.instructions+=2;goto B5bd164;
case 0x5bd166:c.instructions+=1;goto B5bd166;
case 0x5bd16c:goto L5bd16c;
case 0x5bd16f:c.instructions+=15;goto B5bd16f;
case 0x5bd175:c.instructions+=14;goto B5bd175;
case 0x5bd17b:c.instructions+=13;goto B5bd17b;
case 0x5bd17f:c.instructions+=12;goto B5bd17f;
case 0x5bd180:c.instructions+=11;goto B5bd180;
case 0x5bd184:c.instructions+=10;goto B5bd184;
case 0x5bd18a:c.instructions+=9;goto B5bd18a;
case 0x5bd190:c.instructions+=8;goto B5bd190;
case 0x5bd194:c.instructions+=7;goto B5bd194;
case 0x5bd19a:c.instructions+=6;goto B5bd19a;
case 0x5bd1a0:c.instructions+=5;goto B5bd1a0;
case 0x5bd1a4:c.instructions+=4;goto B5bd1a4;
case 0x5bd1aa:c.instructions+=3;goto B5bd1aa;
case 0x5bd1b0:c.instructions+=2;goto B5bd1b0;
case 0x5bd1b4:c.instructions+=1;goto B5bd1b4;
case 0x5bd1b9:goto L5bd1b9;
case 0x5bd1bd:c.instructions+=3;goto B5bd1bd;
case 0x5bd1c0:c.instructions+=2;goto B5bd1c0;
case 0x5bd1c6:c.instructions+=1;goto B5bd1c6;
case 0x5bd1cb:goto L5bd1cb;
case 0x5bd1cf:c.instructions+=4;goto B5bd1cf;
case 0x5bd1d5:c.instructions+=3;goto B5bd1d5;
case 0x5bd1d7:c.instructions+=2;goto B5bd1d7;
case 0x5bd1da:c.instructions+=1;goto B5bd1da;
case 0x5bd1df:goto L5bd1df;
case 0x5bd1e3:c.instructions+=4;goto B5bd1e3;
case 0x5bd1e9:c.instructions+=3;goto B5bd1e9;
case 0x5bd1eb:c.instructions+=2;goto B5bd1eb;
case 0x5bd1ee:c.instructions+=1;goto B5bd1ee;
case 0x5bd1f3:goto L5bd1f3;
case 0x5bd1f7:c.instructions+=4;goto B5bd1f7;
case 0x5bd1fd:c.instructions+=3;goto B5bd1fd;
case 0x5bd1ff:c.instructions+=2;goto B5bd1ff;
case 0x5bd202:c.instructions+=1;goto B5bd202;
case 0x5bd207:goto L5bd207;
case 0x5bd20a:c.instructions+=45;goto B5bd20a;
case 0x5bd20d:c.instructions+=44;goto B5bd20d;
case 0x5bd210:c.instructions+=43;goto B5bd210;
case 0x5bd214:c.instructions+=42;goto B5bd214;
case 0x5bd217:c.instructions+=41;goto B5bd217;
case 0x5bd219:c.instructions+=40;goto B5bd219;
case 0x5bd21c:c.instructions+=39;goto B5bd21c;
case 0x5bd220:c.instructions+=38;goto B5bd220;
case 0x5bd223:c.instructions+=37;goto B5bd223;
case 0x5bd227:c.instructions+=36;goto B5bd227;
case 0x5bd229:c.instructions+=35;goto B5bd229;
case 0x5bd22d:c.instructions+=34;goto B5bd22d;
case 0x5bd230:c.instructions+=33;goto B5bd230;
case 0x5bd234:c.instructions+=32;goto B5bd234;
case 0x5bd237:c.instructions+=31;goto B5bd237;
case 0x5bd23b:c.instructions+=30;goto B5bd23b;
case 0x5bd23e:c.instructions+=29;goto B5bd23e;
case 0x5bd246:c.instructions+=28;goto B5bd246;
case 0x5bd24a:c.instructions+=27;goto B5bd24a;
case 0x5bd24d:c.instructions+=26;goto B5bd24d;
case 0x5bd255:c.instructions+=25;goto B5bd255;
case 0x5bd259:c.instructions+=24;goto B5bd259;
case 0x5bd25c:c.instructions+=23;goto B5bd25c;
case 0x5bd264:c.instructions+=22;goto B5bd264;
case 0x5bd268:c.instructions+=21;goto B5bd268;
case 0x5bd26b:c.instructions+=20;goto B5bd26b;
case 0x5bd273:c.instructions+=19;goto B5bd273;
case 0x5bd277:c.instructions+=18;goto B5bd277;
case 0x5bd27a:c.instructions+=17;goto B5bd27a;
case 0x5bd282:c.instructions+=16;goto B5bd282;
case 0x5bd286:c.instructions+=15;goto B5bd286;
case 0x5bd289:c.instructions+=14;goto B5bd289;
case 0x5bd28d:c.instructions+=13;goto B5bd28d;
case 0x5bd295:c.instructions+=12;goto B5bd295;
case 0x5bd299:c.instructions+=11;goto B5bd299;
case 0x5bd29d:c.instructions+=10;goto B5bd29d;
case 0x5bd2a0:c.instructions+=9;goto B5bd2a0;
case 0x5bd2a4:c.instructions+=8;goto B5bd2a4;
case 0x5bd2a7:c.instructions+=7;goto B5bd2a7;
case 0x5bd2a9:c.instructions+=6;goto B5bd2a9;
case 0x5bd2ad:c.instructions+=5;goto B5bd2ad;
case 0x5bd2b0:c.instructions+=4;goto B5bd2b0;
case 0x5bd2b4:c.instructions+=3;goto B5bd2b4;
case 0x5bd2b8:c.instructions+=2;goto B5bd2b8;
case 0x5bd2ba:c.instructions+=1;goto B5bd2ba;
case 0x5bd2c0:goto L5bd2c0;
case 0x5bd2c6:c.instructions+=33;goto B5bd2c6;
case 0x5bd2ca:c.instructions+=32;goto B5bd2ca;
case 0x5bd2ce:c.instructions+=31;goto B5bd2ce;
case 0x5bd2d2:c.instructions+=30;goto B5bd2d2;
case 0x5bd2d6:c.instructions+=29;goto B5bd2d6;
case 0x5bd2dd:c.instructions+=28;goto B5bd2dd;
case 0x5bd2e4:c.instructions+=27;goto B5bd2e4;
case 0x5bd2e8:c.instructions+=26;goto B5bd2e8;
case 0x5bd2ee:c.instructions+=25;goto B5bd2ee;
case 0x5bd2f5:c.instructions+=24;goto B5bd2f5;
case 0x5bd2f9:c.instructions+=23;goto B5bd2f9;
case 0x5bd2fd:c.instructions+=22;goto B5bd2fd;
case 0x5bd304:c.instructions+=21;goto B5bd304;
case 0x5bd307:c.instructions+=20;goto B5bd307;
case 0x5bd30e:c.instructions+=19;goto B5bd30e;
case 0x5bd30f:c.instructions+=18;goto B5bd30f;
case 0x5bd315:c.instructions+=17;goto B5bd315;
case 0x5bd31c:c.instructions+=16;goto B5bd31c;
case 0x5bd320:c.instructions+=15;goto B5bd320;
case 0x5bd321:c.instructions+=14;goto B5bd321;
case 0x5bd328:c.instructions+=13;goto B5bd328;
case 0x5bd329:c.instructions+=12;goto B5bd329;
case 0x5bd330:c.instructions+=11;goto B5bd330;
case 0x5bd33b:c.instructions+=10;goto B5bd33b;
case 0x5bd341:c.instructions+=9;goto B5bd341;
case 0x5bd345:c.instructions+=8;goto B5bd345;
case 0x5bd34c:c.instructions+=7;goto B5bd34c;
case 0x5bd352:c.instructions+=6;goto B5bd352;
case 0x5bd356:c.instructions+=5;goto B5bd356;
case 0x5bd35d:c.instructions+=4;goto B5bd35d;
case 0x5bd363:c.instructions+=3;goto B5bd363;
case 0x5bd367:c.instructions+=2;goto B5bd367;
case 0x5bd36e:c.instructions+=1;goto B5bd36e;
case 0x5bd373:goto L5bd373;
case 0x5bd37a:c.instructions+=16;goto B5bd37a;
case 0x5bd37f:c.instructions+=15;goto B5bd37f;
case 0x5bd381:c.instructions+=14;goto B5bd381;
case 0x5bd384:c.instructions+=13;goto B5bd384;
case 0x5bd38b:c.instructions+=12;goto B5bd38b;
case 0x5bd392:c.instructions+=11;goto B5bd392;
case 0x5bd399:c.instructions+=10;goto B5bd399;
case 0x5bd39a:c.instructions+=9;goto B5bd39a;
case 0x5bd39c:c.instructions+=8;goto B5bd39c;
case 0x5bd39d:c.instructions+=7;goto B5bd39d;
case 0x5bd3a4:c.instructions+=6;goto B5bd3a4;
case 0x5bd3a5:c.instructions+=5;goto B5bd3a5;
case 0x5bd3ac:c.instructions+=4;goto B5bd3ac;
case 0x5bd3ae:c.instructions+=3;goto B5bd3ae;
case 0x5bd3b5:c.instructions+=2;goto B5bd3b5;
case 0x5bd3b7:c.instructions+=1;goto B5bd3b7;
case 0x5bd3bd:goto L5bd3bd;
case 0x5bd3c4:c.instructions+=5;goto B5bd3c4;
case 0x5bd3c6:c.instructions+=4;goto B5bd3c6;
case 0x5bd3cc:c.instructions+=3;goto B5bd3cc;
case 0x5bd3ce:c.instructions+=2;goto B5bd3ce;
case 0x5bd3d1:c.instructions+=1;goto B5bd3d1;
case 0x5bd3d3:goto L5bd3d3;
case 0x5bd3da:c.instructions+=5;goto B5bd3da;
case 0x5bd3dc:c.instructions+=4;goto B5bd3dc;
case 0x5bd3e2:c.instructions+=3;goto B5bd3e2;
case 0x5bd3e4:c.instructions+=2;goto B5bd3e4;
case 0x5bd3e7:c.instructions+=1;goto B5bd3e7;
case 0x5bd3e9:goto L5bd3e9;
case 0x5bd3f0:c.instructions+=5;goto B5bd3f0;
case 0x5bd3f2:c.instructions+=4;goto B5bd3f2;
case 0x5bd3f8:c.instructions+=3;goto B5bd3f8;
case 0x5bd3fa:c.instructions+=2;goto B5bd3fa;
case 0x5bd3fd:c.instructions+=1;goto B5bd3fd;
case 0x5bd3ff:goto L5bd3ff;
case 0x5bd404:c.instructions+=5;goto B5bd404;
case 0x5bd406:c.instructions+=4;goto B5bd406;
case 0x5bd408:c.instructions+=3;goto B5bd408;
case 0x5bd409:c.instructions+=2;goto B5bd409;
case 0x5bd40a:c.instructions+=1;goto B5bd40a;
case 0x5bd410:goto L5bd410;
case 0x5bd413:c.instructions+=3;goto B5bd413;
case 0x5bd414:c.instructions+=2;goto B5bd414;
case 0x5bd417:c.instructions+=1;goto B5bd417;
case 0x5bd41d:goto L5bd41d;
case 0x5bd423:c.instructions+=8;goto B5bd423;
case 0x5bd426:c.instructions+=7;goto B5bd426;
case 0x5bd429:c.instructions+=6;goto B5bd429;
case 0x5bd42c:c.instructions+=5;goto B5bd42c;
case 0x5bd42e:c.instructions+=4;goto B5bd42e;
case 0x5bd42f:c.instructions+=3;goto B5bd42f;
case 0x5bd430:c.instructions+=2;goto B5bd430;
case 0x5bd431:c.instructions+=1;goto B5bd431;
case 0x5bd434:goto L5bd434;
case 0x5bd435:c.instructions+=5;goto B5bd435;
case 0x5bd436:c.instructions+=4;goto B5bd436;
case 0x5bd437:c.instructions+=3;goto B5bd437;
case 0x5bd439:c.instructions+=2;goto B5bd439;
case 0x5bd43a:c.instructions+=1;goto B5bd43a;
case 0x5bd43b:goto L5bd43b;
case 0x5bd43e:c.instructions+=1;goto B5bd43e;
case 0x5bd440:goto L5bd440;
case 0x5bd443:c.instructions+=1;goto B5bd443;
case 0x5bd445:goto L5bd445;
case 0x5bd448:c.instructions+=10;goto B5bd448;
case 0x5bd44b:c.instructions+=9;goto B5bd44b;
case 0x5bd44e:c.instructions+=8;goto B5bd44e;
case 0x5bd454:c.instructions+=7;goto B5bd454;
case 0x5bd456:c.instructions+=6;goto B5bd456;
case 0x5bd458:c.instructions+=5;goto B5bd458;
case 0x5bd45e:c.instructions+=4;goto B5bd45e;
case 0x5bd45f:c.instructions+=3;goto B5bd45f;
case 0x5bd460:c.instructions+=2;goto B5bd460;
case 0x5bd461:c.instructions+=1;goto B5bd461;
case 0x5bd467:goto L5bd467;
case 0x5bd46d:c.instructions+=9;goto B5bd46d;
case 0x5bd470:c.instructions+=8;goto B5bd470;
case 0x5bd473:c.instructions+=7;goto B5bd473;
case 0x5bd479:c.instructions+=6;goto B5bd479;
case 0x5bd47b:c.instructions+=5;goto B5bd47b;
case 0x5bd481:c.instructions+=4;goto B5bd481;
case 0x5bd482:c.instructions+=3;goto B5bd482;
case 0x5bd483:c.instructions+=2;goto B5bd483;
case 0x5bd484:c.instructions+=1;goto B5bd484;
case 0x5bd48a:goto L5bd48a;
case 0x5bd48b:c.instructions+=5;goto B5bd48b;
case 0x5bd48c:c.instructions+=4;goto B5bd48c;
case 0x5bd48d:c.instructions+=3;goto B5bd48d;
case 0x5bd48f:c.instructions+=2;goto B5bd48f;
case 0x5bd490:c.instructions+=1;goto B5bd490;
case 0x5bd4a0:goto L5bd4a0;
case 0x5bd4a1:c.instructions+=88;goto B5bd4a1;
case 0x5bd4a3:c.instructions+=87;goto B5bd4a3;
case 0x5bd4a6:c.instructions+=86;goto B5bd4a6;
case 0x5bd4ac:c.instructions+=85;goto B5bd4ac;
case 0x5bd4ad:c.instructions+=84;goto B5bd4ad;
case 0x5bd4ae:c.instructions+=83;goto B5bd4ae;
case 0x5bd4b1:c.instructions+=82;goto B5bd4b1;
case 0x5bd4b4:c.instructions+=81;goto B5bd4b4;
case 0x5bd4b5:c.instructions+=80;goto B5bd4b5;
case 0x5bd4b8:c.instructions+=79;goto B5bd4b8;
case 0x5bd4c0:c.instructions+=78;goto B5bd4c0;
case 0x5bd4c8:c.instructions+=77;goto B5bd4c8;
case 0x5bd4d0:c.instructions+=76;goto B5bd4d0;
case 0x5bd4d4:c.instructions+=75;goto B5bd4d4;
case 0x5bd4d7:c.instructions+=74;goto B5bd4d7;
case 0x5bd4da:c.instructions+=73;goto B5bd4da;
case 0x5bd4de:c.instructions+=72;goto B5bd4de;
case 0x5bd4e1:c.instructions+=71;goto B5bd4e1;
case 0x5bd4e4:c.instructions+=70;goto B5bd4e4;
case 0x5bd4e8:c.instructions+=69;goto B5bd4e8;
case 0x5bd4eb:c.instructions+=68;goto B5bd4eb;
case 0x5bd4ef:c.instructions+=67;goto B5bd4ef;
case 0x5bd4f2:c.instructions+=66;goto B5bd4f2;
case 0x5bd4f5:c.instructions+=65;goto B5bd4f5;
case 0x5bd4f9:c.instructions+=64;goto B5bd4f9;
case 0x5bd4fd:c.instructions+=63;goto B5bd4fd;
case 0x5bd500:c.instructions+=62;goto B5bd500;
case 0x5bd503:c.instructions+=61;goto B5bd503;
case 0x5bd507:c.instructions+=60;goto B5bd507;
case 0x5bd50b:c.instructions+=59;goto B5bd50b;
case 0x5bd50e:c.instructions+=58;goto B5bd50e;
case 0x5bd511:c.instructions+=57;goto B5bd511;
case 0x5bd515:c.instructions+=56;goto B5bd515;
case 0x5bd519:c.instructions+=55;goto B5bd519;
case 0x5bd51c:c.instructions+=54;goto B5bd51c;
case 0x5bd520:c.instructions+=53;goto B5bd520;
case 0x5bd524:c.instructions+=52;goto B5bd524;
case 0x5bd527:c.instructions+=51;goto B5bd527;
case 0x5bd52a:c.instructions+=50;goto B5bd52a;
case 0x5bd52e:c.instructions+=49;goto B5bd52e;
case 0x5bd531:c.instructions+=48;goto B5bd531;
case 0x5bd534:c.instructions+=47;goto B5bd534;
case 0x5bd538:c.instructions+=46;goto B5bd538;
case 0x5bd53b:c.instructions+=45;goto B5bd53b;
case 0x5bd53e:c.instructions+=44;goto B5bd53e;
case 0x5bd542:c.instructions+=43;goto B5bd542;
case 0x5bd545:c.instructions+=42;goto B5bd545;
case 0x5bd548:c.instructions+=41;goto B5bd548;
case 0x5bd54c:c.instructions+=40;goto B5bd54c;
case 0x5bd550:c.instructions+=39;goto B5bd550;
case 0x5bd553:c.instructions+=38;goto B5bd553;
case 0x5bd556:c.instructions+=37;goto B5bd556;
case 0x5bd55a:c.instructions+=36;goto B5bd55a;
case 0x5bd55e:c.instructions+=35;goto B5bd55e;
case 0x5bd561:c.instructions+=34;goto B5bd561;
case 0x5bd564:c.instructions+=33;goto B5bd564;
case 0x5bd568:c.instructions+=32;goto B5bd568;
case 0x5bd56c:c.instructions+=31;goto B5bd56c;
case 0x5bd572:c.instructions+=30;goto B5bd572;
case 0x5bd578:c.instructions+=29;goto B5bd578;
case 0x5bd57e:c.instructions+=28;goto B5bd57e;
case 0x5bd582:c.instructions+=27;goto B5bd582;
case 0x5bd588:c.instructions+=26;goto B5bd588;
case 0x5bd58e:c.instructions+=25;goto B5bd58e;
case 0x5bd594:c.instructions+=24;goto B5bd594;
case 0x5bd598:c.instructions+=23;goto B5bd598;
case 0x5bd59e:c.instructions+=22;goto B5bd59e;
case 0x5bd5a4:c.instructions+=21;goto B5bd5a4;
case 0x5bd5aa:c.instructions+=20;goto B5bd5aa;
case 0x5bd5ae:c.instructions+=19;goto B5bd5ae;
case 0x5bd5b4:c.instructions+=18;goto B5bd5b4;
case 0x5bd5ba:c.instructions+=17;goto B5bd5ba;
case 0x5bd5c0:c.instructions+=16;goto B5bd5c0;
case 0x5bd5c4:c.instructions+=15;goto B5bd5c4;
case 0x5bd5c7:c.instructions+=14;goto B5bd5c7;
case 0x5bd5ca:c.instructions+=13;goto B5bd5ca;
case 0x5bd5d2:c.instructions+=12;goto B5bd5d2;
case 0x5bd5d6:c.instructions+=11;goto B5bd5d6;
case 0x5bd5dc:c.instructions+=10;goto B5bd5dc;
case 0x5bd5e2:c.instructions+=9;goto B5bd5e2;
case 0x5bd5e8:c.instructions+=8;goto B5bd5e8;
case 0x5bd5ec:c.instructions+=7;goto B5bd5ec;
case 0x5bd5f0:c.instructions+=6;goto B5bd5f0;
case 0x5bd5f6:c.instructions+=5;goto B5bd5f6;
case 0x5bd5fc:c.instructions+=4;goto B5bd5fc;
case 0x5bd602:c.instructions+=3;goto B5bd602;
case 0x5bd606:c.instructions+=2;goto B5bd606;
case 0x5bd60a:c.instructions+=1;goto B5bd60a;
case 0x5bd610:goto L5bd610;
case 0x5bd616:c.instructions+=2;goto B5bd616;
case 0x5bd618:c.instructions+=1;goto B5bd618;
case 0x5bd61e:goto L5bd61e;
case 0x5bd620:c.instructions+=1;goto B5bd620;
case 0x5bd626:goto L5bd626;
case 0x5bd62e:c.instructions+=16;goto B5bd62e;
case 0x5bd636:c.instructions+=15;goto B5bd636;
case 0x5bd63e:c.instructions+=14;goto B5bd63e;
case 0x5bd646:c.instructions+=13;goto B5bd646;
case 0x5bd64e:c.instructions+=12;goto B5bd64e;
case 0x5bd656:c.instructions+=11;goto B5bd656;
case 0x5bd65e:c.instructions+=10;goto B5bd65e;
case 0x5bd666:c.instructions+=9;goto B5bd666;
case 0x5bd66e:c.instructions+=8;goto B5bd66e;
case 0x5bd676:c.instructions+=7;goto B5bd676;
case 0x5bd67e:c.instructions+=6;goto B5bd67e;
case 0x5bd686:c.instructions+=5;goto B5bd686;
case 0x5bd68e:c.instructions+=4;goto B5bd68e;
case 0x5bd696:c.instructions+=3;goto B5bd696;
case 0x5bd69e:c.instructions+=2;goto B5bd69e;
case 0x5bd6a6:c.instructions+=1;goto B5bd6a6;
case 0x5bd6a8:goto L5bd6a8;
case 0x5bd6b0:c.instructions+=7;goto B5bd6b0;
case 0x5bd6b8:c.instructions+=6;goto B5bd6b8;
case 0x5bd6c0:c.instructions+=5;goto B5bd6c0;
case 0x5bd6c8:c.instructions+=4;goto B5bd6c8;
case 0x5bd6d0:c.instructions+=3;goto B5bd6d0;
case 0x5bd6d8:c.instructions+=2;goto B5bd6d8;
case 0x5bd6e0:c.instructions+=1;goto B5bd6e0;
case 0x5bd6e8:goto L5bd6e8;
case 0x5bd6ee:c.instructions+=3;goto B5bd6ee;
case 0x5bd6f1:c.instructions+=2;goto B5bd6f1;
case 0x5bd6f4:c.instructions+=1;goto B5bd6f4;
case 0x5bd6fa:goto L5bd6fa;
case 0x5bd6fd:c.instructions+=2;goto B5bd6fd;
case 0x5bd6ff:c.instructions+=1;goto B5bd6ff;
case 0x5bd705:goto L5bd705;
case 0x5bd709:c.instructions+=77;goto B5bd709;
case 0x5bd711:c.instructions+=76;goto B5bd711;
case 0x5bd717:c.instructions+=75;goto B5bd717;
case 0x5bd71f:c.instructions+=74;goto B5bd71f;
case 0x5bd72a:c.instructions+=73;goto B5bd72a;
case 0x5bd732:c.instructions+=72;goto B5bd732;
case 0x5bd736:c.instructions+=71;goto B5bd736;
case 0x5bd73e:c.instructions+=70;goto B5bd73e;
case 0x5bd742:c.instructions+=69;goto B5bd742;
case 0x5bd74d:c.instructions+=68;goto B5bd74d;
case 0x5bd753:c.instructions+=67;goto B5bd753;
case 0x5bd75e:c.instructions+=66;goto B5bd75e;
case 0x5bd769:c.instructions+=65;goto B5bd769;
case 0x5bd774:c.instructions+=64;goto B5bd774;
case 0x5bd778:c.instructions+=63;goto B5bd778;
case 0x5bd783:c.instructions+=62;goto B5bd783;
case 0x5bd787:c.instructions+=61;goto B5bd787;
case 0x5bd78d:c.instructions+=60;goto B5bd78d;
case 0x5bd791:c.instructions+=59;goto B5bd791;
case 0x5bd798:c.instructions+=58;goto B5bd798;
case 0x5bd79c:c.instructions+=57;goto B5bd79c;
case 0x5bd7a3:c.instructions+=56;goto B5bd7a3;
case 0x5bd7a9:c.instructions+=55;goto B5bd7a9;
case 0x5bd7b0:c.instructions+=54;goto B5bd7b0;
case 0x5bd7b4:c.instructions+=53;goto B5bd7b4;
case 0x5bd7bb:c.instructions+=52;goto B5bd7bb;
case 0x5bd7c2:c.instructions+=51;goto B5bd7c2;
case 0x5bd7c6:c.instructions+=50;goto B5bd7c6;
case 0x5bd7cd:c.instructions+=49;goto B5bd7cd;
case 0x5bd7d3:c.instructions+=48;goto B5bd7d3;
case 0x5bd7d7:c.instructions+=47;goto B5bd7d7;
case 0x5bd7de:c.instructions+=46;goto B5bd7de;
case 0x5bd7e2:c.instructions+=45;goto B5bd7e2;
case 0x5bd7e6:c.instructions+=44;goto B5bd7e6;
case 0x5bd7ed:c.instructions+=43;goto B5bd7ed;
case 0x5bd7f4:c.instructions+=42;goto B5bd7f4;
case 0x5bd7fb:c.instructions+=41;goto B5bd7fb;
case 0x5bd802:c.instructions+=40;goto B5bd802;
case 0x5bd806:c.instructions+=39;goto B5bd806;
case 0x5bd80d:c.instructions+=38;goto B5bd80d;
case 0x5bd813:c.instructions+=37;goto B5bd813;
case 0x5bd81a:c.instructions+=36;goto B5bd81a;
case 0x5bd81e:c.instructions+=35;goto B5bd81e;
case 0x5bd825:c.instructions+=34;goto B5bd825;
case 0x5bd829:c.instructions+=33;goto B5bd829;
case 0x5bd830:c.instructions+=32;goto B5bd830;
case 0x5bd837:c.instructions+=31;goto B5bd837;
case 0x5bd83e:c.instructions+=30;goto B5bd83e;
case 0x5bd845:c.instructions+=29;goto B5bd845;
case 0x5bd849:c.instructions+=28;goto B5bd849;
case 0x5bd850:c.instructions+=27;goto B5bd850;
case 0x5bd856:c.instructions+=26;goto B5bd856;
case 0x5bd85d:c.instructions+=25;goto B5bd85d;
case 0x5bd861:c.instructions+=24;goto B5bd861;
case 0x5bd868:c.instructions+=23;goto B5bd868;
case 0x5bd86c:c.instructions+=22;goto B5bd86c;
case 0x5bd873:c.instructions+=21;goto B5bd873;
case 0x5bd87a:c.instructions+=20;goto B5bd87a;
case 0x5bd881:c.instructions+=19;goto B5bd881;
case 0x5bd888:c.instructions+=18;goto B5bd888;
case 0x5bd88c:c.instructions+=17;goto B5bd88c;
case 0x5bd892:c.instructions+=16;goto B5bd892;
case 0x5bd896:c.instructions+=15;goto B5bd896;
case 0x5bd89d:c.instructions+=14;goto B5bd89d;
case 0x5bd8a1:c.instructions+=13;goto B5bd8a1;
case 0x5bd8a7:c.instructions+=12;goto B5bd8a7;
case 0x5bd8ab:c.instructions+=11;goto B5bd8ab;
case 0x5bd8b2:c.instructions+=10;goto B5bd8b2;
case 0x5bd8b4:c.instructions+=9;goto B5bd8b4;
case 0x5bd8bb:c.instructions+=8;goto B5bd8bb;
case 0x5bd8c2:c.instructions+=7;goto B5bd8c2;
case 0x5bd8c8:c.instructions+=6;goto B5bd8c8;
case 0x5bd8cb:c.instructions+=5;goto B5bd8cb;
case 0x5bd8d2:c.instructions+=4;goto B5bd8d2;
case 0x5bd8d8:c.instructions+=3;goto B5bd8d8;
case 0x5bd8da:c.instructions+=2;goto B5bd8da;
case 0x5bd8dd:c.instructions+=1;goto B5bd8dd;
case 0x5bd8df:goto L5bd8df;
case 0x5bd8ea:goto L5bd8ea;
case 0x5bd8ef:c.instructions+=5;goto B5bd8ef;
case 0x5bd8f1:c.instructions+=4;goto B5bd8f1;
case 0x5bd8f8:c.instructions+=3;goto B5bd8f8;
case 0x5bd8f9:c.instructions+=2;goto B5bd8f9;
case 0x5bd8fa:c.instructions+=1;goto B5bd8fa;
case 0x5bd900:goto L5bd900;
case 0x5bd904:c.instructions+=7;goto B5bd904;
case 0x5bd90a:c.instructions+=6;goto B5bd90a;
case 0x5bd910:c.instructions+=5;goto B5bd910;
case 0x5bd914:c.instructions+=4;goto B5bd914;
case 0x5bd916:c.instructions+=3;goto B5bd916;
case 0x5bd91c:c.instructions+=2;goto B5bd91c;
case 0x5bd91e:c.instructions+=1;goto B5bd91e;
case 0x5bd923:goto L5bd923;
case 0x5bd92a:c.instructions+=4;goto B5bd92a;
case 0x5bd930:c.instructions+=3;goto B5bd930;
case 0x5bd932:c.instructions+=2;goto B5bd932;
case 0x5bd935:c.instructions+=1;goto B5bd935;
case 0x5bd93a:goto L5bd93a;
case 0x5bd941:c.instructions+=4;goto B5bd941;
case 0x5bd947:c.instructions+=3;goto B5bd947;
case 0x5bd949:c.instructions+=2;goto B5bd949;
case 0x5bd94c:c.instructions+=1;goto B5bd94c;
case 0x5bd951:goto L5bd951;
case 0x5bd958:c.instructions+=4;goto B5bd958;
case 0x5bd95e:c.instructions+=3;goto B5bd95e;
case 0x5bd960:c.instructions+=2;goto B5bd960;
case 0x5bd963:c.instructions+=1;goto B5bd963;
case 0x5bd968:goto L5bd968;
case 0x5bd96a:c.instructions+=4;goto B5bd96a;
case 0x5bd96b:c.instructions+=3;goto B5bd96b;
case 0x5bd96d:c.instructions+=2;goto B5bd96d;
case 0x5bd96e:c.instructions+=1;goto B5bd96e;
case 0x5bd974:goto L5bd974;
case 0x5bd975:c.instructions+=5;goto B5bd975;
case 0x5bd976:c.instructions+=4;goto B5bd976;
case 0x5bd977:c.instructions+=3;goto B5bd977;
case 0x5bd979:c.instructions+=2;goto B5bd979;
case 0x5bd97a:c.instructions+=1;goto B5bd97a;
case 0x5bd97b:goto L5bd97b;
case 0x5bd97e:c.instructions+=1;goto B5bd97e;
case 0x5bd980:goto L5bd980;
case 0x5bd983:c.instructions+=1;goto B5bd983;
case 0x5bd989:goto L5bd989;
case 0x5bd98c:c.instructions+=8;goto B5bd98c;
case 0x5bd98f:c.instructions+=7;goto B5bd98f;
case 0x5bd995:c.instructions+=6;goto B5bd995;
case 0x5bd997:c.instructions+=5;goto B5bd997;
case 0x5bd99b:c.instructions+=4;goto B5bd99b;
case 0x5bd99c:c.instructions+=3;goto B5bd99c;
case 0x5bd99d:c.instructions+=2;goto B5bd99d;
case 0x5bd99e:c.instructions+=1;goto B5bd99e;
case 0x5bd9a4:goto L5bd9a4;
case 0x5bd9aa:c.instructions+=9;goto B5bd9aa;
case 0x5bd9ad:c.instructions+=8;goto B5bd9ad;
case 0x5bd9b0:c.instructions+=7;goto B5bd9b0;
case 0x5bd9b6:c.instructions+=6;goto B5bd9b6;
case 0x5bd9b8:c.instructions+=5;goto B5bd9b8;
case 0x5bd9bc:c.instructions+=4;goto B5bd9bc;
case 0x5bd9bd:c.instructions+=3;goto B5bd9bd;
case 0x5bd9be:c.instructions+=2;goto B5bd9be;
case 0x5bd9bf:c.instructions+=1;goto B5bd9bf;
case 0x5bd9c5:goto L5bd9c5;
case 0x5bd9cb:c.instructions+=2;goto B5bd9cb;
case 0x5bd9cf:c.instructions+=1;goto B5bd9cf;
case 0x5bd9d5:goto L5bd9d5;
case 0x5bd9d8:c.instructions+=8;goto B5bd9d8;
case 0x5bd9db:c.instructions+=7;goto B5bd9db;
case 0x5bd9e1:c.instructions+=6;goto B5bd9e1;
case 0x5bd9e3:c.instructions+=5;goto B5bd9e3;
case 0x5bd9e7:c.instructions+=4;goto B5bd9e7;
case 0x5bd9e8:c.instructions+=3;goto B5bd9e8;
case 0x5bd9e9:c.instructions+=2;goto B5bd9e9;
case 0x5bd9ea:c.instructions+=1;goto B5bd9ea;
case 0x5bd9f0:goto L5bd9f0;
case 0x5bd9f6:c.instructions+=9;goto B5bd9f6;
case 0x5bd9f9:c.instructions+=8;goto B5bd9f9;
case 0x5bd9fc:c.instructions+=7;goto B5bd9fc;
case 0x5bda02:c.instructions+=6;goto B5bda02;
case 0x5bda04:c.instructions+=5;goto B5bda04;
case 0x5bda08:c.instructions+=4;goto B5bda08;
case 0x5bda09:c.instructions+=3;goto B5bda09;
case 0x5bda0a:c.instructions+=2;goto B5bda0a;
case 0x5bda0b:c.instructions+=1;goto B5bda0b;
case 0x5bda11:goto L5bda11;
case 0x5bda17:c.instructions+=9;goto B5bda17;
case 0x5bda1a:c.instructions+=8;goto B5bda1a;
case 0x5bda1d:c.instructions+=7;goto B5bda1d;
case 0x5bda23:c.instructions+=6;goto B5bda23;
case 0x5bda25:c.instructions+=5;goto B5bda25;
case 0x5bda29:c.instructions+=4;goto B5bda29;
case 0x5bda2a:c.instructions+=3;goto B5bda2a;
case 0x5bda2b:c.instructions+=2;goto B5bda2b;
case 0x5bda2c:c.instructions+=1;goto B5bda2c;
case 0x5bda32:goto L5bda32;
case 0x5bda38:c.instructions+=9;goto B5bda38;
case 0x5bda3b:c.instructions+=8;goto B5bda3b;
case 0x5bda3e:c.instructions+=7;goto B5bda3e;
case 0x5bda44:c.instructions+=6;goto B5bda44;
case 0x5bda46:c.instructions+=5;goto B5bda46;
case 0x5bda4a:c.instructions+=4;goto B5bda4a;
case 0x5bda4b:c.instructions+=3;goto B5bda4b;
case 0x5bda4c:c.instructions+=2;goto B5bda4c;
case 0x5bda4d:c.instructions+=1;goto B5bda4d;
case 0x5bda53:goto L5bda53;
case 0x5bda59:c.instructions+=11;goto B5bda59;
case 0x5bda5f:c.instructions+=10;goto B5bda5f;
case 0x5bda62:c.instructions+=9;goto B5bda62;
case 0x5bda65:c.instructions+=8;goto B5bda65;
case 0x5bda67:c.instructions+=7;goto B5bda67;
case 0x5bda68:c.instructions+=6;goto B5bda68;
case 0x5bda6b:c.instructions+=5;goto B5bda6b;
case 0x5bda71:c.instructions+=4;goto B5bda71;
case 0x5bda74:c.instructions+=3;goto B5bda74;
case 0x5bda75:c.instructions+=2;goto B5bda75;
case 0x5bda76:c.instructions+=1;goto B5bda76;
case 0x5bda79:goto L5bda79;
case 0x5bda7c:c.instructions+=10;goto B5bda7c;
case 0x5bda82:c.instructions+=9;goto B5bda82;
case 0x5bda85:c.instructions+=8;goto B5bda85;
case 0x5bda87:c.instructions+=7;goto B5bda87;
case 0x5bda88:c.instructions+=6;goto B5bda88;
case 0x5bda8b:c.instructions+=5;goto B5bda8b;
case 0x5bda91:c.instructions+=4;goto B5bda91;
case 0x5bda94:c.instructions+=3;goto B5bda94;
case 0x5bda95:c.instructions+=2;goto B5bda95;
case 0x5bda96:c.instructions+=1;goto B5bda96;
case 0x5bda99:goto L5bda99;
case 0x5bda9a:c.instructions+=5;goto B5bda9a;
case 0x5bda9b:c.instructions+=4;goto B5bda9b;
case 0x5bda9c:c.instructions+=3;goto B5bda9c;
case 0x5bda9e:c.instructions+=2;goto B5bda9e;
case 0x5bda9f:c.instructions+=1;goto B5bda9f;
case 0x5bdaa0:goto L5bdaa0;
case 0x5bdaa1:c.instructions+=10;goto B5bdaa1;
case 0x5bdaa3:c.instructions+=9;goto B5bdaa3;
case 0x5bdaa6:c.instructions+=8;goto B5bdaa6;
case 0x5bdaac:c.instructions+=7;goto B5bdaac;
case 0x5bdaaf:c.instructions+=6;goto B5bdaaf;
case 0x5bdab0:c.instructions+=5;goto B5bdab0;
case 0x5bdab2:c.instructions+=4;goto B5bdab2;
case 0x5bdab6:c.instructions+=3;goto B5bdab6;
case 0x5bdab7:c.instructions+=2;goto B5bdab7;
case 0x5bdabd:c.instructions+=1;goto B5bdabd;
case 0x5bdac2:goto L5bdac2;
case 0x5bdac8:c.instructions+=10;goto B5bdac8;
case 0x5bdacb:c.instructions+=9;goto B5bdacb;
case 0x5bdad0:c.instructions+=8;goto B5bdad0;
case 0x5bdad3:c.instructions+=7;goto B5bdad3;
case 0x5bdad4:c.instructions+=6;goto B5bdad4;
case 0x5bdad8:c.instructions+=5;goto B5bdad8;
case 0x5bdad9:c.instructions+=4;goto B5bdad9;
case 0x5bdae0:c.instructions+=3;goto B5bdae0;
case 0x5bdae1:c.instructions+=2;goto B5bdae1;
case 0x5bdae5:c.instructions+=1;goto B5bdae5;
case 0x5bdaea:goto L5bdaea;
case 0x5bdaee:c.instructions+=6;goto B5bdaee;
case 0x5bdaef:c.instructions+=5;goto B5bdaef;
case 0x5bdaf6:c.instructions+=4;goto B5bdaf6;
case 0x5bdaf7:c.instructions+=3;goto B5bdaf7;
case 0x5bdafe:c.instructions+=2;goto B5bdafe;
case 0x5bdaff:c.instructions+=1;goto B5bdaff;
case 0x5bdb04:goto L5bdb04;
case 0x5bdb09:c.instructions+=3;goto B5bdb09;
case 0x5bdb0c:c.instructions+=2;goto B5bdb0c;
case 0x5bdb0e:c.instructions+=1;goto B5bdb0e;
case 0x5bdb10:goto L5bdb10;
case 0x5bdb13:c.instructions+=8;goto B5bdb13;
case 0x5bdb16:c.instructions+=7;goto B5bdb16;
case 0x5bdb1c:c.instructions+=6;goto B5bdb1c;
case 0x5bdb1e:c.instructions+=5;goto B5bdb1e;
case 0x5bdb25:c.instructions+=4;goto B5bdb25;
case 0x5bdb26:c.instructions+=3;goto B5bdb26;
case 0x5bdb27:c.instructions+=2;goto B5bdb27;
case 0x5bdb28:c.instructions+=1;goto B5bdb28;
case 0x5bdb2d:goto L5bdb2d;
case 0x5bdb33:c.instructions+=3;goto B5bdb33;
case 0x5bdb36:c.instructions+=2;goto B5bdb36;
case 0x5bdb37:c.instructions+=1;goto B5bdb37;
case 0x5bdb3c:goto L5bdb3c;
case 0x5bdb3e:c.instructions+=4;goto B5bdb3e;
case 0x5bdb3f:c.instructions+=3;goto B5bdb3f;
case 0x5bdb46:c.instructions+=2;goto B5bdb46;
case 0x5bdb47:c.instructions+=1;goto B5bdb47;
case 0x5bdb4c:goto L5bdb4c;
case 0x5bdb4f:c.instructions+=6;goto B5bdb4f;
case 0x5bdb53:c.instructions+=5;goto B5bdb53;
case 0x5bdb54:c.instructions+=4;goto B5bdb54;
case 0x5bdb55:c.instructions+=3;goto B5bdb55;
case 0x5bdb59:c.instructions+=2;goto B5bdb59;
case 0x5bdb5a:c.instructions+=1;goto B5bdb5a;
case 0x5bdb5f:goto L5bdb5f;
case 0x5bdb63:c.instructions+=6;goto B5bdb63;
case 0x5bdb64:c.instructions+=5;goto B5bdb64;
case 0x5bdb6b:c.instructions+=4;goto B5bdb6b;
case 0x5bdb6c:c.instructions+=3;goto B5bdb6c;
case 0x5bdb70:c.instructions+=2;goto B5bdb70;
case 0x5bdb71:c.instructions+=1;goto B5bdb71;
case 0x5bdb76:goto L5bdb76;
case 0x5bdb7c:c.instructions+=9;goto B5bdb7c;
case 0x5bdb7f:c.instructions+=8;goto B5bdb7f;
case 0x5bdb82:c.instructions+=7;goto B5bdb82;
case 0x5bdb88:c.instructions+=6;goto B5bdb88;
case 0x5bdb8a:c.instructions+=5;goto B5bdb8a;
case 0x5bdb8e:c.instructions+=4;goto B5bdb8e;
case 0x5bdb8f:c.instructions+=3;goto B5bdb8f;
case 0x5bdb90:c.instructions+=2;goto B5bdb90;
case 0x5bdb91:c.instructions+=1;goto B5bdb91;
case 0x5bdb97:goto L5bdb97;
case 0x5bdb9b:c.instructions+=2;goto B5bdb9b;
case 0x5bdb9c:c.instructions+=1;goto B5bdb9c;
case 0x5bdba1:goto L5bdba1;
case 0x5bdba5:c.instructions+=22;goto B5bdba5;
case 0x5bdbab:c.instructions+=21;goto B5bdbab;
case 0x5bdbb1:c.instructions+=20;goto B5bdbb1;
case 0x5bdbb4:c.instructions+=19;goto B5bdbb4;
case 0x5bdbb8:c.instructions+=18;goto B5bdbb8;
case 0x5bdbbc:c.instructions+=17;goto B5bdbbc;
case 0x5bdbbd:c.instructions+=16;goto B5bdbbd;
case 0x5bdbc4:c.instructions+=15;goto B5bdbc4;
case 0x5bdbca:c.instructions+=14;goto B5bdbca;
case 0x5bdbce:c.instructions+=13;goto B5bdbce;
case 0x5bdbd5:c.instructions+=12;goto B5bdbd5;
case 0x5bdbdb:c.instructions+=11;goto B5bdbdb;
case 0x5bdbdf:c.instructions+=10;goto B5bdbdf;
case 0x5bdbe6:c.instructions+=9;goto B5bdbe6;
case 0x5bdbec:c.instructions+=8;goto B5bdbec;
case 0x5bdbf2:c.instructions+=7;goto B5bdbf2;
case 0x5bdbf6:c.instructions+=6;goto B5bdbf6;
case 0x5bdbf9:c.instructions+=5;goto B5bdbf9;
case 0x5bdbfc:c.instructions+=4;goto B5bdbfc;
case 0x5bdc02:c.instructions+=3;goto B5bdc02;
case 0x5bdc04:c.instructions+=2;goto B5bdc04;
case 0x5bdc05:c.instructions+=1;goto B5bdc05;
case 0x5bdc06:goto L5bdc06;
case 0x5bdc0c:goto L5bdc0c;
case 0x5bdc12:c.instructions+=3;goto B5bdc12;
case 0x5bdc14:c.instructions+=2;goto B5bdc14;
case 0x5bdc16:c.instructions+=1;goto B5bdc16;
case 0x5bdc18:goto L5bdc18;
case 0x5bdc1b:c.instructions+=2;goto B5bdc1b;
case 0x5bdc1d:c.instructions+=1;goto B5bdc1d;
case 0x5bdc1f:goto L5bdc1f;
case 0x5bdc20:c.instructions+=1;goto B5bdc20;
case 0x5bdc25:goto L5bdc25;
case 0x5bdc28:goto L5bdc28;
case 0x5bdc2a:c.instructions+=5;goto B5bdc2a;
case 0x5bdc30:c.instructions+=4;goto B5bdc30;
case 0x5bdc32:c.instructions+=3;goto B5bdc32;
case 0x5bdc36:c.instructions+=2;goto B5bdc36;
case 0x5bdc3a:c.instructions+=1;goto B5bdc3a;
case 0x5bdc3c:goto L5bdc3c;
case 0x5bdc42:goto L5bdc42;
case 0x5bdc48:c.instructions+=8;goto B5bdc48;
case 0x5bdc4a:c.instructions+=7;goto B5bdc4a;
case 0x5bdc4d:c.instructions+=6;goto B5bdc4d;
case 0x5bdc53:c.instructions+=5;goto B5bdc53;
case 0x5bdc55:c.instructions+=4;goto B5bdc55;
case 0x5bdc59:c.instructions+=3;goto B5bdc59;
case 0x5bdc5d:c.instructions+=2;goto B5bdc5d;
case 0x5bdc61:c.instructions+=1;goto B5bdc61;
case 0x5bdc63:goto L5bdc63;
case 0x5bdc69:goto L5bdc69;
case 0x5bdc6f:c.instructions+=7;goto B5bdc6f;
case 0x5bdc72:c.instructions+=6;goto B5bdc72;
case 0x5bdc77:c.instructions+=5;goto B5bdc77;
case 0x5bdc79:c.instructions+=4;goto B5bdc79;
case 0x5bdc7d:c.instructions+=3;goto B5bdc7d;
case 0x5bdc81:c.instructions+=2;goto B5bdc81;
case 0x5bdc85:c.instructions+=1;goto B5bdc85;
case 0x5bdc87:goto L5bdc87;
case 0x5bdc8d:goto L5bdc8d;
case 0x5bdc93:c.instructions+=12;goto B5bdc93;
case 0x5bdc99:c.instructions+=11;goto B5bdc99;
case 0x5bdca1:c.instructions+=10;goto B5bdca1;
case 0x5bdca5:c.instructions+=9;goto B5bdca5;
case 0x5bdca9:c.instructions+=8;goto B5bdca9;
case 0x5bdcac:c.instructions+=7;goto B5bdcac;
case 0x5bdcaf:c.instructions+=6;goto B5bdcaf;
case 0x5bdcb5:c.instructions+=5;goto B5bdcb5;
case 0x5bdcb7:c.instructions+=4;goto B5bdcb7;
case 0x5bdcb8:c.instructions+=3;goto B5bdcb8;
case 0x5bdcb9:c.instructions+=2;goto B5bdcb9;
case 0x5bdcba:c.instructions+=1;goto B5bdcba;
case 0x5bdcc0:goto L5bdcc0;
case 0x5bdcc1:c.instructions+=3;goto B5bdcc1;
case 0x5bdcc3:c.instructions+=2;goto B5bdcc3;
case 0x5bdcc4:c.instructions+=1;goto B5bdcc4;
case 0x5bdcd0:goto L5bdcd0;
case 0x5bdcd1:c.instructions+=11;goto B5bdcd1;
case 0x5bdcd3:c.instructions+=10;goto B5bdcd3;
case 0x5bdcd6:c.instructions+=9;goto B5bdcd6;
case 0x5bdcdc:c.instructions+=8;goto B5bdcdc;
case 0x5bdcdf:c.instructions+=7;goto B5bdcdf;
case 0x5bdce0:c.instructions+=6;goto B5bdce0;
case 0x5bdce3:c.instructions+=5;goto B5bdce3;
case 0x5bdce4:c.instructions+=4;goto B5bdce4;
case 0x5bdce5:c.instructions+=3;goto B5bdce5;
case 0x5bdce8:c.instructions+=2;goto B5bdce8;
case 0x5bdcec:c.instructions+=1;goto B5bdcec;
case 0x5bdcf4:goto L5bdcf4;
case 0x5bdcf8:c.instructions+=4;goto B5bdcf8;
case 0x5bdcfb:c.instructions+=3;goto B5bdcfb;
case 0x5bdcfd:c.instructions+=2;goto B5bdcfd;
case 0x5bdd00:c.instructions+=1;goto B5bdd00;
case 0x5bdd05:goto L5bdd05;
case 0x5bdd07:goto L5bdd07;
case 0x5bdd0a:c.instructions+=4;goto B5bdd0a;
case 0x5bdd0d:c.instructions+=3;goto B5bdd0d;
case 0x5bdd0f:c.instructions+=2;goto B5bdd0f;
case 0x5bdd11:c.instructions+=1;goto B5bdd11;
case 0x5bdd16:goto L5bdd16;
case 0x5bdd18:goto L5bdd18;
case 0x5bdd1c:c.instructions+=4;goto B5bdd1c;
case 0x5bdd1f:c.instructions+=3;goto B5bdd1f;
case 0x5bdd21:c.instructions+=2;goto B5bdd21;
case 0x5bdd24:c.instructions+=1;goto B5bdd24;
case 0x5bdd29:goto L5bdd29;
case 0x5bdd2b:goto L5bdd2b;
case 0x5bdd2f:c.instructions+=4;goto B5bdd2f;
case 0x5bdd32:c.instructions+=3;goto B5bdd32;
case 0x5bdd34:c.instructions+=2;goto B5bdd34;
case 0x5bdd3a:c.instructions+=1;goto B5bdd3a;
case 0x5bdd3f:goto L5bdd3f;
case 0x5bdd41:goto L5bdd41;
case 0x5bdd45:c.instructions+=4;goto B5bdd45;
case 0x5bdd48:c.instructions+=3;goto B5bdd48;
case 0x5bdd4a:c.instructions+=2;goto B5bdd4a;
case 0x5bdd50:c.instructions+=1;goto B5bdd50;
case 0x5bdd55:goto L5bdd55;
case 0x5bdd57:goto L5bdd57;
case 0x5bdd5b:c.instructions+=4;goto B5bdd5b;
case 0x5bdd5e:c.instructions+=3;goto B5bdd5e;
case 0x5bdd60:c.instructions+=2;goto B5bdd60;
case 0x5bdd66:c.instructions+=1;goto B5bdd66;
case 0x5bdd6b:goto L5bdd6b;
case 0x5bdd6d:goto L5bdd6d;
case 0x5bdd71:c.instructions+=4;goto B5bdd71;
case 0x5bdd74:c.instructions+=3;goto B5bdd74;
case 0x5bdd76:c.instructions+=2;goto B5bdd76;
case 0x5bdd7c:c.instructions+=1;goto B5bdd7c;
case 0x5bdd81:goto L5bdd81;
case 0x5bdd83:goto L5bdd83;
case 0x5bdd87:c.instructions+=4;goto B5bdd87;
case 0x5bdd8a:c.instructions+=3;goto B5bdd8a;
case 0x5bdd8c:c.instructions+=2;goto B5bdd8c;
case 0x5bdd92:c.instructions+=1;goto B5bdd92;
case 0x5bdd97:goto L5bdd97;
case 0x5bdd99:goto L5bdd99;
case 0x5bdd9d:c.instructions+=5;goto B5bdd9d;
case 0x5bdda0:c.instructions+=4;goto B5bdda0;
case 0x5bdda6:c.instructions+=3;goto B5bdda6;
case 0x5bdda7:c.instructions+=2;goto B5bdda7;
case 0x5bddab:c.instructions+=1;goto B5bddab;
case 0x5bddb1:goto L5bddb1;
case 0x5bddb7:c.instructions+=10;goto B5bddb7;
case 0x5bddba:c.instructions+=9;goto B5bddba;
case 0x5bddbd:c.instructions+=8;goto B5bddbd;
case 0x5bddc3:c.instructions+=7;goto B5bddc3;
case 0x5bddc5:c.instructions+=6;goto B5bddc5;
case 0x5bddc7:c.instructions+=5;goto B5bddc7;
case 0x5bddcb:c.instructions+=4;goto B5bddcb;
case 0x5bddcc:c.instructions+=3;goto B5bddcc;
case 0x5bddcd:c.instructions+=2;goto B5bddcd;
case 0x5bddce:c.instructions+=1;goto B5bddce;
case 0x5bddd4:goto L5bddd4;
case 0x5bddd5:c.instructions+=5;goto B5bddd5;
case 0x5bddd6:c.instructions+=4;goto B5bddd6;
case 0x5bddd7:c.instructions+=3;goto B5bddd7;
case 0x5bddd9:c.instructions+=2;goto B5bddd9;
case 0x5bddda:c.instructions+=1;goto B5bddda;
case 0x5bdde0:goto L5bdde0;
case 0x5bdde1:c.instructions+=12;goto B5bdde1;
case 0x5bdde3:c.instructions+=11;goto B5bdde3;
case 0x5bdde6:c.instructions+=10;goto B5bdde6;
case 0x5bddec:c.instructions+=9;goto B5bddec;
case 0x5bddf2:c.instructions+=8;goto B5bddf2;
case 0x5bddf5:c.instructions+=7;goto B5bddf5;
case 0x5bddf6:c.instructions+=6;goto B5bddf6;
case 0x5bddf7:c.instructions+=5;goto B5bddf7;
case 0x5bddfc:c.instructions+=4;goto B5bddfc;
case 0x5bddfd:c.instructions+=3;goto B5bddfd;
case 0x5bddfe:c.instructions+=2;goto B5bddfe;
case 0x5bde04:c.instructions+=1;goto B5bde04;
case 0x5bde06:goto L5bde06;
case 0x5bde0c:goto L5bde0c;
case 0x5bde12:c.instructions+=2;goto B5bde12;
case 0x5bde15:c.instructions+=1;goto B5bde15;
case 0x5bde17:goto L5bde17;
case 0x5bde1c:c.instructions+=2;goto B5bde1c;
case 0x5bde22:c.instructions+=1;goto B5bde22;
case 0x5bde24:goto L5bde24;
case 0x5bde2a:c.instructions+=1;goto B5bde2a;
case 0x5bde30:goto L5bde30;
case 0x5bde31:c.instructions+=1;goto B5bde31;
case 0x5bde36:goto L5bde36;
case 0x5bde38:c.instructions+=8;goto B5bde38;
case 0x5bde3d:c.instructions+=7;goto B5bde3d;
case 0x5bde40:c.instructions+=6;goto B5bde40;
case 0x5bde46:c.instructions+=5;goto B5bde46;
case 0x5bde48:c.instructions+=4;goto B5bde48;
case 0x5bde4d:c.instructions+=3;goto B5bde4d;
case 0x5bde50:c.instructions+=2;goto B5bde50;
case 0x5bde54:c.instructions+=1;goto B5bde54;
case 0x5bde56:goto L5bde56;
case 0x5bde59:c.instructions+=2;goto B5bde59;
case 0x5bde5b:c.instructions+=1;goto B5bde5b;
case 0x5bde5d:goto L5bde5d;
case 0x5bde62:c.instructions+=5;goto B5bde62;
case 0x5bde64:c.instructions+=4;goto B5bde64;
case 0x5bde65:c.instructions+=3;goto B5bde65;
case 0x5bde67:c.instructions+=2;goto B5bde67;
case 0x5bde68:c.instructions+=1;goto B5bde68;
case 0x5bde6e:goto L5bde6e;
case 0x5bde73:c.instructions+=5;goto B5bde73;
case 0x5bde75:c.instructions+=4;goto B5bde75;
case 0x5bde76:c.instructions+=3;goto B5bde76;
case 0x5bde78:c.instructions+=2;goto B5bde78;
case 0x5bde79:c.instructions+=1;goto B5bde79;
case 0x5bde7f:goto L5bde7f;
case 0x5bde84:goto L5bde84;
case 0x5bde8a:c.instructions+=4;goto B5bde8a;
case 0x5bde8b:c.instructions+=3;goto B5bde8b;
case 0x5bde91:c.instructions+=2;goto B5bde91;
case 0x5bde97:c.instructions+=1;goto B5bde97;
case 0x5bde99:goto L5bde99;
case 0x5bde9f:c.instructions+=1;goto B5bde9f;
case 0x5bdea1:goto L5bdea1;
case 0x5bdea4:c.instructions+=2;goto B5bdea4;
case 0x5bdea6:c.instructions+=1;goto B5bdea6;
case 0x5bdea8:goto L5bdea8;
case 0x5bdead:c.instructions+=5;goto B5bdead;
case 0x5bdeaf:c.instructions+=4;goto B5bdeaf;
case 0x5bdeb0:c.instructions+=3;goto B5bdeb0;
case 0x5bdeb2:c.instructions+=2;goto B5bdeb2;
case 0x5bdeb3:c.instructions+=1;goto B5bdeb3;
case 0x5bdeb9:goto L5bdeb9;
case 0x5bdebe:c.instructions+=5;goto B5bdebe;
case 0x5bdec0:c.instructions+=4;goto B5bdec0;
case 0x5bdec1:c.instructions+=3;goto B5bdec1;
case 0x5bdec3:c.instructions+=2;goto B5bdec3;
case 0x5bdec4:c.instructions+=1;goto B5bdec4;
case 0x5bdeca:goto L5bdeca;
case 0x5bdecf:goto L5bdecf;
case 0x5bded5:c.instructions+=9;goto B5bded5;
case 0x5bded8:c.instructions+=8;goto B5bded8;
case 0x5bded9:c.instructions+=7;goto B5bded9;
case 0x5bdedf:c.instructions+=6;goto B5bdedf;
case 0x5bdee2:c.instructions+=5;goto B5bdee2;
case 0x5bdee8:c.instructions+=4;goto B5bdee8;
case 0x5bdeea:c.instructions+=3;goto B5bdeea;
case 0x5bdeef:c.instructions+=2;goto B5bdeef;
case 0x5bdef5:c.instructions+=1;goto B5bdef5;
case 0x5bdef7:goto L5bdef7;
case 0x5bdef8:c.instructions+=4;goto B5bdef8;
case 0x5bdef9:c.instructions+=3;goto B5bdef9;
case 0x5bdefd:c.instructions+=2;goto B5bdefd;
case 0x5bdefe:c.instructions+=1;goto B5bdefe;
case 0x5bdf03:goto L5bdf03;
case 0x5bdf09:c.instructions+=9;goto B5bdf09;
case 0x5bdf0c:c.instructions+=8;goto B5bdf0c;
case 0x5bdf0f:c.instructions+=7;goto B5bdf0f;
case 0x5bdf15:c.instructions+=6;goto B5bdf15;
case 0x5bdf17:c.instructions+=5;goto B5bdf17;
case 0x5bdf1b:c.instructions+=4;goto B5bdf1b;
case 0x5bdf1c:c.instructions+=3;goto B5bdf1c;
case 0x5bdf1d:c.instructions+=2;goto B5bdf1d;
case 0x5bdf1e:c.instructions+=1;goto B5bdf1e;
case 0x5bdf24:goto L5bdf24;
case 0x5bdf29:goto L5bdf29;
case 0x5bdf2c:c.instructions+=2;goto B5bdf2c;
case 0x5bdf2e:c.instructions+=1;goto B5bdf2e;
case 0x5bdf30:goto L5bdf30;
case 0x5bdf35:c.instructions+=5;goto B5bdf35;
case 0x5bdf37:c.instructions+=4;goto B5bdf37;
case 0x5bdf38:c.instructions+=3;goto B5bdf38;
case 0x5bdf3d:c.instructions+=2;goto B5bdf3d;
case 0x5bdf3e:c.instructions+=1;goto B5bdf3e;
case 0x5bdf44:goto L5bdf44;
case 0x5bdf49:c.instructions+=3;goto B5bdf49;
case 0x5bdf4c:c.instructions+=2;goto B5bdf4c;
case 0x5bdf4e:c.instructions+=1;goto B5bdf4e;
case 0x5bdf50:goto L5bdf50;
case 0x5bdf54:c.instructions+=5;goto B5bdf54;
case 0x5bdf55:c.instructions+=4;goto B5bdf55;
case 0x5bdf56:c.instructions+=3;goto B5bdf56;
case 0x5bdf5a:c.instructions+=2;goto B5bdf5a;
case 0x5bdf5b:c.instructions+=1;goto B5bdf5b;
case 0x5bdf60:goto L5bdf60;
case 0x5bdf66:c.instructions+=9;goto B5bdf66;
case 0x5bdf69:c.instructions+=8;goto B5bdf69;
case 0x5bdf6c:c.instructions+=7;goto B5bdf6c;
case 0x5bdf72:c.instructions+=6;goto B5bdf72;
case 0x5bdf74:c.instructions+=5;goto B5bdf74;
case 0x5bdf78:c.instructions+=4;goto B5bdf78;
case 0x5bdf79:c.instructions+=3;goto B5bdf79;
case 0x5bdf7a:c.instructions+=2;goto B5bdf7a;
case 0x5bdf7b:c.instructions+=1;goto B5bdf7b;
case 0x5bdf81:goto L5bdf81;
case 0x5bdf82:c.instructions+=5;goto B5bdf82;
case 0x5bdf83:c.instructions+=4;goto B5bdf83;
case 0x5bdf84:c.instructions+=3;goto B5bdf84;
case 0x5bdf86:c.instructions+=2;goto B5bdf86;
case 0x5bdf87:c.instructions+=1;goto B5bdf87;
case 0x5bdf90:goto L5bdf90;
case 0x5bdf96:c.instructions+=9;goto B5bdf96;
case 0x5bdf99:c.instructions+=8;goto B5bdf99;
case 0x5bdf9c:c.instructions+=7;goto B5bdf9c;
case 0x5bdf9f:c.instructions+=6;goto B5bdf9f;
case 0x5bdfa1:c.instructions+=5;goto B5bdfa1;
case 0x5bdfa3:c.instructions+=4;goto B5bdfa3;
case 0x5bdfa8:c.instructions+=3;goto B5bdfa8;
case 0x5bdfa9:c.instructions+=2;goto B5bdfa9;
case 0x5bdfaa:c.instructions+=1;goto B5bdfaa;
case 0x5bdfad:goto L5bdfad;
case 0x5bdfb0:goto L5bdfb0;
case 0x5bdfb2:c.instructions+=4;goto B5bdfb2;
case 0x5bdfb7:c.instructions+=3;goto B5bdfb7;
case 0x5bdfb9:c.instructions+=2;goto B5bdfb9;
case 0x5bdfbe:c.instructions+=1;goto B5bdfbe;
case 0x5bdfc3:goto L5bdfc3;
case 0x5bdfc8:c.instructions+=5;goto B5bdfc8;
case 0x5bdfcb:c.instructions+=4;goto B5bdfcb;
case 0x5bdfce:c.instructions+=3;goto B5bdfce;
case 0x5bdfd1:c.instructions+=2;goto B5bdfd1;
case 0x5bdfd4:c.instructions+=1;goto B5bdfd4;
case 0x5bdfe0:goto L5bdfe0;
case 0x5bdfe1:c.instructions+=4;goto B5bdfe1;
case 0x5bdfe3:c.instructions+=3;goto B5bdfe3;
case 0x5bdfe9:c.instructions+=2;goto B5bdfe9;
case 0x5bdfea:c.instructions+=1;goto B5bdfea;
case 0x5bdfef:goto L5bdfef;
case 0x5bdff2:c.instructions+=5;goto B5bdff2;
case 0x5bdff5:c.instructions+=4;goto B5bdff5;
case 0x5bdffa:c.instructions+=3;goto B5bdffa;
case 0x5bdffc:c.instructions+=2;goto B5bdffc;
case 0x5bdffe:c.instructions+=1;goto B5bdffe;
default:missing_instruction(c.pc);}
B5bd003:L5bd003:{c.instructions+=9;NFSU2_TR(0x5bd003);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bd005:{NFSU2_TR(0x5bd005);
__builtin_memmove(gp(0x870790),(R+0),4);
}
B5bd00a:{NFSU2_TR(0x5bd00a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5bd00d:{NFSU2_TR(0x5bd00d);
u8 U[4];
w4(U+0,u32(0x7a3674ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bd012:{NFSU2_TR(0x5bd012);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfffffffdull))));
}
B5bd015:{NFSU2_TR(0x5bd015);
u8 U[4];
w4(U+0,u32(0x400ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bd01a:{NFSU2_TR(0x5bd01a);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bd01c:{NFSU2_TR(0x5bd01c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bd01f:{NFSU2_TR(0x5bd01f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bd024ull));
TAIL_STATIC(0x440df0u,440);
}
B5bd024:L5bd024:{c.instructions+=9;NFSU2_TR(0x5bd024);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bd026:{NFSU2_TR(0x5bd026);
__builtin_memmove(gp(0x870918),(R+0),4);
}
B5bd02b:{NFSU2_TR(0x5bd02b);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5bd02e:{NFSU2_TR(0x5bd02e);
u8 U[4];
w4(U+0,u32(0x7a3668ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bd033:{NFSU2_TR(0x5bd033);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfffffffdull))));
}
B5bd036:{NFSU2_TR(0x5bd036);
u8 U[4];
w4(U+0,u32(0x1000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bd03b:{NFSU2_TR(0x5bd03b);
u8 U[4];
w4(U+0,u32(0x2cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bd03d:{NFSU2_TR(0x5bd03d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bd040:{NFSU2_TR(0x5bd040);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bd045ull));
TAIL_STATIC(0x440df0u,440);
}
B5bd045:L5bd045:{c.instructions+=6;NFSU2_TR(0x5bd045);
__builtin_memmove(gp(0x87091c),(R+0),4);
}
B5bd04a:{NFSU2_TR(0x5bd04a);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5bd04d:{NFSU2_TR(0x5bd04d);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfffffffdull))));
}
B5bd050:{NFSU2_TR(0x5bd050);
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
B5bd053:{NFSU2_TR(0x5bd053);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bd056:{NFSU2_TR(0x5bd056);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5bd060:L5bd060:{c.instructions+=6;NFSU2_TR(0x5bd060);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5bd064:{NFSU2_TR(0x5bd064);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bd066:{NFSU2_TR(0x5bd066);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5bd06c:{NFSU2_TR(0x5bd06c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5bd06e:{NFSU2_TR(0x5bd06e);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5bd071:{NFSU2_TR(0x5bd071);
if(r1(R+514)){{goto L5bd077;}}
}
B5bd073:L5bd073:{c.instructions+=2;NFSU2_TR(0x5bd073);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bd075:{NFSU2_TR(0x5bd075);
{goto L5bd07d;}
}
B5bd077:L5bd077:{c.instructions+=1;NFSU2_TR(0x5bd077);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bd07d:L5bd07d:{c.instructions+=5;NFSU2_TR(0x5bd07d);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5bd083:{NFSU2_TR(0x5bd083);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5bd085:{NFSU2_TR(0x5bd085);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5bd087:{NFSU2_TR(0x5bd087);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5bd08a:{NFSU2_TR(0x5bd08a);
if(r1(R+518)){{goto L5bd094;}}
}
B5bd08c:L5bd08c:{c.instructions+=2;NFSU2_TR(0x5bd08c);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5bd08e:{NFSU2_TR(0x5bd08e);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bd094:L5bd094:{c.instructions+=6;NFSU2_TR(0x5bd094);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5bd096:{NFSU2_TR(0x5bd096);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bd099:{NFSU2_TR(0x5bd099);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5bd09f:{NFSU2_TR(0x5bd09f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5bd0a1:{NFSU2_TR(0x5bd0a1);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5bd0a4:{NFSU2_TR(0x5bd0a4);
if(r1(R+514)){{goto L5bd0ab;}}
}
B5bd0a6:L5bd0a6:{c.instructions+=2;NFSU2_TR(0x5bd0a6);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bd0a9:{NFSU2_TR(0x5bd0a9);
{goto L5bd0b1;}
}
B5bd0ab:L5bd0ab:{c.instructions+=1;NFSU2_TR(0x5bd0ab);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bd0b1:L5bd0b1:{c.instructions+=5;NFSU2_TR(0x5bd0b1);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5bd0b7:{NFSU2_TR(0x5bd0b7);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5bd0ba:{NFSU2_TR(0x5bd0ba);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5bd0bc:{NFSU2_TR(0x5bd0bc);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5bd0bf:{NFSU2_TR(0x5bd0bf);
if(r1(R+518)){{goto L5bd0c9;}}
}
B5bd0c1:L5bd0c1:{c.instructions+=2;NFSU2_TR(0x5bd0c1);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5bd0c3:{NFSU2_TR(0x5bd0c3);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bd0c9:L5bd0c9:{c.instructions+=6;NFSU2_TR(0x5bd0c9);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5bd0cc:{NFSU2_TR(0x5bd0cc);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bd0cf:{NFSU2_TR(0x5bd0cf);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5bd0d5:{NFSU2_TR(0x5bd0d5);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5bd0d7:{NFSU2_TR(0x5bd0d7);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5bd0da:{NFSU2_TR(0x5bd0da);
if(r1(R+514)){{goto L5bd0e1;}}
}
B5bd0dc:L5bd0dc:{c.instructions+=2;NFSU2_TR(0x5bd0dc);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bd0df:{NFSU2_TR(0x5bd0df);
{goto L5bd0e7;}
}
B5bd0e1:L5bd0e1:{c.instructions+=1;NFSU2_TR(0x5bd0e1);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bd0e7:L5bd0e7:{c.instructions+=5;NFSU2_TR(0x5bd0e7);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5bd0ed:{NFSU2_TR(0x5bd0ed);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5bd0f0:{NFSU2_TR(0x5bd0f0);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5bd0f2:{NFSU2_TR(0x5bd0f2);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5bd0f5:{NFSU2_TR(0x5bd0f5);
if(r1(R+518)){{goto L5bd0ff;}}
}
B5bd0f7:L5bd0f7:{c.instructions+=2;NFSU2_TR(0x5bd0f7);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5bd0f9:{NFSU2_TR(0x5bd0f9);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bd0ff:L5bd0ff:{c.instructions+=6;NFSU2_TR(0x5bd0ff);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5bd102:{NFSU2_TR(0x5bd102);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bd105:{NFSU2_TR(0x5bd105);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5bd10b:{NFSU2_TR(0x5bd10b);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5bd10d:{NFSU2_TR(0x5bd10d);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B5bd110:{NFSU2_TR(0x5bd110);
if(r1(R+514)){{goto L5bd117;}}
}
B5bd112:L5bd112:{c.instructions+=2;NFSU2_TR(0x5bd112);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bd115:{NFSU2_TR(0x5bd115);
{goto L5bd11d;}
}
B5bd117:L5bd117:{c.instructions+=1;NFSU2_TR(0x5bd117);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bd11d:L5bd11d:{c.instructions+=5;NFSU2_TR(0x5bd11d);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B5bd123:{NFSU2_TR(0x5bd123);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5bd126:{NFSU2_TR(0x5bd126);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5bd128:{NFSU2_TR(0x5bd128);
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
B5bd12b:{NFSU2_TR(0x5bd12b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5bd131;}}
}
B5bd12d:L5bd12d:{c.instructions+=2;NFSU2_TR(0x5bd12d);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5bd130:{NFSU2_TR(0x5bd130);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5bd131:L5bd131:{c.instructions+=3;NFSU2_TR(0x5bd131);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B5bd133:{NFSU2_TR(0x5bd133);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5bd13a:{NFSU2_TR(0x5bd13a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5bd140:L5bd140:{c.instructions+=11;NFSU2_TR(0x5bd140);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bd141:{NFSU2_TR(0x5bd141);
__builtin_memmove((R+20),(R+16),4);
}
B5bd143:{NFSU2_TR(0x5bd143);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B5bd146:{NFSU2_TR(0x5bd146);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0xf4ull))));
}
B5bd14c:{NFSU2_TR(0x5bd14c);
__builtin_memmove((R+4),gp(0x870910),4);
}
B5bd152:{NFSU2_TR(0x5bd152);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5bd155:{NFSU2_TR(0x5bd155);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5bd158:{NFSU2_TR(0x5bd158);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bd159:{NFSU2_TR(0x5bd159);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bd15a:{NFSU2_TR(0x5bd15a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bd15b:{NFSU2_TR(0x5bd15b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5bd440;}}
}
B5bd161:L5bd161:{c.instructions+=3;NFSU2_TR(0x5bd161);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B5bd164:{NFSU2_TR(0x5bd164);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5bd166:{NFSU2_TR(0x5bd166);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5bd43b;}}
}
B5bd16c:L5bd16c:{c.instructions+=16;NFSU2_TR(0x5bd16c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5bd16f:{NFSU2_TR(0x5bd16f);
{u32 ea_=u32(u32(8389900u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bd175:{NFSU2_TR(0x5bd175);
{u32 ea_=u32(r4(R+24)+u32(288u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5bd17b:{NFSU2_TR(0x5bd17b);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5bd17f:{NFSU2_TR(0x5bd17f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bd180:{NFSU2_TR(0x5bd180);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5bd184:{NFSU2_TR(0x5bd184);
{u32 ea_=u32(u32(8389900u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bd18a:{NFSU2_TR(0x5bd18a);
{u32 ea_=u32(r4(R+24)+u32(292u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5bd190:{NFSU2_TR(0x5bd190);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5bd194:{NFSU2_TR(0x5bd194);
{u32 ea_=u32(u32(8389900u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bd19a:{NFSU2_TR(0x5bd19a);
{u32 ea_=u32(r4(R+24)+u32(296u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5bd1a0:{NFSU2_TR(0x5bd1a0);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5bd1a4:{NFSU2_TR(0x5bd1a4);
{u32 ea_=u32(u32(8389900u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bd1aa:{NFSU2_TR(0x5bd1aa);
{u32 ea_=u32(r4(R+24)+u32(300u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5bd1b0:{NFSU2_TR(0x5bd1b0);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5bd1b4:{NFSU2_TR(0x5bd1b4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bd1b9ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5bd060u);}goto L5bd060;}
}
B5bd1b9:L5bd1b9:{c.instructions+=4;NFSU2_TR(0x5bd1b9);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bd1bd:{NFSU2_TR(0x5bd1bd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5bd1c0:{NFSU2_TR(0x5bd1c0);
{u32 ea_=u32(u32(7882052u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5bd1c6:{NFSU2_TR(0x5bd1c6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bd1cbull));
TAIL_STATIC(0x75bed4u,75b);
}
B5bd1cb:L5bd1cb:{c.instructions+=5;NFSU2_TR(0x5bd1cb);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bd1cf:{NFSU2_TR(0x5bd1cf);
{u32 ea_=u32(u32(7882052u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5bd1d5:{NFSU2_TR(0x5bd1d5);
__builtin_memmove((R+12),(R+0),4);
}
B5bd1d7:{NFSU2_TR(0x5bd1d7);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+12,shl<u32>(r4(R+12),u64(r4(U+0))));
}
B5bd1da:{NFSU2_TR(0x5bd1da);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bd1dfull));
TAIL_STATIC(0x75bed4u,75b);
}
B5bd1df:L5bd1df:{c.instructions+=5;NFSU2_TR(0x5bd1df);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bd1e3:{NFSU2_TR(0x5bd1e3);
{u32 ea_=u32(u32(7882052u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5bd1e9:{NFSU2_TR(0x5bd1e9);
w4(R+12,u32(u32(r4(R+12))|u32(r4(R+0))));
}
B5bd1eb:{NFSU2_TR(0x5bd1eb);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+12,shl<u32>(r4(R+12),u64(r4(U+0))));
}
B5bd1ee:{NFSU2_TR(0x5bd1ee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bd1f3ull));
TAIL_STATIC(0x75bed4u,75b);
}
B5bd1f3:L5bd1f3:{c.instructions+=5;NFSU2_TR(0x5bd1f3);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bd1f7:{NFSU2_TR(0x5bd1f7);
{u32 ea_=u32(u32(7882052u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5bd1fd:{NFSU2_TR(0x5bd1fd);
w4(R+12,u32(u32(r4(R+12))|u32(r4(R+0))));
}
B5bd1ff:{NFSU2_TR(0x5bd1ff);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+12,shl<u32>(r4(R+12),u64(r4(U+0))));
}
B5bd202:{NFSU2_TR(0x5bd202);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bd207ull));
TAIL_STATIC(0x75bed4u,75b);
}
B5bd207:L5bd207:{c.instructions+=46;NFSU2_TR(0x5bd207);
{u32 ea_=u32(r4(R+24)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bd20a:{NFSU2_TR(0x5bd20a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5bd20d:{NFSU2_TR(0x5bd20d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5bd210:{NFSU2_TR(0x5bd210);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5bd214:{NFSU2_TR(0x5bd214);
{u32 ea_=u32(r4(R+24)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bd217:{NFSU2_TR(0x5bd217);
w4(R+12,u32(u32(r4(R+12))|u32(r4(R+0))));
}
B5bd219:{NFSU2_TR(0x5bd219);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5bd21c:{NFSU2_TR(0x5bd21c);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5bd220:{NFSU2_TR(0x5bd220);
{u32 ea_=u32(r4(R+24)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bd223:{NFSU2_TR(0x5bd223);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bd227:{NFSU2_TR(0x5bd227);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5bd229:{NFSU2_TR(0x5bd229);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5bd22d:{NFSU2_TR(0x5bd22d);
{u32 ea_=u32(r4(R+24)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bd230:{NFSU2_TR(0x5bd230);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bd234:{NFSU2_TR(0x5bd234);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5bd237:{NFSU2_TR(0x5bd237);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5bd23b:{NFSU2_TR(0x5bd23b);
{u32 ea_=u32(r4(R+24)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bd23e:{NFSU2_TR(0x5bd23e);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5bd246:{NFSU2_TR(0x5bd246);
{u32 ea_=u32(r4(R+16)+u32(116u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5bd24a:{NFSU2_TR(0x5bd24a);
{u32 ea_=u32(r4(R+24)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bd24d:{NFSU2_TR(0x5bd24d);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5bd255:{NFSU2_TR(0x5bd255);
{u32 ea_=u32(r4(R+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5bd259:{NFSU2_TR(0x5bd259);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bd25c:{NFSU2_TR(0x5bd25c);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5bd264:{NFSU2_TR(0x5bd264);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5bd268:{NFSU2_TR(0x5bd268);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bd26b:{NFSU2_TR(0x5bd26b);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5bd273:{NFSU2_TR(0x5bd273);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5bd277:{NFSU2_TR(0x5bd277);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bd27a:{NFSU2_TR(0x5bd27a);
u8 U[8];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5bd282:{NFSU2_TR(0x5bd282);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5bd286:{NFSU2_TR(0x5bd286);
{u32 ea_=u32(r4(R+24)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bd289:{NFSU2_TR(0x5bd289);
u8 U[8];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bd28d:{NFSU2_TR(0x5bd28d);
u8 U[8];
w4(U+0,u32(u32(u32(0x7cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5bd295:{NFSU2_TR(0x5bd295);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bd299:{NFSU2_TR(0x5bd299);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bd29d:{NFSU2_TR(0x5bd29d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5bd2a0:{NFSU2_TR(0x5bd2a0);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5bd2a4:{NFSU2_TR(0x5bd2a4);
{u32 ea_=u32(r4(R+24)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bd2a7:{NFSU2_TR(0x5bd2a7);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B5bd2a9:{NFSU2_TR(0x5bd2a9);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5bd2ad:{NFSU2_TR(0x5bd2ad);
{u32 ea_=u32(r4(R+24)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bd2b0:{NFSU2_TR(0x5bd2b0);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bd2b4:{NFSU2_TR(0x5bd2b4);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5bd2b8:{NFSU2_TR(0x5bd2b8);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B5bd2ba:{NFSU2_TR(0x5bd2ba);
__builtin_memmove((R+12),(R+12),4);
}
B5bd2c0:L5bd2c0:{c.instructions+=34;NFSU2_TR(0x5bd2c0);
{u32 ea_=u32(u32(8389904u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bd2c6:{NFSU2_TR(0x5bd2c6);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5bd2ca:{NFSU2_TR(0x5bd2ca);
{u32 ea_=u32(r4(R+24)+r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5bd2ce:{NFSU2_TR(0x5bd2ce);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5bd2d2:{NFSU2_TR(0x5bd2d2);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5bd2d6:{NFSU2_TR(0x5bd2d6);
u8 U[8];
w4(U+0,u32(u32(u32(0xbcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bd2dd:{NFSU2_TR(0x5bd2dd);
{u32 ea_=u32(r4(R+16)+u32(156u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5bd2e4:{NFSU2_TR(0x5bd2e4);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5bd2e8:{NFSU2_TR(0x5bd2e8);
{u32 ea_=u32(u32(8389904u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bd2ee:{NFSU2_TR(0x5bd2ee);
u8 U[8];
w4(U+0,u32(u32(u32(0xc0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bd2f5:{NFSU2_TR(0x5bd2f5);
{u32 ea_=u32(r4(R+24)+r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5bd2f9:{NFSU2_TR(0x5bd2f9);
u8 U[12];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B5bd2fd:{NFSU2_TR(0x5bd2fd);
u8 U[8];
w4(U+0,u32(u32(u32(0xc4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bd304:{NFSU2_TR(0x5bd304);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5bd307:{NFSU2_TR(0x5bd307);
{u32 ea_=u32(r4(R+16)+u32(160u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5bd30e:{NFSU2_TR(0x5bd30e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bd30f:{NFSU2_TR(0x5bd30f);
{u32 ea_=u32(u32(8389904u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bd315:{NFSU2_TR(0x5bd315);
u8 U[8];
w4(U+0,u32(u32(u32(0xccull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bd31c:{NFSU2_TR(0x5bd31c);
{u32 ea_=u32(r4(R+24)+r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5bd320:{NFSU2_TR(0x5bd320);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bd321:{NFSU2_TR(0x5bd321);
u8 U[4];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5bd328:{NFSU2_TR(0x5bd328);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bd329:{NFSU2_TR(0x5bd329);
{u32 ea_=u32(r4(R+16)+u32(176u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5bd330:{NFSU2_TR(0x5bd330);
u8 U[8];
w4(U+0,u32(u32(u32(0xa4ull))+u32(r4(R+16))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5bd33b:{NFSU2_TR(0x5bd33b);
{u32 ea_=u32(u32(8389908u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bd341:{NFSU2_TR(0x5bd341);
{u32 ea_=u32(r4(R+24)+r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5bd345:{NFSU2_TR(0x5bd345);
{u32 ea_=u32(r4(R+16)+u32(184u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5bd34c:{NFSU2_TR(0x5bd34c);
{u32 ea_=u32(u32(8389908u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bd352:{NFSU2_TR(0x5bd352);
{u32 ea_=u32(r4(R+24)+r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5bd356:{NFSU2_TR(0x5bd356);
{u32 ea_=u32(r4(R+16)+u32(188u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5bd35d:{NFSU2_TR(0x5bd35d);
{u32 ea_=u32(u32(8389908u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bd363:{NFSU2_TR(0x5bd363);
{u32 ea_=u32(r4(R+24)+r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5bd367:{NFSU2_TR(0x5bd367);
{u32 ea_=u32(r4(R+16)+u32(192u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5bd36e:{NFSU2_TR(0x5bd36e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bd373ull));
TAIL_STATIC(0x43c9b0u,43c);
}
B5bd373:L5bd373:{c.instructions+=17;NFSU2_TR(0x5bd373);
{u32 ea_=u32(r4(R+16)+u32(140u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bd37a:{NFSU2_TR(0x5bd37a);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5bd37f:{NFSU2_TR(0x5bd37f);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5bd381:{NFSU2_TR(0x5bd381);
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
B5bd384:{NFSU2_TR(0x5bd384);
{u32 ea_=u32(r4(R+16)+u32(216u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5bd38b:{NFSU2_TR(0x5bd38b);
u8 U[4];
w4(U+0,u32(u32(u32(0x98ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5bd392:{NFSU2_TR(0x5bd392);
{u32 ea_=u32(r4(R+16)+u32(132u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bd399:{NFSU2_TR(0x5bd399);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bd39a:{NFSU2_TR(0x5bd39a);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5bd39c:{NFSU2_TR(0x5bd39c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bd39d:{NFSU2_TR(0x5bd39d);
{u32 ea_=u32(r4(R+16)+u32(228u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5bd3a4:{NFSU2_TR(0x5bd3a4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bd3a5:{NFSU2_TR(0x5bd3a5);
{u32 ea_=u32(r4(R+16)+u32(148u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bd3ac:{NFSU2_TR(0x5bd3ac);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B5bd3ae:{NFSU2_TR(0x5bd3ae);
{u32 ea_=u32(r4(R+16)+u32(236u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5bd3b5:{NFSU2_TR(0x5bd3b5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5bd3b7:{NFSU2_TR(0x5bd3b7);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bd3bdull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5bd3bd:L5bd3bd:{c.instructions+=6;NFSU2_TR(0x5bd3bd);
{u32 ea_=u32(r4(R+16)+u32(216u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bd3c4:{NFSU2_TR(0x5bd3c4);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B5bd3c6:{NFSU2_TR(0x5bd3c6);
{u32 ea_=u32(u32(7881708u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5bd3cc:{NFSU2_TR(0x5bd3cc);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5bd3ce:{NFSU2_TR(0x5bd3ce);
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
B5bd3d1:{NFSU2_TR(0x5bd3d1);
if(r1(R+514)){{goto L5bd3ff;}}
}
B5bd3d3:L5bd3d3:{c.instructions+=6;NFSU2_TR(0x5bd3d3);
{u32 ea_=u32(r4(R+16)+u32(220u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bd3da:{NFSU2_TR(0x5bd3da);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B5bd3dc:{NFSU2_TR(0x5bd3dc);
{u32 ea_=u32(u32(7881708u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5bd3e2:{NFSU2_TR(0x5bd3e2);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5bd3e4:{NFSU2_TR(0x5bd3e4);
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
B5bd3e7:{NFSU2_TR(0x5bd3e7);
if(r1(R+514)){{goto L5bd3ff;}}
}
B5bd3e9:L5bd3e9:{c.instructions+=6;NFSU2_TR(0x5bd3e9);
{u32 ea_=u32(r4(R+16)+u32(224u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bd3f0:{NFSU2_TR(0x5bd3f0);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B5bd3f2:{NFSU2_TR(0x5bd3f2);
{u32 ea_=u32(u32(7881708u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5bd3f8:{NFSU2_TR(0x5bd3f8);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5bd3fa:{NFSU2_TR(0x5bd3fa);
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
B5bd3fd:{NFSU2_TR(0x5bd3fd);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L5bd410;}}
}
B5bd3ff:L5bd3ff:{c.instructions+=6;NFSU2_TR(0x5bd3ff);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5bd404:{NFSU2_TR(0x5bd404);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5bd406:{NFSU2_TR(0x5bd406);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bd408:{NFSU2_TR(0x5bd408);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bd409:{NFSU2_TR(0x5bd409);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bd40a:{NFSU2_TR(0x5bd40a);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bd410ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5bd410:L5bd410:{c.instructions+=4;NFSU2_TR(0x5bd410);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x10ull))));
}
B5bd413:{NFSU2_TR(0x5bd413);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B5bd414:{NFSU2_TR(0x5bd414);
u8 U[14];
__builtin_memmove((U+6),(R+24),4);
w1(R+512,u8((r4(U+6))<(u32(0x30ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x30ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x30ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5bd417:{NFSU2_TR(0x5bd417);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5bd2c0u);}goto L5bd2c0;}}
}
B5bd41d:L5bd41d:{c.instructions+=9;NFSU2_TR(0x5bd41d);
__builtin_memmove((R+4),gp(0x870910),4);
}
B5bd423:{NFSU2_TR(0x5bd423);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5bd426:{NFSU2_TR(0x5bd426);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5bd429:{NFSU2_TR(0x5bd429);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5bd42c:{NFSU2_TR(0x5bd42c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5bd42e:{NFSU2_TR(0x5bd42e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bd42f:{NFSU2_TR(0x5bd42f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bd430:{NFSU2_TR(0x5bd430);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bd431:{NFSU2_TR(0x5bd431);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bd434ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5bd434:L5bd434:{c.instructions+=6;NFSU2_TR(0x5bd434);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5bd435:{NFSU2_TR(0x5bd435);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5bd436:{NFSU2_TR(0x5bd436);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5bd437:{NFSU2_TR(0x5bd437);
__builtin_memmove((R+16),(R+20),4);
}
B5bd439:{NFSU2_TR(0x5bd439);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5bd43a:{NFSU2_TR(0x5bd43a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5bd43b:L5bd43b:{c.instructions+=2;NFSU2_TR(0x5bd43b);
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
B5bd43e:{NFSU2_TR(0x5bd43e);
if(r1(R+518)){{goto L5bd445;}}
}
B5bd440:L5bd440:{c.instructions+=2;NFSU2_TR(0x5bd440);
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
B5bd443:{NFSU2_TR(0x5bd443);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5bd48a;}}
}
B5bd445:L5bd445:{c.instructions+=11;NFSU2_TR(0x5bd445);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5bd448:{NFSU2_TR(0x5bd448);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5bd44b:{NFSU2_TR(0x5bd44b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5bd44e:{NFSU2_TR(0x5bd44e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4fcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5bd454:{NFSU2_TR(0x5bd454);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5bd456:{NFSU2_TR(0x5bd456);
u8 U[4];
w4(U+0,u32(0xaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bd458:{NFSU2_TR(0x5bd458);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x120ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5bd45e:{NFSU2_TR(0x5bd45e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bd45f:{NFSU2_TR(0x5bd45f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bd460:{NFSU2_TR(0x5bd460);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bd461:{NFSU2_TR(0x5bd461);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bd467ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5bd467:L5bd467:{c.instructions+=10;NFSU2_TR(0x5bd467);
__builtin_memmove((R+4),gp(0x870910),4);
}
B5bd46d:{NFSU2_TR(0x5bd46d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5bd470:{NFSU2_TR(0x5bd470);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5bd473:{NFSU2_TR(0x5bd473);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5ecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5bd479:{NFSU2_TR(0x5bd479);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5bd47b:{NFSU2_TR(0x5bd47b);
u8 U[6];
w1(R+512,carry<u32>(r4(R+24),u32(0xc0ull)));
w1(R+523,scarry<u32>(r4(R+24),u32(0xc0ull)));
w4(R+24,u32(u32(r4(R+24))+u32(u32(0xc0ull))));
w1(R+519,u8(s32(r4(R+24))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+24))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+24))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5bd481:{NFSU2_TR(0x5bd481);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bd482:{NFSU2_TR(0x5bd482);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bd483:{NFSU2_TR(0x5bd483);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bd484:{NFSU2_TR(0x5bd484);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bd48aull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5bd48a:L5bd48a:{c.instructions+=6;NFSU2_TR(0x5bd48a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5bd48b:{NFSU2_TR(0x5bd48b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5bd48c:{NFSU2_TR(0x5bd48c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5bd48d:{NFSU2_TR(0x5bd48d);
__builtin_memmove((R+16),(R+20),4);
}
B5bd48f:{NFSU2_TR(0x5bd48f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5bd490:{NFSU2_TR(0x5bd490);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5bd4a0:L5bd4a0:{c.instructions+=89;NFSU2_TR(0x5bd4a0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bd4a1:{NFSU2_TR(0x5bd4a1);
__builtin_memmove((R+20),(R+16),4);
}
B5bd4a3:{NFSU2_TR(0x5bd4a3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B5bd4a6:{NFSU2_TR(0x5bd4a6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x104ull))));
}
B5bd4ac:{NFSU2_TR(0x5bd4ac);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bd4ad:{NFSU2_TR(0x5bd4ad);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bd4ae:{NFSU2_TR(0x5bd4ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5bd4b1:{NFSU2_TR(0x5bd4b1);
{u32 ea_=u32(r4(R+24)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bd4b4:{NFSU2_TR(0x5bd4b4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bd4b5:{NFSU2_TR(0x5bd4b5);
{u32 ea_=u32(r4(R+24)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5bd4b8:{NFSU2_TR(0x5bd4b8);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5bd4c0:{NFSU2_TR(0x5bd4c0);
u8 U[8];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5bd4c8:{NFSU2_TR(0x5bd4c8);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5bd4d0:{NFSU2_TR(0x5bd4d0);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5bd4d4:{NFSU2_TR(0x5bd4d4);
{u32 ea_=u32(r4(R+24)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bd4d7:{NFSU2_TR(0x5bd4d7);
{u32 ea_=u32(r4(R+24)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5bd4da:{NFSU2_TR(0x5bd4da);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5bd4de:{NFSU2_TR(0x5bd4de);
{u32 ea_=u32(r4(R+24)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bd4e1:{NFSU2_TR(0x5bd4e1);
{u32 ea_=u32(r4(R+24)+u32(48u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5bd4e4:{NFSU2_TR(0x5bd4e4);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5bd4e8:{NFSU2_TR(0x5bd4e8);
{u32 ea_=u32(r4(R+24)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bd4eb:{NFSU2_TR(0x5bd4eb);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5bd4ef:{NFSU2_TR(0x5bd4ef);
{u32 ea_=u32(r4(R+24)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bd4f2:{NFSU2_TR(0x5bd4f2);
{u32 ea_=u32(r4(R+24)+u32(64u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5bd4f5:{NFSU2_TR(0x5bd4f5);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5bd4f9:{NFSU2_TR(0x5bd4f9);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5bd4fd:{NFSU2_TR(0x5bd4fd);
{u32 ea_=u32(r4(R+24)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bd500:{NFSU2_TR(0x5bd500);
{u32 ea_=u32(r4(R+24)+u32(64u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5bd503:{NFSU2_TR(0x5bd503);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5bd507:{NFSU2_TR(0x5bd507);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5bd50b:{NFSU2_TR(0x5bd50b);
{u32 ea_=u32(r4(R+24)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bd50e:{NFSU2_TR(0x5bd50e);
{u32 ea_=u32(r4(R+24)+u32(64u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5bd511:{NFSU2_TR(0x5bd511);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5bd515:{NFSU2_TR(0x5bd515);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5bd519:{NFSU2_TR(0x5bd519);
{u32 ea_=u32(r4(R+24)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bd51c:{NFSU2_TR(0x5bd51c);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5bd520:{NFSU2_TR(0x5bd520);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5bd524:{NFSU2_TR(0x5bd524);
{u32 ea_=u32(r4(R+24)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bd527:{NFSU2_TR(0x5bd527);
{u32 ea_=u32(r4(R+24)+u32(92u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5bd52a:{NFSU2_TR(0x5bd52a);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5bd52e:{NFSU2_TR(0x5bd52e);
{u32 ea_=u32(r4(R+24)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bd531:{NFSU2_TR(0x5bd531);
{u32 ea_=u32(r4(R+24)+u32(92u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5bd534:{NFSU2_TR(0x5bd534);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5bd538:{NFSU2_TR(0x5bd538);
{u32 ea_=u32(r4(R+24)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bd53b:{NFSU2_TR(0x5bd53b);
{u32 ea_=u32(r4(R+24)+u32(92u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5bd53e:{NFSU2_TR(0x5bd53e);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5bd542:{NFSU2_TR(0x5bd542);
{u32 ea_=u32(r4(R+24)+u32(112u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bd545:{NFSU2_TR(0x5bd545);
{u32 ea_=u32(r4(R+24)+u32(108u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5bd548:{NFSU2_TR(0x5bd548);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5bd54c:{NFSU2_TR(0x5bd54c);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5bd550:{NFSU2_TR(0x5bd550);
{u32 ea_=u32(r4(R+24)+u32(116u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bd553:{NFSU2_TR(0x5bd553);
{u32 ea_=u32(r4(R+24)+u32(108u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5bd556:{NFSU2_TR(0x5bd556);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5bd55a:{NFSU2_TR(0x5bd55a);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5bd55e:{NFSU2_TR(0x5bd55e);
{u32 ea_=u32(r4(R+24)+u32(120u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bd561:{NFSU2_TR(0x5bd561);
{u32 ea_=u32(r4(R+24)+u32(108u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5bd564:{NFSU2_TR(0x5bd564);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5bd568:{NFSU2_TR(0x5bd568);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5bd56c:{NFSU2_TR(0x5bd56c);
{u32 ea_=u32(r4(R+24)+u32(132u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bd572:{NFSU2_TR(0x5bd572);
{u32 ea_=u32(r4(R+24)+u32(128u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5bd578:{NFSU2_TR(0x5bd578);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5bd57e:{NFSU2_TR(0x5bd57e);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5bd582:{NFSU2_TR(0x5bd582);
{u32 ea_=u32(r4(R+24)+u32(136u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bd588:{NFSU2_TR(0x5bd588);
{u32 ea_=u32(r4(R+24)+u32(128u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5bd58e:{NFSU2_TR(0x5bd58e);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5bd594:{NFSU2_TR(0x5bd594);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5bd598:{NFSU2_TR(0x5bd598);
{u32 ea_=u32(r4(R+24)+u32(140u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bd59e:{NFSU2_TR(0x5bd59e);
{u32 ea_=u32(r4(R+24)+u32(128u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5bd5a4:{NFSU2_TR(0x5bd5a4);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5bd5aa:{NFSU2_TR(0x5bd5aa);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5bd5ae:{NFSU2_TR(0x5bd5ae);
{u32 ea_=u32(r4(R+24)+u32(148u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bd5b4:{NFSU2_TR(0x5bd5b4);
{u32 ea_=u32(r4(R+24)+u32(144u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5bd5ba:{NFSU2_TR(0x5bd5ba);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5bd5c0:{NFSU2_TR(0x5bd5c0);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5bd5c4:{NFSU2_TR(0x5bd5c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5bd5c7:{NFSU2_TR(0x5bd5c7);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5bd5ca:{NFSU2_TR(0x5bd5ca);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5bd5d2:{NFSU2_TR(0x5bd5d2);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5bd5d6:{NFSU2_TR(0x5bd5d6);
{u32 ea_=u32(r4(R+24)+u32(152u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bd5dc:{NFSU2_TR(0x5bd5dc);
{u32 ea_=u32(r4(R+24)+u32(144u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5bd5e2:{NFSU2_TR(0x5bd5e2);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5bd5e8:{NFSU2_TR(0x5bd5e8);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5bd5ec:{NFSU2_TR(0x5bd5ec);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5bd5f0:{NFSU2_TR(0x5bd5f0);
{u32 ea_=u32(r4(R+24)+u32(156u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bd5f6:{NFSU2_TR(0x5bd5f6);
{u32 ea_=u32(r4(R+24)+u32(144u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5bd5fc:{NFSU2_TR(0x5bd5fc);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5bd602:{NFSU2_TR(0x5bd602);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B5bd606:{NFSU2_TR(0x5bd606);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5bd60a:{NFSU2_TR(0x5bd60a);
if(r1(R+518)){{goto L5bd6a8;}}
}
B5bd610:L5bd610:{c.instructions+=3;NFSU2_TR(0x5bd610);
__builtin_memmove((R+4),gp(0x870cb8),4);
}
B5bd616:{NFSU2_TR(0x5bd616);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5bd618:{NFSU2_TR(0x5bd618);
if(r1(R+518)){{goto L5bd6a8;}}
}
B5bd61e:L5bd61e:{c.instructions+=2;NFSU2_TR(0x5bd61e);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+519,u8(s8(r1(U+0))<s8(u8(0x0ull))));
}
B5bd620:{NFSU2_TR(0x5bd620);
if(r1(R+519)){{goto L5bd6e8;}}
}
B5bd626:L5bd626:{c.instructions+=17;NFSU2_TR(0x5bd626);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5bd62e:{NFSU2_TR(0x5bd62e);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5bd636:{NFSU2_TR(0x5bd636);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5bd63e:{NFSU2_TR(0x5bd63e);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5bd646:{NFSU2_TR(0x5bd646);
u8 U[8];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5bd64e:{NFSU2_TR(0x5bd64e);
u8 U[8];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5bd656:{NFSU2_TR(0x5bd656);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5bd65e:{NFSU2_TR(0x5bd65e);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5bd666:{NFSU2_TR(0x5bd666);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5bd66e:{NFSU2_TR(0x5bd66e);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5bd676:{NFSU2_TR(0x5bd676);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5bd67e:{NFSU2_TR(0x5bd67e);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5bd686:{NFSU2_TR(0x5bd686);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5bd68e:{NFSU2_TR(0x5bd68e);
u8 U[8];
w4(U+0,u32(u32(u32(0x64ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5bd696:{NFSU2_TR(0x5bd696);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5bd69e:{NFSU2_TR(0x5bd69e);
u8 U[8];
w4(U+0,u32(u32(u32(0x6cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5bd6a6:{NFSU2_TR(0x5bd6a6);
{goto L5bd6e8;}
}
B5bd6a8:L5bd6a8:{c.instructions+=8;NFSU2_TR(0x5bd6a8);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5bd6b0:{NFSU2_TR(0x5bd6b0);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5bd6b8:{NFSU2_TR(0x5bd6b8);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5bd6c0:{NFSU2_TR(0x5bd6c0);
u8 U[8];
w4(U+0,u32(u32(u32(0x3cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5bd6c8:{NFSU2_TR(0x5bd6c8);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5bd6d0:{NFSU2_TR(0x5bd6d0);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5bd6d8:{NFSU2_TR(0x5bd6d8);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5bd6e0:{NFSU2_TR(0x5bd6e0);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5bd6e8:L5bd6e8:{c.instructions+=4;NFSU2_TR(0x5bd6e8);
__builtin_memmove((R+4),gp(0x870910),4);
}
B5bd6ee:{NFSU2_TR(0x5bd6ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5bd6f1:{NFSU2_TR(0x5bd6f1);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5bd6f4:{NFSU2_TR(0x5bd6f4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5bd980;}}
}
B5bd6fa:L5bd6fa:{c.instructions+=3;NFSU2_TR(0x5bd6fa);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B5bd6fd:{NFSU2_TR(0x5bd6fd);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(r1(R+8))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B5bd6ff:{NFSU2_TR(0x5bd6ff);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5bd97b;}}
}
B5bd705:L5bd705:{c.instructions+=78;NFSU2_TR(0x5bd705);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bd709:{NFSU2_TR(0x5bd709);
u8 U[8];
w4(U+0,u32(u32(u32(0x74ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5bd711:{NFSU2_TR(0x5bd711);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5bd717:{NFSU2_TR(0x5bd717);
u8 U[8];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5bd71f:{NFSU2_TR(0x5bd71f);
u8 U[8];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5bd72a:{NFSU2_TR(0x5bd72a);
u8 U[8];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5bd732:{NFSU2_TR(0x5bd732);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5bd736:{NFSU2_TR(0x5bd736);
u8 U[8];
w4(U+0,u32(u32(u32(0x7cull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5bd73e:{NFSU2_TR(0x5bd73e);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bd742:{NFSU2_TR(0x5bd742);
u8 U[8];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5bd74d:{NFSU2_TR(0x5bd74d);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5bd753:{NFSU2_TR(0x5bd753);
u8 U[8];
w4(U+0,u32(u32(u32(0x84ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5bd75e:{NFSU2_TR(0x5bd75e);
u8 U[8];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5bd769:{NFSU2_TR(0x5bd769);
u8 U[8];
w4(U+0,u32(u32(u32(0xc4ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5bd774:{NFSU2_TR(0x5bd774);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5bd778:{NFSU2_TR(0x5bd778);
u8 U[8];
w4(U+0,u32(u32(u32(0xe4ull))+u32(r4(R+16))));
w4(U+4,u32(0x3f800000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5bd783:{NFSU2_TR(0x5bd783);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bd787:{NFSU2_TR(0x5bd787);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5bd78d:{NFSU2_TR(0x5bd78d);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5bd791:{NFSU2_TR(0x5bd791);
{u32 ea_=u32(r4(R+16)+u32(264u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5bd798:{NFSU2_TR(0x5bd798);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bd79c:{NFSU2_TR(0x5bd79c);
u8 U[8];
w4(U+0,u32(u32(u32(0x108ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5bd7a3:{NFSU2_TR(0x5bd7a3);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5bd7a9:{NFSU2_TR(0x5bd7a9);
u8 U[8];
w4(U+0,u32(u32(u32(0xc0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bd7b0:{NFSU2_TR(0x5bd7b0);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5bd7b4:{NFSU2_TR(0x5bd7b4);
{u32 ea_=u32(r4(R+16)+u32(144u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5bd7bb:{NFSU2_TR(0x5bd7bb);
u8 U[8];
w4(U+0,u32(u32(u32(0x90ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5bd7c2:{NFSU2_TR(0x5bd7c2);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bd7c6:{NFSU2_TR(0x5bd7c6);
u8 U[8];
w4(U+0,u32(u32(u32(0xd8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bd7cd:{NFSU2_TR(0x5bd7cd);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5bd7d3:{NFSU2_TR(0x5bd7d3);
u8 U[8];
w4(U+0,u32(u32(u32(0x70ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5bd7d7:{NFSU2_TR(0x5bd7d7);
u8 U[8];
w4(U+0,u32(u32(u32(0xc8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bd7de:{NFSU2_TR(0x5bd7de);
u8 U[8];
w4(U+0,u32(u32(u32(0x7cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5bd7e2:{NFSU2_TR(0x5bd7e2);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5bd7e6:{NFSU2_TR(0x5bd7e6);
u8 U[8];
w4(U+0,u32(u32(u32(0xd4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bd7ed:{NFSU2_TR(0x5bd7ed);
u8 U[8];
w4(U+0,u32(u32(u32(0x88ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5bd7f4:{NFSU2_TR(0x5bd7f4);
u8 U[8];
w4(U+0,u32(u32(u32(0xf0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bd7fb:{NFSU2_TR(0x5bd7fb);
{u32 ea_=u32(r4(R+16)+u32(148u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5bd802:{NFSU2_TR(0x5bd802);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bd806:{NFSU2_TR(0x5bd806);
u8 U[8];
w4(U+0,u32(u32(u32(0x94ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5bd80d:{NFSU2_TR(0x5bd80d);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5bd813:{NFSU2_TR(0x5bd813);
u8 U[8];
w4(U+0,u32(u32(u32(0xdcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bd81a:{NFSU2_TR(0x5bd81a);
u8 U[8];
w4(U+0,u32(u32(u32(0x74ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5bd81e:{NFSU2_TR(0x5bd81e);
u8 U[8];
w4(U+0,u32(u32(u32(0xccull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bd825:{NFSU2_TR(0x5bd825);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5bd829:{NFSU2_TR(0x5bd829);
u8 U[8];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5bd830:{NFSU2_TR(0x5bd830);
u8 U[8];
w4(U+0,u32(u32(u32(0xe8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bd837:{NFSU2_TR(0x5bd837);
u8 U[8];
w4(U+0,u32(u32(u32(0x8cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5bd83e:{NFSU2_TR(0x5bd83e);
{u32 ea_=u32(r4(R+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5bd845:{NFSU2_TR(0x5bd845);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bd849:{NFSU2_TR(0x5bd849);
u8 U[8];
w4(U+0,u32(u32(u32(0x98ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5bd850:{NFSU2_TR(0x5bd850);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5bd856:{NFSU2_TR(0x5bd856);
u8 U[8];
w4(U+0,u32(u32(u32(0xe0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bd85d:{NFSU2_TR(0x5bd85d);
u8 U[8];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5bd861:{NFSU2_TR(0x5bd861);
u8 U[8];
w4(U+0,u32(u32(u32(0xd0ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bd868:{NFSU2_TR(0x5bd868);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5bd86c:{NFSU2_TR(0x5bd86c);
u8 U[8];
w4(U+0,u32(u32(u32(0x84ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5bd873:{NFSU2_TR(0x5bd873);
u8 U[8];
w4(U+0,u32(u32(u32(0xecull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bd87a:{NFSU2_TR(0x5bd87a);
u8 U[8];
w4(U+0,u32(u32(u32(0xf4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bd881:{NFSU2_TR(0x5bd881);
{u32 ea_=u32(r4(R+16)+u32(160u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5bd888:{NFSU2_TR(0x5bd888);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bd88c:{NFSU2_TR(0x5bd88c);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5bd892:{NFSU2_TR(0x5bd892);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5bd896:{NFSU2_TR(0x5bd896);
{u32 ea_=u32(r4(R+16)+u32(164u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5bd89d:{NFSU2_TR(0x5bd89d);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bd8a1:{NFSU2_TR(0x5bd8a1);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5bd8a7:{NFSU2_TR(0x5bd8a7);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5bd8ab:{NFSU2_TR(0x5bd8ab);
{u32 ea_=u32(r4(R+16)+u32(168u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5bd8b2:{NFSU2_TR(0x5bd8b2);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B5bd8b4:{NFSU2_TR(0x5bd8b4);
{u32 ea_=u32(r4(R+16)+u32(184u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5bd8bb:{NFSU2_TR(0x5bd8bb);
{u32 ea_=u32(r4(R+16)+u32(188u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5bd8c2:{NFSU2_TR(0x5bd8c2);
{u32 ea_=u32(u32(8389916u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bd8c8:{NFSU2_TR(0x5bd8c8);
{u32 ea_=u32(r4(R+24)+u32(88u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5bd8cb:{NFSU2_TR(0x5bd8cb);
{u32 ea_=u32(r4(R+16)+u32(248u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B5bd8d2:{NFSU2_TR(0x5bd8d2);
{u32 ea_=u32(u32(7881560u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B5bd8d8:{NFSU2_TR(0x5bd8d8);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B5bd8da:{NFSU2_TR(0x5bd8da);
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
B5bd8dd:{NFSU2_TR(0x5bd8dd);
if(r1(R+514)){{goto L5bd8ea;}}
}
B5bd8df:L5bd8df:{c.instructions+=1;NFSU2_TR(0x5bd8df);
u8 U[8];
w4(U+0,u32(u32(u32(0xf8ull))+u32(r4(R+16))));
w4(U+4,u32(0x3dcccccdull));
s4(u32(r4(U+0)),r4(U+4));
}
B5bd8ea:L5bd8ea:{c.instructions+=6;NFSU2_TR(0x5bd8ea);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5bd8ef:{NFSU2_TR(0x5bd8ef);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5bd8f1:{NFSU2_TR(0x5bd8f1);
u8 U[4];
w4(U+0,u32(u32(u32(0xb8ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5bd8f8:{NFSU2_TR(0x5bd8f8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bd8f9:{NFSU2_TR(0x5bd8f9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bd8fa:{NFSU2_TR(0x5bd8fa);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bd900ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5bd900:L5bd900:{c.instructions+=8;NFSU2_TR(0x5bd900);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bd904:{NFSU2_TR(0x5bd904);
{u32 ea_=u32(u32(7882048u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5bd90a:{NFSU2_TR(0x5bd90a);
__builtin_memmove((R+24),gp(0x870974),4);
}
B5bd910:{NFSU2_TR(0x5bd910);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bd914:{NFSU2_TR(0x5bd914);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+28),(U+0),4);
}
B5bd916:{NFSU2_TR(0x5bd916);
{u32 ea_=u32(u32(7882052u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5bd91c:{NFSU2_TR(0x5bd91c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B5bd91e:{NFSU2_TR(0x5bd91e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bd923ull));
TAIL_STATIC(0x75bed4u,75b);
}
B5bd923:L5bd923:{c.instructions+=5;NFSU2_TR(0x5bd923);
{u32 ea_=u32(r4(R+16)+u32(168u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bd92a:{NFSU2_TR(0x5bd92a);
{u32 ea_=u32(u32(7882052u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5bd930:{NFSU2_TR(0x5bd930);
__builtin_memmove((R+12),(R+0),4);
}
B5bd932:{NFSU2_TR(0x5bd932);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+12,shl<u32>(r4(R+12),u64(r4(U+0))));
}
B5bd935:{NFSU2_TR(0x5bd935);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bd93aull));
TAIL_STATIC(0x75bed4u,75b);
}
B5bd93a:L5bd93a:{c.instructions+=5;NFSU2_TR(0x5bd93a);
{u32 ea_=u32(r4(R+16)+u32(164u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bd941:{NFSU2_TR(0x5bd941);
{u32 ea_=u32(u32(7882052u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5bd947:{NFSU2_TR(0x5bd947);
w4(R+12,u32(u32(r4(R+12))|u32(r4(R+0))));
}
B5bd949:{NFSU2_TR(0x5bd949);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+12,shl<u32>(r4(R+12),u64(r4(U+0))));
}
B5bd94c:{NFSU2_TR(0x5bd94c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bd951ull));
TAIL_STATIC(0x75bed4u,75b);
}
B5bd951:L5bd951:{c.instructions+=5;NFSU2_TR(0x5bd951);
{u32 ea_=u32(r4(R+16)+u32(160u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bd958:{NFSU2_TR(0x5bd958);
{u32 ea_=u32(u32(7882052u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5bd95e:{NFSU2_TR(0x5bd95e);
w4(R+12,u32(u32(r4(R+12))|u32(r4(R+0))));
}
B5bd960:{NFSU2_TR(0x5bd960);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+12,shl<u32>(r4(R+12),u64(r4(U+0))));
}
B5bd963:{NFSU2_TR(0x5bd963);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bd968ull));
TAIL_STATIC(0x75bed4u,75b);
}
B5bd968:L5bd968:{c.instructions+=5;NFSU2_TR(0x5bd968);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+12,u32(u32(r4(R+12))|u32(r4(R+0))));
w1(R+519,u8(s32(r4(R+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+12))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5bd96a:{NFSU2_TR(0x5bd96a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bd96b:{NFSU2_TR(0x5bd96b);
u8 U[4];
w4(U+0,u32(0x3cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bd96d:{NFSU2_TR(0x5bd96d);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bd96e:{NFSU2_TR(0x5bd96e);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bd974ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5bd974:L5bd974:{c.instructions+=6;NFSU2_TR(0x5bd974);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5bd975:{NFSU2_TR(0x5bd975);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5bd976:{NFSU2_TR(0x5bd976);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5bd977:{NFSU2_TR(0x5bd977);
__builtin_memmove((R+16),(R+20),4);
}
B5bd979:{NFSU2_TR(0x5bd979);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5bd97a:{NFSU2_TR(0x5bd97a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5bd97b:L5bd97b:{c.instructions+=2;NFSU2_TR(0x5bd97b);
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
B5bd97e:{NFSU2_TR(0x5bd97e);
if(r1(R+518)){{goto L5bd989;}}
}
B5bd980:L5bd980:{c.instructions+=2;NFSU2_TR(0x5bd980);
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
B5bd983:{NFSU2_TR(0x5bd983);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5bda99;}}
}
B5bd989:L5bd989:{c.instructions+=9;NFSU2_TR(0x5bd989);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5bd98c:{NFSU2_TR(0x5bd98c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5bd98f:{NFSU2_TR(0x5bd98f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x164ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5bd995:{NFSU2_TR(0x5bd995);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5bd997:{NFSU2_TR(0x5bd997);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B5bd99b:{NFSU2_TR(0x5bd99b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bd99c:{NFSU2_TR(0x5bd99c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bd99d:{NFSU2_TR(0x5bd99d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bd99e:{NFSU2_TR(0x5bd99e);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bd9a4ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5bd9a4:L5bd9a4:{c.instructions+=10;NFSU2_TR(0x5bd9a4);
__builtin_memmove((R+4),gp(0x870910),4);
}
B5bd9aa:{NFSU2_TR(0x5bd9aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5bd9ad:{NFSU2_TR(0x5bd9ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5bd9b0:{NFSU2_TR(0x5bd9b0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5bd9b6:{NFSU2_TR(0x5bd9b6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5bd9b8:{NFSU2_TR(0x5bd9b8);
u8 U[4];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B5bd9bc:{NFSU2_TR(0x5bd9bc);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bd9bd:{NFSU2_TR(0x5bd9bd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bd9be:{NFSU2_TR(0x5bd9be);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bd9bf:{NFSU2_TR(0x5bd9bf);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bd9c5ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5bd9c5:L5bd9c5:{c.instructions+=3;NFSU2_TR(0x5bd9c5);
__builtin_memmove((R+4),gp(0x870910),4);
}
B5bd9cb:{NFSU2_TR(0x5bd9cb);
u8 U[22];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x5ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x5ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x5ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B5bd9cf:{NFSU2_TR(0x5bd9cf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5bda99;}}
}
B5bd9d5:L5bd9d5:{c.instructions+=9;NFSU2_TR(0x5bd9d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5bd9d8:{NFSU2_TR(0x5bd9d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5bd9db:{NFSU2_TR(0x5bd9db);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x7ccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5bd9e1:{NFSU2_TR(0x5bd9e1);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5bd9e3:{NFSU2_TR(0x5bd9e3);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B5bd9e7:{NFSU2_TR(0x5bd9e7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bd9e8:{NFSU2_TR(0x5bd9e8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bd9e9:{NFSU2_TR(0x5bd9e9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bd9ea:{NFSU2_TR(0x5bd9ea);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bd9f0ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5bd9f0:L5bd9f0:{c.instructions+=10;NFSU2_TR(0x5bd9f0);
__builtin_memmove((R+4),gp(0x870910),4);
}
B5bd9f6:{NFSU2_TR(0x5bd9f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5bd9f9:{NFSU2_TR(0x5bd9f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5bd9fc:{NFSU2_TR(0x5bd9fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x81cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5bda02:{NFSU2_TR(0x5bda02);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5bda04:{NFSU2_TR(0x5bda04);
u8 U[4];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B5bda08:{NFSU2_TR(0x5bda08);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bda09:{NFSU2_TR(0x5bda09);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bda0a:{NFSU2_TR(0x5bda0a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bda0b:{NFSU2_TR(0x5bda0b);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bda11ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5bda11:L5bda11:{c.instructions+=10;NFSU2_TR(0x5bda11);
__builtin_memmove((R+4),gp(0x870910),4);
}
B5bda17:{NFSU2_TR(0x5bda17);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5bda1a:{NFSU2_TR(0x5bda1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5bda1d:{NFSU2_TR(0x5bda1d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2a4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5bda23:{NFSU2_TR(0x5bda23);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5bda25:{NFSU2_TR(0x5bda25);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B5bda29:{NFSU2_TR(0x5bda29);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bda2a:{NFSU2_TR(0x5bda2a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bda2b:{NFSU2_TR(0x5bda2b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bda2c:{NFSU2_TR(0x5bda2c);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bda32ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5bda32:L5bda32:{c.instructions+=10;NFSU2_TR(0x5bda32);
__builtin_memmove((R+4),gp(0x870910),4);
}
B5bda38:{NFSU2_TR(0x5bda38);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5bda3b:{NFSU2_TR(0x5bda3b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5bda3e:{NFSU2_TR(0x5bda3e);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x27cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5bda44:{NFSU2_TR(0x5bda44);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5bda46:{NFSU2_TR(0x5bda46);
u8 U[4];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((R+28),(U+0),4);
}
B5bda4a:{NFSU2_TR(0x5bda4a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bda4b:{NFSU2_TR(0x5bda4b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bda4c:{NFSU2_TR(0x5bda4c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bda4d:{NFSU2_TR(0x5bda4d);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bda53ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5bda53:L5bda53:{c.instructions+=12;NFSU2_TR(0x5bda53);
{u32 ea_=u32(u32(8391572u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bda59:{NFSU2_TR(0x5bda59);
__builtin_memmove((R+4),gp(0x870910),4);
}
B5bda5f:{NFSU2_TR(0x5bda5f);
{u32 ea_=u32(r4(R+24)+u32(88u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5bda62:{NFSU2_TR(0x5bda62);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5bda65:{NFSU2_TR(0x5bda65);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5bda67:{NFSU2_TR(0x5bda67);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bda68:{NFSU2_TR(0x5bda68);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5bda6b:{NFSU2_TR(0x5bda6b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x7f4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5bda71:{NFSU2_TR(0x5bda71);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5bda74:{NFSU2_TR(0x5bda74);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bda75:{NFSU2_TR(0x5bda75);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bda76:{NFSU2_TR(0x5bda76);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bda79ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5bda79:L5bda79:{c.instructions+=11;NFSU2_TR(0x5bda79);
{u32 ea_=u32(r4(R+24)+u32(124u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bda7c:{NFSU2_TR(0x5bda7c);
__builtin_memmove((R+4),gp(0x870910),4);
}
B5bda82:{NFSU2_TR(0x5bda82);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5bda85:{NFSU2_TR(0x5bda85);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5bda87:{NFSU2_TR(0x5bda87);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bda88:{NFSU2_TR(0x5bda88);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5bda8b:{NFSU2_TR(0x5bda8b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x2ccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5bda91:{NFSU2_TR(0x5bda91);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5bda94:{NFSU2_TR(0x5bda94);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bda95:{NFSU2_TR(0x5bda95);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bda96:{NFSU2_TR(0x5bda96);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x78ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bda99ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5bda99:L5bda99:{c.instructions+=6;NFSU2_TR(0x5bda99);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5bda9a:{NFSU2_TR(0x5bda9a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5bda9b:{NFSU2_TR(0x5bda9b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5bda9c:{NFSU2_TR(0x5bda9c);
__builtin_memmove((R+16),(R+20),4);
}
B5bda9e:{NFSU2_TR(0x5bda9e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5bda9f:{NFSU2_TR(0x5bda9f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5bdaa0:L5bdaa0:{c.instructions+=11;NFSU2_TR(0x5bdaa0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bdaa1:{NFSU2_TR(0x5bdaa1);
__builtin_memmove((R+20),(R+16),4);
}
B5bdaa3:{NFSU2_TR(0x5bdaa3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B5bdaa6:{NFSU2_TR(0x5bdaa6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x11cull))));
}
B5bdaac:{NFSU2_TR(0x5bdaac);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5bdaaf:{NFSU2_TR(0x5bdaaf);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bdab0:{NFSU2_TR(0x5bdab0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+24),(U+0),4);
}
B5bdab2:{NFSU2_TR(0x5bdab2);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5bdab6:{NFSU2_TR(0x5bdab6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bdab7:{NFSU2_TR(0x5bdab7);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x80ull))));
}
B5bdabd:{NFSU2_TR(0x5bdabd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bdac2ull));
TAIL_STATIC(0x43c780u,43c);
}
B5bdac2:L5bdac2:{c.instructions+=11;NFSU2_TR(0x5bdac2);
__builtin_memmove((R+8),gp(0x80052c),4);
}
B5bdac8:{NFSU2_TR(0x5bdac8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5bdacb:{NFSU2_TR(0x5bdacb);
__builtin_memmove((R+0),gp(0x800530),4);
}
B5bdad0:{NFSU2_TR(0x5bdad0);
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
B5bdad3:{NFSU2_TR(0x5bdad3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bdad4:{NFSU2_TR(0x5bdad4);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bdad8:{NFSU2_TR(0x5bdad8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bdad9:{NFSU2_TR(0x5bdad9);
u8 U[4];
w4(U+0,u32(u32(u32(0xa8ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5bdae0:{NFSU2_TR(0x5bdae0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bdae1:{NFSU2_TR(0x5bdae1);
u8 U[8];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bdae5:{NFSU2_TR(0x5bdae5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bdaeaull));
TAIL_STATIC(0x63cedbu,63c);
}
B5bdaea:L5bdaea:{c.instructions+=7;NFSU2_TR(0x5bdaea);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5bdaee:{NFSU2_TR(0x5bdaee);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bdaef:{NFSU2_TR(0x5bdaef);
u8 U[4];
w4(U+0,u32(u32(u32(0xa4ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5bdaf6:{NFSU2_TR(0x5bdaf6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bdaf7:{NFSU2_TR(0x5bdaf7);
u8 U[4];
w4(U+0,u32(u32(u32(0xa8ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5bdafe:{NFSU2_TR(0x5bdafe);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bdaff:{NFSU2_TR(0x5bdaff);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bdb04ull));
TAIL_STATIC(0x63cedbu,63c);
}
B5bdb04:L5bdb04:{c.instructions+=4;NFSU2_TR(0x5bdb04);
__builtin_memmove((R+0),gp(0x870910),4);
}
B5bdb09:{NFSU2_TR(0x5bdb09);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B5bdb0c:{NFSU2_TR(0x5bdb0c);
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
B5bdb0e:{NFSU2_TR(0x5bdb0e);
if(r1(R+518)){{goto L5bdb2d;}}
}
B5bdb10:L5bdb10:{c.instructions+=9;NFSU2_TR(0x5bdb10);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5bdb13:{NFSU2_TR(0x5bdb13);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5bdb16:{NFSU2_TR(0x5bdb16);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5c4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5bdb1c:{NFSU2_TR(0x5bdb1c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5bdb1e:{NFSU2_TR(0x5bdb1e);
u8 U[4];
w4(U+0,u32(u32(u32(0xa0ull))+u32(r4(R+16))));
__builtin_memmove((R+24),(U+0),4);
}
B5bdb25:{NFSU2_TR(0x5bdb25);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bdb26:{NFSU2_TR(0x5bdb26);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bdb27:{NFSU2_TR(0x5bdb27);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bdb28:{NFSU2_TR(0x5bdb28);
{goto L5bdc06;}
}
B5bdb2d:L5bdb2d:{c.instructions+=4;NFSU2_TR(0x5bdb2d);
__builtin_memmove((R+4),gp(0x870848),4);
}
B5bdb33:{NFSU2_TR(0x5bdb33);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5bdb36:{NFSU2_TR(0x5bdb36);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bdb37:{NFSU2_TR(0x5bdb37);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bdb3cull));
TAIL_STATIC(0x48b1e0u,48b);
}
B5bdb3c:L5bdb3c:{c.instructions+=5;NFSU2_TR(0x5bdb3c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B5bdb3e:{NFSU2_TR(0x5bdb3e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bdb3f:{NFSU2_TR(0x5bdb3f);
u8 U[4];
w4(U+0,u32(u32(u32(0xe8ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5bdb46:{NFSU2_TR(0x5bdb46);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bdb47:{NFSU2_TR(0x5bdb47);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bdb4cull));
TAIL_STATIC(0x5baf90u,5ba);
}
B5bdb4c:L5bdb4c:{c.instructions+=7;NFSU2_TR(0x5bdb4c);
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
B5bdb4f:{NFSU2_TR(0x5bdb4f);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5bdb53:{NFSU2_TR(0x5bdb53);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bdb54:{NFSU2_TR(0x5bdb54);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bdb55:{NFSU2_TR(0x5bdb55);
u8 U[4];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5bdb59:{NFSU2_TR(0x5bdb59);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bdb5a:{NFSU2_TR(0x5bdb5a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bdb5full));
TAIL_STATIC(0x63cedbu,63c);
}
B5bdb5f:L5bdb5f:{c.instructions+=7;NFSU2_TR(0x5bdb5f);
u8 U[4];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5bdb63:{NFSU2_TR(0x5bdb63);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bdb64:{NFSU2_TR(0x5bdb64);
u8 U[4];
w4(U+0,u32(u32(u32(0xe4ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5bdb6b:{NFSU2_TR(0x5bdb6b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bdb6c:{NFSU2_TR(0x5bdb6c);
u8 U[4];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5bdb70:{NFSU2_TR(0x5bdb70);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bdb71:{NFSU2_TR(0x5bdb71);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bdb76ull));
TAIL_STATIC(0x63cedbu,63c);
}
B5bdb76:L5bdb76:{c.instructions+=10;NFSU2_TR(0x5bdb76);
__builtin_memmove((R+4),gp(0x870910),4);
}
B5bdb7c:{NFSU2_TR(0x5bdb7c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5bdb7f:{NFSU2_TR(0x5bdb7f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5bdb82:{NFSU2_TR(0x5bdb82);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5c4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5bdb88:{NFSU2_TR(0x5bdb88);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5bdb8a:{NFSU2_TR(0x5bdb8a);
u8 U[4];
w4(U+0,u32(u32(u32(0x60ull))+u32(r4(R+16))));
__builtin_memmove((R+24),(U+0),4);
}
B5bdb8e:{NFSU2_TR(0x5bdb8e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bdb8f:{NFSU2_TR(0x5bdb8f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bdb90:{NFSU2_TR(0x5bdb90);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bdb91:{NFSU2_TR(0x5bdb91);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bdb97ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5bdb97:L5bdb97:{c.instructions+=3;NFSU2_TR(0x5bdb97);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5bdb9b:{NFSU2_TR(0x5bdb9b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bdb9c:{NFSU2_TR(0x5bdb9c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bdba1ull));
TAIL_STATIC(0x43c780u,43c);
}
B5bdba1:L5bdba1:{c.instructions+=23;NFSU2_TR(0x5bdba1);
{u32 ea_=u32(r4(R+16)+u32(112u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bdba5:{NFSU2_TR(0x5bdba5);
{u32 ea_=u32(u32(7978944u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5bdbab:{NFSU2_TR(0x5bdbab);
__builtin_memmove((R+4),gp(0x870910),4);
}
B5bdbb1:{NFSU2_TR(0x5bdbb1);
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
B5bdbb4:{NFSU2_TR(0x5bdbb4);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+24),(U+0),4);
}
B5bdbb8:{NFSU2_TR(0x5bdbb8);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5bdbbc:{NFSU2_TR(0x5bdbbc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bdbbd:{NFSU2_TR(0x5bdbbd);
{u32 ea_=u32(r4(R+16)+u32(128u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bdbc4:{NFSU2_TR(0x5bdbc4);
{u32 ea_=u32(u32(7978944u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5bdbca:{NFSU2_TR(0x5bdbca);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5bdbce:{NFSU2_TR(0x5bdbce);
{u32 ea_=u32(r4(R+16)+u32(144u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bdbd5:{NFSU2_TR(0x5bdbd5);
{u32 ea_=u32(u32(7978944u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5bdbdb:{NFSU2_TR(0x5bdbdb);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5bdbdf:{NFSU2_TR(0x5bdbdf);
{u32 ea_=u32(r4(R+16)+u32(160u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B5bdbe6:{NFSU2_TR(0x5bdbe6);
{u32 ea_=u32(u32(7978944u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5bdbec:{NFSU2_TR(0x5bdbec);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5bdbf2:{NFSU2_TR(0x5bdbf2);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5bdbf6:{NFSU2_TR(0x5bdbf6);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5bdbf9:{NFSU2_TR(0x5bdbf9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5bdbfc:{NFSU2_TR(0x5bdbfc);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x524ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5bdc02:{NFSU2_TR(0x5bdc02);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5bdc04:{NFSU2_TR(0x5bdc04);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bdc05:{NFSU2_TR(0x5bdc05);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bdc06:L5bdc06:{c.instructions+=1;NFSU2_TR(0x5bdc06);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bdc0cull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5bdc0c:L5bdc0c:{c.instructions+=4;NFSU2_TR(0x5bdc0c);
__builtin_memmove((R+4),gp(0x8900b4),4);
}
B5bdc12:{NFSU2_TR(0x5bdc12);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5bdc14:{NFSU2_TR(0x5bdc14);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5bdc16:{NFSU2_TR(0x5bdc16);
if(r1(R+518)){{goto L5bdc28;}}
}
B5bdc18:L5bdc18:{c.instructions+=3;NFSU2_TR(0x5bdc18);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5bdc1b:{NFSU2_TR(0x5bdc1b);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5bdc1d:{NFSU2_TR(0x5bdc1d);
if(r1(R+518)){{goto L5bdc28;}}
}
B5bdc1f:L5bdc1f:{c.instructions+=2;NFSU2_TR(0x5bdc1f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bdc20:{NFSU2_TR(0x5bdc20);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bdc25ull));
TAIL_STATIC(0x60f510u,60f);
}
B5bdc25:L5bdc25:{c.instructions+=1;NFSU2_TR(0x5bdc25);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5bdc28:L5bdc28:{c.instructions+=6;NFSU2_TR(0x5bdc28);
__builtin_memmove((R+8),(R+0),4);
}
B5bdc2a:{NFSU2_TR(0x5bdc2a);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xffull))));
}
B5bdc30:{NFSU2_TR(0x5bdc30);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5bdc32:{NFSU2_TR(0x5bdc32);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bdc36:{NFSU2_TR(0x5bdc36);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5bdc3a:{NFSU2_TR(0x5bdc3a);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5bdc42;}}
}
B5bdc3c:L5bdc3c:{c.instructions+=1;NFSU2_TR(0x5bdc3c);
{u32 ea_=u32(u32(7882060u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5bdc42:L5bdc42:{c.instructions+=9;NFSU2_TR(0x5bdc42);
{u32 ea_=u32(u32(7895792u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5bdc48:{NFSU2_TR(0x5bdc48);
__builtin_memmove((R+4),(R+0),4);
}
B5bdc4a:{NFSU2_TR(0x5bdc4a);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B5bdc4d:{NFSU2_TR(0x5bdc4d);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xffull))));
}
B5bdc53:{NFSU2_TR(0x5bdc53);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B5bdc55:{NFSU2_TR(0x5bdc55);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5bdc59:{NFSU2_TR(0x5bdc59);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bdc5d:{NFSU2_TR(0x5bdc5d);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5bdc61:{NFSU2_TR(0x5bdc61);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5bdc69;}}
}
B5bdc63:L5bdc63:{c.instructions+=1;NFSU2_TR(0x5bdc63);
{u32 ea_=u32(u32(7882060u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5bdc69:L5bdc69:{c.instructions+=8;NFSU2_TR(0x5bdc69);
{u32 ea_=u32(u32(7895792u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5bdc6f:{NFSU2_TR(0x5bdc6f);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))&u32(u32(0x1full))));
w4(R+0,shr<u32>(r4(R+0),u64(r4(U+0))));
}
B5bdc72:{NFSU2_TR(0x5bdc72);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
}
B5bdc77:{NFSU2_TR(0x5bdc77);
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
B5bdc79:{NFSU2_TR(0x5bdc79);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bdc7d:{NFSU2_TR(0x5bdc7d);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5bdc81:{NFSU2_TR(0x5bdc81);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B5bdc85:{NFSU2_TR(0x5bdc85);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L5bdc8d;}}
}
B5bdc87:L5bdc87:{c.instructions+=1;NFSU2_TR(0x5bdc87);
{u32 ea_=u32(u32(7882060u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B5bdc8d:L5bdc8d:{c.instructions+=13;NFSU2_TR(0x5bdc8d);
{u32 ea_=u32(u32(7895792u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B5bdc93:{NFSU2_TR(0x5bdc93);
__builtin_memmove((R+4),gp(0x870910),4);
}
B5bdc99:{NFSU2_TR(0x5bdc99);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5bdca1:{NFSU2_TR(0x5bdca1);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+24),(U+0),4);
}
B5bdca5:{NFSU2_TR(0x5bdca5);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B5bdca9:{NFSU2_TR(0x5bdca9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5bdcac:{NFSU2_TR(0x5bdcac);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5bdcaf:{NFSU2_TR(0x5bdcaf);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x574ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5bdcb5:{NFSU2_TR(0x5bdcb5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5bdcb7:{NFSU2_TR(0x5bdcb7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bdcb8:{NFSU2_TR(0x5bdcb8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bdcb9:{NFSU2_TR(0x5bdcb9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bdcba:{NFSU2_TR(0x5bdcba);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bdcc0ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5bdcc0:L5bdcc0:{c.instructions+=4;NFSU2_TR(0x5bdcc0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5bdcc1:{NFSU2_TR(0x5bdcc1);
__builtin_memmove((R+16),(R+20),4);
}
B5bdcc3:{NFSU2_TR(0x5bdcc3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5bdcc4:{NFSU2_TR(0x5bdcc4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5bdcd0:L5bdcd0:{c.instructions+=12;NFSU2_TR(0x5bdcd0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bdcd1:{NFSU2_TR(0x5bdcd1);
__builtin_memmove((R+20),(R+16),4);
}
B5bdcd3:{NFSU2_TR(0x5bdcd3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B5bdcd6:{NFSU2_TR(0x5bdcd6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x404ull))));
}
B5bdcdc:{NFSU2_TR(0x5bdcdc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5bdcdf:{NFSU2_TR(0x5bdcdf);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bdce0:{NFSU2_TR(0x5bdce0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5bdce3:{NFSU2_TR(0x5bdce3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bdce4:{NFSU2_TR(0x5bdce4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bdce5:{NFSU2_TR(0x5bdce5);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x22ull))));
}
B5bdce8:{NFSU2_TR(0x5bdce8);
u8 U[4];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B5bdcec:{NFSU2_TR(0x5bdcec);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B5bdcf4:L5bdcf4:{c.instructions+=5;NFSU2_TR(0x5bdcf4);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xffffffffull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+24,u32(r1(U+4)));
}
B5bdcf8:{NFSU2_TR(0x5bdcf8);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B5bdcfb:{NFSU2_TR(0x5bdcfb);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+12))));
}
B5bdcfd:{NFSU2_TR(0x5bdcfd);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xffffffc0ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5bdd00:{NFSU2_TR(0x5bdd00);
w4(R+4,u32(0x10ull));
}
B5bdd05:L5bdd05:{c.instructions+=1;NFSU2_TR(0x5bdd05);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L5bdd07;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5bdd05u);}goto L5bdd05;}
}
B5bdd07:L5bdd07:{c.instructions+=5;NFSU2_TR(0x5bdd07);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w4(R+24,u32(r1(U+0)));
}
B5bdd0a:{NFSU2_TR(0x5bdd0a);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B5bdd0d:{NFSU2_TR(0x5bdd0d);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+12))));
}
B5bdd0f:{NFSU2_TR(0x5bdd0f);
__builtin_memmove((R+28),(R+8),4);
}
B5bdd11:{NFSU2_TR(0x5bdd11);
w4(R+4,u32(0x10ull));
}
B5bdd16:L5bdd16:{c.instructions+=1;NFSU2_TR(0x5bdd16);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L5bdd18;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5bdd16u);}goto L5bdd16;}
}
B5bdd18:L5bdd18:{c.instructions+=5;NFSU2_TR(0x5bdd18);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+24,u32(r1(U+4)));
}
B5bdd1c:{NFSU2_TR(0x5bdd1c);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B5bdd1f:{NFSU2_TR(0x5bdd1f);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+12))));
}
B5bdd21:{NFSU2_TR(0x5bdd21);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x40ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5bdd24:{NFSU2_TR(0x5bdd24);
w4(R+4,u32(0x10ull));
}
B5bdd29:L5bdd29:{c.instructions+=1;NFSU2_TR(0x5bdd29);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L5bdd2b;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5bdd29u);}goto L5bdd29;}
}
B5bdd2b:L5bdd2b:{c.instructions+=5;NFSU2_TR(0x5bdd2b);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x2ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+24,u32(r1(U+4)));
}
B5bdd2f:{NFSU2_TR(0x5bdd2f);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B5bdd32:{NFSU2_TR(0x5bdd32);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+12))));
}
B5bdd34:{NFSU2_TR(0x5bdd34);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x80ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5bdd3a:{NFSU2_TR(0x5bdd3a);
w4(R+4,u32(0x10ull));
}
B5bdd3f:L5bdd3f:{c.instructions+=1;NFSU2_TR(0x5bdd3f);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L5bdd41;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5bdd3fu);}goto L5bdd3f;}
}
B5bdd41:L5bdd41:{c.instructions+=5;NFSU2_TR(0x5bdd41);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+24,u32(r1(U+4)));
}
B5bdd45:{NFSU2_TR(0x5bdd45);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B5bdd48:{NFSU2_TR(0x5bdd48);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+12))));
}
B5bdd4a:{NFSU2_TR(0x5bdd4a);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xc0ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5bdd50:{NFSU2_TR(0x5bdd50);
w4(R+4,u32(0x10ull));
}
B5bdd55:L5bdd55:{c.instructions+=1;NFSU2_TR(0x5bdd55);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L5bdd57;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5bdd55u);}goto L5bdd55;}
}
B5bdd57:L5bdd57:{c.instructions+=5;NFSU2_TR(0x5bdd57);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+24,u32(r1(U+4)));
}
B5bdd5b:{NFSU2_TR(0x5bdd5b);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B5bdd5e:{NFSU2_TR(0x5bdd5e);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+12))));
}
B5bdd60:{NFSU2_TR(0x5bdd60);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x100ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5bdd66:{NFSU2_TR(0x5bdd66);
w4(R+4,u32(0x10ull));
}
B5bdd6b:L5bdd6b:{c.instructions+=1;NFSU2_TR(0x5bdd6b);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L5bdd6d;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5bdd6bu);}goto L5bdd6b;}
}
B5bdd6d:L5bdd6d:{c.instructions+=5;NFSU2_TR(0x5bdd6d);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+24,u32(r1(U+4)));
}
B5bdd71:{NFSU2_TR(0x5bdd71);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B5bdd74:{NFSU2_TR(0x5bdd74);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+12))));
}
B5bdd76:{NFSU2_TR(0x5bdd76);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x140ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5bdd7c:{NFSU2_TR(0x5bdd7c);
w4(R+4,u32(0x10ull));
}
B5bdd81:L5bdd81:{c.instructions+=1;NFSU2_TR(0x5bdd81);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L5bdd83;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5bdd81u);}goto L5bdd81;}
}
B5bdd83:L5bdd83:{c.instructions+=5;NFSU2_TR(0x5bdd83);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+24,u32(r1(U+4)));
}
B5bdd87:{NFSU2_TR(0x5bdd87);
u8 U[4];
w4(U+0,u32(u32(u32(0x6ull))&u32(u32(0x1full))));
w4(R+24,shl<u32>(r4(R+24),u64(r4(U+0))));
}
B5bdd8a:{NFSU2_TR(0x5bdd8a);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+12))));
}
B5bdd8c:{NFSU2_TR(0x5bdd8c);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x180ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5bdd92:{NFSU2_TR(0x5bdd92);
w4(R+4,u32(0x10ull));
}
B5bdd97:L5bdd97:{c.instructions+=1;NFSU2_TR(0x5bdd97);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L5bdd99;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5bdd97u);}goto L5bdd97;}
}
B5bdd99:L5bdd99:{c.instructions+=6;NFSU2_TR(0x5bdd99);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5bdd9d:{NFSU2_TR(0x5bdd9d);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
}
B5bdda0:{NFSU2_TR(0x5bdda0);
w1(R+512,carry<u32>(r4(R+8),u32(0x200ull)));
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x200ull))));
}
B5bdda6:{NFSU2_TR(0x5bdda6);
u8 U[6];
w1(R+523,sborrow<u32>(r4(R+4),u32(0x1ull)));
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5bdda7:{NFSU2_TR(0x5bdda7);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bddab:{NFSU2_TR(0x5bddab);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x5bdcf4u);}goto L5bdcf4;}}
}
B5bddb1:L5bddb1:{c.instructions+=11;NFSU2_TR(0x5bddb1);
__builtin_memmove((R+4),gp(0x870910),4);
}
B5bddb7:{NFSU2_TR(0x5bddb7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5bddba:{NFSU2_TR(0x5bddba);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5bddbd:{NFSU2_TR(0x5bddbd);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x114ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5bddc3:{NFSU2_TR(0x5bddc3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5bddc5:{NFSU2_TR(0x5bddc5);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bddc7:{NFSU2_TR(0x5bddc7);
u8 U[4];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((R+24),(U+0),4);
}
B5bddcb:{NFSU2_TR(0x5bddcb);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bddcc:{NFSU2_TR(0x5bddcc);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bddcd:{NFSU2_TR(0x5bddcd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bddce:{NFSU2_TR(0x5bddce);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xa0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bddd4ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5bddd4:L5bddd4:{c.instructions+=6;NFSU2_TR(0x5bddd4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5bddd5:{NFSU2_TR(0x5bddd5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5bddd6:{NFSU2_TR(0x5bddd6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5bddd7:{NFSU2_TR(0x5bddd7);
__builtin_memmove((R+16),(R+20),4);
}
B5bddd9:{NFSU2_TR(0x5bddd9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5bddda:{NFSU2_TR(0x5bddda);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5bdde0:L5bdde0:{c.instructions+=13;NFSU2_TR(0x5bdde0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bdde1:{NFSU2_TR(0x5bdde1);
__builtin_memmove((R+20),(R+16),4);
}
B5bdde3:{NFSU2_TR(0x5bdde3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B5bdde6:{NFSU2_TR(0x5bdde6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x84ull))));
}
B5bddec:{NFSU2_TR(0x5bddec);
__builtin_memmove((R+8),gp(0x872ef4),4);
}
B5bddf2:{NFSU2_TR(0x5bddf2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5bddf5:{NFSU2_TR(0x5bddf5);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bddf6:{NFSU2_TR(0x5bddf6);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B5bddf7:{NFSU2_TR(0x5bddf7);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x872e90ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B5bddfc:{NFSU2_TR(0x5bddfc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bddfd:{NFSU2_TR(0x5bddfd);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bddfe:{NFSU2_TR(0x5bddfe);
__builtin_memmove(gp(0x872ef4),(R+8),4);
}
B5bde04:{NFSU2_TR(0x5bde04);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5bde0c;}}
}
B5bde06:L5bde06:{c.instructions+=1;NFSU2_TR(0x5bde06);
s4(0x872f00,u32(u32(m4(0x872f00))+u32(u32(0x1ull))));
}
B5bde0c:L5bde0c:{c.instructions+=3;NFSU2_TR(0x5bde0c);
u8 U[8];
__builtin_memmove((U+0),gp(0x876850),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5bde12:{NFSU2_TR(0x5bde12);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B5bde15:{NFSU2_TR(0x5bde15);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5bde30;}}
}
B5bde17:L5bde17:{c.instructions+=3;NFSU2_TR(0x5bde17);
__builtin_memmove((R+0),gp(0x870910),4);
}
B5bde1c:{NFSU2_TR(0x5bde1c);
u8 U[8];
__builtin_memmove((U+0),gp(0x87684c),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5bde22:{NFSU2_TR(0x5bde22);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5bde30;}}
}
B5bde24:L5bde24:{c.instructions+=2;NFSU2_TR(0x5bde24);
u8 U[14];
__builtin_memmove((U+6),gp(0x800534),4);
w1(R+512,u8((r4(U+6))<(r4(R+12))));
w1(R+523,sborrow<u32>(r4(U+6),r4(R+12)));
w4(U+10,u32(u32(r4(U+6))-u32(r4(R+12))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B5bde2a:{NFSU2_TR(0x5bde2a);
if(r1(R+518)){{goto L5bdf81;}}
}
B5bde30:L5bde30:{c.instructions+=2;NFSU2_TR(0x5bde30);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bde31:{NFSU2_TR(0x5bde31);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bde36ull));
TAIL_STATIC(0x48b1e0u,48b);
}
B5bde36:L5bde36:{c.instructions+=9;NFSU2_TR(0x5bde36);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+24),(U+0),4);
}
B5bde38:{NFSU2_TR(0x5bde38);
__builtin_memmove((R+0),gp(0x800534),4);
}
B5bde3d:{NFSU2_TR(0x5bde3d);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B5bde40:{NFSU2_TR(0x5bde40);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((R+4),(U+0),4);
}
B5bde46:{NFSU2_TR(0x5bde46);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+12))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5bde48:{NFSU2_TR(0x5bde48);
__builtin_memmove((R+0),gp(0x870910),4);
}
B5bde4d:{NFSU2_TR(0x5bde4d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x40ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5bde50:{NFSU2_TR(0x5bde50);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bde54:{NFSU2_TR(0x5bde54);
if(r1(R+518)){{goto L5bde99;}}
}
B5bde56:L5bde56:{c.instructions+=3;NFSU2_TR(0x5bde56);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B5bde59:{NFSU2_TR(0x5bde59);
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
B5bde5b:{NFSU2_TR(0x5bde5b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5bde84;}}
}
B5bde5d:L5bde5d:{c.instructions+=6;NFSU2_TR(0x5bde5d);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5bde62:{NFSU2_TR(0x5bde62);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5bde64:{NFSU2_TR(0x5bde64);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bde65:{NFSU2_TR(0x5bde65);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bde67:{NFSU2_TR(0x5bde67);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bde68:{NFSU2_TR(0x5bde68);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bde6eull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5bde6e:L5bde6e:{c.instructions+=6;NFSU2_TR(0x5bde6e);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5bde73:{NFSU2_TR(0x5bde73);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5bde75:{NFSU2_TR(0x5bde75);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bde76:{NFSU2_TR(0x5bde76);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bde78:{NFSU2_TR(0x5bde78);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bde79:{NFSU2_TR(0x5bde79);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bde7full));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5bde7f:L5bde7f:{c.instructions+=1;NFSU2_TR(0x5bde7f);
__builtin_memmove((R+0),gp(0x870910),4);
}
B5bde84:L5bde84:{c.instructions+=5;NFSU2_TR(0x5bde84);
__builtin_memmove((R+4),gp(0x872efc),4);
}
B5bde8a:{NFSU2_TR(0x5bde8a);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B5bde8b:{NFSU2_TR(0x5bde8b);
__builtin_memmove(gp(0x800534),(R+12),4);
}
B5bde91:{NFSU2_TR(0x5bde91);
__builtin_memmove(gp(0x872efc),(R+4),4);
}
B5bde97:{NFSU2_TR(0x5bde97);
{goto L5bdecf;}
}
B5bde99:L5bde99:{c.instructions+=2;NFSU2_TR(0x5bde99);
u8 U[8];
__builtin_memmove((U+0),gp(0x87684c),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B5bde9f:{NFSU2_TR(0x5bde9f);
if(r1(R+518)){{goto L5bdecf;}}
}
B5bdea1:L5bdea1:{c.instructions+=3;NFSU2_TR(0x5bdea1);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B5bdea4:{NFSU2_TR(0x5bdea4);
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
B5bdea6:{NFSU2_TR(0x5bdea6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5bdecf;}}
}
B5bdea8:L5bdea8:{c.instructions+=6;NFSU2_TR(0x5bdea8);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5bdead:{NFSU2_TR(0x5bdead);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5bdeaf:{NFSU2_TR(0x5bdeaf);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bdeb0:{NFSU2_TR(0x5bdeb0);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bdeb2:{NFSU2_TR(0x5bdeb2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bdeb3:{NFSU2_TR(0x5bdeb3);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bdeb9ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5bdeb9:L5bdeb9:{c.instructions+=6;NFSU2_TR(0x5bdeb9);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5bdebe:{NFSU2_TR(0x5bdebe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B5bdec0:{NFSU2_TR(0x5bdec0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bdec1:{NFSU2_TR(0x5bdec1);
u8 U[4];
w4(U+0,u32(0x3ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bdec3:{NFSU2_TR(0x5bdec3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bdec4:{NFSU2_TR(0x5bdec4);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bdecaull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5bdeca:L5bdeca:{c.instructions+=1;NFSU2_TR(0x5bdeca);
__builtin_memmove((R+0),gp(0x870910),4);
}
B5bdecf:L5bdecf:{c.instructions+=10;NFSU2_TR(0x5bdecf);
__builtin_memmove((R+8),gp(0x872ef8),4);
}
B5bded5:{NFSU2_TR(0x5bded5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B5bded8:{NFSU2_TR(0x5bded8);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B5bded9:{NFSU2_TR(0x5bded9);
__builtin_memmove(gp(0x872ef8),(R+8),4);
}
B5bdedf:{NFSU2_TR(0x5bdedf);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B5bdee2:{NFSU2_TR(0x5bdee2);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x934ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5bdee8:{NFSU2_TR(0x5bdee8);
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
B5bdeea:{NFSU2_TR(0x5bdeea);
__builtin_memmove(gp(0x87684c),(R+0),4);
}
B5bdeef:{NFSU2_TR(0x5bdeef);
__builtin_memmove(gp(0x876850),(R+28),4);
}
B5bdef5:{NFSU2_TR(0x5bdef5);
if(r1(R+518)){{goto L5bdf29;}}
}
B5bdef7:L5bdef7:{c.instructions+=5;NFSU2_TR(0x5bdef7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bdef8:{NFSU2_TR(0x5bdef8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bdef9:{NFSU2_TR(0x5bdef9);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B5bdefd:{NFSU2_TR(0x5bdefd);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bdefe:{NFSU2_TR(0x5bdefe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bdf03ull));
TAIL_STATIC(0x63cedbu,63c);
}
B5bdf03:L5bdf03:{c.instructions+=10;NFSU2_TR(0x5bdf03);
__builtin_memmove((R+4),gp(0x870910),4);
}
B5bdf09:{NFSU2_TR(0x5bdf09);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5bdf0c:{NFSU2_TR(0x5bdf0c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5bdf0f:{NFSU2_TR(0x5bdf0f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x934ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5bdf15:{NFSU2_TR(0x5bdf15);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5bdf17:{NFSU2_TR(0x5bdf17);
u8 U[4];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((R+24),(U+0),4);
}
B5bdf1b:{NFSU2_TR(0x5bdf1b);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bdf1c:{NFSU2_TR(0x5bdf1c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bdf1d:{NFSU2_TR(0x5bdf1d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bdf1e:{NFSU2_TR(0x5bdf1e);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bdf24ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5bdf24:L5bdf24:{c.instructions+=1;NFSU2_TR(0x5bdf24);
__builtin_memmove((R+0),gp(0x870910),4);
}
B5bdf29:L5bdf29:{c.instructions+=3;NFSU2_TR(0x5bdf29);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B5bdf2c:{NFSU2_TR(0x5bdf2c);
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
B5bdf2e:{NFSU2_TR(0x5bdf2e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L5bdf50;}}
}
B5bdf30:L5bdf30:{c.instructions+=6;NFSU2_TR(0x5bdf30);
__builtin_memmove((R+0),gp(0x870974),4);
}
B5bdf35:{NFSU2_TR(0x5bdf35);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5bdf37:{NFSU2_TR(0x5bdf37);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bdf38:{NFSU2_TR(0x5bdf38);
u8 U[4];
w4(U+0,u32(0x100ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bdf3d:{NFSU2_TR(0x5bdf3d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bdf3e:{NFSU2_TR(0x5bdf3e);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0xb0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bdf44ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5bdf44:L5bdf44:{c.instructions+=4;NFSU2_TR(0x5bdf44);
__builtin_memmove((R+0),gp(0x870910),4);
}
B5bdf49:{NFSU2_TR(0x5bdf49);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B5bdf4c:{NFSU2_TR(0x5bdf4c);
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
B5bdf4e:{NFSU2_TR(0x5bdf4e);
if(r1(R+518)){{goto L5bdf81;}}
}
B5bdf50:L5bdf50:{c.instructions+=6;NFSU2_TR(0x5bdf50);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5bdf54:{NFSU2_TR(0x5bdf54);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bdf55:{NFSU2_TR(0x5bdf55);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bdf56:{NFSU2_TR(0x5bdf56);
u8 U[4];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B5bdf5a:{NFSU2_TR(0x5bdf5a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bdf5b:{NFSU2_TR(0x5bdf5b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bdf60ull));
TAIL_STATIC(0x63cedbu,63c);
}
B5bdf60:L5bdf60:{c.instructions+=10;NFSU2_TR(0x5bdf60);
__builtin_memmove((R+4),gp(0x870910),4);
}
B5bdf66:{NFSU2_TR(0x5bdf66);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5bdf69:{NFSU2_TR(0x5bdf69);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5bdf6c:{NFSU2_TR(0x5bdf6c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x95cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5bdf72:{NFSU2_TR(0x5bdf72);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5bdf74:{NFSU2_TR(0x5bdf74);
u8 U[4];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((R+24),(U+0),4);
}
B5bdf78:{NFSU2_TR(0x5bdf78);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bdf79:{NFSU2_TR(0x5bdf79);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bdf7a:{NFSU2_TR(0x5bdf7a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bdf7b:{NFSU2_TR(0x5bdf7b);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bdf81ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5bdf81:L5bdf81:{c.instructions+=6;NFSU2_TR(0x5bdf81);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B5bdf82:{NFSU2_TR(0x5bdf82);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B5bdf83:{NFSU2_TR(0x5bdf83);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B5bdf84:{NFSU2_TR(0x5bdf84);
__builtin_memmove((R+16),(R+20),4);
}
B5bdf86:{NFSU2_TR(0x5bdf86);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B5bdf87:{NFSU2_TR(0x5bdf87);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5bdf90:L5bdf90:{c.instructions+=10;NFSU2_TR(0x5bdf90);
__builtin_memmove((R+4),gp(0x870910),4);
}
B5bdf96:{NFSU2_TR(0x5bdf96);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B5bdf99:{NFSU2_TR(0x5bdf99);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5bdf9c:{NFSU2_TR(0x5bdf9c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5bdf9f:{NFSU2_TR(0x5bdf9f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B5bdfa1:{NFSU2_TR(0x5bdfa1);
u8 U[4];
w4(U+0,u32(0x5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bdfa3:{NFSU2_TR(0x5bdfa3);
u8 U[4];
w4(U+0,u32(0x86ead8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bdfa8:{NFSU2_TR(0x5bdfa8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bdfa9:{NFSU2_TR(0x5bdfa9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bdfaa:{NFSU2_TR(0x5bdfaa);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bdfadull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B5bdfad:L5bdfad:{c.instructions+=1;NFSU2_TR(0x5bdfad);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5bdfb0:L5bdfb0:{c.instructions+=5;NFSU2_TR(0x5bdfb0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bdfb2:{NFSU2_TR(0x5bdfb2);
u8 U[4];
w4(U+0,u32(0x7a368cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bdfb7:{NFSU2_TR(0x5bdfb7);
u8 U[4];
w4(U+0,u32(0x20ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bdfb9:{NFSU2_TR(0x5bdfb9);
u8 U[4];
w4(U+0,u32(0x604ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bdfbe:{NFSU2_TR(0x5bdfbe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bdfc3ull));
TAIL_STATIC(0x440df0u,440);
}
B5bdfc3:L5bdfc3:{c.instructions+=6;NFSU2_TR(0x5bdfc3);
__builtin_memmove(gp(0x870954),(R+0),4);
}
B5bdfc8:{NFSU2_TR(0x5bdfc8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5bdfcb:{NFSU2_TR(0x5bdfcb);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfffffffdull))));
}
B5bdfce:{NFSU2_TR(0x5bdfce);
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
B5bdfd1:{NFSU2_TR(0x5bdfd1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B5bdfd4:{NFSU2_TR(0x5bdfd4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B5bdfe0:L5bdfe0:{c.instructions+=5;NFSU2_TR(0x5bdfe0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bdfe1:{NFSU2_TR(0x5bdfe1);
__builtin_memmove((R+20),(R+16),4);
}
B5bdfe3:{NFSU2_TR(0x5bdfe3);
__builtin_memmove((R+4),gp(0x870954),4);
}
B5bdfe9:{NFSU2_TR(0x5bdfe9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B5bdfea:{NFSU2_TR(0x5bdfea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x5bdfefull));
TAIL_STATIC(0x440d40u,440);
}
B5bdfef:L5bdfef:{c.instructions+=6;NFSU2_TR(0x5bdfef);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B5bdff2:{NFSU2_TR(0x5bdff2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B5bdff5:{NFSU2_TR(0x5bdff5);
__builtin_memmove(gp(0x870958),(R+0),4);
}
B5bdffa:{NFSU2_TR(0x5bdffa);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B5bdffc:{NFSU2_TR(0x5bdffc);
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
B5bdffe:{NFSU2_TR(0x5bdffe);
__builtin_memmove(gp(0x870964),(R+0),4);
TAIL_STATIC(0x5be003u,5be);
}
XIT:NFSU2_TR_EXIT(0x5bd,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
