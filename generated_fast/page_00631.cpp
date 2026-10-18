#include "fast.hpp"
namespace nfsu2raw {
#define EXIT(T) do{nx=u32(T);goto XIT;}while(0)
u32 body_401(u8* __restrict R,Cpu& c);
u32 body_43c(u8* __restrict R,Cpu& c);
u32 body_43d(u8* __restrict R,Cpu& c);
u32 body_440(u8* __restrict R,Cpu& c);
u32 body_48b(u8* __restrict R,Cpu& c);
u32 body_495(u8* __restrict R,Cpu& c);
u32 body_502(u8* __restrict R,Cpu& c);
u32 body_510(u8* __restrict R,Cpu& c);
u32 body_56e(u8* __restrict R,Cpu& c);
u32 body_571(u8* __restrict R,Cpu& c);
u32 body_578(u8* __restrict R,Cpu& c);
u32 body_599(u8* __restrict R,Cpu& c);
u32 body_5a6(u8* __restrict R,Cpu& c);
u32 body_5a7(u8* __restrict R,Cpu& c);
u32 body_5ac(u8* __restrict R,Cpu& c);
u32 body_5b4(u8* __restrict R,Cpu& c);
u32 body_5ec(u8* __restrict R,Cpu& c);
u32 body_5ed(u8* __restrict R,Cpu& c);
u32 body_5f0(u8* __restrict R,Cpu& c);
u32 body_5f3(u8* __restrict R,Cpu& c);
u32 body_5f6(u8* __restrict R,Cpu& c);
u32 body_60d(u8* __restrict R,Cpu& c);
u32 body_60f(u8* __restrict R,Cpu& c);
u32 body_610(u8* __restrict R,Cpu& c);
u32 body_616(u8* __restrict R,Cpu& c);
u32 body_61a(u8* __restrict R,Cpu& c);
u32 body_61b(u8* __restrict R,Cpu& c);
u32 body_620(u8* __restrict R,Cpu& c);
u32 body_630(u8* __restrict R,Cpu& c);
u32 body_632(u8* __restrict R,Cpu& c);
u32 body_dispatch(u8* __restrict R,Cpu& c);
#define TAIL_STATIC(T,PG) do{if(__builtin_expect(++c.chain<2048,1)){c.pc=u32(T);NFSU2_TR_EXIT(0x631,u32(T));[[clang::musttail]] return body_##PG(R,c);}c.chain=0;EXIT(T);}while(0)
#define TAIL_DYNAMIC(T) do{u32 t__=u32(T);if(__builtin_expect(u32((t__>>12)-0x401u)<=0x41bu && ++c.chain<2048,1)){c.pc=t__;NFSU2_TR_EXIT(0x631,t__);[[clang::musttail]] return body_dispatch(R,c);}c.chain=0;EXIT(t__);}while(0)
#define NFSU2_FAULT(msg,pc) do{fm=(msg);fpc=(pc);goto FLT;}while(0)
#define SPILL() NFSU2_BARRIER(R)
u32 body_631(u8* __restrict R,Cpu& c);
u32 page_631(Cpu& c){return body_631(c.regs.data(),c);}
__attribute__((noinline)) u32 body_631(u8* __restrict R,Cpu& c){
u32 nx=0,fpc=0;const char* fm=nullptr;
switch(c.pc){
case 0x631001:goto L631001;
case 0x631003:c.instructions+=137;goto B631003;
case 0x631007:c.instructions+=136;goto B631007;
case 0x63100a:c.instructions+=135;goto B63100a;
case 0x63100d:c.instructions+=134;goto B63100d;
case 0x631010:c.instructions+=133;goto B631010;
case 0x631013:c.instructions+=132;goto B631013;
case 0x631015:c.instructions+=131;goto B631015;
case 0x631018:c.instructions+=130;goto B631018;
case 0x63101b:c.instructions+=129;goto B63101b;
case 0x63101d:c.instructions+=128;goto B63101d;
case 0x631020:c.instructions+=127;goto B631020;
case 0x631023:c.instructions+=126;goto B631023;
case 0x631025:c.instructions+=125;goto B631025;
case 0x631029:c.instructions+=124;goto B631029;
case 0x63102c:c.instructions+=123;goto B63102c;
case 0x63102f:c.instructions+=122;goto B63102f;
case 0x631032:c.instructions+=121;goto B631032;
case 0x631035:c.instructions+=120;goto B631035;
case 0x631037:c.instructions+=119;goto B631037;
case 0x63103a:c.instructions+=118;goto B63103a;
case 0x63103d:c.instructions+=117;goto B63103d;
case 0x63103f:c.instructions+=116;goto B63103f;
case 0x631042:c.instructions+=115;goto B631042;
case 0x631045:c.instructions+=114;goto B631045;
case 0x631047:c.instructions+=113;goto B631047;
case 0x63104b:c.instructions+=112;goto B63104b;
case 0x63104e:c.instructions+=111;goto B63104e;
case 0x631051:c.instructions+=110;goto B631051;
case 0x631054:c.instructions+=109;goto B631054;
case 0x631057:c.instructions+=108;goto B631057;
case 0x631059:c.instructions+=107;goto B631059;
case 0x63105c:c.instructions+=106;goto B63105c;
case 0x63105f:c.instructions+=105;goto B63105f;
case 0x631061:c.instructions+=104;goto B631061;
case 0x631064:c.instructions+=103;goto B631064;
case 0x631067:c.instructions+=102;goto B631067;
case 0x631069:c.instructions+=101;goto B631069;
case 0x63106d:c.instructions+=100;goto B63106d;
case 0x631070:c.instructions+=99;goto B631070;
case 0x631073:c.instructions+=98;goto B631073;
case 0x631076:c.instructions+=97;goto B631076;
case 0x631079:c.instructions+=96;goto B631079;
case 0x63107b:c.instructions+=95;goto B63107b;
case 0x63107e:c.instructions+=94;goto B63107e;
case 0x631081:c.instructions+=93;goto B631081;
case 0x631083:c.instructions+=92;goto B631083;
case 0x631086:c.instructions+=91;goto B631086;
case 0x631088:c.instructions+=90;goto B631088;
case 0x63108a:c.instructions+=89;goto B63108a;
case 0x63108e:c.instructions+=88;goto B63108e;
case 0x631091:c.instructions+=87;goto B631091;
case 0x631094:c.instructions+=86;goto B631094;
case 0x631097:c.instructions+=85;goto B631097;
case 0x63109a:c.instructions+=84;goto B63109a;
case 0x63109c:c.instructions+=83;goto B63109c;
case 0x63109f:c.instructions+=82;goto B63109f;
case 0x6310a2:c.instructions+=81;goto B6310a2;
case 0x6310a4:c.instructions+=80;goto B6310a4;
case 0x6310a7:c.instructions+=79;goto B6310a7;
case 0x6310aa:c.instructions+=78;goto B6310aa;
case 0x6310ac:c.instructions+=77;goto B6310ac;
case 0x6310b0:c.instructions+=76;goto B6310b0;
case 0x6310b3:c.instructions+=75;goto B6310b3;
case 0x6310b6:c.instructions+=74;goto B6310b6;
case 0x6310b9:c.instructions+=73;goto B6310b9;
case 0x6310bc:c.instructions+=72;goto B6310bc;
case 0x6310be:c.instructions+=71;goto B6310be;
case 0x6310c1:c.instructions+=70;goto B6310c1;
case 0x6310c4:c.instructions+=69;goto B6310c4;
case 0x6310c6:c.instructions+=68;goto B6310c6;
case 0x6310c9:c.instructions+=67;goto B6310c9;
case 0x6310cc:c.instructions+=66;goto B6310cc;
case 0x6310ce:c.instructions+=65;goto B6310ce;
case 0x6310d2:c.instructions+=64;goto B6310d2;
case 0x6310d5:c.instructions+=63;goto B6310d5;
case 0x6310d8:c.instructions+=62;goto B6310d8;
case 0x6310db:c.instructions+=61;goto B6310db;
case 0x6310de:c.instructions+=60;goto B6310de;
case 0x6310e0:c.instructions+=59;goto B6310e0;
case 0x6310e3:c.instructions+=58;goto B6310e3;
case 0x6310e6:c.instructions+=57;goto B6310e6;
case 0x6310e8:c.instructions+=56;goto B6310e8;
case 0x6310eb:c.instructions+=55;goto B6310eb;
case 0x6310ee:c.instructions+=54;goto B6310ee;
case 0x6310f0:c.instructions+=53;goto B6310f0;
case 0x6310f4:c.instructions+=52;goto B6310f4;
case 0x6310f7:c.instructions+=51;goto B6310f7;
case 0x6310fa:c.instructions+=50;goto B6310fa;
case 0x6310fd:c.instructions+=49;goto B6310fd;
case 0x631100:c.instructions+=48;goto B631100;
case 0x631102:c.instructions+=47;goto B631102;
case 0x631105:c.instructions+=46;goto B631105;
case 0x631108:c.instructions+=45;goto B631108;
case 0x63110a:c.instructions+=44;goto B63110a;
case 0x63110d:c.instructions+=43;goto B63110d;
case 0x63110f:c.instructions+=42;goto B63110f;
case 0x631111:c.instructions+=41;goto B631111;
case 0x631118:c.instructions+=40;goto B631118;
case 0x63111b:c.instructions+=39;goto B63111b;
case 0x63111e:c.instructions+=38;goto B63111e;
case 0x631121:c.instructions+=37;goto B631121;
case 0x631124:c.instructions+=36;goto B631124;
case 0x631126:c.instructions+=35;goto B631126;
case 0x631129:c.instructions+=34;goto B631129;
case 0x63112c:c.instructions+=33;goto B63112c;
case 0x63112e:c.instructions+=32;goto B63112e;
case 0x631131:c.instructions+=31;goto B631131;
case 0x631134:c.instructions+=30;goto B631134;
case 0x631136:c.instructions+=29;goto B631136;
case 0x63113d:c.instructions+=28;goto B63113d;
case 0x631140:c.instructions+=27;goto B631140;
case 0x631143:c.instructions+=26;goto B631143;
case 0x631147:c.instructions+=25;goto B631147;
case 0x63114a:c.instructions+=24;goto B63114a;
case 0x63114b:c.instructions+=23;goto B63114b;
case 0x63114e:c.instructions+=22;goto B63114e;
case 0x63114f:c.instructions+=21;goto B63114f;
case 0x631151:c.instructions+=20;goto B631151;
case 0x631154:c.instructions+=19;goto B631154;
case 0x631157:c.instructions+=18;goto B631157;
case 0x631159:c.instructions+=17;goto B631159;
case 0x63115c:c.instructions+=16;goto B63115c;
case 0x63115f:c.instructions+=15;goto B63115f;
case 0x631161:c.instructions+=14;goto B631161;
case 0x631168:c.instructions+=13;goto B631168;
case 0x63116b:c.instructions+=12;goto B63116b;
case 0x63116e:c.instructions+=11;goto B63116e;
case 0x631171:c.instructions+=10;goto B631171;
case 0x631174:c.instructions+=9;goto B631174;
case 0x631176:c.instructions+=8;goto B631176;
case 0x631179:c.instructions+=7;goto B631179;
case 0x63117c:c.instructions+=6;goto B63117c;
case 0x63117e:c.instructions+=5;goto B63117e;
case 0x631181:c.instructions+=4;goto B631181;
case 0x631184:c.instructions+=3;goto B631184;
case 0x631186:c.instructions+=2;goto B631186;
case 0x63118d:c.instructions+=1;goto B63118d;
case 0x631192:goto L631192;
case 0x631196:c.instructions+=6;goto B631196;
case 0x631199:c.instructions+=5;goto B631199;
case 0x63119c:c.instructions+=4;goto B63119c;
case 0x63119f:c.instructions+=3;goto B63119f;
case 0x6311a0:c.instructions+=2;goto B6311a0;
case 0x6311a4:c.instructions+=1;goto B6311a4;
case 0x6311aa:goto L6311aa;
case 0x6311af:goto L6311af;
case 0x6311b1:c.instructions+=1;goto B6311b1;
case 0x6311b3:goto L6311b3;
case 0x6311b9:c.instructions+=6;goto B6311b9;
case 0x6311bf:c.instructions+=5;goto B6311bf;
case 0x6311c5:c.instructions+=4;goto B6311c5;
case 0x6311cb:c.instructions+=3;goto B6311cb;
case 0x6311cd:c.instructions+=2;goto B6311cd;
case 0x6311d0:c.instructions+=1;goto B6311d0;
case 0x6311d2:goto L6311d2;
case 0x6311d8:c.instructions+=2;goto B6311d8;
case 0x6311de:c.instructions+=1;goto B6311de;
case 0x6311e4:goto L6311e4;
case 0x6311e8:c.instructions+=24;goto B6311e8;
case 0x6311ec:c.instructions+=23;goto B6311ec;
case 0x6311ef:c.instructions+=22;goto B6311ef;
case 0x6311f0:c.instructions+=21;goto B6311f0;
case 0x6311f4:c.instructions+=20;goto B6311f4;
case 0x6311f5:c.instructions+=19;goto B6311f5;
case 0x6311f6:c.instructions+=18;goto B6311f6;
case 0x6311f8:c.instructions+=17;goto B6311f8;
case 0x6311fa:c.instructions+=16;goto B6311fa;
case 0x6311fb:c.instructions+=15;goto B6311fb;
case 0x6311ff:c.instructions+=14;goto B6311ff;
case 0x631205:c.instructions+=13;goto B631205;
case 0x631206:c.instructions+=12;goto B631206;
case 0x63120c:c.instructions+=11;goto B63120c;
case 0x631212:c.instructions+=10;goto B631212;
case 0x631213:c.instructions+=9;goto B631213;
case 0x63121a:c.instructions+=8;goto B63121a;
case 0x63121b:c.instructions+=7;goto B63121b;
case 0x63121e:c.instructions+=6;goto B63121e;
case 0x631222:c.instructions+=5;goto B631222;
case 0x631223:c.instructions+=4;goto B631223;
case 0x631224:c.instructions+=3;goto B631224;
case 0x631225:c.instructions+=2;goto B631225;
case 0x631229:c.instructions+=1;goto B631229;
case 0x63122e:goto L63122e;
case 0x631232:c.instructions+=5;goto B631232;
case 0x631236:c.instructions+=4;goto B631236;
case 0x631238:c.instructions+=3;goto B631238;
case 0x63123a:c.instructions+=2;goto B63123a;
case 0x63123e:c.instructions+=1;goto B63123e;
case 0x631244:goto L631244;
case 0x631245:c.instructions+=5;goto B631245;
case 0x631246:c.instructions+=4;goto B631246;
case 0x631247:c.instructions+=3;goto B631247;
case 0x631249:c.instructions+=2;goto B631249;
case 0x63124a:c.instructions+=1;goto B63124a;
case 0x631250:goto L631250;
case 0x631251:c.instructions+=9;goto B631251;
case 0x631253:c.instructions+=8;goto B631253;
case 0x631256:c.instructions+=7;goto B631256;
case 0x63125c:c.instructions+=6;goto B63125c;
case 0x631261:c.instructions+=5;goto B631261;
case 0x631263:c.instructions+=4;goto B631263;
case 0x631264:c.instructions+=3;goto B631264;
case 0x631265:c.instructions+=2;goto B631265;
case 0x631266:c.instructions+=1;goto B631266;
case 0x63126c:goto L63126c;
case 0x631271:c.instructions+=2;goto B631271;
case 0x631273:c.instructions+=1;goto B631273;
case 0x631279:goto L631279;
case 0x631280:c.instructions+=1;goto B631280;
case 0x631286:goto L631286;
case 0x631289:c.instructions+=8;goto B631289;
case 0x63128c:c.instructions+=7;goto B63128c;
case 0x63128e:c.instructions+=6;goto B63128e;
case 0x631291:c.instructions+=5;goto B631291;
case 0x631294:c.instructions+=4;goto B631294;
case 0x631297:c.instructions+=3;goto B631297;
case 0x63129e:c.instructions+=2;goto B63129e;
case 0x6312a3:c.instructions+=1;goto B6312a3;
case 0x6312a5:goto L6312a5;
case 0x6312a7:c.instructions+=1;goto B6312a7;
case 0x6312a9:goto L6312a9;
case 0x6312ab:goto L6312ab;
case 0x6312b0:goto L6312b0;
case 0x6312b6:c.instructions+=2;goto B6312b6;
case 0x6312b7:c.instructions+=1;goto B6312b7;
case 0x6312bc:goto L6312bc;
case 0x6312c0:c.instructions+=5;goto B6312c0;
case 0x6312c6:c.instructions+=4;goto B6312c6;
case 0x6312c8:c.instructions+=3;goto B6312c8;
case 0x6312ce:c.instructions+=2;goto B6312ce;
case 0x6312d2:c.instructions+=1;goto B6312d2;
case 0x6312d4:goto L6312d4;
case 0x6312d7:c.instructions+=2;goto B6312d7;
case 0x6312d9:c.instructions+=1;goto B6312d9;
case 0x6312db:goto L6312db;
case 0x6312dd:c.instructions+=1;goto B6312dd;
case 0x6312df:goto L6312df;
case 0x6312e2:c.instructions+=2;goto B6312e2;
case 0x6312e5:c.instructions+=1;goto B6312e5;
case 0x6312e7:goto L6312e7;
case 0x6312ea:c.instructions+=1;goto B6312ea;
case 0x6312ec:goto L6312ec;
case 0x6312ef:c.instructions+=1;goto B6312ef;
case 0x6312f1:goto L6312f1;
case 0x6312f6:c.instructions+=5;goto B6312f6;
case 0x6312fa:c.instructions+=4;goto B6312fa;
case 0x6312fe:c.instructions+=3;goto B6312fe;
case 0x631300:c.instructions+=2;goto B631300;
case 0x631301:c.instructions+=1;goto B631301;
case 0x631303:goto L631303;
case 0x631309:c.instructions+=5;goto B631309;
case 0x63130c:c.instructions+=4;goto B63130c;
case 0x631311:c.instructions+=3;goto B631311;
case 0x631315:c.instructions+=2;goto B631315;
case 0x631319:c.instructions+=1;goto B631319;
case 0x63131b:goto L63131b;
case 0x63131d:c.instructions+=5;goto B63131d;
case 0x631320:c.instructions+=4;goto B631320;
case 0x631324:c.instructions+=3;goto B631324;
case 0x631328:c.instructions+=2;goto B631328;
case 0x63132c:c.instructions+=1;goto B63132c;
case 0x631332:goto L631332;
case 0x631339:c.instructions+=2;goto B631339;
case 0x63133d:c.instructions+=1;goto B63133d;
case 0x631340:goto L631340;
case 0x631346:c.instructions+=6;goto B631346;
case 0x63134a:c.instructions+=5;goto B63134a;
case 0x63134d:c.instructions+=4;goto B63134d;
case 0x63134e:c.instructions+=3;goto B63134e;
case 0x63134f:c.instructions+=2;goto B63134f;
case 0x631350:c.instructions+=1;goto B631350;
case 0x631355:goto L631355;
case 0x631358:c.instructions+=2;goto B631358;
case 0x63135a:c.instructions+=1;goto B63135a;
case 0x631360:goto L631360;
case 0x631363:c.instructions+=7;goto B631363;
case 0x631364:c.instructions+=6;goto B631364;
case 0x63136b:c.instructions+=5;goto B63136b;
case 0x63136c:c.instructions+=4;goto B63136c;
case 0x631373:c.instructions+=3;goto B631373;
case 0x631374:c.instructions+=2;goto B631374;
case 0x631376:c.instructions+=1;goto B631376;
case 0x63137b:goto L63137b;
case 0x63137e:c.instructions+=5;goto B63137e;
case 0x63137f:c.instructions+=4;goto B63137f;
case 0x631386:c.instructions+=3;goto B631386;
case 0x631387:c.instructions+=2;goto B631387;
case 0x631389:c.instructions+=1;goto B631389;
case 0x63138e:goto L63138e;
case 0x631391:c.instructions+=7;goto B631391;
case 0x631397:c.instructions+=6;goto B631397;
case 0x63139d:c.instructions+=5;goto B63139d;
case 0x6313a2:c.instructions+=4;goto B6313a2;
case 0x6313a4:c.instructions+=3;goto B6313a4;
case 0x6313a6:c.instructions+=2;goto B6313a6;
case 0x6313ac:c.instructions+=1;goto B6313ac;
case 0x6313ae:goto L6313ae;
case 0x6313b4:goto L6313b4;
case 0x6313b5:c.instructions+=3;goto B6313b5;
case 0x6313b9:c.instructions+=2;goto B6313b9;
case 0x6313ba:c.instructions+=1;goto B6313ba;
case 0x6313bf:goto L6313bf;
case 0x6313c5:c.instructions+=3;goto B6313c5;
case 0x6313c8:c.instructions+=2;goto B6313c8;
case 0x6313cb:c.instructions+=1;goto B6313cb;
case 0x6313cd:goto L6313cd;
case 0x6313d1:c.instructions+=9;goto B6313d1;
case 0x6313d3:c.instructions+=8;goto B6313d3;
case 0x6313d7:c.instructions+=7;goto B6313d7;
case 0x6313db:c.instructions+=6;goto B6313db;
case 0x6313dd:c.instructions+=5;goto B6313dd;
case 0x6313e1:c.instructions+=4;goto B6313e1;
case 0x6313e5:c.instructions+=3;goto B6313e5;
case 0x6313e7:c.instructions+=2;goto B6313e7;
case 0x6313eb:c.instructions+=1;goto B6313eb;
case 0x6313f0:goto L6313f0;
case 0x6313f4:c.instructions+=137;goto B6313f4;
case 0x6313fa:c.instructions+=136;goto B6313fa;
case 0x6313fe:c.instructions+=135;goto B6313fe;
case 0x631404:c.instructions+=134;goto B631404;
case 0x631408:c.instructions+=133;goto B631408;
case 0x63140e:c.instructions+=132;goto B63140e;
case 0x631412:c.instructions+=131;goto B631412;
case 0x631416:c.instructions+=130;goto B631416;
case 0x63141a:c.instructions+=129;goto B63141a;
case 0x63141c:c.instructions+=128;goto B63141c;
case 0x63141e:c.instructions+=127;goto B63141e;
case 0x631425:c.instructions+=126;goto B631425;
case 0x631429:c.instructions+=125;goto B631429;
case 0x63142f:c.instructions+=124;goto B63142f;
case 0x631433:c.instructions+=123;goto B631433;
case 0x631437:c.instructions+=122;goto B631437;
case 0x63143b:c.instructions+=121;goto B63143b;
case 0x63143f:c.instructions+=120;goto B63143f;
case 0x631441:c.instructions+=119;goto B631441;
case 0x631448:c.instructions+=118;goto B631448;
case 0x63144c:c.instructions+=117;goto B63144c;
case 0x631452:c.instructions+=116;goto B631452;
case 0x631456:c.instructions+=115;goto B631456;
case 0x631458:c.instructions+=114;goto B631458;
case 0x63145a:c.instructions+=113;goto B63145a;
case 0x631461:c.instructions+=112;goto B631461;
case 0x631463:c.instructions+=111;goto B631463;
case 0x631467:c.instructions+=110;goto B631467;
case 0x63146b:c.instructions+=109;goto B63146b;
case 0x63146f:c.instructions+=108;goto B63146f;
case 0x631471:c.instructions+=107;goto B631471;
case 0x631478:c.instructions+=106;goto B631478;
case 0x63147a:c.instructions+=105;goto B63147a;
case 0x63147e:c.instructions+=104;goto B63147e;
case 0x631484:c.instructions+=103;goto B631484;
case 0x631488:c.instructions+=102;goto B631488;
case 0x63148e:c.instructions+=101;goto B63148e;
case 0x631492:c.instructions+=100;goto B631492;
case 0x631498:c.instructions+=99;goto B631498;
case 0x63149c:c.instructions+=98;goto B63149c;
case 0x6314a0:c.instructions+=97;goto B6314a0;
case 0x6314a4:c.instructions+=96;goto B6314a4;
case 0x6314a6:c.instructions+=95;goto B6314a6;
case 0x6314a8:c.instructions+=94;goto B6314a8;
case 0x6314af:c.instructions+=93;goto B6314af;
case 0x6314b3:c.instructions+=92;goto B6314b3;
case 0x6314b9:c.instructions+=91;goto B6314b9;
case 0x6314bd:c.instructions+=90;goto B6314bd;
case 0x6314c1:c.instructions+=89;goto B6314c1;
case 0x6314c5:c.instructions+=88;goto B6314c5;
case 0x6314c9:c.instructions+=87;goto B6314c9;
case 0x6314cb:c.instructions+=86;goto B6314cb;
case 0x6314d2:c.instructions+=85;goto B6314d2;
case 0x6314d6:c.instructions+=84;goto B6314d6;
case 0x6314dc:c.instructions+=83;goto B6314dc;
case 0x6314e0:c.instructions+=82;goto B6314e0;
case 0x6314e2:c.instructions+=81;goto B6314e2;
case 0x6314e4:c.instructions+=80;goto B6314e4;
case 0x6314eb:c.instructions+=79;goto B6314eb;
case 0x6314ed:c.instructions+=78;goto B6314ed;
case 0x6314f1:c.instructions+=77;goto B6314f1;
case 0x6314f5:c.instructions+=76;goto B6314f5;
case 0x6314f9:c.instructions+=75;goto B6314f9;
case 0x6314fb:c.instructions+=74;goto B6314fb;
case 0x631502:c.instructions+=73;goto B631502;
case 0x631504:c.instructions+=72;goto B631504;
case 0x631508:c.instructions+=71;goto B631508;
case 0x63150e:c.instructions+=70;goto B63150e;
case 0x631512:c.instructions+=69;goto B631512;
case 0x631518:c.instructions+=68;goto B631518;
case 0x63151a:c.instructions+=67;goto B63151a;
case 0x63151c:c.instructions+=66;goto B63151c;
case 0x631520:c.instructions+=65;goto B631520;
case 0x631524:c.instructions+=64;goto B631524;
case 0x63152b:c.instructions+=63;goto B63152b;
case 0x631531:c.instructions+=62;goto B631531;
case 0x631532:c.instructions+=61;goto B631532;
case 0x631536:c.instructions+=60;goto B631536;
case 0x63153a:c.instructions+=59;goto B63153a;
case 0x63153c:c.instructions+=58;goto B63153c;
case 0x63153d:c.instructions+=57;goto B63153d;
case 0x631541:c.instructions+=56;goto B631541;
case 0x631548:c.instructions+=55;goto B631548;
case 0x63154c:c.instructions+=54;goto B63154c;
case 0x631552:c.instructions+=53;goto B631552;
case 0x631556:c.instructions+=52;goto B631556;
case 0x63155a:c.instructions+=51;goto B63155a;
case 0x63155e:c.instructions+=50;goto B63155e;
case 0x631560:c.instructions+=49;goto B631560;
case 0x631562:c.instructions+=48;goto B631562;
case 0x631569:c.instructions+=47;goto B631569;
case 0x63156d:c.instructions+=46;goto B63156d;
case 0x631573:c.instructions+=45;goto B631573;
case 0x631577:c.instructions+=44;goto B631577;
case 0x631579:c.instructions+=43;goto B631579;
case 0x63157b:c.instructions+=42;goto B63157b;
case 0x631582:c.instructions+=41;goto B631582;
case 0x631584:c.instructions+=40;goto B631584;
case 0x631586:c.instructions+=39;goto B631586;
case 0x631588:c.instructions+=38;goto B631588;
case 0x63158c:c.instructions+=37;goto B63158c;
case 0x631590:c.instructions+=36;goto B631590;
case 0x631594:c.instructions+=35;goto B631594;
case 0x63159b:c.instructions+=34;goto B63159b;
case 0x63159f:c.instructions+=33;goto B63159f;
case 0x6315a5:c.instructions+=32;goto B6315a5;
case 0x6315a9:c.instructions+=31;goto B6315a9;
case 0x6315af:c.instructions+=30;goto B6315af;
case 0x6315b3:c.instructions+=29;goto B6315b3;
case 0x6315b9:c.instructions+=28;goto B6315b9;
case 0x6315bd:c.instructions+=27;goto B6315bd;
case 0x6315c1:c.instructions+=26;goto B6315c1;
case 0x6315c5:c.instructions+=25;goto B6315c5;
case 0x6315c7:c.instructions+=24;goto B6315c7;
case 0x6315c9:c.instructions+=23;goto B6315c9;
case 0x6315d0:c.instructions+=22;goto B6315d0;
case 0x6315d4:c.instructions+=21;goto B6315d4;
case 0x6315da:c.instructions+=20;goto B6315da;
case 0x6315de:c.instructions+=19;goto B6315de;
case 0x6315e2:c.instructions+=18;goto B6315e2;
case 0x6315e6:c.instructions+=17;goto B6315e6;
case 0x6315ea:c.instructions+=16;goto B6315ea;
case 0x6315ec:c.instructions+=15;goto B6315ec;
case 0x6315f3:c.instructions+=14;goto B6315f3;
case 0x6315f7:c.instructions+=13;goto B6315f7;
case 0x6315fd:c.instructions+=12;goto B6315fd;
case 0x631601:c.instructions+=11;goto B631601;
case 0x631603:c.instructions+=10;goto B631603;
case 0x631605:c.instructions+=9;goto B631605;
case 0x63160c:c.instructions+=8;goto B63160c;
case 0x63160e:c.instructions+=7;goto B63160e;
case 0x631612:c.instructions+=6;goto B631612;
case 0x631616:c.instructions+=5;goto B631616;
case 0x63161a:c.instructions+=4;goto B63161a;
case 0x63161c:c.instructions+=3;goto B63161c;
case 0x631623:c.instructions+=2;goto B631623;
case 0x631625:c.instructions+=1;goto B631625;
case 0x63162a:goto L63162a;
case 0x63162d:goto L63162d;
case 0x631632:c.instructions+=1;goto B631632;
case 0x631634:goto L631634;
case 0x631638:c.instructions+=6;goto B631638;
case 0x63163c:c.instructions+=5;goto B63163c;
case 0x63163e:c.instructions+=4;goto B63163e;
case 0x631640:c.instructions+=3;goto B631640;
case 0x631643:c.instructions+=2;goto B631643;
case 0x631644:c.instructions+=1;goto B631644;
case 0x631648:goto L631648;
case 0x63164b:c.instructions+=6;goto B63164b;
case 0x631651:c.instructions+=5;goto B631651;
case 0x631656:c.instructions+=4;goto B631656;
case 0x631658:c.instructions+=3;goto B631658;
case 0x63165a:c.instructions+=2;goto B63165a;
case 0x631660:c.instructions+=1;goto B631660;
case 0x631662:goto L631662;
case 0x631665:goto L631665;
case 0x631669:c.instructions+=19;goto B631669;
case 0x63166d:c.instructions+=18;goto B63166d;
case 0x63166e:c.instructions+=17;goto B63166e;
case 0x63166f:c.instructions+=16;goto B63166f;
case 0x631671:c.instructions+=15;goto B631671;
case 0x631673:c.instructions+=14;goto B631673;
case 0x631678:c.instructions+=13;goto B631678;
case 0x63167f:c.instructions+=12;goto B63167f;
case 0x631680:c.instructions+=11;goto B631680;
case 0x631687:c.instructions+=10;goto B631687;
case 0x631688:c.instructions+=9;goto B631688;
case 0x63168f:c.instructions+=8;goto B63168f;
case 0x631690:c.instructions+=7;goto B631690;
case 0x631694:c.instructions+=6;goto B631694;
case 0x631695:c.instructions+=5;goto B631695;
case 0x631696:c.instructions+=4;goto B631696;
case 0x63169b:c.instructions+=3;goto B63169b;
case 0x63169c:c.instructions+=2;goto B63169c;
case 0x63169e:c.instructions+=1;goto B63169e;
case 0x6316a3:goto L6316a3;
case 0x6316a7:c.instructions+=8;goto B6316a7;
case 0x6316ab:c.instructions+=7;goto B6316ab;
case 0x6316af:c.instructions+=6;goto B6316af;
case 0x6316b0:c.instructions+=5;goto B6316b0;
case 0x6316b3:c.instructions+=4;goto B6316b3;
case 0x6316b5:c.instructions+=3;goto B6316b5;
case 0x6316b9:c.instructions+=2;goto B6316b9;
case 0x6316bd:c.instructions+=1;goto B6316bd;
case 0x6316c3:goto L6316c3;
case 0x6316c4:c.instructions+=5;goto B6316c4;
case 0x6316c5:c.instructions+=4;goto B6316c5;
case 0x6316c6:c.instructions+=3;goto B6316c6;
case 0x6316c8:c.instructions+=2;goto B6316c8;
case 0x6316c9:c.instructions+=1;goto B6316c9;
case 0x6316d0:goto L6316d0;
case 0x6316d1:c.instructions+=9;goto B6316d1;
case 0x6316d3:c.instructions+=8;goto B6316d3;
case 0x6316d6:c.instructions+=7;goto B6316d6;
case 0x6316dc:c.instructions+=6;goto B6316dc;
case 0x6316e1:c.instructions+=5;goto B6316e1;
case 0x6316e3:c.instructions+=4;goto B6316e3;
case 0x6316e4:c.instructions+=3;goto B6316e4;
case 0x6316e5:c.instructions+=2;goto B6316e5;
case 0x6316e6:c.instructions+=1;goto B6316e6;
case 0x6316ec:goto L6316ec;
case 0x6316ef:c.instructions+=2;goto B6316ef;
case 0x6316f0:c.instructions+=1;goto B6316f0;
case 0x6316f5:goto L6316f5;
case 0x6316fb:c.instructions+=5;goto B6316fb;
case 0x6316fe:c.instructions+=4;goto B6316fe;
case 0x631701:c.instructions+=3;goto B631701;
case 0x631703:c.instructions+=2;goto B631703;
case 0x631707:c.instructions+=1;goto B631707;
case 0x63170d:goto L63170d;
case 0x631712:c.instructions+=3;goto B631712;
case 0x631714:c.instructions+=2;goto B631714;
case 0x63171c:c.instructions+=1;goto B63171c;
case 0x63171e:goto L63171e;
case 0x631724:c.instructions+=2;goto B631724;
case 0x631726:c.instructions+=1;goto B631726;
case 0x631728:goto L631728;
case 0x63172b:c.instructions+=4;goto B63172b;
case 0x631730:c.instructions+=3;goto B631730;
case 0x631732:c.instructions+=2;goto B631732;
case 0x631738:c.instructions+=1;goto B631738;
case 0x63173a:goto L63173a;
case 0x631744:goto L631744;
case 0x631746:c.instructions+=2;goto B631746;
case 0x631748:c.instructions+=1;goto B631748;
case 0x63174e:goto L63174e;
case 0x631750:goto L631750;
case 0x631753:c.instructions+=2;goto B631753;
case 0x631755:c.instructions+=1;goto B631755;
case 0x631757:goto L631757;
case 0x63175a:c.instructions+=2;goto B63175a;
case 0x63175d:c.instructions+=1;goto B63175d;
case 0x63175f:goto L63175f;
case 0x631760:c.instructions+=2;goto B631760;
case 0x631762:c.instructions+=1;goto B631762;
case 0x631767:goto L631767;
case 0x631768:c.instructions+=2;goto B631768;
case 0x63176a:c.instructions+=1;goto B63176a;
case 0x63176f:goto L63176f;
case 0x631772:c.instructions+=3;goto B631772;
case 0x631778:c.instructions+=2;goto B631778;
case 0x63177a:c.instructions+=1;goto B63177a;
case 0x63177c:goto L63177c;
case 0x63177d:c.instructions+=1;goto B63177d;
case 0x631782:goto L631782;
case 0x631786:c.instructions+=2;goto B631786;
case 0x63178c:c.instructions+=1;goto B63178c;
case 0x631792:goto L631792;
case 0x631798:c.instructions+=2;goto B631798;
case 0x63179a:c.instructions+=1;goto B63179a;
case 0x6317a0:goto L6317a0;
case 0x6317a1:c.instructions+=2;goto B6317a1;
case 0x6317a2:c.instructions+=1;goto B6317a2;
case 0x6317a7:goto L6317a7;
case 0x6317aa:c.instructions+=2;goto B6317aa;
case 0x6317ac:c.instructions+=1;goto B6317ac;
case 0x6317b2:goto L6317b2;
case 0x6317b5:c.instructions+=5;goto B6317b5;
case 0x6317bb:c.instructions+=4;goto B6317bb;
case 0x6317c0:c.instructions+=3;goto B6317c0;
case 0x6317c2:c.instructions+=2;goto B6317c2;
case 0x6317c4:c.instructions+=1;goto B6317c4;
case 0x6317ca:goto L6317ca;
case 0x6317ce:c.instructions+=2;goto B6317ce;
case 0x6317d0:c.instructions+=1;goto B6317d0;
case 0x6317d6:goto L6317d6;
case 0x6317dc:c.instructions+=3;goto B6317dc;
case 0x6317dd:c.instructions+=2;goto B6317dd;
case 0x6317df:c.instructions+=1;goto B6317df;
case 0x6317e4:goto L6317e4;
case 0x6317e8:c.instructions+=10;goto B6317e8;
case 0x6317eb:c.instructions+=9;goto B6317eb;
case 0x6317ec:c.instructions+=8;goto B6317ec;
case 0x6317ed:c.instructions+=7;goto B6317ed;
case 0x6317f4:c.instructions+=6;goto B6317f4;
case 0x6317f8:c.instructions+=5;goto B6317f8;
case 0x6317f9:c.instructions+=4;goto B6317f9;
case 0x631800:c.instructions+=3;goto B631800;
case 0x631801:c.instructions+=2;goto B631801;
case 0x631803:c.instructions+=1;goto B631803;
case 0x631808:goto L631808;
case 0x63180b:c.instructions+=3;goto B63180b;
case 0x63180f:c.instructions+=2;goto B63180f;
case 0x631812:c.instructions+=1;goto B631812;
case 0x631814:goto L631814;
case 0x631815:c.instructions+=4;goto B631815;
case 0x631819:c.instructions+=3;goto B631819;
case 0x63181a:c.instructions+=2;goto B63181a;
case 0x63181c:c.instructions+=1;goto B63181c;
case 0x631821:goto L631821;
case 0x631824:c.instructions+=6;goto B631824;
case 0x63182a:c.instructions+=5;goto B63182a;
case 0x63182f:c.instructions+=4;goto B63182f;
case 0x631831:c.instructions+=3;goto B631831;
case 0x631837:c.instructions+=2;goto B631837;
case 0x631839:c.instructions+=1;goto B631839;
case 0x63183b:goto L63183b;
case 0x631841:goto L631841;
case 0x631843:c.instructions+=2;goto B631843;
case 0x631849:c.instructions+=1;goto B631849;
case 0x63184b:goto L63184b;
case 0x63184e:goto L63184e;
case 0x631854:c.instructions+=18;goto B631854;
case 0x631855:c.instructions+=17;goto B631855;
case 0x63185b:c.instructions+=16;goto B63185b;
case 0x63185c:c.instructions+=15;goto B63185c;
case 0x63185e:c.instructions+=14;goto B63185e;
case 0x631860:c.instructions+=13;goto B631860;
case 0x631862:c.instructions+=12;goto B631862;
case 0x631866:c.instructions+=11;goto B631866;
case 0x631867:c.instructions+=10;goto B631867;
case 0x63186e:c.instructions+=9;goto B63186e;
case 0x63186f:c.instructions+=8;goto B63186f;
case 0x631876:c.instructions+=7;goto B631876;
case 0x631877:c.instructions+=6;goto B631877;
case 0x631878:c.instructions+=5;goto B631878;
case 0x631879:c.instructions+=4;goto B631879;
case 0x63187e:c.instructions+=3;goto B63187e;
case 0x63187f:c.instructions+=2;goto B63187f;
case 0x631881:c.instructions+=1;goto B631881;
case 0x631886:goto L631886;
case 0x631888:goto L631888;
case 0x63188e:c.instructions+=5;goto B63188e;
case 0x631893:c.instructions+=4;goto B631893;
case 0x631895:c.instructions+=3;goto B631895;
case 0x63189b:c.instructions+=2;goto B63189b;
case 0x63189d:c.instructions+=1;goto B63189d;
case 0x63189f:goto L63189f;
case 0x6318a5:goto L6318a5;
case 0x6318a7:c.instructions+=2;goto B6318a7;
case 0x6318ad:c.instructions+=1;goto B6318ad;
case 0x6318af:goto L6318af;
case 0x6318b2:goto L6318b2;
case 0x6318b8:c.instructions+=18;goto B6318b8;
case 0x6318b9:c.instructions+=17;goto B6318b9;
case 0x6318bf:c.instructions+=16;goto B6318bf;
case 0x6318c0:c.instructions+=15;goto B6318c0;
case 0x6318c2:c.instructions+=14;goto B6318c2;
case 0x6318c4:c.instructions+=13;goto B6318c4;
case 0x6318c6:c.instructions+=12;goto B6318c6;
case 0x6318ca:c.instructions+=11;goto B6318ca;
case 0x6318cb:c.instructions+=10;goto B6318cb;
case 0x6318d2:c.instructions+=9;goto B6318d2;
case 0x6318d3:c.instructions+=8;goto B6318d3;
case 0x6318da:c.instructions+=7;goto B6318da;
case 0x6318db:c.instructions+=6;goto B6318db;
case 0x6318dc:c.instructions+=5;goto B6318dc;
case 0x6318dd:c.instructions+=4;goto B6318dd;
case 0x6318e2:c.instructions+=3;goto B6318e2;
case 0x6318e3:c.instructions+=2;goto B6318e3;
case 0x6318e5:c.instructions+=1;goto B6318e5;
case 0x6318ea:goto L6318ea;
case 0x6318ef:c.instructions+=2;goto B6318ef;
case 0x6318f1:c.instructions+=1;goto B6318f1;
case 0x6318f3:goto L6318f3;
case 0x6318f6:c.instructions+=2;goto B6318f6;
case 0x6318f9:c.instructions+=1;goto B6318f9;
case 0x6318fb:goto L6318fb;
case 0x631900:c.instructions+=2;goto B631900;
case 0x631902:c.instructions+=1;goto B631902;
case 0x631904:goto L631904;
case 0x631907:c.instructions+=1;goto B631907;
case 0x631909:goto L631909;
case 0x63190c:c.instructions+=2;goto B63190c;
case 0x63190e:c.instructions+=1;goto B63190e;
case 0x631910:goto L631910;
case 0x631913:c.instructions+=1;goto B631913;
case 0x631915:goto L631915;
case 0x631918:c.instructions+=1;goto B631918;
case 0x63191a:goto L63191a;
case 0x63191e:c.instructions+=7;goto B63191e;
case 0x631921:c.instructions+=6;goto B631921;
case 0x631922:c.instructions+=5;goto B631922;
case 0x631925:c.instructions+=4;goto B631925;
case 0x631926:c.instructions+=3;goto B631926;
case 0x631927:c.instructions+=2;goto B631927;
case 0x631929:c.instructions+=1;goto B631929;
case 0x63192e:goto L63192e;
case 0x631930:goto L631930;
case 0x631933:c.instructions+=2;goto B631933;
case 0x631935:c.instructions+=1;goto B631935;
case 0x631937:goto L631937;
case 0x63193a:c.instructions+=2;goto B63193a;
case 0x63193b:c.instructions+=1;goto B63193b;
case 0x631940:goto L631940;
case 0x631943:c.instructions+=4;goto B631943;
case 0x631946:c.instructions+=3;goto B631946;
case 0x631949:c.instructions+=2;goto B631949;
case 0x63194b:c.instructions+=1;goto B63194b;
case 0x63194d:goto L63194d;
case 0x63194f:c.instructions+=1;goto B63194f;
case 0x631951:goto L631951;
case 0x631954:c.instructions+=2;goto B631954;
case 0x631956:c.instructions+=1;goto B631956;
case 0x631958:goto L631958;
case 0x63195a:c.instructions+=2;goto B63195a;
case 0x63195c:c.instructions+=1;goto B63195c;
case 0x63195e:goto L63195e;
case 0x631960:c.instructions+=1;goto B631960;
case 0x631962:goto L631962;
case 0x631965:c.instructions+=1;goto B631965;
case 0x631967:goto L631967;
case 0x631969:goto L631969;
case 0x63196b:c.instructions+=1;goto B63196b;
case 0x63196e:goto L63196e;
case 0x631970:c.instructions+=1;goto B631970;
case 0x631972:goto L631972;
case 0x631978:c.instructions+=2;goto B631978;
case 0x631979:c.instructions+=1;goto B631979;
case 0x63197e:goto L63197e;
case 0x631980:c.instructions+=2;goto B631980;
case 0x631986:c.instructions+=1;goto B631986;
case 0x63198c:goto L63198c;
case 0x63198d:c.instructions+=5;goto B63198d;
case 0x63198e:c.instructions+=4;goto B63198e;
case 0x63198f:c.instructions+=3;goto B63198f;
case 0x631991:c.instructions+=2;goto B631991;
case 0x631992:c.instructions+=1;goto B631992;
case 0x6319a0:goto L6319a0;
case 0x6319a1:c.instructions+=9;goto B6319a1;
case 0x6319a2:c.instructions+=8;goto B6319a2;
case 0x6319a8:c.instructions+=7;goto B6319a8;
case 0x6319a9:c.instructions+=6;goto B6319a9;
case 0x6319aa:c.instructions+=5;goto B6319aa;
case 0x6319ab:c.instructions+=4;goto B6319ab;
case 0x6319ad:c.instructions+=3;goto B6319ad;
case 0x6319af:c.instructions+=2;goto B6319af;
case 0x6319b3:c.instructions+=1;goto B6319b3;
case 0x6319b7:goto L6319b7;
case 0x6319bc:c.instructions+=1;goto B6319bc;
case 0x6319be:goto L6319be;
case 0x6319c1:c.instructions+=6;goto B6319c1;
case 0x6319c4:c.instructions+=5;goto B6319c4;
case 0x6319c8:c.instructions+=4;goto B6319c8;
case 0x6319cb:c.instructions+=3;goto B6319cb;
case 0x6319cd:c.instructions+=2;goto B6319cd;
case 0x6319cf:c.instructions+=1;goto B6319cf;
case 0x6319d1:goto L6319d1;
case 0x6319d3:c.instructions+=1;goto B6319d3;
case 0x6319d5:goto L6319d5;
case 0x6319d8:c.instructions+=1;goto B6319d8;
case 0x6319e0:goto L6319e0;
case 0x6319e5:c.instructions+=4;goto B6319e5;
case 0x6319e6:c.instructions+=3;goto B6319e6;
case 0x6319e9:c.instructions+=2;goto B6319e9;
case 0x6319eb:c.instructions+=1;goto B6319eb;
case 0x6319ed:goto L6319ed;
case 0x6319ef:c.instructions+=1;goto B6319ef;
case 0x6319f1:goto L6319f1;
case 0x6319f5:goto L6319f5;
case 0x6319f7:c.instructions+=1;goto B6319f7;
case 0x6319f9:goto L6319f9;
case 0x6319fb:goto L6319fb;
case 0x6319fd:c.instructions+=2;goto B6319fd;
case 0x6319ff:c.instructions+=1;goto B6319ff;
case 0x631a01:goto L631a01;
case 0x631a02:c.instructions+=5;goto B631a02;
case 0x631a03:c.instructions+=4;goto B631a03;
case 0x631a04:c.instructions+=3;goto B631a04;
case 0x631a05:c.instructions+=2;goto B631a05;
case 0x631a06:c.instructions+=1;goto B631a06;
case 0x631a07:goto L631a07;
case 0x631a09:goto L631a09;
case 0x631a0b:goto L631a0b;
case 0x631a10:c.instructions+=3;goto B631a10;
case 0x631a13:c.instructions+=2;goto B631a13;
case 0x631a16:c.instructions+=1;goto B631a16;
case 0x631a20:goto L631a20;
case 0x631a24:c.instructions+=16;goto B631a24;
case 0x631a25:c.instructions+=15;goto B631a25;
case 0x631a29:c.instructions+=14;goto B631a29;
case 0x631a2a:c.instructions+=13;goto B631a2a;
case 0x631a2e:c.instructions+=12;goto B631a2e;
case 0x631a2f:c.instructions+=11;goto B631a2f;
case 0x631a30:c.instructions+=10;goto B631a30;
case 0x631a31:c.instructions+=9;goto B631a31;
case 0x631a33:c.instructions+=8;goto B631a33;
case 0x631a34:c.instructions+=7;goto B631a34;
case 0x631a35:c.instructions+=6;goto B631a35;
case 0x631a37:c.instructions+=5;goto B631a37;
case 0x631a3b:c.instructions+=4;goto B631a3b;
case 0x631a3c:c.instructions+=3;goto B631a3c;
case 0x631a3d:c.instructions+=2;goto B631a3d;
case 0x631a3f:c.instructions+=1;goto B631a3f;
case 0x631a44:goto L631a44;
case 0x631a46:c.instructions+=1;goto B631a46;
case 0x631a48:goto L631a48;
case 0x631a4c:c.instructions+=9;goto B631a4c;
case 0x631a4d:c.instructions+=8;goto B631a4d;
case 0x631a4e:c.instructions+=7;goto B631a4e;
case 0x631a52:c.instructions+=6;goto B631a52;
case 0x631a53:c.instructions+=5;goto B631a53;
case 0x631a54:c.instructions+=4;goto B631a54;
case 0x631a55:c.instructions+=3;goto B631a55;
case 0x631a57:c.instructions+=2;goto B631a57;
case 0x631a58:c.instructions+=1;goto B631a58;
case 0x631a5d:goto L631a5d;
case 0x631a5f:c.instructions+=1;goto B631a5f;
case 0x631a61:goto L631a61;
case 0x631a63:c.instructions+=5;goto B631a63;
case 0x631a64:c.instructions+=4;goto B631a64;
case 0x631a65:c.instructions+=3;goto B631a65;
case 0x631a66:c.instructions+=2;goto B631a66;
case 0x631a67:c.instructions+=1;goto B631a67;
case 0x631a70:goto L631a70;
case 0x631a76:c.instructions+=9;goto B631a76;
case 0x631a77:c.instructions+=8;goto B631a77;
case 0x631a7e:c.instructions+=7;goto B631a7e;
case 0x631a7f:c.instructions+=6;goto B631a7f;
case 0x631a81:c.instructions+=5;goto B631a81;
case 0x631a86:c.instructions+=4;goto B631a86;
case 0x631a88:c.instructions+=3;goto B631a88;
case 0x631a8a:c.instructions+=2;goto B631a8a;
case 0x631a8e:c.instructions+=1;goto B631a8e;
case 0x631a93:goto L631a93;
case 0x631a95:c.instructions+=5;goto B631a95;
case 0x631a97:c.instructions+=4;goto B631a97;
case 0x631a99:c.instructions+=3;goto B631a99;
case 0x631a9a:c.instructions+=2;goto B631a9a;
case 0x631a9c:c.instructions+=1;goto B631a9c;
case 0x631aa1:goto L631aa1;
case 0x631aa4:c.instructions+=3;goto B631aa4;
case 0x631aa5:c.instructions+=2;goto B631aa5;
case 0x631aa7:c.instructions+=1;goto B631aa7;
case 0x631aac:goto L631aac;
case 0x631aaf:c.instructions+=3;goto B631aaf;
case 0x631ab0:c.instructions+=2;goto B631ab0;
case 0x631ab2:c.instructions+=1;goto B631ab2;
case 0x631ab7:goto L631ab7;
case 0x631abd:c.instructions+=3;goto B631abd;
case 0x631abe:c.instructions+=2;goto B631abe;
case 0x631ac0:c.instructions+=1;goto B631ac0;
case 0x631ac5:goto L631ac5;
case 0x631acb:c.instructions+=3;goto B631acb;
case 0x631acc:c.instructions+=2;goto B631acc;
case 0x631ace:c.instructions+=1;goto B631ace;
case 0x631ad3:goto L631ad3;
case 0x631ad6:c.instructions+=2;goto B631ad6;
case 0x631ad8:c.instructions+=1;goto B631ad8;
case 0x631ada:goto L631ada;
case 0x631add:c.instructions+=3;goto B631add;
case 0x631ade:c.instructions+=2;goto B631ade;
case 0x631ae1:c.instructions+=1;goto B631ae1;
case 0x631ae6:goto L631ae6;
case 0x631ae7:c.instructions+=3;goto B631ae7;
case 0x631ae8:c.instructions+=2;goto B631ae8;
case 0x631aea:c.instructions+=1;goto B631aea;
case 0x631aef:goto L631aef;
case 0x631af1:c.instructions+=3;goto B631af1;
case 0x631af4:c.instructions+=2;goto B631af4;
case 0x631af9:c.instructions+=1;goto B631af9;
case 0x631b00:goto L631b00;
case 0x631b02:c.instructions+=5;goto B631b02;
case 0x631b04:c.instructions+=4;goto B631b04;
case 0x631b06:c.instructions+=3;goto B631b06;
case 0x631b07:c.instructions+=2;goto B631b07;
case 0x631b09:c.instructions+=1;goto B631b09;
case 0x631b0e:goto L631b0e;
case 0x631b11:c.instructions+=2;goto B631b11;
case 0x631b12:c.instructions+=1;goto B631b12;
case 0x631b14:goto L631b14;
case 0x631b18:c.instructions+=1;goto B631b18;
case 0x631b1d:goto L631b1d;
case 0x631b20:c.instructions+=2;goto B631b20;
case 0x631b22:c.instructions+=1;goto B631b22;
case 0x631b24:goto L631b24;
case 0x631b26:c.instructions+=4;goto B631b26;
case 0x631b2a:c.instructions+=3;goto B631b2a;
case 0x631b2b:c.instructions+=2;goto B631b2b;
case 0x631b31:c.instructions+=1;goto B631b31;
case 0x631b36:goto L631b36;
case 0x631b38:goto L631b38;
case 0x631b3c:c.instructions+=3;goto B631b3c;
case 0x631b3d:c.instructions+=2;goto B631b3d;
case 0x631b3f:c.instructions+=1;goto B631b3f;
case 0x631b44:goto L631b44;
case 0x631b45:c.instructions+=2;goto B631b45;
case 0x631b48:c.instructions+=1;goto B631b48;
case 0x631b4a:goto L631b4a;
case 0x631b4d:c.instructions+=2;goto B631b4d;
case 0x631b4f:c.instructions+=1;goto B631b4f;
case 0x631b51:goto L631b51;
case 0x631b55:c.instructions+=3;goto B631b55;
case 0x631b56:c.instructions+=2;goto B631b56;
case 0x631b5c:c.instructions+=1;goto B631b5c;
case 0x631b61:goto L631b61;
case 0x631b64:c.instructions+=2;goto B631b64;
case 0x631b66:c.instructions+=1;goto B631b66;
case 0x631b68:goto L631b68;
case 0x631b6c:c.instructions+=1;goto B631b6c;
case 0x631b6e:goto L631b6e;
case 0x631b70:c.instructions+=4;goto B631b70;
case 0x631b72:c.instructions+=3;goto B631b72;
case 0x631b74:c.instructions+=2;goto B631b74;
case 0x631b77:c.instructions+=1;goto B631b77;
case 0x631b7c:goto L631b7c;
case 0x631b82:c.instructions+=3;goto B631b82;
case 0x631b83:c.instructions+=2;goto B631b83;
case 0x631b85:c.instructions+=1;goto B631b85;
case 0x631b8a:goto L631b8a;
case 0x631b90:c.instructions+=3;goto B631b90;
case 0x631b91:c.instructions+=2;goto B631b91;
case 0x631b93:c.instructions+=1;goto B631b93;
case 0x631b98:goto L631b98;
case 0x631b9e:c.instructions+=3;goto B631b9e;
case 0x631b9f:c.instructions+=2;goto B631b9f;
case 0x631ba1:c.instructions+=1;goto B631ba1;
case 0x631ba6:goto L631ba6;
case 0x631ba9:c.instructions+=2;goto B631ba9;
case 0x631bab:c.instructions+=1;goto B631bab;
case 0x631bb1:goto L631bb1;
case 0x631bb3:c.instructions+=5;goto B631bb3;
case 0x631bb8:c.instructions+=4;goto B631bb8;
case 0x631bbc:c.instructions+=3;goto B631bbc;
case 0x631bbd:c.instructions+=2;goto B631bbd;
case 0x631bbf:c.instructions+=1;goto B631bbf;
case 0x631bc4:goto L631bc4;
case 0x631bc8:c.instructions+=4;goto B631bc8;
case 0x631bca:c.instructions+=3;goto B631bca;
case 0x631bd0:c.instructions+=2;goto B631bd0;
case 0x631bd4:c.instructions+=1;goto B631bd4;
case 0x631be0:goto L631be0;
case 0x631be5:c.instructions+=3;goto B631be5;
case 0x631be9:c.instructions+=2;goto B631be9;
case 0x631bef:c.instructions+=1;goto B631bef;
case 0x631bf1:goto L631bf1;
case 0x631bf4:c.instructions+=2;goto B631bf4;
case 0x631bf6:c.instructions+=1;goto B631bf6;
case 0x631bf8:goto L631bf8;
case 0x631bfe:c.instructions+=2;goto B631bfe;
case 0x631c03:c.instructions+=1;goto B631c03;
case 0x631c08:goto L631c08;
case 0x631c0a:c.instructions+=1;goto B631c0a;
case 0x631c0c:goto L631c0c;
case 0x631c10:goto L631c10;
case 0x631c13:c.instructions+=2;goto B631c13;
case 0x631c15:c.instructions+=1;goto B631c15;
case 0x631c17:goto L631c17;
case 0x631c19:c.instructions+=3;goto B631c19;
case 0x631c1b:c.instructions+=2;goto B631c1b;
case 0x631c1d:c.instructions+=1;goto B631c1d;
case 0x631c1f:goto L631c1f;
case 0x631c21:goto L631c21;
case 0x631c25:c.instructions+=1;goto B631c25;
case 0x631c27:goto L631c27;
case 0x631c28:c.instructions+=4;goto B631c28;
case 0x631c2b:c.instructions+=3;goto B631c2b;
case 0x631c31:c.instructions+=2;goto B631c31;
case 0x631c35:c.instructions+=1;goto B631c35;
case 0x631c37:goto L631c37;
case 0x631c3b:c.instructions+=1;goto B631c3b;
case 0x631c3d:goto L631c3d;
case 0x631c40:c.instructions+=3;goto B631c40;
case 0x631c43:c.instructions+=2;goto B631c43;
case 0x631c45:c.instructions+=1;goto B631c45;
case 0x631c47:goto L631c47;
case 0x631c49:c.instructions+=2;goto B631c49;
case 0x631c4f:c.instructions+=1;goto B631c4f;
case 0x631c50:goto L631c50;
case 0x631c52:c.instructions+=3;goto B631c52;
case 0x631c53:c.instructions+=2;goto B631c53;
case 0x631c58:c.instructions+=1;goto B631c58;
case 0x631c5d:goto L631c5d;
case 0x631c62:c.instructions+=4;goto B631c62;
case 0x631c63:c.instructions+=3;goto B631c63;
case 0x631c66:c.instructions+=2;goto B631c66;
case 0x631c6c:c.instructions+=1;goto B631c6c;
case 0x631c6e:goto L631c6e;
case 0x631c70:c.instructions+=5;goto B631c70;
case 0x631c75:c.instructions+=4;goto B631c75;
case 0x631c79:c.instructions+=3;goto B631c79;
case 0x631c7a:c.instructions+=2;goto B631c7a;
case 0x631c7c:c.instructions+=1;goto B631c7c;
case 0x631c81:goto L631c81;
case 0x631c84:c.instructions+=4;goto B631c84;
case 0x631c86:c.instructions+=3;goto B631c86;
case 0x631c87:c.instructions+=2;goto B631c87;
case 0x631c88:c.instructions+=1;goto B631c88;
case 0x631c8a:goto L631c8a;
case 0x631c8c:c.instructions+=1;goto B631c8c;
case 0x631c91:goto L631c91;
case 0x631c93:c.instructions+=1;goto B631c93;
case 0x631c98:goto L631c98;
case 0x631c99:c.instructions+=3;goto B631c99;
case 0x631c9a:c.instructions+=2;goto B631c9a;
case 0x631ca0:c.instructions+=1;goto B631ca0;
case 0x631cb0:goto L631cb0;
case 0x631cb1:c.instructions+=12;goto B631cb1;
case 0x631cb5:c.instructions+=11;goto B631cb5;
case 0x631cb6:c.instructions+=10;goto B631cb6;
case 0x631cba:c.instructions+=9;goto B631cba;
case 0x631cbb:c.instructions+=8;goto B631cbb;
case 0x631cbc:c.instructions+=7;goto B631cbc;
case 0x631cbe:c.instructions+=6;goto B631cbe;
case 0x631cc0:c.instructions+=5;goto B631cc0;
case 0x631cc2:c.instructions+=4;goto B631cc2;
case 0x631cc3:c.instructions+=3;goto B631cc3;
case 0x631cc4:c.instructions+=2;goto B631cc4;
case 0x631cc9:c.instructions+=1;goto B631cc9;
case 0x631cce:goto L631cce;
case 0x631cd0:c.instructions+=1;goto B631cd0;
case 0x631cd2:goto L631cd2;
case 0x631cd3:c.instructions+=3;goto B631cd3;
case 0x631cd4:c.instructions+=2;goto B631cd4;
case 0x631cd5:c.instructions+=1;goto B631cd5;
case 0x631cd8:goto L631cd8;
case 0x631cd9:c.instructions+=3;goto B631cd9;
case 0x631cda:c.instructions+=2;goto B631cda;
case 0x631cdc:c.instructions+=1;goto B631cdc;
case 0x631ce1:goto L631ce1;
case 0x631ce4:c.instructions+=3;goto B631ce4;
case 0x631ce5:c.instructions+=2;goto B631ce5;
case 0x631ce7:c.instructions+=1;goto B631ce7;
case 0x631ce9:goto L631ce9;
case 0x631ced:c.instructions+=1;goto B631ced;
case 0x631cf0:goto L631cf0;
case 0x631cf2:c.instructions+=7;goto B631cf2;
case 0x631cf3:c.instructions+=6;goto B631cf3;
case 0x631cf4:c.instructions+=5;goto B631cf4;
case 0x631cf6:c.instructions+=4;goto B631cf6;
case 0x631cf7:c.instructions+=3;goto B631cf7;
case 0x631cf8:c.instructions+=2;goto B631cf8;
case 0x631cfd:c.instructions+=1;goto B631cfd;
case 0x631d02:goto L631d02;
case 0x631d04:c.instructions+=2;goto B631d04;
case 0x631d08:c.instructions+=1;goto B631d08;
case 0x631d0a:goto L631d0a;
case 0x631d0c:c.instructions+=5;goto B631d0c;
case 0x631d0d:c.instructions+=4;goto B631d0d;
case 0x631d0e:c.instructions+=3;goto B631d0e;
case 0x631d0f:c.instructions+=2;goto B631d0f;
case 0x631d10:c.instructions+=1;goto B631d10;
case 0x631d20:goto L631d20;
case 0x631d24:c.instructions+=2;goto B631d24;
case 0x631d27:c.instructions+=1;goto B631d27;
case 0x631d29:goto L631d29;
case 0x631d2c:c.instructions+=1;goto B631d2c;
case 0x631d2e:goto L631d2e;
case 0x631d30:c.instructions+=1;goto B631d30;
case 0x631d33:goto L631d33;
case 0x631d36:c.instructions+=1;goto B631d36;
case 0x631d38:goto L631d38;
case 0x631d3e:c.instructions+=1;goto B631d3e;
case 0x631d41:goto L631d41;
case 0x631d45:c.instructions+=4;goto B631d45;
case 0x631d46:c.instructions+=3;goto B631d46;
case 0x631d4d:c.instructions+=2;goto B631d4d;
case 0x631d54:c.instructions+=1;goto B631d54;
case 0x631d59:goto L631d59;
case 0x631d5b:c.instructions+=2;goto B631d5b;
case 0x631d5c:c.instructions+=1;goto B631d5c;
case 0x631d60:goto L631d60;
case 0x631d61:c.instructions+=7;goto B631d61;
case 0x631d65:c.instructions+=6;goto B631d65;
case 0x631d66:c.instructions+=5;goto B631d66;
case 0x631d6b:c.instructions+=4;goto B631d6b;
case 0x631d6d:c.instructions+=3;goto B631d6d;
case 0x631d6f:c.instructions+=2;goto B631d6f;
case 0x631d71:c.instructions+=1;goto B631d71;
case 0x631d76:goto L631d76;
case 0x631d77:c.instructions+=2;goto B631d77;
case 0x631d79:c.instructions+=1;goto B631d79;
case 0x631d7e:goto L631d7e;
case 0x631d81:c.instructions+=3;goto B631d81;
case 0x631d82:c.instructions+=2;goto B631d82;
case 0x631d84:c.instructions+=1;goto B631d84;
case 0x631d89:goto L631d89;
case 0x631d8c:c.instructions+=3;goto B631d8c;
case 0x631d8d:c.instructions+=2;goto B631d8d;
case 0x631d8f:c.instructions+=1;goto B631d8f;
case 0x631d94:goto L631d94;
case 0x631d96:c.instructions+=6;goto B631d96;
case 0x631d98:c.instructions+=5;goto B631d98;
case 0x631d9a:c.instructions+=4;goto B631d9a;
case 0x631d9d:c.instructions+=3;goto B631d9d;
case 0x631d9e:c.instructions+=2;goto B631d9e;
case 0x631da0:c.instructions+=1;goto B631da0;
case 0x631da5:goto L631da5;
case 0x631da6:c.instructions+=2;goto B631da6;
case 0x631da9:c.instructions+=1;goto B631da9;
case 0x631dae:goto L631dae;
case 0x631db4:c.instructions+=3;goto B631db4;
case 0x631db5:c.instructions+=2;goto B631db5;
case 0x631db7:c.instructions+=1;goto B631db7;
case 0x631dbc:goto L631dbc;
case 0x631dc2:c.instructions+=3;goto B631dc2;
case 0x631dc3:c.instructions+=2;goto B631dc3;
case 0x631dc5:c.instructions+=1;goto B631dc5;
case 0x631dca:goto L631dca;
case 0x631dd0:c.instructions+=3;goto B631dd0;
case 0x631dd1:c.instructions+=2;goto B631dd1;
case 0x631dd3:c.instructions+=1;goto B631dd3;
case 0x631dd8:goto L631dd8;
case 0x631dde:c.instructions+=3;goto B631dde;
case 0x631ddf:c.instructions+=2;goto B631ddf;
case 0x631de1:c.instructions+=1;goto B631de1;
case 0x631de6:goto L631de6;
case 0x631de8:c.instructions+=6;goto B631de8;
case 0x631dea:c.instructions+=5;goto B631dea;
case 0x631dec:c.instructions+=4;goto B631dec;
case 0x631df2:c.instructions+=3;goto B631df2;
case 0x631df3:c.instructions+=2;goto B631df3;
case 0x631df5:c.instructions+=1;goto B631df5;
case 0x631dfa:goto L631dfa;
case 0x631dfc:c.instructions+=6;goto B631dfc;
case 0x631dfe:c.instructions+=5;goto B631dfe;
case 0x631e00:c.instructions+=4;goto B631e00;
case 0x631e06:c.instructions+=3;goto B631e06;
case 0x631e07:c.instructions+=2;goto B631e07;
case 0x631e09:c.instructions+=1;goto B631e09;
case 0x631e0e:goto L631e0e;
case 0x631e10:c.instructions+=1;goto B631e10;
case 0x631e15:goto L631e15;
case 0x631e16:c.instructions+=2;goto B631e16;
case 0x631e17:c.instructions+=1;goto B631e17;
case 0x631e20:goto L631e20;
case 0x631e23:c.instructions+=19;goto B631e23;
case 0x631e29:c.instructions+=18;goto B631e29;
case 0x631e2a:c.instructions+=17;goto B631e2a;
case 0x631e2b:c.instructions+=16;goto B631e2b;
case 0x631e2f:c.instructions+=15;goto B631e2f;
case 0x631e32:c.instructions+=14;goto B631e32;
case 0x631e38:c.instructions+=13;goto B631e38;
case 0x631e39:c.instructions+=12;goto B631e39;
case 0x631e3d:c.instructions+=11;goto B631e3d;
case 0x631e41:c.instructions+=10;goto B631e41;
case 0x631e42:c.instructions+=9;goto B631e42;
case 0x631e43:c.instructions+=8;goto B631e43;
case 0x631e47:c.instructions+=7;goto B631e47;
case 0x631e4b:c.instructions+=6;goto B631e4b;
case 0x631e4d:c.instructions+=5;goto B631e4d;
case 0x631e52:c.instructions+=4;goto B631e52;
case 0x631e57:c.instructions+=3;goto B631e57;
case 0x631e59:c.instructions+=2;goto B631e59;
case 0x631e5a:c.instructions+=1;goto B631e5a;
case 0x631e5c:goto L631e5c;
case 0x631e5e:goto L631e5e;
case 0x631e63:goto L631e63;
case 0x631e67:c.instructions+=2;goto B631e67;
case 0x631e68:c.instructions+=1;goto B631e68;
case 0x631e6d:goto L631e6d;
case 0x631e71:c.instructions+=6;goto B631e71;
case 0x631e72:c.instructions+=5;goto B631e72;
case 0x631e76:c.instructions+=4;goto B631e76;
case 0x631e7b:c.instructions+=3;goto B631e7b;
case 0x631e7c:c.instructions+=2;goto B631e7c;
case 0x631e82:c.instructions+=1;goto B631e82;
case 0x631e87:goto L631e87;
case 0x631e8b:c.instructions+=2;goto B631e8b;
case 0x631e8c:c.instructions+=1;goto B631e8c;
case 0x631e91:goto L631e91;
case 0x631e96:c.instructions+=2;goto B631e96;
case 0x631e9c:c.instructions+=1;goto B631e9c;
case 0x631ea1:goto L631ea1;
case 0x631ea7:c.instructions+=4;goto B631ea7;
case 0x631ead:c.instructions+=3;goto B631ead;
case 0x631eb0:c.instructions+=2;goto B631eb0;
case 0x631eb2:c.instructions+=1;goto B631eb2;
case 0x631eb4:goto L631eb4;
case 0x631eb6:c.instructions+=1;goto B631eb6;
case 0x631ebb:goto L631ebb;
case 0x631ebc:c.instructions+=2;goto B631ebc;
case 0x631ec1:c.instructions+=1;goto B631ec1;
case 0x631ec6:goto L631ec6;
case 0x631ecb:c.instructions+=2;goto B631ecb;
case 0x631ed1:c.instructions+=1;goto B631ed1;
case 0x631ed6:goto L631ed6;
case 0x631ed9:c.instructions+=4;goto B631ed9;
case 0x631eda:c.instructions+=3;goto B631eda;
case 0x631edb:c.instructions+=2;goto B631edb;
case 0x631edd:c.instructions+=1;goto B631edd;
case 0x631ee2:goto L631ee2;
case 0x631ee4:c.instructions+=2;goto B631ee4;
case 0x631ee6:c.instructions+=1;goto B631ee6;
case 0x631ee8:goto L631ee8;
case 0x631eeb:c.instructions+=1;goto B631eeb;
case 0x631eed:goto L631eed;
case 0x631eef:c.instructions+=1;goto B631eef;
case 0x631ef1:goto L631ef1;
case 0x631ef3:c.instructions+=2;goto B631ef3;
case 0x631ef9:c.instructions+=1;goto B631ef9;
case 0x631efb:goto L631efb;
case 0x631f00:c.instructions+=2;goto B631f00;
case 0x631f06:c.instructions+=1;goto B631f06;
case 0x631f0b:goto L631f0b;
case 0x631f10:c.instructions+=2;goto B631f10;
case 0x631f16:c.instructions+=1;goto B631f16;
case 0x631f1b:goto L631f1b;
case 0x631f21:c.instructions+=4;goto B631f21;
case 0x631f27:c.instructions+=3;goto B631f27;
case 0x631f2a:c.instructions+=2;goto B631f2a;
case 0x631f2c:c.instructions+=1;goto B631f2c;
case 0x631f2e:goto L631f2e;
case 0x631f34:c.instructions+=7;goto B631f34;
case 0x631f3a:c.instructions+=6;goto B631f3a;
case 0x631f40:c.instructions+=5;goto B631f40;
case 0x631f46:c.instructions+=4;goto B631f46;
case 0x631f4c:c.instructions+=3;goto B631f4c;
case 0x631f52:c.instructions+=2;goto B631f52;
case 0x631f54:c.instructions+=1;goto B631f54;
case 0x631f56:goto L631f56;
case 0x631f5c:c.instructions+=2;goto B631f5c;
case 0x631f5e:c.instructions+=1;goto B631f5e;
case 0x631f60:goto L631f60;
case 0x631f65:goto L631f65;
case 0x631f67:goto L631f67;
case 0x631f69:goto L631f69;
case 0x631f6f:c.instructions+=3;goto B631f6f;
case 0x631f75:c.instructions+=2;goto B631f75;
case 0x631f77:c.instructions+=1;goto B631f77;
case 0x631f79:goto L631f79;
case 0x631f7f:c.instructions+=2;goto B631f7f;
case 0x631f81:c.instructions+=1;goto B631f81;
case 0x631f83:goto L631f83;
case 0x631f88:goto L631f88;
case 0x631f8a:goto L631f8a;
case 0x631f8c:c.instructions+=1;goto B631f8c;
case 0x631f8e:goto L631f8e;
case 0x631f94:c.instructions+=4;goto B631f94;
case 0x631f9a:c.instructions+=3;goto B631f9a;
case 0x631fa0:c.instructions+=2;goto B631fa0;
case 0x631fa6:c.instructions+=1;goto B631fa6;
case 0x631fac:goto L631fac;
case 0x631fb2:c.instructions+=6;goto B631fb2;
case 0x631fb8:c.instructions+=5;goto B631fb8;
case 0x631fbe:c.instructions+=4;goto B631fbe;
case 0x631fc4:c.instructions+=3;goto B631fc4;
case 0x631fca:c.instructions+=2;goto B631fca;
case 0x631fcc:c.instructions+=1;goto B631fcc;
case 0x631fce:goto L631fce;
case 0x631fcf:c.instructions+=4;goto B631fcf;
case 0x631fd1:c.instructions+=3;goto B631fd1;
case 0x631fd2:c.instructions+=2;goto B631fd2;
case 0x631fd3:c.instructions+=1;goto B631fd3;
case 0x631fd8:goto L631fd8;
case 0x631fdb:c.instructions+=2;goto B631fdb;
case 0x631fdd:c.instructions+=1;goto B631fdd;
case 0x631fdf:goto L631fdf;
case 0x631fe1:c.instructions+=1;goto B631fe1;
case 0x631fe3:goto L631fe3;
case 0x631fe4:c.instructions+=4;goto B631fe4;
case 0x631fe6:c.instructions+=3;goto B631fe6;
case 0x631fe7:c.instructions+=2;goto B631fe7;
case 0x631fe8:c.instructions+=1;goto B631fe8;
case 0x631fed:goto L631fed;
case 0x631ff0:c.instructions+=1;goto B631ff0;
case 0x631ff2:goto L631ff2;
case 0x631ff8:c.instructions+=2;goto B631ff8;
case 0x631ffa:c.instructions+=1;goto B631ffa;
case 0x631ffc:goto L631ffc;
case 0x631ffd:c.instructions+=2;goto B631ffd;
case 0x631fff:c.instructions+=1;goto B631fff;
default:missing_instruction(c.pc);}
B631001:L631001:{c.instructions+=138;NFSU2_TR(0x631001);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B631003:{NFSU2_TR(0x631003);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B631007:{NFSU2_TR(0x631007);
{u32 ea_=u32(r4(R+28)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63100a:{NFSU2_TR(0x63100a);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63100d:{NFSU2_TR(0x63100d);
{u32 ea_=u32(r4(R+28)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B631010:{NFSU2_TR(0x631010);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B631013:{NFSU2_TR(0x631013);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B631015:{NFSU2_TR(0x631015);
{u32 ea_=u32(r4(R+28)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B631018:{NFSU2_TR(0x631018);
{u32 ea_=u32(r4(R+24)+u32(4294967284u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63101b:{NFSU2_TR(0x63101b);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63101d:{NFSU2_TR(0x63101d);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B631020:{NFSU2_TR(0x631020);
{u32 ea_=u32(r4(R+24)+u32(4294967268u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B631023:{NFSU2_TR(0x631023);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B631025:{NFSU2_TR(0x631025);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B631029:{NFSU2_TR(0x631029);
{u32 ea_=u32(r4(R+28)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63102c:{NFSU2_TR(0x63102c);
{u32 ea_=u32(r4(R+24)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63102f:{NFSU2_TR(0x63102f);
{u32 ea_=u32(r4(R+28)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B631032:{NFSU2_TR(0x631032);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B631035:{NFSU2_TR(0x631035);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B631037:{NFSU2_TR(0x631037);
{u32 ea_=u32(r4(R+28)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63103a:{NFSU2_TR(0x63103a);
{u32 ea_=u32(r4(R+24)+u32(4294967288u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63103d:{NFSU2_TR(0x63103d);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63103f:{NFSU2_TR(0x63103f);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B631042:{NFSU2_TR(0x631042);
{u32 ea_=u32(r4(R+24)+u32(4294967272u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B631045:{NFSU2_TR(0x631045);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B631047:{NFSU2_TR(0x631047);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63104b:{NFSU2_TR(0x63104b);
{u32 ea_=u32(r4(R+28)+u32(20u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63104e:{NFSU2_TR(0x63104e);
{u32 ea_=u32(r4(R+24)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B631051:{NFSU2_TR(0x631051);
{u32 ea_=u32(r4(R+28)+u32(16u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B631054:{NFSU2_TR(0x631054);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B631057:{NFSU2_TR(0x631057);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B631059:{NFSU2_TR(0x631059);
{u32 ea_=u32(r4(R+28)+u32(12u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63105c:{NFSU2_TR(0x63105c);
{u32 ea_=u32(r4(R+24)+u32(4294967292u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63105f:{NFSU2_TR(0x63105f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B631061:{NFSU2_TR(0x631061);
{u32 ea_=u32(r4(R+28)+u32(8u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B631064:{NFSU2_TR(0x631064);
{u32 ea_=u32(r4(R+24)+u32(4294967276u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B631067:{NFSU2_TR(0x631067);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B631069:{NFSU2_TR(0x631069);
{u32 ea_=u32(r4(R+16)+u32(108u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63106d:{NFSU2_TR(0x63106d);
{u32 ea_=u32(r4(R+28)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B631070:{NFSU2_TR(0x631070);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B631073:{NFSU2_TR(0x631073);
{u32 ea_=u32(r4(R+28)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B631076:{NFSU2_TR(0x631076);
{u32 ea_=u32(r4(R+24)+u32(4294967280u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B631079:{NFSU2_TR(0x631079);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63107b:{NFSU2_TR(0x63107b);
{u32 ea_=u32(r4(R+28)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63107e:{NFSU2_TR(0x63107e);
{u32 ea_=u32(r4(R+24)+u32(4294967264u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B631081:{NFSU2_TR(0x631081);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B631083:{NFSU2_TR(0x631083);
{u32 ea_=u32(r4(R+28)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B631086:{NFSU2_TR(0x631086);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B631088:{NFSU2_TR(0x631088);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63108a:{NFSU2_TR(0x63108a);
{u32 ea_=u32(r4(R+16)+u32(112u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63108e:{NFSU2_TR(0x63108e);
{u32 ea_=u32(r4(R+28)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B631091:{NFSU2_TR(0x631091);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B631094:{NFSU2_TR(0x631094);
{u32 ea_=u32(r4(R+28)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B631097:{NFSU2_TR(0x631097);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63109a:{NFSU2_TR(0x63109a);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63109c:{NFSU2_TR(0x63109c);
{u32 ea_=u32(r4(R+28)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63109f:{NFSU2_TR(0x63109f);
{u32 ea_=u32(r4(R+24)+u32(4294967284u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6310a2:{NFSU2_TR(0x6310a2);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6310a4:{NFSU2_TR(0x6310a4);
{u32 ea_=u32(r4(R+28)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6310a7:{NFSU2_TR(0x6310a7);
{u32 ea_=u32(r4(R+24)+u32(4294967268u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6310aa:{NFSU2_TR(0x6310aa);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6310ac:{NFSU2_TR(0x6310ac);
{u32 ea_=u32(r4(R+16)+u32(116u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6310b0:{NFSU2_TR(0x6310b0);
{u32 ea_=u32(r4(R+28)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6310b3:{NFSU2_TR(0x6310b3);
{u32 ea_=u32(r4(R+24)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6310b6:{NFSU2_TR(0x6310b6);
{u32 ea_=u32(r4(R+28)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6310b9:{NFSU2_TR(0x6310b9);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6310bc:{NFSU2_TR(0x6310bc);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6310be:{NFSU2_TR(0x6310be);
{u32 ea_=u32(r4(R+28)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6310c1:{NFSU2_TR(0x6310c1);
{u32 ea_=u32(r4(R+24)+u32(4294967288u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6310c4:{NFSU2_TR(0x6310c4);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6310c6:{NFSU2_TR(0x6310c6);
{u32 ea_=u32(r4(R+28)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6310c9:{NFSU2_TR(0x6310c9);
{u32 ea_=u32(r4(R+24)+u32(4294967272u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6310cc:{NFSU2_TR(0x6310cc);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6310ce:{NFSU2_TR(0x6310ce);
{u32 ea_=u32(r4(R+16)+u32(120u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6310d2:{NFSU2_TR(0x6310d2);
{u32 ea_=u32(r4(R+28)+u32(36u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6310d5:{NFSU2_TR(0x6310d5);
{u32 ea_=u32(r4(R+24)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6310d8:{NFSU2_TR(0x6310d8);
{u32 ea_=u32(r4(R+28)+u32(32u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6310db:{NFSU2_TR(0x6310db);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6310de:{NFSU2_TR(0x6310de);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6310e0:{NFSU2_TR(0x6310e0);
{u32 ea_=u32(r4(R+28)+u32(28u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6310e3:{NFSU2_TR(0x6310e3);
{u32 ea_=u32(r4(R+24)+u32(4294967292u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6310e6:{NFSU2_TR(0x6310e6);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6310e8:{NFSU2_TR(0x6310e8);
{u32 ea_=u32(r4(R+28)+u32(24u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6310eb:{NFSU2_TR(0x6310eb);
{u32 ea_=u32(r4(R+24)+u32(4294967276u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6310ee:{NFSU2_TR(0x6310ee);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B6310f0:{NFSU2_TR(0x6310f0);
{u32 ea_=u32(r4(R+16)+u32(124u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6310f4:{NFSU2_TR(0x6310f4);
{u32 ea_=u32(r4(R+28)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6310f7:{NFSU2_TR(0x6310f7);
{u32 ea_=u32(r4(R+24)+u32(16u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6310fa:{NFSU2_TR(0x6310fa);
{u32 ea_=u32(r4(R+28)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6310fd:{NFSU2_TR(0x6310fd);
{u32 ea_=u32(r4(R+24)+u32(4294967280u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B631100:{NFSU2_TR(0x631100);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B631102:{NFSU2_TR(0x631102);
{u32 ea_=u32(r4(R+28)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B631105:{NFSU2_TR(0x631105);
{u32 ea_=u32(r4(R+24)+u32(4294967264u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B631108:{NFSU2_TR(0x631108);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63110a:{NFSU2_TR(0x63110a);
{u32 ea_=u32(r4(R+28)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63110d:{NFSU2_TR(0x63110d);
{u32 ea_=u32(r4(R+24));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63110f:{NFSU2_TR(0x63110f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B631111:{NFSU2_TR(0x631111);
{u32 ea_=u32(r4(R+16)+u32(128u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B631118:{NFSU2_TR(0x631118);
{u32 ea_=u32(r4(R+28)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63111b:{NFSU2_TR(0x63111b);
{u32 ea_=u32(r4(R+24)+u32(20u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63111e:{NFSU2_TR(0x63111e);
{u32 ea_=u32(r4(R+28)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B631121:{NFSU2_TR(0x631121);
{u32 ea_=u32(r4(R+24)+u32(4u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B631124:{NFSU2_TR(0x631124);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B631126:{NFSU2_TR(0x631126);
{u32 ea_=u32(r4(R+28)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B631129:{NFSU2_TR(0x631129);
{u32 ea_=u32(r4(R+24)+u32(4294967284u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63112c:{NFSU2_TR(0x63112c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63112e:{NFSU2_TR(0x63112e);
{u32 ea_=u32(r4(R+28)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B631131:{NFSU2_TR(0x631131);
{u32 ea_=u32(r4(R+24)+u32(4294967268u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B631134:{NFSU2_TR(0x631134);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B631136:{NFSU2_TR(0x631136);
{u32 ea_=u32(r4(R+16)+u32(132u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63113d:{NFSU2_TR(0x63113d);
{u32 ea_=u32(r4(R+28)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B631140:{NFSU2_TR(0x631140);
{u32 ea_=u32(r4(R+24)+u32(24u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B631143:{NFSU2_TR(0x631143);
u8 U[4];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B631147:{NFSU2_TR(0x631147);
{u32 ea_=u32(r4(R+28)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63114a:{NFSU2_TR(0x63114a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63114b:{NFSU2_TR(0x63114b);
{u32 ea_=u32(r4(R+24)+u32(8u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63114e:{NFSU2_TR(0x63114e);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63114f:{NFSU2_TR(0x63114f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B631151:{NFSU2_TR(0x631151);
{u32 ea_=u32(r4(R+28)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B631154:{NFSU2_TR(0x631154);
{u32 ea_=u32(r4(R+24)+u32(4294967288u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B631157:{NFSU2_TR(0x631157);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B631159:{NFSU2_TR(0x631159);
{u32 ea_=u32(r4(R+28)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63115c:{NFSU2_TR(0x63115c);
{u32 ea_=u32(r4(R+24)+u32(4294967272u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63115f:{NFSU2_TR(0x63115f);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B631161:{NFSU2_TR(0x631161);
{u32 ea_=u32(r4(R+16)+u32(144u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B631168:{NFSU2_TR(0x631168);
{u32 ea_=u32(r4(R+28)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63116b:{NFSU2_TR(0x63116b);
{u32 ea_=u32(r4(R+24)+u32(28u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63116e:{NFSU2_TR(0x63116e);
{u32 ea_=u32(r4(R+28)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B631171:{NFSU2_TR(0x631171);
{u32 ea_=u32(r4(R+24)+u32(12u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B631174:{NFSU2_TR(0x631174);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B631176:{NFSU2_TR(0x631176);
{u32 ea_=u32(r4(R+28)+u32(44u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B631179:{NFSU2_TR(0x631179);
{u32 ea_=u32(r4(R+24)+u32(4294967292u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63117c:{NFSU2_TR(0x63117c);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B63117e:{NFSU2_TR(0x63117e);
{u32 ea_=u32(r4(R+28)+u32(40u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B631181:{NFSU2_TR(0x631181);
{u32 ea_=u32(r4(R+24)+u32(4294967276u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B631184:{NFSU2_TR(0x631184);
__asm__ volatile(".byte 0xde,0xc1":::"memory");
}
B631186:{NFSU2_TR(0x631186);
{u32 ea_=u32(r4(R+16)+u32(148u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63118d:{NFSU2_TR(0x63118d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x631192ull));
TAIL_STATIC(0x4012b0u,401);
}
B631192:L631192:{c.instructions+=7;NFSU2_TR(0x631192);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B631196:{NFSU2_TR(0x631196);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x18ull))));
}
B631199:{NFSU2_TR(0x631199);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x40ull))));
}
B63119c:{NFSU2_TR(0x63119c);
w1(R+512,carry<u32>(r4(R+28),u32(0x40ull)));
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x40ull))));
}
B63119f:{NFSU2_TR(0x63119f);
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
B6311a0:{NFSU2_TR(0x6311a0);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6311a4:{NFSU2_TR(0x6311a4);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x630f30u,630);}
}
B6311aa:L6311aa:{c.instructions+=1;NFSU2_TR(0x6311aa);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6311afull));
TAIL_STATIC(0x510c30u,510);
}
B6311af:L6311af:{c.instructions+=2;NFSU2_TR(0x6311af);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6311b1:{NFSU2_TR(0x6311b1);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6311e4;}}
}
B6311b3:L6311b3:{c.instructions+=7;NFSU2_TR(0x6311b3);
{u32 ea_=u32(u32(8021628u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6311b9:{NFSU2_TR(0x6311b9);
{u32 ea_=u32(u32(9061624u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6311bf:{NFSU2_TR(0x6311bf);
{u32 ea_=u32(u32(9061624u));__asm__ volatile(".byte 0xd9,0x10"::"a"(ea_):"memory");}
}
B6311c5:{NFSU2_TR(0x6311c5);
{u32 ea_=u32(u32(7881996u));__asm__ volatile(".byte 0xd8,0x18"::"a"(ea_):"memory");}
}
B6311cb:{NFSU2_TR(0x6311cb);
{u32 ax_;__asm__ volatile(".byte 0xdf,0xe0":"=a"(ax_)::"memory");w2(R+0,u16(ax_));}
}
B6311cd:{NFSU2_TR(0x6311cd);
u8 U[1];
w1(U+0,u8(u32(r1(R+1))&u32(u8(0x41ull))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B6311d0:{NFSU2_TR(0x6311d0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6311e4;}}
}
B6311d2:L6311d2:{c.instructions+=3;NFSU2_TR(0x6311d2);
{u32 ea_=u32(u32(9061624u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6311d8:{NFSU2_TR(0x6311d8);
{u32 ea_=u32(u32(7881996u));__asm__ volatile(".byte 0xd8,0x20"::"a"(ea_):"memory");}
}
B6311de:{NFSU2_TR(0x6311de);
{u32 ea_=u32(u32(9061624u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6311e4:L6311e4:{c.instructions+=25;NFSU2_TR(0x6311e4);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6311e8:{NFSU2_TR(0x6311e8);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6311ec:{NFSU2_TR(0x6311ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6311ef:{NFSU2_TR(0x6311ef);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6311f0:{NFSU2_TR(0x6311f0);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6311f4:{NFSU2_TR(0x6311f4);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6311f5:{NFSU2_TR(0x6311f5);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6311f6:{NFSU2_TR(0x6311f6);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6311f8:{NFSU2_TR(0x6311f8);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6311fa:{NFSU2_TR(0x6311fa);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6311fb:{NFSU2_TR(0x6311fb);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6311ff:{NFSU2_TR(0x6311ff);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xa60ull))));
__builtin_memmove((R+4),(U+0),4);
}
B631205:{NFSU2_TR(0x631205);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B631206:{NFSU2_TR(0x631206);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x960ull))));
__builtin_memmove((R+8),(U+0),4);
}
B63120c:{NFSU2_TR(0x63120c);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x904ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B631212:{NFSU2_TR(0x631212);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B631213:{NFSU2_TR(0x631213);
u8 U[4];
w4(U+0,u32(u32(u32(0xa0ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B63121a:{NFSU2_TR(0x63121a);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63121b:{NFSU2_TR(0x63121b);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B63121e:{NFSU2_TR(0x63121e);
u8 U[4];
w4(U+0,u32(u32(u32(0x54ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B631222:{NFSU2_TR(0x631222);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B631223:{NFSU2_TR(0x631223);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B631224:{NFSU2_TR(0x631224);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B631225:{NFSU2_TR(0x631225);
u8 U[8];
w4(U+0,u32(u32(u32(0x4cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B631229:{NFSU2_TR(0x631229);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63122eull));
TAIL_STATIC(0x620ae0u,620);
}
B63122e:L63122e:{c.instructions+=6;NFSU2_TR(0x63122e);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B631232:{NFSU2_TR(0x631232);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B631236:{NFSU2_TR(0x631236);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B631238:{NFSU2_TR(0x631238);
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
B63123a:{NFSU2_TR(0x63123a);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+24),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63123e:{NFSU2_TR(0x63123e);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){TAIL_STATIC(0x630e34u,630);}
}
B631244:L631244:{c.instructions+=6;NFSU2_TR(0x631244);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B631245:{NFSU2_TR(0x631245);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B631246:{NFSU2_TR(0x631246);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B631247:{NFSU2_TR(0x631247);
__builtin_memmove((R+16),(R+20),4);
}
B631249:{NFSU2_TR(0x631249);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B63124a:{NFSU2_TR(0x63124a);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B631250:L631250:{c.instructions+=10;NFSU2_TR(0x631250);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B631251:{NFSU2_TR(0x631251);
__builtin_memmove((R+20),(R+16),4);
}
B631253:{NFSU2_TR(0x631253);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B631256:{NFSU2_TR(0x631256);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x3b4ull))));
}
B63125c:{NFSU2_TR(0x63125c);
__builtin_memmove((R+0),gp(0x8026cc),4);
}
B631261:{NFSU2_TR(0x631261);
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
B631263:{NFSU2_TR(0x631263);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B631264:{NFSU2_TR(0x631264);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B631265:{NFSU2_TR(0x631265);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B631266:{NFSU2_TR(0x631266);
if(r1(R+518)){{goto L6316c3;}}
}
B63126c:L63126c:{c.instructions+=3;NFSU2_TR(0x63126c);
__builtin_memmove((R+0),gp(0x8026c8),4);
}
B631271:{NFSU2_TR(0x631271);
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
B631273:{NFSU2_TR(0x631273);
if(r1(R+518)){{goto L6316c3;}}
}
B631279:L631279:{c.instructions+=2;NFSU2_TR(0x631279);
u8 U[14];
__builtin_memmove((U+6),gp(0x8654a4),4);
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
B631280:{NFSU2_TR(0x631280);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6316c3;}}
}
B631286:L631286:{c.instructions+=9;NFSU2_TR(0x631286);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B631289:{NFSU2_TR(0x631289);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63128c:{NFSU2_TR(0x63128c);
w4(R+4,u32(u32(r4(R+4))^u32(r4(R+4))));
}
B63128e:{NFSU2_TR(0x63128e);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B631291:{NFSU2_TR(0x631291);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+4),(U+0),1);
}
B631294:{NFSU2_TR(0x631294);
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
B631297:{NFSU2_TR(0x631297);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x8900acull))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B63129e:{NFSU2_TR(0x63129e);
w4(R+4,u32(0x89e7a0ull));
}
B6312a3:{NFSU2_TR(0x6312a3);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6312a9;}}
}
B6312a5:L6312a5:{c.instructions+=2;NFSU2_TR(0x6312a5);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6312a7:{NFSU2_TR(0x6312a7);
{goto L6312ab;}
}
B6312a9:L6312a9:{c.instructions+=1;NFSU2_TR(0x6312a9);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6312ab:L6312ab:{c.instructions+=1;NFSU2_TR(0x6312ab);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6312b0ull));
TAIL_STATIC(0x5ed980u,5ed);
}
B6312b0:L6312b0:{c.instructions+=3;NFSU2_TR(0x6312b0);
__builtin_memmove((R+4),gp(0x890080),4);
}
B6312b6:{NFSU2_TR(0x6312b6);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6312b7:{NFSU2_TR(0x6312b7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6312bcull));
TAIL_STATIC(0x5f0e30u,5f0);
}
B6312bc:L6312bc:{c.instructions+=6;NFSU2_TR(0x6312bc);
u8 U[6];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
w4(R+4,u32(s32(s16(r2(U+4)))));
}
B6312c0:{NFSU2_TR(0x6312c0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x234ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6312c6:{NFSU2_TR(0x6312c6);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6312c8:{NFSU2_TR(0x6312c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x238ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6312ce:{NFSU2_TR(0x6312ce);
u8 U[8];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6312d2:{NFSU2_TR(0x6312d2);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L631303;}}
}
B6312d4:L6312d4:{c.instructions+=3;NFSU2_TR(0x6312d4);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6312d7:{NFSU2_TR(0x6312d7);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6312d9:{NFSU2_TR(0x6312d9);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L631303;}}
}
B6312db:L6312db:{c.instructions+=2;NFSU2_TR(0x6312db);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6312dd:{NFSU2_TR(0x6312dd);
if(r1(R+518)){{goto L6312f1;}}
}
B6312df:L6312df:{c.instructions+=3;NFSU2_TR(0x6312df);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6312e2:{NFSU2_TR(0x6312e2);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6312e5:{NFSU2_TR(0x6312e5);
if(r1(R+518)){{goto L631303;}}
}
B6312e7:L6312e7:{c.instructions+=2;NFSU2_TR(0x6312e7);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x4ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6312ea:{NFSU2_TR(0x6312ea);
if(r1(R+518)){{goto L631303;}}
}
B6312ec:L6312ec:{c.instructions+=2;NFSU2_TR(0x6312ec);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x14ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6312ef:{NFSU2_TR(0x6312ef);
if(r1(R+518)){{goto L631303;}}
}
B6312f1:L6312f1:{c.instructions+=6;NFSU2_TR(0x6312f1);
w4(R+0,u32(0x3ull));
}
B6312f6:{NFSU2_TR(0x6312f6);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6312fa:{NFSU2_TR(0x6312fa);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6312fe:{NFSU2_TR(0x6312fe);
__builtin_memmove((R+0),(R+4),4);
}
B631300:{NFSU2_TR(0x631300);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B631301:{NFSU2_TR(0x631301);
{goto L63131b;}
}
B631303:L631303:{c.instructions+=6;NFSU2_TR(0x631303);
__builtin_memmove((R+8),gp(0x890080),4);
}
B631309:{NFSU2_TR(0x631309);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B63130c:{NFSU2_TR(0x63130c);
w4(R+0,u32(0x2ull));
}
B631311:{NFSU2_TR(0x631311);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B631315:{NFSU2_TR(0x631315);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B631319:{NFSU2_TR(0x631319);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B63131b:L63131b:{c.instructions+=6;NFSU2_TR(0x63131b);
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
B63131d:{NFSU2_TR(0x63131d);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B631320:{NFSU2_TR(0x631320);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B631324:{NFSU2_TR(0x631324);
u8 U[8];
w4(U+0,u32(u32(u32(0x7cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B631328:{NFSU2_TR(0x631328);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63132c:{NFSU2_TR(0x63132c);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{goto L6316c3;}}
}
B631332:L631332:{c.instructions+=3;NFSU2_TR(0x631332);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+4,u32(u32(u32(0x1cull))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B631339:{NFSU2_TR(0x631339);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B63133d:{NFSU2_TR(0x63133d);
__builtin_memmove((R+4),(R+4),4);
}
B631340:L631340:{c.instructions+=7;NFSU2_TR(0x631340);
__builtin_memmove((R+4),gp(0x890080),4);
}
B631346:{NFSU2_TR(0x631346);
u8 U[8];
w4(U+0,u32(u32(u32(0x7cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B63134a:{NFSU2_TR(0x63134a);
u8 U[12];
w4(U+0,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),4);
__builtin_memmove((R+24),(U+8),4);
}
B63134d:{NFSU2_TR(0x63134d);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63134e:{NFSU2_TR(0x63134e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63134f:{NFSU2_TR(0x63134f);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B631350:{NFSU2_TR(0x631350);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x631355ull));
TAIL_STATIC(0x60d570u,60d);
}
B631355:L631355:{c.instructions+=3;NFSU2_TR(0x631355);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B631358:{NFSU2_TR(0x631358);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B63135a:{NFSU2_TR(0x63135a);
if(r1(R+518)){{goto L6316a3;}}
}
B631360:L631360:{c.instructions+=8;NFSU2_TR(0x631360);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B631363:{NFSU2_TR(0x631363);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B631364:{NFSU2_TR(0x631364);
u8 U[4];
w4(U+0,u32(u32(u32(0xc4ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B63136b:{NFSU2_TR(0x63136b);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63136c:{NFSU2_TR(0x63136c);
u8 U[4];
w4(U+0,u32(u32(u32(0x2c8ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B631373:{NFSU2_TR(0x631373);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B631374:{NFSU2_TR(0x631374);
__builtin_memmove((R+4),(R+24),4);
}
B631376:{NFSU2_TR(0x631376);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63137bull));
TAIL_STATIC(0x5f6820u,5f6);
}
B63137b:L63137b:{c.instructions+=6;NFSU2_TR(0x63137b);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63137e:{NFSU2_TR(0x63137e);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63137f:{NFSU2_TR(0x63137f);
u8 U[4];
w4(U+0,u32(u32(u32(0x1c4ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B631386:{NFSU2_TR(0x631386);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B631387:{NFSU2_TR(0x631387);
__builtin_memmove((R+4),(R+24),4);
}
B631389:{NFSU2_TR(0x631389);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63138eull));
TAIL_STATIC(0x5ec7f0u,5ec);
}
B63138e:L63138e:{c.instructions+=8;NFSU2_TR(0x63138e);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B631391:{NFSU2_TR(0x631391);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5b0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B631397:{NFSU2_TR(0x631397);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x554ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B63139d:{NFSU2_TR(0x63139d);
w4(R+8,u32(0x1ull));
}
B6313a2:{NFSU2_TR(0x6313a2);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r1(U+0))));
}
B6313a4:{NFSU2_TR(0x6313a4);
u8 U[10];
w1(R+512,u8(0x0ull));
w1(R+523,u8(0x0ull));
w4(U+6,u32(u32(r4(R+0))&u32(r4(R+8))));
w1(R+519,u8(s32(r4(U+6))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+6))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+6))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B6313a6:{NFSU2_TR(0x6313a6);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x560ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6313ac:{NFSU2_TR(0x6313ac);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6313b4;}}
}
B6313ae:L6313ae:{c.instructions+=1;NFSU2_TR(0x6313ae);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6313b4:L6313b4:{c.instructions+=4;NFSU2_TR(0x6313b4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6313b5:{NFSU2_TR(0x6313b5);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B6313b9:{NFSU2_TR(0x6313b9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6313ba:{NFSU2_TR(0x6313ba);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6313bfull));
TAIL_STATIC(0x4012b0u,401);
}
B6313bf:L6313bf:{c.instructions+=4;NFSU2_TR(0x6313bf);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x424ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6313c5:{NFSU2_TR(0x6313c5);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B6313c8:{NFSU2_TR(0x6313c8);
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
B6313cb:{NFSU2_TR(0x6313cb);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L6313f0;}}
}
B6313cd:L6313cd:{c.instructions+=10;NFSU2_TR(0x6313cd);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6313d1:{NFSU2_TR(0x6313d1);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B6313d3:{NFSU2_TR(0x6313d3);
{u32 ea_=u32(r4(R+16)+u32(80u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6313d7:{NFSU2_TR(0x6313d7);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6313db:{NFSU2_TR(0x6313db);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B6313dd:{NFSU2_TR(0x6313dd);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6313e1:{NFSU2_TR(0x6313e1);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6313e5:{NFSU2_TR(0x6313e5);
__asm__ volatile(".byte 0xd9,0xe0":::"memory");
}
B6313e7:{NFSU2_TR(0x6313e7);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6313eb:{NFSU2_TR(0x6313eb);
{goto L63162d;}
}
B6313f0:L6313f0:{c.instructions+=138;NFSU2_TR(0x6313f0);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6313f4:{NFSU2_TR(0x6313f4);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6313fa:{NFSU2_TR(0x6313fa);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6313fe:{NFSU2_TR(0x6313fe);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B631404:{NFSU2_TR(0x631404);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B631408:{NFSU2_TR(0x631408);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63140e:{NFSU2_TR(0x63140e);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B631412:{NFSU2_TR(0x631412);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B631416:{NFSU2_TR(0x631416);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B63141a:{NFSU2_TR(0x63141a);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B63141c:{NFSU2_TR(0x63141c);
__asm__ volatile(".byte 0xd8,0xc2":::"memory");
}
B63141e:{NFSU2_TR(0x63141e);
{u32 ea_=u32(r4(R+16)+u32(128u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B631425:{NFSU2_TR(0x631425);
{u32 ea_=u32(r4(R+16)+u32(48u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B631429:{NFSU2_TR(0x631429);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63142f:{NFSU2_TR(0x63142f);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B631433:{NFSU2_TR(0x631433);
{u32 ea_=u32(r4(R+16)+u32(52u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B631437:{NFSU2_TR(0x631437);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B63143b:{NFSU2_TR(0x63143b);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B63143f:{NFSU2_TR(0x63143f);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B631441:{NFSU2_TR(0x631441);
{u32 ea_=u32(r4(R+16)+u32(132u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B631448:{NFSU2_TR(0x631448);
{u32 ea_=u32(r4(R+16)+u32(56u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63144c:{NFSU2_TR(0x63144c);
{u32 ea_=u32(u32(7881376u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B631452:{NFSU2_TR(0x631452);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B631456:{NFSU2_TR(0x631456);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B631458:{NFSU2_TR(0x631458);
__asm__ volatile(".byte 0xd8,0xc2":::"memory");
}
B63145a:{NFSU2_TR(0x63145a);
{u32 ea_=u32(r4(R+16)+u32(136u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B631461:{NFSU2_TR(0x631461);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B631463:{NFSU2_TR(0x631463);
{u32 ea_=u32(r4(R+16)+u32(60u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B631467:{NFSU2_TR(0x631467);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B63146b:{NFSU2_TR(0x63146b);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B63146f:{NFSU2_TR(0x63146f);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B631471:{NFSU2_TR(0x631471);
{u32 ea_=u32(r4(R+16)+u32(140u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B631478:{NFSU2_TR(0x631478);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B63147a:{NFSU2_TR(0x63147a);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63147e:{NFSU2_TR(0x63147e);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B631484:{NFSU2_TR(0x631484);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B631488:{NFSU2_TR(0x631488);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63148e:{NFSU2_TR(0x63148e);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B631492:{NFSU2_TR(0x631492);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B631498:{NFSU2_TR(0x631498);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63149c:{NFSU2_TR(0x63149c);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6314a0:{NFSU2_TR(0x6314a0);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6314a4:{NFSU2_TR(0x6314a4);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B6314a6:{NFSU2_TR(0x6314a6);
__asm__ volatile(".byte 0xd8,0xc2":::"memory");
}
B6314a8:{NFSU2_TR(0x6314a8);
{u32 ea_=u32(r4(R+16)+u32(144u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6314af:{NFSU2_TR(0x6314af);
{u32 ea_=u32(r4(R+16)+u32(64u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6314b3:{NFSU2_TR(0x6314b3);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6314b9:{NFSU2_TR(0x6314b9);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6314bd:{NFSU2_TR(0x6314bd);
{u32 ea_=u32(r4(R+16)+u32(68u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6314c1:{NFSU2_TR(0x6314c1);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6314c5:{NFSU2_TR(0x6314c5);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6314c9:{NFSU2_TR(0x6314c9);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B6314cb:{NFSU2_TR(0x6314cb);
{u32 ea_=u32(r4(R+16)+u32(148u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6314d2:{NFSU2_TR(0x6314d2);
{u32 ea_=u32(r4(R+16)+u32(72u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6314d6:{NFSU2_TR(0x6314d6);
{u32 ea_=u32(u32(7881376u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6314dc:{NFSU2_TR(0x6314dc);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6314e0:{NFSU2_TR(0x6314e0);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B6314e2:{NFSU2_TR(0x6314e2);
__asm__ volatile(".byte 0xd8,0xc2":::"memory");
}
B6314e4:{NFSU2_TR(0x6314e4);
{u32 ea_=u32(r4(R+16)+u32(152u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6314eb:{NFSU2_TR(0x6314eb);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B6314ed:{NFSU2_TR(0x6314ed);
{u32 ea_=u32(r4(R+16)+u32(76u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6314f1:{NFSU2_TR(0x6314f1);
{u32 ea_=u32(r4(R+16)+u32(20u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6314f5:{NFSU2_TR(0x6314f5);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6314f9:{NFSU2_TR(0x6314f9);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B6314fb:{NFSU2_TR(0x6314fb);
{u32 ea_=u32(r4(R+16)+u32(156u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B631502:{NFSU2_TR(0x631502);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B631504:{NFSU2_TR(0x631504);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B631508:{NFSU2_TR(0x631508);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B63150e:{NFSU2_TR(0x63150e);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B631512:{NFSU2_TR(0x631512);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B631518:{NFSU2_TR(0x631518);
__asm__ volatile(".byte 0xd9,0xc0":::"memory");
}
B63151a:{NFSU2_TR(0x63151a);
__asm__ volatile(".byte 0xd8,0xc2":::"memory");
}
B63151c:{NFSU2_TR(0x63151c);
{u32 ea_=u32(r4(R+16)+u32(24u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B631520:{NFSU2_TR(0x631520);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B631524:{NFSU2_TR(0x631524);
u8 U[4];
w4(U+0,u32(u32(u32(0x80ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B63152b:{NFSU2_TR(0x63152b);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B631531:{NFSU2_TR(0x631531);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B631532:{NFSU2_TR(0x631532);
{u32 ea_=u32(r4(R+16)+u32(84u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B631536:{NFSU2_TR(0x631536);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B63153a:{NFSU2_TR(0x63153a);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B63153c:{NFSU2_TR(0x63153c);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63153d:{NFSU2_TR(0x63153d);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B631541:{NFSU2_TR(0x631541);
{u32 ea_=u32(r4(R+16)+u32(168u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B631548:{NFSU2_TR(0x631548);
{u32 ea_=u32(r4(R+16)+u32(88u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63154c:{NFSU2_TR(0x63154c);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B631552:{NFSU2_TR(0x631552);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B631556:{NFSU2_TR(0x631556);
{u32 ea_=u32(r4(R+16)+u32(92u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63155a:{NFSU2_TR(0x63155a);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B63155e:{NFSU2_TR(0x63155e);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B631560:{NFSU2_TR(0x631560);
__asm__ volatile(".byte 0xd8,0xc3":::"memory");
}
B631562:{NFSU2_TR(0x631562);
{u32 ea_=u32(r4(R+16)+u32(172u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B631569:{NFSU2_TR(0x631569);
{u32 ea_=u32(r4(R+16)+u32(96u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63156d:{NFSU2_TR(0x63156d);
{u32 ea_=u32(u32(7881376u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B631573:{NFSU2_TR(0x631573);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B631577:{NFSU2_TR(0x631577);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B631579:{NFSU2_TR(0x631579);
__asm__ volatile(".byte 0xd8,0xc2":::"memory");
}
B63157b:{NFSU2_TR(0x63157b);
{u32 ea_=u32(r4(R+16)+u32(176u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B631582:{NFSU2_TR(0x631582);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B631584:{NFSU2_TR(0x631584);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B631586:{NFSU2_TR(0x631586);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B631588:{NFSU2_TR(0x631588);
{u32 ea_=u32(r4(R+16)+u32(100u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63158c:{NFSU2_TR(0x63158c);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B631590:{NFSU2_TR(0x631590);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B631594:{NFSU2_TR(0x631594);
{u32 ea_=u32(r4(R+16)+u32(180u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63159b:{NFSU2_TR(0x63159b);
{u32 ea_=u32(r4(R+16)+u32(108u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B63159f:{NFSU2_TR(0x63159f);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6315a5:{NFSU2_TR(0x6315a5);
{u32 ea_=u32(r4(R+16)+u32(116u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6315a9:{NFSU2_TR(0x6315a9);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6315af:{NFSU2_TR(0x6315af);
{u32 ea_=u32(r4(R+16)+u32(112u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6315b3:{NFSU2_TR(0x6315b3);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6315b9:{NFSU2_TR(0x6315b9);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6315bd:{NFSU2_TR(0x6315bd);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6315c1:{NFSU2_TR(0x6315c1);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6315c5:{NFSU2_TR(0x6315c5);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B6315c7:{NFSU2_TR(0x6315c7);
__asm__ volatile(".byte 0xd8,0xc2":::"memory");
}
B6315c9:{NFSU2_TR(0x6315c9);
{u32 ea_=u32(r4(R+16)+u32(184u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6315d0:{NFSU2_TR(0x6315d0);
{u32 ea_=u32(r4(R+16)+u32(104u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6315d4:{NFSU2_TR(0x6315d4);
{u32 ea_=u32(u32(8224060u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6315da:{NFSU2_TR(0x6315da);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6315de:{NFSU2_TR(0x6315de);
{u32 ea_=u32(r4(R+16)+u32(108u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6315e2:{NFSU2_TR(0x6315e2);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6315e6:{NFSU2_TR(0x6315e6);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B6315ea:{NFSU2_TR(0x6315ea);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B6315ec:{NFSU2_TR(0x6315ec);
{u32 ea_=u32(r4(R+16)+u32(188u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B6315f3:{NFSU2_TR(0x6315f3);
{u32 ea_=u32(r4(R+16)+u32(112u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B6315f7:{NFSU2_TR(0x6315f7);
{u32 ea_=u32(u32(7881376u));__asm__ volatile(".byte 0xd8,0x08"::"a"(ea_):"memory");}
}
B6315fd:{NFSU2_TR(0x6315fd);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B631601:{NFSU2_TR(0x631601);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B631603:{NFSU2_TR(0x631603);
__asm__ volatile(".byte 0xd8,0xc2":::"memory");
}
B631605:{NFSU2_TR(0x631605);
{u32 ea_=u32(r4(R+16)+u32(192u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B63160c:{NFSU2_TR(0x63160c);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B63160e:{NFSU2_TR(0x63160e);
{u32 ea_=u32(r4(R+16)+u32(116u));__asm__ volatile(".byte 0xd9,0x00"::"a"(ea_):"memory");}
}
B631612:{NFSU2_TR(0x631612);
{u32 ea_=u32(r4(R+16)+u32(28u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B631616:{NFSU2_TR(0x631616);
{u32 ea_=u32(r4(R+16)+u32(32u));__asm__ volatile(".byte 0xd8,0x00"::"a"(ea_):"memory");}
}
B63161a:{NFSU2_TR(0x63161a);
__asm__ volatile(".byte 0xd8,0xc1":::"memory");
}
B63161c:{NFSU2_TR(0x63161c);
{u32 ea_=u32(r4(R+16)+u32(196u));__asm__ volatile(".byte 0xd9,0x18"::"a"(ea_):"memory");}
}
B631623:{NFSU2_TR(0x631623);
__asm__ volatile(".byte 0xdd,0xd8":::"memory");
}
B631625:{NFSU2_TR(0x631625);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63162aull));
TAIL_STATIC(0x4012b0u,401);
}
B63162a:L63162a:{c.instructions+=1;NFSU2_TR(0x63162a);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B63162d:L63162d:{c.instructions+=2;NFSU2_TR(0x63162d);
u8 U[16];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x2ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B631632:{NFSU2_TR(0x631632);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L631648;}}
}
B631634:L631634:{c.instructions+=7;NFSU2_TR(0x631634);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B631638:{NFSU2_TR(0x631638);
u8 U[8];
w4(U+0,u32(u32(u32(0x78ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B63163c:{NFSU2_TR(0x63163c);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B63163e:{NFSU2_TR(0x63163e);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B631640:{NFSU2_TR(0x631640);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
__builtin_memmove((R+0),(U+0),1);
}
B631643:{NFSU2_TR(0x631643);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B631644:{NFSU2_TR(0x631644);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B631648:L631648:{c.instructions+=7;NFSU2_TR(0x631648);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B63164b:{NFSU2_TR(0x63164b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5b0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B631651:{NFSU2_TR(0x631651);
w4(R+8,u32(0x1ull));
}
B631656:{NFSU2_TR(0x631656);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r1(U+0))));
}
B631658:{NFSU2_TR(0x631658);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B63165a:{NFSU2_TR(0x63165a);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5a0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B631660:{NFSU2_TR(0x631660);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L631665;}}
}
B631662:L631662:{c.instructions+=1;NFSU2_TR(0x631662);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((R+0),(U+0),4);
}
B631665:L631665:{c.instructions+=20;NFSU2_TR(0x631665);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B631669:{NFSU2_TR(0x631669);
u8 U[8];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B63166d:{NFSU2_TR(0x63166d);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63166e:{NFSU2_TR(0x63166e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63166f:{NFSU2_TR(0x63166f);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B631671:{NFSU2_TR(0x631671);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B631673:{NFSU2_TR(0x631673);
u8 U[4];
w4(U+0,u32(0x401ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B631678:{NFSU2_TR(0x631678);
u8 U[4];
w4(U+0,u32(u32(u32(0x1d4ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B63167f:{NFSU2_TR(0x63167f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B631680:{NFSU2_TR(0x631680);
u8 U[4];
w4(U+0,u32(u32(u32(0xd8ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B631687:{NFSU2_TR(0x631687);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B631688:{NFSU2_TR(0x631688);
u8 U[4];
w4(U+0,u32(u32(u32(0x2dcull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B63168f:{NFSU2_TR(0x63168f);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B631690:{NFSU2_TR(0x631690);
u8 U[4];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B631694:{NFSU2_TR(0x631694);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B631695:{NFSU2_TR(0x631695);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B631696:{NFSU2_TR(0x631696);
u8 U[4];
w4(U+0,u32(0x7f3f00ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63169b:{NFSU2_TR(0x63169b);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63169c:{NFSU2_TR(0x63169c);
__builtin_memmove((R+4),(R+12),4);
}
B63169e:{NFSU2_TR(0x63169e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6316a3ull));
TAIL_STATIC(0x620ae0u,620);
}
B6316a3:L6316a3:{c.instructions+=9;NFSU2_TR(0x6316a3);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6316a7:{NFSU2_TR(0x6316a7);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6316ab:{NFSU2_TR(0x6316ab);
u8 U[8];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6316af:{NFSU2_TR(0x6316af);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x1ull))));
}
B6316b0:{NFSU2_TR(0x6316b0);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
}
B6316b3:{NFSU2_TR(0x6316b3);
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
B6316b5:{NFSU2_TR(0x6316b5);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6316b9:{NFSU2_TR(0x6316b9);
u8 U[8];
w4(U+0,u32(u32(u32(0x2cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6316bd:{NFSU2_TR(0x6316bd);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x631340u);}goto L631340;}}
}
B6316c3:L6316c3:{c.instructions+=6;NFSU2_TR(0x6316c3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B6316c4:{NFSU2_TR(0x6316c4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B6316c5:{NFSU2_TR(0x6316c5);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B6316c6:{NFSU2_TR(0x6316c6);
__builtin_memmove((R+16),(R+20),4);
}
B6316c8:{NFSU2_TR(0x6316c8);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B6316c9:{NFSU2_TR(0x6316c9);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6316d0:L6316d0:{c.instructions+=10;NFSU2_TR(0x6316d0);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6316d1:{NFSU2_TR(0x6316d1);
__builtin_memmove((R+20),(R+16),4);
}
B6316d3:{NFSU2_TR(0x6316d3);
w4(R+16,u32(u32(r4(R+16))&u32(u32(0xfffffff0ull))));
}
B6316d6:{NFSU2_TR(0x6316d6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x314ull))));
}
B6316dc:{NFSU2_TR(0x6316dc);
__builtin_memmove((R+0),gp(0x8026c8),4);
}
B6316e1:{NFSU2_TR(0x6316e1);
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
B6316e3:{NFSU2_TR(0x6316e3);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6316e4:{NFSU2_TR(0x6316e4);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6316e5:{NFSU2_TR(0x6316e5);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6316e6:{NFSU2_TR(0x6316e6);
if(r1(R+518)){{goto L63198c;}}
}
B6316ec:L6316ec:{c.instructions+=3;NFSU2_TR(0x6316ec);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x8ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6316ef:{NFSU2_TR(0x6316ef);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6316f0:{NFSU2_TR(0x6316f0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6316f5ull));
TAIL_STATIC(0x61ad80u,61a);
}
B6316f5:L6316f5:{c.instructions+=6;NFSU2_TR(0x6316f5);
__builtin_memmove((R+8),gp(0x890080),4);
}
B6316fb:{NFSU2_TR(0x6316fb);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x40ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6316fe:{NFSU2_TR(0x6316fe);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B631701:{NFSU2_TR(0x631701);
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
B631703:{NFSU2_TR(0x631703);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B631707:{NFSU2_TR(0x631707);
if(r1(R+518)){{goto L63198c;}}
}
B63170d:L63170d:{c.instructions+=4;NFSU2_TR(0x63170d);
__builtin_memmove((R+0),gp(0x8900b4),4);
}
B631712:{NFSU2_TR(0x631712);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B631714:{NFSU2_TR(0x631714);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
w4(U+4,u32(0x63ull));
s4(u32(r4(U+0)),r4(U+4));
}
B63171c:{NFSU2_TR(0x63171c);
if(r1(R+518)){{goto L63173a;}}
}
B63171e:L63171e:{c.instructions+=3;NFSU2_TR(0x63171e);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x238ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B631724:{NFSU2_TR(0x631724);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B631726:{NFSU2_TR(0x631726);
if(r1(R+518)){{goto L63173a;}}
}
B631728:L631728:{c.instructions+=5;NFSU2_TR(0x631728);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0xcull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B63172b:{NFSU2_TR(0x63172b);
w4(R+4,u32(0x1ull));
}
B631730:{NFSU2_TR(0x631730);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B631732:{NFSU2_TR(0x631732);
__builtin_memmove(gp(0x8a1c18),(R+4),4);
}
B631738:{NFSU2_TR(0x631738);
if(r1(R+518)){{goto L631744;}}
}
B63173a:L63173a:{c.instructions+=1;NFSU2_TR(0x63173a);
s4(0x8a1c18,u32(0x0ull));
}
B631744:L631744:{c.instructions+=3;NFSU2_TR(0x631744);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+8))),4);
__builtin_memmove((R+24),(U+0),4);
}
B631746:{NFSU2_TR(0x631746);
u8 U[14];
__builtin_memmove((U+6),(R+8),4);
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
B631748:{NFSU2_TR(0x631748);
if(r1(R+518)){{goto L63198c;}}
}
B63174e:L63174e:{c.instructions+=1;NFSU2_TR(0x63174e);
__builtin_memmove((R+28),(R+28),4);
}
B631750:L631750:{c.instructions+=3;NFSU2_TR(0x631750);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B631753:{NFSU2_TR(0x631753);
u8 U[4];
w4(U+0,u32(u32(r4(R+12))&u32(r4(R+12))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B631755:{NFSU2_TR(0x631755);
if(r1(R+518)){{goto L631782;}}
}
B631757:L631757:{c.instructions+=3;NFSU2_TR(0x631757);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B63175a:{NFSU2_TR(0x63175a);
u8 U[16];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B63175d:{NFSU2_TR(0x63175d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L631782;}}
}
B63175f:L63175f:{c.instructions+=3;NFSU2_TR(0x63175f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B631760:{NFSU2_TR(0x631760);
__builtin_memmove((R+4),(R+12),4);
}
B631762:{NFSU2_TR(0x631762);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x631767ull));
TAIL_STATIC(0x5f3ae0u,5f3);
}
B631767:L631767:{c.instructions+=3;NFSU2_TR(0x631767);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B631768:{NFSU2_TR(0x631768);
__builtin_memmove((R+4),(R+12),4);
}
B63176a:{NFSU2_TR(0x63176a);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63176full));
TAIL_STATIC(0x5f3cb0u,5f3);
}
B63176f:L63176f:{c.instructions+=4;NFSU2_TR(0x63176f);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B631772:{NFSU2_TR(0x631772);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x1e0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B631778:{NFSU2_TR(0x631778);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B63177a:{NFSU2_TR(0x63177a);
if(r1(R+518)){{goto L631782;}}
}
B63177c:L63177c:{c.instructions+=2;NFSU2_TR(0x63177c);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63177d:{NFSU2_TR(0x63177d);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x631782ull));
TAIL_STATIC(0x56e8f0u,56e);
}
B631782:L631782:{c.instructions+=3;NFSU2_TR(0x631782);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B631786:{NFSU2_TR(0x631786);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x280ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(r4(R+24))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B63178c:{NFSU2_TR(0x63178c);
if(r1(R+518)){{goto L631930;}}
}
B631792:L631792:{c.instructions+=3;NFSU2_TR(0x631792);
u8 U[5];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x550ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B631798:{NFSU2_TR(0x631798);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B63179a:{NFSU2_TR(0x63179a);
if(r1(R+518)){{goto L631930;}}
}
B6317a0:L6317a0:{c.instructions+=3;NFSU2_TR(0x6317a0);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6317a1:{NFSU2_TR(0x6317a1);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6317a2:{NFSU2_TR(0x6317a2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6317a7ull));
TAIL_STATIC(0x60d4f0u,60d);
}
B6317a7:L6317a7:{c.instructions+=3;NFSU2_TR(0x6317a7);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B6317aa:{NFSU2_TR(0x6317aa);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6317ac:{NFSU2_TR(0x6317ac);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L631930;}}
}
B6317b2:L6317b2:{c.instructions+=6;NFSU2_TR(0x6317b2);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6317b5:{NFSU2_TR(0x6317b5);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5b4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6317bb:{NFSU2_TR(0x6317bb);
w4(R+8,u32(0x1ull));
}
B6317c0:{NFSU2_TR(0x6317c0);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r1(U+0))));
}
B6317c2:{NFSU2_TR(0x6317c2);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6317c4:{NFSU2_TR(0x6317c4);
if(r1(R+518)){{goto L631930;}}
}
B6317ca:L6317ca:{c.instructions+=3;NFSU2_TR(0x6317ca);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6317ce:{NFSU2_TR(0x6317ce);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6317d0:{NFSU2_TR(0x6317d0);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L631930;}}
}
B6317d6:L6317d6:{c.instructions+=4;NFSU2_TR(0x6317d6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x554ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B6317dc:{NFSU2_TR(0x6317dc);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6317dd:{NFSU2_TR(0x6317dd);
__builtin_memmove((R+4),(R+12),4);
}
B6317df:{NFSU2_TR(0x6317df);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6317e4ull));
TAIL_STATIC(0x60f550u,60f);
}
B6317e4:L6317e4:{c.instructions+=11;NFSU2_TR(0x6317e4);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B6317e8:{NFSU2_TR(0x6317e8);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B6317eb:{NFSU2_TR(0x6317eb);
w4(R+8,u32(u32(r4(R+8))-u32(u32(0x1ull))));
}
B6317ec:{NFSU2_TR(0x6317ec);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6317ed:{NFSU2_TR(0x6317ed);
u8 U[4];
w4(U+0,u32(u32(u32(0x124ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B6317f4:{NFSU2_TR(0x6317f4);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6317f8:{NFSU2_TR(0x6317f8);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6317f9:{NFSU2_TR(0x6317f9);
u8 U[4];
w4(U+0,u32(u32(u32(0x228ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B631800:{NFSU2_TR(0x631800);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B631801:{NFSU2_TR(0x631801);
__builtin_memmove((R+4),(R+24),4);
}
B631803:{NFSU2_TR(0x631803);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x631808ull));
TAIL_STATIC(0x5f6820u,5f6);
}
B631808:L631808:{c.instructions+=4;NFSU2_TR(0x631808);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63180b:{NFSU2_TR(0x63180b);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(U+8))-u32(u32(0x3ull))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B63180f:{NFSU2_TR(0x63180f);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B631812:{NFSU2_TR(0x631812);
if(r1(R+518)){{goto L631888;}}
}
B631814:L631814:{c.instructions+=5;NFSU2_TR(0x631814);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B631815:{NFSU2_TR(0x631815);
u8 U[4];
w4(U+0,u32(u32(u32(0x24ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B631819:{NFSU2_TR(0x631819);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63181a:{NFSU2_TR(0x63181a);
__builtin_memmove((R+4),(R+24),4);
}
B63181c:{NFSU2_TR(0x63181c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x631821ull));
TAIL_STATIC(0x5ec7f0u,5ec);
}
B631821:L631821:{c.instructions+=7;NFSU2_TR(0x631821);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B631824:{NFSU2_TR(0x631824);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5b0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63182a:{NFSU2_TR(0x63182a);
w4(R+8,u32(0x1ull));
}
B63182f:{NFSU2_TR(0x63182f);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r1(U+0))));
}
B631831:{NFSU2_TR(0x631831);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x560ull))));
__builtin_memmove((R+4),(U+0),4);
}
B631837:{NFSU2_TR(0x631837);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+8))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B631839:{NFSU2_TR(0x631839);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L631841;}}
}
B63183b:L63183b:{c.instructions+=1;NFSU2_TR(0x63183b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B631841:L631841:{c.instructions+=3;NFSU2_TR(0x631841);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B631843:{NFSU2_TR(0x631843);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5a0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B631849:{NFSU2_TR(0x631849);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L63184e;}}
}
B63184b:L63184b:{c.instructions+=1;NFSU2_TR(0x63184b);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((R+0),(U+0),4);
}
B63184e:L63184e:{c.instructions+=19;NFSU2_TR(0x63184e);
__builtin_memmove((R+8),gp(0x8a1c10),4);
}
B631854:{NFSU2_TR(0x631854);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B631855:{NFSU2_TR(0x631855);
__builtin_memmove((R+8),gp(0x8a1c14),4);
}
B63185b:{NFSU2_TR(0x63185b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63185c:{NFSU2_TR(0x63185c);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63185e:{NFSU2_TR(0x63185e);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B631860:{NFSU2_TR(0x631860);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B631862:{NFSU2_TR(0x631862);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B631866:{NFSU2_TR(0x631866);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B631867:{NFSU2_TR(0x631867);
u8 U[4];
w4(U+0,u32(u32(u32(0x138ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B63186e:{NFSU2_TR(0x63186e);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63186f:{NFSU2_TR(0x63186f);
u8 U[4];
w4(U+0,u32(u32(u32(0x23cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B631876:{NFSU2_TR(0x631876);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B631877:{NFSU2_TR(0x631877);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B631878:{NFSU2_TR(0x631878);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B631879:{NFSU2_TR(0x631879);
u8 U[4];
w4(U+0,u32(0x7f3f00ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63187e:{NFSU2_TR(0x63187e);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63187f:{NFSU2_TR(0x63187f);
__builtin_memmove((R+4),(R+12),4);
}
B631881:{NFSU2_TR(0x631881);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x631886ull));
TAIL_STATIC(0x620ae0u,620);
}
B631886:L631886:{c.instructions+=1;NFSU2_TR(0x631886);
{goto L6318ea;}
}
B631888:L631888:{c.instructions+=6;NFSU2_TR(0x631888);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5b0ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63188e:{NFSU2_TR(0x63188e);
w4(R+8,u32(0x1ull));
}
B631893:{NFSU2_TR(0x631893);
u8 U[1];
w1(U+0,u8(u32(r1(R+4))&u32(u8(0x1full))));
w4(R+8,shl<u32>(r4(R+8),u64(r1(U+0))));
}
B631895:{NFSU2_TR(0x631895);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x560ull))));
__builtin_memmove((R+4),(U+0),4);
}
B63189b:{NFSU2_TR(0x63189b);
w4(R+0,u32(u32(r4(R+0))&u32(r4(R+8))));
w1(R+518,u8((r4(R+0))==(u32(0x0ull))));
}
B63189d:{NFSU2_TR(0x63189d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6318a5;}}
}
B63189f:L63189f:{c.instructions+=1;NFSU2_TR(0x63189f);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0xd0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B6318a5:L6318a5:{c.instructions+=3;NFSU2_TR(0x6318a5);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6318a7:{NFSU2_TR(0x6318a7);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x5a0ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6318ad:{NFSU2_TR(0x6318ad);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L6318b2;}}
}
B6318af:L6318af:{c.instructions+=1;NFSU2_TR(0x6318af);
u8 U[4];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x50ull))));
__builtin_memmove((R+0),(U+0),4);
}
B6318b2:L6318b2:{c.instructions+=19;NFSU2_TR(0x6318b2);
__builtin_memmove((R+8),gp(0x8a1c10),4);
}
B6318b8:{NFSU2_TR(0x6318b8);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6318b9:{NFSU2_TR(0x6318b9);
__builtin_memmove((R+8),gp(0x8a1c14),4);
}
B6318bf:{NFSU2_TR(0x6318bf);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6318c0:{NFSU2_TR(0x6318c0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6318c2:{NFSU2_TR(0x6318c2);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6318c4:{NFSU2_TR(0x6318c4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6318c6:{NFSU2_TR(0x6318c6);
u8 U[4];
w4(U+0,u32(u32(u32(0x34ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B6318ca:{NFSU2_TR(0x6318ca);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6318cb:{NFSU2_TR(0x6318cb);
u8 U[4];
w4(U+0,u32(u32(u32(0x138ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B6318d2:{NFSU2_TR(0x6318d2);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6318d3:{NFSU2_TR(0x6318d3);
u8 U[4];
w4(U+0,u32(u32(u32(0x23cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B6318da:{NFSU2_TR(0x6318da);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6318db:{NFSU2_TR(0x6318db);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6318dc:{NFSU2_TR(0x6318dc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6318dd:{NFSU2_TR(0x6318dd);
u8 U[4];
w4(U+0,u32(0x7f3f00ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6318e2:{NFSU2_TR(0x6318e2);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6318e3:{NFSU2_TR(0x6318e3);
__builtin_memmove((R+4),(R+12),4);
}
B6318e5:{NFSU2_TR(0x6318e5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x6318eaull));
TAIL_STATIC(0x6162e0u,616);
}
B6318ea:L6318ea:{c.instructions+=3;NFSU2_TR(0x6318ea);
__builtin_memmove((R+0),gp(0x8900b4),4);
}
B6318ef:{NFSU2_TR(0x6318ef);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6318f1:{NFSU2_TR(0x6318f1);
if(r1(R+518)){{goto L63191a;}}
}
B6318f3:L6318f3:{c.instructions+=3;NFSU2_TR(0x6318f3);
u8 U[8];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6318f6:{NFSU2_TR(0x6318f6);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B6318f9:{NFSU2_TR(0x6318f9);
if(r1(R+518)){{goto L631909;}}
}
B6318fb:L6318fb:{c.instructions+=3;NFSU2_TR(0x6318fb);
__builtin_memmove((R+0),gp(0x8900b8),4);
}
B631900:{NFSU2_TR(0x631900);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B631902:{NFSU2_TR(0x631902);
if(r1(R+518)){{goto L63191a;}}
}
B631904:L631904:{c.instructions+=2;NFSU2_TR(0x631904);
u8 U[16];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(U+12,u32(u32(r4(R+4))-u32(r4(U+8))));
w1(R+518,u8((r4(U+12))==(u32(0x0ull))));
}
B631907:{NFSU2_TR(0x631907);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L63191a;}}
}
B631909:L631909:{c.instructions+=3;NFSU2_TR(0x631909);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x58ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63190c:{NFSU2_TR(0x63190c);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B63190e:{NFSU2_TR(0x63190e);
if(r1(R+518)){{goto L63191a;}}
}
B631910:L631910:{c.instructions+=2;NFSU2_TR(0x631910);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x6ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B631913:{NFSU2_TR(0x631913);
if(r1(R+518)){{goto L63197e;}}
}
B631915:L631915:{c.instructions+=2;NFSU2_TR(0x631915);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x7ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B631918:{NFSU2_TR(0x631918);
if(r1(R+518)){{goto L63197e;}}
}
B63191a:L63191a:{c.instructions+=8;NFSU2_TR(0x63191a);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63191e:{NFSU2_TR(0x63191e);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x50ull))));
__builtin_memmove((R+4),(U+0),4);
}
B631921:{NFSU2_TR(0x631921);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B631922:{NFSU2_TR(0x631922);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x40ull))));
}
B631925:{NFSU2_TR(0x631925);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B631926:{NFSU2_TR(0x631926);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B631927:{NFSU2_TR(0x631927);
__builtin_memmove((R+4),(R+24),4);
}
B631929:{NFSU2_TR(0x631929);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63192eull));
TAIL_STATIC(0x5ec2a0u,5ec);
}
B63192e:L63192e:{c.instructions+=1;NFSU2_TR(0x63192e);
{goto L63197e;}
}
B631930:L631930:{c.instructions+=3;NFSU2_TR(0x631930);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B631933:{NFSU2_TR(0x631933);
u8 U[4];
w4(U+0,u32(u32(r4(R+0))&u32(r4(R+0))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B631935:{NFSU2_TR(0x631935);
if(r1(R+518)){{goto L63197e;}}
}
B631937:L631937:{c.instructions+=3;NFSU2_TR(0x631937);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x18ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B63193a:{NFSU2_TR(0x63193a);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B63193b:{NFSU2_TR(0x63193b);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x631940ull));
TAIL_STATIC(0x48b1e0u,48b);
}
B631940:L631940:{c.instructions+=5;NFSU2_TR(0x631940);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B631943:{NFSU2_TR(0x631943);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x44ull))));
}
B631946:{NFSU2_TR(0x631946);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B631949:{NFSU2_TR(0x631949);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B63194b:{NFSU2_TR(0x63194b);
if(r1(R+518)){{goto L63197e;}}
}
B63194d:L63194d:{c.instructions+=2;NFSU2_TR(0x63194d);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B63194f:{NFSU2_TR(0x63194f);
if(r1(R+518)){{goto L63197e;}}
}
B631951:L631951:{c.instructions+=3;NFSU2_TR(0x631951);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xfffffffcull))));
__builtin_memmove((R+8),(U+0),4);
}
B631954:{NFSU2_TR(0x631954);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B631956:{NFSU2_TR(0x631956);
if(r1(R+518)){{goto L63197e;}}
}
B631958:L631958:{c.instructions+=3;NFSU2_TR(0x631958);
__builtin_memmove((R+8),(R+4),4);
}
B63195a:{NFSU2_TR(0x63195a);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B63195c:{NFSU2_TR(0x63195c);
if(r1(R+518)){{goto L631967;}}
}
B63195e:L63195e:{c.instructions+=2;NFSU2_TR(0x63195e);
u8 U[4];
w4(U+0,u32(u32(r4(R+4))&u32(r4(R+4))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B631960:{NFSU2_TR(0x631960);
if(r1(R+518)){{goto L631967;}}
}
B631962:L631962:{c.instructions+=2;NFSU2_TR(0x631962);
u8 U[6];
w1(R+512,carry<u32>(r4(R+4),u32(0xfffffffcull)));
w1(R+523,scarry<u32>(r4(R+4),u32(0xfffffffcull)));
w4(R+4,u32(u32(r4(R+4))+u32(u32(0xfffffffcull))));
w1(R+519,u8(s32(r4(R+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+4))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+4))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B631965:{NFSU2_TR(0x631965);
{goto L631969;}
}
B631967:L631967:{c.instructions+=1;NFSU2_TR(0x631967);
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
B631969:L631969:{c.instructions+=2;NFSU2_TR(0x631969);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+4))),4);
__builtin_memmove((R+8),(U+0),4);
}
B63196b:{NFSU2_TR(0x63196b);
u8 U[12];
w4(U+0,u32(u32(r4(R+8))+u32(u32(0x24ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((U+8),(U+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63196eull));
{u32 t_=u32(r4(U+8));TAIL_DYNAMIC(t_);}
}
B63196e:L63196e:{c.instructions+=2;NFSU2_TR(0x63196e);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B631970:{NFSU2_TR(0x631970);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L63197e;}}
}
B631972:L631972:{c.instructions+=3;NFSU2_TR(0x631972);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x554ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B631978:{NFSU2_TR(0x631978);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B631979:{NFSU2_TR(0x631979);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x63197eull));
TAIL_STATIC(0x60f550u,60f);
}
B63197e:L63197e:{c.instructions+=3;NFSU2_TR(0x63197e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B631980:{NFSU2_TR(0x631980);
u8 U[14];
__builtin_memmove((U+6),gp(0x890080),4);
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
B631986:{NFSU2_TR(0x631986);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x631750u);}goto L631750;}}
}
B63198c:L63198c:{c.instructions+=6;NFSU2_TR(0x63198c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B63198d:{NFSU2_TR(0x63198d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B63198e:{NFSU2_TR(0x63198e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B63198f:{NFSU2_TR(0x63198f);
__builtin_memmove((R+16),(R+20),4);
}
B631991:{NFSU2_TR(0x631991);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B631992:{NFSU2_TR(0x631992);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B6319a0:L6319a0:{c.instructions+=10;NFSU2_TR(0x6319a0);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6319a1:{NFSU2_TR(0x6319a1);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6319a2:{NFSU2_TR(0x6319a2);
__builtin_memmove((R+12),gp(0x8a1cc8),4);
}
B6319a8:{NFSU2_TR(0x6319a8);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6319a9:{NFSU2_TR(0x6319a9);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6319aa:{NFSU2_TR(0x6319aa);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B6319ab:{NFSU2_TR(0x6319ab);
w4(R+8,u32(u32(r4(R+8))^u32(r4(R+8))));
}
B6319ad:{NFSU2_TR(0x6319ad);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B6319af:{NFSU2_TR(0x6319af);
u8 U[6];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0xaull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),2);
__builtin_memmove((R+28),(U+4),2);
}
B6319b3:{NFSU2_TR(0x6319b3);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B6319b7:L6319b7:{c.instructions+=2;NFSU2_TR(0x6319b7);
u8 U[4];
__builtin_memmove((U+0),(R+28),2);
w2(U+2,u16(u32(r2(U+0))-u32(u16(0xffffull))));
w1(R+518,u8((r2(U+2))==(u16(0x0ull))));
}
B6319bc:{NFSU2_TR(0x6319bc);
if(r1(R+518)){{goto L6319f9;}}
}
B6319be:L6319be:{c.instructions+=7;NFSU2_TR(0x6319be);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x14ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B6319c1:{NFSU2_TR(0x6319c1);
w4(R+0,u32(r2(R+28)));
}
B6319c4:{NFSU2_TR(0x6319c4);
u8 U[10];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((U+8),gp(u32(r4(U+4))),2);
w4(R+24,u32(s32(s16(r2(U+8)))));
}
B6319c8:{NFSU2_TR(0x6319c8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+4,u32(u32(r4(R+4))+u32(r4(U+0))));
__builtin_memmove((R+4),(U+4),4);
}
B6319cb:{NFSU2_TR(0x6319cb);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6319cd:{NFSU2_TR(0x6319cd);
u8 U[4];
w4(U+0,u32(u32(r4(R+8))&u32(r4(R+8))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6319cf:{NFSU2_TR(0x6319cf);
if(r1(R+518)){{goto L631a07;}}
}
B6319d1:L6319d1:{c.instructions+=2;NFSU2_TR(0x6319d1);
u8 U[4];
w1(R+523,u8(0x0ull));
w4(U+0,u32(u32(r4(R+24))&u32(r4(R+24))));
w1(R+519,u8(s32(r4(U+0))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B6319d3:{NFSU2_TR(0x6319d3);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L6319f5;}}
}
B6319d5:L6319d5:{c.instructions+=2;NFSU2_TR(0x6319d5);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6319d8:{NFSU2_TR(0x6319d8);
{goto L6319e0;}
}
B6319e0:L6319e0:{c.instructions+=5;NFSU2_TR(0x6319e0);
u8 U[14];
w4(U+0,u32(u32(u32(0x2ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
w4(R+20,u32(s32(s16(r2(U+12)))));
}
B6319e5:{NFSU2_TR(0x6319e5);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B6319e6:{NFSU2_TR(0x6319e6);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+28))+u32(r4(U+0))));
__builtin_memmove((R+20),(U+4),4);
}
B6319e9:{NFSU2_TR(0x6319e9);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w4(U+4,u32(u32(r4(R+8))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6319eb:{NFSU2_TR(0x6319eb);
if(r1(R+518)){{goto L6319f1;}}
}
B6319ed:L6319ed:{c.instructions+=2;NFSU2_TR(0x6319ed);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B6319ef:{NFSU2_TR(0x6319ef);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6319e0u);}goto L6319e0;}}
}
B6319f1:L6319f1:{c.instructions+=1;NFSU2_TR(0x6319f1);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B6319f5:L6319f5:{c.instructions+=2;NFSU2_TR(0x6319f5);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B6319f7:{NFSU2_TR(0x6319f7);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L631a09;}}
}
B6319f9:L6319f9:{c.instructions+=1;NFSU2_TR(0x6319f9);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B6319fb:L6319fb:{c.instructions+=3;NFSU2_TR(0x6319fb);
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
B6319fd:{NFSU2_TR(0x6319fd);
__builtin_memmove((R+8),(R+0),4);
}
B6319ff:{NFSU2_TR(0x6319ff);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6319b7u);}goto L6319b7;}}
}
B631a01:L631a01:{c.instructions+=6;NFSU2_TR(0x631a01);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B631a02:{NFSU2_TR(0x631a02);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B631a03:{NFSU2_TR(0x631a03);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B631a04:{NFSU2_TR(0x631a04);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B631a05:{NFSU2_TR(0x631a05);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+4),(U+0),4);
}
B631a06:{NFSU2_TR(0x631a06);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B631a07:L631a07:{c.instructions+=1;NFSU2_TR(0x631a07);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(R+0),r4(U+0)));
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B631a09:L631a09:{c.instructions+=1;NFSU2_TR(0x631a09);
u8 U[1];
w1(U+0,u8((r1(R+523))==(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6319f9u);}goto L6319f9;}}
}
B631a0b:L631a0b:{c.instructions+=4;NFSU2_TR(0x631a0b);
u8 U[14];
w4(U+0,u32(u32(u32(0x2ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
w4(R+8,u32(s32(s16(r2(U+12)))));
}
B631a10:{NFSU2_TR(0x631a10);
u8 U[8];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x1cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B631a13:{NFSU2_TR(0x631a13);
u8 U[8];
w4(U+0,u32(u32(r4(R+8))*u32(u32(0x8ull))));
w4(U+4,u32(u32(r4(R+0))+u32(r4(U+0))));
__builtin_memmove((R+0),(U+4),4);
}
B631a16:{NFSU2_TR(0x631a16);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x6319fbu);}goto L6319fb;}
}
B631a20:L631a20:{c.instructions+=17;NFSU2_TR(0x631a20);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B631a24:{NFSU2_TR(0x631a24);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B631a25:{NFSU2_TR(0x631a25);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B631a29:{NFSU2_TR(0x631a29);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B631a2a:{NFSU2_TR(0x631a2a);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B631a2e:{NFSU2_TR(0x631a2e);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B631a2f:{NFSU2_TR(0x631a2f);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B631a30:{NFSU2_TR(0x631a30);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B631a31:{NFSU2_TR(0x631a31);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B631a33:{NFSU2_TR(0x631a33);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B631a34:{NFSU2_TR(0x631a34);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B631a35:{NFSU2_TR(0x631a35);
__builtin_memmove((R+24),(R+4),4);
}
B631a37:{NFSU2_TR(0x631a37);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B631a3b:{NFSU2_TR(0x631a3b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B631a3c:{NFSU2_TR(0x631a3c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B631a3d:{NFSU2_TR(0x631a3d);
__builtin_memmove((R+4),(R+24),4);
}
B631a3f:{NFSU2_TR(0x631a3f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x631a44ull));
TAIL_STATIC(0x61b980u,61b);
}
B631a44:L631a44:{c.instructions+=2;NFSU2_TR(0x631a44);
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
B631a46:{NFSU2_TR(0x631a46);
if(r1(R+518)){{goto L631a61;}}
}
B631a48:L631a48:{c.instructions+=10;NFSU2_TR(0x631a48);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B631a4c:{NFSU2_TR(0x631a4c);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B631a4d:{NFSU2_TR(0x631a4d);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B631a4e:{NFSU2_TR(0x631a4e);
u8 U[8];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B631a52:{NFSU2_TR(0x631a52);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B631a53:{NFSU2_TR(0x631a53);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B631a54:{NFSU2_TR(0x631a54);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B631a55:{NFSU2_TR(0x631a55);
__builtin_memmove((R+4),(R+24),4);
}
B631a57:{NFSU2_TR(0x631a57);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x1ull))));
}
B631a58:{NFSU2_TR(0x631a58);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x631a5dull));
TAIL_STATIC(0x61b980u,61b);
}
B631a5d:L631a5d:{c.instructions+=2;NFSU2_TR(0x631a5d);
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
B631a5f:{NFSU2_TR(0x631a5f);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x631a48u);}goto L631a48;}}
}
B631a61:L631a61:{c.instructions+=6;NFSU2_TR(0x631a61);
__builtin_memmove((R+0),(R+28),4);
}
B631a63:{NFSU2_TR(0x631a63);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B631a64:{NFSU2_TR(0x631a64);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B631a65:{NFSU2_TR(0x631a65);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B631a66:{NFSU2_TR(0x631a66);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B631a67:{NFSU2_TR(0x631a67);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B631a70:L631a70:{c.instructions+=10;NFSU2_TR(0x631a70);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x16cull))));
}
B631a76:{NFSU2_TR(0x631a76);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B631a77:{NFSU2_TR(0x631a77);
u8 U[8];
w4(U+0,u32(u32(u32(0x174ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B631a7e:{NFSU2_TR(0x631a7e);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B631a7f:{NFSU2_TR(0x631a7f);
__builtin_memmove((R+20),(R+4),4);
}
B631a81:{NFSU2_TR(0x631a81);
u8 U[4];
w4(U+0,u32(0x7a88bcull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B631a86:{NFSU2_TR(0x631a86);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B631a88:{NFSU2_TR(0x631a88);
__builtin_memmove((R+4),(R+12),4);
}
B631a8a:{NFSU2_TR(0x631a8a);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+20),4);
s4(u32(r4(U+0)),r4(U+4));
}
B631a8e:{NFSU2_TR(0x631a8e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x631a93ull));
TAIL_STATIC(0x578ce0u,578);
}
B631a93:L631a93:{c.instructions+=6;NFSU2_TR(0x631a93);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B631a95:{NFSU2_TR(0x631a95);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B631a97:{NFSU2_TR(0x631a97);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B631a99:{NFSU2_TR(0x631a99);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B631a9a:{NFSU2_TR(0x631a9a);
__builtin_memmove((R+4),(R+12),4);
}
B631a9c:{NFSU2_TR(0x631a9c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x631aa1ull));
TAIL_STATIC(0x571640u,571);
}
B631aa1:L631aa1:{c.instructions+=4;NFSU2_TR(0x631aa1);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x5ull))));
__builtin_memmove((R+0),(U+0),4);
}
B631aa4:{NFSU2_TR(0x631aa4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B631aa5:{NFSU2_TR(0x631aa5);
__builtin_memmove((R+4),(R+12),4);
}
B631aa7:{NFSU2_TR(0x631aa7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x631aacull));
TAIL_STATIC(0x5716c0u,571);
}
B631aac:L631aac:{c.instructions+=4;NFSU2_TR(0x631aac);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x7ull))));
__builtin_memmove((R+4),(U+0),4);
}
B631aaf:{NFSU2_TR(0x631aaf);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B631ab0:{NFSU2_TR(0x631ab0);
__builtin_memmove((R+4),(R+12),4);
}
B631ab2:{NFSU2_TR(0x631ab2);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x631ab7ull));
TAIL_STATIC(0x5716c0u,571);
}
B631ab7:L631ab7:{c.instructions+=4;NFSU2_TR(0x631ab7);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x580ull))));
__builtin_memmove((R+8),(U+0),4);
}
B631abd:{NFSU2_TR(0x631abd);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B631abe:{NFSU2_TR(0x631abe);
__builtin_memmove((R+4),(R+12),4);
}
B631ac0:{NFSU2_TR(0x631ac0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x631ac5ull));
TAIL_STATIC(0x5716c0u,571);
}
B631ac5:L631ac5:{c.instructions+=4;NFSU2_TR(0x631ac5);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x581ull))));
__builtin_memmove((R+0),(U+0),4);
}
B631acb:{NFSU2_TR(0x631acb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B631acc:{NFSU2_TR(0x631acc);
__builtin_memmove((R+4),(R+12),4);
}
B631ace:{NFSU2_TR(0x631ace);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x631ad3ull));
TAIL_STATIC(0x5716c0u,571);
}
B631ad3:L631ad3:{c.instructions+=3;NFSU2_TR(0x631ad3);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x41ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B631ad6:{NFSU2_TR(0x631ad6);
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
B631ad8:{NFSU2_TR(0x631ad8);
if(r1(R+518)){{goto L631ae6;}}
}
B631ada:L631ada:{c.instructions+=4;NFSU2_TR(0x631ada);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+4),(U+0),4);
}
B631add:{NFSU2_TR(0x631add);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B631ade:{NFSU2_TR(0x631ade);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B631ae1:{NFSU2_TR(0x631ae1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x631ae6ull));
TAIL_STATIC(0x5a7890u,5a7);
}
B631ae6:L631ae6:{c.instructions+=4;NFSU2_TR(0x631ae6);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B631ae7:{NFSU2_TR(0x631ae7);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B631ae8:{NFSU2_TR(0x631ae8);
__builtin_memmove((R+4),(R+20),4);
}
B631aea:{NFSU2_TR(0x631aea);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x631aefull));
TAIL_STATIC(0x4017e0u,401);
}
B631aef:L631aef:{c.instructions+=4;NFSU2_TR(0x631aef);
__builtin_memmove((R+24),(R+0),4);
}
B631af1:{NFSU2_TR(0x631af1);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x28ull))));
}
B631af4:{NFSU2_TR(0x631af4);
w4(R+28,u32(0xaull));
}
B631af9:{NFSU2_TR(0x631af9);
__builtin_memmove((R+16),(R+16),4);
}
B631b00:L631b00:{c.instructions+=6;NFSU2_TR(0x631b00);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B631b02:{NFSU2_TR(0x631b02);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B631b04:{NFSU2_TR(0x631b04);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B631b06:{NFSU2_TR(0x631b06);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B631b07:{NFSU2_TR(0x631b07);
__builtin_memmove((R+4),(R+12),4);
}
B631b09:{NFSU2_TR(0x631b09);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x631b0eull));
TAIL_STATIC(0x571640u,571);
}
B631b0e:L631b0e:{c.instructions+=3;NFSU2_TR(0x631b0e);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x4ull))));
}
B631b11:{NFSU2_TR(0x631b11);
w4(R+28,u32(u32(r4(R+28))-u32(u32(0x1ull))));
w1(R+518,u8((r4(R+28))==(u32(0x0ull))));
}
B631b12:{NFSU2_TR(0x631b12);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x631b00u);}goto L631b00;}}
}
B631b14:L631b14:{c.instructions+=2;NFSU2_TR(0x631b14);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B631b18:{NFSU2_TR(0x631b18);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x631b1dull));
TAIL_STATIC(0x5a6300u,5a6);
}
B631b1d:L631b1d:{c.instructions+=3;NFSU2_TR(0x631b1d);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x41ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B631b20:{NFSU2_TR(0x631b20);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B631b22:{NFSU2_TR(0x631b22);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L631b36;}}
}
B631b24:L631b24:{c.instructions+=5;NFSU2_TR(0x631b24);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B631b26:{NFSU2_TR(0x631b26);
u8 U[4];
w4(U+0,u32(u32(u32(0x1cull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B631b2a:{NFSU2_TR(0x631b2a);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B631b2b:{NFSU2_TR(0x631b2b);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x2f0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B631b31:{NFSU2_TR(0x631b31);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x631b36ull));
TAIL_STATIC(0x5994f0u,599);
}
B631b36:L631b36:{c.instructions+=1;NFSU2_TR(0x631b36);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B631b38:L631b38:{c.instructions+=4;NFSU2_TR(0x631b38);
u8 U[12];
w4(U+0,u32(u32(u32(0x1dull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+0),(U+8),4);
}
B631b3c:{NFSU2_TR(0x631b3c);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B631b3d:{NFSU2_TR(0x631b3d);
__builtin_memmove((R+4),(R+12),4);
}
B631b3f:{NFSU2_TR(0x631b3f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x631b44ull));
TAIL_STATIC(0x5716c0u,571);
}
B631b44:L631b44:{c.instructions+=3;NFSU2_TR(0x631b44);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B631b45:{NFSU2_TR(0x631b45);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x9ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x9ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B631b48:{NFSU2_TR(0x631b48);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x631b38u);}goto L631b38;}}
}
B631b4a:L631b4a:{c.instructions+=3;NFSU2_TR(0x631b4a);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x41ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B631b4d:{NFSU2_TR(0x631b4d);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B631b4f:{NFSU2_TR(0x631b4f);
if(r1(R+518)){{goto L631b7c;}}
}
B631b51:L631b51:{c.instructions+=4;NFSU2_TR(0x631b51);
u8 U[4];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B631b55:{NFSU2_TR(0x631b55);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B631b56:{NFSU2_TR(0x631b56);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x2f0ull))));
__builtin_memmove((R+4),(U+0),4);
}
B631b5c:{NFSU2_TR(0x631b5c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x631b61ull));
TAIL_STATIC(0x5ac4b0u,5ac);
}
B631b61:L631b61:{c.instructions+=3;NFSU2_TR(0x631b61);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x41ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B631b64:{NFSU2_TR(0x631b64);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B631b66:{NFSU2_TR(0x631b66);
if(r1(R+518)){{goto L631b7c;}}
}
B631b68:L631b68:{c.instructions+=2;NFSU2_TR(0x631b68);
u8 U[12];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((U+4),(U+0),4);
w4(U+8,u32(u32(r4(U+4))-u32(u32(0xffffffffull))));
w1(R+518,u8((r4(U+8))==(u32(0x0ull))));
}
B631b6c:{NFSU2_TR(0x631b6c);
if(r1(R+518)){{goto L631b7c;}}
}
B631b6e:L631b6e:{c.instructions+=5;NFSU2_TR(0x631b6e);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B631b70:{NFSU2_TR(0x631b70);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B631b72:{NFSU2_TR(0x631b72);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B631b74:{NFSU2_TR(0x631b74);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B631b77:{NFSU2_TR(0x631b77);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x631b7cull));
TAIL_STATIC(0x5b4fc0u,5b4);
}
B631b7c:L631b7c:{c.instructions+=4;NFSU2_TR(0x631b7c);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x584ull))));
__builtin_memmove((R+8),(U+0),4);
}
B631b82:{NFSU2_TR(0x631b82);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B631b83:{NFSU2_TR(0x631b83);
__builtin_memmove((R+4),(R+12),4);
}
B631b85:{NFSU2_TR(0x631b85);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x631b8aull));
TAIL_STATIC(0x571770u,571);
}
B631b8a:L631b8a:{c.instructions+=4;NFSU2_TR(0x631b8a);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x588ull))));
__builtin_memmove((R+0),(U+0),4);
}
B631b90:{NFSU2_TR(0x631b90);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B631b91:{NFSU2_TR(0x631b91);
__builtin_memmove((R+4),(R+12),4);
}
B631b93:{NFSU2_TR(0x631b93);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x631b98ull));
TAIL_STATIC(0x571770u,571);
}
B631b98:L631b98:{c.instructions+=4;NFSU2_TR(0x631b98);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x58cull))));
__builtin_memmove((R+4),(U+0),4);
}
B631b9e:{NFSU2_TR(0x631b9e);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B631b9f:{NFSU2_TR(0x631b9f);
__builtin_memmove((R+4),(R+12),4);
}
B631ba1:{NFSU2_TR(0x631ba1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x631ba6ull));
TAIL_STATIC(0x571770u,571);
}
B631ba6:L631ba6:{c.instructions+=3;NFSU2_TR(0x631ba6);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x41ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B631ba9:{NFSU2_TR(0x631ba9);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B631bab:{NFSU2_TR(0x631bab);
if(r1(R+518)){{goto L631c47;}}
}
B631bb1:L631bb1:{c.instructions+=6;NFSU2_TR(0x631bb1);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B631bb3:{NFSU2_TR(0x631bb3);
u8 U[4];
w4(U+0,u32(0xaaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B631bb8:{NFSU2_TR(0x631bb8);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B631bbc:{NFSU2_TR(0x631bbc);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B631bbd:{NFSU2_TR(0x631bbd);
__builtin_memmove((R+4),(R+12),4);
}
B631bbf:{NFSU2_TR(0x631bbf);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x631bc4ull));
TAIL_STATIC(0x5785a0u,578);
}
B631bc4:L631bc4:{c.instructions+=5;NFSU2_TR(0x631bc4);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B631bc8:{NFSU2_TR(0x631bc8);
w4(R+20,u32(u32(r4(R+20))^u32(r4(R+20))));
}
B631bca:{NFSU2_TR(0x631bca);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x590ull))));
}
B631bd0:{NFSU2_TR(0x631bd0);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B631bd4:{NFSU2_TR(0x631bd4);
{goto L631be0;}
}
B631be0:L631be0:{c.instructions+=4;NFSU2_TR(0x631be0);
u8 U[14];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+20))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),2);
__builtin_memmove((R+0),(U+12),2);
}
B631be5:{NFSU2_TR(0x631be5);
u8 U[2];
w2(U+0,u16(u32(r2(R+0))-u32(u16(0xffffull))));
w1(R+518,u8((r2(U+0))==(u16(0x0ull))));
}
B631be9:{NFSU2_TR(0x631be9);
u8 U[4];
w4(U+0,u32(0x0ull));
s4(u32(r4(R+4)),r4(U+0));
}
B631bef:{NFSU2_TR(0x631bef);
if(r1(R+518)){{goto L631c27;}}
}
B631bf1:L631bf1:{c.instructions+=3;NFSU2_TR(0x631bf1);
w4(R+28,u32(s32(s16(r2(R+0)))));
}
B631bf4:{NFSU2_TR(0x631bf4);
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
B631bf6:{NFSU2_TR(0x631bf6);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L631c1f;}}
}
B631bf8:L631bf8:{c.instructions+=3;NFSU2_TR(0x631bf8);
__builtin_memmove((R+24),gp(0x8a2b68),4);
}
B631bfe:{NFSU2_TR(0x631bfe);
w4(R+4,u32(0x8a2b68ull));
}
B631c03:{NFSU2_TR(0x631c03);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x631c08ull));
TAIL_STATIC(0x502fd0u,502);
}
B631c08:L631c08:{c.instructions+=2;NFSU2_TR(0x631c08);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B631c0a:{NFSU2_TR(0x631c0a);
if(r1(R+518)){{goto L631c1f;}}
}
B631c0c:L631c0c:{c.instructions+=1;NFSU2_TR(0x631c0c);
__builtin_memmove((R+16),(R+16),4);
}
B631c10:L631c10:{c.instructions+=3;NFSU2_TR(0x631c10);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x38ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B631c13:{NFSU2_TR(0x631c13);
u8 U[8];
__builtin_memmove((U+0),(R+4),4);
w1(R+523,sborrow<u32>(r4(R+28),r4(U+0)));
w4(U+4,u32(u32(r4(R+28))-u32(r4(U+0))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B631c15:{NFSU2_TR(0x631c15);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L631c3d;}}
}
B631c17:L631c17:{c.instructions+=4;NFSU2_TR(0x631c17);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+24))),4);
__builtin_memmove((R+24),(U+0),4);
}
B631c19:{NFSU2_TR(0x631c19);
w4(R+28,u32(u32(r4(R+28))-u32(r4(R+4))));
}
B631c1b:{NFSU2_TR(0x631c1b);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w4(U+4,u32(u32(r4(R+24))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B631c1d:{NFSU2_TR(0x631c1d);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x631c10u);}goto L631c10;}}
}
B631c1f:L631c1f:{c.instructions+=1;NFSU2_TR(0x631c1f);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B631c21:L631c21:{c.instructions+=2;NFSU2_TR(0x631c21);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B631c25:{NFSU2_TR(0x631c25);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
s4(u32(r4(R+4)),r4(U+0));
}
B631c27:L631c27:{c.instructions+=5;NFSU2_TR(0x631c27);
w4(R+20,u32(u32(r4(R+20))+u32(u32(0x1ull))));
}
B631c28:{NFSU2_TR(0x631c28);
w4(R+4,u32(u32(r4(R+4))+u32(u32(0x4ull))));
}
B631c2b:{NFSU2_TR(0x631c2b);
u8 U[8];
__builtin_memmove((U+0),(R+20),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xaaull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xaaull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B631c31:{NFSU2_TR(0x631c31);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B631c35:{NFSU2_TR(0x631c35);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x631be0u);}goto L631be0;}}
}
B631c37:L631c37:{c.instructions+=2;NFSU2_TR(0x631c37);
u8 U[8];
w4(U+0,u32(u32(u32(0x10ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B631c3b:{NFSU2_TR(0x631c3b);
{goto L631c81;}
}
B631c3d:L631c3d:{c.instructions+=4;NFSU2_TR(0x631c3d);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x34ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B631c40:{NFSU2_TR(0x631c40);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+28)))));
w8(U+8,u64(s64(s32(u32(0xeull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+28,u32(r8(U+16)));
}
B631c43:{NFSU2_TR(0x631c43);
w4(R+28,u32(u32(r4(R+28))+u32(r4(R+0))));
}
B631c45:{NFSU2_TR(0x631c45);
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x631c21u);}goto L631c21;}
}
B631c47:L631c47:{c.instructions+=3;NFSU2_TR(0x631c47);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B631c49:{NFSU2_TR(0x631c49);
u8 U[4];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x590ull))));
__builtin_memmove((R+28),(U+0),4);
}
B631c4f:{NFSU2_TR(0x631c4f);
}
B631c50:L631c50:{c.instructions+=4;NFSU2_TR(0x631c50);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B631c52:{NFSU2_TR(0x631c52);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B631c53:{NFSU2_TR(0x631c53);
w4(R+4,u32(0x8a2b68ull));
}
B631c58:{NFSU2_TR(0x631c58);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x631c5dull));
TAIL_STATIC(0x61b5d0u,61b);
}
B631c5d:L631c5d:{c.instructions+=5;NFSU2_TR(0x631c5d);
u8 U[14];
w4(U+0,u32(u32(u32(0x28ull))+u32(r4(R+16))));
w4(U+4,u32(u32(r4(R+24))*u32(u32(0x2ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+0),2);
s2(u32(r4(U+8)),r2(U+12));
}
B631c62:{NFSU2_TR(0x631c62);
w4(R+24,u32(u32(r4(R+24))+u32(u32(0x1ull))));
}
B631c63:{NFSU2_TR(0x631c63);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x4ull))));
}
B631c66:{NFSU2_TR(0x631c66);
u8 U[8];
__builtin_memmove((U+0),(R+24),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0xaaull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0xaaull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B631c6c:{NFSU2_TR(0x631c6c);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x631c50u);}goto L631c50;}}
}
B631c6e:L631c6e:{c.instructions+=6;NFSU2_TR(0x631c6e);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B631c70:{NFSU2_TR(0x631c70);
u8 U[4];
w4(U+0,u32(0xaaull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B631c75:{NFSU2_TR(0x631c75);
u8 U[4];
w4(U+0,u32(u32(u32(0x30ull))+u32(r4(R+16))));
__builtin_memmove((R+4),(U+0),4);
}
B631c79:{NFSU2_TR(0x631c79);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B631c7a:{NFSU2_TR(0x631c7a);
__builtin_memmove((R+4),(R+12),4);
}
B631c7c:{NFSU2_TR(0x631c7c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x631c81ull));
TAIL_STATIC(0x5785a0u,578);
}
B631c81:L631c81:{c.instructions+=5;NFSU2_TR(0x631c81);
u8 U[5];
w4(U+0,u32(u32(r4(R+12))+u32(u32(0x41ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),1);
__builtin_memmove((R+0),(U+4),1);
}
B631c84:{NFSU2_TR(0x631c84);
u8 U[1];
w1(U+0,u8(u32(r1(R+0))&u32(r1(R+0))));
w1(R+518,u8((r1(U+0))==(u8(0x0ull))));
}
B631c86:{NFSU2_TR(0x631c86);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B631c87:{NFSU2_TR(0x631c87);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B631c88:{NFSU2_TR(0x631c88);
if(r1(R+518)){{goto L631c91;}}
}
B631c8a:L631c8a:{c.instructions+=2;NFSU2_TR(0x631c8a);
__builtin_memmove((R+4),(R+20),4);
}
B631c8c:{NFSU2_TR(0x631c8c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x631c91ull));
TAIL_STATIC(0x61bcd0u,61b);
}
B631c91:L631c91:{c.instructions+=2;NFSU2_TR(0x631c91);
__builtin_memmove((R+4),(R+12),4);
}
B631c93:{NFSU2_TR(0x631c93);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x631c98ull));
TAIL_STATIC(0x578d90u,578);
}
B631c98:L631c98:{c.instructions+=4;NFSU2_TR(0x631c98);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B631c99:{NFSU2_TR(0x631c99);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B631c9a:{NFSU2_TR(0x631c9a);
u8 U[6];
w1(R+512,carry<u32>(r4(R+16),u32(0x16cull)));
w1(R+523,scarry<u32>(r4(R+16),u32(0x16cull)));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x16cull))));
w1(R+519,u8(s32(r4(R+16))<s32(u32(0x0ull))));
w1(R+518,u8((r4(R+16))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(R+16))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B631ca0:{NFSU2_TR(0x631ca0);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B631cb0:L631cb0:{c.instructions+=13;NFSU2_TR(0x631cb0);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B631cb1:{NFSU2_TR(0x631cb1);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+12),(U+4),4);
}
B631cb5:{NFSU2_TR(0x631cb5);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B631cb6:{NFSU2_TR(0x631cb6);
u8 U[8];
w4(U+0,u32(u32(u32(0xcull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B631cba:{NFSU2_TR(0x631cba);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B631cbb:{NFSU2_TR(0x631cbb);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B631cbc:{NFSU2_TR(0x631cbc);
__builtin_memmove((R+28),(R+4),4);
}
B631cbe:{NFSU2_TR(0x631cbe);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B631cc0:{NFSU2_TR(0x631cc0);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B631cc2:{NFSU2_TR(0x631cc2);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B631cc3:{NFSU2_TR(0x631cc3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B631cc4:{NFSU2_TR(0x631cc4);
w4(R+4,u32(0x8a2b68ull));
}
B631cc9:{NFSU2_TR(0x631cc9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x631cceull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x631a20u);}goto L631a20;}
}
B631cce:L631cce:{c.instructions+=2;NFSU2_TR(0x631cce);
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
B631cd0:{NFSU2_TR(0x631cd0);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L631cd8;}}
}
B631cd2:L631cd2:{c.instructions+=4;NFSU2_TR(0x631cd2);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B631cd3:{NFSU2_TR(0x631cd3);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B631cd4:{NFSU2_TR(0x631cd4);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B631cd5:{NFSU2_TR(0x631cd5);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B631cd8:L631cd8:{c.instructions+=4;NFSU2_TR(0x631cd8);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B631cd9:{NFSU2_TR(0x631cd9);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B631cda:{NFSU2_TR(0x631cda);
w4(R+24,u32(u32(r4(R+24))^u32(r4(R+24))));
}
B631cdc:{NFSU2_TR(0x631cdc);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x631ce1ull));
TAIL_STATIC(0x43c1c0u,43c);
}
B631ce1:L631ce1:{c.instructions+=4;NFSU2_TR(0x631ce1);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
}
B631ce4:{NFSU2_TR(0x631ce4);
w4(R+0,u32(u32(r4(R+0))+u32(u32(0x1ull))));
}
B631ce5:{NFSU2_TR(0x631ce5);
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
B631ce7:{NFSU2_TR(0x631ce7);
u8 U[2];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
w1(U+1,u8((r1(R+518))||(r1(U+0))));
if(r1(U+1)){{goto L631d0a;}}
}
B631ce9:L631ce9:{c.instructions+=2;NFSU2_TR(0x631ce9);
u8 U[8];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B631ced:{NFSU2_TR(0x631ced);
__builtin_memmove((R+4),(R+4),4);
}
B631cf0:L631cf0:{c.instructions+=8;NFSU2_TR(0x631cf0);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+28))),4);
__builtin_memmove((R+0),(U+0),4);
}
B631cf2:{NFSU2_TR(0x631cf2);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B631cf3:{NFSU2_TR(0x631cf3);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B631cf4:{NFSU2_TR(0x631cf4);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B631cf6:{NFSU2_TR(0x631cf6);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B631cf7:{NFSU2_TR(0x631cf7);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B631cf8:{NFSU2_TR(0x631cf8);
w4(R+4,u32(0x8a2b68ull));
}
B631cfd:{NFSU2_TR(0x631cfd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x631d02ull));
TAIL_STATIC(0x61b980u,61b);
}
B631d02:L631d02:{c.instructions+=3;NFSU2_TR(0x631d02);
__builtin_memmove((R+24),(R+0),4);
}
B631d04:{NFSU2_TR(0x631d04);
u8 U[14];
w4(U+0,u32(u32(u32(0x18ull))+u32(r4(R+16))));
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
B631d08:{NFSU2_TR(0x631d08);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x631cf0u);}goto L631cf0;}}
}
B631d0a:L631d0a:{c.instructions+=6;NFSU2_TR(0x631d0a);
__builtin_memmove((R+0),(R+24),4);
}
B631d0c:{NFSU2_TR(0x631d0c);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B631d0d:{NFSU2_TR(0x631d0d);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B631d0e:{NFSU2_TR(0x631d0e);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+20),(U+0),4);
}
B631d0f:{NFSU2_TR(0x631d0f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+12),(U+0),4);
}
B631d10:{NFSU2_TR(0x631d10);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B631d20:L631d20:{c.instructions+=3;NFSU2_TR(0x631d20);
u8 U[8];
w4(U+0,u32(u32(u32(0x4ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B631d24:{NFSU2_TR(0x631d24);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x61ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x61ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
}
B631d27:{NFSU2_TR(0x631d27);
u8 U[1];
w1(U+0,u8((r1(R+523))!=(r1(R+519))));
if(r1(U+0)){{goto L631d33;}}
}
B631d29:L631d29:{c.instructions+=2;NFSU2_TR(0x631d29);
u8 U[8];
__builtin_memmove((U+0),(R+0),4);
w1(R+523,sborrow<u32>(r4(U+0),u32(0x68ull)));
w4(U+4,u32(u32(r4(U+0))-u32(u32(0x68ull))));
w1(R+519,u8(s32(r4(U+4))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B631d2c:{NFSU2_TR(0x631d2c);
u8 U[3];
w1(U+0,u8(!(r1(R+518))));
w1(U+1,u8((r1(R+523))==(r1(R+519))));
w1(U+2,u8((r1(U+0))&&(r1(U+1))));
if(r1(U+2)){{goto L631d33;}}
}
B631d2e:L631d2e:{c.instructions+=2;NFSU2_TR(0x631d2e);
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
B631d30:{NFSU2_TR(0x631d30);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B631d33:L631d33:{c.instructions+=2;NFSU2_TR(0x631d33);
u8 U[14];
__builtin_memmove((U+6),(R+0),4);
w1(R+512,u8((r4(U+6))<(u32(0x19ull))));
w1(R+523,sborrow<u32>(r4(U+6),u32(0x19ull)));
w4(U+10,u32(u32(r4(U+6))-u32(u32(0x19ull))));
w1(R+519,u8(s32(r4(U+10))<s32(u32(0x0ull))));
w1(R+518,u8((r4(U+10))==(u32(0x0ull))));
w4(U+0,u32(u32(r4(U+10))&u32(u32(0xffull))));
w1(U+4,u8(__builtin_popcountll(u64(r4(U+0)))));
w1(U+5,u8(u32(r1(U+4))&u32(u8(0x1ull))));
w1(R+514,u8((r1(U+5))==(u8(0x0ull))));
}
B631d36:{NFSU2_TR(0x631d36);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L631d41;}}
}
B631d38:L631d38:{c.instructions+=2;NFSU2_TR(0x631d38);
u8 U[8];
w4(U+0,u32(u32(r4(R+4))+u32(u32(0x5f4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B631d3e:{NFSU2_TR(0x631d3e);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B631d41:L631d41:{c.instructions+=5;NFSU2_TR(0x631d41);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B631d45:{NFSU2_TR(0x631d45);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B631d46:{NFSU2_TR(0x631d46);
u8 U[16];
w4(U+0,u32(u32(u32(0x590ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),gp(u32(r4(U+8))),4);
__builtin_memmove((R+24),(U+12),4);
}
B631d4d:{NFSU2_TR(0x631d4d);
u8 U[16];
w4(U+0,u32(u32(u32(0x590ull))+u32(r4(R+4))));
w4(U+4,u32(u32(r4(R+0))*u32(u32(0x4ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((U+12),(R+8),4);
s4(u32(r4(U+8)),r4(U+12));
}
B631d54:{NFSU2_TR(0x631d54);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x631d59ull));
TAIL_STATIC(0x61bcd0u,61b);
}
B631d59:L631d59:{c.instructions+=3;NFSU2_TR(0x631d59);
__builtin_memmove((R+0),(R+24),4);
}
B631d5b:{NFSU2_TR(0x631d5b);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B631d5c:{NFSU2_TR(0x631d5c);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B631d60:L631d60:{c.instructions+=8;NFSU2_TR(0x631d60);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B631d61:{NFSU2_TR(0x631d61);
u8 U[8];
w4(U+0,u32(u32(u32(0x8ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B631d65:{NFSU2_TR(0x631d65);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B631d66:{NFSU2_TR(0x631d66);
u8 U[4];
w4(U+0,u32(0x7a88c8ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B631d6b:{NFSU2_TR(0x631d6b);
__builtin_memmove((R+28),(R+4),4);
}
B631d6d:{NFSU2_TR(0x631d6d);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B631d6f:{NFSU2_TR(0x631d6f);
__builtin_memmove((R+4),(R+24),4);
}
B631d71:{NFSU2_TR(0x631d71);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x631d76ull));
TAIL_STATIC(0x578ce0u,578);
}
B631d76:L631d76:{c.instructions+=3;NFSU2_TR(0x631d76);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B631d77:{NFSU2_TR(0x631d77);
__builtin_memmove((R+4),(R+24),4);
}
B631d79:{NFSU2_TR(0x631d79);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x631d7eull));
TAIL_STATIC(0x5716c0u,571);
}
B631d7e:L631d7e:{c.instructions+=4;NFSU2_TR(0x631d7e);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x1ull))));
__builtin_memmove((R+0),(U+0),4);
}
B631d81:{NFSU2_TR(0x631d81);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B631d82:{NFSU2_TR(0x631d82);
__builtin_memmove((R+4),(R+24),4);
}
B631d84:{NFSU2_TR(0x631d84);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x631d89ull));
TAIL_STATIC(0x5716c0u,571);
}
B631d89:L631d89:{c.instructions+=4;NFSU2_TR(0x631d89);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x3ull))));
__builtin_memmove((R+4),(U+0),4);
}
B631d8c:{NFSU2_TR(0x631d8c);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B631d8d:{NFSU2_TR(0x631d8d);
__builtin_memmove((R+4),(R+24),4);
}
B631d8f:{NFSU2_TR(0x631d8f);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x631d94ull));
TAIL_STATIC(0x5716c0u,571);
}
B631d94:L631d94:{c.instructions+=7;NFSU2_TR(0x631d94);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B631d96:{NFSU2_TR(0x631d96);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B631d98:{NFSU2_TR(0x631d98);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B631d9a:{NFSU2_TR(0x631d9a);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x4ull))));
__builtin_memmove((R+8),(U+0),4);
}
B631d9d:{NFSU2_TR(0x631d9d);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B631d9e:{NFSU2_TR(0x631d9e);
__builtin_memmove((R+4),(R+24),4);
}
B631da0:{NFSU2_TR(0x631da0);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x631da5ull));
TAIL_STATIC(0x571640u,571);
}
B631da5:L631da5:{c.instructions+=3;NFSU2_TR(0x631da5);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B631da6:{NFSU2_TR(0x631da6);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x10ull))));
__builtin_memmove((R+4),(U+0),4);
}
B631da9:{NFSU2_TR(0x631da9);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x631daeull));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x631a70u);}goto L631a70;}
}
B631dae:L631dae:{c.instructions+=4;NFSU2_TR(0x631dae);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x900ull))));
__builtin_memmove((R+0),(U+0),4);
}
B631db4:{NFSU2_TR(0x631db4);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B631db5:{NFSU2_TR(0x631db5);
__builtin_memmove((R+4),(R+24),4);
}
B631db7:{NFSU2_TR(0x631db7);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x631dbcull));
TAIL_STATIC(0x5716c0u,571);
}
B631dbc:L631dbc:{c.instructions+=4;NFSU2_TR(0x631dbc);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x901ull))));
__builtin_memmove((R+4),(U+0),4);
}
B631dc2:{NFSU2_TR(0x631dc2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B631dc3:{NFSU2_TR(0x631dc3);
__builtin_memmove((R+4),(R+24),4);
}
B631dc5:{NFSU2_TR(0x631dc5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x631dcaull));
TAIL_STATIC(0x5716c0u,571);
}
B631dca:L631dca:{c.instructions+=4;NFSU2_TR(0x631dca);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x902ull))));
__builtin_memmove((R+8),(U+0),4);
}
B631dd0:{NFSU2_TR(0x631dd0);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B631dd1:{NFSU2_TR(0x631dd1);
__builtin_memmove((R+4),(R+24),4);
}
B631dd3:{NFSU2_TR(0x631dd3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x631dd8ull));
TAIL_STATIC(0x5716c0u,571);
}
B631dd8:L631dd8:{c.instructions+=4;NFSU2_TR(0x631dd8);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x904ull))));
__builtin_memmove((R+0),(U+0),4);
}
B631dde:{NFSU2_TR(0x631dde);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B631ddf:{NFSU2_TR(0x631ddf);
__builtin_memmove((R+4),(R+24),4);
}
B631de1:{NFSU2_TR(0x631de1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x631de6ull));
TAIL_STATIC(0x571770u,571);
}
B631de6:L631de6:{c.instructions+=7;NFSU2_TR(0x631de6);
u8 U[4];
w4(U+0,u32(0x0ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B631de8:{NFSU2_TR(0x631de8);
u8 U[4];
w4(U+0,u32(0xffffffffull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B631dea:{NFSU2_TR(0x631dea);
u8 U[4];
w4(U+0,u32(0x10ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B631dec:{NFSU2_TR(0x631dec);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))+u32(u32(0x90cull))));
__builtin_memmove((R+4),(U+0),4);
}
B631df2:{NFSU2_TR(0x631df2);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B631df3:{NFSU2_TR(0x631df3);
__builtin_memmove((R+4),(R+24),4);
}
B631df5:{NFSU2_TR(0x631df5);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x631dfaull));
TAIL_STATIC(0x571640u,571);
}
B631dfa:L631dfa:{c.instructions+=7;NFSU2_TR(0x631dfa);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B631dfc:{NFSU2_TR(0x631dfc);
u8 U[4];
w4(U+0,u32(0x4ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B631dfe:{NFSU2_TR(0x631dfe);
u8 U[4];
w4(U+0,u32(0x1ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B631e00:{NFSU2_TR(0x631e00);
w4(R+28,u32(u32(r4(R+28))+u32(u32(0x908ull))));
}
B631e06:{NFSU2_TR(0x631e06);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B631e07:{NFSU2_TR(0x631e07);
__builtin_memmove((R+4),(R+24),4);
}
B631e09:{NFSU2_TR(0x631e09);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x631e0eull));
TAIL_STATIC(0x571640u,571);
}
B631e0e:L631e0e:{c.instructions+=2;NFSU2_TR(0x631e0e);
__builtin_memmove((R+4),(R+24),4);
}
B631e10:{NFSU2_TR(0x631e10);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x631e15ull));
TAIL_STATIC(0x578d90u,578);
}
B631e15:L631e15:{c.instructions+=3;NFSU2_TR(0x631e15);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+28),(U+0),4);
}
B631e16:{NFSU2_TR(0x631e16);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
__builtin_memmove((R+24),(U+0),4);
}
B631e17:{NFSU2_TR(0x631e17);
__builtin_memmove((R+644),gp(u32(r4(R+16))),4);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x4ull))));
{u32 t_=u32(r4(R+644));TAIL_DYNAMIC(t_);}
}
B631e20:L631e20:{c.instructions+=20;NFSU2_TR(0x631e20);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x6cull))));
}
B631e23:{NFSU2_TR(0x631e23);
__builtin_memmove((R+4),gp(0x8a1ccc),4);
}
B631e29:{NFSU2_TR(0x631e29);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B631e2a:{NFSU2_TR(0x631e2a);
u8 U[4];
__builtin_memmove((U+0),(R+20),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B631e2b:{NFSU2_TR(0x631e2b);
u8 U[8];
w4(U+0,u32(u32(u32(0x7cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+20),(U+4),4);
}
B631e2f:{NFSU2_TR(0x631e2f);
u8 U[4];
__builtin_memmove((U+0),gp(u32(r4(R+20))),4);
__builtin_memmove((R+0),(U+0),4);
}
B631e32:{NFSU2_TR(0x631e32);
u8 U[24];
w8(U+0,u64(s64(s32(r4(R+0)))));
w8(U+8,u64(s64(s32(u32(0x890ull)))));
w8(U+16,u64(u64(r8(U+0))*u64(r8(U+8))));
w4(R+0,u32(r8(U+16)));
}
B631e38:{NFSU2_TR(0x631e38);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B631e39:{NFSU2_TR(0x631e39);
u8 U[8];
w4(U+0,u32(u32(u32(0x7cull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+24),(U+4),4);
}
B631e3d:{NFSU2_TR(0x631e3d);
u8 U[12];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+0))));
w4(U+4,u32(u32(r4(R+4))*u32(u32(0x1ull))));
w4(U+8,u32(u32(r4(U+0))+u32(r4(U+4))));
__builtin_memmove((R+8),(U+8),4);
}
B631e41:{NFSU2_TR(0x631e41);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B631e42:{NFSU2_TR(0x631e42);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B631e43:{NFSU2_TR(0x631e43);
u8 U[8];
w4(U+0,u32(u32(u32(0x14ull))+u32(r4(R+16))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B631e47:{NFSU2_TR(0x631e47);
u8 U[4];
w4(U+0,u32(u32(u32(0x40ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B631e4b:{NFSU2_TR(0x631e4b);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B631e4d:{NFSU2_TR(0x631e4d);
u8 U[4];
w4(U+0,u32(0x7a8a84ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B631e52:{NFSU2_TR(0x631e52);
w4(R+4,u32(0xbfull));
}
B631e57:{NFSU2_TR(0x631e57);
__builtin_memmove((R+28),(R+24),4);
}
B631e59:{NFSU2_TR(0x631e59);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B631e5a:{NFSU2_TR(0x631e5a);
w4(R+12,u32(u32(r4(R+12))^u32(r4(R+12))));
}
B631e5c:L631e5c:{c.instructions+=1;NFSU2_TR(0x631e5c);
u8 U[21];
w1(U+20,u8((r4(R+4))==(u32(0x0ull))));
if(r1(U+20)){{goto L631e5e;}}
w4(R+4,u32(u32(r4(R+4))-u32(u32(0x1ull))));
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+28))+u32(u32(0x4ull))));
w4(U+8,u32(r1(R+522)));
w4(U+12,u32(u32(u32(0x8ull))*u32(r4(U+8))));
w4(R+28,u32(u32(r4(U+4))-u32(r4(U+12))));
__builtin_memmove((U+16),(R+0),4);
s4(u32(r4(U+0)),r4(U+16));
{if(__builtin_expect(++c.chain>=2048,0)){c.chain=0;EXIT(0x631e5cu);}goto L631e5c;}
}
B631e5e:L631e5e:{c.instructions+=1;NFSU2_TR(0x631e5e);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x631e63ull));
TAIL_STATIC(0x4400d0u,440);
}
B631e63:L631e63:{c.instructions+=3;NFSU2_TR(0x631e63);
u8 U[4];
w4(U+0,u32(u32(u32(0x48ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B631e67:{NFSU2_TR(0x631e67);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B631e68:{NFSU2_TR(0x631e68);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x631e6dull));
TAIL_STATIC(0x43db50u,43d);
}
B631e6d:L631e6d:{c.instructions+=7;NFSU2_TR(0x631e6d);
u8 U[8];
w4(U+0,u32(u32(u32(0x20ull))+u32(r4(R+16))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B631e71:{NFSU2_TR(0x631e71);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B631e72:{NFSU2_TR(0x631e72);
u8 U[4];
w4(U+0,u32(u32(u32(0x50ull))+u32(r4(R+16))));
__builtin_memmove((R+8),(U+0),4);
}
B631e76:{NFSU2_TR(0x631e76);
u8 U[4];
w4(U+0,u32(0x7a8a78ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B631e7b:{NFSU2_TR(0x631e7b);
u8 U[4];
__builtin_memmove((U+0),(R+8),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B631e7c:{NFSU2_TR(0x631e7c);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x230ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B631e82:{NFSU2_TR(0x631e82);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x631e87ull));
TAIL_STATIC(0x4400d0u,440);
}
B631e87:L631e87:{c.instructions+=3;NFSU2_TR(0x631e87);
u8 U[4];
w4(U+0,u32(u32(u32(0x58ull))+u32(r4(R+16))));
__builtin_memmove((R+0),(U+0),4);
}
B631e8b:{NFSU2_TR(0x631e8b);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B631e8c:{NFSU2_TR(0x631e8c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x631e91ull));
TAIL_STATIC(0x43db50u,43d);
}
B631e91:L631e91:{c.instructions+=3;NFSU2_TR(0x631e91);
u8 U[4];
w4(U+0,u32(0x7a8a68ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B631e96:{NFSU2_TR(0x631e96);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x234ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B631e9c:{NFSU2_TR(0x631e9c);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x631ea1ull));
TAIL_STATIC(0x43db50u,43d);
}
B631ea1:L631ea1:{c.instructions+=5;NFSU2_TR(0x631ea1);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x238ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B631ea7:{NFSU2_TR(0x631ea7);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x604ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+28),(U+4),4);
}
B631ead:{NFSU2_TR(0x631ead);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x24ull))));
}
B631eb0:{NFSU2_TR(0x631eb0);
u8 U[4];
w4(U+0,u32(u32(r4(R+28))&u32(r4(R+28))));
w1(R+518,u8((r4(U+0))==(u32(0x0ull))));
}
B631eb2:{NFSU2_TR(0x631eb2);
if(r1(R+518)){{goto L631ef1;}}
}
B631eb4:L631eb4:{c.instructions+=2;NFSU2_TR(0x631eb4);
__builtin_memmove((R+4),(R+28),4);
}
B631eb6:{NFSU2_TR(0x631eb6);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x631ebbull));
TAIL_STATIC(0x4951f0u,495);
}
B631ebb:L631ebb:{c.instructions+=3;NFSU2_TR(0x631ebb);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B631ebc:{NFSU2_TR(0x631ebc);
u8 U[4];
w4(U+0,u32(0x7a8a60ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B631ec1:{NFSU2_TR(0x631ec1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x631ec6ull));
TAIL_STATIC(0x43db80u,43d);
}
B631ec6:L631ec6:{c.instructions+=3;NFSU2_TR(0x631ec6);
u8 U[4];
w4(U+0,u32(0x7a8708ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B631ecb:{NFSU2_TR(0x631ecb);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x23cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B631ed1:{NFSU2_TR(0x631ed1);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x631ed6ull));
TAIL_STATIC(0x43db50u,43d);
}
B631ed6:L631ed6:{c.instructions+=5;NFSU2_TR(0x631ed6);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0xcull))));
}
B631ed9:{NFSU2_TR(0x631ed9);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B631eda:{NFSU2_TR(0x631eda);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B631edb:{NFSU2_TR(0x631edb);
__builtin_memmove((R+4),(R+28),4);
}
B631edd:{NFSU2_TR(0x631edd);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x631ee2ull));
TAIL_STATIC(0x60fef0u,60f);
}
B631ee2:L631ee2:{c.instructions+=3;NFSU2_TR(0x631ee2);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B631ee4:{NFSU2_TR(0x631ee4);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B631ee6:{NFSU2_TR(0x631ee6);
if(r1(R+518)){{goto L631eed;}}
}
B631ee8:L631ee8:{c.instructions+=2;NFSU2_TR(0x631ee8);
u8 U[8];
w4(U+0,u32(u32(r4(R+0))+u32(u32(0x4ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B631eeb:{NFSU2_TR(0x631eeb);
{goto L631efb;}
}
B631eed:L631eed:{c.instructions+=2;NFSU2_TR(0x631eed);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B631eef:{NFSU2_TR(0x631eef);
{goto L631efb;}
}
B631ef1:L631ef1:{c.instructions+=3;NFSU2_TR(0x631ef1);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B631ef3:{NFSU2_TR(0x631ef3);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x23cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B631ef9:{NFSU2_TR(0x631ef9);
w4(R+28,u32(u32(r4(R+28))^u32(r4(R+28))));
}
B631efb:L631efb:{c.instructions+=3;NFSU2_TR(0x631efb);
u8 U[4];
w4(U+0,u32(0x7a8a50ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B631f00:{NFSU2_TR(0x631f00);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x240ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B631f06:{NFSU2_TR(0x631f06);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x631f0bull));
TAIL_STATIC(0x43db50u,43d);
}
B631f0b:L631f0b:{c.instructions+=3;NFSU2_TR(0x631f0b);
u8 U[4];
w4(U+0,u32(0x7a8a44ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B631f10:{NFSU2_TR(0x631f10);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x248ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B631f16:{NFSU2_TR(0x631f16);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x631f1bull));
TAIL_STATIC(0x43db50u,43d);
}
B631f1b:L631f1b:{c.instructions+=5;NFSU2_TR(0x631f1b);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x24cull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B631f21:{NFSU2_TR(0x631f21);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x584ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B631f27:{NFSU2_TR(0x631f27);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x8ull))));
}
B631f2a:{NFSU2_TR(0x631f2a);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B631f2c:{NFSU2_TR(0x631f2c);
if(r1(R+518)){{goto L631f8e;}}
}
B631f2e:L631f2e:{c.instructions+=8;NFSU2_TR(0x631f2e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x290ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B631f34:{NFSU2_TR(0x631f34);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x588ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B631f3a:{NFSU2_TR(0x631f3a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x29cull))));
__builtin_memmove((U+4),(R+4),4);
s4(u32(r4(U+0)),r4(U+4));
}
B631f40:{NFSU2_TR(0x631f40);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x58cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+8),(U+4),4);
}
B631f46:{NFSU2_TR(0x631f46);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2a0ull))));
__builtin_memmove((U+4),(R+8),4);
s4(u32(r4(U+0)),r4(U+4));
}
B631f4c:{NFSU2_TR(0x631f4c);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x584ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B631f52:{NFSU2_TR(0x631f52);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B631f54:{NFSU2_TR(0x631f54);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L631f69;}}
}
B631f56:L631f56:{c.instructions+=3;NFSU2_TR(0x631f56);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x68cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B631f5c:{NFSU2_TR(0x631f5c);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B631f5e:{NFSU2_TR(0x631f5e);
if(r1(R+518)){{goto L631f67;}}
}
B631f60:L631f60:{c.instructions+=1;NFSU2_TR(0x631f60);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x631f65ull));
TAIL_STATIC(0x4951f0u,495);
}
B631f65:L631f65:{c.instructions+=1;NFSU2_TR(0x631f65);
{goto L631f69;}
}
B631f67:L631f67:{c.instructions+=1;NFSU2_TR(0x631f67);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B631f69:L631f69:{c.instructions+=4;NFSU2_TR(0x631f69);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2a4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B631f6f:{NFSU2_TR(0x631f6f);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x584ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B631f75:{NFSU2_TR(0x631f75);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B631f77:{NFSU2_TR(0x631f77);
u8 U[1];
w1(U+0,u8(!(r1(R+518))));
if(r1(U+0)){{goto L631fac;}}
}
B631f79:L631f79:{c.instructions+=3;NFSU2_TR(0x631f79);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x68cull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B631f7f:{NFSU2_TR(0x631f7f);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B631f81:{NFSU2_TR(0x631f81);
if(r1(R+518)){{goto L631f8a;}}
}
B631f83:L631f83:{c.instructions+=1;NFSU2_TR(0x631f83);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x631f88ull));
TAIL_STATIC(0x4951f0u,495);
}
B631f88:L631f88:{c.instructions+=1;NFSU2_TR(0x631f88);
{goto L631fac;}
}
B631f8a:L631f8a:{c.instructions+=2;NFSU2_TR(0x631f8a);
w4(R+0,u32(u32(r4(R+0))^u32(r4(R+0))));
}
B631f8c:{NFSU2_TR(0x631f8c);
{goto L631fac;}
}
B631f8e:L631f8e:{c.instructions+=5;NFSU2_TR(0x631f8e);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x230ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B631f94:{NFSU2_TR(0x631f94);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x290ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B631f9a:{NFSU2_TR(0x631f9a);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2a4ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B631fa0:{NFSU2_TR(0x631fa0);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x29cull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B631fa6:{NFSU2_TR(0x631fa6);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2a0ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B631fac:L631fac:{c.instructions+=7;NFSU2_TR(0x631fac);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x2a8ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B631fb2:{NFSU2_TR(0x631fb2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x290ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B631fb8:{NFSU2_TR(0x631fb8);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x294ull))));
__builtin_memmove((U+4),(R+28),4);
s4(u32(r4(U+0)),r4(U+4));
}
B631fbe:{NFSU2_TR(0x631fbe);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x298ull))));
__builtin_memmove((U+4),(R+0),4);
s4(u32(r4(U+0)),r4(U+4));
}
B631fc4:{NFSU2_TR(0x631fc4);
u8 U[8];
w4(U+0,u32(u32(r4(R+20))+u32(u32(0x584ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+4),(U+4),4);
}
B631fca:{NFSU2_TR(0x631fca);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+4))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B631fcc:{NFSU2_TR(0x631fcc);
if(r1(R+518)){{goto L631fdf;}}
}
B631fce:L631fce:{c.instructions+=5;NFSU2_TR(0x631fce);
u8 U[4];
__builtin_memmove((U+0),(R+4),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B631fcf:{NFSU2_TR(0x631fcf);
u8 U[4];
w4(U+0,u32(0x45ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B631fd1:{NFSU2_TR(0x631fd1);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B631fd2:{NFSU2_TR(0x631fd2);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B631fd3:{NFSU2_TR(0x631fd3);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x631fd8ull));
TAIL_STATIC(0x610530u,610);
}
B631fd8:L631fd8:{c.instructions+=3;NFSU2_TR(0x631fd8);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B631fdb:{NFSU2_TR(0x631fdb);
__builtin_memmove((R+12),(R+0),4);
}
B631fdd:{NFSU2_TR(0x631fdd);
TAIL_STATIC(0x63200bu,632);
}
B631fdf:L631fdf:{c.instructions+=2;NFSU2_TR(0x631fdf);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B631fe1:{NFSU2_TR(0x631fe1);
if(r1(R+518)){{goto L631ff2;}}
}
B631fe3:L631fe3:{c.instructions+=5;NFSU2_TR(0x631fe3);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B631fe4:{NFSU2_TR(0x631fe4);
u8 U[4];
w4(U+0,u32(0x45ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B631fe6:{NFSU2_TR(0x631fe6);
u8 U[4];
__builtin_memmove((U+0),(R+28),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B631fe7:{NFSU2_TR(0x631fe7);
u8 U[4];
__builtin_memmove((U+0),(R+24),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B631fe8:{NFSU2_TR(0x631fe8);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),u32(0x631fedull));
TAIL_STATIC(0x610530u,610);
}
B631fed:L631fed:{c.instructions+=2;NFSU2_TR(0x631fed);
w4(R+16,u32(u32(r4(R+16))+u32(u32(0x10ull))));
}
B631ff0:{NFSU2_TR(0x631ff0);
__builtin_memmove((R+12),(R+0),4);
}
B631ff2:L631ff2:{c.instructions+=3;NFSU2_TR(0x631ff2);
u8 U[8];
w4(U+0,u32(u32(r4(R+24))+u32(u32(0x294ull))));
__builtin_memmove((U+4),gp(u32(r4(U+0))),4);
__builtin_memmove((R+0),(U+4),4);
}
B631ff8:{NFSU2_TR(0x631ff8);
u8 U[8];
__builtin_memmove((U+0),(R+28),4);
w4(U+4,u32(u32(r4(R+0))-u32(r4(U+0))));
w1(R+518,u8((r4(U+4))==(u32(0x0ull))));
}
B631ffa:{NFSU2_TR(0x631ffa);
if(r1(R+518)){TAIL_STATIC(0x63200bu,632);}
}
B631ffc:L631ffc:{c.instructions+=3;NFSU2_TR(0x631ffc);
u8 U[4];
__builtin_memmove((U+0),(R+0),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B631ffd:{NFSU2_TR(0x631ffd);
u8 U[4];
w4(U+0,u32(0x45ull));
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
}
B631fff:{NFSU2_TR(0x631fff);
u8 U[4];
__builtin_memmove((U+0),(R+12),4);
w4(R+16,u32(u32(r4(R+16))-u32(u32(0x4ull))));
s4(u32(r4(R+16)),r4(U+0));
TAIL_STATIC(0x632000u,632);
}
XIT:NFSU2_TR_EXIT(0x631,nx);return nx;
FLT:fast_fault(c,fm,fpc);
#undef SPILL
#undef EXIT
#undef NFSU2_FAULT
#undef TAIL_STATIC
#undef TAIL_DYNAMIC
}
}
