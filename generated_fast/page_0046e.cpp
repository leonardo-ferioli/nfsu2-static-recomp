#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_43e(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_459(u8* __restrict R,Cpu& c);
u32 body_45b(u8* __restrict R,Cpu& c);
u32 body_45c(u8* __restrict R,Cpu& c);
u32 body_469(u8* __restrict R,Cpu& c);
u32 body_46d(u8* __restrict R,Cpu& c);
u32 body_475(u8* __restrict R,Cpu& c);
u32 body_576(u8* __restrict R,Cpu& c);
u32 body_59f(u8* __restrict R,Cpu& c);
u32 body_75b(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x46e,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x46e,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_46e(u8* __restrict R,Cpu& c);
u32 page_46e(Cpu& c){return body_46e(c.regs.data(),c);}
__attribute__((noinline)) u32 body_46e(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x46e002:goto L46e002;
case 0x46e008:c.instructions+=15;goto B46e008;
case 0x46e00c:c.instructions+=14;goto B46e00c;
case 0x46e012:c.instructions+=13;goto B46e012;
case 0x46e016:c.instructions+=12;goto B46e016;
case 0x46e01c:c.instructions+=11;goto B46e01c;
case 0x46e022:c.instructions+=10;goto B46e022;
case 0x46e026:c.instructions+=9;goto B46e026;
case 0x46e02c:c.instructions+=8;goto B46e02c;
case 0x46e032:c.instructions+=7;goto B46e032;
case 0x46e036:c.instructions+=6;goto B46e036;
case 0x46e037:c.instructions+=5;goto B46e037;
case 0x46e03b:c.instructions+=4;goto B46e03b;
case 0x46e03d:c.instructions+=3;goto B46e03d;
case 0x46e041:c.instructions+=2;goto B46e041;
case 0x46e044:c.instructions+=1;goto B46e044;
case 0x46e046:goto L46e046;
case 0x46e049:c.instructions+=3;goto B46e049;
case 0x46e04b:c.instructions+=2;goto B46e04b;
case 0x46e051:c.instructions+=1;goto B46e051;
case 0x46e053:goto L46e053;
case 0x46e059:goto L46e059;
case 0x46e05d:c.instructions+=6;goto B46e05d;
case 0x46e063:c.instructions+=5;goto B46e063;
case 0x46e069:c.instructions+=4;goto B46e069;
case 0x46e06f:c.instructions+=3;goto B46e06f;
case 0x46e071:c.instructions+=2;goto B46e071;
case 0x46e074:c.instructions+=1;goto B46e074;
case 0x46e076:goto L46e076;
case 0x46e079:c.instructions+=3;goto B46e079;
case 0x46e07b:c.instructions+=2;goto B46e07b;
case 0x46e081:c.instructions+=1;goto B46e081;
case 0x46e083:goto L46e083;
case 0x46e089:goto L46e089;
case 0x46e08c:c.instructions+=10;goto B46e08c;
case 0x46e092:c.instructions+=9;goto B46e092;
case 0x46e095:c.instructions+=8;goto B46e095;
case 0x46e098:c.instructions+=7;goto B46e098;
case 0x46e09c:c.instructions+=6;goto B46e09c;
case 0x46e0a0:c.instructions+=5;goto B46e0a0;
case 0x46e0a4:c.instructions+=4;goto B46e0a4;
case 0x46e0a6:c.instructions+=3;goto B46e0a6;
case 0x46e0a8:c.instructions+=2;goto B46e0a8;
case 0x46e0ab:c.instructions+=1;goto B46e0ab;
case 0x46e0ad:goto L46e0ad;
case 0x46e0af:c.instructions+=1;goto B46e0af;
case 0x46e0b3:goto L46e0b3;
case 0x46e0b7:c.instructions+=4;goto B46e0b7;
case 0x46e0b9:c.instructions+=3;goto B46e0b9;
case 0x46e0bb:c.instructions+=2;goto B46e0bb;
case 0x46e0be:c.instructions+=1;goto B46e0be;
case 0x46e0c0:goto L46e0c0;
case 0x46e0c2:c.instructions+=1;goto B46e0c2;
case 0x46e0c6:goto L46e0c6;
case 0x46e0ca:c.instructions+=9;goto B46e0ca;
case 0x46e0d0:c.instructions+=8;goto B46e0d0;
case 0x46e0d3:c.instructions+=7;goto B46e0d3;
case 0x46e0d6:c.instructions+=6;goto B46e0d6;
case 0x46e0da:c.instructions+=5;goto B46e0da;
case 0x46e0de:c.instructions+=4;goto B46e0de;
case 0x46e0e2:c.instructions+=3;goto B46e0e2;
case 0x46e0e4:c.instructions+=2;goto B46e0e4;
case 0x46e0e7:c.instructions+=1;goto B46e0e7;
case 0x46e0e9:goto L46e0e9;
case 0x46e0eb:c.instructions+=1;goto B46e0eb;
case 0x46e0ef:goto L46e0ef;
case 0x46e0f3:c.instructions+=4;goto B46e0f3;
case 0x46e0f5:c.instructions+=3;goto B46e0f5;
case 0x46e0f7:c.instructions+=2;goto B46e0f7;
case 0x46e0fa:c.instructions+=1;goto B46e0fa;
case 0x46e0fc:goto L46e0fc;
case 0x46e0fe:c.instructions+=1;goto B46e0fe;
case 0x46e102:goto L46e102;
case 0x46e106:c.instructions+=4;goto B46e106;
case 0x46e10c:c.instructions+=3;goto B46e10c;
case 0x46e10d:c.instructions+=2;goto B46e10d;
case 0x46e113:c.instructions+=1;goto B46e113;
case 0x46e118:goto L46e118;
case 0x46e11e:c.instructions+=3;goto B46e11e;
case 0x46e11f:c.instructions+=2;goto B46e11f;
case 0x46e125:c.instructions+=1;goto B46e125;
case 0x46e12a:goto L46e12a;
case 0x46e130:c.instructions+=7;goto B46e130;
case 0x46e133:c.instructions+=6;goto B46e133;
case 0x46e136:c.instructions+=5;goto B46e136;
case 0x46e13c:c.instructions+=4;goto B46e13c;
case 0x46e13f:c.instructions+=3;goto B46e13f;
case 0x46e142:c.instructions+=2;goto B46e142;
case 0x46e144:c.instructions+=1;goto B46e144;
case 0x46e149:goto L46e149;
case 0x46e14f:c.instructions+=7;goto B46e14f;
case 0x46e155:c.instructions+=6;goto B46e155;
case 0x46e158:c.instructions+=5;goto B46e158;
case 0x46e15e:c.instructions+=4;goto B46e15e;
case 0x46e161:c.instructions+=3;goto B46e161;
case 0x46e164:c.instructions+=2;goto B46e164;
case 0x46e166:c.instructions+=1;goto B46e166;
case 0x46e16b:goto L46e16b;
case 0x46e171:c.instructions+=6;goto B46e171;
case 0x46e177:c.instructions+=5;goto B46e177;
case 0x46e179:c.instructions+=4;goto B46e179;
case 0x46e17f:c.instructions+=3;goto B46e17f;
case 0x46e181:c.instructions+=2;goto B46e181;
case 0x46e184:c.instructions+=1;goto B46e184;
case 0x46e186:goto L46e186;
case 0x46e18c:c.instructions+=5;goto B46e18c;
case 0x46e192:c.instructions+=4;goto B46e192;
case 0x46e195:c.instructions+=3;goto B46e195;
case 0x46e197:c.instructions+=2;goto B46e197;
case 0x46e19a:c.instructions+=1;goto B46e19a;
case 0x46e1a0:goto L46e1a0;
case 0x46e1a6:c.instructions+=4;goto B46e1a6;
case 0x46e1a9:c.instructions+=3;goto B46e1a9;
case 0x46e1ab:c.instructions+=2;goto B46e1ab;
case 0x46e1ae:c.instructions+=1;goto B46e1ae;
case 0x46e1b4:goto L46e1b4;
case 0x46e1be:goto L46e1be;
case 0x46e1c8:goto L46e1c8;
case 0x46e1ce:c.instructions+=5;goto B46e1ce;
case 0x46e1d0:c.instructions+=4;goto B46e1d0;
case 0x46e1d6:c.instructions+=3;goto B46e1d6;
case 0x46e1d8:c.instructions+=2;goto B46e1d8;
case 0x46e1db:c.instructions+=1;goto B46e1db;
case 0x46e1dd:goto L46e1dd;
case 0x46e1e3:c.instructions+=5;goto B46e1e3;
case 0x46e1e9:c.instructions+=4;goto B46e1e9;
case 0x46e1ec:c.instructions+=3;goto B46e1ec;
case 0x46e1ee:c.instructions+=2;goto B46e1ee;
case 0x46e1f1:c.instructions+=1;goto B46e1f1;
case 0x46e1f7:goto L46e1f7;
case 0x46e1fd:c.instructions+=4;goto B46e1fd;
case 0x46e200:c.instructions+=3;goto B46e200;
case 0x46e202:c.instructions+=2;goto B46e202;
case 0x46e205:c.instructions+=1;goto B46e205;
case 0x46e20b:goto L46e20b;
case 0x46e215:goto L46e215;
case 0x46e21f:goto L46e21f;
case 0x46e225:c.instructions+=12;goto B46e225;
case 0x46e22b:c.instructions+=11;goto B46e22b;
case 0x46e231:c.instructions+=10;goto B46e231;
case 0x46e237:c.instructions+=9;goto B46e237;
case 0x46e23d:c.instructions+=8;goto B46e23d;
case 0x46e23f:c.instructions+=7;goto B46e23f;
case 0x46e243:c.instructions+=6;goto B46e243;
case 0x46e244:c.instructions+=5;goto B46e244;
case 0x46e248:c.instructions+=4;goto B46e248;
case 0x46e249:c.instructions+=3;goto B46e249;
case 0x46e24d:c.instructions+=2;goto B46e24d;
case 0x46e251:c.instructions+=1;goto B46e251;
case 0x46e256:goto L46e256;
case 0x46e257:c.instructions+=5;goto B46e257;
case 0x46e25b:c.instructions+=4;goto B46e25b;
case 0x46e25c:c.instructions+=3;goto B46e25c;
case 0x46e260:c.instructions+=2;goto B46e260;
case 0x46e261:c.instructions+=1;goto B46e261;
case 0x46e266:goto L46e266;
case 0x46e26a:c.instructions+=4;goto B46e26a;
case 0x46e26b:c.instructions+=3;goto B46e26b;
case 0x46e26f:c.instructions+=2;goto B46e26f;
case 0x46e270:c.instructions+=1;goto B46e270;
case 0x46e275:goto L46e275;
case 0x46e279:c.instructions+=17;goto B46e279;
case 0x46e280:c.instructions+=16;goto B46e280;
case 0x46e287:c.instructions+=15;goto B46e287;
case 0x46e289:c.instructions+=14;goto B46e289;
case 0x46e28b:c.instructions+=13;goto B46e28b;
case 0x46e28f:c.instructions+=12;goto B46e28f;
case 0x46e293:c.instructions+=11;goto B46e293;
case 0x46e296:c.instructions+=10;goto B46e296;
case 0x46e29a:c.instructions+=9;goto B46e29a;
case 0x46e29e:c.instructions+=8;goto B46e29e;
case 0x46e2a2:c.instructions+=7;goto B46e2a2;
case 0x46e2a4:c.instructions+=6;goto B46e2a4;
case 0x46e2a8:c.instructions+=5;goto B46e2a8;
case 0x46e2ac:c.instructions+=4;goto B46e2ac;
case 0x46e2b2:c.instructions+=3;goto B46e2b2;
case 0x46e2b4:c.instructions+=2;goto B46e2b4;
case 0x46e2b7:c.instructions+=1;goto B46e2b7;
case 0x46e2bd:goto L46e2bd;
case 0x46e2c5:c.instructions+=1;goto B46e2c5;
case 0x46e2ca:goto L46e2ca;
case 0x46e2ce:c.instructions+=6;goto B46e2ce;
case 0x46e2d4:c.instructions+=5;goto B46e2d4;
case 0x46e2da:c.instructions+=4;goto B46e2da;
case 0x46e2dd:c.instructions+=3;goto B46e2dd;
case 0x46e2df:c.instructions+=2;goto B46e2df;
case 0x46e2e2:c.instructions+=1;goto B46e2e2;
case 0x46e2e8:goto L46e2e8;
case 0x46e2ee:c.instructions+=4;goto B46e2ee;
case 0x46e2f4:c.instructions+=3;goto B46e2f4;
case 0x46e2f6:c.instructions+=2;goto B46e2f6;
case 0x46e2f9:c.instructions+=1;goto B46e2f9;
case 0x46e2fb:goto L46e2fb;
case 0x46e301:c.instructions+=1;goto B46e301;
case 0x46e303:goto L46e303;
case 0x46e309:goto L46e309;
case 0x46e30c:c.instructions+=5;goto B46e30c;
case 0x46e312:c.instructions+=4;goto B46e312;
case 0x46e318:c.instructions+=3;goto B46e318;
case 0x46e31b:c.instructions+=2;goto B46e31b;
case 0x46e31d:c.instructions+=1;goto B46e31d;
case 0x46e322:goto L46e322;
case 0x46e328:c.instructions+=1;goto B46e328;
case 0x46e32d:goto L46e32d;
case 0x46e331:c.instructions+=6;goto B46e331;
case 0x46e337:c.instructions+=5;goto B46e337;
case 0x46e33d:c.instructions+=4;goto B46e33d;
case 0x46e340:c.instructions+=3;goto B46e340;
case 0x46e342:c.instructions+=2;goto B46e342;
case 0x46e345:c.instructions+=1;goto B46e345;
case 0x46e34b:goto L46e34b;
case 0x46e351:c.instructions+=4;goto B46e351;
case 0x46e357:c.instructions+=3;goto B46e357;
case 0x46e359:c.instructions+=2;goto B46e359;
case 0x46e35c:c.instructions+=1;goto B46e35c;
case 0x46e35e:goto L46e35e;
case 0x46e364:c.instructions+=1;goto B46e364;
case 0x46e366:goto L46e366;
case 0x46e36c:goto L46e36c;
case 0x46e36f:c.instructions+=5;goto B46e36f;
case 0x46e375:c.instructions+=4;goto B46e375;
case 0x46e37b:c.instructions+=3;goto B46e37b;
case 0x46e37e:c.instructions+=2;goto B46e37e;
case 0x46e380:c.instructions+=1;goto B46e380;
case 0x46e385:goto L46e385;
case 0x46e38b:c.instructions+=1;goto B46e38b;
case 0x46e390:goto L46e390;
case 0x46e394:c.instructions+=2;goto B46e394;
case 0x46e396:c.instructions+=1;goto B46e396;
case 0x46e39a:goto L46e39a;
case 0x46e39d:c.instructions+=2;goto B46e39d;
case 0x46e39f:c.instructions+=1;goto B46e39f;
case 0x46e3a4:goto L46e3a4;
case 0x46e3a6:c.instructions+=3;goto B46e3a6;
case 0x46e3aa:c.instructions+=2;goto B46e3aa;
case 0x46e3ac:c.instructions+=1;goto B46e3ac;
case 0x46e3b1:goto L46e3b1;
case 0x46e3b7:c.instructions+=4;goto B46e3b7;
case 0x46e3bf:c.instructions+=3;goto B46e3bf;
case 0x46e3c1:c.instructions+=2;goto B46e3c1;
case 0x46e3c4:c.instructions+=1;goto B46e3c4;
case 0x46e3c6:goto L46e3c6;
case 0x46e3ce:goto L46e3ce;
case 0x46e3d2:c.instructions+=4;goto B46e3d2;
case 0x46e3d5:c.instructions+=3;goto B46e3d5;
case 0x46e3d8:c.instructions+=2;goto B46e3d8;
case 0x46e3da:c.instructions+=1;goto B46e3da;
case 0x46e3df:goto L46e3df;
case 0x46e3e5:c.instructions+=8;goto B46e3e5;
case 0x46e3e8:c.instructions+=7;goto B46e3e8;
case 0x46e3eb:c.instructions+=6;goto B46e3eb;
case 0x46e3ee:c.instructions+=5;goto B46e3ee;
case 0x46e3f2:c.instructions+=4;goto B46e3f2;
case 0x46e3f5:c.instructions+=3;goto B46e3f5;
case 0x46e3fb:c.instructions+=2;goto B46e3fb;
case 0x46e3fd:c.instructions+=1;goto B46e3fd;
case 0x46e402:goto L46e402;
case 0x46e406:c.instructions+=6;goto B46e406;
case 0x46e40c:c.instructions+=5;goto B46e40c;
case 0x46e40f:c.instructions+=4;goto B46e40f;
case 0x46e412:c.instructions+=3;goto B46e412;
case 0x46e414:c.instructions+=2;goto B46e414;
case 0x46e416:c.instructions+=1;goto B46e416;
case 0x46e418:goto L46e418;
case 0x46e41a:c.instructions+=3;goto B46e41a;
case 0x46e41c:c.instructions+=2;goto B46e41c;
case 0x46e41e:c.instructions+=1;goto B46e41e;
case 0x46e420:goto L46e420;
case 0x46e422:goto L46e422;
case 0x46e428:c.instructions+=4;goto B46e428;
case 0x46e42c:c.instructions+=3;goto B46e42c;
case 0x46e432:c.instructions+=2;goto B46e432;
case 0x46e434:c.instructions+=1;goto B46e434;
case 0x46e439:goto L46e439;
case 0x46e43b:c.instructions+=7;goto B46e43b;
case 0x46e43f:c.instructions+=6;goto B46e43f;
case 0x46e445:c.instructions+=5;goto B46e445;
case 0x46e448:c.instructions+=4;goto B46e448;
case 0x46e44b:c.instructions+=3;goto B46e44b;
case 0x46e44d:c.instructions+=2;goto B46e44d;
case 0x46e44f:c.instructions+=1;goto B46e44f;
case 0x46e451:goto L46e451;
case 0x46e453:c.instructions+=3;goto B46e453;
case 0x46e455:c.instructions+=2;goto B46e455;
case 0x46e457:c.instructions+=1;goto B46e457;
case 0x46e459:goto L46e459;
case 0x46e45b:goto L46e45b;
case 0x46e45f:c.instructions+=4;goto B46e45f;
case 0x46e462:c.instructions+=3;goto B46e462;
case 0x46e466:c.instructions+=2;goto B46e466;
case 0x46e46c:c.instructions+=1;goto B46e46c;
case 0x46e46e:goto L46e46e;
case 0x46e474:c.instructions+=1;goto B46e474;
case 0x46e476:goto L46e476;
case 0x46e479:goto L46e479;
case 0x46e47b:c.instructions+=6;goto B46e47b;
case 0x46e481:c.instructions+=5;goto B46e481;
case 0x46e485:c.instructions+=4;goto B46e485;
case 0x46e489:c.instructions+=3;goto B46e489;
case 0x46e48d:c.instructions+=2;goto B46e48d;
case 0x46e48f:c.instructions+=1;goto B46e48f;
case 0x46e494:goto L46e494;
case 0x46e496:c.instructions+=2;goto B46e496;
case 0x46e498:c.instructions+=1;goto B46e498;
case 0x46e49a:goto L46e49a;
case 0x46e4a0:c.instructions+=1;goto B46e4a0;
case 0x46e4a2:goto L46e4a2;
case 0x46e4a5:goto L46e4a5;
case 0x46e4a9:c.instructions+=4;goto B46e4a9;
case 0x46e4af:c.instructions+=3;goto B46e4af;
case 0x46e4b3:c.instructions+=2;goto B46e4b3;
case 0x46e4b5:c.instructions+=1;goto B46e4b5;
case 0x46e4ba:goto L46e4ba;
case 0x46e4bc:c.instructions+=7;goto B46e4bc;
case 0x46e4c2:c.instructions+=6;goto B46e4c2;
case 0x46e4c8:c.instructions+=5;goto B46e4c8;
case 0x46e4ce:c.instructions+=4;goto B46e4ce;
case 0x46e4d4:c.instructions+=3;goto B46e4d4;
case 0x46e4d6:c.instructions+=2;goto B46e4d6;
case 0x46e4d9:c.instructions+=1;goto B46e4d9;
case 0x46e4db:goto L46e4db;
case 0x46e4e1:c.instructions+=3;goto B46e4e1;
case 0x46e4e4:c.instructions+=2;goto B46e4e4;
case 0x46e4e6:c.instructions+=1;goto B46e4e6;
case 0x46e4e8:goto L46e4e8;
case 0x46e4ee:goto L46e4ee;
case 0x46e4f2:c.instructions+=6;goto B46e4f2;
case 0x46e4f8:c.instructions+=5;goto B46e4f8;
case 0x46e4fe:c.instructions+=4;goto B46e4fe;
case 0x46e504:c.instructions+=3;goto B46e504;
case 0x46e506:c.instructions+=2;goto B46e506;
case 0x46e509:c.instructions+=1;goto B46e509;
case 0x46e50b:goto L46e50b;
case 0x46e511:c.instructions+=3;goto B46e511;
case 0x46e514:c.instructions+=2;goto B46e514;
case 0x46e516:c.instructions+=1;goto B46e516;
case 0x46e518:goto L46e518;
case 0x46e51e:goto L46e51e;
case 0x46e524:c.instructions+=9;goto B46e524;
case 0x46e527:c.instructions+=8;goto B46e527;
case 0x46e52a:c.instructions+=7;goto B46e52a;
case 0x46e52e:c.instructions+=6;goto B46e52e;
case 0x46e532:c.instructions+=5;goto B46e532;
case 0x46e536:c.instructions+=4;goto B46e536;
case 0x46e538:c.instructions+=3;goto B46e538;
case 0x46e53a:c.instructions+=2;goto B46e53a;
case 0x46e53d:c.instructions+=1;goto B46e53d;
case 0x46e53f:goto L46e53f;
case 0x46e541:c.instructions+=1;goto B46e541;
case 0x46e545:goto L46e545;
case 0x46e549:c.instructions+=4;goto B46e549;
case 0x46e54b:c.instructions+=3;goto B46e54b;
case 0x46e54d:c.instructions+=2;goto B46e54d;
case 0x46e550:c.instructions+=1;goto B46e550;
case 0x46e552:goto L46e552;
case 0x46e554:c.instructions+=1;goto B46e554;
case 0x46e558:goto L46e558;
case 0x46e55c:c.instructions+=9;goto B46e55c;
case 0x46e562:c.instructions+=8;goto B46e562;
case 0x46e565:c.instructions+=7;goto B46e565;
case 0x46e568:c.instructions+=6;goto B46e568;
case 0x46e56c:c.instructions+=5;goto B46e56c;
case 0x46e570:c.instructions+=4;goto B46e570;
case 0x46e574:c.instructions+=3;goto B46e574;
case 0x46e576:c.instructions+=2;goto B46e576;
case 0x46e579:c.instructions+=1;goto B46e579;
case 0x46e57b:goto L46e57b;
case 0x46e57d:c.instructions+=1;goto B46e57d;
case 0x46e581:goto L46e581;
case 0x46e585:c.instructions+=4;goto B46e585;
case 0x46e587:c.instructions+=3;goto B46e587;
case 0x46e589:c.instructions+=2;goto B46e589;
case 0x46e58c:c.instructions+=1;goto B46e58c;
case 0x46e58e:goto L46e58e;
case 0x46e590:c.instructions+=1;goto B46e590;
case 0x46e594:goto L46e594;
case 0x46e59a:c.instructions+=7;goto B46e59a;
case 0x46e59d:c.instructions+=6;goto B46e59d;
case 0x46e5a0:c.instructions+=5;goto B46e5a0;
case 0x46e5a4:c.instructions+=4;goto B46e5a4;
case 0x46e5a7:c.instructions+=3;goto B46e5a7;
case 0x46e5ad:c.instructions+=2;goto B46e5ad;
case 0x46e5b1:c.instructions+=1;goto B46e5b1;
case 0x46e5b6:goto L46e5b6;
case 0x46e5ba:c.instructions+=5;goto B46e5ba;
case 0x46e5bd:c.instructions+=4;goto B46e5bd;
case 0x46e5c1:c.instructions+=3;goto B46e5c1;
case 0x46e5c7:c.instructions+=2;goto B46e5c7;
case 0x46e5cb:c.instructions+=1;goto B46e5cb;
case 0x46e5d0:goto L46e5d0;
case 0x46e5d4:c.instructions+=5;goto B46e5d4;
case 0x46e5d8:c.instructions+=4;goto B46e5d8;
case 0x46e5d9:c.instructions+=3;goto B46e5d9;
case 0x46e5df:c.instructions+=2;goto B46e5df;
case 0x46e5e2:c.instructions+=1;goto B46e5e2;
case 0x46e5e7:goto L46e5e7;
case 0x46e5eb:c.instructions+=4;goto B46e5eb;
case 0x46e5ec:c.instructions+=3;goto B46e5ec;
case 0x46e5f2:c.instructions+=2;goto B46e5f2;
case 0x46e5f5:c.instructions+=1;goto B46e5f5;
case 0x46e5fa:goto L46e5fa;
case 0x46e600:c.instructions+=1;goto B46e600;
case 0x46e605:goto L46e605;
case 0x46e60b:c.instructions+=2;goto B46e60b;
case 0x46e60f:c.instructions+=1;goto B46e60f;
case 0x46e614:goto L46e614;
case 0x46e618:c.instructions+=9;goto B46e618;
case 0x46e61c:c.instructions+=8;goto B46e61c;
case 0x46e61f:c.instructions+=7;goto B46e61f;
case 0x46e625:c.instructions+=6;goto B46e625;
case 0x46e62b:c.instructions+=5;goto B46e62b;
case 0x46e62f:c.instructions+=4;goto B46e62f;
case 0x46e633:c.instructions+=3;goto B46e633;
case 0x46e635:c.instructions+=2;goto B46e635;
case 0x46e638:c.instructions+=1;goto B46e638;
case 0x46e63a:goto L46e63a;
case 0x46e63c:c.instructions+=1;goto B46e63c;
case 0x46e640:goto L46e640;
case 0x46e643:c.instructions+=5;goto B46e643;
case 0x46e647:c.instructions+=4;goto B46e647;
case 0x46e64a:c.instructions+=3;goto B46e64a;
case 0x46e650:c.instructions+=2;goto B46e650;
case 0x46e652:c.instructions+=1;goto B46e652;
case 0x46e657:goto L46e657;
case 0x46e65d:c.instructions+=4;goto B46e65d;
case 0x46e65f:c.instructions+=3;goto B46e65f;
case 0x46e665:c.instructions+=2;goto B46e665;
case 0x46e667:c.instructions+=1;goto B46e667;
case 0x46e66c:goto L46e66c;
case 0x46e66e:c.instructions+=6;goto B46e66e;
case 0x46e674:c.instructions+=5;goto B46e674;
case 0x46e676:c.instructions+=4;goto B46e676;
case 0x46e67c:c.instructions+=3;goto B46e67c;
case 0x46e67e:c.instructions+=2;goto B46e67e;
case 0x46e681:c.instructions+=1;goto B46e681;
case 0x46e683:goto L46e683;
case 0x46e689:c.instructions+=2;goto B46e689;
case 0x46e68f:c.instructions+=1;goto B46e68f;
case 0x46e691:goto L46e691;
case 0x46e693:c.instructions+=4;goto B46e693;
case 0x46e699:c.instructions+=3;goto B46e699;
case 0x46e69f:c.instructions+=2;goto B46e69f;
case 0x46e6a3:c.instructions+=1;goto B46e6a3;
case 0x46e6a7:goto L46e6a7;
case 0x46e6aa:c.instructions+=6;goto B46e6aa;
case 0x46e6ae:c.instructions+=5;goto B46e6ae;
case 0x46e6b4:c.instructions+=4;goto B46e6b4;
case 0x46e6b7:c.instructions+=3;goto B46e6b7;
case 0x46e6b9:c.instructions+=2;goto B46e6b9;
case 0x46e6bb:c.instructions+=1;goto B46e6bb;
case 0x46e6bd:goto L46e6bd;
case 0x46e6bf:c.instructions+=3;goto B46e6bf;
case 0x46e6c1:c.instructions+=2;goto B46e6c1;
case 0x46e6c3:c.instructions+=1;goto B46e6c3;
case 0x46e6c5:goto L46e6c5;
case 0x46e6c7:goto L46e6c7;
case 0x46e6cb:c.instructions+=8;goto B46e6cb;
case 0x46e6d1:c.instructions+=7;goto B46e6d1;
case 0x46e6d4:c.instructions+=6;goto B46e6d4;
case 0x46e6d7:c.instructions+=5;goto B46e6d7;
case 0x46e6db:c.instructions+=4;goto B46e6db;
case 0x46e6e1:c.instructions+=3;goto B46e6e1;
case 0x46e6e3:c.instructions+=2;goto B46e6e3;
case 0x46e6e5:c.instructions+=1;goto B46e6e5;
case 0x46e6e7:goto L46e6e7;
case 0x46e6e9:c.instructions+=3;goto B46e6e9;
case 0x46e6eb:c.instructions+=2;goto B46e6eb;
case 0x46e6ed:c.instructions+=1;goto B46e6ed;
case 0x46e6ef:goto L46e6ef;
case 0x46e6f1:goto L46e6f1;
case 0x46e6f7:c.instructions+=5;goto B46e6f7;
case 0x46e6fd:c.instructions+=4;goto B46e6fd;
case 0x46e700:c.instructions+=3;goto B46e700;
case 0x46e704:c.instructions+=2;goto B46e704;
case 0x46e708:c.instructions+=1;goto B46e708;
case 0x46e70d:goto L46e70d;
case 0x46e711:c.instructions+=3;goto B46e711;
case 0x46e713:c.instructions+=2;goto B46e713;
case 0x46e716:c.instructions+=1;goto B46e716;
case 0x46e71b:goto L46e71b;
case 0x46e721:c.instructions+=5;goto B46e721;
case 0x46e723:c.instructions+=4;goto B46e723;
case 0x46e729:c.instructions+=3;goto B46e729;
case 0x46e72c:c.instructions+=2;goto B46e72c;
case 0x46e730:c.instructions+=1;goto B46e730;
case 0x46e735:goto L46e735;
case 0x46e739:c.instructions+=3;goto B46e739;
case 0x46e73b:c.instructions+=2;goto B46e73b;
case 0x46e73e:c.instructions+=1;goto B46e73e;
case 0x46e743:goto L46e743;
case 0x46e745:c.instructions+=4;goto B46e745;
case 0x46e74b:c.instructions+=3;goto B46e74b;
case 0x46e74d:c.instructions+=2;goto B46e74d;
case 0x46e753:c.instructions+=1;goto B46e753;
case 0x46e755:goto L46e755;
case 0x46e757:c.instructions+=1;goto B46e757;
case 0x46e759:goto L46e759;
case 0x46e75e:c.instructions+=1;goto B46e75e;
case 0x46e760:goto L46e760;
case 0x46e765:goto L46e765;
case 0x46e76b:c.instructions+=3;goto B46e76b;
case 0x46e771:c.instructions+=2;goto B46e771;
case 0x46e773:c.instructions+=1;goto B46e773;
case 0x46e775:goto L46e775;
case 0x46e777:c.instructions+=1;goto B46e777;
case 0x46e779:goto L46e779;
case 0x46e77e:c.instructions+=1;goto B46e77e;
case 0x46e780:goto L46e780;
case 0x46e785:goto L46e785;
case 0x46e78b:c.instructions+=3;goto B46e78b;
case 0x46e791:c.instructions+=2;goto B46e791;
case 0x46e793:c.instructions+=1;goto B46e793;
case 0x46e795:goto L46e795;
case 0x46e797:c.instructions+=1;goto B46e797;
case 0x46e799:goto L46e799;
case 0x46e79e:c.instructions+=1;goto B46e79e;
case 0x46e7a0:goto L46e7a0;
case 0x46e7a5:goto L46e7a5;
case 0x46e7ab:c.instructions+=3;goto B46e7ab;
case 0x46e7b1:c.instructions+=2;goto B46e7b1;
case 0x46e7b3:c.instructions+=1;goto B46e7b3;
case 0x46e7b5:goto L46e7b5;
case 0x46e7b7:c.instructions+=1;goto B46e7b7;
case 0x46e7b9:goto L46e7b9;
case 0x46e7be:c.instructions+=1;goto B46e7be;
case 0x46e7c0:goto L46e7c0;
case 0x46e7c5:goto L46e7c5;
case 0x46e7cb:c.instructions+=3;goto B46e7cb;
case 0x46e7d1:c.instructions+=2;goto B46e7d1;
case 0x46e7d3:c.instructions+=1;goto B46e7d3;
case 0x46e7d5:goto L46e7d5;
case 0x46e7d7:c.instructions+=1;goto B46e7d7;
case 0x46e7d9:goto L46e7d9;
case 0x46e7de:c.instructions+=1;goto B46e7de;
case 0x46e7e0:goto L46e7e0;
case 0x46e7e5:goto L46e7e5;
case 0x46e7eb:c.instructions+=3;goto B46e7eb;
case 0x46e7f1:c.instructions+=2;goto B46e7f1;
case 0x46e7f3:c.instructions+=1;goto B46e7f3;
case 0x46e7f5:goto L46e7f5;
case 0x46e7f7:c.instructions+=7;goto B46e7f7;
case 0x46e7fd:c.instructions+=6;goto B46e7fd;
case 0x46e7fe:c.instructions+=5;goto B46e7fe;
case 0x46e7ff:c.instructions+=4;goto B46e7ff;
case 0x46e800:c.instructions+=3;goto B46e800;
case 0x46e802:c.instructions+=2;goto B46e802;
case 0x46e803:c.instructions+=1;goto B46e803;
case 0x46e804:goto L46e804;
case 0x46e809:c.instructions+=1;goto B46e809;
case 0x46e80b:goto L46e80b;
case 0x46e810:goto L46e810;
case 0x46e811:c.instructions+=6;goto B46e811;
case 0x46e817:c.instructions+=5;goto B46e817;
case 0x46e818:c.instructions+=4;goto B46e818;
case 0x46e819:c.instructions+=3;goto B46e819;
case 0x46e81b:c.instructions+=2;goto B46e81b;
case 0x46e81c:c.instructions+=1;goto B46e81c;
case 0x46e820:goto L46e820;
case 0x46e825:c.instructions+=2;goto B46e825;
case 0x46e826:c.instructions+=1;goto B46e826;
case 0x46e82b:goto L46e82b;
case 0x46e82e:c.instructions+=2;goto B46e82e;
case 0x46e833:c.instructions+=1;goto B46e833;
case 0x46e835:goto L46e835;
case 0x46e83b:c.instructions+=5;goto B46e83b;
case 0x46e83e:c.instructions+=4;goto B46e83e;
case 0x46e844:c.instructions+=3;goto B46e844;
case 0x46e845:c.instructions+=2;goto B46e845;
case 0x46e84a:c.instructions+=1;goto B46e84a;
case 0x46e84f:goto L46e84f;
case 0x46e852:c.instructions+=2;goto B46e852;
case 0x46e854:c.instructions+=1;goto B46e854;
case 0x46e856:goto L46e856;
case 0x46e858:c.instructions+=1;goto B46e858;
case 0x46e85d:goto L46e85d;
case 0x46e85f:c.instructions+=1;goto B46e85f;
case 0x46e860:goto L46e860;
case 0x46e861:c.instructions+=6;goto B46e861;
case 0x46e865:c.instructions+=5;goto B46e865;
case 0x46e867:c.instructions+=4;goto B46e867;
case 0x46e868:c.instructions+=3;goto B46e868;
case 0x46e86a:c.instructions+=2;goto B46e86a;
case 0x46e86c:c.instructions+=1;goto B46e86c;
case 0x46e86f:goto L46e86f;
case 0x46e871:c.instructions+=4;goto B46e871;
case 0x46e874:c.instructions+=3;goto B46e874;
case 0x46e879:c.instructions+=2;goto B46e879;
case 0x46e87c:c.instructions+=1;goto B46e87c;
case 0x46e87e:goto L46e87e;
case 0x46e87f:c.instructions+=1;goto B46e87f;
case 0x46e881:goto L46e881;
case 0x46e886:c.instructions+=2;goto B46e886;
case 0x46e888:c.instructions+=1;goto B46e888;
case 0x46e88d:goto L46e88d;
case 0x46e890:c.instructions+=3;goto B46e890;
case 0x46e891:c.instructions+=2;goto B46e891;
case 0x46e892:c.instructions+=1;goto B46e892;
case 0x46e895:goto L46e895;
case 0x46e89b:c.instructions+=3;goto B46e89b;
case 0x46e89c:c.instructions+=2;goto B46e89c;
case 0x46e89d:c.instructions+=1;goto B46e89d;
case 0x46e8a0:goto L46e8a0;
case 0x46e8a6:c.instructions+=3;goto B46e8a6;
case 0x46e8a7:c.instructions+=2;goto B46e8a7;
case 0x46e8a8:c.instructions+=1;goto B46e8a8;
case 0x46e8b0:goto L46e8b0;
case 0x46e8b1:c.instructions+=80;goto B46e8b1;
case 0x46e8b3:c.instructions+=79;goto B46e8b3;
case 0x46e8b6:c.instructions+=78;goto B46e8b6;
case 0x46e8b9:c.instructions+=77;goto B46e8b9;
case 0x46e8bc:c.instructions+=76;goto B46e8bc;
case 0x46e8c2:c.instructions+=75;goto B46e8c2;
case 0x46e8c5:c.instructions+=74;goto B46e8c5;
case 0x46e8cb:c.instructions+=73;goto B46e8cb;
case 0x46e8d1:c.instructions+=72;goto B46e8d1;
case 0x46e8d7:c.instructions+=71;goto B46e8d7;
case 0x46e8dd:c.instructions+=70;goto B46e8dd;
case 0x46e8e3:c.instructions+=69;goto B46e8e3;
case 0x46e8e7:c.instructions+=68;goto B46e8e7;
case 0x46e8e9:c.instructions+=67;goto B46e8e9;
case 0x46e8ed:c.instructions+=66;goto B46e8ed;
case 0x46e8f1:c.instructions+=65;goto B46e8f1;
case 0x46e8f5:c.instructions+=64;goto B46e8f5;
case 0x46e8fb:c.instructions+=63;goto B46e8fb;
case 0x46e901:c.instructions+=62;goto B46e901;
case 0x46e907:c.instructions+=61;goto B46e907;
case 0x46e90d:c.instructions+=60;goto B46e90d;
case 0x46e913:c.instructions+=59;goto B46e913;
case 0x46e919:c.instructions+=58;goto B46e919;
case 0x46e91d:c.instructions+=57;goto B46e91d;
case 0x46e921:c.instructions+=56;goto B46e921;
case 0x46e923:c.instructions+=55;goto B46e923;
case 0x46e927:c.instructions+=54;goto B46e927;
case 0x46e92b:c.instructions+=53;goto B46e92b;
case 0x46e92f:c.instructions+=52;goto B46e92f;
case 0x46e932:c.instructions+=51;goto B46e932;
case 0x46e936:c.instructions+=50;goto B46e936;
case 0x46e939:c.instructions+=49;goto B46e939;
case 0x46e93d:c.instructions+=48;goto B46e93d;
case 0x46e940:c.instructions+=47;goto B46e940;
case 0x46e942:c.instructions+=46;goto B46e942;
case 0x46e946:c.instructions+=45;goto B46e946;
case 0x46e948:c.instructions+=44;goto B46e948;
case 0x46e94c:c.instructions+=43;goto B46e94c;
case 0x46e950:c.instructions+=42;goto B46e950;
case 0x46e954:c.instructions+=41;goto B46e954;
case 0x46e95a:c.instructions+=40;goto B46e95a;
case 0x46e95c:c.instructions+=39;goto B46e95c;
case 0x46e962:c.instructions+=38;goto B46e962;
case 0x46e968:c.instructions+=37;goto B46e968;
case 0x46e96c:c.instructions+=36;goto B46e96c;
case 0x46e972:c.instructions+=35;goto B46e972;
case 0x46e978:c.instructions+=34;goto B46e978;
case 0x46e97c:c.instructions+=33;goto B46e97c;
case 0x46e982:c.instructions+=32;goto B46e982;
case 0x46e988:c.instructions+=31;goto B46e988;
case 0x46e98c:c.instructions+=30;goto B46e98c;
case 0x46e992:c.instructions+=29;goto B46e992;
case 0x46e998:c.instructions+=28;goto B46e998;
case 0x46e99c:c.instructions+=27;goto B46e99c;
case 0x46e99f:c.instructions+=26;goto B46e99f;
case 0x46e9a3:c.instructions+=25;goto B46e9a3;
case 0x46e9a6:c.instructions+=24;goto B46e9a6;
case 0x46e9a8:c.instructions+=23;goto B46e9a8;
case 0x46e9ab:c.instructions+=22;goto B46e9ab;
case 0x46e9af:c.instructions+=21;goto B46e9af;
case 0x46e9b3:c.instructions+=20;goto B46e9b3;
case 0x46e9b7:c.instructions+=19;goto B46e9b7;
case 0x46e9bb:c.instructions+=18;goto B46e9bb;
case 0x46e9c1:c.instructions+=17;goto B46e9c1;
case 0x46e9c3:c.instructions+=16;goto B46e9c3;
case 0x46e9c9:c.instructions+=15;goto B46e9c9;
case 0x46e9cf:c.instructions+=14;goto B46e9cf;
case 0x46e9d3:c.instructions+=13;goto B46e9d3;
case 0x46e9d9:c.instructions+=12;goto B46e9d9;
case 0x46e9df:c.instructions+=11;goto B46e9df;
case 0x46e9e3:c.instructions+=10;goto B46e9e3;
case 0x46e9e9:c.instructions+=9;goto B46e9e9;
case 0x46e9ef:c.instructions+=8;goto B46e9ef;
case 0x46e9f3:c.instructions+=7;goto B46e9f3;
case 0x46e9f9:c.instructions+=6;goto B46e9f9;
case 0x46e9ff:c.instructions+=5;goto B46e9ff;
case 0x46ea02:c.instructions+=4;goto B46ea02;
case 0x46ea09:c.instructions+=3;goto B46ea09;
case 0x46ea0c:c.instructions+=2;goto B46ea0c;
case 0x46ea13:c.instructions+=1;goto B46ea13;
case 0x46ea15:goto L46ea15;
case 0x46ea1c:c.instructions+=1;goto B46ea1c;
case 0x46ea1e:goto L46ea1e;
case 0x46ea25:goto L46ea25;
case 0x46ea2c:c.instructions+=4;goto B46ea2c;
case 0x46ea2f:c.instructions+=3;goto B46ea2f;
case 0x46ea35:c.instructions+=2;goto B46ea35;
case 0x46ea37:c.instructions+=1;goto B46ea37;
case 0x46ea39:goto L46ea39;
case 0x46ea3f:c.instructions+=2;goto B46ea3f;
case 0x46ea41:c.instructions+=1;goto B46ea41;
case 0x46ea43:goto L46ea43;
case 0x46ea4a:goto L46ea4a;
case 0x46ea4c:c.instructions+=2;goto B46ea4c;
case 0x46ea4d:c.instructions+=1;goto B46ea4d;
case 0x46ea50:goto L46ea50;
case 0x46ea51:c.instructions+=4;goto B46ea51;
case 0x46ea52:c.instructions+=3;goto B46ea52;
case 0x46ea53:c.instructions+=2;goto B46ea53;
case 0x46ea54:c.instructions+=1;goto B46ea54;
case 0x46ea59:goto L46ea59;
case 0x46ea5e:goto L46ea5e;
case 0x46ea60:c.instructions+=11;goto B46ea60;
case 0x46ea65:c.instructions+=10;goto B46ea65;
case 0x46ea67:c.instructions+=9;goto B46ea67;
case 0x46ea6d:c.instructions+=8;goto B46ea6d;
case 0x46ea73:c.instructions+=7;goto B46ea73;
case 0x46ea79:c.instructions+=6;goto B46ea79;
case 0x46ea7f:c.instructions+=5;goto B46ea7f;
case 0x46ea82:c.instructions+=4;goto B46ea82;
case 0x46ea87:c.instructions+=3;goto B46ea87;
case 0x46ea8a:c.instructions+=2;goto B46ea8a;
case 0x46ea8c:c.instructions+=1;goto B46ea8c;
case 0x46ea90:goto L46ea90;
case 0x46ea93:c.instructions+=14;goto B46ea93;
case 0x46ea96:c.instructions+=13;goto B46ea96;
case 0x46ea99:c.instructions+=12;goto B46ea99;
case 0x46ea9b:c.instructions+=11;goto B46ea9b;
case 0x46eaa2:c.instructions+=10;goto B46eaa2;
case 0x46eaa5:c.instructions+=9;goto B46eaa5;
case 0x46eaa8:c.instructions+=8;goto B46eaa8;
case 0x46eaaa:c.instructions+=7;goto B46eaaa;
case 0x46eab0:c.instructions+=6;goto B46eab0;
case 0x46eab7:c.instructions+=5;goto B46eab7;
case 0x46eabe:c.instructions+=4;goto B46eabe;
case 0x46eac0:c.instructions+=3;goto B46eac0;
case 0x46eac3:c.instructions+=2;goto B46eac3;
case 0x46eac5:c.instructions+=1;goto B46eac5;
case 0x46eac7:goto L46eac7;
case 0x46eacd:c.instructions+=1;goto B46eacd;
case 0x46eacf:goto L46eacf;
case 0x46ead2:c.instructions+=3;goto B46ead2;
case 0x46ead5:c.instructions+=2;goto B46ead5;
case 0x46eadc:c.instructions+=1;goto B46eadc;
case 0x46eade:goto L46eade;
case 0x46eae1:c.instructions+=6;goto B46eae1;
case 0x46eae3:c.instructions+=5;goto B46eae3;
case 0x46eae9:c.instructions+=4;goto B46eae9;
case 0x46eaef:c.instructions+=3;goto B46eaef;
case 0x46eaf5:c.instructions+=2;goto B46eaf5;
case 0x46eafb:c.instructions+=1;goto B46eafb;
case 0x46eafd:goto L46eafd;
case 0x46eb00:c.instructions+=3;goto B46eb00;
case 0x46eb03:c.instructions+=2;goto B46eb03;
case 0x46eb0a:c.instructions+=1;goto B46eb0a;
case 0x46eb0c:goto L46eb0c;
case 0x46eb0f:c.instructions+=5;goto B46eb0f;
case 0x46eb15:c.instructions+=4;goto B46eb15;
case 0x46eb17:c.instructions+=3;goto B46eb17;
case 0x46eb1d:c.instructions+=2;goto B46eb1d;
case 0x46eb23:c.instructions+=1;goto B46eb23;
case 0x46eb29:goto L46eb29;
case 0x46eb2c:c.instructions+=4;goto B46eb2c;
case 0x46eb2d:c.instructions+=3;goto B46eb2d;
case 0x46eb30:c.instructions+=2;goto B46eb30;
case 0x46eb36:c.instructions+=1;goto B46eb36;
case 0x46eb3c:goto L46eb3c;
case 0x46eb3d:c.instructions+=4;goto B46eb3d;
case 0x46eb3e:c.instructions+=3;goto B46eb3e;
case 0x46eb3f:c.instructions+=2;goto B46eb3f;
case 0x46eb40:c.instructions+=1;goto B46eb40;
case 0x46eb50:goto L46eb50;
case 0x46eb55:c.instructions+=2;goto B46eb55;
case 0x46eb56:c.instructions+=1;goto B46eb56;
case 0x46eb5b:goto L46eb5b;
case 0x46eb5e:c.instructions+=2;goto B46eb5e;
case 0x46eb63:c.instructions+=1;goto B46eb63;
case 0x46eb65:goto L46eb65;
case 0x46eb6b:c.instructions+=5;goto B46eb6b;
case 0x46eb6e:c.instructions+=4;goto B46eb6e;
case 0x46eb74:c.instructions+=3;goto B46eb74;
case 0x46eb75:c.instructions+=2;goto B46eb75;
case 0x46eb7a:c.instructions+=1;goto B46eb7a;
case 0x46eb7f:goto L46eb7f;
case 0x46eb82:c.instructions+=2;goto B46eb82;
case 0x46eb84:c.instructions+=1;goto B46eb84;
case 0x46eb86:goto L46eb86;
case 0x46eb88:c.instructions+=1;goto B46eb88;
case 0x46eb8d:goto L46eb8d;
case 0x46eb8f:c.instructions+=1;goto B46eb8f;
case 0x46eb90:goto L46eb90;
case 0x46eb95:c.instructions+=2;goto B46eb95;
case 0x46eb96:c.instructions+=1;goto B46eb96;
case 0x46eb9b:goto L46eb9b;
case 0x46eb9e:c.instructions+=2;goto B46eb9e;
case 0x46eba3:c.instructions+=1;goto B46eba3;
case 0x46eba5:goto L46eba5;
case 0x46ebab:c.instructions+=5;goto B46ebab;
case 0x46ebae:c.instructions+=4;goto B46ebae;
case 0x46ebb4:c.instructions+=3;goto B46ebb4;
case 0x46ebb5:c.instructions+=2;goto B46ebb5;
case 0x46ebba:c.instructions+=1;goto B46ebba;
case 0x46ebbf:goto L46ebbf;
case 0x46ebc2:c.instructions+=2;goto B46ebc2;
case 0x46ebc4:c.instructions+=1;goto B46ebc4;
case 0x46ebc6:goto L46ebc6;
case 0x46ebc8:c.instructions+=1;goto B46ebc8;
case 0x46ebcd:goto L46ebcd;
case 0x46ebcf:c.instructions+=1;goto B46ebcf;
case 0x46ebd0:goto L46ebd0;
case 0x46ebd5:c.instructions+=2;goto B46ebd5;
case 0x46ebd6:c.instructions+=1;goto B46ebd6;
case 0x46ebdb:goto L46ebdb;
case 0x46ebde:c.instructions+=2;goto B46ebde;
case 0x46ebe3:c.instructions+=1;goto B46ebe3;
case 0x46ebe5:goto L46ebe5;
case 0x46ebeb:c.instructions+=5;goto B46ebeb;
case 0x46ebee:c.instructions+=4;goto B46ebee;
case 0x46ebf4:c.instructions+=3;goto B46ebf4;
case 0x46ebf5:c.instructions+=2;goto B46ebf5;
case 0x46ebfa:c.instructions+=1;goto B46ebfa;
case 0x46ebff:goto L46ebff;
case 0x46ec02:c.instructions+=2;goto B46ec02;
case 0x46ec04:c.instructions+=1;goto B46ec04;
case 0x46ec06:goto L46ec06;
case 0x46ec08:c.instructions+=1;goto B46ec08;
case 0x46ec0d:goto L46ec0d;
case 0x46ec0f:c.instructions+=1;goto B46ec0f;
case 0x46ec10:goto L46ec10;
case 0x46ec11:c.instructions+=2;goto B46ec11;
case 0x46ec13:c.instructions+=1;goto B46ec13;
case 0x46ec18:goto L46ec18;
case 0x46ec1d:c.instructions+=1;goto B46ec1d;
case 0x46ec1f:goto L46ec1f;
case 0x46ec20:c.instructions+=1;goto B46ec20;
case 0x46ec25:goto L46ec25;
case 0x46ec28:goto L46ec28;
case 0x46ec2a:c.instructions+=2;goto B46ec2a;
case 0x46ec2b:c.instructions+=1;goto B46ec2b;
case 0x46ec30:goto L46ec30;
case 0x46ec31:c.instructions+=6;goto B46ec31;
case 0x46ec35:c.instructions+=5;goto B46ec35;
case 0x46ec37:c.instructions+=4;goto B46ec37;
case 0x46ec38:c.instructions+=3;goto B46ec38;
case 0x46ec3a:c.instructions+=2;goto B46ec3a;
case 0x46ec3c:c.instructions+=1;goto B46ec3c;
case 0x46ec3f:goto L46ec3f;
case 0x46ec41:c.instructions+=3;goto B46ec41;
case 0x46ec47:c.instructions+=2;goto B46ec47;
case 0x46ec4a:c.instructions+=1;goto B46ec4a;
case 0x46ec4c:goto L46ec4c;
case 0x46ec51:c.instructions+=2;goto B46ec51;
case 0x46ec53:c.instructions+=1;goto B46ec53;
case 0x46ec58:goto L46ec58;
case 0x46ec5b:c.instructions+=3;goto B46ec5b;
case 0x46ec5c:c.instructions+=2;goto B46ec5c;
case 0x46ec5d:c.instructions+=1;goto B46ec5d;
case 0x46ec60:goto L46ec60;
case 0x46ec63:c.instructions+=3;goto B46ec63;
case 0x46ec64:c.instructions+=2;goto B46ec64;
case 0x46ec65:c.instructions+=1;goto B46ec65;
case 0x46ec70:goto L46ec70;
case 0x46ec71:c.instructions+=20;goto B46ec71;
case 0x46ec72:c.instructions+=19;goto B46ec72;
case 0x46ec74:c.instructions+=18;goto B46ec74;
case 0x46ec75:c.instructions+=17;goto B46ec75;
case 0x46ec77:c.instructions+=16;goto B46ec77;
case 0x46ec7a:c.instructions+=15;goto B46ec7a;
case 0x46ec80:c.instructions+=14;goto B46ec80;
case 0x46ec86:c.instructions+=13;goto B46ec86;
case 0x46ec8c:c.instructions+=12;goto B46ec8c;
case 0x46ec92:c.instructions+=11;goto B46ec92;
case 0x46ec98:c.instructions+=10;goto B46ec98;
case 0x46ec9e:c.instructions+=9;goto B46ec9e;
case 0x46eca4:c.instructions+=8;goto B46eca4;
case 0x46eca7:c.instructions+=7;goto B46eca7;
case 0x46ecaa:c.instructions+=6;goto B46ecaa;
case 0x46ecad:c.instructions+=5;goto B46ecad;
case 0x46ecb0:c.instructions+=4;goto B46ecb0;
case 0x46ecb6:c.instructions+=3;goto B46ecb6;
case 0x46ecb8:c.instructions+=2;goto B46ecb8;
case 0x46ecbb:c.instructions+=1;goto B46ecbb;
case 0x46ecc1:goto L46ecc1;
case 0x46ecc8:c.instructions+=12;goto B46ecc8;
case 0x46eccf:c.instructions+=11;goto B46eccf;
case 0x46ecd5:c.instructions+=10;goto B46ecd5;
case 0x46ecdb:c.instructions+=9;goto B46ecdb;
case 0x46ece1:c.instructions+=8;goto B46ece1;
case 0x46ece7:c.instructions+=7;goto B46ece7;
case 0x46eced:c.instructions+=6;goto B46eced;
case 0x46ecf0:c.instructions+=5;goto B46ecf0;
case 0x46ecf3:c.instructions+=4;goto B46ecf3;
case 0x46ecf9:c.instructions+=3;goto B46ecf9;
case 0x46ecfc:c.instructions+=2;goto B46ecfc;
case 0x46ecfe:c.instructions+=1;goto B46ecfe;
case 0x46ed01:goto L46ed01;
case 0x46ed07:c.instructions+=18;goto B46ed07;
case 0x46ed0d:c.instructions+=17;goto B46ed0d;
case 0x46ed17:c.instructions+=16;goto B46ed17;
case 0x46ed1d:c.instructions+=15;goto B46ed1d;
case 0x46ed23:c.instructions+=14;goto B46ed23;
case 0x46ed29:c.instructions+=13;goto B46ed29;
case 0x46ed2f:c.instructions+=12;goto B46ed2f;
case 0x46ed32:c.instructions+=11;goto B46ed32;
case 0x46ed35:c.instructions+=10;goto B46ed35;
case 0x46ed3a:c.instructions+=9;goto B46ed3a;
case 0x46ed40:c.instructions+=8;goto B46ed40;
case 0x46ed46:c.instructions+=7;goto B46ed46;
case 0x46ed49:c.instructions+=6;goto B46ed49;
case 0x46ed4f:c.instructions+=5;goto B46ed4f;
case 0x46ed55:c.instructions+=4;goto B46ed55;
case 0x46ed5b:c.instructions+=3;goto B46ed5b;
case 0x46ed5d:c.instructions+=2;goto B46ed5d;
case 0x46ed60:c.instructions+=1;goto B46ed60;
case 0x46ed62:goto L46ed62;
case 0x46ed68:goto L46ed68;
case 0x46ed6e:c.instructions+=30;goto B46ed6e;
case 0x46ed70:c.instructions+=29;goto B46ed70;
case 0x46ed76:c.instructions+=28;goto B46ed76;
case 0x46ed7c:c.instructions+=27;goto B46ed7c;
case 0x46ed82:c.instructions+=26;goto B46ed82;
case 0x46ed88:c.instructions+=25;goto B46ed88;
case 0x46ed89:c.instructions+=24;goto B46ed89;
case 0x46ed8f:c.instructions+=23;goto B46ed8f;
case 0x46ed99:c.instructions+=22;goto B46ed99;
case 0x46ed9f:c.instructions+=21;goto B46ed9f;
case 0x46eda5:c.instructions+=20;goto B46eda5;
case 0x46edab:c.instructions+=19;goto B46edab;
case 0x46edb1:c.instructions+=18;goto B46edb1;
case 0x46edb7:c.instructions+=17;goto B46edb7;
case 0x46edbd:c.instructions+=16;goto B46edbd;
case 0x46edc3:c.instructions+=15;goto B46edc3;
case 0x46edc6:c.instructions+=14;goto B46edc6;
case 0x46edcc:c.instructions+=13;goto B46edcc;
case 0x46edcf:c.instructions+=12;goto B46edcf;
case 0x46edd5:c.instructions+=11;goto B46edd5;
case 0x46edd8:c.instructions+=10;goto B46edd8;
case 0x46edda:c.instructions+=9;goto B46edda;
case 0x46edde:c.instructions+=8;goto B46edde;
case 0x46ede2:c.instructions+=7;goto B46ede2;
case 0x46ede3:c.instructions+=6;goto B46ede3;
case 0x46ede9:c.instructions+=5;goto B46ede9;
case 0x46edef:c.instructions+=4;goto B46edef;
case 0x46edf5:c.instructions+=3;goto B46edf5;
case 0x46edf7:c.instructions+=2;goto B46edf7;
case 0x46edfa:c.instructions+=1;goto B46edfa;
case 0x46edfc:goto L46edfc;
case 0x46ee02:goto L46ee02;
case 0x46ee04:c.instructions+=13;goto B46ee04;
case 0x46ee0e:c.instructions+=12;goto B46ee0e;
case 0x46ee14:c.instructions+=11;goto B46ee14;
case 0x46ee1a:c.instructions+=10;goto B46ee1a;
case 0x46ee20:c.instructions+=9;goto B46ee20;
case 0x46ee26:c.instructions+=8;goto B46ee26;
case 0x46ee2c:c.instructions+=7;goto B46ee2c;
case 0x46ee2f:c.instructions+=6;goto B46ee2f;
case 0x46ee32:c.instructions+=5;goto B46ee32;
case 0x46ee39:c.instructions+=4;goto B46ee39;
case 0x46ee3c:c.instructions+=3;goto B46ee3c;
case 0x46ee46:c.instructions+=2;goto B46ee46;
case 0x46ee4a:c.instructions+=1;goto B46ee4a;
case 0x46ee50:goto L46ee50;
case 0x46ee51:c.instructions+=3;goto B46ee51;
case 0x46ee52:c.instructions+=2;goto B46ee52;
case 0x46ee53:c.instructions+=1;goto B46ee53;
case 0x46ee60:goto L46ee60;
case 0x46ee61:c.instructions+=6;goto B46ee61;
case 0x46ee62:c.instructions+=5;goto B46ee62;
case 0x46ee64:c.instructions+=4;goto B46ee64;
case 0x46ee67:c.instructions+=3;goto B46ee67;
case 0x46ee6a:c.instructions+=2;goto B46ee6a;
case 0x46ee71:c.instructions+=1;goto B46ee71;
case 0x46ee77:goto L46ee77;
case 0x46ee78:c.instructions+=22;goto B46ee78;
case 0x46ee7a:c.instructions+=21;goto B46ee7a;
case 0x46ee80:c.instructions+=20;goto B46ee80;
case 0x46ee86:c.instructions+=19;goto B46ee86;
case 0x46ee8c:c.instructions+=18;goto B46ee8c;
case 0x46ee92:c.instructions+=17;goto B46ee92;
case 0x46ee98:c.instructions+=16;goto B46ee98;
case 0x46ee9e:c.instructions+=15;goto B46ee9e;
case 0x46eea4:c.instructions+=14;goto B46eea4;
case 0x46eea9:c.instructions+=13;goto B46eea9;
case 0x46eeac:c.instructions+=12;goto B46eeac;
case 0x46eeaf:c.instructions+=11;goto B46eeaf;
case 0x46eeb5:c.instructions+=10;goto B46eeb5;
case 0x46eebb:c.instructions+=9;goto B46eebb;
case 0x46eec1:c.instructions+=8;goto B46eec1;
case 0x46eec7:c.instructions+=7;goto B46eec7;
case 0x46eecd:c.instructions+=6;goto B46eecd;
case 0x46eed0:c.instructions+=5;goto B46eed0;
case 0x46eed3:c.instructions+=4;goto B46eed3;
case 0x46eed9:c.instructions+=3;goto B46eed9;
case 0x46eedc:c.instructions+=2;goto B46eedc;
case 0x46eede:c.instructions+=1;goto B46eede;
case 0x46eee1:goto L46eee1;
case 0x46eee7:c.instructions+=14;goto B46eee7;
case 0x46eeed:c.instructions+=13;goto B46eeed;
case 0x46eef7:c.instructions+=12;goto B46eef7;
case 0x46eefd:c.instructions+=11;goto B46eefd;
case 0x46ef03:c.instructions+=10;goto B46ef03;
case 0x46ef09:c.instructions+=9;goto B46ef09;
case 0x46ef0f:c.instructions+=8;goto B46ef0f;
case 0x46ef12:c.instructions+=7;goto B46ef12;
case 0x46ef15:c.instructions+=6;goto B46ef15;
case 0x46ef1b:c.instructions+=5;goto B46ef1b;
case 0x46ef1f:c.instructions+=4;goto B46ef1f;
case 0x46ef25:c.instructions+=3;goto B46ef25;
case 0x46ef27:c.instructions+=2;goto B46ef27;
case 0x46ef2a:c.instructions+=1;goto B46ef2a;
case 0x46ef30:goto L46ef30;
case 0x46ef34:c.instructions+=5;goto B46ef34;
case 0x46ef3a:c.instructions+=4;goto B46ef3a;
case 0x46ef3e:c.instructions+=3;goto B46ef3e;
case 0x46ef40:c.instructions+=2;goto B46ef40;
case 0x46ef43:c.instructions+=1;goto B46ef43;
case 0x46ef45:goto L46ef45;
case 0x46ef47:c.instructions+=1;goto B46ef47;
case 0x46ef4d:goto L46ef4d;
case 0x46ef53:c.instructions+=7;goto B46ef53;
case 0x46ef56:c.instructions+=6;goto B46ef56;
case 0x46ef5c:c.instructions+=5;goto B46ef5c;
case 0x46ef62:c.instructions+=4;goto B46ef62;
case 0x46ef68:c.instructions+=3;goto B46ef68;
case 0x46ef6a:c.instructions+=2;goto B46ef6a;
case 0x46ef6d:c.instructions+=1;goto B46ef6d;
case 0x46ef6f:goto L46ef6f;
case 0x46ef79:goto L46ef79;
case 0x46ef7f:c.instructions+=20;goto B46ef7f;
case 0x46ef81:c.instructions+=19;goto B46ef81;
case 0x46ef87:c.instructions+=18;goto B46ef87;
case 0x46ef8d:c.instructions+=17;goto B46ef8d;
case 0x46ef93:c.instructions+=16;goto B46ef93;
case 0x46ef99:c.instructions+=15;goto B46ef99;
case 0x46ef9f:c.instructions+=14;goto B46ef9f;
case 0x46efa5:c.instructions+=13;goto B46efa5;
case 0x46efab:c.instructions+=12;goto B46efab;
case 0x46efb1:c.instructions+=11;goto B46efb1;
case 0x46efb7:c.instructions+=10;goto B46efb7;
case 0x46efbd:c.instructions+=9;goto B46efbd;
case 0x46efc3:c.instructions+=8;goto B46efc3;
case 0x46efcd:c.instructions+=7;goto B46efcd;
case 0x46efd0:c.instructions+=6;goto B46efd0;
case 0x46efd3:c.instructions+=5;goto B46efd3;
case 0x46efd9:c.instructions+=4;goto B46efd9;
case 0x46efdc:c.instructions+=3;goto B46efdc;
case 0x46efe3:c.instructions+=2;goto B46efe3;
case 0x46efe4:c.instructions+=1;goto B46efe4;
case 0x46efea:goto L46efea;
case 0x46efeb:c.instructions+=2;goto B46efeb;
case 0x46efec:c.instructions+=1;goto B46efec;
case 0x46efed:goto L46efed;
case 0x46eff3:c.instructions+=1;goto B46eff3;
default:missing_instruction(c.pc);}
B46e002:L46e002:{c.instructions+=16;NFSU2_TR(0x46e002);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B46e008:{NFSU2_TR(0x46e008);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46e00c:{NFSU2_TR(0x46e00c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46e012:{NFSU2_TR(0x46e012);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46e016:{NFSU2_TR(0x46e016);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46e01c:{NFSU2_TR(0x46e01c);
{u32 ea_=u32(r4(R+4)+u32(144u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46e022:{NFSU2_TR(0x46e022);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46e026:{NFSU2_TR(0x46e026);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B46e02c:{NFSU2_TR(0x46e02c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46e032:{NFSU2_TR(0x46e032);
u8 U[8];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46e036:{NFSU2_TR(0x46e036);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46e037:{NFSU2_TR(0x46e037);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46e03b:{NFSU2_TR(0x46e03b);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B46e03d:{NFSU2_TR(0x46e03d);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46e041:{NFSU2_TR(0x46e041);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B46e044:{NFSU2_TR(0x46e044);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L46e053;}}
}
B46e046:L46e046:{c.instructions+=4;NFSU2_TR(0x46e046);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B46e049:{NFSU2_TR(0x46e049);
{u32 ea_=u32(r4(R+8));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46e04b:{NFSU2_TR(0x46e04b);
{u32 ea_=u32(r4(R+4)+u32(144u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B46e051:{NFSU2_TR(0x46e051);
{goto L46e059;}
}
B46e053:L46e053:{c.instructions+=1;NFSU2_TR(0x46e053);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46e059:L46e059:{c.instructions+=7;NFSU2_TR(0x46e059);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B46e05d:{NFSU2_TR(0x46e05d);
{u32 ea_=u32(r4(R+24)+u32(140u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46e063:{NFSU2_TR(0x46e063);
{u32 ea_=u32(r4(R+4)+u32(152u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46e069:{NFSU2_TR(0x46e069);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B46e06f:{NFSU2_TR(0x46e06f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B46e071:{NFSU2_TR(0x46e071);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B46e074:{NFSU2_TR(0x46e074);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L46e083;}}
}
B46e076:L46e076:{c.instructions+=4;NFSU2_TR(0x46e076);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46e079:{NFSU2_TR(0x46e079);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46e07b:{NFSU2_TR(0x46e07b);
{u32 ea_=u32(r4(R+4)+u32(152u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B46e081:{NFSU2_TR(0x46e081);
{goto L46e089;}
}
B46e083:L46e083:{c.instructions+=1;NFSU2_TR(0x46e083);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46e089:L46e089:{c.instructions+=11;NFSU2_TR(0x46e089);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46e08c:{NFSU2_TR(0x46e08c);
{u32 ea_=u32(r4(R+24)+u32(144u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B46e092:{NFSU2_TR(0x46e092);
{u32 ea_=u32(r4(R+4)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46e095:{NFSU2_TR(0x46e095);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B46e098:{NFSU2_TR(0x46e098);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46e09c:{NFSU2_TR(0x46e09c);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46e0a0:{NFSU2_TR(0x46e0a0);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B46e0a4:{NFSU2_TR(0x46e0a4);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B46e0a6:{NFSU2_TR(0x46e0a6);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B46e0a8:{NFSU2_TR(0x46e0a8);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B46e0ab:{NFSU2_TR(0x46e0ab);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L46e0b3;}}
}
B46e0ad:L46e0ad:{c.instructions+=2;NFSU2_TR(0x46e0ad);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B46e0af:{NFSU2_TR(0x46e0af);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46e0b3:L46e0b3:{c.instructions+=5;NFSU2_TR(0x46e0b3);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46e0b7:{NFSU2_TR(0x46e0b7);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B46e0b9:{NFSU2_TR(0x46e0b9);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B46e0bb:{NFSU2_TR(0x46e0bb);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B46e0be:{NFSU2_TR(0x46e0be);
if(r1(R+514)){{goto L46e0c6;}}
}
B46e0c0:L46e0c0:{c.instructions+=2;NFSU2_TR(0x46e0c0);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B46e0c2:{NFSU2_TR(0x46e0c2);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46e0c6:L46e0c6:{c.instructions+=10;NFSU2_TR(0x46e0c6);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B46e0ca:{NFSU2_TR(0x46e0ca);
{u32 ea_=u32(r4(R+24)+u32(140u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46e0d0:{NFSU2_TR(0x46e0d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46e0d3:{NFSU2_TR(0x46e0d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46e0d6:{NFSU2_TR(0x46e0d6);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46e0da:{NFSU2_TR(0x46e0da);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B46e0de:{NFSU2_TR(0x46e0de);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46e0e2:{NFSU2_TR(0x46e0e2);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B46e0e4:{NFSU2_TR(0x46e0e4);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B46e0e7:{NFSU2_TR(0x46e0e7);
if(r1(R+518)){{goto L46e0ef;}}
}
B46e0e9:L46e0e9:{c.instructions+=2;NFSU2_TR(0x46e0e9);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B46e0eb:{NFSU2_TR(0x46e0eb);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46e0ef:L46e0ef:{c.instructions+=5;NFSU2_TR(0x46e0ef);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46e0f3:{NFSU2_TR(0x46e0f3);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B46e0f5:{NFSU2_TR(0x46e0f5);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B46e0f7:{NFSU2_TR(0x46e0f7);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B46e0fa:{NFSU2_TR(0x46e0fa);
if(r1(R+514)){{goto L46e102;}}
}
B46e0fc:L46e0fc:{c.instructions+=2;NFSU2_TR(0x46e0fc);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B46e0fe:{NFSU2_TR(0x46e0fe);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46e102:L46e102:{c.instructions+=5;NFSU2_TR(0x46e102);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B46e106:{NFSU2_TR(0x46e106);
{u32 ea_=u32(r4(R+24)+u32(144u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46e10c:{NFSU2_TR(0x46e10c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46e10d:{NFSU2_TR(0x46e10d);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B46e113:{NFSU2_TR(0x46e113);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46e118ull));
TAIL_STATIC(0x576970u,576);
}
B46e118:L46e118:{c.instructions+=4;NFSU2_TR(0x46e118);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x90ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46e11e:{NFSU2_TR(0x46e11e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46e11f:{NFSU2_TR(0x46e11f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xccull))));
__builtin_memmove((R+4),(U+0),4);
}
B46e125:{NFSU2_TR(0x46e125);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46e12aull));
TAIL_STATIC(0x576970u,576);
}
B46e12a:L46e12a:{c.instructions+=8;NFSU2_TR(0x46e12a);
{u32 ea_=u32(r4(R+24)+u32(176u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46e130:{NFSU2_TR(0x46e130);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B46e133:{NFSU2_TR(0x46e133);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B46e136:{NFSU2_TR(0x46e136);
{u32 ea_=u32(u32(7905684u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B46e13c:{NFSU2_TR(0x46e13c);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46e13f:{NFSU2_TR(0x46e13f);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B46e142:{NFSU2_TR(0x46e142);
__asm__ volatile(".byte 0xde,0xf9":::"memory");
}
B46e144:{NFSU2_TR(0x46e144);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46e149ull));
TAIL_STATIC(0x75bed4u,75b);
}
B46e149:L46e149:{c.instructions+=8;NFSU2_TR(0x46e149);
{u32 ea_=u32(r4(R+24)+u32(216u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46e14f:{NFSU2_TR(0x46e14f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x194ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46e155:{NFSU2_TR(0x46e155);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B46e158:{NFSU2_TR(0x46e158);
{u32 ea_=u32(u32(7905684u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B46e15e:{NFSU2_TR(0x46e15e);
{u32 ea_=u32(r4(R+28)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46e161:{NFSU2_TR(0x46e161);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B46e164:{NFSU2_TR(0x46e164);
__asm__ volatile(".byte 0xde,0xf9":::"memory");
}
B46e166:{NFSU2_TR(0x46e166);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46e16bull));
TAIL_STATIC(0x75bed4u,75b);
}
B46e16b:L46e16b:{c.instructions+=7;NFSU2_TR(0x46e16b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1a0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46e171:{NFSU2_TR(0x46e171);
{u32 ea_=u32(r4(R+12)+u32(1072u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46e177:{NFSU2_TR(0x46e177);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B46e179:{NFSU2_TR(0x46e179);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B46e17f:{NFSU2_TR(0x46e17f);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B46e181:{NFSU2_TR(0x46e181);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B46e184:{NFSU2_TR(0x46e184);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L46e1be;}}
}
B46e186:L46e186:{c.instructions+=6;NFSU2_TR(0x46e186);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46e18c:{NFSU2_TR(0x46e18c);
{u32 ea_=u32(r4(R+4)+u32(164u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46e192:{NFSU2_TR(0x46e192);
{u32 ea_=u32(r4(R+28)+u32(40u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B46e195:{NFSU2_TR(0x46e195);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B46e197:{NFSU2_TR(0x46e197);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B46e19a:{NFSU2_TR(0x46e19a);
if(r1(R+518)){{goto L46e2ca;}}
}
B46e1a0:L46e1a0:{c.instructions+=5;NFSU2_TR(0x46e1a0);
{u32 ea_=u32(r4(R+4)+u32(168u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46e1a6:{NFSU2_TR(0x46e1a6);
{u32 ea_=u32(r4(R+28)+u32(40u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B46e1a9:{NFSU2_TR(0x46e1a9);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B46e1ab:{NFSU2_TR(0x46e1ab);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B46e1ae:{NFSU2_TR(0x46e1ae);
if(r1(R+518)){{goto L46e2ca;}}
}
B46e1b4:L46e1b4:{c.instructions+=1;NFSU2_TR(0x46e1b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1acull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B46e1be:L46e1be:{c.instructions+=1;NFSU2_TR(0x46e1be);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1b4ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B46e1c8:L46e1c8:{c.instructions+=6;NFSU2_TR(0x46e1c8);
{u32 ea_=u32(r4(R+12)+u32(1072u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46e1ce:{NFSU2_TR(0x46e1ce);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B46e1d0:{NFSU2_TR(0x46e1d0);
{u32 ea_=u32(u32(7881312u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B46e1d6:{NFSU2_TR(0x46e1d6);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B46e1d8:{NFSU2_TR(0x46e1d8);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B46e1db:{NFSU2_TR(0x46e1db);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L46e215;}}
}
B46e1dd:L46e1dd:{c.instructions+=6;NFSU2_TR(0x46e1dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46e1e3:{NFSU2_TR(0x46e1e3);
{u32 ea_=u32(r4(R+4)+u32(160u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46e1e9:{NFSU2_TR(0x46e1e9);
{u32 ea_=u32(r4(R+28)+u32(40u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B46e1ec:{NFSU2_TR(0x46e1ec);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B46e1ee:{NFSU2_TR(0x46e1ee);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B46e1f1:{NFSU2_TR(0x46e1f1);
if(r1(R+518)){{goto L46e32d;}}
}
B46e1f7:L46e1f7:{c.instructions+=5;NFSU2_TR(0x46e1f7);
{u32 ea_=u32(r4(R+4)+u32(172u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46e1fd:{NFSU2_TR(0x46e1fd);
{u32 ea_=u32(r4(R+28)+u32(40u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B46e200:{NFSU2_TR(0x46e200);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B46e202:{NFSU2_TR(0x46e202);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B46e205:{NFSU2_TR(0x46e205);
if(r1(R+518)){{goto L46e32d;}}
}
B46e20b:L46e20b:{c.instructions+=1;NFSU2_TR(0x46e20b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1b0ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B46e215:L46e215:{c.instructions+=1;NFSU2_TR(0x46e215);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1b8ull))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B46e21f:L46e21f:{c.instructions+=13;NFSU2_TR(0x46e21f);
{u32 ea_=u32(r4(R+12)+u32(132u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46e225:{NFSU2_TR(0x46e225);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x80ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46e22b:{NFSU2_TR(0x46e22b);
{u32 ea_=u32(r4(R+12)+u32(136u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46e231:{NFSU2_TR(0x46e231);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x80ull))));
__builtin_memmove((R+28),(U+0),4);
}
B46e237:{NFSU2_TR(0x46e237);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x90ull))));
__builtin_memmove((R+8),(U+0),4);
}
B46e23d:{NFSU2_TR(0x46e23d);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B46e23f:{NFSU2_TR(0x46e23f);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46e243:{NFSU2_TR(0x46e243);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46e244:{NFSU2_TR(0x46e244);
u8 U[4];
w4(U+0,u32(u32(u32(0x74ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B46e248:{NFSU2_TR(0x46e248);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46e249:{NFSU2_TR(0x46e249);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46e24d:{NFSU2_TR(0x46e24d);
u8 U[8];
w4(U+0,u32(u32(u32(0x38ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46e251:{NFSU2_TR(0x46e251);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46e256ull));
TAIL_STATIC(0x43c9d0u,43c);
}
B46e256:L46e256:{c.instructions+=6;NFSU2_TR(0x46e256);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46e257:{NFSU2_TR(0x46e257);
u8 U[4];
w4(U+0,u32(u32(u32(0x7cull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B46e25b:{NFSU2_TR(0x46e25b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46e25c:{NFSU2_TR(0x46e25c);
u8 U[4];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B46e260:{NFSU2_TR(0x46e260);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46e261:{NFSU2_TR(0x46e261);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46e266ull));
TAIL_STATIC(0x43c9c0u,43c);
}
B46e266:L46e266:{c.instructions+=5;NFSU2_TR(0x46e266);
u8 U[4];
w4(U+0,u32(u32(u32(0x44ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B46e26a:{NFSU2_TR(0x46e26a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46e26b:{NFSU2_TR(0x46e26b);
u8 U[4];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B46e26f:{NFSU2_TR(0x46e26f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46e270:{NFSU2_TR(0x46e270);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46e275ull));
TAIL_STATIC(0x43cf10u,43c);
}
B46e275:L46e275:{c.instructions+=18;NFSU2_TR(0x46e275);
{u32 ea_=u32(r4(R+16)+u32(124u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46e279:{NFSU2_TR(0x46e279);
{u32 ea_=u32(r4(R+16)+u32(128u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46e280:{NFSU2_TR(0x46e280);
u8 U[8];
w4(U+0,u32(u32(u32(0x84ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B46e287:{NFSU2_TR(0x46e287);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B46e289:{NFSU2_TR(0x46e289);
__builtin_memmove((R+0),(R+8),4);
}
B46e28b:{NFSU2_TR(0x46e28b);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46e28f:{NFSU2_TR(0x46e28f);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46e293:{NFSU2_TR(0x46e293);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x1cull))));
}
B46e296:{NFSU2_TR(0x46e296);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46e29a:{NFSU2_TR(0x46e29a);
u8 U[8];
w4(U+0,u32(u32(u32(0x68ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46e29e:{NFSU2_TR(0x46e29e);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46e2a2:{NFSU2_TR(0x46e2a2);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B46e2a4:{NFSU2_TR(0x46e2a4);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46e2a8:{NFSU2_TR(0x46e2a8);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46e2ac:{NFSU2_TR(0x46e2ac);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B46e2b2:{NFSU2_TR(0x46e2b2);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B46e2b4:{NFSU2_TR(0x46e2b4);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B46e2b7:{NFSU2_TR(0x46e2b7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L46e390;}}
}
B46e2bd:L46e2bd:{c.instructions+=2;NFSU2_TR(0x46e2bd);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B46e2c5:{NFSU2_TR(0x46e2c5);
{goto L46e39a;}
}
B46e2ca:L46e2ca:{c.instructions+=7;NFSU2_TR(0x46e2ca);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46e2ce:{NFSU2_TR(0x46e2ce);
{u32 ea_=u32(r4(R+24)+u32(428u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B46e2d4:{NFSU2_TR(0x46e2d4);
{u32 ea_=u32(r4(R+24)+u32(428u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B46e2da:{NFSU2_TR(0x46e2da);
{u32 ea_=u32(r4(R+28)+u32(44u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B46e2dd:{NFSU2_TR(0x46e2dd);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B46e2df:{NFSU2_TR(0x46e2df);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B46e2e2:{NFSU2_TR(0x46e2e2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x46e1beu);}goto L46e1be;}}
}
B46e2e8:L46e2e8:{c.instructions+=5;NFSU2_TR(0x46e2e8);
{u32 ea_=u32(r4(R+4)+u32(164u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46e2ee:{NFSU2_TR(0x46e2ee);
{u32 ea_=u32(r4(R+4)+u32(168u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B46e2f4:{NFSU2_TR(0x46e2f4);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B46e2f6:{NFSU2_TR(0x46e2f6);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B46e2f9:{NFSU2_TR(0x46e2f9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L46e303;}}
}
B46e2fb:L46e2fb:{c.instructions+=2;NFSU2_TR(0x46e2fb);
{u32 ea_=u32(r4(R+4)+u32(164u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46e301:{NFSU2_TR(0x46e301);
{goto L46e309;}
}
B46e303:L46e303:{c.instructions+=1;NFSU2_TR(0x46e303);
{u32 ea_=u32(r4(R+4)+u32(168u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46e309:L46e309:{c.instructions+=6;NFSU2_TR(0x46e309);
{u32 ea_=u32(r4(R+28)+u32(40u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B46e30c:{NFSU2_TR(0x46e30c);
{u32 ea_=u32(u32(7905684u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B46e312:{NFSU2_TR(0x46e312);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46e318:{NFSU2_TR(0x46e318);
{u32 ea_=u32(r4(R+28)+u32(40u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B46e31b:{NFSU2_TR(0x46e31b);
__asm__ volatile(".byte 0xde,0xf9":::"memory");
}
B46e31d:{NFSU2_TR(0x46e31d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46e322ull));
TAIL_STATIC(0x75bed4u,75b);
}
B46e322:L46e322:{c.instructions+=2;NFSU2_TR(0x46e322);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1b4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46e328:{NFSU2_TR(0x46e328);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x46e1c8u);}goto L46e1c8;}
}
B46e32d:L46e32d:{c.instructions+=7;NFSU2_TR(0x46e32d);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46e331:{NFSU2_TR(0x46e331);
{u32 ea_=u32(r4(R+24)+u32(432u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B46e337:{NFSU2_TR(0x46e337);
{u32 ea_=u32(r4(R+24)+u32(432u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B46e33d:{NFSU2_TR(0x46e33d);
{u32 ea_=u32(r4(R+28)+u32(44u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B46e340:{NFSU2_TR(0x46e340);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B46e342:{NFSU2_TR(0x46e342);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B46e345:{NFSU2_TR(0x46e345);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x46e215u);}goto L46e215;}}
}
B46e34b:L46e34b:{c.instructions+=5;NFSU2_TR(0x46e34b);
{u32 ea_=u32(r4(R+4)+u32(160u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46e351:{NFSU2_TR(0x46e351);
{u32 ea_=u32(r4(R+4)+u32(172u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B46e357:{NFSU2_TR(0x46e357);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B46e359:{NFSU2_TR(0x46e359);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B46e35c:{NFSU2_TR(0x46e35c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L46e366;}}
}
B46e35e:L46e35e:{c.instructions+=2;NFSU2_TR(0x46e35e);
{u32 ea_=u32(r4(R+4)+u32(160u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46e364:{NFSU2_TR(0x46e364);
{goto L46e36c;}
}
B46e366:L46e366:{c.instructions+=1;NFSU2_TR(0x46e366);
{u32 ea_=u32(r4(R+4)+u32(172u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46e36c:L46e36c:{c.instructions+=6;NFSU2_TR(0x46e36c);
{u32 ea_=u32(r4(R+28)+u32(40u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B46e36f:{NFSU2_TR(0x46e36f);
{u32 ea_=u32(u32(7905684u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B46e375:{NFSU2_TR(0x46e375);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46e37b:{NFSU2_TR(0x46e37b);
{u32 ea_=u32(r4(R+28)+u32(40u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B46e37e:{NFSU2_TR(0x46e37e);
__asm__ volatile(".byte 0xde,0xf9":::"memory");
}
B46e380:{NFSU2_TR(0x46e380);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46e385ull));
TAIL_STATIC(0x75bed4u,75b);
}
B46e385:L46e385:{c.instructions+=2;NFSU2_TR(0x46e385);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1b8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46e38b:{NFSU2_TR(0x46e38b);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x46e21fu);}goto L46e21f;}
}
B46e390:L46e390:{c.instructions+=3;NFSU2_TR(0x46e390);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46e394:{NFSU2_TR(0x46e394);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B46e396:{NFSU2_TR(0x46e396);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46e39a:L46e39a:{c.instructions+=3;NFSU2_TR(0x46e39a);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x40ull))));
__builtin_memmove((R+28),(U+0),4);
}
B46e39d:{NFSU2_TR(0x46e39d);
__builtin_memmove((R+4),(R+28),4);
}
B46e39f:{NFSU2_TR(0x46e39f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46e3a4ull));
TAIL_STATIC(0x59fa10u,59f);
}
B46e3a4:L46e3a4:{c.instructions+=4;NFSU2_TR(0x46e3a4);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B46e3a6:{NFSU2_TR(0x46e3a6);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46e3aa:{NFSU2_TR(0x46e3aa);
__builtin_memmove((R+4),(R+28),4);
}
B46e3ac:{NFSU2_TR(0x46e3ac);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46e3b1ull));
TAIL_STATIC(0x59fa10u,59f);
}
B46e3b1:L46e3b1:{c.instructions+=5;NFSU2_TR(0x46e3b1);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B46e3b7:{NFSU2_TR(0x46e3b7);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B46e3bf:{NFSU2_TR(0x46e3bf);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B46e3c1:{NFSU2_TR(0x46e3c1);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B46e3c4:{NFSU2_TR(0x46e3c4);
if(r1(R+518)){{goto L46e3ce;}}
}
B46e3c6:L46e3c6:{c.instructions+=1;NFSU2_TR(0x46e3c6);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x0ull));
s4(u32(r4(U+0)),r4(U+4));
}
B46e3ce:L46e3ce:{c.instructions+=5;NFSU2_TR(0x46e3ce);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46e3d2:{NFSU2_TR(0x46e3d2);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x70ull))));
__builtin_memmove((R+8),(U+0),4);
}
B46e3d5:{NFSU2_TR(0x46e3d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46e3d8:{NFSU2_TR(0x46e3d8);
__builtin_memmove((R+4),(R+8),4);
}
B46e3da:{NFSU2_TR(0x46e3da);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46e3dfull));
TAIL_STATIC(0x4599e0u,459);
}
B46e3df:L46e3df:{c.instructions+=9;NFSU2_TR(0x46e3df);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46e3e5:{NFSU2_TR(0x46e3e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B46e3e8:{NFSU2_TR(0x46e3e8);
{u32 ea_=u32(r4(R+28)+u32(56u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B46e3eb:{NFSU2_TR(0x46e3eb);
{u32 ea_=u32(r4(R+8)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B46e3ee:{NFSU2_TR(0x46e3ee);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46e3f2:{NFSU2_TR(0x46e3f2);
{u32 ea_=u32(r4(R+28)+u32(56u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B46e3f5:{NFSU2_TR(0x46e3f5);
{u32 ea_=u32(r4(R+24)+u32(436u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B46e3fb:{NFSU2_TR(0x46e3fb);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B46e3fd:{NFSU2_TR(0x46e3fd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46e402ull));
TAIL_STATIC(0x75bed4u,75b);
}
B46e402:L46e402:{c.instructions+=7;NFSU2_TR(0x46e402);
u8 U[8];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B46e406:{NFSU2_TR(0x46e406);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1bcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46e40c:{NFSU2_TR(0x46e40c);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46e40f:{NFSU2_TR(0x46e40f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B46e412:{NFSU2_TR(0x46e412);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+12))));
}
B46e414:{NFSU2_TR(0x46e414);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B46e416:{NFSU2_TR(0x46e416);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L46e420;}}
}
B46e418:L46e418:{c.instructions+=4;NFSU2_TR(0x46e418);
__builtin_memmove((R+4),(R+12),4);
}
B46e41a:{NFSU2_TR(0x46e41a);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+8))));
}
B46e41c:{NFSU2_TR(0x46e41c);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B46e41e:{NFSU2_TR(0x46e41e);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L46e422;}}
}
B46e420:L46e420:{c.instructions+=1;NFSU2_TR(0x46e420);
__builtin_memmove((R+0),(R+4),4);
}
B46e422:L46e422:{c.instructions+=5;NFSU2_TR(0x46e422);
{u32 ea_=u32(r4(R+24)+u32(440u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B46e428:{NFSU2_TR(0x46e428);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46e42c:{NFSU2_TR(0x46e42c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1bcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46e432:{NFSU2_TR(0x46e432);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B46e434:{NFSU2_TR(0x46e434);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46e439ull));
TAIL_STATIC(0x75bed4u,75b);
}
B46e439:L46e439:{c.instructions+=8;NFSU2_TR(0x46e439);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B46e43b:{NFSU2_TR(0x46e43b);
u8 U[8];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B46e43f:{NFSU2_TR(0x46e43f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46e445:{NFSU2_TR(0x46e445);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46e448:{NFSU2_TR(0x46e448);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B46e44b:{NFSU2_TR(0x46e44b);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+12))));
}
B46e44d:{NFSU2_TR(0x46e44d);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B46e44f:{NFSU2_TR(0x46e44f);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L46e45b;}}
}
B46e451:L46e451:{c.instructions+=4;NFSU2_TR(0x46e451);
__builtin_memmove((R+4),(R+12),4);
}
B46e453:{NFSU2_TR(0x46e453);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+8))));
}
B46e455:{NFSU2_TR(0x46e455);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B46e457:{NFSU2_TR(0x46e457);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L46e45b;}}
}
B46e459:L46e459:{c.instructions+=1;NFSU2_TR(0x46e459);
__builtin_memmove((R+4),(R+0),4);
}
B46e45b:L46e45b:{c.instructions+=5;NFSU2_TR(0x46e45b);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B46e45f:{NFSU2_TR(0x46e45f);
u8 U[8];
__builtin_memmove((U+0),(R+12),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B46e462:{NFSU2_TR(0x46e462);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46e466:{NFSU2_TR(0x46e466);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c0ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46e46c:{NFSU2_TR(0x46e46c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L46e476;}}
}
B46e46e:L46e46e:{c.instructions+=2;NFSU2_TR(0x46e46e);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46e474:{NFSU2_TR(0x46e474);
{goto L46e479;}
}
B46e476:L46e476:{c.instructions+=1;NFSU2_TR(0x46e476);
{u32 ea_=u32(r4(R+28)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46e479:L46e479:{c.instructions+=7;NFSU2_TR(0x46e479);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B46e47b:{NFSU2_TR(0x46e47b);
{u32 ea_=u32(u32(7905684u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B46e481:{NFSU2_TR(0x46e481);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46e485:{NFSU2_TR(0x46e485);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B46e489:{NFSU2_TR(0x46e489);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B46e48d:{NFSU2_TR(0x46e48d);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B46e48f:{NFSU2_TR(0x46e48f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46e494ull));
TAIL_STATIC(0x75bed4u,75b);
}
B46e494:L46e494:{c.instructions+=3;NFSU2_TR(0x46e494);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B46e496:{NFSU2_TR(0x46e496);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B46e498:{NFSU2_TR(0x46e498);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L46e4a2;}}
}
B46e49a:L46e49a:{c.instructions+=2;NFSU2_TR(0x46e49a);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46e4a0:{NFSU2_TR(0x46e4a0);
{goto L46e4a5;}
}
B46e4a2:L46e4a2:{c.instructions+=1;NFSU2_TR(0x46e4a2);
{u32 ea_=u32(r4(R+28)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46e4a5:L46e4a5:{c.instructions+=5;NFSU2_TR(0x46e4a5);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B46e4a9:{NFSU2_TR(0x46e4a9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x198ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46e4af:{NFSU2_TR(0x46e4af);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B46e4b3:{NFSU2_TR(0x46e4b3);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B46e4b5:{NFSU2_TR(0x46e4b5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46e4baull));
TAIL_STATIC(0x75bed4u,75b);
}
B46e4ba:L46e4ba:{c.instructions+=8;NFSU2_TR(0x46e4ba);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B46e4bc:{NFSU2_TR(0x46e4bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1ccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46e4c2:{NFSU2_TR(0x46e4c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1a4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46e4c8:{NFSU2_TR(0x46e4c8);
{u32 ea_=u32(r4(R+4)+u32(144u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46e4ce:{NFSU2_TR(0x46e4ce);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B46e4d4:{NFSU2_TR(0x46e4d4);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B46e4d6:{NFSU2_TR(0x46e4d6);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B46e4d9:{NFSU2_TR(0x46e4d9);
if(r1(R+514)){{goto L46e4e8;}}
}
B46e4db:L46e4db:{c.instructions+=4;NFSU2_TR(0x46e4db);
{u32 ea_=u32(r4(R+4)+u32(148u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46e4e1:{NFSU2_TR(0x46e4e1);
{u32 ea_=u32(r4(R+28)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B46e4e4:{NFSU2_TR(0x46e4e4);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B46e4e6:{NFSU2_TR(0x46e4e6);
{goto L46e4ee;}
}
B46e4e8:L46e4e8:{c.instructions+=1;NFSU2_TR(0x46e4e8);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46e4ee:L46e4ee:{c.instructions+=7;NFSU2_TR(0x46e4ee);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B46e4f2:{NFSU2_TR(0x46e4f2);
{u32 ea_=u32(r4(R+24)+u32(156u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46e4f8:{NFSU2_TR(0x46e4f8);
{u32 ea_=u32(r4(R+4)+u32(152u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46e4fe:{NFSU2_TR(0x46e4fe);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B46e504:{NFSU2_TR(0x46e504);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B46e506:{NFSU2_TR(0x46e506);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B46e509:{NFSU2_TR(0x46e509);
if(r1(R+514)){{goto L46e518;}}
}
B46e50b:L46e50b:{c.instructions+=4;NFSU2_TR(0x46e50b);
{u32 ea_=u32(r4(R+4)+u32(156u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46e511:{NFSU2_TR(0x46e511);
{u32 ea_=u32(r4(R+28)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B46e514:{NFSU2_TR(0x46e514);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B46e516:{NFSU2_TR(0x46e516);
{goto L46e51e;}
}
B46e518:L46e518:{c.instructions+=1;NFSU2_TR(0x46e518);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46e51e:L46e51e:{c.instructions+=10;NFSU2_TR(0x46e51e);
{u32 ea_=u32(r4(R+24)+u32(160u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B46e524:{NFSU2_TR(0x46e524);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B46e527:{NFSU2_TR(0x46e527);
{u32 ea_=u32(r4(R+28)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46e52a:{NFSU2_TR(0x46e52a);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46e52e:{NFSU2_TR(0x46e52e);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46e532:{NFSU2_TR(0x46e532);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B46e536:{NFSU2_TR(0x46e536);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B46e538:{NFSU2_TR(0x46e538);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B46e53a:{NFSU2_TR(0x46e53a);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B46e53d:{NFSU2_TR(0x46e53d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L46e545;}}
}
B46e53f:L46e53f:{c.instructions+=2;NFSU2_TR(0x46e53f);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B46e541:{NFSU2_TR(0x46e541);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46e545:L46e545:{c.instructions+=5;NFSU2_TR(0x46e545);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46e549:{NFSU2_TR(0x46e549);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B46e54b:{NFSU2_TR(0x46e54b);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B46e54d:{NFSU2_TR(0x46e54d);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B46e550:{NFSU2_TR(0x46e550);
if(r1(R+514)){{goto L46e558;}}
}
B46e552:L46e552:{c.instructions+=2;NFSU2_TR(0x46e552);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B46e554:{NFSU2_TR(0x46e554);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46e558:L46e558:{c.instructions+=10;NFSU2_TR(0x46e558);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B46e55c:{NFSU2_TR(0x46e55c);
{u32 ea_=u32(r4(R+24)+u32(156u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46e562:{NFSU2_TR(0x46e562);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46e565:{NFSU2_TR(0x46e565);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46e568:{NFSU2_TR(0x46e568);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46e56c:{NFSU2_TR(0x46e56c);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B46e570:{NFSU2_TR(0x46e570);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46e574:{NFSU2_TR(0x46e574);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B46e576:{NFSU2_TR(0x46e576);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B46e579:{NFSU2_TR(0x46e579);
if(r1(R+518)){{goto L46e581;}}
}
B46e57b:L46e57b:{c.instructions+=2;NFSU2_TR(0x46e57b);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B46e57d:{NFSU2_TR(0x46e57d);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46e581:L46e581:{c.instructions+=5;NFSU2_TR(0x46e581);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46e585:{NFSU2_TR(0x46e585);
__asm__ volatile(".byte 0xd8,0xd9":::"memory");
}
B46e587:{NFSU2_TR(0x46e587);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B46e589:{NFSU2_TR(0x46e589);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B46e58c:{NFSU2_TR(0x46e58c);
if(r1(R+514)){{goto L46e594;}}
}
B46e58e:L46e58e:{c.instructions+=2;NFSU2_TR(0x46e58e);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B46e590:{NFSU2_TR(0x46e590);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46e594:L46e594:{c.instructions+=8;NFSU2_TR(0x46e594);
{u32 ea_=u32(r4(R+24)+u32(160u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B46e59a:{NFSU2_TR(0x46e59a);
{u32 ea_=u32(r4(R+28)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46e59d:{NFSU2_TR(0x46e59d);
{u32 ea_=u32(r4(R+28)+u32(20u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B46e5a0:{NFSU2_TR(0x46e5a0);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46e5a4:{NFSU2_TR(0x46e5a4);
{u32 ea_=u32(r4(R+28)+u32(20u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B46e5a7:{NFSU2_TR(0x46e5a7);
{u32 ea_=u32(u32(7905684u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B46e5ad:{NFSU2_TR(0x46e5ad);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B46e5b1:{NFSU2_TR(0x46e5b1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46e5b6ull));
TAIL_STATIC(0x75bed4u,75b);
}
B46e5b6:L46e5b6:{c.instructions+=6;NFSU2_TR(0x46e5b6);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46e5ba:{NFSU2_TR(0x46e5ba);
{u32 ea_=u32(r4(R+28)+u32(20u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B46e5bd:{NFSU2_TR(0x46e5bd);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46e5c1:{NFSU2_TR(0x46e5c1);
{u32 ea_=u32(u32(7905684u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B46e5c7:{NFSU2_TR(0x46e5c7);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x30"::"a"(ea_):"memory");}
}
B46e5cb:{NFSU2_TR(0x46e5cb);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46e5d0ull));
TAIL_STATIC(0x75bed4u,75b);
}
B46e5d0:L46e5d0:{c.instructions+=6;NFSU2_TR(0x46e5d0);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46e5d4:{NFSU2_TR(0x46e5d4);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B46e5d8:{NFSU2_TR(0x46e5d8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46e5d9:{NFSU2_TR(0x46e5d9);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x144ull))));
__builtin_memmove((R+4),(U+0),4);
}
B46e5df:{NFSU2_TR(0x46e5df);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46e5e2:{NFSU2_TR(0x46e5e2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46e5e7ull));
TAIL_STATIC(0x576970u,576);
}
B46e5e7:L46e5e7:{c.instructions+=5;NFSU2_TR(0x46e5e7);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B46e5eb:{NFSU2_TR(0x46e5eb);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46e5ec:{NFSU2_TR(0x46e5ec);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x16cull))));
__builtin_memmove((R+4),(U+0),4);
}
B46e5f2:{NFSU2_TR(0x46e5f2);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46e5f5:{NFSU2_TR(0x46e5f5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46e5faull));
TAIL_STATIC(0x576970u,576);
}
B46e5fa:L46e5fa:{c.instructions+=2;NFSU2_TR(0x46e5fa);
{u32 ea_=u32(r4(R+24)+u32(336u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46e600:{NFSU2_TR(0x46e600);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46e605ull));
TAIL_STATIC(0x75bed4u,75b);
}
B46e605:L46e605:{c.instructions+=3;NFSU2_TR(0x46e605);
{u32 ea_=u32(r4(R+24)+u32(376u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46e60b:{NFSU2_TR(0x46e60b);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46e60f:{NFSU2_TR(0x46e60f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46e614ull));
TAIL_STATIC(0x75bed4u,75b);
}
B46e614:L46e614:{c.instructions+=10;NFSU2_TR(0x46e614);
u8 U[8];
w4(U+0,u32(u32(u32(0x5cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B46e618:{NFSU2_TR(0x46e618);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46e61c:{NFSU2_TR(0x46e61c);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46e61f:{NFSU2_TR(0x46e61f);
{u32 ea_=u32(r4(R+0)+u32(532u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46e625:{NFSU2_TR(0x46e625);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x210ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46e62b:{NFSU2_TR(0x46e62b);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46e62f:{NFSU2_TR(0x46e62f);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x10"::"a"(ea_):"memory");}
}
B46e633:{NFSU2_TR(0x46e633);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B46e635:{NFSU2_TR(0x46e635);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B46e638:{NFSU2_TR(0x46e638);
if(r1(R+518)){{goto L46e640;}}
}
B46e63a:L46e63a:{c.instructions+=2;NFSU2_TR(0x46e63a);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B46e63c:{NFSU2_TR(0x46e63c);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46e640:L46e640:{c.instructions+=6;NFSU2_TR(0x46e640);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B46e643:{NFSU2_TR(0x46e643);
{u32 ea_=u32(r4(R+16)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46e647:{NFSU2_TR(0x46e647);
{u32 ea_=u32(r4(R+28)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B46e64a:{NFSU2_TR(0x46e64a);
{u32 ea_=u32(r4(R+24)+u32(436u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B46e650:{NFSU2_TR(0x46e650);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B46e652:{NFSU2_TR(0x46e652);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46e657ull));
TAIL_STATIC(0x75bed4u,75b);
}
B46e657:L46e657:{c.instructions+=5;NFSU2_TR(0x46e657);
{u32 ea_=u32(r4(R+24)+u32(440u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B46e65d:{NFSU2_TR(0x46e65d);
__builtin_memmove((R+12),(R+0),4);
}
B46e65f:{NFSU2_TR(0x46e65f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46e665:{NFSU2_TR(0x46e665);
__asm__ volatile(".byte 0xd8,0xc9":::"memory");
}
B46e667:{NFSU2_TR(0x46e667);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46e66cull));
TAIL_STATIC(0x75bed4u,75b);
}
B46e66c:L46e66c:{c.instructions+=7;NFSU2_TR(0x46e66c);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B46e66e:{NFSU2_TR(0x46e66e);
{u32 ea_=u32(u32(7881968u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B46e674:{NFSU2_TR(0x46e674);
__builtin_memmove((R+4),(R+0),4);
}
B46e676:{NFSU2_TR(0x46e676);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46e67c:{NFSU2_TR(0x46e67c);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B46e67e:{NFSU2_TR(0x46e67e);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B46e681:{NFSU2_TR(0x46e681);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L46e691;}}
}
B46e683:L46e683:{c.instructions+=3;NFSU2_TR(0x46e683);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46e689:{NFSU2_TR(0x46e689);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46e68f:{NFSU2_TR(0x46e68f);
{goto L46e6a7;}
}
B46e691:L46e691:{c.instructions+=5;NFSU2_TR(0x46e691);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B46e693:{NFSU2_TR(0x46e693);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46e699:{NFSU2_TR(0x46e699);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46e69f:{NFSU2_TR(0x46e69f);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46e6a3:{NFSU2_TR(0x46e6a3);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46e6a7:L46e6a7:{c.instructions+=7;NFSU2_TR(0x46e6a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46e6aa:{NFSU2_TR(0x46e6aa);
u8 U[8];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B46e6ae:{NFSU2_TR(0x46e6ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46e6b4:{NFSU2_TR(0x46e6b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B46e6b7:{NFSU2_TR(0x46e6b7);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+12))));
}
B46e6b9:{NFSU2_TR(0x46e6b9);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B46e6bb:{NFSU2_TR(0x46e6bb);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L46e6c5;}}
}
B46e6bd:L46e6bd:{c.instructions+=4;NFSU2_TR(0x46e6bd);
__builtin_memmove((R+4),(R+12),4);
}
B46e6bf:{NFSU2_TR(0x46e6bf);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+8))));
}
B46e6c1:{NFSU2_TR(0x46e6c1);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B46e6c3:{NFSU2_TR(0x46e6c3);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L46e6c7;}}
}
B46e6c5:L46e6c5:{c.instructions+=1;NFSU2_TR(0x46e6c5);
__builtin_memmove((R+0),(R+4),4);
}
B46e6c7:L46e6c7:{c.instructions+=9;NFSU2_TR(0x46e6c7);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B46e6cb:{NFSU2_TR(0x46e6cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46e6d1:{NFSU2_TR(0x46e6d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46e6d4:{NFSU2_TR(0x46e6d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B46e6d7:{NFSU2_TR(0x46e6d7);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46e6db:{NFSU2_TR(0x46e6db);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46e6e1:{NFSU2_TR(0x46e6e1);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+12))));
}
B46e6e3:{NFSU2_TR(0x46e6e3);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B46e6e5:{NFSU2_TR(0x46e6e5);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L46e6f1;}}
}
B46e6e7:L46e6e7:{c.instructions+=4;NFSU2_TR(0x46e6e7);
__builtin_memmove((R+4),(R+12),4);
}
B46e6e9:{NFSU2_TR(0x46e6e9);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+8))));
}
B46e6eb:{NFSU2_TR(0x46e6eb);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B46e6ed:{NFSU2_TR(0x46e6ed);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L46e6f1;}}
}
B46e6ef:L46e6ef:{c.instructions+=1;NFSU2_TR(0x46e6ef);
__builtin_memmove((R+4),(R+0),4);
}
B46e6f1:L46e6f1:{c.instructions+=6;NFSU2_TR(0x46e6f1);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46e6f7:{NFSU2_TR(0x46e6f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1c8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46e6fd:{NFSU2_TR(0x46e6fd);
{u32 ea_=u32(r4(R+28)+u32(32u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B46e700:{NFSU2_TR(0x46e700);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46e704:{NFSU2_TR(0x46e704);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xda,0x08"::"a"(ea_):"memory");}
}
B46e708:{NFSU2_TR(0x46e708);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46e70dull));
TAIL_STATIC(0x75bed4u,75b);
}
B46e70d:L46e70d:{c.instructions+=4;NFSU2_TR(0x46e70d);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B46e711:{NFSU2_TR(0x46e711);
__builtin_memmove((R+12),(R+0),4);
}
B46e713:{NFSU2_TR(0x46e713);
{u32 ea_=u32(r4(R+28)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B46e716:{NFSU2_TR(0x46e716);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46e71bull));
TAIL_STATIC(0x75bed4u,75b);
}
B46e71b:L46e71b:{c.instructions+=6;NFSU2_TR(0x46e71b);
{u32 ea_=u32(u32(7881296u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46e721:{NFSU2_TR(0x46e721);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+0))));
}
B46e723:{NFSU2_TR(0x46e723);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x19cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46e729:{NFSU2_TR(0x46e729);
{u32 ea_=u32(r4(R+28)+u32(32u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B46e72c:{NFSU2_TR(0x46e72c);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xda,0x08"::"a"(ea_):"memory");}
}
B46e730:{NFSU2_TR(0x46e730);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46e735ull));
TAIL_STATIC(0x75bed4u,75b);
}
B46e735:L46e735:{c.instructions+=4;NFSU2_TR(0x46e735);
{u32 ea_=u32(r4(R+16)+u32(36u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B46e739:{NFSU2_TR(0x46e739);
__builtin_memmove((R+12),(R+0),4);
}
B46e73b:{NFSU2_TR(0x46e73b);
{u32 ea_=u32(r4(R+28)+u32(32u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B46e73e:{NFSU2_TR(0x46e73e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46e743ull));
TAIL_STATIC(0x75bed4u,75b);
}
B46e743:L46e743:{c.instructions+=5;NFSU2_TR(0x46e743);
w4(R+12,u32(u32(r4(R+12))+u32(r4(R+0))));
}
B46e745:{NFSU2_TR(0x46e745);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x194ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46e74b:{NFSU2_TR(0x46e74b);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B46e74d:{NFSU2_TR(0x46e74d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1a8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46e753:{NFSU2_TR(0x46e753);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L46e759;}}
}
B46e755:L46e755:{c.instructions+=2;NFSU2_TR(0x46e755);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B46e757:{NFSU2_TR(0x46e757);
{goto L46e765;}
}
B46e759:L46e759:{c.instructions+=2;NFSU2_TR(0x46e759);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x400ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x400ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B46e75e:{NFSU2_TR(0x46e75e);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L46e765;}}
}
B46e760:L46e760:{c.instructions+=1;NFSU2_TR(0x46e760);
w4(R+0,u32(0x400ull));
}
B46e765:L46e765:{c.instructions+=4;NFSU2_TR(0x46e765);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x194ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46e76b:{NFSU2_TR(0x46e76b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x198ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46e771:{NFSU2_TR(0x46e771);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B46e773:{NFSU2_TR(0x46e773);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L46e779;}}
}
B46e775:L46e775:{c.instructions+=2;NFSU2_TR(0x46e775);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B46e777:{NFSU2_TR(0x46e777);
{goto L46e785;}
}
B46e779:L46e779:{c.instructions+=2;NFSU2_TR(0x46e779);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x400ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x400ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B46e77e:{NFSU2_TR(0x46e77e);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L46e785;}}
}
B46e780:L46e780:{c.instructions+=1;NFSU2_TR(0x46e780);
w4(R+0,u32(0x400ull));
}
B46e785:L46e785:{c.instructions+=4;NFSU2_TR(0x46e785);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x198ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46e78b:{NFSU2_TR(0x46e78b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x19cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46e791:{NFSU2_TR(0x46e791);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B46e793:{NFSU2_TR(0x46e793);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L46e799;}}
}
B46e795:L46e795:{c.instructions+=2;NFSU2_TR(0x46e795);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B46e797:{NFSU2_TR(0x46e797);
{goto L46e7a5;}
}
B46e799:L46e799:{c.instructions+=2;NFSU2_TR(0x46e799);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x400ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x400ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B46e79e:{NFSU2_TR(0x46e79e);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L46e7a5;}}
}
B46e7a0:L46e7a0:{c.instructions+=1;NFSU2_TR(0x46e7a0);
w4(R+0,u32(0x400ull));
}
B46e7a5:L46e7a5:{c.instructions+=4;NFSU2_TR(0x46e7a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x19cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46e7ab:{NFSU2_TR(0x46e7ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1a0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46e7b1:{NFSU2_TR(0x46e7b1);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B46e7b3:{NFSU2_TR(0x46e7b3);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L46e7b9;}}
}
B46e7b5:L46e7b5:{c.instructions+=2;NFSU2_TR(0x46e7b5);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B46e7b7:{NFSU2_TR(0x46e7b7);
{goto L46e7c5;}
}
B46e7b9:L46e7b9:{c.instructions+=2;NFSU2_TR(0x46e7b9);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x400ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x400ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B46e7be:{NFSU2_TR(0x46e7be);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L46e7c5;}}
}
B46e7c0:L46e7c0:{c.instructions+=1;NFSU2_TR(0x46e7c0);
w4(R+0,u32(0x400ull));
}
B46e7c5:L46e7c5:{c.instructions+=4;NFSU2_TR(0x46e7c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1a0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46e7cb:{NFSU2_TR(0x46e7cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1a4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46e7d1:{NFSU2_TR(0x46e7d1);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B46e7d3:{NFSU2_TR(0x46e7d3);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L46e7d9;}}
}
B46e7d5:L46e7d5:{c.instructions+=2;NFSU2_TR(0x46e7d5);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B46e7d7:{NFSU2_TR(0x46e7d7);
{goto L46e7e5;}
}
B46e7d9:L46e7d9:{c.instructions+=2;NFSU2_TR(0x46e7d9);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x400ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x400ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B46e7de:{NFSU2_TR(0x46e7de);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L46e7e5;}}
}
B46e7e0:L46e7e0:{c.instructions+=1;NFSU2_TR(0x46e7e0);
w4(R+0,u32(0x400ull));
}
B46e7e5:L46e7e5:{c.instructions+=4;NFSU2_TR(0x46e7e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1a4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46e7eb:{NFSU2_TR(0x46e7eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1a8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46e7f1:{NFSU2_TR(0x46e7f1);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B46e7f3:{NFSU2_TR(0x46e7f3);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L46e804;}}
}
B46e7f5:L46e7f5:{c.instructions+=8;NFSU2_TR(0x46e7f5);
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
B46e7f7:{NFSU2_TR(0x46e7f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1a8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46e7fd:{NFSU2_TR(0x46e7fd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B46e7fe:{NFSU2_TR(0x46e7fe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B46e7ff:{NFSU2_TR(0x46e7ff);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B46e800:{NFSU2_TR(0x46e800);
__builtin_memmove((R+16),(R+20),4);
}
B46e802:{NFSU2_TR(0x46e802);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B46e803:{NFSU2_TR(0x46e803);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B46e804:L46e804:{c.instructions+=2;NFSU2_TR(0x46e804);
u8 U[10];
w1(R+512,u8((r4(R+0))<(u32(0x400ull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0x400ull)));
w4(U+6,u32(u32(r4(R+0))-u32(u32(0x400ull))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B46e809:{NFSU2_TR(0x46e809);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L46e810;}}
}
B46e80b:L46e80b:{c.instructions+=1;NFSU2_TR(0x46e80b);
w4(R+0,u32(0x400ull));
}
B46e810:L46e810:{c.instructions+=7;NFSU2_TR(0x46e810);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B46e811:{NFSU2_TR(0x46e811);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1a8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46e817:{NFSU2_TR(0x46e817);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B46e818:{NFSU2_TR(0x46e818);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B46e819:{NFSU2_TR(0x46e819);
__builtin_memmove((R+16),(R+20),4);
}
B46e81b:{NFSU2_TR(0x46e81b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B46e81c:{NFSU2_TR(0x46e81c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B46e820:L46e820:{c.instructions+=3;NFSU2_TR(0x46e820);
__builtin_memmove((R+0),gp(0x7ec840),4);
}
B46e825:{NFSU2_TR(0x46e825);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46e826:{NFSU2_TR(0x46e826);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46e82bull));
TAIL_STATIC(0x43e910u,43e);
}
B46e82b:L46e82b:{c.instructions+=3;NFSU2_TR(0x46e82b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B46e82e:{NFSU2_TR(0x46e82e);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x4f0ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x4f0ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B46e833:{NFSU2_TR(0x46e833);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L46e85d;}}
}
B46e835:L46e835:{c.instructions+=6;NFSU2_TR(0x46e835);
__builtin_memmove((R+4),gp(0x7ec840),4);
}
B46e83b:{NFSU2_TR(0x46e83b);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x7ull))));
}
B46e83e:{NFSU2_TR(0x46e83e);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x1000ull))));
}
B46e844:{NFSU2_TR(0x46e844);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46e845:{NFSU2_TR(0x46e845);
u8 U[4];
w4(U+0,u32(0xf0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46e84a:{NFSU2_TR(0x46e84a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46e84full));
TAIL_STATIC(0x440820u,440);
}
B46e84f:L46e84f:{c.instructions+=3;NFSU2_TR(0x46e84f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B46e852:{NFSU2_TR(0x46e852);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B46e854:{NFSU2_TR(0x46e854);
if(r1(R+518)){{goto L46e85d;}}
}
B46e856:L46e856:{c.instructions+=2;NFSU2_TR(0x46e856);
__builtin_memmove((R+4),(R+0),4);
}
B46e858:{NFSU2_TR(0x46e858);
TAIL_STATIC(0x45bf00u,45b);
}
B46e85d:L46e85d:{c.instructions+=2;NFSU2_TR(0x46e85d);
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
B46e85f:{NFSU2_TR(0x46e85f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B46e860:L46e860:{c.instructions+=7;NFSU2_TR(0x46e860);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46e861:{NFSU2_TR(0x46e861);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B46e865:{NFSU2_TR(0x46e865);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B46e867:{NFSU2_TR(0x46e867);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46e868:{NFSU2_TR(0x46e868);
__builtin_memmove((R+28),(R+4),4);
}
B46e86a:{NFSU2_TR(0x46e86a);
__builtin_memmove((R+4),(R+24),4);
}
B46e86c:{NFSU2_TR(0x46e86c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46e86full));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B46e86f:L46e86f:{c.instructions+=5;NFSU2_TR(0x46e86f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B46e871:{NFSU2_TR(0x46e871);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+0,sar<u32>(r4(R+0),u64(r4(U+0))));
}
B46e874:{NFSU2_TR(0x46e874);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffull))));
}
B46e879:{NFSU2_TR(0x46e879);
u8 U[6];
w1(R+512,u8((r4(R+0))<(u32(0xbull))));
w1(R+523,sborrow<u32>(r4(R+0),u32(0xbull)));
w4(R+0,u32(u32(r4(R+0))-u32(u32(0xbull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B46e87c:{NFSU2_TR(0x46e87c);
if(r1(R+518)){{goto L46e8a0;}}
}
B46e87e:L46e87e:{c.instructions+=2;NFSU2_TR(0x46e87e);
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
B46e87f:{NFSU2_TR(0x46e87f);
if(r1(R+518)){{goto L46e895;}}
}
B46e881:L46e881:{c.instructions+=3;NFSU2_TR(0x46e881);
u8 U[4];
w4(U+0,u32(0x78aa74ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46e886:{NFSU2_TR(0x46e886);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46e888:{NFSU2_TR(0x46e888);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46e88dull));
TAIL_STATIC(0x4691c0u,469);
}
B46e88d:L46e88d:{c.instructions+=4;NFSU2_TR(0x46e88d);
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
B46e890:{NFSU2_TR(0x46e890);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B46e891:{NFSU2_TR(0x46e891);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B46e892:{NFSU2_TR(0x46e892);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B46e895:L46e895:{c.instructions+=4;NFSU2_TR(0x46e895);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46e89b:{NFSU2_TR(0x46e89b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B46e89c:{NFSU2_TR(0x46e89c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B46e89d:{NFSU2_TR(0x46e89d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B46e8a0:L46e8a0:{c.instructions+=4;NFSU2_TR(0x46e8a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0xe0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46e8a6:{NFSU2_TR(0x46e8a6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B46e8a7:{NFSU2_TR(0x46e8a7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B46e8a8:{NFSU2_TR(0x46e8a8);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B46e8b0:L46e8b0:{c.instructions+=81;NFSU2_TR(0x46e8b0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46e8b1:{NFSU2_TR(0x46e8b1);
__builtin_memmove((R+20),(R+16),4);
}
B46e8b3:{NFSU2_TR(0x46e8b3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B46e8b6:{NFSU2_TR(0x46e8b6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x40ull))));
}
B46e8b9:{NFSU2_TR(0x46e8b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46e8bc:{NFSU2_TR(0x46e8bc);
{u32 ea_=u32(u32(8311396u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46e8c2:{NFSU2_TR(0x46e8c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46e8c5:{NFSU2_TR(0x46e8c5);
{u32 ea_=u32(r4(R+0)+u32(160u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B46e8cb:{NFSU2_TR(0x46e8cb);
{u32 ea_=u32(r4(R+0)+u32(164u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46e8d1:{NFSU2_TR(0x46e8d1);
{u32 ea_=u32(u32(8311396u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B46e8d7:{NFSU2_TR(0x46e8d7);
{u32 ea_=u32(r4(R+0)+u32(168u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46e8dd:{NFSU2_TR(0x46e8dd);
{u32 ea_=u32(u32(8311396u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B46e8e3:{NFSU2_TR(0x46e8e3);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46e8e7:{NFSU2_TR(0x46e8e7);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B46e8e9:{NFSU2_TR(0x46e8e9);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46e8ed:{NFSU2_TR(0x46e8ed);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46e8f1:{NFSU2_TR(0x46e8f1);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46e8f5:{NFSU2_TR(0x46e8f5);
{u32 ea_=u32(u32(8311400u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46e8fb:{NFSU2_TR(0x46e8fb);
{u32 ea_=u32(r4(R+0)+u32(144u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B46e901:{NFSU2_TR(0x46e901);
{u32 ea_=u32(r4(R+0)+u32(148u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46e907:{NFSU2_TR(0x46e907);
{u32 ea_=u32(u32(8311400u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B46e90d:{NFSU2_TR(0x46e90d);
{u32 ea_=u32(r4(R+0)+u32(152u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46e913:{NFSU2_TR(0x46e913);
{u32 ea_=u32(u32(8311400u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B46e919:{NFSU2_TR(0x46e919);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46e91d:{NFSU2_TR(0x46e91d);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B46e921:{NFSU2_TR(0x46e921);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B46e923:{NFSU2_TR(0x46e923);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46e927:{NFSU2_TR(0x46e927);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46e92b:{NFSU2_TR(0x46e92b);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46e92f:{NFSU2_TR(0x46e92f);
{u32 ea_=u32(r4(R+0)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46e932:{NFSU2_TR(0x46e932);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B46e936:{NFSU2_TR(0x46e936);
{u32 ea_=u32(r4(R+0)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46e939:{NFSU2_TR(0x46e939);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B46e93d:{NFSU2_TR(0x46e93d);
{u32 ea_=u32(r4(R+0)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46e940:{NFSU2_TR(0x46e940);
__asm__ volatile(".byte 0xd8,0xe3":::"memory");
}
B46e942:{NFSU2_TR(0x46e942);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46e946:{NFSU2_TR(0x46e946);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B46e948:{NFSU2_TR(0x46e948);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46e94c:{NFSU2_TR(0x46e94c);
u8 U[8];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B46e950:{NFSU2_TR(0x46e950);
{u32 ea_=u32(r4(R+16)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46e954:{NFSU2_TR(0x46e954);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xd0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46e95a:{NFSU2_TR(0x46e95a);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B46e95c:{NFSU2_TR(0x46e95c);
{u32 ea_=u32(r4(R+4)+u32(212u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46e962:{NFSU2_TR(0x46e962);
{u32 ea_=u32(r4(R+4)+u32(216u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46e968:{NFSU2_TR(0x46e968);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46e96c:{NFSU2_TR(0x46e96c);
{u32 ea_=u32(r4(R+4)+u32(208u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B46e972:{NFSU2_TR(0x46e972);
{u32 ea_=u32(r4(R+4)+u32(208u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46e978:{NFSU2_TR(0x46e978);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46e97c:{NFSU2_TR(0x46e97c);
{u32 ea_=u32(r4(R+4)+u32(212u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B46e982:{NFSU2_TR(0x46e982);
{u32 ea_=u32(r4(R+4)+u32(212u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46e988:{NFSU2_TR(0x46e988);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46e98c:{NFSU2_TR(0x46e98c);
{u32 ea_=u32(r4(R+4)+u32(216u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B46e992:{NFSU2_TR(0x46e992);
{u32 ea_=u32(r4(R+4)+u32(216u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46e998:{NFSU2_TR(0x46e998);
{u32 ea_=u32(r4(R+16)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46e99c:{NFSU2_TR(0x46e99c);
{u32 ea_=u32(r4(R+0)+u32(96u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B46e99f:{NFSU2_TR(0x46e99f);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46e9a3:{NFSU2_TR(0x46e9a3);
{u32 ea_=u32(r4(R+0)+u32(100u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B46e9a6:{NFSU2_TR(0x46e9a6);
__asm__ volatile(".byte 0xd9,0xca":::"memory");
}
B46e9a8:{NFSU2_TR(0x46e9a8);
{u32 ea_=u32(r4(R+0)+u32(104u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B46e9ab:{NFSU2_TR(0x46e9ab);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46e9af:{NFSU2_TR(0x46e9af);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46e9b3:{NFSU2_TR(0x46e9b3);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46e9b7:{NFSU2_TR(0x46e9b7);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46e9bb:{NFSU2_TR(0x46e9bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xc0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46e9c1:{NFSU2_TR(0x46e9c1);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B46e9c3:{NFSU2_TR(0x46e9c3);
{u32 ea_=u32(r4(R+4)+u32(196u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46e9c9:{NFSU2_TR(0x46e9c9);
{u32 ea_=u32(r4(R+4)+u32(200u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46e9cf:{NFSU2_TR(0x46e9cf);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46e9d3:{NFSU2_TR(0x46e9d3);
{u32 ea_=u32(r4(R+4)+u32(192u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B46e9d9:{NFSU2_TR(0x46e9d9);
{u32 ea_=u32(r4(R+4)+u32(192u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46e9df:{NFSU2_TR(0x46e9df);
{u32 ea_=u32(r4(R+16)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46e9e3:{NFSU2_TR(0x46e9e3);
{u32 ea_=u32(r4(R+4)+u32(196u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B46e9e9:{NFSU2_TR(0x46e9e9);
{u32 ea_=u32(r4(R+4)+u32(196u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46e9ef:{NFSU2_TR(0x46e9ef);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46e9f3:{NFSU2_TR(0x46e9f3);
{u32 ea_=u32(r4(R+4)+u32(200u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B46e9f9:{NFSU2_TR(0x46e9f9);
{u32 ea_=u32(r4(R+4)+u32(200u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46e9ff:{NFSU2_TR(0x46e9ff);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46ea02:{NFSU2_TR(0x46ea02);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xe8ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B46ea09:{NFSU2_TR(0x46ea09);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B46ea0c:{NFSU2_TR(0x46ea0c);
u8 U[7];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x390ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B46ea13:{NFSU2_TR(0x46ea13);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L46ea25;}}
}
B46ea15:L46ea15:{c.instructions+=2;NFSU2_TR(0x46ea15);
u8 U[7];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x393ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((U+5),(U+4),1);
w1(U+6,u8(u32(r1(U+5))-u32(u8(0x0ull))));
w1(R+518,u8((r1(U+6))==(u8(0x0ull))));
}
B46ea1c:{NFSU2_TR(0x46ea1c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L46ea25;}}
}
B46ea1e:L46ea1e:{c.instructions+=1;NFSU2_TR(0x46ea1e);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xe8ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B46ea25:L46ea25:{c.instructions+=5;NFSU2_TR(0x46ea25);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xe9ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B46ea2c:{NFSU2_TR(0x46ea2c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46ea2f:{NFSU2_TR(0x46ea2f);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x391ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B46ea35:{NFSU2_TR(0x46ea35);
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
B46ea37:{NFSU2_TR(0x46ea37);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L46ea4a;}}
}
B46ea39:L46ea39:{c.instructions+=3;NFSU2_TR(0x46ea39);
u8 U[5];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x392ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+8),(U+4),1);
}
B46ea3f:{NFSU2_TR(0x46ea3f);
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
B46ea41:{NFSU2_TR(0x46ea41);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L46ea4a;}}
}
B46ea43:L46ea43:{c.instructions+=1;NFSU2_TR(0x46ea43);
u8 U[5];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xe9ull))));
w1(U+4,u8(0x0ull));
s1(u32(r4(U+0)),r1(U+4));
}
B46ea4a:L46ea4a:{c.instructions+=3;NFSU2_TR(0x46ea4a);
__builtin_memmove((R+16),(R+20),4);
}
B46ea4c:{NFSU2_TR(0x46ea4c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B46ea4d:{NFSU2_TR(0x46ea4d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B46ea50:L46ea50:{c.instructions+=5;NFSU2_TR(0x46ea50);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46ea51:{NFSU2_TR(0x46ea51);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46ea52:{NFSU2_TR(0x46ea52);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46ea53:{NFSU2_TR(0x46ea53);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46ea54:{NFSU2_TR(0x46ea54);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46ea59ull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x46e8b0u);}goto L46e8b0;}
}
B46ea59:L46ea59:{c.instructions+=1;NFSU2_TR(0x46ea59);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46ea5eull));
TAIL_STATIC(0x45bfb0u,45b);
}
B46ea5e:L46ea5e:{c.instructions+=12;NFSU2_TR(0x46ea5e);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B46ea60:{NFSU2_TR(0x46ea60);
w4(R+20,u32(0xffffff90ull));
}
B46ea65:{NFSU2_TR(0x46ea65);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B46ea67:{NFSU2_TR(0x46ea67);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x90ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46ea6d:{NFSU2_TR(0x46ea6d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x94ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46ea73:{NFSU2_TR(0x46ea73);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x98ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46ea79:{NFSU2_TR(0x46ea79);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x9cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46ea7f:{NFSU2_TR(0x46ea7f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x6cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46ea82:{NFSU2_TR(0x46ea82);
w4(R+8,u32(0x3d4ull));
}
B46ea87:{NFSU2_TR(0x46ea87);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x70ull))));
__builtin_memmove((R+0),(U+0),4);
}
B46ea8a:{NFSU2_TR(0x46ea8a);
w4(R+20,u32(u32(r4(R+20))-u32(r4(R+4))));
}
B46ea8c:{NFSU2_TR(0x46ea8c);
__builtin_memmove((R+16),(R+16),4);
}
B46ea90:L46ea90:{c.instructions+=15;NFSU2_TR(0x46ea90);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B46ea93:{NFSU2_TR(0x46ea93);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B46ea96:{NFSU2_TR(0x46ea96);
{u32 ea_=u32(r4(R+8)+r4(R+24));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46ea99:{NFSU2_TR(0x46ea99);
__asm__ volatile(".byte 0xd9,0xe1":::"memory");
}
B46ea9b:{NFSU2_TR(0x46ea9b);
{u32 ea_=u32(r4(R+8)+r4(R+4)+u32(4294966476u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46eaa2:{NFSU2_TR(0x46eaa2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B46eaa5:{NFSU2_TR(0x46eaa5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B46eaa8:{NFSU2_TR(0x46eaa8);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+20))));
}
B46eaaa:{NFSU2_TR(0x46eaaa);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x3d4ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3d4ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B46eab0:{NFSU2_TR(0x46eab0);
{u32 ea_=u32(r4(R+0)+r4(R+24)+u32(952u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46eab7:{NFSU2_TR(0x46eab7);
u8 U[12];
w4(U+0,u32(u32(u32(0x3b4ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B46eabe:{NFSU2_TR(0x46eabe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B46eac0:{NFSU2_TR(0x46eac0);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46eac3:{NFSU2_TR(0x46eac3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
s4(u32(r4(R+0)),r4(U+0));
}
B46eac5:{NFSU2_TR(0x46eac5);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L46eafd;}}
}
B46eac7:L46eac7:{c.instructions+=2;NFSU2_TR(0x46eac7);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x3e0ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3e0ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B46eacd:{NFSU2_TR(0x46eacd);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L46eafd;}}
}
B46eacf:L46eacf:{c.instructions+=4;NFSU2_TR(0x46eacf);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B46ead2:{NFSU2_TR(0x46ead2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B46ead5:{NFSU2_TR(0x46ead5);
u8 U[15];
w4(U+0,u32(u32(u32(0x390ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((U+13),(U+12),1);
w1(U+14,u8(u32(r1(U+13))-u32(r1(R+12))));
w1(R+518,u8((r1(U+14))==(u8(0x0ull))));
}
B46eadc:{NFSU2_TR(0x46eadc);
if(r1(R+518)){{goto L46eb29;}}
}
B46eade:L46eade:{c.instructions+=7;NFSU2_TR(0x46eade);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46eae1:{NFSU2_TR(0x46eae1);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46eae3:{NFSU2_TR(0x46eae3);
{u32 ea_=u32(r4(R+4)+u32(144u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B46eae9:{NFSU2_TR(0x46eae9);
{u32 ea_=u32(r4(R+4)+u32(144u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46eaef:{NFSU2_TR(0x46eaef);
{u32 ea_=u32(r4(R+4)+u32(148u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B46eaf5:{NFSU2_TR(0x46eaf5);
{u32 ea_=u32(r4(R+4)+u32(148u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46eafb:{NFSU2_TR(0x46eafb);
{goto L46eb29;}
}
B46eafd:L46eafd:{c.instructions+=4;NFSU2_TR(0x46eafd);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B46eb00:{NFSU2_TR(0x46eb00);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x30ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B46eb03:{NFSU2_TR(0x46eb03);
u8 U[15];
w4(U+0,u32(u32(u32(0x390ull))+u32(r4(R+24))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),1);
__builtin_memmove((U+13),(U+12),1);
w1(U+14,u8(u32(r1(U+13))-u32(r1(R+12))));
w1(R+518,u8((r1(U+14))==(u8(0x0ull))));
}
B46eb0a:{NFSU2_TR(0x46eb0a);
if(r1(R+518)){{goto L46eb29;}}
}
B46eb0c:L46eb0c:{c.instructions+=6;NFSU2_TR(0x46eb0c);
{u32 ea_=u32(r4(R+0)+u32(4u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46eb0f:{NFSU2_TR(0x46eb0f);
{u32 ea_=u32(r4(R+4)+u32(152u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46eb15:{NFSU2_TR(0x46eb15);
{u32 ea_=u32(r4(R+0));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B46eb17:{NFSU2_TR(0x46eb17);
{u32 ea_=u32(r4(R+4)+u32(152u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46eb1d:{NFSU2_TR(0x46eb1d);
{u32 ea_=u32(r4(R+4)+u32(156u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B46eb23:{NFSU2_TR(0x46eb23);
{u32 ea_=u32(r4(R+4)+u32(156u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46eb29:L46eb29:{c.instructions+=5;NFSU2_TR(0x46eb29);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B46eb2c:{NFSU2_TR(0x46eb2c);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B46eb2d:{NFSU2_TR(0x46eb2d);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
}
B46eb30:{NFSU2_TR(0x46eb30);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
w1(R+512,u8((r4(U+6))<(u32(0x3e4ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x3e4ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x3e4ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B46eb36:{NFSU2_TR(0x46eb36);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x46ea90u);}goto L46ea90;}}
}
B46eb3c:L46eb3c:{c.instructions+=5;NFSU2_TR(0x46eb3c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B46eb3d:{NFSU2_TR(0x46eb3d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B46eb3e:{NFSU2_TR(0x46eb3e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B46eb3f:{NFSU2_TR(0x46eb3f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B46eb40:{NFSU2_TR(0x46eb40);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B46eb50:L46eb50:{c.instructions+=3;NFSU2_TR(0x46eb50);
__builtin_memmove((R+0),gp(0x7ec840),4);
}
B46eb55:{NFSU2_TR(0x46eb55);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46eb56:{NFSU2_TR(0x46eb56);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46eb5bull));
TAIL_STATIC(0x43e910u,43e);
}
B46eb5b:L46eb5b:{c.instructions+=3;NFSU2_TR(0x46eb5b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B46eb5e:{NFSU2_TR(0x46eb5e);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x4d8ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x4d8ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B46eb63:{NFSU2_TR(0x46eb63);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L46eb8d;}}
}
B46eb65:L46eb65:{c.instructions+=6;NFSU2_TR(0x46eb65);
__builtin_memmove((R+4),gp(0x7ec840),4);
}
B46eb6b:{NFSU2_TR(0x46eb6b);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x7ull))));
}
B46eb6e:{NFSU2_TR(0x46eb6e);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x1000ull))));
}
B46eb74:{NFSU2_TR(0x46eb74);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46eb75:{NFSU2_TR(0x46eb75);
u8 U[4];
w4(U+0,u32(0xd8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46eb7a:{NFSU2_TR(0x46eb7a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46eb7full));
TAIL_STATIC(0x440820u,440);
}
B46eb7f:L46eb7f:{c.instructions+=3;NFSU2_TR(0x46eb7f);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B46eb82:{NFSU2_TR(0x46eb82);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B46eb84:{NFSU2_TR(0x46eb84);
if(r1(R+518)){{goto L46eb8d;}}
}
B46eb86:L46eb86:{c.instructions+=2;NFSU2_TR(0x46eb86);
__builtin_memmove((R+4),(R+0),4);
}
B46eb88:{NFSU2_TR(0x46eb88);
TAIL_STATIC(0x46df00u,46d);
}
B46eb8d:L46eb8d:{c.instructions+=2;NFSU2_TR(0x46eb8d);
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
B46eb8f:{NFSU2_TR(0x46eb8f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B46eb90:L46eb90:{c.instructions+=3;NFSU2_TR(0x46eb90);
__builtin_memmove((R+0),gp(0x7ec840),4);
}
B46eb95:{NFSU2_TR(0x46eb95);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46eb96:{NFSU2_TR(0x46eb96);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46eb9bull));
TAIL_STATIC(0x43e910u,43e);
}
B46eb9b:L46eb9b:{c.instructions+=3;NFSU2_TR(0x46eb9b);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B46eb9e:{NFSU2_TR(0x46eb9e);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x4d8ull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x4d8ull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B46eba3:{NFSU2_TR(0x46eba3);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L46ebcd;}}
}
B46eba5:L46eba5:{c.instructions+=6;NFSU2_TR(0x46eba5);
__builtin_memmove((R+4),gp(0x7ec840),4);
}
B46ebab:{NFSU2_TR(0x46ebab);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x7ull))));
}
B46ebae:{NFSU2_TR(0x46ebae);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x1000ull))));
}
B46ebb4:{NFSU2_TR(0x46ebb4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46ebb5:{NFSU2_TR(0x46ebb5);
u8 U[4];
w4(U+0,u32(0xd8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46ebba:{NFSU2_TR(0x46ebba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46ebbfull));
TAIL_STATIC(0x440820u,440);
}
B46ebbf:L46ebbf:{c.instructions+=3;NFSU2_TR(0x46ebbf);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B46ebc2:{NFSU2_TR(0x46ebc2);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B46ebc4:{NFSU2_TR(0x46ebc4);
if(r1(R+518)){{goto L46ebcd;}}
}
B46ebc6:L46ebc6:{c.instructions+=2;NFSU2_TR(0x46ebc6);
__builtin_memmove((R+4),(R+0),4);
}
B46ebc8:{NFSU2_TR(0x46ebc8);
TAIL_STATIC(0x46dee0u,46d);
}
B46ebcd:L46ebcd:{c.instructions+=2;NFSU2_TR(0x46ebcd);
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
B46ebcf:{NFSU2_TR(0x46ebcf);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B46ebd0:L46ebd0:{c.instructions+=3;NFSU2_TR(0x46ebd0);
__builtin_memmove((R+0),gp(0x7ec840),4);
}
B46ebd5:{NFSU2_TR(0x46ebd5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46ebd6:{NFSU2_TR(0x46ebd6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46ebdbull));
TAIL_STATIC(0x43e910u,43e);
}
B46ebdb:L46ebdb:{c.instructions+=3;NFSU2_TR(0x46ebdb);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B46ebde:{NFSU2_TR(0x46ebde);
u8 U[4];
w1(R+523,sborrow<u32>(r4(R+0),u32(0x55cull)));
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x55cull))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B46ebe3:{NFSU2_TR(0x46ebe3);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L46ec0d;}}
}
B46ebe5:L46ebe5:{c.instructions+=6;NFSU2_TR(0x46ebe5);
__builtin_memmove((R+4),gp(0x7ec840),4);
}
B46ebeb:{NFSU2_TR(0x46ebeb);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x7ull))));
}
B46ebee:{NFSU2_TR(0x46ebee);
w4(R+4,u32(u32(r4(R+4))|u32(u32(0x1000ull))));
}
B46ebf4:{NFSU2_TR(0x46ebf4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46ebf5:{NFSU2_TR(0x46ebf5);
u8 U[4];
w4(U+0,u32(0x15cull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46ebfa:{NFSU2_TR(0x46ebfa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46ebffull));
TAIL_STATIC(0x440820u,440);
}
B46ebff:L46ebff:{c.instructions+=3;NFSU2_TR(0x46ebff);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B46ec02:{NFSU2_TR(0x46ec02);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B46ec04:{NFSU2_TR(0x46ec04);
if(r1(R+518)){{goto L46ec0d;}}
}
B46ec06:L46ec06:{c.instructions+=2;NFSU2_TR(0x46ec06);
__builtin_memmove((R+4),(R+0),4);
}
B46ec08:{NFSU2_TR(0x46ec08);
TAIL_STATIC(0x45c0d0u,45c);
}
B46ec0d:L46ec0d:{c.instructions+=2;NFSU2_TR(0x46ec0d);
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
B46ec0f:{NFSU2_TR(0x46ec0f);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B46ec10:L46ec10:{c.instructions+=3;NFSU2_TR(0x46ec10);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46ec11:{NFSU2_TR(0x46ec11);
__builtin_memmove((R+24),(R+4),4);
}
B46ec13:{NFSU2_TR(0x46ec13);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46ec18ull));
TAIL_STATIC(0x475240u,475);
}
B46ec18:L46ec18:{c.instructions+=2;NFSU2_TR(0x46ec18);
u8 U[9];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+8,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+519,u8(s8(r1(U+8))<s8(u8(0x0ull))));
w1(R+518,u8((r1(U+8))==(u8(0x0ull))));
w1(U+5,u8(u32(r1(U+8))&u32(u8(0xffull))));
w1(U+6,u8(__builtin_popcountll(u64(r1(U+5)))));
w1(U+7,u8(u32(r1(U+6))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+7))==(u8(0x0ull))));
}
B46ec1d:{NFSU2_TR(0x46ec1d);
if(r1(R+518)){{goto L46ec28;}}
}
B46ec1f:L46ec1f:{c.instructions+=2;NFSU2_TR(0x46ec1f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46ec20:{NFSU2_TR(0x46ec20);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46ec25ull));
TAIL_STATIC(0x440540u,440);
}
B46ec25:L46ec25:{c.instructions+=1;NFSU2_TR(0x46ec25);
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
B46ec28:L46ec28:{c.instructions+=3;NFSU2_TR(0x46ec28);
__builtin_memmove((R+0),(R+24),4);
}
B46ec2a:{NFSU2_TR(0x46ec2a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B46ec2b:{NFSU2_TR(0x46ec2b);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B46ec30:L46ec30:{c.instructions+=7;NFSU2_TR(0x46ec30);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46ec31:{NFSU2_TR(0x46ec31);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B46ec35:{NFSU2_TR(0x46ec35);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B46ec37:{NFSU2_TR(0x46ec37);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46ec38:{NFSU2_TR(0x46ec38);
__builtin_memmove((R+28),(R+4),4);
}
B46ec3a:{NFSU2_TR(0x46ec3a);
__builtin_memmove((R+4),(R+24),4);
}
B46ec3c:{NFSU2_TR(0x46ec3c);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46ec3full));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B46ec3f:L46ec3f:{c.instructions+=4;NFSU2_TR(0x46ec3f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B46ec41:{NFSU2_TR(0x46ec41);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfff0ull))));
}
B46ec47:{NFSU2_TR(0x46ec47);
u8 U[14];
__builtin_memmove((U+6),(R+4),4);
w1(R+512,u8((r4(U+6))<(u32(0x50ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x50ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x50ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B46ec4a:{NFSU2_TR(0x46ec4a);
if(r1(R+518)){{goto L46ec60;}}
}
B46ec4c:L46ec4c:{c.instructions+=3;NFSU2_TR(0x46ec4c);
u8 U[4];
w4(U+0,u32(0x78aa74ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46ec51:{NFSU2_TR(0x46ec51);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46ec53:{NFSU2_TR(0x46ec53);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46ec58ull));
TAIL_STATIC(0x4691c0u,469);
}
B46ec58:L46ec58:{c.instructions+=4;NFSU2_TR(0x46ec58);
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
B46ec5b:{NFSU2_TR(0x46ec5b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B46ec5c:{NFSU2_TR(0x46ec5c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B46ec5d:{NFSU2_TR(0x46ec5d);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B46ec60:L46ec60:{c.instructions+=4;NFSU2_TR(0x46ec60);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6cull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46ec63:{NFSU2_TR(0x46ec63);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B46ec64:{NFSU2_TR(0x46ec64);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B46ec65:{NFSU2_TR(0x46ec65);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B46ec70:L46ec70:{c.instructions+=21;NFSU2_TR(0x46ec70);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46ec71:{NFSU2_TR(0x46ec71);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46ec72:{NFSU2_TR(0x46ec72);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B46ec74:{NFSU2_TR(0x46ec74);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46ec75:{NFSU2_TR(0x46ec75);
__builtin_memmove((R+24),(R+4),4);
}
B46ec77:{NFSU2_TR(0x46ec77);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46ec7a:{NFSU2_TR(0x46ec7a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x13cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46ec80:{NFSU2_TR(0x46ec80);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46ec86:{NFSU2_TR(0x46ec86);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x84ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46ec8c:{NFSU2_TR(0x46ec8c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x88ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46ec92:{NFSU2_TR(0x46ec92);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46ec98:{NFSU2_TR(0x46ec98);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x90ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46ec9e:{NFSU2_TR(0x46ec9e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x94ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46eca4:{NFSU2_TR(0x46eca4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46eca7:{NFSU2_TR(0x46eca7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46ecaa:{NFSU2_TR(0x46ecaa);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46ecad:{NFSU2_TR(0x46ecad);
{u32 ea_=u32(r4(R+0)+u32(112u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46ecb0:{NFSU2_TR(0x46ecb0);
{u32 ea_=u32(u32(7898560u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B46ecb6:{NFSU2_TR(0x46ecb6);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B46ecb8:{NFSU2_TR(0x46ecb8);
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
B46ecbb:{NFSU2_TR(0x46ecbb);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L46ee50;}}
}
B46ecc1:L46ecc1:{c.instructions+=13;NFSU2_TR(0x46ecc1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B46ecc8:{NFSU2_TR(0x46ecc8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B46eccf:{NFSU2_TR(0x46eccf);
{u32 ea_=u32(r4(R+4)+u32(300u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46ecd5:{NFSU2_TR(0x46ecd5);
{u32 ea_=u32(r4(R+24)+u32(168u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B46ecdb:{NFSU2_TR(0x46ecdb);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x128ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B46ece1:{NFSU2_TR(0x46ece1);
{u32 ea_=u32(r4(R+4)+u32(296u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46ece7:{NFSU2_TR(0x46ece7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x12cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46eced:{NFSU2_TR(0x46eced);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46ecf0:{NFSU2_TR(0x46ecf0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46ecf3:{NFSU2_TR(0x46ecf3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46ecf9:{NFSU2_TR(0x46ecf9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46ecfc:{NFSU2_TR(0x46ecfc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B46ecfe:{NFSU2_TR(0x46ecfe);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46ed01ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B46ed01:L46ed01:{c.instructions+=19;NFSU2_TR(0x46ed01);
{u32 ea_=u32(r4(R+24)+u32(180u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B46ed07:{NFSU2_TR(0x46ed07);
{u32 ea_=u32(r4(R+24)+u32(192u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46ed0d:{NFSU2_TR(0x46ed0d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
w4(U+4,u32(0x3dcccccdull));
s4(u32(r4(U+0)),r4(U+4));
}
B46ed17:{NFSU2_TR(0x46ed17);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46ed1d:{NFSU2_TR(0x46ed1d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46ed23:{NFSU2_TR(0x46ed23);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B46ed29:{NFSU2_TR(0x46ed29);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xacull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46ed2f:{NFSU2_TR(0x46ed2f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46ed32:{NFSU2_TR(0x46ed32);
{u32 ea_=u32(r4(R+0)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B46ed35:{NFSU2_TR(0x46ed35);
w4(R+4,u32(0x3c23d70aull));
}
B46ed3a:{NFSU2_TR(0x46ed3a);
{u32 ea_=u32(r4(R+24)+u32(168u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B46ed40:{NFSU2_TR(0x46ed40);
{u32 ea_=u32(r4(R+24)+u32(168u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46ed46:{NFSU2_TR(0x46ed46);
{u32 ea_=u32(r4(R+0)+u32(16u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B46ed49:{NFSU2_TR(0x46ed49);
{u32 ea_=u32(u32(7881564u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B46ed4f:{NFSU2_TR(0x46ed4f);
{u32 ea_=u32(r4(R+24)+u32(204u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B46ed55:{NFSU2_TR(0x46ed55);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B46ed5b:{NFSU2_TR(0x46ed5b);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B46ed5d:{NFSU2_TR(0x46ed5d);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B46ed60:{NFSU2_TR(0x46ed60);
if(r1(R+514)){{goto L46ed68;}}
}
B46ed62:L46ed62:{c.instructions+=1;NFSU2_TR(0x46ed62);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xccull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46ed68:L46ed68:{c.instructions+=31;NFSU2_TR(0x46ed68);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46ed6e:{NFSU2_TR(0x46ed6e);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B46ed70:{NFSU2_TR(0x46ed70);
{u32 ea_=u32(r4(R+24)+u32(212u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46ed76:{NFSU2_TR(0x46ed76);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe0ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B46ed7c:{NFSU2_TR(0x46ed7c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46ed82:{NFSU2_TR(0x46ed82);
{u32 ea_=u32(r4(R+24)+u32(208u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B46ed88:{NFSU2_TR(0x46ed88);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46ed89:{NFSU2_TR(0x46ed89);
{u32 ea_=u32(r4(R+24)+u32(220u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46ed8f:{NFSU2_TR(0x46ed8f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe8ull))));
w4(U+4,u32(0x3a83126full));
s4(u32(r4(U+0)),r4(U+4));
}
B46ed99:{NFSU2_TR(0x46ed99);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46ed9f:{NFSU2_TR(0x46ed9f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xecull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46eda5:{NFSU2_TR(0x46eda5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46edab:{NFSU2_TR(0x46edab);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B46edb1:{NFSU2_TR(0x46edb1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46edb7:{NFSU2_TR(0x46edb7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46edbd:{NFSU2_TR(0x46edbd);
{u32 ea_=u32(r4(R+24)+u32(168u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46edc3:{NFSU2_TR(0x46edc3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46edc6:{NFSU2_TR(0x46edc6);
{u32 ea_=u32(u32(7908000u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B46edcc:{NFSU2_TR(0x46edcc);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B46edcf:{NFSU2_TR(0x46edcf);
{u32 ea_=u32(r4(R+24)+u32(168u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46edd5:{NFSU2_TR(0x46edd5);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B46edd8:{NFSU2_TR(0x46edd8);
w4(R+8,u32(u32(r4(R+8))+u32(r4(R+20))));
}
B46edda:{NFSU2_TR(0x46edda);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46edde:{NFSU2_TR(0x46edde);
{u32 ea_=u32(r4(R+16)+u32(12u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B46ede2:{NFSU2_TR(0x46ede2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B46ede3:{NFSU2_TR(0x46ede3);
{u32 ea_=u32(u32(7881564u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B46ede9:{NFSU2_TR(0x46ede9);
{u32 ea_=u32(r4(R+24)+u32(324u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B46edef:{NFSU2_TR(0x46edef);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B46edf5:{NFSU2_TR(0x46edf5);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B46edf7:{NFSU2_TR(0x46edf7);
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
B46edfa:{NFSU2_TR(0x46edfa);
if(r1(R+514)){{goto L46ee02;}}
}
B46edfc:L46edfc:{c.instructions+=1;NFSU2_TR(0x46edfc);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x144ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46ee02:L46ee02:{c.instructions+=14;NFSU2_TR(0x46ee02);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B46ee04:{NFSU2_TR(0x46ee04);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x150ull))));
w4(U+4,u32(0x6ull));
s4(u32(r4(U+0)),r4(U+4));
}
B46ee0e:{NFSU2_TR(0x46ee0e);
{u32 ea_=u32(r4(R+24)+u32(332u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46ee14:{NFSU2_TR(0x46ee14);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x158ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B46ee1a:{NFSU2_TR(0x46ee1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x140ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46ee20:{NFSU2_TR(0x46ee20);
{u32 ea_=u32(r4(R+24)+u32(328u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B46ee26:{NFSU2_TR(0x46ee26);
{u32 ea_=u32(r4(R+24)+u32(340u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46ee2c:{NFSU2_TR(0x46ee2c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46ee2f:{NFSU2_TR(0x46ee2f);
{u32 ea_=u32(r4(R+0)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46ee32:{NFSU2_TR(0x46ee32);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x98ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B46ee39:{NFSU2_TR(0x46ee39);
{u32 ea_=u32(r4(R+24)+u32(92u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B46ee3c:{NFSU2_TR(0x46ee3c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B46ee46:{NFSU2_TR(0x46ee46);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x71ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B46ee4a:{NFSU2_TR(0x46ee4a);
{u32 ea_=u32(r4(R+24)+u32(160u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46ee50:L46ee50:{c.instructions+=4;NFSU2_TR(0x46ee50);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B46ee51:{NFSU2_TR(0x46ee51);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B46ee52:{NFSU2_TR(0x46ee52);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B46ee53:{NFSU2_TR(0x46ee53);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B46ee60:L46ee60:{c.instructions+=7;NFSU2_TR(0x46ee60);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46ee61:{NFSU2_TR(0x46ee61);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46ee62:{NFSU2_TR(0x46ee62);
__builtin_memmove((R+24),(R+4),4);
}
B46ee64:{NFSU2_TR(0x46ee64);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46ee67:{NFSU2_TR(0x46ee67);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46ee6a:{NFSU2_TR(0x46ee6a);
u8 U[22];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xc8ull))));
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
B46ee71:{NFSU2_TR(0x46ee71);
if(r1(R+518)){{goto L46efea;}}
}
B46ee77:L46ee77:{c.instructions+=23;NFSU2_TR(0x46ee77);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B46ee78:{NFSU2_TR(0x46ee78);
u8 U[6];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
w1(R+519,u8(s32(r4(R+12))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+12))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+12))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B46ee7a:{NFSU2_TR(0x46ee7a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x13cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46ee80:{NFSU2_TR(0x46ee80);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x80ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46ee86:{NFSU2_TR(0x46ee86);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x84ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46ee8c:{NFSU2_TR(0x46ee8c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x88ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46ee92:{NFSU2_TR(0x46ee92);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46ee98:{NFSU2_TR(0x46ee98);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x90ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46ee9e:{NFSU2_TR(0x46ee9e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x94ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46eea4:{NFSU2_TR(0x46eea4);
w4(R+4,u32(0x4ull));
}
B46eea9:{NFSU2_TR(0x46eea9);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x78ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46eeac:{NFSU2_TR(0x46eeac);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x7cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46eeaf:{NFSU2_TR(0x46eeaf);
{u32 ea_=u32(r4(R+0)+u32(300u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46eeb5:{NFSU2_TR(0x46eeb5);
{u32 ea_=u32(r4(R+24)+u32(168u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B46eebb:{NFSU2_TR(0x46eebb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x128ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B46eec1:{NFSU2_TR(0x46eec1);
{u32 ea_=u32(r4(R+0)+u32(296u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46eec7:{NFSU2_TR(0x46eec7);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x12cull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46eecd:{NFSU2_TR(0x46eecd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46eed0:{NFSU2_TR(0x46eed0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46eed3:{NFSU2_TR(0x46eed3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xa4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46eed9:{NFSU2_TR(0x46eed9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46eedc:{NFSU2_TR(0x46eedc);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B46eede:{NFSU2_TR(0x46eede);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x46eee1ull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B46eee1:L46eee1:{c.instructions+=15;NFSU2_TR(0x46eee1);
{u32 ea_=u32(r4(R+24)+u32(180u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B46eee7:{NFSU2_TR(0x46eee7);
{u32 ea_=u32(r4(R+24)+u32(192u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46eeed:{NFSU2_TR(0x46eeed);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb0ull))));
w4(U+4,u32(0x3d4ccccdull));
s4(u32(r4(U+0)),r4(U+4));
}
B46eef7:{NFSU2_TR(0x46eef7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xb8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46eefd:{NFSU2_TR(0x46eefd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xbcull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46ef03:{NFSU2_TR(0x46ef03);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc4ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B46ef09:{NFSU2_TR(0x46ef09);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xacull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46ef0f:{NFSU2_TR(0x46ef0f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B46ef12:{NFSU2_TR(0x46ef12);
{u32 ea_=u32(r4(R+4)+u32(68u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B46ef15:{NFSU2_TR(0x46ef15);
{u32 ea_=u32(r4(R+24)+u32(168u));__asm__ volatile(".byte 0xd8,0x28"::"a"(ea_):"memory");}
}
B46ef1b:{NFSU2_TR(0x46ef1b);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B46ef1f:{NFSU2_TR(0x46ef1f);
{u32 ea_=u32(u32(7882064u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B46ef25:{NFSU2_TR(0x46ef25);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B46ef27:{NFSU2_TR(0x46ef27);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B46ef2a:{NFSU2_TR(0x46ef2a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L46efed;}}
}
B46ef30:L46ef30:{c.instructions+=6;NFSU2_TR(0x46ef30);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46ef34:{NFSU2_TR(0x46ef34);
{u32 ea_=u32(u32(7881984u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46ef3a:{NFSU2_TR(0x46ef3a);
{u32 ea_=u32(r4(R+16)+u32(8u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B46ef3e:{NFSU2_TR(0x46ef3e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B46ef40:{NFSU2_TR(0x46ef40);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x5ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B46ef43:{NFSU2_TR(0x46ef43);
if(r1(R+514)){{goto L46ef4d;}}
}
B46ef45:L46ef45:{c.instructions+=2;NFSU2_TR(0x46ef45);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B46ef47:{NFSU2_TR(0x46ef47);
{u32 ea_=u32(u32(7881984u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46ef4d:L46ef4d:{c.instructions+=8;NFSU2_TR(0x46ef4d);
{u32 ea_=u32(r4(R+24)+u32(168u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46ef53:{NFSU2_TR(0x46ef53);
{u32 ea_=u32(r4(R+4)+u32(72u));__asm__ volatile(".byte 0xdb,0x00"::"a"(ea_):"memory");}
}
B46ef56:{NFSU2_TR(0x46ef56);
{u32 ea_=u32(u32(7881564u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B46ef5c:{NFSU2_TR(0x46ef5c);
{u32 ea_=u32(r4(R+24)+u32(204u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B46ef62:{NFSU2_TR(0x46ef62);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B46ef68:{NFSU2_TR(0x46ef68);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B46ef6a:{NFSU2_TR(0x46ef6a);
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
B46ef6d:{NFSU2_TR(0x46ef6d);
if(r1(R+514)){{goto L46ef79;}}
}
B46ef6f:L46ef6f:{c.instructions+=1;NFSU2_TR(0x46ef6f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xccull))));
w4(U+4,u32(0x3c23d70aull));
s4(u32(r4(U+0)),r4(U+4));
}
B46ef79:L46ef79:{c.instructions+=21;NFSU2_TR(0x46ef79);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46ef7f:{NFSU2_TR(0x46ef7f);
__asm__ volatile(".byte 0xd9,0xc9":::"memory");
}
B46ef81:{NFSU2_TR(0x46ef81);
{u32 ea_=u32(r4(R+24)+u32(212u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46ef87:{NFSU2_TR(0x46ef87);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe0ull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B46ef8d:{NFSU2_TR(0x46ef8d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xc8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46ef93:{NFSU2_TR(0x46ef93);
{u32 ea_=u32(r4(R+24)+u32(208u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B46ef99:{NFSU2_TR(0x46ef99);
{u32 ea_=u32(r4(R+24)+u32(220u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46ef9f:{NFSU2_TR(0x46ef9f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf0ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46efa5:{NFSU2_TR(0x46efa5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xecull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46efab:{NFSU2_TR(0x46efab);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46efb1:{NFSU2_TR(0x46efb1);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xfcull))));
__builtin_memmove((U+4),(R+12),1);
s1(u32(r4(U+0)),r1(U+4));
}
B46efb7:{NFSU2_TR(0x46efb7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xf8ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46efbd:{NFSU2_TR(0x46efbd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe4ull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46efc3:{NFSU2_TR(0x46efc3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xe8ull))));
w4(U+4,u32(0x3a83126full));
s4(u32(r4(U+0)),r4(U+4));
}
B46efcd:{NFSU2_TR(0x46efcd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x74ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B46efd0:{NFSU2_TR(0x46efd0);
{u32 ea_=u32(r4(R+0)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46efd3:{NFSU2_TR(0x46efd3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x9cull))));
__builtin_memmove((U+4),(R+12),4);
s4(u32(r4(U+0)),r4(U+4));
}
B46efd9:{NFSU2_TR(0x46efd9);
{u32 ea_=u32(r4(R+24)+u32(92u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B46efdc:{NFSU2_TR(0x46efdc);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x98ull))));
w1(U+4,u8(0x1ull));
s1(u32(r4(U+0)),r1(U+4));
}
B46efe3:{NFSU2_TR(0x46efe3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B46efe4:{NFSU2_TR(0x46efe4);
{u32 ea_=u32(r4(R+24)+u32(160u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B46efea:L46efea:{c.instructions+=3;NFSU2_TR(0x46efea);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B46efeb:{NFSU2_TR(0x46efeb);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B46efec:{NFSU2_TR(0x46efec);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B46efed:L46efed:{c.instructions+=2;NFSU2_TR(0x46efed);
{u32 ea_=u32(u32(7882064u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B46eff3:{NFSU2_TR(0x46eff3);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x46ef4du);}goto L46ef4d;}
}
XIT:NFSU2_TR_EXIT(0x46e,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
