#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_43b(u8* __restrict R,Cpu& c);
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_497(u8* __restrict R,Cpu& c);
u32 body_4ac(u8* __restrict R,Cpu& c);
u32 body_501(u8* __restrict R,Cpu& c);
u32 body_504(u8* __restrict R,Cpu& c);
u32 body_505(u8* __restrict R,Cpu& c);
u32 body_50c(u8* __restrict R,Cpu& c);
u32 body_51c(u8* __restrict R,Cpu& c);
u32 body_51d(u8* __restrict R,Cpu& c);
u32 body_535(u8* __restrict R,Cpu& c);
u32 body_537(u8* __restrict R,Cpu& c);
u32 body_56d(u8* __restrict R,Cpu& c);
u32 body_5ee(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x4ab,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x4ab,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_4ab(u8* __restrict R,Cpu& c);
u32 page_4ab(Cpu& c){return body_4ab(c.regs.data(),c);}
__attribute__((noinline)) u32 body_4ab(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x4ab004:goto L4ab004;
case 0x4ab008:c.instructions+=2;goto B4ab008;
case 0x4ab00a:c.instructions+=1;goto B4ab00a;
case 0x4ab00c:goto L4ab00c;
case 0x4ab00f:c.instructions+=5;goto B4ab00f;
case 0x4ab012:c.instructions+=4;goto B4ab012;
case 0x4ab015:c.instructions+=3;goto B4ab015;
case 0x4ab01a:c.instructions+=2;goto B4ab01a;
case 0x4ab01b:c.instructions+=1;goto B4ab01b;
case 0x4ab020:goto L4ab020;
case 0x4ab023:c.instructions+=2;goto B4ab023;
case 0x4ab024:c.instructions+=1;goto B4ab024;
case 0x4ab029:goto L4ab029;
case 0x4ab02c:c.instructions+=1;goto B4ab02c;
case 0x4ab02e:goto L4ab02e;
case 0x4ab031:c.instructions+=3;goto B4ab031;
case 0x4ab033:c.instructions+=2;goto B4ab033;
case 0x4ab034:c.instructions+=1;goto B4ab034;
case 0x4ab036:goto L4ab036;
case 0x4ab039:c.instructions+=1;goto B4ab039;
case 0x4ab03a:goto L4ab03a;
case 0x4ab03f:goto L4ab03f;
case 0x4ab042:c.instructions+=2;goto B4ab042;
case 0x4ab044:c.instructions+=1;goto B4ab044;
case 0x4ab046:goto L4ab046;
case 0x4ab049:c.instructions+=2;goto B4ab049;
case 0x4ab04b:c.instructions+=1;goto B4ab04b;
case 0x4ab04d:goto L4ab04d;
case 0x4ab050:c.instructions+=5;goto B4ab050;
case 0x4ab052:c.instructions+=4;goto B4ab052;
case 0x4ab057:c.instructions+=3;goto B4ab057;
case 0x4ab058:c.instructions+=2;goto B4ab058;
case 0x4ab05c:c.instructions+=1;goto B4ab05c;
case 0x4ab061:goto L4ab061;
case 0x4ab064:c.instructions+=3;goto B4ab064;
case 0x4ab065:c.instructions+=2;goto B4ab065;
case 0x4ab066:c.instructions+=1;goto B4ab066;
case 0x4ab069:goto L4ab069;
case 0x4ab06c:c.instructions+=2;goto B4ab06c;
case 0x4ab06d:c.instructions+=1;goto B4ab06d;
case 0x4ab072:goto L4ab072;
case 0x4ab075:c.instructions+=3;goto B4ab075;
case 0x4ab078:c.instructions+=2;goto B4ab078;
case 0x4ab07a:c.instructions+=1;goto B4ab07a;
case 0x4ab07c:goto L4ab07c;
case 0x4ab07f:c.instructions+=3;goto B4ab07f;
case 0x4ab084:c.instructions+=2;goto B4ab084;
case 0x4ab085:c.instructions+=1;goto B4ab085;
case 0x4ab08a:goto L4ab08a;
case 0x4ab08d:c.instructions+=2;goto B4ab08d;
case 0x4ab08f:c.instructions+=1;goto B4ab08f;
case 0x4ab091:goto L4ab091;
case 0x4ab094:c.instructions+=4;goto B4ab094;
case 0x4ab096:c.instructions+=3;goto B4ab096;
case 0x4ab09b:c.instructions+=2;goto B4ab09b;
case 0x4ab09c:c.instructions+=1;goto B4ab09c;
case 0x4ab0a1:goto L4ab0a1;
case 0x4ab0a5:c.instructions+=1;goto B4ab0a5;
case 0x4ab0a8:goto L4ab0a8;
case 0x4ab0a9:c.instructions+=2;goto B4ab0a9;
case 0x4ab0aa:c.instructions+=1;goto B4ab0aa;
case 0x4ab0b0:goto L4ab0b0;
case 0x4ab0b4:c.instructions+=29;goto B4ab0b4;
case 0x4ab0b8:c.instructions+=28;goto B4ab0b8;
case 0x4ab0ba:c.instructions+=27;goto B4ab0ba;
case 0x4ab0be:c.instructions+=26;goto B4ab0be;
case 0x4ab0c0:c.instructions+=25;goto B4ab0c0;
case 0x4ab0c4:c.instructions+=24;goto B4ab0c4;
case 0x4ab0c6:c.instructions+=23;goto B4ab0c6;
case 0x4ab0c8:c.instructions+=22;goto B4ab0c8;
case 0x4ab0cb:c.instructions+=21;goto B4ab0cb;
case 0x4ab0ce:c.instructions+=20;goto B4ab0ce;
case 0x4ab0d2:c.instructions+=19;goto B4ab0d2;
case 0x4ab0d5:c.instructions+=18;goto B4ab0d5;
case 0x4ab0d8:c.instructions+=17;goto B4ab0d8;
case 0x4ab0db:c.instructions+=16;goto B4ab0db;
case 0x4ab0de:c.instructions+=15;goto B4ab0de;
case 0x4ab0e2:c.instructions+=14;goto B4ab0e2;
case 0x4ab0e5:c.instructions+=13;goto B4ab0e5;
case 0x4ab0e8:c.instructions+=12;goto B4ab0e8;
case 0x4ab0eb:c.instructions+=11;goto B4ab0eb;
case 0x4ab0ee:c.instructions+=10;goto B4ab0ee;
case 0x4ab0f2:c.instructions+=9;goto B4ab0f2;
case 0x4ab0f5:c.instructions+=8;goto B4ab0f5;
case 0x4ab0f7:c.instructions+=7;goto B4ab0f7;
case 0x4ab0fb:c.instructions+=6;goto B4ab0fb;
case 0x4ab0fe:c.instructions+=5;goto B4ab0fe;
case 0x4ab102:c.instructions+=4;goto B4ab102;
case 0x4ab108:c.instructions+=3;goto B4ab108;
case 0x4ab10a:c.instructions+=2;goto B4ab10a;
case 0x4ab10d:c.instructions+=1;goto B4ab10d;
case 0x4ab113:goto L4ab113;
case 0x4ab117:c.instructions+=5;goto B4ab117;
case 0x4ab11d:c.instructions+=4;goto B4ab11d;
case 0x4ab121:c.instructions+=3;goto B4ab121;
case 0x4ab123:c.instructions+=2;goto B4ab123;
case 0x4ab126:c.instructions+=1;goto B4ab126;
case 0x4ab128:goto L4ab128;
case 0x4ab12a:c.instructions+=1;goto B4ab12a;
case 0x4ab130:goto L4ab130;
case 0x4ab133:c.instructions+=7;goto B4ab133;
case 0x4ab135:c.instructions+=6;goto B4ab135;
case 0x4ab139:c.instructions+=5;goto B4ab139;
case 0x4ab13d:c.instructions+=4;goto B4ab13d;
case 0x4ab143:c.instructions+=3;goto B4ab143;
case 0x4ab145:c.instructions+=2;goto B4ab145;
case 0x4ab148:c.instructions+=1;goto B4ab148;
case 0x4ab14e:goto L4ab14e;
case 0x4ab152:c.instructions+=5;goto B4ab152;
case 0x4ab158:c.instructions+=4;goto B4ab158;
case 0x4ab15c:c.instructions+=3;goto B4ab15c;
case 0x4ab15e:c.instructions+=2;goto B4ab15e;
case 0x4ab161:c.instructions+=1;goto B4ab161;
case 0x4ab163:goto L4ab163;
case 0x4ab165:c.instructions+=1;goto B4ab165;
case 0x4ab16b:goto L4ab16b;
case 0x4ab16e:c.instructions+=7;goto B4ab16e;
case 0x4ab171:c.instructions+=6;goto B4ab171;
case 0x4ab175:c.instructions+=5;goto B4ab175;
case 0x4ab179:c.instructions+=4;goto B4ab179;
case 0x4ab17f:c.instructions+=3;goto B4ab17f;
case 0x4ab181:c.instructions+=2;goto B4ab181;
case 0x4ab184:c.instructions+=1;goto B4ab184;
case 0x4ab186:goto L4ab186;
case 0x4ab18a:c.instructions+=5;goto B4ab18a;
case 0x4ab190:c.instructions+=4;goto B4ab190;
case 0x4ab194:c.instructions+=3;goto B4ab194;
case 0x4ab196:c.instructions+=2;goto B4ab196;
case 0x4ab199:c.instructions+=1;goto B4ab199;
case 0x4ab19b:goto L4ab19b;
case 0x4ab19d:c.instructions+=1;goto B4ab19d;
case 0x4ab1a3:goto L4ab1a3;
case 0x4ab1a6:c.instructions+=7;goto B4ab1a6;
case 0x4ab1a9:c.instructions+=6;goto B4ab1a9;
case 0x4ab1ad:c.instructions+=5;goto B4ab1ad;
case 0x4ab1b1:c.instructions+=4;goto B4ab1b1;
case 0x4ab1b7:c.instructions+=3;goto B4ab1b7;
case 0x4ab1b9:c.instructions+=2;goto B4ab1b9;
case 0x4ab1bc:c.instructions+=1;goto B4ab1bc;
case 0x4ab1be:goto L4ab1be;
case 0x4ab1c2:c.instructions+=5;goto B4ab1c2;
case 0x4ab1c8:c.instructions+=4;goto B4ab1c8;
case 0x4ab1cc:c.instructions+=3;goto B4ab1cc;
case 0x4ab1ce:c.instructions+=2;goto B4ab1ce;
case 0x4ab1d1:c.instructions+=1;goto B4ab1d1;
case 0x4ab1d3:goto L4ab1d3;
case 0x4ab1d5:c.instructions+=2;goto B4ab1d5;
case 0x4ab1dc:c.instructions+=1;goto B4ab1dc;
case 0x4ab1df:goto L4ab1df;
case 0x4ab1e5:c.instructions+=1;goto B4ab1e5;
case 0x4ab1ea:goto L4ab1ea;
case 0x4ab1f0:c.instructions+=1;goto B4ab1f0;
case 0x4ab1f5:goto L4ab1f5;
case 0x4ab1fb:c.instructions+=1;goto B4ab1fb;
case 0x4ab1fd:goto L4ab1fd;
case 0x4ab203:goto L4ab203;
case 0x4ab206:c.instructions+=1;goto B4ab206;
case 0x4ab210:goto L4ab210;
case 0x4ab214:c.instructions+=6;goto B4ab214;
case 0x4ab218:c.instructions+=5;goto B4ab218;
case 0x4ab21b:c.instructions+=4;goto B4ab21b;
case 0x4ab221:c.instructions+=3;goto B4ab221;
case 0x4ab223:c.instructions+=2;goto B4ab223;
case 0x4ab226:c.instructions+=1;goto B4ab226;
case 0x4ab228:goto L4ab228;
case 0x4ab22a:c.instructions+=2;goto B4ab22a;
case 0x4ab230:c.instructions+=1;goto B4ab230;
case 0x4ab232:goto L4ab232;
case 0x4ab238:c.instructions+=3;goto B4ab238;
case 0x4ab23a:c.instructions+=2;goto B4ab23a;
case 0x4ab23d:c.instructions+=1;goto B4ab23d;
case 0x4ab23f:goto L4ab23f;
case 0x4ab241:c.instructions+=1;goto B4ab241;
case 0x4ab247:goto L4ab247;
case 0x4ab24e:c.instructions+=2;goto B4ab24e;
case 0x4ab252:c.instructions+=1;goto B4ab252;
case 0x4ab254:goto L4ab254;
case 0x4ab257:c.instructions+=2;goto B4ab257;
case 0x4ab25a:c.instructions+=1;goto B4ab25a;
case 0x4ab25c:goto L4ab25c;
case 0x4ab25f:c.instructions+=1;goto B4ab25f;
case 0x4ab262:goto L4ab262;
case 0x4ab264:c.instructions+=4;goto B4ab264;
case 0x4ab266:c.instructions+=3;goto B4ab266;
case 0x4ab268:c.instructions+=2;goto B4ab268;
case 0x4ab26b:c.instructions+=1;goto B4ab26b;
case 0x4ab26d:goto L4ab26d;
case 0x4ab26f:c.instructions+=1;goto B4ab26f;
case 0x4ab271:goto L4ab271;
case 0x4ab277:c.instructions+=2;goto B4ab277;
case 0x4ab279:c.instructions+=1;goto B4ab279;
case 0x4ab27b:goto L4ab27b;
case 0x4ab27d:c.instructions+=5;goto B4ab27d;
case 0x4ab27f:c.instructions+=4;goto B4ab27f;
case 0x4ab285:c.instructions+=3;goto B4ab285;
case 0x4ab287:c.instructions+=2;goto B4ab287;
case 0x4ab28a:c.instructions+=1;goto B4ab28a;
case 0x4ab28c:goto L4ab28c;
case 0x4ab292:goto L4ab292;
case 0x4ab298:c.instructions+=3;goto B4ab298;
case 0x4ab29a:c.instructions+=2;goto B4ab29a;
case 0x4ab29d:c.instructions+=1;goto B4ab29d;
case 0x4ab29f:goto L4ab29f;
case 0x4ab2a5:goto L4ab2a5;
case 0x4ab2b0:goto L4ab2b0;
case 0x4ab2b1:c.instructions+=5;goto B4ab2b1;
case 0x4ab2b7:c.instructions+=4;goto B4ab2b7;
case 0x4ab2bd:c.instructions+=3;goto B4ab2bd;
case 0x4ab2bf:c.instructions+=2;goto B4ab2bf;
case 0x4ab2c2:c.instructions+=1;goto B4ab2c2;
case 0x4ab2c4:goto L4ab2c4;
case 0x4ab2c9:c.instructions+=9;goto B4ab2c9;
case 0x4ab2cf:c.instructions+=8;goto B4ab2cf;
case 0x4ab2d3:c.instructions+=7;goto B4ab2d3;
case 0x4ab2d7:c.instructions+=6;goto B4ab2d7;
case 0x4ab2dd:c.instructions+=5;goto B4ab2dd;
case 0x4ab2e3:c.instructions+=4;goto B4ab2e3;
case 0x4ab2e9:c.instructions+=3;goto B4ab2e9;
case 0x4ab2eb:c.instructions+=2;goto B4ab2eb;
case 0x4ab2ee:c.instructions+=1;goto B4ab2ee;
case 0x4ab2f0:goto L4ab2f0;
case 0x4ab2fa:c.instructions+=4;goto B4ab2fa;
case 0x4ab2fc:c.instructions+=3;goto B4ab2fc;
case 0x4ab2ff:c.instructions+=2;goto B4ab2ff;
case 0x4ab300:c.instructions+=1;goto B4ab300;
case 0x4ab305:goto L4ab305;
case 0x4ab308:c.instructions+=2;goto B4ab308;
case 0x4ab309:c.instructions+=1;goto B4ab309;
case 0x4ab30a:goto L4ab30a;
case 0x4ab30d:c.instructions+=5;goto B4ab30d;
case 0x4ab310:c.instructions+=4;goto B4ab310;
case 0x4ab313:c.instructions+=3;goto B4ab313;
case 0x4ab318:c.instructions+=2;goto B4ab318;
case 0x4ab319:c.instructions+=1;goto B4ab319;
case 0x4ab31e:goto L4ab31e;
case 0x4ab321:c.instructions+=2;goto B4ab321;
case 0x4ab322:c.instructions+=1;goto B4ab322;
case 0x4ab323:goto L4ab323;
case 0x4ab326:c.instructions+=2;goto B4ab326;
case 0x4ab327:c.instructions+=1;goto B4ab327;
case 0x4ab32c:goto L4ab32c;
case 0x4ab32f:c.instructions+=2;goto B4ab32f;
case 0x4ab330:c.instructions+=1;goto B4ab330;
case 0x4ab340:goto L4ab340;
case 0x4ab341:c.instructions+=3;goto B4ab341;
case 0x4ab347:c.instructions+=2;goto B4ab347;
case 0x4ab349:c.instructions+=1;goto B4ab349;
case 0x4ab34b:goto L4ab34b;
case 0x4ab350:c.instructions+=8;goto B4ab350;
case 0x4ab356:c.instructions+=7;goto B4ab356;
case 0x4ab35a:c.instructions+=6;goto B4ab35a;
case 0x4ab35e:c.instructions+=5;goto B4ab35e;
case 0x4ab364:c.instructions+=4;goto B4ab364;
case 0x4ab36a:c.instructions+=3;goto B4ab36a;
case 0x4ab36c:c.instructions+=2;goto B4ab36c;
case 0x4ab36f:c.instructions+=1;goto B4ab36f;
case 0x4ab371:goto L4ab371;
case 0x4ab374:c.instructions+=2;goto B4ab374;
case 0x4ab375:c.instructions+=1;goto B4ab375;
case 0x4ab37a:goto L4ab37a;
case 0x4ab37d:c.instructions+=2;goto B4ab37d;
case 0x4ab37e:c.instructions+=1;goto B4ab37e;
case 0x4ab37f:goto L4ab37f;
case 0x4ab382:c.instructions+=2;goto B4ab382;
case 0x4ab383:c.instructions+=1;goto B4ab383;
case 0x4ab388:goto L4ab388;
case 0x4ab38b:goto L4ab38b;
case 0x4ab38c:c.instructions+=1;goto B4ab38c;
case 0x4ab390:goto L4ab390;
case 0x4ab394:c.instructions+=4;goto B4ab394;
case 0x4ab396:c.instructions+=3;goto B4ab396;
case 0x4ab397:c.instructions+=2;goto B4ab397;
case 0x4ab399:c.instructions+=1;goto B4ab399;
case 0x4ab39b:goto L4ab39b;
case 0x4ab3a1:c.instructions+=1;goto B4ab3a1;
case 0x4ab3a3:goto L4ab3a3;
case 0x4ab3a7:goto L4ab3a7;
case 0x4ab3ab:c.instructions+=4;goto B4ab3ab;
case 0x4ab3b1:c.instructions+=3;goto B4ab3b1;
case 0x4ab3b3:c.instructions+=2;goto B4ab3b3;
case 0x4ab3b6:c.instructions+=1;goto B4ab3b6;
case 0x4ab3b8:goto L4ab3b8;
case 0x4ab3ba:c.instructions+=1;goto B4ab3ba;
case 0x4ab3c0:goto L4ab3c0;
case 0x4ab3c2:c.instructions+=5;goto B4ab3c2;
case 0x4ab3c6:c.instructions+=4;goto B4ab3c6;
case 0x4ab3cc:c.instructions+=3;goto B4ab3cc;
case 0x4ab3ce:c.instructions+=2;goto B4ab3ce;
case 0x4ab3d1:c.instructions+=1;goto B4ab3d1;
case 0x4ab3d3:goto L4ab3d3;
case 0x4ab3db:goto L4ab3db;
case 0x4ab3df:c.instructions+=1;goto B4ab3df;
case 0x4ab3e4:goto L4ab3e4;
case 0x4ab3e5:c.instructions+=4;goto B4ab3e5;
case 0x4ab3e8:c.instructions+=3;goto B4ab3e8;
case 0x4ab3ed:c.instructions+=2;goto B4ab3ed;
case 0x4ab3ee:c.instructions+=1;goto B4ab3ee;
case 0x4ab3f3:goto L4ab3f3;
case 0x4ab3f7:c.instructions+=6;goto B4ab3f7;
case 0x4ab3fd:c.instructions+=5;goto B4ab3fd;
case 0x4ab400:c.instructions+=4;goto B4ab400;
case 0x4ab403:c.instructions+=3;goto B4ab403;
case 0x4ab406:c.instructions+=2;goto B4ab406;
case 0x4ab407:c.instructions+=1;goto B4ab407;
case 0x4ab40c:goto L4ab40c;
case 0x4ab40f:c.instructions+=2;goto B4ab40f;
case 0x4ab410:c.instructions+=1;goto B4ab410;
case 0x4ab420:goto L4ab420;
case 0x4ab424:c.instructions+=4;goto B4ab424;
case 0x4ab426:c.instructions+=3;goto B4ab426;
case 0x4ab427:c.instructions+=2;goto B4ab427;
case 0x4ab429:c.instructions+=1;goto B4ab429;
case 0x4ab42b:goto L4ab42b;
case 0x4ab42e:c.instructions+=2;goto B4ab42e;
case 0x4ab42f:c.instructions+=1;goto B4ab42f;
case 0x4ab434:goto L4ab434;
case 0x4ab437:c.instructions+=3;goto B4ab437;
case 0x4ab43c:c.instructions+=2;goto B4ab43c;
case 0x4ab43d:c.instructions+=1;goto B4ab43d;
case 0x4ab442:goto L4ab442;
case 0x4ab445:c.instructions+=2;goto B4ab445;
case 0x4ab447:c.instructions+=1;goto B4ab447;
case 0x4ab449:goto L4ab449;
case 0x4ab44c:c.instructions+=4;goto B4ab44c;
case 0x4ab44e:c.instructions+=3;goto B4ab44e;
case 0x4ab453:c.instructions+=2;goto B4ab453;
case 0x4ab454:c.instructions+=1;goto B4ab454;
case 0x4ab459:goto L4ab459;
case 0x4ab45c:c.instructions+=2;goto B4ab45c;
case 0x4ab45d:c.instructions+=1;goto B4ab45d;
case 0x4ab460:goto L4ab460;
case 0x4ab464:c.instructions+=4;goto B4ab464;
case 0x4ab466:c.instructions+=3;goto B4ab466;
case 0x4ab469:c.instructions+=2;goto B4ab469;
case 0x4ab46a:c.instructions+=1;goto B4ab46a;
case 0x4ab46c:goto L4ab46c;
case 0x4ab471:goto L4ab471;
case 0x4ab474:c.instructions+=3;goto B4ab474;
case 0x4ab479:c.instructions+=2;goto B4ab479;
case 0x4ab47a:c.instructions+=1;goto B4ab47a;
case 0x4ab47f:goto L4ab47f;
case 0x4ab482:c.instructions+=2;goto B4ab482;
case 0x4ab484:c.instructions+=1;goto B4ab484;
case 0x4ab486:goto L4ab486;
case 0x4ab489:c.instructions+=4;goto B4ab489;
case 0x4ab48b:c.instructions+=3;goto B4ab48b;
case 0x4ab490:c.instructions+=2;goto B4ab490;
case 0x4ab491:c.instructions+=1;goto B4ab491;
case 0x4ab496:goto L4ab496;
case 0x4ab499:c.instructions+=2;goto B4ab499;
case 0x4ab49a:c.instructions+=1;goto B4ab49a;
case 0x4ab49d:goto L4ab49d;
case 0x4ab4a2:goto L4ab4a2;
case 0x4ab4a5:goto L4ab4a5;
case 0x4ab4a6:c.instructions+=1;goto B4ab4a6;
case 0x4ab4b0:goto L4ab4b0;
case 0x4ab4b4:c.instructions+=6;goto B4ab4b4;
case 0x4ab4b7:c.instructions+=5;goto B4ab4b7;
case 0x4ab4ba:c.instructions+=4;goto B4ab4ba;
case 0x4ab4c0:c.instructions+=3;goto B4ab4c0;
case 0x4ab4c2:c.instructions+=2;goto B4ab4c2;
case 0x4ab4c3:c.instructions+=1;goto B4ab4c3;
case 0x4ab4c5:goto L4ab4c5;
case 0x4ab4cb:c.instructions+=2;goto B4ab4cb;
case 0x4ab4cd:c.instructions+=1;goto B4ab4cd;
case 0x4ab4cf:goto L4ab4cf;
case 0x4ab4d5:c.instructions+=2;goto B4ab4d5;
case 0x4ab4db:c.instructions+=1;goto B4ab4db;
case 0x4ab4dd:goto L4ab4dd;
case 0x4ab4e3:c.instructions+=1;goto B4ab4e3;
case 0x4ab4e5:goto L4ab4e5;
case 0x4ab4e9:c.instructions+=1;goto B4ab4e9;
case 0x4ab4eb:goto L4ab4eb;
case 0x4ab4ed:c.instructions+=3;goto B4ab4ed;
case 0x4ab4f1:c.instructions+=2;goto B4ab4f1;
case 0x4ab4f2:c.instructions+=1;goto B4ab4f2;
case 0x4ab4f7:goto L4ab4f7;
case 0x4ab4fd:c.instructions+=2;goto B4ab4fd;
case 0x4ab500:c.instructions+=1;goto B4ab500;
case 0x4ab502:goto L4ab502;
case 0x4ab509:c.instructions+=1;goto B4ab509;
case 0x4ab50b:goto L4ab50b;
case 0x4ab510:c.instructions+=3;goto B4ab510;
case 0x4ab512:c.instructions+=2;goto B4ab512;
case 0x4ab515:c.instructions+=1;goto B4ab515;
case 0x4ab517:goto L4ab517;
case 0x4ab51a:c.instructions+=1;goto B4ab51a;
case 0x4ab51c:goto L4ab51c;
case 0x4ab51e:c.instructions+=1;goto B4ab51e;
case 0x4ab520:goto L4ab520;
case 0x4ab523:c.instructions+=1;goto B4ab523;
case 0x4ab525:goto L4ab525;
case 0x4ab52a:c.instructions+=2;goto B4ab52a;
case 0x4ab52b:c.instructions+=1;goto B4ab52b;
case 0x4ab52e:goto L4ab52e;
case 0x4ab534:c.instructions+=8;goto B4ab534;
case 0x4ab53a:c.instructions+=7;goto B4ab53a;
case 0x4ab53f:c.instructions+=6;goto B4ab53f;
case 0x4ab541:c.instructions+=5;goto B4ab541;
case 0x4ab547:c.instructions+=4;goto B4ab547;
case 0x4ab549:c.instructions+=3;goto B4ab549;
case 0x4ab54e:c.instructions+=2;goto B4ab54e;
case 0x4ab551:c.instructions+=1;goto B4ab551;
case 0x4ab553:goto L4ab553;
case 0x4ab558:c.instructions+=2;goto B4ab558;
case 0x4ab559:c.instructions+=1;goto B4ab559;
case 0x4ab55c:goto L4ab55c;
case 0x4ab561:c.instructions+=2;goto B4ab561;
case 0x4ab563:c.instructions+=1;goto B4ab563;
case 0x4ab565:goto L4ab565;
case 0x4ab56a:c.instructions+=2;goto B4ab56a;
case 0x4ab56c:c.instructions+=1;goto B4ab56c;
case 0x4ab56e:goto L4ab56e;
case 0x4ab574:c.instructions+=1;goto B4ab574;
case 0x4ab576:goto L4ab576;
case 0x4ab57c:c.instructions+=1;goto B4ab57c;
case 0x4ab57e:goto L4ab57e;
case 0x4ab584:c.instructions+=2;goto B4ab584;
case 0x4ab587:c.instructions+=1;goto B4ab587;
case 0x4ab589:goto L4ab589;
case 0x4ab58b:c.instructions+=2;goto B4ab58b;
case 0x4ab590:c.instructions+=1;goto B4ab590;
case 0x4ab595:goto L4ab595;
case 0x4ab597:goto L4ab597;
case 0x4ab59c:c.instructions+=1;goto B4ab59c;
case 0x4ab59e:goto L4ab59e;
case 0x4ab5a5:goto L4ab5a5;
case 0x4ab5a6:c.instructions+=1;goto B4ab5a6;
case 0x4ab5b0:goto L4ab5b0;
case 0x4ab5b3:c.instructions+=10;goto B4ab5b3;
case 0x4ab5b4:c.instructions+=9;goto B4ab5b4;
case 0x4ab5b6:c.instructions+=8;goto B4ab5b6;
case 0x4ab5b9:c.instructions+=7;goto B4ab5b9;
case 0x4ab5bc:c.instructions+=6;goto B4ab5bc;
case 0x4ab5be:c.instructions+=5;goto B4ab5be;
case 0x4ab5c1:c.instructions+=4;goto B4ab5c1;
case 0x4ab5c2:c.instructions+=3;goto B4ab5c2;
case 0x4ab5c5:c.instructions+=2;goto B4ab5c5;
case 0x4ab5c7:c.instructions+=1;goto B4ab5c7;
case 0x4ab5cd:goto L4ab5cd;
case 0x4ab5d3:c.instructions+=1;goto B4ab5d3;
case 0x4ab5d8:goto L4ab5d8;
case 0x4ab5da:c.instructions+=2;goto B4ab5da;
case 0x4ab5dc:c.instructions+=1;goto B4ab5dc;
case 0x4ab5de:goto L4ab5de;
case 0x4ab5e1:c.instructions+=2;goto B4ab5e1;
case 0x4ab5e2:c.instructions+=1;goto B4ab5e2;
case 0x4ab5e7:goto L4ab5e7;
case 0x4ab5ea:c.instructions+=4;goto B4ab5ea;
case 0x4ab5eb:c.instructions+=3;goto B4ab5eb;
case 0x4ab5ec:c.instructions+=2;goto B4ab5ec;
case 0x4ab5ef:c.instructions+=1;goto B4ab5ef;
case 0x4ab5f2:goto L4ab5f2;
case 0x4ab5f5:c.instructions+=2;goto B4ab5f5;
case 0x4ab5f6:c.instructions+=1;goto B4ab5f6;
case 0x4ab5fb:goto L4ab5fb;
case 0x4ab5fe:c.instructions+=2;goto B4ab5fe;
case 0x4ab601:c.instructions+=1;goto B4ab601;
case 0x4ab603:goto L4ab603;
case 0x4ab606:c.instructions+=3;goto B4ab606;
case 0x4ab60b:c.instructions+=2;goto B4ab60b;
case 0x4ab60c:c.instructions+=1;goto B4ab60c;
case 0x4ab611:goto L4ab611;
case 0x4ab614:c.instructions+=1;goto B4ab614;
case 0x4ab616:goto L4ab616;
case 0x4ab619:c.instructions+=4;goto B4ab619;
case 0x4ab61a:c.instructions+=3;goto B4ab61a;
case 0x4ab61f:c.instructions+=2;goto B4ab61f;
case 0x4ab620:c.instructions+=1;goto B4ab620;
case 0x4ab625:goto L4ab625;
case 0x4ab628:goto L4ab628;
case 0x4ab62e:c.instructions+=1;goto B4ab62e;
case 0x4ab633:goto L4ab633;
case 0x4ab637:c.instructions+=2;goto B4ab637;
case 0x4ab63d:c.instructions+=1;goto B4ab63d;
case 0x4ab642:goto L4ab642;
case 0x4ab644:c.instructions+=9;goto B4ab644;
case 0x4ab649:c.instructions+=8;goto B4ab649;
case 0x4ab64b:c.instructions+=7;goto B4ab64b;
case 0x4ab64d:c.instructions+=6;goto B4ab64d;
case 0x4ab650:c.instructions+=5;goto B4ab650;
case 0x4ab652:c.instructions+=4;goto B4ab652;
case 0x4ab655:c.instructions+=3;goto B4ab655;
case 0x4ab657:c.instructions+=2;goto B4ab657;
case 0x4ab658:c.instructions+=1;goto B4ab658;
case 0x4ab65d:goto L4ab65d;
case 0x4ab660:c.instructions+=5;goto B4ab660;
case 0x4ab661:c.instructions+=4;goto B4ab661;
case 0x4ab665:c.instructions+=3;goto B4ab665;
case 0x4ab669:c.instructions+=2;goto B4ab669;
case 0x4ab66a:c.instructions+=1;goto B4ab66a;
case 0x4ab66f:goto L4ab66f;
case 0x4ab672:c.instructions+=2;goto B4ab672;
case 0x4ab674:c.instructions+=1;goto B4ab674;
case 0x4ab679:goto L4ab679;
case 0x4ab67d:c.instructions+=4;goto B4ab67d;
case 0x4ab683:c.instructions+=3;goto B4ab683;
case 0x4ab685:c.instructions+=2;goto B4ab685;
case 0x4ab68b:c.instructions+=1;goto B4ab68b;
case 0x4ab690:goto L4ab690;
case 0x4ab693:c.instructions+=5;goto B4ab693;
case 0x4ab695:c.instructions+=4;goto B4ab695;
case 0x4ab698:c.instructions+=3;goto B4ab698;
case 0x4ab699:c.instructions+=2;goto B4ab699;
case 0x4ab69a:c.instructions+=1;goto B4ab69a;
case 0x4ab69f:goto L4ab69f;
case 0x4ab6a2:c.instructions+=6;goto B4ab6a2;
case 0x4ab6a6:c.instructions+=5;goto B4ab6a6;
case 0x4ab6a7:c.instructions+=4;goto B4ab6a7;
case 0x4ab6ab:c.instructions+=3;goto B4ab6ab;
case 0x4ab6ac:c.instructions+=2;goto B4ab6ac;
case 0x4ab6ad:c.instructions+=1;goto B4ab6ad;
case 0x4ab6b2:goto L4ab6b2;
case 0x4ab6b8:c.instructions+=8;goto B4ab6b8;
case 0x4ab6bc:c.instructions+=7;goto B4ab6bc;
case 0x4ab6bf:c.instructions+=6;goto B4ab6bf;
case 0x4ab6c5:c.instructions+=5;goto B4ab6c5;
case 0x4ab6c9:c.instructions+=4;goto B4ab6c9;
case 0x4ab6cd:c.instructions+=3;goto B4ab6cd;
case 0x4ab6ce:c.instructions+=2;goto B4ab6ce;
case 0x4ab6cf:c.instructions+=1;goto B4ab6cf;
case 0x4ab6d4:goto L4ab6d4;
case 0x4ab6d7:c.instructions+=3;goto B4ab6d7;
case 0x4ab6d8:c.instructions+=2;goto B4ab6d8;
case 0x4ab6d9:c.instructions+=1;goto B4ab6d9;
case 0x4ab6de:goto L4ab6de;
case 0x4ab6e2:c.instructions+=6;goto B4ab6e2;
case 0x4ab6e6:c.instructions+=5;goto B4ab6e6;
case 0x4ab6e9:c.instructions+=4;goto B4ab6e9;
case 0x4ab6ea:c.instructions+=3;goto B4ab6ea;
case 0x4ab6eb:c.instructions+=2;goto B4ab6eb;
case 0x4ab6ec:c.instructions+=1;goto B4ab6ec;
case 0x4ab6f1:goto L4ab6f1;
case 0x4ab6f4:goto L4ab6f4;
case 0x4ab6f5:c.instructions+=3;goto B4ab6f5;
case 0x4ab6f6:c.instructions+=2;goto B4ab6f6;
case 0x4ab6f9:c.instructions+=1;goto B4ab6f9;
case 0x4ab700:goto L4ab700;
case 0x4ab704:c.instructions+=6;goto B4ab704;
case 0x4ab705:c.instructions+=5;goto B4ab705;
case 0x4ab707:c.instructions+=4;goto B4ab707;
case 0x4ab70a:c.instructions+=3;goto B4ab70a;
case 0x4ab70c:c.instructions+=2;goto B4ab70c;
case 0x4ab70f:c.instructions+=1;goto B4ab70f;
case 0x4ab711:goto L4ab711;
case 0x4ab714:c.instructions+=1;goto B4ab714;
case 0x4ab719:goto L4ab719;
case 0x4ab71a:c.instructions+=4;goto B4ab71a;
case 0x4ab71d:c.instructions+=3;goto B4ab71d;
case 0x4ab722:c.instructions+=2;goto B4ab722;
case 0x4ab723:c.instructions+=1;goto B4ab723;
case 0x4ab728:goto L4ab728;
case 0x4ab72b:c.instructions+=4;goto B4ab72b;
case 0x4ab72d:c.instructions+=3;goto B4ab72d;
case 0x4ab732:c.instructions+=2;goto B4ab732;
case 0x4ab733:c.instructions+=1;goto B4ab733;
case 0x4ab738:goto L4ab738;
case 0x4ab73b:c.instructions+=4;goto B4ab73b;
case 0x4ab73d:c.instructions+=3;goto B4ab73d;
case 0x4ab742:c.instructions+=2;goto B4ab742;
case 0x4ab743:c.instructions+=1;goto B4ab743;
case 0x4ab748:goto L4ab748;
case 0x4ab74b:c.instructions+=1;goto B4ab74b;
case 0x4ab74d:goto L4ab74d;
case 0x4ab74f:goto L4ab74f;
case 0x4ab752:c.instructions+=2;goto B4ab752;
case 0x4ab754:c.instructions+=1;goto B4ab754;
case 0x4ab756:goto L4ab756;
case 0x4ab759:c.instructions+=2;goto B4ab759;
case 0x4ab75a:c.instructions+=1;goto B4ab75a;
case 0x4ab75f:goto L4ab75f;
case 0x4ab762:c.instructions+=2;goto B4ab762;
case 0x4ab763:c.instructions+=1;goto B4ab763;
case 0x4ab768:goto L4ab768;
case 0x4ab76b:c.instructions+=2;goto B4ab76b;
case 0x4ab76c:c.instructions+=1;goto B4ab76c;
case 0x4ab771:goto L4ab771;
case 0x4ab774:goto L4ab774;
case 0x4ab775:c.instructions+=1;goto B4ab775;
case 0x4ab780:goto L4ab780;
case 0x4ab781:c.instructions+=13;goto B4ab781;
case 0x4ab782:c.instructions+=12;goto B4ab782;
case 0x4ab783:c.instructions+=11;goto B4ab783;
case 0x4ab784:c.instructions+=10;goto B4ab784;
case 0x4ab785:c.instructions+=9;goto B4ab785;
case 0x4ab789:c.instructions+=8;goto B4ab789;
case 0x4ab78c:c.instructions+=7;goto B4ab78c;
case 0x4ab792:c.instructions+=6;goto B4ab792;
case 0x4ab795:c.instructions+=5;goto B4ab795;
case 0x4ab797:c.instructions+=4;goto B4ab797;
case 0x4ab799:c.instructions+=3;goto B4ab799;
case 0x4ab79d:c.instructions+=2;goto B4ab79d;
case 0x4ab7a1:c.instructions+=1;goto B4ab7a1;
case 0x4ab7a3:goto L4ab7a3;
case 0x4ab7a6:c.instructions+=2;goto B4ab7a6;
case 0x4ab7a9:c.instructions+=1;goto B4ab7a9;
case 0x4ab7ab:goto L4ab7ab;
case 0x4ab7ae:goto L4ab7ae;
case 0x4ab7b3:goto L4ab7b3;
case 0x4ab7b5:c.instructions+=3;goto B4ab7b5;
case 0x4ab7b8:c.instructions+=2;goto B4ab7b8;
case 0x4ab7ba:c.instructions+=1;goto B4ab7ba;
case 0x4ab7c0:goto L4ab7c0;
case 0x4ab7c3:c.instructions+=4;goto B4ab7c3;
case 0x4ab7c9:c.instructions+=3;goto B4ab7c9;
case 0x4ab7cb:c.instructions+=2;goto B4ab7cb;
case 0x4ab7ce:c.instructions+=1;goto B4ab7ce;
case 0x4ab7d4:goto L4ab7d4;
case 0x4ab7d9:c.instructions+=2;goto B4ab7d9;
case 0x4ab7db:c.instructions+=1;goto B4ab7db;
case 0x4ab7dd:goto L4ab7dd;
case 0x4ab7e2:c.instructions+=2;goto B4ab7e2;
case 0x4ab7e4:c.instructions+=1;goto B4ab7e4;
case 0x4ab7e6:goto L4ab7e6;
case 0x4ab7ec:c.instructions+=1;goto B4ab7ec;
case 0x4ab7ee:goto L4ab7ee;
case 0x4ab7f1:c.instructions+=4;goto B4ab7f1;
case 0x4ab7f5:c.instructions+=3;goto B4ab7f5;
case 0x4ab7f6:c.instructions+=2;goto B4ab7f6;
case 0x4ab7f7:c.instructions+=1;goto B4ab7f7;
case 0x4ab7fc:goto L4ab7fc;
case 0x4ab7ff:c.instructions+=4;goto B4ab7ff;
case 0x4ab803:c.instructions+=3;goto B4ab803;
case 0x4ab804:c.instructions+=2;goto B4ab804;
case 0x4ab805:c.instructions+=1;goto B4ab805;
case 0x4ab80a:goto L4ab80a;
case 0x4ab80d:goto L4ab80d;
case 0x4ab810:c.instructions+=2;goto B4ab810;
case 0x4ab813:c.instructions+=1;goto B4ab813;
case 0x4ab819:goto L4ab819;
case 0x4ab81d:c.instructions+=2;goto B4ab81d;
case 0x4ab81f:c.instructions+=1;goto B4ab81f;
case 0x4ab825:goto L4ab825;
case 0x4ab826:c.instructions+=4;goto B4ab826;
case 0x4ab827:c.instructions+=3;goto B4ab827;
case 0x4ab82c:c.instructions+=2;goto B4ab82c;
case 0x4ab82d:c.instructions+=1;goto B4ab82d;
case 0x4ab832:goto L4ab832;
case 0x4ab835:c.instructions+=1;goto B4ab835;
case 0x4ab83a:goto L4ab83a;
case 0x4ab83d:c.instructions+=4;goto B4ab83d;
case 0x4ab841:c.instructions+=3;goto B4ab841;
case 0x4ab842:c.instructions+=2;goto B4ab842;
case 0x4ab843:c.instructions+=1;goto B4ab843;
case 0x4ab848:goto L4ab848;
case 0x4ab84b:c.instructions+=4;goto B4ab84b;
case 0x4ab84f:c.instructions+=3;goto B4ab84f;
case 0x4ab850:c.instructions+=2;goto B4ab850;
case 0x4ab851:c.instructions+=1;goto B4ab851;
case 0x4ab856:goto L4ab856;
case 0x4ab859:c.instructions+=3;goto B4ab859;
case 0x4ab85c:c.instructions+=2;goto B4ab85c;
case 0x4ab85f:c.instructions+=1;goto B4ab85f;
case 0x4ab861:goto L4ab861;
case 0x4ab865:c.instructions+=2;goto B4ab865;
case 0x4ab867:c.instructions+=1;goto B4ab867;
case 0x4ab869:goto L4ab869;
case 0x4ab86a:c.instructions+=4;goto B4ab86a;
case 0x4ab86b:c.instructions+=3;goto B4ab86b;
case 0x4ab870:c.instructions+=2;goto B4ab870;
case 0x4ab871:c.instructions+=1;goto B4ab871;
case 0x4ab876:goto L4ab876;
case 0x4ab879:c.instructions+=1;goto B4ab879;
case 0x4ab87b:goto L4ab87b;
case 0x4ab87e:c.instructions+=4;goto B4ab87e;
case 0x4ab882:c.instructions+=3;goto B4ab882;
case 0x4ab883:c.instructions+=2;goto B4ab883;
case 0x4ab884:c.instructions+=1;goto B4ab884;
case 0x4ab889:goto L4ab889;
case 0x4ab88c:c.instructions+=4;goto B4ab88c;
case 0x4ab890:c.instructions+=3;goto B4ab890;
case 0x4ab891:c.instructions+=2;goto B4ab891;
case 0x4ab892:c.instructions+=1;goto B4ab892;
case 0x4ab897:goto L4ab897;
case 0x4ab89a:c.instructions+=3;goto B4ab89a;
case 0x4ab89d:c.instructions+=2;goto B4ab89d;
case 0x4ab8a0:c.instructions+=1;goto B4ab8a0;
case 0x4ab8a2:goto L4ab8a2;
case 0x4ab8a6:c.instructions+=2;goto B4ab8a6;
case 0x4ab8a8:c.instructions+=1;goto B4ab8a8;
case 0x4ab8aa:goto L4ab8aa;
case 0x4ab8ab:c.instructions+=4;goto B4ab8ab;
case 0x4ab8ac:c.instructions+=3;goto B4ab8ac;
case 0x4ab8b1:c.instructions+=2;goto B4ab8b1;
case 0x4ab8b2:c.instructions+=1;goto B4ab8b2;
case 0x4ab8b7:goto L4ab8b7;
case 0x4ab8bc:goto L4ab8bc;
case 0x4ab8bd:c.instructions+=3;goto B4ab8bd;
case 0x4ab8c2:c.instructions+=2;goto B4ab8c2;
case 0x4ab8c3:c.instructions+=1;goto B4ab8c3;
case 0x4ab8c8:goto L4ab8c8;
case 0x4ab8cb:c.instructions+=1;goto B4ab8cb;
case 0x4ab8d0:goto L4ab8d0;
case 0x4ab8d1:c.instructions+=2;goto B4ab8d1;
case 0x4ab8d6:c.instructions+=1;goto B4ab8d6;
case 0x4ab8d8:goto L4ab8d8;
case 0x4ab8d9:c.instructions+=1;goto B4ab8d9;
case 0x4ab8de:goto L4ab8de;
case 0x4ab8df:c.instructions+=1;goto B4ab8df;
case 0x4ab8e4:goto L4ab8e4;
case 0x4ab8e7:goto L4ab8e7;
case 0x4ab8ea:c.instructions+=3;goto B4ab8ea;
case 0x4ab8eb:c.instructions+=2;goto B4ab8eb;
case 0x4ab8ec:c.instructions+=1;goto B4ab8ec;
case 0x4ab8f1:goto L4ab8f1;
case 0x4ab8f4:c.instructions+=2;goto B4ab8f4;
case 0x4ab8f6:c.instructions+=1;goto B4ab8f6;
case 0x4ab8f8:goto L4ab8f8;
case 0x4ab8fc:c.instructions+=1;goto B4ab8fc;
case 0x4ab8fe:goto L4ab8fe;
case 0x4ab903:c.instructions+=2;goto B4ab903;
case 0x4ab904:c.instructions+=1;goto B4ab904;
case 0x4ab909:goto L4ab909;
case 0x4ab90c:c.instructions+=2;goto B4ab90c;
case 0x4ab90e:c.instructions+=1;goto B4ab90e;
case 0x4ab910:goto L4ab910;
case 0x4ab912:c.instructions+=3;goto B4ab912;
case 0x4ab917:c.instructions+=2;goto B4ab917;
case 0x4ab918:c.instructions+=1;goto B4ab918;
case 0x4ab91d:goto L4ab91d;
case 0x4ab921:c.instructions+=5;goto B4ab921;
case 0x4ab924:c.instructions+=4;goto B4ab924;
case 0x4ab927:c.instructions+=3;goto B4ab927;
case 0x4ab929:c.instructions+=2;goto B4ab929;
case 0x4ab92a:c.instructions+=1;goto B4ab92a;
case 0x4ab92c:goto L4ab92c;
case 0x4ab931:goto L4ab931;
case 0x4ab933:goto L4ab933;
case 0x4ab938:goto L4ab938;
case 0x4ab93b:goto L4ab93b;
case 0x4ab93f:c.instructions+=1;goto B4ab93f;
case 0x4ab941:goto L4ab941;
case 0x4ab946:c.instructions+=2;goto B4ab946;
case 0x4ab947:c.instructions+=1;goto B4ab947;
case 0x4ab94c:goto L4ab94c;
case 0x4ab94f:c.instructions+=2;goto B4ab94f;
case 0x4ab951:c.instructions+=1;goto B4ab951;
case 0x4ab953:goto L4ab953;
case 0x4ab955:c.instructions+=3;goto B4ab955;
case 0x4ab95a:c.instructions+=2;goto B4ab95a;
case 0x4ab95b:c.instructions+=1;goto B4ab95b;
case 0x4ab960:goto L4ab960;
case 0x4ab961:c.instructions+=1;goto B4ab961;
case 0x4ab966:goto L4ab966;
case 0x4ab969:goto L4ab969;
case 0x4ab96c:c.instructions+=2;goto B4ab96c;
case 0x4ab96e:c.instructions+=1;goto B4ab96e;
case 0x4ab970:goto L4ab970;
case 0x4ab973:c.instructions+=2;goto B4ab973;
case 0x4ab976:c.instructions+=1;goto B4ab976;
case 0x4ab978:goto L4ab978;
case 0x4ab97b:c.instructions+=2;goto B4ab97b;
case 0x4ab97d:c.instructions+=1;goto B4ab97d;
case 0x4ab97f:goto L4ab97f;
case 0x4ab982:c.instructions+=1;goto B4ab982;
case 0x4ab984:goto L4ab984;
case 0x4ab986:c.instructions+=3;goto B4ab986;
case 0x4ab98b:c.instructions+=2;goto B4ab98b;
case 0x4ab98c:c.instructions+=1;goto B4ab98c;
case 0x4ab991:goto L4ab991;
case 0x4ab995:c.instructions+=4;goto B4ab995;
case 0x4ab998:c.instructions+=3;goto B4ab998;
case 0x4ab99b:c.instructions+=2;goto B4ab99b;
case 0x4ab99d:c.instructions+=1;goto B4ab99d;
case 0x4ab99f:goto L4ab99f;
case 0x4ab9a2:c.instructions+=5;goto B4ab9a2;
case 0x4ab9a4:c.instructions+=4;goto B4ab9a4;
case 0x4ab9aa:c.instructions+=3;goto B4ab9aa;
case 0x4ab9ac:c.instructions+=2;goto B4ab9ac;
case 0x4ab9af:c.instructions+=1;goto B4ab9af;
case 0x4ab9b1:goto L4ab9b1;
case 0x4ab9b6:c.instructions+=1;goto B4ab9b6;
case 0x4ab9b8:goto L4ab9b8;
case 0x4ab9bd:goto L4ab9bd;
case 0x4ab9be:c.instructions+=1;goto B4ab9be;
case 0x4ab9c3:goto L4ab9c3;
case 0x4ab9c6:goto L4ab9c6;
case 0x4ab9cd:goto L4ab9cd;
case 0x4ab9d0:c.instructions+=2;goto B4ab9d0;
case 0x4ab9d2:c.instructions+=1;goto B4ab9d2;
case 0x4ab9d4:goto L4ab9d4;
case 0x4ab9d9:c.instructions+=1;goto B4ab9d9;
case 0x4ab9db:goto L4ab9db;
case 0x4ab9df:c.instructions+=2;goto B4ab9df;
case 0x4ab9e4:c.instructions+=1;goto B4ab9e4;
case 0x4ab9e7:goto L4ab9e7;
case 0x4ab9e8:c.instructions+=5;goto B4ab9e8;
case 0x4ab9e9:c.instructions+=4;goto B4ab9e9;
case 0x4ab9ea:c.instructions+=3;goto B4ab9ea;
case 0x4ab9eb:c.instructions+=2;goto B4ab9eb;
case 0x4ab9ec:c.instructions+=1;goto B4ab9ec;
case 0x4ab9f0:goto L4ab9f0;
case 0x4ab9f5:c.instructions+=2;goto B4ab9f5;
case 0x4ab9f8:c.instructions+=1;goto B4ab9f8;
case 0x4ab9fa:goto L4ab9fa;
case 0x4ab9fb:c.instructions+=1;goto B4ab9fb;
case 0x4ab9fd:goto L4ab9fd;
case 0x4ab9ff:c.instructions+=2;goto B4ab9ff;
case 0x4aba01:c.instructions+=1;goto B4aba01;
case 0x4aba06:goto L4aba06;
case 0x4aba09:c.instructions+=1;goto B4aba09;
case 0x4aba0c:goto L4aba0c;
case 0x4aba10:c.instructions+=1;goto B4aba10;
case 0x4aba12:goto L4aba12;
case 0x4aba14:c.instructions+=2;goto B4aba14;
case 0x4aba16:c.instructions+=1;goto B4aba16;
case 0x4aba1b:goto L4aba1b;
case 0x4aba1e:c.instructions+=1;goto B4aba1e;
case 0x4aba21:goto L4aba21;
case 0x4aba23:c.instructions+=2;goto B4aba23;
case 0x4aba25:c.instructions+=1;goto B4aba25;
case 0x4aba2a:goto L4aba2a;
case 0x4aba2d:goto L4aba2d;
case 0x4aba30:goto L4aba30;
case 0x4aba31:c.instructions+=5;goto B4aba31;
case 0x4aba33:c.instructions+=4;goto B4aba33;
case 0x4aba36:c.instructions+=3;goto B4aba36;
case 0x4aba39:c.instructions+=2;goto B4aba39;
case 0x4aba3c:c.instructions+=1;goto B4aba3c;
case 0x4aba42:goto L4aba42;
case 0x4aba49:goto L4aba49;
case 0x4aba4c:c.instructions+=4;goto B4aba4c;
case 0x4aba4e:c.instructions+=3;goto B4aba4e;
case 0x4aba53:c.instructions+=2;goto B4aba53;
case 0x4aba54:c.instructions+=1;goto B4aba54;
case 0x4aba59:goto L4aba59;
case 0x4aba5c:c.instructions+=4;goto B4aba5c;
case 0x4aba5e:c.instructions+=3;goto B4aba5e;
case 0x4aba63:c.instructions+=2;goto B4aba63;
case 0x4aba64:c.instructions+=1;goto B4aba64;
case 0x4aba69:goto L4aba69;
case 0x4aba6c:c.instructions+=2;goto B4aba6c;
case 0x4aba6e:c.instructions+=1;goto B4aba6e;
case 0x4aba70:goto L4aba70;
case 0x4aba72:c.instructions+=3;goto B4aba72;
case 0x4aba77:c.instructions+=2;goto B4aba77;
case 0x4aba78:c.instructions+=1;goto B4aba78;
case 0x4aba7d:goto L4aba7d;
case 0x4aba80:c.instructions+=2;goto B4aba80;
case 0x4aba81:c.instructions+=1;goto B4aba81;
case 0x4aba84:goto L4aba84;
case 0x4aba87:c.instructions+=4;goto B4aba87;
case 0x4aba89:c.instructions+=3;goto B4aba89;
case 0x4aba8e:c.instructions+=2;goto B4aba8e;
case 0x4aba8f:c.instructions+=1;goto B4aba8f;
case 0x4aba94:goto L4aba94;
case 0x4aba97:c.instructions+=4;goto B4aba97;
case 0x4aba99:c.instructions+=3;goto B4aba99;
case 0x4aba9e:c.instructions+=2;goto B4aba9e;
case 0x4aba9f:c.instructions+=1;goto B4aba9f;
case 0x4abaa4:goto L4abaa4;
case 0x4abaa7:c.instructions+=1;goto B4abaa7;
case 0x4abaa9:goto L4abaa9;
case 0x4abaac:c.instructions+=4;goto B4abaac;
case 0x4abaae:c.instructions+=3;goto B4abaae;
case 0x4abab3:c.instructions+=2;goto B4abab3;
case 0x4abab4:c.instructions+=1;goto B4abab4;
case 0x4abab9:goto L4abab9;
case 0x4ababc:goto L4ababc;
case 0x4ababe:c.instructions+=1;goto B4ababe;
case 0x4abac0:goto L4abac0;
case 0x4abac2:c.instructions+=3;goto B4abac2;
case 0x4abac7:c.instructions+=2;goto B4abac7;
case 0x4abac8:c.instructions+=1;goto B4abac8;
case 0x4abacd:goto L4abacd;
case 0x4abad0:goto L4abad0;
case 0x4abad1:c.instructions+=1;goto B4abad1;
case 0x4abaf0:goto L4abaf0;
case 0x4abaf3:c.instructions+=6;goto B4abaf3;
case 0x4abaf4:c.instructions+=5;goto B4abaf4;
case 0x4abaf6:c.instructions+=4;goto B4abaf6;
case 0x4abaf9:c.instructions+=3;goto B4abaf9;
case 0x4abafc:c.instructions+=2;goto B4abafc;
case 0x4abaff:c.instructions+=1;goto B4abaff;
case 0x4abb05:goto L4abb05;
case 0x4abb06:c.instructions+=1;goto B4abb06;
case 0x4abb0d:goto L4abb0d;
case 0x4abb10:c.instructions+=5;goto B4abb10;
case 0x4abb12:c.instructions+=4;goto B4abb12;
case 0x4abb13:c.instructions+=3;goto B4abb13;
case 0x4abb18:c.instructions+=2;goto B4abb18;
case 0x4abb19:c.instructions+=1;goto B4abb19;
case 0x4abb1e:goto L4abb1e;
case 0x4abb24:c.instructions+=5;goto B4abb24;
case 0x4abb27:c.instructions+=4;goto B4abb27;
case 0x4abb28:c.instructions+=3;goto B4abb28;
case 0x4abb2a:c.instructions+=2;goto B4abb2a;
case 0x4abb2f:c.instructions+=1;goto B4abb2f;
case 0x4abb31:goto L4abb31;
case 0x4abb32:c.instructions+=2;goto B4abb32;
case 0x4abb37:c.instructions+=1;goto B4abb37;
case 0x4abb3c:goto L4abb3c;
case 0x4abb40:c.instructions+=1;goto B4abb40;
case 0x4abb42:goto L4abb42;
case 0x4abb46:c.instructions+=1;goto B4abb46;
case 0x4abb48:goto L4abb48;
case 0x4abb49:c.instructions+=2;goto B4abb49;
case 0x4abb4b:c.instructions+=1;goto B4abb4b;
case 0x4abb4d:goto L4abb4d;
case 0x4abb4f:goto L4abb4f;
case 0x4abb51:c.instructions+=1;goto B4abb51;
case 0x4abb55:goto L4abb55;
case 0x4abb59:c.instructions+=3;goto B4abb59;
case 0x4abb5a:c.instructions+=2;goto B4abb5a;
case 0x4abb5b:c.instructions+=1;goto B4abb5b;
case 0x4abb60:goto L4abb60;
case 0x4abb63:c.instructions+=4;goto B4abb63;
case 0x4abb66:c.instructions+=3;goto B4abb66;
case 0x4abb67:c.instructions+=2;goto B4abb67;
case 0x4abb68:c.instructions+=1;goto B4abb68;
case 0x4abb6d:goto L4abb6d;
case 0x4abb70:c.instructions+=3;goto B4abb70;
case 0x4abb73:c.instructions+=2;goto B4abb73;
case 0x4abb74:c.instructions+=1;goto B4abb74;
case 0x4abb79:goto L4abb79;
case 0x4abb7c:c.instructions+=3;goto B4abb7c;
case 0x4abb7f:c.instructions+=2;goto B4abb7f;
case 0x4abb80:c.instructions+=1;goto B4abb80;
case 0x4abb85:goto L4abb85;
case 0x4abb88:c.instructions+=3;goto B4abb88;
case 0x4abb8b:c.instructions+=2;goto B4abb8b;
case 0x4abb8c:c.instructions+=1;goto B4abb8c;
case 0x4abb91:goto L4abb91;
case 0x4abb94:c.instructions+=3;goto B4abb94;
case 0x4abb97:c.instructions+=2;goto B4abb97;
case 0x4abb98:c.instructions+=1;goto B4abb98;
case 0x4abb9d:goto L4abb9d;
case 0x4abba0:c.instructions+=4;goto B4abba0;
case 0x4abba3:c.instructions+=3;goto B4abba3;
case 0x4abba8:c.instructions+=2;goto B4abba8;
case 0x4abba9:c.instructions+=1;goto B4abba9;
case 0x4abbae:goto L4abbae;
case 0x4abbb1:c.instructions+=3;goto B4abbb1;
case 0x4abbb3:c.instructions+=2;goto B4abbb3;
case 0x4abbb4:c.instructions+=1;goto B4abbb4;
case 0x4abbb6:goto L4abbb6;
case 0x4abbbb:c.instructions+=1;goto B4abbbb;
case 0x4abbc0:goto L4abbc0;
case 0x4abbc3:c.instructions+=4;goto B4abbc3;
case 0x4abbc6:c.instructions+=3;goto B4abbc6;
case 0x4abbc9:c.instructions+=2;goto B4abbc9;
case 0x4abbca:c.instructions+=1;goto B4abbca;
case 0x4abbcf:goto L4abbcf;
case 0x4abbd1:c.instructions+=1;goto B4abbd1;
case 0x4abbd3:goto L4abbd3;
case 0x4abbd5:c.instructions+=2;goto B4abbd5;
case 0x4abbd7:c.instructions+=1;goto B4abbd7;
case 0x4abbdc:goto L4abbdc;
case 0x4abbe0:c.instructions+=4;goto B4abbe0;
case 0x4abbe1:c.instructions+=3;goto B4abbe1;
case 0x4abbe3:c.instructions+=2;goto B4abbe3;
case 0x4abbe5:c.instructions+=1;goto B4abbe5;
case 0x4abbea:goto L4abbea;
case 0x4abbed:c.instructions+=4;goto B4abbed;
case 0x4abbf0:c.instructions+=3;goto B4abbf0;
case 0x4abbf5:c.instructions+=2;goto B4abbf5;
case 0x4abbf6:c.instructions+=1;goto B4abbf6;
case 0x4abbfb:goto L4abbfb;
case 0x4abbfe:c.instructions+=2;goto B4abbfe;
case 0x4abc00:c.instructions+=1;goto B4abc00;
case 0x4abc02:goto L4abc02;
case 0x4abc04:c.instructions+=3;goto B4abc04;
case 0x4abc09:c.instructions+=2;goto B4abc09;
case 0x4abc0a:c.instructions+=1;goto B4abc0a;
case 0x4abc0f:goto L4abc0f;
case 0x4abc12:goto L4abc12;
case 0x4abc15:c.instructions+=4;goto B4abc15;
case 0x4abc18:c.instructions+=3;goto B4abc18;
case 0x4abc1d:c.instructions+=2;goto B4abc1d;
case 0x4abc1e:c.instructions+=1;goto B4abc1e;
case 0x4abc23:goto L4abc23;
case 0x4abc26:c.instructions+=2;goto B4abc26;
case 0x4abc28:c.instructions+=1;goto B4abc28;
case 0x4abc2a:goto L4abc2a;
case 0x4abc2c:c.instructions+=3;goto B4abc2c;
case 0x4abc31:c.instructions+=2;goto B4abc31;
case 0x4abc32:c.instructions+=1;goto B4abc32;
case 0x4abc37:goto L4abc37;
case 0x4abc3a:goto L4abc3a;
case 0x4abc3d:c.instructions+=4;goto B4abc3d;
case 0x4abc40:c.instructions+=3;goto B4abc40;
case 0x4abc45:c.instructions+=2;goto B4abc45;
case 0x4abc46:c.instructions+=1;goto B4abc46;
case 0x4abc4b:goto L4abc4b;
case 0x4abc4e:c.instructions+=2;goto B4abc4e;
case 0x4abc50:c.instructions+=1;goto B4abc50;
case 0x4abc52:goto L4abc52;
case 0x4abc54:c.instructions+=3;goto B4abc54;
case 0x4abc59:c.instructions+=2;goto B4abc59;
case 0x4abc5a:c.instructions+=1;goto B4abc5a;
case 0x4abc5f:goto L4abc5f;
case 0x4abc62:goto L4abc62;
case 0x4abc65:c.instructions+=4;goto B4abc65;
case 0x4abc67:c.instructions+=3;goto B4abc67;
case 0x4abc6c:c.instructions+=2;goto B4abc6c;
case 0x4abc6d:c.instructions+=1;goto B4abc6d;
case 0x4abc72:goto L4abc72;
case 0x4abc75:c.instructions+=2;goto B4abc75;
case 0x4abc77:c.instructions+=1;goto B4abc77;
case 0x4abc7d:goto L4abc7d;
case 0x4abc7f:c.instructions+=3;goto B4abc7f;
case 0x4abc84:c.instructions+=2;goto B4abc84;
case 0x4abc85:c.instructions+=1;goto B4abc85;
case 0x4abc8a:goto L4abc8a;
case 0x4abc8d:c.instructions+=4;goto B4abc8d;
case 0x4abc8e:c.instructions+=3;goto B4abc8e;
case 0x4abc8f:c.instructions+=2;goto B4abc8f;
case 0x4abc92:c.instructions+=1;goto B4abc92;
case 0x4abc95:goto L4abc95;
case 0x4abc98:c.instructions+=4;goto B4abc98;
case 0x4abc9b:c.instructions+=3;goto B4abc9b;
case 0x4abca0:c.instructions+=2;goto B4abca0;
case 0x4abca1:c.instructions+=1;goto B4abca1;
case 0x4abca6:goto L4abca6;
case 0x4abca9:c.instructions+=4;goto B4abca9;
case 0x4abcab:c.instructions+=3;goto B4abcab;
case 0x4abcb0:c.instructions+=2;goto B4abcb0;
case 0x4abcb1:c.instructions+=1;goto B4abcb1;
case 0x4abcb6:goto L4abcb6;
case 0x4abcb9:c.instructions+=3;goto B4abcb9;
case 0x4abcbc:c.instructions+=2;goto B4abcbc;
case 0x4abcbd:c.instructions+=1;goto B4abcbd;
case 0x4abcc2:goto L4abcc2;
case 0x4abcc5:c.instructions+=3;goto B4abcc5;
case 0x4abcc8:c.instructions+=2;goto B4abcc8;
case 0x4abcc9:c.instructions+=1;goto B4abcc9;
case 0x4abcce:goto L4abcce;
case 0x4abcd1:c.instructions+=3;goto B4abcd1;
case 0x4abcd4:c.instructions+=2;goto B4abcd4;
case 0x4abcd5:c.instructions+=1;goto B4abcd5;
case 0x4abcda:goto L4abcda;
case 0x4abcdd:c.instructions+=4;goto B4abcdd;
case 0x4abce0:c.instructions+=3;goto B4abce0;
case 0x4abce5:c.instructions+=2;goto B4abce5;
case 0x4abce6:c.instructions+=1;goto B4abce6;
case 0x4abceb:goto L4abceb;
case 0x4abcee:c.instructions+=2;goto B4abcee;
case 0x4abcf0:c.instructions+=1;goto B4abcf0;
case 0x4abcf2:goto L4abcf2;
case 0x4abcf4:c.instructions+=3;goto B4abcf4;
case 0x4abcf9:c.instructions+=2;goto B4abcf9;
case 0x4abcfa:c.instructions+=1;goto B4abcfa;
case 0x4abcff:goto L4abcff;
case 0x4abd02:goto L4abd02;
case 0x4abd05:c.instructions+=4;goto B4abd05;
case 0x4abd08:c.instructions+=3;goto B4abd08;
case 0x4abd0d:c.instructions+=2;goto B4abd0d;
case 0x4abd0e:c.instructions+=1;goto B4abd0e;
case 0x4abd13:goto L4abd13;
case 0x4abd16:c.instructions+=2;goto B4abd16;
case 0x4abd18:c.instructions+=1;goto B4abd18;
case 0x4abd1a:goto L4abd1a;
case 0x4abd1c:c.instructions+=3;goto B4abd1c;
case 0x4abd21:c.instructions+=2;goto B4abd21;
case 0x4abd22:c.instructions+=1;goto B4abd22;
case 0x4abd27:goto L4abd27;
case 0x4abd2a:goto L4abd2a;
case 0x4abd2d:c.instructions+=4;goto B4abd2d;
case 0x4abd30:c.instructions+=3;goto B4abd30;
case 0x4abd35:c.instructions+=2;goto B4abd35;
case 0x4abd36:c.instructions+=1;goto B4abd36;
case 0x4abd3b:goto L4abd3b;
case 0x4abd3e:c.instructions+=2;goto B4abd3e;
case 0x4abd40:c.instructions+=1;goto B4abd40;
case 0x4abd42:goto L4abd42;
case 0x4abd44:c.instructions+=3;goto B4abd44;
case 0x4abd49:c.instructions+=2;goto B4abd49;
case 0x4abd4a:c.instructions+=1;goto B4abd4a;
case 0x4abd4f:goto L4abd4f;
case 0x4abd52:goto L4abd52;
case 0x4abd55:c.instructions+=4;goto B4abd55;
case 0x4abd57:c.instructions+=3;goto B4abd57;
case 0x4abd5c:c.instructions+=2;goto B4abd5c;
case 0x4abd5d:c.instructions+=1;goto B4abd5d;
case 0x4abd62:goto L4abd62;
case 0x4abd65:c.instructions+=2;goto B4abd65;
case 0x4abd67:c.instructions+=1;goto B4abd67;
case 0x4abd69:goto L4abd69;
case 0x4abd6b:c.instructions+=3;goto B4abd6b;
case 0x4abd70:c.instructions+=2;goto B4abd70;
case 0x4abd71:c.instructions+=1;goto B4abd71;
case 0x4abd76:goto L4abd76;
case 0x4abd79:goto L4abd79;
case 0x4abd7c:c.instructions+=6;goto B4abd7c;
case 0x4abd7f:c.instructions+=5;goto B4abd7f;
case 0x4abd82:c.instructions+=4;goto B4abd82;
case 0x4abd83:c.instructions+=3;goto B4abd83;
case 0x4abd88:c.instructions+=2;goto B4abd88;
case 0x4abd89:c.instructions+=1;goto B4abd89;
case 0x4abd8e:goto L4abd8e;
case 0x4abd91:c.instructions+=4;goto B4abd91;
case 0x4abd92:c.instructions+=3;goto B4abd92;
case 0x4abd93:c.instructions+=2;goto B4abd93;
case 0x4abd96:c.instructions+=1;goto B4abd96;
case 0x4abd99:goto L4abd99;
case 0x4abd9c:c.instructions+=4;goto B4abd9c;
case 0x4abd9e:c.instructions+=3;goto B4abd9e;
case 0x4abda3:c.instructions+=2;goto B4abda3;
case 0x4abda4:c.instructions+=1;goto B4abda4;
case 0x4abda9:goto L4abda9;
case 0x4abdac:c.instructions+=3;goto B4abdac;
case 0x4abdaf:c.instructions+=2;goto B4abdaf;
case 0x4abdb0:c.instructions+=1;goto B4abdb0;
case 0x4abdb5:goto L4abdb5;
case 0x4abdb8:c.instructions+=4;goto B4abdb8;
case 0x4abdbb:c.instructions+=3;goto B4abdbb;
case 0x4abdc0:c.instructions+=2;goto B4abdc0;
case 0x4abdc1:c.instructions+=1;goto B4abdc1;
case 0x4abdc6:goto L4abdc6;
case 0x4abdc9:c.instructions+=2;goto B4abdc9;
case 0x4abdcb:c.instructions+=1;goto B4abdcb;
case 0x4abdcd:goto L4abdcd;
case 0x4abdcf:c.instructions+=3;goto B4abdcf;
case 0x4abdd4:c.instructions+=2;goto B4abdd4;
case 0x4abdd5:c.instructions+=1;goto B4abdd5;
case 0x4abdda:goto L4abdda;
case 0x4abddd:goto L4abddd;
case 0x4abde0:c.instructions+=4;goto B4abde0;
case 0x4abde3:c.instructions+=3;goto B4abde3;
case 0x4abde8:c.instructions+=2;goto B4abde8;
case 0x4abde9:c.instructions+=1;goto B4abde9;
case 0x4abdee:goto L4abdee;
case 0x4abdf1:c.instructions+=2;goto B4abdf1;
case 0x4abdf3:c.instructions+=1;goto B4abdf3;
case 0x4abdf5:goto L4abdf5;
case 0x4abdf7:c.instructions+=3;goto B4abdf7;
case 0x4abdfc:c.instructions+=2;goto B4abdfc;
case 0x4abdfd:c.instructions+=1;goto B4abdfd;
case 0x4abe02:goto L4abe02;
case 0x4abe05:goto L4abe05;
case 0x4abe08:c.instructions+=4;goto B4abe08;
case 0x4abe0a:c.instructions+=3;goto B4abe0a;
case 0x4abe0f:c.instructions+=2;goto B4abe0f;
case 0x4abe10:c.instructions+=1;goto B4abe10;
case 0x4abe15:goto L4abe15;
case 0x4abe18:c.instructions+=2;goto B4abe18;
case 0x4abe1a:c.instructions+=1;goto B4abe1a;
case 0x4abe1c:goto L4abe1c;
case 0x4abe1e:c.instructions+=3;goto B4abe1e;
case 0x4abe23:c.instructions+=2;goto B4abe23;
case 0x4abe24:c.instructions+=1;goto B4abe24;
case 0x4abe29:goto L4abe29;
case 0x4abe2c:goto L4abe2c;
case 0x4abe2d:goto L4abe2d;
case 0x4abe2e:c.instructions+=2;goto B4abe2e;
case 0x4abe31:c.instructions+=1;goto B4abe31;
case 0x4abe50:goto L4abe50;
case 0x4abe54:c.instructions+=3;goto B4abe54;
case 0x4abe55:c.instructions+=2;goto B4abe55;
case 0x4abe58:c.instructions+=1;goto B4abe58;
case 0x4abe5a:goto L4abe5a;
case 0x4abe61:goto L4abe61;
case 0x4abe66:c.instructions+=1;goto B4abe66;
case 0x4abe67:goto L4abe67;
case 0x4abe6c:c.instructions+=1;goto B4abe6c;
case 0x4abe6d:goto L4abe6d;
case 0x4abe72:c.instructions+=1;goto B4abe72;
case 0x4abe73:goto L4abe73;
case 0x4abe78:c.instructions+=1;goto B4abe78;
case 0x4abe79:goto L4abe79;
case 0x4abe7e:c.instructions+=1;goto B4abe7e;
case 0x4abe7f:goto L4abe7f;
case 0x4abe84:c.instructions+=1;goto B4abe84;
case 0x4abe85:goto L4abe85;
case 0x4abe8a:c.instructions+=1;goto B4abe8a;
case 0x4abe8b:goto L4abe8b;
case 0x4abe90:c.instructions+=1;goto B4abe90;
case 0x4abe91:goto L4abe91;
case 0x4abe96:c.instructions+=1;goto B4abe96;
case 0x4abe97:goto L4abe97;
case 0x4abe9c:c.instructions+=1;goto B4abe9c;
case 0x4abe9d:goto L4abe9d;
case 0x4abea2:c.instructions+=1;goto B4abea2;
case 0x4abea3:goto L4abea3;
case 0x4abea8:c.instructions+=1;goto B4abea8;
case 0x4abea9:goto L4abea9;
case 0x4abeae:c.instructions+=1;goto B4abeae;
case 0x4abeaf:goto L4abeaf;
case 0x4abeb4:c.instructions+=1;goto B4abeb4;
case 0x4abeb5:goto L4abeb5;
case 0x4abeba:c.instructions+=1;goto B4abeba;
case 0x4abebb:goto L4abebb;
case 0x4abec0:c.instructions+=1;goto B4abec0;
case 0x4abec1:goto L4abec1;
case 0x4abec6:c.instructions+=1;goto B4abec6;
case 0x4abec7:goto L4abec7;
case 0x4abec9:c.instructions+=1;goto B4abec9;
case 0x4abf20:goto L4abf20;
case 0x4abf24:c.instructions+=3;goto B4abf24;
case 0x4abf25:c.instructions+=2;goto B4abf25;
case 0x4abf28:c.instructions+=1;goto B4abf28;
case 0x4abf2a:goto L4abf2a;
case 0x4abf31:c.instructions+=1;goto B4abf31;
case 0x4abf38:goto L4abf38;
case 0x4abf3a:c.instructions+=1;goto B4abf3a;
case 0x4abf3b:goto L4abf3b;
case 0x4abf3d:c.instructions+=1;goto B4abf3d;
case 0x4abf3e:goto L4abf3e;
case 0x4abf40:c.instructions+=1;goto B4abf40;
case 0x4abf41:goto L4abf41;
case 0x4abf43:c.instructions+=1;goto B4abf43;
case 0x4abf44:goto L4abf44;
case 0x4abf46:c.instructions+=1;goto B4abf46;
case 0x4abf70:goto L4abf70;
case 0x4abf74:c.instructions+=2;goto B4abf74;
case 0x4abf77:c.instructions+=1;goto B4abf77;
case 0x4abf79:goto L4abf79;
case 0x4abf80:goto L4abf80;
case 0x4abf85:c.instructions+=1;goto B4abf85;
case 0x4abf87:goto L4abf87;
case 0x4abf8c:c.instructions+=1;goto B4abf8c;
case 0x4abf8e:goto L4abf8e;
case 0x4abf93:c.instructions+=1;goto B4abf93;
case 0x4abf95:goto L4abf95;
case 0x4abf9a:c.instructions+=1;goto B4abf9a;
case 0x4abf9c:goto L4abf9c;
case 0x4abfa1:goto L4abfa1;
case 0x4abfa5:c.instructions+=1;goto B4abfa5;
case 0x4abfa7:goto L4abfa7;
case 0x4abfac:c.instructions+=1;goto B4abfac;
case 0x4abfad:goto L4abfad;
case 0x4abfb1:c.instructions+=1;goto B4abfb1;
case 0x4abfb3:goto L4abfb3;
case 0x4abfb8:goto L4abfb8;
case 0x4abfe0:goto L4abfe0;
case 0x4abfe4:c.instructions+=3;goto B4abfe4;
case 0x4abfe7:c.instructions+=2;goto B4abfe7;
case 0x4abfec:c.instructions+=1;goto B4abfec;
case 0x4abfee:goto L4abfee;
case 0x4abff5:goto L4abff5;
case 0x4abffa:c.instructions+=1;goto B4abffa;
case 0x4abffb:goto L4abffb;
default:missing_instruction(c.pc);}
B4ab004:L4ab004:{c.instructions+=3;NFSU2_TR(0x4ab004);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ab008:{NFSU2_TR(0x4ab008);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ab00a:{NFSU2_TR(0x4ab00a);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4ab02e;}}
}
B4ab00c:L4ab00c:{c.instructions+=6;NFSU2_TR(0x4ab00c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ab00f:{NFSU2_TR(0x4ab00f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B4ab012:{NFSU2_TR(0x4ab012);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B4ab015:{NFSU2_TR(0x4ab015);
u8 U[4];
w4(U+0,u32(0x790a48ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ab01a:{NFSU2_TR(0x4ab01a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ab01b:{NFSU2_TR(0x4ab01b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ab020ull));
TAIL_STATIC(0x537be0u,537);
}
B4ab020:L4ab020:{c.instructions+=3;NFSU2_TR(0x4ab020);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ab023:{NFSU2_TR(0x4ab023);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ab024:{NFSU2_TR(0x4ab024);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ab029ull));
TAIL_STATIC(0x50ca50u,50c);
}
B4ab029:L4ab029:{c.instructions+=2;NFSU2_TR(0x4ab029);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B4ab02c:{NFSU2_TR(0x4ab02c);
{goto L4ab046;}
}
B4ab02e:L4ab02e:{c.instructions+=4;NFSU2_TR(0x4ab02e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4ab031:{NFSU2_TR(0x4ab031);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4ab033:{NFSU2_TR(0x4ab033);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ab034:{NFSU2_TR(0x4ab034);
{goto L4ab03a;}
}
B4ab036:L4ab036:{c.instructions+=2;NFSU2_TR(0x4ab036);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ab039:{NFSU2_TR(0x4ab039);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ab03a:L4ab03a:{c.instructions+=1;NFSU2_TR(0x4ab03a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ab03full));
TAIL_STATIC(0x50ca00u,50c);
}
B4ab03f:L4ab03f:{c.instructions+=3;NFSU2_TR(0x4ab03f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4ab042:{NFSU2_TR(0x4ab042);
u8 U[1];
w1(U+0,u8(u32(r1(R+12))&u32(r1(R+12))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4ab044:{NFSU2_TR(0x4ab044);
if(r1(R+518)){{goto L4ab069;}}
}
B4ab046:L4ab046:{c.instructions+=3;NFSU2_TR(0x4ab046);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4ab049:{NFSU2_TR(0x4ab049);
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
B4ab04b:{NFSU2_TR(0x4ab04b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ab0a8;}}
}
B4ab04d:L4ab04d:{c.instructions+=6;NFSU2_TR(0x4ab04d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ab050:{NFSU2_TR(0x4ab050);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ab052:{NFSU2_TR(0x4ab052);
u8 U[4];
w4(U+0,u32(0x78f970ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ab057:{NFSU2_TR(0x4ab057);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ab058:{NFSU2_TR(0x4ab058);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4ab05c:{NFSU2_TR(0x4ab05c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ab061ull));
TAIL_STATIC(0x51cf70u,51c);
}
B4ab061:L4ab061:{c.instructions+=4;NFSU2_TR(0x4ab061);
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
B4ab064:{NFSU2_TR(0x4ab064);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ab065:{NFSU2_TR(0x4ab065);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4ab066:{NFSU2_TR(0x4ab066);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ab069:L4ab069:{c.instructions+=3;NFSU2_TR(0x4ab069);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4ab06c:{NFSU2_TR(0x4ab06c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ab06d:{NFSU2_TR(0x4ab06d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ab072ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4ab072:L4ab072:{c.instructions+=4;NFSU2_TR(0x4ab072);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4ab075:{NFSU2_TR(0x4ab075);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4ab078:{NFSU2_TR(0x4ab078);
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
B4ab07a:{NFSU2_TR(0x4ab07a);
if(r1(R+518)){{goto L4ab0a8;}}
}
B4ab07c:L4ab07c:{c.instructions+=4;NFSU2_TR(0x4ab07c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ab07f:{NFSU2_TR(0x4ab07f);
u8 U[4];
w4(U+0,u32(0x790a40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ab084:{NFSU2_TR(0x4ab084);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ab085:{NFSU2_TR(0x4ab085);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ab08aull));
TAIL_STATIC(0x51d040u,51d);
}
B4ab08a:L4ab08a:{c.instructions+=3;NFSU2_TR(0x4ab08a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4ab08d:{NFSU2_TR(0x4ab08d);
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
B4ab08f:{NFSU2_TR(0x4ab08f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ab0a8;}}
}
B4ab091:L4ab091:{c.instructions+=5;NFSU2_TR(0x4ab091);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ab094:{NFSU2_TR(0x4ab094);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ab096:{NFSU2_TR(0x4ab096);
u8 U[4];
w4(U+0,u32(0x790a40ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ab09b:{NFSU2_TR(0x4ab09b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ab09c:{NFSU2_TR(0x4ab09c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ab0a1ull));
TAIL_STATIC(0x51cf70u,51c);
}
B4ab0a1:L4ab0a1:{c.instructions+=2;NFSU2_TR(0x4ab0a1);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4ab0a5:{NFSU2_TR(0x4ab0a5);
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
B4ab0a8:L4ab0a8:{c.instructions+=3;NFSU2_TR(0x4ab0a8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ab0a9:{NFSU2_TR(0x4ab0a9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4ab0aa:{NFSU2_TR(0x4ab0aa);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ab0b0:L4ab0b0:{c.instructions+=30;NFSU2_TR(0x4ab0b0);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ab0b4:{NFSU2_TR(0x4ab0b4);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4ab0b8:{NFSU2_TR(0x4ab0b8);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4ab0ba:{NFSU2_TR(0x4ab0ba);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ab0be:{NFSU2_TR(0x4ab0be);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4ab0c0:{NFSU2_TR(0x4ab0c0);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4ab0c4:{NFSU2_TR(0x4ab0c4);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4ab0c6:{NFSU2_TR(0x4ab0c6);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4ab0c8:{NFSU2_TR(0x4ab0c8);
{u32 ea_=u32(r4(R+8)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4ab0cb:{NFSU2_TR(0x4ab0cb);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4ab0ce:{NFSU2_TR(0x4ab0ce);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4ab0d2:{NFSU2_TR(0x4ab0d2);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4ab0d5:{NFSU2_TR(0x4ab0d5);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4ab0d8:{NFSU2_TR(0x4ab0d8);
{u32 ea_=u32(r4(R+8)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4ab0db:{NFSU2_TR(0x4ab0db);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4ab0de:{NFSU2_TR(0x4ab0de);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4ab0e2:{NFSU2_TR(0x4ab0e2);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4ab0e5:{NFSU2_TR(0x4ab0e5);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4ab0e8:{NFSU2_TR(0x4ab0e8);
{u32 ea_=u32(r4(R+8)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4ab0eb:{NFSU2_TR(0x4ab0eb);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4ab0ee:{NFSU2_TR(0x4ab0ee);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4ab0f2:{NFSU2_TR(0x4ab0f2);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4ab0f5:{NFSU2_TR(0x4ab0f5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4ab0f7:{NFSU2_TR(0x4ab0f7);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ab0fb:{NFSU2_TR(0x4ab0fb);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4ab0fe:{NFSU2_TR(0x4ab0fe);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4ab102:{NFSU2_TR(0x4ab102);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4ab108:{NFSU2_TR(0x4ab108);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4ab10a:{NFSU2_TR(0x4ab10a);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4ab10d:{NFSU2_TR(0x4ab10d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ab1df;}}
}
B4ab113:L4ab113:{c.instructions+=6;NFSU2_TR(0x4ab113);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4ab117:{NFSU2_TR(0x4ab117);
{u32 ea_=u32(u32(7882052u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4ab11d:{NFSU2_TR(0x4ab11d);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4ab121:{NFSU2_TR(0x4ab121);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4ab123:{NFSU2_TR(0x4ab123);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4ab126:{NFSU2_TR(0x4ab126);
if(r1(R+514)){{goto L4ab130;}}
}
B4ab128:L4ab128:{c.instructions+=2;NFSU2_TR(0x4ab128);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4ab12a:{NFSU2_TR(0x4ab12a);
{u32 ea_=u32(u32(7882052u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4ab130:L4ab130:{c.instructions+=8;NFSU2_TR(0x4ab130);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4ab133:{NFSU2_TR(0x4ab133);
{u32 ea_=u32(r4(R+4));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4ab135:{NFSU2_TR(0x4ab135);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ab139:{NFSU2_TR(0x4ab139);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4ab13d:{NFSU2_TR(0x4ab13d);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4ab143:{NFSU2_TR(0x4ab143);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4ab145:{NFSU2_TR(0x4ab145);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4ab148:{NFSU2_TR(0x4ab148);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ab1ea;}}
}
B4ab14e:L4ab14e:{c.instructions+=6;NFSU2_TR(0x4ab14e);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4ab152:{NFSU2_TR(0x4ab152);
{u32 ea_=u32(u32(7882052u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4ab158:{NFSU2_TR(0x4ab158);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4ab15c:{NFSU2_TR(0x4ab15c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4ab15e:{NFSU2_TR(0x4ab15e);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4ab161:{NFSU2_TR(0x4ab161);
if(r1(R+514)){{goto L4ab16b;}}
}
B4ab163:L4ab163:{c.instructions+=2;NFSU2_TR(0x4ab163);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4ab165:{NFSU2_TR(0x4ab165);
{u32 ea_=u32(u32(7882052u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4ab16b:L4ab16b:{c.instructions+=8;NFSU2_TR(0x4ab16b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ab16e:{NFSU2_TR(0x4ab16e);
{u32 ea_=u32(r4(R+4)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4ab171:{NFSU2_TR(0x4ab171);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ab175:{NFSU2_TR(0x4ab175);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4ab179:{NFSU2_TR(0x4ab179);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4ab17f:{NFSU2_TR(0x4ab17f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4ab181:{NFSU2_TR(0x4ab181);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4ab184:{NFSU2_TR(0x4ab184);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ab1f5;}}
}
B4ab186:L4ab186:{c.instructions+=6;NFSU2_TR(0x4ab186);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4ab18a:{NFSU2_TR(0x4ab18a);
{u32 ea_=u32(u32(7882052u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4ab190:{NFSU2_TR(0x4ab190);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4ab194:{NFSU2_TR(0x4ab194);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4ab196:{NFSU2_TR(0x4ab196);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4ab199:{NFSU2_TR(0x4ab199);
if(r1(R+514)){{goto L4ab1a3;}}
}
B4ab19b:L4ab19b:{c.instructions+=2;NFSU2_TR(0x4ab19b);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4ab19d:{NFSU2_TR(0x4ab19d);
{u32 ea_=u32(u32(7882052u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4ab1a3:L4ab1a3:{c.instructions+=8;NFSU2_TR(0x4ab1a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4ab1a6:{NFSU2_TR(0x4ab1a6);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4ab1a9:{NFSU2_TR(0x4ab1a9);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ab1ad:{NFSU2_TR(0x4ab1ad);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4ab1b1:{NFSU2_TR(0x4ab1b1);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4ab1b7:{NFSU2_TR(0x4ab1b7);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4ab1b9:{NFSU2_TR(0x4ab1b9);
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
B4ab1bc:{NFSU2_TR(0x4ab1bc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ab1fd;}}
}
B4ab1be:L4ab1be:{c.instructions+=6;NFSU2_TR(0x4ab1be);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4ab1c2:{NFSU2_TR(0x4ab1c2);
{u32 ea_=u32(u32(7882052u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4ab1c8:{NFSU2_TR(0x4ab1c8);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4ab1cc:{NFSU2_TR(0x4ab1cc);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4ab1ce:{NFSU2_TR(0x4ab1ce);
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
B4ab1d1:{NFSU2_TR(0x4ab1d1);
if(r1(R+514)){{goto L4ab203;}}
}
B4ab1d3:L4ab1d3:{c.instructions+=3;NFSU2_TR(0x4ab1d3);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4ab1d5:{NFSU2_TR(0x4ab1d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
w4(U+4,u32(0x437f0000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4ab1dc:{NFSU2_TR(0x4ab1dc);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ab1df:L4ab1df:{c.instructions+=2;NFSU2_TR(0x4ab1df);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4ab1e5:{NFSU2_TR(0x4ab1e5);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4ab130u);}goto L4ab130;}
}
B4ab1ea:L4ab1ea:{c.instructions+=2;NFSU2_TR(0x4ab1ea);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4ab1f0:{NFSU2_TR(0x4ab1f0);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4ab16bu);}goto L4ab16b;}
}
B4ab1f5:L4ab1f5:{c.instructions+=2;NFSU2_TR(0x4ab1f5);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4ab1fb:{NFSU2_TR(0x4ab1fb);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4ab1a3u);}goto L4ab1a3;}
}
B4ab1fd:L4ab1fd:{c.instructions+=1;NFSU2_TR(0x4ab1fd);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4ab203:L4ab203:{c.instructions+=2;NFSU2_TR(0x4ab203);
{u32 ea_=u32(r4(R+4)+u32(12u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4ab206:{NFSU2_TR(0x4ab206);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ab210:L4ab210:{c.instructions+=7;NFSU2_TR(0x4ab210);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ab214:{NFSU2_TR(0x4ab214);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4ab218:{NFSU2_TR(0x4ab218);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B4ab21b:{NFSU2_TR(0x4ab21b);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B4ab221:{NFSU2_TR(0x4ab221);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4ab223:{NFSU2_TR(0x4ab223);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4ab226:{NFSU2_TR(0x4ab226);
if(r1(R+514)){{goto L4ab232;}}
}
B4ab228:L4ab228:{c.instructions+=3;NFSU2_TR(0x4ab228);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4ab22a:{NFSU2_TR(0x4ab22a);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4ab230:{NFSU2_TR(0x4ab230);
{goto L4ab247;}
}
B4ab232:L4ab232:{c.instructions+=4;NFSU2_TR(0x4ab232);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B4ab238:{NFSU2_TR(0x4ab238);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4ab23a:{NFSU2_TR(0x4ab23a);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4ab23d:{NFSU2_TR(0x4ab23d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ab247;}}
}
B4ab23f:L4ab23f:{c.instructions+=2;NFSU2_TR(0x4ab23f);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4ab241:{NFSU2_TR(0x4ab241);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4ab247:L4ab247:{c.instructions+=3;NFSU2_TR(0x4ab247);
u8 U[8];
__builtin_memmove((U+0),gp(0x89e7c0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4ab24e:{NFSU2_TR(0x4ab24e);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ab252:{NFSU2_TR(0x4ab252);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ab25c;}}
}
B4ab254:L4ab254:{c.instructions+=3;NFSU2_TR(0x4ab254);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4ab257:{NFSU2_TR(0x4ab257);
{u32 ea_=u32(r4(R+0)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4ab25a:{NFSU2_TR(0x4ab25a);
{goto L4ab262;}
}
B4ab25c:L4ab25c:{c.instructions+=2;NFSU2_TR(0x4ab25c);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4ab25f:{NFSU2_TR(0x4ab25f);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4ab262:L4ab262:{c.instructions+=5;NFSU2_TR(0x4ab262);
__asm__ volatile(".byte 0xd9,0xc1":::"memory");
}
B4ab264:{NFSU2_TR(0x4ab264);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B4ab266:{NFSU2_TR(0x4ab266);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4ab268:{NFSU2_TR(0x4ab268);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4ab26b:{NFSU2_TR(0x4ab26b);
if(r1(R+514)){{goto L4ab271;}}
}
B4ab26d:L4ab26d:{c.instructions+=2;NFSU2_TR(0x4ab26d);
__asm__ volatile(".byte 0xd8,0xe1":::"memory");
}
B4ab26f:{NFSU2_TR(0x4ab26f);
{goto L4ab27b;}
}
B4ab271:L4ab271:{c.instructions+=3;NFSU2_TR(0x4ab271);
{u32 ea_=u32(u32(7881996u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4ab277:{NFSU2_TR(0x4ab277);
__asm__ volatile(".byte 0xd8,0xe2":::"memory");
}
B4ab279:{NFSU2_TR(0x4ab279);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4ab27b:L4ab27b:{c.instructions+=6;NFSU2_TR(0x4ab27b);
__asm__ volatile(".byte 0xde,0xca":::"memory");
}
B4ab27d:{NFSU2_TR(0x4ab27d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B4ab27f:{NFSU2_TR(0x4ab27f);
{u32 ea_=u32(u32(7881996u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B4ab285:{NFSU2_TR(0x4ab285);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4ab287:{NFSU2_TR(0x4ab287);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4ab28a:{NFSU2_TR(0x4ab28a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ab292;}}
}
B4ab28c:L4ab28c:{c.instructions+=1;NFSU2_TR(0x4ab28c);
{u32 ea_=u32(u32(7881996u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B4ab292:L4ab292:{c.instructions+=4;NFSU2_TR(0x4ab292);
{u32 ea_=u32(u32(7932496u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B4ab298:{NFSU2_TR(0x4ab298);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4ab29a:{NFSU2_TR(0x4ab29a);
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
B4ab29d:{NFSU2_TR(0x4ab29d);
if(r1(R+514)){{goto L4ab2a5;}}
}
B4ab29f:L4ab29f:{c.instructions+=1;NFSU2_TR(0x4ab29f);
{u32 ea_=u32(u32(7881996u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4ab2a5:L4ab2a5:{c.instructions+=1;NFSU2_TR(0x4ab2a5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ab2b0:L4ab2b0:{c.instructions+=6;NFSU2_TR(0x4ab2b0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ab2b1:{NFSU2_TR(0x4ab2b1);
{u32 ea_=u32(r4(R+4)+u32(140u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4ab2b7:{NFSU2_TR(0x4ab2b7);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4ab2bd:{NFSU2_TR(0x4ab2bd);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4ab2bf:{NFSU2_TR(0x4ab2bf);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4ab2c2:{NFSU2_TR(0x4ab2c2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ab323;}}
}
B4ab2c4:L4ab2c4:{c.instructions+=10;NFSU2_TR(0x4ab2c4);
__builtin_memmove((R+0),gp(0x86518c),4);
}
B4ab2c9:{NFSU2_TR(0x4ab2c9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B4ab2cf:{NFSU2_TR(0x4ab2cf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B4ab2d3:{NFSU2_TR(0x4ab2d3);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4ab2d7:{NFSU2_TR(0x4ab2d7);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4ab2dd:{NFSU2_TR(0x4ab2dd);
{u32 ea_=u32(r4(R+4)+u32(140u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B4ab2e3:{NFSU2_TR(0x4ab2e3);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B4ab2e9:{NFSU2_TR(0x4ab2e9);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4ab2eb:{NFSU2_TR(0x4ab2eb);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4ab2ee:{NFSU2_TR(0x4ab2ee);
if(r1(R+514)){{goto L4ab30a;}}
}
B4ab2f0:L4ab2f0:{c.instructions+=5;NFSU2_TR(0x4ab2f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8cull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4ab2fa:{NFSU2_TR(0x4ab2fa);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4ab2fc:{NFSU2_TR(0x4ab2fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ab2ff:{NFSU2_TR(0x4ab2ff);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ab300:{NFSU2_TR(0x4ab300);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ab305ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4ab305:L4ab305:{c.instructions+=3;NFSU2_TR(0x4ab305);
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
B4ab308:{NFSU2_TR(0x4ab308);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4ab309:{NFSU2_TR(0x4ab309);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ab30a:L4ab30a:{c.instructions+=6;NFSU2_TR(0x4ab30a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4ab30d:{NFSU2_TR(0x4ab30d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x8ull))));
}
B4ab310:{NFSU2_TR(0x4ab310);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B4ab313:{NFSU2_TR(0x4ab313);
u8 U[4];
w4(U+0,u32(0x790a48ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ab318:{NFSU2_TR(0x4ab318);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ab319:{NFSU2_TR(0x4ab319);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ab31eull));
TAIL_STATIC(0x537be0u,537);
}
B4ab31e:L4ab31e:{c.instructions+=3;NFSU2_TR(0x4ab31e);
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
B4ab321:{NFSU2_TR(0x4ab321);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4ab322:{NFSU2_TR(0x4ab322);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ab323:L4ab323:{c.instructions+=3;NFSU2_TR(0x4ab323);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x70ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ab326:{NFSU2_TR(0x4ab326);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ab327:{NFSU2_TR(0x4ab327);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ab32cull));
TAIL_STATIC(0x50ca00u,50c);
}
B4ab32c:L4ab32c:{c.instructions+=3;NFSU2_TR(0x4ab32c);
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
B4ab32f:{NFSU2_TR(0x4ab32f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4ab330:{NFSU2_TR(0x4ab330);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ab340:L4ab340:{c.instructions+=4;NFSU2_TR(0x4ab340);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ab341:{NFSU2_TR(0x4ab341);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x95ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4ab347:{NFSU2_TR(0x4ab347);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4ab349:{NFSU2_TR(0x4ab349);
if(r1(R+518)){{goto L4ab37f;}}
}
B4ab34b:L4ab34b:{c.instructions+=9;NFSU2_TR(0x4ab34b);
__builtin_memmove((R+0),gp(0x86518c),4);
}
B4ab350:{NFSU2_TR(0x4ab350);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x98ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))-u32(r4(U+4))));
}
B4ab356:{NFSU2_TR(0x4ab356);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+16)),r4(U+0));
}
B4ab35a:{NFSU2_TR(0x4ab35a);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4ab35e:{NFSU2_TR(0x4ab35e);
{u32 ea_=u32(u32(7881320u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4ab364:{NFSU2_TR(0x4ab364);
{u32 ea_=u32(u32(7881920u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4ab36a:{NFSU2_TR(0x4ab36a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4ab36c:{NFSU2_TR(0x4ab36c);
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
B4ab36f:{NFSU2_TR(0x4ab36f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ab38b;}}
}
B4ab371:L4ab371:{c.instructions+=3;NFSU2_TR(0x4ab371);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ab374:{NFSU2_TR(0x4ab374);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ab375:{NFSU2_TR(0x4ab375);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ab37aull));
TAIL_STATIC(0x50ca00u,50c);
}
B4ab37a:L4ab37a:{c.instructions+=3;NFSU2_TR(0x4ab37a);
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
B4ab37d:{NFSU2_TR(0x4ab37d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4ab37e:{NFSU2_TR(0x4ab37e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ab37f:L4ab37f:{c.instructions+=3;NFSU2_TR(0x4ab37f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4ab382:{NFSU2_TR(0x4ab382);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ab383:{NFSU2_TR(0x4ab383);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ab388ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4ab388:L4ab388:{c.instructions+=1;NFSU2_TR(0x4ab388);
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
B4ab38b:L4ab38b:{c.instructions+=2;NFSU2_TR(0x4ab38b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4ab38c:{NFSU2_TR(0x4ab38c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ab390:L4ab390:{c.instructions+=5;NFSU2_TR(0x4ab390);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ab394:{NFSU2_TR(0x4ab394);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ab396:{NFSU2_TR(0x4ab396);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ab397:{NFSU2_TR(0x4ab397);
__builtin_memmove((R+24),(R+4),4);
}
B4ab399:{NFSU2_TR(0x4ab399);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ab3a3;}}
}
B4ab39b:L4ab39b:{c.instructions+=2;NFSU2_TR(0x4ab39b);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4ab3a1:{NFSU2_TR(0x4ab3a1);
{goto L4ab3a7;}
}
B4ab3a3:L4ab3a3:{c.instructions+=1;NFSU2_TR(0x4ab3a3);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4ab3a7:L4ab3a7:{c.instructions+=5;NFSU2_TR(0x4ab3a7);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4ab3ab:{NFSU2_TR(0x4ab3ab);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4ab3b1:{NFSU2_TR(0x4ab3b1);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4ab3b3:{NFSU2_TR(0x4ab3b3);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4ab3b6:{NFSU2_TR(0x4ab3b6);
if(r1(R+514)){{goto L4ab3c0;}}
}
B4ab3b8:L4ab3b8:{c.instructions+=2;NFSU2_TR(0x4ab3b8);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4ab3ba:{NFSU2_TR(0x4ab3ba);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4ab3c0:L4ab3c0:{c.instructions+=6;NFSU2_TR(0x4ab3c0);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B4ab3c2:{NFSU2_TR(0x4ab3c2);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B4ab3c6:{NFSU2_TR(0x4ab3c6);
{u32 ea_=u32(u32(7884428u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4ab3cc:{NFSU2_TR(0x4ab3cc);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4ab3ce:{NFSU2_TR(0x4ab3ce);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4ab3d1:{NFSU2_TR(0x4ab3d1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ab3db;}}
}
B4ab3d3:L4ab3d3:{c.instructions+=1;NFSU2_TR(0x4ab3d3);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
w4(U+4,u32(0x42b40000ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4ab3db:L4ab3db:{c.instructions+=2;NFSU2_TR(0x4ab3db);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4ab3df:{NFSU2_TR(0x4ab3df);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ab3e4ull));
TAIL_STATIC(0x75bed4u,75b);
}
B4ab3e4:L4ab3e4:{c.instructions+=5;NFSU2_TR(0x4ab3e4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ab3e5:{NFSU2_TR(0x4ab3e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ab3e8:{NFSU2_TR(0x4ab3e8);
u8 U[4];
w4(U+0,u32(0x7845d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ab3ed:{NFSU2_TR(0x4ab3ed);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ab3ee:{NFSU2_TR(0x4ab3ee);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ab3f3ull));
TAIL_STATIC(0x537be0u,537);
}
B4ab3f3:L4ab3f3:{c.instructions+=7;NFSU2_TR(0x4ab3f3);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4ab3f7:{NFSU2_TR(0x4ab3f7);
{u32 ea_=u32(u32(7884428u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4ab3fd:{NFSU2_TR(0x4ab3fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x4cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ab400:{NFSU2_TR(0x4ab400);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4ab403:{NFSU2_TR(0x4ab403);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4ab406:{NFSU2_TR(0x4ab406);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ab407:{NFSU2_TR(0x4ab407);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ab40cull));
TAIL_STATIC(0x51ced0u,51c);
}
B4ab40c:L4ab40c:{c.instructions+=3;NFSU2_TR(0x4ab40c);
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
B4ab40f:{NFSU2_TR(0x4ab40f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ab410:{NFSU2_TR(0x4ab410);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ab420:L4ab420:{c.instructions+=5;NFSU2_TR(0x4ab420);
u8 U[5];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4ab424:{NFSU2_TR(0x4ab424);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4ab426:{NFSU2_TR(0x4ab426);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ab427:{NFSU2_TR(0x4ab427);
__builtin_memmove((R+24),(R+4),4);
}
B4ab429:{NFSU2_TR(0x4ab429);
if(r1(R+518)){{goto L4ab460;}}
}
B4ab42b:L4ab42b:{c.instructions+=3;NFSU2_TR(0x4ab42b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ab42e:{NFSU2_TR(0x4ab42e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ab42f:{NFSU2_TR(0x4ab42f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ab434ull));
TAIL_STATIC(0x50ca50u,50c);
}
B4ab434:L4ab434:{c.instructions+=4;NFSU2_TR(0x4ab434);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ab437:{NFSU2_TR(0x4ab437);
u8 U[4];
w4(U+0,u32(0x790a64ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ab43c:{NFSU2_TR(0x4ab43c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ab43d:{NFSU2_TR(0x4ab43d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ab442ull));
TAIL_STATIC(0x51d040u,51d);
}
B4ab442:L4ab442:{c.instructions+=3;NFSU2_TR(0x4ab442);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4ab445:{NFSU2_TR(0x4ab445);
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
B4ab447:{NFSU2_TR(0x4ab447);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ab4a5;}}
}
B4ab449:L4ab449:{c.instructions+=5;NFSU2_TR(0x4ab449);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4ab44c:{NFSU2_TR(0x4ab44c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ab44e:{NFSU2_TR(0x4ab44e);
u8 U[4];
w4(U+0,u32(0x790a64ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ab453:{NFSU2_TR(0x4ab453);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ab454:{NFSU2_TR(0x4ab454);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ab459ull));
TAIL_STATIC(0x51cf70u,51c);
}
B4ab459:L4ab459:{c.instructions+=3;NFSU2_TR(0x4ab459);
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
B4ab45c:{NFSU2_TR(0x4ab45c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ab45d:{NFSU2_TR(0x4ab45d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ab460:L4ab460:{c.instructions+=5;NFSU2_TR(0x4ab460);
u8 U[5];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4ab464:{NFSU2_TR(0x4ab464);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4ab466:{NFSU2_TR(0x4ab466);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ab469:{NFSU2_TR(0x4ab469);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ab46a:{NFSU2_TR(0x4ab46a);
if(r1(R+518)){{goto L4ab49d;}}
}
B4ab46c:L4ab46c:{c.instructions+=1;NFSU2_TR(0x4ab46c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ab471ull));
TAIL_STATIC(0x50ca50u,50c);
}
B4ab471:L4ab471:{c.instructions+=4;NFSU2_TR(0x4ab471);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ab474:{NFSU2_TR(0x4ab474);
u8 U[4];
w4(U+0,u32(0x790a54ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ab479:{NFSU2_TR(0x4ab479);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ab47a:{NFSU2_TR(0x4ab47a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ab47full));
TAIL_STATIC(0x51d040u,51d);
}
B4ab47f:L4ab47f:{c.instructions+=3;NFSU2_TR(0x4ab47f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4ab482:{NFSU2_TR(0x4ab482);
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
B4ab484:{NFSU2_TR(0x4ab484);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ab4a5;}}
}
B4ab486:L4ab486:{c.instructions+=5;NFSU2_TR(0x4ab486);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4ab489:{NFSU2_TR(0x4ab489);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ab48b:{NFSU2_TR(0x4ab48b);
u8 U[4];
w4(U+0,u32(0x790a54ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ab490:{NFSU2_TR(0x4ab490);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ab491:{NFSU2_TR(0x4ab491);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ab496ull));
TAIL_STATIC(0x51cf70u,51c);
}
B4ab496:L4ab496:{c.instructions+=3;NFSU2_TR(0x4ab496);
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
B4ab499:{NFSU2_TR(0x4ab499);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ab49a:{NFSU2_TR(0x4ab49a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ab49d:L4ab49d:{c.instructions+=1;NFSU2_TR(0x4ab49d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ab4a2ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4ab4a2:L4ab4a2:{c.instructions+=1;NFSU2_TR(0x4ab4a2);
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
B4ab4a5:L4ab4a5:{c.instructions+=2;NFSU2_TR(0x4ab4a5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ab4a6:{NFSU2_TR(0x4ab4a6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ab4b0:L4ab4b0:{c.instructions+=7;NFSU2_TR(0x4ab4b0);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ab4b4:{NFSU2_TR(0x4ab4b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ab4b7:{NFSU2_TR(0x4ab4b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ab4ba:{NFSU2_TR(0x4ab4ba);
__builtin_memmove((R+4),gp(0x89e7d9),1);
}
B4ab4c0:{NFSU2_TR(0x4ab4c0);
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
B4ab4c2:{NFSU2_TR(0x4ab4c2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ab4c3:{NFSU2_TR(0x4ab4c3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ab4eb;}}
}
B4ab4c5:L4ab4c5:{c.instructions+=3;NFSU2_TR(0x4ab4c5);
__builtin_memmove((R+4),gp(0x890104),4);
}
B4ab4cb:{NFSU2_TR(0x4ab4cb);
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
B4ab4cd:{NFSU2_TR(0x4ab4cd);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ab4eb;}}
}
B4ab4cf:L4ab4cf:{c.instructions+=3;NFSU2_TR(0x4ab4cf);
__builtin_memmove((R+4),gp(0x89e7a0),4);
}
B4ab4d5:{NFSU2_TR(0x4ab4d5);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x104eull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x104eull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4ab4db:{NFSU2_TR(0x4ab4db);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L4ab4e5;}}
}
B4ab4dd:L4ab4dd:{c.instructions+=2;NFSU2_TR(0x4ab4dd);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0x1053ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x1053ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x1053ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4ab4e3:{NFSU2_TR(0x4ab4e3);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4ab4eb;}}
}
B4ab4e5:L4ab4e5:{c.instructions+=2;NFSU2_TR(0x4ab4e5);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+24,u32(s32(s8(r1(U+4)))));
}
B4ab4e9:{NFSU2_TR(0x4ab4e9);
{goto L4ab502;}
}
B4ab4eb:L4ab4eb:{c.instructions+=4;NFSU2_TR(0x4ab4eb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4ab4ed:{NFSU2_TR(0x4ab4ed);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+8,u32(s32(s16(r2(U+4)))));
}
B4ab4f1:{NFSU2_TR(0x4ab4f1);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ab4f2:{NFSU2_TR(0x4ab4f2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ab4f7ull));
TAIL_STATIC(0x56dd90u,56d);
}
B4ab4f7:L4ab4f7:{c.instructions+=3;NFSU2_TR(0x4ab4f7);
__builtin_memmove((R+4),gp(0x89e7a0),4);
}
B4ab4fd:{NFSU2_TR(0x4ab4fd);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4ab500:{NFSU2_TR(0x4ab500);
__builtin_memmove((R+24),(R+0),4);
}
B4ab502:L4ab502:{c.instructions+=2;NFSU2_TR(0x4ab502);
u8 U[8];
__builtin_memmove((U+0),gp(0x850078),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4ab509:{NFSU2_TR(0x4ab509);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ab55c;}}
}
B4ab50b:L4ab50b:{c.instructions+=4;NFSU2_TR(0x4ab50b);
__builtin_memmove((R+0),gp(0x89cf4c),4);
}
B4ab510:{NFSU2_TR(0x4ab510);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B4ab512:{NFSU2_TR(0x4ab512);
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
B4ab515:{NFSU2_TR(0x4ab515);
if(r1(R+518)){{goto L4ab525;}}
}
B4ab517:L4ab517:{c.instructions+=2;NFSU2_TR(0x4ab517);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
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
B4ab51a:{NFSU2_TR(0x4ab51a);
if(r1(R+518)){{goto L4ab525;}}
}
B4ab51c:L4ab51c:{c.instructions+=2;NFSU2_TR(0x4ab51c);
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
B4ab51e:{NFSU2_TR(0x4ab51e);
if(r1(R+518)){{goto L4ab525;}}
}
B4ab520:L4ab520:{c.instructions+=2;NFSU2_TR(0x4ab520);
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
B4ab523:{NFSU2_TR(0x4ab523);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ab52e;}}
}
B4ab525:L4ab525:{c.instructions+=3;NFSU2_TR(0x4ab525);
w4(R+0,u32(0xa7db717full));
}
B4ab52a:{NFSU2_TR(0x4ab52a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ab52b:{NFSU2_TR(0x4ab52b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ab52e:L4ab52e:{c.instructions+=9;NFSU2_TR(0x4ab52e);
__builtin_memmove((R+4),gp(0x89e7cc),4);
}
B4ab534:{NFSU2_TR(0x4ab534);
__builtin_memmove((R+8),gp(0x89e7c8),4);
}
B4ab53a:{NFSU2_TR(0x4ab53a);
__builtin_memmove((R+0),gp(0x89e7c0),4);
}
B4ab53f:{NFSU2_TR(0x4ab53f);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B4ab541:{NFSU2_TR(0x4ab541);
w4(R+8,u32(u32(r4(R+8))+u32(m4(0x89e7c4))));
}
B4ab547:{NFSU2_TR(0x4ab547);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+0))));
}
B4ab549:{NFSU2_TR(0x4ab549);
__builtin_memmove((R+0),gp(0x890118),4);
}
B4ab54e:{NFSU2_TR(0x4ab54e);
u8 U[22];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x28ull))));
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
B4ab551:{NFSU2_TR(0x4ab551);
if(r1(R+518)){{goto L4ab59e;}}
}
B4ab553:L4ab553:{c.instructions+=3;NFSU2_TR(0x4ab553);
w4(R+0,u32(0xe863dd5cull));
}
B4ab558:{NFSU2_TR(0x4ab558);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ab559:{NFSU2_TR(0x4ab559);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ab55c:L4ab55c:{c.instructions+=3;NFSU2_TR(0x4ab55c);
__builtin_memmove((R+0),gp(0x89e7d9),1);
}
B4ab561:{NFSU2_TR(0x4ab561);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4ab563:{NFSU2_TR(0x4ab563);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ab589;}}
}
B4ab565:L4ab565:{c.instructions+=3;NFSU2_TR(0x4ab565);
__builtin_memmove((R+0),gp(0x890104),4);
}
B4ab56a:{NFSU2_TR(0x4ab56a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ab56c:{NFSU2_TR(0x4ab56c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ab589;}}
}
B4ab56e:L4ab56e:{c.instructions+=2;NFSU2_TR(0x4ab56e);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x104eull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x104eull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B4ab574:{NFSU2_TR(0x4ab574);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L4ab57e;}}
}
B4ab576:L4ab576:{c.instructions+=2;NFSU2_TR(0x4ab576);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1053ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1053ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4ab57c:{NFSU2_TR(0x4ab57c);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4ab589;}}
}
B4ab57e:L4ab57e:{c.instructions+=3;NFSU2_TR(0x4ab57e);
__builtin_memmove((R+4),gp(0x890118),4);
}
B4ab584:{NFSU2_TR(0x4ab584);
u8 U[22];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(r4(R+24))));
w1(R+523,sborrow<u32>(r4(U+14),r4(R+24)));
w4(U+18,u32(u32(r4(U+14))-u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B4ab587:{NFSU2_TR(0x4ab587);
{goto L4ab597;}
}
B4ab589:L4ab589:{c.instructions+=3;NFSU2_TR(0x4ab589);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ab58b:{NFSU2_TR(0x4ab58b);
w4(R+4,u32(0x864630ull));
}
B4ab590:{NFSU2_TR(0x4ab590);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ab595ull));
TAIL_STATIC(0x43be80u,43b);
}
B4ab595:L4ab595:{c.instructions+=1;NFSU2_TR(0x4ab595);
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
B4ab597:L4ab597:{c.instructions+=2;NFSU2_TR(0x4ab597);
w4(R+0,u32(0xeac720d3ull));
}
B4ab59c:{NFSU2_TR(0x4ab59c);
if(r1(R+518)){{goto L4ab5a5;}}
}
B4ab59e:L4ab59e:{c.instructions+=1;NFSU2_TR(0x4ab59e);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7f66b4ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B4ab5a5:L4ab5a5:{c.instructions+=2;NFSU2_TR(0x4ab5a5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ab5a6:{NFSU2_TR(0x4ab5a6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ab5b0:L4ab5b0:{c.instructions+=11;NFSU2_TR(0x4ab5b0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x20ull))));
}
B4ab5b3:{NFSU2_TR(0x4ab5b3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ab5b4:{NFSU2_TR(0x4ab5b4);
__builtin_memmove((R+24),(R+4),4);
}
B4ab5b6:{NFSU2_TR(0x4ab5b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ab5b9:{NFSU2_TR(0x4ab5b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ab5bc:{NFSU2_TR(0x4ab5bc);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+4))));
}
B4ab5be:{NFSU2_TR(0x4ab5be);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ab5c1:{NFSU2_TR(0x4ab5c1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ab5c2:{NFSU2_TR(0x4ab5c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))&u32(r4(U+4))));
}
B4ab5c5:{NFSU2_TR(0x4ab5c5);
w4(R+0,u32(u32(r4(R+0))|u32(r4(R+4))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B4ab5c7:{NFSU2_TR(0x4ab5c7);
if(r1(R+518)){{goto L4ab6f4;}}
}
B4ab5cd:L4ab5cd:{c.instructions+=2;NFSU2_TR(0x4ab5cd);
__builtin_memmove((R+4),gp(0x890118),4);
}
B4ab5d3:{NFSU2_TR(0x4ab5d3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ab5d8ull));
TAIL_STATIC(0x5eea40u,5ee);
}
B4ab5d8:L4ab5d8:{c.instructions+=3;NFSU2_TR(0x4ab5d8);
__builtin_memmove((R+28),(R+0),4);
}
B4ab5da:{NFSU2_TR(0x4ab5da);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ab5dc:{NFSU2_TR(0x4ab5dc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ab5f2;}}
}
B4ab5de:L4ab5de:{c.instructions+=3;NFSU2_TR(0x4ab5de);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ab5e1:{NFSU2_TR(0x4ab5e1);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ab5e2:{NFSU2_TR(0x4ab5e2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ab5e7ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4ab5e7:L4ab5e7:{c.instructions+=5;NFSU2_TR(0x4ab5e7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4ab5ea:{NFSU2_TR(0x4ab5ea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4ab5eb:{NFSU2_TR(0x4ab5eb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ab5ec:{NFSU2_TR(0x4ab5ec);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x20ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x20ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4ab5ef:{NFSU2_TR(0x4ab5ef);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ab5f2:L4ab5f2:{c.instructions+=3;NFSU2_TR(0x4ab5f2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ab5f5:{NFSU2_TR(0x4ab5f5);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ab5f6:{NFSU2_TR(0x4ab5f6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ab5fbull));
TAIL_STATIC(0x50ca50u,50c);
}
B4ab5fb:L4ab5fb:{c.instructions+=3;NFSU2_TR(0x4ab5fb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4ab5fe:{NFSU2_TR(0x4ab5fe);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4ab601:{NFSU2_TR(0x4ab601);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ab616;}}
}
B4ab603:L4ab603:{c.instructions+=4;NFSU2_TR(0x4ab603);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4ab606:{NFSU2_TR(0x4ab606);
u8 U[4];
w4(U+0,u32(0x535ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ab60b:{NFSU2_TR(0x4ab60b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ab60c:{NFSU2_TR(0x4ab60c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ab611ull));
TAIL_STATIC(0x50c900u,50c);
}
B4ab611:L4ab611:{c.instructions+=2;NFSU2_TR(0x4ab611);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4ab614:{NFSU2_TR(0x4ab614);
{goto L4ab628;}
}
B4ab616:L4ab616:{c.instructions+=5;NFSU2_TR(0x4ab616);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ab619:{NFSU2_TR(0x4ab619);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ab61a:{NFSU2_TR(0x4ab61a);
u8 U[4];
w4(U+0,u32(0x7845d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ab61f:{NFSU2_TR(0x4ab61f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ab620:{NFSU2_TR(0x4ab620);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ab625ull));
TAIL_STATIC(0x537be0u,537);
}
B4ab625:L4ab625:{c.instructions+=1;NFSU2_TR(0x4ab625);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4ab628:L4ab628:{c.instructions+=2;NFSU2_TR(0x4ab628);
__builtin_memmove((R+4),gp(0x890118),4);
}
B4ab62e:{NFSU2_TR(0x4ab62e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ab633ull));
TAIL_STATIC(0x5eeb00u,5ee);
}
B4ab633:L4ab633:{c.instructions+=3;NFSU2_TR(0x4ab633);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B4ab637:{NFSU2_TR(0x4ab637);
{u32 ea_=u32(u32(7932528u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4ab63d:{NFSU2_TR(0x4ab63d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ab642ull));
TAIL_STATIC(0x75bed4u,75b);
}
B4ab642:L4ab642:{c.instructions+=10;NFSU2_TR(0x4ab642);
__builtin_memmove((R+4),(R+0),4);
}
B4ab644:{NFSU2_TR(0x4ab644);
w4(R+0,u32(0xb60b60b7ull));
}
B4ab649:{NFSU2_TR(0x4ab649);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(r4(R+4)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+8,u32(u64(r8(U+16))>>32));
w4(R+0,u32(r8(U+16)));
}
B4ab64b:{NFSU2_TR(0x4ab64b);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B4ab64d:{NFSU2_TR(0x4ab64d);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))&u32(u32(0x1full))));
w4(R+8,sar<u32>(r4(R+8),u64(r4(U+0))));
}
B4ab650:{NFSU2_TR(0x4ab650);
__builtin_memmove((R+4),(R+8),4);
}
B4ab652:{NFSU2_TR(0x4ab652);
u8 U[4];
w4(U+0,u32(u32(u32(0x1full))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B4ab655:{NFSU2_TR(0x4ab655);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+4))));
}
B4ab657:{NFSU2_TR(0x4ab657);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ab658:{NFSU2_TR(0x4ab658);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ab65dull));
TAIL_STATIC(0x43c370u,43c);
}
B4ab65d:L4ab65d:{c.instructions+=6;NFSU2_TR(0x4ab65d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ab660:{NFSU2_TR(0x4ab660);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ab661:{NFSU2_TR(0x4ab661);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4ab665:{NFSU2_TR(0x4ab665);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4ab669:{NFSU2_TR(0x4ab669);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ab66a:{NFSU2_TR(0x4ab66a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ab66full));
TAIL_STATIC(0x50ccc0u,50c);
}
B4ab66f:L4ab66f:{c.instructions+=3;NFSU2_TR(0x4ab66f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4ab672:{NFSU2_TR(0x4ab672);
__builtin_memmove((R+4),(R+0),4);
}
B4ab674:{NFSU2_TR(0x4ab674);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ab679ull));
TAIL_STATIC(0x5054d0u,505);
}
B4ab679:L4ab679:{c.instructions+=5;NFSU2_TR(0x4ab679);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4ab67d:{NFSU2_TR(0x4ab67d);
{u32 ea_=u32(u32(7882052u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4ab683:{NFSU2_TR(0x4ab683);
__builtin_memmove((R+28),(R+0),4);
}
B4ab685:{NFSU2_TR(0x4ab685);
w4(R+28,u32(u32(r4(R+28))&u32(u32(0xffffffull))));
}
B4ab68b:{NFSU2_TR(0x4ab68b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ab690ull));
TAIL_STATIC(0x75bed4u,75b);
}
B4ab690:L4ab690:{c.instructions+=6;NFSU2_TR(0x4ab690);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B4ab693:{NFSU2_TR(0x4ab693);
w4(R+28,u32(u32(r4(R+28))|u32(r4(R+0))));
}
B4ab695:{NFSU2_TR(0x4ab695);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ab698:{NFSU2_TR(0x4ab698);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ab699:{NFSU2_TR(0x4ab699);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ab69a:{NFSU2_TR(0x4ab69a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ab69full));
TAIL_STATIC(0x51d7f0u,51d);
}
B4ab69f:L4ab69f:{c.instructions+=7;NFSU2_TR(0x4ab69f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ab6a2:{NFSU2_TR(0x4ab6a2);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B4ab6a6:{NFSU2_TR(0x4ab6a6);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ab6a7:{NFSU2_TR(0x4ab6a7);
u8 U[4];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4ab6ab:{NFSU2_TR(0x4ab6ab);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ab6ac:{NFSU2_TR(0x4ab6ac);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ab6ad:{NFSU2_TR(0x4ab6ad);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ab6b2ull));
TAIL_STATIC(0x51d620u,51d);
}
B4ab6b2:L4ab6b2:{c.instructions+=9;NFSU2_TR(0x4ab6b2);
{u32 ea_=u32(u32(7921776u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4ab6b8:{NFSU2_TR(0x4ab6b8);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B4ab6bc:{NFSU2_TR(0x4ab6bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ab6bf:{NFSU2_TR(0x4ab6bf);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B4ab6c5:{NFSU2_TR(0x4ab6c5);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B4ab6c9:{NFSU2_TR(0x4ab6c9);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4ab6cd:{NFSU2_TR(0x4ab6cd);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ab6ce:{NFSU2_TR(0x4ab6ce);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ab6cf:{NFSU2_TR(0x4ab6cf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ab6d4ull));
TAIL_STATIC(0x50cc00u,50c);
}
B4ab6d4:L4ab6d4:{c.instructions+=4;NFSU2_TR(0x4ab6d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4ab6d7:{NFSU2_TR(0x4ab6d7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ab6d8:{NFSU2_TR(0x4ab6d8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ab6d9:{NFSU2_TR(0x4ab6d9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ab6deull));
TAIL_STATIC(0x50cb40u,50c);
}
B4ab6de:L4ab6de:{c.instructions+=7;NFSU2_TR(0x4ab6de);
u8 U[8];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ab6e2:{NFSU2_TR(0x4ab6e2);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ab6e6:{NFSU2_TR(0x4ab6e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4ab6e9:{NFSU2_TR(0x4ab6e9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ab6ea:{NFSU2_TR(0x4ab6ea);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ab6eb:{NFSU2_TR(0x4ab6eb);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ab6ec:{NFSU2_TR(0x4ab6ec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ab6f1ull));
TAIL_STATIC(0x51d4d0u,51d);
}
B4ab6f1:L4ab6f1:{c.instructions+=1;NFSU2_TR(0x4ab6f1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x30ull))));
}
B4ab6f4:L4ab6f4:{c.instructions+=4;NFSU2_TR(0x4ab6f4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4ab6f5:{NFSU2_TR(0x4ab6f5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ab6f6:{NFSU2_TR(0x4ab6f6);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x20ull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x20ull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x20ull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4ab6f9:{NFSU2_TR(0x4ab6f9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ab700:L4ab700:{c.instructions+=7;NFSU2_TR(0x4ab700);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4ab704:{NFSU2_TR(0x4ab704);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ab705:{NFSU2_TR(0x4ab705);
__builtin_memmove((R+24),(R+4),4);
}
B4ab707:{NFSU2_TR(0x4ab707);
{u32 ea_=u32(r4(R+24)+u32(92u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B4ab70a:{NFSU2_TR(0x4ab70a);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4ab70c:{NFSU2_TR(0x4ab70c);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4ab70f:{NFSU2_TR(0x4ab70f);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L4ab74d;}}
}
B4ab711:L4ab711:{c.instructions+=2;NFSU2_TR(0x4ab711);
{u32 ea_=u32(r4(R+24)+u32(92u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B4ab714:{NFSU2_TR(0x4ab714);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ab719ull));
TAIL_STATIC(0x75bed4u,75b);
}
B4ab719:L4ab719:{c.instructions+=5;NFSU2_TR(0x4ab719);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ab71a:{NFSU2_TR(0x4ab71a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ab71d:{NFSU2_TR(0x4ab71d);
u8 U[4];
w4(U+0,u32(0x78f744ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ab722:{NFSU2_TR(0x4ab722);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ab723:{NFSU2_TR(0x4ab723);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ab728ull));
TAIL_STATIC(0x537be0u,537);
}
B4ab728:L4ab728:{c.instructions+=5;NFSU2_TR(0x4ab728);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ab72b:{NFSU2_TR(0x4ab72b);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ab72d:{NFSU2_TR(0x4ab72d);
u8 U[4];
w4(U+0,u32(0x78f228ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ab732:{NFSU2_TR(0x4ab732);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ab733:{NFSU2_TR(0x4ab733);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ab738ull));
TAIL_STATIC(0x51cf70u,51c);
}
B4ab738:L4ab738:{c.instructions+=5;NFSU2_TR(0x4ab738);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4ab73b:{NFSU2_TR(0x4ab73b);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ab73d:{NFSU2_TR(0x4ab73d);
u8 U[4];
w4(U+0,u32(0x78f228ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ab742:{NFSU2_TR(0x4ab742);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ab743:{NFSU2_TR(0x4ab743);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ab748ull));
TAIL_STATIC(0x51cf70u,51c);
}
B4ab748:L4ab748:{c.instructions+=2;NFSU2_TR(0x4ab748);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
}
B4ab74b:{NFSU2_TR(0x4ab74b);
{goto L4ab74f;}
}
B4ab74d:L4ab74d:{c.instructions+=1;NFSU2_TR(0x4ab74d);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B4ab74f:L4ab74f:{c.instructions+=3;NFSU2_TR(0x4ab74f);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x79ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4ab752:{NFSU2_TR(0x4ab752);
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
B4ab754:{NFSU2_TR(0x4ab754);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ab774;}}
}
B4ab756:L4ab756:{c.instructions+=3;NFSU2_TR(0x4ab756);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ab759:{NFSU2_TR(0x4ab759);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ab75a:{NFSU2_TR(0x4ab75a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ab75full));
TAIL_STATIC(0x50ca00u,50c);
}
B4ab75f:L4ab75f:{c.instructions+=3;NFSU2_TR(0x4ab75f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ab762:{NFSU2_TR(0x4ab762);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ab763:{NFSU2_TR(0x4ab763);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ab768ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4ab768:L4ab768:{c.instructions+=3;NFSU2_TR(0x4ab768);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4ab76b:{NFSU2_TR(0x4ab76b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ab76c:{NFSU2_TR(0x4ab76c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ab771ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4ab771:L4ab771:{c.instructions+=1;NFSU2_TR(0x4ab771);
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
B4ab774:L4ab774:{c.instructions+=2;NFSU2_TR(0x4ab774);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ab775:{NFSU2_TR(0x4ab775);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ab780:L4ab780:{c.instructions+=14;NFSU2_TR(0x4ab780);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ab781:{NFSU2_TR(0x4ab781);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ab782:{NFSU2_TR(0x4ab782);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ab783:{NFSU2_TR(0x4ab783);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ab784:{NFSU2_TR(0x4ab784);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ab785:{NFSU2_TR(0x4ab785);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4ab789:{NFSU2_TR(0x4ab789);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4ab78c:{NFSU2_TR(0x4ab78c);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xa46aaea8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4ab792:{NFSU2_TR(0x4ab792);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B4ab795:{NFSU2_TR(0x4ab795);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4ab797:{NFSU2_TR(0x4ab797);
__builtin_memmove((R+12),(R+4),4);
}
B4ab799:{NFSU2_TR(0x4ab799);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ab79d:{NFSU2_TR(0x4ab79d);
u8 U[5];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),1);
s1(u32(r4(U+0)),r1(U+4));
}
B4ab7a1:{NFSU2_TR(0x4ab7a1);
if(r1(R+518)){{goto L4ab7ab;}}
}
B4ab7a3:L4ab7a3:{c.instructions+=3;NFSU2_TR(0x4ab7a3);
{u32 ea_=u32(r4(R+28)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B4ab7a6:{NFSU2_TR(0x4ab7a6);
{u32 ea_=u32(r4(R+28)+u32(12u));__asm__ volatile(".byte 0xd8,0x38"::"a"(ea_):"memory");}
}
B4ab7a9:{NFSU2_TR(0x4ab7a9);
{goto L4ab7ae;}
}
B4ab7ab:L4ab7ab:{c.instructions+=1;NFSU2_TR(0x4ab7ab);
{u32 ea_=u32(r4(R+28)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4ab7ae:L4ab7ae:{c.instructions+=1;NFSU2_TR(0x4ab7ae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ab7b3ull));
TAIL_STATIC(0x75bed4u,75b);
}
B4ab7b3:L4ab7b3:{c.instructions+=4;NFSU2_TR(0x4ab7b3);
__builtin_memmove((R+20),(R+0),4);
}
B4ab7b5:{NFSU2_TR(0x4ab7b5);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x28ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4ab7b8:{NFSU2_TR(0x4ab7b8);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4ab7ba:{NFSU2_TR(0x4ab7ba);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ab87b;}}
}
B4ab7c0:L4ab7c0:{c.instructions+=5;NFSU2_TR(0x4ab7c0);
{u32 ea_=u32(r4(R+28)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4ab7c3:{NFSU2_TR(0x4ab7c3);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4ab7c9:{NFSU2_TR(0x4ab7c9);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4ab7cb:{NFSU2_TR(0x4ab7cb);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4ab7ce:{NFSU2_TR(0x4ab7ce);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L4ab87b;}}
}
B4ab7d4:L4ab7d4:{c.instructions+=3;NFSU2_TR(0x4ab7d4);
__builtin_memmove((R+0),gp(0x89e7d9),1);
}
B4ab7d9:{NFSU2_TR(0x4ab7d9);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4ab7db:{NFSU2_TR(0x4ab7db);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ab7e6;}}
}
B4ab7dd:L4ab7dd:{c.instructions+=3;NFSU2_TR(0x4ab7dd);
__builtin_memmove((R+0),gp(0x890104),4);
}
B4ab7e2:{NFSU2_TR(0x4ab7e2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ab7e4:{NFSU2_TR(0x4ab7e4);
if(r1(R+518)){{goto L4ab83a;}}
}
B4ab7e6:L4ab7e6:{c.instructions+=2;NFSU2_TR(0x4ab7e6);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xa46aaea8ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4ab7ec:{NFSU2_TR(0x4ab7ec);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ab83a;}}
}
B4ab7ee:L4ab7ee:{c.instructions+=5;NFSU2_TR(0x4ab7ee);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ab7f1:{NFSU2_TR(0x4ab7f1);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4ab7f5:{NFSU2_TR(0x4ab7f5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ab7f6:{NFSU2_TR(0x4ab7f6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ab7f7:{NFSU2_TR(0x4ab7f7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ab7fcull));
TAIL_STATIC(0x51d7f0u,51d);
}
B4ab7fc:L4ab7fc:{c.instructions+=5;NFSU2_TR(0x4ab7fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x64ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ab7ff:{NFSU2_TR(0x4ab7ff);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4ab803:{NFSU2_TR(0x4ab803);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ab804:{NFSU2_TR(0x4ab804);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ab805:{NFSU2_TR(0x4ab805);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ab80aull));
TAIL_STATIC(0x51d7f0u,51d);
}
B4ab80a:L4ab80a:{c.instructions+=1;NFSU2_TR(0x4ab80a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4ab80d:L4ab80d:{c.instructions+=3;NFSU2_TR(0x4ab80d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ab810:{NFSU2_TR(0x4ab810);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4ab813:{NFSU2_TR(0x4ab813);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4ab8d8;}}
}
B4ab819:L4ab819:{c.instructions+=3;NFSU2_TR(0x4ab819);
u8 U[5];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B4ab81d:{NFSU2_TR(0x4ab81d);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4ab81f:{NFSU2_TR(0x4ab81f);
if(r1(R+518)){{goto L4ab8d8;}}
}
B4ab825:L4ab825:{c.instructions+=5;NFSU2_TR(0x4ab825);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ab826:{NFSU2_TR(0x4ab826);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ab827:{NFSU2_TR(0x4ab827);
u8 U[4];
w4(U+0,u32(0x790ac0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ab82c:{NFSU2_TR(0x4ab82c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ab82d:{NFSU2_TR(0x4ab82d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ab832ull));
TAIL_STATIC(0x537be0u,537);
}
B4ab832:L4ab832:{c.instructions+=2;NFSU2_TR(0x4ab832);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4ab835:{NFSU2_TR(0x4ab835);
{goto L4ab8e7;}
}
B4ab83a:L4ab83a:{c.instructions+=5;NFSU2_TR(0x4ab83a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4ab83d:{NFSU2_TR(0x4ab83d);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4ab841:{NFSU2_TR(0x4ab841);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ab842:{NFSU2_TR(0x4ab842);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ab843:{NFSU2_TR(0x4ab843);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ab848ull));
TAIL_STATIC(0x51d7f0u,51d);
}
B4ab848:L4ab848:{c.instructions+=5;NFSU2_TR(0x4ab848);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x60ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ab84b:{NFSU2_TR(0x4ab84b);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4ab84f:{NFSU2_TR(0x4ab84f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ab850:{NFSU2_TR(0x4ab850);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ab851:{NFSU2_TR(0x4ab851);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ab856ull));
TAIL_STATIC(0x51d7f0u,51d);
}
B4ab856:L4ab856:{c.instructions+=4;NFSU2_TR(0x4ab856);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ab859:{NFSU2_TR(0x4ab859);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4ab85c:{NFSU2_TR(0x4ab85c);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4ab85f:{NFSU2_TR(0x4ab85f);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4ab8d0;}}
}
B4ab861:L4ab861:{c.instructions+=3;NFSU2_TR(0x4ab861);
u8 U[5];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B4ab865:{NFSU2_TR(0x4ab865);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4ab867:{NFSU2_TR(0x4ab867);
if(r1(R+518)){{goto L4ab8d0;}}
}
B4ab869:L4ab869:{c.instructions+=5;NFSU2_TR(0x4ab869);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ab86a:{NFSU2_TR(0x4ab86a);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ab86b:{NFSU2_TR(0x4ab86b);
u8 U[4];
w4(U+0,u32(0x790ab4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ab870:{NFSU2_TR(0x4ab870);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ab871:{NFSU2_TR(0x4ab871);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ab876ull));
TAIL_STATIC(0x537be0u,537);
}
B4ab876:L4ab876:{c.instructions+=2;NFSU2_TR(0x4ab876);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4ab879:{NFSU2_TR(0x4ab879);
{goto L4ab8e7;}
}
B4ab87b:L4ab87b:{c.instructions+=5;NFSU2_TR(0x4ab87b);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ab87e:{NFSU2_TR(0x4ab87e);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B4ab882:{NFSU2_TR(0x4ab882);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ab883:{NFSU2_TR(0x4ab883);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ab884:{NFSU2_TR(0x4ab884);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ab889ull));
TAIL_STATIC(0x51d7f0u,51d);
}
B4ab889:L4ab889:{c.instructions+=5;NFSU2_TR(0x4ab889);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x68ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4ab88c:{NFSU2_TR(0x4ab88c);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B4ab890:{NFSU2_TR(0x4ab890);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ab891:{NFSU2_TR(0x4ab891);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ab892:{NFSU2_TR(0x4ab892);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ab897ull));
TAIL_STATIC(0x51d7f0u,51d);
}
B4ab897:L4ab897:{c.instructions+=4;NFSU2_TR(0x4ab897);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ab89a:{NFSU2_TR(0x4ab89a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4ab89d:{NFSU2_TR(0x4ab89d);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x1ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4ab8a0:{NFSU2_TR(0x4ab8a0);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4ab8bc;}}
}
B4ab8a2:L4ab8a2:{c.instructions+=3;NFSU2_TR(0x4ab8a2);
u8 U[5];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B4ab8a6:{NFSU2_TR(0x4ab8a6);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4ab8a8:{NFSU2_TR(0x4ab8a8);
if(r1(R+518)){{goto L4ab8bc;}}
}
B4ab8aa:L4ab8aa:{c.instructions+=5;NFSU2_TR(0x4ab8aa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ab8ab:{NFSU2_TR(0x4ab8ab);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ab8ac:{NFSU2_TR(0x4ab8ac);
u8 U[4];
w4(U+0,u32(0x790ac0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ab8b1:{NFSU2_TR(0x4ab8b1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ab8b2:{NFSU2_TR(0x4ab8b2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ab8b7ull));
TAIL_STATIC(0x537be0u,537);
}
B4ab8b7:L4ab8b7:{c.instructions+=1;NFSU2_TR(0x4ab8b7);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4ab80au);}goto L4ab80a;}
}
B4ab8bc:L4ab8bc:{c.instructions+=4;NFSU2_TR(0x4ab8bc);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ab8bd:{NFSU2_TR(0x4ab8bd);
u8 U[4];
w4(U+0,u32(0x78f744ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ab8c2:{NFSU2_TR(0x4ab8c2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ab8c3:{NFSU2_TR(0x4ab8c3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ab8c8ull));
TAIL_STATIC(0x537be0u,537);
}
B4ab8c8:L4ab8c8:{c.instructions+=2;NFSU2_TR(0x4ab8c8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4ab8cb:{NFSU2_TR(0x4ab8cb);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4ab80du);}goto L4ab80d;}
}
B4ab8d0:L4ab8d0:{c.instructions+=3;NFSU2_TR(0x4ab8d0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ab8d1:{NFSU2_TR(0x4ab8d1);
u8 U[4];
w4(U+0,u32(0x790aacull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ab8d6:{NFSU2_TR(0x4ab8d6);
{goto L4ab8de;}
}
B4ab8d8:L4ab8d8:{c.instructions+=2;NFSU2_TR(0x4ab8d8);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ab8d9:{NFSU2_TR(0x4ab8d9);
u8 U[4];
w4(U+0,u32(0x78f744ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ab8de:L4ab8de:{c.instructions+=2;NFSU2_TR(0x4ab8de);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ab8df:{NFSU2_TR(0x4ab8df);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ab8e4ull));
TAIL_STATIC(0x537be0u,537);
}
B4ab8e4:L4ab8e4:{c.instructions+=1;NFSU2_TR(0x4ab8e4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4ab8e7:L4ab8e7:{c.instructions+=4;NFSU2_TR(0x4ab8e7);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ab8ea:{NFSU2_TR(0x4ab8ea);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ab8eb:{NFSU2_TR(0x4ab8eb);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ab8ec:{NFSU2_TR(0x4ab8ec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ab8f1ull));
TAIL_STATIC(0x50c900u,50c);
}
B4ab8f1:L4ab8f1:{c.instructions+=3;NFSU2_TR(0x4ab8f1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4ab8f4:{NFSU2_TR(0x4ab8f4);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4ab8f6:{NFSU2_TR(0x4ab8f6);
if(r1(R+518)){{goto L4ab93b;}}
}
B4ab8f8:L4ab8f8:{c.instructions+=2;NFSU2_TR(0x4ab8f8);
u8 U[7];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B4ab8fc:{NFSU2_TR(0x4ab8fc);
if(r1(R+518)){{goto L4ab969;}}
}
B4ab8fe:L4ab8fe:{c.instructions+=3;NFSU2_TR(0x4ab8fe);
u8 U[4];
w4(U+0,u32(0x790aa4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ab903:{NFSU2_TR(0x4ab903);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ab904:{NFSU2_TR(0x4ab904);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ab909ull));
TAIL_STATIC(0x51d040u,51d);
}
B4ab909:L4ab909:{c.instructions+=3;NFSU2_TR(0x4ab909);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4ab90c:{NFSU2_TR(0x4ab90c);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4ab90e:{NFSU2_TR(0x4ab90e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ab93b;}}
}
B4ab910:L4ab910:{c.instructions+=4;NFSU2_TR(0x4ab910);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ab912:{NFSU2_TR(0x4ab912);
u8 U[4];
w4(U+0,u32(0x790a9cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ab917:{NFSU2_TR(0x4ab917);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ab918:{NFSU2_TR(0x4ab918);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ab91dull));
TAIL_STATIC(0x51cf70u,51c);
}
B4ab91d:L4ab91d:{c.instructions+=6;NFSU2_TR(0x4ab91d);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4ab921:{NFSU2_TR(0x4ab921);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x79ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4ab924:{NFSU2_TR(0x4ab924);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4ab927:{NFSU2_TR(0x4ab927);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4ab929:{NFSU2_TR(0x4ab929);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ab92a:{NFSU2_TR(0x4ab92a);
if(r1(R+518)){{goto L4ab933;}}
}
B4ab92c:L4ab92c:{c.instructions+=1;NFSU2_TR(0x4ab92c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ab931ull));
TAIL_STATIC(0x50ca50u,50c);
}
B4ab931:L4ab931:{c.instructions+=1;NFSU2_TR(0x4ab931);
{goto L4ab938;}
}
B4ab933:L4ab933:{c.instructions+=1;NFSU2_TR(0x4ab933);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ab938ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4ab938:L4ab938:{c.instructions+=1;NFSU2_TR(0x4ab938);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4ab93b:L4ab93b:{c.instructions+=2;NFSU2_TR(0x4ab93b);
u8 U[7];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B4ab93f:{NFSU2_TR(0x4ab93f);
if(r1(R+518)){{goto L4ab969;}}
}
B4ab941:L4ab941:{c.instructions+=3;NFSU2_TR(0x4ab941);
u8 U[4];
w4(U+0,u32(0x790aa4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ab946:{NFSU2_TR(0x4ab946);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ab947:{NFSU2_TR(0x4ab947);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ab94cull));
TAIL_STATIC(0x51d040u,51d);
}
B4ab94c:L4ab94c:{c.instructions+=3;NFSU2_TR(0x4ab94c);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4ab94f:{NFSU2_TR(0x4ab94f);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4ab951:{NFSU2_TR(0x4ab951);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ab969;}}
}
B4ab953:L4ab953:{c.instructions+=4;NFSU2_TR(0x4ab953);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ab955:{NFSU2_TR(0x4ab955);
u8 U[4];
w4(U+0,u32(0x790a9cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ab95a:{NFSU2_TR(0x4ab95a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ab95b:{NFSU2_TR(0x4ab95b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ab960ull));
TAIL_STATIC(0x51cf70u,51c);
}
B4ab960:L4ab960:{c.instructions+=2;NFSU2_TR(0x4ab960);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ab961:{NFSU2_TR(0x4ab961);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ab966ull));
TAIL_STATIC(0x50ca50u,50c);
}
B4ab966:L4ab966:{c.instructions+=1;NFSU2_TR(0x4ab966);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4ab969:L4ab969:{c.instructions+=3;NFSU2_TR(0x4ab969);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4ab96c:{NFSU2_TR(0x4ab96c);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4ab96e:{NFSU2_TR(0x4ab96e);
if(r1(R+518)){{goto L4ab9cd;}}
}
B4ab970:L4ab970:{c.instructions+=3;NFSU2_TR(0x4ab970);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ab973:{NFSU2_TR(0x4ab973);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4ab976:{NFSU2_TR(0x4ab976);
if(r1(R+518)){{goto L4ab984;}}
}
B4ab978:L4ab978:{c.instructions+=3;NFSU2_TR(0x4ab978);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+4),(U+4),1);
}
B4ab97b:{NFSU2_TR(0x4ab97b);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(r1(R+4))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4ab97d:{NFSU2_TR(0x4ab97d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ab9cd;}}
}
B4ab97f:L4ab97f:{c.instructions+=2;NFSU2_TR(0x4ab97f);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x5ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B4ab982:{NFSU2_TR(0x4ab982);
if(r1(R+518)){{goto L4ab9cd;}}
}
B4ab984:L4ab984:{c.instructions+=4;NFSU2_TR(0x4ab984);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ab986:{NFSU2_TR(0x4ab986);
u8 U[4];
w4(U+0,u32(0x790aa4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ab98b:{NFSU2_TR(0x4ab98b);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ab98c:{NFSU2_TR(0x4ab98c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ab991ull));
TAIL_STATIC(0x51cf70u,51c);
}
B4ab991:L4ab991:{c.instructions+=5;NFSU2_TR(0x4ab991);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4ab995:{NFSU2_TR(0x4ab995);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x79ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B4ab998:{NFSU2_TR(0x4ab998);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4ab99b:{NFSU2_TR(0x4ab99b);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4ab99d:{NFSU2_TR(0x4ab99d);
if(r1(R+518)){{goto L4ab9c6;}}
}
B4ab99f:L4ab99f:{c.instructions+=6;NFSU2_TR(0x4ab99f);
{u32 ea_=u32(r4(R+28)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B4ab9a2:{NFSU2_TR(0x4ab9a2);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ab9a4:{NFSU2_TR(0x4ab9a4);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B4ab9aa:{NFSU2_TR(0x4ab9aa);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B4ab9ac:{NFSU2_TR(0x4ab9ac);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B4ab9af:{NFSU2_TR(0x4ab9af);
if(r1(R+514)){{goto L4ab9b8;}}
}
B4ab9b1:L4ab9b1:{c.instructions+=2;NFSU2_TR(0x4ab9b1);
u8 U[4];
w4(U+0,u32(0x790a8cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ab9b6:{NFSU2_TR(0x4ab9b6);
{goto L4ab9bd;}
}
B4ab9b8:L4ab9b8:{c.instructions+=1;NFSU2_TR(0x4ab9b8);
u8 U[4];
w4(U+0,u32(0x790aa4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ab9bd:L4ab9bd:{c.instructions+=2;NFSU2_TR(0x4ab9bd);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ab9be:{NFSU2_TR(0x4ab9be);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4ab9c3ull));
TAIL_STATIC(0x51cf70u,51c);
}
B4ab9c3:L4ab9c3:{c.instructions+=1;NFSU2_TR(0x4ab9c3);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4ab9c6:L4ab9c6:{c.instructions+=1;NFSU2_TR(0x4ab9c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x24ull))));
w4(U+4,u32(0x5ull));
s4(u32(r4(U+0)),r4(U+4));
}
B4ab9cd:L4ab9cd:{c.instructions+=3;NFSU2_TR(0x4ab9cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4ab9d0:{NFSU2_TR(0x4ab9d0);
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
B4ab9d2:{NFSU2_TR(0x4ab9d2);
if(r1(R+518)){{goto L4ab9db;}}
}
B4ab9d4:L4ab9d4:{c.instructions+=2;NFSU2_TR(0x4ab9d4);
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
B4ab9d9:{NFSU2_TR(0x4ab9d9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4ab9e7;}}
}
B4ab9db:L4ab9db:{c.instructions+=3;NFSU2_TR(0x4ab9db);
u8 U[5];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x20ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B4ab9df:{NFSU2_TR(0x4ab9df);
__builtin_memmove((R+0),gp(0x86518c),4);
}
B4ab9e4:{NFSU2_TR(0x4ab9e4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B4ab9e7:L4ab9e7:{c.instructions+=6;NFSU2_TR(0x4ab9e7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4ab9e8:{NFSU2_TR(0x4ab9e8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4ab9e9:{NFSU2_TR(0x4ab9e9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B4ab9ea:{NFSU2_TR(0x4ab9ea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4ab9eb:{NFSU2_TR(0x4ab9eb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B4ab9ec:{NFSU2_TR(0x4ab9ec);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4ab9f0:L4ab9f0:{c.instructions+=3;NFSU2_TR(0x4ab9f0);
u8 U[5];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B4ab9f5:{NFSU2_TR(0x4ab9f5);
w1(R+512,u8((r4(R+0))<(u32(0x2ull))));
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B4ab9f8:{NFSU2_TR(0x4ab9f8);
if(r1(R+518)){{goto L4aba0c;}}
}
B4ab9fa:L4ab9fa:{c.instructions+=2;NFSU2_TR(0x4ab9fa);
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
B4ab9fb:{NFSU2_TR(0x4ab9fb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4aba2d;}}
}
B4ab9fd:L4ab9fd:{c.instructions+=3;NFSU2_TR(0x4ab9fd);
u8 U[4];
w4(U+0,u32(0xeull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4ab9ff:{NFSU2_TR(0x4ab9ff);
u8 U[4];
w4(U+0,u32(0xbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aba01:{NFSU2_TR(0x4aba01);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4aba06ull));
TAIL_STATIC(0x51de30u,51d);
}
B4aba06:L4aba06:{c.instructions+=2;NFSU2_TR(0x4aba06);
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
B4aba09:{NFSU2_TR(0x4aba09);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4aba0c:L4aba0c:{c.instructions+=2;NFSU2_TR(0x4aba0c);
u8 U[7];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x13ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B4aba10:{NFSU2_TR(0x4aba10);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4aba21;}}
}
B4aba12:L4aba12:{c.instructions+=3;NFSU2_TR(0x4aba12);
u8 U[4];
w4(U+0,u32(0xfull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aba14:{NFSU2_TR(0x4aba14);
u8 U[4];
w4(U+0,u32(0xbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aba16:{NFSU2_TR(0x4aba16);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4aba1bull));
TAIL_STATIC(0x51de30u,51d);
}
B4aba1b:L4aba1b:{c.instructions+=2;NFSU2_TR(0x4aba1b);
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
B4aba1e:{NFSU2_TR(0x4aba1e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4aba21:L4aba21:{c.instructions+=3;NFSU2_TR(0x4aba21);
u8 U[4];
w4(U+0,u32(0xdull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aba23:{NFSU2_TR(0x4aba23);
u8 U[4];
w4(U+0,u32(0xbull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aba25:{NFSU2_TR(0x4aba25);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4aba2aull));
TAIL_STATIC(0x51de30u,51d);
}
B4aba2a:L4aba2a:{c.instructions+=1;NFSU2_TR(0x4aba2a);
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
B4aba2d:L4aba2d:{c.instructions+=1;NFSU2_TR(0x4aba2d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4aba30:L4aba30:{c.instructions+=6;NFSU2_TR(0x4aba30);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aba31:{NFSU2_TR(0x4aba31);
__builtin_memmove((R+24),(R+4),4);
}
B4aba33:{NFSU2_TR(0x4aba33);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
w4(R+0,u32(s32(s8(r1(U+0)))));
}
B4aba36:{NFSU2_TR(0x4aba36);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffeull))));
}
B4aba39:{NFSU2_TR(0x4aba39);
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
B4aba3c:{NFSU2_TR(0x4aba3c);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4abad0;}}
}
B4aba42:L4aba42:{c.instructions+=1;NFSU2_TR(0x4aba42);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x4abad4ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4aba49:L4aba49:{c.instructions+=5;NFSU2_TR(0x4aba49);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4aba4c:{NFSU2_TR(0x4aba4c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4aba4e:{NFSU2_TR(0x4aba4e);
u8 U[4];
w4(U+0,u32(0x6fff0767ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aba53:{NFSU2_TR(0x4aba53);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aba54:{NFSU2_TR(0x4aba54);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4aba59ull));
TAIL_STATIC(0x50c990u,50c);
}
B4aba59:L4aba59:{c.instructions+=5;NFSU2_TR(0x4aba59);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4aba5c:{NFSU2_TR(0x4aba5c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+24),(U+0),4);
}
B4aba5e:{NFSU2_TR(0x4aba5e);
u8 U[4];
w4(U+0,u32(0x78f6bcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aba63:{NFSU2_TR(0x4aba63);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aba64:{NFSU2_TR(0x4aba64);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4aba69ull));
TAIL_STATIC(0x51d040u,51d);
}
B4aba69:L4aba69:{c.instructions+=3;NFSU2_TR(0x4aba69);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4aba6c:{NFSU2_TR(0x4aba6c);
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
B4aba6e:{NFSU2_TR(0x4aba6e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4abad0;}}
}
B4aba70:L4aba70:{c.instructions+=4;NFSU2_TR(0x4aba70);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aba72:{NFSU2_TR(0x4aba72);
u8 U[4];
w4(U+0,u32(0x78f6bcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aba77:{NFSU2_TR(0x4aba77);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aba78:{NFSU2_TR(0x4aba78);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4aba7dull));
TAIL_STATIC(0x51cf70u,51c);
}
B4aba7d:L4aba7d:{c.instructions+=3;NFSU2_TR(0x4aba7d);
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
B4aba80:{NFSU2_TR(0x4aba80);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4aba81:{NFSU2_TR(0x4aba81);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4aba84:L4aba84:{c.instructions+=5;NFSU2_TR(0x4aba84);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4aba87:{NFSU2_TR(0x4aba87);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4aba89:{NFSU2_TR(0x4aba89);
u8 U[4];
w4(U+0,u32(0x6fff0767ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aba8e:{NFSU2_TR(0x4aba8e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aba8f:{NFSU2_TR(0x4aba8f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4aba94ull));
TAIL_STATIC(0x50c990u,50c);
}
B4aba94:L4aba94:{c.instructions+=5;NFSU2_TR(0x4aba94);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4aba97:{NFSU2_TR(0x4aba97);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+24),(U+0),4);
}
B4aba99:{NFSU2_TR(0x4aba99);
u8 U[4];
w4(U+0,u32(0x78f9d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aba9e:{NFSU2_TR(0x4aba9e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4aba9f:{NFSU2_TR(0x4aba9f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4abaa4ull));
TAIL_STATIC(0x51d040u,51d);
}
B4abaa4:L4abaa4:{c.instructions+=2;NFSU2_TR(0x4abaa4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B4abaa7:{NFSU2_TR(0x4abaa7);
{goto L4ababc;}
}
B4abaa9:L4abaa9:{c.instructions+=5;NFSU2_TR(0x4abaa9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4abaac:{NFSU2_TR(0x4abaac);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+24),(U+0),4);
}
B4abaae:{NFSU2_TR(0x4abaae);
u8 U[4];
w4(U+0,u32(0x78f9d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4abab3:{NFSU2_TR(0x4abab3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4abab4:{NFSU2_TR(0x4abab4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4abab9ull));
TAIL_STATIC(0x51d040u,51d);
}
B4abab9:L4abab9:{c.instructions+=1;NFSU2_TR(0x4abab9);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4ababc:L4ababc:{c.instructions+=2;NFSU2_TR(0x4ababc);
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
B4ababe:{NFSU2_TR(0x4ababe);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4abad0;}}
}
B4abac0:L4abac0:{c.instructions+=4;NFSU2_TR(0x4abac0);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4abac2:{NFSU2_TR(0x4abac2);
u8 U[4];
w4(U+0,u32(0x78f9d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4abac7:{NFSU2_TR(0x4abac7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4abac8:{NFSU2_TR(0x4abac8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4abacdull));
TAIL_STATIC(0x51cf70u,51c);
}
B4abacd:L4abacd:{c.instructions+=1;NFSU2_TR(0x4abacd);
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
B4abad0:L4abad0:{c.instructions+=2;NFSU2_TR(0x4abad0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4abad1:{NFSU2_TR(0x4abad1);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4abaf0:L4abaf0:{c.instructions+=7;NFSU2_TR(0x4abaf0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x10ull))));
}
B4abaf3:{NFSU2_TR(0x4abaf3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4abaf4:{NFSU2_TR(0x4abaf4);
__builtin_memmove((R+24),(R+4),4);
}
B4abaf6:{NFSU2_TR(0x4abaf6);
u8 U[1];
__builtin_memmove((U+0),gp(u32(r4(R+24))),1);
w4(R+0,u32(s32(s8(r1(U+0)))));
}
B4abaf9:{NFSU2_TR(0x4abaf9);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0xfffffffeull))));
}
B4abafc:{NFSU2_TR(0x4abafc);
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
B4abaff:{NFSU2_TR(0x4abaff);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4abe2d;}}
}
B4abb05:L4abb05:{c.instructions+=2;NFSU2_TR(0x4abb05);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4abb06:{NFSU2_TR(0x4abb06);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x4abe34ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4abb0d:L4abb0d:{c.instructions+=6;NFSU2_TR(0x4abb0d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4abb10:{NFSU2_TR(0x4abb10);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4abb12:{NFSU2_TR(0x4abb12);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4abb13:{NFSU2_TR(0x4abb13);
u8 U[4];
w4(U+0,u32(0x6fff0767ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4abb18:{NFSU2_TR(0x4abb18);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4abb19:{NFSU2_TR(0x4abb19);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4abb1eull));
TAIL_STATIC(0x50c990u,50c);
}
B4abb1e:L4abb1e:{c.instructions+=6;NFSU2_TR(0x4abb1e);
__builtin_memmove((R+28),gp(0x861e60),4);
}
B4abb24:{NFSU2_TR(0x4abb24);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4abb27:{NFSU2_TR(0x4abb27);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
}
B4abb28:{NFSU2_TR(0x4abb28);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4abb2a:{NFSU2_TR(0x4abb2a);
w4(R+12,u32(0x8ull));
}
B4abb2f:{NFSU2_TR(0x4abb2f);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L4abb55;}}
}
B4abb31:L4abb31:{c.instructions+=3;NFSU2_TR(0x4abb31);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4abb32:{NFSU2_TR(0x4abb32);
w4(R+4,u32(0x860a60ull));
}
B4abb37:{NFSU2_TR(0x4abb37);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4abb3cull));
TAIL_STATIC(0x5014a0u,501);
}
B4abb3c:L4abb3c:{c.instructions+=2;NFSU2_TR(0x4abb3c);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B4abb40:{NFSU2_TR(0x4abb40);
if(r1(R+518)){{goto L4abb48;}}
}
B4abb42:L4abb42:{c.instructions+=2;NFSU2_TR(0x4abb42);
u8 U[7];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x6ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x1ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B4abb46:{NFSU2_TR(0x4abb46);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4abb4f;}}
}
B4abb48:L4abb48:{c.instructions+=3;NFSU2_TR(0x4abb48);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
}
B4abb49:{NFSU2_TR(0x4abb49);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4abb4b:{NFSU2_TR(0x4abb4b);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x4abb31u);}goto L4abb31;}}
}
B4abb4d:L4abb4d:{c.instructions+=1;NFSU2_TR(0x4abb4d);
{goto L4abb55;}
}
B4abb4f:L4abb4f:{c.instructions+=2;NFSU2_TR(0x4abb4f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B4abb51:{NFSU2_TR(0x4abb51);
u8 U[5];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+12,u32(s32(s8(r1(U+4)))));
}
B4abb55:L4abb55:{c.instructions+=4;NFSU2_TR(0x4abb55);
u8 U[4];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B4abb59:{NFSU2_TR(0x4abb59);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4abb5a:{NFSU2_TR(0x4abb5a);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4abb5b:{NFSU2_TR(0x4abb5b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4abb60ull));
TAIL_STATIC(0x4974a0u,497);
}
B4abb60:L4abb60:{c.instructions+=5;NFSU2_TR(0x4abb60);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4abb63:{NFSU2_TR(0x4abb63);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4abb66:{NFSU2_TR(0x4abb66);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4abb67:{NFSU2_TR(0x4abb67);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4abb68:{NFSU2_TR(0x4abb68);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4abb6dull));
TAIL_STATIC(0x50c990u,50c);
}
B4abb6d:L4abb6d:{c.instructions+=4;NFSU2_TR(0x4abb6d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4abb70:{NFSU2_TR(0x4abb70);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4abb73:{NFSU2_TR(0x4abb73);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4abb74:{NFSU2_TR(0x4abb74);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4abb79ull));
TAIL_STATIC(0x50ca50u,50c);
}
B4abb79:L4abb79:{c.instructions+=4;NFSU2_TR(0x4abb79);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4abb7c:{NFSU2_TR(0x4abb7c);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4abb7f:{NFSU2_TR(0x4abb7f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4abb80:{NFSU2_TR(0x4abb80);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4abb85ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4abb85:L4abb85:{c.instructions+=4;NFSU2_TR(0x4abb85);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4abb88:{NFSU2_TR(0x4abb88);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4abb8b:{NFSU2_TR(0x4abb8b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4abb8c:{NFSU2_TR(0x4abb8c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4abb91ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4abb91:L4abb91:{c.instructions+=4;NFSU2_TR(0x4abb91);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4abb94:{NFSU2_TR(0x4abb94);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4abb97:{NFSU2_TR(0x4abb97);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4abb98:{NFSU2_TR(0x4abb98);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4abb9dull));
TAIL_STATIC(0x50ca50u,50c);
}
B4abb9d:L4abb9d:{c.instructions+=5;NFSU2_TR(0x4abb9d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4abba0:{NFSU2_TR(0x4abba0);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4abba3:{NFSU2_TR(0x4abba3);
u8 U[4];
w4(U+0,u32(0x790ad8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4abba8:{NFSU2_TR(0x4abba8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4abba9:{NFSU2_TR(0x4abba9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4abbaeull));
TAIL_STATIC(0x51d040u,51d);
}
B4abbae:L4abbae:{c.instructions+=4;NFSU2_TR(0x4abbae);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x28ull))));
}
B4abbb1:{NFSU2_TR(0x4abbb1);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4abbb3:{NFSU2_TR(0x4abbb3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B4abbb4:{NFSU2_TR(0x4abbb4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4abc12;}}
}
B4abbb6:L4abbb6:{c.instructions+=2;NFSU2_TR(0x4abbb6);
u8 U[4];
w4(U+0,u32(0x790ad8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4abbbb:{NFSU2_TR(0x4abbbb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4abbc0ull));
TAIL_STATIC(0x505450u,505);
}
B4abbc0:L4abbc0:{c.instructions+=5;NFSU2_TR(0x4abbc0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4abbc3:{NFSU2_TR(0x4abbc3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4abbc6:{NFSU2_TR(0x4abbc6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B4abbc9:{NFSU2_TR(0x4abbc9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4abbca:{NFSU2_TR(0x4abbca);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4abbcfull));
TAIL_STATIC(0x5046b0u,504);
}
B4abbcf:L4abbcf:{c.instructions+=2;NFSU2_TR(0x4abbcf);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B4abbd1:{NFSU2_TR(0x4abbd1);
if(r1(R+518)){{goto L4abbea;}}
}
B4abbd3:L4abbd3:{c.instructions+=3;NFSU2_TR(0x4abbd3);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4abbd5:{NFSU2_TR(0x4abbd5);
__builtin_memmove((R+4),(R+0),4);
}
B4abbd7:{NFSU2_TR(0x4abbd7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4abbdcull));
TAIL_STATIC(0x504a00u,504);
}
B4abbdc:L4abbdc:{c.instructions+=5;NFSU2_TR(0x4abbdc);
u8 U[4];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B4abbe0:{NFSU2_TR(0x4abbe0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4abbe1:{NFSU2_TR(0x4abbe1);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4abbe3:{NFSU2_TR(0x4abbe3);
__builtin_memmove((R+4),(R+0),4);
}
B4abbe5:{NFSU2_TR(0x4abbe5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4abbeaull));
TAIL_STATIC(0x535570u,535);
}
B4abbea:L4abbea:{c.instructions+=5;NFSU2_TR(0x4abbea);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4abbed:{NFSU2_TR(0x4abbed);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4abbf0:{NFSU2_TR(0x4abbf0);
u8 U[4];
w4(U+0,u32(0x790ad8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4abbf5:{NFSU2_TR(0x4abbf5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4abbf6:{NFSU2_TR(0x4abbf6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4abbfbull));
TAIL_STATIC(0x51d040u,51d);
}
B4abbfb:L4abbfb:{c.instructions+=3;NFSU2_TR(0x4abbfb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4abbfe:{NFSU2_TR(0x4abbfe);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4abc00:{NFSU2_TR(0x4abc00);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4abc12;}}
}
B4abc02:L4abc02:{c.instructions+=4;NFSU2_TR(0x4abc02);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4abc04:{NFSU2_TR(0x4abc04);
u8 U[4];
w4(U+0,u32(0x790ad8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4abc09:{NFSU2_TR(0x4abc09);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4abc0a:{NFSU2_TR(0x4abc0a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4abc0full));
TAIL_STATIC(0x51cf70u,51c);
}
B4abc0f:L4abc0f:{c.instructions+=1;NFSU2_TR(0x4abc0f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4abc12:L4abc12:{c.instructions+=5;NFSU2_TR(0x4abc12);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4abc15:{NFSU2_TR(0x4abc15);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4abc18:{NFSU2_TR(0x4abc18);
u8 U[4];
w4(U+0,u32(0x78fc44ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4abc1d:{NFSU2_TR(0x4abc1d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4abc1e:{NFSU2_TR(0x4abc1e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4abc23ull));
TAIL_STATIC(0x51d040u,51d);
}
B4abc23:L4abc23:{c.instructions+=3;NFSU2_TR(0x4abc23);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4abc26:{NFSU2_TR(0x4abc26);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4abc28:{NFSU2_TR(0x4abc28);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4abc3a;}}
}
B4abc2a:L4abc2a:{c.instructions+=4;NFSU2_TR(0x4abc2a);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4abc2c:{NFSU2_TR(0x4abc2c);
u8 U[4];
w4(U+0,u32(0x78fc44ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4abc31:{NFSU2_TR(0x4abc31);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4abc32:{NFSU2_TR(0x4abc32);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4abc37ull));
TAIL_STATIC(0x51cf70u,51c);
}
B4abc37:L4abc37:{c.instructions+=1;NFSU2_TR(0x4abc37);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4abc3a:L4abc3a:{c.instructions+=5;NFSU2_TR(0x4abc3a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4abc3d:{NFSU2_TR(0x4abc3d);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4abc40:{NFSU2_TR(0x4abc40);
u8 U[4];
w4(U+0,u32(0x790ad0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4abc45:{NFSU2_TR(0x4abc45);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4abc46:{NFSU2_TR(0x4abc46);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4abc4bull));
TAIL_STATIC(0x51d040u,51d);
}
B4abc4b:L4abc4b:{c.instructions+=3;NFSU2_TR(0x4abc4b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4abc4e:{NFSU2_TR(0x4abc4e);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4abc50:{NFSU2_TR(0x4abc50);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4abc62;}}
}
B4abc52:L4abc52:{c.instructions+=4;NFSU2_TR(0x4abc52);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4abc54:{NFSU2_TR(0x4abc54);
u8 U[4];
w4(U+0,u32(0x790ad0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4abc59:{NFSU2_TR(0x4abc59);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4abc5a:{NFSU2_TR(0x4abc5a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4abc5full));
TAIL_STATIC(0x51cf70u,51c);
}
B4abc5f:L4abc5f:{c.instructions+=1;NFSU2_TR(0x4abc5f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4abc62:L4abc62:{c.instructions+=5;NFSU2_TR(0x4abc62);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4abc65:{NFSU2_TR(0x4abc65);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+24),(U+0),4);
}
B4abc67:{NFSU2_TR(0x4abc67);
u8 U[4];
w4(U+0,u32(0x78f6bcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4abc6c:{NFSU2_TR(0x4abc6c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4abc6d:{NFSU2_TR(0x4abc6d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4abc72ull));
TAIL_STATIC(0x51d040u,51d);
}
B4abc72:L4abc72:{c.instructions+=3;NFSU2_TR(0x4abc72);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4abc75:{NFSU2_TR(0x4abc75);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4abc77:{NFSU2_TR(0x4abc77);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4abe2c;}}
}
B4abc7d:L4abc7d:{c.instructions+=4;NFSU2_TR(0x4abc7d);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4abc7f:{NFSU2_TR(0x4abc7f);
u8 U[4];
w4(U+0,u32(0x78f6bcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4abc84:{NFSU2_TR(0x4abc84);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4abc85:{NFSU2_TR(0x4abc85);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4abc8aull));
TAIL_STATIC(0x51cf70u,51c);
}
B4abc8a:L4abc8a:{c.instructions+=5;NFSU2_TR(0x4abc8a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4abc8d:{NFSU2_TR(0x4abc8d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4abc8e:{NFSU2_TR(0x4abc8e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4abc8f:{NFSU2_TR(0x4abc8f);
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
B4abc92:{NFSU2_TR(0x4abc92);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4abc95:L4abc95:{c.instructions+=5;NFSU2_TR(0x4abc95);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4abc98:{NFSU2_TR(0x4abc98);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4abc9b:{NFSU2_TR(0x4abc9b);
u8 U[4];
w4(U+0,u32(0x4b9b8f5aull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4abca0:{NFSU2_TR(0x4abca0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4abca1:{NFSU2_TR(0x4abca1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4abca6ull));
TAIL_STATIC(0x50c990u,50c);
}
B4abca6:L4abca6:{c.instructions+=5;NFSU2_TR(0x4abca6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4abca9:{NFSU2_TR(0x4abca9);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4abcab:{NFSU2_TR(0x4abcab);
u8 U[4];
w4(U+0,u32(0xea570722ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4abcb0:{NFSU2_TR(0x4abcb0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4abcb1:{NFSU2_TR(0x4abcb1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4abcb6ull));
TAIL_STATIC(0x50c990u,50c);
}
B4abcb6:L4abcb6:{c.instructions+=4;NFSU2_TR(0x4abcb6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4abcb9:{NFSU2_TR(0x4abcb9);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4abcbc:{NFSU2_TR(0x4abcbc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4abcbd:{NFSU2_TR(0x4abcbd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4abcc2ull));
TAIL_STATIC(0x50ca50u,50c);
}
B4abcc2:L4abcc2:{c.instructions+=4;NFSU2_TR(0x4abcc2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4abcc5:{NFSU2_TR(0x4abcc5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4abcc8:{NFSU2_TR(0x4abcc8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4abcc9:{NFSU2_TR(0x4abcc9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4abcceull));
TAIL_STATIC(0x50ca50u,50c);
}
B4abcce:L4abcce:{c.instructions+=4;NFSU2_TR(0x4abcce);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4abcd1:{NFSU2_TR(0x4abcd1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4abcd4:{NFSU2_TR(0x4abcd4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4abcd5:{NFSU2_TR(0x4abcd5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4abcdaull));
TAIL_STATIC(0x50ca50u,50c);
}
B4abcda:L4abcda:{c.instructions+=5;NFSU2_TR(0x4abcda);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4abcdd:{NFSU2_TR(0x4abcdd);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4abce0:{NFSU2_TR(0x4abce0);
u8 U[4];
w4(U+0,u32(0x790ac8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4abce5:{NFSU2_TR(0x4abce5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4abce6:{NFSU2_TR(0x4abce6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4abcebull));
TAIL_STATIC(0x51d040u,51d);
}
B4abceb:L4abceb:{c.instructions+=3;NFSU2_TR(0x4abceb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
}
B4abcee:{NFSU2_TR(0x4abcee);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4abcf0:{NFSU2_TR(0x4abcf0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4abd02;}}
}
B4abcf2:L4abcf2:{c.instructions+=4;NFSU2_TR(0x4abcf2);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4abcf4:{NFSU2_TR(0x4abcf4);
u8 U[4];
w4(U+0,u32(0x790ac8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4abcf9:{NFSU2_TR(0x4abcf9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4abcfa:{NFSU2_TR(0x4abcfa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4abcffull));
TAIL_STATIC(0x51cf70u,51c);
}
B4abcff:L4abcff:{c.instructions+=1;NFSU2_TR(0x4abcff);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4abd02:L4abd02:{c.instructions+=5;NFSU2_TR(0x4abd02);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4abd05:{NFSU2_TR(0x4abd05);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4abd08:{NFSU2_TR(0x4abd08);
u8 U[4];
w4(U+0,u32(0x790ac8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4abd0d:{NFSU2_TR(0x4abd0d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4abd0e:{NFSU2_TR(0x4abd0e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4abd13ull));
TAIL_STATIC(0x51d040u,51d);
}
B4abd13:L4abd13:{c.instructions+=3;NFSU2_TR(0x4abd13);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4abd16:{NFSU2_TR(0x4abd16);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4abd18:{NFSU2_TR(0x4abd18);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4abd2a;}}
}
B4abd1a:L4abd1a:{c.instructions+=4;NFSU2_TR(0x4abd1a);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4abd1c:{NFSU2_TR(0x4abd1c);
u8 U[4];
w4(U+0,u32(0x790ac8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4abd21:{NFSU2_TR(0x4abd21);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4abd22:{NFSU2_TR(0x4abd22);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4abd27ull));
TAIL_STATIC(0x51cf70u,51c);
}
B4abd27:L4abd27:{c.instructions+=1;NFSU2_TR(0x4abd27);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4abd2a:L4abd2a:{c.instructions+=5;NFSU2_TR(0x4abd2a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4abd2d:{NFSU2_TR(0x4abd2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4abd30:{NFSU2_TR(0x4abd30);
u8 U[4];
w4(U+0,u32(0x790ac8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4abd35:{NFSU2_TR(0x4abd35);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4abd36:{NFSU2_TR(0x4abd36);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4abd3bull));
TAIL_STATIC(0x51d040u,51d);
}
B4abd3b:L4abd3b:{c.instructions+=3;NFSU2_TR(0x4abd3b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4abd3e:{NFSU2_TR(0x4abd3e);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4abd40:{NFSU2_TR(0x4abd40);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4abd52;}}
}
B4abd42:L4abd42:{c.instructions+=4;NFSU2_TR(0x4abd42);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4abd44:{NFSU2_TR(0x4abd44);
u8 U[4];
w4(U+0,u32(0x790ac8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4abd49:{NFSU2_TR(0x4abd49);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4abd4a:{NFSU2_TR(0x4abd4a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4abd4full));
TAIL_STATIC(0x51cf70u,51c);
}
B4abd4f:L4abd4f:{c.instructions+=1;NFSU2_TR(0x4abd4f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4abd52:L4abd52:{c.instructions+=5;NFSU2_TR(0x4abd52);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4abd55:{NFSU2_TR(0x4abd55);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+28),(U+0),4);
}
B4abd57:{NFSU2_TR(0x4abd57);
u8 U[4];
w4(U+0,u32(0x78f9d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4abd5c:{NFSU2_TR(0x4abd5c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4abd5d:{NFSU2_TR(0x4abd5d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4abd62ull));
TAIL_STATIC(0x51d040u,51d);
}
B4abd62:L4abd62:{c.instructions+=3;NFSU2_TR(0x4abd62);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4abd65:{NFSU2_TR(0x4abd65);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4abd67:{NFSU2_TR(0x4abd67);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4abd79;}}
}
B4abd69:L4abd69:{c.instructions+=4;NFSU2_TR(0x4abd69);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4abd6b:{NFSU2_TR(0x4abd6b);
u8 U[4];
w4(U+0,u32(0x78f9d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4abd70:{NFSU2_TR(0x4abd70);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4abd71:{NFSU2_TR(0x4abd71);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4abd76ull));
TAIL_STATIC(0x51cf70u,51c);
}
B4abd76:L4abd76:{c.instructions+=1;NFSU2_TR(0x4abd76);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4abd79:L4abd79:{c.instructions+=7;NFSU2_TR(0x4abd79);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4abd7c:{NFSU2_TR(0x4abd7c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4abd7f:{NFSU2_TR(0x4abd7f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4abd82:{NFSU2_TR(0x4abd82);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4abd83:{NFSU2_TR(0x4abd83);
u8 U[4];
w4(U+0,u32(0x783fe5ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4abd88:{NFSU2_TR(0x4abd88);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4abd89:{NFSU2_TR(0x4abd89);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4abd8eull));
TAIL_STATIC(0x537be0u,537);
}
B4abd8e:L4abd8e:{c.instructions+=5;NFSU2_TR(0x4abd8e);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4abd91:{NFSU2_TR(0x4abd91);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4abd92:{NFSU2_TR(0x4abd92);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4abd93:{NFSU2_TR(0x4abd93);
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
B4abd96:{NFSU2_TR(0x4abd96);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4abd99:L4abd99:{c.instructions+=5;NFSU2_TR(0x4abd99);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4abd9c:{NFSU2_TR(0x4abd9c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B4abd9e:{NFSU2_TR(0x4abd9e);
u8 U[4];
w4(U+0,u32(0xea570722ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4abda3:{NFSU2_TR(0x4abda3);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4abda4:{NFSU2_TR(0x4abda4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4abda9ull));
TAIL_STATIC(0x50c990u,50c);
}
B4abda9:L4abda9:{c.instructions+=4;NFSU2_TR(0x4abda9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4abdac:{NFSU2_TR(0x4abdac);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4abdaf:{NFSU2_TR(0x4abdaf);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4abdb0:{NFSU2_TR(0x4abdb0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4abdb5ull));
TAIL_STATIC(0x50ca00u,50c);
}
B4abdb5:L4abdb5:{c.instructions+=5;NFSU2_TR(0x4abdb5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B4abdb8:{NFSU2_TR(0x4abdb8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4abdbb:{NFSU2_TR(0x4abdbb);
u8 U[4];
w4(U+0,u32(0x78fc44ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4abdc0:{NFSU2_TR(0x4abdc0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4abdc1:{NFSU2_TR(0x4abdc1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4abdc6ull));
TAIL_STATIC(0x51d040u,51d);
}
B4abdc6:L4abdc6:{c.instructions+=3;NFSU2_TR(0x4abdc6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x14ull))));
}
B4abdc9:{NFSU2_TR(0x4abdc9);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4abdcb:{NFSU2_TR(0x4abdcb);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4abddd;}}
}
B4abdcd:L4abdcd:{c.instructions+=4;NFSU2_TR(0x4abdcd);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4abdcf:{NFSU2_TR(0x4abdcf);
u8 U[4];
w4(U+0,u32(0x78fc44ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4abdd4:{NFSU2_TR(0x4abdd4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4abdd5:{NFSU2_TR(0x4abdd5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4abddaull));
TAIL_STATIC(0x51cf70u,51c);
}
B4abdda:L4abdda:{c.instructions+=1;NFSU2_TR(0x4abdda);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4abddd:L4abddd:{c.instructions+=5;NFSU2_TR(0x4abddd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B4abde0:{NFSU2_TR(0x4abde0);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B4abde3:{NFSU2_TR(0x4abde3);
u8 U[4];
w4(U+0,u32(0x78fc44ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4abde8:{NFSU2_TR(0x4abde8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4abde9:{NFSU2_TR(0x4abde9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4abdeeull));
TAIL_STATIC(0x51d040u,51d);
}
B4abdee:L4abdee:{c.instructions+=3;NFSU2_TR(0x4abdee);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4abdf1:{NFSU2_TR(0x4abdf1);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4abdf3:{NFSU2_TR(0x4abdf3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4abe05;}}
}
B4abdf5:L4abdf5:{c.instructions+=4;NFSU2_TR(0x4abdf5);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4abdf7:{NFSU2_TR(0x4abdf7);
u8 U[4];
w4(U+0,u32(0x78fc44ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4abdfc:{NFSU2_TR(0x4abdfc);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4abdfd:{NFSU2_TR(0x4abdfd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4abe02ull));
TAIL_STATIC(0x51cf70u,51c);
}
B4abe02:L4abe02:{c.instructions+=1;NFSU2_TR(0x4abe02);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4abe05:L4abe05:{c.instructions+=5;NFSU2_TR(0x4abe05);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4abe08:{NFSU2_TR(0x4abe08);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+24),(U+0),4);
}
B4abe0a:{NFSU2_TR(0x4abe0a);
u8 U[4];
w4(U+0,u32(0x78f9d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4abe0f:{NFSU2_TR(0x4abe0f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4abe10:{NFSU2_TR(0x4abe10);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4abe15ull));
TAIL_STATIC(0x51d040u,51d);
}
B4abe15:L4abe15:{c.instructions+=3;NFSU2_TR(0x4abe15);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B4abe18:{NFSU2_TR(0x4abe18);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B4abe1a:{NFSU2_TR(0x4abe1a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4abe2c;}}
}
B4abe1c:L4abe1c:{c.instructions+=4;NFSU2_TR(0x4abe1c);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4abe1e:{NFSU2_TR(0x4abe1e);
u8 U[4];
w4(U+0,u32(0x78f9d4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4abe23:{NFSU2_TR(0x4abe23);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B4abe24:{NFSU2_TR(0x4abe24);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x4abe29ull));
TAIL_STATIC(0x51cf70u,51c);
}
B4abe29:L4abe29:{c.instructions+=1;NFSU2_TR(0x4abe29);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B4abe2c:L4abe2c:{c.instructions+=1;NFSU2_TR(0x4abe2c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B4abe2d:L4abe2d:{c.instructions+=3;NFSU2_TR(0x4abe2d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B4abe2e:{NFSU2_TR(0x4abe2e);
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
B4abe31:{NFSU2_TR(0x4abe31);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4abe50:L4abe50:{c.instructions+=4;NFSU2_TR(0x4abe50);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4abe54:{NFSU2_TR(0x4abe54);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B4abe55:{NFSU2_TR(0x4abe55);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x12ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x12ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x12ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4abe58:{NFSU2_TR(0x4abe58);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4abec7;}}
}
B4abe5a:L4abe5a:{c.instructions+=1;NFSU2_TR(0x4abe5a);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x4abeccull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4abe61:L4abe61:{c.instructions+=2;NFSU2_TR(0x4abe61);
w4(R+0,u32(0xe9638d3eull));
}
B4abe66:{NFSU2_TR(0x4abe66);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4abe67:L4abe67:{c.instructions+=2;NFSU2_TR(0x4abe67);
w4(R+0,u32(0x2521e5ebull));
}
B4abe6c:{NFSU2_TR(0x4abe6c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4abe6d:L4abe6d:{c.instructions+=2;NFSU2_TR(0x4abe6d);
w4(R+0,u32(0xaaab31e9ull));
}
B4abe72:{NFSU2_TR(0x4abe72);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4abe73:L4abe73:{c.instructions+=2;NFSU2_TR(0x4abe73);
w4(R+0,u32(0x119144ull));
}
B4abe78:{NFSU2_TR(0x4abe78);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4abe79:L4abe79:{c.instructions+=2;NFSU2_TR(0x4abe79);
w4(R+0,u32(0x91703aefull));
}
B4abe7e:{NFSU2_TR(0x4abe7e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4abe7f:L4abe7f:{c.instructions+=2;NFSU2_TR(0x4abe7f);
w4(R+0,u32(0x33b5791aull));
}
B4abe84:{NFSU2_TR(0x4abe84);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4abe85:L4abe85:{c.instructions+=2;NFSU2_TR(0x4abe85);
w4(R+0,u32(0x3f6495c5ull));
}
B4abe8a:{NFSU2_TR(0x4abe8a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4abe8b:L4abe8b:{c.instructions+=2;NFSU2_TR(0x4abe8b);
w4(R+0,u32(0xbf5ac5a9ull));
}
B4abe90:{NFSU2_TR(0x4abe90);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4abe91:L4abe91:{c.instructions+=2;NFSU2_TR(0x4abe91);
w4(R+0,u32(0xb0c0dcb5ull));
}
B4abe96:{NFSU2_TR(0x4abe96);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4abe97:L4abe97:{c.instructions+=2;NFSU2_TR(0x4abe97);
w4(R+0,u32(0x8244f164ull));
}
B4abe9c:{NFSU2_TR(0x4abe9c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4abe9d:L4abe9d:{c.instructions+=2;NFSU2_TR(0x4abe9d);
w4(R+0,u32(0xb8038ac0ull));
}
B4abea2:{NFSU2_TR(0x4abea2);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4abea3:L4abea3:{c.instructions+=2;NFSU2_TR(0x4abea3);
w4(R+0,u32(0xb802f10eull));
}
B4abea8:{NFSU2_TR(0x4abea8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4abea9:L4abea9:{c.instructions+=2;NFSU2_TR(0x4abea9);
w4(R+0,u32(0xc56d3032ull));
}
B4abeae:{NFSU2_TR(0x4abeae);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4abeaf:L4abeaf:{c.instructions+=2;NFSU2_TR(0x4abeaf);
w4(R+0,u32(0xdc99aafeull));
}
B4abeb4:{NFSU2_TR(0x4abeb4);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4abeb5:L4abeb5:{c.instructions+=2;NFSU2_TR(0x4abeb5);
w4(R+0,u32(0x3f40e75full));
}
B4abeba:{NFSU2_TR(0x4abeba);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4abebb:L4abebb:{c.instructions+=2;NFSU2_TR(0x4abebb);
w4(R+0,u32(0xd1d9d8a4ull));
}
B4abec0:{NFSU2_TR(0x4abec0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4abec1:L4abec1:{c.instructions+=2;NFSU2_TR(0x4abec1);
w4(R+0,u32(0xf95dd41eull));
}
B4abec6:{NFSU2_TR(0x4abec6);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4abec7:L4abec7:{c.instructions+=2;NFSU2_TR(0x4abec7);
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
B4abec9:{NFSU2_TR(0x4abec9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4abf20:L4abf20:{c.instructions+=4;NFSU2_TR(0x4abf20);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B4abf24:{NFSU2_TR(0x4abf24);
w4(R+0,u32(u32(r4(R+0))-u32(u32(0x1ull))));
}
B4abf25:{NFSU2_TR(0x4abf25);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x13ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x13ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x13ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B4abf28:{NFSU2_TR(0x4abf28);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4abf44;}}
}
B4abf2a:L4abf2a:{c.instructions+=2;NFSU2_TR(0x4abf2a);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4abf58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(r1(U+4)));
}
B4abf31:{NFSU2_TR(0x4abf31);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x4abf48ull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4abf38:L4abf38:{c.instructions+=2;NFSU2_TR(0x4abf38);
w1(R+0,u8(0x4ull));
}
B4abf3a:{NFSU2_TR(0x4abf3a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4abf3b:L4abf3b:{c.instructions+=2;NFSU2_TR(0x4abf3b);
w1(R+0,u8(0x3ull));
}
B4abf3d:{NFSU2_TR(0x4abf3d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4abf3e:L4abf3e:{c.instructions+=2;NFSU2_TR(0x4abf3e);
w1(R+0,u8(0x2ull));
}
B4abf40:{NFSU2_TR(0x4abf40);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4abf41:L4abf41:{c.instructions+=2;NFSU2_TR(0x4abf41);
w1(R+0,u8(0x1ull));
}
B4abf43:{NFSU2_TR(0x4abf43);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4abf44:L4abf44:{c.instructions+=2;NFSU2_TR(0x4abf44);
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
B4abf46:{NFSU2_TR(0x4abf46);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4abf70:L4abf70:{c.instructions+=3;NFSU2_TR(0x4abf70);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+0,u32(s32(s8(r1(U+4)))));
}
B4abf74:{NFSU2_TR(0x4abf74);
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
B4abf77:{NFSU2_TR(0x4abf77);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L4abf9c;}}
}
B4abf79:L4abf79:{c.instructions+=1;NFSU2_TR(0x4abf79);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x4abfbcull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4abf80:L4abf80:{c.instructions+=2;NFSU2_TR(0x4abf80);
w4(R+0,u32(0x1ull));
}
B4abf85:{NFSU2_TR(0x4abf85);
{goto L4abfa1;}
}
B4abf87:L4abf87:{c.instructions+=2;NFSU2_TR(0x4abf87);
w4(R+0,u32(0x3ull));
}
B4abf8c:{NFSU2_TR(0x4abf8c);
{goto L4abfa1;}
}
B4abf8e:L4abf8e:{c.instructions+=2;NFSU2_TR(0x4abf8e);
w4(R+0,u32(0x2ull));
}
B4abf93:{NFSU2_TR(0x4abf93);
{goto L4abfa1;}
}
B4abf95:L4abf95:{c.instructions+=2;NFSU2_TR(0x4abf95);
w4(R+0,u32(0x4ull));
}
B4abf9a:{NFSU2_TR(0x4abf9a);
{goto L4abfa1;}
}
B4abf9c:L4abf9c:{c.instructions+=1;NFSU2_TR(0x4abf9c);
w4(R+0,u32(0x5ull));
}
B4abfa1:L4abfa1:{c.instructions+=2;NFSU2_TR(0x4abfa1);
u8 U[10];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+8),(U+4),1);
w1(R+512,u8((r1(U+8))<(u8(0x2ull))));
w1(R+523,sborrow<u8>(r1(U+8),u8(0x2ull)));
w1(U+9,u8(u32(r1(U+8))-u32(u8(0x2ull))));
w1(R+519,u8(s8(r1(U+9))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+9))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+9))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B4abfa5:{NFSU2_TR(0x4abfa5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4abfad;}}
}
B4abfa7:L4abfa7:{c.instructions+=2;NFSU2_TR(0x4abfa7);
w4(R+0,u32(0x7ull));
}
B4abfac:{NFSU2_TR(0x4abfac);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4abfad:L4abfad:{c.instructions+=2;NFSU2_TR(0x4abfad);
u8 U[10];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xdull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+8),(U+4),1);
w1(R+512,u8((r1(U+8))<(u8(0x1ull))));
w1(R+523,sborrow<u8>(r1(U+8),u8(0x1ull)));
w1(U+9,u8(u32(r1(U+8))-u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(U+9))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+9))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+9))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B4abfb1:{NFSU2_TR(0x4abfb1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L4abfb8;}}
}
B4abfb3:L4abfb3:{c.instructions+=1;NFSU2_TR(0x4abfb3);
w4(R+0,u32(0x8ull));
}
B4abfb8:L4abfb8:{c.instructions+=1;NFSU2_TR(0x4abfb8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4abfe0:L4abfe0:{c.instructions+=4;NFSU2_TR(0x4abfe0);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x50ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w4(R+4,u32(s32(s8(r1(U+4)))));
}
B4abfe4:{NFSU2_TR(0x4abfe4);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
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
B4abfe7:{NFSU2_TR(0x4abfe7);
w4(R+0,u32(0x1ull));
}
B4abfec:{NFSU2_TR(0x4abfec);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){TAIL_STATIC(0x4ac018u,4ac);}
}
B4abfee:L4abfee:{c.instructions+=1;NFSU2_TR(0x4abfee);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x4ac01cull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B4abff5:L4abff5:{c.instructions+=2;NFSU2_TR(0x4abff5);
w4(R+0,u32(0xcull));
}
B4abffa:{NFSU2_TR(0x4abffa);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B4abffb:L4abffb:{c.instructions+=1;NFSU2_TR(0x4abffb);
w4(R+0,u32(0xfull));
TAIL_STATIC(0x4ac000u,4ac);
}
XIT:NFSU2_TR_EXIT(0x4ab,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
