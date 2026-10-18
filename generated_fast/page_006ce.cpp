#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_673(u8* __restrict R,Cpu& c);
u32 body_698(u8* __restrict R,Cpu& c);
u32 body_699(u8* __restrict R,Cpu& c);
u32 body_69e(u8* __restrict R,Cpu& c);
u32 body_6c1(u8* __restrict R,Cpu& c);
u32 body_6c6(u8* __restrict R,Cpu& c);
u32 body_6c9(u8* __restrict R,Cpu& c);
u32 body_6cd(u8* __restrict R,Cpu& c);
u32 body_6cf(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x6ce,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x6ce,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_6ce(u8* __restrict R,Cpu& c);
u32 page_6ce(Cpu& c){return body_6ce(c.regs.data(),c);}
__attribute__((noinline)) u32 body_6ce(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x6ce002:goto L6ce002;
case 0x6ce004:goto L6ce004;
case 0x6ce007:c.instructions+=4;goto B6ce007;
case 0x6ce009:c.instructions+=3;goto B6ce009;
case 0x6ce00f:c.instructions+=2;goto B6ce00f;
case 0x6ce015:c.instructions+=1;goto B6ce015;
case 0x6ce017:goto L6ce017;
case 0x6ce01c:c.instructions+=2;goto B6ce01c;
case 0x6ce021:c.instructions+=1;goto B6ce021;
case 0x6ce023:goto L6ce023;
case 0x6ce028:c.instructions+=1;goto B6ce028;
case 0x6ce02a:goto L6ce02a;
case 0x6ce02f:c.instructions+=1;goto B6ce02f;
case 0x6ce031:goto L6ce031;
case 0x6ce035:c.instructions+=1;goto B6ce035;
case 0x6ce037:goto L6ce037;
case 0x6ce03a:c.instructions+=4;goto B6ce03a;
case 0x6ce03d:c.instructions+=3;goto B6ce03d;
case 0x6ce041:c.instructions+=2;goto B6ce041;
case 0x6ce044:c.instructions+=1;goto B6ce044;
case 0x6ce04a:goto L6ce04a;
case 0x6ce04c:c.instructions+=3;goto B6ce04c;
case 0x6ce052:c.instructions+=2;goto B6ce052;
case 0x6ce054:c.instructions+=1;goto B6ce054;
case 0x6ce056:goto L6ce056;
case 0x6ce05c:goto L6ce05c;
case 0x6ce05e:c.instructions+=2;goto B6ce05e;
case 0x6ce061:c.instructions+=1;goto B6ce061;
case 0x6ce063:goto L6ce063;
case 0x6ce066:c.instructions+=26;goto B6ce066;
case 0x6ce069:c.instructions+=25;goto B6ce069;
case 0x6ce06b:c.instructions+=24;goto B6ce06b;
case 0x6ce06e:c.instructions+=23;goto B6ce06e;
case 0x6ce071:c.instructions+=22;goto B6ce071;
case 0x6ce074:c.instructions+=21;goto B6ce074;
case 0x6ce07a:c.instructions+=20;goto B6ce07a;
case 0x6ce07d:c.instructions+=19;goto B6ce07d;
case 0x6ce081:c.instructions+=18;goto B6ce081;
case 0x6ce084:c.instructions+=17;goto B6ce084;
case 0x6ce088:c.instructions+=16;goto B6ce088;
case 0x6ce08b:c.instructions+=15;goto B6ce08b;
case 0x6ce08f:c.instructions+=14;goto B6ce08f;
case 0x6ce092:c.instructions+=13;goto B6ce092;
case 0x6ce099:c.instructions+=12;goto B6ce099;
case 0x6ce09c:c.instructions+=11;goto B6ce09c;
case 0x6ce0a0:c.instructions+=10;goto B6ce0a0;
case 0x6ce0a3:c.instructions+=9;goto B6ce0a3;
case 0x6ce0a7:c.instructions+=8;goto B6ce0a7;
case 0x6ce0aa:c.instructions+=7;goto B6ce0aa;
case 0x6ce0b1:c.instructions+=6;goto B6ce0b1;
case 0x6ce0b8:c.instructions+=5;goto B6ce0b8;
case 0x6ce0b9:c.instructions+=4;goto B6ce0b9;
case 0x6ce0bc:c.instructions+=3;goto B6ce0bc;
case 0x6ce0bf:c.instructions+=2;goto B6ce0bf;
case 0x6ce0c2:c.instructions+=1;goto B6ce0c2;
case 0x6ce0c4:goto L6ce0c4;
case 0x6ce0c6:c.instructions+=2;goto B6ce0c6;
case 0x6ce0c7:c.instructions+=1;goto B6ce0c7;
case 0x6ce0cc:goto L6ce0cc;
case 0x6ce0cf:c.instructions+=2;goto B6ce0cf;
case 0x6ce0d2:c.instructions+=1;goto B6ce0d2;
case 0x6ce0d4:goto L6ce0d4;
case 0x6ce0d7:c.instructions+=11;goto B6ce0d7;
case 0x6ce0da:c.instructions+=10;goto B6ce0da;
case 0x6ce0dd:c.instructions+=9;goto B6ce0dd;
case 0x6ce0e0:c.instructions+=8;goto B6ce0e0;
case 0x6ce0e3:c.instructions+=7;goto B6ce0e3;
case 0x6ce0e6:c.instructions+=6;goto B6ce0e6;
case 0x6ce0e9:c.instructions+=5;goto B6ce0e9;
case 0x6ce0ec:c.instructions+=4;goto B6ce0ec;
case 0x6ce0ef:c.instructions+=3;goto B6ce0ef;
case 0x6ce0f2:c.instructions+=2;goto B6ce0f2;
case 0x6ce0f5:c.instructions+=1;goto B6ce0f5;
case 0x6ce0f7:goto L6ce0f7;
case 0x6ce0fa:c.instructions+=1;goto B6ce0fa;
case 0x6ce0fc:goto L6ce0fc;
case 0x6ce0ff:goto L6ce0ff;
case 0x6ce106:c.instructions+=3;goto B6ce106;
case 0x6ce108:c.instructions+=2;goto B6ce108;
case 0x6ce10a:c.instructions+=1;goto B6ce10a;
case 0x6ce10c:goto L6ce10c;
case 0x6ce10f:c.instructions+=1;goto B6ce10f;
case 0x6ce111:goto L6ce111;
case 0x6ce114:c.instructions+=2;goto B6ce114;
case 0x6ce117:c.instructions+=1;goto B6ce117;
case 0x6ce119:goto L6ce119;
case 0x6ce120:c.instructions+=1;goto B6ce120;
case 0x6ce122:goto L6ce122;
case 0x6ce125:goto L6ce125;
case 0x6ce126:c.instructions+=1;goto B6ce126;
case 0x6ce12b:goto L6ce12b;
case 0x6ce12e:c.instructions+=3;goto B6ce12e;
case 0x6ce131:c.instructions+=2;goto B6ce131;
case 0x6ce134:c.instructions+=1;goto B6ce134;
case 0x6ce136:goto L6ce136;
case 0x6ce13c:c.instructions+=2;goto B6ce13c;
case 0x6ce13f:c.instructions+=1;goto B6ce13f;
case 0x6ce141:goto L6ce141;
case 0x6ce147:c.instructions+=4;goto B6ce147;
case 0x6ce149:c.instructions+=3;goto B6ce149;
case 0x6ce14f:c.instructions+=2;goto B6ce14f;
case 0x6ce151:c.instructions+=1;goto B6ce151;
case 0x6ce153:goto L6ce153;
case 0x6ce155:goto L6ce155;
case 0x6ce156:c.instructions+=4;goto B6ce156;
case 0x6ce157:c.instructions+=3;goto B6ce157;
case 0x6ce158:c.instructions+=2;goto B6ce158;
case 0x6ce159:c.instructions+=1;goto B6ce159;
case 0x6ce15c:goto L6ce15c;
case 0x6ce15e:c.instructions+=15;goto B6ce15e;
case 0x6ce15f:c.instructions+=14;goto B6ce15f;
case 0x6ce161:c.instructions+=13;goto B6ce161;
case 0x6ce162:c.instructions+=12;goto B6ce162;
case 0x6ce165:c.instructions+=11;goto B6ce165;
case 0x6ce167:c.instructions+=10;goto B6ce167;
case 0x6ce16d:c.instructions+=9;goto B6ce16d;
case 0x6ce174:c.instructions+=8;goto B6ce174;
case 0x6ce176:c.instructions+=7;goto B6ce176;
case 0x6ce17b:c.instructions+=6;goto B6ce17b;
case 0x6ce17c:c.instructions+=5;goto B6ce17c;
case 0x6ce17f:c.instructions+=4;goto B6ce17f;
case 0x6ce181:c.instructions+=3;goto B6ce181;
case 0x6ce186:c.instructions+=2;goto B6ce186;
case 0x6ce187:c.instructions+=1;goto B6ce187;
case 0x6ce18c:goto L6ce18c;
case 0x6ce18e:c.instructions+=1;goto B6ce18e;
case 0x6ce190:goto L6ce190;
case 0x6ce192:c.instructions+=1;goto B6ce192;
case 0x6ce197:goto L6ce197;
case 0x6ce198:c.instructions+=2;goto B6ce198;
case 0x6ce199:c.instructions+=1;goto B6ce199;
case 0x6ce19c:goto L6ce19c;
case 0x6ce19e:c.instructions+=12;goto B6ce19e;
case 0x6ce19f:c.instructions+=11;goto B6ce19f;
case 0x6ce1a1:c.instructions+=10;goto B6ce1a1;
case 0x6ce1a2:c.instructions+=9;goto B6ce1a2;
case 0x6ce1a3:c.instructions+=8;goto B6ce1a3;
case 0x6ce1a4:c.instructions+=7;goto B6ce1a4;
case 0x6ce1a6:c.instructions+=6;goto B6ce1a6;
case 0x6ce1ac:c.instructions+=5;goto B6ce1ac;
case 0x6ce1ad:c.instructions+=4;goto B6ce1ad;
case 0x6ce1af:c.instructions+=3;goto B6ce1af;
case 0x6ce1b2:c.instructions+=2;goto B6ce1b2;
case 0x6ce1b5:c.instructions+=1;goto B6ce1b5;
case 0x6ce1b7:goto L6ce1b7;
case 0x6ce1ba:c.instructions+=1;goto B6ce1ba;
case 0x6ce1bd:goto L6ce1bd;
case 0x6ce1bf:c.instructions+=6;goto B6ce1bf;
case 0x6ce1c2:c.instructions+=5;goto B6ce1c2;
case 0x6ce1c5:c.instructions+=4;goto B6ce1c5;
case 0x6ce1c8:c.instructions+=3;goto B6ce1c8;
case 0x6ce1cb:c.instructions+=2;goto B6ce1cb;
case 0x6ce1cf:c.instructions+=1;goto B6ce1cf;
case 0x6ce1d1:goto L6ce1d1;
case 0x6ce1d4:c.instructions+=5;goto B6ce1d4;
case 0x6ce1da:c.instructions+=4;goto B6ce1da;
case 0x6ce1dd:c.instructions+=3;goto B6ce1dd;
case 0x6ce1e0:c.instructions+=2;goto B6ce1e0;
case 0x6ce1e3:c.instructions+=1;goto B6ce1e3;
case 0x6ce1e5:goto L6ce1e5;
case 0x6ce1e7:goto L6ce1e7;
case 0x6ce1e8:c.instructions+=9;goto B6ce1e8;
case 0x6ce1e9:c.instructions+=8;goto B6ce1e9;
case 0x6ce1ee:c.instructions+=7;goto B6ce1ee;
case 0x6ce1ef:c.instructions+=6;goto B6ce1ef;
case 0x6ce1f5:c.instructions+=5;goto B6ce1f5;
case 0x6ce1f8:c.instructions+=4;goto B6ce1f8;
case 0x6ce1f9:c.instructions+=3;goto B6ce1f9;
case 0x6ce1fa:c.instructions+=2;goto B6ce1fa;
case 0x6ce1fc:c.instructions+=1;goto B6ce1fc;
case 0x6ce201:goto L6ce201;
case 0x6ce203:c.instructions+=1;goto B6ce203;
case 0x6ce205:goto L6ce205;
case 0x6ce207:c.instructions+=1;goto B6ce207;
case 0x6ce20c:goto L6ce20c;
case 0x6ce20d:c.instructions+=4;goto B6ce20d;
case 0x6ce20e:c.instructions+=3;goto B6ce20e;
case 0x6ce20f:c.instructions+=2;goto B6ce20f;
case 0x6ce210:c.instructions+=1;goto B6ce210;
case 0x6ce211:goto L6ce211;
case 0x6ce213:c.instructions+=2;goto B6ce213;
case 0x6ce214:c.instructions+=1;goto B6ce214;
case 0x6ce216:goto L6ce216;
case 0x6ce218:c.instructions+=26;goto B6ce218;
case 0x6ce219:c.instructions+=25;goto B6ce219;
case 0x6ce21b:c.instructions+=24;goto B6ce21b;
case 0x6ce221:c.instructions+=23;goto B6ce221;
case 0x6ce222:c.instructions+=22;goto B6ce222;
case 0x6ce224:c.instructions+=21;goto B6ce224;
case 0x6ce22a:c.instructions+=20;goto B6ce22a;
case 0x6ce22c:c.instructions+=19;goto B6ce22c;
case 0x6ce22d:c.instructions+=18;goto B6ce22d;
case 0x6ce22f:c.instructions+=17;goto B6ce22f;
case 0x6ce234:c.instructions+=16;goto B6ce234;
case 0x6ce237:c.instructions+=15;goto B6ce237;
case 0x6ce23a:c.instructions+=14;goto B6ce23a;
case 0x6ce23c:c.instructions+=13;goto B6ce23c;
case 0x6ce23d:c.instructions+=12;goto B6ce23d;
case 0x6ce23f:c.instructions+=11;goto B6ce23f;
case 0x6ce242:c.instructions+=10;goto B6ce242;
case 0x6ce245:c.instructions+=9;goto B6ce245;
case 0x6ce248:c.instructions+=8;goto B6ce248;
case 0x6ce24b:c.instructions+=7;goto B6ce24b;
case 0x6ce252:c.instructions+=6;goto B6ce252;
case 0x6ce259:c.instructions+=5;goto B6ce259;
case 0x6ce260:c.instructions+=4;goto B6ce260;
case 0x6ce263:c.instructions+=3;goto B6ce263;
case 0x6ce266:c.instructions+=2;goto B6ce266;
case 0x6ce269:c.instructions+=1;goto B6ce269;
case 0x6ce26f:goto L6ce26f;
case 0x6ce275:c.instructions+=2;goto B6ce275;
case 0x6ce27b:c.instructions+=1;goto B6ce27b;
case 0x6ce281:goto L6ce281;
case 0x6ce284:goto L6ce284;
case 0x6ce288:goto L6ce288;
case 0x6ce28a:c.instructions+=5;goto B6ce28a;
case 0x6ce28c:c.instructions+=4;goto B6ce28c;
case 0x6ce28d:c.instructions+=3;goto B6ce28d;
case 0x6ce290:c.instructions+=2;goto B6ce290;
case 0x6ce296:c.instructions+=1;goto B6ce296;
case 0x6ce29c:goto L6ce29c;
case 0x6ce29e:goto L6ce29e;
case 0x6ce2a0:c.instructions+=2;goto B6ce2a0;
case 0x6ce2a1:c.instructions+=1;goto B6ce2a1;
case 0x6ce2a7:goto L6ce2a7;
case 0x6ce2a9:goto L6ce2a9;
case 0x6ce2ab:c.instructions+=5;goto B6ce2ab;
case 0x6ce2b1:c.instructions+=4;goto B6ce2b1;
case 0x6ce2b4:c.instructions+=3;goto B6ce2b4;
case 0x6ce2b7:c.instructions+=2;goto B6ce2b7;
case 0x6ce2ba:c.instructions+=1;goto B6ce2ba;
case 0x6ce2bd:goto L6ce2bd;
case 0x6ce2c1:c.instructions+=1;goto B6ce2c1;
case 0x6ce2c3:goto L6ce2c3;
case 0x6ce2c5:c.instructions+=3;goto B6ce2c5;
case 0x6ce2c6:c.instructions+=2;goto B6ce2c6;
case 0x6ce2c9:c.instructions+=1;goto B6ce2c9;
case 0x6ce2cb:goto L6ce2cb;
case 0x6ce2ce:goto L6ce2ce;
case 0x6ce2d1:c.instructions+=8;goto B6ce2d1;
case 0x6ce2d4:c.instructions+=7;goto B6ce2d4;
case 0x6ce2db:c.instructions+=6;goto B6ce2db;
case 0x6ce2de:c.instructions+=5;goto B6ce2de;
case 0x6ce2e1:c.instructions+=4;goto B6ce2e1;
case 0x6ce2e4:c.instructions+=3;goto B6ce2e4;
case 0x6ce2e6:c.instructions+=2;goto B6ce2e6;
case 0x6ce2e9:c.instructions+=1;goto B6ce2e9;
case 0x6ce2eb:goto L6ce2eb;
case 0x6ce2ee:c.instructions+=2;goto B6ce2ee;
case 0x6ce2f1:c.instructions+=1;goto B6ce2f1;
case 0x6ce2f7:goto L6ce2f7;
case 0x6ce2fa:c.instructions+=15;goto B6ce2fa;
case 0x6ce2fc:c.instructions+=14;goto B6ce2fc;
case 0x6ce2ff:c.instructions+=13;goto B6ce2ff;
case 0x6ce302:c.instructions+=12;goto B6ce302;
case 0x6ce304:c.instructions+=11;goto B6ce304;
case 0x6ce30a:c.instructions+=10;goto B6ce30a;
case 0x6ce30d:c.instructions+=9;goto B6ce30d;
case 0x6ce30e:c.instructions+=8;goto B6ce30e;
case 0x6ce311:c.instructions+=7;goto B6ce311;
case 0x6ce312:c.instructions+=6;goto B6ce312;
case 0x6ce315:c.instructions+=5;goto B6ce315;
case 0x6ce317:c.instructions+=4;goto B6ce317;
case 0x6ce318:c.instructions+=3;goto B6ce318;
case 0x6ce319:c.instructions+=2;goto B6ce319;
case 0x6ce31c:c.instructions+=1;goto B6ce31c;
case 0x6ce321:goto L6ce321;
case 0x6ce323:c.instructions+=1;goto B6ce323;
case 0x6ce325:goto L6ce325;
case 0x6ce326:c.instructions+=14;goto B6ce326;
case 0x6ce329:c.instructions+=13;goto B6ce329;
case 0x6ce32c:c.instructions+=12;goto B6ce32c;
case 0x6ce32d:c.instructions+=11;goto B6ce32d;
case 0x6ce333:c.instructions+=10;goto B6ce333;
case 0x6ce334:c.instructions+=9;goto B6ce334;
case 0x6ce337:c.instructions+=8;goto B6ce337;
case 0x6ce338:c.instructions+=7;goto B6ce338;
case 0x6ce33e:c.instructions+=6;goto B6ce33e;
case 0x6ce33f:c.instructions+=5;goto B6ce33f;
case 0x6ce345:c.instructions+=4;goto B6ce345;
case 0x6ce346:c.instructions+=3;goto B6ce346;
case 0x6ce349:c.instructions+=2;goto B6ce349;
case 0x6ce34b:c.instructions+=1;goto B6ce34b;
case 0x6ce350:goto L6ce350;
case 0x6ce353:c.instructions+=1;goto B6ce353;
case 0x6ce355:goto L6ce355;
case 0x6ce358:c.instructions+=3;goto B6ce358;
case 0x6ce35a:c.instructions+=2;goto B6ce35a;
case 0x6ce35d:c.instructions+=1;goto B6ce35d;
case 0x6ce364:goto L6ce364;
case 0x6ce368:c.instructions+=2;goto B6ce368;
case 0x6ce36b:c.instructions+=1;goto B6ce36b;
case 0x6ce36d:goto L6ce36d;
case 0x6ce370:c.instructions+=4;goto B6ce370;
case 0x6ce372:c.instructions+=3;goto B6ce372;
case 0x6ce375:c.instructions+=2;goto B6ce375;
case 0x6ce377:c.instructions+=1;goto B6ce377;
case 0x6ce379:goto L6ce379;
case 0x6ce37c:goto L6ce37c;
case 0x6ce37d:c.instructions+=3;goto B6ce37d;
case 0x6ce380:c.instructions+=2;goto B6ce380;
case 0x6ce383:c.instructions+=1;goto B6ce383;
case 0x6ce385:goto L6ce385;
case 0x6ce389:c.instructions+=1;goto B6ce389;
case 0x6ce38b:goto L6ce38b;
case 0x6ce38e:c.instructions+=5;goto B6ce38e;
case 0x6ce391:c.instructions+=4;goto B6ce391;
case 0x6ce394:c.instructions+=3;goto B6ce394;
case 0x6ce398:c.instructions+=2;goto B6ce398;
case 0x6ce39b:c.instructions+=1;goto B6ce39b;
case 0x6ce3a1:goto L6ce3a1;
case 0x6ce3a3:goto L6ce3a3;
case 0x6ce3aa:goto L6ce3aa;
case 0x6ce3ae:c.instructions+=1;goto B6ce3ae;
case 0x6ce3b2:goto L6ce3b2;
case 0x6ce3b6:c.instructions+=1;goto B6ce3b6;
case 0x6ce3b8:goto L6ce3b8;
case 0x6ce3ba:c.instructions+=3;goto B6ce3ba;
case 0x6ce3bb:c.instructions+=2;goto B6ce3bb;
case 0x6ce3be:c.instructions+=1;goto B6ce3be;
case 0x6ce3c0:goto L6ce3c0;
case 0x6ce3c3:goto L6ce3c3;
case 0x6ce3cb:c.instructions+=1;goto B6ce3cb;
case 0x6ce3cd:goto L6ce3cd;
case 0x6ce3d1:c.instructions+=2;goto B6ce3d1;
case 0x6ce3d5:c.instructions+=1;goto B6ce3d5;
case 0x6ce3d7:goto L6ce3d7;
case 0x6ce3d9:c.instructions+=2;goto B6ce3d9;
case 0x6ce3dc:c.instructions+=1;goto B6ce3dc;
case 0x6ce3de:goto L6ce3de;
case 0x6ce3e1:c.instructions+=2;goto B6ce3e1;
case 0x6ce3e8:c.instructions+=1;goto B6ce3e8;
case 0x6ce3eb:goto L6ce3eb;
case 0x6ce3ef:c.instructions+=2;goto B6ce3ef;
case 0x6ce3f1:c.instructions+=1;goto B6ce3f1;
case 0x6ce3f3:goto L6ce3f3;
case 0x6ce3f6:c.instructions+=5;goto B6ce3f6;
case 0x6ce3f9:c.instructions+=4;goto B6ce3f9;
case 0x6ce3fc:c.instructions+=3;goto B6ce3fc;
case 0x6ce3fe:c.instructions+=2;goto B6ce3fe;
case 0x6ce401:c.instructions+=1;goto B6ce401;
case 0x6ce404:goto L6ce404;
case 0x6ce406:c.instructions+=1;goto B6ce406;
case 0x6ce408:goto L6ce408;
case 0x6ce40b:c.instructions+=4;goto B6ce40b;
case 0x6ce40e:c.instructions+=3;goto B6ce40e;
case 0x6ce411:c.instructions+=2;goto B6ce411;
case 0x6ce414:c.instructions+=1;goto B6ce414;
case 0x6ce416:goto L6ce416;
case 0x6ce417:c.instructions+=2;goto B6ce417;
case 0x6ce41a:c.instructions+=1;goto B6ce41a;
case 0x6ce41c:goto L6ce41c;
case 0x6ce41e:goto L6ce41e;
case 0x6ce425:goto L6ce425;
case 0x6ce428:c.instructions+=3;goto B6ce428;
case 0x6ce42b:c.instructions+=2;goto B6ce42b;
case 0x6ce42e:c.instructions+=1;goto B6ce42e;
case 0x6ce430:goto L6ce430;
case 0x6ce433:c.instructions+=4;goto B6ce433;
case 0x6ce436:c.instructions+=3;goto B6ce436;
case 0x6ce439:c.instructions+=2;goto B6ce439;
case 0x6ce43d:c.instructions+=1;goto B6ce43d;
case 0x6ce443:goto L6ce443;
case 0x6ce445:c.instructions+=2;goto B6ce445;
case 0x6ce448:c.instructions+=1;goto B6ce448;
case 0x6ce44e:goto L6ce44e;
case 0x6ce451:c.instructions+=1;goto B6ce451;
case 0x6ce457:goto L6ce457;
case 0x6ce45a:c.instructions+=2;goto B6ce45a;
case 0x6ce45d:c.instructions+=1;goto B6ce45d;
case 0x6ce463:goto L6ce463;
case 0x6ce466:c.instructions+=6;goto B6ce466;
case 0x6ce46d:c.instructions+=5;goto B6ce46d;
case 0x6ce470:c.instructions+=4;goto B6ce470;
case 0x6ce474:c.instructions+=3;goto B6ce474;
case 0x6ce476:c.instructions+=2;goto B6ce476;
case 0x6ce479:c.instructions+=1;goto B6ce479;
case 0x6ce47f:goto L6ce47f;
case 0x6ce483:c.instructions+=1;goto B6ce483;
case 0x6ce489:goto L6ce489;
case 0x6ce48c:c.instructions+=3;goto B6ce48c;
case 0x6ce48f:c.instructions+=2;goto B6ce48f;
case 0x6ce492:c.instructions+=1;goto B6ce492;
case 0x6ce495:goto L6ce495;
case 0x6ce498:c.instructions+=3;goto B6ce498;
case 0x6ce49a:c.instructions+=2;goto B6ce49a;
case 0x6ce49c:c.instructions+=1;goto B6ce49c;
case 0x6ce49e:goto L6ce49e;
case 0x6ce4a1:c.instructions+=1;goto B6ce4a1;
case 0x6ce4a3:goto L6ce4a3;
case 0x6ce4a6:c.instructions+=3;goto B6ce4a6;
case 0x6ce4aa:c.instructions+=2;goto B6ce4aa;
case 0x6ce4ac:c.instructions+=1;goto B6ce4ac;
case 0x6ce4ae:goto L6ce4ae;
case 0x6ce4b1:c.instructions+=6;goto B6ce4b1;
case 0x6ce4b8:c.instructions+=5;goto B6ce4b8;
case 0x6ce4bb:c.instructions+=4;goto B6ce4bb;
case 0x6ce4be:c.instructions+=3;goto B6ce4be;
case 0x6ce4c1:c.instructions+=2;goto B6ce4c1;
case 0x6ce4c4:c.instructions+=1;goto B6ce4c4;
case 0x6ce4c7:goto L6ce4c7;
case 0x6ce4c9:c.instructions+=2;goto B6ce4c9;
case 0x6ce4cb:c.instructions+=1;goto B6ce4cb;
case 0x6ce4cd:goto L6ce4cd;
case 0x6ce4d0:c.instructions+=3;goto B6ce4d0;
case 0x6ce4d3:c.instructions+=2;goto B6ce4d3;
case 0x6ce4d6:c.instructions+=1;goto B6ce4d6;
case 0x6ce4d8:goto L6ce4d8;
case 0x6ce4df:goto L6ce4df;
case 0x6ce4e2:c.instructions+=2;goto B6ce4e2;
case 0x6ce4e5:c.instructions+=1;goto B6ce4e5;
case 0x6ce4e7:goto L6ce4e7;
case 0x6ce4ea:c.instructions+=1;goto B6ce4ea;
case 0x6ce4ec:goto L6ce4ec;
case 0x6ce4f0:goto L6ce4f0;
case 0x6ce4f4:c.instructions+=1;goto B6ce4f4;
case 0x6ce4f6:goto L6ce4f6;
case 0x6ce4f8:goto L6ce4f8;
case 0x6ce4ff:c.instructions+=1;goto B6ce4ff;
case 0x6ce501:goto L6ce501;
case 0x6ce505:goto L6ce505;
case 0x6ce506:c.instructions+=2;goto B6ce506;
case 0x6ce509:c.instructions+=1;goto B6ce509;
case 0x6ce50b:goto L6ce50b;
case 0x6ce50f:c.instructions+=1;goto B6ce50f;
case 0x6ce511:goto L6ce511;
case 0x6ce518:goto L6ce518;
case 0x6ce51c:c.instructions+=2;goto B6ce51c;
case 0x6ce51f:c.instructions+=1;goto B6ce51f;
case 0x6ce525:goto L6ce525;
case 0x6ce528:c.instructions+=3;goto B6ce528;
case 0x6ce52b:c.instructions+=2;goto B6ce52b;
case 0x6ce52e:c.instructions+=1;goto B6ce52e;
case 0x6ce534:goto L6ce534;
case 0x6ce537:c.instructions+=3;goto B6ce537;
case 0x6ce53a:c.instructions+=2;goto B6ce53a;
case 0x6ce53d:c.instructions+=1;goto B6ce53d;
case 0x6ce543:goto L6ce543;
case 0x6ce547:goto L6ce547;
case 0x6ce54a:c.instructions+=3;goto B6ce54a;
case 0x6ce551:c.instructions+=2;goto B6ce551;
case 0x6ce554:c.instructions+=1;goto B6ce554;
case 0x6ce556:goto L6ce556;
case 0x6ce558:c.instructions+=2;goto B6ce558;
case 0x6ce55b:c.instructions+=1;goto B6ce55b;
case 0x6ce55d:goto L6ce55d;
case 0x6ce560:c.instructions+=2;goto B6ce560;
case 0x6ce563:c.instructions+=1;goto B6ce563;
case 0x6ce566:goto L6ce566;
case 0x6ce56d:c.instructions+=3;goto B6ce56d;
case 0x6ce570:c.instructions+=2;goto B6ce570;
case 0x6ce572:c.instructions+=1;goto B6ce572;
case 0x6ce574:goto L6ce574;
case 0x6ce577:c.instructions+=1;goto B6ce577;
case 0x6ce57a:goto L6ce57a;
case 0x6ce57c:c.instructions+=2;goto B6ce57c;
case 0x6ce57e:c.instructions+=1;goto B6ce57e;
case 0x6ce580:goto L6ce580;
case 0x6ce583:c.instructions+=2;goto B6ce583;
case 0x6ce586:c.instructions+=1;goto B6ce586;
case 0x6ce588:goto L6ce588;
case 0x6ce58f:goto L6ce58f;
case 0x6ce592:c.instructions+=2;goto B6ce592;
case 0x6ce595:c.instructions+=1;goto B6ce595;
case 0x6ce597:goto L6ce597;
case 0x6ce598:c.instructions+=2;goto B6ce598;
case 0x6ce59b:c.instructions+=1;goto B6ce59b;
case 0x6ce59d:goto L6ce59d;
case 0x6ce5a0:c.instructions+=2;goto B6ce5a0;
case 0x6ce5a4:c.instructions+=1;goto B6ce5a4;
case 0x6ce5a6:goto L6ce5a6;
case 0x6ce5aa:c.instructions+=1;goto B6ce5aa;
case 0x6ce5ac:goto L6ce5ac;
case 0x6ce5af:c.instructions+=2;goto B6ce5af;
case 0x6ce5b3:c.instructions+=1;goto B6ce5b3;
case 0x6ce5b9:goto L6ce5b9;
case 0x6ce5bd:c.instructions+=1;goto B6ce5bd;
case 0x6ce5bf:goto L6ce5bf;
case 0x6ce5c2:c.instructions+=2;goto B6ce5c2;
case 0x6ce5c6:c.instructions+=1;goto B6ce5c6;
case 0x6ce5cc:goto L6ce5cc;
case 0x6ce5ce:goto L6ce5ce;
case 0x6ce5d1:c.instructions+=6;goto B6ce5d1;
case 0x6ce5d4:c.instructions+=5;goto B6ce5d4;
case 0x6ce5d6:c.instructions+=4;goto B6ce5d6;
case 0x6ce5d8:c.instructions+=3;goto B6ce5d8;
case 0x6ce5db:c.instructions+=2;goto B6ce5db;
case 0x6ce5e1:c.instructions+=1;goto B6ce5e1;
case 0x6ce5e7:goto L6ce5e7;
case 0x6ce5e9:goto L6ce5e9;
case 0x6ce5eb:c.instructions+=1;goto B6ce5eb;
case 0x6ce5ee:goto L6ce5ee;
case 0x6ce5f0:goto L6ce5f0;
case 0x6ce5f3:c.instructions+=5;goto B6ce5f3;
case 0x6ce5fa:c.instructions+=4;goto B6ce5fa;
case 0x6ce5fd:c.instructions+=3;goto B6ce5fd;
case 0x6ce5fe:c.instructions+=2;goto B6ce5fe;
case 0x6ce601:c.instructions+=1;goto B6ce601;
case 0x6ce603:goto L6ce603;
case 0x6ce60a:c.instructions+=2;goto B6ce60a;
case 0x6ce60d:c.instructions+=1;goto B6ce60d;
case 0x6ce60f:goto L6ce60f;
case 0x6ce616:c.instructions+=2;goto B6ce616;
case 0x6ce619:c.instructions+=1;goto B6ce619;
case 0x6ce61b:goto L6ce61b;
case 0x6ce622:goto L6ce622;
case 0x6ce625:c.instructions+=2;goto B6ce625;
case 0x6ce62a:c.instructions+=1;goto B6ce62a;
case 0x6ce62c:goto L6ce62c;
case 0x6ce630:goto L6ce630;
case 0x6ce634:c.instructions+=1;goto B6ce634;
case 0x6ce63a:goto L6ce63a;
case 0x6ce63d:c.instructions+=1;goto B6ce63d;
case 0x6ce642:goto L6ce642;
case 0x6ce648:c.instructions+=6;goto B6ce648;
case 0x6ce64b:c.instructions+=5;goto B6ce64b;
case 0x6ce64d:c.instructions+=4;goto B6ce64d;
case 0x6ce650:c.instructions+=3;goto B6ce650;
case 0x6ce653:c.instructions+=2;goto B6ce653;
case 0x6ce656:c.instructions+=1;goto B6ce656;
case 0x6ce658:goto L6ce658;
case 0x6ce65e:c.instructions+=2;goto B6ce65e;
case 0x6ce664:c.instructions+=1;goto B6ce664;
case 0x6ce666:goto L6ce666;
case 0x6ce668:c.instructions+=2;goto B6ce668;
case 0x6ce669:c.instructions+=1;goto B6ce669;
case 0x6ce66e:goto L6ce66e;
case 0x6ce672:goto L6ce672;
case 0x6ce676:goto L6ce676;
case 0x6ce679:c.instructions+=6;goto B6ce679;
case 0x6ce67b:c.instructions+=5;goto B6ce67b;
case 0x6ce67e:c.instructions+=4;goto B6ce67e;
case 0x6ce680:c.instructions+=3;goto B6ce680;
case 0x6ce683:c.instructions+=2;goto B6ce683;
case 0x6ce689:c.instructions+=1;goto B6ce689;
case 0x6ce68f:goto L6ce68f;
case 0x6ce691:goto L6ce691;
case 0x6ce693:c.instructions+=1;goto B6ce693;
case 0x6ce696:goto L6ce696;
case 0x6ce698:goto L6ce698;
case 0x6ce69a:c.instructions+=3;goto B6ce69a;
case 0x6ce69b:c.instructions+=2;goto B6ce69b;
case 0x6ce69e:c.instructions+=1;goto B6ce69e;
case 0x6ce6a4:goto L6ce6a4;
case 0x6ce6a6:goto L6ce6a6;
case 0x6ce6a8:c.instructions+=2;goto B6ce6a8;
case 0x6ce6a9:c.instructions+=1;goto B6ce6a9;
case 0x6ce6af:goto L6ce6af;
case 0x6ce6b1:goto L6ce6b1;
case 0x6ce6b3:c.instructions+=4;goto B6ce6b3;
case 0x6ce6b6:c.instructions+=3;goto B6ce6b6;
case 0x6ce6b9:c.instructions+=2;goto B6ce6b9;
case 0x6ce6bc:c.instructions+=1;goto B6ce6bc;
case 0x6ce6bf:goto L6ce6bf;
case 0x6ce6c3:c.instructions+=1;goto B6ce6c3;
case 0x6ce6c5:goto L6ce6c5;
case 0x6ce6c7:c.instructions+=3;goto B6ce6c7;
case 0x6ce6c8:c.instructions+=2;goto B6ce6c8;
case 0x6ce6cb:c.instructions+=1;goto B6ce6cb;
case 0x6ce6cd:goto L6ce6cd;
case 0x6ce6d0:goto L6ce6d0;
case 0x6ce6d3:c.instructions+=8;goto B6ce6d3;
case 0x6ce6d6:c.instructions+=7;goto B6ce6d6;
case 0x6ce6dd:c.instructions+=6;goto B6ce6dd;
case 0x6ce6e0:c.instructions+=5;goto B6ce6e0;
case 0x6ce6e3:c.instructions+=4;goto B6ce6e3;
case 0x6ce6e6:c.instructions+=3;goto B6ce6e6;
case 0x6ce6e8:c.instructions+=2;goto B6ce6e8;
case 0x6ce6eb:c.instructions+=1;goto B6ce6eb;
case 0x6ce6ed:goto L6ce6ed;
case 0x6ce6f0:c.instructions+=2;goto B6ce6f0;
case 0x6ce6f3:c.instructions+=1;goto B6ce6f3;
case 0x6ce6f9:goto L6ce6f9;
case 0x6ce6fc:c.instructions+=15;goto B6ce6fc;
case 0x6ce6fe:c.instructions+=14;goto B6ce6fe;
case 0x6ce701:c.instructions+=13;goto B6ce701;
case 0x6ce704:c.instructions+=12;goto B6ce704;
case 0x6ce706:c.instructions+=11;goto B6ce706;
case 0x6ce70c:c.instructions+=10;goto B6ce70c;
case 0x6ce70f:c.instructions+=9;goto B6ce70f;
case 0x6ce710:c.instructions+=8;goto B6ce710;
case 0x6ce713:c.instructions+=7;goto B6ce713;
case 0x6ce714:c.instructions+=6;goto B6ce714;
case 0x6ce717:c.instructions+=5;goto B6ce717;
case 0x6ce719:c.instructions+=4;goto B6ce719;
case 0x6ce71a:c.instructions+=3;goto B6ce71a;
case 0x6ce71b:c.instructions+=2;goto B6ce71b;
case 0x6ce71e:c.instructions+=1;goto B6ce71e;
case 0x6ce723:goto L6ce723;
case 0x6ce725:c.instructions+=1;goto B6ce725;
case 0x6ce727:goto L6ce727;
case 0x6ce728:c.instructions+=14;goto B6ce728;
case 0x6ce72b:c.instructions+=13;goto B6ce72b;
case 0x6ce72e:c.instructions+=12;goto B6ce72e;
case 0x6ce72f:c.instructions+=11;goto B6ce72f;
case 0x6ce735:c.instructions+=10;goto B6ce735;
case 0x6ce736:c.instructions+=9;goto B6ce736;
case 0x6ce739:c.instructions+=8;goto B6ce739;
case 0x6ce73a:c.instructions+=7;goto B6ce73a;
case 0x6ce740:c.instructions+=6;goto B6ce740;
case 0x6ce741:c.instructions+=5;goto B6ce741;
case 0x6ce747:c.instructions+=4;goto B6ce747;
case 0x6ce748:c.instructions+=3;goto B6ce748;
case 0x6ce74b:c.instructions+=2;goto B6ce74b;
case 0x6ce74d:c.instructions+=1;goto B6ce74d;
case 0x6ce752:goto L6ce752;
case 0x6ce755:c.instructions+=1;goto B6ce755;
case 0x6ce757:goto L6ce757;
case 0x6ce75a:c.instructions+=3;goto B6ce75a;
case 0x6ce75c:c.instructions+=2;goto B6ce75c;
case 0x6ce75f:c.instructions+=1;goto B6ce75f;
case 0x6ce766:goto L6ce766;
case 0x6ce76a:c.instructions+=2;goto B6ce76a;
case 0x6ce76d:c.instructions+=1;goto B6ce76d;
case 0x6ce76f:goto L6ce76f;
case 0x6ce772:c.instructions+=4;goto B6ce772;
case 0x6ce774:c.instructions+=3;goto B6ce774;
case 0x6ce777:c.instructions+=2;goto B6ce777;
case 0x6ce779:c.instructions+=1;goto B6ce779;
case 0x6ce77b:goto L6ce77b;
case 0x6ce77e:goto L6ce77e;
case 0x6ce77f:c.instructions+=3;goto B6ce77f;
case 0x6ce782:c.instructions+=2;goto B6ce782;
case 0x6ce785:c.instructions+=1;goto B6ce785;
case 0x6ce787:goto L6ce787;
case 0x6ce78b:c.instructions+=1;goto B6ce78b;
case 0x6ce78d:goto L6ce78d;
case 0x6ce790:c.instructions+=5;goto B6ce790;
case 0x6ce793:c.instructions+=4;goto B6ce793;
case 0x6ce796:c.instructions+=3;goto B6ce796;
case 0x6ce79a:c.instructions+=2;goto B6ce79a;
case 0x6ce79d:c.instructions+=1;goto B6ce79d;
case 0x6ce7a3:goto L6ce7a3;
case 0x6ce7a5:goto L6ce7a5;
case 0x6ce7ac:goto L6ce7ac;
case 0x6ce7ae:c.instructions+=2;goto B6ce7ae;
case 0x6ce7b1:c.instructions+=1;goto B6ce7b1;
case 0x6ce7b4:goto L6ce7b4;
case 0x6ce7b7:c.instructions+=1;goto B6ce7b7;
case 0x6ce7b9:goto L6ce7b9;
case 0x6ce7bb:c.instructions+=3;goto B6ce7bb;
case 0x6ce7bc:c.instructions+=2;goto B6ce7bc;
case 0x6ce7bf:c.instructions+=1;goto B6ce7bf;
case 0x6ce7c1:goto L6ce7c1;
case 0x6ce7c4:goto L6ce7c4;
case 0x6ce7cc:c.instructions+=1;goto B6ce7cc;
case 0x6ce7ce:goto L6ce7ce;
case 0x6ce7d1:c.instructions+=2;goto B6ce7d1;
case 0x6ce7d4:c.instructions+=1;goto B6ce7d4;
case 0x6ce7d6:goto L6ce7d6;
case 0x6ce7d9:c.instructions+=1;goto B6ce7d9;
case 0x6ce7db:goto L6ce7db;
case 0x6ce7de:c.instructions+=2;goto B6ce7de;
case 0x6ce7e5:c.instructions+=1;goto B6ce7e5;
case 0x6ce7e8:goto L6ce7e8;
case 0x6ce7ec:c.instructions+=2;goto B6ce7ec;
case 0x6ce7ee:c.instructions+=1;goto B6ce7ee;
case 0x6ce7f0:goto L6ce7f0;
case 0x6ce7f3:c.instructions+=5;goto B6ce7f3;
case 0x6ce7f6:c.instructions+=4;goto B6ce7f6;
case 0x6ce7f9:c.instructions+=3;goto B6ce7f9;
case 0x6ce7fb:c.instructions+=2;goto B6ce7fb;
case 0x6ce7fe:c.instructions+=1;goto B6ce7fe;
case 0x6ce801:goto L6ce801;
case 0x6ce803:c.instructions+=1;goto B6ce803;
case 0x6ce805:goto L6ce805;
case 0x6ce808:c.instructions+=4;goto B6ce808;
case 0x6ce80b:c.instructions+=3;goto B6ce80b;
case 0x6ce80e:c.instructions+=2;goto B6ce80e;
case 0x6ce811:c.instructions+=1;goto B6ce811;
case 0x6ce813:goto L6ce813;
case 0x6ce814:c.instructions+=2;goto B6ce814;
case 0x6ce817:c.instructions+=1;goto B6ce817;
case 0x6ce819:goto L6ce819;
case 0x6ce81b:goto L6ce81b;
case 0x6ce822:goto L6ce822;
case 0x6ce825:c.instructions+=4;goto B6ce825;
case 0x6ce828:c.instructions+=3;goto B6ce828;
case 0x6ce82a:c.instructions+=2;goto B6ce82a;
case 0x6ce82d:c.instructions+=1;goto B6ce82d;
case 0x6ce82f:goto L6ce82f;
case 0x6ce832:c.instructions+=4;goto B6ce832;
case 0x6ce835:c.instructions+=3;goto B6ce835;
case 0x6ce838:c.instructions+=2;goto B6ce838;
case 0x6ce83c:c.instructions+=1;goto B6ce83c;
case 0x6ce842:goto L6ce842;
case 0x6ce845:c.instructions+=1;goto B6ce845;
case 0x6ce84b:goto L6ce84b;
case 0x6ce84d:c.instructions+=2;goto B6ce84d;
case 0x6ce850:c.instructions+=1;goto B6ce850;
case 0x6ce856:goto L6ce856;
case 0x6ce859:c.instructions+=2;goto B6ce859;
case 0x6ce85c:c.instructions+=1;goto B6ce85c;
case 0x6ce862:goto L6ce862;
case 0x6ce865:c.instructions+=6;goto B6ce865;
case 0x6ce86c:c.instructions+=5;goto B6ce86c;
case 0x6ce86f:c.instructions+=4;goto B6ce86f;
case 0x6ce873:c.instructions+=3;goto B6ce873;
case 0x6ce875:c.instructions+=2;goto B6ce875;
case 0x6ce878:c.instructions+=1;goto B6ce878;
case 0x6ce87e:goto L6ce87e;
case 0x6ce882:c.instructions+=1;goto B6ce882;
case 0x6ce888:goto L6ce888;
case 0x6ce88b:c.instructions+=3;goto B6ce88b;
case 0x6ce88e:c.instructions+=2;goto B6ce88e;
case 0x6ce891:c.instructions+=1;goto B6ce891;
case 0x6ce894:goto L6ce894;
case 0x6ce897:c.instructions+=3;goto B6ce897;
case 0x6ce899:c.instructions+=2;goto B6ce899;
case 0x6ce89b:c.instructions+=1;goto B6ce89b;
case 0x6ce89d:goto L6ce89d;
case 0x6ce8a0:c.instructions+=1;goto B6ce8a0;
case 0x6ce8a2:goto L6ce8a2;
case 0x6ce8a5:c.instructions+=3;goto B6ce8a5;
case 0x6ce8a9:c.instructions+=2;goto B6ce8a9;
case 0x6ce8ab:c.instructions+=1;goto B6ce8ab;
case 0x6ce8ad:goto L6ce8ad;
case 0x6ce8b0:c.instructions+=6;goto B6ce8b0;
case 0x6ce8b7:c.instructions+=5;goto B6ce8b7;
case 0x6ce8ba:c.instructions+=4;goto B6ce8ba;
case 0x6ce8bd:c.instructions+=3;goto B6ce8bd;
case 0x6ce8c0:c.instructions+=2;goto B6ce8c0;
case 0x6ce8c3:c.instructions+=1;goto B6ce8c3;
case 0x6ce8c6:goto L6ce8c6;
case 0x6ce8c8:c.instructions+=2;goto B6ce8c8;
case 0x6ce8ca:c.instructions+=1;goto B6ce8ca;
case 0x6ce8cc:goto L6ce8cc;
case 0x6ce8cf:c.instructions+=3;goto B6ce8cf;
case 0x6ce8d2:c.instructions+=2;goto B6ce8d2;
case 0x6ce8d5:c.instructions+=1;goto B6ce8d5;
case 0x6ce8d7:goto L6ce8d7;
case 0x6ce8de:goto L6ce8de;
case 0x6ce8e1:c.instructions+=2;goto B6ce8e1;
case 0x6ce8e4:c.instructions+=1;goto B6ce8e4;
case 0x6ce8e6:goto L6ce8e6;
case 0x6ce8e9:c.instructions+=1;goto B6ce8e9;
case 0x6ce8eb:goto L6ce8eb;
case 0x6ce8ef:goto L6ce8ef;
case 0x6ce8f3:c.instructions+=1;goto B6ce8f3;
case 0x6ce8f5:goto L6ce8f5;
case 0x6ce8f7:goto L6ce8f7;
case 0x6ce8fe:c.instructions+=1;goto B6ce8fe;
case 0x6ce900:goto L6ce900;
case 0x6ce904:goto L6ce904;
case 0x6ce905:c.instructions+=2;goto B6ce905;
case 0x6ce908:c.instructions+=1;goto B6ce908;
case 0x6ce90a:goto L6ce90a;
case 0x6ce90e:c.instructions+=1;goto B6ce90e;
case 0x6ce910:goto L6ce910;
case 0x6ce917:goto L6ce917;
case 0x6ce91b:c.instructions+=2;goto B6ce91b;
case 0x6ce91e:c.instructions+=1;goto B6ce91e;
case 0x6ce924:goto L6ce924;
case 0x6ce927:c.instructions+=3;goto B6ce927;
case 0x6ce92a:c.instructions+=2;goto B6ce92a;
case 0x6ce92d:c.instructions+=1;goto B6ce92d;
case 0x6ce933:goto L6ce933;
case 0x6ce936:c.instructions+=3;goto B6ce936;
case 0x6ce939:c.instructions+=2;goto B6ce939;
case 0x6ce93c:c.instructions+=1;goto B6ce93c;
case 0x6ce942:goto L6ce942;
case 0x6ce946:goto L6ce946;
case 0x6ce949:c.instructions+=3;goto B6ce949;
case 0x6ce950:c.instructions+=2;goto B6ce950;
case 0x6ce953:c.instructions+=1;goto B6ce953;
case 0x6ce955:goto L6ce955;
case 0x6ce957:c.instructions+=2;goto B6ce957;
case 0x6ce95a:c.instructions+=1;goto B6ce95a;
case 0x6ce95c:goto L6ce95c;
case 0x6ce95f:c.instructions+=2;goto B6ce95f;
case 0x6ce962:c.instructions+=1;goto B6ce962;
case 0x6ce965:goto L6ce965;
case 0x6ce96c:c.instructions+=3;goto B6ce96c;
case 0x6ce96f:c.instructions+=2;goto B6ce96f;
case 0x6ce971:c.instructions+=1;goto B6ce971;
case 0x6ce973:goto L6ce973;
case 0x6ce976:c.instructions+=1;goto B6ce976;
case 0x6ce979:goto L6ce979;
case 0x6ce97b:c.instructions+=2;goto B6ce97b;
case 0x6ce97d:c.instructions+=1;goto B6ce97d;
case 0x6ce97f:goto L6ce97f;
case 0x6ce982:c.instructions+=2;goto B6ce982;
case 0x6ce985:c.instructions+=1;goto B6ce985;
case 0x6ce987:goto L6ce987;
case 0x6ce98e:goto L6ce98e;
case 0x6ce991:c.instructions+=2;goto B6ce991;
case 0x6ce994:c.instructions+=1;goto B6ce994;
case 0x6ce996:goto L6ce996;
case 0x6ce997:c.instructions+=2;goto B6ce997;
case 0x6ce99a:c.instructions+=1;goto B6ce99a;
case 0x6ce99c:goto L6ce99c;
case 0x6ce99f:c.instructions+=2;goto B6ce99f;
case 0x6ce9a3:c.instructions+=1;goto B6ce9a3;
case 0x6ce9a5:goto L6ce9a5;
case 0x6ce9a9:c.instructions+=1;goto B6ce9a9;
case 0x6ce9ab:goto L6ce9ab;
case 0x6ce9ae:c.instructions+=2;goto B6ce9ae;
case 0x6ce9b2:c.instructions+=1;goto B6ce9b2;
case 0x6ce9b8:goto L6ce9b8;
case 0x6ce9bc:c.instructions+=1;goto B6ce9bc;
case 0x6ce9be:goto L6ce9be;
case 0x6ce9c1:c.instructions+=2;goto B6ce9c1;
case 0x6ce9c5:c.instructions+=1;goto B6ce9c5;
case 0x6ce9cb:goto L6ce9cb;
case 0x6ce9cd:goto L6ce9cd;
case 0x6ce9d0:c.instructions+=6;goto B6ce9d0;
case 0x6ce9d3:c.instructions+=5;goto B6ce9d3;
case 0x6ce9d5:c.instructions+=4;goto B6ce9d5;
case 0x6ce9d7:c.instructions+=3;goto B6ce9d7;
case 0x6ce9da:c.instructions+=2;goto B6ce9da;
case 0x6ce9e0:c.instructions+=1;goto B6ce9e0;
case 0x6ce9e6:goto L6ce9e6;
case 0x6ce9e8:goto L6ce9e8;
case 0x6ce9ea:c.instructions+=1;goto B6ce9ea;
case 0x6ce9ed:goto L6ce9ed;
case 0x6ce9ef:goto L6ce9ef;
case 0x6ce9f2:c.instructions+=5;goto B6ce9f2;
case 0x6ce9f9:c.instructions+=4;goto B6ce9f9;
case 0x6ce9fc:c.instructions+=3;goto B6ce9fc;
case 0x6ce9fd:c.instructions+=2;goto B6ce9fd;
case 0x6cea00:c.instructions+=1;goto B6cea00;
case 0x6cea02:goto L6cea02;
case 0x6cea09:c.instructions+=2;goto B6cea09;
case 0x6cea0c:c.instructions+=1;goto B6cea0c;
case 0x6cea0e:goto L6cea0e;
case 0x6cea15:c.instructions+=2;goto B6cea15;
case 0x6cea18:c.instructions+=1;goto B6cea18;
case 0x6cea1a:goto L6cea1a;
case 0x6cea21:goto L6cea21;
case 0x6cea24:c.instructions+=2;goto B6cea24;
case 0x6cea29:c.instructions+=1;goto B6cea29;
case 0x6cea2b:goto L6cea2b;
case 0x6cea2f:goto L6cea2f;
case 0x6cea32:goto L6cea32;
case 0x6cea34:c.instructions+=2;goto B6cea34;
case 0x6cea3b:c.instructions+=1;goto B6cea3b;
case 0x6cea41:goto L6cea41;
case 0x6cea45:c.instructions+=1;goto B6cea45;
case 0x6cea47:goto L6cea47;
case 0x6cea4a:c.instructions+=14;goto B6cea4a;
case 0x6cea4e:c.instructions+=13;goto B6cea4e;
case 0x6cea51:c.instructions+=12;goto B6cea51;
case 0x6cea54:c.instructions+=11;goto B6cea54;
case 0x6cea55:c.instructions+=10;goto B6cea55;
case 0x6cea5b:c.instructions+=9;goto B6cea5b;
case 0x6cea5c:c.instructions+=8;goto B6cea5c;
case 0x6cea5f:c.instructions+=7;goto B6cea5f;
case 0x6cea60:c.instructions+=6;goto B6cea60;
case 0x6cea66:c.instructions+=5;goto B6cea66;
case 0x6cea67:c.instructions+=4;goto B6cea67;
case 0x6cea6c:c.instructions+=3;goto B6cea6c;
case 0x6cea72:c.instructions+=2;goto B6cea72;
case 0x6cea74:c.instructions+=1;goto B6cea74;
case 0x6cea79:goto L6cea79;
case 0x6cea7b:c.instructions+=1;goto B6cea7b;
case 0x6cea81:goto L6cea81;
case 0x6cea84:c.instructions+=13;goto B6cea84;
case 0x6cea87:c.instructions+=12;goto B6cea87;
case 0x6cea8a:c.instructions+=11;goto B6cea8a;
case 0x6cea8c:c.instructions+=10;goto B6cea8c;
case 0x6cea8d:c.instructions+=9;goto B6cea8d;
case 0x6cea93:c.instructions+=8;goto B6cea93;
case 0x6cea94:c.instructions+=7;goto B6cea94;
case 0x6cea97:c.instructions+=6;goto B6cea97;
case 0x6cea98:c.instructions+=5;goto B6cea98;
case 0x6cea9e:c.instructions+=4;goto B6cea9e;
case 0x6cea9f:c.instructions+=3;goto B6cea9f;
case 0x6ceaa4:c.instructions+=2;goto B6ceaa4;
case 0x6ceaaa:c.instructions+=1;goto B6ceaaa;
case 0x6ceaaf:goto L6ceaaf;
case 0x6ceab6:goto L6ceab6;
case 0x6ceab8:c.instructions+=1;goto B6ceab8;
case 0x6ceabe:goto L6ceabe;
case 0x6ceac1:c.instructions+=15;goto B6ceac1;
case 0x6ceac4:c.instructions+=14;goto B6ceac4;
case 0x6ceac8:c.instructions+=13;goto B6ceac8;
case 0x6ceac9:c.instructions+=12;goto B6ceac9;
case 0x6ceacc:c.instructions+=11;goto B6ceacc;
case 0x6ceacd:c.instructions+=10;goto B6ceacd;
case 0x6cead3:c.instructions+=9;goto B6cead3;
case 0x6cead4:c.instructions+=8;goto B6cead4;
case 0x6cead7:c.instructions+=7;goto B6cead7;
case 0x6cead8:c.instructions+=6;goto B6cead8;
case 0x6ceade:c.instructions+=5;goto B6ceade;
case 0x6ceadf:c.instructions+=4;goto B6ceadf;
case 0x6ceae4:c.instructions+=3;goto B6ceae4;
case 0x6ceaea:c.instructions+=2;goto B6ceaea;
case 0x6ceaec:c.instructions+=1;goto B6ceaec;
case 0x6ceaf1:goto L6ceaf1;
case 0x6ceaf3:c.instructions+=2;goto B6ceaf3;
case 0x6ceaf5:c.instructions+=1;goto B6ceaf5;
case 0x6ceaf7:goto L6ceaf7;
case 0x6ceafe:c.instructions+=2;goto B6ceafe;
case 0x6ceb05:c.instructions+=1;goto B6ceb05;
case 0x6ceb07:goto L6ceb07;
case 0x6ceb09:c.instructions+=1;goto B6ceb09;
case 0x6ceb0a:goto L6ceb0a;
case 0x6ceb0b:c.instructions+=2;goto B6ceb0b;
case 0x6ceb0d:c.instructions+=1;goto B6ceb0d;
case 0x6ceb0f:goto L6ceb0f;
case 0x6ceb11:c.instructions+=1;goto B6ceb11;
case 0x6ceb17:goto L6ceb17;
case 0x6ceb1a:c.instructions+=14;goto B6ceb1a;
case 0x6ceb1e:c.instructions+=13;goto B6ceb1e;
case 0x6ceb1f:c.instructions+=12;goto B6ceb1f;
case 0x6ceb22:c.instructions+=11;goto B6ceb22;
case 0x6ceb23:c.instructions+=10;goto B6ceb23;
case 0x6ceb29:c.instructions+=9;goto B6ceb29;
case 0x6ceb2a:c.instructions+=8;goto B6ceb2a;
case 0x6ceb2d:c.instructions+=7;goto B6ceb2d;
case 0x6ceb2e:c.instructions+=6;goto B6ceb2e;
case 0x6ceb34:c.instructions+=5;goto B6ceb34;
case 0x6ceb35:c.instructions+=4;goto B6ceb35;
case 0x6ceb3a:c.instructions+=3;goto B6ceb3a;
case 0x6ceb40:c.instructions+=2;goto B6ceb40;
case 0x6ceb42:c.instructions+=1;goto B6ceb42;
case 0x6ceb47:goto L6ceb47;
case 0x6ceb49:c.instructions+=6;goto B6ceb49;
case 0x6ceb4a:c.instructions+=5;goto B6ceb4a;
case 0x6ceb4c:c.instructions+=4;goto B6ceb4c;
case 0x6ceb4e:c.instructions+=3;goto B6ceb4e;
case 0x6ceb51:c.instructions+=2;goto B6ceb51;
case 0x6ceb54:c.instructions+=1;goto B6ceb54;
case 0x6ceb56:goto L6ceb56;
case 0x6ceb5d:c.instructions+=2;goto B6ceb5d;
case 0x6ceb64:c.instructions+=1;goto B6ceb64;
case 0x6ceb66:goto L6ceb66;
case 0x6ceb69:goto L6ceb69;
case 0x6ceb6a:c.instructions+=2;goto B6ceb6a;
case 0x6ceb6c:c.instructions+=1;goto B6ceb6c;
case 0x6ceb6e:goto L6ceb6e;
case 0x6ceb72:c.instructions+=1;goto B6ceb72;
case 0x6ceb78:goto L6ceb78;
case 0x6ceb7b:c.instructions+=15;goto B6ceb7b;
case 0x6ceb7f:c.instructions+=14;goto B6ceb7f;
case 0x6ceb83:c.instructions+=13;goto B6ceb83;
case 0x6ceb84:c.instructions+=12;goto B6ceb84;
case 0x6ceb87:c.instructions+=11;goto B6ceb87;
case 0x6ceb88:c.instructions+=10;goto B6ceb88;
case 0x6ceb8e:c.instructions+=9;goto B6ceb8e;
case 0x6ceb8f:c.instructions+=8;goto B6ceb8f;
case 0x6ceb92:c.instructions+=7;goto B6ceb92;
case 0x6ceb93:c.instructions+=6;goto B6ceb93;
case 0x6ceb99:c.instructions+=5;goto B6ceb99;
case 0x6ceb9a:c.instructions+=4;goto B6ceb9a;
case 0x6ceb9f:c.instructions+=3;goto B6ceb9f;
case 0x6ceba5:c.instructions+=2;goto B6ceba5;
case 0x6ceba7:c.instructions+=1;goto B6ceba7;
case 0x6cebac:goto L6cebac;
case 0x6cebae:c.instructions+=3;goto B6cebae;
case 0x6cebb0:c.instructions+=2;goto B6cebb0;
case 0x6cebb3:c.instructions+=1;goto B6cebb3;
case 0x6cebb5:goto L6cebb5;
case 0x6cebbc:c.instructions+=2;goto B6cebbc;
case 0x6cebc3:c.instructions+=1;goto B6cebc3;
case 0x6cebc5:goto L6cebc5;
case 0x6cebc8:goto L6cebc8;
case 0x6cebc9:c.instructions+=2;goto B6cebc9;
case 0x6cebcb:c.instructions+=1;goto B6cebcb;
case 0x6cebcd:goto L6cebcd;
case 0x6cebd1:c.instructions+=1;goto B6cebd1;
case 0x6cebd3:goto L6cebd3;
case 0x6cebd6:c.instructions+=14;goto B6cebd6;
case 0x6cebda:c.instructions+=13;goto B6cebda;
case 0x6cebdb:c.instructions+=12;goto B6cebdb;
case 0x6cebde:c.instructions+=11;goto B6cebde;
case 0x6cebdf:c.instructions+=10;goto B6cebdf;
case 0x6cebe5:c.instructions+=9;goto B6cebe5;
case 0x6cebe6:c.instructions+=8;goto B6cebe6;
case 0x6cebe9:c.instructions+=7;goto B6cebe9;
case 0x6cebea:c.instructions+=6;goto B6cebea;
case 0x6cebf0:c.instructions+=5;goto B6cebf0;
case 0x6cebf1:c.instructions+=4;goto B6cebf1;
case 0x6cebf6:c.instructions+=3;goto B6cebf6;
case 0x6cebfc:c.instructions+=2;goto B6cebfc;
case 0x6cebfe:c.instructions+=1;goto B6cebfe;
case 0x6cec03:goto L6cec03;
case 0x6cec05:c.instructions+=4;goto B6cec05;
case 0x6cec07:c.instructions+=3;goto B6cec07;
case 0x6cec0a:c.instructions+=2;goto B6cec0a;
case 0x6cec0d:c.instructions+=1;goto B6cec0d;
case 0x6cec0f:goto L6cec0f;
case 0x6cec16:c.instructions+=2;goto B6cec16;
case 0x6cec1d:c.instructions+=1;goto B6cec1d;
case 0x6cec1f:goto L6cec1f;
case 0x6cec22:goto L6cec22;
case 0x6cec23:c.instructions+=2;goto B6cec23;
case 0x6cec25:c.instructions+=1;goto B6cec25;
case 0x6cec27:goto L6cec27;
case 0x6cec2b:c.instructions+=1;goto B6cec2b;
case 0x6cec2d:goto L6cec2d;
case 0x6cec30:goto L6cec30;
case 0x6cec34:goto L6cec34;
case 0x6cec36:c.instructions+=1;goto B6cec36;
case 0x6cec38:goto L6cec38;
case 0x6cec3a:c.instructions+=2;goto B6cec3a;
case 0x6cec3c:c.instructions+=1;goto B6cec3c;
case 0x6cec41:goto L6cec41;
case 0x6cec44:goto L6cec44;
case 0x6cec45:c.instructions+=4;goto B6cec45;
case 0x6cec46:c.instructions+=3;goto B6cec46;
case 0x6cec47:c.instructions+=2;goto B6cec47;
case 0x6cec48:c.instructions+=1;goto B6cec48;
case 0x6cec4b:goto L6cec4b;
case 0x6cec4d:c.instructions+=1;goto B6cec4d;
case 0x6cec4e:goto L6cec4e;
case 0x6cec50:c.instructions+=2;goto B6cec50;
case 0x6cec52:c.instructions+=1;goto B6cec52;
case 0x6cec54:goto L6cec54;
case 0x6cec5b:c.instructions+=2;goto B6cec5b;
case 0x6cec62:c.instructions+=1;goto B6cec62;
case 0x6cec68:goto L6cec68;
case 0x6cec69:c.instructions+=2;goto B6cec69;
case 0x6cec6b:c.instructions+=1;goto B6cec6b;
case 0x6cec6d:goto L6cec6d;
case 0x6cec74:c.instructions+=1;goto B6cec74;
case 0x6cec76:goto L6cec76;
case 0x6cec78:c.instructions+=5;goto B6cec78;
case 0x6cec79:c.instructions+=4;goto B6cec79;
case 0x6cec7e:c.instructions+=3;goto B6cec7e;
case 0x6cec83:c.instructions+=2;goto B6cec83;
case 0x6cec85:c.instructions+=1;goto B6cec85;
case 0x6cec8a:goto L6cec8a;
case 0x6cec8d:c.instructions+=2;goto B6cec8d;
case 0x6cec93:c.instructions+=1;goto B6cec93;
case 0x6cec99:goto L6cec99;
case 0x6cec9f:c.instructions+=8;goto B6cec9f;
case 0x6ceca0:c.instructions+=7;goto B6ceca0;
case 0x6ceca1:c.instructions+=6;goto B6ceca1;
case 0x6ceca4:c.instructions+=5;goto B6ceca4;
case 0x6ceca6:c.instructions+=4;goto B6ceca6;
case 0x6ceca8:c.instructions+=3;goto B6ceca8;
case 0x6ceca9:c.instructions+=2;goto B6ceca9;
case 0x6cecab:c.instructions+=1;goto B6cecab;
case 0x6cecb0:goto L6cecb0;
case 0x6cecb3:c.instructions+=2;goto B6cecb3;
case 0x6cecb9:c.instructions+=1;goto B6cecb9;
case 0x6cecbf:goto L6cecbf;
case 0x6cecc1:c.instructions+=2;goto B6cecc1;
case 0x6cecc3:c.instructions+=1;goto B6cecc3;
case 0x6cecc5:goto L6cecc5;
case 0x6ceccb:goto L6ceccb;
case 0x6cecd2:c.instructions+=3;goto B6cecd2;
case 0x6cecd9:c.instructions+=2;goto B6cecd9;
case 0x6cecdf:c.instructions+=1;goto B6cecdf;
case 0x6cece1:goto L6cece1;
case 0x6cece3:goto L6cece3;
case 0x6cece4:c.instructions+=2;goto B6cece4;
case 0x6cece6:c.instructions+=1;goto B6cece6;
case 0x6cece8:goto L6cece8;
case 0x6cecee:c.instructions+=7;goto B6cecee;
case 0x6cecf1:c.instructions+=6;goto B6cecf1;
case 0x6cecf4:c.instructions+=5;goto B6cecf4;
case 0x6cecf7:c.instructions+=4;goto B6cecf7;
case 0x6cecfa:c.instructions+=3;goto B6cecfa;
case 0x6cecfd:c.instructions+=2;goto B6cecfd;
case 0x6ced01:c.instructions+=1;goto B6ced01;
case 0x6ced07:goto L6ced07;
case 0x6ced09:c.instructions+=1;goto B6ced09;
case 0x6ced0b:goto L6ced0b;
case 0x6ced0d:c.instructions+=1;goto B6ced0d;
case 0x6ced13:goto L6ced13;
case 0x6ced15:c.instructions+=2;goto B6ced15;
case 0x6ced18:c.instructions+=1;goto B6ced18;
case 0x6ced1a:goto L6ced1a;
case 0x6ced1d:c.instructions+=6;goto B6ced1d;
case 0x6ced20:c.instructions+=5;goto B6ced20;
case 0x6ced23:c.instructions+=4;goto B6ced23;
case 0x6ced25:c.instructions+=3;goto B6ced25;
case 0x6ced27:c.instructions+=2;goto B6ced27;
case 0x6ced2a:c.instructions+=1;goto B6ced2a;
case 0x6ced2c:goto L6ced2c;
case 0x6ced2d:c.instructions+=3;goto B6ced2d;
case 0x6ced30:c.instructions+=2;goto B6ced30;
case 0x6ced33:c.instructions+=1;goto B6ced33;
case 0x6ced35:goto L6ced35;
case 0x6ced38:c.instructions+=1;goto B6ced38;
case 0x6ced3a:goto L6ced3a;
case 0x6ced41:c.instructions+=2;goto B6ced41;
case 0x6ced44:c.instructions+=1;goto B6ced44;
case 0x6ced46:goto L6ced46;
case 0x6ced49:c.instructions+=9;goto B6ced49;
case 0x6ced4a:c.instructions+=8;goto B6ced4a;
case 0x6ced4b:c.instructions+=7;goto B6ced4b;
case 0x6ced4e:c.instructions+=6;goto B6ced4e;
case 0x6ced4f:c.instructions+=5;goto B6ced4f;
case 0x6ced50:c.instructions+=4;goto B6ced50;
case 0x6ced52:c.instructions+=3;goto B6ced52;
case 0x6ced58:c.instructions+=2;goto B6ced58;
case 0x6ced5a:c.instructions+=1;goto B6ced5a;
case 0x6ced5f:goto L6ced5f;
case 0x6ced62:c.instructions+=2;goto B6ced62;
case 0x6ced64:c.instructions+=1;goto B6ced64;
case 0x6ced66:goto L6ced66;
case 0x6ced6b:c.instructions+=1;goto B6ced6b;
case 0x6ced70:goto L6ced70;
case 0x6ced72:c.instructions+=1;goto B6ced72;
case 0x6ced77:goto L6ced77;
case 0x6ced7b:c.instructions+=1;goto B6ced7b;
case 0x6ced7d:goto L6ced7d;
case 0x6ced80:c.instructions+=2;goto B6ced80;
case 0x6ced82:c.instructions+=1;goto B6ced82;
case 0x6ced88:goto L6ced88;
case 0x6ced8a:goto L6ced8a;
case 0x6ced8c:c.instructions+=1;goto B6ced8c;
case 0x6ced91:goto L6ced91;
case 0x6ced93:c.instructions+=1;goto B6ced93;
case 0x6ced95:goto L6ced95;
case 0x6ced97:c.instructions+=1;goto B6ced97;
case 0x6ced9c:goto L6ced9c;
case 0x6ced9e:c.instructions+=1;goto B6ced9e;
case 0x6ceda0:goto L6ceda0;
case 0x6ceda2:goto L6ceda2;
case 0x6ceda4:c.instructions+=1;goto B6ceda4;
case 0x6ceda6:goto L6ceda6;
case 0x6cedad:c.instructions+=1;goto B6cedad;
case 0x6cedb2:goto L6cedb2;
case 0x6cedb5:c.instructions+=4;goto B6cedb5;
case 0x6cedb7:c.instructions+=3;goto B6cedb7;
case 0x6cedbc:c.instructions+=2;goto B6cedbc;
case 0x6cedc0:c.instructions+=1;goto B6cedc0;
case 0x6cedc2:goto L6cedc2;
case 0x6cedc7:c.instructions+=1;goto B6cedc7;
case 0x6cedc9:goto L6cedc9;
case 0x6cedce:goto L6cedce;
case 0x6cedd0:c.instructions+=6;goto B6cedd0;
case 0x6cedd1:c.instructions+=5;goto B6cedd1;
case 0x6cedd4:c.instructions+=4;goto B6cedd4;
case 0x6cedd5:c.instructions+=3;goto B6cedd5;
case 0x6cedd6:c.instructions+=2;goto B6cedd6;
case 0x6cedd8:c.instructions+=1;goto B6cedd8;
case 0x6ceddd:goto L6ceddd;
case 0x6ceddf:c.instructions+=2;goto B6ceddf;
case 0x6cede2:c.instructions+=1;goto B6cede2;
case 0x6cede8:goto L6cede8;
case 0x6cedee:c.instructions+=2;goto B6cedee;
case 0x6cedf0:c.instructions+=1;goto B6cedf0;
case 0x6cedf5:goto L6cedf5;
case 0x6cedf7:c.instructions+=2;goto B6cedf7;
case 0x6cedfa:c.instructions+=1;goto B6cedfa;
case 0x6cee00:goto L6cee00;
case 0x6cee02:c.instructions+=3;goto B6cee02;
case 0x6cee04:c.instructions+=2;goto B6cee04;
case 0x6cee07:c.instructions+=1;goto B6cee07;
case 0x6cee09:goto L6cee09;
case 0x6cee0b:c.instructions+=5;goto B6cee0b;
case 0x6cee0e:c.instructions+=4;goto B6cee0e;
case 0x6cee11:c.instructions+=3;goto B6cee11;
case 0x6cee13:c.instructions+=2;goto B6cee13;
case 0x6cee16:c.instructions+=1;goto B6cee16;
case 0x6cee19:goto L6cee19;
case 0x6cee1f:c.instructions+=24;goto B6cee1f;
case 0x6cee22:c.instructions+=23;goto B6cee22;
case 0x6cee25:c.instructions+=22;goto B6cee25;
case 0x6cee28:c.instructions+=21;goto B6cee28;
case 0x6cee2b:c.instructions+=20;goto B6cee2b;
case 0x6cee2e:c.instructions+=19;goto B6cee2e;
case 0x6cee31:c.instructions+=18;goto B6cee31;
case 0x6cee38:c.instructions+=17;goto B6cee38;
case 0x6cee3b:c.instructions+=16;goto B6cee3b;
case 0x6cee3e:c.instructions+=15;goto B6cee3e;
case 0x6cee41:c.instructions+=14;goto B6cee41;
case 0x6cee43:c.instructions+=13;goto B6cee43;
case 0x6cee46:c.instructions+=12;goto B6cee46;
case 0x6cee49:c.instructions+=11;goto B6cee49;
case 0x6cee4d:c.instructions+=10;goto B6cee4d;
case 0x6cee50:c.instructions+=9;goto B6cee50;
case 0x6cee53:c.instructions+=8;goto B6cee53;
case 0x6cee56:c.instructions+=7;goto B6cee56;
case 0x6cee5a:c.instructions+=6;goto B6cee5a;
case 0x6cee5d:c.instructions+=5;goto B6cee5d;
case 0x6cee60:c.instructions+=4;goto B6cee60;
case 0x6cee61:c.instructions+=3;goto B6cee61;
case 0x6cee64:c.instructions+=2;goto B6cee64;
case 0x6cee67:c.instructions+=1;goto B6cee67;
case 0x6cee69:goto L6cee69;
case 0x6cee6d:c.instructions+=1;goto B6cee6d;
case 0x6cee6f:goto L6cee6f;
case 0x6cee75:c.instructions+=2;goto B6cee75;
case 0x6cee76:c.instructions+=1;goto B6cee76;
case 0x6cee7b:goto L6cee7b;
case 0x6cee7d:c.instructions+=2;goto B6cee7d;
case 0x6cee80:c.instructions+=1;goto B6cee80;
case 0x6cee86:goto L6cee86;
case 0x6cee8b:goto L6cee8b;
case 0x6cee8e:c.instructions+=5;goto B6cee8e;
case 0x6cee94:c.instructions+=4;goto B6cee94;
case 0x6cee95:c.instructions+=3;goto B6cee95;
case 0x6cee96:c.instructions+=2;goto B6cee96;
case 0x6cee98:c.instructions+=1;goto B6cee98;
case 0x6cee9d:goto L6cee9d;
case 0x6ceea2:goto L6ceea2;
case 0x6ceea4:c.instructions+=11;goto B6ceea4;
case 0x6ceea5:c.instructions+=10;goto B6ceea5;
case 0x6ceea7:c.instructions+=9;goto B6ceea7;
case 0x6ceeaa:c.instructions+=8;goto B6ceeaa;
case 0x6ceeab:c.instructions+=7;goto B6ceeab;
case 0x6ceead:c.instructions+=6;goto B6ceead;
case 0x6ceeb3:c.instructions+=5;goto B6ceeb3;
case 0x6ceeb5:c.instructions+=4;goto B6ceeb5;
case 0x6ceeb7:c.instructions+=3;goto B6ceeb7;
case 0x6ceebd:c.instructions+=2;goto B6ceebd;
case 0x6ceec3:c.instructions+=1;goto B6ceec3;
case 0x6ceec5:goto L6ceec5;
case 0x6ceec7:c.instructions+=2;goto B6ceec7;
case 0x6ceec8:c.instructions+=1;goto B6ceec8;
case 0x6ceecd:goto L6ceecd;
case 0x6ceed2:c.instructions+=16;goto B6ceed2;
case 0x6ceed4:c.instructions+=15;goto B6ceed4;
case 0x6ceed7:c.instructions+=14;goto B6ceed7;
case 0x6ceed8:c.instructions+=13;goto B6ceed8;
case 0x6ceeda:c.instructions+=12;goto B6ceeda;
case 0x6ceedd:c.instructions+=11;goto B6ceedd;
case 0x6ceedf:c.instructions+=10;goto B6ceedf;
case 0x6ceee1:c.instructions+=9;goto B6ceee1;
case 0x6ceee2:c.instructions+=8;goto B6ceee2;
case 0x6ceee5:c.instructions+=7;goto B6ceee5;
case 0x6ceee8:c.instructions+=6;goto B6ceee8;
case 0x6ceeeb:c.instructions+=5;goto B6ceeeb;
case 0x6ceeee:c.instructions+=4;goto B6ceeee;
case 0x6ceef1:c.instructions+=3;goto B6ceef1;
case 0x6ceef4:c.instructions+=2;goto B6ceef4;
case 0x6ceef8:c.instructions+=1;goto B6ceef8;
case 0x6ceefa:goto L6ceefa;
case 0x6ceefe:c.instructions+=3;goto B6ceefe;
case 0x6cef01:c.instructions+=2;goto B6cef01;
case 0x6cef03:c.instructions+=1;goto B6cef03;
case 0x6cef05:goto L6cef05;
case 0x6cef07:c.instructions+=5;goto B6cef07;
case 0x6cef0a:c.instructions+=4;goto B6cef0a;
case 0x6cef0d:c.instructions+=3;goto B6cef0d;
case 0x6cef10:c.instructions+=2;goto B6cef10;
case 0x6cef14:c.instructions+=1;goto B6cef14;
case 0x6cef1a:goto L6cef1a;
case 0x6cef21:c.instructions+=1;goto B6cef21;
case 0x6cef24:goto L6cef24;
case 0x6cef27:c.instructions+=4;goto B6cef27;
case 0x6cef2e:c.instructions+=3;goto B6cef2e;
case 0x6cef32:c.instructions+=2;goto B6cef32;
case 0x6cef34:c.instructions+=1;goto B6cef34;
case 0x6cef36:goto L6cef36;
case 0x6cef39:c.instructions+=2;goto B6cef39;
case 0x6cef3b:c.instructions+=1;goto B6cef3b;
case 0x6cef3d:goto L6cef3d;
case 0x6cef40:c.instructions+=7;goto B6cef40;
case 0x6cef46:c.instructions+=6;goto B6cef46;
case 0x6cef49:c.instructions+=5;goto B6cef49;
case 0x6cef4c:c.instructions+=4;goto B6cef4c;
case 0x6cef4e:c.instructions+=3;goto B6cef4e;
case 0x6cef50:c.instructions+=2;goto B6cef50;
case 0x6cef53:c.instructions+=1;goto B6cef53;
case 0x6cef59:goto L6cef59;
case 0x6cef5b:c.instructions+=3;goto B6cef5b;
case 0x6cef5e:c.instructions+=2;goto B6cef5e;
case 0x6cef62:c.instructions+=1;goto B6cef62;
case 0x6cef64:goto L6cef64;
case 0x6cef67:c.instructions+=1;goto B6cef67;
case 0x6cef69:goto L6cef69;
case 0x6cef6d:c.instructions+=1;goto B6cef6d;
case 0x6cef6f:goto L6cef6f;
case 0x6cef79:goto L6cef79;
case 0x6cef7c:c.instructions+=3;goto B6cef7c;
case 0x6cef7f:c.instructions+=2;goto B6cef7f;
case 0x6cef82:c.instructions+=1;goto B6cef82;
case 0x6cef84:goto L6cef84;
case 0x6cef8a:c.instructions+=6;goto B6cef8a;
case 0x6cef8d:c.instructions+=5;goto B6cef8d;
case 0x6cef8f:c.instructions+=4;goto B6cef8f;
case 0x6cef92:c.instructions+=3;goto B6cef92;
case 0x6cef95:c.instructions+=2;goto B6cef95;
case 0x6cef9b:c.instructions+=1;goto B6cef9b;
case 0x6cef9d:goto L6cef9d;
case 0x6cef9f:c.instructions+=9;goto B6cef9f;
case 0x6cefa0:c.instructions+=8;goto B6cefa0;
case 0x6cefa1:c.instructions+=7;goto B6cefa1;
case 0x6cefa6:c.instructions+=6;goto B6cefa6;
case 0x6cefa7:c.instructions+=5;goto B6cefa7;
case 0x6cefaa:c.instructions+=4;goto B6cefaa;
case 0x6cefab:c.instructions+=3;goto B6cefab;
case 0x6cefac:c.instructions+=2;goto B6cefac;
case 0x6cefae:c.instructions+=1;goto B6cefae;
case 0x6cefb3:goto L6cefb3;
case 0x6cefba:c.instructions+=2;goto B6cefba;
case 0x6cefbc:c.instructions+=1;goto B6cefbc;
case 0x6cefbe:goto L6cefbe;
case 0x6cefc4:c.instructions+=5;goto B6cefc4;
case 0x6cefc9:c.instructions+=4;goto B6cefc9;
case 0x6cefce:c.instructions+=3;goto B6cefce;
case 0x6cefd1:c.instructions+=2;goto B6cefd1;
case 0x6cefd2:c.instructions+=1;goto B6cefd2;
case 0x6cefd7:goto L6cefd7;
case 0x6cefda:goto L6cefda;
case 0x6cefdc:c.instructions+=1;goto B6cefdc;
case 0x6cefe1:goto L6cefe1;
case 0x6cefe7:c.instructions+=1;goto B6cefe7;
case 0x6cefed:goto L6cefed;
case 0x6cefef:c.instructions+=6;goto B6cefef;
case 0x6ceff2:c.instructions+=5;goto B6ceff2;
case 0x6ceff3:c.instructions+=4;goto B6ceff3;
case 0x6ceff5:c.instructions+=3;goto B6ceff5;
case 0x6ceffa:c.instructions+=2;goto B6ceffa;
case 0x6ceffb:c.instructions+=1;goto B6ceffb;
default:missing_instruction(c.pc);}
B6ce002:L6ce002:{c.instructions+=1;NFSU2_TR(0x6ce002);
if(r1(R+518)){{goto L6ce037;}}
}
B6ce004:L6ce004:{c.instructions+=5;NFSU2_TR(0x6ce004);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ce007:{NFSU2_TR(0x6ce007);
__builtin_memmove((R+4),(R+0),4);
}
B6ce009:{NFSU2_TR(0x6ce009);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xf0000000ull))));
}
B6ce00f:{NFSU2_TR(0x6ce00f);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x60000000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6ce015:{NFSU2_TR(0x6ce015);
if(r1(R+518)){{goto L6ce031;}}
}
B6ce017:L6ce017:{c.instructions+=3;NFSU2_TR(0x6ce017);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfff00000ull))));
}
B6ce01c:{NFSU2_TR(0x6ce01c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x10d00000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ce021:{NFSU2_TR(0x6ce021);
if(r1(R+518)){{goto L6ce031;}}
}
B6ce023:L6ce023:{c.instructions+=2;NFSU2_TR(0x6ce023);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x10e00000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ce028:{NFSU2_TR(0x6ce028);
if(r1(R+518)){{goto L6ce031;}}
}
B6ce02a:L6ce02a:{c.instructions+=2;NFSU2_TR(0x6ce02a);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))-u32(u32(0x11000000ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ce02f:{NFSU2_TR(0x6ce02f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ce037;}}
}
B6ce031:L6ce031:{c.instructions+=2;NFSU2_TR(0x6ce031);
u8 U[6];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x6eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x80ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6ce035:{NFSU2_TR(0x6ce035);
if(r1(R+518)){{goto L6ce05c;}}
}
B6ce037:L6ce037:{c.instructions+=5;NFSU2_TR(0x6ce037);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6ce03a:{NFSU2_TR(0x6ce03a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ce03d:{NFSU2_TR(0x6ce03d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6ce041:{NFSU2_TR(0x6ce041);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ce044:{NFSU2_TR(0x6ce044);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6cdf40u,6cd);}
}
B6ce04a:L6ce04a:{c.instructions+=4;NFSU2_TR(0x6ce04a);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6ce04c:{NFSU2_TR(0x6ce04c);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x15cull))));
__builtin_memmove((R+0),(U+0),4);
}
B6ce052:{NFSU2_TR(0x6ce052);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(r4(R+4))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6ce054:{NFSU2_TR(0x6ce054);
if(r1(R+518)){{goto L6ce0cc;}}
}
B6ce056:L6ce056:{c.instructions+=1;NFSU2_TR(0x6ce056);
u8 U[4];
w4(U+0,u32(0x2ull));
s4(u32(r4(R+0)),r4(U+0));
}
B6ce05c:L6ce05c:{c.instructions+=3;NFSU2_TR(0x6ce05c);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6ce05e:{NFSU2_TR(0x6ce05e);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+8))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ce061:{NFSU2_TR(0x6ce061);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6ce0c4;}}
}
B6ce063:L6ce063:{c.instructions+=27;NFSU2_TR(0x6ce063);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ce066:{NFSU2_TR(0x6ce066);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6ce069:{NFSU2_TR(0x6ce069);
__builtin_memmove((R+0),(R+8),4);
}
B6ce06b:{NFSU2_TR(0x6ce06b);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6ce06e:{NFSU2_TR(0x6ce06e);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6ce071:{NFSU2_TR(0x6ce071);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6ce074:{NFSU2_TR(0x6ce074);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6ce07a:{NFSU2_TR(0x6ce07a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ce07d:{NFSU2_TR(0x6ce07d);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffccull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+28),(U+12),4);
}
B6ce081:{NFSU2_TR(0x6ce081);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ce084:{NFSU2_TR(0x6ce084);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffacull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+28),(U+12),4);
}
B6ce088:{NFSU2_TR(0x6ce088);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ce08b:{NFSU2_TR(0x6ce08b);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffbcull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+28),(U+12),4);
}
B6ce08f:{NFSU2_TR(0x6ce08f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ce092:{NFSU2_TR(0x6ce092);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff6cull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+28),(U+12),4);
}
B6ce099:{NFSU2_TR(0x6ce099);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x14ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ce09c:{NFSU2_TR(0x6ce09c);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff9cull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+28),(U+12),4);
}
B6ce0a0:{NFSU2_TR(0x6ce0a0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ce0a3:{NFSU2_TR(0x6ce0a3);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff8cull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+28),(U+12),4);
}
B6ce0a7:{NFSU2_TR(0x6ce0a7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x3cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ce0aa:{NFSU2_TR(0x6ce0aa);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff7cull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+28),(U+12),4);
}
B6ce0b1:{NFSU2_TR(0x6ce0b1);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff5cull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B6ce0b8:{NFSU2_TR(0x6ce0b8);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6ce0b9:{NFSU2_TR(0x6ce0b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x48ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ce0bc:{NFSU2_TR(0x6ce0bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x68ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ce0bf:{NFSU2_TR(0x6ce0bf);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+8))<(r4(U+8))));
}
B6ce0c2:{NFSU2_TR(0x6ce0c2);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ce063u);}goto L6ce063;}}
}
B6ce0c4:L6ce0c4:{c.instructions+=3;NFSU2_TR(0x6ce0c4);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6ce0c6:{NFSU2_TR(0x6ce0c6);
u8 U[6];
w1(R+523,scarry<u32>(r4(R+0),u32(0x1ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6ce0c7:{NFSU2_TR(0x6ce0c7);
{goto L6ce155;}
}
B6ce0cc:L6ce0cc:{c.instructions+=3;NFSU2_TR(0x6ce0cc);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+4))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+4))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ce0cf:{NFSU2_TR(0x6ce0cf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ce0d2:{NFSU2_TR(0x6ce0d2);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6ce136;}}
}
B6ce0d4:L6ce0d4:{c.instructions+=12;NFSU2_TR(0x6ce0d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ce0d7:{NFSU2_TR(0x6ce0d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ce0da:{NFSU2_TR(0x6ce0da);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6ce0dd:{NFSU2_TR(0x6ce0dd);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ce0e0:{NFSU2_TR(0x6ce0e0);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r4(U+0))));
}
B6ce0e3:{NFSU2_TR(0x6ce0e3);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6ce0e6:{NFSU2_TR(0x6ce0e6);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6ce0e9:{NFSU2_TR(0x6ce0e9);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6ce0ec:{NFSU2_TR(0x6ce0ec);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6ce0ef:{NFSU2_TR(0x6ce0ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6ce0f2:{NFSU2_TR(0x6ce0f2);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6ce0f5:{NFSU2_TR(0x6ce0f5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ce0fc;}}
}
B6ce0f7:L6ce0f7:{c.instructions+=2;NFSU2_TR(0x6ce0f7);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ce0fa:{NFSU2_TR(0x6ce0fa);
{goto L6ce0ff;}
}
B6ce0fc:L6ce0fc:{c.instructions+=1;NFSU2_TR(0x6ce0fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x38ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ce0ff:L6ce0ff:{c.instructions+=4;NFSU2_TR(0x6ce0ff);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x80000ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ce106:{NFSU2_TR(0x6ce106);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6ce108:{NFSU2_TR(0x6ce108);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6ce10a:{NFSU2_TR(0x6ce10a);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ce119;}}
}
B6ce10c:L6ce10c:{c.instructions+=2;NFSU2_TR(0x6ce10c);
u8 U[1];
w1(U+0,u8(u32(r1(R+8))&u32(u8(0x4ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6ce10f:{NFSU2_TR(0x6ce10f);
if(r1(R+518)){{goto L6ce125;}}
}
B6ce111:L6ce111:{c.instructions+=3;NFSU2_TR(0x6ce111);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xfffffffbull))));
}
B6ce114:{NFSU2_TR(0x6ce114);
w4(R+8,u32(u32(r4(R+8))|u32(u32(0x8ull))));
}
B6ce117:{NFSU2_TR(0x6ce117);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6ce119:L6ce119:{c.instructions+=2;NFSU2_TR(0x6ce119);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x100000ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ce120:{NFSU2_TR(0x6ce120);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ce125;}}
}
B6ce122:L6ce122:{c.instructions+=1;NFSU2_TR(0x6ce122);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
w4(U+0,u32(u32(r4(U+0))|u32(u32(0x4ull))));
s4(u32(r4(R+4)),r4(U+0));
}
B6ce125:L6ce125:{c.instructions+=2;NFSU2_TR(0x6ce125);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ce126:{NFSU2_TR(0x6ce126);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ce12bull));
TAIL_STATIC(0x699821u,699);
}
B6ce12b:L6ce12b:{c.instructions+=4;NFSU2_TR(0x6ce12b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6ce12e:{NFSU2_TR(0x6ce12e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ce131:{NFSU2_TR(0x6ce131);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6ce134:{NFSU2_TR(0x6ce134);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ce0d4u);}goto L6ce0d4;}}
}
B6ce136:L6ce136:{c.instructions+=3;NFSU2_TR(0x6ce136);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ce13c:{NFSU2_TR(0x6ce13c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
w4(U+0,u32(u32(r4(U+0))&u32(u32(0x0ull))));
s4(u32(r4(R+0)),r4(U+0));
}
B6ce13f:{NFSU2_TR(0x6ce13f);
{goto L6ce153;}
}
B6ce141:L6ce141:{c.instructions+=5;NFSU2_TR(0x6ce141);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6ce147:{NFSU2_TR(0x6ce147);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6ce149:{NFSU2_TR(0x6ce149);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0xfffffull))));
}
B6ce14f:{NFSU2_TR(0x6ce14f);
w4(R+4,u32(u32(r4(R+4))|u32(r4(R+0))));
}
B6ce151:{NFSU2_TR(0x6ce151);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
s4(u32(r4(R+24)),r4(U+0));
}
B6ce153:L6ce153:{c.instructions+=1;NFSU2_TR(0x6ce153);
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
B6ce155:L6ce155:{c.instructions+=5;NFSU2_TR(0x6ce155);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6ce156:{NFSU2_TR(0x6ce156);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6ce157:{NFSU2_TR(0x6ce157);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6ce158:{NFSU2_TR(0x6ce158);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6ce159:{NFSU2_TR(0x6ce159);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6ce15c:L6ce15c:{c.instructions+=16;NFSU2_TR(0x6ce15c);
__builtin_memmove((R+28),(R+28),4);
}
B6ce15e:{NFSU2_TR(0x6ce15e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ce15f:{NFSU2_TR(0x6ce15f);
__builtin_memmove((R+20),(R+16),4);
}
B6ce161:{NFSU2_TR(0x6ce161);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ce162:{NFSU2_TR(0x6ce162);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6ce165:{NFSU2_TR(0x6ce165);
__builtin_memmove((R+24),(R+4),4);
}
B6ce167:{NFSU2_TR(0x6ce167);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ce16d:{NFSU2_TR(0x6ce16d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x15cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6ce174:{NFSU2_TR(0x6ce174);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ce176:{NFSU2_TR(0x6ce176);
w4(R+0,u32(0x80000ull));
}
B6ce17b:{NFSU2_TR(0x6ce17b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ce17c:{NFSU2_TR(0x6ce17c);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6ce17f:{NFSU2_TR(0x6ce17f);
__builtin_memmove((R+4),(R+24),4);
}
B6ce181:{NFSU2_TR(0x6ce181);
u8 U[4];
w4(U+0,u32(0xe0000ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ce186:{NFSU2_TR(0x6ce186);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ce187:{NFSU2_TR(0x6ce187);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ce18cull));
TAIL_STATIC(0x6cdc05u,6cd);
}
B6ce18c:L6ce18c:{c.instructions+=2;NFSU2_TR(0x6ce18c);
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
B6ce18e:{NFSU2_TR(0x6ce18e);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6ce197;}}
}
B6ce190:L6ce190:{c.instructions+=2;NFSU2_TR(0x6ce190);
__builtin_memmove((R+4),(R+24),4);
}
B6ce192:{NFSU2_TR(0x6ce192);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ce197ull));
TAIL_STATIC(0x6c628cu,6c6);
}
B6ce197:L6ce197:{c.instructions+=3;NFSU2_TR(0x6ce197);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6ce198:{NFSU2_TR(0x6ce198);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6ce199:{NFSU2_TR(0x6ce199);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6ce19c:L6ce19c:{c.instructions+=13;NFSU2_TR(0x6ce19c);
__builtin_memmove((R+28),(R+28),4);
}
B6ce19e:{NFSU2_TR(0x6ce19e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ce19f:{NFSU2_TR(0x6ce19f);
__builtin_memmove((R+20),(R+16),4);
}
B6ce1a1:{NFSU2_TR(0x6ce1a1);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ce1a2:{NFSU2_TR(0x6ce1a2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ce1a3:{NFSU2_TR(0x6ce1a3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ce1a4:{NFSU2_TR(0x6ce1a4);
__builtin_memmove((R+24),(R+4),4);
}
B6ce1a6:{NFSU2_TR(0x6ce1a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ce1ac:{NFSU2_TR(0x6ce1ac);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ce1ad:{NFSU2_TR(0x6ce1ad);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6ce1af:{NFSU2_TR(0x6ce1af);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ce1b2:{NFSU2_TR(0x6ce1b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ce1b5:{NFSU2_TR(0x6ce1b5);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6ce1e7;}}
}
B6ce1b7:L6ce1b7:{c.instructions+=2;NFSU2_TR(0x6ce1b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ce1ba:{NFSU2_TR(0x6ce1ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ce1bd:L6ce1bd:{c.instructions+=7;NFSU2_TR(0x6ce1bd);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+28),(U+0),4);
}
B6ce1bf:{NFSU2_TR(0x6ce1bf);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6ce1c2:{NFSU2_TR(0x6ce1c2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6ce1c5:{NFSU2_TR(0x6ce1c5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6ce1c8:{NFSU2_TR(0x6ce1c8);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+28),(U+8),4);
}
B6ce1cb:{NFSU2_TR(0x6ce1cb);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6ce1cf:{NFSU2_TR(0x6ce1cf);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ce211;}}
}
B6ce1d1:L6ce1d1:{c.instructions+=6;NFSU2_TR(0x6ce1d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6ce1d4:{NFSU2_TR(0x6ce1d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6ce1da:{NFSU2_TR(0x6ce1da);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6ce1dd:{NFSU2_TR(0x6ce1dd);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B6ce1e0:{NFSU2_TR(0x6ce1e0);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+12))<(r4(U+8))));
}
B6ce1e3:{NFSU2_TR(0x6ce1e3);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ce1bdu);}goto L6ce1bd;}}
}
B6ce1e5:L6ce1e5:{c.instructions+=1;NFSU2_TR(0x6ce1e5);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6ce1e7:L6ce1e7:{c.instructions+=10;NFSU2_TR(0x6ce1e7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ce1e8:{NFSU2_TR(0x6ce1e8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ce1e9:{NFSU2_TR(0x6ce1e9);
w4(R+4,u32(0x100000ull));
}
B6ce1ee:{NFSU2_TR(0x6ce1ee);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ce1ef:{NFSU2_TR(0x6ce1ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x15cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ce1f5:{NFSU2_TR(0x6ce1f5);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6ce1f8:{NFSU2_TR(0x6ce1f8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ce1f9:{NFSU2_TR(0x6ce1f9);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ce1fa:{NFSU2_TR(0x6ce1fa);
__builtin_memmove((R+4),(R+24),4);
}
B6ce1fc:{NFSU2_TR(0x6ce1fc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ce201ull));
TAIL_STATIC(0x6cdc05u,6cd);
}
B6ce201:L6ce201:{c.instructions+=2;NFSU2_TR(0x6ce201);
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
B6ce203:{NFSU2_TR(0x6ce203);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6ce20c;}}
}
B6ce205:L6ce205:{c.instructions+=2;NFSU2_TR(0x6ce205);
__builtin_memmove((R+4),(R+24),4);
}
B6ce207:{NFSU2_TR(0x6ce207);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ce20cull));
TAIL_STATIC(0x6c628cu,6c6);
}
B6ce20c:L6ce20c:{c.instructions+=5;NFSU2_TR(0x6ce20c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6ce20d:{NFSU2_TR(0x6ce20d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6ce20e:{NFSU2_TR(0x6ce20e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6ce20f:{NFSU2_TR(0x6ce20f);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6ce210:{NFSU2_TR(0x6ce210);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6ce211:L6ce211:{c.instructions+=3;NFSU2_TR(0x6ce211);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6ce213:{NFSU2_TR(0x6ce213);
u8 U[6];
w1(R+523,scarry<u32>(r4(R+0),u32(0x1ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6ce214:{NFSU2_TR(0x6ce214);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ce20cu);}goto L6ce20c;}
}
B6ce216:L6ce216:{c.instructions+=27;NFSU2_TR(0x6ce216);
__builtin_memmove((R+28),(R+28),4);
}
B6ce218:{NFSU2_TR(0x6ce218);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ce219:{NFSU2_TR(0x6ce219);
__builtin_memmove((R+20),(R+16),4);
}
B6ce21b:{NFSU2_TR(0x6ce21b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x2c4ull))));
}
B6ce221:{NFSU2_TR(0x6ce221);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ce222:{NFSU2_TR(0x6ce222);
__builtin_memmove((R+12),(R+4),4);
}
B6ce224:{NFSU2_TR(0x6ce224);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ce22a:{NFSU2_TR(0x6ce22a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6ce22c:{NFSU2_TR(0x6ce22c);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ce22d:{NFSU2_TR(0x6ce22d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+24),(U+0),4);
}
B6ce22f:{NFSU2_TR(0x6ce22f);
w4(R+4,u32(0xfffffull));
}
B6ce234:{NFSU2_TR(0x6ce234);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ce237:{NFSU2_TR(0x6ce237);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(r4(R+4))));
s4(u32(r4(U+0)),r4(U+4));
}
B6ce23a:{NFSU2_TR(0x6ce23a);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+4))));
}
B6ce23c:{NFSU2_TR(0x6ce23c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ce23d:{NFSU2_TR(0x6ce23d);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6ce23f:{NFSU2_TR(0x6ce23f);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ce242:{NFSU2_TR(0x6ce242);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffacull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ce245:{NFSU2_TR(0x6ce245);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ce248:{NFSU2_TR(0x6ce248);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ce24b:{NFSU2_TR(0x6ce24b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb4ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6ce252:{NFSU2_TR(0x6ce252);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb8ull))));
w4(U+4,u32(0x2ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6ce259:{NFSU2_TR(0x6ce259);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffbcull))));
w4(U+4,u32(0x3ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6ce260:{NFSU2_TR(0x6ce260);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ce263:{NFSU2_TR(0x6ce263);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ce266:{NFSU2_TR(0x6ce266);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ce269:{NFSU2_TR(0x6ce269);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6ce642;}}
}
B6ce26f:L6ce26f:{c.instructions+=3;NFSU2_TR(0x6ce26f);
w4(R+24,u32(u32(r4(R+24))&u32(u32(0xfff00000ull))));
}
B6ce275:{NFSU2_TR(0x6ce275);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x20400000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6ce27b:{NFSU2_TR(0x6ce27b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ce642;}}
}
B6ce281:L6ce281:{c.instructions+=1;NFSU2_TR(0x6ce281);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ce284:L6ce284:{c.instructions+=1;NFSU2_TR(0x6ce284);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6ce288:L6ce288:{c.instructions+=6;NFSU2_TR(0x6ce288);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6ce28a:{NFSU2_TR(0x6ce28a);
u8 U[4];
w4(U+0,u32(0x28ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ce28c:{NFSU2_TR(0x6ce28c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6ce28d:{NFSU2_TR(0x6ce28d);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B6ce290:{NFSU2_TR(0x6ce290);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff5cull))));
__builtin_memmove((R+28),(U+0),4);
}
B6ce296:{NFSU2_TR(0x6ce296);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffddcull))));
__builtin_memmove((R+28),(U+0),4);
}
B6ce29c:L6ce29c:{c.instructions+=1;NFSU2_TR(0x6ce29c);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L6ce29e;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ce29cu);}goto L6ce29c;}
}
B6ce29e:L6ce29e:{c.instructions+=3;NFSU2_TR(0x6ce29e);
u8 U[4];
w4(U+0,u32(0x28ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ce2a0:{NFSU2_TR(0x6ce2a0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6ce2a1:{NFSU2_TR(0x6ce2a1);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd3cull))));
__builtin_memmove((R+28),(U+0),4);
}
B6ce2a7:L6ce2a7:{c.instructions+=1;NFSU2_TR(0x6ce2a7);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L6ce2a9;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ce2a7u);}goto L6ce2a7;}
}
B6ce2a9:L6ce2a9:{c.instructions+=6;NFSU2_TR(0x6ce2a9);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6ce2ab:{NFSU2_TR(0x6ce2ab);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff1cull))));
__builtin_memmove((R+24),(U+0),4);
}
B6ce2b1:{NFSU2_TR(0x6ce2b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ce2b4:{NFSU2_TR(0x6ce2b4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ce2b7:{NFSU2_TR(0x6ce2b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ce2ba:{NFSU2_TR(0x6ce2ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ce2bd:L6ce2bd:{c.instructions+=2;NFSU2_TR(0x6ce2bd);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ce2c1:{NFSU2_TR(0x6ce2c1);
if(r1(R+518)){{goto L6ce2cb;}}
}
B6ce2c3:L6ce2c3:{c.instructions+=4;NFSU2_TR(0x6ce2c3);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6ce2c5:{NFSU2_TR(0x6ce2c5);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6ce2c6:{NFSU2_TR(0x6ce2c6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))-u32(r4(U+4))));
}
B6ce2c9:{NFSU2_TR(0x6ce2c9);
{goto L6ce2ce;}
}
B6ce2cb:L6ce2cb:{c.instructions+=1;NFSU2_TR(0x6ce2cb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ce2ce:L6ce2ce:{c.instructions+=9;NFSU2_TR(0x6ce2ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ce2d1:{NFSU2_TR(0x6ce2d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6ce2d4:{NFSU2_TR(0x6ce2d4);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7bd44cull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6ce2db:{NFSU2_TR(0x6ce2db);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x10ull))));
}
B6ce2de:{NFSU2_TR(0x6ce2de);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ce2e1:{NFSU2_TR(0x6ce2e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B6ce2e4:{NFSU2_TR(0x6ce2e4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6ce2e6:{NFSU2_TR(0x6ce2e6);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6ce2e9:{NFSU2_TR(0x6ce2e9);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6ce355;}}
}
B6ce2eb:L6ce2eb:{c.instructions+=3;NFSU2_TR(0x6ce2eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ce2ee:{NFSU2_TR(0x6ce2ee);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6ce2f1:{NFSU2_TR(0x6ce2f1);
if(r1(R+518)){{goto L6ce3a3;}}
}
B6ce2f7:L6ce2f7:{c.instructions+=16;NFSU2_TR(0x6ce2f7);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6ce2fa:{NFSU2_TR(0x6ce2fa);
__builtin_memmove((R+28),(R+4),4);
}
B6ce2fc:{NFSU2_TR(0x6ce2fc);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ce2ff:{NFSU2_TR(0x6ce2ff);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6ce302:{NFSU2_TR(0x6ce302);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ce304:{NFSU2_TR(0x6ce304);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x7bd458ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6ce30a:{NFSU2_TR(0x6ce30a);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff9cull))));
__builtin_memmove((R+4),(U+0),4);
}
B6ce30d:{NFSU2_TR(0x6ce30d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ce30e:{NFSU2_TR(0x6ce30e);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6ce311:{NFSU2_TR(0x6ce311);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ce312:{NFSU2_TR(0x6ce312);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6ce315:{NFSU2_TR(0x6ce315);
__builtin_memmove((R+4),(R+12),4);
}
B6ce317:{NFSU2_TR(0x6ce317);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ce318:{NFSU2_TR(0x6ce318);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ce319:{NFSU2_TR(0x6ce319);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ce31c:{NFSU2_TR(0x6ce31c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ce321ull));
TAIL_STATIC(0x6c19d8u,6c1);
}
B6ce321:L6ce321:{c.instructions+=2;NFSU2_TR(0x6ce321);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ce323:{NFSU2_TR(0x6ce323);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ce3a3;}}
}
B6ce325:L6ce325:{c.instructions+=15;NFSU2_TR(0x6ce325);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ce326:{NFSU2_TR(0x6ce326);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6ce329:{NFSU2_TR(0x6ce329);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff9cull))));
__builtin_memmove((R+0),(U+0),4);
}
B6ce32c:{NFSU2_TR(0x6ce32c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ce32d:{NFSU2_TR(0x6ce32d);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd3cull))));
__builtin_memmove((R+0),(U+0),4);
}
B6ce333:{NFSU2_TR(0x6ce333);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ce334:{NFSU2_TR(0x6ce334);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6ce337:{NFSU2_TR(0x6ce337);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ce338:{NFSU2_TR(0x6ce338);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff5cull))));
__builtin_memmove((R+0),(U+0),4);
}
B6ce33e:{NFSU2_TR(0x6ce33e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ce33f:{NFSU2_TR(0x6ce33f);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x7bd440ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6ce345:{NFSU2_TR(0x6ce345);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ce346:{NFSU2_TR(0x6ce346);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6ce349:{NFSU2_TR(0x6ce349);
__builtin_memmove((R+4),(R+12),4);
}
B6ce34b:{NFSU2_TR(0x6ce34b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ce350ull));
TAIL_STATIC(0x6c1b89u,6c1);
}
B6ce350:L6ce350:{c.instructions+=2;NFSU2_TR(0x6ce350);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ce353:{NFSU2_TR(0x6ce353);
{goto L6ce385;}
}
B6ce355:L6ce355:{c.instructions+=4;NFSU2_TR(0x6ce355);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x10ull))));
}
B6ce358:{NFSU2_TR(0x6ce358);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6ce35a:{NFSU2_TR(0x6ce35a);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6ce35d:{NFSU2_TR(0x6ce35d);
u8 U[12];
w4(U+0,u32(u32(u32(0xfffffddcull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B6ce364:L6ce364:{c.instructions+=3;NFSU2_TR(0x6ce364);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffb0ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B6ce368:{NFSU2_TR(0x6ce368);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6ce36b:{NFSU2_TR(0x6ce36b);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6ce379;}}
}
B6ce36d:L6ce36d:{c.instructions+=5;NFSU2_TR(0x6ce36d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6ce370:{NFSU2_TR(0x6ce370);
w4(R+24,u32(u32(r4(R+24))+u32(r4(R+0))));
}
B6ce372:{NFSU2_TR(0x6ce372);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6ce375:{NFSU2_TR(0x6ce375);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6ce377:{NFSU2_TR(0x6ce377);
{goto L6ce37c;}
}
B6ce379:L6ce379:{c.instructions+=1;NFSU2_TR(0x6ce379);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
w4(U+0,u32(u32(r4(U+0))|u32(u32(0xffffffffull))));
s4(u32(r4(R+4)),r4(U+0));
}
B6ce37c:L6ce37c:{c.instructions+=4;NFSU2_TR(0x6ce37c);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6ce37d:{NFSU2_TR(0x6ce37d);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B6ce380:{NFSU2_TR(0x6ce380);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(U+0))<(u32(0x4ull))));
}
B6ce383:{NFSU2_TR(0x6ce383);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ce364u);}goto L6ce364;}}
}
B6ce385:L6ce385:{c.instructions+=2;NFSU2_TR(0x6ce385);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ce389:{NFSU2_TR(0x6ce389);
if(r1(R+518)){{goto L6ce3aa;}}
}
B6ce38b:L6ce38b:{c.instructions+=6;NFSU2_TR(0x6ce38b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ce38e:{NFSU2_TR(0x6ce38e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B6ce391:{NFSU2_TR(0x6ce391);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6ce394:{NFSU2_TR(0x6ce394);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x2ull))));
}
B6ce398:{NFSU2_TR(0x6ce398);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ce39b:{NFSU2_TR(0x6ce39b);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ce2bdu);}goto L6ce2bd;}}
}
B6ce3a1:L6ce3a1:{c.instructions+=1;NFSU2_TR(0x6ce3a1);
{goto L6ce3aa;}
}
B6ce3a3:L6ce3a3:{c.instructions+=1;NFSU2_TR(0x6ce3a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6ce3aa:L6ce3aa:{c.instructions+=2;NFSU2_TR(0x6ce3aa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6ce3ae:{NFSU2_TR(0x6ce3ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6ce3b2:L6ce3b2:{c.instructions+=2;NFSU2_TR(0x6ce3b2);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ce3b6:{NFSU2_TR(0x6ce3b6);
if(r1(R+518)){{goto L6ce3c0;}}
}
B6ce3b8:L6ce3b8:{c.instructions+=4;NFSU2_TR(0x6ce3b8);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6ce3ba:{NFSU2_TR(0x6ce3ba);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6ce3bb:{NFSU2_TR(0x6ce3bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))-u32(r4(U+4))));
}
B6ce3be:{NFSU2_TR(0x6ce3be);
{goto L6ce3c3;}
}
B6ce3c0:L6ce3c0:{c.instructions+=1;NFSU2_TR(0x6ce3c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ce3c3:L6ce3c3:{c.instructions+=2;NFSU2_TR(0x6ce3c3);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7bd44cull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w1(R+512,u8((r4(U+12))<(u32(0x10ull))));
}
B6ce3cb:{NFSU2_TR(0x6ce3cb);
if(r1(R+512)){{goto L6ce430;}}
}
B6ce3cd:L6ce3cd:{c.instructions+=3;NFSU2_TR(0x6ce3cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6ce3d1:{NFSU2_TR(0x6ce3d1);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ce3d5:{NFSU2_TR(0x6ce3d5);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6ce430;}}
}
B6ce3d7:L6ce3d7:{c.instructions+=3;NFSU2_TR(0x6ce3d7);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6ce3d9:{NFSU2_TR(0x6ce3d9);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+24))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ce3dc:{NFSU2_TR(0x6ce3dc);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6ce425;}}
}
B6ce3de:L6ce3de:{c.instructions+=3;NFSU2_TR(0x6ce3de);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ce3e1:{NFSU2_TR(0x6ce3e1);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff5cull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B6ce3e8:{NFSU2_TR(0x6ce3e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6ce3eb:L6ce3eb:{c.instructions+=3;NFSU2_TR(0x6ce3eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6ce3ef:{NFSU2_TR(0x6ce3ef);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ce3f1:{NFSU2_TR(0x6ce3f1);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6ce416;}}
}
B6ce3f3:L6ce3f3:{c.instructions+=6;NFSU2_TR(0x6ce3f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ce3f6:{NFSU2_TR(0x6ce3f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ce3f9:{NFSU2_TR(0x6ce3f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ce3fc:{NFSU2_TR(0x6ce3fc);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
}
B6ce3fe:{NFSU2_TR(0x6ce3fe);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6ce401:{NFSU2_TR(0x6ce401);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ce404:L6ce404:{c.instructions+=2;NFSU2_TR(0x6ce404);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(R+8))-u32(r4(U+4))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6ce406:{NFSU2_TR(0x6ce406);
if(r1(R+518)){{goto L6ce41e;}}
}
B6ce408:L6ce408:{c.instructions+=5;NFSU2_TR(0x6ce408);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6ce40b:{NFSU2_TR(0x6ce40b);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6ce40e:{NFSU2_TR(0x6ce40e);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B6ce411:{NFSU2_TR(0x6ce411);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
}
B6ce414:{NFSU2_TR(0x6ce414);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ce404u);}goto L6ce404;}}
}
B6ce416:L6ce416:{c.instructions+=3;NFSU2_TR(0x6ce416);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6ce417:{NFSU2_TR(0x6ce417);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+24))<(r4(U+8))));
}
B6ce41a:{NFSU2_TR(0x6ce41a);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ce3ebu);}goto L6ce3eb;}}
}
B6ce41c:L6ce41c:{c.instructions+=1;NFSU2_TR(0x6ce41c);
{goto L6ce425;}
}
B6ce41e:L6ce41e:{c.instructions+=1;NFSU2_TR(0x6ce41e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6ce425:L6ce425:{c.instructions+=4;NFSU2_TR(0x6ce425);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6ce428:{NFSU2_TR(0x6ce428);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ce42b:{NFSU2_TR(0x6ce42b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6ce42e:{NFSU2_TR(0x6ce42e);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ce3d7u);}goto L6ce3d7;}}
}
B6ce430:L6ce430:{c.instructions+=5;NFSU2_TR(0x6ce430);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ce433:{NFSU2_TR(0x6ce433);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6ce436:{NFSU2_TR(0x6ce436);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B6ce439:{NFSU2_TR(0x6ce439);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x2ull))));
}
B6ce43d:{NFSU2_TR(0x6ce43d);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ce3b2u);}goto L6ce3b2;}}
}
B6ce443:L6ce443:{c.instructions+=3;NFSU2_TR(0x6ce443);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6ce445:{NFSU2_TR(0x6ce445);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ce448:{NFSU2_TR(0x6ce448);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ce5ac;}}
}
B6ce44e:L6ce44e:{c.instructions+=2;NFSU2_TR(0x6ce44e);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ce451:{NFSU2_TR(0x6ce451);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ce5ce;}}
}
B6ce457:L6ce457:{c.instructions+=3;NFSU2_TR(0x6ce457);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ce45a:{NFSU2_TR(0x6ce45a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ce45d:{NFSU2_TR(0x6ce45d);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6ce543;}}
}
B6ce463:L6ce463:{c.instructions+=7;NFSU2_TR(0x6ce463);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ce466:{NFSU2_TR(0x6ce466);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff5cull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B6ce46d:{NFSU2_TR(0x6ce46d);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ce470:{NFSU2_TR(0x6ce470);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6ce474:{NFSU2_TR(0x6ce474);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ce476:{NFSU2_TR(0x6ce476);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ce479:{NFSU2_TR(0x6ce479);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6ce534;}}
}
B6ce47f:L6ce47f:{c.instructions+=2;NFSU2_TR(0x6ce47f);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ce483:{NFSU2_TR(0x6ce483);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6ce525;}}
}
B6ce489:L6ce489:{c.instructions+=4;NFSU2_TR(0x6ce489);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ce48c:{NFSU2_TR(0x6ce48c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ce48f:{NFSU2_TR(0x6ce48f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ce492:{NFSU2_TR(0x6ce492);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ce495:L6ce495:{c.instructions+=4;NFSU2_TR(0x6ce495);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ce498:{NFSU2_TR(0x6ce498);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6ce49a:{NFSU2_TR(0x6ce49a);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ce49c:{NFSU2_TR(0x6ce49c);
if(r1(R+518)){{goto L6ce518;}}
}
B6ce49e:L6ce49e:{c.instructions+=2;NFSU2_TR(0x6ce49e);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6ce4a1:{NFSU2_TR(0x6ce4a1);
if(r1(R+518)){{goto L6ce518;}}
}
B6ce4a3:L6ce4a3:{c.instructions+=4;NFSU2_TR(0x6ce4a3);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6ce4a6:{NFSU2_TR(0x6ce4a6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6ce4aa:{NFSU2_TR(0x6ce4aa);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ce4ac:{NFSU2_TR(0x6ce4ac);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6ce4e7;}}
}
B6ce4ae:L6ce4ae:{c.instructions+=7;NFSU2_TR(0x6ce4ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ce4b1:{NFSU2_TR(0x6ce4b1);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff5cull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B6ce4b8:{NFSU2_TR(0x6ce4b8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ce4bb:{NFSU2_TR(0x6ce4bb);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ce4be:{NFSU2_TR(0x6ce4be);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B6ce4c1:{NFSU2_TR(0x6ce4c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ce4c4:{NFSU2_TR(0x6ce4c4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ce4c7:L6ce4c7:{c.instructions+=3;NFSU2_TR(0x6ce4c7);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6ce4c9:{NFSU2_TR(0x6ce4c9);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6ce4cb:{NFSU2_TR(0x6ce4cb);
if(r1(R+518)){{goto L6ce4d8;}}
}
B6ce4cd:L6ce4cd:{c.instructions+=4;NFSU2_TR(0x6ce4cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6ce4d0:{NFSU2_TR(0x6ce4d0);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6ce4d3:{NFSU2_TR(0x6ce4d3);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ce4d6:{NFSU2_TR(0x6ce4d6);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ce4df;}}
}
B6ce4d8:L6ce4d8:{c.instructions+=1;NFSU2_TR(0x6ce4d8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6ce4df:L6ce4df:{c.instructions+=3;NFSU2_TR(0x6ce4df);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B6ce4e2:{NFSU2_TR(0x6ce4e2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6ce4e5:{NFSU2_TR(0x6ce4e5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ce4c7u);}goto L6ce4c7;}}
}
B6ce4e7:L6ce4e7:{c.instructions+=2;NFSU2_TR(0x6ce4e7);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ce4ea:{NFSU2_TR(0x6ce4ea);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ce4f0;}}
}
B6ce4ec:L6ce4ec:{c.instructions+=1;NFSU2_TR(0x6ce4ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6ce4f0:L6ce4f0:{c.instructions+=2;NFSU2_TR(0x6ce4f0);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ce4f4:{NFSU2_TR(0x6ce4f4);
if(r1(R+518)){{goto L6ce518;}}
}
B6ce4f6:L6ce4f6:{c.instructions+=1;NFSU2_TR(0x6ce4f6);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6ce4f8:L6ce4f8:{c.instructions+=2;NFSU2_TR(0x6ce4f8);
u8 U[24];
w4(U+0,u32(u32(u32(0xffffff5cull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w4(U+20,u32(u32(r4(R+4))-u32(r4(U+16))));
w1(R+518,u8((r4(U+20))==(u32(0x0ull))));
}
B6ce4ff:{NFSU2_TR(0x6ce4ff);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ce505;}}
}
B6ce501:L6ce501:{c.instructions+=1;NFSU2_TR(0x6ce501);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6ce505:L6ce505:{c.instructions+=3;NFSU2_TR(0x6ce505);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6ce506:{NFSU2_TR(0x6ce506);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6ce509:{NFSU2_TR(0x6ce509);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ce4f8u);}goto L6ce4f8;}}
}
B6ce50b:L6ce50b:{c.instructions+=2;NFSU2_TR(0x6ce50b);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ce50f:{NFSU2_TR(0x6ce50f);
if(r1(R+518)){{goto L6ce518;}}
}
B6ce511:L6ce511:{c.instructions+=1;NFSU2_TR(0x6ce511);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6ce518:L6ce518:{c.instructions+=3;NFSU2_TR(0x6ce518);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6ce51c:{NFSU2_TR(0x6ce51c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6ce51f:{NFSU2_TR(0x6ce51f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ce495u);}goto L6ce495;}}
}
B6ce525:L6ce525:{c.instructions+=4;NFSU2_TR(0x6ce525);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6ce528:{NFSU2_TR(0x6ce528);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ce52b:{NFSU2_TR(0x6ce52b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6ce52e:{NFSU2_TR(0x6ce52e);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ce47fu);}goto L6ce47f;}}
}
B6ce534:L6ce534:{c.instructions+=4;NFSU2_TR(0x6ce534);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6ce537:{NFSU2_TR(0x6ce537);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ce53a:{NFSU2_TR(0x6ce53a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6ce53d:{NFSU2_TR(0x6ce53d);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ce463u);}goto L6ce463;}}
}
B6ce543:L6ce543:{c.instructions+=1;NFSU2_TR(0x6ce543);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6ce547:L6ce547:{c.instructions+=4;NFSU2_TR(0x6ce547);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ce54a:{NFSU2_TR(0x6ce54a);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffddcull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+24),(U+12),4);
}
B6ce551:{NFSU2_TR(0x6ce551);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6ce554:{NFSU2_TR(0x6ce554);
if(r1(R+518)){{goto L6ce59d;}}
}
B6ce556:L6ce556:{c.instructions+=3;NFSU2_TR(0x6ce556);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6ce558:{NFSU2_TR(0x6ce558);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ce55b:{NFSU2_TR(0x6ce55b);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6ce59d;}}
}
B6ce55d:L6ce55d:{c.instructions+=3;NFSU2_TR(0x6ce55d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ce560:{NFSU2_TR(0x6ce560);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6ce563:{NFSU2_TR(0x6ce563);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ce566:L6ce566:{c.instructions+=4;NFSU2_TR(0x6ce566);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff5cull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B6ce56d:{NFSU2_TR(0x6ce56d);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ce570:{NFSU2_TR(0x6ce570);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ce572:{NFSU2_TR(0x6ce572);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6ce597;}}
}
B6ce574:L6ce574:{c.instructions+=2;NFSU2_TR(0x6ce574);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ce577:{NFSU2_TR(0x6ce577);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ce57a:L6ce57a:{c.instructions+=3;NFSU2_TR(0x6ce57a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6ce57c:{NFSU2_TR(0x6ce57c);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6ce57e:{NFSU2_TR(0x6ce57e);
if(r1(R+518)){{goto L6ce588;}}
}
B6ce580:L6ce580:{c.instructions+=3;NFSU2_TR(0x6ce580);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ce583:{NFSU2_TR(0x6ce583);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ce586:{NFSU2_TR(0x6ce586);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ce58f;}}
}
B6ce588:L6ce588:{c.instructions+=1;NFSU2_TR(0x6ce588);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6ce58f:L6ce58f:{c.instructions+=3;NFSU2_TR(0x6ce58f);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B6ce592:{NFSU2_TR(0x6ce592);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6ce595:{NFSU2_TR(0x6ce595);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ce57au);}goto L6ce57a;}}
}
B6ce597:L6ce597:{c.instructions+=3;NFSU2_TR(0x6ce597);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6ce598:{NFSU2_TR(0x6ce598);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B6ce59b:{NFSU2_TR(0x6ce59b);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ce566u);}goto L6ce566;}}
}
B6ce59d:L6ce59d:{c.instructions+=3;NFSU2_TR(0x6ce59d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6ce5a0:{NFSU2_TR(0x6ce5a0);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x28ull))));
}
B6ce5a4:{NFSU2_TR(0x6ce5a4);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ce547u);}goto L6ce547;}}
}
B6ce5a6:L6ce5a6:{c.instructions+=2;NFSU2_TR(0x6ce5a6);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ce5aa:{NFSU2_TR(0x6ce5aa);
if(r1(R+518)){{goto L6ce5ce;}}
}
B6ce5ac:L6ce5ac:{c.instructions+=3;NFSU2_TR(0x6ce5ac);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6ce5af:{NFSU2_TR(0x6ce5af);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x2ull))));
}
B6ce5b3:{NFSU2_TR(0x6ce5b3);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ce288u);}goto L6ce288;}}
}
B6ce5b9:L6ce5b9:{c.instructions+=2;NFSU2_TR(0x6ce5b9);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ce5bd:{NFSU2_TR(0x6ce5bd);
if(r1(R+518)){{goto L6ce5ce;}}
}
B6ce5bf:L6ce5bf:{c.instructions+=3;NFSU2_TR(0x6ce5bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6ce5c2:{NFSU2_TR(0x6ce5c2);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x1ull))));
}
B6ce5c6:{NFSU2_TR(0x6ce5c6);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ce284u);}goto L6ce284;}}
}
B6ce5cc:L6ce5cc:{c.instructions+=1;NFSU2_TR(0x6ce5cc);
{goto L6ce630;}
}
B6ce5ce:L6ce5ce:{c.instructions+=7;NFSU2_TR(0x6ce5ce);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ce5d1:{NFSU2_TR(0x6ce5d1);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6ce5d4:{NFSU2_TR(0x6ce5d4);
__builtin_memmove((R+4),(R+0),4);
}
B6ce5d6:{NFSU2_TR(0x6ce5d6);
__builtin_memmove((R+8),(R+4),4);
}
B6ce5d8:{NFSU2_TR(0x6ce5d8);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6ce5db:{NFSU2_TR(0x6ce5db);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff5cull))));
__builtin_memmove((R+24),(U+0),4);
}
B6ce5e1:{NFSU2_TR(0x6ce5e1);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff1cull))));
__builtin_memmove((R+28),(U+0),4);
}
B6ce5e7:L6ce5e7:{c.instructions+=1;NFSU2_TR(0x6ce5e7);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6ce5e9;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ce5e7u);}goto L6ce5e7;}
}
B6ce5e9:L6ce5e9:{c.instructions+=2;NFSU2_TR(0x6ce5e9);
__builtin_memmove((R+4),(R+8),4);
}
B6ce5eb:{NFSU2_TR(0x6ce5eb);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6ce5ee:L6ce5ee:{c.instructions+=1;NFSU2_TR(0x6ce5ee);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6ce5f0;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ce5eeu);}goto L6ce5ee;}
}
B6ce5f0:L6ce5f0:{c.instructions+=6;NFSU2_TR(0x6ce5f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ce5f3:{NFSU2_TR(0x6ce5f3);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff1cull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6ce5fa:{NFSU2_TR(0x6ce5fa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ce5fd:{NFSU2_TR(0x6ce5fd);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6ce5fe:{NFSU2_TR(0x6ce5fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ce601:{NFSU2_TR(0x6ce601);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6ce603:L6ce603:{c.instructions+=3;NFSU2_TR(0x6ce603);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffddcull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B6ce60a:{NFSU2_TR(0x6ce60a);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6ce60d:{NFSU2_TR(0x6ce60d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ce61b;}}
}
B6ce60f:L6ce60f:{c.instructions+=3;NFSU2_TR(0x6ce60f);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffd3cull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B6ce616:{NFSU2_TR(0x6ce616);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6ce619:{NFSU2_TR(0x6ce619);
if(r1(R+518)){{goto L6ce622;}}
}
B6ce61b:L6ce61b:{c.instructions+=1;NFSU2_TR(0x6ce61b);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffe7cull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6ce622:L6ce622:{c.instructions+=3;NFSU2_TR(0x6ce622);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B6ce625:{NFSU2_TR(0x6ce625);
w1(R+512,u8((r4(R+0))<(u32(0xa0ull))));
}
B6ce62a:{NFSU2_TR(0x6ce62a);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ce603u);}goto L6ce603;}}
}
B6ce62c:L6ce62c:{c.instructions+=1;NFSU2_TR(0x6ce62c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6ce630:L6ce630:{c.instructions+=2;NFSU2_TR(0x6ce630);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ce634:{NFSU2_TR(0x6ce634);
if(r1(R+518)){{goto L6ced8a;}}
}
B6ce63a:L6ce63a:{c.instructions+=2;NFSU2_TR(0x6ce63a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ce63d:{NFSU2_TR(0x6ce63d);
w4(R+4,u32(0xfffffull));
}
B6ce642:L6ce642:{c.instructions+=7;NFSU2_TR(0x6ce642);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ce648:{NFSU2_TR(0x6ce648);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ce64b:{NFSU2_TR(0x6ce64b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6ce64d:{NFSU2_TR(0x6ce64d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ce650:{NFSU2_TR(0x6ce650);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(r4(R+4))));
s4(u32(r4(U+0)),r4(U+4));
}
B6ce653:{NFSU2_TR(0x6ce653);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ce656:{NFSU2_TR(0x6ce656);
u8 U[2];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
w1(U+1,u8(!(r1(U+0))));
if(r1(U+1)){{goto L6ce666;}}
}
B6ce658:L6ce658:{c.instructions+=3;NFSU2_TR(0x6ce658);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xfff00000ull))));
}
B6ce65e:{NFSU2_TR(0x6ce65e);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x20400000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6ce664:{NFSU2_TR(0x6ce664);
if(r1(R+518)){{goto L6ce66e;}}
}
B6ce666:L6ce666:{c.instructions+=3;NFSU2_TR(0x6ce666);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6ce668:{NFSU2_TR(0x6ce668);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6ce669:{NFSU2_TR(0x6ce669);
{goto L6cea32;}
}
B6ce66e:L6ce66e:{c.instructions+=1;NFSU2_TR(0x6ce66e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6ce672:L6ce672:{c.instructions+=1;NFSU2_TR(0x6ce672);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6ce676:L6ce676:{c.instructions+=7;NFSU2_TR(0x6ce676);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ce679:{NFSU2_TR(0x6ce679);
__builtin_memmove((R+4),(R+8),4);
}
B6ce67b:{NFSU2_TR(0x6ce67b);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6ce67e:{NFSU2_TR(0x6ce67e);
__builtin_memmove((R+0),(R+4),4);
}
B6ce680:{NFSU2_TR(0x6ce680);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6ce683:{NFSU2_TR(0x6ce683);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff1cull))));
__builtin_memmove((R+24),(U+0),4);
}
B6ce689:{NFSU2_TR(0x6ce689);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff5cull))));
__builtin_memmove((R+28),(U+0),4);
}
B6ce68f:L6ce68f:{c.instructions+=1;NFSU2_TR(0x6ce68f);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6ce691;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ce68fu);}goto L6ce68f;}
}
B6ce691:L6ce691:{c.instructions+=2;NFSU2_TR(0x6ce691);
__builtin_memmove((R+4),(R+0),4);
}
B6ce693:{NFSU2_TR(0x6ce693);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6ce696:L6ce696:{c.instructions+=1;NFSU2_TR(0x6ce696);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6ce698;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ce696u);}goto L6ce696;}
}
B6ce698:L6ce698:{c.instructions+=4;NFSU2_TR(0x6ce698);
u8 U[4];
w4(U+0,u32(0x28ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ce69a:{NFSU2_TR(0x6ce69a);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6ce69b:{NFSU2_TR(0x6ce69b);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0xffffffffull))));
}
B6ce69e:{NFSU2_TR(0x6ce69e);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffddcull))));
__builtin_memmove((R+28),(U+0),4);
}
B6ce6a4:L6ce6a4:{c.instructions+=1;NFSU2_TR(0x6ce6a4);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L6ce6a6;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ce6a4u);}goto L6ce6a4;}
}
B6ce6a6:L6ce6a6:{c.instructions+=3;NFSU2_TR(0x6ce6a6);
u8 U[4];
w4(U+0,u32(0x28ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ce6a8:{NFSU2_TR(0x6ce6a8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6ce6a9:{NFSU2_TR(0x6ce6a9);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd3cull))));
__builtin_memmove((R+28),(U+0),4);
}
B6ce6af:L6ce6af:{c.instructions+=1;NFSU2_TR(0x6ce6af);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L6ce6b1;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ce6afu);}goto L6ce6af;}
}
B6ce6b1:L6ce6b1:{c.instructions+=5;NFSU2_TR(0x6ce6b1);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6ce6b3:{NFSU2_TR(0x6ce6b3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ce6b6:{NFSU2_TR(0x6ce6b6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ce6b9:{NFSU2_TR(0x6ce6b9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ce6bc:{NFSU2_TR(0x6ce6bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ce6bf:L6ce6bf:{c.instructions+=2;NFSU2_TR(0x6ce6bf);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ce6c3:{NFSU2_TR(0x6ce6c3);
if(r1(R+518)){{goto L6ce6cd;}}
}
B6ce6c5:L6ce6c5:{c.instructions+=4;NFSU2_TR(0x6ce6c5);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6ce6c7:{NFSU2_TR(0x6ce6c7);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6ce6c8:{NFSU2_TR(0x6ce6c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))-u32(r4(U+4))));
}
B6ce6cb:{NFSU2_TR(0x6ce6cb);
{goto L6ce6d0;}
}
B6ce6cd:L6ce6cd:{c.instructions+=1;NFSU2_TR(0x6ce6cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ce6d0:L6ce6d0:{c.instructions+=9;NFSU2_TR(0x6ce6d0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ce6d3:{NFSU2_TR(0x6ce6d3);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6ce6d6:{NFSU2_TR(0x6ce6d6);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7bd4acull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6ce6dd:{NFSU2_TR(0x6ce6dd);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x10ull))));
}
B6ce6e0:{NFSU2_TR(0x6ce6e0);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ce6e3:{NFSU2_TR(0x6ce6e3);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+24),(U+4),4);
}
B6ce6e6:{NFSU2_TR(0x6ce6e6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6ce6e8:{NFSU2_TR(0x6ce6e8);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6ce6eb:{NFSU2_TR(0x6ce6eb);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6ce757;}}
}
B6ce6ed:L6ce6ed:{c.instructions+=3;NFSU2_TR(0x6ce6ed);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x48ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ce6f0:{NFSU2_TR(0x6ce6f0);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6ce6f3:{NFSU2_TR(0x6ce6f3);
if(r1(R+518)){{goto L6ce7a5;}}
}
B6ce6f9:L6ce6f9:{c.instructions+=16;NFSU2_TR(0x6ce6f9);
u8 U[4];
w4(U+0,u32(u32(u32(0x5ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6ce6fc:{NFSU2_TR(0x6ce6fc);
__builtin_memmove((R+28),(R+4),4);
}
B6ce6fe:{NFSU2_TR(0x6ce6fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ce701:{NFSU2_TR(0x6ce701);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6ce704:{NFSU2_TR(0x6ce704);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ce706:{NFSU2_TR(0x6ce706);
u8 U[12];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x7bd4b8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6ce70c:{NFSU2_TR(0x6ce70c);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff9cull))));
__builtin_memmove((R+4),(U+0),4);
}
B6ce70f:{NFSU2_TR(0x6ce70f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ce710:{NFSU2_TR(0x6ce710);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6ce713:{NFSU2_TR(0x6ce713);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ce714:{NFSU2_TR(0x6ce714);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6ce717:{NFSU2_TR(0x6ce717);
__builtin_memmove((R+4),(R+12),4);
}
B6ce719:{NFSU2_TR(0x6ce719);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ce71a:{NFSU2_TR(0x6ce71a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ce71b:{NFSU2_TR(0x6ce71b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ce71e:{NFSU2_TR(0x6ce71e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ce723ull));
TAIL_STATIC(0x6c19d8u,6c1);
}
B6ce723:L6ce723:{c.instructions+=2;NFSU2_TR(0x6ce723);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ce725:{NFSU2_TR(0x6ce725);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ce7a5;}}
}
B6ce727:L6ce727:{c.instructions+=15;NFSU2_TR(0x6ce727);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ce728:{NFSU2_TR(0x6ce728);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6ce72b:{NFSU2_TR(0x6ce72b);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff9cull))));
__builtin_memmove((R+0),(U+0),4);
}
B6ce72e:{NFSU2_TR(0x6ce72e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ce72f:{NFSU2_TR(0x6ce72f);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffd3cull))));
__builtin_memmove((R+0),(U+0),4);
}
B6ce735:{NFSU2_TR(0x6ce735);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ce736:{NFSU2_TR(0x6ce736);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6ce739:{NFSU2_TR(0x6ce739);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ce73a:{NFSU2_TR(0x6ce73a);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff5cull))));
__builtin_memmove((R+0),(U+0),4);
}
B6ce740:{NFSU2_TR(0x6ce740);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ce741:{NFSU2_TR(0x6ce741);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x7bd4a0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6ce747:{NFSU2_TR(0x6ce747);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ce748:{NFSU2_TR(0x6ce748);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6ce74b:{NFSU2_TR(0x6ce74b);
__builtin_memmove((R+4),(R+12),4);
}
B6ce74d:{NFSU2_TR(0x6ce74d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ce752ull));
TAIL_STATIC(0x6c1b89u,6c1);
}
B6ce752:L6ce752:{c.instructions+=2;NFSU2_TR(0x6ce752);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ce755:{NFSU2_TR(0x6ce755);
{goto L6ce787;}
}
B6ce757:L6ce757:{c.instructions+=4;NFSU2_TR(0x6ce757);
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x10ull))));
}
B6ce75a:{NFSU2_TR(0x6ce75a);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6ce75c:{NFSU2_TR(0x6ce75c);
u8 U[4];
w4(U+0,u32(u32(u32(0x4ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6ce75f:{NFSU2_TR(0x6ce75f);
u8 U[12];
w4(U+0,u32(u32(u32(0xfffffddcull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B6ce766:L6ce766:{c.instructions+=3;NFSU2_TR(0x6ce766);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffffb0ull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B6ce76a:{NFSU2_TR(0x6ce76a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6ce76d:{NFSU2_TR(0x6ce76d);
u8 U[1];
w1(U+0,u8(!(r1(R+512))));
if(r1(U+0)){{goto L6ce77b;}}
}
B6ce76f:L6ce76f:{c.instructions+=5;NFSU2_TR(0x6ce76f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6ce772:{NFSU2_TR(0x6ce772);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
}
B6ce774:{NFSU2_TR(0x6ce774);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6ce777:{NFSU2_TR(0x6ce777);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+4)),r4(U+0));
}
B6ce779:{NFSU2_TR(0x6ce779);
{goto L6ce77e;}
}
B6ce77b:L6ce77b:{c.instructions+=1;NFSU2_TR(0x6ce77b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
w4(U+0,u32(u32(r4(U+0))|u32(u32(0xffffffffull))));
s4(u32(r4(R+4)),r4(U+0));
}
B6ce77e:L6ce77e:{c.instructions+=4;NFSU2_TR(0x6ce77e);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x1ull))));
}
B6ce77f:{NFSU2_TR(0x6ce77f);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B6ce782:{NFSU2_TR(0x6ce782);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w1(R+512,u8((r4(U+0))<(u32(0x4ull))));
}
B6ce785:{NFSU2_TR(0x6ce785);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ce766u);}goto L6ce766;}}
}
B6ce787:L6ce787:{c.instructions+=2;NFSU2_TR(0x6ce787);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x1ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ce78b:{NFSU2_TR(0x6ce78b);
if(r1(R+518)){{goto L6ce7ac;}}
}
B6ce78d:L6ce78d:{c.instructions+=6;NFSU2_TR(0x6ce78d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ce790:{NFSU2_TR(0x6ce790);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+0,u32(u32(r4(R+0))+u32(r4(U+4))));
}
B6ce793:{NFSU2_TR(0x6ce793);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6ce796:{NFSU2_TR(0x6ce796);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x2ull))));
}
B6ce79a:{NFSU2_TR(0x6ce79a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ce79d:{NFSU2_TR(0x6ce79d);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ce6bfu);}goto L6ce6bf;}}
}
B6ce7a3:L6ce7a3:{c.instructions+=1;NFSU2_TR(0x6ce7a3);
{goto L6ce7ac;}
}
B6ce7a5:L6ce7a5:{c.instructions+=1;NFSU2_TR(0x6ce7a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6ce7ac:L6ce7ac:{c.instructions+=3;NFSU2_TR(0x6ce7ac);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6ce7ae:{NFSU2_TR(0x6ce7ae);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ce7b1:{NFSU2_TR(0x6ce7b1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ce7b4:L6ce7b4:{c.instructions+=2;NFSU2_TR(0x6ce7b4);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ce7b7:{NFSU2_TR(0x6ce7b7);
if(r1(R+518)){{goto L6ce7c1;}}
}
B6ce7b9:L6ce7b9:{c.instructions+=4;NFSU2_TR(0x6ce7b9);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6ce7bb:{NFSU2_TR(0x6ce7bb);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6ce7bc:{NFSU2_TR(0x6ce7bc);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(R+4,u32(u32(r4(R+4))-u32(r4(U+4))));
}
B6ce7bf:{NFSU2_TR(0x6ce7bf);
{goto L6ce7c4;}
}
B6ce7c1:L6ce7c1:{c.instructions+=1;NFSU2_TR(0x6ce7c1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ce7c4:L6ce7c4:{c.instructions+=2;NFSU2_TR(0x6ce7c4);
u8 U[16];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x7bd4acull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((U+12),(U+8),4);
w1(R+512,u8((r4(U+12))<(u32(0x10ull))));
}
B6ce7cc:{NFSU2_TR(0x6ce7cc);
if(r1(R+512)){{goto L6ce82f;}}
}
B6ce7ce:L6ce7ce:{c.instructions+=3;NFSU2_TR(0x6ce7ce);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+24))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ce7d1:{NFSU2_TR(0x6ce7d1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ce7d4:{NFSU2_TR(0x6ce7d4);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6ce82f;}}
}
B6ce7d6:L6ce7d6:{c.instructions+=2;NFSU2_TR(0x6ce7d6);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+24))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ce7d9:{NFSU2_TR(0x6ce7d9);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6ce822;}}
}
B6ce7db:L6ce7db:{c.instructions+=3;NFSU2_TR(0x6ce7db);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ce7de:{NFSU2_TR(0x6ce7de);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff5cull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B6ce7e5:{NFSU2_TR(0x6ce7e5);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6ce7e8:L6ce7e8:{c.instructions+=3;NFSU2_TR(0x6ce7e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6ce7ec:{NFSU2_TR(0x6ce7ec);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ce7ee:{NFSU2_TR(0x6ce7ee);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6ce813;}}
}
B6ce7f0:L6ce7f0:{c.instructions+=6;NFSU2_TR(0x6ce7f0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ce7f3:{NFSU2_TR(0x6ce7f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ce7f6:{NFSU2_TR(0x6ce7f6);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ce7f9:{NFSU2_TR(0x6ce7f9);
w4(R+0,u32(u32(r4(R+0))+u32(r4(R+24))));
}
B6ce7fb:{NFSU2_TR(0x6ce7fb);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6ce7fe:{NFSU2_TR(0x6ce7fe);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ce801:L6ce801:{c.instructions+=2;NFSU2_TR(0x6ce801);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(R+8))-u32(r4(U+4))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6ce803:{NFSU2_TR(0x6ce803);
if(r1(R+518)){{goto L6ce81b;}}
}
B6ce805:L6ce805:{c.instructions+=5;NFSU2_TR(0x6ce805);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6ce808:{NFSU2_TR(0x6ce808);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6ce80b:{NFSU2_TR(0x6ce80b);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B6ce80e:{NFSU2_TR(0x6ce80e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
}
B6ce811:{NFSU2_TR(0x6ce811);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ce801u);}goto L6ce801;}}
}
B6ce813:L6ce813:{c.instructions+=3;NFSU2_TR(0x6ce813);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6ce814:{NFSU2_TR(0x6ce814);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+24))<(r4(U+8))));
}
B6ce817:{NFSU2_TR(0x6ce817);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ce7e8u);}goto L6ce7e8;}}
}
B6ce819:L6ce819:{c.instructions+=1;NFSU2_TR(0x6ce819);
{goto L6ce822;}
}
B6ce81b:L6ce81b:{c.instructions+=1;NFSU2_TR(0x6ce81b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6ce822:L6ce822:{c.instructions+=5;NFSU2_TR(0x6ce822);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6ce825:{NFSU2_TR(0x6ce825);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ce828:{NFSU2_TR(0x6ce828);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6ce82a:{NFSU2_TR(0x6ce82a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6ce82d:{NFSU2_TR(0x6ce82d);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ce7d6u);}goto L6ce7d6;}}
}
B6ce82f:L6ce82f:{c.instructions+=5;NFSU2_TR(0x6ce82f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffdcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ce832:{NFSU2_TR(0x6ce832);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6ce835:{NFSU2_TR(0x6ce835);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(r4(R+0))));
s4(u32(r4(U+0)),r4(U+4));
}
B6ce838:{NFSU2_TR(0x6ce838);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x2ull))));
}
B6ce83c:{NFSU2_TR(0x6ce83c);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ce7b4u);}goto L6ce7b4;}}
}
B6ce842:L6ce842:{c.instructions+=2;NFSU2_TR(0x6ce842);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ce845:{NFSU2_TR(0x6ce845);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ce9ab;}}
}
B6ce84b:L6ce84b:{c.instructions+=3;NFSU2_TR(0x6ce84b);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6ce84d:{NFSU2_TR(0x6ce84d);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ce850:{NFSU2_TR(0x6ce850);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ce9cd;}}
}
B6ce856:L6ce856:{c.instructions+=3;NFSU2_TR(0x6ce856);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+0))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+0))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ce859:{NFSU2_TR(0x6ce859);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ce85c:{NFSU2_TR(0x6ce85c);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6ce942;}}
}
B6ce862:L6ce862:{c.instructions+=7;NFSU2_TR(0x6ce862);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ce865:{NFSU2_TR(0x6ce865);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff5cull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B6ce86c:{NFSU2_TR(0x6ce86c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ce86f:{NFSU2_TR(0x6ce86f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6ce873:{NFSU2_TR(0x6ce873);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ce875:{NFSU2_TR(0x6ce875);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ce878:{NFSU2_TR(0x6ce878);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6ce933;}}
}
B6ce87e:L6ce87e:{c.instructions+=2;NFSU2_TR(0x6ce87e);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ce882:{NFSU2_TR(0x6ce882);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6ce924;}}
}
B6ce888:L6ce888:{c.instructions+=4;NFSU2_TR(0x6ce888);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ce88b:{NFSU2_TR(0x6ce88b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ce88e:{NFSU2_TR(0x6ce88e);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ce891:{NFSU2_TR(0x6ce891);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ce894:L6ce894:{c.instructions+=4;NFSU2_TR(0x6ce894);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ce897:{NFSU2_TR(0x6ce897);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+4),(U+0),4);
}
B6ce899:{NFSU2_TR(0x6ce899);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ce89b:{NFSU2_TR(0x6ce89b);
if(r1(R+518)){{goto L6ce917;}}
}
B6ce89d:L6ce89d:{c.instructions+=2;NFSU2_TR(0x6ce89d);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6ce8a0:{NFSU2_TR(0x6ce8a0);
if(r1(R+518)){{goto L6ce917;}}
}
B6ce8a2:L6ce8a2:{c.instructions+=4;NFSU2_TR(0x6ce8a2);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6ce8a5:{NFSU2_TR(0x6ce8a5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6ce8a9:{NFSU2_TR(0x6ce8a9);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ce8ab:{NFSU2_TR(0x6ce8ab);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6ce8e6;}}
}
B6ce8ad:L6ce8ad:{c.instructions+=7;NFSU2_TR(0x6ce8ad);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ce8b0:{NFSU2_TR(0x6ce8b0);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff5cull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B6ce8b7:{NFSU2_TR(0x6ce8b7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ce8ba:{NFSU2_TR(0x6ce8ba);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ce8bd:{NFSU2_TR(0x6ce8bd);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B6ce8c0:{NFSU2_TR(0x6ce8c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ce8c3:{NFSU2_TR(0x6ce8c3);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ce8c6:L6ce8c6:{c.instructions+=3;NFSU2_TR(0x6ce8c6);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6ce8c8:{NFSU2_TR(0x6ce8c8);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6ce8ca:{NFSU2_TR(0x6ce8ca);
if(r1(R+518)){{goto L6ce8d7;}}
}
B6ce8cc:L6ce8cc:{c.instructions+=4;NFSU2_TR(0x6ce8cc);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6ce8cf:{NFSU2_TR(0x6ce8cf);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6ce8d2:{NFSU2_TR(0x6ce8d2);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ce8d5:{NFSU2_TR(0x6ce8d5);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ce8de;}}
}
B6ce8d7:L6ce8d7:{c.instructions+=1;NFSU2_TR(0x6ce8d7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6ce8de:L6ce8de:{c.instructions+=3;NFSU2_TR(0x6ce8de);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B6ce8e1:{NFSU2_TR(0x6ce8e1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6ce8e4:{NFSU2_TR(0x6ce8e4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ce8c6u);}goto L6ce8c6;}}
}
B6ce8e6:L6ce8e6:{c.instructions+=2;NFSU2_TR(0x6ce8e6);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ce8e9:{NFSU2_TR(0x6ce8e9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ce8ef;}}
}
B6ce8eb:L6ce8eb:{c.instructions+=1;NFSU2_TR(0x6ce8eb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6ce8ef:L6ce8ef:{c.instructions+=2;NFSU2_TR(0x6ce8ef);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ce8f3:{NFSU2_TR(0x6ce8f3);
if(r1(R+518)){{goto L6ce917;}}
}
B6ce8f5:L6ce8f5:{c.instructions+=1;NFSU2_TR(0x6ce8f5);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6ce8f7:L6ce8f7:{c.instructions+=2;NFSU2_TR(0x6ce8f7);
u8 U[24];
w4(U+0,u32(u32(u32(0xffffff5cull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w4(U+20,u32(u32(r4(R+4))-u32(r4(U+16))));
w1(R+518,u8((r4(U+20))==(u32(0x0ull))));
}
B6ce8fe:{NFSU2_TR(0x6ce8fe);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ce904;}}
}
B6ce900:L6ce900:{c.instructions+=1;NFSU2_TR(0x6ce900);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6ce904:L6ce904:{c.instructions+=3;NFSU2_TR(0x6ce904);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6ce905:{NFSU2_TR(0x6ce905);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6ce908:{NFSU2_TR(0x6ce908);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ce8f7u);}goto L6ce8f7;}}
}
B6ce90a:L6ce90a:{c.instructions+=2;NFSU2_TR(0x6ce90a);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ce90e:{NFSU2_TR(0x6ce90e);
if(r1(R+518)){{goto L6ce917;}}
}
B6ce910:L6ce910:{c.instructions+=1;NFSU2_TR(0x6ce910);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6ce917:L6ce917:{c.instructions+=3;NFSU2_TR(0x6ce917);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6ce91b:{NFSU2_TR(0x6ce91b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6ce91e:{NFSU2_TR(0x6ce91e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ce894u);}goto L6ce894;}}
}
B6ce924:L6ce924:{c.instructions+=4;NFSU2_TR(0x6ce924);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6ce927:{NFSU2_TR(0x6ce927);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ce92a:{NFSU2_TR(0x6ce92a);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6ce92d:{NFSU2_TR(0x6ce92d);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ce87eu);}goto L6ce87e;}}
}
B6ce933:L6ce933:{c.instructions+=4;NFSU2_TR(0x6ce933);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6ce936:{NFSU2_TR(0x6ce936);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ce939:{NFSU2_TR(0x6ce939);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6ce93c:{NFSU2_TR(0x6ce93c);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ce862u);}goto L6ce862;}}
}
B6ce942:L6ce942:{c.instructions+=1;NFSU2_TR(0x6ce942);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6ce946:L6ce946:{c.instructions+=4;NFSU2_TR(0x6ce946);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ce949:{NFSU2_TR(0x6ce949);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffddcull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+24),(U+12),4);
}
B6ce950:{NFSU2_TR(0x6ce950);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6ce953:{NFSU2_TR(0x6ce953);
if(r1(R+518)){{goto L6ce99c;}}
}
B6ce955:L6ce955:{c.instructions+=3;NFSU2_TR(0x6ce955);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6ce957:{NFSU2_TR(0x6ce957);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+28))));
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+28))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ce95a:{NFSU2_TR(0x6ce95a);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6ce99c;}}
}
B6ce95c:L6ce95c:{c.instructions+=3;NFSU2_TR(0x6ce95c);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ce95f:{NFSU2_TR(0x6ce95f);
u8 U[12];
w4(U+0,u32(u32(r4(R+24))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6ce962:{NFSU2_TR(0x6ce962);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ce965:L6ce965:{c.instructions+=4;NFSU2_TR(0x6ce965);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff5cull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+28))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B6ce96c:{NFSU2_TR(0x6ce96c);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ce96f:{NFSU2_TR(0x6ce96f);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ce971:{NFSU2_TR(0x6ce971);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6ce996;}}
}
B6ce973:L6ce973:{c.instructions+=2;NFSU2_TR(0x6ce973);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ce976:{NFSU2_TR(0x6ce976);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ce979:L6ce979:{c.instructions+=3;NFSU2_TR(0x6ce979);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6ce97b:{NFSU2_TR(0x6ce97b);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6ce97d:{NFSU2_TR(0x6ce97d);
if(r1(R+518)){{goto L6ce987;}}
}
B6ce97f:L6ce97f:{c.instructions+=3;NFSU2_TR(0x6ce97f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ce982:{NFSU2_TR(0x6ce982);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ce985:{NFSU2_TR(0x6ce985);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ce98e;}}
}
B6ce987:L6ce987:{c.instructions+=1;NFSU2_TR(0x6ce987);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6ce98e:L6ce98e:{c.instructions+=3;NFSU2_TR(0x6ce98e);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B6ce991:{NFSU2_TR(0x6ce991);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))-u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6ce994:{NFSU2_TR(0x6ce994);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ce979u);}goto L6ce979;}}
}
B6ce996:L6ce996:{c.instructions+=3;NFSU2_TR(0x6ce996);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B6ce997:{NFSU2_TR(0x6ce997);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+28))<(r4(U+8))));
}
B6ce99a:{NFSU2_TR(0x6ce99a);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ce965u);}goto L6ce965;}}
}
B6ce99c:L6ce99c:{c.instructions+=3;NFSU2_TR(0x6ce99c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6ce99f:{NFSU2_TR(0x6ce99f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x28ull))));
}
B6ce9a3:{NFSU2_TR(0x6ce9a3);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ce946u);}goto L6ce946;}}
}
B6ce9a5:L6ce9a5:{c.instructions+=2;NFSU2_TR(0x6ce9a5);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ce9a9:{NFSU2_TR(0x6ce9a9);
if(r1(R+518)){{goto L6ce9cd;}}
}
B6ce9ab:L6ce9ab:{c.instructions+=3;NFSU2_TR(0x6ce9ab);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6ce9ae:{NFSU2_TR(0x6ce9ae);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffecull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x2ull))));
}
B6ce9b2:{NFSU2_TR(0x6ce9b2);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ce676u);}goto L6ce676;}}
}
B6ce9b8:L6ce9b8:{c.instructions+=2;NFSU2_TR(0x6ce9b8);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ce9bc:{NFSU2_TR(0x6ce9bc);
if(r1(R+518)){{goto L6ce9cd;}}
}
B6ce9be:L6ce9be:{c.instructions+=3;NFSU2_TR(0x6ce9be);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6ce9c1:{NFSU2_TR(0x6ce9c1);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffccull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x1ull))));
}
B6ce9c5:{NFSU2_TR(0x6ce9c5);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ce672u);}goto L6ce672;}}
}
B6ce9cb:L6ce9cb:{c.instructions+=1;NFSU2_TR(0x6ce9cb);
{goto L6cea2f;}
}
B6ce9cd:L6ce9cd:{c.instructions+=7;NFSU2_TR(0x6ce9cd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ce9d0:{NFSU2_TR(0x6ce9d0);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6ce9d3:{NFSU2_TR(0x6ce9d3);
__builtin_memmove((R+4),(R+0),4);
}
B6ce9d5:{NFSU2_TR(0x6ce9d5);
__builtin_memmove((R+8),(R+4),4);
}
B6ce9d7:{NFSU2_TR(0x6ce9d7);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shr<u32>(r4(R+4),u64(r4(U+0))));
}
B6ce9da:{NFSU2_TR(0x6ce9da);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff5cull))));
__builtin_memmove((R+24),(U+0),4);
}
B6ce9e0:{NFSU2_TR(0x6ce9e0);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff1cull))));
__builtin_memmove((R+28),(U+0),4);
}
B6ce9e6:L6ce9e6:{c.instructions+=1;NFSU2_TR(0x6ce9e6);
u8 U[41];
w1(U+40,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+40)){{goto L6ce9e8;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ce9e6u);}goto L6ce9e6;}
}
B6ce9e8:L6ce9e8:{c.instructions+=2;NFSU2_TR(0x6ce9e8);
__builtin_memmove((R+4),(R+8),4);
}
B6ce9ea:{NFSU2_TR(0x6ce9ea);
w4(R+4,u32(u32(r4(R+4))&u32(u32(0x3ull))));
}
B6ce9ed:L6ce9ed:{c.instructions+=1;NFSU2_TR(0x6ce9ed);
u8 U[35];
w1(U+34,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+34)){{goto L6ce9ef;}}
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
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ce9edu);}goto L6ce9ed;}
}
B6ce9ef:L6ce9ef:{c.instructions+=6;NFSU2_TR(0x6ce9ef);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ce9f2:{NFSU2_TR(0x6ce9f2);
u8 U[16];
w4(U+0,u32(u32(u32(0xffffff1cull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6ce9f9:{NFSU2_TR(0x6ce9f9);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ce9fc:{NFSU2_TR(0x6ce9fc);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6ce9fd:{NFSU2_TR(0x6ce9fd);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cea00:{NFSU2_TR(0x6cea00);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6cea02:L6cea02:{c.instructions+=3;NFSU2_TR(0x6cea02);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffddcull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B6cea09:{NFSU2_TR(0x6cea09);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6cea0c:{NFSU2_TR(0x6cea0c);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6cea1a;}}
}
B6cea0e:L6cea0e:{c.instructions+=3;NFSU2_TR(0x6cea0e);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffd3cull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B6cea15:{NFSU2_TR(0x6cea15);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6cea18:{NFSU2_TR(0x6cea18);
if(r1(R+518)){{goto L6cea21;}}
}
B6cea1a:L6cea1a:{c.instructions+=1;NFSU2_TR(0x6cea1a);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffe7cull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6cea21:L6cea21:{c.instructions+=3;NFSU2_TR(0x6cea21);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B6cea24:{NFSU2_TR(0x6cea24);
w1(R+512,u8((r4(R+0))<(u32(0xa0ull))));
}
B6cea29:{NFSU2_TR(0x6cea29);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6cea02u);}goto L6cea02;}}
}
B6cea2b:L6cea2b:{c.instructions+=1;NFSU2_TR(0x6cea2b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6cea2f:L6cea2f:{c.instructions+=1;NFSU2_TR(0x6cea2f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cea32:L6cea32:{c.instructions+=3;NFSU2_TR(0x6cea32);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6cea34:{NFSU2_TR(0x6cea34);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6cea3b:{NFSU2_TR(0x6cea3b);
if(r1(R+518)){{goto L6ced8a;}}
}
B6cea41:L6cea41:{c.instructions+=2;NFSU2_TR(0x6cea41);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6cea45:{NFSU2_TR(0x6cea45);
if(r1(R+518)){{goto L6ceab6;}}
}
B6cea47:L6cea47:{c.instructions+=15;NFSU2_TR(0x6cea47);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6cea4a:{NFSU2_TR(0x6cea4a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6cea4e:{NFSU2_TR(0x6cea4e);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6cea51:{NFSU2_TR(0x6cea51);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6cea54:{NFSU2_TR(0x6cea54);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cea55:{NFSU2_TR(0x6cea55);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe7cull))));
__builtin_memmove((R+0),(U+0),4);
}
B6cea5b:{NFSU2_TR(0x6cea5b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cea5c:{NFSU2_TR(0x6cea5c);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6cea5f:{NFSU2_TR(0x6cea5f);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cea60:{NFSU2_TR(0x6cea60);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff1cull))));
__builtin_memmove((R+0),(U+0),4);
}
B6cea66:{NFSU2_TR(0x6cea66);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cea67:{NFSU2_TR(0x6cea67);
u8 U[4];
w4(U+0,u32(0x7bd440ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cea6c:{NFSU2_TR(0x6cea6c);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6cea72:{NFSU2_TR(0x6cea72);
__builtin_memmove((R+4),(R+12),4);
}
B6cea74:{NFSU2_TR(0x6cea74);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6cea79ull));
TAIL_STATIC(0x6c1b89u,6c1);
}
B6cea79:L6cea79:{c.instructions+=2;NFSU2_TR(0x6cea79);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6cea7b:{NFSU2_TR(0x6cea7b);
if(r1(R+518)){{goto L6ced8a;}}
}
B6cea81:L6cea81:{c.instructions+=14;NFSU2_TR(0x6cea81);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6cea84:{NFSU2_TR(0x6cea84);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6cea87:{NFSU2_TR(0x6cea87);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6cea8a:{NFSU2_TR(0x6cea8a);
__builtin_memmove((R+4),(R+12),4);
}
B6cea8c:{NFSU2_TR(0x6cea8c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cea8d:{NFSU2_TR(0x6cea8d);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe7cull))));
__builtin_memmove((R+0),(U+0),4);
}
B6cea93:{NFSU2_TR(0x6cea93);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cea94:{NFSU2_TR(0x6cea94);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6cea97:{NFSU2_TR(0x6cea97);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cea98:{NFSU2_TR(0x6cea98);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff1cull))));
__builtin_memmove((R+0),(U+0),4);
}
B6cea9e:{NFSU2_TR(0x6cea9e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cea9f:{NFSU2_TR(0x6cea9f);
u8 U[4];
w4(U+0,u32(0x7bd4a0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ceaa4:{NFSU2_TR(0x6ceaa4);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6ceaaa:{NFSU2_TR(0x6ceaaa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ceaafull));
TAIL_STATIC(0x6c1b89u,6c1);
}
B6ceaaf:L6ceaaf:{c.instructions+=1;NFSU2_TR(0x6ceaaf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6ceab6:L6ceab6:{c.instructions+=2;NFSU2_TR(0x6ceab6);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ceab8:{NFSU2_TR(0x6ceab8);
if(r1(R+518)){{goto L6ced8a;}}
}
B6ceabe:L6ceabe:{c.instructions+=16;NFSU2_TR(0x6ceabe);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6ceac1:{NFSU2_TR(0x6ceac1);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6ceac4:{NFSU2_TR(0x6ceac4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6ceac8:{NFSU2_TR(0x6ceac8);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ceac9:{NFSU2_TR(0x6ceac9);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6ceacc:{NFSU2_TR(0x6ceacc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ceacd:{NFSU2_TR(0x6ceacd);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe7cull))));
__builtin_memmove((R+0),(U+0),4);
}
B6cead3:{NFSU2_TR(0x6cead3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cead4:{NFSU2_TR(0x6cead4);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6cead7:{NFSU2_TR(0x6cead7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cead8:{NFSU2_TR(0x6cead8);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff1cull))));
__builtin_memmove((R+0),(U+0),4);
}
B6ceade:{NFSU2_TR(0x6ceade);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ceadf:{NFSU2_TR(0x6ceadf);
u8 U[4];
w4(U+0,u32(0x7bd500ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ceae4:{NFSU2_TR(0x6ceae4);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6ceaea:{NFSU2_TR(0x6ceaea);
__builtin_memmove((R+4),(R+12),4);
}
B6ceaec:{NFSU2_TR(0x6ceaec);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ceaf1ull));
TAIL_STATIC(0x6c1b89u,6c1);
}
B6ceaf1:L6ceaf1:{c.instructions+=3;NFSU2_TR(0x6ceaf1);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6ceaf3:{NFSU2_TR(0x6ceaf3);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ceaf5:{NFSU2_TR(0x6ceaf5);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6ceb0f;}}
}
B6ceaf7:L6ceaf7:{c.instructions+=3;NFSU2_TR(0x6ceaf7);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffe7cull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B6ceafe:{NFSU2_TR(0x6ceafe);
u8 U[24];
w4(U+0,u32(u32(u32(0xfffffe8cull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w4(U+20,u32(u32(r4(R+8))-u32(r4(U+16))));
w1(R+518,u8((r4(U+20))==(u32(0x0ull))));
}
B6ceb05:{NFSU2_TR(0x6ceb05);
if(r1(R+518)){{goto L6ceb0a;}}
}
B6ceb07:L6ceb07:{c.instructions+=2;NFSU2_TR(0x6ceb07);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6ceb09:{NFSU2_TR(0x6ceb09);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6ceb0a:L6ceb0a:{c.instructions+=3;NFSU2_TR(0x6ceb0a);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6ceb0b:{NFSU2_TR(0x6ceb0b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
}
B6ceb0d:{NFSU2_TR(0x6ceb0d);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ceaf7u);}goto L6ceaf7;}}
}
B6ceb0f:L6ceb0f:{c.instructions+=2;NFSU2_TR(0x6ceb0f);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ceb11:{NFSU2_TR(0x6ceb11);
if(r1(R+518)){{goto L6cec4b;}}
}
B6ceb17:L6ceb17:{c.instructions+=15;NFSU2_TR(0x6ceb17);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6ceb1a:{NFSU2_TR(0x6ceb1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6ceb1e:{NFSU2_TR(0x6ceb1e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ceb1f:{NFSU2_TR(0x6ceb1f);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6ceb22:{NFSU2_TR(0x6ceb22);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ceb23:{NFSU2_TR(0x6ceb23);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe7cull))));
__builtin_memmove((R+0),(U+0),4);
}
B6ceb29:{NFSU2_TR(0x6ceb29);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ceb2a:{NFSU2_TR(0x6ceb2a);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6ceb2d:{NFSU2_TR(0x6ceb2d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ceb2e:{NFSU2_TR(0x6ceb2e);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff1cull))));
__builtin_memmove((R+0),(U+0),4);
}
B6ceb34:{NFSU2_TR(0x6ceb34);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ceb35:{NFSU2_TR(0x6ceb35);
u8 U[4];
w4(U+0,u32(0x7bd560ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ceb3a:{NFSU2_TR(0x6ceb3a);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6ceb40:{NFSU2_TR(0x6ceb40);
__builtin_memmove((R+4),(R+12),4);
}
B6ceb42:{NFSU2_TR(0x6ceb42);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ceb47ull));
TAIL_STATIC(0x6c1b89u,6c1);
}
B6ceb47:L6ceb47:{c.instructions+=7;NFSU2_TR(0x6ceb47);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6ceb49:{NFSU2_TR(0x6ceb49);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6ceb4a:{NFSU2_TR(0x6ceb4a);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6ceb4c:{NFSU2_TR(0x6ceb4c);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ceb4e:{NFSU2_TR(0x6ceb4e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ceb51:{NFSU2_TR(0x6ceb51);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ceb54:{NFSU2_TR(0x6ceb54);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6ceb6e;}}
}
B6ceb56:L6ceb56:{c.instructions+=3;NFSU2_TR(0x6ceb56);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffe7cull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B6ceb5d:{NFSU2_TR(0x6ceb5d);
u8 U[24];
w4(U+0,u32(u32(u32(0xfffffe8cull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w4(U+20,u32(u32(r4(R+0))-u32(r4(U+16))));
w1(R+518,u8((r4(U+20))==(u32(0x0ull))));
}
B6ceb64:{NFSU2_TR(0x6ceb64);
if(r1(R+518)){{goto L6ceb69;}}
}
B6ceb66:L6ceb66:{c.instructions+=1;NFSU2_TR(0x6ceb66);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ceb69:L6ceb69:{c.instructions+=3;NFSU2_TR(0x6ceb69);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6ceb6a:{NFSU2_TR(0x6ceb6a);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
}
B6ceb6c:{NFSU2_TR(0x6ceb6c);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ceb56u);}goto L6ceb56;}}
}
B6ceb6e:L6ceb6e:{c.instructions+=2;NFSU2_TR(0x6ceb6e);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ceb72:{NFSU2_TR(0x6ceb72);
if(r1(R+518)){{goto L6cec4e;}}
}
B6ceb78:L6ceb78:{c.instructions+=16;NFSU2_TR(0x6ceb78);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6ceb7b:{NFSU2_TR(0x6ceb7b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6ceb7f:{NFSU2_TR(0x6ceb7f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6ceb83:{NFSU2_TR(0x6ceb83);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ceb84:{NFSU2_TR(0x6ceb84);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6ceb87:{NFSU2_TR(0x6ceb87);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ceb88:{NFSU2_TR(0x6ceb88);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe7cull))));
__builtin_memmove((R+0),(U+0),4);
}
B6ceb8e:{NFSU2_TR(0x6ceb8e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ceb8f:{NFSU2_TR(0x6ceb8f);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6ceb92:{NFSU2_TR(0x6ceb92);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ceb93:{NFSU2_TR(0x6ceb93);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff1cull))));
__builtin_memmove((R+0),(U+0),4);
}
B6ceb99:{NFSU2_TR(0x6ceb99);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ceb9a:{NFSU2_TR(0x6ceb9a);
u8 U[4];
w4(U+0,u32(0x7bd5c0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ceb9f:{NFSU2_TR(0x6ceb9f);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6ceba5:{NFSU2_TR(0x6ceba5);
__builtin_memmove((R+4),(R+12),4);
}
B6ceba7:{NFSU2_TR(0x6ceba7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6cebacull));
TAIL_STATIC(0x6c1b89u,6c1);
}
B6cebac:L6cebac:{c.instructions+=4;NFSU2_TR(0x6cebac);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6cebae:{NFSU2_TR(0x6cebae);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6cebb0:{NFSU2_TR(0x6cebb0);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cebb3:{NFSU2_TR(0x6cebb3);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6cebcd;}}
}
B6cebb5:L6cebb5:{c.instructions+=3;NFSU2_TR(0x6cebb5);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffe7cull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B6cebbc:{NFSU2_TR(0x6cebbc);
u8 U[24];
w4(U+0,u32(u32(u32(0xfffffe8cull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w4(U+20,u32(u32(r4(R+0))-u32(r4(U+16))));
w1(R+518,u8((r4(U+20))==(u32(0x0ull))));
}
B6cebc3:{NFSU2_TR(0x6cebc3);
if(r1(R+518)){{goto L6cebc8;}}
}
B6cebc5:L6cebc5:{c.instructions+=1;NFSU2_TR(0x6cebc5);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cebc8:L6cebc8:{c.instructions+=3;NFSU2_TR(0x6cebc8);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6cebc9:{NFSU2_TR(0x6cebc9);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
}
B6cebcb:{NFSU2_TR(0x6cebcb);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6cebb5u);}goto L6cebb5;}}
}
B6cebcd:L6cebcd:{c.instructions+=2;NFSU2_TR(0x6cebcd);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6cebd1:{NFSU2_TR(0x6cebd1);
if(r1(R+518)){{goto L6cec4e;}}
}
B6cebd3:L6cebd3:{c.instructions+=15;NFSU2_TR(0x6cebd3);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6cebd6:{NFSU2_TR(0x6cebd6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6cebda:{NFSU2_TR(0x6cebda);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cebdb:{NFSU2_TR(0x6cebdb);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffb0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6cebde:{NFSU2_TR(0x6cebde);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cebdf:{NFSU2_TR(0x6cebdf);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe7cull))));
__builtin_memmove((R+0),(U+0),4);
}
B6cebe5:{NFSU2_TR(0x6cebe5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cebe6:{NFSU2_TR(0x6cebe6);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6cebe9:{NFSU2_TR(0x6cebe9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cebea:{NFSU2_TR(0x6cebea);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff1cull))));
__builtin_memmove((R+0),(U+0),4);
}
B6cebf0:{NFSU2_TR(0x6cebf0);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cebf1:{NFSU2_TR(0x6cebf1);
u8 U[4];
w4(U+0,u32(0x7bd620ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cebf6:{NFSU2_TR(0x6cebf6);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6cebfc:{NFSU2_TR(0x6cebfc);
__builtin_memmove((R+4),(R+12),4);
}
B6cebfe:{NFSU2_TR(0x6cebfe);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6cec03ull));
TAIL_STATIC(0x6c1b89u,6c1);
}
B6cec03:L6cec03:{c.instructions+=5;NFSU2_TR(0x6cec03);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6cec05:{NFSU2_TR(0x6cec05);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6cec07:{NFSU2_TR(0x6cec07);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cec0a:{NFSU2_TR(0x6cec0a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cec0d:{NFSU2_TR(0x6cec0d);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6cec27;}}
}
B6cec0f:L6cec0f:{c.instructions+=3;NFSU2_TR(0x6cec0f);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffe7cull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+0),(U+12),4);
}
B6cec16:{NFSU2_TR(0x6cec16);
u8 U[24];
w4(U+0,u32(u32(u32(0xfffffe8cull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+16),(U+12),4);
w4(U+20,u32(u32(r4(R+0))-u32(r4(U+16))));
w1(R+518,u8((r4(U+20))==(u32(0x0ull))));
}
B6cec1d:{NFSU2_TR(0x6cec1d);
if(r1(R+518)){{goto L6cec22;}}
}
B6cec1f:L6cec1f:{c.instructions+=1;NFSU2_TR(0x6cec1f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cec22:L6cec22:{c.instructions+=3;NFSU2_TR(0x6cec22);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6cec23:{NFSU2_TR(0x6cec23);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+4))<(r4(U+0))));
}
B6cec25:{NFSU2_TR(0x6cec25);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6cec0fu);}goto L6cec0f;}}
}
B6cec27:L6cec27:{c.instructions+=2;NFSU2_TR(0x6cec27);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6cec2b:{NFSU2_TR(0x6cec2b);
if(r1(R+518)){{goto L6cec4e;}}
}
B6cec2d:L6cec2d:{c.instructions+=1;NFSU2_TR(0x6cec2d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffacull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6cec30:L6cec30:{c.instructions+=1;NFSU2_TR(0x6cec30);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6cec34:L6cec34:{c.instructions+=2;NFSU2_TR(0x6cec34);
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
B6cec36:{NFSU2_TR(0x6cec36);
if(r1(R+518)){{goto L6cec41;}}
}
B6cec38:L6cec38:{c.instructions+=3;NFSU2_TR(0x6cec38);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cec3a:{NFSU2_TR(0x6cec3a);
__builtin_memmove((R+4),(R+24),4);
}
B6cec3c:{NFSU2_TR(0x6cec3c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6cec41ull));
TAIL_STATIC(0x6739efu,673);
}
B6cec41:L6cec41:{c.instructions+=1;NFSU2_TR(0x6cec41);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cec44:L6cec44:{c.instructions+=5;NFSU2_TR(0x6cec44);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6cec45:{NFSU2_TR(0x6cec45);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6cec46:{NFSU2_TR(0x6cec46);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6cec47:{NFSU2_TR(0x6cec47);
__builtin_memmove((R+16),(R+20),4);
__builtin_memmove((R+20),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B6cec48:{NFSU2_TR(0x6cec48);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6cec4b:L6cec4b:{c.instructions+=2;NFSU2_TR(0x6cec4b);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6cec4d:{NFSU2_TR(0x6cec4d);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B6cec4e:L6cec4e:{c.instructions+=3;NFSU2_TR(0x6cec4e);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6cec50:{NFSU2_TR(0x6cec50);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6cec52:{NFSU2_TR(0x6cec52);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6cec6d;}}
}
B6cec54:L6cec54:{c.instructions+=3;NFSU2_TR(0x6cec54);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffe7cull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+4),(U+12),4);
}
B6cec5b:{NFSU2_TR(0x6cec5b);
u8 U[30];
w4(U+0,u32(u32(u32(0xfffffe8cull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((U+22),(U+12),4);
w1(R+512,u8((r4(R+4))<(r4(U+22))));
w1(R+523,sborrow<u32>(r4(R+4),r4(U+22)));
w4(U+26,u32(u32(r4(R+4))-u32(r4(U+22))));
w1(R+519,u8(s32(r4(U+26))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+26))==(u32(0x0ull))));
w4(U+16,u32(u32(r4(U+26))&u32(u32(0xffull))));
w1(U+20,u8(__builtin_popcountll(u64(r4(U+16)))));
w1(U+21,u8(u32(r1(U+20))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+21))==(u8(0x0ull))));
}
B6cec62:{NFSU2_TR(0x6cec62);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ced70;}}
}
B6cec68:L6cec68:{c.instructions+=3;NFSU2_TR(0x6cec68);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6cec69:{NFSU2_TR(0x6cec69);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B6cec6b:{NFSU2_TR(0x6cec6b);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6cec54u);}goto L6cec54;}}
}
B6cec6d:L6cec6d:{c.instructions+=2;NFSU2_TR(0x6cec6d);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x160ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6cec74:{NFSU2_TR(0x6cec74);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6cecbf;}}
}
B6cec76:L6cec76:{c.instructions+=6;NFSU2_TR(0x6cec76);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cec78:{NFSU2_TR(0x6cec78);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cec79:{NFSU2_TR(0x6cec79);
u8 U[4];
w4(U+0,u32(0x311ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cec7e:{NFSU2_TR(0x6cec7e);
u8 U[4];
w4(U+0,u32(0x7b3a84ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cec83:{NFSU2_TR(0x6cec83);
__builtin_memmove((R+4),(R+12),4);
}
B6cec85:{NFSU2_TR(0x6cec85);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6cec8aull));
TAIL_STATIC(0x699be0u,699);
}
B6cec8a:L6cec8a:{c.instructions+=3;NFSU2_TR(0x6cec8a);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0xffffffffull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xffffffffull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6cec8d:{NFSU2_TR(0x6cec8d);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x170ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cec93:{NFSU2_TR(0x6cec93);
if(r1(R+518)){{goto L6ced66;}}
}
B6cec99:L6cec99:{c.instructions+=9;NFSU2_TR(0x6cec99);
{u32 ea_=u32(u32(7895760u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6cec9f:{NFSU2_TR(0x6cec9f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ceca0:{NFSU2_TR(0x6ceca0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ceca1:{NFSU2_TR(0x6ceca1);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6ceca4:{NFSU2_TR(0x6ceca4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ceca6:{NFSU2_TR(0x6ceca6);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ceca8:{NFSU2_TR(0x6ceca8);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ceca9:{NFSU2_TR(0x6ceca9);
__builtin_memmove((R+4),(R+12),4);
}
B6cecab:{NFSU2_TR(0x6cecab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6cecb0ull));
TAIL_STATIC(0x699c39u,699);
}
B6cecb0:L6cecb0:{c.instructions+=3;NFSU2_TR(0x6cecb0);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0xffffffffull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xffffffffull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6cecb3:{NFSU2_TR(0x6cecb3);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x160ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cecb9:{NFSU2_TR(0x6cecb9);
if(r1(R+518)){{goto L6ced66;}}
}
B6cecbf:L6cecbf:{c.instructions+=3;NFSU2_TR(0x6cecbf);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6cecc1:{NFSU2_TR(0x6cecc1);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6cecc3:{NFSU2_TR(0x6cecc3);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6cece8;}}
}
B6cecc5:L6cecc5:{c.instructions+=1;NFSU2_TR(0x6cecc5);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x160ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ceccb:L6ceccb:{c.instructions+=4;NFSU2_TR(0x6ceccb);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffe9cull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+8),(U+12),4);
}
B6cecd2:{NFSU2_TR(0x6cecd2);
u8 U[16];
w4(U+0,u32(u32(u32(0xfffffe7cull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+4),4);
s4(u32(r4(U+8)),r4(U+12));
}
B6cecd9:{NFSU2_TR(0x6cecd9);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+8))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6cecdf:{NFSU2_TR(0x6cecdf);
if(r1(R+518)){{goto L6cece3;}}
}
B6cece1:L6cece1:{c.instructions+=1;NFSU2_TR(0x6cece1);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6cece3:L6cece3:{c.instructions+=3;NFSU2_TR(0x6cece3);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6cece4:{NFSU2_TR(0x6cece4);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w1(R+512,u8((r4(R+0))<(r4(U+0))));
}
B6cece6:{NFSU2_TR(0x6cece6);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ceccbu);}goto L6ceccb;}}
}
B6cece8:L6cece8:{c.instructions+=8;NFSU2_TR(0x6cece8);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe9cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cecee:{NFSU2_TR(0x6cecee);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6cecf1:{NFSU2_TR(0x6cecf1);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6cecf4:{NFSU2_TR(0x6cecf4);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cecf7:{NFSU2_TR(0x6cecf7);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cecfa:{NFSU2_TR(0x6cecfa);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6cecfd:{NFSU2_TR(0x6cecfd);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6ced01:{NFSU2_TR(0x6ced01);
if(r1(R+518)){{goto L6ced8a;}}
}
B6ced07:L6ced07:{c.instructions+=2;NFSU2_TR(0x6ced07);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ced09:{NFSU2_TR(0x6ced09);
if(r1(R+518)){{goto L6ced8a;}}
}
B6ced0b:L6ced0b:{c.instructions+=2;NFSU2_TR(0x6ced0b);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6ced0d:{NFSU2_TR(0x6ced0d);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x164ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6ced13:L6ced13:{c.instructions+=3;NFSU2_TR(0x6ced13);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6ced15:{NFSU2_TR(0x6ced15);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6ced18:{NFSU2_TR(0x6ced18);
if(r1(R+518)){{goto L6ced35;}}
}
B6ced1a:L6ced1a:{c.instructions+=7;NFSU2_TR(0x6ced1a);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6ced1d:{NFSU2_TR(0x6ced1d);
{u32 ea_=u32(r4(R+8)+u32(32u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6ced20:{NFSU2_TR(0x6ced20);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6ced23:{NFSU2_TR(0x6ced23);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B6ced25:{NFSU2_TR(0x6ced25);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6ced27:{NFSU2_TR(0x6ced27);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6ced2a:{NFSU2_TR(0x6ced2a);
u8 U[1];
w1(U+0,u8(!(r1(R+514))));
if(r1(U+0)){{goto L6ced35;}}
}
B6ced2c:L6ced2c:{c.instructions+=4;NFSU2_TR(0x6ced2c);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6ced2d:{NFSU2_TR(0x6ced2d);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B6ced30:{NFSU2_TR(0x6ced30);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w1(R+512,u8((r4(U+0))<(u32(0x3ull))));
}
B6ced33:{NFSU2_TR(0x6ced33);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ced13u);}goto L6ced13;}}
}
B6ced35:L6ced35:{c.instructions+=2;NFSU2_TR(0x6ced35);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6ced38:{NFSU2_TR(0x6ced38);
if(r1(R+518)){{goto L6ced8a;}}
}
B6ced3a:L6ced3a:{c.instructions+=3;NFSU2_TR(0x6ced3a);
u8 U[12];
w4(U+0,u32(u32(u32(0x164ull))+u32(r4(R+12))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+24),(U+8),4);
}
B6ced41:{NFSU2_TR(0x6ced41);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B6ced44:{NFSU2_TR(0x6ced44);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ced77;}}
}
B6ced46:L6ced46:{c.instructions+=10;NFSU2_TR(0x6ced46);
{u32 ea_=u32(r4(R+8)+u32(32u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6ced49:{NFSU2_TR(0x6ced49);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ced4a:{NFSU2_TR(0x6ced4a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ced4b:{NFSU2_TR(0x6ced4b);
{u32 ea_=u32(r4(R+16));__asm__ volatile(".byte 0xdd,0x18"::"a"(ea_):"memory");}
}
B6ced4e:{NFSU2_TR(0x6ced4e);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6ced4f:{NFSU2_TR(0x6ced4f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ced50:{NFSU2_TR(0x6ced50);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ced52:{NFSU2_TR(0x6ced52);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x170ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6ced58:{NFSU2_TR(0x6ced58);
__builtin_memmove((R+4),(R+12),4);
}
B6ced5a:{NFSU2_TR(0x6ced5a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ced5full));
TAIL_STATIC(0x699c39u,699);
}
B6ced5f:L6ced5f:{c.instructions+=3;NFSU2_TR(0x6ced5f);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0xffffffffull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0xffffffffull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0xffffffffull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6ced62:{NFSU2_TR(0x6ced62);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
s4(u32(r4(R+24)),r4(U+0));
}
B6ced64:{NFSU2_TR(0x6ced64);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6ced77;}}
}
B6ced66:L6ced66:{c.instructions+=2;NFSU2_TR(0x6ced66);
w4(R+0,u32(0x8007000eull));
}
B6ced6b:{NFSU2_TR(0x6ced6b);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6cec44u);}goto L6cec44;}
}
B6ced70:L6ced70:{c.instructions+=2;NFSU2_TR(0x6ced70);
__builtin_memmove((R+0),(R+24),4);
}
B6ced72:{NFSU2_TR(0x6ced72);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6cec44u);}goto L6cec44;}
}
B6ced77:L6ced77:{c.instructions+=2;NFSU2_TR(0x6ced77);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(u32(0x0ull))));
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6ced7b:{NFSU2_TR(0x6ced7b);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6ced8a;}}
}
B6ced7d:L6ced7d:{c.instructions+=3;NFSU2_TR(0x6ced7d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ced80:{NFSU2_TR(0x6ced80);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6ced82:{NFSU2_TR(0x6ced82);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffe9cull))));
__builtin_memmove((R+28),(U+0),4);
}
B6ced88:L6ced88:{c.instructions+=1;NFSU2_TR(0x6ced88);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L6ced8a;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6ced88u);}goto L6ced88;}
}
B6ced8a:L6ced8a:{c.instructions+=2;NFSU2_TR(0x6ced8a);
u8 U[4];
w4(U+0,u32(0x74ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ced8c:{NFSU2_TR(0x6ced8c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ced91ull));
TAIL_STATIC(0x699317u,699);
}
B6ced91:L6ced91:{c.instructions+=2;NFSU2_TR(0x6ced91);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6ced93:{NFSU2_TR(0x6ced93);
if(r1(R+518)){{goto L6ceda0;}}
}
B6ced95:L6ced95:{c.instructions+=2;NFSU2_TR(0x6ced95);
__builtin_memmove((R+4),(R+0),4);
}
B6ced97:{NFSU2_TR(0x6ced97);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6ced9cull));
TAIL_STATIC(0x698e7du,698);
}
B6ced9c:L6ced9c:{c.instructions+=2;NFSU2_TR(0x6ced9c);
__builtin_memmove((R+24),(R+0),4);
}
B6ced9e:{NFSU2_TR(0x6ced9e);
{goto L6ceda2;}
}
B6ceda0:L6ceda0:{c.instructions+=1;NFSU2_TR(0x6ceda0);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B6ceda2:L6ceda2:{c.instructions+=2;NFSU2_TR(0x6ceda2);
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
B6ceda4:{NFSU2_TR(0x6ceda4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6cedb2;}}
}
B6ceda6:L6ceda6:{c.instructions+=2;NFSU2_TR(0x6ceda6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
w4(U+4,u32(0x8007000eull));
s4(u32(r4(U+0)),r4(U+4));
}
B6cedad:{NFSU2_TR(0x6cedad);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6cec41u);}goto L6cec41;}
}
B6cedb2:L6cedb2:{c.instructions+=5;NFSU2_TR(0x6cedb2);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6cedb5:{NFSU2_TR(0x6cedb5);
__builtin_memmove((R+0),(R+28),4);
}
B6cedb7:{NFSU2_TR(0x6cedb7);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffull))));
}
B6cedbc:{NFSU2_TR(0x6cedbc);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffc4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6cedc0:{NFSU2_TR(0x6cedc0);
if(r1(R+518)){{goto L6cedc9;}}
}
B6cedc2:L6cedc2:{c.instructions+=2;NFSU2_TR(0x6cedc2);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x70400000ull))));
}
B6cedc7:{NFSU2_TR(0x6cedc7);
{goto L6cedce;}
}
B6cedc9:L6cedc9:{c.instructions+=1;NFSU2_TR(0x6cedc9);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x70300000ull))));
}
B6cedce:L6cedce:{c.instructions+=7;NFSU2_TR(0x6cedce);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cedd0:{NFSU2_TR(0x6cedd0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cedd1:{NFSU2_TR(0x6cedd1);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6cedd4:{NFSU2_TR(0x6cedd4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cedd5:{NFSU2_TR(0x6cedd5);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cedd6:{NFSU2_TR(0x6cedd6);
__builtin_memmove((R+4),(R+24),4);
}
B6cedd8:{NFSU2_TR(0x6cedd8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6cedddull));
TAIL_STATIC(0x699362u,699);
}
B6ceddd:L6ceddd:{c.instructions+=3;NFSU2_TR(0x6ceddd);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6ceddf:{NFSU2_TR(0x6ceddf);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cede2:{NFSU2_TR(0x6cede2);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6cec34u);}goto L6cec34;}}
}
B6cede8:L6cede8:{c.instructions+=3;NFSU2_TR(0x6cede8);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6cedee:{NFSU2_TR(0x6cedee);
__builtin_memmove((R+4),(R+24),4);
}
B6cedf0:{NFSU2_TR(0x6cedf0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6cedf5ull));
TAIL_STATIC(0x698eb3u,698);
}
B6cedf5:L6cedf5:{c.instructions+=3;NFSU2_TR(0x6cedf5);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6cedf7:{NFSU2_TR(0x6cedf7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cedfa:{NFSU2_TR(0x6cedfa);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6cec34u);}goto L6cec34;}}
}
B6cee00:L6cee00:{c.instructions+=4;NFSU2_TR(0x6cee00);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6cee02:{NFSU2_TR(0x6cee02);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6cee04:{NFSU2_TR(0x6cee04);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cee07:{NFSU2_TR(0x6cee07);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6cee69;}}
}
B6cee09:L6cee09:{c.instructions+=6;NFSU2_TR(0x6cee09);
__builtin_memmove((R+4),(R+28),4);
}
B6cee0b:{NFSU2_TR(0x6cee0b);
u8 U[4];
w4(U+0,u32(u32(u32(0x3ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6cee0e:{NFSU2_TR(0x6cee0e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cee11:{NFSU2_TR(0x6cee11);
__builtin_memmove((R+4),(R+28),4);
}
B6cee13:{NFSU2_TR(0x6cee13);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6cee16:{NFSU2_TR(0x6cee16);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cee19:L6cee19:{c.instructions+=25;NFSU2_TR(0x6cee19);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cee1f:{NFSU2_TR(0x6cee1f);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cee22:{NFSU2_TR(0x6cee22);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6cee25:{NFSU2_TR(0x6cee25);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+0,shl<u32>(r4(R+0),u64(r4(U+0))));
}
B6cee28:{NFSU2_TR(0x6cee28);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+4),(U+8),4);
}
B6cee2b:{NFSU2_TR(0x6cee2b);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6cee2e:{NFSU2_TR(0x6cee2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6cee31:{NFSU2_TR(0x6cee31);
u8 U[12];
w4(U+0,u32(u32(u32(0xfffffe8cull))+u32(r4(R+20))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+4),(U+8),4);
}
B6cee38:{NFSU2_TR(0x6cee38);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6cee3b:{NFSU2_TR(0x6cee3b);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+28),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6cee3e:{NFSU2_TR(0x6cee3e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cee41:{NFSU2_TR(0x6cee41);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B6cee43:{NFSU2_TR(0x6cee43);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6cee46:{NFSU2_TR(0x6cee46);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cee49:{NFSU2_TR(0x6cee49);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6cee4d:{NFSU2_TR(0x6cee4d);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+8),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6cee50:{NFSU2_TR(0x6cee50);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cee53:{NFSU2_TR(0x6cee53);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6cee56:{NFSU2_TR(0x6cee56);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x4ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6cee5a:{NFSU2_TR(0x6cee5a);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),(R+4),4);
s4(u32(r4(U+4)),r4(U+8));
}
B6cee5d:{NFSU2_TR(0x6cee5d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cee60:{NFSU2_TR(0x6cee60);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6cee61:{NFSU2_TR(0x6cee61);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(R+0))<(r4(U+8))));
}
B6cee64:{NFSU2_TR(0x6cee64);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cee67:{NFSU2_TR(0x6cee67);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6cee19u);}goto L6cee19;}}
}
B6cee69:L6cee69:{c.instructions+=2;NFSU2_TR(0x6cee69);
u8 U[16];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x0ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6cee6d:{NFSU2_TR(0x6cee6d);
if(r1(R+518)){{goto L6cee8b;}}
}
B6cee6f:L6cee6f:{c.instructions+=3;NFSU2_TR(0x6cee6f);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cee75:{NFSU2_TR(0x6cee75);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cee76:{NFSU2_TR(0x6cee76);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6cee7bull));
TAIL_STATIC(0x6995c1u,699);
}
B6cee7b:L6cee7b:{c.instructions+=3;NFSU2_TR(0x6cee7b);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
}
B6cee7d:{NFSU2_TR(0x6cee7d);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cee80:{NFSU2_TR(0x6cee80);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6cec34u);}goto L6cec34;}}
}
B6cee86:L6cee86:{c.instructions+=1;NFSU2_TR(0x6cee86);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6cec30u);}goto L6cec30;}
}
B6cee8b:L6cee8b:{c.instructions+=6;NFSU2_TR(0x6cee8b);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffd4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6cee8e:{NFSU2_TR(0x6cee8e);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffff1cull))));
__builtin_memmove((R+0),(U+0),4);
}
B6cee94:{NFSU2_TR(0x6cee94);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cee95:{NFSU2_TR(0x6cee95);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cee96:{NFSU2_TR(0x6cee96);
__builtin_memmove((R+4),(R+12),4);
}
B6cee98:{NFSU2_TR(0x6cee98);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6cee9dull));
TAIL_STATIC(0x6c91fau,6c9);
}
B6cee9d:L6cee9d:{c.instructions+=1;NFSU2_TR(0x6cee9d);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6cec44u);}goto L6cec44;}
}
B6ceea2:L6ceea2:{c.instructions+=12;NFSU2_TR(0x6ceea2);
__builtin_memmove((R+28),(R+28),4);
}
B6ceea4:{NFSU2_TR(0x6ceea4);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ceea5:{NFSU2_TR(0x6ceea5);
__builtin_memmove((R+20),(R+16),4);
}
B6ceea7:{NFSU2_TR(0x6ceea7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x2cull))));
}
B6ceeaa:{NFSU2_TR(0x6ceeaa);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ceeab:{NFSU2_TR(0x6ceeab);
__builtin_memmove((R+28),(R+4),4);
}
B6ceead:{NFSU2_TR(0x6ceead);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6ceeb3:{NFSU2_TR(0x6ceeb3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6ceeb5:{NFSU2_TR(0x6ceeb5);
__builtin_memmove((R+8),(R+0),4);
}
B6ceeb7:{NFSU2_TR(0x6ceeb7);
w4(R+8,u32(u32(r4(R+8))&u32(u32(0xfff00000ull))));
}
B6ceebd:{NFSU2_TR(0x6ceebd);
u8 U[8];
__builtin_memmove((U+0),(R+8),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x20400000ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6ceec3:{NFSU2_TR(0x6ceec3);
if(r1(R+518)){{goto L6ceecd;}}
}
B6ceec5:L6ceec5:{c.instructions+=3;NFSU2_TR(0x6ceec5);
w1(R+512,u8(0x0ull));
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6ceec7:{NFSU2_TR(0x6ceec7);
u8 U[6];
w1(R+523,scarry<u32>(r4(R+0),u32(0x1ull)));
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
w1(R+519,u8(s32(r4(R+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+0))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6ceec8:{NFSU2_TR(0x6ceec8);
TAIL_STATIC(0x6cf19cu,6cf);
}
B6ceecd:L6ceecd:{c.instructions+=17;NFSU2_TR(0x6ceecd);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffull))));
}
B6ceed2:{NFSU2_TR(0x6ceed2);
__builtin_memmove((R+8),(R+0),4);
}
B6ceed4:{NFSU2_TR(0x6ceed4);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6ceed7:{NFSU2_TR(0x6ceed7);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ceed8:{NFSU2_TR(0x6ceed8);
__builtin_memmove((R+4),(R+8),4);
}
B6ceeda:{NFSU2_TR(0x6ceeda);
u8 U[4];
w4(U+0,u32(u32(u32(0x2ull))&u32(u32(0x1full))));
w4(R+4,shl<u32>(r4(R+4),u64(r4(U+0))));
}
B6ceedd:{NFSU2_TR(0x6ceedd);
w4(R+4,u32(u32(r4(R+4))+u32(r4(R+0))));
}
B6ceedf:{NFSU2_TR(0x6ceedf);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+12),(U+0),4);
}
B6ceee1:{NFSU2_TR(0x6ceee1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ceee2:{NFSU2_TR(0x6ceee2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B6ceee5:{NFSU2_TR(0x6ceee5);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B6ceee8:{NFSU2_TR(0x6ceee8);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6ceeeb:{NFSU2_TR(0x6ceeeb);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6ceeee:{NFSU2_TR(0x6ceeee);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6ceef1:{NFSU2_TR(0x6ceef1);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B6ceef4:{NFSU2_TR(0x6ceef4);
u8 U[6];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6ceef8:{NFSU2_TR(0x6ceef8);
if(r1(R+518)){{goto L6cef05;}}
}
B6ceefa:L6ceefa:{c.instructions+=4;NFSU2_TR(0x6ceefa);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6ceefe:{NFSU2_TR(0x6ceefe);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cef01:{NFSU2_TR(0x6cef01);
__builtin_memmove((R+0),(R+4),4);
}
B6cef03:{NFSU2_TR(0x6cef03);
{goto L6cef24;}
}
B6cef05:L6cef05:{c.instructions+=6;NFSU2_TR(0x6cef05);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+12),(U+0),4);
}
B6cef07:{NFSU2_TR(0x6cef07);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+12),(U+8),4);
}
B6cef0a:{NFSU2_TR(0x6cef0a);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6cef0d:{NFSU2_TR(0x6cef0d);
u8 U[12];
w4(U+0,u32(u32(r4(R+12))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+8))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+8),(U+8),4);
}
B6cef10:{NFSU2_TR(0x6cef10);
u8 U[6];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x5ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6cef14:{NFSU2_TR(0x6cef14);
if(r1(R+518)){TAIL_STATIC(0x6cf197u,6cf);}
}
B6cef1a:L6cef1a:{c.instructions+=2;NFSU2_TR(0x6cef1a);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff0ull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6cef21:{NFSU2_TR(0x6cef21);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6cef24:L6cef24:{c.instructions+=5;NFSU2_TR(0x6cef24);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6cef27:{NFSU2_TR(0x6cef27);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x15cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6cef2e:{NFSU2_TR(0x6cef2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))&u32(u32(0x0ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6cef32:{NFSU2_TR(0x6cef32);
u8 U[4];
w1(R+512,u8(0x0ull));
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6cef34:{NFSU2_TR(0x6cef34);
u8 U[1];
w1(U+0,u8((r1(R+512))||(r1(R+518))));
if(r1(U+0)){{goto L6cef84;}}
}
B6cef36:L6cef36:{c.instructions+=3;NFSU2_TR(0x6cef36);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6cef39:{NFSU2_TR(0x6cef39);
__builtin_memmove((R+4),(R+0),4);
}
B6cef3b:{NFSU2_TR(0x6cef3b);
w4(R+4,u32(u32(r4(R+4))-u32(r4(R+8))));
}
B6cef3d:L6cef3d:{c.instructions+=8;NFSU2_TR(0x6cef3d);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6cef40:{NFSU2_TR(0x6cef40);
{u32 ea_=u32(u32(8124040u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6cef46:{NFSU2_TR(0x6cef46);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6cef49:{NFSU2_TR(0x6cef49);
{u32 ea_=u32(r4(R+0)+u32(32u));__asm__ volatile(".byte 0xdd,0x00"::"a"(ea_):"memory");}
}
B6cef4c:{NFSU2_TR(0x6cef4c);
__asm__ volatile(".byte 0xda,0xe9":::"memory");
}
B6cef4e:{NFSU2_TR(0x6cef4e);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6cef50:{NFSU2_TR(0x6cef50);
u8 U[4];
w1(U+3,u8(u32(r1(R+1))&u32(u8(0x44ull))));
w1(U+0,u8(u32(r1(U+3))&u32(u8(0xffull))));
w1(U+1,u8(__builtin_popcountll(u64(r1(U+0)))));
w1(U+2,u8(u32(r1(U+1))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+2))==(u8(0x0ull))));
}
B6cef53:{NFSU2_TR(0x6cef53);
if(r1(R+514)){TAIL_STATIC(0x6cf197u,6cf);}
}
B6cef59:L6cef59:{c.instructions+=4;NFSU2_TR(0x6cef59);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6cef5b:{NFSU2_TR(0x6cef5b);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6cef5e:{NFSU2_TR(0x6cef5e);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3dull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x2ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6cef62:{NFSU2_TR(0x6cef62);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6cef79;}}
}
B6cef64:L6cef64:{c.instructions+=2;NFSU2_TR(0x6cef64);
u8 U[2];
__builtin_memmove((U+0),gp(u32(r4(R+0))),1);
w1(U+1,u8(u32(r1(U+0))&u32(u8(0x4ull))));
w1(R+518,u8((r1(U+1))==(u8(0x0ull))));
}
B6cef67:{NFSU2_TR(0x6cef67);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6cef79;}}
}
B6cef69:L6cef69:{c.instructions+=2;NFSU2_TR(0x6cef69);
u8 U[6];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x6eull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x4ull))));
w1(R+518,u8((r1(U+5))==(u8(0x0ull))));
}
B6cef6d:{NFSU2_TR(0x6cef6d);
if(r1(R+518)){{goto L6cef79;}}
}
B6cef6f:L6cef6f:{c.instructions+=1;NFSU2_TR(0x6cef6f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x15cull))));
w4(U+4,u32(0x1ull));
s4(u32(r4(U+0)),r4(U+4));
}
B6cef79:L6cef79:{c.instructions+=4;NFSU2_TR(0x6cef79);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
w4(U+4,u32(u32(r4(U+4))+u32(u32(0x1ull))));
s4(u32(r4(U+0)),r4(U+4));
}
B6cef7c:{NFSU2_TR(0x6cef7c);
w4(R+8,u32(u32(r4(R+8))+u32(u32(0x4ull))));
}
B6cef7f:{NFSU2_TR(0x6cef7f);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffff4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w1(R+512,u8((r4(U+8))<(r4(R+12))));
}
B6cef82:{NFSU2_TR(0x6cef82);
if(r1(R+512)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6cef3du);}goto L6cef3d;}}
}
B6cef84:L6cef84:{c.instructions+=7;NFSU2_TR(0x6cef84);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6cef8a:{NFSU2_TR(0x6cef8a);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x10ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cef8d:{NFSU2_TR(0x6cef8d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+0))),4);
__builtin_memmove((R+0),(U+0),4);
}
B6cef8f:{NFSU2_TR(0x6cef8f);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(r4(R+24))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+0),(U+8),4);
}
B6cef92:{NFSU2_TR(0x6cef92);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cef95:{NFSU2_TR(0x6cef95);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x88ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6cef9b:{NFSU2_TR(0x6cef9b);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6cefe1;}}
}
B6cef9d:L6cef9d:{c.instructions+=10;NFSU2_TR(0x6cef9d);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B6cef9f:{NFSU2_TR(0x6cef9f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cefa0:{NFSU2_TR(0x6cefa0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cefa1:{NFSU2_TR(0x6cefa1);
w4(R+0,u32(0x20000ull));
}
B6cefa6:{NFSU2_TR(0x6cefa6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cefa7:{NFSU2_TR(0x6cefa7);
u8 U[12];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xfffffffcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6cefaa:{NFSU2_TR(0x6cefaa);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cefab:{NFSU2_TR(0x6cefab);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cefac:{NFSU2_TR(0x6cefac);
__builtin_memmove((R+4),(R+28),4);
}
B6cefae:{NFSU2_TR(0x6cefae);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6cefb3ull));
TAIL_STATIC(0x6cdc05u,6cd);
}
B6cefb3:L6cefb3:{c.instructions+=3;NFSU2_TR(0x6cefb3);
u8 U[22];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x15cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+14),(U+4),4);
w1(R+512,u8((r4(U+14))<(u32(0x2ull))));
w1(R+523,sborrow<u32>(r4(U+14),u32(0x2ull)));
w4(U+18,u32(u32(r4(U+14))-u32(u32(0x2ull))));
w1(R+519,u8(s32(r4(U+18))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+18))==(u32(0x0ull))));
w4(U+8,u32(u32(r4(U+18))&u32(u32(0xffull))));
w1(U+12,u8(__builtin_popcountll(u64(r4(U+8)))));
w1(U+13,u8(u32(r1(U+12))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+13))==(u8(0x0ull))));
}
B6cefba:{NFSU2_TR(0x6cefba);
__builtin_memmove((R+24),(R+0),4);
}
B6cefbc:{NFSU2_TR(0x6cefbc);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6cefda;}}
}
B6cefbe:L6cefbe:{c.instructions+=6;NFSU2_TR(0x6cefbe);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x100ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6cefc4:{NFSU2_TR(0x6cefc4);
u8 U[4];
w4(U+0,u32(0x7bf644ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cefc9:{NFSU2_TR(0x6cefc9);
u8 U[4];
w4(U+0,u32(0x125dull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cefce:{NFSU2_TR(0x6cefce);
u8 U[12];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x3cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+8));
}
B6cefd1:{NFSU2_TR(0x6cefd1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cefd2:{NFSU2_TR(0x6cefd2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6cefd7ull));
TAIL_STATIC(0x69e9bbu,69e);
}
B6cefd7:L6cefd7:{c.instructions+=1;NFSU2_TR(0x6cefd7);
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
B6cefda:L6cefda:{c.instructions+=2;NFSU2_TR(0x6cefda);
__builtin_memmove((R+0),(R+24),4);
}
B6cefdc:{NFSU2_TR(0x6cefdc);
TAIL_STATIC(0x6cf19au,6cf);
}
B6cefe1:L6cefe1:{c.instructions+=2;NFSU2_TR(0x6cefe1);
u8 U[16];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x84ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+0))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6cefe7:{NFSU2_TR(0x6cefe7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x6cf197u,6cf);}
}
B6cefed:L6cefed:{c.instructions+=7;NFSU2_TR(0x6cefed);
u8 U[4];
w4(U+0,u32(0x2ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6cefef:{NFSU2_TR(0x6cefef);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xffffffe4ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6ceff2:{NFSU2_TR(0x6ceff2);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ceff3:{NFSU2_TR(0x6ceff3);
__builtin_memmove((R+0),(R+12),4);
}
B6ceff5:{NFSU2_TR(0x6ceff5);
w4(R+0,u32(u32(r4(R+0))&u32(u32(0xfffffull))));
}
B6ceffa:{NFSU2_TR(0x6ceffa);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6ceffb:{NFSU2_TR(0x6ceffb);
w4(R+0,u32(u32(r4(R+0))|u32(u32(0x20400000ull))));
TAIL_STATIC(0x6cf000u,6cf);
}
XIT:NFSU2_TR_EXIT(0x6ce,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
